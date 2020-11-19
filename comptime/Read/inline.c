/*===========================================================================*/
/*   (Read/inline.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/inline.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_za2macrozd2definitionsza2zd2zzread_inlinez00 = BUNSPEC;
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzread_inlinez00();
	static obj_t BGl_z62inlinezd2definitionzd2queuez62zzread_inlinez00(obj_t);
	static obj_t BGl_lookzd2forzd2definitionsz00zzread_inlinez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_openzd2inlinezd2filez00zzread_inlinez00(obj_t);
	static obj_t BGl_appendzd221011zd2zzread_inlinez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzread_inlinez00();
	BGL_EXPORTED_DECL obj_t BGl_inlinezd2finaliza7erz75zzread_inlinez00();
	BGL_IMPORT obj_t bgl_remq_bang(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_importzd2macrozd2finaliza7erza7zzread_inlinez00();
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzread_inlinez00();
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	static obj_t
		BGl_z62lookzd2forzd2inlineszd2andzd2macrosz62zzread_inlinez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_loopze70ze7zzread_inlinez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_compilezd2srfizf3z21zz__expander_srfi0z00(obj_t);
	static obj_t BGl_z62importzd2macrozd2finaliza7erzc5zzread_inlinez00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzread_inlinez00 = BUNSPEC;
	static obj_t BGl_lookzd2forzf2expz20zzread_inlinez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzread_inlinez00();
	static obj_t BGl_genericzd2initzd2zzread_inlinez00();
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31191ze3ze5zzread_inlinez00(obj_t);
	static obj_t BGl_z62inlinezd2finaliza7erz17zzread_inlinez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_lookzd2forzd2inlineszd2andzd2macrosz00zzread_inlinez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzread_inlinez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzread_inlinez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_inlinez00();
	extern obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzread_inlinez00();
	static obj_t BGl_za2inlinezd2definitionsza2zd2zzread_inlinez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_inlinezd2definitionzd2queuez00zzread_inlinez00();
	static obj_t BGl_z62zc3z04anonymousza31288ze3ze5zzread_inlinez00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[15];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2macrozd2finaliza7erzd2envz75zzread_inlinez00,
		BgL_bgl_za762importza7d2macr1599z00,
		BGl_z62importzd2macrozd2finaliza7erzc5zzread_inlinez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2finaliza7erzd2envza7zzread_inlinez00,
		BgL_bgl_za762inlineza7d2fina1600z00,
		BGl_z62inlinezd2finaliza7erz17zzread_inlinez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1585z00zzread_inlinez00,
		BgL_bgl_string1585za700za7za7r1601za7, "Cannot open file for input", 26);
	      DEFINE_STRING(BGl_string1586z00zzread_inlinez00,
		BgL_bgl_string1586za700za7za7r1602za7, "Cannot find source file", 23);
	      DEFINE_STRING(BGl_string1587z00zzread_inlinez00,
		BgL_bgl_string1587za700za7za7r1603za7, "import", 6);
	      DEFINE_STRING(BGl_string1588z00zzread_inlinez00,
		BgL_bgl_string1588za700za7za7r1604za7, "Can't find macro definition(s)",
		30);
	      DEFINE_STRING(BGl_string1589z00zzread_inlinez00,
		BgL_bgl_string1589za700za7za7r1605za7, "Can't find syntax definition(s)",
		31);
	      DEFINE_STRING(BGl_string1590z00zzread_inlinez00,
		BgL_bgl_string1590za700za7za7r1606za7, "Can't find expander definition(s)",
		33);
	      DEFINE_STRING(BGl_string1591z00zzread_inlinez00,
		BgL_bgl_string1591za700za7za7r1607za7,
		"Can't find inline/generic definition(s)", 39);
	      DEFINE_STRING(BGl_string1592z00zzread_inlinez00,
		BgL_bgl_string1592za700za7za7r1608za7, "Can't find file", 15);
	      DEFINE_STRING(BGl_string1593z00zzread_inlinez00,
		BgL_bgl_string1593za700za7za7r1609za7, "read_inline", 11);
	      DEFINE_STRING(BGl_string1594z00zzread_inlinez00,
		BgL_bgl_string1594za700za7za7r1610za7,
		"imported-macros unit imported-inlines cond-expand define-expander define-syntax define-macro define-inline bigloo-compile else @ sifun done begin inline ",
		153);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2definitionzd2queuezd2envzd2zzread_inlinez00,
		BgL_bgl_za762inlineza7d2defi1611z00,
		BGl_z62inlinezd2definitionzd2queuez62zzread_inlinez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_lookzd2forzd2inlineszd2andzd2macroszd2envzd2zzread_inlinez00,
		BgL_bgl_za762lookza7d2forza7d21612za7,
		BGl_z62lookzd2forzd2inlineszd2andzd2macrosz62zzread_inlinez00, 0L, BUNSPEC,
		8);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2macrozd2definitionsza2zd2zzread_inlinez00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzread_inlinez00));
		   
			 ADD_ROOT((void *) (&BGl_za2inlinezd2definitionsza2zd2zzread_inlinez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_inlinez00(long
		BgL_checksumz00_1035, char *BgL_fromz00_1036)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_inlinez00))
				{
					BGl_requirezd2initializa7ationz75zzread_inlinez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzread_inlinez00();
					BGl_libraryzd2moduleszd2initz00zzread_inlinez00();
					BGl_cnstzd2initzd2zzread_inlinez00();
					BGl_importedzd2moduleszd2initz00zzread_inlinez00();
					return BGl_toplevelzd2initzd2zzread_inlinez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_inlinez00()
	{
		{	/* Read/inline.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"read_inline");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"read_inline");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "read_inline");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "read_inline");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "read_inline");
			BGl_modulezd2initializa7ationz75zz__expander_srfi0z00(((long) 0),
				"read_inline");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_inline");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"read_inline");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"read_inline");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"read_inline");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"read_inline");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"read_inline");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "read_inline");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzread_inlinez00()
	{
		{	/* Read/inline.scm 15 */
			{	/* Read/inline.scm 15 */
				obj_t BgL_cportz00_1022;

				{	/* Read/inline.scm 15 */
					obj_t BgL_stringz00_1030;

					BgL_stringz00_1030 = BGl_string1594z00zzread_inlinez00;
					{	/* Read/inline.scm 15 */
						obj_t BgL_startz00_1031;

						BgL_startz00_1031 = BINT(((long) 0));
						{	/* Read/inline.scm 15 */
							obj_t BgL_endz00_1032;

							BgL_endz00_1032 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1030)));
							{	/* Read/inline.scm 15 */

								BgL_cportz00_1022 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1030, BgL_startz00_1031, BgL_endz00_1032);
				}}}}
				{
					long BgL_iz00_1023;

					BgL_iz00_1023 = ((long) 14);
				BgL_loopz00_1024:
					if ((BgL_iz00_1023 == ((long) -1)))
						{	/* Read/inline.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Read/inline.scm 15 */
							{	/* Read/inline.scm 15 */
								obj_t BgL_arg1597z00_1026;

								{	/* Read/inline.scm 15 */

									{	/* Read/inline.scm 15 */
										obj_t BgL_locationz00_1028;

										BgL_locationz00_1028 = BBOOL(((bool_t) 0));
										{	/* Read/inline.scm 15 */

											BgL_arg1597z00_1026 =
												BGl_readz00zz__readerz00(BgL_cportz00_1022,
												BgL_locationz00_1028);
										}
									}
								}
								{	/* Read/inline.scm 15 */
									int BgL_tmpz00_1067;

									BgL_tmpz00_1067 = (int) (BgL_iz00_1023);
									CNST_TABLE_SET(BgL_tmpz00_1067, BgL_arg1597z00_1026);
							}}
							{	/* Read/inline.scm 15 */
								int BgL_auxz00_1029;

								BgL_auxz00_1029 = (int) ((BgL_iz00_1023 - ((long) 1)));
								{
									long BgL_iz00_1072;

									BgL_iz00_1072 = (long) (BgL_auxz00_1029);
									BgL_iz00_1023 = BgL_iz00_1072;
									goto BgL_loopz00_1024;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzread_inlinez00()
	{
		{	/* Read/inline.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzread_inlinez00()
	{
		{	/* Read/inline.scm 15 */
			BGl_za2inlinezd2definitionsza2zd2zzread_inlinez00 = BNIL;
			return (BGl_za2macrozd2definitionsza2zd2zzread_inlinez00 = BNIL, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzread_inlinez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_464;

				BgL_headz00_464 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_465;
					obj_t BgL_tailz00_466;

					BgL_prevz00_465 = BgL_headz00_464;
					BgL_tailz00_466 = BgL_l1z00_1;
				BgL_loopz00_467:
					if (PAIRP(BgL_tailz00_466))
						{
							obj_t BgL_newzd2prevzd2_469;

							BgL_newzd2prevzd2_469 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_466), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_465, BgL_newzd2prevzd2_469);
							{
								obj_t BgL_tailz00_1082;
								obj_t BgL_prevz00_1081;

								BgL_prevz00_1081 = BgL_newzd2prevzd2_469;
								BgL_tailz00_1082 = CDR(BgL_tailz00_466);
								BgL_tailz00_466 = BgL_tailz00_1082;
								BgL_prevz00_465 = BgL_prevz00_1081;
								goto BgL_loopz00_467;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_464);
				}
			}
		}

	}



/* open-inline-file */
	obj_t BGl_openzd2inlinezd2filez00zzread_inlinez00(obj_t BgL_filez00_25)
	{
		{	/* Read/inline.scm 37 */
			{	/* Read/inline.scm 38 */
				obj_t BgL_pathz00_486;

				BgL_pathz00_486 =
					BGl_findzd2filezf2pathz20zz__osz00(BgL_filez00_25,
					BGl_za2loadzd2pathza2zd2zz__evalz00);
				if (STRINGP(BgL_pathz00_486))
					{	/* Read/inline.scm 40 */
						obj_t BgL_portz00_488;

						{	/* Read/inline.scm 40 */

							BgL_portz00_488 =
								BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_pathz00_486, BTRUE, BINT(((long) 5000000)));
						}
						if (INPUT_PORTP(BgL_portz00_488))
							{	/* Read/inline.scm 41 */
								return BgL_portz00_488;
							}
						else
							{	/* Read/inline.scm 41 */
								return
									BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
											0)), BGl_string1585z00zzread_inlinez00, BgL_pathz00_486,
									BNIL);
					}}
				else
					{	/* Read/inline.scm 39 */
						return
							BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long) 0)),
							BGl_string1586z00zzread_inlinez00, BgL_filez00_25, BNIL);
		}}}

	}



