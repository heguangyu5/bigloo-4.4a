/*===========================================================================*/
/*   (Module/alibrary.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/alibrary.scm) */
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


	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	static obj_t BGl_z62zc3z04anonymousza31230ze3ze5zzmodule_alibraryz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_alibraryz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzmodule_alibraryz00();
	BGL_IMPORT obj_t BGl_libraryzd2infozd2zz__libraryz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31252ze3ze5zzmodule_alibraryz00(obj_t,
		obj_t);
	static obj_t BGl_registerzd2libraryzd2initz12z12zzmodule_alibraryz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2alibraryzd2compilerz00zzmodule_alibraryz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	extern obj_t BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzmodule_alibraryz00();
	static obj_t BGl_z62makezd2alibraryzd2compilerz62zzmodule_alibraryz00(obj_t);
	BGL_IMPORT obj_t BGl_definezd2primopz12zc0zz__evenvz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	static obj_t BGl_z62getzd2alibraryzd2initsz62zzmodule_alibraryz00(obj_t);
	static obj_t BGl_z62alibraryzd2producerzb0zzmodule_alibraryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_usezd2libraryz12zc0zzmodule_alibraryz00(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62loadzd2libraryzd2initz62zzmodule_alibraryz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_alibraryz00 = BUNSPEC;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_toplevelzd2initzd2zzmodule_alibraryz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_alibraryz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern obj_t BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
	static obj_t BGl_evalzd2initzd2zzmodule_alibraryz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2alibraryzd2initsz00zzmodule_alibraryz00();
	static obj_t BGl_z62usezd2libraryz12za2zzmodule_alibraryz00(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31229ze3ze5zzmodule_alibraryz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evenvz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_za2libraryzd2initza2zd2zzmodule_alibraryz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
	static obj_t BGl_cnstzd2initzd2zzmodule_alibraryz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_alibraryz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_alibraryz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t __cnst[6];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1327z00zzmodule_alibraryz00,
		BgL_bgl_za762za7c3za704anonymo1346za7,
		BGl_z62zc3z04anonymousza31229ze3ze5zzmodule_alibraryz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1328z00zzmodule_alibraryz00,
		BgL_bgl_za762za7c3za704anonymo1347za7,
		BGl_z62zc3z04anonymousza31230ze3ze5zzmodule_alibraryz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1332z00zzmodule_alibraryz00,
		BgL_bgl_za762za7c3za704anonymo1348za7,
		BGl_z62zc3z04anonymousza31252ze3ze5zzmodule_alibraryz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2alibraryzd2compilerzd2envzd2zzmodule_alibraryz00,
		BgL_bgl_za762makeza7d2alibra1349z00,
		BGl_z62makezd2alibraryzd2compilerz62zzmodule_alibraryz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_loadzd2libraryzd2initzd2envzd2zzmodule_alibraryz00,
		BgL_bgl_za762loadza7d2librar1350z00,
		BGl_z62loadzd2libraryzd2initz62zzmodule_alibraryz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1324z00zzmodule_alibraryz00,
		BgL_bgl_string1324za700za7za7m1351za7, "]", 1);
	      DEFINE_STRING(BGl_string1325z00zzmodule_alibraryz00,
		BgL_bgl_string1325za700za7za7m1352za7, "      [reading ", 15);
	      DEFINE_STRING(BGl_string1326z00zzmodule_alibraryz00,
		BgL_bgl_string1326za700za7za7m1353za7, ".init", 5);
	      DEFINE_STRING(BGl_string1329z00zzmodule_alibraryz00,
		BgL_bgl_string1329za700za7za7m1354za7, "Illegal prototype", 17);
	      DEFINE_STRING(BGl_string1330z00zzmodule_alibraryz00,
		BgL_bgl_string1330za700za7za7m1355za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1331z00zzmodule_alibraryz00,
		BgL_bgl_string1331za700za7za7m1356za7, "Illegal `library' clause", 24);
	      DEFINE_STRING(BGl_string1333z00zzmodule_alibraryz00,
		BgL_bgl_string1333za700za7za7m1357za7, "~a()", 4);
	      DEFINE_STRING(BGl_string1334z00zzmodule_alibraryz00,
		BgL_bgl_string1334za700za7za7m1358za7, "-", 1);
	      DEFINE_STRING(BGl_string1335z00zzmodule_alibraryz00,
		BgL_bgl_string1335za700za7za7m1359za7, "Cannot find library init module",
		31);
	      DEFINE_STRING(BGl_string1336z00zzmodule_alibraryz00,
		BgL_bgl_string1336za700za7za7m1360za7, "module_alibrary", 15);
	      DEFINE_STRING(BGl_string1337z00zzmodule_alibraryz00,
		BgL_bgl_string1337za700za7za7m1361za7,
		"use-library! begin module-initialization pragma void library ", 61);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2alibraryzd2initszd2envzd2zzmodule_alibraryz00,
		BgL_bgl_za762getza7d2alibrar1362z00,
		BGl_z62getzd2alibraryzd2initsz62zzmodule_alibraryz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_alibraryzd2producerzd2envz00zzmodule_alibraryz00,
		BgL_bgl_za762alibraryza7d2pr1363z00,
		BGl_z62alibraryzd2producerzb0zzmodule_alibraryz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_usezd2libraryz12zd2envz12zzmodule_alibraryz00,
		BgL_bgl_za762useza7d2library1364z00,
		BGl_z62usezd2libraryz12za2zzmodule_alibraryz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzmodule_alibraryz00));
		     ADD_ROOT((void *) (&BGl_za2libraryzd2initza2zd2zzmodule_alibraryz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_alibraryz00(long
		BgL_checksumz00_918, char *BgL_fromz00_919)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_alibraryz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_alibraryz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_alibraryz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_alibraryz00();
					BGl_cnstzd2initzd2zzmodule_alibraryz00();
					BGl_importedzd2moduleszd2initz00zzmodule_alibraryz00();
					BGl_evalzd2initzd2zzmodule_alibraryz00();
					return BGl_toplevelzd2initzd2zzmodule_alibraryz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 15 */
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__evenvz00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_alibrary");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"module_alibrary");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"module_alibrary");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 15 */
			{	/* Module/alibrary.scm 15 */
				obj_t BgL_cportz00_878;

				{	/* Module/alibrary.scm 15 */
					obj_t BgL_stringz00_886;

					BgL_stringz00_886 = BGl_string1337z00zzmodule_alibraryz00;
					{	/* Module/alibrary.scm 15 */
						obj_t BgL_startz00_887;

						BgL_startz00_887 = BINT(((long) 0));
						{	/* Module/alibrary.scm 15 */
							obj_t BgL_endz00_888;

							BgL_endz00_888 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_886)));
							{	/* Module/alibrary.scm 15 */

								BgL_cportz00_878 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_886, BgL_startz00_887, BgL_endz00_888);
				}}}}
				{
					long BgL_iz00_879;

					BgL_iz00_879 = ((long) 5);
				BgL_loopz00_880:
					if ((BgL_iz00_879 == ((long) -1)))
						{	/* Module/alibrary.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/alibrary.scm 15 */
							{	/* Module/alibrary.scm 15 */
								obj_t BgL_arg1344z00_882;

								{	/* Module/alibrary.scm 15 */

									{	/* Module/alibrary.scm 15 */
										obj_t BgL_locationz00_884;

										BgL_locationz00_884 = BBOOL(((bool_t) 0));
										{	/* Module/alibrary.scm 15 */

											BgL_arg1344z00_882 =
												BGl_readz00zz__readerz00(BgL_cportz00_878,
												BgL_locationz00_884);
										}
									}
								}
								{	/* Module/alibrary.scm 15 */
									int BgL_tmpz00_954;

									BgL_tmpz00_954 = (int) (BgL_iz00_879);
									CNST_TABLE_SET(BgL_tmpz00_954, BgL_arg1344z00_882);
							}}
							{	/* Module/alibrary.scm 15 */
								int BgL_auxz00_885;

								BgL_auxz00_885 = (int) ((BgL_iz00_879 - ((long) 1)));
								{
									long BgL_iz00_959;

									BgL_iz00_959 = (long) (BgL_auxz00_885);
									BgL_iz00_879 = BgL_iz00_959;
									goto BgL_loopz00_880;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 15 */
			return (BGl_za2libraryzd2initza2zd2zzmodule_alibraryz00 = BNIL, BUNSPEC);
		}

	}



/* load-library-init */
	BGL_EXPORTED_DEF obj_t BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 47 */
			{

				{	/* Module/alibrary.scm 48 */
					bool_t BgL_tmpz00_962;

				BgL_zc3z04anonymousza31209ze3z87_634:
					if (NULLP(BGl_za2libraryzd2initza2zd2zzmodule_alibraryz00))
						{	/* Module/alibrary.scm 49 */
							BgL_tmpz00_962 = ((bool_t) 0);
						}
					else
						{	/* Module/alibrary.scm 49 */
							{	/* Module/alibrary.scm 50 */
								obj_t BgL_lz00_636;

								BgL_lz00_636 = BGl_za2libraryzd2initza2zd2zzmodule_alibraryz00;
								BGl_za2libraryzd2initza2zd2zzmodule_alibraryz00 = BNIL;
								{
									obj_t BgL_l1149z00_638;

									BgL_l1149z00_638 = BgL_lz00_636;
								BgL_zc3z04anonymousza31211ze3z87_639:
									if (PAIRP(BgL_l1149z00_638))
										{	/* Module/alibrary.scm 52 */
											{	/* Module/alibrary.scm 53 */
												obj_t BgL_fnamez00_641;

												BgL_fnamez00_641 = CAR(BgL_l1149z00_638);
												{	/* Module/alibrary.scm 53 */
													obj_t BgL_list1213z00_642;

													{	/* Module/alibrary.scm 53 */
														obj_t BgL_arg1216z00_643;

														{	/* Module/alibrary.scm 53 */
															obj_t BgL_arg1221z00_644;

															{	/* Module/alibrary.scm 53 */
																obj_t BgL_arg1223z00_645;

																BgL_arg1223z00_645 =
																	MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
																	BNIL);
																BgL_arg1221z00_644 =
																	MAKE_YOUNG_PAIR
																	(BGl_string1324z00zzmodule_alibraryz00,
																	BgL_arg1223z00_645);
															}
															BgL_arg1216z00_643 =
																MAKE_YOUNG_PAIR(BgL_fnamez00_641,
																BgL_arg1221z00_644);
														}
														BgL_list1213z00_642 =
															MAKE_YOUNG_PAIR
															(BGl_string1325z00zzmodule_alibraryz00,
															BgL_arg1216z00_643);
													}
													BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
														BgL_list1213z00_642);
												}
												{	/* Module/alibrary.scm 54 */
													obj_t BgL_envz00_647;

													BgL_envz00_647 =
														BGl_defaultzd2environmentzd2zz__evalz00();
													{	/* Module/alibrary.scm 54 */

														BGl_loadqz00zz__evalz00(BgL_fnamez00_641,
															BgL_envz00_647);
											}}}
											{
												obj_t BgL_l1149z00_977;

												BgL_l1149z00_977 = CDR(BgL_l1149z00_638);
												BgL_l1149z00_638 = BgL_l1149z00_977;
												goto BgL_zc3z04anonymousza31211ze3z87_639;
											}
										}
									else
										{	/* Module/alibrary.scm 52 */
											((bool_t) 1);
										}
								}
							}
							goto BgL_zc3z04anonymousza31209ze3z87_634;
						}
					return BBOOL(BgL_tmpz00_962);
				}
			}
		}

	}



