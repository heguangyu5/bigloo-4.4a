/*===========================================================================*/
/*   (Module/main.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/main.scm) */
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


	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_objectzd2initzd2zzmodule_mainz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzmodule_mainz00();
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_z62mainzd2producerzb0zzmodule_mainz00(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	static obj_t BGl_duplicatezd2mainzd2errorz00zzmodule_mainz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_mainz00();
	static obj_t BGl_z62makezd2mainzd2compilerz62zzmodule_mainz00(obj_t);
	extern obj_t BGl_za2mainza2z00zzmodule_modulez00;
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_mainz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmodule_mainz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2mainzd2compilerz00zzmodule_mainz00();
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62mainzd2consumerzb0zzmodule_mainz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31157ze3ze5zzmodule_mainz00(obj_t);
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmodule_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzmodule_mainz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_mainz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_mainz00();
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static bool_t BGl_correctzd2mainzf3z21zzmodule_mainz00(BgL_globalz00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[7];


	   
		 
		DEFINE_STRING(BGl_string1277z00zzmodule_mainz00,
		BgL_bgl_string1277za700za7za7m1286za7,
		"Illegal declaration of main function", 36);
	      DEFINE_STRING(BGl_string1278z00zzmodule_mainz00,
		BgL_bgl_string1278za700za7za7m1287za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1279z00zzmodule_mainz00,
		BgL_bgl_string1279za700za7za7m1288za7, "Illegal \"main\" clause", 21);
	      DEFINE_STRING(BGl_string1280z00zzmodule_mainz00,
		BgL_bgl_string1280za700za7za7m1289za7, "Duplicated main clause", 22);
	      DEFINE_STRING(BGl_string1281z00zzmodule_mainz00,
		BgL_bgl_string1281za700za7za7m1290za7, "module_main", 11);
	      DEFINE_STRING(BGl_string1282z00zzmodule_mainz00,
		BgL_bgl_string1282za700za7za7m1291za7,
		"argv::pair export argv::obj bdb imported void main ", 51);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1276z00zzmodule_mainz00,
		BgL_bgl_za762za7c3za704anonymo1292za7,
		BGl_z62zc3z04anonymousza31157ze3ze5zzmodule_mainz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2mainzd2compilerzd2envzd2zzmodule_mainz00,
		BgL_bgl_za762makeza7d2mainza7d1293za7,
		BGl_z62makezd2mainzd2compilerz62zzmodule_mainz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_mainzd2consumerzd2envz00zzmodule_mainz00,
		BgL_bgl_za762mainza7d2consum1294z00,
		BGl_z62mainzd2consumerzb0zzmodule_mainz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_mainzd2producerzd2envz00zzmodule_mainz00,
		BgL_bgl_za762mainza7d2produc1295z00,
		BGl_z62mainzd2producerzb0zzmodule_mainz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzmodule_mainz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_mainz00(long
		BgL_checksumz00_751, char *BgL_fromz00_752)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_mainz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_mainz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_mainz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_mainz00();
					BGl_cnstzd2initzd2zzmodule_mainz00();
					BGl_importedzd2moduleszd2initz00zzmodule_mainz00();
					return BGl_methodzd2initzd2zzmodule_mainz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_mainz00()
	{
		{	/* Module/main.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_main");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "module_main");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_main");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_main");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_main");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_main");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"module_main");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_mainz00()
	{
		{	/* Module/main.scm 15 */
			{	/* Module/main.scm 15 */
				obj_t BgL_cportz00_716;

				{	/* Module/main.scm 15 */
					obj_t BgL_stringz00_724;

					BgL_stringz00_724 = BGl_string1282z00zzmodule_mainz00;
					{	/* Module/main.scm 15 */
						obj_t BgL_startz00_725;

						BgL_startz00_725 = BINT(((long) 0));
						{	/* Module/main.scm 15 */
							obj_t BgL_endz00_726;

							BgL_endz00_726 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_724)));
							{	/* Module/main.scm 15 */

								BgL_cportz00_716 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_724, BgL_startz00_725, BgL_endz00_726);
				}}}}
				{
					long BgL_iz00_717;

					BgL_iz00_717 = ((long) 6);
				BgL_loopz00_718:
					if ((BgL_iz00_717 == ((long) -1)))
						{	/* Module/main.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/main.scm 15 */
							{	/* Module/main.scm 15 */
								obj_t BgL_arg1284z00_720;

								{	/* Module/main.scm 15 */

									{	/* Module/main.scm 15 */
										obj_t BgL_locationz00_722;

										BgL_locationz00_722 = BBOOL(((bool_t) 0));
										{	/* Module/main.scm 15 */

											BgL_arg1284z00_720 =
												BGl_readz00zz__readerz00(BgL_cportz00_716,
												BgL_locationz00_722);
										}
									}
								}
								{	/* Module/main.scm 15 */
									int BgL_tmpz00_777;

									BgL_tmpz00_777 = (int) (BgL_iz00_717);
									CNST_TABLE_SET(BgL_tmpz00_777, BgL_arg1284z00_720);
							}}
							{	/* Module/main.scm 15 */
								int BgL_auxz00_723;

								BgL_auxz00_723 = (int) ((BgL_iz00_717 - ((long) 1)));
								{
									long BgL_iz00_782;

									BgL_iz00_782 = (long) (BgL_auxz00_723);
									BgL_iz00_717 = BgL_iz00_782;
									goto BgL_loopz00_718;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_mainz00()
	{
		{	/* Module/main.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* make-main-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2mainzd2compilerz00zzmodule_mainz00()
	{
		{	/* Module/main.scm 33 */
			{	/* Module/main.scm 34 */
				BgL_ccompz00_bglt BgL_new1062z00_528;

				{	/* Module/main.scm 35 */
					BgL_ccompz00_bglt BgL_new1061z00_530;

					BgL_new1061z00_530 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/main.scm 35 */
						long BgL_arg1165z00_531;

						{	/* Module/main.scm 35 */
							long BgL_res1264z00_678;

							BgL_res1264z00_678 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1165z00_531 = BgL_res1264z00_678;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1061z00_530), BgL_arg1165z00_531);
					}
					BgL_new1062z00_528 = BgL_new1061z00_530;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1062z00_528))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1062z00_528))->BgL_producerz00) =
					((obj_t) BGl_mainzd2producerzd2envz00zzmodule_mainz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1062z00_528))->BgL_consumerz00) =
					((obj_t) BGl_mainzd2consumerzd2envz00zzmodule_mainz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1062z00_528))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_proc1276z00zzmodule_mainz00), BUNSPEC);
				return ((obj_t) BgL_new1062z00_528);
			}
		}

	}