/* look-for-inlines-and-macros */
	BGL_EXPORTED_DEF obj_t
		BGl_lookzd2forzd2inlineszd2andzd2macrosz00zzread_inlinez00(obj_t
		BgL_inlinesz00_26, obj_t BgL_macrosz00_27, obj_t BgL_syntaxesz00_28,
		obj_t BgL_expandersz00_29, obj_t BgL_codez00_30, obj_t BgL_expsz00_31,
		obj_t BgL_fnamesz00_32, obj_t BgL_modulez00_33)
	{
		{	/* Read/inline.scm 53 */
			{	/* Read/inline.scm 55 */
				obj_t BgL_portz00_495;

				{	/* Read/inline.scm 55 */
					obj_t BgL_arg1194z00_504;

					BgL_arg1194z00_504 = CAR(((obj_t) BgL_fnamesz00_32));
					BgL_portz00_495 =
						BGl_openzd2inlinezd2filez00zzread_inlinez00(BgL_arg1194z00_504);
				}
				{	/* Read/inline.scm 56 */
					obj_t BgL_exitd1063z00_496;

					BgL_exitd1063z00_496 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Read/inline.scm 63 */
						obj_t BgL_zc3z04anonymousza31191ze3z87_1002;

						BgL_zc3z04anonymousza31191ze3z87_1002 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31191ze3ze5zzread_inlinez00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31191ze3z87_1002,
							(int) (((long) 0)), BgL_portz00_495);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1063z00_496,
							BgL_zc3z04anonymousza31191ze3z87_1002);
						{	/* Read/inline.scm 59 */
							obj_t BgL_tmp1065z00_498;

							{	/* Read/inline.scm 59 */
								obj_t BgL_list1181z00_499;

								{	/* Read/inline.scm 59 */
									obj_t BgL_arg1186z00_500;

									BgL_arg1186z00_500 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
									BgL_list1181z00_499 =
										MAKE_YOUNG_PAIR(BgL_portz00_495, BgL_arg1186z00_500);
								}
								BGl_compilerzd2readzd2zzread_readerz00(BgL_list1181z00_499);
							}
							{	/* Read/inline.scm 62 */
								obj_t BgL_arg1190z00_501;

								BgL_arg1190z00_501 = CDR(((obj_t) BgL_fnamesz00_32));
								BgL_tmp1065z00_498 =
									BGl_lookzd2forzd2definitionsz00zzread_inlinez00
									(BgL_inlinesz00_26, BgL_macrosz00_27, BgL_syntaxesz00_28,
									BgL_expandersz00_29, BgL_codez00_30, BgL_expsz00_31,
									BgL_arg1190z00_501, BgL_modulez00_33, BgL_portz00_495);
							}
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1063z00_496);
							bgl_close_input_port(((obj_t) BgL_portz00_495));
							return BgL_tmp1065z00_498;
						}
					}
				}
			}
		}

	}



/* &look-for-inlines-and-macros */
	obj_t BGl_z62lookzd2forzd2inlineszd2andzd2macrosz62zzread_inlinez00(obj_t
		BgL_envz00_1003, obj_t BgL_inlinesz00_1004, obj_t BgL_macrosz00_1005,
		obj_t BgL_syntaxesz00_1006, obj_t BgL_expandersz00_1007,
		obj_t BgL_codez00_1008, obj_t BgL_expsz00_1009, obj_t BgL_fnamesz00_1010,
		obj_t BgL_modulez00_1011)
	{
		{	/* Read/inline.scm 53 */
			return
				BGl_lookzd2forzd2inlineszd2andzd2macrosz00zzread_inlinez00
				(BgL_inlinesz00_1004, BgL_macrosz00_1005, BgL_syntaxesz00_1006,
				BgL_expandersz00_1007, BgL_codez00_1008, BgL_expsz00_1009,
				BgL_fnamesz00_1010, BgL_modulez00_1011);
		}

	}



/* &<@anonymous:1191> */
	obj_t BGl_z62zc3z04anonymousza31191ze3ze5zzread_inlinez00(obj_t
		BgL_envz00_1012)
	{
		{	/* Read/inline.scm 56 */
			{	/* Read/inline.scm 63 */
				obj_t BgL_portz00_1013;

				BgL_portz00_1013 = PROCEDURE_REF(BgL_envz00_1012, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_portz00_1013));
			}
		}

	}



