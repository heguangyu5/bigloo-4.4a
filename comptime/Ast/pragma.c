/*===========================================================================*/
/*   (Ast/pragma.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/pragma.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

	typedef struct BgL_externz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                *BgL_externz00_bglt;

	typedef struct BgL_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_formatz00;
	}                *BgL_pragmaz00_bglt;

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


	static BgL_nodez00_bglt
		BGl_z62pragmazf2typezd2ze3nodeza1zzast_pragmaz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2staticzd2pragmaz12z12zzast_pragmaz00(BgL_nodez00_bglt);
	static obj_t BGl_objectzd2initzd2zzast_pragmaz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzast_pragmaz00();
	BGL_IMPORT obj_t rgc_buffer_substring(obj_t, long, long);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00(bool_t, obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_pragmaz00();
	static obj_t BGl_parserze70ze7zzast_pragmaz00(obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62getzd2staticzd2pragmasz62zzast_pragmaz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_pragmaz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzast_pragmaz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_pragmaz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_getzd2staticzd2pragmasz00zzast_pragmaz00();
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_pragmaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_getzd2maxzd2indexz00zzast_pragmaz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_pragmaz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_pragmaz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_pragmaz00();
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62addzd2staticzd2pragmaz12z70zzast_pragmaz00(obj_t, obj_t);
	static obj_t BGl_za2staticzd2pragmazd2listza2z00zzast_pragmaz00 = BUNSPEC;
	BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2staticzd2pragmaszd2envzd2zzast_pragmaz00,
		BgL_bgl_za762getza7d2staticza71870za7,
		BGl_z62getzd2staticzd2pragmasz62zzast_pragmaz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1854z00zzast_pragmaz00,
		BgL_bgl_string1854za700za7za7a1871za7,
		"Wrong number of arguments in `pragma' form", 42);
	      DEFINE_STRING(BGl_string1855z00zzast_pragmaz00,
		BgL_bgl_string1855za700za7za7a1872za7, "", 0);
	      DEFINE_STRING(BGl_string1856z00zzast_pragmaz00,
		BgL_bgl_string1856za700za7za7a1873za7, "Illegal `pragma' expression", 27);
	      DEFINE_STRING(BGl_string1857z00zzast_pragmaz00,
		BgL_bgl_string1857za700za7za7a1874za7, "Illegal \"pragma\" form", 21);
	      DEFINE_STRING(BGl_string1858z00zzast_pragmaz00,
		BgL_bgl_string1858za700za7za7a1875za7, "pragma", 6);
	      DEFINE_STRING(BGl_string1859z00zzast_pragmaz00,
		BgL_bgl_string1859za700za7za7a1876za7, "Pragma ignored with this back-end",
		33);
	      DEFINE_STRING(BGl_string1860z00zzast_pragmaz00,
		BgL_bgl_string1860za700za7za7a1877za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string1861z00zzast_pragmaz00,
		BgL_bgl_string1861za700za7za7a1878za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string1862z00zzast_pragmaz00,
		BgL_bgl_string1862za700za7za7a1879za7, "Illegal range `~a'", 18);
	      DEFINE_STRING(BGl_string1863z00zzast_pragmaz00,
		BgL_bgl_string1863za700za7za7a1880za7, "the-substring", 13);
	      DEFINE_STRING(BGl_string1864z00zzast_pragmaz00,
		BgL_bgl_string1864za700za7za7a1881za7, "ast_pragma", 10);
	      DEFINE_STRING(BGl_string1865z00zzast_pragmaz00,
		BgL_bgl_string1865za700za7za7a1882za7, "set! value ", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pragmazf2typezd2ze3nodezd2envz11zzast_pragmaz00,
		BgL_bgl_za762pragmaza7f2type1883z00,
		BGl_z62pragmazf2typezd2ze3nodeza1zzast_pragmaz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2staticzd2pragmaz12zd2envzc0zzast_pragmaz00,
		BgL_bgl_za762addza7d2staticza71884za7,
		BGl_z62addzd2staticzd2pragmaz12z70zzast_pragmaz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_pragmaz00));
		   
			 ADD_ROOT((void *) (&BGl_za2staticzd2pragmazd2listza2z00zzast_pragmaz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_pragmaz00(long
		BgL_checksumz00_2178, char *BgL_fromz00_2179)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_pragmaz00))
				{
					BGl_requirezd2initializa7ationz75zzast_pragmaz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_pragmaz00();
					BGl_libraryzd2moduleszd2initz00zzast_pragmaz00();
					BGl_cnstzd2initzd2zzast_pragmaz00();
					BGl_importedzd2moduleszd2initz00zzast_pragmaz00();
					return BGl_toplevelzd2initzd2zzast_pragmaz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_pragmaz00()
	{
		{	/* Ast/pragma.scm 14 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_pragma");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_pragma");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"ast_pragma");
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 0), "ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_pragma");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_pragma");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_pragmaz00()
	{
		{	/* Ast/pragma.scm 14 */
			{	/* Ast/pragma.scm 14 */
				obj_t BgL_cportz00_2165;

				{	/* Ast/pragma.scm 14 */
					obj_t BgL_stringz00_2173;

					BgL_stringz00_2173 = BGl_string1865z00zzast_pragmaz00;
					{	/* Ast/pragma.scm 14 */
						obj_t BgL_startz00_2174;

						BgL_startz00_2174 = BINT(((long) 0));
						{	/* Ast/pragma.scm 14 */
							obj_t BgL_endz00_2175;

							BgL_endz00_2175 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2173)));
							{	/* Ast/pragma.scm 14 */

								BgL_cportz00_2165 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2173, BgL_startz00_2174, BgL_endz00_2175);
				}}}}
				{
					long BgL_iz00_2166;

					BgL_iz00_2166 = ((long) 1);
				BgL_loopz00_2167:
					if ((BgL_iz00_2166 == ((long) -1)))
						{	/* Ast/pragma.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/pragma.scm 14 */
							{	/* Ast/pragma.scm 14 */
								obj_t BgL_arg1868z00_2169;

								{	/* Ast/pragma.scm 14 */

									{	/* Ast/pragma.scm 14 */
										obj_t BgL_locationz00_2171;

										BgL_locationz00_2171 = BBOOL(((bool_t) 0));
										{	/* Ast/pragma.scm 14 */

											BgL_arg1868z00_2169 =
												BGl_readz00zz__readerz00(BgL_cportz00_2165,
												BgL_locationz00_2171);
										}
									}
								}
								{	/* Ast/pragma.scm 14 */
									int BgL_tmpz00_2209;

									BgL_tmpz00_2209 = (int) (BgL_iz00_2166);
									CNST_TABLE_SET(BgL_tmpz00_2209, BgL_arg1868z00_2169);
							}}
							{	/* Ast/pragma.scm 14 */
								int BgL_auxz00_2172;

								BgL_auxz00_2172 = (int) ((BgL_iz00_2166 - ((long) 1)));
								{
									long BgL_iz00_2214;

									BgL_iz00_2214 = (long) (BgL_auxz00_2172);
									BgL_iz00_2166 = BgL_iz00_2214;
									goto BgL_loopz00_2167;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_pragmaz00()
	{
		{	/* Ast/pragma.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_pragmaz00()
	{
		{	/* Ast/pragma.scm 14 */
			return (BGl_za2staticzd2pragmazd2listza2z00zzast_pragmaz00 =
				BNIL, BUNSPEC);
		}

	}



/* get-static-pragmas */
	BGL_EXPORTED_DEF obj_t BGl_getzd2staticzd2pragmasz00zzast_pragmaz00()
	{
		{	/* Ast/pragma.scm 33 */
			return
				bgl_reverse_bang(BGl_za2staticzd2pragmazd2listza2z00zzast_pragmaz00);
		}

	}



/* &get-static-pragmas */
	obj_t BGl_z62getzd2staticzd2pragmasz62zzast_pragmaz00(obj_t BgL_envz00_2154)
	{
		{	/* Ast/pragma.scm 33 */
			return BGl_getzd2staticzd2pragmasz00zzast_pragmaz00();
		}

	}



/* add-static-pragma! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2staticzd2pragmaz12z12zzast_pragmaz00(BgL_nodez00_bglt BgL_pz00_3)
	{
		{	/* Ast/pragma.scm 39 */
			return (BGl_za2staticzd2pragmazd2listza2z00zzast_pragmaz00 =
				MAKE_YOUNG_PAIR(
					((obj_t) BgL_pz00_3),
					BGl_za2staticzd2pragmazd2listza2z00zzast_pragmaz00), BUNSPEC);
		}

	}



/* &add-static-pragma! */
	obj_t BGl_z62addzd2staticzd2pragmaz12z70zzast_pragmaz00(obj_t BgL_envz00_2155,
		obj_t BgL_pz00_2156)
	{
		{	/* Ast/pragma.scm 39 */
			return
				BGl_addzd2staticzd2pragmaz12z12zzast_pragmaz00(
				((BgL_nodez00_bglt) BgL_pz00_2156));
		}

	}



/* pragma/type->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00(bool_t BgL_freez00_4,
		obj_t BgL_effectz00_5, BgL_typez00_bglt BgL_typez00_6, obj_t BgL_expz00_7,
		obj_t BgL_stackz00_8, obj_t BgL_locz00_9, obj_t BgL_sitez00_10)
	{
		{	/* Ast/pragma.scm 45 */
			{	/* Ast/pragma.scm 46 */
				bool_t BgL_test1887z00_2223;

				{	/* Ast/pragma.scm 46 */
					obj_t BgL_arg1317z00_1472;

					BgL_arg1317z00_1472 = BGl_thezd2backendzd2zzbackend_backendz00();
					BgL_test1887z00_2223 =
						(((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_arg1317z00_1472)))->
						BgL_pragmazd2supportzd2);
				}
				if (BgL_test1887z00_2223)
					{
						obj_t BgL_identz00_1426;
						obj_t BgL_formatz00_1423;
						obj_t BgL_valuesz00_1424;

						if (PAIRP(BgL_expz00_7))
							{	/* Ast/pragma.scm 53 */
								obj_t BgL_cdrzd2111zd2_1431;

								BgL_cdrzd2111zd2_1431 = CDR(BgL_expz00_7);
								if (PAIRP(BgL_cdrzd2111zd2_1431))
									{	/* Ast/pragma.scm 53 */
										obj_t BgL_carzd2114zd2_1433;

										BgL_carzd2114zd2_1433 = CAR(BgL_cdrzd2111zd2_1431);
										if (STRINGP(BgL_carzd2114zd2_1433))
											{	/* Ast/pragma.scm 53 */
												BgL_formatz00_1423 = BgL_carzd2114zd2_1433;
												BgL_valuesz00_1424 = CDR(BgL_cdrzd2111zd2_1431);
												{	/* Ast/pragma.scm 55 */
													obj_t BgL_maxzd2indexzd2_1441;
													obj_t BgL_locz00_1442;

													BgL_maxzd2indexzd2_1441 =
														BGl_getzd2maxzd2indexz00zzast_pragmaz00
														(BgL_formatz00_1423);
													BgL_locz00_1442 =
														BGl_findzd2locationzf2locz20zztools_locationz00
														(BgL_expz00_7, BgL_locz00_9);
													if (((long) CINT(BgL_maxzd2indexzd2_1441) ==
															bgl_list_length(BgL_valuesz00_1424)))
														{
															obj_t BgL_expsz00_1447;
															obj_t BgL_nodesz00_1448;

															{
																BgL_pragmaz00_bglt BgL_auxz00_2241;

																BgL_expsz00_1447 = BgL_valuesz00_1424;
																BgL_nodesz00_1448 = BNIL;
															BgL_zc3z04anonymousza31301ze3z87_1449:
																if (NULLP(BgL_expsz00_1447))
																	{	/* Ast/pragma.scm 65 */
																		BgL_pragmaz00_bglt BgL_new1103z00_1451;

																		{	/* Ast/pragma.scm 66 */
																			BgL_pragmaz00_bglt BgL_new1102z00_1452;

																			BgL_new1102z00_1452 =
																				((BgL_pragmaz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_pragmaz00_bgl))));
																			{	/* Ast/pragma.scm 66 */
																				long BgL_arg1303z00_1453;

																				{	/* Ast/pragma.scm 66 */
																					long BgL_res1783z00_1981;

																					BgL_res1783z00_1981 =
																						BGL_CLASS_INDEX
																						(BGl_pragmaz00zzast_nodez00);
																					BgL_arg1303z00_1453 =
																						BgL_res1783z00_1981;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1102z00_1452),
																					BgL_arg1303z00_1453);
																			}
																			{	/* Ast/pragma.scm 66 */
																				BgL_objectz00_bglt BgL_tmpz00_2248;

																				BgL_tmpz00_2248 =
																					((BgL_objectz00_bglt)
																					BgL_new1102z00_1452);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2248,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1102z00_1452);
																			BgL_new1103z00_1451 = BgL_new1102z00_1452;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1103z00_1451)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_1442), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1103z00_1451)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) BgL_typez00_6),
																			BUNSPEC);
																		{
																			obj_t BgL_auxz00_2256;

																			if (BgL_freez00_4)
																				{	/* Ast/pragma.scm 70 */
																					BgL_auxz00_2256 = BFALSE;
																				}
																			else
																				{	/* Ast/pragma.scm 70 */
																					BgL_auxz00_2256 = BTRUE;
																				}
																			((((BgL_nodezf2effectzf2_bglt) COBJECT(
																							((BgL_nodezf2effectzf2_bglt)
																								BgL_new1103z00_1451)))->
																					BgL_sidezd2effectzd2) =
																				((obj_t) BgL_auxz00_2256), BUNSPEC);
																		}
																		((((BgL_nodezf2effectzf2_bglt) COBJECT(
																						((BgL_nodezf2effectzf2_bglt)
																							BgL_new1103z00_1451)))->
																				BgL_keyz00) =
																			((obj_t) BINT(((long) -1))), BUNSPEC);
																		((((BgL_externz00_bglt)
																					COBJECT(((BgL_externz00_bglt)
																							BgL_new1103z00_1451)))->
																				BgL_exprza2za2) =
																			((obj_t)
																				bgl_reverse_bang(BgL_nodesz00_1448)),
																			BUNSPEC);
																		((((BgL_externz00_bglt)
																					COBJECT(((BgL_externz00_bglt)
																							BgL_new1103z00_1451)))->
																				BgL_effectz00) =
																			((obj_t) BgL_effectz00_5), BUNSPEC);
																		((((BgL_pragmaz00_bglt)
																					COBJECT(BgL_new1103z00_1451))->
																				BgL_formatz00) =
																			((obj_t) BgL_formatz00_1423), BUNSPEC);
																		BgL_auxz00_2241 = BgL_new1103z00_1451;
																	}
																else
																	{	/* Ast/pragma.scm 72 */
																		obj_t BgL_arg1304z00_1454;
																		obj_t BgL_arg1306z00_1455;

																		BgL_arg1304z00_1454 =
																			CDR(((obj_t) BgL_expsz00_1447));
																		{	/* Ast/pragma.scm 74 */
																			BgL_nodez00_bglt BgL_arg1307z00_1456;

																			{	/* Ast/pragma.scm 74 */
																				obj_t BgL_arg1308z00_1457;
																				obj_t BgL_arg1309z00_1458;
																				obj_t BgL_arg1310z00_1459;

																				BgL_arg1308z00_1457 =
																					CAR(((obj_t) BgL_expsz00_1447));
																				{	/* Ast/pragma.scm 76 */
																					obj_t BgL_arg1311z00_1460;

																					BgL_arg1311z00_1460 =
																						CAR(((obj_t) BgL_expsz00_1447));
																					BgL_arg1309z00_1458 =
																						BGl_findzd2locationzf2locz20zztools_locationz00
																						(BgL_arg1311z00_1460,
																						BgL_locz00_1442);
																				}
																				if (BgL_freez00_4)
																					{	/* Ast/pragma.scm 77 */
																						BgL_arg1310z00_1459 =
																							CNST_TABLE_REF(((long) 0));
																					}
																				else
																					{	/* Ast/pragma.scm 77 */
																						BgL_arg1310z00_1459 =
																							CNST_TABLE_REF(((long) 1));
																					}
																				BgL_arg1307z00_1456 =
																					BGl_sexpzd2ze3nodez31zzast_sexpz00
																					(BgL_arg1308z00_1457, BgL_stackz00_8,
																					BgL_arg1309z00_1458,
																					BgL_arg1310z00_1459);
																			}
																			BgL_arg1306z00_1455 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_arg1307z00_1456),
																				BgL_nodesz00_1448);
																		}
																		{
																			obj_t BgL_nodesz00_2283;
																			obj_t BgL_expsz00_2282;

																			BgL_expsz00_2282 = BgL_arg1304z00_1454;
																			BgL_nodesz00_2283 = BgL_arg1306z00_1455;
																			BgL_nodesz00_1448 = BgL_nodesz00_2283;
																			BgL_expsz00_1447 = BgL_expsz00_2282;
																			goto
																				BgL_zc3z04anonymousza31301ze3z87_1449;
																		}
																	}
																return ((BgL_nodez00_bglt) BgL_auxz00_2241);
															}
														}
													else
														{	/* Ast/pragma.scm 57 */
															return
																BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																(BGl_string1854z00zzast_pragmaz00, BgL_expz00_7,
																BgL_locz00_1442);
														}
												}
											}
										else
											{	/* Ast/pragma.scm 53 */
												if (NULLP(CDR(((obj_t) BgL_cdrzd2111zd2_1431))))
													{	/* Ast/pragma.scm 53 */
														obj_t BgL_arg1297z00_1439;

														BgL_arg1297z00_1439 =
															CAR(((obj_t) BgL_cdrzd2111zd2_1431));
														BgL_identz00_1426 = BgL_arg1297z00_1439;
														{	/* Ast/pragma.scm 80 */
															BgL_nodez00_bglt BgL_vz00_1463;

															BgL_vz00_1463 =
																BGl_sexpzd2ze3nodez31zzast_sexpz00
																(BgL_identz00_1426, BgL_stackz00_8,
																BgL_locz00_9, BgL_sitez00_10);
															if (BGl_isazf3zf3zz__objectz00(((obj_t)
																		BgL_vz00_1463), BGl_varz00zzast_nodez00))
																{	/* Ast/pragma.scm 84 */
																	BgL_pragmaz00_bglt BgL_new1107z00_1467;

																	{	/* Ast/pragma.scm 85 */
																		BgL_pragmaz00_bglt BgL_new1106z00_1469;

																		BgL_new1106z00_1469 =
																			((BgL_pragmaz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_pragmaz00_bgl))));
																		{	/* Ast/pragma.scm 85 */
																			long BgL_arg1315z00_1470;

																			{	/* Ast/pragma.scm 85 */
																				long BgL_res1784z00_1989;

																				BgL_res1784z00_1989 =
																					BGL_CLASS_INDEX
																					(BGl_pragmaz00zzast_nodez00);
																				BgL_arg1315z00_1470 =
																					BgL_res1784z00_1989;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1106z00_1469),
																				BgL_arg1315z00_1470);
																		}
																		{	/* Ast/pragma.scm 85 */
																			BgL_objectz00_bglt BgL_tmpz00_2301;

																			BgL_tmpz00_2301 =
																				((BgL_objectz00_bglt)
																				BgL_new1106z00_1469);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2301,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1106z00_1469);
																		BgL_new1107z00_1467 = BgL_new1106z00_1469;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1107z00_1467)))->
																			BgL_locz00) =
																		((obj_t) BgL_locz00_9), BUNSPEC);
																	((((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_new1107z00_1467)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_typez00_6),
																		BUNSPEC);
																	{
																		obj_t BgL_auxz00_2309;

																		if (BgL_freez00_4)
																			{	/* Ast/pragma.scm 89 */
																				BgL_auxz00_2309 = BFALSE;
																			}
																		else
																			{	/* Ast/pragma.scm 89 */
																				BgL_auxz00_2309 = BTRUE;
																			}
																		((((BgL_nodezf2effectzf2_bglt) COBJECT(
																						((BgL_nodezf2effectzf2_bglt)
																							BgL_new1107z00_1467)))->
																				BgL_sidezd2effectzd2) =
																			((obj_t) BgL_auxz00_2309), BUNSPEC);
																	}
																	((((BgL_nodezf2effectzf2_bglt) COBJECT(
																					((BgL_nodezf2effectzf2_bglt)
																						BgL_new1107z00_1467)))->
																			BgL_keyz00) =
																		((obj_t) BINT(((long) -1))), BUNSPEC);
																	{
																		obj_t BgL_auxz00_2316;

																		{	/* Ast/pragma.scm 88 */
																			obj_t BgL_list1314z00_1468;

																			BgL_list1314z00_1468 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_vz00_1463), BNIL);
																			BgL_auxz00_2316 = BgL_list1314z00_1468;
																		}
																		((((BgL_externz00_bglt) COBJECT(
																						((BgL_externz00_bglt)
																							BgL_new1107z00_1467)))->
																				BgL_exprza2za2) =
																			((obj_t) BgL_auxz00_2316), BUNSPEC);
																	}
																	((((BgL_externz00_bglt) COBJECT(
																					((BgL_externz00_bglt)
																						BgL_new1107z00_1467)))->
																			BgL_effectz00) =
																		((obj_t) BgL_effectz00_5), BUNSPEC);
																	((((BgL_pragmaz00_bglt)
																				COBJECT(BgL_new1107z00_1467))->
																			BgL_formatz00) =
																		((obj_t) BGl_string1855z00zzast_pragmaz00),
																		BUNSPEC);
																	return ((BgL_nodez00_bglt)
																		BgL_new1107z00_1467);
																}
															else
																{	/* Ast/pragma.scm 81 */
																	return
																		BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
																		(BGl_string1856z00zzast_pragmaz00,
																		BgL_expz00_7,
																		BGl_findzd2locationzf2locz20zztools_locationz00
																		(BgL_expz00_7, BgL_locz00_9));
																}
														}
													}
												else
													{	/* Ast/pragma.scm 53 */
													BgL_tagzd2103zd2_1428:
														return
															BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
															(BGl_string1857z00zzast_pragmaz00, BgL_expz00_7,
															BgL_locz00_9);
													}
											}
									}
								else
									{	/* Ast/pragma.scm 53 */
										goto BgL_tagzd2103zd2_1428;
									}
							}
						else
							{	/* Ast/pragma.scm 53 */
								goto BgL_tagzd2103zd2_1428;
							}
					}
				else
					{	/* Ast/pragma.scm 46 */
						BGl_userzd2warningzf2locationz20zztools_errorz00(BgL_locz00_9,
							BGl_string1858z00zzast_pragmaz00,
							BGl_string1859z00zzast_pragmaz00, BgL_expz00_7);
						return BGl_sexpzd2ze3nodez31zzast_sexpz00(BUNSPEC, BgL_stackz00_8,
							BgL_locz00_9, BgL_sitez00_10);
					}
			}
		}

	}



