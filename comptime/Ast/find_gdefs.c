/*===========================================================================*/
/*   (Ast/find_gdefs.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/find_gdefs.scm) */
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


	static obj_t BGl_z62definezd2globalzb0zzast_findzd2gdefszd2(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62findzd2globalzd2defsz62zzast_findzd2gdefszd2(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzast_findzd2gdefszd2();
	static obj_t BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2 = BUNSPEC;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_dssslzd2defaultzd2formalz00zztools_dssslz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzast_findzd2gdefszd2();
	extern obj_t BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2();
	static obj_t BGl_z62tozd2bezd2definez12z70zzast_findzd2gdefszd2(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31292ze3ze5zzast_findzd2gdefszd2(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzast_findzd2gdefszd2();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31297ze3ze5zzast_findzd2gdefszd2(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31298ze3ze5zzast_findzd2gdefszd2(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_loopze70ze7zzast_findzd2gdefszd2(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2globalzd2defsz00zzast_findzd2gdefszd2(obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	static obj_t BGl_pushzd2argszd2zzast_findzd2gdefszd2(obj_t, obj_t, obj_t);
	static obj_t BGl_bindzd2globalzd2defz12z12zzast_findzd2gdefszd2(obj_t, obj_t);
	static obj_t BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zzast_findzd2gdefszd2 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_defszd2ze3listz31zzast_findzd2gdefszd2();
	static obj_t BGl_toplevelzd2initzd2zzast_findzd2gdefszd2();
	static obj_t BGl_genericzd2initzd2zzast_findzd2gdefszd2();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static bool_t BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_findzd2gdefszd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_findzd2gdefszd2();
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_findzd2gdefszd2();
	static obj_t BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2 = BUNSPEC;
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62checkzd2tozd2bezd2definezb0zzast_findzd2gdefszd2(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2(BgL_globalz00_bglt);
	static obj_t __cnst[25];


	   
		 
		DEFINE_BGL_L_PROCEDURE(BGl_proc2076z00zzast_findzd2gdefszd2,
		BgL_bgl_za762defineza7d2glob2096z00,
		BGl_z62definezd2globalzb0zzast_findzd2gdefszd2);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2077z00zzast_findzd2gdefszd2,
		BgL_bgl_za762za7c3za704anonymo2097za7,
		BGl_z62zc3z04anonymousza31292ze3ze5zzast_findzd2gdefszd2);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2078z00zzast_findzd2gdefszd2,
		BgL_bgl_za762za7c3za704anonymo2098za7,
		BGl_z62zc3z04anonymousza31298ze3ze5zzast_findzd2gdefszd2);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2079z00zzast_findzd2gdefszd2,
		BgL_bgl_za762za7c3za704anonymo2099za7,
		BGl_z62zc3z04anonymousza31297ze3ze5zzast_findzd2gdefszd2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2tozd2bezd2definezd2envz00zzast_findzd2gdefszd2,
		BgL_bgl_za762checkza7d2toza7d22100za7,
		BGl_z62checkzd2tozd2bezd2definezb0zzast_findzd2gdefszd2, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tozd2bezd2definez12zd2envzc0zzast_findzd2gdefszd2,
		BgL_bgl_za762toza7d2beza7d2def2101za7,
		BGl_z62tozd2bezd2definez12z70zzast_findzd2gdefszd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2075z00zzast_findzd2gdefszd2,
		BgL_bgl_string2075za700za7za7a2102za7, "Can't find global definition", 28);
	      DEFINE_STRING(BGl_string2080z00zzast_findzd2gdefszd2,
		BgL_bgl_string2080za700za7za7a2103za7, "Illegal duplicated definition", 29);
	      DEFINE_STRING(BGl_string2081z00zzast_findzd2gdefszd2,
		BgL_bgl_string2081za700za7za7a2104za7, "let", 3);
	      DEFINE_STRING(BGl_string2082z00zzast_findzd2gdefszd2,
		BgL_bgl_string2082za700za7za7a2105za7, "Illegal bindings", 16);
	      DEFINE_STRING(BGl_string2083z00zzast_findzd2gdefszd2,
		BgL_bgl_string2083za700za7za7a2106za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2084z00zzast_findzd2gdefszd2,
		BgL_bgl_string2084za700za7za7a2107za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2085z00zzast_findzd2gdefszd2,
		BgL_bgl_string2085za700za7za7a2108za7, "Illegal `lambda' form", 21);
	      DEFINE_STRING(BGl_string2086z00zzast_findzd2gdefszd2,
		BgL_bgl_string2086za700za7za7a2109za7, "Illegal `define-inline' form", 28);
	      DEFINE_STRING(BGl_string2087z00zzast_findzd2gdefszd2,
		BgL_bgl_string2087za700za7za7a2110za7, "Illegal `define-generic' form", 29);
	      DEFINE_STRING(BGl_string2088z00zzast_findzd2gdefszd2,
		BgL_bgl_string2088za700za7za7a2111za7,
		"Illegal formal parameter, symbol or named constant expected", 59);
	      DEFINE_STRING(BGl_string2089z00zzast_findzd2gdefszd2,
		BgL_bgl_string2089za700za7za7a2112za7,
		"Illegal formal parameter, symbol expected", 41);
	      DEFINE_STRING(BGl_string2090z00zzast_findzd2gdefszd2,
		BgL_bgl_string2090za700za7za7a2113za7,
		"Can't use both DSSSL named constant, and `.' notation", 53);
	      DEFINE_STRING(BGl_string2091z00zzast_findzd2gdefszd2,
		BgL_bgl_string2091za700za7za7a2114za7, "ast_find-gdefs", 14);
	      DEFINE_STRING(BGl_string2092z00zzast_findzd2gdefszd2,
		BgL_bgl_string2092za700za7za7a2115za7,
		"if case apply bind-exit labels letrec let set! assert quote lambda free-pragma pragma write @ nothing done define-method define-generic define-inline define begin read def find-gdefs ",
		183);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2globalzd2defszd2envzd2zzast_findzd2gdefszd2,
		BgL_bgl_za762findza7d2global2116z00,
		BGl_z62findzd2globalzd2defsz62zzast_findzd2gdefszd2, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2));
		   
			 ADD_ROOT((void
				*) (&BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2));
		     ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzast_findzd2gdefszd2));
		     ADD_ROOT((void *) (&BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2));
		     ADD_ROOT((void *) (&BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long
		BgL_checksumz00_2489, char *BgL_fromz00_2490)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_findzd2gdefszd2))
				{
					BGl_requirezd2initializa7ationz75zzast_findzd2gdefszd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_findzd2gdefszd2();
					BGl_libraryzd2moduleszd2initz00zzast_findzd2gdefszd2();
					BGl_cnstzd2initzd2zzast_findzd2gdefszd2();
					BGl_importedzd2moduleszd2initz00zzast_findzd2gdefszd2();
					return BGl_toplevelzd2initzd2zzast_findzd2gdefszd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_findzd2gdefszd2()
	{
		{	/* Ast/find_gdefs.scm 23 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_find-gdefs");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_find-gdefs");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0),
				"ast_find-gdefs");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_find-gdefs");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_find-gdefs");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_find-gdefs");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"ast_find-gdefs");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"ast_find-gdefs");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"ast_find-gdefs");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_findzd2gdefszd2()
	{
		{	/* Ast/find_gdefs.scm 23 */
			{	/* Ast/find_gdefs.scm 23 */
				obj_t BgL_cportz00_2465;

				{	/* Ast/find_gdefs.scm 23 */
					obj_t BgL_stringz00_2473;

					BgL_stringz00_2473 = BGl_string2092z00zzast_findzd2gdefszd2;
					{	/* Ast/find_gdefs.scm 23 */
						obj_t BgL_startz00_2474;

						BgL_startz00_2474 = BINT(((long) 0));
						{	/* Ast/find_gdefs.scm 23 */
							obj_t BgL_endz00_2475;

							BgL_endz00_2475 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2473)));
							{	/* Ast/find_gdefs.scm 23 */

								BgL_cportz00_2465 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2473, BgL_startz00_2474, BgL_endz00_2475);
				}}}}
				{
					long BgL_iz00_2466;

					BgL_iz00_2466 = ((long) 24);
				BgL_loopz00_2467:
					if ((BgL_iz00_2466 == ((long) -1)))
						{	/* Ast/find_gdefs.scm 23 */
							return BUNSPEC;
						}
					else
						{	/* Ast/find_gdefs.scm 23 */
							{	/* Ast/find_gdefs.scm 23 */
								obj_t BgL_arg2094z00_2469;

								{	/* Ast/find_gdefs.scm 23 */

									{	/* Ast/find_gdefs.scm 23 */
										obj_t BgL_locationz00_2471;

										BgL_locationz00_2471 = BBOOL(((bool_t) 0));
										{	/* Ast/find_gdefs.scm 23 */

											BgL_arg2094z00_2469 =
												BGl_readz00zz__readerz00(BgL_cportz00_2465,
												BgL_locationz00_2471);
										}
									}
								}
								{	/* Ast/find_gdefs.scm 23 */
									int BgL_tmpz00_2517;

									BgL_tmpz00_2517 = (int) (BgL_iz00_2466);
									CNST_TABLE_SET(BgL_tmpz00_2517, BgL_arg2094z00_2469);
							}}
							{	/* Ast/find_gdefs.scm 23 */
								int BgL_auxz00_2472;

								BgL_auxz00_2472 = (int) ((BgL_iz00_2466 - ((long) 1)));
								{
									long BgL_iz00_2522;

									BgL_iz00_2522 = (long) (BgL_auxz00_2472);
									BgL_iz00_2466 = BgL_iz00_2522;
									goto BgL_loopz00_2467;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_findzd2gdefszd2()
	{
		{	/* Ast/find_gdefs.scm 23 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_findzd2gdefszd2()
	{
		{	/* Ast/find_gdefs.scm 23 */
			BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2 = BNIL;
			BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2 =
				BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0)));
			BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2 = BNIL;
			return (BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2 =
				BNIL, BUNSPEC);
		}

	}



/* to-be-define! */
	BGL_EXPORTED_DEF obj_t
		BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2(BgL_globalz00_bglt
		BgL_globalz00_17)
	{
		{	/* Ast/find_gdefs.scm 54 */
			return (BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2 =
				MAKE_YOUNG_PAIR(
					((obj_t) BgL_globalz00_17),
					BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2), BUNSPEC);
		}

	}



/* &to-be-define! */
	obj_t BGl_z62tozd2bezd2definez12z70zzast_findzd2gdefszd2(obj_t
		BgL_envz00_2437, obj_t BgL_globalz00_2438)
	{
		{	/* Ast/find_gdefs.scm 54 */
			return
				BGl_tozd2bezd2definez12z12zzast_findzd2gdefszd2(
				((BgL_globalz00_bglt) BgL_globalz00_2438));
		}

	}



/* check-to-be-define */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2()
	{
		{	/* Ast/find_gdefs.scm 63 */
			{
				obj_t BgL_l1225z00_1372;

				BgL_l1225z00_1372 = BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2;
			BgL_zc3z04anonymousza31264ze3z87_1373:
				if (PAIRP(BgL_l1225z00_1372))
					{	/* Ast/find_gdefs.scm 64 */
						{	/* Ast/find_gdefs.scm 65 */
							obj_t BgL_globalz00_1375;

							BgL_globalz00_1375 = CAR(BgL_l1225z00_1372);
							{	/* Ast/find_gdefs.scm 65 */
								obj_t BgL_defz00_1376;

								{	/* Ast/find_gdefs.scm 65 */
									obj_t BgL_arg1274z00_1382;

									BgL_arg1274z00_1382 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_globalz00_1375))))->
										BgL_idz00);
									BgL_defz00_1376 =
										BGl_getpropz00zz__r4_symbols_6_4z00(BgL_arg1274z00_1382,
										BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2);
								}
								{	/* Ast/find_gdefs.scm 66 */
									bool_t BgL_test2120z00_2538;

									if (STRUCTP(BgL_defz00_1376))
										{	/* Ast/find_gdefs.scm 44 */
											BgL_test2120z00_2538 =
												(STRUCT_KEY(BgL_defz00_1376) ==
												CNST_TABLE_REF(((long) 1)));
										}
									else
										{	/* Ast/find_gdefs.scm 44 */
											BgL_test2120z00_2538 = ((bool_t) 0);
										}
									if (BgL_test2120z00_2538)
										{	/* Ast/find_gdefs.scm 66 */
											BFALSE;
										}
									else
										{	/* Ast/find_gdefs.scm 67 */
											obj_t BgL_arg1268z00_1378;
											obj_t BgL_arg1270z00_1379;

											BgL_arg1268z00_1378 =
												BGl_shapez00zztools_shapez00(BgL_globalz00_1375);
											{	/* Ast/find_gdefs.scm 69 */
												obj_t BgL_arg1273z00_1381;

												BgL_arg1273z00_1381 =
													(((BgL_globalz00_bglt) COBJECT(
															((BgL_globalz00_bglt) BgL_globalz00_1375)))->
													BgL_srcz00);
												BgL_arg1270z00_1379 =
													BGl_shapez00zztools_shapez00(BgL_arg1273z00_1381);
											}
											{	/* Ast/find_gdefs.scm 67 */
												obj_t BgL_list1271z00_1380;

												BgL_list1271z00_1380 = MAKE_YOUNG_PAIR(BNIL, BNIL);
												BGl_userzd2errorzd2zztools_errorz00(BgL_arg1268z00_1378,
													BGl_string2075z00zzast_findzd2gdefszd2,
													BgL_arg1270z00_1379, BgL_list1271z00_1380);
											}
										}
								}
							}
						}
						{
							obj_t BgL_l1225z00_2550;

							BgL_l1225z00_2550 = CDR(BgL_l1225z00_1372);
							BgL_l1225z00_1372 = BgL_l1225z00_2550;
							goto BgL_zc3z04anonymousza31264ze3z87_1373;
						}
					}
				else
					{	/* Ast/find_gdefs.scm 64 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l1227z00_1386;

				BgL_l1227z00_1386 =
					BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2;
			BgL_zc3z04anonymousza31276ze3z87_1387:
				if (PAIRP(BgL_l1227z00_1386))
					{	/* Ast/find_gdefs.scm 73 */
						{	/* Ast/find_gdefs.scm 73 */
							obj_t BgL_idz00_1389;

							BgL_idz00_1389 = CAR(BgL_l1227z00_1386);
							BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_idz00_1389,
								BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2);
						}
						{
							obj_t BgL_l1227z00_2556;

							BgL_l1227z00_2556 = CDR(BgL_l1227z00_1386);
							BgL_l1227z00_1386 = BgL_l1227z00_2556;
							goto BgL_zc3z04anonymousza31276ze3z87_1387;
						}
					}
				else
					{	/* Ast/find_gdefs.scm 73 */
						((bool_t) 1);
					}
			}
			BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2 = BNIL;
			return (BGl_za2tozd2bezd2defineza2z00zzast_findzd2gdefszd2 =
				BNIL, BUNSPEC);
		}

	}



