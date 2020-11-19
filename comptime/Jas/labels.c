/*===========================================================================*/
/*   (Jas/labels.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/labels.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_classfilez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_globalsz00;
		obj_t BgL_poolz00;
		obj_t BgL_poolzd2siza7ez75;
		obj_t BgL_pooledzd2nameszd2;
		obj_t BgL_flagsz00;
		obj_t BgL_mez00;
		obj_t BgL_superz00;
		obj_t BgL_interfacesz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_attributesz00;
	}                   *BgL_classfilez00_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_getzd2targetze70z35zzjas_labelsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2targetze71z35zzjas_labelsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_siza7ezd2insz75zzjas_labelsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_IMPORT obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzjas_labelsz00();
	BGL_IMPORT bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzjas_labelsz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzjas_labelsz00();
	extern obj_t BGl_u2z00zzjas_libz00(int);
	extern obj_t BGl_u4z00zzjas_libz00(int);
	static obj_t BGl_widezd2conditionalszd2zzjas_labelsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04resolvezd2labelsza31217ze3z37zzjas_labelsz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzjas_labelsz00();
	static obj_t BGl_za2opcodezd2siza7eza2z75zzjas_labelsz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_labelsz00 = BUNSPEC;
	static obj_t BGl_paddingz00zzjas_labelsz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_labelsz00();
	BGL_IMPORT obj_t BGl_absz00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_genericzd2initzd2zzjas_labelsz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_resolvezd2pczd2zzjas_labelsz00(obj_t, obj_t);
	BGL_IMPORT long BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(long, long);
	BGL_EXPORTED_DEF obj_t BGl_resolvezd2labelszd2zzjas_labelsz00 = BUNSPEC;
	static obj_t BGl_resolvezd2definitivezd2labelsz00zzjas_labelsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_labelsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
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
	static obj_t BGl_cnstzd2initzd2zzjas_labelsz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_labelsz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_labelsz00();
	extern obj_t BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	static obj_t __cnst[5];


	   
		 
		DEFINE_STRING(BGl_string1812z00zzjas_labelsz00,
		BgL_bgl_string1812za700za7za7j1822za7, "F", 1);
	      DEFINE_STRING(BGl_string1813z00zzjas_labelsz00,
		BgL_bgl_string1813za700za7za7j1823za7, "far label in handler", 20);
	      DEFINE_STRING(BGl_string1814z00zzjas_labelsz00,
		BgL_bgl_string1814za700za7za7j1824za7, "far label in localvar", 21);
	      DEFINE_STRING(BGl_string1815z00zzjas_labelsz00,
		BgL_bgl_string1815za700za7za7j1825za7, "unknown label", 13);
	      DEFINE_STRING(BGl_string1816z00zzjas_labelsz00,
		BgL_bgl_string1816za700za7za7j1826za7, "too far", 7);
	      DEFINE_STRING(BGl_string1817z00zzjas_labelsz00,
		BgL_bgl_string1817za700za7za7j1827za7, "jas_labels", 10);
	      DEFINE_STRING(BGl_string1818z00zzjas_labelsz00,
		BgL_bgl_string1818za700za7za7j1828za7,
		"(0) (0 0) (0 0 0) ok #(1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 2 3 3 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 3 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 3 2 0 0 1 1 1 1 1 1 3 3 3 3 3 3 3 5 0 3 2 3 1 1 3 3 1 1 0 4 3 3 5 5 0 0 0 0) ",
		436);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1811z00zzjas_labelsz00,
		BgL_bgl_za762za7c3za704resolve1829za7,
		BGl_z62zc3z04resolvezd2labelsza31217ze3z37zzjas_labelsz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2opcodezd2siza7eza2z75zzjas_labelsz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzjas_labelsz00));
		     ADD_ROOT((void *) (&BGl_resolvezd2labelszd2zzjas_labelsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_labelsz00(long
		BgL_checksumz00_1060, char *BgL_fromz00_1061)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_labelsz00))
				{
					BGl_requirezd2initializa7ationz75zzjas_labelsz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzjas_labelsz00();
					BGl_libraryzd2moduleszd2initz00zzjas_labelsz00();
					BGl_cnstzd2initzd2zzjas_labelsz00();
					BGl_importedzd2moduleszd2initz00zzjas_labelsz00();
					return BGl_toplevelzd2initzd2zzjas_labelsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_labelsz00()
	{
		{	/* Jas/labels.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_labels");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_labels");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_labels");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_labels");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"jas_labels");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_labels");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_labels");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"jas_labels");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_labelsz00()
	{
		{	/* Jas/labels.scm 1 */
			{	/* Jas/labels.scm 1 */
				obj_t BgL_cportz00_1046;

				{	/* Jas/labels.scm 1 */
					obj_t BgL_stringz00_1054;

					BgL_stringz00_1054 = BGl_string1818z00zzjas_labelsz00;
					{	/* Jas/labels.scm 1 */
						obj_t BgL_startz00_1055;

						BgL_startz00_1055 = BINT(((long) 0));
						{	/* Jas/labels.scm 1 */
							obj_t BgL_endz00_1056;

							BgL_endz00_1056 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1054)));
							{	/* Jas/labels.scm 1 */

								BgL_cportz00_1046 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1054, BgL_startz00_1055, BgL_endz00_1056);
				}}}}
				{
					long BgL_iz00_1047;

					BgL_iz00_1047 = ((long) 4);
				BgL_loopz00_1048:
					if ((BgL_iz00_1047 == ((long) -1)))
						{	/* Jas/labels.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/labels.scm 1 */
							{	/* Jas/labels.scm 1 */
								obj_t BgL_arg1820z00_1050;

								{	/* Jas/labels.scm 1 */

									{	/* Jas/labels.scm 1 */
										obj_t BgL_locationz00_1052;

										BgL_locationz00_1052 = BBOOL(((bool_t) 0));
										{	/* Jas/labels.scm 1 */

											BgL_arg1820z00_1050 =
												BGl_readz00zz__readerz00(BgL_cportz00_1046,
												BgL_locationz00_1052);
										}
									}
								}
								{	/* Jas/labels.scm 1 */
									int BgL_tmpz00_1087;

									BgL_tmpz00_1087 = (int) (BgL_iz00_1047);
									CNST_TABLE_SET(BgL_tmpz00_1087, BgL_arg1820z00_1050);
							}}
							{	/* Jas/labels.scm 1 */
								int BgL_auxz00_1053;

								BgL_auxz00_1053 = (int) ((BgL_iz00_1047 - ((long) 1)));
								{
									long BgL_iz00_1092;

									BgL_iz00_1092 = (long) (BgL_auxz00_1053);
									BgL_iz00_1047 = BgL_iz00_1092;
									goto BgL_loopz00_1048;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzjas_labelsz00()
	{
		{	/* Jas/labels.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_labelsz00()
	{
		{	/* Jas/labels.scm 1 */
			BGl_resolvezd2labelszd2zzjas_labelsz00 = BGl_proc1811z00zzjas_labelsz00;
			return (BGl_za2opcodezd2siza7eza2z75zzjas_labelsz00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}

	}



/* &<@resolve-labels:1217> */
	obj_t BGl_z62zc3z04resolvezd2labelsza31217ze3z37zzjas_labelsz00(obj_t
		BgL_envz00_1039, obj_t BgL_classfilez00_1040, obj_t BgL_lz00_1041)
	{
		{	/* Jas/labels.scm 8 */
			{

			BgL_fixpointz00_1059:
				if (CBOOL(BGl_widezd2conditionalszd2zzjas_labelsz00
						(BgL_classfilez00_1040, BgL_lz00_1041)))
					{	/* Jas/labels.scm 10 */
						CNST_TABLE_REF(((long) 1));
					}
				else
					{	/* Jas/labels.scm 10 */
						goto BgL_fixpointz00_1059;
					}
				return
					BGl_resolvezd2definitivezd2labelsz00zzjas_labelsz00
					(BgL_classfilez00_1040, BgL_lz00_1041);
			}
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzjas_labelsz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_265;

				BgL_headz00_265 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_266;
					obj_t BgL_tailz00_267;

					BgL_prevz00_266 = BgL_headz00_265;
					BgL_tailz00_267 = BgL_l1z00_1;
				BgL_loopz00_268:
					if (PAIRP(BgL_tailz00_267))
						{
							obj_t BgL_newzd2prevzd2_270;

							BgL_newzd2prevzd2_270 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_267), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_266, BgL_newzd2prevzd2_270);
							{
								obj_t BgL_tailz00_1108;
								obj_t BgL_prevz00_1107;

								BgL_prevz00_1107 = BgL_newzd2prevzd2_270;
								BgL_tailz00_1108 = CDR(BgL_tailz00_267);
								BgL_tailz00_267 = BgL_tailz00_1108;
								BgL_prevz00_266 = BgL_prevz00_1107;
								goto BgL_loopz00_268;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_265);
				}
			}
		}

	}



/* wide-conditionals */
	obj_t BGl_widezd2conditionalszd2zzjas_labelsz00(obj_t BgL_classfilez00_3,
		obj_t BgL_lz00_4)
	{
		{	/* Jas/labels.scm 18 */
			{	/* Jas/labels.scm 19 */
				obj_t BgL_envz00_273;

				BgL_envz00_273 =
					BGl_resolvezd2pczd2zzjas_labelsz00(BgL_classfilez00_3, BgL_lz00_4);
				{
					obj_t BgL_copz00_289;
					obj_t BgL_lz00_296;
					obj_t BgL_insz00_297;
					long BgL_pcz00_298;
					obj_t BgL_rz00_299;
					obj_t BgL_lz00_384;
					long BgL_pcz00_385;
					obj_t BgL_rz00_386;

					BgL_lz00_384 = BgL_lz00_4;
					BgL_pcz00_385 = ((long) 0);
					BgL_rz00_386 = BTRUE;
				BgL_zc3z04anonymousza31326ze3z87_387:
					if (NULLP(BgL_lz00_384))
						{	/* Jas/labels.scm 62 */
							return BgL_rz00_386;
						}
					else
						{	/* Jas/labels.scm 63 */
							bool_t BgL_test1835z00_1114;

							{	/* Jas/labels.scm 63 */
								obj_t BgL_tmpz00_1115;

								BgL_tmpz00_1115 = CAR(((obj_t) BgL_lz00_384));
								BgL_test1835z00_1114 = SYMBOLP(BgL_tmpz00_1115);
							}
							if (BgL_test1835z00_1114)
								{	/* Jas/labels.scm 63 */
									obj_t BgL_arg1330z00_391;

									BgL_arg1330z00_391 = CDR(((obj_t) BgL_lz00_384));
									{
										obj_t BgL_lz00_1121;

										BgL_lz00_1121 = BgL_arg1330z00_391;
										BgL_lz00_384 = BgL_lz00_1121;
										goto BgL_zc3z04anonymousza31326ze3z87_387;
									}
								}
							else
								{	/* Jas/labels.scm 65 */
									obj_t BgL_arg1331z00_392;
									long BgL_arg1334z00_393;
									obj_t BgL_arg1335z00_394;

									BgL_arg1331z00_392 = CDR(((obj_t) BgL_lz00_384));
									{	/* Jas/labels.scm 66 */
										obj_t BgL_arg1337z00_395;

										{	/* Jas/labels.scm 66 */
											obj_t BgL_arg1338z00_396;

											BgL_arg1338z00_396 = CAR(((obj_t) BgL_lz00_384));
											BgL_arg1337z00_395 =
												BGl_siza7ezd2insz75zzjas_labelsz00(BgL_arg1338z00_396,
												BINT(BgL_pcz00_385));
										}
										BgL_arg1334z00_393 =
											(BgL_pcz00_385 + (long) CINT(BgL_arg1337z00_395));
									}
									{	/* Jas/labels.scm 67 */
										obj_t BgL_arg1339z00_397;

										BgL_arg1339z00_397 = CAR(((obj_t) BgL_lz00_384));
										BgL_lz00_296 = BgL_lz00_384;
										BgL_insz00_297 = BgL_arg1339z00_397;
										BgL_pcz00_298 = BgL_pcz00_385;
										BgL_rz00_299 = BgL_rz00_386;
										{	/* Jas/labels.scm 30 */
											obj_t BgL_aux1059z00_302;

											BgL_aux1059z00_302 = CAR(((obj_t) BgL_insz00_297));
											if (INTEGERP(BgL_aux1059z00_302))
												{	/* Jas/labels.scm 30 */
													switch ((long) CINT(BgL_aux1059z00_302))
														{
														case ((long) 153):
														case ((long) 154):
														case ((long) 155):
														case ((long) 156):
														case ((long) 157):
														case ((long) 158):
														case ((long) 159):
														case ((long) 160):
														case ((long) 161):
														case ((long) 162):
														case ((long) 163):
														case ((long) 164):
														case ((long) 165):
														case ((long) 166):
														case ((long) 198):
														case ((long) 199):

															{	/* Jas/labels.scm 32 */
																bool_t BgL_test1837z00_1136;

																{	/* Jas/labels.scm 32 */
																	obj_t BgL_arg1273z00_317;

																	{	/* Jas/labels.scm 32 */
																		obj_t BgL_pairz00_803;

																		BgL_pairz00_803 =
																			CDR(((obj_t) BgL_insz00_297));
																		BgL_arg1273z00_317 = CAR(BgL_pairz00_803);
																	}
																	{	/* Jas/labels.scm 24 */
																		obj_t BgL_arg1227z00_804;

																		{	/* Jas/labels.scm 24 */
																			long BgL_arg1229z00_805;

																			{	/* Jas/labels.scm 24 */
																				obj_t BgL_arg1232z00_806;

																				BgL_arg1232z00_806 =
																					BGl_getzd2targetze71z35zzjas_labelsz00
																					(BgL_classfilez00_3, BgL_envz00_273,
																					BgL_arg1273z00_317);
																				BgL_arg1229z00_805 =
																					((long) CINT(BgL_arg1232z00_806) -
																					BgL_pcz00_298);
																			}
																			BgL_arg1227z00_804 =
																				BGl_absz00zz__r4_numbers_6_5z00(BINT
																				(BgL_arg1229z00_805));
																		}
																		BgL_test1837z00_1136 =
																			(
																			(long) CINT(BgL_arg1227z00_804) >
																			((long) 32752));
																}}
																if (BgL_test1837z00_1136)
																	{	/* Jas/labels.scm 33 */
																		obj_t BgL_labz00_306;

																		BgL_labz00_306 =
																			BGl_gensymz00zz__r4_symbols_6_4z00
																			(BGl_string1812z00zzjas_labelsz00);
																		{	/* Jas/labels.scm 34 */
																			obj_t BgL_arg1250z00_307;

																			{	/* Jas/labels.scm 34 */
																				long BgL_arg1252z00_308;
																				obj_t BgL_arg1253z00_309;

																				BgL_copz00_289 =
																					CAR(((obj_t) BgL_insz00_297));
																				if (
																					((long) CINT(BgL_copz00_289) <=
																						((long) 166)))
																					{	/* Jas/labels.scm 27 */
																						long BgL_arg1239z00_292;

																						{	/* Jas/labels.scm 27 */
																							long BgL_arg1242z00_293;

																							{	/* Jas/labels.scm 27 */
																								long BgL_arg1243z00_294;

																								{	/* Jas/labels.scm 27 */
																									long BgL_res1757z00_789;

																									{	/* Jas/labels.scm 27 */
																										long BgL_n1z00_771;
																										long BgL_n2z00_772;

																										BgL_n1z00_771 =
																											(long)
																											CINT(BgL_copz00_289);
																										BgL_n2z00_772 = ((long) 2);
																										{	/* Jas/labels.scm 27 */
																											bool_t
																												BgL_test1839z00_1152;
																											{	/* Jas/labels.scm 27 */
																												long BgL_arg1356z00_774;

																												BgL_arg1356z00_774 =
																													(((BgL_n1z00_771) |
																														(BgL_n2z00_772)) &
																													-2147483648);
																												BgL_test1839z00_1152 =
																													(BgL_arg1356z00_774 ==
																													((long) 0));
																											}
																											if (BgL_test1839z00_1152)
																												{	/* Jas/labels.scm 27 */
																													int32_t
																														BgL_arg1353z00_775;
																													{	/* Jas/labels.scm 27 */
																														int32_t
																															BgL_arg1354z00_776;
																														int32_t
																															BgL_arg1355z00_777;
																														{	/* Jas/labels.scm 27 */
																															int32_t
																																BgL_res1753z00_781;
																															BgL_res1753z00_781
																																=
																																(int32_t)
																																(BgL_n1z00_771);
																															BgL_arg1354z00_776
																																=
																																BgL_res1753z00_781;
																														}
																														{	/* Jas/labels.scm 27 */
																															int32_t
																																BgL_res1754z00_783;
																															BgL_res1754z00_783
																																=
																																(int32_t)
																																(BgL_n2z00_772);
																															BgL_arg1355z00_777
																																=
																																BgL_res1754z00_783;
																														}
																														BgL_arg1353z00_775 =
																															(BgL_arg1354z00_776
																															%
																															BgL_arg1355z00_777);
																													}
																													{	/* Jas/labels.scm 27 */
																														long
																															BgL_res1756z00_788;
																														{	/* Jas/labels.scm 27 */
																															long
																																BgL_arg1456z00_785;
																															BgL_arg1456z00_785
																																=
																																(long)
																																(BgL_arg1353z00_775);
																															{	/* Jas/labels.scm 27 */
																																long
																																	BgL_res1755z00_787;
																																BgL_res1755z00_787
																																	=
																																	(long)
																																	(BgL_arg1456z00_785);
																																BgL_res1756z00_788
																																	=
																																	BgL_res1755z00_787;
																														}}
																														BgL_res1757z00_789 =
																															BgL_res1756z00_788;
																												}}
																											else
																												{	/* Jas/labels.scm 27 */
																													BgL_res1757z00_789 =
																														(BgL_n1z00_771 %
																														BgL_n2z00_772);
																												}
																										}
																									}
																									BgL_arg1243z00_294 =
																										BgL_res1757z00_789;
																								}
																								BgL_arg1242z00_293 =
																									(((long) 2) *
																									BgL_arg1243z00_294);
																							}
																							BgL_arg1239z00_292 =
																								(BgL_arg1242z00_293 -
																								((long) 1));
																						}
																						BgL_arg1252z00_308 =
																							(
																							(long) CINT(BgL_copz00_289) +
																							BgL_arg1239z00_292);
																					}
																				else
																					{	/* Jas/labels.scm 26 */
																						if (
																							((long) CINT(BgL_copz00_289) ==
																								((long) 198)))
																							{	/* Jas/labels.scm 28 */
																								BgL_arg1252z00_308 =
																									((long) 199);
																							}
																						else
																							{	/* Jas/labels.scm 28 */
																								BgL_arg1252z00_308 =
																									((long) 198);
																					}}
																				BgL_arg1253z00_309 =
																					MAKE_YOUNG_PAIR(BgL_labz00_306, BNIL);
																				BgL_arg1250z00_307 =
																					MAKE_YOUNG_PAIR(BINT
																					(BgL_arg1252z00_308),
																					BgL_arg1253z00_309);
																			}
																			{	/* Jas/labels.scm 34 */
																				obj_t BgL_tmpz00_1173;

																				BgL_tmpz00_1173 =
																					((obj_t) BgL_lz00_296);
																				SET_CAR(BgL_tmpz00_1173,
																					BgL_arg1250z00_307);
																		}}
																		{	/* Jas/labels.scm 35 */
																			obj_t BgL_arg1256z00_311;

																			{	/* Jas/labels.scm 35 */
																				obj_t BgL_arg1258z00_312;
																				obj_t BgL_arg1263z00_313;

																				{	/* Jas/labels.scm 35 */
																					obj_t BgL_arg1268z00_314;

																					{	/* Jas/labels.scm 35 */
																						obj_t BgL_arg1270z00_315;

																						{	/* Jas/labels.scm 35 */
																							obj_t BgL_pairz00_817;

																							BgL_pairz00_817 =
																								CDR(((obj_t) BgL_insz00_297));
																							BgL_arg1270z00_315 =
																								CAR(BgL_pairz00_817);
																						}
																						BgL_arg1268z00_314 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1270z00_315, BNIL);
																					}
																					BgL_arg1258z00_312 =
																						MAKE_YOUNG_PAIR(BINT(((long) 200)),
																						BgL_arg1268z00_314);
																				}
																				{	/* Jas/labels.scm 37 */
																					obj_t BgL_arg1271z00_316;

																					BgL_arg1271z00_316 =
																						CDR(((obj_t) BgL_lz00_296));
																					BgL_arg1263z00_313 =
																						MAKE_YOUNG_PAIR(BgL_labz00_306,
																						BgL_arg1271z00_316);
																				}
																				BgL_arg1256z00_311 =
																					MAKE_YOUNG_PAIR(BgL_arg1258z00_312,
																					BgL_arg1263z00_313);
																			}
																			{	/* Jas/labels.scm 35 */
																				obj_t BgL_tmpz00_1186;

																				BgL_tmpz00_1186 =
																					((obj_t) BgL_lz00_296);
																				SET_CDR(BgL_tmpz00_1186,
																					BgL_arg1256z00_311);
																		}}
																		BgL_arg1335z00_394 = BFALSE;
																	}
																else
																	{	/* Jas/labels.scm 32 */
																		BgL_arg1335z00_394 = BgL_rz00_299;
																	}
															}
															break;
														case ((long) 167):
														case ((long) 168):

															{	/* Jas/labels.scm 41 */
																bool_t BgL_test1841z00_1189;

																{	/* Jas/labels.scm 41 */
																	obj_t BgL_arg1281z00_323;

																	{	/* Jas/labels.scm 41 */
																		obj_t BgL_pairz00_823;

																		BgL_pairz00_823 =
																			CDR(((obj_t) BgL_insz00_297));
																		BgL_arg1281z00_323 = CAR(BgL_pairz00_823);
																	}
																	{	/* Jas/labels.scm 24 */
																		obj_t BgL_arg1227z00_824;

																		{	/* Jas/labels.scm 24 */
																			long BgL_arg1229z00_825;

																			{	/* Jas/labels.scm 24 */
																				obj_t BgL_arg1232z00_826;

																				BgL_arg1232z00_826 =
																					BGl_getzd2targetze71z35zzjas_labelsz00
																					(BgL_classfilez00_3, BgL_envz00_273,
																					BgL_arg1281z00_323);
																				BgL_arg1229z00_825 =
																					((long) CINT(BgL_arg1232z00_826) -
																					BgL_pcz00_298);
																			}
																			BgL_arg1227z00_824 =
																				BGl_absz00zz__r4_numbers_6_5z00(BINT
																				(BgL_arg1229z00_825));
																		}
																		BgL_test1841z00_1189 =
																			(
																			(long) CINT(BgL_arg1227z00_824) >
																			((long) 32752));
																}}
																if (BgL_test1841z00_1189)
																	{	/* Jas/labels.scm 41 */
																		{	/* Jas/labels.scm 43 */
																			long BgL_arg1276z00_320;

																			BgL_arg1276z00_320 =
																				(((long) 200) +
																				((long) CINT(CAR(
																							((obj_t) BgL_insz00_297))) -
																					((long) 167)));
																			{	/* Jas/labels.scm 43 */
																				obj_t BgL_auxz00_1207;
																				obj_t BgL_tmpz00_1205;

																				BgL_auxz00_1207 =
																					BINT(BgL_arg1276z00_320);
																				BgL_tmpz00_1205 =
																					((obj_t) BgL_insz00_297);
																				SET_CAR(BgL_tmpz00_1205,
																					BgL_auxz00_1207);
																		}}
																		BgL_arg1335z00_394 = BFALSE;
																	}
																else
																	{	/* Jas/labels.scm 41 */
																		BgL_arg1335z00_394 = BgL_rz00_299;
																	}
															}
															break;
														case ((long) 202):

															{
																obj_t BgL_begz00_324;
																obj_t BgL_endz00_325;
																obj_t BgL_labz00_326;
																obj_t BgL_typez00_327;

																{	/* Jas/labels.scm 47 */
																	obj_t BgL_ezd2102zd2_329;

																	BgL_ezd2102zd2_329 =
																		CDR(((obj_t) BgL_insz00_297));
																	if (PAIRP(BgL_ezd2102zd2_329))
																		{	/* Jas/labels.scm 46 */
																			obj_t BgL_cdrzd2112zd2_331;

																			BgL_cdrzd2112zd2_331 =
																				CDR(BgL_ezd2102zd2_329);
																			if (PAIRP(BgL_cdrzd2112zd2_331))
																				{	/* Jas/labels.scm 46 */
																					obj_t BgL_cdrzd2118zd2_333;

																					BgL_cdrzd2118zd2_333 =
																						CDR(BgL_cdrzd2112zd2_331);
																					if (PAIRP(BgL_cdrzd2118zd2_333))
																						{	/* Jas/labels.scm 46 */
																							obj_t BgL_cdrzd2123zd2_335;

																							BgL_cdrzd2123zd2_335 =
																								CDR(BgL_cdrzd2118zd2_333);
																							if (PAIRP(BgL_cdrzd2123zd2_335))
																								{	/* Jas/labels.scm 46 */
																									if (NULLP(CDR
																											(BgL_cdrzd2123zd2_335)))
																										{	/* Jas/labels.scm 46 */
																											BgL_begz00_324 =
																												CAR(BgL_ezd2102zd2_329);
																											BgL_endz00_325 =
																												CAR
																												(BgL_cdrzd2112zd2_331);
																											BgL_labz00_326 =
																												CAR
																												(BgL_cdrzd2118zd2_333);
																											BgL_typez00_327 =
																												CAR
																												(BgL_cdrzd2123zd2_335);
																											{	/* Jas/labels.scm 49 */
																												bool_t
																													BgL_test1847z00_1226;
																												{	/* Jas/labels.scm 49 */
																													bool_t
																														BgL_test1848z00_1227;
																													{	/* Jas/labels.scm 49 */
																														obj_t
																															BgL_arg1301z00_351;
																														BgL_arg1301z00_351 =
																															BGl_getzd2targetze71z35zzjas_labelsz00
																															(BgL_classfilez00_3,
																															BgL_envz00_273,
																															BgL_endz00_325);
																														BgL_test1848z00_1227
																															=
																															((long)
																															CINT
																															(BgL_arg1301z00_351)
																															>=
																															((long) 65536));
																													}
																													if (BgL_test1848z00_1227)
																														{	/* Jas/labels.scm 49 */
																															BgL_test1847z00_1226
																																= ((bool_t) 1);
																														}
																													else
																														{	/* Jas/labels.scm 50 */
																															obj_t
																																BgL_arg1300z00_350;
																															BgL_arg1300z00_350
																																=
																																BGl_getzd2targetze71z35zzjas_labelsz00
																																(BgL_classfilez00_3,
																																BgL_envz00_273,
																																BgL_labz00_326);
																															BgL_test1847z00_1226
																																=
																																((long)
																																CINT
																																(BgL_arg1300z00_350)
																																>=
																																((long) 65536));
																												}}
																												if (BgL_test1847z00_1226)
																													{	/* Jas/labels.scm 49 */
																														BgL_arg1335z00_394 =
																															BGl_jaszd2errorzd2zzjas_classfilez00
																															(((BgL_classfilez00_bglt) BgL_classfilez00_3), BGl_string1813z00zzjas_labelsz00, BgL_insz00_297);
																													}
																												else
																													{	/* Jas/labels.scm 49 */
																														BgL_arg1335z00_394 =
																															BgL_rz00_299;
																													}
																											}
																										}
																									else
																										{	/* Jas/labels.scm 46 */
																											BgL_arg1335z00_394 =
																												BFALSE;
																										}
																								}
																							else
																								{	/* Jas/labels.scm 46 */
																									BgL_arg1335z00_394 = BFALSE;
																								}
																						}
																					else
																						{	/* Jas/labels.scm 46 */
																							BgL_arg1335z00_394 = BFALSE;
																						}
																				}
																			else
																				{	/* Jas/labels.scm 46 */
																					BgL_arg1335z00_394 = BFALSE;
																				}
																		}
																	else
																		{	/* Jas/labels.scm 46 */
																			BgL_arg1335z00_394 = BFALSE;
																		}
																}
															}
															break;
														case ((long) 205):

															{	/* Jas/labels.scm 54 */
																obj_t BgL_ezd2130zd2_358;

																BgL_ezd2130zd2_358 =
																	CDR(((obj_t) BgL_insz00_297));
																if (PAIRP(BgL_ezd2130zd2_358))
																	{	/* Jas/labels.scm 53 */
																		obj_t BgL_cdrzd2142zd2_360;

																		BgL_cdrzd2142zd2_360 =
																			CDR(BgL_ezd2130zd2_358);
																		if (PAIRP(BgL_cdrzd2142zd2_360))
																			{	/* Jas/labels.scm 53 */
																				obj_t BgL_cdrzd2149zd2_362;

																				BgL_cdrzd2149zd2_362 =
																					CDR(BgL_cdrzd2142zd2_360);
																				if (PAIRP(BgL_cdrzd2149zd2_362))
																					{	/* Jas/labels.scm 53 */
																						obj_t BgL_cdrzd2155zd2_364;

																						BgL_cdrzd2155zd2_364 =
																							CDR(BgL_cdrzd2149zd2_362);
																						if (PAIRP(BgL_cdrzd2155zd2_364))
																							{	/* Jas/labels.scm 53 */
																								obj_t BgL_cdrzd2160zd2_366;

																								BgL_cdrzd2160zd2_366 =
																									CDR(BgL_cdrzd2155zd2_364);
																								if (PAIRP(BgL_cdrzd2160zd2_366))
																									{	/* Jas/labels.scm 53 */
																										if (NULLP(CDR
																												(BgL_cdrzd2160zd2_366)))
																											{	/* Jas/labels.scm 53 */
																												obj_t
																													BgL_arg1309z00_370;
																												obj_t
																													BgL_arg1310z00_371;
																												BgL_arg1309z00_370 =
																													CAR
																													(BgL_ezd2130zd2_358);
																												BgL_arg1310z00_371 =
																													CAR
																													(BgL_cdrzd2142zd2_360);
																												{	/* Jas/labels.scm 56 */
																													bool_t
																														BgL_test1855z00_1261;
																													{	/* Jas/labels.scm 56 */
																														bool_t
																															BgL_test1856z00_1262;
																														{	/* Jas/labels.scm 56 */
																															obj_t
																																BgL_arg1325z00_883;
																															BgL_arg1325z00_883
																																=
																																BGl_getzd2targetze71z35zzjas_labelsz00
																																(BgL_classfilez00_3,
																																BgL_envz00_273,
																																BgL_arg1309z00_370);
																															BgL_test1856z00_1262
																																=
																																((long)
																																CINT
																																(BgL_arg1325z00_883)
																																>=
																																((long) 65536));
																														}
																														if (BgL_test1856z00_1262)
																															{	/* Jas/labels.scm 56 */
																																BgL_test1855z00_1261
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Jas/labels.scm 57 */
																																obj_t
																																	BgL_arg1324z00_884;
																																BgL_arg1324z00_884
																																	=
																																	BGl_getzd2targetze71z35zzjas_labelsz00
																																	(BgL_classfilez00_3,
																																	BgL_envz00_273,
																																	BgL_arg1310z00_371);
																																BgL_test1855z00_1261
																																	=
																																	((long)
																																	CINT
																																	(BgL_arg1324z00_884)
																																	>=
																																	((long)
																																		65536));
																													}}
																													if (BgL_test1855z00_1261)
																														{	/* Jas/labels.scm 56 */
																															BgL_arg1335z00_394
																																=
																																BGl_jaszd2errorzd2zzjas_classfilez00
																																(((BgL_classfilez00_bglt) BgL_classfilez00_3), BGl_string1814z00zzjas_labelsz00, BgL_insz00_297);
																														}
																													else
																														{	/* Jas/labels.scm 56 */
																															BgL_arg1335z00_394
																																= BgL_rz00_299;
																														}
																												}
																											}
																										else
																											{	/* Jas/labels.scm 53 */
																												BgL_arg1335z00_394 =
																													BFALSE;
																											}
																									}
																								else
																									{	/* Jas/labels.scm 53 */
																										BgL_arg1335z00_394 = BFALSE;
																									}
																							}
																						else
																							{	/* Jas/labels.scm 53 */
																								BgL_arg1335z00_394 = BFALSE;
																							}
																					}
																				else
																					{	/* Jas/labels.scm 53 */
																						BgL_arg1335z00_394 = BFALSE;
																					}
																			}
																		else
																			{	/* Jas/labels.scm 53 */
																				BgL_arg1335z00_394 = BFALSE;
																			}
																	}
																else
																	{	/* Jas/labels.scm 53 */
																		BgL_arg1335z00_394 = BFALSE;
																	}
															}
															break;
														default:
															BgL_arg1335z00_394 = BgL_rz00_299;
														}
												}
											else
												{	/* Jas/labels.scm 30 */
													BgL_arg1335z00_394 = BgL_rz00_299;
												}
										}
									}
									{
										obj_t BgL_rz00_1275;
										long BgL_pcz00_1274;
										obj_t BgL_lz00_1273;

										BgL_lz00_1273 = BgL_arg1331z00_392;
										BgL_pcz00_1274 = BgL_arg1334z00_393;
										BgL_rz00_1275 = BgL_arg1335z00_394;
										BgL_rz00_386 = BgL_rz00_1275;
										BgL_pcz00_385 = BgL_pcz00_1274;
										BgL_lz00_384 = BgL_lz00_1273;
										goto BgL_zc3z04anonymousza31326ze3z87_387;
									}
								}
						}
				}
			}
		}

	}



/* get-target~1 */
	obj_t BGl_getzd2targetze71z35zzjas_labelsz00(obj_t BgL_classfilez00_1045,
		obj_t BgL_envz00_1044, obj_t BgL_labelz00_279)
	{
		{	/* Jas/labels.scm 22 */
			{	/* Jas/labels.scm 21 */
				obj_t BgL_arg1225z00_281;

				{	/* Jas/labels.scm 21 */
					obj_t BgL__ortest_1057z00_282;

					BgL__ortest_1057z00_282 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_labelz00_279,
						BgL_envz00_1044);
					if (CBOOL(BgL__ortest_1057z00_282))
						{	/* Jas/labels.scm 21 */
							BgL_arg1225z00_281 = BgL__ortest_1057z00_282;
						}
					else
						{	/* Jas/labels.scm 21 */
							BgL_arg1225z00_281 =
								BGl_jaszd2errorzd2zzjas_classfilez00(
								((BgL_classfilez00_bglt) BgL_classfilez00_1045),
								BGl_string1815z00zzjas_labelsz00, BgL_labelz00_279);
						}
				}
				return CDR(((obj_t) BgL_arg1225z00_281));
			}
		}

	}



