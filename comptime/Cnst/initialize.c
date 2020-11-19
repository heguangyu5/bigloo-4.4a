/*===========================================================================*/
/*   (Cnst/initialize.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cnst/initialize.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;


	extern obj_t BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00;
	static obj_t BGl_objectzd2initzd2zzcnst_initializa7eza7();
	extern obj_t BGl_za2initzd2modeza2zd2zzengine_paramz00;
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzcnst_initializa7eza7();
	extern BgL_nodez00_bglt BGl_cnstzd2alloczd2stringz00zzcnst_allocz00(obj_t,
		obj_t);
	static obj_t BGl_libzd2initializa7ez12z67zzcnst_initializa7eza7();
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	static obj_t BGl_internzd2initializa7ez12z67zzcnst_initializa7eza7();
	extern obj_t BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
	extern obj_t BGl_buildzd2astzd2zzast_buildz00(obj_t);
	static obj_t BGl_readzd2initializa7ez12z67zzcnst_initializa7eza7();
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzcnst_initializa7eza7();
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2astz75zzcnst_initializa7eza7();
	extern obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	static obj_t
		BGl_readzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7();
	static obj_t BGl_requirezd2initializa7ationz75zzcnst_initializa7eza7 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcnst_initializa7eza7();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzcnst_initializa7eza7();
	static obj_t
		BGl_internzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t obj_to_string(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_getzd2cnstzd2setz00zzcnst_allocz00();
	static obj_t
		BGl_internzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7();
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t
		BGl_cnstzd2setzd2ze3cnstzd2stringz31zzcnst_initializa7eza7(obj_t);
	static obj_t BGl_z62initializa7ezd2astz17zzcnst_initializa7eza7(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcnst_initializa7eza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_buildz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t
		BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00
		(BgL_backendz00_bglt, int);
	static obj_t
		BGl_readzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7();
	static obj_t BGl_cnstzd2initzd2zzcnst_initializa7eza7();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcnst_initializa7eza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzcnst_initializa7eza7();
	extern obj_t BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
	static obj_t __cnst[29];


	   
		 
		DEFINE_STRING(BGl_string1860z00zzcnst_initializa7eza7,
		BgL_bgl_string1860za700za7za7c1867za7, "intialize-stop!", 15);
	      DEFINE_STRING(BGl_string1861z00zzcnst_initializa7eza7,
		BgL_bgl_string1861za700za7za7c1868za7, "Illegal init-mode", 17);
	      DEFINE_STRING(BGl_string1862z00zzcnst_initializa7eza7,
		BgL_bgl_string1862za700za7za7c1869za7, "cnst_initialize", 15);
	      DEFINE_STRING(BGl_string1863z00zzcnst_initializa7eza7,
		BgL_bgl_string1863za700za7za7c1870za7,
		"$vector-ref-ur cnst-tmp i::int cnst-tmp::vector string->obj __intext labels if begin let loop aux aux::int c--fx cnst-table-set! cport @ __reader c-=fx i i::long cport::input-port open-input-string! unit cnst staged intern read lib ",
		232);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2astzd2envza7zzcnst_initializa7eza7,
		BgL_bgl_za762initializa7a7eza71871za7,
		BGl_z62initializa7ezd2astz17zzcnst_initializa7eza7, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzcnst_initializa7eza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcnst_initializa7eza7(long
		BgL_checksumz00_1924, char *BgL_fromz00_1925)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcnst_initializa7eza7))
				{
					BGl_requirezd2initializa7ationz75zzcnst_initializa7eza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcnst_initializa7eza7();
					BGl_libraryzd2moduleszd2initz00zzcnst_initializa7eza7();
					BGl_cnstzd2initzd2zzcnst_initializa7eza7();
					BGl_importedzd2moduleszd2initz00zzcnst_initializa7eza7();
					return BGl_toplevelzd2initzd2zzcnst_initializa7eza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__intextz00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"cnst_initialize");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"cnst_initialize");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 15 */
			{	/* Cnst/initialize.scm 15 */
				obj_t BgL_cportz00_1911;

				{	/* Cnst/initialize.scm 15 */
					obj_t BgL_stringz00_1919;

					BgL_stringz00_1919 = BGl_string1863z00zzcnst_initializa7eza7;
					{	/* Cnst/initialize.scm 15 */
						obj_t BgL_startz00_1920;

						BgL_startz00_1920 = BINT(((long) 0));
						{	/* Cnst/initialize.scm 15 */
							obj_t BgL_endz00_1921;

							BgL_endz00_1921 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1919)));
							{	/* Cnst/initialize.scm 15 */

								BgL_cportz00_1911 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1919, BgL_startz00_1920, BgL_endz00_1921);
				}}}}
				{
					long BgL_iz00_1912;

					BgL_iz00_1912 = ((long) 28);
				BgL_loopz00_1913:
					if ((BgL_iz00_1912 == ((long) -1)))
						{	/* Cnst/initialize.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cnst/initialize.scm 15 */
							{	/* Cnst/initialize.scm 15 */
								obj_t BgL_arg1865z00_1915;

								{	/* Cnst/initialize.scm 15 */

									{	/* Cnst/initialize.scm 15 */
										obj_t BgL_locationz00_1917;

										BgL_locationz00_1917 = BBOOL(((bool_t) 0));
										{	/* Cnst/initialize.scm 15 */

											BgL_arg1865z00_1915 =
												BGl_readz00zz__readerz00(BgL_cportz00_1911,
												BgL_locationz00_1917);
										}
									}
								}
								{	/* Cnst/initialize.scm 15 */
									int BgL_tmpz00_1954;

									BgL_tmpz00_1954 = (int) (BgL_iz00_1912);
									CNST_TABLE_SET(BgL_tmpz00_1954, BgL_arg1865z00_1915);
							}}
							{	/* Cnst/initialize.scm 15 */
								int BgL_auxz00_1918;

								BgL_auxz00_1918 = (int) ((BgL_iz00_1912 - ((long) 1)));
								{
									long BgL_iz00_1959;

									BgL_iz00_1959 = (long) (BgL_auxz00_1918);
									BgL_iz00_1912 = BgL_iz00_1959;
									goto BgL_loopz00_1913;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 15 */
			return BUNSPEC;
		}

	}



/* initialize-ast */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2astz75zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 41 */
			{	/* Cnst/initialize.scm 42 */
				obj_t BgL_bodyz00_1449;

				{	/* Cnst/initialize.scm 42 */
					obj_t BgL_casezd2valuezd2_1466;

					BgL_casezd2valuezd2_1466 = BGl_za2initzd2modeza2zd2zzengine_paramz00;
					if ((BgL_casezd2valuezd2_1466 == CNST_TABLE_REF(((long) 0))))
						{	/* Cnst/initialize.scm 42 */
							BgL_bodyz00_1449 =
								BGl_libzd2initializa7ez12z67zzcnst_initializa7eza7();
						}
					else
						{	/* Cnst/initialize.scm 42 */
							if ((BgL_casezd2valuezd2_1466 == CNST_TABLE_REF(((long) 1))))
								{	/* Cnst/initialize.scm 42 */
									BgL_bodyz00_1449 =
										BGl_readzd2initializa7ez12z67zzcnst_initializa7eza7();
								}
							else
								{	/* Cnst/initialize.scm 42 */
									if ((BgL_casezd2valuezd2_1466 == CNST_TABLE_REF(((long) 2))))
										{	/* Cnst/initialize.scm 42 */
											BgL_bodyz00_1449 =
												BGl_internzd2initializa7ez12z67zzcnst_initializa7eza7();
										}
									else
										{	/* Cnst/initialize.scm 42 */
											BgL_bodyz00_1449 =
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string1860z00zzcnst_initializa7eza7,
												BGl_string1861z00zzcnst_initializa7eza7,
												BGl_za2initzd2modeza2zd2zzengine_paramz00);
										}
								}
						}
				}
				if (PAIRP(BgL_bodyz00_1449))
					{	/* Cnst/initialize.scm 54 */
						obj_t BgL_unitz00_1451;

						{	/* Cnst/initialize.scm 54 */
							bool_t BgL_arg1308z00_1465;

							BgL_arg1308z00_1465 =
								(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 3)));
							{	/* Cnst/initialize.scm 54 */
								obj_t BgL_idz00_1866;

								BgL_idz00_1866 = CNST_TABLE_REF(((long) 4));
								{	/* Cnst/initialize.scm 54 */
									obj_t BgL_newz00_1867;

									BgL_newz00_1867 =
										create_struct(CNST_TABLE_REF(((long) 5)),
										(int) (((long) 5)));
									{	/* Cnst/initialize.scm 54 */
										obj_t BgL_auxz00_1985;
										int BgL_tmpz00_1983;

										BgL_auxz00_1985 = BBOOL(BgL_arg1308z00_1465);
										BgL_tmpz00_1983 = (int) (((long) 4));
										STRUCT_SET(BgL_newz00_1867, BgL_tmpz00_1983,
											BgL_auxz00_1985);
									}
									{	/* Cnst/initialize.scm 54 */
										int BgL_tmpz00_1988;

										BgL_tmpz00_1988 = (int) (((long) 3));
										STRUCT_SET(BgL_newz00_1867, BgL_tmpz00_1988, BTRUE);
									}
									{	/* Cnst/initialize.scm 54 */
										int BgL_tmpz00_1991;

										BgL_tmpz00_1991 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_1867, BgL_tmpz00_1991,
											BgL_bodyz00_1449);
									}
									{	/* Cnst/initialize.scm 54 */
										obj_t BgL_auxz00_1996;
										int BgL_tmpz00_1994;

										BgL_auxz00_1996 = BINT(((long) 8));
										BgL_tmpz00_1994 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_1867, BgL_tmpz00_1994,
											BgL_auxz00_1996);
									}
									{	/* Cnst/initialize.scm 54 */
										int BgL_tmpz00_1999;

										BgL_tmpz00_1999 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_1867, BgL_tmpz00_1999,
											BgL_idz00_1866);
									}
									BgL_unitz00_1451 = BgL_newz00_1867;
						}}}
						{	/* Cnst/initialize.scm 55 */
							obj_t BgL_astz00_1452;

							{	/* Cnst/initialize.scm 55 */
								obj_t BgL_arg1306z00_1463;

								{	/* Cnst/initialize.scm 55 */
									obj_t BgL_list1307z00_1464;

									BgL_list1307z00_1464 =
										MAKE_YOUNG_PAIR(BgL_unitz00_1451, BNIL);
									BgL_arg1306z00_1463 = BgL_list1307z00_1464;
								}
								BgL_astz00_1452 =
									BGl_buildzd2astzd2zzast_buildz00(BgL_arg1306z00_1463);
							}
							{
								obj_t BgL_l1277z00_1454;

								BgL_l1277z00_1454 = BgL_astz00_1452;
							BgL_zc3z04anonymousza31299ze3z87_1455:
								if (PAIRP(BgL_l1277z00_1454))
									{	/* Cnst/initialize.scm 56 */
										{	/* Cnst/initialize.scm 57 */
											obj_t BgL_globalz00_1457;

											BgL_globalz00_1457 = CAR(BgL_l1277z00_1454);
											{	/* Cnst/initialize.scm 57 */
												obj_t BgL_bodyz00_1458;

												BgL_bodyz00_1458 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_globalz00_bglt)
																					BgL_globalz00_1457))))->
																	BgL_valuez00))))->BgL_bodyz00);
												BGl_lvtypezd2nodez12zc0zzast_lvtypez00((
														(BgL_nodez00_bglt) BgL_bodyz00_1458));
												{	/* Cnst/initialize.scm 59 */
													BgL_typez00_bglt BgL_arg1301z00_1459;

													BgL_arg1301z00_1459 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_globalz00_1457))))->
														BgL_typez00);
													BGl_coercez12z12zzcoerce_coercez00(((BgL_nodez00_bglt)
															BgL_bodyz00_1458), BgL_globalz00_1457,
														BgL_arg1301z00_1459, ((bool_t) 0));
												}
											}
										}
										{
											obj_t BgL_l1277z00_2019;

											BgL_l1277z00_2019 = CDR(BgL_l1277z00_1454);
											BgL_l1277z00_1454 = BgL_l1277z00_2019;
											goto BgL_zc3z04anonymousza31299ze3z87_1455;
										}
									}
								else
									{	/* Cnst/initialize.scm 56 */
										((bool_t) 1);
									}
							}
							return BgL_astz00_1452;
						}
					}
				else
					{	/* Cnst/initialize.scm 53 */
						return BNIL;
					}
			}
		}

	}



