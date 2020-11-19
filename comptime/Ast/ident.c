/*===========================================================================*/
/*   (Ast/ident.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/ident.scm) */
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


	static obj_t BGl_z62markzd2symbolzd2nonzd2userz12za2zzast_identz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzast_identz00();
	static obj_t BGl_z62makezd2typedzd2identz62zzast_identz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62userzd2symbolzf3z43zzast_identz00(obj_t, obj_t);
	static obj_t BGl_z62localzd2idzd2ze3namez81zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zzast_identz00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2typedzd2formalz00zzast_identz00(obj_t);
	extern obj_t BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00(obj_t);
	static obj_t BGl_z62parsezd2idzb0zzast_identz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31222ze31315ze5zzast_identz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_identz00();
	BGL_EXPORTED_DECL obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	static obj_t BGl_z62fastzd2idzd2ofzd2idzb0zzast_identz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_parsezd2dssslzd2zzast_identz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_identz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzast_identz00();
	BGL_EXPORTED_DECL obj_t
		BGl_parsezd2idzf2importzd2locationzf2zzast_identz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62idzd2ofzd2idz62zzast_identz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62idzd2ze3namez53zzast_identz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_identz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_z62zc3z04anonymousza31222ze3ze5zzast_identz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62parsezd2dssslzb0zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62checkzd2idzb0zzast_identz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_localzd2idzd2ze3nameze3zzast_identz00(obj_t);
	extern BgL_typez00_bglt
		BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62typezd2ofzd2idzf2importzd2locationz42zzast_identz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_parsezd2idzf2usez20zzast_identz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_checkzd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_identz00();
	static BgL_typez00_bglt BGl_z62typezd2ofzd2idz62zzast_identz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_identz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_identz00();
	BGL_EXPORTED_DECL bool_t BGl_typezd2identzf3z21zzast_identz00(obj_t);
	static obj_t BGl_z62makezd2typedzd2formalz62zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t);
	static obj_t BGl_z62parsezd2idzf2importzd2locationz90zzast_identz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_4dotsz00zzast_identz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62typezd2identzf3z43zzast_identz00(obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_parsezd2dssslzd2envz00zzast_identz00,
		BgL_bgl_za762parseza7d2dsssl1329z00, BGl_z62parsezd2dssslzb0zzast_identz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2typedzd2identzd2envzd2zzast_identz00,
		BgL_bgl_za762makeza7d2typedza71330za7,
		BGl_z62makezd2typedzd2identz62zzast_identz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_parsezd2idzd2envz00zzast_identz00,
		BgL_bgl_za762parseza7d2idza7b01331za7, BGl_z62parsezd2idzb0zzast_identz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2ofzd2idzd2envzd2zzast_identz00,
		BgL_bgl_za762typeza7d2ofza7d2i1332za7,
		BGl_z62typezd2ofzd2idz62zzast_identz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_localzd2idzd2ze3namezd2envz31zzast_identz00,
		BgL_bgl_za762localza7d2idza7d21333za7,
		BGl_z62localzd2idzd2ze3namez81zzast_identz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_parsezd2idzf2importzd2locationzd2envz20zzast_identz00,
		BgL_bgl_za762parseza7d2idza7f21334za7,
		BGl_z62parsezd2idzf2importzd2locationz90zzast_identz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_userzd2symbolzf3zd2envzf3zzast_identz00,
		BgL_bgl_za762userza7d2symbol1335z00,
		BGl_z62userzd2symbolzf3z43zzast_identz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2identzf3zd2envzf3zzast_identz00,
		BgL_bgl_za762typeza7d2identza71336za7,
		BGl_z62typezd2identzf3z43zzast_identz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1316z00zzast_identz00,
		BgL_bgl_string1316za700za7za7a1337za7, "::", 2);
	      DEFINE_STRING(BGl_string1317z00zzast_identz00,
		BgL_bgl_string1317za700za7za7a1338za7, "Illegal identifier", 18);
	      DEFINE_STRING(BGl_string1318z00zzast_identz00,
		BgL_bgl_string1318za700za7za7a1339za7, "`'", 2);
	      DEFINE_STRING(BGl_string1319z00zzast_identz00,
		BgL_bgl_string1319za700za7za7a1340za7, "parse", 5);
	      DEFINE_STRING(BGl_string1320z00zzast_identz00,
		BgL_bgl_string1320za700za7za7a1341za7, "", 0);
	      DEFINE_STRING(BGl_string1321z00zzast_identz00,
		BgL_bgl_string1321za700za7za7a1342za7, "type-of-id", 10);
	      DEFINE_STRING(BGl_string1322z00zzast_identz00,
		BgL_bgl_string1322za700za7za7a1343za7, "Illegal formal identifier", 25);
	      DEFINE_STRING(BGl_string1323z00zzast_identz00,
		BgL_bgl_string1323za700za7za7a1344za7, "Illegal formal parameter", 24);
	      DEFINE_STRING(BGl_string1324z00zzast_identz00,
		BgL_bgl_string1324za700za7za7a1345za7, "ast_ident", 9);
	      DEFINE_STRING(BGl_string1325z00zzast_identz00,
		BgL_bgl_string1325za700za7za7a1346za7, "non-user error-ident dsssl ", 27);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2typedzd2formalzd2envzd2zzast_identz00,
		BgL_bgl_za762makeza7d2typedza71347za7,
		BGl_z62makezd2typedzd2formalz62zzast_identz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_markzd2symbolzd2nonzd2userz12zd2envz12zzast_identz00,
		BgL_bgl_za762markza7d2symbol1348z00,
		BGl_z62markzd2symbolzd2nonzd2userz12za2zzast_identz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2ofzd2idzf2importzd2locationzd2envzf2zzast_identz00,
		BgL_bgl_za762typeza7d2ofza7d2i1349za7,
		BGl_z62typezd2ofzd2idzf2importzd2locationz42zzast_identz00, 0L, BUNSPEC, 3);
	extern obj_t BGl_usezd2typez12zd2envz12zztype_envz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_idzd2ofzd2idzd2envzd2zzast_identz00,
		BgL_bgl_za762idza7d2ofza7d2idza71350z00,
		BGl_z62idzd2ofzd2idz62zzast_identz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_idzd2ze3namezd2envze3zzast_identz00,
		BgL_bgl_za762idza7d2za7e3nameza71351z00,
		BGl_z62idzd2ze3namez53zzast_identz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fastzd2idzd2ofzd2idzd2envz00zzast_identz00,
		BgL_bgl_za762fastza7d2idza7d2o1352za7,
		BGl_z62fastzd2idzd2ofzd2idzb0zzast_identz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_checkzd2idzd2envz00zzast_identz00,
		BgL_bgl_za762checkza7d2idza7b01353za7, BGl_z62checkzd2idzb0zzast_identz00,
		0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_identz00));
		     ADD_ROOT((void *) (&BGl_4dotsz00zzast_identz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long
		BgL_checksumz00_466, char *BgL_fromz00_467)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_identz00))
				{
					BGl_requirezd2initializa7ationz75zzast_identz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_identz00();
					BGl_libraryzd2moduleszd2initz00zzast_identz00();
					BGl_cnstzd2initzd2zzast_identz00();
					BGl_importedzd2moduleszd2initz00zzast_identz00();
					return BGl_toplevelzd2initzd2zzast_identz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_identz00()
	{
		{	/* Ast/ident.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_ident");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "ast_ident");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "ast_ident");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_ident");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_ident");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_ident");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_ident");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"ast_ident");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_ident");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_identz00()
	{
		{	/* Ast/ident.scm 14 */
			{	/* Ast/ident.scm 14 */
				obj_t BgL_cportz00_451;

				{	/* Ast/ident.scm 14 */
					obj_t BgL_stringz00_459;

					BgL_stringz00_459 = BGl_string1325z00zzast_identz00;
					{	/* Ast/ident.scm 14 */
						obj_t BgL_startz00_460;

						BgL_startz00_460 = BINT(((long) 0));
						{	/* Ast/ident.scm 14 */
							obj_t BgL_endz00_461;

							BgL_endz00_461 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_459)));
							{	/* Ast/ident.scm 14 */

								BgL_cportz00_451 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_459, BgL_startz00_460, BgL_endz00_461);
				}}}}
				{
					long BgL_iz00_452;

					BgL_iz00_452 = ((long) 2);
				BgL_loopz00_453:
					if ((BgL_iz00_452 == ((long) -1)))
						{	/* Ast/ident.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/ident.scm 14 */
							{	/* Ast/ident.scm 14 */
								obj_t BgL_arg1327z00_455;

								{	/* Ast/ident.scm 14 */

									{	/* Ast/ident.scm 14 */
										obj_t BgL_locationz00_457;

										BgL_locationz00_457 = BBOOL(((bool_t) 0));
										{	/* Ast/ident.scm 14 */

											BgL_arg1327z00_455 =
												BGl_readz00zz__readerz00(BgL_cportz00_451,
												BgL_locationz00_457);
										}
									}
								}
								{	/* Ast/ident.scm 14 */
									int BgL_tmpz00_494;

									BgL_tmpz00_494 = (int) (BgL_iz00_452);
									CNST_TABLE_SET(BgL_tmpz00_494, BgL_arg1327z00_455);
							}}
							{	/* Ast/ident.scm 14 */
								int BgL_auxz00_458;

								BgL_auxz00_458 = (int) ((BgL_iz00_452 - ((long) 1)));
								{
									long BgL_iz00_499;

									BgL_iz00_499 = (long) (BgL_auxz00_458);
									BgL_iz00_452 = BgL_iz00_499;
									goto BgL_loopz00_453;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_identz00()
	{
		{	/* Ast/ident.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_identz00()
	{
		{	/* Ast/ident.scm 14 */
			return (BGl_4dotsz00zzast_identz00 =
				bstring_to_symbol(BGl_string1316z00zzast_identz00), BUNSPEC);
		}

	}



/* type-ident? */
	BGL_EXPORTED_DEF bool_t BGl_typezd2identzf3z21zzast_identz00(obj_t
		BgL_symz00_3)
	{
		{	/* Ast/ident.scm 44 */
			{	/* Ast/ident.scm 45 */
				obj_t BgL_strz00_98;

				{	/* Ast/ident.scm 45 */
					obj_t BgL_res1248z00_231;

					{	/* Ast/ident.scm 45 */
						obj_t BgL_arg1466z00_230;

						BgL_arg1466z00_230 = SYMBOL_TO_STRING(BgL_symz00_3);
						BgL_res1248z00_231 =
							BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_230);
					}
					BgL_strz00_98 = BgL_res1248z00_231;
				}
				if ((STRING_LENGTH(BgL_strz00_98) > ((long) 2)))
					{	/* Ast/ident.scm 46 */
						if (
							(STRING_REF(BgL_strz00_98, ((long) 0)) == ((unsigned char) ':')))
							{	/* Ast/ident.scm 47 */
								return
									(STRING_REF(BgL_strz00_98,
										((long) 1)) == ((unsigned char) ':'));
							}
						else
							{	/* Ast/ident.scm 47 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Ast/ident.scm 46 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &type-ident? */
	obj_t BGl_z62typezd2identzf3z43zzast_identz00(obj_t BgL_envz00_398,
		obj_t BgL_symz00_399)
	{
		{	/* Ast/ident.scm 44 */
			return BBOOL(BGl_typezd2identzf3z21zzast_identz00(BgL_symz00_399));
		}

	}



/* make-typed-ident */
	BGL_EXPORTED_DEF obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t
		BgL_sym1z00_4, obj_t BgL_sym2z00_5)
	{
		{	/* Ast/ident.scm 53 */
			{	/* Ast/ident.scm 54 */
				obj_t BgL_list1057z00_246;

				{	/* Ast/ident.scm 54 */
					obj_t BgL_arg1058z00_247;

					{	/* Ast/ident.scm 54 */
						obj_t BgL_arg1059z00_248;

						BgL_arg1059z00_248 = MAKE_YOUNG_PAIR(BgL_sym2z00_5, BNIL);
						BgL_arg1058z00_247 =
							MAKE_YOUNG_PAIR(BGl_4dotsz00zzast_identz00, BgL_arg1059z00_248);
					}
					BgL_list1057z00_246 =
						MAKE_YOUNG_PAIR(BgL_sym1z00_4, BgL_arg1058z00_247);
				}
				return BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list1057z00_246);
			}
		}

	}



/* &make-typed-ident */
	obj_t BGl_z62makezd2typedzd2identz62zzast_identz00(obj_t BgL_envz00_400,
		obj_t BgL_sym1z00_401, obj_t BgL_sym2z00_402)
	{
		{	/* Ast/ident.scm 53 */
			return
				BGl_makezd2typedzd2identz00zzast_identz00(BgL_sym1z00_401,
				BgL_sym2z00_402);
		}

	}



/* make-typed-formal */
	BGL_EXPORTED_DEF obj_t BGl_makezd2typedzd2formalz00zzast_identz00(obj_t
		BgL_sym2z00_6)
	{
		{	/* Ast/ident.scm 59 */
			{	/* Ast/ident.scm 60 */
				obj_t BgL_arg1060z00_107;

				{	/* Ast/ident.scm 60 */
					obj_t BgL_arg1061z00_108;
					obj_t BgL_arg1062z00_109;

					{	/* Ast/ident.scm 60 */
						obj_t BgL_res1255z00_251;

						{	/* Ast/ident.scm 60 */
							obj_t BgL_symbolz00_249;

							BgL_symbolz00_249 = BGl_4dotsz00zzast_identz00;
							{	/* Ast/ident.scm 60 */
								obj_t BgL_arg1466z00_250;

								BgL_arg1466z00_250 = SYMBOL_TO_STRING(BgL_symbolz00_249);
								BgL_res1255z00_251 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_250);
							}
						}
						BgL_arg1061z00_108 = BgL_res1255z00_251;
					}
					{	/* Ast/ident.scm 60 */
						obj_t BgL_res1256z00_254;

						{	/* Ast/ident.scm 60 */
							obj_t BgL_arg1466z00_253;

							BgL_arg1466z00_253 = SYMBOL_TO_STRING(BgL_sym2z00_6);
							BgL_res1256z00_254 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_253);
						}
						BgL_arg1062z00_109 = BgL_res1256z00_254;
					}
					BgL_arg1060z00_107 =
						string_append(BgL_arg1061z00_108, BgL_arg1062z00_109);
				}
				return bstring_to_symbol(BgL_arg1060z00_107);
			}
		}

	}



/* &make-typed-formal */
	obj_t BGl_z62makezd2typedzd2formalz62zzast_identz00(obj_t BgL_envz00_403,
		obj_t BgL_sym2z00_404)
	{
		{	/* Ast/ident.scm 59 */
			return BGl_makezd2typedzd2formalz00zzast_identz00(BgL_sym2z00_404);
		}

	}



/* type-of-id */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t
		BgL_idz00_7, obj_t BgL_locz00_8)
	{
		{	/* Ast/ident.scm 65 */
			if (SYMBOLP(BgL_idz00_7))
				{	/* Ast/ident.scm 68 */
					obj_t BgL_arg1064z00_111;

					BgL_arg1064z00_111 =
						BGl_parsezd2idzf2usez20zzast_identz00(BgL_idz00_7, BgL_locz00_8,
						BGl_usezd2typez12zd2envz12zztype_envz00);
					return ((BgL_typez00_bglt) CDR(BgL_arg1064z00_111));
				}
			else
				{	/* Ast/ident.scm 66 */
					return
						((BgL_typez00_bglt)
						BGl_userzd2errorzd2zztools_errorz00(BGl_string1317z00zzast_identz00,
							BGl_string1318z00zzast_identz00, BgL_idz00_7, BNIL));
				}
		}

	}



/* &type-of-id */
	BgL_typez00_bglt BGl_z62typezd2ofzd2idz62zzast_identz00(obj_t BgL_envz00_405,
		obj_t BgL_idz00_406, obj_t BgL_locz00_407)
	{
		{	/* Ast/ident.scm 65 */
			return BGl_typezd2ofzd2idz00zzast_identz00(BgL_idz00_406, BgL_locz00_407);
		}

	}



/* type-of-id/import-location */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00(obj_t BgL_idz00_9,
		obj_t BgL_locz00_10, obj_t BgL_lociz00_11)
	{
		{	/* Ast/ident.scm 73 */
			if (SYMBOLP(BgL_idz00_9))
				{	/* Ast/ident.scm 76 */
					obj_t BgL_arg1073z00_114;

					{	/* Ast/ident.scm 76 */
						obj_t BgL_res1261z00_264;

						{	/* Ast/ident.scm 165 */
							obj_t BgL_zc3z04anonymousza31222ze3z87_411;

							BgL_zc3z04anonymousza31222ze3z87_411 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31222ze3ze5zzast_identz00,
								(int) (((long) 2)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31222ze3z87_411,
								(int) (((long) 0)), BgL_lociz00_11);
							BgL_res1261z00_264 =
								BGl_parsezd2idzf2usez20zzast_identz00(BgL_idz00_9,
								BgL_locz00_10, BgL_zc3z04anonymousza31222ze3z87_411);
						}
						BgL_arg1073z00_114 = BgL_res1261z00_264;
					}
					return ((BgL_typez00_bglt) CDR(BgL_arg1073z00_114));
				}
			else
				{	/* Ast/ident.scm 74 */
					return
						((BgL_typez00_bglt)
						BGl_userzd2errorzd2zztools_errorz00(BGl_string1317z00zzast_identz00,
							BGl_string1318z00zzast_identz00, BgL_idz00_9, BNIL));
				}
		}

	}



/* &type-of-id/import-location */
	BgL_typez00_bglt
		BGl_z62typezd2ofzd2idzf2importzd2locationz42zzast_identz00(obj_t
		BgL_envz00_412, obj_t BgL_idz00_413, obj_t BgL_locz00_414,
		obj_t BgL_lociz00_415)
	{
		{	/* Ast/ident.scm 73 */
			return
				BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00(BgL_idz00_413,
				BgL_locz00_414, BgL_lociz00_415);
		}

	}



/* &<@anonymous:1222> */
	obj_t BGl_z62zc3z04anonymousza31222ze3ze5zzast_identz00(obj_t BgL_envz00_416,
		obj_t BgL_tidz00_418, obj_t BgL_locz00_419)
	{
		{	/* Ast/ident.scm 165 */
			{	/* Ast/ident.scm 165 */
				obj_t BgL_lociz00_417;

				BgL_lociz00_417 = PROCEDURE_REF(BgL_envz00_416, (int) (((long) 0)));
				return
					((obj_t)
					BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(BgL_tidz00_418,
						BgL_locz00_419, BgL_lociz00_417));
			}
		}

	}



/* id-of-id */
	BGL_EXPORTED_DEF obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t BgL_idz00_12,
		obj_t BgL_locz00_13)
	{
		{	/* Ast/ident.scm 81 */
			if (SYMBOLP(BgL_idz00_12))
				{	/* Ast/ident.scm 82 */
					return
						CAR(BGl_parsezd2idzf2usez20zzast_identz00(BgL_idz00_12,
							BgL_locz00_13, BGl_usezd2typez12zd2envz12zztype_envz00));
				}
			else
				{	/* Ast/ident.scm 82 */
					return
						BGl_userzd2errorzd2zztools_errorz00(BGl_string1319z00zzast_identz00,
						BGl_string1317z00zzast_identz00, BgL_idz00_12, BNIL);
				}
		}

	}



/* &id-of-id */
	obj_t BGl_z62idzd2ofzd2idz62zzast_identz00(obj_t BgL_envz00_420,
		obj_t BgL_idz00_421, obj_t BgL_locz00_422)
	{
		{	/* Ast/ident.scm 81 */
			return BGl_idzd2ofzd2idz00zzast_identz00(BgL_idz00_421, BgL_locz00_422);
		}

	}



/* fast-id-of-id */
	BGL_EXPORTED_DEF obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t
		BgL_idz00_14, obj_t BgL_locz00_15)
	{
		{	/* Ast/ident.scm 89 */
			{
				obj_t BgL_idz00_129;

				if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_idz00_14))
					{	/* Ast/ident.scm 104 */
						return
							BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0)));
					}
				else
					{	/* Ast/ident.scm 106 */
						bool_t BgL_test1365z00_562;

						if (PAIRP(BgL_idz00_14))
							{	/* Ast/ident.scm 106 */
								obj_t BgL_tmpz00_565;

								BgL_tmpz00_565 = CAR(BgL_idz00_14);
								BgL_test1365z00_562 = SYMBOLP(BgL_tmpz00_565);
							}
						else
							{	/* Ast/ident.scm 106 */
								BgL_test1365z00_562 = ((bool_t) 0);
							}
						if (BgL_test1365z00_562)
							{	/* Ast/ident.scm 106 */
								BgL_idz00_129 = CAR(BgL_idz00_14);
							BgL_zc3z04anonymousza31104ze3z87_130:
								{	/* Ast/ident.scm 91 */
									obj_t BgL_stringz00_131;

									{	/* Ast/ident.scm 91 */
										obj_t BgL_res1264z00_271;

										{	/* Ast/ident.scm 91 */
											obj_t BgL_arg1466z00_270;

											BgL_arg1466z00_270 =
												SYMBOL_TO_STRING(((obj_t) BgL_idz00_129));
											BgL_res1264z00_271 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_270);
										}
										BgL_stringz00_131 = BgL_res1264z00_271;
									}
									{	/* Ast/ident.scm 91 */
										long BgL_lenz00_132;

										BgL_lenz00_132 = STRING_LENGTH(BgL_stringz00_131);
										{	/* Ast/ident.scm 92 */

											{
												long BgL_walkerz00_134;

												BgL_walkerz00_134 = ((long) 0);
											BgL_zc3z04anonymousza31105ze3z87_135:
												if ((BgL_walkerz00_134 == BgL_lenz00_132))
													{	/* Ast/ident.scm 95 */
														return BgL_idz00_129;
													}
												else
													{	/* Ast/ident.scm 97 */
														bool_t BgL_test1372z00_574;

														if (
															(STRING_REF(BgL_stringz00_131,
																	BgL_walkerz00_134) == ((unsigned char) ':')))
															{	/* Ast/ident.scm 97 */
																if (
																	(BgL_walkerz00_134 <
																		(BgL_lenz00_132 - ((long) 1))))
																	{	/* Ast/ident.scm 98 */
																		BgL_test1372z00_574 =
																			(STRING_REF(BgL_stringz00_131,
																				(BgL_walkerz00_134 + ((long) 1))) ==
																			((unsigned char) ':'));
																	}
																else
																	{	/* Ast/ident.scm 98 */
																		BgL_test1372z00_574 = ((bool_t) 0);
																	}
															}
														else
															{	/* Ast/ident.scm 97 */
																BgL_test1372z00_574 = ((bool_t) 0);
															}
														if (BgL_test1372z00_574)
															{	/* Ast/ident.scm 97 */
																return
																	bstring_to_symbol(c_substring
																	(BgL_stringz00_131, ((long) 0),
																		BgL_walkerz00_134));
															}
														else
															{
																long BgL_walkerz00_586;

																BgL_walkerz00_586 =
																	(BgL_walkerz00_134 + ((long) 1));
																BgL_walkerz00_134 = BgL_walkerz00_586;
																goto BgL_zc3z04anonymousza31105ze3z87_135;
															}
													}
											}
										}
									}
								}
							}
						else
							{	/* Ast/ident.scm 106 */
								if (SYMBOLP(BgL_idz00_14))
									{
										obj_t BgL_idz00_591;

										BgL_idz00_591 = BgL_idz00_14;
										BgL_idz00_129 = BgL_idz00_591;
										goto BgL_zc3z04anonymousza31104ze3z87_130;
									}
								else
									{	/* Ast/ident.scm 108 */
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string1319z00zzast_identz00,
											BGl_string1317z00zzast_identz00, BgL_idz00_14, BNIL);
									}
							}
					}
			}
		}

	}



