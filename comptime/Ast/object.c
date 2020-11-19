/*===========================================================================*/
/*   (Ast/object.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/object.scm) */
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

	typedef struct BgL_slotz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_srcz00;
		obj_t BgL_classzd2ownerzd2;
		long BgL_indexz00;
		obj_t BgL_typez00;
		bool_t BgL_readzd2onlyzf3z21;
		obj_t BgL_defaultzd2valuezd2;
		obj_t BgL_virtualzd2numzd2;
		bool_t BgL_virtualzd2overridezd2;
		obj_t BgL_getterz00;
		obj_t BgL_setterz00;
		obj_t BgL_userzd2infozd2;
	}              *BgL_slotz00_bglt;

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


	static obj_t BGl___bigloo_wallow__z00zzast_objectz00 = BUNSPEC;
	static BgL_nodez00_bglt BGl_z62fieldzd2refzd2ze3nodez81zzast_objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzast_objectz00();
	BGL_IMPORT bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_privatezd2nodezd2zzast_privatez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_objectz00();
	static obj_t BGl__fieldzd2accesszd2zzast_objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_fieldzd2accesszd2zzast_objectz00(obj_t, obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_objectz00();
	extern obj_t BGl_makezd2classzd2refz00zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t);
	extern obj_t BGl_makezd2classzd2setz12z12zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62fieldzd2setzd2ze3nodez81zzast_objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_fieldzd2refzd2ze3nodeze3zzast_objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_objectz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_toplevelzd2initzd2zzast_objectz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_objectz00();
	static obj_t BGl_makezd2fieldzd2setz12z12zzast_objectz00(obj_t, obj_t,
		BgL_nodez00_bglt, obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2classzd2slotz00zzobject_toolsz00(BgL_typez00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl___bigloo__z00zzast_objectz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_jclassz00zzobject_classz00;
	extern obj_t BGl_wclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_objectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_applyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_exitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_labelsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_pragmaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzast_objectz00();
	static obj_t BGl_makezd2fieldzd2refz00zzast_objectz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_sourcezd2ze3fieldz31zzast_objectz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_objectz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_objectz00();
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_fieldzd2setzd2ze3nodeze3zzast_objectz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t __cnst[6];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2setzd2ze3nodezd2envz31zzast_objectz00,
		BgL_bgl_za762fieldza7d2setza7d1786za7,
		BGl_z62fieldzd2setzd2ze3nodez81zzast_objectz00, 0L, BUNSPEC, 6);
	      DEFINE_STRING(BGl_string1773z00zzast_objectz00,
		BgL_bgl_string1773za700za7za7a1787za7, "#!bigloo", 8);
	      DEFINE_STRING(BGl_string1774z00zzast_objectz00,
		BgL_bgl_string1774za700za7za7a1788za7, "#!bigloo_wallow", 15);
	      DEFINE_STRING(BGl_string1775z00zzast_objectz00,
		BgL_bgl_string1775za700za7za7a1789za7, "Class \"~a\" has not field \"~a\"",
		29);
	      DEFINE_STRING(BGl_string1776z00zzast_objectz00,
		BgL_bgl_string1776za700za7za7a1790za7, "Static type not a class", 23);
	      DEFINE_STRING(BGl_string1777z00zzast_objectz00,
		BgL_bgl_string1777za700za7za7a1791za7, "Unbound variable", 16);
	      DEFINE_STRING(BGl_string1778z00zzast_objectz00,
		BgL_bgl_string1778za700za7za7a1792za7, "Field read-only \"~a\"", 20);
	      DEFINE_STRING(BGl_string1779z00zzast_objectz00,
		BgL_bgl_string1779za700za7za7a1793za7, "Class \"~a\" has no field \"~a\"",
		28);
	      DEFINE_STRING(BGl_string1780z00zzast_objectz00,
		BgL_bgl_string1780za700za7za7a1794za7, "ast_object", 10);
	      DEFINE_STRING(BGl_string1781z00zzast_objectz00,
		BgL_bgl_string1781za700za7za7a1795za7,
		"call-virtual-setter @ call-virtual-getter __object set! -> ", 59);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2refzd2ze3nodezd2envz31zzast_objectz00,
		BgL_bgl_za762fieldza7d2refza7d1796za7,
		BGl_z62fieldzd2refzd2ze3nodez81zzast_objectz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzd2accesszd2envz00zzast_objectz00,
		BgL_bgl__fieldza7d2accessza71797z00, opt_generic_entry,
		BGl__fieldzd2accesszd2zzast_objectz00, BFALSE, -1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl___bigloo_wallow__z00zzast_objectz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_objectz00));
		     ADD_ROOT((void *) (&BGl___bigloo__z00zzast_objectz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_objectz00(long
		BgL_checksumz00_2172, char *BgL_fromz00_2173)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_objectz00))
				{
					BGl_requirezd2initializa7ationz75zzast_objectz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_objectz00();
					BGl_libraryzd2moduleszd2initz00zzast_objectz00();
					BGl_cnstzd2initzd2zzast_objectz00();
					BGl_importedzd2moduleszd2initz00zzast_objectz00();
					return BGl_toplevelzd2initzd2zzast_objectz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_objectz00()
	{
		{	/* Ast/object.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_object");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_object");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_object");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_object");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_object");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_object");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_object");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_object");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_object");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "ast_object");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_objectz00()
	{
		{	/* Ast/object.scm 15 */
			{	/* Ast/object.scm 15 */
				obj_t BgL_cportz00_2159;

				{	/* Ast/object.scm 15 */
					obj_t BgL_stringz00_2167;

					BgL_stringz00_2167 = BGl_string1781z00zzast_objectz00;
					{	/* Ast/object.scm 15 */
						obj_t BgL_startz00_2168;

						BgL_startz00_2168 = BINT(((long) 0));
						{	/* Ast/object.scm 15 */
							obj_t BgL_endz00_2169;

							BgL_endz00_2169 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2167)));
							{	/* Ast/object.scm 15 */

								BgL_cportz00_2159 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2167, BgL_startz00_2168, BgL_endz00_2169);
				}}}}
				{
					long BgL_iz00_2160;

					BgL_iz00_2160 = ((long) 5);
				BgL_loopz00_2161:
					if ((BgL_iz00_2160 == ((long) -1)))
						{	/* Ast/object.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Ast/object.scm 15 */
							{	/* Ast/object.scm 15 */
								obj_t BgL_arg1784z00_2163;

								{	/* Ast/object.scm 15 */

									{	/* Ast/object.scm 15 */
										obj_t BgL_locationz00_2165;

										BgL_locationz00_2165 = BBOOL(((bool_t) 0));
										{	/* Ast/object.scm 15 */

											BgL_arg1784z00_2163 =
												BGl_readz00zz__readerz00(BgL_cportz00_2159,
												BgL_locationz00_2165);
										}
									}
								}
								{	/* Ast/object.scm 15 */
									int BgL_tmpz00_2201;

									BgL_tmpz00_2201 = (int) (BgL_iz00_2160);
									CNST_TABLE_SET(BgL_tmpz00_2201, BgL_arg1784z00_2163);
							}}
							{	/* Ast/object.scm 15 */
								int BgL_auxz00_2166;

								BgL_auxz00_2166 = (int) ((BgL_iz00_2160 - ((long) 1)));
								{
									long BgL_iz00_2206;

									BgL_iz00_2206 = (long) (BgL_auxz00_2166);
									BgL_iz00_2160 = BgL_iz00_2206;
									goto BgL_loopz00_2161;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_objectz00()
	{
		{	/* Ast/object.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_objectz00()
	{
		{	/* Ast/object.scm 15 */
			BGl___bigloo__z00zzast_objectz00 =
				bstring_to_symbol(BGl_string1773z00zzast_objectz00);
			return (BGl___bigloo_wallow__z00zzast_objectz00 =
				bstring_to_symbol(BGl_string1774z00zzast_objectz00), BUNSPEC);
		}

	}



/* _field-access */
	obj_t BGl__fieldzd2accesszd2zzast_objectz00(obj_t BgL_env1304z00_21,
		obj_t BgL_opt1303z00_20)
	{
		{	/* Ast/object.scm 65 */
			{	/* Ast/object.scm 65 */
				obj_t BgL_g1305z00_1724;
				obj_t BgL_g1306z00_1725;

				BgL_g1305z00_1724 = VECTOR_REF(BgL_opt1303z00_20, ((long) 0));
				BgL_g1306z00_1725 = VECTOR_REF(BgL_opt1303z00_20, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1303z00_20))
					{
					case ((long) 2):

						{	/* Ast/object.scm 65 */

							return
								BGl_fieldzd2accesszd2zzast_objectz00(BgL_g1305z00_1724,
								BgL_g1306z00_1725, BFALSE);
						}
						break;
					case ((long) 3):

						{	/* Ast/object.scm 65 */
							obj_t BgL_writezd2allowzd2_1730;

							BgL_writezd2allowzd2_1730 =
								VECTOR_REF(BgL_opt1303z00_20, ((long) 2));
							{	/* Ast/object.scm 65 */

								return
									BGl_fieldzd2accesszd2zzast_objectz00(BgL_g1305z00_1724,
									BgL_g1306z00_1725, BgL_writezd2allowzd2_1730);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* field-access */
	BGL_EXPORTED_DEF obj_t BGl_fieldzd2accesszd2zzast_objectz00(obj_t
		BgL_varz00_17, obj_t BgL_fieldz00_18, obj_t BgL_writezd2allowzd2_19)
	{
		{	/* Ast/object.scm 65 */
			{	/* Ast/object.scm 66 */
				obj_t BgL_arg1326z00_1731;

				{	/* Ast/object.scm 66 */
					obj_t BgL_arg1327z00_1732;
					obj_t BgL_arg1328z00_1733;

					if (CBOOL(BgL_writezd2allowzd2_19))
						{	/* Ast/object.scm 66 */
							BgL_arg1327z00_1732 = BGl___bigloo_wallow__z00zzast_objectz00;
						}
					else
						{	/* Ast/object.scm 66 */
							BgL_arg1327z00_1732 = BGl___bigloo__z00zzast_objectz00;
						}
					{	/* Ast/object.scm 66 */
						obj_t BgL_arg1329z00_1734;

						BgL_arg1329z00_1734 = MAKE_YOUNG_PAIR(BgL_fieldz00_18, BNIL);
						BgL_arg1328z00_1733 =
							MAKE_YOUNG_PAIR(BgL_varz00_17, BgL_arg1329z00_1734);
					}
					BgL_arg1326z00_1731 =
						MAKE_YOUNG_PAIR(BgL_arg1327z00_1732, BgL_arg1328z00_1733);
				}
				return MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BgL_arg1326z00_1731);
		}}

	}



/* source->field */
	obj_t BGl_sourcezd2ze3fieldz31zzast_objectz00(obj_t BgL_lz00_22)
	{
		{	/* Ast/object.scm 71 */
			{	/* Ast/object.scm 72 */
				bool_t BgL_test1801z00_2225;

				{	/* Ast/object.scm 72 */
					bool_t BgL_test1802z00_2226;

					{	/* Ast/object.scm 72 */
						obj_t BgL_arg1338z00_1742;

						BgL_arg1338z00_1742 = CAR(((obj_t) BgL_lz00_22));
						BgL_test1802z00_2226 =
							(BgL_arg1338z00_1742 == BGl___bigloo__z00zzast_objectz00);
					}
					if (BgL_test1802z00_2226)
						{	/* Ast/object.scm 72 */
							BgL_test1801z00_2225 = ((bool_t) 1);
						}
					else
						{	/* Ast/object.scm 72 */
							obj_t BgL_arg1337z00_1741;

							BgL_arg1337z00_1741 = CAR(((obj_t) BgL_lz00_22));
							BgL_test1801z00_2225 =
								(BgL_arg1337z00_1741 ==
								BGl___bigloo_wallow__z00zzast_objectz00);
						}
				}
				if (BgL_test1801z00_2225)
					{	/* Ast/object.scm 72 */
						return CDR(((obj_t) BgL_lz00_22));
					}
				else
					{	/* Ast/object.scm 72 */
						return BgL_lz00_22;
					}
			}
		}

	}



/* field-ref->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_fieldzd2refzd2ze3nodeze3zzast_objectz00(obj_t BgL_lz00_23,
		obj_t BgL_expz00_24, obj_t BgL_stackz00_25, obj_t BgL_locz00_26,
		obj_t BgL_sitez00_27)
	{
		{	/* Ast/object.scm 79 */
			{	/* Ast/object.scm 80 */
				obj_t BgL_l2z00_1743;

				BgL_l2z00_1743 = BGl_sourcezd2ze3fieldz31zzast_objectz00(BgL_lz00_23);
				{	/* Ast/object.scm 80 */
					BgL_nodez00_bglt BgL_varz00_1744;

					{	/* Ast/object.scm 81 */
						obj_t BgL_arg1381z00_1774;

						BgL_arg1381z00_1774 = CAR(((obj_t) BgL_l2z00_1743));
						BgL_varz00_1744 =
							BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1381z00_1774,
							BgL_stackz00_25, BgL_locz00_26, BgL_sitez00_27);
					}
					{	/* Ast/object.scm 81 */

						{	/* Ast/object.scm 83 */
							bool_t BgL_test1803z00_2239;

							{	/* Ast/object.scm 83 */
								bool_t BgL_res1759z00_2094;

								BgL_res1759z00_2094 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_varz00_1744), BGl_varz00zzast_nodez00);
								BgL_test1803z00_2239 = BgL_res1759z00_2094;
							}
							if (BgL_test1803z00_2239)
								{	/* Ast/object.scm 84 */
									BgL_variablez00_bglt BgL_i1110z00_1746;

									BgL_i1110z00_1746 =
										(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_varz00_1744)))->BgL_variablez00);
									{	/* Ast/object.scm 85 */
										obj_t BgL_g1111z00_1747;

										BgL_g1111z00_1747 = CDR(((obj_t) BgL_l2z00_1743));
										{
											obj_t BgL_nodez00_1750;
											obj_t BgL_klassz00_1751;
											obj_t BgL_slotsz00_1752;

											{	/* Ast/object.scm 85 */
												BgL_typez00_bglt BgL_arg1344z00_1749;

												BgL_arg1344z00_1749 =
													(((BgL_variablez00_bglt) COBJECT(BgL_i1110z00_1746))->
													BgL_typez00);
												{
													obj_t BgL_auxz00_2247;

													BgL_nodez00_1750 = ((obj_t) BgL_varz00_1744);
													BgL_klassz00_1751 = ((obj_t) BgL_arg1344z00_1749);
													BgL_slotsz00_1752 = BgL_g1111z00_1747;
												BgL_zc3z04anonymousza31345ze3z87_1753:
													if (NULLP(BgL_slotsz00_1752))
														{	/* Ast/object.scm 89 */
															BgL_auxz00_2247 = BgL_nodez00_1750;
														}
													else
														{	/* Ast/object.scm 91 */
															bool_t BgL_test1805z00_2250;

															if (BGl_isazf3zf3zz__objectz00(BgL_klassz00_1751,
																	BGl_tclassz00zzobject_classz00))
																{	/* Ast/object.scm 91 */
																	BgL_test1805z00_2250 = ((bool_t) 1);
																}
															else
																{	/* Ast/object.scm 91 */
																	if (BGl_isazf3zf3zz__objectz00
																		(BgL_klassz00_1751,
																			BGl_jclassz00zzobject_classz00))
																		{	/* Ast/object.scm 91 */
																			BgL_test1805z00_2250 = ((bool_t) 1);
																		}
																	else
																		{	/* Ast/object.scm 91 */
																			BgL_test1805z00_2250 =
																				BGl_isazf3zf3zz__objectz00
																				(BgL_klassz00_1751,
																				BGl_wclassz00zzobject_classz00);
																		}
																}
															if (BgL_test1805z00_2250)
																{	/* Ast/object.scm 94 */
																	obj_t BgL_slotz00_1758;

																	{	/* Ast/object.scm 94 */
																		obj_t BgL_arg1370z00_1767;

																		BgL_arg1370z00_1767 =
																			CAR(((obj_t) BgL_slotsz00_1752));
																		BgL_slotz00_1758 =
																			BGl_findzd2classzd2slotz00zzobject_toolsz00
																			(((BgL_typez00_bglt) BgL_klassz00_1751),
																			BgL_arg1370z00_1767);
																	}
																	if (CBOOL(BgL_slotz00_1758))
																		{	/* Ast/object.scm 100 */
																			obj_t BgL_nodez00_1759;

																			BgL_nodez00_1759 =
																				BGl_makezd2fieldzd2refz00zzast_objectz00
																				(BgL_slotz00_1758, BgL_nodez00_1750,
																				BgL_stackz00_25, BgL_locz00_26,
																				BgL_sitez00_27);
																			{	/* Ast/object.scm 101 */
																				obj_t BgL_arg1357z00_1760;
																				obj_t BgL_arg1360z00_1761;

																				BgL_arg1357z00_1760 =
																					(((BgL_slotz00_bglt) COBJECT(
																							((BgL_slotz00_bglt)
																								BgL_slotz00_1758)))->
																					BgL_typez00);
																				BgL_arg1360z00_1761 =
																					CDR(((obj_t) BgL_slotsz00_1752));
																				{
																					obj_t BgL_slotsz00_2269;
																					obj_t BgL_klassz00_2268;
																					obj_t BgL_nodez00_2267;

																					BgL_nodez00_2267 = BgL_nodez00_1759;
																					BgL_klassz00_2268 =
																						BgL_arg1357z00_1760;
																					BgL_slotsz00_2269 =
																						BgL_arg1360z00_1761;
																					BgL_slotsz00_1752 = BgL_slotsz00_2269;
																					BgL_klassz00_1751 = BgL_klassz00_2268;
																					BgL_nodez00_1750 = BgL_nodez00_2267;
																					goto
																						BgL_zc3z04anonymousza31345ze3z87_1753;
																				}
																			}
																		}
																	else
																		{	/* Ast/object.scm 98 */
																			obj_t BgL_arg1361z00_1762;

																			{	/* Ast/object.scm 98 */
																				obj_t BgL_arg1363z00_1763;
																				obj_t BgL_arg1364z00_1764;

																				BgL_arg1363z00_1763 =
																					(((BgL_typez00_bglt) COBJECT(
																							((BgL_typez00_bglt)
																								BgL_klassz00_1751)))->
																					BgL_idz00);
																				BgL_arg1364z00_1764 =
																					CAR(((obj_t) BgL_slotsz00_1752));
																				{	/* Ast/object.scm 97 */
																					obj_t BgL_list1365z00_1765;

																					{	/* Ast/object.scm 97 */
																						obj_t BgL_arg1367z00_1766;

																						BgL_arg1367z00_1766 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1364z00_1764, BNIL);
																						BgL_list1365z00_1765 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1363z00_1763,
																							BgL_arg1367z00_1766);
																					}
																					BgL_arg1361z00_1762 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string1775z00zzast_objectz00,
																						BgL_list1365z00_1765);
																				}
																			}
																			BgL_auxz00_2247 =
																				((obj_t)
																				BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																				(BgL_arg1361z00_1762, BgL_expz00_24,
																					BgL_locz00_26));
																		}
																}
															else
																{	/* Ast/object.scm 91 */
																	BgL_auxz00_2247 =
																		((obj_t)
																		BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																		(BGl_string1776z00zzast_objectz00,
																			BgL_expz00_24, BgL_locz00_26));
																}
														}
													return ((BgL_nodez00_bglt) BgL_auxz00_2247);
												}
											}
										}
									}
								}
							else
								{	/* Ast/object.scm 102 */
									bool_t BgL_test1812z00_2284;

									if (INTEGERP
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
										{	/* Ast/object.scm 102 */
											BgL_test1812z00_2284 =
												(
												(long)
												CINT
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) ==
												((long) 0));
										}
									else
										{	/* Ast/object.scm 102 */
											BgL_test1812z00_2284 =
												BGl_2zd3zd3zz__r4_numbers_6_5z00
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
												BINT(((long) 0)));
										}
									if (BgL_test1812z00_2284)
										{	/* Ast/object.scm 102 */
											return
												BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
												(BGl_string1777z00zzast_objectz00, BgL_expz00_24,
												BgL_locz00_26);
										}
									else
										{	/* Ast/object.scm 102 */
											return BgL_varz00_1744;
										}
								}
						}
					}
				}
			}
		}

	}



