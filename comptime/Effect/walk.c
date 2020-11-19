/*===========================================================================*/
/*   (Effect/walk.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Effect/walk.scm) */
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

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_localzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                      *BgL_localzf2fromzf2_bglt;

	typedef struct BgL_globalzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                       *BgL_globalzf2fromzf2_bglt;


	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzeffect_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_effectzd2walkz12zc0zzeffect_walkz00(obj_t,
		bool_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzeffect_walkz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzeffect_walkz00();
	static obj_t BGl_z62effectzd2walkz12za2zzeffect_walkz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	static bool_t BGl_iteratezd2tozd2fixzd2pointz12zc0zzeffect_walkz00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern bool_t
		BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(BgL_nodez00_bglt);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzeffect_walkz00 = BUNSPEC;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzeffect_walkz00();
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31332ze3ze5zzeffect_walkz00(obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2effectzd2zzeffect_walkz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_feffectz12z12zzeffect_feffectz00(obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzeffect_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_localzf2fromzf2zzeffect_cgraphz00;
	extern obj_t BGl_feffectz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzeffect_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzeffect_walkz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzeffect_walkz00();
	extern obj_t
		BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(BgL_variablez00_bglt);
	extern obj_t BGl_getzd2varzf2allz20zzeffect_cgraphz00();
	static obj_t BGl_z62writezd2effectzb0zzeffect_walkz00(obj_t, obj_t);
	extern obj_t BGl_globalzf2fromzf2zzeffect_cgraphz00;
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string1698z00zzeffect_walkz00,
		BgL_bgl_string1698za700za7za7e1727za7, "Effect", 6);
	      DEFINE_STRING(BGl_string1699z00zzeffect_walkz00,
		BgL_bgl_string1699za700za7za7e1728za7, "   . ", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_effectzd2walkz12zd2envz12zzeffect_walkz00,
		BgL_bgl_za762effectza7d2walk1729z00,
		BGl_z62effectzd2walkz12za2zzeffect_walkz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_resetzd2effectzd2tablesz12zd2envzc0zzeffect_cgraphz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_writezd2effectzd2envz00zzeffect_walkz00,
		BgL_bgl_za762writeza7d2effec1730z00,
		BGl_z62writezd2effectzb0zzeffect_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1700z00zzeffect_walkz00,
		BgL_bgl_string1700za700za7za7e1731za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1701z00zzeffect_walkz00,
		BgL_bgl_string1701za700za7za7e1732za7, " error", 6);
	      DEFINE_STRING(BGl_string1702z00zzeffect_walkz00,
		BgL_bgl_string1702za700za7za7e1733za7, "s", 1);
	      DEFINE_STRING(BGl_string1703z00zzeffect_walkz00,
		BgL_bgl_string1703za700za7za7e1734za7, "", 0);
	      DEFINE_STRING(BGl_string1704z00zzeffect_walkz00,
		BgL_bgl_string1704za700za7za7e1735za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1705z00zzeffect_walkz00,
		BgL_bgl_string1705za700za7za7e1736za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1706z00zzeffect_walkz00,
		BgL_bgl_string1706za700za7za7e1737za7, " (effect", 8);
	      DEFINE_STRING(BGl_string1707z00zzeffect_walkz00,
		BgL_bgl_string1707za700za7za7e1738za7, "   (", 4);
	      DEFINE_STRING(BGl_string1708z00zzeffect_walkz00,
		BgL_bgl_string1708za700za7za7e1739za7, ")", 1);
	      DEFINE_STRING(BGl_string1709z00zzeffect_walkz00,
		BgL_bgl_string1709za700za7za7e1740za7, " (read ", 7);
	      DEFINE_STRING(BGl_string1710z00zzeffect_walkz00,
		BgL_bgl_string1710za700za7za7e1741za7, " (write ", 8);
	      DEFINE_STRING(BGl_string1711z00zzeffect_walkz00,
		BgL_bgl_string1711za700za7za7e1742za7, "))", 2);
	      DEFINE_STRING(BGl_string1712z00zzeffect_walkz00,
		BgL_bgl_string1712za700za7za7e1743za7, ".sch", 4);
	      DEFINE_STRING(BGl_string1713z00zzeffect_walkz00,
		BgL_bgl_string1713za700za7za7e1744za7, "(directives\n (pragma\n", 21);
	      DEFINE_STRING(BGl_string1714z00zzeffect_walkz00,
		BgL_bgl_string1714za700za7za7e1745za7, " ))\n", 4);
	      DEFINE_STRING(BGl_string1715z00zzeffect_walkz00,
		BgL_bgl_string1715za700za7za7e1746za7, "write-effect", 12);
	      DEFINE_STRING(BGl_string1716z00zzeffect_walkz00,
		BgL_bgl_string1716za700za7za7e1747za7, "Can't open output file", 22);
	      DEFINE_STRING(BGl_string1717z00zzeffect_walkz00,
		BgL_bgl_string1717za700za7za7e1748za7, "effect_walk", 11);
	      DEFINE_STRING(BGl_string1718z00zzeffect_walkz00,
		BgL_bgl_string1718za700za7za7e1749za7,
		"top (reset-effect-tables!) pass-started ", 40);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzeffect_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzeffect_walkz00(long
		BgL_checksumz00_1893, char *BgL_fromz00_1894)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzeffect_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzeffect_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzeffect_walkz00();
					BGl_libraryzd2moduleszd2initz00zzeffect_walkz00();
					BGl_cnstzd2initzd2zzeffect_walkz00();
					BGl_importedzd2moduleszd2initz00zzeffect_walkz00();
					return BGl_methodzd2initzd2zzeffect_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzeffect_walkz00()
	{
		{	/* Effect/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"effect_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"effect_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"effect_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "effect_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "effect_walk");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "effect_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "effect_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"effect_walk");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "effect_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"effect_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"effect_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzeffect_walkz00()
	{
		{	/* Effect/walk.scm 15 */
			{	/* Effect/walk.scm 15 */
				obj_t BgL_cportz00_1878;

				{	/* Effect/walk.scm 15 */
					obj_t BgL_stringz00_1886;

					BgL_stringz00_1886 = BGl_string1718z00zzeffect_walkz00;
					{	/* Effect/walk.scm 15 */
						obj_t BgL_startz00_1887;

						BgL_startz00_1887 = BINT(((long) 0));
						{	/* Effect/walk.scm 15 */
							obj_t BgL_endz00_1888;

							BgL_endz00_1888 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1886)));
							{	/* Effect/walk.scm 15 */

								BgL_cportz00_1878 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1886, BgL_startz00_1887, BgL_endz00_1888);
				}}}}
				{
					long BgL_iz00_1879;

					BgL_iz00_1879 = ((long) 2);
				BgL_loopz00_1880:
					if ((BgL_iz00_1879 == ((long) -1)))
						{	/* Effect/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Effect/walk.scm 15 */
							{	/* Effect/walk.scm 15 */
								obj_t BgL_arg1725z00_1882;

								{	/* Effect/walk.scm 15 */

									{	/* Effect/walk.scm 15 */
										obj_t BgL_locationz00_1884;

										BgL_locationz00_1884 = BBOOL(((bool_t) 0));
										{	/* Effect/walk.scm 15 */

											BgL_arg1725z00_1882 =
												BGl_readz00zz__readerz00(BgL_cportz00_1878,
												BgL_locationz00_1884);
										}
									}
								}
								{	/* Effect/walk.scm 15 */
									int BgL_tmpz00_1923;

									BgL_tmpz00_1923 = (int) (BgL_iz00_1879);
									CNST_TABLE_SET(BgL_tmpz00_1923, BgL_arg1725z00_1882);
							}}
							{	/* Effect/walk.scm 15 */
								int BgL_auxz00_1885;

								BgL_auxz00_1885 = (int) ((BgL_iz00_1879 - ((long) 1)));
								{
									long BgL_iz00_1928;

									BgL_iz00_1928 = (long) (BgL_auxz00_1885);
									BgL_iz00_1879 = BgL_iz00_1928;
									goto BgL_loopz00_1880;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzeffect_walkz00()
	{
		{	/* Effect/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* effect-walk! */
	BGL_EXPORTED_DEF obj_t BGl_effectzd2walkz12zc0zzeffect_walkz00(obj_t
		BgL_globalsz00_3, bool_t BgL_feffectz00_4)
	{
		{	/* Effect/walk.scm 33 */
			{	/* Effect/walk.scm 34 */
				obj_t BgL_list1259z00_1456;

				{	/* Effect/walk.scm 34 */
					obj_t BgL_arg1263z00_1457;

					{	/* Effect/walk.scm 34 */
						obj_t BgL_arg1268z00_1458;

						BgL_arg1268z00_1458 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1263z00_1457 =
							MAKE_YOUNG_PAIR(BGl_string1698z00zzeffect_walkz00,
							BgL_arg1268z00_1458);
					}
					BgL_list1259z00_1456 =
						MAKE_YOUNG_PAIR(BGl_string1699z00zzeffect_walkz00,
						BgL_arg1263z00_1457);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1259z00_1456);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1698z00zzeffect_walkz00;
			{	/* Effect/walk.scm 34 */
				obj_t BgL_g1110z00_1459;

				BgL_g1110z00_1459 = BNIL;
				{
					obj_t BgL_hooksz00_1462;
					obj_t BgL_hnamesz00_1463;

					BgL_hooksz00_1462 = BgL_g1110z00_1459;
					BgL_hnamesz00_1463 = BNIL;
				BgL_zc3z04anonymousza31269ze3z87_1464:
					if (NULLP(BgL_hooksz00_1462))
						{	/* Effect/walk.scm 34 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Effect/walk.scm 34 */
							bool_t BgL_test1754z00_1941;

							{	/* Effect/walk.scm 34 */
								obj_t BgL_fun1276z00_1471;

								BgL_fun1276z00_1471 = CAR(((obj_t) BgL_hooksz00_1462));
								BgL_test1754z00_1941 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1276z00_1471)
									(BgL_fun1276z00_1471, BEOA));
							}
							if (BgL_test1754z00_1941)
								{	/* Effect/walk.scm 34 */
									obj_t BgL_arg1273z00_1468;
									obj_t BgL_arg1274z00_1469;

									BgL_arg1273z00_1468 = CDR(((obj_t) BgL_hooksz00_1462));
									BgL_arg1274z00_1469 = CDR(((obj_t) BgL_hnamesz00_1463));
									{
										obj_t BgL_hnamesz00_1953;
										obj_t BgL_hooksz00_1952;

										BgL_hooksz00_1952 = BgL_arg1273z00_1468;
										BgL_hnamesz00_1953 = BgL_arg1274z00_1469;
										BgL_hnamesz00_1463 = BgL_hnamesz00_1953;
										BgL_hooksz00_1462 = BgL_hooksz00_1952;
										goto BgL_zc3z04anonymousza31269ze3z87_1464;
									}
								}
							else
								{	/* Effect/walk.scm 34 */
									obj_t BgL_arg1275z00_1470;

									BgL_arg1275z00_1470 = CAR(((obj_t) BgL_hnamesz00_1463));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1698z00zzeffect_walkz00,
										BGl_string1700z00zzeffect_walkz00, BgL_arg1275z00_1470);
								}
						}
				}
			}
			{
				obj_t BgL_l1241z00_1475;

				BgL_l1241z00_1475 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31278ze3z87_1476:
				if (PAIRP(BgL_l1241z00_1475))
					{	/* Effect/walk.scm 37 */
						{	/* Effect/walk.scm 38 */
							obj_t BgL_globalz00_1478;

							BgL_globalz00_1478 = CAR(BgL_l1241z00_1475);
							BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(
								((BgL_variablez00_bglt) BgL_globalz00_1478));
						}
						{
							obj_t BgL_l1241z00_1962;

							BgL_l1241z00_1962 = CDR(BgL_l1241z00_1475);
							BgL_l1241z00_1475 = BgL_l1241z00_1962;
							goto BgL_zc3z04anonymousza31278ze3z87_1476;
						}
					}
				else
					{	/* Effect/walk.scm 37 */
						((bool_t) 1);
					}
			}
			BGl_iteratezd2tozd2fixzd2pointz12zc0zzeffect_walkz00
				(BGl_getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00());
			{	/* Effect/walk.scm 46 */
				obj_t BgL_g1245z00_1482;

				BgL_g1245z00_1482 = BGl_getzd2varzf2allz20zzeffect_cgraphz00();
				{
					obj_t BgL_l1243z00_1484;

					BgL_l1243z00_1484 = BgL_g1245z00_1482;
				BgL_zc3z04anonymousza31282ze3z87_1485:
					if (PAIRP(BgL_l1243z00_1484))
						{	/* Effect/walk.scm 50 */
							{	/* Effect/walk.scm 47 */
								obj_t BgL_varz00_1487;

								BgL_varz00_1487 = CAR(BgL_l1243z00_1484);
								{	/* Effect/walk.scm 47 */
									BgL_valuez00_bglt BgL_funz00_1488;

									BgL_funz00_1488 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_varz00_1487)))->
										BgL_valuez00);
									if (((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_funz00_1488)))->BgL_sidezd2effectzd2) ==
											BUNSPEC))
										{	/* Effect/walk.scm 48 */
											((((BgL_funz00_bglt) COBJECT(
															((BgL_funz00_bglt) BgL_funz00_1488)))->
													BgL_sidezd2effectzd2) = ((obj_t) BFALSE), BUNSPEC);
										}
									else
										{	/* Effect/walk.scm 48 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1243z00_1978;

								BgL_l1243z00_1978 = CDR(BgL_l1243z00_1484);
								BgL_l1243z00_1484 = BgL_l1243z00_1978;
								goto BgL_zc3z04anonymousza31282ze3z87_1485;
							}
						}
					else
						{	/* Effect/walk.scm 50 */
							((bool_t) 1);
						}
				}
			}
			{
				obj_t BgL_l1246z00_1495;

				BgL_l1246z00_1495 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31288ze3z87_1496:
				if (PAIRP(BgL_l1246z00_1495))
					{	/* Effect/walk.scm 53 */
						{	/* Effect/walk.scm 54 */
							obj_t BgL_globalz00_1498;

							BgL_globalz00_1498 = CAR(BgL_l1246z00_1495);
							{	/* Effect/walk.scm 54 */
								obj_t BgL_arg1290z00_1499;

								BgL_arg1290z00_1499 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_globalz00_1498))))->
													BgL_valuez00))))->BgL_bodyz00);
								BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00((
										(BgL_nodez00_bglt) BgL_arg1290z00_1499));
							}
						}
						{
							obj_t BgL_l1246z00_1990;

							BgL_l1246z00_1990 = CDR(BgL_l1246z00_1495);
							BgL_l1246z00_1495 = BgL_l1246z00_1990;
							goto BgL_zc3z04anonymousza31288ze3z87_1496;
						}
					}
				else
					{	/* Effect/walk.scm 53 */
						((bool_t) 1);
					}
			}
			if (BgL_feffectz00_4)
				{	/* Effect/walk.scm 59 */
					BGl_feffectz12z12zzeffect_feffectz00(BgL_globalsz00_3);
				}
			else
				{	/* Effect/walk.scm 59 */
					BFALSE;
				}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Effect/walk.scm 62 */
					{	/* Effect/walk.scm 62 */
						obj_t BgL_port1248z00_1505;

						{	/* Effect/walk.scm 62 */
							obj_t BgL_res1676z00_1804;

							{	/* Effect/walk.scm 62 */
								obj_t BgL_tmpz00_1997;

								BgL_tmpz00_1997 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1676z00_1804 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1997);
							}
							BgL_port1248z00_1505 = BgL_res1676z00_1804;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1248z00_1505);
						bgl_display_string(BGl_string1701z00zzeffect_walkz00,
							BgL_port1248z00_1505);
						{	/* Effect/walk.scm 62 */
							obj_t BgL_arg1295z00_1506;

							{	/* Effect/walk.scm 62 */
								bool_t BgL_test1763z00_2002;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Effect/walk.scm 62 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Effect/walk.scm 62 */
												BgL_test1763z00_2002 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Effect/walk.scm 62 */
												BgL_test1763z00_2002 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Effect/walk.scm 62 */
										BgL_test1763z00_2002 = ((bool_t) 0);
									}
								if (BgL_test1763z00_2002)
									{	/* Effect/walk.scm 62 */
										BgL_arg1295z00_1506 = BGl_string1702z00zzeffect_walkz00;
									}
								else
									{	/* Effect/walk.scm 62 */
										BgL_arg1295z00_1506 = BGl_string1703z00zzeffect_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1295z00_1506, BgL_port1248z00_1505);
						}
						bgl_display_string(BGl_string1704z00zzeffect_walkz00,
							BgL_port1248z00_1505);
						bgl_display_char(((unsigned char) 10), BgL_port1248z00_1505);
					}
					{	/* Effect/walk.scm 62 */
						obj_t BgL_list1299z00_1512;

						BgL_list1299z00_1512 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1299z00_1512);
					}
				}
			else
				{	/* Effect/walk.scm 62 */
					obj_t BgL_g1112z00_1513;
					obj_t BgL_g1116z00_1514;

					{	/* Effect/walk.scm 62 */
						obj_t BgL_list1310z00_1527;

						BgL_list1310z00_1527 =
							MAKE_YOUNG_PAIR
							(BGl_resetzd2effectzd2tablesz12zd2envzc0zzeffect_cgraphz00, BNIL);
						BgL_g1112z00_1513 = BgL_list1310z00_1527;
					}
					BgL_g1116z00_1514 = CNST_TABLE_REF(((long) 1));
					{
						obj_t BgL_hooksz00_1516;
						obj_t BgL_hnamesz00_1517;

						BgL_hooksz00_1516 = BgL_g1112z00_1513;
						BgL_hnamesz00_1517 = BgL_g1116z00_1514;
					BgL_zc3z04anonymousza31300ze3z87_1518:
						if (NULLP(BgL_hooksz00_1516))
							{	/* Effect/walk.scm 62 */
								return BgL_globalsz00_3;
							}
						else
							{	/* Effect/walk.scm 62 */
								bool_t BgL_test1767z00_2021;

								{	/* Effect/walk.scm 62 */
									obj_t BgL_fun1309z00_1525;

									BgL_fun1309z00_1525 = CAR(((obj_t) BgL_hooksz00_1516));
									BgL_test1767z00_2021 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1309z00_1525)
										(BgL_fun1309z00_1525, BEOA));
								}
								if (BgL_test1767z00_2021)
									{	/* Effect/walk.scm 62 */
										obj_t BgL_arg1304z00_1522;
										obj_t BgL_arg1306z00_1523;

										BgL_arg1304z00_1522 = CDR(((obj_t) BgL_hooksz00_1516));
										BgL_arg1306z00_1523 = CDR(((obj_t) BgL_hnamesz00_1517));
										{
											obj_t BgL_hnamesz00_2033;
											obj_t BgL_hooksz00_2032;

											BgL_hooksz00_2032 = BgL_arg1304z00_1522;
											BgL_hnamesz00_2033 = BgL_arg1306z00_1523;
											BgL_hnamesz00_1517 = BgL_hnamesz00_2033;
											BgL_hooksz00_1516 = BgL_hooksz00_2032;
											goto BgL_zc3z04anonymousza31300ze3z87_1518;
										}
									}
								else
									{	/* Effect/walk.scm 62 */
										obj_t BgL_arg1307z00_1524;

										BgL_arg1307z00_1524 = CAR(((obj_t) BgL_hnamesz00_1517));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string1705z00zzeffect_walkz00, BgL_arg1307z00_1524);
									}
							}
					}
				}
		}

	}



