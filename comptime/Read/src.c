/*===========================================================================*/
/*   (Read/src.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/src.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62zc3z04anonymousza31030ze3ze5zzread_srcz00(obj_t);
	BGL_IMPORT obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31034ze3ze5zzread_srcz00(obj_t);
	extern obj_t BGl_compilerzd2readzd2srcz00zzread_readerz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzread_srcz00();
	extern obj_t BGl_hellozd2worldzd2zzengine_enginez00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzread_srcz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzread_srcz00();
	static obj_t BGl_za2portza2z00zzread_srcz00 = BUNSPEC;
	static obj_t BGl_z62readzd2srczb0zzread_srcz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_openzd2srczd2filez00zzread_srcz00(obj_t);
	static obj_t BGl_readzd2srczf2portz20zzread_srcz00();
	BGL_IMPORT obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzread_srcz00();
	BGL_EXPORTED_DECL obj_t BGl_readzd2srczd2zzread_srcz00();
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	static obj_t BGl_closezd2srczd2portz00zzread_srcz00();
	static obj_t BGl_requirezd2initializa7ationz75zzread_srcz00 = BUNSPEC;
	static obj_t BGl_readzd2modulezd2clausez00zzread_srcz00();
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_toplevelzd2initzd2zzread_srcz00();
	static obj_t BGl_genericzd2initzd2zzread_srcz00();
	BGL_IMPORT obj_t BGl_readerzd2resetz12zc0zz__readerz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_za2bigloozd2interpreterza2zd2zz__readerz00;
	static obj_t BGl_z62readzd2handlerzb0zzread_srcz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzread_srcz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_z62errorz62zz__objectz00;
	static obj_t BGl_cnstzd2initzd2zzread_srcz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_srcz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzread_srcz00();
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_readzd2handlerzd2envz00zzread_srcz00,
		BgL_bgl_za762readza7d2handle1067z00, BGl_z62readzd2handlerzb0zzread_srcz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1059z00zzread_srcz00,
		BgL_bgl_za762za7c3za704anonymo1068za7,
		BGl_z62zc3z04anonymousza31030ze3ze5zzread_srcz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2srczd2envz00zzread_srcz00,
		BgL_bgl_za762readza7d2srcza7b01069za7, BGl_z62readzd2srczb0zzread_srcz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1060z00zzread_srcz00,
		BgL_bgl_string1060za700za7za7r1070za7, "Can't open such file", 20);
	      DEFINE_STRING(BGl_string1061z00zzread_srcz00,
		BgL_bgl_string1061za700za7za7r1071za7, "Can't find such file", 20);
	      DEFINE_STRING(BGl_string1062z00zzread_srcz00,
		BgL_bgl_string1062za700za7za7r1072za7, "read_src", 8);
	      DEFINE_STRING(BGl_string1063z00zzread_srcz00,
		BgL_bgl_string1063za700za7za7r1073za7, "src-file->memory ", 17);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2portza2z00zzread_srcz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzread_srcz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_srcz00(long
		BgL_checksumz00_123, char *BgL_fromz00_124)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_srcz00))
				{
					BGl_requirezd2initializa7ationz75zzread_srcz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzread_srcz00();
					BGl_libraryzd2moduleszd2initz00zzread_srcz00();
					BGl_cnstzd2initzd2zzread_srcz00();
					BGl_importedzd2moduleszd2initz00zzread_srcz00();
					return BGl_toplevelzd2initzd2zzread_srcz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_srcz00()
	{
		{	/* Read/src.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "read_src");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "read_src");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"read_src");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "read_src");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "read_src");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_src");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"read_src");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"read_src");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"read_src");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzread_srcz00()
	{
		{	/* Read/src.scm 15 */
			{	/* Read/src.scm 15 */
				obj_t BgL_cportz00_97;

				{	/* Read/src.scm 15 */
					obj_t BgL_stringz00_105;

					BgL_stringz00_105 = BGl_string1063z00zzread_srcz00;
					{	/* Read/src.scm 15 */
						obj_t BgL_startz00_106;

						BgL_startz00_106 = BINT(((long) 0));
						{	/* Read/src.scm 15 */
							obj_t BgL_endz00_107;

							BgL_endz00_107 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_105)));
							{	/* Read/src.scm 15 */

								BgL_cportz00_97 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_105, BgL_startz00_106, BgL_endz00_107);
				}}}}
				{
					long BgL_iz00_98;

					BgL_iz00_98 = ((long) 0);
				BgL_loopz00_99:
					if ((BgL_iz00_98 == ((long) -1)))
						{	/* Read/src.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Read/src.scm 15 */
							{	/* Read/src.scm 15 */
								obj_t BgL_arg1065z00_101;

								{	/* Read/src.scm 15 */

									{	/* Read/src.scm 15 */
										obj_t BgL_locationz00_103;

										BgL_locationz00_103 = BBOOL(((bool_t) 0));
										{	/* Read/src.scm 15 */

											BgL_arg1065z00_101 =
												BGl_readz00zz__readerz00(BgL_cportz00_97,
												BgL_locationz00_103);
										}
									}
								}
								{	/* Read/src.scm 15 */
									int BgL_tmpz00_151;

									BgL_tmpz00_151 = (int) (BgL_iz00_98);
									CNST_TABLE_SET(BgL_tmpz00_151, BgL_arg1065z00_101);
							}}
							{	/* Read/src.scm 15 */
								int BgL_auxz00_104;

								BgL_auxz00_104 = (int) ((BgL_iz00_98 - ((long) 1)));
								{
									long BgL_iz00_156;

									BgL_iz00_156 = (long) (BgL_auxz00_104);
									BgL_iz00_98 = BgL_iz00_156;
									goto BgL_loopz00_99;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzread_srcz00()
	{
		{	/* Read/src.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzread_srcz00()
	{
		{	/* Read/src.scm 15 */
			return (BGl_za2portza2z00zzread_srcz00 = BFALSE, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzread_srcz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_6;

				BgL_headz00_6 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_7;
					obj_t BgL_tailz00_8;

					BgL_prevz00_7 = BgL_headz00_6;
					BgL_tailz00_8 = BgL_l1z00_1;
				BgL_loopz00_9:
					if (PAIRP(BgL_tailz00_8))
						{
							obj_t BgL_newzd2prevzd2_11;

							BgL_newzd2prevzd2_11 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_8), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_7, BgL_newzd2prevzd2_11);
							{
								obj_t BgL_tailz00_166;
								obj_t BgL_prevz00_165;

								BgL_prevz00_165 = BgL_newzd2prevzd2_11;
								BgL_tailz00_166 = CDR(BgL_tailz00_8);
								BgL_tailz00_8 = BgL_tailz00_166;
								BgL_prevz00_7 = BgL_prevz00_165;
								goto BgL_loopz00_9;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_6);
				}
			}
		}

	}



/* read-src */
	BGL_EXPORTED_DEF obj_t BGl_readzd2srczd2zzread_srcz00()
	{
		{	/* Read/src.scm 31 */
			{	/* Read/src.scm 35 */
				obj_t BgL_modz00_14;

				BgL_modz00_14 = BGl_readzd2modulezd2clausez00zzread_srcz00();
				if (PAIRP(BgL_modz00_14))
					{	/* Read/src.scm 38 */
						obj_t BgL_g1012z00_16;
						obj_t BgL_g1013z00_17;

						BgL_g1012z00_16 = BGl_readzd2srczf2portz20zzread_srcz00();
						BgL_g1013z00_17 = CDR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
						{
							obj_t BgL_srcz00_19;
							obj_t BgL_sfilesz00_20;

							BgL_srcz00_19 = BgL_g1012z00_16;
							BgL_sfilesz00_20 = BgL_g1013z00_17;
						BgL_zc3z04anonymousza31020ze3z87_21:
							if (NULLP(BgL_sfilesz00_20))
								{	/* Read/src.scm 40 */
									return
										MAKE_YOUNG_PAIR(BgL_modz00_14,
										bgl_reverse_bang(BgL_srcz00_19));
								}
							else
								{	/* Read/src.scm 42 */
									obj_t BgL_arg1023z00_24;
									obj_t BgL_arg1024z00_25;

									{	/* Read/src.scm 42 */
										obj_t BgL_arg1025z00_26;

										{	/* Read/src.scm 42 */
											obj_t BgL_arg1026z00_27;

											BgL_arg1026z00_27 = CAR(((obj_t) BgL_sfilesz00_20));
											BGl_openzd2srczd2filez00zzread_srcz00(BgL_arg1026z00_27);
											BgL_arg1025z00_26 =
												BGl_readzd2srczf2portz20zzread_srcz00();
										}
										BgL_arg1023z00_24 =
											BGl_appendzd221011zd2zzread_srcz00(BgL_arg1025z00_26,
											BgL_srcz00_19);
									}
									BgL_arg1024z00_25 = CDR(((obj_t) BgL_sfilesz00_20));
									{
										obj_t BgL_sfilesz00_186;
										obj_t BgL_srcz00_185;

										BgL_srcz00_185 = BgL_arg1023z00_24;
										BgL_sfilesz00_186 = BgL_arg1024z00_25;
										BgL_sfilesz00_20 = BgL_sfilesz00_186;
										BgL_srcz00_19 = BgL_srcz00_185;
										goto BgL_zc3z04anonymousza31020ze3z87_21;
									}
								}
						}
					}
				else
					{	/* Read/src.scm 36 */
						return BgL_modz00_14;
					}
			}
		}

	}



/* &read-src */
	obj_t BGl_z62readzd2srczb0zzread_srcz00(obj_t BgL_envz00_89)
	{
		{	/* Read/src.scm 31 */
			return BGl_readzd2srczd2zzread_srcz00();
		}

	}



/* &read-handler */
	obj_t BGl_z62readzd2handlerzb0zzread_srcz00(obj_t BgL_envz00_90,
		obj_t BgL_ez00_91)
	{
		{	/* Read/src.scm 48 */
			if (BGl_isazf3zf3zz__objectz00(BgL_ez00_91, BGl_z62errorz62zz__objectz00))
				{	/* Read/src.scm 49 */
					BGl_hellozd2worldzd2zzengine_enginez00();
					BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_91);
					BGl_closezd2srczd2portz00zzread_srcz00();
					return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 3)));
				}
			else
				{	/* Read/src.scm 49 */
					return BGl_raisez00zz__errorz00(BgL_ez00_91);
				}
		}

	}



