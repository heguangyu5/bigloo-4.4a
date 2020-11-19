/*===========================================================================*/
/*   (Module/include.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/include.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;


	static obj_t
		BGl_z62getzd2includezd2consumedzd2directivezb0zzmodule_includez00(obj_t);
	static obj_t
		BGl_z62getzd2includezd2consumedzd2codezb0zzmodule_includez00(obj_t);
	static obj_t
		BGl_z62resetzd2includezd2consumedzd2codez12za2zzmodule_includez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2includezd2compilerz00zzmodule_includez00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2includezd2consumedzd2directivezd2zzmodule_includez00();
	static obj_t BGl_objectzd2initzd2zzmodule_includez00();
	static obj_t BGl_z62makezd2includezd2compilerz62zzmodule_includez00(obj_t);
	static obj_t BGl_appendzd221011zd2zzmodule_includez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_includez00();
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00();
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_includez00();
	static obj_t BGl_za2producedzd2codeza2zd2zzmodule_includez00 = BUNSPEC;
	static obj_t BGl_z62includezd2consumerzb0zzmodule_includez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_readzd2includezd2zzread_includez00(obj_t);
	extern obj_t BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_includez00 = BUNSPEC;
	static obj_t BGl_z62includezd2finaliza7erz17zzmodule_includez00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_includez00();
	static obj_t BGl_za2consumedzd2codeza2zd2zzmodule_includez00 = BUNSPEC;
	static obj_t BGl_za2consumedzd2directiveza2zd2zzmodule_includez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2includezd2consumedzd2codezd2zzmodule_includez00();
	static obj_t BGl_genericzd2initzd2zzmodule_includez00();
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62getzd2toplevelzd2unitz62zzmodule_includez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_includez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_includez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t
		BGl_z62resetzd2includezd2consumedzd2directivez12za2zzmodule_includez00
		(obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_includez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_includez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_includez00();
	static obj_t BGl_z62includezd2producerzb0zzmodule_includez00(obj_t, obj_t);
	static obj_t BGl_za2toplevelzd2unitza2zd2zzmodule_includez00 = BUNSPEC;
	static obj_t
		BGl_z62getzd2toplevelzd2unitzd2weightzb0zzmodule_includez00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_includezd2consumerzd2envz00zzmodule_includez00,
		BgL_bgl_za762includeza7d2con1157z00,
		BGl_z62includezd2consumerzb0zzmodule_includez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2includezd2consumedzd2directivezd2envz00zzmodule_includez00,
		BgL_bgl_za762getza7d2include1158z00,
		BGl_z62getzd2includezd2consumedzd2directivezb0zzmodule_includez00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_includezd2producerzd2envz00zzmodule_includez00,
		BgL_bgl_za762includeza7d2pro1159z00,
		BGl_z62includezd2producerzb0zzmodule_includez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2includezd2consumedzd2codez12zd2envz12zzmodule_includez00,
		BgL_bgl_za762resetza7d2inclu1160z00,
		BGl_z62resetzd2includezd2consumedzd2codez12za2zzmodule_includez00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2includezd2consumedzd2codezd2envz00zzmodule_includez00,
		BgL_bgl_za762getza7d2include1161z00,
		BGl_z62getzd2includezd2consumedzd2codezb0zzmodule_includez00, 0L, BUNSPEC,
		0);
	      DEFINE_STRING(BGl_string1148z00zzmodule_includez00,
		BgL_bgl_string1148za700za7za7m1162za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1149z00zzmodule_includez00,
		BgL_bgl_string1149za700za7za7m1163za7, "Illegal `include' clause", 24);
	      DEFINE_STRING(BGl_string1150z00zzmodule_includez00,
		BgL_bgl_string1150za700za7za7m1164za7, "module_include", 14);
	      DEFINE_STRING(BGl_string1151z00zzmodule_includez00,
		BgL_bgl_string1151za700za7za7m1165za7, "unit toplevel include ", 22);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_includezd2finaliza7erzd2envza7zzmodule_includez00,
		BgL_bgl_za762includeza7d2fin1166z00,
		BGl_z62includezd2finaliza7erz17zzmodule_includez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2toplevelzd2unitzd2weightzd2envz00zzmodule_includez00,
		BgL_bgl_za762getza7d2topleve1167z00,
		BGl_z62getzd2toplevelzd2unitzd2weightzb0zzmodule_includez00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2includezd2consumedzd2directivez12zd2envz12zzmodule_includez00,
		BgL_bgl_za762resetza7d2inclu1168z00,
		BGl_z62resetzd2includezd2consumedzd2directivez12za2zzmodule_includez00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2toplevelzd2unitzd2envzd2zzmodule_includez00,
		BgL_bgl_za762getza7d2topleve1169z00,
		BGl_z62getzd2toplevelzd2unitz62zzmodule_includez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2includezd2compilerzd2envzd2zzmodule_includez00,
		BgL_bgl_za762makeza7d2includ1170z00,
		BGl_z62makezd2includezd2compilerz62zzmodule_includez00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2producedzd2codeza2zd2zzmodule_includez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzmodule_includez00));
		     ADD_ROOT((void *) (&BGl_za2consumedzd2codeza2zd2zzmodule_includez00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2consumedzd2directiveza2zd2zzmodule_includez00));
		     ADD_ROOT((void *) (&BGl_za2toplevelzd2unitza2zd2zzmodule_includez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_includez00(long
		BgL_checksumz00_236, char *BgL_fromz00_237)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_includez00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_includez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_includez00();
					BGl_libraryzd2moduleszd2initz00zzmodule_includez00();
					BGl_cnstzd2initzd2zzmodule_includez00();
					BGl_importedzd2moduleszd2initz00zzmodule_includez00();
					return BGl_toplevelzd2initzd2zzmodule_includez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_includez00()
	{
		{	/* Module/include.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_include");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_include");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_include");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_include");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_include");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"module_include");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"module_include");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_includez00()
	{
		{	/* Module/include.scm 15 */
			{	/* Module/include.scm 15 */
				obj_t BgL_cportz00_191;

				{	/* Module/include.scm 15 */
					obj_t BgL_stringz00_199;

					BgL_stringz00_199 = BGl_string1151z00zzmodule_includez00;
					{	/* Module/include.scm 15 */
						obj_t BgL_startz00_200;

						BgL_startz00_200 = BINT(((long) 0));
						{	/* Module/include.scm 15 */
							obj_t BgL_endz00_201;

							BgL_endz00_201 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_199)));
							{	/* Module/include.scm 15 */

								BgL_cportz00_191 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_199, BgL_startz00_200, BgL_endz00_201);
				}}}}
				{
					long BgL_iz00_192;

					BgL_iz00_192 = ((long) 2);
				BgL_loopz00_193:
					if ((BgL_iz00_192 == ((long) -1)))
						{	/* Module/include.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/include.scm 15 */
							{	/* Module/include.scm 15 */
								obj_t BgL_arg1155z00_195;

								{	/* Module/include.scm 15 */

									{	/* Module/include.scm 15 */
										obj_t BgL_locationz00_197;

										BgL_locationz00_197 = BBOOL(((bool_t) 0));
										{	/* Module/include.scm 15 */

											BgL_arg1155z00_195 =
												BGl_readz00zz__readerz00(BgL_cportz00_191,
												BgL_locationz00_197);
										}
									}
								}
								{	/* Module/include.scm 15 */
									int BgL_tmpz00_262;

									BgL_tmpz00_262 = (int) (BgL_iz00_192);
									CNST_TABLE_SET(BgL_tmpz00_262, BgL_arg1155z00_195);
							}}
							{	/* Module/include.scm 15 */
								int BgL_auxz00_198;

								BgL_auxz00_198 = (int) ((BgL_iz00_192 - ((long) 1)));
								{
									long BgL_iz00_267;

									BgL_iz00_267 = (long) (BgL_auxz00_198);
									BgL_iz00_192 = BgL_iz00_267;
									goto BgL_loopz00_193;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_includez00()
	{
		{	/* Module/include.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_includez00()
	{
		{	/* Module/include.scm 15 */
			BGl_za2producedzd2codeza2zd2zzmodule_includez00 = BNIL;
			BGl_za2consumedzd2directiveza2zd2zzmodule_includez00 = BNIL;
			BGl_za2consumedzd2codeza2zd2zzmodule_includez00 = BNIL;
			return (BGl_za2toplevelzd2unitza2zd2zzmodule_includez00 =
				BFALSE, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzmodule_includez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_37;

				BgL_headz00_37 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_38;
					obj_t BgL_tailz00_39;

					BgL_prevz00_38 = BgL_headz00_37;
					BgL_tailz00_39 = BgL_l1z00_1;
				BgL_loopz00_40:
					if (PAIRP(BgL_tailz00_39))
						{
							obj_t BgL_newzd2prevzd2_42;

							BgL_newzd2prevzd2_42 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_39), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_38, BgL_newzd2prevzd2_42);
							{
								obj_t BgL_tailz00_277;
								obj_t BgL_prevz00_276;

								BgL_prevz00_276 = BgL_newzd2prevzd2_42;
								BgL_tailz00_277 = CDR(BgL_tailz00_39);
								BgL_tailz00_39 = BgL_tailz00_277;
								BgL_prevz00_38 = BgL_prevz00_276;
								goto BgL_loopz00_40;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_37);
				}
			}
		}

	}



/* make-include-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2includezd2compilerz00zzmodule_includez00()
	{
		{	/* Module/include.scm 31 */
			{	/* Module/include.scm 32 */
				BgL_ccompz00_bglt BgL_new1048z00_59;

				{	/* Module/include.scm 33 */
					BgL_ccompz00_bglt BgL_new1047z00_60;

					BgL_new1047z00_60 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/include.scm 33 */
						long BgL_arg1095z00_61;

						{	/* Module/include.scm 33 */
							long BgL_res1136z00_140;

							BgL_res1136z00_140 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1095z00_61 = BgL_res1136z00_140;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1047z00_60), BgL_arg1095z00_61);
					}
					BgL_new1048z00_59 = BgL_new1047z00_60;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_59))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_59))->BgL_producerz00) =
					((obj_t) BGl_includezd2producerzd2envz00zzmodule_includez00),
					BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_59))->BgL_consumerz00) =
					((obj_t) BGl_includezd2consumerzd2envz00zzmodule_includez00),
					BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_59))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_includezd2finaliza7erzd2envza7zzmodule_includez00),
					BUNSPEC);
				return ((obj_t) BgL_new1048z00_59);
			}
		}

	}



