/*===========================================================================*/
/*   (Write/ast.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Write/ast.scm) */
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

	typedef struct BgL_funz00_bgl
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
	}             *BgL_funz00_bglt;

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


	extern obj_t BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static obj_t BGl_objectzd2initzd2zzwrite_astz00();
	BGL_IMPORT obj_t BGl_za2ppzd2caseza2zd2zz__ppz00;
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_ppz00zz__ppz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzwrite_astz00();
	extern obj_t BGl_writezd2schemezd2commentz00zzwrite_schemez00(obj_t, obj_t);
	static obj_t BGl_makezd2sfunzd2sinfoz00zzwrite_astz00(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31364ze3ze5zzwrite_astz00(obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzwrite_astz00();
	extern obj_t
		BGl_functionzd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	BGL_IMPORT obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzwrite_astz00 = BUNSPEC;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zzwrite_astz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_argszd2listzd2ze3argsza2z41zztools_argsz00(obj_t, obj_t);
	extern obj_t BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62writezd2astzb0zzwrite_astz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2astzd2zzwrite_astz00(obj_t);
	static obj_t BGl_atomzd2ze3stringze70zd6zzwrite_astz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzwrite_astz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_pptypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_schemez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_cnstzd2initzd2zzwrite_astz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzwrite_astz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzwrite_astz00();
	BGL_IMPORT obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31289ze3ze5zzwrite_astz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t __cnst[8];


	   
		 
		DEFINE_STRING(BGl_string1655z00zzwrite_astz00,
		BgL_bgl_string1655za700za7za7w1686za7, ".ast", 4);
	      DEFINE_STRING(BGl_string1656z00zzwrite_astz00,
		BgL_bgl_string1656za700za7za7w1687za7, ".", 1);
	      DEFINE_STRING(BGl_string1657z00zzwrite_astz00,
		BgL_bgl_string1657za700za7za7w1688za7, "The AST (", 9);
	      DEFINE_STRING(BGl_string1658z00zzwrite_astz00,
		BgL_bgl_string1658za700za7za7w1689za7, ")", 1);
	      DEFINE_STRING(BGl_string1659z00zzwrite_astz00,
		BgL_bgl_string1659za700za7za7w1690za7, "write-ast", 9);
	      DEFINE_STRING(BGl_string1660z00zzwrite_astz00,
		BgL_bgl_string1660za700za7za7w1691za7, "Can't open output file", 22);
	      DEFINE_STRING(BGl_string1661z00zzwrite_astz00,
		BgL_bgl_string1661za700za7za7w1692za7, "  predicate-of: ", 16);
	      DEFINE_STRING(BGl_string1662z00zzwrite_astz00,
		BgL_bgl_string1662za700za7za7w1693za7, "", 0);
	      DEFINE_STRING(BGl_string1663z00zzwrite_astz00,
		BgL_bgl_string1663za700za7za7w1694za7, "  user?: #t", 11);
	      DEFINE_STRING(BGl_string1664z00zzwrite_astz00,
		BgL_bgl_string1664za700za7za7w1695za7, "  user?: #f", 11);
	      DEFINE_STRING(BGl_string1665z00zzwrite_astz00,
		BgL_bgl_string1665za700za7za7w1696za7, "]", 1);
	      DEFINE_STRING(BGl_string1666z00zzwrite_astz00,
		BgL_bgl_string1666za700za7za7w1697za7, " removable: ", 12);
	      DEFINE_STRING(BGl_string1667z00zzwrite_astz00,
		BgL_bgl_string1667za700za7za7w1698za7, "  loc: ", 7);
	      DEFINE_STRING(BGl_string1668z00zzwrite_astz00,
		BgL_bgl_string1668za700za7za7w1699za7, "  rm: ", 6);
	      DEFINE_STRING(BGl_string1669z00zzwrite_astz00,
		BgL_bgl_string1669za700za7za7w1700za7, "  occ: ", 7);
	      DEFINE_STRING(BGl_string1670z00zzwrite_astz00,
		BgL_bgl_string1670za700za7za7w1701za7, "  side-effect: ", 15);
	      DEFINE_STRING(BGl_string1671z00zzwrite_astz00,
		BgL_bgl_string1671za700za7za7w1702za7, "[", 1);
	      DEFINE_STRING(BGl_string1672z00zzwrite_astz00,
		BgL_bgl_string1672za700za7za7w1703za7, "#t", 2);
	      DEFINE_STRING(BGl_string1673z00zzwrite_astz00,
		BgL_bgl_string1673za700za7za7w1704za7, "#f", 2);
	      DEFINE_STRING(BGl_string1674z00zzwrite_astz00,
		BgL_bgl_string1674za700za7za7w1705za7, "#unspecified", 12);
	      DEFINE_STRING(BGl_string1675z00zzwrite_astz00,
		BgL_bgl_string1675za700za7za7w1706za7, "write_ast", 9);
	      DEFINE_STRING(BGl_string1676z00zzwrite_astz00,
		BgL_bgl_string1676za700za7za7w1707za7,
		"define define-method smfun define-inline sifun define-generic sgfun lower ",
		74);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_writezd2astzd2envz00zzwrite_astz00,
		BgL_bgl_za762writeza7d2astza7b1708za7, BGl_z62writezd2astzb0zzwrite_astz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzwrite_astz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzwrite_astz00(long
		BgL_checksumz00_1712, char *BgL_fromz00_1713)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzwrite_astz00))
				{
					BGl_requirezd2initializa7ationz75zzwrite_astz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzwrite_astz00();
					BGl_libraryzd2moduleszd2initz00zzwrite_astz00();
					BGl_cnstzd2initzd2zzwrite_astz00();
					BGl_importedzd2moduleszd2initz00zzwrite_astz00();
					return BGl_methodzd2initzd2zzwrite_astz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzwrite_astz00()
	{
		{	/* Write/ast.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__ppz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"write_ast");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzwrite_astz00()
	{
		{	/* Write/ast.scm 15 */
			{	/* Write/ast.scm 15 */
				obj_t BgL_cportz00_1696;

				{	/* Write/ast.scm 15 */
					obj_t BgL_stringz00_1704;

					BgL_stringz00_1704 = BGl_string1676z00zzwrite_astz00;
					{	/* Write/ast.scm 15 */
						obj_t BgL_startz00_1705;

						BgL_startz00_1705 = BINT(((long) 0));
						{	/* Write/ast.scm 15 */
							obj_t BgL_endz00_1706;

							BgL_endz00_1706 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1704)));
							{	/* Write/ast.scm 15 */

								BgL_cportz00_1696 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1704, BgL_startz00_1705, BgL_endz00_1706);
				}}}}
				{
					long BgL_iz00_1697;

					BgL_iz00_1697 = ((long) 7);
				BgL_loopz00_1698:
					if ((BgL_iz00_1697 == ((long) -1)))
						{	/* Write/ast.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Write/ast.scm 15 */
							{	/* Write/ast.scm 15 */
								obj_t BgL_arg1684z00_1700;

								{	/* Write/ast.scm 15 */

									{	/* Write/ast.scm 15 */
										obj_t BgL_locationz00_1702;

										BgL_locationz00_1702 = BBOOL(((bool_t) 0));
										{	/* Write/ast.scm 15 */

											BgL_arg1684z00_1700 =
												BGl_readz00zz__readerz00(BgL_cportz00_1696,
												BgL_locationz00_1702);
										}
									}
								}
								{	/* Write/ast.scm 15 */
									int BgL_tmpz00_1746;

									BgL_tmpz00_1746 = (int) (BgL_iz00_1697);
									CNST_TABLE_SET(BgL_tmpz00_1746, BgL_arg1684z00_1700);
							}}
							{	/* Write/ast.scm 15 */
								int BgL_auxz00_1703;

								BgL_auxz00_1703 = (int) ((BgL_iz00_1697 - ((long) 1)));
								{
									long BgL_iz00_1751;

									BgL_iz00_1751 = (long) (BgL_auxz00_1703);
									BgL_iz00_1697 = BgL_iz00_1751;
									goto BgL_loopz00_1698;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzwrite_astz00()
	{
		{	/* Write/ast.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* write-ast */
	BGL_EXPORTED_DEF obj_t BGl_writezd2astzd2zzwrite_astz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Write/ast.scm 29 */
			{	/* Write/ast.scm 31 */
				obj_t BgL_outputzd2namezd2_1326;

				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* Write/ast.scm 31 */
						BgL_outputzd2namezd2_1326 = BGl_za2destza2z00zzengine_paramz00;
					}
				else
					{	/* Write/ast.scm 33 */
						bool_t BgL_test1712z00_1756;

						if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
							{	/* Write/ast.scm 34 */
								obj_t BgL_tmpz00_1759;

								BgL_tmpz00_1759 =
									CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
								BgL_test1712z00_1756 = STRINGP(BgL_tmpz00_1759);
							}
						else
							{	/* Write/ast.scm 33 */
								BgL_test1712z00_1756 = ((bool_t) 0);
							}
						if (BgL_test1712z00_1756)
							{	/* Write/ast.scm 35 */
								obj_t BgL_arg1297z00_1390;
								obj_t BgL_arg1298z00_1391;

								BgL_arg1297z00_1390 =
									BGl_prefixz00zz__osz00(CAR
									(BGl_za2srczd2filesza2zd2zzengine_paramz00));
								{	/* Write/ast.scm 36 */
									obj_t BgL_res1635z00_1629;

									{	/* Write/ast.scm 36 */
										obj_t BgL_symbolz00_1627;

										BgL_symbolz00_1627 = BGl_za2passza2z00zzengine_paramz00;
										{	/* Write/ast.scm 36 */
											obj_t BgL_arg1466z00_1628;

											BgL_arg1466z00_1628 =
												SYMBOL_TO_STRING(BgL_symbolz00_1627);
											BgL_res1635z00_1629 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1628);
										}
									}
									BgL_arg1298z00_1391 = BgL_res1635z00_1629;
								}
								{	/* Write/ast.scm 35 */
									obj_t BgL_list1299z00_1392;

									{	/* Write/ast.scm 35 */
										obj_t BgL_arg1300z00_1393;

										{	/* Write/ast.scm 35 */
											obj_t BgL_arg1301z00_1394;

											{	/* Write/ast.scm 35 */
												obj_t BgL_arg1303z00_1395;

												BgL_arg1303z00_1395 =
													MAKE_YOUNG_PAIR(BGl_string1655z00zzwrite_astz00,
													BNIL);
												BgL_arg1301z00_1394 =
													MAKE_YOUNG_PAIR(BgL_arg1298z00_1391,
													BgL_arg1303z00_1395);
											}
											BgL_arg1300z00_1393 =
												MAKE_YOUNG_PAIR(BGl_string1656z00zzwrite_astz00,
												BgL_arg1301z00_1394);
										}
										BgL_list1299z00_1392 =
											MAKE_YOUNG_PAIR(BgL_arg1297z00_1390, BgL_arg1300z00_1393);
									}
									BgL_outputzd2namezd2_1326 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list1299z00_1392);
								}
							}
						else
							{	/* Write/ast.scm 33 */
								BgL_outputzd2namezd2_1326 = BFALSE;
							}
					}
				{	/* Write/ast.scm 31 */
					obj_t BgL_portz00_1327;

					if (STRINGP(BgL_outputzd2namezd2_1326))
						{	/* Write/ast.scm 40 */

							BgL_portz00_1327 =
								BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_outputzd2namezd2_1326, BTRUE);
						}
					else
						{	/* Write/ast.scm 41 */
							obj_t BgL_res1637z00_1632;

							{	/* Write/ast.scm 41 */
								obj_t BgL_tmpz00_1774;

								BgL_tmpz00_1774 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1637z00_1632 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1774);
							}
							BgL_portz00_1327 = BgL_res1637z00_1632;
						}
					{	/* Write/ast.scm 39 */

						if (OUTPUT_PORTP(BgL_portz00_1327))
							{	/* Write/ast.scm 44 */
								obj_t BgL_exitd1104z00_1329;

								BgL_exitd1104z00_1329 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Write/ast.scm 75 */
									obj_t BgL_zc3z04anonymousza31289ze3z87_1688;

									BgL_zc3z04anonymousza31289ze3z87_1688 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31289ze3ze5zzwrite_astz00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31289ze3z87_1688,
										(int) (((long) 0)), BgL_portz00_1327);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1104z00_1329,
										BgL_zc3z04anonymousza31289ze3z87_1688);
									{	/* Write/ast.scm 47 */
										bool_t BgL_tmp1106z00_1331;

										if (CBOOL
											(BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00))
											{	/* Write/ast.scm 46 */
												BFALSE;
											}
										else
											{	/* Write/ast.scm 46 */
												BGl_za2ppzd2caseza2zd2zz__ppz00 =
													CNST_TABLE_REF(((long) 0));
											}
										BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00
											(BgL_portz00_1327,
											string_append_3(BGl_string1657z00zzwrite_astz00,
												BGl_za2currentzd2passza2zd2zzengine_passz00,
												BGl_string1658z00zzwrite_astz00));
										{
											obj_t BgL_l1230z00_1334;

											BgL_l1230z00_1334 = BgL_globalsz00_3;
										BgL_zc3z04anonymousza31246ze3z87_1335:
											if (PAIRP(BgL_l1230z00_1334))
												{	/* Write/ast.scm 52 */
													{	/* Write/ast.scm 54 */
														obj_t BgL_gz00_1337;

														BgL_gz00_1337 = CAR(BgL_l1230z00_1334);
														{	/* Write/ast.scm 54 */
															BgL_valuez00_bglt BgL_funz00_1338;

															BgL_funz00_1338 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_globalz00_bglt) BgL_gz00_1337))))->
																BgL_valuez00);
															{	/* Write/ast.scm 55 */
																obj_t BgL_arg1250z00_1339;

																BgL_arg1250z00_1339 =
																	BGl_shapez00zztools_shapez00(BgL_gz00_1337);
																{	/* Write/ast.scm 55 */
																	obj_t BgL_list1251z00_1340;

																	BgL_list1251z00_1340 =
																		MAKE_YOUNG_PAIR(BgL_arg1250z00_1339, BNIL);
																	BGl_writezd2schemezd2commentz00zzwrite_schemez00
																		(BgL_portz00_1327, BgL_list1251z00_1340);
																}
															}
															{	/* Write/ast.scm 57 */
																obj_t BgL_arg1252z00_1341;

																BgL_arg1252z00_1341 =
																	BGl_functionzd2typezd2ze3stringze3zztype_pptypez00
																	(((BgL_variablez00_bglt) BgL_gz00_1337));
																{	/* Write/ast.scm 56 */
																	obj_t BgL_list1253z00_1342;

																	BgL_list1253z00_1342 =
																		MAKE_YOUNG_PAIR(BgL_arg1252z00_1341, BNIL);
																	BGl_writezd2schemezd2commentz00zzwrite_schemez00
																		(BgL_portz00_1327, BgL_list1253z00_1342);
																}
															}
															{	/* Write/ast.scm 58 */
																obj_t BgL_arg1254z00_1343;

																BgL_arg1254z00_1343 =
																	BGl_makezd2sfunzd2sinfoz00zzwrite_astz00(
																	((BgL_globalz00_bglt) BgL_gz00_1337));
																{	/* Write/ast.scm 58 */
																	obj_t BgL_list1255z00_1344;

																	BgL_list1255z00_1344 =
																		MAKE_YOUNG_PAIR(BgL_arg1254z00_1343, BNIL);
																	BGl_writezd2schemezd2commentz00zzwrite_schemez00
																		(BgL_portz00_1327, BgL_list1255z00_1344);
																}
															}
															{	/* Write/ast.scm 59 */
																obj_t BgL_arg1256z00_1345;

																{	/* Write/ast.scm 59 */
																	obj_t BgL_arg1258z00_1347;
																	obj_t BgL_arg1263z00_1348;

																	{	/* Write/ast.scm 59 */
																		obj_t BgL_casezd2valuezd2_1351;

																		BgL_casezd2valuezd2_1351 =
																			(((BgL_sfunz00_bglt) COBJECT(
																					((BgL_sfunz00_bglt)
																						BgL_funz00_1338)))->BgL_classz00);
																		if ((BgL_casezd2valuezd2_1351 ==
																				CNST_TABLE_REF(((long) 1))))
																			{	/* Write/ast.scm 59 */
																				BgL_arg1258z00_1347 =
																					CNST_TABLE_REF(((long) 2));
																			}
																		else
																			{	/* Write/ast.scm 59 */
																				if (
																					(BgL_casezd2valuezd2_1351 ==
																						CNST_TABLE_REF(((long) 3))))
																					{	/* Write/ast.scm 59 */
																						BgL_arg1258z00_1347 =
																							CNST_TABLE_REF(((long) 4));
																					}
																				else
																					{	/* Write/ast.scm 59 */
																						if (
																							(BgL_casezd2valuezd2_1351 ==
																								CNST_TABLE_REF(((long) 5))))
																							{	/* Write/ast.scm 59 */
																								BgL_arg1258z00_1347 =
																									CNST_TABLE_REF(((long) 6));
																							}
																						else
																							{	/* Write/ast.scm 59 */
																								BgL_arg1258z00_1347 =
																									CNST_TABLE_REF(((long) 7));
																	}}}}
																	{	/* Write/ast.scm 68 */
																		obj_t BgL_arg1270z00_1355;
																		obj_t BgL_arg1271z00_1356;

																		{	/* Write/ast.scm 68 */
																			obj_t BgL_arg1273z00_1357;
																			obj_t BgL_arg1274z00_1358;

																			BgL_arg1273z00_1357 =
																				BGl_shapez00zztools_shapez00
																				(BgL_gz00_1337);
																			{	/* Write/ast.scm 70 */
																				obj_t BgL_arg1275z00_1359;
																				long BgL_arg1276z00_1360;

																				{	/* Write/ast.scm 70 */
																					obj_t BgL_l1224z00_1361;

																					BgL_l1224z00_1361 =
																						(((BgL_sfunz00_bglt) COBJECT(
																								((BgL_sfunz00_bglt)
																									BgL_funz00_1338)))->
																						BgL_argsz00);
																					if (NULLP(BgL_l1224z00_1361))
																						{	/* Write/ast.scm 70 */
																							BgL_arg1275z00_1359 = BNIL;
																						}
																					else
																						{	/* Write/ast.scm 70 */
																							obj_t BgL_head1226z00_1363;

																							{	/* Write/ast.scm 70 */
																								obj_t BgL_arg1284z00_1375;

																								{	/* Write/ast.scm 70 */
																									obj_t BgL_arg1285z00_1376;

																									BgL_arg1285z00_1376 =
																										CAR(
																										((obj_t)
																											BgL_l1224z00_1361));
																									BgL_arg1284z00_1375 =
																										BGl_shapez00zztools_shapez00
																										(BgL_arg1285z00_1376);
																								}
																								{	/* Write/ast.scm 70 */
																									obj_t BgL_res1643z00_1647;

																									BgL_res1643z00_1647 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1284z00_1375, BNIL);
																									BgL_head1226z00_1363 =
																										BgL_res1643z00_1647;
																								}
																							}
																							{	/* Write/ast.scm 70 */
																								obj_t BgL_g1229z00_1364;

																								BgL_g1229z00_1364 =
																									CDR(
																									((obj_t) BgL_l1224z00_1361));
																								{
																									obj_t BgL_l1224z00_1366;
																									obj_t BgL_tail1227z00_1367;

																									BgL_l1224z00_1366 =
																										BgL_g1229z00_1364;
																									BgL_tail1227z00_1367 =
																										BgL_head1226z00_1363;
																								BgL_zc3z04anonymousza31278ze3z87_1368:
																									if (NULLP
																										(BgL_l1224z00_1366))
																										{	/* Write/ast.scm 70 */
																											BgL_arg1275z00_1359 =
																												BgL_head1226z00_1363;
																										}
																									else
																										{	/* Write/ast.scm 70 */
																											obj_t
																												BgL_newtail1228z00_1370;
																											{	/* Write/ast.scm 70 */
																												obj_t
																													BgL_arg1281z00_1372;
																												{	/* Write/ast.scm 70 */
																													obj_t
																														BgL_arg1282z00_1373;
																													BgL_arg1282z00_1373 =
																														CAR(((obj_t)
																															BgL_l1224z00_1366));
																													BgL_arg1281z00_1372 =
																														BGl_shapez00zztools_shapez00
																														(BgL_arg1282z00_1373);
																												}
																												{	/* Write/ast.scm 70 */
																													obj_t
																														BgL_res1645z00_1651;
																													BgL_res1645z00_1651 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1281z00_1372,
																														BNIL);
																													BgL_newtail1228z00_1370
																														=
																														BgL_res1645z00_1651;
																												}
																											}
																											SET_CDR
																												(BgL_tail1227z00_1367,
																												BgL_newtail1228z00_1370);
																											{	/* Write/ast.scm 70 */
																												obj_t
																													BgL_arg1280z00_1371;
																												BgL_arg1280z00_1371 =
																													CDR(((obj_t)
																														BgL_l1224z00_1366));
																												{
																													obj_t
																														BgL_tail1227z00_1844;
																													obj_t
																														BgL_l1224z00_1843;
																													BgL_l1224z00_1843 =
																														BgL_arg1280z00_1371;
																													BgL_tail1227z00_1844 =
																														BgL_newtail1228z00_1370;
																													BgL_tail1227z00_1367 =
																														BgL_tail1227z00_1844;
																													BgL_l1224z00_1366 =
																														BgL_l1224z00_1843;
																													goto
																														BgL_zc3z04anonymousza31278ze3z87_1368;
																												}
																											}
																										}
																								}
																							}
																						}
																				}
																				BgL_arg1276z00_1360 =
																					(((BgL_funz00_bglt) COBJECT(
																							((BgL_funz00_bglt)
																								((BgL_sfunz00_bglt)
																									BgL_funz00_1338))))->
																					BgL_arityz00);
																				BgL_arg1274z00_1358 =
																					BGl_argszd2listzd2ze3argsza2z41zztools_argsz00
																					(BgL_arg1275z00_1359,
																					BINT(BgL_arg1276z00_1360));
																			}
																			BgL_arg1270z00_1355 =
																				MAKE_YOUNG_PAIR(BgL_arg1273z00_1357,
																				BgL_arg1274z00_1358);
																		}
																		{	/* Write/ast.scm 72 */
																			obj_t BgL_arg1286z00_1377;

																			{	/* Write/ast.scm 72 */
																				obj_t BgL_arg1287z00_1378;

																				BgL_arg1287z00_1378 =
																					(((BgL_sfunz00_bglt) COBJECT(
																							((BgL_sfunz00_bglt)
																								BgL_funz00_1338)))->
																					BgL_bodyz00);
																				BgL_arg1286z00_1377 =
																					BGl_shapez00zztools_shapez00
																					(BgL_arg1287z00_1378);
																			}
																			BgL_arg1271z00_1356 =
																				MAKE_YOUNG_PAIR(BgL_arg1286z00_1377,
																				BNIL);
																		}
																		BgL_arg1263z00_1348 =
																			MAKE_YOUNG_PAIR(BgL_arg1270z00_1355,
																			BgL_arg1271z00_1356);
																	}
																	BgL_arg1256z00_1345 =
																		MAKE_YOUNG_PAIR(BgL_arg1258z00_1347,
																		BgL_arg1263z00_1348);
																}
																{	/* Write/ast.scm 59 */
																	obj_t BgL_list1257z00_1346;

																	BgL_list1257z00_1346 =
																		MAKE_YOUNG_PAIR(BgL_portz00_1327, BNIL);
																	BGl_ppz00zz__ppz00(BgL_arg1256z00_1345,
																		BgL_list1257z00_1346);
																}
															}
														}
													}
													{
														obj_t BgL_l1230z00_1859;

														BgL_l1230z00_1859 = CDR(BgL_l1230z00_1334);
														BgL_l1230z00_1334 = BgL_l1230z00_1859;
														goto BgL_zc3z04anonymousza31246ze3z87_1335;
													}
												}
											else
												{	/* Write/ast.scm 52 */
													BgL_tmp1106z00_1331 = ((bool_t) 1);
												}
										}
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1104z00_1329);
										bgl_close_output_port(BgL_portz00_1327);
										return BBOOL(BgL_tmp1106z00_1331);
									}
								}
							}
						else
							{	/* Write/ast.scm 42 */
								return
									BGl_errorz00zz__errorz00(BGl_string1659z00zzwrite_astz00,
									BGl_string1660z00zzwrite_astz00, BgL_outputzd2namezd2_1326);
							}
					}
				}
			}
		}

	}