/* look-for-definitions */
	obj_t BGl_lookzd2forzd2definitionsz00zzread_inlinez00(obj_t BgL_inlinesz00_34,
		obj_t BgL_macrosz00_35, obj_t BgL_syntaxesz00_36, obj_t BgL_expandersz00_37,
		obj_t BgL_codez00_38, obj_t BgL_expsz00_39, obj_t BgL_fnamesz00_40,
		obj_t BgL_modulez00_41, obj_t BgL_portz00_42)
	{
		{	/* Read/inline.scm 68 */
			{	/* Read/inline.scm 70 */
				obj_t BgL_g1066z00_505;

				{	/* Read/inline.scm 74 */
					obj_t BgL_arg1298z00_623;

					BgL_arg1298z00_623 =
						BGl_appendzd221011zd2zzread_inlinez00(BgL_expsz00_39,
						BgL_codez00_38);
					BgL_g1066z00_505 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)), BgL_arg1298z00_623);
				}
				return
					BGl_loopze70ze7zzread_inlinez00(BgL_modulez00_41, BgL_inlinesz00_34,
					BgL_macrosz00_35, BgL_syntaxesz00_36, BgL_expandersz00_37,
					BgL_g1066z00_505, BgL_fnamesz00_40, BgL_portz00_42);
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzread_inlinez00(obj_t BgL_modulez00_1020,
		obj_t BgL_inlinesz00_507, obj_t BgL_macrosz00_508,
		obj_t BgL_syntaxesz00_509, obj_t BgL_expandersz00_510, obj_t BgL_expz00_511,
		obj_t BgL_fnamesz00_512, obj_t BgL_portz00_513)
	{
		{	/* Read/inline.scm 70 */
		BGl_loopze70ze7zzread_inlinez00:
			{	/* Read/inline.scm 77 */
				obj_t BgL_inlinesz00_515;

				BgL_inlinesz00_515 =
					BGl_lookzd2forzf2expz20zzread_inlinez00(BgL_inlinesz00_507,
					BgL_macrosz00_508, BgL_syntaxesz00_509, BgL_expandersz00_510,
					BgL_expz00_511, BgL_modulez00_1020);
				{	/* Read/inline.scm 78 */
					obj_t BgL_macrosz00_516;
					obj_t BgL_syntaxesz00_517;
					obj_t BgL_expandersz00_518;

					{	/* Read/inline.scm 80 */
						int BgL_tmpz00_1125;

						BgL_tmpz00_1125 = (int) (((long) 1));
						BgL_macrosz00_516 = BGL_MVALUES_VAL(BgL_tmpz00_1125);
					}
					{	/* Read/inline.scm 80 */
						int BgL_tmpz00_1128;

						BgL_tmpz00_1128 = (int) (((long) 2));
						BgL_syntaxesz00_517 = BGL_MVALUES_VAL(BgL_tmpz00_1128);
					}
					{	/* Read/inline.scm 80 */
						int BgL_tmpz00_1131;

						BgL_tmpz00_1131 = (int) (((long) 3));
						BgL_expandersz00_518 = BGL_MVALUES_VAL(BgL_tmpz00_1131);
					}
					{	/* Read/inline.scm 80 */
						bool_t BgL_test1619z00_1134;

						if (NULLP(BgL_inlinesz00_515))
							{	/* Read/inline.scm 80 */
								if (NULLP(BgL_macrosz00_516))
									{	/* Read/inline.scm 80 */
										if (NULLP(BgL_syntaxesz00_517))
											{	/* Read/inline.scm 81 */
												BgL_test1619z00_1134 = NULLP(BgL_expandersz00_518);
											}
										else
											{	/* Read/inline.scm 81 */
												BgL_test1619z00_1134 = ((bool_t) 0);
											}
									}
								else
									{	/* Read/inline.scm 80 */
										BgL_test1619z00_1134 = ((bool_t) 0);
									}
							}
						else
							{	/* Read/inline.scm 80 */
								BgL_test1619z00_1134 = ((bool_t) 0);
							}
						if (BgL_test1619z00_1134)
							{	/* Read/inline.scm 80 */
								return CNST_TABLE_REF(((long) 2));
							}
						else
							{	/* Read/inline.scm 83 */
								bool_t BgL_test1623z00_1143;

								{	/* Read/inline.scm 83 */
									bool_t BgL_res1529z00_864;

									BgL_res1529z00_864 = EOF_OBJECTP(BgL_expz00_511);
									BgL_test1623z00_1143 = BgL_res1529z00_864;
								}
								if (BgL_test1623z00_1143)
									{	/* Read/inline.scm 83 */
										if (NULLP(BgL_fnamesz00_512))
											{	/* Read/inline.scm 84 */
												if (PAIRP(BgL_macrosz00_516))
													{	/* Read/inline.scm 89 */
														obj_t BgL_arg1208z00_526;

														{	/* Read/inline.scm 89 */
															obj_t BgL_head1099z00_530;

															{	/* Read/inline.scm 89 */
																obj_t BgL_arg1225z00_542;

																BgL_arg1225z00_542 =
																	CAR(CAR(BgL_macrosz00_516));
																{	/* Read/inline.scm 89 */
																	obj_t BgL_res1533z00_870;

																	BgL_res1533z00_870 =
																		MAKE_YOUNG_PAIR(BgL_arg1225z00_542, BNIL);
																	BgL_head1099z00_530 = BgL_res1533z00_870;
																}
															}
															{	/* Read/inline.scm 89 */
																obj_t BgL_g1102z00_531;

																BgL_g1102z00_531 = CDR(BgL_macrosz00_516);
																{
																	obj_t BgL_l1097z00_533;
																	obj_t BgL_tail1100z00_534;

																	BgL_l1097z00_533 = BgL_g1102z00_531;
																	BgL_tail1100z00_534 = BgL_head1099z00_530;
																BgL_zc3z04anonymousza31211ze3z87_535:
																	if (NULLP(BgL_l1097z00_533))
																		{	/* Read/inline.scm 89 */
																			BgL_arg1208z00_526 = BgL_head1099z00_530;
																		}
																	else
																		{	/* Read/inline.scm 89 */
																			obj_t BgL_newtail1101z00_537;

																			{	/* Read/inline.scm 89 */
																				obj_t BgL_arg1221z00_539;

																				{	/* Read/inline.scm 89 */
																					obj_t BgL_pairz00_874;

																					BgL_pairz00_874 =
																						CAR(((obj_t) BgL_l1097z00_533));
																					BgL_arg1221z00_539 =
																						CAR(BgL_pairz00_874);
																				}
																				{	/* Read/inline.scm 89 */
																					obj_t BgL_res1535z00_875;

																					BgL_res1535z00_875 =
																						MAKE_YOUNG_PAIR(BgL_arg1221z00_539,
																						BNIL);
																					BgL_newtail1101z00_537 =
																						BgL_res1535z00_875;
																				}
																			}
																			SET_CDR(BgL_tail1100z00_534,
																				BgL_newtail1101z00_537);
																			{	/* Read/inline.scm 89 */
																				obj_t BgL_arg1216z00_538;

																				BgL_arg1216z00_538 =
																					CDR(((obj_t) BgL_l1097z00_533));
																				{
																					obj_t BgL_tail1100z00_1163;
																					obj_t BgL_l1097z00_1162;

																					BgL_l1097z00_1162 =
																						BgL_arg1216z00_538;
																					BgL_tail1100z00_1163 =
																						BgL_newtail1101z00_537;
																					BgL_tail1100z00_534 =
																						BgL_tail1100z00_1163;
																					BgL_l1097z00_533 = BgL_l1097z00_1162;
																					goto
																						BgL_zc3z04anonymousza31211ze3z87_535;
																				}
																			}
																		}
																}
															}
														}
														return
															BGl_userzd2errorzd2zztools_errorz00
															(BGl_string1587z00zzread_inlinez00,
															BGl_string1588z00zzread_inlinez00,
															BgL_arg1208z00_526, BNIL);
													}
												else
													{	/* Read/inline.scm 86 */
														if (PAIRP(BgL_syntaxesz00_517))
															{	/* Read/inline.scm 93 */
																obj_t BgL_arg1229z00_545;

																{	/* Read/inline.scm 93 */
																	obj_t BgL_head1105z00_549;

																	{	/* Read/inline.scm 93 */
																		obj_t BgL_arg1245z00_561;

																		BgL_arg1245z00_561 =
																			CAR(CAR(BgL_syntaxesz00_517));
																		{	/* Read/inline.scm 93 */
																			obj_t BgL_res1538z00_882;

																			BgL_res1538z00_882 =
																				MAKE_YOUNG_PAIR(BgL_arg1245z00_561,
																				BNIL);
																			BgL_head1105z00_549 = BgL_res1538z00_882;
																		}
																	}
																	{	/* Read/inline.scm 93 */
																		obj_t BgL_g1108z00_550;

																		BgL_g1108z00_550 = CDR(BgL_syntaxesz00_517);
																		{
																			obj_t BgL_l1103z00_552;
																			obj_t BgL_tail1106z00_553;

																			BgL_l1103z00_552 = BgL_g1108z00_550;
																			BgL_tail1106z00_553 = BgL_head1105z00_549;
																		BgL_zc3z04anonymousza31232ze3z87_554:
																			if (NULLP(BgL_l1103z00_552))
																				{	/* Read/inline.scm 93 */
																					BgL_arg1229z00_545 =
																						BgL_head1105z00_549;
																				}
																			else
																				{	/* Read/inline.scm 93 */
																					obj_t BgL_newtail1107z00_556;

																					{	/* Read/inline.scm 93 */
																						obj_t BgL_arg1242z00_558;

																						{	/* Read/inline.scm 93 */
																							obj_t BgL_pairz00_886;

																							BgL_pairz00_886 =
																								CAR(((obj_t) BgL_l1103z00_552));
																							BgL_arg1242z00_558 =
																								CAR(BgL_pairz00_886);
																						}
																						{	/* Read/inline.scm 93 */
																							obj_t BgL_res1540z00_887;

																							BgL_res1540z00_887 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1242z00_558, BNIL);
																							BgL_newtail1107z00_556 =
																								BgL_res1540z00_887;
																						}
																					}
																					SET_CDR(BgL_tail1106z00_553,
																						BgL_newtail1107z00_556);
																					{	/* Read/inline.scm 93 */
																						obj_t BgL_arg1239z00_557;

																						BgL_arg1239z00_557 =
																							CDR(((obj_t) BgL_l1103z00_552));
																						{
																							obj_t BgL_tail1106z00_1181;
																							obj_t BgL_l1103z00_1180;

																							BgL_l1103z00_1180 =
																								BgL_arg1239z00_557;
																							BgL_tail1106z00_1181 =
																								BgL_newtail1107z00_556;
																							BgL_tail1106z00_553 =
																								BgL_tail1106z00_1181;
																							BgL_l1103z00_552 =
																								BgL_l1103z00_1180;
																							goto
																								BgL_zc3z04anonymousza31232ze3z87_554;
																						}
																					}
																				}
																		}
																	}
																}
																return
																	BGl_userzd2errorzd2zztools_errorz00
																	(BGl_string1587z00zzread_inlinez00,
																	BGl_string1589z00zzread_inlinez00,
																	BgL_arg1229z00_545, BNIL);
															}
														else
															{	/* Read/inline.scm 90 */
																if (PAIRP(BgL_expandersz00_518))
																	{	/* Read/inline.scm 97 */
																		obj_t BgL_arg1250z00_564;

																		{	/* Read/inline.scm 97 */
																			obj_t BgL_head1111z00_568;

																			{	/* Read/inline.scm 97 */
																				obj_t BgL_arg1268z00_580;

																				BgL_arg1268z00_580 =
																					CAR(CAR(BgL_expandersz00_518));
																				{	/* Read/inline.scm 97 */
																					obj_t BgL_res1543z00_894;

																					BgL_res1543z00_894 =
																						MAKE_YOUNG_PAIR(BgL_arg1268z00_580,
																						BNIL);
																					BgL_head1111z00_568 =
																						BgL_res1543z00_894;
																				}
																			}
																			{	/* Read/inline.scm 97 */
																				obj_t BgL_g1116z00_569;

																				BgL_g1116z00_569 =
																					CDR(BgL_expandersz00_518);
																				{
																					obj_t BgL_l1109z00_571;
																					obj_t BgL_tail1112z00_572;

																					BgL_l1109z00_571 = BgL_g1116z00_569;
																					BgL_tail1112z00_572 =
																						BgL_head1111z00_568;
																				BgL_zc3z04anonymousza31253ze3z87_573:
																					if (NULLP(BgL_l1109z00_571))
																						{	/* Read/inline.scm 97 */
																							BgL_arg1250z00_564 =
																								BgL_head1111z00_568;
																						}
																					else
																						{	/* Read/inline.scm 97 */
																							obj_t BgL_newtail1113z00_575;

																							{	/* Read/inline.scm 97 */
																								obj_t BgL_arg1258z00_577;

																								{	/* Read/inline.scm 97 */
																									obj_t BgL_pairz00_898;

																									BgL_pairz00_898 =
																										CAR(
																										((obj_t) BgL_l1109z00_571));
																									BgL_arg1258z00_577 =
																										CAR(BgL_pairz00_898);
																								}
																								{	/* Read/inline.scm 97 */
																									obj_t BgL_res1545z00_899;

																									BgL_res1545z00_899 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1258z00_577, BNIL);
																									BgL_newtail1113z00_575 =
																										BgL_res1545z00_899;
																								}
																							}
																							SET_CDR(BgL_tail1112z00_572,
																								BgL_newtail1113z00_575);
																							{	/* Read/inline.scm 97 */
																								obj_t BgL_arg1256z00_576;

																								BgL_arg1256z00_576 =
																									CDR(
																									((obj_t) BgL_l1109z00_571));
																								{
																									obj_t BgL_tail1112z00_1199;
																									obj_t BgL_l1109z00_1198;

																									BgL_l1109z00_1198 =
																										BgL_arg1256z00_576;
																									BgL_tail1112z00_1199 =
																										BgL_newtail1113z00_575;
																									BgL_tail1112z00_572 =
																										BgL_tail1112z00_1199;
																									BgL_l1109z00_571 =
																										BgL_l1109z00_1198;
																									goto
																										BgL_zc3z04anonymousza31253ze3z87_573;
																								}
																							}
																						}
																				}
																			}
																		}
																		return
																			BGl_userzd2errorzd2zztools_errorz00
																			(BGl_string1587z00zzread_inlinez00,
																			BGl_string1590z00zzread_inlinez00,
																			BgL_arg1250z00_564, BNIL);
																	}
																else
																	{	/* Read/inline.scm 101 */
																		obj_t BgL_arg1271z00_582;

																		if (NULLP(BgL_inlinesz00_515))
																			{	/* Read/inline.scm 101 */
																				BgL_arg1271z00_582 = BNIL;
																			}
																		else
																			{	/* Read/inline.scm 101 */
																				obj_t BgL_head1119z00_586;

																				{	/* Read/inline.scm 101 */
																					obj_t BgL_arg1281z00_598;

																					{	/* Read/inline.scm 101 */
																						obj_t BgL_pairz00_904;

																						BgL_pairz00_904 =
																							CAR(((obj_t) BgL_inlinesz00_515));
																						BgL_arg1281z00_598 =
																							CAR(BgL_pairz00_904);
																					}
																					{	/* Read/inline.scm 101 */
																						obj_t BgL_res1547z00_905;

																						BgL_res1547z00_905 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1281z00_598, BNIL);
																						BgL_head1119z00_586 =
																							BgL_res1547z00_905;
																					}
																				}
																				{	/* Read/inline.scm 101 */
																					obj_t BgL_g1122z00_587;

																					BgL_g1122z00_587 =
																						CDR(((obj_t) BgL_inlinesz00_515));
																					{
																						obj_t BgL_l1117z00_589;
																						obj_t BgL_tail1120z00_590;

																						BgL_l1117z00_589 = BgL_g1122z00_587;
																						BgL_tail1120z00_590 =
																							BgL_head1119z00_586;
																					BgL_zc3z04anonymousza31274ze3z87_591:
																						if (NULLP(BgL_l1117z00_589))
																							{	/* Read/inline.scm 101 */
																								BgL_arg1271z00_582 =
																									BgL_head1119z00_586;
																							}
																						else
																							{	/* Read/inline.scm 101 */
																								obj_t BgL_newtail1121z00_593;

																								{	/* Read/inline.scm 101 */
																									obj_t BgL_arg1277z00_595;

																									{	/* Read/inline.scm 101 */
																										obj_t BgL_pairz00_909;

																										BgL_pairz00_909 =
																											CAR(
																											((obj_t)
																												BgL_l1117z00_589));
																										BgL_arg1277z00_595 =
																											CAR(BgL_pairz00_909);
																									}
																									{	/* Read/inline.scm 101 */
																										obj_t BgL_res1549z00_910;

																										BgL_res1549z00_910 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1277z00_595,
																											BNIL);
																										BgL_newtail1121z00_593 =
																											BgL_res1549z00_910;
																									}
																								}
																								SET_CDR(BgL_tail1120z00_590,
																									BgL_newtail1121z00_593);
																								{	/* Read/inline.scm 101 */
																									obj_t BgL_arg1276z00_594;

																									BgL_arg1276z00_594 =
																										CDR(
																										((obj_t) BgL_l1117z00_589));
																									{
																										obj_t BgL_tail1120z00_1219;
																										obj_t BgL_l1117z00_1218;

																										BgL_l1117z00_1218 =
																											BgL_arg1276z00_594;
																										BgL_tail1120z00_1219 =
																											BgL_newtail1121z00_593;
																										BgL_tail1120z00_590 =
																											BgL_tail1120z00_1219;
																										BgL_l1117z00_589 =
																											BgL_l1117z00_1218;
																										goto
																											BgL_zc3z04anonymousza31274ze3z87_591;
																									}
																								}
																							}
																					}
																				}
																			}
																		return
																			BGl_userzd2errorzd2zztools_errorz00
																			(BGl_string1587z00zzread_inlinez00,
																			BGl_string1591z00zzread_inlinez00,
																			BgL_arg1271z00_582, BNIL);
																	}
															}
													}
											}
										else
											{	/* Read/inline.scm 102 */
												obj_t BgL_fnamez00_600;

												{	/* Read/inline.scm 102 */
													obj_t BgL_arg1292z00_615;

													BgL_arg1292z00_615 = CAR(((obj_t) BgL_fnamesz00_512));
													BgL_fnamez00_600 =
														BGl_findzd2filezf2pathz20zz__osz00
														(BgL_arg1292z00_615,
														BGl_za2loadzd2pathza2zd2zz__evalz00);
												}
												if (STRINGP(BgL_fnamez00_600))
													{	/* Read/inline.scm 105 */
														obj_t BgL_portz00_602;

														BgL_portz00_602 =
															BGl_openzd2inlinezd2filez00zzread_inlinez00
															(BgL_fnamez00_600);
														{	/* Read/inline.scm 106 */
															obj_t BgL_exitd1067z00_603;

															BgL_exitd1067z00_603 = BGL_EXITD_TOP_AS_OBJ();
															{	/* Read/inline.scm 114 */
																obj_t BgL_zc3z04anonymousza31288ze3z87_1014;

																BgL_zc3z04anonymousza31288ze3z87_1014 =
																	MAKE_FX_PROCEDURE
																	(BGl_z62zc3z04anonymousza31288ze3ze5zzread_inlinez00,
																	(int) (((long) 0)), (int) (((long) 1)));
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31288ze3z87_1014,
																	(int) (((long) 0)), BgL_portz00_602);
																BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
																	(BgL_exitd1067z00_603,
																	BgL_zc3z04anonymousza31288ze3z87_1014);
																{	/* Read/inline.scm 111 */
																	obj_t BgL_tmp1069z00_605;

																	{	/* Read/inline.scm 111 */
																		obj_t BgL_arg1284z00_606;
																		obj_t BgL_arg1285z00_607;

																		{	/* Read/inline.scm 111 */
																			obj_t BgL_list1286z00_608;

																			{	/* Read/inline.scm 111 */
																				obj_t BgL_arg1287z00_609;

																				BgL_arg1287z00_609 =
																					MAKE_YOUNG_PAIR(BTRUE, BNIL);
																				BgL_list1286z00_608 =
																					MAKE_YOUNG_PAIR(BgL_portz00_602,
																					BgL_arg1287z00_609);
																			}
																			BgL_arg1284z00_606 =
																				BGl_compilerzd2readzd2zzread_readerz00
																				(BgL_list1286z00_608);
																		}
																		BgL_arg1285z00_607 =
																			CDR(((obj_t) BgL_fnamesz00_512));
																		BgL_tmp1069z00_605 =
																			BGl_loopze70ze7zzread_inlinez00
																			(BgL_modulez00_1020, BgL_inlinesz00_515,
																			BgL_macrosz00_516, BgL_syntaxesz00_517,
																			BgL_expandersz00_518, BgL_arg1284z00_606,
																			BgL_arg1285z00_607, BgL_portz00_602);
																	}
																	BGl_exitdzd2popzd2protectz12z12zz__bexitz00
																		(BgL_exitd1067z00_603);
																	BGl_z62zc3z04anonymousza31288ze3ze5zzread_inlinez00
																		(BgL_zc3z04anonymousza31288ze3z87_1014);
																	return BgL_tmp1069z00_605;
																}
															}
														}
													}
												else
													{	/* Read/inline.scm 104 */
														obj_t BgL_arg1290z00_613;

														BgL_arg1290z00_613 =
															CAR(((obj_t) BgL_fnamesz00_512));
														return
															BGl_userzd2errorzd2zztools_errorz00
															(BGl_string1587z00zzread_inlinez00,
															BGl_string1592z00zzread_inlinez00,
															BgL_arg1290z00_613, BNIL);
													}
											}
									}
								else
									{	/* Read/inline.scm 121 */
										obj_t BgL_arg1295z00_616;

										{	/* Read/inline.scm 121 */
											obj_t BgL_list1296z00_617;

											{	/* Read/inline.scm 121 */
												obj_t BgL_arg1297z00_618;

												BgL_arg1297z00_618 = MAKE_YOUNG_PAIR(BTRUE, BNIL);
												BgL_list1296z00_617 =
													MAKE_YOUNG_PAIR(BgL_portz00_513, BgL_arg1297z00_618);
											}
											BgL_arg1295z00_616 =
												BGl_compilerzd2readzd2zzread_readerz00
												(BgL_list1296z00_617);
										}
										{
											obj_t BgL_expz00_1252;
											obj_t BgL_expandersz00_1251;
											obj_t BgL_syntaxesz00_1250;
											obj_t BgL_macrosz00_1249;
											obj_t BgL_inlinesz00_1248;

											BgL_inlinesz00_1248 = BgL_inlinesz00_515;
											BgL_macrosz00_1249 = BgL_macrosz00_516;
											BgL_syntaxesz00_1250 = BgL_syntaxesz00_517;
											BgL_expandersz00_1251 = BgL_expandersz00_518;
											BgL_expz00_1252 = BgL_arg1295z00_616;
											BgL_expz00_511 = BgL_expz00_1252;
											BgL_expandersz00_510 = BgL_expandersz00_1251;
											BgL_syntaxesz00_509 = BgL_syntaxesz00_1250;
											BgL_macrosz00_508 = BgL_macrosz00_1249;
											BgL_inlinesz00_507 = BgL_inlinesz00_1248;
											goto BGl_loopze70ze7zzread_inlinez00;
										}
									}
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1288> */
	obj_t BGl_z62zc3z04anonymousza31288ze3ze5zzread_inlinez00(obj_t
		BgL_envz00_1015)
	{
		{	/* Read/inline.scm 106 */
			{	/* Read/inline.scm 114 */
				obj_t BgL_portz00_1016;

				BgL_portz00_1016 = PROCEDURE_REF(BgL_envz00_1015, (int) (((long) 0)));
				if (INPUT_PORTP(BgL_portz00_1016))
					{	/* Read/inline.scm 114 */
						return bgl_close_input_port(BgL_portz00_1016);
					}
				else
					{	/* Read/inline.scm 114 */
						return BFALSE;
					}
			}
		}

	}



/* look-for/exp */
	obj_t BGl_lookzd2forzf2expz20zzread_inlinez00(obj_t BgL_inlinesz00_43,
		obj_t BgL_macrosz00_44, obj_t BgL_syntaxesz00_45, obj_t BgL_expandersz00_46,
		obj_t BgL_expz00_47, obj_t BgL_modulez00_48)
	{
		{	/* Read/inline.scm 128 */
			{	/* Read/inline.scm 129 */
				bool_t BgL_test1637z00_1258;

				if (NULLP(BgL_inlinesz00_43))
					{	/* Read/inline.scm 129 */
						if (NULLP(BgL_macrosz00_44))
							{	/* Read/inline.scm 129 */
								if (NULLP(BgL_syntaxesz00_45))
									{	/* Read/inline.scm 129 */
										BgL_test1637z00_1258 = NULLP(BgL_expandersz00_46);
									}
								else
									{	/* Read/inline.scm 129 */
										BgL_test1637z00_1258 = ((bool_t) 0);
									}
							}
						else
							{	/* Read/inline.scm 129 */
								BgL_test1637z00_1258 = ((bool_t) 0);
							}
					}
				else
					{	/* Read/inline.scm 129 */
						BgL_test1637z00_1258 = ((bool_t) 0);
					}
				if (BgL_test1637z00_1258)
					{	/* Read/inline.scm 129 */
						{	/* Read/inline.scm 130 */
							int BgL_res1555z00_922;

							{	/* Read/inline.scm 130 */
								int BgL_tmpz00_1266;

								BgL_tmpz00_1266 = (int) (((long) 4));
								BgL_res1555z00_922 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1266);
							} BgL_res1555z00_922;
						}
						{	/* Read/inline.scm 130 */
							int BgL_tmpz00_1269;

							BgL_tmpz00_1269 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_1269, BNIL);
						}
						{	/* Read/inline.scm 130 */
							int BgL_tmpz00_1272;

							BgL_tmpz00_1272 = (int) (((long) 2));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_1272, BNIL);
						}
						{	/* Read/inline.scm 130 */
							int BgL_tmpz00_1275;

							BgL_tmpz00_1275 = (int) (((long) 3));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_1275, BNIL);
						}
						return BNIL;
					}
				else
					{
						obj_t BgL_expza2za2_644;
						obj_t BgL_expza2za2_642;
						obj_t BgL_idz00_640;
						obj_t BgL_idz00_638;
						obj_t BgL_idz00_636;
						obj_t BgL_protoz00_632;
						obj_t BgL_namez00_633;
						obj_t BgL_bodyz00_634;

						if (PAIRP(BgL_expz00_47))
							{	/* Read/inline.scm 131 */
								obj_t BgL_cdrzd2376zd2_649;

								BgL_cdrzd2376zd2_649 = CDR(BgL_expz00_47);
								if ((CAR(BgL_expz00_47) == CNST_TABLE_REF(((long) 7))))
									{	/* Read/inline.scm 131 */
										if (PAIRP(BgL_cdrzd2376zd2_649))
											{	/* Read/inline.scm 131 */
												obj_t BgL_carzd2380zd2_653;

												BgL_carzd2380zd2_653 = CAR(BgL_cdrzd2376zd2_649);
												if (PAIRP(BgL_carzd2380zd2_653))
													{	/* Read/inline.scm 131 */
														BgL_protoz00_632 = BgL_carzd2380zd2_653;
														BgL_namez00_633 = CAR(BgL_carzd2380zd2_653);
														BgL_bodyz00_634 = CDR(BgL_cdrzd2376zd2_649);
														{	/* Read/inline.scm 133 */
															obj_t BgL_idz00_689;

															BgL_idz00_689 =
																BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																(BgL_namez00_633,
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_expz00_47));
															{	/* Read/inline.scm 133 */
																obj_t BgL_cellz00_690;

																BgL_cellz00_690 =
																	BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_idz00_689, BgL_inlinesz00_43);
																{	/* Read/inline.scm 134 */
																	obj_t BgL_inlz00_691;

																	{	/* Read/inline.scm 135 */
																		bool_t BgL_test1646z00_1293;

																		if (PAIRP(BgL_cellz00_690))
																			{	/* Read/inline.scm 135 */
																				BgL_test1646z00_1293 =
																					(CDR(BgL_cellz00_690) ==
																					CNST_TABLE_REF(((long) 3)));
																			}
																		else
																			{	/* Read/inline.scm 135 */
																				BgL_test1646z00_1293 = ((bool_t) 0);
																			}
																		if (BgL_test1646z00_1293)
																			{	/* Read/inline.scm 135 */
																				{	/* Read/inline.scm 137 */
																					obj_t BgL_arg1351z00_699;

																					{	/* Read/inline.scm 137 */
																						obj_t BgL_arg1352z00_700;

																						{	/* Read/inline.scm 137 */
																							obj_t BgL_arg1357z00_701;

																							BgL_arg1357z00_701 =
																								MAKE_YOUNG_PAIR
																								(BgL_modulez00_48, BNIL);
																							BgL_arg1352z00_700 =
																								MAKE_YOUNG_PAIR(BgL_idz00_689,
																								BgL_arg1357z00_701);
																						}
																						BgL_arg1351z00_699 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 4)),
																							BgL_arg1352z00_700);
																					}
																					SET_CAR(BgL_protoz00_632,
																						BgL_arg1351z00_699);
																				}
																				BGl_za2inlinezd2definitionsza2zd2zzread_inlinez00
																					=
																					MAKE_YOUNG_PAIR(BgL_expz00_47,
																					BGl_za2inlinezd2definitionsza2zd2zzread_inlinez00);
																				BgL_inlz00_691 =
																					bgl_remq_bang(BgL_cellz00_690,
																					BgL_inlinesz00_43);
																			}
																		else
																			{	/* Read/inline.scm 135 */
																				BgL_inlz00_691 = BgL_inlinesz00_43;
																			}
																	}
																	{	/* Read/inline.scm 135 */

																		{	/* Read/inline.scm 142 */
																			int BgL_res1557z00_926;

																			{	/* Read/inline.scm 142 */
																				int BgL_tmpz00_1306;

																				BgL_tmpz00_1306 = (int) (((long) 4));
																				BgL_res1557z00_926 =
																					BGL_MVALUES_NUMBER_SET
																					(BgL_tmpz00_1306);
																			} BgL_res1557z00_926;
																		}
																		{	/* Read/inline.scm 142 */
																			int BgL_tmpz00_1309;

																			BgL_tmpz00_1309 = (int) (((long) 1));
																			BGL_MVALUES_VAL_SET(BgL_tmpz00_1309,
																				BgL_macrosz00_44);
																		}
																		{	/* Read/inline.scm 142 */
																			int BgL_tmpz00_1312;

																			BgL_tmpz00_1312 = (int) (((long) 2));
																			BGL_MVALUES_VAL_SET(BgL_tmpz00_1312,
																				BgL_syntaxesz00_45);
																		}
																		{	/* Read/inline.scm 142 */
																			int BgL_tmpz00_1315;

																			BgL_tmpz00_1315 = (int) (((long) 3));
																			BGL_MVALUES_VAL_SET(BgL_tmpz00_1315,
																				BgL_expandersz00_46);
																		}
																		return BgL_inlz00_691;
																	}
																}
															}
														}
													}
												else
													{	/* Read/inline.scm 131 */
													BgL_tagzd2365zd2_646:
														{	/* Read/inline.scm 208 */
															int BgL_res1570z00_950;

															{	/* Read/inline.scm 208 */
																int BgL_tmpz00_1320;

																BgL_tmpz00_1320 = (int) (((long) 4));
																BgL_res1570z00_950 =
																	BGL_MVALUES_NUMBER_SET(BgL_tmpz00_1320);
															} BgL_res1570z00_950;
														}
														{	/* Read/inline.scm 208 */
															int BgL_tmpz00_1323;

															BgL_tmpz00_1323 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_1323,
																BgL_macrosz00_44);
														}
														{	/* Read/inline.scm 208 */
															int BgL_tmpz00_1326;

															BgL_tmpz00_1326 = (int) (((long) 2));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_1326,
																BgL_syntaxesz00_45);
														}
														{	/* Read/inline.scm 208 */
															int BgL_tmpz00_1329;

															BgL_tmpz00_1329 = (int) (((long) 3));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_1329,
																BgL_expandersz00_46);
														}
														return BgL_inlinesz00_43;
													}
											}
										else
											{	/* Read/inline.scm 131 */
												goto BgL_tagzd2365zd2_646;
											}
									}
								else
									{	/* Read/inline.scm 131 */
										if ((CAR(BgL_expz00_47) == CNST_TABLE_REF(((long) 8))))
											{	/* Read/inline.scm 131 */
												if (PAIRP(BgL_cdrzd2376zd2_649))
													{	/* Read/inline.scm 131 */
														obj_t BgL_carzd2423zd2_661;

														BgL_carzd2423zd2_661 = CAR(BgL_cdrzd2376zd2_649);
														if (PAIRP(BgL_carzd2423zd2_661))
															{	/* Read/inline.scm 131 */
																obj_t BgL_carzd2426zd2_663;

																BgL_carzd2426zd2_663 =
																	CAR(BgL_carzd2423zd2_661);
																if (SYMBOLP(BgL_carzd2426zd2_663))
																	{	/* Read/inline.scm 131 */
																		BgL_idz00_636 = BgL_carzd2426zd2_663;
																		{	/* Read/inline.scm 144 */
																			obj_t BgL_cellz00_705;

																			BgL_cellz00_705 =
																				BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_idz00_636, BgL_macrosz00_44);
																			{	/* Read/inline.scm 144 */
																				obj_t BgL_macz00_706;

																				if (PAIRP(BgL_cellz00_705))
																					{	/* Read/inline.scm 145 */
																						BGl_za2macrozd2definitionsza2zd2zzread_inlinez00
																							=
																							MAKE_YOUNG_PAIR(BgL_expz00_47,
																							BGl_za2macrozd2definitionsza2zd2zzread_inlinez00);
																						BgL_macz00_706 =
																							bgl_remq_bang(BgL_cellz00_705,
																							BgL_macrosz00_44);
																					}
																				else
																					{	/* Read/inline.scm 145 */
																						BgL_macz00_706 = BgL_macrosz00_44;
																					}
																				{	/* Read/inline.scm 145 */

																					{	/* Read/inline.scm 151 */
																						int BgL_res1559z00_928;

																						{	/* Read/inline.scm 151 */
																							int BgL_tmpz00_1349;

																							BgL_tmpz00_1349 =
																								(int) (((long) 4));
																							BgL_res1559z00_928 =
																								BGL_MVALUES_NUMBER_SET
																								(BgL_tmpz00_1349);
																						} BgL_res1559z00_928;
																					}
																					{	/* Read/inline.scm 151 */
																						int BgL_tmpz00_1352;

																						BgL_tmpz00_1352 =
																							(int) (((long) 1));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_1352,
																							BgL_macz00_706);
																					}
																					{	/* Read/inline.scm 151 */
																						int BgL_tmpz00_1355;

																						BgL_tmpz00_1355 =
																							(int) (((long) 2));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_1355,
																							BgL_syntaxesz00_45);
																					}
																					{	/* Read/inline.scm 151 */
																						int BgL_tmpz00_1358;

																						BgL_tmpz00_1358 =
																							(int) (((long) 3));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_1358,
																							BgL_expandersz00_46);
																					}
																					return BgL_inlinesz00_43;
																				}
																			}
																		}
																	}
																else
																	{	/* Read/inline.scm 131 */
																		goto BgL_tagzd2365zd2_646;
																	}
															}
														else
															{	/* Read/inline.scm 131 */
																goto BgL_tagzd2365zd2_646;
															}
													}
												else
													{	/* Read/inline.scm 131 */
														goto BgL_tagzd2365zd2_646;
													}
											}
										else
											{	/* Read/inline.scm 131 */
												obj_t BgL_cdrzd2464zd2_665;

												BgL_cdrzd2464zd2_665 = CDR(BgL_expz00_47);
												if ((CAR(BgL_expz00_47) == CNST_TABLE_REF(((long) 9))))
													{	/* Read/inline.scm 131 */
														if (PAIRP(BgL_cdrzd2464zd2_665))
															{	/* Read/inline.scm 131 */
																obj_t BgL_carzd2466zd2_669;

																BgL_carzd2466zd2_669 =
																	CAR(BgL_cdrzd2464zd2_665);
																if (SYMBOLP(BgL_carzd2466zd2_669))
																	{	/* Read/inline.scm 131 */
																		BgL_idz00_638 = BgL_carzd2466zd2_669;
																		{	/* Read/inline.scm 153 */
																			obj_t BgL_cellz00_712;

																			BgL_cellz00_712 =
																				BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																				(BgL_idz00_638, BgL_syntaxesz00_45);
																			{	/* Read/inline.scm 153 */
																				obj_t BgL_synz00_713;

																				if (PAIRP(BgL_cellz00_712))
																					{	/* Read/inline.scm 154 */
																						BGl_za2macrozd2definitionsza2zd2zzread_inlinez00
																							=
																							MAKE_YOUNG_PAIR(BgL_expz00_47,
																							BGl_za2macrozd2definitionsza2zd2zzread_inlinez00);
																						BgL_synz00_713 =
																							bgl_remq_bang(BgL_cellz00_712,
																							BgL_syntaxesz00_45);
																					}
																				else
																					{	/* Read/inline.scm 154 */
																						BgL_synz00_713 = BgL_syntaxesz00_45;
																					}
																				{	/* Read/inline.scm 154 */

																					{	/* Read/inline.scm 160 */
																						int BgL_res1561z00_930;

																						{	/* Read/inline.scm 160 */
																							int BgL_tmpz00_1376;

																							BgL_tmpz00_1376 =
																								(int) (((long) 4));
																							BgL_res1561z00_930 =
																								BGL_MVALUES_NUMBER_SET
																								(BgL_tmpz00_1376);
																						} BgL_res1561z00_930;
																					}
																					{	/* Read/inline.scm 160 */
																						int BgL_tmpz00_1379;

																						BgL_tmpz00_1379 =
																							(int) (((long) 1));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_1379,
																							BgL_macrosz00_44);
																					}
																					{	/* Read/inline.scm 160 */
																						int BgL_tmpz00_1382;

																						BgL_tmpz00_1382 =
																							(int) (((long) 2));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_1382,
																							BgL_synz00_713);
																					}
																					{	/* Read/inline.scm 160 */
																						int BgL_tmpz00_1385;

																						BgL_tmpz00_1385 =
																							(int) (((long) 3));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_1385,
																							BgL_expandersz00_46);
																					}
																					return BgL_inlinesz00_43;
																				}
																			}
																		}
																	}
																else
																	{	/* Read/inline.scm 131 */
																		goto BgL_tagzd2365zd2_646;
																	}
															}
														else
															{	/* Read/inline.scm 131 */
																goto BgL_tagzd2365zd2_646;
															}
													}
												else
													{	/* Read/inline.scm 131 */
														if (
															(CAR(BgL_expz00_47) ==
																CNST_TABLE_REF(((long) 10))))
															{	/* Read/inline.scm 131 */
																if (PAIRP(BgL_cdrzd2464zd2_665))
																	{	/* Read/inline.scm 131 */
																		obj_t BgL_carzd2490zd2_675;

																		BgL_carzd2490zd2_675 =
																			CAR(BgL_cdrzd2464zd2_665);
																		if (SYMBOLP(BgL_carzd2490zd2_675))
																			{	/* Read/inline.scm 131 */
																				BgL_idz00_640 = BgL_carzd2490zd2_675;
																				{	/* Read/inline.scm 162 */
																					obj_t BgL_cellz00_719;

																					BgL_cellz00_719 =
																						BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																						(BgL_idz00_640,
																						BgL_expandersz00_46);
																					{	/* Read/inline.scm 162 */
																						obj_t BgL_expdz00_720;

																						if (PAIRP(BgL_cellz00_719))
																							{	/* Read/inline.scm 163 */
																								BGl_za2macrozd2definitionsza2zd2zzread_inlinez00
																									=
																									MAKE_YOUNG_PAIR(BgL_expz00_47,
																									BGl_za2macrozd2definitionsza2zd2zzread_inlinez00);
																								BgL_expdz00_720 =
																									bgl_remq_bang(BgL_cellz00_719,
																									BgL_expandersz00_46);
																							}
																						else
																							{	/* Read/inline.scm 163 */
																								BgL_expdz00_720 =
																									BgL_expandersz00_46;
																							}
																						{	/* Read/inline.scm 163 */

																							{	/* Read/inline.scm 169 */
																								int BgL_res1563z00_932;

																								{	/* Read/inline.scm 169 */
																									int BgL_tmpz00_1402;

																									BgL_tmpz00_1402 =
																										(int) (((long) 4));
																									BgL_res1563z00_932 =
																										BGL_MVALUES_NUMBER_SET
																										(BgL_tmpz00_1402);
																								} BgL_res1563z00_932;
																							}
																							{	/* Read/inline.scm 169 */
																								int BgL_tmpz00_1405;

																								BgL_tmpz00_1405 =
																									(int) (((long) 1));
																								BGL_MVALUES_VAL_SET
																									(BgL_tmpz00_1405,
																									BgL_macrosz00_44);
																							}
																							{	/* Read/inline.scm 169 */
																								int BgL_tmpz00_1408;

																								BgL_tmpz00_1408 =
																									(int) (((long) 2));
																								BGL_MVALUES_VAL_SET
																									(BgL_tmpz00_1408,
																									BgL_syntaxesz00_45);
																							}
																							{	/* Read/inline.scm 169 */
																								int BgL_tmpz00_1411;

																								BgL_tmpz00_1411 =
																									(int) (((long) 3));
																								BGL_MVALUES_VAL_SET
																									(BgL_tmpz00_1411,
																									BgL_expdz00_720);
																							}
																							return BgL_inlinesz00_43;
																						}
																					}
																				}
																			}
																		else
																			{	/* Read/inline.scm 131 */
																				goto BgL_tagzd2365zd2_646;
																			}
																	}
																else
																	{	/* Read/inline.scm 131 */
																		goto BgL_tagzd2365zd2_646;
																	}
															}
														else
															{	/* Read/inline.scm 131 */
																if (
																	(CAR(BgL_expz00_47) ==
																		CNST_TABLE_REF(((long) 1))))
																	{	/* Read/inline.scm 131 */
																		BgL_expza2za2_642 = CDR(BgL_expz00_47);
																		{
																			obj_t BgL_inlinesz00_727;
																			obj_t BgL_macrosz00_728;
																			obj_t BgL_syntaxesz00_729;
																			obj_t BgL_expandersz00_730;
																			obj_t BgL_expza2za2_731;

																			BgL_inlinesz00_727 = BgL_inlinesz00_43;
																			BgL_macrosz00_728 = BgL_macrosz00_44;
																			BgL_syntaxesz00_729 = BgL_syntaxesz00_45;
																			BgL_expandersz00_730 =
																				BgL_expandersz00_46;
																			BgL_expza2za2_731 = BgL_expza2za2_642;
																		BgL_zc3z04anonymousza31366ze3z87_732:
																			if (NULLP(BgL_expza2za2_731))
																				{	/* Read/inline.scm 176 */
																					{	/* Read/inline.scm 177 */
																						int BgL_res1565z00_934;

																						{	/* Read/inline.scm 177 */
																							int BgL_tmpz00_1420;

																							BgL_tmpz00_1420 =
																								(int) (((long) 4));
																							BgL_res1565z00_934 =
																								BGL_MVALUES_NUMBER_SET
																								(BgL_tmpz00_1420);
																						} BgL_res1565z00_934;
																					}
																					{	/* Read/inline.scm 177 */
																						int BgL_tmpz00_1423;

																						BgL_tmpz00_1423 =
																							(int) (((long) 1));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_1423,
																							BgL_macrosz00_728);
																					}
																					{	/* Read/inline.scm 177 */
																						int BgL_tmpz00_1426;

																						BgL_tmpz00_1426 =
																							(int) (((long) 2));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_1426,
																							BgL_syntaxesz00_729);
																					}
																					{	/* Read/inline.scm 177 */
																						int BgL_tmpz00_1429;

																						BgL_tmpz00_1429 =
																							(int) (((long) 3));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_1429,
																							BgL_expandersz00_730);
																					}
																					return BgL_inlinesz00_727;
																				}
																			else
																				{	/* Read/inline.scm 178 */
																					obj_t BgL_inlinesz00_738;

																					{	/* Read/inline.scm 179 */
																						obj_t BgL_arg1371z00_743;

																						BgL_arg1371z00_743 =
																							CAR(((obj_t) BgL_expza2za2_731));
																						BgL_inlinesz00_738 =
																							BGl_lookzd2forzf2expz20zzread_inlinez00
																							(BgL_inlinesz00_727,
																							BgL_macrosz00_728,
																							BgL_syntaxesz00_729,
																							BgL_expandersz00_730,
																							BgL_arg1371z00_743,
																							BgL_modulez00_48);
																					}
																					{	/* Read/inline.scm 179 */
																						obj_t BgL_macrosz00_739;
																						obj_t BgL_syntaxesz00_740;
																						obj_t BgL_expandersz00_741;

																						{	/* Read/inline.scm 180 */
																							int BgL_tmpz00_1435;

																							BgL_tmpz00_1435 =
																								(int) (((long) 1));
																							BgL_macrosz00_739 =
																								BGL_MVALUES_VAL
																								(BgL_tmpz00_1435);
																						}
																						{	/* Read/inline.scm 180 */
																							int BgL_tmpz00_1438;

																							BgL_tmpz00_1438 =
																								(int) (((long) 2));
																							BgL_syntaxesz00_740 =
																								BGL_MVALUES_VAL
																								(BgL_tmpz00_1438);
																						}
																						{	/* Read/inline.scm 180 */
																							int BgL_tmpz00_1441;

																							BgL_tmpz00_1441 =
																								(int) (((long) 3));
																							BgL_expandersz00_741 =
																								BGL_MVALUES_VAL
																								(BgL_tmpz00_1441);
																						}
																						{	/* Read/inline.scm 180 */
																							obj_t BgL_arg1370z00_742;

																							BgL_arg1370z00_742 =
																								CDR(
																								((obj_t) BgL_expza2za2_731));
																							{
																								obj_t BgL_expza2za2_1450;
																								obj_t BgL_expandersz00_1449;
																								obj_t BgL_syntaxesz00_1448;
																								obj_t BgL_macrosz00_1447;
																								obj_t BgL_inlinesz00_1446;

																								BgL_inlinesz00_1446 =
																									BgL_inlinesz00_738;
																								BgL_macrosz00_1447 =
																									BgL_macrosz00_739;
																								BgL_syntaxesz00_1448 =
																									BgL_syntaxesz00_740;
																								BgL_expandersz00_1449 =
																									BgL_expandersz00_741;
																								BgL_expza2za2_1450 =
																									BgL_arg1370z00_742;
																								BgL_expza2za2_731 =
																									BgL_expza2za2_1450;
																								BgL_expandersz00_730 =
																									BgL_expandersz00_1449;
																								BgL_syntaxesz00_729 =
																									BgL_syntaxesz00_1448;
																								BgL_macrosz00_728 =
																									BgL_macrosz00_1447;
																								BgL_inlinesz00_727 =
																									BgL_inlinesz00_1446;
																								goto
																									BgL_zc3z04anonymousza31366ze3z87_732;
																							}
																						}
																					}
																				}
																		}
																	}
																else
																	{	/* Read/inline.scm 131 */
																		if (
																			(CAR(BgL_expz00_47) ==
																				CNST_TABLE_REF(((long) 11))))
																			{	/* Read/inline.scm 131 */
																				BgL_expza2za2_644 = CDR(BgL_expz00_47);
																				{	/* Read/inline.scm 186 */
																					obj_t BgL_g1070z00_745;

																					{
																						obj_t BgL_expza2za2_762;

																						BgL_expza2za2_762 =
																							BgL_expza2za2_644;
																					BgL_zc3z04anonymousza31383ze3z87_763:
																						if (NULLP(BgL_expza2za2_762))
																							{	/* Read/inline.scm 191 */
																								BgL_g1070z00_745 = BNIL;
																							}
																						else
																							{
																								obj_t BgL_clausez00_765;
																								obj_t BgL_rz00_766;

																								{	/* Read/inline.scm 193 */
																									obj_t BgL_ezd2528zd2_771;

																									BgL_ezd2528zd2_771 =
																										CAR(
																										((obj_t)
																											BgL_expza2za2_762));
																									if (PAIRP(BgL_ezd2528zd2_771))
																										{	/* Read/inline.scm 193 */
																											obj_t
																												BgL_carzd2534zd2_773;
																											BgL_carzd2534zd2_773 =
																												CAR(BgL_ezd2528zd2_771);
																											if (SYMBOLP
																												(BgL_carzd2534zd2_773))
																												{	/* Read/inline.scm 193 */
																													BgL_clausez00_765 =
																														BgL_carzd2534zd2_773;
																													BgL_rz00_766 =
																														CDR
																														(BgL_ezd2528zd2_771);
																													{	/* Read/inline.scm 195 */
																														bool_t
																															BgL_test1668z00_1465;
																														if (BGl_compilezd2srfizf3z21zz__expander_srfi0z00(BgL_clausez00_765))
																															{	/* Read/inline.scm 195 */
																																BgL_test1668z00_1465
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Read/inline.scm 195 */
																																BgL_test1668z00_1465
																																	=
																																	(BgL_clausez00_765
																																	==
																																	CNST_TABLE_REF
																																	(((long) 5)));
																															}
																														if (BgL_test1668z00_1465)
																															{	/* Read/inline.scm 195 */
																																BgL_g1070z00_745
																																	=
																																	BgL_rz00_766;
																															}
																														else
																															{	/* Read/inline.scm 197 */
																																obj_t
																																	BgL_arg1421z00_782;
																																BgL_arg1421z00_782
																																	=
																																	CDR(((obj_t)
																																		BgL_expza2za2_762));
																																{
																																	obj_t
																																		BgL_expza2za2_1472;
																																	BgL_expza2za2_1472
																																		=
																																		BgL_arg1421z00_782;
																																	BgL_expza2za2_762
																																		=
																																		BgL_expza2za2_1472;
																																	goto
																																		BgL_zc3z04anonymousza31383ze3z87_763;
																																}
																															}
																													}
																												}
																											else
																												{	/* Read/inline.scm 193 */
																													if (
																														(BgL_carzd2534zd2_773
																															==
																															CNST_TABLE_REF((
																																	(long) 6))))
																														{	/* Read/inline.scm 193 */
																															BgL_g1070z00_745 =
																																CDR
																																(BgL_ezd2528zd2_771);
																														}
																													else
																														{	/* Read/inline.scm 193 */
																														BgL_tagzd2527zd2_770:
																															{	/* Read/inline.scm 201 */
																																obj_t
																																	BgL_arg1422z00_784;
																																BgL_arg1422z00_784
																																	=
																																	CDR(((obj_t)
																																		BgL_expza2za2_762));
																																{
																																	obj_t
																																		BgL_expza2za2_1480;
																																	BgL_expza2za2_1480
																																		=
																																		BgL_arg1422z00_784;
																																	BgL_expza2za2_762
																																		=
																																		BgL_expza2za2_1480;
																																	goto
																																		BgL_zc3z04anonymousza31383ze3z87_763;
																																}
																															}
																														}
																												}
																										}
																									else
																										{	/* Read/inline.scm 193 */
																											goto BgL_tagzd2527zd2_770;
																										}
																								}
																							}
																					}
																					{
																						obj_t BgL_inlinesz00_747;
																						obj_t BgL_macrosz00_748;
																						obj_t BgL_syntaxesz00_749;
																						obj_t BgL_expandersz00_750;
																						obj_t BgL_expza2za2_751;

																						BgL_inlinesz00_747 =
																							BgL_inlinesz00_43;
																						BgL_macrosz00_748 =
																							BgL_macrosz00_44;
																						BgL_syntaxesz00_749 =
																							BgL_syntaxesz00_45;
																						BgL_expandersz00_750 =
																							BgL_expandersz00_46;
																						BgL_expza2za2_751 =
																							BgL_g1070z00_745;
																					BgL_zc3z04anonymousza31372ze3z87_752:
																						if (NULLP(BgL_expza2za2_751))
																							{	/* Read/inline.scm 202 */
																								return BgL_inlinesz00_747;
																							}
																						else
																							{	/* Read/inline.scm 204 */
																								obj_t BgL_inlinesz00_754;

																								{	/* Read/inline.scm 205 */
																									obj_t BgL_arg1382z00_759;

																									BgL_arg1382z00_759 =
																										CAR(
																										((obj_t)
																											BgL_expza2za2_751));
																									BgL_inlinesz00_754 =
																										BGl_lookzd2forzf2expz20zzread_inlinez00
																										(BgL_inlinesz00_747,
																										BgL_macrosz00_748,
																										BgL_syntaxesz00_749,
																										BgL_expandersz00_750,
																										BgL_arg1382z00_759,
																										BgL_modulez00_48);
																								}
																								{	/* Read/inline.scm 205 */
																									obj_t BgL_macrosz00_755;
																									obj_t BgL_syntaxesz00_756;
																									obj_t BgL_expandersz00_757;

																									{	/* Read/inline.scm 206 */
																										int BgL_tmpz00_1486;

																										BgL_tmpz00_1486 =
																											(int) (((long) 1));
																										BgL_macrosz00_755 =
																											BGL_MVALUES_VAL
																											(BgL_tmpz00_1486);
																									}
																									{	/* Read/inline.scm 206 */
																										int BgL_tmpz00_1489;

																										BgL_tmpz00_1489 =
																											(int) (((long) 2));
																										BgL_syntaxesz00_756 =
																											BGL_MVALUES_VAL
																											(BgL_tmpz00_1489);
																									}
																									{	/* Read/inline.scm 206 */
																										int BgL_tmpz00_1492;

																										BgL_tmpz00_1492 =
																											(int) (((long) 3));
																										BgL_expandersz00_757 =
																											BGL_MVALUES_VAL
																											(BgL_tmpz00_1492);
																									}
																									{	/* Read/inline.scm 206 */
																										obj_t BgL_arg1381z00_758;

																										BgL_arg1381z00_758 =
																											CDR(
																											((obj_t)
																												BgL_expza2za2_751));
																										{
																											obj_t BgL_expza2za2_1501;
																											obj_t
																												BgL_expandersz00_1500;
																											obj_t
																												BgL_syntaxesz00_1499;
																											obj_t BgL_macrosz00_1498;
																											obj_t BgL_inlinesz00_1497;

																											BgL_inlinesz00_1497 =
																												BgL_inlinesz00_754;
																											BgL_macrosz00_1498 =
																												BgL_macrosz00_755;
																											BgL_syntaxesz00_1499 =
																												BgL_syntaxesz00_756;
																											BgL_expandersz00_1500 =
																												BgL_expandersz00_757;
																											BgL_expza2za2_1501 =
																												BgL_arg1381z00_758;
																											BgL_expza2za2_751 =
																												BgL_expza2za2_1501;
																											BgL_expandersz00_750 =
																												BgL_expandersz00_1500;
																											BgL_syntaxesz00_749 =
																												BgL_syntaxesz00_1499;
																											BgL_macrosz00_748 =
																												BgL_macrosz00_1498;
																											BgL_inlinesz00_747 =
																												BgL_inlinesz00_1497;
																											goto
																												BgL_zc3z04anonymousza31372ze3z87_752;
																										}
																									}
																								}
																							}
																					}
																				}
																			}
																		else
																			{	/* Read/inline.scm 131 */
																				goto BgL_tagzd2365zd2_646;
																			}
																	}
															}
													}
											}
									}
							}
						else
							{	/* Read/inline.scm 131 */
								goto BgL_tagzd2365zd2_646;
							}
					}
			}
		}

	}