/* &make-include-compiler */
	obj_t BGl_z62makezd2includezd2compilerz62zzmodule_includez00(obj_t
		BgL_envz00_177)
	{
		{	/* Module/include.scm 31 */
			return BGl_makezd2includezd2compilerz00zzmodule_includez00();
		}

	}



/* &include-producer */
	obj_t BGl_z62includezd2producerzb0zzmodule_includez00(obj_t BgL_envz00_178,
		obj_t BgL_clausez00_179)
	{
		{	/* Module/include.scm 46 */
			{

				{	/* Module/include.scm 49 */
					obj_t BgL_g1049z00_206;

					BgL_g1049z00_206 = CDR(((obj_t) BgL_clausez00_179));
					{
						obj_t BgL_filesz00_208;

						BgL_filesz00_208 = BgL_g1049z00_206;
					BgL_loopz00_207:
						if (NULLP(BgL_filesz00_208))
							{	/* Module/include.scm 51 */
								return BNIL;
							}
						else
							{	/* Module/include.scm 51 */
								if (PAIRP(BgL_filesz00_208))
									{	/* Module/include.scm 56 */
										obj_t BgL_filez00_209;

										BgL_filez00_209 = CAR(BgL_filesz00_208);
										if (STRINGP(BgL_filez00_209))
											{	/* Module/include.scm 59 */
												obj_t BgL_srcz00_210;

												BgL_srcz00_210 =
													BGl_readzd2includezd2zzread_includez00
													(BgL_filez00_209);
												{	/* Module/include.scm 59 */
													obj_t BgL_directivesz00_211;

													BgL_directivesz00_211 = CAR(((obj_t) BgL_srcz00_210));
													{	/* Module/include.scm 60 */
														obj_t BgL_srczd2codezd2_212;

														{	/* Module/include.scm 61 */
															obj_t BgL_arg1113z00_213;

															BgL_arg1113z00_213 =
																CDR(((obj_t) BgL_srcz00_210));
															BgL_srczd2codezd2_212 =
																bgl_reverse_bang(BgL_arg1113z00_213);
														}
														{	/* Module/include.scm 61 */

															if (PAIRP(BgL_directivesz00_211))
																{	/* Module/include.scm 64 */
																	obj_t BgL_g1055z00_214;

																	BgL_g1055z00_214 = CDR(BgL_directivesz00_211);
																	{
																		obj_t BgL_l1053z00_216;

																		BgL_l1053z00_216 = BgL_g1055z00_214;
																	BgL_zc3z04anonymousza31101ze3z87_215:
																		if (PAIRP(BgL_l1053z00_216))
																			{	/* Module/include.scm 64 */
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(CAR(BgL_l1053z00_216));
																				{
																					obj_t BgL_l1053z00_313;

																					BgL_l1053z00_313 =
																						CDR(BgL_l1053z00_216);
																					BgL_l1053z00_216 = BgL_l1053z00_313;
																					goto
																						BgL_zc3z04anonymousza31101ze3z87_215;
																				}
																			}
																		else
																			{	/* Module/include.scm 64 */
																				((bool_t) 1);
																			}
																	}
																}
															else
																{	/* Module/include.scm 63 */
																	((bool_t) 0);
																}
															BGl_za2producedzd2codeza2zd2zzmodule_includez00 =
																BGl_appendzd221011zd2zzmodule_includez00
																(BgL_srczd2codezd2_212,
																BGl_za2producedzd2codeza2zd2zzmodule_includez00);
															{
																obj_t BgL_filesz00_316;

																BgL_filesz00_316 = CDR(BgL_filesz00_208);
																BgL_filesz00_208 = BgL_filesz00_316;
																goto BgL_loopz00_207;
															}
														}
													}
												}
											}
										else
											{	/* Module/include.scm 57 */
											BgL_includezd2errorzd2_204:
												{	/* Module/include.scm 48 */
													obj_t BgL_list1115z00_205;

													BgL_list1115z00_205 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string1148z00zzmodule_includez00,
														BGl_string1149z00zzmodule_includez00,
														BgL_clausez00_179, BgL_list1115z00_205);
												}
											}
									}
								else
									{	/* Module/include.scm 53 */
										goto BgL_includezd2errorzd2_204;
									}
							}
					}
				}
			}
		}

	}



