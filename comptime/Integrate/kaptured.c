/*===========================================================================*/
/*   (Integrate/kaptured.scm)                                                */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/kaptured.scm) */
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

	typedef struct BgL_localz00_bgl
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
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_svarzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
		obj_t BgL_xhdlz00;
	}                      *BgL_svarzf2iinfozf2_bglt;

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


	static obj_t BGl_localzd2ctozd2zzintegrate_kapturedz00(BgL_localz00_bglt);
	extern obj_t BGl_setzd2ctoz12zc0zzintegrate_ctoz00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2kapturedz12zc0zzintegrate_kapturedz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzintegrate_kapturedz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static long BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00;
	static obj_t BGl_methodzd2initzd2zzintegrate_kapturedz00();
	static obj_t BGl_unionz00zzintegrate_kapturedz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_kapturedz00();
	static obj_t BGl_z62setzd2kapturedz12za2zzintegrate_kapturedz00(obj_t, obj_t);
	static obj_t BGl_getzd2onezd2kapturedz00zzintegrate_kapturedz00(obj_t, obj_t);
	static bool_t BGl_setzd2onezd2kapturedz12z12zzintegrate_kapturedz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_kapturedz00 =
		BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzintegrate_kapturedz00();
	static obj_t BGl_genericzd2initzd2zzintegrate_kapturedz00();
	extern obj_t BGl_getzd2freezd2varsz00zzintegrate_freez00(BgL_nodez00_bglt,
		BgL_localz00_bglt);
	extern obj_t BGl_freezd2fromzd2zzintegrate_freez00(obj_t, BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_kapturedz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_ctoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_freez00(long,
		char *);
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
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_kapturedz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_kapturedz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1603z00zzintegrate_kapturedz00,
		BgL_bgl_string1603za700za7za7i1604za7, "integrate_kaptured", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2kapturedz12zd2envz12zzintegrate_kapturedz00,
		BgL_bgl_za762setza7d2kapture1605z00,
		BGl_z62setzd2kapturedz12za2zzintegrate_kapturedz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzintegrate_kapturedz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_kapturedz00(long
		BgL_checksumz00_1903, char *BgL_fromz00_1904)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_kapturedz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_kapturedz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_kapturedz00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_kapturedz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_kapturedz00();
					return BGl_toplevelzd2initzd2zzintegrate_kapturedz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_kapturedz00()
	{
		{	/* Integrate/kaptured.scm 17 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_kaptured");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_kaptured");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_kaptured");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_kaptured");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_kapturedz00()
	{
		{	/* Integrate/kaptured.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_kapturedz00()
	{
		{	/* Integrate/kaptured.scm 17 */
			return (BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00 =
				((long) 0), BUNSPEC);
		}

	}



/* set-kaptured! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2kapturedz12zc0zzintegrate_kapturedz00(obj_t
		BgL_localza2za2_3)
	{
		{	/* Integrate/kaptured.scm 31 */
			{
				obj_t BgL_l1241z00_1524;

				{	/* Integrate/kaptured.scm 32 */
					bool_t BgL_tmpz00_1917;

					BgL_l1241z00_1524 = BgL_localza2za2_3;
				BgL_zc3z04anonymousza31254ze3z87_1525:
					if (PAIRP(BgL_l1241z00_1524))
						{	/* Integrate/kaptured.scm 32 */
							BGl_setzd2onezd2kapturedz12z12zzintegrate_kapturedz00(CAR
								(BgL_l1241z00_1524));
							{
								obj_t BgL_l1241z00_1922;

								BgL_l1241z00_1922 = CDR(BgL_l1241z00_1524);
								BgL_l1241z00_1524 = BgL_l1241z00_1922;
								goto BgL_zc3z04anonymousza31254ze3z87_1525;
							}
						}
					else
						{	/* Integrate/kaptured.scm 32 */
							BgL_tmpz00_1917 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_1917);
				}
			}
		}

	}



/* &set-kaptured! */
	obj_t BGl_z62setzd2kapturedz12za2zzintegrate_kapturedz00(obj_t
		BgL_envz00_1901, obj_t BgL_localza2za2_1902)
	{
		{	/* Integrate/kaptured.scm 31 */
			return
				BGl_setzd2kapturedz12zc0zzintegrate_kapturedz00(BgL_localza2za2_1902);
		}

	}



