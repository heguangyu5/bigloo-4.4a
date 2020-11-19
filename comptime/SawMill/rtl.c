/*===========================================================================*/
/*   (SawMill/rtl.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/rtl.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_insz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_z52spillz52;
		obj_t BgL_destz00;
		struct BgL_rtl_funz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}                 *BgL_rtl_insz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;


	static obj_t BGl_z62namez62zzsaw_rtlz00(obj_t, obj_t);
	static obj_t BGl_z62unlinkz12z70zzsaw_rtlz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_rtlz00();
	static obj_t BGl_methodzd2initzd2zzsaw_rtlz00();
	BGL_EXPORTED_DECL obj_t BGl_rtl_dfsz00zzsaw_rtlz00(BgL_blockz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_substz00zzsaw_libz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unlinkz12z12zzsaw_rtlz00(BgL_blockz00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_rtlz00();
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_namez00zzsaw_rtlz00(BgL_rtl_insz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_rtlz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_neighboursz00zzsaw_rtlz00(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62neighboursz62zzsaw_rtlz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_rtlz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_rtlz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzsaw_rtlz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_rtlz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_rtlz00();
	static obj_t BGl_z62rtl_dfsz62zzsaw_rtlz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_substzd2appendzd2zzsaw_libz00(obj_t, obj_t, obj_t);
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_namezd2envzd2zzsaw_rtlz00,
		BgL_bgl_za762nameza762za7za7saw_1822z00, BGl_z62namez62zzsaw_rtlz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1809z00zzsaw_rtlz00,
		BgL_bgl_string1809za700za7za7s1823za7, "must have only one successor", 28);
	      DEFINE_STRING(BGl_string1810z00zzsaw_rtlz00,
		BgL_bgl_string1810za700za7za7s1824za7, "saw_rtl", 7);
	      DEFINE_STRING(BGl_string1811z00zzsaw_rtlz00,
		BgL_bgl_string1811za700za7za7s1825za7, "unlink! (froms) -> (to) ", 24);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_neighbourszd2envzd2zzsaw_rtlz00,
		BgL_bgl_za762neighboursza7621826z00, BGl_z62neighboursz62zzsaw_rtlz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_dfszd2envzd2zzsaw_rtlz00,
		BgL_bgl_za762rtl_dfsza762za7za7s1827z00, BGl_z62rtl_dfsz62zzsaw_rtlz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unlinkz12zd2envzc0zzsaw_rtlz00,
		BgL_bgl_za762unlinkza712za770za71828z00, BGl_z62unlinkz12z70zzsaw_rtlz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_rtlz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_rtlz00(long
		BgL_checksumz00_2154, char *BgL_fromz00_2155)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_rtlz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_rtlz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_rtlz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_rtlz00();
					BGl_cnstzd2initzd2zzsaw_rtlz00();
					BGl_importedzd2moduleszd2initz00zzsaw_rtlz00();
					return BGl_methodzd2initzd2zzsaw_rtlz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_rtlz00()
	{
		{	/* SawMill/rtl.scm 1 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_rtl");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_rtl");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_rtl");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_rtl");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_rtl");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_rtl");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_rtl");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_rtl");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_rtlz00()
	{
		{	/* SawMill/rtl.scm 1 */
			{	/* SawMill/rtl.scm 1 */
				obj_t BgL_cportz00_2141;

				{	/* SawMill/rtl.scm 1 */
					obj_t BgL_stringz00_2149;

					BgL_stringz00_2149 = BGl_string1811z00zzsaw_rtlz00;
					{	/* SawMill/rtl.scm 1 */
						obj_t BgL_startz00_2150;

						BgL_startz00_2150 = BINT(((long) 0));
						{	/* SawMill/rtl.scm 1 */
							obj_t BgL_endz00_2151;

							BgL_endz00_2151 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2149)));
							{	/* SawMill/rtl.scm 1 */

								BgL_cportz00_2141 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2149, BgL_startz00_2150, BgL_endz00_2151);
				}}}}
				{
					long BgL_iz00_2142;

					BgL_iz00_2142 = ((long) 3);
				BgL_loopz00_2143:
					if ((BgL_iz00_2142 == ((long) -1)))
						{	/* SawMill/rtl.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/rtl.scm 1 */
							{	/* SawMill/rtl.scm 1 */
								obj_t BgL_arg1820z00_2145;

								{	/* SawMill/rtl.scm 1 */

									{	/* SawMill/rtl.scm 1 */
										obj_t BgL_locationz00_2147;

										BgL_locationz00_2147 = BBOOL(((bool_t) 0));
										{	/* SawMill/rtl.scm 1 */

											BgL_arg1820z00_2145 =
												BGl_readz00zz__readerz00(BgL_cportz00_2141,
												BgL_locationz00_2147);
										}
									}
								}
								{	/* SawMill/rtl.scm 1 */
									int BgL_tmpz00_2181;

									BgL_tmpz00_2181 = (int) (BgL_iz00_2142);
									CNST_TABLE_SET(BgL_tmpz00_2181, BgL_arg1820z00_2145);
							}}
							{	/* SawMill/rtl.scm 1 */
								int BgL_auxz00_2148;

								BgL_auxz00_2148 = (int) ((BgL_iz00_2142 - ((long) 1)));
								{
									long BgL_iz00_2186;

									BgL_iz00_2186 = (long) (BgL_auxz00_2148);
									BgL_iz00_2142 = BgL_iz00_2186;
									goto BgL_loopz00_2143;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_rtlz00()
	{
		{	/* SawMill/rtl.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* name */
	BGL_EXPORTED_DEF obj_t BGl_namez00zzsaw_rtlz00(BgL_rtl_insz00_bglt
		BgL_insz00_3)
	{
		{	/* SawMill/rtl.scm 21 */
			{	/* SawMill/rtl.scm 22 */
				obj_t BgL_arg1361z00_2088;

				{	/* SawMill/rtl.scm 22 */
					BgL_rtl_funz00_bglt BgL_arg1363z00_2089;

					BgL_arg1363z00_2089 =
						(((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_3))->BgL_funz00);
					{	/* SawMill/rtl.scm 22 */
						long BgL_arg1816z00_2092;

						{	/* SawMill/rtl.scm 22 */
							long BgL_arg1817z00_2093;

							{	/* SawMill/rtl.scm 22 */
								long BgL_res1799z00_2095;

								BgL_res1799z00_2095 =
									BGL_OBJECT_CLASS_NUM(
									((BgL_objectz00_bglt) BgL_arg1363z00_2089));
								BgL_arg1817z00_2093 = BgL_res1799z00_2095;
							}
							BgL_arg1816z00_2092 = (BgL_arg1817z00_2093 - OBJECT_TYPE);
						}
						BgL_arg1361z00_2088 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1816z00_2092);
				}}
				return BGl_classzd2namezd2zz__objectz00(BgL_arg1361z00_2088);
			}
		}

	}



/* &name */
	obj_t BGl_z62namez62zzsaw_rtlz00(obj_t BgL_envz00_2131, obj_t BgL_insz00_2132)
	{
		{	/* SawMill/rtl.scm 21 */
			return BGl_namez00zzsaw_rtlz00(((BgL_rtl_insz00_bglt) BgL_insz00_2132));
		}

	}



/* neighbours */
	BGL_EXPORTED_DEF obj_t BGl_neighboursz00zzsaw_rtlz00(BgL_rtl_insz00_bglt
		BgL_insz00_4)
	{
		{	/* SawMill/rtl.scm 27 */
			{	/* SawMill/rtl.scm 31 */
				obj_t BgL_arg1364z00_1752;

				{	/* SawMill/rtl.scm 31 */
					obj_t BgL_res1803z00_2115;

					{	/* SawMill/rtl.scm 22 */
						obj_t BgL_arg1361z00_2102;

						{	/* SawMill/rtl.scm 22 */
							BgL_rtl_funz00_bglt BgL_arg1363z00_2103;

							BgL_arg1363z00_2103 =
								(((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_4))->BgL_funz00);
							{	/* SawMill/rtl.scm 22 */
								long BgL_arg1816z00_2106;

								{	/* SawMill/rtl.scm 22 */
									long BgL_arg1817z00_2107;

									{	/* SawMill/rtl.scm 22 */
										long BgL_res1801z00_2109;

										BgL_res1801z00_2109 =
											BGL_OBJECT_CLASS_NUM(
											((BgL_objectz00_bglt) BgL_arg1363z00_2103));
										BgL_arg1817z00_2107 = BgL_res1801z00_2109;
									}
									BgL_arg1816z00_2106 = (BgL_arg1817z00_2107 - OBJECT_TYPE);
								}
								BgL_arg1361z00_2102 =
									VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
									BgL_arg1816z00_2106);
						}}
						BgL_res1803z00_2115 =
							BGl_classzd2namezd2zz__objectz00(BgL_arg1361z00_2102);
					}
					BgL_arg1364z00_1752 = BgL_res1803z00_2115;
				}
				{	/* SawMill/rtl.scm 29 */
					obj_t BgL_list1365z00_1753;

					{	/* SawMill/rtl.scm 29 */
						obj_t BgL_arg1367z00_1754;

						{	/* SawMill/rtl.scm 29 */
							obj_t BgL_arg1370z00_1755;

							{	/* SawMill/rtl.scm 29 */
								obj_t BgL_arg1371z00_1756;

								{	/* SawMill/rtl.scm 29 */
									obj_t BgL_arg1372z00_1757;

									BgL_arg1372z00_1757 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
									BgL_arg1371z00_1756 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
										BgL_arg1372z00_1757);
								}
								BgL_arg1370z00_1755 =
									MAKE_YOUNG_PAIR(BgL_arg1364z00_1752, BgL_arg1371z00_1756);
							}
							BgL_arg1367z00_1754 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
								BgL_arg1370z00_1755);
						}
						BgL_list1365z00_1753 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)), BgL_arg1367z00_1754);
					}
					return BgL_list1365z00_1753;
				}
			}
		}

	}



