/*===========================================================================*/
/*   (Ast/local.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/local.scm) */
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

	typedef struct BgL_localz00_bgl
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
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;


	static obj_t BGl_objectzd2initzd2zzast_localz00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static BgL_localz00_bglt
		BGl_z62makezd2userzd2localzd2sfunzb0zzast_localz00(obj_t, obj_t, obj_t,
		obj_t);
	static BgL_localz00_bglt BGl_z62makezd2localzd2sfunz62zzast_localz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2userzd2localzd2sfunzd2zzast_localz00(obj_t, BgL_typez00_bglt,
		BgL_sfunz00_bglt);
	static obj_t BGl_methodzd2initzd2zzast_localz00();
	extern obj_t BGl_svarz00zzast_varz00;
	static long BGl_za2localzd2keyza2zd2zzast_localz00;
	static BgL_localz00_bglt
		BGl_z62makezd2userzd2localzd2svarzb0zzast_localz00(obj_t, obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62makezd2localzd2sexitz62zzast_localz00(obj_t,
		obj_t, obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62makezd2localzd2svarz62zzast_localz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_localz00();
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t, BgL_typez00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzast_localz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzast_localz00();
	static obj_t BGl_genericzd2initzd2zzast_localz00();
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt, BgL_valuez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2localzd2sfunz00zzast_localz00(obj_t, BgL_typez00_bglt,
		BgL_sfunz00_bglt);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_localzd2idzd2ze3nameze3zzast_identz00(obj_t);
	static BgL_localz00_bglt BGl_makezd2newzd2localz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, bool_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2localzd2sexitz00zzast_localz00(obj_t, BgL_typez00_bglt,
		BgL_sexitz00_bglt);
	extern obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t);
	static BgL_localz00_bglt BGl_z62clonezd2localzb0zzast_localz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzast_localz00();
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2localzd2svarz00zzast_localz00(obj_t, BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_localz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_localz00();
	static long BGl_getzd2newzd2keyz00zzast_localz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2localzd2sfunzd2envzd2zzast_localz00,
		BgL_bgl_za762makeza7d2localza71158za7,
		BGl_z62makezd2localzd2sfunz62zzast_localz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2localzd2sexitzd2envzd2zzast_localz00,
		BgL_bgl_za762makeza7d2localza71159za7,
		BGl_z62makezd2localzd2sexitz62zzast_localz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2localzd2svarzd2envzd2zzast_localz00,
		BgL_bgl_za762makeza7d2localza71160za7,
		BGl_z62makezd2localzd2svarz62zzast_localz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2userzd2localzd2sfunzd2envz00zzast_localz00,
		BgL_bgl_za762makeza7d2userza7d1161za7,
		BGl_z62makezd2userzd2localzd2sfunzb0zzast_localz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1152z00zzast_localz00,
		BgL_bgl_string1152za700za7za7a1162za7, "_", 1);
	      DEFINE_STRING(BGl_string1153z00zzast_localz00,
		BgL_bgl_string1153za700za7za7a1163za7, "ast_local", 9);
	      DEFINE_STRING(BGl_string1154z00zzast_localz00,
		BgL_bgl_string1154za700za7za7a1164za7, "now read ", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2userzd2localzd2svarzd2envz00zzast_localz00,
		BgL_bgl_za762makeza7d2userza7d1165za7,
		BGl_z62makezd2userzd2localzd2svarzb0zzast_localz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_clonezd2localzd2envz00zzast_localz00,
		BgL_bgl_za762cloneza7d2local1166z00, BGl_z62clonezd2localzb0zzast_localz00,
		0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_localz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long
		BgL_checksumz00_567, char *BgL_fromz00_568)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_localz00))
				{
					BGl_requirezd2initializa7ationz75zzast_localz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_localz00();
					BGl_libraryzd2moduleszd2initz00zzast_localz00();
					BGl_cnstzd2initzd2zzast_localz00();
					BGl_importedzd2moduleszd2initz00zzast_localz00();
					return BGl_toplevelzd2initzd2zzast_localz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_localz00()
	{
		{	/* Ast/local.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_local");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_local");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_local");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_local");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_local");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_localz00()
	{
		{	/* Ast/local.scm 14 */
			{	/* Ast/local.scm 14 */
				obj_t BgL_cportz00_554;

				{	/* Ast/local.scm 14 */
					obj_t BgL_stringz00_562;

					BgL_stringz00_562 = BGl_string1154z00zzast_localz00;
					{	/* Ast/local.scm 14 */
						obj_t BgL_startz00_563;

						BgL_startz00_563 = BINT(((long) 0));
						{	/* Ast/local.scm 14 */
							obj_t BgL_endz00_564;

							BgL_endz00_564 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_562)));
							{	/* Ast/local.scm 14 */

								BgL_cportz00_554 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_562, BgL_startz00_563, BgL_endz00_564);
				}}}}
				{
					long BgL_iz00_555;

					BgL_iz00_555 = ((long) 1);
				BgL_loopz00_556:
					if ((BgL_iz00_555 == ((long) -1)))
						{	/* Ast/local.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/local.scm 14 */
							{	/* Ast/local.scm 14 */
								obj_t BgL_arg1156z00_558;

								{	/* Ast/local.scm 14 */

									{	/* Ast/local.scm 14 */
										obj_t BgL_locationz00_560;

										BgL_locationz00_560 = BBOOL(((bool_t) 0));
										{	/* Ast/local.scm 14 */

											BgL_arg1156z00_558 =
												BGl_readz00zz__readerz00(BgL_cportz00_554,
												BgL_locationz00_560);
										}
									}
								}
								{	/* Ast/local.scm 14 */
									int BgL_tmpz00_591;

									BgL_tmpz00_591 = (int) (BgL_iz00_555);
									CNST_TABLE_SET(BgL_tmpz00_591, BgL_arg1156z00_558);
							}}
							{	/* Ast/local.scm 14 */
								int BgL_auxz00_561;

								BgL_auxz00_561 = (int) ((BgL_iz00_555 - ((long) 1)));
								{
									long BgL_iz00_596;

									BgL_iz00_596 = (long) (BgL_auxz00_561);
									BgL_iz00_555 = BgL_iz00_596;
									goto BgL_loopz00_556;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_localz00()
	{
		{	/* Ast/local.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_localz00()
	{
		{	/* Ast/local.scm 14 */
			return (BGl_za2localzd2keyza2zd2zzast_localz00 = ((long) 0), BUNSPEC);
		}

	}



/* get-new-key */
	long BGl_getzd2newzd2keyz00zzast_localz00()
	{
		{	/* Ast/local.scm 35 */
			BGl_za2localzd2keyza2zd2zzast_localz00 =
				(BGl_za2localzd2keyza2zd2zzast_localz00 + ((long) 1));
			return BGl_za2localzd2keyza2zd2zzast_localz00;
		}

	}



/* make-new-local */
	BgL_localz00_bglt BGl_makezd2newzd2localz00zzast_localz00(obj_t BgL_idz00_3,
		BgL_typez00_bglt BgL_typez00_4, BgL_valuez00_bglt BgL_valuez00_5,
		bool_t BgL_userzf3zf3_6)
	{
		{	/* Ast/local.scm 44 */
			{	/* Ast/local.scm 45 */
				long BgL_keyz00_445;

				BgL_keyz00_445 = BGl_getzd2newzd2keyz00zzast_localz00();
				{	/* Ast/local.scm 46 */
					BgL_localz00_bglt BgL_new1060z00_446;

					{	/* Ast/local.scm 48 */
						BgL_localz00_bglt BgL_new1059z00_451;

						BgL_new1059z00_451 =
							((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						{	/* Ast/local.scm 48 */
							long BgL_arg1109z00_452;

							{	/* Ast/local.scm 48 */
								long BgL_res1148z00_514;

								BgL_res1148z00_514 = BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
								BgL_arg1109z00_452 = BgL_res1148z00_514;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1059z00_451), BgL_arg1109z00_452);
						}
						{	/* Ast/local.scm 48 */
							BgL_objectz00_bglt BgL_tmpz00_605;

							BgL_tmpz00_605 = ((BgL_objectz00_bglt) BgL_new1059z00_451);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_605, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1059z00_451);
						BgL_new1060z00_446 = BgL_new1059z00_451;
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1060z00_446)))->BgL_idz00) =
						((obj_t) BgL_idz00_3), BUNSPEC);
					{
						obj_t BgL_auxz00_611;

						{	/* Ast/local.scm 49 */
							obj_t BgL_arg1101z00_447;
							obj_t BgL_arg1103z00_448;

							BgL_arg1101z00_447 =
								BGl_localzd2idzd2ze3nameze3zzast_identz00(BgL_idz00_3);
							{	/* Ast/local.scm 49 */

								BgL_arg1103z00_448 =
									BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
									(BgL_keyz00_445, ((long) 10));
							}
							BgL_auxz00_611 =
								string_append_3(BgL_arg1101z00_447,
								BGl_string1152z00zzast_localz00, BgL_arg1103z00_448);
						}
						((((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_new1060z00_446)))->
								BgL_namez00) = ((obj_t) BgL_auxz00_611), BUNSPEC);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1060z00_446)))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_typez00_4), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1060z00_446)))->BgL_valuez00) =
						((BgL_valuez00_bglt) BgL_valuez00_5), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1060z00_446)))->BgL_accessz00) =
						((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1060z00_446)))->BgL_fastzd2alphazd2) =
						((obj_t) BUNSPEC), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1060z00_446)))->BgL_removablez00) =
						((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1060z00_446)))->BgL_occurrencez00) =
						((long) ((long) 0)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1060z00_446)))->BgL_occurrencewz00) =
						((long) ((long) 0)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1060z00_446)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf3zf3_6), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(BgL_new1060z00_446))->BgL_keyz00) =
						((long) BgL_keyz00_445), BUNSPEC);
					return BgL_new1060z00_446;
				}
			}
		}

	}