/* &initialize-ast */
	obj_t BGl_z62initializa7ezd2astz17zzcnst_initializa7eza7(obj_t
		BgL_envz00_1909)
	{
		{	/* Cnst/initialize.scm 41 */
			return BGl_initializa7ezd2astz75zzcnst_initializa7eza7();
		}

	}



/* lib-initialize! */
	obj_t BGl_libzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 67 */
			{	/* Cnst/initialize.scm 68 */
				obj_t BgL_arg1312z00_1470;
				obj_t BgL_arg1314z00_1471;

				BgL_arg1312z00_1470 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
				{	/* Cnst/initialize.scm 68 */
					obj_t BgL_arg1315z00_1472;

					BgL_arg1315z00_1472 = BGl_thezd2backendzd2zzbackend_backendz00();
					BgL_arg1314z00_1471 =
						BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
						((BgL_backendz00_bglt) BgL_arg1315z00_1472), (int) (((long) 0)));
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_arg1312z00_1470))))->BgL_namez00) =
					((obj_t) BgL_arg1314z00_1471), BUNSPEC);
			}
			{	/* Cnst/initialize.scm 69 */
				obj_t BgL_arg1316z00_1473;

				BgL_arg1316z00_1473 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_arg1316z00_1473))))->
						BgL_userzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
			}
			return BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
		}

	}



