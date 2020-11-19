/*===========================================================================*/
/*   (Jas/stack.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/stack.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_jastypez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
	}                 *BgL_jastypez00_bglt;

	typedef struct BgL_jasfunz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		struct BgL_jastypez00_bgl *BgL_tretz00;
		obj_t BgL_targsz00;
	}                *BgL_jasfunz00_bglt;

	typedef struct BgL_fieldzd2orzd2methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                             *BgL_fieldzd2orzd2methodz00_bglt;

	typedef struct BgL_fieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}               *BgL_fieldz00_bglt;

	typedef struct BgL_methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                *BgL_methodz00_bglt;

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


	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzjas_stackz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62stkzd2analysiszb0zzjas_stackz00(obj_t, obj_t, obj_t);
	static obj_t BGl_makezd2stkzd2envz00zzjas_stackz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzjas_stackz00();
	static obj_t BGl_gczd2rootszd2initz00zzjas_stackz00();
	static obj_t BGl_z62nbpushz62zzjas_stackz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_stackz00 = BUNSPEC;
	static obj_t BGl_z62nbpopz62zzjas_stackz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_jaszd2warningzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_stackz00();
	static obj_t BGl_stkzd2analyseze70z35zzjas_stackz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzjas_stackz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_stackz00(long,
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
	extern int BGl_typezd2siza7ez75zzjas_classfilez00(BgL_jastypez00_bglt);
	static obj_t BGl_za2popza2z00zzjas_stackz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_nbpushz00zzjas_stackz00(obj_t, obj_t);
	static obj_t BGl_za2pushza2z00zzjas_stackz00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zzjas_stackz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_stackz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_stackz00();
	BGL_IMPORT obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stkzd2analysiszd2zzjas_stackz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_nbpopz00zzjas_stackz00(obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string1450z00zzjas_stackz00,
		BgL_bgl_string1450za700za7za7j1463za7, "bad cop for pop", 15);
	      DEFINE_STRING(BGl_string1451z00zzjas_stackz00,
		BgL_bgl_string1451za700za7za7j1464za7, "bad cop for push", 16);
	      DEFINE_STRING(BGl_string1452z00zzjas_stackz00,
		BgL_bgl_string1452za700za7za7j1465za7, "stack not empty", 15);
	      DEFINE_STRING(BGl_string1453z00zzjas_stackz00,
		BgL_bgl_string1453za700za7za7j1466za7, "return unreachable", 18);
	      DEFINE_STRING(BGl_string1454z00zzjas_stackz00,
		BgL_bgl_string1454za700za7za7j1467za7, "different stack for label", 25);
	      DEFINE_STRING(BGl_string1455z00zzjas_stackz00,
		BgL_bgl_string1455za700za7za7j1468za7, "empty stack", 11);
	      DEFINE_STRING(BGl_string1456z00zzjas_stackz00,
		BgL_bgl_string1456za700za7za7j1469za7, "jas_stack", 9);
	      DEFINE_STRING(BGl_string1457z00zzjas_stackz00,
		BgL_bgl_string1457za700za7za7j1470za7,
		"* #(0 1 1 1 1 1 1 1 1 2 2 1 1 1 2 2 1 1 1 1 2 1 2 1 2 1 1 1 1 1 2 2 2 2 1 1 1 1 2 2 2 2 1 1 1 1 1 2 1 2 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 2 3 4 4 5 6 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 1 2 0 2 1 2 1 1 2 1 2 2 1 2 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 * 0 * 0 * * * * 0 1 1 1 1 0 1 1 0 0 * 1 0 0 0 1 0 0 0 0) #(0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 2 2 2 2 2 2 2 2 1 2 1 2 1 1 1 1 1 2 2 2 2 1 1 1 1 2 2 2 2 1 1 1 1 3 4 3 4 3 3 3 3 1 2 1 2 3 2 3 4 2 2 4 2 4 2 4 2 4 2 4 2 4 2 4 2 4 2 4 2 4 1 2 1 2 2 3 2 3 2 3 2 4 2 4 2 4 0 1 1 1 2 2 2 1 1 1 2 2 2 1 1 1 4 2 2 4 4 1 1 1 1 1 1 2 2 2 2 2 2 2 2 0 0 0 1 1 1 2 1 2 1 0 0 * 1 * * * * * 0 0 1 1 1 1 1 1 1 1 * * 1 1 0 0 0 0 0 0) ",
		832);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nbpushzd2envzd2zzjas_stackz00,
		BgL_bgl_za762nbpushza762za7za7ja1471z00, BGl_z62nbpushz62zzjas_stackz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nbpopzd2envzd2zzjas_stackz00,
		BgL_bgl_za762nbpopza762za7za7jas1472z00, BGl_z62nbpopz62zzjas_stackz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stkzd2analysiszd2envz00zzjas_stackz00,
		BgL_bgl_za762stkza7d2analysi1473z00, BGl_z62stkzd2analysiszb0zzjas_stackz00,
		0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzjas_stackz00));
		     ADD_ROOT((void *) (&BGl_za2popza2z00zzjas_stackz00));
		     ADD_ROOT((void *) (&BGl_za2pushza2z00zzjas_stackz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_stackz00(long
		BgL_checksumz00_764, char *BgL_fromz00_765)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_stackz00))
				{
					BGl_requirezd2initializa7ationz75zzjas_stackz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzjas_stackz00();
					BGl_libraryzd2moduleszd2initz00zzjas_stackz00();
					BGl_cnstzd2initzd2zzjas_stackz00();
					BGl_importedzd2moduleszd2initz00zzjas_stackz00();
					return BGl_toplevelzd2initzd2zzjas_stackz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_stackz00()
	{
		{	/* Jas/stack.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_stack");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_stack");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"jas_stack");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_stack");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_stack");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_stack");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_stack");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"jas_stack");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_stackz00()
	{
		{	/* Jas/stack.scm 1 */
			{	/* Jas/stack.scm 1 */
				obj_t BgL_cportz00_751;

				{	/* Jas/stack.scm 1 */
					obj_t BgL_stringz00_759;

					BgL_stringz00_759 = BGl_string1457z00zzjas_stackz00;
					{	/* Jas/stack.scm 1 */
						obj_t BgL_startz00_760;

						BgL_startz00_760 = BINT(((long) 0));
						{	/* Jas/stack.scm 1 */
							obj_t BgL_endz00_761;

							BgL_endz00_761 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_759)));
							{	/* Jas/stack.scm 1 */

								BgL_cportz00_751 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_759, BgL_startz00_760, BgL_endz00_761);
				}}}}
				{
					long BgL_iz00_752;

					BgL_iz00_752 = ((long) 2);
				BgL_loopz00_753:
					if ((BgL_iz00_752 == ((long) -1)))
						{	/* Jas/stack.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/stack.scm 1 */
							{	/* Jas/stack.scm 1 */
								obj_t BgL_arg1461z00_755;

								{	/* Jas/stack.scm 1 */

									{	/* Jas/stack.scm 1 */
										obj_t BgL_locationz00_757;

										BgL_locationz00_757 = BBOOL(((bool_t) 0));
										{	/* Jas/stack.scm 1 */

											BgL_arg1461z00_755 =
												BGl_readz00zz__readerz00(BgL_cportz00_751,
												BgL_locationz00_757);
										}
									}
								}
								{	/* Jas/stack.scm 1 */
									int BgL_tmpz00_791;

									BgL_tmpz00_791 = (int) (BgL_iz00_752);
									CNST_TABLE_SET(BgL_tmpz00_791, BgL_arg1461z00_755);
							}}
							{	/* Jas/stack.scm 1 */
								int BgL_auxz00_758;

								BgL_auxz00_758 = (int) ((BgL_iz00_752 - ((long) 1)));
								{
									long BgL_iz00_796;

									BgL_iz00_796 = (long) (BgL_auxz00_758);
									BgL_iz00_752 = BgL_iz00_796;
									goto BgL_loopz00_753;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzjas_stackz00()
	{
		{	/* Jas/stack.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_stackz00()
	{
		{	/* Jas/stack.scm 1 */
			BGl_za2popza2z00zzjas_stackz00 = CNST_TABLE_REF(((long) 0));
			return (BGl_za2pushza2z00zzjas_stackz00 =
				CNST_TABLE_REF(((long) 1)), BUNSPEC);
		}

	}



/* nbpop */
	BGL_EXPORTED_DEF obj_t BGl_nbpopz00zzjas_stackz00(obj_t BgL_classfilez00_3,
		obj_t BgL_insz00_4)
	{
		{	/* Jas/stack.scm 25 */
			{	/* Jas/stack.scm 26 */
				obj_t BgL_copz00_264;

				BgL_copz00_264 = CAR(((obj_t) BgL_insz00_4));
				{	/* Jas/stack.scm 26 */
					obj_t BgL_argsz00_265;

					BgL_argsz00_265 = CDR(((obj_t) BgL_insz00_4));
					{	/* Jas/stack.scm 26 */
						obj_t BgL_nz00_266;

						{	/* Jas/stack.scm 26 */
							obj_t BgL_vectorz00_594;
							long BgL_kz00_595;

							BgL_vectorz00_594 = CNST_TABLE_REF(((long) 0));
							BgL_kz00_595 = (long) CINT(BgL_copz00_264);
							BgL_nz00_266 = VECTOR_REF(BgL_vectorz00_594, BgL_kz00_595);
						}
						{	/* Jas/stack.scm 26 */

							if ((BgL_nz00_266 == CNST_TABLE_REF(((long) 2))))
								{

									if (INTEGERP(BgL_copz00_264))
										{	/* Jas/stack.scm 28 */
											switch ((long) CINT(BgL_copz00_264))
												{
												case ((long) 179):
												case ((long) 181):

													{	/* Jas/stack.scm 30 */
														int BgL_nz00_271;

														{	/* Jas/stack.scm 30 */
															obj_t BgL_arg1232z00_275;

															BgL_arg1232z00_275 =
																(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
																		((BgL_fieldzd2orzd2methodz00_bglt)
																			((BgL_fieldz00_bglt)
																				CAR(
																					((obj_t) BgL_argsz00_265))))))->
																BgL_typez00);
															BgL_nz00_271 =
																BGl_typezd2siza7ez75zzjas_classfilez00((
																	(BgL_jastypez00_bglt) BgL_arg1232z00_275));
														}
														switch ((long) CINT(BgL_copz00_264))
															{
															case ((long) 179):

																return BINT(BgL_nz00_271);
																break;
															case ((long) 181):

																return
																	BINT(((long) (BgL_nz00_271) + ((long) 1)));
																break;
															default:
																return BUNSPEC;
															}
													}
													break;
												case ((long) 182):
												case ((long) 183):
												case ((long) 184):
												case ((long) 185):

													{	/* Jas/stack.scm 35 */
														BgL_jasfunz00_bglt BgL_i1060z00_277;

														BgL_i1060z00_277 =
															((BgL_jasfunz00_bglt)
															(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
																		((BgL_fieldzd2orzd2methodz00_bglt)
																			((BgL_methodz00_bglt)
																				CAR(
																					((obj_t) BgL_argsz00_265))))))->
																BgL_typez00));
														{	/* Jas/stack.scm 36 */
															obj_t BgL_nz00_278;

															{	/* Jas/stack.scm 36 */
																obj_t BgL_runner1254z00_296;

																{	/* Jas/stack.scm 36 */
																	obj_t BgL_l1205z00_280;

																	BgL_l1205z00_280 =
																		(((BgL_jasfunz00_bglt)
																			COBJECT(BgL_i1060z00_277))->BgL_targsz00);
																	if (NULLP(BgL_l1205z00_280))
																		{	/* Jas/stack.scm 36 */
																			BgL_runner1254z00_296 = BNIL;
																		}
																	else
																		{	/* Jas/stack.scm 36 */
																			obj_t BgL_head1207z00_282;

																			{	/* Jas/stack.scm 36 */
																				int BgL_arg1252z00_294;

																				{	/* Jas/stack.scm 36 */
																					obj_t BgL_arg1253z00_295;

																					BgL_arg1253z00_295 =
																						CAR(((obj_t) BgL_l1205z00_280));
																					BgL_arg1252z00_294 =
																						BGl_typezd2siza7ez75zzjas_classfilez00
																						(((BgL_jastypez00_bglt)
																							BgL_arg1253z00_295));
																				}
																				{	/* Jas/stack.scm 36 */
																					obj_t BgL_res1399z00_606;

																					BgL_res1399z00_606 =
																						MAKE_YOUNG_PAIR(BINT
																						(BgL_arg1252z00_294), BNIL);
																					BgL_head1207z00_282 =
																						BgL_res1399z00_606;
																			}}
																			{	/* Jas/stack.scm 36 */
																				obj_t BgL_g1210z00_283;

																				BgL_g1210z00_283 =
																					CDR(((obj_t) BgL_l1205z00_280));
																				{
																					obj_t BgL_l1205z00_285;
																					obj_t BgL_tail1208z00_286;

																					BgL_l1205z00_285 = BgL_g1210z00_283;
																					BgL_tail1208z00_286 =
																						BgL_head1207z00_282;
																				BgL_zc3z04anonymousza31244ze3z87_287:
																					if (NULLP(BgL_l1205z00_285))
																						{	/* Jas/stack.scm 36 */
																							BgL_runner1254z00_296 =
																								BgL_head1207z00_282;
																						}
																					else
																						{	/* Jas/stack.scm 36 */
																							obj_t BgL_newtail1209z00_289;

																							{	/* Jas/stack.scm 36 */
																								int BgL_arg1247z00_291;

																								{	/* Jas/stack.scm 36 */
																									obj_t BgL_arg1250z00_292;

																									BgL_arg1250z00_292 =
																										CAR(
																										((obj_t) BgL_l1205z00_285));
																									BgL_arg1247z00_291 =
																										BGl_typezd2siza7ez75zzjas_classfilez00
																										(((BgL_jastypez00_bglt)
																											BgL_arg1250z00_292));
																								}
																								{	/* Jas/stack.scm 36 */
																									obj_t BgL_res1401z00_610;

																									BgL_res1401z00_610 =
																										MAKE_YOUNG_PAIR(BINT
																										(BgL_arg1247z00_291), BNIL);
																									BgL_newtail1209z00_289 =
																										BgL_res1401z00_610;
																							}}
																							SET_CDR(BgL_tail1208z00_286,
																								BgL_newtail1209z00_289);
																							{	/* Jas/stack.scm 36 */
																								obj_t BgL_arg1246z00_290;

																								BgL_arg1246z00_290 =
																									CDR(
																									((obj_t) BgL_l1205z00_285));
																								{
																									obj_t BgL_tail1208z00_855;
																									obj_t BgL_l1205z00_854;

																									BgL_l1205z00_854 =
																										BgL_arg1246z00_290;
																									BgL_tail1208z00_855 =
																										BgL_newtail1209z00_289;
																									BgL_tail1208z00_286 =
																										BgL_tail1208z00_855;
																									BgL_l1205z00_285 =
																										BgL_l1205z00_854;
																									goto
																										BgL_zc3z04anonymousza31244ze3z87_287;
																								}
																							}
																						}
																				}
																			}
																		}
																}
																BgL_nz00_278 =
																	BGl_zb2zb2zz__r4_numbers_6_5z00
																	(BgL_runner1254z00_296);
															}
															if (((long) CINT(BgL_copz00_264) == ((long) 184)))
																{	/* Jas/stack.scm 37 */
																	return BgL_nz00_278;
																}
															else
																{	/* Jas/stack.scm 37 */
																	return ADDFX(BgL_nz00_278, BINT(((long) 1)));
													}}} break;
												case ((long) 197):

													{	/* Jas/stack.scm 39 */
														obj_t BgL_pairz00_620;

														BgL_pairz00_620 = CDR(((obj_t) BgL_argsz00_265));
														return CAR(BgL_pairz00_620);
													}
													break;
												default:
												BgL_case_else1056z00_268:
													return
														BGl_jaszd2errorzd2zzjas_classfilez00(
														((BgL_classfilez00_bglt) BgL_classfilez00_3),
														BGl_string1450z00zzjas_stackz00, BgL_copz00_264);
												}
										}
									else
										{	/* Jas/stack.scm 28 */
											goto BgL_case_else1056z00_268;
										}
								}
							else
								{	/* Jas/stack.scm 27 */
									return BgL_nz00_266;
								}
						}
					}
				}
			}
		}

	}



