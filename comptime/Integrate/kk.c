/*===========================================================================*/
/*   (Integrate/kk.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/kk.scm) */
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

	typedef struct BgL_globalz00_bgl
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
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		bool_t BgL_evalzf3zf3;
		obj_t BgL_libraryz00;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
		obj_t BgL_initz00;
		obj_t BgL_aliasz00;
	}                *BgL_globalz00_bglt;

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


	static obj_t BGl_objectzd2initzd2zzintegrate_kkz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_kkz00();
	static obj_t BGl_z62Kza2z12zd2zzintegrate_kkz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_kkz00();
	BGL_EXPORTED_DECL obj_t BGl_Kz12z12zzintegrate_kkz00(obj_t,
		BgL_globalz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_kkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_kkz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_Kzd21z12zc0zzintegrate_kkz00(obj_t, obj_t);
	static obj_t BGl_Kzd22z12zc0zzintegrate_kkz00(obj_t, obj_t);
	static obj_t BGl_z62Kz12z70zzintegrate_kkz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_kkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzintegrate_kkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_kkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_kkz00();
	BGL_EXPORTED_DECL obj_t BGl_Kza2z12zb0zzintegrate_kkz00(obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string1528z00zzintegrate_kkz00,
		BgL_bgl_string1528za700za7za7i1538za7, "integrate_kk", 12);
	      DEFINE_STRING(BGl_string1529z00zzintegrate_kkz00,
		BgL_bgl_string1529za700za7za7i1539za7, "tail bottom ", 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_Kz12zd2envzc0zzintegrate_kkz00,
		BgL_bgl_za762kza712za770za7za7inte1540za7, BGl_z62Kz12z70zzintegrate_kkz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_Kza2z12zd2envz62zzintegrate_kkz00,
		BgL_bgl_za762kza7a2za712za7d2za7za7i1541z00,
		BGl_z62Kza2z12zd2zzintegrate_kkz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzintegrate_kkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_kkz00(long
		BgL_checksumz00_1912, char *BgL_fromz00_1913)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_kkz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_kkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_kkz00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_kkz00();
					BGl_cnstzd2initzd2zzintegrate_kkz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_kkz00();
					return BGl_methodzd2initzd2zzintegrate_kkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_kkz00()
	{
		{	/* Integrate/kk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_kk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "integrate_kk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"integrate_kk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"integrate_kk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "integrate_kk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_kkz00()
	{
		{	/* Integrate/kk.scm 15 */
			{	/* Integrate/kk.scm 15 */
				obj_t BgL_cportz00_1899;

				{	/* Integrate/kk.scm 15 */
					obj_t BgL_stringz00_1907;

					BgL_stringz00_1907 = BGl_string1529z00zzintegrate_kkz00;
					{	/* Integrate/kk.scm 15 */
						obj_t BgL_startz00_1908;

						BgL_startz00_1908 = BINT(((long) 0));
						{	/* Integrate/kk.scm 15 */
							obj_t BgL_endz00_1909;

							BgL_endz00_1909 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1907)));
							{	/* Integrate/kk.scm 15 */

								BgL_cportz00_1899 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1907, BgL_startz00_1908, BgL_endz00_1909);
				}}}}
				{
					long BgL_iz00_1900;

					BgL_iz00_1900 = ((long) 1);
				BgL_loopz00_1901:
					if ((BgL_iz00_1900 == ((long) -1)))
						{	/* Integrate/kk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/kk.scm 15 */
							{	/* Integrate/kk.scm 15 */
								obj_t BgL_arg1536z00_1903;

								{	/* Integrate/kk.scm 15 */

									{	/* Integrate/kk.scm 15 */
										obj_t BgL_locationz00_1905;

										BgL_locationz00_1905 = BBOOL(((bool_t) 0));
										{	/* Integrate/kk.scm 15 */

											BgL_arg1536z00_1903 =
												BGl_readz00zz__readerz00(BgL_cportz00_1899,
												BgL_locationz00_1905);
										}
									}
								}
								{	/* Integrate/kk.scm 15 */
									int BgL_tmpz00_1936;

									BgL_tmpz00_1936 = (int) (BgL_iz00_1900);
									CNST_TABLE_SET(BgL_tmpz00_1936, BgL_arg1536z00_1903);
							}}
							{	/* Integrate/kk.scm 15 */
								int BgL_auxz00_1906;

								BgL_auxz00_1906 = (int) ((BgL_iz00_1900 - ((long) 1)));
								{
									long BgL_iz00_1941;

									BgL_iz00_1941 = (long) (BgL_auxz00_1906);
									BgL_iz00_1900 = BgL_iz00_1941;
									goto BgL_loopz00_1901;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_kkz00()
	{
		{	/* Integrate/kk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* K! */
	BGL_EXPORTED_DEF obj_t BGl_Kz12z12zzintegrate_kkz00(obj_t BgL_az00_3,
		BgL_globalz00_bglt BgL_varz00_4)
	{
		{	/* Integrate/kk.scm 44 */
			{	/* Integrate/kk.scm 50 */
				BgL_valuez00_bglt BgL_ifunz00_1522;

				BgL_ifunz00_1522 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_4)))->BgL_valuez00);
				{	/* Integrate/kk.scm 51 */
					obj_t BgL_arg1243z00_1523;

					{	/* Integrate/kk.scm 51 */
						obj_t BgL_list1244z00_1524;

						BgL_list1244z00_1524 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
						BgL_arg1243z00_1523 = BgL_list1244z00_1524;
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1948;

						{
							obj_t BgL_auxz00_1949;

							{	/* Integrate/kk.scm 51 */
								BgL_objectz00_bglt BgL_tmpz00_1950;

								BgL_tmpz00_1950 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_ifunz00_1522));
								BgL_auxz00_1949 = BGL_OBJECT_WIDENING(BgL_tmpz00_1950);
							}
							BgL_auxz00_1948 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1949);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_1948))->BgL_kz00) =
							((obj_t) BgL_arg1243z00_1523), BUNSPEC);
				}}
				{	/* Integrate/kk.scm 52 */
					obj_t BgL_arg1245z00_1525;

					{	/* Integrate/kk.scm 52 */
						obj_t BgL_list1246z00_1526;

						BgL_list1246z00_1526 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
						BgL_arg1245z00_1525 = BgL_list1246z00_1526;
					}
					{
						BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1958;

						{
							obj_t BgL_auxz00_1959;

							{	/* Integrate/kk.scm 52 */
								BgL_objectz00_bglt BgL_tmpz00_1960;

								BgL_tmpz00_1960 =
									((BgL_objectz00_bglt) ((BgL_sfunz00_bglt) BgL_ifunz00_1522));
								BgL_auxz00_1959 = BGL_OBJECT_WIDENING(BgL_tmpz00_1960);
							}
							BgL_auxz00_1958 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1959);
						}
						((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_1958))->
								BgL_kza2za2) = ((obj_t) BgL_arg1245z00_1525), BUNSPEC);
				}}
				return
					BGl_Kzd22z12zc0zzintegrate_kkz00(BgL_az00_3,
					BGl_Kzd21z12zc0zzintegrate_kkz00(BgL_az00_3, BNIL));
			}
		}

	}



