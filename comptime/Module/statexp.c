/*===========================================================================*/
/*   (Module/statexp.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/statexp.scm) */
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


	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	extern obj_t BGl_declarezd2classz12zc0zzmodule_classz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_statexpz00();
	static obj_t BGl_methodzd2initzd2zzmodule_statexpz00();
	static obj_t BGl_z62zc3z04anonymousza31254ze3ze5zzmodule_statexpz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31166ze3ze5zzmodule_statexpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31167ze3ze5zzmodule_statexpz00(obj_t);
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_z62statexpzd2finaliza7erz17zzmodule_statexpz00(obj_t);
	static obj_t BGl_statexpzd2parserzd2zzmodule_statexpz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_statexpz00();
	static obj_t BGl_z62exportzd2consumerzb0zzmodule_statexpz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_parsezd2prototypezd2zzmodule_prototypez00(obj_t);
	static obj_t BGl_z62makezd2staticzd2compilerz62zzmodule_statexpz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2staticzd2compilerz00zzmodule_statexpz00();
	static obj_t BGl_za2localzd2classesza2zd2zzmodule_statexpz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_statexpz00 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_statexpz00();
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62statexpzd2producerzb0zzmodule_statexpz00(obj_t, obj_t);
	extern obj_t BGl_classzd2finaliza7erz75zzmodule_classz00();
	static obj_t BGl_genericzd2initzd2zzmodule_statexpz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_declarezd2widezd2classz12z12zzmodule_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31240ze3ze5zzmodule_statexpz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31228ze3ze5zzmodule_statexpz00(obj_t);
	extern obj_t BGl_tozd2bezd2macroz12z12zzexpand_expanderz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31247ze3ze5zzmodule_statexpz00(obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_statexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long,
		char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzmodule_statexpz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_statexpz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_statexpz00();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62makezd2exportzd2compilerz62zzmodule_statexpz00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2exportzd2compilerz00zzmodule_statexpz00();
	extern obj_t
		BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2(BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t __cnst[15];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_exportzd2consumerzd2envz00zzmodule_statexpz00,
		BgL_bgl_za762exportza7d2cons1337z00,
		BGl_z62exportzd2consumerzb0zzmodule_statexpz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1326z00zzmodule_statexpz00,
		BgL_bgl_za762za7c3za704anonymo1338za7,
		BGl_z62zc3z04anonymousza31166ze3ze5zzmodule_statexpz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1327z00zzmodule_statexpz00,
		BgL_bgl_za762za7c3za704anonymo1339za7,
		BGl_z62zc3z04anonymousza31167ze3ze5zzmodule_statexpz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_statexpzd2producerzd2envz00zzmodule_statexpz00,
		BgL_bgl_za762statexpza7d2pro1340z00,
		BGl_z62statexpzd2producerzb0zzmodule_statexpz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1328z00zzmodule_statexpz00,
		BgL_bgl_string1328za700za7za7m1341za7, "Parse error \"~a\" clause", 23);
	      DEFINE_STRING(BGl_string1329z00zzmodule_statexpz00,
		BgL_bgl_string1329za700za7za7m1342za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1330z00zzmodule_statexpz00,
		BgL_bgl_string1330za700za7za7m1343za7, "Illegal \"export\" clause", 23);
	      DEFINE_STRING(BGl_string1331z00zzmodule_statexpz00,
		BgL_bgl_string1331za700za7za7m1344za7, "Illegal prototype", 17);
	      DEFINE_STRING(BGl_string1332z00zzmodule_statexpz00,
		BgL_bgl_string1332za700za7za7m1345za7, "module_statexp", 14);
	      DEFINE_STRING(BGl_string1333z00zzmodule_statexpz00,
		BgL_bgl_string1333za700za7za7m1346za7,
		"expander syntax macro define-macro wide-class final-class abstract-class class svar sgfun sifun sfun export void static ",
		120);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2staticzd2compilerzd2envzd2zzmodule_statexpz00,
		BgL_bgl_za762makeza7d2static1347z00,
		BGl_z62makezd2staticzd2compilerz62zzmodule_statexpz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_statexpzd2finaliza7erzd2envza7zzmodule_statexpz00,
		BgL_bgl_za762statexpza7d2fin1348z00,
		BGl_z62statexpzd2finaliza7erz17zzmodule_statexpz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2exportzd2compilerzd2envzd2zzmodule_statexpz00,
		BgL_bgl_za762makeza7d2export1349z00,
		BGl_z62makezd2exportzd2compilerz62zzmodule_statexpz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2localzd2classesza2zd2zzmodule_statexpz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzmodule_statexpz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_statexpz00(long
		BgL_checksumz00_1009, char *BgL_fromz00_1010)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_statexpz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_statexpz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_statexpz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_statexpz00();
					BGl_cnstzd2initzd2zzmodule_statexpz00();
					BGl_importedzd2moduleszd2initz00zzmodule_statexpz00();
					return BGl_toplevelzd2initzd2zzmodule_statexpz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_statexpz00()
	{
		{	/* Module/statexp.scm 15 */
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "module_statexp");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_statexp");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"module_statexp");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_statexpz00()
	{
		{	/* Module/statexp.scm 15 */
			{	/* Module/statexp.scm 15 */
				obj_t BgL_cportz00_971;

				{	/* Module/statexp.scm 15 */
					obj_t BgL_stringz00_979;

					BgL_stringz00_979 = BGl_string1333z00zzmodule_statexpz00;
					{	/* Module/statexp.scm 15 */
						obj_t BgL_startz00_980;

						BgL_startz00_980 = BINT(((long) 0));
						{	/* Module/statexp.scm 15 */
							obj_t BgL_endz00_981;

							BgL_endz00_981 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_979)));
							{	/* Module/statexp.scm 15 */

								BgL_cportz00_971 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_979, BgL_startz00_980, BgL_endz00_981);
				}}}}
				{
					long BgL_iz00_972;

					BgL_iz00_972 = ((long) 14);
				BgL_loopz00_973:
					if ((BgL_iz00_972 == ((long) -1)))
						{	/* Module/statexp.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/statexp.scm 15 */
							{	/* Module/statexp.scm 15 */
								obj_t BgL_arg1335z00_975;

								{	/* Module/statexp.scm 15 */

									{	/* Module/statexp.scm 15 */
										obj_t BgL_locationz00_977;

										BgL_locationz00_977 = BBOOL(((bool_t) 0));
										{	/* Module/statexp.scm 15 */

											BgL_arg1335z00_975 =
												BGl_readz00zz__readerz00(BgL_cportz00_971,
												BgL_locationz00_977);
										}
									}
								}
								{	/* Module/statexp.scm 15 */
									int BgL_tmpz00_1039;

									BgL_tmpz00_1039 = (int) (BgL_iz00_972);
									CNST_TABLE_SET(BgL_tmpz00_1039, BgL_arg1335z00_975);
							}}
							{	/* Module/statexp.scm 15 */
								int BgL_auxz00_978;

								BgL_auxz00_978 = (int) ((BgL_iz00_972 - ((long) 1)));
								{
									long BgL_iz00_1044;

									BgL_iz00_1044 = (long) (BgL_auxz00_978);
									BgL_iz00_972 = BgL_iz00_1044;
									goto BgL_loopz00_973;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_statexpz00()
	{
		{	/* Module/statexp.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_statexpz00()
	{
		{	/* Module/statexp.scm 15 */
			return (BGl_za2localzd2classesza2zd2zzmodule_statexpz00 = BNIL, BUNSPEC);
		}

	}



/* make-static-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2staticzd2compilerz00zzmodule_statexpz00()
	{
		{	/* Module/statexp.scm 36 */
			{	/* Module/statexp.scm 37 */
				BgL_ccompz00_bglt BgL_new1064z00_702;

				{	/* Module/statexp.scm 38 */
					BgL_ccompz00_bglt BgL_new1063z00_707;

					BgL_new1063z00_707 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/statexp.scm 38 */
						long BgL_arg1169z00_708;

						{	/* Module/statexp.scm 38 */
							long BgL_res1308z00_863;

							BgL_res1308z00_863 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1169z00_708 = BgL_res1308z00_863;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1063z00_707), BgL_arg1169z00_708);
					}
					BgL_new1064z00_702 = BgL_new1063z00_707;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1064z00_702))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1064z00_702))->BgL_producerz00) =
					((obj_t) BGl_statexpzd2producerzd2envz00zzmodule_statexpz00),
					BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1064z00_702))->BgL_consumerz00) =
					((obj_t) BGl_proc1326z00zzmodule_statexpz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1064z00_702))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_proc1327z00zzmodule_statexpz00), BUNSPEC);
				return ((obj_t) BgL_new1064z00_702);
			}
		}

	}



