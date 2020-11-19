/*===========================================================================*/
/*   (Unsafe/hmac.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/hmac.scm -indent -o objs/obj_u/Unsafe/hmac.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zz__hmacz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__hmacz00();
	extern obj_t BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__hmacz00();
	static obj_t BGl_methodzd2initzd2zz__hmacz00();
	extern obj_t make_string(long, unsigned char);
	extern obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__hmacz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__base64z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_gczd2rootszd2initz00zz__hmacz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__hmacz00();
	BGL_EXPORTED_DECL obj_t BGl_hmaczd2stringzd2zz__hmacz00(obj_t, obj_t, obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	extern obj_t make_string_sans_fill(long);
	static obj_t BGl_z62hmaczd2stringzb0zz__hmacz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hmaczd2stringzd2envz00zz__hmacz00,
		BgL_bgl_za762hmacza7d2string1680z00, BGl_z62hmaczd2stringzb0zz__hmacz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1675z00zz__hmacz00,
		BgL_bgl_string1675za700za7za7_1681za7, "/tmp/4.4a/runtime/Unsafe/hmac.scm",
		33);
	      DEFINE_STRING(BGl_string1676z00zz__hmacz00,
		BgL_bgl_string1676za700za7za7_1682za7, "&hmac-string", 12);
	      DEFINE_STRING(BGl_string1677z00zz__hmacz00,
		BgL_bgl_string1677za700za7za7_1683za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1678z00zz__hmacz00,
		BgL_bgl_string1678za700za7za7_1684za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1679z00zz__hmacz00,
		BgL_bgl_string1679za700za7za7_1685za7, "__hmac", 6);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__hmacz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__hmacz00(long
		BgL_checksumz00_2024, char *BgL_fromz00_2025)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__hmacz00))
				{
					BGl_requirezd2initializa7ationz75zz__hmacz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__hmacz00();
					BGl_importedzd2moduleszd2initz00zz__hmacz00();
					return BGl_methodzd2initzd2zz__hmacz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__hmacz00()
	{
		{	/* Unsafe/hmac.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* hmac-string */
	BGL_EXPORTED_DEF obj_t BGl_hmaczd2stringzd2zz__hmacz00(obj_t BgL_keyz00_3,
		obj_t BgL_messagez00_4, obj_t BgL_hashz00_5)
	{
		{	/* Unsafe/hmac.scm 57 */
			{	/* Unsafe/hmac.scm 61 */
				obj_t BgL_keybz00_1227;

				BgL_keybz00_1227 = make_string(((long) 64), ((unsigned char) '\000'));
				{	/* Unsafe/hmac.scm 63 */
					obj_t BgL_ixorz00_1228;

					BgL_ixorz00_1228 = make_string_sans_fill(((long) 64));
					{	/* Unsafe/hmac.scm 64 */
						obj_t BgL_oxorz00_1229;

						BgL_oxorz00_1229 = make_string_sans_fill(((long) 64));
						{	/* Unsafe/hmac.scm 65 */

							{	/* Unsafe/hmac.scm 67 */
								long BgL_keyzd2lengthzd2_1230;

								BgL_keyzd2lengthzd2_1230 = STRING_LENGTH(BgL_keyz00_3);
								if ((BgL_keyzd2lengthzd2_1230 > ((long) 64)))
									{	/* Unsafe/hmac.scm 69 */
										obj_t BgL_arg1194z00_1232;

										{	/* Unsafe/hmac.scm 69 */
											obj_t BgL_arg1197z00_1233;

											BgL_arg1197z00_1233 =
												PROCEDURE_ENTRY(BgL_hashz00_5) (BgL_hashz00_5,
												BgL_keyz00_3, BEOA);
											BgL_arg1194z00_1232 =
												BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00
												(BgL_arg1197z00_1233);
										}
										blit_string(BgL_arg1194z00_1232, ((long) 0),
											BgL_keybz00_1227, ((long) 0), ((long) 16));
									}
								else
									{	/* Unsafe/hmac.scm 68 */
										blit_string(BgL_keyz00_3, ((long) 0), BgL_keybz00_1227,
											((long) 0), BgL_keyzd2lengthzd2_1230);
							}}
							{
								long BgL_iz00_1235;

								BgL_iz00_1235 = ((long) 0);
							BgL_zc3z04anonymousza31198ze3z87_1236:
								if ((BgL_iz00_1235 < ((long) 64)))
									{	/* Unsafe/hmac.scm 74 */
										long BgL_xiz00_1238;

										BgL_xiz00_1238 =
											(STRING_REF(BgL_keybz00_1227, BgL_iz00_1235));
										{	/* Unsafe/hmac.scm 75 */
											unsigned char BgL_tmpz00_2050;

											BgL_tmpz00_2050 = ((((long) 54) ^ BgL_xiz00_1238));
											STRING_SET(BgL_ixorz00_1228, BgL_iz00_1235,
												BgL_tmpz00_2050);
										}
										{	/* Unsafe/hmac.scm 76 */
											unsigned char BgL_tmpz00_2054;

											BgL_tmpz00_2054 = ((((long) 92) ^ BgL_xiz00_1238));
											STRING_SET(BgL_oxorz00_1229, BgL_iz00_1235,
												BgL_tmpz00_2054);
										}
										{
											long BgL_iz00_2058;

											BgL_iz00_2058 = (BgL_iz00_1235 + ((long) 1));
											BgL_iz00_1235 = BgL_iz00_2058;
											goto BgL_zc3z04anonymousza31198ze3z87_1236;
										}
									}
								else
									{	/* Unsafe/hmac.scm 73 */
										((bool_t) 0);
									}
							}
							{	/* Unsafe/hmac.scm 82 */
								obj_t BgL_arg1225z00_1246;

								{	/* Unsafe/hmac.scm 82 */
									obj_t BgL_arg1227z00_1247;

									{	/* Unsafe/hmac.scm 82 */
										obj_t BgL_arg1229z00_1248;

										{	/* Unsafe/hmac.scm 82 */
											obj_t BgL_arg1232z00_1249;

											BgL_arg1232z00_1249 =
												string_append(BgL_ixorz00_1228, BgL_messagez00_4);
											BgL_arg1229z00_1248 =
												PROCEDURE_ENTRY(BgL_hashz00_5) (BgL_hashz00_5,
												BgL_arg1232z00_1249, BEOA);
										}
										BgL_arg1227z00_1247 =
											BGl_stringzd2hexzd2internz12z12zz__r4_strings_6_7z00
											(BgL_arg1229z00_1248);
									}
									BgL_arg1225z00_1246 =
										string_append(BgL_oxorz00_1229, BgL_arg1227z00_1247);
								}
								return
									PROCEDURE_ENTRY(BgL_hashz00_5) (BgL_hashz00_5,
									BgL_arg1225z00_1246, BEOA);
							}
						}
					}
				}
			}
		}

	}



