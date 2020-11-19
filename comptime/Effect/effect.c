/*===========================================================================*/
/*   (Effect/effect.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Effect/effect.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

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

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

	typedef struct BgL_retblockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                  *BgL_retblockz00_bglt;


	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzeffect_effectz00();
	static obj_t
		BGl_z62sidezd2effectzf3zd2nodezf2ef1227z63zzeffect_effectz00(obj_t, obj_t);
	static obj_t
		BGl_z62sidezd2effectzf3zd2jumpzd2ex1237z43zzeffect_effectz00(obj_t, obj_t);
	static obj_t BGl_z62sidezd2effectzf3zd2fail1233z91zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzeffect_effectz00();
	static obj_t BGl_z62sidezd2effectzf3zd2sync1247z91zzeffect_effectz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_z62sidezd2effectzf3zd2var1225z91zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzeffect_effectz00();
	BGL_EXPORTED_DECL bool_t
		BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	static obj_t BGl_z62sidezd2effectzf31218z43zzeffect_effectz00(obj_t, obj_t);
	static obj_t BGl_z62sidezd2effectzf3zd2retbloc1249z91zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_z62sidezd2effectzf3zd2funcall1243z91zzeffect_effectz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_patchz00zzast_nodez00;
	static obj_t BGl_z62sidezd2effectzf3zd2node1221z91zzeffect_effectz00(obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_returnz00zzast_nodez00;
	extern obj_t BGl_nodezf2effectzf2zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzeffect_effectz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_z62sidezd2effectzf3zd2patch1223z91zzeffect_effectz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzeffect_effectz00();
	static obj_t BGl_z62sidezd2effectzf3z43zzeffect_effectz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzeffect_effectz00();
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_z62sidezd2effectzf3zd2cast1245z91zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_z62sidezd2effectzf3zd2setq1231z91zzeffect_effectz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzeffect_effectz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzeffect_effectz00();
	static obj_t
		BGl_z62sidezd2effectzf3zd2setzd2exzd21235z91zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzeffect_effectz00();
	static obj_t
		BGl_z62sidezd2effectzf3zd2appzd2ly1241z43zzeffect_effectz00(obj_t, obj_t);
	extern obj_t BGl_retblockz00zzast_nodez00;
	static obj_t BGl_z62sidezd2effectzf3zd2return1251z91zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_z62sidezd2effectzf3zd2app1229z91zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62sidezd2effectzf3zd2boxzd2set1239z43zzeffect_effectz00(obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1361z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1396z00,
		BGl_z62sidezd2effectzf31218z43zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1364z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1397z00,
		BGl_z62sidezd2effectzf3zd2node1221z91zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1366z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1398z00,
		BGl_z62sidezd2effectzf3zd2patch1223z91zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1367z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1399z00,
		BGl_z62sidezd2effectzf3zd2var1225z91zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1368z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1400z00,
		BGl_z62sidezd2effectzf3zd2nodezf2ef1227z63zzeffect_effectz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1369z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1401z00,
		BGl_z62sidezd2effectzf3zd2app1229z91zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1370z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1402z00,
		BGl_z62sidezd2effectzf3zd2setq1231z91zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1371z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1403z00,
		BGl_z62sidezd2effectzf3zd2fail1233z91zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1372z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1404z00,
		BGl_z62sidezd2effectzf3zd2setzd2exzd21235z91zzeffect_effectz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1373z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1405z00,
		BGl_z62sidezd2effectzf3zd2jumpzd2ex1237z43zzeffect_effectz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1374z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1406z00,
		BGl_z62sidezd2effectzf3zd2boxzd2set1239z43zzeffect_effectz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1375z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1407z00,
		BGl_z62sidezd2effectzf3zd2appzd2ly1241z43zzeffect_effectz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1376z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1408z00,
		BGl_z62sidezd2effectzf3zd2funcall1243z91zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1377z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1409z00,
		BGl_z62sidezd2effectzf3zd2cast1245z91zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1378z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1410z00,
		BGl_z62sidezd2effectzf3zd2sync1247z91zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1379z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1411z00,
		BGl_z62sidezd2effectzf3zd2retbloc1249z91zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1380z00zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1412z00,
		BGl_z62sidezd2effectzf3zd2return1251z91zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1362z00zzeffect_effectz00,
		BgL_bgl_string1362za700za7za7e1413za7, "side-effect?1218", 16);
	      DEFINE_STRING(BGl_string1363z00zzeffect_effectz00,
		BgL_bgl_string1363za700za7za7e1414za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1365z00zzeffect_effectz00,
		BgL_bgl_string1365za700za7za7e1415za7, "side-effect?", 12);
	      DEFINE_STRING(BGl_string1381z00zzeffect_effectz00,
		BgL_bgl_string1381za700za7za7e1416za7, "effect_effect", 13);
	      DEFINE_STRING(BGl_string1382z00zzeffect_effectz00,
		BgL_bgl_string1382za700za7za7e1417za7, "read side-effect?1218 ", 22);
	     
		DEFINE_EXPORT_BGL_GENERIC(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
		BgL_bgl_za762sideza7d2effect1418z00,
		BGl_z62sidezd2effectzf3z43zzeffect_effectz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzeffect_effectz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long
		BgL_checksumz00_1721, char *BgL_fromz00_1722)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzeffect_effectz00))
				{
					BGl_requirezd2initializa7ationz75zzeffect_effectz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzeffect_effectz00();
					BGl_libraryzd2moduleszd2initz00zzeffect_effectz00();
					BGl_cnstzd2initzd2zzeffect_effectz00();
					BGl_importedzd2moduleszd2initz00zzeffect_effectz00();
					BGl_genericzd2initzd2zzeffect_effectz00();
					BGl_methodzd2initzd2zzeffect_effectz00();
					return BGl_toplevelzd2initzd2zzeffect_effectz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzeffect_effectz00()
	{
		{	/* Effect/effect.scm 19 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "effect_effect");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"effect_effect");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"effect_effect");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"effect_effect");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"effect_effect");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"effect_effect");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"effect_effect");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "effect_effect");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"effect_effect");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzeffect_effectz00()
	{
		{	/* Effect/effect.scm 19 */
			{	/* Effect/effect.scm 19 */
				obj_t BgL_cportz00_1687;

				{	/* Effect/effect.scm 19 */
					obj_t BgL_stringz00_1695;

					BgL_stringz00_1695 = BGl_string1382z00zzeffect_effectz00;
					{	/* Effect/effect.scm 19 */
						obj_t BgL_startz00_1696;

						BgL_startz00_1696 = BINT(((long) 0));
						{	/* Effect/effect.scm 19 */
							obj_t BgL_endz00_1697;

							BgL_endz00_1697 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1695)));
							{	/* Effect/effect.scm 19 */

								BgL_cportz00_1687 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1695, BgL_startz00_1696, BgL_endz00_1697);
				}}}}
				{
					long BgL_iz00_1688;

					BgL_iz00_1688 = ((long) 1);
				BgL_loopz00_1689:
					if ((BgL_iz00_1688 == ((long) -1)))
						{	/* Effect/effect.scm 19 */
							return BUNSPEC;
						}
					else
						{	/* Effect/effect.scm 19 */
							{	/* Effect/effect.scm 19 */
								obj_t BgL_arg1394z00_1691;

								{	/* Effect/effect.scm 19 */

									{	/* Effect/effect.scm 19 */
										obj_t BgL_locationz00_1693;

										BgL_locationz00_1693 = BBOOL(((bool_t) 0));
										{	/* Effect/effect.scm 19 */

											BgL_arg1394z00_1691 =
												BGl_readz00zz__readerz00(BgL_cportz00_1687,
												BgL_locationz00_1693);
										}
									}
								}
								{	/* Effect/effect.scm 19 */
									int BgL_tmpz00_1751;

									BgL_tmpz00_1751 = (int) (BgL_iz00_1688);
									CNST_TABLE_SET(BgL_tmpz00_1751, BgL_arg1394z00_1691);
							}}
							{	/* Effect/effect.scm 19 */
								int BgL_auxz00_1694;

								BgL_auxz00_1694 = (int) ((BgL_iz00_1688 - ((long) 1)));
								{
									long BgL_iz00_1756;

									BgL_iz00_1756 = (long) (BgL_auxz00_1694);
									BgL_iz00_1688 = BgL_iz00_1756;
									goto BgL_loopz00_1689;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzeffect_effectz00()
	{
		{	/* Effect/effect.scm 19 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzeffect_effectz00()
	{
		{	/* Effect/effect.scm 19 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzeffect_effectz00()
	{
		{	/* Effect/effect.scm 19 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzeffect_effectz00()
	{
		{	/* Effect/effect.scm 19 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_proc1361z00zzeffect_effectz00, BGl_nodez00zzast_nodez00,
				BGl_string1362z00zzeffect_effectz00);
		}

	}



/* &side-effect?1218 */
	obj_t BGl_z62sidezd2effectzf31218z43zzeffect_effectz00(obj_t BgL_envz00_1635,
		obj_t BgL_nodez00_1636)
	{
		{	/* Effect/effect.scm 26 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string1363z00zzeffect_effectz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_1636)));
		}

	}



/* side-effect? */
	BGL_EXPORTED_DEF bool_t
		BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt BgL_nodez00_3)
	{
		{	/* Effect/effect.scm 26 */
			{	/* Effect/effect.scm 26 */
				obj_t BgL_method1219z00_1345;

				{	/* Effect/effect.scm 26 */
					obj_t BgL_res1359z00_1622;

					{	/* Effect/effect.scm 26 */
						long BgL_objzd2classzd2numz00_1587;

						{	/* Effect/effect.scm 26 */
							long BgL_res1349z00_1590;

							BgL_res1349z00_1590 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_3));
							BgL_objzd2classzd2numz00_1587 = BgL_res1349z00_1590;
						}
						{	/* Effect/effect.scm 26 */
							obj_t BgL_arg1813z00_1588;

							BgL_arg1813z00_1588 =
								PROCEDURE_REF(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
								(int) (((long) 1)));
							{	/* Effect/effect.scm 26 */
								int BgL_offsetz00_1592;

								BgL_offsetz00_1592 = (int) (BgL_objzd2classzd2numz00_1587);
								{	/* Effect/effect.scm 26 */
									long BgL_offsetz00_1593;

									BgL_offsetz00_1593 =
										((long) (BgL_offsetz00_1592) - OBJECT_TYPE);
									{	/* Effect/effect.scm 26 */
										long BgL_modz00_1594;

										BgL_modz00_1594 =
											(BgL_offsetz00_1593 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Effect/effect.scm 26 */
											long BgL_restz00_1596;

											BgL_restz00_1596 =
												(BgL_offsetz00_1593 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Effect/effect.scm 26 */

												{	/* Effect/effect.scm 26 */
													obj_t BgL_bucketz00_1598;

													BgL_bucketz00_1598 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1588), BgL_modz00_1594);
													BgL_res1359z00_1622 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1598), BgL_restz00_1596);
					}}}}}}}}
					BgL_method1219z00_1345 = BgL_res1359z00_1622;
				}
				return
					CBOOL(PROCEDURE_ENTRY(BgL_method1219z00_1345) (BgL_method1219z00_1345,
						((obj_t) BgL_nodez00_3), BEOA));
			}
		}

	}



/* &side-effect? */
	obj_t BGl_z62sidezd2effectzf3z43zzeffect_effectz00(obj_t BgL_envz00_1637,
		obj_t BgL_nodez00_1638)
	{
		{	/* Effect/effect.scm 26 */
			return
				BBOOL(BGl_sidezd2effectzf3z21zzeffect_effectz00(
					((BgL_nodez00_bglt) BgL_nodez00_1638)));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzeffect_effectz00()
	{
		{	/* Effect/effect.scm 19 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_nodez00zzast_nodez00, BGl_proc1364z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_patchz00zzast_nodez00, BGl_proc1366z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_varz00zzast_nodez00, BGl_proc1367z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_nodezf2effectzf2zzast_nodez00, BGl_proc1368z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_appz00zzast_nodez00, BGl_proc1369z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_setqz00zzast_nodez00, BGl_proc1370z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_failz00zzast_nodez00, BGl_proc1371z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1372z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1373z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1374z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1375z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1376z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_castz00zzast_nodez00, BGl_proc1377z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_syncz00zzast_nodez00, BGl_proc1378z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_retblockz00zzast_nodez00, BGl_proc1379z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_returnz00zzast_nodez00, BGl_proc1380z00zzeffect_effectz00,
				BGl_string1365z00zzeffect_effectz00);
		}

	}



/* &side-effect?-return1251 */
	obj_t BGl_z62sidezd2effectzf3zd2return1251z91zzeffect_effectz00(obj_t
		BgL_envz00_1655, obj_t BgL_nodez00_1656)
	{
		{	/* Effect/effect.scm 129 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &side-effect?-retbloc1249 */
	obj_t BGl_z62sidezd2effectzf3zd2retbloc1249z91zzeffect_effectz00(obj_t
		BgL_envz00_1657, obj_t BgL_nodez00_1658)
	{
		{	/* Effect/effect.scm 122 */
			return
				BBOOL(BGl_sidezd2effectzf3z21zzeffect_effectz00(
					(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_1658)))->BgL_bodyz00)));
		}

	}



/* &side-effect?-sync1247 */
	obj_t BGl_z62sidezd2effectzf3zd2sync1247z91zzeffect_effectz00(obj_t
		BgL_envz00_1659, obj_t BgL_nodez00_1660)
	{
		{	/* Effect/effect.scm 116 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &side-effect?-cast1245 */
	obj_t BGl_z62sidezd2effectzf3zd2cast1245z91zzeffect_effectz00(obj_t
		BgL_envz00_1661, obj_t BgL_nodez00_1662)
	{
		{	/* Effect/effect.scm 109 */
			return
				BBOOL(BGl_sidezd2effectzf3z21zzeffect_effectz00(
					(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_1662)))->BgL_argz00)));
		}

	}



/* &side-effect?-funcall1243 */
	obj_t BGl_z62sidezd2effectzf3zd2funcall1243z91zzeffect_effectz00(obj_t
		BgL_envz00_1663, obj_t BgL_nodez00_1664)
	{
		{	/* Effect/effect.scm 103 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &side-effect?-app-ly1241 */
	obj_t BGl_z62sidezd2effectzf3zd2appzd2ly1241z43zzeffect_effectz00(obj_t
		BgL_envz00_1665, obj_t BgL_nodez00_1666)
	{
		{	/* Effect/effect.scm 97 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &side-effect?-box-set1239 */
	obj_t BGl_z62sidezd2effectzf3zd2boxzd2set1239z43zzeffect_effectz00(obj_t
		BgL_envz00_1667, obj_t BgL_nodez00_1668)
	{
		{	/* Effect/effect.scm 91 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &side-effect?-jump-ex1237 */
	obj_t BGl_z62sidezd2effectzf3zd2jumpzd2ex1237z43zzeffect_effectz00(obj_t
		BgL_envz00_1669, obj_t BgL_nodez00_1670)
	{
		{	/* Effect/effect.scm 85 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &side-effect?-set-ex-1235 */
	obj_t BGl_z62sidezd2effectzf3zd2setzd2exzd21235z91zzeffect_effectz00(obj_t
		BgL_envz00_1671, obj_t BgL_nodez00_1672)
	{
		{	/* Effect/effect.scm 79 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &side-effect?-fail1233 */
	obj_t BGl_z62sidezd2effectzf3zd2fail1233z91zzeffect_effectz00(obj_t
		BgL_envz00_1673, obj_t BgL_nodez00_1674)
	{
		{	/* Effect/effect.scm 73 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &side-effect?-setq1231 */
	obj_t BGl_z62sidezd2effectzf3zd2setq1231z91zzeffect_effectz00(obj_t
		BgL_envz00_1675, obj_t BgL_nodez00_1676)
	{
		{	/* Effect/effect.scm 67 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &side-effect?-app1229 */
	obj_t BGl_z62sidezd2effectzf3zd2app1229z91zzeffect_effectz00(obj_t
		BgL_envz00_1677, obj_t BgL_nodez00_1678)
	{
		{	/* Effect/effect.scm 58 */
			{

				{	/* Effect/effect.scm 59 */
					obj_t BgL__ortest_1100z00_1715;

					{	/* Effect/effect.scm 58 */
						obj_t BgL_nextzd2method1228zd2_1714;

						BgL_nextzd2method1228zd2_1714 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_1678)),
							BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
							BGl_appz00zzast_nodez00);
						BgL__ortest_1100z00_1715 =
							PROCEDURE_ENTRY(BgL_nextzd2method1228zd2_1714)
							(BgL_nextzd2method1228zd2_1714,
							((obj_t) ((BgL_appz00_bglt) BgL_nodez00_1678)), BEOA);
					}
					if (CBOOL(BgL__ortest_1100z00_1715))
						{	/* Effect/effect.scm 59 */
							return BgL__ortest_1100z00_1715;
						}
					else
						{	/* Effect/effect.scm 59 */
							return
								BBOOL(
								((((BgL_funz00_bglt) COBJECT(
												((BgL_funz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																(((BgL_varz00_bglt) COBJECT(
																			(((BgL_appz00_bglt) COBJECT(
																						((BgL_appz00_bglt)
																							BgL_nodez00_1678)))->
																				BgL_funz00)))->BgL_variablez00)))->
														BgL_valuez00))))->BgL_sidezd2effectzd2) == BTRUE));
						}
				}
			}
		}

	}



/* &side-effect?-node/ef1227 */
	obj_t BGl_z62sidezd2effectzf3zd2nodezf2ef1227z63zzeffect_effectz00(obj_t
		BgL_envz00_1679, obj_t BgL_nodez00_1680)
	{
		{	/* Effect/effect.scm 49 */
			{	/* Effect/effect.scm 50 */
				obj_t BgL_effectz00_1717;

				BgL_effectz00_1717 =
					(((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_nodez00_1680)))->
					BgL_sidezd2effectzd2);
				if (BOOLEANP(BgL_effectz00_1717))
					{	/* Effect/effect.scm 51 */
						return BgL_effectz00_1717;
					}
				else
					{	/* Effect/effect.scm 51 */
						return BTRUE;
					}
			}
		}

	}



/* &side-effect?-var1225 */
	obj_t BGl_z62sidezd2effectzf3zd2var1225z91zzeffect_effectz00(obj_t
		BgL_envz00_1681, obj_t BgL_nodez00_1682)
	{
		{	/* Effect/effect.scm 43 */
			{	/* Effect/effect.scm 44 */
				bool_t BgL_tmpz00_1854;

				if (
					((((BgL_variablez00_bglt) COBJECT(
									(((BgL_varz00_bglt) COBJECT(
												((BgL_varz00_bglt) BgL_nodez00_1682)))->
										BgL_variablez00)))->BgL_accessz00) ==
						CNST_TABLE_REF(((long) 1))))
					{	/* Effect/effect.scm 44 */
						BgL_tmpz00_1854 = ((bool_t) 0);
					}
				else
					{	/* Effect/effect.scm 44 */
						BgL_tmpz00_1854 = ((bool_t) 1);
					}
				return BBOOL(BgL_tmpz00_1854);
			}
		}

	}



/* &side-effect?-patch1223 */
	obj_t BGl_z62sidezd2effectzf3zd2patch1223z91zzeffect_effectz00(obj_t
		BgL_envz00_1683, obj_t BgL_nodez00_1684)
	{
		{	/* Effect/effect.scm 37 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &side-effect?-node1221 */
	obj_t BGl_z62sidezd2effectzf3zd2node1221z91zzeffect_effectz00(obj_t
		BgL_envz00_1685, obj_t BgL_nodez00_1686)
	{
		{	/* Effect/effect.scm 31 */
			return BBOOL(((bool_t) 0));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzeffect_effectz00()
	{
		{	/* Effect/effect.scm 19 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1381z00zzeffect_effectz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1381z00zzeffect_effectz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1381z00zzeffect_effectz00));
		}

	}

#ifdef __cplusplus
}
#endif
