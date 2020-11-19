/*===========================================================================*/
/*   (Cc/roots.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cc/roots.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
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


	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzcc_rootsz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzcc_rootsz00();
	static bool_t BGl_iszd2localzd2gczd2rootzf3z21zzcc_rootsz00(obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_z62makezd2gczd2rootszd2unitzb0zzcc_rootsz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcc_rootsz00();
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzcc_rootsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_makezd2gczd2rootszd2unitzd2zzcc_rootsz00();
	static obj_t BGl_toplevelzd2initzd2zzcc_rootsz00();
	static obj_t BGl_genericzd2initzd2zzcc_rootsz00();
	BGL_EXPORTED_DECL obj_t BGl_gczd2rootszd2emitz00zzcc_rootsz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_emitzd2gczd2registrationz00zzcc_rootsz00(BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcc_rootsz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzcc_rootsz00();
	static obj_t BGl_z62zc3z04anonymousza31196ze3ze5zzcc_rootsz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcc_rootsz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcc_rootsz00();
	static obj_t BGl_z62gczd2rootszd2emitz62zzcc_rootsz00(obj_t, obj_t);
	static obj_t __cnst[4];


	   
		 
		DEFINE_STRING(BGl_string1258z00zzcc_rootsz00,
		BgL_bgl_string1258za700za7za7c1275za7, "/* GC roots registration */\n", 28);
	      DEFINE_STRING(BGl_string1259z00zzcc_rootsz00,
		BgL_bgl_string1259za700za7za7c1276za7,
		"static obj_t bgl_gc_roots_register() {\n", 39);
	      DEFINE_STRING(BGl_string1260z00zzcc_rootsz00,
		BgL_bgl_string1260za700za7za7c1277za7, "#if defined( BGL_GC_ROOTS )\n", 28);
	      DEFINE_STRING(BGl_string1261z00zzcc_rootsz00,
		BgL_bgl_string1261za700za7za7c1278za7,
		"#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))\n",
		107);
	      DEFINE_STRING(BGl_string1262z00zzcc_rootsz00,
		BgL_bgl_string1262za700za7za7c1279za7,
		"void *roots_min = (void*)ULONG_MAX, *roots_max = 0;\n", 52);
	      DEFINE_STRING(BGl_string1263z00zzcc_rootsz00,
		BgL_bgl_string1263za700za7za7c1280za7, "#undef ADD_ROOT\n", 16);
	      DEFINE_STRING(BGl_string1264z00zzcc_rootsz00,
		BgL_bgl_string1264za700za7za7c1281za7,
		"if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );\n",
		73);
	      DEFINE_STRING(BGl_string1265z00zzcc_rootsz00,
		BgL_bgl_string1265za700za7za7c1282za7, "#endif\n", 7);
	      DEFINE_STRING(BGl_string1266z00zzcc_rootsz00,
		BgL_bgl_string1266za700za7za7c1283za7, "return BUNSPEC;\n", 16);
	      DEFINE_STRING(BGl_string1267z00zzcc_rootsz00,
		BgL_bgl_string1267za700za7za7c1284za7, "}\n\n", 3);
	      DEFINE_STRING(BGl_string1268z00zzcc_rootsz00,
		BgL_bgl_string1268za700za7za7c1285za7, "ADD_ROOT( (void *)(&", 20);
	      DEFINE_STRING(BGl_string1269z00zzcc_rootsz00,
		BgL_bgl_string1269za700za7za7c1286za7, ") );\n", 5);
	      DEFINE_STRING(BGl_string1270z00zzcc_rootsz00,
		BgL_bgl_string1270za700za7za7c1287za7, "cc_roots", 8);
	      DEFINE_STRING(BGl_string1271z00zzcc_rootsz00,
		BgL_bgl_string1271za700za7za7c1288za7,
		"unit gc-roots begin (begin (pragma::obj \"bgl_gc_roots_register()\")) ",
		68);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2gczd2rootszd2unitzd2envz00zzcc_rootsz00,
		BgL_bgl_za762makeza7d2gcza7d2r1289za7,
		BGl_z62makezd2gczd2rootszd2unitzb0zzcc_rootsz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_gczd2rootszd2emitzd2envzd2zzcc_rootsz00,
		BgL_bgl_za762gcza7d2rootsza7d21290za7,
		BGl_z62gczd2rootszd2emitz62zzcc_rootsz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcc_rootsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcc_rootsz00(long
		BgL_checksumz00_759, char *BgL_fromz00_760)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcc_rootsz00))
				{
					BGl_requirezd2initializa7ationz75zzcc_rootsz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcc_rootsz00();
					BGl_libraryzd2moduleszd2initz00zzcc_rootsz00();
					BGl_cnstzd2initzd2zzcc_rootsz00();
					BGl_importedzd2moduleszd2initz00zzcc_rootsz00();
					return BGl_toplevelzd2initzd2zzcc_rootsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcc_rootsz00()
	{
		{	/* Cc/roots.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cc_roots");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cc_roots");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cc_roots");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cc_roots");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cc_roots");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "cc_roots");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "cc_roots");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcc_rootsz00()
	{
		{	/* Cc/roots.scm 15 */
			{	/* Cc/roots.scm 15 */
				obj_t BgL_cportz00_746;

				{	/* Cc/roots.scm 15 */
					obj_t BgL_stringz00_754;

					BgL_stringz00_754 = BGl_string1271z00zzcc_rootsz00;
					{	/* Cc/roots.scm 15 */
						obj_t BgL_startz00_755;

						BgL_startz00_755 = BINT(((long) 0));
						{	/* Cc/roots.scm 15 */
							obj_t BgL_endz00_756;

							BgL_endz00_756 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_754)));
							{	/* Cc/roots.scm 15 */

								BgL_cportz00_746 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_754, BgL_startz00_755, BgL_endz00_756);
				}}}}
				{
					long BgL_iz00_747;

					BgL_iz00_747 = ((long) 3);
				BgL_loopz00_748:
					if ((BgL_iz00_747 == ((long) -1)))
						{	/* Cc/roots.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cc/roots.scm 15 */
							{	/* Cc/roots.scm 15 */
								obj_t BgL_arg1273z00_750;

								{	/* Cc/roots.scm 15 */

									{	/* Cc/roots.scm 15 */
										obj_t BgL_locationz00_752;

										BgL_locationz00_752 = BBOOL(((bool_t) 0));
										{	/* Cc/roots.scm 15 */

											BgL_arg1273z00_750 =
												BGl_readz00zz__readerz00(BgL_cportz00_746,
												BgL_locationz00_752);
										}
									}
								}
								{	/* Cc/roots.scm 15 */
									int BgL_tmpz00_785;

									BgL_tmpz00_785 = (int) (BgL_iz00_747);
									CNST_TABLE_SET(BgL_tmpz00_785, BgL_arg1273z00_750);
							}}
							{	/* Cc/roots.scm 15 */
								int BgL_auxz00_753;

								BgL_auxz00_753 = (int) ((BgL_iz00_747 - ((long) 1)));
								{
									long BgL_iz00_790;

									BgL_iz00_790 = (long) (BgL_auxz00_753);
									BgL_iz00_747 = BgL_iz00_790;
									goto BgL_loopz00_748;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcc_rootsz00()
	{
		{	/* Cc/roots.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcc_rootsz00()
	{
		{	/* Cc/roots.scm 15 */
			return BUNSPEC;
		}

	}



/* make-gc-roots-unit */
	BGL_EXPORTED_DEF obj_t BGl_makezd2gczd2rootszd2unitzd2zzcc_rootsz00()
	{
		{	/* Cc/roots.scm 32 */
			{	/* Cc/roots.scm 35 */
				obj_t BgL_arg1177z00_563;

				{	/* Cc/roots.scm 35 */
					bool_t BgL_test1293z00_793;

					{	/* Cc/roots.scm 35 */
						obj_t BgL_arg1190z00_567;

						BgL_arg1190z00_567 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_test1293z00_793 =
							(((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_arg1190z00_567)))->
							BgL_pragmazd2supportzd2);
					}
					if (BgL_test1293z00_793)
						{	/* Cc/roots.scm 35 */
							BgL_arg1177z00_563 = CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Cc/roots.scm 37 */
							obj_t BgL_arg1186z00_566;

							BgL_arg1186z00_566 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
							BgL_arg1177z00_563 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)), BgL_arg1186z00_566);
				}}
				{	/* Cc/roots.scm 33 */
					obj_t BgL_idz00_703;

					BgL_idz00_703 = CNST_TABLE_REF(((long) 2));
					{	/* Cc/roots.scm 33 */
						obj_t BgL_newz00_704;

						BgL_newz00_704 =
							create_struct(CNST_TABLE_REF(((long) 3)), (int) (((long) 5)));
						{	/* Cc/roots.scm 33 */
							int BgL_tmpz00_805;

							BgL_tmpz00_805 = (int) (((long) 4));
							STRUCT_SET(BgL_newz00_704, BgL_tmpz00_805, BFALSE);
						}
						{	/* Cc/roots.scm 33 */
							int BgL_tmpz00_808;

							BgL_tmpz00_808 = (int) (((long) 3));
							STRUCT_SET(BgL_newz00_704, BgL_tmpz00_808, BTRUE);
						}
						{	/* Cc/roots.scm 33 */
							int BgL_tmpz00_811;

							BgL_tmpz00_811 = (int) (((long) 2));
							STRUCT_SET(BgL_newz00_704, BgL_tmpz00_811, BgL_arg1177z00_563);
						}
						{	/* Cc/roots.scm 33 */
							obj_t BgL_auxz00_816;
							int BgL_tmpz00_814;

							BgL_auxz00_816 = BINT(((long) -1));
							BgL_tmpz00_814 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_704, BgL_tmpz00_814, BgL_auxz00_816);
						}
						{	/* Cc/roots.scm 33 */
							int BgL_tmpz00_819;

							BgL_tmpz00_819 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_704, BgL_tmpz00_819, BgL_idz00_703);
						}
						return BgL_newz00_704;
					}
				}
			}
		}

	}



