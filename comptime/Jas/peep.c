/*===========================================================================*/
/*   (Jas/peep.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/peep.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static bool_t BGl_hugezf3zf3zzjas_peepz00(obj_t);
	static bool_t BGl_store2zf3zf3zzjas_peepz00(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzjas_peepz00();
	BGL_IMPORT bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_walkze70ze7zzjas_peepz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_nocontzf3zf3zzjas_peepz00(obj_t);
	BGL_IMPORT obj_t make_vector(long, obj_t);
	static obj_t BGl_appendzd221011zd2zzjas_peepz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzjas_peepz00();
	static bool_t BGl_load2zf3zf3zzjas_peepz00(obj_t);
	static obj_t BGl_singlezd2labzf3z21zzjas_peepz00(obj_t);
	static obj_t BGl_zc3z04anonymousza32409ze3ze70z60zzjas_peepz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t
		BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00 = BUNSPEC;
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_walkzd2fromze70z35zzjas_peepz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzjas_peepz00();
	static obj_t BGl_collectze70ze7zzjas_peepz00(obj_t, obj_t, obj_t, long);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_peepz00 = BUNSPEC;
	static obj_t BGl_branchzf3zf3zzjas_peepz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_peepz00();
	static obj_t BGl_walkzd2atzd2labze70ze7zzjas_peepz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzjas_peepz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_peepz00zzjas_peepz00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2jaszd2peepholeza2zd2zzjas_peepz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_simplematchz00zzjas_peepz00(obj_t);
	static obj_t BGl_removesequencez00zzjas_peepz00(obj_t);
	static obj_t BGl_z62zc3z04peepza31217ze3ze5zzjas_peepz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_loadzf3zf3zzjas_peepz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_peepz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_stackz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
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
	extern obj_t BGl_nbpushz00zzjas_stackz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzjas_peepz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_peepz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_peepz00();
	static obj_t BGl_keeplocalsz00zzjas_peepz00(obj_t, long, long, obj_t);
	static long BGl_packlocalsz00zzjas_peepz00(obj_t, long, long, obj_t);
	static obj_t BGl_countzd2insze70z35zzjas_peepz00(obj_t, obj_t);
	static obj_t BGl_removebranchz00zzjas_peepz00(obj_t);
	static obj_t BGl_countzd2labze70z35zzjas_peepz00(obj_t, obj_t);
	static bool_t BGl_storezf3zf3zzjas_peepz00(obj_t);
	extern obj_t BGl_nbpopz00zzjas_stackz00(obj_t, obj_t);
	static obj_t __cnst[9];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2822z00zzjas_peepz00,
		BgL_bgl_za762za7c3za704peepza7a32833z00,
		BGl_z62zc3z04peepza31217ze3ze5zzjas_peepz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2823z00zzjas_peepz00,
		BgL_bgl_string2823za700za7za7j2834za7, "jas_peep", 8);
	      DEFINE_STRING(BGl_string2824z00zzjas_peepz00,
		BgL_bgl_string2824za700za7za7j2835za7,
		"done begin (4) (3) h dummy ok (198 199) (167 191) ", 50);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzjas_peepz00));
		     ADD_ROOT((void *) (&BGl_peepz00zzjas_peepz00));
		     ADD_ROOT((void *) (&BGl_za2jaszd2peepholeza2zd2zzjas_peepz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_peepz00(long
		BgL_checksumz00_2961, char *BgL_fromz00_2962)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_peepz00))
				{
					BGl_requirezd2initializa7ationz75zzjas_peepz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzjas_peepz00();
					BGl_libraryzd2moduleszd2initz00zzjas_peepz00();
					BGl_cnstzd2initzd2zzjas_peepz00();
					BGl_importedzd2moduleszd2initz00zzjas_peepz00();
					return BGl_toplevelzd2initzd2zzjas_peepz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_peepz00()
	{
		{	/* Jas/peep.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_peep");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_peep");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_peep");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_peep");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"jas_peep");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_peep");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"jas_peep");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_peep");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_peepz00()
	{
		{	/* Jas/peep.scm 1 */
			{	/* Jas/peep.scm 1 */
				obj_t BgL_cportz00_2947;

				{	/* Jas/peep.scm 1 */
					obj_t BgL_stringz00_2955;

					BgL_stringz00_2955 = BGl_string2824z00zzjas_peepz00;
					{	/* Jas/peep.scm 1 */
						obj_t BgL_startz00_2956;

						BgL_startz00_2956 = BINT(((long) 0));
						{	/* Jas/peep.scm 1 */
							obj_t BgL_endz00_2957;

							BgL_endz00_2957 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2955)));
							{	/* Jas/peep.scm 1 */

								BgL_cportz00_2947 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2955, BgL_startz00_2956, BgL_endz00_2957);
				}}}}
				{
					long BgL_iz00_2948;

					BgL_iz00_2948 = ((long) 8);
				BgL_loopz00_2949:
					if ((BgL_iz00_2948 == ((long) -1)))
						{	/* Jas/peep.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/peep.scm 1 */
							{	/* Jas/peep.scm 1 */
								obj_t BgL_arg2831z00_2951;

								{	/* Jas/peep.scm 1 */

									{	/* Jas/peep.scm 1 */
										obj_t BgL_locationz00_2953;

										BgL_locationz00_2953 = BBOOL(((bool_t) 0));
										{	/* Jas/peep.scm 1 */

											BgL_arg2831z00_2951 =
												BGl_readz00zz__readerz00(BgL_cportz00_2947,
												BgL_locationz00_2953);
										}
									}
								}
								{	/* Jas/peep.scm 1 */
									int BgL_tmpz00_2988;

									BgL_tmpz00_2988 = (int) (BgL_iz00_2948);
									CNST_TABLE_SET(BgL_tmpz00_2988, BgL_arg2831z00_2951);
							}}
							{	/* Jas/peep.scm 1 */
								int BgL_auxz00_2954;

								BgL_auxz00_2954 = (int) ((BgL_iz00_2948 - ((long) 1)));
								{
									long BgL_iz00_2993;

									BgL_iz00_2993 = (long) (BgL_auxz00_2954);
									BgL_iz00_2948 = BgL_iz00_2993;
									goto BgL_loopz00_2949;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzjas_peepz00()
	{
		{	/* Jas/peep.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_peepz00()
	{
		{	/* Jas/peep.scm 1 */
			BGl_za2jaszd2peepholeza2zd2zzjas_peepz00 = BTRUE;
			BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00 =
				BINT(((long) 0));
			return (BGl_peepz00zzjas_peepz00 = BGl_proc2822z00zzjas_peepz00, BUNSPEC);
		}

	}



/* &<@peep:1217> */
	obj_t BGl_z62zc3z04peepza31217ze3ze5zzjas_peepz00(obj_t BgL_envz00_2932,
		obj_t BgL_classfilez00_2933, obj_t BgL_paramz00_2934,
		obj_t BgL_localsz00_2935, obj_t BgL_codez00_2936)
	{
		{	/* Jas/peep.scm 9 */
			BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00 =
				BINT(
				(bgl_list_length(BgL_paramz00_2934) +
					bgl_list_length(BgL_localsz00_2935)));
			if (CBOOL(BGl_za2jaszd2peepholeza2zd2zzjas_peepz00))
				{	/* Jas/peep.scm 12 */
					obj_t BgL_c1z00_2960;

					BgL_c1z00_2960 =
						BGl_keeplocalsz00zzjas_peepz00(BgL_classfilez00_2933,
						bgl_list_length(BgL_paramz00_2934),
						bgl_list_length(BgL_localsz00_2935), BgL_codez00_2936);
					BGl_simplematchz00zzjas_peepz00(BgL_c1z00_2960);
					BGl_packlocalsz00zzjas_peepz00(BgL_classfilez00_2933,
						bgl_list_length(BgL_paramz00_2934),
						bgl_list_length(BgL_localsz00_2935), BgL_c1z00_2960);
					BGl_removebranchz00zzjas_peepz00(BgL_c1z00_2960);
					BGl_removesequencez00zzjas_peepz00(BgL_c1z00_2960);
					return BgL_c1z00_2960;
				}
			else
				{	/* Jas/peep.scm 11 */
					return BgL_codez00_2936;
				}
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzjas_peepz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_283;

				BgL_headz00_283 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_284;
					obj_t BgL_tailz00_285;

					BgL_prevz00_284 = BgL_headz00_283;
					BgL_tailz00_285 = BgL_l1z00_1;
				BgL_loopz00_286:
					if (PAIRP(BgL_tailz00_285))
						{
							obj_t BgL_newzd2prevzd2_288;

							BgL_newzd2prevzd2_288 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_285), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_284, BgL_newzd2prevzd2_288);
							{
								obj_t BgL_tailz00_3019;
								obj_t BgL_prevz00_3018;

								BgL_prevz00_3018 = BgL_newzd2prevzd2_288;
								BgL_tailz00_3019 = CDR(BgL_tailz00_285);
								BgL_tailz00_285 = BgL_tailz00_3019;
								BgL_prevz00_284 = BgL_prevz00_3018;
								goto BgL_loopz00_286;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_283);
				}
			}
		}

	}



/* load? */
	bool_t BGl_loadzf3zf3zzjas_peepz00(obj_t BgL_insz00_3)
	{
		{	/* Jas/peep.scm 21 */
			{	/* Jas/peep.scm 22 */
				obj_t BgL_opcodez00_291;

				BgL_opcodez00_291 = CAR(((obj_t) BgL_insz00_3));
				if (((long) CINT(BgL_opcodez00_291) >= ((long) 21)))
					{	/* Jas/peep.scm 23 */
						return ((long) CINT(BgL_opcodez00_291) <= ((long) 25));
					}
				else
					{	/* Jas/peep.scm 23 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* load2? */
	bool_t BGl_load2zf3zf3zzjas_peepz00(obj_t BgL_insz00_4)
	{
		{	/* Jas/peep.scm 25 */
			{	/* Jas/peep.scm 26 */
				obj_t BgL_opcodez00_293;

				BgL_opcodez00_293 = CAR(BgL_insz00_4);
				{	/* Jas/peep.scm 27 */
					bool_t BgL__ortest_1057z00_294;

					BgL__ortest_1057z00_294 =
						((long) CINT(BgL_opcodez00_293) == ((long) 22));
					if (BgL__ortest_1057z00_294)
						{	/* Jas/peep.scm 27 */
							return BgL__ortest_1057z00_294;
						}
					else
						{	/* Jas/peep.scm 27 */
							return ((long) CINT(BgL_opcodez00_293) == ((long) 24));
		}}}}

	}



/* store? */
	bool_t BGl_storezf3zf3zzjas_peepz00(obj_t BgL_insz00_5)
	{
		{	/* Jas/peep.scm 29 */
			{	/* Jas/peep.scm 30 */
				obj_t BgL_opcodez00_295;

				BgL_opcodez00_295 = CAR(((obj_t) BgL_insz00_5));
				if (((long) CINT(BgL_opcodez00_295) >= ((long) 54)))
					{	/* Jas/peep.scm 31 */
						return ((long) CINT(BgL_opcodez00_295) <= ((long) 58));
					}
				else
					{	/* Jas/peep.scm 31 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* store2? */
	bool_t BGl_store2zf3zf3zzjas_peepz00(obj_t BgL_insz00_6)
	{
		{	/* Jas/peep.scm 33 */
			{	/* Jas/peep.scm 34 */
				obj_t BgL_opcodez00_297;

				BgL_opcodez00_297 = CAR(BgL_insz00_6);
				{	/* Jas/peep.scm 35 */
					bool_t BgL__ortest_1059z00_298;

					BgL__ortest_1059z00_298 =
						((long) CINT(BgL_opcodez00_297) == ((long) 55));
					if (BgL__ortest_1059z00_298)
						{	/* Jas/peep.scm 35 */
							return BgL__ortest_1059z00_298;
						}
					else
						{	/* Jas/peep.scm 35 */
							return ((long) CINT(BgL_opcodez00_297) == ((long) 57));
		}}}}

	}



/* nocont? */
	obj_t BGl_nocontzf3zf3zzjas_peepz00(obj_t BgL_insz00_10)
	{
		{	/* Jas/peep.scm 49 */
			{	/* Jas/peep.scm 50 */
				obj_t BgL_opcodez00_302;

				BgL_opcodez00_302 = CAR(((obj_t) BgL_insz00_10));
				{	/* Jas/peep.scm 51 */
					bool_t BgL_test2844z00_3050;

					if (((long) CINT(BgL_opcodez00_302) >= ((long) 169)))
						{	/* Jas/peep.scm 51 */
							BgL_test2844z00_3050 =
								((long) CINT(BgL_opcodez00_302) <= ((long) 177));
						}
					else
						{	/* Jas/peep.scm 51 */
							BgL_test2844z00_3050 = ((bool_t) 0);
						}
					if (BgL_test2844z00_3050)
						{	/* Jas/peep.scm 51 */
							return BTRUE;
						}
					else
						{	/* Jas/peep.scm 51 */
							return
								BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_opcodez00_302,
								CNST_TABLE_REF(((long) 0)));
		}}}}

	}



/* huge? */
	bool_t BGl_hugezf3zf3zzjas_peepz00(obj_t BgL_insz00_11)
	{
		{	/* Jas/peep.scm 55 */
			{	/* Jas/peep.scm 56 */
				obj_t BgL_opcodez00_306;

				BgL_opcodez00_306 = CAR(((obj_t) BgL_insz00_11));
				{	/* Jas/peep.scm 57 */
					bool_t BgL__ortest_1060z00_307;

					BgL__ortest_1060z00_307 =
						((long) CINT(BgL_opcodez00_306) == ((long) 170));
					if (BgL__ortest_1060z00_307)
						{	/* Jas/peep.scm 57 */
							return BgL__ortest_1060z00_307;
						}
					else
						{	/* Jas/peep.scm 57 */
							return ((long) CINT(BgL_opcodez00_306) == ((long) 171));
		}}}}

	}



/* single-lab? */
	obj_t BGl_singlezd2labzf3z21zzjas_peepz00(obj_t BgL_insz00_12)
	{
		{	/* Jas/peep.scm 59 */
			{	/* Jas/peep.scm 60 */
				obj_t BgL_opcodez00_308;

				BgL_opcodez00_308 = CAR(BgL_insz00_12);
				{	/* Jas/peep.scm 61 */
					bool_t BgL_test2847z00_3066;

					if (((long) CINT(BgL_opcodez00_308) >= ((long) 153)))
						{	/* Jas/peep.scm 61 */
							BgL_test2847z00_3066 =
								((long) CINT(BgL_opcodez00_308) <= ((long) 168));
						}
					else
						{	/* Jas/peep.scm 61 */
							BgL_test2847z00_3066 = ((bool_t) 0);
						}
					if (BgL_test2847z00_3066)
						{	/* Jas/peep.scm 61 */
							return BTRUE;
						}
					else
						{	/* Jas/peep.scm 61 */
							return
								BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_opcodez00_308,
								CNST_TABLE_REF(((long) 1)));
		}}}}

	}



/* branch? */
	obj_t BGl_branchzf3zf3zzjas_peepz00(obj_t BgL_insz00_13)
	{
		{	/* Jas/peep.scm 65 */
			{	/* Jas/peep.scm 66 */
				obj_t BgL_opcodez00_312;

				BgL_opcodez00_312 = CAR(((obj_t) BgL_insz00_13));
				{	/* Jas/peep.scm 67 */
					bool_t BgL_test2849z00_3076;

					if (((long) CINT(BgL_opcodez00_312) >= ((long) 153)))
						{	/* Jas/peep.scm 67 */
							BgL_test2849z00_3076 =
								((long) CINT(BgL_opcodez00_312) <= ((long) 171));
						}
					else
						{	/* Jas/peep.scm 67 */
							BgL_test2849z00_3076 = ((bool_t) 0);
						}
					if (BgL_test2849z00_3076)
						{	/* Jas/peep.scm 67 */
							return BTRUE;
						}
					else
						{	/* Jas/peep.scm 67 */
							return
								BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_opcodez00_312,
								CNST_TABLE_REF(((long) 1)));
		}}}}

	}



/* keeplocals */
	obj_t BGl_keeplocalsz00zzjas_peepz00(obj_t BgL_classfilez00_14,
		long BgL_nparamz00_15, long BgL_nlocalsz00_16, obj_t BgL_codez00_17)
	{
		{	/* Jas/peep.scm 74 */
			{	/* Jas/peep.scm 75 */
				long BgL_nz00_316;

				BgL_nz00_316 = (BgL_nparamz00_15 + BgL_nlocalsz00_16);
				{	/* Jas/peep.scm 75 */
					obj_t BgL_wz00_317;

					BgL_wz00_317 = make_vector(BgL_nz00_316, BINT(((long) 0)));
					{	/* Jas/peep.scm 76 */
						obj_t BgL_rz00_318;

						BgL_rz00_318 = make_vector(BgL_nz00_316, BINT(((long) 0)));
						{	/* Jas/peep.scm 77 */
							obj_t BgL_candidatez00_319;

							BgL_candidatez00_319 = make_vector(BgL_nz00_316, BTRUE);
							{	/* Jas/peep.scm 78 */

								{
									obj_t BgL_pz00_399;
									obj_t BgL_lz00_400;
									obj_t BgL_pz00_388;
									obj_t BgL_lz00_389;
									obj_t BgL_vz00_364;
									obj_t BgL_pz00_365;
									obj_t BgL_lz00_366;
									long BgL_spz00_367;
									long BgL_iz00_356;
									obj_t BgL_insz00_345;
									long BgL_iz00_336;

									BgL_iz00_336 = ((long) 0);
								BgL_zc3z04anonymousza31253ze3z87_337:
									if ((BgL_iz00_336 < BgL_nparamz00_15))
										{	/* Jas/peep.scm 80 */
											VECTOR_SET(BgL_wz00_317, BgL_iz00_336, BINT(((long) 1)));
											{
												long BgL_iz00_3094;

												BgL_iz00_3094 = (BgL_iz00_336 + ((long) 1));
												BgL_iz00_336 = BgL_iz00_3094;
												goto BgL_zc3z04anonymousza31253ze3z87_337;
											}
										}
									else
										{	/* Jas/peep.scm 80 */
											CNST_TABLE_REF(((long) 2));
										}
									{
										obj_t BgL_l1202z00_328;

										BgL_l1202z00_328 = BgL_codez00_17;
									BgL_zc3z04anonymousza31249ze3z87_329:
										if (PAIRP(BgL_l1202z00_328))
											{	/* Jas/peep.scm 132 */
												{	/* Jas/peep.scm 132 */
													obj_t BgL_xz00_331;

													BgL_xz00_331 = CAR(BgL_l1202z00_328);
													if (PAIRP(BgL_xz00_331))
														{	/* Jas/peep.scm 132 */
															BgL_insz00_345 = BgL_xz00_331;
															if (BGl_loadzf3zf3zzjas_peepz00(BgL_insz00_345))
																{	/* Jas/peep.scm 85 */
																	obj_t BgL_arg1268z00_348;

																	BgL_arg1268z00_348 = CAR(CDR(BgL_insz00_345));
																	{	/* Jas/peep.scm 83 */
																		long BgL_arg1258z00_1785;

																		{	/* Jas/peep.scm 83 */
																			long BgL_arg1263z00_1786;

																			{	/* Jas/peep.scm 83 */
																				long BgL_kz00_1788;

																				BgL_kz00_1788 =
																					(long) CINT(BgL_arg1268z00_348);
																				BgL_arg1263z00_1786 =
																					(long) CINT(VECTOR_REF(BgL_rz00_318,
																						BgL_kz00_1788));
																			}
																			BgL_arg1258z00_1785 =
																				(((long) 1) + BgL_arg1263z00_1786);
																		}
																		VECTOR_SET(BgL_rz00_318,
																			(long) CINT(BgL_arg1268z00_348),
																			BINT(BgL_arg1258z00_1785));
																}}
															else
																{	/* Jas/peep.scm 85 */
																	if (BGl_storezf3zf3zzjas_peepz00
																		(BgL_insz00_345))
																		{	/* Jas/peep.scm 86 */
																			obj_t BgL_arg1270z00_350;

																			BgL_arg1270z00_350 =
																				CAR(CDR(BgL_insz00_345));
																			{	/* Jas/peep.scm 83 */
																				long BgL_arg1258z00_1797;

																				{	/* Jas/peep.scm 83 */
																					long BgL_arg1263z00_1798;

																					{	/* Jas/peep.scm 83 */
																						long BgL_kz00_1800;

																						BgL_kz00_1800 =
																							(long) CINT(BgL_arg1270z00_350);
																						BgL_arg1263z00_1798 =
																							(long)
																							CINT(VECTOR_REF(BgL_wz00_317,
																								BgL_kz00_1800));
																					}
																					BgL_arg1258z00_1797 =
																						(((long) 1) + BgL_arg1263z00_1798);
																				}
																				VECTOR_SET(BgL_wz00_317,
																					(long) CINT(BgL_arg1270z00_350),
																					BINT(BgL_arg1258z00_1797));
																		}}
																	else
																		{	/* Jas/peep.scm 86 */
																			if (
																				((long) CINT(CAR(BgL_insz00_345)) ==
																					((long) 169)))
																				{	/* Jas/peep.scm 87 */
																					obj_t BgL_arg1273z00_352;

																					BgL_arg1273z00_352 =
																						CAR(CDR(BgL_insz00_345));
																					{	/* Jas/peep.scm 83 */
																						long BgL_arg1258z00_1813;

																						{	/* Jas/peep.scm 83 */
																							long BgL_arg1263z00_1814;

																							{	/* Jas/peep.scm 83 */
																								long BgL_kz00_1816;

																								BgL_kz00_1816 =
																									(long)
																									CINT(BgL_arg1273z00_352);
																								BgL_arg1263z00_1814 =
																									(long)
																									CINT(VECTOR_REF(BgL_rz00_318,
																										BgL_kz00_1816));
																							}
																							BgL_arg1258z00_1813 =
																								(((long) 1) +
																								BgL_arg1263z00_1814);
																						}
																						VECTOR_SET(BgL_rz00_318,
																							(long) CINT(BgL_arg1273z00_352),
																							BINT(BgL_arg1258z00_1813));
																				}}
																			else
																				{	/* Jas/peep.scm 87 */
																					if (
																						((long) CINT(CAR(BgL_insz00_345)) ==
																							((long) 132)))
																						{	/* Jas/peep.scm 88 */
																							{	/* Jas/peep.scm 89 */
																								obj_t BgL_arg1275z00_354;

																								BgL_arg1275z00_354 =
																									CAR(CDR(BgL_insz00_345));
																								{	/* Jas/peep.scm 83 */
																									long BgL_arg1258z00_1829;

																									{	/* Jas/peep.scm 83 */
																										long BgL_arg1263z00_1830;

																										{	/* Jas/peep.scm 83 */
																											long BgL_kz00_1832;

																											BgL_kz00_1832 =
																												(long)
																												CINT
																												(BgL_arg1275z00_354);
																											BgL_arg1263z00_1830 =
																												(long)
																												CINT(VECTOR_REF
																												(BgL_wz00_317,
																													BgL_kz00_1832));
																										}
																										BgL_arg1258z00_1829 =
																											(((long) 1) +
																											BgL_arg1263z00_1830);
																									}
																									VECTOR_SET(BgL_wz00_317,
																										(long)
																										CINT(BgL_arg1275z00_354),
																										BINT(BgL_arg1258z00_1829));
																							}}
																							{	/* Jas/peep.scm 90 */
																								obj_t BgL_arg1276z00_355;

																								BgL_arg1276z00_355 =
																									CAR(CDR(BgL_insz00_345));
																								{	/* Jas/peep.scm 83 */
																									long BgL_arg1258z00_1841;

																									{	/* Jas/peep.scm 83 */
																										long BgL_arg1263z00_1842;

																										{	/* Jas/peep.scm 83 */
																											long BgL_kz00_1844;

																											BgL_kz00_1844 =
																												(long)
																												CINT
																												(BgL_arg1276z00_355);
																											BgL_arg1263z00_1842 =
																												(long)
																												CINT(VECTOR_REF
																												(BgL_rz00_318,
																													BgL_kz00_1844));
																										}
																										BgL_arg1258z00_1841 =
																											(((long) 1) +
																											BgL_arg1263z00_1842);
																									}
																									VECTOR_SET(BgL_rz00_318,
																										(long)
																										CINT(BgL_arg1276z00_355),
																										BINT(BgL_arg1258z00_1841));
																						}}}
																					else
																						{	/* Jas/peep.scm 88 */
																							BFALSE;
																						}
																				}
																		}
																}
														}
													else
														{	/* Jas/peep.scm 132 */
															BFALSE;
														}
												}
												{
													obj_t BgL_l1202z00_3159;

													BgL_l1202z00_3159 = CDR(BgL_l1202z00_328);
													BgL_l1202z00_328 = BgL_l1202z00_3159;
													goto BgL_zc3z04anonymousza31249ze3z87_329;
												}
											}
										else
											{	/* Jas/peep.scm 132 */
												((bool_t) 1);
											}
									}
									BgL_iz00_356 = ((long) 0);
								BgL_zc3z04anonymousza31277ze3z87_357:
									if ((BgL_iz00_356 < BgL_nz00_316))
										{	/* Jas/peep.scm 92 */
											{	/* Jas/peep.scm 95 */
												bool_t BgL_arg1280z00_359;

												if (
													((long) CINT(VECTOR_REF(BgL_wz00_317,
																BgL_iz00_356)) == ((long) 1)))
													{	/* Jas/peep.scm 95 */
														BgL_arg1280z00_359 =
															(
															(long) CINT(VECTOR_REF(BgL_rz00_318,
																	BgL_iz00_356)) == ((long) 1));
													}
												else
													{	/* Jas/peep.scm 95 */
														BgL_arg1280z00_359 = ((bool_t) 0);
													}
												VECTOR_SET(BgL_candidatez00_319, BgL_iz00_356,
													BBOOL(BgL_arg1280z00_359));
											}
											{
												long BgL_iz00_3172;

												BgL_iz00_3172 = (BgL_iz00_356 + ((long) 1));
												BgL_iz00_356 = BgL_iz00_3172;
												goto BgL_zc3z04anonymousza31277ze3z87_357;
											}
										}
									else
										{	/* Jas/peep.scm 92 */
											CNST_TABLE_REF(((long) 2));
										}
									{	/* Jas/peep.scm 134 */
										obj_t BgL_hookz00_335;

										BgL_hookz00_335 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
											BgL_codez00_17);
										BgL_pz00_399 = BgL_hookz00_335;
										BgL_lz00_400 = BgL_codez00_17;
									BgL_zc3z04anonymousza31307ze3z87_401:
										if (NULLP(BgL_lz00_400))
											{	/* Jas/peep.scm 127 */
												CNST_TABLE_REF(((long) 2));
											}
										else
											{	/* Jas/peep.scm 128 */
												bool_t BgL_test2861z00_3180;

												{	/* Jas/peep.scm 128 */
													obj_t BgL_tmpz00_3181;

													BgL_tmpz00_3181 = CAR(((obj_t) BgL_lz00_400));
													BgL_test2861z00_3180 = SYMBOLP(BgL_tmpz00_3181);
												}
												if (BgL_test2861z00_3180)
													{	/* Jas/peep.scm 128 */
														obj_t BgL_arg1311z00_405;

														BgL_arg1311z00_405 = CDR(((obj_t) BgL_lz00_400));
														{
															obj_t BgL_lz00_3188;
															obj_t BgL_pz00_3187;

															BgL_pz00_3187 = BgL_lz00_400;
															BgL_lz00_3188 = BgL_arg1311z00_405;
															BgL_lz00_400 = BgL_lz00_3188;
															BgL_pz00_399 = BgL_pz00_3187;
															goto BgL_zc3z04anonymousza31307ze3z87_401;
														}
													}
												else
													{	/* Jas/peep.scm 129 */
														bool_t BgL_test2862z00_3189;

														BgL_pz00_388 = BgL_pz00_399;
														BgL_lz00_389 = BgL_lz00_400;
														{	/* Jas/peep.scm 113 */
															obj_t BgL_insz00_391;

															BgL_insz00_391 = CAR(((obj_t) BgL_lz00_389));
															if (BGl_storezf3zf3zzjas_peepz00(BgL_insz00_391))
																{	/* Jas/peep.scm 115 */
																	obj_t BgL_vz00_393;

																	{	/* Jas/peep.scm 115 */
																		obj_t BgL_pairz00_1890;

																		BgL_pairz00_1890 =
																			CDR(((obj_t) BgL_insz00_391));
																		BgL_vz00_393 = CAR(BgL_pairz00_1890);
																	}
																	{	/* Jas/peep.scm 116 */
																		bool_t BgL_test2864z00_3197;

																		{	/* Jas/peep.scm 116 */
																			long BgL_kz00_1892;

																			BgL_kz00_1892 = (long) CINT(BgL_vz00_393);
																			BgL_test2864z00_3197 =
																				CBOOL(VECTOR_REF(BgL_candidatez00_319,
																					BgL_kz00_1892));
																		}
																		if (BgL_test2864z00_3197)
																			{	/* Jas/peep.scm 117 */
																				obj_t BgL_ppz00_395;

																				{	/* Jas/peep.scm 117 */
																					obj_t BgL_arg1306z00_398;

																					BgL_arg1306z00_398 =
																						CDR(((obj_t) BgL_lz00_389));
																					BgL_vz00_364 = BgL_vz00_393;
																					BgL_pz00_365 = BgL_lz00_389;
																					BgL_lz00_366 = BgL_arg1306z00_398;
																					BgL_spz00_367 = ((long) 0);
																				BgL_zc3z04anonymousza31285ze3z87_368:
																					{	/* Jas/peep.scm 100 */
																						bool_t BgL_test2865z00_3203;

																						if (NULLP(BgL_lz00_366))
																							{	/* Jas/peep.scm 100 */
																								BgL_test2865z00_3203 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Jas/peep.scm 100 */
																								obj_t BgL_tmpz00_3206;

																								BgL_tmpz00_3206 =
																									CAR(((obj_t) BgL_lz00_366));
																								BgL_test2865z00_3203 =
																									SYMBOLP(BgL_tmpz00_3206);
																							}
																						if (BgL_test2865z00_3203)
																							{	/* Jas/peep.scm 100 */
																								BgL_ppz00_395 = BFALSE;
																							}
																						else
																							{	/* Jas/peep.scm 102 */
																								obj_t BgL_insz00_372;

																								BgL_insz00_372 =
																									CAR(((obj_t) BgL_lz00_366));
																								{	/* Jas/peep.scm 103 */
																									bool_t BgL_test2867z00_3212;

																									if (BGl_loadzf3zf3zzjas_peepz00(BgL_insz00_372))
																										{	/* Jas/peep.scm 103 */
																											long BgL_tmpz00_3215;

																											{	/* Jas/peep.scm 103 */
																												obj_t BgL_pairz00_1871;

																												BgL_pairz00_1871 =
																													CDR(
																													((obj_t)
																														BgL_insz00_372));
																												BgL_tmpz00_3215 =
																													(long)
																													CINT(CAR
																													(BgL_pairz00_1871));
																											}
																											BgL_test2867z00_3212 =
																												(BgL_tmpz00_3215 ==
																												(long)
																												CINT(BgL_vz00_364));
																										}
																									else
																										{	/* Jas/peep.scm 103 */
																											BgL_test2867z00_3212 =
																												((bool_t) 0);
																										}
																									if (BgL_test2867z00_3212)
																										{	/* Jas/peep.scm 103 */
																											if (
																												(BgL_spz00_367 ==
																													((long) 0)))
																												{	/* Jas/peep.scm 104 */
																													BgL_ppz00_395 =
																														BgL_pz00_365;
																												}
																											else
																												{	/* Jas/peep.scm 104 */
																													BgL_ppz00_395 =
																														BFALSE;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 105 */
																											long BgL_downz00_377;

																											{	/* Jas/peep.scm 105 */
																												obj_t
																													BgL_arg1297z00_383;
																												BgL_arg1297z00_383 =
																													BGl_nbpopz00zzjas_stackz00
																													(BgL_classfilez00_14,
																													BgL_insz00_372);
																												BgL_downz00_377 =
																													(BgL_spz00_367 -
																													(long)
																													CINT
																													(BgL_arg1297z00_383));
																											}
																											{	/* Jas/peep.scm 105 */
																												long BgL_upz00_378;

																												{	/* Jas/peep.scm 106 */
																													obj_t
																														BgL_arg1296z00_382;
																													BgL_arg1296z00_382 =
																														BGl_nbpushz00zzjas_stackz00
																														(BgL_classfilez00_14,
																														BgL_insz00_372);
																													BgL_upz00_378 =
																														(BgL_downz00_377 +
																														(long)
																														CINT
																														(BgL_arg1296z00_382));
																												}
																												{	/* Jas/peep.scm 106 */

																													if (
																														(BgL_downz00_377 <
																															((long) 0)))
																														{	/* Jas/peep.scm 107 */
																															BgL_ppz00_395 =
																																BFALSE;
																														}
																													else
																														{	/* Jas/peep.scm 107 */
																															if (CBOOL
																																(BGl_branchzf3zf3zzjas_peepz00
																																	(BgL_insz00_372)))
																																{	/* Jas/peep.scm 109 */
																																	BgL_ppz00_395
																																		= BFALSE;
																																}
																															else
																																{	/* Jas/peep.scm 111 */
																																	obj_t
																																		BgL_arg1295z00_381;
																																	BgL_arg1295z00_381
																																		=
																																		CDR(((obj_t)
																																			BgL_lz00_366));
																																	{
																																		long
																																			BgL_spz00_3239;
																																		obj_t
																																			BgL_lz00_3238;
																																		obj_t
																																			BgL_pz00_3237;
																																		BgL_pz00_3237
																																			=
																																			BgL_lz00_366;
																																		BgL_lz00_3238
																																			=
																																			BgL_arg1295z00_381;
																																		BgL_spz00_3239
																																			=
																																			BgL_upz00_378;
																																		BgL_spz00_367
																																			=
																																			BgL_spz00_3239;
																																		BgL_lz00_366
																																			=
																																			BgL_lz00_3238;
																																		BgL_pz00_365
																																			=
																																			BgL_pz00_3237;
																																		goto
																																			BgL_zc3z04anonymousza31285ze3z87_368;
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
																				if (CBOOL(BgL_ppz00_395))
																					{	/* Jas/peep.scm 118 */
																						{	/* Jas/peep.scm 120 */
																							obj_t BgL_arg1303z00_396;

																							{	/* Jas/peep.scm 120 */
																								obj_t BgL_pairz00_1897;

																								BgL_pairz00_1897 =
																									CDR(((obj_t) BgL_ppz00_395));
																								BgL_arg1303z00_396 =
																									CDR(BgL_pairz00_1897);
																							}
																							{	/* Jas/peep.scm 120 */
																								obj_t BgL_tmpz00_3245;

																								BgL_tmpz00_3245 =
																									((obj_t) BgL_ppz00_395);
																								SET_CDR(BgL_tmpz00_3245,
																									BgL_arg1303z00_396);
																							}
																						}
																						{	/* Jas/peep.scm 121 */
																							obj_t BgL_arg1304z00_397;

																							BgL_arg1304z00_397 =
																								CDR(((obj_t) BgL_lz00_389));
																							{	/* Jas/peep.scm 121 */
																								obj_t BgL_tmpz00_3250;

																								BgL_tmpz00_3250 =
																									((obj_t) BgL_pz00_388);
																								SET_CDR(BgL_tmpz00_3250,
																									BgL_arg1304z00_397);
																							}
																						}
																						BgL_test2862z00_3189 = ((bool_t) 1);
																					}
																				else
																					{	/* Jas/peep.scm 118 */
																						BgL_test2862z00_3189 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Jas/peep.scm 116 */
																				BgL_test2862z00_3189 = ((bool_t) 0);
																			}
																	}
																}
															else
																{	/* Jas/peep.scm 114 */
																	BgL_test2862z00_3189 = ((bool_t) 0);
																}
														}
														if (BgL_test2862z00_3189)
															{	/* Jas/peep.scm 129 */
																obj_t BgL_arg1314z00_407;

																BgL_arg1314z00_407 =
																	CDR(((obj_t) BgL_pz00_399));
																{
																	obj_t BgL_lz00_3255;

																	BgL_lz00_3255 = BgL_arg1314z00_407;
																	BgL_lz00_400 = BgL_lz00_3255;
																	goto BgL_zc3z04anonymousza31307ze3z87_401;
																}
															}
														else
															{	/* Jas/peep.scm 130 */
																obj_t BgL_arg1315z00_408;

																BgL_arg1315z00_408 =
																	CDR(((obj_t) BgL_lz00_400));
																{
																	obj_t BgL_lz00_3259;
																	obj_t BgL_pz00_3258;

																	BgL_pz00_3258 = BgL_lz00_400;
																	BgL_lz00_3259 = BgL_arg1315z00_408;
																	BgL_lz00_400 = BgL_lz00_3259;
																	BgL_pz00_399 = BgL_pz00_3258;
																	goto BgL_zc3z04anonymousza31307ze3z87_401;
																}
															}
													}
											}
										return CDR(BgL_hookz00_335);
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* packlocals */
	long BGl_packlocalsz00zzjas_peepz00(obj_t BgL_classfilez00_18,
		long BgL_nparamz00_19, long BgL_nlocalsz00_20, obj_t BgL_codez00_21)
	{
		{	/* Jas/peep.scm 141 */
			{	/* Jas/peep.scm 142 */
				long BgL_nz00_417;

				BgL_nz00_417 = (BgL_nparamz00_19 + BgL_nlocalsz00_20);
				{	/* Jas/peep.scm 142 */
					obj_t BgL_accessz00_418;

					BgL_accessz00_418 = make_vector(BgL_nz00_417, BFALSE);
					{	/* Jas/peep.scm 143 */
						obj_t BgL_mappingz00_419;

						BgL_mappingz00_419 = make_vector(BgL_nz00_417, BINT(((long) 0)));
						{	/* Jas/peep.scm 144 */

							{
								obj_t BgL_lz00_481;
								obj_t BgL_insz00_461;
								long BgL_freez00_453;
								long BgL_iz00_454;
								obj_t BgL_insz00_438;
								long BgL_iz00_434;

								BgL_iz00_434 = ((long) 0);
							BgL_zc3z04anonymousza31323ze3z87_435:
								if ((BgL_iz00_434 < BgL_nparamz00_19))
									{	/* Jas/peep.scm 146 */
										VECTOR_SET(BgL_accessz00_418, BgL_iz00_434, BTRUE);
										{
											long BgL_iz00_3268;

											BgL_iz00_3268 = (BgL_iz00_434 + ((long) 1));
											BgL_iz00_434 = BgL_iz00_3268;
											goto BgL_zc3z04anonymousza31323ze3z87_435;
										}
									}
								else
									{	/* Jas/peep.scm 146 */
										CNST_TABLE_REF(((long) 2));
									}
								{
									obj_t BgL_l1204z00_426;

									BgL_l1204z00_426 = BgL_codez00_21;
								BgL_zc3z04anonymousza31317ze3z87_427:
									if (PAIRP(BgL_l1204z00_426))
										{	/* Jas/peep.scm 181 */
											{	/* Jas/peep.scm 181 */
												obj_t BgL_xz00_429;

												BgL_xz00_429 = CAR(BgL_l1204z00_426);
												if (PAIRP(BgL_xz00_429))
													{	/* Jas/peep.scm 181 */
														BgL_insz00_438 = BgL_xz00_429;
														{	/* Jas/peep.scm 150 */
															bool_t BgL_test2876z00_3276;

															if (BGl_loadzf3zf3zzjas_peepz00(BgL_insz00_438))
																{	/* Jas/peep.scm 150 */
																	BgL_test2876z00_3276 = ((bool_t) 1);
																}
															else
																{	/* Jas/peep.scm 150 */
																	if (BGl_storezf3zf3zzjas_peepz00
																		(BgL_insz00_438))
																		{	/* Jas/peep.scm 150 */
																			BgL_test2876z00_3276 = ((bool_t) 1);
																		}
																	else
																		{	/* Jas/peep.scm 150 */
																			if (
																				((long) CINT(CAR(BgL_insz00_438)) ==
																					((long) 169)))
																				{	/* Jas/peep.scm 150 */
																					BgL_test2876z00_3276 = ((bool_t) 1);
																				}
																			else
																				{	/* Jas/peep.scm 150 */
																					BgL_test2876z00_3276 =
																						(
																						(long) CINT(CAR(BgL_insz00_438)) ==
																						((long) 132));
																}}}
															if (BgL_test2876z00_3276)
																{	/* Jas/peep.scm 150 */
																	{	/* Jas/peep.scm 152 */
																		obj_t BgL_arg1331z00_444;

																		BgL_arg1331z00_444 =
																			CAR(CDR(BgL_insz00_438));
																		VECTOR_SET(BgL_accessz00_418,
																			(long) CINT(BgL_arg1331z00_444), BTRUE);
																	}
																	{	/* Jas/peep.scm 153 */
																		bool_t BgL_test2880z00_3292;

																		if (BGl_load2zf3zf3zzjas_peepz00
																			(BgL_insz00_438))
																			{	/* Jas/peep.scm 153 */
																				BgL_test2880z00_3292 = ((bool_t) 1);
																			}
																		else
																			{	/* Jas/peep.scm 153 */
																				BgL_test2880z00_3292 =
																					BGl_store2zf3zf3zzjas_peepz00
																					(BgL_insz00_438);
																			}
																		if (BgL_test2880z00_3292)
																			{	/* Jas/peep.scm 154 */
																				long BgL_arg1334z00_447;

																				{	/* Jas/peep.scm 154 */
																					long BgL_tmpz00_3296;

																					{	/* Jas/peep.scm 154 */
																						obj_t BgL_pairz00_1939;

																						BgL_pairz00_1939 =
																							CDR(BgL_insz00_438);
																						BgL_tmpz00_3296 =
																							(long)
																							CINT(CAR(BgL_pairz00_1939));
																					}
																					BgL_arg1334z00_447 =
																						(BgL_tmpz00_3296 + ((long) 1));
																				}
																				VECTOR_SET(BgL_accessz00_418,
																					BgL_arg1334z00_447, BTRUE);
																			}
																		else
																			{	/* Jas/peep.scm 153 */
																				BFALSE;
																			}
																	}
																}
															else
																{	/* Jas/peep.scm 150 */
																	BFALSE;
																}
														}
													}
												else
													{	/* Jas/peep.scm 181 */
														BFALSE;
													}
											}
											{
												obj_t BgL_l1204z00_3302;

												BgL_l1204z00_3302 = CDR(BgL_l1204z00_426);
												BgL_l1204z00_426 = BgL_l1204z00_3302;
												goto BgL_zc3z04anonymousza31317ze3z87_427;
											}
										}
									else
										{	/* Jas/peep.scm 181 */
											((bool_t) 1);
										}
								}
								{	/* Jas/peep.scm 182 */
									long BgL_reallyzd2usedzd2_433;

									BgL_freez00_453 = ((long) 0);
									BgL_iz00_454 = ((long) 0);
								BgL_zc3z04anonymousza31336ze3z87_455:
									if ((BgL_iz00_454 < BgL_nz00_417))
										{	/* Jas/peep.scm 156 */
											if (CBOOL(VECTOR_REF(BgL_accessz00_418, BgL_iz00_454)))
												{	/* Jas/peep.scm 157 */
													VECTOR_SET(BgL_mappingz00_419, BgL_iz00_454,
														BINT(BgL_freez00_453));
													{
														long BgL_iz00_3313;
														long BgL_freez00_3311;

														BgL_freez00_3311 = (BgL_freez00_453 + ((long) 1));
														BgL_iz00_3313 = (BgL_iz00_454 + ((long) 1));
														BgL_iz00_454 = BgL_iz00_3313;
														BgL_freez00_453 = BgL_freez00_3311;
														goto BgL_zc3z04anonymousza31336ze3z87_455;
													}
												}
											else
												{	/* Jas/peep.scm 157 */
													VECTOR_SET(BgL_mappingz00_419, BgL_iz00_454,
														BINT(((long) -1)));
													{
														long BgL_iz00_3317;

														BgL_iz00_3317 = (BgL_iz00_454 + ((long) 1));
														BgL_iz00_454 = BgL_iz00_3317;
														goto BgL_zc3z04anonymousza31336ze3z87_455;
													}
												}
										}
									else
										{	/* Jas/peep.scm 156 */
											BgL_reallyzd2usedzd2_433 = BgL_freez00_453;
										}
									BGl_za2za2lastzd2numberzd2ofzd2localsza2za2zd2zzjas_peepz00 =
										BINT(BgL_reallyzd2usedzd2_433);
									BgL_lz00_481 = BgL_codez00_21;
								BgL_zc3z04anonymousza31372ze3z87_482:
									if (NULLP(BgL_lz00_481))
										{	/* Jas/peep.scm 176 */
											CNST_TABLE_REF(((long) 2));
										}
									else
										{	/* Jas/peep.scm 177 */
											bool_t BgL_test2885z00_3323;

											{	/* Jas/peep.scm 177 */
												obj_t BgL_tmpz00_3324;

												BgL_tmpz00_3324 = CAR(((obj_t) BgL_lz00_481));
												BgL_test2885z00_3323 = SYMBOLP(BgL_tmpz00_3324);
											}
											if (BgL_test2885z00_3323)
												{	/* Jas/peep.scm 177 */
													obj_t BgL_arg1394z00_486;

													BgL_arg1394z00_486 = CDR(((obj_t) BgL_lz00_481));
													{
														obj_t BgL_lz00_3330;

														BgL_lz00_3330 = BgL_arg1394z00_486;
														BgL_lz00_481 = BgL_lz00_3330;
														goto BgL_zc3z04anonymousza31372ze3z87_482;
													}
												}
											else
												{	/* Jas/peep.scm 177 */
													{	/* Jas/peep.scm 178 */
														obj_t BgL_arg1396z00_487;

														BgL_arg1396z00_487 = CAR(((obj_t) BgL_lz00_481));
														BgL_insz00_461 = BgL_arg1396z00_487;
														{	/* Jas/peep.scm 167 */
															bool_t BgL_test2886z00_3333;

															if (BGl_loadzf3zf3zzjas_peepz00(BgL_insz00_461))
																{	/* Jas/peep.scm 167 */
																	BgL_test2886z00_3333 = ((bool_t) 1);
																}
															else
																{	/* Jas/peep.scm 167 */
																	if (BGl_storezf3zf3zzjas_peepz00
																		(BgL_insz00_461))
																		{	/* Jas/peep.scm 167 */
																			BgL_test2886z00_3333 = ((bool_t) 1);
																		}
																	else
																		{	/* Jas/peep.scm 167 */
																			if (
																				((long) CINT(CAR(
																							((obj_t) BgL_insz00_461))) ==
																					((long) 169)))
																				{	/* Jas/peep.scm 167 */
																					BgL_test2886z00_3333 = ((bool_t) 1);
																				}
																			else
																				{	/* Jas/peep.scm 167 */
																					BgL_test2886z00_3333 =
																						(
																						(long) CINT(CAR(
																								((obj_t) BgL_insz00_461))) ==
																						((long) 132));
																}}}
															if (BgL_test2886z00_3333)
																{	/* Jas/peep.scm 168 */
																	obj_t BgL_arg1357z00_467;
																	long BgL_arg1360z00_468;

																	BgL_arg1357z00_467 =
																		CDR(((obj_t) BgL_insz00_461));
																	{	/* Jas/peep.scm 168 */
																		obj_t BgL_arg1361z00_469;

																		{	/* Jas/peep.scm 168 */
																			obj_t BgL_pairz00_1971;

																			BgL_pairz00_1971 =
																				CDR(((obj_t) BgL_insz00_461));
																			BgL_arg1361z00_469 =
																				CAR(BgL_pairz00_1971);
																		}
																		{	/* Jas/peep.scm 168 */
																			long BgL_kz00_1973;

																			BgL_kz00_1973 =
																				(long) CINT(BgL_arg1361z00_469);
																			BgL_arg1360z00_468 =
																				(long)
																				CINT(VECTOR_REF(BgL_mappingz00_419,
																					BgL_kz00_1973));
																	}}
																	{	/* Jas/peep.scm 168 */
																		obj_t BgL_auxz00_3357;
																		obj_t BgL_tmpz00_3355;

																		BgL_auxz00_3357 = BINT(BgL_arg1360z00_468);
																		BgL_tmpz00_3355 =
																			((obj_t) BgL_arg1357z00_467);
																		SET_CAR(BgL_tmpz00_3355, BgL_auxz00_3357);
																}}
															else
																{	/* Jas/peep.scm 167 */
																	if (
																		(CAR(
																				((obj_t) BgL_insz00_461)) ==
																			BINT(((long) 205))))
																		{	/* Jas/peep.scm 170 */
																			obj_t BgL_adrz00_472;

																			{	/* Jas/peep.scm 170 */
																				obj_t BgL_pairz00_1984;

																				{	/* Jas/peep.scm 170 */
																					obj_t BgL_pairz00_1983;

																					{	/* Jas/peep.scm 170 */
																						obj_t BgL_pairz00_1982;

																						{	/* Jas/peep.scm 170 */
																							obj_t BgL_pairz00_1981;

																							BgL_pairz00_1981 =
																								CDR(((obj_t) BgL_insz00_461));
																							BgL_pairz00_1982 =
																								CDR(BgL_pairz00_1981);
																						}
																						BgL_pairz00_1983 =
																							CDR(BgL_pairz00_1982);
																					}
																					BgL_pairz00_1984 =
																						CDR(BgL_pairz00_1983);
																				}
																				BgL_adrz00_472 = CDR(BgL_pairz00_1984);
																			}
																			{	/* Jas/peep.scm 171 */
																				obj_t BgL_ivarz00_473;

																				BgL_ivarz00_473 =
																					CAR(((obj_t) BgL_adrz00_472));
																				{	/* Jas/peep.scm 172 */
																					bool_t BgL_test2891z00_3373;

																					{	/* Jas/peep.scm 172 */
																						long BgL_kz00_1987;

																						BgL_kz00_1987 =
																							(long) CINT(BgL_ivarz00_473);
																						BgL_test2891z00_3373 =
																							CBOOL(VECTOR_REF
																							(BgL_accessz00_418,
																								BgL_kz00_1987));
																					}
																					if (BgL_test2891z00_3373)
																						{	/* Jas/peep.scm 173 */
																							long BgL_arg1367z00_475;

																							{	/* Jas/peep.scm 173 */
																								long BgL_kz00_1989;

																								BgL_kz00_1989 =
																									(long) CINT(BgL_ivarz00_473);
																								BgL_arg1367z00_475 =
																									(long)
																									CINT(VECTOR_REF
																									(BgL_mappingz00_419,
																										BgL_kz00_1989));
																							}
																							{	/* Jas/peep.scm 173 */
																								obj_t BgL_auxz00_3382;
																								obj_t BgL_tmpz00_3380;

																								BgL_auxz00_3382 =
																									BINT(BgL_arg1367z00_475);
																								BgL_tmpz00_3380 =
																									((obj_t) BgL_adrz00_472);
																								SET_CAR(BgL_tmpz00_3380,
																									BgL_auxz00_3382);
																						}}
																					else
																						{	/* Jas/peep.scm 174 */
																							obj_t BgL_auxz00_3387;
																							obj_t BgL_tmpz00_3385;

																							BgL_auxz00_3387 =
																								BINT(((long) 204));
																							BgL_tmpz00_3385 =
																								((obj_t) BgL_insz00_461);
																							SET_CAR(BgL_tmpz00_3385,
																								BgL_auxz00_3387);
																		}}}}
																	else
																		{	/* Jas/peep.scm 169 */
																			BFALSE;
																		}
																}
														}
													}
													{	/* Jas/peep.scm 179 */
														obj_t BgL_arg1417z00_488;

														BgL_arg1417z00_488 = CDR(((obj_t) BgL_lz00_481));
														{
															obj_t BgL_lz00_3392;

															BgL_lz00_3392 = BgL_arg1417z00_488;
															BgL_lz00_481 = BgL_lz00_3392;
															goto BgL_zc3z04anonymousza31372ze3z87_482;
														}
													}
												}
										}
									return BgL_reallyzd2usedzd2_433;
								}
							}
						}
					}
				}
			}
		}

	}



/* simplematch */
	obj_t BGl_simplematchz00zzjas_peepz00(obj_t BgL_codez00_22)
	{
		{	/* Jas/peep.scm 190 */
			{
				obj_t BgL_lz00_496;

				BgL_lz00_496 = BgL_codez00_22;
			BgL_zc3z04anonymousza31419ze3z87_497:
				{
					obj_t BgL_labz00_503;
					obj_t BgL_truez00_499;
					obj_t BgL_retestz00_500;
					obj_t BgL_labz00_501;

					if (NULLP(BgL_lz00_496))
						{	/* Jas/peep.scm 222 */
							return CNST_TABLE_REF(((long) 2));
						}
					else
						{	/* Jas/peep.scm 222 */
							if (PAIRP(BgL_lz00_496))
								{	/* Jas/peep.scm 222 */
									obj_t BgL_carzd2122zd2_518;
									obj_t BgL_cdrzd2123zd2_519;

									BgL_carzd2122zd2_518 = CAR(BgL_lz00_496);
									BgL_cdrzd2123zd2_519 = CDR(BgL_lz00_496);
									if (PAIRP(BgL_carzd2122zd2_518))
										{	/* Jas/peep.scm 222 */
											obj_t BgL_cdrzd2126zd2_521;

											BgL_cdrzd2126zd2_521 = CDR(BgL_carzd2122zd2_518);
											if ((CAR(BgL_carzd2122zd2_518) == BINT(((long) 153))))
												{	/* Jas/peep.scm 222 */
													if (PAIRP(BgL_cdrzd2126zd2_521))
														{	/* Jas/peep.scm 222 */
															obj_t BgL_truez00_525;

															BgL_truez00_525 = CAR(BgL_cdrzd2126zd2_521);
															if (NULLP(CDR(BgL_cdrzd2126zd2_521)))
																{	/* Jas/peep.scm 222 */
																	if (PAIRP(BgL_cdrzd2123zd2_519))
																		{	/* Jas/peep.scm 222 */
																			obj_t BgL_carzd2134zd2_529;
																			obj_t BgL_cdrzd2135zd2_530;

																			BgL_carzd2134zd2_529 =
																				CAR(BgL_cdrzd2123zd2_519);
																			BgL_cdrzd2135zd2_530 =
																				CDR(BgL_cdrzd2123zd2_519);
																			if (PAIRP(BgL_carzd2134zd2_529))
																				{	/* Jas/peep.scm 222 */
																					if (
																						(CAR(BgL_carzd2134zd2_529) ==
																							BINT(((long) 3))))
																						{	/* Jas/peep.scm 222 */
																							if (NULLP(CDR
																									(BgL_carzd2134zd2_529)))
																								{	/* Jas/peep.scm 222 */
																									if (PAIRP
																										(BgL_cdrzd2135zd2_530))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd2141zd2_537;
																											obj_t
																												BgL_cdrzd2142zd2_538;
																											BgL_carzd2141zd2_537 =
																												CAR
																												(BgL_cdrzd2135zd2_530);
																											BgL_cdrzd2142zd2_538 =
																												CDR
																												(BgL_cdrzd2135zd2_530);
																											if (PAIRP
																												(BgL_carzd2141zd2_537))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_cdrzd2145zd2_540;
																													BgL_cdrzd2145zd2_540 =
																														CDR
																														(BgL_carzd2141zd2_537);
																													if ((CAR
																															(BgL_carzd2141zd2_537)
																															==
																															BINT(((long)
																																	167))))
																														{	/* Jas/peep.scm 222 */
																															if (PAIRP
																																(BgL_cdrzd2145zd2_540))
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_retestz00_544;
																																	BgL_retestz00_544
																																		=
																																		CAR
																																		(BgL_cdrzd2145zd2_540);
																																	if (NULLP(CDR
																																			(BgL_cdrzd2145zd2_540)))
																																		{	/* Jas/peep.scm 222 */
																																			if (PAIRP
																																				(BgL_cdrzd2142zd2_538))
																																				{	/* Jas/peep.scm 222 */
																																					obj_t
																																						BgL_cdrzd2154zd2_548;
																																					BgL_cdrzd2154zd2_548
																																						=
																																						CDR
																																						(BgL_cdrzd2142zd2_538);
																																					if (
																																						(BgL_truez00_525
																																							==
																																							CAR
																																							(BgL_cdrzd2142zd2_538)))
																																						{	/* Jas/peep.scm 222 */
																																							if (PAIRP(BgL_cdrzd2154zd2_548))
																																								{	/* Jas/peep.scm 222 */
																																									obj_t
																																										BgL_carzd2158zd2_552;
																																									obj_t
																																										BgL_cdrzd2159zd2_553;
																																									BgL_carzd2158zd2_552
																																										=
																																										CAR
																																										(BgL_cdrzd2154zd2_548);
																																									BgL_cdrzd2159zd2_553
																																										=
																																										CDR
																																										(BgL_cdrzd2154zd2_548);
																																									if (PAIRP(BgL_carzd2158zd2_552))
																																										{	/* Jas/peep.scm 222 */
																																											if ((CAR(BgL_carzd2158zd2_552) == BINT(((long) 4))))
																																												{	/* Jas/peep.scm 222 */
																																													if (NULLP(CDR(BgL_carzd2158zd2_552)))
																																														{	/* Jas/peep.scm 222 */
																																															if (PAIRP(BgL_cdrzd2159zd2_553))
																																																{	/* Jas/peep.scm 222 */
																																																	obj_t
																																																		BgL_cdrzd2165zd2_560;
																																																	BgL_cdrzd2165zd2_560
																																																		=
																																																		CDR
																																																		(BgL_cdrzd2159zd2_553);
																																																	if ((BgL_retestz00_544 == CAR(BgL_cdrzd2159zd2_553)))
																																																		{	/* Jas/peep.scm 222 */
																																																			if (PAIRP(BgL_cdrzd2165zd2_560))
																																																				{	/* Jas/peep.scm 222 */
																																																					obj_t
																																																						BgL_carzd2168zd2_564;
																																																					BgL_carzd2168zd2_564
																																																						=
																																																						CAR
																																																						(BgL_cdrzd2165zd2_560);
																																																					if (PAIRP(BgL_carzd2168zd2_564))
																																																						{	/* Jas/peep.scm 222 */
																																																							obj_t
																																																								BgL_cdrzd2172zd2_566;
																																																							BgL_cdrzd2172zd2_566
																																																								=
																																																								CDR
																																																								(BgL_carzd2168zd2_564);
																																																							if ((CAR(BgL_carzd2168zd2_564) == BINT(((long) 153))))
																																																								{	/* Jas/peep.scm 222 */
																																																									if (PAIRP(BgL_cdrzd2172zd2_566))
																																																										{	/* Jas/peep.scm 222 */
																																																											if (NULLP(CDR(BgL_cdrzd2172zd2_566)))
																																																												{	/* Jas/peep.scm 222 */
																																																													BgL_truez00_499
																																																														=
																																																														BgL_truez00_525;
																																																													BgL_retestz00_500
																																																														=
																																																														BgL_retestz00_544;
																																																													BgL_labz00_501
																																																														=
																																																														CAR
																																																														(BgL_cdrzd2172zd2_566);
																																																													{	/* Jas/peep.scm 196 */
																																																														obj_t
																																																															BgL_pz00_1287;
																																																														obj_t
																																																															BgL_cz00_1288;
																																																														{	/* Jas/peep.scm 196 */
																																																															obj_t
																																																																BgL_pairz00_2008;
																																																															{	/* Jas/peep.scm 196 */
																																																																obj_t
																																																																	BgL_pairz00_2007;
																																																																{	/* Jas/peep.scm 196 */
																																																																	obj_t
																																																																		BgL_pairz00_2006;
																																																																	BgL_pairz00_2006
																																																																		=
																																																																		CDR
																																																																		(
																																																																		((obj_t) BgL_lz00_496));
																																																																	BgL_pairz00_2007
																																																																		=
																																																																		CDR
																																																																		(BgL_pairz00_2006);
																																																																}
																																																																BgL_pairz00_2008
																																																																	=
																																																																	CDR
																																																																	(BgL_pairz00_2007);
																																																															}
																																																															BgL_pz00_1287
																																																																=
																																																																CDR
																																																																(CDR
																																																																(CDR
																																																																	(BgL_pairz00_2008)));
																																																														}
																																																														BgL_cz00_1288
																																																															=
																																																															BGl_gensymz00zz__r4_symbols_6_4z00
																																																															(CNST_TABLE_REF
																																																															(((long) 4)));
																																																														{	/* Jas/peep.scm 197 */
																																																															obj_t
																																																																BgL_arg2345z00_1289;
																																																															{	/* Jas/peep.scm 197 */
																																																																obj_t
																																																																	BgL_list2346z00_1290;
																																																																{	/* Jas/peep.scm 197 */
																																																																	obj_t
																																																																		BgL_arg2347z00_1291;
																																																																	BgL_arg2347z00_1291
																																																																		=
																																																																		MAKE_YOUNG_PAIR
																																																																		(BgL_labz00_501,
																																																																		BNIL);
																																																																	BgL_list2346z00_1290
																																																																		=
																																																																		MAKE_YOUNG_PAIR
																																																																		(BINT
																																																																		(((long) 154)), BgL_arg2347z00_1291);
																																																																}
																																																																BgL_arg2345z00_1289
																																																																	=
																																																																	BgL_list2346z00_1290;
																																																															}
																																																															{	/* Jas/peep.scm 197 */
																																																																obj_t
																																																																	BgL_tmpz00_3495;
																																																																BgL_tmpz00_3495
																																																																	=
																																																																	(
																																																																	(obj_t)
																																																																	BgL_lz00_496);
																																																																SET_CAR
																																																																	(BgL_tmpz00_3495,
																																																																	BgL_arg2345z00_1289);
																																																														}}
																																																														{	/* Jas/peep.scm 198 */
																																																															obj_t
																																																																BgL_arg2349z00_1292;
																																																															obj_t
																																																																BgL_arg2350z00_1293;
																																																															BgL_arg2349z00_1292
																																																																=
																																																																CDR
																																																																(
																																																																((obj_t) BgL_lz00_496));
																																																															{	/* Jas/peep.scm 198 */
																																																																obj_t
																																																																	BgL_list2351z00_1294;
																																																																{	/* Jas/peep.scm 198 */
																																																																	obj_t
																																																																		BgL_arg2352z00_1295;
																																																																	BgL_arg2352z00_1295
																																																																		=
																																																																		MAKE_YOUNG_PAIR
																																																																		(BgL_cz00_1288,
																																																																		BNIL);
																																																																	BgL_list2351z00_1294
																																																																		=
																																																																		MAKE_YOUNG_PAIR
																																																																		(BINT
																																																																		(((long) 167)), BgL_arg2352z00_1295);
																																																																}
																																																																BgL_arg2350z00_1293
																																																																	=
																																																																	BgL_list2351z00_1294;
																																																															}
																																																															{	/* Jas/peep.scm 198 */
																																																																obj_t
																																																																	BgL_tmpz00_3503;
																																																																BgL_tmpz00_3503
																																																																	=
																																																																	(
																																																																	(obj_t)
																																																																	BgL_arg2349z00_1292);
																																																																SET_CAR
																																																																	(BgL_tmpz00_3503,
																																																																	BgL_arg2350z00_1293);
																																																														}}
																																																														{	/* Jas/peep.scm 199 */
																																																															obj_t
																																																																BgL_arg2353z00_1296;
																																																															{	/* Jas/peep.scm 199 */
																																																																obj_t
																																																																	BgL_arg2354z00_1297;
																																																																BgL_arg2354z00_1297
																																																																	=
																																																																	CDR
																																																																	(
																																																																	((obj_t) BgL_pz00_1287));
																																																																BgL_arg2353z00_1296
																																																																	=
																																																																	MAKE_YOUNG_PAIR
																																																																	(BgL_cz00_1288,
																																																																	BgL_arg2354z00_1297);
																																																															}
																																																															{	/* Jas/peep.scm 199 */
																																																																obj_t
																																																																	BgL_tmpz00_3509;
																																																																BgL_tmpz00_3509
																																																																	=
																																																																	(
																																																																	(obj_t)
																																																																	BgL_pz00_1287);
																																																																SET_CDR
																																																																	(BgL_tmpz00_3509,
																																																																	BgL_arg2353z00_1296);
																																																														}}
																																																														{
																																																															obj_t
																																																																BgL_lz00_3512;
																																																															BgL_lz00_3512
																																																																=
																																																																BgL_pz00_1287;
																																																															BgL_lz00_496
																																																																=
																																																																BgL_lz00_3512;
																																																															goto
																																																																BgL_zc3z04anonymousza31419ze3z87_497;
																																																														}
																																																													}
																																																												}
																																																											else
																																																												{	/* Jas/peep.scm 222 */
																																																												BgL_tagzd2109zd2_514:
																																																													{	/* Jas/peep.scm 222 */
																																																														obj_t
																																																															BgL_arg2366z00_1309;
																																																														BgL_arg2366z00_1309
																																																															=
																																																															CDR
																																																															(
																																																															((obj_t) BgL_lz00_496));
																																																														{
																																																															obj_t
																																																																BgL_lz00_3516;
																																																															BgL_lz00_3516
																																																																=
																																																																BgL_arg2366z00_1309;
																																																															BgL_lz00_496
																																																																=
																																																																BgL_lz00_3516;
																																																															goto
																																																																BgL_zc3z04anonymousza31419ze3z87_497;
																																																														}
																																																													}
																																																												}
																																																										}
																																																									else
																																																										{	/* Jas/peep.scm 222 */
																																																											goto
																																																												BgL_tagzd2109zd2_514;
																																																										}
																																																								}
																																																							else
																																																								{	/* Jas/peep.scm 222 */
																																																									goto
																																																										BgL_tagzd2109zd2_514;
																																																								}
																																																						}
																																																					else
																																																						{	/* Jas/peep.scm 222 */
																																																							goto
																																																								BgL_tagzd2109zd2_514;
																																																						}
																																																				}
																																																			else
																																																				{	/* Jas/peep.scm 222 */
																																																					goto
																																																						BgL_tagzd2109zd2_514;
																																																				}
																																																		}
																																																	else
																																																		{	/* Jas/peep.scm 222 */
																																																			goto
																																																				BgL_tagzd2109zd2_514;
																																																		}
																																																}
																																															else
																																																{	/* Jas/peep.scm 222 */
																																																	goto
																																																		BgL_tagzd2109zd2_514;
																																																}
																																														}
																																													else
																																														{	/* Jas/peep.scm 222 */
																																															goto
																																																BgL_tagzd2109zd2_514;
																																														}
																																												}
																																											else
																																												{	/* Jas/peep.scm 222 */
																																													goto
																																														BgL_tagzd2109zd2_514;
																																												}
																																										}
																																									else
																																										{	/* Jas/peep.scm 222 */
																																											goto
																																												BgL_tagzd2109zd2_514;
																																										}
																																								}
																																							else
																																								{	/* Jas/peep.scm 222 */
																																									goto
																																										BgL_tagzd2109zd2_514;
																																								}
																																						}
																																					else
																																						{	/* Jas/peep.scm 222 */
																																							goto
																																								BgL_tagzd2109zd2_514;
																																						}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd2109zd2_514;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd2109zd2_514;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd2109zd2_514;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd2109zd2_514;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd2109zd2_514;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto BgL_tagzd2109zd2_514;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd2109zd2_514;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_carzd2397zd2_583;
																							obj_t BgL_cdrzd2398zd2_584;

																							BgL_carzd2397zd2_583 =
																								CAR(
																								((obj_t) BgL_cdrzd2123zd2_519));
																							BgL_cdrzd2398zd2_584 =
																								CDR(
																								((obj_t) BgL_cdrzd2123zd2_519));
																							if (
																								(CAR(
																										((obj_t)
																											BgL_carzd2397zd2_583)) ==
																									BINT(((long) 4))))
																								{	/* Jas/peep.scm 222 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_carzd2397zd2_583))))
																										{	/* Jas/peep.scm 222 */
																											if (PAIRP
																												(BgL_cdrzd2398zd2_584))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_carzd2402zd2_590;
																													BgL_carzd2402zd2_590 =
																														CAR
																														(BgL_cdrzd2398zd2_584);
																													if (PAIRP
																														(BgL_carzd2402zd2_590))
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_cdrzd2406zd2_592;
																															BgL_cdrzd2406zd2_592
																																=
																																CDR
																																(BgL_carzd2402zd2_590);
																															if ((CAR
																																	(BgL_carzd2402zd2_590)
																																	==
																																	BINT(((long)
																																			153))))
																																{	/* Jas/peep.scm 222 */
																																	if (PAIRP
																																		(BgL_cdrzd2406zd2_592))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd2406zd2_592)))
																																				{	/* Jas/peep.scm 222 */
																																					{	/* Jas/peep.scm 205 */
																																						obj_t
																																							BgL_arg2359z00_2136;
																																						{	/* Jas/peep.scm 205 */
																																							obj_t
																																								BgL_pairz00_2142;
																																							{	/* Jas/peep.scm 205 */
																																								obj_t
																																									BgL_pairz00_2141;
																																								BgL_pairz00_2141
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_lz00_496));
																																								BgL_pairz00_2142
																																									=
																																									CDR
																																									(BgL_pairz00_2141);
																																							}
																																							BgL_arg2359z00_2136
																																								=
																																								CDR
																																								(BgL_pairz00_2142);
																																						}
																																						{	/* Jas/peep.scm 205 */
																																							obj_t
																																								BgL_tmpz00_3549;
																																							BgL_tmpz00_3549
																																								=
																																								(
																																								(obj_t)
																																								BgL_lz00_496);
																																							SET_CDR
																																								(BgL_tmpz00_3549,
																																								BgL_arg2359z00_2136);
																																						}
																																					}
																																					{

																																						goto
																																							BgL_zc3z04anonymousza31419ze3z87_497;
																																					}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd2109zd2_514;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd2109zd2_514;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd2109zd2_514;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd2109zd2_514;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd2109zd2_514;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto BgL_tagzd2109zd2_514;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_cdrzd2441zd2_604;

																									BgL_cdrzd2441zd2_604 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd2123zd2_519));
																									{	/* Jas/peep.scm 222 */
																										bool_t BgL_test2927z00_3554;

																										{	/* Jas/peep.scm 222 */
																											obj_t BgL_tmpz00_3555;

																											{	/* Jas/peep.scm 222 */
																												obj_t BgL_pairz00_2147;

																												BgL_pairz00_2147 =
																													CAR(
																													((obj_t)
																														BgL_cdrzd2123zd2_519));
																												BgL_tmpz00_3555 =
																													CAR(BgL_pairz00_2147);
																											}
																											BgL_test2927z00_3554 =
																												(BgL_tmpz00_3555 ==
																												BINT(((long) 178)));
																										}
																										if (BgL_test2927z00_3554)
																											{	/* Jas/peep.scm 222 */
																												if (PAIRP
																													(BgL_cdrzd2441zd2_604))
																													{	/* Jas/peep.scm 222 */
																														obj_t
																															BgL_carzd2444zd2_609;
																														BgL_carzd2444zd2_609
																															=
																															CAR
																															(BgL_cdrzd2441zd2_604);
																														if (PAIRP
																															(BgL_carzd2444zd2_609))
																															{	/* Jas/peep.scm 222 */
																																if (
																																	(CAR
																																		(BgL_carzd2444zd2_609)
																																		==
																																		BINT(((long)
																																				87))))
																																	{	/* Jas/peep.scm 222 */
																																		if (NULLP
																																			(CDR
																																				(BgL_carzd2444zd2_609)))
																																			{	/* Jas/peep.scm 222 */
																																				{	/* Jas/peep.scm 208 */
																																					obj_t
																																						BgL_arg2360z00_2155;
																																					{	/* Jas/peep.scm 208 */
																																						obj_t
																																							BgL_pairz00_2161;
																																						{	/* Jas/peep.scm 208 */
																																							obj_t
																																								BgL_pairz00_2160;
																																							BgL_pairz00_2160
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_lz00_496));
																																							BgL_pairz00_2161
																																								=
																																								CDR
																																								(BgL_pairz00_2160);
																																						}
																																						BgL_arg2360z00_2155
																																							=
																																							CDR
																																							(BgL_pairz00_2161);
																																					}
																																					{	/* Jas/peep.scm 208 */
																																						obj_t
																																							BgL_tmpz00_3577;
																																						BgL_tmpz00_3577
																																							=
																																							(
																																							(obj_t)
																																							BgL_lz00_496);
																																						SET_CDR
																																							(BgL_tmpz00_3577,
																																							BgL_arg2360z00_2155);
																																					}
																																				}
																																				{

																																					goto
																																						BgL_zc3z04anonymousza31419ze3z87_497;
																																				}
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		obj_t
																																			BgL_carzd2459zd2_617;
																																		BgL_carzd2459zd2_617
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd2441zd2_604));
																																		if ((CAR((
																																						(obj_t)
																																						BgL_carzd2459zd2_617))
																																				==
																																				BINT((
																																						(long)
																																						88))))
																																			{	/* Jas/peep.scm 222 */
																																				if (NULLP(CDR(((obj_t) BgL_carzd2459zd2_617))))
																																					{	/* Jas/peep.scm 222 */
																																						{	/* Jas/peep.scm 211 */
																																							obj_t
																																								BgL_arg2361z00_2170;
																																							{	/* Jas/peep.scm 211 */
																																								obj_t
																																									BgL_pairz00_2176;
																																								{	/* Jas/peep.scm 211 */
																																									obj_t
																																										BgL_pairz00_2175;
																																									BgL_pairz00_2175
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_lz00_496));
																																									BgL_pairz00_2176
																																										=
																																										CDR
																																										(BgL_pairz00_2175);
																																								}
																																								BgL_arg2361z00_2170
																																									=
																																									CDR
																																									(BgL_pairz00_2176);
																																							}
																																							{	/* Jas/peep.scm 211 */
																																								obj_t
																																									BgL_tmpz00_3595;
																																								BgL_tmpz00_3595
																																									=
																																									(
																																									(obj_t)
																																									BgL_lz00_496);
																																								SET_CDR
																																									(BgL_tmpz00_3595,
																																									BgL_arg2361z00_2170);
																																							}
																																						}
																																						{

																																							goto
																																								BgL_zc3z04anonymousza31419ze3z87_497;
																																						}
																																					}
																																				else
																																					{	/* Jas/peep.scm 222 */
																																						goto
																																							BgL_tagzd2109zd2_514;
																																					}
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2109zd2_514;
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												obj_t
																													BgL_carzd2469zd2_628;
																												BgL_carzd2469zd2_628 =
																													CAR(BgL_lz00_496);
																												if (PAIRP
																													(BgL_carzd2469zd2_628))
																													{	/* Jas/peep.scm 222 */
																														if (
																															(CAR
																																(BgL_carzd2469zd2_628)
																																==
																																BINT(((long)
																																		9))))
																															{	/* Jas/peep.scm 222 */
																																if (NULLP(CDR
																																		(BgL_carzd2469zd2_628)))
																																	{	/* Jas/peep.scm 222 */
																																		obj_t
																																			BgL_carzd2473zd2_634;
																																		BgL_carzd2473zd2_634
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd2123zd2_519));
																																		if ((CAR((
																																						(obj_t)
																																						BgL_carzd2473zd2_634))
																																				==
																																				BINT((
																																						(long)
																																						136))))
																																			{	/* Jas/peep.scm 222 */
																																				if (NULLP(CDR(((obj_t) BgL_carzd2473zd2_634))))
																																					{	/* Jas/peep.scm 222 */
																																					BgL_tagzd2107zd2_512:
																																						{	/* Jas/peep.scm 215 */
																																							obj_t
																																								BgL_objz00_2048;
																																							BgL_objz00_2048
																																								=
																																								CNST_TABLE_REF
																																								(
																																								((long) 5));
																																							{	/* Jas/peep.scm 215 */
																																								obj_t
																																									BgL_tmpz00_3620;
																																								BgL_tmpz00_3620
																																									=
																																									(
																																									(obj_t)
																																									BgL_lz00_496);
																																								SET_CAR
																																									(BgL_tmpz00_3620,
																																									BgL_objz00_2048);
																																						}}
																																						{	/* Jas/peep.scm 216 */
																																							obj_t
																																								BgL_arg2362z00_1305;
																																							{	/* Jas/peep.scm 216 */
																																								obj_t
																																									BgL_pairz00_2052;
																																								BgL_pairz00_2052
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_lz00_496));
																																								BgL_arg2362z00_1305
																																									=
																																									CDR
																																									(BgL_pairz00_2052);
																																							}
																																							{	/* Jas/peep.scm 216 */
																																								obj_t
																																									BgL_tmpz00_3626;
																																								BgL_tmpz00_3626
																																									=
																																									(
																																									(obj_t)
																																									BgL_lz00_496);
																																								SET_CDR
																																									(BgL_tmpz00_3626,
																																									BgL_arg2362z00_1305);
																																						}}
																																						{	/* Jas/peep.scm 217 */
																																							obj_t
																																								BgL_arg2363z00_1306;
																																							{	/* Jas/peep.scm 217 */
																																								obj_t
																																									BgL_pairz00_2057;
																																								BgL_pairz00_2057
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_lz00_496));
																																								BgL_arg2363z00_1306
																																									=
																																									CDR
																																									(BgL_pairz00_2057);
																																							}
																																							{
																																								obj_t
																																									BgL_lz00_3632;
																																								BgL_lz00_3632
																																									=
																																									BgL_arg2363z00_1306;
																																								BgL_lz00_496
																																									=
																																									BgL_lz00_3632;
																																								goto
																																									BgL_zc3z04anonymousza31419ze3z87_497;
																																							}
																																						}
																																					}
																																				else
																																					{	/* Jas/peep.scm 222 */
																																						goto
																																							BgL_tagzd2109zd2_514;
																																					}
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																if (
																																	(CAR(
																																			((obj_t)
																																				BgL_carzd2469zd2_628))
																																		==
																																		BINT(((long)
																																				10))))
																																	{	/* Jas/peep.scm 222 */
																																		if (NULLP
																																			(CDR(((obj_t) BgL_carzd2469zd2_628))))
																																			{	/* Jas/peep.scm 222 */
																																				obj_t
																																					BgL_carzd2481zd2_648;
																																				BgL_carzd2481zd2_648
																																					=
																																					CAR
																																					(CDR
																																					(BgL_lz00_496));
																																				if ((CAR
																																						(((obj_t) BgL_carzd2481zd2_648)) == BINT(((long) 136))))
																																					{	/* Jas/peep.scm 222 */
																																						if (NULLP(CDR(((obj_t) BgL_carzd2481zd2_648))))
																																							{	/* Jas/peep.scm 222 */
																																							BgL_tagzd2108zd2_513:
																																								{	/* Jas/peep.scm 219 */
																																									obj_t
																																										BgL_objz00_2059;
																																									BgL_objz00_2059
																																										=
																																										CNST_TABLE_REF
																																										(
																																										((long) 6));
																																									{	/* Jas/peep.scm 219 */
																																										obj_t
																																											BgL_tmpz00_3654;
																																										BgL_tmpz00_3654
																																											=
																																											(
																																											(obj_t)
																																											BgL_lz00_496);
																																										SET_CAR
																																											(BgL_tmpz00_3654,
																																											BgL_objz00_2059);
																																								}}
																																								{	/* Jas/peep.scm 220 */
																																									obj_t
																																										BgL_arg2364z00_1307;
																																									{	/* Jas/peep.scm 220 */
																																										obj_t
																																											BgL_pairz00_2063;
																																										BgL_pairz00_2063
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_lz00_496));
																																										BgL_arg2364z00_1307
																																											=
																																											CDR
																																											(BgL_pairz00_2063);
																																									}
																																									{	/* Jas/peep.scm 220 */
																																										obj_t
																																											BgL_tmpz00_3660;
																																										BgL_tmpz00_3660
																																											=
																																											(
																																											(obj_t)
																																											BgL_lz00_496);
																																										SET_CDR
																																											(BgL_tmpz00_3660,
																																											BgL_arg2364z00_1307);
																																								}}
																																								{	/* Jas/peep.scm 221 */
																																									obj_t
																																										BgL_arg2365z00_1308;
																																									{	/* Jas/peep.scm 221 */
																																										obj_t
																																											BgL_pairz00_2068;
																																										BgL_pairz00_2068
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_lz00_496));
																																										BgL_arg2365z00_1308
																																											=
																																											CDR
																																											(BgL_pairz00_2068);
																																									}
																																									{
																																										obj_t
																																											BgL_lz00_3666;
																																										BgL_lz00_3666
																																											=
																																											BgL_arg2365z00_1308;
																																										BgL_lz00_496
																																											=
																																											BgL_lz00_3666;
																																										goto
																																											BgL_zc3z04anonymousza31419ze3z87_497;
																																									}
																																								}
																																							}
																																						else
																																							{	/* Jas/peep.scm 222 */
																																								goto
																																									BgL_tagzd2109zd2_514;
																																							}
																																					}
																																				else
																																					{	/* Jas/peep.scm 222 */
																																						goto
																																							BgL_tagzd2109zd2_514;
																																					}
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2109zd2_514;
																													}
																											}
																									}
																								}
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd2109zd2_514;
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd2109zd2_514;
																		}
																}
															else
																{	/* Jas/peep.scm 222 */
																	if (PAIRP(BgL_cdrzd2123zd2_519))
																		{	/* Jas/peep.scm 222 */
																			obj_t BgL_carzd2526zd2_681;
																			obj_t BgL_cdrzd2527zd2_682;

																			BgL_carzd2526zd2_681 =
																				CAR(BgL_cdrzd2123zd2_519);
																			BgL_cdrzd2527zd2_682 =
																				CDR(BgL_cdrzd2123zd2_519);
																			if (PAIRP(BgL_carzd2526zd2_681))
																				{	/* Jas/peep.scm 222 */
																					if (
																						(CAR(BgL_carzd2526zd2_681) ==
																							BINT(((long) 4))))
																						{	/* Jas/peep.scm 222 */
																							if (NULLP(CDR
																									(BgL_carzd2526zd2_681)))
																								{	/* Jas/peep.scm 222 */
																									if (PAIRP
																										(BgL_cdrzd2527zd2_682))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd2531zd2_689;
																											BgL_carzd2531zd2_689 =
																												CAR
																												(BgL_cdrzd2527zd2_682);
																											if (PAIRP
																												(BgL_carzd2531zd2_689))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_cdrzd2535zd2_691;
																													BgL_cdrzd2535zd2_691 =
																														CDR
																														(BgL_carzd2531zd2_689);
																													if ((CAR
																															(BgL_carzd2531zd2_689)
																															==
																															BINT(((long)
																																	153))))
																														{	/* Jas/peep.scm 222 */
																															if (PAIRP
																																(BgL_cdrzd2535zd2_691))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd2535zd2_691)))
																																		{	/* Jas/peep.scm 222 */
																																			{	/* Jas/peep.scm 205 */
																																				obj_t
																																					BgL_arg2359z00_2225;
																																				{	/* Jas/peep.scm 205 */
																																					obj_t
																																						BgL_pairz00_2231;
																																					{	/* Jas/peep.scm 205 */
																																						obj_t
																																							BgL_pairz00_2230;
																																						BgL_pairz00_2230
																																							=
																																							CDR
																																							(((obj_t) BgL_lz00_496));
																																						BgL_pairz00_2231
																																							=
																																							CDR
																																							(BgL_pairz00_2230);
																																					}
																																					BgL_arg2359z00_2225
																																						=
																																						CDR
																																						(BgL_pairz00_2231);
																																				}
																																				{	/* Jas/peep.scm 205 */
																																					obj_t
																																						BgL_tmpz00_3699;
																																					BgL_tmpz00_3699
																																						=
																																						(
																																						(obj_t)
																																						BgL_lz00_496);
																																					SET_CDR
																																						(BgL_tmpz00_3699,
																																						BgL_arg2359z00_2225);
																																				}
																																			}
																																			{

																																				goto
																																					BgL_zc3z04anonymousza31419ze3z87_497;
																																			}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd2109zd2_514;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd2109zd2_514;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd2109zd2_514;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd2109zd2_514;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto BgL_tagzd2109zd2_514;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd2109zd2_514;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_cdrzd2570zd2_703;

																							BgL_cdrzd2570zd2_703 =
																								CDR(
																								((obj_t) BgL_cdrzd2123zd2_519));
																							{	/* Jas/peep.scm 222 */
																								bool_t BgL_test2952z00_3704;

																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_tmpz00_3705;

																									{	/* Jas/peep.scm 222 */
																										obj_t BgL_pairz00_2236;

																										BgL_pairz00_2236 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2123zd2_519));
																										BgL_tmpz00_3705 =
																											CAR(BgL_pairz00_2236);
																									}
																									BgL_test2952z00_3704 =
																										(BgL_tmpz00_3705 ==
																										BINT(((long) 178)));
																								}
																								if (BgL_test2952z00_3704)
																									{	/* Jas/peep.scm 222 */
																										if (PAIRP
																											(BgL_cdrzd2570zd2_703))
																											{	/* Jas/peep.scm 222 */
																												obj_t
																													BgL_carzd2573zd2_708;
																												BgL_carzd2573zd2_708 =
																													CAR
																													(BgL_cdrzd2570zd2_703);
																												if (PAIRP
																													(BgL_carzd2573zd2_708))
																													{	/* Jas/peep.scm 222 */
																														if (
																															(CAR
																																(BgL_carzd2573zd2_708)
																																==
																																BINT(((long)
																																		87))))
																															{	/* Jas/peep.scm 222 */
																																if (NULLP(CDR
																																		(BgL_carzd2573zd2_708)))
																																	{	/* Jas/peep.scm 222 */
																																		{	/* Jas/peep.scm 208 */
																																			obj_t
																																				BgL_arg2360z00_2244;
																																			{	/* Jas/peep.scm 208 */
																																				obj_t
																																					BgL_pairz00_2250;
																																				{	/* Jas/peep.scm 208 */
																																					obj_t
																																						BgL_pairz00_2249;
																																					BgL_pairz00_2249
																																						=
																																						CDR(
																																						((obj_t) BgL_lz00_496));
																																					BgL_pairz00_2250
																																						=
																																						CDR
																																						(BgL_pairz00_2249);
																																				}
																																				BgL_arg2360z00_2244
																																					=
																																					CDR
																																					(BgL_pairz00_2250);
																																			}
																																			{	/* Jas/peep.scm 208 */
																																				obj_t
																																					BgL_tmpz00_3727;
																																				BgL_tmpz00_3727
																																					=
																																					(
																																					(obj_t)
																																					BgL_lz00_496);
																																				SET_CDR
																																					(BgL_tmpz00_3727,
																																					BgL_arg2360z00_2244);
																																			}
																																		}
																																		{

																																			goto
																																				BgL_zc3z04anonymousza31419ze3z87_497;
																																		}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																obj_t
																																	BgL_carzd2588zd2_716;
																																BgL_carzd2588zd2_716
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd2570zd2_703));
																																if ((CAR((
																																				(obj_t)
																																				BgL_carzd2588zd2_716))
																																		==
																																		BINT(((long)
																																				88))))
																																	{	/* Jas/peep.scm 222 */
																																		if (NULLP
																																			(CDR(((obj_t) BgL_carzd2588zd2_716))))
																																			{	/* Jas/peep.scm 222 */
																																				{	/* Jas/peep.scm 211 */
																																					obj_t
																																						BgL_arg2361z00_2259;
																																					{	/* Jas/peep.scm 211 */
																																						obj_t
																																							BgL_pairz00_2265;
																																						{	/* Jas/peep.scm 211 */
																																							obj_t
																																								BgL_pairz00_2264;
																																							BgL_pairz00_2264
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_lz00_496));
																																							BgL_pairz00_2265
																																								=
																																								CDR
																																								(BgL_pairz00_2264);
																																						}
																																						BgL_arg2361z00_2259
																																							=
																																							CDR
																																							(BgL_pairz00_2265);
																																					}
																																					{	/* Jas/peep.scm 211 */
																																						obj_t
																																							BgL_tmpz00_3745;
																																						BgL_tmpz00_3745
																																							=
																																							(
																																							(obj_t)
																																							BgL_lz00_496);
																																						SET_CDR
																																							(BgL_tmpz00_3745,
																																							BgL_arg2361z00_2259);
																																					}
																																				}
																																				{

																																					goto
																																						BgL_zc3z04anonymousza31419ze3z87_497;
																																				}
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2109zd2_514;
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												goto
																													BgL_tagzd2109zd2_514;
																											}
																									}
																								else
																									{	/* Jas/peep.scm 222 */
																										obj_t BgL_carzd2598zd2_727;

																										BgL_carzd2598zd2_727 =
																											CAR(BgL_lz00_496);
																										if (PAIRP
																											(BgL_carzd2598zd2_727))
																											{	/* Jas/peep.scm 222 */
																												if (
																													(CAR
																														(BgL_carzd2598zd2_727)
																														==
																														BINT(((long) 9))))
																													{	/* Jas/peep.scm 222 */
																														if (NULLP(CDR
																																(BgL_carzd2598zd2_727)))
																															{	/* Jas/peep.scm 222 */
																																obj_t
																																	BgL_carzd2602zd2_733;
																																BgL_carzd2602zd2_733
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd2123zd2_519));
																																if ((CAR((
																																				(obj_t)
																																				BgL_carzd2602zd2_733))
																																		==
																																		BINT(((long)
																																				136))))
																																	{	/* Jas/peep.scm 222 */
																																		if (NULLP
																																			(CDR(((obj_t) BgL_carzd2602zd2_733))))
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2107zd2_512;
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														if (
																															(CAR(
																																	((obj_t)
																																		BgL_carzd2598zd2_727))
																																==
																																BINT(((long)
																																		10))))
																															{	/* Jas/peep.scm 222 */
																																if (NULLP(CDR(
																																			((obj_t)
																																				BgL_carzd2598zd2_727))))
																																	{	/* Jas/peep.scm 222 */
																																		obj_t
																																			BgL_carzd2610zd2_747;
																																		BgL_carzd2610zd2_747
																																			=
																																			CAR(CDR
																																			(BgL_lz00_496));
																																		if ((CAR((
																																						(obj_t)
																																						BgL_carzd2610zd2_747))
																																				==
																																				BINT((
																																						(long)
																																						136))))
																																			{	/* Jas/peep.scm 222 */
																																				if (NULLP(CDR(((obj_t) BgL_carzd2610zd2_747))))
																																					{	/* Jas/peep.scm 222 */
																																						goto
																																							BgL_tagzd2108zd2_513;
																																					}
																																				else
																																					{	/* Jas/peep.scm 222 */
																																						goto
																																							BgL_tagzd2109zd2_514;
																																					}
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												goto
																													BgL_tagzd2109zd2_514;
																											}
																									}
																							}
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd2109zd2_514;
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd2109zd2_514;
																		}
																}
														}
													else
														{	/* Jas/peep.scm 222 */
															if (PAIRP(BgL_cdrzd2123zd2_519))
																{	/* Jas/peep.scm 222 */
																	obj_t BgL_carzd2641zd2_780;
																	obj_t BgL_cdrzd2642zd2_781;

																	BgL_carzd2641zd2_780 =
																		CAR(BgL_cdrzd2123zd2_519);
																	BgL_cdrzd2642zd2_781 =
																		CDR(BgL_cdrzd2123zd2_519);
																	if (PAIRP(BgL_carzd2641zd2_780))
																		{	/* Jas/peep.scm 222 */
																			if (
																				(CAR(BgL_carzd2641zd2_780) ==
																					BINT(((long) 4))))
																				{	/* Jas/peep.scm 222 */
																					if (NULLP(CDR(BgL_carzd2641zd2_780)))
																						{	/* Jas/peep.scm 222 */
																							if (PAIRP(BgL_cdrzd2642zd2_781))
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_carzd2646zd2_788;

																									BgL_carzd2646zd2_788 =
																										CAR(BgL_cdrzd2642zd2_781);
																									if (PAIRP
																										(BgL_carzd2646zd2_788))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_cdrzd2650zd2_790;
																											BgL_cdrzd2650zd2_790 =
																												CDR
																												(BgL_carzd2646zd2_788);
																											if ((CAR
																													(BgL_carzd2646zd2_788)
																													==
																													BINT(((long) 153))))
																												{	/* Jas/peep.scm 222 */
																													if (PAIRP
																														(BgL_cdrzd2650zd2_790))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_cdrzd2650zd2_790)))
																																{	/* Jas/peep.scm 222 */
																																	{	/* Jas/peep.scm 205 */
																																		obj_t
																																			BgL_arg2359z00_2314;
																																		{	/* Jas/peep.scm 205 */
																																			obj_t
																																				BgL_pairz00_2320;
																																			{	/* Jas/peep.scm 205 */
																																				obj_t
																																					BgL_pairz00_2319;
																																				BgL_pairz00_2319
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_lz00_496));
																																				BgL_pairz00_2320
																																					=
																																					CDR
																																					(BgL_pairz00_2319);
																																			}
																																			BgL_arg2359z00_2314
																																				=
																																				CDR
																																				(BgL_pairz00_2320);
																																		}
																																		{	/* Jas/peep.scm 205 */
																																			obj_t
																																				BgL_tmpz00_3821;
																																			BgL_tmpz00_3821
																																				=
																																				((obj_t)
																																				BgL_lz00_496);
																																			SET_CDR
																																				(BgL_tmpz00_3821,
																																				BgL_arg2359z00_2314);
																																		}
																																	}
																																	{

																																		goto
																																			BgL_zc3z04anonymousza31419ze3z87_497;
																																	}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd2109zd2_514;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd2109zd2_514;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd2109zd2_514;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto BgL_tagzd2109zd2_514;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd2109zd2_514;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							goto BgL_tagzd2109zd2_514;
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					obj_t BgL_cdrzd2685zd2_802;

																					BgL_cdrzd2685zd2_802 =
																						CDR(((obj_t) BgL_cdrzd2123zd2_519));
																					{	/* Jas/peep.scm 222 */
																						bool_t BgL_test2977z00_3826;

																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_tmpz00_3827;

																							{	/* Jas/peep.scm 222 */
																								obj_t BgL_pairz00_2325;

																								BgL_pairz00_2325 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2123zd2_519));
																								BgL_tmpz00_3827 =
																									CAR(BgL_pairz00_2325);
																							}
																							BgL_test2977z00_3826 =
																								(BgL_tmpz00_3827 ==
																								BINT(((long) 178)));
																						}
																						if (BgL_test2977z00_3826)
																							{	/* Jas/peep.scm 222 */
																								if (PAIRP(BgL_cdrzd2685zd2_802))
																									{	/* Jas/peep.scm 222 */
																										obj_t BgL_carzd2688zd2_807;

																										BgL_carzd2688zd2_807 =
																											CAR(BgL_cdrzd2685zd2_802);
																										if (PAIRP
																											(BgL_carzd2688zd2_807))
																											{	/* Jas/peep.scm 222 */
																												if (
																													(CAR
																														(BgL_carzd2688zd2_807)
																														==
																														BINT(((long) 87))))
																													{	/* Jas/peep.scm 222 */
																														if (NULLP(CDR
																																(BgL_carzd2688zd2_807)))
																															{	/* Jas/peep.scm 222 */
																																{	/* Jas/peep.scm 208 */
																																	obj_t
																																		BgL_arg2360z00_2333;
																																	{	/* Jas/peep.scm 208 */
																																		obj_t
																																			BgL_pairz00_2339;
																																		{	/* Jas/peep.scm 208 */
																																			obj_t
																																				BgL_pairz00_2338;
																																			BgL_pairz00_2338
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_lz00_496));
																																			BgL_pairz00_2339
																																				=
																																				CDR
																																				(BgL_pairz00_2338);
																																		}
																																		BgL_arg2360z00_2333
																																			=
																																			CDR
																																			(BgL_pairz00_2339);
																																	}
																																	{	/* Jas/peep.scm 208 */
																																		obj_t
																																			BgL_tmpz00_3849;
																																		BgL_tmpz00_3849
																																			=
																																			((obj_t)
																																			BgL_lz00_496);
																																		SET_CDR
																																			(BgL_tmpz00_3849,
																																			BgL_arg2360z00_2333);
																																	}
																																}
																																{

																																	goto
																																		BgL_zc3z04anonymousza31419ze3z87_497;
																																}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														obj_t
																															BgL_carzd2703zd2_815;
																														BgL_carzd2703zd2_815
																															=
																															CAR(((obj_t)
																																BgL_cdrzd2685zd2_802));
																														if ((CAR(((obj_t)
																																		BgL_carzd2703zd2_815))
																																==
																																BINT(((long)
																																		88))))
																															{	/* Jas/peep.scm 222 */
																																if (NULLP(CDR(
																																			((obj_t)
																																				BgL_carzd2703zd2_815))))
																																	{	/* Jas/peep.scm 222 */
																																		{	/* Jas/peep.scm 211 */
																																			obj_t
																																				BgL_arg2361z00_2348;
																																			{	/* Jas/peep.scm 211 */
																																				obj_t
																																					BgL_pairz00_2354;
																																				{	/* Jas/peep.scm 211 */
																																					obj_t
																																						BgL_pairz00_2353;
																																					BgL_pairz00_2353
																																						=
																																						CDR(
																																						((obj_t) BgL_lz00_496));
																																					BgL_pairz00_2354
																																						=
																																						CDR
																																						(BgL_pairz00_2353);
																																				}
																																				BgL_arg2361z00_2348
																																					=
																																					CDR
																																					(BgL_pairz00_2354);
																																			}
																																			{	/* Jas/peep.scm 211 */
																																				obj_t
																																					BgL_tmpz00_3867;
																																				BgL_tmpz00_3867
																																					=
																																					(
																																					(obj_t)
																																					BgL_lz00_496);
																																				SET_CDR
																																					(BgL_tmpz00_3867,
																																					BgL_arg2361z00_2348);
																																			}
																																		}
																																		{

																																			goto
																																				BgL_zc3z04anonymousza31419ze3z87_497;
																																		}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												goto
																													BgL_tagzd2109zd2_514;
																											}
																									}
																								else
																									{	/* Jas/peep.scm 222 */
																										goto BgL_tagzd2109zd2_514;
																									}
																							}
																						else
																							{	/* Jas/peep.scm 222 */
																								obj_t BgL_carzd2713zd2_826;

																								BgL_carzd2713zd2_826 =
																									CAR(BgL_lz00_496);
																								if (PAIRP(BgL_carzd2713zd2_826))
																									{	/* Jas/peep.scm 222 */
																										if (
																											(CAR(BgL_carzd2713zd2_826)
																												== BINT(((long) 9))))
																											{	/* Jas/peep.scm 222 */
																												if (NULLP(CDR
																														(BgL_carzd2713zd2_826)))
																													{	/* Jas/peep.scm 222 */
																														obj_t
																															BgL_carzd2717zd2_832;
																														BgL_carzd2717zd2_832
																															=
																															CAR(((obj_t)
																																BgL_cdrzd2123zd2_519));
																														if ((CAR(((obj_t)
																																		BgL_carzd2717zd2_832))
																																==
																																BINT(((long)
																																		136))))
																															{	/* Jas/peep.scm 222 */
																																if (NULLP(CDR(
																																			((obj_t)
																																				BgL_carzd2717zd2_832))))
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2107zd2_512;
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2109zd2_514;
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												if (
																													(CAR(
																															((obj_t)
																																BgL_carzd2713zd2_826))
																														==
																														BINT(((long) 10))))
																													{	/* Jas/peep.scm 222 */
																														if (NULLP(CDR(
																																	((obj_t)
																																		BgL_carzd2713zd2_826))))
																															{	/* Jas/peep.scm 222 */
																																obj_t
																																	BgL_carzd2725zd2_846;
																																BgL_carzd2725zd2_846
																																	=
																																	CAR(CDR
																																	(BgL_lz00_496));
																																if ((CAR((
																																				(obj_t)
																																				BgL_carzd2725zd2_846))
																																		==
																																		BINT(((long)
																																				136))))
																																	{	/* Jas/peep.scm 222 */
																																		if (NULLP
																																			(CDR(((obj_t) BgL_carzd2725zd2_846))))
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2108zd2_513;
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2109zd2_514;
																													}
																											}
																									}
																								else
																									{	/* Jas/peep.scm 222 */
																										goto BgL_tagzd2109zd2_514;
																									}
																							}
																					}
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd2109zd2_514;
																		}
																}
															else
																{	/* Jas/peep.scm 222 */
																	goto BgL_tagzd2109zd2_514;
																}
														}
												}
											else
												{	/* Jas/peep.scm 222 */
													if (
														(CAR(
																((obj_t) BgL_carzd2122zd2_518)) ==
															BINT(((long) 3))))
														{	/* Jas/peep.scm 222 */
															if (NULLP(CDR(((obj_t) BgL_carzd2122zd2_518))))
																{	/* Jas/peep.scm 222 */
																	if (PAIRP(BgL_cdrzd2123zd2_519))
																		{	/* Jas/peep.scm 222 */
																			obj_t BgL_carzd2753zd2_883;

																			BgL_carzd2753zd2_883 =
																				CAR(BgL_cdrzd2123zd2_519);
																			if (PAIRP(BgL_carzd2753zd2_883))
																				{	/* Jas/peep.scm 222 */
																					obj_t BgL_cdrzd2757zd2_885;

																					BgL_cdrzd2757zd2_885 =
																						CDR(BgL_carzd2753zd2_883);
																					if (
																						(CAR(BgL_carzd2753zd2_883) ==
																							BINT(((long) 153))))
																						{	/* Jas/peep.scm 222 */
																							if (PAIRP(BgL_cdrzd2757zd2_885))
																								{	/* Jas/peep.scm 222 */
																									if (NULLP(CDR
																											(BgL_cdrzd2757zd2_885)))
																										{	/* Jas/peep.scm 222 */
																											BgL_labz00_503 =
																												CAR
																												(BgL_cdrzd2757zd2_885);
																											{	/* Jas/peep.scm 202 */
																												obj_t
																													BgL_arg2356z00_1299;
																												{	/* Jas/peep.scm 202 */
																													obj_t
																														BgL_arg2357z00_1300;
																													BgL_arg2357z00_1300 =
																														MAKE_YOUNG_PAIR
																														(BgL_labz00_503,
																														BNIL);
																													BgL_arg2356z00_1299 =
																														MAKE_YOUNG_PAIR(BINT
																														(((long) 167)),
																														BgL_arg2357z00_1300);
																												}
																												{	/* Jas/peep.scm 202 */
																													obj_t BgL_tmpz00_3938;

																													BgL_tmpz00_3938 =
																														((obj_t)
																														BgL_lz00_496);
																													SET_CAR
																														(BgL_tmpz00_3938,
																														BgL_arg2356z00_1299);
																											}}
																											{	/* Jas/peep.scm 203 */
																												obj_t
																													BgL_arg2358z00_1301;
																												BgL_arg2358z00_1301 =
																													CDR(((obj_t)
																														BgL_lz00_496));
																												{
																													obj_t BgL_lz00_3943;

																													BgL_lz00_3943 =
																														BgL_arg2358z00_1301;
																													BgL_lz00_496 =
																														BgL_lz00_3943;
																													goto
																														BgL_zc3z04anonymousza31419ze3z87_497;
																												}
																											}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto BgL_tagzd2109zd2_514;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd2109zd2_514;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_carzd2786zd2_894;
																							obj_t BgL_cdrzd2787zd2_895;

																							BgL_carzd2786zd2_894 =
																								CAR(
																								((obj_t) BgL_cdrzd2123zd2_519));
																							BgL_cdrzd2787zd2_895 =
																								CDR(
																								((obj_t) BgL_cdrzd2123zd2_519));
																							if (
																								(CAR(
																										((obj_t)
																											BgL_carzd2786zd2_894)) ==
																									BINT(((long) 4))))
																								{	/* Jas/peep.scm 222 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_carzd2786zd2_894))))
																										{	/* Jas/peep.scm 222 */
																											if (PAIRP
																												(BgL_cdrzd2787zd2_895))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_carzd2791zd2_901;
																													BgL_carzd2791zd2_901 =
																														CAR
																														(BgL_cdrzd2787zd2_895);
																													if (PAIRP
																														(BgL_carzd2791zd2_901))
																														{	/* Jas/peep.scm 222 */
																															obj_t
																																BgL_cdrzd2795zd2_903;
																															BgL_cdrzd2795zd2_903
																																=
																																CDR
																																(BgL_carzd2791zd2_901);
																															if ((CAR
																																	(BgL_carzd2791zd2_901)
																																	==
																																	BINT(((long)
																																			153))))
																																{	/* Jas/peep.scm 222 */
																																	if (PAIRP
																																		(BgL_cdrzd2795zd2_903))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd2795zd2_903)))
																																				{	/* Jas/peep.scm 222 */
																																					{	/* Jas/peep.scm 205 */
																																						obj_t
																																							BgL_arg2359z00_2415;
																																						{	/* Jas/peep.scm 205 */
																																							obj_t
																																								BgL_pairz00_2421;
																																							{	/* Jas/peep.scm 205 */
																																								obj_t
																																									BgL_pairz00_2420;
																																								BgL_pairz00_2420
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_lz00_496));
																																								BgL_pairz00_2421
																																									=
																																									CDR
																																									(BgL_pairz00_2420);
																																							}
																																							BgL_arg2359z00_2415
																																								=
																																								CDR
																																								(BgL_pairz00_2421);
																																						}
																																						{	/* Jas/peep.scm 205 */
																																							obj_t
																																								BgL_tmpz00_3977;
																																							BgL_tmpz00_3977
																																								=
																																								(
																																								(obj_t)
																																								BgL_lz00_496);
																																							SET_CDR
																																								(BgL_tmpz00_3977,
																																								BgL_arg2359z00_2415);
																																						}
																																					}
																																					{

																																						goto
																																							BgL_zc3z04anonymousza31419ze3z87_497;
																																					}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd2109zd2_514;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd2109zd2_514;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd2109zd2_514;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd2109zd2_514;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd2109zd2_514;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto BgL_tagzd2109zd2_514;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									bool_t BgL_test3007z00_3980;

																									{	/* Jas/peep.scm 222 */
																										obj_t BgL_tmpz00_3981;

																										{	/* Jas/peep.scm 222 */
																											obj_t BgL_pairz00_2426;

																											BgL_pairz00_2426 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd2123zd2_519));
																											BgL_tmpz00_3981 =
																												CAR(BgL_pairz00_2426);
																										}
																										BgL_test3007z00_3980 =
																											(BgL_tmpz00_3981 ==
																											BINT(((long) 178)));
																									}
																									if (BgL_test3007z00_3980)
																										{	/* Jas/peep.scm 222 */
																											if (PAIRP
																												(BgL_cdrzd2787zd2_895))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_carzd2833zd2_920;
																													BgL_carzd2833zd2_920 =
																														CAR
																														(BgL_cdrzd2787zd2_895);
																													if (PAIRP
																														(BgL_carzd2833zd2_920))
																														{	/* Jas/peep.scm 222 */
																															if (
																																(CAR
																																	(BgL_carzd2833zd2_920)
																																	==
																																	BINT(((long)
																																			87))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_carzd2833zd2_920)))
																																		{	/* Jas/peep.scm 222 */
																																			{	/* Jas/peep.scm 208 */
																																				obj_t
																																					BgL_arg2360z00_2434;
																																				{	/* Jas/peep.scm 208 */
																																					obj_t
																																						BgL_pairz00_2440;
																																					{	/* Jas/peep.scm 208 */
																																						obj_t
																																							BgL_pairz00_2439;
																																						BgL_pairz00_2439
																																							=
																																							CDR
																																							(((obj_t) BgL_lz00_496));
																																						BgL_pairz00_2440
																																							=
																																							CDR
																																							(BgL_pairz00_2439);
																																					}
																																					BgL_arg2360z00_2434
																																						=
																																						CDR
																																						(BgL_pairz00_2440);
																																				}
																																				{	/* Jas/peep.scm 208 */
																																					obj_t
																																						BgL_tmpz00_4003;
																																					BgL_tmpz00_4003
																																						=
																																						(
																																						(obj_t)
																																						BgL_lz00_496);
																																					SET_CDR
																																						(BgL_tmpz00_4003,
																																						BgL_arg2360z00_2434);
																																				}
																																			}
																																			{

																																				goto
																																					BgL_zc3z04anonymousza31419ze3z87_497;
																																			}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd2109zd2_514;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_carzd2848zd2_928;
																																	BgL_carzd2848zd2_928
																																		=
																																		CAR(CDR(CDR
																																			(BgL_lz00_496)));
																																	if ((CAR((
																																					(obj_t)
																																					BgL_carzd2848zd2_928))
																																			==
																																			BINT((
																																					(long)
																																					88))))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR(((obj_t) BgL_carzd2848zd2_928))))
																																				{	/* Jas/peep.scm 222 */
																																					{	/* Jas/peep.scm 211 */
																																						obj_t
																																							BgL_arg2361z00_2449;
																																						{	/* Jas/peep.scm 211 */
																																							obj_t
																																								BgL_pairz00_2455;
																																							{	/* Jas/peep.scm 211 */
																																								obj_t
																																									BgL_pairz00_2454;
																																								BgL_pairz00_2454
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_lz00_496));
																																								BgL_pairz00_2455
																																									=
																																									CDR
																																									(BgL_pairz00_2454);
																																							}
																																							BgL_arg2361z00_2449
																																								=
																																								CDR
																																								(BgL_pairz00_2455);
																																						}
																																						{	/* Jas/peep.scm 211 */
																																							obj_t
																																								BgL_tmpz00_4022;
																																							BgL_tmpz00_4022
																																								=
																																								(
																																								(obj_t)
																																								BgL_lz00_496);
																																							SET_CDR
																																								(BgL_tmpz00_4022,
																																								BgL_arg2361z00_2449);
																																						}
																																					}
																																					{

																																						goto
																																							BgL_zc3z04anonymousza31419ze3z87_497;
																																					}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd2109zd2_514;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd2109zd2_514;
																																		}
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd2109zd2_514;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd2109zd2_514;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd2858zd2_939;
																											BgL_carzd2858zd2_939 =
																												CAR(BgL_lz00_496);
																											if (PAIRP
																												(BgL_carzd2858zd2_939))
																												{	/* Jas/peep.scm 222 */
																													if (
																														(CAR
																															(BgL_carzd2858zd2_939)
																															==
																															BINT(((long) 9))))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_carzd2858zd2_939)))
																																{	/* Jas/peep.scm 222 */
																																	obj_t
																																		BgL_carzd2862zd2_945;
																																	BgL_carzd2862zd2_945
																																		=
																																		CAR(CDR
																																		(BgL_lz00_496));
																																	if ((CAR((
																																					(obj_t)
																																					BgL_carzd2862zd2_945))
																																			==
																																			BINT((
																																					(long)
																																					136))))
																																		{	/* Jas/peep.scm 222 */
																																			if (NULLP
																																				(CDR(((obj_t) BgL_carzd2862zd2_945))))
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd2107zd2_512;
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd2109zd2_514;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd2109zd2_514;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd2109zd2_514;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															if (
																																(CAR(
																																		((obj_t)
																																			BgL_carzd2858zd2_939))
																																	==
																																	BINT(((long)
																																			10))))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_carzd2858zd2_939))))
																																		{	/* Jas/peep.scm 222 */
																																			obj_t
																																				BgL_carzd2870zd2_959;
																																			BgL_carzd2870zd2_959
																																				=
																																				CAR(CDR
																																				(BgL_lz00_496));
																																			if ((CAR((
																																							(obj_t)
																																							BgL_carzd2870zd2_959))
																																					==
																																					BINT((
																																							(long)
																																							136))))
																																				{	/* Jas/peep.scm 222 */
																																					if (NULLP(CDR(((obj_t) BgL_carzd2870zd2_959))))
																																						{	/* Jas/peep.scm 222 */
																																							goto
																																								BgL_tagzd2108zd2_513;
																																						}
																																					else
																																						{	/* Jas/peep.scm 222 */
																																							goto
																																								BgL_tagzd2109zd2_514;
																																						}
																																				}
																																			else
																																				{	/* Jas/peep.scm 222 */
																																					goto
																																						BgL_tagzd2109zd2_514;
																																				}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd2109zd2_514;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd2109zd2_514;
																																}
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd2109zd2_514;
																												}
																										}
																								}
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd2109zd2_514;
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd2109zd2_514;
																		}
																}
															else
																{	/* Jas/peep.scm 222 */
																	if (PAIRP(BgL_cdrzd2123zd2_519))
																		{	/* Jas/peep.scm 222 */
																			obj_t BgL_carzd2906zd2_992;
																			obj_t BgL_cdrzd2907zd2_993;

																			BgL_carzd2906zd2_992 =
																				CAR(BgL_cdrzd2123zd2_519);
																			BgL_cdrzd2907zd2_993 =
																				CDR(BgL_cdrzd2123zd2_519);
																			if (PAIRP(BgL_carzd2906zd2_992))
																				{	/* Jas/peep.scm 222 */
																					if (
																						(CAR(BgL_carzd2906zd2_992) ==
																							BINT(((long) 4))))
																						{	/* Jas/peep.scm 222 */
																							if (NULLP(CDR
																									(BgL_carzd2906zd2_992)))
																								{	/* Jas/peep.scm 222 */
																									if (PAIRP
																										(BgL_cdrzd2907zd2_993))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_carzd2911zd2_1000;
																											BgL_carzd2911zd2_1000 =
																												CAR
																												(BgL_cdrzd2907zd2_993);
																											if (PAIRP
																												(BgL_carzd2911zd2_1000))
																												{	/* Jas/peep.scm 222 */
																													obj_t
																														BgL_cdrzd2915zd2_1002;
																													BgL_cdrzd2915zd2_1002
																														=
																														CDR
																														(BgL_carzd2911zd2_1000);
																													if ((CAR
																															(BgL_carzd2911zd2_1000)
																															==
																															BINT(((long)
																																	153))))
																														{	/* Jas/peep.scm 222 */
																															if (PAIRP
																																(BgL_cdrzd2915zd2_1002))
																																{	/* Jas/peep.scm 222 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd2915zd2_1002)))
																																		{	/* Jas/peep.scm 222 */
																																			{	/* Jas/peep.scm 205 */
																																				obj_t
																																					BgL_arg2359z00_2504;
																																				{	/* Jas/peep.scm 205 */
																																					obj_t
																																						BgL_pairz00_2510;
																																					{	/* Jas/peep.scm 205 */
																																						obj_t
																																							BgL_pairz00_2509;
																																						BgL_pairz00_2509
																																							=
																																							CDR
																																							(((obj_t) BgL_lz00_496));
																																						BgL_pairz00_2510
																																							=
																																							CDR
																																							(BgL_pairz00_2509);
																																					}
																																					BgL_arg2359z00_2504
																																						=
																																						CDR
																																						(BgL_pairz00_2510);
																																				}
																																				{	/* Jas/peep.scm 205 */
																																					obj_t
																																						BgL_tmpz00_4098;
																																					BgL_tmpz00_4098
																																						=
																																						(
																																						(obj_t)
																																						BgL_lz00_496);
																																					SET_CDR
																																						(BgL_tmpz00_4098,
																																						BgL_arg2359z00_2504);
																																				}
																																			}
																																			{

																																				goto
																																					BgL_zc3z04anonymousza31419ze3z87_497;
																																			}
																																		}
																																	else
																																		{	/* Jas/peep.scm 222 */
																																			goto
																																				BgL_tagzd2109zd2_514;
																																		}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd2109zd2_514;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd2109zd2_514;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd2109zd2_514;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto BgL_tagzd2109zd2_514;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd2109zd2_514;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_cdrzd2950zd2_1014;

																							BgL_cdrzd2950zd2_1014 =
																								CDR(
																								((obj_t) BgL_cdrzd2123zd2_519));
																							{	/* Jas/peep.scm 222 */
																								bool_t BgL_test3032z00_4103;

																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_tmpz00_4104;

																									{	/* Jas/peep.scm 222 */
																										obj_t BgL_pairz00_2515;

																										BgL_pairz00_2515 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2123zd2_519));
																										BgL_tmpz00_4104 =
																											CAR(BgL_pairz00_2515);
																									}
																									BgL_test3032z00_4103 =
																										(BgL_tmpz00_4104 ==
																										BINT(((long) 178)));
																								}
																								if (BgL_test3032z00_4103)
																									{	/* Jas/peep.scm 222 */
																										if (PAIRP
																											(BgL_cdrzd2950zd2_1014))
																											{	/* Jas/peep.scm 222 */
																												obj_t
																													BgL_carzd2953zd2_1019;
																												BgL_carzd2953zd2_1019 =
																													CAR
																													(BgL_cdrzd2950zd2_1014);
																												if (PAIRP
																													(BgL_carzd2953zd2_1019))
																													{	/* Jas/peep.scm 222 */
																														if (
																															(CAR
																																(BgL_carzd2953zd2_1019)
																																==
																																BINT(((long)
																																		87))))
																															{	/* Jas/peep.scm 222 */
																																if (NULLP(CDR
																																		(BgL_carzd2953zd2_1019)))
																																	{	/* Jas/peep.scm 222 */
																																		{	/* Jas/peep.scm 208 */
																																			obj_t
																																				BgL_arg2360z00_2523;
																																			{	/* Jas/peep.scm 208 */
																																				obj_t
																																					BgL_pairz00_2529;
																																				{	/* Jas/peep.scm 208 */
																																					obj_t
																																						BgL_pairz00_2528;
																																					BgL_pairz00_2528
																																						=
																																						CDR(
																																						((obj_t) BgL_lz00_496));
																																					BgL_pairz00_2529
																																						=
																																						CDR
																																						(BgL_pairz00_2528);
																																				}
																																				BgL_arg2360z00_2523
																																					=
																																					CDR
																																					(BgL_pairz00_2529);
																																			}
																																			{	/* Jas/peep.scm 208 */
																																				obj_t
																																					BgL_tmpz00_4126;
																																				BgL_tmpz00_4126
																																					=
																																					(
																																					(obj_t)
																																					BgL_lz00_496);
																																				SET_CDR
																																					(BgL_tmpz00_4126,
																																					BgL_arg2360z00_2523);
																																			}
																																		}
																																		{

																																			goto
																																				BgL_zc3z04anonymousza31419ze3z87_497;
																																		}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																obj_t
																																	BgL_carzd2968zd2_1027;
																																BgL_carzd2968zd2_1027
																																	=
																																	CAR(CDR(CDR
																																		(BgL_lz00_496)));
																																if ((CAR((
																																				(obj_t)
																																				BgL_carzd2968zd2_1027))
																																		==
																																		BINT(((long)
																																				88))))
																																	{	/* Jas/peep.scm 222 */
																																		if (NULLP
																																			(CDR(((obj_t) BgL_carzd2968zd2_1027))))
																																			{	/* Jas/peep.scm 222 */
																																				{	/* Jas/peep.scm 211 */
																																					obj_t
																																						BgL_arg2361z00_2538;
																																					{	/* Jas/peep.scm 211 */
																																						obj_t
																																							BgL_pairz00_2544;
																																						{	/* Jas/peep.scm 211 */
																																							obj_t
																																								BgL_pairz00_2543;
																																							BgL_pairz00_2543
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_lz00_496));
																																							BgL_pairz00_2544
																																								=
																																								CDR
																																								(BgL_pairz00_2543);
																																						}
																																						BgL_arg2361z00_2538
																																							=
																																							CDR
																																							(BgL_pairz00_2544);
																																					}
																																					{	/* Jas/peep.scm 211 */
																																						obj_t
																																							BgL_tmpz00_4145;
																																						BgL_tmpz00_4145
																																							=
																																							(
																																							(obj_t)
																																							BgL_lz00_496);
																																						SET_CDR
																																							(BgL_tmpz00_4145,
																																							BgL_arg2361z00_2538);
																																					}
																																				}
																																				{

																																					goto
																																						BgL_zc3z04anonymousza31419ze3z87_497;
																																				}
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2109zd2_514;
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												goto
																													BgL_tagzd2109zd2_514;
																											}
																									}
																								else
																									{	/* Jas/peep.scm 222 */
																										obj_t BgL_carzd2978zd2_1038;

																										BgL_carzd2978zd2_1038 =
																											CAR(BgL_lz00_496);
																										if (PAIRP
																											(BgL_carzd2978zd2_1038))
																											{	/* Jas/peep.scm 222 */
																												if (
																													(CAR
																														(BgL_carzd2978zd2_1038)
																														==
																														BINT(((long) 9))))
																													{	/* Jas/peep.scm 222 */
																														if (NULLP(CDR
																																(BgL_carzd2978zd2_1038)))
																															{	/* Jas/peep.scm 222 */
																																obj_t
																																	BgL_carzd2982zd2_1044;
																																BgL_carzd2982zd2_1044
																																	=
																																	CAR(CDR
																																	(BgL_lz00_496));
																																if ((CAR((
																																				(obj_t)
																																				BgL_carzd2982zd2_1044))
																																		==
																																		BINT(((long)
																																				136))))
																																	{	/* Jas/peep.scm 222 */
																																		if (NULLP
																																			(CDR(((obj_t) BgL_carzd2982zd2_1044))))
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2107zd2_512;
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														if (
																															(CAR(
																																	((obj_t)
																																		BgL_carzd2978zd2_1038))
																																==
																																BINT(((long)
																																		10))))
																															{	/* Jas/peep.scm 222 */
																																if (NULLP(CDR(
																																			((obj_t)
																																				BgL_carzd2978zd2_1038))))
																																	{	/* Jas/peep.scm 222 */
																																		obj_t
																																			BgL_carzd2990zd2_1058;
																																		BgL_carzd2990zd2_1058
																																			=
																																			CAR(CDR
																																			(BgL_lz00_496));
																																		if ((CAR((
																																						(obj_t)
																																						BgL_carzd2990zd2_1058))
																																				==
																																				BINT((
																																						(long)
																																						136))))
																																			{	/* Jas/peep.scm 222 */
																																				if (NULLP(CDR(((obj_t) BgL_carzd2990zd2_1058))))
																																					{	/* Jas/peep.scm 222 */
																																						goto
																																							BgL_tagzd2108zd2_513;
																																					}
																																				else
																																					{	/* Jas/peep.scm 222 */
																																						goto
																																							BgL_tagzd2109zd2_514;
																																					}
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												goto
																													BgL_tagzd2109zd2_514;
																											}
																									}
																							}
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd2109zd2_514;
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd2109zd2_514;
																		}
																}
														}
													else
														{	/* Jas/peep.scm 222 */
															if (PAIRP(BgL_cdrzd2123zd2_519))
																{	/* Jas/peep.scm 222 */
																	obj_t BgL_carzd21018zd2_1091;
																	obj_t BgL_cdrzd21019zd2_1092;

																	BgL_carzd21018zd2_1091 =
																		CAR(BgL_cdrzd2123zd2_519);
																	BgL_cdrzd21019zd2_1092 =
																		CDR(BgL_cdrzd2123zd2_519);
																	if (PAIRP(BgL_carzd21018zd2_1091))
																		{	/* Jas/peep.scm 222 */
																			if (
																				(CAR(BgL_carzd21018zd2_1091) ==
																					BINT(((long) 4))))
																				{	/* Jas/peep.scm 222 */
																					if (NULLP(CDR
																							(BgL_carzd21018zd2_1091)))
																						{	/* Jas/peep.scm 222 */
																							if (PAIRP(BgL_cdrzd21019zd2_1092))
																								{	/* Jas/peep.scm 222 */
																									obj_t BgL_carzd21023zd2_1099;

																									BgL_carzd21023zd2_1099 =
																										CAR(BgL_cdrzd21019zd2_1092);
																									if (PAIRP
																										(BgL_carzd21023zd2_1099))
																										{	/* Jas/peep.scm 222 */
																											obj_t
																												BgL_cdrzd21027zd2_1101;
																											BgL_cdrzd21027zd2_1101 =
																												CDR
																												(BgL_carzd21023zd2_1099);
																											if ((CAR
																													(BgL_carzd21023zd2_1099)
																													==
																													BINT(((long) 153))))
																												{	/* Jas/peep.scm 222 */
																													if (PAIRP
																														(BgL_cdrzd21027zd2_1101))
																														{	/* Jas/peep.scm 222 */
																															if (NULLP(CDR
																																	(BgL_cdrzd21027zd2_1101)))
																																{	/* Jas/peep.scm 222 */
																																	{	/* Jas/peep.scm 205 */
																																		obj_t
																																			BgL_arg2359z00_2593;
																																		{	/* Jas/peep.scm 205 */
																																			obj_t
																																				BgL_pairz00_2599;
																																			{	/* Jas/peep.scm 205 */
																																				obj_t
																																					BgL_pairz00_2598;
																																				BgL_pairz00_2598
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_lz00_496));
																																				BgL_pairz00_2599
																																					=
																																					CDR
																																					(BgL_pairz00_2598);
																																			}
																																			BgL_arg2359z00_2593
																																				=
																																				CDR
																																				(BgL_pairz00_2599);
																																		}
																																		{	/* Jas/peep.scm 205 */
																																			obj_t
																																				BgL_tmpz00_4221;
																																			BgL_tmpz00_4221
																																				=
																																				((obj_t)
																																				BgL_lz00_496);
																																			SET_CDR
																																				(BgL_tmpz00_4221,
																																				BgL_arg2359z00_2593);
																																		}
																																	}
																																	{

																																		goto
																																			BgL_zc3z04anonymousza31419ze3z87_497;
																																	}
																																}
																															else
																																{	/* Jas/peep.scm 222 */
																																	goto
																																		BgL_tagzd2109zd2_514;
																																}
																														}
																													else
																														{	/* Jas/peep.scm 222 */
																															goto
																																BgL_tagzd2109zd2_514;
																														}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd2109zd2_514;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto BgL_tagzd2109zd2_514;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd2109zd2_514;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							goto BgL_tagzd2109zd2_514;
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					obj_t BgL_cdrzd21062zd2_1113;

																					BgL_cdrzd21062zd2_1113 =
																						CDR(((obj_t) BgL_cdrzd2123zd2_519));
																					{	/* Jas/peep.scm 222 */
																						bool_t BgL_test3057z00_4226;

																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_tmpz00_4227;

																							{	/* Jas/peep.scm 222 */
																								obj_t BgL_pairz00_2604;

																								BgL_pairz00_2604 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2123zd2_519));
																								BgL_tmpz00_4227 =
																									CAR(BgL_pairz00_2604);
																							}
																							BgL_test3057z00_4226 =
																								(BgL_tmpz00_4227 ==
																								BINT(((long) 178)));
																						}
																						if (BgL_test3057z00_4226)
																							{	/* Jas/peep.scm 222 */
																								if (PAIRP
																									(BgL_cdrzd21062zd2_1113))
																									{	/* Jas/peep.scm 222 */
																										obj_t
																											BgL_carzd21065zd2_1118;
																										BgL_carzd21065zd2_1118 =
																											CAR
																											(BgL_cdrzd21062zd2_1113);
																										if (PAIRP
																											(BgL_carzd21065zd2_1118))
																											{	/* Jas/peep.scm 222 */
																												if (
																													(CAR
																														(BgL_carzd21065zd2_1118)
																														==
																														BINT(((long) 87))))
																													{	/* Jas/peep.scm 222 */
																														if (NULLP(CDR
																																(BgL_carzd21065zd2_1118)))
																															{	/* Jas/peep.scm 222 */
																																{	/* Jas/peep.scm 208 */
																																	obj_t
																																		BgL_arg2360z00_2612;
																																	{	/* Jas/peep.scm 208 */
																																		obj_t
																																			BgL_pairz00_2618;
																																		{	/* Jas/peep.scm 208 */
																																			obj_t
																																				BgL_pairz00_2617;
																																			BgL_pairz00_2617
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_lz00_496));
																																			BgL_pairz00_2618
																																				=
																																				CDR
																																				(BgL_pairz00_2617);
																																		}
																																		BgL_arg2360z00_2612
																																			=
																																			CDR
																																			(BgL_pairz00_2618);
																																	}
																																	{	/* Jas/peep.scm 208 */
																																		obj_t
																																			BgL_tmpz00_4249;
																																		BgL_tmpz00_4249
																																			=
																																			((obj_t)
																																			BgL_lz00_496);
																																		SET_CDR
																																			(BgL_tmpz00_4249,
																																			BgL_arg2360z00_2612);
																																	}
																																}
																																{

																																	goto
																																		BgL_zc3z04anonymousza31419ze3z87_497;
																																}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														obj_t
																															BgL_carzd21080zd2_1126;
																														BgL_carzd21080zd2_1126
																															=
																															CAR(CDR(CDR
																																(BgL_lz00_496)));
																														if ((CAR(((obj_t)
																																		BgL_carzd21080zd2_1126))
																																==
																																BINT(((long)
																																		88))))
																															{	/* Jas/peep.scm 222 */
																																if (NULLP(CDR(
																																			((obj_t)
																																				BgL_carzd21080zd2_1126))))
																																	{	/* Jas/peep.scm 222 */
																																		{	/* Jas/peep.scm 211 */
																																			obj_t
																																				BgL_arg2361z00_2627;
																																			{	/* Jas/peep.scm 211 */
																																				obj_t
																																					BgL_pairz00_2633;
																																				{	/* Jas/peep.scm 211 */
																																					obj_t
																																						BgL_pairz00_2632;
																																					BgL_pairz00_2632
																																						=
																																						CDR(
																																						((obj_t) BgL_lz00_496));
																																					BgL_pairz00_2633
																																						=
																																						CDR
																																						(BgL_pairz00_2632);
																																				}
																																				BgL_arg2361z00_2627
																																					=
																																					CDR
																																					(BgL_pairz00_2633);
																																			}
																																			{	/* Jas/peep.scm 211 */
																																				obj_t
																																					BgL_tmpz00_4268;
																																				BgL_tmpz00_4268
																																					=
																																					(
																																					(obj_t)
																																					BgL_lz00_496);
																																				SET_CDR
																																					(BgL_tmpz00_4268,
																																					BgL_arg2361z00_2627);
																																			}
																																		}
																																		{

																																			goto
																																				BgL_zc3z04anonymousza31419ze3z87_497;
																																		}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												goto
																													BgL_tagzd2109zd2_514;
																											}
																									}
																								else
																									{	/* Jas/peep.scm 222 */
																										goto BgL_tagzd2109zd2_514;
																									}
																							}
																						else
																							{	/* Jas/peep.scm 222 */
																								obj_t BgL_carzd21090zd2_1137;

																								BgL_carzd21090zd2_1137 =
																									CAR(BgL_lz00_496);
																								if (PAIRP
																									(BgL_carzd21090zd2_1137))
																									{	/* Jas/peep.scm 222 */
																										if (
																											(CAR
																												(BgL_carzd21090zd2_1137)
																												== BINT(((long) 9))))
																											{	/* Jas/peep.scm 222 */
																												if (NULLP(CDR
																														(BgL_carzd21090zd2_1137)))
																													{	/* Jas/peep.scm 222 */
																														obj_t
																															BgL_carzd21094zd2_1143;
																														BgL_carzd21094zd2_1143
																															=
																															CAR(CDR
																															(BgL_lz00_496));
																														if ((CAR(((obj_t)
																																		BgL_carzd21094zd2_1143))
																																==
																																BINT(((long)
																																		136))))
																															{	/* Jas/peep.scm 222 */
																																if (NULLP(CDR(
																																			((obj_t)
																																				BgL_carzd21094zd2_1143))))
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2107zd2_512;
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2109zd2_514;
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												if (
																													(CAR(
																															((obj_t)
																																BgL_carzd21090zd2_1137))
																														==
																														BINT(((long) 10))))
																													{	/* Jas/peep.scm 222 */
																														if (NULLP(CDR(
																																	((obj_t)
																																		BgL_carzd21090zd2_1137))))
																															{	/* Jas/peep.scm 222 */
																																obj_t
																																	BgL_carzd21102zd2_1157;
																																BgL_carzd21102zd2_1157
																																	=
																																	CAR(CDR
																																	(BgL_lz00_496));
																																if ((CAR((
																																				(obj_t)
																																				BgL_carzd21102zd2_1157))
																																		==
																																		BINT(((long)
																																				136))))
																																	{	/* Jas/peep.scm 222 */
																																		if (NULLP
																																			(CDR(((obj_t) BgL_carzd21102zd2_1157))))
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2108zd2_513;
																																			}
																																		else
																																			{	/* Jas/peep.scm 222 */
																																				goto
																																					BgL_tagzd2109zd2_514;
																																			}
																																	}
																																else
																																	{	/* Jas/peep.scm 222 */
																																		goto
																																			BgL_tagzd2109zd2_514;
																																	}
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2109zd2_514;
																													}
																											}
																									}
																								else
																									{	/* Jas/peep.scm 222 */
																										goto BgL_tagzd2109zd2_514;
																									}
																							}
																					}
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd2109zd2_514;
																		}
																}
															else
																{	/* Jas/peep.scm 222 */
																	goto BgL_tagzd2109zd2_514;
																}
														}
												}
										}
									else
										{	/* Jas/peep.scm 222 */
											if (PAIRP(BgL_cdrzd2123zd2_519))
												{	/* Jas/peep.scm 222 */
													obj_t BgL_carzd21133zd2_1191;
													obj_t BgL_cdrzd21134zd2_1192;

													BgL_carzd21133zd2_1191 = CAR(BgL_cdrzd2123zd2_519);
													BgL_cdrzd21134zd2_1192 = CDR(BgL_cdrzd2123zd2_519);
													if (PAIRP(BgL_carzd21133zd2_1191))
														{	/* Jas/peep.scm 222 */
															if (
																(CAR(BgL_carzd21133zd2_1191) ==
																	BINT(((long) 4))))
																{	/* Jas/peep.scm 222 */
																	if (NULLP(CDR(BgL_carzd21133zd2_1191)))
																		{	/* Jas/peep.scm 222 */
																			if (PAIRP(BgL_cdrzd21134zd2_1192))
																				{	/* Jas/peep.scm 222 */
																					obj_t BgL_carzd21138zd2_1199;

																					BgL_carzd21138zd2_1199 =
																						CAR(BgL_cdrzd21134zd2_1192);
																					if (PAIRP(BgL_carzd21138zd2_1199))
																						{	/* Jas/peep.scm 222 */
																							obj_t BgL_cdrzd21142zd2_1201;

																							BgL_cdrzd21142zd2_1201 =
																								CDR(BgL_carzd21138zd2_1199);
																							if (
																								(CAR(BgL_carzd21138zd2_1199) ==
																									BINT(((long) 153))))
																								{	/* Jas/peep.scm 222 */
																									if (PAIRP
																										(BgL_cdrzd21142zd2_1201))
																										{	/* Jas/peep.scm 222 */
																											if (NULLP(CDR
																													(BgL_cdrzd21142zd2_1201)))
																												{	/* Jas/peep.scm 222 */
																													{	/* Jas/peep.scm 205 */
																														obj_t
																															BgL_arg2359z00_2682;
																														{	/* Jas/peep.scm 205 */
																															obj_t
																																BgL_pairz00_2688;
																															{	/* Jas/peep.scm 205 */
																																obj_t
																																	BgL_pairz00_2687;
																																BgL_pairz00_2687
																																	=
																																	CDR(((obj_t)
																																		BgL_lz00_496));
																																BgL_pairz00_2688
																																	=
																																	CDR
																																	(BgL_pairz00_2687);
																															}
																															BgL_arg2359z00_2682
																																=
																																CDR
																																(BgL_pairz00_2688);
																														}
																														{	/* Jas/peep.scm 205 */
																															obj_t
																																BgL_tmpz00_4344;
																															BgL_tmpz00_4344 =
																																((obj_t)
																																BgL_lz00_496);
																															SET_CDR
																																(BgL_tmpz00_4344,
																																BgL_arg2359z00_2682);
																														}
																													}
																													{

																														goto
																															BgL_zc3z04anonymousza31419ze3z87_497;
																													}
																												}
																											else
																												{	/* Jas/peep.scm 222 */
																													goto
																														BgL_tagzd2109zd2_514;
																												}
																										}
																									else
																										{	/* Jas/peep.scm 222 */
																											goto BgL_tagzd2109zd2_514;
																										}
																								}
																							else
																								{	/* Jas/peep.scm 222 */
																									goto BgL_tagzd2109zd2_514;
																								}
																						}
																					else
																						{	/* Jas/peep.scm 222 */
																							goto BgL_tagzd2109zd2_514;
																						}
																				}
																			else
																				{	/* Jas/peep.scm 222 */
																					goto BgL_tagzd2109zd2_514;
																				}
																		}
																	else
																		{	/* Jas/peep.scm 222 */
																			goto BgL_tagzd2109zd2_514;
																		}
																}
															else
																{	/* Jas/peep.scm 222 */
																	obj_t BgL_cdrzd21191zd2_1213;

																	BgL_cdrzd21191zd2_1213 =
																		CDR(((obj_t) BgL_cdrzd2123zd2_519));
																	{	/* Jas/peep.scm 222 */
																		bool_t BgL_test3082z00_4349;

																		{	/* Jas/peep.scm 222 */
																			obj_t BgL_tmpz00_4350;

																			{	/* Jas/peep.scm 222 */
																				obj_t BgL_pairz00_2693;

																				BgL_pairz00_2693 =
																					CAR(((obj_t) BgL_cdrzd2123zd2_519));
																				BgL_tmpz00_4350 = CAR(BgL_pairz00_2693);
																			}
																			BgL_test3082z00_4349 =
																				(BgL_tmpz00_4350 == BINT(((long) 178)));
																		}
																		if (BgL_test3082z00_4349)
																			{	/* Jas/peep.scm 222 */
																				if (PAIRP(BgL_cdrzd21191zd2_1213))
																					{	/* Jas/peep.scm 222 */
																						obj_t BgL_carzd21194zd2_1218;

																						BgL_carzd21194zd2_1218 =
																							CAR(BgL_cdrzd21191zd2_1213);
																						if (PAIRP(BgL_carzd21194zd2_1218))
																							{	/* Jas/peep.scm 222 */
																								if (
																									(CAR(BgL_carzd21194zd2_1218)
																										== BINT(((long) 87))))
																									{	/* Jas/peep.scm 222 */
																										if (NULLP(CDR
																												(BgL_carzd21194zd2_1218)))
																											{	/* Jas/peep.scm 222 */
																												{	/* Jas/peep.scm 208 */
																													obj_t
																														BgL_arg2360z00_2701;
																													{	/* Jas/peep.scm 208 */
																														obj_t
																															BgL_pairz00_2707;
																														{	/* Jas/peep.scm 208 */
																															obj_t
																																BgL_pairz00_2706;
																															BgL_pairz00_2706 =
																																CDR(((obj_t)
																																	BgL_lz00_496));
																															BgL_pairz00_2707 =
																																CDR
																																(BgL_pairz00_2706);
																														}
																														BgL_arg2360z00_2701
																															=
																															CDR
																															(BgL_pairz00_2707);
																													}
																													{	/* Jas/peep.scm 208 */
																														obj_t
																															BgL_tmpz00_4372;
																														BgL_tmpz00_4372 =
																															((obj_t)
																															BgL_lz00_496);
																														SET_CDR
																															(BgL_tmpz00_4372,
																															BgL_arg2360z00_2701);
																													}
																												}
																												{

																													goto
																														BgL_zc3z04anonymousza31419ze3z87_497;
																												}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												goto
																													BgL_tagzd2109zd2_514;
																											}
																									}
																								else
																									{	/* Jas/peep.scm 222 */
																										obj_t
																											BgL_carzd21212zd2_1226;
																										BgL_carzd21212zd2_1226 =
																											CAR(((obj_t)
																												BgL_cdrzd21191zd2_1213));
																										if ((CAR(((obj_t)
																														BgL_carzd21212zd2_1226))
																												== BINT(((long) 88))))
																											{	/* Jas/peep.scm 222 */
																												if (NULLP(CDR(
																															((obj_t)
																																BgL_carzd21212zd2_1226))))
																													{	/* Jas/peep.scm 222 */
																														{	/* Jas/peep.scm 211 */
																															obj_t
																																BgL_arg2361z00_2716;
																															{	/* Jas/peep.scm 211 */
																																obj_t
																																	BgL_pairz00_2722;
																																{	/* Jas/peep.scm 211 */
																																	obj_t
																																		BgL_pairz00_2721;
																																	BgL_pairz00_2721
																																		=
																																		CDR(((obj_t)
																																			BgL_lz00_496));
																																	BgL_pairz00_2722
																																		=
																																		CDR
																																		(BgL_pairz00_2721);
																																}
																																BgL_arg2361z00_2716
																																	=
																																	CDR
																																	(BgL_pairz00_2722);
																															}
																															{	/* Jas/peep.scm 211 */
																																obj_t
																																	BgL_tmpz00_4390;
																																BgL_tmpz00_4390
																																	=
																																	((obj_t)
																																	BgL_lz00_496);
																																SET_CDR
																																	(BgL_tmpz00_4390,
																																	BgL_arg2361z00_2716);
																															}
																														}
																														{

																															goto
																																BgL_zc3z04anonymousza31419ze3z87_497;
																														}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2109zd2_514;
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												goto
																													BgL_tagzd2109zd2_514;
																											}
																									}
																							}
																						else
																							{	/* Jas/peep.scm 222 */
																								goto BgL_tagzd2109zd2_514;
																							}
																					}
																				else
																					{	/* Jas/peep.scm 222 */
																						goto BgL_tagzd2109zd2_514;
																					}
																			}
																		else
																			{	/* Jas/peep.scm 222 */
																				obj_t BgL_carzd21225zd2_1237;

																				BgL_carzd21225zd2_1237 =
																					CAR(BgL_lz00_496);
																				if (PAIRP(BgL_carzd21225zd2_1237))
																					{	/* Jas/peep.scm 222 */
																						if (
																							(CAR(BgL_carzd21225zd2_1237) ==
																								BINT(((long) 9))))
																							{	/* Jas/peep.scm 222 */
																								if (NULLP(CDR
																										(BgL_carzd21225zd2_1237)))
																									{	/* Jas/peep.scm 222 */
																										obj_t
																											BgL_carzd21229zd2_1243;
																										BgL_carzd21229zd2_1243 =
																											CAR(((obj_t)
																												BgL_cdrzd2123zd2_519));
																										if ((CAR(((obj_t)
																														BgL_carzd21229zd2_1243))
																												== BINT(((long) 136))))
																											{	/* Jas/peep.scm 222 */
																												if (NULLP(CDR(
																															((obj_t)
																																BgL_carzd21229zd2_1243))))
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2107zd2_512;
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2109zd2_514;
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												goto
																													BgL_tagzd2109zd2_514;
																											}
																									}
																								else
																									{	/* Jas/peep.scm 222 */
																										goto BgL_tagzd2109zd2_514;
																									}
																							}
																						else
																							{	/* Jas/peep.scm 222 */
																								if (
																									(CAR(
																											((obj_t)
																												BgL_carzd21225zd2_1237))
																										== BINT(((long) 10))))
																									{	/* Jas/peep.scm 222 */
																										if (NULLP(CDR(
																													((obj_t)
																														BgL_carzd21225zd2_1237))))
																											{	/* Jas/peep.scm 222 */
																												obj_t
																													BgL_carzd21237zd2_1257;
																												BgL_carzd21237zd2_1257 =
																													CAR(CDR
																													(BgL_lz00_496));
																												if ((CAR(((obj_t)
																																BgL_carzd21237zd2_1257))
																														==
																														BINT(((long) 136))))
																													{	/* Jas/peep.scm 222 */
																														if (NULLP(CDR(
																																	((obj_t)
																																		BgL_carzd21237zd2_1257))))
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2108zd2_513;
																															}
																														else
																															{	/* Jas/peep.scm 222 */
																																goto
																																	BgL_tagzd2109zd2_514;
																															}
																													}
																												else
																													{	/* Jas/peep.scm 222 */
																														goto
																															BgL_tagzd2109zd2_514;
																													}
																											}
																										else
																											{	/* Jas/peep.scm 222 */
																												goto
																													BgL_tagzd2109zd2_514;
																											}
																									}
																								else
																									{	/* Jas/peep.scm 222 */
																										goto BgL_tagzd2109zd2_514;
																									}
																							}
																					}
																				else
																					{	/* Jas/peep.scm 222 */
																						goto BgL_tagzd2109zd2_514;
																					}
																			}
																	}
																}
														}
													else
														{	/* Jas/peep.scm 222 */
															goto BgL_tagzd2109zd2_514;
														}
												}
											else
												{	/* Jas/peep.scm 222 */
													goto BgL_tagzd2109zd2_514;
												}
										}
								}
							else
								{	/* Jas/peep.scm 222 */
									goto BgL_tagzd2109zd2_514;
								}
						}
				}
			}
		}

	}



/* removebranch */
	obj_t BGl_removebranchz00zzjas_peepz00(obj_t BgL_codez00_23)
	{
		{	/* Jas/peep.scm 228 */
			{	/* Jas/peep.scm 229 */
				struct bgl_cell BgL_box3098_2945z00;
				obj_t BgL_donez00_2945;

				BgL_donez00_2945 = MAKE_CELL_STACK(BNIL, BgL_box3098_2945z00);
				return
					BGl_walkze70ze7zzjas_peepz00(BgL_codez00_23, BgL_donez00_2945,
					CNST_TABLE_REF(((long) 7)), BgL_codez00_23);
		}}

	}



/* <@anonymous:2409>~0 */
	obj_t BGl_zc3z04anonymousza32409ze3ze70z60zzjas_peepz00(obj_t
		BgL_head1208z00_2937, obj_t BgL_l1206z00_1369, obj_t BgL_tail1209z00_1370)
	{
		{	/* Jas/peep.scm 253 */
		BGl_zc3z04anonymousza32409ze3ze70z60zzjas_peepz00:
			if (NULLP(BgL_l1206z00_1369))
				{	/* Jas/peep.scm 253 */
					return CDR(BgL_head1208z00_2937);
				}
			else
				{	/* Jas/peep.scm 253 */
					obj_t BgL_newtail1210z00_1373;

					{	/* Jas/peep.scm 253 */
						obj_t BgL_arg2412z00_1375;

						{	/* Jas/peep.scm 253 */
							obj_t BgL_xz00_1376;

							BgL_xz00_1376 = CAR(((obj_t) BgL_l1206z00_1369));
							BgL_arg2412z00_1375 =
								BGl_appendzd221011zd2zzjas_peepz00(BgL_xz00_1376, BNIL);
						}
						{	/* Jas/peep.scm 253 */
							obj_t BgL_res2799z00_2790;

							BgL_res2799z00_2790 = MAKE_YOUNG_PAIR(BgL_arg2412z00_1375, BNIL);
							BgL_newtail1210z00_1373 = BgL_res2799z00_2790;
						}
					}
					SET_CDR(BgL_tail1209z00_1370, BgL_newtail1210z00_1373);
					{	/* Jas/peep.scm 253 */
						obj_t BgL_arg2411z00_1374;

						BgL_arg2411z00_1374 = CDR(((obj_t) BgL_l1206z00_1369));
						{
							obj_t BgL_tail1209z00_4447;
							obj_t BgL_l1206z00_4446;

							BgL_l1206z00_4446 = BgL_arg2411z00_1374;
							BgL_tail1209z00_4447 = BgL_newtail1210z00_1373;
							BgL_tail1209z00_1370 = BgL_tail1209z00_4447;
							BgL_l1206z00_1369 = BgL_l1206z00_4446;
							goto BGl_zc3z04anonymousza32409ze3ze70z60zzjas_peepz00;
						}
					}
				}
		}

	}



/* collect~0 */
	obj_t BGl_collectze70ze7zzjas_peepz00(obj_t BgL_lz00_1316,
		obj_t BgL_fromz00_1317, obj_t BgL_rz00_1318, long BgL_nz00_1319)
	{
		{	/* Jas/peep.scm 235 */
		BGl_collectze70ze7zzjas_peepz00:
			{	/* Jas/peep.scm 231 */
				bool_t BgL_test3100z00_4448;

				if (NULLP(BgL_lz00_1316))
					{	/* Jas/peep.scm 231 */
						BgL_test3100z00_4448 = ((bool_t) 1);
					}
				else
					{	/* Jas/peep.scm 231 */
						if ((BgL_nz00_1319 > ((long) 5)))
							{	/* Jas/peep.scm 231 */
								BgL_test3100z00_4448 = ((bool_t) 1);
							}
						else
							{	/* Jas/peep.scm 231 */
								BgL_test3100z00_4448 =
									(CAR(((obj_t) BgL_lz00_1316)) == BgL_fromz00_1317);
							}
					}
				if (BgL_test3100z00_4448)
					{	/* Jas/peep.scm 231 */
						return BFALSE;
					}
				else
					{	/* Jas/peep.scm 232 */
						bool_t BgL_test3103z00_4456;

						{	/* Jas/peep.scm 232 */
							obj_t BgL_tmpz00_4457;

							BgL_tmpz00_4457 = CAR(((obj_t) BgL_lz00_1316));
							BgL_test3103z00_4456 = SYMBOLP(BgL_tmpz00_4457);
						}
						if (BgL_test3103z00_4456)
							{	/* Jas/peep.scm 232 */
								obj_t BgL_arg2374z00_1327;

								BgL_arg2374z00_1327 = CDR(((obj_t) BgL_lz00_1316));
								{
									obj_t BgL_lz00_4463;

									BgL_lz00_4463 = BgL_arg2374z00_1327;
									BgL_lz00_1316 = BgL_lz00_4463;
									goto BGl_collectze70ze7zzjas_peepz00;
								}
							}
						else
							{	/* Jas/peep.scm 232 */
								if (BGl_hugezf3zf3zzjas_peepz00(CAR(((obj_t) BgL_lz00_1316))))
									{	/* Jas/peep.scm 233 */
										return BFALSE;
									}
								else
									{	/* Jas/peep.scm 233 */
										if (CBOOL(BGl_nocontzf3zf3zzjas_peepz00(CAR(
														((obj_t) BgL_lz00_1316)))))
											{	/* Jas/peep.scm 234 */
												obj_t BgL_arg2381z00_1332;

												{	/* Jas/peep.scm 234 */
													obj_t BgL_arg2382z00_1333;

													BgL_arg2382z00_1333 = CAR(((obj_t) BgL_lz00_1316));
													BgL_arg2381z00_1332 =
														MAKE_YOUNG_PAIR(BgL_arg2382z00_1333, BgL_rz00_1318);
												}
												return bgl_reverse_bang(BgL_arg2381z00_1332);
											}
										else
											{	/* Jas/peep.scm 235 */
												obj_t BgL_arg2383z00_1334;
												obj_t BgL_arg2384z00_1335;
												long BgL_arg2385z00_1336;

												BgL_arg2383z00_1334 = CDR(((obj_t) BgL_lz00_1316));
												{	/* Jas/peep.scm 235 */
													obj_t BgL_arg2388z00_1337;

													BgL_arg2388z00_1337 = CAR(((obj_t) BgL_lz00_1316));
													BgL_arg2384z00_1335 =
														MAKE_YOUNG_PAIR(BgL_arg2388z00_1337, BgL_rz00_1318);
												}
												BgL_arg2385z00_1336 = (BgL_nz00_1319 + ((long) 1));
												{
													long BgL_nz00_4485;
													obj_t BgL_rz00_4484;
													obj_t BgL_lz00_4483;

													BgL_lz00_4483 = BgL_arg2383z00_1334;
													BgL_rz00_4484 = BgL_arg2384z00_1335;
													BgL_nz00_4485 = BgL_arg2385z00_1336;
													BgL_nz00_1319 = BgL_nz00_4485;
													BgL_rz00_1318 = BgL_rz00_4484;
													BgL_lz00_1316 = BgL_lz00_4483;
													goto BGl_collectze70ze7zzjas_peepz00;
												}
											}
									}
							}
					}
			}
		}

	}



/* walk~0 */
	obj_t BGl_walkze70ze7zzjas_peepz00(obj_t BgL_codez00_2939,
		obj_t BgL_donez00_2938, obj_t BgL_fromz00_1352, obj_t BgL_lz00_1353)
	{
		{	/* Jas/peep.scm 258 */
		BGl_walkze70ze7zzjas_peepz00:
			if (NULLP(BgL_lz00_1353))
				{	/* Jas/peep.scm 244 */
					return CNST_TABLE_REF(((long) 8));
				}
			else
				{	/* Jas/peep.scm 245 */
					bool_t BgL_test3107z00_4489;

					{	/* Jas/peep.scm 245 */
						obj_t BgL_tmpz00_4490;

						BgL_tmpz00_4490 = CAR(((obj_t) BgL_lz00_1353));
						BgL_test3107z00_4489 = SYMBOLP(BgL_tmpz00_4490);
					}
					if (BgL_test3107z00_4489)
						{	/* Jas/peep.scm 246 */
							obj_t BgL_arg2404z00_1358;
							obj_t BgL_arg2405z00_1359;

							BgL_arg2404z00_1358 = CAR(((obj_t) BgL_lz00_1353));
							BgL_arg2405z00_1359 = CDR(((obj_t) BgL_lz00_1353));
							return
								BGl_walkzd2fromze70z35zzjas_peepz00(BgL_donez00_2938,
								BgL_codez00_2939, BgL_arg2404z00_1358, BgL_arg2405z00_1359);
						}
					else
						{	/* Jas/peep.scm 247 */
							bool_t BgL_test3108z00_4499;

							{	/* Jas/peep.scm 39 */
								long BgL_tmpz00_4500;

								{	/* Jas/peep.scm 38 */
									obj_t BgL_pairz00_2775;

									BgL_pairz00_2775 = CAR(((obj_t) BgL_lz00_1353));
									BgL_tmpz00_4500 = (long) CINT(CAR(BgL_pairz00_2775));
								}
								BgL_test3108z00_4499 = (BgL_tmpz00_4500 == ((long) 167));
							}
							if (BgL_test3108z00_4499)
								{	/* Jas/peep.scm 248 */
									obj_t BgL_labz00_1362;
									obj_t BgL_nextz00_1363;

									{	/* Jas/peep.scm 248 */
										obj_t BgL_pairz00_2783;

										{	/* Jas/peep.scm 248 */
											obj_t BgL_pairz00_2782;

											BgL_pairz00_2782 = CAR(((obj_t) BgL_lz00_1353));
											BgL_pairz00_2783 = CDR(BgL_pairz00_2782);
										}
										BgL_labz00_1362 = CAR(BgL_pairz00_2783);
									}
									BgL_nextz00_1363 = CDR(((obj_t) BgL_lz00_1353));
									BGl_walkzd2atzd2labze70ze7zzjas_peepz00(BgL_codez00_2939,
										BgL_donez00_2938, BgL_labz00_1362);
									{	/* Jas/peep.scm 251 */
										obj_t BgL_dupz00_1364;

										BgL_dupz00_1364 =
											BGl_collectze70ze7zzjas_peepz00
											(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_labz00_1362,
												BgL_codez00_2939), BgL_fromz00_1352, BNIL, ((long) 0));
										if (CBOOL(BgL_dupz00_1364))
											{	/* Jas/peep.scm 252 */
												{	/* Jas/peep.scm 253 */
													obj_t BgL_l1206z00_1365;

													BgL_l1206z00_1365 = BgL_dupz00_1364;
													if (NULLP(BgL_l1206z00_1365))
														{	/* Jas/peep.scm 253 */
															BgL_dupz00_1364 = BNIL;
														}
													else
														{	/* Jas/peep.scm 253 */
															obj_t BgL_head1208z00_1367;

															{	/* Jas/peep.scm 253 */
																obj_t BgL_res2797z00_2786;

																BgL_res2797z00_2786 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																BgL_head1208z00_1367 = BgL_res2797z00_2786;
															}
															BgL_dupz00_1364 =
																BGl_zc3z04anonymousza32409ze3ze70z60zzjas_peepz00
																(BgL_head1208z00_1367, BgL_l1206z00_1365,
																BgL_head1208z00_1367);
														}
												}
												{	/* Jas/peep.scm 255 */
													obj_t BgL_arg2413z00_1378;

													BgL_arg2413z00_1378 = CAR(BgL_dupz00_1364);
													{	/* Jas/peep.scm 255 */
														obj_t BgL_tmpz00_4522;

														BgL_tmpz00_4522 = ((obj_t) BgL_lz00_1353);
														SET_CAR(BgL_tmpz00_4522, BgL_arg2413z00_1378);
													}
												}
												{	/* Jas/peep.scm 256 */
													obj_t BgL_arg2414z00_1379;

													BgL_arg2414z00_1379 =
														BGl_appendzd221011zd2zzjas_peepz00(CDR
														(BgL_dupz00_1364), BgL_nextz00_1363);
													{	/* Jas/peep.scm 256 */
														obj_t BgL_tmpz00_4527;

														BgL_tmpz00_4527 = ((obj_t) BgL_lz00_1353);
														SET_CDR(BgL_tmpz00_4527, BgL_arg2414z00_1379);
													}
												}
											}
										else
											{	/* Jas/peep.scm 252 */
												BFALSE;
											}
										{
											obj_t BgL_lz00_4530;

											BgL_lz00_4530 = BgL_nextz00_1363;
											BgL_lz00_1353 = BgL_lz00_4530;
											goto BGl_walkze70ze7zzjas_peepz00;
										}
									}
								}
							else
								{	/* Jas/peep.scm 258 */
									obj_t BgL_arg2418z00_1382;

									BgL_arg2418z00_1382 = CDR(((obj_t) BgL_lz00_1353));
									{
										obj_t BgL_lz00_4533;

										BgL_lz00_4533 = BgL_arg2418z00_1382;
										BgL_lz00_1353 = BgL_lz00_4533;
										goto BGl_walkze70ze7zzjas_peepz00;
									}
								}
						}
				}
		}

	}



/* walk-from~0 */
	obj_t BGl_walkzd2fromze70z35zzjas_peepz00(obj_t BgL_donez00_2941,
		obj_t BgL_codez00_2940, obj_t BgL_fromz00_1348, obj_t BgL_lz00_1349)
	{
		{	/* Jas/peep.scm 242 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_fromz00_1348,
						CELL_REF(BgL_donez00_2941))))
				{	/* Jas/peep.scm 239 */
					return CNST_TABLE_REF(((long) 8));
				}
			else
				{	/* Jas/peep.scm 239 */
					{	/* Jas/peep.scm 241 */
						obj_t BgL_auxz00_2942;

						BgL_auxz00_2942 =
							MAKE_YOUNG_PAIR(BgL_fromz00_1348, CELL_REF(BgL_donez00_2941));
						CELL_SET(BgL_donez00_2941, BgL_auxz00_2942);
					}
					return
						BGl_walkze70ze7zzjas_peepz00(BgL_codez00_2940, BgL_donez00_2941,
						BgL_fromz00_1348, BgL_lz00_1349);
				}
		}

	}



/* walk-at-lab~0 */
	obj_t BGl_walkzd2atzd2labze70ze7zzjas_peepz00(obj_t BgL_codez00_2944,
		obj_t BgL_donez00_2943, obj_t BgL_labz00_1344)
	{
		{	/* Jas/peep.scm 237 */
			{	/* Jas/peep.scm 237 */
				obj_t BgL_arg2395z00_1346;

				BgL_arg2395z00_1346 =
					CDR(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_labz00_1344,
						BgL_codez00_2944));
				return BGl_walkzd2fromze70z35zzjas_peepz00(BgL_donez00_2943,
					BgL_codez00_2944, BgL_labz00_1344, BgL_arg2395z00_1346);
			}
		}

	}



/* removesequence */
	obj_t BGl_removesequencez00zzjas_peepz00(obj_t BgL_codez00_24)
	{
		{	/* Jas/peep.scm 264 */
			{
				obj_t BgL_codez00_1450;

				{	/* Jas/peep.scm 294 */
					obj_t BgL_envz00_1392;

					BgL_codez00_1450 = BgL_codez00_24;
					{
						obj_t BgL_codez00_1454;
						obj_t BgL_accz00_1455;

						BgL_codez00_1454 = BgL_codez00_1450;
						BgL_accz00_1455 = BNIL;
					BgL_zc3z04anonymousza32475ze3z87_1456:
						if (NULLP(BgL_codez00_1454))
							{	/* Jas/peep.scm 268 */
								BgL_envz00_1392 = BgL_accz00_1455;
							}
						else
							{	/* Jas/peep.scm 269 */
								bool_t BgL_test3113z00_4545;

								{	/* Jas/peep.scm 269 */
									obj_t BgL_tmpz00_4546;

									BgL_tmpz00_4546 = CAR(((obj_t) BgL_codez00_1454));
									BgL_test3113z00_4545 = SYMBOLP(BgL_tmpz00_4546);
								}
								if (BgL_test3113z00_4545)
									{	/* Jas/peep.scm 270 */
										obj_t BgL_arg2479z00_1460;
										obj_t BgL_arg2481z00_1461;

										BgL_arg2479z00_1460 = CDR(((obj_t) BgL_codez00_1454));
										{	/* Jas/peep.scm 270 */
											obj_t BgL_arg2482z00_1462;

											{	/* Jas/peep.scm 270 */
												obj_t BgL_arg2483z00_1463;

												BgL_arg2483z00_1463 = CAR(((obj_t) BgL_codez00_1454));
												BgL_arg2482z00_1462 =
													MAKE_YOUNG_PAIR(BgL_arg2483z00_1463,
													BINT(((long) 0)));
											}
											BgL_arg2481z00_1461 =
												MAKE_YOUNG_PAIR(BgL_arg2482z00_1462, BgL_accz00_1455);
										}
										{
											obj_t BgL_accz00_4558;
											obj_t BgL_codez00_4557;

											BgL_codez00_4557 = BgL_arg2479z00_1460;
											BgL_accz00_4558 = BgL_arg2481z00_1461;
											BgL_accz00_1455 = BgL_accz00_4558;
											BgL_codez00_1454 = BgL_codez00_4557;
											goto BgL_zc3z04anonymousza32475ze3z87_1456;
										}
									}
								else
									{	/* Jas/peep.scm 272 */
										obj_t BgL_arg2484z00_1464;

										BgL_arg2484z00_1464 = CDR(((obj_t) BgL_codez00_1454));
										{
											obj_t BgL_codez00_4561;

											BgL_codez00_4561 = BgL_arg2484z00_1464;
											BgL_codez00_1454 = BgL_codez00_4561;
											goto BgL_zc3z04anonymousza32475ze3z87_1456;
										}
									}
							}
					}
					{
						obj_t BgL_prevz00_1403;
						obj_t BgL_codez00_1404;
						obj_t BgL_prevz00_1420;
						obj_t BgL_codez00_1421;

						{
							obj_t BgL_l1215z00_1396;

							BgL_l1215z00_1396 = BgL_codez00_24;
						BgL_zc3z04anonymousza32421ze3z87_1397:
							if (PAIRP(BgL_l1215z00_1396))
								{	/* Jas/peep.scm 313 */
									BGl_countzd2insze70z35zzjas_peepz00(CAR(BgL_l1215z00_1396),
										BgL_envz00_1392);
									{
										obj_t BgL_l1215z00_4566;

										BgL_l1215z00_4566 = CDR(BgL_l1215z00_1396);
										BgL_l1215z00_1396 = BgL_l1215z00_4566;
										goto BgL_zc3z04anonymousza32421ze3z87_1397;
									}
								}
							else
								{	/* Jas/peep.scm 313 */
									((bool_t) 1);
								}
						}
						{	/* Jas/peep.scm 314 */
							obj_t BgL_arg2425z00_1402;

							BgL_arg2425z00_1402 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BgL_codez00_24);
							BgL_prevz00_1420 = BgL_arg2425z00_1402;
							BgL_codez00_1421 = BgL_codez00_24;
						BgL_zc3z04anonymousza32445ze3z87_1422:
							if (NULLP(BgL_codez00_1421))
								{	/* Jas/peep.scm 305 */
									return CNST_TABLE_REF(((long) 2));
								}
							else
								{	/* Jas/peep.scm 306 */
									bool_t BgL_test3116z00_4573;

									{	/* Jas/peep.scm 306 */
										bool_t BgL_test3117z00_4574;

										{	/* Jas/peep.scm 306 */
											obj_t BgL_tmpz00_4575;

											BgL_tmpz00_4575 = CAR(((obj_t) BgL_codez00_1421));
											BgL_test3117z00_4574 = SYMBOLP(BgL_tmpz00_4575);
										}
										if (BgL_test3117z00_4574)
											{	/* Jas/peep.scm 307 */
												obj_t BgL_auxz00_4579;

												{	/* Jas/peep.scm 307 */
													obj_t BgL_pairz00_2919;

													BgL_pairz00_2919 =
														BGl_assqz00zz__r4_pairs_and_lists_6_3z00(CAR(
															((obj_t) BgL_codez00_1421)), BgL_envz00_1392);
													BgL_auxz00_4579 = CDR(BgL_pairz00_2919);
												}
												BgL_test3116z00_4573 =
													BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(((long) 0)),
													BgL_auxz00_4579);
											}
										else
											{	/* Jas/peep.scm 306 */
												BgL_test3116z00_4573 = ((bool_t) 0);
											}
									}
									if (BgL_test3116z00_4573)
										{	/* Jas/peep.scm 306 */
											{	/* Jas/peep.scm 308 */
												obj_t BgL_arg2455z00_1431;

												BgL_arg2455z00_1431 = CDR(((obj_t) BgL_codez00_1421));
												{	/* Jas/peep.scm 308 */
													obj_t BgL_tmpz00_4588;

													BgL_tmpz00_4588 = ((obj_t) BgL_prevz00_1420);
													SET_CDR(BgL_tmpz00_4588, BgL_arg2455z00_1431);
												}
											}
											{	/* Jas/peep.scm 309 */
												obj_t BgL_arg2456z00_1432;

												BgL_arg2456z00_1432 = CDR(((obj_t) BgL_codez00_1421));
												{
													obj_t BgL_codez00_4593;

													BgL_codez00_4593 = BgL_arg2456z00_1432;
													BgL_codez00_1421 = BgL_codez00_4593;
													goto BgL_zc3z04anonymousza32445ze3z87_1422;
												}
											}
										}
									else
										{	/* Jas/peep.scm 310 */
											bool_t BgL_test3118z00_4594;

											{	/* Jas/peep.scm 310 */
												bool_t BgL_test3119z00_4595;

												{	/* Jas/peep.scm 310 */
													obj_t BgL_tmpz00_4596;

													BgL_tmpz00_4596 = CAR(((obj_t) BgL_codez00_1421));
													BgL_test3119z00_4595 = PAIRP(BgL_tmpz00_4596);
												}
												if (BgL_test3119z00_4595)
													{	/* Jas/peep.scm 310 */
														BgL_test3118z00_4594 =
															CBOOL(BGl_nocontzf3zf3zzjas_peepz00(CAR(
																	((obj_t) BgL_codez00_1421))));
													}
												else
													{	/* Jas/peep.scm 310 */
														BgL_test3118z00_4594 = ((bool_t) 0);
													}
											}
											if (BgL_test3118z00_4594)
												{	/* Jas/peep.scm 311 */
													obj_t BgL_arg2463z00_1438;

													BgL_arg2463z00_1438 = CDR(((obj_t) BgL_codez00_1421));
													BgL_prevz00_1403 = BgL_codez00_1421;
													BgL_codez00_1404 = BgL_arg2463z00_1438;
												BgL_zc3z04anonymousza32426ze3z87_1405:
													if (NULLP(BgL_codez00_1404))
														{	/* Jas/peep.scm 297 */
															obj_t BgL_tmpz00_4608;

															BgL_tmpz00_4608 = ((obj_t) BgL_prevz00_1403);
															return SET_CDR(BgL_tmpz00_4608, BNIL);
														}
													else
														{	/* Jas/peep.scm 298 */
															bool_t BgL_test3121z00_4611;

															{	/* Jas/peep.scm 298 */
																obj_t BgL_tmpz00_4612;

																BgL_tmpz00_4612 =
																	CAR(((obj_t) BgL_codez00_1404));
																BgL_test3121z00_4611 = SYMBOLP(BgL_tmpz00_4612);
															}
															if (BgL_test3121z00_4611)
																{	/* Jas/peep.scm 299 */
																	bool_t BgL_test3122z00_4616;

																	{	/* Jas/peep.scm 299 */
																		obj_t BgL_auxz00_4617;

																		{	/* Jas/peep.scm 299 */
																			obj_t BgL_pairz00_2910;

																			BgL_pairz00_2910 =
																				BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(CAR(((obj_t) BgL_codez00_1404)),
																				BgL_envz00_1392);
																			BgL_auxz00_4617 = CDR(BgL_pairz00_2910);
																		}
																		BgL_test3122z00_4616 =
																			BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT((
																					(long) 0)), BgL_auxz00_4617);
																	}
																	if (BgL_test3122z00_4616)
																		{	/* Jas/peep.scm 300 */
																			obj_t BgL_arg2435z00_1413;

																			BgL_arg2435z00_1413 =
																				CDR(((obj_t) BgL_codez00_1404));
																			{
																				obj_t BgL_codez00_4626;

																				BgL_codez00_4626 = BgL_arg2435z00_1413;
																				BgL_codez00_1404 = BgL_codez00_4626;
																				goto
																					BgL_zc3z04anonymousza32426ze3z87_1405;
																			}
																		}
																	else
																		{	/* Jas/peep.scm 299 */
																			{	/* Jas/peep.scm 301 */
																				obj_t BgL_tmpz00_4627;

																				BgL_tmpz00_4627 =
																					((obj_t) BgL_prevz00_1403);
																				SET_CDR(BgL_tmpz00_4627,
																					BgL_codez00_1404);
																			}
																			{	/* Jas/peep.scm 302 */
																				obj_t BgL_arg2437z00_1414;

																				BgL_arg2437z00_1414 =
																					CDR(((obj_t) BgL_codez00_1404));
																				{
																					obj_t BgL_codez00_4633;
																					obj_t BgL_prevz00_4632;

																					BgL_prevz00_4632 = BgL_codez00_1404;
																					BgL_codez00_4633 =
																						BgL_arg2437z00_1414;
																					BgL_codez00_1421 = BgL_codez00_4633;
																					BgL_prevz00_1420 = BgL_prevz00_4632;
																					goto
																						BgL_zc3z04anonymousza32445ze3z87_1422;
																				}
																			}
																		}
																}
															else
																{	/* Jas/peep.scm 303 */
																	obj_t BgL_arg2443z00_1418;

																	BgL_arg2443z00_1418 =
																		CDR(((obj_t) BgL_codez00_1404));
																	{
																		obj_t BgL_codez00_4636;

																		BgL_codez00_4636 = BgL_arg2443z00_1418;
																		BgL_codez00_1404 = BgL_codez00_4636;
																		goto BgL_zc3z04anonymousza32426ze3z87_1405;
																	}
																}
														}
												}
											else
												{	/* Jas/peep.scm 312 */
													obj_t BgL_arg2464z00_1439;

													BgL_arg2464z00_1439 = CDR(((obj_t) BgL_codez00_1421));
													{
														obj_t BgL_codez00_4640;
														obj_t BgL_prevz00_4639;

														BgL_prevz00_4639 = BgL_codez00_1421;
														BgL_codez00_4640 = BgL_arg2464z00_1439;
														BgL_codez00_1421 = BgL_codez00_4640;
														BgL_prevz00_1420 = BgL_prevz00_4639;
														goto BgL_zc3z04anonymousza32445ze3z87_1422;
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



/* count-lab~0 */
	obj_t BGl_countzd2labze70z35zzjas_peepz00(obj_t BgL_labz00_1467,
		obj_t BgL_envz00_1468)
	{
		{	/* Jas/peep.scm 275 */
			{	/* Jas/peep.scm 274 */
				obj_t BgL_slotz00_2804;

				BgL_slotz00_2804 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_labz00_1467,
					BgL_envz00_1468);
				{	/* Jas/peep.scm 275 */
					obj_t BgL_arg2488z00_2805;

					BgL_arg2488z00_2805 =
						BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
						CDR(((obj_t) BgL_slotz00_2804)));
					{	/* Jas/peep.scm 275 */
						obj_t BgL_tmpz00_4646;

						BgL_tmpz00_4646 = ((obj_t) BgL_slotz00_2804);
						return SET_CDR(BgL_tmpz00_4646, BgL_arg2488z00_2805);
					}
				}
			}
		}

	}



/* count-ins~0 */
	obj_t BGl_countzd2insze70z35zzjas_peepz00(obj_t BgL_insz00_1473,
		obj_t BgL_envz00_1474)
	{
		{	/* Jas/peep.scm 293 */
			{	/* Jas/peep.scm 277 */
				bool_t BgL_test3123z00_4649;

				if (PAIRP(BgL_insz00_1473))
					{	/* Jas/peep.scm 277 */
						BgL_test3123z00_4649 =
							CBOOL(BGl_singlezd2labzf3z21zzjas_peepz00(BgL_insz00_1473));
					}
				else
					{	/* Jas/peep.scm 277 */
						BgL_test3123z00_4649 = ((bool_t) 0);
					}
				if (BgL_test3123z00_4649)
					{	/* Jas/peep.scm 278 */
						obj_t BgL_arg2496z00_1478;

						BgL_arg2496z00_1478 = CAR(CDR(BgL_insz00_1473));
						{	/* Jas/peep.scm 274 */
							obj_t BgL_slotz00_2814;

							BgL_slotz00_2814 =
								BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg2496z00_1478,
								BgL_envz00_1474);
							{	/* Jas/peep.scm 275 */
								obj_t BgL_arg2488z00_2815;

								BgL_arg2488z00_2815 =
									BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
									CDR(((obj_t) BgL_slotz00_2814)));
								{	/* Jas/peep.scm 275 */
									obj_t BgL_tmpz00_4661;

									BgL_tmpz00_4661 = ((obj_t) BgL_slotz00_2814);
									return SET_CDR(BgL_tmpz00_4661, BgL_arg2488z00_2815);
								}
							}
						}
					}
				else
					{
						obj_t BgL_defz00_1479;
						obj_t BgL_labsz00_1480;
						obj_t BgL_defz00_1482;
						obj_t BgL_tablez00_1483;

						if (PAIRP(BgL_insz00_1473))
							{	/* Jas/peep.scm 279 */
								obj_t BgL_cdrzd21286zd2_1494;

								BgL_cdrzd21286zd2_1494 = CDR(BgL_insz00_1473);
								if ((CAR(BgL_insz00_1473) == BINT(((long) 170))))
									{	/* Jas/peep.scm 279 */
										if (PAIRP(BgL_cdrzd21286zd2_1494))
											{	/* Jas/peep.scm 279 */
												obj_t BgL_cdrzd21290zd2_1498;

												BgL_cdrzd21290zd2_1498 = CDR(BgL_cdrzd21286zd2_1494);
												if (PAIRP(BgL_cdrzd21290zd2_1498))
													{	/* Jas/peep.scm 279 */
														obj_t BgL_arg2503z00_1500;
														obj_t BgL_arg2504z00_1501;

														BgL_arg2503z00_1500 = CAR(BgL_cdrzd21286zd2_1494);
														BgL_arg2504z00_1501 = CDR(BgL_cdrzd21290zd2_1498);
														{	/* Jas/peep.scm 279 */
															bool_t BgL_tmpz00_4678;

															BgL_defz00_1479 = BgL_arg2503z00_1500;
															BgL_labsz00_1480 = BgL_arg2504z00_1501;
															{	/* Jas/peep.scm 274 */
																obj_t BgL_slotz00_2819;

																BgL_slotz00_2819 =
																	BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_defz00_1479, BgL_envz00_1474);
																{	/* Jas/peep.scm 275 */
																	obj_t BgL_arg2488z00_2820;

																	BgL_arg2488z00_2820 =
																		BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT((
																				(long) 1)),
																		CDR(((obj_t) BgL_slotz00_2819)));
																	{	/* Jas/peep.scm 275 */
																		obj_t BgL_tmpz00_4684;

																		BgL_tmpz00_4684 =
																			((obj_t) BgL_slotz00_2819);
																		SET_CDR(BgL_tmpz00_4684,
																			BgL_arg2488z00_2820);
															}}}
															{
																obj_t BgL_l1211z00_1537;

																BgL_l1211z00_1537 = BgL_labsz00_1480;
															BgL_zc3z04anonymousza32546ze3z87_1538:
																if (PAIRP(BgL_l1211z00_1537))
																	{	/* Jas/peep.scm 282 */
																		{	/* Jas/peep.scm 282 */
																			obj_t BgL_labz00_1540;

																			BgL_labz00_1540 = CAR(BgL_l1211z00_1537);
																			{	/* Jas/peep.scm 274 */
																				obj_t BgL_slotz00_2826;

																				BgL_slotz00_2826 =
																					BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																					(BgL_labz00_1540, BgL_envz00_1474);
																				{	/* Jas/peep.scm 275 */
																					obj_t BgL_arg2488z00_2827;

																					BgL_arg2488z00_2827 =
																						BGl_2zb2zb2zz__r4_numbers_6_5z00
																						(BINT(((long) 1)),
																						CDR(((obj_t) BgL_slotz00_2826)));
																					{	/* Jas/peep.scm 275 */
																						obj_t BgL_tmpz00_4695;

																						BgL_tmpz00_4695 =
																							((obj_t) BgL_slotz00_2826);
																						SET_CDR(BgL_tmpz00_4695,
																							BgL_arg2488z00_2827);
																		}}}}
																		{
																			obj_t BgL_l1211z00_4698;

																			BgL_l1211z00_4698 =
																				CDR(BgL_l1211z00_1537);
																			BgL_l1211z00_1537 = BgL_l1211z00_4698;
																			goto
																				BgL_zc3z04anonymousza32546ze3z87_1538;
																		}
																	}
																else
																	{	/* Jas/peep.scm 282 */
																		BgL_tmpz00_4678 = ((bool_t) 1);
																	}
															}
															return BBOOL(BgL_tmpz00_4678);
														}
													}
												else
													{	/* Jas/peep.scm 279 */
														return BFALSE;
													}
											}
										else
											{	/* Jas/peep.scm 279 */
												return BFALSE;
											}
									}
								else
									{	/* Jas/peep.scm 279 */
										if ((CAR(BgL_insz00_1473) == BINT(((long) 171))))
											{	/* Jas/peep.scm 279 */
												if (PAIRP(BgL_cdrzd21286zd2_1494))
													{	/* Jas/peep.scm 279 */
														obj_t BgL_arg2512z00_1506;
														obj_t BgL_arg2515z00_1507;

														BgL_arg2512z00_1506 = CAR(BgL_cdrzd21286zd2_1494);
														BgL_arg2515z00_1507 = CDR(BgL_cdrzd21286zd2_1494);
														{	/* Jas/peep.scm 279 */
															bool_t BgL_tmpz00_4709;

															BgL_defz00_1482 = BgL_arg2512z00_1506;
															BgL_tablez00_1483 = BgL_arg2515z00_1507;
															{	/* Jas/peep.scm 274 */
																obj_t BgL_slotz00_2832;

																BgL_slotz00_2832 =
																	BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_defz00_1482, BgL_envz00_1474);
																{	/* Jas/peep.scm 275 */
																	obj_t BgL_arg2488z00_2833;

																	BgL_arg2488z00_2833 =
																		BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT((
																				(long) 1)),
																		CDR(((obj_t) BgL_slotz00_2832)));
																	{	/* Jas/peep.scm 275 */
																		obj_t BgL_tmpz00_4715;

																		BgL_tmpz00_4715 =
																			((obj_t) BgL_slotz00_2832);
																		SET_CDR(BgL_tmpz00_4715,
																			BgL_arg2488z00_2833);
															}}}
															{
																obj_t BgL_l1213z00_1544;

																BgL_l1213z00_1544 = BgL_tablez00_1483;
															BgL_zc3z04anonymousza32549ze3z87_1545:
																if (PAIRP(BgL_l1213z00_1544))
																	{	/* Jas/peep.scm 285 */
																		{	/* Jas/peep.scm 285 */
																			obj_t BgL_slotz00_1547;

																			BgL_slotz00_1547 = CAR(BgL_l1213z00_1544);
																			{	/* Jas/peep.scm 285 */
																				obj_t BgL_arg2552z00_1548;

																				BgL_arg2552z00_1548 =
																					CDR(((obj_t) BgL_slotz00_1547));
																				{	/* Jas/peep.scm 274 */
																					obj_t BgL_slotz00_2840;

																					BgL_slotz00_2840 =
																						BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2552z00_1548,
																						BgL_envz00_1474);
																					{	/* Jas/peep.scm 275 */
																						obj_t BgL_arg2488z00_2841;

																						BgL_arg2488z00_2841 =
																							BGl_2zb2zb2zz__r4_numbers_6_5z00
																							(BINT(((long) 1)),
																							CDR(((obj_t) BgL_slotz00_2840)));
																						{	/* Jas/peep.scm 275 */
																							obj_t BgL_tmpz00_4728;

																							BgL_tmpz00_4728 =
																								((obj_t) BgL_slotz00_2840);
																							SET_CDR(BgL_tmpz00_4728,
																								BgL_arg2488z00_2841);
																		}}}}}
																		{
																			obj_t BgL_l1213z00_4731;

																			BgL_l1213z00_4731 =
																				CDR(BgL_l1213z00_1544);
																			BgL_l1213z00_1544 = BgL_l1213z00_4731;
																			goto
																				BgL_zc3z04anonymousza32549ze3z87_1545;
																		}
																	}
																else
																	{	/* Jas/peep.scm 285 */
																		BgL_tmpz00_4709 = ((bool_t) 1);
																	}
															}
															return BBOOL(BgL_tmpz00_4709);
														}
													}
												else
													{	/* Jas/peep.scm 279 */
														return BFALSE;
													}
											}
										else
											{	/* Jas/peep.scm 279 */
												if ((CAR(BgL_insz00_1473) == BINT(((long) 205))))
													{	/* Jas/peep.scm 279 */
														if (PAIRP(BgL_cdrzd21286zd2_1494))
															{	/* Jas/peep.scm 279 */
																obj_t BgL_cdrzd21368zd2_1512;

																BgL_cdrzd21368zd2_1512 =
																	CDR(BgL_cdrzd21286zd2_1494);
																if (PAIRP(BgL_cdrzd21368zd2_1512))
																	{	/* Jas/peep.scm 279 */
																		obj_t BgL_arg2522z00_1514;
																		obj_t BgL_arg2523z00_1515;

																		BgL_arg2522z00_1514 =
																			CAR(BgL_cdrzd21286zd2_1494);
																		BgL_arg2523z00_1515 =
																			CAR(BgL_cdrzd21368zd2_1512);
																		BGl_countzd2labze70z35zzjas_peepz00
																			(BgL_arg2522z00_1514, BgL_envz00_1474);
																		return
																			BGl_countzd2labze70z35zzjas_peepz00
																			(BgL_arg2523z00_1515, BgL_envz00_1474);
																	}
																else
																	{	/* Jas/peep.scm 279 */
																		return BFALSE;
																	}
															}
														else
															{	/* Jas/peep.scm 279 */
																return BFALSE;
															}
													}
												else
													{	/* Jas/peep.scm 279 */
														if ((CAR(BgL_insz00_1473) == BINT(((long) 202))))
															{	/* Jas/peep.scm 279 */
																if (PAIRP(BgL_cdrzd21286zd2_1494))
																	{	/* Jas/peep.scm 279 */
																		obj_t BgL_cdrzd21398zd2_1520;

																		BgL_cdrzd21398zd2_1520 =
																			CDR(BgL_cdrzd21286zd2_1494);
																		if (PAIRP(BgL_cdrzd21398zd2_1520))
																			{	/* Jas/peep.scm 279 */
																				obj_t BgL_cdrzd21403zd2_1522;

																				BgL_cdrzd21403zd2_1522 =
																					CDR(BgL_cdrzd21398zd2_1520);
																				if (PAIRP(BgL_cdrzd21403zd2_1522))
																					{	/* Jas/peep.scm 279 */
																						obj_t BgL_cdrzd21407zd2_1524;

																						BgL_cdrzd21407zd2_1524 =
																							CDR(BgL_cdrzd21403zd2_1522);
																						if (PAIRP(BgL_cdrzd21407zd2_1524))
																							{	/* Jas/peep.scm 279 */
																								if (NULLP(CDR
																										(BgL_cdrzd21407zd2_1524)))
																									{	/* Jas/peep.scm 279 */
																										obj_t BgL_arg2535z00_1528;
																										obj_t BgL_arg2536z00_1529;
																										obj_t BgL_arg2538z00_1530;

																										BgL_arg2535z00_1528 =
																											CAR
																											(BgL_cdrzd21286zd2_1494);
																										BgL_arg2536z00_1529 =
																											CAR
																											(BgL_cdrzd21398zd2_1520);
																										BgL_arg2538z00_1530 =
																											CAR
																											(BgL_cdrzd21403zd2_1522);
																										BGl_countzd2labze70z35zzjas_peepz00
																											(BgL_arg2535z00_1528,
																											BgL_envz00_1474);
																										BGl_countzd2labze70z35zzjas_peepz00
																											(BgL_arg2536z00_1529,
																											BgL_envz00_1474);
																										return
																											BGl_countzd2labze70z35zzjas_peepz00
																											(BgL_arg2538z00_1530,
																											BgL_envz00_1474);
																									}
																								else
																									{	/* Jas/peep.scm 279 */
																										return BFALSE;
																									}
																							}
																						else
																							{	/* Jas/peep.scm 279 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Jas/peep.scm 279 */
																						return BFALSE;
																					}
																			}
																		else
																			{	/* Jas/peep.scm 279 */
																				return BFALSE;
																			}
																	}
																else
																	{	/* Jas/peep.scm 279 */
																		return BFALSE;
																	}
															}
														else
															{	/* Jas/peep.scm 279 */
																return BFALSE;
															}
													}
											}
									}
							}
						else
							{	/* Jas/peep.scm 279 */
								return BFALSE;
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_peepz00()
	{
		{	/* Jas/peep.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_peepz00()
	{
		{	/* Jas/peep.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_peepz00()
	{
		{	/* Jas/peep.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_peepz00()
	{
		{	/* Jas/peep.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 135093979),
				BSTRING_TO_STRING(BGl_string2823z00zzjas_peepz00));
			return
				BGl_modulezd2initializa7ationz75zzjas_stackz00(((long) 163304421),
				BSTRING_TO_STRING(BGl_string2823z00zzjas_peepz00));
		}

	}

#ifdef __cplusplus
}
#endif
