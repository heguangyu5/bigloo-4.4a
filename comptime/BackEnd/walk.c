/*===========================================================================*/
/*   (BackEnd/walk.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/walk.scm) */
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


	static obj_t BGl_objectzd2initzd2zzbackend_walkz00();
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzbackend_walkz00();
	extern obj_t
		BGl_backendzd2compilezd2zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_walkz00();
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbackend_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_backendzd2walkzd2zzbackend_walkz00(obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_walkz00();
	static obj_t BGl_z62backendzd2walkzb0zzbackend_walkz00(obj_t, obj_t);
	extern obj_t BGl_backendzd2linkzd2zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_backendzd2walkzd2envz00zzbackend_walkz00,
		BgL_bgl_za762backendza7d2wal1199z00,
		BGl_z62backendzd2walkzb0zzbackend_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1198z00zzbackend_walkz00,
		BgL_bgl_string1198za700za7za7b1200za7, "backend_walk", 12);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzbackend_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_walkz00(long
		BgL_checksumz00_645, char *BgL_fromz00_646)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_walkz00();
					BGl_libraryzd2moduleszd2initz00zzbackend_walkz00();
					BGl_importedzd2moduleszd2initz00zzbackend_walkz00();
					return BGl_methodzd2initzd2zzbackend_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_walkz00()
	{
		{	/* BackEnd/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_walk");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_walkz00()
	{
		{	/* BackEnd/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* backend-walk */
	BGL_EXPORTED_DEF obj_t BGl_backendzd2walkzd2zzbackend_walkz00(obj_t
		BgL_functionsz00_3)
	{
		{	/* BackEnd/walk.scm 28 */
			{	/* BackEnd/walk.scm 29 */
				obj_t BgL_backendz00_526;

				BgL_backendz00_526 = BGl_thezd2backendzd2zzbackend_backendz00();
				{	/* BackEnd/walk.scm 38 */
					obj_t BgL_arg1166z00_629;

					BgL_arg1166z00_629 =
						BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
						(BGl_za2moduleza2z00zzmodule_modulez00);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_backendz00_526)))->BgL_namez00) =
						((obj_t) BgL_arg1166z00_629), BUNSPEC);
				}
				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_backendz00_526)))->
						BgL_functionsz00) = ((obj_t) BgL_functionsz00_3), BUNSPEC);
				{	/* BackEnd/walk.scm 31 */
					obj_t BgL_arg1165z00_527;

					BgL_arg1165z00_527 =
						BGl_backendzd2compilezd2zzbackend_backendz00(
						((BgL_backendz00_bglt) BgL_backendz00_526));
					BGl_backendzd2linkzd2zzbackend_backendz00(
						((BgL_backendz00_bglt) BgL_backendz00_526), BgL_arg1165z00_527);
				}
				return BgL_backendz00_526;
			}
		}

	}



/* &backend-walk */
	obj_t BGl_z62backendzd2walkzb0zzbackend_walkz00(obj_t BgL_envz00_643,
		obj_t BgL_functionsz00_644)
	{
		{	/* BackEnd/walk.scm 28 */
			return BGl_backendzd2walkzd2zzbackend_walkz00(BgL_functionsz00_644);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_walkz00()
	{
		{	/* BackEnd/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_walkz00()
	{
		{	/* BackEnd/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_walkz00()
	{
		{	/* BackEnd/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_walkz00()
	{
		{	/* BackEnd/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1198z00zzbackend_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1198z00zzbackend_walkz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1198z00zzbackend_walkz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string1198z00zzbackend_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1198z00zzbackend_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1198z00zzbackend_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1198z00zzbackend_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
