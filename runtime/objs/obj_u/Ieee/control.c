/*===========================================================================*/
/*   (Ieee/control.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/control.scm -indent -o objs/obj_u/Ieee/control.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31329ze3ze5zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_z62forcez62zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mapzd22zd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31338ze3ze5zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_control_features_6_9z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_applyz00zz__r4_control_features_6_9z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_forzd2eachzd22z00zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_filterzd2mapzd22z00zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evaluatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00
		(obj_t);
	extern obj_t BGl_setzd2evaluationzd2contextz12z12zz__evaluatez00(obj_t);
	static obj_t BGl_z62mapz62zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62forzd2eachzb0zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62forzd2eachzd22z62zz__r4_control_features_6_9z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__r4_control_features_6_9z00();
	static obj_t BGl_z62mapzd22zb0zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62applyz62zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_procedurezf3zf3zz__r4_control_features_6_9z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__r4_control_features_6_9z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_control_features_6_9z00();
	static obj_t BGl_z62filterz62zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	extern obj_t call_cc(obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_z62procedurezf3z91zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t BGl_z62filterzd2mapzb0zz__r4_control_features_6_9z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t BGl_z62filterz12z70zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62appendzd2mapz12za2zz__r4_control_features_6_9z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62makezd2promisezb0zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t BGl_z62appendzd2mapzb0zz__r4_control_features_6_9z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31331ze3ze5zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t BGl_appendzd221011zd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_callzf2cczf2zz__r4_control_features_6_9z00(obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_z62callzf2ccz90zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_mapz00zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	static obj_t BGl_loopze70ze7zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_loopze71ze7zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_loopze72ze7zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_loopze73ze7zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_loopze74ze7zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_loopze75ze7zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_loopze76ze7zz__r4_control_features_6_9z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_forcez00zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl_z62dynamiczd2windzb0zz__r4_control_features_6_9z00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl_z62callzd2withzd2currentzd2continuationzb0zz__r4_control_features_6_9z00
		(obj_t, obj_t);
	static obj_t BGl_z62mapz12z70zz__r4_control_features_6_9z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern obj_t BGl_getzd2evaluationzd2contextz00zz__evaluatez00();
	static obj_t
		BGl_z62zc3z04anonymousza31327ze3ze5zz__r4_control_features_6_9z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_dynamiczd2windzd2zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd2mapz12zd2envz12zz__r4_control_features_6_9z00,
		BgL_bgl_za762appendza7d2mapza71692za7, va_generic_entry,
		BGl_z62appendzd2mapz12za2zz__r4_control_features_6_9z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_forzd2eachzd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl_za762forza7d2eachza7b01693za7, va_generic_entry,
		BGl_z62forzd2eachzb0zz__r4_control_features_6_9z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_forzd2eachzd22zd2envzd2zz__r4_control_features_6_9z00,
		BgL_bgl_za762forza7d2eachza7d21694za7,
		BGl_z62forzd2eachzd22z62zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2promisezd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl_za762makeza7d2promis1695z00,
		BGl_z62makezd2promisezb0zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_mapzd2envzd2zz__r4_control_features_6_9z00,
		BgL_bgl_za762mapza762za7za7__r4_1696z00, va_generic_entry,
		BGl_z62mapz62zz__r4_control_features_6_9z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd2mapzd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl_za762appendza7d2mapza71697za7, va_generic_entry,
		BGl_z62appendzd2mapzb0zz__r4_control_features_6_9z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filterzd2envzd2zz__r4_control_features_6_9z00,
		BgL_bgl_za762filterza762za7za7__1698z00,
		BGl_z62filterz62zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filterz12zd2envzc0zz__r4_control_features_6_9z00,
		BgL_bgl_za762filterza712za770za71699z00,
		BGl_z62filterz12z70zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_mapzd22zd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl_za762mapza7d22za7b0za7za7_1700za7,
		BGl_z62mapzd22zb0zz__r4_control_features_6_9z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezf3zd2envz21zz__r4_control_features_6_9z00,
		BgL_bgl_za762procedureza7f3za71701za7,
		BGl_z62procedurezf3z91zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzd2withzd2currentzd2continuationzd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl_za762callza7d2withza7d1702za7,
		BGl_z62callzd2withzd2currentzd2continuationzb0zz__r4_control_features_6_9z00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_forcezd2envzd2zz__r4_control_features_6_9z00,
		BgL_bgl_za762forceza762za7za7__r1703z00,
		BGl_z62forcez62zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_applyzd2envzd2zz__r4_control_features_6_9z00,
		BgL_bgl_za762applyza762za7za7__r1704z00, va_generic_entry,
		BGl_z62applyz62zz__r4_control_features_6_9z00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filterzd2mapzd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl_za762filterza7d2mapza71705za7, va_generic_entry,
		BGl_z62filterzd2mapzb0zz__r4_control_features_6_9z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_mapz12zd2envzc0zz__r4_control_features_6_9z00,
		BgL_bgl_za762mapza712za770za7za7__1706za7, va_generic_entry,
		BGl_z62mapz12z70zz__r4_control_features_6_9z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string1673z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1673za700za7za7_1707za7, "/tmp/4.4a/runtime/Ieee/control.scm",
		34);
	      DEFINE_STRING(BGl_string1674z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1674za700za7za7_1708za7, "&apply", 6);
	      DEFINE_STRING(BGl_string1675z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1675za700za7za7_1709za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1676z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1676za700za7za7_1710za7, "&map-2", 6);
	      DEFINE_STRING(BGl_string1677z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1677za700za7za7_1711za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string1678z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1678za700za7za7_1712za7, "&map", 4);
	      DEFINE_STRING(BGl_string1679z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1679za700za7za7_1713za7, "&map!", 5);
	      DEFINE_STRING(BGl_string1680z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1680za700za7za7_1714za7, "&append-map", 11);
	      DEFINE_STRING(BGl_string1681z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1681za700za7za7_1715za7, "&append-map!", 12);
	      DEFINE_STRING(BGl_string1682z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1682za700za7za7_1716za7, "&filter-map", 11);
	      DEFINE_STRING(BGl_string1683z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1683za700za7za7_1717za7, "&for-each-2", 11);
	      DEFINE_STRING(BGl_string1684z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1684za700za7za7_1718za7, "&for-each", 9);
	      DEFINE_STRING(BGl_string1685z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1685za700za7za7_1719za7, "&filter", 7);
	      DEFINE_STRING(BGl_string1686z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1686za700za7za7_1720za7, "&filter!", 8);
	extern obj_t BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_STRING(BGl_string1687z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1687za700za7za7_1721za7, "&make-promise", 13);
	      DEFINE_STRING(BGl_string1688z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1688za700za7za7_1722za7, "&call/cc", 8);
	      DEFINE_STRING(BGl_string1689z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1689za700za7za7_1723za7, "&call-with-current-continuation",
		31);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dynamiczd2windzd2envz00zz__r4_control_features_6_9z00,
		BgL_bgl_za762dynamicza7d2win1724z00,
		BGl_z62dynamiczd2windzb0zz__r4_control_features_6_9z00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1690z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1690za700za7za7_1725za7, "&dynamic-wind", 13);
	      DEFINE_STRING(BGl_string1691z00zz__r4_control_features_6_9z00,
		BgL_bgl_string1691za700za7za7_1726za7, "__r4_control_features_6_9", 25);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_callzf2cczd2envz20zz__r4_control_features_6_9z00,
		BgL_bgl_za762callza7f2ccza790za71727z00,
		BGl_z62callzf2ccz90zz__r4_control_features_6_9z00, 0L, BUNSPEC, 1);
	extern obj_t BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_control_features_6_9z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long
		BgL_checksumz00_1694, char *BgL_fromz00_1695)
	{
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zz__r4_control_features_6_9z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_control_features_6_9z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_control_features_6_9z00();
					BGl_importedzd2moduleszd2initz00zz__r4_control_features_6_9z00();
					return BGl_toplevelzd2initzd2zz__r4_control_features_6_9z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_control_features_6_9z00()
	{
		{	/* Ieee/control.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r4_control_features_6_9z00()
	{
		{	/* Ieee/control.scm 14 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__r4_control_features_6_9z00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_716;

				BgL_headz00_716 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1218;
					obj_t BgL_tailz00_1219;

					BgL_prevz00_1218 = BgL_headz00_716;
					BgL_tailz00_1219 = BgL_l1z00_1;
				BgL_loopz00_1217:
					if (PAIRP(BgL_tailz00_1219))
						{
							obj_t BgL_newzd2prevzd2_1225;

							BgL_newzd2prevzd2_1225 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1219), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1218, BgL_newzd2prevzd2_1225);
							{
								obj_t BgL_tailz00_1710;
								obj_t BgL_prevz00_1709;

								BgL_prevz00_1709 = BgL_newzd2prevzd2_1225;
								BgL_tailz00_1710 = CDR(BgL_tailz00_1219);
								BgL_tailz00_1219 = BgL_tailz00_1710;
								BgL_prevz00_1218 = BgL_prevz00_1709;
								goto BgL_loopz00_1217;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_716);
			}
		}

	}



/* procedure? */
	BGL_EXPORTED_DEF bool_t
		BGl_procedurezf3zf3zz__r4_control_features_6_9z00(obj_t BgL_objz00_3)
	{
		{	/* Ieee/control.scm 75 */
			return PROCEDUREP(BgL_objz00_3);
		}

	}