/* &load-library-init */
	obj_t BGl_z62loadzd2libraryzd2initz62zzmodule_alibraryz00(obj_t
		BgL_envz00_857)
	{
		{	/* Module/alibrary.scm 47 */
			return BGl_loadzd2libraryzd2initz00zzmodule_alibraryz00();
		}

	}



/* register-library-init! */
	obj_t BGl_registerzd2libraryzd2initz12z12zzmodule_alibraryz00(obj_t
		BgL_libraryz00_75)
	{
		{	/* Module/alibrary.scm 61 */
			{	/* Module/alibrary.scm 62 */
				obj_t BgL_initzd2namezd2_651;

				{	/* Module/alibrary.scm 62 */
					obj_t BgL_arg1227z00_653;

					{	/* Module/alibrary.scm 62 */
						obj_t BgL_res1313z00_828;

						{	/* Module/alibrary.scm 62 */
							obj_t BgL_arg1466z00_827;

							BgL_arg1466z00_827 = SYMBOL_TO_STRING(BgL_libraryz00_75);
							BgL_res1313z00_828 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_827);
						}
						BgL_arg1227z00_653 = BgL_res1313z00_828;
					}
					BgL_initzd2namezd2_651 =
						string_append(BgL_arg1227z00_653,
						BGl_string1326z00zzmodule_alibraryz00);
				}
				{	/* Module/alibrary.scm 62 */
					obj_t BgL_fnamez00_652;

					BgL_fnamez00_652 =
						BGl_findzd2filezf2pathz20zz__osz00(BgL_initzd2namezd2_651,
						BGl_za2libzd2dirza2zd2zzengine_paramz00);
					{	/* Module/alibrary.scm 63 */

						if (CBOOL(BgL_fnamez00_652))
							{	/* Module/alibrary.scm 64 */
								return (BGl_za2libraryzd2initza2zd2zzmodule_alibraryz00 =
									MAKE_YOUNG_PAIR(BgL_fnamez00_652,
										BGl_za2libraryzd2initza2zd2zzmodule_alibraryz00), BUNSPEC);
							}
						else
							{	/* Module/alibrary.scm 64 */
								return BFALSE;
							}
					}
				}
			}
		}

	}