/* &pragma/type->node */
	BgL_nodez00_bglt BGl_z62pragmazf2typezd2ze3nodeza1zzast_pragmaz00(obj_t
		BgL_envz00_2157, obj_t BgL_freez00_2158, obj_t BgL_effectz00_2159,
		obj_t BgL_typez00_2160, obj_t BgL_expz00_2161, obj_t BgL_stackz00_2162,
		obj_t BgL_locz00_2163, obj_t BgL_sitez00_2164)
	{
		{	/* Ast/pragma.scm 45 */
			return
				BGl_pragmazf2typezd2ze3nodezc3zzast_pragmaz00(CBOOL(BgL_freez00_2158),
				BgL_effectz00_2159, ((BgL_typez00_bglt) BgL_typez00_2160),
				BgL_expz00_2161, BgL_stackz00_2162, BgL_locz00_2163, BgL_sitez00_2164);
		}

	}



/* get-max-index */
	obj_t BGl_getzd2maxzd2indexz00zzast_pragmaz00(obj_t BgL_fmtz00_11)
	{
		{	/* Ast/pragma.scm 99 */
			{	/* Ast/pragma.scm 100 */
				obj_t BgL_portz00_1474;

				{	/* Ast/pragma.scm 107 */
					long BgL_endz00_1754;

					BgL_endz00_1754 = STRING_LENGTH(BgL_fmtz00_11);
					{	/* Ast/pragma.scm 107 */

						BgL_portz00_1474 =
							BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(BgL_fmtz00_11,
							BINT(((long) 0)), BINT(BgL_endz00_1754));
				}}
				{	/* Ast/pragma.scm 108 */
					obj_t BgL_g1116z00_1475;

					BgL_g1116z00_1475 =
						BGl_parserze70ze7zzast_pragmaz00(BgL_portz00_1474);
					{
						obj_t BgL_expz00_1477;
						obj_t BgL_maxz00_1478;

						BgL_expz00_1477 = BgL_g1116z00_1475;
						BgL_maxz00_1478 = BINT(((long) 0));
					BgL_zc3z04anonymousza31318ze3z87_1479:
						{	/* Ast/pragma.scm 111 */
							bool_t BgL_test1898z00_2338;

							{	/* Ast/pragma.scm 111 */
								bool_t BgL_res1851z00_2148;

								BgL_res1851z00_2148 = EOF_OBJECTP(BgL_expz00_1477);
								BgL_test1898z00_2338 = BgL_res1851z00_2148;
							}
							if (BgL_test1898z00_2338)
								{	/* Ast/pragma.scm 111 */
									return BgL_maxz00_1478;
								}
							else
								{	/* Ast/pragma.scm 111 */
									if (CHARP(BgL_expz00_1477))
										{
											obj_t BgL_expz00_2342;

											BgL_expz00_2342 =
												BGl_parserze70ze7zzast_pragmaz00(BgL_portz00_1474);
											BgL_expz00_1477 = BgL_expz00_2342;
											goto BgL_zc3z04anonymousza31318ze3z87_1479;
										}
									else
										{	/* Ast/pragma.scm 116 */
											obj_t BgL_arg1324z00_1483;
											obj_t BgL_arg1325z00_1484;

											BgL_arg1324z00_1483 =
												BGl_parserze70ze7zzast_pragmaz00(BgL_portz00_1474);
											if (
												((long) CINT(BgL_expz00_1477) >
													(long) CINT(BgL_maxz00_1478)))
												{	/* Ast/pragma.scm 116 */
													BgL_arg1325z00_1484 = BgL_expz00_1477;
												}
											else
												{	/* Ast/pragma.scm 116 */
													BgL_arg1325z00_1484 = BgL_maxz00_1478;
												}
											{
												obj_t BgL_maxz00_2350;
												obj_t BgL_expz00_2349;

												BgL_expz00_2349 = BgL_arg1324z00_1483;
												BgL_maxz00_2350 = BgL_arg1325z00_1484;
												BgL_maxz00_1478 = BgL_maxz00_2350;
												BgL_expz00_1477 = BgL_expz00_2349;
												goto BgL_zc3z04anonymousza31318ze3z87_1479;
											}
										}
								}
						}
					}
				}
			}
		}

	}