/* &neighbours */
	obj_t BGl_z62neighboursz62zzsaw_rtlz00(obj_t BgL_envz00_2133,
		obj_t BgL_insz00_2134)
	{
		{	/* SawMill/rtl.scm 27 */
			return
				BGl_neighboursz00zzsaw_rtlz00(((BgL_rtl_insz00_bglt) BgL_insz00_2134));
		}

	}



/* unlink! */
	BGL_EXPORTED_DEF obj_t BGl_unlinkz12z12zzsaw_rtlz00(BgL_blockz00_bglt
		BgL_bz00_5)
	{
		{	/* SawMill/rtl.scm 39 */
			{	/* SawMill/rtl.scm 41 */
				bool_t BgL_test1831z00_2214;

				if (NULLP((((BgL_blockz00_bglt) COBJECT(BgL_bz00_5))->BgL_succsz00)))
					{	/* SawMill/rtl.scm 41 */
						BgL_test1831z00_2214 = ((bool_t) 1);
					}
				else
					{	/* SawMill/rtl.scm 41 */
						obj_t BgL_tmpz00_2218;

						BgL_tmpz00_2218 =
							CDR((((BgL_blockz00_bglt) COBJECT(BgL_bz00_5))->BgL_succsz00));
						BgL_test1831z00_2214 = PAIRP(BgL_tmpz00_2218);
					}
				if (BgL_test1831z00_2214)
					{	/* SawMill/rtl.scm 41 */
						BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 3)),
							BGl_string1809z00zzsaw_rtlz00, ((obj_t) BgL_bz00_5));
					}
				else
					{	/* SawMill/rtl.scm 41 */
						BFALSE;
					}
			}
			{	/* SawMill/rtl.scm 43 */
				obj_t BgL_sz00_1769;

				BgL_sz00_1769 =
					CAR((((BgL_blockz00_bglt) COBJECT(BgL_bz00_5))->BgL_succsz00));
				{	/* SawMill/rtl.scm 44 */
					obj_t BgL_g1352z00_1770;

					BgL_g1352z00_1770 =
						(((BgL_blockz00_bglt) COBJECT(BgL_bz00_5))->BgL_predsz00);
					{
						obj_t BgL_l1350z00_1772;

						BgL_l1350z00_1772 = BgL_g1352z00_1770;
					BgL_zc3z04anonymousza31442ze3z87_1773:
						if (PAIRP(BgL_l1350z00_1772))
							{	/* SawMill/rtl.scm 44 */
								{	/* SawMill/rtl.scm 44 */
									obj_t BgL_pz00_1775;

									BgL_pz00_1775 = CAR(BgL_l1350z00_1772);
									{
										obj_t BgL_auxz00_2231;

										{	/* SawMill/rtl.scm 45 */
											obj_t BgL_arg1448z00_1777;

											BgL_arg1448z00_1777 =
												(((BgL_blockz00_bglt) COBJECT(
														((BgL_blockz00_bglt) BgL_pz00_1775)))->
												BgL_succsz00);
											BgL_auxz00_2231 =
												BGl_substz00zzsaw_libz00(BgL_arg1448z00_1777,
												((obj_t) BgL_bz00_5), BgL_sz00_1769);
										}
										((((BgL_blockz00_bglt) COBJECT(
														((BgL_blockz00_bglt) BgL_pz00_1775)))->
												BgL_succsz00) = ((obj_t) BgL_auxz00_2231), BUNSPEC);
									}
								}
								{
									obj_t BgL_l1350z00_2238;

									BgL_l1350z00_2238 = CDR(BgL_l1350z00_1772);
									BgL_l1350z00_1772 = BgL_l1350z00_2238;
									goto BgL_zc3z04anonymousza31442ze3z87_1773;
								}
							}
						else
							{	/* SawMill/rtl.scm 44 */
								((bool_t) 1);
							}
					}
				}
				{	/* SawMill/rtl.scm 47 */
					obj_t BgL_arg1461z00_1780;

					{	/* SawMill/rtl.scm 47 */
						obj_t BgL_arg1462z00_1781;
						obj_t BgL_arg1464z00_1782;

						BgL_arg1462z00_1781 =
							(((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_sz00_1769)))->BgL_predsz00);
						BgL_arg1464z00_1782 =
							(((BgL_blockz00_bglt) COBJECT(BgL_bz00_5))->BgL_predsz00);
						BgL_arg1461z00_1780 =
							BGl_substzd2appendzd2zzsaw_libz00(BgL_arg1462z00_1781,
							((obj_t) BgL_bz00_5), BgL_arg1464z00_1782);
					}
					return
						((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_sz00_1769)))->BgL_predsz00) =
						((obj_t) BgL_arg1461z00_1780), BUNSPEC);
				}
			}
		}

	}