/* &make-gc-roots-unit */
	obj_t BGl_z62makezd2gczd2rootszd2unitzb0zzcc_rootsz00(obj_t BgL_envz00_738)
	{
		{	/* Cc/roots.scm 32 */
			return BGl_makezd2gczd2rootszd2unitzd2zzcc_rootsz00();
		}

	}



/* gc-roots-emit */
	BGL_EXPORTED_DEF obj_t BGl_gczd2rootszd2emitz00zzcc_rootsz00(obj_t
		BgL_portz00_25)
	{
		{	/* Cc/roots.scm 44 */
			bgl_display_string(BGl_string1258z00zzcc_rootsz00, BgL_portz00_25);
			bgl_display_string(BGl_string1259z00zzcc_rootsz00, BgL_portz00_25);
			bgl_display_string(BGl_string1260z00zzcc_rootsz00, BgL_portz00_25);
			bgl_display_string(BGl_string1261z00zzcc_rootsz00, BgL_portz00_25);
			bgl_display_string(BGl_string1262z00zzcc_rootsz00, BgL_portz00_25);
			{	/* Cc/roots.scm 52 */
				obj_t BgL_zc3z04anonymousza31196ze3z87_739;

				BgL_zc3z04anonymousza31196ze3z87_739 =
					MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31196ze3ze5zzcc_rootsz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31196ze3z87_739,
					(int) (((long) 0)), BgL_portz00_25);
				BGl_forzd2eachzd2globalz12z12zzast_envz00
					(BgL_zc3z04anonymousza31196ze3z87_739, BNIL);
			}
			bgl_display_string(BGl_string1263z00zzcc_rootsz00, BgL_portz00_25);
			bgl_display_string(BGl_string1264z00zzcc_rootsz00, BgL_portz00_25);
			bgl_display_string(BGl_string1265z00zzcc_rootsz00, BgL_portz00_25);
			bgl_display_string(BGl_string1266z00zzcc_rootsz00, BgL_portz00_25);
			return bgl_display_string(BGl_string1267z00zzcc_rootsz00, BgL_portz00_25);
		}

	}