/* &make-main-compiler */
	obj_t BGl_z62makezd2mainzd2compilerz62zzmodule_mainz00(obj_t BgL_envz00_709)
	{
		{	/* Module/main.scm 33 */
			return BGl_makezd2mainzd2compilerz00zzmodule_mainz00();
		}

	}



/* &<@anonymous:1157> */
	obj_t BGl_z62zc3z04anonymousza31157ze3ze5zzmodule_mainz00(obj_t
		BgL_envz00_710)
	{
		{	/* Module/module.scm 55 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* correct-main? */
	bool_t BGl_correctzd2mainzf3z21zzmodule_mainz00(BgL_globalz00_bglt
		BgL_globalz00_3)
	{
		{	/* Module/main.scm 45 */
			{	/* Module/main.scm 46 */
				BgL_valuez00_bglt BgL_sfunz00_532;

				BgL_sfunz00_532 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_globalz00_3)))->BgL_valuez00);
				{	/* Module/main.scm 47 */
					bool_t BgL_test1298z00_799;

					{	/* Module/main.scm 47 */
						bool_t BgL_res1265z00_682;

						BgL_res1265z00_682 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_sfunz00_532), BGl_sfunz00zzast_varz00);
						BgL_test1298z00_799 = BgL_res1265z00_682;
					}
					if (BgL_test1298z00_799)
						{	/* Module/main.scm 47 */
							if (
								((((BgL_funz00_bglt) COBJECT(
												((BgL_funz00_bglt)
													((BgL_sfunz00_bglt) BgL_sfunz00_532))))->
										BgL_arityz00) == ((long) 1)))
								{	/* Module/main.scm 49 */
									obj_t BgL_argsz00_535;

									{	/* Module/main.scm 49 */
										obj_t BgL_pairz00_687;

										BgL_pairz00_687 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_sfunz00_532)))->BgL_argsz00);
										BgL_argsz00_535 = CAR(BgL_pairz00_687);
									}
									{	/* Module/main.scm 49 */
										BgL_typez00_bglt BgL_typez00_536;

										BgL_typez00_536 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_argsz00_535))))->
											BgL_typez00);
										{	/* Module/main.scm 50 */

											{	/* Module/main.scm 51 */
												bool_t BgL__ortest_1065z00_537;

												BgL__ortest_1065z00_537 =
													(
													((obj_t) BgL_typez00_536) ==
													BGl_za2objza2z00zztype_cachez00);
												if (BgL__ortest_1065z00_537)
													{	/* Module/main.scm 51 */
														return BgL__ortest_1065z00_537;
													}
												else
													{	/* Module/main.scm 51 */
														return
															(
															((obj_t) BgL_typez00_536) ==
															BGl_za2pairza2z00zztype_cachez00);
													}
											}
										}
									}
								}
							else
								{	/* Module/main.scm 48 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Module/main.scm 47 */
							return ((bool_t) 0);
						}
				}
			}
		}

	}



