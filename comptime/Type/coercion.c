/*===========================================================================*/
/*   (Type/coercion.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/coercion.scm) */
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


	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_z62addzd2coercionz12za2zztype_coercionz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zztype_coercionz00();
	static obj_t BGl_appendzd221011zd2zztype_coercionz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztype_coercionz00();
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2coercerzd2zztype_coercionz00(BgL_typez00_bglt, BgL_typez00_bglt);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	BGL_EXPORTED_DECL bool_t
		BGl_coercerzd2existszf3z21zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zztype_coercionz00();
	static obj_t BGl_z62findzd2coercerzb0zztype_coercionz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_coercionz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zztype_coercionz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztype_coercionz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2coercionz12zc0zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zztype_coercionz00();
	static obj_t BGl_z62coercerzd2existszf3z43zztype_coercionz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_coercionz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztype_coercionz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string1388z00zztype_coercionz00,
		BgL_bgl_string1388za700za7za7t1398za7, "Type coercion redefinition -- ",
		30);
	      DEFINE_STRING(BGl_string1389z00zztype_coercionz00,
		BgL_bgl_string1389za700za7za7t1399za7, "add-coercion!", 13);
	      DEFINE_STRING(BGl_string1390z00zztype_coercionz00,
		BgL_bgl_string1390za700za7za7t1400za7, "~a -> ~a", 8);
	      DEFINE_STRING(BGl_string1391z00zztype_coercionz00,
		BgL_bgl_string1391za700za7za7t1401za7, "while adding: ~a -> ~a", 22);
	      DEFINE_STRING(BGl_string1392z00zztype_coercionz00,
		BgL_bgl_string1392za700za7za7t1402za7, "Can't find coercion", 19);
	      DEFINE_STRING(BGl_string1393z00zztype_coercionz00,
		BgL_bgl_string1393za700za7za7t1403za7, "type_coercion", 13);
	      DEFINE_STRING(BGl_string1394z00zztype_coercionz00,
		BgL_bgl_string1394za700za7za7t1404za7, "coercer ", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_coercerzd2existszf3zd2envzf3zztype_coercionz00,
		BgL_bgl_za762coercerza7d2exi1405z00,
		BGl_z62coercerzd2existszf3z43zztype_coercionz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2coercionz12zd2envz12zztype_coercionz00,
		BgL_bgl_za762addza7d2coercio1406z00,
		BGl_z62addzd2coercionz12za2zztype_coercionz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2coercerzd2envz00zztype_coercionz00,
		BgL_bgl_za762findza7d2coerce1407z00,
		BGl_z62findzd2coercerzb0zztype_coercionz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zztype_coercionz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long
		BgL_checksumz00_509, char *BgL_fromz00_510)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_coercionz00))
				{
					BGl_requirezd2initializa7ationz75zztype_coercionz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztype_coercionz00();
					BGl_libraryzd2moduleszd2initz00zztype_coercionz00();
					BGl_cnstzd2initzd2zztype_coercionz00();
					BGl_importedzd2moduleszd2initz00zztype_coercionz00();
					return BGl_toplevelzd2initzd2zztype_coercionz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_coercionz00()
	{
		{	/* Type/coercion.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "type_coercion");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"type_coercion");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"type_coercion");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"type_coercion");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"type_coercion");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"type_coercion");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"type_coercion");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"type_coercion");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztype_coercionz00()
	{
		{	/* Type/coercion.scm 15 */
			{	/* Type/coercion.scm 15 */
				obj_t BgL_cportz00_496;

				{	/* Type/coercion.scm 15 */
					obj_t BgL_stringz00_504;

					BgL_stringz00_504 = BGl_string1394z00zztype_coercionz00;
					{	/* Type/coercion.scm 15 */
						obj_t BgL_startz00_505;

						BgL_startz00_505 = BINT(((long) 0));
						{	/* Type/coercion.scm 15 */
							obj_t BgL_endz00_506;

							BgL_endz00_506 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_504)));
							{	/* Type/coercion.scm 15 */

								BgL_cportz00_496 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_504, BgL_startz00_505, BgL_endz00_506);
				}}}}
				{
					long BgL_iz00_497;

					BgL_iz00_497 = ((long) 0);
				BgL_loopz00_498:
					if ((BgL_iz00_497 == ((long) -1)))
						{	/* Type/coercion.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Type/coercion.scm 15 */
							{	/* Type/coercion.scm 15 */
								obj_t BgL_arg1396z00_500;

								{	/* Type/coercion.scm 15 */

									{	/* Type/coercion.scm 15 */
										obj_t BgL_locationz00_502;

										BgL_locationz00_502 = BBOOL(((bool_t) 0));
										{	/* Type/coercion.scm 15 */

											BgL_arg1396z00_500 =
												BGl_readz00zz__readerz00(BgL_cportz00_496,
												BgL_locationz00_502);
										}
									}
								}
								{	/* Type/coercion.scm 15 */
									int BgL_tmpz00_536;

									BgL_tmpz00_536 = (int) (BgL_iz00_497);
									CNST_TABLE_SET(BgL_tmpz00_536, BgL_arg1396z00_500);
							}}
							{	/* Type/coercion.scm 15 */
								int BgL_auxz00_503;

								BgL_auxz00_503 = (int) ((BgL_iz00_497 - ((long) 1)));
								{
									long BgL_iz00_541;

									BgL_iz00_541 = (long) (BgL_auxz00_503);
									BgL_iz00_497 = BgL_iz00_541;
									goto BgL_loopz00_498;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztype_coercionz00()
	{
		{	/* Type/coercion.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztype_coercionz00()
	{
		{	/* Type/coercion.scm 15 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zztype_coercionz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_90;

				BgL_headz00_90 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_91;
					obj_t BgL_tailz00_92;

					BgL_prevz00_91 = BgL_headz00_90;
					BgL_tailz00_92 = BgL_l1z00_1;
				BgL_loopz00_93:
					if (PAIRP(BgL_tailz00_92))
						{
							obj_t BgL_newzd2prevzd2_95;

							BgL_newzd2prevzd2_95 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_92), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_91, BgL_newzd2prevzd2_95);
							{
								obj_t BgL_tailz00_551;
								obj_t BgL_prevz00_550;

								BgL_prevz00_550 = BgL_newzd2prevzd2_95;
								BgL_tailz00_551 = CDR(BgL_tailz00_92);
								BgL_tailz00_92 = BgL_tailz00_551;
								BgL_prevz00_91 = BgL_prevz00_550;
								goto BgL_loopz00_93;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_90);
				}
			}
		}

	}



/* find-coercer */
	BGL_EXPORTED_DEF obj_t
		BGl_findzd2coercerzd2zztype_coercionz00(BgL_typez00_bglt BgL_fromz00_21,
		BgL_typez00_bglt BgL_toz00_22)
	{
		{	/* Type/coercion.scm 31 */
			{	/* Type/coercion.scm 32 */
				BgL_typez00_bglt BgL_fromz00_111;
				BgL_typez00_bglt BgL_toz00_112;

				BgL_fromz00_111 =
					BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_fromz00_21);
				BgL_toz00_112 = BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_toz00_22);
				{
					obj_t BgL_coercerz00_115;

					BgL_coercerz00_115 =
						(((BgL_typez00_bglt) COBJECT(BgL_fromz00_111))->BgL_coercezd2tozd2);
				BgL_zc3z04anonymousza31100ze3z87_116:
					if (NULLP(BgL_coercerz00_115))
						{	/* Type/coercion.scm 36 */
							return BFALSE;
						}
					else
						{	/* Type/coercion.scm 38 */
							bool_t BgL_test1412z00_558;

							{	/* Type/coercion.scm 38 */
								obj_t BgL_tmpz00_559;

								{	/* Type/coercion.scm 38 */
									obj_t BgL_sz00_430;

									BgL_sz00_430 = CAR(((obj_t) BgL_coercerz00_115));
									BgL_tmpz00_559 = STRUCT_REF(BgL_sz00_430, (int) (((long) 1)));
								}
								BgL_test1412z00_558 =
									(BgL_tmpz00_559 == ((obj_t) BgL_toz00_112));
							}
							if (BgL_test1412z00_558)
								{	/* Type/coercion.scm 38 */
									return CAR(((obj_t) BgL_coercerz00_115));
								}
							else
								{
									obj_t BgL_coercerz00_568;

									BgL_coercerz00_568 = CDR(((obj_t) BgL_coercerz00_115));
									BgL_coercerz00_115 = BgL_coercerz00_568;
									goto BgL_zc3z04anonymousza31100ze3z87_116;
								}
						}
				}
			}
		}

	}



/* &find-coercer */
	obj_t BGl_z62findzd2coercerzb0zztype_coercionz00(obj_t BgL_envz00_484,
		obj_t BgL_fromz00_485, obj_t BgL_toz00_486)
	{
		{	/* Type/coercion.scm 31 */
			return
				BGl_findzd2coercerzd2zztype_coercionz00(
				((BgL_typez00_bglt) BgL_fromz00_485),
				((BgL_typez00_bglt) BgL_toz00_486));
		}

	}



/* add-coercion! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2coercionz12zc0zztype_coercionz00(BgL_typez00_bglt BgL_fromz00_23,
		BgL_typez00_bglt BgL_toz00_24, obj_t BgL_checkz00_25,
		obj_t BgL_coercez00_26)
	{
		{	/* Type/coercion.scm 77 */
			{	/* Type/coercion.scm 83 */
				BgL_typez00_bglt BgL_fromz00_125;
				BgL_typez00_bglt BgL_toz00_126;

				BgL_fromz00_125 =
					BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_fromz00_23);
				BgL_toz00_126 = BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_toz00_24);
				{	/* Type/coercion.scm 85 */
					bool_t BgL_test1413z00_577;

					{	/* Type/coercion.scm 85 */
						obj_t BgL_arg1239z00_211;

						BgL_arg1239z00_211 =
							BGl_findzd2coercerzd2zztype_coercionz00(BgL_fromz00_125,
							BgL_toz00_126);
						if (STRUCTP(BgL_arg1239z00_211))
							{	/* Type/coercion.scm 85 */
								BgL_test1413z00_577 =
									(STRUCT_KEY(BgL_arg1239z00_211) ==
									CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Type/coercion.scm 85 */
								BgL_test1413z00_577 = ((bool_t) 0);
							}
					}
					if (BgL_test1413z00_577)
						{	/* Type/coercion.scm 85 */
							if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
								{	/* Type/coercion.scm 86 */
									return BFALSE;
								}
							else
								{	/* Type/coercion.scm 89 */
									obj_t BgL_arg1118z00_129;

									{	/* Type/coercion.scm 89 */
										obj_t BgL_arg1123z00_133;

										{	/* Type/coercion.scm 89 */
											obj_t BgL_list1124z00_134;

											{	/* Type/coercion.scm 89 */
												obj_t BgL_arg1125z00_135;

												{	/* Type/coercion.scm 89 */
													obj_t BgL_arg1126z00_136;

													{	/* Type/coercion.scm 89 */
														obj_t BgL_arg1127z00_137;

														BgL_arg1127z00_137 =
															MAKE_YOUNG_PAIR(BgL_coercez00_26, BNIL);
														BgL_arg1126z00_136 =
															MAKE_YOUNG_PAIR(BgL_checkz00_25,
															BgL_arg1127z00_137);
													}
													BgL_arg1125z00_135 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_toz00_126), BgL_arg1126z00_136);
												}
												BgL_list1124z00_134 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_fromz00_125), BgL_arg1125z00_135);
											}
											BgL_arg1123z00_133 = BgL_list1124z00_134;
										}
										BgL_arg1118z00_129 =
											BGl_shapez00zztools_shapez00(BgL_arg1123z00_133);
									}
									{	/* Type/coercion.scm 87 */
										obj_t BgL_list1119z00_130;

										{	/* Type/coercion.scm 87 */
											obj_t BgL_arg1121z00_131;

											{	/* Type/coercion.scm 87 */
												obj_t BgL_arg1122z00_132;

												BgL_arg1122z00_132 =
													MAKE_YOUNG_PAIR(BgL_arg1118z00_129, BNIL);
												BgL_arg1121z00_131 =
													MAKE_YOUNG_PAIR(BGl_string1388z00zztype_coercionz00,
													BgL_arg1122z00_132);
											}
											BgL_list1119z00_130 =
												MAKE_YOUNG_PAIR(BGl_string1389z00zztype_coercionz00,
												BgL_arg1121z00_131);
										}
										return BGl_warningz00zz__errorz00(BgL_list1119z00_130);
									}
								}
						}
					else
						{	/* Type/coercion.scm 85 */
							{	/* Type/coercion.scm 92 */
								obj_t BgL_newz00_138;

								{	/* Type/coercion.scm 92 */
									obj_t BgL_newz00_439;

									BgL_newz00_439 =
										create_struct(CNST_TABLE_REF(((long) 0)),
										(int) (((long) 4)));
									{	/* Type/coercion.scm 92 */
										int BgL_tmpz00_600;

										BgL_tmpz00_600 = (int) (((long) 3));
										STRUCT_SET(BgL_newz00_439, BgL_tmpz00_600,
											BgL_coercez00_26);
									}
									{	/* Type/coercion.scm 92 */
										int BgL_tmpz00_603;

										BgL_tmpz00_603 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_439, BgL_tmpz00_603, BgL_checkz00_25);
									}
									{	/* Type/coercion.scm 92 */
										obj_t BgL_auxz00_608;
										int BgL_tmpz00_606;

										BgL_auxz00_608 = ((obj_t) BgL_toz00_126);
										BgL_tmpz00_606 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_439, BgL_tmpz00_606, BgL_auxz00_608);
									}
									{	/* Type/coercion.scm 92 */
										obj_t BgL_auxz00_613;
										int BgL_tmpz00_611;

										BgL_auxz00_613 = ((obj_t) BgL_fromz00_125);
										BgL_tmpz00_611 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_439, BgL_tmpz00_611, BgL_auxz00_613);
									}
									BgL_newz00_138 = BgL_newz00_439;
								}
								{	/* Type/coercion.scm 93 */
									obj_t BgL_arg1128z00_139;

									BgL_arg1128z00_139 =
										MAKE_YOUNG_PAIR(BgL_newz00_138,
										(((BgL_typez00_bglt) COBJECT(BgL_fromz00_125))->
											BgL_coercezd2tozd2));
									((((BgL_typez00_bglt) COBJECT(BgL_fromz00_125))->
											BgL_coercezd2tozd2) =
										((obj_t) BgL_arg1128z00_139), BUNSPEC);
							}}
							{	/* Type/coercion.scm 95 */
								obj_t BgL_g1056z00_141;

								BgL_g1056z00_141 =
									(((BgL_typez00_bglt) COBJECT(BgL_toz00_126))->BgL_parentsz00);
								{
									obj_t BgL_l1054z00_143;

									BgL_l1054z00_143 = BgL_g1056z00_141;
								BgL_zc3z04anonymousza31130ze3z87_144:
									if (PAIRP(BgL_l1054z00_143))
										{	/* Type/coercion.scm 114 */
											{	/* Type/coercion.scm 97 */
												obj_t BgL_parentz00_146;

												BgL_parentz00_146 = CAR(BgL_l1054z00_143);
												{	/* Type/coercion.scm 97 */
													bool_t BgL_test1419z00_623;

													if ((((obj_t) BgL_fromz00_125) == BgL_parentz00_146))
														{	/* Type/coercion.scm 97 */
															BgL_test1419z00_623 = ((bool_t) 0);
														}
													else
														{	/* Type/coercion.scm 97 */
															if (
																(((obj_t) BgL_toz00_126) == BgL_parentz00_146))
																{	/* Type/coercion.scm 98 */
																	BgL_test1419z00_623 = ((bool_t) 0);
																}
															else
																{	/* Type/coercion.scm 99 */
																	bool_t BgL_test1422z00_630;

																	{	/* Type/coercion.scm 99 */
																		obj_t BgL_arg1175z00_173;

																		BgL_arg1175z00_173 =
																			BGl_findzd2coercerzd2zztype_coercionz00
																			(BgL_fromz00_125,
																			((BgL_typez00_bglt) BgL_parentz00_146));
																		if (STRUCTP(BgL_arg1175z00_173))
																			{	/* Type/coercion.scm 99 */
																				BgL_test1422z00_630 =
																					(STRUCT_KEY(BgL_arg1175z00_173) ==
																					CNST_TABLE_REF(((long) 0)));
																			}
																		else
																			{	/* Type/coercion.scm 99 */
																				BgL_test1422z00_630 = ((bool_t) 0);
																			}
																	}
																	if (BgL_test1422z00_630)
																		{	/* Type/coercion.scm 99 */
																			BgL_test1419z00_623 = ((bool_t) 0);
																		}
																	else
																		{	/* Type/coercion.scm 99 */
																			BgL_test1419z00_623 = ((bool_t) 1);
																		}
																}
														}
													if (BgL_test1419z00_623)
														{	/* Type/coercion.scm 100 */
															obj_t BgL_coercerzd2pzd2_153;

															BgL_coercerzd2pzd2_153 =
																BGl_findzd2coercerzd2zztype_coercionz00
																(BgL_toz00_126,
																((BgL_typez00_bglt) BgL_parentz00_146));
															{	/* Type/coercion.scm 101 */
																bool_t BgL_test1424z00_640;

																if (STRUCTP(BgL_coercerzd2pzd2_153))
																	{	/* Type/coercion.scm 101 */
																		BgL_test1424z00_640 =
																			(STRUCT_KEY(BgL_coercerzd2pzd2_153) ==
																			CNST_TABLE_REF(((long) 0)));
																	}
																else
																	{	/* Type/coercion.scm 101 */
																		BgL_test1424z00_640 = ((bool_t) 0);
																	}
																if (BgL_test1424z00_640)
																	{	/* Type/coercion.scm 108 */
																		obj_t BgL_checkzd2pzd2_155;
																		obj_t BgL_coercezd2pzd2_156;

																		BgL_checkzd2pzd2_155 =
																			STRUCT_REF(BgL_coercerzd2pzd2_153,
																			(int) (((long) 2)));
																		BgL_coercezd2pzd2_156 =
																			STRUCT_REF(BgL_coercerzd2pzd2_153,
																			(int) (((long) 3)));
																		{	/* Type/coercion.scm 112 */
																			obj_t BgL_arg1145z00_157;
																			obj_t BgL_arg1146z00_158;

																			BgL_arg1145z00_157 =
																				BGl_appendzd221011zd2zztype_coercionz00
																				(BgL_checkz00_25, BgL_checkzd2pzd2_155);
																			BgL_arg1146z00_158 =
																				BGl_appendzd221011zd2zztype_coercionz00
																				(BgL_coercez00_26,
																				BgL_coercezd2pzd2_156);
																			BGl_addzd2coercionz12zc0zztype_coercionz00
																				(BgL_fromz00_125,
																				((BgL_typez00_bglt) BgL_parentz00_146),
																				BgL_arg1145z00_157, BgL_arg1146z00_158);
																	}}
																else
																	{	/* Type/coercion.scm 104 */
																		obj_t BgL_arg1155z00_159;
																		obj_t BgL_arg1156z00_160;

																		{	/* Type/coercion.scm 104 */
																			obj_t BgL_arg1165z00_162;
																			obj_t BgL_arg1166z00_163;

																			BgL_arg1165z00_162 =
																				BGl_shapez00zztools_shapez00(
																				((obj_t) BgL_toz00_126));
																			BgL_arg1166z00_163 =
																				BGl_shapez00zztools_shapez00
																				(BgL_parentz00_146);
																			{	/* Type/coercion.scm 103 */
																				obj_t BgL_list1167z00_164;

																				{	/* Type/coercion.scm 103 */
																					obj_t BgL_arg1169z00_165;

																					BgL_arg1169z00_165 =
																						MAKE_YOUNG_PAIR(BgL_arg1166z00_163,
																						BNIL);
																					BgL_list1167z00_164 =
																						MAKE_YOUNG_PAIR(BgL_arg1165z00_162,
																						BgL_arg1169z00_165);
																				}
																				BgL_arg1155z00_159 =
																					BGl_formatz00zz__r4_output_6_10_3z00
																					(BGl_string1390z00zztype_coercionz00,
																					BgL_list1167z00_164);
																			}
																		}
																		{	/* Type/coercion.scm 106 */
																			obj_t BgL_arg1170z00_166;
																			obj_t BgL_arg1172z00_167;

																			BgL_arg1170z00_166 =
																				BGl_shapez00zztools_shapez00(
																				((obj_t) BgL_fromz00_125));
																			BgL_arg1172z00_167 =
																				BGl_shapez00zztools_shapez00(
																				((obj_t) BgL_toz00_126));
																			{	/* Type/coercion.scm 105 */
																				obj_t BgL_list1173z00_168;

																				{	/* Type/coercion.scm 105 */
																					obj_t BgL_arg1174z00_169;

																					BgL_arg1174z00_169 =
																						MAKE_YOUNG_PAIR(BgL_arg1172z00_167,
																						BNIL);
																					BgL_list1173z00_168 =
																						MAKE_YOUNG_PAIR(BgL_arg1170z00_166,
																						BgL_arg1174z00_169);
																				}
																				BgL_arg1156z00_160 =
																					BGl_formatz00zz__r4_output_6_10_3z00
																					(BGl_string1391z00zztype_coercionz00,
																					BgL_list1173z00_168);
																			}
																		}
																		BGl_userzd2errorzd2zztools_errorz00
																			(BGl_string1392z00zztype_coercionz00,
																			BgL_arg1155z00_159, BgL_arg1156z00_160,
																			BNIL);
																	}
															}
														}
													else
														{	/* Type/coercion.scm 97 */
															BFALSE;
														}
												}
											}
											{
												obj_t BgL_l1054z00_668;

												BgL_l1054z00_668 = CDR(BgL_l1054z00_143);
												BgL_l1054z00_143 = BgL_l1054z00_668;
												goto BgL_zc3z04anonymousza31130ze3z87_144;
											}
										}
									else
										{	/* Type/coercion.scm 114 */
											((bool_t) 1);
										}
								}
							}
							{	/* Type/coercion.scm 116 */
								obj_t BgL_g1059z00_176;

								BgL_g1059z00_176 =
									(((BgL_typez00_bglt) COBJECT(BgL_fromz00_125))->
									BgL_parentsz00);
								{
									obj_t BgL_l1057z00_178;

									{	/* Type/coercion.scm 134 */
										bool_t BgL_tmpz00_671;

										BgL_l1057z00_178 = BgL_g1059z00_176;
									BgL_zc3z04anonymousza31177ze3z87_179:
										if (PAIRP(BgL_l1057z00_178))
											{	/* Type/coercion.scm 134 */
												{	/* Type/coercion.scm 118 */
													obj_t BgL_parentz00_181;

													BgL_parentz00_181 = CAR(BgL_l1057z00_178);
													{	/* Type/coercion.scm 118 */
														bool_t BgL_test1427z00_675;

														if (
															(((obj_t) BgL_fromz00_125) == BgL_parentz00_181))
															{	/* Type/coercion.scm 118 */
																BgL_test1427z00_675 = ((bool_t) 0);
															}
														else
															{	/* Type/coercion.scm 118 */
																if (
																	(((obj_t) BgL_toz00_126) ==
																		BgL_parentz00_181))
																	{	/* Type/coercion.scm 119 */
																		BgL_test1427z00_675 = ((bool_t) 0);
																	}
																else
																	{	/* Type/coercion.scm 120 */
																		bool_t BgL_test1430z00_682;

																		{	/* Type/coercion.scm 120 */
																			obj_t BgL_arg1229z00_208;

																			BgL_arg1229z00_208 =
																				BGl_findzd2coercerzd2zztype_coercionz00(
																				((BgL_typez00_bglt) BgL_parentz00_181),
																				BgL_toz00_126);
																			if (STRUCTP(BgL_arg1229z00_208))
																				{	/* Type/coercion.scm 120 */
																					BgL_test1430z00_682 =
																						(STRUCT_KEY(BgL_arg1229z00_208) ==
																						CNST_TABLE_REF(((long) 0)));
																				}
																			else
																				{	/* Type/coercion.scm 120 */
																					BgL_test1430z00_682 = ((bool_t) 0);
																				}
																		}
																		if (BgL_test1430z00_682)
																			{	/* Type/coercion.scm 120 */
																				BgL_test1427z00_675 = ((bool_t) 0);
																			}
																		else
																			{	/* Type/coercion.scm 120 */
																				BgL_test1427z00_675 = ((bool_t) 1);
																			}
																	}
															}
														if (BgL_test1427z00_675)
															{	/* Type/coercion.scm 121 */
																obj_t BgL_coercerzd2pzd2_188;

																BgL_coercerzd2pzd2_188 =
																	BGl_findzd2coercerzd2zztype_coercionz00(
																	((BgL_typez00_bglt) BgL_parentz00_181),
																	BgL_fromz00_125);
																{	/* Type/coercion.scm 122 */
																	bool_t BgL_test1432z00_692;

																	if (STRUCTP(BgL_coercerzd2pzd2_188))
																		{	/* Type/coercion.scm 122 */
																			BgL_test1432z00_692 =
																				(STRUCT_KEY(BgL_coercerzd2pzd2_188) ==
																				CNST_TABLE_REF(((long) 0)));
																		}
																	else
																		{	/* Type/coercion.scm 122 */
																			BgL_test1432z00_692 = ((bool_t) 0);
																		}
																	if (BgL_test1432z00_692)
																		{	/* Type/coercion.scm 128 */
																			obj_t BgL_checkzd2pzd2_190;
																			obj_t BgL_coercezd2pzd2_191;

																			BgL_checkzd2pzd2_190 =
																				STRUCT_REF(BgL_coercerzd2pzd2_188,
																				(int) (((long) 2)));
																			BgL_coercezd2pzd2_191 =
																				STRUCT_REF(BgL_coercerzd2pzd2_188,
																				(int) (((long) 3)));
																			{	/* Type/coercion.scm 132 */
																				obj_t BgL_arg1194z00_192;
																				obj_t BgL_arg1197z00_193;

																				BgL_arg1194z00_192 =
																					BGl_appendzd221011zd2zztype_coercionz00
																					(BgL_checkzd2pzd2_190,
																					BgL_checkz00_25);
																				BgL_arg1197z00_193 =
																					BGl_appendzd221011zd2zztype_coercionz00
																					(BgL_coercezd2pzd2_191,
																					BgL_coercez00_26);
																				BGl_addzd2coercionz12zc0zztype_coercionz00
																					(((BgL_typez00_bglt)
																						BgL_parentz00_181), BgL_toz00_126,
																					BgL_arg1194z00_192,
																					BgL_arg1197z00_193);
																		}}
																	else
																		{	/* Type/coercion.scm 125 */
																			obj_t BgL_arg1201z00_194;
																			obj_t BgL_arg1208z00_195;

																			{	/* Type/coercion.scm 125 */
																				obj_t BgL_arg1211z00_197;
																				obj_t BgL_arg1216z00_198;

																				BgL_arg1211z00_197 =
																					BGl_shapez00zztools_shapez00
																					(BgL_parentz00_181);
																				BgL_arg1216z00_198 =
																					BGl_shapez00zztools_shapez00(((obj_t)
																						BgL_fromz00_125));
																				{	/* Type/coercion.scm 124 */
																					obj_t BgL_list1217z00_199;

																					{	/* Type/coercion.scm 124 */
																						obj_t BgL_arg1221z00_200;

																						BgL_arg1221z00_200 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1216z00_198, BNIL);
																						BgL_list1217z00_199 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1211z00_197,
																							BgL_arg1221z00_200);
																					}
																					BgL_arg1201z00_194 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string1390z00zztype_coercionz00,
																						BgL_list1217z00_199);
																				}
																			}
																			{	/* Type/coercion.scm 127 */
																				obj_t BgL_arg1223z00_201;
																				obj_t BgL_arg1225z00_202;

																				BgL_arg1223z00_201 =
																					BGl_shapez00zztools_shapez00(
																					((obj_t) BgL_fromz00_125));
																				BgL_arg1225z00_202 =
																					BGl_shapez00zztools_shapez00(
																					((obj_t) BgL_toz00_126));
																				{	/* Type/coercion.scm 126 */
																					obj_t BgL_list1226z00_203;

																					{	/* Type/coercion.scm 126 */
																						obj_t BgL_arg1227z00_204;

																						BgL_arg1227z00_204 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1225z00_202, BNIL);
																						BgL_list1226z00_203 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1223z00_201,
																							BgL_arg1227z00_204);
																					}
																					BgL_arg1208z00_195 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string1391z00zztype_coercionz00,
																						BgL_list1226z00_203);
																				}
																			}
																			BGl_userzd2errorzd2zztools_errorz00
																				(BGl_string1392z00zztype_coercionz00,
																				BgL_arg1201z00_194, BgL_arg1208z00_195,
																				BNIL);
																		}
																}
															}
														else
															{	/* Type/coercion.scm 118 */
																BFALSE;
															}
													}
												}
												{
													obj_t BgL_l1057z00_720;

													BgL_l1057z00_720 = CDR(BgL_l1057z00_178);
													BgL_l1057z00_178 = BgL_l1057z00_720;
													goto BgL_zc3z04anonymousza31177ze3z87_179;
												}
											}
										else
											{	/* Type/coercion.scm 134 */
												BgL_tmpz00_671 = ((bool_t) 1);
											}
										return BBOOL(BgL_tmpz00_671);
									}
								}
							}
						}
				}
			}
		}

	}



