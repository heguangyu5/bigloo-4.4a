/*===========================================================================*/
/*   (Tools/dsssl.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/dsssl.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2formalszd2zztools_dssslz00(obj_t);
	static obj_t BGl_z62dssslzd2prototypezf3z43zztools_dssslz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zztools_dssslz00();
	static obj_t BGl_z62dssslzd2defaultzd2formalz62zztools_dssslz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2defaultzd2formalz00zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	static obj_t BGl_methodzd2initzd2zztools_dssslz00();
	static obj_t BGl_z62zc3z04anonymousza31340ze3ze5zztools_dssslz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(obj_t);
	static obj_t BGl_z62dssslzd2beforezd2dssslz62zztools_dssslz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztools_dssslz00();
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00(obj_t);
	static obj_t BGl_z62dssslzd2optionalszb0zztools_dssslz00(obj_t, obj_t);
	static obj_t BGl_z62dssslzd2formalszb0zztools_dssslz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2arityzd2zztools_dssslz00(obj_t, bool_t);
	static obj_t BGl_z62dssslzd2defaultedzd2formalzf3z91zztools_dssslz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_dssslzd2prototypezf3z21zztools_dssslz00(obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	static obj_t BGl_z62dssslzd2argsza2zd2ze3argszd2listzf1zztools_dssslz00(obj_t,
		obj_t);
	static obj_t BGl_dssslzd2argumentszd2zztools_dssslz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2keyszd2zztools_dssslz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_dssslz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(obj_t);
	static obj_t BGl_z62dssslzd2keyszb0zztools_dssslz00(obj_t, obj_t);
	static obj_t BGl_z62dssslzd2arityzb0zztools_dssslz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62dssslzd2keyzd2onlyzd2prototypezf3z43zztools_dssslz00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztools_dssslz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62dssslzd2findzd2firstzd2formalzb0zztools_dssslz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62dssslzd2optionalzd2onlyzd2prototypezf3z43zztools_dssslz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_dssslzd2checkzd2prototypezf3zf3zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	static bool_t BGl_dssslzd2onlyzf3z21zztools_dssslz00(obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_string_lt(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zztools_dssslz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_dssslz00();
	BGL_EXPORTED_DECL obj_t BGl_dssslzd2optionalszd2zztools_dssslz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztools_dssslz00();
	static obj_t BGl_z62dssslzd2keyzd2argszd2sortzb0zztools_dssslz00(obj_t,
		obj_t);
	static obj_t BGl_z62dssslzd2checkzd2prototypezf3z91zztools_dssslz00(obj_t,
		obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string1404z00zztools_dssslz00,
		BgL_bgl_string1404za700za7za7t1419za7, "dsssl-find-first-formal", 23);
	      DEFINE_STRING(BGl_string1405z00zztools_dssslz00,
		BgL_bgl_string1405za700za7za7t1420za7, "Illegal dsssl formal list", 25);
	      DEFINE_STRING(BGl_string1407z00zztools_dssslz00,
		BgL_bgl_string1407za700za7za7t1421za7, "tools_dsssl", 11);
	      DEFINE_STRING(BGl_string1408z00zztools_dssslz00,
		BgL_bgl_string1408za700za7za7t1422za7, "(#!optional #!key) ", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2optionalzd2onlyzd2prototypezf3zd2envzf3zztools_dssslz00,
		BgL_bgl_za762dssslza7d2optio1423z00,
		BGl_z62dssslzd2optionalzd2onlyzd2prototypezf3z43zztools_dssslz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dssslzd2keyszd2envz00zztools_dssslz00,
		BgL_bgl_za762dssslza7d2keysza71424za7,
		BGl_z62dssslzd2keyszb0zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dssslzd2formalszd2envz00zztools_dssslz00,
		BgL_bgl_za762dssslza7d2forma1425z00,
		BGl_z62dssslzd2formalszb0zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2defaultzd2formalzd2envzd2zztools_dssslz00,
		BgL_bgl_za762dssslza7d2defau1426z00,
		BGl_z62dssslzd2defaultzd2formalz62zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dssslzd2optionalszd2envz00zztools_dssslz00,
		BgL_bgl_za762dssslza7d2optio1427z00,
		BGl_z62dssslzd2optionalszb0zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2keyzd2argszd2sortzd2envz00zztools_dssslz00,
		BgL_bgl_za762dssslza7d2keyza7d1428za7,
		BGl_z62dssslzd2keyzd2argszd2sortzb0zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2findzd2firstzd2formalzd2envz00zztools_dssslz00,
		BgL_bgl_za762dssslza7d2findza71429za7,
		BGl_z62dssslzd2findzd2firstzd2formalzb0zztools_dssslz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1406z00zztools_dssslz00,
		BgL_bgl_za762za7c3za704anonymo1430za7,
		BGl_z62zc3z04anonymousza31340ze3ze5zztools_dssslz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2checkzd2prototypezf3zd2envz21zztools_dssslz00,
		BgL_bgl_za762dssslza7d2check1431z00,
		BGl_z62dssslzd2checkzd2prototypezf3z91zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2keyzd2onlyzd2prototypezf3zd2envzf3zztools_dssslz00,
		BgL_bgl_za762dssslza7d2keyza7d1432za7,
		BGl_z62dssslzd2keyzd2onlyzd2prototypezf3z43zztools_dssslz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2prototypezf3zd2envzf3zztools_dssslz00,
		BgL_bgl_za762dssslza7d2proto1433z00,
		BGl_z62dssslzd2prototypezf3z43zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2argsza2zd2ze3argszd2listzd2envz41zztools_dssslz00,
		BgL_bgl_za762dssslza7d2argsza71434za7,
		BGl_z62dssslzd2argsza2zd2ze3argszd2listzf1zztools_dssslz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2defaultedzd2formalzf3zd2envz21zztools_dssslz00,
		BgL_bgl_za762dssslza7d2defau1435z00,
		BGl_z62dssslzd2defaultedzd2formalzf3z91zztools_dssslz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dssslzd2arityzd2envz00zztools_dssslz00,
		BgL_bgl_za762dssslza7d2arity1436z00,
		BGl_z62dssslzd2arityzb0zztools_dssslz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dssslzd2beforezd2dssslzd2envzd2zztools_dssslz00,
		BgL_bgl_za762dssslza7d2befor1437z00,
		BGl_z62dssslzd2beforezd2dssslz62zztools_dssslz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztools_dssslz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long
		BgL_checksumz00_476, char *BgL_fromz00_477)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_dssslz00))
				{
					BGl_requirezd2initializa7ationz75zztools_dssslz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztools_dssslz00();
					BGl_libraryzd2moduleszd2initz00zztools_dssslz00();
					BGl_cnstzd2initzd2zztools_dssslz00();
					BGl_importedzd2moduleszd2initz00zztools_dssslz00();
					return BGl_methodzd2initzd2zztools_dssslz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_dssslz00()
	{
		{	/* Tools/dsssl.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tools_dsssl");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"tools_dsssl");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_dssslz00()
	{
		{	/* Tools/dsssl.scm 15 */
			{	/* Tools/dsssl.scm 15 */
				obj_t BgL_cportz00_455;

				{	/* Tools/dsssl.scm 15 */
					obj_t BgL_stringz00_463;

					BgL_stringz00_463 = BGl_string1408z00zztools_dssslz00;
					{	/* Tools/dsssl.scm 15 */
						obj_t BgL_startz00_464;

						BgL_startz00_464 = BINT(((long) 0));
						{	/* Tools/dsssl.scm 15 */
							obj_t BgL_endz00_465;

							BgL_endz00_465 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_463)));
							{	/* Tools/dsssl.scm 15 */

								BgL_cportz00_455 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_463, BgL_startz00_464, BgL_endz00_465);
				}}}}
				{
					long BgL_iz00_456;

					BgL_iz00_456 = ((long) 0);
				BgL_loopz00_457:
					if ((BgL_iz00_456 == ((long) -1)))
						{	/* Tools/dsssl.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/dsssl.scm 15 */
							{	/* Tools/dsssl.scm 15 */
								obj_t BgL_arg1417z00_459;

								{	/* Tools/dsssl.scm 15 */

									{	/* Tools/dsssl.scm 15 */
										obj_t BgL_locationz00_461;

										BgL_locationz00_461 = BBOOL(((bool_t) 0));
										{	/* Tools/dsssl.scm 15 */

											BgL_arg1417z00_459 =
												BGl_readz00zz__readerz00(BgL_cportz00_455,
												BgL_locationz00_461);
										}
									}
								}
								{	/* Tools/dsssl.scm 15 */
									int BgL_tmpz00_504;

									BgL_tmpz00_504 = (int) (BgL_iz00_456);
									CNST_TABLE_SET(BgL_tmpz00_504, BgL_arg1417z00_459);
							}}
							{	/* Tools/dsssl.scm 15 */
								int BgL_auxz00_462;

								BgL_auxz00_462 = (int) ((BgL_iz00_456 - ((long) 1)));
								{
									long BgL_iz00_509;

									BgL_iz00_509 = (long) (BgL_auxz00_462);
									BgL_iz00_456 = BgL_iz00_509;
									goto BgL_loopz00_457;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztools_dssslz00()
	{
		{	/* Tools/dsssl.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* dsssl-prototype? */
	BGL_EXPORTED_DEF bool_t BGl_dssslzd2prototypezf3z21zztools_dssslz00(obj_t
		BgL_argsz00_3)
	{
		{	/* Tools/dsssl.scm 37 */
			{
				obj_t BgL_argsz00_32;

				BgL_argsz00_32 = BgL_argsz00_3;
			BgL_zc3z04anonymousza31023ze3z87_33:
				if (NULLP(BgL_argsz00_32))
					{	/* Tools/dsssl.scm 40 */
						return ((bool_t) 0);
					}
				else
					{	/* Tools/dsssl.scm 40 */
						if (PAIRP(BgL_argsz00_32))
							{	/* Tools/dsssl.scm 42 */
								if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
										(BgL_argsz00_32)))
									{	/* Tools/dsssl.scm 44 */
										return ((bool_t) 1);
									}
								else
									{
										obj_t BgL_argsz00_519;

										BgL_argsz00_519 = CDR(BgL_argsz00_32);
										BgL_argsz00_32 = BgL_argsz00_519;
										goto BgL_zc3z04anonymousza31023ze3z87_33;
									}
							}
						else
							{	/* Tools/dsssl.scm 42 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* &dsssl-prototype? */
	obj_t BGl_z62dssslzd2prototypezf3z43zztools_dssslz00(obj_t BgL_envz00_422,
		obj_t BgL_argsz00_423)
	{
		{	/* Tools/dsssl.scm 37 */
			return
				BBOOL(BGl_dssslzd2prototypezf3z21zztools_dssslz00(BgL_argsz00_423));
		}

	}



/* dsssl-only? */
	bool_t BGl_dssslzd2onlyzf3z21zztools_dssslz00(obj_t BgL_dssslz00_4,
		obj_t BgL_argsz00_5)
	{
		{	/* Tools/dsssl.scm 52 */
			{
				obj_t BgL_argsz00_42;
				bool_t BgL_rz00_43;

				BgL_argsz00_42 = BgL_argsz00_5;
				BgL_rz00_43 = ((bool_t) 0);
			BgL_zc3z04anonymousza31030ze3z87_44:
				if (NULLP(BgL_argsz00_42))
					{	/* Tools/dsssl.scm 56 */
						return BgL_rz00_43;
					}
				else
					{	/* Tools/dsssl.scm 56 */
						if (PAIRP(BgL_argsz00_42))
							{	/* Tools/dsssl.scm 58 */
								if ((CAR(BgL_argsz00_42) == BgL_dssslz00_4))
									{
										bool_t BgL_rz00_532;
										obj_t BgL_argsz00_530;

										BgL_argsz00_530 = CDR(BgL_argsz00_42);
										BgL_rz00_532 = ((bool_t) 1);
										BgL_rz00_43 = BgL_rz00_532;
										BgL_argsz00_42 = BgL_argsz00_530;
										goto BgL_zc3z04anonymousza31030ze3z87_44;
									}
								else
									{	/* Tools/dsssl.scm 60 */
										if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
												(BgL_argsz00_42)))
											{	/* Tools/dsssl.scm 62 */
												return ((bool_t) 0);
											}
										else
											{
												obj_t BgL_argsz00_536;

												BgL_argsz00_536 = CDR(BgL_argsz00_42);
												BgL_argsz00_42 = BgL_argsz00_536;
												goto BgL_zc3z04anonymousza31030ze3z87_44;
											}
									}
							}
						else
							{	/* Tools/dsssl.scm 58 */
								return BgL_rz00_43;
							}
					}
			}
		}

	}



/* dsssl-optional-only-prototype? */
	BGL_EXPORTED_DEF bool_t
		BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t
		BgL_argsz00_6)
	{
		{	/* Tools/dsssl.scm 72 */
			return BGl_dssslzd2onlyzf3z21zztools_dssslz00((BOPTIONAL), BgL_argsz00_6);
		}

	}



/* &dsssl-optional-only-prototype? */
	obj_t BGl_z62dssslzd2optionalzd2onlyzd2prototypezf3z43zztools_dssslz00(obj_t
		BgL_envz00_424, obj_t BgL_argsz00_425)
	{
		{	/* Tools/dsssl.scm 72 */
			return
				BBOOL(BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00
				(BgL_argsz00_425));
		}

	}



/* dsssl-key-only-prototype? */
	BGL_EXPORTED_DEF bool_t
		BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t
		BgL_argsz00_7)
	{
		{	/* Tools/dsssl.scm 78 */
			return BGl_dssslzd2onlyzf3z21zztools_dssslz00((BKEY), BgL_argsz00_7);
		}

	}



/* &dsssl-key-only-prototype? */
	obj_t BGl_z62dssslzd2keyzd2onlyzd2prototypezf3z43zztools_dssslz00(obj_t
		BgL_envz00_426, obj_t BgL_argsz00_427)
	{
		{	/* Tools/dsssl.scm 78 */
			return
				BBOOL(BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00
				(BgL_argsz00_427));
		}

	}



/* dsssl-check-prototype? */
	BGL_EXPORTED_DEF bool_t
		BGl_dssslzd2checkzd2prototypezf3zf3zztools_dssslz00(obj_t BgL_argsz00_8)
	{
		{	/* Tools/dsssl.scm 88 */
			{
				obj_t BgL_argsz00_57;

				BgL_argsz00_57 = BgL_argsz00_8;
			BgL_zc3z04anonymousza31041ze3z87_58:
				if (NULLP(BgL_argsz00_57))
					{	/* Tools/dsssl.scm 91 */
						return ((bool_t) 1);
					}
				else
					{	/* Tools/dsssl.scm 91 */
						if (PAIRP(BgL_argsz00_57))
							{	/* Tools/dsssl.scm 93 */
								if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
										(BgL_argsz00_57)))
									{
										obj_t BgL_argsz00_64;

										BgL_argsz00_64 = BgL_argsz00_57;
										if (((BREST) == CAR(BgL_argsz00_64)))
											{	/* Tools/dsssl.scm 103 */
												bool_t BgL_test1451z00_554;

												if (NULLP(CDR(BgL_argsz00_64)))
													{	/* Tools/dsssl.scm 103 */
														BgL_test1451z00_554 = ((bool_t) 1);
													}
												else
													{	/* Tools/dsssl.scm 103 */
														bool_t BgL_test1453z00_558;

														{	/* Tools/dsssl.scm 103 */
															obj_t BgL_tmpz00_559;

															BgL_tmpz00_559 = CAR(CDR(BgL_argsz00_64));
															BgL_test1453z00_558 = SYMBOLP(BgL_tmpz00_559);
														}
														if (BgL_test1453z00_558)
															{	/* Tools/dsssl.scm 103 */
																BgL_test1451z00_554 = ((bool_t) 0);
															}
														else
															{	/* Tools/dsssl.scm 103 */
																BgL_test1451z00_554 = ((bool_t) 1);
															}
													}
												if (BgL_test1451z00_554)
													{	/* Tools/dsssl.scm 103 */
														return ((bool_t) 1);
													}
												else
													{
														obj_t BgL_argsz00_563;

														BgL_argsz00_563 = CDR(CDR(BgL_argsz00_64));
														BgL_argsz00_57 = BgL_argsz00_563;
														goto BgL_zc3z04anonymousza31041ze3z87_58;
													}
											}
										else
											{	/* Tools/dsssl.scm 102 */
												if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
														(BgL_argsz00_64)))
													{
														obj_t BgL_argsz00_569;

														BgL_argsz00_569 = CDR(BgL_argsz00_64);
														BgL_argsz00_57 = BgL_argsz00_569;
														goto BgL_zc3z04anonymousza31041ze3z87_58;
													}
												else
													{	/* Tools/dsssl.scm 108 */
														bool_t BgL_test1455z00_571;

														{	/* Tools/dsssl.scm 108 */
															obj_t BgL_tmpz00_572;

															BgL_tmpz00_572 = CAR(BgL_argsz00_64);
															BgL_test1455z00_571 = SYMBOLP(BgL_tmpz00_572);
														}
														if (BgL_test1455z00_571)
															{
																obj_t BgL_argsz00_575;

																BgL_argsz00_575 = CDR(BgL_argsz00_64);
																BgL_argsz00_57 = BgL_argsz00_575;
																goto BgL_zc3z04anonymousza31041ze3z87_58;
															}
														else
															{	/* Tools/dsssl.scm 110 */
																bool_t BgL_test1456z00_577;

																{	/* Tools/dsssl.scm 110 */
																	bool_t BgL_test1457z00_578;

																	{	/* Tools/dsssl.scm 110 */
																		obj_t BgL_tmpz00_579;

																		BgL_tmpz00_579 = CAR(BgL_argsz00_64);
																		BgL_test1457z00_578 = PAIRP(BgL_tmpz00_579);
																	}
																	if (BgL_test1457z00_578)
																		{	/* Tools/dsssl.scm 111 */
																			bool_t BgL_test1458z00_582;

																			{	/* Tools/dsssl.scm 111 */
																				obj_t BgL_tmpz00_583;

																				BgL_tmpz00_583 = CAR(BgL_argsz00_64);
																				BgL_test1458z00_582 =
																					SYMBOLP(BgL_tmpz00_583);
																			}
																			if (BgL_test1458z00_582)
																				{	/* Tools/dsssl.scm 112 */
																					bool_t BgL_test1459z00_586;

																					{	/* Tools/dsssl.scm 112 */
																						obj_t BgL_tmpz00_587;

																						BgL_tmpz00_587 =
																							CDR(BgL_argsz00_64);
																						BgL_test1459z00_586 =
																							PAIRP(BgL_tmpz00_587);
																					}
																					if (BgL_test1459z00_586)
																						{	/* Tools/dsssl.scm 112 */
																							BgL_test1456z00_577 =
																								NULLP(CDR(CDR(BgL_argsz00_64)));
																						}
																					else
																						{	/* Tools/dsssl.scm 112 */
																							BgL_test1456z00_577 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Tools/dsssl.scm 111 */
																					BgL_test1456z00_577 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Tools/dsssl.scm 110 */
																			BgL_test1456z00_577 = ((bool_t) 0);
																		}
																}
																if (BgL_test1456z00_577)
																	{
																		obj_t BgL_argsz00_593;

																		BgL_argsz00_593 = CDR(BgL_argsz00_64);
																		BgL_argsz00_57 = BgL_argsz00_593;
																		goto BgL_zc3z04anonymousza31041ze3z87_58;
																	}
																else
																	{	/* Tools/dsssl.scm 110 */
																		return ((bool_t) 0);
																	}
															}
													}
											}
									}
								else
									{
										obj_t BgL_argsz00_595;

										BgL_argsz00_595 = CDR(BgL_argsz00_57);
										BgL_argsz00_57 = BgL_argsz00_595;
										goto BgL_zc3z04anonymousza31041ze3z87_58;
									}
							}
						else
							{	/* Tools/dsssl.scm 93 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* &dsssl-check-prototype? */
	obj_t BGl_z62dssslzd2checkzd2prototypezf3z91zztools_dssslz00(obj_t
		BgL_envz00_428, obj_t BgL_argsz00_429)
	{
		{	/* Tools/dsssl.scm 88 */
			return
				BBOOL(BGl_dssslzd2checkzd2prototypezf3zf3zztools_dssslz00
				(BgL_argsz00_429));
		}

	}



/* dsssl-arity */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2arityzd2zztools_dssslz00(obj_t
		BgL_argsz00_9, bool_t BgL_optimz00_10)
	{
		{	/* Tools/dsssl.scm 132 */
			{
				long BgL_iz00_115;
				obj_t BgL_az00_116;

				BgL_iz00_115 = ((long) 0);
				BgL_az00_116 = BgL_argsz00_9;
			BgL_zc3z04anonymousza31123ze3z87_117:
				if (NULLP(BgL_az00_116))
					{	/* Tools/dsssl.scm 137 */
						return BINT(BgL_iz00_115);
					}
				else
					{	/* Tools/dsssl.scm 139 */
						bool_t BgL_test1461z00_602;

						{	/* Tools/dsssl.scm 139 */
							obj_t BgL_tmpz00_603;

							BgL_tmpz00_603 = CAR(((obj_t) BgL_az00_116));
							BgL_test1461z00_602 = SYMBOLP(BgL_tmpz00_603);
						}
						if (BgL_test1461z00_602)
							{	/* Tools/dsssl.scm 140 */
								long BgL_arg1127z00_121;
								obj_t BgL_arg1128z00_122;

								BgL_arg1127z00_121 = (BgL_iz00_115 + ((long) 1));
								BgL_arg1128z00_122 = CDR(((obj_t) BgL_az00_116));
								{
									obj_t BgL_az00_611;
									long BgL_iz00_610;

									BgL_iz00_610 = BgL_arg1127z00_121;
									BgL_az00_611 = BgL_arg1128z00_122;
									BgL_az00_116 = BgL_az00_611;
									BgL_iz00_115 = BgL_iz00_610;
									goto BgL_zc3z04anonymousza31123ze3z87_117;
								}
							}
						else
							{	/* Tools/dsssl.scm 141 */
								bool_t BgL_test1462z00_612;

								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
												((obj_t) BgL_az00_116)), CNST_TABLE_REF(((long) 0)))))
									{	/* Tools/dsssl.scm 141 */
										BgL_test1462z00_612 = BgL_optimz00_10;
									}
								else
									{	/* Tools/dsssl.scm 141 */
										BgL_test1462z00_612 = ((bool_t) 0);
									}
								if (BgL_test1462z00_612)
									{	/* Tools/dsssl.scm 142 */
										bool_t BgL_test1466z00_619;

										{	/* Tools/dsssl.scm 142 */
											obj_t BgL_g1018z00_139;

											BgL_g1018z00_139 = CDR(((obj_t) BgL_az00_116));
											{
												obj_t BgL_l1016z00_141;

												BgL_l1016z00_141 = BgL_g1018z00_139;
											BgL_zc3z04anonymousza31157ze3z87_142:
												if (NULLP(BgL_l1016z00_141))
													{	/* Tools/dsssl.scm 142 */
														BgL_test1466z00_619 = ((bool_t) 0);
													}
												else
													{	/* Tools/dsssl.scm 142 */
														bool_t BgL__ortest_1019z00_144;

														{	/* Tools/dsssl.scm 142 */
															obj_t BgL_arg1166z00_146;

															BgL_arg1166z00_146 =
																CAR(((obj_t) BgL_l1016z00_141));
															BgL__ortest_1019z00_144 =
																BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
																(BgL_arg1166z00_146);
														}
														if (BgL__ortest_1019z00_144)
															{	/* Tools/dsssl.scm 142 */
																BgL_test1466z00_619 = BgL__ortest_1019z00_144;
															}
														else
															{	/* Tools/dsssl.scm 142 */
																obj_t BgL_arg1165z00_145;

																BgL_arg1165z00_145 =
																	CDR(((obj_t) BgL_l1016z00_141));
																{
																	obj_t BgL_l1016z00_630;

																	BgL_l1016z00_630 = BgL_arg1165z00_145;
																	BgL_l1016z00_141 = BgL_l1016z00_630;
																	goto BgL_zc3z04anonymousza31157ze3z87_142;
																}
															}
													}
											}
										}
										if (BgL_test1466z00_619)
											{	/* Tools/dsssl.scm 142 */
												return
													BGl_zd2zd2zz__r4_numbers_6_5z00(BINT(
														(BgL_iz00_115 + ((long) 1))), BNIL);
											}
										else
											{	/* Tools/dsssl.scm 142 */
												return BINT(BgL_iz00_115);
											}
									}
								else
									{	/* Tools/dsssl.scm 141 */
										return
											BGl_zd2zd2zz__r4_numbers_6_5z00(BINT(
												(BgL_iz00_115 + ((long) 1))), BNIL);
		}}}}}

	}



/* &dsssl-arity */
	obj_t BGl_z62dssslzd2arityzb0zztools_dssslz00(obj_t BgL_envz00_430,
		obj_t BgL_argsz00_431, obj_t BgL_optimz00_432)
	{
		{	/* Tools/dsssl.scm 132 */
			return
				BGl_dssslzd2arityzd2zztools_dssslz00(BgL_argsz00_431,
				CBOOL(BgL_optimz00_432));
		}

	}



/* dsssl-defaulted-formal? */
	BGL_EXPORTED_DEF obj_t
		BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(obj_t BgL_objz00_12)
	{
		{	/* Tools/dsssl.scm 177 */
			if (PAIRP(BgL_objz00_12))
				{	/* Tools/dsssl.scm 178 */
					obj_t BgL_cdrzd2105zd2_198;

					BgL_cdrzd2105zd2_198 = CDR(BgL_objz00_12);
					if (PAIRP(BgL_cdrzd2105zd2_198))
						{	/* Tools/dsssl.scm 178 */
							return BBOOL(NULLP(CDR(BgL_cdrzd2105zd2_198)));
						}
					else
						{	/* Tools/dsssl.scm 178 */
							return BFALSE;
						}
				}
			else
				{	/* Tools/dsssl.scm 178 */
					return BFALSE;
				}
		}

	}



/* &dsssl-defaulted-formal? */
	obj_t BGl_z62dssslzd2defaultedzd2formalzf3z91zztools_dssslz00(obj_t
		BgL_envz00_433, obj_t BgL_objz00_434)
	{
		{	/* Tools/dsssl.scm 177 */
			return
				BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(BgL_objz00_434);
		}

	}



/* dsssl-default-formal */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2defaultzd2formalz00zztools_dssslz00(obj_t
		BgL_objz00_13)
	{
		{	/* Tools/dsssl.scm 189 */
			return CAR(((obj_t) BgL_objz00_13));
		}

	}



/* &dsssl-default-formal */
	obj_t BGl_z62dssslzd2defaultzd2formalz62zztools_dssslz00(obj_t BgL_envz00_435,
		obj_t BgL_objz00_436)
	{
		{	/* Tools/dsssl.scm 189 */
			return BGl_dssslzd2defaultzd2formalz00zztools_dssslz00(BgL_objz00_436);
		}

	}



/* dsssl-find-first-formal */
	BGL_EXPORTED_DEF obj_t
		BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(obj_t BgL_argsz00_14)
	{
		{	/* Tools/dsssl.scm 195 */
		BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00:
			if (NULLP(BgL_argsz00_14))
				{	/* Tools/dsssl.scm 197 */
					return BFALSE;
				}
			else
				{	/* Tools/dsssl.scm 197 */
					if (PAIRP(BgL_argsz00_14))
						{	/* Tools/dsssl.scm 199 */
							if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
									(BgL_argsz00_14)))
								{
									obj_t BgL_argsz00_659;

									BgL_argsz00_659 = CDR(BgL_argsz00_14);
									BgL_argsz00_14 = BgL_argsz00_659;
									goto BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00;
								}
							else
								{	/* Tools/dsssl.scm 203 */
									if (CBOOL(BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00
											(CAR(BgL_argsz00_14))))
										{	/* Tools/dsssl.scm 205 */
											return CAR(CAR(BgL_argsz00_14));
										}
									else
										{	/* Tools/dsssl.scm 207 */
											bool_t BgL_test1475z00_667;

											{	/* Tools/dsssl.scm 207 */
												obj_t BgL_tmpz00_668;

												BgL_tmpz00_668 = CAR(BgL_argsz00_14);
												BgL_test1475z00_667 = SYMBOLP(BgL_tmpz00_668);
											}
											if (BgL_test1475z00_667)
												{	/* Tools/dsssl.scm 207 */
													return CAR(BgL_argsz00_14);
												}
											else
												{	/* Tools/dsssl.scm 207 */
													return
														BGl_internalzd2errorzd2zztools_errorz00
														(BGl_string1404z00zztools_dssslz00,
														BGl_string1405z00zztools_dssslz00, BgL_argsz00_14);
												}
										}
								}
						}
					else
						{	/* Tools/dsssl.scm 199 */
							return
								BGl_internalzd2errorzd2zztools_errorz00
								(BGl_string1404z00zztools_dssslz00,
								BGl_string1405z00zztools_dssslz00, BgL_argsz00_14);
						}
				}
		}

	}



/* &dsssl-find-first-formal */
	obj_t BGl_z62dssslzd2findzd2firstzd2formalzb0zztools_dssslz00(obj_t
		BgL_envz00_437, obj_t BgL_argsz00_438)
	{
		{	/* Tools/dsssl.scm 195 */
			return
				BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(BgL_argsz00_438);
		}

	}



/* dsssl-args*->args-list */
	BGL_EXPORTED_DEF obj_t
		BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00(obj_t BgL_expz00_15)
	{
		{	/* Tools/dsssl.scm 218 */
		BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00:
			if (NULLP(BgL_expz00_15))
				{	/* Tools/dsssl.scm 220 */
					return BNIL;
				}
			else
				{	/* Tools/dsssl.scm 220 */
					if (PAIRP(BgL_expz00_15))
						{	/* Tools/dsssl.scm 222 */
							if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
									(BgL_expz00_15)))
								{	/* Tools/dsssl.scm 225 */
									obj_t BgL_argz00_220;

									BgL_argz00_220 =
										BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(CDR
										(BgL_expz00_15));
									if (CBOOL(BgL_argz00_220))
										{	/* Tools/dsssl.scm 227 */
											obj_t BgL_list1286z00_221;

											BgL_list1286z00_221 =
												MAKE_YOUNG_PAIR(BgL_argz00_220, BNIL);
											return BgL_list1286z00_221;
										}
									else
										{	/* Tools/dsssl.scm 226 */
											return BNIL;
										}
								}
							else
								{	/* Tools/dsssl.scm 224 */
									if (CBOOL(BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00
											(CAR(BgL_expz00_15))))
										{
											obj_t BgL_expz00_691;

											BgL_expz00_691 = CDR(BgL_expz00_15);
											BgL_expz00_15 = BgL_expz00_691;
											goto
												BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00;
										}
									else
										{	/* Tools/dsssl.scm 229 */
											return
												MAKE_YOUNG_PAIR(CAR(BgL_expz00_15),
												BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00
												(CDR(BgL_expz00_15)));
										}
								}
						}
					else
						{	/* Tools/dsssl.scm 223 */
							obj_t BgL_list1298z00_231;

							BgL_list1298z00_231 = MAKE_YOUNG_PAIR(BgL_expz00_15, BNIL);
							return BgL_list1298z00_231;
						}
				}
		}

	}



