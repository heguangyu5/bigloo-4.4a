/*===========================================================================*/
/*   (Lalr/util.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Lalr/util.scm -indent -o objs/obj_u/Lalr/util.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zz__lalr_utilz00 = BUNSPEC;
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_z62sunionz62zz__lalr_utilz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__lalr_utilz00();
	static obj_t BGl_objectzd2initzd2zz__lalr_utilz00();
	static obj_t BGl_methodzd2initzd2zz__lalr_utilz00();
	BGL_EXPORTED_DECL obj_t BGl_filterz00zz__lalr_utilz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sinsertz00zz__lalr_utilz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__lalr_utilz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_poszd2inzd2listz00zz__lalr_utilz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__lalr_utilz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__lalr_utilz00();
	static obj_t BGl_z62filterz62zz__lalr_utilz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sunionz00zz__lalr_utilz00(obj_t, obj_t);
	static obj_t BGl_loopze70ze7zz__lalr_utilz00(obj_t, obj_t);
	static obj_t BGl_loopze71ze7zz__lalr_utilz00(obj_t, obj_t);
	static obj_t BGl_loopze72ze7zz__lalr_utilz00(obj_t, obj_t);
	static obj_t BGl_z62poszd2inzd2listz62zz__lalr_utilz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62sinsertz62zz__lalr_utilz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_filterzd2envzd2zz__lalr_utilz00,
		BgL_bgl_za762filterza762za7za7__1653z00, BGl_z62filterz62zz__lalr_utilz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sunionzd2envzd2zz__lalr_utilz00,
		BgL_bgl_za762sunionza762za7za7__1654z00, BGl_z62sunionz62zz__lalr_utilz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1652z00zz__lalr_utilz00,
		BgL_bgl_string1652za700za7za7_1655za7, "__lalr_util", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sinsertzd2envzd2zz__lalr_utilz00,
		BgL_bgl_za762sinsertza762za7za7_1656z00, BGl_z62sinsertz62zz__lalr_utilz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_poszd2inzd2listzd2envzd2zz__lalr_utilz00,
		BgL_bgl_za762posza7d2inza7d2li1657za7,
		BGl_z62poszd2inzd2listz62zz__lalr_utilz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__lalr_utilz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__lalr_utilz00(long
		BgL_checksumz00_1970, char *BgL_fromz00_1971)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__lalr_utilz00))
				{
					BGl_requirezd2initializa7ationz75zz__lalr_utilz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__lalr_utilz00();
					BGl_importedzd2moduleszd2initz00zz__lalr_utilz00();
					return BGl_methodzd2initzd2zz__lalr_utilz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__lalr_utilz00()
	{
		{	/* Lalr/util.scm 11 */
			return bgl_gc_roots_register();
		}

	}



/* pos-in-list */
	BGL_EXPORTED_DEF obj_t BGl_poszd2inzd2listz00zz__lalr_utilz00(obj_t
		BgL_xz00_3, obj_t BgL_lstz00_4)
	{
		{	/* Lalr/util.scm 51 */
			{
				obj_t BgL_lstz00_1626;
				long BgL_iz00_1627;

				BgL_lstz00_1626 = BgL_lstz00_4;
				BgL_iz00_1627 = ((long) 0);
			BgL_loopz00_1625:
				if (PAIRP(BgL_lstz00_1626))
					{	/* Lalr/util.scm 53 */
						if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(BgL_lstz00_1626),
								BgL_xz00_3))
							{	/* Lalr/util.scm 54 */
								return BINT(BgL_iz00_1627);
							}
						else
							{
								long BgL_iz00_1987;
								obj_t BgL_lstz00_1985;

								BgL_lstz00_1985 = CDR(BgL_lstz00_1626);
								BgL_iz00_1987 = (BgL_iz00_1627 + ((long) 1));
								BgL_iz00_1627 = BgL_iz00_1987;
								BgL_lstz00_1626 = BgL_lstz00_1985;
								goto BgL_loopz00_1625;
							}
					}
				else
					{	/* Lalr/util.scm 53 */
						return BFALSE;
					}
			}
		}

	}



/* &pos-in-list */
	obj_t BGl_z62poszd2inzd2listz62zz__lalr_utilz00(obj_t BgL_envz00_1956,
		obj_t BgL_xz00_1957, obj_t BgL_lstz00_1958)
	{
		{	/* Lalr/util.scm 51 */
			return
				BGl_poszd2inzd2listz00zz__lalr_utilz00(BgL_xz00_1957, BgL_lstz00_1958);
		}

	}



