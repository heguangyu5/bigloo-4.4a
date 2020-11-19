/*===========================================================================*/
/*   (Module/pragma.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/pragma.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;

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


	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_pragmaz00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31233ze3ze5zzmodule_pragmaz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_pragmaz00();
	extern obj_t BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00;
	extern obj_t BGl_removezd2varzd2fromz12z12zzast_removez00(obj_t,
		BgL_variablez00_bglt);
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_pragmazd2finaliza7erz75zzmodule_pragmaz00();
	static obj_t BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00 = BUNSPEC;
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_pragmazd2parserzd2zzmodule_pragmaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_pragmaz00();
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	static obj_t BGl_z62makezd2pragmazd2compilerz62zzmodule_pragmaz00(obj_t);
	static obj_t
		BGl_setzd2pragmazd2propertyz12z12zzmodule_pragmaz00(BgL_globalz00_bglt,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2pragmazd2compilerz00zzmodule_pragmaz00();
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_pragmaz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	static bool_t
		BGl_setzd2pragmazd2propertiesz12z12zzmodule_pragmaz00(BgL_globalz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_pragmaz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_pragmaz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31240ze3ze5zzmodule_pragmaz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzmodule_pragmaz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_pragmaz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_pragmaz00();
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z62pragmazd2finaliza7erz17zzmodule_pragmaz00(obj_t);
	static obj_t BGl_pragmazd2producerzd2zzmodule_pragmaz00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern BgL_feffectz00_bglt BGl_parsezd2effectzd2zzeffect_feffectz00(obj_t);
	static obj_t __cnst[21];


	   
		 
		DEFINE_STRING(BGl_string1800z00zzmodule_pragmaz00,
		BgL_bgl_string1800za700za7za7m1822za7,
		"property is not concerning a function", 37);
	      DEFINE_STRING(BGl_string1801z00zzmodule_pragmaz00,
		BgL_bgl_string1801za700za7za7m1823za7, "side-effect-free", 16);
	      DEFINE_STRING(BGl_string1802z00zzmodule_pragmaz00,
		BgL_bgl_string1802za700za7za7m1824za7, "no-cfa-top", 10);
	      DEFINE_STRING(BGl_string1803z00zzmodule_pragmaz00,
		BgL_bgl_string1803za700za7za7m1825za7, "no-init-flow", 12);
	      DEFINE_STRING(BGl_string1804z00zzmodule_pragmaz00,
		BgL_bgl_string1804za700za7za7m1826za7, "allocator", 9);
	      DEFINE_STRING(BGl_string1805z00zzmodule_pragmaz00,
		BgL_bgl_string1805za700za7za7m1827za7, "no-trace", 8);
	      DEFINE_STRING(BGl_string1806z00zzmodule_pragmaz00,
		BgL_bgl_string1806za700za7za7m1828za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1807z00zzmodule_pragmaz00,
		BgL_bgl_string1807za700za7za7m1829za7, "Illegal \"pragma\" form", 21);
	      DEFINE_STRING(BGl_string1808z00zzmodule_pragmaz00,
		BgL_bgl_string1808za700za7za7m1830za7, "predicate-of", 12);
	      DEFINE_STRING(BGl_string1809z00zzmodule_pragmaz00,
		BgL_bgl_string1809za700za7za7m1831za7, "Illegal \"predicate-of\" pragma",
		29);
	      DEFINE_STRING(BGl_string1810z00zzmodule_pragmaz00,
		BgL_bgl_string1810za700za7za7m1832za7, "effect", 6);
	      DEFINE_STRING(BGl_string1811z00zzmodule_pragmaz00,
		BgL_bgl_string1811za700za7za7m1833za7, "stack-allocator", 15);
	      DEFINE_STRING(BGl_string1812z00zzmodule_pragmaz00,
		BgL_bgl_string1812za700za7za7m1834za7,
		"Illegal \"args-noescape\", cannot find argument", 45);
	      DEFINE_STRING(BGl_string1813z00zzmodule_pragmaz00,
		BgL_bgl_string1813za700za7za7m1835za7,
		"Illegal \"args-noescape\" on non-function value", 45);
	      DEFINE_STRING(BGl_string1814z00zzmodule_pragmaz00,
		BgL_bgl_string1814za700za7za7m1836za7, "Illegal \"args-noescape\" pragma",
		30);
	      DEFINE_STRING(BGl_string1815z00zzmodule_pragmaz00,
		BgL_bgl_string1815za700za7za7m1837za7, "args-noescape", 13);
	      DEFINE_STRING(BGl_string1816z00zzmodule_pragmaz00,
		BgL_bgl_string1816za700za7za7m1838za7, "module_pragma", 13);
	      DEFINE_STRING(BGl_string1817z00zzmodule_pragmaz00,
		BgL_bgl_string1817za700za7za7m1839za7,
		"* args-noescape stack-allocator effect coerce predicate-of thread-local default-inline no-alloc fail-safe args-safe nesting no-trace allocator no-init-flow no-cfa-top side-effect-free void @ foreign pragma ",
		206);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1792z00zzmodule_pragmaz00,
		BgL_bgl_za762za7c3za704anonymo1840za7,
		BGl_z62zc3z04anonymousza31233ze3ze5zzmodule_pragmaz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazd2finaliza7erzd2envza7zzmodule_pragmaz00,
		BgL_bgl_za762pragmaza7d2fina1841z00,
		BGl_z62pragmazd2finaliza7erz17zzmodule_pragmaz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2pragmazd2compilerzd2envzd2zzmodule_pragmaz00,
		BgL_bgl_za762makeza7d2pragma1842z00,
		BGl_z62makezd2pragmazd2compilerz62zzmodule_pragmaz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1793z00zzmodule_pragmaz00,
		BgL_bgl_string1793za700za7za7m1843za7, "pragma", 6);
	      DEFINE_STRING(BGl_string1794z00zzmodule_pragmaz00,
		BgL_bgl_string1794za700za7za7m1844za7, "Illegal clause", 14);
	      DEFINE_STRING(BGl_string1795z00zzmodule_pragmaz00,
		BgL_bgl_string1795za700za7za7m1845za7,
		"Can't find global variable for pragma", 37);
	      DEFINE_STRING(BGl_string1796z00zzmodule_pragmaz00,
		BgL_bgl_string1796za700za7za7m1846za7, "pragma-finalizer", 16);
	      DEFINE_STRING(BGl_string1797z00zzmodule_pragmaz00,
		BgL_bgl_string1797za700za7za7m1847za7, "Illegal \"pragma\" finalizer form",
		31);
	      DEFINE_STRING(BGl_string1798z00zzmodule_pragmaz00,
		BgL_bgl_string1798za700za7za7m1848za7, "pragma(", 7);
	      DEFINE_STRING(BGl_string1799z00zzmodule_pragmaz00,
		BgL_bgl_string1799za700za7za7m1849za7, ")", 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzmodule_pragmaz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(long
		BgL_checksumz00_1919, char *BgL_fromz00_1920)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_pragmaz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_pragmaz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_pragmaz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_pragmaz00();
					BGl_cnstzd2initzd2zzmodule_pragmaz00();
					BGl_importedzd2moduleszd2initz00zzmodule_pragmaz00();
					return BGl_toplevelzd2initzd2zzmodule_pragmaz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_pragmaz00()
	{
		{	/* Module/pragma.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"module_pragma");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_pragma");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"module_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_pragma");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_pragmaz00()
	{
		{	/* Module/pragma.scm 15 */
			{	/* Module/pragma.scm 15 */
				obj_t BgL_cportz00_1899;

				{	/* Module/pragma.scm 15 */
					obj_t BgL_stringz00_1907;

					BgL_stringz00_1907 = BGl_string1817z00zzmodule_pragmaz00;
					{	/* Module/pragma.scm 15 */
						obj_t BgL_startz00_1908;

						BgL_startz00_1908 = BINT(((long) 0));
						{	/* Module/pragma.scm 15 */
							obj_t BgL_endz00_1909;

							BgL_endz00_1909 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1907)));
							{	/* Module/pragma.scm 15 */

								BgL_cportz00_1899 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1907, BgL_startz00_1908, BgL_endz00_1909);
				}}}}
				{
					long BgL_iz00_1900;

					BgL_iz00_1900 = ((long) 20);
				BgL_loopz00_1901:
					if ((BgL_iz00_1900 == ((long) -1)))
						{	/* Module/pragma.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/pragma.scm 15 */
							{	/* Module/pragma.scm 15 */
								obj_t BgL_arg1820z00_1903;

								{	/* Module/pragma.scm 15 */

									{	/* Module/pragma.scm 15 */
										obj_t BgL_locationz00_1905;

										BgL_locationz00_1905 = BBOOL(((bool_t) 0));
										{	/* Module/pragma.scm 15 */

											BgL_arg1820z00_1903 =
												BGl_readz00zz__readerz00(BgL_cportz00_1899,
												BgL_locationz00_1905);
										}
									}
								}
								{	/* Module/pragma.scm 15 */
									int BgL_tmpz00_1946;

									BgL_tmpz00_1946 = (int) (BgL_iz00_1900);
									CNST_TABLE_SET(BgL_tmpz00_1946, BgL_arg1820z00_1903);
							}}
							{	/* Module/pragma.scm 15 */
								int BgL_auxz00_1906;

								BgL_auxz00_1906 = (int) ((BgL_iz00_1900 - ((long) 1)));
								{
									long BgL_iz00_1951;

									BgL_iz00_1951 = (long) (BgL_auxz00_1906);
									BgL_iz00_1900 = BgL_iz00_1951;
									goto BgL_loopz00_1901;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_pragmaz00()
	{
		{	/* Module/pragma.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_pragmaz00()
	{
		{	/* Module/pragma.scm 15 */
			return (BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00 = BNIL, BUNSPEC);
		}

	}



/* make-pragma-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2pragmazd2compilerz00zzmodule_pragmaz00()
	{
		{	/* Module/pragma.scm 35 */
			{	/* Module/pragma.scm 36 */
				BgL_ccompz00_bglt BgL_new1103z00_1343;

				{	/* Module/pragma.scm 37 */
					BgL_ccompz00_bglt BgL_new1102z00_1348;

					BgL_new1102z00_1348 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/pragma.scm 37 */
						long BgL_arg1239z00_1349;

						{	/* Module/pragma.scm 37 */
							long BgL_res1728z00_1737;

							BgL_res1728z00_1737 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1239z00_1349 = BgL_res1728z00_1737;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1102z00_1348), BgL_arg1239z00_1349);
					}
					BgL_new1103z00_1343 = BgL_new1102z00_1348;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1103z00_1343))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1103z00_1343))->BgL_producerz00) =
					((obj_t)
						BGl_pragmazd2producerzd2zzmodule_pragmaz00
						(BGl_za2moduleza2z00zzmodule_modulez00)), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1103z00_1343))->BgL_consumerz00) =
					((obj_t) BGl_proc1792z00zzmodule_pragmaz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1103z00_1343))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_pragmazd2finaliza7erzd2envza7zzmodule_pragmaz00),
					BUNSPEC);
				return ((obj_t) BgL_new1103z00_1343);
			}
		}

	}