/* clone-local */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt BgL_localz00_7,
		BgL_valuez00_bglt BgL_valuez00_8)
	{
		{	/* Ast/local.scm 57 */
			{	/* Ast/local.scm 58 */
				long BgL_keyz00_453;

				BgL_keyz00_453 = BGl_getzd2newzd2keyz00zzast_localz00();
				{	/* Ast/local.scm 60 */
					BgL_localz00_bglt BgL_new1062z00_456;

					{	/* Ast/local.scm 60 */
						BgL_localz00_bglt BgL_new1065z00_462;

						BgL_new1065z00_462 =
							((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						{	/* Ast/local.scm 60 */
							long BgL_arg1115z00_463;

							{	/* Ast/local.scm 60 */
								long BgL_res1149z00_519;

								BgL_res1149z00_519 = BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
								BgL_arg1115z00_463 = BgL_res1149z00_519;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1065z00_462), BgL_arg1115z00_463);
						}
						{	/* Ast/local.scm 60 */
							BgL_objectz00_bglt BgL_tmpz00_641;

							BgL_tmpz00_641 = ((BgL_objectz00_bglt) BgL_new1065z00_462);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_641, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1065z00_462);
						BgL_new1062z00_456 = BgL_new1065z00_462;
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1062z00_456)))->BgL_idz00) =
						((obj_t) (((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
											BgL_localz00_7)))->BgL_idz00)), BUNSPEC);
					{
						obj_t BgL_auxz00_649;

						{	/* Ast/local.scm 62 */
							obj_t BgL_arg1110z00_457;
							obj_t BgL_arg1113z00_458;

							{	/* Ast/local.scm 62 */
								obj_t BgL_arg1114z00_459;

								BgL_arg1114z00_459 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_localz00_7)))->BgL_idz00);
								BgL_arg1110z00_457 =
									BGl_idzd2ze3namez31zzast_identz00(BgL_arg1114z00_459);
							}
							{	/* Ast/local.scm 62 */

								BgL_arg1113z00_458 =
									BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
									(BgL_keyz00_453, ((long) 10));
							}
							BgL_auxz00_649 =
								string_append_3(BgL_arg1110z00_457,
								BGl_string1152z00zzast_localz00, BgL_arg1113z00_458);
						}
						((((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_new1062z00_456)))->
								BgL_namez00) = ((obj_t) BgL_auxz00_649), BUNSPEC);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1062z00_456)))->BgL_typez00) =
						((BgL_typez00_bglt) (((BgL_variablez00_bglt)
									COBJECT(((BgL_variablez00_bglt) BgL_localz00_7)))->
								BgL_typez00)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1062z00_456)))->BgL_valuez00) =
						((BgL_valuez00_bglt) BgL_valuez00_8), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1062z00_456)))->BgL_accessz00) =
						((obj_t) (((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
											BgL_localz00_7)))->BgL_accessz00)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1062z00_456)))->BgL_fastzd2alphazd2) =
						((obj_t) (((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
											BgL_localz00_7)))->BgL_fastzd2alphazd2)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1062z00_456)))->BgL_removablez00) =
						((obj_t) (((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
											BgL_localz00_7)))->BgL_removablez00)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1062z00_456)))->BgL_occurrencez00) =
						((long) (((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
											BgL_localz00_7)))->BgL_occurrencez00)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1062z00_456)))->BgL_occurrencewz00) =
						((long) (((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
											BgL_localz00_7)))->BgL_occurrencewz00)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1062z00_456)))->BgL_userzf3zf3) =
						((bool_t) (((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
											BgL_localz00_7)))->BgL_userzf3zf3)), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(BgL_new1062z00_456))->BgL_keyz00) =
						((long) BgL_keyz00_453), BUNSPEC);
					return BgL_new1062z00_456;
				}
			}
		}

	}