/* &dsssl-args*->args-list */
	obj_t BGl_z62dssslzd2argsza2zd2ze3argszd2listzf1zztools_dssslz00(obj_t
		BgL_envz00_439, obj_t BgL_expz00_440)
	{
		{	/* Tools/dsssl.scm 218 */
			return
				BGl_dssslzd2argsza2zd2ze3argszd2listz93zztools_dssslz00(BgL_expz00_440);
		}

	}



/* dsssl-formals */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2formalszd2zztools_dssslz00(obj_t
		BgL_argsz00_16)
	{
		{	/* Tools/dsssl.scm 237 */
			{
				obj_t BgL_argsz00_233;

				BgL_argsz00_233 = BgL_argsz00_16;
			BgL_zc3z04anonymousza31299ze3z87_234:
				if (PAIRP(BgL_argsz00_233))
					{	/* Tools/dsssl.scm 240 */
						if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
								(BgL_argsz00_233)))
							{	/* Tools/dsssl.scm 242 */
								return BgL_argsz00_233;
							}
						else
							{
								obj_t BgL_argsz00_704;

								BgL_argsz00_704 = CDR(BgL_argsz00_233);
								BgL_argsz00_233 = BgL_argsz00_704;
								goto BgL_zc3z04anonymousza31299ze3z87_234;
							}
					}
				else
					{	/* Tools/dsssl.scm 240 */
						return BNIL;
					}
			}
		}

	}



