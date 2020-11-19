/*===========================================================================*/
/*   (Inline/app.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/app.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_stackablez00;
	}             *BgL_appz00_bglt;

	typedef struct BgL_isfunz00_bgl
	{
		struct BgL_nodez00_bgl *BgL_originalzd2bodyzd2;
		obj_t BgL_recursivezd2callszd2;
		bool_t BgL_tailrecz00;
	}               *BgL_isfunz00_bglt;


	extern bool_t
		BGl_iszd2recursivezf3z21zzinline_recursionz00(BgL_variablez00_bglt);
	extern obj_t BGl_sfunz00zzast_varz00;
	static bool_t BGl_inlinezd2closurezf3z21zzinline_appz00(BgL_variablez00_bglt,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzinline_appz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_appz00();
	static long BGl_callzd2siza7ez75zzinline_appz00(BgL_appz00_bglt);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzinline_appz00();
	extern obj_t BGl_za2inlinedzd2callsza2zd2zzinline_walkz00;
	static obj_t BGl_z62zc3z04anonymousza31296ze3ze5zzinline_appz00(obj_t, obj_t);
	static obj_t BGl_zc3z04exitza31293ze3ze70z60zzinline_appz00(obj_t);
	extern obj_t BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzinline_appz00 = BUNSPEC;
	extern obj_t BGl_nodezd2walkzd2zzast_nodez00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_genericzd2initzd2zzinline_appz00();
	extern obj_t BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2userzd2inliningzf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_inlinezd2appzf3z21zzinline_appz00(BgL_variablez00_bglt, long, long,
		obj_t);
	extern obj_t BGl_za2inliningzf3za2zf3zzengine_paramz00;
	extern BgL_nodez00_bglt
		BGl_inlinezd2appzd2simplez00zzinline_simplez00(BgL_nodez00_bglt, long,
		obj_t, obj_t);
	extern obj_t BGl_isfunz00zzinline_inlinez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinline_appz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_recursionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_simplez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_siza7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	static obj_t BGl_z62inlinezd2appzf3z43zzinline_appz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern long BGl_nodezd2siza7ez75zzinline_siza7eza7(BgL_nodez00_bglt);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzinline_appz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_appz00();
	extern obj_t BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_appz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_inlinezd2appzd2zzinline_appz00(BgL_appz00_bglt, long, obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	extern BgL_nodez00_bglt
		BGl_inlinezd2appzd2recursivez00zzinline_recursionz00(BgL_nodez00_bglt, long,
		obj_t);
	extern obj_t BGl_za2inlinezd2modeza2zd2zzinline_walkz00;
	static BgL_nodez00_bglt BGl_z62inlinezd2appzb0zzinline_appz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2optimzd2atomzd2inliningzf3za2zf3zzengine_paramz00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[8];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inlinezd2appzd2envz00zzinline_appz00,
		BgL_bgl_za762inlineza7d2appza71665za7,
		BGl_z62inlinezd2appzb0zzinline_appz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1659z00zzinline_appz00,
		BgL_bgl_string1659za700za7za7i1666za7, "simple", 6);
	      DEFINE_STRING(BGl_string1660z00zzinline_appz00,
		BgL_bgl_string1660za700za7za7i1667za7, "inline_app", 10);
	      DEFINE_STRING(BGl_string1661z00zzinline_appz00,
		BgL_bgl_string1661za700za7za7i1668za7,
		"import predicate reducer sgfun all snifun static sifun ", 55);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_inlinezd2appzf3zd2envzf3zzinline_appz00,
		BgL_bgl_za762inlineza7d2appza71669za7,
		BGl_z62inlinezd2appzf3z43zzinline_appz00, 0L, BUNSPEC, 4);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzinline_appz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinline_appz00(long
		BgL_checksumz00_1823, char *BgL_fromz00_1824)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_appz00))
				{
					BGl_requirezd2initializa7ationz75zzinline_appz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinline_appz00();
					BGl_libraryzd2moduleszd2initz00zzinline_appz00();
					BGl_cnstzd2initzd2zzinline_appz00();
					BGl_importedzd2moduleszd2initz00zzinline_appz00();
					return BGl_methodzd2initzd2zzinline_appz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_appz00()
	{
		{	/* Inline/app.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_app");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "inline_app");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "inline_app");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "inline_app");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"inline_app");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"inline_app");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"inline_app");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_appz00()
	{
		{	/* Inline/app.scm 15 */
			{	/* Inline/app.scm 15 */
				obj_t BgL_cportz00_1810;

				{	/* Inline/app.scm 15 */
					obj_t BgL_stringz00_1818;

					BgL_stringz00_1818 = BGl_string1661z00zzinline_appz00;
					{	/* Inline/app.scm 15 */
						obj_t BgL_startz00_1819;

						BgL_startz00_1819 = BINT(((long) 0));
						{	/* Inline/app.scm 15 */
							obj_t BgL_endz00_1820;

							BgL_endz00_1820 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1818)));
							{	/* Inline/app.scm 15 */

								BgL_cportz00_1810 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1818, BgL_startz00_1819, BgL_endz00_1820);
				}}}}
				{
					long BgL_iz00_1811;

					BgL_iz00_1811 = ((long) 7);
				BgL_loopz00_1812:
					if ((BgL_iz00_1811 == ((long) -1)))
						{	/* Inline/app.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/app.scm 15 */
							{	/* Inline/app.scm 15 */
								obj_t BgL_arg1663z00_1814;

								{	/* Inline/app.scm 15 */

									{	/* Inline/app.scm 15 */
										obj_t BgL_locationz00_1816;

										BgL_locationz00_1816 = BBOOL(((bool_t) 0));
										{	/* Inline/app.scm 15 */

											BgL_arg1663z00_1814 =
												BGl_readz00zz__readerz00(BgL_cportz00_1810,
												BgL_locationz00_1816);
										}
									}
								}
								{	/* Inline/app.scm 15 */
									int BgL_tmpz00_1849;

									BgL_tmpz00_1849 = (int) (BgL_iz00_1811);
									CNST_TABLE_SET(BgL_tmpz00_1849, BgL_arg1663z00_1814);
							}}
							{	/* Inline/app.scm 15 */
								int BgL_auxz00_1817;

								BgL_auxz00_1817 = (int) ((BgL_iz00_1811 - ((long) 1)));
								{
									long BgL_iz00_1854;

									BgL_iz00_1854 = (long) (BgL_auxz00_1817);
									BgL_iz00_1811 = BgL_iz00_1854;
									goto BgL_loopz00_1812;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinline_appz00()
	{
		{	/* Inline/app.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* inline-app */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_inlinezd2appzd2zzinline_appz00(BgL_appz00_bglt BgL_nodez00_3,
		long BgL_kfactorz00_4, obj_t BgL_stackz00_5)
	{
		{	/* Inline/app.scm 35 */
			{	/* Inline/app.scm 36 */
				BgL_varz00_bglt BgL_calleez00_1414;

				BgL_calleez00_1414 =
					(((BgL_appz00_bglt) COBJECT(BgL_nodez00_3))->BgL_funz00);
				{	/* Inline/app.scm 36 */
					BgL_variablez00_bglt BgL_varz00_1415;

					BgL_varz00_1415 =
						(((BgL_varz00_bglt) COBJECT(BgL_calleez00_1414))->BgL_variablez00);
					{	/* Inline/app.scm 37 */
						BgL_valuez00_bglt BgL_sfunz00_1416;

						BgL_sfunz00_1416 =
							(((BgL_variablez00_bglt) COBJECT(BgL_varz00_1415))->BgL_valuez00);
						{	/* Inline/app.scm 40 */

							{	/* Inline/app.scm 44 */
								bool_t BgL_test1672z00_1860;

								{	/* Inline/app.scm 44 */
									bool_t BgL_res1640z00_1733;

									BgL_res1640z00_1733 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_sfunz00_1416), BGl_sfunz00zzast_varz00);
									BgL_test1672z00_1860 = BgL_res1640z00_1733;
								}
								if (BgL_test1672z00_1860)
									{	/* Inline/app.scm 46 */
										bool_t BgL_test1673z00_1863;

										if (BGl_inlinezd2appzf3z21zzinline_appz00(BgL_varz00_1415,
												BgL_kfactorz00_4,
												BGl_callzd2siza7ez75zzinline_appz00(BgL_nodez00_3),
												BgL_stackz00_5))
											{	/* Inline/app.scm 46 */
												BgL_test1673z00_1863 = ((bool_t) 1);
											}
										else
											{	/* Inline/app.scm 46 */
												BgL_test1673z00_1863 =
													BGl_inlinezd2closurezf3z21zzinline_appz00
													(BgL_varz00_1415, BgL_stackz00_5);
											}
										if (BgL_test1673z00_1863)
											{	/* Inline/app.scm 46 */
												if (
													((((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt) BgL_sfunz00_1416)))->
															BgL_classz00) == CNST_TABLE_REF(((long) 0))))
													{	/* Inline/app.scm 51 */
														BFALSE;
													}
												else
													{	/* Inline/app.scm 51 */
														BGl_za2inlinedzd2callsza2zd2zzinline_walkz00 =
															ADDFX
															(BGl_za2inlinedzd2callsza2zd2zzinline_walkz00,
															BINT(((long) 1)));
													}
												{	/* Inline/app.scm 53 */
													bool_t BgL_test1676z00_1875;

													{	/* Inline/app.scm 53 */
														bool_t BgL_test1677z00_1876;

														{	/* Inline/app.scm 53 */
															bool_t BgL_res1642z00_1737;

															BgL_res1642z00_1737 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_varz00_1415),
																BGl_globalz00zzast_varz00);
															BgL_test1677z00_1876 = BgL_res1642z00_1737;
														}
														if (BgL_test1677z00_1876)
															{	/* Inline/app.scm 53 */
																BgL_test1676z00_1875 =
																	CBOOL(
																	(((BgL_globalz00_bglt) COBJECT(
																				((BgL_globalz00_bglt)
																					BgL_varz00_1415)))->BgL_libraryz00));
															}
														else
															{	/* Inline/app.scm 53 */
																BgL_test1676z00_1875 = ((bool_t) 0);
															}
													}
													if (BgL_test1676z00_1875)
														{	/* Inline/app.scm 56 */
															obj_t BgL_arg1258z00_1429;

															BgL_arg1258z00_1429 =
																(((BgL_globalz00_bglt) COBJECT(
																		((BgL_globalz00_bglt) BgL_varz00_1415)))->
																BgL_modulez00);
															BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00
																(BgL_arg1258z00_1429);
														}
													else
														{	/* Inline/app.scm 53 */
															BFALSE;
														}
												}
												{	/* Inline/app.scm 57 */
													bool_t BgL_test1679z00_1885;

													if (CBOOL
														(BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00))
														{	/* Inline/app.scm 57 */
															BgL_test1679z00_1885 =
																BGl_iszd2recursivezf3z21zzinline_recursionz00
																(BgL_varz00_1415);
														}
													else
														{	/* Inline/app.scm 57 */
															BgL_test1679z00_1885 = ((bool_t) 0);
														}
													if (BgL_test1679z00_1885)
														{	/* Inline/app.scm 57 */
															return
																BGl_inlinezd2appzd2recursivez00zzinline_recursionz00
																(((BgL_nodez00_bglt) BgL_nodez00_3),
																BgL_kfactorz00_4, BgL_stackz00_5);
														}
													else
														{	/* Inline/app.scm 57 */
															return
																BGl_inlinezd2appzd2simplez00zzinline_simplez00(
																((BgL_nodez00_bglt) BgL_nodez00_3),
																BgL_kfactorz00_4, BgL_stackz00_5,
																BGl_string1659z00zzinline_appz00);
														}
												}
											}
										else
											{	/* Inline/app.scm 46 */
												return ((BgL_nodez00_bglt) BgL_nodez00_3);
											}
									}
								else
									{	/* Inline/app.scm 44 */
										return ((BgL_nodez00_bglt) BgL_nodez00_3);
									}
							}
						}
					}
				}
			}
		}

	}



