/*===========================================================================*/
/*   (Jas/lib.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/lib.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static long BGl_utf8zd2length1zd2zzjas_libz00(long);
	static obj_t BGl_objectzd2initzd2zzjas_libz00();
	static obj_t BGl_methodzd2initzd2zzjas_libz00();
	BGL_EXPORTED_DECL obj_t BGl_u2z00zzjas_libz00(int);
	BGL_EXPORTED_DECL obj_t BGl_u4z00zzjas_libz00(int);
	BGL_IMPORT obj_t make_string(long, unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_w2z00zzjas_libz00(int);
	BGL_EXPORTED_DECL obj_t BGl_w4z00zzjas_libz00(long);
	static obj_t BGl_z62f2z62zzjas_libz00(obj_t, obj_t);
	static obj_t BGl_z62f4z62zzjas_libz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_w4llongz00zzjas_libz00(BGL_LONGLONG_T);
	static obj_t BGl_producezd2utf8zd2zzjas_libz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzjas_libz00();
	static obj_t BGl_collectze70ze7zzjas_libz00(long, obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_stringzd2ze3utf8z31zzjas_libz00(obj_t);
	BGL_IMPORT obj_t bgl_float_to_ieee_string(float);
	static obj_t BGl_z62u2z62zzjas_libz00(obj_t, obj_t);
	static obj_t BGl_z62u4z62zzjas_libz00(obj_t, obj_t);
	static obj_t BGl_z62w2z62zzjas_libz00(obj_t, obj_t);
	static obj_t BGl_z62w4z62zzjas_libz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_libz00 = BUNSPEC;
	static obj_t BGl_z62w4elongz62zzjas_libz00(obj_t, obj_t);
	static obj_t BGl_stringzd2ze3shortlistz31zzjas_libz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzjas_libz00();
	static long BGl_utf8zd2lengthzd2zzjas_libz00(obj_t);
	static obj_t BGl_z62stringzd2ze3utf8z53zzjas_libz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_double_to_ieee_string(double);
	BGL_EXPORTED_DECL obj_t BGl_w4elongz00zzjas_libz00(long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_libz00();
	static long BGl_producezd2utf8zd21z00zzjas_libz00(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_f2z00zzjas_libz00(float);
	BGL_EXPORTED_DECL obj_t BGl_f4z00zzjas_libz00(double);
	static obj_t BGl_z62w4llongz62zzjas_libz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_f4zd2envzd2zzjas_libz00,
		BgL_bgl_za762f4za762za7za7jas_li1386z00, BGl_z62f4z62zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u2zd2envzd2zzjas_libz00,
		BgL_bgl_za762u2za762za7za7jas_li1387z00, BGl_z62u2z62zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_w4llongzd2envzd2zzjas_libz00,
		BgL_bgl_za762w4llongza762za7za7j1388z00, BGl_z62w4llongz62zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_u4zd2envzd2zzjas_libz00,
		BgL_bgl_za762u4za762za7za7jas_li1389z00, BGl_z62u4z62zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_w2zd2envzd2zzjas_libz00,
		BgL_bgl_za762w2za762za7za7jas_li1390z00, BGl_z62w2z62zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_w4elongzd2envzd2zzjas_libz00,
		BgL_bgl_za762w4elongza762za7za7j1391z00, BGl_z62w4elongz62zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_w4zd2envzd2zzjas_libz00,
		BgL_bgl_za762w4za762za7za7jas_li1392z00, BGl_z62w4z62zzjas_libz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2ze3utf8zd2envze3zzjas_libz00,
		BgL_bgl_za762stringza7d2za7e3u1393za7,
		BGl_z62stringzd2ze3utf8z53zzjas_libz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_f2zd2envzd2zzjas_libz00,
		BgL_bgl_za762f2za762za7za7jas_li1394z00, BGl_z62f2z62zzjas_libz00, 0L,
		BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzjas_libz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long
		BgL_checksumz00_585, char *BgL_fromz00_586)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_libz00))
				{
					BGl_requirezd2initializa7ationz75zzjas_libz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzjas_libz00();
					BGl_libraryzd2moduleszd2initz00zzjas_libz00();
					return BGl_methodzd2initzd2zzjas_libz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_libz00()
	{
		{	/* Jas/lib.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"jas_lib");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_lib");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"jas_lib");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_lib");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_lib");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "jas_lib");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_lib");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzjas_libz00()
	{
		{	/* Jas/lib.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* u2 */
	BGL_EXPORTED_DEF obj_t BGl_u2z00zzjas_libz00(int BgL_nz00_3)
	{
		{	/* Jas/lib.scm 13 */
			{	/* Jas/lib.scm 14 */
				long BgL_arg1015z00_35;
				long BgL_arg1016z00_36;

				BgL_arg1015z00_35 =
					(((long) (BgL_nz00_3) >> (int) (((long) 8))) & ((long) 255));
				BgL_arg1016z00_36 = ((long) (BgL_nz00_3) & ((long) 255));
				{	/* Jas/lib.scm 14 */
					obj_t BgL_list1017z00_37;

					{	/* Jas/lib.scm 14 */
						obj_t BgL_arg1018z00_38;

						BgL_arg1018z00_38 = MAKE_YOUNG_PAIR(BINT(BgL_arg1016z00_36), BNIL);
						BgL_list1017z00_37 =
							MAKE_YOUNG_PAIR(BINT(BgL_arg1015z00_35), BgL_arg1018z00_38);
					}
					return BgL_list1017z00_37;
				}
			}
		}

	}