/* &clone-local */
	BgL_localz00_bglt BGl_z62clonezd2localzb0zzast_localz00(obj_t BgL_envz00_533,
		obj_t BgL_localz00_534, obj_t BgL_valuez00_535)
	{
		{	/* Ast/local.scm 57 */
			return
				BGl_clonezd2localzd2zzast_localz00(
				((BgL_localz00_bglt) BgL_localz00_534),
				((BgL_valuez00_bglt) BgL_valuez00_535));
		}

	}



/* make-local-svar */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2localzd2svarz00zzast_localz00(obj_t BgL_idz00_9,
		BgL_typez00_bglt BgL_typez00_10)
	{
		{	/* Ast/local.scm 68 */
			{	/* Ast/local.scm 69 */
				BgL_svarz00_bglt BgL_arg1116z00_464;

				{	/* Ast/local.scm 69 */
					BgL_svarz00_bglt BgL_new1067z00_465;

					{	/* Ast/local.scm 69 */
						BgL_svarz00_bglt BgL_new1066z00_466;

						BgL_new1066z00_466 =
							((BgL_svarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_svarz00_bgl))));
						{	/* Ast/local.scm 69 */
							long BgL_arg1117z00_467;

							{	/* Ast/local.scm 69 */
								long BgL_res1150z00_524;

								BgL_res1150z00_524 = BGL_CLASS_INDEX(BGl_svarz00zzast_varz00);
								BgL_arg1117z00_467 = BgL_res1150z00_524;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1066z00_466), BgL_arg1117z00_467);
						}
						{	/* Ast/local.scm 69 */
							BgL_objectz00_bglt BgL_tmpz00_695;

							BgL_tmpz00_695 = ((BgL_objectz00_bglt) BgL_new1066z00_466);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_695, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1066z00_466);
						BgL_new1067z00_465 = BgL_new1066z00_466;
					}
					((((BgL_svarz00_bglt) COBJECT(BgL_new1067z00_465))->BgL_locz00) =
						((obj_t) BUNSPEC), BUNSPEC);
					BgL_arg1116z00_464 = BgL_new1067z00_465;
				}
				return
					BGl_makezd2newzd2localz00zzast_localz00(BgL_idz00_9, BgL_typez00_10,
					((BgL_valuez00_bglt) BgL_arg1116z00_464), ((bool_t) 0));
			}
		}

	}