/* resolve-definitive-labels */
	obj_t BGl_resolvezd2definitivezd2labelsz00zzjas_labelsz00(obj_t
		BgL_classfilez00_5, obj_t BgL_lz00_6)
	{
		{	/* Jas/labels.scm 73 */
			{	/* Jas/labels.scm 74 */
				obj_t BgL_envz00_404;

				BgL_envz00_404 =
					BGl_resolvezd2pczd2zzjas_labelsz00(BgL_classfilez00_5, BgL_lz00_6);
				{
					obj_t BgL_insz00_407;
					obj_t BgL_pcz00_408;
					obj_t BgL_lz00_545;
					obj_t BgL_pcz00_546;
					obj_t BgL_donez00_547;

					BgL_lz00_545 = BgL_lz00_6;
					BgL_pcz00_546 = BINT(((long) 0));
					BgL_donez00_547 = BNIL;
				BgL_zc3z04anonymousza31627ze3z87_548:
					if (NULLP(BgL_lz00_545))
						{	/* Jas/labels.scm 117 */
							return bgl_reverse_bang(BgL_donez00_547);
						}
					else
						{	/* Jas/labels.scm 118 */
							bool_t BgL_test1859z00_1287;

							{	/* Jas/labels.scm 118 */
								obj_t BgL_tmpz00_1288;

								BgL_tmpz00_1288 = CAR(((obj_t) BgL_lz00_545));
								BgL_test1859z00_1287 = SYMBOLP(BgL_tmpz00_1288);
							}
							if (BgL_test1859z00_1287)
								{	/* Jas/labels.scm 118 */
									obj_t BgL_arg1634z00_552;

									BgL_arg1634z00_552 = CDR(((obj_t) BgL_lz00_545));
									{
										obj_t BgL_lz00_1294;

										BgL_lz00_1294 = BgL_arg1634z00_552;
										BgL_lz00_545 = BgL_lz00_1294;
										goto BgL_zc3z04anonymousza31627ze3z87_548;
									}
								}
							else
								{	/* Jas/labels.scm 120 */
									obj_t BgL_arg1639z00_553;
									obj_t BgL_arg1640z00_554;
									obj_t BgL_arg1641z00_555;

									BgL_arg1639z00_553 = CDR(((obj_t) BgL_lz00_545));
									{	/* Jas/labels.scm 121 */
										obj_t BgL_arg1644z00_556;

										{	/* Jas/labels.scm 121 */
											obj_t BgL_arg1652z00_557;

											BgL_arg1652z00_557 = CAR(((obj_t) BgL_lz00_545));
											BgL_arg1644z00_556 =
												BGl_siza7ezd2insz75zzjas_labelsz00(BgL_arg1652z00_557,
												BgL_pcz00_546);
										}
										BgL_arg1640z00_554 =
											BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_pcz00_546,
											BgL_arg1644z00_556);
									}
									{	/* Jas/labels.scm 122 */
										obj_t BgL_arg1662z00_558;

										{	/* Jas/labels.scm 122 */
											obj_t BgL_arg1663z00_559;

											BgL_arg1663z00_559 = CAR(((obj_t) BgL_lz00_545));
											BgL_insz00_407 = BgL_arg1663z00_559;
											BgL_pcz00_408 = BgL_pcz00_546;
											{
												obj_t BgL_labelz00_531;

												{	/* Jas/labels.scm 86 */
													obj_t BgL_aux1062z00_414;

													BgL_aux1062z00_414 = CAR(((obj_t) BgL_insz00_407));
													if (INTEGERP(BgL_aux1062z00_414))
														{	/* Jas/labels.scm 86 */
															switch ((long) CINT(BgL_aux1062z00_414))
																{
																case ((long) 153):
																case ((long) 154):
																case ((long) 155):
																case ((long) 156):
																case ((long) 157):
																case ((long) 158):
																case ((long) 159):
																case ((long) 160):
																case ((long) 161):
																case ((long) 162):
																case ((long) 163):
																case ((long) 164):
																case ((long) 165):
																case ((long) 166):
																case ((long) 167):
																case ((long) 168):
																case ((long) 198):
																case ((long) 199):

																	{	/* Jas/labels.scm 89 */
																		obj_t BgL_arg1345z00_417;

																		{	/* Jas/labels.scm 89 */
																			obj_t BgL_arg1346z00_418;

																			{	/* Jas/labels.scm 89 */
																				obj_t BgL_pairz00_907;

																				BgL_pairz00_907 =
																					CDR(((obj_t) BgL_insz00_407));
																				BgL_arg1346z00_418 =
																					CAR(BgL_pairz00_907);
																			}
																			BgL_labelz00_531 = BgL_arg1346z00_418;
																			{	/* Jas/labels.scm 80 */
																				obj_t BgL_dz00_533;

																				BgL_dz00_533 =
																					BGl_2zd2zd2zz__r4_numbers_6_5z00
																					(BGl_getzd2targetze70z35zzjas_labelsz00
																					(BgL_classfilez00_5, BgL_envz00_404,
																						BgL_labelz00_531), BgL_pcz00_408);
																				if (BGl_2ze3ze3zz__r4_numbers_6_5z00
																					(BGl_absz00zz__r4_numbers_6_5z00
																						(BgL_dz00_533),
																						BINT(((long) 32752))))
																					{	/* Jas/labels.scm 81 */
																						BgL_arg1345z00_417 =
																							BGl_jaszd2errorzd2zzjas_classfilez00
																							(((BgL_classfilez00_bglt)
																								BgL_classfilez00_5),
																							BGl_string1816z00zzjas_labelsz00,
																							BgL_labelz00_531);
																					}
																				else
																					{	/* Jas/labels.scm 81 */
																						BgL_arg1345z00_417 =
																							BGl_u2z00zzjas_libz00(CINT
																							(BgL_dz00_533));
																					}
																			}
																		}
																		BgL_arg1662z00_558 =
																			MAKE_YOUNG_PAIR(BgL_aux1062z00_414,
																			BgL_arg1345z00_417);
																	}
																	break;
																case ((long) 200):
																case ((long) 201):

																	{	/* Jas/labels.scm 91 */
																		obj_t BgL_arg1348z00_420;

																		{	/* Jas/labels.scm 91 */
																			obj_t BgL_arg1351z00_421;

																			{	/* Jas/labels.scm 91 */
																				obj_t BgL_pairz00_912;

																				BgL_pairz00_912 =
																					CDR(((obj_t) BgL_insz00_407));
																				BgL_arg1351z00_421 =
																					CAR(BgL_pairz00_912);
																			}
																			{	/* Jas/labels.scm 85 */
																				obj_t BgL_arg1624z00_913;

																				BgL_arg1624z00_913 =
																					BGl_2zd2zd2zz__r4_numbers_6_5z00
																					(BGl_getzd2targetze70z35zzjas_labelsz00
																					(BgL_classfilez00_5, BgL_envz00_404,
																						BgL_arg1351z00_421), BgL_pcz00_408);
																				BgL_arg1348z00_420 =
																					BGl_u4z00zzjas_libz00(CINT
																					(BgL_arg1624z00_913));
																		}}
																		BgL_arg1662z00_558 =
																			MAKE_YOUNG_PAIR(BgL_aux1062z00_414,
																			BgL_arg1348z00_420);
																	} break;
																case ((long) 170):

																	{	/* Jas/labels.scm 93 */
																		obj_t BgL_arg1352z00_422;

																		{	/* Jas/labels.scm 93 */
																			obj_t BgL_arg1357z00_423;
																			obj_t BgL_arg1360z00_424;

																			BgL_arg1357z00_423 =
																				BGl_paddingz00zzjas_labelsz00
																				(BgL_pcz00_408);
																			{	/* Jas/labels.scm 93 */
																				obj_t BgL_arg1361z00_425;
																				obj_t BgL_arg1363z00_426;

																				{	/* Jas/labels.scm 93 */
																					obj_t BgL_arg1364z00_427;

																					{	/* Jas/labels.scm 93 */
																						obj_t BgL_pairz00_918;

																						BgL_pairz00_918 =
																							CDR(((obj_t) BgL_insz00_407));
																						BgL_arg1364z00_427 =
																							CAR(BgL_pairz00_918);
																					}
																					{	/* Jas/labels.scm 85 */
																						obj_t BgL_arg1624z00_919;

																						BgL_arg1624z00_919 =
																							BGl_2zd2zd2zz__r4_numbers_6_5z00
																							(BGl_getzd2targetze70z35zzjas_labelsz00
																							(BgL_classfilez00_5,
																								BgL_envz00_404,
																								BgL_arg1364z00_427),
																							BgL_pcz00_408);
																						BgL_arg1361z00_425 =
																							BGl_u4z00zzjas_libz00(CINT
																							(BgL_arg1624z00_919));
																				}}
																				{	/* Jas/labels.scm 94 */
																					obj_t BgL_arg1367z00_428;
																					obj_t BgL_arg1370z00_429;

																					{	/* Jas/labels.scm 94 */
																						obj_t BgL_arg1371z00_430;

																						{	/* Jas/labels.scm 94 */
																							obj_t BgL_pairz00_926;

																							{	/* Jas/labels.scm 94 */
																								obj_t BgL_pairz00_925;

																								BgL_pairz00_925 =
																									CDR(((obj_t) BgL_insz00_407));
																								BgL_pairz00_926 =
																									CDR(BgL_pairz00_925);
																							}
																							BgL_arg1371z00_430 =
																								CAR(BgL_pairz00_926);
																						}
																						BgL_arg1367z00_428 =
																							BGl_u4z00zzjas_libz00(CINT
																							(BgL_arg1371z00_430));
																					}
																					{	/* Jas/labels.scm 95 */
																						obj_t BgL_arg1372z00_431;
																						obj_t BgL_arg1381z00_432;

																						{	/* Jas/labels.scm 95 */
																							obj_t BgL_arg1382z00_433;

																							{	/* Jas/labels.scm 95 */
																								obj_t BgL_auxz00_1343;

																								{	/* Jas/labels.scm 95 */
																									obj_t BgL_auxz00_1349;
																									obj_t BgL_auxz00_1344;

																									{	/* Jas/labels.scm 95 */
																										long BgL_tmpz00_1350;

																										{	/* Jas/labels.scm 95 */
																											obj_t BgL_auxz00_1351;

																											{	/* Jas/labels.scm 95 */
																												obj_t BgL_pairz00_938;

																												{	/* Jas/labels.scm 95 */
																													obj_t BgL_pairz00_937;

																													BgL_pairz00_937 =
																														CDR(
																														((obj_t)
																															BgL_insz00_407));
																													BgL_pairz00_938 =
																														CDR
																														(BgL_pairz00_937);
																												}
																												BgL_auxz00_1351 =
																													CDR(BgL_pairz00_938);
																											}
																											BgL_tmpz00_1350 =
																												bgl_list_length
																												(BgL_auxz00_1351);
																										}
																										BgL_auxz00_1349 =
																											BINT(BgL_tmpz00_1350);
																									}
																									{	/* Jas/labels.scm 95 */
																										obj_t BgL_pairz00_932;

																										{	/* Jas/labels.scm 95 */
																											obj_t BgL_pairz00_931;

																											BgL_pairz00_931 =
																												CDR(
																												((obj_t)
																													BgL_insz00_407));
																											BgL_pairz00_932 =
																												CDR(BgL_pairz00_931);
																										}
																										BgL_auxz00_1344 =
																											CAR(BgL_pairz00_932);
																									}
																									BgL_auxz00_1343 =
																										BGl_2zb2zb2zz__r4_numbers_6_5z00
																										(BgL_auxz00_1344,
																										BgL_auxz00_1349);
																								}
																								BgL_arg1382z00_433 =
																									BGl_2zd2zd2zz__r4_numbers_6_5z00
																									(BgL_auxz00_1343,
																									BINT(((long) 1)));
																							}
																							BgL_arg1372z00_431 =
																								BGl_u4z00zzjas_libz00(CINT
																								(BgL_arg1382z00_433));
																						}
																						{	/* Jas/labels.scm 96 */
																							obj_t BgL_runner1422z00_454;

																							{	/* Jas/labels.scm 96 */
																								obj_t BgL_l1206z00_438;

																								{	/* Jas/labels.scm 96 */
																									obj_t BgL_pairz00_944;

																									{	/* Jas/labels.scm 96 */
																										obj_t BgL_pairz00_943;

																										BgL_pairz00_943 =
																											CDR(
																											((obj_t) BgL_insz00_407));
																										BgL_pairz00_944 =
																											CDR(BgL_pairz00_943);
																									}
																									BgL_l1206z00_438 =
																										CDR(BgL_pairz00_944);
																								}
																								if (NULLP(BgL_l1206z00_438))
																									{	/* Jas/labels.scm 96 */
																										BgL_runner1422z00_454 =
																											BNIL;
																									}
																								else
																									{	/* Jas/labels.scm 96 */
																										obj_t BgL_head1208z00_440;

																										{	/* Jas/labels.scm 96 */
																											obj_t BgL_arg1418z00_452;

																											{	/* Jas/labels.scm 96 */
																												obj_t
																													BgL_arg1421z00_453;
																												BgL_arg1421z00_453 =
																													CAR(((obj_t)
																														BgL_l1206z00_438));
																												{	/* Jas/labels.scm 85 */
																													obj_t
																														BgL_arg1624z00_947;
																													BgL_arg1624z00_947 =
																														BGl_2zd2zd2zz__r4_numbers_6_5z00
																														(BGl_getzd2targetze70z35zzjas_labelsz00
																														(BgL_classfilez00_5,
																															BgL_envz00_404,
																															BgL_arg1421z00_453),
																														BgL_pcz00_408);
																													BgL_arg1418z00_452 =
																														BGl_u4z00zzjas_libz00
																														(CINT
																														(BgL_arg1624z00_947));
																												}
																											}
																											{	/* Jas/labels.scm 96 */
																												obj_t
																													BgL_res1789z00_949;
																												BgL_res1789z00_949 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1418z00_452,
																													BNIL);
																												BgL_head1208z00_440 =
																													BgL_res1789z00_949;
																											}
																										}
																										{	/* Jas/labels.scm 96 */
																											obj_t BgL_g1211z00_441;

																											BgL_g1211z00_441 =
																												CDR(
																												((obj_t)
																													BgL_l1206z00_438));
																											{
																												obj_t BgL_l1206z00_443;
																												obj_t
																													BgL_tail1209z00_444;
																												BgL_l1206z00_443 =
																													BgL_g1211z00_441;
																												BgL_tail1209z00_444 =
																													BgL_head1208z00_440;
																											BgL_zc3z04anonymousza31390ze3z87_445:
																												if (NULLP
																													(BgL_l1206z00_443))
																													{	/* Jas/labels.scm 96 */
																														BgL_runner1422z00_454
																															=
																															BgL_head1208z00_440;
																													}
																												else
																													{	/* Jas/labels.scm 96 */
																														obj_t
																															BgL_newtail1210z00_447;
																														{	/* Jas/labels.scm 96 */
																															obj_t
																																BgL_arg1396z00_449;
																															{	/* Jas/labels.scm 96 */
																																obj_t
																																	BgL_arg1417z00_450;
																																BgL_arg1417z00_450
																																	=
																																	CAR(((obj_t)
																																		BgL_l1206z00_443));
																																{	/* Jas/labels.scm 85 */
																																	obj_t
																																		BgL_arg1624z00_953;
																																	BgL_arg1624z00_953
																																		=
																																		BGl_2zd2zd2zz__r4_numbers_6_5z00
																																		(BGl_getzd2targetze70z35zzjas_labelsz00
																																		(BgL_classfilez00_5,
																																			BgL_envz00_404,
																																			BgL_arg1417z00_450),
																																		BgL_pcz00_408);
																																	BgL_arg1396z00_449
																																		=
																																		BGl_u4z00zzjas_libz00
																																		(CINT
																																		(BgL_arg1624z00_953));
																																}
																															}
																															{	/* Jas/labels.scm 96 */
																																obj_t
																																	BgL_res1791z00_955;
																																BgL_res1791z00_955
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1396z00_449,
																																	BNIL);
																																BgL_newtail1210z00_447
																																	=
																																	BgL_res1791z00_955;
																															}
																														}
																														SET_CDR
																															(BgL_tail1209z00_444,
																															BgL_newtail1210z00_447);
																														{	/* Jas/labels.scm 96 */
																															obj_t
																																BgL_arg1394z00_448;
																															BgL_arg1394z00_448
																																=
																																CDR(((obj_t)
																																	BgL_l1206z00_443));
																															{
																																obj_t
																																	BgL_tail1209z00_1391;
																																obj_t
																																	BgL_l1206z00_1390;
																																BgL_l1206z00_1390
																																	=
																																	BgL_arg1394z00_448;
																																BgL_tail1209z00_1391
																																	=
																																	BgL_newtail1210z00_447;
																																BgL_tail1209z00_444
																																	=
																																	BgL_tail1209z00_1391;
																																BgL_l1206z00_443
																																	=
																																	BgL_l1206z00_1390;
																																goto
																																	BgL_zc3z04anonymousza31390ze3z87_445;
																															}
																														}
																													}
																											}
																										}
																									}
																							}
																							BgL_arg1381z00_432 =
																								BGl_appendz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_runner1422z00_454);
																						}
																						BgL_arg1370z00_429 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg1372z00_431,
																							BgL_arg1381z00_432);
																					}
																					BgL_arg1363z00_426 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg1367z00_428,
																						BgL_arg1370z00_429);
																				}
																				BgL_arg1360z00_424 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1361z00_425,
																					BgL_arg1363z00_426);
																			}
																			BgL_arg1352z00_422 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1357z00_423,
																				BgL_arg1360z00_424);
																		}
																		BgL_arg1662z00_558 =
																			MAKE_YOUNG_PAIR(BINT(((long) 170)),
																			BgL_arg1352z00_422);
																	} break;
																case ((long) 171):

																	{	/* Jas/labels.scm 98 */
																		obj_t BgL_arg1441z00_455;

																		{	/* Jas/labels.scm 98 */
																			obj_t BgL_arg1442z00_456;
																			obj_t BgL_arg1448z00_457;

																			BgL_arg1442z00_456 =
																				BGl_paddingz00zzjas_labelsz00
																				(BgL_pcz00_408);
																			{	/* Jas/labels.scm 98 */
																				obj_t BgL_arg1449z00_458;
																				obj_t BgL_arg1461z00_459;

																				{	/* Jas/labels.scm 98 */
																					obj_t BgL_arg1462z00_460;

																					{	/* Jas/labels.scm 98 */
																						obj_t BgL_pairz00_961;

																						BgL_pairz00_961 =
																							CDR(((obj_t) BgL_insz00_407));
																						BgL_arg1462z00_460 =
																							CAR(BgL_pairz00_961);
																					}
																					{	/* Jas/labels.scm 85 */
																						obj_t BgL_arg1624z00_962;

																						BgL_arg1624z00_962 =
																							BGl_2zd2zd2zz__r4_numbers_6_5z00
																							(BGl_getzd2targetze70z35zzjas_labelsz00
																							(BgL_classfilez00_5,
																								BgL_envz00_404,
																								BgL_arg1462z00_460),
																							BgL_pcz00_408);
																						BgL_arg1449z00_458 =
																							BGl_u4z00zzjas_libz00(CINT
																							(BgL_arg1624z00_962));
																				}}
																				{	/* Jas/labels.scm 99 */
																					obj_t BgL_arg1464z00_461;
																					obj_t BgL_arg1465z00_462;

																					{	/* Jas/labels.scm 99 */
																						long BgL_arg1474z00_463;

																						{	/* Jas/labels.scm 99 */
																							obj_t BgL_auxz00_1407;

																							{	/* Jas/labels.scm 99 */
																								obj_t BgL_pairz00_967;

																								BgL_pairz00_967 =
																									CDR(((obj_t) BgL_insz00_407));
																								BgL_auxz00_1407 =
																									CDR(BgL_pairz00_967);
																							}
																							BgL_arg1474z00_463 =
																								bgl_list_length
																								(BgL_auxz00_1407);
																						}
																						BgL_arg1464z00_461 =
																							BGl_u4z00zzjas_libz00(
																							(int) (BgL_arg1474z00_463));
																					}
																					{	/* Jas/labels.scm 100 */
																						obj_t BgL_runner1522z00_482;

																						{	/* Jas/labels.scm 101 */
																							obj_t BgL_l1212z00_465;

																							{	/* Jas/labels.scm 104 */
																								obj_t BgL_pairz00_971;

																								BgL_pairz00_971 =
																									CDR(((obj_t) BgL_insz00_407));
																								BgL_l1212z00_465 =
																									CDR(BgL_pairz00_971);
																							}
																							if (NULLP(BgL_l1212z00_465))
																								{	/* Jas/labels.scm 101 */
																									BgL_runner1522z00_482 = BNIL;
																								}
																							else
																								{	/* Jas/labels.scm 101 */
																									obj_t BgL_head1214z00_467;

																									{	/* Jas/labels.scm 101 */
																										obj_t BgL_res1793z00_973;

																										BgL_res1793z00_973 =
																											MAKE_YOUNG_PAIR(BNIL,
																											BNIL);
																										BgL_head1214z00_467 =
																											BgL_res1793z00_973;
																									}
																									{
																										obj_t BgL_l1212z00_469;
																										obj_t BgL_tail1215z00_470;

																										BgL_l1212z00_469 =
																											BgL_l1212z00_465;
																										BgL_tail1215z00_470 =
																											BgL_head1214z00_467;
																									BgL_zc3z04anonymousza31478ze3z87_471:
																										if (NULLP
																											(BgL_l1212z00_469))
																											{	/* Jas/labels.scm 101 */
																												BgL_runner1522z00_482 =
																													CDR
																													(BgL_head1214z00_467);
																											}
																										else
																											{	/* Jas/labels.scm 101 */
																												obj_t
																													BgL_newtail1216z00_473;
																												{	/* Jas/labels.scm 101 */
																													obj_t
																														BgL_arg1493z00_475;
																													{	/* Jas/labels.scm 101 */
																														obj_t BgL_xz00_476;

																														BgL_xz00_476 =
																															CAR(
																															((obj_t)
																																BgL_l1212z00_469));
																														{	/* Jas/labels.scm 102 */
																															obj_t
																																BgL_arg1495z00_477;
																															obj_t
																																BgL_arg1497z00_478;
																															{	/* Jas/labels.scm 102 */
																																obj_t
																																	BgL_arg1518z00_479;
																																BgL_arg1518z00_479
																																	=
																																	CAR(((obj_t)
																																		BgL_xz00_476));
																																BgL_arg1495z00_477
																																	=
																																	BGl_u4z00zzjas_libz00
																																	(CINT
																																	(BgL_arg1518z00_479));
																															}
																															{	/* Jas/labels.scm 103 */
																																obj_t
																																	BgL_arg1521z00_480;
																																BgL_arg1521z00_480
																																	=
																																	CDR(((obj_t)
																																		BgL_xz00_476));
																																{	/* Jas/labels.scm 85 */
																																	obj_t
																																		BgL_arg1624z00_979;
																																	BgL_arg1624z00_979
																																		=
																																		BGl_2zd2zd2zz__r4_numbers_6_5z00
																																		(BGl_getzd2targetze70z35zzjas_labelsz00
																																		(BgL_classfilez00_5,
																																			BgL_envz00_404,
																																			BgL_arg1521z00_480),
																																		BgL_pcz00_408);
																																	BgL_arg1497z00_478
																																		=
																																		BGl_u4z00zzjas_libz00
																																		(CINT
																																		(BgL_arg1624z00_979));
																																}
																															}
																															BgL_arg1493z00_475
																																=
																																BGl_appendzd221011zd2zzjas_labelsz00
																																(BgL_arg1495z00_477,
																																BgL_arg1497z00_478);
																														}
																													}
																													{	/* Jas/labels.scm 101 */
																														obj_t
																															BgL_res1795z00_981;
																														BgL_res1795z00_981 =
																															MAKE_YOUNG_PAIR
																															(BgL_arg1493z00_475,
																															BNIL);
																														BgL_newtail1216z00_473
																															=
																															BgL_res1795z00_981;
																													}
																												}
																												SET_CDR
																													(BgL_tail1215z00_470,
																													BgL_newtail1216z00_473);
																												{	/* Jas/labels.scm 101 */
																													obj_t
																														BgL_arg1489z00_474;
																													BgL_arg1489z00_474 =
																														CDR(((obj_t)
																															BgL_l1212z00_469));
																													{
																														obj_t
																															BgL_tail1215z00_1441;
																														obj_t
																															BgL_l1212z00_1440;
																														BgL_l1212z00_1440 =
																															BgL_arg1489z00_474;
																														BgL_tail1215z00_1441
																															=
																															BgL_newtail1216z00_473;
																														BgL_tail1215z00_470
																															=
																															BgL_tail1215z00_1441;
																														BgL_l1212z00_469 =
																															BgL_l1212z00_1440;
																														goto
																															BgL_zc3z04anonymousza31478ze3z87_471;
																													}
																												}
																											}
																									}
																								}
																						}
																						BgL_arg1465z00_462 =
																							BGl_appendz00zz__r4_pairs_and_lists_6_3z00
																							(BgL_runner1522z00_482);
																					}
																					BgL_arg1461z00_459 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg1464z00_461,
																						BgL_arg1465z00_462);
																				}
																				BgL_arg1448z00_457 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg1449z00_458,
																					BgL_arg1461z00_459);
																			}
																			BgL_arg1441z00_455 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1442z00_456,
																				BgL_arg1448z00_457);
																		}
																		BgL_arg1662z00_558 =
																			MAKE_YOUNG_PAIR(BINT(((long) 171)),
																			BgL_arg1441z00_455);
																	} break;
																case ((long) 202):

																	{
																		obj_t BgL_begz00_483;
																		obj_t BgL_endz00_484;
																		obj_t BgL_labz00_485;
																		obj_t BgL_typez00_486;

																		{	/* Jas/labels.scm 106 */
																			obj_t BgL_ezd2167zd2_488;

																			BgL_ezd2167zd2_488 =
																				CDR(((obj_t) BgL_insz00_407));
																			if (PAIRP(BgL_ezd2167zd2_488))
																				{	/* Jas/labels.scm 105 */
																					obj_t BgL_cdrzd2177zd2_490;

																					BgL_cdrzd2177zd2_490 =
																						CDR(BgL_ezd2167zd2_488);
																					if (PAIRP(BgL_cdrzd2177zd2_490))
																						{	/* Jas/labels.scm 105 */
																							obj_t BgL_cdrzd2183zd2_492;

																							BgL_cdrzd2183zd2_492 =
																								CDR(BgL_cdrzd2177zd2_490);
																							if (PAIRP(BgL_cdrzd2183zd2_492))
																								{	/* Jas/labels.scm 105 */
																									obj_t BgL_cdrzd2188zd2_494;

																									BgL_cdrzd2188zd2_494 =
																										CDR(BgL_cdrzd2183zd2_492);
																									if (PAIRP
																										(BgL_cdrzd2188zd2_494))
																										{	/* Jas/labels.scm 105 */
																											if (NULLP(CDR
																													(BgL_cdrzd2188zd2_494)))
																												{	/* Jas/labels.scm 105 */
																													BgL_begz00_483 =
																														CAR
																														(BgL_ezd2167zd2_488);
																													BgL_endz00_484 =
																														CAR
																														(BgL_cdrzd2177zd2_490);
																													BgL_labz00_485 =
																														CAR
																														(BgL_cdrzd2183zd2_492);
																													BgL_typez00_486 =
																														CAR
																														(BgL_cdrzd2188zd2_494);
																													{	/* Jas/labels.scm 108 */
																														obj_t
																															BgL_arg1558z00_503;
																														obj_t
																															BgL_arg1561z00_504;
																														obj_t
																															BgL_arg1564z00_505;
																														BgL_arg1558z00_503 =
																															BGl_getzd2targetze70z35zzjas_labelsz00
																															(BgL_classfilez00_5,
																															BgL_envz00_404,
																															BgL_begz00_483);
																														BgL_arg1561z00_504 =
																															BGl_getzd2targetze70z35zzjas_labelsz00
																															(BgL_classfilez00_5,
																															BgL_envz00_404,
																															BgL_endz00_484);
																														BgL_arg1564z00_505 =
																															BGl_getzd2targetze70z35zzjas_labelsz00
																															(BgL_classfilez00_5,
																															BgL_envz00_404,
																															BgL_labz00_485);
																														{	/* Jas/labels.scm 108 */
																															obj_t
																																BgL_list1565z00_506;
																															{	/* Jas/labels.scm 108 */
																																obj_t
																																	BgL_arg1573z00_507;
																																{	/* Jas/labels.scm 108 */
																																	obj_t
																																		BgL_arg1575z00_508;
																																	{	/* Jas/labels.scm 108 */
																																		obj_t
																																			BgL_arg1578z00_509;
																																		{	/* Jas/labels.scm 108 */
																																			obj_t
																																				BgL_arg1582z00_510;
																																			BgL_arg1582z00_510
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_typez00_486,
																																				BNIL);
																																			BgL_arg1578z00_509
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1564z00_505,
																																				BgL_arg1582z00_510);
																																		}
																																		BgL_arg1575z00_508
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1561z00_504,
																																			BgL_arg1578z00_509);
																																	}
																																	BgL_arg1573z00_507
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1558z00_503,
																																		BgL_arg1575z00_508);
																																}
																																BgL_list1565z00_506
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BINT(((long)
																																			202)),
																																	BgL_arg1573z00_507);
																															}
																															BgL_arg1662z00_558
																																=
																																BgL_list1565z00_506;
																												}}}
																											else
																												{	/* Jas/labels.scm 105 */
																													BgL_arg1662z00_558 =
																														BFALSE;
																												}
																										}
																									else
																										{	/* Jas/labels.scm 105 */
																											BgL_arg1662z00_558 =
																												BFALSE;
																										}
																								}
																							else
																								{	/* Jas/labels.scm 105 */
																									BgL_arg1662z00_558 = BFALSE;
																								}
																						}
																					else
																						{	/* Jas/labels.scm 105 */
																							BgL_arg1662z00_558 = BFALSE;
																						}
																				}
																			else
																				{	/* Jas/labels.scm 105 */
																					BgL_arg1662z00_558 = BFALSE;
																				}
																		}
																	}
																	break;
																case ((long) 205):

																	{
																		obj_t BgL_begz00_511;
																		obj_t BgL_endz00_512;
																		obj_t BgL_restz00_513;

																		{	/* Jas/labels.scm 111 */
																			obj_t BgL_ezd2195zd2_515;

																			BgL_ezd2195zd2_515 =
																				CDR(((obj_t) BgL_insz00_407));
																			if (PAIRP(BgL_ezd2195zd2_515))
																				{	/* Jas/labels.scm 110 */
																					obj_t BgL_cdrzd2203zd2_517;

																					BgL_cdrzd2203zd2_517 =
																						CDR(BgL_ezd2195zd2_515);
																					if (PAIRP(BgL_cdrzd2203zd2_517))
																						{	/* Jas/labels.scm 110 */
																							BgL_begz00_511 =
																								CAR(BgL_ezd2195zd2_515);
																							BgL_endz00_512 =
																								CAR(BgL_cdrzd2203zd2_517);
																							BgL_restz00_513 =
																								CDR(BgL_cdrzd2203zd2_517);
																							{	/* Jas/labels.scm 113 */
																								obj_t BgL_bz00_522;
																								obj_t BgL_ez00_523;

																								BgL_bz00_522 =
																									BGl_getzd2targetze70z35zzjas_labelsz00
																									(BgL_classfilez00_5,
																									BgL_envz00_404,
																									BgL_begz00_511);
																								BgL_ez00_523 =
																									BGl_getzd2targetze70z35zzjas_labelsz00
																									(BgL_classfilez00_5,
																									BgL_envz00_404,
																									BgL_endz00_512);
																								{	/* Jas/labels.scm 114 */
																									obj_t BgL_arg1593z00_524;

																									{	/* Jas/labels.scm 114 */
																										obj_t BgL_arg1597z00_525;

																										{	/* Jas/labels.scm 114 */
																											long BgL_arg1599z00_526;

																											BgL_arg1599z00_526 =
																												(
																												(long)
																												CINT(BgL_ez00_523) -
																												(long)
																												CINT(BgL_bz00_522));
																											BgL_arg1597z00_525 =
																												MAKE_YOUNG_PAIR(BINT
																												(BgL_arg1599z00_526),
																												BgL_restz00_513);
																										}
																										BgL_arg1593z00_524 =
																											MAKE_YOUNG_PAIR
																											(BgL_bz00_522,
																											BgL_arg1597z00_525);
																									}
																									BgL_arg1662z00_558 =
																										MAKE_YOUNG_PAIR(BINT(((long)
																												205)),
																										BgL_arg1593z00_524);
																						}}}
																					else
																						{	/* Jas/labels.scm 110 */
																							BgL_arg1662z00_558 = BFALSE;
																						}
																				}
																			else
																				{	/* Jas/labels.scm 110 */
																					BgL_arg1662z00_558 = BFALSE;
																				}
																		}
																	}
																	break;
																default:
																	BgL_arg1662z00_558 = BgL_insz00_407;
																}
														}
													else
														{	/* Jas/labels.scm 86 */
															BgL_arg1662z00_558 = BgL_insz00_407;
														}
												}
											}
										}
										BgL_arg1641z00_555 =
											MAKE_YOUNG_PAIR(BgL_arg1662z00_558, BgL_donez00_547);
									}
									{
										obj_t BgL_donez00_1502;
										obj_t BgL_pcz00_1501;
										obj_t BgL_lz00_1500;

										BgL_lz00_1500 = BgL_arg1639z00_553;
										BgL_pcz00_1501 = BgL_arg1640z00_554;
										BgL_donez00_1502 = BgL_arg1641z00_555;
										BgL_donez00_547 = BgL_donez00_1502;
										BgL_pcz00_546 = BgL_pcz00_1501;
										BgL_lz00_545 = BgL_lz00_1500;
										goto BgL_zc3z04anonymousza31627ze3z87_548;
									}
								}
						}
				}
			}
		}

	}



