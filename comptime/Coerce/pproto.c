/*===========================================================================*/
/*   (Coerce/pproto.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/pproto.scm) */
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


	static obj_t BGl_z62pvariablezd2protozb0zzcoerce_pprotoz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00();
	static obj_t BGl_objectzd2initzd2zzcoerce_pprotoz00();
	BGL_EXPORTED_DECL obj_t BGl_pfunctionzd2protozd2zzcoerce_pprotoz00(long,
		BgL_variablez00_bglt);
	static obj_t BGl_methodzd2initzd2zzcoerce_pprotoz00();
	BGL_IMPORT obj_t make_string(long, unsigned char);
	extern obj_t
		BGl_variablezd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt);
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	static obj_t BGl_z62deczd2ppmargez12za2zzcoerce_pprotoz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcoerce_pprotoz00();
	extern obj_t
		BGl_functionzd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00();
	static long BGl_oldzd2margezd2zzcoerce_pprotoz00;
	static long BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00;
	BGL_EXPORTED_DECL obj_t BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pvariablezd2protozd2zzcoerce_pprotoz00(long,
		BgL_variablez00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_pprotoz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzcoerce_pprotoz00();
	static obj_t BGl_z62inczd2ppmargez12za2zzcoerce_pprotoz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzcoerce_pprotoz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62pfunctionzd2protozb0zzcoerce_pprotoz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_oldzd2margezd2stringz00zzcoerce_pprotoz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_pptypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_pprotoz00();
	static obj_t BGl_z62resetzd2ppmargez12za2zzcoerce_pprotoz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_pprotoz00();
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pfunctionzd2protozd2envz00zzcoerce_pprotoz00,
		BgL_bgl_za762pfunctionza7d2p1174z00,
		BGl_z62pfunctionzd2protozb0zzcoerce_pprotoz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inczd2ppmargez12zd2envz12zzcoerce_pprotoz00,
		BgL_bgl_za762incza7d2ppmarge1175z00,
		BGl_z62inczd2ppmargez12za2zzcoerce_pprotoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pvariablezd2protozd2envz00zzcoerce_pprotoz00,
		BgL_bgl_za762pvariableza7d2p1176z00,
		BGl_z62pvariablezd2protozb0zzcoerce_pprotoz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1171z00zzcoerce_pprotoz00,
		BgL_bgl_string1171za700za7za7c1177za7, "", 0);
	      DEFINE_STRING(BGl_string1172z00zzcoerce_pprotoz00,
		BgL_bgl_string1172za700za7za7c1178za7, " : ", 3);
	      DEFINE_STRING(BGl_string1173z00zzcoerce_pprotoz00,
		BgL_bgl_string1173za700za7za7c1179za7, "coerce_pproto", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_resetzd2ppmargez12zd2envz12zzcoerce_pprotoz00,
		BgL_bgl_za762resetza7d2ppmar1180z00,
		BGl_z62resetzd2ppmargez12za2zzcoerce_pprotoz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_deczd2ppmargez12zd2envz12zzcoerce_pprotoz00,
		BgL_bgl_za762decza7d2ppmarge1181z00,
		BGl_z62deczd2ppmargez12za2zzcoerce_pprotoz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzcoerce_pprotoz00));
		     ADD_ROOT((void *) (&BGl_oldzd2margezd2stringz00zzcoerce_pprotoz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcoerce_pprotoz00(long
		BgL_checksumz00_511, char *BgL_fromz00_512)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_pprotoz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_pprotoz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcoerce_pprotoz00();
					BGl_libraryzd2moduleszd2initz00zzcoerce_pprotoz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_pprotoz00();
					return BGl_toplevelzd2initzd2zzcoerce_pprotoz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_pprotoz00()
	{
		{	/* Coerce/pproto.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"coerce_pproto");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"coerce_pproto");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"coerce_pproto");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"coerce_pproto");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcoerce_pprotoz00()
	{
		{	/* Coerce/pproto.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_pprotoz00()
	{
		{	/* Coerce/pproto.scm 15 */
			BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00 = ((long) 8);
			BGl_oldzd2margezd2zzcoerce_pprotoz00 = ((long) -1);
			return (BGl_oldzd2margezd2stringz00zzcoerce_pprotoz00 =
				BGl_string1171z00zzcoerce_pprotoz00, BUNSPEC);
		}

	}



/* reset-ppmarge! */
	BGL_EXPORTED_DEF obj_t BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00()
	{
		{	/* Coerce/pproto.scm 31 */
			return (BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00 = ((long) 8), BUNSPEC);
		}

	}



/* &reset-ppmarge! */
	obj_t BGl_z62resetzd2ppmargez12za2zzcoerce_pprotoz00(obj_t BgL_envz00_502)
	{
		{	/* Coerce/pproto.scm 31 */
			return BGl_resetzd2ppmargez12zc0zzcoerce_pprotoz00();
		}

	}



/* inc-ppmarge! */
	BGL_EXPORTED_DEF obj_t BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00()
	{
		{	/* Coerce/pproto.scm 37 */
			return (BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00 =
				(((long) 1) + BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00), BUNSPEC);
		}

	}



/* &inc-ppmarge! */
	obj_t BGl_z62inczd2ppmargez12za2zzcoerce_pprotoz00(obj_t BgL_envz00_503)
	{
		{	/* Coerce/pproto.scm 37 */
			return BGl_inczd2ppmargez12zc0zzcoerce_pprotoz00();
		}

	}



/* dec-ppmarge! */
	BGL_EXPORTED_DEF obj_t BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00()
	{
		{	/* Coerce/pproto.scm 43 */
			return (BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00 =
				(BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00 - ((long) 1)), BUNSPEC);
		}

	}



/* &dec-ppmarge! */
	obj_t BGl_z62deczd2ppmargez12za2zzcoerce_pprotoz00(obj_t BgL_envz00_504)
	{
		{	/* Coerce/pproto.scm 43 */
			return BGl_deczd2ppmargez12zc0zzcoerce_pprotoz00();
		}

	}



/* pfunction-proto */
	BGL_EXPORTED_DEF obj_t BGl_pfunctionzd2protozd2zzcoerce_pprotoz00(long
		BgL_levelz00_3, BgL_variablez00_bglt BgL_variablez00_4)
	{
		{	/* Coerce/pproto.scm 56 */
			{	/* Coerce/pproto.scm 57 */
				obj_t BgL_margez00_430;

				if (
					(BGl_oldzd2margezd2zzcoerce_pprotoz00 ==
						BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00))
					{	/* Coerce/pproto.scm 57 */
						BgL_margez00_430 = BGl_oldzd2margezd2stringz00zzcoerce_pprotoz00;
					}
				else
					{	/* Coerce/pproto.scm 59 */
						obj_t BgL_margez00_441;

						BgL_margez00_441 =
							make_string(BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00,
							((unsigned char) ' '));
						BGl_oldzd2margezd2zzcoerce_pprotoz00 =
							BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00;
						BGl_oldzd2margezd2stringz00zzcoerce_pprotoz00 = BgL_margez00_441;
						BgL_margez00_430 = BgL_margez00_441;
					}
				if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(BgL_levelz00_3),
						BGl_za2verboseza2z00zzengine_paramz00))
					{	/* Coerce/pproto.scm 65 */
						obj_t BgL_arg1101z00_433;
						obj_t BgL_arg1103z00_434;

						BgL_arg1101z00_433 =
							BGl_shapez00zztools_shapez00(((obj_t) BgL_variablez00_4));
						BgL_arg1103z00_434 =
							BGl_functionzd2typezd2ze3stringze3zztype_pptypez00
							(BgL_variablez00_4);
						{	/* Coerce/pproto.scm 63 */
							obj_t BgL_list1104z00_435;

							{	/* Coerce/pproto.scm 63 */
								obj_t BgL_arg1109z00_436;

								{	/* Coerce/pproto.scm 63 */
									obj_t BgL_arg1110z00_437;

									{	/* Coerce/pproto.scm 63 */
										obj_t BgL_arg1113z00_438;

										{	/* Coerce/pproto.scm 63 */
											obj_t BgL_arg1114z00_439;

											BgL_arg1114z00_439 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
											BgL_arg1113z00_438 =
												MAKE_YOUNG_PAIR(BgL_arg1103z00_434, BgL_arg1114z00_439);
										}
										BgL_arg1110z00_437 =
											MAKE_YOUNG_PAIR(BGl_string1172z00zzcoerce_pprotoz00,
											BgL_arg1113z00_438);
									}
									BgL_arg1109z00_436 =
										MAKE_YOUNG_PAIR(BgL_arg1101z00_433, BgL_arg1110z00_437);
								}
								BgL_list1104z00_435 =
									MAKE_YOUNG_PAIR(BgL_margez00_430, BgL_arg1109z00_436);
							}
							return
								BGl_verbosez00zztools_speekz00(BINT(BgL_levelz00_3),
								BgL_list1104z00_435);
						}
					}
				else
					{	/* Coerce/pproto.scm 63 */
						return BUNSPEC;
					}
			}
		}

	}



