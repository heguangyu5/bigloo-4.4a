/*===========================================================================*/
/*   (Module/type.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/type.scm) */
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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;


	static obj_t BGl_z62modulezd2tvectorzd2clausez62zzmodule_typez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_delayzd2tvectorz12zc0zzmodule_typez00(obj_t,
		obj_t, bool_t);
	static obj_t BGl_z62typezd2producerzf2consumerz42zzmodule_typez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_typez00();
	static obj_t BGl_methodzd2initzd2zzmodule_typez00();
	static obj_t BGl_z62makezd2typezd2compilerz62zzmodule_typez00(obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_typez00();
	extern obj_t
		BGl_makezd2tvectorzd2accessesz00zztvector_accessz00(BgL_typez00_bglt, obj_t,
		bool_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_za2tvectorzd2typesza2zd2zzmodule_typez00 = BUNSPEC;
	static obj_t BGl_z62delayzd2tvectorz12za2zzmodule_typez00(obj_t, obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2typezd2compilerz00zzmodule_typez00();
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_typez00 = BUNSPEC;
	static obj_t BGl_z62tvectorzd2finaliza7erz17zzmodule_typez00(obj_t);
	extern BgL_typez00_bglt BGl_declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31114ze3ze5zzmodule_typez00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_typez00();
	static obj_t BGl_genericzd2initzd2zzmodule_typez00();
	extern BgL_typez00_bglt BGl_declarezd2typez12zc0zztype_envz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62typezd2finaliza7erz17zzmodule_typez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2tvectorsza2z00zzmodule_typez00 = BUNSPEC;
	extern obj_t BGl_addzd2coercionz12zc0zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza32203ze3ze70z60zzmodule_typez00(obj_t);
	static obj_t BGl_typezd2parserzd2zzmodule_typez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmodule_typez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern BgL_typez00_bglt
		BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_typez00();
	BGL_EXPORTED_DECL obj_t BGl_tvectorzd2finaliza7erz75zzmodule_typez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_typez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_typez00();
	static obj_t BGl_typezd2producerzf2consumerz20zzmodule_typez00(obj_t, obj_t);
	static obj_t BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2tvectorzd2clausez00zzmodule_typez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[10];


	   
		 
		DEFINE_STRING(BGl_string2548z00zzmodule_typez00,
		BgL_bgl_string2548za700za7za7m2561za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string2549z00zzmodule_typez00,
		BgL_bgl_string2549za700za7za7m2562za7, "Illegal `type' clause", 21);
	      DEFINE_STRING(BGl_string2550z00zzmodule_typez00,
		BgL_bgl_string2550za700za7za7m2563za7, "Subtype", 7);
	      DEFINE_STRING(BGl_string2551z00zzmodule_typez00,
		BgL_bgl_string2551za700za7za7m2564za7, "Parents are of different classes",
		32);
	      DEFINE_STRING(BGl_string2552z00zzmodule_typez00,
		BgL_bgl_string2552za700za7za7m2565za7, "Illegal type declaration", 24);
	      DEFINE_STRING(BGl_string2553z00zzmodule_typez00,
		BgL_bgl_string2553za700za7za7m2566za7, "Coercion", 8);
	      DEFINE_STRING(BGl_string2554z00zzmodule_typez00,
		BgL_bgl_string2554za700za7za7m2567za7, "Illegal coerce clause", 21);
	      DEFINE_STRING(BGl_string2555z00zzmodule_typez00,
		BgL_bgl_string2555za700za7za7m2568za7, "Illegal clause", 14);
	      DEFINE_STRING(BGl_string2556z00zzmodule_typez00,
		BgL_bgl_string2556za700za7za7m2569za7, "module_type", 11);
	      DEFINE_STRING(BGl_string2557z00zzmodule_typez00,
		BgL_bgl_string2557za700za7za7m2570za7,
		"void unit tvector coerce subtype magic bigloo @ lambda type ", 60);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2typezd2compilerzd2envzd2zzmodule_typez00,
		BgL_bgl_za762makeza7d2typeza7d2571za7,
		BGl_z62makezd2typezd2compilerz62zzmodule_typez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2producerzf2consumerzd2envzf2zzmodule_typez00,
		BgL_bgl_za762typeza7d2produc2572z00,
		BGl_z62typezd2producerzf2consumerz42zzmodule_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2tvectorzd2clausezd2envzd2zzmodule_typez00,
		BgL_bgl_za762moduleza7d2tvec2573z00,
		BGl_z62modulezd2tvectorzd2clausez62zzmodule_typez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2547z00zzmodule_typez00,
		BgL_bgl_za762za7c3za704anonymo2574za7,
		BGl_z62zc3z04anonymousza31114ze3ze5zzmodule_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_delayzd2tvectorz12zd2envz12zzmodule_typez00,
		BgL_bgl_za762delayza7d2tvect2575z00,
		BGl_z62delayzd2tvectorz12za2zzmodule_typez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tvectorzd2finaliza7erzd2envza7zzmodule_typez00,
		BgL_bgl_za762tvectorza7d2fin2576z00,
		BGl_z62tvectorzd2finaliza7erz17zzmodule_typez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_typezd2finaliza7erzd2envza7zzmodule_typez00,
		BgL_bgl_za762typeza7d2finali2577z00,
		BGl_z62typezd2finaliza7erz17zzmodule_typez00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2tvectorzd2typesza2zd2zzmodule_typez00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzmodule_typez00));
		     ADD_ROOT((void *) (&BGl_za2tvectorsza2z00zzmodule_typez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_typez00(long
		BgL_checksumz00_2333, char *BgL_fromz00_2334)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_typez00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_typez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_typez00();
					BGl_libraryzd2moduleszd2initz00zzmodule_typez00();
					BGl_cnstzd2initzd2zzmodule_typez00();
					BGl_importedzd2moduleszd2initz00zzmodule_typez00();
					return BGl_toplevelzd2initzd2zzmodule_typez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_typez00()
	{
		{	/* Module/type.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_type");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_type");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_type");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_type");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_type");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "module_type");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"module_type");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "module_type");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_typez00()
	{
		{	/* Module/type.scm 15 */
			{	/* Module/type.scm 15 */
				obj_t BgL_cportz00_2318;

				{	/* Module/type.scm 15 */
					obj_t BgL_stringz00_2326;

					BgL_stringz00_2326 = BGl_string2557z00zzmodule_typez00;
					{	/* Module/type.scm 15 */
						obj_t BgL_startz00_2327;

						BgL_startz00_2327 = BINT(((long) 0));
						{	/* Module/type.scm 15 */
							obj_t BgL_endz00_2328;

							BgL_endz00_2328 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2326)));
							{	/* Module/type.scm 15 */

								BgL_cportz00_2318 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2326, BgL_startz00_2327, BgL_endz00_2328);
				}}}}
				{
					long BgL_iz00_2319;

					BgL_iz00_2319 = ((long) 9);
				BgL_loopz00_2320:
					if ((BgL_iz00_2319 == ((long) -1)))
						{	/* Module/type.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/type.scm 15 */
							{	/* Module/type.scm 15 */
								obj_t BgL_arg2559z00_2322;

								{	/* Module/type.scm 15 */

									{	/* Module/type.scm 15 */
										obj_t BgL_locationz00_2324;

										BgL_locationz00_2324 = BBOOL(((bool_t) 0));
										{	/* Module/type.scm 15 */

											BgL_arg2559z00_2322 =
												BGl_readz00zz__readerz00(BgL_cportz00_2318,
												BgL_locationz00_2324);
										}
									}
								}
								{	/* Module/type.scm 15 */
									int BgL_tmpz00_2360;

									BgL_tmpz00_2360 = (int) (BgL_iz00_2319);
									CNST_TABLE_SET(BgL_tmpz00_2360, BgL_arg2559z00_2322);
							}}
							{	/* Module/type.scm 15 */
								int BgL_auxz00_2325;

								BgL_auxz00_2325 = (int) ((BgL_iz00_2319 - ((long) 1)));
								{
									long BgL_iz00_2365;

									BgL_iz00_2365 = (long) (BgL_auxz00_2325);
									BgL_iz00_2319 = BgL_iz00_2365;
									goto BgL_loopz00_2320;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_typez00()
	{
		{	/* Module/type.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_typez00()
	{
		{	/* Module/type.scm 15 */
			BGl_za2tvectorzd2typesza2zd2zzmodule_typez00 = BNIL;
			return (BGl_za2tvectorsza2z00zzmodule_typez00 = BNIL, BUNSPEC);
		}

	}



/* make-type-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2typezd2compilerz00zzmodule_typez00()
	{
		{	/* Module/type.scm 35 */
			{	/* Module/type.scm 36 */
				BgL_ccompz00_bglt BgL_new1054z00_192;

				{	/* Module/type.scm 37 */
					BgL_ccompz00_bglt BgL_new1053z00_195;

					BgL_new1053z00_195 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/type.scm 37 */
						long BgL_arg1115z00_196;

						{	/* Module/type.scm 37 */
							long BgL_res2219z00_1439;

							BgL_res2219z00_1439 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1115z00_196 = BgL_res2219z00_1439;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1053z00_195), BgL_arg1115z00_196);
					}
					BgL_new1054z00_192 = BgL_new1053z00_195;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1054z00_192))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1054z00_192))->BgL_producerz00) =
					((obj_t) BGl_proc2547z00zzmodule_typez00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1054z00_192))->BgL_consumerz00) =
					((obj_t) BGl_typezd2producerzf2consumerzd2envzf2zzmodule_typez00),
					BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1054z00_192))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_typezd2finaliza7erzd2envza7zzmodule_typez00), BUNSPEC);
				return ((obj_t) BgL_new1054z00_192);
			}
		}

	}



/* &make-type-compiler */
	obj_t BGl_z62makezd2typezd2compilerz62zzmodule_typez00(obj_t BgL_envz00_2300)
	{
		{	/* Module/type.scm 35 */
			return BGl_makezd2typezd2compilerz00zzmodule_typez00();
		}

	}



/* &<@anonymous:1114> */
	obj_t BGl_z62zc3z04anonymousza31114ze3ze5zzmodule_typez00(obj_t
		BgL_envz00_2301, obj_t BgL_cz00_2302)
	{
		{	/* Module/type.scm 38 */
			return
				BGl_typezd2producerzf2consumerz20zzmodule_typez00(BFALSE,
				BgL_cz00_2302);
		}

	}



/* type-producer/consumer */
	obj_t BGl_typezd2producerzf2consumerz20zzmodule_typez00(obj_t
		BgL_importz00_25, obj_t BgL_clausez00_26)
	{
		{	/* Module/type.scm 45 */
			{
				obj_t BgL_protosz00_197;

				if (PAIRP(BgL_clausez00_26))
					{	/* Module/type.scm 46 */
						BgL_protosz00_197 = CDR(BgL_clausez00_26);
						{
							obj_t BgL_l1064z00_204;

							BgL_l1064z00_204 = BgL_protosz00_197;
						BgL_zc3z04anonymousza31118ze3z87_205:
							if (PAIRP(BgL_l1064z00_204))
								{	/* Module/type.scm 48 */
									BGl_typezd2parserzd2zzmodule_typez00(BgL_importz00_25,
										CAR(BgL_l1064z00_204), BgL_clausez00_26);
									{
										obj_t BgL_l1064z00_2386;

										BgL_l1064z00_2386 = CDR(BgL_l1064z00_204);
										BgL_l1064z00_204 = BgL_l1064z00_2386;
										goto BgL_zc3z04anonymousza31118ze3z87_205;
									}
								}
							else
								{	/* Module/type.scm 48 */
									((bool_t) 1);
								}
						}
						return BNIL;
					}
				else
					{	/* Module/type.scm 46 */
						{	/* Module/type.scm 51 */
							obj_t BgL_list1122z00_210;

							BgL_list1122z00_210 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string2548z00zzmodule_typez00,
								BGl_string2549z00zzmodule_typez00, BgL_clausez00_26,
								BgL_list1122z00_210);
						}
					}
			}
		}

	}



/* &type-producer/consumer */
	obj_t BGl_z62typezd2producerzf2consumerz42zzmodule_typez00(obj_t
		BgL_envz00_2303, obj_t BgL_importz00_2304, obj_t BgL_clausez00_2305)
	{
		{	/* Module/type.scm 45 */
			return
				BGl_typezd2producerzf2consumerz20zzmodule_typez00(BgL_importz00_2304,
				BgL_clausez00_2305);
		}

	}