/* get-include-consumed-directive */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2includezd2consumedzd2directivezd2zzmodule_includez00()
	{
		{	/* Module/include.scm 76 */
			return BGl_za2consumedzd2directiveza2zd2zzmodule_includez00;
		}

	}



/* &get-include-consumed-directive */
	obj_t BGl_z62getzd2includezd2consumedzd2directivezb0zzmodule_includez00(obj_t
		BgL_envz00_184)
	{
		{	/* Module/include.scm 76 */
			return BGl_getzd2includezd2consumedzd2directivezd2zzmodule_includez00();
		}

	}



/* reset-include-consumed-directive! */
	BGL_EXPORTED_DEF obj_t
		BGl_resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00()
	{
		{	/* Module/include.scm 82 */
			return (BGl_za2consumedzd2directiveza2zd2zzmodule_includez00 =
				BNIL, BUNSPEC);
		}

	}



/* &reset-include-consumed-directive! */
	obj_t
		BGl_z62resetzd2includezd2consumedzd2directivez12za2zzmodule_includez00(obj_t
		BgL_envz00_185)
	{
		{	/* Module/include.scm 82 */
			return
				BGl_resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00();
		}

	}



/* get-include-consumed-code */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2includezd2consumedzd2codezd2zzmodule_includez00()
	{
		{	/* Module/include.scm 93 */
			return BGl_za2consumedzd2codeza2zd2zzmodule_includez00;
		}

	}