/* &u2 */
	obj_t BGl_z62u2z62zzjas_libz00(obj_t BgL_envz00_565, obj_t BgL_nz00_566)
	{
		{	/* Jas/lib.scm 13 */
			return BGl_u2z00zzjas_libz00(CINT(BgL_nz00_566));
		}

	}



/* u4 */
	BGL_EXPORTED_DEF obj_t BGl_u4z00zzjas_libz00(int BgL_nz00_4)
	{
		{	/* Jas/lib.scm 17 */
			{	/* Jas/lib.scm 18 */
				long BgL_arg1020z00_40;
				long BgL_arg1021z00_41;
				long BgL_arg1022z00_42;
				long BgL_arg1023z00_43;

				BgL_arg1020z00_40 =
					(((long) (BgL_nz00_4) >> (int) (((long) 24))) & ((long) 255));
				BgL_arg1021z00_41 =
					(((long) (BgL_nz00_4) >> (int) (((long) 16))) & ((long) 255));
				BgL_arg1022z00_42 =
					(((long) (BgL_nz00_4) >> (int) (((long) 8))) & ((long) 255));
				BgL_arg1023z00_43 = ((long) (BgL_nz00_4) & ((long) 255));
				{	/* Jas/lib.scm 18 */
					obj_t BgL_list1024z00_44;

					{	/* Jas/lib.scm 18 */
						obj_t BgL_arg1025z00_45;

						{	/* Jas/lib.scm 18 */
							obj_t BgL_arg1026z00_46;

							{	/* Jas/lib.scm 18 */
								obj_t BgL_arg1027z00_47;

								BgL_arg1027z00_47 =
									MAKE_YOUNG_PAIR(BINT(BgL_arg1023z00_43), BNIL);
								BgL_arg1026z00_46 =
									MAKE_YOUNG_PAIR(BINT(BgL_arg1022z00_42), BgL_arg1027z00_47);
							}
							BgL_arg1025z00_45 =
								MAKE_YOUNG_PAIR(BINT(BgL_arg1021z00_41), BgL_arg1026z00_46);
						}
						BgL_list1024z00_44 =
							MAKE_YOUNG_PAIR(BINT(BgL_arg1020z00_40), BgL_arg1025z00_45);
					}
					return BgL_list1024z00_44;
				}
			}
		}

	}



/* &u4 */
	obj_t BGl_z62u4z62zzjas_libz00(obj_t BgL_envz00_567, obj_t BgL_nz00_568)
	{
		{	/* Jas/lib.scm 17 */
			return BGl_u4z00zzjas_libz00(CINT(BgL_nz00_568));
		}

	}



/* w2 */
	BGL_EXPORTED_DEF obj_t BGl_w2z00zzjas_libz00(int BgL_nz00_5)
	{
		{	/* Jas/lib.scm 23 */
			{	/* Jas/lib.scm 24 */
				long BgL_arg1031z00_51;
				long BgL_arg1032z00_52;

				BgL_arg1031z00_51 =
					(((long) (BgL_nz00_5) >> (int) (((long) 16))) & ((long) 65535));
				BgL_arg1032z00_52 = ((long) (BgL_nz00_5) & ((long) 65535));
				{	/* Jas/lib.scm 24 */
					obj_t BgL_list1033z00_53;

					{	/* Jas/lib.scm 24 */
						obj_t BgL_arg1035z00_54;

						BgL_arg1035z00_54 = MAKE_YOUNG_PAIR(BINT(BgL_arg1032z00_52), BNIL);
						BgL_list1033z00_53 =
							MAKE_YOUNG_PAIR(BINT(BgL_arg1031z00_51), BgL_arg1035z00_54);
					}
					return BgL_list1033z00_53;
				}
			}
		}

	}