/* &gc-roots-emit */
	obj_t BGl_z62gczd2rootszd2emitz62zzcc_rootsz00(obj_t BgL_envz00_740,
		obj_t BgL_portz00_741)
	{
		{	/* Cc/roots.scm 44 */
			return BGl_gczd2rootszd2emitz00zzcc_rootsz00(BgL_portz00_741);
		}

	}



/* &<@anonymous:1196> */
	obj_t BGl_z62zc3z04anonymousza31196ze3ze5zzcc_rootsz00(obj_t BgL_envz00_742,
		obj_t BgL_globalz00_744)
	{
		{	/* Cc/roots.scm 51 */
			{	/* Cc/roots.scm 52 */
				obj_t BgL_portz00_743;

				BgL_portz00_743 =
					((obj_t) PROCEDURE_REF(BgL_envz00_742, (int) (((long) 0))));
				if (BGl_iszd2localzd2gczd2rootzf3z21zzcc_rootsz00(BgL_globalz00_744))
					{	/* Cc/roots.scm 52 */
						return
							BGl_emitzd2gczd2registrationz00zzcc_rootsz00(
							((BgL_variablez00_bglt) BgL_globalz00_744), BgL_portz00_743);
					}
				else
					{	/* Cc/roots.scm 52 */
						return BFALSE;
					}
			}
		}

	}



