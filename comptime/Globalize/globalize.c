/*===========================================================================*/
/*   (Globalize/globalize.scm)                                               */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/globalize.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_efunctionsz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_globalzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		obj_t BgL_globalzd2closurezd2;
	}                        *BgL_globalzf2ginfozf2_bglt;


	extern obj_t BGl_setzd2kapturedz12zc0zzglobaliza7e_kaptureza7(obj_t);
	static obj_t BGl_objectzd2initzd2zzglobaliza7e_globaliza7ez00();
	extern obj_t
		BGl_setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75
		(BgL_globalz00_bglt, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_globaliza7ez00();
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(BgL_globalz00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_globaliza7ez00();
	static obj_t BGl_z62globaliza7ez12zd7zzglobaliza7e_globaliza7ez00(obj_t,
		obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_EXPORTED_DEF obj_t BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00 = BUNSPEC;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00 = BUNSPEC;
	extern BgL_globalz00_bglt
		BGl_localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96
		(BgL_localz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_globaliza7ez00 =
		BUNSPEC;
	extern BgL_globalz00_bglt
		BGl_globalzd2closurezd2zzglobaliza7e_globalzd2closurez75(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_globaliza7ez00();
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_globaliza7ez00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static bool_t BGl_verbzd2globaliza7ationz75zzglobaliza7e_globaliza7ez00();
	extern BgL_nodez00_bglt
		BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern obj_t
		BGl_setzd2integrationz12zc0zzglobaliza7e_integrationza7(BgL_globalz00_bglt,
		obj_t, obj_t, obj_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_gnza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DEF obj_t BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00 = BUNSPEC;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00();
	extern obj_t BGl_Gnz12z12zzglobaliza7e_gnza7(obj_t, BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1616z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string1616za700za7za7g1623za7, ": ", 2);
	      DEFINE_STRING(BGl_string1617z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string1617za700za7za7g1624za7, "        ", 8);
	      DEFINE_STRING(BGl_string1618z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string1618za700za7za7g1625za7, " ==>", 4);
	      DEFINE_STRING(BGl_string1619z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string1619za700za7za7g1626za7, "           ", 11);
	      DEFINE_STRING(BGl_string1620z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string1620za700za7za7g1627za7, " --> ", 5);
	      DEFINE_STRING(BGl_string1621z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string1621za700za7za7g1628za7, " -->", 4);
	      DEFINE_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00,
		BgL_bgl_string1622za700za7za7g1629za7, "globalize_globalize", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globaliza7ez12zd2envz67zzglobaliza7e_globaliza7ez00,
		BgL_bgl_za762globaliza7a7eza711630za7,
		BGl_z62globaliza7ez12zd7zzglobaliza7e_globaliza7ez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00));
		     ADD_ROOT((void *) (&BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzglobaliza7e_globaliza7ez00));
		     ADD_ROOT((void *) (&BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(long
		BgL_checksumz00_1997, char *BgL_fromz00_1998)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_globaliza7ez00))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_globaliza7ez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_globaliza7ez00();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00();
					return BGl_toplevelzd2initzd2zzglobaliza7e_globaliza7ez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00()
	{
		{	/* Globalize/globalize.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_globalize");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"globalize_globalize");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_globalize");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_globalize");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_globaliza7ez00()
	{
		{	/* Globalize/globalize.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_globaliza7ez00()
	{
		{	/* Globalize/globalize.scm 15 */
			BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00 = BNIL;
			BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00 = BNIL;
			return (BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00 = BNIL, BUNSPEC);
		}

	}



/* globalize! */
	BGL_EXPORTED_DEF obj_t
		BGl_globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(BgL_globalz00_bglt
		BgL_globalz00_3)
	{
		{	/* Globalize/globalize.scm 50 */
			if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
					BGl_za2verboseza2z00zzengine_paramz00))
				{	/* Globalize/globalize.scm 57 */
					obj_t BgL_arg1256z00_1670;

					BgL_arg1256z00_1670 =
						BGl_shapez00zztools_shapez00(((obj_t) BgL_globalz00_3));
					{	/* Globalize/globalize.scm 57 */
						obj_t BgL_list1257z00_1671;

						{	/* Globalize/globalize.scm 57 */
							obj_t BgL_arg1258z00_1672;

							{	/* Globalize/globalize.scm 57 */
								obj_t BgL_arg1263z00_1673;

								{	/* Globalize/globalize.scm 57 */
									obj_t BgL_arg1268z00_1674;

									BgL_arg1268z00_1674 =
										MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
									BgL_arg1263z00_1673 =
										MAKE_YOUNG_PAIR
										(BGl_string1616z00zzglobaliza7e_globaliza7ez00,
										BgL_arg1268z00_1674);
								}
								BgL_arg1258z00_1672 =
									MAKE_YOUNG_PAIR(BgL_arg1256z00_1670, BgL_arg1263z00_1673);
							}
							BgL_list1257z00_1671 =
								MAKE_YOUNG_PAIR(BGl_string1617z00zzglobaliza7e_globaliza7ez00,
								BgL_arg1258z00_1672);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
							BgL_list1257z00_1671);
				}}
			else
				{	/* Globalize/globalize.scm 57 */
					BUNSPEC;
				}
			{	/* Globalize/globalize.scm 58 */
				BgL_valuez00_bglt BgL_funz00_1675;

				BgL_funz00_1675 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_globalz00_3)))->BgL_valuez00);
				BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00 = BNIL;
				BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00 = BNIL;
				BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00 = BNIL;
				{	/* Globalize/globalize.scm 62 */
					obj_t BgL_arg1270z00_1676;
					obj_t BgL_arg1271z00_1677;

					BgL_arg1270z00_1676 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1675)))->BgL_argsz00);
					BgL_arg1271z00_1677 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1675)))->BgL_bodyz00);
					BGl_Gnz12z12zzglobaliza7e_gnza7(BgL_arg1270z00_1676,
						((BgL_nodez00_bglt) BgL_arg1271z00_1677),
						((BgL_variablez00_bglt) BgL_globalz00_3), BNIL);
				}
				BGl_setzd2integrationz12zc0zzglobaliza7e_integrationza7(BgL_globalz00_3,
					BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00,
					BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00,
					BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00);
				{	/* Globalize/globalize.scm 73 */
					obj_t BgL_gz00_1678;

					{
						obj_t BgL_g1z00_1704;
						obj_t BgL_gz00_1705;

						BgL_g1z00_1704 = BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00;
						BgL_gz00_1705 = BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00;
					BgL_zc3z04anonymousza31290ze3z87_1706:
						if (NULLP(BgL_g1z00_1704))
							{	/* Globalize/globalize.scm 76 */
								BgL_gz00_1678 = BgL_gz00_1705;
							}
						else
							{	/* Globalize/globalize.scm 78 */
								bool_t BgL_test1634z00_2035;

								{	/* Globalize/globalize.scm 78 */
									obj_t BgL_arg1303z00_1716;

									{	/* Globalize/globalize.scm 78 */
										BgL_sfunz00_bglt BgL_oz00_1963;

										BgL_oz00_1963 =
											((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt)
																CAR(
																	((obj_t) BgL_g1z00_1704))))))->BgL_valuez00));
										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2042;

											{
												obj_t BgL_auxz00_2043;

												{	/* Globalize/globalize.scm 78 */
													BgL_objectz00_bglt BgL_tmpz00_2044;

													BgL_tmpz00_2044 =
														((BgL_objectz00_bglt) BgL_oz00_1963);
													BgL_auxz00_2043 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2044);
												}
												BgL_auxz00_2042 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2043);
											}
											BgL_arg1303z00_1716 =
												(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2042))->
												BgL_integratorz00);
										}
									}
									BgL_test1634z00_2035 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1303z00_1716,
										BGl_variablez00zzast_varz00);
								}
								if (BgL_test1634z00_2035)
									{	/* Globalize/globalize.scm 79 */
										obj_t BgL_arg1298z00_1712;

										BgL_arg1298z00_1712 = CDR(((obj_t) BgL_g1z00_1704));
										{
											obj_t BgL_g1z00_2052;

											BgL_g1z00_2052 = BgL_arg1298z00_1712;
											BgL_g1z00_1704 = BgL_g1z00_2052;
											goto BgL_zc3z04anonymousza31290ze3z87_1706;
										}
									}
								else
									{	/* Globalize/globalize.scm 81 */
										obj_t BgL_arg1299z00_1713;
										obj_t BgL_arg1300z00_1714;

										BgL_arg1299z00_1713 = CDR(((obj_t) BgL_g1z00_1704));
										{	/* Globalize/globalize.scm 81 */
											obj_t BgL_arg1301z00_1715;

											BgL_arg1301z00_1715 = CAR(((obj_t) BgL_g1z00_1704));
											BgL_arg1300z00_1714 =
												MAKE_YOUNG_PAIR(BgL_arg1301z00_1715, BgL_gz00_1705);
										}
										{
											obj_t BgL_gz00_2059;
											obj_t BgL_g1z00_2058;

											BgL_g1z00_2058 = BgL_arg1299z00_1713;
											BgL_gz00_2059 = BgL_arg1300z00_1714;
											BgL_gz00_1705 = BgL_gz00_2059;
											BgL_g1z00_1704 = BgL_g1z00_2058;
											goto BgL_zc3z04anonymousza31290ze3z87_1706;
										}
									}
							}
					}
					BGl_verbzd2globaliza7ationz75zzglobaliza7e_globaliza7ez00();
					BGl_setzd2globaliza7edzd2newzd2bodiesz12z67zzglobaliza7e_newzd2bodyz75
						(BgL_globalz00_3, BgL_gz00_1678);
					BGl_setzd2kapturedz12zc0zzglobaliza7e_kaptureza7(BgL_gz00_1678);
					{	/* Globalize/globalize.scm 91 */
						obj_t BgL_g1110z00_1679;

						{	/* Globalize/globalize.scm 92 */
							bool_t BgL_test1635z00_2063;

							{
								BgL_globalzf2ginfozf2_bglt BgL_auxz00_2064;

								{
									obj_t BgL_auxz00_2065;

									{	/* Globalize/globalize.scm 92 */
										BgL_objectz00_bglt BgL_tmpz00_2066;

										BgL_tmpz00_2066 =
											((BgL_objectz00_bglt)
											((BgL_globalz00_bglt) BgL_globalz00_3));
										BgL_auxz00_2065 = BGL_OBJECT_WIDENING(BgL_tmpz00_2066);
									}
									BgL_auxz00_2064 =
										((BgL_globalzf2ginfozf2_bglt) BgL_auxz00_2065);
								}
								BgL_test1635z00_2063 =
									(((BgL_globalzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2064))->
									BgL_escapezf3zf3);
							}
							if (BgL_test1635z00_2063)
								{	/* Globalize/globalize.scm 93 */
									BgL_globalz00_bglt BgL_cloz00_1693;

									{	/* Globalize/globalize.scm 94 */
										obj_t BgL_arg1287z00_1700;

										BgL_arg1287z00_1700 =
											(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														(((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt) BgL_funz00_1675)))->
															BgL_bodyz00))))->BgL_locz00);
										BgL_cloz00_1693 =
											BGl_globalzd2closurezd2zzglobaliza7e_globalzd2closurez75
											(BgL_globalz00_3, BgL_arg1287z00_1700);
									}
									{	/* Globalize/globalize.scm 95 */
										bool_t BgL_test1636z00_2077;

										if (BGl_globalzd2optionalzf3z21zzast_varz00(
												((obj_t) BgL_globalz00_3)))
											{	/* Globalize/globalize.scm 95 */
												BgL_test1636z00_2077 = ((bool_t) 1);
											}
										else
											{	/* Globalize/globalize.scm 95 */
												BgL_test1636z00_2077 =
													BGl_globalzd2keyzf3z21zzast_varz00(
													((obj_t) BgL_globalz00_3));
											}
										if (BgL_test1636z00_2077)
											{	/* Globalize/globalize.scm 101 */
												obj_t BgL_list1284z00_1696;

												BgL_list1284z00_1696 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_globalz00_3), BNIL);
												BgL_g1110z00_1679 = BgL_list1284z00_1696;
											}
										else
											{	/* Globalize/globalize.scm 102 */
												obj_t BgL_list1285z00_1697;

												{	/* Globalize/globalize.scm 102 */
													obj_t BgL_arg1286z00_1698;

													BgL_arg1286z00_1698 =
														MAKE_YOUNG_PAIR(((obj_t) BgL_globalz00_3), BNIL);
													BgL_list1285z00_1697 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_cloz00_1693), BgL_arg1286z00_1698);
												}
												BgL_g1110z00_1679 = BgL_list1285z00_1697;
											}
									}
								}
							else
								{	/* Globalize/globalize.scm 103 */
									obj_t BgL_list1289z00_1702;

									BgL_list1289z00_1702 =
										MAKE_YOUNG_PAIR(((obj_t) BgL_globalz00_3), BNIL);
									BgL_g1110z00_1679 = BgL_list1289z00_1702;
								}
						}
						{
							obj_t BgL_gz00_1681;
							obj_t BgL_newzd2gzd2_1682;

							BgL_gz00_1681 = BgL_gz00_1678;
							BgL_newzd2gzd2_1682 = BgL_g1110z00_1679;
						BgL_zc3z04anonymousza31272ze3z87_1683:
							if (NULLP(BgL_gz00_1681))
								{	/* Globalize/globalize.scm 106 */
									BgL_nodez00_bglt BgL_bodyz00_1685;

									{	/* Globalize/globalize.scm 106 */
										obj_t BgL_arg1274z00_1686;

										BgL_arg1274z00_1686 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_1675)))->BgL_bodyz00);
										BgL_bodyz00_1685 =
											BGl_nodezd2globaliza7ez12z67zzglobaliza7e_nodeza7(
											((BgL_nodez00_bglt) BgL_arg1274z00_1686),
											((BgL_variablez00_bglt) BgL_globalz00_3), BNIL);
									}
									((((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_funz00_1675)))->BgL_bodyz00) =
										((obj_t) ((obj_t) BgL_bodyz00_1685)), BUNSPEC);
									return BgL_newzd2gzd2_1682;
								}
							else
								{	/* Globalize/globalize.scm 110 */
									obj_t BgL_arg1275z00_1687;
									obj_t BgL_arg1276z00_1688;

									BgL_arg1275z00_1687 = CDR(((obj_t) BgL_gz00_1681));
									{	/* Globalize/globalize.scm 110 */
										BgL_globalz00_bglt BgL_arg1277z00_1689;

										{	/* Globalize/globalize.scm 110 */
											obj_t BgL_arg1280z00_1690;

											BgL_arg1280z00_1690 = CAR(((obj_t) BgL_gz00_1681));
											BgL_arg1277z00_1689 =
												BGl_localzd2ze3globalz31zzglobaliza7e_localzd2ze3globalz96
												(((BgL_localz00_bglt) BgL_arg1280z00_1690));
										}
										BgL_arg1276z00_1688 =
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_arg1277z00_1689), BgL_newzd2gzd2_1682);
									}
									{
										obj_t BgL_newzd2gzd2_2110;
										obj_t BgL_gz00_2109;

										BgL_gz00_2109 = BgL_arg1275z00_1687;
										BgL_newzd2gzd2_2110 = BgL_arg1276z00_1688;
										BgL_newzd2gzd2_1682 = BgL_newzd2gzd2_2110;
										BgL_gz00_1681 = BgL_gz00_2109;
										goto BgL_zc3z04anonymousza31272ze3z87_1683;
									}
								}
						}
					}
				}
			}
		}

	}