/* &nbpop */
	obj_t BGl_z62nbpopz62zzjas_stackz00(obj_t BgL_envz00_735,
		obj_t BgL_classfilez00_736, obj_t BgL_insz00_737)
	{
		{	/* Jas/stack.scm 25 */
			return BGl_nbpopz00zzjas_stackz00(BgL_classfilez00_736, BgL_insz00_737);
		}

	}



/* nbpush */
	BGL_EXPORTED_DEF obj_t BGl_nbpushz00zzjas_stackz00(obj_t BgL_classfilez00_5,
		obj_t BgL_insz00_6)
	{
		{	/* Jas/stack.scm 58 */
			{	/* Jas/stack.scm 59 */
				obj_t BgL_copz00_298;

				BgL_copz00_298 = CAR(((obj_t) BgL_insz00_6));
				{	/* Jas/stack.scm 59 */
					obj_t BgL_argsz00_299;

					BgL_argsz00_299 = CDR(((obj_t) BgL_insz00_6));
					{	/* Jas/stack.scm 59 */
						obj_t BgL_nz00_300;

						{	/* Jas/stack.scm 59 */
							obj_t BgL_vectorz00_623;
							long BgL_kz00_624;

							BgL_vectorz00_623 = CNST_TABLE_REF(((long) 1));
							BgL_kz00_624 = (long) CINT(BgL_copz00_298);
							BgL_nz00_300 = VECTOR_REF(BgL_vectorz00_623, BgL_kz00_624);
						}
						{	/* Jas/stack.scm 59 */

							if ((BgL_nz00_300 == CNST_TABLE_REF(((long) 2))))
								{

									if (INTEGERP(BgL_copz00_298))
										{	/* Jas/stack.scm 61 */
											switch ((long) CINT(BgL_copz00_298))
												{
												case ((long) 178):
												case ((long) 180):

													{	/* Jas/stack.scm 63 */
														obj_t BgL_arg1263z00_305;

														BgL_arg1263z00_305 =
															(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
																	((BgL_fieldzd2orzd2methodz00_bglt)
																		((BgL_fieldz00_bglt)
																			CAR(
																				((obj_t) BgL_argsz00_299))))))->
															BgL_typez00);
														return
															BINT(BGl_typezd2siza7ez75zzjas_classfilez00((
																	(BgL_jastypez00_bglt) BgL_arg1263z00_305)));
													}
													break;
												case ((long) 182):
												case ((long) 183):
												case ((long) 184):
												case ((long) 185):

													{	/* Jas/stack.scm 65 */
														BgL_jasfunz00_bglt BgL_i1063z00_307;

														BgL_i1063z00_307 =
															((BgL_jasfunz00_bglt)
															(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
																		((BgL_fieldzd2orzd2methodz00_bglt)
																			((BgL_methodz00_bglt)
																				CAR(
																					((obj_t) BgL_argsz00_299))))))->
																BgL_typez00));
														{	/* Jas/stack.scm 66 */
															BgL_jastypez00_bglt BgL_arg1270z00_308;

															BgL_arg1270z00_308 =
																(((BgL_jasfunz00_bglt)
																	COBJECT(BgL_i1063z00_307))->BgL_tretz00);
															return
																BINT(BGl_typezd2siza7ez75zzjas_classfilez00
																(BgL_arg1270z00_308));
														}
													}
													break;
												default:
												BgL_case_else1061z00_302:
													return
														BGl_jaszd2errorzd2zzjas_classfilez00(
														((BgL_classfilez00_bglt) BgL_classfilez00_5),
														BGl_string1451z00zzjas_stackz00, BgL_copz00_298);
												}
										}
									else
										{	/* Jas/stack.scm 61 */
											goto BgL_case_else1061z00_302;
										}
								}
							else
								{	/* Jas/stack.scm 60 */
									return BgL_nz00_300;
								}
						}
					}
				}
			}
		}

	}