/* read-module-clause */
	obj_t BGl_readzd2modulezd2clausez00zzread_srcz00()
	{
		{	/* Read/src.scm 63 */
			BGl_openzd2srczd2filez00zzread_srcz00(CAR
				(BGl_za2srczd2filesza2zd2zzengine_paramz00));
			{	/* Read/src.scm 65 */
				obj_t BgL_modz00_31;

				BgL_modz00_31 =
					BGl_withzd2exceptionzd2handlerz00zz__errorz00
					(BGl_readzd2handlerzd2envz00zzread_srcz00,
					BGl_proc1059z00zzread_srcz00);
				if (CBOOL(BGl_za2bigloozd2interpreterza2zd2zz__readerz00))
					{	/* Read/src.scm 69 */
						return BFALSE;
					}
				else
					{	/* Read/src.scm 69 */
						return BgL_modz00_31;
					}
			}
		}

	}



/* &<@anonymous:1030> */
	obj_t BGl_z62zc3z04anonymousza31030ze3ze5zzread_srcz00(obj_t BgL_envz00_93)
	{
		{	/* Read/src.scm 67 */
			{	/* Read/src.scm 68 */
				obj_t BgL_list1031z00_110;

				{	/* Read/src.scm 68 */
					obj_t BgL_arg1032z00_111;

					BgL_arg1032z00_111 = MAKE_YOUNG_PAIR(BTRUE, BNIL);
					BgL_list1031z00_110 =
						MAKE_YOUNG_PAIR(BGl_za2portza2z00zzread_srcz00, BgL_arg1032z00_111);
				}
				return
					BGl_compilerzd2readzd2srcz00zzread_readerz00(BgL_list1031z00_110);
			}
		}

	}