/* &procedure? */
	obj_t BGl_z62procedurezf3z91zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1565, obj_t BgL_objz00_1566)
	{
		{	/* Ieee/control.scm 75 */
			return
				BBOOL(BGl_procedurezf3zf3zz__r4_control_features_6_9z00
				(BgL_objz00_1566));
		}

	}



/* apply */
	BGL_EXPORTED_DEF obj_t BGl_applyz00zz__r4_control_features_6_9z00(obj_t
		BgL_procz00_4, obj_t BgL_argsz00_5, obj_t BgL_optz00_6)
	{
		{	/* Ieee/control.scm 81 */
			{	/* Ieee/control.scm 82 */
				obj_t BgL_argsz00_724;

				if (PAIRP(BgL_optz00_6))
					{	/* Ieee/control.scm 82 */
						BgL_argsz00_724 =
							MAKE_YOUNG_PAIR(BgL_argsz00_5,
							BGl_loopze76ze7zz__r4_control_features_6_9z00(BgL_optz00_6));
					}
				else
					{	/* Ieee/control.scm 82 */
						BgL_argsz00_724 = BgL_argsz00_5;
					}
				return apply(BgL_procz00_4, BgL_argsz00_724);
			}
		}

	}



/* loop~6 */
	obj_t BGl_loopze76ze7zz__r4_control_features_6_9z00(obj_t BgL_optz00_728)
	{
		{	/* Ieee/control.scm 83 */
			{	/* Ieee/control.scm 84 */
				bool_t BgL_test1731z00_1722;

				{	/* Ieee/control.scm 84 */
					obj_t BgL_tmpz00_1723;

					BgL_tmpz00_1723 = CDR(((obj_t) BgL_optz00_728));
					BgL_test1731z00_1722 = PAIRP(BgL_tmpz00_1723);
				}
				if (BgL_test1731z00_1722)
					{	/* Ieee/control.scm 85 */
						obj_t BgL_arg1064z00_732;
						obj_t BgL_arg1065z00_733;

						BgL_arg1064z00_732 = CAR(((obj_t) BgL_optz00_728));
						{	/* Ieee/control.scm 85 */
							obj_t BgL_arg1073z00_734;

							BgL_arg1073z00_734 = CDR(((obj_t) BgL_optz00_728));
							BgL_arg1065z00_733 =
								BGl_loopze76ze7zz__r4_control_features_6_9z00
								(BgL_arg1073z00_734);
						}
						return MAKE_YOUNG_PAIR(BgL_arg1064z00_732, BgL_arg1065z00_733);
					}
				else
					{	/* Ieee/control.scm 84 */
						return CAR(((obj_t) BgL_optz00_728));
					}
			}
		}

	}



/* &apply */
	obj_t BGl_z62applyz62zz__r4_control_features_6_9z00(obj_t BgL_envz00_1567,
		obj_t BgL_procz00_1568, obj_t BgL_argsz00_1569, obj_t BgL_optz00_1570)
	{
		{	/* Ieee/control.scm 81 */
			{	/* Ieee/control.scm 82 */
				obj_t BgL_auxz00_1735;

				if (PROCEDUREP(BgL_procz00_1568))
					{	/* Ieee/control.scm 82 */
						BgL_auxz00_1735 = BgL_procz00_1568;
					}
				else
					{
						obj_t BgL_auxz00_1738;

						BgL_auxz00_1738 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 3224)),
							BGl_string1674z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00,
							BgL_procz00_1568);
						FAILURE(BgL_auxz00_1738, BFALSE, BFALSE);
					}
				return
					BGl_applyz00zz__r4_control_features_6_9z00(BgL_auxz00_1735,
					BgL_argsz00_1569, BgL_optz00_1570);
			}
		}

	}



/* map-2 */
	BGL_EXPORTED_DEF obj_t BGl_mapzd22zd2zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_7, obj_t BgL_lz00_8)
	{
		{	/* Ieee/control.scm 93 */
			{
				obj_t BgL_lz00_1256;
				obj_t BgL_resz00_1257;

				BgL_lz00_1256 = BgL_lz00_8;
				BgL_resz00_1257 = BNIL;
			BgL_loopz00_1255:
				if (NULLP(BgL_lz00_1256))
					{	/* Ieee/control.scm 96 */
						return bgl_reverse_bang(BgL_resz00_1257);
					}
				else
					{	/* Ieee/control.scm 98 */
						obj_t BgL_arg1078z00_1264;
						obj_t BgL_arg1095z00_1265;

						BgL_arg1078z00_1264 = CDR(((obj_t) BgL_lz00_1256));
						{	/* Ieee/control.scm 98 */
							obj_t BgL_arg1099z00_1266;

							{	/* Ieee/control.scm 98 */
								obj_t BgL_arg1100z00_1267;

								BgL_arg1100z00_1267 = CAR(((obj_t) BgL_lz00_1256));
								BgL_arg1099z00_1266 =
									PROCEDURE_ENTRY(BgL_fz00_7) (BgL_fz00_7, BgL_arg1100z00_1267,
									BEOA);
							}
							BgL_arg1095z00_1265 =
								MAKE_YOUNG_PAIR(BgL_arg1099z00_1266, BgL_resz00_1257);
						}
						{
							obj_t BgL_resz00_1756;
							obj_t BgL_lz00_1755;

							BgL_lz00_1755 = BgL_arg1078z00_1264;
							BgL_resz00_1756 = BgL_arg1095z00_1265;
							BgL_resz00_1257 = BgL_resz00_1756;
							BgL_lz00_1256 = BgL_lz00_1755;
							goto BgL_loopz00_1255;
						}
					}
			}
		}

	}



/* &map-2 */
	obj_t BGl_z62mapzd22zb0zz__r4_control_features_6_9z00(obj_t BgL_envz00_1571,
		obj_t BgL_fz00_1572, obj_t BgL_lz00_1573)
	{
		{	/* Ieee/control.scm 93 */
			{	/* Ieee/control.scm 94 */
				obj_t BgL_auxz00_1764;
				obj_t BgL_auxz00_1757;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_lz00_1573))
					{	/* Ieee/control.scm 94 */
						BgL_auxz00_1764 = BgL_lz00_1573;
					}
				else
					{
						obj_t BgL_auxz00_1767;

						BgL_auxz00_1767 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 3667)),
							BGl_string1676z00zz__r4_control_features_6_9z00,
							BGl_string1677z00zz__r4_control_features_6_9z00, BgL_lz00_1573);
						FAILURE(BgL_auxz00_1767, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_fz00_1572))
					{	/* Ieee/control.scm 94 */
						BgL_auxz00_1757 = BgL_fz00_1572;
					}
				else
					{
						obj_t BgL_auxz00_1760;

						BgL_auxz00_1760 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 3667)),
							BGl_string1676z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00, BgL_fz00_1572);
						FAILURE(BgL_auxz00_1760, BFALSE, BFALSE);
					}
				return
					BGl_mapzd22zd2zz__r4_control_features_6_9z00(BgL_auxz00_1757,
					BgL_auxz00_1764);
			}
		}

	}



/* map */
	BGL_EXPORTED_DEF obj_t BGl_mapz00zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_9, obj_t BgL_lz00_10)
	{
		{	/* Ieee/control.scm 103 */
			if (NULLP(BgL_lz00_10))
				{	/* Ieee/control.scm 105 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 105 */
					if (NULLP(CDR(((obj_t) BgL_lz00_10))))
						{	/* Ieee/control.scm 108 */
							obj_t BgL_arg1109z00_751;

							BgL_arg1109z00_751 = CAR(((obj_t) BgL_lz00_10));
							return
								BGl_mapzd22zd2zz__r4_control_features_6_9z00(BgL_fz00_9,
								BgL_arg1109z00_751);
						}
					else
						{	/* Ieee/control.scm 107 */
							return
								BGl_loopze75ze7zz__r4_control_features_6_9z00(BgL_fz00_9,
								BgL_lz00_10);
						}
				}
		}

	}



/* loop~5 */
	obj_t BGl_loopze75ze7zz__r4_control_features_6_9z00(obj_t BgL_fz00_1645,
		obj_t BgL_lz00_753)
	{
		{	/* Ieee/control.scm 110 */
			if (NULLP(CAR(((obj_t) BgL_lz00_753))))
				{	/* Ieee/control.scm 111 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 113 */
					obj_t BgL_arg1115z00_757;
					obj_t BgL_arg1116z00_758;

					BgL_arg1115z00_757 =
						apply(BgL_fz00_1645,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_753));
					BgL_arg1116z00_758 =
						BGl_loopze75ze7zz__r4_control_features_6_9z00(BgL_fz00_1645,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_753));
					return MAKE_YOUNG_PAIR(BgL_arg1115z00_757, BgL_arg1116z00_758);
				}
		}

	}