/* get-target~0 */
	obj_t BGl_getzd2targetze70z35zzjas_labelsz00(obj_t BgL_classfilez00_1043,
		obj_t BgL_envz00_1042, obj_t BgL_labelz00_527)
	{
		{	/* Jas/labels.scm 78 */
			{	/* Jas/labels.scm 77 */
				obj_t BgL_arg1604z00_529;

				{	/* Jas/labels.scm 77 */
					obj_t BgL__ortest_1060z00_530;

					BgL__ortest_1060z00_530 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_labelz00_527,
						BgL_envz00_1042);
					if (CBOOL(BgL__ortest_1060z00_530))
						{	/* Jas/labels.scm 77 */
							BgL_arg1604z00_529 = BgL__ortest_1060z00_530;
						}
					else
						{	/* Jas/labels.scm 77 */
							BgL_arg1604z00_529 =
								BGl_jaszd2errorzd2zzjas_classfilez00(
								((BgL_classfilez00_bglt) BgL_classfilez00_1043),
								BGl_string1815z00zzjas_labelsz00, BgL_labelz00_527);
						}
				}
				return CDR(((obj_t) BgL_arg1604z00_529));
			}
		}

	}



/* padding */
	obj_t BGl_paddingz00zzjas_labelsz00(obj_t BgL_pcz00_7)
	{
		{	/* Jas/labels.scm 125 */
			{	/* Jas/labels.scm 126 */
				long BgL_aux1064z00_564;

				BgL_aux1064z00_564 =
					BGl_modulofxz00zz__r4_numbers_6_5_fixnumz00(
					(long) CINT(BgL_pcz00_7), ((long) 4));
				switch (BgL_aux1064z00_564)
					{
					case ((long) 0):

						return CNST_TABLE_REF(((long) 2));
						break;
					case ((long) 1):

						return CNST_TABLE_REF(((long) 3));
						break;
					case ((long) 2):

						return CNST_TABLE_REF(((long) 4));
						break;
					default:
						return BNIL;
					}
			}
		}

	}



