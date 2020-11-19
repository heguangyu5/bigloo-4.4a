/*===========================================================================*/
/*   (SawMill/blockorder.scm)                                                */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/blockorder.scm) */
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

	typedef struct BgL_sawdonez00_bgl
	{
	}                 *BgL_sawdonez00_bglt;

	typedef struct BgL_sawrdonez00_bgl
	{
	}                  *BgL_sawrdonez00_bglt;

	typedef struct BgL_sawdfsz00_bgl
	{
		int BgL_nz00;
	}                *BgL_sawdfsz00_bglt;


	static obj_t BGl_z62lengthuncolsucczc3zd3zf3z81zzsaw_blockorderz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62blockzd2orderingzb0zzsaw_blockorderz00(obj_t, obj_t);
	static obj_t BGl_predecessorsz00zzsaw_blockorderz00(BgL_blockz00_bglt);
	static BgL_blockz00_bglt BGl_z62lambda1772z62zzsaw_blockorderz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1779z62zzsaw_blockorderz00(obj_t,
		obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1784z62zzsaw_blockorderz00(obj_t,
		obj_t);
	static obj_t BGl_findzd2exitzd2zzsaw_blockorderz00(BgL_blockz00_bglt);
	static obj_t BGl_objectzd2initzd2zzsaw_blockorderz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_za2blockorderingza2z00zzsaw_blockorderz00 = BUNSPEC;
	static obj_t BGl_appendzd221011zd2zzsaw_blockorderz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_blockorderz00();
	static obj_t BGl_SawDonez00zzsaw_blockorderz00 = BUNSPEC;
	static obj_t BGl_SawDfsz00zzsaw_blockorderz00 = BUNSPEC;
	static long BGl_lengthuncolsuccz00zzsaw_blockorderz00(BgL_blockz00_bglt);
	BGL_IMPORT long bgl_list_length(obj_t);
	static bool_t BGl_dfsze70ze7zzsaw_blockorderz00(obj_t, obj_t, obj_t, obj_t);
	static bool_t BGl_dfsze71ze7zzsaw_blockorderz00(obj_t, obj_t);
	static bool_t BGl_dfsze72ze7zzsaw_blockorderz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_blockorderz00();
	static obj_t BGl_dfszd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt);
	static BgL_blockz00_bglt BGl_z62lambda1822z62zzsaw_blockorderz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1825z62zzsaw_blockorderz00(obj_t,
		obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1828z62zzsaw_blockorderz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1836z62zzsaw_blockorderz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1837z62zzsaw_blockorderz00(obj_t, obj_t, obj_t);
	static bool_t BGl_visitze70ze7zzsaw_blockorderz00(obj_t, BgL_blockz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31748ze3ze5zzsaw_blockorderz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_blockorderz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31783ze3ze5zzsaw_blockorderz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_toplevelzd2initzd2zzsaw_blockorderz00();
	BGL_EXPORTED_DECL obj_t
		BGl_blockzd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt);
	static obj_t BGl_genericzd2initzd2zzsaw_blockorderz00();
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_SawRdonez00zzsaw_blockorderz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_lastz00zzsaw_defsz00;
	extern obj_t BGl_rtl_returnz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_blockorderz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzsaw_blockorderz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_blockorderz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_blockorderz00();
	static obj_t BGl_rdfszd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1743z62zzsaw_blockorderz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1746z62zzsaw_blockorderz00(obj_t,
		obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1749z62zzsaw_blockorderz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31827ze3ze5zzsaw_blockorderz00(obj_t,
		obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockzd2orderingzd2envz00zzsaw_blockorderz00,
		BgL_bgl_za762blockza7d2order2027z00,
		BGl_z62blockzd2orderingzb0zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_lengthuncolsucczc3zd3zf3zd2envz31zzsaw_blockorderz00,
		BgL_bgl_za762lengthuncolsu2028za7,
		BGl_z62lengthuncolsucczc3zd3zf3z81zzsaw_blockorderz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2019z00zzsaw_blockorderz00,
		BgL_bgl_string2019za700za7za7s2029za7, "saw_blockorder", 14);
	      DEFINE_STRING(BGl_string2020z00zzsaw_blockorderz00,
		BgL_bgl_string2020za700za7za7s2030za7,
		"SawDfs int n SawRdone saw_blockorder SawDone reverse-dfs ", 57);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2005z00zzsaw_blockorderz00,
		BgL_bgl_za762lambda1749za7622031z00,
		BGl_z62lambda1749z62zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2006z00zzsaw_blockorderz00,
		BgL_bgl_za762za7c3za704anonymo2032za7,
		BGl_z62zc3z04anonymousza31748ze3ze5zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2007z00zzsaw_blockorderz00,
		BgL_bgl_za762lambda1746za7622033z00,
		BGl_z62lambda1746z62zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2008z00zzsaw_blockorderz00,
		BgL_bgl_za762lambda1743za7622034z00,
		BGl_z62lambda1743z62zzsaw_blockorderz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2009z00zzsaw_blockorderz00,
		BgL_bgl_za762lambda1784za7622035z00,
		BGl_z62lambda1784z62zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2010z00zzsaw_blockorderz00,
		BgL_bgl_za762za7c3za704anonymo2036za7,
		BGl_z62zc3z04anonymousza31783ze3ze5zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2011z00zzsaw_blockorderz00,
		BgL_bgl_za762lambda1779za7622037z00,
		BGl_z62lambda1779z62zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2012z00zzsaw_blockorderz00,
		BgL_bgl_za762lambda1772za7622038z00,
		BGl_z62lambda1772z62zzsaw_blockorderz00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2013z00zzsaw_blockorderz00,
		BgL_bgl_za762lambda1837za7622039z00,
		BGl_z62lambda1837z62zzsaw_blockorderz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2014z00zzsaw_blockorderz00,
		BgL_bgl_za762lambda1836za7622040z00,
		BGl_z62lambda1836z62zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2015z00zzsaw_blockorderz00,
		BgL_bgl_za762lambda1828za7622041z00,
		BGl_z62lambda1828z62zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2016z00zzsaw_blockorderz00,
		BgL_bgl_za762za7c3za704anonymo2042za7,
		BGl_z62zc3z04anonymousza31827ze3ze5zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2017z00zzsaw_blockorderz00,
		BgL_bgl_za762lambda1825za7622043z00,
		BGl_z62lambda1825z62zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2018z00zzsaw_blockorderz00,
		BgL_bgl_za762lambda1822za7622044z00,
		BGl_z62lambda1822z62zzsaw_blockorderz00, 0L, BUNSPEC, 5);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2blockorderingza2z00zzsaw_blockorderz00));
		     ADD_ROOT((void *) (&BGl_SawDonez00zzsaw_blockorderz00));
		     ADD_ROOT((void *) (&BGl_SawDfsz00zzsaw_blockorderz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_blockorderz00));
		     ADD_ROOT((void *) (&BGl_SawRdonez00zzsaw_blockorderz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_blockorderz00(long
		BgL_checksumz00_2897, char *BgL_fromz00_2898)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_blockorderz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_blockorderz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_blockorderz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_blockorderz00();
					BGl_cnstzd2initzd2zzsaw_blockorderz00();
					BGl_importedzd2moduleszd2initz00zzsaw_blockorderz00();
					BGl_objectzd2initzd2zzsaw_blockorderz00();
					return BGl_toplevelzd2initzd2zzsaw_blockorderz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_blockorderz00()
	{
		{	/* SawMill/blockorder.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_blockorder");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_blockorder");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_blockorder");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_blockorder");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_blockorder");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_blockorder");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_blockorder");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"saw_blockorder");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_blockorderz00()
	{
		{	/* SawMill/blockorder.scm 1 */
			{	/* SawMill/blockorder.scm 1 */
				obj_t BgL_cportz00_2781;

				{	/* SawMill/blockorder.scm 1 */
					obj_t BgL_stringz00_2789;

					BgL_stringz00_2789 = BGl_string2020z00zzsaw_blockorderz00;
					{	/* SawMill/blockorder.scm 1 */
						obj_t BgL_startz00_2790;

						BgL_startz00_2790 = BINT(((long) 0));
						{	/* SawMill/blockorder.scm 1 */
							obj_t BgL_endz00_2791;

							BgL_endz00_2791 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2789)));
							{	/* SawMill/blockorder.scm 1 */

								BgL_cportz00_2781 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2789, BgL_startz00_2790, BgL_endz00_2791);
				}}}}
				{
					long BgL_iz00_2782;

					BgL_iz00_2782 = ((long) 6);
				BgL_loopz00_2783:
					if ((BgL_iz00_2782 == ((long) -1)))
						{	/* SawMill/blockorder.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/blockorder.scm 1 */
							{	/* SawMill/blockorder.scm 1 */
								obj_t BgL_arg2022z00_2785;

								{	/* SawMill/blockorder.scm 1 */

									{	/* SawMill/blockorder.scm 1 */
										obj_t BgL_locationz00_2787;

										BgL_locationz00_2787 = BBOOL(((bool_t) 0));
										{	/* SawMill/blockorder.scm 1 */

											BgL_arg2022z00_2785 =
												BGl_readz00zz__readerz00(BgL_cportz00_2781,
												BgL_locationz00_2787);
										}
									}
								}
								{	/* SawMill/blockorder.scm 1 */
									int BgL_tmpz00_2925;

									BgL_tmpz00_2925 = (int) (BgL_iz00_2782);
									CNST_TABLE_SET(BgL_tmpz00_2925, BgL_arg2022z00_2785);
							}}
							{	/* SawMill/blockorder.scm 1 */
								int BgL_auxz00_2788;

								BgL_auxz00_2788 = (int) ((BgL_iz00_2782 - ((long) 1)));
								{
									long BgL_iz00_2930;

									BgL_iz00_2930 = (long) (BgL_auxz00_2788);
									BgL_iz00_2782 = BgL_iz00_2930;
									goto BgL_loopz00_2783;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_blockorderz00()
	{
		{	/* SawMill/blockorder.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_blockorderz00()
	{
		{	/* SawMill/blockorder.scm 1 */
			return (BGl_za2blockorderingza2z00zzsaw_blockorderz00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzsaw_blockorderz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1799;

				BgL_headz00_1799 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1800;
					obj_t BgL_tailz00_1801;

					BgL_prevz00_1800 = BgL_headz00_1799;
					BgL_tailz00_1801 = BgL_l1z00_1;
				BgL_loopz00_1802:
					if (PAIRP(BgL_tailz00_1801))
						{
							obj_t BgL_newzd2prevzd2_1804;

							BgL_newzd2prevzd2_1804 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1801), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1800, BgL_newzd2prevzd2_1804);
							{
								obj_t BgL_tailz00_2941;
								obj_t BgL_prevz00_2940;

								BgL_prevz00_2940 = BgL_newzd2prevzd2_1804;
								BgL_tailz00_2941 = CDR(BgL_tailz00_1801);
								BgL_tailz00_1801 = BgL_tailz00_2941;
								BgL_prevz00_1800 = BgL_prevz00_2940;
								goto BgL_loopz00_1802;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1799);
				}
			}
		}

	}



/* block-ordering */
	BGL_EXPORTED_DEF obj_t
		BGl_blockzd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_58)
	{
		{	/* SawMill/blockorder.scm 12 */
			{	/* SawMill/blockorder.scm 13 */
				obj_t BgL_casezd2valuezd2_1851;

				BgL_casezd2valuezd2_1851 = CNST_TABLE_REF(((long) 0));
				if ((BgL_casezd2valuezd2_1851 == CNST_TABLE_REF(((long) 0))))
					{	/* SawMill/blockorder.scm 13 */
						return BGl_rdfszd2orderingzd2zzsaw_blockorderz00(BgL_bz00_58);
					}
				else
					{	/* SawMill/blockorder.scm 13 */
						return BGl_dfszd2orderingzd2zzsaw_blockorderz00(BgL_bz00_58);
					}
			}
		}

	}



/* &block-ordering */
	obj_t BGl_z62blockzd2orderingzb0zzsaw_blockorderz00(obj_t BgL_envz00_2701,
		obj_t BgL_bz00_2702)
	{
		{	/* SawMill/blockorder.scm 12 */
			return
				BGl_blockzd2orderingzd2zzsaw_blockorderz00(
				((BgL_blockz00_bglt) BgL_bz00_2702));
		}

	}



/* dfs-ordering */
	obj_t BGl_dfszd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_59)
	{
		{	/* SawMill/blockorder.scm 20 */
			{	/* SawMill/blockorder.scm 21 */
				struct bgl_cell BgL_box2049_2779z00;
				obj_t BgL_rz00_2779;

				BgL_rz00_2779 = MAKE_CELL_STACK(BNIL, BgL_box2049_2779z00);
				BGl_dfsze72ze7zzsaw_blockorderz00(BgL_rz00_2779, ((obj_t) BgL_bz00_59));
				return bgl_reverse_bang(CELL_REF(BgL_rz00_2779));
			}
		}

	}



/* dfs~2 */
	bool_t BGl_dfsze72ze7zzsaw_blockorderz00(obj_t BgL_rz00_2777,
		obj_t BgL_bz00_1855)
	{
		{	/* SawMill/blockorder.scm 22 */
			{	/* SawMill/blockorder.scm 23 */
				BgL_sawdonez00_bglt BgL_wide1215z00_1859;

				BgL_wide1215z00_1859 =
					((BgL_sawdonez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sawdonez00_bgl))));
				{	/* SawMill/blockorder.scm 23 */
					obj_t BgL_auxz00_2960;
					BgL_objectz00_bglt BgL_tmpz00_2956;

					BgL_auxz00_2960 = ((obj_t) BgL_wide1215z00_1859);
					BgL_tmpz00_2956 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1855)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2956, BgL_auxz00_2960);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1855)));
				{	/* SawMill/blockorder.scm 23 */
					long BgL_arg1540z00_1860;

					{	/* SawMill/blockorder.scm 23 */
						long BgL_res1955z00_2510;

						BgL_res1955z00_2510 =
							BGL_CLASS_INDEX(BGl_SawDonez00zzsaw_blockorderz00);
						BgL_arg1540z00_1860 = BgL_res1955z00_2510;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_bz00_1855))), BgL_arg1540z00_1860);
				}
				((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1855)));
			}
			((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1855));
			{	/* SawMill/blockorder.scm 24 */
				obj_t BgL_auxz00_2778;

				BgL_auxz00_2778 =
					MAKE_YOUNG_PAIR(BgL_bz00_1855, CELL_REF(BgL_rz00_2777));
				CELL_SET(BgL_rz00_2777, BgL_auxz00_2778);
			}
			{	/* SawMill/blockorder.scm 25 */
				obj_t BgL_g1455z00_1862;

				BgL_g1455z00_1862 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_bz00_1855)))->BgL_succsz00);
				{
					obj_t BgL_l1453z00_1864;

					BgL_l1453z00_1864 = BgL_g1455z00_1862;
				BgL_zc3z04anonymousza31541ze3z87_1865:
					if (PAIRP(BgL_l1453z00_1864))
						{	/* SawMill/blockorder.scm 26 */
							{	/* SawMill/blockorder.scm 25 */
								obj_t BgL_sz00_1867;

								BgL_sz00_1867 = CAR(BgL_l1453z00_1864);
								if (BGl_isazf3zf3zz__objectz00(BgL_sz00_1867,
										BGl_SawDonez00zzsaw_blockorderz00))
									{	/* SawMill/blockorder.scm 25 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/blockorder.scm 25 */
										BGl_dfsze72ze7zzsaw_blockorderz00(BgL_rz00_2777,
											BgL_sz00_1867);
									}
							}
							{
								obj_t BgL_l1453z00_2985;

								BgL_l1453z00_2985 = CDR(BgL_l1453z00_1864);
								BgL_l1453z00_1864 = BgL_l1453z00_2985;
								goto BgL_zc3z04anonymousza31541ze3z87_1865;
							}
						}
					else
						{	/* SawMill/blockorder.scm 26 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* rdfs-ordering */
	obj_t BGl_rdfszd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_60)
	{
		{	/* SawMill/blockorder.scm 33 */
			{	/* SawMill/blockorder.scm 34 */
				struct bgl_cell BgL_box2052_2775z00;
				obj_t BgL_rz00_2775;

				BgL_rz00_2775 = MAKE_CELL_STACK(BNIL, BgL_box2052_2775z00);
				{	/* SawMill/blockorder.scm 42 */
					obj_t BgL_g1461z00_1874;

					BgL_g1461z00_1874 =
						BGl_findzd2exitzd2zzsaw_blockorderz00(BgL_bz00_60);
					{
						obj_t BgL_l1459z00_1876;

						BgL_l1459z00_1876 = BgL_g1461z00_1874;
					BgL_zc3z04anonymousza31553ze3z87_1877:
						if (PAIRP(BgL_l1459z00_1876))
							{	/* SawMill/blockorder.scm 42 */
								{	/* SawMill/blockorder.scm 42 */
									obj_t BgL_sz00_1879;

									BgL_sz00_1879 = CAR(BgL_l1459z00_1876);
									if (BGl_isazf3zf3zz__objectz00(BgL_sz00_1879,
											BGl_SawRdonez00zzsaw_blockorderz00))
										{	/* SawMill/blockorder.scm 42 */
											((bool_t) 0);
										}
									else
										{	/* SawMill/blockorder.scm 42 */
											BGl_visitze70ze7zzsaw_blockorderz00(BgL_rz00_2775,
												((BgL_blockz00_bglt) BgL_sz00_1879));
										}
								}
								{
									obj_t BgL_l1459z00_2995;

									BgL_l1459z00_2995 = CDR(BgL_l1459z00_1876);
									BgL_l1459z00_1876 = BgL_l1459z00_2995;
									goto BgL_zc3z04anonymousza31553ze3z87_1877;
								}
							}
						else
							{	/* SawMill/blockorder.scm 42 */
								((bool_t) 1);
							}
					}
				}
				BGl_dfsze71ze7zzsaw_blockorderz00(BgL_rz00_2775, ((obj_t) BgL_bz00_60));
				{
					obj_t BgL_lz00_1905;
					obj_t BgL_prevz00_1906;
					obj_t BgL_lastfailz00_1907;

					BgL_lz00_1905 = CELL_REF(BgL_rz00_2775);
					BgL_prevz00_1906 = BNIL;
					BgL_lastfailz00_1907 = BNIL;
				BgL_zc3z04anonymousza31566ze3z87_1908:
					{	/* SawMill/blockorder.scm 50 */
						obj_t BgL_xz00_1909;

						BgL_xz00_1909 = CAR(((obj_t) BgL_lz00_1905));
						if ((BgL_xz00_1909 == ((obj_t) BgL_bz00_60)))
							{	/* SawMill/blockorder.scm 51 */
								if (NULLP(BgL_prevz00_1906))
									{	/* SawMill/blockorder.scm 52 */
										BFALSE;
									}
								else
									{	/* SawMill/blockorder.scm 53 */
										obj_t BgL_endz00_1912;

										BgL_endz00_1912 =
											BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
											(BgL_lz00_1905);
										{	/* SawMill/blockorder.scm 54 */
											bool_t BgL_test2057z00_3007;

											if (NULLP(BgL_lastfailz00_1907))
												{	/* SawMill/blockorder.scm 54 */
													BgL_test2057z00_3007 = ((bool_t) 1);
												}
											else
												{	/* SawMill/blockorder.scm 54 */
													BgL_test2057z00_3007 =
														(BgL_prevz00_1906 == BgL_lastfailz00_1907);
												}
											if (BgL_test2057z00_3007)
												{	/* SawMill/blockorder.scm 54 */
													{	/* SawMill/blockorder.scm 55 */
														obj_t BgL_objz00_2546;

														BgL_objz00_2546 = CELL_REF(BgL_rz00_2775);
														SET_CDR(BgL_endz00_1912, BgL_objz00_2546);
													}
													{	/* SawMill/blockorder.scm 56 */
														obj_t BgL_tmpz00_3012;

														BgL_tmpz00_3012 = ((obj_t) BgL_prevz00_1906);
														SET_CDR(BgL_tmpz00_3012, BNIL);
													}
												}
											else
												{	/* SawMill/blockorder.scm 54 */
													{	/* SawMill/blockorder.scm 57 */
														obj_t BgL_arg1573z00_1915;

														BgL_arg1573z00_1915 =
															CDR(((obj_t) BgL_lastfailz00_1907));
														SET_CDR(BgL_endz00_1912, BgL_arg1573z00_1915);
													}
													{	/* SawMill/blockorder.scm 58 */
														obj_t BgL_objz00_2551;

														BgL_objz00_2551 = CELL_REF(BgL_rz00_2775);
														{	/* SawMill/blockorder.scm 58 */
															obj_t BgL_tmpz00_3018;

															BgL_tmpz00_3018 = ((obj_t) BgL_prevz00_1906);
															SET_CDR(BgL_tmpz00_3018, BgL_objz00_2551);
														}
													}
													{	/* SawMill/blockorder.scm 59 */
														obj_t BgL_tmpz00_3021;

														BgL_tmpz00_3021 = ((obj_t) BgL_lastfailz00_1907);
														SET_CDR(BgL_tmpz00_3021, BNIL);
													}
												}
										}
									}
								return BgL_lz00_1905;
							}
						else
							{	/* SawMill/blockorder.scm 61 */
								BgL_rtl_funz00_bglt BgL_funz00_1917;

								BgL_funz00_1917 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt)
												CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
														(((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt) BgL_xz00_1909)))->
															BgL_firstz00))))))->BgL_funz00);
								{	/* SawMill/blockorder.scm 62 */
									bool_t BgL_test2059z00_3030;

									{	/* SawMill/blockorder.scm 62 */
										bool_t BgL_test2060z00_3031;

										{	/* SawMill/blockorder.scm 62 */
											bool_t BgL_res1971z00_2556;

											BgL_res1971z00_2556 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_funz00_1917),
												BGl_rtl_lastz00zzsaw_defsz00);
											BgL_test2060z00_3031 = BgL_res1971z00_2556;
										}
										if (BgL_test2060z00_3031)
											{	/* SawMill/blockorder.scm 62 */
												bool_t BgL_res1972z00_2557;

												BgL_res1972z00_2557 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_funz00_1917),
													BGl_rtl_returnz00zzsaw_defsz00);
												BgL_test2059z00_3030 = BgL_res1972z00_2557;
											}
										else
											{	/* SawMill/blockorder.scm 62 */
												BgL_test2059z00_3030 = ((bool_t) 1);
											}
									}
									if (BgL_test2059z00_3030)
										{	/* SawMill/blockorder.scm 63 */
											obj_t BgL_arg1578z00_1920;

											BgL_arg1578z00_1920 = CDR(((obj_t) BgL_lz00_1905));
											{
												obj_t BgL_prevz00_3039;
												obj_t BgL_lz00_3038;

												BgL_lz00_3038 = BgL_arg1578z00_1920;
												BgL_prevz00_3039 = BgL_lz00_1905;
												BgL_prevz00_1906 = BgL_prevz00_3039;
												BgL_lz00_1905 = BgL_lz00_3038;
												goto BgL_zc3z04anonymousza31566ze3z87_1908;
											}
										}
									else
										{	/* SawMill/blockorder.scm 64 */
											obj_t BgL_arg1582z00_1921;

											BgL_arg1582z00_1921 = CDR(((obj_t) BgL_lz00_1905));
											{
												obj_t BgL_lastfailz00_3044;
												obj_t BgL_prevz00_3043;
												obj_t BgL_lz00_3042;

												BgL_lz00_3042 = BgL_arg1582z00_1921;
												BgL_prevz00_3043 = BgL_lz00_1905;
												BgL_lastfailz00_3044 = BgL_lz00_1905;
												BgL_lastfailz00_1907 = BgL_lastfailz00_3044;
												BgL_prevz00_1906 = BgL_prevz00_3043;
												BgL_lz00_1905 = BgL_lz00_3042;
												goto BgL_zc3z04anonymousza31566ze3z87_1908;
											}
										}
								}
							}
					}
				}
			}
		}

	}