/* &w2 */
	obj_t BGl_z62w2z62zzjas_libz00(obj_t BgL_envz00_569, obj_t BgL_nz00_570)
	{
		{	/* Jas/lib.scm 23 */
			return BGl_w2z00zzjas_libz00(CINT(BgL_nz00_570));
		}

	}



/* w4elong */
	BGL_EXPORTED_DEF obj_t BGl_w4elongz00zzjas_libz00(long BgL_nz00_7)
	{
		{	/* Jas/lib.scm 30 */
			{	/* Jas/lib.scm 31 */
				long BgL_arg1039z00_58;
				long BgL_arg1040z00_59;
				long BgL_arg1041z00_60;
				long BgL_arg1042z00_61;

				{	/* Jas/lib.scm 31 */
					long BgL_arg1048z00_66;

					BgL_arg1048z00_66 =
						(
						((BgL_nz00_7 >>
								(int) (((long) 16))) >>
							(int) (((long) 16))) >> (int) (((long) 16)));
					{	/* Jas/lib.scm 28 */
						long BgL_arg1037z00_227;

						{	/* Jas/lib.scm 28 */
							long BgL_arg1038z00_228;

							{	/* Jas/lib.scm 28 */
								long BgL_res1268z00_229;

								BgL_res1268z00_229 = (long) (((long) 65535));
								BgL_arg1038z00_228 = BgL_res1268z00_229;
							}
							BgL_arg1037z00_227 = (BgL_arg1048z00_66 & BgL_arg1038z00_228);
						}
						{	/* Jas/lib.scm 28 */
							long BgL_res1270z00_234;

							BgL_res1270z00_234 = (long) (BgL_arg1037z00_227);
							BgL_arg1039z00_58 = BgL_res1270z00_234;
				}}}
				{	/* Jas/lib.scm 32 */
					long BgL_arg1051z00_69;

					BgL_arg1051z00_69 =
						((BgL_nz00_7 >> (int) (((long) 16))) >> (int) (((long) 16)));
					{	/* Jas/lib.scm 28 */
						long BgL_arg1037z00_240;

						{	/* Jas/lib.scm 28 */
							long BgL_arg1038z00_241;

							{	/* Jas/lib.scm 28 */
								long BgL_res1273z00_242;

								BgL_res1273z00_242 = (long) (((long) 65535));
								BgL_arg1038z00_241 = BgL_res1273z00_242;
							}
							BgL_arg1037z00_240 = (BgL_arg1051z00_69 & BgL_arg1038z00_241);
						}
						{	/* Jas/lib.scm 28 */
							long BgL_res1275z00_247;

							BgL_res1275z00_247 = (long) (BgL_arg1037z00_240);
							BgL_arg1040z00_59 = BgL_res1275z00_247;
				}}}
				{	/* Jas/lib.scm 33 */
					long BgL_arg1053z00_71;

					BgL_arg1053z00_71 = (BgL_nz00_7 >> (int) (((long) 16)));
					{	/* Jas/lib.scm 28 */
						long BgL_arg1037z00_251;

						{	/* Jas/lib.scm 28 */
							long BgL_arg1038z00_252;

							{	/* Jas/lib.scm 28 */
								long BgL_res1277z00_253;

								BgL_res1277z00_253 = (long) (((long) 65535));
								BgL_arg1038z00_252 = BgL_res1277z00_253;
							}
							BgL_arg1037z00_251 = (BgL_arg1053z00_71 & BgL_arg1038z00_252);
						}
						{	/* Jas/lib.scm 28 */
							long BgL_res1279z00_258;

							BgL_res1279z00_258 = (long) (BgL_arg1037z00_251);
							BgL_arg1041z00_60 = BgL_res1279z00_258;
				}}}
				{	/* Jas/lib.scm 28 */
					long BgL_arg1037z00_260;

					{	/* Jas/lib.scm 28 */
						long BgL_arg1038z00_261;

						{	/* Jas/lib.scm 28 */
							long BgL_res1280z00_262;

							BgL_res1280z00_262 = (long) (((long) 65535));
							BgL_arg1038z00_261 = BgL_res1280z00_262;
						}
						BgL_arg1037z00_260 = (BgL_nz00_7 & BgL_arg1038z00_261);
					}
					{	/* Jas/lib.scm 28 */
						long BgL_res1282z00_267;

						BgL_res1282z00_267 = (long) (BgL_arg1037z00_260);
						BgL_arg1042z00_61 = BgL_res1282z00_267;
				}}
				{	/* Jas/lib.scm 31 */
					obj_t BgL_list1043z00_62;

					{	/* Jas/lib.scm 31 */
						obj_t BgL_arg1044z00_63;

						{	/* Jas/lib.scm 31 */
							obj_t BgL_arg1045z00_64;

							{	/* Jas/lib.scm 31 */
								obj_t BgL_arg1047z00_65;

								BgL_arg1047z00_65 =
									MAKE_YOUNG_PAIR(BINT(BgL_arg1042z00_61), BNIL);
								BgL_arg1045z00_64 =
									MAKE_YOUNG_PAIR(BINT(BgL_arg1041z00_60), BgL_arg1047z00_65);
							}
							BgL_arg1044z00_63 =
								MAKE_YOUNG_PAIR(BINT(BgL_arg1040z00_59), BgL_arg1045z00_64);
						}
						BgL_list1043z00_62 =
							MAKE_YOUNG_PAIR(BINT(BgL_arg1039z00_58), BgL_arg1044z00_63);
					}
					return BgL_list1043z00_62;
				}
			}
		}

	}