/* &fast-id-of-id */
	obj_t BGl_z62fastzd2idzd2ofzd2idzb0zzast_identz00(obj_t BgL_envz00_423,
		obj_t BgL_idz00_424, obj_t BgL_locz00_425)
	{
		{	/* Ast/ident.scm 89 */
			return
				BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_idz00_424, BgL_locz00_425);
		}

	}



/* parse-id/use */
	obj_t BGl_parsezd2idzf2usez20zzast_identz00(obj_t BgL_idz00_16,
		obj_t BgL_locz00_17, obj_t BgL_usezd2typezd2_18)
	{
		{	/* Ast/ident.scm 116 */
			if (SYMBOLP(BgL_idz00_16))
				{	/* Ast/ident.scm 119 */
					obj_t BgL_stringz00_157;

					{	/* Ast/ident.scm 119 */
						obj_t BgL_res1281z00_311;

						{	/* Ast/ident.scm 119 */
							obj_t BgL_arg1466z00_310;

							BgL_arg1466z00_310 = SYMBOL_TO_STRING(BgL_idz00_16);
							BgL_res1281z00_311 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_310);
						}
						BgL_stringz00_157 = BgL_res1281z00_311;
					}
					{	/* Ast/ident.scm 119 */
						long BgL_lenz00_158;

						BgL_lenz00_158 = STRING_LENGTH(BgL_stringz00_157);
						{	/* Ast/ident.scm 120 */

							{
								long BgL_walkerz00_160;
								long BgL_idzd2stopzd2_161;
								long BgL_typezd2startzd2_162;

								BgL_walkerz00_160 = ((long) 0);
								BgL_idzd2stopzd2_161 = ((long) 0);
								BgL_typezd2startzd2_162 = ((long) 0);
							BgL_zc3z04anonymousza31128ze3z87_163:
								if ((BgL_walkerz00_160 == BgL_lenz00_158))
									{	/* Ast/ident.scm 127 */
										bool_t BgL_test1378z00_601;

										if ((BgL_idzd2stopzd2_161 == ((long) 0)))
											{	/* Ast/ident.scm 127 */
												BgL_test1378z00_601 =
													(BgL_typezd2startzd2_162 > ((long) 0));
											}
										else
											{	/* Ast/ident.scm 127 */
												BgL_test1378z00_601 = ((bool_t) 0);
											}
										if (BgL_test1378z00_601)
											{	/* Ast/ident.scm 130 */
												obj_t BgL_idz00_167;
												obj_t BgL_tidz00_168;

												BgL_idz00_167 =
													bstring_to_symbol(BGl_string1320z00zzast_identz00);
												BgL_tidz00_168 =
													bstring_to_symbol(c_substring(BgL_stringz00_157,
														BgL_typezd2startzd2_162, BgL_lenz00_158));
												{	/* Ast/ident.scm 133 */
													obj_t BgL_arg1133z00_169;

													BgL_arg1133z00_169 =
														PROCEDURE_ENTRY(BgL_usezd2typezd2_18)
														(BgL_usezd2typezd2_18, BgL_tidz00_168,
														BgL_locz00_17, BEOA);
													return MAKE_YOUNG_PAIR(BgL_idz00_167,
														BgL_arg1133z00_169);
												}
											}
										else
											{	/* Ast/ident.scm 127 */
												if ((BgL_idzd2stopzd2_161 == ((long) 0)))
													{	/* Ast/ident.scm 135 */
														BgL_typez00_bglt BgL_arg1140z00_172;

														BgL_arg1140z00_172 =
															BGl_getzd2defaultzd2typez00zztype_cachez00();
														return
															MAKE_YOUNG_PAIR(BgL_idz00_16,
															((obj_t) BgL_arg1140z00_172));
													}
												else
													{	/* Ast/ident.scm 134 */
														if ((BgL_typezd2startzd2_162 == BgL_lenz00_158))
															{	/* Ast/ident.scm 141 */
																obj_t BgL_arg1145z00_174;

																{	/* Ast/ident.scm 141 */
																	BgL_typez00_bglt BgL_arg1155z00_176;

																	BgL_arg1155z00_176 =
																		BGl_getzd2defaultzd2typez00zztype_cachez00
																		();
																	BgL_arg1145z00_174 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
																		((obj_t) BgL_arg1155z00_176));
																}
																{	/* Ast/ident.scm 138 */
																	obj_t BgL_list1146z00_175;

																	BgL_list1146z00_175 =
																		MAKE_YOUNG_PAIR(BgL_arg1145z00_174, BNIL);
																	return
																		BGl_userzd2errorzd2zztools_errorz00
																		(BGl_string1321z00zzast_identz00,
																		BGl_string1322z00zzast_identz00,
																		BgL_idz00_16, BgL_list1146z00_175);
																}
															}
														else
															{	/* Ast/ident.scm 143 */
																obj_t BgL_idz00_177;
																obj_t BgL_tidz00_178;

																BgL_idz00_177 =
																	bstring_to_symbol(c_substring
																	(BgL_stringz00_157, ((long) 0),
																		BgL_idzd2stopzd2_161));
																BgL_tidz00_178 =
																	bstring_to_symbol(c_substring
																	(BgL_stringz00_157, BgL_typezd2startzd2_162,
																		BgL_lenz00_158));
																{	/* Ast/ident.scm 146 */
																	obj_t BgL_arg1156z00_179;

																	BgL_arg1156z00_179 =
																		PROCEDURE_ENTRY(BgL_usezd2typezd2_18)
																		(BgL_usezd2typezd2_18, BgL_tidz00_178,
																		BgL_locz00_17, BEOA);
																	return MAKE_YOUNG_PAIR(BgL_idz00_177,
																		BgL_arg1156z00_179);
																}
															}
													}
											}
									}
								else
									{	/* Ast/ident.scm 147 */
										bool_t BgL_test1390z00_637;

										if (
											(STRING_REF(BgL_stringz00_157,
													BgL_walkerz00_160) == ((unsigned char) ':')))
											{	/* Ast/ident.scm 147 */
												if ((BgL_walkerz00_160 < (BgL_lenz00_158 - ((long) 1))))
													{	/* Ast/ident.scm 148 */
														BgL_test1390z00_637 =
															(STRING_REF(BgL_stringz00_157,
																(BgL_walkerz00_160 + ((long) 1))) ==
															((unsigned char) ':'));
													}
												else
													{	/* Ast/ident.scm 148 */
														BgL_test1390z00_637 = ((bool_t) 0);
													}
											}
										else
											{	/* Ast/ident.scm 147 */
												BgL_test1390z00_637 = ((bool_t) 0);
											}
										if (BgL_test1390z00_637)
											{	/* Ast/ident.scm 147 */
												if ((BgL_typezd2startzd2_162 > ((long) 0)))
													{	/* Ast/ident.scm 154 */
														obj_t BgL_arg1179z00_193;

														{	/* Ast/ident.scm 154 */
															BgL_typez00_bglt BgL_arg1186z00_195;

															BgL_arg1186z00_195 =
																BGl_getzd2defaultzd2typez00zztype_cachez00();
															BgL_arg1179z00_193 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
																((obj_t) BgL_arg1186z00_195));
														}
														{	/* Ast/ident.scm 151 */
															obj_t BgL_list1180z00_194;

															BgL_list1180z00_194 =
																MAKE_YOUNG_PAIR(BgL_arg1179z00_193, BNIL);
															return
																BGl_userzd2errorzd2zztools_errorz00
																(BGl_string1321z00zzast_identz00,
																BGl_string1322z00zzast_identz00, BgL_idz00_16,
																BgL_list1180z00_194);
														}
													}
												else
													{
														long BgL_typezd2startzd2_658;
														long BgL_idzd2stopzd2_657;
														long BgL_walkerz00_655;

														BgL_walkerz00_655 =
															(BgL_walkerz00_160 + ((long) 2));
														BgL_idzd2stopzd2_657 = BgL_walkerz00_160;
														BgL_typezd2startzd2_658 =
															(BgL_walkerz00_160 + ((long) 2));
														BgL_typezd2startzd2_162 = BgL_typezd2startzd2_658;
														BgL_idzd2stopzd2_161 = BgL_idzd2stopzd2_657;
														BgL_walkerz00_160 = BgL_walkerz00_655;
														goto BgL_zc3z04anonymousza31128ze3z87_163;
													}
											}
										else
											{
												long BgL_walkerz00_660;

												BgL_walkerz00_660 = (BgL_walkerz00_160 + ((long) 1));
												BgL_walkerz00_160 = BgL_walkerz00_660;
												goto BgL_zc3z04anonymousza31128ze3z87_163;
											}
									}
							}
						}
					}
				}
			else
				{	/* Ast/ident.scm 117 */
					return
						BGl_userzd2errorzd2zztools_errorz00(BGl_string1319z00zzast_identz00,
						BGl_string1317z00zzast_identz00, BgL_idz00_16, BNIL);
				}
		}

	}



