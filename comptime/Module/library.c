/*===========================================================================*/
/*   (Module/library.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/library.scm) */
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_za2neededzd2modulesza2zd2zzmodule_libraryz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zzmodule_libraryz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzmodule_libraryz00();
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_libraryzd2finaliza7erz75zzmodule_libraryz00();
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_za2jvmzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_libraryz00();
	extern obj_t BGl_za2jvmzd2debugzd2moduleza2z00zzbdb_settingz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_cvarz00zzast_varz00;
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_libraryz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzmodule_libraryz00();
	static obj_t BGl_z62withzd2libraryzd2modulez12z70zzmodule_libraryz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_libraryz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t);
	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_getzd2importedzd2modulesz00zzmodule_impusez00();
	static obj_t BGl_za2withzd2libraryzd2modulesza2z00zzmodule_libraryz00 =
		BUNSPEC;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_settingz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzmodule_libraryz00();
	static obj_t BGl_z62zc3z04anonymousza31196ze3ze5zzmodule_libraryz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_libraryz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_libraryz00();
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_za2keyza2z00zzmodule_libraryz00 = BUNSPEC;
	static obj_t BGl_z62libraryzd2finaliza7erz17zzmodule_libraryz00(obj_t);
	extern obj_t BGl_za2bdbzd2moduleza2zd2zzbdb_settingz00;
	extern obj_t BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	static obj_t BGl_za2withzd2keyza2zd2zzmodule_libraryz00 = BUNSPEC;
	static obj_t __cnst[11];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1343z00zzmodule_libraryz00,
		BgL_bgl_za762za7c3za704anonymo1353za7,
		BGl_z62zc3z04anonymousza31196ze3ze5zzmodule_libraryz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_libraryzd2finaliza7erzd2envza7zzmodule_libraryz00,
		BgL_bgl_za762libraryza7d2fin1354z00,
		BGl_z62libraryzd2finaliza7erz17zzmodule_libraryz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_withzd2libraryzd2modulez12zd2envzc0zzmodule_libraryz00,
		BgL_bgl_za762withza7d2librar1355z00,
		BGl_z62withzd2libraryzd2modulez12z70zzmodule_libraryz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1344z00zzmodule_libraryz00,
		BgL_bgl_string1344za700za7za7m1356za7, "bgl_init_module_debug_library(\"",
		31);
	      DEFINE_STRING(BGl_string1345z00zzmodule_libraryz00,
		BgL_bgl_string1345za700za7za7m1357za7, "\")", 2);
	      DEFINE_STRING(BGl_string1346z00zzmodule_libraryz00,
		BgL_bgl_string1346za700za7za7m1358za7, "module_library", 14);
	      DEFINE_STRING(BGl_string1347z00zzmodule_libraryz00,
		BgL_bgl_string1347za700za7za7m1359za7,
		"@ unit library-modules begin pragma::void module (#unspecified) jvm bdb foreign with-key ",
		89);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2neededzd2modulesza2zd2zzmodule_libraryz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzmodule_libraryz00));
		     ADD_ROOT((void
				*) (&BGl_za2withzd2libraryzd2modulesza2z00zzmodule_libraryz00));
		     ADD_ROOT((void *) (&BGl_za2keyza2z00zzmodule_libraryz00));
		     ADD_ROOT((void *) (&BGl_za2withzd2keyza2zd2zzmodule_libraryz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long
		BgL_checksumz00_851, char *BgL_fromz00_852)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_libraryz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_libraryz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_libraryz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_libraryz00();
					BGl_cnstzd2initzd2zzmodule_libraryz00();
					BGl_importedzd2moduleszd2initz00zzmodule_libraryz00();
					return BGl_toplevelzd2initzd2zzmodule_libraryz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_libraryz00()
	{
		{	/* Module/library.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"module_library");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"module_library");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_libraryz00()
	{
		{	/* Module/library.scm 15 */
			{	/* Module/library.scm 15 */
				obj_t BgL_cportz00_833;

				{	/* Module/library.scm 15 */
					obj_t BgL_stringz00_841;

					BgL_stringz00_841 = BGl_string1347z00zzmodule_libraryz00;
					{	/* Module/library.scm 15 */
						obj_t BgL_startz00_842;

						BgL_startz00_842 = BINT(((long) 0));
						{	/* Module/library.scm 15 */
							obj_t BgL_endz00_843;

							BgL_endz00_843 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_841)));
							{	/* Module/library.scm 15 */

								BgL_cportz00_833 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_841, BgL_startz00_842, BgL_endz00_843);
				}}}}
				{
					long BgL_iz00_834;

					BgL_iz00_834 = ((long) 10);
				BgL_loopz00_835:
					if ((BgL_iz00_834 == ((long) -1)))
						{	/* Module/library.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/library.scm 15 */
							{	/* Module/library.scm 15 */
								obj_t BgL_arg1351z00_837;

								{	/* Module/library.scm 15 */

									{	/* Module/library.scm 15 */
										obj_t BgL_locationz00_839;

										BgL_locationz00_839 = BBOOL(((bool_t) 0));
										{	/* Module/library.scm 15 */

											BgL_arg1351z00_837 =
												BGl_readz00zz__readerz00(BgL_cportz00_833,
												BgL_locationz00_839);
										}
									}
								}
								{	/* Module/library.scm 15 */
									int BgL_tmpz00_879;

									BgL_tmpz00_879 = (int) (BgL_iz00_834);
									CNST_TABLE_SET(BgL_tmpz00_879, BgL_arg1351z00_837);
							}}
							{	/* Module/library.scm 15 */
								int BgL_auxz00_840;

								BgL_auxz00_840 = (int) ((BgL_iz00_834 - ((long) 1)));
								{
									long BgL_iz00_884;

									BgL_iz00_884 = (long) (BgL_auxz00_840);
									BgL_iz00_834 = BgL_iz00_884;
									goto BgL_loopz00_835;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_libraryz00()
	{
		{	/* Module/library.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_libraryz00()
	{
		{	/* Module/library.scm 15 */
			BGl_za2neededzd2modulesza2zd2zzmodule_libraryz00 = BNIL;
			BGl_za2keyza2z00zzmodule_libraryz00 = BUNSPEC;
			BGl_za2withzd2keyza2zd2zzmodule_libraryz00 =
				BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0)));
			return (BGl_za2withzd2libraryzd2modulesza2z00zzmodule_libraryz00 =
				BNIL, BUNSPEC);
		}

	}



/* library-finalizer */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2finaliza7erz75zzmodule_libraryz00()
	{
		{	/* Module/library.scm 31 */
			{	/* Module/library.scm 33 */

				{	/* Module/library.scm 33 */

					BGl_za2keyza2z00zzmodule_libraryz00 =
						BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
				}
			}
			{	/* Module/library.scm 35 */
				obj_t BgL_g1153z00_562;

				BgL_g1153z00_562 = BGl_getzd2importedzd2modulesz00zzmodule_impusez00();
				{
					obj_t BgL_l1149z00_564;

					BgL_l1149z00_564 = BgL_g1153z00_562;
				BgL_zc3z04anonymousza31187ze3z87_565:
					if (PAIRP(BgL_l1149z00_564))
						{	/* Module/library.scm 36 */
							{	/* Module/library.scm 35 */
								obj_t BgL_modulez00_567;

								BgL_modulez00_567 = CAR(BgL_l1149z00_564);
								BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_modulez00_567,
									BGl_za2keyza2z00zzmodule_libraryz00, BTRUE);
							}
							{
								obj_t BgL_l1149z00_895;

								BgL_l1149z00_895 = CDR(BgL_l1149z00_564);
								BgL_l1149z00_564 = BgL_l1149z00_895;
								goto BgL_zc3z04anonymousza31187ze3z87_565;
							}
						}
					else
						{	/* Module/library.scm 36 */
							((bool_t) 1);
						}
				}
			}
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 1)),
				BGl_za2keyza2z00zzmodule_libraryz00, BTRUE);
			BGl_putpropz12z12zz__r4_symbols_6_4z00
				(BGl_za2moduleza2z00zzmodule_modulez00,
				BGl_za2keyza2z00zzmodule_libraryz00, BTRUE);
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_proc1343z00zzmodule_libraryz00, BNIL);
			{	/* Module/library.scm 50 */
				bool_t BgL_test1365z00_901;

				if (
					((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) > ((long) 0)))
					{	/* Module/library.scm 51 */
						obj_t BgL_arg1250z00_609;

						{	/* Module/library.scm 51 */
							obj_t BgL_arg1252z00_610;

							BgL_arg1252z00_610 = BGl_thezd2backendzd2zzbackend_backendz00();
							BgL_arg1250z00_609 =
								(((BgL_backendz00_bglt) COBJECT(
										((BgL_backendz00_bglt) BgL_arg1252z00_610)))->
								BgL_debugzd2supportzd2);
						}
						BgL_test1365z00_901 =
							CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
										(long) 2)), BgL_arg1250z00_609));
					}
				else
					{	/* Module/library.scm 50 */
						BgL_test1365z00_901 = ((bool_t) 0);
					}
				if (BgL_test1365z00_901)
					{
						obj_t BgL_l1154z00_602;

						BgL_l1154z00_602 = BGl_za2bdbzd2moduleza2zd2zzbdb_settingz00;
					BgL_zc3z04anonymousza31244ze3z87_603:
						if (PAIRP(BgL_l1154z00_602))
							{	/* Module/library.scm 52 */
								BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00(CAR
									(BgL_l1154z00_602));
								{
									obj_t BgL_l1154z00_915;

									BgL_l1154z00_915 = CDR(BgL_l1154z00_602);
									BgL_l1154z00_602 = BgL_l1154z00_915;
									goto BgL_zc3z04anonymousza31244ze3z87_603;
								}
							}
						else
							{	/* Module/library.scm 52 */
								((bool_t) 1);
							}
					}
				else
					{	/* Module/library.scm 50 */
						((bool_t) 0);
					}
			}
			{	/* Module/library.scm 53 */
				bool_t BgL_test1372z00_917;

				if (CBOOL(BGl_za2jvmzd2debugza2zd2zzengine_paramz00))
					{	/* Module/library.scm 53 */
						if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
							{	/* Module/library.scm 54 */
								BgL_test1372z00_917 = ((bool_t) 0);
							}
						else
							{	/* Module/library.scm 55 */
								obj_t BgL_arg1268z00_621;

								{	/* Module/library.scm 55 */
									obj_t BgL_arg1270z00_622;

									BgL_arg1270z00_622 =
										BGl_thezd2backendzd2zzbackend_backendz00();
									BgL_arg1268z00_621 =
										(((BgL_backendz00_bglt) COBJECT(
												((BgL_backendz00_bglt) BgL_arg1270z00_622)))->
										BgL_debugzd2supportzd2);
								}
								BgL_test1372z00_917 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(
											((long) 3)), BgL_arg1268z00_621));
					}}
				else
					{	/* Module/library.scm 53 */
						BgL_test1372z00_917 = ((bool_t) 0);
					}
				if (BgL_test1372z00_917)
					{
						obj_t BgL_l1156z00_615;

						BgL_l1156z00_615 =
							BGl_za2jvmzd2debugzd2moduleza2z00zzbdb_settingz00;
					BgL_zc3z04anonymousza31256ze3z87_616:
						if (PAIRP(BgL_l1156z00_615))
							{	/* Module/library.scm 56 */
								BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00(CAR
									(BgL_l1156z00_615));
								{
									obj_t BgL_l1156z00_932;

									BgL_l1156z00_932 = CDR(BgL_l1156z00_615);
									BgL_l1156z00_615 = BgL_l1156z00_932;
									goto BgL_zc3z04anonymousza31256ze3z87_616;
								}
							}
						else
							{	/* Module/library.scm 56 */
								((bool_t) 1);
							}
					}
				else
					{	/* Module/library.scm 53 */
						((bool_t) 0);
					}
			}
			{
				obj_t BgL_l1158z00_624;

				BgL_l1158z00_624 =
					BGl_za2withzd2libraryzd2modulesza2z00zzmodule_libraryz00;
			BgL_zc3z04anonymousza31271ze3z87_625:
				if (PAIRP(BgL_l1158z00_624))
					{	/* Module/library.scm 59 */
						BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00(CAR
							(BgL_l1158z00_624));
						{
							obj_t BgL_l1158z00_938;

							BgL_l1158z00_938 = CDR(BgL_l1158z00_624);
							BgL_l1158z00_624 = BgL_l1158z00_938;
							goto BgL_zc3z04anonymousza31271ze3z87_625;
						}
					}
				else
					{	/* Module/library.scm 59 */
						((bool_t) 1);
					}
			}
			{	/* Module/library.scm 61 */
				obj_t BgL_modulesz00_630;

				BgL_modulesz00_630 = BGl_za2neededzd2modulesza2zd2zzmodule_libraryz00;
				if (NULLP(BgL_modulesz00_630))
					{	/* Module/library.scm 62 */
						return BNIL;
					}
				else
					{	/* Module/library.scm 64 */
						obj_t BgL_g1062z00_632;

						BgL_g1062z00_632 = CNST_TABLE_REF(((long) 4));
						{
							obj_t BgL_modulesz00_634;
							obj_t BgL_initzd2callza2z70_635;

							BgL_modulesz00_634 = BgL_modulesz00_630;
							BgL_initzd2callza2z70_635 = BgL_g1062z00_632;
						BgL_zc3z04anonymousza31276ze3z87_636:
							if (NULLP(BgL_modulesz00_634))
								{	/* Module/library.scm 67 */
									obj_t BgL_bodyz00_638;

									{	/* Module/library.scm 67 */
										bool_t BgL_test1379z00_945;

										if (
											((long) CINT(BGl_za2debugzd2moduleza2zd2zzengine_paramz00)
												> ((long) 0)))
											{	/* Module/library.scm 70 */
												obj_t BgL_arg1291z00_651;

												{	/* Module/library.scm 70 */
													obj_t BgL_arg1292z00_652;

													BgL_arg1292z00_652 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													BgL_arg1291z00_651 =
														(((BgL_backendz00_bglt) COBJECT(
																((BgL_backendz00_bglt) BgL_arg1292z00_652)))->
														BgL_debugzd2supportzd2);
												}
												BgL_test1379z00_945 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 5)), BgL_arg1291z00_651));
											}
										else
											{	/* Module/library.scm 67 */
												BgL_test1379z00_945 = ((bool_t) 0);
											}
										if (BgL_test1379z00_945)
											{	/* Module/library.scm 75 */
												obj_t BgL_arg1284z00_643;

												{	/* Module/library.scm 75 */
													obj_t BgL_arg1285z00_644;

													{	/* Module/library.scm 75 */
														obj_t BgL_arg1286z00_645;
														obj_t BgL_arg1287z00_646;

														{	/* Module/library.scm 75 */
															obj_t BgL_arg1288z00_647;

															{	/* Module/library.scm 75 */
																obj_t BgL_arg1289z00_648;

																{	/* Module/library.scm 75 */
																	obj_t BgL_arg1290z00_649;

																	{	/* Module/library.scm 75 */
																		obj_t BgL_res1341z00_812;

																		{	/* Module/library.scm 75 */
																			obj_t BgL_symbolz00_810;

																			BgL_symbolz00_810 =
																				BGl_za2moduleza2z00zzmodule_modulez00;
																			{	/* Module/library.scm 75 */
																				obj_t BgL_arg1466z00_811;

																				BgL_arg1466z00_811 =
																					SYMBOL_TO_STRING(BgL_symbolz00_810);
																				BgL_res1341z00_812 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg1466z00_811);
																			}
																		}
																		BgL_arg1290z00_649 = BgL_res1341z00_812;
																	}
																	BgL_arg1289z00_648 =
																		string_append_3
																		(BGl_string1344z00zzmodule_libraryz00,
																		BgL_arg1290z00_649,
																		BGl_string1345z00zzmodule_libraryz00);
																}
																BgL_arg1288z00_647 =
																	MAKE_YOUNG_PAIR(BgL_arg1289z00_648, BNIL);
															}
															BgL_arg1286z00_645 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																BgL_arg1288z00_647);
														}
														BgL_arg1287z00_646 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_initzd2callza2z70_635, BNIL);
														BgL_arg1285z00_644 =
															MAKE_YOUNG_PAIR(BgL_arg1286z00_645,
															BgL_arg1287z00_646);
													}
													BgL_arg1284z00_643 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
														BgL_arg1285z00_644);
												}
												BgL_bodyz00_638 =
													MAKE_YOUNG_PAIR(BgL_arg1284z00_643, BNIL);
											}
										else
											{	/* Module/library.scm 67 */
												BgL_bodyz00_638 = BgL_initzd2callza2z70_635;
											}
									}
									{	/* Module/library.scm 79 */
										obj_t BgL_idz00_813;

										BgL_idz00_813 = CNST_TABLE_REF(((long) 8));
										{	/* Module/library.scm 79 */
											obj_t BgL_newz00_814;

											BgL_newz00_814 =
												create_struct(CNST_TABLE_REF(((long) 9)),
												(int) (((long) 5)));
											{	/* Module/library.scm 79 */
												int BgL_tmpz00_970;

												BgL_tmpz00_970 = (int) (((long) 4));
												STRUCT_SET(BgL_newz00_814, BgL_tmpz00_970, BFALSE);
											}
											{	/* Module/library.scm 79 */
												int BgL_tmpz00_973;

												BgL_tmpz00_973 = (int) (((long) 3));
												STRUCT_SET(BgL_newz00_814, BgL_tmpz00_973, BTRUE);
											}
											{	/* Module/library.scm 79 */
												int BgL_tmpz00_976;

												BgL_tmpz00_976 = (int) (((long) 2));
												STRUCT_SET(BgL_newz00_814, BgL_tmpz00_976,
													BgL_bodyz00_638);
											}
											{	/* Module/library.scm 79 */
												obj_t BgL_auxz00_981;
												int BgL_tmpz00_979;

												BgL_auxz00_981 = BINT(((long) 2));
												BgL_tmpz00_979 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_814, BgL_tmpz00_979,
													BgL_auxz00_981);
											}
											{	/* Module/library.scm 79 */
												int BgL_tmpz00_984;

												BgL_tmpz00_984 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_814, BgL_tmpz00_984,
													BgL_idz00_813);
											}
											return BgL_newz00_814;
										}
									}
								}
							else
								{	/* Module/library.scm 80 */
									obj_t BgL_idz00_653;

									BgL_idz00_653 = CAR(((obj_t) BgL_modulesz00_634));
									{	/* Module/library.scm 80 */
										obj_t BgL_initzd2funzd2idz00_654;

										BgL_initzd2funzd2idz00_654 =
											BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
											(BgL_idz00_653);
										{	/* Module/library.scm 81 */

											{	/* Module/library.scm 82 */
												obj_t BgL_arg1295z00_655;
												obj_t BgL_arg1296z00_656;

												BgL_arg1295z00_655 = CDR(((obj_t) BgL_modulesz00_634));
												{	/* Module/library.scm 83 */
													obj_t BgL_arg1297z00_657;

													{	/* Module/library.scm 83 */
														obj_t BgL_arg1298z00_658;
														obj_t BgL_arg1299z00_659;

														{	/* Module/library.scm 83 */
															obj_t BgL_arg1300z00_660;

															{	/* Module/library.scm 83 */
																obj_t BgL_arg1301z00_661;

																BgL_arg1301z00_661 =
																	MAKE_YOUNG_PAIR(BgL_idz00_653, BNIL);
																BgL_arg1300z00_660 =
																	MAKE_YOUNG_PAIR(BgL_initzd2funzd2idz00_654,
																	BgL_arg1301z00_661);
															}
															BgL_arg1298z00_658 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
																BgL_arg1300z00_660);
														}
														{	/* Module/library.scm 87 */
															obj_t BgL_arg1303z00_662;

															{	/* Module/library.scm 87 */
																obj_t BgL_arg1304z00_663;

																{	/* Module/library.scm 87 */
																	obj_t BgL_res1342z00_824;

																	{	/* Module/library.scm 87 */
																		obj_t BgL_symbolz00_822;

																		BgL_symbolz00_822 =
																			BGl_za2moduleza2z00zzmodule_modulez00;
																		{	/* Module/library.scm 87 */
																			obj_t BgL_arg1466z00_823;

																			BgL_arg1466z00_823 =
																				SYMBOL_TO_STRING(BgL_symbolz00_822);
																			BgL_res1342z00_824 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg1466z00_823);
																	}}
																	BgL_arg1304z00_663 = BgL_res1342z00_824;
																}
																BgL_arg1303z00_662 =
																	MAKE_YOUNG_PAIR(BgL_arg1304z00_663, BNIL);
															}
															BgL_arg1299z00_659 =
																MAKE_YOUNG_PAIR(BINT(((long) 0)),
																BgL_arg1303z00_662);
														}
														BgL_arg1297z00_657 =
															MAKE_YOUNG_PAIR(BgL_arg1298z00_658,
															BgL_arg1299z00_659);
													}
													BgL_arg1296z00_656 =
														MAKE_YOUNG_PAIR(BgL_arg1297z00_657,
														BgL_initzd2callza2z70_635);
												}
												{
													obj_t BgL_initzd2callza2z70_1004;
													obj_t BgL_modulesz00_1003;

													BgL_modulesz00_1003 = BgL_arg1295z00_655;
													BgL_initzd2callza2z70_1004 = BgL_arg1296z00_656;
													BgL_initzd2callza2z70_635 =
														BgL_initzd2callza2z70_1004;
													BgL_modulesz00_634 = BgL_modulesz00_1003;
													goto BgL_zc3z04anonymousza31276ze3z87_636;
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



/* &library-finalizer */
	obj_t BGl_z62libraryzd2finaliza7erz17zzmodule_libraryz00(obj_t BgL_envz00_827)
	{
		{	/* Module/library.scm 31 */
			return BGl_libraryzd2finaliza7erz75zzmodule_libraryz00();
		}

	}



/* &<@anonymous:1196> */
	obj_t BGl_z62zc3z04anonymousza31196ze3ze5zzmodule_libraryz00(obj_t
		BgL_envz00_828, obj_t BgL_globalz00_829)
	{
		{	/* Module/library.scm 42 */
			{	/* Module/library.scm 45 */
				bool_t BgL_test1389z00_1006;

				if (
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_globalz00_829))))->
							BgL_occurrencez00) > ((long) 0)))
					{	/* Module/library.scm 45 */
						if (CBOOL(
								(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_globalz00_829)))->
									BgL_libraryz00)))
							{	/* Module/library.scm 47 */
								bool_t BgL_test1392z00_1016;

								{	/* Module/library.scm 47 */
									bool_t BgL_test1393z00_1017;

									{	/* Module/library.scm 47 */
										BgL_valuez00_bglt BgL_arg1229z00_846;

										BgL_arg1229z00_846 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_globalz00_829))))->
											BgL_valuez00);
										{	/* Module/library.scm 47 */
											bool_t BgL_res1329z00_847;

											BgL_res1329z00_847 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1229z00_846), BGl_cfunz00zzast_varz00);
											BgL_test1393z00_1017 = BgL_res1329z00_847;
										}
									}
									if (BgL_test1393z00_1017)
										{	/* Module/library.scm 47 */
											BgL_test1392z00_1016 = ((bool_t) 1);
										}
									else
										{	/* Module/library.scm 47 */
											BgL_valuez00_bglt BgL_arg1227z00_848;

											BgL_arg1227z00_848 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_globalz00_829))))->
												BgL_valuez00);
											{	/* Module/library.scm 47 */
												bool_t BgL_res1330z00_849;

												BgL_res1330z00_849 =
													BGl_isazf3zf3zz__objectz00(
													((obj_t) BgL_arg1227z00_848),
													BGl_cvarz00zzast_varz00);
												BgL_test1392z00_1016 = BgL_res1330z00_849;
											}
										}
								}
								if (BgL_test1392z00_1016)
									{	/* Module/library.scm 47 */
										BgL_test1389z00_1006 = ((bool_t) 0);
									}
								else
									{	/* Module/library.scm 47 */
										BgL_test1389z00_1006 = ((bool_t) 1);
									}
							}
						else
							{	/* Module/library.scm 45 */
								BgL_test1389z00_1006 = ((bool_t) 0);
							}
					}
				else
					{	/* Module/library.scm 45 */
						BgL_test1389z00_1006 = ((bool_t) 0);
					}
				if (BgL_test1389z00_1006)
					{	/* Module/library.scm 48 */
						obj_t BgL_arg1225z00_850;

						BgL_arg1225z00_850 =
							(((BgL_globalz00_bglt) COBJECT(
									((BgL_globalz00_bglt) BgL_globalz00_829)))->BgL_modulez00);
						return
							BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00
							(BgL_arg1225z00_850);
					}
				else
					{	/* Module/library.scm 45 */
						return BFALSE;
					}
			}
		}

	}



