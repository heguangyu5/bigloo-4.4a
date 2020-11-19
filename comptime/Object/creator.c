/*===========================================================================*/
/*   (Object/creator.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/creator.scm) */
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_epairifyza2za2zztools_miscz00(obj_t, obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2javazd2classzd2creatorzd2zzobject_creatorz00(BgL_typez00_bglt,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzobject_creatorz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t
		BGl_genzd2javazd2classzd2creatorzd2zzobject_creatorz00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_creatorz00();
	static obj_t BGl_genzd2onezd2constructorze70ze7zzobject_creatorz00(obj_t,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzobject_creatorz00();
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t
		BGl_z62importzd2javazd2classzd2creatorzb0zzobject_creatorz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_creatorz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzobject_creatorz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t
		BGl_z62genzd2javazd2classzd2constructorszb0zzobject_creatorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static bool_t BGl_inlinezd2creatorszf3z21zzobject_creatorz00();
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_creatorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_nilz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
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
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_creatorz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_creatorz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_creatorz00();
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2javazd2classzd2constructorszd2zzobject_creatorz00
		(BgL_typez00_bglt, obj_t, obj_t);
	static obj_t __cnst[10];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2javazd2classzd2creatorzd2envz00zzobject_creatorz00,
		BgL_bgl_za762importza7d2java1396z00,
		BGl_z62importzd2javazd2classzd2creatorzb0zzobject_creatorz00, 0L, BUNSPEC,
		3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2javazd2classzd2constructorszd2envz00zzobject_creatorz00,
		BgL_bgl_za762genza7d2javaza7d21397za7,
		BGl_z62genzd2javazd2classzd2constructorszb0zzobject_creatorz00, 0L, BUNSPEC,
		3);
	      DEFINE_STRING(BGl_string1380z00zzobject_creatorz00,
		BgL_bgl_string1380za700za7za7o1398za7, "object_creator", 14);
	      DEFINE_STRING(BGl_string1381z00zzobject_creatorz00,
		BgL_bgl_string1381za700za7za7o1399za7,
		"export define quote - static inline define-inline new %allocate- (make-heap make-add-heap) ",
		91);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzobject_creatorz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_creatorz00(long
		BgL_checksumz00_1140, char *BgL_fromz00_1141)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_creatorz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_creatorz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_creatorz00();
					BGl_libraryzd2moduleszd2initz00zzobject_creatorz00();
					BGl_cnstzd2initzd2zzobject_creatorz00();
					BGl_importedzd2moduleszd2initz00zzobject_creatorz00();
					return BGl_methodzd2initzd2zzobject_creatorz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_creatorz00()
	{
		{	/* Object/creator.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_creator");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_creator");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"object_creator");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_creator");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_creator");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_creator");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"object_creator");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_creatorz00()
	{
		{	/* Object/creator.scm 21 */
			{	/* Object/creator.scm 21 */
				obj_t BgL_cportz00_1127;

				{	/* Object/creator.scm 21 */
					obj_t BgL_stringz00_1135;

					BgL_stringz00_1135 = BGl_string1381z00zzobject_creatorz00;
					{	/* Object/creator.scm 21 */
						obj_t BgL_startz00_1136;

						BgL_startz00_1136 = BINT(((long) 0));
						{	/* Object/creator.scm 21 */
							obj_t BgL_endz00_1137;

							BgL_endz00_1137 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1135)));
							{	/* Object/creator.scm 21 */

								BgL_cportz00_1127 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1135, BgL_startz00_1136, BgL_endz00_1137);
				}}}}
				{
					long BgL_iz00_1128;

					BgL_iz00_1128 = ((long) 9);
				BgL_loopz00_1129:
					if ((BgL_iz00_1128 == ((long) -1)))
						{	/* Object/creator.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Object/creator.scm 21 */
							{	/* Object/creator.scm 21 */
								obj_t BgL_arg1394z00_1131;

								{	/* Object/creator.scm 21 */

									{	/* Object/creator.scm 21 */
										obj_t BgL_locationz00_1133;

										BgL_locationz00_1133 = BBOOL(((bool_t) 0));
										{	/* Object/creator.scm 21 */

											BgL_arg1394z00_1131 =
												BGl_readz00zz__readerz00(BgL_cportz00_1127,
												BgL_locationz00_1133);
										}
									}
								}
								{	/* Object/creator.scm 21 */
									int BgL_tmpz00_1166;

									BgL_tmpz00_1166 = (int) (BgL_iz00_1128);
									CNST_TABLE_SET(BgL_tmpz00_1166, BgL_arg1394z00_1131);
							}}
							{	/* Object/creator.scm 21 */
								int BgL_auxz00_1134;

								BgL_auxz00_1134 = (int) ((BgL_iz00_1128 - ((long) 1)));
								{
									long BgL_iz00_1171;

									BgL_iz00_1171 = (long) (BgL_auxz00_1134);
									BgL_iz00_1128 = BgL_iz00_1171;
									goto BgL_loopz00_1129;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_creatorz00()
	{
		{	/* Object/creator.scm 21 */
			return bgl_gc_roots_register();
		}

	}



/* inline-creators? */
	bool_t BGl_inlinezd2creatorszf3z21zzobject_creatorz00()
	{
		{	/* Object/creator.scm 51 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
				{	/* Object/creator.scm 53 */
					bool_t BgL_test1403z00_1177;

					{	/* Object/creator.scm 53 */
						bool_t BgL__ortest_1078z00_792;

						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
							(BGl_za2profilezd2modeza2zd2zzengine_paramz00))
							{	/* Object/creator.scm 53 */
								BgL__ortest_1078z00_792 = ((bool_t) 0);
							}
						else
							{	/* Object/creator.scm 53 */
								BgL__ortest_1078z00_792 = ((bool_t) 1);
							}
						if (BgL__ortest_1078z00_792)
							{	/* Object/creator.scm 53 */
								BgL_test1403z00_1177 = BgL__ortest_1078z00_792;
							}
						else
							{	/* Object/creator.scm 53 */
								BgL_test1403z00_1177 =
									(
									(long) CINT(BGl_za2profilezd2modeza2zd2zzengine_paramz00) <
									((long) 1));
					}}
					if (BgL_test1403z00_1177)
						{	/* Object/creator.scm 53 */
							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
									(BGl_za2passza2z00zzengine_paramz00,
										CNST_TABLE_REF(((long) 0)))))
								{	/* Object/creator.scm 55 */
									return ((bool_t) 0);
								}
							else
								{	/* Object/creator.scm 55 */
									return ((bool_t) 1);
								}
						}
					else
						{	/* Object/creator.scm 53 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Object/creator.scm 52 */
					return ((bool_t) 0);
				}
		}

	}



/* gen-java-class-creator */
	obj_t BGl_genzd2javazd2classzd2creatorzd2zzobject_creatorz00(BgL_typez00_bglt
		BgL_classz00_3, obj_t BgL_srczd2defzd2_4)
	{
		{	/* Object/creator.scm 60 */
			{	/* Object/creator.scm 61 */
				obj_t BgL_idz00_794;

				BgL_idz00_794 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_classz00_3)))->BgL_idz00);
				{	/* Object/creator.scm 61 */
					obj_t BgL_alloczd2idzd2_795;

					{	/* Object/creator.scm 62 */
						obj_t BgL_arg1245z00_812;

						{	/* Object/creator.scm 62 */
							obj_t BgL_arg1246z00_813;
							obj_t BgL_arg1247z00_814;

							{	/* Object/creator.scm 62 */
								obj_t BgL_res1355z00_1056;

								{	/* Object/creator.scm 62 */
									obj_t BgL_symbolz00_1054;

									BgL_symbolz00_1054 = CNST_TABLE_REF(((long) 1));
									{	/* Object/creator.scm 62 */
										obj_t BgL_arg1466z00_1055;

										BgL_arg1466z00_1055 = SYMBOL_TO_STRING(BgL_symbolz00_1054);
										BgL_res1355z00_1056 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1055);
								}}
								BgL_arg1246z00_813 = BgL_res1355z00_1056;
							}
							{	/* Object/creator.scm 62 */
								obj_t BgL_res1356z00_1059;

								{	/* Object/creator.scm 62 */
									obj_t BgL_arg1466z00_1058;

									BgL_arg1466z00_1058 = SYMBOL_TO_STRING(BgL_idz00_794);
									BgL_res1356z00_1059 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_1058);
								}
								BgL_arg1247z00_814 = BgL_res1356z00_1059;
							}
							BgL_arg1245z00_812 =
								string_append(BgL_arg1246z00_813, BgL_arg1247z00_814);
						}
						BgL_alloczd2idzd2_795 = bstring_to_symbol(BgL_arg1245z00_812);
					}
					{	/* Object/creator.scm 62 */

						{

							{	/* Object/creator.scm 66 */
								obj_t BgL_arg1216z00_797;

								{	/* Object/creator.scm 66 */
									obj_t BgL_arg1221z00_798;

									{	/* Object/creator.scm 66 */
										obj_t BgL_arg1223z00_799;

										{	/* Object/creator.scm 66 */
											obj_t BgL_arg1225z00_800;

											BgL_arg1225z00_800 =
												MAKE_YOUNG_PAIR(BgL_alloczd2idzd2_795, BNIL);
											BgL_arg1223z00_799 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
												BgL_arg1225z00_800);
										}
										BgL_arg1221z00_798 =
											MAKE_YOUNG_PAIR(BgL_arg1223z00_799, BNIL);
									}
									BgL_arg1216z00_797 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
										BgL_arg1221z00_798);
								}
								BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
									(BgL_arg1216z00_797);
							}
							{	/* Object/creator.scm 67 */
								obj_t BgL_arg1227z00_801;

								{	/* Object/creator.scm 67 */
									obj_t BgL_arg1229z00_803;

									{	/* Object/creator.scm 64 */
										obj_t BgL_arg1232z00_806;

										{	/* Object/creator.scm 64 */
											obj_t BgL_arg1239z00_807;
											obj_t BgL_arg1242z00_808;

											BgL_arg1239z00_807 =
												MAKE_YOUNG_PAIR(BgL_alloczd2idzd2_795, BNIL);
											BgL_arg1242z00_808 =
												MAKE_YOUNG_PAIR
												(BGl_makezd2privatezd2sexpz00zzast_privatez00
												(CNST_TABLE_REF(((long) 2)), BgL_idz00_794, BNIL),
												BNIL);
											BgL_arg1232z00_806 =
												MAKE_YOUNG_PAIR(BgL_arg1239z00_807, BgL_arg1242z00_808);
										}
										BgL_arg1229z00_803 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
											BgL_arg1232z00_806);
									}
									{	/* Object/creator.scm 67 */
										obj_t BgL_list1230z00_804;

										BgL_list1230z00_804 =
											MAKE_YOUNG_PAIR(BgL_srczd2defzd2_4, BNIL);
										BgL_arg1227z00_801 =
											BGl_epairifyza2za2zztools_miscz00(BgL_arg1229z00_803,
											BgL_list1230z00_804);
								}}
								{	/* Object/creator.scm 67 */
									obj_t BgL_list1228z00_802;

									BgL_list1228z00_802 =
										MAKE_YOUNG_PAIR(BgL_arg1227z00_801, BNIL);
									return BgL_list1228z00_802;
								}
							}
						}
					}
				}
			}
		}

	}