/* &map */
	obj_t BGl_z62mapz62zz__r4_control_features_6_9z00(obj_t BgL_envz00_1574,
		obj_t BgL_fz00_1575, obj_t BgL_lz00_1576)
	{
		{	/* Ieee/control.scm 103 */
			{	/* Ieee/control.scm 105 */
				obj_t BgL_auxz00_1792;

				if (PROCEDUREP(BgL_fz00_1575))
					{	/* Ieee/control.scm 105 */
						BgL_auxz00_1792 = BgL_fz00_1575;
					}
				else
					{
						obj_t BgL_auxz00_1795;

						BgL_auxz00_1795 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 4044)),
							BGl_string1678z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00, BgL_fz00_1575);
						FAILURE(BgL_auxz00_1795, BFALSE, BFALSE);
					}
				return
					BGl_mapz00zz__r4_control_features_6_9z00(BgL_auxz00_1792,
					BgL_lz00_1576);
			}
		}

	}



/* map! */
	BGL_EXPORTED_DEF obj_t BGl_mapz12z12zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_13, obj_t BgL_lz00_14)
	{
		{	/* Ieee/control.scm 130 */
			if (NULLP(BgL_lz00_14))
				{	/* Ieee/control.scm 132 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 132 */
					if (NULLP(CDR(((obj_t) BgL_lz00_14))))
						{	/* Ieee/control.scm 135 */
							obj_t BgL_arg1133z00_774;

							BgL_arg1133z00_774 = CAR(((obj_t) BgL_lz00_14));
							{
								obj_t BgL_lz00_1292;

								BgL_lz00_1292 = BgL_arg1133z00_774;
							BgL_loopz00_1291:
								if (NULLP(BgL_lz00_1292))
									{	/* Ieee/control.scm 121 */
										return BgL_arg1133z00_774;
									}
								else
									{	/* Ieee/control.scm 121 */
										{	/* Ieee/control.scm 124 */
											obj_t BgL_arg1124z00_1294;

											{	/* Ieee/control.scm 124 */
												obj_t BgL_arg1125z00_1295;

												BgL_arg1125z00_1295 = CAR(((obj_t) BgL_lz00_1292));
												BgL_arg1124z00_1294 =
													PROCEDURE_ENTRY(BgL_fz00_13) (BgL_fz00_13,
													BgL_arg1125z00_1295, BEOA);
											}
											{	/* Ieee/control.scm 124 */
												obj_t BgL_tmpz00_1816;

												BgL_tmpz00_1816 = ((obj_t) BgL_lz00_1292);
												SET_CAR(BgL_tmpz00_1816, BgL_arg1124z00_1294);
											}
										}
										{	/* Ieee/control.scm 125 */
											obj_t BgL_arg1126z00_1296;

											BgL_arg1126z00_1296 = CDR(((obj_t) BgL_lz00_1292));
											{
												obj_t BgL_lz00_1821;

												BgL_lz00_1821 = BgL_arg1126z00_1296;
												BgL_lz00_1292 = BgL_lz00_1821;
												goto BgL_loopz00_1291;
											}
										}
									}
							}
						}
					else
						{	/* Ieee/control.scm 137 */
							obj_t BgL_l0z00_775;

							BgL_l0z00_775 = CAR(((obj_t) BgL_lz00_14));
							{
								obj_t BgL_lz00_777;

								BgL_lz00_777 = BgL_lz00_14;
							BgL_zc3z04anonymousza31134ze3z87_778:
								if (NULLP(CAR(((obj_t) BgL_lz00_777))))
									{	/* Ieee/control.scm 139 */
										return BgL_l0z00_775;
									}
								else
									{	/* Ieee/control.scm 139 */
										{	/* Ieee/control.scm 142 */
											obj_t BgL_arg1145z00_781;
											obj_t BgL_arg1146z00_782;

											BgL_arg1145z00_781 = CAR(((obj_t) BgL_lz00_777));
											BgL_arg1146z00_782 =
												apply(BgL_fz00_13,
												BGl_mapzd22zd2zz__r4_control_features_6_9z00
												(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00,
													BgL_lz00_777));
											{	/* Ieee/control.scm 142 */
												obj_t BgL_tmpz00_1833;

												BgL_tmpz00_1833 = ((obj_t) BgL_arg1145z00_781);
												SET_CAR(BgL_tmpz00_1833, BgL_arg1146z00_782);
											}
										}
										{
											obj_t BgL_lz00_1836;

											BgL_lz00_1836 =
												BGl_mapzd22zd2zz__r4_control_features_6_9z00
												(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
												BgL_lz00_777);
											BgL_lz00_777 = BgL_lz00_1836;
											goto BgL_zc3z04anonymousza31134ze3z87_778;
										}
									}
							}
						}
				}
		}

	}



/* &map! */
	obj_t BGl_z62mapz12z70zz__r4_control_features_6_9z00(obj_t BgL_envz00_1581,
		obj_t BgL_fz00_1582, obj_t BgL_lz00_1583)
	{
		{	/* Ieee/control.scm 130 */
			{	/* Ieee/control.scm 132 */
				obj_t BgL_auxz00_1838;

				if (PROCEDUREP(BgL_fz00_1582))
					{	/* Ieee/control.scm 132 */
						BgL_auxz00_1838 = BgL_fz00_1582;
					}
				else
					{
						obj_t BgL_auxz00_1841;

						BgL_auxz00_1841 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 4875)),
							BGl_string1679z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00, BgL_fz00_1582);
						FAILURE(BgL_auxz00_1841, BFALSE, BFALSE);
					}
				return
					BGl_mapz12z12zz__r4_control_features_6_9z00(BgL_auxz00_1838,
					BgL_lz00_1583);
			}
		}

	}



/* append-map */
	BGL_EXPORTED_DEF obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_17, obj_t BgL_lz00_18)
	{
		{	/* Ieee/control.scm 157 */
			if (NULLP(BgL_lz00_18))
				{	/* Ieee/control.scm 159 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 159 */
					if (NULLP(CDR(((obj_t) BgL_lz00_18))))
						{	/* Ieee/control.scm 162 */
							obj_t BgL_arg1178z00_799;

							BgL_arg1178z00_799 = CAR(((obj_t) BgL_lz00_18));
							return
								BGl_loopze74ze7zz__r4_control_features_6_9z00(BgL_fz00_17,
								BgL_arg1178z00_799);
						}
					else
						{	/* Ieee/control.scm 161 */
							return
								BGl_loopze73ze7zz__r4_control_features_6_9z00(BgL_fz00_17,
								BgL_lz00_18);
						}
				}
		}

	}



/* loop~3 */
	obj_t BGl_loopze73ze7zz__r4_control_features_6_9z00(obj_t BgL_fz00_1643,
		obj_t BgL_lz00_801)
	{
		{	/* Ieee/control.scm 164 */
			if (NULLP(CAR(((obj_t) BgL_lz00_801))))
				{	/* Ieee/control.scm 165 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 167 */
					obj_t BgL_arg1190z00_805;
					obj_t BgL_arg1194z00_806;

					BgL_arg1190z00_805 =
						apply(BgL_fz00_1643,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_801));
					BgL_arg1194z00_806 =
						BGl_loopze73ze7zz__r4_control_features_6_9z00(BgL_fz00_1643,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_801));
					return
						BGl_appendzd221011zd2zz__r4_control_features_6_9z00
						(BgL_arg1190z00_805, BgL_arg1194z00_806);
				}
		}

	}



/* loop~4 */
	obj_t BGl_loopze74ze7zz__r4_control_features_6_9z00(obj_t BgL_fz00_1644,
		obj_t BgL_lz00_1321)
	{
		{	/* Ieee/control.scm 149 */
			if (NULLP(BgL_lz00_1321))
				{	/* Ieee/control.scm 150 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 152 */
					obj_t BgL_arg1169z00_1323;
					obj_t BgL_arg1170z00_1324;

					{	/* Ieee/control.scm 152 */
						obj_t BgL_arg1172z00_1325;

						BgL_arg1172z00_1325 = CAR(((obj_t) BgL_lz00_1321));
						BgL_arg1169z00_1323 =
							PROCEDURE_ENTRY(BgL_fz00_1644) (BgL_fz00_1644,
							BgL_arg1172z00_1325, BEOA);
					}
					{	/* Ieee/control.scm 152 */
						obj_t BgL_arg1174z00_1326;

						BgL_arg1174z00_1326 = CDR(((obj_t) BgL_lz00_1321));
						BgL_arg1170z00_1324 =
							BGl_loopze74ze7zz__r4_control_features_6_9z00(BgL_fz00_1644,
							BgL_arg1174z00_1326);
					}
					return
						BGl_appendzd221011zd2zz__r4_control_features_6_9z00
						(BgL_arg1169z00_1323, BgL_arg1170z00_1324);
				}
		}

	}