/* parse-id/import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_parsezd2idzf2importzd2locationzf2zzast_identz00(obj_t BgL_idz00_19,
		obj_t BgL_locz00_20, obj_t BgL_lociz00_21)
	{
		{	/* Ast/ident.scm 162 */
			{	/* Ast/ident.scm 165 */
				obj_t BgL_zc3z04anonymousza31222ze3z87_426;

				BgL_zc3z04anonymousza31222ze3z87_426 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31222ze31315ze5zzast_identz00,
					(int) (((long) 2)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31222ze3z87_426, (int) (((long) 0)),
					BgL_lociz00_21);
				return BGl_parsezd2idzf2usez20zzast_identz00(BgL_idz00_19,
					BgL_locz00_20, BgL_zc3z04anonymousza31222ze3z87_426);
			}
		}

	}



/* &parse-id/import-location */
	obj_t BGl_z62parsezd2idzf2importzd2locationz90zzast_identz00(obj_t
		BgL_envz00_427, obj_t BgL_idz00_428, obj_t BgL_locz00_429,
		obj_t BgL_lociz00_430)
	{
		{	/* Ast/ident.scm 162 */
			return
				BGl_parsezd2idzf2importzd2locationzf2zzast_identz00(BgL_idz00_428,
				BgL_locz00_429, BgL_lociz00_430);
		}

	}



