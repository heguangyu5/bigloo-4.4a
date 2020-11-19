/*===========================================================================*/
/*   (Eval/evenv.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/evenv.scm -indent -o objs/obj_u/Eval/evenv.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62warningz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                    *BgL_z62warningz62_bglt;

	typedef struct BgL_z62evalzd2warningzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_argsz00;
	}                           *BgL_z62evalzd2warningzb0_bglt;


	extern obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62definezd2primopzd2refz12z70zz__evenvz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62makezd2evalzd2globalz62zz__evenvz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62evalzd2globalzd2namez62zz__evenvz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__evenvz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bindzd2evalzd2globalz12z70zz__evenvz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62evalzd2globalzf3z43zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2globalzd2valuez00zz__evenvz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__evenvz00();
	BGL_EXPORTED_DECL obj_t
		BGl_evalzd2globalzd2modulezd2setz12zc0zz__evenvz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__evenvz00();
	static obj_t BGl_z62unbindzd2primopz12za2zz__evenvz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62evalzd2globalzd2tagzd2setz12za2zz__evenvz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_z62evalzd2globalzd2modulez62zz__evenvz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__evenvz00();
	BGL_EXPORTED_DECL obj_t BGl_evalzd2globalzd2tagzd2setz12zc0zz__evenvz00(obj_t,
		int);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2globalzd2locz00zz__evenvz00(obj_t);
	static obj_t BGl_z62evalzd2globalzd2locz62zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_definezd2primopzd2refz12z12zz__evenvz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unbindzd2primopz12zc0zz__evenvz00(obj_t);
	BGL_EXPORTED_DECL int BGl_evalzd2globalzd2tagz00zz__evenvz00(obj_t);
	static obj_t BGl_z62evalzd2globalzd2tagz62zz__evenvz00(obj_t, obj_t);
	extern obj_t BGl_z62evalzd2warningzb0zz__objectz00;
	BGL_EXPORTED_DECL obj_t
		BGl_initzd2thezd2globalzd2environmentz12zc0zz__evenvz00();
	static obj_t BGl_z62evalzd2globalzd2valuez62zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_definezd2primopzd2refzf2locz12ze0zz__evenvz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62definezd2primopz12za2zz__evenvz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2lookupzd2zz__evenvz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2evalzd2globalzd2valuez12zc0zz__evenvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2globalzf3z21zz__evenvz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__evenvz00();
	static obj_t BGl_z62evalzd2globalzd2modulezd2setz12za2zz__evenvz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__evenvz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__evenvz00();
	BGL_EXPORTED_DECL obj_t BGl_bindzd2evalzd2globalz12z12zz__evenvz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2globalzd2modulez00zz__evenvz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_definezd2primopz12zc0zz__evenvz00(obj_t, obj_t);
	extern obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2evalzd2globalz00zz__evenvz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evalzd2globalzd2namez00zz__evenvz00(obj_t);
	extern obj_t BGl_warningzd2notifyzd2zz__errorz00(obj_t);
	static obj_t BGl_symbol1638z00zz__evenvz00 = BUNSPEC;
	static obj_t BGl_z62evalzd2lookupzb0zz__evenvz00(obj_t, obj_t);
	static obj_t BGl_z62definezd2primopzd2refzf2locz12z82zz__evenvz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1643z00zz__evenvz00 = BUNSPEC;
	static obj_t BGl_symbol1648z00zz__evenvz00 = BUNSPEC;
	static obj_t
		BGl_z62initzd2thezd2globalzd2environmentz12za2zz__evenvz00(obj_t);
	static obj_t BGl_z62setzd2evalzd2globalzd2valuez12za2zz__evenvz00(obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unbindzd2primopz12zd2envz12zz__evenvz00,
		BgL_bgl_za762unbindza7d2prim1663z00,
		BGl_z62unbindzd2primopz12za2zz__evenvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2globalzd2valuezd2envzd2zz__evenvz00,
		BgL_bgl_za762evalza7d2global1664z00,
		BGl_z62evalzd2globalzd2valuez62zz__evenvz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2globalzf3zd2envzf3zz__evenvz00,
		BgL_bgl_za762evalza7d2global1665z00, BGl_z62evalzd2globalzf3z43zz__evenvz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1639z00zz__evenvz00,
		BgL_bgl_string1639za700za7za7_1666za7, "nothing", 7);
	      DEFINE_STRING(BGl_string1640z00zz__evenvz00,
		BgL_bgl_string1640za700za7za7_1667za7, "/tmp/4.4a/runtime/Eval/evenv.scm",
		32);
	      DEFINE_STRING(BGl_string1641z00zz__evenvz00,
		BgL_bgl_string1641za700za7za7_1668za7, "&make-eval-global", 17);
	      DEFINE_STRING(BGl_string1642z00zz__evenvz00,
		BgL_bgl_string1642za700za7za7_1669za7, "symbol", 6);
	      DEFINE_STRING(BGl_string1644z00zz__evenvz00,
		BgL_bgl_string1644za700za7za7_1670za7, "_0000", 5);
	      DEFINE_STRING(BGl_string1645z00zz__evenvz00,
		BgL_bgl_string1645za700za7za7_1671za7, "&bind-eval-global!", 18);
	      DEFINE_STRING(BGl_string1646z00zz__evenvz00,
		BgL_bgl_string1646za700za7za7_1672za7, "vector", 6);
	      DEFINE_STRING(BGl_string1647z00zz__evenvz00,
		BgL_bgl_string1647za700za7za7_1673za7, "&unbind-primop!", 15);
	      DEFINE_STRING(BGl_string1649z00zz__evenvz00,
		BgL_bgl_string1649za700za7za7_1674za7, "_0000_assert", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2globalzd2namezd2envzd2zz__evenvz00,
		BgL_bgl_za762evalza7d2global1675z00,
		BGl_z62evalzd2globalzd2namez62zz__evenvz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1650z00zz__evenvz00,
		BgL_bgl_string1650za700za7za7_1676za7, "&define-primop!", 15);
	      DEFINE_STRING(BGl_string1651z00zz__evenvz00,
		BgL_bgl_string1651za700za7za7_1677za7, "overriding compiled constant", 28);
	      DEFINE_STRING(BGl_string1652z00zz__evenvz00,
		BgL_bgl_string1652za700za7za7_1678za7, "&define-primop-ref!", 19);
	      DEFINE_STRING(BGl_string1653z00zz__evenvz00,
		BgL_bgl_string1653za700za7za7_1679za7, "&define-primop-ref/loc!", 23);
	      DEFINE_STRING(BGl_string1654z00zz__evenvz00,
		BgL_bgl_string1654za700za7za7_1680za7, "&eval-lookup", 12);
	      DEFINE_STRING(BGl_string1655z00zz__evenvz00,
		BgL_bgl_string1655za700za7za7_1681za7, "&eval-global-tag", 16);
	      DEFINE_STRING(BGl_string1656z00zz__evenvz00,
		BgL_bgl_string1656za700za7za7_1682za7, "&eval-global-tag-set!", 21);
	      DEFINE_STRING(BGl_string1657z00zz__evenvz00,
		BgL_bgl_string1657za700za7za7_1683za7, "bint", 4);
	      DEFINE_STRING(BGl_string1658z00zz__evenvz00,
		BgL_bgl_string1658za700za7za7_1684za7, "&eval-global-name", 17);
	      DEFINE_STRING(BGl_string1659z00zz__evenvz00,
		BgL_bgl_string1659za700za7za7_1685za7, "&eval-global-value", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2globalzd2tagzd2envzd2zz__evenvz00,
		BgL_bgl_za762evalza7d2global1686z00,
		BGl_z62evalzd2globalzd2tagz62zz__evenvz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1660z00zz__evenvz00,
		BgL_bgl_string1660za700za7za7_1687za7, "&set-eval-global-value!", 23);
	      DEFINE_STRING(BGl_string1661z00zz__evenvz00,
		BgL_bgl_string1661za700za7za7_1688za7, "&eval-global-module-set!", 24);
	      DEFINE_STRING(BGl_string1662z00zz__evenvz00,
		BgL_bgl_string1662za700za7za7_1689za7, "__evenv", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_definezd2primopzd2refzf2locz12zd2envz32zz__evenvz00,
		BgL_bgl_za762defineza7d2prim1690z00,
		BGl_z62definezd2primopzd2refzf2locz12z82zz__evenvz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2globalzd2tagzd2setz12zd2envz12zz__evenvz00,
		BgL_bgl_za762evalza7d2global1691z00,
		BGl_z62evalzd2globalzd2tagzd2setz12za2zz__evenvz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2lookupzd2envz00zz__evenvz00,
		BgL_bgl_za762evalza7d2lookup1692z00, BGl_z62evalzd2lookupzb0zz__evenvz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2globalzd2loczd2envzd2zz__evenvz00,
		BgL_bgl_za762evalza7d2global1693z00,
		BGl_z62evalzd2globalzd2locz62zz__evenvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_evalzd2globalzd2modulezd2setz12zd2envz12zz__evenvz00,
		BgL_bgl_za762evalza7d2global1694z00,
		BGl_z62evalzd2globalzd2modulezd2setz12za2zz__evenvz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_definezd2primopzd2refz12zd2envzc0zz__evenvz00,
		BgL_bgl_za762defineza7d2prim1695z00,
		BGl_z62definezd2primopzd2refz12z70zz__evenvz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_definezd2primopz12zd2envz12zz__evenvz00,
		BgL_bgl_za762defineza7d2prim1696z00,
		BGl_z62definezd2primopz12za2zz__evenvz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bindzd2evalzd2globalz12zd2envzc0zz__evenvz00,
		BgL_bgl_za762bindza7d2evalza7d1697za7,
		BGl_z62bindzd2evalzd2globalz12z70zz__evenvz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evalzd2globalzd2modulezd2envzd2zz__evenvz00,
		BgL_bgl_za762evalza7d2global1698z00,
		BGl_z62evalzd2globalzd2modulez62zz__evenvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initzd2thezd2globalzd2environmentz12zd2envz12zz__evenvz00,
		BgL_bgl_za762initza7d2theza7d21699za7,
		BGl_z62initzd2thezd2globalzd2environmentz12za2zz__evenvz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2evalzd2globalzd2valuez12zd2envz12zz__evenvz00,
		BgL_bgl_za762setza7d2evalza7d21700za7,
		BGl_z62setzd2evalzd2globalzd2valuez12za2zz__evenvz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2evalzd2globalzd2envzd2zz__evenvz00,
		BgL_bgl_za762makeza7d2evalza7d1701za7,
		BGl_z62makezd2evalzd2globalz62zz__evenvz00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__evenvz00));
		     ADD_ROOT((void *) (&BGl_symbol1638z00zz__evenvz00));
		     ADD_ROOT((void *) (&BGl_symbol1643z00zz__evenvz00));
		     ADD_ROOT((void *) (&BGl_symbol1648z00zz__evenvz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long
		BgL_checksumz00_1909, char *BgL_fromz00_1910)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__evenvz00))
				{
					BGl_requirezd2initializa7ationz75zz__evenvz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__evenvz00();
					BGl_cnstzd2initzd2zz__evenvz00();
					BGl_importedzd2moduleszd2initz00zz__evenvz00();
					return BGl_methodzd2initzd2zz__evenvz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__evenvz00()
	{
		{	/* Eval/evenv.scm 14 */
			BGl_symbol1638z00zz__evenvz00 =
				bstring_to_symbol(BGl_string1639z00zz__evenvz00);
			BGl_symbol1643z00zz__evenvz00 =
				bstring_to_symbol(BGl_string1644z00zz__evenvz00);
			return (BGl_symbol1648z00zz__evenvz00 =
				bstring_to_symbol(BGl_string1649z00zz__evenvz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__evenvz00()
	{
		{	/* Eval/evenv.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* init-the-global-environment! */
	BGL_EXPORTED_DEF obj_t
		BGl_initzd2thezd2globalzd2environmentz12zc0zz__evenvz00()
	{
		{	/* Eval/evenv.scm 87 */
			return BGl_symbol1638z00zz__evenvz00;
		}

	}



/* &init-the-global-environment! */
	obj_t BGl_z62initzd2thezd2globalzd2environmentz12za2zz__evenvz00(obj_t
		BgL_envz00_1834)
	{
		{	/* Eval/evenv.scm 87 */
			return BGl_initzd2thezd2globalzd2environmentz12zc0zz__evenvz00();
		}

	}



/* eval-global? */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2globalzf3z21zz__evenvz00(obj_t
		BgL_variablez00_3)
	{
		{	/* Eval/evenv.scm 107 */
			if (VECTORP(BgL_variablez00_3))
				{	/* Eval/evenv.scm 108 */
					return BBOOL((VECTOR_LENGTH(BgL_variablez00_3) == ((long) 5)));
				}
			else
				{	/* Eval/evenv.scm 108 */
					return BFALSE;
				}
		}

	}



/* &eval-global? */
	obj_t BGl_z62evalzd2globalzf3z43zz__evenvz00(obj_t BgL_envz00_1835,
		obj_t BgL_variablez00_1836)
	{
		{	/* Eval/evenv.scm 107 */
			return BGl_evalzd2globalzf3z21zz__evenvz00(BgL_variablez00_1836);
		}

	}



/* make-eval-global */
	BGL_EXPORTED_DEF obj_t BGl_makezd2evalzd2globalz00zz__evenvz00(obj_t
		BgL_idz00_4, obj_t BgL_modz00_5, obj_t BgL_locz00_6)
	{
		{	/* Eval/evenv.scm 115 */
			{	/* Eval/evenv.scm 116 */
				obj_t BgL_v1082z00_1908;

				BgL_v1082z00_1908 = create_vector(((long) 5));
				VECTOR_SET(BgL_v1082z00_1908, ((long) 0), BINT(((long) 2)));
				VECTOR_SET(BgL_v1082z00_1908, ((long) 1), BgL_idz00_4);
				VECTOR_SET(BgL_v1082z00_1908, ((long) 2), BUNSPEC);
				VECTOR_SET(BgL_v1082z00_1908, ((long) 3), BgL_modz00_5);
				VECTOR_SET(BgL_v1082z00_1908, ((long) 4), BgL_locz00_6);
				return BgL_v1082z00_1908;
			}
		}

	}



/* &make-eval-global */
	obj_t BGl_z62makezd2evalzd2globalz62zz__evenvz00(obj_t BgL_envz00_1837,
		obj_t BgL_idz00_1838, obj_t BgL_modz00_1839, obj_t BgL_locz00_1840)
	{
		{	/* Eval/evenv.scm 115 */
			{	/* Eval/evenv.scm 116 */
				obj_t BgL_auxz00_1936;

				if (SYMBOLP(BgL_idz00_1838))
					{	/* Eval/evenv.scm 116 */
						BgL_auxz00_1936 = BgL_idz00_1838;
					}
				else
					{
						obj_t BgL_auxz00_1939;

						BgL_auxz00_1939 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 5032)), BGl_string1641z00zz__evenvz00,
							BGl_string1642z00zz__evenvz00, BgL_idz00_1838);
						FAILURE(BgL_auxz00_1939, BFALSE, BFALSE);
					}
				return
					BGl_makezd2evalzd2globalz00zz__evenvz00(BgL_auxz00_1936,
					BgL_modz00_1839, BgL_locz00_1840);
			}
		}

	}



/* bind-eval-global! */
	BGL_EXPORTED_DEF obj_t BGl_bindzd2evalzd2globalz12z12zz__evenvz00(obj_t
		BgL_namez00_7, obj_t BgL_varz00_8)
	{
		{	/* Eval/evenv.scm 121 */
			return
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_namez00_7,
				BGl_symbol1643z00zz__evenvz00, BgL_varz00_8);
		}

	}



