/*===========================================================================*/
/*   (Cgen/compile.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cgen/compile.scm) */
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

	typedef struct BgL_cgenz00_bgl
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
	}              *BgL_cgenz00_bglt;


	static obj_t BGl_objectzd2initzd2zzcgen_compilez00();
	static obj_t BGl_methodzd2initzd2zzcgen_compilez00();
	static obj_t BGl_z62backendzd2compilezd2func1557z62zzcgen_compilez00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcgen_compilez00();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcgen_compilez00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzcgen_compilez00();
	extern obj_t BGl_cgenz00zzbackend_cvmz00;
	static obj_t BGl_genericzd2initzd2zzcgen_compilez00();
	extern obj_t BGl_cgenzd2functionzd2zzcgen_cgenz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcgen_compilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_cgenz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcgen_copz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcgen_compilez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcgen_compilez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1952z00zzcgen_compilez00,
		BgL_bgl_za762backendza7d2com1955z00,
		BGl_z62backendzd2compilezd2func1557z62zzcgen_compilez00, 0L, BUNSPEC, 1);
	extern obj_t BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00;
	   
		 
		DEFINE_STRING(BGl_string1953z00zzcgen_compilez00,
		BgL_bgl_string1953za700za7za7c1956za7, "backend-compile-functions", 25);
	      DEFINE_STRING(BGl_string1954z00zzcgen_compilez00,
		BgL_bgl_string1954za700za7za7c1957za7, "cgen_compile", 12);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcgen_compilez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcgen_compilez00(long
		BgL_checksumz00_2854, char *BgL_fromz00_2855)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcgen_compilez00))
				{
					BGl_requirezd2initializa7ationz75zzcgen_compilez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcgen_compilez00();
					BGl_libraryzd2moduleszd2initz00zzcgen_compilez00();
					BGl_importedzd2moduleszd2initz00zzcgen_compilez00();
					BGl_methodzd2initzd2zzcgen_compilez00();
					return BGl_toplevelzd2initzd2zzcgen_compilez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcgen_compilez00()
	{
		{	/* Cgen/compile.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cgen_compile");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cgen_compile");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cgen_compile");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcgen_compilez00()
	{
		{	/* Cgen/compile.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcgen_compilez00()
	{
		{	/* Cgen/compile.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcgen_compilez00()
	{
		{	/* Cgen/compile.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcgen_compilez00()
	{
		{	/* Cgen/compile.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcgen_compilez00()
	{
		{	/* Cgen/compile.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00,
				BGl_cgenz00zzbackend_cvmz00, BGl_proc1952z00zzcgen_compilez00,
				BGl_string1953z00zzcgen_compilez00);
		}

	}



/* &backend-compile-func1557 */
	obj_t BGl_z62backendzd2compilezd2func1557z62zzcgen_compilez00(obj_t
		BgL_envz00_2845, obj_t BgL_mez00_2846)
	{
		{	/* Cgen/compile.scm 44 */
			{	/* Cgen/compile.scm 45 */
				obj_t BgL_g1555z00_2850;

				BgL_g1555z00_2850 =
					(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt)
								((BgL_cgenz00_bglt) BgL_mez00_2846))))->BgL_functionsz00);
				{
					obj_t BgL_l1553z00_2852;

					{	/* Cgen/compile.scm 45 */
						bool_t BgL_tmpz00_2872;

						BgL_l1553z00_2852 = BgL_g1555z00_2850;
					BgL_zc3z04anonymousza31565ze3z87_2851:
						if (PAIRP(BgL_l1553z00_2852))
							{	/* Cgen/compile.scm 45 */
								{	/* Cgen/compile.scm 45 */
									obj_t BgL_arg1573z00_2853;

									BgL_arg1573z00_2853 = CAR(BgL_l1553z00_2852);
									BGl_cgenzd2functionzd2zzcgen_cgenz00(
										((BgL_globalz00_bglt) BgL_arg1573z00_2853));
								}
								{
									obj_t BgL_l1553z00_2878;

									BgL_l1553z00_2878 = CDR(BgL_l1553z00_2852);
									BgL_l1553z00_2852 = BgL_l1553z00_2878;
									goto BgL_zc3z04anonymousza31565ze3z87_2851;
								}
							}
						else
							{	/* Cgen/compile.scm 45 */
								BgL_tmpz00_2872 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_2872);
					}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcgen_compilez00()
	{
		{	/* Cgen/compile.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 272817155),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzmodule_libraryz00(((long) 292140521),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzcgen_copz00(((long) 240180036),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzcgen_cgenz00(((long) 384706670),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_initz00(((long) 517592978),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_cvmz00(((long) 18449014),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_emitz00(((long) 349615937),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					364917924), BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			BGl_modulezd2initializa7ationz75zzbackend_c_mainz00(((long) 65543845),
				BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
			return BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long)
					395790731), BSTRING_TO_STRING(BGl_string1954z00zzcgen_compilez00));
		}

	}

#ifdef __cplusplus
}
#endif