/* size-ins */
	obj_t BGl_siza7ezd2insz75zzjas_labelsz00(obj_t BgL_insz00_8,
		obj_t BgL_pcz00_9)
	{
		{	/* Jas/labels.scm 150 */
			{	/* Jas/labels.scm 151 */
				obj_t BgL_siza7eza7_566;

				{	/* Jas/labels.scm 151 */
					obj_t BgL_arg1708z00_588;

					BgL_arg1708z00_588 = CAR(((obj_t) BgL_insz00_8));
					BgL_siza7eza7_566 =
						VECTOR_REF(BGl_za2opcodezd2siza7eza2z75zzjas_labelsz00,
						(long) CINT(BgL_arg1708z00_588));
				}
				{	/* Jas/labels.scm 152 */
					bool_t BgL_test1874z00_1521;

					if (INTEGERP(BgL_siza7eza7_566))
						{	/* Jas/labels.scm 152 */
							BgL_test1874z00_1521 =
								((long) CINT(BgL_siza7eza7_566) == ((long) 0));
						}
					else
						{	/* Jas/labels.scm 152 */
							BgL_test1874z00_1521 =
								BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_siza7eza7_566,
								BINT(((long) 0)));
						}
					if (BgL_test1874z00_1521)
						{	/* Jas/labels.scm 153 */
							obj_t BgL_aux1066z00_570;

							BgL_aux1066z00_570 = CAR(((obj_t) BgL_insz00_8));
							if (INTEGERP(BgL_aux1066z00_570))
								{	/* Jas/labels.scm 153 */
									switch ((long) CINT(BgL_aux1066z00_570))
										{
										case ((long) 170):

											{	/* Jas/labels.scm 155 */
												obj_t BgL_arg1669z00_572;

												{	/* Jas/labels.scm 155 */
													long BgL_arg1672z00_573;
													obj_t BgL_arg1684z00_574;

													BgL_arg1672z00_573 =
														bgl_list_length(BGl_paddingz00zzjas_labelsz00
														(BgL_pcz00_9));
													BgL_arg1684z00_574 =
														BGl_2za2za2zz__r4_numbers_6_5z00(BINT(((long) 4)),
														BINT(bgl_list_length(BgL_insz00_8)));
													BgL_arg1669z00_572 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
														(BgL_arg1672z00_573), BgL_arg1684z00_574);
												}
												return
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
													BgL_arg1669z00_572);
											} break;
										case ((long) 171):

											{	/* Jas/labels.scm 158 */
												obj_t BgL_arg1687z00_577;

												{	/* Jas/labels.scm 158 */
													long BgL_arg1688z00_578;
													obj_t BgL_arg1692z00_579;

													BgL_arg1688z00_578 =
														bgl_list_length(BGl_paddingz00zzjas_labelsz00
														(BgL_pcz00_9));
													{	/* Jas/labels.scm 158 */
														obj_t BgL_auxz00_1544;

														{	/* Jas/labels.scm 159 */
															obj_t BgL_auxz00_1546;

															{	/* Jas/labels.scm 159 */
																long BgL_tmpz00_1548;

																{	/* Jas/labels.scm 159 */
																	obj_t BgL_auxz00_1549;

																	{	/* Jas/labels.scm 159 */
																		obj_t BgL_pairz00_1026;

																		BgL_pairz00_1026 =
																			CDR(((obj_t) BgL_insz00_8));
																		BgL_auxz00_1549 = CDR(BgL_pairz00_1026);
																	}
																	BgL_tmpz00_1548 =
																		bgl_list_length(BgL_auxz00_1549);
																}
																BgL_auxz00_1546 = BINT(BgL_tmpz00_1548);
															}
															BgL_auxz00_1544 =
																BGl_2za2za2zz__r4_numbers_6_5z00(BINT(((long)
																		8)), BgL_auxz00_1546);
														}
														BgL_arg1692z00_579 =
															BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 8)),
															BgL_auxz00_1544);
													}
													BgL_arg1687z00_577 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
														(BgL_arg1688z00_578), BgL_arg1692z00_579);
												}
												return
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
													BgL_arg1687z00_577);
											} break;
										case ((long) 196):

											{	/* Jas/labels.scm 161 */
												bool_t BgL_test1877z00_1561;

												{	/* Jas/labels.scm 161 */
													obj_t BgL_auxz00_1562;

													{	/* Jas/labels.scm 161 */
														obj_t BgL_pairz00_1030;

														BgL_pairz00_1030 = CDR(((obj_t) BgL_insz00_8));
														BgL_auxz00_1562 = CAR(BgL_pairz00_1030);
													}
													BgL_test1877z00_1561 =
														BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_auxz00_1562,
														BINT(((long) 132)));
												}
												if (BgL_test1877z00_1561)
													{	/* Jas/labels.scm 161 */
														return BINT(((long) 6));
													}
												else
													{	/* Jas/labels.scm 161 */
														return BINT(((long) 4));
											}} break;
										case ((long) 202):

											return BINT(((long) 0));
											break;
										case ((long) 203):

											return BINT(((long) 0));
											break;
										case ((long) 204):

											return BINT(((long) 0));
											break;
										case ((long) 205):

											return BINT(((long) 0));
											break;
										default:
											return BUNSPEC;
										}
								}
							else
								{	/* Jas/labels.scm 153 */
									return BUNSPEC;
								}
						}
					else
						{	/* Jas/labels.scm 152 */
							return BgL_siza7eza7_566;
						}
				}
			}
		}

	}



