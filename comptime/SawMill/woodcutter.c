/*===========================================================================*/
/*   (SawMill/woodcutter.scm)                                                */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/woodcutter.scm) */
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

	typedef struct BgL_rtl_regz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_varz00;
		obj_t BgL_onexprzf3zf3;
		obj_t BgL_namez00;
		obj_t BgL_keyz00;
		obj_t BgL_hardwarez00;
	}                 *BgL_rtl_regz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;


	extern BgL_blockz00_bglt
		BGl_globalzd2ze3rtlz31zzsaw_node2rtlz00(BgL_globalz00_bglt);
	static bool_t BGl_za2saw_inline_returnsza2z00zzsaw_woodcutterz00;
	static obj_t BGl_objectzd2initzd2zzsaw_woodcutterz00();
	static obj_t BGl_z62globalzd2ze3blocksz53zzsaw_woodcutterz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_woodcutterz00();
	extern obj_t BGl_addzd2gotoszd2zzsaw_gotosz00(obj_t);
	static bool_t BGl_za2castza2z00zzsaw_woodcutterz00;
	static obj_t BGl_gczd2rootszd2initz00zzsaw_woodcutterz00();
	extern obj_t BGl_collapsez00zzsaw_collapsez00(BgL_blockz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_woodcutterz00 = BUNSPEC;
	extern BgL_blockz00_bglt BGl_removez00zzsaw_removez00(BgL_blockz00_bglt);
	static bool_t BGl_za2removeza2z00zzsaw_woodcutterz00;
	static obj_t BGl_toplevelzd2initzd2zzsaw_woodcutterz00();
	extern obj_t BGl_blockzd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt);
	static obj_t BGl_genericzd2initzd2zzsaw_woodcutterz00();
	extern BgL_rtl_regz00_bglt
		BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(BgL_backendz00_bglt,
		BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_castz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_gotosz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_blockorderz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_inline_returnz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_collapsez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static bool_t BGl_za2collapseza2z00zzsaw_woodcutterz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_woodcutterz00();
	extern obj_t BGl_addzd2castszd2zzsaw_castz00(BgL_backendz00_bglt, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_woodcutterz00();
	static bool_t BGl_za2backendza2z00zzsaw_woodcutterz00;
	extern obj_t BGl_inlinezd2returnszd2zzsaw_inline_returnz00(BgL_blockz00_bglt);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1831z00zzsaw_woodcutterz00,
		BgL_bgl_string1831za700za7za7s1832za7, "saw_woodcutter", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2ze3blockszd2envze3zzsaw_woodcutterz00,
		BgL_bgl_za762globalza7d2za7e3b1833za7,
		BGl_z62globalzd2ze3blocksz53zzsaw_woodcutterz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_woodcutterz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(long
		BgL_checksumz00_2486, char *BgL_fromz00_2487)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_woodcutterz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_woodcutterz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_woodcutterz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_woodcutterz00();
					BGl_importedzd2moduleszd2initz00zzsaw_woodcutterz00();
					return BGl_toplevelzd2initzd2zzsaw_woodcutterz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_woodcutterz00()
	{
		{	/* SawMill/woodcutter.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_woodcutter");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_woodcutter");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_woodcutter");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_woodcutterz00()
	{
		{	/* SawMill/woodcutter.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_woodcutterz00()
	{
		{	/* SawMill/woodcutter.scm 1 */
			BGl_za2backendza2z00zzsaw_woodcutterz00 = ((bool_t) 0);
			BGl_za2collapseza2z00zzsaw_woodcutterz00 = ((bool_t) 1);
			BGl_za2removeza2z00zzsaw_woodcutterz00 = ((bool_t) 1);
			BGl_za2saw_inline_returnsza2z00zzsaw_woodcutterz00 = ((bool_t) 1);
			return (BGl_za2castza2z00zzsaw_woodcutterz00 = ((bool_t) 1), BUNSPEC);
		}

	}



/* global->blocks */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(BgL_backendz00_bglt
		BgL_backz00_3, BgL_globalz00_bglt BgL_vz00_4)
	{
		{	/* SawMill/woodcutter.scm 35 */
			{	/* SawMill/woodcutter.scm 39 */
				BgL_blockz00_bglt BgL_bz00_2066;
				obj_t BgL_argsz00_2067;

				BgL_bz00_2066 = BGl_globalzd2ze3rtlz31zzsaw_node2rtlz00(BgL_vz00_4);
				{	/* SawMill/woodcutter.scm 40 */
					obj_t BgL_l1419z00_2078;

					BgL_l1419z00_2078 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_vz00_4)))->
										BgL_valuez00))))->BgL_argsz00);
					if (NULLP(BgL_l1419z00_2078))
						{	/* SawMill/woodcutter.scm 40 */
							BgL_argsz00_2067 = BNIL;
						}
					else
						{	/* SawMill/woodcutter.scm 40 */
							obj_t BgL_head1421z00_2080;

							{	/* SawMill/woodcutter.scm 40 */
								BgL_rtl_regz00_bglt BgL_arg1489z00_2092;

								{	/* SawMill/woodcutter.scm 40 */
									obj_t BgL_arg1493z00_2093;

									BgL_arg1493z00_2093 = CAR(((obj_t) BgL_l1419z00_2078));
									BgL_arg1489z00_2092 =
										BGl_localzd2ze3regz31zzsaw_node2rtlz00(
										((BgL_localz00_bglt) BgL_arg1493z00_2093));
								}
								{	/* SawMill/woodcutter.scm 40 */
									obj_t BgL_res1826z00_2469;

									BgL_res1826z00_2469 =
										MAKE_YOUNG_PAIR(((obj_t) BgL_arg1489z00_2092), BNIL);
									BgL_head1421z00_2080 = BgL_res1826z00_2469;
								}
							}
							{	/* SawMill/woodcutter.scm 40 */
								obj_t BgL_g1424z00_2081;

								BgL_g1424z00_2081 = CDR(((obj_t) BgL_l1419z00_2078));
								{
									obj_t BgL_l1419z00_2083;
									obj_t BgL_tail1422z00_2084;

									BgL_l1419z00_2083 = BgL_g1424z00_2081;
									BgL_tail1422z00_2084 = BgL_head1421z00_2080;
								BgL_zc3z04anonymousza31463ze3z87_2085:
									if (NULLP(BgL_l1419z00_2083))
										{	/* SawMill/woodcutter.scm 40 */
											BgL_argsz00_2067 = BgL_head1421z00_2080;
										}
									else
										{	/* SawMill/woodcutter.scm 40 */
											obj_t BgL_newtail1423z00_2087;

											{	/* SawMill/woodcutter.scm 40 */
												BgL_rtl_regz00_bglt BgL_arg1476z00_2089;

												{	/* SawMill/woodcutter.scm 40 */
													obj_t BgL_arg1477z00_2090;

													BgL_arg1477z00_2090 =
														CAR(((obj_t) BgL_l1419z00_2083));
													BgL_arg1476z00_2089 =
														BGl_localzd2ze3regz31zzsaw_node2rtlz00(
														((BgL_localz00_bglt) BgL_arg1477z00_2090));
												}
												{	/* SawMill/woodcutter.scm 40 */
													obj_t BgL_res1828z00_2473;

													BgL_res1828z00_2473 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1476z00_2089), BNIL);
													BgL_newtail1423z00_2087 = BgL_res1828z00_2473;
												}
											}
											SET_CDR(BgL_tail1422z00_2084, BgL_newtail1423z00_2087);
											{	/* SawMill/woodcutter.scm 40 */
												obj_t BgL_arg1474z00_2088;

												BgL_arg1474z00_2088 = CDR(((obj_t) BgL_l1419z00_2083));
												{
													obj_t BgL_tail1422z00_2526;
													obj_t BgL_l1419z00_2525;

													BgL_l1419z00_2525 = BgL_arg1474z00_2088;
													BgL_tail1422z00_2526 = BgL_newtail1423z00_2087;
													BgL_tail1422z00_2084 = BgL_tail1422z00_2526;
													BgL_l1419z00_2083 = BgL_l1419z00_2525;
													goto BgL_zc3z04anonymousza31463ze3z87_2085;
												}
											}
										}
								}
							}
						}
				}
				BGl_collapsez00zzsaw_collapsez00(BgL_bz00_2066);
				BgL_bz00_2066 = BGl_removez00zzsaw_removez00(BgL_bz00_2066);
				BGl_inlinezd2returnszd2zzsaw_inline_returnz00(BgL_bz00_2066);
				{	/* SawMill/woodcutter.scm 44 */
					obj_t BgL_lz00_2068;

					BgL_lz00_2068 =
						BGl_blockzd2orderingzd2zzsaw_blockorderz00(BgL_bz00_2066);
					{
						long BgL_iz00_2070;
						obj_t BgL_lz00_2071;

						BgL_iz00_2070 = ((long) 0);
						BgL_lz00_2071 = BgL_lz00_2068;
					BgL_zc3z04anonymousza31443ze3z87_2072:
						if (PAIRP(BgL_lz00_2071))
							{	/* SawMill/woodcutter.scm 46 */
								{	/* SawMill/woodcutter.scm 47 */
									obj_t BgL_arg1448z00_2074;

									BgL_arg1448z00_2074 = CAR(BgL_lz00_2071);
									{	/* SawMill/woodcutter.scm 47 */
										int BgL_vz00_2479;

										BgL_vz00_2479 = (int) (BgL_iz00_2070);
										((((BgL_blockz00_bglt) COBJECT(
														((BgL_blockz00_bglt) BgL_arg1448z00_2074)))->
												BgL_labelz00) = ((int) BgL_vz00_2479), BUNSPEC);
								}}
								{
									obj_t BgL_lz00_2539;
									long BgL_iz00_2537;

									BgL_iz00_2537 = (BgL_iz00_2070 + ((long) 1));
									BgL_lz00_2539 = CDR(BgL_lz00_2071);
									BgL_lz00_2071 = BgL_lz00_2539;
									BgL_iz00_2070 = BgL_iz00_2537;
									goto BgL_zc3z04anonymousza31443ze3z87_2072;
								}
							}
						else
							{	/* SawMill/woodcutter.scm 46 */
								((bool_t) 0);
							}
					}
					BGl_addzd2gotoszd2zzsaw_gotosz00(BgL_lz00_2068);
					BGl_addzd2castszd2zzsaw_castz00(BgL_backz00_3, BgL_lz00_2068);
					return BgL_lz00_2068;
				}
			}
		}

	}



/* &global->blocks */
	obj_t BGl_z62globalzd2ze3blocksz53zzsaw_woodcutterz00(obj_t BgL_envz00_2483,
		obj_t BgL_backz00_2484, obj_t BgL_vz00_2485)
	{
		{	/* SawMill/woodcutter.scm 35 */
			return
				BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(
				((BgL_backendz00_bglt) BgL_backz00_2484),
				((BgL_globalz00_bglt) BgL_vz00_2485));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_woodcutterz00()
	{
		{	/* SawMill/woodcutter.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_woodcutterz00()
	{
		{	/* SawMill/woodcutter.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_woodcutterz00()
	{
		{	/* SawMill/woodcutter.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_woodcutterz00()
	{
		{	/* SawMill/woodcutter.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 20930013),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_collapsez00(((long) 236189431),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_removez00(((long) 14643130),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_inline_returnz00(((long) 357883881),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_blockorderz00(((long) 202893872),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_gotosz00(((long) 422998525),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_castz00(((long) 17912847),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_woodcutterz00));
		}

	}

#ifdef __cplusplus
}
#endif