/* &inline-app */
	BgL_nodez00_bglt BGl_z62inlinezd2appzb0zzinline_appz00(obj_t BgL_envz00_1796,
		obj_t BgL_nodez00_1797, obj_t BgL_kfactorz00_1798, obj_t BgL_stackz00_1799)
	{
		{	/* Inline/app.scm 35 */
			return
				BGl_inlinezd2appzd2zzinline_appz00(
				((BgL_appz00_bglt) BgL_nodez00_1797),
				(long) CINT(BgL_kfactorz00_1798), BgL_stackz00_1799);
		}

	}



/* inline-closure? */
	bool_t BGl_inlinezd2closurezf3z21zzinline_appz00(BgL_variablez00_bglt
		BgL_varz00_6, obj_t BgL_stackz00_7)
	{
		{	/* Inline/app.scm 66 */
			{	/* Inline/app.scm 67 */
				bool_t BgL_test1681z00_1898;

				if (PAIRP(BgL_stackz00_7))
					{	/* Inline/app.scm 67 */
						obj_t BgL_arg1282z00_1449;

						BgL_arg1282z00_1449 = CAR(BgL_stackz00_7);
						BgL_test1681z00_1898 =
							BGl_isazf3zf3zz__objectz00(BgL_arg1282z00_1449,
							BGl_globalz00zzast_varz00);
					}
				else
					{	/* Inline/app.scm 67 */
						BgL_test1681z00_1898 = ((bool_t) 0);
					}
				if (BgL_test1681z00_1898)
					{	/* Inline/app.scm 67 */
						if (
							(((obj_t) BgL_varz00_6) ==
								(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																CAR(BgL_stackz00_7))))->BgL_valuez00))))->
									BgL_thezd2closurezd2globalz00)))
							{	/* Inline/app.scm 69 */
								bool_t BgL_test1684z00_1911;

								{	/* Inline/app.scm 69 */
									bool_t BgL__ortest_1107z00_1443;

									{	/* Inline/app.scm 69 */
										bool_t BgL_res1645z00_1746;

										BgL_res1645z00_1746 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_varz00_6), BGl_localz00zzast_varz00);
										BgL__ortest_1107z00_1443 = BgL_res1645z00_1746;
									}
									if (BgL__ortest_1107z00_1443)
										{	/* Inline/app.scm 69 */
											BgL_test1684z00_1911 = BgL__ortest_1107z00_1443;
										}
									else
										{	/* Inline/app.scm 69 */
											BgL_test1684z00_1911 =
												(
												(((BgL_globalz00_bglt) COBJECT(
															((BgL_globalz00_bglt) BgL_varz00_6)))->
													BgL_importz00) == CNST_TABLE_REF(((long) 1)));
								}}
								if (BgL_test1684z00_1911)
									{	/* Inline/app.scm 69 */
										return
											(
											(((BgL_variablez00_bglt) COBJECT(BgL_varz00_6))->
												BgL_occurrencez00) == ((long) 1));
									}
								else
									{	/* Inline/app.scm 69 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Inline/app.scm 68 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Inline/app.scm 67 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* call-size */
	long BGl_callzd2siza7ez75zzinline_appz00(BgL_appz00_bglt BgL_nodez00_8)
	{
		{	/* Inline/app.scm 75 */
			{	/* Inline/app.scm 77 */
				long BgL_csiza7eza7_1451;

				BgL_csiza7eza7_1451 =
					(((long) 1) +
					bgl_list_length(
						(((BgL_appz00_bglt) COBJECT(BgL_nodez00_8))->BgL_argsz00)));
				if (CBOOL(BGl_za2optimzd2atomzd2inliningzf3za2zf3zzengine_paramz00))
					{	/* Inline/app.scm 79 */
						obj_t BgL_atomsz00_1452;

						{	/* Inline/app.scm 79 */
							obj_t BgL_hook1237z00_1454;

							BgL_hook1237z00_1454 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
							{	/* Inline/app.scm 79 */
								obj_t BgL_g1238z00_1455;

								BgL_g1238z00_1455 =
									(((BgL_appz00_bglt) COBJECT(BgL_nodez00_8))->BgL_argsz00);
								{
									obj_t BgL_l1234z00_1457;
									obj_t BgL_h1235z00_1458;

									BgL_l1234z00_1457 = BgL_g1238z00_1455;
									BgL_h1235z00_1458 = BgL_hook1237z00_1454;
								BgL_zc3z04anonymousza31285ze3z87_1459:
									if (NULLP(BgL_l1234z00_1457))
										{	/* Inline/app.scm 79 */
											BgL_atomsz00_1452 = CDR(BgL_hook1237z00_1454);
										}
									else
										{	/* Inline/app.scm 79 */
											bool_t BgL_test1688z00_1931;

											{	/* Inline/app.scm 80 */
												obj_t BgL_xz00_1468;

												BgL_xz00_1468 = CAR(((obj_t) BgL_l1234z00_1457));
												{	/* Inline/app.scm 80 */
													bool_t BgL__ortest_1109z00_1469;

													BgL__ortest_1109z00_1469 =
														BGl_isazf3zf3zz__objectz00(BgL_xz00_1468,
														BGl_atomz00zzast_nodez00);
													if (BgL__ortest_1109z00_1469)
														{	/* Inline/app.scm 80 */
															BgL_test1688z00_1931 = BgL__ortest_1109z00_1469;
														}
													else
														{	/* Inline/app.scm 80 */
															BgL_test1688z00_1931 =
																BGl_isazf3zf3zz__objectz00(BgL_xz00_1468,
																BGl_kwotez00zzast_nodez00);
														}
												}
											}
											if (BgL_test1688z00_1931)
												{	/* Inline/app.scm 79 */
													obj_t BgL_nh1236z00_1464;

													{	/* Inline/app.scm 79 */
														obj_t BgL_arg1289z00_1466;

														BgL_arg1289z00_1466 =
															CAR(((obj_t) BgL_l1234z00_1457));
														{	/* Inline/app.scm 79 */
															obj_t BgL_res1649z00_1757;

															BgL_res1649z00_1757 =
																MAKE_YOUNG_PAIR(BgL_arg1289z00_1466, BNIL);
															BgL_nh1236z00_1464 = BgL_res1649z00_1757;
														}
													}
													SET_CDR(BgL_h1235z00_1458, BgL_nh1236z00_1464);
													{	/* Inline/app.scm 79 */
														obj_t BgL_arg1288z00_1465;

														BgL_arg1288z00_1465 =
															CDR(((obj_t) BgL_l1234z00_1457));
														{
															obj_t BgL_h1235z00_1944;
															obj_t BgL_l1234z00_1943;

															BgL_l1234z00_1943 = BgL_arg1288z00_1465;
															BgL_h1235z00_1944 = BgL_nh1236z00_1464;
															BgL_h1235z00_1458 = BgL_h1235z00_1944;
															BgL_l1234z00_1457 = BgL_l1234z00_1943;
															goto BgL_zc3z04anonymousza31285ze3z87_1459;
														}
													}
												}
											else
												{	/* Inline/app.scm 79 */
													obj_t BgL_arg1290z00_1467;

													BgL_arg1290z00_1467 =
														CDR(((obj_t) BgL_l1234z00_1457));
													{
														obj_t BgL_l1234z00_1947;

														BgL_l1234z00_1947 = BgL_arg1290z00_1467;
														BgL_l1234z00_1457 = BgL_l1234z00_1947;
														goto BgL_zc3z04anonymousza31285ze3z87_1459;
													}
												}
										}
								}
							}
						}
						return (BgL_csiza7eza7_1451 + bgl_list_length(BgL_atomsz00_1452));
					}
				else
					{	/* Inline/app.scm 78 */
						return BgL_csiza7eza7_1451;
					}
			}
		}

	}



/* <@exit:1293>~0 */
	obj_t BGl_zc3z04exitza31293ze3ze70z60zzinline_appz00(obj_t BgL_nodez00_1809)
	{
		{	/* Inline/app.scm 89 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1110z00_1474;

			if (SET_EXIT(BgL_an_exit1110z00_1474))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1110z00_1474 = (void *) jmpbuf;
					{	/* Inline/app.scm 89 */

						PUSH_EXIT(BgL_an_exit1110z00_1474, ((long) 1));
						{	/* Inline/app.scm 89 */
							obj_t BgL_an_exitd1111z00_1475;

							BgL_an_exitd1111z00_1475 = ((obj_t) (&exitd));
							{	/* Inline/app.scm 89 */
								bool_t BgL_res1113z00_1478;

								{	/* Inline/app.scm 90 */
									obj_t BgL_zc3z04anonymousza31296ze3z87_1800;

									BgL_zc3z04anonymousza31296ze3z87_1800 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31296ze3ze5zzinline_appz00,
										(int) (((long) 1)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31296ze3z87_1800,
										(int) (((long) 0)), BgL_an_exitd1111z00_1475);
									BGl_nodezd2walkzd2zzast_nodez00(((BgL_nodez00_bglt)
											BgL_nodez00_1809), BgL_zc3z04anonymousza31296ze3z87_1800);
								}
								BgL_res1113z00_1478 = ((bool_t) 0);
								POP_EXIT();
								return BBOOL(BgL_res1113z00_1478);
							}
						}
					}
				}
		}

	}



