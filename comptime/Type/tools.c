/*===========================================================================*/
/*   (Type/tools.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/tools.scm) */
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


	static obj_t BGl_z62typezd2namezd2sanszd2z42zf2zztype_toolsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_replacezd2z42z90zztype_toolsz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zztype_toolsz00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztype_toolsz00();
	BGL_IMPORT obj_t make_string(long, unsigned char);
	BGL_EXPORTED_DECL obj_t BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62z42zd2inzd2namezf3zd3zztype_toolsz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztype_toolsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_toolsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl_z62za2zd2namezf3ze1zztype_toolsz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztype_toolsz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62makezd2typedzd2declarationz62zztype_toolsz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_za2zd2namezf3z83zztype_toolsz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_toolsz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztype_toolsz00();
	static obj_t BGl_z62stringzd2sanszd2z42z20zztype_toolsz00(obj_t, obj_t);
	static obj_t BGl_z62makezd2pointerzd2tozd2namezb0zztype_toolsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00(BgL_typez00_bglt);
	static obj_t BGl_z62replacezd2z42zf2zztype_toolsz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pointerzd2tozd2namezd2envz00zztype_toolsz00,
		BgL_bgl_za762makeza7d2pointe1167z00,
		BGl_z62makezd2pointerzd2tozd2namezb0zztype_toolsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z42zd2inzd2namezf3zd2envz63zztype_toolsz00,
		BgL_bgl_za762za742za7d2inza7d2na1168z00,
		BGl_z62z42zd2inzd2namezf3zd3zztype_toolsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2namezd2sanszd2z42zd2envz42zztype_toolsz00,
		BgL_bgl_za762typeza7d2nameza7d1169za7,
		BGl_z62typezd2namezd2sanszd2z42zf2zztype_toolsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2typedzd2declarationzd2envzd2zztype_toolsz00,
		BgL_bgl_za762makeza7d2typedza71170za7,
		BGl_z62makezd2typedzd2declarationz62zztype_toolsz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_replacezd2z42zd2envz42zztype_toolsz00,
		BgL_bgl_za762replaceza7d2za7421171za7,
		BGl_z62replacezd2z42zf2zztype_toolsz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1161z00zztype_toolsz00,
		BgL_bgl_string1161za700za7za7t1172za7, " ", 1);
	      DEFINE_STRING(BGl_string1162z00zztype_toolsz00,
		BgL_bgl_string1162za700za7za7t1173za7, "(*)", 3);
	      DEFINE_STRING(BGl_string1163z00zztype_toolsz00,
		BgL_bgl_string1163za700za7za7t1174za7, " *", 2);
	      DEFINE_STRING(BGl_string1164z00zztype_toolsz00,
		BgL_bgl_string1164za700za7za7t1175za7, "make-pointer-to-name", 20);
	      DEFINE_STRING(BGl_string1165z00zztype_toolsz00,
		BgL_bgl_string1165za700za7za7t1176za7, "Unbound foreign type", 20);
	      DEFINE_STRING(BGl_string1166z00zztype_toolsz00,
		BgL_bgl_string1166za700za7za7t1177za7, "type_tools", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stringzd2sanszd2z42zd2envz90zztype_toolsz00,
		BgL_bgl_za762stringza7d2sans1178z00,
		BGl_z62stringzd2sanszd2z42z20zztype_toolsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_za2zd2namezf3zd2envz51zztype_toolsz00,
		BgL_bgl_za762za7a2za7d2nameza7f31179z00,
		BGl_z62za2zd2namezf3ze1zztype_toolsz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztype_toolsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long
		BgL_checksumz00_258, char *BgL_fromz00_259)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_toolsz00))
				{
					BGl_requirezd2initializa7ationz75zztype_toolsz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztype_toolsz00();
					BGl_libraryzd2moduleszd2initz00zztype_toolsz00();
					BGl_importedzd2moduleszd2initz00zztype_toolsz00();
					return BGl_methodzd2initzd2zztype_toolsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_toolsz00()
	{
		{	/* Type/tools.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "type_tools");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"type_tools");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"type_tools");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"type_tools");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_tools");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztype_toolsz00()
	{
		{	/* Type/tools.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* string-sans-$ */
	BGL_EXPORTED_DEF obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t
		BgL_stringz00_3)
	{
		{	/* Type/tools.scm 33 */
			{	/* Type/tools.scm 34 */
				obj_t BgL_newz00_79;

				BgL_newz00_79 =
					BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_stringz00_3);
				{	/* Type/tools.scm 35 */
					long BgL_g1047z00_80;

					BgL_g1047z00_80 = (STRING_LENGTH(BgL_newz00_79) - ((long) 1));
					{
						long BgL_iz00_82;

						BgL_iz00_82 = BgL_g1047z00_80;
					BgL_zc3z04anonymousza31054ze3z87_83:
						if ((BgL_iz00_82 == ((long) -1)))
							{	/* Type/tools.scm 37 */
								return BgL_newz00_79;
							}
						else
							{	/* Type/tools.scm 37 */
								if (
									(STRING_REF(BgL_newz00_79,
											BgL_iz00_82) == ((unsigned char) '$')))
									{	/* Type/tools.scm 39 */
										STRING_SET(BgL_newz00_79, BgL_iz00_82,
											((unsigned char) ' '));
										{
											long BgL_iz00_282;

											BgL_iz00_282 = (BgL_iz00_82 - ((long) 1));
											BgL_iz00_82 = BgL_iz00_282;
											goto BgL_zc3z04anonymousza31054ze3z87_83;
										}
									}
								else
									{
										long BgL_iz00_284;

										BgL_iz00_284 = (BgL_iz00_82 - ((long) 1));
										BgL_iz00_82 = BgL_iz00_284;
										goto BgL_zc3z04anonymousza31054ze3z87_83;
									}
							}
					}
				}
			}
		}

	}



/* &string-sans-$ */
	obj_t BGl_z62stringzd2sanszd2z42z20zztype_toolsz00(obj_t BgL_envz00_242,
		obj_t BgL_stringz00_243)
	{
		{	/* Type/tools.scm 33 */
			return BGl_stringzd2sanszd2z42z42zztype_toolsz00(BgL_stringz00_243);
		}

	}



/* type-name-sans-$ */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(BgL_typez00_bglt
		BgL_typez00_4)
	{
		{	/* Type/tools.scm 48 */
			{	/* Type/tools.scm 49 */
				obj_t BgL_tnamez00_92;

				BgL_tnamez00_92 =
					(((BgL_typez00_bglt) COBJECT(BgL_typez00_4))->BgL_namez00);
				if (CBOOL((((BgL_typez00_bglt) COBJECT(BgL_typez00_4))->BgL_z42z42)))
					{	/* Type/tools.scm 50 */
						return BGl_stringzd2sanszd2z42z42zztype_toolsz00(BgL_tnamez00_92);
					}
				else
					{	/* Type/tools.scm 50 */
						return BgL_tnamez00_92;
					}
			}
		}

	}



/* &type-name-sans-$ */
	obj_t BGl_z62typezd2namezd2sanszd2z42zf2zztype_toolsz00(obj_t BgL_envz00_244,
		obj_t BgL_typez00_245)
	{
		{	/* Type/tools.scm 48 */
			return
				BGl_typezd2namezd2sanszd2z42z90zztype_toolsz00(
				((BgL_typez00_bglt) BgL_typez00_245));
		}

	}



/* $-in-name? */
	BGL_EXPORTED_DEF obj_t BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(obj_t
		BgL_namez00_5)
	{
		{	/* Type/tools.scm 59 */
			{
				long BgL_iz00_96;

				{	/* Type/tools.scm 60 */
					bool_t BgL_tmpz00_294;

					BgL_iz00_96 = (STRING_LENGTH(BgL_namez00_5) - ((long) 1));
				BgL_zc3z04anonymousza31063ze3z87_97:
					if ((BgL_iz00_96 == ((long) -1)))
						{	/* Type/tools.scm 62 */
							BgL_tmpz00_294 = ((bool_t) 0);
						}
					else
						{	/* Type/tools.scm 62 */
							if (
								(STRING_REF(BgL_namez00_5,
										BgL_iz00_96) == ((unsigned char) '$')))
								{	/* Type/tools.scm 64 */
									BgL_tmpz00_294 = ((bool_t) 1);
								}
							else
								{
									long BgL_iz00_300;

									BgL_iz00_300 = (BgL_iz00_96 - ((long) 1));
									BgL_iz00_96 = BgL_iz00_300;
									goto BgL_zc3z04anonymousza31063ze3z87_97;
								}
						}
					return BBOOL(BgL_tmpz00_294);
				}
			}
		}

	}



/* &$-in-name? */
	obj_t BGl_z62z42zd2inzd2namezf3zd3zztype_toolsz00(obj_t BgL_envz00_246,
		obj_t BgL_namez00_247)
	{
		{	/* Type/tools.scm 59 */
			return BGl_z42zd2inzd2namezf3zb1zztype_toolsz00(BgL_namez00_247);
		}

	}



/* *-name? */
	BGL_EXPORTED_DEF obj_t BGl_za2zd2namezf3z83zztype_toolsz00(obj_t
		BgL_namez00_6)
	{
		{	/* Type/tools.scm 74 */
			return
				BBOOL(
				(STRING_REF(BgL_namez00_6,
						(STRING_LENGTH(BgL_namez00_6) - ((long) 1))) ==
					((unsigned char) '*')));
		}

	}



/* &*-name? */
	obj_t BGl_z62za2zd2namezf3ze1zztype_toolsz00(obj_t BgL_envz00_248,
		obj_t BgL_namez00_249)
	{
		{	/* Type/tools.scm 74 */
			return BGl_za2zd2namezf3z83zztype_toolsz00(BgL_namez00_249);
		}

	}



/* replace-$ */
	BGL_EXPORTED_DEF obj_t BGl_replacezd2z42z90zztype_toolsz00(obj_t
		BgL_stringz00_7, obj_t BgL_rplacz00_8)
	{
		{	/* Type/tools.scm 80 */
			{	/* Type/tools.scm 81 */
				long BgL_lenzd2stringzd2_108;

				BgL_lenzd2stringzd2_108 = STRING_LENGTH(BgL_stringz00_7);
				{	/* Type/tools.scm 81 */
					long BgL_lenzd2rplaczd2_109;

					BgL_lenzd2rplaczd2_109 = STRING_LENGTH(BgL_rplacz00_8);
					{	/* Type/tools.scm 82 */
						long BgL_lenz00_110;

						BgL_lenz00_110 =
							((BgL_lenzd2stringzd2_108 + BgL_lenzd2rplaczd2_109) - ((long) 1));
						{	/* Type/tools.scm 83 */
							obj_t BgL_newz00_111;

							{	/* Type/tools.scm 84 */

								BgL_newz00_111 =
									make_string(BgL_lenz00_110, ((unsigned char) ' '));
							}
							{	/* Type/tools.scm 84 */

								{
									long BgL_rz00_113;
									long BgL_wz00_114;

									BgL_rz00_113 = ((long) 0);
									BgL_wz00_114 = ((long) 0);
								BgL_zc3z04anonymousza31101ze3z87_115:
									if ((BgL_rz00_113 == BgL_lenzd2stringzd2_108))
										{	/* Type/tools.scm 88 */
											return BgL_newz00_111;
										}
									else
										{	/* Type/tools.scm 88 */
											if (
												(STRING_REF(BgL_stringz00_7,
														BgL_rz00_113) == ((unsigned char) '$')))
												{
													long BgL_wz00_120;
													long BgL_rrz00_121;

													BgL_wz00_120 = BgL_wz00_114;
													BgL_rrz00_121 = ((long) 0);
												BgL_zc3z04anonymousza31105ze3z87_122:
													if ((BgL_rrz00_121 == BgL_lenzd2rplaczd2_109))
														{
															long BgL_wz00_326;
															long BgL_rz00_324;

															BgL_rz00_324 = (BgL_rz00_113 + ((long) 1));
															BgL_wz00_326 = BgL_wz00_120;
															BgL_wz00_114 = BgL_wz00_326;
															BgL_rz00_113 = BgL_rz00_324;
															goto BgL_zc3z04anonymousza31101ze3z87_115;
														}
													else
														{	/* Type/tools.scm 94 */
															{	/* Type/tools.scm 97 */
																unsigned char BgL_tmpz00_327;

																BgL_tmpz00_327 =
																	STRING_REF(BgL_rplacz00_8, BgL_rrz00_121);
																STRING_SET(BgL_newz00_111, BgL_wz00_120,
																	BgL_tmpz00_327);
															}
															{
																long BgL_rrz00_332;
																long BgL_wz00_330;

																BgL_wz00_330 = (BgL_wz00_120 + ((long) 1));
																BgL_rrz00_332 = (BgL_rrz00_121 + ((long) 1));
																BgL_rrz00_121 = BgL_rrz00_332;
																BgL_wz00_120 = BgL_wz00_330;
																goto BgL_zc3z04anonymousza31105ze3z87_122;
															}
														}
												}
											else
												{	/* Type/tools.scm 90 */
													{	/* Type/tools.scm 100 */
														unsigned char BgL_tmpz00_334;

														BgL_tmpz00_334 =
															STRING_REF(BgL_stringz00_7, BgL_rz00_113);
														STRING_SET(BgL_newz00_111, BgL_wz00_114,
															BgL_tmpz00_334);
													}
													{
														long BgL_wz00_339;
														long BgL_rz00_337;

														BgL_rz00_337 = (BgL_rz00_113 + ((long) 1));
														BgL_wz00_339 = (BgL_wz00_114 + ((long) 1));
														BgL_wz00_114 = BgL_wz00_339;
														BgL_rz00_113 = BgL_rz00_337;
														goto BgL_zc3z04anonymousza31101ze3z87_115;
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



/* &replace-$ */
	obj_t BGl_z62replacezd2z42zf2zztype_toolsz00(obj_t BgL_envz00_250,
		obj_t BgL_stringz00_251, obj_t BgL_rplacz00_252)
	{
		{	/* Type/tools.scm 80 */
			return
				BGl_replacezd2z42z90zztype_toolsz00(BgL_stringz00_251,
				BgL_rplacz00_252);
		}

	}



/* make-typed-declaration */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2typedzd2declarationz00zztype_toolsz00(BgL_typez00_bglt
		BgL_typez00_9, obj_t BgL_idz00_10)
	{
		{	/* Type/tools.scm 106 */
			{	/* Type/tools.scm 107 */
				obj_t BgL_tnamez00_137;

				BgL_tnamez00_137 =
					(((BgL_typez00_bglt) COBJECT(BgL_typez00_9))->BgL_namez00);
				if (CBOOL((((BgL_typez00_bglt) COBJECT(BgL_typez00_9))->BgL_z42z42)))
					{	/* Type/tools.scm 109 */
						return
							BGl_replacezd2z42z90zztype_toolsz00(BgL_tnamez00_137,
							BgL_idz00_10);
					}
				else
					{	/* Type/tools.scm 109 */
						return
							string_append_3(BgL_tnamez00_137,
							BGl_string1161z00zztype_toolsz00, BgL_idz00_10);
					}
			}
		}

	}



/* &make-typed-declaration */
	obj_t BGl_z62makezd2typedzd2declarationz62zztype_toolsz00(obj_t
		BgL_envz00_253, obj_t BgL_typez00_254, obj_t BgL_idz00_255)
	{
		{	/* Type/tools.scm 106 */
			return
				BGl_makezd2typedzd2declarationz00zztype_toolsz00(
				((BgL_typez00_bglt) BgL_typez00_254), BgL_idz00_255);
		}

	}



/* make-pointer-to-name */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00(BgL_typez00_bglt
		BgL_typez00_11)
	{
		{	/* Type/tools.scm 117 */
			{	/* Type/tools.scm 118 */
				obj_t BgL_tnamez00_139;

				BgL_tnamez00_139 =
					(((BgL_typez00_bglt) COBJECT(BgL_typez00_11))->BgL_namez00);
				if (STRINGP(BgL_tnamez00_139))
					{	/* Type/tools.scm 119 */
						if (CBOOL(
								(((BgL_typez00_bglt) COBJECT(BgL_typez00_11))->BgL_z42z42)))
							{	/* Type/tools.scm 122 */
								return
									BGl_replacezd2z42z90zztype_toolsz00(BgL_tnamez00_139,
									BGl_string1162z00zztype_toolsz00);
							}
						else
							{	/* Type/tools.scm 122 */
								return
									string_append(BgL_tnamez00_139,
									BGl_string1163z00zztype_toolsz00);
							}
					}
				else
					{	/* Type/tools.scm 119 */
						return
							BGl_errorz00zz__errorz00(BGl_string1164z00zztype_toolsz00,
							BGl_string1165z00zztype_toolsz00,
							(((BgL_typez00_bglt) COBJECT(BgL_typez00_11))->BgL_idz00));
					}
			}
		}

	}



/* &make-pointer-to-name */
	obj_t BGl_z62makezd2pointerzd2tozd2namezb0zztype_toolsz00(obj_t
		BgL_envz00_256, obj_t BgL_typez00_257)
	{
		{	/* Type/tools.scm 117 */
			return
				BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00(
				((BgL_typez00_bglt) BgL_typez00_257));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztype_toolsz00()
	{
		{	/* Type/tools.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_toolsz00()
	{
		{	/* Type/tools.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_toolsz00()
	{
		{	/* Type/tools.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_toolsz00()
	{
		{	/* Type/tools.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1166z00zztype_toolsz00));
		}

	}

#ifdef __cplusplus
}
#endif
