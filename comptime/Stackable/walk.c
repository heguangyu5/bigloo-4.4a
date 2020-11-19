/*===========================================================================*/
/*   (Stackable/walk.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Stackable/walk.scm) */
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

	typedef struct BgL_closurez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}                 *BgL_closurez00_bglt;

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


	extern obj_t BGl_closurez00zzast_nodez00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_za2optimzd2stackablezf3za2z21zzengine_paramz00;
	static obj_t BGl_z62markzd2stackablez121266za2zzstackable_walkz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzstackable_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzstackable_walkz00();
	static obj_t BGl_z62stackable1260z62zzstackable_walkz00(obj_t, obj_t);
	static obj_t BGl_z62stackablezd2closure1265zb0zzstackable_walkz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62markzd2stackablez12zd2clos1269z70zzstackable_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzstackable_walkz00();
	static obj_t BGl_z62stackablezd2walkz12za2zzstackable_walkz00(obj_t, obj_t);
	static obj_t BGl_markzd2stackablez12zc0zzstackable_walkz00(BgL_nodez00_bglt,
		bool_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62stackablezd2app1263zb0zzstackable_walkz00(obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzstackable_walkz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzstackable_walkz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzstackable_walkz00();
	static obj_t BGl_z62stackablez62zzstackable_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_stackablez00zzstackable_walkz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_walk0z00zzast_walkz00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzstackable_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzstackable_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzstackable_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzstackable_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_stackablezd2walkz12zc0zzstackable_walkz00(obj_t);
	static obj_t BGl_z62markzd2stackablez12za2zzstackable_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_GENERIC
		(BGl_markzd2stackablez12zd2envz12zzstackable_walkz00,
		BgL_bgl_za762markza7d2stacka1671z00,
		BGl_z62markzd2stackablez12za2zzstackable_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1649z00zzstackable_walkz00,
		BgL_bgl_string1649za700za7za7s1672za7, "Stackable", 9);
	      DEFINE_STRING(BGl_string1650z00zzstackable_walkz00,
		BgL_bgl_string1650za700za7za7s1673za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1651z00zzstackable_walkz00,
		BgL_bgl_string1651za700za7za7s1674za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1652z00zzstackable_walkz00,
		BgL_bgl_string1652za700za7za7s1675za7, " error", 6);
	      DEFINE_STRING(BGl_string1653z00zzstackable_walkz00,
		BgL_bgl_string1653za700za7za7s1676za7, "s", 1);
	      DEFINE_STRING(BGl_string1654z00zzstackable_walkz00,
		BgL_bgl_string1654za700za7za7s1677za7, "", 0);
	      DEFINE_STRING(BGl_string1655z00zzstackable_walkz00,
		BgL_bgl_string1655za700za7za7s1678za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1656z00zzstackable_walkz00,
		BgL_bgl_string1656za700za7za7s1679za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1658z00zzstackable_walkz00,
		BgL_bgl_string1658za700za7za7s1680za7, "stackable1260", 13);
	      DEFINE_STRING(BGl_string1660z00zzstackable_walkz00,
		BgL_bgl_string1660za700za7za7s1681za7, "mark-stackable!1266", 19);
	      DEFINE_STRING(BGl_string1662z00zzstackable_walkz00,
		BgL_bgl_string1662za700za7za7s1682za7, "stackable", 9);
	      DEFINE_STRING(BGl_string1665z00zzstackable_walkz00,
		BgL_bgl_string1665za700za7za7s1683za7, "mark-stackable!", 15);
	      DEFINE_STRING(BGl_string1666z00zzstackable_walkz00,
		BgL_bgl_string1666za700za7za7s1684za7, "stackable_walk", 14);
	      DEFINE_STRING(BGl_string1667z00zzstackable_walkz00,
		BgL_bgl_string1667za700za7za7s1685za7, "* pass-started ", 15);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1657z00zzstackable_walkz00,
		BgL_bgl_za762stackable12601686za7,
		BGl_z62stackable1260z62zzstackable_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1659z00zzstackable_walkz00,
		BgL_bgl_za762markza7d2stacka1687z00,
		BGl_z62markzd2stackablez121266za2zzstackable_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1661z00zzstackable_walkz00,
		BgL_bgl_za762stackableza7d2a1688z00,
		BGl_z62stackablezd2app1263zb0zzstackable_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1663z00zzstackable_walkz00,
		BgL_bgl_za762stackableza7d2c1689z00,
		BGl_z62stackablezd2closure1265zb0zzstackable_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1664z00zzstackable_walkz00,
		BgL_bgl_za762markza7d2stacka1690z00,
		BGl_z62markzd2stackablez12zd2clos1269z70zzstackable_walkz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_GENERIC(BGl_stackablezd2envzd2zzstackable_walkz00,
		BgL_bgl_za762stackableza762za71691za7,
		BGl_z62stackablez62zzstackable_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stackablezd2walkz12zd2envz12zzstackable_walkz00,
		BgL_bgl_za762stackableza7d2w1692z00,
		BGl_z62stackablezd2walkz12za2zzstackable_walkz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzstackable_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzstackable_walkz00(long
		BgL_checksumz00_2088, char *BgL_fromz00_2089)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzstackable_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzstackable_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzstackable_walkz00();
					BGl_libraryzd2moduleszd2initz00zzstackable_walkz00();
					BGl_cnstzd2initzd2zzstackable_walkz00();
					BGl_importedzd2moduleszd2initz00zzstackable_walkz00();
					BGl_genericzd2initzd2zzstackable_walkz00();
					BGl_methodzd2initzd2zzstackable_walkz00();
					return BGl_toplevelzd2initzd2zzstackable_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzstackable_walkz00()
	{
		{	/* Stackable/walk.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"stackable_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"stackable_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"stackable_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"stackable_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"stackable_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"stackable_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"stackable_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"stackable_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"stackable_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"stackable_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "stackable_walk");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"stackable_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzstackable_walkz00()
	{
		{	/* Stackable/walk.scm 16 */
			{	/* Stackable/walk.scm 16 */
				obj_t BgL_cportz00_2053;

				{	/* Stackable/walk.scm 16 */
					obj_t BgL_stringz00_2061;

					BgL_stringz00_2061 = BGl_string1667z00zzstackable_walkz00;
					{	/* Stackable/walk.scm 16 */
						obj_t BgL_startz00_2062;

						BgL_startz00_2062 = BINT(((long) 0));
						{	/* Stackable/walk.scm 16 */
							obj_t BgL_endz00_2063;

							BgL_endz00_2063 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2061)));
							{	/* Stackable/walk.scm 16 */

								BgL_cportz00_2053 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2061, BgL_startz00_2062, BgL_endz00_2063);
				}}}}
				{
					long BgL_iz00_2054;

					BgL_iz00_2054 = ((long) 1);
				BgL_loopz00_2055:
					if ((BgL_iz00_2054 == ((long) -1)))
						{	/* Stackable/walk.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Stackable/walk.scm 16 */
							{	/* Stackable/walk.scm 16 */
								obj_t BgL_arg1669z00_2057;

								{	/* Stackable/walk.scm 16 */

									{	/* Stackable/walk.scm 16 */
										obj_t BgL_locationz00_2059;

										BgL_locationz00_2059 = BBOOL(((bool_t) 0));
										{	/* Stackable/walk.scm 16 */

											BgL_arg1669z00_2057 =
												BGl_readz00zz__readerz00(BgL_cportz00_2053,
												BgL_locationz00_2059);
										}
									}
								}
								{	/* Stackable/walk.scm 16 */
									int BgL_tmpz00_2121;

									BgL_tmpz00_2121 = (int) (BgL_iz00_2054);
									CNST_TABLE_SET(BgL_tmpz00_2121, BgL_arg1669z00_2057);
							}}
							{	/* Stackable/walk.scm 16 */
								int BgL_auxz00_2060;

								BgL_auxz00_2060 = (int) ((BgL_iz00_2054 - ((long) 1)));
								{
									long BgL_iz00_2126;

									BgL_iz00_2126 = (long) (BgL_auxz00_2060);
									BgL_iz00_2054 = BgL_iz00_2126;
									goto BgL_loopz00_2055;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzstackable_walkz00()
	{
		{	/* Stackable/walk.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzstackable_walkz00()
	{
		{	/* Stackable/walk.scm 16 */
			return BUNSPEC;
		}

	}



/* stackable-walk! */
	BGL_EXPORTED_DEF obj_t BGl_stackablezd2walkz12zc0zzstackable_walkz00(obj_t
		BgL_globalsz00_17)
	{
		{	/* Stackable/walk.scm 40 */
			{	/* Stackable/walk.scm 41 */
				obj_t BgL_list1285z00_1583;

				{	/* Stackable/walk.scm 41 */
					obj_t BgL_arg1286z00_1584;

					{	/* Stackable/walk.scm 41 */
						obj_t BgL_arg1287z00_1585;

						BgL_arg1287z00_1585 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1286z00_1584 =
							MAKE_YOUNG_PAIR(BGl_string1649z00zzstackable_walkz00,
							BgL_arg1287z00_1585);
					}
					BgL_list1285z00_1583 =
						MAKE_YOUNG_PAIR(BGl_string1650z00zzstackable_walkz00,
						BgL_arg1286z00_1584);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1285z00_1583);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1649z00zzstackable_walkz00;
			{	/* Stackable/walk.scm 41 */
				obj_t BgL_g1124z00_1586;

				BgL_g1124z00_1586 = BNIL;
				{
					obj_t BgL_hooksz00_1589;
					obj_t BgL_hnamesz00_1590;

					BgL_hooksz00_1589 = BgL_g1124z00_1586;
					BgL_hnamesz00_1590 = BNIL;
				BgL_zc3z04anonymousza31288ze3z87_1591:
					if (NULLP(BgL_hooksz00_1589))
						{	/* Stackable/walk.scm 41 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Stackable/walk.scm 41 */
							bool_t BgL_test1696z00_2139;

							{	/* Stackable/walk.scm 41 */
								obj_t BgL_fun1297z00_1598;

								BgL_fun1297z00_1598 = CAR(((obj_t) BgL_hooksz00_1589));
								BgL_test1696z00_2139 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1297z00_1598)
									(BgL_fun1297z00_1598, BEOA));
							}
							if (BgL_test1696z00_2139)
								{	/* Stackable/walk.scm 41 */
									obj_t BgL_arg1292z00_1595;
									obj_t BgL_arg1295z00_1596;

									BgL_arg1292z00_1595 = CDR(((obj_t) BgL_hooksz00_1589));
									BgL_arg1295z00_1596 = CDR(((obj_t) BgL_hnamesz00_1590));
									{
										obj_t BgL_hnamesz00_2151;
										obj_t BgL_hooksz00_2150;

										BgL_hooksz00_2150 = BgL_arg1292z00_1595;
										BgL_hnamesz00_2151 = BgL_arg1295z00_1596;
										BgL_hnamesz00_1590 = BgL_hnamesz00_2151;
										BgL_hooksz00_1589 = BgL_hooksz00_2150;
										goto BgL_zc3z04anonymousza31288ze3z87_1591;
									}
								}
							else
								{	/* Stackable/walk.scm 41 */
									obj_t BgL_arg1296z00_1597;

									BgL_arg1296z00_1597 = CAR(((obj_t) BgL_hnamesz00_1590));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1649z00zzstackable_walkz00,
										BGl_string1651z00zzstackable_walkz00, BgL_arg1296z00_1597);
								}
						}
				}
			}
			if (CBOOL(BGl_za2optimzd2stackablezf3za2z21zzengine_paramz00))
				{
					obj_t BgL_l1253z00_1602;

					BgL_l1253z00_1602 = BgL_globalsz00_17;
				BgL_zc3z04anonymousza31299ze3z87_1603:
					if (PAIRP(BgL_l1253z00_1602))
						{	/* Stackable/walk.scm 43 */
							{	/* Stackable/walk.scm 44 */
								obj_t BgL_gz00_1605;

								BgL_gz00_1605 = CAR(BgL_l1253z00_1602);
								{	/* Stackable/walk.scm 44 */
									BgL_valuez00_bglt BgL_sfunz00_1606;

									BgL_sfunz00_1606 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_gz00_1605)))->BgL_valuez00);
									{	/* Stackable/walk.scm 45 */
										obj_t BgL_arg1301z00_1607;

										BgL_arg1301z00_1607 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_sfunz00_1606)))->BgL_bodyz00);
										BGl_stackablez00zzstackable_walkz00(
											((BgL_nodez00_bglt) BgL_arg1301z00_1607));
									}
								}
							}
							{
								obj_t BgL_l1253z00_2166;

								BgL_l1253z00_2166 = CDR(BgL_l1253z00_1602);
								BgL_l1253z00_1602 = BgL_l1253z00_2166;
								goto BgL_zc3z04anonymousza31299ze3z87_1603;
							}
						}
					else
						{	/* Stackable/walk.scm 43 */
							((bool_t) 1);
						}
				}
			else
				{	/* Stackable/walk.scm 42 */
					((bool_t) 0);
				}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Stackable/walk.scm 47 */
					{	/* Stackable/walk.scm 47 */
						obj_t BgL_port1255z00_1612;

						{	/* Stackable/walk.scm 47 */
							obj_t BgL_res1617z00_1916;

							{	/* Stackable/walk.scm 47 */
								obj_t BgL_tmpz00_2171;

								BgL_tmpz00_2171 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1617z00_1916 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2171);
							}
							BgL_port1255z00_1612 = BgL_res1617z00_1916;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1255z00_1612);
						bgl_display_string(BGl_string1652z00zzstackable_walkz00,
							BgL_port1255z00_1612);
						{	/* Stackable/walk.scm 47 */
							obj_t BgL_arg1306z00_1613;

							{	/* Stackable/walk.scm 47 */
								bool_t BgL_test1700z00_2176;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Stackable/walk.scm 47 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Stackable/walk.scm 47 */
												BgL_test1700z00_2176 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Stackable/walk.scm 47 */
												BgL_test1700z00_2176 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Stackable/walk.scm 47 */
										BgL_test1700z00_2176 = ((bool_t) 0);
									}
								if (BgL_test1700z00_2176)
									{	/* Stackable/walk.scm 47 */
										BgL_arg1306z00_1613 = BGl_string1653z00zzstackable_walkz00;
									}
								else
									{	/* Stackable/walk.scm 47 */
										BgL_arg1306z00_1613 = BGl_string1654z00zzstackable_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1306z00_1613, BgL_port1255z00_1612);
						}
						bgl_display_string(BGl_string1655z00zzstackable_walkz00,
							BgL_port1255z00_1612);
						bgl_display_char(((unsigned char) 10), BgL_port1255z00_1612);
					}
					{	/* Stackable/walk.scm 47 */
						obj_t BgL_list1310z00_1619;

						BgL_list1310z00_1619 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1310z00_1619);
					}
				}
			else
				{	/* Stackable/walk.scm 47 */
					obj_t BgL_g1126z00_1620;

					BgL_g1126z00_1620 = BNIL;
					{
						obj_t BgL_hooksz00_1623;
						obj_t BgL_hnamesz00_1624;

						BgL_hooksz00_1623 = BgL_g1126z00_1620;
						BgL_hnamesz00_1624 = BNIL;
					BgL_zc3z04anonymousza31311ze3z87_1625:
						if (NULLP(BgL_hooksz00_1623))
							{	/* Stackable/walk.scm 47 */
								return BgL_globalsz00_17;
							}
						else
							{	/* Stackable/walk.scm 47 */
								bool_t BgL_test1705z00_2193;

								{	/* Stackable/walk.scm 47 */
									obj_t BgL_fun1320z00_1632;

									BgL_fun1320z00_1632 = CAR(((obj_t) BgL_hooksz00_1623));
									BgL_test1705z00_2193 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1320z00_1632)
										(BgL_fun1320z00_1632, BEOA));
								}
								if (BgL_test1705z00_2193)
									{	/* Stackable/walk.scm 47 */
										obj_t BgL_arg1316z00_1629;
										obj_t BgL_arg1317z00_1630;

										BgL_arg1316z00_1629 = CDR(((obj_t) BgL_hooksz00_1623));
										BgL_arg1317z00_1630 = CDR(((obj_t) BgL_hnamesz00_1624));
										{
											obj_t BgL_hnamesz00_2205;
											obj_t BgL_hooksz00_2204;

											BgL_hooksz00_2204 = BgL_arg1316z00_1629;
											BgL_hnamesz00_2205 = BgL_arg1317z00_1630;
											BgL_hnamesz00_1624 = BgL_hnamesz00_2205;
											BgL_hooksz00_1623 = BgL_hooksz00_2204;
											goto BgL_zc3z04anonymousza31311ze3z87_1625;
										}
									}
								else
									{	/* Stackable/walk.scm 47 */
										obj_t BgL_arg1319z00_1631;

										BgL_arg1319z00_1631 = CAR(((obj_t) BgL_hnamesz00_1624));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string1656z00zzstackable_walkz00,
											BgL_arg1319z00_1631);
									}
							}
					}
				}
		}

	}