/* resolve-pc */
	obj_t BGl_resolvezd2pczd2zzjas_labelsz00(obj_t BgL_classfilez00_10,
		obj_t BgL_codez00_11)
	{
		{	/* Jas/labels.scm 172 */
			{
				obj_t BgL_lz00_590;
				obj_t BgL_envz00_591;
				obj_t BgL_pcz00_592;

				BgL_lz00_590 = BgL_codez00_11;
				BgL_envz00_591 = BNIL;
				BgL_pcz00_592 = BINT(((long) 0));
			BgL_zc3z04anonymousza31709ze3z87_593:
				if (NULLP(BgL_lz00_590))
					{	/* Jas/labels.scm 174 */
						return BgL_envz00_591;
					}
				else
					{	/* Jas/labels.scm 176 */
						bool_t BgL_test1879z00_1578;

						{	/* Jas/labels.scm 176 */
							obj_t BgL_tmpz00_1579;

							BgL_tmpz00_1579 = CAR(((obj_t) BgL_lz00_590));
							BgL_test1879z00_1578 = SYMBOLP(BgL_tmpz00_1579);
						}
						if (BgL_test1879z00_1578)
							{	/* Jas/labels.scm 177 */
								obj_t BgL_arg1719z00_597;
								obj_t BgL_arg1725z00_598;

								BgL_arg1719z00_597 = CDR(((obj_t) BgL_lz00_590));
								{	/* Jas/labels.scm 177 */
									obj_t BgL_arg1726z00_599;

									{	/* Jas/labels.scm 177 */
										obj_t BgL_arg1727z00_600;

										BgL_arg1727z00_600 = CAR(((obj_t) BgL_lz00_590));
										BgL_arg1726z00_599 =
											MAKE_YOUNG_PAIR(BgL_arg1727z00_600, BgL_pcz00_592);
									}
									BgL_arg1725z00_598 =
										MAKE_YOUNG_PAIR(BgL_arg1726z00_599, BgL_envz00_591);
								}
								{
									obj_t BgL_envz00_1590;
									obj_t BgL_lz00_1589;

									BgL_lz00_1589 = BgL_arg1719z00_597;
									BgL_envz00_1590 = BgL_arg1725z00_598;
									BgL_envz00_591 = BgL_envz00_1590;
									BgL_lz00_590 = BgL_lz00_1589;
									goto BgL_zc3z04anonymousza31709ze3z87_593;
								}
							}
						else
							{	/* Jas/labels.scm 179 */
								obj_t BgL_arg1728z00_601;
								obj_t BgL_arg1729z00_602;

								BgL_arg1728z00_601 = CDR(((obj_t) BgL_lz00_590));
								{	/* Jas/labels.scm 179 */
									obj_t BgL_arg1731z00_603;

									{	/* Jas/labels.scm 179 */
										obj_t BgL_arg1732z00_604;

										BgL_arg1732z00_604 = CAR(((obj_t) BgL_lz00_590));
										BgL_arg1731z00_603 =
											BGl_siza7ezd2insz75zzjas_labelsz00(BgL_arg1732z00_604,
											BgL_pcz00_592);
									}
									BgL_arg1729z00_602 =
										BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_pcz00_592,
										BgL_arg1731z00_603);
								}
								{
									obj_t BgL_pcz00_1598;
									obj_t BgL_lz00_1597;

									BgL_lz00_1597 = BgL_arg1728z00_601;
									BgL_pcz00_1598 = BgL_arg1729z00_602;
									BgL_pcz00_592 = BgL_pcz00_1598;
									BgL_lz00_590 = BgL_lz00_1597;
									goto BgL_zc3z04anonymousza31709ze3z87_593;
								}
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_labelsz00()
	{
		{	/* Jas/labels.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_labelsz00()
	{
		{	/* Jas/labels.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_labelsz00()
	{
		{	/* Jas/labels.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_labelsz00()
	{
		{	/* Jas/labels.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 267157983),
				BSTRING_TO_STRING(BGl_string1817z00zzjas_labelsz00));
			return
				BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 135093979),
				BSTRING_TO_STRING(BGl_string1817z00zzjas_labelsz00));
		}

	}

#ifdef __cplusplus
}
#endif
