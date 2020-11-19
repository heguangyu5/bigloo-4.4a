/*===========================================================================*/
/*   (Object/method.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/method.scm) */
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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
		obj_t BgL_subclassesz00;
	}                *BgL_tclassz00_bglt;

	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
		bool_t BgL_typedzd2funcallzd2;
	}                 *BgL_backendz00_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzobject_methodz00();
	BGL_EXPORTED_DECL obj_t BGl_markzd2methodz12zc0zzobject_methodz00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static bool_t BGl_dssslzd2methodzf3z21zzobject_methodz00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzobject_methodz00();
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_z62markzd2methodz12za2zzobject_methodz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzobject_methodz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t
		BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00(obj_t,
		obj_t, bool_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2methodzd2nozd2dssslzd2bodyz00zzobject_methodz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_methodz00 = BUNSPEC;
	static obj_t BGl_z62localzd2iszd2methodzf3z91zzobject_methodz00(obj_t, obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_za2methodsza2z00zzobject_methodz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzobject_methodz00();
	static obj_t BGl_genericzd2initzd2zzobject_methodz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2methodzd2dssslzd2bodyzd2zzobject_methodz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_methodz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_methodz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_methodz00();
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_methodz00();
	static obj_t BGl_z62makezd2methodzd2dssslzd2bodyzb0zzobject_methodz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_localzd2iszd2methodzf3zf3zzobject_methodz00(BgL_localz00_bglt);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62makezd2methodzd2nozd2dssslzd2bodyz62zzobject_methodz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_pairzd2ze3listz31zzobject_methodz00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[13];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2methodzd2dssslzd2bodyzd2envz00zzobject_methodz00,
		BgL_bgl_za762makeza7d2method1810z00,
		BGl_z62makezd2methodzd2dssslzd2bodyzb0zzobject_methodz00, 0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string1800z00zzobject_methodz00,
		BgL_bgl_string1800za700za7za7o1811za7, "object_method", 13);
	      DEFINE_STRING(BGl_string1801z00zzobject_methodz00,
		BgL_bgl_string1801za700za7za7o1812za7,
		"(quote method-definition-error) generic-add-method! pragma::void module labels call-next-method let apply cons* find-super-class-method @ - next-method ",
		152);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_markzd2methodz12zd2envz12zzobject_methodz00,
		BgL_bgl_za762markza7d2method1813z00,
		BGl_z62markzd2methodz12za2zzobject_methodz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_errorzd2envzd2zz__errorz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2methodzd2nozd2dssslzd2bodyzd2envzd2zzobject_methodz00,
		BgL_bgl_za762makeza7d2method1814z00,
		BGl_z62makezd2methodzd2nozd2dssslzd2bodyz62zzobject_methodz00, 0L, BUNSPEC,
		5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2iszd2methodzf3zd2envz21zzobject_methodz00,
		BgL_bgl_za762localza7d2isza7d21815za7,
		BGl_z62localzd2iszd2methodzf3z91zzobject_methodz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1795z00zzobject_methodz00,
		BgL_bgl_string1795za700za7za7o1816za7, "\"); ", 4);
	      DEFINE_STRING(BGl_string1796z00zzobject_methodz00,
		BgL_bgl_string1796za700za7za7o1817za7, " ::", 3);
	      DEFINE_STRING(BGl_string1797z00zzobject_methodz00,
		BgL_bgl_string1797za700za7za7o1818za7,
		"bgl_init_module_debug_string( \"generic-add-method: ", 51);
	      DEFINE_STRING(BGl_string1798z00zzobject_methodz00,
		BgL_bgl_string1798za700za7za7o1819za7, "Can't find generic for method", 29);
	      DEFINE_STRING(BGl_string1799z00zzobject_methodz00,
		BgL_bgl_string1799za700za7za7o1820za7,
		"method has a non-class dispatching type arg", 43);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzobject_methodz00));
		     ADD_ROOT((void *) (&BGl_za2methodsza2z00zzobject_methodz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_methodz00(long
		BgL_checksumz00_1305, char *BgL_fromz00_1306)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_methodz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_methodz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_methodz00();
					BGl_libraryzd2moduleszd2initz00zzobject_methodz00();
					BGl_cnstzd2initzd2zzobject_methodz00();
					BGl_importedzd2moduleszd2initz00zzobject_methodz00();
					return BGl_toplevelzd2initzd2zzobject_methodz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_methodz00()
	{
		{	/* Object/method.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_method");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_method");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_method");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "object_method");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "object_method");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_method");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_method");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_method");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"object_method");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_methodz00()
	{
		{	/* Object/method.scm 15 */
			{	/* Object/method.scm 15 */
				obj_t BgL_cportz00_1292;

				{	/* Object/method.scm 15 */
					obj_t BgL_stringz00_1300;

					BgL_stringz00_1300 = BGl_string1801z00zzobject_methodz00;
					{	/* Object/method.scm 15 */
						obj_t BgL_startz00_1301;

						BgL_startz00_1301 = BINT(((long) 0));
						{	/* Object/method.scm 15 */
							obj_t BgL_endz00_1302;

							BgL_endz00_1302 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1300)));
							{	/* Object/method.scm 15 */

								BgL_cportz00_1292 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1300, BgL_startz00_1301, BgL_endz00_1302);
				}}}}
				{
					long BgL_iz00_1293;

					BgL_iz00_1293 = ((long) 12);
				BgL_loopz00_1294:
					if ((BgL_iz00_1293 == ((long) -1)))
						{	/* Object/method.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/method.scm 15 */
							{	/* Object/method.scm 15 */
								obj_t BgL_arg1808z00_1296;

								{	/* Object/method.scm 15 */

									{	/* Object/method.scm 15 */
										obj_t BgL_locationz00_1298;

										BgL_locationz00_1298 = BBOOL(((bool_t) 0));
										{	/* Object/method.scm 15 */

											BgL_arg1808z00_1296 =
												BGl_readz00zz__readerz00(BgL_cportz00_1292,
												BgL_locationz00_1298);
										}
									}
								}
								{	/* Object/method.scm 15 */
									int BgL_tmpz00_1333;

									BgL_tmpz00_1333 = (int) (BgL_iz00_1293);
									CNST_TABLE_SET(BgL_tmpz00_1333, BgL_arg1808z00_1296);
							}}
							{	/* Object/method.scm 15 */
								int BgL_auxz00_1299;

								BgL_auxz00_1299 = (int) ((BgL_iz00_1293 - ((long) 1)));
								{
									long BgL_iz00_1338;

									BgL_iz00_1338 = (long) (BgL_auxz00_1299);
									BgL_iz00_1293 = BgL_iz00_1338;
									goto BgL_loopz00_1294;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_methodz00()
	{
		{	/* Object/method.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzobject_methodz00()
	{
		{	/* Object/method.scm 15 */
			return (BGl_za2methodsza2z00zzobject_methodz00 = BNIL, BUNSPEC);
		}

	}



/* make-method-no-dsssl-body */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2methodzd2nozd2dssslzd2bodyz00zzobject_methodz00(obj_t
		BgL_identz00_3, obj_t BgL_argsz00_4, obj_t BgL_localsz00_5,
		obj_t BgL_bodyz00_6, obj_t BgL_srcz00_7)
	{
		{	/* Object/method.scm 37 */
			{	/* Object/method.scm 38 */
				obj_t BgL_idz00_756;

				BgL_idz00_756 =
					BGl_idzd2ofzd2idz00zzast_identz00(BgL_identz00_3,
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_7));
				{	/* Object/method.scm 38 */
					obj_t BgL_metz00_757;

					BgL_metz00_757 =
						BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0)));
					{	/* Object/method.scm 39 */
						long BgL_arityz00_758;

						BgL_arityz00_758 =
							BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_4);
						{	/* Object/method.scm 40 */
							obj_t BgL_argszd2idzd2_759;

							if (NULLP(BgL_localsz00_5))
								{	/* Object/method.scm 41 */
									BgL_argszd2idzd2_759 = BNIL;
								}
							else
								{	/* Object/method.scm 41 */
									obj_t BgL_head1164z00_858;

									{	/* Object/method.scm 41 */
										obj_t BgL_arg1347z00_870;

										BgL_arg1347z00_870 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt)
															CAR(((obj_t) BgL_localsz00_5))))))->BgL_idz00);
										{	/* Object/method.scm 41 */
											obj_t BgL_res1749z00_1135;

											BgL_res1749z00_1135 =
												MAKE_YOUNG_PAIR(BgL_arg1347z00_870, BNIL);
											BgL_head1164z00_858 = BgL_res1749z00_1135;
										}
									}
									{	/* Object/method.scm 41 */
										obj_t BgL_g1167z00_859;

										BgL_g1167z00_859 = CDR(((obj_t) BgL_localsz00_5));
										{
											obj_t BgL_l1162z00_861;
											obj_t BgL_tail1165z00_862;

											BgL_l1162z00_861 = BgL_g1167z00_859;
											BgL_tail1165z00_862 = BgL_head1164z00_858;
										BgL_zc3z04anonymousza31337ze3z87_863:
											if (NULLP(BgL_l1162z00_861))
												{	/* Object/method.scm 41 */
													BgL_argszd2idzd2_759 = BgL_head1164z00_858;
												}
											else
												{	/* Object/method.scm 41 */
													obj_t BgL_newtail1166z00_865;

													{	/* Object/method.scm 41 */
														obj_t BgL_arg1345z00_867;

														BgL_arg1345z00_867 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			CAR(
																				((obj_t) BgL_l1162z00_861))))))->
															BgL_idz00);
														{	/* Object/method.scm 41 */
															obj_t BgL_res1751z00_1140;

															BgL_res1751z00_1140 =
																MAKE_YOUNG_PAIR(BgL_arg1345z00_867, BNIL);
															BgL_newtail1166z00_865 = BgL_res1751z00_1140;
														}
													}
													SET_CDR(BgL_tail1165z00_862, BgL_newtail1166z00_865);
													{	/* Object/method.scm 41 */
														obj_t BgL_arg1344z00_866;

														BgL_arg1344z00_866 =
															CDR(((obj_t) BgL_l1162z00_861));
														{
															obj_t BgL_tail1165z00_1368;
															obj_t BgL_l1162z00_1367;

															BgL_l1162z00_1367 = BgL_arg1344z00_866;
															BgL_tail1165z00_1368 = BgL_newtail1166z00_865;
															BgL_tail1165z00_862 = BgL_tail1165z00_1368;
															BgL_l1162z00_861 = BgL_l1162z00_1367;
															goto BgL_zc3z04anonymousza31337ze3z87_863;
														}
													}
												}
										}
									}
								}
							{	/* Object/method.scm 41 */
								BgL_typez00_bglt BgL_typez00_760;

								BgL_typez00_760 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt)
													CAR(((obj_t) BgL_localsz00_5))))))->BgL_typez00);
								{	/* Object/method.scm 42 */
									obj_t BgL_mzd2idzd2_761;

									{	/* Object/method.scm 43 */
										obj_t BgL_arg1328z00_850;

										{	/* Object/method.scm 43 */
											obj_t BgL_arg1329z00_851;

											BgL_arg1329z00_851 =
												(((BgL_typez00_bglt) COBJECT(BgL_typez00_760))->
												BgL_idz00);
											{	/* Object/method.scm 43 */
												obj_t BgL_list1330z00_852;

												{	/* Object/method.scm 43 */
													obj_t BgL_arg1331z00_853;

													{	/* Object/method.scm 43 */
														obj_t BgL_arg1334z00_854;

														BgL_arg1334z00_854 =
															MAKE_YOUNG_PAIR(BgL_arg1329z00_851, BNIL);
														BgL_arg1331z00_853 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
															BgL_arg1334z00_854);
													}
													BgL_list1330z00_852 =
														MAKE_YOUNG_PAIR(BgL_idz00_756, BgL_arg1331z00_853);
												}
												BgL_arg1328z00_850 =
													BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
													(BgL_list1330z00_852);
										}}
										BgL_mzd2idzd2_761 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1328z00_850);
									}
									{	/* Object/method.scm 43 */

										{	/* Object/method.scm 45 */
											bool_t BgL_test1827z00_1381;

											{	/* Object/method.scm 45 */
												bool_t BgL_res1752z00_1146;

												BgL_res1752z00_1146 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_typez00_760),
													BGl_tclassz00zzobject_classz00);
												BgL_test1827z00_1381 = BgL_res1752z00_1146;
											}
											if (BgL_test1827z00_1381)
												{	/* Object/method.scm 48 */
													BgL_globalz00_bglt BgL_holderz00_763;

													{
														BgL_tclassz00_bglt BgL_auxz00_1384;

														{
															obj_t BgL_auxz00_1385;

															{	/* Object/method.scm 48 */
																BgL_objectz00_bglt BgL_tmpz00_1386;

																BgL_tmpz00_1386 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_typez00_760));
																BgL_auxz00_1385 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_1386);
															}
															BgL_auxz00_1384 =
																((BgL_tclassz00_bglt) BgL_auxz00_1385);
														}
														BgL_holderz00_763 =
															(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_1384))->
															BgL_holderz00);
													}
													{	/* Object/method.scm 48 */
														obj_t BgL_modulez00_764;

														BgL_modulez00_764 =
															(((BgL_globalz00_bglt)
																COBJECT(BgL_holderz00_763))->BgL_modulez00);
														{	/* Object/method.scm 49 */
															obj_t BgL_genericz00_765;

															BgL_genericz00_765 =
																BGl_findzd2globalzd2zzast_envz00(BgL_idz00_756,
																BNIL);
															{	/* Object/method.scm 50 */

																if (BGl_isazf3zf3zz__objectz00
																	(BgL_genericz00_765,
																		BGl_globalz00zzast_varz00))
																	{	/* Object/method.scm 55 */
																		obj_t BgL_bodyz00_767;

																		{	/* Object/method.scm 57 */
																			obj_t BgL_arg1290z00_821;

																			{	/* Object/method.scm 57 */
																				obj_t BgL_arg1291z00_822;
																				obj_t BgL_arg1292z00_823;

																				{	/* Object/method.scm 57 */
																					obj_t BgL_arg1295z00_824;

																					{	/* Object/method.scm 57 */
																						obj_t BgL_arg1296z00_825;

																						{	/* Object/method.scm 57 */
																							obj_t BgL_arg1297z00_826;

																							{	/* Object/method.scm 57 */
																								obj_t BgL_arg1298z00_827;

																								{	/* Object/method.scm 57 */
																									obj_t BgL_arg1299z00_828;

																									{	/* Object/method.scm 57 */
																										obj_t BgL_arg1300z00_829;
																										obj_t BgL_arg1301z00_830;

																										{	/* Object/method.scm 57 */
																											obj_t BgL_arg1303z00_831;

																											{	/* Object/method.scm 57 */
																												obj_t
																													BgL_arg1304z00_832;
																												{	/* Object/method.scm 57 */
																													obj_t
																														BgL_arg1306z00_833;
																													{	/* Object/method.scm 57 */
																														obj_t
																															BgL_arg1307z00_834;
																														{	/* Object/method.scm 57 */
																															obj_t
																																BgL_arg1308z00_835;
																															obj_t
																																BgL_arg1309z00_836;
																															BgL_arg1308z00_835
																																=
																																CAR(((obj_t)
																																	BgL_argszd2idzd2_759));
																															{	/* Object/method.scm 59 */
																																obj_t
																																	BgL_arg1310z00_837;
																																{	/* Object/method.scm 59 */
																																	obj_t
																																		BgL_arg1311z00_838;
																																	{	/* Object/method.scm 59 */
																																		obj_t
																																			BgL_arg1312z00_839;
																																		{	/* Object/method.scm 59 */
																																			obj_t
																																				BgL_arg1314z00_840;
																																			obj_t
																																				BgL_arg1315z00_841;
																																			BgL_arg1314z00_840
																																				=
																																				(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_holderz00_763)))->BgL_idz00);
																																			BgL_arg1315z00_841
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_modulez00_764,
																																				BNIL);
																																			BgL_arg1312z00_839
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1314z00_840,
																																				BgL_arg1315z00_841);
																																		}
																																		BgL_arg1311z00_838
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					2)),
																																			BgL_arg1312z00_839);
																																	}
																																	BgL_arg1310z00_837
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1311z00_838,
																																		BNIL);
																																}
																																BgL_arg1309z00_836
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_idz00_756,
																																	BgL_arg1310z00_837);
																															}
																															BgL_arg1307z00_834
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1308z00_835,
																																BgL_arg1309z00_836);
																														}
																														BgL_arg1306z00_833 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 3)),
																															BgL_arg1307z00_834);
																													}
																													BgL_arg1304z00_832 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1306z00_833,
																														BNIL);
																												}
																												BgL_arg1303z00_831 =
																													MAKE_YOUNG_PAIR
																													(BgL_metz00_757,
																													BgL_arg1304z00_832);
																											}
																											BgL_arg1300z00_829 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1303z00_831,
																												BNIL);
																										}
																										{	/* Object/method.scm 61 */
																											obj_t BgL_arg1316z00_842;

																											if (
																												(BgL_arityz00_758 >=
																													((long) 0)))
																												{	/* Object/method.scm 61 */
																													BgL_arg1316z00_842 =
																														MAKE_YOUNG_PAIR
																														(BgL_metz00_757,
																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																														(BgL_argszd2idzd2_759,
																															BNIL));
																												}
																											else
																												{	/* Object/method.scm 64 */
																													obj_t
																														BgL_arg1322z00_845;
																													{	/* Object/method.scm 64 */
																														obj_t
																															BgL_arg1324z00_846;
																														{	/* Object/method.scm 64 */
																															obj_t
																																BgL_arg1325z00_847;
																															{	/* Object/method.scm 64 */
																																obj_t
																																	BgL_arg1326z00_848;
																																BgL_arg1326z00_848
																																	=
																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_argszd2idzd2_759,
																																	BNIL);
																																BgL_arg1325z00_847
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 4)),
																																	BgL_arg1326z00_848);
																															}
																															BgL_arg1324z00_846
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1325z00_847,
																																BNIL);
																														}
																														BgL_arg1322z00_845 =
																															MAKE_YOUNG_PAIR
																															(BgL_metz00_757,
																															BgL_arg1324z00_846);
																													}
																													BgL_arg1316z00_842 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 5)),
																														BgL_arg1322z00_845);
																												}
																											BgL_arg1301z00_830 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1316z00_842,
																												BNIL);
																										}
																										BgL_arg1299z00_828 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1300z00_829,
																											BgL_arg1301z00_830);
																									}
																									BgL_arg1298z00_827 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long) 6)),
																										BgL_arg1299z00_828);
																								}
																								BgL_arg1297z00_826 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1298z00_827, BNIL);
																							}
																							BgL_arg1296z00_825 =
																								MAKE_YOUNG_PAIR(BNIL,
																								BgL_arg1297z00_826);
																						}
																						BgL_arg1295z00_824 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 7)),
																							BgL_arg1296z00_825);
																					}
																					BgL_arg1291z00_822 =
																						MAKE_YOUNG_PAIR(BgL_arg1295z00_824,
																						BNIL);
																				}
																				BgL_arg1292z00_823 =
																					MAKE_YOUNG_PAIR(BgL_bodyz00_6, BNIL);
																				BgL_arg1290z00_821 =
																					MAKE_YOUNG_PAIR(BgL_arg1291z00_822,
																					BgL_arg1292z00_823);
																			}
																			BgL_bodyz00_767 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						8)), BgL_arg1290z00_821);
																		}
																		{	/* Object/method.scm 55 */
																			obj_t BgL_ebodyz00_768;

																			{	/* Object/method.scm 66 */
																				bool_t BgL_test1830z00_1436;

																				{	/* Object/method.scm 66 */
																					bool_t BgL_res1755z00_1155;

																					BgL_res1755z00_1155 =
																						EPAIRP(BgL_srcz00_7);
																					BgL_test1830z00_1436 =
																						BgL_res1755z00_1155;
																				}
																				if (BgL_test1830z00_1436)
																					{	/* Object/method.scm 67 */
																						obj_t BgL_arg1287z00_818;
																						obj_t BgL_arg1288z00_819;
																						obj_t BgL_arg1289z00_820;

																						BgL_arg1287z00_818 =
																							CAR(BgL_bodyz00_767);
																						BgL_arg1288z00_819 =
																							CDR(BgL_bodyz00_767);
																						BgL_arg1289z00_820 =
																							CER(((obj_t) BgL_srcz00_7));
																						{	/* Object/method.scm 67 */
																							obj_t BgL_res1756z00_1159;

																							BgL_res1756z00_1159 =
																								MAKE_YOUNG_EPAIR
																								(BgL_arg1287z00_818,
																								BgL_arg1288z00_819,
																								BgL_arg1289z00_820);
																							BgL_ebodyz00_768 =
																								BgL_res1756z00_1159;
																						}
																					}
																				else
																					{	/* Object/method.scm 66 */
																						BgL_ebodyz00_768 = BgL_bodyz00_767;
																					}
																			}
																			{	/* Object/method.scm 66 */
																				obj_t BgL_tmzd2idzd2_769;

																				{	/* Object/method.scm 69 */
																					bool_t BgL_test1831z00_1443;

																					{	/* Object/method.scm 69 */
																						BgL_typez00_bglt BgL_arg1285z00_816;

																						BgL_arg1285z00_816 =
																							(((BgL_variablez00_bglt) COBJECT(
																									((BgL_variablez00_bglt)
																										((BgL_globalz00_bglt)
																											BgL_genericz00_765))))->
																							BgL_typez00);
																						BgL_test1831z00_1443 =
																							BGl_bigloozd2typezf3z21zztype_typez00
																							(BgL_arg1285z00_816);
																					}
																					if (BgL_test1831z00_1443)
																						{	/* Object/method.scm 70 */
																							obj_t BgL_arg1282z00_814;

																							BgL_arg1282z00_814 =
																								(((BgL_typez00_bglt) COBJECT(
																										(((BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														((BgL_globalz00_bglt) BgL_genericz00_765))))->BgL_typez00)))->BgL_idz00);
																							BgL_tmzd2idzd2_769 =
																								BGl_makezd2typedzd2identz00zzast_identz00
																								(BgL_mzd2idzd2_761,
																								BgL_arg1282z00_814);
																						}
																					else
																						{	/* Object/method.scm 69 */
																							BgL_tmzd2idzd2_769 =
																								BgL_mzd2idzd2_761;
																						}
																				}
																				{	/* Object/method.scm 69 */
																					obj_t BgL_bdgz00_770;

																					{	/* Object/method.scm 72 */
																						obj_t BgL_arg1276z00_810;

																						{	/* Object/method.scm 72 */
																							obj_t BgL_arg1277z00_811;

																							BgL_arg1277z00_811 =
																								MAKE_YOUNG_PAIR
																								(BgL_ebodyz00_768, BNIL);
																							BgL_arg1276z00_810 =
																								MAKE_YOUNG_PAIR(BgL_argsz00_4,
																								BgL_arg1277z00_811);
																						}
																						BgL_bdgz00_770 =
																							MAKE_YOUNG_PAIR
																							(BgL_tmzd2idzd2_769,
																							BgL_arg1276z00_810);
																					}
																					{	/* Object/method.scm 72 */
																						obj_t BgL_ebdgz00_771;

																						{	/* Object/method.scm 73 */
																							bool_t BgL_test1832z00_1456;

																							{	/* Object/method.scm 73 */
																								bool_t BgL_res1757z00_1163;

																								BgL_res1757z00_1163 =
																									EPAIRP(BgL_srcz00_7);
																								BgL_test1832z00_1456 =
																									BgL_res1757z00_1163;
																							}
																							if (BgL_test1832z00_1456)
																								{	/* Object/method.scm 74 */
																									obj_t BgL_arg1273z00_807;
																									obj_t BgL_arg1274z00_808;
																									obj_t BgL_arg1275z00_809;

																									BgL_arg1273z00_807 =
																										CAR(BgL_bdgz00_770);
																									BgL_arg1274z00_808 =
																										CDR(BgL_bdgz00_770);
																									BgL_arg1275z00_809 =
																										CER(((obj_t) BgL_srcz00_7));
																									{	/* Object/method.scm 74 */
																										obj_t BgL_res1758z00_1167;

																										BgL_res1758z00_1167 =
																											MAKE_YOUNG_EPAIR
																											(BgL_arg1273z00_807,
																											BgL_arg1274z00_808,
																											BgL_arg1275z00_809);
																										BgL_ebdgz00_771 =
																											BgL_res1758z00_1167;
																									}
																								}
																							else
																								{	/* Object/method.scm 73 */
																									BgL_ebdgz00_771 =
																										BgL_bdgz00_770;
																								}
																						}
																						{	/* Object/method.scm 73 */

																							BGl_za2methodsza2z00zzobject_methodz00
																								=
																								MAKE_YOUNG_PAIR
																								(BgL_mzd2idzd2_761,
																								BGl_za2methodsza2z00zzobject_methodz00);
																							{	/* Object/method.scm 77 */
																								obj_t BgL_arg1186z00_772;

																								{	/* Object/method.scm 77 */
																									obj_t BgL_arg1190z00_774;

																									{	/* Object/method.scm 77 */
																										obj_t BgL_arg1194z00_775;
																										obj_t BgL_arg1197z00_776;

																										BgL_arg1194z00_775 =
																											MAKE_YOUNG_PAIR
																											(BgL_ebdgz00_771, BNIL);
																										{	/* Object/method.scm 78 */
																											obj_t BgL_arg1201z00_777;
																											obj_t BgL_arg1208z00_778;

																											{	/* Object/method.scm 78 */
																												bool_t
																													BgL_test1833z00_1465;
																												if (((long)
																														CINT
																														(BGl_za2debugzd2moduleza2zd2zzengine_paramz00)
																														>= ((long) 1)))
																													{	/* Object/method.scm 81 */
																														obj_t
																															BgL_arg1245z00_794;
																														{	/* Object/method.scm 81 */
																															obj_t
																																BgL_arg1246z00_795;
																															BgL_arg1246z00_795
																																=
																																BGl_thezd2backendzd2zzbackend_backendz00
																																();
																															BgL_arg1245z00_794
																																=
																																(((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) BgL_arg1246z00_795)))->BgL_debugzd2supportzd2);
																														}
																														BgL_test1833z00_1465
																															=
																															CBOOL
																															(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																		(long) 9)),
																																BgL_arg1245z00_794));
																													}
																												else
																													{	/* Object/method.scm 78 */
																														BgL_test1833z00_1465
																															= ((bool_t) 0);
																													}
																												if (BgL_test1833z00_1465)
																													{	/* Object/method.scm 83 */
																														obj_t
																															BgL_arg1221z00_783;
																														{	/* Object/method.scm 83 */
																															obj_t
																																BgL_arg1223z00_784;
																															{	/* Object/method.scm 83 */
																																obj_t
																																	BgL_arg1225z00_785;
																																obj_t
																																	BgL_arg1227z00_786;
																																{	/* Object/method.scm 83 */
																																	obj_t
																																		BgL_res1761z00_1176;
																																	{	/* Object/method.scm 83 */
																																		obj_t
																																			BgL_arg1466z00_1175;
																																		BgL_arg1466z00_1175
																																			=
																																			SYMBOL_TO_STRING
																																			(BgL_identz00_3);
																																		BgL_res1761z00_1176
																																			=
																																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																			(BgL_arg1466z00_1175);
																																	}
																																	BgL_arg1225z00_785
																																		=
																																		BgL_res1761z00_1176;
																																}
																																{	/* Object/method.scm 83 */
																																	obj_t
																																		BgL_arg1243z00_792;
																																	BgL_arg1243z00_792
																																		=
																																		(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_holderz00_763)))->BgL_idz00);
																																	{	/* Object/method.scm 83 */
																																		obj_t
																																			BgL_res1762z00_1180;
																																		{	/* Object/method.scm 83 */
																																			obj_t
																																				BgL_arg1466z00_1179;
																																			BgL_arg1466z00_1179
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_arg1243z00_792);
																																			BgL_res1762z00_1180
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg1466z00_1179);
																																		}
																																		BgL_arg1227z00_786
																																			=
																																			BgL_res1762z00_1180;
																																	}
																																}
																																{	/* Object/method.scm 83 */
																																	obj_t
																																		BgL_list1228z00_787;
																																	{	/* Object/method.scm 83 */
																																		obj_t
																																			BgL_arg1229z00_788;
																																		{	/* Object/method.scm 83 */
																																			obj_t
																																				BgL_arg1232z00_789;
																																			{	/* Object/method.scm 83 */
																																				obj_t
																																					BgL_arg1239z00_790;
																																				{	/* Object/method.scm 83 */
																																					obj_t
																																						BgL_arg1242z00_791;
																																					BgL_arg1242z00_791
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_string1795z00zzobject_methodz00,
																																						BNIL);
																																					BgL_arg1239z00_790
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1227z00_786,
																																						BgL_arg1242z00_791);
																																				}
																																				BgL_arg1232z00_789
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_string1796z00zzobject_methodz00,
																																					BgL_arg1239z00_790);
																																			}
																																			BgL_arg1229z00_788
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1225z00_785,
																																				BgL_arg1232z00_789);
																																		}
																																		BgL_list1228z00_787
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_string1797z00zzobject_methodz00,
																																			BgL_arg1229z00_788);
																																	}
																																	BgL_arg1223z00_784
																																		=
																																		BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																		(BgL_list1228z00_787);
																																}
																															}
																															BgL_arg1221z00_783
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1223z00_784,
																																BNIL);
																														}
																														BgL_arg1201z00_777 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 10)),
																															BgL_arg1221z00_783);
																													}
																												else
																													{	/* Object/method.scm 78 */
																														BgL_arg1201z00_777 =
																															BFALSE;
																													}
																											}
																											{	/* Object/method.scm 86 */
																												obj_t
																													BgL_arg1247z00_796;
																												{	/* Object/method.scm 86 */
																													obj_t
																														BgL_arg1250z00_797;
																													{	/* Object/method.scm 86 */
																														obj_t
																															BgL_arg1252z00_798;
																														{	/* Object/method.scm 86 */
																															obj_t
																																BgL_arg1253z00_799;
																															obj_t
																																BgL_arg1254z00_800;
																															{	/* Object/method.scm 86 */
																																obj_t
																																	BgL_arg1256z00_801;
																																{	/* Object/method.scm 86 */
																																	obj_t
																																		BgL_arg1258z00_802;
																																	obj_t
																																		BgL_arg1263z00_803;
																																	BgL_arg1258z00_802
																																		=
																																		(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_holderz00_763)))->BgL_idz00);
																																	BgL_arg1263z00_803
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_modulez00_764,
																																		BNIL);
																																	BgL_arg1256z00_801
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1258z00_802,
																																		BgL_arg1263z00_803);
																																}
																																BgL_arg1253z00_799
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 2)),
																																	BgL_arg1256z00_801);
																															}
																															{	/* Object/method.scm 88 */
																																obj_t
																																	BgL_arg1268z00_804;
																																{	/* Object/method.scm 88 */
																																	obj_t
																																		BgL_arg1270z00_805;
																																	{	/* Object/method.scm 88 */
																																		obj_t
																																			BgL_res1763z00_1184;
																																		{	/* Object/method.scm 88 */
																																			obj_t
																																				BgL_arg1466z00_1183;
																																			BgL_arg1466z00_1183
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_identz00_3);
																																			BgL_res1763z00_1184
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg1466z00_1183);
																																		}
																																		BgL_arg1270z00_805
																																			=
																																			BgL_res1763z00_1184;
																																	}
																																	BgL_arg1268z00_804
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1270z00_805,
																																		BNIL);
																																}
																																BgL_arg1254z00_800
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_mzd2idzd2_761,
																																	BgL_arg1268z00_804);
																															}
																															BgL_arg1252z00_798
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1253z00_799,
																																BgL_arg1254z00_800);
																														}
																														BgL_arg1250z00_797 =
																															MAKE_YOUNG_PAIR
																															(BgL_idz00_756,
																															BgL_arg1252z00_798);
																													}
																													BgL_arg1247z00_796 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 11)),
																														BgL_arg1250z00_797);
																												}
																												BgL_arg1208z00_778 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1247z00_796,
																													BNIL);
																											}
																											BgL_arg1197z00_776 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1201z00_777,
																												BgL_arg1208z00_778);
																										}
																										BgL_arg1190z00_774 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1194z00_775,
																											BgL_arg1197z00_776);
																									}
																									BgL_arg1186z00_772 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long) 8)),
																										BgL_arg1190z00_774);
																								}
																								{	/* Object/method.scm 77 */
																									obj_t BgL_list1187z00_773;

																									BgL_list1187z00_773 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1186z00_772, BNIL);
																									return BgL_list1187z00_773;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																else
																	{	/* Object/method.scm 193 */
																		obj_t BgL_arg1712z00_1186;

																		{	/* Object/method.scm 193 */
																			obj_t BgL_list1714z00_1187;

																			BgL_list1714z00_1187 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						12)), BNIL);
																			BgL_arg1712z00_1186 =
																				BgL_list1714z00_1187;
																		}
																		{	/* Object/method.scm 193 */
																			obj_t BgL_list1713z00_1188;

																			BgL_list1713z00_1188 =
																				MAKE_YOUNG_PAIR(BgL_arg1712z00_1186,
																				BNIL);
																			return
																				BGl_userzd2errorzd2zztools_errorz00
																				(BgL_idz00_756,
																				BGl_string1798z00zzobject_methodz00,
																				BgL_srcz00_7, BgL_list1713z00_1188);
																		}
																	}
															}
														}
													}
												}
											else
												{	/* Object/method.scm 193 */
													obj_t BgL_arg1712z00_1190;

													{	/* Object/method.scm 193 */
														obj_t BgL_list1714z00_1191;

														BgL_list1714z00_1191 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
															BNIL);
														BgL_arg1712z00_1190 = BgL_list1714z00_1191;
													}
													{	/* Object/method.scm 193 */
														obj_t BgL_list1713z00_1192;

														BgL_list1713z00_1192 =
															MAKE_YOUNG_PAIR(BgL_arg1712z00_1190, BNIL);
														return
															BGl_userzd2errorzd2zztools_errorz00(BgL_idz00_756,
															BGl_string1799z00zzobject_methodz00, BgL_srcz00_7,
															BgL_list1713z00_1192);
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



/* &make-method-no-dsssl-body */
	obj_t BGl_z62makezd2methodzd2nozd2dssslzd2bodyz62zzobject_methodz00(obj_t
		BgL_envz00_1272, obj_t BgL_identz00_1273, obj_t BgL_argsz00_1274,
		obj_t BgL_localsz00_1275, obj_t BgL_bodyz00_1276, obj_t BgL_srcz00_1277)
	{
		{	/* Object/method.scm 37 */
			return
				BGl_makezd2methodzd2nozd2dssslzd2bodyz00zzobject_methodz00
				(BgL_identz00_1273, BgL_argsz00_1274, BgL_localsz00_1275,
				BgL_bodyz00_1276, BgL_srcz00_1277);
		}

	}



/* make-method-dsssl-body */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2methodzd2dssslzd2bodyzd2zzobject_methodz00(obj_t BgL_identz00_8,
		obj_t BgL_argsz00_9, obj_t BgL_localsz00_10, obj_t BgL_bodyz00_11,
		obj_t BgL_srcz00_12)
	{
		{	/* Object/method.scm 93 */
			{	/* Object/method.scm 94 */
				obj_t BgL_idz00_873;

				BgL_idz00_873 =
					BGl_idzd2ofzd2idz00zzast_identz00(BgL_identz00_8,
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_12));
				{	/* Object/method.scm 94 */
					obj_t BgL_metz00_874;

					BgL_metz00_874 =
						BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0)));
					{	/* Object/method.scm 95 */
						long BgL_arityz00_875;

						BgL_arityz00_875 =
							BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_9);
						{	/* Object/method.scm 96 */
							bool_t BgL_dssslz00_876;

							BgL_dssslz00_876 =
								BGl_dssslzd2methodzf3z21zzobject_methodz00(BgL_argsz00_9);
							{	/* Object/method.scm 97 */
								obj_t BgL_argszd2idzd2_877;

								if (BgL_dssslz00_876)
									{	/* Object/method.scm 98 */
										BgL_argszd2idzd2_877 =
											BGl_pairzd2ze3listz31zzobject_methodz00
											(BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00
											(BgL_argsz00_9, BGl_errorzd2envzd2zz__errorz00,
												((bool_t) 0)));
									}
								else
									{	/* Object/method.scm 98 */
										if (NULLP(BgL_localsz00_10))
											{	/* Object/method.scm 100 */
												BgL_argszd2idzd2_877 = BNIL;
											}
										else
											{	/* Object/method.scm 100 */
												obj_t BgL_head1170z00_983;

												{	/* Object/method.scm 100 */
													obj_t BgL_arg1687z00_995;

													BgL_arg1687z00_995 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt)
																		CAR(
																			((obj_t) BgL_localsz00_10))))))->
														BgL_idz00);
													{	/* Object/method.scm 100 */
														obj_t BgL_res1768z00_1197;

														BgL_res1768z00_1197 =
															MAKE_YOUNG_PAIR(BgL_arg1687z00_995, BNIL);
														BgL_head1170z00_983 = BgL_res1768z00_1197;
													}
												}
												{	/* Object/method.scm 100 */
													obj_t BgL_g1173z00_984;

													BgL_g1173z00_984 = CDR(((obj_t) BgL_localsz00_10));
													{
														obj_t BgL_l1168z00_986;
														obj_t BgL_tail1171z00_987;

														BgL_l1168z00_986 = BgL_g1173z00_984;
														BgL_tail1171z00_987 = BgL_head1170z00_983;
													BgL_zc3z04anonymousza31674ze3z87_988:
														if (NULLP(BgL_l1168z00_986))
															{	/* Object/method.scm 100 */
																BgL_argszd2idzd2_877 = BgL_head1170z00_983;
															}
														else
															{	/* Object/method.scm 100 */
																obj_t BgL_newtail1172z00_990;

																{	/* Object/method.scm 100 */
																	obj_t BgL_arg1685z00_992;

																	BgL_arg1685z00_992 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_localz00_bglt)
																						CAR(
																							((obj_t) BgL_l1168z00_986))))))->
																		BgL_idz00);
																	{	/* Object/method.scm 100 */
																		obj_t BgL_res1770z00_1202;

																		BgL_res1770z00_1202 =
																			MAKE_YOUNG_PAIR(BgL_arg1685z00_992, BNIL);
																		BgL_newtail1172z00_990 =
																			BgL_res1770z00_1202;
																	}
																}
																SET_CDR(BgL_tail1171z00_987,
																	BgL_newtail1172z00_990);
																{	/* Object/method.scm 100 */
																	obj_t BgL_arg1684z00_991;

																	BgL_arg1684z00_991 =
																		CDR(((obj_t) BgL_l1168z00_986));
																	{
																		obj_t BgL_tail1171z00_1550;
																		obj_t BgL_l1168z00_1549;

																		BgL_l1168z00_1549 = BgL_arg1684z00_991;
																		BgL_tail1171z00_1550 =
																			BgL_newtail1172z00_990;
																		BgL_tail1171z00_987 = BgL_tail1171z00_1550;
																		BgL_l1168z00_986 = BgL_l1168z00_1549;
																		goto BgL_zc3z04anonymousza31674ze3z87_988;
																	}
																}
															}
													}
												}
											}
									}
								{	/* Object/method.scm 98 */
									BgL_typez00_bglt BgL_typez00_878;

									BgL_typez00_878 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt)
														CAR(((obj_t) BgL_localsz00_10))))))->BgL_typez00);
									{	/* Object/method.scm 101 */
										obj_t BgL_mzd2idzd2_879;

										{	/* Object/method.scm 102 */
											obj_t BgL_arg1652z00_974;

											{	/* Object/method.scm 102 */
												obj_t BgL_arg1662z00_975;

												BgL_arg1662z00_975 =
													(((BgL_typez00_bglt) COBJECT(BgL_typez00_878))->
													BgL_idz00);
												{	/* Object/method.scm 102 */
													obj_t BgL_list1663z00_976;

													{	/* Object/method.scm 102 */
														obj_t BgL_arg1664z00_977;

														{	/* Object/method.scm 102 */
															obj_t BgL_arg1667z00_978;

															BgL_arg1667z00_978 =
																MAKE_YOUNG_PAIR(BgL_arg1662z00_975, BNIL);
															BgL_arg1664z00_977 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
																BgL_arg1667z00_978);
														}
														BgL_list1663z00_976 =
															MAKE_YOUNG_PAIR(BgL_idz00_873,
															BgL_arg1664z00_977);
													}
													BgL_arg1652z00_974 =
														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
														(BgL_list1663z00_976);
											}}
											BgL_mzd2idzd2_879 =
												BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1652z00_974);
										}
										{	/* Object/method.scm 102 */

											{	/* Object/method.scm 104 */
												bool_t BgL_test1838z00_1563;

												{	/* Object/method.scm 104 */
													bool_t BgL_res1771z00_1208;

													BgL_res1771z00_1208 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_typez00_878),
														BGl_tclassz00zzobject_classz00);
													BgL_test1838z00_1563 = BgL_res1771z00_1208;
												}
												if (BgL_test1838z00_1563)
													{	/* Object/method.scm 107 */
														BgL_globalz00_bglt BgL_holderz00_881;

														{
															BgL_tclassz00_bglt BgL_auxz00_1566;

															{
																obj_t BgL_auxz00_1567;

																{	/* Object/method.scm 107 */
																	BgL_objectz00_bglt BgL_tmpz00_1568;

																	BgL_tmpz00_1568 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_typez00_878));
																	BgL_auxz00_1567 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_1568);
																}
																BgL_auxz00_1566 =
																	((BgL_tclassz00_bglt) BgL_auxz00_1567);
															}
															BgL_holderz00_881 =
																(((BgL_tclassz00_bglt)
																	COBJECT(BgL_auxz00_1566))->BgL_holderz00);
														}
														{	/* Object/method.scm 107 */
															obj_t BgL_modulez00_882;

															BgL_modulez00_882 =
																(((BgL_globalz00_bglt)
																	COBJECT(BgL_holderz00_881))->BgL_modulez00);
															{	/* Object/method.scm 108 */
																obj_t BgL_genericz00_883;

																BgL_genericz00_883 =
																	BGl_findzd2globalzd2zzast_envz00
																	(BgL_idz00_873, BNIL);
																{	/* Object/method.scm 109 */

																	if (BGl_isazf3zf3zz__objectz00
																		(BgL_genericz00_883,
																			BGl_globalz00zzast_varz00))
																		{	/* Object/method.scm 114 */
																			obj_t BgL_bodyz00_885;

																			{	/* Object/method.scm 116 */
																				obj_t BgL_arg1552z00_940;

																				{	/* Object/method.scm 116 */
																					obj_t BgL_arg1553z00_941;
																					obj_t BgL_arg1558z00_942;

																					{	/* Object/method.scm 116 */
																						obj_t BgL_arg1561z00_943;

																						{	/* Object/method.scm 116 */
																							obj_t BgL_arg1564z00_944;

																							{	/* Object/method.scm 116 */
																								obj_t BgL_arg1565z00_945;

																								{	/* Object/method.scm 116 */
																									obj_t BgL_arg1573z00_946;

																									{	/* Object/method.scm 116 */
																										obj_t BgL_arg1575z00_947;

																										{	/* Object/method.scm 116 */
																											obj_t BgL_arg1578z00_948;
																											obj_t BgL_arg1582z00_949;

																											{	/* Object/method.scm 116 */
																												obj_t
																													BgL_arg1584z00_950;
																												{	/* Object/method.scm 116 */
																													obj_t
																														BgL_arg1588z00_951;
																													{	/* Object/method.scm 116 */
																														obj_t
																															BgL_arg1589z00_952;
																														{	/* Object/method.scm 116 */
																															obj_t
																																BgL_arg1592z00_953;
																															{	/* Object/method.scm 116 */
																																obj_t
																																	BgL_arg1593z00_954;
																																obj_t
																																	BgL_arg1597z00_955;
																																BgL_arg1593z00_954
																																	=
																																	CAR(((obj_t)
																																		BgL_argszd2idzd2_877));
																																{	/* Object/method.scm 118 */
																																	obj_t
																																		BgL_arg1599z00_956;
																																	{	/* Object/method.scm 118 */
																																		obj_t
																																			BgL_arg1604z00_957;
																																		{	/* Object/method.scm 118 */
																																			obj_t
																																				BgL_arg1605z00_958;
																																			{	/* Object/method.scm 118 */
																																				obj_t
																																					BgL_arg1606z00_959;
																																				obj_t
																																					BgL_arg1611z00_960;
																																				BgL_arg1606z00_959
																																					=
																																					(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_holderz00_881)))->BgL_idz00);
																																				BgL_arg1611z00_960
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_modulez00_882,
																																					BNIL);
																																				BgL_arg1605z00_958
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1606z00_959,
																																					BgL_arg1611z00_960);
																																			}
																																			BgL_arg1604z00_957
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						2)),
																																				BgL_arg1605z00_958);
																																		}
																																		BgL_arg1599z00_956
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1604z00_957,
																																			BNIL);
																																	}
																																	BgL_arg1597z00_955
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_idz00_873,
																																		BgL_arg1599z00_956);
																																}
																																BgL_arg1592z00_953
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1593z00_954,
																																	BgL_arg1597z00_955);
																															}
																															BgL_arg1589z00_952
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 3)),
																																BgL_arg1592z00_953);
																														}
																														BgL_arg1588z00_951 =
																															MAKE_YOUNG_PAIR
																															(BgL_arg1589z00_952,
																															BNIL);
																													}
																													BgL_arg1584z00_950 =
																														MAKE_YOUNG_PAIR
																														(BgL_metz00_874,
																														BgL_arg1588z00_951);
																												}
																												BgL_arg1578z00_948 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1584z00_950,
																													BNIL);
																											}
																											{	/* Object/method.scm 120 */
																												obj_t
																													BgL_arg1612z00_961;
																												if (BgL_dssslz00_876)
																													{	/* Object/method.scm 121 */
																														obj_t
																															BgL_arg1613z00_962;
																														{	/* Object/method.scm 121 */
																															obj_t
																																BgL_arg1624z00_963;
																															{	/* Object/method.scm 121 */
																																obj_t
																																	BgL_arg1626z00_964;
																																{	/* Object/method.scm 121 */
																																	obj_t
																																		BgL_arg1627z00_965;
																																	BgL_arg1627z00_965
																																		=
																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_argszd2idzd2_877,
																																		BNIL);
																																	BgL_arg1626z00_964
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				4)),
																																		BgL_arg1627z00_965);
																																}
																																BgL_arg1624z00_963
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1626z00_964,
																																	BNIL);
																															}
																															BgL_arg1613z00_962
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_metz00_874,
																																BgL_arg1624z00_963);
																														}
																														BgL_arg1612z00_961 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 5)),
																															BgL_arg1613z00_962);
																													}
																												else
																													{	/* Object/method.scm 120 */
																														if (
																															(BgL_arityz00_875
																																>= ((long) 0)))
																															{	/* Object/method.scm 122 */
																																BgL_arg1612z00_961
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_metz00_874,
																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_argszd2idzd2_877,
																																		BNIL));
																															}
																														else
																															{	/* Object/method.scm 125 */
																																obj_t
																																	BgL_arg1634z00_968;
																																{	/* Object/method.scm 125 */
																																	obj_t
																																		BgL_arg1639z00_969;
																																	{	/* Object/method.scm 125 */
																																		obj_t
																																			BgL_arg1640z00_970;
																																		{	/* Object/method.scm 125 */
																																			obj_t
																																				BgL_arg1641z00_971;
																																			BgL_arg1641z00_971
																																				=
																																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_argszd2idzd2_877,
																																				BNIL);
																																			BgL_arg1640z00_970
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						4)),
																																				BgL_arg1641z00_971);
																																		}
																																		BgL_arg1639z00_969
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1640z00_970,
																																			BNIL);
																																	}
																																	BgL_arg1634z00_968
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_metz00_874,
																																		BgL_arg1639z00_969);
																																}
																																BgL_arg1612z00_961
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 5)),
																																	BgL_arg1634z00_968);
																													}}
																												BgL_arg1582z00_949 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1612z00_961,
																													BNIL);
																											}
																											BgL_arg1575z00_947 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1578z00_948,
																												BgL_arg1582z00_949);
																										}
																										BgL_arg1573z00_946 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													6)),
																											BgL_arg1575z00_947);
																									}
																									BgL_arg1565z00_945 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1573z00_946, BNIL);
																								}
																								BgL_arg1564z00_944 =
																									MAKE_YOUNG_PAIR(BNIL,
																									BgL_arg1565z00_945);
																							}
																							BgL_arg1561z00_943 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 7)),
																								BgL_arg1564z00_944);
																						}
																						BgL_arg1553z00_941 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1561z00_943, BNIL);
																					}
																					{	/* Object/method.scm 126 */
																						obj_t BgL_arg1644z00_972;

																						if (BgL_dssslz00_876)
																							{	/* Object/method.scm 126 */
																								BgL_arg1644z00_972 =
																									BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00
																									(BgL_identz00_8,
																									BgL_argsz00_9, BgL_bodyz00_11,
																									BGl_errorzd2envzd2zz__errorz00);
																							}
																						else
																							{	/* Object/method.scm 126 */
																								BgL_arg1644z00_972 =
																									BgL_bodyz00_11;
																							}
																						BgL_arg1558z00_942 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1644z00_972, BNIL);
																					}
																					BgL_arg1552z00_940 =
																						MAKE_YOUNG_PAIR(BgL_arg1553z00_941,
																						BgL_arg1558z00_942);
																				}
																				BgL_bodyz00_885 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							8)), BgL_arg1552z00_940);
																			}
																			{	/* Object/method.scm 114 */
																				obj_t BgL_ebodyz00_886;

																				{	/* Object/method.scm 129 */
																					bool_t BgL_test1843z00_1628;

																					{	/* Object/method.scm 129 */
																						bool_t BgL_res1774z00_1217;

																						BgL_res1774z00_1217 =
																							EPAIRP(BgL_srcz00_12);
																						BgL_test1843z00_1628 =
																							BgL_res1774z00_1217;
																					}
																					if (BgL_test1843z00_1628)
																						{	/* Object/method.scm 130 */
																							obj_t BgL_arg1536z00_937;
																							obj_t BgL_arg1537z00_938;
																							obj_t BgL_arg1540z00_939;

																							BgL_arg1536z00_937 =
																								CAR(BgL_bodyz00_885);
																							BgL_arg1537z00_938 =
																								CDR(BgL_bodyz00_885);
																							BgL_arg1540z00_939 =
																								CER(((obj_t) BgL_srcz00_12));
																							{	/* Object/method.scm 130 */
																								obj_t BgL_res1775z00_1221;

																								BgL_res1775z00_1221 =
																									MAKE_YOUNG_EPAIR
																									(BgL_arg1536z00_937,
																									BgL_arg1537z00_938,
																									BgL_arg1540z00_939);
																								BgL_ebodyz00_886 =
																									BgL_res1775z00_1221;
																							}
																						}
																					else
																						{	/* Object/method.scm 129 */
																							BgL_ebodyz00_886 =
																								BgL_bodyz00_885;
																						}
																				}
																				{	/* Object/method.scm 129 */
																					obj_t BgL_tmzd2idzd2_887;

																					{	/* Object/method.scm 132 */
																						bool_t BgL_test1844z00_1635;

																						{	/* Object/method.scm 132 */
																							BgL_typez00_bglt
																								BgL_arg1528z00_935;
																							BgL_arg1528z00_935 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt) (
																												(BgL_globalz00_bglt)
																												BgL_genericz00_883))))->
																								BgL_typez00);
																							BgL_test1844z00_1635 =
																								BGl_bigloozd2typezf3z21zztype_typez00
																								(BgL_arg1528z00_935);
																						}
																						if (BgL_test1844z00_1635)
																							{	/* Object/method.scm 133 */
																								obj_t BgL_arg1518z00_933;

																								BgL_arg1518z00_933 =
																									(((BgL_typez00_bglt) COBJECT(
																											(((BgL_variablez00_bglt)
																													COBJECT((
																															(BgL_variablez00_bglt)
																															((BgL_globalz00_bglt) BgL_genericz00_883))))->BgL_typez00)))->BgL_idz00);
																								BgL_tmzd2idzd2_887 =
																									BGl_makezd2typedzd2identz00zzast_identz00
																									(BgL_mzd2idzd2_879,
																									BgL_arg1518z00_933);
																							}
																						else
																							{	/* Object/method.scm 132 */
																								BgL_tmzd2idzd2_887 =
																									BgL_mzd2idzd2_879;
																							}
																					}
																					{	/* Object/method.scm 132 */
																						obj_t BgL_bdgz00_888;

																						{	/* Object/method.scm 135 */
																							obj_t BgL_arg1489z00_928;

																							{	/* Object/method.scm 135 */
																								obj_t BgL_arg1493z00_929;
																								obj_t BgL_arg1495z00_930;

																								if (BgL_dssslz00_876)
																									{	/* Object/method.scm 135 */
																										BgL_arg1493z00_929 =
																											BGl_dssslzd2formalszd2ze3schemezd2typedzd2formalsze3zz__dssslz00
																											(BgL_argsz00_9,
																											BGl_errorzd2envzd2zz__errorz00,
																											((bool_t) 1));
																									}
																								else
																									{	/* Object/method.scm 135 */
																										BgL_arg1493z00_929 =
																											BgL_argsz00_9;
																									}
																								BgL_arg1495z00_930 =
																									MAKE_YOUNG_PAIR
																									(BgL_ebodyz00_886, BNIL);
																								BgL_arg1489z00_928 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1493z00_929,
																									BgL_arg1495z00_930);
																							}
																							BgL_bdgz00_888 =
																								MAKE_YOUNG_PAIR
																								(BgL_tmzd2idzd2_887,
																								BgL_arg1489z00_928);
																						}
																						{	/* Object/method.scm 135 */
																							obj_t BgL_ebdgz00_889;

																							{	/* Object/method.scm 139 */
																								bool_t BgL_test1846z00_1650;

																								{	/* Object/method.scm 139 */
																									bool_t BgL_res1776z00_1225;

																									BgL_res1776z00_1225 =
																										EPAIRP(BgL_srcz00_12);
																									BgL_test1846z00_1650 =
																										BgL_res1776z00_1225;
																								}
																								if (BgL_test1846z00_1650)
																									{	/* Object/method.scm 140 */
																										obj_t BgL_arg1474z00_925;
																										obj_t BgL_arg1476z00_926;
																										obj_t BgL_arg1477z00_927;

																										BgL_arg1474z00_925 =
																											CAR(BgL_bdgz00_888);
																										BgL_arg1476z00_926 =
																											CDR(BgL_bdgz00_888);
																										BgL_arg1477z00_927 =
																											CER(
																											((obj_t) BgL_srcz00_12));
																										{	/* Object/method.scm 140 */
																											obj_t BgL_res1777z00_1229;

																											BgL_res1777z00_1229 =
																												MAKE_YOUNG_EPAIR
																												(BgL_arg1474z00_925,
																												BgL_arg1476z00_926,
																												BgL_arg1477z00_927);
																											BgL_ebdgz00_889 =
																												BgL_res1777z00_1229;
																										}
																									}
																								else
																									{	/* Object/method.scm 139 */
																										BgL_ebdgz00_889 =
																											BgL_bdgz00_888;
																									}
																							}
																							{	/* Object/method.scm 139 */

																								BGl_za2methodsza2z00zzobject_methodz00
																									=
																									MAKE_YOUNG_PAIR
																									(BgL_mzd2idzd2_879,
																									BGl_za2methodsza2z00zzobject_methodz00);
																								{	/* Object/method.scm 143 */
																									obj_t BgL_arg1357z00_890;

																									{	/* Object/method.scm 143 */
																										obj_t BgL_arg1360z00_892;

																										{	/* Object/method.scm 143 */
																											obj_t BgL_arg1361z00_893;
																											obj_t BgL_arg1363z00_894;

																											BgL_arg1361z00_893 =
																												MAKE_YOUNG_PAIR
																												(BgL_ebdgz00_889, BNIL);
																											{	/* Object/method.scm 144 */
																												obj_t
																													BgL_arg1364z00_895;
																												obj_t
																													BgL_arg1367z00_896;
																												{	/* Object/method.scm 144 */
																													bool_t
																														BgL_test1847z00_1659;
																													if (((long)
																															CINT
																															(BGl_za2debugzd2moduleza2zd2zzengine_paramz00)
																															>= ((long) 1)))
																														{	/* Object/method.scm 147 */
																															obj_t
																																BgL_arg1417z00_912;
																															{	/* Object/method.scm 147 */
																																obj_t
																																	BgL_arg1418z00_913;
																																BgL_arg1418z00_913
																																	=
																																	BGl_thezd2backendzd2zzbackend_backendz00
																																	();
																																BgL_arg1417z00_912
																																	=
																																	(((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) BgL_arg1418z00_913)))->BgL_debugzd2supportzd2);
																															}
																															BgL_test1847z00_1659
																																=
																																CBOOL
																																(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																(CNST_TABLE_REF(
																																		((long) 9)),
																																	BgL_arg1417z00_912));
																														}
																													else
																														{	/* Object/method.scm 144 */
																															BgL_test1847z00_1659
																																= ((bool_t) 0);
																														}
																													if (BgL_test1847z00_1659)
																														{	/* Object/method.scm 149 */
																															obj_t
																																BgL_arg1381z00_901;
																															{	/* Object/method.scm 149 */
																																obj_t
																																	BgL_arg1382z00_902;
																																{	/* Object/method.scm 149 */
																																	obj_t
																																		BgL_arg1383z00_903;
																																	obj_t
																																		BgL_arg1384z00_904;
																																	{	/* Object/method.scm 149 */
																																		obj_t
																																			BgL_res1780z00_1238;
																																		{	/* Object/method.scm 149 */
																																			obj_t
																																				BgL_arg1466z00_1237;
																																			BgL_arg1466z00_1237
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_identz00_8);
																																			BgL_res1780z00_1238
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg1466z00_1237);
																																		}
																																		BgL_arg1383z00_903
																																			=
																																			BgL_res1780z00_1238;
																																	}
																																	{	/* Object/method.scm 149 */
																																		obj_t
																																			BgL_arg1396z00_910;
																																		BgL_arg1396z00_910
																																			=
																																			(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_holderz00_881)))->BgL_idz00);
																																		{	/* Object/method.scm 149 */
																																			obj_t
																																				BgL_res1781z00_1242;
																																			{	/* Object/method.scm 149 */
																																				obj_t
																																					BgL_arg1466z00_1241;
																																				BgL_arg1466z00_1241
																																					=
																																					SYMBOL_TO_STRING
																																					(BgL_arg1396z00_910);
																																				BgL_res1781z00_1242
																																					=
																																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																					(BgL_arg1466z00_1241);
																																			}
																																			BgL_arg1384z00_904
																																				=
																																				BgL_res1781z00_1242;
																																		}
																																	}
																																	{	/* Object/method.scm 149 */
																																		obj_t
																																			BgL_list1385z00_905;
																																		{	/* Object/method.scm 149 */
																																			obj_t
																																				BgL_arg1386z00_906;
																																			{	/* Object/method.scm 149 */
																																				obj_t
																																					BgL_arg1387z00_907;
																																				{	/* Object/method.scm 149 */
																																					obj_t
																																						BgL_arg1388z00_908;
																																					{	/* Object/method.scm 149 */
																																						obj_t
																																							BgL_arg1394z00_909;
																																						BgL_arg1394z00_909
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BGl_string1795z00zzobject_methodz00,
																																							BNIL);
																																						BgL_arg1388z00_908
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1384z00_904,
																																							BgL_arg1394z00_909);
																																					}
																																					BgL_arg1387z00_907
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_string1796z00zzobject_methodz00,
																																						BgL_arg1388z00_908);
																																				}
																																				BgL_arg1386z00_906
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1383z00_903,
																																					BgL_arg1387z00_907);
																																			}
																																			BgL_list1385z00_905
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_string1797z00zzobject_methodz00,
																																				BgL_arg1386z00_906);
																																		}
																																		BgL_arg1382z00_902
																																			=
																																			BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																			(BgL_list1385z00_905);
																																	}
																																}
																																BgL_arg1381z00_901
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1382z00_902,
																																	BNIL);
																															}
																															BgL_arg1364z00_895
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 10)),
																																BgL_arg1381z00_901);
																														}
																													else
																														{	/* Object/method.scm 144 */
																															BgL_arg1364z00_895
																																= BFALSE;
																														}
																												}
																												{	/* Object/method.scm 152 */
																													obj_t
																														BgL_arg1421z00_914;
																													{	/* Object/method.scm 152 */
																														obj_t
																															BgL_arg1422z00_915;
																														{	/* Object/method.scm 152 */
																															obj_t
																																BgL_arg1441z00_916;
																															{	/* Object/method.scm 152 */
																																obj_t
																																	BgL_arg1442z00_917;
																																obj_t
																																	BgL_arg1448z00_918;
																																{	/* Object/method.scm 152 */
																																	obj_t
																																		BgL_arg1449z00_919;
																																	{	/* Object/method.scm 152 */
																																		obj_t
																																			BgL_arg1461z00_920;
																																		obj_t
																																			BgL_arg1462z00_921;
																																		BgL_arg1461z00_920
																																			=
																																			(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_holderz00_881)))->BgL_idz00);
																																		BgL_arg1462z00_921
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_modulez00_882,
																																			BNIL);
																																		BgL_arg1449z00_919
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1461z00_920,
																																			BgL_arg1462z00_921);
																																	}
																																	BgL_arg1442z00_917
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				2)),
																																		BgL_arg1449z00_919);
																																}
																																{	/* Object/method.scm 154 */
																																	obj_t
																																		BgL_arg1464z00_922;
																																	{	/* Object/method.scm 154 */
																																		obj_t
																																			BgL_arg1465z00_923;
																																		{	/* Object/method.scm 154 */
																																			obj_t
																																				BgL_res1782z00_1246;
																																			{	/* Object/method.scm 154 */
																																				obj_t
																																					BgL_arg1466z00_1245;
																																				BgL_arg1466z00_1245
																																					=
																																					SYMBOL_TO_STRING
																																					(BgL_identz00_8);
																																				BgL_res1782z00_1246
																																					=
																																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																					(BgL_arg1466z00_1245);
																																			}
																																			BgL_arg1465z00_923
																																				=
																																				BgL_res1782z00_1246;
																																		}
																																		BgL_arg1464z00_922
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1465z00_923,
																																			BNIL);
																																	}
																																	BgL_arg1448z00_918
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_mzd2idzd2_879,
																																		BgL_arg1464z00_922);
																																}
																																BgL_arg1441z00_916
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1442z00_917,
																																	BgL_arg1448z00_918);
																															}
																															BgL_arg1422z00_915
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_idz00_873,
																																BgL_arg1441z00_916);
																														}
																														BgL_arg1421z00_914 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 11)),
																															BgL_arg1422z00_915);
																													}
																													BgL_arg1367z00_896 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1421z00_914,
																														BNIL);
																												}
																												BgL_arg1363z00_894 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1364z00_895,
																													BgL_arg1367z00_896);
																											}
																											BgL_arg1360z00_892 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1361z00_893,
																												BgL_arg1363z00_894);
																										}
																										BgL_arg1357z00_890 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													8)),
																											BgL_arg1360z00_892);
																									}
																									{	/* Object/method.scm 143 */
																										obj_t BgL_list1358z00_891;

																										BgL_list1358z00_891 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1357z00_890,
																											BNIL);
																										return BgL_list1358z00_891;
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	else
																		{	/* Object/method.scm 193 */
																			obj_t BgL_arg1712z00_1248;

																			{	/* Object/method.scm 193 */
																				obj_t BgL_list1714z00_1249;

																				BgL_list1714z00_1249 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							12)), BNIL);
																				BgL_arg1712z00_1248 =
																					BgL_list1714z00_1249;
																			}
																			{	/* Object/method.scm 193 */
																				obj_t BgL_list1713z00_1250;

																				BgL_list1713z00_1250 =
																					MAKE_YOUNG_PAIR(BgL_arg1712z00_1248,
																					BNIL);
																				return
																					BGl_userzd2errorzd2zztools_errorz00
																					(BgL_idz00_873,
																					BGl_string1798z00zzobject_methodz00,
																					BgL_srcz00_12, BgL_list1713z00_1250);
																			}
																		}
																}
															}
														}
													}
												else
													{	/* Object/method.scm 193 */
														obj_t BgL_arg1712z00_1252;

														{	/* Object/method.scm 193 */
															obj_t BgL_list1714z00_1253;

															BgL_list1714z00_1253 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																BNIL);
															BgL_arg1712z00_1252 = BgL_list1714z00_1253;
														}
														{	/* Object/method.scm 193 */
															obj_t BgL_list1713z00_1254;

															BgL_list1713z00_1254 =
																MAKE_YOUNG_PAIR(BgL_arg1712z00_1252, BNIL);
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BgL_idz00_873,
																BGl_string1799z00zzobject_methodz00,
																BgL_srcz00_12, BgL_list1713z00_1254);
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

	}



