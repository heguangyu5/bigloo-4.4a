/*===========================================================================*/
/*   (Object/getter.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/getter.scm) */
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

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;

	typedef struct BgL_slotz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_srcz00;
		obj_t BgL_classzd2ownerzd2;
		long BgL_indexz00;
		obj_t BgL_typez00;
		bool_t BgL_readzd2onlyzf3z21;
		obj_t BgL_defaultzd2valuezd2;
		obj_t BgL_virtualzd2numzd2;
		bool_t BgL_virtualzd2overridezd2;
		obj_t BgL_getterz00;
		obj_t BgL_setterz00;
		obj_t BgL_userzd2infozd2;
	}              *BgL_slotz00_bglt;


	extern obj_t BGl_epairifyza2za2zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzobject_getterz00();
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_slotz00zzobject_slotsz00;
	static obj_t BGl_appendzd221011zd2zzobject_getterz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_getterz00();
	extern obj_t BGl_makezd2typedzd2formalz00zzast_identz00(obj_t);
	static obj_t
		BGl_z62genzd2javazd2classzd2slotszd2accessz12z70zzobject_getterz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_slotzd2directzd2refz00zzobject_getterz00(obj_t,
		BgL_typez00_bglt, obj_t, bool_t, obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzobject_getterz00();
	extern obj_t BGl_makezd2classzd2refz00zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_slotzd2directzd2setz12z12zzobject_getterz00(obj_t,
		BgL_typez00_bglt, obj_t, bool_t, obj_t);
	extern obj_t BGl_makezd2classzd2setz12z12zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_getterz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00
		(BgL_typez00_bglt, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_getterz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t
		BGl_genzd2javazd2classzd2slotzd2accessze70ze7zzobject_getterz00(obj_t,
		BgL_typez00_bglt, BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_getterz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzobject_getterz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_getterz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_getterz00();
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	extern obj_t BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00(obj_t, obj_t);
	static obj_t __cnst[14];


	   
		 
		DEFINE_STRING(BGl_string1415z00zzobject_getterz00,
		BgL_bgl_string1415za700za7za7o1423za7, "object_getter", 13);
	      DEFINE_STRING(BGl_string1416z00zzobject_getterz00,
		BgL_bgl_string1416za700za7za7o1424za7,
		"write val ::obj -set! define-inline pragma side-effect-free no-cfa-top effect read static inline obj - ",
		103);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2javazd2classzd2slotszd2accessz12zd2envzc0zzobject_getterz00,
		BgL_bgl_za762genza7d2javaza7d21425za7,
		BGl_z62genzd2javazd2classzd2slotszd2accessz12z70zzobject_getterz00, 0L,
		BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzobject_getterz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_getterz00(long
		BgL_checksumz00_1001, char *BgL_fromz00_1002)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_getterz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_getterz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_getterz00();
					BGl_libraryzd2moduleszd2initz00zzobject_getterz00();
					BGl_cnstzd2initzd2zzobject_getterz00();
					BGl_importedzd2moduleszd2initz00zzobject_getterz00();
					return BGl_methodzd2initzd2zzobject_getterz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_getterz00()
	{
		{	/* Object/getter.scm 18 */
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_getter");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_getter");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_getter");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_getter");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_getter");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_getter");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_getterz00()
	{
		{	/* Object/getter.scm 18 */
			{	/* Object/getter.scm 18 */
				obj_t BgL_cportz00_988;

				{	/* Object/getter.scm 18 */
					obj_t BgL_stringz00_996;

					BgL_stringz00_996 = BGl_string1416z00zzobject_getterz00;
					{	/* Object/getter.scm 18 */
						obj_t BgL_startz00_997;

						BgL_startz00_997 = BINT(((long) 0));
						{	/* Object/getter.scm 18 */
							obj_t BgL_endz00_998;

							BgL_endz00_998 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_996)));
							{	/* Object/getter.scm 18 */

								BgL_cportz00_988 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_996, BgL_startz00_997, BgL_endz00_998);
				}}}}
				{
					long BgL_iz00_989;

					BgL_iz00_989 = ((long) 13);
				BgL_loopz00_990:
					if ((BgL_iz00_989 == ((long) -1)))
						{	/* Object/getter.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Object/getter.scm 18 */
							{	/* Object/getter.scm 18 */
								obj_t BgL_arg1421z00_992;

								{	/* Object/getter.scm 18 */

									{	/* Object/getter.scm 18 */
										obj_t BgL_locationz00_994;

										BgL_locationz00_994 = BBOOL(((bool_t) 0));
										{	/* Object/getter.scm 18 */

											BgL_arg1421z00_992 =
												BGl_readz00zz__readerz00(BgL_cportz00_988,
												BgL_locationz00_994);
										}
									}
								}
								{	/* Object/getter.scm 18 */
									int BgL_tmpz00_1026;

									BgL_tmpz00_1026 = (int) (BgL_iz00_989);
									CNST_TABLE_SET(BgL_tmpz00_1026, BgL_arg1421z00_992);
							}}
							{	/* Object/getter.scm 18 */
								int BgL_auxz00_995;

								BgL_auxz00_995 = (int) ((BgL_iz00_989 - ((long) 1)));
								{
									long BgL_iz00_1031;

									BgL_iz00_1031 = (long) (BgL_auxz00_995);
									BgL_iz00_989 = BgL_iz00_1031;
									goto BgL_loopz00_990;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_getterz00()
	{
		{	/* Object/getter.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzobject_getterz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_698;

				BgL_headz00_698 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_699;
					obj_t BgL_tailz00_700;

					BgL_prevz00_699 = BgL_headz00_698;
					BgL_tailz00_700 = BgL_l1z00_1;
				BgL_loopz00_701:
					if (PAIRP(BgL_tailz00_700))
						{
							obj_t BgL_newzd2prevzd2_703;

							BgL_newzd2prevzd2_703 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_700), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_699, BgL_newzd2prevzd2_703);
							{
								obj_t BgL_tailz00_1041;
								obj_t BgL_prevz00_1040;

								BgL_prevz00_1040 = BgL_newzd2prevzd2_703;
								BgL_tailz00_1041 = CDR(BgL_tailz00_700);
								BgL_tailz00_700 = BgL_tailz00_1041;
								BgL_prevz00_699 = BgL_prevz00_1040;
								goto BgL_loopz00_701;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_698);
				}
			}
		}

	}



/* gen-java-class-slots-access! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00
		(BgL_typez00_bglt BgL_jclassz00_3, obj_t BgL_slotsz00_4,
		obj_t BgL_srczd2defzd2_5)
	{
		{	/* Object/getter.scm 41 */
			{	/* Object/getter.scm 48 */
				obj_t BgL_runner1134z00_724;

				if (NULLP(BgL_slotsz00_4))
					{	/* Object/getter.scm 48 */
						BgL_runner1134z00_724 = BNIL;
					}
				else
					{	/* Object/getter.scm 48 */
						obj_t BgL_head1116z00_710;

						{	/* Object/getter.scm 48 */
							obj_t BgL_arg1129z00_722;

							BgL_arg1129z00_722 =
								BGl_genzd2javazd2classzd2slotzd2accessze70ze7zzobject_getterz00
								(BgL_srczd2defzd2_5, BgL_jclassz00_3, BgL_jclassz00_3,
								CAR(BgL_slotsz00_4));
							{	/* Object/getter.scm 48 */
								obj_t BgL_res1397z00_926;

								BgL_res1397z00_926 = MAKE_YOUNG_PAIR(BgL_arg1129z00_722, BNIL);
								BgL_head1116z00_710 = BgL_res1397z00_926;
							}
						}
						{	/* Object/getter.scm 48 */
							obj_t BgL_g1119z00_711;

							BgL_g1119z00_711 = CDR(BgL_slotsz00_4);
							{
								obj_t BgL_l1114z00_713;
								obj_t BgL_tail1117z00_714;

								BgL_l1114z00_713 = BgL_g1119z00_711;
								BgL_tail1117z00_714 = BgL_head1116z00_710;
							BgL_zc3z04anonymousza31124ze3z87_715:
								if (NULLP(BgL_l1114z00_713))
									{	/* Object/getter.scm 48 */
										BgL_runner1134z00_724 = BgL_head1116z00_710;
									}
								else
									{	/* Object/getter.scm 48 */
										obj_t BgL_newtail1118z00_717;

										{	/* Object/getter.scm 48 */
											obj_t BgL_arg1127z00_719;

											{	/* Object/getter.scm 48 */
												obj_t BgL_arg1128z00_720;

												BgL_arg1128z00_720 = CAR(((obj_t) BgL_l1114z00_713));
												BgL_arg1127z00_719 =
													BGl_genzd2javazd2classzd2slotzd2accessze70ze7zzobject_getterz00
													(BgL_srczd2defzd2_5, BgL_jclassz00_3, BgL_jclassz00_3,
													BgL_arg1128z00_720);
											}
											{	/* Object/getter.scm 48 */
												obj_t BgL_res1399z00_930;

												BgL_res1399z00_930 =
													MAKE_YOUNG_PAIR(BgL_arg1127z00_719, BNIL);
												BgL_newtail1118z00_717 = BgL_res1399z00_930;
											}
										}
										SET_CDR(BgL_tail1117z00_714, BgL_newtail1118z00_717);
										{	/* Object/getter.scm 48 */
											obj_t BgL_arg1126z00_718;

											BgL_arg1126z00_718 = CDR(((obj_t) BgL_l1114z00_713));
											{
												obj_t BgL_tail1117z00_1060;
												obj_t BgL_l1114z00_1059;

												BgL_l1114z00_1059 = BgL_arg1126z00_718;
												BgL_tail1117z00_1060 = BgL_newtail1118z00_717;
												BgL_tail1117z00_714 = BgL_tail1117z00_1060;
												BgL_l1114z00_713 = BgL_l1114z00_1059;
												goto BgL_zc3z04anonymousza31124ze3z87_715;
											}
										}
									}
							}
						}
					}
				return
					BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_runner1134z00_724);
			}
		}

	}



/* gen-java-class-slot-access~0 */
	obj_t BGl_genzd2javazd2classzd2slotzd2accessze70ze7zzobject_getterz00(obj_t
		BgL_srczd2defzd2_987, BgL_typez00_bglt BgL_jclassz00_986,
		BgL_typez00_bglt BgL_i1068z00_985, obj_t BgL_slotz00_725)
	{
		{	/* Object/getter.scm 47 */
			{	/* Object/getter.scm 44 */
				obj_t BgL_refz00_727;

				{	/* Object/getter.scm 44 */
					obj_t BgL_arg1146z00_731;

					BgL_arg1146z00_731 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_i1068z00_985)))->BgL_idz00);
					BgL_refz00_727 =
						BGl_slotzd2directzd2refz00zzobject_getterz00(BgL_arg1146z00_731,
						BgL_jclassz00_986, BgL_slotz00_725, ((bool_t) 0),
						BgL_srczd2defzd2_987);
				}
				if (
					(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_slotz00_725)))->BgL_readzd2onlyzf3z21))
					{	/* Object/getter.scm 45 */
						return BgL_refz00_727;
					}
				else
					{	/* Object/getter.scm 47 */
						obj_t BgL_arg1140z00_729;

						{	/* Object/getter.scm 47 */
							obj_t BgL_arg1145z00_730;

							BgL_arg1145z00_730 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_i1068z00_985)))->BgL_idz00);
							BgL_arg1140z00_729 =
								BGl_slotzd2directzd2setz12z12zzobject_getterz00
								(BgL_arg1145z00_730, BgL_jclassz00_986, BgL_slotz00_725,
								((bool_t) 0), BgL_srczd2defzd2_987);
						}
						return
							BGl_appendzd221011zd2zzobject_getterz00(BgL_refz00_727,
							BgL_arg1140z00_729);
					}
			}
		}

	}