/* &w4elong */
	obj_t BGl_z62w4elongz62zzjas_libz00(obj_t BgL_envz00_571, obj_t BgL_nz00_572)
	{
		{	/* Jas/lib.scm 30 */
			return BGl_w4elongz00zzjas_libz00(BELONG_TO_LONG(BgL_nz00_572));
		}

	}



/* w4 */
	BGL_EXPORTED_DEF obj_t BGl_w4z00zzjas_libz00(long BgL_nz00_8)
	{
		{	/* Jas/lib.scm 36 */
			{	/* Jas/lib.scm 38 */
				long BgL_arg1054z00_72;
				long BgL_arg1055z00_73;
				long BgL_arg1056z00_74;
				long BgL_arg1057z00_75;

				BgL_arg1054z00_72 =
					(
					(((BgL_nz00_8 >>
								(int) (((long) 16))) >>
							(int) (((long) 16))) >> (int) (((long) 16))) & ((long) 65535));
				BgL_arg1055z00_73 =
					(
					((BgL_nz00_8 >>
							(int) (((long) 16))) >> (int) (((long) 16))) & ((long) 65535));
				BgL_arg1056z00_74 =
					((BgL_nz00_8 >> (int) (((long) 16))) & ((long) 65535));
				BgL_arg1057z00_75 = (BgL_nz00_8 & ((long) 65535));
				{	/* Jas/lib.scm 38 */
					obj_t BgL_list1058z00_76;

					{	/* Jas/lib.scm 38 */
						obj_t BgL_arg1059z00_77;

						{	/* Jas/lib.scm 38 */
							obj_t BgL_arg1060z00_78;

							{	/* Jas/lib.scm 38 */
								obj_t BgL_arg1061z00_79;

								BgL_arg1061z00_79 =
									MAKE_YOUNG_PAIR(BINT(BgL_arg1057z00_75), BNIL);
								BgL_arg1060z00_78 =
									MAKE_YOUNG_PAIR(BINT(BgL_arg1056z00_74), BgL_arg1061z00_79);
							}
							BgL_arg1059z00_77 =
								MAKE_YOUNG_PAIR(BINT(BgL_arg1055z00_73), BgL_arg1060z00_78);
						}
						BgL_list1058z00_76 =
							MAKE_YOUNG_PAIR(BINT(BgL_arg1054z00_72), BgL_arg1059z00_77);
					}
					return BgL_list1058z00_76;
				}
			}
		}

	}



/* &w4 */
	obj_t BGl_z62w4z62zzjas_libz00(obj_t BgL_envz00_573, obj_t BgL_nz00_574)
	{
		{	/* Jas/lib.scm 36 */
			return BGl_w4z00zzjas_libz00((long) CINT(BgL_nz00_574));
		}

	}