/* &<@anonymous:1222>1315 */
	obj_t BGl_z62zc3z04anonymousza31222ze31315ze5zzast_identz00(obj_t
		BgL_envz00_431, obj_t BgL_tidz00_433, obj_t BgL_locz00_434)
	{
		{	/* Ast/ident.scm 165 */
			{	/* Ast/ident.scm 165 */
				obj_t BgL_lociz00_432;

				BgL_lociz00_432 = PROCEDURE_REF(BgL_envz00_431, (int) (((long) 0)));
				return
					((obj_t)
					BGl_usezd2typezf2importzd2locz12ze0zztype_envz00(BgL_tidz00_433,
						BgL_locz00_434, BgL_lociz00_432));
			}
		}

	}



/* parse-id */
	BGL_EXPORTED_DEF obj_t BGl_parsezd2idzd2zzast_identz00(obj_t BgL_idz00_22,
		obj_t BgL_locz00_23)
	{
		{	/* Ast/ident.scm 170 */
			return
				BGl_parsezd2idzf2usez20zzast_identz00(BgL_idz00_22, BgL_locz00_23,
				BGl_usezd2typez12zd2envz12zztype_envz00);
		}

	}



/* &parse-id */
	obj_t BGl_z62parsezd2idzb0zzast_identz00(obj_t BgL_envz00_435,
		obj_t BgL_idz00_436, obj_t BgL_locz00_437)
	{
		{	/* Ast/ident.scm 170 */
			return BGl_parsezd2idzd2zzast_identz00(BgL_idz00_436, BgL_locz00_437);
		}

	}