/* &stackable-walk! */
	obj_t BGl_z62stackablezd2walkz12za2zzstackable_walkz00(obj_t BgL_envz00_2025,
		obj_t BgL_globalsz00_2026)
	{
		{	/* Stackable/walk.scm 40 */
			return BGl_stackablezd2walkz12zc0zzstackable_walkz00(BgL_globalsz00_2026);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzstackable_walkz00()
	{
		{	/* Stackable/walk.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzstackable_walkz00()
	{
		{	/* Stackable/walk.scm 16 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_stackablezd2envzd2zzstackable_walkz00,
				BGl_proc1657z00zzstackable_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string1658z00zzstackable_walkz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_markzd2stackablez12zd2envz12zzstackable_walkz00,
				BGl_proc1659z00zzstackable_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string1660z00zzstackable_walkz00);
		}

	}



/* &mark-stackable!1266 */
	obj_t BGl_z62markzd2stackablez121266za2zzstackable_walkz00(obj_t
		BgL_envz00_2031, obj_t BgL_nodez00_2032, obj_t BgL_stackablepz00_2033)
	{
		{	/* Stackable/walk.scm 85 */
			return BUNSPEC;
		}

	}



/* &stackable1260 */
	obj_t BGl_z62stackable1260z62zzstackable_walkz00(obj_t BgL_envz00_2034,
		obj_t BgL_nodez00_2035)
	{
		{	/* Stackable/walk.scm 52 */
			return
				BGl_walk0z00zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2035),
				BGl_stackablezd2envzd2zzstackable_walkz00);
		}

	}



/* stackable */
	obj_t BGl_stackablez00zzstackable_walkz00(BgL_nodez00_bglt BgL_nodez00_18)
	{
		{	/* Stackable/walk.scm 52 */
			{	/* Stackable/walk.scm 52 */
				obj_t BgL_method1261z00_1655;

				{	/* Stackable/walk.scm 52 */
					obj_t BgL_res1632z00_1969;

					{	/* Stackable/walk.scm 52 */
						long BgL_objzd2classzd2numz00_1934;

						{	/* Stackable/walk.scm 52 */
							long BgL_res1622z00_1937;

							BgL_res1622z00_1937 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_18));
							BgL_objzd2classzd2numz00_1934 = BgL_res1622z00_1937;
						}
						{	/* Stackable/walk.scm 52 */
							obj_t BgL_arg1813z00_1935;

							BgL_arg1813z00_1935 =
								PROCEDURE_REF(BGl_stackablezd2envzd2zzstackable_walkz00,
								(int) (((long) 1)));
							{	/* Stackable/walk.scm 52 */
								int BgL_offsetz00_1939;

								BgL_offsetz00_1939 = (int) (BgL_objzd2classzd2numz00_1934);
								{	/* Stackable/walk.scm 52 */
									long BgL_offsetz00_1940;

									BgL_offsetz00_1940 =
										((long) (BgL_offsetz00_1939) - OBJECT_TYPE);
									{	/* Stackable/walk.scm 52 */
										long BgL_modz00_1941;

										BgL_modz00_1941 =
											(BgL_offsetz00_1940 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Stackable/walk.scm 52 */
											long BgL_restz00_1943;

											BgL_restz00_1943 =
												(BgL_offsetz00_1940 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Stackable/walk.scm 52 */

												{	/* Stackable/walk.scm 52 */
													obj_t BgL_bucketz00_1945;

													BgL_bucketz00_1945 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1935), BgL_modz00_1941);
													BgL_res1632z00_1969 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1945), BgL_restz00_1943);
					}}}}}}}}
					BgL_method1261z00_1655 = BgL_res1632z00_1969;
				}
				return
					PROCEDURE_ENTRY(BgL_method1261z00_1655) (BgL_method1261z00_1655,
					((obj_t) BgL_nodez00_18), BEOA);
			}
		}

	}