/* &pfunction-proto */
	obj_t BGl_z62pfunctionzd2protozb0zzcoerce_pprotoz00(obj_t BgL_envz00_505,
		obj_t BgL_levelz00_506, obj_t BgL_variablez00_507)
	{
		{	/* Coerce/pproto.scm 56 */
			return
				BGl_pfunctionzd2protozd2zzcoerce_pprotoz00(
				(long) CINT(BgL_levelz00_506),
				((BgL_variablez00_bglt) BgL_variablez00_507));
		}

	}



/* pvariable-proto */
	BGL_EXPORTED_DEF obj_t BGl_pvariablezd2protozd2zzcoerce_pprotoz00(long
		BgL_levelz00_5, BgL_variablez00_bglt BgL_variablez00_6)
	{
		{	/* Coerce/pproto.scm 72 */
			{	/* Coerce/pproto.scm 73 */
				obj_t BgL_margez00_442;

				BgL_margez00_442 =
					make_string(BGl_za2ppzd2margeza2zd2zzcoerce_pprotoz00,
					((unsigned char) ' '));
				if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BINT(BgL_levelz00_5),
						BGl_za2verboseza2z00zzengine_paramz00))
					{	/* Coerce/pproto.scm 76 */
						obj_t BgL_arg1117z00_445;
						obj_t BgL_arg1118z00_446;

						BgL_arg1117z00_445 =
							BGl_shapez00zztools_shapez00(((obj_t) BgL_variablez00_6));
						BgL_arg1118z00_446 =
							BGl_variablezd2typezd2ze3stringze3zztype_pptypez00
							(BgL_variablez00_6);
						{	/* Coerce/pproto.scm 74 */
							obj_t BgL_list1119z00_447;

							{	/* Coerce/pproto.scm 74 */
								obj_t BgL_arg1121z00_448;

								{	/* Coerce/pproto.scm 74 */
									obj_t BgL_arg1122z00_449;

									{	/* Coerce/pproto.scm 74 */
										obj_t BgL_arg1123z00_450;

										{	/* Coerce/pproto.scm 74 */
											obj_t BgL_arg1124z00_451;

											BgL_arg1124z00_451 =
												MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
											BgL_arg1123z00_450 =
												MAKE_YOUNG_PAIR(BgL_arg1118z00_446, BgL_arg1124z00_451);
										}
										BgL_arg1122z00_449 =
											MAKE_YOUNG_PAIR(BGl_string1172z00zzcoerce_pprotoz00,
											BgL_arg1123z00_450);
									}
									BgL_arg1121z00_448 =
										MAKE_YOUNG_PAIR(BgL_arg1117z00_445, BgL_arg1122z00_449);
								}
								BgL_list1119z00_447 =
									MAKE_YOUNG_PAIR(BgL_margez00_442, BgL_arg1121z00_448);
							}
							return
								BGl_verbosez00zztools_speekz00(BINT(BgL_levelz00_5),
								BgL_list1119z00_447);
						}
					}
				else
					{	/* Coerce/pproto.scm 74 */
						return BUNSPEC;
					}
			}
		}

	}



/* &pvariable-proto */
	obj_t BGl_z62pvariablezd2protozb0zzcoerce_pprotoz00(obj_t BgL_envz00_508,
		obj_t BgL_levelz00_509, obj_t BgL_variablez00_510)
	{
		{	/* Coerce/pproto.scm 72 */
			return
				BGl_pvariablezd2protozd2zzcoerce_pprotoz00(
				(long) CINT(BgL_levelz00_509),
				((BgL_variablez00_bglt) BgL_variablez00_510));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcoerce_pprotoz00()
	{
		{	/* Coerce/pproto.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_pprotoz00()
	{
		{	/* Coerce/pproto.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_pprotoz00()
	{
		{	/* Coerce/pproto.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_pprotoz00()
	{
		{	/* Coerce/pproto.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1173z00zzcoerce_pprotoz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1173z00zzcoerce_pprotoz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1173z00zzcoerce_pprotoz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1173z00zzcoerce_pprotoz00));
			BGl_modulezd2initializa7ationz75zztype_pptypez00(((long) 220178227),
				BSTRING_TO_STRING(BGl_string1173z00zzcoerce_pprotoz00));
			return
				BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1173z00zzcoerce_pprotoz00));
		}

	}

#ifdef __cplusplus
}
#endif
