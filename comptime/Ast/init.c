/*===========================================================================*/
/*   (Ast/init.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/init.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;


	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_occurzd2nodezd2inz12z12zzast_occurz00(BgL_nodez00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_objectzd2initzd2zzast_initz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_initz00();
	extern obj_t BGl_libraryzd2finaliza7erz75zzmodule_libraryz00();
	extern obj_t BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00();
	extern obj_t BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_astzd2initializa7ersz75zzast_initz00();
	static obj_t BGl_gczd2rootszd2initz00zzast_initz00();
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	static obj_t BGl_requirezd2initializa7ationz75zzast_initz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzast_initz00();
	extern obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzast_initz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_initz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_initz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzprof_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_getzd2modulezd2initz00zzbackend_initz00();
	static obj_t BGl_cnstzd2initzd2zzast_initz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_initz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_initz00();
	static obj_t BGl_z62astzd2initializa7ersz17zzast_initz00(obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_astzd2initializa7erszd2envza7zzast_initz00,
		BgL_bgl_za762astza7d2initial1396z00,
		BGl_z62astzd2initializa7ersz17zzast_initz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1380z00zzast_initz00,
		BgL_bgl_string1380za700za7za7a1397za7, "ast_init", 8);
	      DEFINE_STRING(BGl_string1381z00zzast_initz00,
		BgL_bgl_string1381za700za7za7a1398za7, "imported (ld distrib) unit ", 27);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_initz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_initz00(long
		BgL_checksumz00_1865, char *BgL_fromz00_1866)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_initz00))
				{
					BGl_requirezd2initializa7ationz75zzast_initz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_initz00();
					BGl_libraryzd2moduleszd2initz00zzast_initz00();
					BGl_cnstzd2initzd2zzast_initz00();
					BGl_importedzd2moduleszd2initz00zzast_initz00();
					return BGl_toplevelzd2initzd2zzast_initz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_initz00()
	{
		{	/* Ast/init.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_init");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_init");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_init");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_init");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "ast_init");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "ast_init");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_initz00()
	{
		{	/* Ast/init.scm 15 */
			{	/* Ast/init.scm 15 */
				obj_t BgL_cportz00_1852;

				{	/* Ast/init.scm 15 */
					obj_t BgL_stringz00_1860;

					BgL_stringz00_1860 = BGl_string1381z00zzast_initz00;
					{	/* Ast/init.scm 15 */
						obj_t BgL_startz00_1861;

						BgL_startz00_1861 = BINT(((long) 0));
						{	/* Ast/init.scm 15 */
							obj_t BgL_endz00_1862;

							BgL_endz00_1862 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1860)));
							{	/* Ast/init.scm 15 */

								BgL_cportz00_1852 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1860, BgL_startz00_1861, BgL_endz00_1862);
				}}}}
				{
					long BgL_iz00_1853;

					BgL_iz00_1853 = ((long) 2);
				BgL_loopz00_1854:
					if ((BgL_iz00_1853 == ((long) -1)))
						{	/* Ast/init.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Ast/init.scm 15 */
							{	/* Ast/init.scm 15 */
								obj_t BgL_arg1394z00_1856;

								{	/* Ast/init.scm 15 */

									{	/* Ast/init.scm 15 */
										obj_t BgL_locationz00_1858;

										BgL_locationz00_1858 = BBOOL(((bool_t) 0));
										{	/* Ast/init.scm 15 */

											BgL_arg1394z00_1856 =
												BGl_readz00zz__readerz00(BgL_cportz00_1852,
												BgL_locationz00_1858);
										}
									}
								}
								{	/* Ast/init.scm 15 */
									int BgL_tmpz00_1890;

									BgL_tmpz00_1890 = (int) (BgL_iz00_1853);
									CNST_TABLE_SET(BgL_tmpz00_1890, BgL_arg1394z00_1856);
							}}
							{	/* Ast/init.scm 15 */
								int BgL_auxz00_1859;

								BgL_auxz00_1859 = (int) ((BgL_iz00_1853 - ((long) 1)));
								{
									long BgL_iz00_1895;

									BgL_iz00_1895 = (long) (BgL_auxz00_1859);
									BgL_iz00_1853 = BgL_iz00_1895;
									goto BgL_loopz00_1854;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_initz00()
	{
		{	/* Ast/init.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_initz00()
	{
		{	/* Ast/init.scm 15 */
			return BUNSPEC;
		}

	}



/* ast-initializers */
	BGL_EXPORTED_DEF obj_t BGl_astzd2initializa7ersz75zzast_initz00()
	{
		{	/* Ast/init.scm 54 */
			{	/* Ast/init.scm 55 */
				obj_t BgL_libzd2unitzd2_1627;

				BgL_libzd2unitzd2_1627 =
					BGl_libraryzd2finaliza7erz75zzmodule_libraryz00();
				{	/* Ast/init.scm 55 */
					obj_t BgL_libzd2initzd2_1628;

					{	/* Ast/init.scm 56 */
						bool_t BgL_test1401z00_1899;

						if (STRUCTP(BgL_libzd2unitzd2_1627))
							{	/* Ast/init.scm 56 */
								BgL_test1401z00_1899 =
									(STRUCT_KEY(BgL_libzd2unitzd2_1627) ==
									CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Ast/init.scm 56 */
								BgL_test1401z00_1899 = ((bool_t) 0);
							}
						if (BgL_test1401z00_1899)
							{	/* Ast/init.scm 57 */
								obj_t BgL_varsz00_1638;

								{	/* Ast/init.scm 57 */
									obj_t BgL_arg1282z00_1648;

									{	/* Ast/init.scm 57 */
										obj_t BgL_list1283z00_1649;

										BgL_list1283z00_1649 =
											MAKE_YOUNG_PAIR(BgL_libzd2unitzd2_1627, BNIL);
										BgL_arg1282z00_1648 = BgL_list1283z00_1649;
									}
									BgL_varsz00_1638 =
										BGl_buildzd2astzd2sanszd2removezd2zzast_buildz00
										(BgL_arg1282z00_1648);
								}
								{
									obj_t BgL_l1243z00_1640;

									BgL_l1243z00_1640 = BgL_varsz00_1638;
								BgL_zc3z04anonymousza31276ze3z87_1641:
									if (PAIRP(BgL_l1243z00_1640))
										{	/* Ast/init.scm 58 */
											{	/* Ast/init.scm 59 */
												obj_t BgL_gz00_1643;

												BgL_gz00_1643 = CAR(BgL_l1243z00_1640);
												{	/* Ast/init.scm 59 */
													obj_t BgL_nz00_1644;

													BgL_nz00_1644 =
														(((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt)
																	(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_globalz00_bglt)
																						BgL_gz00_1643))))->
																		BgL_valuez00))))->BgL_bodyz00);
													BGl_occurzd2nodezd2inz12z12zzast_occurz00((
															(BgL_nodez00_bglt) BgL_nz00_1644),
														((BgL_globalz00_bglt) BgL_gz00_1643));
													BGl_lvtypezd2nodez12zc0zzast_lvtypez00((
															(BgL_nodez00_bglt) BgL_nz00_1644));
												}
											}
											{
												obj_t BgL_l1243z00_1920;

												BgL_l1243z00_1920 = CDR(BgL_l1243z00_1640);
												BgL_l1243z00_1640 = BgL_l1243z00_1920;
												goto BgL_zc3z04anonymousza31276ze3z87_1641;
											}
										}
									else
										{	/* Ast/init.scm 58 */
											((bool_t) 1);
										}
								}
								BgL_libzd2initzd2_1628 = BgL_varsz00_1638;
							}
						else
							{	/* Ast/init.scm 56 */
								BgL_libzd2initzd2_1628 = BNIL;
							}
					}
					{	/* Ast/init.scm 56 */
						obj_t BgL_modzd2initzd2_1629;

						BgL_modzd2initzd2_1629 =
							BGl_getzd2modulezd2initz00zzbackend_initz00();
						{	/* Ast/init.scm 65 */

							{	/* Ast/init.scm 67 */
								obj_t BgL_arg1270z00_1630;

								{	/* Ast/init.scm 67 */
									bool_t BgL_test1404z00_1923;

									{	/* Ast/init.scm 67 */
										bool_t BgL_test1405z00_1924;

										if (CBOOL(BGl_za2mainza2z00zzmodule_modulez00))
											{	/* Ast/init.scm 67 */
												BgL_test1405z00_1924 = ((bool_t) 1);
											}
										else
											{	/* Ast/init.scm 67 */
												BgL_test1405z00_1924 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BGl_za2passza2z00zzengine_paramz00,
														CNST_TABLE_REF(((long) 1))));
											}
										if (BgL_test1405z00_1924)
											{	/* Ast/init.scm 67 */
												if (
													(BGl_za2mainza2z00zzmodule_modulez00 ==
														CNST_TABLE_REF(((long) 2))))
													{	/* Ast/init.scm 68 */
														BgL_test1404z00_1923 = ((bool_t) 0);
													}
												else
													{	/* Ast/init.scm 68 */
														BgL_test1404z00_1923 = ((bool_t) 1);
													}
											}
										else
											{	/* Ast/init.scm 67 */
												BgL_test1404z00_1923 = ((bool_t) 0);
											}
									}
									if (BgL_test1404z00_1923)
										{	/* Ast/init.scm 67 */
											BgL_arg1270z00_1630 =
												MAKE_YOUNG_PAIR
												(BGl_makezd2bigloozd2mainz00zzbackend_c_mainz00(),
												BgL_libzd2initzd2_1628);
										}
									else
										{	/* Ast/init.scm 67 */
											BgL_arg1270z00_1630 = BgL_libzd2initzd2_1628;
										}
								}
								return
									MAKE_YOUNG_PAIR(BgL_modzd2initzd2_1629, BgL_arg1270z00_1630);
							}
						}
					}
				}
			}
		}

	}



/* &ast-initializers */
	obj_t BGl_z62astzd2initializa7ersz17zzast_initz00(obj_t BgL_envz00_1850)
	{
		{	/* Ast/init.scm 54 */
			return BGl_astzd2initializa7ersz75zzast_initz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_initz00()
	{
		{	/* Ast/init.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_initz00()
	{
		{	/* Ast/init.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_initz00()
	{
		{	/* Ast/init.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_initz00()
	{
		{	/* Ast/init.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 272817155),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzmodule_libraryz00(((long) 292140521),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 535161241),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 428035839),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzbdb_emitz00(((long) 182919799),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzprof_emitz00(((long) 522750775),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzbackend_initz00(((long) 517592978),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 349615937),
				BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					364917924), BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
			return BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(((long)
					65543845), BSTRING_TO_STRING(BGl_string1380z00zzast_initz00));
		}

	}

#ifdef __cplusplus
}
#endif