/* &bind-eval-global! */
	obj_t BGl_z62bindzd2evalzd2globalz12z70zz__evenvz00(obj_t BgL_envz00_1841,
		obj_t BgL_namez00_1842, obj_t BgL_varz00_1843)
	{
		{	/* Eval/evenv.scm 121 */
			{	/* Eval/evenv.scm 122 */
				obj_t BgL_auxz00_1952;
				obj_t BgL_auxz00_1945;

				if (VECTORP(BgL_varz00_1843))
					{	/* Eval/evenv.scm 122 */
						BgL_auxz00_1952 = BgL_varz00_1843;
					}
				else
					{
						obj_t BgL_auxz00_1955;

						BgL_auxz00_1955 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 5331)), BGl_string1645z00zz__evenvz00,
							BGl_string1646z00zz__evenvz00, BgL_varz00_1843);
						FAILURE(BgL_auxz00_1955, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_namez00_1842))
					{	/* Eval/evenv.scm 122 */
						BgL_auxz00_1945 = BgL_namez00_1842;
					}
				else
					{
						obj_t BgL_auxz00_1948;

						BgL_auxz00_1948 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 5331)), BGl_string1645z00zz__evenvz00,
							BGl_string1642z00zz__evenvz00, BgL_namez00_1842);
						FAILURE(BgL_auxz00_1948, BFALSE, BFALSE);
					}
				return
					BGl_bindzd2evalzd2globalz12z12zz__evenvz00(BgL_auxz00_1945,
					BgL_auxz00_1952);
			}
		}

	}