/* &append-map */
	obj_t BGl_z62appendzd2mapzb0zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1584, obj_t BgL_fz00_1585, obj_t BgL_lz00_1586)
	{
		{	/* Ieee/control.scm 157 */
			{	/* Ieee/control.scm 159 */
				obj_t BgL_auxz00_1878;

				if (PROCEDUREP(BgL_fz00_1585))
					{	/* Ieee/control.scm 159 */
						BgL_auxz00_1878 = BgL_fz00_1585;
					}
				else
					{
						obj_t BgL_auxz00_1881;

						BgL_auxz00_1881 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 5737)),
							BGl_string1680z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00, BgL_fz00_1585);
						FAILURE(BgL_auxz00_1881, BFALSE, BFALSE);
					}
				return
					BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(BgL_auxz00_1878,
					BgL_lz00_1586);
			}
		}

	}



/* append-map! */
	BGL_EXPORTED_DEF obj_t
		BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t BgL_fz00_21,
		obj_t BgL_lz00_22)
	{
		{	/* Ieee/control.scm 181 */
			if (NULLP(BgL_lz00_22))
				{	/* Ieee/control.scm 183 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 183 */
					if (NULLP(CDR(((obj_t) BgL_lz00_22))))
						{	/* Ieee/control.scm 186 */
							obj_t BgL_arg1227z00_823;

							BgL_arg1227z00_823 = CAR(((obj_t) BgL_lz00_22));
							return
								BGl_loopze72ze7zz__r4_control_features_6_9z00(BgL_fz00_21,
								BgL_arg1227z00_823);
						}
					else
						{	/* Ieee/control.scm 185 */
							return
								BGl_loopze71ze7zz__r4_control_features_6_9z00(BgL_fz00_21,
								BgL_lz00_22);
						}
				}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__r4_control_features_6_9z00(obj_t BgL_fz00_1641,
		obj_t BgL_lz00_825)
	{
		{	/* Ieee/control.scm 188 */
			if (NULLP(CAR(((obj_t) BgL_lz00_825))))
				{	/* Ieee/control.scm 189 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 191 */
					obj_t BgL_arg1232z00_829;
					obj_t BgL_arg1239z00_830;

					BgL_arg1232z00_829 =
						apply(BgL_fz00_1641,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_825));
					BgL_arg1239z00_830 =
						BGl_loopze71ze7zz__r4_control_features_6_9z00(BgL_fz00_1641,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_825));
					return
						BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
						(BgL_arg1232z00_829, BgL_arg1239z00_830);
				}
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zz__r4_control_features_6_9z00(obj_t BgL_fz00_1642,
		obj_t BgL_lz00_1347)
	{
		{	/* Ieee/control.scm 173 */
			if (NULLP(BgL_lz00_1347))
				{	/* Ieee/control.scm 174 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 176 */
					obj_t BgL_arg1211z00_1349;
					obj_t BgL_arg1216z00_1350;

					{	/* Ieee/control.scm 176 */
						obj_t BgL_arg1221z00_1351;

						BgL_arg1221z00_1351 = CAR(((obj_t) BgL_lz00_1347));
						BgL_arg1211z00_1349 =
							PROCEDURE_ENTRY(BgL_fz00_1642) (BgL_fz00_1642,
							BgL_arg1221z00_1351, BEOA);
					}
					{	/* Ieee/control.scm 176 */
						obj_t BgL_arg1223z00_1352;

						BgL_arg1223z00_1352 = CDR(((obj_t) BgL_lz00_1347));
						BgL_arg1216z00_1350 =
							BGl_loopze72ze7zz__r4_control_features_6_9z00(BgL_fz00_1642,
							BgL_arg1223z00_1352);
					}
					return
						BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
						(BgL_arg1211z00_1349, BgL_arg1216z00_1350);
				}
		}

	}



/* &append-map! */
	obj_t BGl_z62appendzd2mapz12za2zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1587, obj_t BgL_fz00_1588, obj_t BgL_lz00_1589)
	{
		{	/* Ieee/control.scm 181 */
			{	/* Ieee/control.scm 183 */
				obj_t BgL_auxz00_1918;

				if (PROCEDUREP(BgL_fz00_1588))
					{	/* Ieee/control.scm 183 */
						BgL_auxz00_1918 = BgL_fz00_1588;
					}
				else
					{
						obj_t BgL_auxz00_1921;

						BgL_auxz00_1921 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 6559)),
							BGl_string1681z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00, BgL_fz00_1588);
						FAILURE(BgL_auxz00_1921, BFALSE, BFALSE);
					}
				return
					BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(BgL_auxz00_1918,
					BgL_lz00_1589);
			}
		}

	}



/* filter-map-2 */
	obj_t BGl_filterzd2mapzd22z00zz__r4_control_features_6_9z00(obj_t BgL_fz00_23,
		obj_t BgL_lz00_24)
	{
		{	/* Ieee/control.scm 196 */
			{
				obj_t BgL_lz00_837;
				obj_t BgL_resz00_838;

				BgL_lz00_837 = BgL_lz00_24;
				BgL_resz00_838 = BNIL;
			BgL_zc3z04anonymousza31246ze3z87_839:
				if (NULLP(BgL_lz00_837))
					{	/* Ieee/control.scm 199 */
						return bgl_reverse_bang(BgL_resz00_838);
					}
				else
					{	/* Ieee/control.scm 201 */
						obj_t BgL_hdz00_841;

						{	/* Ieee/control.scm 201 */
							obj_t BgL_arg1254z00_845;

							BgL_arg1254z00_845 = CAR(((obj_t) BgL_lz00_837));
							BgL_hdz00_841 =
								PROCEDURE_ENTRY(BgL_fz00_23) (BgL_fz00_23, BgL_arg1254z00_845,
								BEOA);
						}
						if (CBOOL(BgL_hdz00_841))
							{	/* Ieee/control.scm 203 */
								obj_t BgL_arg1250z00_842;
								obj_t BgL_arg1252z00_843;

								BgL_arg1250z00_842 = CDR(((obj_t) BgL_lz00_837));
								BgL_arg1252z00_843 =
									MAKE_YOUNG_PAIR(BgL_hdz00_841, BgL_resz00_838);
								{
									obj_t BgL_resz00_1941;
									obj_t BgL_lz00_1940;

									BgL_lz00_1940 = BgL_arg1250z00_842;
									BgL_resz00_1941 = BgL_arg1252z00_843;
									BgL_resz00_838 = BgL_resz00_1941;
									BgL_lz00_837 = BgL_lz00_1940;
									goto BgL_zc3z04anonymousza31246ze3z87_839;
								}
							}
						else
							{	/* Ieee/control.scm 204 */
								obj_t BgL_arg1253z00_844;

								BgL_arg1253z00_844 = CDR(((obj_t) BgL_lz00_837));
								{
									obj_t BgL_lz00_1944;

									BgL_lz00_1944 = BgL_arg1253z00_844;
									BgL_lz00_837 = BgL_lz00_1944;
									goto BgL_zc3z04anonymousza31246ze3z87_839;
								}
							}
					}
			}
		}

	}



/* filter-map */
	BGL_EXPORTED_DEF obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_25, obj_t BgL_lz00_26)
	{
		{	/* Ieee/control.scm 209 */
			if (NULLP(BgL_lz00_26))
				{	/* Ieee/control.scm 211 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 211 */
					if (NULLP(CDR(((obj_t) BgL_lz00_26))))
						{	/* Ieee/control.scm 214 */
							obj_t BgL_arg1258z00_850;

							BgL_arg1258z00_850 = CAR(((obj_t) BgL_lz00_26));
							return
								BGl_filterzd2mapzd22z00zz__r4_control_features_6_9z00
								(BgL_fz00_25, BgL_arg1258z00_850);
						}
					else
						{	/* Ieee/control.scm 213 */
							return
								BGl_loopze70ze7zz__r4_control_features_6_9z00(BgL_fz00_25,
								BgL_lz00_26);
						}
				}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__r4_control_features_6_9z00(obj_t BgL_fz00_1640,
		obj_t BgL_lz00_852)
	{
		{	/* Ieee/control.scm 216 */
		BGl_loopze70ze7zz__r4_control_features_6_9z00:
			if (NULLP(CAR(((obj_t) BgL_lz00_852))))
				{	/* Ieee/control.scm 217 */
					return BNIL;
				}
			else
				{	/* Ieee/control.scm 219 */
					obj_t BgL_hdz00_856;

					BgL_hdz00_856 =
						apply(BgL_fz00_1640,
						BGl_mapzd22zd2zz__r4_control_features_6_9z00
						(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_852));
					if (CBOOL(BgL_hdz00_856))
						{	/* Ieee/control.scm 220 */
							return
								MAKE_YOUNG_PAIR(BgL_hdz00_856,
								BGl_loopze70ze7zz__r4_control_features_6_9z00(BgL_fz00_1640,
									BGl_mapzd22zd2zz__r4_control_features_6_9z00
									(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
										BgL_lz00_852)));
						}
					else
						{
							obj_t BgL_lz00_1967;

							BgL_lz00_1967 =
								BGl_mapzd22zd2zz__r4_control_features_6_9z00
								(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00, BgL_lz00_852);
							BgL_lz00_852 = BgL_lz00_1967;
							goto BGl_loopze70ze7zz__r4_control_features_6_9z00;
						}
				}
		}

	}



/* &filter-map */
	obj_t BGl_z62filterzd2mapzb0zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1590, obj_t BgL_fz00_1591, obj_t BgL_lz00_1592)
	{
		{	/* Ieee/control.scm 209 */
			{	/* Ieee/control.scm 211 */
				obj_t BgL_auxz00_1969;

				if (PROCEDUREP(BgL_fz00_1591))
					{	/* Ieee/control.scm 211 */
						BgL_auxz00_1969 = BgL_fz00_1591;
					}
				else
					{
						obj_t BgL_auxz00_1972;

						BgL_auxz00_1972 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 7468)),
							BGl_string1682z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00, BgL_fz00_1591);
						FAILURE(BgL_auxz00_1972, BFALSE, BFALSE);
					}
				return
					BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(BgL_auxz00_1969,
					BgL_lz00_1592);
			}
		}

	}