/* id->name */
	BGL_EXPORTED_DEF obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t BgL_idz00_24)
	{
		{	/* Ast/ident.scm 176 */
			{	/* Ast/ident.scm 177 */
				obj_t BgL_namez00_375;

				{	/* Ast/ident.scm 177 */
					obj_t BgL_arg1223z00_376;

					{	/* Ast/ident.scm 177 */
						obj_t BgL_res1306z00_379;

						{	/* Ast/ident.scm 177 */
							obj_t BgL_arg1466z00_378;

							BgL_arg1466z00_378 = SYMBOL_TO_STRING(((obj_t) BgL_idz00_24));
							BgL_res1306z00_379 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_378);
						}
						BgL_arg1223z00_376 = BgL_res1306z00_379;
					}
					BgL_namez00_375 =
						BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg1223z00_376);
				}
				return bigloo_mangle(BgL_namez00_375);
			}
		}

	}



/* &id->name */
	obj_t BGl_z62idzd2ze3namez53zzast_identz00(obj_t BgL_envz00_438,
		obj_t BgL_idz00_439)
	{
		{	/* Ast/ident.scm 176 */
			return BGl_idzd2ze3namez31zzast_identz00(BgL_idz00_439);
		}

	}



/* local-id->name */
	BGL_EXPORTED_DEF obj_t BGl_localzd2idzd2ze3nameze3zzast_identz00(obj_t
		BgL_idz00_25)
	{
		{	/* Ast/ident.scm 183 */
			{	/* Ast/ident.scm 184 */
				obj_t BgL_res1308z00_385;

				{	/* Ast/ident.scm 177 */
					obj_t BgL_namez00_380;

					{	/* Ast/ident.scm 177 */
						obj_t BgL_arg1223z00_381;

						{	/* Ast/ident.scm 177 */
							obj_t BgL_res1307z00_384;

							{	/* Ast/ident.scm 177 */
								obj_t BgL_arg1466z00_383;

								BgL_arg1466z00_383 = SYMBOL_TO_STRING(BgL_idz00_25);
								BgL_res1307z00_384 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_383);
							}
							BgL_arg1223z00_381 = BgL_res1307z00_384;
						}
						BgL_namez00_380 =
							BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg1223z00_381);
					}
					BgL_res1308z00_385 = bigloo_mangle(BgL_namez00_380);
				}
				return BgL_res1308z00_385;
			}
		}

	}



