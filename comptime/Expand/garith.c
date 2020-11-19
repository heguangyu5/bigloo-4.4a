/*===========================================================================*/
/*   (Expand/garith.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/garith.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_garithmetiquez00();
	BGL_IMPORT obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_garithmetiquez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_garithmetiquez00();
	extern obj_t BGl_za2arithmeticzd2overflowza2zd2zzengine_paramz00;
	static bool_t BGl_expandzd2gzd2numberzf3zf3zzexpand_garithmetiquez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gmaxzd2zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2gzc3zd3zc2zzexpand_garithmetiquez00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_garithmetiquez00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2gze3zd3ze2zzexpand_garithmetiquez00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2gzc3zd3za0zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2gze3zd3z80zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2gza2z12zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2gzb2z02zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2gzd2z62zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2gzf2z42zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2gzc3z73zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2gzd3z63zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2gze3z53zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_garithmetiquez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gminzd2zzexpand_garithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2gmaxzb0zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_fxze70ze7zzexpand_garithmetiquez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gza2z70zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gzb2z60zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gzd2z00zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gzf2z20zzexpand_garithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_expandzd2g2zd2zzexpand_garithmetiquez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gzc3z11zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gzd3z01zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2gze3z31zzexpand_garithmetiquez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62expandzd2gminzb0zzexpand_garithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_garithmetiquez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzexpand_garithmetiquez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_garithmetiquez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_garithmetiquez00();
	static obj_t __cnst[29];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gza2zd2envza2zzexpand_garithmetiquez00,
		BgL_bgl_za762expandza7d2gza7a22339za7,
		BGl_z62expandzd2gza2z12zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_zd2zd2envz00zz__r4_numbers_6_5z00;
	BGL_IMPORT obj_t BGl_zd3zd2envz01zz__r4_numbers_6_5z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzb2zd2envzb2zzexpand_garithmetiquez00,
		BgL_bgl_za762expandza7d2gza7b22340za7,
		BGl_z62expandzd2gzb2z02zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2326z00zzexpand_garithmetiquez00,
		BgL_bgl_string2326za700za7za7e2341za7, "=", 1);
	      DEFINE_STRING(BGl_string2327z00zzexpand_garithmetiquez00,
		BgL_bgl_string2327za700za7za7e2342za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2328z00zzexpand_garithmetiquez00,
		BgL_bgl_string2328za700za7za7e2343za7, "<", 1);
	      DEFINE_STRING(BGl_string2329z00zzexpand_garithmetiquez00,
		BgL_bgl_string2329za700za7za7e2344za7, ">", 1);
	      DEFINE_STRING(BGl_string2330z00zzexpand_garithmetiquez00,
		BgL_bgl_string2330za700za7za7e2345za7, "<=", 2);
	      DEFINE_STRING(BGl_string2331z00zzexpand_garithmetiquez00,
		BgL_bgl_string2331za700za7za7e2346za7, ">=", 2);
	      DEFINE_STRING(BGl_string2332z00zzexpand_garithmetiquez00,
		BgL_bgl_string2332za700za7za7e2347za7,
		"Incorrect number of arguments for `max'", 39);
	      DEFINE_STRING(BGl_string2333z00zzexpand_garithmetiquez00,
		BgL_bgl_string2333za700za7za7e2348za7,
		"Incorrect number of arguments for `min'", 39);
	      DEFINE_STRING(BGl_string2334z00zzexpand_garithmetiquez00,
		BgL_bgl_string2334za700za7za7e2349za7, "expand_garithmetique", 20);
	      DEFINE_STRING(BGl_string2335z00zzexpand_garithmetiquez00,
		BgL_bgl_string2335za700za7za7e2350za7,
		"min 2min max let 2max x >= 2>= <= 2<= > 2> < 2< and = 2= 2/ * - + fx fx-safe (+ - / *) y expand-g-number? if fixnum? |2| ",
		121);
	BGL_IMPORT obj_t BGl_ze3zd2envz31zz__r4_numbers_6_5z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzc3zd2envzc3zzexpand_garithmetiquez00,
		BgL_bgl_za762expandza7d2gza7c32351za7,
		BGl_z62expandzd2gzc3z73zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzd2zd2envzd2zzexpand_garithmetiquez00,
		BgL_bgl_za762expandza7d2gza7d22352za7,
		BGl_z62expandzd2gzd2z62zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzd3zd2envzd3zzexpand_garithmetiquez00,
		BgL_bgl_za762expandza7d2gza7d32353za7,
		BGl_z62expandzd2gzd3z63zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gze3zd2envze3zzexpand_garithmetiquez00,
		BgL_bgl_za762expandza7d2gza7e32354za7,
		BGl_z62expandzd2gze3z53zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzf2zd2envzf2zzexpand_garithmetiquez00,
		BgL_bgl_za762expandza7d2gza7f22355za7,
		BGl_z62expandzd2gzf2z42zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_zc3zd3zd2envzc2zz__r4_numbers_6_5z00;
	BGL_IMPORT obj_t BGl_ze3zd3zd2envze2zz__r4_numbers_6_5z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gminzd2envz00zzexpand_garithmetiquez00,
		BgL_bgl_za762expandza7d2gmin2356z00,
		BGl_z62expandzd2gminzb0zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gmaxzd2envz00zzexpand_garithmetiquez00,
		BgL_bgl_za762expandza7d2gmax2357z00,
		BGl_z62expandzd2gmaxzb0zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gzc3zd3zd2envz10zzexpand_garithmetiquez00,
		BgL_bgl_za762expandza7d2gza7c32358za7,
		BGl_z62expandzd2gzc3zd3za0zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_za2zd2envz70zz__r4_numbers_6_5z00;
	BGL_IMPORT obj_t BGl_zb2zd2envz60zz__r4_numbers_6_5z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2gze3zd3zd2envz30zzexpand_garithmetiquez00,
		BgL_bgl_za762expandza7d2gza7e32359za7,
		BGl_z62expandzd2gze3zd3z80zzexpand_garithmetiquez00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_zc3zd2envz11zz__r4_numbers_6_5z00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzexpand_garithmetiquez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzexpand_garithmetiquez00(long
		BgL_checksumz00_1629, char *BgL_fromz00_1630)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_garithmetiquez00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_garithmetiquez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_garithmetiquez00();
					BGl_libraryzd2moduleszd2initz00zzexpand_garithmetiquez00();
					BGl_cnstzd2initzd2zzexpand_garithmetiquez00();
					BGl_importedzd2moduleszd2initz00zzexpand_garithmetiquez00();
					return BGl_methodzd2initzd2zzexpand_garithmetiquez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_garithmetiquez00()
	{
		{	/* Expand/garith.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_garithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"expand_garithmetique");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"expand_garithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_garithmetique");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_garithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_garithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_garithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"expand_garithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"expand_garithmetique");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_garithmetiquez00()
	{
		{	/* Expand/garith.scm 15 */
			{	/* Expand/garith.scm 15 */
				obj_t BgL_cportz00_1616;

				{	/* Expand/garith.scm 15 */
					obj_t BgL_stringz00_1624;

					BgL_stringz00_1624 = BGl_string2335z00zzexpand_garithmetiquez00;
					{	/* Expand/garith.scm 15 */
						obj_t BgL_startz00_1625;

						BgL_startz00_1625 = BINT(((long) 0));
						{	/* Expand/garith.scm 15 */
							obj_t BgL_endz00_1626;

							BgL_endz00_1626 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1624)));
							{	/* Expand/garith.scm 15 */

								BgL_cportz00_1616 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1624, BgL_startz00_1625, BgL_endz00_1626);
				}}}}
				{
					long BgL_iz00_1617;

					BgL_iz00_1617 = ((long) 28);
				BgL_loopz00_1618:
					if ((BgL_iz00_1617 == ((long) -1)))
						{	/* Expand/garith.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/garith.scm 15 */
							{	/* Expand/garith.scm 15 */
								obj_t BgL_arg2337z00_1620;

								{	/* Expand/garith.scm 15 */

									{	/* Expand/garith.scm 15 */
										obj_t BgL_locationz00_1622;

										BgL_locationz00_1622 = BBOOL(((bool_t) 0));
										{	/* Expand/garith.scm 15 */

											BgL_arg2337z00_1620 =
												BGl_readz00zz__readerz00(BgL_cportz00_1616,
												BgL_locationz00_1622);
										}
									}
								}
								{	/* Expand/garith.scm 15 */
									int BgL_tmpz00_1657;

									BgL_tmpz00_1657 = (int) (BgL_iz00_1617);
									CNST_TABLE_SET(BgL_tmpz00_1657, BgL_arg2337z00_1620);
							}}
							{	/* Expand/garith.scm 15 */
								int BgL_auxz00_1623;

								BgL_auxz00_1623 = (int) ((BgL_iz00_1617 - ((long) 1)));
								{
									long BgL_iz00_1662;

									BgL_iz00_1662 = (long) (BgL_auxz00_1623);
									BgL_iz00_1617 = BgL_iz00_1662;
									goto BgL_loopz00_1618;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_garithmetiquez00()
	{
		{	/* Expand/garith.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* expand-g-number? */
	bool_t BGl_expandzd2gzd2numberzf3zf3zzexpand_garithmetiquez00(obj_t
		BgL_xz00_3)
	{
		{	/* Expand/garith.scm 32 */
			{	/* Expand/garith.scm 33 */
				bool_t BgL__ortest_1012z00_37;

				BgL__ortest_1012z00_37 = INTEGERP(BgL_xz00_3);
				if (BgL__ortest_1012z00_37)
					{	/* Expand/garith.scm 33 */
						return BgL__ortest_1012z00_37;
					}
				else
					{	/* Expand/garith.scm 33 */
						bool_t BgL__ortest_1013z00_38;

						BgL__ortest_1013z00_38 = REALP(BgL_xz00_3);
						if (BgL__ortest_1013z00_38)
							{	/* Expand/garith.scm 33 */
								return BgL__ortest_1013z00_38;
							}
						else
							{	/* Expand/garith.scm 33 */
								bool_t BgL__ortest_1014z00_39;

								BgL__ortest_1014z00_39 = BGL_UINT32P(BgL_xz00_3);
								if (BgL__ortest_1014z00_39)
									{	/* Expand/garith.scm 33 */
										return BgL__ortest_1014z00_39;
									}
								else
									{	/* Expand/garith.scm 33 */
										return BGL_INT32P(BgL_xz00_3);
									}
							}
					}
			}
		}

	}



/* expand-g2 */
	obj_t BGl_expandzd2g2zd2zzexpand_garithmetiquez00(obj_t BgL_xz00_4,
		obj_t BgL_ez00_5, obj_t BgL_opz00_6)
	{
		{	/* Expand/garith.scm 38 */
			{
				obj_t BgL_idz00_43;
				obj_t BgL_az00_44;
				obj_t BgL_bz00_45;
				obj_t BgL_idz00_47;
				obj_t BgL_az00_48;
				obj_t BgL_bz00_49;
				obj_t BgL_idz00_51;
				obj_t BgL_az00_52;
				obj_t BgL_bz00_53;

				if (PAIRP(BgL_xz00_4))
					{	/* Expand/garith.scm 45 */
						obj_t BgL_cdrzd2111zd2_57;

						BgL_cdrzd2111zd2_57 = CDR(BgL_xz00_4);
						if (PAIRP(BgL_cdrzd2111zd2_57))
							{	/* Expand/garith.scm 45 */
								obj_t BgL_cdrzd2114zd2_59;

								BgL_cdrzd2114zd2_59 = CDR(BgL_cdrzd2111zd2_57);
								if (BGl_expandzd2gzd2numberzf3zf3zzexpand_garithmetiquez00(CAR
										(BgL_cdrzd2111zd2_57)))
									{	/* Expand/garith.scm 45 */
										if (PAIRP(BgL_cdrzd2114zd2_59))
											{	/* Expand/garith.scm 45 */
												obj_t BgL_carzd2115zd2_63;

												BgL_carzd2115zd2_63 = CAR(BgL_cdrzd2114zd2_59);
												if (PAIRP(BgL_carzd2115zd2_63))
													{	/* Expand/garith.scm 45 */
														obj_t BgL_cdrzd2118zd2_65;

														BgL_cdrzd2118zd2_65 = CDR(BgL_carzd2115zd2_63);
														if (
															(CAR(BgL_carzd2115zd2_63) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Expand/garith.scm 45 */
																if (PAIRP(BgL_cdrzd2118zd2_65))
																	{	/* Expand/garith.scm 45 */
																		if (
																			(CAR(BgL_cdrzd2118zd2_65) ==
																				CNST_TABLE_REF(((long) 4))))
																			{	/* Expand/garith.scm 45 */
																				if (NULLP(CDR(BgL_cdrzd2118zd2_65)))
																					{	/* Expand/garith.scm 45 */
																						if (NULLP(CDR(BgL_cdrzd2114zd2_59)))
																							{	/* Expand/garith.scm 45 */
																								return
																									apply(BgL_opz00_6,
																									BgL_xz00_4);
																							}
																						else
																							{	/* Expand/garith.scm 45 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Expand/garith.scm 45 */
																						obj_t BgL_cdrzd2150zd2_77;

																						BgL_cdrzd2150zd2_77 =
																							CDR(BgL_xz00_4);
																						{	/* Expand/garith.scm 45 */
																							obj_t BgL_carzd2155zd2_78;
																							obj_t BgL_cdrzd2156zd2_79;

																							BgL_carzd2155zd2_78 =
																								CAR(
																								((obj_t) BgL_cdrzd2150zd2_77));
																							BgL_cdrzd2156zd2_79 =
																								CDR(
																								((obj_t) BgL_cdrzd2150zd2_77));
																							if (INTEGERP(BgL_carzd2155zd2_78))
																								{	/* Expand/garith.scm 45 */
																									obj_t BgL_carzd2160zd2_81;

																									BgL_carzd2160zd2_81 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2156zd2_79));
																									if (SYMBOLP
																										(BgL_carzd2160zd2_81))
																										{	/* Expand/garith.scm 45 */
																											if (NULLP(CDR(
																														((obj_t)
																															BgL_cdrzd2156zd2_79))))
																												{	/* Expand/garith.scm 45 */
																													BgL_idz00_43 =
																														CAR(BgL_xz00_4);
																													BgL_az00_44 =
																														BgL_carzd2155zd2_78;
																													BgL_bz00_45 =
																														BgL_carzd2160zd2_81;
																												BgL_tagzd2102zd2_46:
																													{	/* Expand/garith.scm 49 */
																														obj_t BgL_nxz00_456;

																														{	/* Expand/garith.scm 49 */
																															obj_t
																																BgL_arg1634z00_457;
																															{	/* Expand/garith.scm 49 */
																																obj_t
																																	BgL_arg1639z00_458;
																																obj_t
																																	BgL_arg1640z00_459;
																																{	/* Expand/garith.scm 49 */
																																	obj_t
																																		BgL_arg1641z00_460;
																																	BgL_arg1641z00_460
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_bz00_45,
																																		BNIL);
																																	BgL_arg1639z00_458
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				1)),
																																		BgL_arg1641z00_460);
																																}
																																{	/* Expand/garith.scm 50 */
																																	obj_t
																																		BgL_arg1644z00_461;
																																	obj_t
																																		BgL_arg1652z00_462;
																																	{	/* Expand/garith.scm 50 */
																																		obj_t
																																			BgL_arg1662z00_463;
																																		obj_t
																																			BgL_arg1663z00_464;
																																		BgL_arg1662z00_463
																																			=
																																			BGl_fxze70ze7zzexpand_garithmetiquez00
																																			(BgL_idz00_43);
																																		{	/* Expand/garith.scm 50 */
																																			obj_t
																																				BgL_arg1664z00_465;
																																			BgL_arg1664z00_465
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_bz00_45,
																																				BNIL);
																																			BgL_arg1663z00_464
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_az00_44,
																																				BgL_arg1664z00_465);
																																		}
																																		BgL_arg1644z00_461
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1662z00_463,
																																			BgL_arg1663z00_464);
																																	}
																																	{	/* Expand/garith.scm 51 */
																																		obj_t
																																			BgL_arg1667z00_466;
																																		{	/* Expand/garith.scm 51 */
																																			obj_t
																																				BgL_arg1669z00_467;
																																			obj_t
																																				BgL_arg1672z00_468;
																																			{	/* Expand/garith.scm 51 */
																																				obj_t
																																					BgL_arg1684z00_469;
																																				{	/* Expand/garith.scm 51 */
																																					obj_t
																																						BgL_arg1685z00_470;
																																					obj_t
																																						BgL_arg1686z00_471;
																																					{	/* Expand/garith.scm 51 */
																																						obj_t
																																							BgL_res2141z00_967;
																																						{	/* Expand/garith.scm 51 */
																																							obj_t
																																								BgL_symbolz00_965;
																																							BgL_symbolz00_965
																																								=
																																								CNST_TABLE_REF
																																								(
																																								((long) 0));
																																							{	/* Expand/garith.scm 51 */
																																								obj_t
																																									BgL_arg1466z00_966;
																																								BgL_arg1466z00_966
																																									=
																																									SYMBOL_TO_STRING
																																									(BgL_symbolz00_965);
																																								BgL_res2141z00_967
																																									=
																																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																									(BgL_arg1466z00_966);
																																						}}
																																						BgL_arg1685z00_470
																																							=
																																							BgL_res2141z00_967;
																																					}
																																					{	/* Expand/garith.scm 51 */
																																						obj_t
																																							BgL_res2142z00_970;
																																						{	/* Expand/garith.scm 51 */
																																							obj_t
																																								BgL_arg1466z00_969;
																																							BgL_arg1466z00_969
																																								=
																																								SYMBOL_TO_STRING
																																								(
																																								((obj_t) BgL_idz00_43));
																																							BgL_res2142z00_970
																																								=
																																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																								(BgL_arg1466z00_969);
																																						}
																																						BgL_arg1686z00_471
																																							=
																																							BgL_res2142z00_970;
																																					}
																																					BgL_arg1684z00_469
																																						=
																																						string_append
																																						(BgL_arg1685z00_470,
																																						BgL_arg1686z00_471);
																																				}
																																				BgL_arg1669z00_467
																																					=
																																					bstring_to_symbol
																																					(BgL_arg1684z00_469);
																																			}
																																			{	/* Expand/garith.scm 51 */
																																				obj_t
																																					BgL_arg1687z00_472;
																																				BgL_arg1687z00_472
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_bz00_45,
																																					BNIL);
																																				BgL_arg1672z00_468
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_az00_44,
																																					BgL_arg1687z00_472);
																																			}
																																			BgL_arg1667z00_466
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1669z00_467,
																																				BgL_arg1672z00_468);
																																		}
																																		BgL_arg1652z00_462
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1667z00_466,
																																			BNIL);
																																	}
																																	BgL_arg1640z00_459
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1644z00_461,
																																		BgL_arg1652z00_462);
																																}
																																BgL_arg1634z00_457
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1639z00_458,
																																	BgL_arg1640z00_459);
																															}
																															BgL_nxz00_456 =
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 2)),
																																BgL_arg1634z00_457);
																														}
																														return
																															PROCEDURE_ENTRY
																															(BgL_ez00_5)
																															(BgL_ez00_5,
																															BgL_nxz00_456,
																															BgL_ez00_5, BEOA);
																													}
																												}
																											else
																												{	/* Expand/garith.scm 45 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Expand/garith.scm 45 */
																											if (SYMBOLP
																												(BgL_carzd2155zd2_78))
																												{	/* Expand/garith.scm 45 */
																													obj_t
																														BgL_carzd2202zd2_91;
																													BgL_carzd2202zd2_91 =
																														CAR(((obj_t)
																															BgL_cdrzd2156zd2_79));
																													if (INTEGERP
																														(BgL_carzd2202zd2_91))
																														{	/* Expand/garith.scm 45 */
																															if (NULLP(CDR(
																																		((obj_t)
																																			BgL_cdrzd2156zd2_79))))
																																{	/* Expand/garith.scm 45 */
																																	BgL_idz00_47 =
																																		CAR
																																		(BgL_xz00_4);
																																	BgL_az00_48 =
																																		BgL_carzd2155zd2_78;
																																	BgL_bz00_49 =
																																		BgL_carzd2202zd2_91;
																																BgL_tagzd2103zd2_50:
																																	{	/* Expand/garith.scm 54 */
																																		obj_t
																																			BgL_nxz00_473;
																																		{	/* Expand/garith.scm 54 */
																																			obj_t
																																				BgL_arg1688z00_474;
																																			{	/* Expand/garith.scm 54 */
																																				obj_t
																																					BgL_arg1692z00_475;
																																				obj_t
																																					BgL_arg1695z00_476;
																																				{	/* Expand/garith.scm 54 */
																																					obj_t
																																						BgL_arg1696z00_477;
																																					BgL_arg1696z00_477
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_az00_48,
																																						BNIL);
																																					BgL_arg1692z00_475
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 1)), BgL_arg1696z00_477);
																																				}
																																				{	/* Expand/garith.scm 55 */
																																					obj_t
																																						BgL_arg1697z00_478;
																																					obj_t
																																						BgL_arg1698z00_479;
																																					{	/* Expand/garith.scm 55 */
																																						obj_t
																																							BgL_arg1704z00_480;
																																						obj_t
																																							BgL_arg1707z00_481;
																																						BgL_arg1704z00_480
																																							=
																																							BGl_fxze70ze7zzexpand_garithmetiquez00
																																							(BgL_idz00_47);
																																						{	/* Expand/garith.scm 55 */
																																							obj_t
																																								BgL_arg1708z00_482;
																																							BgL_arg1708z00_482
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_bz00_49,
																																								BNIL);
																																							BgL_arg1707z00_481
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_az00_48,
																																								BgL_arg1708z00_482);
																																						}
																																						BgL_arg1697z00_478
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1704z00_480,
																																							BgL_arg1707z00_481);
																																					}
																																					{	/* Expand/garith.scm 56 */
																																						obj_t
																																							BgL_arg1711z00_483;
																																						{	/* Expand/garith.scm 56 */
																																							obj_t
																																								BgL_arg1712z00_484;
																																							obj_t
																																								BgL_arg1719z00_485;
																																							{	/* Expand/garith.scm 56 */
																																								obj_t
																																									BgL_arg1725z00_486;
																																								{	/* Expand/garith.scm 56 */
																																									obj_t
																																										BgL_arg1726z00_487;
																																									obj_t
																																										BgL_arg1727z00_488;
																																									{	/* Expand/garith.scm 56 */
																																										obj_t
																																											BgL_res2144z00_975;
																																										{	/* Expand/garith.scm 56 */
																																											obj_t
																																												BgL_symbolz00_973;
																																											BgL_symbolz00_973
																																												=
																																												CNST_TABLE_REF
																																												(
																																												((long) 0));
																																											{	/* Expand/garith.scm 56 */
																																												obj_t
																																													BgL_arg1466z00_974;
																																												BgL_arg1466z00_974
																																													=
																																													SYMBOL_TO_STRING
																																													(BgL_symbolz00_973);
																																												BgL_res2144z00_975
																																													=
																																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																													(BgL_arg1466z00_974);
																																										}}
																																										BgL_arg1726z00_487
																																											=
																																											BgL_res2144z00_975;
																																									}
																																									{	/* Expand/garith.scm 56 */
																																										obj_t
																																											BgL_res2145z00_978;
																																										{	/* Expand/garith.scm 56 */
																																											obj_t
																																												BgL_arg1466z00_977;
																																											BgL_arg1466z00_977
																																												=
																																												SYMBOL_TO_STRING
																																												(
																																												((obj_t) BgL_idz00_47));
																																											BgL_res2145z00_978
																																												=
																																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																												(BgL_arg1466z00_977);
																																										}
																																										BgL_arg1727z00_488
																																											=
																																											BgL_res2145z00_978;
																																									}
																																									BgL_arg1725z00_486
																																										=
																																										string_append
																																										(BgL_arg1726z00_487,
																																										BgL_arg1727z00_488);
																																								}
																																								BgL_arg1712z00_484
																																									=
																																									bstring_to_symbol
																																									(BgL_arg1725z00_486);
																																							}
																																							{	/* Expand/garith.scm 56 */
																																								obj_t
																																									BgL_arg1728z00_489;
																																								BgL_arg1728z00_489
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_bz00_49,
																																									BNIL);
																																								BgL_arg1719z00_485
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_az00_48,
																																									BgL_arg1728z00_489);
																																							}
																																							BgL_arg1711z00_483
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1712z00_484,
																																								BgL_arg1719z00_485);
																																						}
																																						BgL_arg1698z00_479
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1711z00_483,
																																							BNIL);
																																					}
																																					BgL_arg1695z00_476
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1697z00_478,
																																						BgL_arg1698z00_479);
																																				}
																																				BgL_arg1688z00_474
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1692z00_475,
																																					BgL_arg1695z00_476);
																																			}
																																			BgL_nxz00_473
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						2)),
																																				BgL_arg1688z00_474);
																																		}
																																		return
																																			PROCEDURE_ENTRY
																																			(BgL_ez00_5)
																																			(BgL_ez00_5,
																																			BgL_nxz00_473,
																																			BgL_ez00_5,
																																			BEOA);
																																	}
																																}
																															else
																																{	/* Expand/garith.scm 45 */
																																	return BFALSE;
																																}
																														}
																													else
																														{	/* Expand/garith.scm 45 */
																															obj_t
																																BgL_cdrzd2223zd2_97;
																															BgL_cdrzd2223zd2_97
																																=
																																CDR(BgL_xz00_4);
																															{	/* Expand/garith.scm 45 */
																																obj_t
																																	BgL_cdrzd2230zd2_98;
																																BgL_cdrzd2230zd2_98
																																	=
																																	CDR(((obj_t)
																																		BgL_cdrzd2223zd2_97));
																																if (NULLP(CDR((
																																				(obj_t)
																																				BgL_cdrzd2230zd2_98))))
																																	{	/* Expand/garith.scm 45 */
																																		obj_t
																																			BgL_arg1051z00_101;
																																		obj_t
																																			BgL_arg1052z00_102;
																																		obj_t
																																			BgL_arg1053z00_103;
																																		BgL_arg1051z00_101
																																			=
																																			CAR
																																			(BgL_xz00_4);
																																		BgL_arg1052z00_102
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd2223zd2_97));
																																		BgL_arg1053z00_103
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd2230zd2_98));
																																		BgL_idz00_51
																																			=
																																			BgL_arg1051z00_101;
																																		BgL_az00_52
																																			=
																																			BgL_arg1052z00_102;
																																		BgL_bz00_53
																																			=
																																			BgL_arg1053z00_103;
																																	BgL_tagzd2104zd2_54:
																																		{	/* Expand/garith.scm 59 */
																																			obj_t
																																				BgL_arg1729z00_490;
																																			{	/* Expand/garith.scm 59 */
																																				obj_t
																																					BgL_arg1731z00_491;
																																				obj_t
																																					BgL_arg1732z00_492;
																																				{	/* Expand/garith.scm 59 */
																																					obj_t
																																						BgL_arg1733z00_493;
																																					{	/* Expand/garith.scm 59 */
																																						obj_t
																																							BgL_arg1738z00_494;
																																						obj_t
																																							BgL_arg1739z00_495;
																																						{	/* Expand/garith.scm 59 */
																																							obj_t
																																								BgL_res2147z00_983;
																																							{	/* Expand/garith.scm 59 */
																																								obj_t
																																									BgL_symbolz00_981;
																																								BgL_symbolz00_981
																																									=
																																									CNST_TABLE_REF
																																									(
																																									((long) 0));
																																								{	/* Expand/garith.scm 59 */
																																									obj_t
																																										BgL_arg1466z00_982;
																																									BgL_arg1466z00_982
																																										=
																																										SYMBOL_TO_STRING
																																										(BgL_symbolz00_981);
																																									BgL_res2147z00_983
																																										=
																																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																										(BgL_arg1466z00_982);
																																							}}
																																							BgL_arg1738z00_494
																																								=
																																								BgL_res2147z00_983;
																																						}
																																						{	/* Expand/garith.scm 59 */
																																							obj_t
																																								BgL_res2148z00_986;
																																							{	/* Expand/garith.scm 59 */
																																								obj_t
																																									BgL_arg1466z00_985;
																																								BgL_arg1466z00_985
																																									=
																																									SYMBOL_TO_STRING
																																									(
																																									((obj_t) BgL_idz00_51));
																																								BgL_res2148z00_986
																																									=
																																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																									(BgL_arg1466z00_985);
																																							}
																																							BgL_arg1739z00_495
																																								=
																																								BgL_res2148z00_986;
																																						}
																																						BgL_arg1733z00_493
																																							=
																																							string_append
																																							(BgL_arg1738z00_494,
																																							BgL_arg1739z00_495);
																																					}
																																					BgL_arg1731z00_491
																																						=
																																						bstring_to_symbol
																																						(BgL_arg1733z00_493);
																																				}
																																				{	/* Expand/garith.scm 59 */
																																					obj_t
																																						BgL_arg1740z00_496;
																																					BgL_arg1740z00_496
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_bz00_53,
																																						BNIL);
																																					BgL_arg1732z00_492
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_az00_52,
																																						BgL_arg1740z00_496);
																																				}
																																				BgL_arg1729z00_490
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1731z00_491,
																																					BgL_arg1732z00_492);
																																			}
																																			return
																																				PROCEDURE_ENTRY
																																				(BgL_ez00_5)
																																				(BgL_ez00_5,
																																				BgL_arg1729z00_490,
																																				BgL_ez00_5,
																																				BEOA);
																																		}
																																	}
																																else
																																	{	/* Expand/garith.scm 45 */
																																		return
																																			BFALSE;
																																	}
																															}
																														}
																												}
																											else
																												{	/* Expand/garith.scm 45 */
																													obj_t
																														BgL_cdrzd2246zd2_105;
																													BgL_cdrzd2246zd2_105 =
																														CDR(BgL_xz00_4);
																													{	/* Expand/garith.scm 45 */
																														obj_t
																															BgL_cdrzd2253zd2_106;
																														BgL_cdrzd2253zd2_106
																															=
																															CDR(((obj_t)
																																BgL_cdrzd2246zd2_105));
																														if (NULLP(CDR((
																																		(obj_t)
																																		BgL_cdrzd2253zd2_106))))
																															{	/* Expand/garith.scm 45 */
																																obj_t
																																	BgL_arg1057z00_109;
																																obj_t
																																	BgL_arg1058z00_110;
																																obj_t
																																	BgL_arg1059z00_111;
																																BgL_arg1057z00_109
																																	=
																																	CAR
																																	(BgL_xz00_4);
																																BgL_arg1058z00_110
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd2246zd2_105));
																																BgL_arg1059z00_111
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd2253zd2_106));
																																{
																																	obj_t
																																		BgL_bz00_1830;
																																	obj_t
																																		BgL_az00_1829;
																																	obj_t
																																		BgL_idz00_1828;
																																	BgL_idz00_1828
																																		=
																																		BgL_arg1057z00_109;
																																	BgL_az00_1829
																																		=
																																		BgL_arg1058z00_110;
																																	BgL_bz00_1830
																																		=
																																		BgL_arg1059z00_111;
																																	BgL_bz00_53 =
																																		BgL_bz00_1830;
																																	BgL_az00_52 =
																																		BgL_az00_1829;
																																	BgL_idz00_51 =
																																		BgL_idz00_1828;
																																	goto
																																		BgL_tagzd2104zd2_54;
																																}
																															}
																														else
																															{	/* Expand/garith.scm 45 */
																																return BFALSE;
																															}
																													}
																												}
																										}
																								}
																							else
																								{	/* Expand/garith.scm 45 */
																									if (SYMBOLP
																										(BgL_carzd2155zd2_78))
																										{	/* Expand/garith.scm 45 */
																											obj_t
																												BgL_carzd2282zd2_117;
																											BgL_carzd2282zd2_117 =
																												CAR(((obj_t)
																													BgL_cdrzd2156zd2_79));
																											if (INTEGERP
																												(BgL_carzd2282zd2_117))
																												{	/* Expand/garith.scm 45 */
																													if (NULLP(CDR(
																																((obj_t)
																																	BgL_cdrzd2156zd2_79))))
																														{
																															obj_t
																																BgL_bz00_1844;
																															obj_t
																																BgL_az00_1843;
																															obj_t
																																BgL_idz00_1841;
																															BgL_idz00_1841 =
																																CAR(BgL_xz00_4);
																															BgL_az00_1843 =
																																BgL_carzd2155zd2_78;
																															BgL_bz00_1844 =
																																BgL_carzd2282zd2_117;
																															BgL_bz00_49 =
																																BgL_bz00_1844;
																															BgL_az00_48 =
																																BgL_az00_1843;
																															BgL_idz00_47 =
																																BgL_idz00_1841;
																															goto
																																BgL_tagzd2103zd2_50;
																														}
																													else
																														{	/* Expand/garith.scm 45 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Expand/garith.scm 45 */
																													obj_t
																														BgL_cdrzd2303zd2_123;
																													BgL_cdrzd2303zd2_123 =
																														CDR(BgL_xz00_4);
																													{	/* Expand/garith.scm 45 */
																														obj_t
																															BgL_cdrzd2310zd2_124;
																														BgL_cdrzd2310zd2_124
																															=
																															CDR(((obj_t)
																																BgL_cdrzd2303zd2_123));
																														if (NULLP(CDR((
																																		(obj_t)
																																		BgL_cdrzd2310zd2_124))))
																															{	/* Expand/garith.scm 45 */
																																obj_t
																																	BgL_arg1078z00_127;
																																obj_t
																																	BgL_arg1095z00_128;
																																obj_t
																																	BgL_arg1099z00_129;
																																BgL_arg1078z00_127
																																	=
																																	CAR
																																	(BgL_xz00_4);
																																BgL_arg1095z00_128
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd2303zd2_123));
																																BgL_arg1099z00_129
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd2310zd2_124));
																																{
																																	obj_t
																																		BgL_bz00_1859;
																																	obj_t
																																		BgL_az00_1858;
																																	obj_t
																																		BgL_idz00_1857;
																																	BgL_idz00_1857
																																		=
																																		BgL_arg1078z00_127;
																																	BgL_az00_1858
																																		=
																																		BgL_arg1095z00_128;
																																	BgL_bz00_1859
																																		=
																																		BgL_arg1099z00_129;
																																	BgL_bz00_53 =
																																		BgL_bz00_1859;
																																	BgL_az00_52 =
																																		BgL_az00_1858;
																																	BgL_idz00_51 =
																																		BgL_idz00_1857;
																																	goto
																																		BgL_tagzd2104zd2_54;
																																}
																															}
																														else
																															{	/* Expand/garith.scm 45 */
																																return BFALSE;
																															}
																													}
																												}
																										}
																									else
																										{	/* Expand/garith.scm 45 */
																											obj_t
																												BgL_cdrzd2326zd2_131;
																											BgL_cdrzd2326zd2_131 =
																												CDR(BgL_xz00_4);
																											{	/* Expand/garith.scm 45 */
																												obj_t
																													BgL_cdrzd2333zd2_132;
																												BgL_cdrzd2333zd2_132 =
																													CDR(((obj_t)
																														BgL_cdrzd2326zd2_131));
																												if (NULLP(CDR(((obj_t)
																																BgL_cdrzd2333zd2_132))))
																													{	/* Expand/garith.scm 45 */
																														obj_t
																															BgL_arg1103z00_135;
																														obj_t
																															BgL_arg1109z00_136;
																														obj_t
																															BgL_arg1110z00_137;
																														BgL_arg1103z00_135 =
																															CAR(BgL_xz00_4);
																														BgL_arg1109z00_136 =
																															CAR(((obj_t)
																																BgL_cdrzd2326zd2_131));
																														BgL_arg1110z00_137 =
																															CAR(((obj_t)
																																BgL_cdrzd2333zd2_132));
																														{
																															obj_t
																																BgL_bz00_1874;
																															obj_t
																																BgL_az00_1873;
																															obj_t
																																BgL_idz00_1872;
																															BgL_idz00_1872 =
																																BgL_arg1103z00_135;
																															BgL_az00_1873 =
																																BgL_arg1109z00_136;
																															BgL_bz00_1874 =
																																BgL_arg1110z00_137;
																															BgL_bz00_53 =
																																BgL_bz00_1874;
																															BgL_az00_52 =
																																BgL_az00_1873;
																															BgL_idz00_51 =
																																BgL_idz00_1872;
																															goto
																																BgL_tagzd2104zd2_54;
																														}
																													}
																												else
																													{	/* Expand/garith.scm 45 */
																														return BFALSE;
																													}
																											}
																										}
																								}
																						}
																					}
																			}
																		else
																			{	/* Expand/garith.scm 45 */
																				obj_t BgL_cdrzd2348zd2_140;

																				BgL_cdrzd2348zd2_140 = CDR(BgL_xz00_4);
																				{	/* Expand/garith.scm 45 */
																					obj_t BgL_carzd2353zd2_141;
																					obj_t BgL_cdrzd2354zd2_142;

																					BgL_carzd2353zd2_141 =
																						CAR(((obj_t) BgL_cdrzd2348zd2_140));
																					BgL_cdrzd2354zd2_142 =
																						CDR(((obj_t) BgL_cdrzd2348zd2_140));
																					if (INTEGERP(BgL_carzd2353zd2_141))
																						{	/* Expand/garith.scm 45 */
																							obj_t BgL_carzd2358zd2_144;

																							BgL_carzd2358zd2_144 =
																								CAR(
																								((obj_t) BgL_cdrzd2354zd2_142));
																							if (SYMBOLP(BgL_carzd2358zd2_144))
																								{	/* Expand/garith.scm 45 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_cdrzd2354zd2_142))))
																										{
																											obj_t BgL_bz00_1893;
																											obj_t BgL_az00_1892;
																											obj_t BgL_idz00_1890;

																											BgL_idz00_1890 =
																												CAR(BgL_xz00_4);
																											BgL_az00_1892 =
																												BgL_carzd2353zd2_141;
																											BgL_bz00_1893 =
																												BgL_carzd2358zd2_144;
																											BgL_bz00_45 =
																												BgL_bz00_1893;
																											BgL_az00_44 =
																												BgL_az00_1892;
																											BgL_idz00_43 =
																												BgL_idz00_1890;
																											goto BgL_tagzd2102zd2_46;
																										}
																									else
																										{	/* Expand/garith.scm 45 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Expand/garith.scm 45 */
																									if (SYMBOLP
																										(BgL_carzd2353zd2_141))
																										{	/* Expand/garith.scm 45 */
																											obj_t
																												BgL_carzd2400zd2_154;
																											BgL_carzd2400zd2_154 =
																												CAR(((obj_t)
																													BgL_cdrzd2354zd2_142));
																											if (INTEGERP
																												(BgL_carzd2400zd2_154))
																												{	/* Expand/garith.scm 45 */
																													if (NULLP(CDR(
																																((obj_t)
																																	BgL_cdrzd2354zd2_142))))
																														{
																															obj_t
																																BgL_bz00_1907;
																															obj_t
																																BgL_az00_1906;
																															obj_t
																																BgL_idz00_1904;
																															BgL_idz00_1904 =
																																CAR(BgL_xz00_4);
																															BgL_az00_1906 =
																																BgL_carzd2353zd2_141;
																															BgL_bz00_1907 =
																																BgL_carzd2400zd2_154;
																															BgL_bz00_49 =
																																BgL_bz00_1907;
																															BgL_az00_48 =
																																BgL_az00_1906;
																															BgL_idz00_47 =
																																BgL_idz00_1904;
																															goto
																																BgL_tagzd2103zd2_50;
																														}
																													else
																														{	/* Expand/garith.scm 45 */
																															return BFALSE;
																														}
																												}
																											else
																												{	/* Expand/garith.scm 45 */
																													obj_t
																														BgL_cdrzd2421zd2_160;
																													BgL_cdrzd2421zd2_160 =
																														CDR(BgL_xz00_4);
																													{	/* Expand/garith.scm 45 */
																														obj_t
																															BgL_cdrzd2428zd2_161;
																														BgL_cdrzd2428zd2_161
																															=
																															CDR(((obj_t)
																																BgL_cdrzd2421zd2_160));
																														if (NULLP(CDR((
																																		(obj_t)
																																		BgL_cdrzd2428zd2_161))))
																															{	/* Expand/garith.scm 45 */
																																obj_t
																																	BgL_arg1133z00_164;
																																obj_t
																																	BgL_arg1134z00_165;
																																obj_t
																																	BgL_arg1140z00_166;
																																BgL_arg1133z00_164
																																	=
																																	CAR
																																	(BgL_xz00_4);
																																BgL_arg1134z00_165
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd2421zd2_160));
																																BgL_arg1140z00_166
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd2428zd2_161));
																																{
																																	obj_t
																																		BgL_bz00_1922;
																																	obj_t
																																		BgL_az00_1921;
																																	obj_t
																																		BgL_idz00_1920;
																																	BgL_idz00_1920
																																		=
																																		BgL_arg1133z00_164;
																																	BgL_az00_1921
																																		=
																																		BgL_arg1134z00_165;
																																	BgL_bz00_1922
																																		=
																																		BgL_arg1140z00_166;
																																	BgL_bz00_53 =
																																		BgL_bz00_1922;
																																	BgL_az00_52 =
																																		BgL_az00_1921;
																																	BgL_idz00_51 =
																																		BgL_idz00_1920;
																																	goto
																																		BgL_tagzd2104zd2_54;
																																}
																															}
																														else
																															{	/* Expand/garith.scm 45 */
																																return BFALSE;
																															}
																													}
																												}
																										}
																									else
																										{	/* Expand/garith.scm 45 */
																											obj_t
																												BgL_cdrzd2444zd2_168;
																											BgL_cdrzd2444zd2_168 =
																												CDR(BgL_xz00_4);
																											{	/* Expand/garith.scm 45 */
																												obj_t
																													BgL_cdrzd2451zd2_169;
																												BgL_cdrzd2451zd2_169 =
																													CDR(((obj_t)
																														BgL_cdrzd2444zd2_168));
																												if (NULLP(CDR(((obj_t)
																																BgL_cdrzd2451zd2_169))))
																													{	/* Expand/garith.scm 45 */
																														obj_t
																															BgL_arg1155z00_172;
																														obj_t
																															BgL_arg1156z00_173;
																														obj_t
																															BgL_arg1165z00_174;
																														BgL_arg1155z00_172 =
																															CAR(BgL_xz00_4);
																														BgL_arg1156z00_173 =
																															CAR(((obj_t)
																																BgL_cdrzd2444zd2_168));
																														BgL_arg1165z00_174 =
																															CAR(((obj_t)
																																BgL_cdrzd2451zd2_169));
																														{
																															obj_t
																																BgL_bz00_1937;
																															obj_t
																																BgL_az00_1936;
																															obj_t
																																BgL_idz00_1935;
																															BgL_idz00_1935 =
																																BgL_arg1155z00_172;
																															BgL_az00_1936 =
																																BgL_arg1156z00_173;
																															BgL_bz00_1937 =
																																BgL_arg1165z00_174;
																															BgL_bz00_53 =
																																BgL_bz00_1937;
																															BgL_az00_52 =
																																BgL_az00_1936;
																															BgL_idz00_51 =
																																BgL_idz00_1935;
																															goto
																																BgL_tagzd2104zd2_54;
																														}
																													}
																												else
																													{	/* Expand/garith.scm 45 */
																														return BFALSE;
																													}
																											}
																										}
																								}
																						}
																					else
																						{	/* Expand/garith.scm 45 */
																							if (SYMBOLP(BgL_carzd2353zd2_141))
																								{	/* Expand/garith.scm 45 */
																									obj_t BgL_carzd2480zd2_180;

																									BgL_carzd2480zd2_180 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2354zd2_142));
																									if (INTEGERP
																										(BgL_carzd2480zd2_180))
																										{	/* Expand/garith.scm 45 */
																											if (NULLP(CDR(
																														((obj_t)
																															BgL_cdrzd2354zd2_142))))
																												{
																													obj_t BgL_bz00_1951;
																													obj_t BgL_az00_1950;
																													obj_t BgL_idz00_1948;

																													BgL_idz00_1948 =
																														CAR(BgL_xz00_4);
																													BgL_az00_1950 =
																														BgL_carzd2353zd2_141;
																													BgL_bz00_1951 =
																														BgL_carzd2480zd2_180;
																													BgL_bz00_49 =
																														BgL_bz00_1951;
																													BgL_az00_48 =
																														BgL_az00_1950;
																													BgL_idz00_47 =
																														BgL_idz00_1948;
																													goto
																														BgL_tagzd2103zd2_50;
																												}
																											else
																												{	/* Expand/garith.scm 45 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Expand/garith.scm 45 */
																											obj_t
																												BgL_cdrzd2501zd2_186;
																											BgL_cdrzd2501zd2_186 =
																												CDR(BgL_xz00_4);
																											{	/* Expand/garith.scm 45 */
																												obj_t
																													BgL_cdrzd2508zd2_187;
																												BgL_cdrzd2508zd2_187 =
																													CDR(((obj_t)
																														BgL_cdrzd2501zd2_186));
																												if (NULLP(CDR(((obj_t)
																																BgL_cdrzd2508zd2_187))))
																													{	/* Expand/garith.scm 45 */
																														obj_t
																															BgL_arg1177z00_190;
																														obj_t
																															BgL_arg1178z00_191;
																														obj_t
																															BgL_arg1179z00_192;
																														BgL_arg1177z00_190 =
																															CAR(BgL_xz00_4);
																														BgL_arg1178z00_191 =
																															CAR(((obj_t)
																																BgL_cdrzd2501zd2_186));
																														BgL_arg1179z00_192 =
																															CAR(((obj_t)
																																BgL_cdrzd2508zd2_187));
																														{
																															obj_t
																																BgL_bz00_1966;
																															obj_t
																																BgL_az00_1965;
																															obj_t
																																BgL_idz00_1964;
																															BgL_idz00_1964 =
																																BgL_arg1177z00_190;
																															BgL_az00_1965 =
																																BgL_arg1178z00_191;
																															BgL_bz00_1966 =
																																BgL_arg1179z00_192;
																															BgL_bz00_53 =
																																BgL_bz00_1966;
																															BgL_az00_52 =
																																BgL_az00_1965;
																															BgL_idz00_51 =
																																BgL_idz00_1964;
																															goto
																																BgL_tagzd2104zd2_54;
																														}
																													}
																												else
																													{	/* Expand/garith.scm 45 */
																														return BFALSE;
																													}
																											}
																										}
																								}
																							else
																								{	/* Expand/garith.scm 45 */
																									obj_t BgL_cdrzd2524zd2_194;

																									BgL_cdrzd2524zd2_194 =
																										CDR(BgL_xz00_4);
																									{	/* Expand/garith.scm 45 */
																										obj_t BgL_cdrzd2531zd2_195;

																										BgL_cdrzd2531zd2_195 =
																											CDR(
																											((obj_t)
																												BgL_cdrzd2524zd2_194));
																										if (NULLP(CDR(((obj_t)
																														BgL_cdrzd2531zd2_195))))
																											{	/* Expand/garith.scm 45 */
																												obj_t
																													BgL_arg1194z00_198;
																												obj_t
																													BgL_arg1197z00_199;
																												obj_t
																													BgL_arg1201z00_200;
																												BgL_arg1194z00_198 =
																													CAR(BgL_xz00_4);
																												BgL_arg1197z00_199 =
																													CAR(((obj_t)
																														BgL_cdrzd2524zd2_194));
																												BgL_arg1201z00_200 =
																													CAR(((obj_t)
																														BgL_cdrzd2531zd2_195));
																												{
																													obj_t BgL_bz00_1981;
																													obj_t BgL_az00_1980;
																													obj_t BgL_idz00_1979;

																													BgL_idz00_1979 =
																														BgL_arg1194z00_198;
																													BgL_az00_1980 =
																														BgL_arg1197z00_199;
																													BgL_bz00_1981 =
																														BgL_arg1201z00_200;
																													BgL_bz00_53 =
																														BgL_bz00_1981;
																													BgL_az00_52 =
																														BgL_az00_1980;
																													BgL_idz00_51 =
																														BgL_idz00_1979;
																													goto
																														BgL_tagzd2104zd2_54;
																												}
																											}
																										else
																											{	/* Expand/garith.scm 45 */
																												return BFALSE;
																											}
																									}
																								}
																						}
																				}
																			}
																	}
																else
																	{	/* Expand/garith.scm 45 */
																		obj_t BgL_cdrzd2546zd2_203;

																		BgL_cdrzd2546zd2_203 = CDR(BgL_xz00_4);
																		{	/* Expand/garith.scm 45 */
																			obj_t BgL_carzd2551zd2_204;
																			obj_t BgL_cdrzd2552zd2_205;

																			BgL_carzd2551zd2_204 =
																				CAR(((obj_t) BgL_cdrzd2546zd2_203));
																			BgL_cdrzd2552zd2_205 =
																				CDR(((obj_t) BgL_cdrzd2546zd2_203));
																			if (INTEGERP(BgL_carzd2551zd2_204))
																				{	/* Expand/garith.scm 45 */
																					obj_t BgL_carzd2556zd2_207;

																					BgL_carzd2556zd2_207 =
																						CAR(((obj_t) BgL_cdrzd2552zd2_205));
																					if (SYMBOLP(BgL_carzd2556zd2_207))
																						{	/* Expand/garith.scm 45 */
																							if (NULLP(CDR(
																										((obj_t)
																											BgL_cdrzd2552zd2_205))))
																								{
																									obj_t BgL_bz00_2000;
																									obj_t BgL_az00_1999;
																									obj_t BgL_idz00_1997;

																									BgL_idz00_1997 =
																										CAR(BgL_xz00_4);
																									BgL_az00_1999 =
																										BgL_carzd2551zd2_204;
																									BgL_bz00_2000 =
																										BgL_carzd2556zd2_207;
																									BgL_bz00_45 = BgL_bz00_2000;
																									BgL_az00_44 = BgL_az00_1999;
																									BgL_idz00_43 = BgL_idz00_1997;
																									goto BgL_tagzd2102zd2_46;
																								}
																							else
																								{	/* Expand/garith.scm 45 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Expand/garith.scm 45 */
																							if (SYMBOLP(BgL_carzd2551zd2_204))
																								{	/* Expand/garith.scm 45 */
																									obj_t BgL_carzd2598zd2_217;

																									BgL_carzd2598zd2_217 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2552zd2_205));
																									if (INTEGERP
																										(BgL_carzd2598zd2_217))
																										{	/* Expand/garith.scm 45 */
																											if (NULLP(CDR(
																														((obj_t)
																															BgL_cdrzd2552zd2_205))))
																												{
																													obj_t BgL_bz00_2014;
																													obj_t BgL_az00_2013;
																													obj_t BgL_idz00_2011;

																													BgL_idz00_2011 =
																														CAR(BgL_xz00_4);
																													BgL_az00_2013 =
																														BgL_carzd2551zd2_204;
																													BgL_bz00_2014 =
																														BgL_carzd2598zd2_217;
																													BgL_bz00_49 =
																														BgL_bz00_2014;
																													BgL_az00_48 =
																														BgL_az00_2013;
																													BgL_idz00_47 =
																														BgL_idz00_2011;
																													goto
																														BgL_tagzd2103zd2_50;
																												}
																											else
																												{	/* Expand/garith.scm 45 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Expand/garith.scm 45 */
																											obj_t
																												BgL_cdrzd2619zd2_223;
																											BgL_cdrzd2619zd2_223 =
																												CDR(BgL_xz00_4);
																											{	/* Expand/garith.scm 45 */
																												obj_t
																													BgL_cdrzd2626zd2_224;
																												BgL_cdrzd2626zd2_224 =
																													CDR(((obj_t)
																														BgL_cdrzd2619zd2_223));
																												if (NULLP(CDR(((obj_t)
																																BgL_cdrzd2626zd2_224))))
																													{	/* Expand/garith.scm 45 */
																														obj_t
																															BgL_arg1243z00_227;
																														obj_t
																															BgL_arg1245z00_228;
																														obj_t
																															BgL_arg1246z00_229;
																														BgL_arg1243z00_227 =
																															CAR(BgL_xz00_4);
																														BgL_arg1245z00_228 =
																															CAR(((obj_t)
																																BgL_cdrzd2619zd2_223));
																														BgL_arg1246z00_229 =
																															CAR(((obj_t)
																																BgL_cdrzd2626zd2_224));
																														{
																															obj_t
																																BgL_bz00_2029;
																															obj_t
																																BgL_az00_2028;
																															obj_t
																																BgL_idz00_2027;
																															BgL_idz00_2027 =
																																BgL_arg1243z00_227;
																															BgL_az00_2028 =
																																BgL_arg1245z00_228;
																															BgL_bz00_2029 =
																																BgL_arg1246z00_229;
																															BgL_bz00_53 =
																																BgL_bz00_2029;
																															BgL_az00_52 =
																																BgL_az00_2028;
																															BgL_idz00_51 =
																																BgL_idz00_2027;
																															goto
																																BgL_tagzd2104zd2_54;
																														}
																													}
																												else
																													{	/* Expand/garith.scm 45 */
																														return BFALSE;
																													}
																											}
																										}
																								}
																							else
																								{	/* Expand/garith.scm 45 */
																									obj_t BgL_cdrzd2642zd2_231;

																									BgL_cdrzd2642zd2_231 =
																										CDR(BgL_xz00_4);
																									{	/* Expand/garith.scm 45 */
																										obj_t BgL_cdrzd2649zd2_232;

																										BgL_cdrzd2649zd2_232 =
																											CDR(
																											((obj_t)
																												BgL_cdrzd2642zd2_231));
																										if (NULLP(CDR(((obj_t)
																														BgL_cdrzd2649zd2_232))))
																											{	/* Expand/garith.scm 45 */
																												obj_t
																													BgL_arg1252z00_235;
																												obj_t
																													BgL_arg1253z00_236;
																												obj_t
																													BgL_arg1254z00_237;
																												BgL_arg1252z00_235 =
																													CAR(BgL_xz00_4);
																												BgL_arg1253z00_236 =
																													CAR(((obj_t)
																														BgL_cdrzd2642zd2_231));
																												BgL_arg1254z00_237 =
																													CAR(((obj_t)
																														BgL_cdrzd2649zd2_232));
																												{
																													obj_t BgL_bz00_2044;
																													obj_t BgL_az00_2043;
																													obj_t BgL_idz00_2042;

																													BgL_idz00_2042 =
																														BgL_arg1252z00_235;
																													BgL_az00_2043 =
																														BgL_arg1253z00_236;
																													BgL_bz00_2044 =
																														BgL_arg1254z00_237;
																													BgL_bz00_53 =
																														BgL_bz00_2044;
																													BgL_az00_52 =
																														BgL_az00_2043;
																													BgL_idz00_51 =
																														BgL_idz00_2042;
																													goto
																														BgL_tagzd2104zd2_54;
																												}
																											}
																										else
																											{	/* Expand/garith.scm 45 */
																												return BFALSE;
																											}
																									}
																								}
																						}
																				}
																			else
																				{	/* Expand/garith.scm 45 */
																					if (SYMBOLP(BgL_carzd2551zd2_204))
																						{	/* Expand/garith.scm 45 */
																							obj_t BgL_carzd2678zd2_243;

																							BgL_carzd2678zd2_243 =
																								CAR(
																								((obj_t) BgL_cdrzd2552zd2_205));
																							if (INTEGERP
																								(BgL_carzd2678zd2_243))
																								{	/* Expand/garith.scm 45 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_cdrzd2552zd2_205))))
																										{
																											obj_t BgL_bz00_2058;
																											obj_t BgL_az00_2057;
																											obj_t BgL_idz00_2055;

																											BgL_idz00_2055 =
																												CAR(BgL_xz00_4);
																											BgL_az00_2057 =
																												BgL_carzd2551zd2_204;
																											BgL_bz00_2058 =
																												BgL_carzd2678zd2_243;
																											BgL_bz00_49 =
																												BgL_bz00_2058;
																											BgL_az00_48 =
																												BgL_az00_2057;
																											BgL_idz00_47 =
																												BgL_idz00_2055;
																											goto BgL_tagzd2103zd2_50;
																										}
																									else
																										{	/* Expand/garith.scm 45 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Expand/garith.scm 45 */
																									obj_t BgL_cdrzd2699zd2_249;

																									BgL_cdrzd2699zd2_249 =
																										CDR(BgL_xz00_4);
																									{	/* Expand/garith.scm 45 */
																										obj_t BgL_cdrzd2706zd2_250;

																										BgL_cdrzd2706zd2_250 =
																											CDR(
																											((obj_t)
																												BgL_cdrzd2699zd2_249));
																										if (NULLP(CDR(((obj_t)
																														BgL_cdrzd2706zd2_250))))
																											{	/* Expand/garith.scm 45 */
																												obj_t
																													BgL_arg1273z00_253;
																												obj_t
																													BgL_arg1274z00_254;
																												obj_t
																													BgL_arg1275z00_255;
																												BgL_arg1273z00_253 =
																													CAR(BgL_xz00_4);
																												BgL_arg1274z00_254 =
																													CAR(((obj_t)
																														BgL_cdrzd2699zd2_249));
																												BgL_arg1275z00_255 =
																													CAR(((obj_t)
																														BgL_cdrzd2706zd2_250));
																												{
																													obj_t BgL_bz00_2073;
																													obj_t BgL_az00_2072;
																													obj_t BgL_idz00_2071;

																													BgL_idz00_2071 =
																														BgL_arg1273z00_253;
																													BgL_az00_2072 =
																														BgL_arg1274z00_254;
																													BgL_bz00_2073 =
																														BgL_arg1275z00_255;
																													BgL_bz00_53 =
																														BgL_bz00_2073;
																													BgL_az00_52 =
																														BgL_az00_2072;
																													BgL_idz00_51 =
																														BgL_idz00_2071;
																													goto
																														BgL_tagzd2104zd2_54;
																												}
																											}
																										else
																											{	/* Expand/garith.scm 45 */
																												return BFALSE;
																											}
																									}
																								}
																						}
																					else
																						{	/* Expand/garith.scm 45 */
																							obj_t BgL_cdrzd2722zd2_257;

																							BgL_cdrzd2722zd2_257 =
																								CDR(BgL_xz00_4);
																							{	/* Expand/garith.scm 45 */
																								obj_t BgL_cdrzd2729zd2_258;

																								BgL_cdrzd2729zd2_258 =
																									CDR(
																									((obj_t)
																										BgL_cdrzd2722zd2_257));
																								if (NULLP(CDR(((obj_t)
																												BgL_cdrzd2729zd2_258))))
																									{	/* Expand/garith.scm 45 */
																										obj_t BgL_arg1280z00_261;
																										obj_t BgL_arg1281z00_262;
																										obj_t BgL_arg1282z00_263;

																										BgL_arg1280z00_261 =
																											CAR(BgL_xz00_4);
																										BgL_arg1281z00_262 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2722zd2_257));
																										BgL_arg1282z00_263 =
																											CAR(((obj_t)
																												BgL_cdrzd2729zd2_258));
																										{
																											obj_t BgL_bz00_2088;
																											obj_t BgL_az00_2087;
																											obj_t BgL_idz00_2086;

																											BgL_idz00_2086 =
																												BgL_arg1280z00_261;
																											BgL_az00_2087 =
																												BgL_arg1281z00_262;
																											BgL_bz00_2088 =
																												BgL_arg1282z00_263;
																											BgL_bz00_53 =
																												BgL_bz00_2088;
																											BgL_az00_52 =
																												BgL_az00_2087;
																											BgL_idz00_51 =
																												BgL_idz00_2086;
																											goto BgL_tagzd2104zd2_54;
																										}
																									}
																								else
																									{	/* Expand/garith.scm 45 */
																										return BFALSE;
																									}
																							}
																						}
																				}
																		}
																	}
															}
														else
															{	/* Expand/garith.scm 45 */
																obj_t BgL_cdrzd2744zd2_265;

																BgL_cdrzd2744zd2_265 = CDR(BgL_xz00_4);
																{	/* Expand/garith.scm 45 */
																	obj_t BgL_carzd2749zd2_266;
																	obj_t BgL_cdrzd2750zd2_267;

																	BgL_carzd2749zd2_266 =
																		CAR(((obj_t) BgL_cdrzd2744zd2_265));
																	BgL_cdrzd2750zd2_267 =
																		CDR(((obj_t) BgL_cdrzd2744zd2_265));
																	if (INTEGERP(BgL_carzd2749zd2_266))
																		{	/* Expand/garith.scm 45 */
																			obj_t BgL_carzd2754zd2_269;

																			BgL_carzd2754zd2_269 =
																				CAR(((obj_t) BgL_cdrzd2750zd2_267));
																			if (SYMBOLP(BgL_carzd2754zd2_269))
																				{	/* Expand/garith.scm 45 */
																					if (NULLP(CDR(
																								((obj_t)
																									BgL_cdrzd2750zd2_267))))
																						{
																							obj_t BgL_bz00_2107;
																							obj_t BgL_az00_2106;
																							obj_t BgL_idz00_2104;

																							BgL_idz00_2104 = CAR(BgL_xz00_4);
																							BgL_az00_2106 =
																								BgL_carzd2749zd2_266;
																							BgL_bz00_2107 =
																								BgL_carzd2754zd2_269;
																							BgL_bz00_45 = BgL_bz00_2107;
																							BgL_az00_44 = BgL_az00_2106;
																							BgL_idz00_43 = BgL_idz00_2104;
																							goto BgL_tagzd2102zd2_46;
																						}
																					else
																						{	/* Expand/garith.scm 45 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Expand/garith.scm 45 */
																					if (SYMBOLP(BgL_carzd2749zd2_266))
																						{	/* Expand/garith.scm 45 */
																							obj_t BgL_carzd2796zd2_279;

																							BgL_carzd2796zd2_279 =
																								CAR(
																								((obj_t) BgL_cdrzd2750zd2_267));
																							if (INTEGERP
																								(BgL_carzd2796zd2_279))
																								{	/* Expand/garith.scm 45 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_cdrzd2750zd2_267))))
																										{
																											obj_t BgL_bz00_2121;
																											obj_t BgL_az00_2120;
																											obj_t BgL_idz00_2118;

																											BgL_idz00_2118 =
																												CAR(BgL_xz00_4);
																											BgL_az00_2120 =
																												BgL_carzd2749zd2_266;
																											BgL_bz00_2121 =
																												BgL_carzd2796zd2_279;
																											BgL_bz00_49 =
																												BgL_bz00_2121;
																											BgL_az00_48 =
																												BgL_az00_2120;
																											BgL_idz00_47 =
																												BgL_idz00_2118;
																											goto BgL_tagzd2103zd2_50;
																										}
																									else
																										{	/* Expand/garith.scm 45 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Expand/garith.scm 45 */
																									obj_t BgL_cdrzd2817zd2_285;

																									BgL_cdrzd2817zd2_285 =
																										CDR(BgL_xz00_4);
																									{	/* Expand/garith.scm 45 */
																										obj_t BgL_cdrzd2824zd2_286;

																										BgL_cdrzd2824zd2_286 =
																											CDR(
																											((obj_t)
																												BgL_cdrzd2817zd2_285));
																										if (NULLP(CDR(((obj_t)
																														BgL_cdrzd2824zd2_286))))
																											{	/* Expand/garith.scm 45 */
																												obj_t
																													BgL_arg1301z00_289;
																												obj_t
																													BgL_arg1303z00_290;
																												obj_t
																													BgL_arg1304z00_291;
																												BgL_arg1301z00_289 =
																													CAR(BgL_xz00_4);
																												BgL_arg1303z00_290 =
																													CAR(((obj_t)
																														BgL_cdrzd2817zd2_285));
																												BgL_arg1304z00_291 =
																													CAR(((obj_t)
																														BgL_cdrzd2824zd2_286));
																												{
																													obj_t BgL_bz00_2136;
																													obj_t BgL_az00_2135;
																													obj_t BgL_idz00_2134;

																													BgL_idz00_2134 =
																														BgL_arg1301z00_289;
																													BgL_az00_2135 =
																														BgL_arg1303z00_290;
																													BgL_bz00_2136 =
																														BgL_arg1304z00_291;
																													BgL_bz00_53 =
																														BgL_bz00_2136;
																													BgL_az00_52 =
																														BgL_az00_2135;
																													BgL_idz00_51 =
																														BgL_idz00_2134;
																													goto
																														BgL_tagzd2104zd2_54;
																												}
																											}
																										else
																											{	/* Expand/garith.scm 45 */
																												return BFALSE;
																											}
																									}
																								}
																						}
																					else
																						{	/* Expand/garith.scm 45 */
																							obj_t BgL_cdrzd2840zd2_293;

																							BgL_cdrzd2840zd2_293 =
																								CDR(BgL_xz00_4);
																							{	/* Expand/garith.scm 45 */
																								obj_t BgL_cdrzd2847zd2_294;

																								BgL_cdrzd2847zd2_294 =
																									CDR(
																									((obj_t)
																										BgL_cdrzd2840zd2_293));
																								if (NULLP(CDR(((obj_t)
																												BgL_cdrzd2847zd2_294))))
																									{	/* Expand/garith.scm 45 */
																										obj_t BgL_arg1309z00_297;
																										obj_t BgL_arg1310z00_298;
																										obj_t BgL_arg1311z00_299;

																										BgL_arg1309z00_297 =
																											CAR(BgL_xz00_4);
																										BgL_arg1310z00_298 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2840zd2_293));
																										BgL_arg1311z00_299 =
																											CAR(((obj_t)
																												BgL_cdrzd2847zd2_294));
																										{
																											obj_t BgL_bz00_2151;
																											obj_t BgL_az00_2150;
																											obj_t BgL_idz00_2149;

																											BgL_idz00_2149 =
																												BgL_arg1309z00_297;
																											BgL_az00_2150 =
																												BgL_arg1310z00_298;
																											BgL_bz00_2151 =
																												BgL_arg1311z00_299;
																											BgL_bz00_53 =
																												BgL_bz00_2151;
																											BgL_az00_52 =
																												BgL_az00_2150;
																											BgL_idz00_51 =
																												BgL_idz00_2149;
																											goto BgL_tagzd2104zd2_54;
																										}
																									}
																								else
																									{	/* Expand/garith.scm 45 */
																										return BFALSE;
																									}
																							}
																						}
																				}
																		}
																	else
																		{	/* Expand/garith.scm 45 */
																			if (SYMBOLP(BgL_carzd2749zd2_266))
																				{	/* Expand/garith.scm 45 */
																					obj_t BgL_carzd2876zd2_305;

																					BgL_carzd2876zd2_305 =
																						CAR(((obj_t) BgL_cdrzd2750zd2_267));
																					if (INTEGERP(BgL_carzd2876zd2_305))
																						{	/* Expand/garith.scm 45 */
																							if (NULLP(CDR(
																										((obj_t)
																											BgL_cdrzd2750zd2_267))))
																								{
																									obj_t BgL_bz00_2165;
																									obj_t BgL_az00_2164;
																									obj_t BgL_idz00_2162;

																									BgL_idz00_2162 =
																										CAR(BgL_xz00_4);
																									BgL_az00_2164 =
																										BgL_carzd2749zd2_266;
																									BgL_bz00_2165 =
																										BgL_carzd2876zd2_305;
																									BgL_bz00_49 = BgL_bz00_2165;
																									BgL_az00_48 = BgL_az00_2164;
																									BgL_idz00_47 = BgL_idz00_2162;
																									goto BgL_tagzd2103zd2_50;
																								}
																							else
																								{	/* Expand/garith.scm 45 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Expand/garith.scm 45 */
																							obj_t BgL_cdrzd2897zd2_311;

																							BgL_cdrzd2897zd2_311 =
																								CDR(BgL_xz00_4);
																							{	/* Expand/garith.scm 45 */
																								obj_t BgL_cdrzd2904zd2_312;

																								BgL_cdrzd2904zd2_312 =
																									CDR(
																									((obj_t)
																										BgL_cdrzd2897zd2_311));
																								if (NULLP(CDR(((obj_t)
																												BgL_cdrzd2904zd2_312))))
																									{	/* Expand/garith.scm 45 */
																										obj_t BgL_arg1324z00_315;
																										obj_t BgL_arg1325z00_316;
																										obj_t BgL_arg1326z00_317;

																										BgL_arg1324z00_315 =
																											CAR(BgL_xz00_4);
																										BgL_arg1325z00_316 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2897zd2_311));
																										BgL_arg1326z00_317 =
																											CAR(((obj_t)
																												BgL_cdrzd2904zd2_312));
																										{
																											obj_t BgL_bz00_2180;
																											obj_t BgL_az00_2179;
																											obj_t BgL_idz00_2178;

																											BgL_idz00_2178 =
																												BgL_arg1324z00_315;
																											BgL_az00_2179 =
																												BgL_arg1325z00_316;
																											BgL_bz00_2180 =
																												BgL_arg1326z00_317;
																											BgL_bz00_53 =
																												BgL_bz00_2180;
																											BgL_az00_52 =
																												BgL_az00_2179;
																											BgL_idz00_51 =
																												BgL_idz00_2178;
																											goto BgL_tagzd2104zd2_54;
																										}
																									}
																								else
																									{	/* Expand/garith.scm 45 */
																										return BFALSE;
																									}
																							}
																						}
																				}
																			else
																				{	/* Expand/garith.scm 45 */
																					obj_t BgL_cdrzd2920zd2_319;

																					BgL_cdrzd2920zd2_319 =
																						CDR(BgL_xz00_4);
																					{	/* Expand/garith.scm 45 */
																						obj_t BgL_cdrzd2927zd2_320;

																						BgL_cdrzd2927zd2_320 =
																							CDR(
																							((obj_t) BgL_cdrzd2920zd2_319));
																						if (NULLP(CDR(
																									((obj_t)
																										BgL_cdrzd2927zd2_320))))
																							{	/* Expand/garith.scm 45 */
																								obj_t BgL_arg1330z00_323;
																								obj_t BgL_arg1331z00_324;
																								obj_t BgL_arg1334z00_325;

																								BgL_arg1330z00_323 =
																									CAR(BgL_xz00_4);
																								BgL_arg1331z00_324 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2920zd2_319));
																								BgL_arg1334z00_325 =
																									CAR(((obj_t)
																										BgL_cdrzd2927zd2_320));
																								{
																									obj_t BgL_bz00_2195;
																									obj_t BgL_az00_2194;
																									obj_t BgL_idz00_2193;

																									BgL_idz00_2193 =
																										BgL_arg1330z00_323;
																									BgL_az00_2194 =
																										BgL_arg1331z00_324;
																									BgL_bz00_2195 =
																										BgL_arg1334z00_325;
																									BgL_bz00_53 = BgL_bz00_2195;
																									BgL_az00_52 = BgL_az00_2194;
																									BgL_idz00_51 = BgL_idz00_2193;
																									goto BgL_tagzd2104zd2_54;
																								}
																							}
																						else
																							{	/* Expand/garith.scm 45 */
																								return BFALSE;
																							}
																					}
																				}
																		}
																}
															}
													}
												else
													{	/* Expand/garith.scm 45 */
														obj_t BgL_cdrzd2942zd2_328;

														BgL_cdrzd2942zd2_328 = CDR(BgL_xz00_4);
														{	/* Expand/garith.scm 45 */
															obj_t BgL_carzd2947zd2_329;
															obj_t BgL_cdrzd2948zd2_330;

															BgL_carzd2947zd2_329 =
																CAR(((obj_t) BgL_cdrzd2942zd2_328));
															BgL_cdrzd2948zd2_330 =
																CDR(((obj_t) BgL_cdrzd2942zd2_328));
															if (INTEGERP(BgL_carzd2947zd2_329))
																{	/* Expand/garith.scm 45 */
																	obj_t BgL_carzd2952zd2_332;

																	BgL_carzd2952zd2_332 =
																		CAR(((obj_t) BgL_cdrzd2948zd2_330));
																	if (SYMBOLP(BgL_carzd2952zd2_332))
																		{	/* Expand/garith.scm 45 */
																			if (NULLP(CDR(
																						((obj_t) BgL_cdrzd2948zd2_330))))
																				{
																					obj_t BgL_bz00_2214;
																					obj_t BgL_az00_2213;
																					obj_t BgL_idz00_2211;

																					BgL_idz00_2211 = CAR(BgL_xz00_4);
																					BgL_az00_2213 = BgL_carzd2947zd2_329;
																					BgL_bz00_2214 = BgL_carzd2952zd2_332;
																					BgL_bz00_45 = BgL_bz00_2214;
																					BgL_az00_44 = BgL_az00_2213;
																					BgL_idz00_43 = BgL_idz00_2211;
																					goto BgL_tagzd2102zd2_46;
																				}
																			else
																				{	/* Expand/garith.scm 45 */
																					return BFALSE;
																				}
																		}
																	else
																		{	/* Expand/garith.scm 45 */
																			if (SYMBOLP(BgL_carzd2947zd2_329))
																				{	/* Expand/garith.scm 45 */
																					obj_t BgL_carzd2999zd2_342;

																					BgL_carzd2999zd2_342 =
																						CAR(((obj_t) BgL_cdrzd2948zd2_330));
																					if (INTEGERP(BgL_carzd2999zd2_342))
																						{	/* Expand/garith.scm 45 */
																							if (NULLP(CDR(
																										((obj_t)
																											BgL_cdrzd2948zd2_330))))
																								{
																									obj_t BgL_bz00_2228;
																									obj_t BgL_az00_2227;
																									obj_t BgL_idz00_2225;

																									BgL_idz00_2225 =
																										CAR(BgL_xz00_4);
																									BgL_az00_2227 =
																										BgL_carzd2947zd2_329;
																									BgL_bz00_2228 =
																										BgL_carzd2999zd2_342;
																									BgL_bz00_49 = BgL_bz00_2228;
																									BgL_az00_48 = BgL_az00_2227;
																									BgL_idz00_47 = BgL_idz00_2225;
																									goto BgL_tagzd2103zd2_50;
																								}
																							else
																								{	/* Expand/garith.scm 45 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Expand/garith.scm 45 */
																							obj_t BgL_cdrzd21024zd2_348;

																							BgL_cdrzd21024zd2_348 =
																								CDR(BgL_xz00_4);
																							{	/* Expand/garith.scm 45 */
																								obj_t BgL_cdrzd21032zd2_349;

																								BgL_cdrzd21032zd2_349 =
																									CDR(
																									((obj_t)
																										BgL_cdrzd21024zd2_348));
																								if (NULLP(CDR(((obj_t)
																												BgL_cdrzd21032zd2_349))))
																									{	/* Expand/garith.scm 45 */
																										obj_t BgL_arg1367z00_352;
																										obj_t BgL_arg1370z00_353;
																										obj_t BgL_arg1371z00_354;

																										BgL_arg1367z00_352 =
																											CAR(BgL_xz00_4);
																										BgL_arg1370z00_353 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd21024zd2_348));
																										BgL_arg1371z00_354 =
																											CAR(((obj_t)
																												BgL_cdrzd21032zd2_349));
																										{
																											obj_t BgL_bz00_2243;
																											obj_t BgL_az00_2242;
																											obj_t BgL_idz00_2241;

																											BgL_idz00_2241 =
																												BgL_arg1367z00_352;
																											BgL_az00_2242 =
																												BgL_arg1370z00_353;
																											BgL_bz00_2243 =
																												BgL_arg1371z00_354;
																											BgL_bz00_53 =
																												BgL_bz00_2243;
																											BgL_az00_52 =
																												BgL_az00_2242;
																											BgL_idz00_51 =
																												BgL_idz00_2241;
																											goto BgL_tagzd2104zd2_54;
																										}
																									}
																								else
																									{	/* Expand/garith.scm 45 */
																										return BFALSE;
																									}
																							}
																						}
																				}
																			else
																				{	/* Expand/garith.scm 45 */
																					obj_t BgL_cdrzd21051zd2_356;

																					BgL_cdrzd21051zd2_356 =
																						CDR(BgL_xz00_4);
																					{	/* Expand/garith.scm 45 */
																						obj_t BgL_cdrzd21059zd2_357;

																						BgL_cdrzd21059zd2_357 =
																							CDR(
																							((obj_t) BgL_cdrzd21051zd2_356));
																						if (NULLP(CDR(
																									((obj_t)
																										BgL_cdrzd21059zd2_357))))
																							{	/* Expand/garith.scm 45 */
																								obj_t BgL_arg1394z00_360;
																								obj_t BgL_arg1396z00_361;
																								obj_t BgL_arg1417z00_362;

																								BgL_arg1394z00_360 =
																									CAR(BgL_xz00_4);
																								BgL_arg1396z00_361 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd21051zd2_356));
																								BgL_arg1417z00_362 =
																									CAR(((obj_t)
																										BgL_cdrzd21059zd2_357));
																								{
																									obj_t BgL_bz00_2258;
																									obj_t BgL_az00_2257;
																									obj_t BgL_idz00_2256;

																									BgL_idz00_2256 =
																										BgL_arg1394z00_360;
																									BgL_az00_2257 =
																										BgL_arg1396z00_361;
																									BgL_bz00_2258 =
																										BgL_arg1417z00_362;
																									BgL_bz00_53 = BgL_bz00_2258;
																									BgL_az00_52 = BgL_az00_2257;
																									BgL_idz00_51 = BgL_idz00_2256;
																									goto BgL_tagzd2104zd2_54;
																								}
																							}
																						else
																							{	/* Expand/garith.scm 45 */
																								return BFALSE;
																							}
																					}
																				}
																		}
																}
															else
																{	/* Expand/garith.scm 45 */
																	if (SYMBOLP(BgL_carzd2947zd2_329))
																		{	/* Expand/garith.scm 45 */
																			obj_t BgL_carzd21090zd2_368;

																			BgL_carzd21090zd2_368 =
																				CAR(((obj_t) BgL_cdrzd2948zd2_330));
																			if (INTEGERP(BgL_carzd21090zd2_368))
																				{	/* Expand/garith.scm 45 */
																					if (NULLP(CDR(
																								((obj_t)
																									BgL_cdrzd2948zd2_330))))
																						{
																							obj_t BgL_bz00_2272;
																							obj_t BgL_az00_2271;
																							obj_t BgL_idz00_2269;

																							BgL_idz00_2269 = CAR(BgL_xz00_4);
																							BgL_az00_2271 =
																								BgL_carzd2947zd2_329;
																							BgL_bz00_2272 =
																								BgL_carzd21090zd2_368;
																							BgL_bz00_49 = BgL_bz00_2272;
																							BgL_az00_48 = BgL_az00_2271;
																							BgL_idz00_47 = BgL_idz00_2269;
																							goto BgL_tagzd2103zd2_50;
																						}
																					else
																						{	/* Expand/garith.scm 45 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Expand/garith.scm 45 */
																					obj_t BgL_cdrzd21113zd2_374;

																					BgL_cdrzd21113zd2_374 =
																						CDR(BgL_xz00_4);
																					{	/* Expand/garith.scm 45 */
																						obj_t BgL_cdrzd21121zd2_375;

																						BgL_cdrzd21121zd2_375 =
																							CDR(
																							((obj_t) BgL_cdrzd21113zd2_374));
																						if (NULLP(CDR(
																									((obj_t)
																										BgL_cdrzd21121zd2_375))))
																							{	/* Expand/garith.scm 45 */
																								obj_t BgL_arg1461z00_378;
																								obj_t BgL_arg1462z00_379;
																								obj_t BgL_arg1464z00_380;

																								BgL_arg1461z00_378 =
																									CAR(BgL_xz00_4);
																								BgL_arg1462z00_379 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd21113zd2_374));
																								BgL_arg1464z00_380 =
																									CAR(((obj_t)
																										BgL_cdrzd21121zd2_375));
																								{
																									obj_t BgL_bz00_2287;
																									obj_t BgL_az00_2286;
																									obj_t BgL_idz00_2285;

																									BgL_idz00_2285 =
																										BgL_arg1461z00_378;
																									BgL_az00_2286 =
																										BgL_arg1462z00_379;
																									BgL_bz00_2287 =
																										BgL_arg1464z00_380;
																									BgL_bz00_53 = BgL_bz00_2287;
																									BgL_az00_52 = BgL_az00_2286;
																									BgL_idz00_51 = BgL_idz00_2285;
																									goto BgL_tagzd2104zd2_54;
																								}
																							}
																						else
																							{	/* Expand/garith.scm 45 */
																								return BFALSE;
																							}
																					}
																				}
																		}
																	else
																		{	/* Expand/garith.scm 45 */
																			obj_t BgL_cdrzd21139zd2_382;

																			BgL_cdrzd21139zd2_382 = CDR(BgL_xz00_4);
																			{	/* Expand/garith.scm 45 */
																				obj_t BgL_cdrzd21146zd2_383;

																				BgL_cdrzd21146zd2_383 =
																					CDR(((obj_t) BgL_cdrzd21139zd2_382));
																				if (NULLP(CDR(
																							((obj_t) BgL_cdrzd21146zd2_383))))
																					{	/* Expand/garith.scm 45 */
																						obj_t BgL_arg1476z00_386;
																						obj_t BgL_arg1477z00_387;
																						obj_t BgL_arg1489z00_388;

																						BgL_arg1476z00_386 =
																							CAR(BgL_xz00_4);
																						BgL_arg1477z00_387 =
																							CAR(
																							((obj_t) BgL_cdrzd21139zd2_382));
																						BgL_arg1489z00_388 =
																							CAR(
																							((obj_t) BgL_cdrzd21146zd2_383));
																						{
																							obj_t BgL_bz00_2302;
																							obj_t BgL_az00_2301;
																							obj_t BgL_idz00_2300;

																							BgL_idz00_2300 =
																								BgL_arg1476z00_386;
																							BgL_az00_2301 =
																								BgL_arg1477z00_387;
																							BgL_bz00_2302 =
																								BgL_arg1489z00_388;
																							BgL_bz00_53 = BgL_bz00_2302;
																							BgL_az00_52 = BgL_az00_2301;
																							BgL_idz00_51 = BgL_idz00_2300;
																							goto BgL_tagzd2104zd2_54;
																						}
																					}
																				else
																					{	/* Expand/garith.scm 45 */
																						return BFALSE;
																					}
																			}
																		}
																}
														}
													}
											}
										else
											{	/* Expand/garith.scm 45 */
												return BFALSE;
											}
									}
								else
									{	/* Expand/garith.scm 45 */
										obj_t BgL_cdrzd21182zd2_390;

										BgL_cdrzd21182zd2_390 = CDR(BgL_xz00_4);
										{	/* Expand/garith.scm 45 */
											obj_t BgL_carzd21187zd2_391;
											obj_t BgL_cdrzd21188zd2_392;

											BgL_carzd21187zd2_391 =
												CAR(((obj_t) BgL_cdrzd21182zd2_390));
											BgL_cdrzd21188zd2_392 =
												CDR(((obj_t) BgL_cdrzd21182zd2_390));
											if (INTEGERP(BgL_carzd21187zd2_391))
												{	/* Expand/garith.scm 45 */
													if (PAIRP(BgL_cdrzd21188zd2_392))
														{	/* Expand/garith.scm 45 */
															obj_t BgL_carzd21192zd2_395;

															BgL_carzd21192zd2_395 =
																CAR(BgL_cdrzd21188zd2_392);
															if (SYMBOLP(BgL_carzd21192zd2_395))
																{	/* Expand/garith.scm 45 */
																	if (NULLP(CDR(BgL_cdrzd21188zd2_392)))
																		{
																			obj_t BgL_bz00_2321;
																			obj_t BgL_az00_2320;
																			obj_t BgL_idz00_2318;

																			BgL_idz00_2318 = CAR(BgL_xz00_4);
																			BgL_az00_2320 = BgL_carzd21187zd2_391;
																			BgL_bz00_2321 = BgL_carzd21192zd2_395;
																			BgL_bz00_45 = BgL_bz00_2321;
																			BgL_az00_44 = BgL_az00_2320;
																			BgL_idz00_43 = BgL_idz00_2318;
																			goto BgL_tagzd2102zd2_46;
																		}
																	else
																		{	/* Expand/garith.scm 45 */
																			return BFALSE;
																		}
																}
															else
																{	/* Expand/garith.scm 45 */
																	if (SYMBOLP(BgL_carzd21187zd2_391))
																		{	/* Expand/garith.scm 45 */
																			obj_t BgL_carzd21239zd2_405;

																			BgL_carzd21239zd2_405 =
																				CAR(((obj_t) BgL_cdrzd21188zd2_392));
																			if (INTEGERP(BgL_carzd21239zd2_405))
																				{	/* Expand/garith.scm 45 */
																					if (NULLP(CDR(
																								((obj_t)
																									BgL_cdrzd21188zd2_392))))
																						{
																							obj_t BgL_bz00_2335;
																							obj_t BgL_az00_2334;
																							obj_t BgL_idz00_2332;

																							BgL_idz00_2332 = CAR(BgL_xz00_4);
																							BgL_az00_2334 =
																								BgL_carzd21187zd2_391;
																							BgL_bz00_2335 =
																								BgL_carzd21239zd2_405;
																							BgL_bz00_49 = BgL_bz00_2335;
																							BgL_az00_48 = BgL_az00_2334;
																							BgL_idz00_47 = BgL_idz00_2332;
																							goto BgL_tagzd2103zd2_50;
																						}
																					else
																						{	/* Expand/garith.scm 45 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Expand/garith.scm 45 */
																					obj_t BgL_cdrzd21264zd2_411;

																					BgL_cdrzd21264zd2_411 =
																						CDR(BgL_xz00_4);
																					{	/* Expand/garith.scm 45 */
																						obj_t BgL_cdrzd21272zd2_412;

																						BgL_cdrzd21272zd2_412 =
																							CDR(
																							((obj_t) BgL_cdrzd21264zd2_411));
																						if (NULLP(CDR(
																									((obj_t)
																										BgL_cdrzd21272zd2_412))))
																							{	/* Expand/garith.scm 45 */
																								obj_t BgL_arg1552z00_415;
																								obj_t BgL_arg1553z00_416;
																								obj_t BgL_arg1558z00_417;

																								BgL_arg1552z00_415 =
																									CAR(BgL_xz00_4);
																								BgL_arg1553z00_416 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd21264zd2_411));
																								BgL_arg1558z00_417 =
																									CAR(((obj_t)
																										BgL_cdrzd21272zd2_412));
																								{
																									obj_t BgL_bz00_2350;
																									obj_t BgL_az00_2349;
																									obj_t BgL_idz00_2348;

																									BgL_idz00_2348 =
																										BgL_arg1552z00_415;
																									BgL_az00_2349 =
																										BgL_arg1553z00_416;
																									BgL_bz00_2350 =
																										BgL_arg1558z00_417;
																									BgL_bz00_53 = BgL_bz00_2350;
																									BgL_az00_52 = BgL_az00_2349;
																									BgL_idz00_51 = BgL_idz00_2348;
																									goto BgL_tagzd2104zd2_54;
																								}
																							}
																						else
																							{	/* Expand/garith.scm 45 */
																								return BFALSE;
																							}
																					}
																				}
																		}
																	else
																		{	/* Expand/garith.scm 45 */
																			obj_t BgL_cdrzd21291zd2_419;

																			BgL_cdrzd21291zd2_419 = CDR(BgL_xz00_4);
																			{	/* Expand/garith.scm 45 */
																				obj_t BgL_cdrzd21299zd2_420;

																				BgL_cdrzd21299zd2_420 =
																					CDR(((obj_t) BgL_cdrzd21291zd2_419));
																				if (NULLP(CDR(
																							((obj_t) BgL_cdrzd21299zd2_420))))
																					{	/* Expand/garith.scm 45 */
																						obj_t BgL_arg1573z00_423;
																						obj_t BgL_arg1575z00_424;
																						obj_t BgL_arg1578z00_425;

																						BgL_arg1573z00_423 =
																							CAR(BgL_xz00_4);
																						BgL_arg1575z00_424 =
																							CAR(
																							((obj_t) BgL_cdrzd21291zd2_419));
																						BgL_arg1578z00_425 =
																							CAR(
																							((obj_t) BgL_cdrzd21299zd2_420));
																						{
																							obj_t BgL_bz00_2365;
																							obj_t BgL_az00_2364;
																							obj_t BgL_idz00_2363;

																							BgL_idz00_2363 =
																								BgL_arg1573z00_423;
																							BgL_az00_2364 =
																								BgL_arg1575z00_424;
																							BgL_bz00_2365 =
																								BgL_arg1578z00_425;
																							BgL_bz00_53 = BgL_bz00_2365;
																							BgL_az00_52 = BgL_az00_2364;
																							BgL_idz00_51 = BgL_idz00_2363;
																							goto BgL_tagzd2104zd2_54;
																						}
																					}
																				else
																					{	/* Expand/garith.scm 45 */
																						return BFALSE;
																					}
																			}
																		}
																}
														}
													else
														{	/* Expand/garith.scm 45 */
															return BFALSE;
														}
												}
											else
												{	/* Expand/garith.scm 45 */
													if (SYMBOLP(BgL_carzd21187zd2_391))
														{	/* Expand/garith.scm 45 */
															if (PAIRP(BgL_cdrzd21188zd2_392))
																{	/* Expand/garith.scm 45 */
																	obj_t BgL_carzd21346zd2_432;

																	BgL_carzd21346zd2_432 =
																		CAR(BgL_cdrzd21188zd2_392);
																	if (INTEGERP(BgL_carzd21346zd2_432))
																		{	/* Expand/garith.scm 45 */
																			if (NULLP(CDR(BgL_cdrzd21188zd2_392)))
																				{
																					obj_t BgL_bz00_2379;
																					obj_t BgL_az00_2378;
																					obj_t BgL_idz00_2376;

																					BgL_idz00_2376 = CAR(BgL_xz00_4);
																					BgL_az00_2378 = BgL_carzd21187zd2_391;
																					BgL_bz00_2379 = BgL_carzd21346zd2_432;
																					BgL_bz00_49 = BgL_bz00_2379;
																					BgL_az00_48 = BgL_az00_2378;
																					BgL_idz00_47 = BgL_idz00_2376;
																					goto BgL_tagzd2103zd2_50;
																				}
																			else
																				{	/* Expand/garith.scm 45 */
																					return BFALSE;
																				}
																		}
																	else
																		{	/* Expand/garith.scm 45 */
																			obj_t BgL_cdrzd21369zd2_438;

																			BgL_cdrzd21369zd2_438 = CDR(BgL_xz00_4);
																			{	/* Expand/garith.scm 45 */
																				obj_t BgL_cdrzd21377zd2_439;

																				BgL_cdrzd21377zd2_439 =
																					CDR(((obj_t) BgL_cdrzd21369zd2_438));
																				if (NULLP(CDR(
																							((obj_t) BgL_cdrzd21377zd2_439))))
																					{	/* Expand/garith.scm 45 */
																						obj_t BgL_arg1599z00_442;
																						obj_t BgL_arg1604z00_443;
																						obj_t BgL_arg1605z00_444;

																						BgL_arg1599z00_442 =
																							CAR(BgL_xz00_4);
																						BgL_arg1604z00_443 =
																							CAR(
																							((obj_t) BgL_cdrzd21369zd2_438));
																						BgL_arg1605z00_444 =
																							CAR(
																							((obj_t) BgL_cdrzd21377zd2_439));
																						{
																							obj_t BgL_bz00_2394;
																							obj_t BgL_az00_2393;
																							obj_t BgL_idz00_2392;

																							BgL_idz00_2392 =
																								BgL_arg1599z00_442;
																							BgL_az00_2393 =
																								BgL_arg1604z00_443;
																							BgL_bz00_2394 =
																								BgL_arg1605z00_444;
																							BgL_bz00_53 = BgL_bz00_2394;
																							BgL_az00_52 = BgL_az00_2393;
																							BgL_idz00_51 = BgL_idz00_2392;
																							goto BgL_tagzd2104zd2_54;
																						}
																					}
																				else
																					{	/* Expand/garith.scm 45 */
																						return BFALSE;
																					}
																			}
																		}
																}
															else
																{	/* Expand/garith.scm 45 */
																	return BFALSE;
																}
														}
													else
														{	/* Expand/garith.scm 45 */
															obj_t BgL_cdrzd21403zd2_446;

															BgL_cdrzd21403zd2_446 = CDR(BgL_xz00_4);
															{	/* Expand/garith.scm 45 */
																obj_t BgL_cdrzd21410zd2_447;

																BgL_cdrzd21410zd2_447 =
																	CDR(((obj_t) BgL_cdrzd21403zd2_446));
																if (PAIRP(BgL_cdrzd21410zd2_447))
																	{	/* Expand/garith.scm 45 */
																		if (NULLP(CDR(BgL_cdrzd21410zd2_447)))
																			{	/* Expand/garith.scm 45 */
																				obj_t BgL_arg1613z00_451;
																				obj_t BgL_arg1624z00_452;
																				obj_t BgL_arg1626z00_453;

																				BgL_arg1613z00_451 = CAR(BgL_xz00_4);
																				BgL_arg1624z00_452 =
																					CAR(((obj_t) BgL_cdrzd21403zd2_446));
																				BgL_arg1626z00_453 =
																					CAR(BgL_cdrzd21410zd2_447);
																				{
																					obj_t BgL_bz00_2409;
																					obj_t BgL_az00_2408;
																					obj_t BgL_idz00_2407;

																					BgL_idz00_2407 = BgL_arg1613z00_451;
																					BgL_az00_2408 = BgL_arg1624z00_452;
																					BgL_bz00_2409 = BgL_arg1626z00_453;
																					BgL_bz00_53 = BgL_bz00_2409;
																					BgL_az00_52 = BgL_az00_2408;
																					BgL_idz00_51 = BgL_idz00_2407;
																					goto BgL_tagzd2104zd2_54;
																				}
																			}
																		else
																			{	/* Expand/garith.scm 45 */
																				return BFALSE;
																			}
																	}
																else
																	{	/* Expand/garith.scm 45 */
																		return BFALSE;
																	}
															}
														}
												}
										}
									}
							}
						else
							{	/* Expand/garith.scm 45 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 45 */
						return BFALSE;
					}
			}
		}

	}



