/*===========================================================================*/
/*   (Eval/expand.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expand.scm -indent -o objs/obj_u/Eval/expand.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62initialzd2expanderzb0zz__expandz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expandz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2oncezb0zz__expandz00(obj_t, obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__expandz00();
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__expandz00();
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62applicationzd2evalzd2expanderz12z70zz__expandz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62expandz12z70zz__expandz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_parsezd2formalzd2identz00zz__evutilsz00(obj_t, obj_t);
	static obj_t BGl_z62z52withzd2lexicalze2zz__expandz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31226ze3ze5zz__expandz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_appendzd221011zd2zz__expandz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__expandz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62expandzd2errorzb0zz__expandz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62applicationzd2evalzd2expanderz62zz__expandz00(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62z52lexicalzd2stackze2zz__expandz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31175ze3ze5zz__expandz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31281ze3ze5zz__expandz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandz00zz__expandz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evutilsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__typez00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_z52withzd2lexicalz80zz__expandz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expandz00();
	BGL_EXPORTED_DECL obj_t BGl_z52lexicalzd2stackz80zz__expandz00();
	static obj_t BGl_gczd2rootszd2initz00zz__expandz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expandz00();
	extern obj_t BGl_getzd2evalzd2expanderz00zz__macroz00(obj_t);
	static obj_t BGl_z62identifierzd2evalzd2expanderz62zz__expandz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandz12z12zz__expandz00(obj_t);
	extern obj_t BGl_getzd2sourcezd2locationz00zz__readerz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2oncezd2zz__expandz00(obj_t);
	static obj_t BGl_z62initialzd2expanderz12za2zz__expandz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol1708z00zz__expandz00 = BUNSPEC;
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_loopze70ze7zz__expandz00(obj_t, obj_t);
	static obj_t BGl_z62expandz62zz__expandz00(obj_t, obj_t);
	static obj_t BGl_initialzd2expanderzf2applicationz20zz__expandz00(obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2oncezd2envz00zz__expandz00,
		BgL_bgl_za762expandza7d2once1711z00, BGl_z62expandzd2oncezb0zz__expandz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_applicationzd2evalzd2expanderzd2envzd2zz__expandz00,
		BgL_bgl_za762applicationza7d1712z00,
		BGl_z62applicationzd2evalzd2expanderz62zz__expandz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1700z00zz__expandz00,
		BgL_bgl_string1700za700za7za7_1713za7, "expand", 6);
	      DEFINE_STRING(BGl_string1701z00zz__expandz00,
		BgL_bgl_string1701za700za7za7_1714za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string1703z00zz__expandz00,
		BgL_bgl_string1703za700za7za7_1715za7, "application", 11);
	      DEFINE_STRING(BGl_string1704z00zz__expandz00,
		BgL_bgl_string1704za700za7za7_1716za7, "/tmp/4.4a/runtime/Eval/expand.scm",
		33);
	      DEFINE_STRING(BGl_string1705z00zz__expandz00,
		BgL_bgl_string1705za700za7za7_1717za7, "&%with-lexical", 14);
	      DEFINE_STRING(BGl_string1706z00zz__expandz00,
		BgL_bgl_string1706za700za7za7_1718za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string1707z00zz__expandz00,
		BgL_bgl_string1707za700za7za7_1719za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1709z00zz__expandz00,
		BgL_bgl_string1709za700za7za7_1720za7, "at", 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1702z00zz__expandz00,
		BgL_bgl_za762za7c3za704anonymo1721za7,
		BGl_z62zc3z04anonymousza31226ze3ze5zz__expandz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1710z00zz__expandz00,
		BgL_bgl_string1710za700za7za7_1722za7, "__expand", 8);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_initialzd2expanderz12zd2envz12zz__expandz00,
		BgL_bgl_za762initialza7d2exp1723z00,
		BGl_z62initialzd2expanderz12za2zz__expandz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1699z00zz__expandz00,
		BgL_bgl_za762za7c3za704anonymo1724za7,
		BGl_z62zc3z04anonymousza31175ze3ze5zz__expandz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_identifierzd2evalzd2expanderzd2envzd2zz__expandz00,
		BgL_bgl_za762identifierza7d21725z00,
		BGl_z62identifierzd2evalzd2expanderz62zz__expandz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_initialzd2expanderzd2envz00zz__expandz00,
		BgL_bgl_za762initialza7d2exp1726z00,
		BGl_z62initialzd2expanderzb0zz__expandz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2envzd2zz__expandz00,
		BgL_bgl_za762expandza762za7za7__1727z00, BGl_z62expandz62zz__expandz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52withzd2lexicalzd2envz52zz__expandz00,
		BgL_bgl_za762za752withza7d2lex1728za7,
		BGl_z62z52withzd2lexicalze2zz__expandz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandz12zd2envzc0zz__expandz00,
		BgL_bgl_za762expandza712za770za71729z00, BGl_z62expandz12z70zz__expandz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2errorzd2envz00zz__expandz00,
		BgL_bgl_za762expandza7d2erro1730z00, BGl_z62expandzd2errorzb0zz__expandz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52lexicalzd2stackzd2envz52zz__expandz00,
		BgL_bgl_za762za752lexicalza7d21731za7,
		BGl_z62z52lexicalzd2stackze2zz__expandz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_applicationzd2evalzd2expanderz12zd2envzc0zz__expandz00,
		BgL_bgl_za762applicationza7d1732z00,
		BGl_z62applicationzd2evalzd2expanderz12z70zz__expandz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__expandz00));
		     ADD_ROOT((void *) (&BGl_symbol1708z00zz__expandz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long
		BgL_checksumz00_1975, char *BgL_fromz00_1976)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expandz00))
				{
					BGl_requirezd2initializa7ationz75zz__expandz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expandz00();
					BGl_cnstzd2initzd2zz__expandz00();
					BGl_importedzd2moduleszd2initz00zz__expandz00();
					return BGl_methodzd2initzd2zz__expandz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expandz00()
	{
		{	/* Eval/expand.scm 14 */
			return (BGl_symbol1708z00zz__expandz00 =
				bstring_to_symbol(BGl_string1709z00zz__expandz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expandz00()
	{
		{	/* Eval/expand.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__expandz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1083;

				BgL_headz00_1083 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1614;
					obj_t BgL_tailz00_1615;

					BgL_prevz00_1614 = BgL_headz00_1083;
					BgL_tailz00_1615 = BgL_l1z00_1;
				BgL_loopz00_1613:
					if (PAIRP(BgL_tailz00_1615))
						{
							obj_t BgL_newzd2prevzd2_1621;

							BgL_newzd2prevzd2_1621 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1615), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1614, BgL_newzd2prevzd2_1621);
							{
								obj_t BgL_tailz00_1993;
								obj_t BgL_prevz00_1992;

								BgL_prevz00_1992 = BgL_newzd2prevzd2_1621;
								BgL_tailz00_1993 = CDR(BgL_tailz00_1615);
								BgL_tailz00_1615 = BgL_tailz00_1993;
								BgL_prevz00_1614 = BgL_prevz00_1992;
								goto BgL_loopz00_1613;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_1083);
			}
		}

	}



/* expand */
	BGL_EXPORTED_DEF obj_t BGl_expandz00zz__expandz00(obj_t BgL_xz00_3)
	{
		{	/* Eval/expand.scm 71 */
			return
				BGl_initialzd2expanderzf2applicationz20zz__expandz00(BgL_xz00_3,
				BGl_initialzd2expanderzd2envz00zz__expandz00,
				BGl_applicationzd2evalzd2expanderzd2envzd2zz__expandz00);
		}

	}



/* &expand */
	obj_t BGl_z62expandz62zz__expandz00(obj_t BgL_envz00_1924,
		obj_t BgL_xz00_1925)
	{
		{	/* Eval/expand.scm 71 */
			return BGl_expandz00zz__expandz00(BgL_xz00_1925);
		}

	}



/* expand! */
	BGL_EXPORTED_DEF obj_t BGl_expandz12z12zz__expandz00(obj_t BgL_xz00_4)
	{
		{	/* Eval/expand.scm 77 */
			return
				BGl_initialzd2expanderzf2applicationz20zz__expandz00(BgL_xz00_4,
				BGl_initialzd2expanderz12zd2envz12zz__expandz00,
				BGl_applicationzd2evalzd2expanderz12zd2envzc0zz__expandz00);
		}

	}



/* &expand! */
	obj_t BGl_z62expandz12z70zz__expandz00(obj_t BgL_envz00_1932,
		obj_t BgL_xz00_1933)
	{
		{	/* Eval/expand.scm 77 */
			return BGl_expandz12z12zz__expandz00(BgL_xz00_1933);
		}

	}



/* expand-once */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2oncezd2zz__expandz00(obj_t BgL_xz00_5)
	{
		{	/* Eval/expand.scm 83 */
			return
				BGl_initialzd2expanderzf2applicationz20zz__expandz00(BgL_xz00_5,
				BGl_proc1699z00zz__expandz00,
				BGl_applicationzd2evalzd2expanderzd2envzd2zz__expandz00);
		}

	}



/* &expand-once */
	obj_t BGl_z62expandzd2oncezb0zz__expandz00(obj_t BgL_envz00_1941,
		obj_t BgL_xz00_1942)
	{
		{	/* Eval/expand.scm 83 */
			return BGl_expandzd2oncezd2zz__expandz00(BgL_xz00_1942);
		}

	}



/* &<@anonymous:1175> */
	obj_t BGl_z62zc3z04anonymousza31175ze3ze5zz__expandz00(obj_t BgL_envz00_1943,
		obj_t BgL_xz00_1944, obj_t BgL_ez00_1945)
	{
		{	/* Eval/expand.scm 84 */
			return BgL_xz00_1944;
		}

	}



/* &initial-expander */
	obj_t BGl_z62initialzd2expanderzb0zz__expandz00(obj_t BgL_envz00_1926,
		obj_t BgL_xz00_1927, obj_t BgL_ez00_1928)
	{
		{	/* Eval/expand.scm 89 */
			return
				BGl_initialzd2expanderzf2applicationz20zz__expandz00(BgL_xz00_1927,
				BgL_ez00_1928, BGl_applicationzd2evalzd2expanderzd2envzd2zz__expandz00);
		}

	}



/* &initial-expander! */
	obj_t BGl_z62initialzd2expanderz12za2zz__expandz00(obj_t BgL_envz00_1934,
		obj_t BgL_xz00_1935, obj_t BgL_ez00_1936)
	{
		{	/* Eval/expand.scm 95 */
			return
				BGl_initialzd2expanderzf2applicationz20zz__expandz00(BgL_xz00_1935,
				BgL_ez00_1936,
				BGl_applicationzd2evalzd2expanderz12zd2envzc0zz__expandz00);
		}

	}



/* initial-expander/application */
	obj_t BGl_initialzd2expanderzf2applicationz20zz__expandz00(obj_t BgL_xz00_10,
		obj_t BgL_ez00_11, obj_t BgL_aez00_12)
	{
		{	/* Eval/expand.scm 101 */
			{	/* Eval/expand.scm 102 */
				obj_t BgL_e1z00_1096;

				if (SYMBOLP(BgL_xz00_10))
					{	/* Eval/expand.scm 103 */
						BgL_e1z00_1096 =
							BGl_identifierzd2evalzd2expanderzd2envzd2zz__expandz00;
					}
				else
					{	/* Eval/expand.scm 103 */
						if (NULLP(BgL_xz00_10))
							{	/* Eval/expand.scm 105 */
								BgL_e1z00_1096 =
									BGl_errorz00zz__errorz00(BGl_string1700z00zz__expandz00,
									BGl_string1701z00zz__expandz00, BNIL);
							}
						else
							{	/* Eval/expand.scm 105 */
								if (PAIRP(BgL_xz00_10))
									{	/* Eval/expand.scm 109 */
										bool_t BgL_test1738z00_2011;

										{	/* Eval/expand.scm 109 */
											obj_t BgL_tmpz00_2012;

											BgL_tmpz00_2012 = CAR(BgL_xz00_10);
											BgL_test1738z00_2011 = SYMBOLP(BgL_tmpz00_2012);
										}
										if (BgL_test1738z00_2011)
											{	/* Eval/expand.scm 111 */
												obj_t BgL_g1039z00_1111;

												BgL_g1039z00_1111 =
													BGl_getzd2evalzd2expanderz00zz__macroz00(CAR
													(BgL_xz00_10));
												if (CBOOL(BgL_g1039z00_1111))
													{	/* Eval/expand.scm 111 */
														BgL_e1z00_1096 = BgL_g1039z00_1111;
													}
												else
													{	/* Eval/expand.scm 115 */
														obj_t BgL_locz00_1114;

														BgL_locz00_1114 =
															BGl_getzd2sourcezd2locationz00zz__readerz00
															(BgL_xz00_10);
														{	/* Eval/expand.scm 115 */
															obj_t BgL_idz00_1115;

															{	/* Eval/expand.scm 116 */
																obj_t BgL_arg1216z00_1124;

																BgL_arg1216z00_1124 =
																	BGl_parsezd2formalzd2identz00zz__evutilsz00
																	(CAR(BgL_xz00_10), BgL_locz00_1114);
																BgL_idz00_1115 =
																	CAR(((obj_t) BgL_arg1216z00_1124));
															}
															{	/* Eval/expand.scm 116 */

																{	/* Eval/expand.scm 118 */
																	bool_t BgL_test1740z00_2024;

																	{	/* Eval/expand.scm 118 */
																		obj_t BgL_arg1208z00_1122;

																		{	/* Eval/expand.scm 118 */
																			obj_t BgL_arg1211z00_1123;

																			{	/* Eval/expand.scm 118 */
																				obj_t BgL_res1622z00_1640;

																				BgL_res1622z00_1640 =
																					BGL_LEXICAL_STACK();
																				BgL_arg1211z00_1123 =
																					BgL_res1622z00_1640;
																			}
																			BgL_arg1208z00_1122 =
																				BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_idz00_1115, BgL_arg1211z00_1123);
																		}
																		BgL_test1740z00_2024 =
																			PAIRP(BgL_arg1208z00_1122);
																	}
																	if (BgL_test1740z00_2024)
																		{	/* Eval/expand.scm 118 */
																			BgL_e1z00_1096 = BgL_aez00_12;
																		}
																	else
																		{	/* Eval/expand.scm 120 */
																			obj_t BgL_g1041z00_1119;

																			BgL_g1041z00_1119 =
																				BGl_getzd2evalzd2expanderz00zz__macroz00
																				(BgL_idz00_1115);
																			if (CBOOL(BgL_g1041z00_1119))
																				{	/* Eval/expand.scm 120 */
																					BgL_e1z00_1096 = BgL_g1041z00_1119;
																				}
																			else
																				{	/* Eval/expand.scm 120 */
																					BgL_e1z00_1096 = BgL_aez00_12;
																				}
																		}
																}
															}
														}
													}
											}
										else
											{	/* Eval/expand.scm 109 */
												BgL_e1z00_1096 = BgL_aez00_12;
											}
									}
								else
									{	/* Eval/expand.scm 107 */
										BgL_e1z00_1096 = BGl_proc1702z00zz__expandz00;
									}
							}
					}
				{	/* Eval/expand.scm 127 */
					obj_t BgL_newz00_1097;

					BgL_newz00_1097 =
						PROCEDURE_ENTRY(BgL_e1z00_1096) (BgL_e1z00_1096, BgL_xz00_10,
						BgL_ez00_11, BEOA);
					{	/* Eval/expand.scm 128 */
						bool_t BgL_test1742z00_2036;

						if (PAIRP(BgL_newz00_1097))
							{	/* Eval/expand.scm 128 */
								bool_t BgL_test1744z00_2039;

								{	/* Eval/expand.scm 128 */
									bool_t BgL_res1625z00_1643;

									BgL_res1625z00_1643 = EPAIRP(BgL_newz00_1097);
									BgL_test1744z00_2039 = BgL_res1625z00_1643;
								}
								if (BgL_test1744z00_2039)
									{	/* Eval/expand.scm 128 */
										BgL_test1742z00_2036 = ((bool_t) 0);
									}
								else
									{	/* Eval/expand.scm 128 */
										bool_t BgL_res1626z00_1644;

										BgL_res1626z00_1644 = EPAIRP(BgL_xz00_10);
										BgL_test1742z00_2036 = BgL_res1626z00_1644;
									}
							}
						else
							{	/* Eval/expand.scm 128 */
								BgL_test1742z00_2036 = ((bool_t) 0);
							}
						if (BgL_test1742z00_2036)
							{	/* Eval/expand.scm 129 */
								obj_t BgL_arg1179z00_1101;
								obj_t BgL_arg1186z00_1102;
								obj_t BgL_arg1190z00_1103;

								BgL_arg1179z00_1101 = CAR(BgL_newz00_1097);
								BgL_arg1186z00_1102 = CDR(BgL_newz00_1097);
								BgL_arg1190z00_1103 = CER(((obj_t) BgL_xz00_10));
								{	/* Eval/expand.scm 129 */
									obj_t BgL_res1627z00_1648;

									BgL_res1627z00_1648 =
										MAKE_YOUNG_EPAIR(BgL_arg1179z00_1101, BgL_arg1186z00_1102,
										BgL_arg1190z00_1103);
									return BgL_res1627z00_1648;
								}
							}
						else
							{	/* Eval/expand.scm 128 */
								return BgL_newz00_1097;
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1226> */
	obj_t BGl_z62zc3z04anonymousza31226ze3ze5zz__expandz00(obj_t BgL_envz00_1947,
		obj_t BgL_xz00_1948, obj_t BgL_ez00_1949)
	{
		{	/* Eval/expand.scm 108 */
			return BgL_xz00_1948;
		}

	}



/* &identifier-eval-expander */
	obj_t BGl_z62identifierzd2evalzd2expanderz62zz__expandz00(obj_t
		BgL_envz00_1950, obj_t BgL_xz00_1951, obj_t BgL_ez00_1952)
	{
		{	/* Eval/expand.scm 135 */
			return BgL_xz00_1951;
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__expandz00(obj_t BgL_ez00_1966, obj_t BgL_xz00_1132)
	{
		{	/* Eval/expand.scm 142 */
			if (NULLP(BgL_xz00_1132))
				{	/* Eval/expand.scm 144 */
					return BNIL;
				}
			else
				{	/* Eval/expand.scm 144 */
					if (PAIRP(BgL_xz00_1132))
						{	/* Eval/expand.scm 148 */
							bool_t BgL_test1747z00_2051;

							{	/* Eval/expand.scm 148 */
								bool_t BgL_res1630z00_1651;

								BgL_res1630z00_1651 = EPAIRP(BgL_xz00_1132);
								BgL_test1747z00_2051 = BgL_res1630z00_1651;
							}
							if (BgL_test1747z00_2051)
								{	/* Eval/expand.scm 149 */
									obj_t BgL_arg1232z00_1137;
									obj_t BgL_arg1239z00_1138;
									obj_t BgL_arg1242z00_1139;

									{	/* Eval/expand.scm 149 */
										obj_t BgL_arg1243z00_1140;

										BgL_arg1243z00_1140 = CAR(BgL_xz00_1132);
										BgL_arg1232z00_1137 =
											PROCEDURE_ENTRY(BgL_ez00_1966) (BgL_ez00_1966,
											BgL_arg1243z00_1140, BgL_ez00_1966, BEOA);
									}
									BgL_arg1239z00_1138 =
										BGl_loopze70ze7zz__expandz00(BgL_ez00_1966,
										CDR(BgL_xz00_1132));
									BgL_arg1242z00_1139 = CER(BgL_xz00_1132);
									{	/* Eval/expand.scm 149 */
										obj_t BgL_res1631z00_1655;

										BgL_res1631z00_1655 =
											MAKE_YOUNG_EPAIR(BgL_arg1232z00_1137, BgL_arg1239z00_1138,
											BgL_arg1242z00_1139);
										return BgL_res1631z00_1655;
									}
								}
							else
								{	/* Eval/expand.scm 151 */
									obj_t BgL_arg1246z00_1142;
									obj_t BgL_arg1247z00_1143;

									{	/* Eval/expand.scm 151 */
										obj_t BgL_arg1250z00_1144;

										BgL_arg1250z00_1144 = CAR(BgL_xz00_1132);
										BgL_arg1246z00_1142 =
											PROCEDURE_ENTRY(BgL_ez00_1966) (BgL_ez00_1966,
											BgL_arg1250z00_1144, BgL_ez00_1966, BEOA);
									}
									BgL_arg1247z00_1143 =
										BGl_loopze70ze7zz__expandz00(BgL_ez00_1966,
										CDR(BgL_xz00_1132));
									return
										MAKE_YOUNG_PAIR(BgL_arg1246z00_1142, BgL_arg1247z00_1143);
								}
						}
					else
						{	/* Eval/expand.scm 146 */
							return
								BGl_errorz00zz__errorz00(BGl_string1703z00zz__expandz00,
								BGl_string1701z00zz__expandz00, BgL_xz00_1132);
						}
				}
		}

	}



/* &application-eval-expander */
	obj_t BGl_z62applicationzd2evalzd2expanderz62zz__expandz00(obj_t
		BgL_envz00_1929, obj_t BgL_xz00_1930, obj_t BgL_ez00_1931)
	{
		{	/* Eval/expand.scm 141 */
			return BGl_loopze70ze7zz__expandz00(BgL_ez00_1931, BgL_xz00_1930);
		}

	}



/* &application-eval-expander! */
	obj_t BGl_z62applicationzd2evalzd2expanderz12z70zz__expandz00(obj_t
		BgL_envz00_1937, obj_t BgL_xz00_1938, obj_t BgL_ez00_1939)
	{
		{	/* Eval/expand.scm 156 */
			{
				obj_t BgL_yz00_1972;

				BgL_yz00_1972 = BgL_xz00_1938;
			BgL_loopz00_1971:
				if (NULLP(BgL_yz00_1972))
					{	/* Eval/expand.scm 159 */
						return BgL_xz00_1938;
					}
				else
					{	/* Eval/expand.scm 159 */
						if (PAIRP(BgL_yz00_1972))
							{	/* Eval/expand.scm 161 */
								{	/* Eval/expand.scm 164 */
									obj_t BgL_arg1256z00_1973;

									{	/* Eval/expand.scm 164 */
										obj_t BgL_arg1258z00_1974;

										BgL_arg1258z00_1974 = CAR(BgL_yz00_1972);
										BgL_arg1256z00_1973 =
											PROCEDURE_ENTRY(BgL_ez00_1939) (BgL_ez00_1939,
											BgL_arg1258z00_1974, BgL_ez00_1939, BEOA);
									}
									SET_CAR(BgL_yz00_1972, BgL_arg1256z00_1973);
								}
								{
									obj_t BgL_yz00_2085;

									BgL_yz00_2085 = CDR(BgL_yz00_1972);
									BgL_yz00_1972 = BgL_yz00_2085;
									goto BgL_loopz00_1971;
								}
							}
						else
							{	/* Eval/expand.scm 161 */
								return
									BGl_errorz00zz__errorz00(BGl_string1703z00zz__expandz00,
									BGl_string1701z00zz__expandz00, BgL_yz00_1972);
							}
					}
			}
		}

	}



/* %lexical-stack */
	BGL_EXPORTED_DEF obj_t BGl_z52lexicalzd2stackz80zz__expandz00()
	{
		{	/* Eval/expand.scm 170 */
			return BGL_LEXICAL_STACK();
		}

	}



/* &%lexical-stack */
	obj_t BGl_z62z52lexicalzd2stackze2zz__expandz00(obj_t BgL_envz00_1953)
	{
		{	/* Eval/expand.scm 170 */
			return BGl_z52lexicalzd2stackz80zz__expandz00();
		}

	}



/* %with-lexical */
	BGL_EXPORTED_DEF obj_t BGl_z52withzd2lexicalz80zz__expandz00(obj_t
		BgL_newz00_19, obj_t BgL_formz00_20, obj_t BgL_ez00_21, obj_t BgL_keyz00_22)
	{
		{	/* Eval/expand.scm 176 */
			{	/* Eval/expand.scm 177 */
				obj_t BgL_oldzd2lexicalzd2stackz00_1156;

				{	/* Eval/expand.scm 177 */
					obj_t BgL_res1634z00_1663;

					BgL_res1634z00_1663 = BGL_LEXICAL_STACK();
					BgL_oldzd2lexicalzd2stackz00_1156 = BgL_res1634z00_1663;
				}
				{	/* Eval/expand.scm 179 */
					obj_t BgL_arg1268z00_1157;

					{	/* Eval/expand.scm 179 */
						obj_t BgL_arg1270z00_1158;

						if (NULLP(BgL_newz00_19))
							{	/* Eval/expand.scm 179 */
								BgL_arg1270z00_1158 = BNIL;
							}
						else
							{	/* Eval/expand.scm 179 */
								obj_t BgL_head1087z00_1161;

								{	/* Eval/expand.scm 179 */
									obj_t BgL_res1636z00_1665;

									BgL_res1636z00_1665 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1087z00_1161 = BgL_res1636z00_1665;
								}
								{
									obj_t BgL_l1085z00_1163;
									obj_t BgL_tail1088z00_1164;

									BgL_l1085z00_1163 = BgL_newz00_19;
									BgL_tail1088z00_1164 = BgL_head1087z00_1161;
								BgL_zc3z04anonymousza31272ze3z87_1165:
									if (NULLP(BgL_l1085z00_1163))
										{	/* Eval/expand.scm 179 */
											BgL_arg1270z00_1158 = CDR(BgL_head1087z00_1161);
										}
									else
										{	/* Eval/expand.scm 179 */
											obj_t BgL_newtail1089z00_1167;

											{	/* Eval/expand.scm 179 */
												obj_t BgL_arg1275z00_1169;

												{	/* Eval/expand.scm 179 */
													obj_t BgL_nz00_1170;

													BgL_nz00_1170 = CAR(((obj_t) BgL_l1085z00_1163));
													{	/* Eval/expand.scm 180 */
														obj_t BgL_fz00_1171;

														BgL_fz00_1171 =
															BGl_parsezd2formalzd2identz00zz__evutilsz00
															(BgL_nz00_1170,
															BGl_getzd2sourcezd2locationz00zz__readerz00
															(BgL_ez00_21));
														if (PAIRP(BgL_fz00_1171))
															{	/* Eval/expand.scm 182 */
																BgL_arg1275z00_1169 =
																	MAKE_YOUNG_PAIR(CAR(BgL_fz00_1171),
																	BgL_keyz00_22);
															}
														else
															{	/* Eval/expand.scm 182 */
																BgL_arg1275z00_1169 =
																	MAKE_YOUNG_PAIR(BgL_nz00_1170, BgL_keyz00_22);
															}
													}
												}
												{	/* Eval/expand.scm 179 */
													obj_t BgL_res1639z00_1671;

													BgL_res1639z00_1671 =
														MAKE_YOUNG_PAIR(BgL_arg1275z00_1169, BNIL);
													BgL_newtail1089z00_1167 = BgL_res1639z00_1671;
												}
											}
											SET_CDR(BgL_tail1088z00_1164, BgL_newtail1089z00_1167);
											{	/* Eval/expand.scm 179 */
												obj_t BgL_arg1274z00_1168;

												BgL_arg1274z00_1168 = CDR(((obj_t) BgL_l1085z00_1163));
												{
													obj_t BgL_tail1088z00_2111;
													obj_t BgL_l1085z00_2110;

													BgL_l1085z00_2110 = BgL_arg1274z00_1168;
													BgL_tail1088z00_2111 = BgL_newtail1089z00_1167;
													BgL_tail1088z00_1164 = BgL_tail1088z00_2111;
													BgL_l1085z00_1163 = BgL_l1085z00_2110;
													goto BgL_zc3z04anonymousza31272ze3z87_1165;
												}
											}
										}
								}
							}
						BgL_arg1268z00_1157 =
							BGl_appendzd221011zd2zz__expandz00(BgL_arg1270z00_1158,
							BgL_oldzd2lexicalzd2stackz00_1156);
					}
					BGL_LEXICAL_STACK_SET(BgL_arg1268z00_1157);
					BUNSPEC;
				}
				{	/* Eval/expand.scm 187 */
					obj_t BgL_exitd1043z00_1176;

					BgL_exitd1043z00_1176 = BGL_EXITD_TOP_AS_OBJ();
					{
						obj_t BgL_zc3z04anonymousza31281ze3z87_1954;

						BgL_zc3z04anonymousza31281ze3z87_1954 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31281ze3ze5zz__expandz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31281ze3z87_1954,
							(int) (((long) 0)), BgL_oldzd2lexicalzd2stackz00_1156);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1043z00_1176,
							BgL_zc3z04anonymousza31281ze3z87_1954);
						{	/* Eval/expand.scm 188 */
							obj_t BgL_tmp1045z00_1178;

							BgL_tmp1045z00_1178 =
								PROCEDURE_ENTRY(BgL_ez00_21) (BgL_ez00_21, BgL_formz00_20,
								BgL_ez00_21, BEOA);
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1043z00_1176);
							BGL_LEXICAL_STACK_SET(BgL_oldzd2lexicalzd2stackz00_1156);
							BUNSPEC;
							return BgL_tmp1045z00_1178;
						}
					}
				}
			}
		}

	}



/* &%with-lexical */
	obj_t BGl_z62z52withzd2lexicalze2zz__expandz00(obj_t BgL_envz00_1955,
		obj_t BgL_newz00_1956, obj_t BgL_formz00_1957, obj_t BgL_ez00_1958,
		obj_t BgL_keyz00_1959)
	{
		{	/* Eval/expand.scm 176 */
			{	/* Eval/expand.scm 177 */
				obj_t BgL_auxz00_2135;
				obj_t BgL_auxz00_2128;

				if (PROCEDUREP(BgL_ez00_1958))
					{	/* Eval/expand.scm 177 */
						BgL_auxz00_2135 = BgL_ez00_1958;
					}
				else
					{
						obj_t BgL_auxz00_2138;

						BgL_auxz00_2138 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1704z00zz__expandz00,
							BINT(((long) 6267)), BGl_string1705z00zz__expandz00,
							BGl_string1707z00zz__expandz00, BgL_ez00_1958);
						FAILURE(BgL_auxz00_2138, BFALSE, BFALSE);
					}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_newz00_1956))
					{	/* Eval/expand.scm 177 */
						BgL_auxz00_2128 = BgL_newz00_1956;
					}
				else
					{
						obj_t BgL_auxz00_2131;

						BgL_auxz00_2131 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1704z00zz__expandz00,
							BINT(((long) 6267)), BGl_string1705z00zz__expandz00,
							BGl_string1706z00zz__expandz00, BgL_newz00_1956);
						FAILURE(BgL_auxz00_2131, BFALSE, BFALSE);
					}
				return
					BGl_z52withzd2lexicalz80zz__expandz00(BgL_auxz00_2128,
					BgL_formz00_1957, BgL_auxz00_2135, BgL_keyz00_1959);
			}
		}

	}



/* &<@anonymous:1281> */
	obj_t BGl_z62zc3z04anonymousza31281ze3ze5zz__expandz00(obj_t BgL_envz00_1960)
	{
		{	/* Eval/expand.scm 187 */
			{
				obj_t BgL_oldzd2lexicalzd2stackz00_1961;

				BgL_oldzd2lexicalzd2stackz00_1961 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1960, (int) (((long) 0))));
				BGL_LEXICAL_STACK_SET(BgL_oldzd2lexicalzd2stackz00_1961);
				return BUNSPEC;
			}
		}

	}



/* expand-error */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2errorzd2zz__expandz00(obj_t
		BgL_procz00_23, obj_t BgL_msgz00_24, obj_t BgL_objz00_25)
	{
		{	/* Eval/expand.scm 194 */
			{	/* Eval/expand.scm 195 */
				bool_t BgL_test1755z00_2147;

				{	/* Eval/expand.scm 195 */
					bool_t BgL_res1640z00_1674;

					BgL_res1640z00_1674 = EPAIRP(BgL_objz00_25);
					BgL_test1755z00_2147 = BgL_res1640z00_1674;
				}
				if (BgL_test1755z00_2147)
					{	/* Eval/expand.scm 196 */
						obj_t BgL_ezd2103zd2_1186;

						BgL_ezd2103zd2_1186 = CER(((obj_t) BgL_objz00_25));
						if (PAIRP(BgL_ezd2103zd2_1186))
							{	/* Eval/expand.scm 196 */
								obj_t BgL_cdrzd2109zd2_1188;

								BgL_cdrzd2109zd2_1188 = CDR(BgL_ezd2103zd2_1186);
								if (
									(CAR(BgL_ezd2103zd2_1186) == BGl_symbol1708z00zz__expandz00))
									{	/* Eval/expand.scm 196 */
										if (PAIRP(BgL_cdrzd2109zd2_1188))
											{	/* Eval/expand.scm 196 */
												obj_t BgL_cdrzd2113zd2_1192;

												BgL_cdrzd2113zd2_1192 = CDR(BgL_cdrzd2109zd2_1188);
												if (PAIRP(BgL_cdrzd2113zd2_1192))
													{	/* Eval/expand.scm 196 */
														if (NULLP(CDR(BgL_cdrzd2113zd2_1192)))
															{	/* Eval/expand.scm 196 */
																return
																	BGl_errorzf2locationzf2zz__errorz00
																	(BgL_procz00_23, BgL_msgz00_24, BgL_objz00_25,
																	CAR(BgL_cdrzd2109zd2_1188),
																	CAR(BgL_cdrzd2113zd2_1192));
															}
														else
															{	/* Eval/expand.scm 196 */
																return
																	BGl_errorz00zz__errorz00(BgL_procz00_23,
																	BgL_msgz00_24, BgL_objz00_25);
															}
													}
												else
													{	/* Eval/expand.scm 196 */
														return
															BGl_errorz00zz__errorz00(BgL_procz00_23,
															BgL_msgz00_24, BgL_objz00_25);
													}
											}
										else
											{	/* Eval/expand.scm 196 */
												return
													BGl_errorz00zz__errorz00(BgL_procz00_23,
													BgL_msgz00_24, BgL_objz00_25);
											}
									}
								else
									{	/* Eval/expand.scm 196 */
										return
											BGl_errorz00zz__errorz00(BgL_procz00_23, BgL_msgz00_24,
											BgL_objz00_25);
									}
							}
						else
							{	/* Eval/expand.scm 196 */
								return
									BGl_errorz00zz__errorz00(BgL_procz00_23, BgL_msgz00_24,
									BgL_objz00_25);
							}
					}
				else
					{	/* Eval/expand.scm 195 */
						return
							BGl_errorz00zz__errorz00(BgL_procz00_23, BgL_msgz00_24,
							BgL_objz00_25);
					}
			}
		}

	}



/* &expand-error */
	obj_t BGl_z62expandzd2errorzb0zz__expandz00(obj_t BgL_envz00_1962,
		obj_t BgL_procz00_1963, obj_t BgL_msgz00_1964, obj_t BgL_objz00_1965)
	{
		{	/* Eval/expand.scm 194 */
			return
				BGl_expandzd2errorzd2zz__expandz00(BgL_procz00_1963, BgL_msgz00_1964,
				BgL_objz00_1965);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expandz00()
	{
		{	/* Eval/expand.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expandz00()
	{
		{	/* Eval/expand.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expandz00()
	{
		{	/* Eval/expand.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expandz00()
	{
		{	/* Eval/expand.scm 14 */
			BGl_modulezd2initializa7ationz75zz__typez00(((long) 121046386),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 251315035),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 439352636),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 528345319),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			BGl_modulezd2initializa7ationz75zz__evutilsz00(((long) 470356200),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
			return BGl_modulezd2initializa7ationz75zz__macroz00(((long) 261395457),
				BSTRING_TO_STRING(BGl_string1710z00zz__expandz00));
		}

	}

#ifdef __cplusplus
}
#endif