/* &local-id->name */
	obj_t BGl_z62localzd2idzd2ze3namez81zzast_identz00(obj_t BgL_envz00_440,
		obj_t BgL_idz00_441)
	{
		{	/* Ast/ident.scm 183 */
			return BGl_localzd2idzd2ze3nameze3zzast_identz00(BgL_idz00_441);
		}

	}



/* check-id */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2idzd2zzast_identz00(obj_t BgL_idz00_26,
		obj_t BgL_srcz00_27)
	{
		{	/* Ast/ident.scm 189 */
			{	/* Ast/ident.scm 190 */
				bool_t BgL_test1394z00_687;

				{	/* Ast/ident.scm 190 */
					obj_t BgL_arg1232z00_218;

					{	/* Ast/ident.scm 190 */
						obj_t BgL_arg1239z00_219;

						BgL_arg1239z00_219 = CAR(BgL_idz00_26);
						{	/* Ast/ident.scm 190 */
							obj_t BgL_res1309z00_389;

							{	/* Ast/ident.scm 190 */
								obj_t BgL_arg1466z00_388;

								BgL_arg1466z00_388 =
									SYMBOL_TO_STRING(((obj_t) BgL_arg1239z00_219));
								BgL_res1309z00_389 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_388);
							}
							BgL_arg1232z00_218 = BgL_res1309z00_389;
						}
					}
					BgL_test1394z00_687 =
						(STRING_LENGTH(BgL_arg1232z00_218) == ((long) 0));
				}
				if (BgL_test1394z00_687)
					{	/* Ast/ident.scm 190 */
						return
							BGl_userzd2errorzd2zztools_errorz00
							(BGl_string1317z00zzast_identz00, BGl_string1318z00zzast_identz00,
							BgL_srcz00_27, BNIL);
					}
				else
					{	/* Ast/ident.scm 190 */
						return BgL_idz00_26;
					}
			}
		}

	}



