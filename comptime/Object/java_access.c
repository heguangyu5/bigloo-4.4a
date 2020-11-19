/*===========================================================================*/
/*   (Object/java_access.scm)                                                */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/java_access.scm) */
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


	static obj_t
		BGl_z62importzd2javazd2classzd2accessorsz12za2zzobject_javazd2accesszd2
		(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t
		BGl_genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00(obj_t);
	extern obj_t
		BGl_importzd2javazd2classzd2creatorzd2zzobject_creatorz00(BgL_typez00_bglt,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzobject_javazd2accesszd2();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzobject_javazd2accesszd2(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_javazd2accesszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2(obj_t,
		obj_t, BgL_typez00_bglt, bool_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzobject_javazd2accesszd2();
	extern obj_t
		BGl_makezd2javazd2classzd2slotszd2zzobject_slotsz00(BgL_typez00_bglt, obj_t,
		obj_t, obj_t);
	static bool_t
		BGl_correctzd2javazd2classzf3zf3zzobject_javazd2accesszd2(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_javazd2accesszd2 =
		BUNSPEC;
	extern obj_t
		BGl_genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00
		(BgL_typez00_bglt, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_javazd2accesszd2();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t
		BGl_importzd2javazd2classzd2predz12zc0zzobject_predicatez00
		(BgL_typez00_bglt, obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_javazd2accesszd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_coercionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_predicatez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_creatorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_getterz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
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
	static obj_t BGl_cnstzd2initzd2zzobject_javazd2accesszd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_javazd2accesszd2();
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_javazd2accesszd2();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t
		BGl_genzd2javazd2classzd2constructorszd2zzobject_creatorz00
		(BgL_typez00_bglt, obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2javazd2classzd2accessorsz12zd2envz12zzobject_javazd2accesszd2,
		BgL_bgl_za762importza7d2java1223z00,
		BGl_z62importzd2javazd2classzd2accessorsz12za2zzobject_javazd2accesszd2, 0L,
		BUNSPEC, 6);
	      DEFINE_STRING(BGl_string1213z00zzobject_javazd2accesszd2,
		BgL_bgl_string1213za700za7za7o1224za7, "super of `", 10);
	      DEFINE_STRING(BGl_string1214z00zzobject_javazd2accesszd2,
		BgL_bgl_string1214za700za7za7o1225za7, "' is not a class", 16);
	      DEFINE_STRING(BGl_string1215z00zzobject_javazd2accesszd2,
		BgL_bgl_string1215za700za7za7o1226za7, "object_java-access", 18);
	      DEFINE_STRING(BGl_string1216z00zzobject_javazd2accesszd2,
		BgL_bgl_string1216za700za7za7o1227za7, "foreign ", 8);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzobject_javazd2accesszd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_javazd2accesszd2(long
		BgL_checksumz00_842, char *BgL_fromz00_843)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_javazd2accesszd2))
				{
					BGl_requirezd2initializa7ationz75zzobject_javazd2accesszd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_javazd2accesszd2();
					BGl_libraryzd2moduleszd2initz00zzobject_javazd2accesszd2();
					BGl_cnstzd2initzd2zzobject_javazd2accesszd2();
					BGl_importedzd2moduleszd2initz00zzobject_javazd2accesszd2();
					return BGl_methodzd2initzd2zzobject_javazd2accesszd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_javazd2accesszd2()
	{
		{	/* Object/java_access.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_java-access");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_java-access");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_java-access");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_java-access");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_java-access");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_java-access");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_javazd2accesszd2()
	{
		{	/* Object/java_access.scm 21 */
			{	/* Object/java_access.scm 21 */
				obj_t BgL_cportz00_829;

				{	/* Object/java_access.scm 21 */
					obj_t BgL_stringz00_837;

					BgL_stringz00_837 = BGl_string1216z00zzobject_javazd2accesszd2;
					{	/* Object/java_access.scm 21 */
						obj_t BgL_startz00_838;

						BgL_startz00_838 = BINT(((long) 0));
						{	/* Object/java_access.scm 21 */
							obj_t BgL_endz00_839;

							BgL_endz00_839 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_837)));
							{	/* Object/java_access.scm 21 */

								BgL_cportz00_829 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_837, BgL_startz00_838, BgL_endz00_839);
				}}}}
				{
					long BgL_iz00_830;

					BgL_iz00_830 = ((long) 0);
				BgL_loopz00_831:
					if ((BgL_iz00_830 == ((long) -1)))
						{	/* Object/java_access.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Object/java_access.scm 21 */
							{	/* Object/java_access.scm 21 */
								obj_t BgL_arg1221z00_833;

								{	/* Object/java_access.scm 21 */

									{	/* Object/java_access.scm 21 */
										obj_t BgL_locationz00_835;

										BgL_locationz00_835 = BBOOL(((bool_t) 0));
										{	/* Object/java_access.scm 21 */

											BgL_arg1221z00_833 =
												BGl_readz00zz__readerz00(BgL_cportz00_829,
												BgL_locationz00_835);
										}
									}
								}
								{	/* Object/java_access.scm 21 */
									int BgL_tmpz00_867;

									BgL_tmpz00_867 = (int) (BgL_iz00_830);
									CNST_TABLE_SET(BgL_tmpz00_867, BgL_arg1221z00_833);
							}}
							{	/* Object/java_access.scm 21 */
								int BgL_auxz00_836;

								BgL_auxz00_836 = (int) ((BgL_iz00_830 - ((long) 1)));
								{
									long BgL_iz00_872;

									BgL_iz00_872 = (long) (BgL_auxz00_836);
									BgL_iz00_830 = BgL_iz00_872;
									goto BgL_loopz00_831;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_javazd2accesszd2()
	{
		{	/* Object/java_access.scm 21 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzobject_javazd2accesszd2(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_696;

				BgL_headz00_696 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_697;
					obj_t BgL_tailz00_698;

					BgL_prevz00_697 = BgL_headz00_696;
					BgL_tailz00_698 = BgL_l1z00_1;
				BgL_loopz00_699:
					if (PAIRP(BgL_tailz00_698))
						{
							obj_t BgL_newzd2prevzd2_701;

							BgL_newzd2prevzd2_701 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_698), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_697, BgL_newzd2prevzd2_701);
							{
								obj_t BgL_tailz00_882;
								obj_t BgL_prevz00_881;

								BgL_prevz00_881 = BgL_newzd2prevzd2_701;
								BgL_tailz00_882 = CDR(BgL_tailz00_698);
								BgL_tailz00_698 = BgL_tailz00_882;
								BgL_prevz00_697 = BgL_prevz00_881;
								goto BgL_loopz00_699;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_696);
				}
			}
		}

	}



/* import-java-class-accessors! */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2(obj_t
		BgL_pslotsz00_3, obj_t BgL_constrsz00_4, BgL_typez00_bglt BgL_classz00_5,
		bool_t BgL_abstractzf3zf3_6, obj_t BgL_modulez00_7, obj_t BgL_srcz00_8)
	{
		{	/* Object/java_access.scm 49 */
			if (BGl_correctzd2javazd2classzf3zf3zzobject_javazd2accesszd2
				(BgL_classz00_5, BgL_srcz00_8))
				{	/* Object/java_access.scm 51 */
					{	/* Object/java_access.scm 107 */
						obj_t BgL_cslotsz00_798;

						{	/* Object/java_access.scm 109 */
							obj_t BgL_arg1145z00_799;

							{
								BgL_jclassz00_bglt BgL_auxz00_887;

								{
									obj_t BgL_auxz00_888;

									{	/* Object/java_access.scm 109 */
										BgL_objectz00_bglt BgL_tmpz00_889;

										BgL_tmpz00_889 = ((BgL_objectz00_bglt) BgL_classz00_5);
										BgL_auxz00_888 = BGL_OBJECT_WIDENING(BgL_tmpz00_889);
									}
									BgL_auxz00_887 = ((BgL_jclassz00_bglt) BgL_auxz00_888);
								}
								BgL_arg1145z00_799 =
									(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_887))->
									BgL_itszd2superzd2);
							}
							BgL_cslotsz00_798 =
								BGl_makezd2javazd2classzd2slotszd2zzobject_slotsz00
								(BgL_classz00_5, BgL_pslotsz00_3, BgL_arg1145z00_799,
								BgL_srcz00_8);
						}
						{
							BgL_jclassz00_bglt BgL_auxz00_895;

							{
								obj_t BgL_auxz00_896;

								{	/* Object/java_access.scm 112 */
									BgL_objectz00_bglt BgL_tmpz00_897;

									BgL_tmpz00_897 = ((BgL_objectz00_bglt) BgL_classz00_5);
									BgL_auxz00_896 = BGL_OBJECT_WIDENING(BgL_tmpz00_897);
								}
								BgL_auxz00_895 = ((BgL_jclassz00_bglt) BgL_auxz00_896);
							}
							((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_895))->BgL_slotsz00) =
								((obj_t) BgL_cslotsz00_798), BUNSPEC);
						}
					}
					BGl_genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00(
						((obj_t) BgL_classz00_5));
					{	/* Object/java_access.scm 60 */
						obj_t BgL_fieldsz00_706;

						{	/* Object/java_access.scm 60 */
							obj_t BgL_arg1125z00_716;

							{
								BgL_jclassz00_bglt BgL_auxz00_904;

								{
									obj_t BgL_auxz00_905;

									{	/* Object/java_access.scm 60 */
										BgL_objectz00_bglt BgL_tmpz00_906;

										BgL_tmpz00_906 = ((BgL_objectz00_bglt) BgL_classz00_5);
										BgL_auxz00_905 = BGL_OBJECT_WIDENING(BgL_tmpz00_906);
									}
									BgL_auxz00_904 = ((BgL_jclassz00_bglt) BgL_auxz00_905);
								}
								BgL_arg1125z00_716 =
									(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_904))->
									BgL_slotsz00);
							}
							BgL_fieldsz00_706 =
								BGl_genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00
								(BgL_classz00_5, BgL_arg1125z00_716, BgL_srcz00_8);
						}
						if (
							((((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt) BgL_classz00_5)))->BgL_idz00) ==
								CNST_TABLE_REF(((long) 0))))
							{	/* Object/java_access.scm 61 */
								return BgL_fieldsz00_706;
							}
						else
							{	/* Object/java_access.scm 63 */
								obj_t BgL_predz00_709;

								BgL_predz00_709 =
									BGl_importzd2javazd2classzd2predz12zc0zzobject_predicatez00
									(BgL_classz00_5, BgL_srcz00_8, BgL_modulez00_7);
								if (BgL_abstractzf3zf3_6)
									{	/* Object/java_access.scm 64 */
										return
											BGl_appendzd221011zd2zzobject_javazd2accesszd2
											(BgL_predz00_709, BgL_fieldsz00_706);
									}
								else
									{	/* Object/java_access.scm 66 */
										obj_t BgL_constz00_710;

										BgL_constz00_710 =
											BGl_genzd2javazd2classzd2constructorszd2zzobject_creatorz00
											(BgL_classz00_5, BgL_constrsz00_4, BgL_srcz00_8);
										{	/* Object/java_access.scm 66 */
											obj_t BgL_creatorz00_711;

											BgL_creatorz00_711 =
												BGl_importzd2javazd2classzd2creatorzd2zzobject_creatorz00
												(BgL_classz00_5, BgL_constrsz00_4, BgL_srcz00_8);
											{	/* Object/java_access.scm 68 */

												return
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_predz00_709,
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_creatorz00_711,
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_fieldsz00_706,
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_constz00_710, BNIL))));
											}
										}
									}
							}
					}
				}
			else
				{	/* Object/java_access.scm 51 */
					return BNIL;
				}
		}

	}