/* &effect-walk! */
	obj_t BGl_z62effectzd2walkz12za2zzeffect_walkz00(obj_t BgL_envz00_1869,
		obj_t BgL_globalsz00_1870, obj_t BgL_feffectz00_1871)
	{
		{	/* Effect/walk.scm 33 */
			return
				BGl_effectzd2walkz12zc0zzeffect_walkz00(BgL_globalsz00_1870,
				CBOOL(BgL_feffectz00_1871));
		}

	}



/* iterate-to-fix-point! */
	bool_t BGl_iteratezd2tozd2fixzd2pointz12zc0zzeffect_walkz00(obj_t BgL_wz00_5)
	{
		{	/* Effect/walk.scm 67 */
			if (PAIRP(BgL_wz00_5))
				{
					obj_t BgL_l1249z00_1530;

					BgL_l1249z00_1530 = BgL_wz00_5;
				BgL_zc3z04anonymousza31312ze3z87_1531:
					if (PAIRP(BgL_l1249z00_1530))
						{	/* Effect/walk.scm 69 */
							{	/* Effect/walk.scm 71 */
								obj_t BgL_varz00_1533;

								BgL_varz00_1533 = CAR(BgL_l1249z00_1530);
								{	/* Effect/walk.scm 71 */
									BgL_valuez00_bglt BgL_funz00_1534;

									BgL_funz00_1534 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_varz00_1533)))->
										BgL_valuez00);
									if (((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_funz00_1534)))->BgL_sidezd2effectzd2) ==
											BTRUE))
										{	/* Effect/walk.scm 72 */
											((bool_t) 0);
										}
									else
										{	/* Effect/walk.scm 72 */
											((((BgL_funz00_bglt) COBJECT(
															((BgL_funz00_bglt) BgL_funz00_1534)))->
													BgL_sidezd2effectzd2) = ((obj_t) BTRUE), BUNSPEC);
											if (BGl_isazf3zf3zz__objectz00(BgL_varz00_1533,
													BGl_localzf2fromzf2zzeffect_cgraphz00))
												{	/* Effect/walk.scm 76 */
													obj_t BgL_arg1317z00_1538;

													{
														BgL_localzf2fromzf2_bglt BgL_auxz00_2054;

														{
															obj_t BgL_auxz00_2055;

															{	/* Effect/walk.scm 76 */
																BgL_objectz00_bglt BgL_tmpz00_2056;

																BgL_tmpz00_2056 =
																	((BgL_objectz00_bglt)
																	((BgL_localz00_bglt) BgL_varz00_1533));
																BgL_auxz00_2055 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2056);
															}
															BgL_auxz00_2054 =
																((BgL_localzf2fromzf2_bglt) BgL_auxz00_2055);
														}
														BgL_arg1317z00_1538 =
															(((BgL_localzf2fromzf2_bglt)
																COBJECT(BgL_auxz00_2054))->BgL_fromz00);
													}
													BGl_iteratezd2tozd2fixzd2pointz12zc0zzeffect_walkz00
														(BgL_arg1317z00_1538);
												}
											else
												{	/* Effect/walk.scm 75 */
													if (BGl_isazf3zf3zz__objectz00(BgL_varz00_1533,
															BGl_globalzf2fromzf2zzeffect_cgraphz00))
														{	/* Effect/walk.scm 78 */
															obj_t BgL_arg1319z00_1540;

															{
																BgL_globalzf2fromzf2_bglt BgL_auxz00_2065;

																{
																	obj_t BgL_auxz00_2066;

																	{	/* Effect/walk.scm 78 */
																		BgL_objectz00_bglt BgL_tmpz00_2067;

																		BgL_tmpz00_2067 =
																			((BgL_objectz00_bglt)
																			((BgL_globalz00_bglt) BgL_varz00_1533));
																		BgL_auxz00_2066 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2067);
																	}
																	BgL_auxz00_2065 =
																		((BgL_globalzf2fromzf2_bglt)
																		BgL_auxz00_2066);
																}
																BgL_arg1319z00_1540 =
																	(((BgL_globalzf2fromzf2_bglt)
																		COBJECT(BgL_auxz00_2065))->BgL_fromz00);
															}
															BGl_iteratezd2tozd2fixzd2pointz12zc0zzeffect_walkz00
																(BgL_arg1319z00_1540);
														}
													else
														{	/* Effect/walk.scm 77 */
															((bool_t) 0);
														}
												}
										}
								}
							}
							{
								obj_t BgL_l1249z00_2074;

								BgL_l1249z00_2074 = CDR(BgL_l1249z00_1530);
								BgL_l1249z00_1530 = BgL_l1249z00_2074;
								goto BgL_zc3z04anonymousza31312ze3z87_1531;
							}
						}
					else
						{	/* Effect/walk.scm 69 */
							return ((bool_t) 1);
						}
				}
			else
				{	/* Effect/walk.scm 68 */
					return ((bool_t) 0);
				}
		}

	}



