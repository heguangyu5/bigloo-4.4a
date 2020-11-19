/*===========================================================================*/
/*   (Module/with.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/with.scm) */
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	static obj_t BGl_z62makezd2withzd2compilerz62zzmodule_withz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_withz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_importzd2withzd2modulez12z12zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_withz00();
	static obj_t BGl_z62earlyzd2withzd2clausesz62zzmodule_withz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31057ze3ze5zzmodule_withz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31058ze3ze5zzmodule_withz00(obj_t);
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_makezd2withzd2compilerz00zzmodule_withz00();
	BGL_IMPORT obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzmodule_withz00();
	extern obj_t BGl_za2earlyzd2withzd2modulesza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_earlyzd2withzd2clausesz00zzmodule_withz00();
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_withz00 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_withz00();
	extern obj_t BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmodule_withz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_accessz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	extern obj_t BGl_za2withzd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_withzd2parserzd2zzmodule_withz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_withz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_withz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_withz00();
	static obj_t BGl_z62withzd2producerzb0zzmodule_withz00(obj_t, obj_t);
	extern obj_t BGl_heapzd2modulezd2listz00zzheap_restorez00(obj_t);
	BGL_IMPORT obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1159z00zzmodule_withz00,
		BgL_bgl_za762za7c3za704anonymo1171za7,
		BGl_z62zc3z04anonymousza31057ze3ze5zzmodule_withz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1160z00zzmodule_withz00,
		BgL_bgl_za762za7c3za704anonymo1172za7,
		BGl_z62zc3z04anonymousza31058ze3ze5zzmodule_withz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_earlyzd2withzd2clauseszd2envzd2zzmodule_withz00,
		BgL_bgl_za762earlyza7d2withza71173za7,
		BGl_z62earlyzd2withzd2clausesz62zzmodule_withz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1161z00zzmodule_withz00,
		BgL_bgl_string1161za700za7za7m1174za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1162z00zzmodule_withz00,
		BgL_bgl_string1162za700za7za7m1175za7, "Illegal `with' clause", 21);
	      DEFINE_STRING(BGl_string1163z00zzmodule_withz00,
		BgL_bgl_string1163za700za7za7m1176za7, ".", 1);
	      DEFINE_STRING(BGl_string1164z00zzmodule_withz00,
		BgL_bgl_string1164za700za7za7m1177za7, "can't access module", 19);
	      DEFINE_STRING(BGl_string1165z00zzmodule_withz00,
		BgL_bgl_string1165za700za7za7m1178za7, "module_with", 11);
	      DEFINE_STRING(BGl_string1166z00zzmodule_withz00,
		BgL_bgl_string1166za700za7za7m1179za7, "void with ", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2withzd2compilerzd2envzd2zzmodule_withz00,
		BgL_bgl_za762makeza7d2withza7d1180za7,
		BGl_z62makezd2withzd2compilerz62zzmodule_withz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_withzd2producerzd2envz00zzmodule_withz00,
		BgL_bgl_za762withza7d2produc1181z00,
		BGl_z62withzd2producerzb0zzmodule_withz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzmodule_withz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_withz00(long
		BgL_checksumz00_159, char *BgL_fromz00_160)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_withz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_withz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_withz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_withz00();
					BGl_cnstzd2initzd2zzmodule_withz00();
					BGl_importedzd2moduleszd2initz00zzmodule_withz00();
					return BGl_methodzd2initzd2zzmodule_withz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_withz00()
	{
		{	/* Module/with.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_with");
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0), "module_with");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_with");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_with");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_with");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_with");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_with");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "module_with");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_withz00()
	{
		{	/* Module/with.scm 15 */
			{	/* Module/with.scm 15 */
				obj_t BgL_cportz00_138;

				{	/* Module/with.scm 15 */
					obj_t BgL_stringz00_146;

					BgL_stringz00_146 = BGl_string1166z00zzmodule_withz00;
					{	/* Module/with.scm 15 */
						obj_t BgL_startz00_147;

						BgL_startz00_147 = BINT(((long) 0));
						{	/* Module/with.scm 15 */
							obj_t BgL_endz00_148;

							BgL_endz00_148 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_146)));
							{	/* Module/with.scm 15 */

								BgL_cportz00_138 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_146, BgL_startz00_147, BgL_endz00_148);
				}}}}
				{
					long BgL_iz00_139;

					BgL_iz00_139 = ((long) 1);
				BgL_loopz00_140:
					if ((BgL_iz00_139 == ((long) -1)))
						{	/* Module/with.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/with.scm 15 */
							{	/* Module/with.scm 15 */
								obj_t BgL_arg1169z00_142;

								{	/* Module/with.scm 15 */

									{	/* Module/with.scm 15 */
										obj_t BgL_locationz00_144;

										BgL_locationz00_144 = BBOOL(((bool_t) 0));
										{	/* Module/with.scm 15 */

											BgL_arg1169z00_142 =
												BGl_readz00zz__readerz00(BgL_cportz00_138,
												BgL_locationz00_144);
										}
									}
								}
								{	/* Module/with.scm 15 */
									int BgL_tmpz00_186;

									BgL_tmpz00_186 = (int) (BgL_iz00_139);
									CNST_TABLE_SET(BgL_tmpz00_186, BgL_arg1169z00_142);
							}}
							{	/* Module/with.scm 15 */
								int BgL_auxz00_145;

								BgL_auxz00_145 = (int) ((BgL_iz00_139 - ((long) 1)));
								{
									long BgL_iz00_191;

									BgL_iz00_191 = (long) (BgL_auxz00_145);
									BgL_iz00_139 = BgL_iz00_191;
									goto BgL_loopz00_140;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_withz00()
	{
		{	/* Module/with.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* make-with-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2withzd2compilerz00zzmodule_withz00()
	{
		{	/* Module/with.scm 30 */
			{	/* Module/with.scm 31 */
				BgL_ccompz00_bglt BgL_new1048z00_24;

				{	/* Module/with.scm 31 */
					BgL_ccompz00_bglt BgL_new1047z00_29;

					BgL_new1047z00_29 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/with.scm 31 */
						long BgL_arg1059z00_30;

						{	/* Module/with.scm 31 */
							long BgL_res1147z00_100;

							BgL_res1147z00_100 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1059z00_30 = BgL_res1147z00_100;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1047z00_29), BgL_arg1059z00_30);
					}
					BgL_new1048z00_24 = BgL_new1047z00_29;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_24))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_24))->BgL_producerz00) =
					((obj_t) BGl_withzd2producerzd2envz00zzmodule_withz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_24))->BgL_consumerz00) =
					((obj_t) BGl_proc1159z00zzmodule_withz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_24))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_proc1160z00zzmodule_withz00), BUNSPEC);
				return ((obj_t) BgL_new1048z00_24);
			}
		}

	}