/* read-initialize! */
	obj_t BGl_readzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 75 */
			{	/* Cnst/initialize.scm 76 */
				bool_t BgL_test1879z00_2035;

				{	/* Cnst/initialize.scm 76 */
					obj_t BgL_arg1319z00_1476;

					BgL_arg1319z00_1476 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
					BgL_test1879z00_2035 =
						((long) CINT(BgL_arg1319z00_1476) == ((long) 0));
				}
				if (BgL_test1879z00_2035)
					{	/* Cnst/initialize.scm 76 */
						return
							BGl_readzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7
							();
					}
				else
					{	/* Cnst/initialize.scm 76 */
						return
							BGl_readzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7
							();
					}
			}
		}

	}



/* read-empty-cnst-initialize! */
	obj_t BGl_readzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 83 */
			{	/* Cnst/initialize.scm 84 */
				obj_t BgL_arg1322z00_1477;
				obj_t BgL_arg1324z00_1478;

				BgL_arg1322z00_1477 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
				{	/* Cnst/initialize.scm 84 */
					obj_t BgL_arg1325z00_1479;

					BgL_arg1325z00_1479 = BGl_thezd2backendzd2zzbackend_backendz00();
					BgL_arg1324z00_1478 =
						BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
						((BgL_backendz00_bglt) BgL_arg1325z00_1479), (int) (((long) 0)));
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_arg1322z00_1477))))->BgL_namez00) =
					((obj_t) BgL_arg1324z00_1478), BUNSPEC);
			}
			{	/* Cnst/initialize.scm 85 */
				obj_t BgL_arg1326z00_1480;

				BgL_arg1326z00_1480 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_arg1326z00_1480))))->
						BgL_userzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
			}
			return BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
		}

	}