/* fx~0 */
	obj_t BGl_fxze70ze7zzexpand_garithmetiquez00(obj_t BgL_idz00_497)
	{
		{	/* Expand/garith.scm 43 */
			{	/* Expand/garith.scm 41 */
				bool_t BgL_test2456z00_2410;

				if (CBOOL(BGl_za2arithmeticzd2overflowza2zd2zzengine_paramz00))
					{	/* Expand/garith.scm 41 */
						BgL_test2456z00_2410 =
							CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_497,
								CNST_TABLE_REF(((long) 5))));
					}
				else
					{	/* Expand/garith.scm 41 */
						BgL_test2456z00_2410 = ((bool_t) 0);
					}
				if (BgL_test2456z00_2410)
					{	/* Expand/garith.scm 42 */
						obj_t BgL_arg1744z00_500;

						{	/* Expand/garith.scm 42 */
							obj_t BgL_arg1745z00_501;
							obj_t BgL_arg1746z00_502;

							{	/* Expand/garith.scm 42 */
								obj_t BgL_res2135z00_951;

								{	/* Expand/garith.scm 42 */
									obj_t BgL_arg1466z00_950;

									BgL_arg1466z00_950 =
										SYMBOL_TO_STRING(((obj_t) BgL_idz00_497));
									BgL_res2135z00_951 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_950);
								}
								BgL_arg1745z00_501 = BgL_res2135z00_951;
							}
							{	/* Expand/garith.scm 42 */
								obj_t BgL_res2136z00_954;

								{	/* Expand/garith.scm 42 */
									obj_t BgL_symbolz00_952;

									BgL_symbolz00_952 = CNST_TABLE_REF(((long) 6));
									{	/* Expand/garith.scm 42 */
										obj_t BgL_arg1466z00_953;

										BgL_arg1466z00_953 = SYMBOL_TO_STRING(BgL_symbolz00_952);
										BgL_res2136z00_954 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_953);
								}}
								BgL_arg1746z00_502 = BgL_res2136z00_954;
							}
							BgL_arg1744z00_500 =
								string_append(BgL_arg1745z00_501, BgL_arg1746z00_502);
						}
						return bstring_to_symbol(BgL_arg1744z00_500);
					}
				else
					{	/* Expand/garith.scm 43 */
						obj_t BgL_arg1747z00_503;

						{	/* Expand/garith.scm 43 */
							obj_t BgL_arg1754z00_504;
							obj_t BgL_arg1755z00_505;

							{	/* Expand/garith.scm 43 */
								obj_t BgL_res2138z00_959;

								{	/* Expand/garith.scm 43 */
									obj_t BgL_arg1466z00_958;

									BgL_arg1466z00_958 =
										SYMBOL_TO_STRING(((obj_t) BgL_idz00_497));
									BgL_res2138z00_959 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_958);
								}
								BgL_arg1754z00_504 = BgL_res2138z00_959;
							}
							{	/* Expand/garith.scm 43 */
								obj_t BgL_res2139z00_962;

								{	/* Expand/garith.scm 43 */
									obj_t BgL_symbolz00_960;

									BgL_symbolz00_960 = CNST_TABLE_REF(((long) 7));
									{	/* Expand/garith.scm 43 */
										obj_t BgL_arg1466z00_961;

										BgL_arg1466z00_961 = SYMBOL_TO_STRING(BgL_symbolz00_960);
										BgL_res2139z00_962 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_961);
								}}
								BgL_arg1755z00_505 = BgL_res2139z00_962;
							}
							BgL_arg1747z00_503 =
								string_append(BgL_arg1754z00_504, BgL_arg1755z00_505);
						}
						return bstring_to_symbol(BgL_arg1747z00_503);
					}
			}
		}

	}