/* for-each-2 */
	BGL_EXPORTED_DEF obj_t
		BGl_forzd2eachzd22z00zz__r4_control_features_6_9z00(obj_t BgL_fz00_27,
		obj_t BgL_lz00_28)
	{
		{	/* Ieee/control.scm 227 */
			{
				obj_t BgL_lz00_1386;

				BgL_lz00_1386 = BgL_lz00_28;
			BgL_loopz00_1385:
				if (NULLP(BgL_lz00_1386))
					{	/* Ieee/control.scm 229 */
						return BUNSPEC;
					}
				else
					{	/* Ieee/control.scm 229 */
						{	/* Ieee/control.scm 232 */
							obj_t BgL_arg1277z00_1391;

							BgL_arg1277z00_1391 = CAR(((obj_t) BgL_lz00_1386));
							PROCEDURE_ENTRY(BgL_fz00_27) (BgL_fz00_27, BgL_arg1277z00_1391,
								BEOA);
						}
						{	/* Ieee/control.scm 233 */
							obj_t BgL_arg1280z00_1392;

							BgL_arg1280z00_1392 = CDR(((obj_t) BgL_lz00_1386));
							{
								obj_t BgL_lz00_1987;

								BgL_lz00_1987 = BgL_arg1280z00_1392;
								BgL_lz00_1386 = BgL_lz00_1987;
								goto BgL_loopz00_1385;
							}
						}
					}
			}
		}

	}



/* &for-each-2 */
	obj_t BGl_z62forzd2eachzd22z62zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1593, obj_t BgL_fz00_1594, obj_t BgL_lz00_1595)
	{
		{	/* Ieee/control.scm 227 */
			{	/* Ieee/control.scm 228 */
				obj_t BgL_auxz00_1995;
				obj_t BgL_auxz00_1988;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_lz00_1595))
					{	/* Ieee/control.scm 228 */
						BgL_auxz00_1995 = BgL_lz00_1595;
					}
				else
					{
						obj_t BgL_auxz00_1998;

						BgL_auxz00_1998 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 7995)),
							BGl_string1683z00zz__r4_control_features_6_9z00,
							BGl_string1677z00zz__r4_control_features_6_9z00, BgL_lz00_1595);
						FAILURE(BgL_auxz00_1998, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_fz00_1594))
					{	/* Ieee/control.scm 228 */
						BgL_auxz00_1988 = BgL_fz00_1594;
					}
				else
					{
						obj_t BgL_auxz00_1991;

						BgL_auxz00_1991 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 7995)),
							BGl_string1683z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00, BgL_fz00_1594);
						FAILURE(BgL_auxz00_1991, BFALSE, BFALSE);
					}
				return
					BGl_forzd2eachzd22z00zz__r4_control_features_6_9z00(BgL_auxz00_1988,
					BgL_auxz00_1995);
			}
		}

	}



/* for-each */
	BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t
		BgL_fz00_29, obj_t BgL_lz00_30)
	{
		{	/* Ieee/control.scm 238 */
			if (NULLP(BgL_lz00_30))
				{	/* Ieee/control.scm 240 */
					return BUNSPEC;
				}
			else
				{	/* Ieee/control.scm 240 */
					if (NULLP(CDR(((obj_t) BgL_lz00_30))))
						{	/* Ieee/control.scm 243 */
							obj_t BgL_arg1284z00_873;

							BgL_arg1284z00_873 = CAR(((obj_t) BgL_lz00_30));
							{
								obj_t BgL_lz00_1403;

								BgL_lz00_1403 = ((obj_t) BgL_arg1284z00_873);
							BgL_loopz00_1402:
								if (NULLP(BgL_lz00_1403))
									{	/* Ieee/control.scm 229 */
										return BUNSPEC;
									}
								else
									{	/* Ieee/control.scm 229 */
										{	/* Ieee/control.scm 232 */
											obj_t BgL_arg1277z00_1408;

											BgL_arg1277z00_1408 = CAR(((obj_t) BgL_lz00_1403));
											PROCEDURE_ENTRY(BgL_fz00_29) (BgL_fz00_29,
												BgL_arg1277z00_1408, BEOA);
										}
										{	/* Ieee/control.scm 233 */
											obj_t BgL_arg1280z00_1409;

											BgL_arg1280z00_1409 = CDR(((obj_t) BgL_lz00_1403));
											{
												obj_t BgL_lz00_2021;

												BgL_lz00_2021 = BgL_arg1280z00_1409;
												BgL_lz00_1403 = BgL_lz00_2021;
												goto BgL_loopz00_1402;
											}
										}
									}
							}
						}
					else
						{
							obj_t BgL_lz00_875;

							BgL_lz00_875 = BgL_lz00_30;
						BgL_zc3z04anonymousza31285ze3z87_876:
							if (NULLP(CAR(((obj_t) BgL_lz00_875))))
								{	/* Ieee/control.scm 246 */
									return BUNSPEC;
								}
							else
								{	/* Ieee/control.scm 246 */
									apply(BgL_fz00_29,
										BGl_mapzd22zd2zz__r4_control_features_6_9z00
										(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00,
											BgL_lz00_875));
									{
										obj_t BgL_lz00_2030;

										BgL_lz00_2030 =
											BGl_mapzd22zd2zz__r4_control_features_6_9z00
											(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
											BgL_lz00_875);
										BgL_lz00_875 = BgL_lz00_2030;
										goto BgL_zc3z04anonymousza31285ze3z87_876;
									}
								}
						}
				}
		}

	}



/* &for-each */
	obj_t BGl_z62forzd2eachzb0zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1596, obj_t BgL_fz00_1597, obj_t BgL_lz00_1598)
	{
		{	/* Ieee/control.scm 238 */
			{	/* Ieee/control.scm 240 */
				obj_t BgL_auxz00_2032;

				if (PROCEDUREP(BgL_fz00_1597))
					{	/* Ieee/control.scm 240 */
						BgL_auxz00_2032 = BgL_fz00_1597;
					}
				else
					{
						obj_t BgL_auxz00_2035;

						BgL_auxz00_2035 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 8365)),
							BGl_string1684z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00, BgL_fz00_1597);
						FAILURE(BgL_auxz00_2035, BFALSE, BFALSE);
					}
				return
					BGl_forzd2eachzd2zz__r4_control_features_6_9z00(BgL_auxz00_2032,
					BgL_lz00_1598);
			}
		}

	}



/* filter */
	BGL_EXPORTED_DEF obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t
		BgL_predz00_31, obj_t BgL_lz00_32)
	{
		{	/* Ieee/control.scm 255 */
			{	/* Ieee/control.scm 256 */
				obj_t BgL_hookz00_883;

				BgL_hookz00_883 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
				{
					obj_t BgL_lz00_885;
					obj_t BgL_hz00_886;

					BgL_lz00_885 = BgL_lz00_32;
					BgL_hz00_886 = BgL_hookz00_883;
				BgL_zc3z04anonymousza31291ze3z87_887:
					if (NULLP(BgL_lz00_885))
						{	/* Ieee/control.scm 260 */
							return CDR(BgL_hookz00_883);
						}
					else
						{	/* Ieee/control.scm 262 */
							bool_t BgL_test1771z00_2044;

							{	/* Ieee/control.scm 262 */
								obj_t BgL_arg1300z00_895;

								BgL_arg1300z00_895 = CAR(((obj_t) BgL_lz00_885));
								BgL_test1771z00_2044 =
									CBOOL(PROCEDURE_ENTRY(BgL_predz00_31) (BgL_predz00_31,
										BgL_arg1300z00_895, BEOA));
							}
							if (BgL_test1771z00_2044)
								{	/* Ieee/control.scm 263 */
									obj_t BgL_nhz00_891;

									{	/* Ieee/control.scm 263 */
										obj_t BgL_arg1298z00_893;

										BgL_arg1298z00_893 = CAR(((obj_t) BgL_lz00_885));
										BgL_nhz00_891 = MAKE_YOUNG_PAIR(BgL_arg1298z00_893, BNIL);
									}
									SET_CDR(BgL_hz00_886, BgL_nhz00_891);
									{	/* Ieee/control.scm 265 */
										obj_t BgL_arg1297z00_892;

										BgL_arg1297z00_892 = CDR(((obj_t) BgL_lz00_885));
										{
											obj_t BgL_hz00_2059;
											obj_t BgL_lz00_2058;

											BgL_lz00_2058 = BgL_arg1297z00_892;
											BgL_hz00_2059 = BgL_nhz00_891;
											BgL_hz00_886 = BgL_hz00_2059;
											BgL_lz00_885 = BgL_lz00_2058;
											goto BgL_zc3z04anonymousza31291ze3z87_887;
										}
									}
								}
							else
								{	/* Ieee/control.scm 267 */
									obj_t BgL_arg1299z00_894;

									BgL_arg1299z00_894 = CDR(((obj_t) BgL_lz00_885));
									{
										obj_t BgL_lz00_2062;

										BgL_lz00_2062 = BgL_arg1299z00_894;
										BgL_lz00_885 = BgL_lz00_2062;
										goto BgL_zc3z04anonymousza31291ze3z87_887;
									}
								}
						}
				}
			}
		}

	}