/* sunion */
	BGL_EXPORTED_DEF obj_t BGl_sunionz00zz__lalr_utilz00(obj_t BgL_lst1z00_5,
		obj_t BgL_lst2z00_6)
	{
		{	/* Lalr/util.scm 57 */
			return BGl_loopze72ze7zz__lalr_utilz00(BgL_lst1z00_5, BgL_lst2z00_6);
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zz__lalr_utilz00(obj_t BgL_l1z00_1151,
		obj_t BgL_l2z00_1152)
	{
		{	/* Lalr/util.scm 58 */
		BGl_loopze72ze7zz__lalr_utilz00:
			if (NULLP(BgL_l1z00_1151))
				{	/* Lalr/util.scm 60 */
					return BgL_l2z00_1152;
				}
			else
				{	/* Lalr/util.scm 60 */
					if (NULLP(BgL_l2z00_1152))
						{	/* Lalr/util.scm 61 */
							return BgL_l1z00_1151;
						}
					else
						{	/* Lalr/util.scm 63 */
							obj_t BgL_xz00_1156;
							obj_t BgL_yz00_1157;

							BgL_xz00_1156 = CAR(((obj_t) BgL_l1z00_1151));
							BgL_yz00_1157 = CAR(((obj_t) BgL_l2z00_1152));
							if (((long) CINT(BgL_xz00_1156) > (long) CINT(BgL_yz00_1157)))
								{	/* Lalr/util.scm 66 */
									obj_t BgL_arg1216z00_1159;

									{	/* Lalr/util.scm 66 */
										obj_t BgL_arg1221z00_1160;

										BgL_arg1221z00_1160 = CDR(((obj_t) BgL_l2z00_1152));
										BgL_arg1216z00_1159 =
											BGl_loopze72ze7zz__lalr_utilz00(BgL_l1z00_1151,
											BgL_arg1221z00_1160);
									}
									return MAKE_YOUNG_PAIR(BgL_yz00_1157, BgL_arg1216z00_1159);
								}
							else
								{	/* Lalr/util.scm 65 */
									if (((long) CINT(BgL_xz00_1156) < (long) CINT(BgL_yz00_1157)))
										{	/* Lalr/util.scm 68 */
											obj_t BgL_arg1223z00_1162;

											{	/* Lalr/util.scm 68 */
												obj_t BgL_arg1225z00_1163;

												BgL_arg1225z00_1163 = CDR(((obj_t) BgL_l1z00_1151));
												BgL_arg1223z00_1162 =
													BGl_loopze72ze7zz__lalr_utilz00(BgL_arg1225z00_1163,
													BgL_l2z00_1152);
											}
											return
												MAKE_YOUNG_PAIR(BgL_xz00_1156, BgL_arg1223z00_1162);
										}
									else
										{	/* Lalr/util.scm 70 */
											obj_t BgL_arg1227z00_1164;

											BgL_arg1227z00_1164 = CDR(((obj_t) BgL_l1z00_1151));
											{
												obj_t BgL_l1z00_2017;

												BgL_l1z00_2017 = BgL_arg1227z00_1164;
												BgL_l1z00_1151 = BgL_l1z00_2017;
												goto BGl_loopze72ze7zz__lalr_utilz00;
											}
										}
								}
						}
				}
		}

	}



/* &sunion */
	obj_t BGl_z62sunionz62zz__lalr_utilz00(obj_t BgL_envz00_1959,
		obj_t BgL_lst1z00_1960, obj_t BgL_lst2z00_1961)
	{
		{	/* Lalr/util.scm 57 */
			return BGl_sunionz00zz__lalr_utilz00(BgL_lst1z00_1960, BgL_lst2z00_1961);
		}

	}



/* sinsert */
	BGL_EXPORTED_DEF obj_t BGl_sinsertz00zz__lalr_utilz00(obj_t BgL_elemz00_7,
		obj_t BgL_lstz00_8)
	{
		{	/* Lalr/util.scm 73 */
			return BGl_loopze71ze7zz__lalr_utilz00(BgL_elemz00_7, BgL_lstz00_8);
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__lalr_utilz00(obj_t BgL_elemz00_1969,
		obj_t BgL_l1z00_1167)
	{
		{	/* Lalr/util.scm 74 */
			if (NULLP(BgL_l1z00_1167))
				{	/* Lalr/util.scm 75 */
					return MAKE_YOUNG_PAIR(BgL_elemz00_1969, BgL_l1z00_1167);
				}
			else
				{	/* Lalr/util.scm 77 */
					obj_t BgL_xz00_1170;

					BgL_xz00_1170 = CAR(((obj_t) BgL_l1z00_1167));
					if (((long) CINT(BgL_elemz00_1969) < (long) CINT(BgL_xz00_1170)))
						{	/* Lalr/util.scm 78 */
							return MAKE_YOUNG_PAIR(BgL_elemz00_1969, BgL_l1z00_1167);
						}
					else
						{	/* Lalr/util.scm 78 */
							if (((long) CINT(BgL_elemz00_1969) > (long) CINT(BgL_xz00_1170)))
								{	/* Lalr/util.scm 81 */
									obj_t BgL_arg1232z00_1173;

									{	/* Lalr/util.scm 81 */
										obj_t BgL_arg1239z00_1174;

										BgL_arg1239z00_1174 = CDR(((obj_t) BgL_l1z00_1167));
										BgL_arg1232z00_1173 =
											BGl_loopze71ze7zz__lalr_utilz00(BgL_elemz00_1969,
											BgL_arg1239z00_1174);
									}
									return MAKE_YOUNG_PAIR(BgL_xz00_1170, BgL_arg1232z00_1173);
								}
							else
								{	/* Lalr/util.scm 80 */
									return BgL_l1z00_1167;
								}
						}
				}
		}

	}



/* &sinsert */
	obj_t BGl_z62sinsertz62zz__lalr_utilz00(obj_t BgL_envz00_1962,
		obj_t BgL_elemz00_1963, obj_t BgL_lstz00_1964)
	{
		{	/* Lalr/util.scm 73 */
			return BGl_sinsertz00zz__lalr_utilz00(BgL_elemz00_1963, BgL_lstz00_1964);
		}

	}



/* filter */
	BGL_EXPORTED_DEF obj_t BGl_filterz00zz__lalr_utilz00(obj_t BgL_pz00_9,
		obj_t BgL_lstz00_10)
	{
		{	/* Lalr/util.scm 85 */
			return BGl_loopze70ze7zz__lalr_utilz00(BgL_pz00_9, BgL_lstz00_10);
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__lalr_utilz00(obj_t BgL_pz00_1968,
		obj_t BgL_lz00_1177)
	{
		{	/* Lalr/util.scm 86 */
		BGl_loopze70ze7zz__lalr_utilz00:
			if (NULLP(BgL_lz00_1177))
				{	/* Lalr/util.scm 87 */
					return BNIL;
				}
			else
				{	/* Lalr/util.scm 89 */
					obj_t BgL_xz00_1180;
					obj_t BgL_yz00_1181;

					BgL_xz00_1180 = CAR(((obj_t) BgL_lz00_1177));
					BgL_yz00_1181 = CDR(((obj_t) BgL_lz00_1177));
					if (CBOOL(PROCEDURE_ENTRY(BgL_pz00_1968) (BgL_pz00_1968,
								BgL_xz00_1180, BEOA)))
						{	/* Lalr/util.scm 90 */
							return
								MAKE_YOUNG_PAIR(BgL_xz00_1180,
								BGl_loopze70ze7zz__lalr_utilz00(BgL_pz00_1968, BgL_yz00_1181));
						}
					else
						{
							obj_t BgL_lz00_2054;

							BgL_lz00_2054 = BgL_yz00_1181;
							BgL_lz00_1177 = BgL_lz00_2054;
							goto BGl_loopze70ze7zz__lalr_utilz00;
						}
				}
		}

	}



/* &filter */
	obj_t BGl_z62filterz62zz__lalr_utilz00(obj_t BgL_envz00_1965,
		obj_t BgL_pz00_1966, obj_t BgL_lstz00_1967)
	{
		{	/* Lalr/util.scm 85 */
			return BGl_filterz00zz__lalr_utilz00(BgL_pz00_1966, BgL_lstz00_1967);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__lalr_utilz00()
	{
		{	/* Lalr/util.scm 11 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__lalr_utilz00()
	{
		{	/* Lalr/util.scm 11 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__lalr_utilz00()
	{
		{	/* Lalr/util.scm 11 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__lalr_utilz00()
	{
		{	/* Lalr/util.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1652z00zz__lalr_utilz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1652z00zz__lalr_utilz00));
		}

	}

#ifdef __cplusplus
}
#endif