/* &gen-java-class-slots-access! */
	obj_t BGl_z62genzd2javazd2classzd2slotszd2accessz12z70zzobject_getterz00(obj_t
		BgL_envz00_981, obj_t BgL_jclassz00_982, obj_t BgL_slotsz00_983,
		obj_t BgL_srczd2defzd2_984)
	{
		{	/* Object/getter.scm 41 */
			return
				BGl_genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00(
				((BgL_typez00_bglt) BgL_jclassz00_982), BgL_slotsz00_983,
				BgL_srczd2defzd2_984);
		}

	}



/* slot-direct-ref */
	obj_t BGl_slotzd2directzd2refz00zzobject_getterz00(obj_t BgL_classzd2idzd2_6,
		BgL_typez00_bglt BgL_classz00_7, obj_t BgL_slotz00_8,
		bool_t BgL_wideningz00_9, obj_t BgL_srczd2defzd2_10)
	{
		{	/* Object/getter.scm 53 */
			{	/* Object/getter.scm 55 */
				obj_t BgL_slotzd2refzd2idz00_734;

				{	/* Object/getter.scm 55 */
					obj_t BgL_arg1271z00_786;

					BgL_arg1271z00_786 =
						(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_slotz00_8)))->BgL_idz00);
					{	/* Object/getter.scm 55 */
						obj_t BgL_list1272z00_787;

						{	/* Object/getter.scm 55 */
							obj_t BgL_arg1273z00_788;

							{	/* Object/getter.scm 55 */
								obj_t BgL_arg1274z00_789;

								BgL_arg1274z00_789 = MAKE_YOUNG_PAIR(BgL_arg1271z00_786, BNIL);
								BgL_arg1273z00_788 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
									BgL_arg1274z00_789);
							}
							BgL_list1272z00_787 =
								MAKE_YOUNG_PAIR(BgL_classzd2idzd2_6, BgL_arg1273z00_788);
						}
						BgL_slotzd2refzd2idz00_734 =
							BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list1272z00_787);
				}}
				{	/* Object/getter.scm 56 */
					obj_t BgL_slotzd2refzd2tidz00_736;

					{	/* Object/getter.scm 57 */
						obj_t BgL_arg1268z00_784;

						BgL_arg1268z00_784 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt)
										(((BgL_slotz00_bglt) COBJECT(
													((BgL_slotz00_bglt) BgL_slotz00_8)))->
											BgL_typez00))))->BgL_idz00);
						BgL_slotzd2refzd2tidz00_736 =
							BGl_makezd2typedzd2identz00zzast_identz00
							(BgL_slotzd2refzd2idz00_734, BgL_arg1268z00_784);
					}
					{	/* Object/getter.scm 57 */
						obj_t BgL_objz00_737;

						BgL_objz00_737 =
							BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
							(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 1))));
						{	/* Object/getter.scm 58 */
							obj_t BgL_tidz00_738;

							{	/* Object/getter.scm 59 */
								obj_t BgL_arg1258z00_782;

								BgL_arg1258z00_782 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt) BgL_classz00_7)))->BgL_idz00);
								BgL_tidz00_738 =
									BGl_makezd2typedzd2formalz00zzast_identz00
									(BgL_arg1258z00_782);
							}
							{	/* Object/getter.scm 59 */

								if (
									(BgL_classzd2idzd2_6 ==
										(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt)
														(((BgL_slotz00_bglt) COBJECT(
																	((BgL_slotz00_bglt) BgL_slotz00_8)))->
															BgL_classzd2ownerzd2))))->BgL_idz00)))
									{	/* Object/getter.scm 60 */
										{	/* Object/getter.scm 66 */
											obj_t BgL_arg1165z00_742;

											{	/* Object/getter.scm 66 */
												obj_t BgL_arg1166z00_743;

												{	/* Object/getter.scm 66 */
													obj_t BgL_arg1167z00_744;

													{	/* Object/getter.scm 66 */
														obj_t BgL_arg1169z00_745;

														{	/* Object/getter.scm 66 */
															obj_t BgL_arg1170z00_746;

															BgL_arg1170z00_746 =
																MAKE_YOUNG_PAIR(BgL_tidz00_738, BNIL);
															BgL_arg1169z00_745 =
																MAKE_YOUNG_PAIR(BgL_slotzd2refzd2tidz00_736,
																BgL_arg1170z00_746);
														}
														BgL_arg1167z00_744 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
															BgL_arg1169z00_745);
													}
													BgL_arg1166z00_743 =
														MAKE_YOUNG_PAIR(BgL_arg1167z00_744, BNIL);
												}
												BgL_arg1165z00_742 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
													BgL_arg1166z00_743);
											}
											BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
												(BgL_arg1165z00_742);
										}
										{	/* Object/getter.scm 69 */
											obj_t BgL_arg1172z00_747;

											{	/* Object/getter.scm 69 */
												obj_t BgL_arg1174z00_748;

												{	/* Object/getter.scm 69 */
													obj_t BgL_arg1175z00_749;

													{	/* Object/getter.scm 69 */
														obj_t BgL_arg1176z00_750;

														{	/* Object/getter.scm 69 */
															obj_t BgL_arg1177z00_751;

															{	/* Object/getter.scm 69 */
																obj_t BgL_arg1178z00_752;

																{	/* Object/getter.scm 69 */
																	obj_t BgL_arg1179z00_753;

																	{	/* Object/getter.scm 69 */
																		obj_t BgL_arg1186z00_754;

																		{	/* Object/getter.scm 69 */
																			obj_t BgL_arg1190z00_755;

																			{	/* Object/getter.scm 69 */
																				obj_t BgL_arg1194z00_756;

																				{	/* Object/getter.scm 69 */
																					obj_t BgL_arg1197z00_757;

																					BgL_arg1197z00_757 =
																						MAKE_YOUNG_PAIR
																						(BgL_slotzd2refzd2idz00_734, BNIL);
																					BgL_arg1194z00_756 =
																						MAKE_YOUNG_PAIR(BgL_arg1197z00_757,
																						BNIL);
																				}
																				BgL_arg1190z00_755 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							4)), BgL_arg1194z00_756);
																			}
																			BgL_arg1186z00_754 =
																				MAKE_YOUNG_PAIR(BgL_arg1190z00_755,
																				BNIL);
																		}
																		BgL_arg1179z00_753 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					5)), BgL_arg1186z00_754);
																	}
																	BgL_arg1178z00_752 =
																		MAKE_YOUNG_PAIR(BgL_arg1179z00_753, BNIL);
																}
																BgL_arg1177z00_751 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																	BgL_arg1178z00_752);
															}
															BgL_arg1176z00_750 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
																BgL_arg1177z00_751);
														}
														BgL_arg1175z00_749 =
															MAKE_YOUNG_PAIR(BgL_slotzd2refzd2idz00_734,
															BgL_arg1176z00_750);
													}
													BgL_arg1174z00_748 =
														MAKE_YOUNG_PAIR(BgL_arg1175z00_749, BNIL);
												}
												BgL_arg1172z00_747 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
													BgL_arg1174z00_748);
											}
											BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
												(BgL_arg1172z00_747);
										}
										{	/* Object/getter.scm 72 */
											obj_t BgL_arg1201z00_758;

											{	/* Object/getter.scm 72 */
												obj_t BgL_arg1208z00_760;
												obj_t BgL_arg1211z00_761;

												{	/* Object/getter.scm 72 */
													obj_t BgL_arg1221z00_764;

													{	/* Object/getter.scm 72 */
														obj_t BgL_arg1223z00_765;
														obj_t BgL_arg1225z00_766;

														{	/* Object/getter.scm 72 */
															obj_t BgL_arg1227z00_767;

															{	/* Object/getter.scm 72 */
																obj_t BgL_arg1229z00_768;

																{	/* Object/getter.scm 72 */
																	obj_t BgL_arg1232z00_769;

																	{	/* Object/getter.scm 72 */
																		obj_t BgL_arg1239z00_770;
																		obj_t BgL_arg1242z00_771;

																		{	/* Object/getter.scm 72 */
																			obj_t BgL_res1400z00_938;

																			{	/* Object/getter.scm 72 */
																				obj_t BgL_arg1466z00_937;

																				BgL_arg1466z00_937 =
																					SYMBOL_TO_STRING(BgL_objz00_737);
																				BgL_res1400z00_938 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg1466z00_937);
																			}
																			BgL_arg1239z00_770 = BgL_res1400z00_938;
																		}
																		{	/* Object/getter.scm 72 */
																			obj_t BgL_res1401z00_941;

																			{	/* Object/getter.scm 72 */
																				obj_t BgL_arg1466z00_940;

																				BgL_arg1466z00_940 =
																					SYMBOL_TO_STRING(BgL_tidz00_738);
																				BgL_res1401z00_941 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg1466z00_940);
																			}
																			BgL_arg1242z00_771 = BgL_res1401z00_941;
																		}
																		BgL_arg1232z00_769 =
																			string_append(BgL_arg1239z00_770,
																			BgL_arg1242z00_771);
																	}
																	BgL_arg1229z00_768 =
																		bstring_to_symbol(BgL_arg1232z00_769);
																}
																BgL_arg1227z00_767 =
																	MAKE_YOUNG_PAIR(BgL_arg1229z00_768, BNIL);
															}
															BgL_arg1223z00_765 =
																MAKE_YOUNG_PAIR(BgL_slotzd2refzd2tidz00_736,
																BgL_arg1227z00_767);
														}
														{	/* Object/getter.scm 73 */
															obj_t BgL_arg1243z00_772;

															BgL_arg1243z00_772 =
																BGl_makezd2classzd2refz00zzobject_toolsz00(
																((BgL_typez00_bglt) BgL_classz00_7),
																((BgL_slotz00_bglt) BgL_slotz00_8),
																BgL_objz00_737);
															BgL_arg1225z00_766 =
																MAKE_YOUNG_PAIR(BgL_arg1243z00_772, BNIL);
														}
														BgL_arg1221z00_764 =
															MAKE_YOUNG_PAIR(BgL_arg1223z00_765,
															BgL_arg1225z00_766);
													}
													BgL_arg1208z00_760 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
														BgL_arg1221z00_764);
												}
												BgL_arg1211z00_761 =
													(((BgL_slotz00_bglt) COBJECT(
															((BgL_slotz00_bglt) BgL_slotz00_8)))->BgL_srcz00);
												{	/* Object/getter.scm 71 */
													obj_t BgL_list1212z00_762;

													{	/* Object/getter.scm 71 */
														obj_t BgL_arg1216z00_763;

														BgL_arg1216z00_763 =
															MAKE_YOUNG_PAIR(BgL_srczd2defzd2_10, BNIL);
														BgL_list1212z00_762 =
															MAKE_YOUNG_PAIR(BgL_arg1211z00_761,
															BgL_arg1216z00_763);
													}
													BgL_arg1201z00_758 =
														BGl_epairifyza2za2zztools_miscz00
														(BgL_arg1208z00_760, BgL_list1212z00_762);
											}}
											{	/* Object/getter.scm 70 */
												obj_t BgL_list1202z00_759;

												BgL_list1202z00_759 =
													MAKE_YOUNG_PAIR(BgL_arg1201z00_758, BNIL);
												return BgL_list1202z00_759;
											}
										}
									}
								else
									{	/* Object/getter.scm 77 */
										obj_t BgL_slotzd2refzd2oidz00_773;

										{	/* Object/getter.scm 77 */
											obj_t BgL_arg1245z00_774;
											obj_t BgL_arg1246z00_775;

											BgL_arg1245z00_774 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt)
															(((BgL_slotz00_bglt) COBJECT(
																		((BgL_slotz00_bglt) BgL_slotz00_8)))->
																BgL_classzd2ownerzd2))))->BgL_idz00);
											BgL_arg1246z00_775 =
												(((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
															BgL_slotz00_8)))->BgL_idz00);
											{	/* Object/getter.scm 77 */
												obj_t BgL_list1247z00_776;

												{	/* Object/getter.scm 77 */
													obj_t BgL_arg1250z00_777;

													{	/* Object/getter.scm 77 */
														obj_t BgL_arg1252z00_778;

														BgL_arg1252z00_778 =
															MAKE_YOUNG_PAIR(BgL_arg1246z00_775, BNIL);
														BgL_arg1250z00_777 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
															BgL_arg1252z00_778);
													}
													BgL_list1247z00_776 =
														MAKE_YOUNG_PAIR(BgL_arg1245z00_774,
														BgL_arg1250z00_777);
												}
												BgL_slotzd2refzd2oidz00_773 =
													BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
													(BgL_list1247z00_776);
										}}
										BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00
											(BgL_slotzd2refzd2idz00_734, BgL_slotzd2refzd2oidz00_773);
										return BNIL;
									}
							}
						}
					}
				}
			}
		}

	}