/* &<@anonymous:1296> */
	obj_t BGl_z62zc3z04anonymousza31296ze3ze5zzinline_appz00(obj_t
		BgL_envz00_1801, obj_t BgL_nz00_1803)
	{
		{	/* Inline/app.scm 90 */
			{	/* Inline/app.scm 90 */
				obj_t BgL_an_exitd1111z00_1802;

				BgL_an_exitd1111z00_1802 =
					PROCEDURE_REF(BgL_envz00_1801, (int) (((long) 0)));
				if (BGl_isazf3zf3zz__objectz00(BgL_nz00_1803,
						BGl_kwotez00zzast_nodez00))
					{	/* Inline/app.scm 90 */
						return
							BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1111z00_1802,
							BTRUE);
					}
				else
					{	/* Inline/app.scm 90 */
						return BFALSE;
					}
			}
		}

	}



/* inline-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_inlinezd2appzf3z21zzinline_appz00(BgL_variablez00_bglt BgL_varz00_10,
		long BgL_kfactorz00_11, long BgL_callzd2siza7ez75_12, obj_t BgL_stackz00_13)
	{
		{	/* Inline/app.scm 96 */
			{	/* Inline/app.scm 101 */
				BgL_valuez00_bglt BgL_sfunz00_1484;

				BgL_sfunz00_1484 =
					(((BgL_variablez00_bglt) COBJECT(BgL_varz00_10))->BgL_valuez00);
				{	/* Inline/app.scm 101 */
					obj_t BgL_bodyz00_1485;

					{	/* Inline/app.scm 102 */
						bool_t BgL_test1691z00_1968;

						{	/* Inline/app.scm 102 */
							bool_t BgL_res1652z00_1767;

							BgL_res1652z00_1767 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_sfunz00_1484), BGl_isfunz00zzinline_inlinez00);
							BgL_test1691z00_1968 = BgL_res1652z00_1767;
						}
						if (BgL_test1691z00_1968)
							{
								BgL_nodez00_bglt BgL_auxz00_1971;

								{
									BgL_isfunz00_bglt BgL_auxz00_1972;

									{
										obj_t BgL_auxz00_1973;

										{	/* Inline/app.scm 103 */
											BgL_objectz00_bglt BgL_tmpz00_1974;

											BgL_tmpz00_1974 =
												((BgL_objectz00_bglt)
												((BgL_sfunz00_bglt) BgL_sfunz00_1484));
											BgL_auxz00_1973 = BGL_OBJECT_WIDENING(BgL_tmpz00_1974);
										}
										BgL_auxz00_1972 = ((BgL_isfunz00_bglt) BgL_auxz00_1973);
									}
									BgL_auxz00_1971 =
										(((BgL_isfunz00_bglt) COBJECT(BgL_auxz00_1972))->
										BgL_originalzd2bodyzd2);
								}
								BgL_bodyz00_1485 = ((obj_t) BgL_auxz00_1971);
							}
						else
							{	/* Inline/app.scm 102 */
								BgL_bodyz00_1485 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_sfunz00_1484)))->BgL_bodyz00);
							}
					}
					{	/* Inline/app.scm 102 */

						if (BGl_isazf3zf3zz__objectz00(BgL_bodyz00_1485,
								BGl_nodez00zzast_nodez00))
							{	/* Inline/app.scm 106 */
								if (CBOOL(BGl_za2inliningzf3za2zf3zzengine_paramz00))
									{	/* Inline/app.scm 113 */
										bool_t BgL_test1694z00_1987;

										if (CBOOL
											(BGl_za2optimzd2loopzd2inliningzf3za2zf3zzengine_paramz00))
											{	/* Inline/app.scm 113 */
												if (CBOOL
													(BGl_za2optimzd2unrollzd2loopzf3za2zf3zzengine_paramz00))
													{	/* Inline/app.scm 114 */
														BgL_test1694z00_1987 = ((bool_t) 0);
													}
												else
													{	/* Inline/app.scm 114 */
														BgL_test1694z00_1987 =
															CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
																((obj_t) BgL_varz00_10), BgL_stackz00_13));
													}
											}
										else
											{	/* Inline/app.scm 113 */
												BgL_test1694z00_1987 = ((bool_t) 0);
											}
										if (BgL_test1694z00_1987)
											{	/* Inline/app.scm 113 */
												return ((bool_t) 0);
											}
										else
											{	/* Inline/app.scm 113 */
												if (
													((((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt) BgL_sfunz00_1484)))->
															BgL_classz00) == CNST_TABLE_REF(((long) 2))))
													{	/* Inline/app.scm 119 */
														return ((bool_t) 0);
													}
												else
													{	/* Inline/app.scm 123 */
														bool_t BgL_test1698z00_2000;

														if (
															(BGl_za2inlinezd2modeza2zd2zzinline_walkz00 ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Inline/app.scm 123 */
																BgL_test1698z00_2000 = ((bool_t) 0);
															}
														else
															{	/* Inline/app.scm 123 */
																if (
																	((((BgL_sfunz00_bglt) COBJECT(
																					((BgL_sfunz00_bglt)
																						BgL_sfunz00_1484)))->
																			BgL_classz00) ==
																		CNST_TABLE_REF(((long) 0))))
																	{	/* Inline/app.scm 124 */
																		BgL_test1698z00_2000 =
																			BGl_iszd2recursivezf3z21zzinline_recursionz00
																			(BgL_varz00_10);
																	}
																else
																	{	/* Inline/app.scm 124 */
																		BgL_test1698z00_2000 = ((bool_t) 0);
																	}
															}
														if (BgL_test1698z00_2000)
															{	/* Inline/app.scm 123 */
																return ((bool_t) 0);
															}
														else
															{	/* Inline/app.scm 123 */
																if (
																	((((BgL_sfunz00_bglt) COBJECT(
																					((BgL_sfunz00_bglt)
																						BgL_sfunz00_1484)))->
																			BgL_classz00) ==
																		CNST_TABLE_REF(((long) 4))))
																	{	/* Inline/app.scm 129 */
																		return ((bool_t) 0);
																	}
																else
																	{	/* Inline/app.scm 133 */
																		bool_t BgL_test1702z00_2015;

																		if (
																			((((BgL_sfunz00_bglt) COBJECT(
																							((BgL_sfunz00_bglt)
																								BgL_sfunz00_1484)))->
																					BgL_classz00) ==
																				CNST_TABLE_REF(((long) 0))))
																			{	/* Inline/app.scm 133 */
																				if (CBOOL
																					(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																						(((obj_t) BgL_varz00_10),
																							BgL_stackz00_13)))
																					{	/* Inline/app.scm 134 */
																						BgL_test1702z00_2015 = ((bool_t) 0);
																					}
																				else
																					{	/* Inline/app.scm 135 */
																						bool_t BgL_test1706z00_2025;

																						if (
																							(BGl_za2inlinezd2modeza2zd2zzinline_walkz00
																								== CNST_TABLE_REF(((long) 5))))
																							{	/* Inline/app.scm 136 */
																								bool_t BgL_test1709z00_2029;

																								{	/* Inline/app.scm 136 */
																									obj_t BgL_arg1383z00_1555;

																									BgL_arg1383z00_1555 =
																										(((BgL_sfunz00_bglt)
																											COBJECT((
																													(BgL_sfunz00_bglt)
																													BgL_sfunz00_1484)))->
																										BgL_bodyz00);
																									BgL_test1709z00_2029 =
																										CBOOL
																										(BGl_zc3z04exitza31293ze3ze70z60zzinline_appz00
																										(BgL_arg1383z00_1555));
																								}
																								if (BgL_test1709z00_2029)
																									{	/* Inline/app.scm 136 */
																										BgL_test1706z00_2025 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Inline/app.scm 136 */
																										BgL_test1706z00_2025 =
																											((bool_t) 1);
																									}
																							}
																						else
																							{	/* Inline/app.scm 135 */
																								BgL_test1706z00_2025 =
																									((bool_t) 1);
																							}
																						if (BgL_test1706z00_2025)
																							{	/* Inline/app.scm 137 */
																								bool_t BgL__ortest_1114z00_1551;

																								if (
																									(BGl_za2inlinezd2modeza2zd2zzinline_walkz00
																										==
																										CNST_TABLE_REF(((long) 6))))
																									{	/* Inline/app.scm 137 */
																										BgL__ortest_1114z00_1551 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Inline/app.scm 137 */
																										BgL__ortest_1114z00_1551 =
																											((bool_t) 1);
																									}
																								if (BgL__ortest_1114z00_1551)
																									{	/* Inline/app.scm 137 */
																										BgL_test1702z00_2015 =
																											BgL__ortest_1114z00_1551;
																									}
																								else
																									{	/* Inline/app.scm 137 */
																										BgL_test1702z00_2015 =
																											CBOOL(
																											(((BgL_funz00_bglt)
																													COBJECT((
																															(BgL_funz00_bglt)
																															BgL_sfunz00_1484)))->
																												BgL_predicatezd2ofzd2));
																									}
																							}
																						else
																							{	/* Inline/app.scm 135 */
																								BgL_test1702z00_2015 =
																									((bool_t) 0);
																							}
																					}
																			}
																		else
																			{	/* Inline/app.scm 133 */
																				BgL_test1702z00_2015 = ((bool_t) 0);
																			}
																		if (BgL_test1702z00_2015)
																			{	/* Inline/app.scm 133 */
																				return ((bool_t) 1);
																			}
																		else
																			{	/* Inline/app.scm 142 */
																				bool_t BgL_test1712z00_2041;

																				{	/* Inline/app.scm 142 */
																					bool_t BgL_test1713z00_2042;

																					{	/* Inline/app.scm 142 */
																						bool_t BgL_res1653z00_1777;

																						BgL_res1653z00_1777 =
																							BGl_isazf3zf3zz__objectz00(
																							((obj_t) BgL_varz00_10),
																							BGl_globalz00zzast_varz00);
																						BgL_test1713z00_2042 =
																							BgL_res1653z00_1777;
																					}
																					if (BgL_test1713z00_2042)
																						{	/* Inline/app.scm 142 */
																							BgL_test1712z00_2041 =
																								(
																								(((BgL_globalz00_bglt) COBJECT(
																											((BgL_globalz00_bglt)
																												BgL_varz00_10)))->
																									BgL_importz00) ==
																								CNST_TABLE_REF(((long) 7)));
																						}
																					else
																						{	/* Inline/app.scm 142 */
																							BgL_test1712z00_2041 =
																								((bool_t) 0);
																						}
																				}
																				if (BgL_test1712z00_2041)
																					{	/* Inline/app.scm 142 */
																						return ((bool_t) 0);
																					}
																				else
																					{	/* Inline/app.scm 142 */
																						if (CBOOL
																							(BGl_za2userzd2inliningzf3za2z21zzengine_paramz00))
																							{	/* Inline/app.scm 149 */
																								bool_t BgL_test1715z00_2051;

																								{	/* Inline/app.scm 149 */
																									long BgL_arg1372z00_1544;
																									long BgL_arg1381z00_1545;

																									BgL_arg1372z00_1544 =
																										BGl_nodezd2siza7ez75zzinline_siza7eza7
																										(((BgL_nodez00_bglt)
																											BgL_bodyz00_1485));
																									BgL_arg1381z00_1545 =
																										(BgL_kfactorz00_11 *
																										BgL_callzd2siza7ez75_12);
																									BgL_test1715z00_2051 =
																										(BgL_arg1372z00_1544 <
																										BgL_arg1381z00_1545);
																								}
																								if (BgL_test1715z00_2051)
																									{	/* Inline/app.scm 149 */
																										return ((bool_t) 1);
																									}
																								else
																									{	/* Inline/app.scm 157 */
																										bool_t BgL_test1716z00_2056;

																										{	/* Inline/app.scm 157 */
																											bool_t
																												BgL_test1718z00_2057;
																											{	/* Inline/app.scm 157 */
																												long
																													BgL_arg1371z00_1543;
																												BgL_arg1371z00_1543 =
																													BGl_nodezd2siza7ez75zzinline_siza7eza7
																													(((BgL_nodez00_bglt)
																														BgL_bodyz00_1485));
																												BgL_test1718z00_2057 =
																													(BgL_arg1371z00_1543
																													==
																													BgL_callzd2siza7ez75_12);
																											}
																											if (BgL_test1718z00_2057)
																												{	/* Inline/app.scm 157 */
																													if (CBOOL
																														(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																															(((obj_t)
																																	BgL_varz00_10),
																																BgL_stackz00_13)))
																														{	/* Inline/app.scm 157 */
																															BgL_test1716z00_2056
																																= ((bool_t) 0);
																														}
																													else
																														{	/* Inline/app.scm 157 */
																															BgL_test1716z00_2056
																																= ((bool_t) 1);
																														}
																												}
																											else
																												{	/* Inline/app.scm 157 */
																													BgL_test1716z00_2056 =
																														((bool_t) 0);
																												}
																										}
																										if (BgL_test1716z00_2056)
																											{	/* Inline/app.scm 157 */
																												return ((bool_t) 1);
																											}
																										else
																											{	/* Inline/app.scm 165 */
																												bool_t
																													BgL_test1721z00_2065;
																												if (((((BgL_variablez00_bglt) COBJECT(BgL_varz00_10))->BgL_occurrencez00) == ((long) 1)))
																													{	/* Inline/app.scm 166 */
																														bool_t
																															BgL_test1723z00_2069;
																														{	/* Inline/app.scm 166 */
																															bool_t
																																BgL_test1724z00_2070;
																															{	/* Inline/app.scm 166 */
																																bool_t
																																	BgL_res1658z00_1791;
																																BgL_res1658z00_1791
																																	=
																																	BGl_isazf3zf3zz__objectz00
																																	(((obj_t)
																																		BgL_varz00_10),
																																	BGl_globalz00zzast_varz00);
																																BgL_test1724z00_2070
																																	=
																																	BgL_res1658z00_1791;
																															}
																															if (BgL_test1724z00_2070)
																																{	/* Inline/app.scm 166 */
																																	BgL_test1723z00_2069
																																		=
																																		((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt) BgL_varz00_10)))->BgL_importz00) == CNST_TABLE_REF(((long) 1)));
																																}
																															else
																																{	/* Inline/app.scm 166 */
																																	BgL_test1723z00_2069
																																		=
																																		((bool_t)
																																		1);
																																}
																														}
																														if (BgL_test1723z00_2069)
																															{	/* Inline/app.scm 167 */
																																obj_t
																																	BgL_arg1363z00_1536;
																																BgL_arg1363z00_1536
																																	=
																																	(((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) (((BgL_variablez00_bglt) COBJECT(BgL_varz00_10))->BgL_valuez00))))->BgL_bodyz00);
																																BgL_test1721z00_2065
																																	=
																																	BGl_isazf3zf3zz__objectz00
																																	(BgL_arg1363z00_1536,
																																	BGl_retblockz00zzast_nodez00);
																															}
																														else
																															{	/* Inline/app.scm 166 */
																																BgL_test1721z00_2065
																																	=
																																	((bool_t) 0);
																															}
																													}
																												else
																													{	/* Inline/app.scm 165 */
																														BgL_test1721z00_2065
																															= ((bool_t) 0);
																													}
																												if (BgL_test1721z00_2065)
																													{	/* Inline/app.scm 165 */
																														return ((bool_t) 1);
																													}
																												else
																													{	/* Inline/app.scm 165 */
																														return ((bool_t) 0);
																													}
																											}
																									}
																							}
																						else
																							{	/* Inline/app.scm 146 */
																								return ((bool_t) 0);
																							}
																					}
																			}
																	}
															}
													}
											}
									}
								else
									{	/* Inline/app.scm 109 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Inline/app.scm 106 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}

	}



/* &inline-app? */
	obj_t BGl_z62inlinezd2appzf3z43zzinline_appz00(obj_t BgL_envz00_1804,
		obj_t BgL_varz00_1805, obj_t BgL_kfactorz00_1806,
		obj_t BgL_callzd2siza7ez75_1807, obj_t BgL_stackz00_1808)
	{
		{	/* Inline/app.scm 96 */
			return
				BBOOL(BGl_inlinezd2appzf3z21zzinline_appz00(
					((BgL_variablez00_bglt) BgL_varz00_1805),
					(long) CINT(BgL_kfactorz00_1806),
					(long) CINT(BgL_callzd2siza7ez75_1807), BgL_stackz00_1808));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinline_appz00()
	{
		{	/* Inline/app.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_appz00()
	{
		{	/* Inline/app.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_appz00()
	{
		{	/* Inline/app.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_appz00()
	{
		{	/* Inline/app.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzmodule_libraryz00(((long) 292140521),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzinline_walkz00(((long) 385476796),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzinline_inlinez00(((long) 20504998),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzinline_siza7eza7(((long) 243191759),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			BGl_modulezd2initializa7ationz75zzinline_simplez00(((long) 221468920),
				BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
			return
				BGl_modulezd2initializa7ationz75zzinline_recursionz00(((long)
					101873046), BSTRING_TO_STRING(BGl_string1660z00zzinline_appz00));
		}

	}

#ifdef __cplusplus
}
#endif
