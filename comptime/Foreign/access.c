/*===========================================================================*/
/*   (Foreign/access.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/access.scm) */
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


	static obj_t BGl_objectzd2initzd2zzforeign_accessz00();
	static obj_t BGl_methodzd2initzd2zzforeign_accessz00();
	static obj_t BGl_gczd2rootszd2initz00zzforeign_accessz00();
	static obj_t BGl_z62makezd2ctypezd2accessesz12z70zzforeign_accessz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_accessz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzforeign_accessz00();
	static obj_t BGl_genericzd2initzd2zzforeign_accessz00();
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t
		BGl_z62makezd2ctypezd2accessesz121049z70zzforeign_accessz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_accessz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_cstructz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_cpointerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_cfunctionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_copaquez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_cenumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_caliasz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_accessz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_accessz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
		BgL_bgl_za762makeza7d2ctypeza71070za7,
		BGl_z62makezd2ctypezd2accessesz12z70zzforeign_accessz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1067z00zzforeign_accessz00,
		BgL_bgl_za762makeza7d2ctypeza71071za7,
		BGl_z62makezd2ctypezd2accessesz121049z70zzforeign_accessz00, 0L, BUNSPEC,
		3);
	      DEFINE_STRING(BGl_string1068z00zzforeign_accessz00,
		BgL_bgl_string1068za700za7za7f1072za7, "make-ctype-accesses!1049", 24);
	      DEFINE_STRING(BGl_string1069z00zzforeign_accessz00,
		BgL_bgl_string1069za700za7za7f1073za7, "foreign_access", 14);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzforeign_accessz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_accessz00(long
		BgL_checksumz00_131, char *BgL_fromz00_132)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_accessz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_accessz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzforeign_accessz00();
					BGl_libraryzd2moduleszd2initz00zzforeign_accessz00();
					BGl_importedzd2moduleszd2initz00zzforeign_accessz00();
					BGl_genericzd2initzd2zzforeign_accessz00();
					return BGl_toplevelzd2initzd2zzforeign_accessz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_accessz00()
	{
		{	/* Foreign/access.scm 19 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_access");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"foreign_access");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "foreign_access");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"foreign_access");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_access");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzforeign_accessz00()
	{
		{	/* Foreign/access.scm 19 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_accessz00()
	{
		{	/* Foreign/access.scm 19 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_accessz00()
	{
		{	/* Foreign/access.scm 19 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_accessz00()
	{
		{	/* Foreign/access.scm 19 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_proc1067z00zzforeign_accessz00, BGl_typez00zztype_typez00,
				BGl_string1068z00zzforeign_accessz00);
		}

	}



/* &make-ctype-accesses!1049 */
	obj_t BGl_z62makezd2ctypezd2accessesz121049z70zzforeign_accessz00(obj_t
		BgL_envz00_121, obj_t BgL_whatz00_122, obj_t BgL_whoz00_123,
		obj_t BgL_locz00_124)
	{
		{	/* Foreign/access.scm 34 */
			return BNIL;
		}

	}



/* make-ctype-accesses! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt
		BgL_whatz00_3, BgL_typez00_bglt BgL_whoz00_4, obj_t BgL_locz00_5)
	{
		{	/* Foreign/access.scm 34 */
			{	/* Foreign/access.scm 34 */
				obj_t BgL_method1050z00_79;

				{	/* Foreign/access.scm 34 */
					obj_t BgL_res1066z00_119;

					{	/* Foreign/access.scm 34 */
						long BgL_objzd2classzd2numz00_84;

						{	/* Foreign/access.scm 34 */
							long BgL_res1056z00_87;

							BgL_res1056z00_87 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_whatz00_3));
							BgL_objzd2classzd2numz00_84 = BgL_res1056z00_87;
						}
						{	/* Foreign/access.scm 34 */
							obj_t BgL_arg1813z00_85;

							BgL_arg1813z00_85 =
								PROCEDURE_REF
								(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
								(int) (((long) 1)));
							{	/* Foreign/access.scm 34 */
								int BgL_offsetz00_89;

								BgL_offsetz00_89 = (int) (BgL_objzd2classzd2numz00_84);
								{	/* Foreign/access.scm 34 */
									long BgL_offsetz00_90;

									BgL_offsetz00_90 = ((long) (BgL_offsetz00_89) - OBJECT_TYPE);
									{	/* Foreign/access.scm 34 */
										long BgL_modz00_91;

										BgL_modz00_91 =
											(BgL_offsetz00_90 >> (int) ((long) ((int) (((long) 4)))));
										{	/* Foreign/access.scm 34 */
											long BgL_restz00_93;

											BgL_restz00_93 =
												(BgL_offsetz00_90 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Foreign/access.scm 34 */

												{	/* Foreign/access.scm 34 */
													obj_t BgL_bucketz00_95;

													BgL_bucketz00_95 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_85), BgL_modz00_91);
													BgL_res1066z00_119 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_95), BgL_restz00_93);
					}}}}}}}}
					BgL_method1050z00_79 = BgL_res1066z00_119;
				}
				return
					PROCEDURE_ENTRY(BgL_method1050z00_79) (BgL_method1050z00_79,
					((obj_t) BgL_whatz00_3), ((obj_t) BgL_whoz00_4), BgL_locz00_5, BEOA);
			}
		}

	}



/* &make-ctype-accesses! */
	obj_t BGl_z62makezd2ctypezd2accessesz12z70zzforeign_accessz00(obj_t
		BgL_envz00_125, obj_t BgL_whatz00_126, obj_t BgL_whoz00_127,
		obj_t BgL_locz00_128)
	{
		{	/* Foreign/access.scm 34 */
			return
				BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(
				((BgL_typez00_bglt) BgL_whatz00_126),
				((BgL_typez00_bglt) BgL_whoz00_127), BgL_locz00_128);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_accessz00()
	{
		{	/* Foreign/access.scm 19 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_accessz00()
	{
		{	/* Foreign/access.scm 19 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1069z00zzforeign_accessz00));
			BGl_modulezd2initializa7ationz75zzforeign_caliasz00(((long) 237925082),
				BSTRING_TO_STRING(BGl_string1069z00zzforeign_accessz00));
			BGl_modulezd2initializa7ationz75zzforeign_cenumz00(((long) 263357139),
				BSTRING_TO_STRING(BGl_string1069z00zzforeign_accessz00));
			BGl_modulezd2initializa7ationz75zzforeign_copaquez00(((long) 499858571),
				BSTRING_TO_STRING(BGl_string1069z00zzforeign_accessz00));
			BGl_modulezd2initializa7ationz75zzforeign_cfunctionz00(((long) 225725416),
				BSTRING_TO_STRING(BGl_string1069z00zzforeign_accessz00));
			BGl_modulezd2initializa7ationz75zzforeign_cpointerz00(((long) 166831409),
				BSTRING_TO_STRING(BGl_string1069z00zzforeign_accessz00));
			return
				BGl_modulezd2initializa7ationz75zzforeign_cstructz00(((long) 216464438),
				BSTRING_TO_STRING(BGl_string1069z00zzforeign_accessz00));
		}

	}

#ifdef __cplusplus
}
#endif