/* inline-definition-queue */
	BGL_EXPORTED_DEF obj_t BGl_inlinezd2definitionzd2queuez00zzread_inlinez00()
	{
		{	/* Read/inline.scm 218 */
			return BGl_za2inlinezd2definitionsza2zd2zzread_inlinez00;
		}

	}



/* &inline-definition-queue */
	obj_t BGl_z62inlinezd2definitionzd2queuez62zzread_inlinez00(obj_t
		BgL_envz00_1017)
	{
		{	/* Read/inline.scm 218 */
			return BGl_inlinezd2definitionzd2queuez00zzread_inlinez00();
		}

	}



/* inline-finalizer */
	BGL_EXPORTED_DEF obj_t BGl_inlinezd2finaliza7erz75zzread_inlinez00()
	{
		{	/* Read/inline.scm 224 */
			if (NULLP(BGl_za2inlinezd2definitionsza2zd2zzread_inlinez00))
				{	/* Read/inline.scm 225 */
					return BNIL;
				}
			else
				{	/* Read/inline.scm 227 */
					obj_t BgL_arg1441z00_794;

					{	/* Read/inline.scm 227 */
						obj_t BgL_idz00_982;
						obj_t BgL_sexpza2za2_983;

						BgL_idz00_982 = CNST_TABLE_REF(((long) 12));
						BgL_sexpza2za2_983 =
							BGl_za2inlinezd2definitionsza2zd2zzread_inlinez00;
						{	/* Read/inline.scm 227 */
							obj_t BgL_newz00_984;

							BgL_newz00_984 =
								create_struct(CNST_TABLE_REF(((long) 13)), (int) (((long) 5)));
							{	/* Read/inline.scm 227 */
								int BgL_tmpz00_1510;

								BgL_tmpz00_1510 = (int) (((long) 4));
								STRUCT_SET(BgL_newz00_984, BgL_tmpz00_1510, BFALSE);
							}
							{	/* Read/inline.scm 227 */
								int BgL_tmpz00_1513;

								BgL_tmpz00_1513 = (int) (((long) 3));
								STRUCT_SET(BgL_newz00_984, BgL_tmpz00_1513, BTRUE);
							}
							{	/* Read/inline.scm 227 */
								int BgL_tmpz00_1516;

								BgL_tmpz00_1516 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_984, BgL_tmpz00_1516, BgL_sexpza2za2_983);
							}
							{	/* Read/inline.scm 227 */
								obj_t BgL_auxz00_1521;
								int BgL_tmpz00_1519;

								BgL_auxz00_1521 = BINT(((long) 0));
								BgL_tmpz00_1519 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_984, BgL_tmpz00_1519, BgL_auxz00_1521);
							}
							{	/* Read/inline.scm 227 */
								int BgL_tmpz00_1524;

								BgL_tmpz00_1524 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_984, BgL_tmpz00_1524, BgL_idz00_982);
							}
							BgL_arg1441z00_794 = BgL_newz00_984;
					}}
					{	/* Read/inline.scm 227 */
						obj_t BgL_list1442z00_795;

						BgL_list1442z00_795 = MAKE_YOUNG_PAIR(BgL_arg1441z00_794, BNIL);
						return BgL_list1442z00_795;
					}
				}
		}

	}