/* visit~0 */
	bool_t BGl_visitze70ze7zzsaw_blockorderz00(obj_t BgL_rz00_2771,
		BgL_blockz00_bglt BgL_bz00_1927)
	{
		{	/* SawMill/blockorder.scm 36 */
			{	/* SawMill/blockorder.scm 36 */
				BgL_sawrdonez00_bglt BgL_wide1219z00_1931;

				BgL_wide1219z00_1931 =
					((BgL_sawrdonez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sawrdonez00_bgl))));
				{	/* SawMill/blockorder.scm 36 */
					obj_t BgL_auxz00_3049;
					BgL_objectz00_bglt BgL_tmpz00_3046;

					BgL_auxz00_3049 = ((obj_t) BgL_wide1219z00_1931);
					BgL_tmpz00_3046 =
						((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1927));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3046, BgL_auxz00_3049);
				}
				((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1927));
				{	/* SawMill/blockorder.scm 36 */
					long BgL_arg1592z00_1932;

					{	/* SawMill/blockorder.scm 36 */
						long BgL_res1958z00_2520;

						BgL_res1958z00_2520 =
							BGL_CLASS_INDEX(BGl_SawRdonez00zzsaw_blockorderz00);
						BgL_arg1592z00_1932 = BgL_res1958z00_2520;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt) BgL_bz00_1927)), BgL_arg1592z00_1932);
				}
				((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1927));
			}
			((BgL_blockz00_bglt) BgL_bz00_1927);
			{	/* SawMill/blockorder.scm 37 */
				obj_t BgL_auxz00_2772;

				BgL_auxz00_2772 =
					MAKE_YOUNG_PAIR(((obj_t) BgL_bz00_1927), CELL_REF(BgL_rz00_2771));
				CELL_SET(BgL_rz00_2771, BgL_auxz00_2772);
			}
			{	/* SawMill/blockorder.scm 39 */
				obj_t BgL_g1458z00_1934;

				BgL_g1458z00_1934 =
					BGl_predecessorsz00zzsaw_blockorderz00(BgL_bz00_1927);
				{
					obj_t BgL_l1456z00_1936;

					BgL_l1456z00_1936 = BgL_g1458z00_1934;
				BgL_zc3z04anonymousza31593ze3z87_1937:
					if (PAIRP(BgL_l1456z00_1936))
						{	/* SawMill/blockorder.scm 40 */
							{	/* SawMill/blockorder.scm 39 */
								obj_t BgL_sz00_1939;

								BgL_sz00_1939 = CAR(BgL_l1456z00_1936);
								if (BGl_isazf3zf3zz__objectz00(BgL_sz00_1939,
										BGl_SawRdonez00zzsaw_blockorderz00))
									{	/* SawMill/blockorder.scm 39 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/blockorder.scm 39 */
										BGl_visitze70ze7zzsaw_blockorderz00(BgL_rz00_2771,
											((BgL_blockz00_bglt) BgL_sz00_1939));
									}
							}
							{
								obj_t BgL_l1456z00_3071;

								BgL_l1456z00_3071 = CDR(BgL_l1456z00_1936);
								BgL_l1456z00_1936 = BgL_l1456z00_3071;
								goto BgL_zc3z04anonymousza31593ze3z87_1937;
							}
						}
					else
						{	/* SawMill/blockorder.scm 40 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* dfs~1 */
	bool_t BGl_dfsze71ze7zzsaw_blockorderz00(obj_t BgL_rz00_2773,
		obj_t BgL_bz00_1884)
	{
		{	/* SawMill/blockorder.scm 44 */
			if (BGl_isazf3zf3zz__objectz00(BgL_bz00_1884,
					BGl_SawRdonez00zzsaw_blockorderz00))
				{	/* SawMill/blockorder.scm 45 */
					BFALSE;
				}
			else
				{	/* SawMill/blockorder.scm 45 */
					obj_t BgL_auxz00_2774;

					BgL_auxz00_2774 =
						MAKE_YOUNG_PAIR(BgL_bz00_1884, CELL_REF(BgL_rz00_2773));
					CELL_SET(BgL_rz00_2773, BgL_auxz00_2774);
				}
			{	/* SawMill/blockorder.scm 46 */
				BgL_sawdonez00_bglt BgL_wide1223z00_1889;

				BgL_wide1223z00_1889 =
					((BgL_sawdonez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sawdonez00_bgl))));
				{	/* SawMill/blockorder.scm 46 */
					obj_t BgL_auxz00_3081;
					BgL_objectz00_bglt BgL_tmpz00_3077;

					BgL_auxz00_3081 = ((obj_t) BgL_wide1223z00_1889);
					BgL_tmpz00_3077 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1884)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3077, BgL_auxz00_3081);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1884)));
				{	/* SawMill/blockorder.scm 46 */
					long BgL_arg1561z00_1890;

					{	/* SawMill/blockorder.scm 46 */
						long BgL_res1964z00_2534;

						BgL_res1964z00_2534 =
							BGL_CLASS_INDEX(BGl_SawDonez00zzsaw_blockorderz00);
						BgL_arg1561z00_1890 = BgL_res1964z00_2534;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_bz00_1884))), BgL_arg1561z00_1890);
				}
				((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1884)));
			}
			((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1884));
			{	/* SawMill/blockorder.scm 47 */
				obj_t BgL_g1464z00_1892;

				BgL_g1464z00_1892 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_bz00_1884)))->BgL_succsz00);
				{
					obj_t BgL_l1462z00_1894;

					BgL_l1462z00_1894 = BgL_g1464z00_1892;
				BgL_zc3z04anonymousza31562ze3z87_1895:
					if (PAIRP(BgL_l1462z00_1894))
						{	/* SawMill/blockorder.scm 47 */
							{	/* SawMill/blockorder.scm 47 */
								obj_t BgL_sz00_1897;

								BgL_sz00_1897 = CAR(BgL_l1462z00_1894);
								if (BGl_isazf3zf3zz__objectz00(BgL_sz00_1897,
										BGl_SawDonez00zzsaw_blockorderz00))
									{	/* SawMill/blockorder.scm 47 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/blockorder.scm 47 */
										BGl_dfsze71ze7zzsaw_blockorderz00(BgL_rz00_2773,
											BgL_sz00_1897);
									}
							}
							{
								obj_t BgL_l1462z00_3105;

								BgL_l1462z00_3105 = CDR(BgL_l1462z00_1894);
								BgL_l1462z00_1894 = BgL_l1462z00_3105;
								goto BgL_zc3z04anonymousza31562ze3z87_1895;
							}
						}
					else
						{	/* SawMill/blockorder.scm 47 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* find-exit */
	obj_t BGl_findzd2exitzd2zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_61)
	{
		{	/* SawMill/blockorder.scm 73 */
			{	/* SawMill/blockorder.scm 74 */
				struct bgl_cell BgL_box2066_2765z00;
				struct bgl_cell BgL_box2067_2766z00;
				struct bgl_cell BgL_box2068_2767z00;
				obj_t BgL_retsz00_2765;
				obj_t BgL_failsz00_2766;
				obj_t BgL_nz00_2767;

				BgL_retsz00_2765 = MAKE_CELL_STACK(BNIL, BgL_box2066_2765z00);
				BgL_failsz00_2766 = MAKE_CELL_STACK(BNIL, BgL_box2067_2766z00);
				BgL_nz00_2767 = MAKE_CELL_STACK(BINT(((long) 0)), BgL_box2068_2767z00);
				BGl_dfsze70ze7zzsaw_blockorderz00(BgL_retsz00_2765, BgL_failsz00_2766,
					BgL_nz00_2767, ((obj_t) BgL_bz00_61));
				return
					BGl_appendzd221011zd2zzsaw_blockorderz00(CELL_REF(BgL_retsz00_2765),
					CELL_REF(BgL_failsz00_2766));
			}
		}

	}



/* dfs~0 */
	bool_t BGl_dfsze70ze7zzsaw_blockorderz00(obj_t BgL_retsz00_2761,
		obj_t BgL_failsz00_2760, obj_t BgL_nz00_2759, obj_t BgL_bz00_1948)
	{
		{	/* SawMill/blockorder.scm 75 */
			{	/* SawMill/blockorder.scm 76 */
				BgL_sawdfsz00_bglt BgL_wide1229z00_1952;

				BgL_wide1229z00_1952 =
					((BgL_sawdfsz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sawdfsz00_bgl))));
				{	/* SawMill/blockorder.scm 76 */
					obj_t BgL_auxz00_3116;
					BgL_objectz00_bglt BgL_tmpz00_3112;

					BgL_auxz00_3116 = ((obj_t) BgL_wide1229z00_1952);
					BgL_tmpz00_3112 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1948)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3112, BgL_auxz00_3116);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1948)));
				{	/* SawMill/blockorder.scm 76 */
					long BgL_arg1599z00_1953;

					{	/* SawMill/blockorder.scm 76 */
						long BgL_res1973z00_2562;

						BgL_res1973z00_2562 =
							BGL_CLASS_INDEX(BGl_SawDfsz00zzsaw_blockorderz00);
						BgL_arg1599z00_1953 = BgL_res1973z00_2562;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_bz00_1948))), BgL_arg1599z00_1953);
				}
				((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1948)));
			}
			{
				BgL_sawdfsz00_bglt BgL_auxz00_3130;

				{
					obj_t BgL_auxz00_3131;

					{	/* SawMill/blockorder.scm 76 */
						BgL_objectz00_bglt BgL_tmpz00_3132;

						BgL_tmpz00_3132 =
							((BgL_objectz00_bglt)
							((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1948)));
						BgL_auxz00_3131 = BGL_OBJECT_WIDENING(BgL_tmpz00_3132);
					}
					BgL_auxz00_3130 = ((BgL_sawdfsz00_bglt) BgL_auxz00_3131);
				}
				((((BgL_sawdfsz00_bglt) COBJECT(BgL_auxz00_3130))->BgL_nz00) = ((int)
						CINT(CELL_REF(BgL_nz00_2759))), BUNSPEC);
			}
			((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1948));
			{	/* SawMill/blockorder.scm 77 */
				obj_t BgL_auxz00_2762;

				BgL_auxz00_2762 = ADDFX(CELL_REF(BgL_nz00_2759), BINT(((long) 1)));
				CELL_SET(BgL_nz00_2759, BgL_auxz00_2762);
			}
			{	/* SawMill/blockorder.scm 80 */
				BgL_rtl_funz00_bglt BgL_funz00_1955;

				BgL_funz00_1955 =
					(((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt)
								CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
										(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_bz00_1948)))->
											BgL_firstz00))))))->BgL_funz00);
				{	/* SawMill/blockorder.scm 81 */
					bool_t BgL_test2069z00_3150;

					{	/* SawMill/blockorder.scm 81 */
						bool_t BgL_res1975z00_2571;

						BgL_res1975z00_2571 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_funz00_1955), BGl_rtl_lastz00zzsaw_defsz00);
						BgL_test2069z00_3150 = BgL_res1975z00_2571;
					}
					if (BgL_test2069z00_3150)
						{	/* SawMill/blockorder.scm 82 */
							bool_t BgL_test2070z00_3153;

							{	/* SawMill/blockorder.scm 82 */
								bool_t BgL_res1976z00_2572;

								BgL_res1976z00_2572 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_funz00_1955), BGl_rtl_returnz00zzsaw_defsz00);
								BgL_test2070z00_3153 = BgL_res1976z00_2572;
							}
							if (BgL_test2070z00_3153)
								{	/* SawMill/blockorder.scm 83 */
									obj_t BgL_auxz00_2763;

									BgL_auxz00_2763 =
										MAKE_YOUNG_PAIR(BgL_bz00_1948, CELL_REF(BgL_retsz00_2761));
									CELL_SET(BgL_retsz00_2761, BgL_auxz00_2763);
								}
							else
								{	/* SawMill/blockorder.scm 84 */
									obj_t BgL_auxz00_2764;

									BgL_auxz00_2764 =
										MAKE_YOUNG_PAIR(BgL_bz00_1948, CELL_REF(BgL_failsz00_2760));
									CELL_SET(BgL_failsz00_2760, BgL_auxz00_2764);
								}
						}
					else
						{	/* SawMill/blockorder.scm 81 */
							BFALSE;
						}
				}
			}
			{	/* SawMill/blockorder.scm 85 */
				obj_t BgL_g1467z00_1961;

				BgL_g1467z00_1961 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_bz00_1948)))->BgL_succsz00);
				{
					obj_t BgL_l1465z00_1963;

					BgL_l1465z00_1963 = BgL_g1467z00_1961;
				BgL_zc3z04anonymousza31607ze3z87_1964:
					if (PAIRP(BgL_l1465z00_1963))
						{	/* SawMill/blockorder.scm 85 */
							{	/* SawMill/blockorder.scm 85 */
								obj_t BgL_sz00_1966;

								BgL_sz00_1966 = CAR(BgL_l1465z00_1963);
								if (BGl_isazf3zf3zz__objectz00(BgL_sz00_1966,
										BGl_SawDfsz00zzsaw_blockorderz00))
									{	/* SawMill/blockorder.scm 85 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/blockorder.scm 85 */
										BGl_dfsze70ze7zzsaw_blockorderz00(BgL_retsz00_2761,
											BgL_failsz00_2760, BgL_nz00_2759, BgL_sz00_1966);
									}
							}
							{
								obj_t BgL_l1465z00_3166;

								BgL_l1465z00_3166 = CDR(BgL_l1465z00_1963);
								BgL_l1465z00_1963 = BgL_l1465z00_3166;
								goto BgL_zc3z04anonymousza31607ze3z87_1964;
							}
						}
					else
						{	/* SawMill/blockorder.scm 85 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* predecessors */
	obj_t BGl_predecessorsz00zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_62)
	{
		{	/* SawMill/blockorder.scm 89 */
			{	/* SawMill/blockorder.scm 90 */
				obj_t BgL_arg1612z00_1971;

				{	/* SawMill/blockorder.scm 90 */
					obj_t BgL_hook1472z00_1972;

					BgL_hook1472z00_1972 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
					{	/* SawMill/blockorder.scm 90 */
						obj_t BgL_g1473z00_1973;

						BgL_g1473z00_1973 =
							(((BgL_blockz00_bglt) COBJECT(BgL_bz00_62))->BgL_predsz00);
						{
							obj_t BgL_l1469z00_1975;
							obj_t BgL_h1470z00_1976;

							BgL_l1469z00_1975 = BgL_g1473z00_1973;
							BgL_h1470z00_1976 = BgL_hook1472z00_1972;
						BgL_zc3z04anonymousza31613ze3z87_1977:
							if (NULLP(BgL_l1469z00_1975))
								{	/* SawMill/blockorder.scm 90 */
									BgL_arg1612z00_1971 = CDR(BgL_hook1472z00_1972);
								}
							else
								{	/* SawMill/blockorder.scm 90 */
									bool_t BgL_test2074z00_3173;

									{	/* SawMill/blockorder.scm 90 */
										bool_t BgL_test2075z00_3174;

										{	/* SawMill/blockorder.scm 90 */
											bool_t BgL_res1980z00_2582;

											BgL_res1980z00_2582 =
												BGl_isazf3zf3zz__objectz00(CAR(
													((obj_t) BgL_l1469z00_1975)),
												BGl_SawRdonez00zzsaw_blockorderz00);
											BgL_test2075z00_3174 = BgL_res1980z00_2582;
										}
										if (BgL_test2075z00_3174)
											{	/* SawMill/blockorder.scm 90 */
												BgL_test2074z00_3173 = ((bool_t) 0);
											}
										else
											{	/* SawMill/blockorder.scm 90 */
												BgL_test2074z00_3173 = ((bool_t) 1);
											}
									}
									if (BgL_test2074z00_3173)
										{	/* SawMill/blockorder.scm 90 */
											obj_t BgL_nh1471z00_1982;

											{	/* SawMill/blockorder.scm 90 */
												obj_t BgL_arg1626z00_1984;

												BgL_arg1626z00_1984 = CAR(((obj_t) BgL_l1469z00_1975));
												{	/* SawMill/blockorder.scm 90 */
													obj_t BgL_res1981z00_2584;

													BgL_res1981z00_2584 =
														MAKE_YOUNG_PAIR(BgL_arg1626z00_1984, BNIL);
													BgL_nh1471z00_1982 = BgL_res1981z00_2584;
												}
											}
											SET_CDR(BgL_h1470z00_1976, BgL_nh1471z00_1982);
											{	/* SawMill/blockorder.scm 90 */
												obj_t BgL_arg1624z00_1983;

												BgL_arg1624z00_1983 = CDR(((obj_t) BgL_l1469z00_1975));
												{
													obj_t BgL_h1470z00_3185;
													obj_t BgL_l1469z00_3184;

													BgL_l1469z00_3184 = BgL_arg1624z00_1983;
													BgL_h1470z00_3185 = BgL_nh1471z00_1982;
													BgL_h1470z00_1976 = BgL_h1470z00_3185;
													BgL_l1469z00_1975 = BgL_l1469z00_3184;
													goto BgL_zc3z04anonymousza31613ze3z87_1977;
												}
											}
										}
									else
										{	/* SawMill/blockorder.scm 90 */
											obj_t BgL_arg1627z00_1985;

											BgL_arg1627z00_1985 = CDR(((obj_t) BgL_l1469z00_1975));
											{
												obj_t BgL_l1469z00_3188;

												BgL_l1469z00_3188 = BgL_arg1627z00_1985;
												BgL_l1469z00_1975 = BgL_l1469z00_3188;
												goto BgL_zc3z04anonymousza31613ze3z87_1977;
											}
										}
								}
						}
					}
				}
				return
					BGl_sortz00zz__r4_vectors_6_8z00(BgL_arg1612z00_1971,
					BGl_lengthuncolsucczc3zd3zf3zd2envz31zzsaw_blockorderz00);
			}
		}

	}



/* &lengthuncolsucc<=? */
	obj_t BGl_z62lengthuncolsucczc3zd3zf3z81zzsaw_blockorderz00(obj_t
		BgL_envz00_2703, obj_t BgL_b1z00_2704, obj_t BgL_b2z00_2705)
	{
		{	/* SawMill/blockorder.scm 93 */
			{	/* SawMill/blockorder.scm 94 */
				bool_t BgL_tmpz00_3190;

				{	/* SawMill/blockorder.scm 94 */
					long BgL_n1z00_2803;
					long BgL_n2z00_2804;

					BgL_n1z00_2803 =
						BGl_lengthuncolsuccz00zzsaw_blockorderz00(
						((BgL_blockz00_bglt) BgL_b1z00_2704));
					BgL_n2z00_2804 =
						BGl_lengthuncolsuccz00zzsaw_blockorderz00(
						((BgL_blockz00_bglt) BgL_b2z00_2705));
					if ((BgL_n1z00_2803 < BgL_n2z00_2804))
						{	/* SawMill/blockorder.scm 95 */
							BgL_tmpz00_3190 = ((bool_t) 1);
						}
					else
						{	/* SawMill/blockorder.scm 95 */
							if ((BgL_n1z00_2803 > BgL_n2z00_2804))
								{	/* SawMill/blockorder.scm 96 */
									BgL_tmpz00_3190 = ((bool_t) 0);
								}
							else
								{	/* SawMill/blockorder.scm 97 */
									int BgL_arg1631z00_2811;
									int BgL_arg1634z00_2812;

									{	/* SawMill/blockorder.scm 97 */
										int BgL_res1982z00_2813;

										{
											BgL_sawdfsz00_bglt BgL_auxz00_3199;

											{
												obj_t BgL_auxz00_3200;

												{	/* SawMill/blockorder.scm 97 */
													BgL_objectz00_bglt BgL_tmpz00_3201;

													BgL_tmpz00_3201 =
														((BgL_objectz00_bglt)
														((BgL_blockz00_bglt) BgL_b1z00_2704));
													BgL_auxz00_3200 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3201);
												}
												BgL_auxz00_3199 =
													((BgL_sawdfsz00_bglt) BgL_auxz00_3200);
											}
											BgL_res1982z00_2813 =
												(((BgL_sawdfsz00_bglt) COBJECT(BgL_auxz00_3199))->
												BgL_nz00);
										}
										BgL_arg1631z00_2811 = BgL_res1982z00_2813;
									}
									{	/* SawMill/blockorder.scm 97 */
										int BgL_res1983z00_2814;

										{
											BgL_sawdfsz00_bglt BgL_auxz00_3207;

											{
												obj_t BgL_auxz00_3208;

												{	/* SawMill/blockorder.scm 97 */
													BgL_objectz00_bglt BgL_tmpz00_3209;

													BgL_tmpz00_3209 =
														((BgL_objectz00_bglt)
														((BgL_blockz00_bglt) BgL_b2z00_2705));
													BgL_auxz00_3208 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3209);
												}
												BgL_auxz00_3207 =
													((BgL_sawdfsz00_bglt) BgL_auxz00_3208);
											}
											BgL_res1983z00_2814 =
												(((BgL_sawdfsz00_bglt) COBJECT(BgL_auxz00_3207))->
												BgL_nz00);
										}
										BgL_arg1634z00_2812 = BgL_res1983z00_2814;
									}
									BgL_tmpz00_3190 =
										(
										(long) (BgL_arg1631z00_2811) >
										(long) (BgL_arg1634z00_2812));
				}}}
				return BBOOL(BgL_tmpz00_3190);
			}
		}

	}