/* &filter */
	obj_t BGl_z62filterz62zz__r4_control_features_6_9z00(obj_t BgL_envz00_1599,
		obj_t BgL_predz00_1600, obj_t BgL_lz00_1601)
	{
		{	/* Ieee/control.scm 255 */
			{	/* Ieee/control.scm 256 */
				obj_t BgL_auxz00_2070;
				obj_t BgL_auxz00_2063;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_lz00_1601))
					{	/* Ieee/control.scm 256 */
						BgL_auxz00_2070 = BgL_lz00_1601;
					}
				else
					{
						obj_t BgL_auxz00_2073;

						BgL_auxz00_2073 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 8852)),
							BGl_string1685z00zz__r4_control_features_6_9z00,
							BGl_string1677z00zz__r4_control_features_6_9z00, BgL_lz00_1601);
						FAILURE(BgL_auxz00_2073, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_predz00_1600))
					{	/* Ieee/control.scm 256 */
						BgL_auxz00_2063 = BgL_predz00_1600;
					}
				else
					{
						obj_t BgL_auxz00_2066;

						BgL_auxz00_2066 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 8852)),
							BGl_string1685z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00,
							BgL_predz00_1600);
						FAILURE(BgL_auxz00_2066, BFALSE, BFALSE);
					}
				return
					BGl_filterz00zz__r4_control_features_6_9z00(BgL_auxz00_2063,
					BgL_auxz00_2070);
			}
		}

	}



/* filter! */
	BGL_EXPORTED_DEF obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t
		BgL_predz00_33, obj_t BgL_lisz00_34)
	{
		{	/* Ieee/control.scm 272 */
			{
				obj_t BgL_ansz00_898;

				BgL_ansz00_898 = BgL_lisz00_34;
			BgL_zc3z04anonymousza31301ze3z87_899:
				if (NULLP(BgL_ansz00_898))
					{	/* Ieee/control.scm 275 */
						return BgL_ansz00_898;
					}
				else
					{	/* Ieee/control.scm 277 */
						bool_t BgL_test1775z00_2080;

						{	/* Ieee/control.scm 277 */
							obj_t BgL_arg1326z00_931;

							BgL_arg1326z00_931 = CAR(((obj_t) BgL_ansz00_898));
							BgL_test1775z00_2080 =
								CBOOL(PROCEDURE_ENTRY(BgL_predz00_33) (BgL_predz00_33,
									BgL_arg1326z00_931, BEOA));
						}
						if (BgL_test1775z00_2080)
							{
								obj_t BgL_prevz00_915;
								obj_t BgL_lisz00_916;

								{	/* Ieee/control.scm 294 */
									obj_t BgL_arg1306z00_905;

									BgL_arg1306z00_905 = CDR(((obj_t) BgL_ansz00_898));
									{
										obj_t BgL_prevz00_1467;
										obj_t BgL_lisz00_1468;

										BgL_prevz00_1467 = BgL_ansz00_898;
										BgL_lisz00_1468 = BgL_arg1306z00_905;
									BgL_scanzd2inzd2_1466:
										if (PAIRP(BgL_lisz00_1468))
											{	/* Ieee/control.scm 282 */
												bool_t BgL_test1777z00_2092;

												{	/* Ieee/control.scm 282 */
													obj_t BgL_arg1313z00_1476;

													BgL_arg1313z00_1476 = CAR(BgL_lisz00_1468);
													BgL_test1777z00_2092 =
														CBOOL(PROCEDURE_ENTRY(BgL_predz00_33)
														(BgL_predz00_33, BgL_arg1313z00_1476, BEOA));
												}
												if (BgL_test1777z00_2092)
													{
														obj_t BgL_lisz00_2100;
														obj_t BgL_prevz00_2099;

														BgL_prevz00_2099 = BgL_lisz00_1468;
														BgL_lisz00_2100 = CDR(BgL_lisz00_1468);
														BgL_lisz00_1468 = BgL_lisz00_2100;
														BgL_prevz00_1467 = BgL_prevz00_2099;
														goto BgL_scanzd2inzd2_1466;
													}
												else
													{	/* Ieee/control.scm 282 */
														BgL_prevz00_915 = BgL_prevz00_1467;
														BgL_lisz00_916 = CDR(BgL_lisz00_1468);
													BgL_zc3z04anonymousza31314ze3z87_917:
														{
															obj_t BgL_lisz00_919;

															BgL_lisz00_919 = BgL_lisz00_916;
														BgL_zc3z04anonymousza31315ze3z87_920:
															if (PAIRP(BgL_lisz00_919))
																{	/* Ieee/control.scm 288 */
																	bool_t BgL_test1779z00_2104;

																	{	/* Ieee/control.scm 288 */
																		obj_t BgL_arg1324z00_926;

																		BgL_arg1324z00_926 = CAR(BgL_lisz00_919);
																		BgL_test1779z00_2104 =
																			CBOOL(PROCEDURE_ENTRY(BgL_predz00_33)
																			(BgL_predz00_33, BgL_arg1324z00_926,
																				BEOA));
																	}
																	if (BgL_test1779z00_2104)
																		{	/* Ieee/control.scm 288 */
																			{	/* Ieee/control.scm 290 */
																				obj_t BgL_tmpz00_2111;

																				BgL_tmpz00_2111 =
																					((obj_t) BgL_prevz00_915);
																				SET_CDR(BgL_tmpz00_2111,
																					BgL_lisz00_919);
																			}
																			{	/* Ieee/control.scm 291 */
																				obj_t BgL_arg1319z00_924;

																				BgL_arg1319z00_924 =
																					CDR(BgL_lisz00_919);
																				{
																					obj_t BgL_prevz00_1447;
																					obj_t BgL_lisz00_1448;

																					BgL_prevz00_1447 = BgL_lisz00_919;
																					BgL_lisz00_1448 = BgL_arg1319z00_924;
																				BgL_scanzd2inzd2_1446:
																					if (PAIRP(BgL_lisz00_1448))
																						{	/* Ieee/control.scm 282 */
																							bool_t BgL_test1781z00_2117;

																							{	/* Ieee/control.scm 282 */
																								obj_t BgL_arg1313z00_1456;

																								BgL_arg1313z00_1456 =
																									CAR(BgL_lisz00_1448);
																								BgL_test1781z00_2117 =
																									CBOOL(PROCEDURE_ENTRY
																									(BgL_predz00_33)
																									(BgL_predz00_33,
																										BgL_arg1313z00_1456, BEOA));
																							}
																							if (BgL_test1781z00_2117)
																								{
																									obj_t BgL_lisz00_2125;
																									obj_t BgL_prevz00_2124;

																									BgL_prevz00_2124 =
																										BgL_lisz00_1448;
																									BgL_lisz00_2125 =
																										CDR(BgL_lisz00_1448);
																									BgL_lisz00_1448 =
																										BgL_lisz00_2125;
																									BgL_prevz00_1447 =
																										BgL_prevz00_2124;
																									goto BgL_scanzd2inzd2_1446;
																								}
																							else
																								{
																									obj_t BgL_lisz00_2128;
																									obj_t BgL_prevz00_2127;

																									BgL_prevz00_2127 =
																										BgL_prevz00_1447;
																									BgL_lisz00_2128 =
																										CDR(BgL_lisz00_1448);
																									BgL_lisz00_916 =
																										BgL_lisz00_2128;
																									BgL_prevz00_915 =
																										BgL_prevz00_2127;
																									goto
																										BgL_zc3z04anonymousza31314ze3z87_917;
																								}
																						}
																					else
																						{	/* Ieee/control.scm 281 */
																							BFALSE;
																						}
																				}
																			}
																		}
																	else
																		{
																			obj_t BgL_lisz00_2130;

																			BgL_lisz00_2130 = CDR(BgL_lisz00_919);
																			BgL_lisz00_919 = BgL_lisz00_2130;
																			goto BgL_zc3z04anonymousza31315ze3z87_920;
																		}
																}
															else
																{	/* Ieee/control.scm 293 */
																	obj_t BgL_tmpz00_2132;

																	BgL_tmpz00_2132 = ((obj_t) BgL_prevz00_915);
																	SET_CDR(BgL_tmpz00_2132, BgL_lisz00_919);
																}
														}
													}
											}
										else
											{	/* Ieee/control.scm 281 */
												BFALSE;
											}
									}
								}
								return BgL_ansz00_898;
							}
						else
							{	/* Ieee/control.scm 278 */
								obj_t BgL_arg1325z00_930;

								BgL_arg1325z00_930 = CDR(((obj_t) BgL_ansz00_898));
								{
									obj_t BgL_ansz00_2138;

									BgL_ansz00_2138 = BgL_arg1325z00_930;
									BgL_ansz00_898 = BgL_ansz00_2138;
									goto BgL_zc3z04anonymousza31301ze3z87_899;
								}
							}
					}
			}
		}

	}