/* &make-static-compiler */
	obj_t BGl_z62makezd2staticzd2compilerz62zzmodule_statexpz00(obj_t
		BgL_envz00_938)
	{
		{	/* Module/statexp.scm 36 */
			return BGl_makezd2staticzd2compilerz00zzmodule_statexpz00();
		}

	}



/* &<@anonymous:1167> */
	obj_t BGl_z62zc3z04anonymousza31167ze3ze5zzmodule_statexpz00(obj_t
		BgL_envz00_939)
	{
		{	/* Module/module.scm 55 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &<@anonymous:1166> */
	obj_t BGl_z62zc3z04anonymousza31166ze3ze5zzmodule_statexpz00(obj_t
		BgL_envz00_940, obj_t BgL_mz00_941, obj_t BgL_cz00_942)
	{
		{	/* Module/module.scm 53 */
			return BNIL;
		}

	}



/* make-export-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2exportzd2compilerz00zzmodule_statexpz00()
	{
		{	/* Module/statexp.scm 44 */
			{	/* Module/statexp.scm 45 */
				BgL_ccompz00_bglt BgL_new1066z00_709;

				{	/* Module/statexp.scm 46 */
					BgL_ccompz00_bglt BgL_new1065z00_710;

					BgL_new1065z00_710 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/statexp.scm 46 */
						long BgL_arg1170z00_711;

						{	/* Module/statexp.scm 46 */
							long BgL_res1309z00_867;

							BgL_res1309z00_867 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1170z00_711 = BgL_res1309z00_867;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1065z00_710), BgL_arg1170z00_711);
					}
					BgL_new1066z00_709 = BgL_new1065z00_710;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1066z00_709))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1066z00_709))->BgL_producerz00) =
					((obj_t) BGl_statexpzd2producerzd2envz00zzmodule_statexpz00),
					BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1066z00_709))->BgL_consumerz00) =
					((obj_t) BGl_exportzd2consumerzd2envz00zzmodule_statexpz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1066z00_709))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_statexpzd2finaliza7erzd2envza7zzmodule_statexpz00),
					BUNSPEC);
				return ((obj_t) BgL_new1066z00_709);
			}
		}

	}