/* &stackable */
	obj_t BGl_z62stackablez62zzstackable_walkz00(obj_t BgL_envz00_2029,
		obj_t BgL_nodez00_2030)
	{
		{	/* Stackable/walk.scm 52 */
			return
				BGl_stackablez00zzstackable_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2030));
		}

	}



/* mark-stackable! */
	obj_t BGl_markzd2stackablez12zc0zzstackable_walkz00(BgL_nodez00_bglt
		BgL_nodez00_21, bool_t BgL_stackablepz00_22)
	{
		{	/* Stackable/walk.scm 85 */
			{	/* Stackable/walk.scm 85 */
				obj_t BgL_method1267z00_1656;

				{	/* Stackable/walk.scm 85 */
					obj_t BgL_res1643z00_2006;

					{	/* Stackable/walk.scm 85 */
						long BgL_objzd2classzd2numz00_1971;

						{	/* Stackable/walk.scm 85 */
							long BgL_res1633z00_1974;

							BgL_res1633z00_1974 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_21));
							BgL_objzd2classzd2numz00_1971 = BgL_res1633z00_1974;
						}
						{	/* Stackable/walk.scm 85 */
							obj_t BgL_arg1813z00_1972;

							BgL_arg1813z00_1972 =
								PROCEDURE_REF
								(BGl_markzd2stackablez12zd2envz12zzstackable_walkz00,
								(int) (((long) 1)));
							{	/* Stackable/walk.scm 85 */
								int BgL_offsetz00_1976;

								BgL_offsetz00_1976 = (int) (BgL_objzd2classzd2numz00_1971);
								{	/* Stackable/walk.scm 85 */
									long BgL_offsetz00_1977;

									BgL_offsetz00_1977 =
										((long) (BgL_offsetz00_1976) - OBJECT_TYPE);
									{	/* Stackable/walk.scm 85 */
										long BgL_modz00_1978;

										BgL_modz00_1978 =
											(BgL_offsetz00_1977 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Stackable/walk.scm 85 */
											long BgL_restz00_1980;

											BgL_restz00_1980 =
												(BgL_offsetz00_1977 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Stackable/walk.scm 85 */

												{	/* Stackable/walk.scm 85 */
													obj_t BgL_bucketz00_1982;

													BgL_bucketz00_1982 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1972), BgL_modz00_1978);
													BgL_res1643z00_2006 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1982), BgL_restz00_1980);
					}}}}}}}}
					BgL_method1267z00_1656 = BgL_res1643z00_2006;
				}
				return
					PROCEDURE_ENTRY(BgL_method1267z00_1656) (BgL_method1267z00_1656,
					((obj_t) BgL_nodez00_21), BBOOL(BgL_stackablepz00_22), BEOA);
			}
		}

	}