/* &unlink! */
	obj_t BGl_z62unlinkz12z70zzsaw_rtlz00(obj_t BgL_envz00_2135,
		obj_t BgL_bz00_2136)
	{
		{	/* SawMill/rtl.scm 39 */
			return BGl_unlinkz12z12zzsaw_rtlz00(((BgL_blockz00_bglt) BgL_bz00_2136));
		}

	}



/* rtl_dfs */
	BGL_EXPORTED_DEF obj_t BGl_rtl_dfsz00zzsaw_rtlz00(BgL_blockz00_bglt
		BgL_bz00_7, obj_t BgL_visitz00_8, obj_t BgL_visitzf3zf3_9)
	{
		{	/* SawMill/rtl.scm 89 */
			PROCEDURE_ENTRY(BgL_visitz00_8) (BgL_visitz00_8,
				((obj_t) BgL_bz00_7), BEOA);
			{	/* SawMill/rtl.scm 91 */
				obj_t BgL_g1355z00_1788;

				BgL_g1355z00_1788 =
					(((BgL_blockz00_bglt) COBJECT(BgL_bz00_7))->BgL_succsz00);
				{
					obj_t BgL_l1353z00_1790;

					{	/* SawMill/rtl.scm 93 */
						bool_t BgL_tmpz00_2255;

						BgL_l1353z00_1790 = BgL_g1355z00_1788;
					BgL_zc3z04anonymousza31475ze3z87_1791:
						if (PAIRP(BgL_l1353z00_1790))
							{	/* SawMill/rtl.scm 93 */
								{	/* SawMill/rtl.scm 92 */
									obj_t BgL_succz00_1793;

									BgL_succz00_1793 = CAR(BgL_l1353z00_1790);
									if (CBOOL(PROCEDURE_ENTRY(BgL_visitzf3zf3_9)
											(BgL_visitzf3zf3_9, BgL_succz00_1793, BEOA)))
										{	/* SawMill/rtl.scm 92 */
											BFALSE;
										}
									else
										{	/* SawMill/rtl.scm 92 */
											BGl_rtl_dfsz00zzsaw_rtlz00(
												((BgL_blockz00_bglt) BgL_succz00_1793), BgL_visitz00_8,
												BgL_visitzf3zf3_9);
										}
								}
								{
									obj_t BgL_l1353z00_2267;

									BgL_l1353z00_2267 = CDR(BgL_l1353z00_1790);
									BgL_l1353z00_1790 = BgL_l1353z00_2267;
									goto BgL_zc3z04anonymousza31475ze3z87_1791;
								}
							}
						else
							{	/* SawMill/rtl.scm 93 */
								BgL_tmpz00_2255 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_2255);
					}
				}
			}
		}

	}



/* &rtl_dfs */
	obj_t BGl_z62rtl_dfsz62zzsaw_rtlz00(obj_t BgL_envz00_2137,
		obj_t BgL_bz00_2138, obj_t BgL_visitz00_2139, obj_t BgL_visitzf3zf3_2140)
	{
		{	/* SawMill/rtl.scm 89 */
			return
				BGl_rtl_dfsz00zzsaw_rtlz00(
				((BgL_blockz00_bglt) BgL_bz00_2138), BgL_visitz00_2139,
				BgL_visitzf3zf3_2140);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_rtlz00()
	{
		{	/* SawMill/rtl.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_rtlz00()
	{
		{	/* SawMill/rtl.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_rtlz00()
	{
		{	/* SawMill/rtl.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_rtlz00()
	{
		{	/* SawMill/rtl.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1810z00zzsaw_rtlz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1810z00zzsaw_rtlz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1810z00zzsaw_rtlz00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string1810z00zzsaw_rtlz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string1810z00zzsaw_rtlz00));
		}

	}

#ifdef __cplusplus
}
#endif