/* &add-coercion! */
	obj_t BGl_z62addzd2coercionz12za2zztype_coercionz00(obj_t BgL_envz00_487,
		obj_t BgL_fromz00_488, obj_t BgL_toz00_489, obj_t BgL_checkz00_490,
		obj_t BgL_coercez00_491)
	{
		{	/* Type/coercion.scm 77 */
			return
				BGl_addzd2coercionz12zc0zztype_coercionz00(
				((BgL_typez00_bglt) BgL_fromz00_488),
				((BgL_typez00_bglt) BgL_toz00_489), BgL_checkz00_490,
				BgL_coercez00_491);
		}

	}



/* coercer-exists? */
	BGL_EXPORTED_DEF bool_t
		BGl_coercerzd2existszf3z21zztype_coercionz00(BgL_typez00_bglt BgL_toz00_29,
		BgL_typez00_bglt BgL_fromz00_30)
	{
		{	/* Type/coercion.scm 169 */
			{	/* Type/coercion.scm 170 */
				BgL_typez00_bglt BgL_toz00_395;
				BgL_typez00_bglt BgL_fromz00_396;

				BgL_toz00_395 = BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_toz00_29);
				BgL_fromz00_396 =
					BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_fromz00_30);
				{	/* Type/coercion.scm 172 */
					bool_t BgL_test1434z00_728;

					if ((((obj_t) BgL_fromz00_396) == ((obj_t) BgL_toz00_395)))
						{	/* Type/coercion.scm 172 */
							BgL_test1434z00_728 = ((bool_t) 1);
						}
					else
						{	/* Type/coercion.scm 172 */
							BgL_test1434z00_728 =
								(((BgL_typez00_bglt) COBJECT(BgL_fromz00_396))->
								BgL_magiczf3zf3);
						}
					if (BgL_test1434z00_728)
						{	/* Type/coercion.scm 172 */
							return ((bool_t) 1);
						}
					else
						{	/* Type/coercion.scm 174 */
							obj_t BgL_arg1364z00_399;

							BgL_arg1364z00_399 =
								BGl_findzd2coercerzd2zztype_coercionz00(BgL_fromz00_396,
								BgL_toz00_395);
							if (STRUCTP(BgL_arg1364z00_399))
								{	/* Type/coercion.scm 174 */
									return
										(STRUCT_KEY(BgL_arg1364z00_399) ==
										CNST_TABLE_REF(((long) 0)));
								}
							else
								{	/* Type/coercion.scm 174 */
									return ((bool_t) 0);
								}
						}
				}
			}
		}

	}



/* &coercer-exists? */
	obj_t BGl_z62coercerzd2existszf3z43zztype_coercionz00(obj_t BgL_envz00_492,
		obj_t BgL_toz00_493, obj_t BgL_fromz00_494)
	{
		{	/* Type/coercion.scm 169 */
			return
				BBOOL(BGl_coercerzd2existszf3z21zztype_coercionz00(
					((BgL_typez00_bglt) BgL_toz00_493),
					((BgL_typez00_bglt) BgL_fromz00_494)));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztype_coercionz00()
	{
		{	/* Type/coercion.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_coercionz00()
	{
		{	/* Type/coercion.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_coercionz00()
	{
		{	/* Type/coercion.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_coercionz00()
	{
		{	/* Type/coercion.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1393z00zztype_coercionz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1393z00zztype_coercionz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1393z00zztype_coercionz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1393z00zztype_coercionz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1393z00zztype_coercionz00));
		}

	}

#ifdef __cplusplus
}
#endif