/* &make-export-compiler */
	obj_t BGl_z62makezd2exportzd2compilerz62zzmodule_statexpz00(obj_t
		BgL_envz00_945)
	{
		{	/* Module/statexp.scm 44 */
			return BGl_makezd2exportzd2compilerz00zzmodule_statexpz00();
		}

	}



/* &statexp-producer */
	obj_t BGl_z62statexpzd2producerzb0zzmodule_statexpz00(obj_t BgL_envz00_943,
		obj_t BgL_clausez00_944)
	{
		{	/* Module/statexp.scm 54 */
			{	/* Module/statexp.scm 55 */
				obj_t BgL_modez00_984;

				BgL_modez00_984 = CAR(((obj_t) BgL_clausez00_944));
				{
					obj_t BgL_protosz00_987;

					if (PAIRP(BgL_clausez00_944))
						{	/* Module/statexp.scm 56 */
							BgL_protosz00_987 = CDR(BgL_clausez00_944);
							{
								obj_t BgL_l1122z00_989;

								BgL_l1122z00_989 = BgL_protosz00_987;
							BgL_zc3z04anonymousza31173ze3z87_988:
								if (PAIRP(BgL_l1122z00_989))
									{	/* Module/statexp.scm 58 */
										BGl_statexpzd2parserzd2zzmodule_statexpz00(CAR
											(BgL_l1122z00_989), BgL_modez00_984);
										{
											obj_t BgL_l1122z00_1078;

											BgL_l1122z00_1078 = CDR(BgL_l1122z00_989);
											BgL_l1122z00_989 = BgL_l1122z00_1078;
											goto BgL_zc3z04anonymousza31173ze3z87_988;
										}
									}
								else
									{	/* Module/statexp.scm 58 */
										((bool_t) 1);
									}
							}
							return BNIL;
						}
					else
						{	/* Module/statexp.scm 56 */
							{	/* Module/statexp.scm 61 */
								obj_t BgL_arg1176z00_990;
								obj_t BgL_arg1177z00_991;

								BgL_arg1176z00_990 =
									BGl_findzd2locationzd2zztools_locationz00
									(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
								{	/* Module/statexp.scm 63 */
									obj_t BgL_arg1179z00_992;

									{	/* Module/statexp.scm 63 */
										obj_t BgL_arg1186z00_993;

										{	/* Module/statexp.scm 63 */
											obj_t BgL_res1311z00_994;

											{	/* Module/statexp.scm 63 */
												obj_t BgL_arg1466z00_995;

												BgL_arg1466z00_995 =
													SYMBOL_TO_STRING(((obj_t) BgL_modez00_984));
												BgL_res1311z00_994 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_995);
											}
											BgL_arg1186z00_993 = BgL_res1311z00_994;
										}
										BgL_arg1179z00_992 =
											BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
											(BgL_arg1186z00_993);
									}
									{	/* Module/statexp.scm 62 */
										obj_t BgL_list1180z00_996;

										BgL_list1180z00_996 =
											MAKE_YOUNG_PAIR(BgL_arg1179z00_992, BNIL);
										BgL_arg1177z00_991 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string1328z00zzmodule_statexpz00,
											BgL_list1180z00_996);
									}
								}
								return
									BGl_userzd2errorzf2locationz20zztools_errorz00
									(BgL_arg1176z00_990, BgL_arg1177z00_991, BgL_clausez00_944,
									BNIL, BNIL);
							}
						}
				}
			}
		}

	}



