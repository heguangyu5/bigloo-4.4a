/*===========================================================================*/
/*   (Coerce/app.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/app.scm) */
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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

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


	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_objectzd2initzd2zzcoerce_appz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcoerce_appz00();
	static BgL_nodez00_bglt
		BGl_coercezd2bigloozd2externzd2appz12zc0zzcoerce_appz00
		(BgL_variablez00_bglt, obj_t, BgL_appz00_bglt, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_coercezd2bigloozd2appz12z12zzcoerce_appz00(BgL_variablez00_bglt, obj_t,
		BgL_appz00_bglt, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	static BgL_nodez00_bglt
		BGl_coercezd2foreignzd2appz12z12zzcoerce_appz00(BgL_variablez00_bglt, obj_t,
		BgL_appz00_bglt, obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	BGL_IMPORT long bgl_list_length(obj_t);
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzcoerce_appz00();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_coercezd2bigloozd2internzd2appz12zc0zzcoerce_appz00
		(BgL_variablez00_bglt, obj_t, BgL_appz00_bglt, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	static obj_t BGl_makezd2procedurezd2idsz00zzcoerce_appz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_appz00 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcoerce_appz00();
	static BgL_nodez00_bglt
		BGl_coercezd2foreignzd2vazd2appz12zc0zzcoerce_appz00(BgL_valuez00_bglt,
		BgL_variablez00_bglt, obj_t, BgL_appz00_bglt, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcoerce_appz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt,
		bool_t);
	static bool_t BGl_coercezd2argsz12ze70z27zzcoerce_appz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcoerce_appz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzcoerce_appz00();
	static BgL_nodez00_bglt BGl_z62coercez12zd2app1227za2zzcoerce_appz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_appz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_appz00();
	static BgL_nodez00_bglt
		BGl_coercezd2foreignzd2fxzd2appz12zc0zzcoerce_appz00(BgL_valuez00_bglt,
		BgL_variablez00_bglt, obj_t, BgL_appz00_bglt, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string1619z00zzcoerce_appz00,
		BgL_bgl_string1619za700za7za7c1629za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1620z00zzcoerce_appz00,
		BgL_bgl_string1620za700za7za7c1630za7, "app", 3);
	      DEFINE_STRING(BGl_string1621z00zzcoerce_appz00,
		BgL_bgl_string1621za700za7za7c1631za7, "formals/actuals mismatch", 24);
	      DEFINE_STRING(BGl_string1623z00zzcoerce_appz00,
		BgL_bgl_string1623za700za7za7c1632za7, "coerce!", 7);
	      DEFINE_STRING(BGl_string1624z00zzcoerce_appz00,
		BgL_bgl_string1624za700za7za7c1633za7, "coerce_app", 10);
	      DEFINE_STRING(BGl_string1625z00zzcoerce_appz00,
		BgL_bgl_string1625za700za7za7c1634za7,
		"import (make-fx-procedure make-va-procedure make-l-procedure) ", 62);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1622z00zzcoerce_appz00,
		BgL_bgl_za762coerceza712za7d2a1635za7,
		BGl_z62coercez12zd2app1227za2zzcoerce_appz00, 0L, BUNSPEC, 4);
	extern obj_t BGl_coercez12zd2envzc0zzcoerce_coercez00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_makezd2procedurezd2idsz00zzcoerce_appz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcoerce_appz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcoerce_appz00(long
		BgL_checksumz00_1787, char *BgL_fromz00_1788)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_appz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_appz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcoerce_appz00();
					BGl_libraryzd2moduleszd2initz00zzcoerce_appz00();
					BGl_cnstzd2initzd2zzcoerce_appz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_appz00();
					BGl_methodzd2initzd2zzcoerce_appz00();
					return BGl_toplevelzd2initzd2zzcoerce_appz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_appz00()
	{
		{	/* Coerce/app.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"coerce_app");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "coerce_app");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "coerce_app");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"coerce_app");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "coerce_app");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"coerce_app");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"coerce_app");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_appz00()
	{
		{	/* Coerce/app.scm 15 */
			{	/* Coerce/app.scm 15 */
				obj_t BgL_cportz00_1769;

				{	/* Coerce/app.scm 15 */
					obj_t BgL_stringz00_1777;

					BgL_stringz00_1777 = BGl_string1625z00zzcoerce_appz00;
					{	/* Coerce/app.scm 15 */
						obj_t BgL_startz00_1778;

						BgL_startz00_1778 = BINT(((long) 0));
						{	/* Coerce/app.scm 15 */
							obj_t BgL_endz00_1779;

							BgL_endz00_1779 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1777)));
							{	/* Coerce/app.scm 15 */

								BgL_cportz00_1769 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1777, BgL_startz00_1778, BgL_endz00_1779);
				}}}}
				{
					long BgL_iz00_1770;

					BgL_iz00_1770 = ((long) 1);
				BgL_loopz00_1771:
					if ((BgL_iz00_1770 == ((long) -1)))
						{	/* Coerce/app.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/app.scm 15 */
							{	/* Coerce/app.scm 15 */
								obj_t BgL_arg1627z00_1773;

								{	/* Coerce/app.scm 15 */

									{	/* Coerce/app.scm 15 */
										obj_t BgL_locationz00_1775;

										BgL_locationz00_1775 = BBOOL(((bool_t) 0));
										{	/* Coerce/app.scm 15 */

											BgL_arg1627z00_1773 =
												BGl_readz00zz__readerz00(BgL_cportz00_1769,
												BgL_locationz00_1775);
										}
									}
								}
								{	/* Coerce/app.scm 15 */
									int BgL_tmpz00_1814;

									BgL_tmpz00_1814 = (int) (BgL_iz00_1770);
									CNST_TABLE_SET(BgL_tmpz00_1814, BgL_arg1627z00_1773);
							}}
							{	/* Coerce/app.scm 15 */
								int BgL_auxz00_1776;

								BgL_auxz00_1776 = (int) ((BgL_iz00_1770 - ((long) 1)));
								{
									long BgL_iz00_1819;

									BgL_iz00_1819 = (long) (BgL_auxz00_1776);
									BgL_iz00_1770 = BgL_iz00_1819;
									goto BgL_loopz00_1771;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcoerce_appz00()
	{
		{	/* Coerce/app.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_appz00()
	{
		{	/* Coerce/app.scm 15 */
			return (BGl_makezd2procedurezd2idsz00zzcoerce_appz00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}

	}



/* coerce-foreign-app! */
	BgL_nodez00_bglt
		BGl_coercezd2foreignzd2appz12z12zzcoerce_appz00(BgL_variablez00_bglt
		BgL_calleez00_7, obj_t BgL_callerz00_8, BgL_appz00_bglt BgL_nodez00_9,
		obj_t BgL_toz00_10, obj_t BgL_safez00_11)
	{
		{	/* Coerce/app.scm 42 */
			{	/* Coerce/app.scm 45 */
				BgL_valuez00_bglt BgL_ffunz00_1360;

				BgL_ffunz00_1360 =
					(((BgL_variablez00_bglt) COBJECT(BgL_calleez00_7))->BgL_valuez00);
				{	/* Coerce/app.scm 45 */
					long BgL_arityz00_1361;

					BgL_arityz00_1361 =
						(((BgL_funz00_bglt) COBJECT(
								((BgL_funz00_bglt) BgL_ffunz00_1360)))->BgL_arityz00);
					{	/* Coerce/app.scm 46 */

						if ((BgL_arityz00_1361 >= ((long) 0)))
							{	/* Coerce/app.scm 47 */
								return
									BGl_coercezd2foreignzd2fxzd2appz12zc0zzcoerce_appz00
									(BgL_ffunz00_1360, BgL_calleez00_7, BgL_callerz00_8,
									BgL_nodez00_9, BgL_toz00_10, BgL_safez00_11);
							}
						else
							{	/* Coerce/app.scm 47 */
								return
									BGl_coercezd2foreignzd2vazd2appz12zc0zzcoerce_appz00
									(BgL_ffunz00_1360, BgL_calleez00_7, BgL_callerz00_8,
									BgL_nodez00_9, BgL_toz00_10, BgL_safez00_11);
							}
					}
				}
			}
		}

	}



/* coerce-foreign-fx-app! */
	BgL_nodez00_bglt
		BGl_coercezd2foreignzd2fxzd2appz12zc0zzcoerce_appz00(BgL_valuez00_bglt
		BgL_funz00_12, BgL_variablez00_bglt BgL_calleez00_13,
		obj_t BgL_callerz00_14, BgL_appz00_bglt BgL_nodez00_15, obj_t BgL_toz00_16,
		obj_t BgL_safez00_17)
	{
		{	/* Coerce/app.scm 60 */
			{
				obj_t BgL_argsz00_1389;
				obj_t BgL_typesz00_1390;
				obj_t BgL_locz00_1391;

				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_calleez00_13))))->BgL_idz00),
							CNST_TABLE_REF(((long) 0)))))
					{	/* Coerce/app.scm 82 */
						obj_t BgL_arg1243z00_1368;
						obj_t BgL_arg1245z00_1369;
						obj_t BgL_arg1246z00_1370;

						BgL_arg1243z00_1368 =
							(((BgL_appz00_bglt) COBJECT(BgL_nodez00_15))->BgL_argsz00);
						BgL_arg1245z00_1369 =
							(((BgL_cfunz00_bglt) COBJECT(
									((BgL_cfunz00_bglt) BgL_funz00_12)))->BgL_argszd2typezd2);
						BgL_arg1246z00_1370 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_nodez00_15)))->BgL_locz00);
						BgL_argsz00_1389 = BgL_arg1243z00_1368;
						BgL_typesz00_1390 = BgL_arg1245z00_1369;
						BgL_locz00_1391 = BgL_arg1246z00_1370;
						{	/* Coerce/app.scm 68 */
							obj_t BgL_arg1273z00_1393;
							obj_t BgL_arg1274z00_1394;

							BgL_arg1273z00_1393 = CDR(((obj_t) BgL_argsz00_1389));
							BgL_arg1274z00_1394 = CDR(((obj_t) BgL_typesz00_1390));
							BGl_coercezd2argsz12ze70z27zzcoerce_appz00(BgL_safez00_17,
								BgL_callerz00_14, BgL_arg1273z00_1393, BgL_arg1274z00_1394);
						}
						{	/* Coerce/app.scm 69 */
							obj_t BgL_cloz00_1395;

							BgL_cloz00_1395 = CAR(((obj_t) BgL_argsz00_1389));
							if (BGl_isazf3zf3zz__objectz00(BgL_cloz00_1395,
									BGl_varz00zzast_nodez00))
								{	/* Coerce/app.scm 71 */
									bool_t BgL_test1642z00_1851;

									{	/* Coerce/app.scm 71 */
										BgL_valuez00_bglt BgL_arg1287z00_1406;

										BgL_arg1287z00_1406 =
											(((BgL_variablez00_bglt) COBJECT(
													(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_cloz00_1395)))->
														BgL_variablez00)))->BgL_valuez00);
										{	/* Coerce/app.scm 71 */
											bool_t BgL_res1603z00_1692;

											BgL_res1603z00_1692 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1287z00_1406), BGl_sfunz00zzast_varz00);
											BgL_test1642z00_1851 = BgL_res1603z00_1692;
										}
									}
									if (BgL_test1642z00_1851)
										{	/* Coerce/app.scm 71 */
											BFALSE;
										}
									else
										{	/* Coerce/app.scm 73 */
											obj_t BgL_arg1280z00_1400;
											obj_t BgL_arg1281z00_1401;

											BgL_arg1280z00_1400 =
												(((BgL_variablez00_bglt) COBJECT(
														(((BgL_varz00_bglt) COBJECT(
																	((BgL_varz00_bglt) BgL_cloz00_1395)))->
															BgL_variablez00)))->BgL_namez00);
											{	/* Coerce/app.scm 74 */
												BgL_typez00_bglt BgL_arg1285z00_1404;

												BgL_arg1285z00_1404 =
													(((BgL_variablez00_bglt) COBJECT(
															(((BgL_varz00_bglt) COBJECT(
																		((BgL_varz00_bglt) BgL_cloz00_1395)))->
																BgL_variablez00)))->BgL_typez00);
												BgL_arg1281z00_1401 =
													BGl_shapez00zztools_shapez00(((obj_t)
														BgL_arg1285z00_1404));
											}
											BGl_userzd2errorzf2locationz20zztools_errorz00
												(BgL_locz00_1391, BgL_arg1280z00_1400,
												BgL_arg1281z00_1401, BGl_string1619z00zzcoerce_appz00,
												BNIL);
										}
								}
							else
								{	/* Coerce/app.scm 76 */
									BgL_nodez00_bglt BgL_arg1289z00_1408;

									BgL_arg1289z00_1408 =
										BGl_coercez12z12zzcoerce_coercez00(
										((BgL_nodez00_bglt) BgL_cloz00_1395), BgL_callerz00_14,
										((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00),
										CBOOL(BgL_safez00_17));
									{	/* Coerce/app.scm 76 */
										obj_t BgL_auxz00_1872;
										obj_t BgL_tmpz00_1870;

										BgL_auxz00_1872 = ((obj_t) BgL_arg1289z00_1408);
										BgL_tmpz00_1870 = ((obj_t) BgL_argsz00_1389);
										SET_CAR(BgL_tmpz00_1870, BgL_auxz00_1872);
									}
								}
						}
					}
				else
					{	/* Coerce/app.scm 83 */
						obj_t BgL_arg1247z00_1371;
						obj_t BgL_arg1250z00_1372;

						BgL_arg1247z00_1371 =
							(((BgL_appz00_bglt) COBJECT(BgL_nodez00_15))->BgL_argsz00);
						BgL_arg1250z00_1372 =
							(((BgL_cfunz00_bglt) COBJECT(
									((BgL_cfunz00_bglt) BgL_funz00_12)))->BgL_argszd2typezd2);
						BBOOL(BGl_coercezd2argsz12ze70z27zzcoerce_appz00(BgL_safez00_17,
								BgL_callerz00_14, BgL_arg1247z00_1371, BgL_arg1250z00_1372));
					}
				{	/* Coerce/app.scm 84 */
					BgL_typez00_bglt BgL_arg1253z00_1374;

					BgL_arg1253z00_1374 =
						BGl_getzd2typezd2zztype_typeofz00(
						((BgL_nodez00_bglt) BgL_nodez00_15), ((bool_t) 0));
					return
						BGl_convertz12z12zzcoerce_convertz00(
						((BgL_nodez00_bglt) BgL_nodez00_15), BgL_arg1253z00_1374,
						((BgL_typez00_bglt) BgL_toz00_16), CBOOL(BgL_safez00_17));
				}
			}
		}

	}