/* set-one-kaptured! */
	bool_t BGl_setzd2onezd2kapturedz12z12zzintegrate_kapturedz00(obj_t
		BgL_localz00_6)
	{
		{	/* Integrate/kaptured.scm 142 */
			{	/* Integrate/kaptured.scm 145 */
				BgL_valuez00_bglt BgL_infoz00_1584;
				obj_t BgL_kapturedz00_1585;

				BgL_infoz00_1584 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_localz00_bglt) BgL_localz00_6))))->BgL_valuez00);
				BgL_kapturedz00_1585 =
					BGl_getzd2onezd2kapturedz00zzintegrate_kapturedz00(BgL_localz00_6,
					BNIL);
				{
					BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1930;

					{
						obj_t BgL_auxz00_1931;

						{	/* Integrate/kaptured.scm 147 */
							BgL_objectz00_bglt BgL_tmpz00_1932;

							BgL_tmpz00_1932 =
								((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_infoz00_1584));
							BgL_auxz00_1931 = BGL_OBJECT_WIDENING(BgL_tmpz00_1932);
						}
						BgL_auxz00_1930 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1931);
					}
					((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_1930))->
							BgL_kapturedz00) = ((obj_t) BgL_kapturedz00_1585), BUNSPEC);
				}
				{
					obj_t BgL_l1248z00_1587;

					BgL_l1248z00_1587 = BgL_kapturedz00_1585;
				BgL_zc3z04anonymousza31297ze3z87_1588:
					if (PAIRP(BgL_l1248z00_1587))
						{	/* Integrate/kaptured.scm 148 */
							{	/* Integrate/kaptured.scm 149 */
								obj_t BgL_localz00_1590;

								BgL_localz00_1590 = CAR(BgL_l1248z00_1587);
								{	/* Integrate/kaptured.scm 150 */
									BgL_valuez00_bglt BgL_arg1299z00_1591;

									BgL_arg1299z00_1591 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_1590))))->
										BgL_valuez00);
									{
										BgL_svarzf2iinfozf2_bglt BgL_auxz00_1944;

										{
											obj_t BgL_auxz00_1945;

											{	/* Integrate/kaptured.scm 149 */
												BgL_objectz00_bglt BgL_tmpz00_1946;

												BgL_tmpz00_1946 =
													((BgL_objectz00_bglt)
													((BgL_svarz00_bglt) BgL_arg1299z00_1591));
												BgL_auxz00_1945 = BGL_OBJECT_WIDENING(BgL_tmpz00_1946);
											}
											BgL_auxz00_1944 =
												((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_1945);
										}
										((((BgL_svarzf2iinfozf2_bglt) COBJECT(BgL_auxz00_1944))->
												BgL_kapturedzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
									}
								}
							}
							{
								obj_t BgL_l1248z00_1952;

								BgL_l1248z00_1952 = CDR(BgL_l1248z00_1587);
								BgL_l1248z00_1587 = BgL_l1248z00_1952;
								goto BgL_zc3z04anonymousza31297ze3z87_1588;
							}
						}
					else
						{	/* Integrate/kaptured.scm 148 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* local-cto */
	obj_t BGl_localzd2ctozd2zzintegrate_kapturedz00(BgL_localz00_bglt
		BgL_localz00_7)
	{
		{	/* Integrate/kaptured.scm 157 */
			{	/* Integrate/kaptured.scm 158 */
				BgL_valuez00_bglt BgL_infoz00_1594;

				BgL_infoz00_1594 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_localz00_7)))->BgL_valuez00);
				{	/* Integrate/kaptured.scm 158 */
					obj_t BgL_ctoz00_1595;

					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1956;

						{
							obj_t BgL_auxz00_1957;

							{	/* Integrate/kaptured.scm 159 */
								BgL_objectz00_bglt BgL_tmpz00_1958;

								BgL_tmpz00_1958 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_infoz00_1594));
								BgL_auxz00_1957 = BGL_OBJECT_WIDENING(BgL_tmpz00_1958);
							}
							BgL_auxz00_1956 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1957);
						}
						BgL_ctoz00_1595 =
							(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_1956))->
							BgL_ctoz00);
					}
					{	/* Integrate/kaptured.scm 159 */

						{	/* Integrate/kaptured.scm 160 */
							bool_t BgL_test1610z00_1964;

							if (PAIRP(BgL_ctoz00_1595))
								{	/* Integrate/kaptured.scm 160 */
									BgL_test1610z00_1964 = ((bool_t) 1);
								}
							else
								{	/* Integrate/kaptured.scm 160 */
									BgL_test1610z00_1964 = NULLP(BgL_ctoz00_1595);
								}
							if (BgL_test1610z00_1964)
								{	/* Integrate/kaptured.scm 160 */
									return BgL_ctoz00_1595;
								}
							else
								{	/* Integrate/kaptured.scm 162 */
									obj_t BgL_bodyz00_1598;

									BgL_bodyz00_1598 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_infoz00_1594)))->BgL_bodyz00);
									{
										BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1970;

										{
											obj_t BgL_auxz00_1971;

											{	/* Integrate/kaptured.scm 163 */
												BgL_objectz00_bglt BgL_tmpz00_1972;

												BgL_tmpz00_1972 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_infoz00_1594));
												BgL_auxz00_1971 = BGL_OBJECT_WIDENING(BgL_tmpz00_1972);
											}
											BgL_auxz00_1970 =
												((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1971);
										}
										((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_1970))->
												BgL_ctoz00) = ((obj_t) BNIL), BUNSPEC);
									}
									BGl_setzd2ctoz12zc0zzintegrate_ctoz00(
										((BgL_nodez00_bglt) BgL_bodyz00_1598), BgL_localz00_7);
									{
										BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1980;

										{
											obj_t BgL_auxz00_1981;

											{	/* Integrate/kaptured.scm 165 */
												BgL_objectz00_bglt BgL_tmpz00_1982;

												BgL_tmpz00_1982 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_infoz00_1594));
												BgL_auxz00_1981 = BGL_OBJECT_WIDENING(BgL_tmpz00_1982);
											}
											BgL_auxz00_1980 =
												((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1981);
										}
										return
											(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_1980))->
											BgL_ctoz00);
									}
								}
						}
					}
				}
			}
		}

	}



