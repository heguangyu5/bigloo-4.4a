/*===========================================================================*/
/*   (Prof/unit.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Prof/unit.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
		bool_t BgL_typedzd2funcallzd2;
	}                 *BgL_backendz00_bglt;


	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzprof_walkz00();
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzprof_walkz00();
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzprof_walkz00();
	static obj_t BGl_z62makezd2profzd2unitz62zzprof_walkz00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzprof_walkz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzprof_walkz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzprof_walkz00();
	extern obj_t BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzprof_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzprof_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzprof_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzprof_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2profzd2unitz00zzprof_walkz00();
	static obj_t __cnst[5];


	   
		 
		DEFINE_STRING(BGl_string1466z00zzprof_walkz00,
		BgL_bgl_string1466za700za7za7p1476za7, "Prof", 4);
	      DEFINE_STRING(BGl_string1467z00zzprof_walkz00,
		BgL_bgl_string1467za700za7za7p1477za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1468z00zzprof_walkz00,
		BgL_bgl_string1468za700za7za7p1478za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1469z00zzprof_walkz00,
		BgL_bgl_string1469za700za7za7p1479za7, "prof_walk", 9);
	      DEFINE_STRING(BGl_string1470z00zzprof_walkz00,
		BgL_bgl_string1470za700za7za7p1480za7,
		"unit prof begin (begin (pragma \"write_bprof_table()\")) pass-started ",
		68);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2profzd2unitzd2envzd2zzprof_walkz00,
		BgL_bgl_za762makeza7d2profza7d1481za7,
		BGl_z62makezd2profzd2unitz62zzprof_walkz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzprof_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzprof_walkz00(long
		BgL_checksumz00_1734, char *BgL_fromz00_1735)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzprof_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzprof_walkz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzprof_walkz00();
					BGl_libraryzd2moduleszd2initz00zzprof_walkz00();
					BGl_cnstzd2initzd2zzprof_walkz00();
					BGl_importedzd2moduleszd2initz00zzprof_walkz00();
					return BGl_toplevelzd2initzd2zzprof_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzprof_walkz00()
	{
		{	/* Prof/unit.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"prof_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "prof_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"prof_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"prof_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"prof_walk");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "prof_walk");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "prof_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzprof_walkz00()
	{
		{	/* Prof/unit.scm 15 */
			{	/* Prof/unit.scm 15 */
				obj_t BgL_cportz00_1721;

				{	/* Prof/unit.scm 15 */
					obj_t BgL_stringz00_1729;

					BgL_stringz00_1729 = BGl_string1470z00zzprof_walkz00;
					{	/* Prof/unit.scm 15 */
						obj_t BgL_startz00_1730;

						BgL_startz00_1730 = BINT(((long) 0));
						{	/* Prof/unit.scm 15 */
							obj_t BgL_endz00_1731;

							BgL_endz00_1731 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1729)));
							{	/* Prof/unit.scm 15 */

								BgL_cportz00_1721 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1729, BgL_startz00_1730, BgL_endz00_1731);
				}}}}
				{
					long BgL_iz00_1722;

					BgL_iz00_1722 = ((long) 4);
				BgL_loopz00_1723:
					if ((BgL_iz00_1722 == ((long) -1)))
						{	/* Prof/unit.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Prof/unit.scm 15 */
							{	/* Prof/unit.scm 15 */
								obj_t BgL_arg1474z00_1725;

								{	/* Prof/unit.scm 15 */

									{	/* Prof/unit.scm 15 */
										obj_t BgL_locationz00_1727;

										BgL_locationz00_1727 = BBOOL(((bool_t) 0));
										{	/* Prof/unit.scm 15 */

											BgL_arg1474z00_1725 =
												BGl_readz00zz__readerz00(BgL_cportz00_1721,
												BgL_locationz00_1727);
										}
									}
								}
								{	/* Prof/unit.scm 15 */
									int BgL_tmpz00_1760;

									BgL_tmpz00_1760 = (int) (BgL_iz00_1722);
									CNST_TABLE_SET(BgL_tmpz00_1760, BgL_arg1474z00_1725);
							}}
							{	/* Prof/unit.scm 15 */
								int BgL_auxz00_1728;

								BgL_auxz00_1728 = (int) ((BgL_iz00_1722 - ((long) 1)));
								{
									long BgL_iz00_1765;

									BgL_iz00_1765 = (long) (BgL_auxz00_1728);
									BgL_iz00_1722 = BgL_iz00_1765;
									goto BgL_loopz00_1723;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzprof_walkz00()
	{
		{	/* Prof/unit.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzprof_walkz00()
	{
		{	/* Prof/unit.scm 15 */
			return BUNSPEC;
		}

	}



/* make-prof-unit */
	BGL_EXPORTED_DEF obj_t BGl_makezd2profzd2unitz00zzprof_walkz00()
	{
		{	/* Prof/unit.scm 31 */
			{	/* Prof/unit.scm 32 */
				obj_t BgL_list1292z00_1448;

				{	/* Prof/unit.scm 32 */
					obj_t BgL_arg1295z00_1449;

					{	/* Prof/unit.scm 32 */
						obj_t BgL_arg1296z00_1450;

						BgL_arg1296z00_1450 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1295z00_1449 =
							MAKE_YOUNG_PAIR(BGl_string1466z00zzprof_walkz00,
							BgL_arg1296z00_1450);
					}
					BgL_list1292z00_1448 =
						MAKE_YOUNG_PAIR(BGl_string1467z00zzprof_walkz00,
						BgL_arg1295z00_1449);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1292z00_1448);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1466z00zzprof_walkz00;
			{	/* Prof/unit.scm 32 */
				obj_t BgL_g1105z00_1451;

				BgL_g1105z00_1451 = BNIL;
				{
					obj_t BgL_hooksz00_1454;
					obj_t BgL_hnamesz00_1455;

					BgL_hooksz00_1454 = BgL_g1105z00_1451;
					BgL_hnamesz00_1455 = BNIL;
				BgL_zc3z04anonymousza31297ze3z87_1456:
					if (NULLP(BgL_hooksz00_1454))
						{	/* Prof/unit.scm 32 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Prof/unit.scm 32 */
							bool_t BgL_test1485z00_1778;

							{	/* Prof/unit.scm 32 */
								obj_t BgL_fun1306z00_1463;

								BgL_fun1306z00_1463 = CAR(((obj_t) BgL_hooksz00_1454));
								BgL_test1485z00_1778 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1306z00_1463)
									(BgL_fun1306z00_1463, BEOA));
							}
							if (BgL_test1485z00_1778)
								{	/* Prof/unit.scm 32 */
									obj_t BgL_arg1301z00_1460;
									obj_t BgL_arg1303z00_1461;

									BgL_arg1301z00_1460 = CDR(((obj_t) BgL_hooksz00_1454));
									BgL_arg1303z00_1461 = CDR(((obj_t) BgL_hnamesz00_1455));
									{
										obj_t BgL_hnamesz00_1790;
										obj_t BgL_hooksz00_1789;

										BgL_hooksz00_1789 = BgL_arg1301z00_1460;
										BgL_hnamesz00_1790 = BgL_arg1303z00_1461;
										BgL_hnamesz00_1455 = BgL_hnamesz00_1790;
										BgL_hooksz00_1454 = BgL_hooksz00_1789;
										goto BgL_zc3z04anonymousza31297ze3z87_1456;
									}
								}
							else
								{	/* Prof/unit.scm 32 */
									obj_t BgL_arg1304z00_1462;

									BgL_arg1304z00_1462 = CAR(((obj_t) BgL_hnamesz00_1455));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1466z00zzprof_walkz00,
										BGl_string1468z00zzprof_walkz00, BgL_arg1304z00_1462);
								}
						}
				}
			}
			{	/* Prof/unit.scm 34 */
				obj_t BgL_arg1308z00_1466;
				obj_t BgL_arg1309z00_1467;

				BgL_arg1308z00_1466 =
					BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 100)),
					BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00());
				{	/* Prof/unit.scm 35 */
					bool_t BgL_test1486z00_1797;

					{	/* Prof/unit.scm 35 */
						obj_t BgL_arg1315z00_1472;

						BgL_arg1315z00_1472 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_test1486z00_1797 =
							(((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_arg1315z00_1472)))->
							BgL_pragmazd2supportzd2);
					}
					if (BgL_test1486z00_1797)
						{	/* Prof/unit.scm 35 */
							BgL_arg1309z00_1467 = CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Prof/unit.scm 37 */
							obj_t BgL_arg1314z00_1471;

							BgL_arg1314z00_1471 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
							BgL_arg1309z00_1467 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
								BgL_arg1314z00_1471);
				}}
				{	/* Prof/unit.scm 33 */
					obj_t BgL_idz00_1711;

					BgL_idz00_1711 = CNST_TABLE_REF(((long) 3));
					{	/* Prof/unit.scm 33 */
						obj_t BgL_newz00_1712;

						BgL_newz00_1712 =
							create_struct(CNST_TABLE_REF(((long) 4)), (int) (((long) 5)));
						{	/* Prof/unit.scm 33 */
							int BgL_tmpz00_1809;

							BgL_tmpz00_1809 = (int) (((long) 4));
							STRUCT_SET(BgL_newz00_1712, BgL_tmpz00_1809, BFALSE);
						}
						{	/* Prof/unit.scm 33 */
							int BgL_tmpz00_1812;

							BgL_tmpz00_1812 = (int) (((long) 3));
							STRUCT_SET(BgL_newz00_1712, BgL_tmpz00_1812, BTRUE);
						}
						{	/* Prof/unit.scm 33 */
							int BgL_tmpz00_1815;

							BgL_tmpz00_1815 = (int) (((long) 2));
							STRUCT_SET(BgL_newz00_1712, BgL_tmpz00_1815, BgL_arg1309z00_1467);
						}
						{	/* Prof/unit.scm 33 */
							int BgL_tmpz00_1818;

							BgL_tmpz00_1818 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_1712, BgL_tmpz00_1818, BgL_arg1308z00_1466);
						}
						{	/* Prof/unit.scm 33 */
							int BgL_tmpz00_1821;

							BgL_tmpz00_1821 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_1712, BgL_tmpz00_1821, BgL_idz00_1711);
						}
						return BgL_newz00_1712;
					}
				}
			}
		}

	}



/* &make-prof-unit */
	obj_t BGl_z62makezd2profzd2unitz62zzprof_walkz00(obj_t BgL_envz00_1719)
	{
		{	/* Prof/unit.scm 31 */
			return BGl_makezd2profzd2unitz00zzprof_walkz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzprof_walkz00()
	{
		{	/* Prof/unit.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzprof_walkz00()
	{
		{	/* Prof/unit.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzprof_walkz00()
	{
		{	/* Prof/unit.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzprof_walkz00()
	{
		{	/* Prof/unit.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1469z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1469z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1469z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1469z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1469z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1469z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string1469z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1469z00zzprof_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1469z00zzprof_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1469z00zzprof_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