/* coerce-args!~0 */
	bool_t BGl_coercezd2argsz12ze70z27zzcoerce_appz00(obj_t BgL_safez00_1768,
		obj_t BgL_callerz00_1767, obj_t BgL_argsz00_1375, obj_t BgL_typesz00_1376)
	{
		{	/* Coerce/app.scm 66 */
			{
				obj_t BgL_actualsz00_1379;
				obj_t BgL_typesz00_1380;

				BgL_actualsz00_1379 = BgL_argsz00_1375;
				BgL_typesz00_1380 = BgL_typesz00_1376;
			BgL_zc3z04anonymousza31255ze3z87_1381:
				if (PAIRP(BgL_actualsz00_1379))
					{	/* Coerce/app.scm 64 */
						{	/* Coerce/app.scm 65 */
							BgL_nodez00_bglt BgL_arg1258z00_1383;

							{	/* Coerce/app.scm 65 */
								obj_t BgL_arg1263z00_1384;
								obj_t BgL_arg1268z00_1385;

								BgL_arg1263z00_1384 = CAR(BgL_actualsz00_1379);
								BgL_arg1268z00_1385 = CAR(((obj_t) BgL_typesz00_1380));
								BgL_arg1258z00_1383 =
									BGl_coercez12z12zzcoerce_coercez00(
									((BgL_nodez00_bglt) BgL_arg1263z00_1384), BgL_callerz00_1767,
									((BgL_typez00_bglt) BgL_arg1268z00_1385),
									CBOOL(BgL_safez00_1768));
							}
							{	/* Coerce/app.scm 65 */
								obj_t BgL_tmpz00_1895;

								BgL_tmpz00_1895 = ((obj_t) BgL_arg1258z00_1383);
								SET_CAR(BgL_actualsz00_1379, BgL_tmpz00_1895);
							}
						}
						{	/* Coerce/app.scm 66 */
							obj_t BgL_arg1270z00_1386;
							obj_t BgL_arg1271z00_1387;

							BgL_arg1270z00_1386 = CDR(BgL_actualsz00_1379);
							BgL_arg1271z00_1387 = CDR(((obj_t) BgL_typesz00_1380));
							{
								obj_t BgL_typesz00_1902;
								obj_t BgL_actualsz00_1901;

								BgL_actualsz00_1901 = BgL_arg1270z00_1386;
								BgL_typesz00_1902 = BgL_arg1271z00_1387;
								BgL_typesz00_1380 = BgL_typesz00_1902;
								BgL_actualsz00_1379 = BgL_actualsz00_1901;
								goto BgL_zc3z04anonymousza31255ze3z87_1381;
							}
						}
					}
				else
					{	/* Coerce/app.scm 64 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* coerce-foreign-va-app! */
	BgL_nodez00_bglt
		BGl_coercezd2foreignzd2vazd2appz12zc0zzcoerce_appz00(BgL_valuez00_bglt
		BgL_funz00_18, BgL_variablez00_bglt BgL_calleez00_19,
		obj_t BgL_callerz00_20, BgL_appz00_bglt BgL_nodez00_21, obj_t BgL_toz00_22,
		obj_t BgL_safez00_23)
	{
		{	/* Coerce/app.scm 89 */
			{	/* Coerce/app.scm 90 */
				obj_t BgL_g1105z00_1411;
				obj_t BgL_g1106z00_1412;
				long BgL_g1107z00_1413;

				BgL_g1105z00_1411 =
					(((BgL_appz00_bglt) COBJECT(BgL_nodez00_21))->BgL_argsz00);
				BgL_g1106z00_1412 =
					(((BgL_cfunz00_bglt) COBJECT(
							((BgL_cfunz00_bglt) BgL_funz00_18)))->BgL_argszd2typezd2);
				BgL_g1107z00_1413 =
					(((BgL_funz00_bglt) COBJECT(
							((BgL_funz00_bglt) BgL_funz00_18)))->BgL_arityz00);
				{
					obj_t BgL_actualsz00_1415;
					obj_t BgL_typesz00_1416;
					long BgL_counterz00_1417;

					BgL_actualsz00_1415 = BgL_g1105z00_1411;
					BgL_typesz00_1416 = BgL_g1106z00_1412;
					BgL_counterz00_1417 = BgL_g1107z00_1413;
				BgL_zc3z04anonymousza31290ze3z87_1418:
					if ((BgL_counterz00_1417 == ((long) -1)))
						{
							obj_t BgL_actualsz00_1421;

							BgL_actualsz00_1421 = BgL_actualsz00_1415;
						BgL_zc3z04anonymousza31292ze3z87_1422:
							if (NULLP(BgL_actualsz00_1421))
								{	/* Coerce/app.scm 97 */
									BgL_typez00_bglt BgL_arg1295z00_1424;

									BgL_arg1295z00_1424 =
										BGl_getzd2typezd2zztype_typeofz00(
										((BgL_nodez00_bglt) BgL_nodez00_21), ((bool_t) 0));
									return
										BGl_convertz12z12zzcoerce_convertz00(
										((BgL_nodez00_bglt) BgL_nodez00_21), BgL_arg1295z00_1424,
										((BgL_typez00_bglt) BgL_toz00_22), CBOOL(BgL_safez00_23));
								}
							else
								{	/* Coerce/app.scm 96 */
									{	/* Coerce/app.scm 99 */
										BgL_nodez00_bglt BgL_arg1296z00_1425;

										{	/* Coerce/app.scm 99 */
											obj_t BgL_arg1297z00_1426;
											obj_t BgL_arg1298z00_1427;

											BgL_arg1297z00_1426 = CAR(((obj_t) BgL_actualsz00_1421));
											BgL_arg1298z00_1427 = CAR(((obj_t) BgL_typesz00_1416));
											BgL_arg1296z00_1425 =
												BGl_coercez12z12zzcoerce_coercez00(
												((BgL_nodez00_bglt) BgL_arg1297z00_1426),
												BgL_callerz00_20,
												((BgL_typez00_bglt) BgL_arg1298z00_1427),
												CBOOL(BgL_safez00_23));
										}
										{	/* Coerce/app.scm 99 */
											obj_t BgL_auxz00_1928;
											obj_t BgL_tmpz00_1926;

											BgL_auxz00_1928 = ((obj_t) BgL_arg1296z00_1425);
											BgL_tmpz00_1926 = ((obj_t) BgL_actualsz00_1421);
											SET_CAR(BgL_tmpz00_1926, BgL_auxz00_1928);
										}
									}
									{	/* Coerce/app.scm 103 */
										obj_t BgL_arg1299z00_1428;

										BgL_arg1299z00_1428 = CDR(((obj_t) BgL_actualsz00_1421));
										{
											obj_t BgL_actualsz00_1933;

											BgL_actualsz00_1933 = BgL_arg1299z00_1428;
											BgL_actualsz00_1421 = BgL_actualsz00_1933;
											goto BgL_zc3z04anonymousza31292ze3z87_1422;
										}
									}
								}
						}
					else
						{	/* Coerce/app.scm 93 */
							{	/* Coerce/app.scm 105 */
								BgL_nodez00_bglt BgL_arg1300z00_1430;

								{	/* Coerce/app.scm 105 */
									obj_t BgL_arg1301z00_1431;
									obj_t BgL_arg1303z00_1432;

									BgL_arg1301z00_1431 = CAR(((obj_t) BgL_actualsz00_1415));
									BgL_arg1303z00_1432 = CAR(((obj_t) BgL_typesz00_1416));
									BgL_arg1300z00_1430 =
										BGl_coercez12z12zzcoerce_coercez00(
										((BgL_nodez00_bglt) BgL_arg1301z00_1431), BgL_callerz00_20,
										((BgL_typez00_bglt) BgL_arg1303z00_1432),
										CBOOL(BgL_safez00_23));
								}
								{	/* Coerce/app.scm 105 */
									obj_t BgL_auxz00_1944;
									obj_t BgL_tmpz00_1942;

									BgL_auxz00_1944 = ((obj_t) BgL_arg1300z00_1430);
									BgL_tmpz00_1942 = ((obj_t) BgL_actualsz00_1415);
									SET_CAR(BgL_tmpz00_1942, BgL_auxz00_1944);
								}
							}
							{	/* Coerce/app.scm 109 */
								obj_t BgL_arg1304z00_1433;
								obj_t BgL_arg1306z00_1434;
								long BgL_arg1307z00_1435;

								BgL_arg1304z00_1433 = CDR(((obj_t) BgL_actualsz00_1415));
								BgL_arg1306z00_1434 = CDR(((obj_t) BgL_typesz00_1416));
								BgL_arg1307z00_1435 = (BgL_counterz00_1417 + ((long) 1));
								{
									long BgL_counterz00_1954;
									obj_t BgL_typesz00_1953;
									obj_t BgL_actualsz00_1952;

									BgL_actualsz00_1952 = BgL_arg1304z00_1433;
									BgL_typesz00_1953 = BgL_arg1306z00_1434;
									BgL_counterz00_1954 = BgL_arg1307z00_1435;
									BgL_counterz00_1417 = BgL_counterz00_1954;
									BgL_typesz00_1416 = BgL_typesz00_1953;
									BgL_actualsz00_1415 = BgL_actualsz00_1952;
									goto BgL_zc3z04anonymousza31290ze3z87_1418;
								}
							}
						}
				}
			}
		}

	}



/* coerce-bigloo-app! */
	BgL_nodez00_bglt
		BGl_coercezd2bigloozd2appz12z12zzcoerce_appz00(BgL_variablez00_bglt
		BgL_calleez00_24, obj_t BgL_callerz00_25, BgL_appz00_bglt BgL_nodez00_26,
		obj_t BgL_toz00_27, obj_t BgL_safez00_28)
	{
		{	/* Coerce/app.scm 114 */
			{	/* Coerce/app.scm 118 */
				bool_t BgL_test1646z00_1955;

				{	/* Coerce/app.scm 118 */
					bool_t BgL_test1647z00_1956;

					{	/* Coerce/app.scm 118 */
						bool_t BgL_res1607z00_1718;

						BgL_res1607z00_1718 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_calleez00_24), BGl_globalz00zzast_varz00);
						BgL_test1647z00_1956 = BgL_res1607z00_1718;
					}
					if (BgL_test1647z00_1956)
						{	/* Coerce/app.scm 118 */
							if (
								((((BgL_globalz00_bglt) COBJECT(
												((BgL_globalz00_bglt) BgL_calleez00_24)))->
										BgL_importz00) == CNST_TABLE_REF(((long) 1))))
								{	/* Coerce/app.scm 120 */
									bool_t BgL_test1649z00_1964;

									{	/* Coerce/app.scm 120 */
										obj_t BgL_tmpz00_1965;

										BgL_tmpz00_1965 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt)
														(((BgL_variablez00_bglt)
																COBJECT(BgL_calleez00_24))->BgL_valuez00))))->
											BgL_argsz00);
										BgL_test1649z00_1964 = PAIRP(BgL_tmpz00_1965);
									}
									if (BgL_test1649z00_1964)
										{	/* Coerce/app.scm 121 */
											obj_t BgL_arg1324z00_1453;

											{	/* Coerce/app.scm 121 */
												obj_t BgL_pairz00_1725;

												BgL_pairz00_1725 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt)
																		COBJECT(BgL_calleez00_24))->
																	BgL_valuez00))))->BgL_argsz00);
												BgL_arg1324z00_1453 = CAR(BgL_pairz00_1725);
											}
											BgL_test1646z00_1955 =
												BGl_isazf3zf3zz__objectz00(BgL_arg1324z00_1453,
												BGl_typez00zztype_typez00);
										}
									else
										{	/* Coerce/app.scm 120 */
											BgL_test1646z00_1955 = ((bool_t) 0);
										}
								}
							else
								{	/* Coerce/app.scm 119 */
									BgL_test1646z00_1955 = ((bool_t) 0);
								}
						}
					else
						{	/* Coerce/app.scm 118 */
							BgL_test1646z00_1955 = ((bool_t) 0);
						}
				}
				if (BgL_test1646z00_1955)
					{	/* Coerce/app.scm 118 */
						return
							BGl_coercezd2bigloozd2externzd2appz12zc0zzcoerce_appz00
							(BgL_calleez00_24, BgL_callerz00_25, BgL_nodez00_26, BgL_toz00_27,
							BgL_safez00_28);
					}
				else
					{	/* Coerce/app.scm 118 */
						return
							BGl_coercezd2bigloozd2internzd2appz12zc0zzcoerce_appz00
							(BgL_calleez00_24, BgL_callerz00_25, BgL_nodez00_26, BgL_toz00_27,
							BgL_safez00_28);
					}
			}
		}

	}



