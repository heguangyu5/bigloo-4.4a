/*===========================================================================*/
/*   (Prof/prof_emit.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Prof/prof_emit.scm) */
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

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		bool_t BgL_evalzf3zf3;
		obj_t BgL_libraryz00;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
		obj_t BgL_initz00;
		obj_t BgL_aliasz00;
	}                *BgL_globalz00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
		obj_t BgL_strengthz00;
		obj_t BgL_stackablez00;
	}              *BgL_sfunz00_bglt;


	extern obj_t BGl_za2profzd2tablezd2nameza2z00zzengine_paramz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_za2builtinzd2allocatorsza2zd2zzengine_paramz00;
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzprof_emitz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzprof_emitz00();
	static obj_t BGl_gczd2rootszd2initz00zzprof_emitz00();
	BGL_EXPORTED_DECL obj_t BGl_emitzd2profzd2infoz00zzprof_emitz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzprof_emitz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzprof_emitz00();
	static obj_t BGl_genericzd2initzd2zzprof_emitz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62emitzd2globalz12za2zzprof_emitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzprof_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzprof_emitz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzprof_emitz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzprof_emitz00();
	static obj_t BGl_z62zc3z04anonymousza31286ze3ze5zzprof_emitz00(obj_t, obj_t);
	static obj_t BGl_z62emitzd2profzd2infoz62zzprof_emitz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string1501z00zzprof_emitz00,
		BgL_bgl_string1501za700za7za7p1530za7, "/* prof association table */", 28);
	      DEFINE_STRING(BGl_string1502z00zzprof_emitz00,
		BgL_bgl_string1502za700za7za7p1531za7, "static obj_t write_bprof_table() {",
		34);
	      DEFINE_STRING(BGl_string1503z00zzprof_emitz00,
		BgL_bgl_string1503za700za7za7p1532za7, "   extern obj_t bprof_port;", 27);
	      DEFINE_STRING(BGl_string1504z00zzprof_emitz00,
		BgL_bgl_string1504za700za7za7p1533za7,
		"   if( bprof_port == BUNSPEC ) bprof_port = (obj_t)fopen( \"", 59);
	      DEFINE_STRING(BGl_string1505z00zzprof_emitz00,
		BgL_bgl_string1505za700za7za7p1534za7, "\", \"w\" );", 9);
	      DEFINE_STRING(BGl_string1506z00zzprof_emitz00,
		BgL_bgl_string1506za700za7za7p1535za7, "   if( bprof_port ) {", 21);
	      DEFINE_STRING(BGl_string1507z00zzprof_emitz00,
		BgL_bgl_string1507za700za7za7p1536za7, "      fputs( \"(\\\"", 17);
	      DEFINE_STRING(BGl_string1508z00zzprof_emitz00,
		BgL_bgl_string1508za700za7za7p1537za7, "\\\" \\\"", 5);
	      DEFINE_STRING(BGl_string1509z00zzprof_emitz00,
		BgL_bgl_string1509za700za7za7p1538za7, "\\\"", 2);
	      DEFINE_STRING(BGl_string1510z00zzprof_emitz00,
		BgL_bgl_string1510za700za7za7p1539za7, ")\\n\", (FILE *)bprof_port );", 27);
	      DEFINE_STRING(BGl_string1511z00zzprof_emitz00,
		BgL_bgl_string1511za700za7za7p1540za7, "   }", 4);
	      DEFINE_STRING(BGl_string1512z00zzprof_emitz00,
		BgL_bgl_string1512za700za7za7p1541za7, "   return BUNSPEC;", 18);
	      DEFINE_STRING(BGl_string1513z00zzprof_emitz00,
		BgL_bgl_string1513za700za7za7p1542za7, "}\n", 2);
	      DEFINE_STRING(BGl_string1514z00zzprof_emitz00,
		BgL_bgl_string1514za700za7za7p1543za7, "      fputs( \"((\\\"", 18);
	      DEFINE_STRING(BGl_string1515z00zzprof_emitz00,
		BgL_bgl_string1515za700za7za7p1544za7, "\\\" ", 3);
	      DEFINE_STRING(BGl_string1516z00zzprof_emitz00,
		BgL_bgl_string1516za700za7za7p1545za7, ") \\\"", 4);
	      DEFINE_STRING(BGl_string1517z00zzprof_emitz00,
		BgL_bgl_string1517za700za7za7p1546za7, " allocator", 10);
	      DEFINE_STRING(BGl_string1518z00zzprof_emitz00,
		BgL_bgl_string1518za700za7za7p1547za7, "", 0);
	      DEFINE_STRING(BGl_string1519z00zzprof_emitz00,
		BgL_bgl_string1519za700za7za7p1548za7, "prof_emit", 9);
	      DEFINE_STRING(BGl_string1520z00zzprof_emitz00,
		BgL_bgl_string1520za700za7za7p1549za7, "foreign location allocator ", 27);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2profzd2infozd2envzd2zzprof_emitz00,
		BgL_bgl_za762emitza7d2profza7d1550za7,
		BGl_z62emitzd2profzd2infoz62zzprof_emitz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzprof_emitz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzprof_emitz00(long
		BgL_checksumz00_2026, char *BgL_fromz00_2027)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzprof_emitz00))
				{
					BGl_requirezd2initializa7ationz75zzprof_emitz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzprof_emitz00();
					BGl_libraryzd2moduleszd2initz00zzprof_emitz00();
					BGl_cnstzd2initzd2zzprof_emitz00();
					BGl_importedzd2moduleszd2initz00zzprof_emitz00();
					return BGl_toplevelzd2initzd2zzprof_emitz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzprof_emitz00()
	{
		{	/* Prof/prof_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"prof_emit");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"prof_emit");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "prof_emit");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "prof_emit");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"prof_emit");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"prof_emit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"prof_emit");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "prof_emit");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "prof_emit");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzprof_emitz00()
	{
		{	/* Prof/prof_emit.scm 15 */
			{	/* Prof/prof_emit.scm 15 */
				obj_t BgL_cportz00_2013;

				{	/* Prof/prof_emit.scm 15 */
					obj_t BgL_stringz00_2021;

					BgL_stringz00_2021 = BGl_string1520z00zzprof_emitz00;
					{	/* Prof/prof_emit.scm 15 */
						obj_t BgL_startz00_2022;

						BgL_startz00_2022 = BINT(((long) 0));
						{	/* Prof/prof_emit.scm 15 */
							obj_t BgL_endz00_2023;

							BgL_endz00_2023 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2021)));
							{	/* Prof/prof_emit.scm 15 */

								BgL_cportz00_2013 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2021, BgL_startz00_2022, BgL_endz00_2023);
				}}}}
				{
					long BgL_iz00_2014;

					BgL_iz00_2014 = ((long) 2);
				BgL_loopz00_2015:
					if ((BgL_iz00_2014 == ((long) -1)))
						{	/* Prof/prof_emit.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Prof/prof_emit.scm 15 */
							{	/* Prof/prof_emit.scm 15 */
								obj_t BgL_arg1528z00_2017;

								{	/* Prof/prof_emit.scm 15 */

									{	/* Prof/prof_emit.scm 15 */
										obj_t BgL_locationz00_2019;

										BgL_locationz00_2019 = BBOOL(((bool_t) 0));
										{	/* Prof/prof_emit.scm 15 */

											BgL_arg1528z00_2017 =
												BGl_readz00zz__readerz00(BgL_cportz00_2013,
												BgL_locationz00_2019);
										}
									}
								}
								{	/* Prof/prof_emit.scm 15 */
									int BgL_tmpz00_2054;

									BgL_tmpz00_2054 = (int) (BgL_iz00_2014);
									CNST_TABLE_SET(BgL_tmpz00_2054, BgL_arg1528z00_2017);
							}}
							{	/* Prof/prof_emit.scm 15 */
								int BgL_auxz00_2020;

								BgL_auxz00_2020 = (int) ((BgL_iz00_2014 - ((long) 1)));
								{
									long BgL_iz00_2059;

									BgL_iz00_2059 = (long) (BgL_auxz00_2020);
									BgL_iz00_2014 = BgL_iz00_2059;
									goto BgL_loopz00_2015;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzprof_emitz00()
	{
		{	/* Prof/prof_emit.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzprof_emitz00()
	{
		{	/* Prof/prof_emit.scm 15 */
			return BUNSPEC;
		}

	}



/* emit-prof-info */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2profzd2infoz00zzprof_emitz00(obj_t
		BgL_globalsz00_39, obj_t BgL_portz00_40)
	{
		{	/* Prof/prof_emit.scm 40 */
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1501z00zzprof_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1502z00zzprof_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1503z00zzprof_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1504z00zzprof_emitz00, BgL_portz00_40);
			bgl_display_obj(BGl_za2profzd2tablezd2nameza2z00zzengine_paramz00,
				BgL_portz00_40);
			bgl_display_string(BGl_string1505z00zzprof_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1506z00zzprof_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			{	/* Prof/prof_emit.scm 80 */
				obj_t BgL_zc3z04anonymousza31286ze3z87_2003;

				BgL_zc3z04anonymousza31286ze3z87_2003 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31286ze3ze5zzprof_emitz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31286ze3z87_2003,
					(int) (((long) 0)), BgL_portz00_40);
				BGl_forzd2eachzd2globalz12z12zzast_envz00
					(BgL_zc3z04anonymousza31286ze3z87_2003, BNIL);
			}
			{
				obj_t BgL_l1244z00_1682;

				BgL_l1244z00_1682 = BgL_globalsz00_39;
			BgL_zc3z04anonymousza31300ze3z87_1683:
				if (PAIRP(BgL_l1244z00_1682))
					{	/* Prof/prof_emit.scm 86 */
						{	/* Prof/prof_emit.scm 87 */
							obj_t BgL_globalz00_1685;

							BgL_globalz00_1685 = CAR(BgL_l1244z00_1682);
							if (
								(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1685))))->
									BgL_userzf3zf3))
								{	/* Prof/prof_emit.scm 87 */
									BGl_z62emitzd2globalz12za2zzprof_emitz00(BgL_portz00_40,
										BgL_globalz00_1685);
								}
							else
								{	/* Prof/prof_emit.scm 87 */
									BFALSE;
								}
						}
						{
							obj_t BgL_l1244z00_2090;

							BgL_l1244z00_2090 = CDR(BgL_l1244z00_1682);
							BgL_l1244z00_1682 = BgL_l1244z00_2090;
							goto BgL_zc3z04anonymousza31300ze3z87_1683;
						}
					}
				else
					{	/* Prof/prof_emit.scm 86 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l1247z00_1690;

				BgL_l1247z00_1690 = BGl_za2builtinzd2allocatorsza2zd2zzengine_paramz00;
			BgL_zc3z04anonymousza31304ze3z87_1691:
				if (PAIRP(BgL_l1247z00_1690))
					{	/* Prof/prof_emit.scm 92 */
						{	/* Prof/prof_emit.scm 93 */
							obj_t BgL_scmzd2czd2_1693;

							BgL_scmzd2czd2_1693 = CAR(BgL_l1247z00_1690);
							{	/* Prof/prof_emit.scm 93 */
								obj_t BgL_scmz00_1694;
								obj_t BgL_cz00_1695;

								BgL_scmz00_1694 = CAR(((obj_t) BgL_scmzd2czd2_1693));
								BgL_cz00_1695 = CDR(((obj_t) BgL_scmzd2czd2_1693));
								bgl_display_string(BGl_string1507z00zzprof_emitz00,
									BgL_portz00_40);
								bgl_display_obj(BgL_scmz00_1694, BgL_portz00_40);
								bgl_display_string(BGl_string1508z00zzprof_emitz00,
									BgL_portz00_40);
								bgl_display_obj(BgL_cz00_1695, BgL_portz00_40);
								bgl_display_string(BGl_string1509z00zzprof_emitz00,
									BgL_portz00_40);
								bgl_display_string(BGl_string1510z00zzprof_emitz00,
									BgL_portz00_40);
								bgl_display_char(((unsigned char) 10), BgL_portz00_40);
						}}
						{
							obj_t BgL_l1247z00_2106;

							BgL_l1247z00_2106 = CDR(BgL_l1247z00_1690);
							BgL_l1247z00_1690 = BgL_l1247z00_2106;
							goto BgL_zc3z04anonymousza31304ze3z87_1691;
						}
					}
				else
					{	/* Prof/prof_emit.scm 92 */
						((bool_t) 1);
					}
			}
			bgl_display_string(BGl_string1511z00zzprof_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1512z00zzprof_emitz00, BgL_portz00_40);
			bgl_display_char(((unsigned char) 10), BgL_portz00_40);
			bgl_display_string(BGl_string1513z00zzprof_emitz00, BgL_portz00_40);
			return bgl_display_char(((unsigned char) 10), BgL_portz00_40);
		}

	}



