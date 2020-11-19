/*===========================================================================*/
/*   (Tools/shape.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/shape.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;


	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zztools_shapez00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62shape1216z62zztools_shapez00(obj_t, obj_t);
	BGL_IMPORT obj_t make_vector(long, obj_t);
	static obj_t BGl_methodzd2initzd2zztools_shapez00();
	static obj_t BGl_z62shapez62zztools_shapez00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	static obj_t BGl_z62shapezd2type1223zb0zztools_shapez00(obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zztools_shapez00();
	extern obj_t BGl_za2namezd2shapezf3za2z21zzengine_paramz00;
	extern obj_t BGl_za2typenamezd2shapezf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	extern obj_t BGl_za2userzd2shapezf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_loopze70ze7zztools_shapez00(obj_t);
	extern obj_t BGl_nodezd2ze3sexpz31zzast_dumpz00(BgL_nodez00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zztools_shapez00 = BUNSPEC;
	extern obj_t BGl_za2accesszd2shapezf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zztools_shapez00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_za2typezd2shapezf3za2z21zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zztools_shapez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_za2keyzd2shapezf3za2z21zzengine_paramz00;
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62shapezd2local1221zb0zztools_shapez00(obj_t, obj_t);
	extern obj_t BGl_za2modulezd2shapezf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62shapezd2global1219zb0zztools_shapez00(obj_t, obj_t);
	static obj_t BGl_z62shapezd2node1225zb0zztools_shapez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zztools_shapez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_shapez00();
	extern obj_t BGl_globalzd2bucketzd2positionz00zzast_envz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztools_shapez00();
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_GENERIC(BGl_shapezd2envzd2zztools_shapez00,
		BgL_bgl_za762shapeza762za7za7too1758z00, BGl_z62shapez62zztools_shapez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1733z00zztools_shapez00,
		BgL_bgl_za762shape1216za762za71759za7, BGl_z62shape1216z62zztools_shapez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1736z00zztools_shapez00,
		BgL_bgl_za762shapeza7d2globa1760z00,
		BGl_z62shapezd2global1219zb0zztools_shapez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1738z00zztools_shapez00,
		BgL_bgl_za762shapeza7d2local1761z00,
		BGl_z62shapezd2local1221zb0zztools_shapez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1739z00zztools_shapez00,
		BgL_bgl_za762shapeza7d2type11762z00,
		BGl_z62shapezd2type1223zb0zztools_shapez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1740z00zztools_shapez00,
		BgL_bgl_za762shapeza7d2node11763z00,
		BGl_z62shapezd2node1225zb0zztools_shapez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1734z00zztools_shapez00,
		BgL_bgl_string1734za700za7za7t1764za7, "shape1216", 9);
	      DEFINE_STRING(BGl_string1735z00zztools_shapez00,
		BgL_bgl_string1735za700za7za7t1765za7, "#<class:~a>", 11);
	      DEFINE_STRING(BGl_string1737z00zztools_shapez00,
		BgL_bgl_string1737za700za7za7t1766za7, "shape", 5);
	      DEFINE_STRING(BGl_string1741z00zztools_shapez00,
		BgL_bgl_string1741za700za7za7t1767za7, "-", 1);
	      DEFINE_STRING(BGl_string1742z00zztools_shapez00,
		BgL_bgl_string1742za700za7za7t1768za7, "\"", 1);
	      DEFINE_STRING(BGl_string1743z00zztools_shapez00,
		BgL_bgl_string1743za700za7za7t1769za7, "::", 2);
	      DEFINE_STRING(BGl_string1744z00zztools_shapez00,
		BgL_bgl_string1744za700za7za7t1770za7, "", 0);
	      DEFINE_STRING(BGl_string1745z00zztools_shapez00,
		BgL_bgl_string1745za700za7za7t1771za7, "-<user>", 7);
	      DEFINE_STRING(BGl_string1746z00zztools_shapez00,
		BgL_bgl_string1746za700za7za7t1772za7, "-<no-user>", 10);
	      DEFINE_STRING(BGl_string1747z00zztools_shapez00,
		BgL_bgl_string1747za700za7za7t1773za7, "{", 1);
	      DEFINE_STRING(BGl_string1748z00zztools_shapez00,
		BgL_bgl_string1748za700za7za7t1774za7, "}", 1);
	      DEFINE_STRING(BGl_string1749z00zztools_shapez00,
		BgL_bgl_string1749za700za7za7t1775za7, "~a<<~a>>", 8);
	      DEFINE_STRING(BGl_string1750z00zztools_shapez00,
		BgL_bgl_string1750za700za7za7t1776za7, "@", 1);
	      DEFINE_STRING(BGl_string1751z00zztools_shapez00,
		BgL_bgl_string1751za700za7za7t1777za7, "Can't find global anymore -- ", 29);
	      DEFINE_STRING(BGl_string1752z00zztools_shapez00,
		BgL_bgl_string1752za700za7za7t1778za7, "global-shape:", 13);
	      DEFINE_STRING(BGl_string1753z00zztools_shapez00,
		BgL_bgl_string1753za700za7za7t1779za7, "tools_shape", 11);
	      DEFINE_STRING(BGl_string1754z00zztools_shapez00,
		BgL_bgl_string1754za700za7za7t1780za7, "@ _ a-tvector ", 14);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztools_shapez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long
		BgL_checksumz00_1965, char *BgL_fromz00_1966)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_shapez00))
				{
					BGl_requirezd2initializa7ationz75zztools_shapez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztools_shapez00();
					BGl_libraryzd2moduleszd2initz00zztools_shapez00();
					BGl_cnstzd2initzd2zztools_shapez00();
					BGl_importedzd2moduleszd2initz00zztools_shapez00();
					BGl_genericzd2initzd2zztools_shapez00();
					BGl_methodzd2initzd2zztools_shapez00();
					return BGl_toplevelzd2initzd2zztools_shapez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_shapez00()
	{
		{	/* Tools/shape.scm 16 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "tools_shape");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_shapez00()
	{
		{	/* Tools/shape.scm 16 */
			{	/* Tools/shape.scm 16 */
				obj_t BgL_cportz00_1838;

				{	/* Tools/shape.scm 16 */
					obj_t BgL_stringz00_1846;

					BgL_stringz00_1846 = BGl_string1754z00zztools_shapez00;
					{	/* Tools/shape.scm 16 */
						obj_t BgL_startz00_1847;

						BgL_startz00_1847 = BINT(((long) 0));
						{	/* Tools/shape.scm 16 */
							obj_t BgL_endz00_1848;

							BgL_endz00_1848 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1846)));
							{	/* Tools/shape.scm 16 */

								BgL_cportz00_1838 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1846, BgL_startz00_1847, BgL_endz00_1848);
				}}}}
				{
					long BgL_iz00_1839;

					BgL_iz00_1839 = ((long) 2);
				BgL_loopz00_1840:
					if ((BgL_iz00_1839 == ((long) -1)))
						{	/* Tools/shape.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Tools/shape.scm 16 */
							{	/* Tools/shape.scm 16 */
								obj_t BgL_arg1756z00_1842;

								{	/* Tools/shape.scm 16 */

									{	/* Tools/shape.scm 16 */
										obj_t BgL_locationz00_1844;

										BgL_locationz00_1844 = BBOOL(((bool_t) 0));
										{	/* Tools/shape.scm 16 */

											BgL_arg1756z00_1842 =
												BGl_readz00zz__readerz00(BgL_cportz00_1838,
												BgL_locationz00_1844);
										}
									}
								}
								{	/* Tools/shape.scm 16 */
									int BgL_tmpz00_1999;

									BgL_tmpz00_1999 = (int) (BgL_iz00_1839);
									CNST_TABLE_SET(BgL_tmpz00_1999, BgL_arg1756z00_1842);
							}}
							{	/* Tools/shape.scm 16 */
								int BgL_auxz00_1845;

								BgL_auxz00_1845 = (int) ((BgL_iz00_1839 - ((long) 1)));
								{
									long BgL_iz00_2004;

									BgL_iz00_2004 = (long) (BgL_auxz00_1845);
									BgL_iz00_1839 = BgL_iz00_2004;
									goto BgL_loopz00_1840;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztools_shapez00()
	{
		{	/* Tools/shape.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_shapez00()
	{
		{	/* Tools/shape.scm 16 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztools_shapez00()
	{
		{	/* Tools/shape.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_shapez00()
	{
		{	/* Tools/shape.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_proc1733z00zztools_shapez00,
				BFALSE, BGl_string1734z00zztools_shapez00);
		}

	}



/* &shape1216 */
	obj_t BGl_z62shape1216z62zztools_shapez00(obj_t BgL_envz00_1821,
		obj_t BgL_expz00_1822)
	{
		{	/* Tools/shape.scm 28 */
			if (BGl_classzf3zf3zz__objectz00(BgL_expz00_1822))
				{	/* Tools/shape.scm 31 */
					obj_t BgL_arg1250z00_1851;

					BgL_arg1250z00_1851 =
						BGl_classzd2namezd2zz__objectz00(BgL_expz00_1822);
					{	/* Tools/shape.scm 31 */
						obj_t BgL_list1251z00_1852;

						BgL_list1251z00_1852 = MAKE_YOUNG_PAIR(BgL_arg1250z00_1851, BNIL);
						return
							BGl_formatz00zz__r4_output_6_10_3z00
							(BGl_string1735z00zztools_shapez00, BgL_list1251z00_1852);
					}
				}
			else
				{	/* Tools/shape.scm 30 */
					if (PAIRP(BgL_expz00_1822))
						{	/* Tools/shape.scm 32 */
							return BGl_loopze70ze7zztools_shapez00(BgL_expz00_1822);
						}
					else
						{	/* Tools/shape.scm 32 */
							if (VECTORP(BgL_expz00_1822))
								{	/* Tools/shape.scm 44 */
									obj_t BgL_resz00_1853;

									BgL_resz00_1853 =
										make_vector(VECTOR_LENGTH(BgL_expz00_1822), BNIL);
									{	/* Tools/shape.scm 45 */

										{
											long BgL_indicez00_1855;

											BgL_indicez00_1855 = ((long) 0);
										BgL_loopz00_1854:
											if (
												(BgL_indicez00_1855 == VECTOR_LENGTH(BgL_expz00_1822)))
												{	/* Tools/shape.scm 47 */
													return BgL_resz00_1853;
												}
											else
												{	/* Tools/shape.scm 47 */
													{	/* Tools/shape.scm 52 */
														obj_t BgL_arg1280z00_1856;

														{	/* Tools/shape.scm 52 */
															obj_t BgL_arg1281z00_1857;

															BgL_arg1281z00_1857 =
																VECTOR_REF(
																((obj_t) BgL_expz00_1822), BgL_indicez00_1855);
															BgL_arg1280z00_1856 =
																BGl_shapez00zztools_shapez00
																(BgL_arg1281z00_1857);
														}
														VECTOR_SET(BgL_resz00_1853, BgL_indicez00_1855,
															BgL_arg1280z00_1856);
													}
													{
														long BgL_indicez00_2027;

														BgL_indicez00_2027 =
															(BgL_indicez00_1855 + ((long) 1));
														BgL_indicez00_1855 = BgL_indicez00_2027;
														goto BgL_loopz00_1854;
													}
												}
										}
									}
								}
							else
								{	/* Tools/shape.scm 54 */
									bool_t BgL_test1787z00_2029;

									if (STRUCTP(BgL_expz00_1822))
										{	/* Tools/shape.scm 54 */
											BgL_test1787z00_2029 =
												(STRUCT_KEY(BgL_expz00_1822) ==
												CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* Tools/shape.scm 54 */
											BgL_test1787z00_2029 = ((bool_t) 0);
										}
									if (BgL_test1787z00_2029)
										{	/* Tools/shape.scm 55 */
											obj_t BgL_arg1284z00_1858;
											obj_t BgL_arg1285z00_1859;

											BgL_arg1284z00_1858 =
												BGl_shapez00zztools_shapez00(STRUCT_REF(BgL_expz00_1822,
													(int) (((long) 0))));
											BgL_arg1285z00_1859 =
												BGl_shapez00zztools_shapez00(STRUCT_REF(BgL_expz00_1822,
													(int) (((long) 1))));
											{	/* Tools/shape.scm 55 */
												obj_t BgL_newz00_1860;

												BgL_newz00_1860 =
													create_struct(CNST_TABLE_REF(((long) 0)),
													(int) (((long) 2)));
												{	/* Tools/shape.scm 55 */
													int BgL_tmpz00_2044;

													BgL_tmpz00_2044 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_1860, BgL_tmpz00_2044,
														BgL_arg1285z00_1859);
												}
												{	/* Tools/shape.scm 55 */
													int BgL_tmpz00_2047;

													BgL_tmpz00_2047 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_1860, BgL_tmpz00_2047,
														BgL_arg1284z00_1858);
												}
												return BgL_newz00_1860;
											}
										}
									else
										{	/* Tools/shape.scm 54 */
											if (STRUCTP(BgL_expz00_1822))
												{	/* Tools/shape.scm 57 */
													obj_t BgL_keyz00_1861;

													BgL_keyz00_1861 = STRUCT_KEY(BgL_expz00_1822);
													{	/* Tools/shape.scm 57 */
														int BgL_lenz00_1862;

														BgL_lenz00_1862 = STRUCT_LENGTH(BgL_expz00_1822);
														{	/* Tools/shape.scm 58 */
															obj_t BgL_resz00_1863;

															BgL_resz00_1863 =
																make_struct(BgL_keyz00_1861, BgL_lenz00_1862,
																BNIL);
															{	/* Tools/shape.scm 59 */

																{
																	long BgL_indicez00_1865;

																	BgL_indicez00_1865 = ((long) 0);
																BgL_loopz00_1864:
																	if (
																		(BgL_indicez00_1865 ==
																			(long) (BgL_lenz00_1862)))
																		{	/* Tools/shape.scm 61 */
																			return BgL_resz00_1863;
																		}
																	else
																		{	/* Tools/shape.scm 61 */
																			{	/* Tools/shape.scm 66 */
																				obj_t BgL_arg1291z00_1866;

																				{	/* Tools/shape.scm 66 */
																					obj_t BgL_arg1292z00_1867;

																					BgL_arg1292z00_1867 =
																						STRUCT_REF(
																						((obj_t) BgL_expz00_1822),
																						(int) (BgL_indicez00_1865));
																					BgL_arg1291z00_1866 =
																						BGl_shapez00zztools_shapez00
																						(BgL_arg1292z00_1867);
																				}
																				{	/* Tools/shape.scm 64 */
																					int BgL_tmpz00_2062;

																					BgL_tmpz00_2062 =
																						(int) (BgL_indicez00_1865);
																					STRUCT_SET(BgL_resz00_1863,
																						BgL_tmpz00_2062,
																						BgL_arg1291z00_1866);
																			}}
																			{
																				long BgL_indicez00_2065;

																				BgL_indicez00_2065 =
																					(BgL_indicez00_1865 + ((long) 1));
																				BgL_indicez00_1865 = BgL_indicez00_2065;
																				goto BgL_loopz00_1864;
																			}
																		}
																}
															}
														}
													}
												}
											else
												{	/* Tools/shape.scm 56 */
													return BgL_expz00_1822;
												}
										}
								}
						}
				}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zztools_shapez00(obj_t BgL_expz00_1358)
	{
		{	/* Tools/shape.scm 33 */
			if (NULLP(BgL_expz00_1358))
				{	/* Tools/shape.scm 35 */
					return BNIL;
				}
			else
				{	/* Tools/shape.scm 35 */
					if (PAIRP(BgL_expz00_1358))
						{	/* Tools/shape.scm 39 */
							bool_t BgL_test1793z00_2071;

							{	/* Tools/shape.scm 39 */
								bool_t BgL_res1694z00_1685;

								BgL_res1694z00_1685 = EPAIRP(BgL_expz00_1358);
								BgL_test1793z00_2071 = BgL_res1694z00_1685;
							}
							if (BgL_test1793z00_2071)
								{	/* Tools/shape.scm 40 */
									obj_t BgL_arg1258z00_1363;
									obj_t BgL_arg1263z00_1364;
									obj_t BgL_arg1268z00_1365;

									BgL_arg1258z00_1363 =
										BGl_shapez00zztools_shapez00(CAR(BgL_expz00_1358));
									BgL_arg1263z00_1364 =
										BGl_loopze70ze7zztools_shapez00(CDR(BgL_expz00_1358));
									BgL_arg1268z00_1365 = CER(BgL_expz00_1358);
									{	/* Tools/shape.scm 40 */
										obj_t BgL_res1695z00_1689;

										BgL_res1695z00_1689 =
											MAKE_YOUNG_EPAIR(BgL_arg1258z00_1363, BgL_arg1263z00_1364,
											BgL_arg1268z00_1365);
										return BgL_res1695z00_1689;
									}
								}
							else
								{	/* Tools/shape.scm 39 */
									return
										MAKE_YOUNG_PAIR(BGl_shapez00zztools_shapez00(CAR
											(BgL_expz00_1358)),
										BGl_loopze70ze7zztools_shapez00(CDR(BgL_expz00_1358)));
								}
						}
					else
						{	/* Tools/shape.scm 37 */
							return BGl_shapez00zztools_shapez00(BgL_expz00_1358);
						}
				}
		}

	}



/* shape */
	BGL_EXPORTED_DEF obj_t BGl_shapez00zztools_shapez00(obj_t BgL_expz00_13)
	{
		{	/* Tools/shape.scm 28 */
			if (BGL_OBJECTP(BgL_expz00_13))
				{	/* Tools/shape.scm 28 */
					obj_t BgL_method1217z00_1403;

					{	/* Tools/shape.scm 28 */
						obj_t BgL_res1718z00_1767;

						{	/* Tools/shape.scm 28 */
							long BgL_objzd2classzd2numz00_1732;

							{	/* Tools/shape.scm 28 */
								long BgL_res1708z00_1735;

								BgL_res1708z00_1735 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_expz00_13));
								BgL_objzd2classzd2numz00_1732 = BgL_res1708z00_1735;
							}
							{	/* Tools/shape.scm 28 */
								obj_t BgL_arg1813z00_1733;

								BgL_arg1813z00_1733 =
									PROCEDURE_REF(BGl_shapezd2envzd2zztools_shapez00,
									(int) (((long) 1)));
								{	/* Tools/shape.scm 28 */
									int BgL_offsetz00_1737;

									BgL_offsetz00_1737 = (int) (BgL_objzd2classzd2numz00_1732);
									{	/* Tools/shape.scm 28 */
										long BgL_offsetz00_1738;

										BgL_offsetz00_1738 =
											((long) (BgL_offsetz00_1737) - OBJECT_TYPE);
										{	/* Tools/shape.scm 28 */
											long BgL_modz00_1739;

											BgL_modz00_1739 =
												(BgL_offsetz00_1738 >>
												(int) ((long) ((int) (((long) 4)))));
											{	/* Tools/shape.scm 28 */
												long BgL_restz00_1741;

												BgL_restz00_1741 =
													(BgL_offsetz00_1738 &
													(long) (
														(int) (
															((long) (
																	(int) (
																		(((long) 1) <<
																			(int) (
																				(long) (
																					(int) (((long) 4))))))) -
																((long) 1)))));
												{	/* Tools/shape.scm 28 */

													{	/* Tools/shape.scm 28 */
														obj_t BgL_bucketz00_1743;

														BgL_bucketz00_1743 =
															VECTOR_REF(
															((obj_t) BgL_arg1813z00_1733), BgL_modz00_1739);
														BgL_res1718z00_1767 =
															VECTOR_REF(
															((obj_t) BgL_bucketz00_1743), BgL_restz00_1741);
						}}}}}}}}
						BgL_method1217z00_1403 = BgL_res1718z00_1767;
					}
					return
						PROCEDURE_ENTRY(BgL_method1217z00_1403) (BgL_method1217z00_1403,
						BgL_expz00_13, BEOA);
				}
			else
				{	/* Tools/shape.scm 28 */
					obj_t BgL_fun1297z00_1404;

					BgL_fun1297z00_1404 =
						PROCEDURE_REF(BGl_shapezd2envzd2zztools_shapez00,
						(int) (((long) 0)));
					return
						PROCEDURE_ENTRY(BgL_fun1297z00_1404) (BgL_fun1297z00_1404,
						BgL_expz00_13, BEOA);
				}
		}

	}



/* &shape */
	obj_t BGl_z62shapez62zztools_shapez00(obj_t BgL_envz00_1823,
		obj_t BgL_expz00_1824)
	{
		{	/* Tools/shape.scm 28 */
			return BGl_shapez00zztools_shapez00(BgL_expz00_1824);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_shapez00()
	{
		{	/* Tools/shape.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_globalz00zzast_varz00,
				BGl_proc1736z00zztools_shapez00, BGl_string1737z00zztools_shapez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_localz00zzast_varz00,
				BGl_proc1738z00zztools_shapez00, BGl_string1737z00zztools_shapez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_typez00zztype_typez00,
				BGl_proc1739z00zztools_shapez00, BGl_string1737z00zztools_shapez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_nodez00zzast_nodez00,
				BGl_proc1740z00zztools_shapez00, BGl_string1737z00zztools_shapez00);
		}

	}



/* &shape-node1225 */
	obj_t BGl_z62shapezd2node1225zb0zztools_shapez00(obj_t BgL_envz00_1829,
		obj_t BgL_nodez00_1830)
	{
		{	/* Tools/shape.scm 161 */
			return
				BGl_nodezd2ze3sexpz31zzast_dumpz00(
				((BgL_nodez00_bglt) BgL_nodez00_1830));
		}

	}



/* &shape-type1223 */
	obj_t BGl_z62shapezd2type1223zb0zztools_shapez00(obj_t BgL_envz00_1831,
		obj_t BgL_typez00_1832)
	{
		{	/* Tools/shape.scm 143 */
			{	/* Tools/shape.scm 144 */
				BgL_typez00_bglt BgL_typez00_1869;

				BgL_typez00_1869 = ((BgL_typez00_bglt) BgL_typez00_1832);
				{	/* Tools/shape.scm 144 */
					obj_t BgL_spz00_1870;

					{	/* Tools/shape.scm 144 */
						obj_t BgL_arg1476z00_1871;

						BgL_arg1476z00_1871 =
							(((BgL_typez00_bglt) COBJECT(BgL_typez00_1869))->BgL_idz00);
						{	/* Tools/shape.scm 144 */
							obj_t BgL_res1732z00_1872;

							{	/* Tools/shape.scm 144 */
								obj_t BgL_arg1466z00_1873;

								BgL_arg1466z00_1873 = SYMBOL_TO_STRING(BgL_arg1476z00_1871);
								BgL_res1732z00_1872 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_1873);
							}
							BgL_spz00_1870 = BgL_res1732z00_1872;
						}
					}
					{	/* Tools/shape.scm 144 */
						obj_t BgL_sz00_1874;

						if (CBOOL(BGl_za2keyzd2shapezf3za2z21zzengine_paramz00))
							{	/* Tools/shape.scm 151 */
								obj_t BgL_arg1465z00_1875;

								{	/* Tools/shape.scm 151 */
									long BgL_arg1474z00_1876;

									BgL_arg1474z00_1876 = (long) (BgL_typez00_1869);
									BgL_arg1465z00_1875 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg1474z00_1876, ((long) 16));
								}
								BgL_sz00_1874 =
									string_append_3(BgL_spz00_1870,
									BGl_string1741z00zztools_shapez00, BgL_arg1465z00_1875);
							}
						else
							{	/* Tools/shape.scm 145 */
								BgL_sz00_1874 = BgL_spz00_1870;
							}
						{	/* Tools/shape.scm 145 */

							if (CBOOL(BGl_za2typenamezd2shapezf3za2z21zzengine_paramz00))
								{	/* Tools/shape.scm 155 */
									obj_t BgL_arg1448z00_1877;

									BgL_arg1448z00_1877 =
										(((BgL_typez00_bglt) COBJECT(BgL_typez00_1869))->
										BgL_namez00);
									{	/* Tools/shape.scm 155 */
										obj_t BgL_list1449z00_1878;

										{	/* Tools/shape.scm 155 */
											obj_t BgL_arg1461z00_1879;

											{	/* Tools/shape.scm 155 */
												obj_t BgL_arg1462z00_1880;

												{	/* Tools/shape.scm 155 */
													obj_t BgL_arg1464z00_1881;

													BgL_arg1464z00_1881 =
														MAKE_YOUNG_PAIR(BGl_string1742z00zztools_shapez00,
														BNIL);
													BgL_arg1462z00_1880 =
														MAKE_YOUNG_PAIR(BgL_arg1448z00_1877,
														BgL_arg1464z00_1881);
												}
												BgL_arg1461z00_1879 =
													MAKE_YOUNG_PAIR(BGl_string1742z00zztools_shapez00,
													BgL_arg1462z00_1880);
											}
											BgL_list1449z00_1878 =
												MAKE_YOUNG_PAIR(BgL_sz00_1874, BgL_arg1461z00_1879);
										}
										return
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list1449z00_1878);
									}
								}
							else
								{	/* Tools/shape.scm 154 */
									return BgL_sz00_1874;
								}
						}
					}
				}
			}
		}

	}



/* &shape-local1221 */
	obj_t BGl_z62shapezd2local1221zb0zztools_shapez00(obj_t BgL_envz00_1833,
		obj_t BgL_varz00_1834)
	{
		{	/* Tools/shape.scm 115 */
			{	/* Tools/shape.scm 116 */
				obj_t BgL_symz00_1883;

				if (CBOOL(BGl_za2keyzd2shapezf3za2z21zzengine_paramz00))
					{	/* Tools/shape.scm 117 */
						obj_t BgL_arg1396z00_1884;
						obj_t BgL_arg1417z00_1885;

						BgL_arg1396z00_1884 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_varz00_1834))))->BgL_idz00);
						{	/* Tools/shape.scm 120 */
							obj_t BgL_arg1441z00_1886;

							{	/* Tools/shape.scm 120 */

								BgL_arg1441z00_1886 =
									BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
									(((BgL_localz00_bglt) COBJECT(
												((BgL_localz00_bglt) BgL_varz00_1834)))->BgL_keyz00),
									((long) 10));
							}
							BgL_arg1417z00_1885 = bstring_to_symbol(BgL_arg1441z00_1886);
						}
						{	/* Tools/shape.scm 117 */
							obj_t BgL_list1418z00_1887;

							{	/* Tools/shape.scm 117 */
								obj_t BgL_arg1421z00_1888;

								{	/* Tools/shape.scm 117 */
									obj_t BgL_arg1422z00_1889;

									BgL_arg1422z00_1889 =
										MAKE_YOUNG_PAIR(BgL_arg1417z00_1885, BNIL);
									BgL_arg1421z00_1888 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
										BgL_arg1422z00_1889);
								}
								BgL_list1418z00_1887 =
									MAKE_YOUNG_PAIR(BgL_arg1396z00_1884, BgL_arg1421z00_1888);
							}
							BgL_symz00_1883 =
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list1418z00_1887);
					}}
				else
					{	/* Tools/shape.scm 116 */
						BgL_symz00_1883 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_varz00_1834))))->BgL_idz00);
					}
				{	/* Tools/shape.scm 116 */
					obj_t BgL_symz00_1890;

					{	/* Tools/shape.scm 122 */
						obj_t BgL_res1729z00_1891;

						{	/* Tools/shape.scm 122 */
							obj_t BgL_arg1466z00_1892;

							BgL_arg1466z00_1892 = SYMBOL_TO_STRING(BgL_symz00_1883);
							BgL_res1729z00_1891 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_1892);
						}
						BgL_symz00_1890 = BgL_res1729z00_1891;
					}
					{	/* Tools/shape.scm 122 */
						BgL_typez00_bglt BgL_typez00_1893;

						BgL_typez00_1893 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_varz00_1834))))->BgL_typez00);
						{	/* Tools/shape.scm 123 */
							obj_t BgL_tshapez00_1894;

							if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
								{	/* Tools/shape.scm 126 */
									obj_t BgL_arg1394z00_1895;

									BgL_arg1394z00_1895 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_typez00_1893));
									BgL_tshapez00_1894 =
										string_append(BGl_string1743z00zztools_shapez00,
										BgL_arg1394z00_1895);
								}
							else
								{	/* Tools/shape.scm 124 */
									BgL_tshapez00_1894 = BGl_string1744z00zztools_shapez00;
								}
							{	/* Tools/shape.scm 124 */
								obj_t BgL_ushapez00_1896;

								if (CBOOL(BGl_za2userzd2shapezf3za2z21zzengine_paramz00))
									{	/* Tools/shape.scm 127 */
										if (
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_varz00_1834))))->
												BgL_userzf3zf3))
											{	/* Tools/shape.scm 129 */
												BgL_ushapez00_1896 = BGl_string1745z00zztools_shapez00;
											}
										else
											{	/* Tools/shape.scm 129 */
												BgL_ushapez00_1896 = BGl_string1746z00zztools_shapez00;
											}
									}
								else
									{	/* Tools/shape.scm 127 */
										BgL_ushapez00_1896 = BGl_string1744z00zztools_shapez00;
									}
								{	/* Tools/shape.scm 127 */
									obj_t BgL_ashapez00_1897;

									if (CBOOL(BGl_za2accesszd2shapezf3za2z21zzengine_paramz00))
										{	/* Tools/shape.scm 136 */
											obj_t BgL_arg1381z00_1898;

											{	/* Tools/shape.scm 136 */
												obj_t BgL_arg1382z00_1899;

												BgL_arg1382z00_1899 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_varz00_1834))))->
													BgL_accessz00);
												{	/* Tools/shape.scm 136 */
													obj_t BgL_res1730z00_1900;

													{	/* Tools/shape.scm 136 */
														obj_t BgL_arg1466z00_1901;

														BgL_arg1466z00_1901 =
															SYMBOL_TO_STRING(((obj_t) BgL_arg1382z00_1899));
														BgL_res1730z00_1900 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1901);
													}
													BgL_arg1381z00_1898 = BgL_res1730z00_1900;
												}
											}
											BgL_ashapez00_1897 =
												string_append_3(BGl_string1747z00zztools_shapez00,
												BgL_arg1381z00_1898, BGl_string1748z00zztools_shapez00);
										}
									else
										{	/* Tools/shape.scm 133 */
											BgL_ashapez00_1897 = BGl_string1744z00zztools_shapez00;
										}
									{	/* Tools/shape.scm 132 */

										{	/* Tools/shape.scm 138 */
											obj_t BgL_arg1367z00_1902;

											{	/* Tools/shape.scm 138 */
												obj_t BgL_list1368z00_1903;

												{	/* Tools/shape.scm 138 */
													obj_t BgL_arg1370z00_1904;

													{	/* Tools/shape.scm 138 */
														obj_t BgL_arg1371z00_1905;

														{	/* Tools/shape.scm 138 */
															obj_t BgL_arg1372z00_1906;

															BgL_arg1372z00_1906 =
																MAKE_YOUNG_PAIR(BgL_ashapez00_1897, BNIL);
															BgL_arg1371z00_1905 =
																MAKE_YOUNG_PAIR(BgL_ushapez00_1896,
																BgL_arg1372z00_1906);
														}
														BgL_arg1370z00_1904 =
															MAKE_YOUNG_PAIR(BgL_tshapez00_1894,
															BgL_arg1371z00_1905);
													}
													BgL_list1368z00_1903 =
														MAKE_YOUNG_PAIR(BgL_symz00_1890,
														BgL_arg1370z00_1904);
												}
												BgL_arg1367z00_1902 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list1368z00_1903);
											}
											return bstring_to_symbol(BgL_arg1367z00_1902);
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



/* &shape-global1219 */
	obj_t BGl_z62shapezd2global1219zb0zztools_shapez00(obj_t BgL_envz00_1835,
		obj_t BgL_varz00_1836)
	{
		{	/* Tools/shape.scm 74 */
			{	/* Tools/shape.scm 75 */
				obj_t BgL_strzd2idzd2_1908;

				if (CBOOL(BGl_za2namezd2shapezf3za2z21zzengine_paramz00))
					{	/* Tools/shape.scm 77 */
						obj_t BgL_arg1357z00_1909;
						obj_t BgL_arg1360z00_1910;

						BgL_arg1357z00_1909 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_varz00_1836))))->BgL_idz00);
						BgL_arg1360z00_1910 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_varz00_1836))))->BgL_namez00);
						{	/* Tools/shape.scm 77 */
							obj_t BgL_list1361z00_1911;

							{	/* Tools/shape.scm 77 */
								obj_t BgL_arg1363z00_1912;

								BgL_arg1363z00_1912 =
									MAKE_YOUNG_PAIR(BgL_arg1360z00_1910, BNIL);
								BgL_list1361z00_1911 =
									MAKE_YOUNG_PAIR(BgL_arg1357z00_1909, BgL_arg1363z00_1912);
							}
							BgL_strzd2idzd2_1908 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string1749z00zztools_shapez00, BgL_list1361z00_1911);
						}
					}
				else
					{	/* Tools/shape.scm 76 */
						obj_t BgL_arg1364z00_1913;

						BgL_arg1364z00_1913 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_varz00_1836))))->BgL_idz00);
						{	/* Tools/shape.scm 76 */
							obj_t BgL_res1720z00_1914;

							{	/* Tools/shape.scm 76 */
								obj_t BgL_arg1466z00_1915;

								BgL_arg1466z00_1915 = SYMBOL_TO_STRING(BgL_arg1364z00_1913);
								BgL_res1720z00_1914 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_1915);
							}
							BgL_strzd2idzd2_1908 = BgL_res1720z00_1914;
						}
					}
				{	/* Tools/shape.scm 75 */
					obj_t BgL_modulez00_1916;

					{	/* Tools/shape.scm 78 */
						obj_t BgL_arg1352z00_1917;

						BgL_arg1352z00_1917 =
							(((BgL_globalz00_bglt) COBJECT(
									((BgL_globalz00_bglt) BgL_varz00_1836)))->BgL_modulez00);
						{	/* Tools/shape.scm 78 */
							obj_t BgL_res1721z00_1918;

							{	/* Tools/shape.scm 78 */
								obj_t BgL_arg1466z00_1919;

								BgL_arg1466z00_1919 = SYMBOL_TO_STRING(BgL_arg1352z00_1917);
								BgL_res1721z00_1918 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_1919);
							}
							BgL_modulez00_1916 = BgL_res1721z00_1918;
						}
					}
					{	/* Tools/shape.scm 78 */
						BgL_typez00_bglt BgL_typez00_1920;

						BgL_typez00_1920 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_varz00_1836))))->BgL_typez00);
						{	/* Tools/shape.scm 79 */
							obj_t BgL_tshapez00_1921;

							if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
								{	/* Tools/shape.scm 82 */
									obj_t BgL_arg1351z00_1922;

									BgL_arg1351z00_1922 =
										BGl_shapez00zztools_shapez00(((obj_t) BgL_typez00_1920));
									BgL_tshapez00_1921 =
										string_append(BGl_string1743z00zztools_shapez00,
										BgL_arg1351z00_1922);
								}
							else
								{	/* Tools/shape.scm 80 */
									BgL_tshapez00_1921 = BGl_string1744z00zztools_shapez00;
								}
							{	/* Tools/shape.scm 80 */
								obj_t BgL_ushapez00_1923;

								if (CBOOL(BGl_za2userzd2shapezf3za2z21zzengine_paramz00))
									{	/* Tools/shape.scm 83 */
										if (
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_varz00_1836))))->
												BgL_userzf3zf3))
											{	/* Tools/shape.scm 85 */
												BgL_ushapez00_1923 = BGl_string1745z00zztools_shapez00;
											}
										else
											{	/* Tools/shape.scm 85 */
												BgL_ushapez00_1923 = BGl_string1746z00zztools_shapez00;
											}
									}
								else
									{	/* Tools/shape.scm 83 */
										BgL_ushapez00_1923 = BGl_string1744z00zztools_shapez00;
									}
								{	/* Tools/shape.scm 83 */
									obj_t BgL_ashapez00_1924;

									if (CBOOL(BGl_za2accesszd2shapezf3za2z21zzengine_paramz00))
										{	/* Tools/shape.scm 92 */
											obj_t BgL_arg1346z00_1925;

											{	/* Tools/shape.scm 92 */
												obj_t BgL_arg1347z00_1926;

												BgL_arg1347z00_1926 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_varz00_1836))))->
													BgL_accessz00);
												{	/* Tools/shape.scm 92 */
													obj_t BgL_res1722z00_1927;

													{	/* Tools/shape.scm 92 */
														obj_t BgL_arg1466z00_1928;

														BgL_arg1466z00_1928 =
															SYMBOL_TO_STRING(((obj_t) BgL_arg1347z00_1926));
														BgL_res1722z00_1927 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1928);
													}
													BgL_arg1346z00_1925 = BgL_res1722z00_1927;
												}
											}
											BgL_ashapez00_1924 =
												string_append_3(BGl_string1747z00zztools_shapez00,
												BgL_arg1346z00_1925, BGl_string1748z00zztools_shapez00);
										}
									else
										{	/* Tools/shape.scm 89 */
											BgL_ashapez00_1924 = BGl_string1744z00zztools_shapez00;
										}
									{	/* Tools/shape.scm 88 */

										if (CBOOL(BGl_za2modulezd2shapezf3za2z21zzengine_paramz00))
											{	/* Tools/shape.scm 97 */
												obj_t BgL_arg1298z00_1929;

												{	/* Tools/shape.scm 97 */
													obj_t BgL_list1299z00_1930;

													{	/* Tools/shape.scm 97 */
														obj_t BgL_arg1300z00_1931;

														{	/* Tools/shape.scm 97 */
															obj_t BgL_arg1301z00_1932;

															{	/* Tools/shape.scm 97 */
																obj_t BgL_arg1303z00_1933;

																{	/* Tools/shape.scm 97 */
																	obj_t BgL_arg1304z00_1934;

																	{	/* Tools/shape.scm 97 */
																		obj_t BgL_arg1306z00_1935;

																		BgL_arg1306z00_1935 =
																			MAKE_YOUNG_PAIR(BgL_ashapez00_1924, BNIL);
																		BgL_arg1304z00_1934 =
																			MAKE_YOUNG_PAIR(BgL_ushapez00_1923,
																			BgL_arg1306z00_1935);
																	}
																	BgL_arg1303z00_1933 =
																		MAKE_YOUNG_PAIR(BgL_tshapez00_1921,
																		BgL_arg1304z00_1934);
																}
																BgL_arg1301z00_1932 =
																	MAKE_YOUNG_PAIR(BgL_modulez00_1916,
																	BgL_arg1303z00_1933);
															}
															BgL_arg1300z00_1931 =
																MAKE_YOUNG_PAIR
																(BGl_string1750z00zztools_shapez00,
																BgL_arg1301z00_1932);
														}
														BgL_list1299z00_1930 =
															MAKE_YOUNG_PAIR(BgL_strzd2idzd2_1908,
															BgL_arg1300z00_1931);
													}
													BgL_arg1298z00_1929 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list1299z00_1930);
												}
												return bstring_to_symbol(BgL_arg1298z00_1929);
											}
										else
											{

												{	/* Tools/shape.scm 99 */
													obj_t BgL_aux1101z00_1945;

													{	/* Tools/shape.scm 99 */
														obj_t BgL_arg1330z00_1946;
														obj_t BgL_arg1331z00_1947;

														BgL_arg1330z00_1946 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_globalz00_bglt) BgL_varz00_1836))))->
															BgL_idz00);
														BgL_arg1331z00_1947 =
															(((BgL_globalz00_bglt)
																COBJECT(((BgL_globalz00_bglt)
																		BgL_varz00_1836)))->BgL_modulez00);
														BgL_aux1101z00_1945 =
															BGl_globalzd2bucketzd2positionz00zzast_envz00
															(BgL_arg1330z00_1946, BgL_arg1331z00_1947);
													}
													if (INTEGERP(BgL_aux1101z00_1945))
														{	/* Tools/shape.scm 99 */
															switch ((long) CINT(BgL_aux1101z00_1945))
																{
																case ((long) -1):

																	{	/* Tools/shape.scm 103 */
																		obj_t BgL_arg1308z00_1948;

																		{	/* Tools/shape.scm 103 */
																			obj_t BgL_arg1312z00_1949;

																			{	/* Tools/shape.scm 103 */
																				obj_t BgL_arg1314z00_1950;
																				obj_t BgL_arg1315z00_1951;

																				BgL_arg1314z00_1950 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_globalz00_bglt)
																									BgL_varz00_1836))))->
																					BgL_idz00);
																				BgL_arg1315z00_1951 =
																					MAKE_YOUNG_PAIR((((BgL_globalz00_bglt)
																							COBJECT(((BgL_globalz00_bglt)
																									BgL_varz00_1836)))->
																						BgL_modulez00), BNIL);
																				BgL_arg1312z00_1949 =
																					MAKE_YOUNG_PAIR(BgL_arg1314z00_1950,
																					BgL_arg1315z00_1951);
																			}
																			BgL_arg1308z00_1948 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						2)), BgL_arg1312z00_1949);
																		}
																		{	/* Tools/shape.scm 101 */
																			obj_t BgL_list1309z00_1952;

																			{	/* Tools/shape.scm 101 */
																				obj_t BgL_arg1310z00_1953;

																				{	/* Tools/shape.scm 101 */
																					obj_t BgL_arg1311z00_1954;

																					BgL_arg1311z00_1954 =
																						MAKE_YOUNG_PAIR(BgL_arg1308z00_1948,
																						BNIL);
																					BgL_arg1310z00_1953 =
																						MAKE_YOUNG_PAIR
																						(BGl_string1751z00zztools_shapez00,
																						BgL_arg1311z00_1954);
																				}
																				BgL_list1309z00_1952 =
																					MAKE_YOUNG_PAIR
																					(BGl_string1752z00zztools_shapez00,
																					BgL_arg1310z00_1953);
																			}
																			BGl_warningz00zz__errorz00
																				(BgL_list1309z00_1952);
																	}}
																	{	/* Tools/shape.scm 104 */
																		obj_t BgL_arg1317z00_1955;

																		{	/* Tools/shape.scm 104 */
																			obj_t BgL_list1318z00_1956;

																			{	/* Tools/shape.scm 104 */
																				obj_t BgL_arg1319z00_1957;

																				{	/* Tools/shape.scm 104 */
																					obj_t BgL_arg1322z00_1958;

																					{	/* Tools/shape.scm 104 */
																						obj_t BgL_arg1324z00_1959;

																						BgL_arg1324z00_1959 =
																							MAKE_YOUNG_PAIR
																							(BgL_ashapez00_1924, BNIL);
																						BgL_arg1322z00_1958 =
																							MAKE_YOUNG_PAIR
																							(BgL_ushapez00_1923,
																							BgL_arg1324z00_1959);
																					}
																					BgL_arg1319z00_1957 =
																						MAKE_YOUNG_PAIR(BgL_tshapez00_1921,
																						BgL_arg1322z00_1958);
																				}
																				BgL_list1318z00_1956 =
																					MAKE_YOUNG_PAIR(BgL_strzd2idzd2_1908,
																					BgL_arg1319z00_1957);
																			}
																			BgL_arg1317z00_1955 =
																				BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																				(BgL_list1318z00_1956);
																		}
																		return
																			bstring_to_symbol(BgL_arg1317z00_1955);
																	}
																	break;
																case ((long) 0):

																	{	/* Tools/shape.scm 106 */
																		obj_t BgL_arg1325z00_1960;

																		{	/* Tools/shape.scm 106 */
																			obj_t BgL_list1326z00_1961;

																			{	/* Tools/shape.scm 106 */
																				obj_t BgL_arg1327z00_1962;

																				{	/* Tools/shape.scm 106 */
																					obj_t BgL_arg1328z00_1963;

																					{	/* Tools/shape.scm 106 */
																						obj_t BgL_arg1329z00_1964;

																						BgL_arg1329z00_1964 =
																							MAKE_YOUNG_PAIR
																							(BgL_ashapez00_1924, BNIL);
																						BgL_arg1328z00_1963 =
																							MAKE_YOUNG_PAIR
																							(BgL_ushapez00_1923,
																							BgL_arg1329z00_1964);
																					}
																					BgL_arg1327z00_1962 =
																						MAKE_YOUNG_PAIR(BgL_tshapez00_1921,
																						BgL_arg1328z00_1963);
																				}
																				BgL_list1326z00_1961 =
																					MAKE_YOUNG_PAIR(BgL_strzd2idzd2_1908,
																					BgL_arg1327z00_1962);
																			}
																			BgL_arg1325z00_1960 =
																				BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																				(BgL_list1326z00_1961);
																		}
																		return
																			bstring_to_symbol(BgL_arg1325z00_1960);
																	}
																	break;
																default:
																BgL_case_else1100z00_1936:
																	{	/* Tools/shape.scm 108 */
																		obj_t BgL_symz00_1937;

																		{	/* Tools/shape.scm 109 */
																			obj_t BgL_arg1338z00_1938;

																			{	/* Tools/shape.scm 109 */
																				obj_t BgL_list1339z00_1939;

																				{	/* Tools/shape.scm 109 */
																					obj_t BgL_arg1340z00_1940;

																					{	/* Tools/shape.scm 109 */
																						obj_t BgL_arg1344z00_1941;

																						{	/* Tools/shape.scm 109 */
																							obj_t BgL_arg1345z00_1942;

																							BgL_arg1345z00_1942 =
																								MAKE_YOUNG_PAIR
																								(BgL_ashapez00_1924, BNIL);
																							BgL_arg1344z00_1941 =
																								MAKE_YOUNG_PAIR
																								(BgL_ushapez00_1923,
																								BgL_arg1345z00_1942);
																						}
																						BgL_arg1340z00_1940 =
																							MAKE_YOUNG_PAIR
																							(BgL_tshapez00_1921,
																							BgL_arg1344z00_1941);
																					}
																					BgL_list1339z00_1939 =
																						MAKE_YOUNG_PAIR
																						(BgL_strzd2idzd2_1908,
																						BgL_arg1340z00_1940);
																				}
																				BgL_arg1338z00_1938 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list1339z00_1939);
																			}
																			BgL_symz00_1937 =
																				bstring_to_symbol(BgL_arg1338z00_1938);
																		}
																		{	/* Tools/shape.scm 110 */
																			obj_t BgL_arg1334z00_1943;

																			{	/* Tools/shape.scm 110 */
																				obj_t BgL_arg1335z00_1944;

																				BgL_arg1335z00_1944 =
																					MAKE_YOUNG_PAIR(bstring_to_symbol
																					(BgL_modulez00_1916), BNIL);
																				BgL_arg1334z00_1943 =
																					MAKE_YOUNG_PAIR(BgL_symz00_1937,
																					BgL_arg1335z00_1944);
																			}
																			return
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						2)), BgL_arg1334z00_1943);
														}}}}
													else
														{	/* Tools/shape.scm 99 */
															goto BgL_case_else1100z00_1936;
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

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_shapez00()
	{
		{	/* Tools/shape.scm 16 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1753z00zztools_shapez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1753z00zztools_shapez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1753z00zztools_shapez00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1753z00zztools_shapez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1753z00zztools_shapez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1753z00zztools_shapez00));
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1753z00zztools_shapez00));
		}

	}

#ifdef __cplusplus
}
#endif