/* coerce-bigloo-intern-app! */
	BgL_nodez00_bglt
		BGl_coercezd2bigloozd2internzd2appz12zc0zzcoerce_appz00(BgL_variablez00_bglt
		BgL_calleez00_29, obj_t BgL_callerz00_30, BgL_appz00_bglt BgL_nodez00_31,
		obj_t BgL_toz00_32, obj_t BgL_safez00_33)
	{
		{	/* Coerce/app.scm 128 */
			{	/* Coerce/app.scm 132 */
				BgL_valuez00_bglt BgL_funz00_1459;

				BgL_funz00_1459 =
					(((BgL_variablez00_bglt) COBJECT(BgL_calleez00_29))->BgL_valuez00);
				{	/* Coerce/app.scm 133 */
					obj_t BgL_shz00_1461;

					BgL_shz00_1461 =
						BGl_shapez00zztools_shapez00(((obj_t) BgL_calleez00_29));
					{	/* Coerce/app.scm 134 */
						BgL_typez00_bglt BgL_ntypez00_1462;

						BgL_ntypez00_1462 =
							BGl_getzd2typezd2zztype_typeofz00(
							((BgL_nodez00_bglt) BgL_nodez00_31), ((bool_t) 0));
						{	/* Coerce/app.scm 135 */

							{	/* Coerce/app.scm 136 */
								obj_t BgL_g1108z00_1463;
								obj_t BgL_g1109z00_1464;

								BgL_g1108z00_1463 =
									(((BgL_appz00_bglt) COBJECT(BgL_nodez00_31))->BgL_argsz00);
								BgL_g1109z00_1464 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_funz00_1459)))->BgL_argsz00);
								{
									obj_t BgL_actualsz00_1466;
									obj_t BgL_formalsz00_1467;

									BgL_actualsz00_1466 = BgL_g1108z00_1463;
									BgL_formalsz00_1467 = BgL_g1109z00_1464;
								BgL_zc3z04anonymousza31330ze3z87_1468:
									if (
										(bgl_list_length(BgL_actualsz00_1466) ==
											bgl_list_length(BgL_formalsz00_1467)))
										{	/* Coerce/app.scm 138 */
											((bool_t) 0);
										}
									else
										{	/* Coerce/app.scm 138 */
											{	/* Coerce/app.scm 140 */
												obj_t BgL_arg1337z00_1472;

												BgL_arg1337z00_1472 =
													BGl_shapez00zztools_shapez00(
													((obj_t) BgL_nodez00_31));
												BGl_internalzd2errorzd2zztools_errorz00
													(BGl_string1620z00zzcoerce_appz00,
													BGl_string1621z00zzcoerce_appz00,
													BgL_arg1337z00_1472);
											}
											{	/* Coerce/app.scm 141 */
												obj_t BgL_list1338z00_1473;

												BgL_list1338z00_1473 =
													MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
												BGl_exitz00zz__errorz00(BgL_list1338z00_1473);
										}}
									if (NULLP(BgL_actualsz00_1466))
										{	/* Coerce/app.scm 144 */
											bool_t BgL_test1652z00_1997;

											if ((BgL_callerz00_30 == ((obj_t) BgL_calleez00_29)))
												{	/* Coerce/app.scm 144 */
													if (CBOOL
														(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
														{	/* Coerce/app.scm 144 */
															BgL_test1652z00_1997 = ((bool_t) 0);
														}
													else
														{	/* Coerce/app.scm 144 */
															BgL_test1652z00_1997 = ((bool_t) 1);
														}
												}
											else
												{	/* Coerce/app.scm 144 */
													BgL_test1652z00_1997 = ((bool_t) 0);
												}
											if (BgL_test1652z00_1997)
												{	/* Coerce/app.scm 144 */
													return
														BGl_convertz12z12zzcoerce_convertz00(
														((BgL_nodez00_bglt) BgL_nodez00_31),
														BgL_ntypez00_1462,
														((BgL_typez00_bglt) BgL_toz00_32), ((bool_t) 0));
												}
											else
												{	/* Coerce/app.scm 144 */
													return
														BGl_convertz12z12zzcoerce_convertz00(
														((BgL_nodez00_bglt) BgL_nodez00_31),
														BgL_ntypez00_1462,
														((BgL_typez00_bglt) BgL_toz00_32),
														CBOOL(BgL_safez00_33));
												}
										}
									else
										{	/* Coerce/app.scm 151 */
											BgL_typez00_bglt BgL_typez00_1480;

											BgL_typez00_1480 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt)
																CAR(
																	((obj_t) BgL_formalsz00_1467))))))->
												BgL_typez00);
											{	/* Coerce/app.scm 152 */
												BgL_nodez00_bglt BgL_arg1344z00_1481;

												{	/* Coerce/app.scm 152 */
													obj_t BgL_arg1345z00_1482;

													BgL_arg1345z00_1482 =
														CAR(((obj_t) BgL_actualsz00_1466));
													BgL_arg1344z00_1481 =
														BGl_coercez12z12zzcoerce_coercez00(
														((BgL_nodez00_bglt) BgL_arg1345z00_1482),
														BgL_callerz00_30, BgL_typez00_1480,
														CBOOL(BgL_safez00_33));
												}
												{	/* Coerce/app.scm 152 */
													obj_t BgL_auxz00_2022;
													obj_t BgL_tmpz00_2020;

													BgL_auxz00_2022 = ((obj_t) BgL_arg1344z00_1481);
													BgL_tmpz00_2020 = ((obj_t) BgL_actualsz00_1466);
													SET_CAR(BgL_tmpz00_2020, BgL_auxz00_2022);
												}
											}
											{	/* Coerce/app.scm 153 */
												obj_t BgL_arg1346z00_1483;
												obj_t BgL_arg1347z00_1484;

												BgL_arg1346z00_1483 =
													CDR(((obj_t) BgL_actualsz00_1466));
												BgL_arg1347z00_1484 =
													CDR(((obj_t) BgL_formalsz00_1467));
												{
													obj_t BgL_formalsz00_2030;
													obj_t BgL_actualsz00_2029;

													BgL_actualsz00_2029 = BgL_arg1346z00_1483;
													BgL_formalsz00_2030 = BgL_arg1347z00_1484;
													BgL_formalsz00_1467 = BgL_formalsz00_2030;
													BgL_actualsz00_1466 = BgL_actualsz00_2029;
													goto BgL_zc3z04anonymousza31330ze3z87_1468;
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



/* coerce-bigloo-extern-app! */
	BgL_nodez00_bglt
		BGl_coercezd2bigloozd2externzd2appz12zc0zzcoerce_appz00(BgL_variablez00_bglt
		BgL_calleez00_34, obj_t BgL_callerz00_35, BgL_appz00_bglt BgL_nodez00_36,
		obj_t BgL_toz00_37, obj_t BgL_safez00_38)
	{
		{	/* Coerce/app.scm 158 */
			{	/* Coerce/app.scm 159 */
				BgL_valuez00_bglt BgL_funz00_1487;

				BgL_funz00_1487 =
					(((BgL_variablez00_bglt) COBJECT(BgL_calleez00_34))->BgL_valuez00);
				{	/* Coerce/app.scm 160 */
					BgL_typez00_bglt BgL_ntypez00_1489;

					BgL_ntypez00_1489 =
						BGl_getzd2typezd2zztype_typeofz00(
						((BgL_nodez00_bglt) BgL_nodez00_36), ((bool_t) 0));
					{	/* Coerce/app.scm 161 */

						{	/* Coerce/app.scm 162 */
							obj_t BgL_g1110z00_1490;
							obj_t BgL_g1111z00_1491;

							BgL_g1110z00_1490 =
								(((BgL_appz00_bglt) COBJECT(BgL_nodez00_36))->BgL_argsz00);
							BgL_g1111z00_1491 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt) BgL_funz00_1487)))->BgL_argsz00);
							{
								obj_t BgL_actualsz00_1493;
								obj_t BgL_formalsz00_1494;

								BgL_actualsz00_1493 = BgL_g1110z00_1490;
								BgL_formalsz00_1494 = BgL_g1111z00_1491;
							BgL_zc3z04anonymousza31349ze3z87_1495:
								if (NULLP(BgL_actualsz00_1493))
									{	/* Coerce/app.scm 164 */
										return
											BGl_convertz12z12zzcoerce_convertz00(
											((BgL_nodez00_bglt) BgL_nodez00_36), BgL_ntypez00_1489,
											((BgL_typez00_bglt) BgL_toz00_37), CBOOL(BgL_safez00_38));
									}
								else
									{	/* Coerce/app.scm 166 */
										obj_t BgL_typez00_1497;

										BgL_typez00_1497 = CAR(((obj_t) BgL_formalsz00_1494));
										{	/* Coerce/app.scm 167 */
											BgL_nodez00_bglt BgL_arg1351z00_1498;

											{	/* Coerce/app.scm 167 */
												obj_t BgL_arg1352z00_1499;

												BgL_arg1352z00_1499 =
													CAR(((obj_t) BgL_actualsz00_1493));
												BgL_arg1351z00_1498 =
													BGl_coercez12z12zzcoerce_coercez00(
													((BgL_nodez00_bglt) BgL_arg1352z00_1499),
													BgL_callerz00_35,
													((BgL_typez00_bglt) BgL_typez00_1497),
													CBOOL(BgL_safez00_38));
											}
											{	/* Coerce/app.scm 167 */
												obj_t BgL_auxz00_2053;
												obj_t BgL_tmpz00_2051;

												BgL_auxz00_2053 = ((obj_t) BgL_arg1351z00_1498);
												BgL_tmpz00_2051 = ((obj_t) BgL_actualsz00_1493);
												SET_CAR(BgL_tmpz00_2051, BgL_auxz00_2053);
											}
										}
										{	/* Coerce/app.scm 168 */
											obj_t BgL_arg1357z00_1500;
											obj_t BgL_arg1360z00_1501;

											BgL_arg1357z00_1500 = CDR(((obj_t) BgL_actualsz00_1493));
											BgL_arg1360z00_1501 = CDR(((obj_t) BgL_formalsz00_1494));
											{
												obj_t BgL_formalsz00_2061;
												obj_t BgL_actualsz00_2060;

												BgL_actualsz00_2060 = BgL_arg1357z00_1500;
												BgL_formalsz00_2061 = BgL_arg1360z00_1501;
												BgL_formalsz00_1494 = BgL_formalsz00_2061;
												BgL_actualsz00_1493 = BgL_actualsz00_2060;
												goto BgL_zc3z04anonymousza31349ze3z87_1495;
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



/* object-init */
	obj_t BGl_objectzd2initzd2zzcoerce_appz00()
	{
		{	/* Coerce/app.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_appz00()
	{
		{	/* Coerce/app.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_appz00()
	{
		{	/* Coerce/app.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_appz00zzast_nodez00,
				BGl_proc1622z00zzcoerce_appz00, BGl_string1623z00zzcoerce_appz00);
		}

	}



/* &coerce!-app1227 */
	BgL_nodez00_bglt BGl_z62coercez12zd2app1227za2zzcoerce_appz00(obj_t
		BgL_envz00_1757, obj_t BgL_nodez00_1758, obj_t BgL_callerz00_1759,
		obj_t BgL_toz00_1760, obj_t BgL_safez00_1761)
	{
		{	/* Coerce/app.scm 31 */
			{	/* Tools/trace.sch 53 */
				BgL_variablez00_bglt BgL_funz00_1783;

				BgL_funz00_1783 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_1758)))->BgL_funz00)))->
					BgL_variablez00);
				{	/* Tools/trace.sch 53 */
					bool_t BgL_test1656z00_2066;

					{	/* Tools/trace.sch 53 */
						bool_t BgL_test1657z00_2067;

						{	/* Tools/trace.sch 53 */
							bool_t BgL_res1613z00_1784;

							BgL_res1613z00_1784 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_funz00_1783), BGl_globalz00zzast_varz00);
							BgL_test1657z00_2067 = BgL_res1613z00_1784;
						}
						if (BgL_test1657z00_2067)
							{	/* Tools/trace.sch 53 */
								BgL_valuez00_bglt BgL_arg1367z00_1785;

								BgL_arg1367z00_1785 =
									(((BgL_variablez00_bglt) COBJECT(BgL_funz00_1783))->
									BgL_valuez00);
								{	/* Tools/trace.sch 53 */
									bool_t BgL_res1614z00_1786;

									BgL_res1614z00_1786 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1367z00_1785), BGl_cfunz00zzast_varz00);
									BgL_test1656z00_2066 = BgL_res1614z00_1786;
								}
							}
						else
							{	/* Tools/trace.sch 53 */
								BgL_test1656z00_2066 = ((bool_t) 0);
							}
					}
					if (BgL_test1656z00_2066)
						{	/* Tools/trace.sch 53 */
							return
								BGl_coercezd2foreignzd2appz12z12zzcoerce_appz00(BgL_funz00_1783,
								BgL_callerz00_1759, ((BgL_appz00_bglt) BgL_nodez00_1758),
								BgL_toz00_1760, BgL_safez00_1761);
						}
					else
						{	/* Tools/trace.sch 53 */
							return
								BGl_coercezd2bigloozd2appz12z12zzcoerce_appz00(BgL_funz00_1783,
								BgL_callerz00_1759, ((BgL_appz00_bglt) BgL_nodez00_1758),
								BgL_toz00_1760, BgL_safez00_1761);
						}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_appz00()
	{
		{	/* Coerce/app.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1624z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1624z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1624z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1624z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1624z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1624z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1624z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1624z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1624z00zzcoerce_appz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1624z00zzcoerce_appz00));
			return
				BGl_modulezd2initializa7ationz75zzcoerce_convertz00(((long) 87995526),
				BSTRING_TO_STRING(BGl_string1624z00zzcoerce_appz00));
		}

	}

#ifdef __cplusplus
}
#endif