/* &filter! */
	obj_t BGl_z62filterz12z70zz__r4_control_features_6_9z00(obj_t BgL_envz00_1602,
		obj_t BgL_predz00_1603, obj_t BgL_lisz00_1604)
	{
		{	/* Ieee/control.scm 272 */
			{	/* Ieee/control.scm 275 */
				obj_t BgL_auxz00_2146;
				obj_t BgL_auxz00_2139;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_lisz00_1604))
					{	/* Ieee/control.scm 275 */
						BgL_auxz00_2146 = BgL_lisz00_1604;
					}
				else
					{
						obj_t BgL_auxz00_2149;

						BgL_auxz00_2149 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 9382)),
							BGl_string1686z00zz__r4_control_features_6_9z00,
							BGl_string1677z00zz__r4_control_features_6_9z00, BgL_lisz00_1604);
						FAILURE(BgL_auxz00_2149, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_predz00_1603))
					{	/* Ieee/control.scm 275 */
						BgL_auxz00_2139 = BgL_predz00_1603;
					}
				else
					{
						obj_t BgL_auxz00_2142;

						BgL_auxz00_2142 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 9382)),
							BGl_string1686z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00,
							BgL_predz00_1603);
						FAILURE(BgL_auxz00_2142, BFALSE, BFALSE);
					}
				return
					BGl_filterz12z12zz__r4_control_features_6_9z00(BgL_auxz00_2139,
					BgL_auxz00_2146);
			}
		}

	}



/* force */
	BGL_EXPORTED_DEF obj_t BGl_forcez00zz__r4_control_features_6_9z00(obj_t
		BgL_promisez00_35)
	{
		{	/* Ieee/control.scm 300 */
			return PROCEDURE_ENTRY(BgL_promisez00_35) (BgL_promisez00_35, BEOA);
		}

	}



/* &force */
	obj_t BGl_z62forcez62zz__r4_control_features_6_9z00(obj_t BgL_envz00_1605,
		obj_t BgL_promisez00_1606)
	{
		{	/* Ieee/control.scm 300 */
			return BGl_forcez00zz__r4_control_features_6_9z00(BgL_promisez00_1606);
		}

	}



/* make-promise */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t BgL_procz00_36)
	{
		{	/* Ieee/control.scm 306 */
			{	/* Ieee/control.scm 307 */
				obj_t BgL_resultzd2readyzf3z21_1616;
				obj_t BgL_resultz00_1617;

				BgL_resultzd2readyzf3z21_1616 = MAKE_CELL(BFALSE);
				BgL_resultz00_1617 = MAKE_CELL(BFALSE);
				{	/* Ieee/control.scm 309 */
					obj_t BgL_zc3z04anonymousza31327ze3z87_1607;

					BgL_zc3z04anonymousza31327ze3z87_1607 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31327ze3ze5zz__r4_control_features_6_9z00,
						(int) (((long) 0)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31327ze3z87_1607,
						(int) (((long) 0)), BgL_procz00_36);
					PROCEDURE_SET(BgL_zc3z04anonymousza31327ze3z87_1607,
						(int) (((long) 1)), ((obj_t) BgL_resultzd2readyzf3z21_1616));
					PROCEDURE_SET(BgL_zc3z04anonymousza31327ze3z87_1607,
						(int) (((long) 2)), ((obj_t) BgL_resultz00_1617));
					return BgL_zc3z04anonymousza31327ze3z87_1607;
				}
			}
		}

	}



/* &make-promise */
	obj_t BGl_z62makezd2promisezb0zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1608, obj_t BgL_procz00_1609)
	{
		{	/* Ieee/control.scm 306 */
			{	/* Ieee/control.scm 307 */
				obj_t BgL_auxz00_2169;

				if (PROCEDUREP(BgL_procz00_1609))
					{	/* Ieee/control.scm 307 */
						BgL_auxz00_2169 = BgL_procz00_1609;
					}
				else
					{
						obj_t BgL_auxz00_2172;

						BgL_auxz00_2172 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 10448)),
							BGl_string1687z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00,
							BgL_procz00_1609);
						FAILURE(BgL_auxz00_2172, BFALSE, BFALSE);
					}
				return
					BGl_makezd2promisezd2zz__r4_control_features_6_9z00(BgL_auxz00_2169);
			}
		}

	}



/* &<@anonymous:1327> */
	obj_t BGl_z62zc3z04anonymousza31327ze3ze5zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1610)
	{
		{	/* Ieee/control.scm 309 */
			{	/* Ieee/control.scm 310 */
				obj_t BgL_procz00_1611;
				obj_t BgL_resultzd2readyzf3z21_1612;
				obj_t BgL_resultz00_1613;

				BgL_procz00_1611 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1610, (int) (((long) 0))));
				BgL_resultzd2readyzf3z21_1612 =
					PROCEDURE_REF(BgL_envz00_1610, (int) (((long) 1)));
				BgL_resultz00_1613 = PROCEDURE_REF(BgL_envz00_1610, (int) (((long) 2)));
				if (CBOOL(CELL_REF(BgL_resultzd2readyzf3z21_1612)))
					{	/* Ieee/control.scm 310 */
						return CELL_REF(BgL_resultz00_1613);
					}
				else
					{	/* Ieee/control.scm 312 */
						obj_t BgL_xz00_1688;

						BgL_xz00_1688 =
							PROCEDURE_ENTRY(BgL_procz00_1611) (BgL_procz00_1611, BEOA);
						if (CBOOL(CELL_REF(BgL_resultzd2readyzf3z21_1612)))
							{	/* Ieee/control.scm 313 */
								return CELL_REF(BgL_resultz00_1613);
							}
						else
							{	/* Ieee/control.scm 313 */
								{	/* Ieee/control.scm 316 */
									obj_t BgL_auxz00_1689;

									BgL_auxz00_1689 = BTRUE;
									CELL_SET(BgL_resultzd2readyzf3z21_1612, BgL_auxz00_1689);
								}
								CELL_SET(BgL_resultz00_1613, BgL_xz00_1688);
								return CELL_REF(BgL_resultz00_1613);
							}
					}
			}
		}

	}



/* call/cc */
	BGL_EXPORTED_DEF obj_t BGl_callzf2cczf2zz__r4_control_features_6_9z00(obj_t
		BgL_procz00_37)
	{
		{	/* Ieee/control.scm 323 */
			{	/* Ieee/control.scm 325 */
				obj_t BgL_zc3z04anonymousza31329ze3z87_1621;

				BgL_zc3z04anonymousza31329ze3z87_1621 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31329ze3ze5zz__r4_control_features_6_9z00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31329ze3z87_1621, (int) (((long) 0)),
					BgL_procz00_37);
				return call_cc(BgL_zc3z04anonymousza31329ze3z87_1621);
			}
		}

	}



/* &call/cc */
	obj_t BGl_z62callzf2ccz90zz__r4_control_features_6_9z00(obj_t BgL_envz00_1622,
		obj_t BgL_procz00_1623)
	{
		{	/* Ieee/control.scm 323 */
			{	/* Ieee/control.scm 325 */
				obj_t BgL_auxz00_2197;

				if (PROCEDUREP(BgL_procz00_1623))
					{	/* Ieee/control.scm 325 */
						BgL_auxz00_2197 = BgL_procz00_1623;
					}
				else
					{
						obj_t BgL_auxz00_2200;

						BgL_auxz00_2200 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 10978)),
							BGl_string1688z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00,
							BgL_procz00_1623);
						FAILURE(BgL_auxz00_2200, BFALSE, BFALSE);
					}
				return BGl_callzf2cczf2zz__r4_control_features_6_9z00(BgL_auxz00_2197);
			}
		}

	}



