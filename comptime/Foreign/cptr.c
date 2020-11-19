/*===========================================================================*/
/*   (Foreign/cptr.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/cptr.scm) */
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

	typedef struct BgL_caliasz00_bgl
	{
		bool_t BgL_arrayzf3zf3;
	}                *BgL_caliasz00_bglt;

	typedef struct BgL_cptrz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		struct BgL_typez00_bgl *BgL_pointzd2tozd2;
		bool_t BgL_arrayzf3zf3;
	}              *BgL_cptrz00_bglt;


	extern obj_t BGl_caliasz00zzforeign_ctypez00;
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzforeign_cpointerz00();
	extern obj_t BGl_cstructz00zzforeign_ctypez00;
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzforeign_cpointerz00();
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	extern obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzforeign_cpointerz00();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_cpointerz00 = BUNSPEC;
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzforeign_cpointerz00();
	static obj_t BGl_genericzd2initzd2zzforeign_cpointerz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_cptrz00zzforeign_ctypez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cpointerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzforeign_cpointerz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cpointerz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_cpointerz00();
	static obj_t
		BGl_z62makezd2ctypezd2accessesz121093z70zzforeign_cpointerz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	static obj_t __cnst[37];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1768z00zzforeign_cpointerz00,
		BgL_bgl_za762makeza7d2ctypeza71792za7,
		BGl_z62makezd2ctypezd2accessesz121093z70zzforeign_cpointerz00, 0L, BUNSPEC,
		3);
	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;
	   
		 
		DEFINE_STRING(BGl_string1769z00zzforeign_cpointerz00,
		BgL_bgl_string1769za700za7za7f1793za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string1770z00zzforeign_cpointerz00,
		BgL_bgl_string1770za700za7za7f1794za7, "&(((", 4);
	      DEFINE_STRING(BGl_string1771z00zzforeign_cpointerz00,
		BgL_bgl_string1771za700za7za7f1795za7, ")($1))[ $2 ])", 13);
	      DEFINE_STRING(BGl_string1772z00zzforeign_cpointerz00,
		BgL_bgl_string1772za700za7za7f1796za7, "((", 2);
	      DEFINE_STRING(BGl_string1773z00zzforeign_cpointerz00,
		BgL_bgl_string1773za700za7za7f1797za7, ")($1))[ $2 ]", 12);
	      DEFINE_STRING(BGl_string1774z00zzforeign_cpointerz00,
		BgL_bgl_string1774za700za7za7f1798za7, "(((", 3);
	      DEFINE_STRING(BGl_string1775z00zzforeign_cpointerz00,
		BgL_bgl_string1775za700za7za7f1799za7, ")($1))[ $2 ] = *($3), BUNSPEC)",
		30);
	      DEFINE_STRING(BGl_string1776z00zzforeign_cpointerz00,
		BgL_bgl_string1776za700za7za7f1800za7, ")($1))[ $2 ] = $3, BUNSPEC)", 27);
	      DEFINE_STRING(BGl_string1777z00zzforeign_cpointerz00,
		BgL_bgl_string1777za700za7za7f1801za7, " * $1 )", 7);
	      DEFINE_STRING(BGl_string1778z00zzforeign_cpointerz00,
		BgL_bgl_string1778za700za7za7f1802za7, " )", 2);
	      DEFINE_STRING(BGl_string1779z00zzforeign_cpointerz00,
		BgL_bgl_string1779za700za7za7f1803za7, "sizeof( ", 8);
	      DEFINE_STRING(BGl_string1780z00zzforeign_cpointerz00,
		BgL_bgl_string1780za700za7za7f1804za7, ")GC_MALLOC( ", 12);
	      DEFINE_STRING(BGl_string1781z00zzforeign_cpointerz00,
		BgL_bgl_string1781za700za7za7f1805za7, "(", 1);
	      DEFINE_STRING(BGl_string1782z00zzforeign_cpointerz00,
		BgL_bgl_string1782za700za7za7f1806za7, " ))", 3);
	      DEFINE_STRING(BGl_string1783z00zzforeign_cpointerz00,
		BgL_bgl_string1783za700za7za7f1807za7, ")0L)", 4);
	      DEFINE_STRING(BGl_string1784z00zzforeign_cpointerz00,
		BgL_bgl_string1784za700za7za7f1808za7, "($1 == (", 8);
	      DEFINE_STRING(BGl_string1785z00zzforeign_cpointerz00,
		BgL_bgl_string1785za700za7za7f1809za7, ")FOREIGN_TO_COBJ", 16);
	      DEFINE_STRING(BGl_string1786z00zzforeign_cpointerz00,
		BgL_bgl_string1786za700za7za7f1810za7, "cobj_to_foreign", 15);
	      DEFINE_STRING(BGl_string1787z00zzforeign_cpointerz00,
		BgL_bgl_string1787za700za7za7f1811za7, "foreign_cpointer", 16);
	      DEFINE_STRING(BGl_string1788z00zzforeign_cpointerz00,
		BgL_bgl_string1788za700za7za7f1812za7,
		"predicate-of static foreign -null? symbol macro if eq? quote foreign-id foreign? o::obj (free-pragma::bool \"($1 == $2)\" o1 o2) o2 o1 = ?::bool free-pragma::bool -null?::bool |free-pragma::| make-null- len len::long make- pragma v ::obj i free-pragma i::long o * -set! -ref ::bool ? -> ",
		285);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzforeign_cpointerz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cpointerz00(long
		BgL_checksumz00_1332, char *BgL_fromz00_1333)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_cpointerz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_cpointerz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzforeign_cpointerz00();
					BGl_libraryzd2moduleszd2initz00zzforeign_cpointerz00();
					BGl_cnstzd2initzd2zzforeign_cpointerz00();
					BGl_importedzd2moduleszd2initz00zzforeign_cpointerz00();
					BGl_methodzd2initzd2zzforeign_cpointerz00();
					return BGl_toplevelzd2initzd2zzforeign_cpointerz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cpointerz00()
	{
		{	/* Foreign/cptr.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_cpointer");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_cpointer");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_cpointer");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_cpointer");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"foreign_cpointer");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_cpointer");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_cpointerz00()
	{
		{	/* Foreign/cptr.scm 15 */
			{	/* Foreign/cptr.scm 15 */
				obj_t BgL_cportz00_1009;

				{	/* Foreign/cptr.scm 15 */
					obj_t BgL_stringz00_1017;

					BgL_stringz00_1017 = BGl_string1788z00zzforeign_cpointerz00;
					{	/* Foreign/cptr.scm 15 */
						obj_t BgL_startz00_1018;

						BgL_startz00_1018 = BINT(((long) 0));
						{	/* Foreign/cptr.scm 15 */
							obj_t BgL_endz00_1019;

							BgL_endz00_1019 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1017)));
							{	/* Foreign/cptr.scm 15 */

								BgL_cportz00_1009 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1017, BgL_startz00_1018, BgL_endz00_1019);
				}}}}
				{
					long BgL_iz00_1010;

					BgL_iz00_1010 = ((long) 36);
				BgL_loopz00_1011:
					if ((BgL_iz00_1010 == ((long) -1)))
						{	/* Foreign/cptr.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/cptr.scm 15 */
							{	/* Foreign/cptr.scm 15 */
								obj_t BgL_arg1790z00_1013;

								{	/* Foreign/cptr.scm 15 */

									{	/* Foreign/cptr.scm 15 */
										obj_t BgL_locationz00_1015;

										BgL_locationz00_1015 = BBOOL(((bool_t) 0));
										{	/* Foreign/cptr.scm 15 */

											BgL_arg1790z00_1013 =
												BGl_readz00zz__readerz00(BgL_cportz00_1009,
												BgL_locationz00_1015);
										}
									}
								}
								{	/* Foreign/cptr.scm 15 */
									int BgL_tmpz00_1358;

									BgL_tmpz00_1358 = (int) (BgL_iz00_1010);
									CNST_TABLE_SET(BgL_tmpz00_1358, BgL_arg1790z00_1013);
							}}
							{	/* Foreign/cptr.scm 15 */
								int BgL_auxz00_1016;

								BgL_auxz00_1016 = (int) ((BgL_iz00_1010 - ((long) 1)));
								{
									long BgL_iz00_1363;

									BgL_iz00_1363 = (long) (BgL_auxz00_1016);
									BgL_iz00_1010 = BgL_iz00_1363;
									goto BgL_loopz00_1011;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzforeign_cpointerz00()
	{
		{	/* Foreign/cptr.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_cpointerz00()
	{
		{	/* Foreign/cptr.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_cpointerz00()
	{
		{	/* Foreign/cptr.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_cpointerz00()
	{
		{	/* Foreign/cptr.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_cpointerz00()
	{
		{	/* Foreign/cptr.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_cptrz00zzforeign_ctypez00, BGl_proc1768z00zzforeign_cpointerz00,
				BGl_string1769z00zzforeign_cpointerz00);
		}

	}



/* &make-ctype-accesses!1093 */
	obj_t BGl_z62makezd2ctypezd2accessesz121093z70zzforeign_cpointerz00(obj_t
		BgL_envz00_1001, obj_t BgL_whatz00_1002, obj_t BgL_whoz00_1003,
		obj_t BgL_locz00_1004)
	{
		{	/* Foreign/cptr.scm 31 */
			{	/* Tools/trace.sch 53 */
				BgL_typez00_bglt BgL_btypez00_1024;

				{
					BgL_cptrz00_bglt BgL_auxz00_1367;

					{
						obj_t BgL_auxz00_1368;

						{	/* Tools/trace.sch 53 */
							BgL_objectz00_bglt BgL_tmpz00_1369;

							BgL_tmpz00_1369 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_whatz00_1002));
							BgL_auxz00_1368 = BGL_OBJECT_WIDENING(BgL_tmpz00_1369);
						}
						BgL_auxz00_1367 = ((BgL_cptrz00_bglt) BgL_auxz00_1368);
					}
					BgL_btypez00_1024 =
						(((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_1367))->BgL_btypez00);
				}
				{	/* Tools/trace.sch 53 */
					obj_t BgL_idz00_1025;

					BgL_idz00_1025 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_whoz00_1003)))->BgL_idz00);
					{	/* Tools/trace.sch 53 */
						obj_t BgL_bidz00_1026;

						BgL_bidz00_1026 =
							(((BgL_typez00_bglt) COBJECT(BgL_btypez00_1024))->BgL_idz00);
						{	/* Tools/trace.sch 53 */
							obj_t BgL_idzd2ze3bidz31_1027;

							{	/* Tools/trace.sch 53 */
								obj_t BgL_list1663z00_1028;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg1664z00_1029;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1667z00_1030;

										BgL_arg1667z00_1030 =
											MAKE_YOUNG_PAIR(BgL_bidz00_1026, BNIL);
										BgL_arg1664z00_1029 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
											BgL_arg1667z00_1030);
									}
									BgL_list1663z00_1028 =
										MAKE_YOUNG_PAIR(BgL_idz00_1025, BgL_arg1664z00_1029);
								}
								BgL_idzd2ze3bidz31_1027 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list1663z00_1028);
							}
							{	/* Tools/trace.sch 53 */
								obj_t BgL_bidzd2ze3idz31_1031;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_list1645z00_1032;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1652z00_1033;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg1662z00_1034;

											BgL_arg1662z00_1034 =
												MAKE_YOUNG_PAIR(BgL_idz00_1025, BNIL);
											BgL_arg1652z00_1033 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
												BgL_arg1662z00_1034);
										}
										BgL_list1645z00_1032 =
											MAKE_YOUNG_PAIR(BgL_bidz00_1026, BgL_arg1652z00_1033);
									}
									BgL_bidzd2ze3idz31_1031 =
										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
										(BgL_list1645z00_1032);
								}
								{	/* Tools/trace.sch 53 */
									obj_t BgL_bidzf3zf3_1035;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1640z00_1036;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg1641z00_1037;
											obj_t BgL_arg1644z00_1038;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_res1712z00_1039;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_arg1466z00_1040;

													BgL_arg1466z00_1040 =
														SYMBOL_TO_STRING(BgL_idz00_1025);
													BgL_res1712z00_1039 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_1040);
												}
												BgL_arg1641z00_1037 = BgL_res1712z00_1039;
											}
											{	/* Tools/trace.sch 53 */
												obj_t BgL_res1713z00_1041;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_symbolz00_1042;

													BgL_symbolz00_1042 = CNST_TABLE_REF(((long) 1));
													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg1466z00_1043;

														BgL_arg1466z00_1043 =
															SYMBOL_TO_STRING(BgL_symbolz00_1042);
														BgL_res1713z00_1041 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1043);
												}}
												BgL_arg1644z00_1038 = BgL_res1713z00_1041;
											}
											BgL_arg1640z00_1036 =
												string_append(BgL_arg1641z00_1037, BgL_arg1644z00_1038);
										}
										BgL_bidzf3zf3_1035 = bstring_to_symbol(BgL_arg1640z00_1036);
									}
									{	/* Tools/trace.sch 53 */
										obj_t BgL_bidzf3zd2boolz21_1044;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg1631z00_1045;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_arg1634z00_1046;
												obj_t BgL_arg1639z00_1047;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_res1715z00_1048;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg1466z00_1049;

														BgL_arg1466z00_1049 =
															SYMBOL_TO_STRING(BgL_bidzf3zf3_1035);
														BgL_res1715z00_1048 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1049);
													}
													BgL_arg1634z00_1046 = BgL_res1715z00_1048;
												}
												{	/* Tools/trace.sch 53 */
													obj_t BgL_res1716z00_1050;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_symbolz00_1051;

														BgL_symbolz00_1051 = CNST_TABLE_REF(((long) 2));
														{	/* Tools/trace.sch 53 */
															obj_t BgL_arg1466z00_1052;

															BgL_arg1466z00_1052 =
																SYMBOL_TO_STRING(BgL_symbolz00_1051);
															BgL_res1716z00_1050 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_1052);
													}}
													BgL_arg1639z00_1047 = BgL_res1716z00_1050;
												}
												BgL_arg1631z00_1045 =
													string_append(BgL_arg1634z00_1046,
													BgL_arg1639z00_1047);
											}
											BgL_bidzf3zd2boolz21_1044 =
												bstring_to_symbol(BgL_arg1631z00_1045);
										}
										{	/* Tools/trace.sch 53 */
											obj_t BgL_namez00_1053;

											BgL_namez00_1053 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt) BgL_whoz00_1003)))->
												BgL_namez00);
											{	/* Tools/trace.sch 53 */
												obj_t BgL_namezd2sanszd2z42z42_1054;

												BgL_namezd2sanszd2z42z42_1054 =
													BGl_stringzd2sanszd2z42z42zztype_toolsz00
													(BgL_namez00_1053);
												{	/* Tools/trace.sch 53 */
													BgL_typez00_bglt BgL_pointzd2tozd2_1055;

													{
														BgL_cptrz00_bglt BgL_auxz00_1405;

														{
															obj_t BgL_auxz00_1406;

															{	/* Tools/trace.sch 53 */
																BgL_objectz00_bglt BgL_tmpz00_1407;

																BgL_tmpz00_1407 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_whatz00_1002));
																BgL_auxz00_1406 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_1407);
															}
															BgL_auxz00_1405 =
																((BgL_cptrz00_bglt) BgL_auxz00_1406);
														}
														BgL_pointzd2tozd2_1055 =
															(((BgL_cptrz00_bglt) COBJECT(BgL_auxz00_1405))->
															BgL_pointzd2tozd2);
													}
													{	/* Tools/trace.sch 53 */
														obj_t BgL_pointzd2tozd2idz00_1056;

														BgL_pointzd2tozd2idz00_1056 =
															(((BgL_typez00_bglt)
																COBJECT(BgL_pointzd2tozd2_1055))->BgL_idz00);
														{	/* Tools/trace.sch 53 */
															obj_t BgL_pointzd2tozd2namez00_1057;

															BgL_pointzd2tozd2namez00_1057 =
																(((BgL_typez00_bglt)
																	COBJECT(BgL_pointzd2tozd2_1055))->
																BgL_namez00);
															{	/* Tools/trace.sch 53 */
																obj_t
																	BgL_pointzd2tozd2namezd2sanszd2z42z42_1058;
																BgL_pointzd2tozd2namezd2sanszd2z42z42_1058 =
																	BGl_stringzd2sanszd2z42z42zztype_toolsz00
																	(BgL_pointzd2tozd2namez00_1057);
																{	/* Tools/trace.sch 53 */

																	{

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1100z00_1253;
																			obj_t BgL_arg1101z00_1254;
																			obj_t BgL_arg1103z00_1255;
																			obj_t BgL_arg1109z00_1256;
																			obj_t BgL_arg1110z00_1257;
																			obj_t BgL_arg1113z00_1258;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_list1123z00_1259;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1124z00_1260;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1125z00_1261;

																						BgL_arg1125z00_1261 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 1)), BNIL);
																						BgL_arg1124z00_1260 =
																							MAKE_YOUNG_PAIR(BgL_idz00_1025,
																							BgL_arg1125z00_1261);
																					}
																					BgL_list1123z00_1259 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 21)),
																						BgL_arg1124z00_1260);
																				}
																				BgL_arg1100z00_1253 =
																					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																					(BgL_list1123z00_1259);
																			}
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1126z00_1262;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1127z00_1263;
																					obj_t BgL_arg1128z00_1264;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_res1750z00_1265;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_symbolz00_1266;

																							BgL_symbolz00_1266 =
																								CNST_TABLE_REF(((long) 16));
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1466z00_1267;

																								BgL_arg1466z00_1267 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_1266);
																								BgL_res1750z00_1265 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1466z00_1267);
																						}}
																						BgL_arg1127z00_1263 =
																							BgL_res1750z00_1265;
																					}
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_res1751z00_1268;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1466z00_1269;

																							BgL_arg1466z00_1269 =
																								SYMBOL_TO_STRING
																								(BgL_idz00_1025);
																							BgL_res1751z00_1268 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1269);
																						}
																						BgL_arg1128z00_1264 =
																							BgL_res1751z00_1268;
																					}
																					BgL_arg1126z00_1262 =
																						string_append(BgL_arg1127z00_1263,
																						BgL_arg1128z00_1264);
																				}
																				BgL_arg1101z00_1254 =
																					bstring_to_symbol
																					(BgL_arg1126z00_1262);
																			}
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1129z00_1270;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1133z00_1271;
																					obj_t BgL_arg1134z00_1272;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_res1753z00_1273;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1466z00_1274;

																							BgL_arg1466z00_1274 =
																								SYMBOL_TO_STRING
																								(BgL_idz00_1025);
																							BgL_res1753z00_1273 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1274);
																						}
																						BgL_arg1133z00_1271 =
																							BgL_res1753z00_1273;
																					}
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_res1754z00_1275;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_symbolz00_1276;

																							BgL_symbolz00_1276 =
																								CNST_TABLE_REF(((long) 33));
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1466z00_1277;

																								BgL_arg1466z00_1277 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_1276);
																								BgL_res1754z00_1275 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1466z00_1277);
																						}}
																						BgL_arg1134z00_1272 =
																							BgL_res1754z00_1275;
																					}
																					BgL_arg1129z00_1270 =
																						string_append(BgL_arg1133z00_1271,
																						BgL_arg1134z00_1272);
																				}
																				BgL_arg1103z00_1255 =
																					bstring_to_symbol
																					(BgL_arg1129z00_1270);
																			}
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1140z00_1278;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1145z00_1279;
																					obj_t BgL_arg1146z00_1280;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_res1756z00_1281;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_symbolz00_1282;

																							BgL_symbolz00_1282 =
																								CNST_TABLE_REF(((long) 13));
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1466z00_1283;

																								BgL_arg1466z00_1283 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_1282);
																								BgL_res1756z00_1281 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1466z00_1283);
																						}}
																						BgL_arg1145z00_1279 =
																							BgL_res1756z00_1281;
																					}
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_res1757z00_1284;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1466z00_1285;

																							BgL_arg1466z00_1285 =
																								SYMBOL_TO_STRING
																								(BgL_idz00_1025);
																							BgL_res1757z00_1284 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1285);
																						}
																						BgL_arg1146z00_1280 =
																							BgL_res1757z00_1284;
																					}
																					BgL_arg1140z00_1278 =
																						string_append(BgL_arg1145z00_1279,
																						BgL_arg1146z00_1280);
																				}
																				BgL_arg1109z00_1256 =
																					bstring_to_symbol
																					(BgL_arg1140z00_1278);
																			}
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1155z00_1286;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1156z00_1287;
																					obj_t BgL_arg1165z00_1288;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_res1759z00_1289;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1466z00_1290;

																							BgL_arg1466z00_1290 =
																								SYMBOL_TO_STRING
																								(BgL_idz00_1025);
																							BgL_res1759z00_1289 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1290);
																						}
																						BgL_arg1156z00_1287 =
																							BgL_res1759z00_1289;
																					}
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_res1760z00_1291;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_symbolz00_1292;

																							BgL_symbolz00_1292 =
																								CNST_TABLE_REF(((long) 3));
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1466z00_1293;

																								BgL_arg1466z00_1293 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_1292);
																								BgL_res1760z00_1291 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1466z00_1293);
																						}}
																						BgL_arg1165z00_1288 =
																							BgL_res1760z00_1291;
																					}
																					BgL_arg1155z00_1286 =
																						string_append(BgL_arg1156z00_1287,
																						BgL_arg1165z00_1288);
																				}
																				BgL_arg1110z00_1257 =
																					bstring_to_symbol
																					(BgL_arg1155z00_1286);
																			}
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1166z00_1294;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1167z00_1295;
																					obj_t BgL_arg1169z00_1296;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_res1762z00_1297;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1466z00_1298;

																							BgL_arg1466z00_1298 =
																								SYMBOL_TO_STRING
																								(BgL_idz00_1025);
																							BgL_res1762z00_1297 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1298);
																						}
																						BgL_arg1167z00_1295 =
																							BgL_res1762z00_1297;
																					}
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_res1763z00_1299;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_symbolz00_1300;

																							BgL_symbolz00_1300 =
																								CNST_TABLE_REF(((long) 4));
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1466z00_1301;

																								BgL_arg1466z00_1301 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_1300);
																								BgL_res1763z00_1299 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1466z00_1301);
																						}}
																						BgL_arg1169z00_1296 =
																							BgL_res1763z00_1299;
																					}
																					BgL_arg1166z00_1294 =
																						string_append(BgL_arg1167z00_1295,
																						BgL_arg1169z00_1296);
																				}
																				BgL_arg1113z00_1258 =
																					bstring_to_symbol
																					(BgL_arg1166z00_1294);
																			}
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_list1114z00_1302;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1115z00_1303;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1116z00_1304;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1117z00_1305;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1118z00_1306;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1121z00_1307;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1122z00_1308;

																										BgL_arg1122z00_1308 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1113z00_1258,
																											BNIL);
																										BgL_arg1121z00_1307 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1110z00_1257,
																											BgL_arg1122z00_1308);
																									}
																									BgL_arg1118z00_1306 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1109z00_1256,
																										BgL_arg1121z00_1307);
																								}
																								BgL_arg1117z00_1305 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1103z00_1255,
																									BgL_arg1118z00_1306);
																							}
																							BgL_arg1116z00_1304 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1101z00_1254,
																								BgL_arg1117z00_1305);
																						}
																						BgL_arg1115z00_1303 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1100z00_1253,
																							BgL_arg1116z00_1304);
																					}
																					BgL_list1114z00_1302 =
																						MAKE_YOUNG_PAIR(BgL_bidzf3zf3_1035,
																						BgL_arg1115z00_1303);
																				}
																				BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																					(BgL_list1114z00_1302);
																		}}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1170z00_1309;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1172z00_1310;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1174z00_1311;
																					obj_t BgL_arg1175z00_1312;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1247z00_1247;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1250z00_1248;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1252z00_1249;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1253z00_1250;
																									obj_t BgL_arg1254z00_1251;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1256z00_1252;

																										BgL_arg1256z00_1252 =
																											MAKE_YOUNG_PAIR
																											(BgL_idz00_1025, BNIL);
																										BgL_arg1253z00_1250 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													32)),
																											BgL_arg1256z00_1252);
																									}
																									BgL_arg1254z00_1251 =
																										MAKE_YOUNG_PAIR
																										(BGl_string1786z00zzforeign_cpointerz00,
																										BNIL);
																									BgL_arg1252z00_1249 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1253z00_1250,
																										BgL_arg1254z00_1251);
																								}
																								BgL_arg1250z00_1248 =
																									MAKE_YOUNG_PAIR
																									(BgL_idzd2ze3bidz31_1027,
																									BgL_arg1252z00_1249);
																							}
																							BgL_arg1247z00_1247 =
																								MAKE_YOUNG_PAIR(BgL_bidz00_1026,
																								BgL_arg1250z00_1248);
																						}
																						BgL_arg1174z00_1311 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 31)),
																							BgL_arg1247z00_1247);
																					}
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_tmpz00_1474;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_mnamez00_1241;

																							BgL_mnamez00_1241 =
																								string_append_3
																								(BGl_string1781z00zzforeign_cpointerz00,
																								BgL_namezd2sanszd2z42z42_1054,
																								BGl_string1785z00zzforeign_cpointerz00);
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1258z00_1242;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1263z00_1243;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1268z00_1244;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1270z00_1245;
																											obj_t BgL_arg1271z00_1246;

																											BgL_arg1270z00_1245 =
																												MAKE_YOUNG_PAIR
																												(BgL_bidz00_1026, BNIL);
																											BgL_arg1271z00_1246 =
																												MAKE_YOUNG_PAIR
																												(BgL_mnamez00_1241,
																												BNIL);
																											BgL_arg1268z00_1244 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1270z00_1245,
																												BgL_arg1271z00_1246);
																										}
																										BgL_arg1263z00_1243 =
																											MAKE_YOUNG_PAIR
																											(BgL_bidzd2ze3idz31_1031,
																											BgL_arg1268z00_1244);
																									}
																									BgL_arg1258z00_1242 =
																										MAKE_YOUNG_PAIR
																										(BgL_idz00_1025,
																										BgL_arg1263z00_1243);
																								}
																								BgL_tmpz00_1474 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 31)),
																									BgL_arg1258z00_1242);
																						}}
																						BgL_arg1175z00_1312 =
																							MAKE_YOUNG_PAIR(BgL_tmpz00_1474,
																							BNIL);
																					}
																					BgL_arg1172z00_1310 =
																						MAKE_YOUNG_PAIR(BgL_arg1174z00_1311,
																						BgL_arg1175z00_1312);
																				}
																				BgL_arg1170z00_1309 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							34)), BgL_arg1172z00_1310);
																			}
																			BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																				(BgL_arg1170z00_1309);
																		}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1177z00_1313;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1178z00_1314;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1179z00_1315;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1186z00_1316;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1190z00_1317;

																							BgL_arg1190z00_1317 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 10)), BNIL);
																							BgL_arg1186z00_1316 =
																								MAKE_YOUNG_PAIR
																								(BgL_bidzf3zd2boolz21_1044,
																								BgL_arg1190z00_1317);
																						}
																						BgL_arg1179z00_1315 =
																							BGl_makezd2protozd2inlinez00zzforeign_libraryz00
																							(BgL_arg1186z00_1316);
																					}
																					BgL_arg1178z00_1314 =
																						MAKE_YOUNG_PAIR(BgL_arg1179z00_1315,
																						BNIL);
																				}
																				BgL_arg1177z00_1313 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							35)), BgL_arg1178z00_1314);
																			}
																			BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																				(BgL_arg1177z00_1313);
																		}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1194z00_1318;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1197z00_1319;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1201z00_1320;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1208z00_1321;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1211z00_1322;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1216z00_1323;

																								BgL_arg1216z00_1323 =
																									MAKE_YOUNG_PAIR
																									(BgL_bidz00_1026, BNIL);
																								BgL_arg1211z00_1322 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 36)),
																									BgL_arg1216z00_1323);
																							}
																							BgL_arg1208z00_1321 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1211z00_1322, BNIL);
																						}
																						BgL_arg1201z00_1320 =
																							MAKE_YOUNG_PAIR
																							(BgL_bidzf3zf3_1035,
																							BgL_arg1208z00_1321);
																					}
																					BgL_arg1197z00_1319 =
																						MAKE_YOUNG_PAIR(BgL_arg1201z00_1320,
																						BNIL);
																				}
																				BgL_arg1194z00_1318 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							12)), BgL_arg1197z00_1319);
																			}
																			BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																				(BgL_arg1194z00_1318);
																		}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1221z00_1324;
																			obj_t BgL_arg1223z00_1325;

																			{

																				{	/* Tools/trace.sch 53 */
																					bool_t BgL_test1815z00_1505;

																					{	/* Tools/trace.sch 53 */
																						bool_t BgL_test1816z00_1506;

																						{	/* Tools/trace.sch 53 */
																							bool_t BgL_test1817z00_1507;

																							{
																								BgL_cptrz00_bglt
																									BgL_auxz00_1508;
																								{
																									obj_t BgL_auxz00_1509;

																									{	/* Tools/trace.sch 53 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_1510;
																										BgL_tmpz00_1510 =
																											((BgL_objectz00_bglt) (
																												(BgL_typez00_bglt)
																												BgL_whatz00_1002));
																										BgL_auxz00_1509 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_1510);
																									}
																									BgL_auxz00_1508 =
																										((BgL_cptrz00_bglt)
																										BgL_auxz00_1509);
																								}
																								BgL_test1817z00_1507 =
																									(((BgL_cptrz00_bglt)
																										COBJECT(BgL_auxz00_1508))->
																									BgL_arrayzf3zf3);
																							}
																							if (BgL_test1817z00_1507)
																								{	/* Tools/trace.sch 53 */
																									BgL_test1816z00_1506 =
																										(
																										((obj_t)
																											((BgL_typez00_bglt)
																												BgL_whoz00_1003)) ==
																										((obj_t) ((BgL_typez00_bglt)
																												BgL_whatz00_1002)));
																								}
																							else
																								{	/* Tools/trace.sch 53 */
																									BgL_test1816z00_1506 =
																										((bool_t) 0);
																								}
																						}
																						if (BgL_test1816z00_1506)
																							{	/* Tools/trace.sch 53 */
																								BgL_test1815z00_1505 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Tools/trace.sch 53 */
																								bool_t BgL_test1818z00_1521;

																								{	/* Tools/trace.sch 53 */
																									bool_t BgL_res1733z00_1180;

																									BgL_res1733z00_1180 =
																										BGl_isazf3zf3zz__objectz00(
																										((obj_t)
																											((BgL_typez00_bglt)
																												BgL_whoz00_1003)),
																										BGl_caliasz00zzforeign_ctypez00);
																									BgL_test1818z00_1521 =
																										BgL_res1733z00_1180;
																								}
																								if (BgL_test1818z00_1521)
																									{
																										BgL_caliasz00_bglt
																											BgL_auxz00_1525;
																										{
																											obj_t BgL_auxz00_1526;

																											{	/* Tools/trace.sch 53 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_1527;
																												BgL_tmpz00_1527 =
																													((BgL_objectz00_bglt)
																													((BgL_typez00_bglt) (
																															(BgL_typez00_bglt)
																															BgL_whoz00_1003)));
																												BgL_auxz00_1526 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_1527);
																											}
																											BgL_auxz00_1525 =
																												((BgL_caliasz00_bglt)
																												BgL_auxz00_1526);
																										}
																										BgL_test1815z00_1505 =
																											(((BgL_caliasz00_bglt)
																												COBJECT
																												(BgL_auxz00_1525))->
																											BgL_arrayzf3zf3);
																									}
																								else
																									{	/* Tools/trace.sch 53 */
																										BgL_test1815z00_1505 =
																											((bool_t) 0);
																									}
																							}
																					}
																					if (BgL_test1815z00_1505)
																						{	/* Tools/trace.sch 53 */
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1385z00_1158;
																								obj_t BgL_arg1386z00_1159;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1387z00_1160;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1388z00_1161;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1394z00_1162;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1396z00_1163;
																												obj_t
																													BgL_arg1417z00_1164;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_res1730z00_1165;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_symbolz00_1166;
																														BgL_symbolz00_1166 =
																															CNST_TABLE_REF((
																																(long) 13));
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1466z00_1167;
																															BgL_arg1466z00_1167
																																=
																																SYMBOL_TO_STRING
																																(BgL_symbolz00_1166);
																															BgL_res1730z00_1165
																																=
																																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																(BgL_arg1466z00_1167);
																													}}
																													BgL_arg1396z00_1163 =
																														BgL_res1730z00_1165;
																												}
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_res1731z00_1168;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1466z00_1169;
																														BgL_arg1466z00_1169
																															=
																															SYMBOL_TO_STRING
																															(BgL_idz00_1025);
																														BgL_res1731z00_1168
																															=
																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																															(BgL_arg1466z00_1169);
																													}
																													BgL_arg1417z00_1164 =
																														BgL_res1731z00_1168;
																												}
																												BgL_arg1394z00_1162 =
																													string_append
																													(BgL_arg1396z00_1163,
																													BgL_arg1417z00_1164);
																											}
																											BgL_arg1388z00_1161 =
																												bstring_to_symbol
																												(BgL_arg1394z00_1162);
																										}
																										BgL_arg1387z00_1160 =
																											BGl_makezd2typedzd2identz00zzast_identz00
																											(BgL_arg1388z00_1161,
																											BgL_idz00_1025);
																									}
																									BgL_arg1385z00_1158 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1387z00_1160, BNIL);
																								}
																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1418z00_1170;
																									obj_t BgL_arg1421z00_1171;

																									BgL_arg1418z00_1170 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(CNST_TABLE_REF(((long) 8)),
																										BgL_idz00_1025);
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1422z00_1172;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1441z00_1173;

																											BgL_arg1441z00_1173 =
																												(((BgL_typez00_bglt)
																													COBJECT((
																															(BgL_typez00_bglt)
																															BgL_whoz00_1003)))->
																												BgL_siza7eza7);
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_list1442z00_1174;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1448z00_1175;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1449z00_1176;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1461z00_1177;
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1462z00_1178;
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_arg1464z00_1179;
																																	BgL_arg1464z00_1179
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_string1782z00zzforeign_cpointerz00,
																																		BNIL);
																																	BgL_arg1462z00_1178
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1441z00_1173,
																																		BgL_arg1464z00_1179);
																																}
																																BgL_arg1461z00_1177
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_string1779z00zzforeign_cpointerz00,
																																	BgL_arg1462z00_1178);
																															}
																															BgL_arg1449z00_1176
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_string1780z00zzforeign_cpointerz00,
																																BgL_arg1461z00_1177);
																														}
																														BgL_arg1448z00_1175
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_namezd2sanszd2z42z42_1054,
																															BgL_arg1449z00_1176);
																													}
																													BgL_list1442z00_1174 =
																														MAKE_YOUNG_PAIR
																														(BGl_string1781z00zzforeign_cpointerz00,
																														BgL_arg1448z00_1175);
																												}
																												BgL_arg1422z00_1172 =
																													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																													(BgL_list1442z00_1174);
																										}}
																										BgL_arg1421z00_1171 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1422z00_1172,
																											BNIL);
																									}
																									BgL_arg1386z00_1159 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1418z00_1170,
																										BgL_arg1421z00_1171);
																								}
																								BgL_arg1221z00_1324 =
																									BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																									(BgL_arg1385z00_1158,
																									BgL_arg1386z00_1159);
																						}}
																					else
																						{	/* Tools/trace.sch 53 */
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1345z00_1134;
																								obj_t BgL_arg1346z00_1135;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1347z00_1136;
																									obj_t BgL_arg1348z00_1137;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1351z00_1138;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1352z00_1139;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1357z00_1140;
																												obj_t
																													BgL_arg1360z00_1141;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_res1727z00_1142;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_symbolz00_1143;
																														BgL_symbolz00_1143 =
																															CNST_TABLE_REF((
																																(long) 13));
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1466z00_1144;
																															BgL_arg1466z00_1144
																																=
																																SYMBOL_TO_STRING
																																(BgL_symbolz00_1143);
																															BgL_res1727z00_1142
																																=
																																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																(BgL_arg1466z00_1144);
																													}}
																													BgL_arg1357z00_1140 =
																														BgL_res1727z00_1142;
																												}
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_res1728z00_1145;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1466z00_1146;
																														BgL_arg1466z00_1146
																															=
																															SYMBOL_TO_STRING
																															(BgL_idz00_1025);
																														BgL_res1728z00_1145
																															=
																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																															(BgL_arg1466z00_1146);
																													}
																													BgL_arg1360z00_1141 =
																														BgL_res1728z00_1145;
																												}
																												BgL_arg1352z00_1139 =
																													string_append
																													(BgL_arg1357z00_1140,
																													BgL_arg1360z00_1141);
																											}
																											BgL_arg1351z00_1138 =
																												bstring_to_symbol
																												(BgL_arg1352z00_1139);
																										}
																										BgL_arg1347z00_1136 =
																											BGl_makezd2typedzd2identz00zzast_identz00
																											(BgL_arg1351z00_1138,
																											BgL_idz00_1025);
																									}
																									BgL_arg1348z00_1137 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												14)), BNIL);
																									BgL_arg1345z00_1134 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1347z00_1136,
																										BgL_arg1348z00_1137);
																								}
																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1361z00_1147;
																									obj_t BgL_arg1363z00_1148;

																									BgL_arg1361z00_1147 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(CNST_TABLE_REF(((long) 8)),
																										BgL_idz00_1025);
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1364z00_1149;
																										obj_t BgL_arg1367z00_1150;

																										{	/* Tools/trace.sch 53 */
																											obj_t
																												BgL_list1368z00_1151;
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1370z00_1152;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1371z00_1153;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1372z00_1154;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1381z00_1155;
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1382z00_1156;
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_arg1383z00_1157;
																																	BgL_arg1383z00_1157
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_string1777z00zzforeign_cpointerz00,
																																		BNIL);
																																	BgL_arg1382z00_1156
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_string1778z00zzforeign_cpointerz00,
																																		BgL_arg1383z00_1157);
																																}
																																BgL_arg1381z00_1155
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_pointzd2tozd2namezd2sanszd2z42z42_1058,
																																	BgL_arg1382z00_1156);
																															}
																															BgL_arg1372z00_1154
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_string1779z00zzforeign_cpointerz00,
																																BgL_arg1381z00_1155);
																														}
																														BgL_arg1371z00_1153
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_string1780z00zzforeign_cpointerz00,
																															BgL_arg1372z00_1154);
																													}
																													BgL_arg1370z00_1152 =
																														MAKE_YOUNG_PAIR
																														(BgL_namezd2sanszd2z42z42_1054,
																														BgL_arg1371z00_1153);
																												}
																												BgL_list1368z00_1151 =
																													MAKE_YOUNG_PAIR
																													(BGl_string1781z00zzforeign_cpointerz00,
																													BgL_arg1370z00_1152);
																											}
																											BgL_arg1364z00_1149 =
																												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																												(BgL_list1368z00_1151);
																										}
																										BgL_arg1367z00_1150 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													15)), BNIL);
																										BgL_arg1363z00_1148 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1364z00_1149,
																											BgL_arg1367z00_1150);
																									}
																									BgL_arg1346z00_1135 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1361z00_1147,
																										BgL_arg1363z00_1148);
																								}
																								BgL_arg1221z00_1324 =
																									BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																									(BgL_arg1345z00_1134,
																									BgL_arg1346z00_1135);
																			}}}}
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1225z00_1326;
																				obj_t BgL_arg1227z00_1327;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1292z00_1218;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1295z00_1219;
																						obj_t BgL_arg1296z00_1220;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_list1297z00_1221;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1298z00_1222;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1299z00_1223;

																									BgL_arg1299z00_1223 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												20)), BNIL);
																									BgL_arg1298z00_1222 =
																										MAKE_YOUNG_PAIR
																										(BgL_idz00_1025,
																										BgL_arg1299z00_1223);
																								}
																								BgL_list1297z00_1221 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 21)),
																									BgL_arg1298z00_1222);
																							}
																							BgL_arg1295z00_1219 =
																								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																								(BgL_list1297z00_1221);
																						}
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1300z00_1224;
																							obj_t BgL_arg1301z00_1225;

																							BgL_arg1300z00_1224 =
																								BGl_makezd2typedzd2identz00zzast_identz00
																								(CNST_TABLE_REF(((long) 22)),
																								BgL_idz00_1025);
																							BgL_arg1301z00_1225 =
																								MAKE_YOUNG_PAIR
																								(BGl_makezd2typedzd2identz00zzast_identz00
																								(CNST_TABLE_REF(((long) 23)),
																									BgL_idz00_1025), BNIL);
																							BgL_arg1296z00_1220 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1300z00_1224,
																								BgL_arg1301z00_1225);
																						}
																						BgL_arg1292z00_1218 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1295z00_1219,
																							BgL_arg1296z00_1220);
																					}
																					BgL_arg1225z00_1326 =
																						BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																						(BgL_arg1292z00_1218,
																						CNST_TABLE_REF(((long) 24)));
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1229z00_1328;
																					obj_t BgL_arg1232z00_1329;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1306z00_1203;
																						obj_t BgL_arg1307z00_1204;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1308z00_1205;
																							obj_t BgL_arg1309z00_1206;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1310z00_1207;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1311z00_1208;
																									obj_t BgL_arg1312z00_1209;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_res1718z00_1210;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1466z00_1211;

																											BgL_arg1466z00_1211 =
																												SYMBOL_TO_STRING
																												(BgL_idz00_1025);
																											BgL_res1718z00_1210 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg1466z00_1211);
																										}
																										BgL_arg1311z00_1208 =
																											BgL_res1718z00_1210;
																									}
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_res1719z00_1212;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_symbolz00_1213;

																											BgL_symbolz00_1213 =
																												CNST_TABLE_REF(((long)
																													18));
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1466z00_1214;
																												BgL_arg1466z00_1214 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_1213);
																												BgL_res1719z00_1212 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg1466z00_1214);
																										}}
																										BgL_arg1312z00_1209 =
																											BgL_res1719z00_1212;
																									}
																									BgL_arg1310z00_1207 =
																										string_append
																										(BgL_arg1311z00_1208,
																										BgL_arg1312z00_1209);
																								}
																								BgL_arg1308z00_1205 =
																									bstring_to_symbol
																									(BgL_arg1310z00_1207);
																							}
																							BgL_arg1309z00_1206 =
																								MAKE_YOUNG_PAIR
																								(BGl_makezd2typedzd2identz00zzast_identz00
																								(CNST_TABLE_REF(((long) 6)),
																									BgL_idz00_1025), BNIL);
																							BgL_arg1306z00_1203 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1308z00_1205,
																								BgL_arg1309z00_1206);
																						}
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1315z00_1215;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1316z00_1216;
																								obj_t BgL_arg1317z00_1217;

																								BgL_arg1316z00_1216 =
																									string_append_3
																									(BGl_string1784z00zzforeign_cpointerz00,
																									BgL_namezd2sanszd2z42z42_1054,
																									BGl_string1783z00zzforeign_cpointerz00);
																								BgL_arg1317z00_1217 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 6)), BNIL);
																								BgL_arg1315z00_1215 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1316z00_1216,
																									BgL_arg1317z00_1217);
																							}
																							BgL_arg1307z00_1204 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 19)),
																								BgL_arg1315z00_1215);
																						}
																						BgL_arg1229z00_1328 =
																							BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																							(BgL_arg1306z00_1203,
																							BgL_arg1307z00_1204);
																					}
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1239z00_1330;
																						obj_t BgL_arg1242z00_1331;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1319z00_1181;
																							obj_t BgL_arg1322z00_1182;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1324z00_1183;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1325z00_1184;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1326z00_1185;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1327z00_1186;
																											obj_t BgL_arg1328z00_1187;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_res1721z00_1188;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_symbolz00_1189;
																													BgL_symbolz00_1189 =
																														CNST_TABLE_REF((
																															(long) 16));
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1466z00_1190;
																														BgL_arg1466z00_1190
																															=
																															SYMBOL_TO_STRING
																															(BgL_symbolz00_1189);
																														BgL_res1721z00_1188
																															=
																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																															(BgL_arg1466z00_1190);
																												}}
																												BgL_arg1327z00_1186 =
																													BgL_res1721z00_1188;
																											}
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_res1722z00_1191;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1466z00_1192;
																													BgL_arg1466z00_1192 =
																														SYMBOL_TO_STRING
																														(BgL_idz00_1025);
																													BgL_res1722z00_1191 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg1466z00_1192);
																												}
																												BgL_arg1328z00_1187 =
																													BgL_res1722z00_1191;
																											}
																											BgL_arg1326z00_1185 =
																												string_append
																												(BgL_arg1327z00_1186,
																												BgL_arg1328z00_1187);
																										}
																										BgL_arg1325z00_1184 =
																											bstring_to_symbol
																											(BgL_arg1326z00_1185);
																									}
																									BgL_arg1324z00_1183 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(BgL_arg1325z00_1184,
																										BgL_idz00_1025);
																								}
																								BgL_arg1319z00_1181 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1324z00_1183, BNIL);
																							}
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1329z00_1193;
																								obj_t BgL_arg1330z00_1194;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1331z00_1195;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1334z00_1196;
																										obj_t BgL_arg1335z00_1197;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_res1724z00_1198;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_symbolz00_1199;
																												BgL_symbolz00_1199 =
																													CNST_TABLE_REF(((long)
																														17));
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1466z00_1200;
																													BgL_arg1466z00_1200 =
																														SYMBOL_TO_STRING
																														(BgL_symbolz00_1199);
																													BgL_res1724z00_1198 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg1466z00_1200);
																											}}
																											BgL_arg1334z00_1196 =
																												BgL_res1724z00_1198;
																										}
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_res1725z00_1201;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1466z00_1202;
																												BgL_arg1466z00_1202 =
																													SYMBOL_TO_STRING
																													(BgL_idz00_1025);
																												BgL_res1725z00_1201 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg1466z00_1202);
																											}
																											BgL_arg1335z00_1197 =
																												BgL_res1725z00_1201;
																										}
																										BgL_arg1331z00_1195 =
																											string_append
																											(BgL_arg1334z00_1196,
																											BgL_arg1335z00_1197);
																									}
																									BgL_arg1329z00_1193 =
																										bstring_to_symbol
																										(BgL_arg1331z00_1195);
																								}
																								BgL_arg1330z00_1194 =
																									MAKE_YOUNG_PAIR
																									(string_append_3
																									(BGl_string1772z00zzforeign_cpointerz00,
																										BgL_namezd2sanszd2z42z42_1054,
																										BGl_string1783z00zzforeign_cpointerz00),
																									BNIL);
																								BgL_arg1322z00_1182 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1329z00_1193,
																									BgL_arg1330z00_1194);
																							}
																							BgL_arg1239z00_1330 =
																								BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																								(BgL_arg1319z00_1181,
																								BgL_arg1322z00_1182);
																						}
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_auxz00_1661;
																							obj_t BgL_tmpz00_1636;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_refzd2idzd2_1067;
																								obj_t BgL_setzd2idzd2_1068;
																								obj_t
																									BgL_refzd2typezd2idz00_1069;
																								obj_t BgL_refzd2fmtzd2_1070;
																								obj_t BgL_setzd2fmtzd2_1071;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1599z00_1072;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1604z00_1073;
																										obj_t BgL_arg1605z00_1074;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_res1734z00_1075;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1466z00_1076;
																												BgL_arg1466z00_1076 =
																													SYMBOL_TO_STRING
																													(BgL_idz00_1025);
																												BgL_res1734z00_1075 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg1466z00_1076);
																											}
																											BgL_arg1604z00_1073 =
																												BgL_res1734z00_1075;
																										}
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_res1735z00_1077;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_symbolz00_1078;
																												BgL_symbolz00_1078 =
																													CNST_TABLE_REF(((long)
																														3));
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1466z00_1079;
																													BgL_arg1466z00_1079 =
																														SYMBOL_TO_STRING
																														(BgL_symbolz00_1078);
																													BgL_res1735z00_1077 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg1466z00_1079);
																											}}
																											BgL_arg1605z00_1074 =
																												BgL_res1735z00_1077;
																										}
																										BgL_arg1599z00_1072 =
																											string_append
																											(BgL_arg1604z00_1073,
																											BgL_arg1605z00_1074);
																									}
																									BgL_refzd2idzd2_1067 =
																										bstring_to_symbol
																										(BgL_arg1599z00_1072);
																								}
																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1606z00_1080;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1611z00_1081;
																										obj_t BgL_arg1612z00_1082;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_res1737z00_1083;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1466z00_1084;
																												BgL_arg1466z00_1084 =
																													SYMBOL_TO_STRING
																													(BgL_idz00_1025);
																												BgL_res1737z00_1083 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg1466z00_1084);
																											}
																											BgL_arg1611z00_1081 =
																												BgL_res1737z00_1083;
																										}
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_res1738z00_1085;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_symbolz00_1086;
																												BgL_symbolz00_1086 =
																													CNST_TABLE_REF(((long)
																														4));
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1466z00_1087;
																													BgL_arg1466z00_1087 =
																														SYMBOL_TO_STRING
																														(BgL_symbolz00_1086);
																													BgL_res1738z00_1085 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg1466z00_1087);
																											}}
																											BgL_arg1612z00_1082 =
																												BgL_res1738z00_1085;
																										}
																										BgL_arg1606z00_1080 =
																											string_append
																											(BgL_arg1611z00_1081,
																											BgL_arg1612z00_1082);
																									}
																									BgL_setzd2idzd2_1068 =
																										bstring_to_symbol
																										(BgL_arg1606z00_1080);
																								}
																								{	/* Tools/trace.sch 53 */
																									bool_t BgL_test1819z00_1676;

																									{	/* Tools/trace.sch 53 */
																										bool_t BgL_res1740z00_1088;

																										BgL_res1740z00_1088 =
																											BGl_isazf3zf3zz__objectz00
																											(((obj_t)
																												BgL_pointzd2tozd2_1055),
																											BGl_cstructz00zzforeign_ctypez00);
																										BgL_test1819z00_1676 =
																											BgL_res1740z00_1088;
																									}
																									if (BgL_test1819z00_1676)
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1624z00_1089;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1626z00_1090;
																												obj_t
																													BgL_arg1627z00_1091;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_res1741z00_1092;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1466z00_1093;
																														BgL_arg1466z00_1093
																															=
																															SYMBOL_TO_STRING
																															(BgL_pointzd2tozd2idz00_1056);
																														BgL_res1741z00_1092
																															=
																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																															(BgL_arg1466z00_1093);
																													}
																													BgL_arg1626z00_1090 =
																														BgL_res1741z00_1092;
																												}
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_res1742z00_1094;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_symbolz00_1095;
																														BgL_symbolz00_1095 =
																															CNST_TABLE_REF((
																																(long) 5));
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1466z00_1096;
																															BgL_arg1466z00_1096
																																=
																																SYMBOL_TO_STRING
																																(BgL_symbolz00_1095);
																															BgL_res1742z00_1094
																																=
																																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																(BgL_arg1466z00_1096);
																													}}
																													BgL_arg1627z00_1091 =
																														BgL_res1742z00_1094;
																												}
																												BgL_arg1624z00_1089 =
																													string_append
																													(BgL_arg1626z00_1090,
																													BgL_arg1627z00_1091);
																											}
																											BgL_refzd2typezd2idz00_1069
																												=
																												bstring_to_symbol
																												(BgL_arg1624z00_1089);
																										}
																									else
																										{	/* Tools/trace.sch 53 */
																											BgL_refzd2typezd2idz00_1069
																												=
																												BgL_pointzd2tozd2idz00_1056;
																										}
																								}
																								{	/* Tools/trace.sch 53 */
																									bool_t BgL_test1823z00_1686;

																									{	/* Tools/trace.sch 53 */
																										bool_t BgL_res1744z00_1097;

																										BgL_res1744z00_1097 =
																											BGl_isazf3zf3zz__objectz00
																											(((obj_t)
																												BgL_pointzd2tozd2_1055),
																											BGl_cstructz00zzforeign_ctypez00);
																										BgL_test1823z00_1686 =
																											BgL_res1744z00_1097;
																									}
																									if (BgL_test1823z00_1686)
																										{	/* Tools/trace.sch 53 */
																											BgL_refzd2fmtzd2_1070 =
																												string_append_3
																												(BGl_string1770z00zzforeign_cpointerz00,
																												BgL_namezd2sanszd2z42z42_1054,
																												BGl_string1771z00zzforeign_cpointerz00);
																										}
																									else
																										{	/* Tools/trace.sch 53 */
																											BgL_refzd2fmtzd2_1070 =
																												string_append_3
																												(BGl_string1772z00zzforeign_cpointerz00,
																												BgL_namezd2sanszd2z42z42_1054,
																												BGl_string1773z00zzforeign_cpointerz00);
																										}
																								}
																								{	/* Tools/trace.sch 53 */
																									bool_t BgL_test1824z00_1691;

																									{	/* Tools/trace.sch 53 */
																										bool_t BgL_res1745z00_1098;

																										BgL_res1745z00_1098 =
																											BGl_isazf3zf3zz__objectz00
																											(((obj_t)
																												BgL_pointzd2tozd2_1055),
																											BGl_cstructz00zzforeign_ctypez00);
																										BgL_test1824z00_1691 =
																											BgL_res1745z00_1098;
																									}
																									if (BgL_test1824z00_1691)
																										{	/* Tools/trace.sch 53 */
																											BgL_setzd2fmtzd2_1071 =
																												string_append_3
																												(BGl_string1774z00zzforeign_cpointerz00,
																												BgL_namezd2sanszd2z42z42_1054,
																												BGl_string1775z00zzforeign_cpointerz00);
																										}
																									else
																										{	/* Tools/trace.sch 53 */
																											BgL_setzd2fmtzd2_1071 =
																												string_append_3
																												(BGl_string1774z00zzforeign_cpointerz00,
																												BgL_namezd2sanszd2z42z42_1054,
																												BGl_string1776z00zzforeign_cpointerz00);
																										}
																								}
																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1474z00_1099;
																									obj_t BgL_arg1476z00_1100;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1493z00_1101;
																										obj_t BgL_arg1495z00_1102;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1497z00_1103;
																											obj_t BgL_arg1518z00_1104;

																											BgL_arg1497z00_1103 =
																												BGl_makezd2typedzd2identz00zzast_identz00
																												(BgL_refzd2idzd2_1067,
																												BgL_refzd2typezd2idz00_1069);
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1521z00_1105;
																												obj_t
																													BgL_arg1528z00_1106;
																												BgL_arg1521z00_1105 =
																													BGl_makezd2typedzd2identz00zzast_identz00
																													(CNST_TABLE_REF((
																															(long) 6)),
																													BgL_idz00_1025);
																												BgL_arg1528z00_1106 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 7)), BNIL);
																												BgL_arg1518z00_1104 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1521z00_1105,
																													BgL_arg1528z00_1106);
																											}
																											BgL_arg1493z00_1101 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1497z00_1103,
																												BgL_arg1518z00_1104);
																										}
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1536z00_1107;
																											obj_t BgL_arg1537z00_1108;

																											BgL_arg1536z00_1107 =
																												BGl_makezd2typedzd2identz00zzast_identz00
																												(CNST_TABLE_REF(((long)
																														8)),
																												BgL_refzd2typezd2idz00_1069);
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1540z00_1109;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1552z00_1110;
																													BgL_arg1552z00_1110 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 9)),
																														BNIL);
																													BgL_arg1540z00_1109 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 6)),
																														BgL_arg1552z00_1110);
																												}
																												BgL_arg1537z00_1108 =
																													MAKE_YOUNG_PAIR
																													(BgL_refzd2fmtzd2_1070,
																													BgL_arg1540z00_1109);
																											}
																											BgL_arg1495z00_1102 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1536z00_1107,
																												BgL_arg1537z00_1108);
																										}
																										BgL_arg1474z00_1099 =
																											BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																											(BgL_arg1493z00_1101,
																											BgL_arg1495z00_1102);
																									}
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1553z00_1111;
																										obj_t BgL_arg1558z00_1112;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1561z00_1113;
																											obj_t BgL_arg1564z00_1114;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1565z00_1115;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1573z00_1116;
																													obj_t
																														BgL_arg1575z00_1117;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_res1746z00_1118;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1466z00_1119;
																															BgL_arg1466z00_1119
																																=
																																SYMBOL_TO_STRING
																																(BgL_setzd2idzd2_1068);
																															BgL_res1746z00_1118
																																=
																																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																(BgL_arg1466z00_1119);
																														}
																														BgL_arg1573z00_1116
																															=
																															BgL_res1746z00_1118;
																													}
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_res1747z00_1120;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_symbolz00_1121;
																															BgL_symbolz00_1121
																																=
																																CNST_TABLE_REF((
																																	(long) 10));
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1466z00_1122;
																																BgL_arg1466z00_1122
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_symbolz00_1121);
																																BgL_res1747z00_1120
																																	=
																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																	(BgL_arg1466z00_1122);
																														}}
																														BgL_arg1575z00_1117
																															=
																															BgL_res1747z00_1120;
																													}
																													BgL_arg1565z00_1115 =
																														string_append
																														(BgL_arg1573z00_1116,
																														BgL_arg1575z00_1117);
																												}
																												BgL_arg1561z00_1113 =
																													bstring_to_symbol
																													(BgL_arg1565z00_1115);
																											}
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1578z00_1123;
																												obj_t
																													BgL_arg1582z00_1124;
																												BgL_arg1578z00_1123 =
																													BGl_makezd2typedzd2identz00zzast_identz00
																													(CNST_TABLE_REF((
																															(long) 6)),
																													BgL_idz00_1025);
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1584z00_1125;
																													BgL_arg1584z00_1125 =
																														MAKE_YOUNG_PAIR
																														(BGl_makezd2typedzd2identz00zzast_identz00
																														(CNST_TABLE_REF((
																																	(long) 11)),
																															BgL_refzd2typezd2idz00_1069),
																														BNIL);
																													BgL_arg1582z00_1124 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 7)),
																														BgL_arg1584z00_1125);
																												}
																												BgL_arg1564z00_1114 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1578z00_1123,
																													BgL_arg1582z00_1124);
																											}
																											BgL_arg1553z00_1111 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1561z00_1113,
																												BgL_arg1564z00_1114);
																										}
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1589z00_1126;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1592z00_1127;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1593z00_1128;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1597z00_1129;
																														BgL_arg1597z00_1129
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 11)),
																															BNIL);
																														BgL_arg1593z00_1128
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 9)),
																															BgL_arg1597z00_1129);
																													}
																													BgL_arg1592z00_1127 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 6)),
																														BgL_arg1593z00_1128);
																												}
																												BgL_arg1589z00_1126 =
																													MAKE_YOUNG_PAIR
																													(BgL_setzd2fmtzd2_1071,
																													BgL_arg1592z00_1127);
																											}
																											BgL_arg1558z00_1112 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														12)),
																												BgL_arg1589z00_1126);
																										}
																										BgL_arg1476z00_1100 =
																											BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																											(BgL_arg1553z00_1111,
																											BgL_arg1558z00_1112);
																									}
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_list1477z00_1130;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1489z00_1131;

																											BgL_arg1489z00_1131 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1476z00_1100,
																												BNIL);
																											BgL_list1477z00_1130 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1474z00_1099,
																												BgL_arg1489z00_1131);
																										}
																										BgL_auxz00_1661 =
																											BgL_list1477z00_1130;
																							}}}
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1273z00_1226;
																								obj_t BgL_arg1274z00_1227;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1275z00_1228;

																									BgL_arg1275z00_1228 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												25)), BNIL);
																									BgL_arg1273z00_1226 =
																										MAKE_YOUNG_PAIR
																										(BgL_bidzf3zd2boolz21_1044,
																										BgL_arg1275z00_1228);
																								}
																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1276z00_1229;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1277z00_1230;
																										obj_t BgL_arg1280z00_1231;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1281z00_1232;

																											BgL_arg1281z00_1232 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														6)), BNIL);
																											BgL_arg1277z00_1230 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														26)),
																												BgL_arg1281z00_1232);
																										}
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1282z00_1233;
																											obj_t BgL_arg1284z00_1234;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1285z00_1235;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1286z00_1236;
																													obj_t
																														BgL_arg1287z00_1237;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1288z00_1238;
																														BgL_arg1288z00_1238
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 6)),
																															BNIL);
																														BgL_arg1286z00_1236
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 27)),
																															BgL_arg1288z00_1238);
																													}
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1289z00_1239;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1290z00_1240;
																															BgL_arg1290z00_1240
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_bidz00_1026,
																																BNIL);
																															BgL_arg1289z00_1239
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 28)),
																																BgL_arg1290z00_1240);
																														}
																														BgL_arg1287z00_1237
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1289z00_1239,
																															BNIL);
																													}
																													BgL_arg1285z00_1235 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1286z00_1236,
																														BgL_arg1287z00_1237);
																												}
																												BgL_arg1282z00_1233 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 29)),
																													BgL_arg1285z00_1235);
																											}
																											BgL_arg1284z00_1234 =
																												MAKE_YOUNG_PAIR(BFALSE,
																												BNIL);
																											BgL_arg1280z00_1231 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1282z00_1233,
																												BgL_arg1284z00_1234);
																										}
																										BgL_arg1276z00_1229 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1277z00_1230,
																											BgL_arg1280z00_1231);
																									}
																									BgL_arg1274z00_1227 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												30)),
																										BgL_arg1276z00_1229);
																								}
																								BgL_tmpz00_1636 =
																									BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																									(BgL_arg1273z00_1226,
																									BgL_arg1274z00_1227);
																							}
																							BgL_arg1242z00_1331 =
																								MAKE_YOUNG_PAIR(BgL_tmpz00_1636,
																								BgL_auxz00_1661);
																						}
																						BgL_arg1232z00_1329 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1239z00_1330,
																							BgL_arg1242z00_1331);
																					}
																					BgL_arg1227z00_1327 =
																						MAKE_YOUNG_PAIR(BgL_arg1229z00_1328,
																						BgL_arg1232z00_1329);
																				}
																				BgL_arg1223z00_1325 =
																					MAKE_YOUNG_PAIR(BgL_arg1225z00_1326,
																					BgL_arg1227z00_1327);
																			}
																			return
																				MAKE_YOUNG_PAIR(BgL_arg1221z00_1324,
																				BgL_arg1223z00_1325);
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
							}
						}
					}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_cpointerz00()
	{
		{	/* Foreign/cptr.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1787z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1787z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1787z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1787z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1787z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1787z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 396356902),
				BSTRING_TO_STRING(BGl_string1787z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 471073690),
				BSTRING_TO_STRING(BGl_string1787z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 419430923),
				BSTRING_TO_STRING(BGl_string1787z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1787z00zzforeign_cpointerz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1787z00zzforeign_cpointerz00));
		}

	}

#ifdef __cplusplus
}
#endif