/* &check-to-be-define */
	obj_t BGl_z62checkzd2tozd2bezd2definezb0zzast_findzd2gdefszd2(obj_t
		BgL_envz00_2439)
	{
		{	/* Ast/find_gdefs.scm 63 */
			return BGl_checkzd2tozd2bezd2definezd2zzast_findzd2gdefszd2();
		}

	}



/* bind-global-def! */
	obj_t BGl_bindzd2globalzd2defz12z12zzast_findzd2gdefszd2(obj_t BgL_idz00_19,
		obj_t BgL_arityz00_20)
	{
		{	/* Ast/find_gdefs.scm 102 */
			{	/* Ast/find_gdefs.scm 103 */
				obj_t BgL_defz00_1392;

				{	/* Ast/find_gdefs.scm 103 */
					obj_t BgL_accessz00_2124;

					BgL_accessz00_2124 = CNST_TABLE_REF(((long) 2));
					{	/* Ast/find_gdefs.scm 44 */
						obj_t BgL_newz00_2125;

						BgL_newz00_2125 =
							create_struct(CNST_TABLE_REF(((long) 1)), (int) (((long) 3)));
						{	/* Ast/find_gdefs.scm 44 */
							int BgL_tmpz00_2563;

							BgL_tmpz00_2563 = (int) (((long) 2));
							STRUCT_SET(BgL_newz00_2125, BgL_tmpz00_2563, BgL_arityz00_20);
						}
						{	/* Ast/find_gdefs.scm 44 */
							int BgL_tmpz00_2566;

							BgL_tmpz00_2566 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_2125, BgL_tmpz00_2566, BgL_accessz00_2124);
						}
						{	/* Ast/find_gdefs.scm 44 */
							int BgL_tmpz00_2569;

							BgL_tmpz00_2569 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_2125, BgL_tmpz00_2569, BgL_idz00_19);
						}
						BgL_defz00_1392 = BgL_newz00_2125;
				}}
				BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2 =
					MAKE_YOUNG_PAIR(BgL_defz00_1392,
					BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2);
				BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2 =
					MAKE_YOUNG_PAIR(BgL_idz00_19,
					BGl_za2allzd2definedzd2idza2z00zzast_findzd2gdefszd2);
				return BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_idz00_19,
					BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2, BgL_defz00_1392);
			}
		}

	}



/* defs->list */
	obj_t BGl_defszd2ze3listz31zzast_findzd2gdefszd2()
	{
		{	/* Ast/find_gdefs.scm 114 */
			{
				obj_t BgL_defsz00_1395;
				obj_t BgL_resz00_1396;

				BgL_defsz00_1395 = BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2;
				BgL_resz00_1396 = BNIL;
			BgL_zc3z04anonymousza31281ze3z87_1397:
				if (NULLP(BgL_defsz00_1395))
					{	/* Ast/find_gdefs.scm 117 */
						BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2 = BNIL;
						return BgL_resz00_1396;
					}
				else
					{	/* Ast/find_gdefs.scm 121 */
						obj_t BgL_defz00_1399;

						BgL_defz00_1399 = CAR(((obj_t) BgL_defsz00_1395));
						{	/* Ast/find_gdefs.scm 122 */
							obj_t BgL_arg1284z00_1400;
							obj_t BgL_arg1285z00_1401;

							BgL_arg1284z00_1400 = CDR(((obj_t) BgL_defsz00_1395));
							{	/* Ast/find_gdefs.scm 123 */
								obj_t BgL_arg1286z00_1402;

								{	/* Ast/find_gdefs.scm 123 */
									obj_t BgL_arg1287z00_1403;
									obj_t BgL_arg1288z00_1404;

									BgL_arg1287z00_1403 =
										STRUCT_REF(((obj_t) BgL_defz00_1399), (int) (((long) 0)));
									{	/* Ast/find_gdefs.scm 123 */
										obj_t BgL_arg1289z00_1405;
										obj_t BgL_arg1290z00_1406;

										BgL_arg1289z00_1405 =
											STRUCT_REF(((obj_t) BgL_defz00_1399), (int) (((long) 1)));
										BgL_arg1290z00_1406 =
											STRUCT_REF(((obj_t) BgL_defz00_1399), (int) (((long) 2)));
										BgL_arg1288z00_1404 =
											MAKE_YOUNG_PAIR(BgL_arg1289z00_1405, BgL_arg1290z00_1406);
									}
									BgL_arg1286z00_1402 =
										MAKE_YOUNG_PAIR(BgL_arg1287z00_1403, BgL_arg1288z00_1404);
								}
								BgL_arg1285z00_1401 =
									MAKE_YOUNG_PAIR(BgL_arg1286z00_1402, BgL_resz00_1396);
							}
							{
								obj_t BgL_resz00_2594;
								obj_t BgL_defsz00_2593;

								BgL_defsz00_2593 = BgL_arg1284z00_1400;
								BgL_resz00_2594 = BgL_arg1285z00_1401;
								BgL_resz00_1396 = BgL_resz00_2594;
								BgL_defsz00_1395 = BgL_defsz00_2593;
								goto BgL_zc3z04anonymousza31281ze3z87_1397;
							}
						}
					}
			}
		}

	}