/* &get-include-consumed-code */
	obj_t BGl_z62getzd2includezd2consumedzd2codezb0zzmodule_includez00(obj_t
		BgL_envz00_186)
	{
		{	/* Module/include.scm 93 */
			return BGl_getzd2includezd2consumedzd2codezd2zzmodule_includez00();
		}

	}



/* reset-include-consumed-code! */
	BGL_EXPORTED_DEF obj_t
		BGl_resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00()
	{
		{	/* Module/include.scm 99 */
			return (BGl_za2consumedzd2codeza2zd2zzmodule_includez00 = BNIL, BUNSPEC);
		}

	}



/* &reset-include-consumed-code! */
	obj_t BGl_z62resetzd2includezd2consumedzd2codez12za2zzmodule_includez00(obj_t
		BgL_envz00_187)
	{
		{	/* Module/include.scm 99 */
			return BGl_resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00();
		}

	}



/* &include-consumer */
	obj_t BGl_z62includezd2consumerzb0zzmodule_includez00(obj_t BgL_envz00_180,
		obj_t BgL_modulez00_181, obj_t BgL_clausez00_182)
	{
		{	/* Module/include.scm 105 */
			{

				{	/* Module/include.scm 108 */
					obj_t BgL_g1050z00_220;

					BgL_g1050z00_220 = CDR(((obj_t) BgL_clausez00_182));
					{
						obj_t BgL_filesz00_222;

						BgL_filesz00_222 = BgL_g1050z00_220;
					BgL_loopz00_221:
						if (NULLP(BgL_filesz00_222))
							{	/* Module/include.scm 110 */
								return BNIL;
							}
						else
							{	/* Module/include.scm 110 */
								if (PAIRP(BgL_filesz00_222))
									{	/* Module/include.scm 115 */
										obj_t BgL_filez00_223;

										BgL_filez00_223 = CAR(BgL_filesz00_222);
										if (STRINGP(BgL_filez00_223))
											{	/* Module/include.scm 118 */
												obj_t BgL_srcz00_224;

												BgL_srcz00_224 =
													BGl_readzd2includezd2zzread_includez00
													(BgL_filez00_223);
												{	/* Module/include.scm 118 */
													obj_t BgL_directivez00_225;

													BgL_directivez00_225 = CAR(((obj_t) BgL_srcz00_224));
													{	/* Module/include.scm 119 */
														obj_t BgL_srczd2codezd2_226;

														BgL_srczd2codezd2_226 =
															CDR(((obj_t) BgL_srcz00_224));
														{	/* Module/include.scm 120 */

															if (PAIRP(BgL_directivez00_225))
																{	/* Module/include.scm 124 */
																	obj_t BgL_g1058z00_227;

																	BgL_g1058z00_227 = CDR(BgL_directivez00_225);
																	{
																		obj_t BgL_l1056z00_229;

																		BgL_l1056z00_229 = BgL_g1058z00_227;
																	BgL_zc3z04anonymousza31121ze3z87_228:
																		if (PAIRP(BgL_l1056z00_229))
																			{	/* Module/include.scm 129 */
																				{	/* Module/include.scm 126 */
																					obj_t BgL_dz00_230;

																					BgL_dz00_230 = CAR(BgL_l1056z00_229);
																					{	/* Module/include.scm 127 */
																						obj_t BgL_arg1123z00_231;

																						BgL_arg1123z00_231 =
																							BGl_consumezd2modulezd2clausez12z12zzmodule_modulez00
																							(((obj_t) BgL_modulez00_181),
																							BgL_dz00_230);
																						BGl_za2consumedzd2directiveza2zd2zzmodule_includez00
																							=
																							BGl_appendzd221011zd2zzmodule_includez00
																							(BgL_arg1123z00_231,
																							BGl_za2consumedzd2directiveza2zd2zzmodule_includez00);
																					}
																				}
																				{
																					obj_t BgL_l1056z00_347;

																					BgL_l1056z00_347 =
																						CDR(BgL_l1056z00_229);
																					BgL_l1056z00_229 = BgL_l1056z00_347;
																					goto
																						BgL_zc3z04anonymousza31121ze3z87_228;
																				}
																			}
																		else
																			{	/* Module/include.scm 129 */
																				((bool_t) 1);
																			}
																	}
																}
															else
																{	/* Module/include.scm 123 */
																	((bool_t) 0);
																}
															BGl_za2consumedzd2codeza2zd2zzmodule_includez00 =
																BGl_appendzd221011zd2zzmodule_includez00
																(BgL_srczd2codezd2_226,
																BGl_za2consumedzd2codeza2zd2zzmodule_includez00);
															{
																obj_t BgL_filesz00_350;

																BgL_filesz00_350 = CDR(BgL_filesz00_222);
																BgL_filesz00_222 = BgL_filesz00_350;
																goto BgL_loopz00_221;
															}
														}
													}
												}
											}
										else
											{	/* Module/include.scm 116 */
											BgL_includezd2errorzd2_218:
												{	/* Module/include.scm 107 */
													obj_t BgL_list1127z00_219;

													BgL_list1127z00_219 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string1148z00zzmodule_includez00,
														BGl_string1149z00zzmodule_includez00,
														BgL_clausez00_182, BgL_list1127z00_219);
												}
											}
									}
								else
									{	/* Module/include.scm 112 */
										goto BgL_includezd2errorzd2_218;
									}
							}
					}
				}
			}
		}

	}