/* use-library! */
	BGL_EXPORTED_DEF obj_t BGl_usezd2libraryz12zc0zzmodule_alibraryz00(obj_t
		BgL_libraryz00_76)
	{
		{	/* Module/alibrary.scm 70 */
			if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00(BgL_libraryz00_76,
						BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00)))
				{	/* Module/alibrary.scm 71 */
					return BFALSE;
				}
			else
				{	/* Module/alibrary.scm 71 */
					BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00 =
						MAKE_YOUNG_PAIR(BgL_libraryz00_76,
						BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00);
					{	/* Module/alibrary.scm 74 */
						obj_t BgL_heapzd2namezd2_655;

						{	/* Module/alibrary.scm 74 */
							obj_t BgL_res1314z00_831;

							{	/* Module/alibrary.scm 74 */
								obj_t BgL_arg1466z00_830;

								BgL_arg1466z00_830 = SYMBOL_TO_STRING(BgL_libraryz00_76);
								BgL_res1314z00_831 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_830);
							}
							BgL_heapzd2namezd2_655 = BgL_res1314z00_831;
						}
						BGl_registerzd2libraryzd2initz12z12zzmodule_alibraryz00
							(BgL_libraryz00_76);
						BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00 =
							MAKE_YOUNG_PAIR(BgL_heapzd2namezd2_655,
							BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00);
						return BgL_libraryz00_76;
					}
				}
		}

	}



