/*===========================================================================*/
/*   (Eval/expdrecord.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/expdrecord.scm -indent -o objs/obj_u/Eval/expdrecord.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_symbol1831z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1833z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1835z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1837z00zz__expander_recordz00 = BUNSPEC;
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol1841z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1843z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_expandzd2errorzd2zz__expander_recordz00(bool_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_recordz00 =
		BUNSPEC;
	extern obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__expander_recordz00();
	static obj_t BGl_objectzd2initzd2zz__expander_recordz00();
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_recordz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_recordz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t
		BGl_z62expandzd2definezd2recordzd2typezb0zz__expander_recordz00(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_recordz00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__expander_recordz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_recordz00();
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2definezd2recordzd2typezd2zz__expander_recordz00(obj_t, obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_recordzd2ze3structz31zz__expander_recordz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_loopze70ze7zz__expander_recordz00(obj_t, obj_t, obj_t, long);
	static obj_t BGl_loopze71ze7zz__expander_recordz00(obj_t, obj_t, obj_t, long);
	static obj_t BGl_symbol1811z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1813z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1815z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1817z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1819z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1821z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1823z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1825z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1827z00zz__expander_recordz00 = BUNSPEC;
	static obj_t BGl_symbol1829z00zz__expander_recordz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2definezd2recordzd2typezd2envz00zz__expander_recordz00,
		BgL_bgl_za762expandza7d2defi1847z00,
		BGl_z62expandzd2definezd2recordzd2typezb0zz__expander_recordz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1810z00zz__expander_recordz00,
		BgL_bgl_string1810za700za7za7_1848za7, "invalid form", 12);
	      DEFINE_STRING(BGl_string1812z00zz__expander_recordz00,
		BgL_bgl_string1812za700za7za7_1849za7, ">", 1);
	      DEFINE_STRING(BGl_string1814z00zz__expander_recordz00,
		BgL_bgl_string1814za700za7za7_1850za7, "<", 1);
	      DEFINE_STRING(BGl_string1816z00zz__expander_recordz00,
		BgL_bgl_string1816za700za7za7_1851za7, "quote", 5);
	      DEFINE_STRING(BGl_string1818z00zz__expander_recordz00,
		BgL_bgl_string1818za700za7za7_1852za7, "make-struct", 11);
	      DEFINE_STRING(BGl_string1820z00zz__expander_recordz00,
		BgL_bgl_string1820za700za7za7_1853za7, "begin", 5);
	      DEFINE_STRING(BGl_string1822z00zz__expander_recordz00,
		BgL_bgl_string1822za700za7za7_1854za7, "let", 3);
	      DEFINE_STRING(BGl_string1824z00zz__expander_recordz00,
		BgL_bgl_string1824za700za7za7_1855za7, "define", 6);
	      DEFINE_STRING(BGl_string1826z00zz__expander_recordz00,
		BgL_bgl_string1826za700za7za7_1856za7, "o", 1);
	      DEFINE_STRING(BGl_string1828z00zz__expander_recordz00,
		BgL_bgl_string1828za700za7za7_1857za7, "struct?", 7);
	      DEFINE_STRING(BGl_string1830z00zz__expander_recordz00,
		BgL_bgl_string1830za700za7za7_1858za7, "struct-key", 10);
	      DEFINE_STRING(BGl_string1832z00zz__expander_recordz00,
		BgL_bgl_string1832za700za7za7_1859za7, "eq?", 3);
	      DEFINE_STRING(BGl_string1834z00zz__expander_recordz00,
		BgL_bgl_string1834za700za7za7_1860za7, "struct-length", 13);
	      DEFINE_STRING(BGl_string1836z00zz__expander_recordz00,
		BgL_bgl_string1836za700za7za7_1861za7, "=", 1);
	      DEFINE_STRING(BGl_string1838z00zz__expander_recordz00,
		BgL_bgl_string1838za700za7za7_1862za7, "and", 3);
	      DEFINE_STRING(BGl_string1839z00zz__expander_recordz00,
		BgL_bgl_string1839za700za7za7_1863za7, "invalid constructor", 19);
	      DEFINE_STRING(BGl_string1840z00zz__expander_recordz00,
		BgL_bgl_string1840za700za7za7_1864za7, "invalid fields", 14);
	      DEFINE_STRING(BGl_string1842z00zz__expander_recordz00,
		BgL_bgl_string1842za700za7za7_1865za7, "struct-set!", 11);
	      DEFINE_STRING(BGl_string1844z00zz__expander_recordz00,
		BgL_bgl_string1844za700za7za7_1866za7, "struct-ref", 10);
	      DEFINE_STRING(BGl_string1845z00zz__expander_recordz00,
		BgL_bgl_string1845za700za7za7_1867za7, "invalid field spec", 18);
	      DEFINE_STRING(BGl_string1846z00zz__expander_recordz00,
		BgL_bgl_string1846za700za7za7_1868za7, "__expander_record", 17);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1831z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1833z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1835z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1837z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1841z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1843z00zz__expander_recordz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1811z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1813z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1815z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1817z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1819z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1821z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1823z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1825z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1827z00zz__expander_recordz00));
		     ADD_ROOT((void *) (&BGl_symbol1829z00zz__expander_recordz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_recordz00(long
		BgL_checksumz00_2085, char *BgL_fromz00_2086)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_recordz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_recordz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__expander_recordz00();
					BGl_cnstzd2initzd2zz__expander_recordz00();
					BGl_importedzd2moduleszd2initz00zz__expander_recordz00();
					return BGl_methodzd2initzd2zz__expander_recordz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_recordz00()
	{
		{	/* Eval/expdrecord.scm 18 */
			BGl_symbol1811z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1812z00zz__expander_recordz00);
			BGl_symbol1813z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1814z00zz__expander_recordz00);
			BGl_symbol1815z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1816z00zz__expander_recordz00);
			BGl_symbol1817z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1818z00zz__expander_recordz00);
			BGl_symbol1819z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1820z00zz__expander_recordz00);
			BGl_symbol1821z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1822z00zz__expander_recordz00);
			BGl_symbol1823z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1824z00zz__expander_recordz00);
			BGl_symbol1825z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1826z00zz__expander_recordz00);
			BGl_symbol1827z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1828z00zz__expander_recordz00);
			BGl_symbol1829z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1830z00zz__expander_recordz00);
			BGl_symbol1831z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1832z00zz__expander_recordz00);
			BGl_symbol1833z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1834z00zz__expander_recordz00);
			BGl_symbol1835z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1836z00zz__expander_recordz00);
			BGl_symbol1837z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1838z00zz__expander_recordz00);
			BGl_symbol1841z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1842z00zz__expander_recordz00);
			return (BGl_symbol1843z00zz__expander_recordz00 =
				bstring_to_symbol(BGl_string1844z00zz__expander_recordz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__expander_recordz00()
	{
		{	/* Eval/expdrecord.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* expand-define-record-type */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2definezd2recordzd2typezd2zz__expander_recordz00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		{	/* Eval/expdrecord.scm 59 */
			if (PAIRP(BgL_xz00_3))
				{	/* Eval/expdrecord.scm 60 */
					obj_t BgL_cdrzd2113zd2_1077;

					BgL_cdrzd2113zd2_1077 = CDR(BgL_xz00_3);
					if (PAIRP(BgL_cdrzd2113zd2_1077))
						{	/* Eval/expdrecord.scm 60 */
							obj_t BgL_cdrzd2119zd2_1079;

							BgL_cdrzd2119zd2_1079 = CDR(BgL_cdrzd2113zd2_1077);
							if (PAIRP(BgL_cdrzd2119zd2_1079))
								{	/* Eval/expdrecord.scm 60 */
									obj_t BgL_cdrzd2125zd2_1081;

									BgL_cdrzd2125zd2_1081 = CDR(BgL_cdrzd2119zd2_1079);
									if (PAIRP(BgL_cdrzd2125zd2_1081))
										{	/* Eval/expdrecord.scm 60 */
											obj_t BgL_arg1172z00_1083;
											obj_t BgL_arg1174z00_1084;
											obj_t BgL_arg1175z00_1085;
											obj_t BgL_arg1176z00_1086;

											BgL_arg1172z00_1083 = CAR(BgL_cdrzd2113zd2_1077);
											BgL_arg1174z00_1084 = CAR(BgL_cdrzd2119zd2_1079);
											BgL_arg1175z00_1085 = CAR(BgL_cdrzd2125zd2_1081);
											BgL_arg1176z00_1086 = CDR(BgL_cdrzd2125zd2_1081);
											{	/* Eval/expdrecord.scm 62 */
												obj_t BgL_arg1177z00_1675;

												{	/* Eval/expdrecord.scm 62 */
													obj_t BgL_arg1178z00_1676;

													BgL_arg1178z00_1676 =
														BGl_recordzd2ze3structz31zz__expander_recordz00
														(BgL_arg1172z00_1083, BgL_arg1174z00_1084,
														BgL_arg1175z00_1085, BgL_arg1176z00_1086);
													BgL_arg1177z00_1675 =
														PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
														BgL_arg1178z00_1676, BgL_ez00_4, BEOA);
												}
												return
													BGl_evepairifyz00zz__prognz00(BgL_arg1177z00_1675,
													BgL_xz00_3);
											}
										}
									else
										{	/* Eval/expdrecord.scm 60 */
											return
												BGl_expandzd2errorzd2zz__expander_recordz00(((bool_t)
													0), BGl_string1810z00zz__expander_recordz00,
												BgL_xz00_3);
										}
								}
							else
								{	/* Eval/expdrecord.scm 60 */
									return
										BGl_expandzd2errorzd2zz__expander_recordz00(((bool_t) 0),
										BGl_string1810z00zz__expander_recordz00, BgL_xz00_3);
								}
						}
					else
						{	/* Eval/expdrecord.scm 60 */
							return
								BGl_expandzd2errorzd2zz__expander_recordz00(((bool_t) 0),
								BGl_string1810z00zz__expander_recordz00, BgL_xz00_3);
						}
				}
			else
				{	/* Eval/expdrecord.scm 60 */
					return
						BGl_expandzd2errorzd2zz__expander_recordz00(((bool_t) 0),
						BGl_string1810z00zz__expander_recordz00, BgL_xz00_3);
				}
		}

	}



/* &expand-define-record-type */
	obj_t BGl_z62expandzd2definezd2recordzd2typezb0zz__expander_recordz00(obj_t
		BgL_envz00_2078, obj_t BgL_xz00_2079, obj_t BgL_ez00_2080)
	{
		{	/* Eval/expdrecord.scm 59 */
			return
				BGl_expandzd2definezd2recordzd2typezd2zz__expander_recordz00
				(BgL_xz00_2079, BgL_ez00_2080);
		}

	}



/* record->struct */
	obj_t BGl_recordzd2ze3structz31zz__expander_recordz00(obj_t BgL_namez00_5,
		obj_t BgL_constrz00_6, obj_t BgL_predicatez00_7, obj_t BgL_fieldsz00_8)
	{
		{	/* Eval/expdrecord.scm 69 */
			if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_fieldsz00_8))
				{	/* Eval/expdrecord.scm 71 */
					if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_constrz00_6))
						{	/* Eval/expdrecord.scm 76 */
							obj_t BgL_tmpz00_1091;
							obj_t BgL_valz00_1092;
							obj_t BgL_keyz00_1093;

							{	/* Eval/expdrecord.scm 76 */

								{	/* Eval/expdrecord.scm 76 */

									BgL_tmpz00_1091 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
								}
							}
							{	/* Eval/expdrecord.scm 77 */

								{	/* Eval/expdrecord.scm 77 */

									BgL_valz00_1092 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
								}
							}
							{	/* Eval/expdrecord.scm 78 */
								obj_t BgL_list1372z00_1220;

								{	/* Eval/expdrecord.scm 78 */
									obj_t BgL_arg1373z00_1221;

									{	/* Eval/expdrecord.scm 78 */
										obj_t BgL_arg1374z00_1222;

										BgL_arg1374z00_1222 =
											MAKE_YOUNG_PAIR(BGl_symbol1811z00zz__expander_recordz00,
											BNIL);
										BgL_arg1373z00_1221 =
											MAKE_YOUNG_PAIR(BgL_namez00_5, BgL_arg1374z00_1222);
									}
									BgL_list1372z00_1220 =
										MAKE_YOUNG_PAIR(BGl_symbol1813z00zz__expander_recordz00,
										BgL_arg1373z00_1221);
								}
								BgL_keyz00_1093 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list1372z00_1220);
							}
							{	/* Eval/expdrecord.scm 81 */
								obj_t BgL_arg1186z00_1094;

								{	/* Eval/expdrecord.scm 81 */
									obj_t BgL_arg1190z00_1095;
									obj_t BgL_arg1194z00_1096;

									{	/* Eval/expdrecord.scm 81 */
										obj_t BgL_arg1197z00_1097;

										{	/* Eval/expdrecord.scm 81 */
											obj_t BgL_arg1201z00_1098;

											{	/* Eval/expdrecord.scm 81 */
												obj_t BgL_arg1208z00_1099;

												{	/* Eval/expdrecord.scm 81 */
													obj_t BgL_arg1211z00_1100;

													{	/* Eval/expdrecord.scm 81 */
														obj_t BgL_arg1216z00_1101;
														obj_t BgL_arg1221z00_1102;

														{	/* Eval/expdrecord.scm 81 */
															obj_t BgL_arg1223z00_1103;

															{	/* Eval/expdrecord.scm 81 */
																obj_t BgL_arg1225z00_1104;

																{	/* Eval/expdrecord.scm 81 */
																	obj_t BgL_arg1227z00_1105;

																	{	/* Eval/expdrecord.scm 81 */
																		obj_t BgL_arg1229z00_1106;

																		{	/* Eval/expdrecord.scm 81 */
																			obj_t BgL_arg1232z00_1107;
																			obj_t BgL_arg1239z00_1108;

																			{	/* Eval/expdrecord.scm 81 */
																				obj_t BgL_arg1242z00_1109;

																				BgL_arg1242z00_1109 =
																					MAKE_YOUNG_PAIR(BgL_keyz00_1093,
																					BNIL);
																				BgL_arg1232z00_1107 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol1815z00zz__expander_recordz00,
																					BgL_arg1242z00_1109);
																			}
																			{	/* Eval/expdrecord.scm 81 */
																				long BgL_arg1243z00_1110;
																				obj_t BgL_arg1245z00_1111;

																				BgL_arg1243z00_1110 =
																					bgl_list_length(BgL_fieldsz00_8);
																				BgL_arg1245z00_1111 =
																					MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
																				BgL_arg1239z00_1108 =
																					MAKE_YOUNG_PAIR(BINT
																					(BgL_arg1243z00_1110),
																					BgL_arg1245z00_1111);
																			}
																			BgL_arg1229z00_1106 =
																				MAKE_YOUNG_PAIR(BgL_arg1232z00_1107,
																				BgL_arg1239z00_1108);
																		}
																		BgL_arg1227z00_1105 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol1817z00zz__expander_recordz00,
																			BgL_arg1229z00_1106);
																	}
																	BgL_arg1225z00_1104 =
																		MAKE_YOUNG_PAIR(BgL_arg1227z00_1105, BNIL);
																}
																BgL_arg1223z00_1103 =
																	MAKE_YOUNG_PAIR(BgL_tmpz00_1091,
																	BgL_arg1225z00_1104);
															}
															BgL_arg1216z00_1101 =
																MAKE_YOUNG_PAIR(BgL_arg1223z00_1103, BNIL);
														}
														{	/* Eval/expdrecord.scm 86 */
															obj_t BgL_arg1246z00_1112;

															{	/* Eval/expdrecord.scm 86 */
																obj_t BgL_arg1247z00_1113;

																{	/* Eval/expdrecord.scm 86 */
																	obj_t BgL_arg1250z00_1114;
																	obj_t BgL_arg1252z00_1115;

																	BgL_arg1250z00_1114 =
																		BGl_loopze70ze7zz__expander_recordz00
																		(BgL_constrz00_6, BgL_tmpz00_1091,
																		BgL_fieldsz00_8, ((long) 0));
																	BgL_arg1252z00_1115 =
																		MAKE_YOUNG_PAIR(BgL_tmpz00_1091, BNIL);
																	BgL_arg1247z00_1113 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg1250z00_1114, BgL_arg1252z00_1115);
																}
																BgL_arg1246z00_1112 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol1819z00zz__expander_recordz00,
																	BgL_arg1247z00_1113);
															}
															BgL_arg1221z00_1102 =
																MAKE_YOUNG_PAIR(BgL_arg1246z00_1112, BNIL);
														}
														BgL_arg1211z00_1100 =
															MAKE_YOUNG_PAIR(BgL_arg1216z00_1101,
															BgL_arg1221z00_1102);
													}
													BgL_arg1208z00_1099 =
														MAKE_YOUNG_PAIR
														(BGl_symbol1821z00zz__expander_recordz00,
														BgL_arg1211z00_1100);
												}
												BgL_arg1201z00_1098 =
													MAKE_YOUNG_PAIR(BgL_arg1208z00_1099, BNIL);
											}
											BgL_arg1197z00_1097 =
												MAKE_YOUNG_PAIR(BgL_constrz00_6, BgL_arg1201z00_1098);
										}
										BgL_arg1190z00_1095 =
											MAKE_YOUNG_PAIR(BGl_symbol1823z00zz__expander_recordz00,
											BgL_arg1197z00_1097);
									}
									{	/* Eval/expdrecord.scm 94 */
										obj_t BgL_arg1286z00_1139;
										obj_t BgL_arg1287z00_1140;

										{	/* Eval/expdrecord.scm 94 */
											obj_t BgL_arg1288z00_1141;

											{	/* Eval/expdrecord.scm 94 */
												obj_t BgL_arg1289z00_1142;
												obj_t BgL_arg1290z00_1143;

												{	/* Eval/expdrecord.scm 94 */
													obj_t BgL_arg1291z00_1144;

													BgL_arg1291z00_1144 =
														MAKE_YOUNG_PAIR
														(BGl_symbol1825z00zz__expander_recordz00, BNIL);
													BgL_arg1289z00_1142 =
														MAKE_YOUNG_PAIR(BgL_predicatez00_7,
														BgL_arg1291z00_1144);
												}
												{	/* Eval/expdrecord.scm 95 */
													obj_t BgL_arg1292z00_1145;

													{	/* Eval/expdrecord.scm 95 */
														obj_t BgL_arg1295z00_1146;

														{	/* Eval/expdrecord.scm 95 */
															obj_t BgL_arg1296z00_1147;
															obj_t BgL_arg1297z00_1148;

															{	/* Eval/expdrecord.scm 95 */
																obj_t BgL_arg1298z00_1149;

																BgL_arg1298z00_1149 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol1825z00zz__expander_recordz00,
																	BNIL);
																BgL_arg1296z00_1147 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol1827z00zz__expander_recordz00,
																	BgL_arg1298z00_1149);
															}
															{	/* Eval/expdrecord.scm 96 */
																obj_t BgL_arg1299z00_1150;
																obj_t BgL_arg1300z00_1151;

																{	/* Eval/expdrecord.scm 96 */
																	obj_t BgL_arg1301z00_1152;

																	{	/* Eval/expdrecord.scm 96 */
																		obj_t BgL_arg1302z00_1153;
																		obj_t BgL_arg1303z00_1154;

																		{	/* Eval/expdrecord.scm 96 */
																			obj_t BgL_arg1304z00_1155;

																			BgL_arg1304z00_1155 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol1825z00zz__expander_recordz00,
																				BNIL);
																			BgL_arg1302z00_1153 =
																				MAKE_YOUNG_PAIR
																				(BGl_symbol1829z00zz__expander_recordz00,
																				BgL_arg1304z00_1155);
																		}
																		{	/* Eval/expdrecord.scm 96 */
																			obj_t BgL_arg1306z00_1156;

																			{	/* Eval/expdrecord.scm 96 */
																				obj_t BgL_arg1307z00_1157;

																				BgL_arg1307z00_1157 =
																					MAKE_YOUNG_PAIR(BgL_keyz00_1093,
																					BNIL);
																				BgL_arg1306z00_1156 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol1815z00zz__expander_recordz00,
																					BgL_arg1307z00_1157);
																			}
																			BgL_arg1303z00_1154 =
																				MAKE_YOUNG_PAIR(BgL_arg1306z00_1156,
																				BNIL);
																		}
																		BgL_arg1301z00_1152 =
																			MAKE_YOUNG_PAIR(BgL_arg1302z00_1153,
																			BgL_arg1303z00_1154);
																	}
																	BgL_arg1299z00_1150 =
																		MAKE_YOUNG_PAIR
																		(BGl_symbol1831z00zz__expander_recordz00,
																		BgL_arg1301z00_1152);
																}
																{	/* Eval/expdrecord.scm 97 */
																	obj_t BgL_arg1308z00_1158;

																	{	/* Eval/expdrecord.scm 97 */
																		obj_t BgL_arg1309z00_1159;

																		{	/* Eval/expdrecord.scm 97 */
																			obj_t BgL_arg1310z00_1160;
																			obj_t BgL_arg1311z00_1161;

																			{	/* Eval/expdrecord.scm 97 */
																				obj_t BgL_arg1312z00_1162;

																				BgL_arg1312z00_1162 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol1825z00zz__expander_recordz00,
																					BNIL);
																				BgL_arg1310z00_1160 =
																					MAKE_YOUNG_PAIR
																					(BGl_symbol1833z00zz__expander_recordz00,
																					BgL_arg1312z00_1162);
																			}
																			{	/* Eval/expdrecord.scm 97 */
																				long BgL_arg1313z00_1163;

																				BgL_arg1313z00_1163 =
																					bgl_list_length(BgL_fieldsz00_8);
																				BgL_arg1311z00_1161 =
																					MAKE_YOUNG_PAIR(BINT
																					(BgL_arg1313z00_1163), BNIL);
																			}
																			BgL_arg1309z00_1159 =
																				MAKE_YOUNG_PAIR(BgL_arg1310z00_1160,
																				BgL_arg1311z00_1161);
																		}
																		BgL_arg1308z00_1158 =
																			MAKE_YOUNG_PAIR
																			(BGl_symbol1835z00zz__expander_recordz00,
																			BgL_arg1309z00_1159);
																	}
																	BgL_arg1300z00_1151 =
																		MAKE_YOUNG_PAIR(BgL_arg1308z00_1158, BNIL);
																}
																BgL_arg1297z00_1148 =
																	MAKE_YOUNG_PAIR(BgL_arg1299z00_1150,
																	BgL_arg1300z00_1151);
															}
															BgL_arg1295z00_1146 =
																MAKE_YOUNG_PAIR(BgL_arg1296z00_1147,
																BgL_arg1297z00_1148);
														}
														BgL_arg1292z00_1145 =
															MAKE_YOUNG_PAIR
															(BGl_symbol1837z00zz__expander_recordz00,
															BgL_arg1295z00_1146);
													}
													BgL_arg1290z00_1143 =
														MAKE_YOUNG_PAIR(BgL_arg1292z00_1145, BNIL);
												}
												BgL_arg1288z00_1141 =
													MAKE_YOUNG_PAIR(BgL_arg1289z00_1142,
													BgL_arg1290z00_1143);
											}
											BgL_arg1286z00_1139 =
												MAKE_YOUNG_PAIR(BGl_symbol1823z00zz__expander_recordz00,
												BgL_arg1288z00_1141);
										}
										BgL_arg1287z00_1140 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BGl_loopze71ze7zz__expander_recordz00(BgL_valz00_1092,
												BgL_tmpz00_1091, BgL_fieldsz00_8, ((long) 0)), BNIL);
										BgL_arg1194z00_1096 =
											MAKE_YOUNG_PAIR(BgL_arg1286z00_1139, BgL_arg1287z00_1140);
									}
									BgL_arg1186z00_1094 =
										MAKE_YOUNG_PAIR(BgL_arg1190z00_1095, BgL_arg1194z00_1096);
								}
								return
									MAKE_YOUNG_PAIR(BGl_symbol1819z00zz__expander_recordz00,
									BgL_arg1186z00_1094);
							}
						}
					else
						{	/* Eval/expdrecord.scm 124 */
							obj_t BgL_locz00_1748;

							{	/* Eval/expdrecord.scm 124 */
								bool_t BgL_test1876z00_2199;

								{	/* Eval/expdrecord.scm 124 */
									bool_t BgL_res1748z00_1757;

									BgL_res1748z00_1757 = EPAIRP(BgL_constrz00_6);
									BgL_test1876z00_2199 = BgL_res1748z00_1757;
								}
								if (BgL_test1876z00_2199)
									{	/* Eval/expdrecord.scm 124 */
										BgL_locz00_1748 = CER(((obj_t) BgL_constrz00_6));
									}
								else
									{	/* Eval/expdrecord.scm 124 */
										BgL_locz00_1748 = BFALSE;
									}
							}
							{	/* Eval/expdrecord.scm 125 */
								bool_t BgL_test1877z00_2203;

								if (PAIRP(BgL_locz00_1748))
									{	/* Eval/expdrecord.scm 125 */
										bool_t BgL_test1879z00_2206;

										{	/* Eval/expdrecord.scm 125 */
											obj_t BgL_tmpz00_2207;

											BgL_tmpz00_2207 = CDR(BgL_locz00_1748);
											BgL_test1879z00_2206 = PAIRP(BgL_tmpz00_2207);
										}
										if (BgL_test1879z00_2206)
											{	/* Eval/expdrecord.scm 125 */
												obj_t BgL_tmpz00_2210;

												BgL_tmpz00_2210 = CDR(CDR(BgL_locz00_1748));
												BgL_test1877z00_2203 = PAIRP(BgL_tmpz00_2210);
											}
										else
											{	/* Eval/expdrecord.scm 125 */
												BgL_test1877z00_2203 = ((bool_t) 0);
											}
									}
								else
									{	/* Eval/expdrecord.scm 125 */
										BgL_test1877z00_2203 = ((bool_t) 0);
									}
								if (BgL_test1877z00_2203)
									{	/* Eval/expdrecord.scm 125 */
										return
											BGl_errorzf2locationzf2zz__errorz00(BFALSE,
											BGl_string1839z00zz__expander_recordz00, BgL_constrz00_6,
											CAR(CDR(BgL_locz00_1748)),
											CAR(CDR(CDR(BgL_locz00_1748))));
									}
								else
									{	/* Eval/expdrecord.scm 125 */
										return
											BGl_errorz00zz__errorz00(BFALSE,
											BGl_string1839z00zz__expander_recordz00, BgL_constrz00_6);
									}
							}
						}
				}
			else
				{	/* Eval/expdrecord.scm 124 */
					obj_t BgL_locz00_1777;

					{	/* Eval/expdrecord.scm 124 */
						bool_t BgL_test1880z00_2221;

						{	/* Eval/expdrecord.scm 124 */
							bool_t BgL_res1752z00_1786;

							BgL_res1752z00_1786 = EPAIRP(BgL_fieldsz00_8);
							BgL_test1880z00_2221 = BgL_res1752z00_1786;
						}
						if (BgL_test1880z00_2221)
							{	/* Eval/expdrecord.scm 124 */
								BgL_locz00_1777 = CER(((obj_t) BgL_fieldsz00_8));
							}
						else
							{	/* Eval/expdrecord.scm 124 */
								BgL_locz00_1777 = BFALSE;
							}
					}
					{	/* Eval/expdrecord.scm 125 */
						bool_t BgL_test1881z00_2225;

						if (PAIRP(BgL_locz00_1777))
							{	/* Eval/expdrecord.scm 125 */
								bool_t BgL_test1883z00_2228;

								{	/* Eval/expdrecord.scm 125 */
									obj_t BgL_tmpz00_2229;

									BgL_tmpz00_2229 = CDR(BgL_locz00_1777);
									BgL_test1883z00_2228 = PAIRP(BgL_tmpz00_2229);
								}
								if (BgL_test1883z00_2228)
									{	/* Eval/expdrecord.scm 125 */
										obj_t BgL_tmpz00_2232;

										BgL_tmpz00_2232 = CDR(CDR(BgL_locz00_1777));
										BgL_test1881z00_2225 = PAIRP(BgL_tmpz00_2232);
									}
								else
									{	/* Eval/expdrecord.scm 125 */
										BgL_test1881z00_2225 = ((bool_t) 0);
									}
							}
						else
							{	/* Eval/expdrecord.scm 125 */
								BgL_test1881z00_2225 = ((bool_t) 0);
							}
						if (BgL_test1881z00_2225)
							{	/* Eval/expdrecord.scm 125 */
								return
									BGl_errorzf2locationzf2zz__errorz00(BFALSE,
									BGl_string1840z00zz__expander_recordz00, BgL_fieldsz00_8,
									CAR(CDR(BgL_locz00_1777)), CAR(CDR(CDR(BgL_locz00_1777))));
							}
						else
							{	/* Eval/expdrecord.scm 125 */
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string1840z00zz__expander_recordz00, BgL_fieldsz00_8);
							}
					}
				}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__expander_recordz00(obj_t BgL_constrz00_2082,
		obj_t BgL_tmpz00_2081, obj_t BgL_fieldsz00_1117, long BgL_iz00_1118)
	{
		{	/* Eval/expdrecord.scm 83 */
		BGl_loopze70ze7zz__expander_recordz00:
			if (NULLP(BgL_fieldsz00_1117))
				{	/* Eval/expdrecord.scm 86 */
					return BNIL;
				}
			else
				{	/* Eval/expdrecord.scm 88 */
					bool_t BgL_test1885z00_2245;

					{	/* Eval/expdrecord.scm 88 */
						obj_t BgL_tmpz00_2246;

						{	/* Eval/expdrecord.scm 88 */
							obj_t BgL_auxz00_2247;

							{	/* Eval/expdrecord.scm 88 */
								obj_t BgL_pairz00_1681;

								BgL_pairz00_1681 = CAR(((obj_t) BgL_fieldsz00_1117));
								BgL_auxz00_2247 = CAR(BgL_pairz00_1681);
							}
							BgL_tmpz00_2246 =
								BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_2247,
								CDR(((obj_t) BgL_constrz00_2082)));
						}
						BgL_test1885z00_2245 = CBOOL(BgL_tmpz00_2246);
					}
					if (BgL_test1885z00_2245)
						{	/* Eval/expdrecord.scm 89 */
							obj_t BgL_arg1263z00_1124;
							obj_t BgL_arg1268z00_1125;

							{	/* Eval/expdrecord.scm 89 */
								obj_t BgL_arg1270z00_1126;

								{	/* Eval/expdrecord.scm 89 */
									obj_t BgL_arg1271z00_1127;

									{	/* Eval/expdrecord.scm 89 */
										obj_t BgL_arg1273z00_1128;

										{	/* Eval/expdrecord.scm 89 */
											obj_t BgL_arg1274z00_1129;

											{	/* Eval/expdrecord.scm 89 */
												obj_t BgL_pairz00_1686;

												BgL_pairz00_1686 = CAR(((obj_t) BgL_fieldsz00_1117));
												BgL_arg1274z00_1129 = CAR(BgL_pairz00_1686);
											}
											BgL_arg1273z00_1128 =
												MAKE_YOUNG_PAIR(BgL_arg1274z00_1129, BNIL);
										}
										BgL_arg1271z00_1127 =
											MAKE_YOUNG_PAIR(BINT(BgL_iz00_1118), BgL_arg1273z00_1128);
									}
									BgL_arg1270z00_1126 =
										MAKE_YOUNG_PAIR(BgL_tmpz00_2081, BgL_arg1271z00_1127);
								}
								BgL_arg1263z00_1124 =
									MAKE_YOUNG_PAIR(BGl_symbol1841z00zz__expander_recordz00,
									BgL_arg1270z00_1126);
							}
							{	/* Eval/expdrecord.scm 90 */
								obj_t BgL_arg1275z00_1130;
								long BgL_arg1276z00_1131;

								BgL_arg1275z00_1130 = CDR(((obj_t) BgL_fieldsz00_1117));
								BgL_arg1276z00_1131 = (BgL_iz00_1118 + ((long) 1));
								BgL_arg1268z00_1125 =
									BGl_loopze70ze7zz__expander_recordz00(BgL_constrz00_2082,
									BgL_tmpz00_2081, BgL_arg1275z00_1130, BgL_arg1276z00_1131);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1263z00_1124, BgL_arg1268z00_1125);
						}
					else
						{	/* Eval/expdrecord.scm 92 */
							obj_t BgL_arg1280z00_1133;
							long BgL_arg1281z00_1134;

							BgL_arg1280z00_1133 = CDR(((obj_t) BgL_fieldsz00_1117));
							BgL_arg1281z00_1134 = (BgL_iz00_1118 + ((long) 1));
							{
								long BgL_iz00_2272;
								obj_t BgL_fieldsz00_2271;

								BgL_fieldsz00_2271 = BgL_arg1280z00_1133;
								BgL_iz00_2272 = BgL_arg1281z00_1134;
								BgL_iz00_1118 = BgL_iz00_2272;
								BgL_fieldsz00_1117 = BgL_fieldsz00_2271;
								goto BGl_loopze70ze7zz__expander_recordz00;
							}
						}
				}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__expander_recordz00(obj_t BgL_valz00_2084,
		obj_t BgL_tmpz00_2083, obj_t BgL_fieldsz00_1166, long BgL_iz00_1167)
	{
		{	/* Eval/expdrecord.scm 98 */
			if (NULLP(BgL_fieldsz00_1166))
				{	/* Eval/expdrecord.scm 100 */
					return BNIL;
				}
			else
				{	/* Eval/expdrecord.scm 102 */
					obj_t BgL_fieldz00_1170;

					BgL_fieldz00_1170 = CAR(((obj_t) BgL_fieldsz00_1166));
					if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(bgl_list_length
								(BgL_fieldz00_1170)), BINT(((long) 2))))
						{	/* Eval/expdrecord.scm 105 */
							obj_t BgL_arg1319z00_1173;
							obj_t BgL_arg1322z00_1174;

							{	/* Eval/expdrecord.scm 105 */
								obj_t BgL_arg1324z00_1175;

								{	/* Eval/expdrecord.scm 105 */
									obj_t BgL_arg1325z00_1176;
									obj_t BgL_arg1326z00_1177;

									{	/* Eval/expdrecord.scm 105 */
										obj_t BgL_arg1327z00_1178;
										obj_t BgL_arg1328z00_1179;

										{	/* Eval/expdrecord.scm 105 */
											obj_t BgL_pairz00_1700;

											BgL_pairz00_1700 = CDR(((obj_t) BgL_fieldz00_1170));
											BgL_arg1327z00_1178 = CAR(BgL_pairz00_1700);
										}
										BgL_arg1328z00_1179 =
											MAKE_YOUNG_PAIR(BgL_tmpz00_2083, BNIL);
										BgL_arg1325z00_1176 =
											MAKE_YOUNG_PAIR(BgL_arg1327z00_1178, BgL_arg1328z00_1179);
									}
									{	/* Eval/expdrecord.scm 106 */
										obj_t BgL_arg1329z00_1180;

										{	/* Eval/expdrecord.scm 106 */
											obj_t BgL_arg1330z00_1181;

											{	/* Eval/expdrecord.scm 106 */
												obj_t BgL_arg1331z00_1182;

												BgL_arg1331z00_1182 =
													MAKE_YOUNG_PAIR(BINT(BgL_iz00_1167), BNIL);
												BgL_arg1330z00_1181 =
													MAKE_YOUNG_PAIR(BgL_tmpz00_2083, BgL_arg1331z00_1182);
											}
											BgL_arg1329z00_1180 =
												MAKE_YOUNG_PAIR(BGl_symbol1843z00zz__expander_recordz00,
												BgL_arg1330z00_1181);
										}
										BgL_arg1326z00_1177 =
											MAKE_YOUNG_PAIR(BgL_arg1329z00_1180, BNIL);
									}
									BgL_arg1324z00_1175 =
										MAKE_YOUNG_PAIR(BgL_arg1325z00_1176, BgL_arg1326z00_1177);
								}
								BgL_arg1319z00_1173 =
									MAKE_YOUNG_PAIR(BGl_symbol1823z00zz__expander_recordz00,
									BgL_arg1324z00_1175);
							}
							{	/* Eval/expdrecord.scm 107 */
								obj_t BgL_arg1333z00_1183;
								long BgL_arg1334z00_1184;

								BgL_arg1333z00_1183 = CDR(((obj_t) BgL_fieldsz00_1166));
								BgL_arg1334z00_1184 = (BgL_iz00_1167 + ((long) 1));
								BgL_arg1322z00_1174 =
									BGl_loopze71ze7zz__expander_recordz00(BgL_valz00_2084,
									BgL_tmpz00_2083, BgL_arg1333z00_1183, BgL_arg1334z00_1184);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1319z00_1173, BgL_arg1322z00_1174);
						}
					else
						{	/* Eval/expdrecord.scm 104 */
							if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BINT(bgl_list_length
										(BgL_fieldz00_1170)), BINT(((long) 3))))
								{	/* Eval/expdrecord.scm 110 */
									obj_t BgL_arg1339z00_1188;
									obj_t BgL_arg1340z00_1189;

									{	/* Eval/expdrecord.scm 110 */
										obj_t BgL_arg1341z00_1190;

										{	/* Eval/expdrecord.scm 110 */
											obj_t BgL_arg1342z00_1191;
											obj_t BgL_arg1343z00_1192;

											{	/* Eval/expdrecord.scm 110 */
												obj_t BgL_arg1344z00_1193;

												{	/* Eval/expdrecord.scm 110 */
													obj_t BgL_arg1345z00_1194;
													obj_t BgL_arg1346z00_1195;

													{	/* Eval/expdrecord.scm 110 */
														obj_t BgL_arg1347z00_1196;
														obj_t BgL_arg1348z00_1197;

														{	/* Eval/expdrecord.scm 110 */
															obj_t BgL_pairz00_1708;

															BgL_pairz00_1708 =
																CDR(((obj_t) BgL_fieldz00_1170));
															BgL_arg1347z00_1196 = CAR(BgL_pairz00_1708);
														}
														BgL_arg1348z00_1197 =
															MAKE_YOUNG_PAIR(BgL_tmpz00_2083, BNIL);
														BgL_arg1345z00_1194 =
															MAKE_YOUNG_PAIR(BgL_arg1347z00_1196,
															BgL_arg1348z00_1197);
													}
													{	/* Eval/expdrecord.scm 111 */
														obj_t BgL_arg1350z00_1198;

														{	/* Eval/expdrecord.scm 111 */
															obj_t BgL_arg1351z00_1199;

															{	/* Eval/expdrecord.scm 111 */
																obj_t BgL_arg1352z00_1200;

																BgL_arg1352z00_1200 =
																	MAKE_YOUNG_PAIR(BINT(BgL_iz00_1167), BNIL);
																BgL_arg1351z00_1199 =
																	MAKE_YOUNG_PAIR(BgL_tmpz00_2083,
																	BgL_arg1352z00_1200);
															}
															BgL_arg1350z00_1198 =
																MAKE_YOUNG_PAIR
																(BGl_symbol1843z00zz__expander_recordz00,
																BgL_arg1351z00_1199);
														}
														BgL_arg1346z00_1195 =
															MAKE_YOUNG_PAIR(BgL_arg1350z00_1198, BNIL);
													}
													BgL_arg1344z00_1193 =
														MAKE_YOUNG_PAIR(BgL_arg1345z00_1194,
														BgL_arg1346z00_1195);
												}
												BgL_arg1342z00_1191 =
													MAKE_YOUNG_PAIR
													(BGl_symbol1823z00zz__expander_recordz00,
													BgL_arg1344z00_1193);
											}
											{	/* Eval/expdrecord.scm 112 */
												obj_t BgL_arg1353z00_1201;

												{	/* Eval/expdrecord.scm 112 */
													obj_t BgL_arg1354z00_1202;

													{	/* Eval/expdrecord.scm 112 */
														obj_t BgL_arg1355z00_1203;
														obj_t BgL_arg1356z00_1204;

														{	/* Eval/expdrecord.scm 112 */
															obj_t BgL_arg1357z00_1205;
															obj_t BgL_arg1359z00_1206;

															{	/* Eval/expdrecord.scm 112 */
																obj_t BgL_pairz00_1714;

																{	/* Eval/expdrecord.scm 112 */
																	obj_t BgL_pairz00_1713;

																	BgL_pairz00_1713 =
																		CDR(((obj_t) BgL_fieldz00_1170));
																	BgL_pairz00_1714 = CDR(BgL_pairz00_1713);
																}
																BgL_arg1357z00_1205 = CAR(BgL_pairz00_1714);
															}
															{	/* Eval/expdrecord.scm 112 */
																obj_t BgL_arg1360z00_1207;

																BgL_arg1360z00_1207 =
																	MAKE_YOUNG_PAIR(BgL_valz00_2084, BNIL);
																BgL_arg1359z00_1206 =
																	MAKE_YOUNG_PAIR(BgL_tmpz00_2083,
																	BgL_arg1360z00_1207);
															}
															BgL_arg1355z00_1203 =
																MAKE_YOUNG_PAIR(BgL_arg1357z00_1205,
																BgL_arg1359z00_1206);
														}
														{	/* Eval/expdrecord.scm 113 */
															obj_t BgL_arg1361z00_1208;

															{	/* Eval/expdrecord.scm 113 */
																obj_t BgL_arg1362z00_1209;

																{	/* Eval/expdrecord.scm 113 */
																	obj_t BgL_arg1363z00_1210;

																	{	/* Eval/expdrecord.scm 113 */
																		obj_t BgL_arg1364z00_1211;

																		BgL_arg1364z00_1211 =
																			MAKE_YOUNG_PAIR(BgL_valz00_2084, BNIL);
																		BgL_arg1363z00_1210 =
																			MAKE_YOUNG_PAIR(BINT(BgL_iz00_1167),
																			BgL_arg1364z00_1211);
																	}
																	BgL_arg1362z00_1209 =
																		MAKE_YOUNG_PAIR(BgL_tmpz00_2083,
																		BgL_arg1363z00_1210);
																}
																BgL_arg1361z00_1208 =
																	MAKE_YOUNG_PAIR
																	(BGl_symbol1841z00zz__expander_recordz00,
																	BgL_arg1362z00_1209);
															}
															BgL_arg1356z00_1204 =
																MAKE_YOUNG_PAIR(BgL_arg1361z00_1208, BNIL);
														}
														BgL_arg1354z00_1202 =
															MAKE_YOUNG_PAIR(BgL_arg1355z00_1203,
															BgL_arg1356z00_1204);
													}
													BgL_arg1353z00_1201 =
														MAKE_YOUNG_PAIR
														(BGl_symbol1823z00zz__expander_recordz00,
														BgL_arg1354z00_1202);
												}
												BgL_arg1343z00_1192 =
													MAKE_YOUNG_PAIR(BgL_arg1353z00_1201, BNIL);
											}
											BgL_arg1341z00_1190 =
												MAKE_YOUNG_PAIR(BgL_arg1342z00_1191,
												BgL_arg1343z00_1192);
										}
										BgL_arg1339z00_1188 =
											MAKE_YOUNG_PAIR(BGl_symbol1819z00zz__expander_recordz00,
											BgL_arg1341z00_1190);
									}
									{	/* Eval/expdrecord.scm 114 */
										obj_t BgL_arg1365z00_1212;
										long BgL_arg1367z00_1213;

										BgL_arg1365z00_1212 = CDR(((obj_t) BgL_fieldsz00_1166));
										BgL_arg1367z00_1213 = (BgL_iz00_1167 + ((long) 1));
										BgL_arg1340z00_1189 =
											BGl_loopze71ze7zz__expander_recordz00(BgL_valz00_2084,
											BgL_tmpz00_2083, BgL_arg1365z00_1212,
											BgL_arg1367z00_1213);
									}
									return
										MAKE_YOUNG_PAIR(BgL_arg1339z00_1188, BgL_arg1340z00_1189);
								}
							else
								{	/* Eval/expdrecord.scm 124 */
									obj_t BgL_locz00_1719;

									{	/* Eval/expdrecord.scm 124 */
										bool_t BgL_test1889z00_2339;

										{	/* Eval/expdrecord.scm 124 */
											bool_t BgL_res1744z00_1728;

											BgL_res1744z00_1728 = EPAIRP(BgL_fieldz00_1170);
											BgL_test1889z00_2339 = BgL_res1744z00_1728;
										}
										if (BgL_test1889z00_2339)
											{	/* Eval/expdrecord.scm 124 */
												BgL_locz00_1719 = CER(((obj_t) BgL_fieldz00_1170));
											}
										else
											{	/* Eval/expdrecord.scm 124 */
												BgL_locz00_1719 = BFALSE;
											}
									}
									{	/* Eval/expdrecord.scm 125 */
										bool_t BgL_test1890z00_2343;

										if (PAIRP(BgL_locz00_1719))
											{	/* Eval/expdrecord.scm 125 */
												bool_t BgL_test1892z00_2346;

												{	/* Eval/expdrecord.scm 125 */
													obj_t BgL_tmpz00_2347;

													BgL_tmpz00_2347 = CDR(BgL_locz00_1719);
													BgL_test1892z00_2346 = PAIRP(BgL_tmpz00_2347);
												}
												if (BgL_test1892z00_2346)
													{	/* Eval/expdrecord.scm 125 */
														obj_t BgL_tmpz00_2350;

														BgL_tmpz00_2350 = CDR(CDR(BgL_locz00_1719));
														BgL_test1890z00_2343 = PAIRP(BgL_tmpz00_2350);
													}
												else
													{	/* Eval/expdrecord.scm 125 */
														BgL_test1890z00_2343 = ((bool_t) 0);
													}
											}
										else
											{	/* Eval/expdrecord.scm 125 */
												BgL_test1890z00_2343 = ((bool_t) 0);
											}
										if (BgL_test1890z00_2343)
											{	/* Eval/expdrecord.scm 125 */
												return
													BGl_errorzf2locationzf2zz__errorz00(BFALSE,
													BGl_string1845z00zz__expander_recordz00,
													BgL_fieldz00_1170, CAR(CDR(BgL_locz00_1719)),
													CAR(CDR(CDR(BgL_locz00_1719))));
											}
										else
											{	/* Eval/expdrecord.scm 125 */
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string1845z00zz__expander_recordz00,
													BgL_fieldz00_1170);
											}
									}
								}
						}
				}
		}

	}