/* &dsssl-formals */
	obj_t BGl_z62dssslzd2formalszb0zztools_dssslz00(obj_t BgL_envz00_441,
		obj_t BgL_argsz00_442)
	{
		{	/* Tools/dsssl.scm 237 */
			return BGl_dssslzd2formalszd2zztools_dssslz00(BgL_argsz00_442);
		}

	}



/* dsssl-arguments */
	obj_t BGl_dssslzd2argumentszd2zztools_dssslz00(obj_t BgL_keyz00_17,
		obj_t BgL_argsz00_18)
	{
		{	/* Tools/dsssl.scm 250 */
			{
				obj_t BgL_argsz00_242;

				BgL_argsz00_242 = BgL_argsz00_18;
			BgL_zc3z04anonymousza31305ze3z87_243:
				if (PAIRP(BgL_argsz00_242))
					{	/* Tools/dsssl.scm 253 */
						if ((CAR(BgL_argsz00_242) == BgL_keyz00_17))
							{	/* Tools/dsssl.scm 256 */
								obj_t BgL_g1013z00_247;

								BgL_g1013z00_247 = CDR(BgL_argsz00_242);
								{
									obj_t BgL_argsz00_250;
									obj_t BgL_rz00_251;

									BgL_argsz00_250 = BgL_g1013z00_247;
									BgL_rz00_251 = BNIL;
								BgL_zc3z04anonymousza31309ze3z87_252:
									if (NULLP(BgL_argsz00_250))
										{	/* Tools/dsssl.scm 259 */
											return bgl_reverse_bang(BgL_rz00_251);
										}
									else
										{	/* Tools/dsssl.scm 259 */
											if (PAIRP(BgL_argsz00_250))
												{	/* Tools/dsssl.scm 261 */
													if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
															(BgL_argsz00_250)))
														{	/* Tools/dsssl.scm 263 */
															return BNIL;
														}
													else
														{	/* Tools/dsssl.scm 265 */
															bool_t BgL_test1488z00_721;

															{	/* Tools/dsssl.scm 265 */
																obj_t BgL_tmpz00_722;

																BgL_tmpz00_722 = CAR(BgL_argsz00_250);
																BgL_test1488z00_721 = PAIRP(BgL_tmpz00_722);
															}
															if (BgL_test1488z00_721)
																{	/* Tools/dsssl.scm 266 */
																	obj_t BgL_arg1316z00_259;
																	obj_t BgL_arg1317z00_260;

																	BgL_arg1316z00_259 = CDR(BgL_argsz00_250);
																	BgL_arg1317z00_260 =
																		MAKE_YOUNG_PAIR(CAR(BgL_argsz00_250),
																		BgL_rz00_251);
																	{
																		obj_t BgL_rz00_729;
																		obj_t BgL_argsz00_728;

																		BgL_argsz00_728 = BgL_arg1316z00_259;
																		BgL_rz00_729 = BgL_arg1317z00_260;
																		BgL_rz00_251 = BgL_rz00_729;
																		BgL_argsz00_250 = BgL_argsz00_728;
																		goto BgL_zc3z04anonymousza31309ze3z87_252;
																	}
																}
															else
																{	/* Tools/dsssl.scm 268 */
																	obj_t BgL_arg1322z00_262;
																	obj_t BgL_arg1324z00_263;

																	BgL_arg1322z00_262 = CDR(BgL_argsz00_250);
																	{	/* Tools/dsssl.scm 268 */
																		obj_t BgL_arg1325z00_264;

																		{	/* Tools/dsssl.scm 268 */
																			obj_t BgL_arg1326z00_265;

																			BgL_arg1326z00_265 = CAR(BgL_argsz00_250);
																			{	/* Tools/dsssl.scm 268 */
																				obj_t BgL_list1327z00_266;

																				{	/* Tools/dsssl.scm 268 */
																					obj_t BgL_arg1328z00_267;

																					BgL_arg1328z00_267 =
																						MAKE_YOUNG_PAIR(BFALSE, BNIL);
																					BgL_list1327z00_266 =
																						MAKE_YOUNG_PAIR(BgL_arg1326z00_265,
																						BgL_arg1328z00_267);
																				}
																				BgL_arg1325z00_264 =
																					BgL_list1327z00_266;
																			}
																		}
																		BgL_arg1324z00_263 =
																			MAKE_YOUNG_PAIR(BgL_arg1325z00_264,
																			BgL_rz00_251);
																	}
																	{
																		obj_t BgL_rz00_736;
																		obj_t BgL_argsz00_735;

																		BgL_argsz00_735 = BgL_arg1322z00_262;
																		BgL_rz00_736 = BgL_arg1324z00_263;
																		BgL_rz00_251 = BgL_rz00_736;
																		BgL_argsz00_250 = BgL_argsz00_735;
																		goto BgL_zc3z04anonymousza31309ze3z87_252;
																	}
																}
														}
												}
											else
												{	/* Tools/dsssl.scm 261 */
													return BNIL;
												}
										}
								}
							}
						else
							{	/* Tools/dsssl.scm 255 */
								if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
										(BgL_argsz00_242)))
									{	/* Tools/dsssl.scm 269 */
										return BNIL;
									}
								else
									{
										obj_t BgL_argsz00_740;

										BgL_argsz00_740 = CDR(BgL_argsz00_242);
										BgL_argsz00_242 = BgL_argsz00_740;
										goto BgL_zc3z04anonymousza31305ze3z87_243;
									}
							}
					}
				else
					{	/* Tools/dsssl.scm 253 */
						return BNIL;
					}
			}
		}

	}