/* &make-method-dsssl-body */
	obj_t BGl_z62makezd2methodzd2dssslzd2bodyzb0zzobject_methodz00(obj_t
		BgL_envz00_1278, obj_t BgL_identz00_1279, obj_t BgL_argsz00_1280,
		obj_t BgL_localsz00_1281, obj_t BgL_bodyz00_1282, obj_t BgL_srcz00_1283)
	{
		{	/* Object/method.scm 93 */
			return
				BGl_makezd2methodzd2dssslzd2bodyzd2zzobject_methodz00(BgL_identz00_1279,
				BgL_argsz00_1280, BgL_localsz00_1281, BgL_bodyz00_1282,
				BgL_srcz00_1283);
		}

	}



/* dsssl-method? */
	bool_t BGl_dssslzd2methodzf3z21zzobject_methodz00(obj_t BgL_argsz00_13)
	{
		{	/* Object/method.scm 159 */
			if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_argsz00_13))
				{
					obj_t BgL_l1174z00_1000;

					BgL_l1174z00_1000 = BgL_argsz00_13;
				BgL_zc3z04anonymousza31693ze3z87_1001:
					if (NULLP(BgL_l1174z00_1000))
						{	/* Object/method.scm 160 */
							return ((bool_t) 0);
						}
					else
						{	/* Object/method.scm 160 */
							bool_t BgL__ortest_1176z00_1003;

							{	/* Object/method.scm 160 */
								obj_t BgL_arg1696z00_1005;

								BgL_arg1696z00_1005 = CAR(((obj_t) BgL_l1174z00_1000));
								BgL__ortest_1176z00_1003 =
									BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
									(BgL_arg1696z00_1005);
							}
							if (BgL__ortest_1176z00_1003)
								{	/* Object/method.scm 160 */
									return BgL__ortest_1176z00_1003;
								}
							else
								{	/* Object/method.scm 160 */
									obj_t BgL_arg1695z00_1004;

									BgL_arg1695z00_1004 = CDR(((obj_t) BgL_l1174z00_1000));
									{
										obj_t BgL_l1174z00_1723;

										BgL_l1174z00_1723 = BgL_arg1695z00_1004;
										BgL_l1174z00_1000 = BgL_l1174z00_1723;
										goto BgL_zc3z04anonymousza31693ze3z87_1001;
									}
								}
						}
				}
			else
				{	/* Object/method.scm 160 */
					return ((bool_t) 0);
				}
		}

	}