/* &make-with-compiler */
	obj_t BGl_z62makezd2withzd2compilerz62zzmodule_withz00(obj_t BgL_envz00_130)
	{
		{	/* Module/with.scm 30 */
			return BGl_makezd2withzd2compilerz00zzmodule_withz00();
		}

	}



/* &<@anonymous:1058> */
	obj_t BGl_z62zc3z04anonymousza31058ze3ze5zzmodule_withz00(obj_t
		BgL_envz00_131)
	{
		{	/* Module/module.scm 55 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &<@anonymous:1057> */
	obj_t BGl_z62zc3z04anonymousza31057ze3ze5zzmodule_withz00(obj_t
		BgL_envz00_132, obj_t BgL_mz00_133, obj_t BgL_cz00_134)
	{
		{	/* Module/module.scm 53 */
			return BNIL;
		}

	}



/* &with-producer */
	obj_t BGl_z62withzd2producerzb0zzmodule_withz00(obj_t BgL_envz00_135,
		obj_t BgL_clausez00_136)
	{
		{	/* Module/with.scm 36 */
			{
				obj_t BgL_protosz00_153;

				if (PAIRP(BgL_clausez00_136))
					{	/* Module/with.scm 37 */
						obj_t BgL_arg1061z00_158;

						BgL_arg1061z00_158 = CDR(BgL_clausez00_136);
						{	/* Module/with.scm 37 */
							bool_t BgL_tmpz00_209;

							BgL_protosz00_153 = BgL_arg1061z00_158;
							{
								obj_t BgL_l1052z00_155;

								BgL_l1052z00_155 = BgL_protosz00_153;
							BgL_zc3z04anonymousza31062ze3z87_154:
								if (PAIRP(BgL_l1052z00_155))
									{	/* Module/with.scm 39 */
										BGl_withzd2parserzd2zzmodule_withz00(CAR(BgL_l1052z00_155),
											BgL_clausez00_136);
										{
											obj_t BgL_l1052z00_214;

											BgL_l1052z00_214 = CDR(BgL_l1052z00_155);
											BgL_l1052z00_155 = BgL_l1052z00_214;
											goto BgL_zc3z04anonymousza31062ze3z87_154;
										}
									}
								else
									{	/* Module/with.scm 39 */
										BgL_tmpz00_209 = ((bool_t) 1);
									}
							}
							return BBOOL(BgL_tmpz00_209);
						}
					}
				else
					{	/* Module/with.scm 37 */
						{	/* Module/with.scm 42 */
							obj_t BgL_arg1065z00_156;

							BgL_arg1065z00_156 =
								BGl_findzd2locationzf2locz20zztools_locationz00
								(BgL_clausez00_136,
								BGl_findzd2locationzd2zztools_locationz00
								(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00));
							{	/* Module/with.scm 41 */
								obj_t BgL_list1066z00_157;

								BgL_list1066z00_157 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								return
									BGl_userzd2errorzf2locationz20zztools_errorz00
									(BgL_arg1065z00_156, BGl_string1161z00zzmodule_withz00,
									BGl_string1162z00zzmodule_withz00, BgL_clausez00_136,
									BgL_list1066z00_157);
							}
						}
					}
			}
		}

	}



/* with-parser */
	obj_t BGl_withzd2parserzd2zzmodule_withz00(obj_t BgL_protoz00_4,
		obj_t BgL_clausez00_5)
	{
		{	/* Module/with.scm 51 */
			{	/* Module/with.scm 52 */
				obj_t BgL_locz00_47;

				BgL_locz00_47 =
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_protoz00_4,
					BGl_findzd2locationzf2locz20zztools_locationz00(BgL_clausez00_5,
						BGl_findzd2locationzd2zztools_locationz00
						(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00)));
				{
					obj_t BgL_namez00_48;
					obj_t BgL_filez00_49;
					obj_t BgL_restz00_50;

					if (PAIRP(BgL_protoz00_4))
						{	/* Module/with.scm 55 */
							obj_t BgL_carzd2118zd2_55;
							obj_t BgL_cdrzd2119zd2_56;

							BgL_carzd2118zd2_55 = CAR(BgL_protoz00_4);
							BgL_cdrzd2119zd2_56 = CDR(BgL_protoz00_4);
							if (SYMBOLP(BgL_carzd2118zd2_55))
								{	/* Module/with.scm 55 */
									if (PAIRP(BgL_cdrzd2119zd2_56))
										{	/* Module/with.scm 55 */
											obj_t BgL_carzd2124zd2_59;

											BgL_carzd2124zd2_59 = CAR(BgL_cdrzd2119zd2_56);
											if (STRINGP(BgL_carzd2124zd2_59))
												{	/* Module/with.scm 55 */
													BgL_namez00_48 = BgL_carzd2118zd2_55;
													BgL_filez00_49 = BgL_carzd2124zd2_59;
													BgL_restz00_50 = CDR(BgL_cdrzd2119zd2_56);
													{	/* Module/with.scm 57 */
														obj_t BgL_g1049z00_62;

														{	/* Module/with.scm 58 */
															obj_t BgL_list1114z00_77;

															BgL_list1114z00_77 =
																MAKE_YOUNG_PAIR(BgL_filez00_49, BNIL);
															BgL_g1049z00_62 = BgL_list1114z00_77;
														}
														{
															obj_t BgL_restz00_64;
															obj_t BgL_fnamesz00_65;

															BgL_restz00_64 = BgL_restz00_50;
															BgL_fnamesz00_65 = BgL_g1049z00_62;
														BgL_zc3z04anonymousza31079ze3z87_66:
															if (NULLP(BgL_restz00_64))
																{	/* Module/with.scm 60 */
																	BGl_modulezd2addzd2accessz12z12zz__modulez00
																		(BgL_namez00_48,
																		bgl_reverse_bang(BgL_fnamesz00_65),
																		BGl_string1163z00zzmodule_withz00);
																}
															else
																{	/* Module/with.scm 62 */
																	bool_t BgL_test1191z00_240;

																	{	/* Module/with.scm 62 */
																		obj_t BgL_tmpz00_241;

																		BgL_tmpz00_241 =
																			CAR(((obj_t) BgL_restz00_64));
																		BgL_test1191z00_240 =
																			STRINGP(BgL_tmpz00_241);
																	}
																	if (BgL_test1191z00_240)
																		{	/* Module/with.scm 63 */
																			obj_t BgL_arg1101z00_71;
																			obj_t BgL_arg1103z00_72;

																			BgL_arg1101z00_71 =
																				CDR(((obj_t) BgL_restz00_64));
																			{	/* Module/with.scm 64 */
																				obj_t BgL_arg1109z00_73;

																				BgL_arg1109z00_73 =
																					CAR(((obj_t) BgL_restz00_64));
																				BgL_arg1103z00_72 =
																					MAKE_YOUNG_PAIR(BgL_arg1109z00_73,
																					BgL_fnamesz00_65);
																			}
																			{
																				obj_t BgL_fnamesz00_251;
																				obj_t BgL_restz00_250;

																				BgL_restz00_250 = BgL_arg1101z00_71;
																				BgL_fnamesz00_251 = BgL_arg1103z00_72;
																				BgL_fnamesz00_65 = BgL_fnamesz00_251;
																				BgL_restz00_64 = BgL_restz00_250;
																				goto
																					BgL_zc3z04anonymousza31079ze3z87_66;
																			}
																		}
																	else
																		{	/* Module/with.scm 66 */
																			obj_t BgL_list1110z00_74;

																			BgL_list1110z00_74 =
																				MAKE_YOUNG_PAIR(BNIL, BNIL);
																			BGl_userzd2errorzf2locationz20zztools_errorz00
																				(BgL_locz00_47,
																				BGl_string1161z00zzmodule_withz00,
																				BGl_string1162z00zzmodule_withz00,
																				BgL_clausez00_5, BgL_list1110z00_74);
																		}
																}
														}
													}
													{	/* Module/with.scm 71 */
														obj_t BgL_arg1115z00_78;

														{	/* Module/with.scm 100 */
															obj_t BgL_arg1140z00_114;

															BgL_arg1140z00_114 =
																BGl_prefixz00zz__osz00(BgL_filez00_49);
															BgL_arg1115z00_78 =
																string_append_3(BgL_arg1140z00_114,
																BGl_string1163z00zzmodule_withz00,
																BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
														}
														BGl_za2withzd2filesza2zd2zzengine_paramz00 =
															MAKE_YOUNG_PAIR(BgL_arg1115z00_78,
															BGl_za2withzd2filesza2zd2zzengine_paramz00);
													}
													return
														BGl_importzd2withzd2modulez12z12zzmodule_impusez00
														(BgL_namez00_48, BgL_protoz00_4);
												}
											else
												{	/* Module/with.scm 55 */
												BgL_tagzd2110zd2_52:
													if (SYMBOLP(BgL_protoz00_4))
														{	/* Module/with.scm 80 */
															obj_t BgL_bz00_80;

															{	/* Module/with.scm 80 */
																obj_t BgL_fun1128z00_90;

																BgL_fun1128z00_90 =
																	BGl_bigloozd2modulezd2resolverz00zz__modulez00
																	();
																BgL_bz00_80 =
																	PROCEDURE_ENTRY(BgL_fun1128z00_90)
																	(BgL_fun1128z00_90, BgL_protoz00_4, BNIL,
																	BGl_string1163z00zzmodule_withz00, BEOA);
															}
															if (PAIRP(BgL_bz00_80))
																{	/* Module/with.scm 82 */
																	{	/* Module/with.scm 93 */
																		obj_t BgL_arg1118z00_82;

																		{	/* Module/with.scm 93 */
																			obj_t BgL_arg1121z00_83;

																			BgL_arg1121z00_83 = CAR(BgL_bz00_80);
																			{	/* Module/with.scm 100 */
																				obj_t BgL_arg1140z00_118;

																				BgL_arg1140z00_118 =
																					BGl_prefixz00zz__osz00
																					(BgL_arg1121z00_83);
																				BgL_arg1118z00_82 =
																					string_append_3(BgL_arg1140z00_118,
																					BGl_string1163z00zzmodule_withz00,
																					BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
																			}
																		}
																		BGl_za2withzd2filesza2zd2zzengine_paramz00 =
																			MAKE_YOUNG_PAIR(BgL_arg1118z00_82,
																			BGl_za2withzd2filesza2zd2zzengine_paramz00);
																	}
																	return
																		BGl_importzd2withzd2modulez12z12zzmodule_impusez00
																		(BgL_protoz00_4, BgL_protoz00_4);
																}
															else
																{	/* Module/with.scm 83 */
																	bool_t BgL_test1194z00_275;

																	{	/* Module/with.scm 83 */
																		obj_t BgL_arg1126z00_88;

																		BgL_arg1126z00_88 =
																			BGl_heapzd2modulezd2listz00zzheap_restorez00
																			(BNIL);
																		BgL_test1194z00_275 =
																			CBOOL
																			(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																			(BgL_protoz00_4, BgL_arg1126z00_88));
																	}
																	if (BgL_test1194z00_275)
																		{	/* Module/with.scm 83 */
																			return
																				BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00
																				(BgL_protoz00_4);
																		}
																	else
																		{	/* Module/with.scm 86 */
																			obj_t BgL_list1125z00_87;

																			BgL_list1125z00_87 =
																				MAKE_YOUNG_PAIR(BNIL, BNIL);
																			return
																				BGl_userzd2errorzf2locationz20zztools_errorz00
																				(BgL_locz00_47, BgL_protoz00_4,
																				BGl_string1164z00zzmodule_withz00,
																				BgL_protoz00_4, BgL_list1125z00_87);
																		}
																}
														}
													else
														{	/* Module/with.scm 75 */
															obj_t BgL_list1129z00_91;

															BgL_list1129z00_91 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															return
																BGl_userzd2errorzf2locationz20zztools_errorz00
																(BgL_locz00_47,
																BGl_string1161z00zzmodule_withz00,
																BGl_string1162z00zzmodule_withz00,
																BgL_clausez00_5, BgL_list1129z00_91);
														}
												}
										}
									else
										{	/* Module/with.scm 55 */
											goto BgL_tagzd2110zd2_52;
										}
								}
							else
								{	/* Module/with.scm 55 */
									goto BgL_tagzd2110zd2_52;
								}
						}
					else
						{	/* Module/with.scm 55 */
							goto BgL_tagzd2110zd2_52;
						}
				}
			}
		}

	}



/* early-with-clauses */
	BGL_EXPORTED_DEF obj_t BGl_earlyzd2withzd2clausesz00zzmodule_withz00()
	{
		{	/* Module/with.scm 109 */
			{	/* Module/with.scm 110 */
				obj_t BgL_arg1145z00_95;

				BgL_arg1145z00_95 =
					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
					(BGl_za2earlyzd2withzd2modulesza2z00zzengine_paramz00, BNIL);
				return MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BgL_arg1145z00_95);
		}}

	}



/* &early-with-clauses */
	obj_t BGl_z62earlyzd2withzd2clausesz62zzmodule_withz00(obj_t BgL_envz00_137)
	{
		{	/* Module/with.scm 109 */
			return BGl_earlyzd2withzd2clausesz00zzmodule_withz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_withz00()
	{
		{	/* Module/with.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_withz00()
	{
		{	/* Module/with.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_withz00()
	{
		{	/* Module/with.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_withz00()
	{
		{	/* Module/with.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1165z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1165z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1165z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1165z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 478324196),
				BSTRING_TO_STRING(BGl_string1165z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zzmodule_libraryz00(((long) 292140521),
				BSTRING_TO_STRING(BGl_string1165z00zzmodule_withz00));
			BGl_modulezd2initializa7ationz75zzread_accessz00(((long) 11403642),
				BSTRING_TO_STRING(BGl_string1165z00zzmodule_withz00));
			return
				BGl_modulezd2initializa7ationz75zzheap_restorez00(((long) 147989034),
				BSTRING_TO_STRING(BGl_string1165z00zzmodule_withz00));
		}

	}

#ifdef __cplusplus
}
#endif