/* read-src/port */
	obj_t BGl_readzd2srczf2portz20zzread_srcz00()
	{
		{	/* Read/src.scm 78 */
			{	/* Read/src.scm 79 */
				obj_t BgL_portz00_37;

				BgL_portz00_37 = BGl_za2portza2z00zzread_srcz00;
				{	/* Read/src.scm 83 */
					obj_t BgL_zc3z04anonymousza31034ze3z87_94;

					BgL_zc3z04anonymousza31034ze3z87_94 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31034ze3ze5zzread_srcz00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31034ze3z87_94,
						(int) (((long) 0)), BgL_portz00_37);
					return
						BGl_withzd2exceptionzd2handlerz00zz__errorz00
						(BGl_readzd2handlerzd2envz00zzread_srcz00,
						BgL_zc3z04anonymousza31034ze3z87_94);
				}
			}
		}

	}



/* &<@anonymous:1034> */
	obj_t BGl_z62zc3z04anonymousza31034ze3ze5zzread_srcz00(obj_t BgL_envz00_95)
	{
		{	/* Read/src.scm 82 */
			{	/* Read/src.scm 83 */
				obj_t BgL_portz00_96;

				BgL_portz00_96 = PROCEDURE_REF(BgL_envz00_95, (int) (((long) 0)));
				{	/* Read/src.scm 83 */
					obj_t BgL_g1014z00_112;

					{	/* Read/src.scm 83 */
						obj_t BgL_list1041z00_113;

						{	/* Read/src.scm 83 */
							obj_t BgL_arg1042z00_114;

							BgL_arg1042z00_114 = MAKE_YOUNG_PAIR(BTRUE, BNIL);
							BgL_list1041z00_113 =
								MAKE_YOUNG_PAIR(BgL_portz00_96, BgL_arg1042z00_114);
						}
						BgL_g1014z00_112 =
							BGl_compilerzd2readzd2srcz00zzread_readerz00(BgL_list1041z00_113);
					}
					{
						obj_t BgL_rz00_116;
						obj_t BgL_accz00_117;

						BgL_rz00_116 = BgL_g1014z00_112;
						BgL_accz00_117 = BNIL;
					BgL_loopz00_115:
						{	/* Read/src.scm 85 */
							bool_t BgL_test1081z00_215;

							{	/* Read/src.scm 85 */
								bool_t BgL_res1055z00_118;

								BgL_res1055z00_118 = EOF_OBJECTP(BgL_rz00_116);
								BgL_test1081z00_215 = BgL_res1055z00_118;
							}
							if (BgL_test1081z00_215)
								{	/* Read/src.scm 85 */
									BGl_closezd2srczd2portz00zzread_srcz00();
									return BgL_accz00_117;
								}
							else
								{	/* Read/src.scm 89 */
									obj_t BgL_arg1037z00_119;
									obj_t BgL_arg1038z00_120;

									{	/* Read/src.scm 89 */
										obj_t BgL_list1039z00_121;

										{	/* Read/src.scm 89 */
											obj_t BgL_arg1040z00_122;

											BgL_arg1040z00_122 = MAKE_YOUNG_PAIR(BTRUE, BNIL);
											BgL_list1039z00_121 =
												MAKE_YOUNG_PAIR(BgL_portz00_96, BgL_arg1040z00_122);
										}
										BgL_arg1037z00_119 =
											BGl_compilerzd2readzd2srcz00zzread_readerz00
											(BgL_list1039z00_121);
									}
									BgL_arg1038z00_120 =
										MAKE_YOUNG_PAIR(BgL_rz00_116, BgL_accz00_117);
									{
										obj_t BgL_accz00_223;
										obj_t BgL_rz00_222;

										BgL_rz00_222 = BgL_arg1037z00_119;
										BgL_accz00_223 = BgL_arg1038z00_120;
										BgL_accz00_117 = BgL_accz00_223;
										BgL_rz00_116 = BgL_rz00_222;
										goto BgL_loopz00_115;
									}
								}
						}
					}
				}
			}
		}

	}