/* unbind-primop! */
	BGL_EXPORTED_DEF obj_t BGl_unbindzd2primopz12zc0zz__evenvz00(obj_t
		BgL_namez00_11)
	{
		{	/* Eval/evenv.scm 133 */
			return
				BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_namez00_11,
				BGl_symbol1643z00zz__evenvz00);
		}

	}



/* &unbind-primop! */
	obj_t BGl_z62unbindzd2primopz12za2zz__evenvz00(obj_t BgL_envz00_1844,
		obj_t BgL_namez00_1845)
	{
		{	/* Eval/evenv.scm 133 */
			{	/* Eval/evenv.scm 134 */
				obj_t BgL_auxz00_1961;

				if (SYMBOLP(BgL_namez00_1845))
					{	/* Eval/evenv.scm 134 */
						BgL_auxz00_1961 = BgL_namez00_1845;
					}
				else
					{
						obj_t BgL_auxz00_1964;

						BgL_auxz00_1964 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 5920)), BGl_string1647z00zz__evenvz00,
							BGl_string1642z00zz__evenvz00, BgL_namez00_1845);
						FAILURE(BgL_auxz00_1964, BFALSE, BFALSE);
					}
				return BGl_unbindzd2primopz12zc0zz__evenvz00(BgL_auxz00_1961);
			}
		}

	}