/* &import-java-class-accessors! */
	obj_t
		BGl_z62importzd2javazd2classzd2accessorsz12za2zzobject_javazd2accesszd2
		(obj_t BgL_envz00_822, obj_t BgL_pslotsz00_823, obj_t BgL_constrsz00_824,
		obj_t BgL_classz00_825, obj_t BgL_abstractzf3zf3_826,
		obj_t BgL_modulez00_827, obj_t BgL_srcz00_828)
	{
		{	/* Object/java_access.scm 49 */
			return
				BGl_importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2
				(BgL_pslotsz00_823, BgL_constrsz00_824,
				((BgL_typez00_bglt) BgL_classz00_825), CBOOL(BgL_abstractzf3zf3_826),
				BgL_modulez00_827, BgL_srcz00_828);
		}

	}



/* correct-java-class? */
	bool_t
		BGl_correctzd2javazd2classzf3zf3zzobject_javazd2accesszd2(BgL_typez00_bglt
		BgL_classz00_9, obj_t BgL_srcz00_10)
	{
		{	/* Object/java_access.scm 80 */
			{	/* Object/java_access.scm 81 */
				obj_t BgL_superz00_717;
				obj_t BgL_classzd2idzd2_718;

				{
					BgL_jclassz00_bglt BgL_auxz00_929;

					{
						obj_t BgL_auxz00_930;

						{	/* Object/java_access.scm 81 */
							BgL_objectz00_bglt BgL_tmpz00_931;

							BgL_tmpz00_931 = ((BgL_objectz00_bglt) BgL_classz00_9);
							BgL_auxz00_930 = BGL_OBJECT_WIDENING(BgL_tmpz00_931);
						}
						BgL_auxz00_929 = ((BgL_jclassz00_bglt) BgL_auxz00_930);
					}
					BgL_superz00_717 =
						(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_929))->
						BgL_itszd2superzd2);
				}
				BgL_classzd2idzd2_718 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_classz00_9)))->BgL_idz00);
				{	/* Object/java_access.scm 86 */
					bool_t BgL_test1234z00_938;

					if (BGl_isazf3zf3zz__objectz00(BgL_superz00_717,
							BGl_typez00zztype_typez00))
						{	/* Object/java_access.scm 86 */
							if (BGl_isazf3zf3zz__objectz00(BgL_superz00_717,
									BGl_jclassz00zzobject_classz00))
								{	/* Object/java_access.scm 86 */
									BgL_test1234z00_938 = ((bool_t) 0);
								}
							else
								{	/* Object/java_access.scm 86 */
									BgL_test1234z00_938 = ((bool_t) 1);
								}
						}
					else
						{	/* Object/java_access.scm 86 */
							BgL_test1234z00_938 = ((bool_t) 0);
						}
					if (BgL_test1234z00_938)
						{	/* Object/java_access.scm 86 */
							{	/* Object/java_access.scm 87 */
								obj_t BgL_arg1129z00_722;
								obj_t BgL_arg1133z00_723;

								BgL_arg1129z00_722 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt) BgL_superz00_717)))->BgL_idz00);
								{	/* Object/java_access.scm 89 */
									obj_t BgL_arg1140z00_725;

									{	/* Object/java_access.scm 89 */
										obj_t BgL_res1212z00_813;

										{	/* Object/java_access.scm 89 */
											obj_t BgL_arg1466z00_812;

											BgL_arg1466z00_812 =
												SYMBOL_TO_STRING(BgL_classzd2idzd2_718);
											BgL_res1212z00_813 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_812);
										}
										BgL_arg1140z00_725 = BgL_res1212z00_813;
									}
									BgL_arg1133z00_723 =
										string_append_3(BGl_string1213z00zzobject_javazd2accesszd2,
										BgL_arg1140z00_725,
										BGl_string1214z00zzobject_javazd2accesszd2);
								}
								{	/* Object/java_access.scm 87 */
									obj_t BgL_list1134z00_724;

									BgL_list1134z00_724 =
										MAKE_YOUNG_PAIR(BGl_typez00zztype_typez00, BNIL);
									BGl_userzd2errorzd2zztools_errorz00(BgL_arg1129z00_722,
										BgL_arg1133z00_723, BgL_srcz00_10, BgL_list1134z00_724);
								}
							}
							return ((bool_t) 0);
						}
					else
						{	/* Object/java_access.scm 86 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_javazd2accesszd2()
	{
		{	/* Object/java_access.scm 21 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_javazd2accesszd2()
	{
		{	/* Object/java_access.scm 21 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_javazd2accesszd2()
	{
		{	/* Object/java_access.scm 21 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_javazd2accesszd2()
	{
		{	/* Object/java_access.scm 21 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 196511052),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_getterz00(((long) 23938128),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_creatorz00(((long) 508385180),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_predicatez00(((long) 458694990),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_coercionz00(((long) 208160767),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 478324196),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1215z00zzobject_javazd2accesszd2));
		}

	}

#ifdef __cplusplus
}
#endif