/* lengthuncolsucc */
	long BGl_lengthuncolsuccz00zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_65)
	{
		{	/* SawMill/blockorder.scm 99 */
			{	/* SawMill/blockorder.scm 100 */
				obj_t BgL_arg1639z00_1995;

				{	/* SawMill/blockorder.scm 100 */
					obj_t BgL_hook1478z00_1996;

					BgL_hook1478z00_1996 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
					{	/* SawMill/blockorder.scm 100 */
						obj_t BgL_g1479z00_1997;

						BgL_g1479z00_1997 =
							(((BgL_blockz00_bglt) COBJECT(BgL_bz00_65))->BgL_succsz00);
						{
							obj_t BgL_l1475z00_1999;
							obj_t BgL_h1476z00_2000;

							BgL_l1475z00_1999 = BgL_g1479z00_1997;
							BgL_h1476z00_2000 = BgL_hook1478z00_1996;
						BgL_zc3z04anonymousza31640ze3z87_2001:
							if (NULLP(BgL_l1475z00_1999))
								{	/* SawMill/blockorder.scm 100 */
									BgL_arg1639z00_1995 = CDR(BgL_hook1478z00_1996);
								}
							else
								{	/* SawMill/blockorder.scm 100 */
									bool_t BgL_test2079z00_3224;

									{	/* SawMill/blockorder.scm 100 */
										bool_t BgL_test2080z00_3225;

										{	/* SawMill/blockorder.scm 100 */
											bool_t BgL_res1985z00_2600;

											BgL_res1985z00_2600 =
												BGl_isazf3zf3zz__objectz00(CAR(
													((obj_t) BgL_l1475z00_1999)),
												BGl_SawRdonez00zzsaw_blockorderz00);
											BgL_test2080z00_3225 = BgL_res1985z00_2600;
										}
										if (BgL_test2080z00_3225)
											{	/* SawMill/blockorder.scm 100 */
												BgL_test2079z00_3224 = ((bool_t) 0);
											}
										else
											{	/* SawMill/blockorder.scm 100 */
												BgL_test2079z00_3224 = ((bool_t) 1);
											}
									}
									if (BgL_test2079z00_3224)
										{	/* SawMill/blockorder.scm 100 */
											obj_t BgL_nh1477z00_2006;

											{	/* SawMill/blockorder.scm 100 */
												obj_t BgL_arg1652z00_2008;

												BgL_arg1652z00_2008 = CAR(((obj_t) BgL_l1475z00_1999));
												{	/* SawMill/blockorder.scm 100 */
													obj_t BgL_res1986z00_2602;

													BgL_res1986z00_2602 =
														MAKE_YOUNG_PAIR(BgL_arg1652z00_2008, BNIL);
													BgL_nh1477z00_2006 = BgL_res1986z00_2602;
												}
											}
											SET_CDR(BgL_h1476z00_2000, BgL_nh1477z00_2006);
											{	/* SawMill/blockorder.scm 100 */
												obj_t BgL_arg1644z00_2007;

												BgL_arg1644z00_2007 = CDR(((obj_t) BgL_l1475z00_1999));
												{
													obj_t BgL_h1476z00_3236;
													obj_t BgL_l1475z00_3235;

													BgL_l1475z00_3235 = BgL_arg1644z00_2007;
													BgL_h1476z00_3236 = BgL_nh1477z00_2006;
													BgL_h1476z00_2000 = BgL_h1476z00_3236;
													BgL_l1475z00_1999 = BgL_l1475z00_3235;
													goto BgL_zc3z04anonymousza31640ze3z87_2001;
												}
											}
										}
									else
										{	/* SawMill/blockorder.scm 100 */
											obj_t BgL_arg1662z00_2009;

											BgL_arg1662z00_2009 = CDR(((obj_t) BgL_l1475z00_1999));
											{
												obj_t BgL_l1475z00_3239;

												BgL_l1475z00_3239 = BgL_arg1662z00_2009;
												BgL_l1475z00_1999 = BgL_l1475z00_3239;
												goto BgL_zc3z04anonymousza31640ze3z87_2001;
											}
										}
								}
						}
					}
				}
				return bgl_list_length(BgL_arg1639z00_1995);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_blockorderz00()
	{
		{	/* SawMill/blockorder.scm 1 */
			{	/* SawMill/blockorder.scm 6 */
				obj_t BgL_arg1741z00_2093;
				obj_t BgL_arg1742z00_2094;

				{	/* SawMill/blockorder.scm 6 */
					obj_t BgL_v1483z00_2119;

					BgL_v1483z00_2119 = create_vector(((long) 0));
					BgL_arg1741z00_2093 = BgL_v1483z00_2119;
				}
				{	/* SawMill/blockorder.scm 6 */
					obj_t BgL_v1484z00_2120;

					BgL_v1484z00_2120 = create_vector(((long) 0));
					BgL_arg1742z00_2094 = BgL_v1484z00_2120;
				}
				BGl_SawDonez00zzsaw_blockorderz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 1)),
					CNST_TABLE_REF(((long) 2)), BGl_blockz00zzsaw_defsz00, ((long) 37905),
					BGl_proc2008z00zzsaw_blockorderz00,
					BGl_proc2007z00zzsaw_blockorderz00, BFALSE,
					BGl_proc2006z00zzsaw_blockorderz00,
					BGl_proc2005z00zzsaw_blockorderz00, BgL_arg1741z00_2093,
					BgL_arg1742z00_2094);
			}
			{	/* SawMill/blockorder.scm 7 */
				obj_t BgL_arg1768z00_2129;
				obj_t BgL_arg1771z00_2130;

				{	/* SawMill/blockorder.scm 7 */
					obj_t BgL_v1485z00_2155;

					BgL_v1485z00_2155 = create_vector(((long) 0));
					BgL_arg1768z00_2129 = BgL_v1485z00_2155;
				}
				{	/* SawMill/blockorder.scm 7 */
					obj_t BgL_v1486z00_2156;

					BgL_v1486z00_2156 = create_vector(((long) 0));
					BgL_arg1771z00_2130 = BgL_v1486z00_2156;
				}
				BGl_SawRdonez00zzsaw_blockorderz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 3)),
					CNST_TABLE_REF(((long) 2)), BGl_blockz00zzsaw_defsz00, ((long) 64354),
					BGl_proc2012z00zzsaw_blockorderz00,
					BGl_proc2011z00zzsaw_blockorderz00, BFALSE,
					BGl_proc2010z00zzsaw_blockorderz00,
					BGl_proc2009z00zzsaw_blockorderz00, BgL_arg1768z00_2129,
					BgL_arg1771z00_2130);
			}
			{	/* SawMill/blockorder.scm 8 */
				obj_t BgL_arg1820z00_2165;
				obj_t BgL_arg1821z00_2166;

				{	/* SawMill/blockorder.scm 8 */
					obj_t BgL_v1487z00_2192;

					BgL_v1487z00_2192 = create_vector(((long) 1));
					{	/* SawMill/blockorder.scm 8 */
						obj_t BgL_arg1832z00_2193;

						BgL_arg1832z00_2193 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc2014z00zzsaw_blockorderz00,
							BGl_proc2013z00zzsaw_blockorderz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1487z00_2192, ((long) 0), BgL_arg1832z00_2193);
					}
					BgL_arg1820z00_2165 = BgL_v1487z00_2192;
				}
				{	/* SawMill/blockorder.scm 8 */
					obj_t BgL_v1488z00_2203;

					BgL_v1488z00_2203 = create_vector(((long) 0));
					BgL_arg1821z00_2166 = BgL_v1488z00_2203;
				}
				return (BGl_SawDfsz00zzsaw_blockorderz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 6)),
						CNST_TABLE_REF(((long) 2)), BGl_blockz00zzsaw_defsz00,
						((long) 18552), BGl_proc2018z00zzsaw_blockorderz00,
						BGl_proc2017z00zzsaw_blockorderz00, BFALSE,
						BGl_proc2016z00zzsaw_blockorderz00,
						BGl_proc2015z00zzsaw_blockorderz00, BgL_arg1820z00_2165,
						BgL_arg1821z00_2166), BUNSPEC);
		}}

	}