/* define-primop! */
	BGL_EXPORTED_DEF obj_t BGl_definezd2primopz12zc0zz__evenvz00(obj_t
		BgL_varz00_13, obj_t BgL_valz00_14)
	{
		{	/* Eval/evenv.scm 145 */
			{	/* Eval/evenv.scm 146 */
				obj_t BgL_cellz00_1088;

				{	/* Eval/evenv.scm 195 */
					obj_t BgL_propz00_1523;

					BgL_propz00_1523 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_13,
						BGl_symbol1648z00zz__evenvz00);
					if (CBOOL(BgL_propz00_1523))
						{	/* Eval/evenv.scm 196 */
							BgL_cellz00_1088 = BgL_propz00_1523;
						}
					else
						{	/* Eval/evenv.scm 198 */
							obj_t BgL_propz00_1524;

							BgL_propz00_1524 =
								BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_13,
								BGl_symbol1643z00zz__evenvz00);
							if (CBOOL(BgL_propz00_1524))
								{	/* Eval/evenv.scm 199 */
									BgL_cellz00_1088 = BgL_propz00_1524;
								}
							else
								{	/* Eval/evenv.scm 199 */
									BgL_cellz00_1088 = BFALSE;
								}
						}
				}
				{	/* Eval/evenv.scm 147 */
					bool_t BgL_test1710z00_1975;

					if (VECTORP(BgL_cellz00_1088))
						{	/* Eval/evenv.scm 108 */
							BgL_test1710z00_1975 =
								(VECTOR_LENGTH(BgL_cellz00_1088) == ((long) 5));
						}
					else
						{	/* Eval/evenv.scm 108 */
							BgL_test1710z00_1975 = ((bool_t) 0);
						}
					if (BgL_test1710z00_1975)
						{	/* Eval/evenv.scm 147 */
							return VECTOR_SET(BgL_cellz00_1088, ((long) 2), BgL_valz00_14);
						}
					else
						{	/* Eval/evenv.scm 148 */
							obj_t BgL_arg1172z00_1090;

							{	/* Eval/evenv.scm 148 */
								obj_t BgL_v1083z00_1091;

								BgL_v1083z00_1091 = create_vector(((long) 5));
								VECTOR_SET(BgL_v1083z00_1091, ((long) 0), BINT(((long) 0)));
								VECTOR_SET(BgL_v1083z00_1091, ((long) 1), BgL_varz00_13);
								VECTOR_SET(BgL_v1083z00_1091, ((long) 2), BgL_valz00_14);
								VECTOR_SET(BgL_v1083z00_1091, ((long) 3), BFALSE);
								VECTOR_SET(BgL_v1083z00_1091, ((long) 4), BFALSE);
								BgL_arg1172z00_1090 = BgL_v1083z00_1091;
							}
							return
								BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_varz00_13,
								BGl_symbol1643z00zz__evenvz00, BgL_arg1172z00_1090);
						}
				}
			}
		}

	}



/* &define-primop! */
	obj_t BGl_z62definezd2primopz12za2zz__evenvz00(obj_t BgL_envz00_1846,
		obj_t BgL_varz00_1847, obj_t BgL_valz00_1848)
	{
		{	/* Eval/evenv.scm 145 */
			{	/* Eval/evenv.scm 146 */
				obj_t BgL_auxz00_1989;

				if (SYMBOLP(BgL_varz00_1847))
					{	/* Eval/evenv.scm 146 */
						BgL_auxz00_1989 = BgL_varz00_1847;
					}
				else
					{
						obj_t BgL_auxz00_1992;

						BgL_auxz00_1992 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 6497)), BGl_string1650z00zz__evenvz00,
							BGl_string1642z00zz__evenvz00, BgL_varz00_1847);
						FAILURE(BgL_auxz00_1992, BFALSE, BFALSE);
					}
				return
					BGl_definezd2primopz12zc0zz__evenvz00(BgL_auxz00_1989,
					BgL_valz00_1848);
			}
		}

	}