/* open-src-file */
	obj_t BGl_openzd2srczd2filez00zzread_srcz00(obj_t BgL_sfilez00_5)
	{
		{	/* Read/src.scm 107 */
			BGl_readerzd2resetz12zc0zz__readerz00();
			if (STRINGP(BgL_sfilez00_5))
				{	/* Read/src.scm 111 */
					obj_t BgL_foundz00_56;

					BgL_foundz00_56 =
						BGl_findzd2filezf2pathz20zz__osz00(BgL_sfilez00_5,
						BGl_za2loadzd2pathza2zd2zz__evalz00);
					if (CBOOL(BgL_foundz00_56))
						{	/* Read/src.scm 113 */
							obj_t BgL_portz00_57;

							{	/* Read/src.scm 113 */

								BgL_portz00_57 =
									BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_foundz00_56, BTRUE, BINT(((long) 5000000)));
							}
							if (INPUT_PORTP(BgL_portz00_57))
								{	/* Read/src.scm 114 */
									BGl_readerzd2resetz12zc0zz__readerz00();
									return (BGl_za2portza2z00zzread_srcz00 =
										BgL_portz00_57, BUNSPEC);
								}
							else
								{	/* Read/src.scm 114 */
									return (BGl_za2portza2z00zzread_srcz00 =
										BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
											BGl_string1060z00zzread_srcz00, BgL_foundz00_56),
										BUNSPEC);
						}}
					else
						{	/* Read/src.scm 112 */
							return (BGl_za2portza2z00zzread_srcz00 =
								BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
									BGl_string1061z00zzread_srcz00, BgL_sfilez00_5), BUNSPEC);
				}}
			else
				{	/* Read/src.scm 124 */
					obj_t BgL_res1057z00_84;

					{	/* Read/src.scm 124 */
						obj_t BgL_tmpz00_239;

						BgL_tmpz00_239 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1057z00_84 = BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_239);
					}
					return (BGl_za2portza2z00zzread_srcz00 = BgL_res1057z00_84, BUNSPEC);
				}
		}

	}