/* w4llong */
	BGL_EXPORTED_DEF obj_t BGl_w4llongz00zzjas_libz00(BGL_LONGLONG_T BgL_nz00_10)
	{
		{	/* Jas/lib.scm 46 */
			{	/* Jas/lib.scm 48 */
				long BgL_arg1099z00_88;
				long BgL_arg1100z00_89;
				long BgL_arg1101z00_90;
				long BgL_arg1103z00_91;

				{	/* Jas/lib.scm 48 */
					BGL_LONGLONG_T BgL_arg1114z00_96;

					BgL_arg1114z00_96 =
						(
						((BgL_nz00_10 >>
								(int) (((long) 16))) >>
							(int) (((long) 16))) >> (int) (((long) 16)));
					{	/* Jas/lib.scm 44 */
						BGL_LONGLONG_T BgL_arg1078z00_305;

						{	/* Jas/lib.scm 44 */
							BGL_LONGLONG_T BgL_arg1095z00_306;

							{	/* Jas/lib.scm 44 */
								BGL_LONGLONG_T BgL_res1301z00_307;

								BgL_res1301z00_307 = LONG_TO_LLONG(((long) 65535));
								BgL_arg1095z00_306 = BgL_res1301z00_307;
							}
							BgL_arg1078z00_305 = (BgL_arg1114z00_96 & BgL_arg1095z00_306);
						}
						{	/* Jas/lib.scm 44 */
							long BgL_res1303z00_312;

							BgL_res1303z00_312 = LLONG_TO_LONG(BgL_arg1078z00_305);
							BgL_arg1099z00_88 = BgL_res1303z00_312;
				}}}
				{	/* Jas/lib.scm 49 */
					BGL_LONGLONG_T BgL_arg1117z00_99;

					BgL_arg1117z00_99 =
						((BgL_nz00_10 >> (int) (((long) 16))) >> (int) (((long) 16)));
					{	/* Jas/lib.scm 44 */
						BGL_LONGLONG_T BgL_arg1078z00_318;

						{	/* Jas/lib.scm 44 */
							BGL_LONGLONG_T BgL_arg1095z00_319;

							{	/* Jas/lib.scm 44 */
								BGL_LONGLONG_T BgL_res1306z00_320;

								BgL_res1306z00_320 = LONG_TO_LLONG(((long) 65535));
								BgL_arg1095z00_319 = BgL_res1306z00_320;
							}
							BgL_arg1078z00_318 = (BgL_arg1117z00_99 & BgL_arg1095z00_319);
						}
						{	/* Jas/lib.scm 44 */
							long BgL_res1308z00_325;

							BgL_res1308z00_325 = LLONG_TO_LONG(BgL_arg1078z00_318);
							BgL_arg1100z00_89 = BgL_res1308z00_325;
				}}}
				{	/* Jas/lib.scm 50 */
					BGL_LONGLONG_T BgL_arg1121z00_101;

					BgL_arg1121z00_101 = (BgL_nz00_10 >> (int) (((long) 16)));
					{	/* Jas/lib.scm 44 */
						BGL_LONGLONG_T BgL_arg1078z00_329;

						{	/* Jas/lib.scm 44 */
							BGL_LONGLONG_T BgL_arg1095z00_330;

							{	/* Jas/lib.scm 44 */
								BGL_LONGLONG_T BgL_res1310z00_331;

								BgL_res1310z00_331 = LONG_TO_LLONG(((long) 65535));
								BgL_arg1095z00_330 = BgL_res1310z00_331;
							}
							BgL_arg1078z00_329 = (BgL_arg1121z00_101 & BgL_arg1095z00_330);
						}
						{	/* Jas/lib.scm 44 */
							long BgL_res1312z00_336;

							BgL_res1312z00_336 = LLONG_TO_LONG(BgL_arg1078z00_329);
							BgL_arg1101z00_90 = BgL_res1312z00_336;
				}}}
				{	/* Jas/lib.scm 44 */
					BGL_LONGLONG_T BgL_arg1078z00_338;

					{	/* Jas/lib.scm 44 */
						BGL_LONGLONG_T BgL_arg1095z00_339;

						{	/* Jas/lib.scm 44 */
							BGL_LONGLONG_T BgL_res1313z00_340;

							BgL_res1313z00_340 = LONG_TO_LLONG(((long) 65535));
							BgL_arg1095z00_339 = BgL_res1313z00_340;
						}
						BgL_arg1078z00_338 = (BgL_nz00_10 & BgL_arg1095z00_339);
					}
					{	/* Jas/lib.scm 44 */
						long BgL_res1315z00_345;

						BgL_res1315z00_345 = LLONG_TO_LONG(BgL_arg1078z00_338);
						BgL_arg1103z00_91 = BgL_res1315z00_345;
				}}
				{	/* Jas/lib.scm 48 */
					obj_t BgL_list1104z00_92;

					{	/* Jas/lib.scm 48 */
						obj_t BgL_arg1109z00_93;

						{	/* Jas/lib.scm 48 */
							obj_t BgL_arg1110z00_94;

							{	/* Jas/lib.scm 48 */
								obj_t BgL_arg1113z00_95;

								BgL_arg1113z00_95 =
									MAKE_YOUNG_PAIR(BINT(BgL_arg1103z00_91), BNIL);
								BgL_arg1110z00_94 =
									MAKE_YOUNG_PAIR(BINT(BgL_arg1101z00_90), BgL_arg1113z00_95);
							}
							BgL_arg1109z00_93 =
								MAKE_YOUNG_PAIR(BINT(BgL_arg1100z00_89), BgL_arg1110z00_94);
						}
						BgL_list1104z00_92 =
							MAKE_YOUNG_PAIR(BINT(BgL_arg1099z00_88), BgL_arg1109z00_93);
					}
					return BgL_list1104z00_92;
				}
			}
		}

	}