/* define-primop-ref! */
	BGL_EXPORTED_DEF obj_t BGl_definezd2primopzd2refz12z12zz__evenvz00(obj_t
		BgL_varz00_15, obj_t BgL_addrz00_16)
	{
		{	/* Eval/evenv.scm 154 */
			{	/* Eval/evenv.scm 155 */
				obj_t BgL_cellz00_1092;

				{	/* Eval/evenv.scm 195 */
					obj_t BgL_propz00_1541;

					BgL_propz00_1541 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_15,
						BGl_symbol1648z00zz__evenvz00);
					if (CBOOL(BgL_propz00_1541))
						{	/* Eval/evenv.scm 196 */
							BgL_cellz00_1092 = BgL_propz00_1541;
						}
					else
						{	/* Eval/evenv.scm 198 */
							obj_t BgL_propz00_1542;

							BgL_propz00_1542 =
								BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_15,
								BGl_symbol1643z00zz__evenvz00);
							if (CBOOL(BgL_propz00_1542))
								{	/* Eval/evenv.scm 199 */
									BgL_cellz00_1092 = BgL_propz00_1542;
								}
							else
								{	/* Eval/evenv.scm 199 */
									BgL_cellz00_1092 = BFALSE;
								}
						}
				}
				{	/* Eval/evenv.scm 156 */
					bool_t BgL_test1715z00_2003;

					if (VECTORP(BgL_cellz00_1092))
						{	/* Eval/evenv.scm 108 */
							BgL_test1715z00_2003 =
								(VECTOR_LENGTH(BgL_cellz00_1092) == ((long) 5));
						}
					else
						{	/* Eval/evenv.scm 108 */
							BgL_test1715z00_2003 = ((bool_t) 0);
						}
					if (BgL_test1715z00_2003)
						{	/* Eval/evenv.scm 156 */
							VECTOR_SET(BgL_cellz00_1092, ((long) 2), BgL_addrz00_16);
							{	/* Eval/evenv.scm 162 */
								BgL_z62evalzd2warningzb0_bglt BgL_arg1174z00_1094;

								{	/* Eval/evenv.scm 162 */
									BgL_z62evalzd2warningzb0_bglt BgL_new1040z00_1095;

									{	/* Eval/evenv.scm 163 */
										BgL_z62evalzd2warningzb0_bglt BgL_new1039z00_1098;

										BgL_new1039z00_1098 =
											((BgL_z62evalzd2warningzb0_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_z62evalzd2warningzb0_bgl))));
										{	/* Eval/evenv.scm 163 */
											long BgL_arg1177z00_1099;

											{	/* Eval/evenv.scm 163 */
												long BgL_res1552z00_1552;

												BgL_res1552z00_1552 =
													BGL_CLASS_INDEX
													(BGl_z62evalzd2warningzb0zz__objectz00);
												BgL_arg1177z00_1099 = BgL_res1552z00_1552;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1039z00_1098),
												BgL_arg1177z00_1099);
										}
										BgL_new1040z00_1095 = BgL_new1039z00_1098;
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1040z00_1095)))->
											BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1040z00_1095)))->BgL_locationz00) =
										((obj_t) BFALSE), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1040z00_1095)))->BgL_stackz00) =
										((obj_t) BFALSE), BUNSPEC);
									{
										obj_t BgL_auxz00_2019;

										{	/* Eval/evenv.scm 166 */
											obj_t BgL_list1175z00_1096;

											{	/* Eval/evenv.scm 166 */
												obj_t BgL_arg1176z00_1097;

												BgL_arg1176z00_1097 =
													MAKE_YOUNG_PAIR(BgL_varz00_15, BNIL);
												BgL_list1175z00_1096 =
													MAKE_YOUNG_PAIR(BGl_string1651z00zz__evenvz00,
													BgL_arg1176z00_1097);
											}
											BgL_auxz00_2019 = BgL_list1175z00_1096;
										}
										((((BgL_z62warningz62_bglt) COBJECT(
														((BgL_z62warningz62_bglt) BgL_new1040z00_1095)))->
												BgL_argsz00) = ((obj_t) BgL_auxz00_2019), BUNSPEC);
									}
									BgL_arg1174z00_1094 = BgL_new1040z00_1095;
								}
								return
									BGl_warningzd2notifyzd2zz__errorz00(
									((obj_t) BgL_arg1174z00_1094));
							}
						}
					else
						{	/* Eval/evenv.scm 157 */
							obj_t BgL_arg1178z00_1100;

							{	/* Eval/evenv.scm 157 */
								obj_t BgL_v1084z00_1101;

								BgL_v1084z00_1101 = create_vector(((long) 5));
								VECTOR_SET(BgL_v1084z00_1101, ((long) 0), BINT(((long) 1)));
								VECTOR_SET(BgL_v1084z00_1101, ((long) 1), BgL_varz00_15);
								VECTOR_SET(BgL_v1084z00_1101, ((long) 2), BgL_addrz00_16);
								VECTOR_SET(BgL_v1084z00_1101, ((long) 3), BFALSE);
								VECTOR_SET(BgL_v1084z00_1101, ((long) 4), BFALSE);
								BgL_arg1178z00_1100 = BgL_v1084z00_1101;
							}
							return
								BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_varz00_15,
								BGl_symbol1643z00zz__evenvz00, BgL_arg1178z00_1100);
						}
				}
			}
		}

	}



/* &define-primop-ref! */
	obj_t BGl_z62definezd2primopzd2refz12z70zz__evenvz00(obj_t BgL_envz00_1849,
		obj_t BgL_varz00_1850, obj_t BgL_addrz00_1851)
	{
		{	/* Eval/evenv.scm 154 */
			{	/* Eval/evenv.scm 155 */
				obj_t BgL_auxz00_2034;

				if (SYMBOLP(BgL_varz00_1850))
					{	/* Eval/evenv.scm 155 */
						BgL_auxz00_2034 = BgL_varz00_1850;
					}
				else
					{
						obj_t BgL_auxz00_2037;

						BgL_auxz00_2037 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 6921)), BGl_string1652z00zz__evenvz00,
							BGl_string1642z00zz__evenvz00, BgL_varz00_1850);
						FAILURE(BgL_auxz00_2037, BFALSE, BFALSE);
					}
				return
					BGl_definezd2primopzd2refz12z12zz__evenvz00(BgL_auxz00_2034,
					BgL_addrz00_1851);
			}
		}

	}