/* slot-direct-set! */
	obj_t BGl_slotzd2directzd2setz12z12zzobject_getterz00(obj_t
		BgL_classzd2idzd2_11, BgL_typez00_bglt BgL_classz00_12,
		obj_t BgL_slotz00_13, bool_t BgL_wideningz00_14, obj_t BgL_srczd2defzd2_15)
	{
		{	/* Object/getter.scm 84 */
			{	/* Object/getter.scm 85 */
				obj_t BgL_slotzd2refzd2idz00_790;

				{	/* Object/getter.scm 85 */
					obj_t BgL_arg1344z00_851;

					BgL_arg1344z00_851 =
						(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_slotz00_13)))->BgL_idz00);
					{	/* Object/getter.scm 85 */
						obj_t BgL_list1345z00_852;

						{	/* Object/getter.scm 85 */
							obj_t BgL_arg1346z00_853;

							{	/* Object/getter.scm 85 */
								obj_t BgL_arg1347z00_854;

								BgL_arg1347z00_854 = MAKE_YOUNG_PAIR(BgL_arg1344z00_851, BNIL);
								BgL_arg1346z00_853 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
									BgL_arg1347z00_854);
							}
							BgL_list1345z00_852 =
								MAKE_YOUNG_PAIR(BgL_classzd2idzd2_11, BgL_arg1346z00_853);
						}
						BgL_slotzd2refzd2idz00_790 =
							BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list1345z00_852);
				}}
				{	/* Object/getter.scm 85 */
					obj_t BgL_slotzd2setz12zd2idz12_791;

					{	/* Object/getter.scm 86 */
						obj_t BgL_arg1338z00_848;

						{	/* Object/getter.scm 86 */
							obj_t BgL_arg1339z00_849;
							obj_t BgL_arg1340z00_850;

							{	/* Object/getter.scm 86 */
								obj_t BgL_res1404z00_949;

								{	/* Object/getter.scm 86 */
									obj_t BgL_arg1466z00_948;

									BgL_arg1466z00_948 =
										SYMBOL_TO_STRING(BgL_slotzd2refzd2idz00_790);
									BgL_res1404z00_949 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_948);
								}
								BgL_arg1339z00_849 = BgL_res1404z00_949;
							}
							{	/* Object/getter.scm 86 */
								obj_t BgL_res1405z00_952;

								{	/* Object/getter.scm 86 */
									obj_t BgL_symbolz00_950;

									BgL_symbolz00_950 = CNST_TABLE_REF(((long) 10));
									{	/* Object/getter.scm 86 */
										obj_t BgL_arg1466z00_951;

										BgL_arg1466z00_951 = SYMBOL_TO_STRING(BgL_symbolz00_950);
										BgL_res1405z00_952 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_951);
								}}
								BgL_arg1340z00_850 = BgL_res1405z00_952;
							}
							BgL_arg1338z00_848 =
								string_append(BgL_arg1339z00_849, BgL_arg1340z00_850);
						}
						BgL_slotzd2setz12zd2idz12_791 =
							bstring_to_symbol(BgL_arg1338z00_848);
					}
					{	/* Object/getter.scm 86 */
						obj_t BgL_slotzd2setz12zd2tidz12_792;

						{	/* Object/getter.scm 87 */
							obj_t BgL_arg1334z00_845;

							{	/* Object/getter.scm 87 */
								obj_t BgL_arg1335z00_846;
								obj_t BgL_arg1337z00_847;

								{	/* Object/getter.scm 87 */
									obj_t BgL_res1407z00_957;

									{	/* Object/getter.scm 87 */
										obj_t BgL_arg1466z00_956;

										BgL_arg1466z00_956 =
											SYMBOL_TO_STRING(BgL_slotzd2setz12zd2idz12_791);
										BgL_res1407z00_957 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_956);
									}
									BgL_arg1335z00_846 = BgL_res1407z00_957;
								}
								{	/* Object/getter.scm 87 */
									obj_t BgL_res1408z00_960;

									{	/* Object/getter.scm 87 */
										obj_t BgL_symbolz00_958;

										BgL_symbolz00_958 = CNST_TABLE_REF(((long) 11));
										{	/* Object/getter.scm 87 */
											obj_t BgL_arg1466z00_959;

											BgL_arg1466z00_959 = SYMBOL_TO_STRING(BgL_symbolz00_958);
											BgL_res1408z00_960 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_959);
									}}
									BgL_arg1337z00_847 = BgL_res1408z00_960;
								}
								BgL_arg1334z00_845 =
									string_append(BgL_arg1335z00_846, BgL_arg1337z00_847);
							}
							BgL_slotzd2setz12zd2tidz12_792 =
								bstring_to_symbol(BgL_arg1334z00_845);
						}
						{	/* Object/getter.scm 87 */
							obj_t BgL_tidz00_793;

							{	/* Object/getter.scm 88 */
								obj_t BgL_arg1331z00_844;

								BgL_arg1331z00_844 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt) BgL_classz00_12)))->BgL_idz00);
								BgL_tidz00_793 =
									BGl_makezd2typedzd2formalz00zzast_identz00
									(BgL_arg1331z00_844);
							}
							{	/* Object/getter.scm 88 */
								obj_t BgL_vzd2idzd2_794;

								BgL_vzd2idzd2_794 =
									BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
									(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												12))));
								{	/* Object/getter.scm 89 */
									obj_t BgL_objz00_795;

									BgL_objz00_795 =
										BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
										(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													1))));
									{	/* Object/getter.scm 90 */
										obj_t BgL_vzd2tidzd2_796;

										{	/* Object/getter.scm 91 */
											obj_t BgL_arg1327z00_840;

											BgL_arg1327z00_840 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt)
															(((BgL_slotz00_bglt) COBJECT(
																		((BgL_slotz00_bglt) BgL_slotz00_13)))->
																BgL_typez00))))->BgL_idz00);
											BgL_vzd2tidzd2_796 =
												BGl_makezd2typedzd2identz00zzast_identz00
												(BgL_vzd2idzd2_794, BgL_arg1327z00_840);
										}
										{	/* Object/getter.scm 91 */
											obj_t BgL_classzd2ownerzd2_797;

											BgL_classzd2ownerzd2_797 =
												(((BgL_slotz00_bglt) COBJECT(
														((BgL_slotz00_bglt) BgL_slotz00_13)))->
												BgL_classzd2ownerzd2);
											{	/* Object/getter.scm 92 */

												if (
													(BgL_classzd2idzd2_11 ==
														(((BgL_typez00_bglt) COBJECT(
																	((BgL_typez00_bglt)
																		BgL_classzd2ownerzd2_797)))->BgL_idz00)))
													{	/* Object/getter.scm 93 */
														{	/* Object/getter.scm 97 */
															obj_t BgL_arg1277z00_800;

															{	/* Object/getter.scm 97 */
																obj_t BgL_arg1280z00_801;

																{	/* Object/getter.scm 97 */
																	obj_t BgL_arg1281z00_802;

																	{	/* Object/getter.scm 97 */
																		obj_t BgL_arg1282z00_803;

																		{	/* Object/getter.scm 97 */
																			obj_t BgL_arg1284z00_804;

																			{	/* Object/getter.scm 97 */
																				obj_t BgL_arg1285z00_805;

																				BgL_arg1285z00_805 =
																					MAKE_YOUNG_PAIR(BgL_vzd2tidzd2_796,
																					BNIL);
																				BgL_arg1284z00_804 =
																					MAKE_YOUNG_PAIR(BgL_tidz00_793,
																					BgL_arg1285z00_805);
																			}
																			BgL_arg1282z00_803 =
																				MAKE_YOUNG_PAIR
																				(BgL_slotzd2setz12zd2tidz12_792,
																				BgL_arg1284z00_804);
																		}
																		BgL_arg1281z00_802 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					2)), BgL_arg1282z00_803);
																	}
																	BgL_arg1280z00_801 =
																		MAKE_YOUNG_PAIR(BgL_arg1281z00_802, BNIL);
																}
																BgL_arg1277z00_800 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																	BgL_arg1280z00_801);
															}
															BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																(BgL_arg1277z00_800);
														}
														{	/* Object/getter.scm 99 */
															obj_t BgL_arg1286z00_806;

															{	/* Object/getter.scm 99 */
																obj_t BgL_arg1287z00_807;

																{	/* Object/getter.scm 99 */
																	obj_t BgL_arg1288z00_808;

																	{	/* Object/getter.scm 99 */
																		obj_t BgL_arg1289z00_809;

																		{	/* Object/getter.scm 99 */
																			obj_t BgL_arg1290z00_810;

																			{	/* Object/getter.scm 99 */
																				obj_t BgL_arg1291z00_811;

																				{	/* Object/getter.scm 99 */
																					obj_t BgL_arg1292z00_812;

																					{	/* Object/getter.scm 99 */
																						obj_t BgL_arg1295z00_813;

																						{	/* Object/getter.scm 99 */
																							obj_t BgL_arg1296z00_814;

																							BgL_arg1296z00_814 =
																								MAKE_YOUNG_PAIR
																								(BgL_slotzd2refzd2idz00_790,
																								BNIL);
																							BgL_arg1295z00_813 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1296z00_814, BNIL);
																						}
																						BgL_arg1292z00_812 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 13)),
																							BgL_arg1295z00_813);
																					}
																					BgL_arg1291z00_811 =
																						MAKE_YOUNG_PAIR(BgL_arg1292z00_812,
																						BNIL);
																				}
																				BgL_arg1290z00_810 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							5)), BgL_arg1291z00_811);
																			}
																			BgL_arg1289z00_809 =
																				MAKE_YOUNG_PAIR(BgL_arg1290z00_810,
																				BNIL);
																		}
																		BgL_arg1288z00_808 =
																			MAKE_YOUNG_PAIR
																			(BgL_slotzd2setz12zd2idz12_791,
																			BgL_arg1289z00_809);
																	}
																	BgL_arg1287z00_807 =
																		MAKE_YOUNG_PAIR(BgL_arg1288z00_808, BNIL);
																}
																BgL_arg1286z00_806 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
																	BgL_arg1287z00_807);
															}
															BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																(BgL_arg1286z00_806);
														}
														{	/* Object/getter.scm 102 */
															obj_t BgL_arg1297z00_815;

															{	/* Object/getter.scm 102 */
																obj_t BgL_arg1299z00_817;
																obj_t BgL_arg1300z00_818;

																{	/* Object/getter.scm 102 */
																	obj_t BgL_arg1304z00_821;

																	{	/* Object/getter.scm 102 */
																		obj_t BgL_arg1306z00_822;
																		obj_t BgL_arg1307z00_823;

																		{	/* Object/getter.scm 102 */
																			obj_t BgL_arg1308z00_824;

																			{	/* Object/getter.scm 102 */
																				obj_t BgL_arg1309z00_825;
																				obj_t BgL_arg1310z00_826;

																				{	/* Object/getter.scm 102 */
																					obj_t BgL_arg1311z00_827;

																					{	/* Object/getter.scm 102 */
																						obj_t BgL_arg1312z00_828;
																						obj_t BgL_arg1314z00_829;

																						{	/* Object/getter.scm 102 */
																							obj_t BgL_res1410z00_970;

																							{	/* Object/getter.scm 102 */
																								obj_t BgL_arg1466z00_969;

																								BgL_arg1466z00_969 =
																									SYMBOL_TO_STRING
																									(BgL_objz00_795);
																								BgL_res1410z00_970 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1466z00_969);
																							}
																							BgL_arg1312z00_828 =
																								BgL_res1410z00_970;
																						}
																						{	/* Object/getter.scm 102 */
																							obj_t BgL_res1411z00_973;

																							{	/* Object/getter.scm 102 */
																								obj_t BgL_arg1466z00_972;

																								BgL_arg1466z00_972 =
																									SYMBOL_TO_STRING
																									(BgL_tidz00_793);
																								BgL_res1411z00_973 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1466z00_972);
																							}
																							BgL_arg1314z00_829 =
																								BgL_res1411z00_973;
																						}
																						BgL_arg1311z00_827 =
																							string_append(BgL_arg1312z00_828,
																							BgL_arg1314z00_829);
																					}
																					BgL_arg1309z00_825 =
																						bstring_to_symbol
																						(BgL_arg1311z00_827);
																				}
																				BgL_arg1310z00_826 =
																					MAKE_YOUNG_PAIR(BgL_vzd2tidzd2_796,
																					BNIL);
																				BgL_arg1308z00_824 =
																					MAKE_YOUNG_PAIR(BgL_arg1309z00_825,
																					BgL_arg1310z00_826);
																			}
																			BgL_arg1306z00_822 =
																				MAKE_YOUNG_PAIR
																				(BgL_slotzd2setz12zd2tidz12_792,
																				BgL_arg1308z00_824);
																		}
																		{	/* Object/getter.scm 103 */
																			obj_t BgL_arg1315z00_830;

																			BgL_arg1315z00_830 =
																				BGl_makezd2classzd2setz12z12zzobject_toolsz00
																				(((BgL_typez00_bglt) BgL_classz00_12),
																				((BgL_slotz00_bglt) BgL_slotz00_13),
																				BgL_objz00_795, BgL_vzd2idzd2_794);
																			BgL_arg1307z00_823 =
																				MAKE_YOUNG_PAIR(BgL_arg1315z00_830,
																				BNIL);
																		}
																		BgL_arg1304z00_821 =
																			MAKE_YOUNG_PAIR(BgL_arg1306z00_822,
																			BgL_arg1307z00_823);
																	}
																	BgL_arg1299z00_817 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
																		BgL_arg1304z00_821);
																}
																if (BGl_isazf3zf3zz__objectz00(BgL_slotz00_13,
																		BGl_slotz00zzobject_slotsz00))
																	{	/* Object/getter.scm 104 */
																		BgL_arg1300z00_818 =
																			(((BgL_slotz00_bglt) COBJECT(
																					((BgL_slotz00_bglt)
																						BgL_slotz00_13)))->BgL_srcz00);
																	}
																else
																	{	/* Object/getter.scm 104 */
																		BgL_arg1300z00_818 = BgL_slotz00_13;
																	}
																{	/* Object/getter.scm 101 */
																	obj_t BgL_list1301z00_819;

																	{	/* Object/getter.scm 101 */
																		obj_t BgL_arg1303z00_820;

																		BgL_arg1303z00_820 =
																			MAKE_YOUNG_PAIR(BgL_srczd2defzd2_15,
																			BNIL);
																		BgL_list1301z00_819 =
																			MAKE_YOUNG_PAIR(BgL_arg1300z00_818,
																			BgL_arg1303z00_820);
																	}
																	BgL_arg1297z00_815 =
																		BGl_epairifyza2za2zztools_miscz00
																		(BgL_arg1299z00_817, BgL_list1301z00_819);
																}
															}
															{	/* Object/getter.scm 100 */
																obj_t BgL_list1298z00_816;

																BgL_list1298z00_816 =
																	MAKE_YOUNG_PAIR(BgL_arg1297z00_815, BNIL);
																return BgL_list1298z00_816;
															}
														}
													}
												else
													{	/* Object/getter.scm 108 */
														obj_t BgL_slotzd2setz12zd2oidz12_832;

														{	/* Object/getter.scm 108 */
															obj_t BgL_arg1317z00_833;
															obj_t BgL_arg1319z00_834;

															BgL_arg1317z00_833 =
																(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt)
																			BgL_classzd2ownerzd2_797)))->BgL_idz00);
															BgL_arg1319z00_834 =
																(((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
																			BgL_slotz00_13)))->BgL_idz00);
															{	/* Object/getter.scm 108 */
																obj_t BgL_list1320z00_835;

																{	/* Object/getter.scm 108 */
																	obj_t BgL_arg1322z00_836;

																	{	/* Object/getter.scm 108 */
																		obj_t BgL_arg1324z00_837;

																		{	/* Object/getter.scm 108 */
																			obj_t BgL_arg1325z00_838;

																			BgL_arg1325z00_838 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						10)), BNIL);
																			BgL_arg1324z00_837 =
																				MAKE_YOUNG_PAIR(BgL_arg1319z00_834,
																				BgL_arg1325z00_838);
																		}
																		BgL_arg1322z00_836 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					0)), BgL_arg1324z00_837);
																	}
																	BgL_list1320z00_835 =
																		MAKE_YOUNG_PAIR(BgL_arg1317z00_833,
																		BgL_arg1322z00_836);
																}
																BgL_slotzd2setz12zd2oidz12_832 =
																	BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																	(BgL_list1320z00_835);
														}}
														BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00
															(BgL_slotzd2setz12zd2idz12_791,
															BgL_slotzd2setz12zd2oidz12_832);
														return BNIL;
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



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_getterz00()
	{
		{	/* Object/getter.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_getterz00()
	{
		{	/* Object/getter.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_getterz00()
	{
		{	/* Object/getter.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_getterz00()
	{
		{	/* Object/getter.scm 18 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 196511052),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 478324196),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1415z00zzobject_getterz00));
		}

	}

#ifdef __cplusplus
}
#endif