/* &w4llong */
	obj_t BGl_z62w4llongz62zzjas_libz00(obj_t BgL_envz00_575, obj_t BgL_nz00_576)
	{
		{	/* Jas/lib.scm 46 */
			return BGl_w4llongz00zzjas_libz00(BLLONG_TO_LLONG(BgL_nz00_576));
		}

	}



/* f2 */
	BGL_EXPORTED_DEF obj_t BGl_f2z00zzjas_libz00(float BgL_nz00_11)
	{
		{	/* Jas/lib.scm 53 */
			return
				BGl_stringzd2ze3shortlistz31zzjas_libz00(bgl_float_to_ieee_string
				(BgL_nz00_11));
		}

	}



/* &f2 */
	obj_t BGl_z62f2z62zzjas_libz00(obj_t BgL_envz00_577, obj_t BgL_nz00_578)
	{
		{	/* Jas/lib.scm 53 */
			return BGl_f2z00zzjas_libz00(REAL_TO_FLOAT(BgL_nz00_578));
		}

	}



/* f4 */
	BGL_EXPORTED_DEF obj_t BGl_f4z00zzjas_libz00(double BgL_nz00_12)
	{
		{	/* Jas/lib.scm 56 */
			return
				BGl_stringzd2ze3shortlistz31zzjas_libz00(bgl_double_to_ieee_string
				(BgL_nz00_12));
		}

	}



/* &f4 */
	obj_t BGl_z62f4z62zzjas_libz00(obj_t BgL_envz00_579, obj_t BgL_nz00_580)
	{
		{	/* Jas/lib.scm 56 */
			return BGl_f4z00zzjas_libz00(REAL_TO_DOUBLE(BgL_nz00_580));
		}

	}



/* string->shortlist */
	obj_t BGl_stringzd2ze3shortlistz31zzjas_libz00(obj_t BgL_sz00_13)
	{
		{	/* Jas/lib.scm 59 */
			return
				BGl_collectze70ze7zzjas_libz00(STRING_LENGTH(BgL_sz00_13), BgL_sz00_13,
				((long) 0));
		}

	}



/* collect~0 */
	obj_t BGl_collectze70ze7zzjas_libz00(long BgL_nz00_584, obj_t BgL_sz00_583,
		long BgL_iz00_106)
	{
		{	/* Jas/lib.scm 66 */
			if ((BgL_iz00_106 == BgL_nz00_584))
				{	/* Jas/lib.scm 62 */
					return BNIL;
				}
			else
				{	/* Jas/lib.scm 64 */
					long BgL_arg1126z00_109;
					obj_t BgL_arg1127z00_110;

					BgL_arg1126z00_109 =
						(
						((STRING_REF(BgL_sz00_583, BgL_iz00_106)) <<
							(int) (((long) 8))) |
						(STRING_REF(BgL_sz00_583, (BgL_iz00_106 + ((long) 1)))));
					BgL_arg1127z00_110 =
						BGl_collectze70ze7zzjas_libz00(BgL_nz00_584, BgL_sz00_583,
						(BgL_iz00_106 + ((long) 2)));
					return MAKE_YOUNG_PAIR(BINT(BgL_arg1126z00_109), BgL_arg1127z00_110);
				}
		}

	}



/* string->utf8 */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2ze3utf8z31zzjas_libz00(obj_t BgL_sz00_14)
	{
		{	/* Jas/lib.scm 69 */
			{	/* Jas/lib.scm 70 */
				obj_t BgL_arg1155z00_119;

				{	/* Jas/lib.scm 70 */
					long BgL_arg1156z00_120;

					BgL_arg1156z00_120 = BGl_utf8zd2lengthzd2zzjas_libz00(BgL_sz00_14);
					{	/* Jas/lib.scm 70 */

						BgL_arg1155z00_119 =
							make_string(BgL_arg1156z00_120, ((unsigned char) ' '));
				}}
				return
					BGl_producezd2utf8zd2zzjas_libz00(BgL_sz00_14, BgL_arg1155z00_119);
			}
		}

	}



/* &string->utf8 */
	obj_t BGl_z62stringzd2ze3utf8z53zzjas_libz00(obj_t BgL_envz00_581,
		obj_t BgL_sz00_582)
	{
		{	/* Jas/lib.scm 69 */
			return BGl_stringzd2ze3utf8z31zzjas_libz00(BgL_sz00_582);
		}

	}