/* write-effect */
	BGL_EXPORTED_DEF obj_t BGl_writezd2effectzd2zzeffect_walkz00(obj_t
		BgL_globalsz00_6)
	{
		{	/* Effect/walk.scm 84 */
			{
				obj_t BgL_gz00_1576;

				{	/* Effect/walk.scm 95 */
					obj_t BgL_onamez00_1545;

					if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
						{	/* Effect/walk.scm 95 */
							BgL_onamez00_1545 = BGl_za2destza2z00zzengine_paramz00;
						}
					else
						{	/* Effect/walk.scm 97 */
							bool_t BgL_test1775z00_2078;

							if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
								{	/* Effect/walk.scm 97 */
									obj_t BgL_tmpz00_2081;

									BgL_tmpz00_2081 =
										CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
									BgL_test1775z00_2078 = STRINGP(BgL_tmpz00_2081);
								}
							else
								{	/* Effect/walk.scm 97 */
									BgL_test1775z00_2078 = ((bool_t) 0);
								}
							if (BgL_test1775z00_2078)
								{	/* Effect/walk.scm 97 */
									BgL_onamez00_1545 =
										string_append(BGl_prefixz00zz__osz00(CAR
											(BGl_za2srczd2filesza2zd2zzengine_paramz00)),
										BGl_string1712z00zzeffect_walkz00);
								}
							else
								{	/* Effect/walk.scm 97 */
									BgL_onamez00_1545 = BFALSE;
								}
						}
					{	/* Effect/walk.scm 95 */
						obj_t BgL_portz00_1546;

						if (STRINGP(BgL_onamez00_1545))
							{	/* Effect/walk.scm 101 */

								BgL_portz00_1546 =
									BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_onamez00_1545, BTRUE);
							}
						else
							{	/* Effect/walk.scm 102 */
								obj_t BgL_res1693z00_1852;

								{	/* Effect/walk.scm 102 */
									obj_t BgL_tmpz00_2090;

									BgL_tmpz00_2090 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1693z00_1852 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2090);
								}
								BgL_portz00_1546 = BgL_res1693z00_1852;
							}
						{	/* Effect/walk.scm 100 */

							if (OUTPUT_PORTP(BgL_portz00_1546))
								{	/* Effect/walk.scm 105 */
									obj_t BgL_exitd1118z00_1548;

									BgL_exitd1118z00_1548 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Effect/walk.scm 110 */
										obj_t BgL_zc3z04anonymousza31332ze3z87_1873;

										BgL_zc3z04anonymousza31332ze3z87_1873 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31332ze3ze5zzeffect_walkz00,
											(int) (((long) 0)), (int) (((long) 1)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31332ze3z87_1873,
											(int) (((long) 0)), BgL_portz00_1546);
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1118z00_1548,
											BgL_zc3z04anonymousza31332ze3z87_1873);
										{	/* Effect/walk.scm 107 */
											obj_t BgL_tmp1120z00_1550;

											{	/* Effect/walk.scm 107 */
												obj_t BgL_arg1326z00_1551;

												{	/* Effect/walk.scm 107 */
													obj_t BgL_res1695z00_1857;

													{	/* Effect/walk.scm 107 */
														obj_t BgL_tmpz00_2102;

														BgL_tmpz00_2102 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res1695z00_1857 =
															BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2102);
													}
													BgL_arg1326z00_1551 = BgL_res1695z00_1857;
												}
												bgl_display_string(BGl_string1713z00zzeffect_walkz00,
													BgL_arg1326z00_1551);
											}
											{
												obj_t BgL_l1252z00_1553;

												BgL_l1252z00_1553 = BgL_globalsz00_6;
											BgL_zc3z04anonymousza31327ze3z87_1554:
												if (PAIRP(BgL_l1252z00_1553))
													{	/* Effect/walk.scm 108 */
														BgL_gz00_1576 = CAR(BgL_l1252z00_1553);
														{	/* Effect/walk.scm 86 */
															obj_t BgL_fez00_1578;

															BgL_fez00_1578 =
																(((BgL_funz00_bglt) COBJECT(
																		((BgL_funz00_bglt)
																			(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							BgL_gz00_1576)))->
																				BgL_valuez00))))->BgL_effectz00);
															if (BGl_isazf3zf3zz__objectz00(BgL_fez00_1578,
																	BGl_feffectz00zzast_varz00))
																{	/* Effect/walk.scm 89 */
																	bool_t BgL_test1782z00_2114;

																	if (
																		((((BgL_feffectz00_bglt) COBJECT(
																						((BgL_feffectz00_bglt)
																							BgL_fez00_1578)))->BgL_readz00) ==
																			CNST_TABLE_REF(((long) 2))))
																		{	/* Effect/walk.scm 89 */
																			BgL_test1782z00_2114 =
																				(
																				(((BgL_feffectz00_bglt) COBJECT(
																							((BgL_feffectz00_bglt)
																								BgL_fez00_1578)))->
																					BgL_writez00) ==
																				CNST_TABLE_REF(((long) 2)));
																		}
																	else
																		{	/* Effect/walk.scm 89 */
																			BgL_test1782z00_2114 = ((bool_t) 0);
																		}
																	if (BgL_test1782z00_2114)
																		{	/* Effect/walk.scm 89 */
																			BFALSE;
																		}
																	else
																		{	/* Effect/walk.scm 89 */
																			{	/* Effect/walk.scm 91 */
																				obj_t BgL_arg1367z00_1586;

																				BgL_arg1367z00_1586 =
																					BGl_shapez00zztools_shapez00
																					(BgL_gz00_1576);
																				{	/* Effect/walk.scm 91 */
																					obj_t BgL_list1368z00_1587;

																					{	/* Effect/walk.scm 91 */
																						obj_t BgL_arg1370z00_1588;

																						{	/* Effect/walk.scm 91 */
																							obj_t BgL_arg1371z00_1589;

																							BgL_arg1371z00_1589 =
																								MAKE_YOUNG_PAIR
																								(BGl_string1706z00zzeffect_walkz00,
																								BNIL);
																							BgL_arg1370z00_1588 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1367z00_1586,
																								BgL_arg1371z00_1589);
																						}
																						BgL_list1368z00_1587 =
																							MAKE_YOUNG_PAIR
																							(BGl_string1707z00zzeffect_walkz00,
																							BgL_arg1370z00_1588);
																					}
																					BGl_displayza2za2zz__r4_output_6_10_3z00
																						(BgL_list1368z00_1587);
																				}
																			}
																			if (NULLP(
																					(((BgL_feffectz00_bglt) COBJECT(
																								((BgL_feffectz00_bglt)
																									BgL_fez00_1578)))->
																						BgL_readz00)))
																				{	/* Effect/walk.scm 92 */
																					BFALSE;
																				}
																			else
																				{	/* Effect/walk.scm 92 */
																					obj_t BgL_arg1381z00_1592;

																					BgL_arg1381z00_1592 =
																						(((BgL_feffectz00_bglt) COBJECT(
																								((BgL_feffectz00_bglt)
																									BgL_fez00_1578)))->
																						BgL_readz00);
																					{	/* Effect/walk.scm 92 */
																						obj_t BgL_list1382z00_1593;

																						{	/* Effect/walk.scm 92 */
																							obj_t BgL_arg1383z00_1594;

																							{	/* Effect/walk.scm 92 */
																								obj_t BgL_arg1384z00_1595;

																								BgL_arg1384z00_1595 =
																									MAKE_YOUNG_PAIR
																									(BGl_string1708z00zzeffect_walkz00,
																									BNIL);
																								BgL_arg1383z00_1594 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1381z00_1592,
																									BgL_arg1384z00_1595);
																							}
																							BgL_list1382z00_1593 =
																								MAKE_YOUNG_PAIR
																								(BGl_string1709z00zzeffect_walkz00,
																								BgL_arg1383z00_1594);
																						}
																						BGl_displayza2za2zz__r4_output_6_10_3z00
																							(BgL_list1382z00_1593);
																					}
																				}
																			if (NULLP(
																					(((BgL_feffectz00_bglt) COBJECT(
																								((BgL_feffectz00_bglt)
																									BgL_fez00_1578)))->
																						BgL_writez00)))
																				{	/* Effect/walk.scm 93 */
																					BFALSE;
																				}
																			else
																				{	/* Effect/walk.scm 93 */
																					obj_t BgL_arg1394z00_1599;

																					BgL_arg1394z00_1599 =
																						(((BgL_feffectz00_bglt) COBJECT(
																								((BgL_feffectz00_bglt)
																									BgL_fez00_1578)))->
																						BgL_writez00);
																					{	/* Effect/walk.scm 93 */
																						obj_t BgL_list1395z00_1600;

																						{	/* Effect/walk.scm 93 */
																							obj_t BgL_arg1396z00_1601;

																							{	/* Effect/walk.scm 93 */
																								obj_t BgL_arg1417z00_1602;

																								BgL_arg1417z00_1602 =
																									MAKE_YOUNG_PAIR
																									(BGl_string1708z00zzeffect_walkz00,
																									BNIL);
																								BgL_arg1396z00_1601 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1394z00_1599,
																									BgL_arg1417z00_1602);
																							}
																							BgL_list1395z00_1600 =
																								MAKE_YOUNG_PAIR
																								(BGl_string1710z00zzeffect_walkz00,
																								BgL_arg1396z00_1601);
																						}
																						BGl_displayza2za2zz__r4_output_6_10_3z00
																							(BgL_list1395z00_1600);
																					}
																				}
																			{	/* Effect/walk.scm 94 */
																				obj_t BgL_port1251z00_1604;

																				{	/* Effect/walk.scm 94 */
																					obj_t BgL_res1688z00_1839;

																					{	/* Effect/walk.scm 94 */
																						obj_t BgL_tmpz00_2149;

																						BgL_tmpz00_2149 =
																							BGL_CURRENT_DYNAMIC_ENV();
																						BgL_res1688z00_1839 =
																							BGL_ENV_CURRENT_OUTPUT_PORT
																							(BgL_tmpz00_2149);
																					}
																					BgL_port1251z00_1604 =
																						BgL_res1688z00_1839;
																				}
																				bgl_display_string
																					(BGl_string1711z00zzeffect_walkz00,
																					BgL_port1251z00_1604);
																				bgl_display_char(((unsigned char) 10),
																					BgL_port1251z00_1604);
																}}}
															else
																{	/* Effect/walk.scm 87 */
																	BFALSE;
																}
														}
														{
															obj_t BgL_l1252z00_2155;

															BgL_l1252z00_2155 = CDR(BgL_l1252z00_1553);
															BgL_l1252z00_1553 = BgL_l1252z00_2155;
															goto BgL_zc3z04anonymousza31327ze3z87_1554;
														}
													}
												else
													{	/* Effect/walk.scm 108 */
														((bool_t) 1);
													}
											}
											{	/* Effect/walk.scm 109 */
												obj_t BgL_arg1331z00_1559;

												{	/* Effect/walk.scm 109 */
													obj_t BgL_res1697z00_1864;

													{	/* Effect/walk.scm 109 */
														obj_t BgL_tmpz00_2157;

														BgL_tmpz00_2157 = BGL_CURRENT_DYNAMIC_ENV();
														BgL_res1697z00_1864 =
															BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2157);
													}
													BgL_arg1331z00_1559 = BgL_res1697z00_1864;
												}
												BgL_tmp1120z00_1550 =
													bgl_display_string(BGl_string1714z00zzeffect_walkz00,
													BgL_arg1331z00_1559);
											}
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1118z00_1548);
											BGl_z62zc3z04anonymousza31332ze3ze5zzeffect_walkz00
												(BgL_zc3z04anonymousza31332ze3z87_1873);
											return BgL_tmp1120z00_1550;
										}
									}
								}
							else
								{	/* Effect/walk.scm 103 */
									return
										BGl_errorz00zz__errorz00(BGl_string1715z00zzeffect_walkz00,
										BGl_string1716z00zzeffect_walkz00, BgL_onamez00_1545);
								}
						}
					}
				}
			}
		}

	}