/* &main-producer */
	obj_t BGl_z62mainzd2producerzb0zzmodule_mainz00(obj_t BgL_envz00_711,
		obj_t BgL_clausez00_712)
	{
		{	/* Module/main.scm 56 */
			{	/* Module/main.scm 57 */
				bool_t BgL_test1301z00_818;

				if ((BGl_za2mainza2z00zzmodule_modulez00 == CNST_TABLE_REF(((long) 2))))
					{	/* Module/main.scm 57 */
						BgL_test1301z00_818 = ((bool_t) 1);
					}
				else
					{	/* Module/main.scm 57 */
						bool_t BgL_res1267z00_729;

						{	/* Module/main.scm 57 */
							obj_t BgL_objz00_730;

							BgL_objz00_730 = BGl_za2mainza2z00zzmodule_modulez00;
							BgL_res1267z00_729 =
								BGl_isazf3zf3zz__objectz00(BgL_objz00_730,
								BGl_globalz00zzast_varz00);
						}
						BgL_test1301z00_818 = BgL_res1267z00_729;
					}
				if (BgL_test1301z00_818)
					{	/* Module/main.scm 57 */
						return
							BGl_duplicatezd2mainzd2errorz00zzmodule_mainz00
							(BgL_clausez00_712);
					}
				else
					{
						obj_t BgL_mainz00_733;

						if (PAIRP(BgL_clausez00_712))
							{	/* Module/main.scm 59 */
								obj_t BgL_cdrzd2107zd2_747;

								BgL_cdrzd2107zd2_747 = CDR(BgL_clausez00_712);
								if (PAIRP(BgL_cdrzd2107zd2_747))
									{	/* Module/main.scm 59 */
										obj_t BgL_carzd2109zd2_748;

										BgL_carzd2109zd2_748 = CAR(BgL_cdrzd2107zd2_747);
										if (SYMBOLP(BgL_carzd2109zd2_748))
											{	/* Module/main.scm 59 */
												if (NULLP(CDR(BgL_cdrzd2107zd2_747)))
													{	/* Module/main.scm 59 */
														BgL_mainz00_733 = BgL_carzd2109zd2_748;
														{	/* Module/main.scm 61 */
															obj_t BgL_globalz00_734;

															BgL_globalz00_734 =
																BGl_findzd2globalzf2modulez20zzast_envz00
																(BgL_mainz00_733,
																BGl_za2moduleza2z00zzmodule_modulez00);
															if (BGl_isazf3zf3zz__objectz00(BgL_globalz00_734,
																	BGl_globalz00zzast_varz00))
																{	/* Module/main.scm 62 */
																	if (BGl_correctzd2mainzf3z21zzmodule_mainz00(
																			((BgL_globalz00_bglt) BgL_globalz00_734)))
																		{	/* Module/main.scm 63 */
																			return BFALSE;
																		}
																	else
																		{	/* Module/main.scm 64 */
																			obj_t BgL_list1179z00_735;

																			BgL_list1179z00_735 =
																				MAKE_YOUNG_PAIR(BNIL, BNIL);
																			return
																				BGl_userzd2errorzd2zztools_errorz00
																				(BGl_za2moduleza2z00zzmodule_modulez00,
																				BGl_string1277z00zzmodule_mainz00,
																				BgL_mainz00_733, BgL_list1179z00_735);
																		}
																}
															else
																{	/* Module/main.scm 62 */
																	{	/* Module/main.scm 67 */
																		bool_t BgL_test1309z00_843;

																		if (
																			((long)
																				CINT
																				(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
																				> ((long) 0)))
																			{	/* Module/main.scm 69 */
																				obj_t BgL_arg1225z00_736;

																				{	/* Module/main.scm 69 */
																					obj_t BgL_arg1227z00_737;

																					BgL_arg1227z00_737 =
																						BGl_thezd2backendzd2zzbackend_backendz00
																						();
																					BgL_arg1225z00_736 =
																						(((BgL_backendz00_bglt)
																							COBJECT(((BgL_backendz00_bglt)
																									BgL_arg1227z00_737)))->
																						BgL_debugzd2supportzd2);
																				}
																				BgL_test1309z00_843 =
																					CBOOL
																					(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 3)),
																						BgL_arg1225z00_736));
																			}
																		else
																			{	/* Module/main.scm 67 */
																				BgL_test1309z00_843 = ((bool_t) 0);
																			}
																		if (BgL_test1309z00_843)
																			{	/* Module/main.scm 70 */
																				obj_t BgL_arg1194z00_738;

																				{	/* Module/main.scm 70 */
																					obj_t BgL_arg1197z00_739;

																					{	/* Module/main.scm 70 */
																						obj_t BgL_arg1201z00_740;

																						{	/* Module/main.scm 70 */
																							obj_t BgL_arg1208z00_741;

																							BgL_arg1208z00_741 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 4)), BNIL);
																							BgL_arg1201z00_740 =
																								MAKE_YOUNG_PAIR(BgL_mainz00_733,
																								BgL_arg1208z00_741);
																						}
																						BgL_arg1197z00_739 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1201z00_740, BNIL);
																					}
																					BgL_arg1194z00_738 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 5)), BgL_arg1197z00_739);
																				}
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(BgL_arg1194z00_738);
																			}
																		else
																			{	/* Module/main.scm 71 */
																				obj_t BgL_arg1211z00_742;

																				{	/* Module/main.scm 71 */
																					obj_t BgL_arg1216z00_743;

																					{	/* Module/main.scm 71 */
																						obj_t BgL_arg1221z00_744;

																						{	/* Module/main.scm 71 */
																							obj_t BgL_arg1223z00_745;

																							BgL_arg1223z00_745 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 6)), BNIL);
																							BgL_arg1221z00_744 =
																								MAKE_YOUNG_PAIR(BgL_mainz00_733,
																								BgL_arg1223z00_745);
																						}
																						BgL_arg1216z00_743 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1221z00_744, BNIL);
																					}
																					BgL_arg1211z00_742 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 5)), BgL_arg1216z00_743);
																				}
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(BgL_arg1211z00_742);
																	}}
																	return (BGl_za2mainza2z00zzmodule_modulez00 =
																		BGl_findzd2globalzf2modulez20zzast_envz00
																		(BgL_mainz00_733,
																			BGl_za2moduleza2z00zzmodule_modulez00),
																		BUNSPEC);
																}
														}
													}
												else
													{	/* Module/main.scm 59 */
													BgL_tagzd2102zd2_732:
														{	/* Module/main.scm 74 */
															obj_t BgL_list1228z00_746;

															BgL_list1228z00_746 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BGl_string1278z00zzmodule_mainz00,
																BGl_string1279z00zzmodule_mainz00,
																BgL_clausez00_712, BgL_list1228z00_746);
														}
													}
											}
										else
											{	/* Module/main.scm 59 */
												goto BgL_tagzd2102zd2_732;
											}
									}
								else
									{	/* Module/main.scm 59 */
										goto BgL_tagzd2102zd2_732;
									}
							}
						else
							{	/* Module/main.scm 59 */
								goto BgL_tagzd2102zd2_732;
							}
					}
			}
		}

	}