/* utf8-length */
	long BGl_utf8zd2lengthzd2zzjas_libz00(obj_t BgL_sz00_20)
	{
		{	/* Jas/lib.scm 78 */
			{	/* Jas/lib.scm 79 */
				long BgL_nz00_125;

				BgL_nz00_125 = STRING_LENGTH(((obj_t) BgL_sz00_20));
				{
					long BgL_iz00_408;
					long BgL_rz00_409;

					BgL_iz00_408 = ((long) 0);
					BgL_rz00_409 = ((long) 0);
				BgL_walkz00_407:
					if ((BgL_iz00_408 == BgL_nz00_125))
						{	/* Jas/lib.scm 81 */
							return BgL_rz00_409;
						}
					else
						{
							long BgL_rz00_777;
							long BgL_iz00_775;

							BgL_iz00_775 = (BgL_iz00_408 + ((long) 1));
							BgL_rz00_777 =
								(BgL_rz00_409 +
								BGl_utf8zd2length1zd2zzjas_libz00(
									(STRING_REF(((obj_t) BgL_sz00_20), BgL_iz00_408))));
							BgL_rz00_409 = BgL_rz00_777;
							BgL_iz00_408 = BgL_iz00_775;
							goto BgL_walkz00_407;
						}
				}
			}
		}

	}



/* utf8-length1 */
	long BGl_utf8zd2length1zd2zzjas_libz00(long BgL_cnz00_21)
	{
		{	/* Jas/lib.scm 86 */
			if ((BgL_cnz00_21 == ((long) 0)))
				{	/* Jas/lib.scm 88 */
					return ((long) 2);
				}
			else
				{	/* Jas/lib.scm 88 */
					if ((BgL_cnz00_21 < ((long) 128)))
						{	/* Jas/lib.scm 89 */
							return ((long) 1);
						}
					else
						{	/* Jas/lib.scm 89 */
							if ((BgL_cnz00_21 < ((long) 2048)))
								{	/* Jas/lib.scm 90 */
									return ((long) 2);
								}
							else
								{	/* Jas/lib.scm 90 */
									return ((long) 3);
		}}}}

	}



/* produce-utf8 */
	obj_t BGl_producezd2utf8zd2zzjas_libz00(obj_t BgL_sz00_22, obj_t BgL_s8z00_23)
	{
		{	/* Jas/lib.scm 93 */
			{	/* Jas/lib.scm 94 */
				long BgL_nz00_146;

				BgL_nz00_146 = STRING_LENGTH(((obj_t) BgL_sz00_22));
				{
					long BgL_iz00_148;
					long BgL_jz00_149;

					BgL_iz00_148 = ((long) 0);
					BgL_jz00_149 = ((long) 0);
				BgL_zc3z04anonymousza31181ze3z87_150:
					if ((BgL_iz00_148 == BgL_nz00_146))
						{	/* Jas/lib.scm 96 */
							return BgL_s8z00_23;
						}
					else
						{	/* Jas/lib.scm 98 */
							long BgL_arg1186z00_152;
							long BgL_arg1190z00_153;

							BgL_arg1186z00_152 = (BgL_iz00_148 + ((long) 1));
							{	/* Jas/lib.scm 98 */
								long BgL_arg1194z00_154;

								{	/* Jas/lib.scm 98 */
									long BgL_arg1197z00_155;

									BgL_arg1197z00_155 =
										(STRING_REF(((obj_t) BgL_sz00_22), BgL_iz00_148));
									BgL_arg1194z00_154 =
										BGl_producezd2utf8zd21z00zzjas_libz00(BgL_s8z00_23,
										BgL_jz00_149, BgL_arg1197z00_155);
								}
								BgL_arg1190z00_153 = (BgL_jz00_149 + BgL_arg1194z00_154);
							}
							{
								long BgL_jz00_800;
								long BgL_iz00_799;

								BgL_iz00_799 = BgL_arg1186z00_152;
								BgL_jz00_800 = BgL_arg1190z00_153;
								BgL_jz00_149 = BgL_jz00_800;
								BgL_iz00_148 = BgL_iz00_799;
								goto BgL_zc3z04anonymousza31181ze3z87_150;
							}
						}
				}
			}
		}

	}