/* &write-ast */
	obj_t BGl_z62writezd2astzb0zzwrite_astz00(obj_t BgL_envz00_1689,
		obj_t BgL_globalsz00_1690)
	{
		{	/* Write/ast.scm 29 */
			return BGl_writezd2astzd2zzwrite_astz00(BgL_globalsz00_1690);
		}

	}



/* &<@anonymous:1289> */
	obj_t BGl_z62zc3z04anonymousza31289ze3ze5zzwrite_astz00(obj_t BgL_envz00_1691)
	{
		{	/* Write/ast.scm 44 */
			{	/* Write/ast.scm 75 */
				obj_t BgL_portz00_1692;

				BgL_portz00_1692 = PROCEDURE_REF(BgL_envz00_1691, (int) (((long) 0)));
				return bgl_close_output_port(((obj_t) BgL_portz00_1692));
			}
		}

	}



/* make-sfun-sinfo */
	obj_t BGl_makezd2sfunzd2sinfoz00zzwrite_astz00(BgL_globalz00_bglt BgL_gz00_4)
	{
		{	/* Write/ast.scm 80 */
			{	/* Write/ast.scm 103 */
				BgL_valuez00_bglt BgL_sfunz00_1400;

				BgL_sfunz00_1400 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_gz00_4)))->BgL_valuez00);
				{	/* Write/ast.scm 105 */
					obj_t BgL_arg1307z00_1401;
					obj_t BgL_arg1308z00_1402;
					obj_t BgL_arg1309z00_1403;
					obj_t BgL_arg1310z00_1404;
					obj_t BgL_arg1311z00_1405;
					obj_t BgL_arg1312z00_1406;
					obj_t BgL_arg1314z00_1407;
					obj_t BgL_arg1315z00_1408;

					if (CBOOL(BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00))
						{	/* Write/ast.scm 106 */
							obj_t BgL_arg1338z00_1424;

							BgL_arg1338z00_1424 =
								(((BgL_globalz00_bglt) COBJECT(BgL_gz00_4))->BgL_importz00);
							{	/* Write/ast.scm 106 */
								obj_t BgL_res1651z00_1672;

								{	/* Write/ast.scm 106 */
									obj_t BgL_arg1466z00_1671;

									BgL_arg1466z00_1671 =
										SYMBOL_TO_STRING(((obj_t) BgL_arg1338z00_1424));
									BgL_res1651z00_1672 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_1671);
								}
								BgL_arg1307z00_1401 = BgL_res1651z00_1672;
							}
						}
					else
						{	/* Write/ast.scm 107 */
							obj_t BgL_arg1339z00_1425;

							{	/* Write/ast.scm 107 */
								obj_t BgL_arg1340z00_1426;

								BgL_arg1340z00_1426 =
									(((BgL_globalz00_bglt) COBJECT(BgL_gz00_4))->BgL_importz00);
								{	/* Write/ast.scm 107 */
									obj_t BgL_res1652z00_1676;

									{	/* Write/ast.scm 107 */
										obj_t BgL_arg1466z00_1675;

										BgL_arg1466z00_1675 =
											SYMBOL_TO_STRING(((obj_t) BgL_arg1340z00_1426));
										BgL_res1652z00_1676 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1675);
									}
									BgL_arg1339z00_1425 = BgL_res1652z00_1676;
								}
							}
							BgL_arg1307z00_1401 =
								BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
								(BgL_arg1339z00_1425);
						}
					{	/* Write/ast.scm 108 */
						obj_t BgL_arg1344z00_1427;

						BgL_arg1344z00_1427 =
							(((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt)
										((BgL_sfunz00_bglt) BgL_sfunz00_1400))))->
							BgL_sidezd2effectzd2);
						BgL_arg1308z00_1402 =
							BGl_atomzd2ze3stringze70zd6zzwrite_astz00(BgL_arg1344z00_1427);
					}
					{	/* Write/ast.scm 109 */
						obj_t BgL_tz00_1428;

						BgL_tz00_1428 =
							(((BgL_funz00_bglt) COBJECT(
									((BgL_funz00_bglt)
										((BgL_sfunz00_bglt) BgL_sfunz00_1400))))->
							BgL_predicatezd2ofzd2);
						if (BGl_isazf3zf3zz__objectz00(BgL_tz00_1428,
								BGl_typez00zztype_typez00))
							{	/* Write/ast.scm 110 */
								BgL_arg1309z00_1403 =
									string_append(BGl_string1661z00zzwrite_astz00,
									BGl_atomzd2ze3stringze70zd6zzwrite_astz00
									(BGl_shapez00zztools_shapez00(BgL_tz00_1428)));
							}
						else
							{	/* Write/ast.scm 110 */
								BgL_arg1309z00_1403 = BGl_string1662z00zzwrite_astz00;
							}
					}
					{	/* Write/ast.scm 114 */

						BgL_arg1310z00_1404 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_gz00_4)))->BgL_occurrencez00),
							((long) 10));
					}
					{	/* Write/ast.scm 115 */
						obj_t BgL_arg1360z00_1435;

						BgL_arg1360z00_1435 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_gz00_4)))->BgL_removablez00);
						BgL_arg1311z00_1405 =
							BGl_atomzd2ze3stringze70zd6zzwrite_astz00(BgL_arg1360z00_1435);
					}
					{	/* Write/ast.scm 116 */
						obj_t BgL_pz00_1436;

						{	/* Write/ast.scm 116 */

							{	/* Write/ast.scm 116 */

								BgL_pz00_1436 =
									BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
						}}
						{	/* Write/ast.scm 117 */
							obj_t BgL_arg1361z00_1437;

							BgL_arg1361z00_1437 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt) BgL_sfunz00_1400)))->BgL_locz00);
							bgl_display_obj(BgL_arg1361z00_1437, BgL_pz00_1436);
						}
						BgL_arg1312z00_1406 = bgl_close_output_port(BgL_pz00_1436);
					}
					if (
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_gz00_4)))->BgL_userzf3zf3))
						{	/* Write/ast.scm 119 */
							BgL_arg1314z00_1407 = BGl_string1663z00zzwrite_astz00;
						}
					else
						{	/* Write/ast.scm 119 */
							BgL_arg1314z00_1407 = BGl_string1664z00zzwrite_astz00;
						}
					{	/* Write/ast.scm 124 */
						obj_t BgL_zc3z04anonymousza31364ze3z87_1693;

						BgL_zc3z04anonymousza31364ze3z87_1693 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31364ze3ze5zzwrite_astz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31364ze3z87_1693,
							(int) (((long) 0)), ((obj_t) BgL_gz00_4));
						BgL_arg1315z00_1408 =
							BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
							(BgL_zc3z04anonymousza31364ze3z87_1693);
					}
					{	/* Write/ast.scm 104 */
						obj_t BgL_list1316z00_1409;

						{	/* Write/ast.scm 104 */
							obj_t BgL_arg1317z00_1410;

							{	/* Write/ast.scm 104 */
								obj_t BgL_arg1319z00_1411;

								{	/* Write/ast.scm 104 */
									obj_t BgL_arg1322z00_1412;

									{	/* Write/ast.scm 104 */
										obj_t BgL_arg1324z00_1413;

										{	/* Write/ast.scm 104 */
											obj_t BgL_arg1325z00_1414;

											{	/* Write/ast.scm 104 */
												obj_t BgL_arg1326z00_1415;

												{	/* Write/ast.scm 104 */
													obj_t BgL_arg1327z00_1416;

													{	/* Write/ast.scm 104 */
														obj_t BgL_arg1328z00_1417;

														{	/* Write/ast.scm 104 */
															obj_t BgL_arg1329z00_1418;

															{	/* Write/ast.scm 104 */
																obj_t BgL_arg1330z00_1419;

																{	/* Write/ast.scm 104 */
																	obj_t BgL_arg1331z00_1420;

																	{	/* Write/ast.scm 104 */
																		obj_t BgL_arg1334z00_1421;

																		{	/* Write/ast.scm 104 */
																			obj_t BgL_arg1335z00_1422;

																			{	/* Write/ast.scm 104 */
																				obj_t BgL_arg1337z00_1423;

																				BgL_arg1337z00_1423 =
																					MAKE_YOUNG_PAIR
																					(BGl_string1665z00zzwrite_astz00,
																					BNIL);
																				BgL_arg1335z00_1422 =
																					MAKE_YOUNG_PAIR(BgL_arg1315z00_1408,
																					BgL_arg1337z00_1423);
																			}
																			BgL_arg1334z00_1421 =
																				MAKE_YOUNG_PAIR
																				(BGl_string1666z00zzwrite_astz00,
																				BgL_arg1335z00_1422);
																		}
																		BgL_arg1331z00_1420 =
																			MAKE_YOUNG_PAIR(BgL_arg1314z00_1407,
																			BgL_arg1334z00_1421);
																	}
																	BgL_arg1330z00_1419 =
																		MAKE_YOUNG_PAIR(BgL_arg1312z00_1406,
																		BgL_arg1331z00_1420);
																}
																BgL_arg1329z00_1418 =
																	MAKE_YOUNG_PAIR
																	(BGl_string1667z00zzwrite_astz00,
																	BgL_arg1330z00_1419);
															}
															BgL_arg1328z00_1417 =
																MAKE_YOUNG_PAIR(BgL_arg1311z00_1405,
																BgL_arg1329z00_1418);
														}
														BgL_arg1327z00_1416 =
															MAKE_YOUNG_PAIR(BGl_string1668z00zzwrite_astz00,
															BgL_arg1328z00_1417);
													}
													BgL_arg1326z00_1415 =
														MAKE_YOUNG_PAIR(BgL_arg1310z00_1404,
														BgL_arg1327z00_1416);
												}
												BgL_arg1325z00_1414 =
													MAKE_YOUNG_PAIR(BGl_string1669z00zzwrite_astz00,
													BgL_arg1326z00_1415);
											}
											BgL_arg1324z00_1413 =
												MAKE_YOUNG_PAIR(BgL_arg1309z00_1403,
												BgL_arg1325z00_1414);
										}
										BgL_arg1322z00_1412 =
											MAKE_YOUNG_PAIR(BgL_arg1308z00_1402, BgL_arg1324z00_1413);
									}
									BgL_arg1319z00_1411 =
										MAKE_YOUNG_PAIR(BGl_string1670z00zzwrite_astz00,
										BgL_arg1322z00_1412);
								}
								BgL_arg1317z00_1410 =
									MAKE_YOUNG_PAIR(BgL_arg1307z00_1401, BgL_arg1319z00_1411);
							}
							BgL_list1316z00_1409 =
								MAKE_YOUNG_PAIR(BGl_string1671z00zzwrite_astz00,
								BgL_arg1317z00_1410);
						}
						return
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1316z00_1409);
					}
				}
			}
		}

	}