/* &field-ref->node */
	BgL_nodez00_bglt BGl_z62fieldzd2refzd2ze3nodez81zzast_objectz00(obj_t
		BgL_envz00_2145, obj_t BgL_lz00_2146, obj_t BgL_expz00_2147,
		obj_t BgL_stackz00_2148, obj_t BgL_locz00_2149, obj_t BgL_sitez00_2150)
	{
		{	/* Ast/object.scm 79 */
			return
				BGl_fieldzd2refzd2ze3nodeze3zzast_objectz00(BgL_lz00_2146,
				BgL_expz00_2147, BgL_stackz00_2148, BgL_locz00_2149, BgL_sitez00_2150);
		}

	}



/* field-set->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_fieldzd2setzd2ze3nodeze3zzast_objectz00(obj_t BgL_lz00_28,
		obj_t BgL_valz00_29, obj_t BgL_expz00_30, obj_t BgL_stackz00_31,
		obj_t BgL_locz00_32, obj_t BgL_sitez00_33)
	{
		{	/* Ast/object.scm 110 */
			{	/* Ast/object.scm 111 */
				obj_t BgL_l2z00_1775;

				BgL_l2z00_1775 = BGl_sourcezd2ze3fieldz31zzast_objectz00(BgL_lz00_28);
				{	/* Ast/object.scm 111 */
					BgL_nodez00_bglt BgL_varz00_1776;

					{	/* Ast/object.scm 112 */
						obj_t BgL_arg1540z00_1825;

						BgL_arg1540z00_1825 = CAR(((obj_t) BgL_l2z00_1775));
						BgL_varz00_1776 =
							BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1540z00_1825,
							BgL_stackz00_31, BgL_locz00_32, BgL_sitez00_33);
					}
					{	/* Ast/object.scm 112 */
						BgL_nodez00_bglt BgL_valz00_1777;

						BgL_valz00_1777 =
							BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_valz00_29, BgL_stackz00_31,
							BgL_locz00_32, BgL_sitez00_33);
						{	/* Ast/object.scm 113 */

							{	/* Ast/object.scm 115 */
								bool_t BgL_test1814z00_2298;

								{	/* Ast/object.scm 115 */
									bool_t BgL_res1766z00_2111;

									BgL_res1766z00_2111 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_varz00_1776), BGl_varz00zzast_nodez00);
									BgL_test1814z00_2298 = BgL_res1766z00_2111;
								}
								if (BgL_test1814z00_2298)
									{	/* Ast/object.scm 116 */
										BgL_variablez00_bglt BgL_i1112z00_1779;

										BgL_i1112z00_1779 =
											(((BgL_varz00_bglt) COBJECT(
													((BgL_varz00_bglt) BgL_varz00_1776)))->
											BgL_variablez00);
										{	/* Ast/object.scm 117 */
											obj_t BgL_g1116z00_1780;

											BgL_g1116z00_1780 = CDR(((obj_t) BgL_l2z00_1775));
											{
												obj_t BgL_nodez00_1783;
												obj_t BgL_klassz00_1784;
												obj_t BgL_slotsz00_1785;

												{	/* Ast/object.scm 117 */
													BgL_typez00_bglt BgL_arg1394z00_1782;

													BgL_arg1394z00_1782 =
														(((BgL_variablez00_bglt)
															COBJECT(BgL_i1112z00_1779))->BgL_typez00);
													{
														obj_t BgL_auxz00_2306;

														BgL_nodez00_1783 = ((obj_t) BgL_varz00_1776);
														BgL_klassz00_1784 = ((obj_t) BgL_arg1394z00_1782);
														BgL_slotsz00_1785 = BgL_g1116z00_1780;
													BgL_zc3z04anonymousza31395ze3z87_1786:
														{	/* Ast/object.scm 120 */
															bool_t BgL_test1815z00_2307;

															if (BGl_isazf3zf3zz__objectz00(BgL_klassz00_1784,
																	BGl_tclassz00zzobject_classz00))
																{	/* Ast/object.scm 120 */
																	BgL_test1815z00_2307 = ((bool_t) 1);
																}
															else
																{	/* Ast/object.scm 120 */
																	if (BGl_isazf3zf3zz__objectz00
																		(BgL_klassz00_1784,
																			BGl_jclassz00zzobject_classz00))
																		{	/* Ast/object.scm 120 */
																			BgL_test1815z00_2307 = ((bool_t) 1);
																		}
																	else
																		{	/* Ast/object.scm 120 */
																			BgL_test1815z00_2307 =
																				BGl_isazf3zf3zz__objectz00
																				(BgL_klassz00_1784,
																				BGl_wclassz00zzobject_classz00);
																		}
																}
															if (BgL_test1815z00_2307)
																{	/* Ast/object.scm 122 */
																	obj_t BgL_slotz00_1790;

																	{	/* Ast/object.scm 122 */
																		obj_t BgL_arg1536z00_1818;

																		BgL_arg1536z00_1818 =
																			CAR(((obj_t) BgL_slotsz00_1785));
																		BgL_slotz00_1790 =
																			BGl_findzd2classzd2slotz00zzobject_toolsz00
																			(((BgL_typez00_bglt) BgL_klassz00_1784),
																			BgL_arg1536z00_1818);
																	}
																	if (CBOOL(BgL_slotz00_1790))
																		{	/* Ast/object.scm 124 */
																			if (NULLP(CDR(
																						((obj_t) BgL_slotsz00_1785))))
																				{	/* Ast/object.scm 130 */
																					bool_t BgL_test1823z00_2323;

																					if (
																						(((BgL_slotz00_bglt) COBJECT(
																									((BgL_slotz00_bglt)
																										BgL_slotz00_1790)))->
																							BgL_readzd2onlyzf3z21))
																						{	/* Ast/object.scm 131 */
																							bool_t BgL_test1825z00_2327;

																							{	/* Ast/object.scm 131 */
																								obj_t BgL_arg1477z00_1808;

																								BgL_arg1477z00_1808 =
																									CAR(((obj_t) BgL_lz00_28));
																								BgL_test1825z00_2327 =
																									(BgL_arg1477z00_1808 ==
																									BGl___bigloo_wallow__z00zzast_objectz00);
																							}
																							if (BgL_test1825z00_2327)
																								{	/* Ast/object.scm 131 */
																									BgL_test1823z00_2323 =
																										((bool_t) 0);
																								}
																							else
																								{	/* Ast/object.scm 131 */
																									BgL_test1823z00_2323 =
																										((bool_t) 1);
																								}
																						}
																					else
																						{	/* Ast/object.scm 130 */
																							BgL_test1823z00_2323 =
																								((bool_t) 0);
																						}
																					if (BgL_test1823z00_2323)
																						{	/* Ast/object.scm 133 */
																							obj_t BgL_arg1448z00_1798;
																							obj_t BgL_arg1449z00_1799;

																							{	/* Ast/object.scm 133 */
																								obj_t BgL_arg1461z00_1800;

																								{	/* Ast/object.scm 133 */
																									obj_t BgL_pairz00_2125;

																									BgL_pairz00_2125 =
																										CDR(
																										((obj_t) BgL_l2z00_1775));
																									BgL_arg1461z00_1800 =
																										CAR(BgL_pairz00_2125);
																								}
																								{	/* Ast/object.scm 133 */
																									obj_t BgL_list1462z00_1801;

																									BgL_list1462z00_1801 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1461z00_1800, BNIL);
																									BgL_arg1448z00_1798 =
																										BGl_formatz00zz__r4_output_6_10_3z00
																										(BGl_string1778z00zzast_objectz00,
																										BgL_list1462z00_1801);
																								}
																							}
																							{	/* Ast/object.scm 134 */
																								obj_t BgL_arg1464z00_1802;

																								{	/* Ast/object.scm 134 */
																									obj_t BgL_arg1465z00_1803;
																									obj_t BgL_arg1474z00_1804;

																									BgL_arg1465z00_1803 =
																										CAR(
																										((obj_t) BgL_l2z00_1775));
																									{	/* Ast/object.scm 134 */
																										obj_t BgL_arg1476z00_1805;

																										{	/* Ast/object.scm 134 */
																											obj_t BgL_pairz00_2130;

																											BgL_pairz00_2130 =
																												CDR(
																												((obj_t)
																													BgL_l2z00_1775));
																											BgL_arg1476z00_1805 =
																												CAR(BgL_pairz00_2130);
																										}
																										BgL_arg1474z00_1804 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1476z00_1805,
																											BNIL);
																									}
																									BgL_arg1464z00_1802 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1465z00_1803,
																										BgL_arg1474z00_1804);
																								}
																								BgL_arg1449z00_1799 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 1)),
																									BgL_arg1464z00_1802);
																							}
																							BgL_auxz00_2306 =
																								((obj_t)
																								BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																								(BgL_arg1448z00_1798,
																									BgL_arg1449z00_1799,
																									BgL_locz00_32));
																						}
																					else
																						{	/* Ast/object.scm 130 */
																							BgL_auxz00_2306 =
																								BGl_makezd2fieldzd2setz12z12zzast_objectz00
																								(BgL_slotz00_1790,
																								BgL_nodez00_1783,
																								BgL_valz00_1777,
																								BgL_stackz00_31, BgL_locz00_32,
																								BgL_sitez00_33);
																						}
																				}
																			else
																				{	/* Ast/object.scm 137 */
																					obj_t BgL_nodez00_1809;

																					BgL_nodez00_1809 =
																						BGl_makezd2fieldzd2refz00zzast_objectz00
																						(BgL_slotz00_1790, BgL_nodez00_1783,
																						BgL_stackz00_31, BgL_locz00_32,
																						BgL_sitez00_33);
																					{	/* Ast/object.scm 138 */
																						obj_t BgL_arg1489z00_1810;
																						obj_t BgL_arg1493z00_1811;

																						BgL_arg1489z00_1810 =
																							(((BgL_slotz00_bglt) COBJECT(
																									((BgL_slotz00_bglt)
																										BgL_slotz00_1790)))->
																							BgL_typez00);
																						BgL_arg1493z00_1811 =
																							CDR(((obj_t) BgL_slotsz00_1785));
																						{
																							obj_t BgL_slotsz00_2355;
																							obj_t BgL_klassz00_2354;
																							obj_t BgL_nodez00_2353;

																							BgL_nodez00_2353 =
																								BgL_nodez00_1809;
																							BgL_klassz00_2354 =
																								BgL_arg1489z00_1810;
																							BgL_slotsz00_2355 =
																								BgL_arg1493z00_1811;
																							BgL_slotsz00_1785 =
																								BgL_slotsz00_2355;
																							BgL_klassz00_1784 =
																								BgL_klassz00_2354;
																							BgL_nodez00_1783 =
																								BgL_nodez00_2353;
																							goto
																								BgL_zc3z04anonymousza31395ze3z87_1786;
																						}
																					}
																				}
																		}
																	else
																		{	/* Ast/object.scm 127 */
																			obj_t BgL_arg1497z00_1813;

																			{	/* Ast/object.scm 127 */
																				obj_t BgL_arg1518z00_1814;
																				obj_t BgL_arg1521z00_1815;

																				BgL_arg1518z00_1814 =
																					(((BgL_typez00_bglt) COBJECT(
																							((BgL_typez00_bglt)
																								BgL_klassz00_1784)))->
																					BgL_idz00);
																				BgL_arg1521z00_1815 =
																					CAR(((obj_t) BgL_slotsz00_1785));
																				{	/* Ast/object.scm 126 */
																					obj_t BgL_list1522z00_1816;

																					{	/* Ast/object.scm 126 */
																						obj_t BgL_arg1528z00_1817;

																						BgL_arg1528z00_1817 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1521z00_1815, BNIL);
																						BgL_list1522z00_1816 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1518z00_1814,
																							BgL_arg1528z00_1817);
																					}
																					BgL_arg1497z00_1813 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string1779z00zzast_objectz00,
																						BgL_list1522z00_1816);
																				}
																			}
																			BgL_auxz00_2306 =
																				((obj_t)
																				BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																				(BgL_arg1497z00_1813, BgL_expz00_30,
																					BgL_locz00_32));
																		}
																}
															else
																{	/* Ast/object.scm 120 */
																	BgL_auxz00_2306 =
																		((obj_t)
																		BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																		(BGl_string1776z00zzast_objectz00,
																			BgL_expz00_30, BgL_locz00_32));
																}
														}
														return ((BgL_nodez00_bglt) BgL_auxz00_2306);
													}
												}
											}
										}
									}
								else
									{	/* Ast/object.scm 139 */
										bool_t BgL_test1826z00_2370;

										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Ast/object.scm 139 */
												BgL_test1826z00_2370 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													== ((long) 0));
											}
										else
											{	/* Ast/object.scm 139 */
												BgL_test1826z00_2370 =
													BGl_2zd3zd3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 0)));
											}
										if (BgL_test1826z00_2370)
											{	/* Ast/object.scm 139 */
												return
													BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
													(BGl_string1777z00zzast_objectz00, BgL_expz00_30,
													BgL_locz00_32);
											}
										else
											{	/* Ast/object.scm 139 */
												return BgL_varz00_1776;
											}
									}
							}
						}
					}
				}
			}
		}

	}