/* define-primop-ref/loc! */
	BGL_EXPORTED_DEF obj_t BGl_definezd2primopzd2refzf2locz12ze0zz__evenvz00(obj_t
		BgL_varz00_17, obj_t BgL_addrz00_18, obj_t BgL_fnamez00_19,
		obj_t BgL_locationz00_20)
	{
		{	/* Eval/evenv.scm 171 */
			{	/* Eval/evenv.scm 172 */
				obj_t BgL_cellz00_1102;

				{	/* Eval/evenv.scm 195 */
					obj_t BgL_propz00_1564;

					BgL_propz00_1564 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_17,
						BGl_symbol1648z00zz__evenvz00);
					if (CBOOL(BgL_propz00_1564))
						{	/* Eval/evenv.scm 196 */
							BgL_cellz00_1102 = BgL_propz00_1564;
						}
					else
						{	/* Eval/evenv.scm 198 */
							obj_t BgL_propz00_1565;

							BgL_propz00_1565 =
								BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_17,
								BGl_symbol1643z00zz__evenvz00);
							if (CBOOL(BgL_propz00_1565))
								{	/* Eval/evenv.scm 199 */
									BgL_cellz00_1102 = BgL_propz00_1565;
								}
							else
								{	/* Eval/evenv.scm 199 */
									BgL_cellz00_1102 = BFALSE;
								}
						}
				}
				{	/* Eval/evenv.scm 173 */
					bool_t BgL_test1721z00_2048;

					if (VECTORP(BgL_cellz00_1102))
						{	/* Eval/evenv.scm 108 */
							BgL_test1721z00_2048 =
								(VECTOR_LENGTH(BgL_cellz00_1102) == ((long) 5));
						}
					else
						{	/* Eval/evenv.scm 108 */
							BgL_test1721z00_2048 = ((bool_t) 0);
						}
					if (BgL_test1721z00_2048)
						{	/* Eval/evenv.scm 173 */
							VECTOR_SET(BgL_cellz00_1102, ((long) 2), BgL_addrz00_18);
							{	/* Eval/evenv.scm 179 */
								BgL_z62evalzd2warningzb0_bglt BgL_arg1186z00_1104;

								{	/* Eval/evenv.scm 179 */
									BgL_z62evalzd2warningzb0_bglt BgL_new1042z00_1105;

									{	/* Eval/evenv.scm 180 */
										BgL_z62evalzd2warningzb0_bglt BgL_new1041z00_1108;

										BgL_new1041z00_1108 =
											((BgL_z62evalzd2warningzb0_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_z62evalzd2warningzb0_bgl))));
										{	/* Eval/evenv.scm 180 */
											long BgL_arg1194z00_1109;

											{	/* Eval/evenv.scm 180 */
												long BgL_res1556z00_1575;

												BgL_res1556z00_1575 =
													BGL_CLASS_INDEX
													(BGl_z62evalzd2warningzb0zz__objectz00);
												BgL_arg1194z00_1109 = BgL_res1556z00_1575;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1041z00_1108),
												BgL_arg1194z00_1109);
										}
										BgL_new1042z00_1105 = BgL_new1041z00_1108;
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1042z00_1105)))->
											BgL_fnamez00) = ((obj_t) BgL_fnamez00_19), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1042z00_1105)))->BgL_locationz00) =
										((obj_t) BgL_locationz00_20), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1042z00_1105)))->BgL_stackz00) =
										((obj_t) BFALSE), BUNSPEC);
									{
										obj_t BgL_auxz00_2064;

										{	/* Eval/evenv.scm 183 */
											obj_t BgL_list1187z00_1106;

											{	/* Eval/evenv.scm 183 */
												obj_t BgL_arg1190z00_1107;

												BgL_arg1190z00_1107 =
													MAKE_YOUNG_PAIR(BgL_varz00_17, BNIL);
												BgL_list1187z00_1106 =
													MAKE_YOUNG_PAIR(BGl_string1651z00zz__evenvz00,
													BgL_arg1190z00_1107);
											}
											BgL_auxz00_2064 = BgL_list1187z00_1106;
										}
										((((BgL_z62warningz62_bglt) COBJECT(
														((BgL_z62warningz62_bglt) BgL_new1042z00_1105)))->
												BgL_argsz00) = ((obj_t) BgL_auxz00_2064), BUNSPEC);
									}
									BgL_arg1186z00_1104 = BgL_new1042z00_1105;
								}
								return
									BGl_warningzd2notifyzd2zz__errorz00(
									((obj_t) BgL_arg1186z00_1104));
							}
						}
					else
						{	/* Eval/evenv.scm 174 */
							obj_t BgL_arg1197z00_1110;

							{	/* Eval/evenv.scm 174 */
								obj_t BgL_v1085z00_1111;

								BgL_v1085z00_1111 = create_vector(((long) 5));
								VECTOR_SET(BgL_v1085z00_1111, ((long) 0), BINT(((long) 1)));
								VECTOR_SET(BgL_v1085z00_1111, ((long) 1), BgL_varz00_17);
								VECTOR_SET(BgL_v1085z00_1111, ((long) 2), BgL_addrz00_18);
								VECTOR_SET(BgL_v1085z00_1111, ((long) 3), BFALSE);
								VECTOR_SET(BgL_v1085z00_1111, ((long) 4), BFALSE);
								BgL_arg1197z00_1110 = BgL_v1085z00_1111;
							}
							return
								BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_varz00_17,
								BGl_symbol1643z00zz__evenvz00, BgL_arg1197z00_1110);
						}
				}
			}
		}

	}



/* &define-primop-ref/loc! */
	obj_t BGl_z62definezd2primopzd2refzf2locz12z82zz__evenvz00(obj_t
		BgL_envz00_1852, obj_t BgL_varz00_1853, obj_t BgL_addrz00_1854,
		obj_t BgL_fnamez00_1855, obj_t BgL_locationz00_1856)
	{
		{	/* Eval/evenv.scm 171 */
			{	/* Eval/evenv.scm 172 */
				obj_t BgL_auxz00_2079;

				if (SYMBOLP(BgL_varz00_1853))
					{	/* Eval/evenv.scm 172 */
						BgL_auxz00_2079 = BgL_varz00_1853;
					}
				else
					{
						obj_t BgL_auxz00_2082;

						BgL_auxz00_2082 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 7560)), BGl_string1653z00zz__evenvz00,
							BGl_string1642z00zz__evenvz00, BgL_varz00_1853);
						FAILURE(BgL_auxz00_2082, BFALSE, BFALSE);
					}
				return
					BGl_definezd2primopzd2refzf2locz12ze0zz__evenvz00(BgL_auxz00_2079,
					BgL_addrz00_1854, BgL_fnamez00_1855, BgL_locationz00_1856);
			}
		}

	}



/* eval-lookup */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2lookupzd2zz__evenvz00(obj_t BgL_varz00_23)
	{
		{	/* Eval/evenv.scm 194 */
			{	/* Eval/evenv.scm 195 */
				obj_t BgL_propz00_1586;

				BgL_propz00_1586 =
					BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_23,
					BGl_symbol1648z00zz__evenvz00);
				if (CBOOL(BgL_propz00_1586))
					{	/* Eval/evenv.scm 196 */
						return BgL_propz00_1586;
					}
				else
					{	/* Eval/evenv.scm 198 */
						obj_t BgL_propz00_1587;

						BgL_propz00_1587 =
							BGl_getpropz00zz__r4_symbols_6_4z00(BgL_varz00_23,
							BGl_symbol1643z00zz__evenvz00);
						if (CBOOL(BgL_propz00_1587))
							{	/* Eval/evenv.scm 199 */
								return BgL_propz00_1587;
							}
						else
							{	/* Eval/evenv.scm 199 */
								return BFALSE;
							}
					}
			}
		}

	}