/* import-java-class-creator */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2javazd2classzd2creatorzd2zzobject_creatorz00(BgL_typez00_bglt
		BgL_classz00_5, obj_t BgL_constrsz00_6, obj_t BgL_srczd2defzd2_7)
	{
		{	/* Object/creator.scm 72 */
			if (NULLP(BgL_constrsz00_6))
				{	/* Object/creator.scm 73 */
					return BNIL;
				}
			else
				{	/* Object/creator.scm 73 */
					return
						BGl_genzd2javazd2classzd2creatorzd2zzobject_creatorz00
						(BgL_classz00_5, BgL_srczd2defzd2_7);
				}
		}

	}



/* &import-java-class-creator */
	obj_t BGl_z62importzd2javazd2classzd2creatorzb0zzobject_creatorz00(obj_t
		BgL_envz00_1117, obj_t BgL_classz00_1118, obj_t BgL_constrsz00_1119,
		obj_t BgL_srczd2defzd2_1120)
	{
		{	/* Object/creator.scm 72 */
			return
				BGl_importzd2javazd2classzd2creatorzd2zzobject_creatorz00(
				((BgL_typez00_bglt) BgL_classz00_1118), BgL_constrsz00_1119,
				BgL_srczd2defzd2_1120);
		}

	}



/* gen-java-class-constructors */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2javazd2classzd2constructorszd2zzobject_creatorz00(BgL_typez00_bglt
		BgL_classz00_8, obj_t BgL_constrsz00_9, obj_t BgL_srczd2defzd2_10)
	{
		{	/* Object/creator.scm 80 */
			if (NULLP(BgL_constrsz00_9))
				{	/* Object/creator.scm 110 */
					return BNIL;
				}
			else
				{	/* Object/creator.scm 110 */
					obj_t BgL_head1200z00_819;

					{	/* Object/creator.scm 110 */
						obj_t BgL_arg1256z00_831;

						BgL_arg1256z00_831 =
							BGl_genzd2onezd2constructorze70ze7zzobject_creatorz00
							(BgL_constrsz00_9, BgL_classz00_8, CAR(BgL_constrsz00_9));
						{	/* Object/creator.scm 110 */
							obj_t BgL_res1377z00_1110;

							BgL_res1377z00_1110 = MAKE_YOUNG_PAIR(BgL_arg1256z00_831, BNIL);
							BgL_head1200z00_819 = BgL_res1377z00_1110;
						}
					}
					{	/* Object/creator.scm 110 */
						obj_t BgL_g1203z00_820;

						BgL_g1203z00_820 = CDR(BgL_constrsz00_9);
						{
							obj_t BgL_l1198z00_822;
							obj_t BgL_tail1201z00_823;

							BgL_l1198z00_822 = BgL_g1203z00_820;
							BgL_tail1201z00_823 = BgL_head1200z00_819;
						BgL_zc3z04anonymousza31250ze3z87_824:
							if (NULLP(BgL_l1198z00_822))
								{	/* Object/creator.scm 110 */
									return BgL_head1200z00_819;
								}
							else
								{	/* Object/creator.scm 110 */
									obj_t BgL_newtail1202z00_826;

									{	/* Object/creator.scm 110 */
										obj_t BgL_arg1253z00_828;

										{	/* Object/creator.scm 110 */
											obj_t BgL_arg1254z00_829;

											BgL_arg1254z00_829 = CAR(((obj_t) BgL_l1198z00_822));
											BgL_arg1253z00_828 =
												BGl_genzd2onezd2constructorze70ze7zzobject_creatorz00
												(BgL_constrsz00_9, BgL_classz00_8, BgL_arg1254z00_829);
										}
										{	/* Object/creator.scm 110 */
											obj_t BgL_res1379z00_1114;

											BgL_res1379z00_1114 =
												MAKE_YOUNG_PAIR(BgL_arg1253z00_828, BNIL);
											BgL_newtail1202z00_826 = BgL_res1379z00_1114;
										}
									}
									SET_CDR(BgL_tail1201z00_823, BgL_newtail1202z00_826);
									{	/* Object/creator.scm 110 */
										obj_t BgL_arg1252z00_827;

										BgL_arg1252z00_827 = CDR(((obj_t) BgL_l1198z00_822));
										{
											obj_t BgL_tail1201z00_1234;
											obj_t BgL_l1198z00_1233;

											BgL_l1198z00_1233 = BgL_arg1252z00_827;
											BgL_tail1201z00_1234 = BgL_newtail1202z00_826;
											BgL_tail1201z00_823 = BgL_tail1201z00_1234;
											BgL_l1198z00_822 = BgL_l1198z00_1233;
											goto BgL_zc3z04anonymousza31250ze3z87_824;
										}
									}
								}
						}
					}
				}
		}

	}