/* find-global-defs */
	BGL_EXPORTED_DEF obj_t BGl_findzd2globalzd2defsz00zzast_findzd2gdefszd2(obj_t
		BgL_sexpza2za2_21)
	{
		{	/* Ast/find_gdefs.scm 139 */
			BGl_za2gdefszd2listza2zd2zzast_findzd2gdefszd2 = BNIL;
			BGl_loopze70ze7zzast_findzd2gdefszd2(BGl_proc2076z00zzast_findzd2gdefszd2,
				BGl_proc2077z00zzast_findzd2gdefszd2, BgL_sexpza2za2_21);
			BGl_loopze70ze7zzast_findzd2gdefszd2(BGl_proc2079z00zzast_findzd2gdefszd2,
				BGl_proc2078z00zzast_findzd2gdefszd2, BgL_sexpza2za2_21);
			return BGl_defszd2ze3listz31zzast_findzd2gdefszd2();
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzast_findzd2gdefszd2(obj_t BgL_actionzd2definezd2_2463,
		obj_t BgL_actionzd2bodyzd2_2462, obj_t BgL_sexpza2za2_1460)
	{
		{	/* Ast/find_gdefs.scm 155 */
		BGl_loopze70ze7zzast_findzd2gdefszd2:
			if (PAIRP(BgL_sexpza2za2_1460))
				{	/* Ast/find_gdefs.scm 158 */
					obj_t BgL_sexpz00_1463;

					BgL_sexpz00_1463 = CAR(BgL_sexpza2za2_1460);
					{
						obj_t BgL_varz00_1466;
						obj_t BgL_argsz00_1467;
						obj_t BgL_expz00_1468;
						obj_t BgL_varz00_1474;
						obj_t BgL_expz00_1475;

						if (PAIRP(BgL_sexpz00_1463))
							{	/* Ast/find_gdefs.scm 159 */
								if ((CAR(BgL_sexpz00_1463) == CNST_TABLE_REF(((long) 3))))
									{	/* Ast/find_gdefs.scm 159 */
										obj_t BgL_arg1322z00_1482;

										BgL_arg1322z00_1482 = CDR(BgL_sexpz00_1463);
										BGl_loopze70ze7zzast_findzd2gdefszd2
											(BgL_actionzd2definezd2_2463, BgL_actionzd2bodyzd2_2462,
											BgL_arg1322z00_1482);
										{
											obj_t BgL_sexpza2za2_2609;

											BgL_sexpza2za2_2609 = CDR(BgL_sexpza2za2_1460);
											BgL_sexpza2za2_1460 = BgL_sexpza2za2_2609;
											goto BGl_loopze70ze7zzast_findzd2gdefszd2;
										}
									}
								else
									{	/* Ast/find_gdefs.scm 159 */
										obj_t BgL_cdrzd2404zd2_1483;

										BgL_cdrzd2404zd2_1483 = CDR(BgL_sexpz00_1463);
										if ((CAR(BgL_sexpz00_1463) == CNST_TABLE_REF(((long) 4))))
											{	/* Ast/find_gdefs.scm 159 */
												if (PAIRP(BgL_cdrzd2404zd2_1483))
													{	/* Ast/find_gdefs.scm 159 */
														obj_t BgL_carzd2408zd2_1487;

														BgL_carzd2408zd2_1487 = CAR(BgL_cdrzd2404zd2_1483);
														if (PAIRP(BgL_carzd2408zd2_1487))
															{	/* Ast/find_gdefs.scm 159 */
																BgL_varz00_1466 = CAR(BgL_carzd2408zd2_1487);
																BgL_argsz00_1467 = CDR(BgL_carzd2408zd2_1487);
																BgL_expz00_1468 = CDR(BgL_cdrzd2404zd2_1483);
															BgL_tagzd2380zd2_1469:
																{	/* Ast/find_gdefs.scm 166 */
																	long BgL_arg1387z00_1528;

																	BgL_arg1387z00_1528 =
																		BGl_globalzd2arityzd2zztools_argsz00
																		(BgL_argsz00_1467);
																	PROCEDURE_L_ENTRY(BgL_actionzd2definezd2_2463)
																		(BgL_actionzd2definezd2_2463,
																		BgL_varz00_1466, BINT(BgL_arg1387z00_1528),
																		BgL_sexpz00_1463);
																}
																PROCEDURE_L_ENTRY(BgL_actionzd2bodyzd2_2462)
																	(BgL_actionzd2bodyzd2_2462, BgL_argsz00_1467,
																	BgL_expz00_1468, BgL_sexpz00_1463);
																{	/* Ast/find_gdefs.scm 168 */
																	obj_t BgL_arg1388z00_1529;

																	BgL_arg1388z00_1529 =
																		CDR(((obj_t) BgL_sexpza2za2_1460));
																	{
																		obj_t BgL_sexpza2za2_2637;

																		BgL_sexpza2za2_2637 = BgL_arg1388z00_1529;
																		BgL_sexpza2za2_1460 = BgL_sexpza2za2_2637;
																		goto BGl_loopze70ze7zzast_findzd2gdefszd2;
																	}
																}
															}
														else
															{	/* Ast/find_gdefs.scm 159 */
																obj_t BgL_arg1331z00_1493;
																obj_t BgL_arg1334z00_1494;

																BgL_arg1331z00_1493 =
																	CAR(((obj_t) BgL_cdrzd2404zd2_1483));
																BgL_arg1334z00_1494 =
																	CDR(((obj_t) BgL_cdrzd2404zd2_1483));
																BgL_varz00_1474 = BgL_arg1331z00_1493;
																BgL_expz00_1475 = BgL_arg1334z00_1494;
																PROCEDURE_L_ENTRY(BgL_actionzd2definezd2_2463)
																	(BgL_actionzd2definezd2_2463, BgL_varz00_1474,
																	BFALSE, BgL_sexpz00_1463);
																PROCEDURE_L_ENTRY(BgL_actionzd2bodyzd2_2462)
																	(BgL_actionzd2bodyzd2_2462, BNIL,
																	BgL_expz00_1475, BgL_sexpz00_1463);
																{	/* Ast/find_gdefs.scm 175 */
																	obj_t BgL_arg1396z00_1531;

																	BgL_arg1396z00_1531 =
																		CDR(((obj_t) BgL_sexpza2za2_1460));
																	{
																		obj_t BgL_sexpza2za2_2659;

																		BgL_sexpza2za2_2659 = BgL_arg1396z00_1531;
																		BgL_sexpza2za2_1460 = BgL_sexpza2za2_2659;
																		goto BGl_loopze70ze7zzast_findzd2gdefszd2;
																	}
																}
															}
													}
												else
													{	/* Ast/find_gdefs.scm 159 */
													BgL_tagzd2383zd2_1477:
														{	/* Ast/find_gdefs.scm 177 */
															obj_t BgL_arg1417z00_1532;

															{	/* Ast/find_gdefs.scm 177 */
																obj_t BgL_list1418z00_1533;

																BgL_list1418z00_1533 =
																	MAKE_YOUNG_PAIR(BgL_sexpz00_1463, BNIL);
																BgL_arg1417z00_1532 = BgL_list1418z00_1533;
															}
															PROCEDURE_L_ENTRY(BgL_actionzd2bodyzd2_2462)
																(BgL_actionzd2bodyzd2_2462, BNIL,
																BgL_arg1417z00_1532, BgL_sexpz00_1463);
														}
														{	/* Ast/find_gdefs.scm 178 */
															obj_t BgL_arg1421z00_1534;

															BgL_arg1421z00_1534 =
																CDR(((obj_t) BgL_sexpza2za2_1460));
															{
																obj_t BgL_sexpza2za2_2669;

																BgL_sexpza2za2_2669 = BgL_arg1421z00_1534;
																BgL_sexpza2za2_1460 = BgL_sexpza2za2_2669;
																goto BGl_loopze70ze7zzast_findzd2gdefszd2;
															}
														}
													}
											}
										else
											{	/* Ast/find_gdefs.scm 159 */
												if (
													(CAR(BgL_sexpz00_1463) == CNST_TABLE_REF(((long) 5))))
													{	/* Ast/find_gdefs.scm 159 */
														if (PAIRP(BgL_cdrzd2404zd2_1483))
															{	/* Ast/find_gdefs.scm 159 */
																obj_t BgL_carzd2477zd2_1499;

																BgL_carzd2477zd2_1499 =
																	CAR(BgL_cdrzd2404zd2_1483);
																if (PAIRP(BgL_carzd2477zd2_1499))
																	{
																		obj_t BgL_expz00_2683;
																		obj_t BgL_argsz00_2681;
																		obj_t BgL_varz00_2679;

																		BgL_varz00_2679 =
																			CAR(BgL_carzd2477zd2_1499);
																		BgL_argsz00_2681 =
																			CDR(BgL_carzd2477zd2_1499);
																		BgL_expz00_2683 =
																			CDR(BgL_cdrzd2404zd2_1483);
																		BgL_expz00_1468 = BgL_expz00_2683;
																		BgL_argsz00_1467 = BgL_argsz00_2681;
																		BgL_varz00_1466 = BgL_varz00_2679;
																		goto BgL_tagzd2380zd2_1469;
																	}
																else
																	{	/* Ast/find_gdefs.scm 159 */
																		goto BgL_tagzd2383zd2_1477;
																	}
															}
														else
															{	/* Ast/find_gdefs.scm 159 */
																goto BgL_tagzd2383zd2_1477;
															}
													}
												else
													{	/* Ast/find_gdefs.scm 159 */
														obj_t BgL_cdrzd2516zd2_1504;

														BgL_cdrzd2516zd2_1504 = CDR(BgL_sexpz00_1463);
														if (
															(CAR(BgL_sexpz00_1463) ==
																CNST_TABLE_REF(((long) 6))))
															{	/* Ast/find_gdefs.scm 159 */
																if (PAIRP(BgL_cdrzd2516zd2_1504))
																	{	/* Ast/find_gdefs.scm 159 */
																		obj_t BgL_carzd2520zd2_1508;

																		BgL_carzd2520zd2_1508 =
																			CAR(BgL_cdrzd2516zd2_1504);
																		if (PAIRP(BgL_carzd2520zd2_1508))
																			{
																				obj_t BgL_expz00_2699;
																				obj_t BgL_argsz00_2697;
																				obj_t BgL_varz00_2695;

																				BgL_varz00_2695 =
																					CAR(BgL_carzd2520zd2_1508);
																				BgL_argsz00_2697 =
																					CDR(BgL_carzd2520zd2_1508);
																				BgL_expz00_2699 =
																					CDR(BgL_cdrzd2516zd2_1504);
																				BgL_expz00_1468 = BgL_expz00_2699;
																				BgL_argsz00_1467 = BgL_argsz00_2697;
																				BgL_varz00_1466 = BgL_varz00_2695;
																				goto BgL_tagzd2380zd2_1469;
																			}
																		else
																			{	/* Ast/find_gdefs.scm 159 */
																				goto BgL_tagzd2383zd2_1477;
																			}
																	}
																else
																	{	/* Ast/find_gdefs.scm 159 */
																		goto BgL_tagzd2383zd2_1477;
																	}
															}
														else
															{	/* Ast/find_gdefs.scm 159 */
																if (
																	(CAR(BgL_sexpz00_1463) ==
																		CNST_TABLE_REF(((long) 7))))
																	{	/* Ast/find_gdefs.scm 159 */
																		if (PAIRP(BgL_cdrzd2516zd2_1504))
																			{	/* Ast/find_gdefs.scm 159 */
																				obj_t BgL_carzd2560zd2_1517;

																				BgL_carzd2560zd2_1517 =
																					CAR(BgL_cdrzd2516zd2_1504);
																				if (PAIRP(BgL_carzd2560zd2_1517))
																					{	/* Ast/find_gdefs.scm 159 */
																						obj_t BgL_arg1371z00_1520;
																						obj_t BgL_arg1372z00_1521;

																						BgL_arg1371z00_1520 =
																							CDR(BgL_carzd2560zd2_1517);
																						BgL_arg1372z00_1521 =
																							CDR(BgL_cdrzd2516zd2_1504);
																						PROCEDURE_L_ENTRY
																							(BgL_actionzd2bodyzd2_2462)
																							(BgL_actionzd2bodyzd2_2462,
																							BgL_arg1371z00_1520,
																							BgL_arg1372z00_1521,
																							BgL_sexpz00_1463);
																						{
																							obj_t BgL_sexpza2za2_2718;

																							BgL_sexpza2za2_2718 =
																								CDR(BgL_sexpza2za2_1460);
																							BgL_sexpza2za2_1460 =
																								BgL_sexpza2za2_2718;
																							goto
																								BGl_loopze70ze7zzast_findzd2gdefszd2;
																						}
																					}
																				else
																					{	/* Ast/find_gdefs.scm 159 */
																						goto BgL_tagzd2383zd2_1477;
																					}
																			}
																		else
																			{	/* Ast/find_gdefs.scm 159 */
																				goto BgL_tagzd2383zd2_1477;
																			}
																	}
																else
																	{	/* Ast/find_gdefs.scm 159 */
																		goto BgL_tagzd2383zd2_1477;
																	}
															}
													}
											}
									}
							}
						else
							{	/* Ast/find_gdefs.scm 159 */
								goto BgL_tagzd2383zd2_1477;
							}
					}
				}
			else
				{	/* Ast/find_gdefs.scm 156 */
					return CNST_TABLE_REF(((long) 8));
		}}

	}



/* &find-global-defs */
	obj_t BGl_z62findzd2globalzd2defsz62zzast_findzd2gdefszd2(obj_t
		BgL_envz00_2444, obj_t BgL_sexpza2za2_2445)
	{
		{	/* Ast/find_gdefs.scm 139 */
			return
				BGl_findzd2globalzd2defsz00zzast_findzd2gdefszd2(BgL_sexpza2za2_2445);
		}

	}



/* &<@anonymous:1298> */
	obj_t BGl_z62zc3z04anonymousza31298ze3ze5zzast_findzd2gdefszd2(obj_t
		BgL_envz00_2446, obj_t BgL_argsz00_2447, obj_t BgL_expz00_2448,
		obj_t BgL_defz00_2449)
	{
		{	/* Ast/find_gdefs.scm 187 */
			return
				BBOOL(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2(BgL_expz00_2448,
					BGl_pushzd2argszd2zzast_findzd2gdefszd2(BgL_argsz00_2447, BNIL,
						BGl_findzd2locationzd2zztools_locationz00(BgL_defz00_2449))));
		}

	}



/* &<@anonymous:1297> */
	obj_t BGl_z62zc3z04anonymousza31297ze3ze5zzast_findzd2gdefszd2(obj_t
		BgL_envz00_2450, obj_t BgL_xz00_2451, obj_t BgL_yz00_2452,
		obj_t BgL_expz00_2453)
	{
		{	/* Ast/find_gdefs.scm 185 */
			return CNST_TABLE_REF(((long) 9));
		}

	}



/* &<@anonymous:1292> */
	obj_t BGl_z62zc3z04anonymousza31292ze3ze5zzast_findzd2gdefszd2(obj_t
		BgL_envz00_2454, obj_t BgL_argsz00_2455, obj_t BgL_expz00_2456,
		obj_t BgL_defz00_2457)
	{
		{	/* Ast/find_gdefs.scm 182 */
			return CNST_TABLE_REF(((long) 9));
		}

	}



/* &define-global */
	obj_t BGl_z62definezd2globalzb0zzast_findzd2gdefszd2(obj_t BgL_envz00_2458,
		obj_t BgL_varz00_2459, obj_t BgL_arityz00_2460, obj_t BgL_expz00_2461)
	{
		{	/* Ast/find_gdefs.scm 152 */
			{
				obj_t BgL_prezd2idzd2_2483;

				if (PAIRP(BgL_varz00_2459))
					{	/* Ast/find_gdefs.scm 152 */
						obj_t BgL_cdrzd2367zd2_2487;

						BgL_cdrzd2367zd2_2487 = CDR(BgL_varz00_2459);
						if ((CAR(BgL_varz00_2459) == CNST_TABLE_REF(((long) 10))))
							{	/* Ast/find_gdefs.scm 152 */
								if (PAIRP(BgL_cdrzd2367zd2_2487))
									{	/* Ast/find_gdefs.scm 152 */
										obj_t BgL_cdrzd2370zd2_2488;

										BgL_cdrzd2370zd2_2488 = CDR(BgL_cdrzd2367zd2_2487);
										if (PAIRP(BgL_cdrzd2370zd2_2488))
											{	/* Ast/find_gdefs.scm 152 */
												if (NULLP(CDR(BgL_cdrzd2370zd2_2488)))
													{	/* Ast/find_gdefs.scm 152 */
														BgL_prezd2idzd2_2483 = CAR(BgL_cdrzd2367zd2_2487);
													BgL_tagzd2359zd2_2482:
														{	/* Ast/find_gdefs.scm 146 */
															obj_t BgL_idz00_2484;

															BgL_idz00_2484 =
																BGl_idzd2ofzd2idz00zzast_identz00
																(BgL_prezd2idzd2_2483,
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_expz00_2461));
															{	/* Ast/find_gdefs.scm 146 */
																obj_t BgL_oldzd2defzd2_2485;

																BgL_oldzd2defzd2_2485 =
																	BGl_getpropz00zz__r4_symbols_6_4z00
																	(BgL_idz00_2484,
																	BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2);
																{	/* Ast/find_gdefs.scm 147 */

																	{	/* Ast/find_gdefs.scm 148 */
																		bool_t BgL_test2144z00_2746;

																		if (STRUCTP(BgL_oldzd2defzd2_2485))
																			{	/* Ast/find_gdefs.scm 44 */
																				BgL_test2144z00_2746 =
																					(STRUCT_KEY(BgL_oldzd2defzd2_2485) ==
																					CNST_TABLE_REF(((long) 1)));
																			}
																		else
																			{	/* Ast/find_gdefs.scm 44 */
																				BgL_test2144z00_2746 = ((bool_t) 0);
																			}
																		if (BgL_test2144z00_2746)
																			{	/* Ast/find_gdefs.scm 149 */
																				obj_t BgL_list1313z00_2486;

																				BgL_list1313z00_2486 =
																					MAKE_YOUNG_PAIR(BNIL, BNIL);
																				return
																					BGl_userzd2errorzd2zztools_errorz00
																					(BgL_varz00_2459,
																					BGl_string2080z00zzast_findzd2gdefszd2,
																					BgL_expz00_2461,
																					BgL_list1313z00_2486);
																			}
																		else
																			{	/* Ast/find_gdefs.scm 148 */
																				return
																					BGl_bindzd2globalzd2defz12z12zzast_findzd2gdefszd2
																					(BgL_idz00_2484, BgL_arityz00_2460);
																			}
																	}
																}
															}
														}
													}
												else
													{
														obj_t BgL_prezd2idzd2_2756;

														BgL_prezd2idzd2_2756 = BgL_varz00_2459;
														BgL_prezd2idzd2_2483 = BgL_prezd2idzd2_2756;
														goto BgL_tagzd2359zd2_2482;
													}
											}
										else
											{
												obj_t BgL_prezd2idzd2_2757;

												BgL_prezd2idzd2_2757 = BgL_varz00_2459;
												BgL_prezd2idzd2_2483 = BgL_prezd2idzd2_2757;
												goto BgL_tagzd2359zd2_2482;
											}
									}
								else
									{
										obj_t BgL_prezd2idzd2_2758;

										BgL_prezd2idzd2_2758 = BgL_varz00_2459;
										BgL_prezd2idzd2_2483 = BgL_prezd2idzd2_2758;
										goto BgL_tagzd2359zd2_2482;
									}
							}
						else
							{
								obj_t BgL_prezd2idzd2_2759;

								BgL_prezd2idzd2_2759 = BgL_varz00_2459;
								BgL_prezd2idzd2_2483 = BgL_prezd2idzd2_2759;
								goto BgL_tagzd2359zd2_2482;
							}
					}
				else
					{
						obj_t BgL_prezd2idzd2_2760;

						BgL_prezd2idzd2_2760 = BgL_varz00_2459;
						BgL_prezd2idzd2_2483 = BgL_prezd2idzd2_2760;
						goto BgL_tagzd2359zd2_2482;
					}
			}
		}

	}



/* find-mutations! */
	bool_t BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2(obj_t BgL_expza2za2_22,
		obj_t BgL_stackz00_23)
	{
		{	/* Ast/find_gdefs.scm 195 */
			{
				obj_t BgL_l1229z00_1539;

				BgL_l1229z00_1539 = BgL_expza2za2_22;
			BgL_zc3z04anonymousza31422ze3z87_1540:
				if (PAIRP(BgL_l1229z00_1539))
					{	/* Ast/find_gdefs.scm 196 */
						BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2(CAR
							(BgL_l1229z00_1539), BgL_stackz00_23);
						{
							obj_t BgL_l1229z00_2765;

							BgL_l1229z00_2765 = CDR(BgL_l1229z00_1539);
							BgL_l1229z00_1539 = BgL_l1229z00_2765;
							goto BgL_zc3z04anonymousza31422ze3z87_1540;
						}
					}
				else
					{	/* Ast/find_gdefs.scm 196 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* find-1-mutations! */
	obj_t BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2(obj_t BgL_expz00_24,
		obj_t BgL_stackz00_25)
	{
		{	/* Ast/find_gdefs.scm 201 */
		BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2:
			{
				obj_t BgL_valz00_1580;
				obj_t BgL_clausesz00_1581;
				obj_t BgL_bindingsz00_1568;
				obj_t BgL_bodyz00_1569;
				obj_t BgL_bindingsz00_1565;
				obj_t BgL_bodyz00_1566;
				obj_t BgL_bindingsz00_1562;
				obj_t BgL_bodyz00_1563;
				obj_t BgL_idz00_1558;
				obj_t BgL_modulez00_1559;
				obj_t BgL_valz00_1560;
				obj_t BgL_idz00_1555;
				obj_t BgL_valz00_1556;

				if (PAIRP(BgL_expz00_24))
					{	/* Ast/find_gdefs.scm 202 */
						obj_t BgL_cdrzd2663zd2_1600;

						BgL_cdrzd2663zd2_1600 = CDR(BgL_expz00_24);
						if ((CAR(BgL_expz00_24) == CNST_TABLE_REF(((long) 15))))
							{	/* Ast/find_gdefs.scm 202 */
								if (PAIRP(BgL_cdrzd2663zd2_1600))
									{	/* Ast/find_gdefs.scm 202 */
										if (NULLP(CDR(BgL_cdrzd2663zd2_1600)))
											{	/* Ast/find_gdefs.scm 202 */
												return CNST_TABLE_REF(((long) 8));
											}
										else
											{	/* Ast/find_gdefs.scm 202 */
											BgL_tagzd2631zd2_1597:
												{	/* Ast/find_gdefs.scm 300 */
													obj_t BgL_callerz00_1874;
													obj_t BgL_locz00_1875;

													BgL_callerz00_1874 = CAR(((obj_t) BgL_expz00_24));
													BgL_locz00_1875 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_expz00_24);
													if (SYMBOLP(BgL_callerz00_1874))
														{	/* Ast/find_gdefs.scm 304 */
															obj_t BgL_pidz00_1877;

															BgL_pidz00_1877 =
																BGl_parsezd2idzd2zzast_identz00
																(BgL_callerz00_1874, BgL_locz00_1875);
															{	/* Ast/find_gdefs.scm 304 */
																obj_t BgL_idz00_1878;

																BgL_idz00_1878 = CAR(BgL_pidz00_1877);
																{	/* Ast/find_gdefs.scm 306 */

																	if (
																		(BgL_idz00_1878 ==
																			CNST_TABLE_REF(((long) 12))))
																		{	/* Ast/find_gdefs.scm 307 */
																			return CNST_TABLE_REF(((long) 8));
																		}
																	else
																		{	/* Ast/find_gdefs.scm 307 */
																			if (
																				(BgL_idz00_1878 ==
																					CNST_TABLE_REF(((long) 13))))
																				{	/* Ast/find_gdefs.scm 307 */
																					return CNST_TABLE_REF(((long) 8));
																				}
																			else
																				{	/* Ast/find_gdefs.scm 307 */
																					if (
																						(BgL_idz00_1878 ==
																							CNST_TABLE_REF(((long) 14))))
																						{

																							if (PAIRP(BgL_expz00_24))
																								{	/* Ast/find_gdefs.scm 313 */
																									obj_t BgL_cdrzd23454zd2_1890;

																									BgL_cdrzd23454zd2_1890 =
																										CDR(BgL_expz00_24);
																									if (PAIRP
																										(BgL_cdrzd23454zd2_1890))
																										{	/* Ast/find_gdefs.scm 313 */
																											obj_t BgL_arg1893z00_1892;
																											obj_t BgL_arg1895z00_1893;

																											BgL_arg1893z00_1892 =
																												CAR
																												(BgL_cdrzd23454zd2_1890);
																											BgL_arg1895z00_1893 =
																												CDR
																												(BgL_cdrzd23454zd2_1890);
																											{	/* Ast/find_gdefs.scm 315 */
																												obj_t
																													BgL_arg1896z00_2301;
																												BgL_arg1896z00_2301 =
																													BGl_pushzd2argszd2zzast_findzd2gdefszd2
																													(BgL_arg1893z00_1892,
																													BgL_stackz00_25,
																													BgL_locz00_1875);
																												return
																													BBOOL
																													(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																													(BgL_arg1895z00_1893,
																														BgL_arg1896z00_2301));
																											}
																										}
																									else
																										{	/* Ast/find_gdefs.scm 313 */
																										BgL_tagzd23447zd2_1887:
																											{	/* Ast/find_gdefs.scm 317 */
																												obj_t
																													BgL_list1897z00_1895;
																												BgL_list1897z00_1895 =
																													MAKE_YOUNG_PAIR(BNIL,
																													BNIL);
																												return
																													BGl_userzd2errorzd2zztools_errorz00
																													(BGl_string2084z00zzast_findzd2gdefszd2,
																													BGl_string2085z00zzast_findzd2gdefszd2,
																													BgL_expz00_24,
																													BgL_list1897z00_1895);
																											}
																										}
																								}
																							else
																								{	/* Ast/find_gdefs.scm 313 */
																									goto BgL_tagzd23447zd2_1887;
																								}
																						}
																					else
																						{	/* Ast/find_gdefs.scm 307 */
																							return
																								BBOOL
																								(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																								(BgL_expz00_24,
																									BgL_stackz00_25));
																						}
																				}
																		}
																}
															}
														}
													else
														{	/* Ast/find_gdefs.scm 302 */
															return
																BBOOL
																(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																(BgL_expz00_24, BgL_stackz00_25));
														}
												}
											}
									}
								else
									{	/* Ast/find_gdefs.scm 202 */
										goto BgL_tagzd2631zd2_1597;
									}
							}
						else
							{	/* Ast/find_gdefs.scm 202 */
								if ((CAR(BgL_expz00_24) == CNST_TABLE_REF(((long) 12))))
									{	/* Ast/find_gdefs.scm 202 */
										if (PAIRP(BgL_cdrzd2663zd2_1600))
											{	/* Ast/find_gdefs.scm 202 */
												if (NULLP(CDR(BgL_cdrzd2663zd2_1600)))
													{	/* Ast/find_gdefs.scm 202 */
														return CNST_TABLE_REF(((long) 8));
													}
												else
													{	/* Ast/find_gdefs.scm 202 */
														goto BgL_tagzd2631zd2_1597;
													}
											}
										else
											{	/* Ast/find_gdefs.scm 202 */
												goto BgL_tagzd2631zd2_1597;
											}
									}
								else
									{	/* Ast/find_gdefs.scm 202 */
										obj_t BgL_cdrzd21347zd2_1614;

										BgL_cdrzd21347zd2_1614 = CDR(BgL_expz00_24);
										if ((CAR(BgL_expz00_24) == CNST_TABLE_REF(((long) 13))))
											{	/* Ast/find_gdefs.scm 202 */
												if (PAIRP(BgL_cdrzd21347zd2_1614))
													{	/* Ast/find_gdefs.scm 202 */
														if (NULLP(CDR(BgL_cdrzd21347zd2_1614)))
															{	/* Ast/find_gdefs.scm 202 */
																return CNST_TABLE_REF(((long) 8));
															}
														else
															{	/* Ast/find_gdefs.scm 202 */
																goto BgL_tagzd2631zd2_1597;
															}
													}
												else
													{	/* Ast/find_gdefs.scm 202 */
														goto BgL_tagzd2631zd2_1597;
													}
											}
										else
											{	/* Ast/find_gdefs.scm 202 */
												if ((CAR(BgL_expz00_24) == CNST_TABLE_REF(((long) 16))))
													{	/* Ast/find_gdefs.scm 202 */
														if (PAIRP(BgL_cdrzd21347zd2_1614))
															{	/* Ast/find_gdefs.scm 202 */
																obj_t BgL_cdrzd21659zd2_1625;

																BgL_cdrzd21659zd2_1625 =
																	CDR(BgL_cdrzd21347zd2_1614);
																if (PAIRP(BgL_cdrzd21659zd2_1625))
																	{	/* Ast/find_gdefs.scm 202 */
																		obj_t BgL_arg1521z00_1628;

																		BgL_arg1521z00_1628 =
																			CDR(BgL_cdrzd21659zd2_1625);
																		return
																			BBOOL
																			(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																			(BgL_arg1521z00_1628, BgL_stackz00_25));
																	}
																else
																	{	/* Ast/find_gdefs.scm 202 */
																		goto BgL_tagzd2631zd2_1597;
																	}
															}
														else
															{	/* Ast/find_gdefs.scm 202 */
																goto BgL_tagzd2631zd2_1597;
															}
													}
												else
													{	/* Ast/find_gdefs.scm 202 */
														if (
															(CAR(BgL_expz00_24) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Ast/find_gdefs.scm 202 */
																obj_t BgL_arg1536z00_1631;

																BgL_arg1536z00_1631 = CDR(BgL_expz00_24);
																return
																	BBOOL
																	(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																	(BgL_arg1536z00_1631, BgL_stackz00_25));
															}
														else
															{	/* Ast/find_gdefs.scm 202 */
																obj_t BgL_cdrzd21957zd2_1632;

																BgL_cdrzd21957zd2_1632 = CDR(BgL_expz00_24);
																if (
																	(CAR(BgL_expz00_24) ==
																		CNST_TABLE_REF(((long) 17))))
																	{	/* Ast/find_gdefs.scm 202 */
																		if (PAIRP(BgL_cdrzd21957zd2_1632))
																			{	/* Ast/find_gdefs.scm 202 */
																				obj_t BgL_carzd21960zd2_1636;

																				BgL_carzd21960zd2_1636 =
																					CAR(BgL_cdrzd21957zd2_1632);
																				if (SYMBOLP(BgL_carzd21960zd2_1636))
																					{	/* Ast/find_gdefs.scm 202 */
																						BgL_idz00_1555 =
																							BgL_carzd21960zd2_1636;
																						BgL_valz00_1556 =
																							CDR(BgL_cdrzd21957zd2_1632);
																						BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																							(BgL_valz00_1556,
																							BgL_stackz00_25);
																						if (CBOOL
																							(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_idz00_1555,
																									BgL_stackz00_25)))
																							{	/* Ast/find_gdefs.scm 217 */
																								return BFALSE;
																							}
																						else
																							{	/* Ast/find_gdefs.scm 218 */
																								obj_t BgL_defz00_1757;

																								BgL_defz00_1757 =
																									BGl_getpropz00zz__r4_symbols_6_4z00
																									(BgL_idz00_1555,
																									BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2);
																								{	/* Ast/find_gdefs.scm 219 */
																									bool_t BgL_test2171z00_2869;

																									if (STRUCTP(BgL_defz00_1757))
																										{	/* Ast/find_gdefs.scm 44 */
																											BgL_test2171z00_2869 =
																												(STRUCT_KEY
																												(BgL_defz00_1757) ==
																												CNST_TABLE_REF(((long)
																														1)));
																										}
																									else
																										{	/* Ast/find_gdefs.scm 44 */
																											BgL_test2171z00_2869 =
																												((bool_t) 0);
																										}
																									if (BgL_test2171z00_2869)
																										{	/* Ast/find_gdefs.scm 220 */
																											obj_t BgL_vz00_2211;

																											BgL_vz00_2211 =
																												CNST_TABLE_REF(((long)
																													11));
																											{	/* Ast/find_gdefs.scm 44 */
																												int BgL_tmpz00_2876;

																												BgL_tmpz00_2876 =
																													(int) (((long) 1));
																												return
																													STRUCT_SET
																													(BgL_defz00_1757,
																													BgL_tmpz00_2876,
																													BgL_vz00_2211);
																											}
																										}
																									else
																										{	/* Ast/find_gdefs.scm 219 */
																											return BFALSE;
																										}
																								}
																							}
																					}
																				else
																					{	/* Ast/find_gdefs.scm 202 */
																						obj_t BgL_carzd21985zd2_1640;

																						BgL_carzd21985zd2_1640 =
																							CAR(
																							((obj_t) BgL_cdrzd21957zd2_1632));
																						if (PAIRP(BgL_carzd21985zd2_1640))
																							{	/* Ast/find_gdefs.scm 202 */
																								obj_t BgL_cdrzd21990zd2_1642;

																								BgL_cdrzd21990zd2_1642 =
																									CDR(BgL_carzd21985zd2_1640);
																								if (
																									(CAR(BgL_carzd21985zd2_1640)
																										==
																										CNST_TABLE_REF(((long)
																												10))))
																									{	/* Ast/find_gdefs.scm 202 */
																										if (PAIRP
																											(BgL_cdrzd21990zd2_1642))
																											{	/* Ast/find_gdefs.scm 202 */
																												obj_t
																													BgL_carzd21993zd2_1646;
																												obj_t
																													BgL_cdrzd21994zd2_1647;
																												BgL_carzd21993zd2_1646 =
																													CAR
																													(BgL_cdrzd21990zd2_1642);
																												BgL_cdrzd21994zd2_1647 =
																													CDR
																													(BgL_cdrzd21990zd2_1642);
																												if (SYMBOLP
																													(BgL_carzd21993zd2_1646))
																													{	/* Ast/find_gdefs.scm 202 */
																														if (PAIRP
																															(BgL_cdrzd21994zd2_1647))
																															{	/* Ast/find_gdefs.scm 202 */
																																obj_t
																																	BgL_carzd21999zd2_1650;
																																BgL_carzd21999zd2_1650
																																	=
																																	CAR
																																	(BgL_cdrzd21994zd2_1647);
																																if (SYMBOLP
																																	(BgL_carzd21999zd2_1650))
																																	{	/* Ast/find_gdefs.scm 202 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd21994zd2_1647)))
																																			{	/* Ast/find_gdefs.scm 202 */
																																				obj_t
																																					BgL_arg1573z00_1654;
																																				BgL_arg1573z00_1654
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_cdrzd21957zd2_1632));
																																				BgL_idz00_1558
																																					=
																																					BgL_carzd21993zd2_1646;
																																				BgL_modulez00_1559
																																					=
																																					BgL_carzd21999zd2_1650;
																																				BgL_valz00_1560
																																					=
																																					BgL_arg1573z00_1654;
																																				BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																					(BgL_valz00_1560,
																																					BgL_stackz00_25);
																																				if (
																																					(BgL_modulez00_1559
																																						==
																																						BGl_za2moduleza2z00zzmodule_modulez00))
																																					{	/* Ast/find_gdefs.scm 224 */
																																						obj_t
																																							BgL_defz00_1760;
																																						BgL_defz00_1760
																																							=
																																							BGl_getpropz00zz__r4_symbols_6_4z00
																																							(BgL_idz00_1558,
																																							BGl_za2gdefzd2keyza2zd2zzast_findzd2gdefszd2);
																																						{	/* Ast/find_gdefs.scm 225 */
																																							bool_t
																																								BgL_test2181z00_2909;
																																							if (STRUCTP(BgL_defz00_1760))
																																								{	/* Ast/find_gdefs.scm 44 */
																																									BgL_test2181z00_2909
																																										=
																																										(STRUCT_KEY
																																										(BgL_defz00_1760)
																																										==
																																										CNST_TABLE_REF
																																										(((long) 1)));
																																								}
																																							else
																																								{	/* Ast/find_gdefs.scm 44 */
																																									BgL_test2181z00_2909
																																										=
																																										(
																																										(bool_t)
																																										0);
																																								}
																																							if (BgL_test2181z00_2909)
																																								{	/* Ast/find_gdefs.scm 226 */
																																									obj_t
																																										BgL_vz00_2218;
																																									BgL_vz00_2218
																																										=
																																										CNST_TABLE_REF
																																										(
																																										((long) 11));
																																									{	/* Ast/find_gdefs.scm 44 */
																																										int
																																											BgL_tmpz00_2916;
																																										BgL_tmpz00_2916
																																											=
																																											(int)
																																											(
																																											((long) 1));
																																										return
																																											STRUCT_SET
																																											(BgL_defz00_1760,
																																											BgL_tmpz00_2916,
																																											BgL_vz00_2218);
																																									}
																																								}
																																							else
																																								{	/* Ast/find_gdefs.scm 225 */
																																									return
																																										BFALSE;
																																								}
																																						}
																																					}
																																				else
																																					{	/* Ast/find_gdefs.scm 223 */
																																						return
																																							BFALSE;
																																					}
																																			}
																																		else
																																			{	/* Ast/find_gdefs.scm 202 */
																																				goto
																																					BgL_tagzd2631zd2_1597;
																																			}
																																	}
																																else
																																	{	/* Ast/find_gdefs.scm 202 */
																																		goto
																																			BgL_tagzd2631zd2_1597;
																																	}
																															}
																														else
																															{	/* Ast/find_gdefs.scm 202 */
																																goto
																																	BgL_tagzd2631zd2_1597;
																															}
																													}
																												else
																													{	/* Ast/find_gdefs.scm 202 */
																														goto
																															BgL_tagzd2631zd2_1597;
																													}
																											}
																										else
																											{	/* Ast/find_gdefs.scm 202 */
																												goto
																													BgL_tagzd2631zd2_1597;
																											}
																									}
																								else
																									{	/* Ast/find_gdefs.scm 202 */
																										goto BgL_tagzd2631zd2_1597;
																									}
																							}
																						else
																							{	/* Ast/find_gdefs.scm 202 */
																								goto BgL_tagzd2631zd2_1597;
																							}
																					}
																			}
																		else
																			{	/* Ast/find_gdefs.scm 202 */
																				goto BgL_tagzd2631zd2_1597;
																			}
																	}
																else
																	{	/* Ast/find_gdefs.scm 202 */
																		if (
																			(CAR(BgL_expz00_24) ==
																				CNST_TABLE_REF(((long) 18))))
																			{	/* Ast/find_gdefs.scm 202 */
																				if (PAIRP(BgL_cdrzd21957zd2_1632))
																					{	/* Ast/find_gdefs.scm 202 */
																						obj_t BgL_arg1588z00_1661;
																						obj_t BgL_arg1589z00_1662;

																						BgL_arg1588z00_1661 =
																							CAR(BgL_cdrzd21957zd2_1632);
																						BgL_arg1589z00_1662 =
																							CDR(BgL_cdrzd21957zd2_1632);
																						{	/* Ast/find_gdefs.scm 202 */
																							bool_t BgL_tmpz00_2927;

																							BgL_bindingsz00_1562 =
																								BgL_arg1588z00_1661;
																							BgL_bodyz00_1563 =
																								BgL_arg1589z00_1662;
																							{	/* Ast/find_gdefs.scm 228 */
																								obj_t BgL_newzd2stackzd2_1762;

																								{
																									obj_t BgL_stackz00_1773;
																									obj_t BgL_bindingsz00_1774;

																									BgL_stackz00_1773 =
																										BgL_stackz00_25;
																									BgL_bindingsz00_1774 =
																										BgL_bindingsz00_1562;
																								BgL_zc3z04anonymousza31772ze3z87_1775:
																									if (NULLP
																										(BgL_bindingsz00_1774))
																										{	/* Ast/find_gdefs.scm 231 */
																											BgL_newzd2stackzd2_1762 =
																												BgL_stackz00_1773;
																										}
																									else
																										{	/* Ast/find_gdefs.scm 231 */
																											if (PAIRP
																												(BgL_bindingsz00_1774))
																												{	/* Ast/find_gdefs.scm 235 */
																													bool_t
																														BgL_test2187z00_2932;
																													{	/* Ast/find_gdefs.scm 235 */
																														obj_t
																															BgL_tmpz00_2933;
																														BgL_tmpz00_2933 =
																															CAR
																															(BgL_bindingsz00_1774);
																														BgL_test2187z00_2932
																															=
																															PAIRP
																															(BgL_tmpz00_2933);
																													}
																													if (BgL_test2187z00_2932)
																														{	/* Ast/find_gdefs.scm 241 */
																															obj_t
																																BgL_arg1778z00_1780;
																															obj_t
																																BgL_arg1779z00_1781;
																															BgL_arg1778z00_1780
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_idzd2ofzd2idz00zzast_identz00
																																(CAR(CAR
																																		(BgL_bindingsz00_1774)),
																																	BGl_findzd2locationzd2zztools_locationz00
																																	(BgL_expz00_24)),
																																BgL_stackz00_1773);
																															BgL_arg1779z00_1781
																																=
																																CDR
																																(BgL_bindingsz00_1774);
																															{
																																obj_t
																																	BgL_bindingsz00_2943;
																																obj_t
																																	BgL_stackz00_2942;
																																BgL_stackz00_2942
																																	=
																																	BgL_arg1778z00_1780;
																																BgL_bindingsz00_2943
																																	=
																																	BgL_arg1779z00_1781;
																																BgL_bindingsz00_1774
																																	=
																																	BgL_bindingsz00_2943;
																																BgL_stackz00_1773
																																	=
																																	BgL_stackz00_2942;
																																goto
																																	BgL_zc3z04anonymousza31772ze3z87_1775;
																															}
																														}
																													else
																														{	/* Ast/find_gdefs.scm 236 */
																															obj_t
																																BgL_arg1798z00_1786;
																															obj_t
																																BgL_arg1801z00_1787;
																															BgL_arg1798z00_1786
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_idzd2ofzd2idz00zzast_identz00
																																(CAR
																																	(BgL_bindingsz00_1774),
																																	BGl_findzd2locationzd2zztools_locationz00
																																	(BgL_expz00_24)),
																																BgL_stackz00_1773);
																															BgL_arg1801z00_1787
																																=
																																CDR
																																(BgL_bindingsz00_1774);
																															{
																																obj_t
																																	BgL_bindingsz00_2950;
																																obj_t
																																	BgL_stackz00_2949;
																																BgL_stackz00_2949
																																	=
																																	BgL_arg1798z00_1786;
																																BgL_bindingsz00_2950
																																	=
																																	BgL_arg1801z00_1787;
																																BgL_bindingsz00_1774
																																	=
																																	BgL_bindingsz00_2950;
																																BgL_stackz00_1773
																																	=
																																	BgL_stackz00_2949;
																																goto
																																	BgL_zc3z04anonymousza31772ze3z87_1775;
																															}
																														}
																												}
																											else
																												{	/* Ast/find_gdefs.scm 234 */
																													obj_t
																														BgL_list1821z00_1792;
																													BgL_list1821z00_1792 =
																														MAKE_YOUNG_PAIR
																														(BNIL, BNIL);
																													BgL_newzd2stackzd2_1762
																														=
																														BGl_userzd2errorzd2zztools_errorz00
																														(BGl_string2081z00zzast_findzd2gdefszd2,
																														BGl_string2082z00zzast_findzd2gdefszd2,
																														BgL_expz00_24,
																														BgL_list1821z00_1792);
																												}
																										}
																								}
																								BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																									(BgL_bodyz00_1563,
																									BgL_newzd2stackzd2_1762);
																								if (PAIRP(BgL_bindingsz00_1562))
																									{
																										obj_t BgL_l1231z00_1765;

																										BgL_l1231z00_1765 =
																											BgL_bindingsz00_1562;
																									BgL_zc3z04anonymousza31763ze3z87_1766:
																										if (PAIRP
																											(BgL_l1231z00_1765))
																											{	/* Ast/find_gdefs.scm 247 */
																												{	/* Ast/find_gdefs.scm 247 */
																													obj_t BgL_bz00_1768;

																													BgL_bz00_1768 =
																														CAR
																														(BgL_l1231z00_1765);
																													{	/* Ast/find_gdefs.scm 247 */
																														obj_t
																															BgL_arg1768z00_1769;
																														BgL_arg1768z00_1769
																															=
																															CDR(((obj_t)
																																BgL_bz00_1768));
																														BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																															(BgL_arg1768z00_1769,
																															BgL_stackz00_25);
																													}
																												}
																												{
																													obj_t
																														BgL_l1231z00_2962;
																													BgL_l1231z00_2962 =
																														CDR
																														(BgL_l1231z00_1765);
																													BgL_l1231z00_1765 =
																														BgL_l1231z00_2962;
																													goto
																														BgL_zc3z04anonymousza31763ze3z87_1766;
																												}
																											}
																										else
																											{	/* Ast/find_gdefs.scm 247 */
																												BgL_tmpz00_2927 =
																													((bool_t) 1);
																											}
																									}
																								else
																									{	/* Ast/find_gdefs.scm 246 */
																										BgL_tmpz00_2927 =
																											((bool_t) 0);
																									}
																							}
																							return BBOOL(BgL_tmpz00_2927);
																						}
																					}
																				else
																					{	/* Ast/find_gdefs.scm 202 */
																						goto BgL_tagzd2631zd2_1597;
																					}
																			}
																		else
																			{	/* Ast/find_gdefs.scm 202 */
																				obj_t BgL_cdrzd22881zd2_1663;

																				BgL_cdrzd22881zd2_1663 =
																					CDR(BgL_expz00_24);
																				if (
																					(CAR(BgL_expz00_24) ==
																						CNST_TABLE_REF(((long) 19))))
																					{	/* Ast/find_gdefs.scm 202 */
																						if (PAIRP(BgL_cdrzd22881zd2_1663))
																							{	/* Ast/find_gdefs.scm 202 */
																								obj_t BgL_arg1597z00_1667;
																								obj_t BgL_arg1599z00_1668;

																								BgL_arg1597z00_1667 =
																									CAR(BgL_cdrzd22881zd2_1663);
																								BgL_arg1599z00_1668 =
																									CDR(BgL_cdrzd22881zd2_1663);
																								{	/* Ast/find_gdefs.scm 202 */
																									bool_t BgL_tmpz00_2974;

																									BgL_bindingsz00_1565 =
																										BgL_arg1597z00_1667;
																									BgL_bodyz00_1566 =
																										BgL_arg1599z00_1668;
																									{	/* Ast/find_gdefs.scm 249 */
																										obj_t
																											BgL_newzd2stackzd2_1794;
																										{
																											obj_t BgL_stackz00_1805;
																											obj_t
																												BgL_bindingsz00_1806;
																											BgL_stackz00_1805 =
																												BgL_stackz00_25;
																											BgL_bindingsz00_1806 =
																												BgL_bindingsz00_1565;
																										BgL_zc3z04anonymousza31828ze3z87_1807:
																											if (NULLP
																												(BgL_bindingsz00_1806))
																												{	/* Ast/find_gdefs.scm 252 */
																													BgL_newzd2stackzd2_1794
																														= BgL_stackz00_1805;
																												}
																											else
																												{	/* Ast/find_gdefs.scm 252 */
																													if (PAIRP
																														(BgL_bindingsz00_1806))
																														{	/* Ast/find_gdefs.scm 256 */
																															bool_t
																																BgL_test2194z00_2979;
																															{	/* Ast/find_gdefs.scm 256 */
																																obj_t
																																	BgL_tmpz00_2980;
																																BgL_tmpz00_2980
																																	=
																																	CAR
																																	(BgL_bindingsz00_1806);
																																BgL_test2194z00_2979
																																	=
																																	PAIRP
																																	(BgL_tmpz00_2980);
																															}
																															if (BgL_test2194z00_2979)
																																{	/* Ast/find_gdefs.scm 262 */
																																	obj_t
																																		BgL_arg1833z00_1812;
																																	obj_t
																																		BgL_arg1835z00_1813;
																																	BgL_arg1833z00_1812
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_idzd2ofzd2idz00zzast_identz00
																																		(CAR(CAR
																																				(BgL_bindingsz00_1806)),
																																			BGl_findzd2locationzd2zztools_locationz00
																																			(BgL_expz00_24)),
																																		BgL_stackz00_1805);
																																	BgL_arg1835z00_1813
																																		=
																																		CDR
																																		(BgL_bindingsz00_1806);
																																	{
																																		obj_t
																																			BgL_bindingsz00_2990;
																																		obj_t
																																			BgL_stackz00_2989;
																																		BgL_stackz00_2989
																																			=
																																			BgL_arg1833z00_1812;
																																		BgL_bindingsz00_2990
																																			=
																																			BgL_arg1835z00_1813;
																																		BgL_bindingsz00_1806
																																			=
																																			BgL_bindingsz00_2990;
																																		BgL_stackz00_1805
																																			=
																																			BgL_stackz00_2989;
																																		goto
																																			BgL_zc3z04anonymousza31828ze3z87_1807;
																																	}
																																}
																															else
																																{	/* Ast/find_gdefs.scm 257 */
																																	obj_t
																																		BgL_arg1842z00_1818;
																																	obj_t
																																		BgL_arg1845z00_1819;
																																	BgL_arg1842z00_1818
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_idzd2ofzd2idz00zzast_identz00
																																		(CAR
																																			(BgL_bindingsz00_1806),
																																			BGl_findzd2locationzd2zztools_locationz00
																																			(BgL_expz00_24)),
																																		BgL_stackz00_1805);
																																	BgL_arg1845z00_1819
																																		=
																																		CDR
																																		(BgL_bindingsz00_1806);
																																	{
																																		obj_t
																																			BgL_bindingsz00_2997;
																																		obj_t
																																			BgL_stackz00_2996;
																																		BgL_stackz00_2996
																																			=
																																			BgL_arg1842z00_1818;
																																		BgL_bindingsz00_2997
																																			=
																																			BgL_arg1845z00_1819;
																																		BgL_bindingsz00_1806
																																			=
																																			BgL_bindingsz00_2997;
																																		BgL_stackz00_1805
																																			=
																																			BgL_stackz00_2996;
																																		goto
																																			BgL_zc3z04anonymousza31828ze3z87_1807;
																																	}
																																}
																														}
																													else
																														{	/* Ast/find_gdefs.scm 255 */
																															obj_t
																																BgL_list1851z00_1824;
																															BgL_list1851z00_1824
																																=
																																MAKE_YOUNG_PAIR
																																(BNIL, BNIL);
																															BgL_newzd2stackzd2_1794
																																=
																																BGl_userzd2errorzd2zztools_errorz00
																																(BGl_string2083z00zzast_findzd2gdefszd2,
																																BGl_string2082z00zzast_findzd2gdefszd2,
																																BgL_expz00_24,
																																BgL_list1851z00_1824);
																														}
																												}
																										}
																										BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																											(BgL_bodyz00_1566,
																											BgL_newzd2stackzd2_1794);
																										if (PAIRP
																											(BgL_bindingsz00_1565))
																											{
																												obj_t BgL_l1233z00_1797;

																												BgL_l1233z00_1797 =
																													BgL_bindingsz00_1565;
																											BgL_zc3z04anonymousza31824ze3z87_1798:
																												if (PAIRP
																													(BgL_l1233z00_1797))
																													{	/* Ast/find_gdefs.scm 268 */
																														{	/* Ast/find_gdefs.scm 268 */
																															obj_t
																																BgL_bz00_1800;
																															BgL_bz00_1800 =
																																CAR
																																(BgL_l1233z00_1797);
																															{	/* Ast/find_gdefs.scm 268 */
																																obj_t
																																	BgL_arg1826z00_1801;
																																BgL_arg1826z00_1801
																																	=
																																	CDR(((obj_t)
																																		BgL_bz00_1800));
																																BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																	(BgL_arg1826z00_1801,
																																	BgL_newzd2stackzd2_1794);
																															}
																														}
																														{
																															obj_t
																																BgL_l1233z00_3009;
																															BgL_l1233z00_3009
																																=
																																CDR
																																(BgL_l1233z00_1797);
																															BgL_l1233z00_1797
																																=
																																BgL_l1233z00_3009;
																															goto
																																BgL_zc3z04anonymousza31824ze3z87_1798;
																														}
																													}
																												else
																													{	/* Ast/find_gdefs.scm 268 */
																														BgL_tmpz00_2974 =
																															((bool_t) 1);
																													}
																											}
																										else
																											{	/* Ast/find_gdefs.scm 267 */
																												BgL_tmpz00_2974 =
																													((bool_t) 0);
																											}
																									}
																									return BBOOL(BgL_tmpz00_2974);
																								}
																							}
																						else
																							{	/* Ast/find_gdefs.scm 202 */
																								goto BgL_tagzd2631zd2_1597;
																							}
																					}
																				else
																					{	/* Ast/find_gdefs.scm 202 */
																						if (
																							(CAR(BgL_expz00_24) ==
																								CNST_TABLE_REF(((long) 20))))
																							{	/* Ast/find_gdefs.scm 202 */
																								if (PAIRP
																									(BgL_cdrzd22881zd2_1663))
																									{	/* Ast/find_gdefs.scm 202 */
																										obj_t BgL_arg1611z00_1673;
																										obj_t BgL_arg1612z00_1674;

																										BgL_arg1611z00_1673 =
																											CAR
																											(BgL_cdrzd22881zd2_1663);
																										BgL_arg1612z00_1674 =
																											CDR
																											(BgL_cdrzd22881zd2_1663);
																										{	/* Ast/find_gdefs.scm 202 */
																											bool_t BgL_tmpz00_3020;

																											BgL_bindingsz00_1568 =
																												BgL_arg1611z00_1673;
																											BgL_bodyz00_1569 =
																												BgL_arg1612z00_1674;
																											{	/* Ast/find_gdefs.scm 271 */
																												obj_t BgL_locz00_1826;

																												BgL_locz00_1826 =
																													BGl_findzd2locationzd2zztools_locationz00
																													(BgL_expz00_24);
																												{	/* Ast/find_gdefs.scm 271 */
																													obj_t
																														BgL_newzd2stackzd2_1827;
																													{	/* Ast/find_gdefs.scm 272 */
																														obj_t
																															BgL_arg1859z00_1839;
																														if (NULLP
																															(BgL_bindingsz00_1568))
																															{	/* Ast/find_gdefs.scm 272 */
																																BgL_arg1859z00_1839
																																	= BNIL;
																															}
																														else
																															{	/* Ast/find_gdefs.scm 272 */
																																obj_t
																																	BgL_head1237z00_1842;
																																{	/* Ast/find_gdefs.scm 272 */
																																	obj_t
																																		BgL_arg1868z00_1854;
																																	{	/* Ast/find_gdefs.scm 272 */
																																		obj_t
																																			BgL_pairz00_2250;
																																		BgL_pairz00_2250
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_bindingsz00_1568));
																																		BgL_arg1868z00_1854
																																			=
																																			CAR
																																			(BgL_pairz00_2250);
																																	}
																																	{	/* Ast/find_gdefs.scm 272 */
																																		obj_t
																																			BgL_res2026z00_2251;
																																		BgL_res2026z00_2251
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1868z00_1854,
																																			BNIL);
																																		BgL_head1237z00_1842
																																			=
																																			BgL_res2026z00_2251;
																																	}
																																}
																																{	/* Ast/find_gdefs.scm 272 */
																																	obj_t
																																		BgL_g1240z00_1843;
																																	BgL_g1240z00_1843
																																		=
																																		CDR(((obj_t)
																																			BgL_bindingsz00_1568));
																																	{
																																		obj_t
																																			BgL_l1235z00_1845;
																																		obj_t
																																			BgL_tail1238z00_1846;
																																		BgL_l1235z00_1845
																																			=
																																			BgL_g1240z00_1843;
																																		BgL_tail1238z00_1846
																																			=
																																			BgL_head1237z00_1842;
																																	BgL_zc3z04anonymousza31861ze3z87_1847:
																																		if (NULLP
																																			(BgL_l1235z00_1845))
																																			{	/* Ast/find_gdefs.scm 272 */
																																				BgL_arg1859z00_1839
																																					=
																																					BgL_head1237z00_1842;
																																			}
																																		else
																																			{	/* Ast/find_gdefs.scm 272 */
																																				obj_t
																																					BgL_newtail1239z00_1849;
																																				{	/* Ast/find_gdefs.scm 272 */
																																					obj_t
																																						BgL_arg1865z00_1851;
																																					{	/* Ast/find_gdefs.scm 272 */
																																						obj_t
																																							BgL_pairz00_2255;
																																						BgL_pairz00_2255
																																							=
																																							CAR
																																							(((obj_t) BgL_l1235z00_1845));
																																						BgL_arg1865z00_1851
																																							=
																																							CAR
																																							(BgL_pairz00_2255);
																																					}
																																					{	/* Ast/find_gdefs.scm 272 */
																																						obj_t
																																							BgL_res2028z00_2256;
																																						BgL_res2028z00_2256
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1865z00_1851,
																																							BNIL);
																																						BgL_newtail1239z00_1849
																																							=
																																							BgL_res2028z00_2256;
																																					}
																																				}
																																				SET_CDR
																																					(BgL_tail1238z00_1846,
																																					BgL_newtail1239z00_1849);
																																				{	/* Ast/find_gdefs.scm 272 */
																																					obj_t
																																						BgL_arg1863z00_1850;
																																					BgL_arg1863z00_1850
																																						=
																																						CDR(
																																						((obj_t) BgL_l1235z00_1845));
																																					{
																																						obj_t
																																							BgL_tail1238z00_3040;
																																						obj_t
																																							BgL_l1235z00_3039;
																																						BgL_l1235z00_3039
																																							=
																																							BgL_arg1863z00_1850;
																																						BgL_tail1238z00_3040
																																							=
																																							BgL_newtail1239z00_1849;
																																						BgL_tail1238z00_1846
																																							=
																																							BgL_tail1238z00_3040;
																																						BgL_l1235z00_1845
																																							=
																																							BgL_l1235z00_3039;
																																						goto
																																							BgL_zc3z04anonymousza31861ze3z87_1847;
																																					}
																																				}
																																			}
																																	}
																																}
																															}
																														BgL_newzd2stackzd2_1827
																															=
																															BGl_pushzd2argszd2zzast_findzd2gdefszd2
																															(BgL_arg1859z00_1839,
																															BgL_stackz00_25,
																															BgL_locz00_1826);
																													}
																													{	/* Ast/find_gdefs.scm 272 */

																														BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																															(BgL_bodyz00_1569,
																															BgL_newzd2stackzd2_1827);
																														if (PAIRP
																															(BgL_bindingsz00_1568))
																															{
																																obj_t
																																	BgL_l1241z00_1830;
																																BgL_l1241z00_1830
																																	=
																																	BgL_bindingsz00_1568;
																															BgL_zc3z04anonymousza31853ze3z87_1831:
																																if (PAIRP
																																	(BgL_l1241z00_1830))
																																	{	/* Ast/find_gdefs.scm 275 */
																																		{	/* Ast/find_gdefs.scm 276 */
																																			obj_t
																																				BgL_bz00_1833;
																																			BgL_bz00_1833
																																				=
																																				CAR
																																				(BgL_l1241z00_1830);
																																			{	/* Ast/find_gdefs.scm 276 */
																																				obj_t
																																					BgL_arg1855z00_1834;
																																				obj_t
																																					BgL_arg1856z00_1835;
																																				{	/* Ast/find_gdefs.scm 276 */
																																					obj_t
																																						BgL_pairz00_2265;
																																					BgL_pairz00_2265
																																						=
																																						CDR(
																																						((obj_t) BgL_bz00_1833));
																																					BgL_arg1855z00_1834
																																						=
																																						CDR
																																						(BgL_pairz00_2265);
																																				}
																																				{	/* Ast/find_gdefs.scm 277 */
																																					obj_t
																																						BgL_arg1857z00_1836;
																																					{	/* Ast/find_gdefs.scm 277 */
																																						obj_t
																																							BgL_pairz00_2269;
																																						BgL_pairz00_2269
																																							=
																																							CDR
																																							(((obj_t) BgL_bz00_1833));
																																						BgL_arg1857z00_1836
																																							=
																																							CAR
																																							(BgL_pairz00_2269);
																																					}
																																					BgL_arg1856z00_1835
																																						=
																																						BGl_pushzd2argszd2zzast_findzd2gdefszd2
																																						(BgL_arg1857z00_1836,
																																						BgL_newzd2stackzd2_1827,
																																						BgL_locz00_1826);
																																				}
																																				BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																					(BgL_arg1855z00_1834,
																																					BgL_arg1856z00_1835);
																																			}
																																		}
																																		{
																																			obj_t
																																				BgL_l1241z00_3056;
																																			BgL_l1241z00_3056
																																				=
																																				CDR
																																				(BgL_l1241z00_1830);
																																			BgL_l1241z00_1830
																																				=
																																				BgL_l1241z00_3056;
																																			goto
																																				BgL_zc3z04anonymousza31853ze3z87_1831;
																																		}
																																	}
																																else
																																	{	/* Ast/find_gdefs.scm 275 */
																																		BgL_tmpz00_3020
																																			=
																																			((bool_t)
																																			1);
																																	}
																															}
																														else
																															{	/* Ast/find_gdefs.scm 274 */
																																BgL_tmpz00_3020
																																	=
																																	((bool_t) 0);
																															}
																													}
																												}
																											}
																											return
																												BBOOL(BgL_tmpz00_3020);
																										}
																									}
																								else
																									{	/* Ast/find_gdefs.scm 202 */
																										goto BgL_tagzd2631zd2_1597;
																									}
																							}
																						else
																							{	/* Ast/find_gdefs.scm 202 */
																								obj_t BgL_cdrzd23047zd2_1675;

																								BgL_cdrzd23047zd2_1675 =
																									CDR(BgL_expz00_24);
																								if (
																									(CAR(BgL_expz00_24) ==
																										CNST_TABLE_REF(((long)
																												14))))
																									{	/* Ast/find_gdefs.scm 202 */
																										if (PAIRP
																											(BgL_cdrzd23047zd2_1675))
																											{	/* Ast/find_gdefs.scm 202 */
																												obj_t
																													BgL_arg1624z00_1679;
																												obj_t
																													BgL_arg1626z00_1680;
																												BgL_arg1624z00_1679 =
																													CAR
																													(BgL_cdrzd23047zd2_1675);
																												BgL_arg1626z00_1680 =
																													CDR
																													(BgL_cdrzd23047zd2_1675);
																												{	/* Ast/find_gdefs.scm 280 */
																													obj_t
																														BgL_arg1871z00_2368;
																													BgL_arg1871z00_2368 =
																														BGl_pushzd2argszd2zzast_findzd2gdefszd2
																														(BgL_arg1624z00_1679,
																														BgL_stackz00_25,
																														BGl_findzd2locationzd2zztools_locationz00
																														(BgL_expz00_24));
																													return
																														BBOOL
																														(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																														(BgL_arg1626z00_1680,
																															BgL_arg1871z00_2368));
																												}
																											}
																										else
																											{	/* Ast/find_gdefs.scm 202 */
																												goto
																													BgL_tagzd2631zd2_1597;
																											}
																									}
																								else
																									{	/* Ast/find_gdefs.scm 202 */
																										if (
																											(CAR(BgL_expz00_24) ==
																												CNST_TABLE_REF(((long)
																														21))))
																											{	/* Ast/find_gdefs.scm 202 */
																												if (PAIRP
																													(BgL_cdrzd23047zd2_1675))
																													{	/* Ast/find_gdefs.scm 202 */
																														obj_t
																															BgL_arg1631z00_1685;
																														obj_t
																															BgL_arg1634z00_1686;
																														BgL_arg1631z00_1685
																															=
																															CAR
																															(BgL_cdrzd23047zd2_1675);
																														BgL_arg1634z00_1686
																															=
																															CDR
																															(BgL_cdrzd23047zd2_1675);
																														{	/* Ast/find_gdefs.scm 282 */
																															obj_t
																																BgL_arg1873z00_2375;
																															BgL_arg1873z00_2375
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_idzd2ofzd2idz00zzast_identz00
																																(BgL_arg1631z00_1685,
																																	BGl_findzd2locationzd2zztools_locationz00
																																	(BgL_expz00_24)),
																																BgL_stackz00_25);
																															return
																																BBOOL
																																(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																(BgL_arg1634z00_1686,
																																	BgL_arg1873z00_2375));
																														}
																													}
																												else
																													{	/* Ast/find_gdefs.scm 202 */
																														goto
																															BgL_tagzd2631zd2_1597;
																													}
																											}
																										else
																											{	/* Ast/find_gdefs.scm 202 */
																												obj_t
																													BgL_cdrzd23170zd2_1687;
																												BgL_cdrzd23170zd2_1687 =
																													CDR(BgL_expz00_24);
																												if ((CAR(BgL_expz00_24)
																														==
																														CNST_TABLE_REF((
																																(long) 22))))
																													{	/* Ast/find_gdefs.scm 202 */
																														if (PAIRP
																															(BgL_cdrzd23170zd2_1687))
																															{	/* Ast/find_gdefs.scm 202 */
																																obj_t
																																	BgL_cdrzd23174zd2_1691;
																																BgL_cdrzd23174zd2_1691
																																	=
																																	CDR
																																	(BgL_cdrzd23170zd2_1687);
																																if (PAIRP
																																	(BgL_cdrzd23174zd2_1691))
																																	{	/* Ast/find_gdefs.scm 202 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd23174zd2_1691)))
																																			{	/* Ast/find_gdefs.scm 202 */
																																				obj_t
																																					BgL_arg1652z00_1695;
																																				obj_t
																																					BgL_arg1662z00_1696;
																																				BgL_arg1652z00_1695
																																					=
																																					CAR
																																					(BgL_cdrzd23170zd2_1687);
																																				BgL_arg1662z00_1696
																																					=
																																					CAR
																																					(BgL_cdrzd23174zd2_1691);
																																				BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2
																																					(BgL_arg1652z00_1695,
																																					BgL_stackz00_25);
																																				{
																																					obj_t
																																						BgL_expz00_3101;
																																					BgL_expz00_3101
																																						=
																																						BgL_arg1662z00_1696;
																																					BgL_expz00_24
																																						=
																																						BgL_expz00_3101;
																																					goto
																																						BGl_findzd21zd2mutationsz12z12zzast_findzd2gdefszd2;
																																				}
																																			}
																																		else
																																			{	/* Ast/find_gdefs.scm 202 */
																																				goto
																																					BgL_tagzd2631zd2_1597;
																																			}
																																	}
																																else
																																	{	/* Ast/find_gdefs.scm 202 */
																																		goto
																																			BgL_tagzd2631zd2_1597;
																																	}
																															}
																														else
																															{	/* Ast/find_gdefs.scm 202 */
																																goto
																																	BgL_tagzd2631zd2_1597;
																															}
																													}
																												else
																													{	/* Ast/find_gdefs.scm 202 */
																														if (
																															(CAR
																																(BgL_expz00_24)
																																==
																																CNST_TABLE_REF((
																																		(long)
																																		23))))
																															{	/* Ast/find_gdefs.scm 202 */
																																if (PAIRP
																																	(BgL_cdrzd23170zd2_1687))
																																	{	/* Ast/find_gdefs.scm 202 */
																																		obj_t
																																			BgL_cdrzd23282zd2_1702;
																																		BgL_cdrzd23282zd2_1702
																																			=
																																			CDR
																																			(BgL_cdrzd23170zd2_1687);
																																		if (PAIRP
																																			(BgL_cdrzd23282zd2_1702))
																																			{	/* Ast/find_gdefs.scm 202 */
																																				if (NULLP(CDR(BgL_cdrzd23282zd2_1702)))
																																					{	/* Ast/find_gdefs.scm 202 */
																																						obj_t
																																							BgL_arg1672z00_1706;
																																						obj_t
																																							BgL_arg1684z00_1707;
																																						BgL_arg1672z00_1706
																																							=
																																							CAR
																																							(BgL_cdrzd23170zd2_1687);
																																						BgL_arg1684z00_1707
																																							=
																																							CAR
																																							(BgL_cdrzd23282zd2_1702);
																																						{	/* Ast/find_gdefs.scm 202 */
																																							bool_t
																																								BgL_tmpz00_3116;
																																							BgL_valz00_1580
																																								=
																																								BgL_arg1672z00_1706;
																																							BgL_clausesz00_1581
																																								=
																																								BgL_arg1684z00_1707;
																																							BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																								(BgL_valz00_1580,
																																								BgL_stackz00_25);
																																							{
																																								obj_t
																																									BgL_l1243z00_1862;
																																								BgL_l1243z00_1862
																																									=
																																									BgL_clausesz00_1581;
																																							BgL_zc3z04anonymousza31877ze3z87_1863:
																																								if (PAIRP(BgL_l1243z00_1862))
																																									{	/* Ast/find_gdefs.scm 288 */
																																										{	/* Ast/find_gdefs.scm 288 */
																																											obj_t
																																												BgL_cz00_1865;
																																											BgL_cz00_1865
																																												=
																																												CAR
																																												(BgL_l1243z00_1862);
																																											{	/* Ast/find_gdefs.scm 288 */
																																												obj_t
																																													BgL_arg1879z00_1866;
																																												BgL_arg1879z00_1866
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_cz00_1865));
																																												BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																													(BgL_arg1879z00_1866,
																																													BgL_stackz00_25);
																																											}
																																										}
																																										{
																																											obj_t
																																												BgL_l1243z00_3124;
																																											BgL_l1243z00_3124
																																												=
																																												CDR
																																												(BgL_l1243z00_1862);
																																											BgL_l1243z00_1862
																																												=
																																												BgL_l1243z00_3124;
																																											goto
																																												BgL_zc3z04anonymousza31877ze3z87_1863;
																																										}
																																									}
																																								else
																																									{	/* Ast/find_gdefs.scm 288 */
																																										BgL_tmpz00_3116
																																											=
																																											(
																																											(bool_t)
																																											1);
																																									}
																																							}
																																							return
																																								BBOOL
																																								(BgL_tmpz00_3116);
																																						}
																																					}
																																				else
																																					{	/* Ast/find_gdefs.scm 202 */
																																						goto
																																							BgL_tagzd2631zd2_1597;
																																					}
																																			}
																																		else
																																			{	/* Ast/find_gdefs.scm 202 */
																																				goto
																																					BgL_tagzd2631zd2_1597;
																																			}
																																	}
																																else
																																	{	/* Ast/find_gdefs.scm 202 */
																																		goto
																																			BgL_tagzd2631zd2_1597;
																																	}
																															}
																														else
																															{	/* Ast/find_gdefs.scm 202 */
																																if (
																																	(CAR
																																		(BgL_expz00_24)
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				24))))
																																	{	/* Ast/find_gdefs.scm 202 */
																																		obj_t
																																			BgL_arg1688z00_1711;
																																		BgL_arg1688z00_1711
																																			=
																																			CDR
																																			(BgL_expz00_24);
																																		return
																																			BBOOL
																																			(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																			(BgL_arg1688z00_1711,
																																				BgL_stackz00_25));
																																	}
																																else
																																	{	/* Ast/find_gdefs.scm 202 */
																																		obj_t
																																			BgL_cdrzd23370zd2_1712;
																																		BgL_cdrzd23370zd2_1712
																																			=
																																			CDR
																																			(BgL_expz00_24);
																																		if ((CAR
																																				(BgL_expz00_24)
																																				==
																																				CNST_TABLE_REF
																																				(((long)
																																						4))))
																																			{	/* Ast/find_gdefs.scm 202 */
																																				if (PAIRP(BgL_cdrzd23370zd2_1712))
																																					{	/* Ast/find_gdefs.scm 202 */
																																						obj_t
																																							BgL_arg1695z00_1716;
																																						obj_t
																																							BgL_arg1696z00_1717;
																																						BgL_arg1695z00_1716
																																							=
																																							CAR
																																							(BgL_cdrzd23370zd2_1712);
																																						BgL_arg1696z00_1717
																																							=
																																							CDR
																																							(BgL_cdrzd23370zd2_1712);
																																						{	/* Ast/find_gdefs.scm 292 */
																																							obj_t
																																								BgL_arg1882z00_2403;
																																							BgL_arg1882z00_2403
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_arg1695z00_1716,
																																								BgL_stackz00_25);
																																							return
																																								BBOOL
																																								(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																								(BgL_arg1696z00_1717,
																																									BgL_arg1882z00_2403));
																																						}
																																					}
																																				else
																																					{	/* Ast/find_gdefs.scm 202 */
																																						goto
																																							BgL_tagzd2631zd2_1597;
																																					}
																																			}
																																		else
																																			{	/* Ast/find_gdefs.scm 202 */
																																				if (
																																					(CAR
																																						(BgL_expz00_24)
																																						==
																																						CNST_TABLE_REF
																																						(((long) 5))))
																																					{	/* Ast/find_gdefs.scm 202 */
																																						if (PAIRP(BgL_cdrzd23370zd2_1712))
																																							{	/* Ast/find_gdefs.scm 202 */
																																								obj_t
																																									BgL_arg1704z00_1722;
																																								obj_t
																																									BgL_arg1707z00_1723;
																																								BgL_arg1704z00_1722
																																									=
																																									CAR
																																									(BgL_cdrzd23370zd2_1712);
																																								BgL_arg1707z00_1723
																																									=
																																									CDR
																																									(BgL_cdrzd23370zd2_1712);
																																								{	/* Ast/find_gdefs.scm 294 */
																																									obj_t
																																										BgL_list1883z00_2409;
																																									BgL_list1883z00_2409
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BNIL,
																																										BNIL);
																																									return
																																										BGl_userzd2errorzd2zztools_errorz00
																																										(BgL_arg1704z00_1722,
																																										BGl_string2086z00zzast_findzd2gdefszd2,
																																										BgL_arg1707z00_1723,
																																										BgL_list1883z00_2409);
																																								}
																																							}
																																						else
																																							{	/* Ast/find_gdefs.scm 202 */
																																								goto
																																									BgL_tagzd2631zd2_1597;
																																							}
																																					}
																																				else
																																					{	/* Ast/find_gdefs.scm 202 */
																																						obj_t
																																							BgL_cdrzd23419zd2_1724;
																																						BgL_cdrzd23419zd2_1724
																																							=
																																							CDR
																																							(BgL_expz00_24);
																																						if (
																																							(CAR
																																								(BgL_expz00_24)
																																								==
																																								CNST_TABLE_REF
																																								(((long) 6))))
																																							{	/* Ast/find_gdefs.scm 202 */
																																								if (PAIRP(BgL_cdrzd23419zd2_1724))
																																									{	/* Ast/find_gdefs.scm 202 */
																																										obj_t
																																											BgL_arg1711z00_1728;
																																										obj_t
																																											BgL_arg1712z00_1729;
																																										BgL_arg1711z00_1728
																																											=
																																											CAR
																																											(BgL_cdrzd23419zd2_1724);
																																										BgL_arg1712z00_1729
																																											=
																																											CDR
																																											(BgL_cdrzd23419zd2_1724);
																																										{	/* Ast/find_gdefs.scm 296 */
																																											obj_t
																																												BgL_list1884z00_2415;
																																											BgL_list1884z00_2415
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BNIL,
																																												BNIL);
																																											return
																																												BGl_userzd2errorzd2zztools_errorz00
																																												(BgL_arg1711z00_1728,
																																												BGl_string2087z00zzast_findzd2gdefszd2,
																																												BgL_arg1712z00_1729,
																																												BgL_list1884z00_2415);
																																										}
																																									}
																																								else
																																									{	/* Ast/find_gdefs.scm 202 */
																																										goto
																																											BgL_tagzd2631zd2_1597;
																																									}
																																							}
																																						else
																																							{	/* Ast/find_gdefs.scm 202 */
																																								if ((CAR(BgL_expz00_24) == CNST_TABLE_REF(((long) 7))))
																																									{	/* Ast/find_gdefs.scm 202 */
																																										if (PAIRP(BgL_cdrzd23419zd2_1724))
																																											{	/* Ast/find_gdefs.scm 202 */
																																												obj_t
																																													BgL_carzd23438zd2_1734;
																																												BgL_carzd23438zd2_1734
																																													=
																																													CAR
																																													(BgL_cdrzd23419zd2_1724);
																																												if (PAIRP(BgL_carzd23438zd2_1734))
																																													{	/* Ast/find_gdefs.scm 202 */
																																														obj_t
																																															BgL_arg1725z00_1736;
																																														obj_t
																																															BgL_arg1726z00_1737;
																																														BgL_arg1725z00_1736
																																															=
																																															CDR
																																															(BgL_carzd23438zd2_1734);
																																														BgL_arg1726z00_1737
																																															=
																																															CDR
																																															(BgL_cdrzd23419zd2_1724);
																																														{	/* Ast/find_gdefs.scm 298 */
																																															obj_t
																																																BgL_arg1885z00_2423;
																																															BgL_arg1885z00_2423
																																																=
																																																BGl_pushzd2argszd2zzast_findzd2gdefszd2
																																																(BgL_arg1725z00_1736,
																																																BgL_stackz00_25,
																																																BGl_findzd2locationzd2zztools_locationz00
																																																(BgL_expz00_24));
																																															return
																																																BBOOL
																																																(BGl_findzd2mutationsz12zc0zzast_findzd2gdefszd2
																																																(BgL_arg1726z00_1737,
																																																	BgL_arg1885z00_2423));
																																														}
																																													}
																																												else
																																													{	/* Ast/find_gdefs.scm 202 */
																																														goto
																																															BgL_tagzd2631zd2_1597;
																																													}
																																											}
																																										else
																																											{	/* Ast/find_gdefs.scm 202 */
																																												goto
																																													BgL_tagzd2631zd2_1597;
																																											}
																																									}
																																								else
																																									{	/* Ast/find_gdefs.scm 202 */
																																										goto
																																											BgL_tagzd2631zd2_1597;
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
															}
													}
											}
									}
							}
					}
				else
					{	/* Ast/find_gdefs.scm 202 */
						return CNST_TABLE_REF(((long) 8));
		}}}

	}