/* &emit-prof-info */
	obj_t BGl_z62emitzd2profzd2infoz62zzprof_emitz00(obj_t BgL_envz00_2004,
		obj_t BgL_globalsz00_2005, obj_t BgL_portz00_2006)
	{
		{	/* Prof/prof_emit.scm 40 */
			return
				BGl_emitzd2profzd2infoz00zzprof_emitz00(BgL_globalsz00_2005,
				BgL_portz00_2006);
		}

	}



/* &emit-global! */
	obj_t BGl_z62emitzd2globalz12za2zzprof_emitz00(obj_t BgL_portz00_2007,
		obj_t BgL_globalz00_1702)
	{
		{	/* Prof/prof_emit.scm 66 */
			{	/* Prof/prof_emit.scm 43 */
				BgL_valuez00_bglt BgL_sfunz00_1704;

				BgL_sfunz00_1704 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_globalz00_1702))))->BgL_valuez00);
				BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
					((BgL_variablez00_bglt) BgL_globalz00_1702));
				{	/* Prof/prof_emit.scm 45 */
					obj_t BgL_idz00_1705;
					obj_t BgL_czd2namezd2_1706;
					obj_t BgL_iszd2alloczd2_1707;
					obj_t BgL_locz00_1708;

					BgL_idz00_1705 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_globalz00_1702))))->BgL_idz00);
					BgL_czd2namezd2_1706 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_globalz00_1702))))->BgL_namez00);
					{	/* Prof/prof_emit.scm 47 */
						bool_t BgL_test1557z00_2126;

						{	/* Prof/prof_emit.scm 47 */
							bool_t BgL_res1494z00_1915;

							BgL_res1494z00_1915 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_sfunz00_1704), BGl_sfunz00zzast_varz00);
							BgL_test1557z00_2126 = BgL_res1494z00_1915;
						}
						if (BgL_test1557z00_2126)
							{	/* Prof/prof_emit.scm 47 */
								BgL_iszd2alloczd2_1707 =
									BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
											(long) 0)),
									(((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
													BgL_sfunz00_1704)))->BgL_propertyz00));
							}
						else
							{	/* Prof/prof_emit.scm 47 */
								BgL_iszd2alloczd2_1707 = BFALSE;
							}
					}
					{	/* Prof/prof_emit.scm 48 */
						bool_t BgL_test1559z00_2133;

						{	/* Prof/prof_emit.scm 48 */
							bool_t BgL_res1495z00_1917;

							BgL_res1495z00_1917 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_sfunz00_1704), BGl_sfunz00zzast_varz00);
							BgL_test1559z00_2133 = BgL_res1495z00_1917;
						}
						if (BgL_test1559z00_2133)
							{	/* Prof/prof_emit.scm 48 */
								BgL_locz00_1708 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_sfunz00_1704)))->BgL_locz00);
							}
						else
							{	/* Prof/prof_emit.scm 48 */
								BgL_locz00_1708 = BFALSE;
							}
					}
					{	/* Prof/prof_emit.scm 49 */
						bool_t BgL_test1560z00_2138;

						if (STRUCTP(BgL_locz00_1708))
							{	/* Prof/prof_emit.scm 49 */
								BgL_test1560z00_2138 =
									(STRUCT_KEY(BgL_locz00_1708) == CNST_TABLE_REF(((long) 1)));
							}
						else
							{	/* Prof/prof_emit.scm 49 */
								BgL_test1560z00_2138 = ((bool_t) 0);
							}
						if (BgL_test1560z00_2138)
							{	/* Prof/prof_emit.scm 49 */
								bgl_display_string(BGl_string1514z00zzprof_emitz00,
									BgL_portz00_2007);
								bgl_display_obj(BgL_idz00_1705, BgL_portz00_2007);
								bgl_display_string(BGl_string1515z00zzprof_emitz00,
									BgL_portz00_2007);
								bgl_display_string(BGl_string1509z00zzprof_emitz00,
									BgL_portz00_2007);
								bgl_display_obj(STRUCT_REF(BgL_locz00_1708, (int) (((long) 0))),
									BgL_portz00_2007);
								bgl_display_string(BGl_string1515z00zzprof_emitz00,
									BgL_portz00_2007);
								bgl_display_obj(STRUCT_REF(BgL_locz00_1708, (int) (((long) 1))),
									BgL_portz00_2007);
								bgl_display_string(BGl_string1516z00zzprof_emitz00,
									BgL_portz00_2007);
								bgl_display_obj(BgL_czd2namezd2_1706, BgL_portz00_2007);
								bgl_display_string(BGl_string1509z00zzprof_emitz00,
									BgL_portz00_2007);
								{	/* Prof/prof_emit.scm 58 */
									obj_t BgL_arg1311z00_1713;

									if (CBOOL(BgL_iszd2alloczd2_1707))
										{	/* Prof/prof_emit.scm 58 */
											BgL_arg1311z00_1713 = BGl_string1517z00zzprof_emitz00;
										}
									else
										{	/* Prof/prof_emit.scm 58 */
											BgL_arg1311z00_1713 = BGl_string1518z00zzprof_emitz00;
										}
									bgl_display_obj(BgL_arg1311z00_1713, BgL_portz00_2007);
								}
								bgl_display_string(BGl_string1510z00zzprof_emitz00,
									BgL_portz00_2007);
								return bgl_display_char(((unsigned char) 10), BgL_portz00_2007);
							}
						else
							{	/* Prof/prof_emit.scm 49 */
								bgl_display_string(BGl_string1507z00zzprof_emitz00,
									BgL_portz00_2007);
								bgl_display_obj(BgL_idz00_1705, BgL_portz00_2007);
								bgl_display_string(BGl_string1508z00zzprof_emitz00,
									BgL_portz00_2007);
								bgl_display_obj(BgL_czd2namezd2_1706, BgL_portz00_2007);
								bgl_display_string(BGl_string1509z00zzprof_emitz00,
									BgL_portz00_2007);
								{	/* Prof/prof_emit.scm 65 */
									obj_t BgL_arg1312z00_1715;

									if (CBOOL(BgL_iszd2alloczd2_1707))
										{	/* Prof/prof_emit.scm 65 */
											BgL_arg1312z00_1715 = BGl_string1517z00zzprof_emitz00;
										}
									else
										{	/* Prof/prof_emit.scm 65 */
											BgL_arg1312z00_1715 = BGl_string1518z00zzprof_emitz00;
										}
									bgl_display_obj(BgL_arg1312z00_1715, BgL_portz00_2007);
								}
								bgl_display_string(BGl_string1510z00zzprof_emitz00,
									BgL_portz00_2007);
								return bgl_display_char(((unsigned char) 10), BgL_portz00_2007);
		}}}}}

	}