/* &inline-finalizer */
	obj_t BGl_z62inlinezd2finaliza7erz17zzread_inlinez00(obj_t BgL_envz00_1018)
	{
		{	/* Read/inline.scm 224 */
			return BGl_inlinezd2finaliza7erz75zzread_inlinez00();
		}

	}



/* import-macro-finalizer */
	BGL_EXPORTED_DEF obj_t BGl_importzd2macrozd2finaliza7erza7zzread_inlinez00()
	{
		{	/* Read/inline.scm 237 */
			if (NULLP(BGl_za2macrozd2definitionsza2zd2zzread_inlinez00))
				{	/* Read/inline.scm 238 */
					return BNIL;
				}
			else
				{	/* Read/inline.scm 240 */
					obj_t BgL_arg1448z00_797;

					{	/* Read/inline.scm 240 */
						obj_t BgL_idz00_993;
						obj_t BgL_sexpza2za2_994;

						BgL_idz00_993 = CNST_TABLE_REF(((long) 14));
						BgL_sexpza2za2_994 =
							BGl_za2macrozd2definitionsza2zd2zzread_inlinez00;
						{	/* Read/inline.scm 240 */
							obj_t BgL_newz00_995;

							BgL_newz00_995 =
								create_struct(CNST_TABLE_REF(((long) 13)), (int) (((long) 5)));
							{	/* Read/inline.scm 240 */
								int BgL_tmpz00_1535;

								BgL_tmpz00_1535 = (int) (((long) 4));
								STRUCT_SET(BgL_newz00_995, BgL_tmpz00_1535, BFALSE);
							}
							{	/* Read/inline.scm 240 */
								int BgL_tmpz00_1538;

								BgL_tmpz00_1538 = (int) (((long) 3));
								STRUCT_SET(BgL_newz00_995, BgL_tmpz00_1538, BTRUE);
							}
							{	/* Read/inline.scm 240 */
								int BgL_tmpz00_1541;

								BgL_tmpz00_1541 = (int) (((long) 2));
								STRUCT_SET(BgL_newz00_995, BgL_tmpz00_1541, BgL_sexpza2za2_994);
							}
							{	/* Read/inline.scm 240 */
								obj_t BgL_auxz00_1546;
								int BgL_tmpz00_1544;

								BgL_auxz00_1546 = BINT(((long) 0));
								BgL_tmpz00_1544 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_995, BgL_tmpz00_1544, BgL_auxz00_1546);
							}
							{	/* Read/inline.scm 240 */
								int BgL_tmpz00_1549;

								BgL_tmpz00_1549 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_995, BgL_tmpz00_1549, BgL_idz00_993);
							}
							BgL_arg1448z00_797 = BgL_newz00_995;
					}}
					{	/* Read/inline.scm 240 */
						obj_t BgL_list1449z00_798;

						BgL_list1449z00_798 = MAKE_YOUNG_PAIR(BgL_arg1448z00_797, BNIL);
						return BgL_list1449z00_798;
					}
				}
		}

	}



/* &import-macro-finalizer */
	obj_t BGl_z62importzd2macrozd2finaliza7erzc5zzread_inlinez00(obj_t
		BgL_envz00_1019)
	{
		{	/* Read/inline.scm 237 */
			return BGl_importzd2macrozd2finaliza7erza7zzread_inlinez00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzread_inlinez00()
	{
		{	/* Read/inline.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_inlinez00()
	{
		{	/* Read/inline.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_inlinez00()
	{
		{	/* Read/inline.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_inlinez00()
	{
		{	/* Read/inline.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1593z00zzread_inlinez00));
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 95801815),
				BSTRING_TO_STRING(BGl_string1593z00zzread_inlinez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1593z00zzread_inlinez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1593z00zzread_inlinez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1593z00zzread_inlinez00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string1593z00zzread_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1593z00zzread_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1593z00zzread_inlinez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1593z00zzread_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1593z00zzread_inlinez00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1593z00zzread_inlinez00));
		}

	}

#ifdef __cplusplus
}
#endif