/* &make-local-svar */
	BgL_localz00_bglt BGl_z62makezd2localzd2svarz62zzast_localz00(obj_t
		BgL_envz00_536, obj_t BgL_idz00_537, obj_t BgL_typez00_538)
	{
		{	/* Ast/local.scm 68 */
			return
				BGl_makezd2localzd2svarz00zzast_localz00(BgL_idz00_537,
				((BgL_typez00_bglt) BgL_typez00_538));
		}

	}



/* make-user-local-svar */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t BgL_idz00_11,
		BgL_typez00_bglt BgL_typez00_12)
	{
		{	/* Ast/local.scm 74 */
			{	/* Ast/local.scm 75 */
				BgL_svarz00_bglt BgL_arg1118z00_468;

				{	/* Ast/local.scm 75 */
					BgL_svarz00_bglt BgL_new1069z00_469;

					{	/* Ast/local.scm 75 */
						BgL_svarz00_bglt BgL_new1068z00_470;

						BgL_new1068z00_470 =
							((BgL_svarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_svarz00_bgl))));
						{	/* Ast/local.scm 75 */
							long BgL_arg1121z00_471;

							{	/* Ast/local.scm 75 */
								long BgL_res1151z00_529;

								BgL_res1151z00_529 = BGL_CLASS_INDEX(BGl_svarz00zzast_varz00);
								BgL_arg1121z00_471 = BgL_res1151z00_529;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1068z00_470), BgL_arg1121z00_471);
						}
						{	/* Ast/local.scm 75 */
							BgL_objectz00_bglt BgL_tmpz00_708;

							BgL_tmpz00_708 = ((BgL_objectz00_bglt) BgL_new1068z00_470);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_708, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1068z00_470);
						BgL_new1069z00_469 = BgL_new1068z00_470;
					}
					((((BgL_svarz00_bglt) COBJECT(BgL_new1069z00_469))->BgL_locz00) =
						((obj_t) BUNSPEC), BUNSPEC);
					BgL_arg1118z00_468 = BgL_new1069z00_469;
				}
				return
					BGl_makezd2newzd2localz00zzast_localz00(BgL_idz00_11, BgL_typez00_12,
					((BgL_valuez00_bglt) BgL_arg1118z00_468), ((bool_t) 1));
			}
		}

	}