/* &check-id */
	obj_t BGl_z62checkzd2idzb0zzast_identz00(obj_t BgL_envz00_442,
		obj_t BgL_idz00_443, obj_t BgL_srcz00_444)
	{
		{	/* Ast/ident.scm 189 */
			return BGl_checkzd2idzd2zzast_identz00(BgL_idz00_443, BgL_srcz00_444);
		}

	}



/* parse-dsssl */
	BGL_EXPORTED_DEF obj_t BGl_parsezd2dssslzd2zzast_identz00(obj_t BgL_objz00_28)
	{
		{	/* Ast/ident.scm 197 */
			if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_objz00_28))
				{	/* Ast/ident.scm 199 */
					return
						MAKE_YOUNG_PAIR(BgL_objz00_28, BGl_za2objza2z00zztype_cachez00);
				}
			else
				{	/* Ast/ident.scm 199 */
					if (CBOOL(BGl_dssslzd2defaultedzd2formalzf3zf3zztools_dssslz00
							(BgL_objz00_28)))
						{	/* Ast/ident.scm 201 */
							return
								MAKE_YOUNG_PAIR(BgL_objz00_28, BGl_za2objza2z00zztype_cachez00);
						}
					else
						{	/* Ast/ident.scm 201 */
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string1323z00zzast_identz00,
								BGl_string1320z00zzast_identz00, BgL_objz00_28, BNIL);
						}
				}
		}

	}