/* pair->list */
	obj_t BGl_pairzd2ze3listz31zzobject_methodz00(obj_t BgL_pz00_14)
	{
		{	/* Object/method.scm 166 */
			if (PAIRP(BgL_pz00_14))
				{	/* Object/method.scm 168 */
					return
						MAKE_YOUNG_PAIR(CAR(BgL_pz00_14),
						BGl_pairzd2ze3listz31zzobject_methodz00(CDR(BgL_pz00_14)));
				}
			else
				{	/* Object/method.scm 168 */
					if (NULLP(BgL_pz00_14))
						{	/* Object/method.scm 169 */
							return BNIL;
						}
					else
						{	/* Object/method.scm 170 */
							obj_t BgL_list1710z00_1012;

							BgL_list1710z00_1012 = MAKE_YOUNG_PAIR(BgL_pz00_14, BNIL);
							return BgL_list1710z00_1012;
						}
				}
		}

	}



/* mark-method! */
	BGL_EXPORTED_DEF obj_t BGl_markzd2methodz12zc0zzobject_methodz00(obj_t
		BgL_idz00_15)
	{
		{	/* Object/method.scm 180 */
			return (BGl_za2methodsza2z00zzobject_methodz00 =
				MAKE_YOUNG_PAIR(BgL_idz00_15, BGl_za2methodsza2z00zzobject_methodz00),
				BUNSPEC);
		}

	}