/* &<@anonymous:1329> */
	obj_t BGl_z62zc3z04anonymousza31329ze3ze5zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1624, obj_t BgL_contz00_1626)
	{
		{	/* Ieee/control.scm 324 */
			{	/* Ieee/control.scm 325 */
				obj_t BgL_procz00_1625;

				BgL_procz00_1625 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1624, (int) (((long) 0))));
				{	/* Ieee/control.scm 325 */
					obj_t BgL_evcz00_1690;

					BgL_evcz00_1690 = BGl_getzd2evaluationzd2contextz00zz__evaluatez00();
					{	/* Ieee/control.scm 327 */
						obj_t BgL_zc3z04anonymousza31331ze3z87_1691;

						BgL_zc3z04anonymousza31331ze3z87_1691 =
							MAKE_VA_PROCEDURE
							(BGl_z62zc3z04anonymousza31331ze3ze5zz__r4_control_features_6_9z00,
							(int) (((long) -1)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31331ze3z87_1691,
							(int) (((long) 0)), BgL_evcz00_1690);
						PROCEDURE_SET(BgL_zc3z04anonymousza31331ze3z87_1691,
							(int) (((long) 1)), BgL_contz00_1626);
						return PROCEDURE_ENTRY(BgL_procz00_1625) (BgL_procz00_1625,
							BgL_zc3z04anonymousza31331ze3z87_1691, BEOA);
					}
				}
			}
		}

	}



/* &<@anonymous:1331> */
	obj_t BGl_z62zc3z04anonymousza31331ze3ze5zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1627, obj_t BgL_valsz00_1630)
	{
		{	/* Ieee/control.scm 326 */
			{	/* Ieee/control.scm 327 */
				obj_t BgL_evcz00_1628;
				obj_t BgL_contz00_1629;

				BgL_evcz00_1628 = PROCEDURE_REF(BgL_envz00_1627, (int) (((long) 0)));
				BgL_contz00_1629 = PROCEDURE_REF(BgL_envz00_1627, (int) (((long) 1)));
				BGl_setzd2evaluationzd2contextz12z12zz__evaluatez00(BgL_evcz00_1628);
				{	/* Ieee/control.scm 328 */
					bool_t BgL_test1788z00_2225;

					if (PAIRP(BgL_valsz00_1630))
						{	/* Ieee/control.scm 328 */
							BgL_test1788z00_2225 = NULLP(CDR(BgL_valsz00_1630));
						}
					else
						{	/* Ieee/control.scm 328 */
							BgL_test1788z00_2225 = ((bool_t) 0);
						}
					if (BgL_test1788z00_2225)
						{	/* Ieee/control.scm 329 */
							obj_t BgL_arg1335z00_1692;

							BgL_arg1335z00_1692 = CAR(BgL_valsz00_1630);
							return
								PROCEDURE_ENTRY(BgL_contz00_1629) (BgL_contz00_1629,
								BgL_arg1335z00_1692, BEOA);
						}
					else
						{	/* Ieee/control.scm 328 */
							{	/* Ieee/control.scm 331 */
								int BgL_res1614z00_1693;

								{	/* Ieee/control.scm 331 */
									int BgL_tmpz00_2235;

									BgL_tmpz00_2235 = (int) (((long) -1));
									BgL_res1614z00_1693 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2235);
								} BgL_res1614z00_1693;
							}
							return
								PROCEDURE_ENTRY(BgL_contz00_1629) (BgL_contz00_1629,
								BgL_valsz00_1630, BEOA);
						}
				}
			}
		}

	}



/* call-with-current-continuation */
	BGL_EXPORTED_DEF obj_t
		BGl_callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00
		(obj_t BgL_procz00_38)
	{
		{	/* Ieee/control.scm 341 */
			return BGl_callzf2cczf2zz__r4_control_features_6_9z00(BgL_procz00_38);
		}

	}



/* &call-with-current-continuation */
	obj_t
		BGl_z62callzd2withzd2currentzd2continuationzb0zz__r4_control_features_6_9z00
		(obj_t BgL_envz00_1631, obj_t BgL_procz00_1632)
	{
		{	/* Ieee/control.scm 341 */
			{	/* Ieee/control.scm 342 */
				obj_t BgL_auxz00_2243;

				if (PROCEDUREP(BgL_procz00_1632))
					{	/* Ieee/control.scm 342 */
						BgL_auxz00_2243 = BgL_procz00_1632;
					}
				else
					{
						obj_t BgL_auxz00_2246;

						BgL_auxz00_2246 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 11595)),
							BGl_string1689z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00,
							BgL_procz00_1632);
						FAILURE(BgL_auxz00_2246, BFALSE, BFALSE);
					}
				return
					BGl_callzd2withzd2currentzd2continuationzd2zz__r4_control_features_6_9z00
					(BgL_auxz00_2243);
			}
		}

	}



/* dynamic-wind */
	BGL_EXPORTED_DEF obj_t
		BGl_dynamiczd2windzd2zz__r4_control_features_6_9z00(obj_t BgL_beforez00_39,
		obj_t BgL_thunkz00_40, obj_t BgL_afterz00_41)
	{
		{	/* Ieee/control.scm 347 */
			PROCEDURE_ENTRY(BgL_beforez00_39) (BgL_beforez00_39, BEOA);
			{	/* Ieee/control.scm 349 */

				PUSH_BEFORE(BgL_beforez00_39);
				{	/* Ieee/control.scm 351 */
					obj_t BgL_exitd1014z00_1489;

					BgL_exitd1014z00_1489 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Ieee/control.scm 354 */
						obj_t BgL_zc3z04anonymousza31338ze3z87_1633;

						BgL_zc3z04anonymousza31338ze3z87_1633 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31338ze3ze5zz__r4_control_features_6_9z00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31338ze3z87_1633,
							(int) (((long) 0)), BgL_afterz00_41);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1014z00_1489,
							BgL_zc3z04anonymousza31338ze3z87_1633);
						{	/* Ieee/control.scm 352 */
							obj_t BgL_tmp1016z00_1491;

							BgL_tmp1016z00_1491 =
								PROCEDURE_ENTRY(BgL_thunkz00_40) (BgL_thunkz00_40, BEOA);
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1014z00_1489);
							PROCEDURE_ENTRY(BgL_afterz00_41) (BgL_afterz00_41, BEOA);
							POP_BEFORE();
							return BgL_tmp1016z00_1491;
						}
					}
				}
			}
		}

	}



/* &dynamic-wind */
	obj_t BGl_z62dynamiczd2windzb0zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1634, obj_t BgL_beforez00_1635, obj_t BgL_thunkz00_1636,
		obj_t BgL_afterz00_1637)
	{
		{	/* Ieee/control.scm 347 */
			{	/* Ieee/control.scm 348 */
				obj_t BgL_auxz00_2284;
				obj_t BgL_auxz00_2277;
				obj_t BgL_auxz00_2270;

				if (PROCEDUREP(BgL_afterz00_1637))
					{	/* Ieee/control.scm 348 */
						BgL_auxz00_2284 = BgL_afterz00_1637;
					}
				else
					{
						obj_t BgL_auxz00_2287;

						BgL_auxz00_2287 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 11919)),
							BGl_string1690z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00,
							BgL_afterz00_1637);
						FAILURE(BgL_auxz00_2287, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_thunkz00_1636))
					{	/* Ieee/control.scm 348 */
						BgL_auxz00_2277 = BgL_thunkz00_1636;
					}
				else
					{
						obj_t BgL_auxz00_2280;

						BgL_auxz00_2280 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 11919)),
							BGl_string1690z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00,
							BgL_thunkz00_1636);
						FAILURE(BgL_auxz00_2280, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_beforez00_1635))
					{	/* Ieee/control.scm 348 */
						BgL_auxz00_2270 = BgL_beforez00_1635;
					}
				else
					{
						obj_t BgL_auxz00_2273;

						BgL_auxz00_2273 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string1673z00zz__r4_control_features_6_9z00,
							BINT(((long) 11919)),
							BGl_string1690z00zz__r4_control_features_6_9z00,
							BGl_string1675z00zz__r4_control_features_6_9z00,
							BgL_beforez00_1635);
						FAILURE(BgL_auxz00_2273, BFALSE, BFALSE);
					}
				return
					BGl_dynamiczd2windzd2zz__r4_control_features_6_9z00(BgL_auxz00_2270,
					BgL_auxz00_2277, BgL_auxz00_2284);
			}
		}

	}



/* &<@anonymous:1338> */
	obj_t BGl_z62zc3z04anonymousza31338ze3ze5zz__r4_control_features_6_9z00(obj_t
		BgL_envz00_1638)
	{
		{	/* Ieee/control.scm 351 */
			{	/* Ieee/control.scm 354 */
				obj_t BgL_afterz00_1639;

				BgL_afterz00_1639 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1638, (int) (((long) 0))));
				PROCEDURE_ENTRY(BgL_afterz00_1639) (BgL_afterz00_1639, BEOA);
				return POP_BEFORE();
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_control_features_6_9z00()
	{
		{	/* Ieee/control.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1691z00zz__r4_control_features_6_9z00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1691z00zz__r4_control_features_6_9z00));
			return
				BGl_modulezd2initializa7ationz75zz__evaluatez00(((long) 398581706),
				BSTRING_TO_STRING(BGl_string1691z00zz__r4_control_features_6_9z00));
		}

	}

#ifdef __cplusplus
}
#endif