/* &field-set->node */
	BgL_nodez00_bglt BGl_z62fieldzd2setzd2ze3nodez81zzast_objectz00(obj_t
		BgL_envz00_2151, obj_t BgL_lz00_2152, obj_t BgL_valz00_2153,
		obj_t BgL_expz00_2154, obj_t BgL_stackz00_2155, obj_t BgL_locz00_2156,
		obj_t BgL_sitez00_2157)
	{
		{	/* Ast/object.scm 110 */
			return
				BGl_fieldzd2setzd2ze3nodeze3zzast_objectz00(BgL_lz00_2152,
				BgL_valz00_2153, BgL_expz00_2154, BgL_stackz00_2155, BgL_locz00_2156,
				BgL_sitez00_2157);
		}

	}



/* make-field-ref */
	obj_t BGl_makezd2fieldzd2refz00zzast_objectz00(obj_t BgL_slotz00_34,
		obj_t BgL_objz00_35, obj_t BgL_stackz00_36, obj_t BgL_locz00_37,
		obj_t BgL_sitez00_38)
	{
		{	/* Ast/object.scm 147 */
			if (CBOOL(
					(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_slotz00_34)))->BgL_getterz00)))
				{	/* Ast/object.scm 149 */
					obj_t BgL_vnumz00_1827;

					BgL_vnumz00_1827 =
						(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_slotz00_34)))->BgL_virtualzd2numzd2);
					{	/* Ast/object.scm 149 */
						obj_t BgL_expz00_1828;

						{	/* Ast/object.scm 150 */
							obj_t BgL_arg1552z00_1829;
							obj_t BgL_arg1558z00_1830;

							{	/* Ast/object.scm 150 */
								obj_t BgL_arg1561z00_1831;

								{	/* Ast/object.scm 150 */
									obj_t BgL_arg1564z00_1832;

									BgL_arg1564z00_1832 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)), BNIL);
									BgL_arg1561z00_1831 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
										BgL_arg1564z00_1832);
								}
								BgL_arg1552z00_1829 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
									BgL_arg1561z00_1831);
							}
							{	/* Ast/object.scm 150 */
								obj_t BgL_arg1565z00_1833;

								BgL_arg1565z00_1833 = MAKE_YOUNG_PAIR(BgL_vnumz00_1827, BNIL);
								BgL_arg1558z00_1830 =
									MAKE_YOUNG_PAIR(BgL_objz00_35, BgL_arg1565z00_1833);
							}
							BgL_expz00_1828 =
								MAKE_YOUNG_PAIR(BgL_arg1552z00_1829, BgL_arg1558z00_1830);
						}
						{	/* Ast/object.scm 150 */

							return
								((obj_t)
								BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_expz00_1828,
									BgL_stackz00_36, BgL_locz00_37, BgL_sitez00_38));
						}
					}
				}
			else
				{	/* Ast/object.scm 152 */
					obj_t BgL_privz00_1834;

					{	/* Ast/object.scm 152 */
						obj_t BgL_arg1573z00_1835;

						BgL_arg1573z00_1835 =
							(((BgL_slotz00_bglt) COBJECT(
									((BgL_slotz00_bglt) BgL_slotz00_34)))->BgL_classzd2ownerzd2);
						BgL_privz00_1834 =
							BGl_makezd2classzd2refz00zzobject_toolsz00(
							((BgL_typez00_bglt) BgL_arg1573z00_1835),
							((BgL_slotz00_bglt) BgL_slotz00_34), BgL_objz00_35);
					}
					return
						BGl_privatezd2nodezd2zzast_privatez00(BgL_privz00_1834,
						BgL_stackz00_36, BgL_locz00_37, BgL_sitez00_38);
				}
		}

	}