/* gen-one-constructor~0 */
	obj_t BGl_genzd2onezd2constructorze70ze7zzobject_creatorz00(obj_t
		BgL_constrsz00_1126, BgL_typez00_bglt BgL_classz00_1125,
		obj_t BgL_constrz00_833)
	{
		{	/* Object/creator.scm 109 */
			{
				obj_t BgL_identz00_835;
				obj_t BgL_argszd2typezd2_836;

				if (PAIRP(BgL_constrz00_833))
					{	/* Object/creator.scm 109 */
						BgL_identz00_835 = CAR(BgL_constrz00_833);
						BgL_argszd2typezd2_836 = CDR(BgL_constrz00_833);
						{	/* Object/creator.scm 87 */
							obj_t BgL_jidz00_842;

							BgL_jidz00_842 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_classz00_1125)))->BgL_idz00);
							{	/* Object/creator.scm 87 */
								obj_t BgL_locz00_843;

								BgL_locz00_843 =
									BGl_findzd2locationzd2zztools_locationz00
									(BgL_constrsz00_1126);
								{	/* Object/creator.scm 88 */
									obj_t BgL_cidz00_844;

									BgL_cidz00_844 =
										BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_identz00_835,
										BgL_locz00_843);
									{	/* Object/creator.scm 89 */
										obj_t BgL_tidz00_845;

										{	/* Object/creator.scm 90 */
											obj_t BgL_arg1317z00_923;

											{	/* Object/creator.scm 90 */
												obj_t BgL_list1318z00_924;

												{	/* Object/creator.scm 90 */
													obj_t BgL_arg1319z00_925;

													{	/* Object/creator.scm 90 */
														obj_t BgL_arg1322z00_926;

														BgL_arg1322z00_926 =
															MAKE_YOUNG_PAIR(BgL_cidz00_844, BNIL);
														BgL_arg1319z00_925 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
															BgL_arg1322z00_926);
													}
													BgL_list1318z00_924 =
														MAKE_YOUNG_PAIR(BgL_jidz00_842, BgL_arg1319z00_925);
												}
												BgL_arg1317z00_923 =
													BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
													(BgL_list1318z00_924);
											}
											BgL_tidz00_845 =
												BGl_makezd2typedzd2identz00zzast_identz00
												(BgL_arg1317z00_923, BgL_jidz00_842);
										}
										{	/* Object/creator.scm 90 */
											obj_t BgL_argszd2idzd2_846;

											if (NULLP(BgL_argszd2typezd2_836))
												{	/* Object/creator.scm 91 */
													BgL_argszd2idzd2_846 = BNIL;
												}
											else
												{	/* Object/creator.scm 91 */
													obj_t BgL_head1184z00_910;

													{	/* Object/creator.scm 91 */
														obj_t BgL_res1361z00_1067;

														BgL_res1361z00_1067 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														BgL_head1184z00_910 = BgL_res1361z00_1067;
													}
													{
														obj_t BgL_l1182z00_912;
														obj_t BgL_tail1185z00_913;

														BgL_l1182z00_912 = BgL_argszd2typezd2_836;
														BgL_tail1185z00_913 = BgL_head1184z00_910;
													BgL_zc3z04anonymousza31312ze3z87_914:
														if (NULLP(BgL_l1182z00_912))
															{	/* Object/creator.scm 91 */
																BgL_argszd2idzd2_846 = CDR(BgL_head1184z00_910);
															}
														else
															{	/* Object/creator.scm 91 */
																obj_t BgL_newtail1186z00_916;

																{	/* Object/creator.scm 91 */
																	obj_t BgL_arg1315z00_918;

																	{	/* Object/creator.scm 91 */
																		obj_t BgL_arg1316z00_920;

																		{	/* Object/creator.scm 91 */

																			{	/* Object/creator.scm 91 */

																				BgL_arg1316z00_920 =
																					BGl_gensymz00zz__r4_symbols_6_4z00
																					(BFALSE);
																			}
																		}
																		BgL_arg1315z00_918 =
																			BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																			(BgL_arg1316z00_920);
																	}
																	{	/* Object/creator.scm 91 */
																		obj_t BgL_res1363z00_1071;

																		BgL_res1363z00_1071 =
																			MAKE_YOUNG_PAIR(BgL_arg1315z00_918, BNIL);
																		BgL_newtail1186z00_916 =
																			BgL_res1363z00_1071;
																	}
																}
																SET_CDR(BgL_tail1185z00_913,
																	BgL_newtail1186z00_916);
																{	/* Object/creator.scm 91 */
																	obj_t BgL_arg1314z00_917;

																	BgL_arg1314z00_917 =
																		CDR(((obj_t) BgL_l1182z00_912));
																	{
																		obj_t BgL_tail1185z00_1260;
																		obj_t BgL_l1182z00_1259;

																		BgL_l1182z00_1259 = BgL_arg1314z00_917;
																		BgL_tail1185z00_1260 =
																			BgL_newtail1186z00_916;
																		BgL_tail1185z00_913 = BgL_tail1185z00_1260;
																		BgL_l1182z00_912 = BgL_l1182z00_1259;
																		goto BgL_zc3z04anonymousza31312ze3z87_914;
																	}
																}
															}
													}
												}
											{	/* Object/creator.scm 91 */
												obj_t BgL_selfz00_847;

												{	/* Object/creator.scm 93 */
													obj_t BgL_arg1310z00_906;

													{	/* Object/creator.scm 93 */

														{	/* Object/creator.scm 93 */

															BgL_arg1310z00_906 =
																BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
														}
													}
													BgL_selfz00_847 =
														BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
														(BgL_arg1310z00_906);
												}
												{	/* Object/creator.scm 93 */
													obj_t BgL_tselfz00_848;

													BgL_tselfz00_848 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_selfz00_847, BgL_jidz00_842);
													{	/* Object/creator.scm 94 */
														obj_t BgL_targsz00_849;

														if (NULLP(BgL_argszd2idzd2_846))
															{	/* Object/creator.scm 95 */
																BgL_targsz00_849 = BNIL;
															}
														else
															{	/* Object/creator.scm 95 */
																obj_t BgL_head1189z00_889;

																{	/* Object/creator.scm 95 */
																	obj_t BgL_res1365z00_1075;

																	BgL_res1365z00_1075 =
																		MAKE_YOUNG_PAIR(BNIL, BNIL);
																	BgL_head1189z00_889 = BgL_res1365z00_1075;
																}
																{
																	obj_t BgL_ll1187z00_891;
																	obj_t BgL_ll1188z00_892;
																	obj_t BgL_tail1190z00_893;

																	BgL_ll1187z00_891 = BgL_argszd2idzd2_846;
																	BgL_ll1188z00_892 = BgL_argszd2typezd2_836;
																	BgL_tail1190z00_893 = BgL_head1189z00_889;
																BgL_zc3z04anonymousza31300ze3z87_894:
																	if (NULLP(BgL_ll1187z00_891))
																		{	/* Object/creator.scm 95 */
																			BgL_targsz00_849 =
																				CDR(BgL_head1189z00_889);
																		}
																	else
																		{	/* Object/creator.scm 95 */
																			obj_t BgL_newtail1191z00_896;

																			{	/* Object/creator.scm 95 */
																				obj_t BgL_arg1306z00_899;

																				{	/* Object/creator.scm 95 */
																					obj_t BgL_idz00_900;
																					obj_t BgL_typez00_901;

																					BgL_idz00_900 =
																						CAR(((obj_t) BgL_ll1187z00_891));
																					BgL_typez00_901 =
																						CAR(((obj_t) BgL_ll1188z00_892));
																					{	/* Object/creator.scm 96 */
																						obj_t BgL_arg1307z00_902;

																						{	/* Object/creator.scm 96 */
																							obj_t BgL_arg1308z00_903;
																							obj_t BgL_arg1309z00_904;

																							{	/* Object/creator.scm 96 */
																								obj_t BgL_res1367z00_1082;

																								{	/* Object/creator.scm 96 */
																									obj_t BgL_arg1466z00_1081;

																									BgL_arg1466z00_1081 =
																										SYMBOL_TO_STRING(
																										((obj_t) BgL_idz00_900));
																									BgL_res1367z00_1082 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg1466z00_1081);
																								}
																								BgL_arg1308z00_903 =
																									BgL_res1367z00_1082;
																							}
																							{	/* Object/creator.scm 96 */
																								obj_t BgL_res1368z00_1085;

																								{	/* Object/creator.scm 96 */
																									obj_t BgL_arg1466z00_1084;

																									BgL_arg1466z00_1084 =
																										SYMBOL_TO_STRING(
																										((obj_t) BgL_typez00_901));
																									BgL_res1368z00_1085 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg1466z00_1084);
																								}
																								BgL_arg1309z00_904 =
																									BgL_res1368z00_1085;
																							}
																							BgL_arg1307z00_902 =
																								string_append
																								(BgL_arg1308z00_903,
																								BgL_arg1309z00_904);
																						}
																						BgL_arg1306z00_899 =
																							bstring_to_symbol
																							(BgL_arg1307z00_902);
																					}
																				}
																				{	/* Object/creator.scm 95 */
																					obj_t BgL_res1370z00_1088;

																					BgL_res1370z00_1088 =
																						MAKE_YOUNG_PAIR(BgL_arg1306z00_899,
																						BNIL);
																					BgL_newtail1191z00_896 =
																						BgL_res1370z00_1088;
																				}
																			}
																			SET_CDR(BgL_tail1190z00_893,
																				BgL_newtail1191z00_896);
																			{	/* Object/creator.scm 95 */
																				obj_t BgL_arg1303z00_897;
																				obj_t BgL_arg1304z00_898;

																				BgL_arg1303z00_897 =
																					CDR(((obj_t) BgL_ll1187z00_891));
																				BgL_arg1304z00_898 =
																					CDR(((obj_t) BgL_ll1188z00_892));
																				{
																					obj_t BgL_tail1190z00_1290;
																					obj_t BgL_ll1188z00_1289;
																					obj_t BgL_ll1187z00_1288;

																					BgL_ll1187z00_1288 =
																						BgL_arg1303z00_897;
																					BgL_ll1188z00_1289 =
																						BgL_arg1304z00_898;
																					BgL_tail1190z00_1290 =
																						BgL_newtail1191z00_896;
																					BgL_tail1190z00_893 =
																						BgL_tail1190z00_1290;
																					BgL_ll1188z00_892 =
																						BgL_ll1188z00_1289;
																					BgL_ll1187z00_891 =
																						BgL_ll1187z00_1288;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_894;
																				}
																			}
																		}
																}
															}
														{	/* Object/creator.scm 95 */
															obj_t BgL_defz00_850;

															{	/* Object/creator.scm 98 */
																obj_t BgL_arg1275z00_858;

																{	/* Object/creator.scm 98 */
																	obj_t BgL_arg1276z00_859;
																	obj_t BgL_arg1277z00_860;

																	BgL_arg1276z00_859 =
																		MAKE_YOUNG_PAIR(BgL_tidz00_845,
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_targsz00_849, BNIL));
																	{	/* Object/creator.scm 100 */
																		obj_t BgL_arg1281z00_862;

																		{	/* Object/creator.scm 100 */
																			obj_t BgL_runner1298z00_885;

																			{	/* Object/creator.scm 101 */
																				obj_t BgL_arg1282z00_863;

																				{	/* Object/creator.scm 101 */
																					obj_t BgL_arg1286z00_867;

																					{	/* Object/creator.scm 101 */
																						obj_t BgL_arg1287z00_868;

																						if (NULLP(BgL_argszd2typezd2_836))
																							{	/* Object/creator.scm 101 */
																								BgL_arg1287z00_868 = BNIL;
																							}
																						else
																							{	/* Object/creator.scm 101 */
																								obj_t BgL_head1195z00_871;

																								{	/* Object/creator.scm 101 */
																									obj_t BgL_res1372z00_1093;

																									BgL_res1372z00_1093 =
																										MAKE_YOUNG_PAIR(BNIL, BNIL);
																									BgL_head1195z00_871 =
																										BgL_res1372z00_1093;
																								}
																								{
																									obj_t BgL_l1193z00_873;
																									obj_t BgL_tail1196z00_874;

																									BgL_l1193z00_873 =
																										BgL_argszd2typezd2_836;
																									BgL_tail1196z00_874 =
																										BgL_head1195z00_871;
																								BgL_zc3z04anonymousza31289ze3z87_875:
																									if (NULLP
																										(BgL_l1193z00_873))
																										{	/* Object/creator.scm 101 */
																											BgL_arg1287z00_868 =
																												CDR
																												(BgL_head1195z00_871);
																										}
																									else
																										{	/* Object/creator.scm 101 */
																											obj_t
																												BgL_newtail1197z00_877;
																											{	/* Object/creator.scm 101 */
																												obj_t
																													BgL_arg1292z00_879;
																												{	/* Object/creator.scm 101 */
																													obj_t BgL_az00_880;

																													BgL_az00_880 =
																														CAR(
																														((obj_t)
																															BgL_l1193z00_873));
																													BgL_arg1292z00_879 =
																														(((BgL_typez00_bglt)
																															COBJECT
																															(BGl_typezd2ofzd2idz00zzast_identz00
																																(BgL_az00_880,
																																	BgL_locz00_843)))->
																														BgL_idz00);
																												}
																												{	/* Object/creator.scm 101 */
																													obj_t
																														BgL_res1374z00_1098;
																													BgL_res1374z00_1098 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1292z00_879,
																														BNIL);
																													BgL_newtail1197z00_877
																														=
																														BgL_res1374z00_1098;
																												}
																											}
																											SET_CDR
																												(BgL_tail1196z00_874,
																												BgL_newtail1197z00_877);
																											{	/* Object/creator.scm 101 */
																												obj_t
																													BgL_arg1291z00_878;
																												BgL_arg1291z00_878 =
																													CDR(((obj_t)
																														BgL_l1193z00_873));
																												{
																													obj_t
																														BgL_tail1196z00_1308;
																													obj_t
																														BgL_l1193z00_1307;
																													BgL_l1193z00_1307 =
																														BgL_arg1291z00_878;
																													BgL_tail1196z00_1308 =
																														BgL_newtail1197z00_877;
																													BgL_tail1196z00_874 =
																														BgL_tail1196z00_1308;
																													BgL_l1193z00_873 =
																														BgL_l1193z00_1307;
																													goto
																														BgL_zc3z04anonymousza31289ze3z87_875;
																												}
																											}
																										}
																								}
																							}
																						BgL_arg1286z00_867 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1287z00_868, BNIL);
																					}
																					BgL_arg1282z00_863 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 7)), BgL_arg1286z00_867);
																				}
																				{	/* Object/creator.scm 100 */
																					obj_t BgL_list1283z00_864;

																					{	/* Object/creator.scm 100 */
																						obj_t BgL_arg1284z00_865;

																						{	/* Object/creator.scm 100 */
																							obj_t BgL_arg1285z00_866;

																							BgL_arg1285z00_866 =
																								MAKE_YOUNG_PAIR
																								(BgL_argszd2idzd2_846, BNIL);
																							BgL_arg1284z00_865 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1282z00_863,
																								BgL_arg1285z00_866);
																						}
																						BgL_list1283z00_864 =
																							MAKE_YOUNG_PAIR(BgL_jidz00_842,
																							BgL_arg1284z00_865);
																					}
																					BgL_runner1298z00_885 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(CNST_TABLE_REF(((long) 2)),
																						BgL_list1283z00_864);
																			}}
																			{	/* Object/creator.scm 100 */
																				obj_t BgL_aux1296z00_883;

																				BgL_aux1296z00_883 =
																					CAR(BgL_runner1298z00_885);
																				BgL_runner1298z00_885 =
																					CDR(BgL_runner1298z00_885);
																				{	/* Object/creator.scm 100 */
																					obj_t BgL_aux1297z00_884;

																					BgL_aux1297z00_884 =
																						CAR(BgL_runner1298z00_885);
																					BgL_runner1298z00_885 =
																						CDR(BgL_runner1298z00_885);
																					BgL_arg1281z00_862 =
																						BGl_makezd2privatezd2sexpz00zzast_privatez00
																						(BgL_aux1296z00_883,
																						BgL_aux1297z00_884,
																						BgL_runner1298z00_885);
																		}}}
																		BgL_arg1277z00_860 =
																			MAKE_YOUNG_PAIR(BgL_arg1281z00_862, BNIL);
																	}
																	BgL_arg1275z00_858 =
																		MAKE_YOUNG_PAIR(BgL_arg1276z00_859,
																		BgL_arg1277z00_860);
																}
																BgL_defz00_850 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
																	BgL_arg1275z00_858);
															}
															{	/* Object/creator.scm 98 */
																obj_t BgL_scopez00_851;

																if (BGl_inlinezd2creatorszf3z21zzobject_creatorz00())
																	{	/* Object/creator.scm 106 */
																		BgL_scopez00_851 =
																			CNST_TABLE_REF(((long) 5));
																	}
																else
																	{	/* Object/creator.scm 106 */
																		BgL_scopez00_851 =
																			CNST_TABLE_REF(((long) 9));
																	}
																{	/* Object/creator.scm 106 */
																	obj_t BgL_modz00_852;

																	{	/* Object/creator.scm 107 */
																		obj_t BgL_arg1270z00_854;

																		{	/* Object/creator.scm 107 */
																			obj_t BgL_arg1271z00_855;

																			BgL_arg1271z00_855 =
																				MAKE_YOUNG_PAIR(BgL_tidz00_845,
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_argszd2typezd2_836, BNIL));
																			BgL_arg1270z00_854 =
																				MAKE_YOUNG_PAIR(BgL_arg1271z00_855,
																				BNIL);
																		}
																		BgL_modz00_852 =
																			MAKE_YOUNG_PAIR(BgL_scopez00_851,
																			BgL_arg1270z00_854);
																	}
																	{	/* Object/creator.scm 107 */

																		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																			(BgL_modz00_852);
																		{	/* Object/creator.scm 109 */
																			obj_t BgL_list1269z00_853;

																			BgL_list1269z00_853 =
																				MAKE_YOUNG_PAIR(BgL_constrz00_833,
																				BNIL);
																			return
																				BGl_epairifyza2za2zztools_miscz00
																				(BgL_defz00_850, BgL_list1269z00_853);
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
					}
				else
					{	/* Object/creator.scm 109 */
						return BFALSE;
					}
			}
		}

	}



/* &gen-java-class-constructors */
	obj_t BGl_z62genzd2javazd2classzd2constructorszb0zzobject_creatorz00(obj_t
		BgL_envz00_1121, obj_t BgL_classz00_1122, obj_t BgL_constrsz00_1123,
		obj_t BgL_srczd2defzd2_1124)
	{
		{	/* Object/creator.scm 80 */
			return
				BGl_genzd2javazd2classzd2constructorszd2zzobject_creatorz00(
				((BgL_typez00_bglt) BgL_classz00_1122), BgL_constrsz00_1123,
				BgL_srczd2defzd2_1124);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_creatorz00()
	{
		{	/* Object/creator.scm 21 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_creatorz00()
	{
		{	/* Object/creator.scm 21 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_creatorz00()
	{
		{	/* Object/creator.scm 21 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_creatorz00()
	{
		{	/* Object/creator.scm 21 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 196511052),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzobject_nilz00(((long) 168472988),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 478324196),
				BSTRING_TO_STRING(BGl_string1380z00zzobject_creatorz00));
		}

	}

#ifdef __cplusplus
}
#endif