/* &mark-method! */
	obj_t BGl_z62markzd2methodz12za2zzobject_methodz00(obj_t BgL_envz00_1288,
		obj_t BgL_idz00_1289)
	{
		{	/* Object/method.scm 180 */
			return BGl_markzd2methodz12zc0zzobject_methodz00(BgL_idz00_1289);
		}

	}



/* local-is-method? */
	BGL_EXPORTED_DEF bool_t
		BGl_localzd2iszd2methodzf3zf3zzobject_methodz00(BgL_localz00_bglt
		BgL_localz00_16)
	{
		{	/* Object/method.scm 186 */
			{	/* Object/method.scm 187 */
				obj_t BgL_arg1711z00_1264;

				BgL_arg1711z00_1264 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_localz00_16)))->BgL_idz00);
				return
					CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1711z00_1264,
						BGl_za2methodsza2z00zzobject_methodz00));
			}
		}

	}



/* &local-is-method? */
	obj_t BGl_z62localzd2iszd2methodzf3z91zzobject_methodz00(obj_t
		BgL_envz00_1290, obj_t BgL_localz00_1291)
	{
		{	/* Object/method.scm 186 */
			return
				BBOOL(BGl_localzd2iszd2methodzf3zf3zzobject_methodz00(
					((BgL_localz00_bglt) BgL_localz00_1291)));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_methodz00()
	{
		{	/* Object/method.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_methodz00()
	{
		{	/* Object/method.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_methodz00()
	{
		{	/* Object/method.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_methodz00()
	{
		{	/* Object/method.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 275867862),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1800z00zzobject_methodz00));
		}

	}

#ifdef __cplusplus
}
#endif