/* &make-pragma-compiler */
	obj_t BGl_z62makezd2pragmazd2compilerz62zzmodule_pragmaz00(obj_t
		BgL_envz00_1890)
	{
		{	/* Module/pragma.scm 35 */
			return BGl_makezd2pragmazd2compilerz00zzmodule_pragmaz00();
		}

	}



/* &<@anonymous:1233> */
	obj_t BGl_z62zc3z04anonymousza31233ze3ze5zzmodule_pragmaz00(obj_t
		BgL_envz00_1891, obj_t BgL_mz00_1892, obj_t BgL_cz00_1893)
	{
		{	/* Module/pragma.scm 39 */
			{	/* Module/pragma.scm 39 */
				obj_t BgL_fun1234z00_1912;

				BgL_fun1234z00_1912 =
					BGl_pragmazd2producerzd2zzmodule_pragmaz00(BgL_mz00_1892);
				return
					PROCEDURE_ENTRY(BgL_fun1234z00_1912) (BgL_fun1234z00_1912,
					BgL_cz00_1893, BEOA);
			}
		}

	}



/* pragma-producer */
	obj_t BGl_pragmazd2producerzd2zzmodule_pragmaz00(obj_t BgL_modulez00_3)
	{
		{	/* Module/pragma.scm 45 */
			{	/* Module/pragma.scm 46 */
				obj_t BgL_zc3z04anonymousza31240ze3z87_1895;

				BgL_zc3z04anonymousza31240ze3z87_1895 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31240ze3ze5zzmodule_pragmaz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31240ze3z87_1895, (int) (((long) 0)),
					BgL_modulez00_3);
				return BgL_zc3z04anonymousza31240ze3z87_1895;
			}
		}

	}



/* &<@anonymous:1240> */
	obj_t BGl_z62zc3z04anonymousza31240ze3ze5zzmodule_pragmaz00(obj_t
		BgL_envz00_1896, obj_t BgL_clausez00_1898)
	{
		{	/* Module/pragma.scm 46 */
			{	/* Module/pragma.scm 46 */
				obj_t BgL_modulez00_1897;

				BgL_modulez00_1897 = PROCEDURE_REF(BgL_envz00_1896, (int) (((long) 0)));
				{
					obj_t BgL_protosz00_1916;

					if (PAIRP(BgL_clausez00_1898))
						{	/* Module/pragma.scm 46 */
							BgL_protosz00_1916 = CDR(BgL_clausez00_1898);
							{
								obj_t BgL_l1222z00_1918;

								BgL_l1222z00_1918 = BgL_protosz00_1916;
							BgL_zc3z04anonymousza31244ze3z87_1917:
								if (PAIRP(BgL_l1222z00_1918))
									{	/* Module/pragma.scm 49 */
										BGl_pragmazd2parserzd2zzmodule_pragmaz00(CAR
											(BgL_l1222z00_1918), BgL_modulez00_1897,
											BgL_clausez00_1898);
										{
											obj_t BgL_l1222z00_1984;

											BgL_l1222z00_1984 = CDR(BgL_l1222z00_1918);
											BgL_l1222z00_1918 = BgL_l1222z00_1984;
											goto BgL_zc3z04anonymousza31244ze3z87_1917;
										}
									}
								else
									{	/* Module/pragma.scm 49 */
										((bool_t) 1);
									}
							}
							return BNIL;
						}
					else
						{	/* Module/pragma.scm 46 */
							{	/* Module/pragma.scm 54 */
								obj_t BgL_list1247z00_1915;

								BgL_list1247z00_1915 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								return
									BGl_userzd2errorzd2zztools_errorz00
									(BGl_string1793z00zzmodule_pragmaz00,
									BGl_string1794z00zzmodule_pragmaz00, BgL_clausez00_1898,
									BgL_list1247z00_1915);
							}
						}
				}
			}
		}

	}



/* pragma-parser */
	obj_t BGl_pragmazd2parserzd2zzmodule_pragmaz00(obj_t BgL_protoz00_4,
		obj_t BgL_modulez00_5, obj_t BgL_clausez00_6)
	{
		{	/* Module/pragma.scm 59 */
			{
				obj_t BgL_idz00_1366;
				obj_t BgL_propz00_1367;

				if (PAIRP(BgL_protoz00_4))
					{	/* Module/pragma.scm 60 */
						obj_t BgL_carzd2116zd2_1372;

						BgL_carzd2116zd2_1372 = CAR(BgL_protoz00_4);
						if (SYMBOLP(BgL_carzd2116zd2_1372))
							{	/* Module/pragma.scm 60 */
								BgL_idz00_1366 = BgL_carzd2116zd2_1372;
								BgL_propz00_1367 = CDR(BgL_protoz00_4);
								{	/* Module/pragma.scm 63 */
									obj_t BgL_pragz00_1375;

									{	/* Module/pragma.scm 63 */
										bool_t BgL_test1856z00_1994;

										{	/* Module/pragma.scm 63 */
											bool_t BgL_res1731z00_1746;

											BgL_res1731z00_1746 = EPAIRP(BgL_protoz00_4);
											BgL_test1856z00_1994 = BgL_res1731z00_1746;
										}
										if (BgL_test1856z00_1994)
											{	/* Module/pragma.scm 64 */
												obj_t BgL_arg1252z00_1377;
												obj_t BgL_arg1253z00_1378;

												{	/* Module/pragma.scm 64 */
													obj_t BgL_list1254z00_1379;

													{	/* Module/pragma.scm 64 */
														obj_t BgL_arg1256z00_1380;

														{	/* Module/pragma.scm 64 */
															obj_t BgL_arg1258z00_1381;

															BgL_arg1258z00_1381 =
																MAKE_YOUNG_PAIR(BgL_clausez00_6, BNIL);
															BgL_arg1256z00_1380 =
																MAKE_YOUNG_PAIR(BgL_propz00_1367,
																BgL_arg1258z00_1381);
														}
														BgL_list1254z00_1379 =
															MAKE_YOUNG_PAIR(BgL_modulez00_5,
															BgL_arg1256z00_1380);
													}
													BgL_arg1252z00_1377 = BgL_list1254z00_1379;
												}
												BgL_arg1253z00_1378 = CER(((obj_t) BgL_protoz00_4));
												{	/* Module/pragma.scm 64 */
													obj_t BgL_res1733z00_1749;

													BgL_res1733z00_1749 =
														MAKE_YOUNG_EPAIR(BgL_idz00_1366,
														BgL_arg1252z00_1377, BgL_arg1253z00_1378);
													BgL_pragz00_1375 = BgL_res1733z00_1749;
												}
											}
										else
											{	/* Module/pragma.scm 65 */
												obj_t BgL_list1259z00_1382;

												{	/* Module/pragma.scm 65 */
													obj_t BgL_arg1263z00_1383;

													{	/* Module/pragma.scm 65 */
														obj_t BgL_arg1268z00_1384;

														{	/* Module/pragma.scm 65 */
															obj_t BgL_arg1270z00_1385;

															BgL_arg1270z00_1385 =
																MAKE_YOUNG_PAIR(BgL_clausez00_6, BNIL);
															BgL_arg1268z00_1384 =
																MAKE_YOUNG_PAIR(BgL_propz00_1367,
																BgL_arg1270z00_1385);
														}
														BgL_arg1263z00_1383 =
															MAKE_YOUNG_PAIR(BgL_modulez00_5,
															BgL_arg1268z00_1384);
													}
													BgL_list1259z00_1382 =
														MAKE_YOUNG_PAIR(BgL_idz00_1366,
														BgL_arg1263z00_1383);
												}
												BgL_pragz00_1375 = BgL_list1259z00_1382;
											}
									}
									return (BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00 =
										MAKE_YOUNG_PAIR(BgL_pragz00_1375,
											BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00), BUNSPEC);
								}
							}
						else
							{	/* Module/pragma.scm 60 */
							BgL_tagzd2110zd2_1369:
								{	/* Module/pragma.scm 68 */
									obj_t BgL_list1271z00_1386;

									BgL_list1271z00_1386 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzd2zztools_errorz00
										(BGl_string1793z00zzmodule_pragmaz00,
										BGl_string1794z00zzmodule_pragmaz00, BgL_clausez00_6,
										BgL_list1271z00_1386);
								}
							}
					}
				else
					{	/* Module/pragma.scm 60 */
						goto BgL_tagzd2110zd2_1369;
					}
			}
		}

	}