/* &parse-dsssl */
	obj_t BGl_z62parsezd2dssslzb0zzast_identz00(obj_t BgL_envz00_445,
		obj_t BgL_objz00_446)
	{
		{	/* Ast/ident.scm 197 */
			return BGl_parsezd2dssslzd2zzast_identz00(BgL_objz00_446);
		}

	}



/* mark-symbol-non-user! */
	BGL_EXPORTED_DEF obj_t
		BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t BgL_symz00_29)
	{
		{	/* Ast/ident.scm 216 */
			BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_symz00_29,
				CNST_TABLE_REF(((long) 2)), BTRUE);
			return BgL_symz00_29;
		}

	}



/* &mark-symbol-non-user! */
	obj_t BGl_z62markzd2symbolzd2nonzd2userz12za2zzast_identz00(obj_t
		BgL_envz00_447, obj_t BgL_symz00_448)
	{
		{	/* Ast/ident.scm 216 */
			return BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(BgL_symz00_448);
		}

	}



/* user-symbol? */
	BGL_EXPORTED_DEF bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t
		BgL_symbolz00_30)
	{
		{	/* Ast/ident.scm 225 */
			if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_symbolz00_30,
						CNST_TABLE_REF(((long) 2)))))
				{	/* Ast/ident.scm 226 */
					return ((bool_t) 0);
				}
			else
				{	/* Ast/ident.scm 226 */
					return ((bool_t) 1);
				}
		}

	}



/* &user-symbol? */
	obj_t BGl_z62userzd2symbolzf3z43zzast_identz00(obj_t BgL_envz00_449,
		obj_t BgL_symbolz00_450)
	{
		{	/* Ast/ident.scm 225 */
			return BBOOL(BGl_userzd2symbolzf3z21zzast_identz00(BgL_symbolz00_450));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_identz00()
	{
		{	/* Ast/ident.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_identz00()
	{
		{	/* Ast/ident.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_identz00()
	{
		{	/* Ast/ident.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_identz00()
	{
		{	/* Ast/ident.scm 14 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1324z00zzast_identz00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 275867862),
				BSTRING_TO_STRING(BGl_string1324z00zzast_identz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1324z00zzast_identz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1324z00zzast_identz00));
			return
				BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1324z00zzast_identz00));
		}

	}

#ifdef __cplusplus
}
#endif