/* &lambda1828 */
	BgL_blockz00_bglt BGl_z62lambda1828z62zzsaw_blockorderz00(obj_t
		BgL_envz00_2720, obj_t BgL_o1174z00_2721)
	{
		{	/* SawMill/blockorder.scm 8 */
			{	/* SawMill/blockorder.scm 8 */
				long BgL_arg1829z00_2819;

				{	/* SawMill/blockorder.scm 8 */
					obj_t BgL_arg1830z00_2820;

					{	/* SawMill/blockorder.scm 8 */
						obj_t BgL_arg1831z00_2821;

						{	/* SawMill/blockorder.scm 8 */
							long BgL_arg1816z00_2822;

							{	/* SawMill/blockorder.scm 8 */
								long BgL_arg1817z00_2823;

								{	/* SawMill/blockorder.scm 8 */
									long BgL_res2002z00_2824;

									BgL_res2002z00_2824 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1174z00_2721)));
									BgL_arg1817z00_2823 = BgL_res2002z00_2824;
								}
								BgL_arg1816z00_2822 = (BgL_arg1817z00_2823 - OBJECT_TYPE);
							}
							BgL_arg1831z00_2821 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2822);
						}
						BgL_arg1830z00_2820 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1831z00_2821);
					}
					{	/* SawMill/blockorder.scm 8 */
						long BgL_res2004z00_2825;

						{	/* SawMill/blockorder.scm 8 */
							obj_t BgL_tmpz00_3266;

							BgL_tmpz00_3266 = ((obj_t) BgL_arg1830z00_2820);
							BgL_res2004z00_2825 = BGL_CLASS_INDEX(BgL_tmpz00_3266);
						}
						BgL_arg1829z00_2819 = BgL_res2004z00_2825;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1174z00_2721)), BgL_arg1829z00_2819);
			}
			{	/* SawMill/blockorder.scm 8 */
				BgL_objectz00_bglt BgL_tmpz00_3272;

				BgL_tmpz00_3272 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1174z00_2721));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3272, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1174z00_2721));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1174z00_2721));
		}

	}