/* &globalize! */
	obj_t BGl_z62globaliza7ez12zd7zzglobaliza7e_globaliza7ez00(obj_t
		BgL_envz00_1995, obj_t BgL_globalz00_1996)
	{
		{	/* Globalize/globalize.scm 50 */
			return
				BGl_globaliza7ez12zb5zzglobaliza7e_globaliza7ez00(
				((BgL_globalz00_bglt) BgL_globalz00_1996));
		}

	}



/* verb-globalization */
	bool_t BGl_verbzd2globaliza7ationz75zzglobaliza7e_globaliza7ez00()
	{
		{	/* Globalize/globalize.scm 115 */
			{
				obj_t BgL_l1244z00_1721;

				BgL_l1244z00_1721 = BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00;
			BgL_zc3z04anonymousza31307ze3z87_1722:
				if (PAIRP(BgL_l1244z00_1721))
					{	/* Globalize/globalize.scm 116 */
						{	/* Globalize/globalize.scm 117 */
							obj_t BgL_localz00_1724;

							BgL_localz00_1724 = CAR(BgL_l1244z00_1721);
							if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
									BGl_za2verboseza2z00zzengine_paramz00))
								{	/* Globalize/globalize.scm 117 */
									if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
											BGl_za2verboseza2z00zzengine_paramz00))
										{	/* Globalize/globalize.scm 117 */
											obj_t BgL_arg1311z00_1729;

											BgL_arg1311z00_1729 =
												BGl_shapez00zztools_shapez00(BgL_localz00_1724);
											{	/* Globalize/globalize.scm 117 */
												obj_t BgL_list1312z00_1730;

												{	/* Globalize/globalize.scm 117 */
													obj_t BgL_arg1314z00_1731;

													{	/* Globalize/globalize.scm 117 */
														obj_t BgL_arg1315z00_1732;

														{	/* Globalize/globalize.scm 117 */
															obj_t BgL_arg1316z00_1733;

															BgL_arg1316z00_1733 =
																MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
																BNIL);
															BgL_arg1315z00_1732 =
																MAKE_YOUNG_PAIR
																(BGl_string1618z00zzglobaliza7e_globaliza7ez00,
																BgL_arg1316z00_1733);
														}
														BgL_arg1314z00_1731 =
															MAKE_YOUNG_PAIR(BgL_arg1311z00_1729,
															BgL_arg1315z00_1732);
													}
													BgL_list1312z00_1730 =
														MAKE_YOUNG_PAIR
														(BGl_string1619z00zzglobaliza7e_globaliza7ez00,
														BgL_arg1314z00_1731);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
													BgL_list1312z00_1730);
										}}
									else
										{	/* Globalize/globalize.scm 117 */
											BUNSPEC;
										}
								}
							else
								{	/* Globalize/globalize.scm 117 */
									BFALSE;
								}
						}
						{
							obj_t BgL_l1244z00_2130;

							BgL_l1244z00_2130 = CDR(BgL_l1244z00_1721);
							BgL_l1244z00_1721 = BgL_l1244z00_2130;
							goto BgL_zc3z04anonymousza31307ze3z87_1722;
						}
					}
				else
					{	/* Globalize/globalize.scm 116 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l1247z00_1737;

				BgL_l1247z00_1737 = BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00;
			BgL_zc3z04anonymousza31318ze3z87_1738:
				if (PAIRP(BgL_l1247z00_1737))
					{	/* Globalize/globalize.scm 119 */
						{	/* Globalize/globalize.scm 120 */
							obj_t BgL_localz00_1740;

							BgL_localz00_1740 = CAR(BgL_l1247z00_1737);
							{	/* Globalize/globalize.scm 120 */
								BgL_valuez00_bglt BgL_sfunzf2ginfozf2_1741;

								BgL_sfunzf2ginfozf2_1741 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt) BgL_localz00_1740))))->
									BgL_valuez00);
								{	/* Globalize/globalize.scm 121 */
									bool_t BgL_test1644z00_2138;

									{	/* Globalize/globalize.scm 121 */
										obj_t BgL_arg1351z00_1765;

										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2139;

											{
												obj_t BgL_auxz00_2140;

												{	/* Globalize/globalize.scm 121 */
													BgL_objectz00_bglt BgL_tmpz00_2141;

													BgL_tmpz00_2141 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_sfunzf2ginfozf2_1741));
													BgL_auxz00_2140 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2141);
												}
												BgL_auxz00_2139 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2140);
											}
											BgL_arg1351z00_1765 =
												(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_2139))->
												BgL_integratorz00);
										}
										BgL_test1644z00_2138 =
											BGl_isazf3zf3zz__objectz00(BgL_arg1351z00_1765,
											BGl_localz00zzast_varz00);
									}
									if (BgL_test1644z00_2138)
										{	/* Globalize/globalize.scm 121 */
											if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
													BGl_za2verboseza2z00zzengine_paramz00))
												{	/* Globalize/globalize.scm 122 */
													if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long)
																	3)), BGl_za2verboseza2z00zzengine_paramz00))
														{	/* Globalize/globalize.scm 123 */
															obj_t BgL_arg1326z00_1748;
															obj_t BgL_arg1327z00_1749;

															BgL_arg1326z00_1748 =
																BGl_shapez00zztools_shapez00(BgL_localz00_1740);
															{	/* Globalize/globalize.scm 125 */
																obj_t BgL_arg1335z00_1755;

																{
																	BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2155;

																	{
																		obj_t BgL_auxz00_2156;

																		{	/* Globalize/globalize.scm 125 */
																			BgL_objectz00_bglt BgL_tmpz00_2157;

																			BgL_tmpz00_2157 =
																				((BgL_objectz00_bglt)
																				((BgL_sfunz00_bglt)
																					BgL_sfunzf2ginfozf2_1741));
																			BgL_auxz00_2156 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2157);
																		}
																		BgL_auxz00_2155 =
																			((BgL_sfunzf2ginfozf2_bglt)
																			BgL_auxz00_2156);
																	}
																	BgL_arg1335z00_1755 =
																		(((BgL_sfunzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_2155))->
																		BgL_integratorz00);
																}
																BgL_arg1327z00_1749 =
																	BGl_shapez00zztools_shapez00
																	(BgL_arg1335z00_1755);
															}
															{	/* Globalize/globalize.scm 122 */
																obj_t BgL_list1328z00_1750;

																{	/* Globalize/globalize.scm 122 */
																	obj_t BgL_arg1329z00_1751;

																	{	/* Globalize/globalize.scm 122 */
																		obj_t BgL_arg1330z00_1752;

																		{	/* Globalize/globalize.scm 122 */
																			obj_t BgL_arg1331z00_1753;

																			{	/* Globalize/globalize.scm 122 */
																				obj_t BgL_arg1334z00_1754;

																				BgL_arg1334z00_1754 =
																					MAKE_YOUNG_PAIR(BCHAR(((unsigned char)
																							10)), BNIL);
																				BgL_arg1331z00_1753 =
																					MAKE_YOUNG_PAIR(BgL_arg1327z00_1749,
																					BgL_arg1334z00_1754);
																			}
																			BgL_arg1330z00_1752 =
																				MAKE_YOUNG_PAIR
																				(BGl_string1620z00zzglobaliza7e_globaliza7ez00,
																				BgL_arg1331z00_1753);
																		}
																		BgL_arg1329z00_1751 =
																			MAKE_YOUNG_PAIR(BgL_arg1326z00_1748,
																			BgL_arg1330z00_1752);
																	}
																	BgL_list1328z00_1750 =
																		MAKE_YOUNG_PAIR
																		(BGl_string1619z00zzglobaliza7e_globaliza7ez00,
																		BgL_arg1329z00_1751);
																}
																BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
																	BgL_list1328z00_1750);
														}}
													else
														{	/* Globalize/globalize.scm 122 */
															BUNSPEC;
														}
												}
											else
												{	/* Globalize/globalize.scm 122 */
													BFALSE;
												}
										}
									else
										{	/* Globalize/globalize.scm 121 */
											if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long) 3)),
													BGl_za2verboseza2z00zzengine_paramz00))
												{	/* Globalize/globalize.scm 127 */
													if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(((long)
																	3)), BGl_za2verboseza2z00zzengine_paramz00))
														{	/* Globalize/globalize.scm 127 */
															obj_t BgL_arg1344z00_1760;

															BgL_arg1344z00_1760 =
																BGl_shapez00zztools_shapez00(BgL_localz00_1740);
															{	/* Globalize/globalize.scm 127 */
																obj_t BgL_list1345z00_1761;

																{	/* Globalize/globalize.scm 127 */
																	obj_t BgL_arg1346z00_1762;

																	{	/* Globalize/globalize.scm 127 */
																		obj_t BgL_arg1347z00_1763;

																		{	/* Globalize/globalize.scm 127 */
																			obj_t BgL_arg1348z00_1764;

																			BgL_arg1348z00_1764 =
																				MAKE_YOUNG_PAIR(BCHAR(((unsigned char)
																						10)), BNIL);
																			BgL_arg1347z00_1763 =
																				MAKE_YOUNG_PAIR
																				(BGl_string1621z00zzglobaliza7e_globaliza7ez00,
																				BgL_arg1348z00_1764);
																		}
																		BgL_arg1346z00_1762 =
																			MAKE_YOUNG_PAIR(BgL_arg1344z00_1760,
																			BgL_arg1347z00_1763);
																	}
																	BgL_list1345z00_1761 =
																		MAKE_YOUNG_PAIR
																		(BGl_string1619z00zzglobaliza7e_globaliza7ez00,
																		BgL_arg1346z00_1762);
																}
																BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
																	BgL_list1345z00_1761);
														}}
													else
														{	/* Globalize/globalize.scm 127 */
															BUNSPEC;
														}
												}
											else
												{	/* Globalize/globalize.scm 127 */
													BFALSE;
												}
										}
								}
							}
						}
						{
							obj_t BgL_l1247z00_2186;

							BgL_l1247z00_2186 = CDR(BgL_l1247z00_1737);
							BgL_l1247z00_1737 = BgL_l1247z00_2186;
							goto BgL_zc3z04anonymousza31318ze3z87_1738;
						}
					}
				else
					{	/* Globalize/globalize.scm 119 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_globaliza7ez00()
	{
		{	/* Globalize/globalize.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_globaliza7ez00()
	{
		{	/* Globalize/globalize.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_globaliza7ez00()
	{
		{	/* Globalize/globalize.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_globaliza7ez00()
	{
		{	/* Globalize/globalize.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_nodeza7(((long) 2706140),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_freeza7(((long) 244215773),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(((long)
					459830974),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_gnza7(((long) 13532663),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_integrationza7(((long)
					395399105),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_newzd2bodyz75(((long)
					420013989),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_localzd2ze3globalz96(((long)
					115338088),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_globalzd2closurez75(((long)
					62222057),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
			return BGl_modulezd2initializa7ationz75zzast_checkzd2sharingzd2(((long)
					88839818),
				BSTRING_TO_STRING(BGl_string1622z00zzglobaliza7e_globaliza7ez00));
		}

	}

#ifdef __cplusplus
}
#endif