/* expand-error */
	obj_t BGl_expandzd2errorzd2zz__expander_recordz00(bool_t BgL_pz00_9,
		obj_t BgL_mz00_10, obj_t BgL_xz00_11)
	{
		{	/* Eval/expdrecord.scm 123 */
			{	/* Eval/expdrecord.scm 124 */
				obj_t BgL_locz00_1223;

				{	/* Eval/expdrecord.scm 124 */
					bool_t BgL_test1893z00_2361;

					{	/* Eval/expdrecord.scm 124 */
						bool_t BgL_res1756z00_1806;

						BgL_res1756z00_1806 = EPAIRP(BgL_xz00_11);
						BgL_test1893z00_2361 = BgL_res1756z00_1806;
					}
					if (BgL_test1893z00_2361)
						{	/* Eval/expdrecord.scm 124 */
							BgL_locz00_1223 = CER(((obj_t) BgL_xz00_11));
						}
					else
						{	/* Eval/expdrecord.scm 124 */
							BgL_locz00_1223 = BFALSE;
						}
				}
				{	/* Eval/expdrecord.scm 125 */
					bool_t BgL_test1894z00_2365;

					if (PAIRP(BgL_locz00_1223))
						{	/* Eval/expdrecord.scm 125 */
							bool_t BgL_test1896z00_2368;

							{	/* Eval/expdrecord.scm 125 */
								obj_t BgL_tmpz00_2369;

								BgL_tmpz00_2369 = CDR(BgL_locz00_1223);
								BgL_test1896z00_2368 = PAIRP(BgL_tmpz00_2369);
							}
							if (BgL_test1896z00_2368)
								{	/* Eval/expdrecord.scm 125 */
									obj_t BgL_tmpz00_2372;

									BgL_tmpz00_2372 = CDR(CDR(BgL_locz00_1223));
									BgL_test1894z00_2365 = PAIRP(BgL_tmpz00_2372);
								}
							else
								{	/* Eval/expdrecord.scm 125 */
									BgL_test1894z00_2365 = ((bool_t) 0);
								}
						}
					else
						{	/* Eval/expdrecord.scm 125 */
							BgL_test1894z00_2365 = ((bool_t) 0);
						}
					if (BgL_test1894z00_2365)
						{	/* Eval/expdrecord.scm 125 */
							return
								BGl_errorzf2locationzf2zz__errorz00(BBOOL(BgL_pz00_9),
								BgL_mz00_10, BgL_xz00_11, CAR(CDR(BgL_locz00_1223)),
								CAR(CDR(CDR(BgL_locz00_1223))));
						}
					else
						{	/* Eval/expdrecord.scm 125 */
							return
								BGl_errorz00zz__errorz00(BBOOL(BgL_pz00_9), BgL_mz00_10,
								BgL_xz00_11);
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__expander_recordz00()
	{
		{	/* Eval/expdrecord.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_recordz00()
	{
		{	/* Eval/expdrecord.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_recordz00()
	{
		{	/* Eval/expdrecord.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_recordz00()
	{
		{	/* Eval/expdrecord.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long)
					515155831),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 86988972),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
			return BGl_modulezd2initializa7ationz75zz__prognz00(((long) 177147628),
				BSTRING_TO_STRING(BGl_string1846z00zz__expander_recordz00));
		}

	}

#ifdef __cplusplus
}
#endif