/* &hmac-string */
	obj_t BGl_z62hmaczd2stringzb0zz__hmacz00(obj_t BgL_envz00_2014,
		obj_t BgL_keyz00_2015, obj_t BgL_messagez00_2016, obj_t BgL_hashz00_2017)
	{
		{	/* Unsafe/hmac.scm 57 */
			{	/* Unsafe/hmac.scm 59 */
				obj_t BgL_auxz00_2085;
				obj_t BgL_auxz00_2078;
				obj_t BgL_auxz00_2071;

				if (PROCEDUREP(BgL_hashz00_2017))
					{	/* Unsafe/hmac.scm 59 */
						BgL_auxz00_2085 = BgL_hashz00_2017;
					}
				else
					{
						obj_t BgL_auxz00_2088;

						BgL_auxz00_2088 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1675z00zz__hmacz00,
							BINT(((long) 2036)), BGl_string1676z00zz__hmacz00,
							BGl_string1678z00zz__hmacz00, BgL_hashz00_2017);
						FAILURE(BgL_auxz00_2088, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_messagez00_2016))
					{	/* Unsafe/hmac.scm 59 */
						BgL_auxz00_2078 = BgL_messagez00_2016;
					}
				else
					{
						obj_t BgL_auxz00_2081;

						BgL_auxz00_2081 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1675z00zz__hmacz00,
							BINT(((long) 2036)), BGl_string1676z00zz__hmacz00,
							BGl_string1677z00zz__hmacz00, BgL_messagez00_2016);
						FAILURE(BgL_auxz00_2081, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_keyz00_2015))
					{	/* Unsafe/hmac.scm 59 */
						BgL_auxz00_2071 = BgL_keyz00_2015;
					}
				else
					{
						obj_t BgL_auxz00_2074;

						BgL_auxz00_2074 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1675z00zz__hmacz00,
							BINT(((long) 2036)), BGl_string1676z00zz__hmacz00,
							BGl_string1677z00zz__hmacz00, BgL_keyz00_2015);
						FAILURE(BgL_auxz00_2074, BFALSE, BFALSE);
					}
				return
					BGl_hmaczd2stringzd2zz__hmacz00(BgL_auxz00_2071, BgL_auxz00_2078,
					BgL_auxz00_2085);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__hmacz00()
	{
		{	/* Unsafe/hmac.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__hmacz00()
	{
		{	/* Unsafe/hmac.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__hmacz00()
	{
		{	/* Unsafe/hmac.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__hmacz00()
	{
		{	/* Unsafe/hmac.scm 15 */
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1679z00zz__hmacz00));
			return
				BGl_modulezd2initializa7ationz75zz__base64z00(((long) 67813499),
				BSTRING_TO_STRING(BGl_string1679z00zz__hmacz00));
		}

	}

#ifdef __cplusplus
}
#endif
