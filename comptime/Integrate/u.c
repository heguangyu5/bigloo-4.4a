/*===========================================================================*/
/*   (Integrate/u.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/u.scm) */
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

	typedef struct BgL_sfunzf2iinfozf2_bgl
	{
		obj_t BgL_ownerz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
		obj_t BgL_cfromz00;
		obj_t BgL_ctoz00;
		obj_t BgL_kz00;
		obj_t BgL_kza2za2;
		obj_t BgL_uz00;
		obj_t BgL_cnz00;
		obj_t BgL_ctz00;
		obj_t BgL_kontz00;
		bool_t BgL_gzf3zf3;
		bool_t BgL_forcegzf3zf3;
		obj_t BgL_lz00;
		obj_t BgL_ledz00;
		obj_t BgL_istampz00;
		obj_t BgL_globalz00;
		obj_t BgL_kapturedz00;
		obj_t BgL_tailzd2coercionzd2;
		bool_t BgL_xhdlzf3zf3;
	}                      *BgL_sfunzf2iinfozf2_bglt;


	static obj_t BGl_objectzd2initzd2zzintegrate_uz00();
	static obj_t BGl_methodzd2initzd2zzintegrate_uz00();
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_uz00();
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_uz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_uz00();
	BGL_EXPORTED_DECL obj_t BGl_Uz12z12zzintegrate_uz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzintegrate_uz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_uz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_uz00();
	static obj_t BGl_z62Uz12z70zzintegrate_uz00(obj_t);
	extern obj_t BGl_za2phiza2z00zzintegrate_az00;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_Uz12zd2envzc0zzintegrate_uz00,
		BgL_bgl_za762uza712za770za7za7inte1341za7, BGl_z62Uz12z70zzintegrate_uz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1340z00zzintegrate_uz00,
		BgL_bgl_string1340za700za7za7i1342za7, "integrate_u", 11);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzintegrate_uz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_uz00(long
		BgL_checksumz00_1716, char *BgL_fromz00_1717)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_uz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_uz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_uz00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_uz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_uz00();
					return BGl_methodzd2initzd2zzintegrate_uz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_uz00()
	{
		{	/* Integrate/u.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_u");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_u");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "integrate_u");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "integrate_u");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_uz00()
	{
		{	/* Integrate/u.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* U! */
	BGL_EXPORTED_DEF obj_t BGl_Uz12z12zzintegrate_uz00()
	{
		{	/* Integrate/u.scm 28 */
			{
				obj_t BgL_phiz00_1516;

				BgL_phiz00_1516 = BGl_za2phiza2z00zzintegrate_az00;
			BgL_zc3z04anonymousza31243ze3z87_1517:
				if (NULLP(BgL_phiz00_1516))
					{	/* Integrate/u.scm 30 */
						return BNIL;
					}
				else
					{	/* Integrate/u.scm 32 */
						obj_t BgL_pz00_1519;

						BgL_pz00_1519 = CAR(((obj_t) BgL_phiz00_1516));
						{	/* Integrate/u.scm 32 */
							BgL_valuez00_bglt BgL_ifunz00_1520;

							BgL_ifunz00_1520 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_pz00_1519)))->BgL_valuez00);
							{	/* Integrate/u.scm 33 */

								{	/* Integrate/u.scm 34 */
									bool_t BgL_arg1245z00_1521;

									{	/* Integrate/u.scm 34 */
										long BgL_arg1246z00_1522;

										{	/* Integrate/u.scm 34 */
											obj_t BgL_arg1247z00_1523;

											{
												BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1736;

												{
													obj_t BgL_auxz00_1737;

													{	/* Integrate/u.scm 34 */
														BgL_objectz00_bglt BgL_tmpz00_1738;

														BgL_tmpz00_1738 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_ifunz00_1520));
														BgL_auxz00_1737 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_1738);
													}
													BgL_auxz00_1736 =
														((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1737);
												}
												BgL_arg1247z00_1523 =
													(((BgL_sfunzf2iinfozf2_bglt)
														COBJECT(BgL_auxz00_1736))->BgL_kza2za2);
											}
											BgL_arg1246z00_1522 =
												bgl_list_length(BgL_arg1247z00_1523);
										}
										BgL_arg1245z00_1521 = (BgL_arg1246z00_1522 == ((long) 1));
									}
									{
										BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1746;

										{
											obj_t BgL_auxz00_1747;

											{	/* Integrate/u.scm 34 */
												BgL_objectz00_bglt BgL_tmpz00_1748;

												BgL_tmpz00_1748 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_ifunz00_1520));
												BgL_auxz00_1747 = BGL_OBJECT_WIDENING(BgL_tmpz00_1748);
											}
											BgL_auxz00_1746 =
												((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1747);
										}
										((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_1746))->
												BgL_uz00) =
											((obj_t) BBOOL(BgL_arg1245z00_1521)), BUNSPEC);
								}}
								{	/* Integrate/u.scm 35 */
									obj_t BgL_arg1250z00_1524;

									BgL_arg1250z00_1524 = CDR(((obj_t) BgL_phiz00_1516));
									{
										obj_t BgL_phiz00_1757;

										BgL_phiz00_1757 = BgL_arg1250z00_1524;
										BgL_phiz00_1516 = BgL_phiz00_1757;
										goto BgL_zc3z04anonymousza31243ze3z87_1517;
									}
								}
							}
						}
					}
			}
		}

	}



/* &U! */
	obj_t BGl_z62Uz12z70zzintegrate_uz00(obj_t BgL_envz00_1715)
	{
		{	/* Integrate/u.scm 28 */
			return BGl_Uz12z12zzintegrate_uz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_uz00()
	{
		{	/* Integrate/u.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_uz00()
	{
		{	/* Integrate/u.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_uz00()
	{
		{	/* Integrate/u.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_uz00()
	{
		{	/* Integrate/u.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1340z00zzintegrate_uz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1340z00zzintegrate_uz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1340z00zzintegrate_uz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1340z00zzintegrate_uz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1340z00zzintegrate_uz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1340z00zzintegrate_uz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_az00(((long) 523633215),
				BSTRING_TO_STRING(BGl_string1340z00zzintegrate_uz00));
		}

	}

#ifdef __cplusplus
}
#endif