/* &make-user-local-svar */
	BgL_localz00_bglt BGl_z62makezd2userzd2localzd2svarzb0zzast_localz00(obj_t
		BgL_envz00_539, obj_t BgL_idz00_540, obj_t BgL_typez00_541)
	{
		{	/* Ast/local.scm 74 */
			return
				BGl_makezd2userzd2localzd2svarzd2zzast_localz00(BgL_idz00_540,
				((BgL_typez00_bglt) BgL_typez00_541));
		}

	}



/* make-local-sexit */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2localzd2sexitz00zzast_localz00(obj_t BgL_idz00_13,
		BgL_typez00_bglt BgL_typez00_14, BgL_sexitz00_bglt BgL_sexitz00_15)
	{
		{	/* Ast/local.scm 80 */
			return
				BGl_makezd2newzd2localz00zzast_localz00(BgL_idz00_13, BgL_typez00_14,
				((BgL_valuez00_bglt) BgL_sexitz00_15), ((bool_t) 0));
		}

	}



/* &make-local-sexit */
	BgL_localz00_bglt BGl_z62makezd2localzd2sexitz62zzast_localz00(obj_t
		BgL_envz00_542, obj_t BgL_idz00_543, obj_t BgL_typez00_544,
		obj_t BgL_sexitz00_545)
	{
		{	/* Ast/local.scm 80 */
			return
				BGl_makezd2localzd2sexitz00zzast_localz00(BgL_idz00_543,
				((BgL_typez00_bglt) BgL_typez00_544),
				((BgL_sexitz00_bglt) BgL_sexitz00_545));
		}

	}



/* make-local-sfun */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2localzd2sfunz00zzast_localz00(obj_t BgL_idz00_16,
		BgL_typez00_bglt BgL_typez00_17, BgL_sfunz00_bglt BgL_sfunz00_18)
	{
		{	/* Ast/local.scm 88 */
			return
				BGl_makezd2newzd2localz00zzast_localz00(BgL_idz00_16, BgL_typez00_17,
				((BgL_valuez00_bglt) BgL_sfunz00_18), ((bool_t) 0));
		}

	}



/* &make-local-sfun */
	BgL_localz00_bglt BGl_z62makezd2localzd2sfunz62zzast_localz00(obj_t
		BgL_envz00_546, obj_t BgL_idz00_547, obj_t BgL_typez00_548,
		obj_t BgL_sfunz00_549)
	{
		{	/* Ast/local.scm 88 */
			return
				BGl_makezd2localzd2sfunz00zzast_localz00(BgL_idz00_547,
				((BgL_typez00_bglt) BgL_typez00_548),
				((BgL_sfunz00_bglt) BgL_sfunz00_549));
		}

	}



/* make-user-local-sfun */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2userzd2localzd2sfunzd2zzast_localz00(obj_t BgL_idz00_19,
		BgL_typez00_bglt BgL_typez00_20, BgL_sfunz00_bglt BgL_sfunz00_21)
	{
		{	/* Ast/local.scm 96 */
			return
				BGl_makezd2newzd2localz00zzast_localz00(BgL_idz00_19, BgL_typez00_20,
				((BgL_valuez00_bglt) BgL_sfunz00_21), ((bool_t) 1));
		}

	}



/* &make-user-local-sfun */
	BgL_localz00_bglt BGl_z62makezd2userzd2localzd2sfunzb0zzast_localz00(obj_t
		BgL_envz00_550, obj_t BgL_idz00_551, obj_t BgL_typez00_552,
		obj_t BgL_sfunz00_553)
	{
		{	/* Ast/local.scm 96 */
			return
				BGl_makezd2userzd2localzd2sfunzd2zzast_localz00(BgL_idz00_551,
				((BgL_typez00_bglt) BgL_typez00_552),
				((BgL_sfunz00_bglt) BgL_sfunz00_553));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_localz00()
	{
		{	/* Ast/local.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_localz00()
	{
		{	/* Ast/local.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_localz00()
	{
		{	/* Ast/local.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_localz00()
	{
		{	/* Ast/local.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1153z00zzast_localz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1153z00zzast_localz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1153z00zzast_localz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1153z00zzast_localz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1153z00zzast_localz00));
		}

	}

#ifdef __cplusplus
}
#endif