/* parser~0 */
	obj_t BGl_parserze70ze7zzast_pragmaz00(obj_t BgL_iportz00_1488)
	{
		{	/* Ast/pragma.scm 100 */
			{
				obj_t BgL_iportz00_1522;
				long BgL_lastzd2matchzd2_1523;
				long BgL_forwardz00_1524;
				long BgL_bufposz00_1525;
				obj_t BgL_iportz00_1535;
				long BgL_lastzd2matchzd2_1536;
				long BgL_forwardz00_1537;
				long BgL_bufposz00_1538;
				obj_t BgL_iportz00_1550;
				long BgL_lastzd2matchzd2_1551;
				long BgL_forwardz00_1552;
				long BgL_bufposz00_1553;
				obj_t BgL_iportz00_1563;
				long BgL_lastzd2matchzd2_1564;
				long BgL_forwardz00_1565;
				long BgL_bufposz00_1566;
				obj_t BgL_iportz00_1578;
				long BgL_lastzd2matchzd2_1579;
				long BgL_forwardz00_1580;
				long BgL_bufposz00_1581;
				int BgL_minz00_1603;
				int BgL_maxz00_1604;

			BgL_zc3z04anonymousza31632ze3z87_1709:
				{	/* Ast/pragma.scm 100 */
					long BgL_res1847z00_2140;

					BgL_res1847z00_2140 = RGC_START_MATCH(BgL_iportz00_1488);
					BgL_res1847z00_2140;
				}
				{	/* Ast/pragma.scm 100 */
					long BgL_matchz00_1710;

					{	/* Ast/pragma.scm 100 */
						long BgL_arg1640z00_1718;
						long BgL_arg1641z00_1719;

						{	/* Ast/pragma.scm 100 */
							long BgL_res1848z00_2142;

							BgL_res1848z00_2142 = RGC_BUFFER_FORWARD(BgL_iportz00_1488);
							BgL_arg1640z00_1718 = BgL_res1848z00_2142;
						}
						{	/* Ast/pragma.scm 100 */
							long BgL_res1849z00_2144;

							BgL_res1849z00_2144 = RGC_BUFFER_BUFPOS(BgL_iportz00_1488);
							BgL_arg1641z00_1719 = BgL_res1849z00_2144;
						}
						BgL_iportz00_1578 = BgL_iportz00_1488;
						BgL_lastzd2matchzd2_1579 = ((long) 2);
						BgL_forwardz00_1580 = BgL_arg1640z00_1718;
						BgL_bufposz00_1581 = BgL_arg1641z00_1719;
					BgL_zc3z04anonymousza31382ze3z87_1582:
						if ((BgL_forwardz00_1580 == BgL_bufposz00_1581))
							{	/* Ast/pragma.scm 100 */
								if (rgc_fill_buffer(BgL_iportz00_1578))
									{	/* Ast/pragma.scm 100 */
										long BgL_arg1394z00_1585;
										long BgL_arg1396z00_1586;

										{	/* Ast/pragma.scm 100 */
											long BgL_res1827z00_2092;

											BgL_res1827z00_2092 =
												RGC_BUFFER_FORWARD(BgL_iportz00_1578);
											BgL_arg1394z00_1585 = BgL_res1827z00_2092;
										}
										{	/* Ast/pragma.scm 100 */
											long BgL_res1828z00_2094;

											BgL_res1828z00_2094 =
												RGC_BUFFER_BUFPOS(BgL_iportz00_1578);
											BgL_arg1396z00_1586 = BgL_res1828z00_2094;
										}
										{
											long BgL_bufposz00_2362;
											long BgL_forwardz00_2361;

											BgL_forwardz00_2361 = BgL_arg1394z00_1585;
											BgL_bufposz00_2362 = BgL_arg1396z00_1586;
											BgL_bufposz00_1581 = BgL_bufposz00_2362;
											BgL_forwardz00_1580 = BgL_forwardz00_2361;
											goto BgL_zc3z04anonymousza31382ze3z87_1582;
										}
									}
								else
									{	/* Ast/pragma.scm 100 */
										BgL_matchz00_1710 = BgL_lastzd2matchzd2_1579;
									}
							}
						else
							{	/* Ast/pragma.scm 100 */
								int BgL_curz00_1587;

								{	/* Ast/pragma.scm 100 */
									int BgL_res1829z00_2097;

									BgL_res1829z00_2097 =
										RGC_BUFFER_GET_CHAR(BgL_iportz00_1578, BgL_forwardz00_1580);
									BgL_curz00_1587 = BgL_res1829z00_2097;
								}
								{	/* Ast/pragma.scm 100 */

									if (((long) (BgL_curz00_1587) == ((long) 36)))
										{	/* Ast/pragma.scm 100 */
											BgL_iportz00_1535 = BgL_iportz00_1578;
											BgL_lastzd2matchzd2_1536 = BgL_lastzd2matchzd2_1579;
											BgL_forwardz00_1537 = (((long) 1) + BgL_forwardz00_1580);
											BgL_bufposz00_1538 = BgL_bufposz00_1581;
										BgL_zc3z04anonymousza31338ze3z87_1539:
											{	/* Ast/pragma.scm 100 */
												long BgL_newzd2matchzd2_1540;

												{	/* Ast/pragma.scm 100 */
													long BgL_res1799z00_2027;

													BgL_res1799z00_2027 =
														RGC_STOP_MATCH(BgL_iportz00_1535,
														BgL_forwardz00_1537);
													BgL_res1799z00_2027;
												}
												BgL_newzd2matchzd2_1540 = ((long) 2);
												if ((BgL_forwardz00_1537 == BgL_bufposz00_1538))
													{	/* Ast/pragma.scm 100 */
														if (rgc_fill_buffer(BgL_iportz00_1535))
															{	/* Ast/pragma.scm 100 */
																long BgL_arg1344z00_1543;
																long BgL_arg1345z00_1544;

																{	/* Ast/pragma.scm 100 */
																	long BgL_res1802z00_2034;

																	BgL_res1802z00_2034 =
																		RGC_BUFFER_FORWARD(BgL_iportz00_1535);
																	BgL_arg1344z00_1543 = BgL_res1802z00_2034;
																}
																{	/* Ast/pragma.scm 100 */
																	long BgL_res1803z00_2036;

																	BgL_res1803z00_2036 =
																		RGC_BUFFER_BUFPOS(BgL_iportz00_1535);
																	BgL_arg1345z00_1544 = BgL_res1803z00_2036;
																}
																{
																	long BgL_bufposz00_2375;
																	long BgL_forwardz00_2374;

																	BgL_forwardz00_2374 = BgL_arg1344z00_1543;
																	BgL_bufposz00_2375 = BgL_arg1345z00_1544;
																	BgL_bufposz00_1538 = BgL_bufposz00_2375;
																	BgL_forwardz00_1537 = BgL_forwardz00_2374;
																	goto BgL_zc3z04anonymousza31338ze3z87_1539;
																}
															}
														else
															{	/* Ast/pragma.scm 100 */
																BgL_matchz00_1710 = BgL_newzd2matchzd2_1540;
															}
													}
												else
													{	/* Ast/pragma.scm 100 */
														int BgL_curz00_1545;

														{	/* Ast/pragma.scm 100 */
															int BgL_res1804z00_2039;

															BgL_res1804z00_2039 =
																RGC_BUFFER_GET_CHAR(BgL_iportz00_1535,
																BgL_forwardz00_1537);
															BgL_curz00_1545 = BgL_res1804z00_2039;
														}
														{	/* Ast/pragma.scm 100 */

															{	/* Ast/pragma.scm 100 */
																bool_t BgL_test1906z00_2377;

																if (((long) (BgL_curz00_1545) >= ((long) 48)))
																	{	/* Ast/pragma.scm 100 */
																		BgL_test1906z00_2377 =
																			((long) (BgL_curz00_1545) < ((long) 58));
																	}
																else
																	{	/* Ast/pragma.scm 100 */
																		BgL_test1906z00_2377 = ((bool_t) 0);
																	}
																if (BgL_test1906z00_2377)
																	{	/* Ast/pragma.scm 100 */
																		BgL_iportz00_1563 = BgL_iportz00_1535;
																		BgL_lastzd2matchzd2_1564 =
																			BgL_newzd2matchzd2_1540;
																		BgL_forwardz00_1565 =
																			(((long) 1) + BgL_forwardz00_1537);
																		BgL_bufposz00_1566 = BgL_bufposz00_1538;
																	BgL_zc3z04anonymousza31364ze3z87_1567:
																		{	/* Ast/pragma.scm 100 */
																			long BgL_newzd2matchzd2_1568;

																			{	/* Ast/pragma.scm 100 */
																				long BgL_res1816z00_2067;

																				BgL_res1816z00_2067 =
																					RGC_STOP_MATCH(BgL_iportz00_1563,
																					BgL_forwardz00_1565);
																				BgL_res1816z00_2067;
																			}
																			BgL_newzd2matchzd2_1568 = ((long) 0);
																			if (
																				(BgL_forwardz00_1565 ==
																					BgL_bufposz00_1566))
																				{	/* Ast/pragma.scm 100 */
																					if (rgc_fill_buffer
																						(BgL_iportz00_1563))
																						{	/* Ast/pragma.scm 100 */
																							long BgL_arg1367z00_1571;
																							long BgL_arg1370z00_1572;

																							{	/* Ast/pragma.scm 100 */
																								long BgL_res1819z00_2074;

																								BgL_res1819z00_2074 =
																									RGC_BUFFER_FORWARD
																									(BgL_iportz00_1563);
																								BgL_arg1367z00_1571 =
																									BgL_res1819z00_2074;
																							}
																							{	/* Ast/pragma.scm 100 */
																								long BgL_res1820z00_2076;

																								BgL_res1820z00_2076 =
																									RGC_BUFFER_BUFPOS
																									(BgL_iportz00_1563);
																								BgL_arg1370z00_1572 =
																									BgL_res1820z00_2076;
																							}
																							{
																								long BgL_bufposz00_2391;
																								long BgL_forwardz00_2390;

																								BgL_forwardz00_2390 =
																									BgL_arg1367z00_1571;
																								BgL_bufposz00_2391 =
																									BgL_arg1370z00_1572;
																								BgL_bufposz00_1566 =
																									BgL_bufposz00_2391;
																								BgL_forwardz00_1565 =
																									BgL_forwardz00_2390;
																								goto
																									BgL_zc3z04anonymousza31364ze3z87_1567;
																							}
																						}
																					else
																						{	/* Ast/pragma.scm 100 */
																							BgL_matchz00_1710 =
																								BgL_newzd2matchzd2_1568;
																						}
																				}
																			else
																				{	/* Ast/pragma.scm 100 */
																					int BgL_curz00_1573;

																					{	/* Ast/pragma.scm 100 */
																						int BgL_res1821z00_2079;

																						BgL_res1821z00_2079 =
																							RGC_BUFFER_GET_CHAR
																							(BgL_iportz00_1563,
																							BgL_forwardz00_1565);
																						BgL_curz00_1573 =
																							BgL_res1821z00_2079;
																					}
																					{	/* Ast/pragma.scm 100 */

																						{	/* Ast/pragma.scm 100 */
																							bool_t BgL_test1910z00_2393;

																							if (
																								((long) (BgL_curz00_1573) >=
																									((long) 48)))
																								{	/* Ast/pragma.scm 100 */
																									BgL_test1910z00_2393 =
																										(
																										(long) (BgL_curz00_1573) <
																										((long) 58));
																								}
																							else
																								{	/* Ast/pragma.scm 100 */
																									BgL_test1910z00_2393 =
																										((bool_t) 0);
																								}
																							if (BgL_test1910z00_2393)
																								{
																									long BgL_forwardz00_2400;
																									long BgL_lastzd2matchzd2_2399;

																									BgL_lastzd2matchzd2_2399 =
																										BgL_newzd2matchzd2_1568;
																									BgL_forwardz00_2400 =
																										(((long) 1) +
																										BgL_forwardz00_1565);
																									BgL_forwardz00_1565 =
																										BgL_forwardz00_2400;
																									BgL_lastzd2matchzd2_1564 =
																										BgL_lastzd2matchzd2_2399;
																									goto
																										BgL_zc3z04anonymousza31364ze3z87_1567;
																								}
																							else
																								{	/* Ast/pragma.scm 100 */
																									BgL_matchz00_1710 =
																										BgL_newzd2matchzd2_1568;
																								}
																						}
																					}
																				}
																		}
																	}
																else
																	{	/* Ast/pragma.scm 100 */
																		BgL_matchz00_1710 = BgL_newzd2matchzd2_1540;
																	}
															}
														}
													}
											}
										}
									else
										{	/* Ast/pragma.scm 100 */
											BgL_iportz00_1550 = BgL_iportz00_1578;
											BgL_lastzd2matchzd2_1551 = BgL_lastzd2matchzd2_1579;
											BgL_forwardz00_1552 = (((long) 1) + BgL_forwardz00_1580);
											BgL_bufposz00_1553 = BgL_bufposz00_1581;
										BgL_zc3z04anonymousza31353ze3z87_1554:
											{	/* Ast/pragma.scm 100 */
												long BgL_newzd2matchzd2_1555;

												{	/* Ast/pragma.scm 100 */
													long BgL_res1808z00_2048;

													BgL_res1808z00_2048 =
														RGC_STOP_MATCH(BgL_iportz00_1550,
														BgL_forwardz00_1552);
													BgL_res1808z00_2048;
												}
												BgL_newzd2matchzd2_1555 = ((long) 1);
												if ((BgL_forwardz00_1552 == BgL_bufposz00_1553))
													{	/* Ast/pragma.scm 100 */
														if (rgc_fill_buffer(BgL_iportz00_1550))
															{	/* Ast/pragma.scm 100 */
																long BgL_arg1357z00_1558;
																long BgL_arg1360z00_1559;

																{	/* Ast/pragma.scm 100 */
																	long BgL_res1811z00_2055;

																	BgL_res1811z00_2055 =
																		RGC_BUFFER_FORWARD(BgL_iportz00_1550);
																	BgL_arg1357z00_1558 = BgL_res1811z00_2055;
																}
																{	/* Ast/pragma.scm 100 */
																	long BgL_res1812z00_2057;

																	BgL_res1812z00_2057 =
																		RGC_BUFFER_BUFPOS(BgL_iportz00_1550);
																	BgL_arg1360z00_1559 = BgL_res1812z00_2057;
																}
																{
																	long BgL_bufposz00_2412;
																	long BgL_forwardz00_2411;

																	BgL_forwardz00_2411 = BgL_arg1357z00_1558;
																	BgL_bufposz00_2412 = BgL_arg1360z00_1559;
																	BgL_bufposz00_1553 = BgL_bufposz00_2412;
																	BgL_forwardz00_1552 = BgL_forwardz00_2411;
																	goto BgL_zc3z04anonymousza31353ze3z87_1554;
																}
															}
														else
															{	/* Ast/pragma.scm 100 */
																BgL_matchz00_1710 = BgL_newzd2matchzd2_1555;
															}
													}
												else
													{	/* Ast/pragma.scm 100 */
														int BgL_curz00_1560;

														{	/* Ast/pragma.scm 100 */
															int BgL_res1813z00_2060;

															BgL_res1813z00_2060 =
																RGC_BUFFER_GET_CHAR(BgL_iportz00_1550,
																BgL_forwardz00_1552);
															BgL_curz00_1560 = BgL_res1813z00_2060;
														}
														{	/* Ast/pragma.scm 100 */

															if (((long) (BgL_curz00_1560) == ((long) 36)))
																{	/* Ast/pragma.scm 100 */
																	BgL_matchz00_1710 = BgL_newzd2matchzd2_1555;
																}
															else
																{	/* Ast/pragma.scm 100 */
																	BgL_iportz00_1522 = BgL_iportz00_1550;
																	BgL_lastzd2matchzd2_1523 =
																		BgL_newzd2matchzd2_1555;
																	BgL_forwardz00_1524 =
																		(((long) 1) + BgL_forwardz00_1552);
																	BgL_bufposz00_1525 = BgL_bufposz00_1553;
																BgL_zc3z04anonymousza31328ze3z87_1526:
																	{	/* Ast/pragma.scm 100 */
																		long BgL_newzd2matchzd2_1527;

																		{	/* Ast/pragma.scm 100 */
																			long BgL_res1791z00_2008;

																			BgL_res1791z00_2008 =
																				RGC_STOP_MATCH(BgL_iportz00_1522,
																				BgL_forwardz00_1524);
																			BgL_res1791z00_2008;
																		}
																		BgL_newzd2matchzd2_1527 = ((long) 1);
																		if (
																			(BgL_forwardz00_1524 ==
																				BgL_bufposz00_1525))
																			{	/* Ast/pragma.scm 100 */
																				if (rgc_fill_buffer(BgL_iportz00_1522))
																					{	/* Ast/pragma.scm 100 */
																						long BgL_arg1331z00_1530;
																						long BgL_arg1334z00_1531;

																						{	/* Ast/pragma.scm 100 */
																							long BgL_res1794z00_2015;

																							BgL_res1794z00_2015 =
																								RGC_BUFFER_FORWARD
																								(BgL_iportz00_1522);
																							BgL_arg1331z00_1530 =
																								BgL_res1794z00_2015;
																						}
																						{	/* Ast/pragma.scm 100 */
																							long BgL_res1795z00_2017;

																							BgL_res1795z00_2017 =
																								RGC_BUFFER_BUFPOS
																								(BgL_iportz00_1522);
																							BgL_arg1334z00_1531 =
																								BgL_res1795z00_2017;
																						}
																						{
																							long BgL_bufposz00_2425;
																							long BgL_forwardz00_2424;

																							BgL_forwardz00_2424 =
																								BgL_arg1331z00_1530;
																							BgL_bufposz00_2425 =
																								BgL_arg1334z00_1531;
																							BgL_bufposz00_1525 =
																								BgL_bufposz00_2425;
																							BgL_forwardz00_1524 =
																								BgL_forwardz00_2424;
																							goto
																								BgL_zc3z04anonymousza31328ze3z87_1526;
																						}
																					}
																				else
																					{	/* Ast/pragma.scm 100 */
																						BgL_matchz00_1710 =
																							BgL_newzd2matchzd2_1527;
																					}
																			}
																		else
																			{	/* Ast/pragma.scm 100 */
																				int BgL_curz00_1532;

																				{	/* Ast/pragma.scm 100 */
																					int BgL_res1796z00_2020;

																					BgL_res1796z00_2020 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_iportz00_1522,
																						BgL_forwardz00_1524);
																					BgL_curz00_1532 = BgL_res1796z00_2020;
																				}
																				{	/* Ast/pragma.scm 100 */

																					if (
																						((long) (BgL_curz00_1532) ==
																							((long) 36)))
																						{	/* Ast/pragma.scm 100 */
																							BgL_matchz00_1710 =
																								BgL_newzd2matchzd2_1527;
																						}
																					else
																						{
																							long BgL_forwardz00_2431;
																							long BgL_lastzd2matchzd2_2430;

																							BgL_lastzd2matchzd2_2430 =
																								BgL_newzd2matchzd2_1527;
																							BgL_forwardz00_2431 =
																								(((long) 1) +
																								BgL_forwardz00_1524);
																							BgL_forwardz00_1524 =
																								BgL_forwardz00_2431;
																							BgL_lastzd2matchzd2_1523 =
																								BgL_lastzd2matchzd2_2430;
																							goto
																								BgL_zc3z04anonymousza31328ze3z87_1526;
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
					RGC_SET_FILEPOS(BgL_iportz00_1488);
					{

						switch (BgL_matchz00_1710)
							{
							case ((long) 2):

								{	/* Ast/pragma.scm 100 */
									bool_t BgL_test1918z00_2436;

									{	/* Ast/pragma.scm 100 */
										long BgL_arg1626z00_1700;

										{	/* Ast/pragma.scm 100 */
											long BgL_res1844z00_2134;

											BgL_res1844z00_2134 =
												RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_1488);
											BgL_arg1626z00_1700 = BgL_res1844z00_2134;
										}
										BgL_test1918z00_2436 = (BgL_arg1626z00_1700 == ((long) 0));
									}
									if (BgL_test1918z00_2436)
										{	/* Ast/pragma.scm 100 */
											return BEOF;
										}
									else
										{	/* Ast/pragma.scm 100 */
											unsigned char BgL_res1846z00_2138;

											BgL_res1846z00_2138 =
												RGC_BUFFER_CHARACTER(BgL_iportz00_1488);
											return BCHAR(BgL_res1846z00_2138);
										}
								}
								break;
							case ((long) 1):

								goto BgL_zc3z04anonymousza31632ze3z87_1709;
								break;
							case ((long) 0):

								{	/* Ast/pragma.scm 102 */
									obj_t BgL_arg1634z00_1714;

									{	/* Ast/pragma.scm 102 */
										long BgL_arg1639z00_1717;

										{	/* Ast/pragma.scm 100 */
											long BgL_res1850z00_2147;

											BgL_res1850z00_2147 =
												RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_1488);
											BgL_arg1639z00_1717 = BgL_res1850z00_2147;
										}
										BgL_minz00_1603 = (int) (((long) 1));
										BgL_maxz00_1604 = (int) (BgL_arg1639z00_1717);
										if (((long) (BgL_maxz00_1604) < (long) (BgL_minz00_1603)))
											{	/* Ast/pragma.scm 100 */
												long BgL_arg1448z00_1607;

												{	/* Ast/pragma.scm 100 */
													long BgL_res1836z00_2113;

													BgL_res1836z00_2113 =
														RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_1488);
													BgL_arg1448z00_1607 = BgL_res1836z00_2113;
												}
												{	/* Ast/pragma.scm 100 */
													long BgL_za72za7_2115;

													BgL_za72za7_2115 = (long) (BgL_maxz00_1604);
													BgL_maxz00_1604 =
														(int) ((BgL_arg1448z00_1607 + BgL_za72za7_2115));
											}}
										else
											{	/* Ast/pragma.scm 100 */
												BFALSE;
											}
										{	/* Ast/pragma.scm 100 */
											bool_t BgL_test1920z00_2450;

											if (((long) (BgL_minz00_1603) >= ((long) 0)))
												{	/* Ast/pragma.scm 100 */
													if (
														((long) (BgL_maxz00_1604) >=
															(long) (BgL_minz00_1603)))
														{	/* Ast/pragma.scm 100 */
															long BgL_arg1476z00_1618;

															{	/* Ast/pragma.scm 100 */
																long BgL_res1840z00_2123;

																BgL_res1840z00_2123 =
																	RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_1488);
																BgL_arg1476z00_1618 = BgL_res1840z00_2123;
															}
															BgL_test1920z00_2450 =
																(
																(long) (BgL_maxz00_1604) <=
																BgL_arg1476z00_1618);
														}
													else
														{	/* Ast/pragma.scm 100 */
															BgL_test1920z00_2450 = ((bool_t) 0);
														}
												}
											else
												{	/* Ast/pragma.scm 100 */
													BgL_test1920z00_2450 = ((bool_t) 0);
												}
											if (BgL_test1920z00_2450)
												{	/* Ast/pragma.scm 100 */
													BgL_arg1634z00_1714 =
														rgc_buffer_substring(BgL_iportz00_1488,
														(long) (BgL_minz00_1603), (long) (BgL_maxz00_1604));
												}
											else
												{	/* Ast/pragma.scm 100 */
													obj_t BgL_arg1464z00_1612;
													obj_t BgL_arg1465z00_1613;

													{	/* Ast/pragma.scm 100 */
														obj_t BgL_arg1474z00_1614;

														{	/* Ast/pragma.scm 100 */
															long BgL_arg1441z00_1602;

															{	/* Ast/pragma.scm 100 */
																long BgL_res1833z00_2105;

																BgL_res1833z00_2105 =
																	RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_1488);
																BgL_arg1441z00_1602 = BgL_res1833z00_2105;
															}
															BgL_arg1474z00_1614 =
																rgc_buffer_substring(BgL_iportz00_1488,
																((long) 0), BgL_arg1441z00_1602);
														}
														{	/* Ast/pragma.scm 100 */
															obj_t BgL_list1475z00_1615;

															BgL_list1475z00_1615 =
																MAKE_YOUNG_PAIR(BgL_arg1474z00_1614, BNIL);
															BgL_arg1464z00_1612 =
																BGl_formatz00zz__r4_output_6_10_3z00
																(BGl_string1862z00zzast_pragmaz00,
																BgL_list1475z00_1615);
													}}
													BgL_arg1465z00_1613 =
														MAKE_YOUNG_PAIR(BINT(BgL_minz00_1603),
														BINT(BgL_maxz00_1604));
													BgL_arg1634z00_1714 =
														BGl_errorz00zz__errorz00
														(BGl_string1863z00zzast_pragmaz00,
														BgL_arg1464z00_1612, BgL_arg1465z00_1613);
									}}}
									{	/* Ast/pragma.scm 102 */

										return
											BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
											(BgL_arg1634z00_1714, BINT(((long) 10)));
								}} break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string1860z00zzast_pragmaz00,
									BGl_string1861z00zzast_pragmaz00, BINT(BgL_matchz00_1710));
							}
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_pragmaz00()
	{
		{	/* Ast/pragma.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_pragmaz00()
	{
		{	/* Ast/pragma.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_pragmaz00()
	{
		{	/* Ast/pragma.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_pragmaz00()
	{
		{	/* Ast/pragma.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1864z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1864z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1864z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1864z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1864z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1864z00zzast_pragmaz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1864z00zzast_pragmaz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1864z00zzast_pragmaz00));
		}

	}

#ifdef __cplusplus
}
#endif
