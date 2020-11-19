/*===========================================================================*/
/*   (Foreign/calias.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/calias.scm) */
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

	typedef struct BgL_caliasz00_bgl
	{
		bool_t BgL_arrayzf3zf3;
	}                *BgL_caliasz00_bglt;


	extern obj_t BGl_caliasz00zzforeign_ctypez00;
	static obj_t BGl_objectzd2initzd2zzforeign_caliasz00();
	static obj_t BGl_methodzd2initzd2zzforeign_caliasz00();
	static obj_t BGl_gczd2rootszd2initz00zzforeign_caliasz00();
	extern obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_caliasz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzforeign_caliasz00();
	static obj_t BGl_genericzd2initzd2zzforeign_caliasz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_caliasz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_caliasz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_caliasz00();
	static obj_t
		BGl_z62makezd2ctypezd2accessesz121090z70zzforeign_caliasz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;
	   
		 
		DEFINE_STRING(BGl_string1130z00zzforeign_caliasz00,
		BgL_bgl_string1130za700za7za7f1132za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string1131z00zzforeign_caliasz00,
		BgL_bgl_string1131za700za7za7f1133za7, "foreign_calias", 14);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1129z00zzforeign_caliasz00,
		BgL_bgl_za762makeza7d2ctypeza71134za7,
		BGl_z62makezd2ctypezd2accessesz121090z70zzforeign_caliasz00, 0L, BUNSPEC,
		3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzforeign_caliasz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_caliasz00(long
		BgL_checksumz00_588, char *BgL_fromz00_589)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_caliasz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_caliasz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzforeign_caliasz00();
					BGl_libraryzd2moduleszd2initz00zzforeign_caliasz00();
					BGl_importedzd2moduleszd2initz00zzforeign_caliasz00();
					BGl_methodzd2initzd2zzforeign_caliasz00();
					return BGl_toplevelzd2initzd2zzforeign_caliasz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_caliasz00()
	{
		{	/* Foreign/calias.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_calias");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_calias");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzforeign_caliasz00()
	{
		{	/* Foreign/calias.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_caliasz00()
	{
		{	/* Foreign/calias.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_caliasz00()
	{
		{	/* Foreign/calias.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_caliasz00()
	{
		{	/* Foreign/calias.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_caliasz00()
	{
		{	/* Foreign/calias.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_caliasz00zzforeign_ctypez00, BGl_proc1129z00zzforeign_caliasz00,
				BGl_string1130z00zzforeign_caliasz00);
		}

	}



/* &make-ctype-accesses!1090 */
	obj_t BGl_z62makezd2ctypezd2accessesz121090z70zzforeign_caliasz00(obj_t
		BgL_envz00_577, obj_t BgL_whatz00_578, obj_t BgL_whoz00_579,
		obj_t BgL_locz00_580)
	{
		{	/* Foreign/calias.scm 26 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_arg1100z00_587;

				BgL_arg1100z00_587 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_whatz00_578))))->BgL_aliasz00);
				return
					BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(
					((BgL_typez00_bglt) BgL_arg1100z00_587),
					((BgL_typez00_bglt) BgL_whoz00_579), BgL_locz00_580);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_caliasz00()
	{
		{	/* Foreign/calias.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1131z00zzforeign_caliasz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1131z00zzforeign_caliasz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1131z00zzforeign_caliasz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1131z00zzforeign_caliasz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 396356902),
				BSTRING_TO_STRING(BGl_string1131z00zzforeign_caliasz00));
			return
				BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 471073690),
				BSTRING_TO_STRING(BGl_string1131z00zzforeign_caliasz00));
		}

	}

#ifdef __cplusplus
}
#endif