/* dsssl-optionals */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2optionalszd2zztools_dssslz00(obj_t
		BgL_argsz00_19)
	{
		{	/* Tools/dsssl.scm 277 */
			return
				BGl_dssslzd2argumentszd2zztools_dssslz00((BOPTIONAL), BgL_argsz00_19);
		}

	}



/* &dsssl-optionals */
	obj_t BGl_z62dssslzd2optionalszb0zztools_dssslz00(obj_t BgL_envz00_443,
		obj_t BgL_argsz00_444)
	{
		{	/* Tools/dsssl.scm 277 */
			return BGl_dssslzd2optionalszd2zztools_dssslz00(BgL_argsz00_444);
		}

	}



/* dsssl-keys */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2keyszd2zztools_dssslz00(obj_t
		BgL_argsz00_20)
	{
		{	/* Tools/dsssl.scm 283 */
			return
				BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00
				(BGl_dssslzd2argumentszd2zztools_dssslz00((BKEY), BgL_argsz00_20));
		}

	}



/* &dsssl-keys */
	obj_t BGl_z62dssslzd2keyszb0zztools_dssslz00(obj_t BgL_envz00_445,
		obj_t BgL_argsz00_446)
	{
		{	/* Tools/dsssl.scm 283 */
			return BGl_dssslzd2keyszd2zztools_dssslz00(BgL_argsz00_446);
		}

	}