/* &write-effect */
	obj_t BGl_z62writezd2effectzb0zzeffect_walkz00(obj_t BgL_envz00_1874,
		obj_t BgL_globalsz00_1875)
	{
		{	/* Effect/walk.scm 84 */
			return BGl_writezd2effectzd2zzeffect_walkz00(BgL_globalsz00_1875);
		}

	}



/* &<@anonymous:1332> */
	obj_t BGl_z62zc3z04anonymousza31332ze3ze5zzeffect_walkz00(obj_t
		BgL_envz00_1876)
	{
		{	/* Effect/walk.scm 105 */
			{	/* Effect/walk.scm 110 */
				obj_t BgL_portz00_1877;

				BgL_portz00_1877 = PROCEDURE_REF(BgL_envz00_1876, (int) (((long) 0)));
				{	/* Effect/walk.scm 110 */
					bool_t BgL_test1786z00_2167;

					{	/* Effect/walk.scm 110 */
						obj_t BgL_arg1337z00_1891;

						{	/* Effect/walk.scm 110 */
							obj_t BgL_res1694z00_1892;

							{	/* Effect/walk.scm 110 */
								obj_t BgL_tmpz00_2168;

								BgL_tmpz00_2168 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1694z00_1892 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2168);
							}
							BgL_arg1337z00_1891 = BgL_res1694z00_1892;
						}
						BgL_test1786z00_2167 = (BgL_portz00_1877 == BgL_arg1337z00_1891);
					}
					if (BgL_test1786z00_2167)
						{	/* Effect/walk.scm 110 */
							return BFALSE;
						}
					else
						{	/* Effect/walk.scm 110 */
							return bgl_close_output_port(((obj_t) BgL_portz00_1877));
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzeffect_walkz00()
	{
		{	/* Effect/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzeffect_walkz00()
	{
		{	/* Effect/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzeffect_walkz00()
	{
		{	/* Effect/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzeffect_walkz00()
	{
		{	/* Effect/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(((long) 271385030),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_spreadz00(((long) 348216754),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_feffectz00(((long) 516374373),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1717z00zzeffect_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