/* atom->string~0 */
	obj_t BGl_atomzd2ze3stringze70zd6zzwrite_astz00(obj_t BgL_atomz00_1445)
	{
		{	/* Write/ast.scm 102 */
			{

				{	/* Write/ast.scm 82 */
					long BgL_aux1109z00_1448;

					if (CNSTP(BgL_atomz00_1445))
						{	/* Write/ast.scm 82 */
							BgL_aux1109z00_1448 = CCNST(BgL_atomz00_1445);
						}
					else
						{	/* Write/ast.scm 82 */
							BgL_aux1109z00_1448 = ((long) -1);
						}
					switch (BgL_aux1109z00_1448)
						{
						case ((long) 4):

							return BGl_string1672z00zzwrite_astz00;
							break;
						case ((long) 2):

							return BGl_string1673z00zzwrite_astz00;
							break;
						case ((long) 3):

							return BGl_string1674z00zzwrite_astz00;
							break;
						default:
							if (SYMBOLP(BgL_atomz00_1445))
								{	/* Write/ast.scm 91 */
									if (CBOOL
										(BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00))
										{	/* Write/ast.scm 93 */
											obj_t BgL_res1647z00_1661;

											{	/* Write/ast.scm 93 */
												obj_t BgL_arg1466z00_1660;

												BgL_arg1466z00_1660 =
													SYMBOL_TO_STRING(BgL_atomz00_1445);
												BgL_res1647z00_1661 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_1660);
											}
											return BgL_res1647z00_1661;
										}
									else
										{	/* Write/ast.scm 94 */
											obj_t BgL_arg1381z00_1453;

											{	/* Write/ast.scm 94 */
												obj_t BgL_res1648z00_1664;

												{	/* Write/ast.scm 94 */
													obj_t BgL_arg1466z00_1663;

													BgL_arg1466z00_1663 =
														SYMBOL_TO_STRING(BgL_atomz00_1445);
													BgL_res1648z00_1664 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_1663);
												}
												BgL_arg1381z00_1453 = BgL_res1648z00_1664;
											}
											return
												BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
												(BgL_arg1381z00_1453);
										}
								}
							else
								{	/* Write/ast.scm 91 */
									if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_atomz00_1445))
										{	/* Write/ast.scm 96 */

											return
												BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
												(BgL_atomz00_1445, BINT(((long) 10)));
										}
									else
										{	/* Write/ast.scm 95 */
											if (STRINGP(BgL_atomz00_1445))
												{	/* Write/ast.scm 97 */
													return BgL_atomz00_1445;
												}
											else
												{	/* Write/ast.scm 100 */
													obj_t BgL_pz00_1458;

													{	/* Write/ast.scm 100 */

														{	/* Write/ast.scm 100 */

															BgL_pz00_1458 =
																BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
																(BTRUE);
														}
													}
													bgl_display_obj(BgL_atomz00_1445, BgL_pz00_1458);
													return bgl_close_output_port(BgL_pz00_1458);
												}
										}
								}
						}
				}
			}
		}

	}