/* pragma-finalizer */
	BGL_EXPORTED_DEF obj_t BGl_pragmazd2finaliza7erz75zzmodule_pragmaz00()
	{
		{	/* Module/pragma.scm 78 */
			{
				obj_t BgL_l1224z00_1388;

				BgL_l1224z00_1388 = BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00;
			BgL_zc3z04anonymousza31272ze3z87_1389:
				if (PAIRP(BgL_l1224z00_1388))
					{	/* Module/pragma.scm 79 */
						{	/* Module/pragma.scm 80 */
							obj_t BgL_pragmaz00_1391;

							BgL_pragmaz00_1391 = CAR(BgL_l1224z00_1388);
							{
								obj_t BgL_idz00_1392;
								obj_t BgL_modulez00_1393;
								obj_t BgL_propza2za2_1394;
								obj_t BgL_clausez00_1395;

								if (PAIRP(BgL_pragmaz00_1391))
									{	/* Module/pragma.scm 80 */
										obj_t BgL_cdrzd2133zd2_1400;

										BgL_cdrzd2133zd2_1400 = CDR(BgL_pragmaz00_1391);
										if (PAIRP(BgL_cdrzd2133zd2_1400))
											{	/* Module/pragma.scm 80 */
												obj_t BgL_cdrzd2139zd2_1402;

												BgL_cdrzd2139zd2_1402 = CDR(BgL_cdrzd2133zd2_1400);
												if (PAIRP(BgL_cdrzd2139zd2_1402))
													{	/* Module/pragma.scm 80 */
														obj_t BgL_cdrzd2144zd2_1404;

														BgL_cdrzd2144zd2_1404 = CDR(BgL_cdrzd2139zd2_1402);
														if (PAIRP(BgL_cdrzd2144zd2_1404))
															{	/* Module/pragma.scm 80 */
																if (NULLP(CDR(BgL_cdrzd2144zd2_1404)))
																	{	/* Module/pragma.scm 80 */
																		BgL_idz00_1392 = CAR(BgL_pragmaz00_1391);
																		BgL_modulez00_1393 =
																			CAR(BgL_cdrzd2133zd2_1400);
																		BgL_propza2za2_1394 =
																			CAR(BgL_cdrzd2139zd2_1402);
																		BgL_clausez00_1395 =
																			CAR(BgL_cdrzd2144zd2_1404);
																		{	/* Module/pragma.scm 82 */
																			obj_t BgL_globalz00_1413;

																			{	/* Module/pragma.scm 82 */
																				obj_t BgL_globalz00_1420;

																				BgL_globalz00_1420 =
																					BGl_findzd2globalzf2modulez20zzast_envz00
																					(BgL_idz00_1392, BgL_modulez00_1393);
																				if (BGl_isazf3zf3zz__objectz00
																					(BgL_globalz00_1420,
																						BGl_globalz00zzast_varz00))
																					{	/* Module/pragma.scm 83 */
																						BgL_globalz00_1413 =
																							BgL_globalz00_1420;
																					}
																				else
																					{	/* Module/pragma.scm 83 */
																						BgL_globalz00_1413 =
																							BGl_findzd2globalzf2modulez20zzast_envz00
																							(BgL_idz00_1392,
																							CNST_TABLE_REF(((long) 1)));
																			}}
																			if (BGl_isazf3zf3zz__objectz00
																				(BgL_globalz00_1413,
																					BGl_globalz00zzast_varz00))
																				{	/* Module/pragma.scm 86 */
																					BBOOL
																						(BGl_setzd2pragmazd2propertiesz12z12zzmodule_pragmaz00
																						(((BgL_globalz00_bglt)
																								BgL_globalz00_1413),
																							BgL_propza2za2_1394,
																							BgL_clausez00_1395));
																				}
																			else
																				{	/* Module/pragma.scm 86 */
																					if (
																						(BgL_modulez00_1393 ==
																							BGl_za2moduleza2z00zzmodule_modulez00))
																						{	/* Module/pragma.scm 89 */
																							obj_t BgL_arg1290z00_1416;
																							obj_t BgL_arg1291z00_1417;

																							BgL_arg1290z00_1416 =
																								BGl_findzd2locationzd2zztools_locationz00
																								(BgL_pragmaz00_1391);
																							{	/* Module/pragma.scm 92 */
																								obj_t BgL_arg1292z00_1418;

																								{	/* Module/pragma.scm 92 */
																									obj_t BgL_arg1295z00_1419;

																									BgL_arg1295z00_1419 =
																										MAKE_YOUNG_PAIR
																										(BgL_modulez00_1393, BNIL);
																									BgL_arg1292z00_1418 =
																										MAKE_YOUNG_PAIR
																										(BgL_idz00_1392,
																										BgL_arg1295z00_1419);
																								}
																								BgL_arg1291z00_1417 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 2)),
																									BgL_arg1292z00_1418);
																							}
																							BGl_userzd2warningzf2locationz20zztools_errorz00
																								(BgL_arg1290z00_1416,
																								BGl_string1793z00zzmodule_pragmaz00,
																								BGl_string1795z00zzmodule_pragmaz00,
																								BgL_arg1291z00_1417);
																						}
																					else
																						{	/* Module/pragma.scm 87 */
																							BFALSE;
																						}
																				}
																		}
																	}
																else
																	{	/* Module/pragma.scm 80 */
																	BgL_tagzd2122zd2_1397:
																		BGl_internalzd2errorzd2zztools_errorz00
																			(BGl_string1796z00zzmodule_pragmaz00,
																			BGl_string1797z00zzmodule_pragmaz00,
																			BgL_pragmaz00_1391);
																	}
															}
														else
															{	/* Module/pragma.scm 80 */
																goto BgL_tagzd2122zd2_1397;
															}
													}
												else
													{	/* Module/pragma.scm 80 */
														goto BgL_tagzd2122zd2_1397;
													}
											}
										else
											{	/* Module/pragma.scm 80 */
												goto BgL_tagzd2122zd2_1397;
											}
									}
								else
									{	/* Module/pragma.scm 80 */
										goto BgL_tagzd2122zd2_1397;
									}
							}
						}
						{
							obj_t BgL_l1224z00_2050;

							BgL_l1224z00_2050 = CDR(BgL_l1224z00_1388);
							BgL_l1224z00_1388 = BgL_l1224z00_2050;
							goto BgL_zc3z04anonymousza31272ze3z87_1389;
						}
					}
				else
					{	/* Module/pragma.scm 79 */
						((bool_t) 1);
					}
			}
			BGl_za2pragmazd2listza2zd2zzmodule_pragmaz00 = BNIL;
			return CNST_TABLE_REF(((long) 3));
		}

	}



/* &pragma-finalizer */
	obj_t BGl_z62pragmazd2finaliza7erz17zzmodule_pragmaz00(obj_t BgL_envz00_1894)
	{
		{	/* Module/pragma.scm 78 */
			return BGl_pragmazd2finaliza7erz75zzmodule_pragmaz00();
		}

	}