/* &<@anonymous:1827> */
	obj_t BGl_z62zc3z04anonymousza31827ze3ze5zzsaw_blockorderz00(obj_t
		BgL_envz00_2722, obj_t BgL_new1173z00_2723)
	{
		{	/* SawMill/blockorder.scm 8 */
			{
				BgL_blockz00_bglt BgL_auxz00_3280;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1173z00_2723))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1173z00_2723))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1173z00_2723))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1173z00_2723))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				{
					BgL_sawdfsz00_bglt BgL_auxz00_3295;

					{
						obj_t BgL_auxz00_3296;

						{	/* SawMill/blockorder.scm 8 */
							BgL_objectz00_bglt BgL_tmpz00_3297;

							BgL_tmpz00_3297 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1173z00_2723));
							BgL_auxz00_3296 = BGL_OBJECT_WIDENING(BgL_tmpz00_3297);
						}
						BgL_auxz00_3295 = ((BgL_sawdfsz00_bglt) BgL_auxz00_3296);
					}
					((((BgL_sawdfsz00_bglt) COBJECT(BgL_auxz00_3295))->BgL_nz00) = ((int)
							(int) (((long) 0))), BUNSPEC);
				}
				BgL_auxz00_3280 = ((BgL_blockz00_bglt) BgL_new1173z00_2723);
				return ((obj_t) BgL_auxz00_3280);
			}
		}

	}