/* &nbpush */
	obj_t BGl_z62nbpushz62zzjas_stackz00(obj_t BgL_envz00_738,
		obj_t BgL_classfilez00_739, obj_t BgL_insz00_740)
	{
		{	/* Jas/stack.scm 58 */
			return BGl_nbpushz00zzjas_stackz00(BgL_classfilez00_739, BgL_insz00_740);
		}

	}



/* stk-analysis */
	BGL_EXPORTED_DEF obj_t BGl_stkzd2analysiszd2zzjas_stackz00(obj_t
		BgL_classfilez00_7, obj_t BgL_codez00_8)
	{
		{	/* Jas/stack.scm 70 */
			return
				BGl_stkzd2analyseze70z35zzjas_stackz00
				(BGl_makezd2stkzd2envz00zzjas_stackz00(BgL_codez00_8),
				BgL_classfilez00_7, BgL_codez00_8, BgL_codez00_8, BINT(((long) 0)),
				BINT(((long) 0)));
		}

	}



/* stk-analyse~0 */
	obj_t BGl_stkzd2analyseze70z35zzjas_stackz00(obj_t BgL_envz00_750,
		obj_t BgL_classfilez00_749, obj_t BgL_codez00_748, obj_t BgL_lz00_313,
		obj_t BgL_nz00_314, obj_t BgL_maxnz00_315)
	{
		{	/* Jas/stack.scm 93 */
		BGl_stkzd2analyseze70z35zzjas_stackz00:
			{
				obj_t BgL_insz00_346;
				obj_t BgL_lz00_347;
				long BgL_nz00_348;
				obj_t BgL_maxnz00_349;

				if (NULLP(BgL_lz00_313))
					{	/* Jas/stack.scm 73 */
						return
							BGl_jaszd2errorzd2zzjas_classfilez00(
							((BgL_classfilez00_bglt) BgL_classfilez00_749),
							BGl_string1453z00zzjas_stackz00, BgL_lz00_313);
					}
				else
					{	/* Jas/stack.scm 75 */
						bool_t BgL_test1484z00_912;

						{	/* Jas/stack.scm 75 */
							obj_t BgL_tmpz00_913;

							BgL_tmpz00_913 = CAR(((obj_t) BgL_lz00_313));
							BgL_test1484z00_912 = SYMBOLP(BgL_tmpz00_913);
						}
						if (BgL_test1484z00_912)
							{	/* Jas/stack.scm 76 */
								obj_t BgL_slotz00_320;

								BgL_slotz00_320 =
									BGl_assqz00zz__r4_pairs_and_lists_6_3z00(CAR(
										((obj_t) BgL_lz00_313)), BgL_envz00_750);
								{	/* Jas/stack.scm 76 */
									obj_t BgL_nlabz00_321;

									BgL_nlabz00_321 = CDR(((obj_t) BgL_slotz00_320));
									{	/* Jas/stack.scm 76 */

										if (((long) CINT(BgL_nlabz00_321) == ((long) -1)))
											{	/* Jas/stack.scm 78 */
												{	/* Jas/stack.scm 79 */
													obj_t BgL_tmpz00_925;

													BgL_tmpz00_925 = ((obj_t) BgL_slotz00_320);
													SET_CDR(BgL_tmpz00_925, BgL_nz00_314);
												}
												{	/* Jas/stack.scm 80 */
													obj_t BgL_arg1277z00_323;

													BgL_arg1277z00_323 = CDR(((obj_t) BgL_lz00_313));
													{
														obj_t BgL_lz00_930;

														BgL_lz00_930 = BgL_arg1277z00_323;
														BgL_lz00_313 = BgL_lz00_930;
														goto BGl_stkzd2analyseze70z35zzjas_stackz00;
													}
												}
											}
										else
											{	/* Jas/stack.scm 78 */
												if (
													((long) CINT(BgL_nz00_314) ==
														(long) CINT(BgL_nlabz00_321)))
													{	/* Jas/stack.scm 81 */
														return BgL_maxnz00_315;
													}
												else
													{	/* Jas/stack.scm 81 */
														{	/* Jas/stack.scm 84 */
															obj_t BgL_arg1280z00_325;

															{	/* Jas/stack.scm 84 */
																obj_t BgL_arg1281z00_326;

																BgL_arg1281z00_326 =
																	CAR(((obj_t) BgL_lz00_313));
																{	/* Jas/stack.scm 84 */
																	obj_t BgL_list1282z00_327;

																	{	/* Jas/stack.scm 84 */
																		obj_t BgL_arg1284z00_328;

																		{	/* Jas/stack.scm 84 */
																			obj_t BgL_arg1285z00_329;

																			BgL_arg1285z00_329 =
																				MAKE_YOUNG_PAIR(BgL_nlabz00_321, BNIL);
																			BgL_arg1284z00_328 =
																				MAKE_YOUNG_PAIR(BgL_nz00_314,
																				BgL_arg1285z00_329);
																		}
																		BgL_list1282z00_327 =
																			MAKE_YOUNG_PAIR(BgL_arg1281z00_326,
																			BgL_arg1284z00_328);
																	}
																	BgL_arg1280z00_325 = BgL_list1282z00_327;
																}
															}
															BGl_jaszd2warningzd2zzjas_classfilez00(
																((BgL_classfilez00_bglt) BgL_classfilez00_749),
																BGl_string1454z00zzjas_stackz00,
																BgL_arg1280z00_325);
														}
														return BgL_maxnz00_315;
													}
											}
									}
								}
							}
						else
							{	/* Jas/stack.scm 87 */
								long BgL_downz00_331;

								{	/* Jas/stack.scm 87 */
									obj_t BgL_arg1296z00_343;

									{	/* Jas/stack.scm 87 */
										obj_t BgL_arg1297z00_344;

										BgL_arg1297z00_344 = CAR(((obj_t) BgL_lz00_313));
										BgL_arg1296z00_343 =
											BGl_nbpopz00zzjas_stackz00(BgL_classfilez00_749,
											BgL_arg1297z00_344);
									}
									BgL_downz00_331 =
										(
										(long) CINT(BgL_nz00_314) -
										(long) CINT(BgL_arg1296z00_343));
								}
								{	/* Jas/stack.scm 87 */
									long BgL_upz00_332;

									{	/* Jas/stack.scm 88 */
										obj_t BgL_arg1292z00_341;

										{	/* Jas/stack.scm 88 */
											obj_t BgL_arg1295z00_342;

											BgL_arg1295z00_342 = CAR(((obj_t) BgL_lz00_313));
											BgL_arg1292z00_341 =
												BGl_nbpushz00zzjas_stackz00(BgL_classfilez00_749,
												BgL_arg1295z00_342);
										}
										BgL_upz00_332 =
											(BgL_downz00_331 + (long) CINT(BgL_arg1292z00_341));
									}
									{	/* Jas/stack.scm 88 */

										if ((BgL_downz00_331 < ((long) 0)))
											{	/* Jas/stack.scm 89 */
												BGl_jaszd2warningzd2zzjas_classfilez00(
													((BgL_classfilez00_bglt) BgL_classfilez00_749),
													BGl_string1455z00zzjas_stackz00,
													BINT(BgL_downz00_331));
												BgL_maxnz00_315 =
													SUBFX(BgL_maxnz00_315, BINT(BgL_downz00_331));
											}
										else
											{	/* Jas/stack.scm 89 */
												BFALSE;
											}
										{	/* Jas/stack.scm 93 */
											obj_t BgL_arg1289z00_336;
											obj_t BgL_arg1290z00_337;
											obj_t BgL_arg1291z00_338;

											BgL_arg1289z00_336 = CAR(((obj_t) BgL_lz00_313));
											BgL_arg1290z00_337 = CDR(((obj_t) BgL_lz00_313));
											BgL_arg1291z00_338 =
												BGl_2maxz00zz__r4_numbers_6_5z00(BINT(BgL_upz00_332),
												BgL_maxnz00_315);
											BgL_insz00_346 = BgL_arg1289z00_336;
											BgL_lz00_347 = BgL_arg1290z00_337;
											BgL_nz00_348 = BgL_upz00_332;
											BgL_maxnz00_349 = BgL_arg1291z00_338;
											{
												obj_t BgL_lz00_429;

												{	/* Jas/stack.scm 97 */
													obj_t BgL_aux1065z00_354;

													BgL_aux1065z00_354 = CAR(((obj_t) BgL_insz00_346));
													if (INTEGERP(BgL_aux1065z00_354))
														{	/* Jas/stack.scm 97 */
															switch ((long) CINT(BgL_aux1065z00_354))
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

																	{	/* Jas/stack.scm 99 */
																		obj_t BgL_xz00_356;
																		obj_t BgL_yz00_357;

																		BgL_xz00_356 =
																			BGl_stkzd2analyseze70z35zzjas_stackz00
																			(BgL_envz00_750, BgL_classfilez00_749,
																			BgL_codez00_748, BgL_lz00_347,
																			BINT(BgL_nz00_348), BgL_maxnz00_349);
																		{	/* Jas/stack.scm 99 */
																			obj_t BgL_arg1301z00_358;

																			{	/* Jas/stack.scm 99 */
																				obj_t BgL_pairz00_666;

																				BgL_pairz00_666 =
																					CDR(((obj_t) BgL_insz00_346));
																				BgL_arg1301z00_358 =
																					CAR(BgL_pairz00_666);
																			}
																			BgL_yz00_357 =
																				BGl_stkzd2analyseze70z35zzjas_stackz00
																				(BgL_envz00_750, BgL_classfilez00_749,
																				BgL_codez00_748,
																				BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1301z00_358, BgL_codez00_748),
																				BINT(BgL_nz00_348), BgL_maxnz00_349);
																		}
																		return
																			BGl_2maxz00zz__r4_numbers_6_5z00
																			(BgL_xz00_356, BgL_yz00_357);
																	}
																	break;
																case ((long) 167):
																case ((long) 200):

																	{	/* Jas/stack.scm 101 */
																		obj_t BgL_arg1303z00_359;

																		{	/* Jas/stack.scm 101 */
																			obj_t BgL_pairz00_671;

																			BgL_pairz00_671 =
																				CDR(((obj_t) BgL_insz00_346));
																			BgL_arg1303z00_359 = CAR(BgL_pairz00_671);
																		}
																		{
																			obj_t BgL_maxnz00_986;
																			obj_t BgL_nz00_984;
																			obj_t BgL_lz00_982;

																			BgL_lz00_982 =
																				BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1303z00_359, BgL_codez00_748);
																			BgL_nz00_984 = BINT(BgL_nz00_348);
																			BgL_maxnz00_986 = BgL_maxnz00_349;
																			BgL_maxnz00_315 = BgL_maxnz00_986;
																			BgL_nz00_314 = BgL_nz00_984;
																			BgL_lz00_313 = BgL_lz00_982;
																			goto
																				BGl_stkzd2analyseze70z35zzjas_stackz00;
																		}
																	}
																	break;
																case ((long) 168):
																case ((long) 201):

																	{	/* Jas/stack.scm 103 */
																		obj_t BgL_xz00_360;
																		obj_t BgL_yz00_361;

																		{	/* Jas/stack.scm 103 */
																			obj_t BgL_arg1304z00_362;

																			BgL_arg1304z00_362 =
																				BGL_SAFE_MINUS_FX(BgL_nz00_348,
																				((long) 1));
																			BgL_xz00_360 =
																				BGl_stkzd2analyseze70z35zzjas_stackz00
																				(BgL_envz00_750, BgL_classfilez00_749,
																				BgL_codez00_748, BgL_lz00_347,
																				BgL_arg1304z00_362, BgL_maxnz00_349);
																		}
																		{	/* Jas/stack.scm 104 */
																			obj_t BgL_arg1306z00_364;

																			{	/* Jas/stack.scm 104 */
																				obj_t BgL_pairz00_677;

																				BgL_pairz00_677 =
																					CDR(((obj_t) BgL_insz00_346));
																				BgL_arg1306z00_364 =
																					CAR(BgL_pairz00_677);
																			}
																			BgL_yz00_361 =
																				BGl_stkzd2analyseze70z35zzjas_stackz00
																				(BgL_envz00_750, BgL_classfilez00_749,
																				BgL_codez00_748,
																				BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg1306z00_364, BgL_codez00_748),
																				BINT(BgL_nz00_348), BgL_maxnz00_349);
																		}
																		return
																			BGl_2maxz00zz__r4_numbers_6_5z00
																			(BgL_xz00_360, BgL_yz00_361);
																	}
																	break;
																case ((long) 169):
																case ((long) 191):

																	return BgL_maxnz00_349;
																	break;
																case ((long) 170):

																	{
																		obj_t BgL_defz00_365;
																		obj_t BgL_begz00_366;
																		obj_t BgL_labsz00_367;

																		{	/* Jas/stack.scm 108 */
																			obj_t BgL_ezd2102zd2_369;

																			BgL_ezd2102zd2_369 =
																				CDR(((obj_t) BgL_insz00_346));
																			if (PAIRP(BgL_ezd2102zd2_369))
																				{	/* Jas/stack.scm 107 */
																					obj_t BgL_cdrzd2110zd2_371;

																					BgL_cdrzd2110zd2_371 =
																						CDR(BgL_ezd2102zd2_369);
																					if (PAIRP(BgL_cdrzd2110zd2_371))
																						{	/* Jas/stack.scm 107 */
																							BgL_defz00_365 =
																								CAR(BgL_ezd2102zd2_369);
																							BgL_begz00_366 =
																								CAR(BgL_cdrzd2110zd2_371);
																							BgL_labsz00_367 =
																								CDR(BgL_cdrzd2110zd2_371);
																							{	/* Jas/stack.scm 110 */
																								obj_t BgL_runner1328z00_395;

																								{	/* Jas/stack.scm 110 */
																									obj_t BgL_arg1312z00_376;
																									obj_t BgL_arg1314z00_377;

																									BgL_arg1312z00_376 =
																										BGl_stkzd2analyseze70z35zzjas_stackz00
																										(BgL_envz00_750,
																										BgL_classfilez00_749,
																										BgL_codez00_748,
																										BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																										(BgL_defz00_365,
																											BgL_codez00_748),
																										BINT(BgL_nz00_348),
																										BgL_maxnz00_349);
																									if (NULLP(BgL_labsz00_367))
																										{	/* Jas/stack.scm 110 */
																											BgL_arg1314z00_377 = BNIL;
																										}
																									else
																										{	/* Jas/stack.scm 110 */
																											obj_t BgL_head1213z00_380;

																											{	/* Jas/stack.scm 110 */
																												obj_t
																													BgL_arg1325z00_392;
																												{	/* Jas/stack.scm 110 */
																													obj_t
																														BgL_arg1326z00_393;
																													BgL_arg1326z00_393 =
																														CAR(((obj_t)
																															BgL_labsz00_367));
																													BgL_arg1325z00_392 =
																														BGl_stkzd2analyseze70z35zzjas_stackz00
																														(BgL_envz00_750,
																														BgL_classfilez00_749,
																														BgL_codez00_748,
																														BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1326z00_393,
																															BgL_codez00_748),
																														BINT(BgL_nz00_348),
																														BgL_maxnz00_349);
																												}
																												{	/* Jas/stack.scm 110 */
																													obj_t
																														BgL_res1416z00_683;
																													BgL_res1416z00_683 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1325z00_392,
																														BNIL);
																													BgL_head1213z00_380 =
																														BgL_res1416z00_683;
																												}
																											}
																											{	/* Jas/stack.scm 110 */
																												obj_t BgL_g1216z00_381;

																												BgL_g1216z00_381 =
																													CDR(
																													((obj_t)
																														BgL_labsz00_367));
																												{
																													obj_t
																														BgL_l1211z00_383;
																													obj_t
																														BgL_tail1214z00_384;
																													BgL_l1211z00_383 =
																														BgL_g1216z00_381;
																													BgL_tail1214z00_384 =
																														BgL_head1213z00_380;
																												BgL_zc3z04anonymousza31316ze3z87_385:
																													if (NULLP
																														(BgL_l1211z00_383))
																														{	/* Jas/stack.scm 110 */
																															BgL_arg1314z00_377
																																=
																																BgL_head1213z00_380;
																														}
																													else
																														{	/* Jas/stack.scm 110 */
																															obj_t
																																BgL_newtail1215z00_387;
																															{	/* Jas/stack.scm 110 */
																																obj_t
																																	BgL_arg1322z00_389;
																																{	/* Jas/stack.scm 110 */
																																	obj_t
																																		BgL_arg1324z00_390;
																																	BgL_arg1324z00_390
																																		=
																																		CAR(((obj_t)
																																			BgL_l1211z00_383));
																																	BgL_arg1322z00_389
																																		=
																																		BGl_stkzd2analyseze70z35zzjas_stackz00
																																		(BgL_envz00_750,
																																		BgL_classfilez00_749,
																																		BgL_codez00_748,
																																		BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg1324z00_390,
																																			BgL_codez00_748),
																																		BINT
																																		(BgL_nz00_348),
																																		BgL_maxnz00_349);
																																}
																																{	/* Jas/stack.scm 110 */
																																	obj_t
																																		BgL_res1418z00_688;
																																	BgL_res1418z00_688
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1322z00_389,
																																		BNIL);
																																	BgL_newtail1215z00_387
																																		=
																																		BgL_res1418z00_688;
																																}
																															}
																															SET_CDR
																																(BgL_tail1214z00_384,
																																BgL_newtail1215z00_387);
																															{	/* Jas/stack.scm 110 */
																																obj_t
																																	BgL_arg1319z00_388;
																																BgL_arg1319z00_388
																																	=
																																	CDR(((obj_t)
																																		BgL_l1211z00_383));
																																{
																																	obj_t
																																		BgL_tail1214z00_1028;
																																	obj_t
																																		BgL_l1211z00_1027;
																																	BgL_l1211z00_1027
																																		=
																																		BgL_arg1319z00_388;
																																	BgL_tail1214z00_1028
																																		=
																																		BgL_newtail1215z00_387;
																																	BgL_tail1214z00_384
																																		=
																																		BgL_tail1214z00_1028;
																																	BgL_l1211z00_383
																																		=
																																		BgL_l1211z00_1027;
																																	goto
																																		BgL_zc3z04anonymousza31316ze3z87_385;
																																}
																															}
																														}
																												}
																											}
																										}
																									BgL_runner1328z00_395 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1312z00_376,
																										BgL_arg1314z00_377);
																								}
																								{	/* Jas/stack.scm 110 */
																									obj_t BgL_aux1327z00_394;

																									BgL_aux1327z00_394 =
																										CAR(BgL_runner1328z00_395);
																									BgL_runner1328z00_395 =
																										CDR(BgL_runner1328z00_395);
																									return
																										BGl_maxz00zz__r4_numbers_6_5z00
																										(BgL_aux1327z00_394,
																										BgL_runner1328z00_395);
																								}
																							}
																						}
																					else
																						{	/* Jas/stack.scm 107 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Jas/stack.scm 107 */
																					return BFALSE;
																				}
																		}
																	}
																	break;
																case ((long) 171):

																	{
																		obj_t BgL_defz00_396;
																		obj_t BgL_tablez00_397;

																		{	/* Jas/stack.scm 112 */
																			obj_t BgL_ezd2119zd2_399;

																			BgL_ezd2119zd2_399 =
																				CDR(((obj_t) BgL_insz00_346));
																			if (PAIRP(BgL_ezd2119zd2_399))
																				{	/* Jas/stack.scm 111 */
																					BgL_defz00_396 =
																						CAR(BgL_ezd2119zd2_399);
																					BgL_tablez00_397 =
																						CDR(BgL_ezd2119zd2_399);
																					{	/* Jas/stack.scm 114 */
																						obj_t BgL_runner1348z00_420;

																						{	/* Jas/stack.scm 114 */
																							obj_t BgL_arg1334z00_403;
																							obj_t BgL_arg1335z00_404;

																							BgL_arg1334z00_403 =
																								BGl_stkzd2analyseze70z35zzjas_stackz00
																								(BgL_envz00_750,
																								BgL_classfilez00_749,
																								BgL_codez00_748,
																								BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_defz00_396,
																									BgL_codez00_748),
																								BINT(BgL_nz00_348),
																								BgL_maxnz00_349);
																							if (NULLP(BgL_tablez00_397))
																								{	/* Jas/stack.scm 115 */
																									BgL_arg1335z00_404 = BNIL;
																								}
																							else
																								{	/* Jas/stack.scm 115 */
																									obj_t BgL_head1219z00_407;

																									{	/* Jas/stack.scm 115 */
																										obj_t BgL_res1422z00_702;

																										BgL_res1422z00_702 =
																											MAKE_YOUNG_PAIR(BNIL,
																											BNIL);
																										BgL_head1219z00_407 =
																											BgL_res1422z00_702;
																									}
																									{
																										obj_t BgL_l1217z00_409;
																										obj_t BgL_tail1220z00_410;

																										BgL_l1217z00_409 =
																											BgL_tablez00_397;
																										BgL_tail1220z00_410 =
																											BgL_head1219z00_407;
																									BgL_zc3z04anonymousza31337ze3z87_411:
																										if (NULLP
																											(BgL_l1217z00_409))
																											{	/* Jas/stack.scm 115 */
																												BgL_arg1335z00_404 =
																													CDR
																													(BgL_head1219z00_407);
																											}
																										else
																											{	/* Jas/stack.scm 115 */
																												obj_t
																													BgL_newtail1221z00_413;
																												{	/* Jas/stack.scm 115 */
																													obj_t
																														BgL_arg1345z00_415;
																													{	/* Jas/stack.scm 115 */
																														obj_t
																															BgL_slotz00_416;
																														BgL_slotz00_416 =
																															CAR(((obj_t)
																																BgL_l1217z00_409));
																														{	/* Jas/stack.scm 115 */
																															obj_t
																																BgL_arg1346z00_417;
																															BgL_arg1346z00_417
																																=
																																CDR(((obj_t)
																																	BgL_slotz00_416));
																															BgL_arg1345z00_415
																																=
																																BGl_stkzd2analyseze70z35zzjas_stackz00
																																(BgL_envz00_750,
																																BgL_classfilez00_749,
																																BgL_codez00_748,
																																BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg1346z00_417,
																																	BgL_codez00_748),
																																BINT
																																(BgL_nz00_348),
																																BgL_maxnz00_349);
																														}
																													}
																													{	/* Jas/stack.scm 115 */
																														obj_t
																															BgL_res1424z00_708;
																														BgL_res1424z00_708 =
																															MAKE_YOUNG_PAIR
																															(BgL_arg1345z00_415,
																															BNIL);
																														BgL_newtail1221z00_413
																															=
																															BgL_res1424z00_708;
																													}
																												}
																												SET_CDR
																													(BgL_tail1220z00_410,
																													BgL_newtail1221z00_413);
																												{	/* Jas/stack.scm 115 */
																													obj_t
																														BgL_arg1344z00_414;
																													BgL_arg1344z00_414 =
																														CDR(((obj_t)
																															BgL_l1217z00_409));
																													{
																														obj_t
																															BgL_tail1220z00_1061;
																														obj_t
																															BgL_l1217z00_1060;
																														BgL_l1217z00_1060 =
																															BgL_arg1344z00_414;
																														BgL_tail1220z00_1061
																															=
																															BgL_newtail1221z00_413;
																														BgL_tail1220z00_410
																															=
																															BgL_tail1220z00_1061;
																														BgL_l1217z00_409 =
																															BgL_l1217z00_1060;
																														goto
																															BgL_zc3z04anonymousza31337ze3z87_411;
																													}
																												}
																											}
																									}
																								}
																							BgL_runner1348z00_420 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1334z00_403,
																								BgL_arg1335z00_404);
																						}
																						{	/* Jas/stack.scm 114 */
																							obj_t BgL_aux1347z00_419;

																							BgL_aux1347z00_419 =
																								CAR(BgL_runner1348z00_420);
																							BgL_runner1348z00_420 =
																								CDR(BgL_runner1348z00_420);
																							return
																								BGl_maxz00zz__r4_numbers_6_5z00
																								(BgL_aux1347z00_419,
																								BgL_runner1348z00_420);
																						}
																					}
																				}
																			else
																				{	/* Jas/stack.scm 111 */
																					return BFALSE;
																				}
																		}
																	}
																	break;
																case ((long) 172):
																case ((long) 173):
																case ((long) 174):
																case ((long) 175):
																case ((long) 176):
																case ((long) 177):

																	if ((BgL_nz00_348 == ((long) 0)))
																		{	/* Jas/stack.scm 118 */
																			BFALSE;
																		}
																	else
																		{	/* Jas/stack.scm 118 */
																			BGl_jaszd2warningzd2zzjas_classfilez00(
																				((BgL_classfilez00_bglt)
																					BgL_classfilez00_749),
																				BGl_string1452z00zzjas_stackz00,
																				BINT(BgL_nz00_348));
																		}
																	return BgL_maxnz00_349;
																	break;
																case ((long) 202):

																	{	/* Jas/stack.scm 121 */
																		obj_t BgL_xz00_422;
																		obj_t BgL_yz00_423;

																		BgL_xz00_422 =
																			BGl_stkzd2analyseze70z35zzjas_stackz00
																			(BgL_envz00_750, BgL_classfilez00_749,
																			BgL_codez00_748, BgL_lz00_347,
																			BINT(BgL_nz00_348), BgL_maxnz00_349);
																		{	/* Jas/stack.scm 121 */
																			obj_t BgL_arg1351z00_424;

																			{	/* Jas/stack.scm 121 */
																				obj_t BgL_auxz00_1075;

																				{	/* Jas/stack.scm 121 */
																					obj_t BgL_pairz00_726;

																					{	/* Jas/stack.scm 121 */
																						obj_t BgL_pairz00_725;

																						{	/* Jas/stack.scm 121 */
																							obj_t BgL_pairz00_724;

																							BgL_pairz00_724 =
																								CDR(((obj_t) BgL_insz00_346));
																							BgL_pairz00_725 =
																								CDR(BgL_pairz00_724);
																						}
																						BgL_pairz00_726 =
																							CDR(BgL_pairz00_725);
																					}
																					BgL_auxz00_1075 =
																						CAR(BgL_pairz00_726);
																				}
																				BgL_arg1351z00_424 =
																					BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																					(BgL_auxz00_1075, BgL_codez00_748);
																			}
																			BgL_yz00_423 =
																				BGl_stkzd2analyseze70z35zzjas_stackz00
																				(BgL_envz00_750, BgL_classfilez00_749,
																				BgL_codez00_748, BgL_arg1351z00_424,
																				BINT(((long) 1)), BgL_maxnz00_349);
																		}
																		return
																			BGl_2maxz00zz__r4_numbers_6_5z00
																			(BgL_xz00_422, BgL_yz00_423);
																	}
																	break;
																default:
																	BgL_lz00_429 = BgL_lz00_347;
																BgL_zc3z04anonymousza31358ze3z87_430:
																	{
																		obj_t BgL_maxnz00_1088;
																		obj_t BgL_nz00_1086;
																		obj_t BgL_lz00_1085;

																		BgL_lz00_1085 = BgL_lz00_429;
																		BgL_nz00_1086 = BINT(BgL_nz00_348);
																		BgL_maxnz00_1088 = BgL_maxnz00_349;
																		BgL_maxnz00_315 = BgL_maxnz00_1088;
																		BgL_nz00_314 = BgL_nz00_1086;
																		BgL_lz00_313 = BgL_lz00_1085;
																		goto BGl_stkzd2analyseze70z35zzjas_stackz00;
																	}
																}
														}
													else
														{
															obj_t BgL_lz00_1091;

															BgL_lz00_1091 = BgL_lz00_347;
															BgL_lz00_429 = BgL_lz00_1091;
															goto BgL_zc3z04anonymousza31358ze3z87_430;
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



/* &stk-analysis */
	obj_t BGl_z62stkzd2analysiszb0zzjas_stackz00(obj_t BgL_envz00_741,
		obj_t BgL_classfilez00_742, obj_t BgL_codez00_743)
	{
		{	/* Jas/stack.scm 70 */
			return
				BGl_stkzd2analysiszd2zzjas_stackz00(BgL_classfilez00_742,
				BgL_codez00_743);
		}

	}



/* make-stk-env */
	obj_t BGl_makezd2stkzd2envz00zzjas_stackz00(obj_t BgL_lz00_9)
	{
		{	/* Jas/stack.scm 125 */
		BGl_makezd2stkzd2envz00zzjas_stackz00:
			if (NULLP(BgL_lz00_9))
				{	/* Jas/stack.scm 126 */
					return BgL_lz00_9;
				}
			else
				{	/* Jas/stack.scm 127 */
					bool_t BgL_test1498z00_1095;

					{	/* Jas/stack.scm 127 */
						obj_t BgL_tmpz00_1096;

						BgL_tmpz00_1096 = CAR(((obj_t) BgL_lz00_9));
						BgL_test1498z00_1095 = SYMBOLP(BgL_tmpz00_1096);
					}
					if (BgL_test1498z00_1095)
						{	/* Jas/stack.scm 127 */
							obj_t BgL_arg1363z00_438;
							obj_t BgL_arg1364z00_439;

							{	/* Jas/stack.scm 127 */
								obj_t BgL_arg1367z00_440;

								BgL_arg1367z00_440 = CAR(((obj_t) BgL_lz00_9));
								BgL_arg1363z00_438 =
									MAKE_YOUNG_PAIR(BgL_arg1367z00_440, BINT(((long) -1)));
							}
							{	/* Jas/stack.scm 127 */
								obj_t BgL_arg1370z00_441;

								BgL_arg1370z00_441 = CDR(((obj_t) BgL_lz00_9));
								BgL_arg1364z00_439 =
									BGl_makezd2stkzd2envz00zzjas_stackz00(BgL_arg1370z00_441);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1363z00_438, BgL_arg1364z00_439);
						}
					else
						{	/* Jas/stack.scm 128 */
							obj_t BgL_arg1371z00_442;

							BgL_arg1371z00_442 = CDR(((obj_t) BgL_lz00_9));
							{
								obj_t BgL_lz00_1110;

								BgL_lz00_1110 = BgL_arg1371z00_442;
								BgL_lz00_9 = BgL_lz00_1110;
								goto BGl_makezd2stkzd2envz00zzjas_stackz00;
							}
						}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_stackz00()
	{
		{	/* Jas/stack.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_stackz00()
	{
		{	/* Jas/stack.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_stackz00()
	{
		{	/* Jas/stack.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_stackz00()
	{
		{	/* Jas/stack.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 267157983),
				BSTRING_TO_STRING(BGl_string1456z00zzjas_stackz00));
			return
				BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 135093979),
				BSTRING_TO_STRING(BGl_string1456z00zzjas_stackz00));
		}

	}

#ifdef __cplusplus
}
#endif