/* push-args */
	obj_t BGl_pushzd2argszd2zzast_findzd2gdefszd2(obj_t BgL_expr0z00_26,
		obj_t BgL_listz00_27, obj_t BgL_locz00_28)
	{
		{	/* Ast/find_gdefs.scm 331 */
			{
				obj_t BgL_exprz00_1897;
				obj_t BgL_listz00_1898;
				bool_t BgL_dssslz00_1899;

				BgL_exprz00_1897 = BgL_expr0z00_26;
				BgL_listz00_1898 = BgL_listz00_27;
				BgL_dssslz00_1899 = ((bool_t) 0);
			BgL_zc3z04anonymousza31898ze3z87_1900:
				if (NULLP(BgL_exprz00_1897))
					{	/* Ast/find_gdefs.scm 336 */
						return BgL_listz00_1898;
					}
				else
					{	/* Ast/find_gdefs.scm 336 */
						if (PAIRP(BgL_exprz00_1897))
							{	/* Ast/find_gdefs.scm 352 */
								bool_t BgL_test2228z00_3187;

								{	/* Ast/find_gdefs.scm 352 */
									obj_t BgL_tmpz00_3188;

									BgL_tmpz00_3188 = CAR(BgL_exprz00_1897);
									BgL_test2228z00_3187 = SYMBOLP(BgL_tmpz00_3188);
								}
								if (BgL_test2228z00_3187)
									{	/* Ast/find_gdefs.scm 372 */
										obj_t BgL_arg1903z00_1905;
										obj_t BgL_arg1904z00_1906;

										BgL_arg1903z00_1905 = CDR(BgL_exprz00_1897);
										BgL_arg1904z00_1906 =
											MAKE_YOUNG_PAIR(BGl_idzd2ofzd2idz00zzast_identz00(CAR
												(BgL_exprz00_1897), BgL_locz00_28), BgL_listz00_1898);
										{
											obj_t BgL_listz00_3196;
											obj_t BgL_exprz00_3195;

											BgL_exprz00_3195 = BgL_arg1903z00_1905;
											BgL_listz00_3196 = BgL_arg1904z00_1906;
											BgL_listz00_1898 = BgL_listz00_3196;
											BgL_exprz00_1897 = BgL_exprz00_3195;
											goto BgL_zc3z04anonymousza31898ze3z87_1900;
										}
									}
								else
									{	/* Ast/find_gdefs.scm 352 */
										if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
												(BgL_exprz00_1897)))
											{
												bool_t BgL_dssslz00_3202;
												obj_t BgL_exprz00_3200;

												BgL_exprz00_3200 = CDR(BgL_exprz00_1897);
												BgL_dssslz00_3202 = ((bool_t) 1);
												BgL_dssslz00_1899 = BgL_dssslz00_3202;
												BgL_exprz00_1897 = BgL_exprz00_3200;
												goto BgL_zc3z04anonymousza31898ze3z87_1900;
											}
										else
											{	/* Ast/find_gdefs.scm 354 */
												if (BgL_dssslz00_1899)
													{	/* Ast/find_gdefs.scm 361 */
														bool_t BgL_test2231z00_3204;

														{	/* Ast/find_gdefs.scm 361 */
															obj_t BgL_arg1919z00_1922;

															BgL_arg1919z00_1922 = CAR(BgL_exprz00_1897);
															BgL_test2231z00_3204 =
																CBOOL
																(BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00
																(BgL_arg1919z00_1922));
														}
														if (BgL_test2231z00_3204)
															{	/* Ast/find_gdefs.scm 362 */
																obj_t BgL_arg1912z00_1914;
																obj_t BgL_arg1913z00_1915;

																BgL_arg1912z00_1914 = CDR(BgL_exprz00_1897);
																BgL_arg1913z00_1915 =
																	MAKE_YOUNG_PAIR
																	(BGl_idzd2ofzd2idz00zzast_identz00
																	(BGl_dssslzd2defaultzd2formalz00zztools_dssslz00
																		(CAR(BgL_exprz00_1897)), BgL_locz00_28),
																	BgL_listz00_1898);
																{
																	bool_t BgL_dssslz00_3215;
																	obj_t BgL_listz00_3214;
																	obj_t BgL_exprz00_3213;

																	BgL_exprz00_3213 = BgL_arg1912z00_1914;
																	BgL_listz00_3214 = BgL_arg1913z00_1915;
																	BgL_dssslz00_3215 = ((bool_t) 1);
																	BgL_dssslz00_1899 = BgL_dssslz00_3215;
																	BgL_listz00_1898 = BgL_listz00_3214;
																	BgL_exprz00_1897 = BgL_exprz00_3213;
																	goto BgL_zc3z04anonymousza31898ze3z87_1900;
																}
															}
														else
															{	/* Ast/find_gdefs.scm 367 */
																obj_t BgL_arg1917z00_1919;

																{	/* Ast/find_gdefs.scm 367 */
																	obj_t BgL__ortest_1108z00_1921;

																	BgL__ortest_1108z00_1921 =
																		BGl_findzd2locationzd2zztools_locationz00
																		(BgL_exprz00_1897);
																	if (CBOOL(BgL__ortest_1108z00_1921))
																		{	/* Ast/find_gdefs.scm 367 */
																			BgL_arg1917z00_1919 =
																				BgL__ortest_1108z00_1921;
																		}
																	else
																		{	/* Ast/find_gdefs.scm 367 */
																			BgL_arg1917z00_1919 = BgL_locz00_28;
																		}
																}
																return
																	BGl_userzd2errorzf2locationz20zztools_errorz00
																	(BgL_arg1917z00_1919,
																	CNST_TABLE_REF(((long) 14)),
																	BGl_string2088z00zzast_findzd2gdefszd2,
																	BgL_exprz00_1897, BNIL);
													}}
												else
													{	/* Ast/find_gdefs.scm 357 */
														obj_t BgL_arg1920z00_1923;

														{	/* Ast/find_gdefs.scm 357 */
															obj_t BgL__ortest_1107z00_1925;

															BgL__ortest_1107z00_1925 =
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_exprz00_1897);
															if (CBOOL(BgL__ortest_1107z00_1925))
																{	/* Ast/find_gdefs.scm 357 */
																	BgL_arg1920z00_1923 =
																		BgL__ortest_1107z00_1925;
																}
															else
																{	/* Ast/find_gdefs.scm 357 */
																	BgL_arg1920z00_1923 = BgL_locz00_28;
																}
														}
														return
															BGl_userzd2errorzf2locationz20zztools_errorz00
															(BgL_arg1920z00_1923, CNST_TABLE_REF(((long) 14)),
															BGl_string2089z00zzast_findzd2gdefszd2,
															BgL_exprz00_1897, BNIL);
							}}}}
						else
							{	/* Ast/find_gdefs.scm 338 */
								if (BgL_dssslz00_1899)
									{	/* Ast/find_gdefs.scm 340 */
										return
											BGl_userzd2errorzf2locationz20zztools_errorz00
											(BgL_locz00_28, CNST_TABLE_REF(((long) 14)),
											BGl_string2090z00zzast_findzd2gdefszd2, BgL_exprz00_1897,
											BNIL);
									}
								else
									{	/* Ast/find_gdefs.scm 340 */
										if (SYMBOLP(BgL_exprz00_1897))
											{	/* Ast/find_gdefs.scm 345 */
												return
													MAKE_YOUNG_PAIR(BGl_idzd2ofzd2idz00zzast_identz00
													(BgL_exprz00_1897, BgL_locz00_28), BgL_listz00_1898);
											}
										else
											{	/* Ast/find_gdefs.scm 345 */
												return
													BGl_userzd2errorzf2locationz20zztools_errorz00
													(BgL_locz00_28, CNST_TABLE_REF(((long) 14)),
													BGl_string2089z00zzast_findzd2gdefszd2,
													BgL_exprz00_1897, BNIL);
		}}}}}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_findzd2gdefszd2()
	{
		{	/* Ast/find_gdefs.scm 23 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_findzd2gdefszd2()
	{
		{	/* Ast/find_gdefs.scm 23 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_findzd2gdefszd2()
	{
		{	/* Ast/find_gdefs.scm 23 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_findzd2gdefszd2()
	{
		{	/* Ast/find_gdefs.scm 23 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 275867862),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2091z00zzast_findzd2gdefszd2));
		}

	}

#ifdef __cplusplus
}
#endif