/* &eval-lookup */
	obj_t BGl_z62evalzd2lookupzb0zz__evenvz00(obj_t BgL_envz00_1857,
		obj_t BgL_varz00_1858)
	{
		{	/* Eval/evenv.scm 194 */
			{	/* Eval/evenv.scm 195 */
				obj_t BgL_auxz00_2093;

				if (SYMBOLP(BgL_varz00_1858))
					{	/* Eval/evenv.scm 195 */
						BgL_auxz00_2093 = BgL_varz00_1858;
					}
				else
					{
						obj_t BgL_auxz00_2096;

						BgL_auxz00_2096 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 8506)), BGl_string1654z00zz__evenvz00,
							BGl_string1642z00zz__evenvz00, BgL_varz00_1858);
						FAILURE(BgL_auxz00_2096, BFALSE, BFALSE);
					}
				return BGl_evalzd2lookupzd2zz__evenvz00(BgL_auxz00_2093);
			}
		}

	}



/* eval-global-tag */
	BGL_EXPORTED_DEF int BGl_evalzd2globalzd2tagz00zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_24)
	{
		{	/* Eval/evenv.scm 206 */
			return CINT(VECTOR_REF(BgL_evalzd2globalzd2_24, ((long) 0)));
		}

	}



/* &eval-global-tag */
	obj_t BGl_z62evalzd2globalzd2tagz62zz__evenvz00(obj_t BgL_envz00_1859,
		obj_t BgL_evalzd2globalzd2_1860)
	{
		{	/* Eval/evenv.scm 206 */
			{	/* Eval/evenv.scm 207 */
				int BgL_tmpz00_2103;

				{	/* Eval/evenv.scm 207 */
					obj_t BgL_auxz00_2104;

					if (VECTORP(BgL_evalzd2globalzd2_1860))
						{	/* Eval/evenv.scm 207 */
							BgL_auxz00_2104 = BgL_evalzd2globalzd2_1860;
						}
					else
						{
							obj_t BgL_auxz00_2107;

							BgL_auxz00_2107 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
								BINT(((long) 8914)), BGl_string1655z00zz__evenvz00,
								BGl_string1646z00zz__evenvz00, BgL_evalzd2globalzd2_1860);
							FAILURE(BgL_auxz00_2107, BFALSE, BFALSE);
						}
					BgL_tmpz00_2103 =
						BGl_evalzd2globalzd2tagz00zz__evenvz00(BgL_auxz00_2104);
				}
				return BINT(BgL_tmpz00_2103);
			}
		}

	}



/* eval-global-tag-set! */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2globalzd2tagzd2setz12zc0zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_25, int BgL_tagz00_26)
	{
		{	/* Eval/evenv.scm 212 */
			return
				VECTOR_SET(BgL_evalzd2globalzd2_25, ((long) 0), BINT(BgL_tagz00_26));
		}

	}



/* &eval-global-tag-set! */
	obj_t BGl_z62evalzd2globalzd2tagzd2setz12za2zz__evenvz00(obj_t
		BgL_envz00_1861, obj_t BgL_evalzd2globalzd2_1862, obj_t BgL_tagz00_1863)
	{
		{	/* Eval/evenv.scm 212 */
			{	/* Eval/evenv.scm 213 */
				int BgL_auxz00_2122;
				obj_t BgL_auxz00_2115;

				{	/* Eval/evenv.scm 213 */
					obj_t BgL_tmpz00_2123;

					if (INTEGERP(BgL_tagz00_1863))
						{	/* Eval/evenv.scm 213 */
							BgL_tmpz00_2123 = BgL_tagz00_1863;
						}
					else
						{
							obj_t BgL_auxz00_2126;

							BgL_auxz00_2126 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
								BINT(((long) 9225)), BGl_string1656z00zz__evenvz00,
								BGl_string1657z00zz__evenvz00, BgL_tagz00_1863);
							FAILURE(BgL_auxz00_2126, BFALSE, BFALSE);
						}
					BgL_auxz00_2122 = CINT(BgL_tmpz00_2123);
				}
				if (VECTORP(BgL_evalzd2globalzd2_1862))
					{	/* Eval/evenv.scm 213 */
						BgL_auxz00_2115 = BgL_evalzd2globalzd2_1862;
					}
				else
					{
						obj_t BgL_auxz00_2118;

						BgL_auxz00_2118 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 9225)), BGl_string1656z00zz__evenvz00,
							BGl_string1646z00zz__evenvz00, BgL_evalzd2globalzd2_1862);
						FAILURE(BgL_auxz00_2118, BFALSE, BFALSE);
					}
				return
					BGl_evalzd2globalzd2tagzd2setz12zc0zz__evenvz00(BgL_auxz00_2115,
					BgL_auxz00_2122);
			}
		}

	}



/* eval-global-name */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2globalzd2namez00zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_27)
	{
		{	/* Eval/evenv.scm 218 */
			return VECTOR_REF(BgL_evalzd2globalzd2_27, ((long) 1));
		}

	}



/* &eval-global-name */
	obj_t BGl_z62evalzd2globalzd2namez62zz__evenvz00(obj_t BgL_envz00_1864,
		obj_t BgL_evalzd2globalzd2_1865)
	{
		{	/* Eval/evenv.scm 218 */
			{	/* Eval/evenv.scm 219 */
				obj_t BgL_auxz00_2133;

				if (VECTORP(BgL_evalzd2globalzd2_1865))
					{	/* Eval/evenv.scm 219 */
						BgL_auxz00_2133 = BgL_evalzd2globalzd2_1865;
					}
				else
					{
						obj_t BgL_auxz00_2136;

						BgL_auxz00_2136 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 9533)), BGl_string1658z00zz__evenvz00,
							BGl_string1646z00zz__evenvz00, BgL_evalzd2globalzd2_1865);
						FAILURE(BgL_auxz00_2136, BFALSE, BFALSE);
					}
				return BGl_evalzd2globalzd2namez00zz__evenvz00(BgL_auxz00_2133);
			}
		}

	}