/* &use-library! */
	obj_t BGl_z62usezd2libraryz12za2zzmodule_alibraryz00(obj_t BgL_envz00_858,
		obj_t BgL_libraryz00_859)
	{
		{	/* Module/alibrary.scm 70 */
			return BGl_usezd2libraryz12zc0zzmodule_alibraryz00(BgL_libraryz00_859);
		}

	}



/* make-alibrary-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2alibraryzd2compilerz00zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 83 */
			{	/* Module/alibrary.scm 84 */
				BgL_ccompz00_bglt BgL_new1062z00_656;

				{	/* Module/alibrary.scm 85 */
					BgL_ccompz00_bglt BgL_new1061z00_661;

					BgL_new1061z00_661 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/alibrary.scm 85 */
						long BgL_arg1232z00_662;

						{	/* Module/alibrary.scm 85 */
							long BgL_res1315z00_833;

							BgL_res1315z00_833 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1232z00_662 = BgL_res1315z00_833;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1061z00_661), BgL_arg1232z00_662);
					}
					BgL_new1062z00_656 = BgL_new1061z00_661;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1062z00_656))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1062z00_656))->BgL_producerz00) =
					((obj_t) BGl_alibraryzd2producerzd2envz00zzmodule_alibraryz00),
					BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1062z00_656))->BgL_consumerz00) =
					((obj_t) BGl_proc1327z00zzmodule_alibraryz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1062z00_656))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_proc1328z00zzmodule_alibraryz00), BUNSPEC);
				return ((obj_t) BgL_new1062z00_656);
			}
		}

	}