/* dsssl-key-args-sort */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00(obj_t
		BgL_argsz00_21)
	{
		{	/* Tools/dsssl.scm 289 */
			return
				BGl_sortz00zz__r4_vectors_6_8z00(BgL_argsz00_21,
				BGl_proc1406z00zztools_dssslz00);
		}

	}



/* &dsssl-key-args-sort */
	obj_t BGl_z62dssslzd2keyzd2argszd2sortzb0zztools_dssslz00(obj_t
		BgL_envz00_448, obj_t BgL_argsz00_449)
	{
		{	/* Tools/dsssl.scm 289 */
			return BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00(BgL_argsz00_449);
		}

	}



/* &<@anonymous:1340> */
	obj_t BGl_z62zc3z04anonymousza31340ze3ze5zztools_dssslz00(obj_t
		BgL_envz00_450, obj_t BgL_s1z00_451, obj_t BgL_s2z00_452)
	{
		{	/* Tools/dsssl.scm 291 */
			{	/* Tools/dsssl.scm 292 */
				bool_t BgL_tmpz00_749;

				{	/* Tools/dsssl.scm 292 */
					obj_t BgL_arg1344z00_468;
					obj_t BgL_arg1345z00_469;

					{	/* Tools/dsssl.scm 292 */
						obj_t BgL_arg1346z00_470;

						BgL_arg1346z00_470 = CAR(((obj_t) BgL_s1z00_451));
						{	/* Tools/dsssl.scm 292 */
							obj_t BgL_res1401z00_471;

							{	/* Tools/dsssl.scm 292 */
								obj_t BgL_arg1466z00_472;

								BgL_arg1466z00_472 =
									SYMBOL_TO_STRING(((obj_t) BgL_arg1346z00_470));
								BgL_res1401z00_471 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_472);
							}
							BgL_arg1344z00_468 = BgL_res1401z00_471;
						}
					}
					{	/* Tools/dsssl.scm 293 */
						obj_t BgL_arg1347z00_473;

						BgL_arg1347z00_473 = CAR(((obj_t) BgL_s2z00_452));
						{	/* Tools/dsssl.scm 293 */
							obj_t BgL_res1402z00_474;

							{	/* Tools/dsssl.scm 293 */
								obj_t BgL_arg1466z00_475;

								BgL_arg1466z00_475 =
									SYMBOL_TO_STRING(((obj_t) BgL_arg1347z00_473));
								BgL_res1402z00_474 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_475);
							}
							BgL_arg1345z00_469 = BgL_res1402z00_474;
						}
					}
					BgL_tmpz00_749 =
						bigloo_string_lt(BgL_arg1344z00_468, BgL_arg1345z00_469);
				}
				return BBOOL(BgL_tmpz00_749);
			}
		}

	}