/* produce-utf8-1 */
	long BGl_producezd2utf8zd21z00zzjas_libz00(obj_t BgL_s8z00_24,
		long BgL_jz00_25, long BgL_cnz00_26)
	{
		{	/* Jas/lib.scm 101 */
			if ((BgL_cnz00_26 == ((long) 0)))
				{	/* Jas/lib.scm 105 */
					{	/* Jas/lib.scm 76 */
						unsigned char BgL_auxz00_805;
						long BgL_tmpz00_803;

						BgL_auxz00_805 = (((long) 192));
						BgL_tmpz00_803 = (BgL_jz00_25 + ((long) 0));
						STRING_SET(BgL_s8z00_24, BgL_tmpz00_803, BgL_auxz00_805);
					}
					{	/* Jas/lib.scm 76 */
						unsigned char BgL_auxz00_810;
						long BgL_tmpz00_808;

						BgL_auxz00_810 = (((long) 128));
						BgL_tmpz00_808 = (BgL_jz00_25 + ((long) 1));
						STRING_SET(BgL_s8z00_24, BgL_tmpz00_808, BgL_auxz00_810);
					}
					return ((long) 2);
				}
			else
				{	/* Jas/lib.scm 105 */
					if ((BgL_cnz00_26 < ((long) 128)))
						{	/* Jas/lib.scm 109 */
							{	/* Jas/lib.scm 76 */
								unsigned char BgL_auxz00_817;
								long BgL_tmpz00_815;

								BgL_auxz00_817 = (BgL_cnz00_26);
								BgL_tmpz00_815 = (BgL_jz00_25 + ((long) 0));
								STRING_SET(BgL_s8z00_24, BgL_tmpz00_815, BgL_auxz00_817);
							}
							return ((long) 1);
						}
					else
						{	/* Jas/lib.scm 109 */
							if ((BgL_cnz00_26 < ((long) 2048)))
								{	/* Jas/lib.scm 112 */
									{	/* Jas/lib.scm 113 */
										long BgL_arg1208z00_164;

										BgL_arg1208z00_164 =
											(((long) 192) | (BgL_cnz00_26 >> (int) (((long) 6))));
										{	/* Jas/lib.scm 76 */
											unsigned char BgL_auxz00_827;
											long BgL_tmpz00_825;

											BgL_auxz00_827 = (BgL_arg1208z00_164);
											BgL_tmpz00_825 = (BgL_jz00_25 + ((long) 0));
											STRING_SET(BgL_s8z00_24, BgL_tmpz00_825, BgL_auxz00_827);
									}}
									{	/* Jas/lib.scm 114 */
										long BgL_arg1216z00_166;

										BgL_arg1216z00_166 =
											(((long) 128) | (BgL_cnz00_26 & ((long) 63)));
										{	/* Jas/lib.scm 76 */
											unsigned char BgL_auxz00_834;
											long BgL_tmpz00_832;

											BgL_auxz00_834 = (BgL_arg1216z00_166);
											BgL_tmpz00_832 = (BgL_jz00_25 + ((long) 1));
											STRING_SET(BgL_s8z00_24, BgL_tmpz00_832, BgL_auxz00_834);
									}}
									return ((long) 2);
								}
							else
								{	/* Jas/lib.scm 112 */
									{	/* Jas/lib.scm 117 */
										long BgL_arg1223z00_168;

										BgL_arg1223z00_168 =
											(((long) 224) | (BgL_cnz00_26 >> (int) (((long) 12))));
										{	/* Jas/lib.scm 76 */
											unsigned char BgL_auxz00_842;
											long BgL_tmpz00_840;

											BgL_auxz00_842 = (BgL_arg1223z00_168);
											BgL_tmpz00_840 = (BgL_jz00_25 + ((long) 0));
											STRING_SET(BgL_s8z00_24, BgL_tmpz00_840, BgL_auxz00_842);
									}}
									{	/* Jas/lib.scm 118 */
										long BgL_arg1227z00_170;

										BgL_arg1227z00_170 =
											(((long) 128) |
											((BgL_cnz00_26 >> (int) (((long) 6))) & ((long) 63)));
										{	/* Jas/lib.scm 76 */
											unsigned char BgL_auxz00_851;
											long BgL_tmpz00_849;

											BgL_auxz00_851 = (BgL_arg1227z00_170);
											BgL_tmpz00_849 = (BgL_jz00_25 + ((long) 1));
											STRING_SET(BgL_s8z00_24, BgL_tmpz00_849, BgL_auxz00_851);
									}}
									{	/* Jas/lib.scm 119 */
										long BgL_arg1239z00_173;

										BgL_arg1239z00_173 =
											(((long) 128) | (BgL_cnz00_26 & ((long) 63)));
										{	/* Jas/lib.scm 76 */
											unsigned char BgL_auxz00_858;
											long BgL_tmpz00_856;

											BgL_auxz00_858 = (BgL_arg1239z00_173);
											BgL_tmpz00_856 = (BgL_jz00_25 + ((long) 2));
											STRING_SET(BgL_s8z00_24, BgL_tmpz00_856, BgL_auxz00_858);
									}}
									return ((long) 3);
		}}}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_libz00()
	{
		{	/* Jas/lib.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_libz00()
	{
		{	/* Jas/lib.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_libz00()
	{
		{	/* Jas/lib.scm 1 */
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