/* expand-g+ */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzb2z60zzexpand_garithmetiquez00(obj_t
		BgL_xz00_7, obj_t BgL_ez00_8)
	{
		{	/* Expand/garith.scm 64 */
			{
				obj_t BgL_xz00_511;
				obj_t BgL_yz00_512;

				if (PAIRP(BgL_xz00_7))
					{	/* Expand/garith.scm 65 */
						if (NULLP(CDR(BgL_xz00_7)))
							{	/* Expand/garith.scm 65 */
								return BINT(((long) 0));
							}
						else
							{	/* Expand/garith.scm 65 */
								obj_t BgL_cdrzd21469zd2_518;

								BgL_cdrzd21469zd2_518 = CDR(BgL_xz00_7);
								if (PAIRP(BgL_cdrzd21469zd2_518))
									{	/* Expand/garith.scm 65 */
										if (NULLP(CDR(BgL_cdrzd21469zd2_518)))
											{	/* Expand/garith.scm 65 */
												obj_t BgL_arg1771z00_522;

												BgL_arg1771z00_522 = CAR(BgL_cdrzd21469zd2_518);
												return
													PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8,
													BgL_arg1771z00_522, BgL_ez00_8, BEOA);
											}
										else
											{	/* Expand/garith.scm 65 */
												obj_t BgL_cdrzd21479zd2_523;

												BgL_cdrzd21479zd2_523 =
													CDR(((obj_t) BgL_cdrzd21469zd2_518));
												if (PAIRP(BgL_cdrzd21479zd2_523))
													{	/* Expand/garith.scm 65 */
														if (NULLP(CDR(BgL_cdrzd21479zd2_523)))
															{	/* Expand/garith.scm 65 */
																return
																	BGl_expandzd2g2zd2zzexpand_garithmetiquez00
																	(BgL_xz00_7, BgL_ez00_8,
																	BGl_zb2zd2envz60zz__r4_numbers_6_5z00);
															}
														else
															{	/* Expand/garith.scm 65 */
																obj_t BgL_arg1778z00_528;
																obj_t BgL_arg1779z00_529;

																BgL_arg1778z00_528 =
																	CAR(((obj_t) BgL_cdrzd21469zd2_518));
																BgL_arg1779z00_529 =
																	CDR(((obj_t) BgL_cdrzd21469zd2_518));
																BgL_xz00_511 = BgL_arg1778z00_528;
																BgL_yz00_512 = BgL_arg1779z00_529;
															BgL_tagzd21459zd2_513:
																{	/* Expand/garith.scm 73 */
																	obj_t BgL_arg1808z00_537;

																	{	/* Expand/garith.scm 73 */
																		obj_t BgL_arg1809z00_538;

																		{	/* Expand/garith.scm 73 */
																			obj_t BgL_arg1811z00_539;

																			{	/* Expand/garith.scm 73 */
																				obj_t BgL_arg1820z00_540;

																				{	/* Expand/garith.scm 73 */
																					obj_t BgL_arg1821z00_541;

																					{	/* Expand/garith.scm 73 */
																						obj_t BgL_arg1822z00_542;

																						BgL_arg1822z00_542 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_yz00_512, BNIL);
																						BgL_arg1821z00_541 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 8)),
																							BgL_arg1822z00_542);
																					}
																					BgL_arg1820z00_540 =
																						PROCEDURE_ENTRY(BgL_ez00_8)
																						(BgL_ez00_8, BgL_arg1821z00_541,
																						BgL_ez00_8, BEOA);
																				}
																				BgL_arg1811z00_539 =
																					MAKE_YOUNG_PAIR(BgL_arg1820z00_540,
																					BNIL);
																			}
																			BgL_arg1809z00_538 =
																				MAKE_YOUNG_PAIR(BgL_xz00_511,
																				BgL_arg1811z00_539);
																		}
																		BgL_arg1808z00_537 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					8)), BgL_arg1809z00_538);
																	}
																	return
																		BGl_expandzd2g2zd2zzexpand_garithmetiquez00
																		(BgL_arg1808z00_537, BgL_ez00_8,
																		BGl_zb2zd2envz60zz__r4_numbers_6_5z00);
																}
															}
													}
												else
													{	/* Expand/garith.scm 65 */
														obj_t BgL_arg1784z00_532;
														obj_t BgL_arg1790z00_533;

														BgL_arg1784z00_532 =
															CAR(((obj_t) BgL_cdrzd21469zd2_518));
														BgL_arg1790z00_533 =
															CDR(((obj_t) BgL_cdrzd21469zd2_518));
														{
															obj_t BgL_yz00_2480;
															obj_t BgL_xz00_2479;

															BgL_xz00_2479 = BgL_arg1784z00_532;
															BgL_yz00_2480 = BgL_arg1790z00_533;
															BgL_yz00_512 = BgL_yz00_2480;
															BgL_xz00_511 = BgL_xz00_2479;
															goto BgL_tagzd21459zd2_513;
														}
													}
											}
									}
								else
									{	/* Expand/garith.scm 65 */
										return BFALSE;
									}
							}
					}
				else
					{	/* Expand/garith.scm 65 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-g+ */
	obj_t BGl_z62expandzd2gzb2z02zzexpand_garithmetiquez00(obj_t BgL_envz00_1556,
		obj_t BgL_xz00_1557, obj_t BgL_ez00_1558)
	{
		{	/* Expand/garith.scm 64 */
			return
				BGl_expandzd2gzb2z60zzexpand_garithmetiquez00(BgL_xz00_1557,
				BgL_ez00_1558);
		}

	}



/* expand-g- */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzd2z00zzexpand_garithmetiquez00(obj_t
		BgL_xz00_9, obj_t BgL_ez00_10)
	{
		{	/* Expand/garith.scm 78 */
			{
				obj_t BgL_xz00_546;
				obj_t BgL_yz00_547;
				obj_t BgL_xz00_543;

				if (PAIRP(BgL_xz00_9))
					{	/* Expand/garith.scm 79 */
						obj_t BgL_cdrzd21535zd2_551;

						BgL_cdrzd21535zd2_551 = CDR(BgL_xz00_9);
						if (PAIRP(BgL_cdrzd21535zd2_551))
							{	/* Expand/garith.scm 79 */
								if (NULLP(CDR(BgL_cdrzd21535zd2_551)))
									{	/* Expand/garith.scm 79 */
										BgL_xz00_543 = CAR(BgL_cdrzd21535zd2_551);
										if (INTEGERP(BgL_xz00_543))
											{	/* Expand/garith.scm 82 */
												return BINT(NEG((long) CINT(BgL_xz00_543)));
											}
										else
											{	/* Expand/garith.scm 82 */
												if (REALP(BgL_xz00_543))
													{	/* Expand/garith.scm 84 */
														return
															DOUBLE_TO_REAL(NEG(REAL_TO_DOUBLE(BgL_xz00_543)));
													}
												else
													{	/* Expand/garith.scm 87 */
														obj_t BgL_arg1845z00_571;

														{	/* Expand/garith.scm 87 */
															obj_t BgL_arg1846z00_572;

															BgL_arg1846z00_572 =
																PROCEDURE_ENTRY(BgL_ez00_10) (BgL_ez00_10,
																BgL_xz00_543, BgL_ez00_10, BEOA);
															BgL_arg1845z00_571 =
																MAKE_YOUNG_PAIR(BgL_arg1846z00_572, BNIL);
														}
														return
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
															BgL_arg1845z00_571);
									}}}
								else
									{	/* Expand/garith.scm 79 */
										obj_t BgL_cdrzd21545zd2_556;

										BgL_cdrzd21545zd2_556 =
											CDR(((obj_t) BgL_cdrzd21535zd2_551));
										if (PAIRP(BgL_cdrzd21545zd2_556))
											{	/* Expand/garith.scm 79 */
												if (NULLP(CDR(BgL_cdrzd21545zd2_556)))
													{	/* Expand/garith.scm 79 */
														return
															BGl_expandzd2g2zd2zzexpand_garithmetiquez00
															(BgL_xz00_9, BgL_ez00_10,
															BGl_zd2zd2envz00zz__r4_numbers_6_5z00);
													}
												else
													{	/* Expand/garith.scm 79 */
														obj_t BgL_arg1831z00_561;
														obj_t BgL_arg1832z00_562;

														BgL_arg1831z00_561 =
															CAR(((obj_t) BgL_cdrzd21535zd2_551));
														BgL_arg1832z00_562 =
															CDR(((obj_t) BgL_cdrzd21535zd2_551));
														BgL_xz00_546 = BgL_arg1831z00_561;
														BgL_yz00_547 = BgL_arg1832z00_562;
													BgL_tagzd21529zd2_548:
														{	/* Expand/garith.scm 91 */
															obj_t BgL_arg1847z00_573;

															{	/* Expand/garith.scm 91 */
																obj_t BgL_arg1848z00_574;

																{	/* Expand/garith.scm 91 */
																	obj_t BgL_arg1850z00_575;

																	{	/* Expand/garith.scm 91 */
																		obj_t BgL_arg1851z00_576;

																		{	/* Expand/garith.scm 91 */
																			obj_t BgL_arg1852z00_577;

																			{	/* Expand/garith.scm 91 */
																				obj_t BgL_arg1853z00_578;

																				BgL_arg1853z00_578 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_yz00_547, BNIL);
																				BgL_arg1852z00_577 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							8)), BgL_arg1853z00_578);
																			}
																			BgL_arg1851z00_576 =
																				PROCEDURE_ENTRY(BgL_ez00_10)
																				(BgL_ez00_10, BgL_arg1852z00_577,
																				BgL_ez00_10, BEOA);
																		}
																		BgL_arg1850z00_575 =
																			MAKE_YOUNG_PAIR(BgL_arg1851z00_576, BNIL);
																	}
																	BgL_arg1848z00_574 =
																		MAKE_YOUNG_PAIR(BgL_xz00_546,
																		BgL_arg1850z00_575);
																}
																BgL_arg1847z00_573 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
																	BgL_arg1848z00_574);
															}
															return
																BGl_expandzd2g2zd2zzexpand_garithmetiquez00
																(BgL_arg1847z00_573, BgL_ez00_10,
																BGl_zd2zd2envz00zz__r4_numbers_6_5z00);
														}
													}
											}
										else
											{	/* Expand/garith.scm 79 */
												obj_t BgL_arg1835z00_565;
												obj_t BgL_arg1836z00_566;

												BgL_arg1835z00_565 =
													CAR(((obj_t) BgL_cdrzd21535zd2_551));
												BgL_arg1836z00_566 =
													CDR(((obj_t) BgL_cdrzd21535zd2_551));
												{
													obj_t BgL_yz00_2539;
													obj_t BgL_xz00_2538;

													BgL_xz00_2538 = BgL_arg1835z00_565;
													BgL_yz00_2539 = BgL_arg1836z00_566;
													BgL_yz00_547 = BgL_yz00_2539;
													BgL_xz00_546 = BgL_xz00_2538;
													goto BgL_tagzd21529zd2_548;
												}
											}
									}
							}
						else
							{	/* Expand/garith.scm 79 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 79 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-g- */
	obj_t BGl_z62expandzd2gzd2z62zzexpand_garithmetiquez00(obj_t BgL_envz00_1561,
		obj_t BgL_xz00_1562, obj_t BgL_ez00_1563)
	{
		{	/* Expand/garith.scm 78 */
			return
				BGl_expandzd2gzd2z00zzexpand_garithmetiquez00(BgL_xz00_1562,
				BgL_ez00_1563);
		}

	}



/* expand-g* */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gza2z70zzexpand_garithmetiquez00(obj_t
		BgL_xz00_11, obj_t BgL_ez00_12)
	{
		{	/* Expand/garith.scm 96 */
			{
				obj_t BgL_xz00_583;
				obj_t BgL_yz00_584;

				if (PAIRP(BgL_xz00_11))
					{	/* Expand/garith.scm 97 */
						if (NULLP(CDR(BgL_xz00_11)))
							{	/* Expand/garith.scm 97 */
								return BINT(((long) 1));
							}
						else
							{	/* Expand/garith.scm 97 */
								obj_t BgL_cdrzd21603zd2_590;

								BgL_cdrzd21603zd2_590 = CDR(BgL_xz00_11);
								if (PAIRP(BgL_cdrzd21603zd2_590))
									{	/* Expand/garith.scm 97 */
										if (NULLP(CDR(BgL_cdrzd21603zd2_590)))
											{	/* Expand/garith.scm 97 */
												obj_t BgL_arg1861z00_594;

												BgL_arg1861z00_594 = CAR(BgL_cdrzd21603zd2_590);
												return
													PROCEDURE_ENTRY(BgL_ez00_12) (BgL_ez00_12,
													BgL_arg1861z00_594, BgL_ez00_12, BEOA);
											}
										else
											{	/* Expand/garith.scm 97 */
												obj_t BgL_cdrzd21613zd2_595;

												BgL_cdrzd21613zd2_595 =
													CDR(((obj_t) BgL_cdrzd21603zd2_590));
												if (PAIRP(BgL_cdrzd21613zd2_595))
													{	/* Expand/garith.scm 97 */
														if (NULLP(CDR(BgL_cdrzd21613zd2_595)))
															{	/* Expand/garith.scm 97 */
																return
																	BGl_expandzd2g2zd2zzexpand_garithmetiquez00
																	(BgL_xz00_11, BgL_ez00_12,
																	BGl_za2zd2envz70zz__r4_numbers_6_5z00);
															}
														else
															{	/* Expand/garith.scm 97 */
																obj_t BgL_arg1865z00_600;
																obj_t BgL_arg1866z00_601;

																BgL_arg1865z00_600 =
																	CAR(((obj_t) BgL_cdrzd21603zd2_590));
																BgL_arg1866z00_601 =
																	CDR(((obj_t) BgL_cdrzd21603zd2_590));
																BgL_xz00_583 = BgL_arg1865z00_600;
																BgL_yz00_584 = BgL_arg1866z00_601;
															BgL_tagzd21593zd2_585:
																{	/* Expand/garith.scm 105 */
																	obj_t BgL_arg1876z00_609;

																	{	/* Expand/garith.scm 105 */
																		obj_t BgL_arg1877z00_610;

																		{	/* Expand/garith.scm 105 */
																			obj_t BgL_arg1878z00_611;

																			{	/* Expand/garith.scm 105 */
																				obj_t BgL_arg1879z00_612;

																				{	/* Expand/garith.scm 105 */
																					obj_t BgL_arg1881z00_613;

																					{	/* Expand/garith.scm 105 */
																						obj_t BgL_arg1882z00_614;

																						BgL_arg1882z00_614 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_yz00_584, BNIL);
																						BgL_arg1881z00_613 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 10)),
																							BgL_arg1882z00_614);
																					}
																					BgL_arg1879z00_612 =
																						PROCEDURE_ENTRY(BgL_ez00_12)
																						(BgL_ez00_12, BgL_arg1881z00_613,
																						BgL_ez00_12, BEOA);
																				}
																				BgL_arg1878z00_611 =
																					MAKE_YOUNG_PAIR(BgL_arg1879z00_612,
																					BNIL);
																			}
																			BgL_arg1877z00_610 =
																				MAKE_YOUNG_PAIR(BgL_xz00_583,
																				BgL_arg1878z00_611);
																		}
																		BgL_arg1876z00_609 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					10)), BgL_arg1877z00_610);
																	}
																	return
																		BGl_expandzd2g2zd2zzexpand_garithmetiquez00
																		(BgL_arg1876z00_609, BgL_ez00_12,
																		BGl_za2zd2envz70zz__r4_numbers_6_5z00);
																}
															}
													}
												else
													{	/* Expand/garith.scm 97 */
														obj_t BgL_arg1870z00_604;
														obj_t BgL_arg1871z00_605;

														BgL_arg1870z00_604 =
															CAR(((obj_t) BgL_cdrzd21603zd2_590));
														BgL_arg1871z00_605 =
															CDR(((obj_t) BgL_cdrzd21603zd2_590));
														{
															obj_t BgL_yz00_2589;
															obj_t BgL_xz00_2588;

															BgL_xz00_2588 = BgL_arg1870z00_604;
															BgL_yz00_2589 = BgL_arg1871z00_605;
															BgL_yz00_584 = BgL_yz00_2589;
															BgL_xz00_583 = BgL_xz00_2588;
															goto BgL_tagzd21593zd2_585;
														}
													}
											}
									}
								else
									{	/* Expand/garith.scm 97 */
										return BFALSE;
									}
							}
					}
				else
					{	/* Expand/garith.scm 97 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-g* */
	obj_t BGl_z62expandzd2gza2z12zzexpand_garithmetiquez00(obj_t BgL_envz00_1567,
		obj_t BgL_xz00_1568, obj_t BgL_ez00_1569)
	{
		{	/* Expand/garith.scm 96 */
			return
				BGl_expandzd2gza2z70zzexpand_garithmetiquez00(BgL_xz00_1568,
				BgL_ez00_1569);
		}

	}



/* expand-g/ */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzf2z20zzexpand_garithmetiquez00(obj_t
		BgL_xz00_13, obj_t BgL_ez00_14)
	{
		{	/* Expand/garith.scm 110 */
			{
				obj_t BgL_az00_620;
				obj_t BgL_bz00_621;
				obj_t BgL_az00_617;
				obj_t BgL_bz00_618;
				obj_t BgL_xz00_615;

				if (PAIRP(BgL_xz00_13))
					{	/* Expand/garith.scm 111 */
						obj_t BgL_cdrzd21670zd2_625;

						BgL_cdrzd21670zd2_625 = CDR(BgL_xz00_13);
						if (PAIRP(BgL_cdrzd21670zd2_625))
							{	/* Expand/garith.scm 111 */
								if (NULLP(CDR(BgL_cdrzd21670zd2_625)))
									{	/* Expand/garith.scm 111 */
										BgL_xz00_615 = CAR(BgL_cdrzd21670zd2_625);
										{	/* Expand/garith.scm 113 */
											obj_t BgL_arg1902z00_645;

											{	/* Expand/garith.scm 113 */
												obj_t BgL_arg1903z00_646;

												{	/* Expand/garith.scm 113 */
													obj_t BgL_arg1904z00_647;

													BgL_arg1904z00_647 =
														PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
														BgL_xz00_615, BgL_ez00_14, BEOA);
													BgL_arg1903z00_646 =
														MAKE_YOUNG_PAIR(BgL_arg1904z00_647, BNIL);
												}
												BgL_arg1902z00_645 =
													MAKE_YOUNG_PAIR(BINT(((long) 1)), BgL_arg1903z00_646);
											}
											return
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
												BgL_arg1902z00_645);
									}}
								else
									{	/* Expand/garith.scm 111 */
										obj_t BgL_cdrzd21686zd2_631;

										BgL_cdrzd21686zd2_631 =
											CDR(((obj_t) BgL_cdrzd21670zd2_625));
										if (PAIRP(BgL_cdrzd21686zd2_631))
											{	/* Expand/garith.scm 111 */
												if (NULLP(CDR(BgL_cdrzd21686zd2_631)))
													{	/* Expand/garith.scm 111 */
														obj_t BgL_arg1891z00_635;
														obj_t BgL_arg1892z00_636;

														BgL_arg1891z00_635 =
															CAR(((obj_t) BgL_cdrzd21670zd2_625));
														BgL_arg1892z00_636 = CAR(BgL_cdrzd21686zd2_631);
														BgL_az00_617 = BgL_arg1891z00_635;
														BgL_bz00_618 = BgL_arg1892z00_636;
														{	/* Expand/garith.scm 116 */
															bool_t BgL_test2482z00_2620;

															if (BGl_expandzd2gzd2numberzf3zf3zzexpand_garithmetiquez00(BgL_az00_617))
																{	/* Expand/garith.scm 116 */
																	BgL_test2482z00_2620 =
																		BGl_expandzd2gzd2numberzf3zf3zzexpand_garithmetiquez00
																		(BgL_bz00_618);
																}
															else
																{	/* Expand/garith.scm 116 */
																	BgL_test2482z00_2620 = ((bool_t) 0);
																}
															if (BgL_test2482z00_2620)
																{	/* Expand/garith.scm 117 */
																	bool_t BgL_test2484z00_2624;

																	if (INTEGERP(BgL_bz00_618))
																		{	/* Expand/garith.scm 117 */
																			BgL_test2484z00_2624 =
																				(
																				(long) CINT(BgL_bz00_618) ==
																				((long) 0));
																		}
																	else
																		{	/* Expand/garith.scm 117 */
																			BgL_test2484z00_2624 =
																				BGl_2zd3zd3zz__r4_numbers_6_5z00
																				(BgL_bz00_618, BINT(((long) 0)));
																		}
																	if (BgL_test2484z00_2624)
																		{	/* Expand/garith.scm 118 */
																			obj_t BgL_arg1909z00_652;

																			{	/* Expand/garith.scm 118 */
																				obj_t BgL_arg1910z00_653;

																				{	/* Expand/garith.scm 118 */
																					obj_t BgL_arg1911z00_654;

																					BgL_arg1911z00_654 =
																						MAKE_YOUNG_PAIR(BgL_bz00_618, BNIL);
																					BgL_arg1910z00_653 =
																						MAKE_YOUNG_PAIR(BgL_az00_617,
																						BgL_arg1911z00_654);
																				}
																				BgL_arg1909z00_652 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							11)), BgL_arg1910z00_653);
																			}
																			return
																				PROCEDURE_ENTRY(BgL_ez00_14)
																				(BgL_ez00_14, BgL_arg1909z00_652,
																				BgL_ez00_14, BEOA);
																		}
																	else
																		{	/* Expand/garith.scm 117 */
																			return
																				BGl_2zf2zf2zz__r4_numbers_6_5z00
																				(BgL_az00_617, BgL_bz00_618);
																		}
																}
															else
																{	/* Expand/garith.scm 121 */
																	obj_t BgL_arg1912z00_656;

																	{	/* Expand/garith.scm 121 */
																		obj_t BgL_arg1913z00_657;

																		{	/* Expand/garith.scm 121 */
																			obj_t BgL_arg1914z00_658;

																			BgL_arg1914z00_658 =
																				MAKE_YOUNG_PAIR(BgL_bz00_618, BNIL);
																			BgL_arg1913z00_657 =
																				MAKE_YOUNG_PAIR(BgL_az00_617,
																				BgL_arg1914z00_658);
																		}
																		BgL_arg1912z00_656 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					11)), BgL_arg1913z00_657);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
																		BgL_arg1912z00_656, BgL_ez00_14, BEOA);
																}
														}
													}
												else
													{	/* Expand/garith.scm 111 */
														obj_t BgL_arg1893z00_638;
														obj_t BgL_arg1895z00_639;

														BgL_arg1893z00_638 =
															CAR(((obj_t) BgL_cdrzd21670zd2_625));
														BgL_arg1895z00_639 =
															CDR(((obj_t) BgL_cdrzd21670zd2_625));
														BgL_az00_620 = BgL_arg1893z00_638;
														BgL_bz00_621 = BgL_arg1895z00_639;
													BgL_tagzd21663zd2_622:
														{	/* Expand/garith.scm 123 */
															obj_t BgL_arg1915z00_660;

															{	/* Expand/garith.scm 123 */
																obj_t BgL_arg1916z00_661;

																{	/* Expand/garith.scm 123 */
																	obj_t BgL_arg1917z00_662;

																	{	/* Expand/garith.scm 123 */
																		obj_t BgL_arg1918z00_663;

																		{	/* Expand/garith.scm 123 */
																			obj_t BgL_arg1919z00_664;

																			BgL_arg1919z00_664 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_bz00_621, BNIL);
																			BgL_arg1918z00_663 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						10)), BgL_arg1919z00_664);
																		}
																		BgL_arg1917z00_662 =
																			MAKE_YOUNG_PAIR(BgL_arg1918z00_663, BNIL);
																	}
																	BgL_arg1916z00_661 =
																		MAKE_YOUNG_PAIR(BgL_az00_620,
																		BgL_arg1917z00_662);
																}
																BgL_arg1915z00_660 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
																	BgL_arg1916z00_661);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
																BgL_arg1915z00_660, BgL_ez00_14, BEOA);
														}
													}
											}
										else
											{	/* Expand/garith.scm 111 */
												obj_t BgL_arg1897z00_642;
												obj_t BgL_arg1898z00_643;

												BgL_arg1897z00_642 =
													CAR(((obj_t) BgL_cdrzd21670zd2_625));
												BgL_arg1898z00_643 =
													CDR(((obj_t) BgL_cdrzd21670zd2_625));
												{
													obj_t BgL_bz00_2671;
													obj_t BgL_az00_2670;

													BgL_az00_2670 = BgL_arg1897z00_642;
													BgL_bz00_2671 = BgL_arg1898z00_643;
													BgL_bz00_621 = BgL_bz00_2671;
													BgL_az00_620 = BgL_az00_2670;
													goto BgL_tagzd21663zd2_622;
												}
											}
									}
							}
						else
							{	/* Expand/garith.scm 111 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 111 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-g/ */
	obj_t BGl_z62expandzd2gzf2z42zzexpand_garithmetiquez00(obj_t BgL_envz00_1572,
		obj_t BgL_xz00_1573, obj_t BgL_ez00_1574)
	{
		{	/* Expand/garith.scm 110 */
			return
				BGl_expandzd2gzf2z20zzexpand_garithmetiquez00(BgL_xz00_1573,
				BgL_ez00_1574);
		}

	}



/* expand-g= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzd3z01zzexpand_garithmetiquez00(obj_t
		BgL_xz00_15, obj_t BgL_ez00_16)
	{
		{	/* Expand/garith.scm 128 */
			{
				obj_t BgL_xz00_667;
				obj_t BgL_yz00_668;

				if (PAIRP(BgL_xz00_15))
					{	/* Expand/garith.scm 129 */
						obj_t BgL_cdrzd21740zd2_672;

						BgL_cdrzd21740zd2_672 = CDR(BgL_xz00_15);
						if (PAIRP(BgL_cdrzd21740zd2_672))
							{	/* Expand/garith.scm 129 */
								obj_t BgL_cdrzd21742zd2_674;

								BgL_cdrzd21742zd2_674 = CDR(BgL_cdrzd21740zd2_672);
								if (PAIRP(BgL_cdrzd21742zd2_674))
									{	/* Expand/garith.scm 129 */
										if (NULLP(CDR(BgL_cdrzd21742zd2_674)))
											{	/* Expand/garith.scm 129 */
												return
													BGl_expandzd2g2zd2zzexpand_garithmetiquez00
													(BgL_xz00_15, BgL_ez00_16,
													BGl_zd3zd2envz01zz__r4_numbers_6_5z00);
											}
										else
											{	/* Expand/garith.scm 129 */
												obj_t BgL_arg1925z00_679;
												obj_t BgL_arg1926z00_680;

												BgL_arg1925z00_679 =
													CAR(((obj_t) BgL_cdrzd21740zd2_672));
												BgL_arg1926z00_680 =
													CDR(((obj_t) BgL_cdrzd21740zd2_672));
												BgL_xz00_667 = BgL_arg1925z00_679;
												BgL_yz00_668 = BgL_arg1926z00_680;
											BgL_tagzd21735zd2_669:
												{	/* Expand/garith.scm 135 */
													obj_t BgL_arg1935z00_690;

													{	/* Expand/garith.scm 135 */
														obj_t BgL_arg1936z00_691;

														{	/* Expand/garith.scm 135 */
															obj_t BgL_arg1937z00_692;
															obj_t BgL_arg1938z00_693;

															{	/* Expand/garith.scm 135 */
																obj_t BgL_arg1939z00_694;

																{	/* Expand/garith.scm 135 */
																	obj_t BgL_arg1940z00_695;

																	{	/* Expand/garith.scm 135 */
																		obj_t BgL_arg1941z00_696;

																		BgL_arg1941z00_696 =
																			CAR(((obj_t) BgL_yz00_668));
																		BgL_arg1940z00_695 =
																			MAKE_YOUNG_PAIR(BgL_arg1941z00_696, BNIL);
																	}
																	BgL_arg1939z00_694 =
																		MAKE_YOUNG_PAIR(BgL_xz00_667,
																		BgL_arg1940z00_695);
																}
																BgL_arg1937z00_692 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																	BgL_arg1939z00_694);
															}
															{	/* Expand/garith.scm 135 */
																obj_t BgL_arg1942z00_697;

																{	/* Expand/garith.scm 135 */
																	obj_t BgL_arg1943z00_698;

																	BgL_arg1943z00_698 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_yz00_668, BNIL);
																	BgL_arg1942z00_697 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
																		BgL_arg1943z00_698);
																}
																BgL_arg1938z00_693 =
																	MAKE_YOUNG_PAIR(BgL_arg1942z00_697, BNIL);
															}
															BgL_arg1936z00_691 =
																MAKE_YOUNG_PAIR(BgL_arg1937z00_692,
																BgL_arg1938z00_693);
														}
														BgL_arg1935z00_690 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
															BgL_arg1936z00_691);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_16) (BgL_ez00_16,
														BgL_arg1935z00_690, BgL_ez00_16, BEOA);
												}
											}
									}
								else
									{	/* Expand/garith.scm 129 */
										if (NULLP(CDR(((obj_t) BgL_cdrzd21740zd2_672))))
											{	/* Expand/garith.scm 129 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2326z00zzexpand_garithmetiquez00,
													BGl_string2327z00zzexpand_garithmetiquez00,
													BgL_xz00_15);
											}
										else
											{	/* Expand/garith.scm 129 */
												obj_t BgL_arg1931z00_686;
												obj_t BgL_arg1932z00_687;

												BgL_arg1931z00_686 =
													CAR(((obj_t) BgL_cdrzd21740zd2_672));
												BgL_arg1932z00_687 =
													CDR(((obj_t) BgL_cdrzd21740zd2_672));
												{
													obj_t BgL_yz00_2717;
													obj_t BgL_xz00_2716;

													BgL_xz00_2716 = BgL_arg1931z00_686;
													BgL_yz00_2717 = BgL_arg1932z00_687;
													BgL_yz00_668 = BgL_yz00_2717;
													BgL_xz00_667 = BgL_xz00_2716;
													goto BgL_tagzd21735zd2_669;
												}
											}
									}
							}
						else
							{	/* Expand/garith.scm 129 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 129 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-g= */
	obj_t BGl_z62expandzd2gzd3z63zzexpand_garithmetiquez00(obj_t BgL_envz00_1575,
		obj_t BgL_xz00_1576, obj_t BgL_ez00_1577)
	{
		{	/* Expand/garith.scm 128 */
			return
				BGl_expandzd2gzd3z01zzexpand_garithmetiquez00(BgL_xz00_1576,
				BgL_ez00_1577);
		}

	}



/* expand-g< */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzc3z11zzexpand_garithmetiquez00(obj_t
		BgL_xz00_17, obj_t BgL_ez00_18)
	{
		{	/* Expand/garith.scm 140 */
			{
				obj_t BgL_xz00_701;
				obj_t BgL_yz00_702;

				if (PAIRP(BgL_xz00_17))
					{	/* Expand/garith.scm 141 */
						obj_t BgL_cdrzd21796zd2_706;

						BgL_cdrzd21796zd2_706 = CDR(BgL_xz00_17);
						if (PAIRP(BgL_cdrzd21796zd2_706))
							{	/* Expand/garith.scm 141 */
								obj_t BgL_cdrzd21798zd2_708;

								BgL_cdrzd21798zd2_708 = CDR(BgL_cdrzd21796zd2_706);
								if (PAIRP(BgL_cdrzd21798zd2_708))
									{	/* Expand/garith.scm 141 */
										if (NULLP(CDR(BgL_cdrzd21798zd2_708)))
											{	/* Expand/garith.scm 141 */
												return
													BGl_expandzd2g2zd2zzexpand_garithmetiquez00
													(BgL_xz00_17, BgL_ez00_18,
													BGl_zc3zd2envz11zz__r4_numbers_6_5z00);
											}
										else
											{	/* Expand/garith.scm 141 */
												obj_t BgL_arg1949z00_713;
												obj_t BgL_arg1951z00_714;

												BgL_arg1949z00_713 =
													CAR(((obj_t) BgL_cdrzd21796zd2_706));
												BgL_arg1951z00_714 =
													CDR(((obj_t) BgL_cdrzd21796zd2_706));
												BgL_xz00_701 = BgL_arg1949z00_713;
												BgL_yz00_702 = BgL_arg1951z00_714;
											BgL_tagzd21791zd2_703:
												{	/* Expand/garith.scm 147 */
													obj_t BgL_arg1960z00_724;

													{	/* Expand/garith.scm 147 */
														obj_t BgL_arg1961z00_725;

														{	/* Expand/garith.scm 147 */
															obj_t BgL_arg1962z00_726;
															obj_t BgL_arg1963z00_727;

															{	/* Expand/garith.scm 147 */
																obj_t BgL_arg1964z00_728;

																{	/* Expand/garith.scm 147 */
																	obj_t BgL_arg1965z00_729;

																	{	/* Expand/garith.scm 147 */
																		obj_t BgL_arg1966z00_730;

																		BgL_arg1966z00_730 =
																			CAR(((obj_t) BgL_yz00_702));
																		BgL_arg1965z00_729 =
																			MAKE_YOUNG_PAIR(BgL_arg1966z00_730, BNIL);
																	}
																	BgL_arg1964z00_728 =
																		MAKE_YOUNG_PAIR(BgL_xz00_701,
																		BgL_arg1965z00_729);
																}
																BgL_arg1962z00_726 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
																	BgL_arg1964z00_728);
															}
															{	/* Expand/garith.scm 147 */
																obj_t BgL_arg1967z00_731;

																{	/* Expand/garith.scm 147 */
																	obj_t BgL_arg1968z00_732;

																	BgL_arg1968z00_732 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_yz00_702, BNIL);
																	BgL_arg1967z00_731 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
																		BgL_arg1968z00_732);
																}
																BgL_arg1963z00_727 =
																	MAKE_YOUNG_PAIR(BgL_arg1967z00_731, BNIL);
															}
															BgL_arg1961z00_725 =
																MAKE_YOUNG_PAIR(BgL_arg1962z00_726,
																BgL_arg1963z00_727);
														}
														BgL_arg1960z00_724 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
															BgL_arg1961z00_725);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_18) (BgL_ez00_18,
														BgL_arg1960z00_724, BgL_ez00_18, BEOA);
												}
											}
									}
								else
									{	/* Expand/garith.scm 141 */
										if (NULLP(CDR(((obj_t) BgL_cdrzd21796zd2_706))))
											{	/* Expand/garith.scm 141 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2328z00zzexpand_garithmetiquez00,
													BGl_string2327z00zzexpand_garithmetiquez00,
													BgL_xz00_17);
											}
										else
											{	/* Expand/garith.scm 141 */
												obj_t BgL_arg1956z00_720;
												obj_t BgL_arg1957z00_721;

												BgL_arg1956z00_720 =
													CAR(((obj_t) BgL_cdrzd21796zd2_706));
												BgL_arg1957z00_721 =
													CDR(((obj_t) BgL_cdrzd21796zd2_706));
												{
													obj_t BgL_yz00_2763;
													obj_t BgL_xz00_2762;

													BgL_xz00_2762 = BgL_arg1956z00_720;
													BgL_yz00_2763 = BgL_arg1957z00_721;
													BgL_yz00_702 = BgL_yz00_2763;
													BgL_xz00_701 = BgL_xz00_2762;
													goto BgL_tagzd21791zd2_703;
												}
											}
									}
							}
						else
							{	/* Expand/garith.scm 141 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 141 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-g< */
	obj_t BGl_z62expandzd2gzc3z73zzexpand_garithmetiquez00(obj_t BgL_envz00_1582,
		obj_t BgL_xz00_1583, obj_t BgL_ez00_1584)
	{
		{	/* Expand/garith.scm 140 */
			return
				BGl_expandzd2gzc3z11zzexpand_garithmetiquez00(BgL_xz00_1583,
				BgL_ez00_1584);
		}

	}



/* expand-g> */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gze3z31zzexpand_garithmetiquez00(obj_t
		BgL_xz00_19, obj_t BgL_ez00_20)
	{
		{	/* Expand/garith.scm 152 */
			{
				obj_t BgL_xz00_735;
				obj_t BgL_yz00_736;

				if (PAIRP(BgL_xz00_19))
					{	/* Expand/garith.scm 153 */
						obj_t BgL_cdrzd21852zd2_740;

						BgL_cdrzd21852zd2_740 = CDR(BgL_xz00_19);
						if (PAIRP(BgL_cdrzd21852zd2_740))
							{	/* Expand/garith.scm 153 */
								obj_t BgL_cdrzd21854zd2_742;

								BgL_cdrzd21854zd2_742 = CDR(BgL_cdrzd21852zd2_740);
								if (PAIRP(BgL_cdrzd21854zd2_742))
									{	/* Expand/garith.scm 153 */
										if (NULLP(CDR(BgL_cdrzd21854zd2_742)))
											{	/* Expand/garith.scm 153 */
												return
													BGl_expandzd2g2zd2zzexpand_garithmetiquez00
													(BgL_xz00_19, BgL_ez00_20,
													BGl_ze3zd2envz31zz__r4_numbers_6_5z00);
											}
										else
											{	/* Expand/garith.scm 153 */
												obj_t BgL_arg1974z00_747;
												obj_t BgL_arg1975z00_748;

												BgL_arg1974z00_747 =
													CAR(((obj_t) BgL_cdrzd21852zd2_740));
												BgL_arg1975z00_748 =
													CDR(((obj_t) BgL_cdrzd21852zd2_740));
												BgL_xz00_735 = BgL_arg1974z00_747;
												BgL_yz00_736 = BgL_arg1975z00_748;
											BgL_tagzd21847zd2_737:
												{	/* Expand/garith.scm 159 */
													obj_t BgL_arg1985z00_758;

													{	/* Expand/garith.scm 159 */
														obj_t BgL_arg1986z00_759;

														{	/* Expand/garith.scm 159 */
															obj_t BgL_arg1987z00_760;
															obj_t BgL_arg1988z00_761;

															{	/* Expand/garith.scm 159 */
																obj_t BgL_arg1989z00_762;

																{	/* Expand/garith.scm 159 */
																	obj_t BgL_arg1990z00_763;

																	{	/* Expand/garith.scm 159 */
																		obj_t BgL_arg1991z00_764;

																		BgL_arg1991z00_764 =
																			CAR(((obj_t) BgL_yz00_736));
																		BgL_arg1990z00_763 =
																			MAKE_YOUNG_PAIR(BgL_arg1991z00_764, BNIL);
																	}
																	BgL_arg1989z00_762 =
																		MAKE_YOUNG_PAIR(BgL_xz00_735,
																		BgL_arg1990z00_763);
																}
																BgL_arg1987z00_760 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
																	BgL_arg1989z00_762);
															}
															{	/* Expand/garith.scm 159 */
																obj_t BgL_arg1992z00_765;

																{	/* Expand/garith.scm 159 */
																	obj_t BgL_arg1993z00_766;

																	BgL_arg1993z00_766 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_yz00_736, BNIL);
																	BgL_arg1992z00_765 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
																		BgL_arg1993z00_766);
																}
																BgL_arg1988z00_761 =
																	MAKE_YOUNG_PAIR(BgL_arg1992z00_765, BNIL);
															}
															BgL_arg1986z00_759 =
																MAKE_YOUNG_PAIR(BgL_arg1987z00_760,
																BgL_arg1988z00_761);
														}
														BgL_arg1985z00_758 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
															BgL_arg1986z00_759);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_20) (BgL_ez00_20,
														BgL_arg1985z00_758, BgL_ez00_20, BEOA);
												}
											}
									}
								else
									{	/* Expand/garith.scm 153 */
										if (NULLP(CDR(((obj_t) BgL_cdrzd21852zd2_740))))
											{	/* Expand/garith.scm 153 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2329z00zzexpand_garithmetiquez00,
													BGl_string2327z00zzexpand_garithmetiquez00,
													BgL_xz00_19);
											}
										else
											{	/* Expand/garith.scm 153 */
												obj_t BgL_arg1981z00_754;
												obj_t BgL_arg1982z00_755;

												BgL_arg1981z00_754 =
													CAR(((obj_t) BgL_cdrzd21852zd2_740));
												BgL_arg1982z00_755 =
													CDR(((obj_t) BgL_cdrzd21852zd2_740));
												{
													obj_t BgL_yz00_2809;
													obj_t BgL_xz00_2808;

													BgL_xz00_2808 = BgL_arg1981z00_754;
													BgL_yz00_2809 = BgL_arg1982z00_755;
													BgL_yz00_736 = BgL_yz00_2809;
													BgL_xz00_735 = BgL_xz00_2808;
													goto BgL_tagzd21847zd2_737;
												}
											}
									}
							}
						else
							{	/* Expand/garith.scm 153 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 153 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-g> */
	obj_t BGl_z62expandzd2gze3z53zzexpand_garithmetiquez00(obj_t BgL_envz00_1589,
		obj_t BgL_xz00_1590, obj_t BgL_ez00_1591)
	{
		{	/* Expand/garith.scm 152 */
			return
				BGl_expandzd2gze3z31zzexpand_garithmetiquez00(BgL_xz00_1590,
				BgL_ez00_1591);
		}

	}



/* expand-g<= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gzc3zd3zc2zzexpand_garithmetiquez00(obj_t
		BgL_xz00_21, obj_t BgL_ez00_22)
	{
		{	/* Expand/garith.scm 164 */
			{
				obj_t BgL_xz00_769;
				obj_t BgL_yz00_770;

				if (PAIRP(BgL_xz00_21))
					{	/* Expand/garith.scm 165 */
						obj_t BgL_cdrzd21908zd2_774;

						BgL_cdrzd21908zd2_774 = CDR(BgL_xz00_21);
						if (PAIRP(BgL_cdrzd21908zd2_774))
							{	/* Expand/garith.scm 165 */
								obj_t BgL_cdrzd21910zd2_776;

								BgL_cdrzd21910zd2_776 = CDR(BgL_cdrzd21908zd2_774);
								if (PAIRP(BgL_cdrzd21910zd2_776))
									{	/* Expand/garith.scm 165 */
										if (NULLP(CDR(BgL_cdrzd21910zd2_776)))
											{	/* Expand/garith.scm 165 */
												return
													BGl_expandzd2g2zd2zzexpand_garithmetiquez00
													(BgL_xz00_21, BgL_ez00_22,
													BGl_zc3zd3zd2envzc2zz__r4_numbers_6_5z00);
											}
										else
											{	/* Expand/garith.scm 165 */
												obj_t BgL_arg1999z00_781;
												obj_t BgL_arg2000z00_782;

												BgL_arg1999z00_781 =
													CAR(((obj_t) BgL_cdrzd21908zd2_774));
												BgL_arg2000z00_782 =
													CDR(((obj_t) BgL_cdrzd21908zd2_774));
												BgL_xz00_769 = BgL_arg1999z00_781;
												BgL_yz00_770 = BgL_arg2000z00_782;
											BgL_tagzd21903zd2_771:
												{	/* Expand/garith.scm 171 */
													obj_t BgL_arg2011z00_792;

													{	/* Expand/garith.scm 171 */
														obj_t BgL_arg2012z00_793;

														{	/* Expand/garith.scm 171 */
															obj_t BgL_arg2013z00_794;
															obj_t BgL_arg2014z00_795;

															{	/* Expand/garith.scm 171 */
																obj_t BgL_arg2016z00_796;

																{	/* Expand/garith.scm 171 */
																	obj_t BgL_arg2017z00_797;

																	{	/* Expand/garith.scm 171 */
																		obj_t BgL_arg2018z00_798;

																		BgL_arg2018z00_798 =
																			CAR(((obj_t) BgL_yz00_770));
																		BgL_arg2017z00_797 =
																			MAKE_YOUNG_PAIR(BgL_arg2018z00_798, BNIL);
																	}
																	BgL_arg2016z00_796 =
																		MAKE_YOUNG_PAIR(BgL_xz00_769,
																		BgL_arg2017z00_797);
																}
																BgL_arg2013z00_794 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
																	BgL_arg2016z00_796);
															}
															{	/* Expand/garith.scm 171 */
																obj_t BgL_arg2020z00_799;

																{	/* Expand/garith.scm 171 */
																	obj_t BgL_arg2021z00_800;

																	BgL_arg2021z00_800 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_yz00_770, BNIL);
																	BgL_arg2020z00_799 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
																		BgL_arg2021z00_800);
																}
																BgL_arg2014z00_795 =
																	MAKE_YOUNG_PAIR(BgL_arg2020z00_799, BNIL);
															}
															BgL_arg2012z00_793 =
																MAKE_YOUNG_PAIR(BgL_arg2013z00_794,
																BgL_arg2014z00_795);
														}
														BgL_arg2011z00_792 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
															BgL_arg2012z00_793);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_22) (BgL_ez00_22,
														BgL_arg2011z00_792, BgL_ez00_22, BEOA);
												}
											}
									}
								else
									{	/* Expand/garith.scm 165 */
										if (NULLP(CDR(((obj_t) BgL_cdrzd21908zd2_774))))
											{	/* Expand/garith.scm 165 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2330z00zzexpand_garithmetiquez00,
													BGl_string2327z00zzexpand_garithmetiquez00,
													BgL_xz00_21);
											}
										else
											{	/* Expand/garith.scm 165 */
												obj_t BgL_arg2005z00_788;
												obj_t BgL_arg2007z00_789;

												BgL_arg2005z00_788 =
													CAR(((obj_t) BgL_cdrzd21908zd2_774));
												BgL_arg2007z00_789 =
													CDR(((obj_t) BgL_cdrzd21908zd2_774));
												{
													obj_t BgL_yz00_2855;
													obj_t BgL_xz00_2854;

													BgL_xz00_2854 = BgL_arg2005z00_788;
													BgL_yz00_2855 = BgL_arg2007z00_789;
													BgL_yz00_770 = BgL_yz00_2855;
													BgL_xz00_769 = BgL_xz00_2854;
													goto BgL_tagzd21903zd2_771;
												}
											}
									}
							}
						else
							{	/* Expand/garith.scm 165 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 165 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-g<= */
	obj_t BGl_z62expandzd2gzc3zd3za0zzexpand_garithmetiquez00(obj_t
		BgL_envz00_1596, obj_t BgL_xz00_1597, obj_t BgL_ez00_1598)
	{
		{	/* Expand/garith.scm 164 */
			return
				BGl_expandzd2gzc3zd3zc2zzexpand_garithmetiquez00(BgL_xz00_1597,
				BgL_ez00_1598);
		}

	}



/* expand-g>= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gze3zd3ze2zzexpand_garithmetiquez00(obj_t
		BgL_xz00_23, obj_t BgL_ez00_24)
	{
		{	/* Expand/garith.scm 176 */
			{
				obj_t BgL_xz00_803;
				obj_t BgL_yz00_804;

				if (PAIRP(BgL_xz00_23))
					{	/* Expand/garith.scm 177 */
						obj_t BgL_cdrzd21964zd2_808;

						BgL_cdrzd21964zd2_808 = CDR(BgL_xz00_23);
						if (PAIRP(BgL_cdrzd21964zd2_808))
							{	/* Expand/garith.scm 177 */
								obj_t BgL_cdrzd21966zd2_810;

								BgL_cdrzd21966zd2_810 = CDR(BgL_cdrzd21964zd2_808);
								if (PAIRP(BgL_cdrzd21966zd2_810))
									{	/* Expand/garith.scm 177 */
										if (NULLP(CDR(BgL_cdrzd21966zd2_810)))
											{	/* Expand/garith.scm 177 */
												return
													BGl_expandzd2g2zd2zzexpand_garithmetiquez00
													(BgL_xz00_23, BgL_ez00_24,
													BGl_ze3zd3zd2envze2zz__r4_numbers_6_5z00);
											}
										else
											{	/* Expand/garith.scm 177 */
												obj_t BgL_arg2028z00_815;
												obj_t BgL_arg2029z00_816;

												BgL_arg2028z00_815 =
													CAR(((obj_t) BgL_cdrzd21964zd2_808));
												BgL_arg2029z00_816 =
													CDR(((obj_t) BgL_cdrzd21964zd2_808));
												BgL_xz00_803 = BgL_arg2028z00_815;
												BgL_yz00_804 = BgL_arg2029z00_816;
											BgL_tagzd21959zd2_805:
												{	/* Expand/garith.scm 183 */
													obj_t BgL_arg2040z00_826;

													{	/* Expand/garith.scm 183 */
														obj_t BgL_arg2041z00_827;

														{	/* Expand/garith.scm 183 */
															obj_t BgL_arg2043z00_828;
															obj_t BgL_arg2044z00_829;

															{	/* Expand/garith.scm 183 */
																obj_t BgL_arg2045z00_830;

																{	/* Expand/garith.scm 183 */
																	obj_t BgL_arg2046z00_831;

																	{	/* Expand/garith.scm 183 */
																		obj_t BgL_arg2047z00_832;

																		BgL_arg2047z00_832 =
																			CAR(((obj_t) BgL_yz00_804));
																		BgL_arg2046z00_831 =
																			MAKE_YOUNG_PAIR(BgL_arg2047z00_832, BNIL);
																	}
																	BgL_arg2045z00_830 =
																		MAKE_YOUNG_PAIR(BgL_xz00_803,
																		BgL_arg2046z00_831);
																}
																BgL_arg2043z00_828 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)),
																	BgL_arg2045z00_830);
															}
															{	/* Expand/garith.scm 183 */
																obj_t BgL_arg2048z00_833;

																{	/* Expand/garith.scm 183 */
																	obj_t BgL_arg2049z00_834;

																	BgL_arg2049z00_834 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_yz00_804, BNIL);
																	BgL_arg2048z00_833 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 22)),
																		BgL_arg2049z00_834);
																}
																BgL_arg2044z00_829 =
																	MAKE_YOUNG_PAIR(BgL_arg2048z00_833, BNIL);
															}
															BgL_arg2041z00_827 =
																MAKE_YOUNG_PAIR(BgL_arg2043z00_828,
																BgL_arg2044z00_829);
														}
														BgL_arg2040z00_826 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
															BgL_arg2041z00_827);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_24) (BgL_ez00_24,
														BgL_arg2040z00_826, BgL_ez00_24, BEOA);
												}
											}
									}
								else
									{	/* Expand/garith.scm 177 */
										if (NULLP(CDR(((obj_t) BgL_cdrzd21964zd2_808))))
											{	/* Expand/garith.scm 177 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string2331z00zzexpand_garithmetiquez00,
													BGl_string2327z00zzexpand_garithmetiquez00,
													BgL_xz00_23);
											}
										else
											{	/* Expand/garith.scm 177 */
												obj_t BgL_arg2036z00_822;
												obj_t BgL_arg2037z00_823;

												BgL_arg2036z00_822 =
													CAR(((obj_t) BgL_cdrzd21964zd2_808));
												BgL_arg2037z00_823 =
													CDR(((obj_t) BgL_cdrzd21964zd2_808));
												{
													obj_t BgL_yz00_2901;
													obj_t BgL_xz00_2900;

													BgL_xz00_2900 = BgL_arg2036z00_822;
													BgL_yz00_2901 = BgL_arg2037z00_823;
													BgL_yz00_804 = BgL_yz00_2901;
													BgL_xz00_803 = BgL_xz00_2900;
													goto BgL_tagzd21959zd2_805;
												}
											}
									}
							}
						else
							{	/* Expand/garith.scm 177 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/garith.scm 177 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-g>= */
	obj_t BGl_z62expandzd2gze3zd3z80zzexpand_garithmetiquez00(obj_t
		BgL_envz00_1603, obj_t BgL_xz00_1604, obj_t BgL_ez00_1605)
	{
		{	/* Expand/garith.scm 176 */
			return
				BGl_expandzd2gze3zd3ze2zzexpand_garithmetiquez00(BgL_xz00_1604,
				BgL_ez00_1605);
		}

	}



/* expand-gmax */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gmaxzd2zzexpand_garithmetiquez00(obj_t
		BgL_xz00_25, obj_t BgL_ez00_26)
	{
		{	/* Expand/garith.scm 188 */
			{
				obj_t BgL_xz00_840;
				obj_t BgL_yz00_841;
				obj_t BgL_xz00_837;
				obj_t BgL_yz00_838;

				if (PAIRP(BgL_xz00_25))
					{	/* Expand/garith.scm 189 */
						obj_t BgL_cdrzd22022zd2_846;

						BgL_cdrzd22022zd2_846 = CDR(BgL_xz00_25);
						if (PAIRP(BgL_cdrzd22022zd2_846))
							{	/* Expand/garith.scm 189 */
								if (NULLP(CDR(BgL_cdrzd22022zd2_846)))
									{	/* Expand/garith.scm 189 */
										obj_t BgL_arg2055z00_850;

										BgL_arg2055z00_850 = CAR(BgL_cdrzd22022zd2_846);
										return
											PROCEDURE_ENTRY(BgL_ez00_26) (BgL_ez00_26,
											BgL_arg2055z00_850, BgL_ez00_26, BEOA);
									}
								else
									{	/* Expand/garith.scm 189 */
										obj_t BgL_cdrzd22038zd2_852;

										BgL_cdrzd22038zd2_852 =
											CDR(((obj_t) BgL_cdrzd22022zd2_846));
										if (PAIRP(BgL_cdrzd22038zd2_852))
											{	/* Expand/garith.scm 189 */
												if (NULLP(CDR(BgL_cdrzd22038zd2_852)))
													{	/* Expand/garith.scm 189 */
														obj_t BgL_arg2059z00_856;
														obj_t BgL_arg2060z00_857;

														BgL_arg2059z00_856 =
															CAR(((obj_t) BgL_cdrzd22022zd2_846));
														BgL_arg2060z00_857 = CAR(BgL_cdrzd22038zd2_852);
														BgL_xz00_837 = BgL_arg2059z00_856;
														BgL_yz00_838 = BgL_arg2060z00_857;
														{	/* Expand/garith.scm 194 */
															bool_t BgL_test2516z00_2927;

															if (INTEGERP(BgL_xz00_837))
																{	/* Expand/garith.scm 194 */
																	BgL_test2516z00_2927 = INTEGERP(BgL_yz00_838);
																}
															else
																{	/* Expand/garith.scm 194 */
																	BgL_test2516z00_2927 = ((bool_t) 0);
																}
															if (BgL_test2516z00_2927)
																{	/* Expand/garith.scm 194 */
																	if (
																		((long) CINT(BgL_xz00_837) >
																			(long) CINT(BgL_yz00_838)))
																		{	/* Expand/garith.scm 195 */
																			return BgL_xz00_837;
																		}
																	else
																		{	/* Expand/garith.scm 195 */
																			return BgL_yz00_838;
																		}
																}
															else
																{	/* Expand/garith.scm 197 */
																	obj_t BgL_arg2072z00_871;

																	{	/* Expand/garith.scm 197 */
																		obj_t BgL_arg2075z00_872;
																		obj_t BgL_arg2076z00_873;

																		{	/* Expand/garith.scm 197 */
																			obj_t BgL_arg2077z00_874;
																			obj_t BgL_arg2078z00_875;

																			{	/* Expand/garith.scm 197 */
																				obj_t BgL_arg2079z00_876;

																				{	/* Expand/garith.scm 197 */
																					obj_t BgL_arg2080z00_877;

																					BgL_arg2080z00_877 =
																						PROCEDURE_ENTRY(BgL_ez00_26)
																						(BgL_ez00_26, BgL_xz00_837,
																						BgL_ez00_26, BEOA);
																					BgL_arg2079z00_876 =
																						MAKE_YOUNG_PAIR(BgL_arg2080z00_877,
																						BNIL);
																				}
																				BgL_arg2077z00_874 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							23)), BgL_arg2079z00_876);
																			}
																			{	/* Expand/garith.scm 198 */
																				obj_t BgL_arg2081z00_878;

																				{	/* Expand/garith.scm 198 */
																					obj_t BgL_arg2082z00_879;

																					{	/* Expand/garith.scm 198 */
																						obj_t BgL_arg2083z00_880;

																						BgL_arg2083z00_880 =
																							PROCEDURE_ENTRY(BgL_ez00_26)
																							(BgL_ez00_26, BgL_yz00_838,
																							BgL_ez00_26, BEOA);
																						BgL_arg2082z00_879 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2083z00_880, BNIL);
																					}
																					BgL_arg2081z00_878 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 4)), BgL_arg2082z00_879);
																				}
																				BgL_arg2078z00_875 =
																					MAKE_YOUNG_PAIR(BgL_arg2081z00_878,
																					BNIL);
																			}
																			BgL_arg2075z00_872 =
																				MAKE_YOUNG_PAIR(BgL_arg2077z00_874,
																				BgL_arg2078z00_875);
																		}
																		{	/* Expand/garith.scm 199 */
																			obj_t BgL_arg2084z00_881;

																			{	/* Expand/garith.scm 199 */
																				obj_t BgL_arg2085z00_882;

																				{	/* Expand/garith.scm 199 */
																					obj_t BgL_arg2086z00_883;

																					BgL_arg2086z00_883 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 4)), BNIL);
																					BgL_arg2085z00_882 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 23)),
																						BgL_arg2086z00_883);
																				}
																				BgL_arg2084z00_881 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							24)), BgL_arg2085z00_882);
																			}
																			BgL_arg2076z00_873 =
																				MAKE_YOUNG_PAIR(BgL_arg2084z00_881,
																				BNIL);
																		}
																		BgL_arg2072z00_871 =
																			MAKE_YOUNG_PAIR(BgL_arg2075z00_872,
																			BgL_arg2076z00_873);
																	}
																	return
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 25)),
																		BgL_arg2072z00_871);
													}}}
												else
													{	/* Expand/garith.scm 189 */
														obj_t BgL_arg2061z00_859;
														obj_t BgL_arg2062z00_860;

														BgL_arg2061z00_859 =
															CAR(((obj_t) BgL_cdrzd22022zd2_846));
														BgL_arg2062z00_860 =
															CDR(((obj_t) BgL_cdrzd22022zd2_846));
														BgL_xz00_840 = BgL_arg2061z00_859;
														BgL_yz00_841 = BgL_arg2062z00_860;
													BgL_tagzd22015zd2_842:
														{	/* Expand/garith.scm 201 */
															obj_t BgL_arg2087z00_885;

															{	/* Expand/garith.scm 201 */
																obj_t BgL_arg2088z00_886;

																{	/* Expand/garith.scm 201 */
																	obj_t BgL_arg2089z00_887;

																	{	/* Expand/garith.scm 201 */
																		obj_t BgL_arg2090z00_888;

																		{	/* Expand/garith.scm 201 */
																			obj_t BgL_arg2091z00_889;

																			BgL_arg2091z00_889 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_yz00_841, BNIL);
																			BgL_arg2090z00_888 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						26)), BgL_arg2091z00_889);
																		}
																		BgL_arg2089z00_887 =
																			MAKE_YOUNG_PAIR(BgL_arg2090z00_888, BNIL);
																	}
																	BgL_arg2088z00_886 =
																		MAKE_YOUNG_PAIR(BgL_xz00_840,
																		BgL_arg2089z00_887);
																}
																BgL_arg2087z00_885 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 24)),
																	BgL_arg2088z00_886);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_26) (BgL_ez00_26,
																BgL_arg2087z00_885, BgL_ez00_26, BEOA);
														}
													}
											}
										else
											{	/* Expand/garith.scm 189 */
												obj_t BgL_arg2065z00_863;
												obj_t BgL_arg2066z00_864;

												BgL_arg2065z00_863 =
													CAR(((obj_t) BgL_cdrzd22022zd2_846));
												BgL_arg2066z00_864 =
													CDR(((obj_t) BgL_cdrzd22022zd2_846));
												{
													obj_t BgL_yz00_2984;
													obj_t BgL_xz00_2983;

													BgL_xz00_2983 = BgL_arg2065z00_863;
													BgL_yz00_2984 = BgL_arg2066z00_864;
													BgL_yz00_841 = BgL_yz00_2984;
													BgL_xz00_840 = BgL_xz00_2983;
													goto BgL_tagzd22015zd2_842;
												}
											}
									}
							}
						else
							{	/* Expand/garith.scm 189 */
							BgL_tagzd22016zd2_843:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string2332z00zzexpand_garithmetiquez00, BgL_xz00_25);
							}
					}
				else
					{	/* Expand/garith.scm 189 */
						goto BgL_tagzd22016zd2_843;
					}
			}
		}

	}