/* &<@anonymous:1364> */
	obj_t BGl_z62zc3z04anonymousza31364ze3ze5zzwrite_astz00(obj_t BgL_envz00_1694)
	{
		{	/* Write/ast.scm 123 */
			{	/* Write/ast.scm 124 */
				BgL_globalz00_bglt BgL_gz00_1695;

				BgL_gz00_1695 =
					((BgL_globalz00_bglt)
					PROCEDURE_REF(BgL_envz00_1694, (int) (((long) 0))));
				{	/* Write/ast.scm 124 */
					obj_t BgL_arg1367z00_1709;
					obj_t BgL_arg1370z00_1710;

					BgL_arg1367z00_1709 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_gz00_1695)))->BgL_removablez00);
					{	/* Write/ast.scm 124 */
						obj_t BgL_res1654z00_1711;

						{	/* Write/ast.scm 124 */
							obj_t BgL_tmpz00_1959;

							BgL_tmpz00_1959 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1654z00_1711 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1959);
						}
						BgL_arg1370z00_1710 = BgL_res1654z00_1711;
					}
					return bgl_display_obj(BgL_arg1367z00_1709, BgL_arg1370z00_1710);
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzwrite_astz00()
	{
		{	/* Write/ast.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzwrite_astz00()
	{
		{	/* Write/ast.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzwrite_astz00()
	{
		{	/* Write/ast.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzwrite_astz00()
	{
		{	/* Write/ast.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzwrite_schemez00(((long) 305499432),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zztype_pptypez00(((long) 220178227),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
			return
				BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1675z00zzwrite_astz00));
		}

	}

#ifdef __cplusplus
}
#endif