/* &mark-stackable! */
	obj_t BGl_z62markzd2stackablez12za2zzstackable_walkz00(obj_t BgL_envz00_2036,
		obj_t BgL_nodez00_2037, obj_t BgL_stackablepz00_2038)
	{
		{	/* Stackable/walk.scm 85 */
			return
				BGl_markzd2stackablez12zc0zzstackable_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2037), CBOOL(BgL_stackablepz00_2038));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzstackable_walkz00()
	{
		{	/* Stackable/walk.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_stackablezd2envzd2zzstackable_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc1661z00zzstackable_walkz00,
				BGl_string1662z00zzstackable_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_stackablezd2envzd2zzstackable_walkz00, BGl_closurez00zzast_nodez00,
				BGl_proc1663z00zzstackable_walkz00,
				BGl_string1662z00zzstackable_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_markzd2stackablez12zd2envz12zzstackable_walkz00,
				BGl_closurez00zzast_nodez00, BGl_proc1664z00zzstackable_walkz00,
				BGl_string1665z00zzstackable_walkz00);
		}

	}



/* &mark-stackable!-clos1269 */
	obj_t BGl_z62markzd2stackablez12zd2clos1269z70zzstackable_walkz00(obj_t
		BgL_envz00_2043, obj_t BgL_nodez00_2044, obj_t BgL_stackablepz00_2045)
	{
		{	/* Stackable/walk.scm 91 */
			{	/* Stackable/walk.scm 92 */
				BgL_variablez00_bglt BgL_vz00_2070;

				BgL_vz00_2070 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt)
								((BgL_closurez00_bglt) BgL_nodez00_2044))))->BgL_variablez00);
				{	/* Stackable/walk.scm 92 */
					BgL_valuez00_bglt BgL_fz00_2071;

					BgL_fz00_2071 =
						(((BgL_variablez00_bglt) COBJECT(BgL_vz00_2070))->BgL_valuez00);
					{	/* Stackable/walk.scm 93 */

						if (CBOOL(BgL_stackablepz00_2045))
							{
								obj_t BgL_auxz00_2290;

								if (CBOOL(
										(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_fz00_2071)))->
											BgL_stackablez00)))
									{	/* Stackable/walk.scm 96 */
										BgL_auxz00_2290 = BgL_stackablepz00_2045;
									}
								else
									{	/* Stackable/walk.scm 96 */
										BgL_auxz00_2290 = BFALSE;
									}
								return
									((((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_fz00_2071)))->
										BgL_stackablez00) = ((obj_t) BgL_auxz00_2290), BUNSPEC);
							}
						else
							{	/* Stackable/walk.scm 95 */
								return
									((((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_fz00_2071)))->
										BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
							}
					}
				}
			}
		}

	}