/* read-full-cnst-initialize! */
	obj_t BGl_readzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 91 */
			{
				obj_t BgL_cnstzd2stringzd2_1489;

				{	/* Cnst/initialize.scm 110 */
					obj_t BgL_arg1327z00_1482;
					obj_t BgL_arg1328z00_1483;

					BgL_arg1327z00_1482 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
					{	/* Cnst/initialize.scm 111 */
						obj_t BgL_arg1329z00_1484;
						obj_t BgL_arg1330z00_1485;

						BgL_arg1329z00_1484 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_arg1330z00_1485 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
						BgL_arg1328z00_1483 =
							BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
							((BgL_backendz00_bglt) BgL_arg1329z00_1484),
							CINT(BgL_arg1330z00_1485));
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_arg1327z00_1482))))->
							BgL_namez00) = ((obj_t) BgL_arg1328z00_1483), BUNSPEC);
				}
				{	/* Cnst/initialize.scm 112 */
					obj_t BgL_arg1331z00_1486;

					BgL_arg1331z00_1486 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_arg1331z00_1486))))->
							BgL_userzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_cnstzd2stringzd2_1489 =
					BGl_cnstzd2setzd2ze3cnstzd2stringz31zzcnst_initializa7eza7
					(BGl_getzd2cnstzd2setz00zzcnst_allocz00());
				{	/* Cnst/initialize.scm 94 */
					BgL_nodez00_bglt BgL_varzd2stringzd2_1491;

					BgL_varzd2stringzd2_1491 =
						BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
						(BgL_cnstzd2stringzd2_1489, BFALSE);
					{	/* Cnst/initialize.scm 94 */
						obj_t BgL_sexpz00_1492;

						{	/* Cnst/initialize.scm 97 */
							obj_t BgL_arg1338z00_1494;

							{	/* Cnst/initialize.scm 97 */
								obj_t BgL_arg1339z00_1495;
								obj_t BgL_arg1340z00_1496;

								{	/* Cnst/initialize.scm 97 */
									obj_t BgL_arg1344z00_1497;

									{	/* Cnst/initialize.scm 97 */
										obj_t BgL_arg1345z00_1498;

										{	/* Cnst/initialize.scm 97 */
											obj_t BgL_arg1346z00_1499;

											{	/* Cnst/initialize.scm 97 */
												obj_t BgL_arg1347z00_1500;

												{	/* Cnst/initialize.scm 97 */
													obj_t BgL_arg1348z00_1501;

													BgL_arg1348z00_1501 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt)
																		(((BgL_varz00_bglt) COBJECT(
																					((BgL_varz00_bglt)
																						BgL_varzd2stringzd2_1491)))->
																			BgL_variablez00)))))->BgL_idz00);
													BgL_arg1347z00_1500 =
														MAKE_YOUNG_PAIR(BgL_arg1348z00_1501, BNIL);
												}
												BgL_arg1346z00_1499 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
													BgL_arg1347z00_1500);
											}
											BgL_arg1345z00_1498 =
												MAKE_YOUNG_PAIR(BgL_arg1346z00_1499, BNIL);
										}
										BgL_arg1344z00_1497 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
											BgL_arg1345z00_1498);
									}
									BgL_arg1339z00_1495 =
										MAKE_YOUNG_PAIR(BgL_arg1344z00_1497, BNIL);
								}
								{	/* Cnst/initialize.scm 98 */
									obj_t BgL_arg1352z00_1503;

									{	/* Cnst/initialize.scm 98 */
										obj_t BgL_arg1357z00_1504;

										{	/* Cnst/initialize.scm 98 */
											obj_t BgL_arg1360z00_1505;
											obj_t BgL_arg1361z00_1506;

											{	/* Cnst/initialize.scm 98 */
												obj_t BgL_arg1363z00_1507;

												{	/* Cnst/initialize.scm 98 */
													obj_t BgL_arg1364z00_1508;

													{	/* Cnst/initialize.scm 98 */
														obj_t BgL_arg1367z00_1509;
														obj_t BgL_arg1370z00_1510;

														BgL_arg1367z00_1509 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)), BNIL);
														{	/* Cnst/initialize.scm 99 */
															obj_t BgL_arg1371z00_1511;

															{	/* Cnst/initialize.scm 99 */
																obj_t BgL_arg1372z00_1512;

																{	/* Cnst/initialize.scm 99 */
																	obj_t BgL_arg1381z00_1513;
																	obj_t BgL_arg1382z00_1514;

																	{	/* Cnst/initialize.scm 99 */
																		obj_t BgL_arg1383z00_1515;

																		{	/* Cnst/initialize.scm 99 */
																			obj_t BgL_arg1384z00_1516;

																			BgL_arg1384z00_1516 =
																				MAKE_YOUNG_PAIR(BINT(((long) -1)),
																				BNIL);
																			BgL_arg1383z00_1515 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						9)), BgL_arg1384z00_1516);
																		}
																		BgL_arg1381z00_1513 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					10)), BgL_arg1383z00_1515);
																	}
																	{	/* Cnst/initialize.scm 104 */
																		obj_t BgL_arg1385z00_1517;

																		{	/* Cnst/initialize.scm 104 */
																			obj_t BgL_arg1386z00_1518;

																			{	/* Cnst/initialize.scm 104 */
																				obj_t BgL_arg1387z00_1519;

																				{	/* Cnst/initialize.scm 104 */
																					obj_t BgL_arg1388z00_1520;
																					obj_t BgL_arg1394z00_1521;

																					{	/* Cnst/initialize.scm 104 */
																						obj_t BgL_arg1396z00_1522;

																						{	/* Cnst/initialize.scm 104 */
																							obj_t BgL_arg1417z00_1523;

																							{	/* Cnst/initialize.scm 104 */
																								obj_t BgL_arg1418z00_1524;

																								{	/* Cnst/initialize.scm 104 */
																									obj_t BgL_arg1421z00_1525;
																									obj_t BgL_arg1422z00_1526;

																									{	/* Cnst/initialize.scm 104 */
																										obj_t BgL_arg1441z00_1527;

																										{	/* Cnst/initialize.scm 104 */
																											obj_t BgL_arg1442z00_1528;

																											BgL_arg1442z00_1528 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														11)), BNIL);
																											BgL_arg1441z00_1527 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														1)),
																												BgL_arg1442z00_1528);
																										}
																										BgL_arg1421z00_1525 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													12)),
																											BgL_arg1441z00_1527);
																									}
																									BgL_arg1422z00_1526 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												13)), BNIL);
																									BgL_arg1418z00_1524 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1421z00_1525,
																										BgL_arg1422z00_1526);
																								}
																								BgL_arg1417z00_1523 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1418z00_1524, BNIL);
																							}
																							BgL_arg1396z00_1522 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 9)),
																								BgL_arg1417z00_1523);
																						}
																						BgL_arg1388z00_1520 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 14)),
																							BgL_arg1396z00_1522);
																					}
																					{	/* Cnst/initialize.scm 105 */
																						obj_t BgL_arg1448z00_1529;

																						{	/* Cnst/initialize.scm 105 */
																							obj_t BgL_arg1449z00_1530;

																							{	/* Cnst/initialize.scm 105 */
																								obj_t BgL_arg1461z00_1531;
																								obj_t BgL_arg1462z00_1532;

																								{	/* Cnst/initialize.scm 105 */
																									obj_t BgL_arg1464z00_1533;

																									{	/* Cnst/initialize.scm 105 */
																										obj_t BgL_arg1465z00_1534;

																										{	/* Cnst/initialize.scm 105 */
																											obj_t BgL_arg1474z00_1535;

																											{	/* Cnst/initialize.scm 105 */
																												obj_t
																													BgL_arg1476z00_1536;
																												{	/* Cnst/initialize.scm 105 */
																													obj_t
																														BgL_arg1477z00_1537;
																													BgL_arg1477z00_1537 =
																														MAKE_YOUNG_PAIR(BINT
																														(((long) 1)), BNIL);
																													BgL_arg1476z00_1536 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 9)),
																														BgL_arg1477z00_1537);
																												}
																												BgL_arg1474z00_1535 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 15)),
																													BgL_arg1476z00_1536);
																											}
																											BgL_arg1465z00_1534 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1474z00_1535,
																												BNIL);
																										}
																										BgL_arg1464z00_1533 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													16)),
																											BgL_arg1465z00_1534);
																									}
																									BgL_arg1461z00_1531 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1464z00_1533, BNIL);
																								}
																								{	/* Cnst/initialize.scm 106 */
																									obj_t BgL_arg1489z00_1538;

																									{	/* Cnst/initialize.scm 106 */
																										obj_t BgL_arg1493z00_1539;

																										BgL_arg1493z00_1539 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													17)), BNIL);
																										BgL_arg1489z00_1538 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													18)),
																											BgL_arg1493z00_1539);
																									}
																									BgL_arg1462z00_1532 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1489z00_1538, BNIL);
																								}
																								BgL_arg1449z00_1530 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1461z00_1531,
																									BgL_arg1462z00_1532);
																							}
																							BgL_arg1448z00_1529 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 19)),
																								BgL_arg1449z00_1530);
																						}
																						BgL_arg1394z00_1521 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1448z00_1529, BNIL);
																					}
																					BgL_arg1387z00_1519 =
																						MAKE_YOUNG_PAIR(BgL_arg1388z00_1520,
																						BgL_arg1394z00_1521);
																				}
																				BgL_arg1386z00_1518 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							20)), BgL_arg1387z00_1519);
																			}
																			BgL_arg1385z00_1517 =
																				MAKE_YOUNG_PAIR(BgL_arg1386z00_1518,
																				BNIL);
																		}
																		BgL_arg1382z00_1514 =
																			MAKE_YOUNG_PAIR(BUNSPEC,
																			BgL_arg1385z00_1517);
																	}
																	BgL_arg1372z00_1512 =
																		MAKE_YOUNG_PAIR(BgL_arg1381z00_1513,
																		BgL_arg1382z00_1514);
																}
																BgL_arg1371z00_1511 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)),
																	BgL_arg1372z00_1512);
															}
															BgL_arg1370z00_1510 =
																MAKE_YOUNG_PAIR(BgL_arg1371z00_1511, BNIL);
														}
														BgL_arg1364z00_1508 =
															MAKE_YOUNG_PAIR(BgL_arg1367z00_1509,
															BgL_arg1370z00_1510);
													}
													BgL_arg1363z00_1507 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
														BgL_arg1364z00_1508);
												}
												BgL_arg1360z00_1505 =
													MAKE_YOUNG_PAIR(BgL_arg1363z00_1507, BNIL);
											}
											{	/* Cnst/initialize.scm 107 */
												obj_t BgL_arg1495z00_1540;

												{	/* Cnst/initialize.scm 107 */
													obj_t BgL_arg1497z00_1541;

													{	/* Cnst/initialize.scm 107 */
														long BgL_arg1518z00_1542;

														{	/* Cnst/initialize.scm 107 */
															obj_t BgL_arg1521z00_1543;

															BgL_arg1521z00_1543 =
																BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
															BgL_arg1518z00_1542 =
																((long) CINT(BgL_arg1521z00_1543) - ((long) 1));
														}
														BgL_arg1497z00_1541 =
															MAKE_YOUNG_PAIR(BINT(BgL_arg1518z00_1542), BNIL);
													}
													BgL_arg1495z00_1540 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
														BgL_arg1497z00_1541);
												}
												BgL_arg1361z00_1506 =
													MAKE_YOUNG_PAIR(BgL_arg1495z00_1540, BNIL);
											}
											BgL_arg1357z00_1504 =
												MAKE_YOUNG_PAIR(BgL_arg1360z00_1505,
												BgL_arg1361z00_1506);
										}
										BgL_arg1352z00_1503 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 22)),
											BgL_arg1357z00_1504);
									}
									BgL_arg1340z00_1496 =
										MAKE_YOUNG_PAIR(BgL_arg1352z00_1503, BNIL);
								}
								BgL_arg1338z00_1494 =
									MAKE_YOUNG_PAIR(BgL_arg1339z00_1495, BgL_arg1340z00_1496);
							}
							BgL_sexpz00_1492 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
								BgL_arg1338z00_1494);
						}
						{	/* Cnst/initialize.scm 95 */

							return
								MAKE_YOUNG_PAIR(BgL_sexpz00_1492,
								BGl_getzd2cnstzd2sexpz00zzcnst_allocz00());
						}
					}
				}
			}
		}

	}