/* set-pragma-properties! */
	bool_t
		BGl_setzd2pragmazd2propertiesz12z12zzmodule_pragmaz00(BgL_globalz00_bglt
		BgL_globalz00_7, obj_t BgL_propza2za2_8, obj_t BgL_clausez00_9)
	{
		{	/* Module/pragma.scm 105 */
			{
				obj_t BgL_l1226z00_1425;

				BgL_l1226z00_1425 = BgL_propza2za2_8;
			BgL_zc3z04anonymousza31298ze3z87_1426:
				if (PAIRP(BgL_l1226z00_1425))
					{	/* Module/pragma.scm 106 */
						BGl_setzd2pragmazd2propertyz12z12zzmodule_pragmaz00(BgL_globalz00_7,
							CAR(BgL_l1226z00_1425), BgL_clausez00_9);
						{
							obj_t BgL_l1226z00_2058;

							BgL_l1226z00_2058 = CDR(BgL_l1226z00_1425);
							BgL_l1226z00_1425 = BgL_l1226z00_2058;
							goto BgL_zc3z04anonymousza31298ze3z87_1426;
						}
					}
				else
					{	/* Module/pragma.scm 106 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* set-pragma-property! */
	obj_t BGl_setzd2pragmazd2propertyz12z12zzmodule_pragmaz00(BgL_globalz00_bglt
		BgL_globalz00_10, obj_t BgL_propz00_11, obj_t BgL_clausez00_12)
	{
		{	/* Module/pragma.scm 113 */
			{
				obj_t BgL_pz00_1567;
				BgL_globalz00_bglt BgL_gz00_1568;

				{
					obj_t BgL_keyz00_1433;
					obj_t BgL_valz00_1434;

					if (SYMBOLP(BgL_propz00_11))
						{	/* Module/pragma.scm 120 */
							if ((BgL_propz00_11 == CNST_TABLE_REF(((long) 4))))
								{	/* Module/pragma.scm 125 */
									BgL_valuez00_bglt BgL_valz00_1445;

									BgL_valz00_1445 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_globalz00_10)))->
										BgL_valuez00);
									{	/* Module/pragma.scm 126 */
										bool_t BgL_test1869z00_2067;

										{	/* Module/pragma.scm 126 */
											bool_t BgL_res1747z00_1779;

											BgL_res1747z00_1779 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_valz00_1445), BGl_funz00zzast_varz00);
											BgL_test1869z00_2067 = BgL_res1747z00_1779;
										}
										if (BgL_test1869z00_2067)
											{	/* Module/pragma.scm 126 */
												return
													((((BgL_funz00_bglt) COBJECT(
																((BgL_funz00_bglt) BgL_valz00_1445)))->
														BgL_sidezd2effectzd2) = ((obj_t) BFALSE), BUNSPEC);
											}
										else
											{	/* Module/pragma.scm 126 */
												BgL_pz00_1567 = BGl_string1801z00zzmodule_pragmaz00;
												BgL_gz00_1568 = BgL_globalz00_10;
											BgL_zc3z04anonymousza31543ze3z87_1569:
												if (CBOOL
													(BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00))
													{	/* Module/pragma.scm 115 */
														return BFALSE;
													}
												else
													{	/* Module/pragma.scm 116 */
														obj_t BgL_arg1552z00_1570;
														obj_t BgL_arg1558z00_1571;

														BgL_arg1552z00_1570 =
															string_append_3
															(BGl_string1798z00zzmodule_pragmaz00,
															BgL_pz00_1567,
															BGl_string1799z00zzmodule_pragmaz00);
														BgL_arg1558z00_1571 =
															BGl_shapez00zztools_shapez00(((obj_t)
																BgL_gz00_1568));
														{	/* Module/pragma.scm 116 */
															obj_t BgL_list1559z00_1572;

															BgL_list1559z00_1572 =
																MAKE_YOUNG_PAIR(BNIL, BNIL);
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BgL_arg1552z00_1570,
																BGl_string1800z00zzmodule_pragmaz00,
																BgL_arg1558z00_1571, BgL_list1559z00_1572);
														}
													}
											}
									}
								}
							else
								{	/* Module/pragma.scm 122 */
									if ((BgL_propz00_11 == CNST_TABLE_REF(((long) 5))))
										{	/* Module/pragma.scm 131 */
											BgL_valuez00_bglt BgL_valz00_1448;

											BgL_valz00_1448 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_globalz00_10)))->
												BgL_valuez00);
											{	/* Module/pragma.scm 132 */
												bool_t BgL_test1872z00_2084;

												{	/* Module/pragma.scm 132 */
													bool_t BgL_res1749z00_1784;

													BgL_res1749z00_1784 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_valz00_1448), BGl_funz00zzast_varz00);
													BgL_test1872z00_2084 = BgL_res1749z00_1784;
												}
												if (BgL_test1872z00_2084)
													{	/* Module/pragma.scm 132 */
														return
															((((BgL_funz00_bglt) COBJECT(
																		((BgL_funz00_bglt) BgL_valz00_1448)))->
																BgL_topzf3zf3) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
													}
												else
													{
														BgL_globalz00_bglt BgL_gz00_2090;
														obj_t BgL_pz00_2089;

														BgL_pz00_2089 = BGl_string1802z00zzmodule_pragmaz00;
														BgL_gz00_2090 = BgL_globalz00_10;
														BgL_gz00_1568 = BgL_gz00_2090;
														BgL_pz00_1567 = BgL_pz00_2089;
														goto BgL_zc3z04anonymousza31543ze3z87_1569;
													}
											}
										}
									else
										{	/* Module/pragma.scm 122 */
											if ((BgL_propz00_11 == CNST_TABLE_REF(((long) 6))))
												{	/* Module/pragma.scm 138 */
													BgL_valuez00_bglt BgL_valz00_1451;

													BgL_valz00_1451 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_globalz00_10)))->
														BgL_valuez00);
													{	/* Module/pragma.scm 139 */
														bool_t BgL_test1874z00_2096;

														{	/* Module/pragma.scm 139 */
															bool_t BgL_res1751z00_1790;

															BgL_res1751z00_1790 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_valz00_1451),
																BGl_funz00zzast_varz00);
															BgL_test1874z00_2096 = BgL_res1751z00_1790;
														}
														if (BgL_test1874z00_2096)
															{	/* Module/pragma.scm 141 */
																obj_t BgL_arg1311z00_1453;

																{	/* Module/pragma.scm 141 */
																	obj_t BgL_arg1312z00_1454;

																	BgL_arg1312z00_1454 =
																		(((BgL_sfunz00_bglt) COBJECT(
																				((BgL_sfunz00_bglt) BgL_valz00_1451)))->
																		BgL_propertyz00);
																	BgL_arg1311z00_1453 =
																		MAKE_YOUNG_PAIR(BgL_propz00_11,
																		BgL_arg1312z00_1454);
																}
																return
																	((((BgL_sfunz00_bglt) COBJECT(
																				((BgL_sfunz00_bglt) BgL_valz00_1451)))->
																		BgL_propertyz00) =
																	((obj_t) BgL_arg1311z00_1453), BUNSPEC);
															}
														else
															{
																BgL_globalz00_bglt BgL_gz00_2105;
																obj_t BgL_pz00_2104;

																BgL_pz00_2104 =
																	BGl_string1803z00zzmodule_pragmaz00;
																BgL_gz00_2105 = BgL_globalz00_10;
																BgL_gz00_1568 = BgL_gz00_2105;
																BgL_pz00_1567 = BgL_pz00_2104;
																goto BgL_zc3z04anonymousza31543ze3z87_1569;
															}
													}
												}
											else
												{	/* Module/pragma.scm 122 */
													if ((BgL_propz00_11 == CNST_TABLE_REF(((long) 7))))
														{	/* Module/pragma.scm 145 */
															BgL_valuez00_bglt BgL_valz00_1456;

															BgL_valz00_1456 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			BgL_globalz00_10)))->BgL_valuez00);
															{	/* Module/pragma.scm 146 */
																bool_t BgL_test1876z00_2111;

																{	/* Module/pragma.scm 146 */
																	bool_t BgL_res1753z00_1796;

																	BgL_res1753z00_1796 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_valz00_1456),
																		BGl_sfunz00zzast_varz00);
																	BgL_test1876z00_2111 = BgL_res1753z00_1796;
																}
																if (BgL_test1876z00_2111)
																	{	/* Module/pragma.scm 148 */
																		obj_t BgL_arg1315z00_1458;

																		{	/* Module/pragma.scm 148 */
																			obj_t BgL_arg1316z00_1459;

																			BgL_arg1316z00_1459 =
																				(((BgL_sfunz00_bglt) COBJECT(
																						((BgL_sfunz00_bglt)
																							BgL_valz00_1456)))->
																				BgL_propertyz00);
																			BgL_arg1315z00_1458 =
																				MAKE_YOUNG_PAIR(BgL_propz00_11,
																				BgL_arg1316z00_1459);
																		}
																		return
																			((((BgL_sfunz00_bglt) COBJECT(
																						((BgL_sfunz00_bglt)
																							BgL_valz00_1456)))->
																				BgL_propertyz00) =
																			((obj_t) BgL_arg1315z00_1458), BUNSPEC);
																	}
																else
																	{
																		BgL_globalz00_bglt BgL_gz00_2120;
																		obj_t BgL_pz00_2119;

																		BgL_pz00_2119 =
																			BGl_string1804z00zzmodule_pragmaz00;
																		BgL_gz00_2120 = BgL_globalz00_10;
																		BgL_gz00_1568 = BgL_gz00_2120;
																		BgL_pz00_1567 = BgL_pz00_2119;
																		goto BgL_zc3z04anonymousza31543ze3z87_1569;
																	}
															}
														}
													else
														{	/* Module/pragma.scm 122 */
															if (
																(BgL_propz00_11 == CNST_TABLE_REF(((long) 8))))
																{	/* Module/pragma.scm 150 */
																	BgL_valuez00_bglt BgL_valz00_1461;

																	BgL_valz00_1461 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					BgL_globalz00_10)))->BgL_valuez00);
																	{	/* Module/pragma.scm 151 */
																		bool_t BgL_test1878z00_2126;

																		{	/* Module/pragma.scm 151 */
																			bool_t BgL_res1755z00_1802;

																			BgL_res1755z00_1802 =
																				BGl_isazf3zf3zz__objectz00(
																				((obj_t) BgL_valz00_1461),
																				BGl_sfunz00zzast_varz00);
																			BgL_test1878z00_2126 =
																				BgL_res1755z00_1802;
																		}
																		if (BgL_test1878z00_2126)
																			{	/* Module/pragma.scm 153 */
																				obj_t BgL_arg1319z00_1463;

																				{	/* Module/pragma.scm 153 */
																					obj_t BgL_arg1322z00_1464;

																					BgL_arg1322z00_1464 =
																						(((BgL_sfunz00_bglt) COBJECT(
																								((BgL_sfunz00_bglt)
																									BgL_valz00_1461)))->
																						BgL_propertyz00);
																					BgL_arg1319z00_1463 =
																						MAKE_YOUNG_PAIR(BgL_propz00_11,
																						BgL_arg1322z00_1464);
																				}
																				return
																					((((BgL_sfunz00_bglt) COBJECT(
																								((BgL_sfunz00_bglt)
																									BgL_valz00_1461)))->
																						BgL_propertyz00) =
																					((obj_t) BgL_arg1319z00_1463),
																					BUNSPEC);
																			}
																		else
																			{
																				BgL_globalz00_bglt BgL_gz00_2135;
																				obj_t BgL_pz00_2134;

																				BgL_pz00_2134 =
																					BGl_string1805z00zzmodule_pragmaz00;
																				BgL_gz00_2135 = BgL_globalz00_10;
																				BgL_gz00_1568 = BgL_gz00_2135;
																				BgL_pz00_1567 = BgL_pz00_2134;
																				goto
																					BgL_zc3z04anonymousza31543ze3z87_1569;
																			}
																	}
																}
															else
																{	/* Module/pragma.scm 122 */
																	if (
																		(BgL_propz00_11 ==
																			CNST_TABLE_REF(((long) 9))))
																		{	/* Module/pragma.scm 155 */
																			BgL_valuez00_bglt BgL_valz00_1466;

																			BgL_valz00_1466 =
																				(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							BgL_globalz00_10)))->
																				BgL_valuez00);
																			{	/* Module/pragma.scm 156 */
																				bool_t BgL_test1880z00_2141;

																				{	/* Module/pragma.scm 156 */
																					bool_t BgL_res1757z00_1808;

																					BgL_res1757z00_1808 =
																						BGl_isazf3zf3zz__objectz00(
																						((obj_t) BgL_valz00_1466),
																						BGl_cfunz00zzast_varz00);
																					BgL_test1880z00_2141 =
																						BgL_res1757z00_1808;
																				}
																				if (BgL_test1880z00_2141)
																					{	/* Module/pragma.scm 158 */
																						obj_t BgL_arg1325z00_1468;

																						{	/* Module/pragma.scm 158 */
																							obj_t BgL_arg1326z00_1469;

																							BgL_arg1326z00_1469 =
																								(((BgL_globalz00_bglt)
																									COBJECT(BgL_globalz00_10))->
																								BgL_pragmaz00);
																							BgL_arg1325z00_1468 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 9)),
																								BgL_arg1326z00_1469);
																						}
																						return
																							((((BgL_globalz00_bglt)
																									COBJECT(BgL_globalz00_10))->
																								BgL_pragmaz00) =
																							((obj_t) BgL_arg1325z00_1468),
																							BUNSPEC);
																					}
																				else
																					{	/* Module/pragma.scm 156 */
																						return BFALSE;
																					}
																			}
																		}
																	else
																		{	/* Module/pragma.scm 122 */
																			if (
																				(BgL_propz00_11 ==
																					CNST_TABLE_REF(((long) 10))))
																				{	/* Module/pragma.scm 160 */
																					BgL_valuez00_bglt BgL_valz00_1471;

																					BgL_valz00_1471 =
																						(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									BgL_globalz00_10)))->
																						BgL_valuez00);
																					{	/* Module/pragma.scm 161 */
																						bool_t BgL_test1882z00_2153;

																						{	/* Module/pragma.scm 161 */
																							bool_t BgL_res1759z00_1814;

																							BgL_res1759z00_1814 =
																								BGl_isazf3zf3zz__objectz00(
																								((obj_t) BgL_valz00_1471),
																								BGl_cfunz00zzast_varz00);
																							BgL_test1882z00_2153 =
																								BgL_res1759z00_1814;
																						}
																						if (BgL_test1882z00_2153)
																							{	/* Module/pragma.scm 164 */
																								obj_t BgL_arg1329z00_1473;

																								{	/* Module/pragma.scm 164 */
																									obj_t BgL_arg1330z00_1474;

																									BgL_arg1330z00_1474 =
																										(((BgL_globalz00_bglt)
																											COBJECT
																											(BgL_globalz00_10))->
																										BgL_pragmaz00);
																									BgL_arg1329z00_1473 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												10)),
																										BgL_arg1330z00_1474);
																								}
																								return
																									((((BgL_globalz00_bglt)
																											COBJECT
																											(BgL_globalz00_10))->
																										BgL_pragmaz00) =
																									((obj_t) BgL_arg1329z00_1473),
																									BUNSPEC);
																							}
																						else
																							{	/* Module/pragma.scm 161 */
																								return BFALSE;
																							}
																					}
																				}
																			else
																				{	/* Module/pragma.scm 122 */
																					if (
																						(BgL_propz00_11 ==
																							CNST_TABLE_REF(((long) 11))))
																						{	/* Module/pragma.scm 166 */
																							BgL_valuez00_bglt BgL_valz00_1476;

																							BgL_valz00_1476 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt)
																											BgL_globalz00_10)))->
																								BgL_valuez00);
																							{	/* Module/pragma.scm 167 */
																								bool_t BgL_test1884z00_2165;

																								{	/* Module/pragma.scm 167 */
																									bool_t BgL_test1885z00_2166;

																									{	/* Module/pragma.scm 167 */
																										bool_t BgL_res1761z00_1820;

																										BgL_res1761z00_1820 =
																											BGl_isazf3zf3zz__objectz00
																											(((obj_t)
																												BgL_valz00_1476),
																											BGl_sfunz00zzast_varz00);
																										BgL_test1885z00_2166 =
																											BgL_res1761z00_1820;
																									}
																									if (BgL_test1885z00_2166)
																										{	/* Module/pragma.scm 167 */
																											BgL_test1884z00_2165 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Module/pragma.scm 167 */
																											bool_t
																												BgL_res1762z00_1821;
																											BgL_res1762z00_1821 =
																												BGl_isazf3zf3zz__objectz00
																												(((obj_t)
																													BgL_valz00_1476),
																												BGl_cfunz00zzast_varz00);
																											BgL_test1884z00_2165 =
																												BgL_res1762z00_1821;
																										}
																								}
																								if (BgL_test1884z00_2165)
																									{	/* Module/pragma.scm 170 */
																										obj_t BgL_arg1334z00_1479;

																										{	/* Module/pragma.scm 170 */
																											obj_t BgL_arg1335z00_1480;

																											BgL_arg1335z00_1480 =
																												(((BgL_globalz00_bglt)
																													COBJECT
																													(BgL_globalz00_10))->
																												BgL_pragmaz00);
																											BgL_arg1334z00_1479 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														11)),
																												BgL_arg1335z00_1480);
																										}
																										return
																											((((BgL_globalz00_bglt)
																													COBJECT
																													(BgL_globalz00_10))->
																												BgL_pragmaz00) =
																											((obj_t)
																												BgL_arg1334z00_1479),
																											BUNSPEC);
																									}
																								else
																									{	/* Module/pragma.scm 167 */
																										return BFALSE;
																									}
																							}
																						}
																					else
																						{	/* Module/pragma.scm 122 */
																							if (
																								(BgL_propz00_11 ==
																									CNST_TABLE_REF(((long) 12))))
																								{	/* Module/pragma.scm 173 */
																									BgL_valuez00_bglt
																										BgL_valz00_1483;
																									BgL_valz00_1483 =
																										(((BgL_variablez00_bglt)
																											COBJECT((
																													(BgL_variablez00_bglt)
																													BgL_globalz00_10)))->
																										BgL_valuez00);
																									{	/* Module/pragma.scm 174 */
																										bool_t BgL_test1887z00_2180;

																										{	/* Module/pragma.scm 174 */
																											bool_t
																												BgL_test1888z00_2181;
																											{	/* Module/pragma.scm 174 */
																												bool_t
																													BgL_res1764z00_1827;
																												BgL_res1764z00_1827 =
																													BGl_isazf3zf3zz__objectz00
																													(((obj_t)
																														BgL_valz00_1483),
																													BGl_sfunz00zzast_varz00);
																												BgL_test1888z00_2181 =
																													BgL_res1764z00_1827;
																											}
																											if (BgL_test1888z00_2181)
																												{	/* Module/pragma.scm 174 */
																													BgL_test1887z00_2180 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Module/pragma.scm 174 */
																													bool_t
																														BgL_res1765z00_1828;
																													BgL_res1765z00_1828 =
																														BGl_isazf3zf3zz__objectz00
																														(((obj_t)
																															BgL_valz00_1483),
																														BGl_cfunz00zzast_varz00);
																													BgL_test1887z00_2180 =
																														BgL_res1765z00_1828;
																												}
																										}
																										if (BgL_test1887z00_2180)
																											{	/* Module/pragma.scm 177 */
																												obj_t
																													BgL_arg1344z00_1486;
																												{	/* Module/pragma.scm 177 */
																													obj_t
																														BgL_arg1345z00_1487;
																													BgL_arg1345z00_1487 =
																														(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_10))->BgL_pragmaz00);
																													BgL_arg1344z00_1486 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 12)),
																														BgL_arg1345z00_1487);
																												}
																												return
																													((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_10))->BgL_pragmaz00) = ((obj_t) BgL_arg1344z00_1486), BUNSPEC);
																											}
																										else
																											{	/* Module/pragma.scm 174 */
																												return BFALSE;
																											}
																									}
																								}
																							else
																								{	/* Module/pragma.scm 122 */
																									if (
																										(BgL_propz00_11 ==
																											CNST_TABLE_REF(((long)
																													13))))
																										{	/* Module/pragma.scm 181 */
																											BgL_valuez00_bglt
																												BgL_valz00_1490;
																											BgL_valz00_1490 =
																												(((BgL_variablez00_bglt)
																													COBJECT((
																															(BgL_variablez00_bglt)
																															BgL_globalz00_10)))->
																												BgL_valuez00);
																											{	/* Module/pragma.scm 182 */
																												bool_t
																													BgL_test1890z00_2195;
																												{	/* Module/pragma.scm 182 */
																													bool_t
																														BgL_test1891z00_2196;
																													{	/* Module/pragma.scm 182 */
																														bool_t
																															BgL_res1767z00_1834;
																														BgL_res1767z00_1834
																															=
																															BGl_isazf3zf3zz__objectz00
																															(((obj_t)
																																BgL_valz00_1490),
																															BGl_sfunz00zzast_varz00);
																														BgL_test1891z00_2196
																															=
																															BgL_res1767z00_1834;
																													}
																													if (BgL_test1891z00_2196)
																														{	/* Module/pragma.scm 182 */
																															BgL_test1890z00_2195
																																= ((bool_t) 1);
																														}
																													else
																														{	/* Module/pragma.scm 182 */
																															bool_t
																																BgL_res1768z00_1835;
																															BgL_res1768z00_1835
																																=
																																BGl_isazf3zf3zz__objectz00
																																(((obj_t)
																																	BgL_valz00_1490),
																																BGl_cfunz00zzast_varz00);
																															BgL_test1890z00_2195
																																=
																																BgL_res1768z00_1835;
																														}
																												}
																												if (BgL_test1890z00_2195)
																													{	/* Module/pragma.scm 185 */
																														obj_t
																															BgL_arg1357z00_1493;
																														{	/* Module/pragma.scm 185 */
																															obj_t
																																BgL_arg1360z00_1494;
																															BgL_arg1360z00_1494
																																=
																																(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_10))->BgL_pragmaz00);
																															BgL_arg1357z00_1493
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 13)),
																																BgL_arg1360z00_1494);
																														}
																														return
																															((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_10))->BgL_pragmaz00) = ((obj_t) BgL_arg1357z00_1493), BUNSPEC);
																													}
																												else
																													{	/* Module/pragma.scm 182 */
																														return BFALSE;
																													}
																											}
																										}
																									else
																										{	/* Module/pragma.scm 122 */
																											if (
																												(BgL_propz00_11 ==
																													CNST_TABLE_REF(((long)
																															14))))
																												{	/* Module/pragma.scm 188 */
																													BgL_valuez00_bglt
																														BgL_valz00_1497;
																													BgL_valz00_1497 =
																														(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_globalz00_10)))->BgL_valuez00);
																													{	/* Module/pragma.scm 189 */
																														bool_t
																															BgL_test1893z00_2210;
																														{	/* Module/pragma.scm 189 */
																															bool_t
																																BgL_test1894z00_2211;
																															{	/* Module/pragma.scm 189 */
																																bool_t
																																	BgL_res1770z00_1841;
																																BgL_res1770z00_1841
																																	=
																																	BGl_isazf3zf3zz__objectz00
																																	(((obj_t)
																																		BgL_valz00_1497),
																																	BGl_sfunz00zzast_varz00);
																																BgL_test1894z00_2211
																																	=
																																	BgL_res1770z00_1841;
																															}
																															if (BgL_test1894z00_2211)
																																{	/* Module/pragma.scm 189 */
																																	BgL_test1893z00_2210
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Module/pragma.scm 189 */
																																	bool_t
																																		BgL_res1771z00_1842;
																																	BgL_res1771z00_1842
																																		=
																																		BGl_isazf3zf3zz__objectz00
																																		(((obj_t)
																																			BgL_valz00_1497),
																																		BGl_cfunz00zzast_varz00);
																																	BgL_test1893z00_2210
																																		=
																																		BgL_res1771z00_1842;
																																}
																														}
																														if (BgL_test1893z00_2210)
																															{	/* Module/pragma.scm 189 */
																																return BFALSE;
																															}
																														else
																															{	/* Module/pragma.scm 192 */
																																obj_t
																																	BgL_arg1367z00_1500;
																																{	/* Module/pragma.scm 192 */
																																	obj_t
																																		BgL_arg1370z00_1501;
																																	BgL_arg1370z00_1501
																																		=
																																		(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_10))->BgL_pragmaz00);
																																	BgL_arg1367z00_1500
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				14)),
																																		BgL_arg1370z00_1501);
																																}
																																return
																																	((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_10))->BgL_pragmaz00) = ((obj_t) BgL_arg1367z00_1500), BUNSPEC);
																															}
																													}
																												}
																											else
																												{	/* Module/pragma.scm 194 */
																													obj_t
																														BgL_list1371z00_1503;
																													BgL_list1371z00_1503 =
																														MAKE_YOUNG_PAIR
																														(BNIL, BNIL);
																													return
																														BGl_userzd2errorzd2zztools_errorz00
																														(BGl_string1806z00zzmodule_pragmaz00,
																														BGl_string1807z00zzmodule_pragmaz00,
																														BgL_clausez00_12,
																														BgL_list1371z00_1503);
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
					else
						{	/* Module/pragma.scm 120 */
							if (PAIRP(BgL_propz00_11))
								{	/* Module/pragma.scm 120 */
									obj_t BgL_carzd2160zd2_1440;

									BgL_carzd2160zd2_1440 = CAR(BgL_propz00_11);
									if (SYMBOLP(BgL_carzd2160zd2_1440))
										{	/* Module/pragma.scm 120 */
											BgL_keyz00_1433 = BgL_carzd2160zd2_1440;
											BgL_valz00_1434 = CDR(BgL_propz00_11);
											if ((BgL_keyz00_1433 == CNST_TABLE_REF(((long) 15))))
												{	/* Module/pragma.scm 199 */
													bool_t BgL_test1898z00_2230;

													if (PAIRP(BgL_valz00_1434))
														{	/* Module/pragma.scm 199 */
															obj_t BgL_tmpz00_2233;

															BgL_tmpz00_2233 = CAR(BgL_valz00_1434);
															BgL_test1898z00_2230 = SYMBOLP(BgL_tmpz00_2233);
														}
													else
														{	/* Module/pragma.scm 199 */
															BgL_test1898z00_2230 = ((bool_t) 0);
														}
													if (BgL_test1898z00_2230)
														{	/* Module/pragma.scm 201 */
															BgL_typez00_bglt BgL_typez00_1509;
															BgL_valuez00_bglt BgL_valuez00_1510;

															BgL_typez00_1509 =
																BGl_usezd2typez12zc0zztype_envz00(CAR
																(BgL_valz00_1434),
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_propz00_11));
															BgL_valuez00_1510 =
																(((BgL_variablez00_bglt)
																	COBJECT(((BgL_variablez00_bglt)
																			BgL_globalz00_10)))->BgL_valuez00);
															{	/* Module/pragma.scm 203 */
																bool_t BgL_test1900z00_2241;

																{	/* Module/pragma.scm 203 */
																	bool_t BgL_res1775z00_1852;

																	BgL_res1775z00_1852 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_valuez00_1510),
																		BGl_funz00zzast_varz00);
																	BgL_test1900z00_2241 = BgL_res1775z00_1852;
																}
																if (BgL_test1900z00_2241)
																	{	/* Module/pragma.scm 203 */
																		((((BgL_funz00_bglt) COBJECT(
																						((BgL_funz00_bglt)
																							BgL_valuez00_1510)))->
																				BgL_predicatezd2ofzd2) =
																			((obj_t) ((obj_t) BgL_typez00_1509)),
																			BUNSPEC);
																		BGl_removezd2varzd2fromz12z12zzast_removez00
																			(CNST_TABLE_REF(((long) 16)),
																			((BgL_variablez00_bglt)
																				BgL_globalz00_10));
																		return ((((BgL_funz00_bglt)
																					COBJECT(((BgL_funz00_bglt)
																							BgL_valuez00_1510)))->
																				BgL_sidezd2effectzd2) =
																			((obj_t) BFALSE), BUNSPEC);
																	}
																else
																	{
																		BgL_globalz00_bglt BgL_gz00_2253;
																		obj_t BgL_pz00_2252;

																		BgL_pz00_2252 =
																			BGl_string1808z00zzmodule_pragmaz00;
																		BgL_gz00_2253 = BgL_globalz00_10;
																		BgL_gz00_1568 = BgL_gz00_2253;
																		BgL_pz00_1567 = BgL_pz00_2252;
																		goto BgL_zc3z04anonymousza31543ze3z87_1569;
																	}
															}
														}
													else
														{	/* Module/pragma.scm 199 */
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BGl_string1806z00zzmodule_pragmaz00,
																BGl_string1809z00zzmodule_pragmaz00,
																BgL_propz00_11, BNIL);
														}
												}
											else
												{	/* Module/pragma.scm 196 */
													if ((BgL_keyz00_1433 == CNST_TABLE_REF(((long) 17))))
														{	/* Module/pragma.scm 214 */
															BgL_valuez00_bglt BgL_valuez00_1518;

															BgL_valuez00_1518 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			BgL_globalz00_10)))->BgL_valuez00);
															{	/* Module/pragma.scm 215 */
																bool_t BgL_test1902z00_2260;

																{	/* Module/pragma.scm 215 */
																	bool_t BgL_res1777z00_1858;

																	BgL_res1777z00_1858 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_valuez00_1518),
																		BGl_funz00zzast_varz00);
																	BgL_test1902z00_2260 = BgL_res1777z00_1858;
																}
																if (BgL_test1902z00_2260)
																	{	/* Module/pragma.scm 217 */
																		BgL_feffectz00_bglt BgL_arg1421z00_1520;

																		BgL_arg1421z00_1520 =
																			BGl_parsezd2effectzd2zzeffect_feffectz00
																			(BgL_propz00_11);
																		return ((((BgL_funz00_bglt)
																					COBJECT(((BgL_funz00_bglt)
																							BgL_valuez00_1518)))->
																				BgL_effectz00) =
																			((obj_t) ((obj_t) BgL_arg1421z00_1520)),
																			BUNSPEC);
																	}
																else
																	{
																		BgL_globalz00_bglt BgL_gz00_2268;
																		obj_t BgL_pz00_2267;

																		BgL_pz00_2267 =
																			BGl_string1810z00zzmodule_pragmaz00;
																		BgL_gz00_2268 = BgL_globalz00_10;
																		BgL_gz00_1568 = BgL_gz00_2268;
																		BgL_pz00_1567 = BgL_pz00_2267;
																		goto BgL_zc3z04anonymousza31543ze3z87_1569;
																	}
															}
														}
													else
														{	/* Module/pragma.scm 196 */
															if (
																(BgL_keyz00_1433 ==
																	CNST_TABLE_REF(((long) 18))))
																{	/* Module/pragma.scm 219 */
																	BgL_valuez00_bglt BgL_valuez00_1522;

																	BgL_valuez00_1522 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					BgL_globalz00_10)))->BgL_valuez00);
																	{	/* Module/pragma.scm 220 */
																		bool_t BgL_test1904z00_2274;

																		{	/* Module/pragma.scm 220 */
																			bool_t BgL_res1779z00_1863;

																			BgL_res1779z00_1863 =
																				BGl_isazf3zf3zz__objectz00(
																				((obj_t) BgL_valuez00_1522),
																				BGl_funz00zzast_varz00);
																			BgL_test1904z00_2274 =
																				BgL_res1779z00_1863;
																		}
																		if (BgL_test1904z00_2274)
																			{	/* Module/pragma.scm 220 */
																				return
																					((((BgL_funz00_bglt) COBJECT(
																								((BgL_funz00_bglt)
																									BgL_valuez00_1522)))->
																						BgL_stackzd2allocatorzd2) =
																					((obj_t) BgL_valz00_1434), BUNSPEC);
																			}
																		else
																			{
																				BgL_globalz00_bglt BgL_gz00_2280;
																				obj_t BgL_pz00_2279;

																				BgL_pz00_2279 =
																					BGl_string1811z00zzmodule_pragmaz00;
																				BgL_gz00_2280 = BgL_globalz00_10;
																				BgL_gz00_1568 = BgL_gz00_2280;
																				BgL_pz00_1567 = BgL_pz00_2279;
																				goto
																					BgL_zc3z04anonymousza31543ze3z87_1569;
																			}
																	}
																}
															else
																{	/* Module/pragma.scm 196 */
																	if (
																		(BgL_keyz00_1433 ==
																			CNST_TABLE_REF(((long) 19))))
																		{	/* Module/pragma.scm 225 */
																			BgL_valuez00_bglt BgL_valuez00_1525;

																			BgL_valuez00_1525 =
																				(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							BgL_globalz00_10)))->
																				BgL_valuez00);
																			{	/* Module/pragma.scm 226 */
																				bool_t BgL_test1906z00_2286;

																				{	/* Module/pragma.scm 226 */
																					bool_t BgL_res1781z00_1868;

																					BgL_res1781z00_1868 =
																						BGl_isazf3zf3zz__objectz00(
																						((obj_t) BgL_valuez00_1525),
																						BGl_funz00zzast_varz00);
																					BgL_test1906z00_2286 =
																						BgL_res1781z00_1868;
																				}
																				if (BgL_test1906z00_2286)
																					{	/* Module/pragma.scm 226 */
																						if (NULLP(BgL_valz00_1434))
																							{	/* Module/pragma.scm 230 */
																								return
																									((((BgL_funz00_bglt) COBJECT(
																												((BgL_funz00_bglt)
																													BgL_valuez00_1525)))->
																										BgL_argszd2noescapezd2) =
																									((obj_t)
																										CNST_TABLE_REF(((long)
																												20))), BUNSPEC);
																							}
																						else
																							{	/* Module/pragma.scm 230 */
																								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(CAR(((obj_t) BgL_valz00_1434))))
																									{
																										obj_t BgL_auxz00_2298;

																										{	/* Module/pragma.scm 233 */
																											obj_t BgL_arg1448z00_1531;

																											BgL_arg1448z00_1531 =
																												(((BgL_funz00_bglt)
																													COBJECT((
																															(BgL_funz00_bglt)
																															BgL_valuez00_1525)))->
																												BgL_argszd2noescapezd2);
																											BgL_auxz00_2298 =
																												MAKE_YOUNG_PAIR
																												(BgL_valz00_1434,
																												BgL_arg1448z00_1531);
																										}
																										return
																											((((BgL_funz00_bglt)
																													COBJECT((
																															(BgL_funz00_bglt)
																															BgL_valuez00_1525)))->
																												BgL_argszd2noescapezd2)
																											=
																											((obj_t) BgL_auxz00_2298),
																											BUNSPEC);
																									}
																								else
																									{	/* Module/pragma.scm 234 */
																										bool_t BgL_test1909z00_2304;

																										{	/* Module/pragma.scm 234 */
																											obj_t BgL_tmpz00_2305;

																											BgL_tmpz00_2305 =
																												CAR(
																												((obj_t)
																													BgL_valz00_1434));
																											BgL_test1909z00_2304 =
																												SYMBOLP
																												(BgL_tmpz00_2305);
																										}
																										if (BgL_test1909z00_2304)
																											{	/* Module/pragma.scm 235 */
																												bool_t
																													BgL_test1910z00_2309;
																												{	/* Module/pragma.scm 235 */
																													bool_t
																														BgL_res1784z00_1873;
																													BgL_res1784z00_1873 =
																														BGl_isazf3zf3zz__objectz00
																														(((obj_t)
																															BgL_valuez00_1525),
																														BGl_sfunz00zzast_varz00);
																													BgL_test1910z00_2309 =
																														BgL_res1784z00_1873;
																												}
																												if (BgL_test1910z00_2309)
																													{	/* Module/pragma.scm 237 */
																														obj_t
																															BgL_g1105z00_1535;
																														BgL_g1105z00_1535 =
																															(((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) BgL_valuez00_1525)))->BgL_argszd2namezd2);
																														{
																															long
																																BgL_iz00_1537;
																															obj_t
																																BgL_argsz00_1538;
																															BgL_iz00_1537 =
																																((long) 0);
																															BgL_argsz00_1538 =
																																BgL_g1105z00_1535;
																														BgL_zc3z04anonymousza31452ze3z87_1539:
																															if (NULLP
																																(BgL_argsz00_1538))
																																{	/* Module/pragma.scm 240 */
																																	return
																																		BGl_userzd2errorzd2zztools_errorz00
																																		(BGl_string1806z00zzmodule_pragmaz00,
																																		BGl_string1812z00zzmodule_pragmaz00,
																																		BgL_propz00_11,
																																		BNIL);
																																}
																															else
																																{	/* Module/pragma.scm 240 */
																																	if (
																																		(CAR(
																																				((obj_t)
																																					BgL_argsz00_1538))
																																			==
																																			CAR((
																																					(obj_t)
																																					BgL_valz00_1434))))
																																		{
																																			obj_t
																																				BgL_auxz00_2323;
																																			{	/* Module/pragma.scm 245 */
																																				obj_t
																																					BgL_arg1464z00_1545;
																																				BgL_arg1464z00_1545
																																					=
																																					(((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_valuez00_1525)))->BgL_argszd2noescapezd2);
																																				BgL_auxz00_2323
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BINT
																																					(BgL_iz00_1537),
																																					BgL_arg1464z00_1545);
																																			}
																																			return
																																				((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_valuez00_1525)))->BgL_argszd2noescapezd2) = ((obj_t) BgL_auxz00_2323), BUNSPEC);
																																		}
																																	else
																																		{	/* Module/pragma.scm 247 */
																																			long
																																				BgL_arg1465z00_1546;
																																			obj_t
																																				BgL_arg1474z00_1547;
																																			BgL_arg1465z00_1546
																																				=
																																				(BgL_iz00_1537
																																				+
																																				((long)
																																					1));
																																			BgL_arg1474z00_1547
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_argsz00_1538));
																																			{
																																				obj_t
																																					BgL_argsz00_2334;
																																				long
																																					BgL_iz00_2333;
																																				BgL_iz00_2333
																																					=
																																					BgL_arg1465z00_1546;
																																				BgL_argsz00_2334
																																					=
																																					BgL_arg1474z00_1547;
																																				BgL_argsz00_1538
																																					=
																																					BgL_argsz00_2334;
																																				BgL_iz00_1537
																																					=
																																					BgL_iz00_2333;
																																				goto
																																					BgL_zc3z04anonymousza31452ze3z87_1539;
																																			}
																																		}
																																}
																														}
																													}
																												else
																													{	/* Module/pragma.scm 235 */
																														return
																															BGl_userzd2errorzd2zztools_errorz00
																															(BGl_string1806z00zzmodule_pragmaz00,
																															BGl_string1813z00zzmodule_pragmaz00,
																															BgL_propz00_11,
																															BNIL);
																													}
																											}
																										else
																											{	/* Module/pragma.scm 234 */
																												if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(CAR(((obj_t) BgL_valz00_1434))))
																													{	/* Module/pragma.scm 248 */
																														if (
																															((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_valuez00_1525)))->BgL_argszd2noescapezd2) == BUNSPEC))
																															{
																																obj_t
																																	BgL_auxz00_2344;
																																{	/* Module/pragma.scm 251 */
																																	obj_t
																																		BgL_list1495z00_1556;
																																	BgL_list1495z00_1556
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_valz00_1434,
																																		BNIL);
																																	BgL_auxz00_2344
																																		=
																																		BgL_list1495z00_1556;
																																}
																																return
																																	((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_valuez00_1525)))->BgL_argszd2noescapezd2) = ((obj_t) BgL_auxz00_2344), BUNSPEC);
																															}
																														else
																															{
																																obj_t
																																	BgL_auxz00_2348;
																																{	/* Module/pragma.scm 253 */
																																	obj_t
																																		BgL_arg1497z00_1557;
																																	BgL_arg1497z00_1557
																																		=
																																		(((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_valuez00_1525)))->BgL_argszd2noescapezd2);
																																	BgL_auxz00_2348
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_valz00_1434,
																																		BgL_arg1497z00_1557);
																																}
																																return
																																	((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt) BgL_valuez00_1525)))->BgL_argszd2noescapezd2) = ((obj_t) BgL_auxz00_2348), BUNSPEC);
																															}
																													}
																												else
																													{	/* Module/pragma.scm 248 */
																														return
																															BGl_userzd2errorzd2zztools_errorz00
																															(BGl_string1806z00zzmodule_pragmaz00,
																															BGl_string1814z00zzmodule_pragmaz00,
																															BgL_propz00_11,
																															BNIL);
																													}
																											}
																									}
																							}
																					}
																				else
																					{
																						BgL_globalz00_bglt BgL_gz00_2356;
																						obj_t BgL_pz00_2355;

																						BgL_pz00_2355 =
																							BGl_string1815z00zzmodule_pragmaz00;
																						BgL_gz00_2356 = BgL_globalz00_10;
																						BgL_gz00_1568 = BgL_gz00_2356;
																						BgL_pz00_1567 = BgL_pz00_2355;
																						goto
																							BgL_zc3z04anonymousza31543ze3z87_1569;
																					}
																			}
																		}
																	else
																		{	/* Module/pragma.scm 255 */
																			obj_t BgL_list1537z00_1563;

																			BgL_list1537z00_1563 =
																				MAKE_YOUNG_PAIR(BNIL, BNIL);
																			return
																				BGl_userzd2errorzd2zztools_errorz00
																				(BGl_string1806z00zzmodule_pragmaz00,
																				BGl_string1807z00zzmodule_pragmaz00,
																				BgL_propz00_11, BgL_list1537z00_1563);
																		}
																}
														}
												}
										}
									else
										{	/* Module/pragma.scm 120 */
										BgL_tagzd2152zd2_1436:
											{	/* Module/pragma.scm 259 */
												obj_t BgL_arg1540z00_1564;

												if (PAIRP(BgL_propz00_11))
													{	/* Module/pragma.scm 259 */
														BgL_arg1540z00_1564 = BgL_propz00_11;
													}
												else
													{	/* Module/pragma.scm 259 */
														BgL_arg1540z00_1564 = BgL_clausez00_12;
													}
												{	/* Module/pragma.scm 257 */
													obj_t BgL_list1541z00_1565;

													BgL_list1541z00_1565 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string1806z00zzmodule_pragmaz00,
														BGl_string1807z00zzmodule_pragmaz00,
														BgL_arg1540z00_1564, BgL_list1541z00_1565);
												}
											}
										}
								}
							else
								{	/* Module/pragma.scm 120 */
									goto BgL_tagzd2152zd2_1436;
								}
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_pragmaz00()
	{
		{	/* Module/pragma.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_pragmaz00()
	{
		{	/* Module/pragma.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_pragmaz00()
	{
		{	/* Module/pragma.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_pragmaz00()
	{
		{	/* Module/pragma.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 428236983),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			BGl_modulezd2initializa7ationz75zzeffect_feffectz00(((long) 516374373),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1816z00zzmodule_pragmaz00));
		}

	}

#ifdef __cplusplus
}
#endif