/* &lambda1825 */
	BgL_blockz00_bglt BGl_z62lambda1825z62zzsaw_blockorderz00(obj_t
		BgL_envz00_2724, obj_t BgL_o1170z00_2725)
	{
		{	/* SawMill/blockorder.scm 8 */
			{	/* SawMill/blockorder.scm 8 */
				BgL_sawdfsz00_bglt BgL_wide1172z00_2828;

				BgL_wide1172z00_2828 =
					((BgL_sawdfsz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sawdfsz00_bgl))));
				{	/* SawMill/blockorder.scm 8 */
					obj_t BgL_auxz00_3311;
					BgL_objectz00_bglt BgL_tmpz00_3307;

					BgL_auxz00_3311 = ((obj_t) BgL_wide1172z00_2828);
					BgL_tmpz00_3307 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1170z00_2725)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3307, BgL_auxz00_3311);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1170z00_2725)));
				{	/* SawMill/blockorder.scm 8 */
					long BgL_arg1826z00_2829;

					{	/* SawMill/blockorder.scm 8 */
						long BgL_res2001z00_2830;

						BgL_res2001z00_2830 =
							BGL_CLASS_INDEX(BGl_SawDfsz00zzsaw_blockorderz00);
						BgL_arg1826z00_2829 = BgL_res2001z00_2830;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1170z00_2725))), BgL_arg1826z00_2829);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1170z00_2725)));
			}
		}

	}