/* cnst-set->cnst-string */
	obj_t BGl_cnstzd2setzd2ze3cnstzd2stringz31zzcnst_initializa7eza7(obj_t
		BgL_setz00_25)
	{
		{	/* Cnst/initialize.scm 123 */
			{	/* Cnst/initialize.scm 124 */
				obj_t BgL_portz00_1545;

				{	/* Cnst/initialize.scm 124 */

					{	/* Cnst/initialize.scm 124 */

						BgL_portz00_1545 =
							BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
					}
				}
				{
					obj_t BgL_l1279z00_1548;

					BgL_l1279z00_1548 = BgL_setz00_25;
				BgL_zc3z04anonymousza31523ze3z87_1549:
					if (PAIRP(BgL_l1279z00_1548))
						{	/* Cnst/initialize.scm 130 */
							{	/* Cnst/initialize.scm 131 */
								obj_t BgL_cnstz00_1551;

								BgL_cnstz00_1551 = CAR(BgL_l1279z00_1548);
								{	/* Cnst/initialize.scm 131 */
									obj_t BgL_list1525z00_1552;

									BgL_list1525z00_1552 =
										MAKE_YOUNG_PAIR(BgL_portz00_1545, BNIL);
									BGl_writez00zz__r4_output_6_10_3z00(BgL_cnstz00_1551,
										BgL_list1525z00_1552);
								}
								bgl_display_char(((unsigned char) ' '), BgL_portz00_1545);
							}
							{
								obj_t BgL_l1279z00_2160;

								BgL_l1279z00_2160 = CDR(BgL_l1279z00_1548);
								BgL_l1279z00_1548 = BgL_l1279z00_2160;
								goto BgL_zc3z04anonymousza31523ze3z87_1549;
							}
						}
					else
						{	/* Cnst/initialize.scm 130 */
							((bool_t) 1);
						}
				}
				return bgl_close_output_port(BgL_portz00_1545);
			}
		}

	}