/* make-field-set! */
	obj_t BGl_makezd2fieldzd2setz12z12zzast_objectz00(obj_t BgL_slotz00_39,
		obj_t BgL_objz00_40, BgL_nodez00_bglt BgL_valz00_41, obj_t BgL_stackz00_42,
		obj_t BgL_locz00_43, obj_t BgL_sitez00_44)
	{
		{	/* Ast/object.scm 160 */
			if (CBOOL(
					(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_slotz00_39)))->BgL_setterz00)))
				{	/* Ast/object.scm 163 */
					obj_t BgL_vnumz00_1837;

					BgL_vnumz00_1837 =
						(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_slotz00_39)))->BgL_virtualzd2numzd2);
					{	/* Ast/object.scm 163 */
						obj_t BgL_expz00_1838;

						{	/* Ast/object.scm 164 */
							obj_t BgL_arg1575z00_1839;
							obj_t BgL_arg1578z00_1840;

							{	/* Ast/object.scm 164 */
								obj_t BgL_arg1582z00_1841;

								{	/* Ast/object.scm 164 */
									obj_t BgL_arg1584z00_1842;

									BgL_arg1584z00_1842 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)), BNIL);
									BgL_arg1582z00_1841 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
										BgL_arg1584z00_1842);
								}
								BgL_arg1575z00_1839 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
									BgL_arg1582z00_1841);
							}
							{	/* Ast/object.scm 164 */
								obj_t BgL_arg1588z00_1843;

								{	/* Ast/object.scm 164 */
									obj_t BgL_arg1589z00_1844;

									BgL_arg1589z00_1844 =
										MAKE_YOUNG_PAIR(((obj_t) BgL_valz00_41), BNIL);
									BgL_arg1588z00_1843 =
										MAKE_YOUNG_PAIR(BgL_vnumz00_1837, BgL_arg1589z00_1844);
								}
								BgL_arg1578z00_1840 =
									MAKE_YOUNG_PAIR(BgL_objz00_40, BgL_arg1588z00_1843);
							}
							BgL_expz00_1838 =
								MAKE_YOUNG_PAIR(BgL_arg1575z00_1839, BgL_arg1578z00_1840);
						}
						{	/* Ast/object.scm 164 */

							return
								((obj_t)
								BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_expz00_1838,
									BgL_stackz00_42, BgL_locz00_43, BgL_sitez00_44));
						}
					}
				}
			else
				{	/* Ast/object.scm 167 */
					obj_t BgL_privz00_1845;

					{	/* Ast/object.scm 167 */
						obj_t BgL_arg1592z00_1846;

						BgL_arg1592z00_1846 =
							(((BgL_slotz00_bglt) COBJECT(
									((BgL_slotz00_bglt) BgL_slotz00_39)))->BgL_classzd2ownerzd2);
						BgL_privz00_1845 =
							BGl_makezd2classzd2setz12z12zzobject_toolsz00(
							((BgL_typez00_bglt) BgL_arg1592z00_1846),
							((BgL_slotz00_bglt) BgL_slotz00_39), BgL_objz00_40,
							((obj_t) BgL_valz00_41));
					}
					return
						BGl_privatezd2nodezd2zzast_privatez00(BgL_privz00_1845,
						BgL_stackz00_42, BgL_locz00_43, BgL_sitez00_44);
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_objectz00()
	{
		{	/* Ast/object.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_objectz00()
	{
		{	/* Ast/object.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_objectz00()
	{
		{	/* Ast/object.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_objectz00()
	{
		{	/* Ast/object.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 275867862),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 196511052),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 428035839),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_pragmaz00(((long) 156774029),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_labelsz00(((long) 129879054),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_letz00(((long) 469204214),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_exitz00(((long) 419066123),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_appz00(((long) 449859289),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_applyz00(((long) 277780822),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			BGl_modulezd2initializa7ationz75zzeffect_feffectz00(((long) 516374373),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
			return
				BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1780z00zzast_objectz00));
		}

	}

#ifdef __cplusplus
}
#endif
