/*===========================================================================*/
/*   (Foreign/cstruct.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/cstruct.scm) */
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

	typedef struct BgL_cstructz00_bgl
	{
		bool_t BgL_structzf3zf3;
		obj_t BgL_fieldsz00;
		obj_t BgL_cstructza2za2;
	}                 *BgL_cstructz00_bglt;

	typedef struct BgL_cstructza2za2_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		struct BgL_typez00_bgl *BgL_cstructz00;
	}                    *BgL_cstructza2za2_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzforeign_cstructz00();
	extern obj_t BGl_cstructz00zzforeign_ctypez00;
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzforeign_cstructz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzforeign_cstructz00();
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	static obj_t
		BGl_z62makezd2ctypezd2accessesz121103z70zzforeign_cstructz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62makezd2ctypezd2accessesz121105z70zzforeign_cstructz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	extern obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzforeign_cstructz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_cstructz00 = BUNSPEC;
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzforeign_cstructz00();
	static obj_t BGl_genericzd2initzd2zzforeign_cstructz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cstructz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_cstructza2za2zzforeign_ctypez00;
	static obj_t BGl_cnstzd2initzd2zzforeign_cstructz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cstructz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_cstructz00();
	extern obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt);
	static obj_t __cnst[34];


	   
		 
		DEFINE_STRING(BGl_string1814z00zzforeign_cstructz00,
		BgL_bgl_string1814za700za7za7f1840za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string1816z00zzforeign_cstructz00,
		BgL_bgl_string1816za700za7za7f1841za7, "*((", 3);
	      DEFINE_STRING(BGl_string1817z00zzforeign_cstructz00,
		BgL_bgl_string1817za700za7za7f1842za7, ") 0)", 4);
	      DEFINE_STRING(BGl_string1818z00zzforeign_cstructz00,
		BgL_bgl_string1818za700za7za7f1843za7, "))", 2);
	      DEFINE_STRING(BGl_string1819z00zzforeign_cstructz00,
		BgL_bgl_string1819za700za7za7f1844za7, ")$1)->", 6);
	      DEFINE_STRING(BGl_string1820z00zzforeign_cstructz00,
		BgL_bgl_string1820za700za7za7f1845za7, "&((((", 5);
	      DEFINE_STRING(BGl_string1821z00zzforeign_cstructz00,
		BgL_bgl_string1821za700za7za7f1846za7, ")", 1);
	      DEFINE_STRING(BGl_string1822z00zzforeign_cstructz00,
		BgL_bgl_string1822za700za7za7f1847za7, "(((", 3);
	      DEFINE_STRING(BGl_string1823z00zzforeign_cstructz00,
		BgL_bgl_string1823za700za7za7f1848za7, "((((", 4);
	      DEFINE_STRING(BGl_string1824z00zzforeign_cstructz00,
		BgL_bgl_string1824za700za7za7f1849za7, " = (*($2)), BUNSPEC)", 20);
	      DEFINE_STRING(BGl_string1825z00zzforeign_cstructz00,
		BgL_bgl_string1825za700za7za7f1850za7, " = ($2), BUNSPEC)", 17);
	      DEFINE_STRING(BGl_string1826z00zzforeign_cstructz00,
		BgL_bgl_string1826za700za7za7f1851za7, " ) )", 4);
	      DEFINE_STRING(BGl_string1827z00zzforeign_cstructz00,
		BgL_bgl_string1827za700za7za7f1852za7, ")GC_MALLOC( sizeof( ", 20);
	      DEFINE_STRING(BGl_string1828z00zzforeign_cstructz00,
		BgL_bgl_string1828za700za7za7f1853za7, "(", 1);
	      DEFINE_STRING(BGl_string1829z00zzforeign_cstructz00,
		BgL_bgl_string1829za700za7za7f1854za7, "((", 2);
	      DEFINE_STRING(BGl_string1830z00zzforeign_cstructz00,
		BgL_bgl_string1830za700za7za7f1855za7, ")0L)", 4);
	      DEFINE_STRING(BGl_string1831z00zzforeign_cstructz00,
		BgL_bgl_string1831za700za7za7f1856za7, "($1 == (", 8);
	      DEFINE_STRING(BGl_string1832z00zzforeign_cstructz00,
		BgL_bgl_string1832za700za7za7f1857za7, ")FOREIGN_TO_COBJ", 16);
	      DEFINE_STRING(BGl_string1833z00zzforeign_cstructz00,
		BgL_bgl_string1833za700za7za7f1858za7, "cobj_to_foreign", 15);
	      DEFINE_STRING(BGl_string1834z00zzforeign_cstructz00,
		BgL_bgl_string1834za700za7za7f1859za7, "foreign_cstruct", 15);
	      DEFINE_STRING(BGl_string1835z00zzforeign_cstructz00,
		BgL_bgl_string1835za700za7za7f1860za7,
		"predicate-of static foreign -null? symbol macro if eq? quote foreign-id foreign? o::obj (pragma::bool \"($1 == $2)\" o1 o2) o2 o1 = ?::bool pragma::bool -null?::bool |pragma::| make-null- let make- new v ::obj pragma o * -set! - ::bool ? -> ",
		239);
	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1813z00zzforeign_cstructz00,
		BgL_bgl_za762makeza7d2ctypeza71861za7,
		BGl_z62makezd2ctypezd2accessesz121103z70zzforeign_cstructz00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1815z00zzforeign_cstructz00,
		BgL_bgl_za762makeza7d2ctypeza71862za7,
		BGl_z62makezd2ctypezd2accessesz121105z70zzforeign_cstructz00, 0L, BUNSPEC,
		3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzforeign_cstructz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cstructz00(long
		BgL_checksumz00_1462, char *BgL_fromz00_1463)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_cstructz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_cstructz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzforeign_cstructz00();
					BGl_libraryzd2moduleszd2initz00zzforeign_cstructz00();
					BGl_cnstzd2initzd2zzforeign_cstructz00();
					BGl_importedzd2moduleszd2initz00zzforeign_cstructz00();
					BGl_methodzd2initzd2zzforeign_cstructz00();
					return BGl_toplevelzd2initzd2zzforeign_cstructz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cstructz00()
	{
		{	/* Foreign/cstruct.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_cstruct");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_cstruct");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_cstruct");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_cstruct");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_cstruct");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"foreign_cstruct");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_cstructz00()
	{
		{	/* Foreign/cstruct.scm 15 */
			{	/* Foreign/cstruct.scm 15 */
				obj_t BgL_cportz00_1095;

				{	/* Foreign/cstruct.scm 15 */
					obj_t BgL_stringz00_1103;

					BgL_stringz00_1103 = BGl_string1835z00zzforeign_cstructz00;
					{	/* Foreign/cstruct.scm 15 */
						obj_t BgL_startz00_1104;

						BgL_startz00_1104 = BINT(((long) 0));
						{	/* Foreign/cstruct.scm 15 */
							obj_t BgL_endz00_1105;

							BgL_endz00_1105 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1103)));
							{	/* Foreign/cstruct.scm 15 */

								BgL_cportz00_1095 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1103, BgL_startz00_1104, BgL_endz00_1105);
				}}}}
				{
					long BgL_iz00_1096;

					BgL_iz00_1096 = ((long) 33);
				BgL_loopz00_1097:
					if ((BgL_iz00_1096 == ((long) -1)))
						{	/* Foreign/cstruct.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/cstruct.scm 15 */
							{	/* Foreign/cstruct.scm 15 */
								obj_t BgL_arg1838z00_1099;

								{	/* Foreign/cstruct.scm 15 */

									{	/* Foreign/cstruct.scm 15 */
										obj_t BgL_locationz00_1101;

										BgL_locationz00_1101 = BBOOL(((bool_t) 0));
										{	/* Foreign/cstruct.scm 15 */

											BgL_arg1838z00_1099 =
												BGl_readz00zz__readerz00(BgL_cportz00_1095,
												BgL_locationz00_1101);
										}
									}
								}
								{	/* Foreign/cstruct.scm 15 */
									int BgL_tmpz00_1488;

									BgL_tmpz00_1488 = (int) (BgL_iz00_1096);
									CNST_TABLE_SET(BgL_tmpz00_1488, BgL_arg1838z00_1099);
							}}
							{	/* Foreign/cstruct.scm 15 */
								int BgL_auxz00_1102;

								BgL_auxz00_1102 = (int) ((BgL_iz00_1096 - ((long) 1)));
								{
									long BgL_iz00_1493;

									BgL_iz00_1493 = (long) (BgL_auxz00_1102);
									BgL_iz00_1096 = BgL_iz00_1493;
									goto BgL_loopz00_1097;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzforeign_cstructz00()
	{
		{	/* Foreign/cstruct.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_cstructz00()
	{
		{	/* Foreign/cstruct.scm 15 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzforeign_cstructz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_526;

				BgL_headz00_526 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_527;
					obj_t BgL_tailz00_528;

					BgL_prevz00_527 = BgL_headz00_526;
					BgL_tailz00_528 = BgL_l1z00_1;
				BgL_loopz00_529:
					if (PAIRP(BgL_tailz00_528))
						{
							obj_t BgL_newzd2prevzd2_531;

							BgL_newzd2prevzd2_531 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_528), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_527, BgL_newzd2prevzd2_531);
							{
								obj_t BgL_tailz00_1503;
								obj_t BgL_prevz00_1502;

								BgL_prevz00_1502 = BgL_newzd2prevzd2_531;
								BgL_tailz00_1503 = CDR(BgL_tailz00_528);
								BgL_tailz00_528 = BgL_tailz00_1503;
								BgL_prevz00_527 = BgL_prevz00_1502;
								goto BgL_loopz00_529;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_526);
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_cstructz00()
	{
		{	/* Foreign/cstruct.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_cstructz00()
	{
		{	/* Foreign/cstruct.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_cstructz00()
	{
		{	/* Foreign/cstruct.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_cstructz00zzforeign_ctypez00, BGl_proc1813z00zzforeign_cstructz00,
				BGl_string1814z00zzforeign_cstructz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_cstructza2za2zzforeign_ctypez00,
				BGl_proc1815z00zzforeign_cstructz00,
				BGl_string1814z00zzforeign_cstructz00);
		}

	}



/* &make-ctype-accesses!1105 */
	obj_t BGl_z62makezd2ctypezd2accessesz121105z70zzforeign_cstructz00(obj_t
		BgL_envz00_1083, obj_t BgL_whatz00_1084, obj_t BgL_whoz00_1085,
		obj_t BgL_locz00_1086)
	{
		{	/* Foreign/cstruct.scm 38 */
			{	/* Tools/trace.sch 53 */
				BgL_typez00_bglt BgL_btypez00_1110;

				{
					BgL_cstructza2za2_bglt BgL_auxz00_1508;

					{
						obj_t BgL_auxz00_1509;

						{	/* Tools/trace.sch 53 */
							BgL_objectz00_bglt BgL_tmpz00_1510;

							BgL_tmpz00_1510 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_whatz00_1084));
							BgL_auxz00_1509 = BGL_OBJECT_WIDENING(BgL_tmpz00_1510);
						}
						BgL_auxz00_1508 = ((BgL_cstructza2za2_bglt) BgL_auxz00_1509);
					}
					BgL_btypez00_1110 =
						(((BgL_cstructza2za2_bglt) COBJECT(BgL_auxz00_1508))->BgL_btypez00);
				}
				{	/* Tools/trace.sch 53 */
					obj_t BgL_idz00_1111;

					BgL_idz00_1111 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_whoz00_1085)))->BgL_idz00);
					{	/* Tools/trace.sch 53 */
						obj_t BgL_bidz00_1112;

						BgL_bidz00_1112 =
							(((BgL_typez00_bglt) COBJECT(BgL_btypez00_1110))->BgL_idz00);
						{	/* Tools/trace.sch 53 */
							obj_t BgL_idzd2ze3bidz31_1113;

							{	/* Tools/trace.sch 53 */
								obj_t BgL_list1726z00_1114;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg1727z00_1115;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1728z00_1116;

										BgL_arg1728z00_1116 =
											MAKE_YOUNG_PAIR(BgL_bidz00_1112, BNIL);
										BgL_arg1727z00_1115 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
											BgL_arg1728z00_1116);
									}
									BgL_list1726z00_1114 =
										MAKE_YOUNG_PAIR(BgL_idz00_1111, BgL_arg1727z00_1115);
								}
								BgL_idzd2ze3bidz31_1113 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list1726z00_1114);
							}
							{	/* Tools/trace.sch 53 */
								obj_t BgL_bidzd2ze3idz31_1117;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_list1713z00_1118;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1719z00_1119;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg1725z00_1120;

											BgL_arg1725z00_1120 =
												MAKE_YOUNG_PAIR(BgL_idz00_1111, BNIL);
											BgL_arg1719z00_1119 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
												BgL_arg1725z00_1120);
										}
										BgL_list1713z00_1118 =
											MAKE_YOUNG_PAIR(BgL_bidz00_1112, BgL_arg1719z00_1119);
									}
									BgL_bidzd2ze3idz31_1117 =
										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
										(BgL_list1713z00_1118);
								}
								{	/* Tools/trace.sch 53 */
									obj_t BgL_bidzf3zf3_1121;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1708z00_1122;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg1711z00_1123;
											obj_t BgL_arg1712z00_1124;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_res1757z00_1125;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_arg1466z00_1126;

													BgL_arg1466z00_1126 =
														SYMBOL_TO_STRING(BgL_idz00_1111);
													BgL_res1757z00_1125 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_1126);
												}
												BgL_arg1711z00_1123 = BgL_res1757z00_1125;
											}
											{	/* Tools/trace.sch 53 */
												obj_t BgL_res1758z00_1127;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_symbolz00_1128;

													BgL_symbolz00_1128 = CNST_TABLE_REF(((long) 1));
													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg1466z00_1129;

														BgL_arg1466z00_1129 =
															SYMBOL_TO_STRING(BgL_symbolz00_1128);
														BgL_res1758z00_1127 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1129);
												}}
												BgL_arg1712z00_1124 = BgL_res1758z00_1127;
											}
											BgL_arg1708z00_1122 =
												string_append(BgL_arg1711z00_1123, BgL_arg1712z00_1124);
										}
										BgL_bidzf3zf3_1121 = bstring_to_symbol(BgL_arg1708z00_1122);
									}
									{	/* Tools/trace.sch 53 */
										obj_t BgL_bidzf3zd2boolz21_1130;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg1698z00_1131;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_arg1704z00_1132;
												obj_t BgL_arg1707z00_1133;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_res1760z00_1134;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg1466z00_1135;

														BgL_arg1466z00_1135 =
															SYMBOL_TO_STRING(BgL_bidzf3zf3_1121);
														BgL_res1760z00_1134 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1135);
													}
													BgL_arg1704z00_1132 = BgL_res1760z00_1134;
												}
												{	/* Tools/trace.sch 53 */
													obj_t BgL_res1761z00_1136;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_symbolz00_1137;

														BgL_symbolz00_1137 = CNST_TABLE_REF(((long) 2));
														{	/* Tools/trace.sch 53 */
															obj_t BgL_arg1466z00_1138;

															BgL_arg1466z00_1138 =
																SYMBOL_TO_STRING(BgL_symbolz00_1137);
															BgL_res1761z00_1136 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_1138);
													}}
													BgL_arg1707z00_1133 = BgL_res1761z00_1136;
												}
												BgL_arg1698z00_1131 =
													string_append(BgL_arg1704z00_1132,
													BgL_arg1707z00_1133);
											}
											BgL_bidzf3zd2boolz21_1130 =
												bstring_to_symbol(BgL_arg1698z00_1131);
										}
										{	/* Tools/trace.sch 53 */
											obj_t BgL_namez00_1139;

											BgL_namez00_1139 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt) BgL_whoz00_1085)))->
												BgL_namez00);
											{	/* Tools/trace.sch 53 */
												obj_t BgL_namezd2sanszd2z42z42_1140;

												BgL_namezd2sanszd2z42z42_1140 =
													BGl_stringzd2sanszd2z42z42zztype_toolsz00
													(BgL_namez00_1139);
												{	/* Tools/trace.sch 53 */
													BgL_typez00_bglt BgL_cstructz00_1141;

													{
														BgL_cstructza2za2_bglt BgL_auxz00_1546;

														{
															obj_t BgL_auxz00_1547;

															{	/* Tools/trace.sch 53 */
																BgL_objectz00_bglt BgL_tmpz00_1548;

																BgL_tmpz00_1548 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_whatz00_1084));
																BgL_auxz00_1547 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_1548);
															}
															BgL_auxz00_1546 =
																((BgL_cstructza2za2_bglt) BgL_auxz00_1547);
														}
														BgL_cstructz00_1141 =
															(((BgL_cstructza2za2_bglt)
																COBJECT(BgL_auxz00_1546))->BgL_cstructz00);
													}
													{	/* Tools/trace.sch 53 */
														obj_t BgL_cstructzd2fieldszd2_1142;

														{
															BgL_cstructz00_bglt BgL_auxz00_1554;

															{
																obj_t BgL_auxz00_1555;

																{	/* Tools/trace.sch 53 */
																	BgL_objectz00_bglt BgL_tmpz00_1556;

																	BgL_tmpz00_1556 =
																		((BgL_objectz00_bglt) BgL_cstructz00_1141);
																	BgL_auxz00_1555 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_1556);
																}
																BgL_auxz00_1554 =
																	((BgL_cstructz00_bglt) BgL_auxz00_1555);
															}
															BgL_cstructzd2fieldszd2_1142 =
																(((BgL_cstructz00_bglt)
																	COBJECT(BgL_auxz00_1554))->BgL_fieldsz00);
														}
														{	/* Tools/trace.sch 53 */
															obj_t BgL_siza7eofza7_1143;

															BgL_siza7eofza7_1143 =
																string_append_3
																(BGl_string1816z00zzforeign_cstructz00,
																BgL_namezd2sanszd2z42z42_1140,
																BGl_string1817z00zzforeign_cstructz00);
															{	/* Tools/trace.sch 53 */

																{
																	obj_t BgL_fieldz00_1161;

																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_arg1113z00_1398;
																		obj_t BgL_arg1114z00_1399;
																		obj_t BgL_arg1115z00_1400;
																		obj_t BgL_arg1116z00_1401;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1125z00_1402;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1126z00_1403;
																				obj_t BgL_arg1127z00_1404;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_res1801z00_1405;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_symbolz00_1406;

																						BgL_symbolz00_1406 =
																							CNST_TABLE_REF(((long) 11));
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1466z00_1407;

																							BgL_arg1466z00_1407 =
																								SYMBOL_TO_STRING
																								(BgL_symbolz00_1406);
																							BgL_res1801z00_1405 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1407);
																					}}
																					BgL_arg1126z00_1403 =
																						BgL_res1801z00_1405;
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_res1802z00_1408;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1466z00_1409;

																						BgL_arg1466z00_1409 =
																							SYMBOL_TO_STRING(BgL_idz00_1111);
																						BgL_res1802z00_1408 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg1466z00_1409);
																					}
																					BgL_arg1127z00_1404 =
																						BgL_res1802z00_1408;
																				}
																				BgL_arg1125z00_1402 =
																					string_append(BgL_arg1126z00_1403,
																					BgL_arg1127z00_1404);
																			}
																			BgL_arg1113z00_1398 =
																				bstring_to_symbol(BgL_arg1125z00_1402);
																		}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_list1128z00_1410;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1129z00_1411;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1133z00_1412;

																					BgL_arg1133z00_1412 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 1)), BNIL);
																					BgL_arg1129z00_1411 =
																						MAKE_YOUNG_PAIR(BgL_idz00_1111,
																						BgL_arg1133z00_1412);
																				}
																				BgL_list1128z00_1410 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							18)), BgL_arg1129z00_1411);
																			}
																			BgL_arg1114z00_1399 =
																				BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																				(BgL_list1128z00_1410);
																		}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1134z00_1413;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1140z00_1414;
																				obj_t BgL_arg1145z00_1415;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_res1804z00_1416;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1466z00_1417;

																						BgL_arg1466z00_1417 =
																							SYMBOL_TO_STRING(BgL_idz00_1111);
																						BgL_res1804z00_1416 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg1466z00_1417);
																					}
																					BgL_arg1140z00_1414 =
																						BgL_res1804z00_1416;
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_res1805z00_1418;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_symbolz00_1419;

																						BgL_symbolz00_1419 =
																							CNST_TABLE_REF(((long) 30));
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1466z00_1420;

																							BgL_arg1466z00_1420 =
																								SYMBOL_TO_STRING
																								(BgL_symbolz00_1419);
																							BgL_res1805z00_1418 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1420);
																					}}
																					BgL_arg1145z00_1415 =
																						BgL_res1805z00_1418;
																				}
																				BgL_arg1134z00_1413 =
																					string_append(BgL_arg1140z00_1414,
																					BgL_arg1145z00_1415);
																			}
																			BgL_arg1115z00_1400 =
																				bstring_to_symbol(BgL_arg1134z00_1413);
																		}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1146z00_1421;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1155z00_1422;
																				obj_t BgL_arg1156z00_1423;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_res1807z00_1424;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_symbolz00_1425;

																						BgL_symbolz00_1425 =
																							CNST_TABLE_REF(((long) 13));
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1466z00_1426;

																							BgL_arg1466z00_1426 =
																								SYMBOL_TO_STRING
																								(BgL_symbolz00_1425);
																							BgL_res1807z00_1424 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1426);
																					}}
																					BgL_arg1155z00_1422 =
																						BgL_res1807z00_1424;
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_res1808z00_1427;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1466z00_1428;

																						BgL_arg1466z00_1428 =
																							SYMBOL_TO_STRING(BgL_idz00_1111);
																						BgL_res1808z00_1427 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg1466z00_1428);
																					}
																					BgL_arg1156z00_1423 =
																						BgL_res1808z00_1427;
																				}
																				BgL_arg1146z00_1421 =
																					string_append(BgL_arg1155z00_1422,
																					BgL_arg1156z00_1423);
																			}
																			BgL_arg1116z00_1401 =
																				bstring_to_symbol(BgL_arg1146z00_1421);
																		}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_list1117z00_1429;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1118z00_1430;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1121z00_1431;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1122z00_1432;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1123z00_1433;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1124z00_1434;

																								BgL_arg1124z00_1434 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1116z00_1401, BNIL);
																								BgL_arg1123z00_1433 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1115z00_1400,
																									BgL_arg1124z00_1434);
																							}
																							BgL_arg1122z00_1432 =
																								MAKE_YOUNG_PAIR
																								(BgL_bidzf3zf3_1121,
																								BgL_arg1123z00_1433);
																						}
																						BgL_arg1121z00_1431 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1114z00_1399,
																							BgL_arg1122z00_1432);
																					}
																					BgL_arg1118z00_1430 =
																						MAKE_YOUNG_PAIR(BgL_idz00_1111,
																						BgL_arg1121z00_1431);
																				}
																				BgL_list1117z00_1429 =
																					MAKE_YOUNG_PAIR(BgL_arg1113z00_1398,
																					BgL_arg1118z00_1430);
																			}
																			BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																				(BgL_list1117z00_1429);
																	}}
																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_arg1165z00_1435;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1166z00_1436;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1167z00_1437;
																				obj_t BgL_arg1169z00_1438;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1245z00_1392;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1246z00_1393;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1247z00_1394;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1250z00_1395;
																								obj_t BgL_arg1252z00_1396;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1253z00_1397;

																									BgL_arg1253z00_1397 =
																										MAKE_YOUNG_PAIR
																										(BgL_idz00_1111, BNIL);
																									BgL_arg1250z00_1395 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												29)),
																										BgL_arg1253z00_1397);
																								}
																								BgL_arg1252z00_1396 =
																									MAKE_YOUNG_PAIR
																									(BGl_string1833z00zzforeign_cstructz00,
																									BNIL);
																								BgL_arg1247z00_1394 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1250z00_1395,
																									BgL_arg1252z00_1396);
																							}
																							BgL_arg1246z00_1393 =
																								MAKE_YOUNG_PAIR
																								(BgL_idzd2ze3bidz31_1113,
																								BgL_arg1247z00_1394);
																						}
																						BgL_arg1245z00_1392 =
																							MAKE_YOUNG_PAIR(BgL_bidz00_1112,
																							BgL_arg1246z00_1393);
																					}
																					BgL_arg1167z00_1437 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 28)),
																						BgL_arg1245z00_1392);
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_tmpz00_1605;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_mnamez00_1386;

																						BgL_mnamez00_1386 =
																							string_append_3
																							(BGl_string1828z00zzforeign_cstructz00,
																							BgL_namezd2sanszd2z42z42_1140,
																							BGl_string1832z00zzforeign_cstructz00);
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1256z00_1387;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1258z00_1388;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1263z00_1389;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1268z00_1390;
																										obj_t BgL_arg1270z00_1391;

																										BgL_arg1268z00_1390 =
																											MAKE_YOUNG_PAIR
																											(BgL_bidz00_1112, BNIL);
																										BgL_arg1270z00_1391 =
																											MAKE_YOUNG_PAIR
																											(BgL_mnamez00_1386, BNIL);
																										BgL_arg1263z00_1389 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1268z00_1390,
																											BgL_arg1270z00_1391);
																									}
																									BgL_arg1258z00_1388 =
																										MAKE_YOUNG_PAIR
																										(BgL_bidzd2ze3idz31_1117,
																										BgL_arg1263z00_1389);
																								}
																								BgL_arg1256z00_1387 =
																									MAKE_YOUNG_PAIR
																									(BgL_idz00_1111,
																									BgL_arg1258z00_1388);
																							}
																							BgL_tmpz00_1605 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 28)),
																								BgL_arg1256z00_1387);
																					}}
																					BgL_arg1169z00_1438 =
																						MAKE_YOUNG_PAIR(BgL_tmpz00_1605,
																						BNIL);
																				}
																				BgL_arg1166z00_1436 =
																					MAKE_YOUNG_PAIR(BgL_arg1167z00_1437,
																					BgL_arg1169z00_1438);
																			}
																			BgL_arg1165z00_1435 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						31)), BgL_arg1166z00_1436);
																		}
																		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																			(BgL_arg1165z00_1435);
																	}
																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_arg1172z00_1439;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1174z00_1440;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1175z00_1441;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1176z00_1442;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1177z00_1443;

																						BgL_arg1177z00_1443 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 8)), BNIL);
																						BgL_arg1176z00_1442 =
																							MAKE_YOUNG_PAIR
																							(BgL_bidzf3zd2boolz21_1130,
																							BgL_arg1177z00_1443);
																					}
																					BgL_arg1175z00_1441 =
																						BGl_makezd2protozd2inlinez00zzforeign_libraryz00
																						(BgL_arg1176z00_1442);
																				}
																				BgL_arg1174z00_1440 =
																					MAKE_YOUNG_PAIR(BgL_arg1175z00_1441,
																					BNIL);
																			}
																			BgL_arg1172z00_1439 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						32)), BgL_arg1174z00_1440);
																		}
																		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																			(BgL_arg1172z00_1439);
																	}
																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_arg1178z00_1444;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1179z00_1445;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1186z00_1446;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1190z00_1447;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1194z00_1448;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1197z00_1449;

																							BgL_arg1197z00_1449 =
																								MAKE_YOUNG_PAIR(BgL_bidz00_1112,
																								BNIL);
																							BgL_arg1194z00_1448 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 33)),
																								BgL_arg1197z00_1449);
																						}
																						BgL_arg1190z00_1447 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1194z00_1448, BNIL);
																					}
																					BgL_arg1186z00_1446 =
																						MAKE_YOUNG_PAIR(BgL_bidzf3zf3_1121,
																						BgL_arg1190z00_1447);
																				}
																				BgL_arg1179z00_1445 =
																					MAKE_YOUNG_PAIR(BgL_arg1186z00_1446,
																					BNIL);
																			}
																			BgL_arg1178z00_1444 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						7)), BgL_arg1179z00_1445);
																		}
																		BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																			(BgL_arg1178z00_1444);
																	}
																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_arg1201z00_1450;
																		obj_t BgL_arg1208z00_1451;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1339z00_1306;
																			obj_t BgL_arg1340z00_1307;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1344z00_1308;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1345z00_1309;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1346z00_1310;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1347z00_1311;
																							obj_t BgL_arg1348z00_1312;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_res1772z00_1313;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_symbolz00_1314;

																									BgL_symbolz00_1314 =
																										CNST_TABLE_REF(((long) 11));
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1466z00_1315;

																										BgL_arg1466z00_1315 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_1314);
																										BgL_res1772z00_1313 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg1466z00_1315);
																								}}
																								BgL_arg1347z00_1311 =
																									BgL_res1772z00_1313;
																							}
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_res1773z00_1316;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1466z00_1317;

																									BgL_arg1466z00_1317 =
																										SYMBOL_TO_STRING
																										(BgL_idz00_1111);
																									BgL_res1773z00_1316 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg1466z00_1317);
																								}
																								BgL_arg1348z00_1312 =
																									BgL_res1773z00_1316;
																							}
																							BgL_arg1346z00_1310 =
																								string_append
																								(BgL_arg1347z00_1311,
																								BgL_arg1348z00_1312);
																						}
																						BgL_arg1345z00_1309 =
																							bstring_to_symbol
																							(BgL_arg1346z00_1310);
																					}
																					BgL_arg1344z00_1308 =
																						BGl_makezd2typedzd2identz00zzast_identz00
																						(BgL_arg1345z00_1309,
																						BgL_idz00_1111);
																				}
																				BgL_arg1339z00_1306 =
																					MAKE_YOUNG_PAIR(BgL_arg1344z00_1308,
																					BNIL);
																			}
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1351z00_1318;
																				obj_t BgL_arg1352z00_1319;

																				BgL_arg1351z00_1318 =
																					BGl_makezd2typedzd2identz00zzast_identz00
																					(CNST_TABLE_REF(((long) 7)),
																					BgL_idz00_1111);
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1357z00_1320;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_list1358z00_1321;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1360z00_1322;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1361z00_1323;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1363z00_1324;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1364z00_1325;

																										BgL_arg1364z00_1325 =
																											MAKE_YOUNG_PAIR
																											(BGl_string1826z00zzforeign_cstructz00,
																											BNIL);
																										BgL_arg1363z00_1324 =
																											MAKE_YOUNG_PAIR
																											(BgL_siza7eofza7_1143,
																											BgL_arg1364z00_1325);
																									}
																									BgL_arg1361z00_1323 =
																										MAKE_YOUNG_PAIR
																										(BGl_string1827z00zzforeign_cstructz00,
																										BgL_arg1363z00_1324);
																								}
																								BgL_arg1360z00_1322 =
																									MAKE_YOUNG_PAIR
																									(BgL_namezd2sanszd2z42z42_1140,
																									BgL_arg1361z00_1323);
																							}
																							BgL_list1358z00_1321 =
																								MAKE_YOUNG_PAIR
																								(BGl_string1828z00zzforeign_cstructz00,
																								BgL_arg1360z00_1322);
																						}
																						BgL_arg1357z00_1320 =
																							BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																							(BgL_list1358z00_1321);
																					}
																					BgL_arg1352z00_1319 =
																						MAKE_YOUNG_PAIR(BgL_arg1357z00_1320,
																						BNIL);
																				}
																				BgL_arg1340z00_1307 =
																					MAKE_YOUNG_PAIR(BgL_arg1351z00_1318,
																					BgL_arg1352z00_1319);
																			}
																			BgL_arg1201z00_1450 =
																				BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																				(BgL_arg1339z00_1306,
																				BgL_arg1340z00_1307);
																		}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1211z00_1452;
																			obj_t BgL_arg1216z00_1453;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_formalszd2typedzd2_1240;
																				obj_t BgL_newz00_1241;

																				if (NULLP(BgL_cstructzd2fieldszd2_1142))
																					{	/* Tools/trace.sch 53 */
																						BgL_formalszd2typedzd2_1240 = BNIL;
																					}
																				else
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_head1094z00_1242;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_res1776z00_1243;

																							BgL_res1776z00_1243 =
																								MAKE_YOUNG_PAIR(BNIL, BNIL);
																							BgL_head1094z00_1242 =
																								BgL_res1776z00_1243;
																						}
																						{
																							obj_t BgL_l1092z00_1245;
																							obj_t BgL_tail1095z00_1246;

																							BgL_l1092z00_1245 =
																								BgL_cstructzd2fieldszd2_1142;
																							BgL_tail1095z00_1246 =
																								BgL_head1094z00_1242;
																						BgL_zc3z04anonymousza31467ze3z87_1244:
																							if (NULLP
																								(BgL_l1092z00_1245))
																								{	/* Tools/trace.sch 53 */
																									BgL_formalszd2typedzd2_1240 =
																										CDR(BgL_head1094z00_1242);
																								}
																							else
																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_newtail1096z00_1247;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1476z00_1248;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_fz00_1249;

																											BgL_fz00_1249 =
																												CAR(
																												((obj_t)
																													BgL_l1092z00_1245));
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_fzd2idzd2_1250;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_pairz00_1251;
																													BgL_pairz00_1251 =
																														CDR(((obj_t)
																															BgL_fz00_1249));
																													BgL_fzd2idzd2_1250 =
																														CAR
																														(BgL_pairz00_1251);
																												}
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_fzd2typezd2idz00_1252;
																													BgL_fzd2typezd2idz00_1252
																														=
																														CAR(((obj_t)
																															BgL_fz00_1249));
																													{	/* Tools/trace.sch 53 */
																														BgL_typez00_bglt
																															BgL_fzd2typezd2_1253;
																														BgL_fzd2typezd2_1253
																															=
																															BGl_usezd2typez12zc0zztype_envz00
																															(BgL_fzd2typezd2idz00_1252,
																															BgL_locz00_1086);
																														{	/* Tools/trace.sch 53 */
																															BgL_typez00_bglt
																																BgL_afzd2typezd2_1254;
																															BgL_afzd2typezd2_1254
																																=
																																BGl_getzd2aliasedzd2typez00zztype_typez00
																																(BgL_fzd2typezd2_1253);
																															{	/* Tools/trace.sch 53 */

																																{	/* Tools/trace.sch 53 */
																																	bool_t
																																		BgL_test1868z00_1671;
																																	{	/* Tools/trace.sch 53 */
																																		bool_t
																																			BgL_res1778z00_1255;
																																		BgL_res1778z00_1255
																																			=
																																			BGl_isazf3zf3zz__objectz00
																																			(((obj_t)
																																				BgL_afzd2typezd2_1254),
																																			BGl_cstructz00zzforeign_ctypez00);
																																		BgL_test1868z00_1671
																																			=
																																			BgL_res1778z00_1255;
																																	}
																																	if (BgL_test1868z00_1671)
																																		{	/* Tools/trace.sch 53 */
																																			obj_t
																																				BgL_arg1489z00_1256;
																																			{	/* Tools/trace.sch 53 */
																																				obj_t
																																					BgL_arg1493z00_1257;
																																				{	/* Tools/trace.sch 53 */
																																					obj_t
																																						BgL_arg1495z00_1258;
																																					obj_t
																																						BgL_arg1497z00_1259;
																																					{	/* Tools/trace.sch 53 */
																																						obj_t
																																							BgL_res1779z00_1260;
																																						{	/* Tools/trace.sch 53 */
																																							obj_t
																																								BgL_arg1466z00_1261;
																																							BgL_arg1466z00_1261
																																								=
																																								SYMBOL_TO_STRING
																																								(
																																								((obj_t) BgL_fzd2typezd2idz00_1252));
																																							BgL_res1779z00_1260
																																								=
																																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																								(BgL_arg1466z00_1261);
																																						}
																																						BgL_arg1495z00_1258
																																							=
																																							BgL_res1779z00_1260;
																																					}
																																					{	/* Tools/trace.sch 53 */
																																						obj_t
																																							BgL_res1780z00_1262;
																																						{	/* Tools/trace.sch 53 */
																																							obj_t
																																								BgL_symbolz00_1263;
																																							BgL_symbolz00_1263
																																								=
																																								CNST_TABLE_REF
																																								(
																																								((long) 5));
																																							{	/* Tools/trace.sch 53 */
																																								obj_t
																																									BgL_arg1466z00_1264;
																																								BgL_arg1466z00_1264
																																									=
																																									SYMBOL_TO_STRING
																																									(BgL_symbolz00_1263);
																																								BgL_res1780z00_1262
																																									=
																																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																									(BgL_arg1466z00_1264);
																																						}}
																																						BgL_arg1497z00_1259
																																							=
																																							BgL_res1780z00_1262;
																																					}
																																					BgL_arg1493z00_1257
																																						=
																																						string_append
																																						(BgL_arg1495z00_1258,
																																						BgL_arg1497z00_1259);
																																				}
																																				BgL_arg1489z00_1256
																																					=
																																					bstring_to_symbol
																																					(BgL_arg1493z00_1257);
																																			}
																																			BgL_arg1476z00_1248
																																				=
																																				BGl_makezd2typedzd2identz00zzast_identz00
																																				(BgL_fzd2idzd2_1250,
																																				BgL_arg1489z00_1256);
																																		}
																																	else
																																		{	/* Tools/trace.sch 53 */
																																			BgL_arg1476z00_1248
																																				=
																																				BGl_makezd2typedzd2identz00zzast_identz00
																																				(BgL_fzd2idzd2_1250,
																																				BgL_fzd2typezd2idz00_1252);
																																		}
																																}
																															}
																														}
																													}
																												}
																											}
																										}
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_res1782z00_1265;

																											BgL_res1782z00_1265 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1476z00_1248,
																												BNIL);
																											BgL_newtail1096z00_1247 =
																												BgL_res1782z00_1265;
																										}
																									}
																									SET_CDR(BgL_tail1095z00_1246,
																										BgL_newtail1096z00_1247);
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1474z00_1266;

																										BgL_arg1474z00_1266 =
																											CDR(
																											((obj_t)
																												BgL_l1092z00_1245));
																										{
																											obj_t
																												BgL_tail1095z00_1689;
																											obj_t BgL_l1092z00_1688;

																											BgL_l1092z00_1688 =
																												BgL_arg1474z00_1266;
																											BgL_tail1095z00_1689 =
																												BgL_newtail1096z00_1247;
																											BgL_tail1095z00_1246 =
																												BgL_tail1095z00_1689;
																											BgL_l1092z00_1245 =
																												BgL_l1092z00_1688;
																											goto
																												BgL_zc3z04anonymousza31467ze3z87_1244;
																										}
																									}
																								}
																						}
																					}
																				BgL_newz00_1241 =
																					BGl_gensymz00zz__r4_symbols_6_4z00
																					(CNST_TABLE_REF(((long) 10)));
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1367z00_1267;
																					obj_t BgL_arg1370z00_1268;

																					BgL_arg1367z00_1267 =
																						MAKE_YOUNG_PAIR
																						(BGl_makezd2typedzd2identz00zzast_identz00
																						(BgL_idz00_1111, BgL_idz00_1111),
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_formalszd2typedzd2_1240,
																							BNIL));
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1381z00_1269;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1382z00_1270;
																							obj_t BgL_arg1383z00_1271;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1384z00_1272;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1385z00_1273;
																									obj_t BgL_arg1386z00_1274;

																									BgL_arg1385z00_1273 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(BgL_newz00_1241,
																										BgL_idz00_1111);
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1387z00_1275;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1388z00_1276;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1394z00_1277;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1396z00_1278;
																													obj_t
																														BgL_arg1417z00_1279;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_res1783z00_1280;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_symbolz00_1281;
																															BgL_symbolz00_1281
																																=
																																CNST_TABLE_REF((
																																	(long) 11));
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1466z00_1282;
																																BgL_arg1466z00_1282
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_symbolz00_1281);
																																BgL_res1783z00_1280
																																	=
																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																	(BgL_arg1466z00_1282);
																														}}
																														BgL_arg1396z00_1278
																															=
																															BgL_res1783z00_1280;
																													}
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_res1784z00_1283;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1466z00_1284;
																															BgL_arg1466z00_1284
																																=
																																SYMBOL_TO_STRING
																																(BgL_idz00_1111);
																															BgL_res1784z00_1283
																																=
																																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																(BgL_arg1466z00_1284);
																														}
																														BgL_arg1417z00_1279
																															=
																															BgL_res1784z00_1283;
																													}
																													BgL_arg1394z00_1277 =
																														string_append
																														(BgL_arg1396z00_1278,
																														BgL_arg1417z00_1279);
																												}
																												BgL_arg1388z00_1276 =
																													bstring_to_symbol
																													(BgL_arg1394z00_1277);
																											}
																											BgL_arg1387z00_1275 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1388z00_1276,
																												BNIL);
																										}
																										BgL_arg1386z00_1274 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1387z00_1275,
																											BNIL);
																									}
																									BgL_arg1384z00_1272 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1385z00_1273,
																										BgL_arg1386z00_1274);
																								}
																								BgL_arg1382z00_1270 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1384z00_1272, BNIL);
																							}
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1418z00_1285;
																								obj_t BgL_arg1421z00_1286;

																								if (NULLP
																									(BgL_cstructzd2fieldszd2_1142))
																									{	/* Tools/trace.sch 53 */
																										BgL_arg1418z00_1285 = BNIL;
																									}
																								else
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_head1099z00_1287;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_res1787z00_1288;

																											BgL_res1787z00_1288 =
																												MAKE_YOUNG_PAIR(BNIL,
																												BNIL);
																											BgL_head1099z00_1287 =
																												BgL_res1787z00_1288;
																										}
																										{
																											obj_t BgL_l1097z00_1290;
																											obj_t
																												BgL_tail1100z00_1291;
																											BgL_l1097z00_1290 =
																												BgL_cstructzd2fieldszd2_1142;
																											BgL_tail1100z00_1291 =
																												BgL_head1099z00_1287;
																										BgL_zc3z04anonymousza31423ze3z87_1289:
																											if (NULLP
																												(BgL_l1097z00_1290))
																												{	/* Tools/trace.sch 53 */
																													BgL_arg1418z00_1285 =
																														CDR
																														(BgL_head1099z00_1287);
																												}
																											else
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_newtail1101z00_1292;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1442z00_1293;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_fz00_1294;
																															BgL_fz00_1294 =
																																CAR(((obj_t)
																																	BgL_l1097z00_1290));
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_fzd2idzd2_1295;
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_pairz00_1296;
																																	BgL_pairz00_1296
																																		=
																																		CDR(((obj_t)
																																			BgL_fz00_1294));
																																	BgL_fzd2idzd2_1295
																																		=
																																		CAR
																																		(BgL_pairz00_1296);
																																}
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_arg1448z00_1297;
																																	obj_t
																																		BgL_arg1449z00_1298;
																																	{	/* Tools/trace.sch 53 */
																																		obj_t
																																			BgL_list1450z00_1299;
																																		{	/* Tools/trace.sch 53 */
																																			obj_t
																																				BgL_arg1461z00_1300;
																																			{	/* Tools/trace.sch 53 */
																																				obj_t
																																					BgL_arg1462z00_1301;
																																				{	/* Tools/trace.sch 53 */
																																					obj_t
																																						BgL_arg1464z00_1302;
																																					BgL_arg1464z00_1302
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 4)), BNIL);
																																					BgL_arg1462z00_1301
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_fzd2idzd2_1295,
																																						BgL_arg1464z00_1302);
																																				}
																																				BgL_arg1461z00_1300
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 3)), BgL_arg1462z00_1301);
																																			}
																																			BgL_list1450z00_1299
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_idz00_1111,
																																				BgL_arg1461z00_1300);
																																		}
																																		BgL_arg1448z00_1297
																																			=
																																			BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																			(BgL_list1450z00_1299);
																																	}
																																	{	/* Tools/trace.sch 53 */
																																		obj_t
																																			BgL_arg1465z00_1303;
																																		BgL_arg1465z00_1303
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_fzd2idzd2_1295,
																																			BNIL);
																																		BgL_arg1449z00_1298
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_newz00_1241,
																																			BgL_arg1465z00_1303);
																																	}
																																	BgL_arg1442z00_1293
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1448z00_1297,
																																		BgL_arg1449z00_1298);
																														}}}
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_res1789z00_1304;
																															BgL_res1789z00_1304
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1442z00_1293,
																																BNIL);
																															BgL_newtail1101z00_1292
																																=
																																BgL_res1789z00_1304;
																													}}
																													SET_CDR
																														(BgL_tail1100z00_1291,
																														BgL_newtail1101z00_1292);
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1441z00_1305;
																														BgL_arg1441z00_1305
																															=
																															CDR(((obj_t)
																																BgL_l1097z00_1290));
																														{
																															obj_t
																																BgL_tail1100z00_1733;
																															obj_t
																																BgL_l1097z00_1732;
																															BgL_l1097z00_1732
																																=
																																BgL_arg1441z00_1305;
																															BgL_tail1100z00_1733
																																=
																																BgL_newtail1101z00_1292;
																															BgL_tail1100z00_1291
																																=
																																BgL_tail1100z00_1733;
																															BgL_l1097z00_1290
																																=
																																BgL_l1097z00_1732;
																															goto
																																BgL_zc3z04anonymousza31423ze3z87_1289;
																														}
																													}
																												}
																										}
																									}
																								BgL_arg1421z00_1286 =
																									MAKE_YOUNG_PAIR
																									(BgL_newz00_1241, BNIL);
																								BgL_arg1383z00_1271 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1418z00_1285,
																									BgL_arg1421z00_1286);
																							}
																							BgL_arg1381z00_1269 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1382z00_1270,
																								BgL_arg1383z00_1271);
																						}
																						BgL_arg1370z00_1268 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 12)),
																							BgL_arg1381z00_1269);
																					}
																					BgL_arg1211z00_1452 =
																						BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																						(BgL_arg1367z00_1267,
																						BgL_arg1370z00_1268);
																			}}
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1221z00_1454;
																				obj_t BgL_arg1223z00_1455;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1292z00_1363;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1295z00_1364;
																						obj_t BgL_arg1296z00_1365;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_list1297z00_1366;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1298z00_1367;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1299z00_1368;

																									BgL_arg1299z00_1368 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												17)), BNIL);
																									BgL_arg1298z00_1367 =
																										MAKE_YOUNG_PAIR
																										(BgL_idz00_1111,
																										BgL_arg1299z00_1368);
																								}
																								BgL_list1297z00_1366 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 18)),
																									BgL_arg1298z00_1367);
																							}
																							BgL_arg1295z00_1364 =
																								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																								(BgL_list1297z00_1366);
																						}
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1300z00_1369;
																							obj_t BgL_arg1301z00_1370;

																							BgL_arg1300z00_1369 =
																								BGl_makezd2typedzd2identz00zzast_identz00
																								(CNST_TABLE_REF(((long) 19)),
																								BgL_idz00_1111);
																							BgL_arg1301z00_1370 =
																								MAKE_YOUNG_PAIR
																								(BGl_makezd2typedzd2identz00zzast_identz00
																								(CNST_TABLE_REF(((long) 20)),
																									BgL_idz00_1111), BNIL);
																							BgL_arg1296z00_1365 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1300z00_1369,
																								BgL_arg1301z00_1370);
																						}
																						BgL_arg1292z00_1363 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1295z00_1364,
																							BgL_arg1296z00_1365);
																					}
																					BgL_arg1221z00_1454 =
																						BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																						(BgL_arg1292z00_1363,
																						CNST_TABLE_REF(((long) 21)));
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1225z00_1456;
																					obj_t BgL_arg1227z00_1457;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1306z00_1348;
																						obj_t BgL_arg1307z00_1349;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1308z00_1350;
																							obj_t BgL_arg1309z00_1351;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1310z00_1352;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1311z00_1353;
																									obj_t BgL_arg1312z00_1354;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_res1763z00_1355;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1466z00_1356;

																											BgL_arg1466z00_1356 =
																												SYMBOL_TO_STRING
																												(BgL_idz00_1111);
																											BgL_res1763z00_1355 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg1466z00_1356);
																										}
																										BgL_arg1311z00_1353 =
																											BgL_res1763z00_1355;
																									}
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_res1764z00_1357;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_symbolz00_1358;

																											BgL_symbolz00_1358 =
																												CNST_TABLE_REF(((long)
																													15));
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1466z00_1359;
																												BgL_arg1466z00_1359 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_1358);
																												BgL_res1764z00_1357 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg1466z00_1359);
																										}}
																										BgL_arg1312z00_1354 =
																											BgL_res1764z00_1357;
																									}
																									BgL_arg1310z00_1352 =
																										string_append
																										(BgL_arg1311z00_1353,
																										BgL_arg1312z00_1354);
																								}
																								BgL_arg1308z00_1350 =
																									bstring_to_symbol
																									(BgL_arg1310z00_1352);
																							}
																							BgL_arg1309z00_1351 =
																								MAKE_YOUNG_PAIR
																								(BGl_makezd2typedzd2identz00zzast_identz00
																								(CNST_TABLE_REF(((long) 6)),
																									BgL_idz00_1111), BNIL);
																							BgL_arg1306z00_1348 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1308z00_1350,
																								BgL_arg1309z00_1351);
																						}
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1315z00_1360;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1316z00_1361;
																								obj_t BgL_arg1317z00_1362;

																								BgL_arg1316z00_1361 =
																									string_append_3
																									(BGl_string1831z00zzforeign_cstructz00,
																									BgL_namezd2sanszd2z42z42_1140,
																									BGl_string1830z00zzforeign_cstructz00);
																								BgL_arg1317z00_1362 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 6)), BNIL);
																								BgL_arg1315z00_1360 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1316z00_1361,
																									BgL_arg1317z00_1362);
																							}
																							BgL_arg1307z00_1349 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 16)),
																								BgL_arg1315z00_1360);
																						}
																						BgL_arg1225z00_1456 =
																							BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																							(BgL_arg1306z00_1348,
																							BgL_arg1307z00_1349);
																					}
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1229z00_1458;
																						obj_t BgL_arg1232z00_1459;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1319z00_1326;
																							obj_t BgL_arg1322z00_1327;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1324z00_1328;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1325z00_1329;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1326z00_1330;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1327z00_1331;
																											obj_t BgL_arg1328z00_1332;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_res1766z00_1333;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_symbolz00_1334;
																													BgL_symbolz00_1334 =
																														CNST_TABLE_REF((
																															(long) 13));
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1466z00_1335;
																														BgL_arg1466z00_1335
																															=
																															SYMBOL_TO_STRING
																															(BgL_symbolz00_1334);
																														BgL_res1766z00_1333
																															=
																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																															(BgL_arg1466z00_1335);
																												}}
																												BgL_arg1327z00_1331 =
																													BgL_res1766z00_1333;
																											}
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_res1767z00_1336;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1466z00_1337;
																													BgL_arg1466z00_1337 =
																														SYMBOL_TO_STRING
																														(BgL_idz00_1111);
																													BgL_res1767z00_1336 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg1466z00_1337);
																												}
																												BgL_arg1328z00_1332 =
																													BgL_res1767z00_1336;
																											}
																											BgL_arg1326z00_1330 =
																												string_append
																												(BgL_arg1327z00_1331,
																												BgL_arg1328z00_1332);
																										}
																										BgL_arg1325z00_1329 =
																											bstring_to_symbol
																											(BgL_arg1326z00_1330);
																									}
																									BgL_arg1324z00_1328 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(BgL_arg1325z00_1329,
																										BgL_idz00_1111);
																								}
																								BgL_arg1319z00_1326 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1324z00_1328, BNIL);
																							}
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1329z00_1338;
																								obj_t BgL_arg1330z00_1339;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1331z00_1340;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1334z00_1341;
																										obj_t BgL_arg1335z00_1342;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_res1769z00_1343;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_symbolz00_1344;
																												BgL_symbolz00_1344 =
																													CNST_TABLE_REF(((long)
																														14));
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1466z00_1345;
																													BgL_arg1466z00_1345 =
																														SYMBOL_TO_STRING
																														(BgL_symbolz00_1344);
																													BgL_res1769z00_1343 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg1466z00_1345);
																											}}
																											BgL_arg1334z00_1341 =
																												BgL_res1769z00_1343;
																										}
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_res1770z00_1346;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1466z00_1347;
																												BgL_arg1466z00_1347 =
																													SYMBOL_TO_STRING
																													(BgL_idz00_1111);
																												BgL_res1770z00_1346 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg1466z00_1347);
																											}
																											BgL_arg1335z00_1342 =
																												BgL_res1770z00_1346;
																										}
																										BgL_arg1331z00_1340 =
																											string_append
																											(BgL_arg1334z00_1341,
																											BgL_arg1335z00_1342);
																									}
																									BgL_arg1329z00_1338 =
																										bstring_to_symbol
																										(BgL_arg1331z00_1340);
																								}
																								BgL_arg1330z00_1339 =
																									MAKE_YOUNG_PAIR
																									(string_append_3
																									(BGl_string1829z00zzforeign_cstructz00,
																										BgL_namezd2sanszd2z42z42_1140,
																										BGl_string1830z00zzforeign_cstructz00),
																									BNIL);
																								BgL_arg1322z00_1327 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1329z00_1338,
																									BgL_arg1330z00_1339);
																							}
																							BgL_arg1229z00_1458 =
																								BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																								(BgL_arg1319z00_1326,
																								BgL_arg1322z00_1327);
																						}
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_auxz00_1818;
																							obj_t BgL_tmpz00_1793;

																							{
																								obj_t BgL_fieldsz00_1155;
																								obj_t BgL_resz00_1156;

																								BgL_fieldsz00_1155 =
																									BgL_cstructzd2fieldszd2_1142;
																								BgL_resz00_1156 = BNIL;
																							BgL_loopz00_1154:
																								if (NULLP(BgL_fieldsz00_1155))
																									{	/* Tools/trace.sch 53 */
																										BgL_auxz00_1818 =
																											BgL_resz00_1156;
																									}
																								else
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1692z00_1157;
																										obj_t BgL_arg1695z00_1158;

																										BgL_arg1692z00_1157 =
																											CDR(
																											((obj_t)
																												BgL_fieldsz00_1155));
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1696z00_1159;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1697z00_1160;
																												BgL_arg1697z00_1160 =
																													CAR(((obj_t)
																														BgL_fieldsz00_1155));
																												BgL_fieldz00_1161 =
																													BgL_arg1697z00_1160;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_fzd2typezd2idz00_1162;
																													BgL_fzd2typezd2idz00_1162
																														=
																														CAR(((obj_t)
																															BgL_fieldz00_1161));
																													{	/* Tools/trace.sch 53 */
																														BgL_typez00_bglt
																															BgL_fzd2typezd2_1163;
																														BgL_fzd2typezd2_1163
																															=
																															BGl_usezd2typez12zc0zztype_envz00
																															(BgL_fzd2typezd2idz00_1162,
																															BgL_locz00_1086);
																														{	/* Tools/trace.sch 53 */
																															BgL_typez00_bglt
																																BgL_afzd2typezd2_1164;
																															BgL_afzd2typezd2_1164
																																=
																																BGl_getzd2aliasedzd2typez00zztype_typez00
																																(BgL_fzd2typezd2_1163);
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_fzd2idzd2_1165;
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_pairz00_1166;
																																	BgL_pairz00_1166
																																		=
																																		CDR(((obj_t)
																																			BgL_fieldz00_1161));
																																	BgL_fzd2idzd2_1165
																																		=
																																		CAR
																																		(BgL_pairz00_1166);
																																}
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_fzd2namezd2_1167;
																																	{	/* Tools/trace.sch 53 */
																																		obj_t
																																			BgL_pairz00_1168;
																																		{	/* Tools/trace.sch 53 */
																																			obj_t
																																				BgL_pairz00_1169;
																																			BgL_pairz00_1169
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_fieldz00_1161));
																																			BgL_pairz00_1168
																																				=
																																				CDR
																																				(BgL_pairz00_1169);
																																		}
																																		BgL_fzd2namezd2_1167
																																			=
																																			CAR
																																			(BgL_pairz00_1168);
																																	}
																																	{	/* Tools/trace.sch 53 */
																																		obj_t
																																			BgL_getzd2namezd2_1170;
																																		{	/* Tools/trace.sch 53 */
																																			obj_t
																																				BgL_list1686z00_1171;
																																			{	/* Tools/trace.sch 53 */
																																				obj_t
																																					BgL_arg1687z00_1172;
																																				{	/* Tools/trace.sch 53 */
																																					obj_t
																																						BgL_arg1688z00_1173;
																																					BgL_arg1688z00_1173
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_fzd2idzd2_1165,
																																						BNIL);
																																					BgL_arg1687z00_1172
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 3)), BgL_arg1688z00_1173);
																																				}
																																				BgL_list1686z00_1171
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_idz00_1111,
																																					BgL_arg1687z00_1172);
																																			}
																																			BgL_getzd2namezd2_1170
																																				=
																																				BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																				(BgL_list1686z00_1171);
																																		}
																																		{	/* Tools/trace.sch 53 */
																																			obj_t
																																				BgL_setzd2namezd2_1174;
																																			{	/* Tools/trace.sch 53 */
																																				obj_t
																																					BgL_list1670z00_1175;
																																				{	/* Tools/trace.sch 53 */
																																					obj_t
																																						BgL_arg1672z00_1176;
																																					{	/* Tools/trace.sch 53 */
																																						obj_t
																																							BgL_arg1684z00_1177;
																																						{	/* Tools/trace.sch 53 */
																																							obj_t
																																								BgL_arg1685z00_1178;
																																							BgL_arg1685z00_1178
																																								=
																																								MAKE_YOUNG_PAIR
																																								(CNST_TABLE_REF
																																								(((long) 4)), BNIL);
																																							BgL_arg1684z00_1177
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_fzd2idzd2_1165,
																																								BgL_arg1685z00_1178);
																																						}
																																						BgL_arg1672z00_1176
																																							=
																																							MAKE_YOUNG_PAIR
																																							(CNST_TABLE_REF
																																							(((long) 3)), BgL_arg1684z00_1177);
																																					}
																																					BgL_list1670z00_1175
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_idz00_1111,
																																						BgL_arg1672z00_1176);
																																				}
																																				BgL_setzd2namezd2_1174
																																					=
																																					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																					(BgL_list1670z00_1175);
																																			}
																																			{	/* Tools/trace.sch 53 */
																																				obj_t
																																					BgL_getzd2typezd2idz00_1179;
																																				{	/* Tools/trace.sch 53 */
																																					bool_t
																																						BgL_test1872z00_1848;
																																					{	/* Tools/trace.sch 53 */
																																						bool_t
																																							BgL_res1790z00_1180;
																																						BgL_res1790z00_1180
																																							=
																																							BGl_isazf3zf3zz__objectz00
																																							(((obj_t) BgL_afzd2typezd2_1164), BGl_cstructz00zzforeign_ctypez00);
																																						BgL_test1872z00_1848
																																							=
																																							BgL_res1790z00_1180;
																																					}
																																					if (BgL_test1872z00_1848)
																																						{	/* Tools/trace.sch 53 */
																																							obj_t
																																								BgL_arg1664z00_1181;
																																							{	/* Tools/trace.sch 53 */
																																								obj_t
																																									BgL_arg1667z00_1182;
																																								obj_t
																																									BgL_arg1669z00_1183;
																																								{	/* Tools/trace.sch 53 */
																																									obj_t
																																										BgL_res1791z00_1184;
																																									{	/* Tools/trace.sch 53 */
																																										obj_t
																																											BgL_arg1466z00_1185;
																																										BgL_arg1466z00_1185
																																											=
																																											SYMBOL_TO_STRING
																																											(
																																											((obj_t) BgL_fzd2typezd2idz00_1162));
																																										BgL_res1791z00_1184
																																											=
																																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																											(BgL_arg1466z00_1185);
																																									}
																																									BgL_arg1667z00_1182
																																										=
																																										BgL_res1791z00_1184;
																																								}
																																								{	/* Tools/trace.sch 53 */
																																									obj_t
																																										BgL_res1792z00_1186;
																																									{	/* Tools/trace.sch 53 */
																																										obj_t
																																											BgL_symbolz00_1187;
																																										BgL_symbolz00_1187
																																											=
																																											CNST_TABLE_REF
																																											(
																																											((long) 5));
																																										{	/* Tools/trace.sch 53 */
																																											obj_t
																																												BgL_arg1466z00_1188;
																																											BgL_arg1466z00_1188
																																												=
																																												SYMBOL_TO_STRING
																																												(BgL_symbolz00_1187);
																																											BgL_res1792z00_1186
																																												=
																																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																												(BgL_arg1466z00_1188);
																																									}}
																																									BgL_arg1669z00_1183
																																										=
																																										BgL_res1792z00_1186;
																																								}
																																								BgL_arg1664z00_1181
																																									=
																																									string_append
																																									(BgL_arg1667z00_1182,
																																									BgL_arg1669z00_1183);
																																							}
																																							BgL_getzd2typezd2idz00_1179
																																								=
																																								bstring_to_symbol
																																								(BgL_arg1664z00_1181);
																																						}
																																					else
																																						{	/* Tools/trace.sch 53 */
																																							BgL_getzd2typezd2idz00_1179
																																								=
																																								BgL_fzd2typezd2idz00_1162;
																																						}
																																				}
																																				{	/* Tools/trace.sch 53 */
																																					obj_t
																																						BgL_structzd2refzd2fmtz00_1189;
																																					{	/* Tools/trace.sch 53 */
																																						bool_t
																																							BgL_test1873z00_1859;
																																						{	/* Tools/trace.sch 53 */
																																							bool_t
																																								BgL_res1794z00_1190;
																																							BgL_res1794z00_1190
																																								=
																																								BGl_isazf3zf3zz__objectz00
																																								(
																																								((obj_t) BgL_afzd2typezd2_1164), BGl_cstructz00zzforeign_ctypez00);
																																							BgL_test1873z00_1859
																																								=
																																								BgL_res1794z00_1190;
																																						}
																																						if (BgL_test1873z00_1859)
																																							{	/* Tools/trace.sch 53 */
																																								obj_t
																																									BgL_list1626z00_1191;
																																								{	/* Tools/trace.sch 53 */
																																									obj_t
																																										BgL_arg1627z00_1192;
																																									{	/* Tools/trace.sch 53 */
																																										obj_t
																																											BgL_arg1631z00_1193;
																																										{	/* Tools/trace.sch 53 */
																																											obj_t
																																												BgL_arg1634z00_1194;
																																											{	/* Tools/trace.sch 53 */
																																												obj_t
																																													BgL_arg1639z00_1195;
																																												BgL_arg1639z00_1195
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_string1818z00zzforeign_cstructz00,
																																													BNIL);
																																												BgL_arg1634z00_1194
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_fzd2namezd2_1167,
																																													BgL_arg1639z00_1195);
																																											}
																																											BgL_arg1631z00_1193
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_string1819z00zzforeign_cstructz00,
																																												BgL_arg1634z00_1194);
																																										}
																																										BgL_arg1627z00_1192
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_namezd2sanszd2z42z42_1140,
																																											BgL_arg1631z00_1193);
																																									}
																																									BgL_list1626z00_1191
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_string1820z00zzforeign_cstructz00,
																																										BgL_arg1627z00_1192);
																																								}
																																								BgL_structzd2refzd2fmtz00_1189
																																									=
																																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																									(BgL_list1626z00_1191);
																																							}
																																						else
																																							{	/* Tools/trace.sch 53 */
																																								obj_t
																																									BgL_list1640z00_1196;
																																								{	/* Tools/trace.sch 53 */
																																									obj_t
																																										BgL_arg1641z00_1197;
																																									{	/* Tools/trace.sch 53 */
																																										obj_t
																																											BgL_arg1644z00_1198;
																																										{	/* Tools/trace.sch 53 */
																																											obj_t
																																												BgL_arg1652z00_1199;
																																											{	/* Tools/trace.sch 53 */
																																												obj_t
																																													BgL_arg1662z00_1200;
																																												BgL_arg1662z00_1200
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_string1821z00zzforeign_cstructz00,
																																													BNIL);
																																												BgL_arg1652z00_1199
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_fzd2namezd2_1167,
																																													BgL_arg1662z00_1200);
																																											}
																																											BgL_arg1644z00_1198
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_string1819z00zzforeign_cstructz00,
																																												BgL_arg1652z00_1199);
																																										}
																																										BgL_arg1641z00_1197
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_namezd2sanszd2z42z42_1140,
																																											BgL_arg1644z00_1198);
																																									}
																																									BgL_list1640z00_1196
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_string1822z00zzforeign_cstructz00,
																																										BgL_arg1641z00_1197);
																																								}
																																								BgL_structzd2refzd2fmtz00_1189
																																									=
																																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																									(BgL_list1640z00_1196);
																																							}
																																					}
																																					{	/* Tools/trace.sch 53 */
																																						obj_t
																																							BgL_structzd2setzd2fmtz00_1201;
																																						{	/* Tools/trace.sch 53 */
																																							obj_t
																																								BgL_list1608z00_1202;
																																							{	/* Tools/trace.sch 53 */
																																								obj_t
																																									BgL_arg1611z00_1203;
																																								{	/* Tools/trace.sch 53 */
																																									obj_t
																																										BgL_arg1612z00_1204;
																																									{	/* Tools/trace.sch 53 */
																																										obj_t
																																											BgL_arg1613z00_1205;
																																										{	/* Tools/trace.sch 53 */
																																											obj_t
																																												BgL_arg1624z00_1206;
																																											BgL_arg1624z00_1206
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_string1821z00zzforeign_cstructz00,
																																												BNIL);
																																											BgL_arg1613z00_1205
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_fzd2namezd2_1167,
																																												BgL_arg1624z00_1206);
																																										}
																																										BgL_arg1612z00_1204
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BGl_string1819z00zzforeign_cstructz00,
																																											BgL_arg1613z00_1205);
																																									}
																																									BgL_arg1611z00_1203
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_namezd2sanszd2z42z42_1140,
																																										BgL_arg1612z00_1204);
																																								}
																																								BgL_list1608z00_1202
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BGl_string1823z00zzforeign_cstructz00,
																																									BgL_arg1611z00_1203);
																																							}
																																							BgL_structzd2setzd2fmtz00_1201
																																								=
																																								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																								(BgL_list1608z00_1202);
																																						}
																																						{	/* Tools/trace.sch 53 */
																																							obj_t
																																								BgL_structzd2setvzd2fmtz00_1207;
																																							{	/* Tools/trace.sch 53 */
																																								bool_t
																																									BgL_test1874z00_1880;
																																								{	/* Tools/trace.sch 53 */
																																									bool_t
																																										BgL_res1795z00_1208;
																																									BgL_res1795z00_1208
																																										=
																																										BGl_isazf3zf3zz__objectz00
																																										(
																																										((obj_t) BgL_afzd2typezd2_1164), BGl_cstructz00zzforeign_ctypez00);
																																									BgL_test1874z00_1880
																																										=
																																										BgL_res1795z00_1208;
																																								}
																																								if (BgL_test1874z00_1880)
																																									{	/* Tools/trace.sch 53 */
																																										BgL_structzd2setvzd2fmtz00_1207
																																											=
																																											BGl_string1824z00zzforeign_cstructz00;
																																									}
																																								else
																																									{	/* Tools/trace.sch 53 */
																																										BgL_structzd2setvzd2fmtz00_1207
																																											=
																																											BGl_string1825z00zzforeign_cstructz00;
																																									}
																																							}
																																							{	/* Tools/trace.sch 53 */

																																								{	/* Tools/trace.sch 53 */
																																									obj_t
																																										BgL_list1499z00_1209;
																																									{	/* Tools/trace.sch 53 */
																																										obj_t
																																											BgL_arg1518z00_1210;
																																										BgL_arg1518z00_1210
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_setzd2namezd2_1174,
																																											BNIL);
																																										BgL_list1499z00_1209
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_getzd2namezd2_1170,
																																											BgL_arg1518z00_1210);
																																									}
																																									BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																																										(BgL_list1499z00_1209);
																																								}
																																								{	/* Tools/trace.sch 53 */
																																									obj_t
																																										BgL_arg1521z00_1211;
																																									obj_t
																																										BgL_arg1528z00_1212;
																																									{	/* Tools/trace.sch 53 */
																																										obj_t
																																											BgL_arg1537z00_1213;
																																										obj_t
																																											BgL_arg1540z00_1214;
																																										{	/* Tools/trace.sch 53 */
																																											obj_t
																																												BgL_arg1552z00_1215;
																																											obj_t
																																												BgL_arg1553z00_1216;
																																											BgL_arg1552z00_1215
																																												=
																																												BGl_makezd2typedzd2identz00zzast_identz00
																																												(BgL_getzd2namezd2_1170,
																																												BgL_getzd2typezd2idz00_1179);
																																											BgL_arg1553z00_1216
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_makezd2typedzd2identz00zzast_identz00
																																												(CNST_TABLE_REF
																																													(((long) 6)), BgL_idz00_1111), BNIL);
																																											BgL_arg1537z00_1213
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1552z00_1215,
																																												BgL_arg1553z00_1216);
																																										}
																																										{	/* Tools/trace.sch 53 */
																																											obj_t
																																												BgL_arg1561z00_1217;
																																											obj_t
																																												BgL_arg1564z00_1218;
																																											BgL_arg1561z00_1217
																																												=
																																												BGl_makezd2typedzd2identz00zzast_identz00
																																												(CNST_TABLE_REF
																																												(((long) 7)), BgL_getzd2typezd2idz00_1179);
																																											{	/* Tools/trace.sch 53 */
																																												obj_t
																																													BgL_arg1565z00_1219;
																																												BgL_arg1565z00_1219
																																													=
																																													MAKE_YOUNG_PAIR
																																													(CNST_TABLE_REF
																																													(((long) 6)), BNIL);
																																												BgL_arg1564z00_1218
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_structzd2refzd2fmtz00_1189,
																																													BgL_arg1565z00_1219);
																																											}
																																											BgL_arg1540z00_1214
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1561z00_1217,
																																												BgL_arg1564z00_1218);
																																										}
																																										BgL_arg1521z00_1211
																																											=
																																											BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																																											(BgL_arg1537z00_1213,
																																											BgL_arg1540z00_1214);
																																									}
																																									{	/* Tools/trace.sch 53 */
																																										obj_t
																																											BgL_arg1573z00_1220;
																																										obj_t
																																											BgL_arg1575z00_1221;
																																										{	/* Tools/trace.sch 53 */
																																											obj_t
																																												BgL_arg1578z00_1222;
																																											obj_t
																																												BgL_arg1582z00_1223;
																																											{	/* Tools/trace.sch 53 */
																																												obj_t
																																													BgL_arg1584z00_1224;
																																												{	/* Tools/trace.sch 53 */
																																													obj_t
																																														BgL_arg1588z00_1225;
																																													obj_t
																																														BgL_arg1589z00_1226;
																																													{	/* Tools/trace.sch 53 */
																																														obj_t
																																															BgL_res1796z00_1227;
																																														{	/* Tools/trace.sch 53 */
																																															obj_t
																																																BgL_arg1466z00_1228;
																																															BgL_arg1466z00_1228
																																																=
																																																SYMBOL_TO_STRING
																																																(BgL_setzd2namezd2_1174);
																																															BgL_res1796z00_1227
																																																=
																																																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																(BgL_arg1466z00_1228);
																																														}
																																														BgL_arg1588z00_1225
																																															=
																																															BgL_res1796z00_1227;
																																													}
																																													{	/* Tools/trace.sch 53 */
																																														obj_t
																																															BgL_res1797z00_1229;
																																														{	/* Tools/trace.sch 53 */
																																															obj_t
																																																BgL_symbolz00_1230;
																																															BgL_symbolz00_1230
																																																=
																																																CNST_TABLE_REF
																																																(
																																																((long) 8));
																																															{	/* Tools/trace.sch 53 */
																																																obj_t
																																																	BgL_arg1466z00_1231;
																																																BgL_arg1466z00_1231
																																																	=
																																																	SYMBOL_TO_STRING
																																																	(BgL_symbolz00_1230);
																																																BgL_res1797z00_1229
																																																	=
																																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																																	(BgL_arg1466z00_1231);
																																														}}
																																														BgL_arg1589z00_1226
																																															=
																																															BgL_res1797z00_1229;
																																													}
																																													BgL_arg1584z00_1224
																																														=
																																														string_append
																																														(BgL_arg1588z00_1225,
																																														BgL_arg1589z00_1226);
																																												}
																																												BgL_arg1578z00_1222
																																													=
																																													bstring_to_symbol
																																													(BgL_arg1584z00_1224);
																																											}
																																											{	/* Tools/trace.sch 53 */
																																												obj_t
																																													BgL_arg1592z00_1232;
																																												obj_t
																																													BgL_arg1593z00_1233;
																																												BgL_arg1592z00_1232
																																													=
																																													BGl_makezd2typedzd2identz00zzast_identz00
																																													(CNST_TABLE_REF
																																													(((long) 6)), BgL_idz00_1111);
																																												BgL_arg1593z00_1233
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BGl_makezd2typedzd2identz00zzast_identz00
																																													(CNST_TABLE_REF
																																														(((long) 9)), BgL_getzd2typezd2idz00_1179), BNIL);
																																												BgL_arg1582z00_1223
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1592z00_1232,
																																													BgL_arg1593z00_1233);
																																											}
																																											BgL_arg1573z00_1220
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1578z00_1222,
																																												BgL_arg1582z00_1223);
																																										}
																																										{	/* Tools/trace.sch 53 */
																																											obj_t
																																												BgL_arg1599z00_1234;
																																											{	/* Tools/trace.sch 53 */
																																												obj_t
																																													BgL_arg1604z00_1235;
																																												obj_t
																																													BgL_arg1605z00_1236;
																																												BgL_arg1604z00_1235
																																													=
																																													string_append
																																													(BgL_structzd2setzd2fmtz00_1201,
																																													BgL_structzd2setvzd2fmtz00_1207);
																																												{	/* Tools/trace.sch 53 */
																																													obj_t
																																														BgL_arg1606z00_1237;
																																													BgL_arg1606z00_1237
																																														=
																																														MAKE_YOUNG_PAIR
																																														(CNST_TABLE_REF
																																														(((long) 9)), BNIL);
																																													BgL_arg1605z00_1236
																																														=
																																														MAKE_YOUNG_PAIR
																																														(CNST_TABLE_REF
																																														(((long) 6)), BgL_arg1606z00_1237);
																																												}
																																												BgL_arg1599z00_1234
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1604z00_1235,
																																													BgL_arg1605z00_1236);
																																											}
																																											BgL_arg1575z00_1221
																																												=
																																												MAKE_YOUNG_PAIR
																																												(CNST_TABLE_REF
																																												(((long) 7)), BgL_arg1599z00_1234);
																																										}
																																										BgL_arg1528z00_1212
																																											=
																																											BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																																											(BgL_arg1573z00_1220,
																																											BgL_arg1575z00_1221);
																																									}
																																									{	/* Tools/trace.sch 53 */
																																										obj_t
																																											BgL_list1529z00_1238;
																																										{	/* Tools/trace.sch 53 */
																																											obj_t
																																												BgL_arg1536z00_1239;
																																											BgL_arg1536z00_1239
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1528z00_1212,
																																												BNIL);
																																											BgL_list1529z00_1238
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg1521z00_1211,
																																												BgL_arg1536z00_1239);
																																										}
																																										BgL_arg1696z00_1159
																																											=
																																											BgL_list1529z00_1238;
																											}}}}}}}}}}}}}}}
																											BgL_arg1695z00_1158 =
																												BGl_appendzd221011zd2zzforeign_cstructz00
																												(BgL_arg1696z00_1159,
																												BgL_resz00_1156);
																										}
																										{
																											obj_t BgL_resz00_1925;
																											obj_t BgL_fieldsz00_1924;

																											BgL_fieldsz00_1924 =
																												BgL_arg1692z00_1157;
																											BgL_resz00_1925 =
																												BgL_arg1695z00_1158;
																											BgL_resz00_1156 =
																												BgL_resz00_1925;
																											BgL_fieldsz00_1155 =
																												BgL_fieldsz00_1924;
																											goto BgL_loopz00_1154;
																										}
																									}
																							}
																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1273z00_1371;
																								obj_t BgL_arg1274z00_1372;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1275z00_1373;

																									BgL_arg1275z00_1373 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												22)), BNIL);
																									BgL_arg1273z00_1371 =
																										MAKE_YOUNG_PAIR
																										(BgL_bidzf3zd2boolz21_1130,
																										BgL_arg1275z00_1373);
																								}
																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1276z00_1374;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1277z00_1375;
																										obj_t BgL_arg1280z00_1376;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1281z00_1377;

																											BgL_arg1281z00_1377 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														6)), BNIL);
																											BgL_arg1277z00_1375 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														23)),
																												BgL_arg1281z00_1377);
																										}
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1282z00_1378;
																											obj_t BgL_arg1284z00_1379;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1285z00_1380;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1286z00_1381;
																													obj_t
																														BgL_arg1287z00_1382;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1288z00_1383;
																														BgL_arg1288z00_1383
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 6)),
																															BNIL);
																														BgL_arg1286z00_1381
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 24)),
																															BgL_arg1288z00_1383);
																													}
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1289z00_1384;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1290z00_1385;
																															BgL_arg1290z00_1385
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_bidz00_1112,
																																BNIL);
																															BgL_arg1289z00_1384
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 25)),
																																BgL_arg1290z00_1385);
																														}
																														BgL_arg1287z00_1382
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1289z00_1384,
																															BNIL);
																													}
																													BgL_arg1285z00_1380 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1286z00_1381,
																														BgL_arg1287z00_1382);
																												}
																												BgL_arg1282z00_1378 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 26)),
																													BgL_arg1285z00_1380);
																											}
																											BgL_arg1284z00_1379 =
																												MAKE_YOUNG_PAIR(BFALSE,
																												BNIL);
																											BgL_arg1280z00_1376 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1282z00_1378,
																												BgL_arg1284z00_1379);
																										}
																										BgL_arg1276z00_1374 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1277z00_1375,
																											BgL_arg1280z00_1376);
																									}
																									BgL_arg1274z00_1372 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												27)),
																										BgL_arg1276z00_1374);
																								}
																								BgL_tmpz00_1793 =
																									BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																									(BgL_arg1273z00_1371,
																									BgL_arg1274z00_1372);
																							}
																							BgL_arg1232z00_1459 =
																								MAKE_YOUNG_PAIR(BgL_tmpz00_1793,
																								BgL_auxz00_1818);
																						}
																						BgL_arg1227z00_1457 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1229z00_1458,
																							BgL_arg1232z00_1459);
																					}
																					BgL_arg1223z00_1455 =
																						MAKE_YOUNG_PAIR(BgL_arg1225z00_1456,
																						BgL_arg1227z00_1457);
																				}
																				BgL_arg1216z00_1453 =
																					MAKE_YOUNG_PAIR(BgL_arg1221z00_1454,
																					BgL_arg1223z00_1455);
																			}
																			BgL_arg1208z00_1451 =
																				MAKE_YOUNG_PAIR(BgL_arg1211z00_1452,
																				BgL_arg1216z00_1453);
																		}
																		return
																			MAKE_YOUNG_PAIR(BgL_arg1201z00_1450,
																			BgL_arg1208z00_1451);
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



/* &make-ctype-accesses!1103 */
	obj_t BGl_z62makezd2ctypezd2accessesz121103z70zzforeign_cstructz00(obj_t
		BgL_envz00_1087, obj_t BgL_whatz00_1088, obj_t BgL_whoz00_1089,
		obj_t BgL_locz00_1090)
	{
		{	/* Foreign/cstruct.scm 32 */
			return BNIL;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_cstructz00()
	{
		{	/* Foreign/cstruct.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1834z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1834z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1834z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1834z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1834z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1834z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 396356902),
				BSTRING_TO_STRING(BGl_string1834z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 471073690),
				BSTRING_TO_STRING(BGl_string1834z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 419430923),
				BSTRING_TO_STRING(BGl_string1834z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1834z00zzforeign_cstructz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1834z00zzforeign_cstructz00));
		}

	}

#ifdef __cplusplus
}
#endif