/* intern-initialize! */
	obj_t BGl_internzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 139 */
			{	/* Cnst/initialize.scm 140 */
				bool_t BgL_test1881z00_2163;

				{	/* Cnst/initialize.scm 140 */
					obj_t BgL_arg1540z00_1558;

					BgL_arg1540z00_1558 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
					BgL_test1881z00_2163 =
						((long) CINT(BgL_arg1540z00_1558) == ((long) 0));
				}
				if (BgL_test1881z00_2163)
					{	/* Cnst/initialize.scm 140 */
						return
							BGl_internzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7
							();
					}
				else
					{	/* Cnst/initialize.scm 140 */
						return
							BGl_internzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7
							();
					}
			}
		}

	}



/* intern-empty-cnst-initialize! */
	obj_t BGl_internzd2emptyzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 147 */
			{	/* Cnst/initialize.scm 148 */
				obj_t BgL_arg1552z00_1559;
				obj_t BgL_arg1558z00_1560;

				BgL_arg1552z00_1559 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
				{	/* Cnst/initialize.scm 149 */
					obj_t BgL_arg1561z00_1561;

					BgL_arg1561z00_1561 = BGl_thezd2backendzd2zzbackend_backendz00();
					BgL_arg1558z00_1560 =
						BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
						((BgL_backendz00_bglt) BgL_arg1561z00_1561), (int) (((long) 0)));
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_arg1552z00_1559))))->BgL_namez00) =
					((obj_t) BgL_arg1558z00_1560), BUNSPEC);
			}
			return BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
		}

	}