/* &main-consumer */
	obj_t BGl_z62mainzd2consumerzb0zzmodule_mainz00(obj_t BgL_envz00_713,
		obj_t BgL_modulez00_714, obj_t BgL_clausez00_715)
	{
		{	/* Module/main.scm 79 */
			{	/* Module/main.scm 80 */
				bool_t BgL_test1311z00_870;

				{	/* Module/main.scm 80 */
					bool_t BgL_res1275z00_749;

					{	/* Module/main.scm 80 */
						obj_t BgL_objz00_750;

						BgL_objz00_750 = BGl_za2mainza2z00zzmodule_modulez00;
						BgL_res1275z00_749 =
							BGl_isazf3zf3zz__objectz00(BgL_objz00_750,
							BGl_globalz00zzast_varz00);
					}
					BgL_test1311z00_870 = BgL_res1275z00_749;
				}
				if (BgL_test1311z00_870)
					{	/* Module/main.scm 80 */
						BGl_duplicatezd2mainzd2errorz00zzmodule_mainz00(BgL_clausez00_715);
					}
				else
					{	/* Module/main.scm 80 */
						BGl_za2mainza2z00zzmodule_modulez00 = CNST_TABLE_REF(((long) 2));
			}}
			return BNIL;
		}

	}



/* duplicate-main-error */
	obj_t BGl_duplicatezd2mainzd2errorz00zzmodule_mainz00(obj_t BgL_clausez00_7)
	{
		{	/* Module/main.scm 88 */
			{	/* Module/main.scm 89 */
				obj_t BgL_list1230z00_576;

				BgL_list1230z00_576 = MAKE_YOUNG_PAIR(BNIL, BNIL);
				return
					BGl_userzd2errorzd2zztools_errorz00(BGl_string1278z00zzmodule_mainz00,
					BGl_string1280z00zzmodule_mainz00, BgL_clausez00_7,
					BgL_list1230z00_576);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_mainz00()
	{
		{	/* Module/main.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_mainz00()
	{
		{	/* Module/main.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_mainz00()
	{
		{	/* Module/main.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_mainz00()
	{
		{	/* Module/main.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1281z00zzmodule_mainz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1281z00zzmodule_mainz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1281z00zzmodule_mainz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1281z00zzmodule_mainz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1281z00zzmodule_mainz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1281z00zzmodule_mainz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1281z00zzmodule_mainz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1281z00zzmodule_mainz00));
		}

	}

#ifdef __cplusplus
}
#endif