/* &make-alibrary-compiler */
	obj_t BGl_z62makezd2alibraryzd2compilerz62zzmodule_alibraryz00(obj_t
		BgL_envz00_862)
	{
		{	/* Module/alibrary.scm 83 */
			return BGl_makezd2alibraryzd2compilerz00zzmodule_alibraryz00();
		}

	}



/* &<@anonymous:1230> */
	obj_t BGl_z62zc3z04anonymousza31230ze3ze5zzmodule_alibraryz00(obj_t
		BgL_envz00_863)
	{
		{	/* Module/module.scm 55 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &<@anonymous:1229> */
	obj_t BGl_z62zc3z04anonymousza31229ze3ze5zzmodule_alibraryz00(obj_t
		BgL_envz00_864, obj_t BgL_mz00_865, obj_t BgL_cz00_866)
	{
		{	/* Module/module.scm 53 */
			return BNIL;
		}

	}



/* &alibrary-producer */
	obj_t BGl_z62alibraryzd2producerzb0zzmodule_alibraryz00(obj_t BgL_envz00_867,
		obj_t BgL_clausez00_868)
	{
		{	/* Module/alibrary.scm 91 */
			{
				obj_t BgL_protosz00_893;

				if (PAIRP(BgL_clausez00_868))
					{	/* Module/alibrary.scm 92 */
						BgL_protosz00_893 = CDR(BgL_clausez00_868);
						{
							obj_t BgL_l1151z00_895;

							BgL_l1151z00_895 = BgL_protosz00_893;
						BgL_zc3z04anonymousza31240ze3z87_894:
							if (PAIRP(BgL_l1151z00_895))
								{	/* Module/alibrary.scm 94 */
									{	/* Module/alibrary.scm 95 */
										obj_t BgL_xz00_896;

										BgL_xz00_896 = CAR(BgL_l1151z00_895);
										if (SYMBOLP(BgL_xz00_896))
											{	/* Module/alibrary.scm 95 */
												BGl_usezd2libraryz12zc0zzmodule_alibraryz00
													(BgL_xz00_896);
											}
										else
											{	/* Module/alibrary.scm 95 */
												BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
													BGl_string1329z00zzmodule_alibraryz00, BgL_xz00_896);
									}}
									{
										obj_t BgL_l1151z00_1019;

										BgL_l1151z00_1019 = CDR(BgL_l1151z00_895);
										BgL_l1151z00_895 = BgL_l1151z00_1019;
										goto BgL_zc3z04anonymousza31240ze3z87_894;
									}
								}
							else
								{	/* Module/alibrary.scm 94 */
									((bool_t) 1);
								}
						}
						return BNIL;
					}
				else
					{	/* Module/alibrary.scm 92 */
						{	/* Module/alibrary.scm 101 */
							obj_t BgL_list1246z00_897;

							BgL_list1246z00_897 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string1330z00zzmodule_alibraryz00,
								BGl_string1331z00zzmodule_alibraryz00, BgL_clausez00_868,
								BgL_list1246z00_897);
						}
					}
			}
		}

	}



/* get-alibrary-inits */
	BGL_EXPORTED_DEF obj_t BGl_getzd2alibraryzd2initsz00zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 106 */
			{	/* Module/alibrary.scm 107 */
				obj_t BgL_arg1250z00_679;

				{	/* Module/alibrary.scm 127 */
					obj_t BgL_g1942z00_713;

					BgL_g1942z00_713 =
						BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
					{	/* Module/alibrary.scm 127 */

						BgL_arg1250z00_679 =
							BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00
							(BgL_g1942z00_713,
							BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
					}
				}
				{	/* Module/alibrary.scm 107 */
					obj_t BgL_list1251z00_680;

					BgL_list1251z00_680 = MAKE_YOUNG_PAIR(BgL_arg1250z00_679, BNIL);
					return
						BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
						(BGl_proc1332z00zzmodule_alibraryz00, BgL_list1251z00_680);
				}
			}
		}

	}