/* eval-global-value */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2globalzd2valuez00zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_28)
	{
		{	/* Eval/evenv.scm 224 */
			return VECTOR_REF(BgL_evalzd2globalzd2_28, ((long) 2));
		}

	}



/* &eval-global-value */
	obj_t BGl_z62evalzd2globalzd2valuez62zz__evenvz00(obj_t BgL_envz00_1866,
		obj_t BgL_evalzd2globalzd2_1867)
	{
		{	/* Eval/evenv.scm 224 */
			{	/* Eval/evenv.scm 225 */
				obj_t BgL_auxz00_2142;

				if (VECTORP(BgL_evalzd2globalzd2_1867))
					{	/* Eval/evenv.scm 225 */
						BgL_auxz00_2142 = BgL_evalzd2globalzd2_1867;
					}
				else
					{
						obj_t BgL_auxz00_2145;

						BgL_auxz00_2145 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 9837)), BGl_string1659z00zz__evenvz00,
							BGl_string1646z00zz__evenvz00, BgL_evalzd2globalzd2_1867);
						FAILURE(BgL_auxz00_2145, BFALSE, BFALSE);
					}
				return BGl_evalzd2globalzd2valuez00zz__evenvz00(BgL_auxz00_2142);
			}
		}

	}



/* set-eval-global-value! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2evalzd2globalzd2valuez12zc0zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_29, obj_t BgL_valuez00_30)
	{
		{	/* Eval/evenv.scm 230 */
			return VECTOR_SET(BgL_evalzd2globalzd2_29, ((long) 2), BgL_valuez00_30);
		}

	}



/* &set-eval-global-value! */
	obj_t BGl_z62setzd2evalzd2globalzd2valuez12za2zz__evenvz00(obj_t
		BgL_envz00_1868, obj_t BgL_evalzd2globalzd2_1869, obj_t BgL_valuez00_1870)
	{
		{	/* Eval/evenv.scm 230 */
			{	/* Eval/evenv.scm 231 */
				obj_t BgL_auxz00_2151;

				if (VECTORP(BgL_evalzd2globalzd2_1869))
					{	/* Eval/evenv.scm 231 */
						BgL_auxz00_2151 = BgL_evalzd2globalzd2_1869;
					}
				else
					{
						obj_t BgL_auxz00_2154;

						BgL_auxz00_2154 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 10152)), BGl_string1660z00zz__evenvz00,
							BGl_string1646z00zz__evenvz00, BgL_evalzd2globalzd2_1869);
						FAILURE(BgL_auxz00_2154, BFALSE, BFALSE);
					}
				return
					BGl_setzd2evalzd2globalzd2valuez12zc0zz__evenvz00(BgL_auxz00_2151,
					BgL_valuez00_1870);
			}
		}

	}



/* eval-global-module */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2globalzd2modulez00zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_31)
	{
		{	/* Eval/evenv.scm 236 */
			return VECTOR_REF(((obj_t) BgL_evalzd2globalzd2_31), ((long) 3));
		}

	}



/* &eval-global-module */
	obj_t BGl_z62evalzd2globalzd2modulez62zz__evenvz00(obj_t BgL_envz00_1871,
		obj_t BgL_evalzd2globalzd2_1872)
	{
		{	/* Eval/evenv.scm 236 */
			return
				BGl_evalzd2globalzd2modulez00zz__evenvz00(BgL_evalzd2globalzd2_1872);
		}

	}



/* eval-global-module-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_evalzd2globalzd2modulezd2setz12zc0zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_32, obj_t BgL_mz00_33)
	{
		{	/* Eval/evenv.scm 242 */
			return VECTOR_SET(BgL_evalzd2globalzd2_32, ((long) 3), BgL_mz00_33);
		}

	}



/* &eval-global-module-set! */
	obj_t BGl_z62evalzd2globalzd2modulezd2setz12za2zz__evenvz00(obj_t
		BgL_envz00_1873, obj_t BgL_evalzd2globalzd2_1874, obj_t BgL_mz00_1875)
	{
		{	/* Eval/evenv.scm 242 */
			{	/* Eval/evenv.scm 243 */
				obj_t BgL_auxz00_2163;

				if (VECTORP(BgL_evalzd2globalzd2_1874))
					{	/* Eval/evenv.scm 243 */
						BgL_auxz00_2163 = BgL_evalzd2globalzd2_1874;
					}
				else
					{
						obj_t BgL_auxz00_2166;

						BgL_auxz00_2166 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1640z00zz__evenvz00,
							BINT(((long) 10776)), BGl_string1661z00zz__evenvz00,
							BGl_string1646z00zz__evenvz00, BgL_evalzd2globalzd2_1874);
						FAILURE(BgL_auxz00_2166, BFALSE, BFALSE);
					}
				return
					BGl_evalzd2globalzd2modulezd2setz12zc0zz__evenvz00(BgL_auxz00_2163,
					BgL_mz00_1875);
			}
		}

	}



/* eval-global-loc */
	BGL_EXPORTED_DEF obj_t BGl_evalzd2globalzd2locz00zz__evenvz00(obj_t
		BgL_evalzd2globalzd2_34)
	{
		{	/* Eval/evenv.scm 248 */
			return VECTOR_REF(((obj_t) BgL_evalzd2globalzd2_34), ((long) 4));
		}

	}



/* &eval-global-loc */
	obj_t BGl_z62evalzd2globalzd2locz62zz__evenvz00(obj_t BgL_envz00_1876,
		obj_t BgL_evalzd2globalzd2_1877)
	{
		{	/* Eval/evenv.scm 248 */
			return BGl_evalzd2globalzd2locz00zz__evenvz00(BgL_evalzd2globalzd2_1877);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__evenvz00()
	{
		{	/* Eval/evenv.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__evenvz00()
	{
		{	/* Eval/evenv.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__evenvz00()
	{
		{	/* Eval/evenv.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__evenvz00()
	{
		{	/* Eval/evenv.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)
					460263341), BSTRING_TO_STRING(BGl_string1662z00zz__evenvz00));
		}

	}

#ifdef __cplusplus
}
#endif
