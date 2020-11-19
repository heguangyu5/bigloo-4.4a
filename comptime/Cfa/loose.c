/*===========================================================================*/
/*   (Cfa/loose.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/loose.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
		obj_t BgL_dupz00;
	}                *BgL_approxz00_bglt;


	static obj_t BGl_objectzd2initzd2zzcfa_loosez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2loosez12zc0zzcfa_loosez00(BgL_globalz00_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl_methodzd2initzd2zzcfa_loosez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_approxz00_bglt BGl_z62loosez12z70zzcfa_loosez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_approxz00_bglt,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_loosez00();
	extern obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00;
	static obj_t BGl_z62globalzd2loosez12za2zzcfa_loosez00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_loosez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_loosez00();
	static obj_t BGl_genericzd2initzd2zzcfa_loosez00();
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62loosezd2allocz121477za2zzcfa_loosez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_loosezd2allocz12zc0zzcfa_loosez00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_loosez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_loosez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_loosez00();
	static obj_t BGl_z62loosezd2allocz12za2zzcfa_loosez00(obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1911z00zzcfa_loosez00,
		BgL_bgl_za762looseza7d2alloc1919z00,
		BGl_z62loosezd2allocz121477za2zzcfa_loosez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_loosez12zd2envzc0zzcfa_loosez00,
		BgL_bgl_za762looseza712za770za7za71920za7, BGl_z62loosez12z70zzcfa_loosez00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1910z00zzcfa_loosez00,
		BgL_bgl_string1910za700za7za7c1921za7, "global track is lost", 20);
	      DEFINE_STRING(BGl_string1912z00zzcfa_loosez00,
		BgL_bgl_string1912za700za7za7c1922za7, "loose-alloc!1477", 16);
	      DEFINE_STRING(BGl_string1913z00zzcfa_loosez00,
		BgL_bgl_string1913za700za7za7c1923za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1914z00zzcfa_loosez00,
		BgL_bgl_string1914za700za7za7c1924za7, "cfa_loose", 9);
	      DEFINE_STRING(BGl_string1915z00zzcfa_loosez00,
		BgL_bgl_string1915za700za7za7c1925za7,
		"loose-alloc!1477 all (import export) ", 37);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_globalzd2loosez12zd2envz12zzcfa_loosez00,
		BgL_bgl_za762globalza7d2loos1926z00,
		BGl_z62globalzd2loosez12za2zzcfa_loosez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
		BgL_bgl_za762looseza7d2alloc1927z00,
		BGl_z62loosezd2allocz12za2zzcfa_loosez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_loosez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long
		BgL_checksumz00_3341, char *BgL_fromz00_3342)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_loosez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_loosez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_loosez00();
					BGl_libraryzd2moduleszd2initz00zzcfa_loosez00();
					BGl_cnstzd2initzd2zzcfa_loosez00();
					BGl_importedzd2moduleszd2initz00zzcfa_loosez00();
					BGl_genericzd2initzd2zzcfa_loosez00();
					return BGl_toplevelzd2initzd2zzcfa_loosez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_loosez00()
	{
		{	/* Cfa/loose.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_loose");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cfa_loose");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_loose");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_loose");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_loose");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_loose");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_loose");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_loose");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_loose");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_loosez00()
	{
		{	/* Cfa/loose.scm 16 */
			{	/* Cfa/loose.scm 16 */
				obj_t BgL_cportz00_3327;

				{	/* Cfa/loose.scm 16 */
					obj_t BgL_stringz00_3335;

					BgL_stringz00_3335 = BGl_string1915z00zzcfa_loosez00;
					{	/* Cfa/loose.scm 16 */
						obj_t BgL_startz00_3336;

						BgL_startz00_3336 = BINT(((long) 0));
						{	/* Cfa/loose.scm 16 */
							obj_t BgL_endz00_3337;

							BgL_endz00_3337 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3335)));
							{	/* Cfa/loose.scm 16 */

								BgL_cportz00_3327 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3335, BgL_startz00_3336, BgL_endz00_3337);
				}}}}
				{
					long BgL_iz00_3328;

					BgL_iz00_3328 = ((long) 2);
				BgL_loopz00_3329:
					if ((BgL_iz00_3328 == ((long) -1)))
						{	/* Cfa/loose.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/loose.scm 16 */
							{	/* Cfa/loose.scm 16 */
								obj_t BgL_arg1917z00_3331;

								{	/* Cfa/loose.scm 16 */

									{	/* Cfa/loose.scm 16 */
										obj_t BgL_locationz00_3333;

										BgL_locationz00_3333 = BBOOL(((bool_t) 0));
										{	/* Cfa/loose.scm 16 */

											BgL_arg1917z00_3331 =
												BGl_readz00zz__readerz00(BgL_cportz00_3327,
												BgL_locationz00_3333);
										}
									}
								}
								{	/* Cfa/loose.scm 16 */
									int BgL_tmpz00_3370;

									BgL_tmpz00_3370 = (int) (BgL_iz00_3328);
									CNST_TABLE_SET(BgL_tmpz00_3370, BgL_arg1917z00_3331);
							}}
							{	/* Cfa/loose.scm 16 */
								int BgL_auxz00_3334;

								BgL_auxz00_3334 = (int) ((BgL_iz00_3328 - ((long) 1)));
								{
									long BgL_iz00_3375;

									BgL_iz00_3375 = (long) (BgL_auxz00_3334);
									BgL_iz00_3328 = BgL_iz00_3375;
									goto BgL_loopz00_3329;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_loosez00()
	{
		{	/* Cfa/loose.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_loosez00()
	{
		{	/* Cfa/loose.scm 16 */
			return BUNSPEC;
		}

	}



/* loose! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt BgL_approxz00_3,
		obj_t BgL_ownerz00_4)
	{
		{	/* Cfa/loose.scm 35 */
			if (
				((((BgL_approxz00_bglt) COBJECT(BgL_approxz00_3))->
						BgL_lostzd2stampzd2) <
					(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00)))
				{	/* Cfa/loose.scm 38 */
					((((BgL_approxz00_bglt) COBJECT(BgL_approxz00_3))->
							BgL_lostzd2stampzd2) =
						((long) (long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00)),
						BUNSPEC);
					BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
						(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00, BgL_approxz00_3);
				}
			else
				{	/* Cfa/loose.scm 38 */
					BFALSE;
				}
			return BgL_approxz00_3;
		}

	}



/* &loose! */
	BgL_approxz00_bglt BGl_z62loosez12z70zzcfa_loosez00(obj_t BgL_envz00_3316,
		obj_t BgL_approxz00_3317, obj_t BgL_ownerz00_3318)
	{
		{	/* Cfa/loose.scm 35 */
			return
				BGl_loosez12z12zzcfa_loosez00(
				((BgL_approxz00_bglt) BgL_approxz00_3317), BgL_ownerz00_3318);
		}

	}



/* global-loose! */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2loosez12zc0zzcfa_loosez00(BgL_globalz00_bglt BgL_globalz00_6,
		BgL_approxz00_bglt BgL_approxz00_7)
	{
		{	/* Cfa/loose.scm 58 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
						(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_6))->BgL_importz00),
						CNST_TABLE_REF(((long) 0)))))
				{	/* Cfa/loose.scm 61 */
					return
						((obj_t)
						BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_7,
							CNST_TABLE_REF(((long) 1))));
				}
			else
				{	/* Cfa/loose.scm 61 */
					return
						BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_approxz00_7,
						BGl_string1910z00zzcfa_loosez00);
				}
		}

	}



