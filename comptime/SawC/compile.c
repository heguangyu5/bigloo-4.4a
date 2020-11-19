/*===========================================================================*/
/*   (SawC/compile.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawC/compile.scm) */
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

	typedef struct BgL_cvmz00_bgl
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
	}             *BgL_cvmz00_bglt;

	typedef struct BgL_sawcz00_bgl
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
	}              *BgL_sawcz00_bglt;


	extern obj_t BGl_sawzd2cepiloguezd2zzsaw_c_codez00();
	static obj_t BGl_objectzd2initzd2zzsaw_c_compilez00();
	static obj_t BGl_methodzd2initzd2zzsaw_c_compilez00();
	static obj_t BGl_gczd2rootszd2initz00zzsaw_c_compilez00();
	extern obj_t BGl_sawcz00zzbackend_cvmz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_c_compilez00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzsaw_c_compilez00();
	static obj_t BGl_genericzd2initzd2zzsaw_c_compilez00();
	static obj_t BGl_z62backendzd2compilezd2func1478z62zzsaw_c_compilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_c_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_c_codez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_initz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzprof_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbdb_emitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_c_compilez00();
	extern obj_t BGl_sawzd2cgenzd2zzsaw_c_codez00(BgL_cvmz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_c_compilez00();
	extern obj_t BGl_sawzd2cheaderzd2zzsaw_c_codez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1736z00zzsaw_c_compilez00,
		BgL_bgl_za762backendza7d2com1739z00,
		BGl_z62backendzd2compilezd2func1478z62zzsaw_c_compilez00, 0L, BUNSPEC, 1);
	extern obj_t BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00;
	   
		 
		DEFINE_STRING(BGl_string1737z00zzsaw_c_compilez00,
		BgL_bgl_string1737za700za7za7s1740za7, "backend-compile-functions", 25);
	      DEFINE_STRING(BGl_string1738z00zzsaw_c_compilez00,
		BgL_bgl_string1738za700za7za7s1741za7, "saw_c_compile", 13);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_c_compilez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_c_compilez00(long
		BgL_checksumz00_2455, char *BgL_fromz00_2456)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_c_compilez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_c_compilez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_c_compilez00();
					BGl_libraryzd2moduleszd2initz00zzsaw_c_compilez00();
					BGl_importedzd2moduleszd2initz00zzsaw_c_compilez00();
					BGl_methodzd2initzd2zzsaw_c_compilez00();
					return BGl_toplevelzd2initzd2zzsaw_c_compilez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_c_compilez00()
	{
		{	/* SawC/compile.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_c_compile");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_c_compile");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"saw_c_compile");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_c_compile");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_c_compilez00()
	{
		{	/* SawC/compile.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_c_compilez00()
	{
		{	/* SawC/compile.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_c_compilez00()
	{
		{	/* SawC/compile.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_c_compilez00()
	{
		{	/* SawC/compile.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_c_compilez00()
	{
		{	/* SawC/compile.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00,
				BGl_sawcz00zzbackend_cvmz00, BGl_proc1736z00zzsaw_c_compilez00,
				BGl_string1737z00zzsaw_c_compilez00);
		}

	}



/* &backend-compile-func1478 */
	obj_t BGl_z62backendzd2compilezd2func1478z62zzsaw_c_compilez00(obj_t
		BgL_envz00_2445, obj_t BgL_mez00_2446)
	{
		{	/* SawC/compile.scm 44 */
			{	/* SawC/compile.scm 45 */
				obj_t BgL_globalsz00_2451;

				BgL_globalsz00_2451 =
					(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt)
								((BgL_sawcz00_bglt) BgL_mez00_2446))))->BgL_functionsz00);
				BGl_sawzd2cheaderzd2zzsaw_c_codez00();
				{
					obj_t BgL_l1475z00_2453;

					BgL_l1475z00_2453 = BgL_globalsz00_2451;
				BgL_zc3z04anonymousza31522ze3z87_2452:
					if (PAIRP(BgL_l1475z00_2453))
						{	/* SawC/compile.scm 48 */
							{	/* SawC/compile.scm 48 */
								obj_t BgL_vz00_2454;

								BgL_vz00_2454 = CAR(BgL_l1475z00_2453);
								BGl_sawzd2cgenzd2zzsaw_c_codez00(
									((BgL_cvmz00_bglt)
										((BgL_sawcz00_bglt) BgL_mez00_2446)),
									((BgL_globalz00_bglt) BgL_vz00_2454));
							}
							{
								obj_t BgL_l1475z00_2482;

								BgL_l1475z00_2482 = CDR(BgL_l1475z00_2453);
								BgL_l1475z00_2453 = BgL_l1475z00_2482;
								goto BgL_zc3z04anonymousza31522ze3z87_2452;
							}
						}
					else
						{	/* SawC/compile.scm 48 */
							((bool_t) 1);
						}
				}
				return BGl_sawzd2cepiloguezd2zzsaw_c_codez00();
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_c_compilez00()
	{
		{	/* SawC/compile.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 272817155),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzmodule_libraryz00(((long) 292140521),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 535161241),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 428035839),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzbdb_emitz00(((long) 182919799),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzprof_emitz00(((long) 522750775),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_initz00(((long) 517592978),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_cvmz00(((long) 18449014),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 349615937),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					364917924), BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(((long) 65543845),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
			return BGl_modulezd2initializa7ationz75zzsaw_c_codez00(((long) 317462556),
				BSTRING_TO_STRING(BGl_string1738z00zzsaw_c_compilez00));
		}

	}

#ifdef __cplusplus
}
#endif