/* &lambda1822 */
	BgL_blockz00_bglt BGl_z62lambda1822z62zzsaw_blockorderz00(obj_t
		BgL_envz00_2726, obj_t BgL_label1165z00_2727, obj_t BgL_preds1166z00_2728,
		obj_t BgL_succs1167z00_2729, obj_t BgL_first1168z00_2730,
		obj_t BgL_n1169z00_2731)
	{
		{	/* SawMill/blockorder.scm 8 */
			{	/* SawMill/blockorder.scm 8 */
				int BgL_label1165z00_2831;
				int BgL_n1169z00_2835;

				BgL_label1165z00_2831 = CINT(BgL_label1165z00_2727);
				BgL_n1169z00_2835 = CINT(BgL_n1169z00_2731);
				{	/* SawMill/blockorder.scm 8 */
					BgL_blockz00_bglt BgL_new1255z00_2836;

					{	/* SawMill/blockorder.scm 8 */
						BgL_blockz00_bglt BgL_tmp1253z00_2837;
						BgL_sawdfsz00_bglt BgL_wide1254z00_2838;

						{
							BgL_blockz00_bglt BgL_auxz00_3327;

							{	/* SawMill/blockorder.scm 8 */
								BgL_blockz00_bglt BgL_new1252z00_2839;

								BgL_new1252z00_2839 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/blockorder.scm 8 */
									long BgL_arg1824z00_2840;

									{	/* SawMill/blockorder.scm 8 */
										long BgL_res1999z00_2841;

										BgL_res1999z00_2841 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg1824z00_2840 = BgL_res1999z00_2841;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1252z00_2839),
										BgL_arg1824z00_2840);
								}
								{	/* SawMill/blockorder.scm 8 */
									BgL_objectz00_bglt BgL_tmpz00_3332;

									BgL_tmpz00_3332 = ((BgL_objectz00_bglt) BgL_new1252z00_2839);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3332, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1252z00_2839);
								BgL_auxz00_3327 = BgL_new1252z00_2839;
							}
							BgL_tmp1253z00_2837 = ((BgL_blockz00_bglt) BgL_auxz00_3327);
						}
						BgL_wide1254z00_2838 =
							((BgL_sawdfsz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sawdfsz00_bgl))));
						{	/* SawMill/blockorder.scm 8 */
							obj_t BgL_auxz00_3340;
							BgL_objectz00_bglt BgL_tmpz00_3338;

							BgL_auxz00_3340 = ((obj_t) BgL_wide1254z00_2838);
							BgL_tmpz00_3338 = ((BgL_objectz00_bglt) BgL_tmp1253z00_2837);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3338, BgL_auxz00_3340);
						}
						((BgL_objectz00_bglt) BgL_tmp1253z00_2837);
						{	/* SawMill/blockorder.scm 8 */
							long BgL_arg1823z00_2842;

							{	/* SawMill/blockorder.scm 8 */
								long BgL_res2000z00_2843;

								BgL_res2000z00_2843 =
									BGL_CLASS_INDEX(BGl_SawDfsz00zzsaw_blockorderz00);
								BgL_arg1823z00_2842 = BgL_res2000z00_2843;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1253z00_2837),
								BgL_arg1823z00_2842);
						}
						BgL_new1255z00_2836 = ((BgL_blockz00_bglt) BgL_tmp1253z00_2837);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1255z00_2836)))->BgL_labelz00) =
						((int) BgL_label1165z00_2831), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1255z00_2836)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1166z00_2728)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1255z00_2836)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1167z00_2729)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1255z00_2836)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1168z00_2730)), BUNSPEC);
					{
						BgL_sawdfsz00_bglt BgL_auxz00_3359;

						{
							obj_t BgL_auxz00_3360;

							{	/* SawMill/blockorder.scm 8 */
								BgL_objectz00_bglt BgL_tmpz00_3361;

								BgL_tmpz00_3361 = ((BgL_objectz00_bglt) BgL_new1255z00_2836);
								BgL_auxz00_3360 = BGL_OBJECT_WIDENING(BgL_tmpz00_3361);
							}
							BgL_auxz00_3359 = ((BgL_sawdfsz00_bglt) BgL_auxz00_3360);
						}
						((((BgL_sawdfsz00_bglt) COBJECT(BgL_auxz00_3359))->BgL_nz00) =
							((int) BgL_n1169z00_2835), BUNSPEC);
					}
					return BgL_new1255z00_2836;
				}
			}
		}

	}



/* &lambda1837 */
	obj_t BGl_z62lambda1837z62zzsaw_blockorderz00(obj_t BgL_envz00_2732,
		obj_t BgL_oz00_2733, obj_t BgL_vz00_2734)
	{
		{	/* SawMill/blockorder.scm 8 */
			{	/* SawMill/blockorder.scm 8 */
				int BgL_vz00_2845;

				BgL_vz00_2845 = CINT(BgL_vz00_2734);
				{
					BgL_sawdfsz00_bglt BgL_auxz00_3367;

					{
						obj_t BgL_auxz00_3368;

						{	/* SawMill/blockorder.scm 8 */
							BgL_objectz00_bglt BgL_tmpz00_3369;

							BgL_tmpz00_3369 =
								((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_2733));
							BgL_auxz00_3368 = BGL_OBJECT_WIDENING(BgL_tmpz00_3369);
						}
						BgL_auxz00_3367 = ((BgL_sawdfsz00_bglt) BgL_auxz00_3368);
					}
					return
						((((BgL_sawdfsz00_bglt) COBJECT(BgL_auxz00_3367))->BgL_nz00) =
						((int) BgL_vz00_2845), BUNSPEC);
		}}}

	}



/* &lambda1836 */
	obj_t BGl_z62lambda1836z62zzsaw_blockorderz00(obj_t BgL_envz00_2735,
		obj_t BgL_oz00_2736)
	{
		{	/* SawMill/blockorder.scm 8 */
			{	/* SawMill/blockorder.scm 8 */
				int BgL_tmpz00_3375;

				{
					BgL_sawdfsz00_bglt BgL_auxz00_3376;

					{
						obj_t BgL_auxz00_3377;

						{	/* SawMill/blockorder.scm 8 */
							BgL_objectz00_bglt BgL_tmpz00_3378;

							BgL_tmpz00_3378 =
								((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_2736));
							BgL_auxz00_3377 = BGL_OBJECT_WIDENING(BgL_tmpz00_3378);
						}
						BgL_auxz00_3376 = ((BgL_sawdfsz00_bglt) BgL_auxz00_3377);
					}
					BgL_tmpz00_3375 =
						(((BgL_sawdfsz00_bglt) COBJECT(BgL_auxz00_3376))->BgL_nz00);
				}
				return BINT(BgL_tmpz00_3375);
			}
		}

	}



/* &lambda1784 */
	BgL_blockz00_bglt BGl_z62lambda1784z62zzsaw_blockorderz00(obj_t
		BgL_envz00_2737, obj_t BgL_o1163z00_2738)
	{
		{	/* SawMill/blockorder.scm 7 */
			{	/* SawMill/blockorder.scm 7 */
				long BgL_arg1790z00_2848;

				{	/* SawMill/blockorder.scm 7 */
					obj_t BgL_arg1796z00_2849;

					{	/* SawMill/blockorder.scm 7 */
						obj_t BgL_arg1798z00_2850;

						{	/* SawMill/blockorder.scm 7 */
							long BgL_arg1816z00_2851;

							{	/* SawMill/blockorder.scm 7 */
								long BgL_arg1817z00_2852;

								{	/* SawMill/blockorder.scm 7 */
									long BgL_res1996z00_2853;

									BgL_res1996z00_2853 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1163z00_2738)));
									BgL_arg1817z00_2852 = BgL_res1996z00_2853;
								}
								BgL_arg1816z00_2851 = (BgL_arg1817z00_2852 - OBJECT_TYPE);
							}
							BgL_arg1798z00_2850 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2851);
						}
						BgL_arg1796z00_2849 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1798z00_2850);
					}
					{	/* SawMill/blockorder.scm 7 */
						long BgL_res1998z00_2854;

						{	/* SawMill/blockorder.scm 7 */
							obj_t BgL_tmpz00_3391;

							BgL_tmpz00_3391 = ((obj_t) BgL_arg1796z00_2849);
							BgL_res1998z00_2854 = BGL_CLASS_INDEX(BgL_tmpz00_3391);
						}
						BgL_arg1790z00_2848 = BgL_res1998z00_2854;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1163z00_2738)), BgL_arg1790z00_2848);
			}
			{	/* SawMill/blockorder.scm 7 */
				BgL_objectz00_bglt BgL_tmpz00_3397;

				BgL_tmpz00_3397 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1163z00_2738));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3397, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1163z00_2738));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1163z00_2738));
		}

	}



/* &<@anonymous:1783> */
	obj_t BGl_z62zc3z04anonymousza31783ze3ze5zzsaw_blockorderz00(obj_t
		BgL_envz00_2739, obj_t BgL_new1162z00_2740)
	{
		{	/* SawMill/blockorder.scm 7 */
			{
				BgL_blockz00_bglt BgL_auxz00_3405;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1162z00_2740))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1162z00_2740))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1162z00_2740))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1162z00_2740))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				BgL_auxz00_3405 = ((BgL_blockz00_bglt) BgL_new1162z00_2740);
				return ((obj_t) BgL_auxz00_3405);
			}
		}

	}



/* &lambda1779 */
	BgL_blockz00_bglt BGl_z62lambda1779z62zzsaw_blockorderz00(obj_t
		BgL_envz00_2741, obj_t BgL_o1159z00_2742)
	{
		{	/* SawMill/blockorder.scm 7 */
			{	/* SawMill/blockorder.scm 7 */
				BgL_sawrdonez00_bglt BgL_wide1161z00_2857;

				BgL_wide1161z00_2857 =
					((BgL_sawrdonez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sawrdonez00_bgl))));
				{	/* SawMill/blockorder.scm 7 */
					obj_t BgL_auxz00_3427;
					BgL_objectz00_bglt BgL_tmpz00_3423;

					BgL_auxz00_3427 = ((obj_t) BgL_wide1161z00_2857);
					BgL_tmpz00_3423 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1159z00_2742)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3423, BgL_auxz00_3427);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1159z00_2742)));
				{	/* SawMill/blockorder.scm 7 */
					long BgL_arg1782z00_2858;

					{	/* SawMill/blockorder.scm 7 */
						long BgL_res1995z00_2859;

						BgL_res1995z00_2859 =
							BGL_CLASS_INDEX(BGl_SawRdonez00zzsaw_blockorderz00);
						BgL_arg1782z00_2858 = BgL_res1995z00_2859;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1159z00_2742))), BgL_arg1782z00_2858);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1159z00_2742)));
			}
		}

	}