/* &global-loose! */
	obj_t BGl_z62globalzd2loosez12za2zzcfa_loosez00(obj_t BgL_envz00_3321,
		obj_t BgL_globalz00_3322, obj_t BgL_approxz00_3323)
	{
		{	/* Cfa/loose.scm 58 */
			return
				BGl_globalzd2loosez12zc0zzcfa_loosez00(
				((BgL_globalz00_bglt) BgL_globalz00_3322),
				((BgL_approxz00_bglt) BgL_approxz00_3323));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_loosez00()
	{
		{	/* Cfa/loose.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_loosez00()
	{
		{	/* Cfa/loose.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_proc1911z00zzcfa_loosez00, BGl_nodez00zzast_nodez00,
				BGl_string1912z00zzcfa_loosez00);
		}

	}



/* &loose-alloc!1477 */
	obj_t BGl_z62loosezd2allocz121477za2zzcfa_loosez00(obj_t BgL_envz00_3325,
		obj_t BgL_nodez00_3326)
	{
		{	/* Cfa/loose.scm 47 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
				BGl_string1913z00zzcfa_loosez00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_3326)));
		}

	}



/* loose-alloc! */
	BGL_EXPORTED_DEF obj_t BGl_loosezd2allocz12zc0zzcfa_loosez00(BgL_nodez00_bglt
		BgL_nodez00_5)
	{
		{	/* Cfa/loose.scm 47 */
			{	/* Cfa/loose.scm 47 */
				obj_t BgL_method1478z00_2800;

				{	/* Cfa/loose.scm 47 */
					obj_t BgL_res1909z00_3315;

					{	/* Cfa/loose.scm 47 */
						long BgL_objzd2classzd2numz00_3280;

						{	/* Cfa/loose.scm 47 */
							long BgL_res1899z00_3283;

							BgL_res1899z00_3283 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_5));
							BgL_objzd2classzd2numz00_3280 = BgL_res1899z00_3283;
						}
						{	/* Cfa/loose.scm 47 */
							obj_t BgL_arg1813z00_3281;

							BgL_arg1813z00_3281 =
								PROCEDURE_REF(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
								(int) (((long) 1)));
							{	/* Cfa/loose.scm 47 */
								int BgL_offsetz00_3285;

								BgL_offsetz00_3285 = (int) (BgL_objzd2classzd2numz00_3280);
								{	/* Cfa/loose.scm 47 */
									long BgL_offsetz00_3286;

									BgL_offsetz00_3286 =
										((long) (BgL_offsetz00_3285) - OBJECT_TYPE);
									{	/* Cfa/loose.scm 47 */
										long BgL_modz00_3287;

										BgL_modz00_3287 =
											(BgL_offsetz00_3286 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Cfa/loose.scm 47 */
											long BgL_restz00_3289;

											BgL_restz00_3289 =
												(BgL_offsetz00_3286 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Cfa/loose.scm 47 */

												{	/* Cfa/loose.scm 47 */
													obj_t BgL_bucketz00_3291;

													BgL_bucketz00_3291 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_3281), BgL_modz00_3287);
													BgL_res1909z00_3315 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_3291), BgL_restz00_3289);
					}}}}}}}}
					BgL_method1478z00_2800 = BgL_res1909z00_3315;
				}
				return
					PROCEDURE_ENTRY(BgL_method1478z00_2800) (BgL_method1478z00_2800,
					((obj_t) BgL_nodez00_5), BEOA);
			}
		}

	}



/* &loose-alloc! */
	obj_t BGl_z62loosezd2allocz12za2zzcfa_loosez00(obj_t BgL_envz00_3319,
		obj_t BgL_nodez00_3320)
	{
		{	/* Cfa/loose.scm 47 */
			return
				BGl_loosezd2allocz12zc0zzcfa_loosez00(
				((BgL_nodez00_bglt) BgL_nodez00_3320));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_loosez00()
	{
		{	/* Cfa/loose.scm 16 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_loosez00()
	{
		{	/* Cfa/loose.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1914z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1914z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1914z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1914z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1914z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string1914z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 21524494),
				BSTRING_TO_STRING(BGl_string1914z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string1914z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string1914z00zzcfa_loosez00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string1914z00zzcfa_loosez00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_procedurez00(((long) 227653907),
				BSTRING_TO_STRING(BGl_string1914z00zzcfa_loosez00));
		}

	}

#ifdef __cplusplus
}
#endif