/* intern-full-cnst-initialize! */
	obj_t BGl_internzd2fullzd2cnstzd2initializa7ez12z67zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 155 */
			{
				obj_t BgL_cnstzd2stringzd2_1573;

				{	/* Cnst/initialize.scm 175 */
					obj_t BgL_arg1564z00_1563;
					obj_t BgL_arg1565z00_1564;

					BgL_arg1564z00_1563 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
					{	/* Cnst/initialize.scm 176 */
						obj_t BgL_arg1573z00_1565;
						obj_t BgL_arg1575z00_1566;

						BgL_arg1573z00_1565 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_arg1575z00_1566 = BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
						BgL_arg1565z00_1564 =
							BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
							((BgL_backendz00_bglt) BgL_arg1573z00_1565),
							CINT(BgL_arg1575z00_1566));
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_arg1564z00_1563))))->
							BgL_namez00) = ((obj_t) BgL_arg1565z00_1564), BUNSPEC);
				}
				{	/* Cnst/initialize.scm 178 */
					obj_t BgL_cnstzd2stringzd2_1567;

					{	/* Cnst/initialize.scm 178 */
						obj_t BgL_arg1578z00_1568;

						BgL_arg1578z00_1568 =
							BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(bgl_reverse_bang
							(BGl_getzd2cnstzd2setz00zzcnst_allocz00()));
						{	/* Cnst/initialize.scm 178 */

							BgL_cnstzd2stringzd2_1567 =
								obj_to_string(BgL_arg1578z00_1568, BFALSE);
						}
					}
					{	/* Cnst/initialize.scm 178 */

						BgL_cnstzd2stringzd2_1573 = BgL_cnstzd2stringzd2_1567;
						{	/* Cnst/initialize.scm 158 */
							BgL_nodez00_bglt BgL_varzd2stringzd2_1575;

							BgL_varzd2stringzd2_1575 =
								BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
								(BgL_cnstzd2stringzd2_1573, BFALSE);
							{	/* Cnst/initialize.scm 158 */
								obj_t BgL_sexpz00_1576;

								{	/* Cnst/initialize.scm 160 */
									obj_t BgL_arg1589z00_1578;

									{	/* Cnst/initialize.scm 160 */
										obj_t BgL_arg1592z00_1579;
										obj_t BgL_arg1593z00_1580;

										{	/* Cnst/initialize.scm 160 */
											obj_t BgL_arg1597z00_1581;

											{	/* Cnst/initialize.scm 160 */
												obj_t BgL_arg1599z00_1582;

												{	/* Cnst/initialize.scm 160 */
													obj_t BgL_arg1604z00_1583;

													{	/* Cnst/initialize.scm 160 */
														obj_t BgL_arg1605z00_1584;
														obj_t BgL_arg1606z00_1585;

														{	/* Cnst/initialize.scm 160 */
															obj_t BgL_arg1611z00_1586;

															{	/* Cnst/initialize.scm 160 */
																obj_t BgL_arg1612z00_1587;

																BgL_arg1612z00_1587 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 23)),
																	BNIL);
																BgL_arg1611z00_1586 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 24)),
																	BgL_arg1612z00_1587);
															}
															BgL_arg1605z00_1584 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																BgL_arg1611z00_1586);
														}
														{	/* Cnst/initialize.scm 162 */
															obj_t BgL_arg1613z00_1588;

															BgL_arg1613z00_1588 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_globalz00_bglt)
																				(((BgL_varz00_bglt) COBJECT(
																							((BgL_varz00_bglt)
																								BgL_varzd2stringzd2_1575)))->
																					BgL_variablez00)))))->BgL_idz00);
															BgL_arg1606z00_1585 =
																MAKE_YOUNG_PAIR(BgL_arg1613z00_1588, BNIL);
														}
														BgL_arg1604z00_1583 =
															MAKE_YOUNG_PAIR(BgL_arg1605z00_1584,
															BgL_arg1606z00_1585);
													}
													BgL_arg1599z00_1582 =
														MAKE_YOUNG_PAIR(BgL_arg1604z00_1583, BNIL);
												}
												BgL_arg1597z00_1581 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 25)),
													BgL_arg1599z00_1582);
											}
											BgL_arg1592z00_1579 =
												MAKE_YOUNG_PAIR(BgL_arg1597z00_1581, BNIL);
										}
										{	/* Cnst/initialize.scm 163 */
											obj_t BgL_arg1626z00_1590;

											{	/* Cnst/initialize.scm 163 */
												obj_t BgL_arg1627z00_1591;

												{	/* Cnst/initialize.scm 163 */
													obj_t BgL_arg1631z00_1592;
													obj_t BgL_arg1634z00_1593;

													{	/* Cnst/initialize.scm 163 */
														obj_t BgL_arg1639z00_1594;

														{	/* Cnst/initialize.scm 163 */
															obj_t BgL_arg1640z00_1595;

															{	/* Cnst/initialize.scm 163 */
																obj_t BgL_arg1641z00_1596;
																obj_t BgL_arg1644z00_1597;

																BgL_arg1641z00_1596 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 26)),
																	BNIL);
																{	/* Cnst/initialize.scm 164 */
																	obj_t BgL_arg1652z00_1598;

																	{	/* Cnst/initialize.scm 164 */
																		obj_t BgL_arg1662z00_1599;

																		{	/* Cnst/initialize.scm 164 */
																			obj_t BgL_arg1663z00_1600;
																			obj_t BgL_arg1664z00_1601;

																			{	/* Cnst/initialize.scm 164 */
																				obj_t BgL_arg1667z00_1602;

																				{	/* Cnst/initialize.scm 164 */
																					obj_t BgL_arg1669z00_1603;

																					BgL_arg1669z00_1603 =
																						MAKE_YOUNG_PAIR(BINT(((long) -1)),
																						BNIL);
																					BgL_arg1667z00_1602 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 9)),
																						BgL_arg1669z00_1603);
																				}
																				BgL_arg1663z00_1600 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							10)), BgL_arg1667z00_1602);
																			}
																			{	/* Cnst/initialize.scm 169 */
																				obj_t BgL_arg1672z00_1604;

																				{	/* Cnst/initialize.scm 169 */
																					obj_t BgL_arg1684z00_1605;

																					{	/* Cnst/initialize.scm 169 */
																						obj_t BgL_arg1685z00_1606;

																						{	/* Cnst/initialize.scm 169 */
																							obj_t BgL_arg1686z00_1607;
																							obj_t BgL_arg1687z00_1608;

																							{	/* Cnst/initialize.scm 169 */
																								obj_t BgL_arg1688z00_1609;

																								{	/* Cnst/initialize.scm 169 */
																									obj_t BgL_arg1692z00_1610;

																									{	/* Cnst/initialize.scm 169 */
																										obj_t BgL_arg1695z00_1611;

																										{	/* Cnst/initialize.scm 169 */
																											obj_t BgL_arg1696z00_1612;

																											{	/* Cnst/initialize.scm 169 */
																												obj_t
																													BgL_arg1697z00_1613;
																												BgL_arg1697z00_1613 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 9)), BNIL);
																												BgL_arg1696z00_1612 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 27)),
																													BgL_arg1697z00_1613);
																											}
																											BgL_arg1695z00_1611 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														28)),
																												BgL_arg1696z00_1612);
																										}
																										BgL_arg1692z00_1610 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1695z00_1611,
																											BNIL);
																									}
																									BgL_arg1688z00_1609 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long) 9)),
																										BgL_arg1692z00_1610);
																								}
																								BgL_arg1686z00_1607 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 14)),
																									BgL_arg1688z00_1609);
																							}
																							{	/* Cnst/initialize.scm 170 */
																								obj_t BgL_arg1704z00_1614;

																								{	/* Cnst/initialize.scm 170 */
																									obj_t BgL_arg1707z00_1615;

																									{	/* Cnst/initialize.scm 170 */
																										obj_t BgL_arg1708z00_1616;
																										obj_t BgL_arg1711z00_1617;

																										{	/* Cnst/initialize.scm 170 */
																											obj_t BgL_arg1712z00_1618;

																											{	/* Cnst/initialize.scm 170 */
																												obj_t
																													BgL_arg1719z00_1619;
																												{	/* Cnst/initialize.scm 170 */
																													obj_t
																														BgL_arg1725z00_1620;
																													{	/* Cnst/initialize.scm 170 */
																														obj_t
																															BgL_arg1726z00_1621;
																														{	/* Cnst/initialize.scm 170 */
																															obj_t
																																BgL_arg1727z00_1622;
																															BgL_arg1727z00_1622
																																=
																																MAKE_YOUNG_PAIR
																																(BINT(((long)
																																		1)), BNIL);
																															BgL_arg1726z00_1621
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 9)),
																																BgL_arg1727z00_1622);
																														}
																														BgL_arg1725z00_1620
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 15)),
																															BgL_arg1726z00_1621);
																													}
																													BgL_arg1719z00_1619 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1725z00_1620,
																														BNIL);
																												}
																												BgL_arg1712z00_1618 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 16)),
																													BgL_arg1719z00_1619);
																											}
																											BgL_arg1708z00_1616 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1712z00_1618,
																												BNIL);
																										}
																										{	/* Cnst/initialize.scm 171 */
																											obj_t BgL_arg1728z00_1623;

																											{	/* Cnst/initialize.scm 171 */
																												obj_t
																													BgL_arg1729z00_1624;
																												BgL_arg1729z00_1624 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 17)),
																													BNIL);
																												BgL_arg1728z00_1623 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 18)),
																													BgL_arg1729z00_1624);
																											}
																											BgL_arg1711z00_1617 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1728z00_1623,
																												BNIL);
																										}
																										BgL_arg1707z00_1615 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1708z00_1616,
																											BgL_arg1711z00_1617);
																									}
																									BgL_arg1704z00_1614 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												19)),
																										BgL_arg1707z00_1615);
																								}
																								BgL_arg1687z00_1608 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1704z00_1614, BNIL);
																							}
																							BgL_arg1685z00_1606 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1686z00_1607,
																								BgL_arg1687z00_1608);
																						}
																						BgL_arg1684z00_1605 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 20)),
																							BgL_arg1685z00_1606);
																					}
																					BgL_arg1672z00_1604 =
																						MAKE_YOUNG_PAIR(BgL_arg1684z00_1605,
																						BNIL);
																				}
																				BgL_arg1664z00_1601 =
																					MAKE_YOUNG_PAIR(BUNSPEC,
																					BgL_arg1672z00_1604);
																			}
																			BgL_arg1662z00_1599 =
																				MAKE_YOUNG_PAIR(BgL_arg1663z00_1600,
																				BgL_arg1664z00_1601);
																		}
																		BgL_arg1652z00_1598 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					21)), BgL_arg1662z00_1599);
																	}
																	BgL_arg1644z00_1597 =
																		MAKE_YOUNG_PAIR(BgL_arg1652z00_1598, BNIL);
																}
																BgL_arg1640z00_1595 =
																	MAKE_YOUNG_PAIR(BgL_arg1641z00_1596,
																	BgL_arg1644z00_1597);
															}
															BgL_arg1639z00_1594 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
																BgL_arg1640z00_1595);
														}
														BgL_arg1631z00_1592 =
															MAKE_YOUNG_PAIR(BgL_arg1639z00_1594, BNIL);
													}
													{	/* Cnst/initialize.scm 172 */
														obj_t BgL_arg1731z00_1625;

														{	/* Cnst/initialize.scm 172 */
															obj_t BgL_arg1732z00_1626;

															{	/* Cnst/initialize.scm 172 */
																long BgL_arg1733z00_1627;

																{	/* Cnst/initialize.scm 172 */
																	obj_t BgL_arg1738z00_1628;

																	BgL_arg1738z00_1628 =
																		BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
																	BgL_arg1733z00_1627 =
																		(
																		(long) CINT(BgL_arg1738z00_1628) -
																		((long) 1));
																}
																BgL_arg1732z00_1626 =
																	MAKE_YOUNG_PAIR(BINT(BgL_arg1733z00_1627),
																	BNIL);
															}
															BgL_arg1731z00_1625 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
																BgL_arg1732z00_1626);
														}
														BgL_arg1634z00_1593 =
															MAKE_YOUNG_PAIR(BgL_arg1731z00_1625, BNIL);
													}
													BgL_arg1627z00_1591 =
														MAKE_YOUNG_PAIR(BgL_arg1631z00_1592,
														BgL_arg1634z00_1593);
												}
												BgL_arg1626z00_1590 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 22)),
													BgL_arg1627z00_1591);
											}
											BgL_arg1593z00_1580 =
												MAKE_YOUNG_PAIR(BgL_arg1626z00_1590, BNIL);
										}
										BgL_arg1589z00_1578 =
											MAKE_YOUNG_PAIR(BgL_arg1592z00_1579, BgL_arg1593z00_1580);
									}
									BgL_sexpz00_1576 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
										BgL_arg1589z00_1578);
								}
								{	/* Cnst/initialize.scm 159 */

									return
										MAKE_YOUNG_PAIR(BgL_sexpz00_1576,
										BGl_getzd2cnstzd2sexpz00zzcnst_allocz00());
								}
							}
						}
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcnst_initializa7eza7()
	{
		{	/* Cnst/initialize.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_buildz00(((long) 428035839),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 192700095),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
			return
				BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 89013019),
				BSTRING_TO_STRING(BGl_string1862z00zzcnst_initializa7eza7));
		}

	}

#ifdef __cplusplus
}
#endif