/* &lambda1772 */
	BgL_blockz00_bglt BGl_z62lambda1772z62zzsaw_blockorderz00(obj_t
		BgL_envz00_2743, obj_t BgL_label1155z00_2744, obj_t BgL_preds1156z00_2745,
		obj_t BgL_succs1157z00_2746, obj_t BgL_first1158z00_2747)
	{
		{	/* SawMill/blockorder.scm 7 */
			{	/* SawMill/blockorder.scm 7 */
				int BgL_label1155z00_2860;

				BgL_label1155z00_2860 = CINT(BgL_label1155z00_2744);
				{	/* SawMill/blockorder.scm 7 */
					BgL_blockz00_bglt BgL_new1250z00_2864;

					{	/* SawMill/blockorder.scm 7 */
						BgL_blockz00_bglt BgL_tmp1248z00_2865;
						BgL_sawrdonez00_bglt BgL_wide1249z00_2866;

						{
							BgL_blockz00_bglt BgL_auxz00_3442;

							{	/* SawMill/blockorder.scm 7 */
								BgL_blockz00_bglt BgL_new1247z00_2867;

								BgL_new1247z00_2867 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/blockorder.scm 7 */
									long BgL_arg1778z00_2868;

									{	/* SawMill/blockorder.scm 7 */
										long BgL_res1993z00_2869;

										BgL_res1993z00_2869 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg1778z00_2868 = BgL_res1993z00_2869;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1247z00_2867),
										BgL_arg1778z00_2868);
								}
								{	/* SawMill/blockorder.scm 7 */
									BgL_objectz00_bglt BgL_tmpz00_3447;

									BgL_tmpz00_3447 = ((BgL_objectz00_bglt) BgL_new1247z00_2867);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3447, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1247z00_2867);
								BgL_auxz00_3442 = BgL_new1247z00_2867;
							}
							BgL_tmp1248z00_2865 = ((BgL_blockz00_bglt) BgL_auxz00_3442);
						}
						BgL_wide1249z00_2866 =
							((BgL_sawrdonez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sawrdonez00_bgl))));
						{	/* SawMill/blockorder.scm 7 */
							obj_t BgL_auxz00_3455;
							BgL_objectz00_bglt BgL_tmpz00_3453;

							BgL_auxz00_3455 = ((obj_t) BgL_wide1249z00_2866);
							BgL_tmpz00_3453 = ((BgL_objectz00_bglt) BgL_tmp1248z00_2865);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3453, BgL_auxz00_3455);
						}
						((BgL_objectz00_bglt) BgL_tmp1248z00_2865);
						{	/* SawMill/blockorder.scm 7 */
							long BgL_arg1775z00_2870;

							{	/* SawMill/blockorder.scm 7 */
								long BgL_res1994z00_2871;

								BgL_res1994z00_2871 =
									BGL_CLASS_INDEX(BGl_SawRdonez00zzsaw_blockorderz00);
								BgL_arg1775z00_2870 = BgL_res1994z00_2871;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1248z00_2865),
								BgL_arg1775z00_2870);
						}
						BgL_new1250z00_2864 = ((BgL_blockz00_bglt) BgL_tmp1248z00_2865);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1250z00_2864)))->BgL_labelz00) =
						((int) BgL_label1155z00_2860), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1250z00_2864)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1156z00_2745)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1250z00_2864)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1157z00_2746)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1250z00_2864)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1158z00_2747)), BUNSPEC);
					return BgL_new1250z00_2864;
				}
			}
		}

	}



/* &lambda1749 */
	BgL_blockz00_bglt BGl_z62lambda1749z62zzsaw_blockorderz00(obj_t
		BgL_envz00_2748, obj_t BgL_o1153z00_2749)
	{
		{	/* SawMill/blockorder.scm 6 */
			{	/* SawMill/blockorder.scm 6 */
				long BgL_arg1754z00_2873;

				{	/* SawMill/blockorder.scm 6 */
					obj_t BgL_arg1755z00_2874;

					{	/* SawMill/blockorder.scm 6 */
						obj_t BgL_arg1756z00_2875;

						{	/* SawMill/blockorder.scm 6 */
							long BgL_arg1816z00_2876;

							{	/* SawMill/blockorder.scm 6 */
								long BgL_arg1817z00_2877;

								{	/* SawMill/blockorder.scm 6 */
									long BgL_res1990z00_2878;

									BgL_res1990z00_2878 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1153z00_2749)));
									BgL_arg1817z00_2877 = BgL_res1990z00_2878;
								}
								BgL_arg1816z00_2876 = (BgL_arg1817z00_2877 - OBJECT_TYPE);
							}
							BgL_arg1756z00_2875 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2876);
						}
						BgL_arg1755z00_2874 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1756z00_2875);
					}
					{	/* SawMill/blockorder.scm 6 */
						long BgL_res1992z00_2879;

						{	/* SawMill/blockorder.scm 6 */
							obj_t BgL_tmpz00_3480;

							BgL_tmpz00_3480 = ((obj_t) BgL_arg1755z00_2874);
							BgL_res1992z00_2879 = BGL_CLASS_INDEX(BgL_tmpz00_3480);
						}
						BgL_arg1754z00_2873 = BgL_res1992z00_2879;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1153z00_2749)), BgL_arg1754z00_2873);
			}
			{	/* SawMill/blockorder.scm 6 */
				BgL_objectz00_bglt BgL_tmpz00_3486;

				BgL_tmpz00_3486 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_2749));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3486, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_2749));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_2749));
		}

	}



/* &<@anonymous:1748> */
	obj_t BGl_z62zc3z04anonymousza31748ze3ze5zzsaw_blockorderz00(obj_t
		BgL_envz00_2750, obj_t BgL_new1152z00_2751)
	{
		{	/* SawMill/blockorder.scm 6 */
			{
				BgL_blockz00_bglt BgL_auxz00_3494;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1152z00_2751))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1152z00_2751))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1152z00_2751))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1152z00_2751))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				BgL_auxz00_3494 = ((BgL_blockz00_bglt) BgL_new1152z00_2751);
				return ((obj_t) BgL_auxz00_3494);
			}
		}

	}



/* &lambda1746 */
	BgL_blockz00_bglt BGl_z62lambda1746z62zzsaw_blockorderz00(obj_t
		BgL_envz00_2752, obj_t BgL_o1149z00_2753)
	{
		{	/* SawMill/blockorder.scm 6 */
			{	/* SawMill/blockorder.scm 6 */
				BgL_sawdonez00_bglt BgL_wide1151z00_2882;

				BgL_wide1151z00_2882 =
					((BgL_sawdonez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_sawdonez00_bgl))));
				{	/* SawMill/blockorder.scm 6 */
					obj_t BgL_auxz00_3516;
					BgL_objectz00_bglt BgL_tmpz00_3512;

					BgL_auxz00_3516 = ((obj_t) BgL_wide1151z00_2882);
					BgL_tmpz00_3512 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1149z00_2753)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3512, BgL_auxz00_3516);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1149z00_2753)));
				{	/* SawMill/blockorder.scm 6 */
					long BgL_arg1747z00_2883;

					{	/* SawMill/blockorder.scm 6 */
						long BgL_res1989z00_2884;

						BgL_res1989z00_2884 =
							BGL_CLASS_INDEX(BGl_SawDonez00zzsaw_blockorderz00);
						BgL_arg1747z00_2883 = BgL_res1989z00_2884;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1149z00_2753))), BgL_arg1747z00_2883);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1149z00_2753)));
			}
		}

	}



/* &lambda1743 */
	BgL_blockz00_bglt BGl_z62lambda1743z62zzsaw_blockorderz00(obj_t
		BgL_envz00_2754, obj_t BgL_label1145z00_2755, obj_t BgL_preds1146z00_2756,
		obj_t BgL_succs1147z00_2757, obj_t BgL_first1148z00_2758)
	{
		{	/* SawMill/blockorder.scm 6 */
			{	/* SawMill/blockorder.scm 6 */
				int BgL_label1145z00_2885;

				BgL_label1145z00_2885 = CINT(BgL_label1145z00_2755);
				{	/* SawMill/blockorder.scm 6 */
					BgL_blockz00_bglt BgL_new1245z00_2889;

					{	/* SawMill/blockorder.scm 6 */
						BgL_blockz00_bglt BgL_tmp1243z00_2890;
						BgL_sawdonez00_bglt BgL_wide1244z00_2891;

						{
							BgL_blockz00_bglt BgL_auxz00_3531;

							{	/* SawMill/blockorder.scm 6 */
								BgL_blockz00_bglt BgL_new1242z00_2892;

								BgL_new1242z00_2892 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/blockorder.scm 6 */
									long BgL_arg1745z00_2893;

									{	/* SawMill/blockorder.scm 6 */
										long BgL_res1987z00_2894;

										BgL_res1987z00_2894 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg1745z00_2893 = BgL_res1987z00_2894;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1242z00_2892),
										BgL_arg1745z00_2893);
								}
								{	/* SawMill/blockorder.scm 6 */
									BgL_objectz00_bglt BgL_tmpz00_3536;

									BgL_tmpz00_3536 = ((BgL_objectz00_bglt) BgL_new1242z00_2892);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3536, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1242z00_2892);
								BgL_auxz00_3531 = BgL_new1242z00_2892;
							}
							BgL_tmp1243z00_2890 = ((BgL_blockz00_bglt) BgL_auxz00_3531);
						}
						BgL_wide1244z00_2891 =
							((BgL_sawdonez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_sawdonez00_bgl))));
						{	/* SawMill/blockorder.scm 6 */
							obj_t BgL_auxz00_3544;
							BgL_objectz00_bglt BgL_tmpz00_3542;

							BgL_auxz00_3544 = ((obj_t) BgL_wide1244z00_2891);
							BgL_tmpz00_3542 = ((BgL_objectz00_bglt) BgL_tmp1243z00_2890);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3542, BgL_auxz00_3544);
						}
						((BgL_objectz00_bglt) BgL_tmp1243z00_2890);
						{	/* SawMill/blockorder.scm 6 */
							long BgL_arg1744z00_2895;

							{	/* SawMill/blockorder.scm 6 */
								long BgL_res1988z00_2896;

								BgL_res1988z00_2896 =
									BGL_CLASS_INDEX(BGl_SawDonez00zzsaw_blockorderz00);
								BgL_arg1744z00_2895 = BgL_res1988z00_2896;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1243z00_2890),
								BgL_arg1744z00_2895);
						}
						BgL_new1245z00_2889 = ((BgL_blockz00_bglt) BgL_tmp1243z00_2890);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1245z00_2889)))->BgL_labelz00) =
						((int) BgL_label1145z00_2885), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1245z00_2889)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1146z00_2756)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1245z00_2889)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1147z00_2757)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1245z00_2889)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1148z00_2758)), BUNSPEC);
					return BgL_new1245z00_2889;
				}
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_blockorderz00()
	{
		{	/* SawMill/blockorder.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_blockorderz00()
	{
		{	/* SawMill/blockorder.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_blockorderz00()
	{
		{	/* SawMill/blockorder.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2019z00zzsaw_blockorderz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2019z00zzsaw_blockorderz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2019z00zzsaw_blockorderz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2019z00zzsaw_blockorderz00));
		}

	}

#ifdef __cplusplus
}
#endif