/* need-library-module! */
	obj_t BGl_needzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t
		BgL_modulez00_25)
	{
		{	/* Module/library.scm 103 */
			if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_modulez00_25,
						BGl_za2keyza2z00zzmodule_libraryz00)))
				{	/* Module/library.scm 104 */
					return BFALSE;
				}
			else
				{	/* Module/library.scm 104 */
					BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_modulez00_25,
						BGl_za2keyza2z00zzmodule_libraryz00, BTRUE);
					return (BGl_za2neededzd2modulesza2zd2zzmodule_libraryz00 =
						MAKE_YOUNG_PAIR(BgL_modulez00_25,
							BGl_za2neededzd2modulesza2zd2zzmodule_libraryz00), BUNSPEC);
				}
		}

	}



/* with-library-module! */
	BGL_EXPORTED_DEF obj_t
		BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00(obj_t BgL_modulez00_26)
	{
		{	/* Module/library.scm 122 */
			if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_modulez00_26,
						BGl_za2withzd2keyza2zd2zzmodule_libraryz00)))
				{	/* Module/library.scm 123 */
					return BFALSE;
				}
			else
				{	/* Module/library.scm 123 */
					BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_modulez00_26,
						BGl_za2withzd2keyza2zd2zzmodule_libraryz00, BTRUE);
					return (BGl_za2withzd2libraryzd2modulesza2z00zzmodule_libraryz00 =
						MAKE_YOUNG_PAIR(BgL_modulez00_26,
							BGl_za2withzd2libraryzd2modulesza2z00zzmodule_libraryz00),
						BUNSPEC);
				}
		}

	}



/* &with-library-module! */
	obj_t BGl_z62withzd2libraryzd2modulez12z70zzmodule_libraryz00(obj_t
		BgL_envz00_830, obj_t BgL_modulez00_831)
	{
		{	/* Module/library.scm 122 */
			return
				BGl_withzd2libraryzd2modulez12z12zzmodule_libraryz00(BgL_modulez00_831);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_libraryz00()
	{
		{	/* Module/library.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_libraryz00()
	{
		{	/* Module/library.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_libraryz00()
	{
		{	/* Module/library.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_libraryz00()
	{
		{	/* Module/library.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1346z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1346z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1346z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1346z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1346z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 478324196),
				BSTRING_TO_STRING(BGl_string1346z00zzmodule_libraryz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1346z00zzmodule_libraryz00));
			return
				BGl_modulezd2initializa7ationz75zzbdb_settingz00(((long) 444161933),
				BSTRING_TO_STRING(BGl_string1346z00zzmodule_libraryz00));
		}

	}

#ifdef __cplusplus
}
#endif