/* is-local-gc-root? */
	bool_t BGl_iszd2localzd2gczd2rootzf3z21zzcc_rootsz00(obj_t BgL_globalz00_26)
	{
		{	/* Cc/roots.scm 63 */
			{	/* Cc/roots.scm 64 */
				bool_t BgL_test1295z00_847;

				{	/* Cc/roots.scm 64 */
					BgL_valuez00_bglt BgL_arg1221z00_585;

					BgL_arg1221z00_585 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_globalz00_26))))->BgL_valuez00);
					{	/* Cc/roots.scm 64 */
						bool_t BgL_res1257z00_731;

						BgL_res1257z00_731 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1221z00_585), BGl_svarz00zzast_varz00);
						BgL_test1295z00_847 = BgL_res1257z00_731;
					}
				}
				if (BgL_test1295z00_847)
					{	/* Cc/roots.scm 66 */
						bool_t BgL_test1296z00_853;

						if (
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_globalz00_26)))->
								BgL_userzf3zf3))
							{	/* Cc/roots.scm 66 */
								if (CBOOL(
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_26)))->
											BgL_namez00)))
									{	/* Cc/roots.scm 66 */
										BgL_typez00_bglt BgL_arg1216z00_584;

										BgL_arg1216z00_584 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_26)))->
											BgL_typez00);
										BgL_test1296z00_853 =
											BGl_bigloozd2typezf3z21zztype_typez00(BgL_arg1216z00_584);
									}
								else
									{	/* Cc/roots.scm 66 */
										BgL_test1296z00_853 = ((bool_t) 0);
									}
							}
						else
							{	/* Cc/roots.scm 66 */
								BgL_test1296z00_853 = ((bool_t) 0);
							}
						if (BgL_test1296z00_853)
							{	/* Cc/roots.scm 67 */
								obj_t BgL_arg1211z00_581;

								BgL_arg1211z00_581 =
									(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_globalz00_26)))->BgL_modulez00);
								return
									(BgL_arg1211z00_581 == BGl_za2moduleza2z00zzmodule_modulez00);
							}
						else
							{	/* Cc/roots.scm 66 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Cc/roots.scm 64 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* emit-gc-registration */
	obj_t BGl_emitzd2gczd2registrationz00zzcc_rootsz00(BgL_variablez00_bglt
		BgL_globalz00_27, obj_t BgL_portz00_28)
	{
		{	/* Cc/roots.scm 72 */
			bgl_display_string(BGl_string1268z00zzcc_rootsz00, BgL_portz00_28);
			bgl_display_obj(
				(((BgL_variablez00_bglt) COBJECT(BgL_globalz00_27))->BgL_namez00),
				BgL_portz00_28);
			return bgl_display_string(BGl_string1269z00zzcc_rootsz00, BgL_portz00_28);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcc_rootsz00()
	{
		{	/* Cc/roots.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcc_rootsz00()
	{
		{	/* Cc/roots.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcc_rootsz00()
	{
		{	/* Cc/roots.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcc_rootsz00()
	{
		{	/* Cc/roots.scm 15 */
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1270z00zzcc_rootsz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1270z00zzcc_rootsz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1270z00zzcc_rootsz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1270z00zzcc_rootsz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1270z00zzcc_rootsz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1270z00zzcc_rootsz00));
		}

	}

#ifdef __cplusplus
}
#endif