/* type-parser */
	obj_t BGl_typezd2parserzd2zzmodule_typez00(obj_t BgL_importz00_27,
		obj_t BgL_clausez00_28, obj_t BgL_clausesz00_29)
	{
		{	/* Module/type.scm 56 */
			{
				obj_t BgL_fromz00_229;
				obj_t BgL_toz00_230;
				obj_t BgL_checkz00_231;
				obj_t BgL_coercez00_232;
				obj_t BgL_childz00_222;
				obj_t BgL_namez00_223;
				obj_t BgL_parentz00_224;

				if (PAIRP(BgL_clausez00_28))
					{	/* Module/type.scm 58 */
						obj_t BgL_carzd2387zd2_237;
						obj_t BgL_cdrzd2388zd2_238;

						BgL_carzd2387zd2_237 = CAR(BgL_clausez00_28);
						BgL_cdrzd2388zd2_238 = CDR(BgL_clausez00_28);
						if (SYMBOLP(BgL_carzd2387zd2_237))
							{	/* Module/type.scm 58 */
								if (PAIRP(BgL_cdrzd2388zd2_238))
									{	/* Module/type.scm 58 */
										obj_t BgL_carzd2392zd2_241;

										BgL_carzd2392zd2_241 = CAR(BgL_cdrzd2388zd2_238);
										if (STRINGP(BgL_carzd2392zd2_241))
											{	/* Module/type.scm 58 */
												if (NULLP(CDR(BgL_cdrzd2388zd2_238)))
													{	/* Module/type.scm 58 */
														return
															((obj_t)
															BGl_declarezd2typez12zc0zztype_envz00
															(BgL_carzd2387zd2_237, BgL_carzd2392zd2_241,
																CNST_TABLE_REF(((long) 3))));
													}
												else
													{	/* Module/type.scm 58 */
														obj_t BgL_carzd2420zd2_248;
														obj_t BgL_cdrzd2421zd2_249;

														BgL_carzd2420zd2_248 =
															CAR(((obj_t) BgL_cdrzd2388zd2_238));
														BgL_cdrzd2421zd2_249 =
															CDR(((obj_t) BgL_cdrzd2388zd2_238));
														if (STRINGP(BgL_carzd2420zd2_248))
															{	/* Module/type.scm 58 */
																if (PAIRP(BgL_cdrzd2421zd2_249))
																	{	/* Module/type.scm 58 */
																		obj_t BgL_carzd2427zd2_252;

																		BgL_carzd2427zd2_252 =
																			CAR(BgL_cdrzd2421zd2_249);
																		if (SYMBOLP(BgL_carzd2427zd2_252))
																			{	/* Module/type.scm 58 */
																				if (NULLP(CDR(BgL_cdrzd2421zd2_249)))
																					{	/* Module/type.scm 58 */
																						return
																							((obj_t)
																							BGl_declarezd2typez12zc0zztype_envz00
																							(BgL_carzd2387zd2_237,
																								BgL_carzd2420zd2_248,
																								BgL_carzd2427zd2_252));
																					}
																				else
																					{	/* Module/type.scm 58 */
																						if (
																							(CAR(BgL_clausez00_28) ==
																								CNST_TABLE_REF(((long) 4))))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd2453zd2_259;
																								obj_t BgL_cdrzd2454zd2_260;

																								BgL_carzd2453zd2_259 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2388zd2_238));
																								BgL_cdrzd2454zd2_260 =
																									CDR(((obj_t)
																										BgL_cdrzd2388zd2_238));
																								if (SYMBOLP
																									(BgL_carzd2453zd2_259))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd2462zd2_262;
																										obj_t BgL_cdrzd2463zd2_263;

																										BgL_carzd2462zd2_262 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2454zd2_260));
																										BgL_cdrzd2463zd2_263 =
																											CDR(((obj_t)
																												BgL_cdrzd2454zd2_260));
																										if (STRINGP
																											(BgL_carzd2462zd2_262))
																											{	/* Module/type.scm 58 */
																												if (PAIRP
																													(BgL_cdrzd2463zd2_263))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd2469zd2_266;
																														BgL_carzd2469zd2_266
																															=
																															CAR
																															(BgL_cdrzd2463zd2_263);
																														if (SYMBOLP
																															(BgL_carzd2469zd2_266))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_cdrzd2463zd2_263)))
																																	{	/* Module/type.scm 69 */
																																		BgL_typez00_bglt
																																			BgL_typez00_1573;
																																		BgL_typez00_1573
																																			=
																																			BGl_declarezd2typez12zc0zztype_envz00
																																			(BgL_carzd2453zd2_259,
																																			BgL_carzd2462zd2_262,
																																			BgL_carzd2469zd2_266);
																																		((((BgL_typez00_bglt) COBJECT(BgL_typez00_1573))->BgL_magiczf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																																		return
																																			((obj_t)
																																			BgL_typez00_1573);
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																	BgL_tagzd2373zd2_234:
																																		{	/* Module/type.scm 143 */
																																			obj_t
																																				BgL_list2179z00_1365;
																																			BgL_list2179z00_1365
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BNIL,
																																				BNIL);
																																			return
																																				BGl_userzd2errorzd2zztools_errorz00
																																				(BGl_string2548z00zzmodule_typez00,
																																				BGl_string2552z00zzmodule_typez00,
																																				BgL_clausez00_28,
																																				BgL_list2179z00_1365);
																																		}
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								if (
																									(CAR(BgL_clausez00_28) ==
																										CNST_TABLE_REF(((long) 5))))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd2634zd2_274;
																										obj_t BgL_cdrzd2635zd2_275;

																										BgL_carzd2634zd2_274 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2388zd2_238));
																										BgL_cdrzd2635zd2_275 =
																											CDR(((obj_t)
																												BgL_cdrzd2388zd2_238));
																										if (SYMBOLP
																											(BgL_carzd2634zd2_274))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd2644zd2_277;
																												obj_t
																													BgL_cdrzd2645zd2_278;
																												BgL_carzd2644zd2_277 =
																													CAR(((obj_t)
																														BgL_cdrzd2635zd2_275));
																												BgL_cdrzd2645zd2_278 =
																													CDR(((obj_t)
																														BgL_cdrzd2635zd2_275));
																												if (STRINGP
																													(BgL_carzd2644zd2_277))
																													{	/* Module/type.scm 58 */
																														if (PAIRP
																															(BgL_cdrzd2645zd2_278))
																															{	/* Module/type.scm 58 */
																																obj_t
																																	BgL_carzd2651zd2_281;
																																BgL_carzd2651zd2_281
																																	=
																																	CAR
																																	(BgL_cdrzd2645zd2_278);
																																if (PAIRP
																																	(BgL_carzd2651zd2_281))
																																	{	/* Module/type.scm 58 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd2645zd2_278)))
																																			{	/* Module/type.scm 58 */
																																				BgL_childz00_222
																																					=
																																					BgL_carzd2634zd2_274;
																																				BgL_namez00_223
																																					=
																																					BgL_carzd2644zd2_277;
																																				BgL_parentz00_224
																																					=
																																					BgL_carzd2651zd2_281;
																																			BgL_tagzd2370zd2_225:
																																				{
																																					obj_t
																																						BgL_walkz00_1066;
																																					obj_t
																																						BgL_classz00_1067;
																																					BgL_walkz00_1066
																																						=
																																						BgL_parentz00_224;
																																					BgL_classz00_1067
																																						=
																																						BUNSPEC;
																																				BgL_zc3z04anonymousza32023ze3z87_1068:
																																					if (NULLP(BgL_walkz00_1066))
																																						{	/* Module/type.scm 77 */
																																							return
																																								(
																																								(obj_t)
																																								BGl_declarezd2subtypez12zc0zztype_envz00
																																								(BgL_childz00_222,
																																									BgL_namez00_223,
																																									BgL_parentz00_224,
																																									BgL_classz00_1067));
																																						}
																																					else
																																						{	/* Module/type.scm 79 */
																																							bool_t
																																								BgL_test2604z00_2482;
																																							{	/* Module/type.scm 79 */
																																								obj_t
																																									BgL_tmpz00_2483;
																																								BgL_tmpz00_2483
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_walkz00_1066));
																																								BgL_test2604z00_2482
																																									=
																																									SYMBOLP
																																									(BgL_tmpz00_2483);
																																							}
																																							if (BgL_test2604z00_2482)
																																								{	/* Module/type.scm 82 */
																																									BgL_typez00_bglt
																																										BgL_tparentz00_1072;
																																									{	/* Module/type.scm 82 */
																																										obj_t
																																											BgL_arg2040z00_1086;
																																										BgL_arg2040z00_1086
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_walkz00_1066));
																																										BgL_tparentz00_1072
																																											=
																																											BGl_findzd2typezd2zztype_envz00
																																											(BgL_arg2040z00_1086);
																																									}
																																									{	/* Module/type.scm 86 */
																																										bool_t
																																											BgL_test2605z00_2490;
																																										if (SYMBOLP(BgL_classz00_1067))
																																											{	/* Module/type.scm 86 */
																																												if ((BgL_classz00_1067 == (((BgL_typez00_bglt) COBJECT(BgL_tparentz00_1072))->BgL_classz00)))
																																													{	/* Module/type.scm 87 */
																																														BgL_test2605z00_2490
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																												else
																																													{	/* Module/type.scm 87 */
																																														BgL_test2605z00_2490
																																															=
																																															(
																																															(bool_t)
																																															1);
																																													}
																																											}
																																										else
																																											{	/* Module/type.scm 86 */
																																												BgL_test2605z00_2490
																																													=
																																													(
																																													(bool_t)
																																													0);
																																											}
																																										if (BgL_test2605z00_2490)
																																											{	/* Module/type.scm 86 */
																																												return
																																													BGl_userzd2errorzd2zztools_errorz00
																																													(BGl_string2550z00zzmodule_typez00,
																																													BGl_string2551z00zzmodule_typez00,
																																													BgL_clausez00_28,
																																													BNIL);
																																											}
																																										else
																																											{	/* Module/type.scm 92 */
																																												obj_t
																																													BgL_arg2036z00_1080;
																																												obj_t
																																													BgL_arg2037z00_1081;
																																												BgL_arg2036z00_1080
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_walkz00_1066));
																																												BgL_arg2037z00_1081
																																													=
																																													(
																																													((BgL_typez00_bglt) COBJECT(BgL_tparentz00_1072))->BgL_classz00);
																																												{
																																													obj_t
																																														BgL_classz00_2501;
																																													obj_t
																																														BgL_walkz00_2500;
																																													BgL_walkz00_2500
																																														=
																																														BgL_arg2036z00_1080;
																																													BgL_classz00_2501
																																														=
																																														BgL_arg2037z00_1081;
																																													BgL_classz00_1067
																																														=
																																														BgL_classz00_2501;
																																													BgL_walkz00_1066
																																														=
																																														BgL_walkz00_2500;
																																													goto
																																														BgL_zc3z04anonymousza32023ze3z87_1068;
																																												}
																																											}
																																									}
																																								}
																																							else
																																								{	/* Module/type.scm 79 */
																																									return
																																										BGl_userzd2errorzd2zztools_errorz00
																																										(BGl_string2548z00zzmodule_typez00,
																																										BGl_string2552z00zzmodule_typez00,
																																										BgL_clausez00_28,
																																										BNIL);
																																								}
																																						}
																																				}
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd2373zd2_234;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										obj_t BgL_cdrzd2755zd2_286;

																										BgL_cdrzd2755zd2_286 =
																											CDR(BgL_clausez00_28);
																										if (
																											(CAR(BgL_clausez00_28) ==
																												CNST_TABLE_REF(((long)
																														6))))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd2762zd2_289;
																												obj_t
																													BgL_cdrzd2763zd2_290;
																												BgL_carzd2762zd2_289 =
																													CAR(((obj_t)
																														BgL_cdrzd2755zd2_286));
																												BgL_cdrzd2763zd2_290 =
																													CDR(((obj_t)
																														BgL_cdrzd2755zd2_286));
																												if (SYMBOLP
																													(BgL_carzd2762zd2_289))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd2773zd2_292;
																														obj_t
																															BgL_cdrzd2774zd2_293;
																														BgL_carzd2773zd2_292
																															=
																															CAR(((obj_t)
																																BgL_cdrzd2763zd2_290));
																														BgL_cdrzd2774zd2_293
																															=
																															CDR(((obj_t)
																																BgL_cdrzd2763zd2_290));
																														if (SYMBOLP
																															(BgL_carzd2773zd2_292))
																															{	/* Module/type.scm 58 */
																																if (PAIRP
																																	(BgL_cdrzd2774zd2_293))
																																	{	/* Module/type.scm 58 */
																																		obj_t
																																			BgL_cdrzd2783zd2_296;
																																		BgL_cdrzd2783zd2_296
																																			=
																																			CDR
																																			(BgL_cdrzd2774zd2_293);
																																		if (PAIRP
																																			(BgL_cdrzd2783zd2_296))
																																			{	/* Module/type.scm 58 */
																																				if (NULLP(CDR(BgL_cdrzd2783zd2_296)))
																																					{	/* Module/type.scm 58 */
																																						BgL_fromz00_229
																																							=
																																							BgL_carzd2762zd2_289;
																																						BgL_toz00_230
																																							=
																																							BgL_carzd2773zd2_292;
																																						BgL_checkz00_231
																																							=
																																							CAR
																																							(BgL_cdrzd2774zd2_293);
																																						BgL_coercez00_232
																																							=
																																							CAR
																																							(BgL_cdrzd2783zd2_296);
																																					BgL_tagzd2372zd2_233:
																																						{	/* Module/type.scm 97 */
																																							bool_t
																																								BgL_test2614z00_2528;
																																							{	/* Module/type.scm 97 */
																																								bool_t
																																									BgL_test2615z00_2529;
																																								{
																																									obj_t
																																										BgL_checkz00_1326;
																																									{	/* Module/type.scm 97 */
																																										obj_t
																																											BgL_tmpz00_2530;
																																										BgL_checkz00_1326
																																											=
																																											BgL_checkz00_231;
																																									BgL_zc3z04anonymousza32165ze3z87_1327:
																																										if (NULLP(BgL_checkz00_1326))
																																											{	/* Module/type.scm 99 */
																																												BgL_tmpz00_2530
																																													=
																																													BTRUE;
																																											}
																																										else
																																											{	/* Module/type.scm 101 */
																																												bool_t
																																													BgL_test2617z00_2533;
																																												{	/* Module/type.scm 101 */
																																													obj_t
																																														BgL_tmpz00_2534;
																																													BgL_tmpz00_2534
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_checkz00_1326));
																																													BgL_test2617z00_2533
																																														=
																																														SYMBOLP
																																														(BgL_tmpz00_2534);
																																												}
																																												if (BgL_test2617z00_2533)
																																													{	/* Module/type.scm 112 */
																																														obj_t
																																															BgL_arg2166z00_1330;
																																														BgL_arg2166z00_1330
																																															=
																																															CDR
																																															(
																																															((obj_t) BgL_checkz00_1326));
																																														{
																																															obj_t
																																																BgL_checkz00_2540;
																																															BgL_checkz00_2540
																																																=
																																																BgL_arg2166z00_1330;
																																															BgL_checkz00_1326
																																																=
																																																BgL_checkz00_2540;
																																															goto
																																																BgL_zc3z04anonymousza32165ze3z87_1327;
																																														}
																																													}
																																												else
																																													{

																																														{	/* Module/type.scm 102 */
																																															obj_t
																																																BgL_ezd25888zd2_1334;
																																															BgL_ezd25888zd2_1334
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_checkz00_1326));
																																															if (PAIRP(BgL_ezd25888zd2_1334))
																																																{	/* Module/type.scm 102 */
																																																	obj_t
																																																		BgL_cdrzd25890zd2_1336;
																																																	BgL_cdrzd25890zd2_1336
																																																		=
																																																		CDR
																																																		(BgL_ezd25888zd2_1334);
																																																	if ((CAR(BgL_ezd25888zd2_1334) == CNST_TABLE_REF(((long) 1))))
																																																		{	/* Module/type.scm 102 */
																																																			if (PAIRP(BgL_cdrzd25890zd2_1336))
																																																				{	/* Module/type.scm 102 */
																																																					obj_t
																																																						BgL_carzd25891zd2_1339;
																																																					obj_t
																																																						BgL_cdrzd25892zd2_1340;
																																																					BgL_carzd25891zd2_1339
																																																						=
																																																						CAR
																																																						(BgL_cdrzd25890zd2_1336);
																																																					BgL_cdrzd25892zd2_1340
																																																						=
																																																						CDR
																																																						(BgL_cdrzd25890zd2_1336);
																																																					if (PAIRP(BgL_carzd25891zd2_1339))
																																																						{	/* Module/type.scm 102 */
																																																							if (NULLP(CDR(BgL_carzd25891zd2_1339)))
																																																								{	/* Module/type.scm 102 */
																																																									if (PAIRP(BgL_cdrzd25892zd2_1340))
																																																										{	/* Module/type.scm 102 */
																																																											if (NULLP(CDR(BgL_cdrzd25892zd2_1340)))
																																																												{	/* Module/type.scm 102 */
																																																													{	/* Module/type.scm 104 */
																																																														obj_t
																																																															BgL_arg2175z00_1360;
																																																														BgL_arg2175z00_1360
																																																															=
																																																															CDR
																																																															(
																																																															((obj_t) BgL_checkz00_1326));
																																																														{
																																																															obj_t
																																																																BgL_checkz00_2566;
																																																															BgL_checkz00_2566
																																																																=
																																																																BgL_arg2175z00_1360;
																																																															BgL_checkz00_1326
																																																																=
																																																																BgL_checkz00_2566;
																																																															goto
																																																																BgL_zc3z04anonymousza32165ze3z87_1327;
																																																														}
																																																													}
																																																												}
																																																											else
																																																												{	/* Module/type.scm 102 */
																																																												BgL_tagzd25887zd2_1333:
																																																													{	/* Module/type.scm 108 */
																																																														obj_t
																																																															BgL_list2177z00_1362;
																																																														BgL_list2177z00_1362
																																																															=
																																																															MAKE_YOUNG_PAIR
																																																															(BFALSE,
																																																															BNIL);
																																																														BgL_tmpz00_2530
																																																															=
																																																															BGl_userzd2errorzd2zztools_errorz00
																																																															(BGl_string2553z00zzmodule_typez00,
																																																															BGl_string2554z00zzmodule_typez00,
																																																															BgL_clausez00_28,
																																																															BgL_list2177z00_1362);
																																																													}
																																																												}
																																																										}
																																																									else
																																																										{	/* Module/type.scm 102 */
																																																											goto
																																																												BgL_tagzd25887zd2_1333;
																																																										}
																																																								}
																																																							else
																																																								{	/* Module/type.scm 102 */
																																																									goto
																																																										BgL_tagzd25887zd2_1333;
																																																								}
																																																						}
																																																					else
																																																						{	/* Module/type.scm 102 */
																																																							goto
																																																								BgL_tagzd25887zd2_1333;
																																																						}
																																																				}
																																																			else
																																																				{	/* Module/type.scm 102 */
																																																					goto
																																																						BgL_tagzd25887zd2_1333;
																																																				}
																																																		}
																																																	else
																																																		{	/* Module/type.scm 102 */
																																																			if ((CAR(BgL_ezd25888zd2_1334) == CNST_TABLE_REF(((long) 2))))
																																																				{	/* Module/type.scm 102 */
																																																					if (PAIRP(BgL_cdrzd25890zd2_1336))
																																																						{	/* Module/type.scm 102 */
																																																							obj_t
																																																								BgL_cdrzd25900zd2_1350;
																																																							BgL_cdrzd25900zd2_1350
																																																								=
																																																								CDR
																																																								(BgL_cdrzd25890zd2_1336);
																																																							{	/* Module/type.scm 102 */
																																																								bool_t
																																																									BgL_test2627z00_2576;
																																																								{	/* Module/type.scm 102 */
																																																									obj_t
																																																										BgL_tmpz00_2577;
																																																									BgL_tmpz00_2577
																																																										=
																																																										CAR
																																																										(BgL_cdrzd25890zd2_1336);
																																																									BgL_test2627z00_2576
																																																										=
																																																										SYMBOLP
																																																										(BgL_tmpz00_2577);
																																																								}
																																																								if (BgL_test2627z00_2576)
																																																									{	/* Module/type.scm 102 */
																																																										if (PAIRP(BgL_cdrzd25900zd2_1350))
																																																											{	/* Module/type.scm 102 */
																																																												bool_t
																																																													BgL_test2629z00_2582;
																																																												{	/* Module/type.scm 102 */
																																																													obj_t
																																																														BgL_tmpz00_2583;
																																																													BgL_tmpz00_2583
																																																														=
																																																														CAR
																																																														(BgL_cdrzd25900zd2_1350);
																																																													BgL_test2629z00_2582
																																																														=
																																																														SYMBOLP
																																																														(BgL_tmpz00_2583);
																																																												}
																																																												if (BgL_test2629z00_2582)
																																																													{	/* Module/type.scm 102 */
																																																														if (NULLP(CDR(BgL_cdrzd25900zd2_1350)))
																																																															{	/* Module/type.scm 102 */
																																																																{	/* Module/type.scm 106 */
																																																																	obj_t
																																																																		BgL_arg2176z00_1361;
																																																																	BgL_arg2176z00_1361
																																																																		=
																																																																		CDR
																																																																		(
																																																																		((obj_t) BgL_checkz00_1326));
																																																																	{
																																																																		obj_t
																																																																			BgL_checkz00_2591;
																																																																		BgL_checkz00_2591
																																																																			=
																																																																			BgL_arg2176z00_1361;
																																																																		BgL_checkz00_1326
																																																																			=
																																																																			BgL_checkz00_2591;
																																																																		goto
																																																																			BgL_zc3z04anonymousza32165ze3z87_1327;
																																																																	}
																																																																}
																																																															}
																																																														else
																																																															{	/* Module/type.scm 102 */
																																																																goto
																																																																	BgL_tagzd25887zd2_1333;
																																																															}
																																																													}
																																																												else
																																																													{	/* Module/type.scm 102 */
																																																														goto
																																																															BgL_tagzd25887zd2_1333;
																																																													}
																																																											}
																																																										else
																																																											{	/* Module/type.scm 102 */
																																																												goto
																																																													BgL_tagzd25887zd2_1333;
																																																											}
																																																									}
																																																								else
																																																									{	/* Module/type.scm 102 */
																																																										goto
																																																											BgL_tagzd25887zd2_1333;
																																																									}
																																																							}
																																																						}
																																																					else
																																																						{	/* Module/type.scm 102 */
																																																							goto
																																																								BgL_tagzd25887zd2_1333;
																																																						}
																																																				}
																																																			else
																																																				{	/* Module/type.scm 102 */
																																																					goto
																																																						BgL_tagzd25887zd2_1333;
																																																				}
																																																		}
																																																}
																																															else
																																																{	/* Module/type.scm 102 */
																																																	goto
																																																		BgL_tagzd25887zd2_1333;
																																																}
																																														}
																																													}
																																											}
																																										BgL_test2615z00_2529
																																											=
																																											CBOOL
																																											(BgL_tmpz00_2530);
																																									}
																																								}
																																								if (BgL_test2615z00_2529)
																																									{
																																										obj_t
																																											BgL_coercez00_1291;
																																										{	/* Module/type.scm 113 */
																																											obj_t
																																												BgL_tmpz00_2593;
																																											BgL_coercez00_1291
																																												=
																																												BgL_coercez00_232;
																																										BgL_zc3z04anonymousza32156ze3z87_1292:
																																											if (NULLP(BgL_coercez00_1291))
																																												{	/* Module/type.scm 115 */
																																													BgL_tmpz00_2593
																																														=
																																														BTRUE;
																																												}
																																											else
																																												{	/* Module/type.scm 117 */
																																													bool_t
																																														BgL_test2632z00_2596;
																																													{	/* Module/type.scm 117 */
																																														obj_t
																																															BgL_ezd25907zd2_1301;
																																														BgL_ezd25907zd2_1301
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_coercez00_1291));
																																														if (SYMBOLP(BgL_ezd25907zd2_1301))
																																															{	/* Module/type.scm 117 */
																																																BgL_test2632z00_2596
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																														else
																																															{	/* Module/type.scm 117 */
																																																if (PAIRP(BgL_ezd25907zd2_1301))
																																																	{	/* Module/type.scm 117 */
																																																		obj_t
																																																			BgL_cdrzd25909zd2_1304;
																																																		BgL_cdrzd25909zd2_1304
																																																			=
																																																			CDR
																																																			(BgL_ezd25907zd2_1301);
																																																		if ((CAR(BgL_ezd25907zd2_1301) == CNST_TABLE_REF(((long) 2))))
																																																			{	/* Module/type.scm 117 */
																																																				if (PAIRP(BgL_cdrzd25909zd2_1304))
																																																					{	/* Module/type.scm 117 */
																																																						obj_t
																																																							BgL_cdrzd25911zd2_1307;
																																																						BgL_cdrzd25911zd2_1307
																																																							=
																																																							CDR
																																																							(BgL_cdrzd25909zd2_1304);
																																																						{	/* Module/type.scm 117 */
																																																							bool_t
																																																								BgL_test2637z00_2611;
																																																							{	/* Module/type.scm 117 */
																																																								obj_t
																																																									BgL_tmpz00_2612;
																																																								BgL_tmpz00_2612
																																																									=
																																																									CAR
																																																									(BgL_cdrzd25909zd2_1304);
																																																								BgL_test2637z00_2611
																																																									=
																																																									SYMBOLP
																																																									(BgL_tmpz00_2612);
																																																							}
																																																							if (BgL_test2637z00_2611)
																																																								{	/* Module/type.scm 117 */
																																																									if (PAIRP(BgL_cdrzd25911zd2_1307))
																																																										{	/* Module/type.scm 117 */
																																																											bool_t
																																																												BgL_test2639z00_2617;
																																																											{	/* Module/type.scm 117 */
																																																												obj_t
																																																													BgL_tmpz00_2618;
																																																												BgL_tmpz00_2618
																																																													=
																																																													CAR
																																																													(BgL_cdrzd25911zd2_1307);
																																																												BgL_test2639z00_2617
																																																													=
																																																													SYMBOLP
																																																													(BgL_tmpz00_2618);
																																																											}
																																																											if (BgL_test2639z00_2617)
																																																												{	/* Module/type.scm 117 */
																																																													if (NULLP(CDR(BgL_cdrzd25911zd2_1307)))
																																																														{	/* Module/type.scm 117 */
																																																															BgL_test2632z00_2596
																																																																=
																																																																(
																																																																(bool_t)
																																																																0);
																																																														}
																																																													else
																																																														{	/* Module/type.scm 117 */
																																																															BgL_test2632z00_2596
																																																																=
																																																																(
																																																																(bool_t)
																																																																1);
																																																														}
																																																												}
																																																											else
																																																												{	/* Module/type.scm 117 */
																																																													BgL_test2632z00_2596
																																																														=
																																																														(
																																																														(bool_t)
																																																														1);
																																																												}
																																																										}
																																																									else
																																																										{	/* Module/type.scm 117 */
																																																											BgL_test2632z00_2596
																																																												=
																																																												(
																																																												(bool_t)
																																																												1);
																																																										}
																																																								}
																																																							else
																																																								{	/* Module/type.scm 117 */
																																																									BgL_test2632z00_2596
																																																										=
																																																										(
																																																										(bool_t)
																																																										1);
																																																								}
																																																						}
																																																					}
																																																				else
																																																					{	/* Module/type.scm 117 */
																																																						BgL_test2632z00_2596
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																			}
																																																		else
																																																			{	/* Module/type.scm 117 */
																																																				if ((CAR(BgL_ezd25907zd2_1301) == CNST_TABLE_REF(((long) 1))))
																																																					{	/* Module/type.scm 117 */
																																																						if (PAIRP(BgL_cdrzd25909zd2_1304))
																																																							{	/* Module/type.scm 117 */
																																																								obj_t
																																																									BgL_carzd25916zd2_1318;
																																																								BgL_carzd25916zd2_1318
																																																									=
																																																									CAR
																																																									(BgL_cdrzd25909zd2_1304);
																																																								if (PAIRP(BgL_carzd25916zd2_1318))
																																																									{	/* Module/type.scm 117 */
																																																										if (NULLP(CDR(BgL_carzd25916zd2_1318)))
																																																											{	/* Module/type.scm 117 */
																																																												BgL_test2632z00_2596
																																																													=
																																																													(
																																																													(bool_t)
																																																													0);
																																																											}
																																																										else
																																																											{	/* Module/type.scm 117 */
																																																												BgL_test2632z00_2596
																																																													=
																																																													(
																																																													(bool_t)
																																																													1);
																																																											}
																																																									}
																																																								else
																																																									{	/* Module/type.scm 117 */
																																																										BgL_test2632z00_2596
																																																											=
																																																											(
																																																											(bool_t)
																																																											1);
																																																									}
																																																							}
																																																						else
																																																							{	/* Module/type.scm 117 */
																																																								BgL_test2632z00_2596
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																					}
																																																				else
																																																					{	/* Module/type.scm 117 */
																																																						BgL_test2632z00_2596
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																			}
																																																	}
																																																else
																																																	{	/* Module/type.scm 117 */
																																																		BgL_test2632z00_2596
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																															}
																																													}
																																													if (BgL_test2632z00_2596)
																																														{	/* Module/type.scm 122 */
																																															obj_t
																																																BgL_list2157z00_1295;
																																															BgL_list2157z00_1295
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BFALSE,
																																																BNIL);
																																															BgL_tmpz00_2593
																																																=
																																																BGl_userzd2errorzd2zztools_errorz00
																																																(BGl_string2553z00zzmodule_typez00,
																																																BGl_string2555z00zzmodule_typez00,
																																																BgL_clausez00_28,
																																																BgL_list2157z00_1295);
																																														}
																																													else
																																														{	/* Module/type.scm 124 */
																																															obj_t
																																																BgL_arg2158z00_1296;
																																															BgL_arg2158z00_1296
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_coercez00_1291));
																																															{
																																																obj_t
																																																	BgL_coercez00_2640;
																																																BgL_coercez00_2640
																																																	=
																																																	BgL_arg2158z00_1296;
																																																BgL_coercez00_1291
																																																	=
																																																	BgL_coercez00_2640;
																																																goto
																																																	BgL_zc3z04anonymousza32156ze3z87_1292;
																																															}
																																														}
																																												}
																																											BgL_test2614z00_2528
																																												=
																																												CBOOL
																																												(BgL_tmpz00_2593);
																																										}
																																									}
																																								else
																																									{	/* Module/type.scm 97 */
																																										BgL_test2614z00_2528
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																							if (BgL_test2614z00_2528)
																																								{	/* Module/type.scm 125 */
																																									obj_t
																																										BgL_locz00_1248;
																																									BgL_locz00_1248
																																										=
																																										BGl_findzd2locationzd2zztools_locationz00
																																										(BgL_clausez00_28);
																																									{	/* Module/type.scm 125 */
																																										BgL_typez00_bglt
																																											BgL_tfromz00_1249;
																																										BgL_tfromz00_1249
																																											=
																																											BGl_usezd2typez12zc0zztype_envz00
																																											(BgL_fromz00_229,
																																											BgL_locz00_1248);
																																										{	/* Module/type.scm 126 */
																																											BgL_typez00_bglt
																																												BgL_ttoz00_1250;
																																											BgL_ttoz00_1250
																																												=
																																												BGl_usezd2typez12zc0zztype_envz00
																																												(BgL_toz00_230,
																																												BgL_locz00_1248);
																																											{	/* Module/type.scm 127 */
																																												obj_t
																																													BgL_checksz00_1251;
																																												if (NULLP(BgL_checkz00_231))
																																													{	/* Module/type.scm 129 */
																																														obj_t
																																															BgL_arg2149z00_1274;
																																														BgL_arg2149z00_1274
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BTRUE,
																																															((obj_t) BgL_tfromz00_1249));
																																														{	/* Module/type.scm 129 */
																																															obj_t
																																																BgL_list2150z00_1275;
																																															BgL_list2150z00_1275
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BgL_arg2149z00_1274,
																																																BNIL);
																																															BgL_checksz00_1251
																																																=
																																																BgL_list2150z00_1275;
																																														}
																																													}
																																												else
																																													{	/* Module/type.scm 130 */
																																														obj_t
																																															BgL_head1068z00_1278;
																																														{	/* Module/type.scm 130 */
																																															obj_t
																																																BgL_res2254z00_1521;
																																															BgL_res2254z00_1521
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BNIL,
																																																BNIL);
																																															BgL_head1068z00_1278
																																																=
																																																BgL_res2254z00_1521;
																																														}
																																														{
																																															obj_t
																																																BgL_l1066z00_1280;
																																															obj_t
																																																BgL_tail1069z00_1281;
																																															BgL_l1066z00_1280
																																																=
																																																BgL_checkz00_231;
																																															BgL_tail1069z00_1281
																																																=
																																																BgL_head1068z00_1278;
																																														BgL_zc3z04anonymousza32152ze3z87_1282:
																																															if (NULLP(BgL_l1066z00_1280))
																																																{	/* Module/type.scm 130 */
																																																	BgL_checksz00_1251
																																																		=
																																																		CDR
																																																		(BgL_head1068z00_1278);
																																																}
																																															else
																																																{	/* Module/type.scm 130 */
																																																	obj_t
																																																		BgL_newtail1070z00_1284;
																																																	{	/* Module/type.scm 130 */
																																																		obj_t
																																																			BgL_arg2155z00_1286;
																																																		{	/* Module/type.scm 130 */
																																																			obj_t
																																																				BgL_cz00_1287;
																																																			BgL_cz00_1287
																																																				=
																																																				CAR
																																																				(
																																																				((obj_t) BgL_l1066z00_1280));
																																																			BgL_arg2155z00_1286
																																																				=
																																																				MAKE_YOUNG_PAIR
																																																				(BgL_cz00_1287,
																																																				((obj_t) BgL_tfromz00_1249));
																																																		}
																																																		{	/* Module/type.scm 130 */
																																																			obj_t
																																																				BgL_res2256z00_1525;
																																																			BgL_res2256z00_1525
																																																				=
																																																				MAKE_YOUNG_PAIR
																																																				(BgL_arg2155z00_1286,
																																																				BNIL);
																																																			BgL_newtail1070z00_1284
																																																				=
																																																				BgL_res2256z00_1525;
																																																		}
																																																	}
																																																	SET_CDR
																																																		(BgL_tail1069z00_1281,
																																																		BgL_newtail1070z00_1284);
																																																	{	/* Module/type.scm 130 */
																																																		obj_t
																																																			BgL_arg2154z00_1285;
																																																		BgL_arg2154z00_1285
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_l1066z00_1280));
																																																		{
																																																			obj_t
																																																				BgL_tail1069z00_2663;
																																																			obj_t
																																																				BgL_l1066z00_2662;
																																																			BgL_l1066z00_2662
																																																				=
																																																				BgL_arg2154z00_1285;
																																																			BgL_tail1069z00_2663
																																																				=
																																																				BgL_newtail1070z00_1284;
																																																			BgL_tail1069z00_1281
																																																				=
																																																				BgL_tail1069z00_2663;
																																																			BgL_l1066z00_1280
																																																				=
																																																				BgL_l1066z00_2662;
																																																			goto
																																																				BgL_zc3z04anonymousza32152ze3z87_1282;
																																																		}
																																																	}
																																																}
																																														}
																																													}
																																												{	/* Module/type.scm 128 */
																																													obj_t
																																														BgL_coercesz00_1252;
																																													if (NULLP(BgL_coercez00_232))
																																														{	/* Module/type.scm 132 */
																																															obj_t
																																																BgL_arg2141z00_1258;
																																															BgL_arg2141z00_1258
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BTRUE,
																																																((obj_t) BgL_ttoz00_1250));
																																															{	/* Module/type.scm 132 */
																																																obj_t
																																																	BgL_list2142z00_1259;
																																																BgL_list2142z00_1259
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BgL_arg2141z00_1258,
																																																	BNIL);
																																																BgL_coercesz00_1252
																																																	=
																																																	BgL_list2142z00_1259;
																																															}
																																														}
																																													else
																																														{	/* Module/type.scm 133 */
																																															obj_t
																																																BgL_head1073z00_1262;
																																															{	/* Module/type.scm 133 */
																																																obj_t
																																																	BgL_res2260z00_1531;
																																																BgL_res2260z00_1531
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BNIL,
																																																	BNIL);
																																																BgL_head1073z00_1262
																																																	=
																																																	BgL_res2260z00_1531;
																																															}
																																															{
																																																obj_t
																																																	BgL_l1071z00_1264;
																																																obj_t
																																																	BgL_tail1074z00_1265;
																																																BgL_l1071z00_1264
																																																	=
																																																	BgL_coercez00_232;
																																																BgL_tail1074z00_1265
																																																	=
																																																	BgL_head1073z00_1262;
																																															BgL_zc3z04anonymousza32144ze3z87_1266:
																																																if (NULLP(BgL_l1071z00_1264))
																																																	{	/* Module/type.scm 133 */
																																																		BgL_coercesz00_1252
																																																			=
																																																			CDR
																																																			(BgL_head1073z00_1262);
																																																	}
																																																else
																																																	{	/* Module/type.scm 133 */
																																																		obj_t
																																																			BgL_newtail1075z00_1268;
																																																		{	/* Module/type.scm 133 */
																																																			obj_t
																																																				BgL_arg2147z00_1270;
																																																			{	/* Module/type.scm 133 */
																																																				obj_t
																																																					BgL_cz00_1271;
																																																				BgL_cz00_1271
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_l1071z00_1264));
																																																				BgL_arg2147z00_1270
																																																					=
																																																					MAKE_YOUNG_PAIR
																																																					(BgL_cz00_1271,
																																																					((obj_t) BgL_ttoz00_1250));
																																																			}
																																																			{	/* Module/type.scm 133 */
																																																				obj_t
																																																					BgL_res2262z00_1535;
																																																				BgL_res2262z00_1535
																																																					=
																																																					MAKE_YOUNG_PAIR
																																																					(BgL_arg2147z00_1270,
																																																					BNIL);
																																																				BgL_newtail1075z00_1268
																																																					=
																																																					BgL_res2262z00_1535;
																																																			}
																																																		}
																																																		SET_CDR
																																																			(BgL_tail1074z00_1265,
																																																			BgL_newtail1075z00_1268);
																																																		{	/* Module/type.scm 133 */
																																																			obj_t
																																																				BgL_arg2146z00_1269;
																																																			BgL_arg2146z00_1269
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_l1071z00_1264));
																																																			{
																																																				obj_t
																																																					BgL_tail1074z00_2682;
																																																				obj_t
																																																					BgL_l1071z00_2681;
																																																				BgL_l1071z00_2681
																																																					=
																																																					BgL_arg2146z00_1269;
																																																				BgL_tail1074z00_2682
																																																					=
																																																					BgL_newtail1075z00_1268;
																																																				BgL_tail1074z00_1265
																																																					=
																																																					BgL_tail1074z00_2682;
																																																				BgL_l1071z00_1264
																																																					=
																																																					BgL_l1071z00_2681;
																																																				goto
																																																					BgL_zc3z04anonymousza32144ze3z87_1266;
																																																			}
																																																		}
																																																	}
																																															}
																																														}
																																													{	/* Module/type.scm 131 */

																																														return
																																															BGl_addzd2coercionz12zc0zztype_coercionz00
																																															(BgL_tfromz00_1249,
																																															BgL_ttoz00_1250,
																																															BgL_checksz00_1251,
																																															BgL_coercesz00_1252);
																																													}
																																												}
																																											}
																																										}
																																									}
																																								}
																																							else
																																								{	/* Module/type.scm 97 */
																																									return
																																										BNIL;
																																								}
																																						}
																																					}
																																				else
																																					{	/* Module/type.scm 58 */
																																						goto
																																							BgL_tagzd2373zd2_234;
																																					}
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd2373zd2_234;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																							}
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				if (
																					(CAR(BgL_clausez00_28) ==
																						CNST_TABLE_REF(((long) 4))))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd2811zd2_310;
																						obj_t BgL_cdrzd2812zd2_311;

																						BgL_carzd2811zd2_310 =
																							CAR(
																							((obj_t) BgL_cdrzd2388zd2_238));
																						BgL_cdrzd2812zd2_311 =
																							CDR(
																							((obj_t) BgL_cdrzd2388zd2_238));
																						if (SYMBOLP(BgL_carzd2811zd2_310))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd2820zd2_313;
																								obj_t BgL_cdrzd2821zd2_314;

																								BgL_carzd2820zd2_313 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2812zd2_311));
																								BgL_cdrzd2821zd2_314 =
																									CDR(((obj_t)
																										BgL_cdrzd2812zd2_311));
																								if (STRINGP
																									(BgL_carzd2820zd2_313))
																									{	/* Module/type.scm 58 */
																										if (PAIRP
																											(BgL_cdrzd2821zd2_314))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd2827zd2_317;
																												BgL_carzd2827zd2_317 =
																													CAR
																													(BgL_cdrzd2821zd2_314);
																												if (SYMBOLP
																													(BgL_carzd2827zd2_317))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_cdrzd2821zd2_314)))
																															{	/* Module/type.scm 69 */
																																BgL_typez00_bglt
																																	BgL_typez00_1617;
																																BgL_typez00_1617
																																	=
																																	BGl_declarezd2typez12zc0zztype_envz00
																																	(BgL_carzd2811zd2_310,
																																	BgL_carzd2820zd2_313,
																																	BgL_carzd2827zd2_317);
																																((((BgL_typez00_bglt) COBJECT(BgL_typez00_1617))->BgL_magiczf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																																return
																																	((obj_t)
																																	BgL_typez00_1617);
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						if (
																							(CAR(BgL_clausez00_28) ==
																								CNST_TABLE_REF(((long) 5))))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd2992zd2_325;
																								obj_t BgL_cdrzd2993zd2_326;

																								BgL_carzd2992zd2_325 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2388zd2_238));
																								BgL_cdrzd2993zd2_326 =
																									CDR(((obj_t)
																										BgL_cdrzd2388zd2_238));
																								if (SYMBOLP
																									(BgL_carzd2992zd2_325))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd21002zd2_328;
																										obj_t BgL_cdrzd21003zd2_329;

																										BgL_carzd21002zd2_328 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2993zd2_326));
																										BgL_cdrzd21003zd2_329 =
																											CDR(((obj_t)
																												BgL_cdrzd2993zd2_326));
																										if (STRINGP
																											(BgL_carzd21002zd2_328))
																											{	/* Module/type.scm 58 */
																												if (PAIRP
																													(BgL_cdrzd21003zd2_329))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd21009zd2_332;
																														BgL_carzd21009zd2_332
																															=
																															CAR
																															(BgL_cdrzd21003zd2_329);
																														if (PAIRP
																															(BgL_carzd21009zd2_332))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_cdrzd21003zd2_329)))
																																	{
																																		obj_t
																																			BgL_parentz00_2739;
																																		obj_t
																																			BgL_namez00_2738;
																																		obj_t
																																			BgL_childz00_2737;
																																		BgL_childz00_2737
																																			=
																																			BgL_carzd2992zd2_325;
																																		BgL_namez00_2738
																																			=
																																			BgL_carzd21002zd2_328;
																																		BgL_parentz00_2739
																																			=
																																			BgL_carzd21009zd2_332;
																																		BgL_parentz00_224
																																			=
																																			BgL_parentz00_2739;
																																		BgL_namez00_223
																																			=
																																			BgL_namez00_2738;
																																		BgL_childz00_222
																																			=
																																			BgL_childz00_2737;
																																		goto
																																			BgL_tagzd2370zd2_225;
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								obj_t BgL_cdrzd21103zd2_337;

																								BgL_cdrzd21103zd2_337 =
																									CDR(BgL_clausez00_28);
																								if (
																									(CAR(BgL_clausez00_28) ==
																										CNST_TABLE_REF(((long) 7))))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd21107zd2_340;
																										obj_t BgL_cdrzd21108zd2_341;

																										BgL_carzd21107zd2_340 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd21103zd2_337));
																										BgL_cdrzd21108zd2_341 =
																											CDR(((obj_t)
																												BgL_cdrzd21103zd2_337));
																										if (SYMBOLP
																											(BgL_carzd21107zd2_340))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd21115zd2_343;
																												BgL_carzd21115zd2_343 =
																													CAR(((obj_t)
																														BgL_cdrzd21108zd2_341));
																												if (PAIRP
																													(BgL_carzd21115zd2_343))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd21118zd2_345;
																														BgL_carzd21118zd2_345
																															=
																															CAR
																															(BgL_carzd21115zd2_343);
																														if (SYMBOLP
																															(BgL_carzd21118zd2_345))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_carzd21115zd2_343)))
																																	{	/* Module/type.scm 58 */
																																		if (NULLP
																																			(CDR(((obj_t) BgL_cdrzd21108zd2_341))))
																																			{	/* Module/type.scm 58 */
																																				return
																																					BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00
																																					(BgL_carzd21107zd2_340,
																																					BgL_carzd21118zd2_345,
																																					BgL_clausez00_28,
																																					BgL_importz00_27);
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd2373zd2_234;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										if (
																											(CAR(BgL_clausez00_28) ==
																												CNST_TABLE_REF(((long)
																														6))))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd21181zd2_356;
																												obj_t
																													BgL_cdrzd21182zd2_357;
																												BgL_carzd21181zd2_356 =
																													CAR(((obj_t)
																														BgL_cdrzd21103zd2_337));
																												BgL_cdrzd21182zd2_357 =
																													CDR(((obj_t)
																														BgL_cdrzd21103zd2_337));
																												if (SYMBOLP
																													(BgL_carzd21181zd2_356))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd21192zd2_359;
																														obj_t
																															BgL_cdrzd21193zd2_360;
																														BgL_carzd21192zd2_359
																															=
																															CAR(((obj_t)
																																BgL_cdrzd21182zd2_357));
																														BgL_cdrzd21193zd2_360
																															=
																															CDR(((obj_t)
																																BgL_cdrzd21182zd2_357));
																														if (SYMBOLP
																															(BgL_carzd21192zd2_359))
																															{	/* Module/type.scm 58 */
																																if (PAIRP
																																	(BgL_cdrzd21193zd2_360))
																																	{	/* Module/type.scm 58 */
																																		obj_t
																																			BgL_cdrzd21202zd2_363;
																																		BgL_cdrzd21202zd2_363
																																			=
																																			CDR
																																			(BgL_cdrzd21193zd2_360);
																																		if (PAIRP
																																			(BgL_cdrzd21202zd2_363))
																																			{	/* Module/type.scm 58 */
																																				if (NULLP(CDR(BgL_cdrzd21202zd2_363)))
																																					{
																																						obj_t
																																							BgL_coercez00_2794;
																																						obj_t
																																							BgL_checkz00_2792;
																																						obj_t
																																							BgL_toz00_2791;
																																						obj_t
																																							BgL_fromz00_2790;
																																						BgL_fromz00_2790
																																							=
																																							BgL_carzd21181zd2_356;
																																						BgL_toz00_2791
																																							=
																																							BgL_carzd21192zd2_359;
																																						BgL_checkz00_2792
																																							=
																																							CAR
																																							(BgL_cdrzd21193zd2_360);
																																						BgL_coercez00_2794
																																							=
																																							CAR
																																							(BgL_cdrzd21202zd2_363);
																																						BgL_coercez00_232
																																							=
																																							BgL_coercez00_2794;
																																						BgL_checkz00_231
																																							=
																																							BgL_checkz00_2792;
																																						BgL_toz00_230
																																							=
																																							BgL_toz00_2791;
																																						BgL_fromz00_229
																																							=
																																							BgL_fromz00_2790;
																																						goto
																																							BgL_tagzd2372zd2_233;
																																					}
																																				else
																																					{	/* Module/type.scm 58 */
																																						goto
																																							BgL_tagzd2373zd2_234;
																																					}
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd2373zd2_234;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																							}
																					}
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd2373zd2_234;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																if (
																	(CAR(BgL_clausez00_28) ==
																		CNST_TABLE_REF(((long) 4))))
																	{	/* Module/type.scm 58 */
																		obj_t BgL_carzd21273zd2_377;
																		obj_t BgL_cdrzd21274zd2_378;

																		BgL_carzd21273zd2_377 =
																			CAR(((obj_t) BgL_cdrzd2388zd2_238));
																		BgL_cdrzd21274zd2_378 =
																			CDR(((obj_t) BgL_cdrzd2388zd2_238));
																		if (SYMBOLP(BgL_carzd21273zd2_377))
																			{	/* Module/type.scm 58 */
																				if (PAIRP(BgL_cdrzd21274zd2_378))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd21281zd2_381;
																						obj_t BgL_cdrzd21282zd2_382;

																						BgL_carzd21281zd2_381 =
																							CAR(BgL_cdrzd21274zd2_378);
																						BgL_cdrzd21282zd2_382 =
																							CDR(BgL_cdrzd21274zd2_378);
																						if (STRINGP(BgL_carzd21281zd2_381))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd21282zd2_382))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd21286zd2_385;

																										BgL_carzd21286zd2_385 =
																											CAR
																											(BgL_cdrzd21282zd2_382);
																										if (SYMBOLP
																											(BgL_carzd21286zd2_385))
																											{	/* Module/type.scm 58 */
																												if (NULLP(CDR
																														(BgL_cdrzd21282zd2_382)))
																													{	/* Module/type.scm 69 */
																														BgL_typez00_bglt
																															BgL_typez00_1675;
																														BgL_typez00_1675 =
																															BGl_declarezd2typez12zc0zztype_envz00
																															(BgL_carzd21273zd2_377,
																															BgL_carzd21281zd2_381,
																															BgL_carzd21286zd2_385);
																														((((BgL_typez00_bglt) COBJECT(BgL_typez00_1675))->BgL_magiczf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																														return
																															((obj_t)
																															BgL_typez00_1675);
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd2373zd2_234;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd2373zd2_234;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		if (
																			(CAR(BgL_clausez00_28) ==
																				CNST_TABLE_REF(((long) 5))))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd21477zd2_393;
																				obj_t BgL_cdrzd21478zd2_394;

																				BgL_carzd21477zd2_393 =
																					CAR(((obj_t) BgL_cdrzd2388zd2_238));
																				BgL_cdrzd21478zd2_394 =
																					CDR(((obj_t) BgL_cdrzd2388zd2_238));
																				if (SYMBOLP(BgL_carzd21477zd2_393))
																					{	/* Module/type.scm 58 */
																						if (PAIRP(BgL_cdrzd21478zd2_394))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd21486zd2_397;
																								obj_t BgL_cdrzd21487zd2_398;

																								BgL_carzd21486zd2_397 =
																									CAR(BgL_cdrzd21478zd2_394);
																								BgL_cdrzd21487zd2_398 =
																									CDR(BgL_cdrzd21478zd2_394);
																								if (STRINGP
																									(BgL_carzd21486zd2_397))
																									{	/* Module/type.scm 58 */
																										if (PAIRP
																											(BgL_cdrzd21487zd2_398))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd21491zd2_401;
																												BgL_carzd21491zd2_401 =
																													CAR
																													(BgL_cdrzd21487zd2_398);
																												if (PAIRP
																													(BgL_carzd21491zd2_401))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_cdrzd21487zd2_398)))
																															{
																																obj_t
																																	BgL_parentz00_2849;
																																obj_t
																																	BgL_namez00_2848;
																																obj_t
																																	BgL_childz00_2847;
																																BgL_childz00_2847
																																	=
																																	BgL_carzd21477zd2_393;
																																BgL_namez00_2848
																																	=
																																	BgL_carzd21486zd2_397;
																																BgL_parentz00_2849
																																	=
																																	BgL_carzd21491zd2_401;
																																BgL_parentz00_224
																																	=
																																	BgL_parentz00_2849;
																																BgL_namez00_223
																																	=
																																	BgL_namez00_2848;
																																BgL_childz00_222
																																	=
																																	BgL_childz00_2847;
																																goto
																																	BgL_tagzd2370zd2_225;
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd2373zd2_234;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				obj_t BgL_cdrzd21601zd2_406;

																				BgL_cdrzd21601zd2_406 =
																					CDR(BgL_clausez00_28);
																				if (
																					(CAR(BgL_clausez00_28) ==
																						CNST_TABLE_REF(((long) 7))))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd21605zd2_409;
																						obj_t BgL_cdrzd21606zd2_410;

																						BgL_carzd21605zd2_409 =
																							CAR(
																							((obj_t) BgL_cdrzd21601zd2_406));
																						BgL_cdrzd21606zd2_410 =
																							CDR(
																							((obj_t) BgL_cdrzd21601zd2_406));
																						if (SYMBOLP(BgL_carzd21605zd2_409))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd21606zd2_410))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd21613zd2_413;

																										BgL_carzd21613zd2_413 =
																											CAR
																											(BgL_cdrzd21606zd2_410);
																										if (PAIRP
																											(BgL_carzd21613zd2_413))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd21616zd2_415;
																												BgL_carzd21616zd2_415 =
																													CAR
																													(BgL_carzd21613zd2_413);
																												if (SYMBOLP
																													(BgL_carzd21616zd2_415))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_carzd21613zd2_413)))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_cdrzd21606zd2_410)))
																																	{	/* Module/type.scm 58 */
																																		return
																																			BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00
																																			(BgL_carzd21605zd2_409,
																																			BgL_carzd21616zd2_415,
																																			BgL_clausez00_28,
																																			BgL_importz00_27);
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						if (
																							(CAR(BgL_clausez00_28) ==
																								CNST_TABLE_REF(((long) 6))))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd21685zd2_426;
																								obj_t BgL_cdrzd21686zd2_427;

																								BgL_carzd21685zd2_426 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd21601zd2_406));
																								BgL_cdrzd21686zd2_427 =
																									CDR(((obj_t)
																										BgL_cdrzd21601zd2_406));
																								if (SYMBOLP
																									(BgL_carzd21685zd2_426))
																									{	/* Module/type.scm 58 */
																										if (PAIRP
																											(BgL_cdrzd21686zd2_427))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd21695zd2_430;
																												obj_t
																													BgL_cdrzd21696zd2_431;
																												BgL_carzd21695zd2_430 =
																													CAR
																													(BgL_cdrzd21686zd2_427);
																												BgL_cdrzd21696zd2_431 =
																													CDR
																													(BgL_cdrzd21686zd2_427);
																												if (SYMBOLP
																													(BgL_carzd21695zd2_430))
																													{	/* Module/type.scm 58 */
																														if (PAIRP
																															(BgL_cdrzd21696zd2_431))
																															{	/* Module/type.scm 58 */
																																obj_t
																																	BgL_cdrzd21703zd2_434;
																																BgL_cdrzd21703zd2_434
																																	=
																																	CDR
																																	(BgL_cdrzd21696zd2_431);
																																if (PAIRP
																																	(BgL_cdrzd21703zd2_434))
																																	{	/* Module/type.scm 58 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd21703zd2_434)))
																																			{
																																				obj_t
																																					BgL_coercez00_2904;
																																				obj_t
																																					BgL_checkz00_2902;
																																				obj_t
																																					BgL_toz00_2901;
																																				obj_t
																																					BgL_fromz00_2900;
																																				BgL_fromz00_2900
																																					=
																																					BgL_carzd21685zd2_426;
																																				BgL_toz00_2901
																																					=
																																					BgL_carzd21695zd2_430;
																																				BgL_checkz00_2902
																																					=
																																					CAR
																																					(BgL_cdrzd21696zd2_431);
																																				BgL_coercez00_2904
																																					=
																																					CAR
																																					(BgL_cdrzd21703zd2_434);
																																				BgL_coercez00_232
																																					=
																																					BgL_coercez00_2904;
																																				BgL_checkz00_231
																																					=
																																					BgL_checkz00_2902;
																																				BgL_toz00_230
																																					=
																																					BgL_toz00_2901;
																																				BgL_fromz00_229
																																					=
																																					BgL_fromz00_2900;
																																				goto
																																					BgL_tagzd2372zd2_233;
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd2373zd2_234;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																			}
																	}
															}
													}
											}
										else
											{	/* Module/type.scm 58 */
												obj_t BgL_carzd22189zd2_520;
												obj_t BgL_cdrzd22190zd2_521;

												BgL_carzd22189zd2_520 =
													CAR(((obj_t) BgL_cdrzd2388zd2_238));
												BgL_cdrzd22190zd2_521 =
													CDR(((obj_t) BgL_cdrzd2388zd2_238));
												if (STRINGP(BgL_carzd22189zd2_520))
													{	/* Module/type.scm 58 */
														if (PAIRP(BgL_cdrzd22190zd2_521))
															{	/* Module/type.scm 58 */
																obj_t BgL_carzd22196zd2_524;

																BgL_carzd22196zd2_524 =
																	CAR(BgL_cdrzd22190zd2_521);
																if (SYMBOLP(BgL_carzd22196zd2_524))
																	{	/* Module/type.scm 58 */
																		if (NULLP(CDR(BgL_cdrzd22190zd2_521)))
																			{	/* Module/type.scm 58 */
																				return
																					((obj_t)
																					BGl_declarezd2typez12zc0zztype_envz00
																					(BgL_carzd2387zd2_237,
																						BgL_carzd22189zd2_520,
																						BgL_carzd22196zd2_524));
																			}
																		else
																			{	/* Module/type.scm 58 */
																				if (
																					(CAR(BgL_clausez00_28) ==
																						CNST_TABLE_REF(((long) 4))))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd22222zd2_531;
																						obj_t BgL_cdrzd22223zd2_532;

																						BgL_carzd22222zd2_531 =
																							CAR(
																							((obj_t) BgL_cdrzd2388zd2_238));
																						BgL_cdrzd22223zd2_532 =
																							CDR(
																							((obj_t) BgL_cdrzd2388zd2_238));
																						if (SYMBOLP(BgL_carzd22222zd2_531))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd22231zd2_534;
																								obj_t BgL_cdrzd22232zd2_535;

																								BgL_carzd22231zd2_534 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd22223zd2_532));
																								BgL_cdrzd22232zd2_535 =
																									CDR(((obj_t)
																										BgL_cdrzd22223zd2_532));
																								if (STRINGP
																									(BgL_carzd22231zd2_534))
																									{	/* Module/type.scm 58 */
																										if (PAIRP
																											(BgL_cdrzd22232zd2_535))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22238zd2_538;
																												BgL_carzd22238zd2_538 =
																													CAR
																													(BgL_cdrzd22232zd2_535);
																												if (SYMBOLP
																													(BgL_carzd22238zd2_538))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_cdrzd22232zd2_535)))
																															{	/* Module/type.scm 69 */
																																BgL_typez00_bglt
																																	BgL_typez00_1807;
																																BgL_typez00_1807
																																	=
																																	BGl_declarezd2typez12zc0zztype_envz00
																																	(BgL_carzd22222zd2_531,
																																	BgL_carzd22231zd2_534,
																																	BgL_carzd22238zd2_538);
																																((((BgL_typez00_bglt) COBJECT(BgL_typez00_1807))->BgL_magiczf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																																return
																																	((obj_t)
																																	BgL_typez00_1807);
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						if (
																							(CAR(BgL_clausez00_28) ==
																								CNST_TABLE_REF(((long) 5))))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd22403zd2_546;
																								obj_t BgL_cdrzd22404zd2_547;

																								BgL_carzd22403zd2_546 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2388zd2_238));
																								BgL_cdrzd22404zd2_547 =
																									CDR(((obj_t)
																										BgL_cdrzd2388zd2_238));
																								if (SYMBOLP
																									(BgL_carzd22403zd2_546))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd22413zd2_549;
																										obj_t BgL_cdrzd22414zd2_550;

																										BgL_carzd22413zd2_549 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd22404zd2_547));
																										BgL_cdrzd22414zd2_550 =
																											CDR(((obj_t)
																												BgL_cdrzd22404zd2_547));
																										if (STRINGP
																											(BgL_carzd22413zd2_549))
																											{	/* Module/type.scm 58 */
																												if (PAIRP
																													(BgL_cdrzd22414zd2_550))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd22420zd2_553;
																														BgL_carzd22420zd2_553
																															=
																															CAR
																															(BgL_cdrzd22414zd2_550);
																														if (PAIRP
																															(BgL_carzd22420zd2_553))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_cdrzd22414zd2_550)))
																																	{
																																		obj_t
																																			BgL_parentz00_2975;
																																		obj_t
																																			BgL_namez00_2974;
																																		obj_t
																																			BgL_childz00_2973;
																																		BgL_childz00_2973
																																			=
																																			BgL_carzd22403zd2_546;
																																		BgL_namez00_2974
																																			=
																																			BgL_carzd22413zd2_549;
																																		BgL_parentz00_2975
																																			=
																																			BgL_carzd22420zd2_553;
																																		BgL_parentz00_224
																																			=
																																			BgL_parentz00_2975;
																																		BgL_namez00_223
																																			=
																																			BgL_namez00_2974;
																																		BgL_childz00_222
																																			=
																																			BgL_childz00_2973;
																																		goto
																																			BgL_tagzd2370zd2_225;
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								obj_t BgL_cdrzd22524zd2_558;

																								BgL_cdrzd22524zd2_558 =
																									CDR(BgL_clausez00_28);
																								if (
																									(CAR(BgL_clausez00_28) ==
																										CNST_TABLE_REF(((long) 6))))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd22531zd2_561;
																										obj_t BgL_cdrzd22532zd2_562;

																										BgL_carzd22531zd2_561 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd22524zd2_558));
																										BgL_cdrzd22532zd2_562 =
																											CDR(((obj_t)
																												BgL_cdrzd22524zd2_558));
																										if (SYMBOLP
																											(BgL_carzd22531zd2_561))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22542zd2_564;
																												obj_t
																													BgL_cdrzd22543zd2_565;
																												BgL_carzd22542zd2_564 =
																													CAR(((obj_t)
																														BgL_cdrzd22532zd2_562));
																												BgL_cdrzd22543zd2_565 =
																													CDR(((obj_t)
																														BgL_cdrzd22532zd2_562));
																												if (SYMBOLP
																													(BgL_carzd22542zd2_564))
																													{	/* Module/type.scm 58 */
																														if (PAIRP
																															(BgL_cdrzd22543zd2_565))
																															{	/* Module/type.scm 58 */
																																obj_t
																																	BgL_cdrzd22552zd2_568;
																																BgL_cdrzd22552zd2_568
																																	=
																																	CDR
																																	(BgL_cdrzd22543zd2_565);
																																if (PAIRP
																																	(BgL_cdrzd22552zd2_568))
																																	{	/* Module/type.scm 58 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd22552zd2_568)))
																																			{
																																				obj_t
																																					BgL_coercez00_3005;
																																				obj_t
																																					BgL_checkz00_3003;
																																				obj_t
																																					BgL_toz00_3002;
																																				obj_t
																																					BgL_fromz00_3001;
																																				BgL_fromz00_3001
																																					=
																																					BgL_carzd22531zd2_561;
																																				BgL_toz00_3002
																																					=
																																					BgL_carzd22542zd2_564;
																																				BgL_checkz00_3003
																																					=
																																					CAR
																																					(BgL_cdrzd22543zd2_565);
																																				BgL_coercez00_3005
																																					=
																																					CAR
																																					(BgL_cdrzd22552zd2_568);
																																				BgL_coercez00_232
																																					=
																																					BgL_coercez00_3005;
																																				BgL_checkz00_231
																																					=
																																					BgL_checkz00_3003;
																																				BgL_toz00_230
																																					=
																																					BgL_toz00_3002;
																																				BgL_fromz00_229
																																					=
																																					BgL_fromz00_3001;
																																				goto
																																					BgL_tagzd2372zd2_233;
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd2373zd2_234;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																					}
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		if (
																			(CAR(BgL_clausez00_28) ==
																				CNST_TABLE_REF(((long) 4))))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd22580zd2_582;
																				obj_t BgL_cdrzd22581zd2_583;

																				BgL_carzd22580zd2_582 =
																					CAR(((obj_t) BgL_cdrzd2388zd2_238));
																				BgL_cdrzd22581zd2_583 =
																					CDR(((obj_t) BgL_cdrzd2388zd2_238));
																				if (SYMBOLP(BgL_carzd22580zd2_582))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd22589zd2_585;
																						obj_t BgL_cdrzd22590zd2_586;

																						BgL_carzd22589zd2_585 =
																							CAR(
																							((obj_t) BgL_cdrzd22581zd2_583));
																						BgL_cdrzd22590zd2_586 =
																							CDR(
																							((obj_t) BgL_cdrzd22581zd2_583));
																						if (STRINGP(BgL_carzd22589zd2_585))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd22590zd2_586))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd22596zd2_589;

																										BgL_carzd22596zd2_589 =
																											CAR
																											(BgL_cdrzd22590zd2_586);
																										if (SYMBOLP
																											(BgL_carzd22596zd2_589))
																											{	/* Module/type.scm 58 */
																												if (NULLP(CDR
																														(BgL_cdrzd22590zd2_586)))
																													{	/* Module/type.scm 69 */
																														BgL_typez00_bglt
																															BgL_typez00_1851;
																														BgL_typez00_1851 =
																															BGl_declarezd2typez12zc0zztype_envz00
																															(BgL_carzd22580zd2_582,
																															BgL_carzd22589zd2_585,
																															BgL_carzd22596zd2_589);
																														((((BgL_typez00_bglt) COBJECT(BgL_typez00_1851))->BgL_magiczf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																														return
																															((obj_t)
																															BgL_typez00_1851);
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd2373zd2_234;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				if (
																					(CAR(BgL_clausez00_28) ==
																						CNST_TABLE_REF(((long) 5))))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd22761zd2_597;
																						obj_t BgL_cdrzd22762zd2_598;

																						BgL_carzd22761zd2_597 =
																							CAR(
																							((obj_t) BgL_cdrzd2388zd2_238));
																						BgL_cdrzd22762zd2_598 =
																							CDR(
																							((obj_t) BgL_cdrzd2388zd2_238));
																						if (SYMBOLP(BgL_carzd22761zd2_597))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd22771zd2_600;
																								obj_t BgL_cdrzd22772zd2_601;

																								BgL_carzd22771zd2_600 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd22762zd2_598));
																								BgL_cdrzd22772zd2_601 =
																									CDR(((obj_t)
																										BgL_cdrzd22762zd2_598));
																								if (STRINGP
																									(BgL_carzd22771zd2_600))
																									{	/* Module/type.scm 58 */
																										if (PAIRP
																											(BgL_cdrzd22772zd2_601))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22778zd2_604;
																												BgL_carzd22778zd2_604 =
																													CAR
																													(BgL_cdrzd22772zd2_601);
																												if (PAIRP
																													(BgL_carzd22778zd2_604))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_cdrzd22772zd2_601)))
																															{
																																obj_t
																																	BgL_parentz00_3060;
																																obj_t
																																	BgL_namez00_3059;
																																obj_t
																																	BgL_childz00_3058;
																																BgL_childz00_3058
																																	=
																																	BgL_carzd22761zd2_597;
																																BgL_namez00_3059
																																	=
																																	BgL_carzd22771zd2_600;
																																BgL_parentz00_3060
																																	=
																																	BgL_carzd22778zd2_604;
																																BgL_parentz00_224
																																	=
																																	BgL_parentz00_3060;
																																BgL_namez00_223
																																	=
																																	BgL_namez00_3059;
																																BgL_childz00_222
																																	=
																																	BgL_childz00_3058;
																																goto
																																	BgL_tagzd2370zd2_225;
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						obj_t BgL_cdrzd22872zd2_609;

																						BgL_cdrzd22872zd2_609 =
																							CDR(BgL_clausez00_28);
																						if (
																							(CAR(BgL_clausez00_28) ==
																								CNST_TABLE_REF(((long) 7))))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd22876zd2_612;
																								obj_t BgL_cdrzd22877zd2_613;

																								BgL_carzd22876zd2_612 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd22872zd2_609));
																								BgL_cdrzd22877zd2_613 =
																									CDR(((obj_t)
																										BgL_cdrzd22872zd2_609));
																								if (SYMBOLP
																									(BgL_carzd22876zd2_612))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd22884zd2_615;

																										BgL_carzd22884zd2_615 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd22877zd2_613));
																										if (PAIRP
																											(BgL_carzd22884zd2_615))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22887zd2_617;
																												BgL_carzd22887zd2_617 =
																													CAR
																													(BgL_carzd22884zd2_615);
																												if (SYMBOLP
																													(BgL_carzd22887zd2_617))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_carzd22884zd2_615)))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR(
																																			((obj_t)
																																				BgL_cdrzd22877zd2_613))))
																																	{	/* Module/type.scm 58 */
																																		return
																																			BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00
																																			(BgL_carzd22876zd2_612,
																																			BgL_carzd22887zd2_617,
																																			BgL_clausez00_28,
																																			BgL_importz00_27);
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								if (
																									(CAR(BgL_clausez00_28) ==
																										CNST_TABLE_REF(((long) 6))))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd22950zd2_628;
																										obj_t BgL_cdrzd22951zd2_629;

																										BgL_carzd22950zd2_628 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd22872zd2_609));
																										BgL_cdrzd22951zd2_629 =
																											CDR(((obj_t)
																												BgL_cdrzd22872zd2_609));
																										if (SYMBOLP
																											(BgL_carzd22950zd2_628))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22961zd2_631;
																												obj_t
																													BgL_cdrzd22962zd2_632;
																												BgL_carzd22961zd2_631 =
																													CAR(((obj_t)
																														BgL_cdrzd22951zd2_629));
																												BgL_cdrzd22962zd2_632 =
																													CDR(((obj_t)
																														BgL_cdrzd22951zd2_629));
																												if (SYMBOLP
																													(BgL_carzd22961zd2_631))
																													{	/* Module/type.scm 58 */
																														if (PAIRP
																															(BgL_cdrzd22962zd2_632))
																															{	/* Module/type.scm 58 */
																																obj_t
																																	BgL_cdrzd22971zd2_635;
																																BgL_cdrzd22971zd2_635
																																	=
																																	CDR
																																	(BgL_cdrzd22962zd2_632);
																																if (PAIRP
																																	(BgL_cdrzd22971zd2_635))
																																	{	/* Module/type.scm 58 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd22971zd2_635)))
																																			{
																																				obj_t
																																					BgL_coercez00_3115;
																																				obj_t
																																					BgL_checkz00_3113;
																																				obj_t
																																					BgL_toz00_3112;
																																				obj_t
																																					BgL_fromz00_3111;
																																				BgL_fromz00_3111
																																					=
																																					BgL_carzd22950zd2_628;
																																				BgL_toz00_3112
																																					=
																																					BgL_carzd22961zd2_631;
																																				BgL_checkz00_3113
																																					=
																																					CAR
																																					(BgL_cdrzd22962zd2_632);
																																				BgL_coercez00_3115
																																					=
																																					CAR
																																					(BgL_cdrzd22971zd2_635);
																																				BgL_coercez00_232
																																					=
																																					BgL_coercez00_3115;
																																				BgL_checkz00_231
																																					=
																																					BgL_checkz00_3113;
																																				BgL_toz00_230
																																					=
																																					BgL_toz00_3112;
																																				BgL_fromz00_229
																																					=
																																					BgL_fromz00_3111;
																																				goto
																																					BgL_tagzd2372zd2_233;
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd2373zd2_234;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																					}
																			}
																	}
															}
														else
															{	/* Module/type.scm 58 */
																goto BgL_tagzd2373zd2_234;
															}
													}
												else
													{	/* Module/type.scm 58 */
														if (
															(CAR(BgL_clausez00_28) ==
																CNST_TABLE_REF(((long) 4))))
															{	/* Module/type.scm 58 */
																obj_t BgL_carzd23042zd2_649;
																obj_t BgL_cdrzd23043zd2_650;

																BgL_carzd23042zd2_649 =
																	CAR(((obj_t) BgL_cdrzd2388zd2_238));
																BgL_cdrzd23043zd2_650 =
																	CDR(((obj_t) BgL_cdrzd2388zd2_238));
																if (SYMBOLP(BgL_carzd23042zd2_649))
																	{	/* Module/type.scm 58 */
																		if (PAIRP(BgL_cdrzd23043zd2_650))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd23050zd2_653;
																				obj_t BgL_cdrzd23051zd2_654;

																				BgL_carzd23050zd2_653 =
																					CAR(BgL_cdrzd23043zd2_650);
																				BgL_cdrzd23051zd2_654 =
																					CDR(BgL_cdrzd23043zd2_650);
																				if (STRINGP(BgL_carzd23050zd2_653))
																					{	/* Module/type.scm 58 */
																						if (PAIRP(BgL_cdrzd23051zd2_654))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd23055zd2_657;

																								BgL_carzd23055zd2_657 =
																									CAR(BgL_cdrzd23051zd2_654);
																								if (SYMBOLP
																									(BgL_carzd23055zd2_657))
																									{	/* Module/type.scm 58 */
																										if (NULLP(CDR
																												(BgL_cdrzd23051zd2_654)))
																											{	/* Module/type.scm 69 */
																												BgL_typez00_bglt
																													BgL_typez00_1909;
																												BgL_typez00_1909 =
																													BGl_declarezd2typez12zc0zztype_envz00
																													(BgL_carzd23042zd2_649,
																													BgL_carzd23050zd2_653,
																													BgL_carzd23055zd2_657);
																												((((BgL_typez00_bglt)
																															COBJECT
																															(BgL_typez00_1909))->
																														BgL_magiczf3zf3) =
																													((bool_t) ((bool_t)
																															1)), BUNSPEC);
																												return ((obj_t)
																													BgL_typez00_1909);
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd2373zd2_234;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd2373zd2_234;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd2373zd2_234;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																if (
																	(CAR(BgL_clausez00_28) ==
																		CNST_TABLE_REF(((long) 5))))
																	{	/* Module/type.scm 58 */
																		obj_t BgL_carzd23246zd2_665;
																		obj_t BgL_cdrzd23247zd2_666;

																		BgL_carzd23246zd2_665 =
																			CAR(((obj_t) BgL_cdrzd2388zd2_238));
																		BgL_cdrzd23247zd2_666 =
																			CDR(((obj_t) BgL_cdrzd2388zd2_238));
																		if (SYMBOLP(BgL_carzd23246zd2_665))
																			{	/* Module/type.scm 58 */
																				if (PAIRP(BgL_cdrzd23247zd2_666))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd23255zd2_669;
																						obj_t BgL_cdrzd23256zd2_670;

																						BgL_carzd23255zd2_669 =
																							CAR(BgL_cdrzd23247zd2_666);
																						BgL_cdrzd23256zd2_670 =
																							CDR(BgL_cdrzd23247zd2_666);
																						if (STRINGP(BgL_carzd23255zd2_669))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd23256zd2_670))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd23260zd2_673;

																										BgL_carzd23260zd2_673 =
																											CAR
																											(BgL_cdrzd23256zd2_670);
																										if (PAIRP
																											(BgL_carzd23260zd2_673))
																											{	/* Module/type.scm 58 */
																												if (NULLP(CDR
																														(BgL_cdrzd23256zd2_670)))
																													{
																														obj_t
																															BgL_parentz00_3170;
																														obj_t
																															BgL_namez00_3169;
																														obj_t
																															BgL_childz00_3168;
																														BgL_childz00_3168 =
																															BgL_carzd23246zd2_665;
																														BgL_namez00_3169 =
																															BgL_carzd23255zd2_669;
																														BgL_parentz00_3170 =
																															BgL_carzd23260zd2_673;
																														BgL_parentz00_224 =
																															BgL_parentz00_3170;
																														BgL_namez00_223 =
																															BgL_namez00_3169;
																														BgL_childz00_222 =
																															BgL_childz00_3168;
																														goto
																															BgL_tagzd2370zd2_225;
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd2373zd2_234;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd2373zd2_234;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		obj_t BgL_cdrzd23370zd2_678;

																		BgL_cdrzd23370zd2_678 =
																			CDR(BgL_clausez00_28);
																		if (
																			(CAR(BgL_clausez00_28) ==
																				CNST_TABLE_REF(((long) 7))))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd23374zd2_681;
																				obj_t BgL_cdrzd23375zd2_682;

																				BgL_carzd23374zd2_681 =
																					CAR(((obj_t) BgL_cdrzd23370zd2_678));
																				BgL_cdrzd23375zd2_682 =
																					CDR(((obj_t) BgL_cdrzd23370zd2_678));
																				if (SYMBOLP(BgL_carzd23374zd2_681))
																					{	/* Module/type.scm 58 */
																						if (PAIRP(BgL_cdrzd23375zd2_682))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd23382zd2_685;

																								BgL_carzd23382zd2_685 =
																									CAR(BgL_cdrzd23375zd2_682);
																								if (PAIRP
																									(BgL_carzd23382zd2_685))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd23385zd2_687;

																										BgL_carzd23385zd2_687 =
																											CAR
																											(BgL_carzd23382zd2_685);
																										if (SYMBOLP
																											(BgL_carzd23385zd2_687))
																											{	/* Module/type.scm 58 */
																												if (NULLP(CDR
																														(BgL_carzd23382zd2_685)))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_cdrzd23375zd2_682)))
																															{	/* Module/type.scm 58 */
																																return
																																	BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00
																																	(BgL_carzd23374zd2_681,
																																	BgL_carzd23385zd2_687,
																																	BgL_clausez00_28,
																																	BgL_importz00_27);
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd2373zd2_234;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				if (
																					(CAR(BgL_clausez00_28) ==
																						CNST_TABLE_REF(((long) 6))))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd23454zd2_698;
																						obj_t BgL_cdrzd23455zd2_699;

																						BgL_carzd23454zd2_698 =
																							CAR(
																							((obj_t) BgL_cdrzd23370zd2_678));
																						BgL_cdrzd23455zd2_699 =
																							CDR(
																							((obj_t) BgL_cdrzd23370zd2_678));
																						if (SYMBOLP(BgL_carzd23454zd2_698))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd23455zd2_699))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd23464zd2_702;
																										obj_t BgL_cdrzd23465zd2_703;

																										BgL_carzd23464zd2_702 =
																											CAR
																											(BgL_cdrzd23455zd2_699);
																										BgL_cdrzd23465zd2_703 =
																											CDR
																											(BgL_cdrzd23455zd2_699);
																										if (SYMBOLP
																											(BgL_carzd23464zd2_702))
																											{	/* Module/type.scm 58 */
																												if (PAIRP
																													(BgL_cdrzd23465zd2_703))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_cdrzd23472zd2_706;
																														BgL_cdrzd23472zd2_706
																															=
																															CDR
																															(BgL_cdrzd23465zd2_703);
																														if (PAIRP
																															(BgL_cdrzd23472zd2_706))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_cdrzd23472zd2_706)))
																																	{
																																		obj_t
																																			BgL_coercez00_3225;
																																		obj_t
																																			BgL_checkz00_3223;
																																		obj_t
																																			BgL_toz00_3222;
																																		obj_t
																																			BgL_fromz00_3221;
																																		BgL_fromz00_3221
																																			=
																																			BgL_carzd23454zd2_698;
																																		BgL_toz00_3222
																																			=
																																			BgL_carzd23464zd2_702;
																																		BgL_checkz00_3223
																																			=
																																			CAR
																																			(BgL_cdrzd23465zd2_703);
																																		BgL_coercez00_3225
																																			=
																																			CAR
																																			(BgL_cdrzd23472zd2_706);
																																		BgL_coercez00_232
																																			=
																																			BgL_coercez00_3225;
																																		BgL_checkz00_231
																																			=
																																			BgL_checkz00_3223;
																																		BgL_toz00_230
																																			=
																																			BgL_toz00_3222;
																																		BgL_fromz00_229
																																			=
																																			BgL_fromz00_3221;
																																		goto
																																			BgL_tagzd2372zd2_233;
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd2373zd2_234;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd2373zd2_234;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd2373zd2_234;
																					}
																			}
																	}
															}
													}
											}
									}
								else
									{	/* Module/type.scm 58 */
										goto BgL_tagzd2373zd2_234;
									}
							}
						else
							{	/* Module/type.scm 58 */
								if ((CAR(BgL_clausez00_28) == CNST_TABLE_REF(((long) 4))))
									{	/* Module/type.scm 58 */
										if (PAIRP(BgL_cdrzd2388zd2_238))
											{	/* Module/type.scm 58 */
												obj_t BgL_carzd25357zd2_993;
												obj_t BgL_cdrzd25358zd2_994;

												BgL_carzd25357zd2_993 = CAR(BgL_cdrzd2388zd2_238);
												BgL_cdrzd25358zd2_994 = CDR(BgL_cdrzd2388zd2_238);
												if (SYMBOLP(BgL_carzd25357zd2_993))
													{	/* Module/type.scm 58 */
														if (PAIRP(BgL_cdrzd25358zd2_994))
															{	/* Module/type.scm 58 */
																obj_t BgL_carzd25363zd2_997;
																obj_t BgL_cdrzd25364zd2_998;

																BgL_carzd25363zd2_997 =
																	CAR(BgL_cdrzd25358zd2_994);
																BgL_cdrzd25364zd2_998 =
																	CDR(BgL_cdrzd25358zd2_994);
																if (STRINGP(BgL_carzd25363zd2_997))
																	{	/* Module/type.scm 58 */
																		if (PAIRP(BgL_cdrzd25364zd2_998))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd25368zd2_1001;

																				BgL_carzd25368zd2_1001 =
																					CAR(BgL_cdrzd25364zd2_998);
																				if (SYMBOLP(BgL_carzd25368zd2_1001))
																					{	/* Module/type.scm 58 */
																						if (NULLP(CDR
																								(BgL_cdrzd25364zd2_998)))
																							{	/* Module/type.scm 69 */
																								BgL_typez00_bglt
																									BgL_typez00_2206;
																								BgL_typez00_2206 =
																									BGl_declarezd2typez12zc0zztype_envz00
																									(BgL_carzd25357zd2_993,
																									BgL_carzd25363zd2_997,
																									BgL_carzd25368zd2_1001);
																								((((BgL_typez00_bglt)
																											COBJECT
																											(BgL_typez00_2206))->
																										BgL_magiczf3zf3) =
																									((bool_t) ((bool_t) 1)),
																									BUNSPEC);
																								return ((obj_t)
																									BgL_typez00_2206);
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd2373zd2_234;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd2373zd2_234;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd2373zd2_234;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																goto BgL_tagzd2373zd2_234;
															}
													}
												else
													{	/* Module/type.scm 58 */
														goto BgL_tagzd2373zd2_234;
													}
											}
										else
											{	/* Module/type.scm 58 */
												goto BgL_tagzd2373zd2_234;
											}
									}
								else
									{	/* Module/type.scm 58 */
										if ((CAR(BgL_clausez00_28) == CNST_TABLE_REF(((long) 5))))
											{	/* Module/type.scm 58 */
												if (PAIRP(BgL_cdrzd2388zd2_238))
													{	/* Module/type.scm 58 */
														obj_t BgL_carzd25585zd2_1010;
														obj_t BgL_cdrzd25586zd2_1011;

														BgL_carzd25585zd2_1010 = CAR(BgL_cdrzd2388zd2_238);
														BgL_cdrzd25586zd2_1011 = CDR(BgL_cdrzd2388zd2_238);
														if (SYMBOLP(BgL_carzd25585zd2_1010))
															{	/* Module/type.scm 58 */
																if (PAIRP(BgL_cdrzd25586zd2_1011))
																	{	/* Module/type.scm 58 */
																		obj_t BgL_carzd25592zd2_1014;
																		obj_t BgL_cdrzd25593zd2_1015;

																		BgL_carzd25592zd2_1014 =
																			CAR(BgL_cdrzd25586zd2_1011);
																		BgL_cdrzd25593zd2_1015 =
																			CDR(BgL_cdrzd25586zd2_1011);
																		if (STRINGP(BgL_carzd25592zd2_1014))
																			{	/* Module/type.scm 58 */
																				if (PAIRP(BgL_cdrzd25593zd2_1015))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd25597zd2_1018;

																						BgL_carzd25597zd2_1018 =
																							CAR(BgL_cdrzd25593zd2_1015);
																						if (PAIRP(BgL_carzd25597zd2_1018))
																							{	/* Module/type.scm 58 */
																								if (NULLP(CDR
																										(BgL_cdrzd25593zd2_1015)))
																									{
																										obj_t BgL_parentz00_3280;
																										obj_t BgL_namez00_3279;
																										obj_t BgL_childz00_3278;

																										BgL_childz00_3278 =
																											BgL_carzd25585zd2_1010;
																										BgL_namez00_3279 =
																											BgL_carzd25592zd2_1014;
																										BgL_parentz00_3280 =
																											BgL_carzd25597zd2_1018;
																										BgL_parentz00_224 =
																											BgL_parentz00_3280;
																										BgL_namez00_223 =
																											BgL_namez00_3279;
																										BgL_childz00_222 =
																											BgL_childz00_3278;
																										goto BgL_tagzd2370zd2_225;
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd2373zd2_234;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd2373zd2_234;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd2373zd2_234;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																goto BgL_tagzd2373zd2_234;
															}
													}
												else
													{	/* Module/type.scm 58 */
														goto BgL_tagzd2373zd2_234;
													}
											}
										else
											{	/* Module/type.scm 58 */
												obj_t BgL_cdrzd25722zd2_1023;

												BgL_cdrzd25722zd2_1023 = CDR(BgL_clausez00_28);
												if (
													(CAR(BgL_clausez00_28) == CNST_TABLE_REF(((long) 7))))
													{	/* Module/type.scm 58 */
														if (PAIRP(BgL_cdrzd25722zd2_1023))
															{	/* Module/type.scm 58 */
																obj_t BgL_carzd25725zd2_1027;
																obj_t BgL_cdrzd25726zd2_1028;

																BgL_carzd25725zd2_1027 =
																	CAR(BgL_cdrzd25722zd2_1023);
																BgL_cdrzd25726zd2_1028 =
																	CDR(BgL_cdrzd25722zd2_1023);
																if (SYMBOLP(BgL_carzd25725zd2_1027))
																	{	/* Module/type.scm 58 */
																		if (PAIRP(BgL_cdrzd25726zd2_1028))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd25731zd2_1031;

																				BgL_carzd25731zd2_1031 =
																					CAR(BgL_cdrzd25726zd2_1028);
																				if (PAIRP(BgL_carzd25731zd2_1031))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd25734zd2_1033;

																						BgL_carzd25734zd2_1033 =
																							CAR(BgL_carzd25731zd2_1031);
																						if (SYMBOLP(BgL_carzd25734zd2_1033))
																							{	/* Module/type.scm 58 */
																								if (NULLP(CDR
																										(BgL_carzd25731zd2_1031)))
																									{	/* Module/type.scm 58 */
																										if (NULLP(CDR
																												(BgL_cdrzd25726zd2_1028)))
																											{	/* Module/type.scm 58 */
																												return
																													BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00
																													(BgL_carzd25725zd2_1027,
																													BgL_carzd25734zd2_1033,
																													BgL_clausez00_28,
																													BgL_importz00_27);
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd2373zd2_234;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd2373zd2_234;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd2373zd2_234;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																goto BgL_tagzd2373zd2_234;
															}
													}
												else
													{	/* Module/type.scm 58 */
														if (
															(CAR(BgL_clausez00_28) ==
																CNST_TABLE_REF(((long) 6))))
															{	/* Module/type.scm 58 */
																if (PAIRP(BgL_cdrzd25722zd2_1023))
																	{	/* Module/type.scm 58 */
																		obj_t BgL_carzd25809zd2_1045;
																		obj_t BgL_cdrzd25810zd2_1046;

																		BgL_carzd25809zd2_1045 =
																			CAR(BgL_cdrzd25722zd2_1023);
																		BgL_cdrzd25810zd2_1046 =
																			CDR(BgL_cdrzd25722zd2_1023);
																		if (SYMBOLP(BgL_carzd25809zd2_1045))
																			{	/* Module/type.scm 58 */
																				if (PAIRP(BgL_cdrzd25810zd2_1046))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd25817zd2_1049;
																						obj_t BgL_cdrzd25818zd2_1050;

																						BgL_carzd25817zd2_1049 =
																							CAR(BgL_cdrzd25810zd2_1046);
																						BgL_cdrzd25818zd2_1050 =
																							CDR(BgL_cdrzd25810zd2_1046);
																						if (SYMBOLP(BgL_carzd25817zd2_1049))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd25818zd2_1050))
																									{	/* Module/type.scm 58 */
																										obj_t
																											BgL_cdrzd25825zd2_1053;
																										BgL_cdrzd25825zd2_1053 =
																											CDR
																											(BgL_cdrzd25818zd2_1050);
																										if (PAIRP
																											(BgL_cdrzd25825zd2_1053))
																											{	/* Module/type.scm 58 */
																												if (NULLP(CDR
																														(BgL_cdrzd25825zd2_1053)))
																													{
																														obj_t
																															BgL_coercez00_3335;
																														obj_t
																															BgL_checkz00_3333;
																														obj_t
																															BgL_toz00_3332;
																														obj_t
																															BgL_fromz00_3331;
																														BgL_fromz00_3331 =
																															BgL_carzd25809zd2_1045;
																														BgL_toz00_3332 =
																															BgL_carzd25817zd2_1049;
																														BgL_checkz00_3333 =
																															CAR
																															(BgL_cdrzd25818zd2_1050);
																														BgL_coercez00_3335 =
																															CAR
																															(BgL_cdrzd25825zd2_1053);
																														BgL_coercez00_232 =
																															BgL_coercez00_3335;
																														BgL_checkz00_231 =
																															BgL_checkz00_3333;
																														BgL_toz00_230 =
																															BgL_toz00_3332;
																														BgL_fromz00_229 =
																															BgL_fromz00_3331;
																														goto
																															BgL_tagzd2372zd2_233;
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd2373zd2_234;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd2373zd2_234;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd2373zd2_234;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd2373zd2_234;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd2373zd2_234;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd2373zd2_234;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd2373zd2_234;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																goto BgL_tagzd2373zd2_234;
															}
													}
											}
									}
							}
					}
				else
					{	/* Module/type.scm 58 */
						goto BgL_tagzd2373zd2_234;
					}
			}
		}

	}



/* module-tvector-clause */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2tvectorzd2clausez00zzmodule_typez00(obj_t
		BgL_idz00_30, obj_t BgL_itemzd2typezd2_31, obj_t BgL_clausez00_32,
		obj_t BgL_importz00_33)
	{
		{	/* Module/type.scm 148 */
			{	/* Module/type.scm 149 */
				BgL_typez00_bglt BgL_arg2180z00_2256;

				BgL_arg2180z00_2256 =
					BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00(BgL_idz00_30,
					BgL_itemzd2typezd2_31, BgL_clausez00_32);
				return BGl_delayzd2tvectorz12zc0zzmodule_typez00(((obj_t)
						BgL_arg2180z00_2256), BgL_clausez00_32, CBOOL(BgL_importz00_33));
			}
		}

	}



/* &module-tvector-clause */
	obj_t BGl_z62modulezd2tvectorzd2clausez62zzmodule_typez00(obj_t
		BgL_envz00_2307, obj_t BgL_idz00_2308, obj_t BgL_itemzd2typezd2_2309,
		obj_t BgL_clausez00_2310, obj_t BgL_importz00_2311)
	{
		{	/* Module/type.scm 148 */
			return
				BGl_modulezd2tvectorzd2clausez00zzmodule_typez00(BgL_idz00_2308,
				BgL_itemzd2typezd2_2309, BgL_clausez00_2310, BgL_importz00_2311);
		}

	}



/* &type-finalizer */
	obj_t BGl_z62typezd2finaliza7erz17zzmodule_typez00(obj_t BgL_envz00_2306)
	{
		{	/* Module/type.scm 154 */
			{	/* Module/type.scm 155 */
				obj_t BgL_tvfz00_2331;

				BgL_tvfz00_2331 = BGl_tvectorzd2finaliza7erz75zzmodule_typez00();
				{	/* Module/type.scm 156 */
					bool_t BgL_test2807z00_3343;

					if (STRUCTP(BgL_tvfz00_2331))
						{	/* Module/type.scm 156 */
							BgL_test2807z00_3343 =
								(STRUCT_KEY(BgL_tvfz00_2331) == CNST_TABLE_REF(((long) 8)));
						}
					else
						{	/* Module/type.scm 156 */
							BgL_test2807z00_3343 = ((bool_t) 0);
						}
					if (BgL_test2807z00_3343)
						{	/* Module/type.scm 157 */
							obj_t BgL_list2182z00_2332;

							BgL_list2182z00_2332 = MAKE_YOUNG_PAIR(BgL_tvfz00_2331, BNIL);
							return BgL_list2182z00_2332;
						}
					else
						{	/* Module/type.scm 156 */
							return CNST_TABLE_REF(((long) 9));
		}}}}

	}



/* delay-tvector-type! */
	obj_t BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00(obj_t BgL_idz00_34,
		obj_t BgL_itemzd2typezd2_35, obj_t BgL_clausez00_36, obj_t BgL_importz00_37)
	{
		{	/* Module/type.scm 168 */
			{	/* Module/type.scm 170 */
				obj_t BgL_arg2183z00_2263;

				{	/* Module/type.scm 170 */
					obj_t BgL_list2184z00_2264;

					{	/* Module/type.scm 170 */
						obj_t BgL_arg2185z00_2265;

						{	/* Module/type.scm 170 */
							obj_t BgL_arg2186z00_2266;

							{	/* Module/type.scm 170 */
								obj_t BgL_arg2187z00_2267;

								BgL_arg2187z00_2267 = MAKE_YOUNG_PAIR(BgL_importz00_37, BNIL);
								BgL_arg2186z00_2266 =
									MAKE_YOUNG_PAIR(BgL_clausez00_36, BgL_arg2187z00_2267);
							}
							BgL_arg2185z00_2265 =
								MAKE_YOUNG_PAIR(BgL_itemzd2typezd2_35, BgL_arg2186z00_2266);
						}
						BgL_list2184z00_2264 =
							MAKE_YOUNG_PAIR(BgL_idz00_34, BgL_arg2185z00_2265);
					}
					BgL_arg2183z00_2263 = BgL_list2184z00_2264;
				}
				return (BGl_za2tvectorzd2typesza2zd2zzmodule_typez00 =
					MAKE_YOUNG_PAIR(BgL_arg2183z00_2263,
						BGl_za2tvectorzd2typesza2zd2zzmodule_typez00), BUNSPEC);
			}
		}

	}



/* delay-tvector! */
	BGL_EXPORTED_DEF obj_t BGl_delayzd2tvectorz12zc0zzmodule_typez00(obj_t
		BgL_tvz00_38, obj_t BgL_clausez00_39, bool_t BgL_importz00_40)
	{
		{	/* Module/type.scm 180 */
			{	/* Module/type.scm 181 */
				obj_t BgL_arg2188z00_1375;

				{	/* Module/type.scm 181 */
					obj_t BgL_list2189z00_1376;

					{	/* Module/type.scm 181 */
						obj_t BgL_arg2190z00_1377;

						{	/* Module/type.scm 181 */
							obj_t BgL_arg2191z00_1378;

							BgL_arg2191z00_1378 =
								MAKE_YOUNG_PAIR(BBOOL(BgL_importz00_40), BNIL);
							BgL_arg2190z00_1377 =
								MAKE_YOUNG_PAIR(BgL_clausez00_39, BgL_arg2191z00_1378);
						}
						BgL_list2189z00_1376 =
							MAKE_YOUNG_PAIR(BgL_tvz00_38, BgL_arg2190z00_1377);
					}
					BgL_arg2188z00_1375 = BgL_list2189z00_1376;
				}
				BGl_za2tvectorsza2z00zzmodule_typez00 =
					MAKE_YOUNG_PAIR(BgL_arg2188z00_1375,
					BGl_za2tvectorsza2z00zzmodule_typez00);
			}
			return BgL_tvz00_38;
		}

	}



/* &delay-tvector! */
	obj_t BGl_z62delayzd2tvectorz12za2zzmodule_typez00(obj_t BgL_envz00_2312,
		obj_t BgL_tvz00_2313, obj_t BgL_clausez00_2314, obj_t BgL_importz00_2315)
	{
		{	/* Module/type.scm 180 */
			return
				BGl_delayzd2tvectorz12zc0zzmodule_typez00(BgL_tvz00_2313,
				BgL_clausez00_2314, CBOOL(BgL_importz00_2315));
		}

	}



/* tvector-finalizer */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2finaliza7erz75zzmodule_typez00()
	{
		{	/* Module/type.scm 187 */
			{
				obj_t BgL_l1076z00_1380;

				BgL_l1076z00_1380 = BGl_za2tvectorzd2typesza2zd2zzmodule_typez00;
			BgL_zc3z04anonymousza32192ze3z87_1381:
				if (PAIRP(BgL_l1076z00_1380))
					{	/* Module/type.scm 189 */
						{	/* Module/type.scm 189 */
							obj_t BgL_tz00_1383;

							BgL_tz00_1383 = CAR(BgL_l1076z00_1380);
							{	/* Module/type.scm 189 */
								obj_t BgL_runner2198z00_1388;

								BgL_runner2198z00_1388 = BgL_tz00_1383;
								{	/* Module/type.scm 189 */
									obj_t BgL_aux2194z00_1384;

									BgL_aux2194z00_1384 = CAR(BgL_runner2198z00_1388);
									BgL_runner2198z00_1388 = CDR(BgL_runner2198z00_1388);
									{	/* Module/type.scm 189 */
										obj_t BgL_aux2195z00_1385;

										BgL_aux2195z00_1385 = CAR(BgL_runner2198z00_1388);
										BgL_runner2198z00_1388 = CDR(BgL_runner2198z00_1388);
										{	/* Module/type.scm 189 */
											obj_t BgL_aux2196z00_1386;

											BgL_aux2196z00_1386 = CAR(BgL_runner2198z00_1388);
											BgL_runner2198z00_1388 = CDR(BgL_runner2198z00_1388);
											{	/* Module/type.scm 189 */
												obj_t BgL_aux2197z00_1387;

												BgL_aux2197z00_1387 = CAR(BgL_runner2198z00_1388);
												{	/* Module/type.scm 149 */
													BgL_typez00_bglt BgL_arg2180z00_2281;

													BgL_arg2180z00_2281 =
														BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00
														(BgL_aux2194z00_1384, BgL_aux2195z00_1385,
														BgL_aux2196z00_1386);
													BGl_delayzd2tvectorz12zc0zzmodule_typez00(((obj_t)
															BgL_arg2180z00_2281), BgL_aux2196z00_1386,
														CBOOL(BgL_aux2197z00_1387));
												}
											}
										}
									}
								}
							}
						}
						{
							obj_t BgL_l1076z00_3377;

							BgL_l1076z00_3377 = CDR(BgL_l1076z00_1380);
							BgL_l1076z00_1380 = BgL_l1076z00_3377;
							goto BgL_zc3z04anonymousza32192ze3z87_1381;
						}
					}
				else
					{	/* Module/type.scm 189 */
						((bool_t) 1);
					}
			}
			BGl_za2tvectorzd2typesza2zd2zzmodule_typez00 = BNIL;
			if (NULLP(BGl_za2tvectorsza2z00zzmodule_typez00))
				{	/* Module/type.scm 192 */
					return CNST_TABLE_REF(((long) 9));
				}
			else
				{	/* Module/type.scm 194 */
					obj_t BgL_accessesz00_1392;

					BgL_accessesz00_1392 =
						BGl_zc3z04anonymousza32203ze3ze70z60zzmodule_typez00
						(BGl_za2tvectorsza2z00zzmodule_typez00);
					{	/* Module/type.scm 197 */
						obj_t BgL_resz00_1393;

						{	/* Module/type.scm 197 */
							obj_t BgL_arg2201z00_1394;
							obj_t BgL_arg2202z00_1395;

							BgL_arg2201z00_1394 =
								BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 7)));
							BgL_arg2202z00_1395 = bgl_reverse_bang(BgL_accessesz00_1392);
							{	/* Module/type.scm 197 */
								obj_t BgL_newz00_2293;

								BgL_newz00_2293 =
									create_struct(CNST_TABLE_REF(((long) 8)), (int) (((long) 5)));
								{	/* Module/type.scm 197 */
									int BgL_tmpz00_3389;

									BgL_tmpz00_3389 = (int) (((long) 4));
									STRUCT_SET(BgL_newz00_2293, BgL_tmpz00_3389, BFALSE);
								}
								{	/* Module/type.scm 197 */
									int BgL_tmpz00_3392;

									BgL_tmpz00_3392 = (int) (((long) 3));
									STRUCT_SET(BgL_newz00_2293, BgL_tmpz00_3392, BTRUE);
								}
								{	/* Module/type.scm 197 */
									int BgL_tmpz00_3395;

									BgL_tmpz00_3395 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_2293, BgL_tmpz00_3395,
										BgL_arg2202z00_1395);
								}
								{	/* Module/type.scm 197 */
									obj_t BgL_auxz00_3400;
									int BgL_tmpz00_3398;

									BgL_auxz00_3400 = BINT(((long) 6));
									BgL_tmpz00_3398 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_2293, BgL_tmpz00_3398, BgL_auxz00_3400);
								}
								{	/* Module/type.scm 197 */
									int BgL_tmpz00_3403;

									BgL_tmpz00_3403 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_2293, BgL_tmpz00_3403,
										BgL_arg2201z00_1394);
								}
								BgL_resz00_1393 = BgL_newz00_2293;
						}}
						BGl_za2tvectorsza2z00zzmodule_typez00 = BNIL;
						return BgL_resz00_1393;
					}
				}
		}

	}



/* <@anonymous:2203>~0 */
	obj_t BGl_zc3z04anonymousza32203ze3ze70z60zzmodule_typez00(obj_t
		BgL_l1079z00_1397)
	{
		{	/* Module/type.scm 194 */
			if (NULLP(BgL_l1079z00_1397))
				{	/* Module/type.scm 194 */
					return BNIL;
				}
			else
				{	/* Module/type.scm 195 */
					obj_t BgL_arg2205z00_1400;
					obj_t BgL_arg2206z00_1401;

					{	/* Module/type.scm 195 */
						obj_t BgL_tvz00_1402;

						BgL_tvz00_1402 = CAR(((obj_t) BgL_l1079z00_1397));
						{	/* Module/type.scm 195 */
							obj_t BgL_runner2210z00_1406;

							BgL_runner2210z00_1406 = BgL_tvz00_1402;
							{	/* Module/type.scm 195 */
								BgL_typez00_bglt BgL_aux2207z00_1403;

								{	/* Module/type.scm 195 */
									obj_t BgL_pairz00_2287;

									BgL_pairz00_2287 = BgL_runner2210z00_1406;
									BgL_aux2207z00_1403 =
										((BgL_typez00_bglt) CAR(BgL_pairz00_2287));
								}
								BgL_runner2210z00_1406 = CDR(BgL_runner2210z00_1406);
								{	/* Module/type.scm 195 */
									obj_t BgL_aux2208z00_1404;

									BgL_aux2208z00_1404 = CAR(BgL_runner2210z00_1406);
									BgL_runner2210z00_1406 = CDR(BgL_runner2210z00_1406);
									{	/* Module/type.scm 195 */
										bool_t BgL_aux2209z00_1405;

										{	/* Module/type.scm 195 */
											obj_t BgL_pairz00_2291;

											BgL_pairz00_2291 = BgL_runner2210z00_1406;
											BgL_aux2209z00_1405 = CBOOL(CAR(BgL_pairz00_2291));
										}
										BgL_arg2205z00_1400 =
											BGl_makezd2tvectorzd2accessesz00zztvector_accessz00
											(BgL_aux2207z00_1403, BgL_aux2208z00_1404,
											BgL_aux2209z00_1405);
									}
								}
							}
						}
					}
					{	/* Module/type.scm 194 */
						obj_t BgL_arg2211z00_1407;

						BgL_arg2211z00_1407 = CDR(((obj_t) BgL_l1079z00_1397));
						BgL_arg2206z00_1401 =
							BGl_zc3z04anonymousza32203ze3ze70z60zzmodule_typez00
							(BgL_arg2211z00_1407);
					}
					return bgl_append2(BgL_arg2205z00_1400, BgL_arg2206z00_1401);
				}
		}

	}



/* &tvector-finalizer */
	obj_t BGl_z62tvectorzd2finaliza7erz17zzmodule_typez00(obj_t BgL_envz00_2316)
	{
		{	/* Module/type.scm 187 */
			return BGl_tvectorzd2finaliza7erz75zzmodule_typez00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_typez00()
	{
		{	/* Module/type.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_typez00()
	{
		{	/* Module/type.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_typez00()
	{
		{	/* Module/type.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_typez00()
	{
		{	/* Module/type.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2556z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2556z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2556z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2556z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 116865717),
				BSTRING_TO_STRING(BGl_string2556z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string2556z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztvector_accessz00(((long) 189470641),
				BSTRING_TO_STRING(BGl_string2556z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2556z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2556z00zzmodule_typez00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2556z00zzmodule_typez00));
		}

	}

#ifdef __cplusplus
}
#endif