/* &K! */
	obj_t BGl_z62Kz12z70zzintegrate_kkz00(obj_t BgL_envz00_1894,
		obj_t BgL_az00_1895, obj_t BgL_varz00_1896)
	{
		{	/* Integrate/kk.scm 44 */
			return
				BGl_Kz12z12zzintegrate_kkz00(BgL_az00_1895,
				((BgL_globalz00_bglt) BgL_varz00_1896));
		}

	}



/* K-1! */
	obj_t BGl_Kzd21z12zc0zzintegrate_kkz00(obj_t BgL_az00_5,
		obj_t BgL_azd2tailzd2_6)
	{
		{	/* Integrate/kk.scm 58 */
		BGl_Kzd21z12zc0zzintegrate_kkz00:
			if (NULLP(BgL_az00_5))
				{	/* Integrate/kk.scm 60 */
					return BgL_azd2tailzd2_6;
				}
			else
				{	/* Integrate/kk.scm 62 */
					obj_t BgL_prz00_1529;

					BgL_prz00_1529 = CAR(((obj_t) BgL_az00_5));
					{	/* Integrate/kk.scm 62 */
						obj_t BgL_fz00_1530;

						BgL_fz00_1530 = CAR(((obj_t) BgL_prz00_1529));
						{	/* Integrate/kk.scm 63 */
							obj_t BgL_gz00_1531;

							{	/* Integrate/kk.scm 64 */
								obj_t BgL_pairz00_1811;

								BgL_pairz00_1811 = CDR(((obj_t) BgL_prz00_1529));
								BgL_gz00_1531 = CAR(BgL_pairz00_1811);
							}
							{	/* Integrate/kk.scm 64 */
								obj_t BgL_kz00_1532;

								{	/* Integrate/kk.scm 65 */
									obj_t BgL_pairz00_1817;

									{	/* Integrate/kk.scm 65 */
										obj_t BgL_pairz00_1816;

										BgL_pairz00_1816 = CDR(((obj_t) BgL_prz00_1529));
										BgL_pairz00_1817 = CDR(BgL_pairz00_1816);
									}
									BgL_kz00_1532 = CAR(BgL_pairz00_1817);
								}
								{	/* Integrate/kk.scm 65 */

									if ((BgL_kz00_1532 == CNST_TABLE_REF(((long) 1))))
										{	/* Integrate/kk.scm 67 */
											if ((BgL_fz00_1530 == BgL_gz00_1531))
												{	/* Integrate/kk.scm 69 */
													obj_t BgL_arg1252z00_1535;

													BgL_arg1252z00_1535 = CDR(((obj_t) BgL_az00_5));
													{
														obj_t BgL_az00_1990;

														BgL_az00_1990 = BgL_arg1252z00_1535;
														BgL_az00_5 = BgL_az00_1990;
														goto BGl_Kzd21z12zc0zzintegrate_kkz00;
													}
												}
											else
												{	/* Integrate/kk.scm 70 */
													obj_t BgL_arg1253z00_1536;
													obj_t BgL_arg1254z00_1537;

													BgL_arg1253z00_1536 = CDR(((obj_t) BgL_az00_5));
													BgL_arg1254z00_1537 =
														MAKE_YOUNG_PAIR(BgL_prz00_1529, BgL_azd2tailzd2_6);
													{
														obj_t BgL_azd2tailzd2_1995;
														obj_t BgL_az00_1994;

														BgL_az00_1994 = BgL_arg1253z00_1536;
														BgL_azd2tailzd2_1995 = BgL_arg1254z00_1537;
														BgL_azd2tailzd2_6 = BgL_azd2tailzd2_1995;
														BgL_az00_5 = BgL_az00_1994;
														goto BGl_Kzd21z12zc0zzintegrate_kkz00;
													}
												}
										}
									else
										{	/* Integrate/kk.scm 72 */
											BgL_valuez00_bglt BgL_ifunz00_1538;

											BgL_ifunz00_1538 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_gz00_1531)))->
												BgL_valuez00);
											{	/* Integrate/kk.scm 73 */
												bool_t BgL_test1547z00_1998;

												{	/* Integrate/kk.scm 73 */
													obj_t BgL_arg1274z00_1547;

													{
														BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1999;

														{
															obj_t BgL_auxz00_2000;

															{	/* Integrate/kk.scm 73 */
																BgL_objectz00_bglt BgL_tmpz00_2001;

																BgL_tmpz00_2001 =
																	((BgL_objectz00_bglt)
																	((BgL_sfunz00_bglt) BgL_ifunz00_1538));
																BgL_auxz00_2000 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2001);
															}
															BgL_auxz00_1999 =
																((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2000);
														}
														BgL_arg1274z00_1547 =
															(((BgL_sfunzf2iinfozf2_bglt)
																COBJECT(BgL_auxz00_1999))->BgL_kz00);
													}
													BgL_test1547z00_1998 =
														CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_kz00_1532, BgL_arg1274z00_1547));
												}
												if (BgL_test1547z00_1998)
													{	/* Integrate/kk.scm 74 */
														obj_t BgL_arg1258z00_1541;

														BgL_arg1258z00_1541 = CDR(((obj_t) BgL_az00_5));
														{
															obj_t BgL_az00_2011;

															BgL_az00_2011 = BgL_arg1258z00_1541;
															BgL_az00_5 = BgL_az00_2011;
															goto BGl_Kzd21z12zc0zzintegrate_kkz00;
														}
													}
												else
													{	/* Integrate/kk.scm 73 */
														{	/* Integrate/kk.scm 76 */
															obj_t BgL_arg1263z00_1542;

															{	/* Integrate/kk.scm 76 */
																obj_t BgL_arg1268z00_1543;

																{
																	BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2012;

																	{
																		obj_t BgL_auxz00_2013;

																		{	/* Integrate/kk.scm 76 */
																			BgL_objectz00_bglt BgL_tmpz00_2014;

																			BgL_tmpz00_2014 =
																				((BgL_objectz00_bglt)
																				((BgL_sfunz00_bglt) BgL_ifunz00_1538));
																			BgL_auxz00_2013 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2014);
																		}
																		BgL_auxz00_2012 =
																			((BgL_sfunzf2iinfozf2_bglt)
																			BgL_auxz00_2013);
																	}
																	BgL_arg1268z00_1543 =
																		(((BgL_sfunzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2012))->BgL_kz00);
																}
																BgL_arg1263z00_1542 =
																	MAKE_YOUNG_PAIR(BgL_kz00_1532,
																	BgL_arg1268z00_1543);
															}
															{
																BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2021;

																{
																	obj_t BgL_auxz00_2022;

																	{	/* Integrate/kk.scm 76 */
																		BgL_objectz00_bglt BgL_tmpz00_2023;

																		BgL_tmpz00_2023 =
																			((BgL_objectz00_bglt)
																			((BgL_sfunz00_bglt) BgL_ifunz00_1538));
																		BgL_auxz00_2022 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2023);
																	}
																	BgL_auxz00_2021 =
																		((BgL_sfunzf2iinfozf2_bglt)
																		BgL_auxz00_2022);
																}
																((((BgL_sfunzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2021))->BgL_kz00) =
																	((obj_t) BgL_arg1263z00_1542), BUNSPEC);
															}
														}
														{	/* Integrate/kk.scm 77 */
															obj_t BgL_arg1270z00_1544;

															{	/* Integrate/kk.scm 77 */
																obj_t BgL_arg1271z00_1545;

																{
																	BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2029;

																	{
																		obj_t BgL_auxz00_2030;

																		{	/* Integrate/kk.scm 77 */
																			BgL_objectz00_bglt BgL_tmpz00_2031;

																			BgL_tmpz00_2031 =
																				((BgL_objectz00_bglt)
																				((BgL_sfunz00_bglt) BgL_ifunz00_1538));
																			BgL_auxz00_2030 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2031);
																		}
																		BgL_auxz00_2029 =
																			((BgL_sfunzf2iinfozf2_bglt)
																			BgL_auxz00_2030);
																	}
																	BgL_arg1271z00_1545 =
																		(((BgL_sfunzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2029))->BgL_kza2za2);
																}
																BgL_arg1270z00_1544 =
																	MAKE_YOUNG_PAIR(BgL_kz00_1532,
																	BgL_arg1271z00_1545);
															}
															{
																BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2038;

																{
																	obj_t BgL_auxz00_2039;

																	{	/* Integrate/kk.scm 77 */
																		BgL_objectz00_bglt BgL_tmpz00_2040;

																		BgL_tmpz00_2040 =
																			((BgL_objectz00_bglt)
																			((BgL_sfunz00_bglt) BgL_ifunz00_1538));
																		BgL_auxz00_2039 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2040);
																	}
																	BgL_auxz00_2038 =
																		((BgL_sfunzf2iinfozf2_bglt)
																		BgL_auxz00_2039);
																}
																((((BgL_sfunzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2038))->BgL_kza2za2) =
																	((obj_t) BgL_arg1270z00_1544), BUNSPEC);
															}
														}
														{	/* Integrate/kk.scm 78 */
															obj_t BgL_arg1273z00_1546;

															BgL_arg1273z00_1546 = CDR(((obj_t) BgL_az00_5));
															{
																obj_t BgL_az00_2048;

																BgL_az00_2048 = BgL_arg1273z00_1546;
																BgL_az00_5 = BgL_az00_2048;
																goto BGl_Kzd21z12zc0zzintegrate_kkz00;
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



/* K-2! */
	obj_t BGl_Kzd22z12zc0zzintegrate_kkz00(obj_t BgL_az00_7,
		obj_t BgL_azd2tailzd2_8)
	{
		{	/* Integrate/kk.scm 83 */
			{
				bool_t BgL_continuez00_1549;

				BgL_continuez00_1549 = ((bool_t) 1);
			BgL_zc3z04anonymousza31275ze3z87_1550:
				if (BgL_continuez00_1549)
					{
						obj_t BgL_atz00_1552;
						bool_t BgL_continuez00_1553;

						BgL_atz00_1552 = BgL_azd2tailzd2_8;
						BgL_continuez00_1553 = ((bool_t) 0);
					BgL_zc3z04anonymousza31276ze3z87_1554:
						if (NULLP(BgL_atz00_1552))
							{
								bool_t BgL_continuez00_2052;

								BgL_continuez00_2052 = BgL_continuez00_1553;
								BgL_continuez00_1549 = BgL_continuez00_2052;
								goto BgL_zc3z04anonymousza31275ze3z87_1550;
							}
						else
							{	/* Integrate/kk.scm 95 */
								BgL_valuez00_bglt BgL_ifunz00_1556;

								{
									BgL_variablez00_bglt BgL_auxz00_2053;

									{	/* Integrate/kk.scm 95 */
										obj_t BgL_pairz00_1835;

										BgL_pairz00_1835 = CAR(((obj_t) BgL_atz00_1552));
										BgL_auxz00_2053 =
											((BgL_variablez00_bglt) CAR(BgL_pairz00_1835));
									}
									BgL_ifunz00_1556 =
										(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_2053))->
										BgL_valuez00);
								}
								{	/* Integrate/kk.scm 96 */
									bool_t BgL_test1550z00_2059;

									{	/* Integrate/kk.scm 96 */
										obj_t BgL_arg1298z00_1581;

										{
											BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2060;

											{
												obj_t BgL_auxz00_2061;

												{	/* Integrate/kk.scm 96 */
													BgL_objectz00_bglt BgL_tmpz00_2062;

													BgL_tmpz00_2062 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_ifunz00_1556));
													BgL_auxz00_2061 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2062);
												}
												BgL_auxz00_2060 =
													((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2061);
											}
											BgL_arg1298z00_1581 =
												(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2060))->
												BgL_kz00);
										}
										BgL_test1550z00_2059 = NULLP(BgL_arg1298z00_1581);
									}
									if (BgL_test1550z00_2059)
										{	/* Integrate/kk.scm 97 */
											obj_t BgL_arg1282z00_1559;

											BgL_arg1282z00_1559 = CDR(((obj_t) BgL_atz00_1552));
											{
												obj_t BgL_atz00_2071;

												BgL_atz00_2071 = BgL_arg1282z00_1559;
												BgL_atz00_1552 = BgL_atz00_2071;
												goto BgL_zc3z04anonymousza31276ze3z87_1554;
											}
										}
									else
										{	/* Integrate/kk.scm 98 */
											obj_t BgL_gz00_1560;

											{	/* Integrate/kk.scm 98 */
												obj_t BgL_pairz00_1842;

												BgL_pairz00_1842 = CAR(((obj_t) BgL_atz00_1552));
												BgL_gz00_1560 = CAR(CDR(BgL_pairz00_1842));
											}
											{	/* Integrate/kk.scm 98 */
												BgL_valuez00_bglt BgL_gifunz00_1561;

												BgL_gifunz00_1561 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_gz00_1560)))->
													BgL_valuez00);
												{	/* Integrate/kk.scm 99 */

													{	/* Integrate/kk.scm 100 */
														obj_t BgL_g1107z00_1562;

														{
															BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2078;

															{
																obj_t BgL_auxz00_2079;

																{	/* Integrate/kk.scm 100 */
																	BgL_objectz00_bglt BgL_tmpz00_2080;

																	BgL_tmpz00_2080 =
																		((BgL_objectz00_bglt)
																		((BgL_sfunz00_bglt) BgL_ifunz00_1556));
																	BgL_auxz00_2079 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2080);
																}
																BgL_auxz00_2078 =
																	((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2079);
															}
															BgL_g1107z00_1562 =
																(((BgL_sfunzf2iinfozf2_bglt)
																	COBJECT(BgL_auxz00_2078))->BgL_kz00);
														}
														{
															obj_t BgL_ksz00_1564;
															bool_t BgL_continuez00_1565;

															BgL_ksz00_1564 = BgL_g1107z00_1562;
															BgL_continuez00_1565 = BgL_continuez00_1553;
														BgL_zc3z04anonymousza31283ze3z87_1566:
															if (NULLP(BgL_ksz00_1564))
																{	/* Integrate/kk.scm 106 */
																	obj_t BgL_arg1285z00_1568;

																	BgL_arg1285z00_1568 =
																		CDR(((obj_t) BgL_atz00_1552));
																	{
																		bool_t BgL_continuez00_2091;
																		obj_t BgL_atz00_2090;

																		BgL_atz00_2090 = BgL_arg1285z00_1568;
																		BgL_continuez00_2091 = BgL_continuez00_1565;
																		BgL_continuez00_1553 = BgL_continuez00_2091;
																		BgL_atz00_1552 = BgL_atz00_2090;
																		goto BgL_zc3z04anonymousza31276ze3z87_1554;
																	}
																}
															else
																{	/* Integrate/kk.scm 107 */
																	obj_t BgL_kz00_1569;

																	BgL_kz00_1569 = CAR(((obj_t) BgL_ksz00_1564));
																	{	/* Integrate/kk.scm 108 */
																		bool_t BgL_test1553z00_2094;

																		{	/* Integrate/kk.scm 108 */
																			obj_t BgL_arg1296z00_1578;

																			{
																				BgL_sfunzf2iinfozf2_bglt
																					BgL_auxz00_2095;
																				{
																					obj_t BgL_auxz00_2096;

																					{	/* Integrate/kk.scm 108 */
																						BgL_objectz00_bglt BgL_tmpz00_2097;

																						BgL_tmpz00_2097 =
																							((BgL_objectz00_bglt)
																							((BgL_sfunz00_bglt)
																								BgL_gifunz00_1561));
																						BgL_auxz00_2096 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_2097);
																					}
																					BgL_auxz00_2095 =
																						((BgL_sfunzf2iinfozf2_bglt)
																						BgL_auxz00_2096);
																				}
																				BgL_arg1296z00_1578 =
																					(((BgL_sfunzf2iinfozf2_bglt)
																						COBJECT(BgL_auxz00_2095))->
																					BgL_kz00);
																			}
																			BgL_test1553z00_2094 =
																				CBOOL
																				(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_kz00_1569, BgL_arg1296z00_1578));
																		}
																		if (BgL_test1553z00_2094)
																			{	/* Integrate/kk.scm 109 */
																				obj_t BgL_arg1288z00_1572;

																				BgL_arg1288z00_1572 =
																					CDR(((obj_t) BgL_ksz00_1564));
																				{
																					obj_t BgL_ksz00_2107;

																					BgL_ksz00_2107 = BgL_arg1288z00_1572;
																					BgL_ksz00_1564 = BgL_ksz00_2107;
																					goto
																						BgL_zc3z04anonymousza31283ze3z87_1566;
																				}
																			}
																		else
																			{	/* Integrate/kk.scm 108 */
																				{	/* Integrate/kk.scm 113 */
																					obj_t BgL_arg1289z00_1573;

																					{	/* Integrate/kk.scm 113 */
																						obj_t BgL_arg1290z00_1574;

																						{
																							BgL_sfunzf2iinfozf2_bglt
																								BgL_auxz00_2108;
																							{
																								obj_t BgL_auxz00_2109;

																								{	/* Integrate/kk.scm 113 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_2110;
																									BgL_tmpz00_2110 =
																										((BgL_objectz00_bglt) (
																											(BgL_sfunz00_bglt)
																											BgL_gifunz00_1561));
																									BgL_auxz00_2109 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_2110);
																								}
																								BgL_auxz00_2108 =
																									((BgL_sfunzf2iinfozf2_bglt)
																									BgL_auxz00_2109);
																							}
																							BgL_arg1290z00_1574 =
																								(((BgL_sfunzf2iinfozf2_bglt)
																									COBJECT(BgL_auxz00_2108))->
																								BgL_kz00);
																						}
																						BgL_arg1289z00_1573 =
																							MAKE_YOUNG_PAIR(BgL_kz00_1569,
																							BgL_arg1290z00_1574);
																					}
																					{
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_auxz00_2117;
																						{
																							obj_t BgL_auxz00_2118;

																							{	/* Integrate/kk.scm 111 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_2119;
																								BgL_tmpz00_2119 =
																									((BgL_objectz00_bglt) (
																										(BgL_sfunz00_bglt)
																										BgL_gifunz00_1561));
																								BgL_auxz00_2118 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_2119);
																							}
																							BgL_auxz00_2117 =
																								((BgL_sfunzf2iinfozf2_bglt)
																								BgL_auxz00_2118);
																						}
																						((((BgL_sfunzf2iinfozf2_bglt)
																									COBJECT(BgL_auxz00_2117))->
																								BgL_kz00) =
																							((obj_t) BgL_arg1289z00_1573),
																							BUNSPEC);
																					}
																				}
																				{	/* Integrate/kk.scm 116 */
																					obj_t BgL_arg1291z00_1575;

																					{	/* Integrate/kk.scm 116 */
																						obj_t BgL_arg1292z00_1576;

																						{
																							BgL_sfunzf2iinfozf2_bglt
																								BgL_auxz00_2125;
																							{
																								obj_t BgL_auxz00_2126;

																								{	/* Integrate/kk.scm 116 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_2127;
																									BgL_tmpz00_2127 =
																										((BgL_objectz00_bglt) (
																											(BgL_sfunz00_bglt)
																											BgL_gifunz00_1561));
																									BgL_auxz00_2126 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_2127);
																								}
																								BgL_auxz00_2125 =
																									((BgL_sfunzf2iinfozf2_bglt)
																									BgL_auxz00_2126);
																							}
																							BgL_arg1292z00_1576 =
																								(((BgL_sfunzf2iinfozf2_bglt)
																									COBJECT(BgL_auxz00_2125))->
																								BgL_kza2za2);
																						}
																						BgL_arg1291z00_1575 =
																							MAKE_YOUNG_PAIR(BgL_kz00_1569,
																							BgL_arg1292z00_1576);
																					}
																					{
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_auxz00_2134;
																						{
																							obj_t BgL_auxz00_2135;

																							{	/* Integrate/kk.scm 114 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_2136;
																								BgL_tmpz00_2136 =
																									((BgL_objectz00_bglt) (
																										(BgL_sfunz00_bglt)
																										BgL_gifunz00_1561));
																								BgL_auxz00_2135 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_2136);
																							}
																							BgL_auxz00_2134 =
																								((BgL_sfunzf2iinfozf2_bglt)
																								BgL_auxz00_2135);
																						}
																						((((BgL_sfunzf2iinfozf2_bglt)
																									COBJECT(BgL_auxz00_2134))->
																								BgL_kza2za2) =
																							((obj_t) BgL_arg1291z00_1575),
																							BUNSPEC);
																					}
																				}
																				{	/* Integrate/kk.scm 117 */
																					obj_t BgL_arg1295z00_1577;

																					BgL_arg1295z00_1577 =
																						CDR(((obj_t) BgL_ksz00_1564));
																					{
																						bool_t BgL_continuez00_2145;
																						obj_t BgL_ksz00_2144;

																						BgL_ksz00_2144 =
																							BgL_arg1295z00_1577;
																						BgL_continuez00_2145 = ((bool_t) 1);
																						BgL_continuez00_1565 =
																							BgL_continuez00_2145;
																						BgL_ksz00_1564 = BgL_ksz00_2144;
																						goto
																							BgL_zc3z04anonymousza31283ze3z87_1566;
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
				else
					{	/* Integrate/kk.scm 86 */
						return BgL_azd2tailzd2_8;
					}
			}
		}

	}



/* K*! */
	BGL_EXPORTED_DEF obj_t BGl_Kza2z12zb0zzintegrate_kkz00(obj_t
		BgL_azd2tailzd2_9)
	{
		{	/* Integrate/kk.scm 132 */
			{
				bool_t BgL_continuez00_1587;

				BgL_continuez00_1587 = ((bool_t) 1);
			BgL_zc3z04anonymousza31301ze3z87_1588:
				if (BgL_continuez00_1587)
					{
						obj_t BgL_atz00_1590;
						bool_t BgL_continuez00_1591;

						BgL_atz00_1590 = BgL_azd2tailzd2_9;
						BgL_continuez00_1591 = ((bool_t) 0);
					BgL_zc3z04anonymousza31302ze3z87_1592:
						if (NULLP(BgL_atz00_1590))
							{
								bool_t BgL_continuez00_2149;

								BgL_continuez00_2149 = BgL_continuez00_1591;
								BgL_continuez00_1587 = BgL_continuez00_2149;
								goto BgL_zc3z04anonymousza31301ze3z87_1588;
							}
						else
							{	/* Integrate/kk.scm 141 */
								BgL_valuez00_bglt BgL_ifunz00_1594;

								{
									BgL_variablez00_bglt BgL_auxz00_2150;

									{
										obj_t BgL_auxz00_2151;

										{	/* Integrate/kk.scm 141 */
											obj_t BgL_pairz00_1866;

											BgL_pairz00_1866 = CAR(((obj_t) BgL_atz00_1590));
											{	/* Integrate/kk.scm 141 */
												obj_t BgL_pairz00_1869;

												BgL_pairz00_1869 = CDR(BgL_pairz00_1866);
												BgL_auxz00_2151 = CAR(BgL_pairz00_1869);
											}
										}
										BgL_auxz00_2150 = ((BgL_variablez00_bglt) BgL_auxz00_2151);
									}
									BgL_ifunz00_1594 =
										(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_2150))->
										BgL_valuez00);
								}
								{	/* Integrate/kk.scm 142 */
									bool_t BgL_test1556z00_2158;

									{	/* Integrate/kk.scm 142 */
										obj_t BgL_arg1319z00_1616;

										{
											BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2159;

											{
												obj_t BgL_auxz00_2160;

												{	/* Integrate/kk.scm 142 */
													BgL_objectz00_bglt BgL_tmpz00_2161;

													BgL_tmpz00_2161 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_ifunz00_1594));
													BgL_auxz00_2160 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2161);
												}
												BgL_auxz00_2159 =
													((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2160);
											}
											BgL_arg1319z00_1616 =
												(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2159))->
												BgL_kza2za2);
										}
										BgL_test1556z00_2158 = NULLP(BgL_arg1319z00_1616);
									}
									if (BgL_test1556z00_2158)
										{
											bool_t BgL_continuez00_2168;

											BgL_continuez00_2168 = BgL_continuez00_1591;
											BgL_continuez00_1587 = BgL_continuez00_2168;
											goto BgL_zc3z04anonymousza31301ze3z87_1588;
										}
									else
										{	/* Integrate/kk.scm 144 */
											obj_t BgL_g1108z00_1597;

											{
												BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2169;

												{
													obj_t BgL_auxz00_2170;

													{	/* Integrate/kk.scm 144 */
														BgL_objectz00_bglt BgL_tmpz00_2171;

														BgL_tmpz00_2171 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_ifunz00_1594));
														BgL_auxz00_2170 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2171);
													}
													BgL_auxz00_2169 =
														((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2170);
												}
												BgL_g1108z00_1597 =
													(((BgL_sfunzf2iinfozf2_bglt)
														COBJECT(BgL_auxz00_2169))->BgL_kza2za2);
											}
											{
												obj_t BgL_ksz00_1599;
												bool_t BgL_continuez00_1600;

												BgL_ksz00_1599 = BgL_g1108z00_1597;
												BgL_continuez00_1600 = BgL_continuez00_1591;
											BgL_zc3z04anonymousza31306ze3z87_1601:
												if (NULLP(BgL_ksz00_1599))
													{	/* Integrate/kk.scm 147 */
														obj_t BgL_arg1308z00_1603;

														BgL_arg1308z00_1603 = CDR(((obj_t) BgL_atz00_1590));
														{
															bool_t BgL_continuez00_2182;
															obj_t BgL_atz00_2181;

															BgL_atz00_2181 = BgL_arg1308z00_1603;
															BgL_continuez00_2182 = BgL_continuez00_1600;
															BgL_continuez00_1591 = BgL_continuez00_2182;
															BgL_atz00_1590 = BgL_atz00_2181;
															goto BgL_zc3z04anonymousza31302ze3z87_1592;
														}
													}
												else
													{	/* Integrate/kk.scm 148 */
														obj_t BgL_fz00_1604;

														{	/* Integrate/kk.scm 148 */
															obj_t BgL_pairz00_1879;

															BgL_pairz00_1879 = CAR(((obj_t) BgL_atz00_1590));
															BgL_fz00_1604 = CAR(BgL_pairz00_1879);
														}
														{	/* Integrate/kk.scm 148 */
															BgL_valuez00_bglt BgL_fifunz00_1605;

															BgL_fifunz00_1605 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt) BgL_fz00_1604)))->
																BgL_valuez00);
															{	/* Integrate/kk.scm 149 */
																obj_t BgL_kz00_1606;

																BgL_kz00_1606 = CAR(((obj_t) BgL_ksz00_1599));
																{	/* Integrate/kk.scm 150 */

																	{	/* Integrate/kk.scm 151 */
																		bool_t BgL_test1559z00_2190;

																		{	/* Integrate/kk.scm 151 */
																			obj_t BgL_arg1316z00_1613;

																			{
																				BgL_sfunzf2iinfozf2_bglt
																					BgL_auxz00_2191;
																				{
																					obj_t BgL_auxz00_2192;

																					{	/* Integrate/kk.scm 151 */
																						BgL_objectz00_bglt BgL_tmpz00_2193;

																						BgL_tmpz00_2193 =
																							((BgL_objectz00_bglt)
																							((BgL_sfunz00_bglt)
																								BgL_fifunz00_1605));
																						BgL_auxz00_2192 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_2193);
																					}
																					BgL_auxz00_2191 =
																						((BgL_sfunzf2iinfozf2_bglt)
																						BgL_auxz00_2192);
																				}
																				BgL_arg1316z00_1613 =
																					(((BgL_sfunzf2iinfozf2_bglt)
																						COBJECT(BgL_auxz00_2191))->
																					BgL_kza2za2);
																			}
																			BgL_test1559z00_2190 =
																				CBOOL
																				(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_kz00_1606, BgL_arg1316z00_1613));
																		}
																		if (BgL_test1559z00_2190)
																			{	/* Integrate/kk.scm 152 */
																				obj_t BgL_arg1311z00_1609;

																				BgL_arg1311z00_1609 =
																					CDR(((obj_t) BgL_ksz00_1599));
																				{
																					obj_t BgL_ksz00_2203;

																					BgL_ksz00_2203 = BgL_arg1311z00_1609;
																					BgL_ksz00_1599 = BgL_ksz00_2203;
																					goto
																						BgL_zc3z04anonymousza31306ze3z87_1601;
																				}
																			}
																		else
																			{	/* Integrate/kk.scm 151 */
																				{	/* Integrate/kk.scm 156 */
																					obj_t BgL_arg1312z00_1610;

																					{	/* Integrate/kk.scm 156 */
																						obj_t BgL_arg1314z00_1611;

																						{
																							BgL_sfunzf2iinfozf2_bglt
																								BgL_auxz00_2204;
																							{
																								obj_t BgL_auxz00_2205;

																								{	/* Integrate/kk.scm 156 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_2206;
																									BgL_tmpz00_2206 =
																										((BgL_objectz00_bglt) (
																											(BgL_sfunz00_bglt)
																											BgL_fifunz00_1605));
																									BgL_auxz00_2205 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_2206);
																								}
																								BgL_auxz00_2204 =
																									((BgL_sfunzf2iinfozf2_bglt)
																									BgL_auxz00_2205);
																							}
																							BgL_arg1314z00_1611 =
																								(((BgL_sfunzf2iinfozf2_bglt)
																									COBJECT(BgL_auxz00_2204))->
																								BgL_kza2za2);
																						}
																						BgL_arg1312z00_1610 =
																							MAKE_YOUNG_PAIR(BgL_kz00_1606,
																							BgL_arg1314z00_1611);
																					}
																					{
																						BgL_sfunzf2iinfozf2_bglt
																							BgL_auxz00_2213;
																						{
																							obj_t BgL_auxz00_2214;

																							{	/* Integrate/kk.scm 154 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_2215;
																								BgL_tmpz00_2215 =
																									((BgL_objectz00_bglt) (
																										(BgL_sfunz00_bglt)
																										BgL_fifunz00_1605));
																								BgL_auxz00_2214 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_2215);
																							}
																							BgL_auxz00_2213 =
																								((BgL_sfunzf2iinfozf2_bglt)
																								BgL_auxz00_2214);
																						}
																						((((BgL_sfunzf2iinfozf2_bglt)
																									COBJECT(BgL_auxz00_2213))->
																								BgL_kza2za2) =
																							((obj_t) BgL_arg1312z00_1610),
																							BUNSPEC);
																					}
																				}
																				{	/* Integrate/kk.scm 157 */
																					obj_t BgL_arg1315z00_1612;

																					BgL_arg1315z00_1612 =
																						CDR(((obj_t) BgL_ksz00_1599));
																					{
																						bool_t BgL_continuez00_2224;
																						obj_t BgL_ksz00_2223;

																						BgL_ksz00_2223 =
																							BgL_arg1315z00_1612;
																						BgL_continuez00_2224 = ((bool_t) 1);
																						BgL_continuez00_1600 =
																							BgL_continuez00_2224;
																						BgL_ksz00_1599 = BgL_ksz00_2223;
																						goto
																							BgL_zc3z04anonymousza31306ze3z87_1601;
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
				else
					{	/* Integrate/kk.scm 135 */
						return BNIL;
					}
			}
		}

	}



/* &K*! */
	obj_t BGl_z62Kza2z12zd2zzintegrate_kkz00(obj_t BgL_envz00_1897,
		obj_t BgL_azd2tailzd2_1898)
	{
		{	/* Integrate/kk.scm 132 */
			return BGl_Kza2z12zb0zzintegrate_kkz00(BgL_azd2tailzd2_1898);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_kkz00()
	{
		{	/* Integrate/kk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_kkz00()
	{
		{	/* Integrate/kk.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_kkz00()
	{
		{	/* Integrate/kk.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_kkz00()
	{
		{	/* Integrate/kk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1528z00zzintegrate_kkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1528z00zzintegrate_kkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1528z00zzintegrate_kkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1528z00zzintegrate_kkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1528z00zzintegrate_kkz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1528z00zzintegrate_kkz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_az00(((long) 523633215),
				BSTRING_TO_STRING(BGl_string1528z00zzintegrate_kkz00));
		}

	}

#ifdef __cplusplus
}
#endif