/* &export-consumer */
	obj_t BGl_z62exportzd2consumerzb0zzmodule_statexpz00(obj_t BgL_envz00_946,
		obj_t BgL_modulez00_947, obj_t BgL_clausez00_948)
	{
		{	/* Module/statexp.scm 69 */
			{

				if (PAIRP(BgL_clausez00_948))
					{	/* Module/statexp.scm 70 */
						return CDR(BgL_clausez00_948);
					}
				else
					{	/* Module/statexp.scm 70 */
						{	/* Module/statexp.scm 74 */
							obj_t BgL_arg1194z00_998;

							BgL_arg1194z00_998 =
								BGl_findzd2locationzd2zztools_locationz00
								(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
							{	/* Module/statexp.scm 74 */
								obj_t BgL_list1195z00_999;

								BgL_list1195z00_999 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								return
									BGl_userzd2errorzf2locationz20zztools_errorz00
									(BgL_arg1194z00_998, BGl_string1329z00zzmodule_statexpz00,
									BGl_string1330z00zzmodule_statexpz00, BgL_clausez00_948,
									BgL_list1195z00_999);
							}
						}
					}
			}
		}

	}



/* statexp-parser */
	obj_t BGl_statexpzd2parserzd2zzmodule_statexpz00(obj_t BgL_prototypez00_28,
		obj_t BgL_importz00_29)
	{
		{	/* Module/statexp.scm 80 */
			{	/* Module/statexp.scm 81 */
				obj_t BgL_protoz00_740;

				BgL_protoz00_740 =
					BGl_parsezd2prototypezd2zzmodule_prototypez00(BgL_prototypez00_28);
				if (PAIRP(BgL_protoz00_740))
					{	/* Module/statexp.scm 85 */
						obj_t BgL_casezd2valuezd2_742;

						BgL_casezd2valuezd2_742 = CAR(BgL_protoz00_740);
						{	/* Module/statexp.scm 85 */
							bool_t BgL_test1357z00_1099;

							{	/* Module/statexp.scm 85 */
								bool_t BgL__ortest_1078z00_787;

								BgL__ortest_1078z00_787 =
									(BgL_casezd2valuezd2_742 == CNST_TABLE_REF(((long) 3)));
								if (BgL__ortest_1078z00_787)
									{	/* Module/statexp.scm 85 */
										BgL_test1357z00_1099 = BgL__ortest_1078z00_787;
									}
								else
									{	/* Module/statexp.scm 85 */
										bool_t BgL__ortest_1079z00_788;

										BgL__ortest_1079z00_788 =
											(BgL_casezd2valuezd2_742 == CNST_TABLE_REF(((long) 4)));
										if (BgL__ortest_1079z00_788)
											{	/* Module/statexp.scm 85 */
												BgL_test1357z00_1099 = BgL__ortest_1079z00_788;
											}
										else
											{	/* Module/statexp.scm 85 */
												BgL_test1357z00_1099 =
													(BgL_casezd2valuezd2_742 ==
													CNST_TABLE_REF(((long) 5)));
							}}}
							if (BgL_test1357z00_1099)
								{	/* Module/statexp.scm 88 */
									BgL_globalz00_bglt BgL_arg1201z00_746;

									{	/* Module/statexp.scm 88 */
										obj_t BgL_arg1208z00_747;
										obj_t BgL_arg1211z00_748;

										BgL_arg1208z00_747 = CAR(CDR(BgL_protoz00_740));
										BgL_arg1211z00_748 = CAR(CDR(CDR(BgL_protoz00_740)));
										BgL_arg1201z00_746 =
											BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2
											(BgL_arg1208z00_747, BFALSE, BgL_arg1211z00_748,
											BGl_za2moduleza2z00zzmodule_modulez00, BgL_importz00_29,
											BgL_casezd2valuezd2_742, BgL_prototypez00_28, BFALSE);
									}
									return
										BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2
										(BgL_arg1201z00_746);
								}
							else
								{	/* Module/statexp.scm 85 */
									if ((BgL_casezd2valuezd2_742 == CNST_TABLE_REF(((long) 6))))
										{	/* Module/statexp.scm 92 */
											BgL_globalz00_bglt BgL_arg1221z00_751;

											{	/* Module/statexp.scm 92 */
												obj_t BgL_arg1223z00_752;

												BgL_arg1223z00_752 = CAR(CDR(BgL_protoz00_740));
												BgL_arg1221z00_751 =
													BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2
													(BgL_arg1223z00_752, BFALSE,
													BGl_za2moduleza2z00zzmodule_modulez00,
													BgL_importz00_29, BgL_prototypez00_28, BFALSE);
											}
											return
												BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2
												(BgL_arg1221z00_751);
										}
									else
										{	/* Module/statexp.scm 85 */
											if (
												(BgL_casezd2valuezd2_742 == CNST_TABLE_REF(((long) 7))))
												{	/* Module/statexp.scm 97 */
													obj_t BgL_arg1225z00_754;

													{	/* Module/statexp.scm 97 */
														obj_t BgL_zc3z04anonymousza31228ze3z87_950;

														BgL_zc3z04anonymousza31228ze3z87_950 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31228ze3ze5zzmodule_statexpz00,
															(int) (((long) 0)), (int) (((long) 3)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31228ze3z87_950,
															(int) (((long) 0)), BgL_protoz00_740);
														PROCEDURE_SET(BgL_zc3z04anonymousza31228ze3z87_950,
															(int) (((long) 1)), BgL_importz00_29);
														PROCEDURE_SET(BgL_zc3z04anonymousza31228ze3z87_950,
															(int) (((long) 2)), BgL_prototypez00_28);
														BgL_arg1225z00_754 =
															BGl_makezd2promisezd2zz__r4_control_features_6_9z00
															(BgL_zc3z04anonymousza31228ze3z87_950);
													}
													return
														(BGl_za2localzd2classesza2zd2zzmodule_statexpz00 =
														MAKE_YOUNG_PAIR(BgL_arg1225z00_754,
															BGl_za2localzd2classesza2zd2zzmodule_statexpz00),
														BUNSPEC);
												}
											else
												{	/* Module/statexp.scm 85 */
													if (
														(BgL_casezd2valuezd2_742 ==
															CNST_TABLE_REF(((long) 8))))
														{	/* Module/statexp.scm 102 */
															obj_t BgL_arg1232z00_760;

															{	/* Module/statexp.scm 102 */
																obj_t BgL_zc3z04anonymousza31240ze3z87_951;

																BgL_zc3z04anonymousza31240ze3z87_951 =
																	MAKE_FX_PROCEDURE
																	(BGl_z62zc3z04anonymousza31240ze3ze5zzmodule_statexpz00,
																	(int) (((long) 0)), (int) (((long) 3)));
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31240ze3z87_951,
																	(int) (((long) 0)), BgL_protoz00_740);
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31240ze3z87_951,
																	(int) (((long) 1)), BgL_importz00_29);
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31240ze3z87_951,
																	(int) (((long) 2)), BgL_prototypez00_28);
																BgL_arg1232z00_760 =
																	BGl_makezd2promisezd2zz__r4_control_features_6_9z00
																	(BgL_zc3z04anonymousza31240ze3z87_951);
															}
															return
																(BGl_za2localzd2classesza2zd2zzmodule_statexpz00
																=
																MAKE_YOUNG_PAIR(BgL_arg1232z00_760,
																	BGl_za2localzd2classesza2zd2zzmodule_statexpz00),
																BUNSPEC);
														}
													else
														{	/* Module/statexp.scm 85 */
															if (
																(BgL_casezd2valuezd2_742 ==
																	CNST_TABLE_REF(((long) 9))))
																{	/* Module/statexp.scm 107 */
																	obj_t BgL_arg1245z00_766;

																	{	/* Module/statexp.scm 107 */
																		obj_t BgL_zc3z04anonymousza31247ze3z87_952;

																		BgL_zc3z04anonymousza31247ze3z87_952 =
																			MAKE_FX_PROCEDURE
																			(BGl_z62zc3z04anonymousza31247ze3ze5zzmodule_statexpz00,
																			(int) (((long) 0)), (int) (((long) 3)));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31247ze3z87_952,
																			(int) (((long) 0)), BgL_protoz00_740);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31247ze3z87_952,
																			(int) (((long) 1)), BgL_importz00_29);
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza31247ze3z87_952,
																			(int) (((long) 2)), BgL_prototypez00_28);
																		BgL_arg1245z00_766 =
																			BGl_makezd2promisezd2zz__r4_control_features_6_9z00
																			(BgL_zc3z04anonymousza31247ze3z87_952);
																	}
																	return
																		(BGl_za2localzd2classesza2zd2zzmodule_statexpz00
																		=
																		MAKE_YOUNG_PAIR(BgL_arg1245z00_766,
																			BGl_za2localzd2classesza2zd2zzmodule_statexpz00),
																		BUNSPEC);
																}
															else
																{	/* Module/statexp.scm 85 */
																	if (
																		(BgL_casezd2valuezd2_742 ==
																			CNST_TABLE_REF(((long) 10))))
																		{	/* Module/statexp.scm 112 */
																			obj_t BgL_arg1252z00_772;

																			{	/* Module/statexp.scm 112 */
																				obj_t
																					BgL_zc3z04anonymousza31254ze3z87_953;
																				BgL_zc3z04anonymousza31254ze3z87_953 =
																					MAKE_FX_PROCEDURE
																					(BGl_z62zc3z04anonymousza31254ze3ze5zzmodule_statexpz00,
																					(int) (((long) 0)),
																					(int) (((long) 3)));
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31254ze3z87_953,
																					(int) (((long) 0)), BgL_protoz00_740);
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31254ze3z87_953,
																					(int) (((long) 1)), BgL_importz00_29);
																				PROCEDURE_SET
																					(BgL_zc3z04anonymousza31254ze3z87_953,
																					(int) (((long) 2)),
																					BgL_prototypez00_28);
																				BgL_arg1252z00_772 =
																					BGl_makezd2promisezd2zz__r4_control_features_6_9z00
																					(BgL_zc3z04anonymousza31254ze3z87_953);
																			}
																			return
																				(BGl_za2localzd2classesza2zd2zzmodule_statexpz00
																				=
																				MAKE_YOUNG_PAIR(BgL_arg1252z00_772,
																					BGl_za2localzd2classesza2zd2zzmodule_statexpz00),
																				BUNSPEC);
																		}
																	else
																		{	/* Module/statexp.scm 85 */
																			if (
																				(BgL_casezd2valuezd2_742 ==
																					CNST_TABLE_REF(((long) 11))))
																				{	/* Module/statexp.scm 115 */
																					obj_t BgL_envz00_779;

																					BgL_envz00_779 =
																						BGl_defaultzd2environmentzd2zz__evalz00
																						();
																					{	/* Module/statexp.scm 115 */

																						return
																							BGl_evalz00zz__evalz00
																							(BgL_protoz00_740,
																							BgL_envz00_779);
																					}
																				}
																			else
																				{	/* Module/statexp.scm 85 */
																					if (
																						(BgL_casezd2valuezd2_742 ==
																							CNST_TABLE_REF(((long) 12))))
																						{	/* Module/statexp.scm 85 */
																							return
																								BGl_tozd2bezd2macroz12z12zzexpand_expanderz00
																								(CAR(CDR(BgL_protoz00_740)),
																								BgL_prototypez00_28);
																						}
																					else
																						{	/* Module/statexp.scm 85 */
																							if (
																								(BgL_casezd2valuezd2_742 ==
																									CNST_TABLE_REF(((long) 13))))
																								{	/* Module/statexp.scm 85 */
																									return
																										BGl_tozd2bezd2macroz12z12zzexpand_expanderz00
																										(CAR(CDR(BgL_protoz00_740)),
																										BgL_prototypez00_28);
																								}
																							else
																								{	/* Module/statexp.scm 85 */
																									if (
																										(BgL_casezd2valuezd2_742 ==
																											CNST_TABLE_REF(((long)
																													14))))
																										{	/* Module/statexp.scm 85 */
																											return
																												BGl_tozd2bezd2macroz12z12zzexpand_expanderz00
																												(CAR(CDR
																													(BgL_protoz00_740)),
																												BgL_prototypez00_28);
																										}
																									else
																										{	/* Module/statexp.scm 123 */
																											obj_t BgL_list1271z00_786;

																											BgL_list1271z00_786 =
																												MAKE_YOUNG_PAIR(BNIL,
																												BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string1329z00zzmodule_statexpz00,
																												BGl_string1331z00zzmodule_statexpz00,
																												BgL_prototypez00_28,
																												BgL_list1271z00_786);
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
					{	/* Module/statexp.scm 83 */
						obj_t BgL_arg1273z00_789;

						BgL_arg1273z00_789 =
							BGl_findzd2locationzd2zztools_locationz00
							(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
						{	/* Module/statexp.scm 83 */
							obj_t BgL_list1274z00_790;

							BgL_list1274z00_790 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzf2locationz20zztools_errorz00
								(BgL_arg1273z00_789, BGl_string1329z00zzmodule_statexpz00,
								BGl_string1331z00zzmodule_statexpz00, BgL_prototypez00_28,
								BgL_list1274z00_790);
						}
					}
			}
		}

	}



/* &<@anonymous:1228> */
	obj_t BGl_z62zc3z04anonymousza31228ze3ze5zzmodule_statexpz00(obj_t
		BgL_envz00_954)
	{
		{	/* Module/statexp.scm 96 */
			{	/* Module/statexp.scm 97 */
				obj_t BgL_protoz00_955;
				obj_t BgL_importz00_956;
				obj_t BgL_prototypez00_957;

				BgL_protoz00_955 = PROCEDURE_REF(BgL_envz00_954, (int) (((long) 0)));
				BgL_importz00_956 = PROCEDURE_REF(BgL_envz00_954, (int) (((long) 1)));
				BgL_prototypez00_957 =
					PROCEDURE_REF(BgL_envz00_954, (int) (((long) 2)));
				{	/* Module/statexp.scm 97 */
					obj_t BgL_arg1229z00_1000;

					BgL_arg1229z00_1000 = CDR(((obj_t) BgL_protoz00_955));
					return
						BGl_declarezd2classz12zc0zzmodule_classz00(BgL_arg1229z00_1000,
						BGl_za2moduleza2z00zzmodule_modulez00, BgL_importz00_956,
						((bool_t) 0), ((bool_t) 0), BgL_prototypez00_957, BFALSE);
				}
			}
		}

	}



/* &<@anonymous:1240> */
	obj_t BGl_z62zc3z04anonymousza31240ze3ze5zzmodule_statexpz00(obj_t
		BgL_envz00_958)
	{
		{	/* Module/statexp.scm 101 */
			{	/* Module/statexp.scm 102 */
				obj_t BgL_protoz00_959;
				obj_t BgL_importz00_960;
				obj_t BgL_prototypez00_961;

				BgL_protoz00_959 = PROCEDURE_REF(BgL_envz00_958, (int) (((long) 0)));
				BgL_importz00_960 = PROCEDURE_REF(BgL_envz00_958, (int) (((long) 1)));
				BgL_prototypez00_961 =
					PROCEDURE_REF(BgL_envz00_958, (int) (((long) 2)));
				{	/* Module/statexp.scm 102 */
					obj_t BgL_arg1242z00_1001;

					BgL_arg1242z00_1001 = CDR(((obj_t) BgL_protoz00_959));
					return
						BGl_declarezd2classz12zc0zzmodule_classz00(BgL_arg1242z00_1001,
						BGl_za2moduleza2z00zzmodule_modulez00, BgL_importz00_960,
						((bool_t) 0), ((bool_t) 1), BgL_prototypez00_961, BFALSE);
				}
			}
		}

	}



/* &<@anonymous:1247> */
	obj_t BGl_z62zc3z04anonymousza31247ze3ze5zzmodule_statexpz00(obj_t
		BgL_envz00_962)
	{
		{	/* Module/statexp.scm 106 */
			{	/* Module/statexp.scm 107 */
				obj_t BgL_protoz00_963;
				obj_t BgL_importz00_964;
				obj_t BgL_prototypez00_965;

				BgL_protoz00_963 = PROCEDURE_REF(BgL_envz00_962, (int) (((long) 0)));
				BgL_importz00_964 = PROCEDURE_REF(BgL_envz00_962, (int) (((long) 1)));
				BgL_prototypez00_965 =
					PROCEDURE_REF(BgL_envz00_962, (int) (((long) 2)));
				{	/* Module/statexp.scm 107 */
					obj_t BgL_arg1250z00_1002;

					BgL_arg1250z00_1002 = CDR(((obj_t) BgL_protoz00_963));
					return
						BGl_declarezd2classz12zc0zzmodule_classz00(BgL_arg1250z00_1002,
						BGl_za2moduleza2z00zzmodule_modulez00, BgL_importz00_964,
						((bool_t) 1), ((bool_t) 0), BgL_prototypez00_965, BFALSE);
				}
			}
		}

	}



/* &<@anonymous:1254> */
	obj_t BGl_z62zc3z04anonymousza31254ze3ze5zzmodule_statexpz00(obj_t
		BgL_envz00_966)
	{
		{	/* Module/statexp.scm 111 */
			{	/* Module/statexp.scm 112 */
				obj_t BgL_protoz00_967;
				obj_t BgL_importz00_968;
				obj_t BgL_prototypez00_969;

				BgL_protoz00_967 = PROCEDURE_REF(BgL_envz00_966, (int) (((long) 0)));
				BgL_importz00_968 = PROCEDURE_REF(BgL_envz00_966, (int) (((long) 1)));
				BgL_prototypez00_969 =
					PROCEDURE_REF(BgL_envz00_966, (int) (((long) 2)));
				{	/* Module/statexp.scm 112 */
					obj_t BgL_arg1256z00_1003;

					BgL_arg1256z00_1003 = CDR(((obj_t) BgL_protoz00_967));
					return
						BGl_declarezd2widezd2classz12z12zzmodule_classz00
						(BgL_arg1256z00_1003, BGl_za2moduleza2z00zzmodule_modulez00,
						BgL_importz00_968, BgL_prototypez00_969, BFALSE);
				}
			}
		}

	}



/* &statexp-finalizer */
	obj_t BGl_z62statexpzd2finaliza7erz17zzmodule_statexpz00(obj_t BgL_envz00_949)
	{
		{	/* Module/statexp.scm 145 */
			{	/* Module/statexp.scm 147 */
				obj_t BgL_g1126z00_1004;

				BgL_g1126z00_1004 =
					bgl_reverse_bang(BGl_za2localzd2classesza2zd2zzmodule_statexpz00);
				{
					obj_t BgL_l1124z00_1006;

					BgL_l1124z00_1006 = BgL_g1126z00_1004;
				BgL_zc3z04anonymousza31275ze3z87_1005:
					if (PAIRP(BgL_l1124z00_1006))
						{	/* Module/statexp.scm 147 */
							{	/* Module/statexp.scm 147 */
								obj_t BgL_arg1277z00_1007;

								BgL_arg1277z00_1007 = CAR(BgL_l1124z00_1006);
								PROCEDURE_ENTRY(BgL_arg1277z00_1007) (BgL_arg1277z00_1007,
									BEOA);
							}
							{
								obj_t BgL_l1124z00_1249;

								BgL_l1124z00_1249 = CDR(BgL_l1124z00_1006);
								BgL_l1124z00_1006 = BgL_l1124z00_1249;
								goto BgL_zc3z04anonymousza31275ze3z87_1005;
							}
						}
					else
						{	/* Module/statexp.scm 147 */
							((bool_t) 1);
						}
				}
			}
			BGl_za2localzd2classesza2zd2zzmodule_statexpz00 = BNIL;
			{	/* Module/statexp.scm 150 */
				obj_t BgL_classesz00_1008;

				BgL_classesz00_1008 = BGl_classzd2finaliza7erz75zzmodule_classz00();
				if (PAIRP(BgL_classesz00_1008))
					{	/* Module/statexp.scm 151 */
						return BgL_classesz00_1008;
					}
				else
					{	/* Module/statexp.scm 151 */
						return CNST_TABLE_REF(((long) 1));
		}}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_statexpz00()
	{
		{	/* Module/statexp.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_statexpz00()
	{
		{	/* Module/statexp.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_statexpz00()
	{
		{	/* Module/statexp.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_statexpz00()
	{
		{	/* Module/statexp.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzmodule_prototypez00(((long) 499400866),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 153808388),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzexpand_expanderz00(((long) 393359),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(((long) 502577506),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
			return
				BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 374700252),
				BSTRING_TO_STRING(BGl_string1332z00zzmodule_statexpz00));
		}

	}

#ifdef __cplusplus
}
#endif
