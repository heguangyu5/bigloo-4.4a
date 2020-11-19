/*===========================================================================*/
/*   (SawMill/elsewhere.scm)                                                 */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/elsewhere.scm) */
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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;


	static obj_t BGl_objectzd2initzd2zzsaw_elsewherez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_elsewherez00();
	static obj_t BGl_gczd2rootszd2initz00zzsaw_elsewherez00();
	BGL_EXPORTED_DECL obj_t
		BGl_needzd2functionzd2pointerz00zzsaw_elsewherez00(BgL_globalz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_elsewherez00 = BUNSPEC;
	static obj_t BGl_z62needzd2functionzd2pointerz62zzsaw_elsewherez00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_elsewherez00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_elsewherez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzsaw_elsewherez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_elsewherez00();
	extern obj_t BGl_scnstz00zzast_varz00;
	extern bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_elsewherez00();
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string1318z00zzsaw_elsewherez00,
		BgL_bgl_string1318za700za7za7s1324za7, "saw_elsewhere", 13);
	      DEFINE_STRING(BGl_string1319z00zzsaw_elsewherez00,
		BgL_bgl_string1319za700za7za7s1325za7, "(sfun sgfun slfun) ", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_needzd2functionzd2pointerzd2envzd2zzsaw_elsewherez00,
		BgL_bgl_za762needza7d2functi1326z00,
		BGl_z62needzd2functionzd2pointerz62zzsaw_elsewherez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_elsewherez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_elsewherez00(long
		BgL_checksumz00_1521, char *BgL_fromz00_1522)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_elsewherez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_elsewherez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_elsewherez00();
					BGl_libraryzd2moduleszd2initz00zzsaw_elsewherez00();
					BGl_cnstzd2initzd2zzsaw_elsewherez00();
					BGl_importedzd2moduleszd2initz00zzsaw_elsewherez00();
					return BGl_methodzd2initzd2zzsaw_elsewherez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_elsewherez00()
	{
		{	/* SawMill/elsewhere.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_elsewhere");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_elsewhere");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_elsewhere");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_elsewhere");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_elsewhere");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_elsewherez00()
	{
		{	/* SawMill/elsewhere.scm 1 */
			{	/* SawMill/elsewhere.scm 1 */
				obj_t BgL_cportz00_1508;

				{	/* SawMill/elsewhere.scm 1 */
					obj_t BgL_stringz00_1516;

					BgL_stringz00_1516 = BGl_string1319z00zzsaw_elsewherez00;
					{	/* SawMill/elsewhere.scm 1 */
						obj_t BgL_startz00_1517;

						BgL_startz00_1517 = BINT(((long) 0));
						{	/* SawMill/elsewhere.scm 1 */
							obj_t BgL_endz00_1518;

							BgL_endz00_1518 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1516)));
							{	/* SawMill/elsewhere.scm 1 */

								BgL_cportz00_1508 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1516, BgL_startz00_1517, BgL_endz00_1518);
				}}}}
				{
					long BgL_iz00_1509;

					BgL_iz00_1509 = ((long) 0);
				BgL_loopz00_1510:
					if ((BgL_iz00_1509 == ((long) -1)))
						{	/* SawMill/elsewhere.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/elsewhere.scm 1 */
							{	/* SawMill/elsewhere.scm 1 */
								obj_t BgL_arg1322z00_1512;

								{	/* SawMill/elsewhere.scm 1 */

									{	/* SawMill/elsewhere.scm 1 */
										obj_t BgL_locationz00_1514;

										BgL_locationz00_1514 = BBOOL(((bool_t) 0));
										{	/* SawMill/elsewhere.scm 1 */

											BgL_arg1322z00_1512 =
												BGl_readz00zz__readerz00(BgL_cportz00_1508,
												BgL_locationz00_1514);
										}
									}
								}
								{	/* SawMill/elsewhere.scm 1 */
									int BgL_tmpz00_1545;

									BgL_tmpz00_1545 = (int) (BgL_iz00_1509);
									CNST_TABLE_SET(BgL_tmpz00_1545, BgL_arg1322z00_1512);
							}}
							{	/* SawMill/elsewhere.scm 1 */
								int BgL_auxz00_1515;

								BgL_auxz00_1515 = (int) ((BgL_iz00_1509 - ((long) 1)));
								{
									long BgL_iz00_1550;

									BgL_iz00_1550 = (long) (BgL_auxz00_1515);
									BgL_iz00_1509 = BgL_iz00_1550;
									goto BgL_loopz00_1510;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_elsewherez00()
	{
		{	/* SawMill/elsewhere.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* need-function-pointer */
	BGL_EXPORTED_DEF obj_t
		BGl_needzd2functionzd2pointerz00zzsaw_elsewherez00(BgL_globalz00_bglt
		BgL_varz00_3)
	{
		{	/* SawMill/elsewhere.scm 7 */
			{	/* SawMill/elsewhere.scm 8 */
				BgL_valuez00_bglt BgL_valz00_1334;

				BgL_valz00_1334 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_3)))->BgL_valuez00);
				{	/* SawMill/elsewhere.scm 9 */
					bool_t BgL_test1329z00_1555;

					{	/* SawMill/elsewhere.scm 9 */
						obj_t BgL_arg1227z00_1339;

						BgL_arg1227z00_1339 =
							(((BgL_globalz00_bglt) COBJECT(BgL_varz00_3))->BgL_modulez00);
						BgL_test1329z00_1555 =
							(BgL_arg1227z00_1339 == BGl_za2moduleza2z00zzmodule_modulez00);
					}
					if (BgL_test1329z00_1555)
						{	/* SawMill/elsewhere.scm 9 */
							if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00
								(BgL_varz00_3))
								{	/* SawMill/elsewhere.scm 11 */
									bool_t BgL_test1331z00_1560;

									{	/* SawMill/elsewhere.scm 11 */
										bool_t BgL_res1317z00_1504;

										BgL_res1317z00_1504 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_valz00_1334), BGl_scnstz00zzast_varz00);
										BgL_test1331z00_1560 = BgL_res1317z00_1504;
									}
									if (BgL_test1331z00_1560)
										{	/* SawMill/elsewhere.scm 11 */
											return
												BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
												(((BgL_scnstz00_bglt) COBJECT(
															((BgL_scnstz00_bglt) BgL_valz00_1334)))->
													BgL_classz00), CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* SawMill/elsewhere.scm 11 */
											return BFALSE;
										}
								}
							else
								{	/* SawMill/elsewhere.scm 10 */
									return BFALSE;
								}
						}
					else
						{	/* SawMill/elsewhere.scm 9 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &need-function-pointer */
	obj_t BGl_z62needzd2functionzd2pointerz62zzsaw_elsewherez00(obj_t
		BgL_envz00_1506, obj_t BgL_varz00_1507)
	{
		{	/* SawMill/elsewhere.scm 7 */
			return
				BGl_needzd2functionzd2pointerz00zzsaw_elsewherez00(
				((BgL_globalz00_bglt) BgL_varz00_1507));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_elsewherez00()
	{
		{	/* SawMill/elsewhere.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_elsewherez00()
	{
		{	/* SawMill/elsewhere.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_elsewherez00()
	{
		{	/* SawMill/elsewhere.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_elsewherez00()
	{
		{	/* SawMill/elsewhere.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1318z00zzsaw_elsewherez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1318z00zzsaw_elsewherez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1318z00zzsaw_elsewherez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1318z00zzsaw_elsewherez00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					364917924), BSTRING_TO_STRING(BGl_string1318z00zzsaw_elsewherez00));
		}

	}

#ifdef __cplusplus
}
#endif
