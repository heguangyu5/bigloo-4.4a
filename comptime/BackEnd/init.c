/*===========================================================================*/
/*   (BackEnd/init.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/init.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_occurzd2nodezd2inz12z12zzast_occurz00(BgL_nodez00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_objectzd2initzd2zzbackend_initz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2stringza2z00zztype_cachez00;
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzbackend_initz00();
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_za2dlopenzd2initzd2gcza2z00zzengine_paramz00;
	static obj_t BGl_z62getzd2modulezd2initz62zzbackend_initz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_initz00();
	extern obj_t BGl_za2modulezd2checksumza2zd2zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t
		BGl_backendzd2gczd2initz00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_za2modulezd2initza2zd2zzbackend_initz00 = BUNSPEC;
	extern obj_t BGl_za2unsafezd2versionza2zd2zzengine_paramz00;
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_initz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzbackend_initz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static BgL_globalz00_bglt BGl_makezd2modulezd2initz00zzbackend_initz00();
	extern obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzbackend_initz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_initz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_unitzd2initzd2callsz00zzast_unitz00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2modulezd2initz00zzbackend_initz00();
	static obj_t BGl_cnstzd2initzd2zzbackend_initz00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_initz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_initz00();
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	extern obj_t BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	static obj_t __cnst[24];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2modulezd2initzd2envzd2zzbackend_initz00,
		BgL_bgl_za762getza7d2moduleza71748za7,
		BGl_z62getzd2modulezd2initz62zzbackend_initz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1739z00zzbackend_initz00,
		BgL_bgl_string1739za700za7za7b1749za7, "bgl_init_module_debug_start(\"",
		29);
	      DEFINE_STRING(BGl_string1740z00zzbackend_initz00,
		BgL_bgl_string1740za700za7za7b1750za7, "\")", 2);
	      DEFINE_STRING(BGl_string1741z00zzbackend_initz00,
		BgL_bgl_string1741za700za7za7b1751za7, "bgl_init_module_debug_end(\"", 27);
	      DEFINE_STRING(BGl_string1742z00zzbackend_initz00,
		BgL_bgl_string1742za700za7za7b1752za7, "~s", 2);
	      DEFINE_STRING(BGl_string1743z00zzbackend_initz00,
		BgL_bgl_string1743za700za7za7b1753za7, "backend_init", 12);
	      DEFINE_STRING(BGl_string1744z00zzbackend_initz00,
		BgL_bgl_string1744za700za7za7b1754za7,
		"export module-initialization sfun (checksum from) value module-init-error s from s::string pragma::string =fx bit-and checksum module now module-initalization require-initialization::obj let pragma tmp if begin set! require-initialization ",
		239);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2modulezd2initza2zd2zzbackend_initz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzbackend_initz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_initz00(long
		BgL_checksumz00_2066, char *BgL_fromz00_2067)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_initz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_initz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_initz00();
					BGl_libraryzd2moduleszd2initz00zzbackend_initz00();
					BGl_cnstzd2initzd2zzbackend_initz00();
					BGl_importedzd2moduleszd2initz00zzbackend_initz00();
					return BGl_toplevelzd2initzd2zzbackend_initz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_initz00()
	{
		{	/* BackEnd/init.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_init");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"backend_init");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"backend_init");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_init");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_init");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_init");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"backend_init");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_initz00()
	{
		{	/* BackEnd/init.scm 15 */
			{	/* BackEnd/init.scm 15 */
				obj_t BgL_cportz00_2053;

				{	/* BackEnd/init.scm 15 */
					obj_t BgL_stringz00_2061;

					BgL_stringz00_2061 = BGl_string1744z00zzbackend_initz00;
					{	/* BackEnd/init.scm 15 */
						obj_t BgL_startz00_2062;

						BgL_startz00_2062 = BINT(((long) 0));
						{	/* BackEnd/init.scm 15 */
							obj_t BgL_endz00_2063;

							BgL_endz00_2063 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2061)));
							{	/* BackEnd/init.scm 15 */

								BgL_cportz00_2053 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2061, BgL_startz00_2062, BgL_endz00_2063);
				}}}}
				{
					long BgL_iz00_2054;

					BgL_iz00_2054 = ((long) 23);
				BgL_loopz00_2055:
					if ((BgL_iz00_2054 == ((long) -1)))
						{	/* BackEnd/init.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/init.scm 15 */
							{	/* BackEnd/init.scm 15 */
								obj_t BgL_arg1746z00_2057;

								{	/* BackEnd/init.scm 15 */

									{	/* BackEnd/init.scm 15 */
										obj_t BgL_locationz00_2059;

										BgL_locationz00_2059 = BBOOL(((bool_t) 0));
										{	/* BackEnd/init.scm 15 */

											BgL_arg1746z00_2057 =
												BGl_readz00zz__readerz00(BgL_cportz00_2053,
												BgL_locationz00_2059);
										}
									}
								}
								{	/* BackEnd/init.scm 15 */
									int BgL_tmpz00_2092;

									BgL_tmpz00_2092 = (int) (BgL_iz00_2054);
									CNST_TABLE_SET(BgL_tmpz00_2092, BgL_arg1746z00_2057);
							}}
							{	/* BackEnd/init.scm 15 */
								int BgL_auxz00_2060;

								BgL_auxz00_2060 = (int) ((BgL_iz00_2054 - ((long) 1)));
								{
									long BgL_iz00_2097;

									BgL_iz00_2097 = (long) (BgL_auxz00_2060);
									BgL_iz00_2054 = BgL_iz00_2097;
									goto BgL_loopz00_2055;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_initz00()
	{
		{	/* BackEnd/init.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_initz00()
	{
		{	/* BackEnd/init.scm 15 */
			return (BGl_za2modulezd2initza2zd2zzbackend_initz00 = BUNSPEC, BUNSPEC);
		}

	}



/* get-module-init */
	BGL_EXPORTED_DEF obj_t BGl_getzd2modulezd2initz00zzbackend_initz00()
	{
		{	/* BackEnd/init.scm 45 */
			if ((BGl_za2modulezd2initza2zd2zzbackend_initz00 == BUNSPEC))
				{	/* BackEnd/init.scm 46 */
					BGl_za2modulezd2initza2zd2zzbackend_initz00 =
						((obj_t) BGl_makezd2modulezd2initz00zzbackend_initz00());
				}
			else
				{	/* BackEnd/init.scm 46 */
					BFALSE;
				}
			return BGl_za2modulezd2initza2zd2zzbackend_initz00;
		}

	}



/* &get-module-init */
	obj_t BGl_z62getzd2modulezd2initz62zzbackend_initz00(obj_t BgL_envz00_2052)
	{
		{	/* BackEnd/init.scm 45 */
			return BGl_getzd2modulezd2initz00zzbackend_initz00();
		}

	}



/* make-module-init */
	BgL_globalz00_bglt BGl_makezd2modulezd2initz00zzbackend_initz00()
	{
		{	/* BackEnd/init.scm 53 */
			{

				{	/* BackEnd/init.scm 81 */
					BgL_globalz00_bglt BgL_reqz00_1682;

					BgL_reqz00_1682 =
						BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(CNST_TABLE_REF((
								(long) 7)), BGl_za2moduleza2z00zzmodule_modulez00,
						CNST_TABLE_REF(((long) 8)), CNST_TABLE_REF(((long) 9)));
					{	/* BackEnd/init.scm 81 */
						obj_t BgL_bcz00_1683;

						BgL_bcz00_1683 = BGl_thezd2backendzd2zzbackend_backendz00();
						{	/* BackEnd/init.scm 85 */
							bool_t BgL_dbgz00_1684;

							if (
								((long) CINT(BGl_za2debugzd2moduleza2zd2zzengine_paramz00) >
									((long) 0)))
								{	/* BackEnd/init.scm 86 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(CNST_TABLE_REF(((long) 10)),
												(((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
																BgL_bcz00_1683)))->BgL_debugzd2supportzd2))))
										{	/* BackEnd/init.scm 87 */
											BgL_dbgz00_1684 =
												(((BgL_backendz00_bglt) COBJECT(
														((BgL_backendz00_bglt) BgL_bcz00_1683)))->
												BgL_pragmazd2supportzd2);
										}
									else
										{	/* BackEnd/init.scm 87 */
											BgL_dbgz00_1684 = ((bool_t) 0);
										}
								}
							else
								{	/* BackEnd/init.scm 86 */
									BgL_dbgz00_1684 = ((bool_t) 0);
								}
							{	/* BackEnd/init.scm 86 */
								obj_t BgL_ubodyz00_1685;

								if (BgL_dbgz00_1684)
									{	/* BackEnd/init.scm 89 */
										{	/* BackEnd/init.scm 64 */
											obj_t BgL_tmpz00_1746;

											BgL_tmpz00_1746 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 4)));
											{	/* BackEnd/init.scm 67 */
												obj_t BgL_arg1381z00_1747;

												{	/* BackEnd/init.scm 67 */
													obj_t BgL_arg1382z00_1748;

													{	/* BackEnd/init.scm 67 */
														obj_t BgL_arg1383z00_1749;
														obj_t BgL_arg1384z00_1750;

														{	/* BackEnd/init.scm 67 */
															obj_t BgL_arg1385z00_1751;

															{	/* BackEnd/init.scm 67 */
																obj_t BgL_arg1386z00_1752;
																obj_t BgL_arg1387z00_1753;

																{	/* BackEnd/init.scm 67 */
																	obj_t BgL_arg1388z00_1754;

																	{	/* BackEnd/init.scm 67 */
																		obj_t BgL_arg1394z00_1755;

																		BgL_arg1394z00_1755 =
																			MAKE_YOUNG_PAIR(BFALSE, BNIL);
																		BgL_arg1388z00_1754 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					0)), BgL_arg1394z00_1755);
																	}
																	BgL_arg1386z00_1752 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
																		BgL_arg1388z00_1754);
																}
																{	/* BackEnd/init.scm 68 */
																	obj_t BgL_arg1396z00_1756;
																	obj_t BgL_arg1417z00_1757;

																	if (CBOOL
																		(BGl_za2dlopenzd2initzd2gcza2z00zzengine_paramz00))
																		{	/* BackEnd/init.scm 68 */
																			obj_t BgL_arg1418z00_1758;

																			BgL_arg1418z00_1758 =
																				BGl_thezd2backendzd2zzbackend_backendz00
																				();
																			BgL_arg1396z00_1756 =
																				BGl_backendzd2gczd2initz00zzbackend_backendz00
																				(((BgL_backendz00_bglt)
																					BgL_arg1418z00_1758));
																		}
																	else
																		{	/* BackEnd/init.scm 68 */
																			BgL_arg1396z00_1756 = BFALSE;
																		}
																	{	/* BackEnd/init.scm 71 */
																		obj_t BgL_arg1421z00_1759;
																		obj_t BgL_arg1422z00_1760;

																		{	/* BackEnd/init.scm 71 */
																			obj_t BgL_arg1441z00_1761;

																			{	/* BackEnd/init.scm 71 */
																				obj_t BgL_arg1442z00_1762;

																				{	/* BackEnd/init.scm 71 */
																					obj_t BgL_arg1448z00_1763;

																					{	/* BackEnd/init.scm 71 */
																						obj_t BgL_res1729z00_2023;

																						{	/* BackEnd/init.scm 71 */
																							obj_t BgL_symbolz00_2021;

																							BgL_symbolz00_2021 =
																								BGl_za2moduleza2z00zzmodule_modulez00;
																							{	/* BackEnd/init.scm 71 */
																								obj_t BgL_arg1466z00_2022;

																								BgL_arg1466z00_2022 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_2021);
																								BgL_res1729z00_2023 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1466z00_2022);
																							}
																						}
																						BgL_arg1448z00_1763 =
																							BgL_res1729z00_2023;
																					}
																					BgL_arg1442z00_1762 =
																						string_append_3
																						(BGl_string1739z00zzbackend_initz00,
																						BgL_arg1448z00_1763,
																						BGl_string1740z00zzbackend_initz00);
																				}
																				BgL_arg1441z00_1761 =
																					MAKE_YOUNG_PAIR(BgL_arg1442z00_1762,
																					BNIL);
																			}
																			BgL_arg1421z00_1759 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						5)), BgL_arg1441z00_1761);
																		}
																		{	/* BackEnd/init.scm 73 */
																			obj_t BgL_arg1449z00_1764;

																			{	/* BackEnd/init.scm 73 */
																				obj_t BgL_arg1461z00_1765;

																				{	/* BackEnd/init.scm 73 */
																					obj_t BgL_arg1462z00_1766;
																					obj_t BgL_arg1464z00_1767;

																					{	/* BackEnd/init.scm 73 */
																						obj_t BgL_arg1465z00_1768;

																						{	/* BackEnd/init.scm 73 */
																							obj_t BgL_arg1474z00_1769;

																							{	/* BackEnd/init.scm 73 */
																								obj_t BgL_arg1476z00_1770;

																								{	/* BackEnd/init.scm 73 */
																									obj_t BgL_arg1477z00_1771;

																									BgL_arg1477z00_1771 =
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BGl_unitzd2initzd2callsz00zzast_unitz00
																										(), BNIL);
																									BgL_arg1476z00_1770 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long) 2)),
																										BgL_arg1477z00_1771);
																								}
																								BgL_arg1474z00_1769 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1476z00_1770, BNIL);
																							}
																							BgL_arg1465z00_1768 =
																								MAKE_YOUNG_PAIR(BgL_tmpz00_1746,
																								BgL_arg1474z00_1769);
																						}
																						BgL_arg1462z00_1766 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1465z00_1768, BNIL);
																					}
																					{	/* BackEnd/init.scm 76 */
																						obj_t BgL_arg1493z00_1773;
																						obj_t BgL_arg1495z00_1774;

																						{	/* BackEnd/init.scm 76 */
																							obj_t BgL_arg1497z00_1775;

																							{	/* BackEnd/init.scm 76 */
																								obj_t BgL_arg1518z00_1776;

																								{	/* BackEnd/init.scm 76 */
																									obj_t BgL_arg1521z00_1777;

																									{	/* BackEnd/init.scm 76 */
																										obj_t BgL_res1730z00_2026;

																										{	/* BackEnd/init.scm 76 */
																											obj_t BgL_symbolz00_2024;

																											BgL_symbolz00_2024 =
																												BGl_za2moduleza2z00zzmodule_modulez00;
																											{	/* BackEnd/init.scm 76 */
																												obj_t
																													BgL_arg1466z00_2025;
																												BgL_arg1466z00_2025 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_2024);
																												BgL_res1730z00_2026 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg1466z00_2025);
																										}}
																										BgL_arg1521z00_1777 =
																											BgL_res1730z00_2026;
																									}
																									BgL_arg1518z00_1776 =
																										string_append_3
																										(BGl_string1741z00zzbackend_initz00,
																										BgL_arg1521z00_1777,
																										BGl_string1740z00zzbackend_initz00);
																								}
																								BgL_arg1497z00_1775 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1518z00_1776, BNIL);
																							}
																							BgL_arg1493z00_1773 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 5)),
																								BgL_arg1497z00_1775);
																						}
																						BgL_arg1495z00_1774 =
																							MAKE_YOUNG_PAIR(BgL_tmpz00_1746,
																							BNIL);
																						BgL_arg1464z00_1767 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1493z00_1773,
																							BgL_arg1495z00_1774);
																					}
																					BgL_arg1461z00_1765 =
																						MAKE_YOUNG_PAIR(BgL_arg1462z00_1766,
																						BgL_arg1464z00_1767);
																				}
																				BgL_arg1449z00_1764 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							6)), BgL_arg1461z00_1765);
																			}
																			BgL_arg1422z00_1760 =
																				MAKE_YOUNG_PAIR(BgL_arg1449z00_1764,
																				BNIL);
																		}
																		BgL_arg1417z00_1757 =
																			MAKE_YOUNG_PAIR(BgL_arg1421z00_1759,
																			BgL_arg1422z00_1760);
																	}
																	BgL_arg1387z00_1753 =
																		MAKE_YOUNG_PAIR(BgL_arg1396z00_1756,
																		BgL_arg1417z00_1757);
																}
																BgL_arg1385z00_1751 =
																	MAKE_YOUNG_PAIR(BgL_arg1386z00_1752,
																	BgL_arg1387z00_1753);
															}
															BgL_arg1383z00_1749 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
																BgL_arg1385z00_1751);
														}
														BgL_arg1384z00_1750 =
															MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
														BgL_arg1382z00_1748 =
															MAKE_YOUNG_PAIR(BgL_arg1383z00_1749,
															BgL_arg1384z00_1750);
													}
													BgL_arg1381z00_1747 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
														BgL_arg1382z00_1748);
												}
												BgL_ubodyz00_1685 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
													BgL_arg1381z00_1747);
									}}}
								else
									{	/* BackEnd/init.scm 89 */
										{	/* BackEnd/init.scm 58 */
											obj_t BgL_arg1347z00_1732;

											{	/* BackEnd/init.scm 58 */
												obj_t BgL_arg1348z00_1733;

												{	/* BackEnd/init.scm 58 */
													obj_t BgL_arg1351z00_1734;
													obj_t BgL_arg1352z00_1735;

													{	/* BackEnd/init.scm 58 */
														obj_t BgL_arg1357z00_1736;

														{	/* BackEnd/init.scm 58 */
															obj_t BgL_arg1360z00_1737;
															obj_t BgL_arg1361z00_1738;

															{	/* BackEnd/init.scm 58 */
																obj_t BgL_arg1363z00_1739;

																{	/* BackEnd/init.scm 58 */
																	obj_t BgL_arg1364z00_1740;

																	BgL_arg1364z00_1740 =
																		MAKE_YOUNG_PAIR(BFALSE, BNIL);
																	BgL_arg1363z00_1739 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
																		BgL_arg1364z00_1740);
																}
																BgL_arg1360z00_1737 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
																	BgL_arg1363z00_1739);
															}
															{	/* BackEnd/init.scm 59 */
																obj_t BgL_arg1367z00_1741;
																obj_t BgL_arg1370z00_1742;

																if (CBOOL
																	(BGl_za2dlopenzd2initzd2gcza2z00zzengine_paramz00))
																	{	/* BackEnd/init.scm 59 */
																		obj_t BgL_arg1371z00_1743;

																		BgL_arg1371z00_1743 =
																			BGl_thezd2backendzd2zzbackend_backendz00
																			();
																		BgL_arg1367z00_1741 =
																			BGl_backendzd2gczd2initz00zzbackend_backendz00
																			(((BgL_backendz00_bglt)
																				BgL_arg1371z00_1743));
																	}
																else
																	{	/* BackEnd/init.scm 59 */
																		BgL_arg1367z00_1741 = BFALSE;
																	}
																BgL_arg1370z00_1742 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BGl_unitzd2initzd2callsz00zzast_unitz00(),
																	BNIL);
																BgL_arg1361z00_1738 =
																	MAKE_YOUNG_PAIR(BgL_arg1367z00_1741,
																	BgL_arg1370z00_1742);
															}
															BgL_arg1357z00_1736 =
																MAKE_YOUNG_PAIR(BgL_arg1360z00_1737,
																BgL_arg1361z00_1738);
														}
														BgL_arg1351z00_1734 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
															BgL_arg1357z00_1736);
													}
													BgL_arg1352z00_1735 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
													BgL_arg1348z00_1733 =
														MAKE_YOUNG_PAIR(BgL_arg1351z00_1734,
														BgL_arg1352z00_1735);
												}
												BgL_arg1347z00_1732 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
													BgL_arg1348z00_1733);
											}
											BgL_ubodyz00_1685 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
												BgL_arg1347z00_1732);
									}}
								{	/* BackEnd/init.scm 89 */
									obj_t BgL_bodyz00_1686;

									if (CBOOL(BGl_za2unsafezd2versionza2zd2zzengine_paramz00))
										{	/* BackEnd/init.scm 90 */
											BgL_bodyz00_1686 = BgL_ubodyz00_1685;
										}
									else
										{	/* BackEnd/init.scm 92 */
											obj_t BgL_arg1304z00_1699;

											{	/* BackEnd/init.scm 92 */
												obj_t BgL_arg1306z00_1700;
												obj_t BgL_arg1307z00_1701;

												{	/* BackEnd/init.scm 92 */
													obj_t BgL_arg1308z00_1702;

													{	/* BackEnd/init.scm 92 */
														obj_t BgL_arg1309z00_1703;
														obj_t BgL_arg1310z00_1704;

														{	/* BackEnd/init.scm 92 */
															obj_t BgL_arg1311z00_1705;

															{	/* BackEnd/init.scm 92 */
																obj_t BgL_arg1312z00_1706;

																BgL_arg1312z00_1706 =
																	MAKE_YOUNG_PAIR
																	(BGl_za2modulezd2checksumza2zd2zzmodule_modulez00,
																	BNIL);
																BgL_arg1311z00_1705 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
																	BgL_arg1312z00_1706);
															}
															BgL_arg1309z00_1703 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																BgL_arg1311z00_1705);
														}
														BgL_arg1310z00_1704 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
															BNIL);
														BgL_arg1308z00_1702 =
															MAKE_YOUNG_PAIR(BgL_arg1309z00_1703,
															BgL_arg1310z00_1704);
													}
													BgL_arg1306z00_1700 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
														BgL_arg1308z00_1702);
												}
												{	/* BackEnd/init.scm 94 */
													obj_t BgL_arg1314z00_1707;

													{	/* BackEnd/init.scm 94 */
														obj_t BgL_arg1315z00_1708;

														{	/* BackEnd/init.scm 94 */
															bool_t BgL_test1766z00_2204;

															{	/* BackEnd/init.scm 94 */
																obj_t BgL_arg1344z00_1727;

																BgL_arg1344z00_1727 =
																	BGl_thezd2backendzd2zzbackend_backendz00();
																BgL_test1766z00_2204 =
																	(((BgL_backendz00_bglt) COBJECT(
																			((BgL_backendz00_bglt)
																				BgL_arg1344z00_1727)))->
																	BgL_pragmazd2supportzd2);
															}
															if (BgL_test1766z00_2204)
																{	/* BackEnd/init.scm 97 */
																	obj_t BgL_arg1319z00_1711;

																	{	/* BackEnd/init.scm 97 */
																		obj_t BgL_arg1322z00_1712;
																		obj_t BgL_arg1324z00_1713;

																		{	/* BackEnd/init.scm 97 */
																			obj_t BgL_arg1325z00_1714;

																			{	/* BackEnd/init.scm 97 */
																				obj_t BgL_arg1326z00_1715;

																				{	/* BackEnd/init.scm 97 */
																					obj_t BgL_arg1327z00_1716;

																					{	/* BackEnd/init.scm 97 */
																						obj_t BgL_arg1328z00_1717;

																						{	/* BackEnd/init.scm 97 */
																							obj_t BgL_arg1329z00_1718;

																							{	/* BackEnd/init.scm 97 */
																								obj_t BgL_arg1330z00_1719;

																								{	/* BackEnd/init.scm 97 */
																									obj_t BgL_res1735z00_2040;

																									{	/* BackEnd/init.scm 97 */
																										obj_t BgL_symbolz00_2038;

																										BgL_symbolz00_2038 =
																											BGl_za2moduleza2z00zzmodule_modulez00;
																										{	/* BackEnd/init.scm 97 */
																											obj_t BgL_arg1466z00_2039;

																											BgL_arg1466z00_2039 =
																												SYMBOL_TO_STRING
																												(BgL_symbolz00_2038);
																											BgL_res1735z00_2040 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg1466z00_2039);
																										}
																									}
																									BgL_arg1330z00_1719 =
																										BgL_res1735z00_2040;
																								}
																								{	/* BackEnd/init.scm 97 */
																									obj_t BgL_list1331z00_1720;

																									BgL_list1331z00_1720 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1330z00_1719, BNIL);
																									BgL_arg1329z00_1718 =
																										BGl_formatz00zz__r4_output_6_10_3z00
																										(BGl_string1742z00zzbackend_initz00,
																										BgL_list1331z00_1720);
																								}
																							}
																							BgL_arg1328z00_1717 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1329z00_1718, BNIL);
																						}
																						BgL_arg1327z00_1716 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 14)),
																							BgL_arg1328z00_1717);
																					}
																					BgL_arg1326z00_1715 =
																						MAKE_YOUNG_PAIR(BgL_arg1327z00_1716,
																						BNIL);
																				}
																				BgL_arg1325z00_1714 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							15)), BgL_arg1326z00_1715);
																			}
																			BgL_arg1322z00_1712 =
																				MAKE_YOUNG_PAIR(BgL_arg1325z00_1714,
																				BNIL);
																		}
																		{	/* BackEnd/init.scm 98 */
																			obj_t BgL_arg1334z00_1721;

																			{	/* BackEnd/init.scm 98 */
																				obj_t BgL_arg1335z00_1722;

																				{	/* BackEnd/init.scm 98 */
																					obj_t BgL_arg1337z00_1723;

																					BgL_arg1337z00_1723 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 16)), BNIL);
																					BgL_arg1335z00_1722 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 17)),
																						BgL_arg1337z00_1723);
																				}
																				BgL_arg1334z00_1721 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							18)), BgL_arg1335z00_1722);
																			}
																			BgL_arg1324z00_1713 =
																				MAKE_YOUNG_PAIR(BgL_arg1334z00_1721,
																				BNIL);
																		}
																		BgL_arg1319z00_1711 =
																			MAKE_YOUNG_PAIR(BgL_arg1322z00_1712,
																			BgL_arg1324z00_1713);
																	}
																	BgL_arg1315z00_1708 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																		BgL_arg1319z00_1711);
																}
															else
																{	/* BackEnd/init.scm 99 */
																	obj_t BgL_arg1338z00_1724;

																	{	/* BackEnd/init.scm 99 */
																		obj_t BgL_arg1339z00_1725;
																		obj_t BgL_arg1340z00_1726;

																		{	/* BackEnd/init.scm 99 */
																			obj_t BgL_res1736z00_2043;

																			{	/* BackEnd/init.scm 99 */
																				obj_t BgL_symbolz00_2041;

																				BgL_symbolz00_2041 =
																					BGl_za2moduleza2z00zzmodule_modulez00;
																				{	/* BackEnd/init.scm 99 */
																					obj_t BgL_arg1466z00_2042;

																					BgL_arg1466z00_2042 =
																						SYMBOL_TO_STRING
																						(BgL_symbolz00_2041);
																					BgL_res1736z00_2043 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg1466z00_2042);
																				}
																			}
																			BgL_arg1339z00_1725 = BgL_res1736z00_2043;
																		}
																		BgL_arg1340z00_1726 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					16)), BNIL);
																		BgL_arg1338z00_1724 =
																			MAKE_YOUNG_PAIR(BgL_arg1339z00_1725,
																			BgL_arg1340z00_1726);
																	}
																	BgL_arg1315z00_1708 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
																		BgL_arg1338z00_1724);
														}}
														BgL_arg1314z00_1707 =
															MAKE_YOUNG_PAIR(BgL_arg1315z00_1708, BNIL);
													}
													BgL_arg1307z00_1701 =
														MAKE_YOUNG_PAIR(BgL_ubodyz00_1685,
														BgL_arg1314z00_1707);
												}
												BgL_arg1304z00_1699 =
													MAKE_YOUNG_PAIR(BgL_arg1306z00_1700,
													BgL_arg1307z00_1701);
											}
											BgL_bodyz00_1686 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
												BgL_arg1304z00_1699);
										}
									{	/* BackEnd/init.scm 90 */
										BgL_localz00_bglt BgL_cvarz00_1687;

										BgL_cvarz00_1687 =
											BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
													(long) 11)),
											((BgL_typez00_bglt) BGl_za2longza2z00zztype_cachez00));
										{	/* BackEnd/init.scm 101 */
											BgL_localz00_bglt BgL_nvarz00_1688;

											BgL_nvarz00_1688 =
												BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF(
													((long) 16)),
												((BgL_typez00_bglt)
													BGl_za2stringza2z00zztype_cachez00));
											{	/* BackEnd/init.scm 102 */
												BgL_nodez00_bglt BgL_nodez00_1689;

												{	/* BackEnd/init.scm 103 */
													BgL_nodez00_bglt BgL_nodez00_1695;

													{	/* BackEnd/init.scm 103 */
														obj_t BgL_arg1301z00_1696;

														{	/* BackEnd/init.scm 103 */
															obj_t BgL_list1302z00_1697;

															{	/* BackEnd/init.scm 103 */
																obj_t BgL_arg1303z00_1698;

																BgL_arg1303z00_1698 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_nvarz00_1688), BNIL);
																BgL_list1302z00_1697 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_cvarz00_1687),
																	BgL_arg1303z00_1698);
															}
															BgL_arg1301z00_1696 = BgL_list1302z00_1697;
														}
														BgL_nodez00_1695 =
															BGl_sexpzd2ze3nodez31zzast_sexpz00
															(BgL_bodyz00_1686, BgL_arg1301z00_1696, BNIL,
															CNST_TABLE_REF(((long) 19)));
													}
													BGl_lvtypezd2nodez12zc0zzast_lvtypez00
														(BgL_nodez00_1695);
													BgL_nodez00_1689 =
														BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_1695,
														((obj_t) BgL_reqz00_1682),
														((BgL_typez00_bglt)
															BGl_za2objza2z00zztype_cachez00), ((bool_t) 0));
												}
												{	/* BackEnd/init.scm 103 */
													BgL_globalz00_bglt BgL_initz00_1690;

													{	/* BackEnd/init.scm 107 */
														obj_t BgL_arg1297z00_1691;
														obj_t BgL_arg1298z00_1692;

														BgL_arg1297z00_1691 =
															BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
															(BGl_za2moduleza2z00zzmodule_modulez00);
														{	/* BackEnd/init.scm 109 */
															obj_t BgL_list1299z00_1693;

															{	/* BackEnd/init.scm 109 */
																obj_t BgL_arg1300z00_1694;

																BgL_arg1300z00_1694 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_nvarz00_1688), BNIL);
																BgL_list1299z00_1693 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_cvarz00_1687),
																	BgL_arg1300z00_1694);
															}
															BgL_arg1298z00_1692 = BgL_list1299z00_1693;
														}
														BgL_initz00_1690 =
															BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
															(BgL_arg1297z00_1691, CNST_TABLE_REF(((long) 20)),
															BgL_arg1298z00_1692,
															BGl_za2moduleza2z00zzmodule_modulez00,
															CNST_TABLE_REF(((long) 21)),
															CNST_TABLE_REF(((long) 22)),
															CNST_TABLE_REF(((long) 9)),
															((obj_t) BgL_nodez00_1689));
													}
													{	/* BackEnd/init.scm 106 */

														BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
															((BgL_variablez00_bglt) BgL_reqz00_1682));
														{	/* BackEnd/init.scm 116 */
															obj_t BgL_vz00_2047;

															BgL_vz00_2047 = CNST_TABLE_REF(((long) 23));
															((((BgL_globalz00_bglt)
																		COBJECT(BgL_initz00_1690))->BgL_importz00) =
																((obj_t) BgL_vz00_2047), BUNSPEC);
														}
														{	/* BackEnd/init.scm 117 */
															BgL_typez00_bglt BgL_vz00_2049;

															BgL_vz00_2049 =
																((BgL_typez00_bglt)
																BGl_za2objza2z00zztype_cachez00);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_initz00_1690)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_vz00_2049), BUNSPEC);
														}
														BGl_occurzd2nodezd2inz12z12zzast_occurz00
															(BgL_nodez00_1689, BgL_initz00_1690);
														return BgL_initz00_1690;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_initz00()
	{
		{	/* BackEnd/init.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_initz00()
	{
		{	/* BackEnd/init.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_initz00()
	{
		{	/* BackEnd/init.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_initz00()
	{
		{	/* BackEnd/init.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 44601778),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 234044112),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 535161241),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 395790731),
				BSTRING_TO_STRING(BGl_string1743z00zzbackend_initz00));
		}

	}

#ifdef __cplusplus
}
#endif