/* get-toplevel-unit */
	BGL_EXPORTED_DEF obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00()
	{
		{	/* Module/include.scm 141 */
			return BGl_za2toplevelzd2unitza2zd2zzmodule_includez00;
		}

	}



/* &get-toplevel-unit */
	obj_t BGl_z62getzd2toplevelzd2unitz62zzmodule_includez00(obj_t BgL_envz00_188)
	{
		{	/* Module/include.scm 141 */
			return BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
		}

	}



/* get-toplevel-unit-weight */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00()
	{
		{	/* Module/include.scm 148 */
			return BINT(((long) 100));
		}

	}



/* &get-toplevel-unit-weight */
	obj_t BGl_z62getzd2toplevelzd2unitzd2weightzb0zzmodule_includez00(obj_t
		BgL_envz00_189)
	{
		{	/* Module/include.scm 148 */
			return BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00();
		}

	}



/* &include-finalizer */
	obj_t BGl_z62includezd2finaliza7erz17zzmodule_includez00(obj_t BgL_envz00_183)
	{
		{	/* Module/include.scm 154 */
			{	/* Module/include.scm 156 */
				obj_t BgL_arg1129z00_232;

				BgL_arg1129z00_232 =
					bgl_reverse_bang(BGl_za2producedzd2codeza2zd2zzmodule_includez00);
				{	/* Module/include.scm 155 */
					obj_t BgL_idz00_233;

					BgL_idz00_233 = CNST_TABLE_REF(((long) 1));
					{	/* Module/include.scm 155 */
						obj_t BgL_newz00_234;

						BgL_newz00_234 =
							create_struct(CNST_TABLE_REF(((long) 2)), (int) (((long) 5)));
						{	/* Module/include.scm 155 */
							int BgL_tmpz00_362;

							BgL_tmpz00_362 = (int) (((long) 4));
							STRUCT_SET(BgL_newz00_234, BgL_tmpz00_362, BFALSE);
						}
						{	/* Module/include.scm 155 */
							int BgL_tmpz00_365;

							BgL_tmpz00_365 = (int) (((long) 3));
							STRUCT_SET(BgL_newz00_234, BgL_tmpz00_365, BTRUE);
						}
						{	/* Module/include.scm 155 */
							int BgL_tmpz00_368;

							BgL_tmpz00_368 = (int) (((long) 2));
							STRUCT_SET(BgL_newz00_234, BgL_tmpz00_368, BgL_arg1129z00_232);
						}
						{	/* Module/include.scm 155 */
							obj_t BgL_auxz00_373;
							int BgL_tmpz00_371;

							BgL_auxz00_373 = BINT(((long) 100));
							BgL_tmpz00_371 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_234, BgL_tmpz00_371, BgL_auxz00_373);
						}
						{	/* Module/include.scm 155 */
							int BgL_tmpz00_376;

							BgL_tmpz00_376 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_234, BgL_tmpz00_376, BgL_idz00_233);
						}
						BGl_za2toplevelzd2unitza2zd2zzmodule_includez00 = BgL_newz00_234;
			}}}
			{	/* Module/include.scm 160 */
				obj_t BgL_list1130z00_235;

				BgL_list1130z00_235 =
					MAKE_YOUNG_PAIR(BGl_za2toplevelzd2unitza2zd2zzmodule_includez00,
					BNIL);
				return BgL_list1130z00_235;
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_includez00()
	{
		{	/* Module/include.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_includez00()
	{
		{	/* Module/include.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_includez00()
	{
		{	/* Module/include.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_includez00()
	{
		{	/* Module/include.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1150z00zzmodule_includez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1150z00zzmodule_includez00));
			return
				BGl_modulezd2initializa7ationz75zzread_includez00(((long) 236487969),
				BSTRING_TO_STRING(BGl_string1150z00zzmodule_includez00));
		}

	}

#ifdef __cplusplus
}
#endif