/* &expand-gmax */
	obj_t BGl_z62expandzd2gmaxzb0zzexpand_garithmetiquez00(obj_t BgL_envz00_1610,
		obj_t BgL_xz00_1611, obj_t BgL_ez00_1612)
	{
		{	/* Expand/garith.scm 188 */
			return
				BGl_expandzd2gmaxzd2zzexpand_garithmetiquez00(BgL_xz00_1611,
				BgL_ez00_1612);
		}

	}



/* expand-gmin */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2gminzd2zzexpand_garithmetiquez00(obj_t
		BgL_xz00_27, obj_t BgL_ez00_28)
	{
		{	/* Expand/garith.scm 208 */
			{
				obj_t BgL_xz00_895;
				obj_t BgL_yz00_896;
				obj_t BgL_xz00_892;
				obj_t BgL_yz00_893;

				if (PAIRP(BgL_xz00_27))
					{	/* Expand/garith.scm 209 */
						obj_t BgL_cdrzd22100zd2_901;

						BgL_cdrzd22100zd2_901 = CDR(BgL_xz00_27);
						if (PAIRP(BgL_cdrzd22100zd2_901))
							{	/* Expand/garith.scm 209 */
								if (NULLP(CDR(BgL_cdrzd22100zd2_901)))
									{	/* Expand/garith.scm 209 */
										obj_t BgL_arg2096z00_905;

										BgL_arg2096z00_905 = CAR(BgL_cdrzd22100zd2_901);
										return
											PROCEDURE_ENTRY(BgL_ez00_28) (BgL_ez00_28,
											BgL_arg2096z00_905, BgL_ez00_28, BEOA);
									}
								else
									{	/* Expand/garith.scm 209 */
										obj_t BgL_cdrzd22116zd2_907;

										BgL_cdrzd22116zd2_907 =
											CDR(((obj_t) BgL_cdrzd22100zd2_901));
										if (PAIRP(BgL_cdrzd22116zd2_907))
											{	/* Expand/garith.scm 209 */
												if (NULLP(CDR(BgL_cdrzd22116zd2_907)))
													{	/* Expand/garith.scm 209 */
														obj_t BgL_arg2100z00_911;
														obj_t BgL_arg2101z00_912;

														BgL_arg2100z00_911 =
															CAR(((obj_t) BgL_cdrzd22100zd2_901));
														BgL_arg2101z00_912 = CAR(BgL_cdrzd22116zd2_907);
														BgL_xz00_892 = BgL_arg2100z00_911;
														BgL_yz00_893 = BgL_arg2101z00_912;
														{	/* Expand/garith.scm 214 */
															bool_t BgL_test2524z00_3011;

															if (INTEGERP(BgL_xz00_892))
																{	/* Expand/garith.scm 214 */
																	BgL_test2524z00_3011 = INTEGERP(BgL_yz00_893);
																}
															else
																{	/* Expand/garith.scm 214 */
																	BgL_test2524z00_3011 = ((bool_t) 0);
																}
															if (BgL_test2524z00_3011)
																{	/* Expand/garith.scm 214 */
																	if (
																		((long) CINT(BgL_xz00_892) <
																			(long) CINT(BgL_yz00_893)))
																		{	/* Expand/garith.scm 215 */
																			return BgL_xz00_892;
																		}
																	else
																		{	/* Expand/garith.scm 215 */
																			return BgL_yz00_893;
																		}
																}
															else
																{	/* Expand/garith.scm 217 */
																	obj_t BgL_arg2111z00_926;

																	{	/* Expand/garith.scm 217 */
																		obj_t BgL_arg2112z00_927;
																		obj_t BgL_arg2114z00_928;

																		{	/* Expand/garith.scm 217 */
																			obj_t BgL_arg2115z00_929;
																			obj_t BgL_arg2116z00_930;

																			{	/* Expand/garith.scm 217 */
																				obj_t BgL_arg2117z00_931;

																				{	/* Expand/garith.scm 217 */
																					obj_t BgL_arg2118z00_932;

																					BgL_arg2118z00_932 =
																						PROCEDURE_ENTRY(BgL_ez00_28)
																						(BgL_ez00_28, BgL_xz00_892,
																						BgL_ez00_28, BEOA);
																					BgL_arg2117z00_931 =
																						MAKE_YOUNG_PAIR(BgL_arg2118z00_932,
																						BNIL);
																				}
																				BgL_arg2115z00_929 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							23)), BgL_arg2117z00_931);
																			}
																			{	/* Expand/garith.scm 218 */
																				obj_t BgL_arg2119z00_933;

																				{	/* Expand/garith.scm 218 */
																					obj_t BgL_arg2120z00_934;

																					{	/* Expand/garith.scm 218 */
																						obj_t BgL_arg2121z00_935;

																						BgL_arg2121z00_935 =
																							PROCEDURE_ENTRY(BgL_ez00_28)
																							(BgL_ez00_28, BgL_yz00_893,
																							BgL_ez00_28, BEOA);
																						BgL_arg2120z00_934 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2121z00_935, BNIL);
																					}
																					BgL_arg2119z00_933 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 4)), BgL_arg2120z00_934);
																				}
																				BgL_arg2116z00_930 =
																					MAKE_YOUNG_PAIR(BgL_arg2119z00_933,
																					BNIL);
																			}
																			BgL_arg2112z00_927 =
																				MAKE_YOUNG_PAIR(BgL_arg2115z00_929,
																				BgL_arg2116z00_930);
																		}
																		{	/* Expand/garith.scm 219 */
																			obj_t BgL_arg2122z00_936;

																			{	/* Expand/garith.scm 219 */
																				obj_t BgL_arg2123z00_937;

																				{	/* Expand/garith.scm 219 */
																					obj_t BgL_arg2125z00_938;

																					BgL_arg2125z00_938 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 4)), BNIL);
																					BgL_arg2123z00_937 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 23)),
																						BgL_arg2125z00_938);
																				}
																				BgL_arg2122z00_936 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							27)), BgL_arg2123z00_937);
																			}
																			BgL_arg2114z00_928 =
																				MAKE_YOUNG_PAIR(BgL_arg2122z00_936,
																				BNIL);
																		}
																		BgL_arg2111z00_926 =
																			MAKE_YOUNG_PAIR(BgL_arg2112z00_927,
																			BgL_arg2114z00_928);
																	}
																	return
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 25)),
																		BgL_arg2111z00_926);
													}}}
												else
													{	/* Expand/garith.scm 209 */
														obj_t BgL_arg2102z00_914;
														obj_t BgL_arg2103z00_915;

														BgL_arg2102z00_914 =
															CAR(((obj_t) BgL_cdrzd22100zd2_901));
														BgL_arg2103z00_915 =
															CDR(((obj_t) BgL_cdrzd22100zd2_901));
														BgL_xz00_895 = BgL_arg2102z00_914;
														BgL_yz00_896 = BgL_arg2103z00_915;
													BgL_tagzd22093zd2_897:
														{	/* Expand/garith.scm 221 */
															obj_t BgL_arg2126z00_940;

															{	/* Expand/garith.scm 221 */
																obj_t BgL_arg2127z00_941;

																{	/* Expand/garith.scm 221 */
																	obj_t BgL_arg2128z00_942;

																	{	/* Expand/garith.scm 221 */
																		obj_t BgL_arg2129z00_943;

																		{	/* Expand/garith.scm 221 */
																			obj_t BgL_arg2130z00_944;

																			BgL_arg2130z00_944 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_yz00_896, BNIL);
																			BgL_arg2129z00_943 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						28)), BgL_arg2130z00_944);
																		}
																		BgL_arg2128z00_942 =
																			MAKE_YOUNG_PAIR(BgL_arg2129z00_943, BNIL);
																	}
																	BgL_arg2127z00_941 =
																		MAKE_YOUNG_PAIR(BgL_xz00_895,
																		BgL_arg2128z00_942);
																}
																BgL_arg2126z00_940 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 27)),
																	BgL_arg2127z00_941);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_28) (BgL_ez00_28,
																BgL_arg2126z00_940, BgL_ez00_28, BEOA);
														}
													}
											}
										else
											{	/* Expand/garith.scm 209 */
												obj_t BgL_arg2105z00_918;
												obj_t BgL_arg2106z00_919;

												BgL_arg2105z00_918 =
													CAR(((obj_t) BgL_cdrzd22100zd2_901));
												BgL_arg2106z00_919 =
													CDR(((obj_t) BgL_cdrzd22100zd2_901));
												{
													obj_t BgL_yz00_3068;
													obj_t BgL_xz00_3067;

													BgL_xz00_3067 = BgL_arg2105z00_918;
													BgL_yz00_3068 = BgL_arg2106z00_919;
													BgL_yz00_896 = BgL_yz00_3068;
													BgL_xz00_895 = BgL_xz00_3067;
													goto BgL_tagzd22093zd2_897;
												}
											}
									}
							}
						else
							{	/* Expand/garith.scm 209 */
							BgL_tagzd22094zd2_898:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string2333z00zzexpand_garithmetiquez00, BgL_xz00_27);
							}
					}
				else
					{	/* Expand/garith.scm 209 */
						goto BgL_tagzd22094zd2_898;
					}
			}
		}

	}



/* &expand-gmin */
	obj_t BGl_z62expandzd2gminzb0zzexpand_garithmetiquez00(obj_t BgL_envz00_1613,
		obj_t BgL_xz00_1614, obj_t BgL_ez00_1615)
	{
		{	/* Expand/garith.scm 208 */
			return
				BGl_expandzd2gminzd2zzexpand_garithmetiquez00(BgL_xz00_1614,
				BgL_ez00_1615);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_garithmetiquez00()
	{
		{	/* Expand/garith.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_garithmetiquez00()
	{
		{	/* Expand/garith.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_garithmetiquez00()
	{
		{	/* Expand/garith.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_garithmetiquez00()
	{
		{	/* Expand/garith.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2334z00zzexpand_garithmetiquez00));
		}

	}

#ifdef __cplusplus
}
#endif