/* &<@anonymous:1286> */
	obj_t BGl_z62zc3z04anonymousza31286ze3ze5zzprof_emitz00(obj_t BgL_envz00_2008,
		obj_t BgL_gz00_2010)
	{
		{	/* Prof/prof_emit.scm 79 */
			{	/* Prof/prof_emit.scm 80 */
				obj_t BgL_portz00_2009;

				BgL_portz00_2009 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2008, (int) (((long) 0))));
				{	/* Prof/prof_emit.scm 80 */
					bool_t BgL_test1564z00_2176;

					{	/* Prof/prof_emit.scm 80 */
						bool_t BgL_test1566z00_2177;

						if (
							((((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_2010))))->
									BgL_occurrencez00) > ((long) 0)))
							{	/* Prof/prof_emit.scm 80 */
								BgL_test1566z00_2177 = ((bool_t) 1);
							}
						else
							{	/* Prof/prof_emit.scm 80 */
								BgL_test1566z00_2177 =
									(
									(((BgL_globalz00_bglt) COBJECT(
												((BgL_globalz00_bglt) BgL_gz00_2010)))->
										BgL_modulez00) == CNST_TABLE_REF(((long) 2)));
							}
						if (BgL_test1566z00_2177)
							{	/* Prof/prof_emit.scm 80 */
								if (CBOOL(
										(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_gz00_2010)))->
											BgL_libraryz00)))
									{	/* Prof/prof_emit.scm 82 */
										BgL_test1564z00_2176 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_gz00_2010))))->
											BgL_userzf3zf3);
									}
								else
									{	/* Prof/prof_emit.scm 82 */
										BgL_test1564z00_2176 = ((bool_t) 0);
									}
							}
						else
							{	/* Prof/prof_emit.scm 80 */
								BgL_test1564z00_2176 = ((bool_t) 0);
							}
					}
					if (BgL_test1564z00_2176)
						{	/* Prof/prof_emit.scm 80 */
							return
								BGl_z62emitzd2globalz12za2zzprof_emitz00(BgL_portz00_2009,
								BgL_gz00_2010);
						}
					else
						{	/* Prof/prof_emit.scm 80 */
							return BFALSE;
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzprof_emitz00()
	{
		{	/* Prof/prof_emit.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzprof_emitz00()
	{
		{	/* Prof/prof_emit.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzprof_emitz00()
	{
		{	/* Prof/prof_emit.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzprof_emitz00()
	{
		{	/* Prof/prof_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 234044112),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					364917924), BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
			return BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long)
					395790731), BSTRING_TO_STRING(BGl_string1519z00zzprof_emitz00));
		}

	}

#ifdef __cplusplus
}
#endif
