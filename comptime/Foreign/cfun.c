/*===========================================================================*/
/*   (Foreign/cfun.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/cfun.scm) */
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

	typedef struct BgL_cfunctionz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		long BgL_arityz00;
		struct BgL_typez00_bgl *BgL_typezd2reszd2;
		obj_t BgL_typezd2argszd2;
	}                   *BgL_cfunctionz00_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzforeign_cfunctionz00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zzforeign_cfunctionz00();
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	static obj_t
		BGl_z62makezd2ctypezd2accessesz121113z70zzforeign_cfunctionz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	extern obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzforeign_cfunctionz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_cfunctionz00 =
		BUNSPEC;
	extern obj_t BGl_cfunctionz00zzforeign_ctypez00;
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzforeign_cfunctionz00();
	static obj_t BGl_genericzd2initzd2zzforeign_cfunctionz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cfunctionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_cnstzd2initzd2zzforeign_cfunctionz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cfunctionz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_cfunctionz00();
	extern obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[25];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1500z00zzforeign_cfunctionz00,
		BgL_bgl_za762makeza7d2ctypeza71520za7,
		BGl_z62makezd2ctypezd2accessesz121113z70zzforeign_cfunctionz00, 0L, BUNSPEC,
		3);
	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;
	   
		 
		DEFINE_STRING(BGl_string1501z00zzforeign_cfunctionz00,
		BgL_bgl_string1501za700za7za7f1521za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string1502z00zzforeign_cfunctionz00,
		BgL_bgl_string1502za700za7za7f1522za7,
		"Too large arity for a foreign function (max", 43);
	      DEFINE_STRING(BGl_string1503z00zzforeign_cfunctionz00,
		BgL_bgl_string1503za700za7za7f1523za7, ")", 1);
	      DEFINE_STRING(BGl_string1504z00zzforeign_cfunctionz00,
		BgL_bgl_string1504za700za7za7f1524za7, " args provided", 14);
	      DEFINE_STRING(BGl_string1505z00zzforeign_cfunctionz00,
		BgL_bgl_string1505za700za7za7f1525za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string1506z00zzforeign_cfunctionz00,
		BgL_bgl_string1506za700za7za7f1526za7,
		"Can't manage pointers on C multiple arity function", 50);
	      DEFINE_STRING(BGl_string1507z00zzforeign_cfunctionz00,
		BgL_bgl_string1507za700za7za7f1527za7, "C_FUNCTION_CALL_", 16);
	      DEFINE_STRING(BGl_string1508z00zzforeign_cfunctionz00,
		BgL_bgl_string1508za700za7za7f1528za7, "(", 1);
	      DEFINE_STRING(BGl_string1509z00zzforeign_cfunctionz00,
		BgL_bgl_string1509za700za7za7f1529za7, ")FOREIGN_TO_COBJ", 16);
	      DEFINE_STRING(BGl_string1510z00zzforeign_cfunctionz00,
		BgL_bgl_string1510za700za7za7f1530za7, "cobj_to_foreign", 15);
	      DEFINE_STRING(BGl_string1511z00zzforeign_cfunctionz00,
		BgL_bgl_string1511za700za7za7f1531za7, "foreign_cfunction", 17);
	      DEFINE_STRING(BGl_string1512z00zzforeign_cfunctionz00,
		BgL_bgl_string1512za700za7za7f1532za7,
		"pragma predicate-of static ::obj foreign symbol if eq? quote foreign-id foreign? o o::obj (pragma::bool \"($1 == $2)\" o1 o2) o2 o1 = ?::bool macro f c- ::bool ? -> -call ",
		169);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzforeign_cfunctionz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cfunctionz00(long
		BgL_checksumz00_1141, char *BgL_fromz00_1142)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_cfunctionz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_cfunctionz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzforeign_cfunctionz00();
					BGl_libraryzd2moduleszd2initz00zzforeign_cfunctionz00();
					BGl_cnstzd2initzd2zzforeign_cfunctionz00();
					BGl_importedzd2moduleszd2initz00zzforeign_cfunctionz00();
					BGl_methodzd2initzd2zzforeign_cfunctionz00();
					return BGl_toplevelzd2initzd2zzforeign_cfunctionz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cfunctionz00()
	{
		{	/* Foreign/cfun.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_cfunction");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_cfunction");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_cfunction");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_cfunction");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_cfunction");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"foreign_cfunction");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"foreign_cfunction");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_cfunctionz00()
	{
		{	/* Foreign/cfun.scm 15 */
			{	/* Foreign/cfun.scm 15 */
				obj_t BgL_cportz00_921;

				{	/* Foreign/cfun.scm 15 */
					obj_t BgL_stringz00_929;

					BgL_stringz00_929 = BGl_string1512z00zzforeign_cfunctionz00;
					{	/* Foreign/cfun.scm 15 */
						obj_t BgL_startz00_930;

						BgL_startz00_930 = BINT(((long) 0));
						{	/* Foreign/cfun.scm 15 */
							obj_t BgL_endz00_931;

							BgL_endz00_931 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_929)));
							{	/* Foreign/cfun.scm 15 */

								BgL_cportz00_921 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_929, BgL_startz00_930, BgL_endz00_931);
				}}}}
				{
					long BgL_iz00_922;

					BgL_iz00_922 = ((long) 24);
				BgL_loopz00_923:
					if ((BgL_iz00_922 == ((long) -1)))
						{	/* Foreign/cfun.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/cfun.scm 15 */
							{	/* Foreign/cfun.scm 15 */
								obj_t BgL_arg1518z00_925;

								{	/* Foreign/cfun.scm 15 */

									{	/* Foreign/cfun.scm 15 */
										obj_t BgL_locationz00_927;

										BgL_locationz00_927 = BBOOL(((bool_t) 0));
										{	/* Foreign/cfun.scm 15 */

											BgL_arg1518z00_925 =
												BGl_readz00zz__readerz00(BgL_cportz00_921,
												BgL_locationz00_927);
										}
									}
								}
								{	/* Foreign/cfun.scm 15 */
									int BgL_tmpz00_1168;

									BgL_tmpz00_1168 = (int) (BgL_iz00_922);
									CNST_TABLE_SET(BgL_tmpz00_1168, BgL_arg1518z00_925);
							}}
							{	/* Foreign/cfun.scm 15 */
								int BgL_auxz00_928;

								BgL_auxz00_928 = (int) ((BgL_iz00_922 - ((long) 1)));
								{
									long BgL_iz00_1173;

									BgL_iz00_1173 = (long) (BgL_auxz00_928);
									BgL_iz00_922 = BgL_iz00_1173;
									goto BgL_loopz00_923;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzforeign_cfunctionz00()
	{
		{	/* Foreign/cfun.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_cfunctionz00()
	{
		{	/* Foreign/cfun.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_cfunctionz00()
	{
		{	/* Foreign/cfun.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_cfunctionz00()
	{
		{	/* Foreign/cfun.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_cfunctionz00()
	{
		{	/* Foreign/cfun.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_cfunctionz00zzforeign_ctypez00,
				BGl_proc1500z00zzforeign_cfunctionz00,
				BGl_string1501z00zzforeign_cfunctionz00);
		}

	}



/* &make-ctype-accesses!1113 */
	obj_t BGl_z62makezd2ctypezd2accessesz121113z70zzforeign_cfunctionz00(obj_t
		BgL_envz00_913, obj_t BgL_whatz00_914, obj_t BgL_whoz00_915,
		obj_t BgL_locz00_916)
	{
		{	/* Foreign/cfun.scm 30 */
			{	/* Foreign/cfun.scm 31 */
				BgL_typez00_bglt BgL_btypez00_936;

				{
					BgL_cfunctionz00_bglt BgL_auxz00_1177;

					{
						obj_t BgL_auxz00_1178;

						{	/* Foreign/cfun.scm 31 */
							BgL_objectz00_bglt BgL_tmpz00_1179;

							BgL_tmpz00_1179 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_whatz00_914));
							BgL_auxz00_1178 = BGL_OBJECT_WIDENING(BgL_tmpz00_1179);
						}
						BgL_auxz00_1177 = ((BgL_cfunctionz00_bglt) BgL_auxz00_1178);
					}
					BgL_btypez00_936 =
						(((BgL_cfunctionz00_bglt) COBJECT(BgL_auxz00_1177))->BgL_btypez00);
				}
				{	/* Foreign/cfun.scm 31 */
					obj_t BgL_idz00_937;

					BgL_idz00_937 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_whoz00_915)))->BgL_idz00);
					{	/* Foreign/cfun.scm 33 */
						obj_t BgL_bidz00_938;

						BgL_bidz00_938 =
							(((BgL_typez00_bglt) COBJECT(BgL_btypez00_936))->BgL_idz00);
						{	/* Foreign/cfun.scm 34 */
							obj_t BgL_callzd2idzd2_939;

							{	/* Foreign/cfun.scm 35 */
								obj_t BgL_arg1382z00_940;

								{	/* Foreign/cfun.scm 35 */
									obj_t BgL_arg1383z00_941;
									obj_t BgL_arg1384z00_942;

									{	/* Foreign/cfun.scm 35 */
										obj_t BgL_res1463z00_943;

										{	/* Foreign/cfun.scm 35 */
											obj_t BgL_arg1466z00_944;

											BgL_arg1466z00_944 = SYMBOL_TO_STRING(BgL_idz00_937);
											BgL_res1463z00_943 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_944);
										}
										BgL_arg1383z00_941 = BgL_res1463z00_943;
									}
									{	/* Foreign/cfun.scm 35 */
										obj_t BgL_res1464z00_945;

										{	/* Foreign/cfun.scm 35 */
											obj_t BgL_symbolz00_946;

											BgL_symbolz00_946 = CNST_TABLE_REF(((long) 0));
											{	/* Foreign/cfun.scm 35 */
												obj_t BgL_arg1466z00_947;

												BgL_arg1466z00_947 =
													SYMBOL_TO_STRING(BgL_symbolz00_946);
												BgL_res1464z00_945 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_947);
										}}
										BgL_arg1384z00_942 = BgL_res1464z00_945;
									}
									BgL_arg1382z00_940 =
										string_append(BgL_arg1383z00_941, BgL_arg1384z00_942);
								}
								BgL_callzd2idzd2_939 = bstring_to_symbol(BgL_arg1382z00_940);
							}
							{	/* Foreign/cfun.scm 35 */
								obj_t BgL_idzd2ze3bidz31_948;

								{	/* Foreign/cfun.scm 36 */
									obj_t BgL_list1371z00_949;

									{	/* Foreign/cfun.scm 36 */
										obj_t BgL_arg1372z00_950;

										{	/* Foreign/cfun.scm 36 */
											obj_t BgL_arg1381z00_951;

											BgL_arg1381z00_951 =
												MAKE_YOUNG_PAIR(BgL_bidz00_938, BNIL);
											BgL_arg1372z00_950 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
												BgL_arg1381z00_951);
										}
										BgL_list1371z00_949 =
											MAKE_YOUNG_PAIR(BgL_idz00_937, BgL_arg1372z00_950);
									}
									BgL_idzd2ze3bidz31_948 =
										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
										(BgL_list1371z00_949);
								}
								{	/* Foreign/cfun.scm 36 */
									obj_t BgL_bidzd2ze3idz31_952;

									{	/* Foreign/cfun.scm 37 */
										obj_t BgL_list1364z00_953;

										{	/* Foreign/cfun.scm 37 */
											obj_t BgL_arg1367z00_954;

											{	/* Foreign/cfun.scm 37 */
												obj_t BgL_arg1370z00_955;

												BgL_arg1370z00_955 =
													MAKE_YOUNG_PAIR(BgL_idz00_937, BNIL);
												BgL_arg1367z00_954 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
													BgL_arg1370z00_955);
											}
											BgL_list1364z00_953 =
												MAKE_YOUNG_PAIR(BgL_bidz00_938, BgL_arg1367z00_954);
										}
										BgL_bidzd2ze3idz31_952 =
											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
											(BgL_list1364z00_953);
									}
									{	/* Foreign/cfun.scm 37 */
										obj_t BgL_bidzf3zf3_956;

										{	/* Foreign/cfun.scm 38 */
											obj_t BgL_arg1360z00_957;

											{	/* Foreign/cfun.scm 38 */
												obj_t BgL_arg1361z00_958;
												obj_t BgL_arg1363z00_959;

												{	/* Foreign/cfun.scm 38 */
													obj_t BgL_res1466z00_960;

													{	/* Foreign/cfun.scm 38 */
														obj_t BgL_arg1466z00_961;

														BgL_arg1466z00_961 =
															SYMBOL_TO_STRING(BgL_idz00_937);
														BgL_res1466z00_960 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_961);
													}
													BgL_arg1361z00_958 = BgL_res1466z00_960;
												}
												{	/* Foreign/cfun.scm 38 */
													obj_t BgL_res1467z00_962;

													{	/* Foreign/cfun.scm 38 */
														obj_t BgL_symbolz00_963;

														BgL_symbolz00_963 = CNST_TABLE_REF(((long) 2));
														{	/* Foreign/cfun.scm 38 */
															obj_t BgL_arg1466z00_964;

															BgL_arg1466z00_964 =
																SYMBOL_TO_STRING(BgL_symbolz00_963);
															BgL_res1467z00_962 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_964);
													}}
													BgL_arg1363z00_959 = BgL_res1467z00_962;
												}
												BgL_arg1360z00_957 =
													string_append(BgL_arg1361z00_958, BgL_arg1363z00_959);
											}
											BgL_bidzf3zf3_956 = bstring_to_symbol(BgL_arg1360z00_957);
										}
										{	/* Foreign/cfun.scm 38 */
											obj_t BgL_bidzf3zd2boolz21_965;

											{	/* Foreign/cfun.scm 39 */
												obj_t BgL_arg1351z00_966;

												{	/* Foreign/cfun.scm 39 */
													obj_t BgL_arg1352z00_967;
													obj_t BgL_arg1357z00_968;

													{	/* Foreign/cfun.scm 39 */
														obj_t BgL_res1469z00_969;

														{	/* Foreign/cfun.scm 39 */
															obj_t BgL_arg1466z00_970;

															BgL_arg1466z00_970 =
																SYMBOL_TO_STRING(BgL_bidzf3zf3_956);
															BgL_res1469z00_969 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_970);
														}
														BgL_arg1352z00_967 = BgL_res1469z00_969;
													}
													{	/* Foreign/cfun.scm 39 */
														obj_t BgL_res1470z00_971;

														{	/* Foreign/cfun.scm 39 */
															obj_t BgL_symbolz00_972;

															BgL_symbolz00_972 = CNST_TABLE_REF(((long) 3));
															{	/* Foreign/cfun.scm 39 */
																obj_t BgL_arg1466z00_973;

																BgL_arg1466z00_973 =
																	SYMBOL_TO_STRING(BgL_symbolz00_972);
																BgL_res1470z00_971 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_973);
														}}
														BgL_arg1357z00_968 = BgL_res1470z00_971;
													}
													BgL_arg1351z00_966 =
														string_append(BgL_arg1352z00_967,
														BgL_arg1357z00_968);
												}
												BgL_bidzf3zd2boolz21_965 =
													bstring_to_symbol(BgL_arg1351z00_966);
											}
											{	/* Foreign/cfun.scm 39 */
												obj_t BgL_namez00_974;

												BgL_namez00_974 =
													(((BgL_typez00_bglt) COBJECT(
															((BgL_typez00_bglt) BgL_whoz00_915)))->
													BgL_namez00);
												{	/* Foreign/cfun.scm 40 */
													obj_t BgL_namezd2sanszd2z42z42_975;

													BgL_namezd2sanszd2z42z42_975 =
														BGl_stringzd2sanszd2z42z42zztype_toolsz00
														(BgL_namez00_974);
													{	/* Foreign/cfun.scm 41 */
														BgL_typez00_bglt BgL_typezd2reszd2_976;

														{
															BgL_cfunctionz00_bglt BgL_auxz00_1222;

															{
																obj_t BgL_auxz00_1223;

																{	/* Foreign/cfun.scm 42 */
																	BgL_objectz00_bglt BgL_tmpz00_1224;

																	BgL_tmpz00_1224 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_whatz00_914));
																	BgL_auxz00_1223 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_1224);
																}
																BgL_auxz00_1222 =
																	((BgL_cfunctionz00_bglt) BgL_auxz00_1223);
															}
															BgL_typezd2reszd2_976 =
																(((BgL_cfunctionz00_bglt)
																	COBJECT(BgL_auxz00_1222))->BgL_typezd2reszd2);
														}
														{	/* Foreign/cfun.scm 42 */
															obj_t BgL_typezd2argszd2_977;

															{
																BgL_cfunctionz00_bglt BgL_auxz00_1230;

																{
																	obj_t BgL_auxz00_1231;

																	{	/* Foreign/cfun.scm 43 */
																		BgL_objectz00_bglt BgL_tmpz00_1232;

																		BgL_tmpz00_1232 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_whatz00_914));
																		BgL_auxz00_1231 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_1232);
																	}
																	BgL_auxz00_1230 =
																		((BgL_cfunctionz00_bglt) BgL_auxz00_1231);
																}
																BgL_typezd2argszd2_977 =
																	(((BgL_cfunctionz00_bglt)
																		COBJECT(BgL_auxz00_1230))->
																	BgL_typezd2argszd2);
															}
															{	/* Foreign/cfun.scm 43 */
																long BgL_arityz00_978;

																{
																	BgL_cfunctionz00_bglt BgL_auxz00_1238;

																	{
																		obj_t BgL_auxz00_1239;

																		{	/* Foreign/cfun.scm 44 */
																			BgL_objectz00_bglt BgL_tmpz00_1240;

																			BgL_tmpz00_1240 =
																				((BgL_objectz00_bglt)
																				((BgL_typez00_bglt) BgL_whatz00_914));
																			BgL_auxz00_1239 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_1240);
																		}
																		BgL_auxz00_1238 =
																			((BgL_cfunctionz00_bglt) BgL_auxz00_1239);
																	}
																	BgL_arityz00_978 =
																		(((BgL_cfunctionz00_bglt)
																			COBJECT(BgL_auxz00_1238))->BgL_arityz00);
																}
																{	/* Foreign/cfun.scm 44 */
																	obj_t BgL_nbzd2argszd2_979;

																	{	/* Foreign/cfun.scm 45 */

																		BgL_nbzd2argszd2_979 =
																			BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																			(BgL_arityz00_978, ((long) 10));
																	}
																	{	/* Foreign/cfun.scm 45 */

																		{

																			{	/* Foreign/cfun.scm 113 */
																				obj_t BgL_arg1117z00_1111;

																				{	/* Foreign/cfun.scm 113 */
																					obj_t BgL_list1123z00_1112;

																					{	/* Foreign/cfun.scm 113 */
																						obj_t BgL_arg1124z00_1113;

																						{	/* Foreign/cfun.scm 113 */
																							obj_t BgL_arg1125z00_1114;

																							BgL_arg1125z00_1114 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 2)), BNIL);
																							BgL_arg1124z00_1113 =
																								MAKE_YOUNG_PAIR(BgL_idz00_937,
																								BgL_arg1125z00_1114);
																						}
																						BgL_list1123z00_1112 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 8)),
																							BgL_arg1124z00_1113);
																					}
																					BgL_arg1117z00_1111 =
																						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																						(BgL_list1123z00_1112);
																				}
																				{	/* Foreign/cfun.scm 111 */
																					obj_t BgL_list1118z00_1115;

																					{	/* Foreign/cfun.scm 111 */
																						obj_t BgL_arg1121z00_1116;

																						{	/* Foreign/cfun.scm 111 */
																							obj_t BgL_arg1122z00_1117;

																							BgL_arg1122z00_1117 =
																								MAKE_YOUNG_PAIR
																								(BgL_callzd2idzd2_939, BNIL);
																							BgL_arg1121z00_1116 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1117z00_1111,
																								BgL_arg1122z00_1117);
																						}
																						BgL_list1118z00_1115 =
																							MAKE_YOUNG_PAIR(BgL_bidzf3zf3_956,
																							BgL_arg1121z00_1116);
																					}
																					BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																						(BgL_list1118z00_1115);
																			}}
																			{	/* Foreign/cfun.scm 117 */
																				obj_t BgL_arg1126z00_1118;

																				{	/* Foreign/cfun.scm 117 */
																					obj_t BgL_arg1127z00_1119;

																					{	/* Foreign/cfun.scm 117 */
																						obj_t BgL_arg1128z00_1120;
																						obj_t BgL_arg1129z00_1121;

																						{	/* Foreign/cfun.scm 51 */
																							obj_t BgL_arg1190z00_1105;

																							{	/* Foreign/cfun.scm 51 */
																								obj_t BgL_arg1194z00_1106;

																								{	/* Foreign/cfun.scm 51 */
																									obj_t BgL_arg1197z00_1107;

																									{	/* Foreign/cfun.scm 51 */
																										obj_t BgL_arg1201z00_1108;
																										obj_t BgL_arg1208z00_1109;

																										{	/* Foreign/cfun.scm 51 */
																											obj_t BgL_arg1211z00_1110;

																											BgL_arg1211z00_1110 =
																												MAKE_YOUNG_PAIR
																												(BgL_idz00_937, BNIL);
																											BgL_arg1201z00_1108 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														19)),
																												BgL_arg1211z00_1110);
																										}
																										BgL_arg1208z00_1109 =
																											MAKE_YOUNG_PAIR
																											(BGl_string1510z00zzforeign_cfunctionz00,
																											BNIL);
																										BgL_arg1197z00_1107 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1201z00_1108,
																											BgL_arg1208z00_1109);
																									}
																									BgL_arg1194z00_1106 =
																										MAKE_YOUNG_PAIR
																										(BgL_idzd2ze3bidz31_948,
																										BgL_arg1197z00_1107);
																								}
																								BgL_arg1190z00_1105 =
																									MAKE_YOUNG_PAIR
																									(BgL_bidz00_938,
																									BgL_arg1194z00_1106);
																							}
																							BgL_arg1128z00_1120 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 6)),
																								BgL_arg1190z00_1105);
																						}
																						{	/* Foreign/cfun.scm 118 */
																							obj_t BgL_arg1133z00_1122;
																							obj_t BgL_arg1134z00_1123;

																							{	/* Foreign/cfun.scm 54 */
																								obj_t BgL_mnamez00_1099;

																								BgL_mnamez00_1099 =
																									string_append_3
																									(BGl_string1508z00zzforeign_cfunctionz00,
																									BgL_namezd2sanszd2z42z42_975,
																									BGl_string1509z00zzforeign_cfunctionz00);
																								{	/* Foreign/cfun.scm 55 */
																									obj_t BgL_arg1216z00_1100;

																									{	/* Foreign/cfun.scm 55 */
																										obj_t BgL_arg1221z00_1101;

																										{	/* Foreign/cfun.scm 55 */
																											obj_t BgL_arg1223z00_1102;

																											{	/* Foreign/cfun.scm 55 */
																												obj_t
																													BgL_arg1225z00_1103;
																												obj_t
																													BgL_arg1227z00_1104;
																												BgL_arg1225z00_1103 =
																													MAKE_YOUNG_PAIR
																													(BgL_bidz00_938,
																													BNIL);
																												BgL_arg1227z00_1104 =
																													MAKE_YOUNG_PAIR
																													(BgL_mnamez00_1099,
																													BNIL);
																												BgL_arg1223z00_1102 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1225z00_1103,
																													BgL_arg1227z00_1104);
																											}
																											BgL_arg1221z00_1101 =
																												MAKE_YOUNG_PAIR
																												(BgL_bidzd2ze3idz31_952,
																												BgL_arg1223z00_1102);
																										}
																										BgL_arg1216z00_1100 =
																											MAKE_YOUNG_PAIR
																											(BgL_idz00_937,
																											BgL_arg1221z00_1101);
																									}
																									BgL_arg1133z00_1122 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long) 6)),
																										BgL_arg1216z00_1100);
																							}}
																							{	/* Foreign/cfun.scm 117 */
																								obj_t BgL_tmpz00_1274;

																								{	/* Foreign/cfun.scm 74 */
																									obj_t BgL_treszd2idzd2_1048;

																									BgL_treszd2idzd2_1048 =
																										(((BgL_typez00_bglt)
																											COBJECT
																											(BgL_typezd2reszd2_976))->
																										BgL_idz00);
																									{	/* Foreign/cfun.scm 74 */
																										obj_t
																											BgL_targszd2idzd2_1049;
																										if (NULLP
																											(BgL_typezd2argszd2_977))
																											{	/* Foreign/cfun.scm 75 */
																												BgL_targszd2idzd2_1049 =
																													BNIL;
																											}
																										else
																											{	/* Foreign/cfun.scm 75 */
																												obj_t
																													BgL_head1089z00_1050;
																												{	/* Foreign/cfun.scm 75 */
																													obj_t
																														BgL_arg1297z00_1051;
																													BgL_arg1297z00_1051 =
																														(((BgL_typez00_bglt)
																															COBJECT((
																																	(BgL_typez00_bglt)
																																	CAR(((obj_t)
																																			BgL_typezd2argszd2_977)))))->
																														BgL_idz00);
																													{	/* Foreign/cfun.scm 75 */
																														obj_t
																															BgL_res1473z00_1052;
																														BgL_res1473z00_1052
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1297z00_1051,
																															BNIL);
																														BgL_head1089z00_1050
																															=
																															BgL_res1473z00_1052;
																													}
																												}
																												{	/* Foreign/cfun.scm 75 */
																													obj_t
																														BgL_g1092z00_1053;
																													BgL_g1092z00_1053 =
																														CDR(((obj_t)
																															BgL_typezd2argszd2_977));
																													{
																														obj_t
																															BgL_l1087z00_1055;
																														obj_t
																															BgL_tail1090z00_1056;
																														BgL_l1087z00_1055 =
																															BgL_g1092z00_1053;
																														BgL_tail1090z00_1056
																															=
																															BgL_head1089z00_1050;
																													BgL_zc3z04anonymousza31290ze3z87_1054:
																														if (NULLP
																															(BgL_l1087z00_1055))
																															{	/* Foreign/cfun.scm 75 */
																																BgL_targszd2idzd2_1049
																																	=
																																	BgL_head1089z00_1050;
																															}
																														else
																															{	/* Foreign/cfun.scm 75 */
																																obj_t
																																	BgL_newtail1091z00_1057;
																																{	/* Foreign/cfun.scm 75 */
																																	obj_t
																																		BgL_arg1295z00_1058;
																																	BgL_arg1295z00_1058
																																		=
																																		(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) CAR(((obj_t) BgL_l1087z00_1055)))))->BgL_idz00);
																																	{	/* Foreign/cfun.scm 75 */
																																		obj_t
																																			BgL_res1475z00_1059;
																																		BgL_res1475z00_1059
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1295z00_1058,
																																			BNIL);
																																		BgL_newtail1091z00_1057
																																			=
																																			BgL_res1475z00_1059;
																																	}
																																}
																																SET_CDR
																																	(BgL_tail1090z00_1056,
																																	BgL_newtail1091z00_1057);
																																{	/* Foreign/cfun.scm 75 */
																																	obj_t
																																		BgL_arg1292z00_1060;
																																	BgL_arg1292z00_1060
																																		=
																																		CDR(((obj_t)
																																			BgL_l1087z00_1055));
																																	{
																																		obj_t
																																			BgL_tail1090z00_1296;
																																		obj_t
																																			BgL_l1087z00_1295;
																																		BgL_l1087z00_1295
																																			=
																																			BgL_arg1292z00_1060;
																																		BgL_tail1090z00_1296
																																			=
																																			BgL_newtail1091z00_1057;
																																		BgL_tail1090z00_1056
																																			=
																																			BgL_tail1090z00_1296;
																																		BgL_l1087z00_1055
																																			=
																																			BgL_l1087z00_1295;
																																		goto
																																			BgL_zc3z04anonymousza31290ze3z87_1054;
																																	}
																																}
																															}
																													}
																												}
																											}
																										{	/* Foreign/cfun.scm 75 */
																											obj_t
																												BgL_callerzd2namezd2_1061;
																											BgL_callerzd2namezd2_1061
																												=
																												string_append
																												(BGl_string1507z00zzforeign_cfunctionz00,
																												BgL_nbzd2argszd2_979);
																											{	/* Foreign/cfun.scm 76 */
																												obj_t
																													BgL_czd2callzd2idz00_1062;
																												{	/* Foreign/cfun.scm 77 */
																													obj_t
																														BgL_arg1286z00_1063;
																													{	/* Foreign/cfun.scm 77 */
																														obj_t
																															BgL_arg1287z00_1064;
																														obj_t
																															BgL_arg1288z00_1065;
																														{	/* Foreign/cfun.scm 77 */
																															obj_t
																																BgL_res1476z00_1066;
																															{	/* Foreign/cfun.scm 77 */
																																obj_t
																																	BgL_symbolz00_1067;
																																BgL_symbolz00_1067
																																	=
																																	CNST_TABLE_REF
																																	(((long) 4));
																																{	/* Foreign/cfun.scm 77 */
																																	obj_t
																																		BgL_arg1466z00_1068;
																																	BgL_arg1466z00_1068
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_1067);
																																	BgL_res1476z00_1066
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg1466z00_1068);
																															}}
																															BgL_arg1287z00_1064
																																=
																																BgL_res1476z00_1066;
																														}
																														{	/* Foreign/cfun.scm 77 */
																															obj_t
																																BgL_res1477z00_1069;
																															{	/* Foreign/cfun.scm 77 */
																																obj_t
																																	BgL_arg1466z00_1070;
																																BgL_arg1466z00_1070
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_callzd2idzd2_939);
																																BgL_res1477z00_1069
																																	=
																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																	(BgL_arg1466z00_1070);
																															}
																															BgL_arg1288z00_1065
																																=
																																BgL_res1477z00_1069;
																														}
																														BgL_arg1286z00_1063
																															=
																															string_append
																															(BgL_arg1287z00_1064,
																															BgL_arg1288z00_1065);
																													}
																													BgL_czd2callzd2idz00_1062
																														=
																														bstring_to_symbol
																														(BgL_arg1286z00_1063);
																												}
																												{	/* Foreign/cfun.scm 77 */

																													{	/* Foreign/cfun.scm 78 */
																														obj_t
																															BgL_arg1280z00_1071;
																														{	/* Foreign/cfun.scm 78 */
																															obj_t
																																BgL_arg1281z00_1072;
																															{	/* Foreign/cfun.scm 78 */
																																obj_t
																																	BgL_arg1282z00_1073;
																																{	/* Foreign/cfun.scm 78 */
																																	obj_t
																																		BgL_arg1284z00_1074;
																																	obj_t
																																		BgL_arg1285z00_1075;
																																	BgL_arg1284z00_1074
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_idz00_937,
																																		BgL_targszd2idzd2_1049);
																																	BgL_arg1285z00_1075
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_callerzd2namezd2_1061,
																																		BNIL);
																																	BgL_arg1282z00_1073
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1284z00_1074,
																																		BgL_arg1285z00_1075);
																																}
																																BgL_arg1281z00_1072
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_czd2callzd2idz00_1062,
																																	BgL_arg1282z00_1073);
																															}
																															BgL_arg1280z00_1071
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_treszd2idzd2_1048,
																																BgL_arg1281z00_1072);
																														}
																														BgL_tmpz00_1274 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 6)),
																															BgL_arg1280z00_1071);
																								}}}}}}
																								BgL_arg1134z00_1123 =
																									MAKE_YOUNG_PAIR
																									(BgL_tmpz00_1274, BNIL);
																							}
																							BgL_arg1129z00_1121 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1133z00_1122,
																								BgL_arg1134z00_1123);
																						}
																						BgL_arg1127z00_1119 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1128z00_1120,
																							BgL_arg1129z00_1121);
																					}
																					BgL_arg1126z00_1118 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 20)),
																						BgL_arg1127z00_1119);
																				}
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(BgL_arg1126z00_1118);
																			}
																			{	/* Foreign/cfun.scm 122 */
																				obj_t BgL_arg1145z00_1124;

																				{	/* Foreign/cfun.scm 122 */
																					obj_t BgL_arg1146z00_1125;

																					{	/* Foreign/cfun.scm 122 */
																						obj_t BgL_arg1155z00_1126;

																						{	/* Foreign/cfun.scm 122 */
																							obj_t BgL_arg1156z00_1127;

																							{	/* Foreign/cfun.scm 122 */
																								obj_t BgL_arg1165z00_1128;

																								BgL_arg1165z00_1128 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 21)), BNIL);
																								BgL_arg1156z00_1127 =
																									MAKE_YOUNG_PAIR
																									(BgL_bidzf3zd2boolz21_965,
																									BgL_arg1165z00_1128);
																							}
																							BgL_arg1155z00_1126 =
																								BGl_makezd2protozd2inlinez00zzforeign_libraryz00
																								(BgL_arg1156z00_1127);
																						}
																						BgL_arg1146z00_1125 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1155z00_1126, BNIL);
																					}
																					BgL_arg1145z00_1124 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 22)),
																						BgL_arg1146z00_1125);
																				}
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(BgL_arg1145z00_1124);
																			}
																			{	/* Foreign/cfun.scm 123 */
																				obj_t BgL_arg1166z00_1129;

																				{	/* Foreign/cfun.scm 123 */
																					obj_t BgL_arg1167z00_1130;

																					{	/* Foreign/cfun.scm 123 */
																						obj_t BgL_arg1169z00_1131;

																						{	/* Foreign/cfun.scm 123 */
																							obj_t BgL_arg1170z00_1132;

																							{	/* Foreign/cfun.scm 123 */
																								obj_t BgL_arg1172z00_1133;

																								{	/* Foreign/cfun.scm 123 */
																									obj_t BgL_arg1174z00_1134;

																									BgL_arg1174z00_1134 =
																										MAKE_YOUNG_PAIR
																										(BgL_bidz00_938, BNIL);
																									BgL_arg1172z00_1133 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												23)),
																										BgL_arg1174z00_1134);
																								}
																								BgL_arg1170z00_1132 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1172z00_1133, BNIL);
																							}
																							BgL_arg1169z00_1131 =
																								MAKE_YOUNG_PAIR
																								(BgL_bidzf3zf3_956,
																								BgL_arg1170z00_1132);
																						}
																						BgL_arg1167z00_1130 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1169z00_1131, BNIL);
																					}
																					BgL_arg1166z00_1129 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 24)),
																						BgL_arg1167z00_1130);
																				}
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(BgL_arg1166z00_1129);
																			}
																			{	/* Foreign/cfun.scm 126 */
																				obj_t BgL_arg1175z00_1135;
																				obj_t BgL_arg1176z00_1136;
																				obj_t BgL_arg1177z00_1137;

																				{	/* Foreign/cfun.scm 60 */
																					obj_t BgL_arg1229z00_1084;
																					obj_t BgL_arg1232z00_1085;

																					{	/* Foreign/cfun.scm 60 */
																						obj_t BgL_arg1239z00_1086;

																						BgL_arg1239z00_1086 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 12)), BNIL);
																						BgL_arg1229z00_1084 =
																							MAKE_YOUNG_PAIR
																							(BgL_bidzf3zd2boolz21_965,
																							BgL_arg1239z00_1086);
																					}
																					{	/* Foreign/cfun.scm 61 */
																						obj_t BgL_arg1242z00_1087;

																						{	/* Foreign/cfun.scm 61 */
																							obj_t BgL_arg1243z00_1088;
																							obj_t BgL_arg1245z00_1089;

																							{	/* Foreign/cfun.scm 61 */
																								obj_t BgL_arg1246z00_1090;

																								BgL_arg1246z00_1090 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 13)), BNIL);
																								BgL_arg1243z00_1088 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 14)),
																									BgL_arg1246z00_1090);
																							}
																							{	/* Foreign/cfun.scm 62 */
																								obj_t BgL_arg1247z00_1091;
																								obj_t BgL_arg1250z00_1092;

																								{	/* Foreign/cfun.scm 62 */
																									obj_t BgL_arg1252z00_1093;

																									{	/* Foreign/cfun.scm 62 */
																										obj_t BgL_arg1253z00_1094;
																										obj_t BgL_arg1254z00_1095;

																										{	/* Foreign/cfun.scm 62 */
																											obj_t BgL_arg1256z00_1096;

																											BgL_arg1256z00_1096 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														13)), BNIL);
																											BgL_arg1253z00_1094 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														15)),
																												BgL_arg1256z00_1096);
																										}
																										{	/* Foreign/cfun.scm 62 */
																											obj_t BgL_arg1258z00_1097;

																											{	/* Foreign/cfun.scm 62 */
																												obj_t
																													BgL_arg1263z00_1098;
																												BgL_arg1263z00_1098 =
																													MAKE_YOUNG_PAIR
																													(BgL_bidz00_938,
																													BNIL);
																												BgL_arg1258z00_1097 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 16)),
																													BgL_arg1263z00_1098);
																											}
																											BgL_arg1254z00_1095 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1258z00_1097,
																												BNIL);
																										}
																										BgL_arg1252z00_1093 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1253z00_1094,
																											BgL_arg1254z00_1095);
																									}
																									BgL_arg1247z00_1091 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												17)),
																										BgL_arg1252z00_1093);
																								}
																								BgL_arg1250z00_1092 =
																									MAKE_YOUNG_PAIR(BFALSE, BNIL);
																								BgL_arg1245z00_1089 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1247z00_1091,
																									BgL_arg1250z00_1092);
																							}
																							BgL_arg1242z00_1087 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1243z00_1088,
																								BgL_arg1245z00_1089);
																						}
																						BgL_arg1232z00_1085 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 18)),
																							BgL_arg1242z00_1087);
																					}
																					BgL_arg1175z00_1135 =
																						BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																						(BgL_arg1229z00_1084,
																						BgL_arg1232z00_1085);
																				}
																				{	/* Foreign/cfun.scm 68 */
																					obj_t BgL_arg1268z00_1076;

																					{	/* Foreign/cfun.scm 68 */
																						obj_t BgL_arg1270z00_1077;
																						obj_t BgL_arg1271z00_1078;

																						{	/* Foreign/cfun.scm 68 */
																							obj_t BgL_list1272z00_1079;

																							{	/* Foreign/cfun.scm 68 */
																								obj_t BgL_arg1273z00_1080;

																								{	/* Foreign/cfun.scm 68 */
																									obj_t BgL_arg1274z00_1081;

																									BgL_arg1274z00_1081 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long) 7)),
																										BNIL);
																									BgL_arg1273z00_1080 =
																										MAKE_YOUNG_PAIR
																										(BgL_idz00_937,
																										BgL_arg1274z00_1081);
																								}
																								BgL_list1272z00_1079 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 8)),
																									BgL_arg1273z00_1080);
																							}
																							BgL_arg1270z00_1077 =
																								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																								(BgL_list1272z00_1079);
																						}
																						{	/* Foreign/cfun.scm 69 */
																							obj_t BgL_arg1275z00_1082;
																							obj_t BgL_arg1276z00_1083;

																							BgL_arg1275z00_1082 =
																								BGl_makezd2typedzd2identz00zzast_identz00
																								(CNST_TABLE_REF(((long) 9)),
																								BgL_idz00_937);
																							BgL_arg1276z00_1083 =
																								MAKE_YOUNG_PAIR
																								(BGl_makezd2typedzd2identz00zzast_identz00
																								(CNST_TABLE_REF(((long) 10)),
																									BgL_idz00_937), BNIL);
																							BgL_arg1271z00_1078 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1275z00_1082,
																								BgL_arg1276z00_1083);
																						}
																						BgL_arg1268z00_1076 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1270z00_1077,
																							BgL_arg1271z00_1078);
																					}
																					BgL_arg1176z00_1136 =
																						BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																						(BgL_arg1268z00_1076,
																						CNST_TABLE_REF(((long) 11)));
																				}
																				if (
																					(BgL_arityz00_978 >=
																						(long)
																						CINT
																						(BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00)))
																					{	/* Foreign/cfun.scm 87 */
																						obj_t BgL_arg1301z00_1044;
																						obj_t BgL_arg1303z00_1045;

																						{	/* Foreign/cfun.scm 87 */
																							obj_t BgL_arg1306z00_1046;

																							{	/* Foreign/cfun.scm 87 */
																								obj_t BgL_g1775z00_1047;

																								BgL_g1775z00_1047 =
																									BGl_za2maxzd2czd2foreignzd2arityza2zd2zzengine_paramz00;
																								{	/* Foreign/cfun.scm 87 */

																									BgL_arg1306z00_1046 =
																										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																										((long)
																										CINT(BgL_g1775z00_1047),
																										((long) 10));
																							}}
																							BgL_arg1301z00_1044 =
																								string_append_3
																								(BGl_string1502z00zzforeign_cfunctionz00,
																								BgL_arg1306z00_1046,
																								BGl_string1503z00zzforeign_cfunctionz00);
																						}
																						BgL_arg1303z00_1045 =
																							string_append
																							(BgL_nbzd2argszd2_979,
																							BGl_string1504z00zzforeign_cfunctionz00);
																						BgL_arg1177z00_1137 =
																							BGl_userzd2errorzd2zztools_errorz00
																							(BgL_idz00_937,
																							BgL_arg1301z00_1044,
																							BgL_arg1303z00_1045, BNIL);
																					}
																				else
																					{	/* Foreign/cfun.scm 83 */
																						if (
																							(BgL_arityz00_978 >= ((long) 0)))
																							{	/* Foreign/cfun.scm 90 */
																								{	/* Foreign/cfun.scm 98 */
																									obj_t BgL_treszd2idzd2_987;

																									BgL_treszd2idzd2_987 =
																										(((BgL_typez00_bglt)
																											COBJECT
																											(BgL_typezd2reszd2_976))->
																										BgL_idz00);
																									{	/* Foreign/cfun.scm 98 */
																										obj_t BgL_targszd2idzd2_988;

																										if (NULLP
																											(BgL_typezd2argszd2_977))
																											{	/* Foreign/cfun.scm 99 */
																												BgL_targszd2idzd2_988 =
																													BNIL;
																											}
																										else
																											{	/* Foreign/cfun.scm 99 */
																												obj_t
																													BgL_head1095z00_989;
																												{	/* Foreign/cfun.scm 99 */
																													obj_t
																														BgL_arg1347z00_990;
																													BgL_arg1347z00_990 =
																														(((BgL_typez00_bglt)
																															COBJECT((
																																	(BgL_typez00_bglt)
																																	CAR(((obj_t)
																																			BgL_typezd2argszd2_977)))))->
																														BgL_idz00);
																													{	/* Foreign/cfun.scm 99 */
																														obj_t
																															BgL_res1482z00_991;
																														BgL_res1482z00_991 =
																															MAKE_YOUNG_PAIR
																															(BgL_arg1347z00_990,
																															BNIL);
																														BgL_head1095z00_989
																															=
																															BgL_res1482z00_991;
																													}
																												}
																												{	/* Foreign/cfun.scm 99 */
																													obj_t
																														BgL_g1098z00_992;
																													BgL_g1098z00_992 =
																														CDR(((obj_t)
																															BgL_typezd2argszd2_977));
																													{
																														obj_t
																															BgL_l1093z00_994;
																														obj_t
																															BgL_tail1096z00_995;
																														BgL_l1093z00_994 =
																															BgL_g1098z00_992;
																														BgL_tail1096z00_995
																															=
																															BgL_head1095z00_989;
																													BgL_zc3z04anonymousza31342ze3z87_993:
																														if (NULLP
																															(BgL_l1093z00_994))
																															{	/* Foreign/cfun.scm 99 */
																																BgL_targszd2idzd2_988
																																	=
																																	BgL_head1095z00_989;
																															}
																														else
																															{	/* Foreign/cfun.scm 99 */
																																obj_t
																																	BgL_newtail1097z00_996;
																																{	/* Foreign/cfun.scm 99 */
																																	obj_t
																																		BgL_arg1345z00_997;
																																	BgL_arg1345z00_997
																																		=
																																		(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) CAR(((obj_t) BgL_l1093z00_994)))))->BgL_idz00);
																																	{	/* Foreign/cfun.scm 99 */
																																		obj_t
																																			BgL_res1484z00_998;
																																		BgL_res1484z00_998
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1345z00_997,
																																			BNIL);
																																		BgL_newtail1097z00_996
																																			=
																																			BgL_res1484z00_998;
																																	}
																																}
																																SET_CDR
																																	(BgL_tail1096z00_995,
																																	BgL_newtail1097z00_996);
																																{	/* Foreign/cfun.scm 99 */
																																	obj_t
																																		BgL_arg1344z00_999;
																																	BgL_arg1344z00_999
																																		=
																																		CDR(((obj_t)
																																			BgL_l1093z00_994));
																																	{
																																		obj_t
																																			BgL_tail1096z00_1405;
																																		obj_t
																																			BgL_l1093z00_1404;
																																		BgL_l1093z00_1404
																																			=
																																			BgL_arg1344z00_999;
																																		BgL_tail1096z00_1405
																																			=
																																			BgL_newtail1097z00_996;
																																		BgL_tail1096z00_995
																																			=
																																			BgL_tail1096z00_1405;
																																		BgL_l1093z00_994
																																			=
																																			BgL_l1093z00_1404;
																																		goto
																																			BgL_zc3z04anonymousza31342ze3z87_993;
																																	}
																																}
																															}
																													}
																												}
																											}
																										{	/* Foreign/cfun.scm 99 */
																											obj_t BgL_argsz00_1000;

																											if (NULLP
																												(BgL_targszd2idzd2_988))
																												{	/* Foreign/cfun.scm 100 */
																													BgL_argsz00_1000 =
																														BNIL;
																												}
																											else
																												{	/* Foreign/cfun.scm 100 */
																													obj_t
																														BgL_head1101z00_1001;
																													{	/* Foreign/cfun.scm 100 */
																														obj_t
																															BgL_arg1338z00_1002;
																														BgL_arg1338z00_1002
																															=
																															BGl_gensymz00zz__r4_symbols_6_4z00
																															(CAR
																															(BgL_targszd2idzd2_988));
																														{	/* Foreign/cfun.scm 100 */
																															obj_t
																																BgL_res1486z00_1003;
																															BgL_res1486z00_1003
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1338z00_1002,
																																BNIL);
																															BgL_head1101z00_1001
																																=
																																BgL_res1486z00_1003;
																														}
																													}
																													{	/* Foreign/cfun.scm 100 */
																														obj_t
																															BgL_g1104z00_1004;
																														BgL_g1104z00_1004 =
																															CDR
																															(BgL_targszd2idzd2_988);
																														{
																															obj_t
																																BgL_l1099z00_1006;
																															obj_t
																																BgL_tail1102z00_1007;
																															BgL_l1099z00_1006
																																=
																																BgL_g1104z00_1004;
																															BgL_tail1102z00_1007
																																=
																																BgL_head1101z00_1001;
																														BgL_zc3z04anonymousza31332ze3z87_1005:
																															if (NULLP
																																(BgL_l1099z00_1006))
																																{	/* Foreign/cfun.scm 100 */
																																	BgL_argsz00_1000
																																		=
																																		BgL_head1101z00_1001;
																																}
																															else
																																{	/* Foreign/cfun.scm 100 */
																																	obj_t
																																		BgL_newtail1103z00_1008;
																																	{	/* Foreign/cfun.scm 100 */
																																		obj_t
																																			BgL_arg1335z00_1009;
																																		{	/* Foreign/cfun.scm 100 */
																																			obj_t
																																				BgL_arg1337z00_1010;
																																			BgL_arg1337z00_1010
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_l1099z00_1006));
																																			BgL_arg1335z00_1009
																																				=
																																				BGl_gensymz00zz__r4_symbols_6_4z00
																																				(BgL_arg1337z00_1010);
																																		}
																																		{	/* Foreign/cfun.scm 100 */
																																			obj_t
																																				BgL_res1488z00_1011;
																																			BgL_res1488z00_1011
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1335z00_1009,
																																				BNIL);
																																			BgL_newtail1103z00_1008
																																				=
																																				BgL_res1488z00_1011;
																																		}
																																	}
																																	SET_CDR
																																		(BgL_tail1102z00_1007,
																																		BgL_newtail1103z00_1008);
																																	{	/* Foreign/cfun.scm 100 */
																																		obj_t
																																			BgL_arg1334z00_1012;
																																		BgL_arg1334z00_1012
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_l1099z00_1006));
																																		{
																																			obj_t
																																				BgL_tail1102z00_1422;
																																			obj_t
																																				BgL_l1099z00_1421;
																																			BgL_l1099z00_1421
																																				=
																																				BgL_arg1334z00_1012;
																																			BgL_tail1102z00_1422
																																				=
																																				BgL_newtail1103z00_1008;
																																			BgL_tail1102z00_1007
																																				=
																																				BgL_tail1102z00_1422;
																																			BgL_l1099z00_1006
																																				=
																																				BgL_l1099z00_1421;
																																			goto
																																				BgL_zc3z04anonymousza31332ze3z87_1005;
																																		}
																																	}
																																}
																														}
																													}
																												}
																											{	/* Foreign/cfun.scm 100 */
																												obj_t
																													BgL_czd2callzd2idz00_1013;
																												{	/* Foreign/cfun.scm 101 */
																													obj_t
																														BgL_arg1328z00_1014;
																													{	/* Foreign/cfun.scm 101 */
																														obj_t
																															BgL_arg1329z00_1015;
																														obj_t
																															BgL_arg1330z00_1016;
																														{	/* Foreign/cfun.scm 101 */
																															obj_t
																																BgL_res1489z00_1017;
																															{	/* Foreign/cfun.scm 101 */
																																obj_t
																																	BgL_symbolz00_1018;
																																BgL_symbolz00_1018
																																	=
																																	CNST_TABLE_REF
																																	(((long) 4));
																																{	/* Foreign/cfun.scm 101 */
																																	obj_t
																																		BgL_arg1466z00_1019;
																																	BgL_arg1466z00_1019
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_1018);
																																	BgL_res1489z00_1017
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg1466z00_1019);
																															}}
																															BgL_arg1329z00_1015
																																=
																																BgL_res1489z00_1017;
																														}
																														{	/* Foreign/cfun.scm 101 */
																															obj_t
																																BgL_res1490z00_1020;
																															{	/* Foreign/cfun.scm 101 */
																																obj_t
																																	BgL_arg1466z00_1021;
																																BgL_arg1466z00_1021
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_callzd2idzd2_939);
																																BgL_res1490z00_1020
																																	=
																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																	(BgL_arg1466z00_1021);
																															}
																															BgL_arg1330z00_1016
																																=
																																BgL_res1490z00_1020;
																														}
																														BgL_arg1328z00_1014
																															=
																															string_append
																															(BgL_arg1329z00_1015,
																															BgL_arg1330z00_1016);
																													}
																													BgL_czd2callzd2idz00_1013
																														=
																														bstring_to_symbol
																														(BgL_arg1328z00_1014);
																												}
																												{	/* Foreign/cfun.scm 101 */

																													{	/* Foreign/cfun.scm 103 */
																														obj_t
																															BgL_arg1310z00_1022;
																														obj_t
																															BgL_arg1311z00_1023;
																														{	/* Foreign/cfun.scm 103 */
																															obj_t
																																BgL_arg1312z00_1024;
																															obj_t
																																BgL_arg1314z00_1025;
																															BgL_arg1312z00_1024
																																=
																																BGl_makezd2typedzd2identz00zzast_identz00
																																(BgL_callzd2idzd2_939,
																																BgL_treszd2idzd2_987);
																															{	/* Foreign/cfun.scm 104 */
																																obj_t
																																	BgL_arg1315z00_1026;
																																obj_t
																																	BgL_arg1316z00_1027;
																																BgL_arg1315z00_1026
																																	=
																																	BGl_makezd2typedzd2identz00zzast_identz00
																																	(CNST_TABLE_REF
																																	(((long) 5)),
																																	BgL_idz00_937);
																																{	/* Foreign/cfun.scm 105 */
																																	obj_t
																																		BgL_arg1317z00_1028;
																																	if (NULLP
																																		(BgL_argsz00_1000))
																																		{	/* Foreign/cfun.scm 105 */
																																			BgL_arg1317z00_1028
																																				= BNIL;
																																		}
																																	else
																																		{	/* Foreign/cfun.scm 105 */
																																			obj_t
																																				BgL_head1107z00_1029;
																																			{	/* Foreign/cfun.scm 105 */
																																				obj_t
																																					BgL_res1493z00_1030;
																																				BgL_res1493z00_1030
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_head1107z00_1029
																																					=
																																					BgL_res1493z00_1030;
																																			}
																																			{
																																				obj_t
																																					BgL_ll1105z00_1032;
																																				obj_t
																																					BgL_ll1106z00_1033;
																																				obj_t
																																					BgL_tail1108z00_1034;
																																				BgL_ll1105z00_1032
																																					=
																																					BgL_argsz00_1000;
																																				BgL_ll1106z00_1033
																																					=
																																					BgL_targszd2idzd2_988;
																																				BgL_tail1108z00_1034
																																					=
																																					BgL_head1107z00_1029;
																																			BgL_zc3z04anonymousza31319ze3z87_1031:
																																				if (NULLP(BgL_ll1105z00_1032))
																																					{	/* Foreign/cfun.scm 105 */
																																						BgL_arg1317z00_1028
																																							=
																																							CDR
																																							(BgL_head1107z00_1029);
																																					}
																																				else
																																					{	/* Foreign/cfun.scm 105 */
																																						obj_t
																																							BgL_newtail1109z00_1035;
																																						{	/* Foreign/cfun.scm 105 */
																																							obj_t
																																								BgL_arg1325z00_1036;
																																							{	/* Foreign/cfun.scm 105 */
																																								obj_t
																																									BgL_argz00_1037;
																																								obj_t
																																									BgL_typez00_1038;
																																								BgL_argz00_1037
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_ll1105z00_1032));
																																								BgL_typez00_1038
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_ll1106z00_1033));
																																								BgL_arg1325z00_1036
																																									=
																																									BGl_makezd2typedzd2identz00zzast_identz00
																																									(BgL_argz00_1037,
																																									BgL_typez00_1038);
																																							}
																																							{	/* Foreign/cfun.scm 105 */
																																								obj_t
																																									BgL_res1495z00_1039;
																																								BgL_res1495z00_1039
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1325z00_1036,
																																									BNIL);
																																								BgL_newtail1109z00_1035
																																									=
																																									BgL_res1495z00_1039;
																																							}
																																						}
																																						SET_CDR
																																							(BgL_tail1108z00_1034,
																																							BgL_newtail1109z00_1035);
																																						{	/* Foreign/cfun.scm 105 */
																																							obj_t
																																								BgL_arg1322z00_1040;
																																							obj_t
																																								BgL_arg1324z00_1041;
																																							BgL_arg1322z00_1040
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_ll1105z00_1032));
																																							BgL_arg1324z00_1041
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_ll1106z00_1033));
																																							{
																																								obj_t
																																									BgL_tail1108z00_1452;
																																								obj_t
																																									BgL_ll1106z00_1451;
																																								obj_t
																																									BgL_ll1105z00_1450;
																																								BgL_ll1105z00_1450
																																									=
																																									BgL_arg1322z00_1040;
																																								BgL_ll1106z00_1451
																																									=
																																									BgL_arg1324z00_1041;
																																								BgL_tail1108z00_1452
																																									=
																																									BgL_newtail1109z00_1035;
																																								BgL_tail1108z00_1034
																																									=
																																									BgL_tail1108z00_1452;
																																								BgL_ll1106z00_1033
																																									=
																																									BgL_ll1106z00_1451;
																																								BgL_ll1105z00_1032
																																									=
																																									BgL_ll1105z00_1450;
																																								goto
																																									BgL_zc3z04anonymousza31319ze3z87_1031;
																																							}
																																						}
																																					}
																																			}
																																		}
																																	BgL_arg1316z00_1027
																																		=
																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg1317z00_1028,
																																		BNIL);
																																}
																																BgL_arg1314z00_1025
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1315z00_1026,
																																	BgL_arg1316z00_1027);
																															}
																															BgL_arg1310z00_1022
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1312z00_1024,
																																BgL_arg1314z00_1025);
																														}
																														{	/* Foreign/cfun.scm 108 */
																															obj_t
																																BgL_arg1326z00_1042;
																															{	/* Foreign/cfun.scm 108 */
																																obj_t
																																	BgL_arg1327z00_1043;
																																BgL_arg1327z00_1043
																																	=
																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_argsz00_1000,
																																	BNIL);
																																BgL_arg1326z00_1042
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 5)),
																																	BgL_arg1327z00_1043);
																															}
																															BgL_arg1311z00_1023
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_czd2callzd2idz00_1013,
																																BgL_arg1326z00_1042);
																														}
																														BgL_arg1177z00_1137
																															=
																															BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																															(BgL_arg1310z00_1022,
																															BgL_arg1311z00_1023);
																							}}}}}}}
																						else
																							{	/* Foreign/cfun.scm 90 */
																								BgL_arg1177z00_1137 =
																									BGl_userzd2errorzd2zztools_errorz00
																									(BGl_string1505z00zzforeign_cfunctionz00,
																									BGl_string1506z00zzforeign_cfunctionz00,
																									BgL_idz00_937, BNIL);
																							}
																					}
																				{	/* Foreign/cfun.scm 126 */
																					obj_t BgL_list1178z00_1138;

																					{	/* Foreign/cfun.scm 126 */
																						obj_t BgL_arg1179z00_1139;

																						{	/* Foreign/cfun.scm 126 */
																							obj_t BgL_arg1186z00_1140;

																							BgL_arg1186z00_1140 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1177z00_1137, BNIL);
																							BgL_arg1179z00_1139 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1176z00_1136,
																								BgL_arg1186z00_1140);
																						}
																						BgL_list1178z00_1138 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1175z00_1135,
																							BgL_arg1179z00_1139);
																					}
																					return BgL_list1178z00_1138;
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
						}
					}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_cfunctionz00()
	{
		{	/* Foreign/cfun.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1511z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1511z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1511z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1511z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 396356902),
				BSTRING_TO_STRING(BGl_string1511z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 471073690),
				BSTRING_TO_STRING(BGl_string1511z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 419430923),
				BSTRING_TO_STRING(BGl_string1511z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1511z00zzforeign_cfunctionz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1511z00zzforeign_cfunctionz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1511z00zzforeign_cfunctionz00));
		}

	}

#ifdef __cplusplus
}
#endif