/* &get-alibrary-inits */
	obj_t BGl_z62getzd2alibraryzd2initsz62zzmodule_alibraryz00(obj_t
		BgL_envz00_870)
	{
		{	/* Module/alibrary.scm 106 */
			return BGl_getzd2alibraryzd2initsz00zzmodule_alibraryz00();
		}

	}



/* &<@anonymous:1252> */
	obj_t BGl_z62zc3z04anonymousza31252ze3ze5zzmodule_alibraryz00(obj_t
		BgL_envz00_871, obj_t BgL_libz00_872)
	{
		{	/* Module/alibrary.scm 107 */
			{	/* Module/alibrary.scm 108 */
				obj_t BgL_infoz00_898;

				BgL_infoz00_898 = BGl_libraryzd2infozd2zz__libraryz00(BgL_libz00_872);
				if (CBOOL(BgL_infoz00_898))
					{	/* Module/alibrary.scm 111 */
						obj_t BgL_arg1253z00_899;

						{	/* Module/alibrary.scm 111 */
							obj_t BgL_arg1254z00_900;
							obj_t BgL_arg1256z00_901;

							{	/* Module/alibrary.scm 111 */
								bool_t BgL_test1379z00_1031;

								if (CBOOL(STRUCT_REF(
											((obj_t) BgL_infoz00_898), (int) (((long) 3)))))
									{	/* Module/alibrary.scm 112 */
										obj_t BgL_arg1273z00_902;

										BgL_arg1273z00_902 =
											BGl_thezd2backendzd2zzbackend_backendz00();
										BgL_test1379z00_1031 =
											(((BgL_backendz00_bglt) COBJECT(
													((BgL_backendz00_bglt) BgL_arg1273z00_902)))->
											BgL_pragmazd2supportzd2);
									}
								else
									{	/* Module/alibrary.scm 111 */
										BgL_test1379z00_1031 = ((bool_t) 0);
									}
								if (BgL_test1379z00_1031)
									{	/* Module/alibrary.scm 114 */
										obj_t BgL_arg1263z00_903;

										{	/* Module/alibrary.scm 114 */
											obj_t BgL_arg1268z00_904;

											{	/* Module/alibrary.scm 114 */
												obj_t BgL_arg1270z00_905;

												BgL_arg1270z00_905 =
													STRUCT_REF(
													((obj_t) BgL_infoz00_898), (int) (((long) 3)));
												{	/* Module/alibrary.scm 113 */
													obj_t BgL_list1271z00_906;

													BgL_list1271z00_906 =
														MAKE_YOUNG_PAIR(BgL_arg1270z00_905, BNIL);
													BgL_arg1268z00_904 =
														BGl_formatz00zz__r4_output_6_10_3z00
														(BGl_string1333z00zzmodule_alibraryz00,
														BgL_list1271z00_906);
											}}
											BgL_arg1263z00_903 =
												MAKE_YOUNG_PAIR(BgL_arg1268z00_904, BNIL);
										}
										BgL_arg1254z00_900 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
											BgL_arg1263z00_903);
									}
								else
									{	/* Module/alibrary.scm 111 */
										BgL_arg1254z00_900 = BFALSE;
									}
							}
							{	/* Module/alibrary.scm 115 */
								obj_t BgL_arg1274z00_907;
								obj_t BgL_arg1275z00_908;

								if (CBOOL(STRUCT_REF(
											((obj_t) BgL_infoz00_898), (int) (((long) 5)))))
									{	/* Module/alibrary.scm 116 */
										obj_t BgL_vz00_909;

										{	/* Module/alibrary.scm 117 */
											obj_t BgL_arg1286z00_910;

											BgL_arg1286z00_910 =
												STRUCT_REF(
												((obj_t) BgL_infoz00_898), (int) (((long) 5)));
											{	/* Module/alibrary.scm 116 */
												obj_t BgL_list1287z00_911;

												BgL_list1287z00_911 =
													MAKE_YOUNG_PAIR(BgL_arg1286z00_910, BNIL);
												BgL_vz00_909 =
													BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF((
															(long) 3)), BgL_list1287z00_911);
										}}
										if (BGl_isazf3zf3zz__objectz00(BgL_vz00_909,
												BGl_globalz00zzast_varz00))
											{	/* Module/alibrary.scm 119 */
												obj_t BgL_fz00_912;

												{	/* Module/alibrary.scm 119 */
													bool_t BgL_test1391z00_1061;

													{	/* Module/alibrary.scm 119 */
														obj_t BgL_tmpz00_1062;

														BgL_tmpz00_1062 =
															CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
														BgL_test1391z00_1061 = STRINGP(BgL_tmpz00_1062);
													}
													if (BgL_test1391z00_1061)
														{	/* Module/alibrary.scm 119 */
															BgL_fz00_912 =
																CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
														}
													else
														{	/* Module/alibrary.scm 119 */
															BgL_fz00_912 =
																BGl_string1334z00zzmodule_alibraryz00;
														}
												}
												{	/* Module/alibrary.scm 122 */
													obj_t BgL_arg1280z00_913;

													{	/* Module/alibrary.scm 122 */
														obj_t BgL_arg1281z00_914;

														BgL_arg1281z00_914 =
															MAKE_YOUNG_PAIR(BgL_fz00_912, BNIL);
														BgL_arg1280z00_913 =
															MAKE_YOUNG_PAIR(BINT(((long) 0)),
															BgL_arg1281z00_914);
													}
													BgL_arg1274z00_907 =
														MAKE_YOUNG_PAIR(BgL_vz00_909, BgL_arg1280z00_913);
											}}
										else
											{	/* Module/alibrary.scm 124 */
												obj_t BgL_arg1285z00_915;

												BgL_arg1285z00_915 =
													STRUCT_REF(
													((obj_t) BgL_infoz00_898), (int) (((long) 5)));
												BgL_arg1274z00_907 =
													BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
													BGl_string1335z00zzmodule_alibraryz00,
													BgL_arg1285z00_915);
									}}
								else
									{	/* Module/alibrary.scm 115 */
										BgL_arg1274z00_907 = BFALSE;
									}
								{	/* Module/alibrary.scm 125 */
									obj_t BgL_arg1288z00_916;

									if (CBOOL(STRUCT_REF(
												((obj_t) BgL_infoz00_898), (int) (((long) 9)))))
										{	/* Module/alibrary.scm 126 */
											obj_t BgL_arg1290z00_917;

											BgL_arg1290z00_917 =
												STRUCT_REF(
												((obj_t) BgL_infoz00_898), (int) (((long) 9)));
											BgL_arg1288z00_916 =
												MAKE_YOUNG_PAIR(BgL_arg1290z00_917, BNIL);
										}
									else
										{	/* Module/alibrary.scm 125 */
											BgL_arg1288z00_916 = BFALSE;
										}
									BgL_arg1275z00_908 =
										MAKE_YOUNG_PAIR(BgL_arg1288z00_916, BNIL);
								}
								BgL_arg1256z00_901 =
									MAKE_YOUNG_PAIR(BgL_arg1274z00_907, BgL_arg1275z00_908);
							}
							BgL_arg1253z00_899 =
								MAKE_YOUNG_PAIR(BgL_arg1254z00_900, BgL_arg1256z00_901);
						}
						return
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)), BgL_arg1253z00_899);
					}
				else
					{	/* Module/alibrary.scm 109 */
						return BFALSE;
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1336z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1336z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1336z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1336z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1336z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1336z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1336z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 374700252),
				BSTRING_TO_STRING(BGl_string1336z00zzmodule_alibraryz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1336z00zzmodule_alibraryz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1336z00zzmodule_alibraryz00));
		}

	}



/* eval-init */
	obj_t BGl_evalzd2initzd2zzmodule_alibraryz00()
	{
		{	/* Module/alibrary.scm 15 */
			BGl_definezd2primopz12zc0zz__evenvz00(CNST_TABLE_REF(((long) 5)),
				BGl_usezd2libraryz12zd2envz12zzmodule_alibraryz00);
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