/* get-one-kaptured */
	obj_t BGl_getzd2onezd2kapturedz00zzintegrate_kapturedz00(obj_t BgL_localz00_8,
		obj_t BgL_stackz00_9)
	{
		{	/* Integrate/kaptured.scm 170 */
			{	/* Integrate/kaptured.scm 173 */
				BgL_valuez00_bglt BgL_infoz00_1600;

				BgL_infoz00_1600 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_localz00_bglt) BgL_localz00_8))))->BgL_valuez00);
				{	/* Integrate/kaptured.scm 173 */
					obj_t BgL_kapturedz00_1601;

					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1991;

						{
							obj_t BgL_auxz00_1992;

							{	/* Integrate/kaptured.scm 174 */
								BgL_objectz00_bglt BgL_tmpz00_1993;

								BgL_tmpz00_1993 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_infoz00_1600));
								BgL_auxz00_1992 = BGL_OBJECT_WIDENING(BgL_tmpz00_1993);
							}
							BgL_auxz00_1991 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1992);
						}
						BgL_kapturedz00_1601 =
							(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_1991))->
							BgL_kapturedz00);
					}
					{	/* Integrate/kaptured.scm 174 */

						{	/* Integrate/kaptured.scm 176 */
							bool_t BgL_test1614z00_1999;

							if (PAIRP(BgL_kapturedz00_1601))
								{	/* Integrate/kaptured.scm 176 */
									BgL_test1614z00_1999 = ((bool_t) 1);
								}
							else
								{	/* Integrate/kaptured.scm 176 */
									BgL_test1614z00_1999 = NULLP(BgL_kapturedz00_1601);
								}
							if (BgL_test1614z00_1999)
								{	/* Integrate/kaptured.scm 176 */
									return BgL_kapturedz00_1601;
								}
							else
								{	/* Integrate/kaptured.scm 176 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(BgL_localz00_8, BgL_stackz00_9)))
										{	/* Integrate/kaptured.scm 178 */
											return BNIL;
										}
									else
										{	/* Integrate/kaptured.scm 181 */
											obj_t BgL_g1111z00_1606;
											obj_t BgL_g1112z00_1607;

											BgL_g1111z00_1606 =
												BGl_localzd2ctozd2zzintegrate_kapturedz00(
												((BgL_localz00_bglt) BgL_localz00_8));
											BgL_g1112z00_1607 =
												MAKE_YOUNG_PAIR(BgL_localz00_8, BgL_stackz00_9);
											{
												obj_t BgL_kapturedz00_1609;
												obj_t BgL_ctoz00_1610;
												obj_t BgL_nstackz00_1611;

												BgL_kapturedz00_1609 = BNIL;
												BgL_ctoz00_1610 = BgL_g1111z00_1606;
												BgL_nstackz00_1611 = BgL_g1112z00_1607;
											BgL_zc3z04anonymousza31306ze3z87_1612:
												if (NULLP(BgL_ctoz00_1610))
													{	/* Integrate/kaptured.scm 186 */
														obj_t BgL_bodyz00_1614;

														BgL_bodyz00_1614 =
															(((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt) BgL_infoz00_1600)))->
															BgL_bodyz00);
														{	/* Integrate/kaptured.scm 186 */
															obj_t BgL_freez00_1615;

															BgL_freez00_1615 =
																BGl_getzd2freezd2varsz00zzintegrate_freez00(
																((BgL_nodez00_bglt) BgL_bodyz00_1614),
																((BgL_localz00_bglt) BgL_localz00_8));
															{	/* Integrate/kaptured.scm 187 */
																obj_t BgL_fkapturedz00_1616;

																BgL_fkapturedz00_1616 =
																	BGl_freezd2fromzd2zzintegrate_freez00
																	(BgL_kapturedz00_1609,
																	((BgL_localz00_bglt) BgL_localz00_8));
																{	/* Integrate/kaptured.scm 188 */

																	{	/* Integrate/kaptured.scm 189 */
																		obj_t BgL_arg1308z00_1617;

																		BgL_arg1308z00_1617 =
																			MAKE_YOUNG_PAIR(BgL_freez00_1615,
																			BgL_fkapturedz00_1616);
																		return
																			BGl_unionz00zzintegrate_kapturedz00
																			(BgL_arg1308z00_1617);
																	}
																}
															}
														}
													}
												else
													{	/* Integrate/kaptured.scm 190 */
														bool_t BgL_test1618z00_2020;

														{	/* Integrate/kaptured.scm 190 */
															BgL_sfunz00_bglt BgL_oz00_1869;

															BgL_oz00_1869 =
																((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					CAR(
																						((obj_t) BgL_ctoz00_1610))))))->
																	BgL_valuez00));
															{
																BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2027;

																{
																	obj_t BgL_auxz00_2028;

																	{	/* Integrate/kaptured.scm 190 */
																		BgL_objectz00_bglt BgL_tmpz00_2029;

																		BgL_tmpz00_2029 =
																			((BgL_objectz00_bglt) BgL_oz00_1869);
																		BgL_auxz00_2028 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2029);
																	}
																	BgL_auxz00_2027 =
																		((BgL_sfunzf2iinfozf2_bglt)
																		BgL_auxz00_2028);
																}
																BgL_test1618z00_2020 =
																	(((BgL_sfunzf2iinfozf2_bglt)
																		COBJECT(BgL_auxz00_2027))->BgL_gzf3zf3);
															}
														}
														if (BgL_test1618z00_2020)
															{	/* Integrate/kaptured.scm 191 */
																obj_t BgL_otherzd2kapturedzd2_1621;

																{	/* Integrate/kaptured.scm 191 */
																	obj_t BgL_arg1317z00_1626;

																	BgL_arg1317z00_1626 =
																		CAR(((obj_t) BgL_ctoz00_1610));
																	BgL_otherzd2kapturedzd2_1621 =
																		BGl_getzd2onezd2kapturedz00zzintegrate_kapturedz00
																		(BgL_arg1317z00_1626, BgL_nstackz00_1611);
																}
																{	/* Integrate/kaptured.scm 192 */
																	obj_t BgL_arg1312z00_1622;
																	obj_t BgL_arg1314z00_1623;
																	obj_t BgL_arg1315z00_1624;

																	BgL_arg1312z00_1622 =
																		MAKE_YOUNG_PAIR
																		(BgL_otherzd2kapturedzd2_1621,
																		BgL_kapturedz00_1609);
																	BgL_arg1314z00_1623 =
																		CDR(((obj_t) BgL_ctoz00_1610));
																	{	/* Integrate/kaptured.scm 194 */
																		obj_t BgL_arg1316z00_1625;

																		BgL_arg1316z00_1625 =
																			CAR(((obj_t) BgL_ctoz00_1610));
																		BgL_arg1315z00_1624 =
																			MAKE_YOUNG_PAIR(BgL_arg1316z00_1625,
																			BgL_nstackz00_1611);
																	}
																	{
																		obj_t BgL_nstackz00_2045;
																		obj_t BgL_ctoz00_2044;
																		obj_t BgL_kapturedz00_2043;

																		BgL_kapturedz00_2043 = BgL_arg1312z00_1622;
																		BgL_ctoz00_2044 = BgL_arg1314z00_1623;
																		BgL_nstackz00_2045 = BgL_arg1315z00_1624;
																		BgL_nstackz00_1611 = BgL_nstackz00_2045;
																		BgL_ctoz00_1610 = BgL_ctoz00_2044;
																		BgL_kapturedz00_1609 = BgL_kapturedz00_2043;
																		goto BgL_zc3z04anonymousza31306ze3z87_1612;
																	}
																}
															}
														else
															{	/* Integrate/kaptured.scm 196 */
																obj_t BgL_arg1319z00_1627;

																BgL_arg1319z00_1627 =
																	CDR(((obj_t) BgL_ctoz00_1610));
																{
																	obj_t BgL_ctoz00_2048;

																	BgL_ctoz00_2048 = BgL_arg1319z00_1627;
																	BgL_ctoz00_1610 = BgL_ctoz00_2048;
																	goto BgL_zc3z04anonymousza31306ze3z87_1612;
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



/* union */
	obj_t BGl_unionz00zzintegrate_kapturedz00(obj_t BgL_setsz00_10)
	{
		{	/* Integrate/kaptured.scm 206 */
			BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00 =
				(((long) 1) + BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00);
			{
				obj_t BgL_setsz00_1634;
				obj_t BgL_unionz00_1635;

				BgL_setsz00_1634 = BgL_setsz00_10;
				BgL_unionz00_1635 = BNIL;
			BgL_zc3z04anonymousza31325ze3z87_1636:
				if (NULLP(BgL_setsz00_1634))
					{	/* Integrate/kaptured.scm 210 */
						return BgL_unionz00_1635;
					}
				else
					{	/* Integrate/kaptured.scm 212 */
						obj_t BgL_g1117z00_1638;

						BgL_g1117z00_1638 = CAR(((obj_t) BgL_setsz00_1634));
						{
							obj_t BgL_setz00_1640;
							obj_t BgL_unionz00_1641;

							BgL_setz00_1640 = BgL_g1117z00_1638;
							BgL_unionz00_1641 = BgL_unionz00_1635;
						BgL_zc3z04anonymousza31327ze3z87_1642:
							if (NULLP(BgL_setz00_1640))
								{	/* Integrate/kaptured.scm 216 */
									obj_t BgL_arg1329z00_1644;

									BgL_arg1329z00_1644 = CDR(((obj_t) BgL_setsz00_1634));
									{
										obj_t BgL_unionz00_2059;
										obj_t BgL_setsz00_2058;

										BgL_setsz00_2058 = BgL_arg1329z00_1644;
										BgL_unionz00_2059 = BgL_unionz00_1641;
										BgL_unionz00_1635 = BgL_unionz00_2059;
										BgL_setsz00_1634 = BgL_setsz00_2058;
										goto BgL_zc3z04anonymousza31325ze3z87_1636;
									}
								}
							else
								{	/* Integrate/kaptured.scm 217 */
									bool_t BgL_test1621z00_2060;

									{	/* Integrate/kaptured.scm 217 */
										obj_t BgL_arg1346z00_1655;

										{	/* Integrate/kaptured.scm 217 */
											BgL_svarz00_bglt BgL_oz00_1883;

											BgL_oz00_1883 =
												((BgL_svarz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt)
																	CAR(
																		((obj_t) BgL_setz00_1640))))))->
													BgL_valuez00));
											{
												BgL_svarzf2iinfozf2_bglt BgL_auxz00_2067;

												{
													obj_t BgL_auxz00_2068;

													{	/* Integrate/kaptured.scm 217 */
														BgL_objectz00_bglt BgL_tmpz00_2069;

														BgL_tmpz00_2069 =
															((BgL_objectz00_bglt) BgL_oz00_1883);
														BgL_auxz00_2068 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2069);
													}
													BgL_auxz00_2067 =
														((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_2068);
												}
												BgL_arg1346z00_1655 =
													(((BgL_svarzf2iinfozf2_bglt)
														COBJECT(BgL_auxz00_2067))->BgL_uzd2markzd2);
											}
										}
										BgL_test1621z00_2060 =
											(BgL_arg1346z00_1655 ==
											BINT(BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00));
									}
									if (BgL_test1621z00_2060)
										{	/* Integrate/kaptured.scm 219 */
											obj_t BgL_arg1337z00_1649;

											BgL_arg1337z00_1649 = CDR(((obj_t) BgL_setz00_1640));
											{
												obj_t BgL_setz00_2078;

												BgL_setz00_2078 = BgL_arg1337z00_1649;
												BgL_setz00_1640 = BgL_setz00_2078;
												goto BgL_zc3z04anonymousza31327ze3z87_1642;
											}
										}
									else
										{	/* Integrate/kaptured.scm 217 */
											{	/* Integrate/kaptured.scm 221 */
												BgL_valuez00_bglt BgL_arg1338z00_1650;

												BgL_arg1338z00_1650 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt)
																	CAR(
																		((obj_t) BgL_setz00_1640))))))->
													BgL_valuez00);
												{	/* Integrate/kaptured.scm 221 */
													obj_t BgL_vz00_1889;

													BgL_vz00_1889 =
														BINT
														(BGl_za2unionzd2roundza2zd2zzintegrate_kapturedz00);
													{
														BgL_svarzf2iinfozf2_bglt BgL_auxz00_2085;

														{
															obj_t BgL_auxz00_2086;

															{	/* Integrate/kaptured.scm 221 */
																BgL_objectz00_bglt BgL_tmpz00_2087;

																BgL_tmpz00_2087 =
																	((BgL_objectz00_bglt)
																	((BgL_svarz00_bglt) BgL_arg1338z00_1650));
																BgL_auxz00_2086 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2087);
															}
															BgL_auxz00_2085 =
																((BgL_svarzf2iinfozf2_bglt) BgL_auxz00_2086);
														}
														((((BgL_svarzf2iinfozf2_bglt)
																	COBJECT(BgL_auxz00_2085))->BgL_uzd2markzd2) =
															((obj_t) BgL_vz00_1889), BUNSPEC);
													}
												}
											}
											{	/* Integrate/kaptured.scm 222 */
												obj_t BgL_arg1340z00_1652;
												obj_t BgL_arg1344z00_1653;

												BgL_arg1340z00_1652 = CDR(((obj_t) BgL_setz00_1640));
												{	/* Integrate/kaptured.scm 222 */
													obj_t BgL_arg1345z00_1654;

													BgL_arg1345z00_1654 = CAR(((obj_t) BgL_setz00_1640));
													BgL_arg1344z00_1653 =
														MAKE_YOUNG_PAIR(BgL_arg1345z00_1654,
														BgL_unionz00_1641);
												}
												{
													obj_t BgL_unionz00_2099;
													obj_t BgL_setz00_2098;

													BgL_setz00_2098 = BgL_arg1340z00_1652;
													BgL_unionz00_2099 = BgL_arg1344z00_1653;
													BgL_unionz00_1641 = BgL_unionz00_2099;
													BgL_setz00_1640 = BgL_setz00_2098;
													goto BgL_zc3z04anonymousza31327ze3z87_1642;
												}
											}
										}
								}
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_kapturedz00()
	{
		{	/* Integrate/kaptured.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_kapturedz00()
	{
		{	/* Integrate/kaptured.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_kapturedz00()
	{
		{	/* Integrate/kaptured.scm 17 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_kapturedz00()
	{
		{	/* Integrate/kaptured.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1603z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1603z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1603z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1603z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1603z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1603z00zzintegrate_kapturedz00));
			BGl_modulezd2initializa7ationz75zzintegrate_freez00(((long) 183600711),
				BSTRING_TO_STRING(BGl_string1603z00zzintegrate_kapturedz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_ctoz00(((long) 418450043),
				BSTRING_TO_STRING(BGl_string1603z00zzintegrate_kapturedz00));
		}

	}

#ifdef __cplusplus
}
#endif