/* close-src-port */
	obj_t BGl_closezd2srczd2portz00zzread_srcz00()
	{
		{	/* Read/src.scm 129 */
			{	/* Read/src.scm 130 */
				bool_t BgL_test1085z00_242;

				if (INPUT_PORTP(BGl_za2portza2z00zzread_srcz00))
					{	/* Read/src.scm 130 */
						bool_t BgL_test1087z00_245;

						{	/* Read/src.scm 130 */
							obj_t BgL_arg1051z00_69;

							{	/* Read/src.scm 130 */
								obj_t BgL_res1058z00_87;

								{	/* Read/src.scm 130 */
									obj_t BgL_tmpz00_246;

									BgL_tmpz00_246 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1058z00_87 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_246);
								}
								BgL_arg1051z00_69 = BgL_res1058z00_87;
							}
							BgL_test1087z00_245 =
								(BGl_za2portza2z00zzread_srcz00 == BgL_arg1051z00_69);
						}
						if (BgL_test1087z00_245)
							{	/* Read/src.scm 130 */
								BgL_test1085z00_242 = ((bool_t) 0);
							}
						else
							{	/* Read/src.scm 130 */
								BgL_test1085z00_242 = ((bool_t) 1);
							}
					}
				else
					{	/* Read/src.scm 130 */
						BgL_test1085z00_242 = ((bool_t) 0);
					}
				if (BgL_test1085z00_242)
					{	/* Read/src.scm 130 */
						return bgl_close_input_port(BGl_za2portza2z00zzread_srcz00);
					}
				else
					{	/* Read/src.scm 130 */
						return BFALSE;
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzread_srcz00()
	{
		{	/* Read/src.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_srcz00()
	{
		{	/* Read/src.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_srcz00()
	{
		{	/* Read/src.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_srcz00()
	{
		{	/* Read/src.scm 15 */
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 95801815),
				BSTRING_TO_STRING(BGl_string1062z00zzread_srcz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1062z00zzread_srcz00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 373986149),
				BSTRING_TO_STRING(BGl_string1062z00zzread_srcz00));
			return
				BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1062z00zzread_srcz00));
		}

	}

#ifdef __cplusplus
}
#endif