/* dsssl-before-dsssl */
	BGL_EXPORTED_DEF obj_t BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(obj_t
		BgL_argsz00_22)
	{
		{	/* Tools/dsssl.scm 301 */
			{
				obj_t BgL_argsz00_289;
				obj_t BgL_resz00_290;

				BgL_argsz00_289 = BgL_argsz00_22;
				BgL_resz00_290 = BNIL;
			BgL_zc3z04anonymousza31348ze3z87_291:
				{	/* Tools/dsssl.scm 305 */
					bool_t BgL_test1490z00_762;

					{	/* Tools/dsssl.scm 305 */
						obj_t BgL_arg1363z00_297;

						BgL_arg1363z00_297 = CAR(((obj_t) BgL_argsz00_289));
						BgL_test1490z00_762 =
							BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
							(BgL_arg1363z00_297);
					}
					if (BgL_test1490z00_762)
						{	/* Tools/dsssl.scm 305 */
							return bgl_reverse_bang(BgL_resz00_290);
						}
					else
						{	/* Tools/dsssl.scm 308 */
							obj_t BgL_arg1357z00_294;
							obj_t BgL_arg1360z00_295;

							BgL_arg1357z00_294 = CDR(((obj_t) BgL_argsz00_289));
							{	/* Tools/dsssl.scm 308 */
								obj_t BgL_arg1361z00_296;

								BgL_arg1361z00_296 = CAR(((obj_t) BgL_argsz00_289));
								BgL_arg1360z00_295 =
									MAKE_YOUNG_PAIR(BgL_arg1361z00_296, BgL_resz00_290);
							}
							{
								obj_t BgL_resz00_773;
								obj_t BgL_argsz00_772;

								BgL_argsz00_772 = BgL_arg1357z00_294;
								BgL_resz00_773 = BgL_arg1360z00_295;
								BgL_resz00_290 = BgL_resz00_773;
								BgL_argsz00_289 = BgL_argsz00_772;
								goto BgL_zc3z04anonymousza31348ze3z87_291;
							}
						}
				}
			}
		}

	}



/* &dsssl-before-dsssl */
	obj_t BGl_z62dssslzd2beforezd2dssslz62zztools_dssslz00(obj_t BgL_envz00_453,
		obj_t BgL_argsz00_454)
	{
		{	/* Tools/dsssl.scm 301 */
			return BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(BgL_argsz00_454);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztools_dssslz00()
	{
		{	/* Tools/dsssl.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_dssslz00()
	{
		{	/* Tools/dsssl.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_dssslz00()
	{
		{	/* Tools/dsssl.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_dssslz00()
	{
		{	/* Tools/dsssl.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1407z00zztools_dssslz00));
		}

	}

#ifdef __cplusplus
}
#endif