/* &stackable-closure1265 */
	obj_t BGl_z62stackablezd2closure1265zb0zzstackable_walkz00(obj_t
		BgL_envz00_2046, obj_t BgL_nodez00_2047)
	{
		{	/* Stackable/walk.scm 79 */
			return
				BGl_markzd2stackablez12zc0zzstackable_walkz00(
				((BgL_nodez00_bglt)
					((BgL_closurez00_bglt) BgL_nodez00_2047)), ((bool_t) 0));
		}

	}



/* &stackable-app1263 */
	obj_t BGl_z62stackablezd2app1263zb0zzstackable_walkz00(obj_t BgL_envz00_2048,
		obj_t BgL_nodez00_2049)
	{
		{	/* Stackable/walk.scm 58 */
			{	/* Stackable/walk.scm 59 */
				BgL_valuez00_bglt BgL_fz00_2074;
				obj_t BgL_argsz00_2075;

				BgL_fz00_2074 =
					(((BgL_variablez00_bglt) COBJECT(
							(((BgL_varz00_bglt) COBJECT(
										(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2049)))->
											BgL_funz00)))->BgL_variablez00)))->BgL_valuez00);
				BgL_argsz00_2075 =
					(((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_nodez00_2049)))->
					BgL_argsz00);
				if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_fz00_2074),
						BGl_funz00zzast_varz00))
					{	/* Stackable/walk.scm 61 */
						if (
							((((BgL_funz00_bglt) COBJECT(
											((BgL_funz00_bglt) BgL_fz00_2074)))->
									BgL_argszd2noescapezd2) == CNST_TABLE_REF(((long) 1))))
							{
								obj_t BgL_l1256z00_2077;

								{	/* Stackable/walk.scm 65 */
									bool_t BgL_tmpz00_2316;

									BgL_l1256z00_2077 = BgL_argsz00_2075;
								BgL_zc3z04anonymousza31330ze3z87_2076:
									if (PAIRP(BgL_l1256z00_2077))
										{	/* Stackable/walk.scm 65 */
											{	/* Stackable/walk.scm 65 */
												obj_t BgL_az00_2078;

												BgL_az00_2078 = CAR(BgL_l1256z00_2077);
												BGl_markzd2stackablez12zc0zzstackable_walkz00(
													((BgL_nodez00_bglt) BgL_az00_2078), ((bool_t) 1));
											}
											{
												obj_t BgL_l1256z00_2322;

												BgL_l1256z00_2322 = CDR(BgL_l1256z00_2077);
												BgL_l1256z00_2077 = BgL_l1256z00_2322;
												goto BgL_zc3z04anonymousza31330ze3z87_2076;
											}
										}
									else
										{	/* Stackable/walk.scm 65 */
											BgL_tmpz00_2316 = ((bool_t) 1);
										}
									return BBOOL(BgL_tmpz00_2316);
								}
							}
						else
							{	/* Stackable/walk.scm 66 */
								bool_t BgL_test1712z00_2325;

								{	/* Stackable/walk.scm 66 */
									obj_t BgL_tmpz00_2326;

									BgL_tmpz00_2326 =
										(((BgL_funz00_bglt) COBJECT(
												((BgL_funz00_bglt) BgL_fz00_2074)))->
										BgL_argszd2noescapezd2);
									BgL_test1712z00_2325 = PAIRP(BgL_tmpz00_2326);
								}
								if (BgL_test1712z00_2325)
									{
										long BgL_iz00_2080;
										obj_t BgL_argsz00_2081;

										{	/* Stackable/walk.scm 67 */
											bool_t BgL_tmpz00_2330;

											BgL_iz00_2080 = ((long) 0);
											BgL_argsz00_2081 = BgL_argsz00_2075;
										BgL_loopz00_2079:
											if (PAIRP(BgL_argsz00_2081))
												{	/* Stackable/walk.scm 69 */
													{	/* Stackable/walk.scm 70 */
														obj_t BgL_arg1344z00_2082;
														obj_t BgL_arg1345z00_2083;

														BgL_arg1344z00_2082 = CAR(BgL_argsz00_2081);
														BgL_arg1345z00_2083 =
															BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BINT
															(BgL_iz00_2080),
															(((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																			BgL_fz00_2074)))->
																BgL_argszd2noescapezd2));
														BGl_markzd2stackablez12zc0zzstackable_walkz00((
																(BgL_nodez00_bglt) BgL_arg1344z00_2082),
															CBOOL(BgL_arg1345z00_2083));
													}
													{
														obj_t BgL_argsz00_2343;
														long BgL_iz00_2341;

														BgL_iz00_2341 = (BgL_iz00_2080 + ((long) 1));
														BgL_argsz00_2343 = CDR(BgL_argsz00_2081);
														BgL_argsz00_2081 = BgL_argsz00_2343;
														BgL_iz00_2080 = BgL_iz00_2341;
														goto BgL_loopz00_2079;
													}
												}
											else
												{	/* Stackable/walk.scm 69 */
													BgL_tmpz00_2330 = ((bool_t) 0);
												}
											return BBOOL(BgL_tmpz00_2330);
										}
									}
								else
									{	/* Stackable/walk.scm 66 */
										{	/* Stackable/walk.scm 73 */
											obj_t BgL_zc3z04anonymousza31349ze3z87_2084;

											{	/* Stackable/walk.scm 59 */
												int BgL_tmpz00_2346;

												BgL_tmpz00_2346 = (int) (((long) 0));
												BgL_zc3z04anonymousza31349ze3z87_2084 =
													MAKE_EL_PROCEDURE(BgL_tmpz00_2346);
											} BgL_zc3z04anonymousza31349ze3z87_2084;
										}
										return BgL_argsz00_2075;
									}
							}
					}
				else
					{
						obj_t BgL_l1258z00_2086;

						{	/* Stackable/walk.scm 74 */
							bool_t BgL_tmpz00_2349;

							BgL_l1258z00_2086 = BgL_argsz00_2075;
						BgL_zc3z04anonymousza31353ze3z87_2085:
							if (PAIRP(BgL_l1258z00_2086))
								{	/* Stackable/walk.scm 74 */
									{	/* Stackable/walk.scm 74 */
										obj_t BgL_az00_2087;

										BgL_az00_2087 = CAR(BgL_l1258z00_2086);
										BGl_markzd2stackablez12zc0zzstackable_walkz00(
											((BgL_nodez00_bglt) BgL_az00_2087), ((bool_t) 0));
									}
									{
										obj_t BgL_l1258z00_2355;

										BgL_l1258z00_2355 = CDR(BgL_l1258z00_2086);
										BgL_l1258z00_2086 = BgL_l1258z00_2355;
										goto BgL_zc3z04anonymousza31353ze3z87_2085;
									}
								}
							else
								{	/* Stackable/walk.scm 74 */
									BgL_tmpz00_2349 = ((bool_t) 1);
								}
							return BBOOL(BgL_tmpz00_2349);
						}
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzstackable_walkz00()
	{
		{	/* Stackable/walk.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 49974950),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			BGl_modulezd2initializa7ationz75zzast_walkz00(((long) 343174175),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1666z00zzstackable_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
