/*===========================================================================*/
/*   (Expand/define.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/define.scm) */
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


	static obj_t BGl_z62expandzd2genericzb0zzexpand_definez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2inlinezd2zzexpand_definez00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2setz12zc0zzexpand_definez00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31687ze3ze5zzexpand_definez00(obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_definez00();
	static obj_t BGl_z62expandzd2definezb0zzexpand_definez00(obj_t, obj_t, obj_t);
	static obj_t BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31305ze3ze5zzexpand_definez00(obj_t);
	BGL_IMPORT obj_t BGl_warningzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_definez00();
	static obj_t BGl_internalzd2expandzd2setz12ze70zf5zzexpand_definez00(obj_t,
		obj_t);
	extern obj_t BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t);
	static obj_t BGl_z62expandzd2setz12za2zzexpand_definez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31720ze3ze5zzexpand_definez00(obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_definez00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2inlinezb0zzexpand_definez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31635ze3ze5zzexpand_definez00(obj_t);
	static obj_t
		BGl_expandzd2externalzd2definezd2inlinezd2zzexpand_definez00(obj_t, obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00(obj_t);
	static obj_t BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzexpand_definez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31780ze3ze5zzexpand_definez00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_definez00 = BUNSPEC;
	extern obj_t BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzexpand_definez00();
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2genericzd2zzexpand_definez00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_definez00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_expandzd2internalzd2definez00zzexpand_definez00(obj_t,
		obj_t);
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_expandzd2methodzd2zzexpand_definez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31330ze3ze5zzexpand_definez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00(obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_expandzd2externalzd2definez00zzexpand_definez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2definezd2zzexpand_definez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_definez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_definez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_definez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_definez00();
	static obj_t BGl_dozd2inlinezf2genericzf2methodzd2zzexpand_definez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31687ze31938ze5zzexpand_definez00(obj_t);
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	extern obj_t BGl_expandzd2argszd2zzexpand_lambdaz00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2methodzb0zzexpand_definez00(obj_t, obj_t, obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2methodzd2envz00zzexpand_definez00,
		BgL_bgl_za762expandza7d2meth1954z00,
		BGl_z62expandzd2methodzb0zzexpand_definez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2setz12zd2envz12zzexpand_definez00,
		BgL_bgl_za762expandza7d2setza71955za7,
		BGl_z62expandzd2setz12za2zzexpand_definez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2inlinezd2envz00zzexpand_definez00,
		BgL_bgl_za762expandza7d2inli1956z00,
		BGl_z62expandzd2inlinezb0zzexpand_definez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2genericzd2envz00zzexpand_definez00,
		BgL_bgl_za762expandza7d2gene1957z00,
		BGl_z62expandzd2genericzb0zzexpand_definez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1939z00zzexpand_definez00,
		BgL_bgl_string1939za700za7za7e1958za7, "Illegal `define' form", 21);
	      DEFINE_STRING(BGl_string1940z00zzexpand_definez00,
		BgL_bgl_string1940za700za7za7e1959za7, "define", 6);
	      DEFINE_STRING(BGl_string1941z00zzexpand_definez00,
		BgL_bgl_string1941za700za7za7e1960za7, "Illegal `set!' form", 19);
	      DEFINE_STRING(BGl_string1942z00zzexpand_definez00,
		BgL_bgl_string1942za700za7za7e1961za7, "Illegal `define-method' form", 28);
	      DEFINE_STRING(BGl_string1943z00zzexpand_definez00,
		BgL_bgl_string1943za700za7za7e1962za7, "Illegal `define-inline' form", 28);
	      DEFINE_STRING(BGl_string1944z00zzexpand_definez00,
		BgL_bgl_string1944za700za7za7e1963za7, "Illegal `define-generic' form", 29);
	      DEFINE_STRING(BGl_string1945z00zzexpand_definez00,
		BgL_bgl_string1945za700za7za7e1964za7, "top-level", 9);
	      DEFINE_STRING(BGl_string1946z00zzexpand_definez00,
		BgL_bgl_string1946za700za7za7e1965za7,
		"Disabling optimization for library function", 43);
	      DEFINE_STRING(BGl_string1947z00zzexpand_definez00,
		BgL_bgl_string1947za700za7za7e1966za7,
		"Disabling debug information for library function", 48);
	      DEFINE_STRING(BGl_string1948z00zzexpand_definez00,
		BgL_bgl_string1948za700za7za7e1967za7, "expand_define", 13);
	      DEFINE_STRING(BGl_string1949z00zzexpand_definez00,
		BgL_bgl_string1949za700za7za7e1968za7,
		"expander -> @ set! define _ lambda ", 35);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2definezd2envz00zzexpand_definez00,
		BgL_bgl_za762expandza7d2defi1969z00,
		BGl_z62expandzd2definezb0zzexpand_definez00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzexpand_definez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_definez00(long
		BgL_checksumz00_1257, char *BgL_fromz00_1258)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_definez00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_definez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_definez00();
					BGl_libraryzd2moduleszd2initz00zzexpand_definez00();
					BGl_cnstzd2initzd2zzexpand_definez00();
					BGl_importedzd2moduleszd2initz00zzexpand_definez00();
					return BGl_toplevelzd2initzd2zzexpand_definez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_definez00()
	{
		{	/* Expand/define.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_define");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_define");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_define");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_define");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_define");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_define");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"expand_define");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"expand_define");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_definez00()
	{
		{	/* Expand/define.scm 15 */
			{	/* Expand/define.scm 15 */
				obj_t BgL_cportz00_1214;

				{	/* Expand/define.scm 15 */
					obj_t BgL_stringz00_1222;

					BgL_stringz00_1222 = BGl_string1949z00zzexpand_definez00;
					{	/* Expand/define.scm 15 */
						obj_t BgL_startz00_1223;

						BgL_startz00_1223 = BINT(((long) 0));
						{	/* Expand/define.scm 15 */
							obj_t BgL_endz00_1224;

							BgL_endz00_1224 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1222)));
							{	/* Expand/define.scm 15 */

								BgL_cportz00_1214 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1222, BgL_startz00_1223, BgL_endz00_1224);
				}}}}
				{
					long BgL_iz00_1215;

					BgL_iz00_1215 = ((long) 6);
				BgL_loopz00_1216:
					if ((BgL_iz00_1215 == ((long) -1)))
						{	/* Expand/define.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/define.scm 15 */
							{	/* Expand/define.scm 15 */
								obj_t BgL_arg1951z00_1218;

								{	/* Expand/define.scm 15 */

									{	/* Expand/define.scm 15 */
										obj_t BgL_locationz00_1220;

										BgL_locationz00_1220 = BBOOL(((bool_t) 0));
										{	/* Expand/define.scm 15 */

											BgL_arg1951z00_1218 =
												BGl_readz00zz__readerz00(BgL_cportz00_1214,
												BgL_locationz00_1220);
										}
									}
								}
								{	/* Expand/define.scm 15 */
									int BgL_tmpz00_1284;

									BgL_tmpz00_1284 = (int) (BgL_iz00_1215);
									CNST_TABLE_SET(BgL_tmpz00_1284, BgL_arg1951z00_1218);
							}}
							{	/* Expand/define.scm 15 */
								int BgL_auxz00_1221;

								BgL_auxz00_1221 = (int) ((BgL_iz00_1215 - ((long) 1)));
								{
									long BgL_iz00_1289;

									BgL_iz00_1289 = (long) (BgL_auxz00_1221);
									BgL_iz00_1215 = BgL_iz00_1289;
									goto BgL_loopz00_1216;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_definez00()
	{
		{	/* Expand/define.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_definez00()
	{
		{	/* Expand/define.scm 15 */
			return BUNSPEC;
		}

	}



/* expand-define */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2definezd2zzexpand_definez00(obj_t
		BgL_xz00_13, obj_t BgL_ez00_14)
	{
		{	/* Expand/define.scm 44 */
			if (CBOOL(BGl_internalzd2definitionzf3z21zzexpand_lambdaz00))
				{	/* Expand/define.scm 48 */
					return
						BGl_expandzd2internalzd2definez00zzexpand_definez00(BgL_xz00_13,
						BgL_ez00_14);
				}
			else
				{	/* Expand/define.scm 48 */
					return
						BGl_expandzd2externalzd2definez00zzexpand_definez00(BgL_xz00_13,
						BgL_ez00_14);
				}
		}

	}



/* &expand-define */
	obj_t BGl_z62expandzd2definezb0zzexpand_definez00(obj_t BgL_envz00_1134,
		obj_t BgL_xz00_1135, obj_t BgL_ez00_1136)
	{
		{	/* Expand/define.scm 44 */
			return
				BGl_expandzd2definezd2zzexpand_definez00(BgL_xz00_1135, BgL_ez00_1136);
		}

	}



/* expand-external-define */
	obj_t BGl_expandzd2externalzd2definez00zzexpand_definez00(obj_t BgL_xz00_15,
		obj_t BgL_ez00_16)
	{
		{	/* Expand/define.scm 55 */
			BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
			{	/* Expand/define.scm 57 */
				obj_t BgL_resz00_123;

				{

					if (PAIRP(BgL_xz00_15))
						{	/* Expand/define.scm 57 */
							obj_t BgL_cdrzd2375zd2_134;

							BgL_cdrzd2375zd2_134 = CDR(BgL_xz00_15);
							if (PAIRP(BgL_cdrzd2375zd2_134))
								{	/* Expand/define.scm 57 */
									obj_t BgL_carzd2379zd2_136;
									obj_t BgL_cdrzd2380zd2_137;

									BgL_carzd2379zd2_136 = CAR(BgL_cdrzd2375zd2_134);
									BgL_cdrzd2380zd2_137 = CDR(BgL_cdrzd2375zd2_134);
									if (PAIRP(BgL_carzd2379zd2_136))
										{	/* Expand/define.scm 57 */
											obj_t BgL_carzd2383zd2_139;

											BgL_carzd2383zd2_139 = CAR(BgL_carzd2379zd2_136);
											if (SYMBOLP(BgL_carzd2383zd2_139))
												{	/* Expand/define.scm 57 */
													if (NULLP(BgL_cdrzd2380zd2_137))
														{	/* Expand/define.scm 57 */
															obj_t BgL_carzd2399zd2_143;
															obj_t BgL_cdrzd2400zd2_144;

															BgL_carzd2399zd2_143 =
																CAR(((obj_t) BgL_cdrzd2375zd2_134));
															BgL_cdrzd2400zd2_144 =
																CDR(((obj_t) BgL_cdrzd2375zd2_134));
															if (SYMBOLP(BgL_carzd2399zd2_143))
																{	/* Expand/define.scm 57 */
																	if (PAIRP(BgL_cdrzd2400zd2_144))
																		{	/* Expand/define.scm 57 */
																			obj_t BgL_carzd2406zd2_147;

																			BgL_carzd2406zd2_147 =
																				CAR(BgL_cdrzd2400zd2_144);
																			if (PAIRP(BgL_carzd2406zd2_147))
																				{	/* Expand/define.scm 57 */
																					obj_t BgL_cdrzd2411zd2_149;

																					BgL_cdrzd2411zd2_149 =
																						CDR(BgL_carzd2406zd2_147);
																					if (
																						(CAR(BgL_carzd2406zd2_147) ==
																							CNST_TABLE_REF(((long) 0))))
																						{	/* Expand/define.scm 57 */
																							if (PAIRP(BgL_cdrzd2411zd2_149))
																								{	/* Expand/define.scm 57 */
																									obj_t BgL_cdrzd2415zd2_153;

																									BgL_cdrzd2415zd2_153 =
																										CDR(BgL_cdrzd2411zd2_149);
																									if (NULLP
																										(BgL_cdrzd2415zd2_153))
																										{	/* Expand/define.scm 57 */
																											obj_t
																												BgL_cdrzd2424zd2_155;
																											BgL_cdrzd2424zd2_155 =
																												CDR(BgL_xz00_15);
																											{	/* Expand/define.scm 57 */
																												obj_t
																													BgL_carzd2427zd2_156;
																												BgL_carzd2427zd2_156 =
																													CAR(((obj_t)
																														BgL_cdrzd2424zd2_155));
																												if (SYMBOLP
																													(BgL_carzd2427zd2_156))
																													{	/* Expand/define.scm 57 */
																														obj_t
																															BgL_arg1095z00_158;
																														BgL_arg1095z00_158 =
																															CDR(((obj_t)
																																BgL_cdrzd2424zd2_155));
																														BgL_resz00_123 =
																															BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																															(BgL_ez00_16,
																															BgL_carzd2427zd2_156,
																															BgL_arg1095z00_158,
																															BgL_xz00_15);
																													}
																												else
																													{	/* Expand/define.scm 57 */
																													BgL_tagzd2361zd2_131:
																														BgL_resz00_123 =
																															BGl_errorz00zz__errorz00
																															(BFALSE,
																															BGl_string1939z00zzexpand_definez00,
																															BgL_xz00_15);
																													}
																											}
																										}
																									else
																										{	/* Expand/define.scm 57 */
																											if (NULLP(CDR
																													(BgL_cdrzd2400zd2_144)))
																												{	/* Expand/define.scm 57 */
																													BgL_resz00_123 =
																														BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00
																														(BgL_ez00_16,
																														BgL_carzd2399zd2_143,
																														CAR
																														(BgL_cdrzd2411zd2_149),
																														BgL_cdrzd2415zd2_153,
																														BgL_xz00_15);
																												}
																											else
																												{	/* Expand/define.scm 57 */
																													obj_t
																														BgL_cdrzd2439zd2_162;
																													BgL_cdrzd2439zd2_162 =
																														CDR(BgL_xz00_15);
																													{	/* Expand/define.scm 57 */
																														obj_t
																															BgL_carzd2442zd2_163;
																														BgL_carzd2442zd2_163
																															=
																															CAR(((obj_t)
																																BgL_cdrzd2439zd2_162));
																														if (SYMBOLP
																															(BgL_carzd2442zd2_163))
																															{	/* Expand/define.scm 57 */
																																obj_t
																																	BgL_arg1103z00_165;
																																BgL_arg1103z00_165
																																	=
																																	CDR(((obj_t)
																																		BgL_cdrzd2439zd2_162));
																																BgL_resz00_123 =
																																	BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																																	(BgL_ez00_16,
																																	BgL_carzd2442zd2_163,
																																	BgL_arg1103z00_165,
																																	BgL_xz00_15);
																															}
																														else
																															{	/* Expand/define.scm 57 */
																																goto
																																	BgL_tagzd2361zd2_131;
																															}
																													}
																												}
																										}
																								}
																							else
																								{	/* Expand/define.scm 57 */
																									obj_t BgL_cdrzd2454zd2_167;

																									BgL_cdrzd2454zd2_167 =
																										CDR(BgL_xz00_15);
																									{	/* Expand/define.scm 57 */
																										obj_t BgL_carzd2457zd2_168;

																										BgL_carzd2457zd2_168 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2454zd2_167));
																										if (SYMBOLP
																											(BgL_carzd2457zd2_168))
																											{	/* Expand/define.scm 57 */
																												obj_t
																													BgL_arg1113z00_170;
																												BgL_arg1113z00_170 =
																													CDR(((obj_t)
																														BgL_cdrzd2454zd2_167));
																												BgL_resz00_123 =
																													BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																													(BgL_ez00_16,
																													BgL_carzd2457zd2_168,
																													BgL_arg1113z00_170,
																													BgL_xz00_15);
																											}
																										else
																											{	/* Expand/define.scm 57 */
																												goto
																													BgL_tagzd2361zd2_131;
																											}
																									}
																								}
																						}
																					else
																						{	/* Expand/define.scm 57 */
																							obj_t BgL_cdrzd2469zd2_171;

																							BgL_cdrzd2469zd2_171 =
																								CDR(BgL_xz00_15);
																							{	/* Expand/define.scm 57 */
																								obj_t BgL_carzd2472zd2_172;

																								BgL_carzd2472zd2_172 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2469zd2_171));
																								if (SYMBOLP
																									(BgL_carzd2472zd2_172))
																									{	/* Expand/define.scm 57 */
																										obj_t BgL_arg1115z00_174;

																										BgL_arg1115z00_174 =
																											CDR(
																											((obj_t)
																												BgL_cdrzd2469zd2_171));
																										BgL_resz00_123 =
																											BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																											(BgL_ez00_16,
																											BgL_carzd2472zd2_172,
																											BgL_arg1115z00_174,
																											BgL_xz00_15);
																									}
																								else
																									{	/* Expand/define.scm 57 */
																										goto BgL_tagzd2361zd2_131;
																									}
																							}
																						}
																				}
																			else
																				{	/* Expand/define.scm 57 */
																					obj_t BgL_carzd2487zd2_177;

																					BgL_carzd2487zd2_177 =
																						CAR(((obj_t) BgL_cdrzd2375zd2_134));
																					if (SYMBOLP(BgL_carzd2487zd2_177))
																						{	/* Expand/define.scm 57 */
																							obj_t BgL_arg1118z00_179;

																							BgL_arg1118z00_179 =
																								CDR(
																								((obj_t) BgL_cdrzd2375zd2_134));
																							BgL_resz00_123 =
																								BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																								(BgL_ez00_16,
																								BgL_carzd2487zd2_177,
																								BgL_arg1118z00_179,
																								BgL_xz00_15);
																						}
																					else
																						{	/* Expand/define.scm 57 */
																							goto BgL_tagzd2361zd2_131;
																						}
																				}
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			goto BgL_tagzd2361zd2_131;
																		}
																}
															else
																{	/* Expand/define.scm 57 */
																	goto BgL_tagzd2361zd2_131;
																}
														}
													else
														{	/* Expand/define.scm 57 */
															BgL_resz00_123 =
																BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00
																(BgL_ez00_16, BgL_carzd2383zd2_139,
																CDR(BgL_carzd2379zd2_136), BgL_cdrzd2380zd2_137,
																BgL_xz00_15);
														}
												}
											else
												{	/* Expand/define.scm 57 */
													obj_t BgL_carzd2510zd2_182;
													obj_t BgL_cdrzd2511zd2_183;

													BgL_carzd2510zd2_182 =
														CAR(((obj_t) BgL_cdrzd2375zd2_134));
													BgL_cdrzd2511zd2_183 =
														CDR(((obj_t) BgL_cdrzd2375zd2_134));
													if (SYMBOLP(BgL_carzd2510zd2_182))
														{	/* Expand/define.scm 57 */
															if (PAIRP(BgL_cdrzd2511zd2_183))
																{	/* Expand/define.scm 57 */
																	obj_t BgL_carzd2517zd2_186;

																	BgL_carzd2517zd2_186 =
																		CAR(BgL_cdrzd2511zd2_183);
																	if (PAIRP(BgL_carzd2517zd2_186))
																		{	/* Expand/define.scm 57 */
																			obj_t BgL_cdrzd2522zd2_188;

																			BgL_cdrzd2522zd2_188 =
																				CDR(BgL_carzd2517zd2_186);
																			if (
																				(CAR(BgL_carzd2517zd2_186) ==
																					CNST_TABLE_REF(((long) 0))))
																				{	/* Expand/define.scm 57 */
																					if (PAIRP(BgL_cdrzd2522zd2_188))
																						{	/* Expand/define.scm 57 */
																							obj_t BgL_cdrzd2526zd2_192;

																							BgL_cdrzd2526zd2_192 =
																								CDR(BgL_cdrzd2522zd2_188);
																							if (NULLP(BgL_cdrzd2526zd2_192))
																								{	/* Expand/define.scm 57 */
																									obj_t BgL_cdrzd2535zd2_194;

																									BgL_cdrzd2535zd2_194 =
																										CDR(BgL_xz00_15);
																									{	/* Expand/define.scm 57 */
																										obj_t BgL_carzd2538zd2_195;

																										BgL_carzd2538zd2_195 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2535zd2_194));
																										if (SYMBOLP
																											(BgL_carzd2538zd2_195))
																											{	/* Expand/define.scm 57 */
																												obj_t
																													BgL_arg1133z00_197;
																												BgL_arg1133z00_197 =
																													CDR(((obj_t)
																														BgL_cdrzd2535zd2_194));
																												BgL_resz00_123 =
																													BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																													(BgL_ez00_16,
																													BgL_carzd2538zd2_195,
																													BgL_arg1133z00_197,
																													BgL_xz00_15);
																											}
																										else
																											{	/* Expand/define.scm 57 */
																												goto
																													BgL_tagzd2361zd2_131;
																											}
																									}
																								}
																							else
																								{	/* Expand/define.scm 57 */
																									if (NULLP(CDR
																											(BgL_cdrzd2511zd2_183)))
																										{	/* Expand/define.scm 57 */
																											BgL_resz00_123 =
																												BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00
																												(BgL_ez00_16,
																												BgL_carzd2510zd2_182,
																												CAR
																												(BgL_cdrzd2522zd2_188),
																												BgL_cdrzd2526zd2_192,
																												BgL_xz00_15);
																										}
																									else
																										{	/* Expand/define.scm 57 */
																											obj_t
																												BgL_cdrzd2550zd2_201;
																											BgL_cdrzd2550zd2_201 =
																												CDR(BgL_xz00_15);
																											{	/* Expand/define.scm 57 */
																												obj_t
																													BgL_carzd2553zd2_202;
																												BgL_carzd2553zd2_202 =
																													CAR(((obj_t)
																														BgL_cdrzd2550zd2_201));
																												if (SYMBOLP
																													(BgL_carzd2553zd2_202))
																													{	/* Expand/define.scm 57 */
																														obj_t
																															BgL_arg1145z00_204;
																														BgL_arg1145z00_204 =
																															CDR(((obj_t)
																																BgL_cdrzd2550zd2_201));
																														BgL_resz00_123 =
																															BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																															(BgL_ez00_16,
																															BgL_carzd2553zd2_202,
																															BgL_arg1145z00_204,
																															BgL_xz00_15);
																													}
																												else
																													{	/* Expand/define.scm 57 */
																														goto
																															BgL_tagzd2361zd2_131;
																													}
																											}
																										}
																								}
																						}
																					else
																						{	/* Expand/define.scm 57 */
																							obj_t BgL_cdrzd2565zd2_206;

																							BgL_cdrzd2565zd2_206 =
																								CDR(BgL_xz00_15);
																							{	/* Expand/define.scm 57 */
																								obj_t BgL_carzd2568zd2_207;

																								BgL_carzd2568zd2_207 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2565zd2_206));
																								if (SYMBOLP
																									(BgL_carzd2568zd2_207))
																									{	/* Expand/define.scm 57 */
																										obj_t BgL_arg1155z00_209;

																										BgL_arg1155z00_209 =
																											CDR(
																											((obj_t)
																												BgL_cdrzd2565zd2_206));
																										BgL_resz00_123 =
																											BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																											(BgL_ez00_16,
																											BgL_carzd2568zd2_207,
																											BgL_arg1155z00_209,
																											BgL_xz00_15);
																									}
																								else
																									{	/* Expand/define.scm 57 */
																										goto BgL_tagzd2361zd2_131;
																									}
																							}
																						}
																				}
																			else
																				{	/* Expand/define.scm 57 */
																					obj_t BgL_cdrzd2580zd2_210;

																					BgL_cdrzd2580zd2_210 =
																						CDR(BgL_xz00_15);
																					{	/* Expand/define.scm 57 */
																						obj_t BgL_carzd2583zd2_211;

																						BgL_carzd2583zd2_211 =
																							CAR(
																							((obj_t) BgL_cdrzd2580zd2_210));
																						if (SYMBOLP(BgL_carzd2583zd2_211))
																							{	/* Expand/define.scm 57 */
																								obj_t BgL_arg1165z00_213;

																								BgL_arg1165z00_213 =
																									CDR(
																									((obj_t)
																										BgL_cdrzd2580zd2_210));
																								BgL_resz00_123 =
																									BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																									(BgL_ez00_16,
																									BgL_carzd2583zd2_211,
																									BgL_arg1165z00_213,
																									BgL_xz00_15);
																							}
																						else
																							{	/* Expand/define.scm 57 */
																								goto BgL_tagzd2361zd2_131;
																							}
																					}
																				}
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			obj_t BgL_carzd2598zd2_216;

																			BgL_carzd2598zd2_216 =
																				CAR(((obj_t) BgL_cdrzd2375zd2_134));
																			if (SYMBOLP(BgL_carzd2598zd2_216))
																				{	/* Expand/define.scm 57 */
																					obj_t BgL_arg1169z00_218;

																					BgL_arg1169z00_218 =
																						CDR(((obj_t) BgL_cdrzd2375zd2_134));
																					BgL_resz00_123 =
																						BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																						(BgL_ez00_16, BgL_carzd2598zd2_216,
																						BgL_arg1169z00_218, BgL_xz00_15);
																				}
																			else
																				{	/* Expand/define.scm 57 */
																					goto BgL_tagzd2361zd2_131;
																				}
																		}
																}
															else
																{	/* Expand/define.scm 57 */
																	obj_t BgL_carzd2613zd2_220;
																	obj_t BgL_cdrzd2614zd2_221;

																	BgL_carzd2613zd2_220 =
																		CAR(((obj_t) BgL_cdrzd2375zd2_134));
																	BgL_cdrzd2614zd2_221 =
																		CDR(((obj_t) BgL_cdrzd2375zd2_134));
																	if (SYMBOLP(BgL_carzd2613zd2_220))
																		{	/* Expand/define.scm 57 */
																			if (NULLP(BgL_cdrzd2614zd2_221))
																				{	/* Expand/define.scm 57 */
																					goto BgL_tagzd2361zd2_131;
																				}
																			else
																				{	/* Expand/define.scm 57 */
																					BgL_resz00_123 =
																						BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																						(BgL_ez00_16, BgL_carzd2613zd2_220,
																						BgL_cdrzd2614zd2_221, BgL_xz00_15);
																				}
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			goto BgL_tagzd2361zd2_131;
																		}
																}
														}
													else
														{	/* Expand/define.scm 57 */
															obj_t BgL_carzd2628zd2_225;
															obj_t BgL_cdrzd2629zd2_226;

															BgL_carzd2628zd2_225 =
																CAR(((obj_t) BgL_cdrzd2375zd2_134));
															BgL_cdrzd2629zd2_226 =
																CDR(((obj_t) BgL_cdrzd2375zd2_134));
															if (SYMBOLP(BgL_carzd2628zd2_225))
																{	/* Expand/define.scm 57 */
																	if (NULLP(BgL_cdrzd2629zd2_226))
																		{	/* Expand/define.scm 57 */
																			goto BgL_tagzd2361zd2_131;
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			BgL_resz00_123 =
																				BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																				(BgL_ez00_16, BgL_carzd2628zd2_225,
																				BgL_cdrzd2629zd2_226, BgL_xz00_15);
																		}
																}
															else
																{	/* Expand/define.scm 57 */
																	goto BgL_tagzd2361zd2_131;
																}
														}
												}
										}
									else
										{	/* Expand/define.scm 57 */
											obj_t BgL_carzd2643zd2_230;
											obj_t BgL_cdrzd2644zd2_231;

											BgL_carzd2643zd2_230 =
												CAR(((obj_t) BgL_cdrzd2375zd2_134));
											BgL_cdrzd2644zd2_231 =
												CDR(((obj_t) BgL_cdrzd2375zd2_134));
											if (SYMBOLP(BgL_carzd2643zd2_230))
												{	/* Expand/define.scm 57 */
													if (PAIRP(BgL_cdrzd2644zd2_231))
														{	/* Expand/define.scm 57 */
															obj_t BgL_carzd2650zd2_234;

															BgL_carzd2650zd2_234 = CAR(BgL_cdrzd2644zd2_231);
															if (PAIRP(BgL_carzd2650zd2_234))
																{	/* Expand/define.scm 57 */
																	obj_t BgL_cdrzd2655zd2_236;

																	BgL_cdrzd2655zd2_236 =
																		CDR(BgL_carzd2650zd2_234);
																	if (
																		(CAR(BgL_carzd2650zd2_234) ==
																			CNST_TABLE_REF(((long) 0))))
																		{	/* Expand/define.scm 57 */
																			if (PAIRP(BgL_cdrzd2655zd2_236))
																				{	/* Expand/define.scm 57 */
																					obj_t BgL_cdrzd2659zd2_240;

																					BgL_cdrzd2659zd2_240 =
																						CDR(BgL_cdrzd2655zd2_236);
																					if (NULLP(BgL_cdrzd2659zd2_240))
																						{	/* Expand/define.scm 57 */
																							obj_t BgL_cdrzd2669zd2_242;

																							BgL_cdrzd2669zd2_242 =
																								CDR(BgL_xz00_15);
																							{	/* Expand/define.scm 57 */
																								obj_t BgL_carzd2673zd2_243;

																								BgL_carzd2673zd2_243 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2669zd2_242));
																								if (SYMBOLP
																									(BgL_carzd2673zd2_243))
																									{	/* Expand/define.scm 57 */
																										obj_t BgL_arg1186z00_245;

																										BgL_arg1186z00_245 =
																											CDR(
																											((obj_t)
																												BgL_cdrzd2669zd2_242));
																										BgL_resz00_123 =
																											BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																											(BgL_ez00_16,
																											BgL_carzd2673zd2_243,
																											BgL_arg1186z00_245,
																											BgL_xz00_15);
																									}
																								else
																									{	/* Expand/define.scm 57 */
																										goto BgL_tagzd2361zd2_131;
																									}
																							}
																						}
																					else
																						{	/* Expand/define.scm 57 */
																							if (NULLP(CDR
																									(BgL_cdrzd2644zd2_231)))
																								{	/* Expand/define.scm 57 */
																									BgL_resz00_123 =
																										BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00
																										(BgL_ez00_16,
																										BgL_carzd2643zd2_230,
																										CAR(BgL_cdrzd2655zd2_236),
																										BgL_cdrzd2659zd2_240,
																										BgL_xz00_15);
																								}
																							else
																								{	/* Expand/define.scm 57 */
																									obj_t BgL_cdrzd2688zd2_249;

																									BgL_cdrzd2688zd2_249 =
																										CDR(BgL_xz00_15);
																									{	/* Expand/define.scm 57 */
																										obj_t BgL_carzd2692zd2_250;

																										BgL_carzd2692zd2_250 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2688zd2_249));
																										if (SYMBOLP
																											(BgL_carzd2692zd2_250))
																											{	/* Expand/define.scm 57 */
																												obj_t
																													BgL_arg1197z00_252;
																												BgL_arg1197z00_252 =
																													CDR(((obj_t)
																														BgL_cdrzd2688zd2_249));
																												BgL_resz00_123 =
																													BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																													(BgL_ez00_16,
																													BgL_carzd2692zd2_250,
																													BgL_arg1197z00_252,
																													BgL_xz00_15);
																											}
																										else
																											{	/* Expand/define.scm 57 */
																												goto
																													BgL_tagzd2361zd2_131;
																											}
																									}
																								}
																						}
																				}
																			else
																				{	/* Expand/define.scm 57 */
																					obj_t BgL_cdrzd2707zd2_254;

																					BgL_cdrzd2707zd2_254 =
																						CDR(BgL_xz00_15);
																					{	/* Expand/define.scm 57 */
																						obj_t BgL_carzd2711zd2_255;

																						BgL_carzd2711zd2_255 =
																							CAR(
																							((obj_t) BgL_cdrzd2707zd2_254));
																						if (SYMBOLP(BgL_carzd2711zd2_255))
																							{	/* Expand/define.scm 57 */
																								obj_t BgL_arg1208z00_257;

																								BgL_arg1208z00_257 =
																									CDR(
																									((obj_t)
																										BgL_cdrzd2707zd2_254));
																								BgL_resz00_123 =
																									BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																									(BgL_ez00_16,
																									BgL_carzd2711zd2_255,
																									BgL_arg1208z00_257,
																									BgL_xz00_15);
																							}
																						else
																							{	/* Expand/define.scm 57 */
																								goto BgL_tagzd2361zd2_131;
																							}
																					}
																				}
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			obj_t BgL_cdrzd2726zd2_258;

																			BgL_cdrzd2726zd2_258 = CDR(BgL_xz00_15);
																			{	/* Expand/define.scm 57 */
																				obj_t BgL_carzd2730zd2_259;

																				BgL_carzd2730zd2_259 =
																					CAR(((obj_t) BgL_cdrzd2726zd2_258));
																				if (SYMBOLP(BgL_carzd2730zd2_259))
																					{	/* Expand/define.scm 57 */
																						obj_t BgL_arg1211z00_261;

																						BgL_arg1211z00_261 =
																							CDR(
																							((obj_t) BgL_cdrzd2726zd2_258));
																						BgL_resz00_123 =
																							BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																							(BgL_ez00_16,
																							BgL_carzd2730zd2_259,
																							BgL_arg1211z00_261, BgL_xz00_15);
																					}
																				else
																					{	/* Expand/define.scm 57 */
																						goto BgL_tagzd2361zd2_131;
																					}
																			}
																		}
																}
															else
																{	/* Expand/define.scm 57 */
																	obj_t BgL_carzd2749zd2_264;

																	BgL_carzd2749zd2_264 =
																		CAR(((obj_t) BgL_cdrzd2375zd2_134));
																	if (SYMBOLP(BgL_carzd2749zd2_264))
																		{	/* Expand/define.scm 57 */
																			obj_t BgL_arg1221z00_266;

																			BgL_arg1221z00_266 =
																				CDR(((obj_t) BgL_cdrzd2375zd2_134));
																			BgL_resz00_123 =
																				BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																				(BgL_ez00_16, BgL_carzd2749zd2_264,
																				BgL_arg1221z00_266, BgL_xz00_15);
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			goto BgL_tagzd2361zd2_131;
																		}
																}
														}
													else
														{	/* Expand/define.scm 57 */
															obj_t BgL_carzd2768zd2_268;
															obj_t BgL_cdrzd2769zd2_269;

															BgL_carzd2768zd2_268 =
																CAR(((obj_t) BgL_cdrzd2375zd2_134));
															BgL_cdrzd2769zd2_269 =
																CDR(((obj_t) BgL_cdrzd2375zd2_134));
															if (SYMBOLP(BgL_carzd2768zd2_268))
																{	/* Expand/define.scm 57 */
																	if (NULLP(BgL_cdrzd2769zd2_269))
																		{	/* Expand/define.scm 57 */
																			goto BgL_tagzd2361zd2_131;
																		}
																	else
																		{	/* Expand/define.scm 57 */
																			BgL_resz00_123 =
																				BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																				(BgL_ez00_16, BgL_carzd2768zd2_268,
																				BgL_cdrzd2769zd2_269, BgL_xz00_15);
																		}
																}
															else
																{	/* Expand/define.scm 57 */
																	goto BgL_tagzd2361zd2_131;
																}
														}
												}
											else
												{	/* Expand/define.scm 57 */
													obj_t BgL_carzd2785zd2_273;
													obj_t BgL_cdrzd2786zd2_274;

													BgL_carzd2785zd2_273 =
														CAR(((obj_t) BgL_cdrzd2375zd2_134));
													BgL_cdrzd2786zd2_274 =
														CDR(((obj_t) BgL_cdrzd2375zd2_134));
													if (SYMBOLP(BgL_carzd2785zd2_273))
														{	/* Expand/define.scm 57 */
															if (NULLP(BgL_cdrzd2786zd2_274))
																{	/* Expand/define.scm 57 */
																	goto BgL_tagzd2361zd2_131;
																}
															else
																{	/* Expand/define.scm 57 */
																	BgL_resz00_123 =
																		BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00
																		(BgL_ez00_16, BgL_carzd2785zd2_273,
																		BgL_cdrzd2786zd2_274, BgL_xz00_15);
																}
														}
													else
														{	/* Expand/define.scm 57 */
															goto BgL_tagzd2361zd2_131;
														}
												}
										}
								}
							else
								{	/* Expand/define.scm 57 */
									goto BgL_tagzd2361zd2_131;
								}
						}
					else
						{	/* Expand/define.scm 57 */
							goto BgL_tagzd2361zd2_131;
						}
				}
				BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BFALSE;
				return BGl_replacez12z12zztools_miscz00(BgL_xz00_15, BgL_resz00_123);
			}
		}

	}



/* expand-internal-define */
	obj_t BGl_expandzd2internalzd2definez00zzexpand_definez00(obj_t BgL_xz00_17,
		obj_t BgL_ez00_18)
	{
		{	/* Expand/define.scm 76 */
			{	/* Expand/define.scm 77 */
				obj_t BgL_ez00_277;

				BgL_ez00_277 =
					BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_18);
				{
					obj_t BgL_namez00_288;
					obj_t BgL_valuez00_289;
					obj_t BgL_namez00_282;
					obj_t BgL_valuez00_283;
					obj_t BgL_lamz00_284;
					obj_t BgL_argsz00_285;
					obj_t BgL_bodyz00_286;
					obj_t BgL_namez00_278;
					obj_t BgL_argsz00_279;
					obj_t BgL_bodyz00_280;

					if (PAIRP(BgL_xz00_17))
						{	/* Expand/define.scm 78 */
							obj_t BgL_cdrzd2820zd2_294;

							BgL_cdrzd2820zd2_294 = CDR(BgL_xz00_17);
							if (PAIRP(BgL_cdrzd2820zd2_294))
								{	/* Expand/define.scm 78 */
									obj_t BgL_carzd2824zd2_296;
									obj_t BgL_cdrzd2825zd2_297;

									BgL_carzd2824zd2_296 = CAR(BgL_cdrzd2820zd2_294);
									BgL_cdrzd2825zd2_297 = CDR(BgL_cdrzd2820zd2_294);
									if (PAIRP(BgL_carzd2824zd2_296))
										{	/* Expand/define.scm 78 */
											if (NULLP(BgL_cdrzd2825zd2_297))
												{	/* Expand/define.scm 78 */
													obj_t BgL_carzd2851zd2_301;
													obj_t BgL_cdrzd2852zd2_302;

													BgL_carzd2851zd2_301 =
														CAR(((obj_t) BgL_cdrzd2820zd2_294));
													BgL_cdrzd2852zd2_302 =
														CDR(((obj_t) BgL_cdrzd2820zd2_294));
													if (SYMBOLP(BgL_carzd2851zd2_301))
														{	/* Expand/define.scm 78 */
															if (PAIRP(BgL_cdrzd2852zd2_302))
																{	/* Expand/define.scm 78 */
																	obj_t BgL_carzd2860zd2_305;

																	BgL_carzd2860zd2_305 =
																		CAR(BgL_cdrzd2852zd2_302);
																	if (PAIRP(BgL_carzd2860zd2_305))
																		{	/* Expand/define.scm 78 */
																			obj_t BgL_carzd2873zd2_307;
																			obj_t BgL_cdrzd2874zd2_308;

																			BgL_carzd2873zd2_307 =
																				CAR(BgL_carzd2860zd2_305);
																			BgL_cdrzd2874zd2_308 =
																				CDR(BgL_carzd2860zd2_305);
																			if (SYMBOLP(BgL_carzd2873zd2_307))
																				{	/* Expand/define.scm 78 */
																					if (PAIRP(BgL_cdrzd2874zd2_308))
																						{	/* Expand/define.scm 78 */
																							obj_t BgL_cdrzd2880zd2_311;

																							BgL_cdrzd2880zd2_311 =
																								CDR(BgL_cdrzd2874zd2_308);
																							if (NULLP(BgL_cdrzd2880zd2_311))
																								{	/* Expand/define.scm 78 */
																									obj_t BgL_carzd2892zd2_314;

																									BgL_carzd2892zd2_314 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2820zd2_294));
																									if (SYMBOLP
																										(BgL_carzd2892zd2_314))
																										{	/* Expand/define.scm 78 */
																											obj_t BgL_arg1245z00_316;

																											BgL_arg1245z00_316 =
																												CDR(
																												((obj_t)
																													BgL_cdrzd2820zd2_294));
																											BgL_namez00_288 =
																												BgL_carzd2892zd2_314;
																											BgL_valuez00_289 =
																												BgL_arg1245z00_316;
																										BgL_tagzd2808zd2_290:
																											{	/* Expand/define.scm 135 */
																												obj_t BgL_locz00_449;

																												{	/* Expand/define.scm 135 */
																													obj_t
																														BgL_arg1382z00_457;
																													obj_t
																														BgL_arg1383z00_458;
																													{	/* Expand/define.scm 135 */
																														obj_t
																															BgL_pairz00_883;
																														BgL_pairz00_883 =
																															CDR(((obj_t)
																																BgL_xz00_17));
																														BgL_arg1382z00_457 =
																															CDR
																															(BgL_pairz00_883);
																													}
																													BgL_arg1383z00_458 =
																														BGl_findzd2locationzd2zztools_locationz00
																														(BgL_xz00_17);
																													BgL_locz00_449 =
																														BGl_findzd2locationzf2locz20zztools_locationz00
																														(BgL_arg1382z00_457,
																														BgL_arg1383z00_458);
																												}
																												{	/* Expand/define.scm 135 */
																													obj_t
																														BgL_nvaluez00_450;
																													{	/* Expand/define.scm 136 */
																														obj_t
																															BgL_arg1381z00_456;
																														BgL_arg1381z00_456 =
																															BGl_normaliza7ezd2prognzf2locz87zztools_prognz00
																															(BgL_valuez00_289,
																															BgL_locz00_449);
																														BgL_nvaluez00_450 =
																															PROCEDURE_ENTRY
																															(BgL_ez00_277)
																															(BgL_ez00_277,
																															BgL_arg1381z00_456,
																															BgL_ez00_277,
																															BEOA);
																													}
																													{	/* Expand/define.scm 136 */
																														obj_t
																															BgL_envaluez00_451;
																														if (PAIRP
																															(BgL_nvaluez00_450))
																															{	/* Expand/define.scm 137 */
																																BgL_envaluez00_451
																																	=
																																	BGl_epairifyz00zztools_miscz00
																																	(BgL_nvaluez00_450,
																																	BgL_valuez00_289);
																															}
																														else
																															{	/* Expand/define.scm 137 */
																																BgL_envaluez00_451
																																	=
																																	BgL_nvaluez00_450;
																															}
																														{	/* Expand/define.scm 137 */

																															{	/* Expand/define.scm 140 */
																																obj_t
																																	BgL_arg1364z00_452;
																																{	/* Expand/define.scm 140 */
																																	obj_t
																																		BgL_arg1367z00_453;
																																	{	/* Expand/define.scm 140 */
																																		obj_t
																																			BgL_arg1370z00_454;
																																		BgL_arg1370z00_454
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_envaluez00_451,
																																			BNIL);
																																		BgL_arg1367z00_453
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_namez00_288,
																																			BgL_arg1370z00_454);
																																	}
																																	BgL_arg1364z00_452
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				2)),
																																		BgL_arg1367z00_453);
																																}
																																return
																																	BGl_replacez12z12zztools_miscz00
																																	(BgL_xz00_17,
																																	BgL_arg1364z00_452);
																															}
																														}
																													}
																												}
																											}
																										}
																									else
																										{	/* Expand/define.scm 78 */
																										BgL_tagzd2809zd2_291:
																											return
																												BGl_errorz00zz__errorz00
																												(BFALSE,
																												BGl_string1939z00zzexpand_definez00,
																												BgL_xz00_17);
																										}
																								}
																							else
																								{	/* Expand/define.scm 78 */
																									if (NULLP(CDR
																											(BgL_cdrzd2852zd2_302)))
																										{	/* Expand/define.scm 78 */
																											BgL_namez00_282 =
																												BgL_carzd2851zd2_301;
																											BgL_valuez00_283 =
																												BgL_carzd2860zd2_305;
																											BgL_lamz00_284 =
																												BgL_carzd2873zd2_307;
																											BgL_argsz00_285 =
																												CAR
																												(BgL_cdrzd2874zd2_308);
																											BgL_bodyz00_286 =
																												BgL_cdrzd2880zd2_311;
																										BgL_tagzd2807zd2_287:
																											{	/* Expand/define.scm 105 */
																												obj_t BgL_locz00_413;

																												BgL_locz00_413 =
																													BGl_findzd2locationzd2zztools_locationz00
																													(BgL_xz00_17);
																												{	/* Expand/define.scm 106 */
																													bool_t
																														BgL_test2035z00_1608;
																													{	/* Expand/define.scm 106 */
																														obj_t
																															BgL_arg1363z00_448;
																														BgL_arg1363z00_448 =
																															BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																															(BgL_lamz00_284,
																															BgL_locz00_413);
																														BgL_test2035z00_1608
																															=
																															(BgL_arg1363z00_448
																															==
																															CNST_TABLE_REF((
																																	(long) 0)));
																													}
																													if (BgL_test2035z00_1608)
																														{	/* Expand/define.scm 109 */
																															obj_t
																																BgL_pidz00_417;
																															BgL_pidz00_417 =
																																BGl_parsezd2idzd2zzast_identz00
																																(BgL_namez00_282,
																																BgL_locz00_413);
																															{	/* Expand/define.scm 109 */
																																obj_t
																																	BgL_namezd2idzd2_418;
																																BgL_namezd2idzd2_418
																																	=
																																	CAR
																																	(BgL_pidz00_417);
																																{	/* Expand/define.scm 110 */
																																	obj_t
																																		BgL_typez00_419;
																																	BgL_typez00_419
																																		=
																																		CDR
																																		(BgL_pidz00_417);
																																	{	/* Expand/define.scm 111 */
																																		obj_t
																																			BgL_typezd2idzd2_420;
																																		BgL_typezd2idzd2_420
																																			=
																																			(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) BgL_typez00_419)))->BgL_idz00);
																																		{	/* Expand/define.scm 112 */

																																			{	/* Expand/define.scm 114 */
																																				obj_t
																																					BgL_arg1327z00_421;
																																				BgL_arg1327z00_421
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_namez00_282,
																																					BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																																					(BgL_argsz00_285));
																																				{	/* Expand/define.scm 118 */
																																					obj_t
																																						BgL_zc3z04anonymousza31330ze3z87_1137;
																																					BgL_zc3z04anonymousza31330ze3z87_1137
																																						=
																																						MAKE_FX_PROCEDURE
																																						(BGl_z62zc3z04anonymousza31330ze3ze5zzexpand_definez00,
																																						(int)
																																						(((long) 0)), (int) (((long) 8)));
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31330ze3z87_1137,
																																						(int)
																																						(((long) 0)), BgL_xz00_17);
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31330ze3z87_1137,
																																						(int)
																																						(((long) 1)), BgL_valuez00_283);
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31330ze3z87_1137,
																																						(int)
																																						(((long) 2)), BgL_typezd2idzd2_420);
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31330ze3z87_1137,
																																						(int)
																																						(((long) 3)), BgL_typez00_419);
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31330ze3z87_1137,
																																						(int)
																																						(((long) 4)), BgL_argsz00_285);
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31330ze3z87_1137,
																																						(int)
																																						(((long) 5)), BgL_ez00_277);
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31330ze3z87_1137,
																																						(int)
																																						(((long) 6)), BgL_bodyz00_286);
																																					PROCEDURE_SET
																																						(BgL_zc3z04anonymousza31330ze3z87_1137,
																																						(int)
																																						(((long) 7)), BgL_namezd2idzd2_418);
																																					return
																																						BGl_withzd2lexicalzd2zzexpand_epsz00
																																						(BgL_arg1327z00_421,
																																						CNST_TABLE_REF
																																						(((long) 1)), BgL_locz00_413, BgL_zc3z04anonymousza31330ze3z87_1137);
																														}}}}}}}
																													else
																														{	/* Expand/define.scm 128 */
																															obj_t
																																BgL_nvaluez00_442;
																															BgL_nvaluez00_442
																																=
																																PROCEDURE_ENTRY
																																(BgL_ez00_277)
																																(BgL_ez00_277,
																																BgL_valuez00_283,
																																BgL_ez00_277,
																																BEOA);
																															{	/* Expand/define.scm 128 */
																																obj_t
																																	BgL_envaluez00_443;
																																if (PAIRP
																																	(BgL_nvaluez00_442))
																																	{	/* Expand/define.scm 129 */
																																		BgL_envaluez00_443
																																			=
																																			BGl_epairifyz00zztools_miscz00
																																			(BgL_nvaluez00_442,
																																			BgL_valuez00_283);
																																	}
																																else
																																	{	/* Expand/define.scm 129 */
																																		BgL_envaluez00_443
																																			=
																																			BgL_nvaluez00_442;
																																	}
																																{	/* Expand/define.scm 129 */

																																	{	/* Expand/define.scm 132 */
																																		obj_t
																																			BgL_arg1352z00_444;
																																		{	/* Expand/define.scm 132 */
																																			obj_t
																																				BgL_arg1357z00_445;
																																			{	/* Expand/define.scm 132 */
																																				obj_t
																																					BgL_arg1360z00_446;
																																				BgL_arg1360z00_446
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_envaluez00_443,
																																					BNIL);
																																				BgL_arg1357z00_445
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_namez00_282,
																																					BgL_arg1360z00_446);
																																			}
																																			BgL_arg1352z00_444
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						2)),
																																				BgL_arg1357z00_445);
																																		}
																																		return
																																			BGl_replacez12z12zztools_miscz00
																																			(BgL_xz00_17,
																																			BgL_arg1352z00_444);
																																	}
																																}
																															}
																														}
																												}
																											}
																										}
																									else
																										{	/* Expand/define.scm 78 */
																											obj_t
																												BgL_carzd2907zd2_321;
																											BgL_carzd2907zd2_321 =
																												CAR(((obj_t)
																													BgL_cdrzd2820zd2_294));
																											if (SYMBOLP
																												(BgL_carzd2907zd2_321))
																												{	/* Expand/define.scm 78 */
																													obj_t
																														BgL_arg1252z00_323;
																													BgL_arg1252z00_323 =
																														CDR(((obj_t)
																															BgL_cdrzd2820zd2_294));
																													{
																														obj_t
																															BgL_valuez00_1661;
																														obj_t
																															BgL_namez00_1660;
																														BgL_namez00_1660 =
																															BgL_carzd2907zd2_321;
																														BgL_valuez00_1661 =
																															BgL_arg1252z00_323;
																														BgL_valuez00_289 =
																															BgL_valuez00_1661;
																														BgL_namez00_288 =
																															BgL_namez00_1660;
																														goto
																															BgL_tagzd2808zd2_290;
																													}
																												}
																											else
																												{	/* Expand/define.scm 78 */
																													goto
																														BgL_tagzd2809zd2_291;
																												}
																										}
																								}
																						}
																					else
																						{	/* Expand/define.scm 78 */
																							obj_t BgL_carzd2922zd2_326;

																							BgL_carzd2922zd2_326 =
																								CAR(
																								((obj_t) BgL_cdrzd2820zd2_294));
																							if (SYMBOLP(BgL_carzd2922zd2_326))
																								{	/* Expand/define.scm 78 */
																									obj_t BgL_arg1256z00_328;

																									BgL_arg1256z00_328 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd2820zd2_294));
																									{
																										obj_t BgL_valuez00_1669;
																										obj_t BgL_namez00_1668;

																										BgL_namez00_1668 =
																											BgL_carzd2922zd2_326;
																										BgL_valuez00_1669 =
																											BgL_arg1256z00_328;
																										BgL_valuez00_289 =
																											BgL_valuez00_1669;
																										BgL_namez00_288 =
																											BgL_namez00_1668;
																										goto BgL_tagzd2808zd2_290;
																									}
																								}
																							else
																								{	/* Expand/define.scm 78 */
																									goto BgL_tagzd2809zd2_291;
																								}
																						}
																				}
																			else
																				{	/* Expand/define.scm 78 */
																					obj_t BgL_carzd2937zd2_330;

																					BgL_carzd2937zd2_330 =
																						CAR(((obj_t) BgL_cdrzd2820zd2_294));
																					if (SYMBOLP(BgL_carzd2937zd2_330))
																						{	/* Expand/define.scm 78 */
																							obj_t BgL_arg1258z00_332;

																							BgL_arg1258z00_332 =
																								CDR(
																								((obj_t) BgL_cdrzd2820zd2_294));
																							{
																								obj_t BgL_valuez00_1677;
																								obj_t BgL_namez00_1676;

																								BgL_namez00_1676 =
																									BgL_carzd2937zd2_330;
																								BgL_valuez00_1677 =
																									BgL_arg1258z00_332;
																								BgL_valuez00_289 =
																									BgL_valuez00_1677;
																								BgL_namez00_288 =
																									BgL_namez00_1676;
																								goto BgL_tagzd2808zd2_290;
																							}
																						}
																					else
																						{	/* Expand/define.scm 78 */
																							goto BgL_tagzd2809zd2_291;
																						}
																				}
																		}
																	else
																		{	/* Expand/define.scm 78 */
																			obj_t BgL_carzd2952zd2_334;

																			BgL_carzd2952zd2_334 =
																				CAR(((obj_t) BgL_cdrzd2820zd2_294));
																			if (SYMBOLP(BgL_carzd2952zd2_334))
																				{	/* Expand/define.scm 78 */
																					obj_t BgL_arg1263z00_336;

																					BgL_arg1263z00_336 =
																						CDR(((obj_t) BgL_cdrzd2820zd2_294));
																					{
																						obj_t BgL_valuez00_1685;
																						obj_t BgL_namez00_1684;

																						BgL_namez00_1684 =
																							BgL_carzd2952zd2_334;
																						BgL_valuez00_1685 =
																							BgL_arg1263z00_336;
																						BgL_valuez00_289 =
																							BgL_valuez00_1685;
																						BgL_namez00_288 = BgL_namez00_1684;
																						goto BgL_tagzd2808zd2_290;
																					}
																				}
																			else
																				{	/* Expand/define.scm 78 */
																					goto BgL_tagzd2809zd2_291;
																				}
																		}
																}
															else
																{	/* Expand/define.scm 78 */
																	goto BgL_tagzd2809zd2_291;
																}
														}
													else
														{	/* Expand/define.scm 78 */
															goto BgL_tagzd2809zd2_291;
														}
												}
											else
												{	/* Expand/define.scm 78 */
													BgL_namez00_278 = CAR(BgL_carzd2824zd2_296);
													BgL_argsz00_279 = CDR(BgL_carzd2824zd2_296);
													BgL_bodyz00_280 = BgL_cdrzd2825zd2_297;
													if (SYMBOLP(BgL_namez00_278))
														{	/* Expand/define.scm 83 */
															obj_t BgL_locz00_387;

															BgL_locz00_387 =
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_xz00_17);
															{	/* Expand/define.scm 83 */
																obj_t BgL_pidz00_388;

																BgL_pidz00_388 =
																	BGl_parsezd2idzd2zzast_identz00
																	(BgL_namez00_278, BgL_locz00_387);
																{	/* Expand/define.scm 84 */
																	obj_t BgL_namezd2idzd2_389;

																	BgL_namezd2idzd2_389 = CAR(BgL_pidz00_388);
																	{	/* Expand/define.scm 85 */
																		obj_t BgL_typez00_390;

																		BgL_typez00_390 = CDR(BgL_pidz00_388);
																		{	/* Expand/define.scm 86 */
																			obj_t BgL_typezd2idzd2_391;

																			BgL_typezd2idzd2_391 =
																				(((BgL_typez00_bglt) COBJECT(
																						((BgL_typez00_bglt)
																							BgL_typez00_390)))->BgL_idz00);
																			{	/* Expand/define.scm 87 */

																				{	/* Expand/define.scm 89 */
																					obj_t BgL_arg1301z00_392;

																					BgL_arg1301z00_392 =
																						MAKE_YOUNG_PAIR(BgL_namez00_278,
																						BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																						(BgL_argsz00_279));
																					{	/* Expand/define.scm 93 */
																						obj_t
																							BgL_zc3z04anonymousza31305ze3z87_1138;
																						BgL_zc3z04anonymousza31305ze3z87_1138
																							=
																							MAKE_FX_PROCEDURE
																							(BGl_z62zc3z04anonymousza31305ze3ze5zzexpand_definez00,
																							(int) (((long) 0)),
																							(int) (((long) 7)));
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31305ze3z87_1138,
																							(int) (((long) 0)), BgL_xz00_17);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31305ze3z87_1138,
																							(int) (((long) 1)),
																							BgL_typezd2idzd2_391);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31305ze3z87_1138,
																							(int) (((long) 2)),
																							BgL_typez00_390);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31305ze3z87_1138,
																							(int) (((long) 3)),
																							BgL_bodyz00_280);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31305ze3z87_1138,
																							(int) (((long) 4)), BgL_ez00_277);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31305ze3z87_1138,
																							(int) (((long) 5)),
																							BgL_argsz00_279);
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31305ze3z87_1138,
																							(int) (((long) 6)),
																							BgL_namezd2idzd2_389);
																						return
																							BGl_withzd2lexicalzd2zzexpand_epsz00
																							(BgL_arg1301z00_392,
																							CNST_TABLE_REF(((long) 1)),
																							BgL_locz00_387,
																							BgL_zc3z04anonymousza31305ze3z87_1138);
														}}}}}}}}
													else
														{	/* Expand/define.scm 81 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string1940z00zzexpand_definez00,
																BGl_string1939z00zzexpand_definez00,
																BgL_xz00_17);
														}
												}
										}
									else
										{	/* Expand/define.scm 78 */
											obj_t BgL_carzd2984zd2_340;
											obj_t BgL_cdrzd2985zd2_341;

											BgL_carzd2984zd2_340 =
												CAR(((obj_t) BgL_cdrzd2820zd2_294));
											BgL_cdrzd2985zd2_341 =
												CDR(((obj_t) BgL_cdrzd2820zd2_294));
											if (SYMBOLP(BgL_carzd2984zd2_340))
												{	/* Expand/define.scm 78 */
													if (PAIRP(BgL_cdrzd2985zd2_341))
														{	/* Expand/define.scm 78 */
															obj_t BgL_carzd2993zd2_344;

															BgL_carzd2993zd2_344 = CAR(BgL_cdrzd2985zd2_341);
															if (PAIRP(BgL_carzd2993zd2_344))
																{	/* Expand/define.scm 78 */
																	obj_t BgL_carzd21006zd2_346;
																	obj_t BgL_cdrzd21007zd2_347;

																	BgL_carzd21006zd2_346 =
																		CAR(BgL_carzd2993zd2_344);
																	BgL_cdrzd21007zd2_347 =
																		CDR(BgL_carzd2993zd2_344);
																	if (SYMBOLP(BgL_carzd21006zd2_346))
																		{	/* Expand/define.scm 78 */
																			if (PAIRP(BgL_cdrzd21007zd2_347))
																				{	/* Expand/define.scm 78 */
																					obj_t BgL_cdrzd21013zd2_350;

																					BgL_cdrzd21013zd2_350 =
																						CDR(BgL_cdrzd21007zd2_347);
																					if (NULLP(BgL_cdrzd21013zd2_350))
																						{	/* Expand/define.scm 78 */
																							obj_t BgL_carzd21027zd2_353;

																							BgL_carzd21027zd2_353 =
																								CAR(
																								((obj_t) BgL_cdrzd2820zd2_294));
																							if (SYMBOLP
																								(BgL_carzd21027zd2_353))
																								{	/* Expand/define.scm 78 */
																									obj_t BgL_arg1280z00_355;

																									BgL_arg1280z00_355 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd2820zd2_294));
																									{
																										obj_t BgL_valuez00_1745;
																										obj_t BgL_namez00_1744;

																										BgL_namez00_1744 =
																											BgL_carzd21027zd2_353;
																										BgL_valuez00_1745 =
																											BgL_arg1280z00_355;
																										BgL_valuez00_289 =
																											BgL_valuez00_1745;
																										BgL_namez00_288 =
																											BgL_namez00_1744;
																										goto BgL_tagzd2808zd2_290;
																									}
																								}
																							else
																								{	/* Expand/define.scm 78 */
																									goto BgL_tagzd2809zd2_291;
																								}
																						}
																					else
																						{	/* Expand/define.scm 78 */
																							if (NULLP(CDR
																									(BgL_cdrzd2985zd2_341)))
																								{
																									obj_t BgL_bodyz00_1754;
																									obj_t BgL_argsz00_1752;
																									obj_t BgL_lamz00_1751;
																									obj_t BgL_valuez00_1750;
																									obj_t BgL_namez00_1749;

																									BgL_namez00_1749 =
																										BgL_carzd2984zd2_340;
																									BgL_valuez00_1750 =
																										BgL_carzd2993zd2_344;
																									BgL_lamz00_1751 =
																										BgL_carzd21006zd2_346;
																									BgL_argsz00_1752 =
																										CAR(BgL_cdrzd21007zd2_347);
																									BgL_bodyz00_1754 =
																										BgL_cdrzd21013zd2_350;
																									BgL_bodyz00_286 =
																										BgL_bodyz00_1754;
																									BgL_argsz00_285 =
																										BgL_argsz00_1752;
																									BgL_lamz00_284 =
																										BgL_lamz00_1751;
																									BgL_valuez00_283 =
																										BgL_valuez00_1750;
																									BgL_namez00_282 =
																										BgL_namez00_1749;
																									goto BgL_tagzd2807zd2_287;
																								}
																							else
																								{	/* Expand/define.scm 78 */
																									obj_t BgL_carzd21046zd2_360;

																									BgL_carzd21046zd2_360 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2820zd2_294));
																									if (SYMBOLP
																										(BgL_carzd21046zd2_360))
																										{	/* Expand/define.scm 78 */
																											obj_t BgL_arg1286z00_362;

																											BgL_arg1286z00_362 =
																												CDR(
																												((obj_t)
																													BgL_cdrzd2820zd2_294));
																											{
																												obj_t BgL_valuez00_1762;
																												obj_t BgL_namez00_1761;

																												BgL_namez00_1761 =
																													BgL_carzd21046zd2_360;
																												BgL_valuez00_1762 =
																													BgL_arg1286z00_362;
																												BgL_valuez00_289 =
																													BgL_valuez00_1762;
																												BgL_namez00_288 =
																													BgL_namez00_1761;
																												goto
																													BgL_tagzd2808zd2_290;
																											}
																										}
																									else
																										{	/* Expand/define.scm 78 */
																											goto BgL_tagzd2809zd2_291;
																										}
																								}
																						}
																				}
																			else
																				{	/* Expand/define.scm 78 */
																					obj_t BgL_carzd21065zd2_365;

																					BgL_carzd21065zd2_365 =
																						CAR(((obj_t) BgL_cdrzd2820zd2_294));
																					if (SYMBOLP(BgL_carzd21065zd2_365))
																						{	/* Expand/define.scm 78 */
																							obj_t BgL_arg1289z00_367;

																							BgL_arg1289z00_367 =
																								CDR(
																								((obj_t) BgL_cdrzd2820zd2_294));
																							{
																								obj_t BgL_valuez00_1770;
																								obj_t BgL_namez00_1769;

																								BgL_namez00_1769 =
																									BgL_carzd21065zd2_365;
																								BgL_valuez00_1770 =
																									BgL_arg1289z00_367;
																								BgL_valuez00_289 =
																									BgL_valuez00_1770;
																								BgL_namez00_288 =
																									BgL_namez00_1769;
																								goto BgL_tagzd2808zd2_290;
																							}
																						}
																					else
																						{	/* Expand/define.scm 78 */
																							goto BgL_tagzd2809zd2_291;
																						}
																				}
																		}
																	else
																		{	/* Expand/define.scm 78 */
																			obj_t BgL_carzd21084zd2_369;

																			BgL_carzd21084zd2_369 =
																				CAR(((obj_t) BgL_cdrzd2820zd2_294));
																			if (SYMBOLP(BgL_carzd21084zd2_369))
																				{	/* Expand/define.scm 78 */
																					obj_t BgL_arg1291z00_371;

																					BgL_arg1291z00_371 =
																						CDR(((obj_t) BgL_cdrzd2820zd2_294));
																					{
																						obj_t BgL_valuez00_1778;
																						obj_t BgL_namez00_1777;

																						BgL_namez00_1777 =
																							BgL_carzd21084zd2_369;
																						BgL_valuez00_1778 =
																							BgL_arg1291z00_371;
																						BgL_valuez00_289 =
																							BgL_valuez00_1778;
																						BgL_namez00_288 = BgL_namez00_1777;
																						goto BgL_tagzd2808zd2_290;
																					}
																				}
																			else
																				{	/* Expand/define.scm 78 */
																					goto BgL_tagzd2809zd2_291;
																				}
																		}
																}
															else
																{	/* Expand/define.scm 78 */
																	obj_t BgL_carzd21103zd2_373;

																	BgL_carzd21103zd2_373 =
																		CAR(((obj_t) BgL_cdrzd2820zd2_294));
																	if (SYMBOLP(BgL_carzd21103zd2_373))
																		{	/* Expand/define.scm 78 */
																			obj_t BgL_arg1295z00_375;

																			BgL_arg1295z00_375 =
																				CDR(((obj_t) BgL_cdrzd2820zd2_294));
																			{
																				obj_t BgL_valuez00_1786;
																				obj_t BgL_namez00_1785;

																				BgL_namez00_1785 =
																					BgL_carzd21103zd2_373;
																				BgL_valuez00_1786 = BgL_arg1295z00_375;
																				BgL_valuez00_289 = BgL_valuez00_1786;
																				BgL_namez00_288 = BgL_namez00_1785;
																				goto BgL_tagzd2808zd2_290;
																			}
																		}
																	else
																		{	/* Expand/define.scm 78 */
																			goto BgL_tagzd2809zd2_291;
																		}
																}
														}
													else
														{	/* Expand/define.scm 78 */
															obj_t BgL_carzd21122zd2_377;
															obj_t BgL_cdrzd21123zd2_378;

															BgL_carzd21122zd2_377 =
																CAR(((obj_t) BgL_cdrzd2820zd2_294));
															BgL_cdrzd21123zd2_378 =
																CDR(((obj_t) BgL_cdrzd2820zd2_294));
															if (SYMBOLP(BgL_carzd21122zd2_377))
																{	/* Expand/define.scm 78 */
																	if (NULLP(BgL_cdrzd21123zd2_378))
																		{	/* Expand/define.scm 78 */
																			goto BgL_tagzd2809zd2_291;
																		}
																	else
																		{
																			obj_t BgL_valuez00_1796;
																			obj_t BgL_namez00_1795;

																			BgL_namez00_1795 = BgL_carzd21122zd2_377;
																			BgL_valuez00_1796 = BgL_cdrzd21123zd2_378;
																			BgL_valuez00_289 = BgL_valuez00_1796;
																			BgL_namez00_288 = BgL_namez00_1795;
																			goto BgL_tagzd2808zd2_290;
																		}
																}
															else
																{	/* Expand/define.scm 78 */
																	goto BgL_tagzd2809zd2_291;
																}
														}
												}
											else
												{	/* Expand/define.scm 78 */
													obj_t BgL_carzd21139zd2_382;
													obj_t BgL_cdrzd21140zd2_383;

													BgL_carzd21139zd2_382 =
														CAR(((obj_t) BgL_cdrzd2820zd2_294));
													BgL_cdrzd21140zd2_383 =
														CDR(((obj_t) BgL_cdrzd2820zd2_294));
													if (SYMBOLP(BgL_carzd21139zd2_382))
														{	/* Expand/define.scm 78 */
															if (NULLP(BgL_cdrzd21140zd2_383))
																{	/* Expand/define.scm 78 */
																	goto BgL_tagzd2809zd2_291;
																}
															else
																{
																	obj_t BgL_valuez00_1806;
																	obj_t BgL_namez00_1805;

																	BgL_namez00_1805 = BgL_carzd21139zd2_382;
																	BgL_valuez00_1806 = BgL_cdrzd21140zd2_383;
																	BgL_valuez00_289 = BgL_valuez00_1806;
																	BgL_namez00_288 = BgL_namez00_1805;
																	goto BgL_tagzd2808zd2_290;
																}
														}
													else
														{	/* Expand/define.scm 78 */
															goto BgL_tagzd2809zd2_291;
														}
												}
										}
								}
							else
								{	/* Expand/define.scm 78 */
									goto BgL_tagzd2809zd2_291;
								}
						}
					else
						{	/* Expand/define.scm 78 */
							goto BgL_tagzd2809zd2_291;
						}
				}
			}
		}

	}



/* &<@anonymous:1330> */
	obj_t BGl_z62zc3z04anonymousza31330ze3ze5zzexpand_definez00(obj_t
		BgL_envz00_1139)
	{
		{	/* Expand/define.scm 117 */
			{	/* Expand/define.scm 118 */
				obj_t BgL_xz00_1140;
				obj_t BgL_valuez00_1141;
				obj_t BgL_typezd2idzd2_1142;
				obj_t BgL_typez00_1143;
				obj_t BgL_argsz00_1144;
				obj_t BgL_ez00_1145;
				obj_t BgL_bodyz00_1146;
				obj_t BgL_namezd2idzd2_1147;

				BgL_xz00_1140 = PROCEDURE_REF(BgL_envz00_1139, (int) (((long) 0)));
				BgL_valuez00_1141 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1139, (int) (((long) 1))));
				BgL_typezd2idzd2_1142 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1139, (int) (((long) 2))));
				BgL_typez00_1143 = PROCEDURE_REF(BgL_envz00_1139, (int) (((long) 3)));
				BgL_argsz00_1144 = PROCEDURE_REF(BgL_envz00_1139, (int) (((long) 4)));
				BgL_ez00_1145 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1139, (int) (((long) 5))));
				BgL_bodyz00_1146 = PROCEDURE_REF(BgL_envz00_1139, (int) (((long) 6)));
				BgL_namezd2idzd2_1147 =
					PROCEDURE_REF(BgL_envz00_1139, (int) (((long) 7)));
				{	/* Expand/define.scm 118 */
					obj_t BgL_locz00_1227;

					BgL_locz00_1227 =
						BGl_findzd2locationzf2locz20zztools_locationz00(BgL_valuez00_1141,
						BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_1140));
					{	/* Expand/define.scm 118 */
						obj_t BgL_nbodyz00_1228;

						{	/* Expand/define.scm 120 */
							obj_t BgL_arg1337z00_1229;
							obj_t BgL_arg1338z00_1230;

							{	/* Expand/define.scm 120 */
								bool_t BgL_test2058z00_1828;

								{	/* Expand/define.scm 120 */
									BgL_typez00_bglt BgL_arg1344z00_1231;

									BgL_arg1344z00_1231 =
										BGl_getzd2defaultzd2typez00zztype_cachez00();
									BgL_test2058z00_1828 =
										(BgL_typez00_1143 == ((obj_t) BgL_arg1344z00_1231));
								}
								if (BgL_test2058z00_1828)
									{	/* Expand/define.scm 120 */
										BgL_arg1337z00_1229 = CNST_TABLE_REF(((long) 0));
									}
								else
									{	/* Expand/define.scm 120 */
										BgL_arg1337z00_1229 =
											BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF((
													(long) 0)), BgL_typezd2idzd2_1142);
							}}
							{	/* Expand/define.scm 124 */
								obj_t BgL_arg1345z00_1232;
								obj_t BgL_arg1346z00_1233;

								BgL_arg1345z00_1232 =
									BGl_expandzd2argszd2zzexpand_lambdaz00(BgL_argsz00_1144,
									BgL_ez00_1145);
								{	/* Expand/define.scm 125 */
									obj_t BgL_arg1347z00_1234;

									{	/* Expand/define.scm 125 */
										obj_t BgL_arg1348z00_1235;

										BgL_arg1348z00_1235 =
											BGl_normaliza7ezd2prognzf2locz87zztools_prognz00
											(BgL_bodyz00_1146, BgL_locz00_1227);
										BgL_arg1347z00_1234 =
											PROCEDURE_ENTRY(BgL_ez00_1145) (BgL_ez00_1145,
											BgL_arg1348z00_1235, BgL_ez00_1145, BEOA);
									}
									BgL_arg1346z00_1233 =
										MAKE_YOUNG_PAIR(BgL_arg1347z00_1234, BNIL);
								}
								BgL_arg1338z00_1230 =
									MAKE_YOUNG_PAIR(BgL_arg1345z00_1232, BgL_arg1346z00_1233);
							}
							BgL_nbodyz00_1228 =
								MAKE_YOUNG_PAIR(BgL_arg1337z00_1229, BgL_arg1338z00_1230);
						}
						{	/* Expand/define.scm 120 */
							obj_t BgL_enbodyz00_1236;

							BgL_enbodyz00_1236 =
								BGl_epairifyz00zztools_miscz00(BgL_nbodyz00_1228,
								BgL_bodyz00_1146);
							{	/* Expand/define.scm 126 */

								{	/* Expand/define.scm 127 */
									obj_t BgL_arg1331z00_1237;

									{	/* Expand/define.scm 127 */
										obj_t BgL_arg1334z00_1238;

										{	/* Expand/define.scm 127 */
											obj_t BgL_arg1335z00_1239;

											BgL_arg1335z00_1239 =
												MAKE_YOUNG_PAIR(BgL_enbodyz00_1236, BNIL);
											BgL_arg1334z00_1238 =
												MAKE_YOUNG_PAIR(BgL_namezd2idzd2_1147,
												BgL_arg1335z00_1239);
										}
										BgL_arg1331z00_1237 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
											BgL_arg1334z00_1238);
									}
									return
										BGl_replacez12z12zztools_miscz00(BgL_xz00_1140,
										BgL_arg1331z00_1237);
								}
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1305> */
	obj_t BGl_z62zc3z04anonymousza31305ze3ze5zzexpand_definez00(obj_t
		BgL_envz00_1148)
	{
		{	/* Expand/define.scm 92 */
			{	/* Expand/define.scm 93 */
				obj_t BgL_xz00_1149;
				obj_t BgL_typezd2idzd2_1150;
				obj_t BgL_typez00_1151;
				obj_t BgL_bodyz00_1152;
				obj_t BgL_ez00_1153;
				obj_t BgL_argsz00_1154;
				obj_t BgL_namezd2idzd2_1155;

				BgL_xz00_1149 = PROCEDURE_REF(BgL_envz00_1148, (int) (((long) 0)));
				BgL_typezd2idzd2_1150 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1148, (int) (((long) 1))));
				BgL_typez00_1151 = PROCEDURE_REF(BgL_envz00_1148, (int) (((long) 2)));
				BgL_bodyz00_1152 = PROCEDURE_REF(BgL_envz00_1148, (int) (((long) 3)));
				BgL_ez00_1153 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1148, (int) (((long) 4))));
				BgL_argsz00_1154 = PROCEDURE_REF(BgL_envz00_1148, (int) (((long) 5)));
				BgL_namezd2idzd2_1155 =
					PROCEDURE_REF(BgL_envz00_1148, (int) (((long) 6)));
				{	/* Expand/define.scm 93 */
					obj_t BgL_locz00_1240;

					{	/* Expand/define.scm 93 */
						obj_t BgL_arg1319z00_1241;
						obj_t BgL_arg1322z00_1242;

						{	/* Expand/define.scm 93 */
							obj_t BgL_pairz00_1243;

							BgL_pairz00_1243 = CDR(((obj_t) BgL_xz00_1149));
							BgL_arg1319z00_1241 = CDR(BgL_pairz00_1243);
						}
						BgL_arg1322z00_1242 =
							BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_1149);
						BgL_locz00_1240 =
							BGl_findzd2locationzf2locz20zztools_locationz00
							(BgL_arg1319z00_1241, BgL_arg1322z00_1242);
					}
					{	/* Expand/define.scm 93 */
						obj_t BgL_nbodyz00_1244;

						{	/* Expand/define.scm 95 */
							obj_t BgL_arg1309z00_1245;
							obj_t BgL_arg1310z00_1246;

							{	/* Expand/define.scm 95 */
								bool_t BgL_test2059z00_1872;

								{	/* Expand/define.scm 95 */
									BgL_typez00_bglt BgL_arg1314z00_1247;

									BgL_arg1314z00_1247 =
										BGl_getzd2defaultzd2typez00zztype_cachez00();
									BgL_test2059z00_1872 =
										(BgL_typez00_1151 == ((obj_t) BgL_arg1314z00_1247));
								}
								if (BgL_test2059z00_1872)
									{	/* Expand/define.scm 95 */
										BgL_arg1309z00_1245 = CNST_TABLE_REF(((long) 0));
									}
								else
									{	/* Expand/define.scm 95 */
										BgL_arg1309z00_1245 =
											BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF((
													(long) 0)), BgL_typezd2idzd2_1150);
							}}
							{	/* Expand/define.scm 99 */
								obj_t BgL_arg1315z00_1248;

								{	/* Expand/define.scm 99 */
									obj_t BgL_arg1316z00_1249;

									{	/* Expand/define.scm 99 */
										obj_t BgL_arg1317z00_1250;

										BgL_arg1317z00_1250 =
											BGl_normaliza7ezd2prognzf2locz87zztools_prognz00
											(BgL_bodyz00_1152, BgL_locz00_1240);
										BgL_arg1316z00_1249 =
											PROCEDURE_ENTRY(BgL_ez00_1153) (BgL_ez00_1153,
											BgL_arg1317z00_1250, BgL_ez00_1153, BEOA);
									}
									BgL_arg1315z00_1248 =
										MAKE_YOUNG_PAIR(BgL_arg1316z00_1249, BNIL);
								}
								BgL_arg1310z00_1246 =
									MAKE_YOUNG_PAIR(BgL_argsz00_1154, BgL_arg1315z00_1248);
							}
							BgL_nbodyz00_1244 =
								MAKE_YOUNG_PAIR(BgL_arg1309z00_1245, BgL_arg1310z00_1246);
						}
						{	/* Expand/define.scm 95 */
							obj_t BgL_enbodyz00_1251;

							BgL_enbodyz00_1251 =
								BGl_epairifyz00zztools_miscz00(BgL_nbodyz00_1244,
								BgL_bodyz00_1152);
							{	/* Expand/define.scm 100 */

								{	/* Expand/define.scm 101 */
									obj_t BgL_arg1306z00_1252;

									{	/* Expand/define.scm 101 */
										obj_t BgL_arg1307z00_1253;

										{	/* Expand/define.scm 101 */
											obj_t BgL_arg1308z00_1254;

											BgL_arg1308z00_1254 =
												MAKE_YOUNG_PAIR(BgL_enbodyz00_1251, BNIL);
											BgL_arg1307z00_1253 =
												MAKE_YOUNG_PAIR(BgL_namezd2idzd2_1155,
												BgL_arg1308z00_1254);
										}
										BgL_arg1306z00_1252 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
											BgL_arg1307z00_1253);
									}
									return
										BGl_replacez12z12zztools_miscz00(BgL_xz00_1149,
										BgL_arg1306z00_1252);
								}
							}
						}
					}
				}
			}
		}

	}



/* expand-set! */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2setz12zc0zzexpand_definez00(obj_t
		BgL_xz00_19, obj_t BgL_ez00_20)
	{
		{	/* Expand/define.scm 147 */
			if (CBOOL(BGl_internalzd2definitionzf3z21zzexpand_lambdaz00))
				{	/* Expand/define.scm 168 */
					return
						BGl_internalzd2expandzd2setz12ze70zf5zzexpand_definez00(BgL_xz00_19,
						BgL_ez00_20);
				}
			else
				{	/* Expand/define.scm 168 */
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
					{	/* Expand/define.scm 172 */
						obj_t BgL_resz00_460;

						BgL_resz00_460 =
							BGl_internalzd2expandzd2setz12ze70zf5zzexpand_definez00
							(BgL_xz00_19,
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00
							(BgL_ez00_20));
						BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BFALSE;
						return
							BGl_replacez12z12zztools_miscz00(BgL_xz00_19, BgL_resz00_460);
					}
				}
		}

	}



/* internal-expand-set!~0 */
	obj_t BGl_internalzd2expandzd2setz12ze70zf5zzexpand_definez00(obj_t
		BgL_xz00_462, obj_t BgL_ez00_463)
	{
		{	/* Expand/define.scm 167 */
			{
				obj_t BgL_varz00_465;
				obj_t BgL_valuez00_466;
				obj_t BgL_idz00_468;
				obj_t BgL_varz00_469;
				obj_t BgL_valuez00_470;
				obj_t BgL_faz00_472;
				obj_t BgL_valuez00_473;

				if (PAIRP(BgL_xz00_462))
					{	/* Expand/define.scm 167 */
						obj_t BgL_cdrzd21186zd2_478;

						BgL_cdrzd21186zd2_478 = CDR(BgL_xz00_462);
						if (PAIRP(BgL_cdrzd21186zd2_478))
							{	/* Expand/define.scm 167 */
								obj_t BgL_carzd21189zd2_480;
								obj_t BgL_cdrzd21190zd2_481;

								BgL_carzd21189zd2_480 = CAR(BgL_cdrzd21186zd2_478);
								BgL_cdrzd21190zd2_481 = CDR(BgL_cdrzd21186zd2_478);
								if (SYMBOLP(BgL_carzd21189zd2_480))
									{	/* Expand/define.scm 167 */
										if (PAIRP(BgL_cdrzd21190zd2_481))
											{	/* Expand/define.scm 167 */
												if (NULLP(CDR(BgL_cdrzd21190zd2_481)))
													{	/* Expand/define.scm 167 */
														BgL_varz00_465 = BgL_carzd21189zd2_480;
														BgL_valuez00_466 = CAR(BgL_cdrzd21190zd2_481);
														BGl_enterzd2functionzd2zztools_errorz00
															(BgL_varz00_465);
														{	/* Expand/define.scm 153 */
															obj_t BgL_evz00_524;

															BgL_evz00_524 =
																PROCEDURE_ENTRY(BgL_ez00_463) (BgL_ez00_463,
																BgL_valuez00_466, BgL_ez00_463, BEOA);
															BGl_leavezd2functionzd2zztools_errorz00();
															{	/* Expand/define.scm 155 */
																obj_t BgL_arg1528z00_525;

																{	/* Expand/define.scm 155 */
																	obj_t BgL_arg1536z00_526;

																	{	/* Expand/define.scm 155 */
																		obj_t BgL_arg1537z00_527;

																		BgL_arg1537z00_527 =
																			MAKE_YOUNG_PAIR(BgL_evz00_524, BNIL);
																		BgL_arg1536z00_526 =
																			MAKE_YOUNG_PAIR(BgL_varz00_465,
																			BgL_arg1537z00_527);
																	}
																	BgL_arg1528z00_525 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																		BgL_arg1536z00_526);
																}
																return
																	BGl_replacez12z12zztools_miscz00(BgL_xz00_462,
																	BgL_arg1528z00_525);
															}
														}
													}
												else
													{	/* Expand/define.scm 167 */
													BgL_tagzd21177zd2_475:
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string1941z00zzexpand_definez00,
															BgL_xz00_462);
													}
											}
										else
											{	/* Expand/define.scm 167 */
												goto BgL_tagzd21177zd2_475;
											}
									}
								else
									{	/* Expand/define.scm 167 */
										obj_t BgL_carzd21238zd2_489;
										obj_t BgL_cdrzd21239zd2_490;

										BgL_carzd21238zd2_489 =
											CAR(((obj_t) BgL_cdrzd21186zd2_478));
										BgL_cdrzd21239zd2_490 =
											CDR(((obj_t) BgL_cdrzd21186zd2_478));
										if (PAIRP(BgL_carzd21238zd2_489))
											{	/* Expand/define.scm 167 */
												obj_t BgL_cdrzd21245zd2_492;

												BgL_cdrzd21245zd2_492 = CDR(BgL_carzd21238zd2_489);
												if (
													(CAR(BgL_carzd21238zd2_489) ==
														CNST_TABLE_REF(((long) 4))))
													{	/* Expand/define.scm 167 */
														if (PAIRP(BgL_cdrzd21245zd2_492))
															{	/* Expand/define.scm 167 */
																obj_t BgL_carzd21247zd2_496;
																obj_t BgL_cdrzd21248zd2_497;

																BgL_carzd21247zd2_496 =
																	CAR(BgL_cdrzd21245zd2_492);
																BgL_cdrzd21248zd2_497 =
																	CDR(BgL_cdrzd21245zd2_492);
																if (SYMBOLP(BgL_carzd21247zd2_496))
																	{	/* Expand/define.scm 167 */
																		if (PAIRP(BgL_cdrzd21248zd2_497))
																			{	/* Expand/define.scm 167 */
																				bool_t BgL_test2071z00_1947;

																				{	/* Expand/define.scm 167 */
																					obj_t BgL_tmpz00_1948;

																					BgL_tmpz00_1948 =
																						CAR(BgL_cdrzd21248zd2_497);
																					BgL_test2071z00_1947 =
																						SYMBOLP(BgL_tmpz00_1948);
																				}
																				if (BgL_test2071z00_1947)
																					{	/* Expand/define.scm 167 */
																						if (NULLP(CDR
																								(BgL_cdrzd21248zd2_497)))
																							{	/* Expand/define.scm 167 */
																								if (PAIRP
																									(BgL_cdrzd21239zd2_490))
																									{	/* Expand/define.scm 167 */
																										if (NULLP(CDR
																												(BgL_cdrzd21239zd2_490)))
																											{	/* Expand/define.scm 167 */
																												BgL_idz00_468 =
																													BgL_carzd21247zd2_496;
																												BgL_varz00_469 =
																													BgL_carzd21238zd2_489;
																												BgL_valuez00_470 =
																													CAR
																													(BgL_cdrzd21239zd2_490);
																												BGl_enterzd2functionzd2zztools_errorz00
																													(BgL_idz00_468);
																												{	/* Expand/define.scm 159 */
																													obj_t BgL_evz00_528;

																													BgL_evz00_528 =
																														PROCEDURE_ENTRY
																														(BgL_ez00_463)
																														(BgL_ez00_463,
																														BgL_valuez00_470,
																														BgL_ez00_463, BEOA);
																													BGl_leavezd2functionzd2zztools_errorz00
																														();
																													{	/* Expand/define.scm 161 */
																														obj_t
																															BgL_arg1540z00_529;
																														{	/* Expand/define.scm 161 */
																															obj_t
																																BgL_arg1552z00_530;
																															{	/* Expand/define.scm 161 */
																																obj_t
																																	BgL_arg1553z00_531;
																																BgL_arg1553z00_531
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_evz00_528,
																																	BNIL);
																																BgL_arg1552z00_530
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_varz00_469,
																																	BgL_arg1553z00_531);
																															}
																															BgL_arg1540z00_529
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 3)),
																																BgL_arg1552z00_530);
																														}
																														return
																															BGl_replacez12z12zztools_miscz00
																															(BgL_xz00_462,
																															BgL_arg1540z00_529);
																													}
																												}
																											}
																										else
																											{	/* Expand/define.scm 167 */
																												goto
																													BgL_tagzd21177zd2_475;
																											}
																									}
																								else
																									{	/* Expand/define.scm 167 */
																										goto BgL_tagzd21177zd2_475;
																									}
																							}
																						else
																							{	/* Expand/define.scm 167 */
																								goto BgL_tagzd21177zd2_475;
																							}
																					}
																				else
																					{	/* Expand/define.scm 167 */
																						goto BgL_tagzd21177zd2_475;
																					}
																			}
																		else
																			{	/* Expand/define.scm 167 */
																				goto BgL_tagzd21177zd2_475;
																			}
																	}
																else
																	{	/* Expand/define.scm 167 */
																		goto BgL_tagzd21177zd2_475;
																	}
															}
														else
															{	/* Expand/define.scm 167 */
																goto BgL_tagzd21177zd2_475;
															}
													}
												else
													{	/* Expand/define.scm 167 */
														obj_t BgL_cdrzd21292zd2_511;

														BgL_cdrzd21292zd2_511 = CDR(BgL_xz00_462);
														{	/* Expand/define.scm 167 */
															obj_t BgL_carzd21295zd2_512;
															obj_t BgL_cdrzd21296zd2_513;

															BgL_carzd21295zd2_512 =
																CAR(((obj_t) BgL_cdrzd21292zd2_511));
															BgL_cdrzd21296zd2_513 =
																CDR(((obj_t) BgL_cdrzd21292zd2_511));
															if (PAIRP(BgL_carzd21295zd2_512))
																{	/* Expand/define.scm 167 */
																	if (
																		(CAR(BgL_carzd21295zd2_512) ==
																			CNST_TABLE_REF(((long) 5))))
																		{	/* Expand/define.scm 167 */
																			if (PAIRP(BgL_cdrzd21296zd2_513))
																				{	/* Expand/define.scm 167 */
																					if (NULLP(CDR(BgL_cdrzd21296zd2_513)))
																						{	/* Expand/define.scm 167 */
																							BgL_faz00_472 =
																								BgL_carzd21295zd2_512;
																							BgL_valuez00_473 =
																								CAR(BgL_cdrzd21296zd2_513);
																							{	/* Expand/define.scm 163 */
																								obj_t BgL_evz00_532;
																								obj_t BgL_efaz00_533;

																								BgL_evz00_532 =
																									PROCEDURE_ENTRY(BgL_ez00_463)
																									(BgL_ez00_463,
																									BgL_valuez00_473,
																									BgL_ez00_463, BEOA);
																								BgL_efaz00_533 =
																									PROCEDURE_ENTRY(BgL_ez00_463)
																									(BgL_ez00_463, BgL_faz00_472,
																									BgL_ez00_463, BEOA);
																								{	/* Expand/define.scm 165 */
																									obj_t BgL_arg1558z00_534;

																									{	/* Expand/define.scm 165 */
																										obj_t BgL_arg1561z00_535;

																										{	/* Expand/define.scm 165 */
																											obj_t BgL_arg1564z00_536;

																											BgL_arg1564z00_536 =
																												MAKE_YOUNG_PAIR
																												(BgL_evz00_532, BNIL);
																											BgL_arg1561z00_535 =
																												MAKE_YOUNG_PAIR
																												(BgL_efaz00_533,
																												BgL_arg1564z00_536);
																										}
																										BgL_arg1558z00_534 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													3)),
																											BgL_arg1561z00_535);
																									}
																									return
																										BGl_replacez12z12zztools_miscz00
																										(BgL_xz00_462,
																										BgL_arg1558z00_534);
																								}
																							}
																						}
																					else
																						{	/* Expand/define.scm 167 */
																							goto BgL_tagzd21177zd2_475;
																						}
																				}
																			else
																				{	/* Expand/define.scm 167 */
																					goto BgL_tagzd21177zd2_475;
																				}
																		}
																	else
																		{	/* Expand/define.scm 167 */
																			goto BgL_tagzd21177zd2_475;
																		}
																}
															else
																{	/* Expand/define.scm 167 */
																	goto BgL_tagzd21177zd2_475;
																}
														}
													}
											}
										else
											{	/* Expand/define.scm 167 */
												goto BgL_tagzd21177zd2_475;
											}
									}
							}
						else
							{	/* Expand/define.scm 167 */
								goto BgL_tagzd21177zd2_475;
							}
					}
				else
					{	/* Expand/define.scm 167 */
						goto BgL_tagzd21177zd2_475;
					}
			}
		}

	}



/* &expand-set! */
	obj_t BGl_z62expandzd2setz12za2zzexpand_definez00(obj_t BgL_envz00_1156,
		obj_t BgL_xz00_1157, obj_t BgL_ez00_1158)
	{
		{	/* Expand/define.scm 147 */
			return
				BGl_expandzd2setz12zc0zzexpand_definez00(BgL_xz00_1157, BgL_ez00_1158);
		}

	}



/* expand-method */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2methodzd2zzexpand_definez00(obj_t
		BgL_xz00_21, obj_t BgL_ez00_22)
	{
		{	/* Expand/define.scm 179 */
			{
				obj_t BgL_kwz00_538;
				obj_t BgL_idz00_539;
				obj_t BgL_argsz00_540;
				obj_t BgL_bodyz00_541;

				if (PAIRP(BgL_xz00_21))
					{	/* Expand/define.scm 180 */
						obj_t BgL_cdrzd21343zd2_546;

						BgL_cdrzd21343zd2_546 = CDR(BgL_xz00_21);
						if (PAIRP(BgL_cdrzd21343zd2_546))
							{	/* Expand/define.scm 180 */
								obj_t BgL_carzd21348zd2_548;
								obj_t BgL_cdrzd21349zd2_549;

								BgL_carzd21348zd2_548 = CAR(BgL_cdrzd21343zd2_546);
								BgL_cdrzd21349zd2_549 = CDR(BgL_cdrzd21343zd2_546);
								if (PAIRP(BgL_carzd21348zd2_548))
									{	/* Expand/define.scm 180 */
										obj_t BgL_carzd21352zd2_551;

										BgL_carzd21352zd2_551 = CAR(BgL_carzd21348zd2_548);
										if (SYMBOLP(BgL_carzd21352zd2_551))
											{	/* Expand/define.scm 180 */
												if (NULLP(BgL_cdrzd21349zd2_549))
													{	/* Expand/define.scm 180 */
													BgL_tagzd21332zd2_543:
														return
															BGl_errorz00zz__errorz00(BFALSE,
															BGl_string1942z00zzexpand_definez00, BgL_xz00_21);
													}
												else
													{	/* Expand/define.scm 180 */
														BgL_kwz00_538 = CAR(BgL_xz00_21);
														BgL_idz00_539 = BgL_carzd21352zd2_551;
														BgL_argsz00_540 = CDR(BgL_carzd21348zd2_548);
														BgL_bodyz00_541 = BgL_cdrzd21349zd2_549;
														{	/* Expand/define.scm 183 */
															obj_t BgL_arg1578z00_556;
															obj_t BgL_arg1582z00_557;

															BgL_arg1578z00_556 =
																BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																(BgL_argsz00_540);
															BgL_arg1582z00_557 =
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_xz00_21);
															{	/* Expand/define.scm 187 */
																obj_t BgL_zc3z04anonymousza31585ze3z87_1159;

																BgL_zc3z04anonymousza31585ze3z87_1159 =
																	MAKE_FX_PROCEDURE
																	(BGl_z62zc3z04anonymousza31585ze3ze5zzexpand_definez00,
																	(int) (((long) 0)), (int) (((long) 6)));
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31585ze3z87_1159,
																	(int) (((long) 0)), BgL_kwz00_538);
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31585ze3z87_1159,
																	(int) (((long) 1)), BgL_ez00_22);
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31585ze3z87_1159,
																	(int) (((long) 2)), BgL_idz00_539);
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31585ze3z87_1159,
																	(int) (((long) 3)), BgL_argsz00_540);
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31585ze3z87_1159,
																	(int) (((long) 4)), BgL_bodyz00_541);
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza31585ze3z87_1159,
																	(int) (((long) 5)), BgL_xz00_21);
																return
																	BGl_withzd2lexicalzd2zzexpand_epsz00
																	(BgL_arg1578z00_556,
																	CNST_TABLE_REF(((long) 1)),
																	BgL_arg1582z00_557,
																	BgL_zc3z04anonymousza31585ze3z87_1159);
											}}}}
										else
											{	/* Expand/define.scm 180 */
												goto BgL_tagzd21332zd2_543;
											}
									}
								else
									{	/* Expand/define.scm 180 */
										goto BgL_tagzd21332zd2_543;
									}
							}
						else
							{	/* Expand/define.scm 180 */
								goto BgL_tagzd21332zd2_543;
							}
					}
				else
					{	/* Expand/define.scm 180 */
						goto BgL_tagzd21332zd2_543;
					}
			}
		}

	}



/* &expand-method */
	obj_t BGl_z62expandzd2methodzb0zzexpand_definez00(obj_t BgL_envz00_1160,
		obj_t BgL_xz00_1161, obj_t BgL_ez00_1162)
	{
		{	/* Expand/define.scm 179 */
			return
				BGl_expandzd2methodzd2zzexpand_definez00(BgL_xz00_1161, BgL_ez00_1162);
		}

	}



/* &<@anonymous:1585> */
	obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzexpand_definez00(obj_t
		BgL_envz00_1163)
	{
		{	/* Expand/define.scm 186 */
			{	/* Expand/define.scm 187 */
				obj_t BgL_kwz00_1164;
				obj_t BgL_ez00_1165;
				obj_t BgL_idz00_1166;
				obj_t BgL_argsz00_1167;
				obj_t BgL_bodyz00_1168;
				obj_t BgL_xz00_1169;

				BgL_kwz00_1164 = PROCEDURE_REF(BgL_envz00_1163, (int) (((long) 0)));
				BgL_ez00_1165 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1163, (int) (((long) 1))));
				BgL_idz00_1166 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1163, (int) (((long) 2))));
				BgL_argsz00_1167 = PROCEDURE_REF(BgL_envz00_1163, (int) (((long) 3)));
				BgL_bodyz00_1168 = PROCEDURE_REF(BgL_envz00_1163, (int) (((long) 4)));
				BgL_xz00_1169 = PROCEDURE_REF(BgL_envz00_1163, (int) (((long) 5)));
				return
					BGl_replacez12z12zztools_miscz00(BgL_xz00_1169,
					BGl_dozd2inlinezf2genericzf2methodzd2zzexpand_definez00
					(BgL_kwz00_1164, BgL_ez00_1165, BgL_idz00_1166, BgL_idz00_1166,
						BgL_argsz00_1167, BgL_bodyz00_1168, BgL_xz00_1169));
			}
		}

	}



/* expand-inline */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2inlinezd2zzexpand_definez00(obj_t
		BgL_xz00_23, obj_t BgL_ez00_24)
	{
		{	/* Expand/define.scm 196 */
			if (CBOOL(BGl_internalzd2definitionzf3z21zzexpand_lambdaz00))
				{	/* Expand/define.scm 197 */
					return
						BGl_expandzd2internalzd2definez00zzexpand_definez00(BgL_xz00_23,
						BgL_ez00_24);
				}
			else
				{	/* Expand/define.scm 197 */
					return
						BGl_expandzd2externalzd2definezd2inlinezd2zzexpand_definez00
						(BgL_xz00_23, BgL_ez00_24);
				}
		}

	}



/* &expand-inline */
	obj_t BGl_z62expandzd2inlinezb0zzexpand_definez00(obj_t BgL_envz00_1170,
		obj_t BgL_xz00_1171, obj_t BgL_ez00_1172)
	{
		{	/* Expand/define.scm 196 */
			return
				BGl_expandzd2inlinezd2zzexpand_definez00(BgL_xz00_1171, BgL_ez00_1172);
		}

	}



/* expand-external-define-inline */
	obj_t BGl_expandzd2externalzd2definezd2inlinezd2zzexpand_definez00(obj_t
		BgL_xz00_25, obj_t BgL_ez00_26)
	{
		{	/* Expand/define.scm 204 */
			{

				if (PAIRP(BgL_xz00_25))
					{	/* Expand/define.scm 205 */
						obj_t BgL_cdrzd21374zd2_571;

						BgL_cdrzd21374zd2_571 = CDR(BgL_xz00_25);
						if (PAIRP(BgL_cdrzd21374zd2_571))
							{	/* Expand/define.scm 205 */
								obj_t BgL_carzd21380zd2_573;
								obj_t BgL_cdrzd21381zd2_574;

								BgL_carzd21380zd2_573 = CAR(BgL_cdrzd21374zd2_571);
								BgL_cdrzd21381zd2_574 = CDR(BgL_cdrzd21374zd2_571);
								if (PAIRP(BgL_carzd21380zd2_573))
									{	/* Expand/define.scm 205 */
										obj_t BgL_carzd21385zd2_576;

										BgL_carzd21385zd2_576 = CAR(BgL_carzd21380zd2_573);
										{
											obj_t BgL_namez00_577;

											if (SYMBOLP(BgL_carzd21385zd2_576))
												{	/* Expand/define.scm 205 */
													BgL_namez00_577 = BgL_carzd21385zd2_576;
												BgL_kapzd21392zd2_578:
													if (NULLP(BgL_cdrzd21381zd2_574))
														{	/* Expand/define.scm 205 */
														BgL_tagzd21361zd2_568:
															return
																BGl_errorz00zz__errorz00(BFALSE,
																BGl_string1943z00zzexpand_definez00,
																BgL_xz00_25);
														}
													else
														{	/* Expand/define.scm 205 */
															obj_t BgL_arg1624z00_597;
															obj_t BgL_arg1626z00_598;

															BgL_arg1624z00_597 = CAR(((obj_t) BgL_xz00_25));
															BgL_arg1626z00_598 =
																CDR(((obj_t) BgL_carzd21380zd2_573));
															{	/* Expand/define.scm 210 */
																obj_t BgL_arg1627z00_1039;
																obj_t BgL_arg1631z00_1040;

																BgL_arg1627z00_1039 =
																	BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																	(BgL_arg1626z00_598);
																BgL_arg1631z00_1040 =
																	BGl_findzd2locationzd2zztools_locationz00
																	(BgL_xz00_25);
																{	/* Expand/define.scm 214 */
																	obj_t BgL_zc3z04anonymousza31635ze3z87_1173;

																	BgL_zc3z04anonymousza31635ze3z87_1173 =
																		MAKE_FX_PROCEDURE
																		(BGl_z62zc3z04anonymousza31635ze3ze5zzexpand_definez00,
																		(int) (((long) 0)), (int) (((long) 7)));
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31635ze3z87_1173,
																		(int) (((long) 0)), BgL_arg1624z00_597);
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31635ze3z87_1173,
																		(int) (((long) 1)), BgL_ez00_26);
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31635ze3z87_1173,
																		(int) (((long) 2)), BgL_carzd21385zd2_576);
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31635ze3z87_1173,
																		(int) (((long) 3)), BgL_namez00_577);
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31635ze3z87_1173,
																		(int) (((long) 4)), BgL_arg1626z00_598);
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31635ze3z87_1173,
																		(int) (((long) 5)), BgL_cdrzd21381zd2_574);
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza31635ze3z87_1173,
																		(int) (((long) 6)), BgL_xz00_25);
																	return
																		BGl_withzd2lexicalzd2zzexpand_epsz00
																		(BgL_arg1627z00_1039,
																		CNST_TABLE_REF(((long) 1)),
																		BgL_arg1631z00_1040,
																		BgL_zc3z04anonymousza31635ze3z87_1173);
												}}}}
											else
												{	/* Expand/define.scm 205 */
													if (PAIRP(BgL_carzd21385zd2_576))
														{	/* Expand/define.scm 205 */
															obj_t BgL_cdrzd21403zd2_581;

															BgL_cdrzd21403zd2_581 =
																CDR(BgL_carzd21385zd2_576);
															if (
																(CAR(BgL_carzd21385zd2_576) ==
																	CNST_TABLE_REF(((long) 4))))
																{	/* Expand/define.scm 205 */
																	if (PAIRP(BgL_cdrzd21403zd2_581))
																		{	/* Expand/define.scm 205 */
																			obj_t BgL_carzd21405zd2_585;
																			obj_t BgL_cdrzd21406zd2_586;

																			BgL_carzd21405zd2_585 =
																				CAR(BgL_cdrzd21403zd2_581);
																			BgL_cdrzd21406zd2_586 =
																				CDR(BgL_cdrzd21403zd2_581);
																			if (SYMBOLP(BgL_carzd21405zd2_585))
																				{	/* Expand/define.scm 205 */
																					if (PAIRP(BgL_cdrzd21406zd2_586))
																						{	/* Expand/define.scm 205 */
																							bool_t BgL_test2095z00_2118;

																							{	/* Expand/define.scm 205 */
																								obj_t BgL_tmpz00_2119;

																								BgL_tmpz00_2119 =
																									CAR(BgL_cdrzd21406zd2_586);
																								BgL_test2095z00_2118 =
																									SYMBOLP(BgL_tmpz00_2119);
																							}
																							if (BgL_test2095z00_2118)
																								{	/* Expand/define.scm 205 */
																									if (NULLP(CDR
																											(BgL_cdrzd21406zd2_586)))
																										{
																											obj_t BgL_namez00_2125;

																											BgL_namez00_2125 =
																												BgL_carzd21405zd2_585;
																											BgL_namez00_577 =
																												BgL_namez00_2125;
																											goto
																												BgL_kapzd21392zd2_578;
																										}
																									else
																										{	/* Expand/define.scm 205 */
																											goto
																												BgL_tagzd21361zd2_568;
																										}
																								}
																							else
																								{	/* Expand/define.scm 205 */
																									goto BgL_tagzd21361zd2_568;
																								}
																						}
																					else
																						{	/* Expand/define.scm 205 */
																							goto BgL_tagzd21361zd2_568;
																						}
																				}
																			else
																				{	/* Expand/define.scm 205 */
																					goto BgL_tagzd21361zd2_568;
																				}
																		}
																	else
																		{	/* Expand/define.scm 205 */
																			goto BgL_tagzd21361zd2_568;
																		}
																}
															else
																{	/* Expand/define.scm 205 */
																	goto BgL_tagzd21361zd2_568;
																}
														}
													else
														{	/* Expand/define.scm 205 */
															goto BgL_tagzd21361zd2_568;
														}
												}
										}
									}
								else
									{	/* Expand/define.scm 205 */
										goto BgL_tagzd21361zd2_568;
									}
							}
						else
							{	/* Expand/define.scm 205 */
								goto BgL_tagzd21361zd2_568;
							}
					}
				else
					{	/* Expand/define.scm 205 */
						goto BgL_tagzd21361zd2_568;
					}
			}
		}

	}



/* &<@anonymous:1635> */
	obj_t BGl_z62zc3z04anonymousza31635ze3ze5zzexpand_definez00(obj_t
		BgL_envz00_1174)
	{
		{	/* Expand/define.scm 213 */
			{	/* Expand/define.scm 214 */
				obj_t BgL_arg1624z00_1175;
				obj_t BgL_ez00_1176;
				obj_t BgL_carzd21385zd2_1177;
				obj_t BgL_namez00_1178;
				obj_t BgL_arg1626z00_1179;
				obj_t BgL_cdrzd21381zd2_1180;
				obj_t BgL_xz00_1181;

				BgL_arg1624z00_1175 =
					PROCEDURE_REF(BgL_envz00_1174, (int) (((long) 0)));
				BgL_ez00_1176 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1174, (int) (((long) 1))));
				BgL_carzd21385zd2_1177 =
					PROCEDURE_REF(BgL_envz00_1174, (int) (((long) 2)));
				BgL_namez00_1178 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1174, (int) (((long) 3))));
				BgL_arg1626z00_1179 =
					PROCEDURE_REF(BgL_envz00_1174, (int) (((long) 4)));
				BgL_cdrzd21381zd2_1180 =
					PROCEDURE_REF(BgL_envz00_1174, (int) (((long) 5)));
				BgL_xz00_1181 = PROCEDURE_REF(BgL_envz00_1174, (int) (((long) 6)));
				return
					BGl_replacez12z12zztools_miscz00(BgL_xz00_1181,
					BGl_dozd2inlinezf2genericzf2methodzd2zzexpand_definez00
					(BgL_arg1624z00_1175, BgL_ez00_1176, BgL_carzd21385zd2_1177,
						BgL_namez00_1178, BgL_arg1626z00_1179, BgL_cdrzd21381zd2_1180,
						BgL_xz00_1181));
			}
		}

	}



/* expand-generic */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2genericzd2zzexpand_definez00(obj_t
		BgL_xz00_27, obj_t BgL_ez00_28)
	{
		{	/* Expand/define.scm 223 */
			{

				if (PAIRP(BgL_xz00_27))
					{	/* Expand/define.scm 224 */
						obj_t BgL_cdrzd21426zd2_614;

						BgL_cdrzd21426zd2_614 = CDR(BgL_xz00_27);
						{	/* Expand/define.scm 224 */
							obj_t BgL_kwz00_615;

							BgL_kwz00_615 = CAR(BgL_xz00_27);
							if (PAIRP(BgL_cdrzd21426zd2_614))
								{	/* Expand/define.scm 224 */
									obj_t BgL_carzd21432zd2_617;
									obj_t BgL_cdrzd21433zd2_618;

									BgL_carzd21432zd2_617 = CAR(BgL_cdrzd21426zd2_614);
									BgL_cdrzd21433zd2_618 = CDR(BgL_cdrzd21426zd2_614);
									if (PAIRP(BgL_carzd21432zd2_617))
										{	/* Expand/define.scm 224 */
											obj_t BgL_carzd21437zd2_620;
											obj_t BgL_cdrzd21438zd2_621;

											BgL_carzd21437zd2_620 = CAR(BgL_carzd21432zd2_617);
											BgL_cdrzd21438zd2_621 = CDR(BgL_carzd21432zd2_617);
											if (SYMBOLP(BgL_carzd21437zd2_620))
												{	/* Expand/define.scm 229 */
													obj_t BgL_arg1684z00_1070;
													obj_t BgL_arg1685z00_1071;

													BgL_arg1684z00_1070 =
														BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
														(BgL_cdrzd21438zd2_621);
													BgL_arg1685z00_1071 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_xz00_27);
													{	/* Expand/define.scm 233 */
														obj_t BgL_zc3z04anonymousza31687ze3z87_1182;

														BgL_zc3z04anonymousza31687ze3z87_1182 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza31687ze3ze5zzexpand_definez00,
															(int) (((long) 0)), (int) (((long) 7)));
														PROCEDURE_SET(BgL_zc3z04anonymousza31687ze3z87_1182,
															(int) (((long) 0)), BgL_kwz00_615);
														PROCEDURE_SET(BgL_zc3z04anonymousza31687ze3z87_1182,
															(int) (((long) 1)), BgL_ez00_28);
														PROCEDURE_SET(BgL_zc3z04anonymousza31687ze3z87_1182,
															(int) (((long) 2)), BgL_carzd21437zd2_620);
														PROCEDURE_SET(BgL_zc3z04anonymousza31687ze3z87_1182,
															(int) (((long) 3)), BgL_carzd21437zd2_620);
														PROCEDURE_SET(BgL_zc3z04anonymousza31687ze3z87_1182,
															(int) (((long) 4)), BgL_cdrzd21438zd2_621);
														PROCEDURE_SET(BgL_zc3z04anonymousza31687ze3z87_1182,
															(int) (((long) 5)), BgL_cdrzd21433zd2_618);
														PROCEDURE_SET(BgL_zc3z04anonymousza31687ze3z87_1182,
															(int) (((long) 6)), BgL_xz00_27);
														return
															BGl_withzd2lexicalzd2zzexpand_epsz00
															(BgL_arg1684z00_1070, CNST_TABLE_REF(((long) 1)),
															BgL_arg1685z00_1071,
															BgL_zc3z04anonymousza31687ze3z87_1182);
												}}
											else
												{	/* Expand/define.scm 224 */
													if (PAIRP(BgL_carzd21437zd2_620))
														{	/* Expand/define.scm 224 */
															obj_t BgL_cdrzd21454zd2_625;

															BgL_cdrzd21454zd2_625 =
																CDR(BgL_carzd21437zd2_620);
															if (
																(CAR(BgL_carzd21437zd2_620) ==
																	CNST_TABLE_REF(((long) 4))))
																{	/* Expand/define.scm 224 */
																	if (PAIRP(BgL_cdrzd21454zd2_625))
																		{	/* Expand/define.scm 224 */
																			obj_t BgL_carzd21456zd2_629;
																			obj_t BgL_cdrzd21457zd2_630;

																			BgL_carzd21456zd2_629 =
																				CAR(BgL_cdrzd21454zd2_625);
																			BgL_cdrzd21457zd2_630 =
																				CDR(BgL_cdrzd21454zd2_625);
																			if (SYMBOLP(BgL_carzd21456zd2_629))
																				{	/* Expand/define.scm 224 */
																					if (PAIRP(BgL_cdrzd21457zd2_630))
																						{	/* Expand/define.scm 224 */
																							bool_t BgL_test2106z00_2194;

																							{	/* Expand/define.scm 224 */
																								obj_t BgL_tmpz00_2195;

																								BgL_tmpz00_2195 =
																									CAR(BgL_cdrzd21457zd2_630);
																								BgL_test2106z00_2194 =
																									SYMBOLP(BgL_tmpz00_2195);
																							}
																							if (BgL_test2106z00_2194)
																								{	/* Expand/define.scm 224 */
																									if (NULLP(CDR
																											(BgL_cdrzd21457zd2_630)))
																										{	/* Expand/define.scm 229 */
																											obj_t BgL_arg1684z00_1086;
																											obj_t BgL_arg1685z00_1087;

																											BgL_arg1684z00_1086 =
																												BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																												(BgL_cdrzd21438zd2_621);
																											BgL_arg1685z00_1087 =
																												BGl_findzd2locationzd2zztools_locationz00
																												(BgL_xz00_27);
																											{	/* Expand/define.scm 233 */
																												obj_t
																													BgL_zc3z04anonymousza31687ze3z87_1183;
																												BgL_zc3z04anonymousza31687ze3z87_1183
																													=
																													MAKE_FX_PROCEDURE
																													(BGl_z62zc3z04anonymousza31687ze31938ze5zzexpand_definez00,
																													(int) (((long) 0)),
																													(int) (((long) 7)));
																												PROCEDURE_SET
																													(BgL_zc3z04anonymousza31687ze3z87_1183,
																													(int) (((long) 0)),
																													BgL_kwz00_615);
																												PROCEDURE_SET
																													(BgL_zc3z04anonymousza31687ze3z87_1183,
																													(int) (((long) 1)),
																													BgL_ez00_28);
																												PROCEDURE_SET
																													(BgL_zc3z04anonymousza31687ze3z87_1183,
																													(int) (((long) 2)),
																													BgL_carzd21437zd2_620);
																												PROCEDURE_SET
																													(BgL_zc3z04anonymousza31687ze3z87_1183,
																													(int) (((long) 3)),
																													BgL_carzd21456zd2_629);
																												PROCEDURE_SET
																													(BgL_zc3z04anonymousza31687ze3z87_1183,
																													(int) (((long) 4)),
																													BgL_cdrzd21438zd2_621);
																												PROCEDURE_SET
																													(BgL_zc3z04anonymousza31687ze3z87_1183,
																													(int) (((long) 5)),
																													BgL_cdrzd21433zd2_618);
																												PROCEDURE_SET
																													(BgL_zc3z04anonymousza31687ze3z87_1183,
																													(int) (((long) 6)),
																													BgL_xz00_27);
																												return
																													BGl_withzd2lexicalzd2zzexpand_epsz00
																													(BgL_arg1684z00_1086,
																													CNST_TABLE_REF(((long)
																															1)),
																													BgL_arg1685z00_1087,
																													BgL_zc3z04anonymousza31687ze3z87_1183);
																										}}
																									else
																										{	/* Expand/define.scm 224 */
																										BgL_tagzd21413zd2_611:
																											return
																												BGl_errorz00zz__errorz00
																												(BFALSE,
																												BGl_string1944z00zzexpand_definez00,
																												BgL_xz00_27);
																										}
																								}
																							else
																								{	/* Expand/define.scm 224 */
																									goto BgL_tagzd21413zd2_611;
																								}
																						}
																					else
																						{	/* Expand/define.scm 224 */
																							goto BgL_tagzd21413zd2_611;
																						}
																				}
																			else
																				{	/* Expand/define.scm 224 */
																					goto BgL_tagzd21413zd2_611;
																				}
																		}
																	else
																		{	/* Expand/define.scm 224 */
																			goto BgL_tagzd21413zd2_611;
																		}
																}
															else
																{	/* Expand/define.scm 224 */
																	goto BgL_tagzd21413zd2_611;
																}
														}
													else
														{	/* Expand/define.scm 224 */
															goto BgL_tagzd21413zd2_611;
														}
												}
										}
									else
										{	/* Expand/define.scm 224 */
											goto BgL_tagzd21413zd2_611;
										}
								}
							else
								{	/* Expand/define.scm 224 */
									goto BgL_tagzd21413zd2_611;
								}
						}
					}
				else
					{	/* Expand/define.scm 224 */
						goto BgL_tagzd21413zd2_611;
					}
			}
		}

	}



/* &expand-generic */
	obj_t BGl_z62expandzd2genericzb0zzexpand_definez00(obj_t BgL_envz00_1184,
		obj_t BgL_xz00_1185, obj_t BgL_ez00_1186)
	{
		{	/* Expand/define.scm 223 */
			return
				BGl_expandzd2genericzd2zzexpand_definez00(BgL_xz00_1185, BgL_ez00_1186);
		}

	}



/* &<@anonymous:1687> */
	obj_t BGl_z62zc3z04anonymousza31687ze3ze5zzexpand_definez00(obj_t
		BgL_envz00_1187)
	{
		{	/* Expand/define.scm 232 */
			{	/* Expand/define.scm 233 */
				obj_t BgL_kwz00_1188;
				obj_t BgL_ez00_1189;
				obj_t BgL_idz00_1190;
				obj_t BgL_carzd21437zd2_1191;
				obj_t BgL_cdrzd21438zd2_1192;
				obj_t BgL_cdrzd21433zd2_1193;
				obj_t BgL_xz00_1194;

				BgL_kwz00_1188 = PROCEDURE_REF(BgL_envz00_1187, (int) (((long) 0)));
				BgL_ez00_1189 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1187, (int) (((long) 1))));
				BgL_idz00_1190 = PROCEDURE_REF(BgL_envz00_1187, (int) (((long) 2)));
				BgL_carzd21437zd2_1191 =
					PROCEDURE_REF(BgL_envz00_1187, (int) (((long) 3)));
				BgL_cdrzd21438zd2_1192 =
					PROCEDURE_REF(BgL_envz00_1187, (int) (((long) 4)));
				BgL_cdrzd21433zd2_1193 =
					PROCEDURE_REF(BgL_envz00_1187, (int) (((long) 5)));
				BgL_xz00_1194 = PROCEDURE_REF(BgL_envz00_1187, (int) (((long) 6)));
				return
					BGl_replacez12z12zztools_miscz00(BgL_xz00_1194,
					BGl_dozd2inlinezf2genericzf2methodzd2zzexpand_definez00
					(BgL_kwz00_1188, BgL_ez00_1189, BgL_idz00_1190,
						BgL_carzd21437zd2_1191, BgL_cdrzd21438zd2_1192,
						BgL_cdrzd21433zd2_1193, BgL_xz00_1194));
			}
		}

	}



/* &<@anonymous:1687>1938 */
	obj_t BGl_z62zc3z04anonymousza31687ze31938ze5zzexpand_definez00(obj_t
		BgL_envz00_1195)
	{
		{	/* Expand/define.scm 232 */
			{	/* Expand/define.scm 233 */
				obj_t BgL_kwz00_1196;
				obj_t BgL_ez00_1197;
				obj_t BgL_idz00_1198;
				obj_t BgL_carzd21456zd2_1199;
				obj_t BgL_cdrzd21438zd2_1200;
				obj_t BgL_cdrzd21433zd2_1201;
				obj_t BgL_xz00_1202;

				BgL_kwz00_1196 = PROCEDURE_REF(BgL_envz00_1195, (int) (((long) 0)));
				BgL_ez00_1197 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1195, (int) (((long) 1))));
				BgL_idz00_1198 = PROCEDURE_REF(BgL_envz00_1195, (int) (((long) 2)));
				BgL_carzd21456zd2_1199 =
					PROCEDURE_REF(BgL_envz00_1195, (int) (((long) 3)));
				BgL_cdrzd21438zd2_1200 =
					PROCEDURE_REF(BgL_envz00_1195, (int) (((long) 4)));
				BgL_cdrzd21433zd2_1201 =
					PROCEDURE_REF(BgL_envz00_1195, (int) (((long) 5)));
				BgL_xz00_1202 = PROCEDURE_REF(BgL_envz00_1195, (int) (((long) 6)));
				return
					BGl_replacez12z12zztools_miscz00(BgL_xz00_1202,
					BGl_dozd2inlinezf2genericzf2methodzd2zzexpand_definez00
					(BgL_kwz00_1196, BgL_ez00_1197, BgL_idz00_1198,
						BgL_carzd21456zd2_1199, BgL_cdrzd21438zd2_1200,
						BgL_cdrzd21433zd2_1201, BgL_xz00_1202));
			}
		}

	}



/* do-external-define-lambda */
	obj_t BGl_dozd2externalzd2definezd2lambdazd2zzexpand_definez00(obj_t
		BgL_ez00_29, obj_t BgL_namez00_30, obj_t BgL_argsz00_31,
		obj_t BgL_bodyz00_32, obj_t BgL_srcz00_33)
	{
		{	/* Expand/define.scm 240 */
			BGl_enterzd2functionzd2zztools_errorz00(BgL_namez00_30);
			{	/* Expand/define.scm 242 */
				obj_t BgL_ozd2expzd2_647;

				BgL_ozd2expzd2_647 =
					BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(BgL_namez00_30);
				{	/* Expand/define.scm 243 */
					obj_t BgL_gzd2expzd2_648;

					BgL_gzd2expzd2_648 =
						BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(BgL_namez00_30);
					{	/* Expand/define.scm 244 */
						obj_t BgL_ez00_649;

						BgL_ez00_649 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_29);
						{	/* Expand/define.scm 245 */

							{	/* Expand/define.scm 248 */
								bool_t BgL_test2108z00_2262;

								{	/* Expand/define.scm 248 */
									bool_t BgL_test2109z00_2263;

									if (STRUCTP(BgL_ozd2expzd2_647))
										{	/* Expand/define.scm 248 */
											BgL_test2109z00_2263 =
												(STRUCT_KEY(BgL_ozd2expzd2_647) ==
												CNST_TABLE_REF(((long) 6)));
										}
									else
										{	/* Expand/define.scm 248 */
											BgL_test2109z00_2263 = ((bool_t) 0);
										}
									if (BgL_test2109z00_2263)
										{	/* Expand/define.scm 248 */
											if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
												{	/* Expand/define.scm 248 */
													BgL_test2108z00_2262 = ((bool_t) 0);
												}
											else
												{	/* Expand/define.scm 248 */
													BgL_test2108z00_2262 = ((bool_t) 1);
												}
										}
									else
										{	/* Expand/define.scm 248 */
											BgL_test2108z00_2262 = ((bool_t) 0);
										}
								}
								if (BgL_test2108z00_2262)
									{	/* Expand/define.scm 248 */
										BGl_userzd2warningzf2locationz20zztools_errorz00
											(BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_33),
											BGl_string1945z00zzexpand_definez00,
											BGl_string1946z00zzexpand_definez00, BgL_namez00_30);
										BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00
											(BgL_namez00_30);
									}
								else
									{	/* Expand/define.scm 248 */
										BFALSE;
									}
							}
							{	/* Expand/define.scm 255 */
								bool_t BgL_test2112z00_2274;

								{	/* Expand/define.scm 255 */
									bool_t BgL_test2113z00_2275;

									if (STRUCTP(BgL_gzd2expzd2_648))
										{	/* Expand/define.scm 255 */
											BgL_test2113z00_2275 =
												(STRUCT_KEY(BgL_gzd2expzd2_648) ==
												CNST_TABLE_REF(((long) 6)));
										}
									else
										{	/* Expand/define.scm 255 */
											BgL_test2113z00_2275 = ((bool_t) 0);
										}
									if (BgL_test2113z00_2275)
										{	/* Expand/define.scm 255 */
											if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
												{	/* Expand/define.scm 255 */
													BgL_test2112z00_2274 = ((bool_t) 0);
												}
											else
												{	/* Expand/define.scm 255 */
													BgL_test2112z00_2274 = ((bool_t) 1);
												}
										}
									else
										{	/* Expand/define.scm 255 */
											BgL_test2112z00_2274 = ((bool_t) 0);
										}
								}
								if (BgL_test2112z00_2274)
									{	/* Expand/define.scm 255 */
										{	/* Expand/define.scm 257 */
											obj_t BgL_arg1695z00_656;

											BgL_arg1695z00_656 =
												BGl_findzd2locationzd2zztools_locationz00
												(BgL_srcz00_33);
											{	/* Expand/define.scm 257 */
												obj_t BgL_list1696z00_657;

												{	/* Expand/define.scm 257 */
													obj_t BgL_arg1697z00_658;

													BgL_arg1697z00_658 =
														MAKE_YOUNG_PAIR(BgL_namez00_30, BNIL);
													BgL_list1696z00_657 =
														MAKE_YOUNG_PAIR(BGl_string1947z00zzexpand_definez00,
														BgL_arg1697z00_658);
												}
												BGl_warningzf2locationzf2zz__errorz00
													(BgL_arg1695z00_656,
													BGl_string1945z00zzexpand_definez00,
													BgL_list1696z00_657);
											}
										}
										BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00
											(BgL_namez00_30);
									}
								else
									{	/* Expand/define.scm 255 */
										BFALSE;
									}
							}
							{	/* Expand/define.scm 262 */
								obj_t BgL_locz00_660;

								{	/* Expand/define.scm 262 */
									obj_t BgL_arg1726z00_672;
									obj_t BgL_arg1727z00_673;

									{	/* Expand/define.scm 262 */
										obj_t BgL_pairz00_1103;

										BgL_pairz00_1103 = CDR(((obj_t) BgL_srcz00_33));
										BgL_arg1726z00_672 = CDR(BgL_pairz00_1103);
									}
									BgL_arg1727z00_673 =
										BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_33);
									BgL_locz00_660 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_arg1726z00_672, BgL_arg1727z00_673);
								}
								{	/* Expand/define.scm 262 */
									obj_t BgL_ebodyz00_661;

									{	/* Expand/define.scm 264 */
										obj_t BgL_arg1711z00_666;
										obj_t BgL_arg1712z00_667;

										BgL_arg1711z00_666 =
											BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
											(BgL_argsz00_31);
										BgL_arg1712z00_667 =
											BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_33);
										{	/* Expand/define.scm 267 */
											obj_t BgL_zc3z04anonymousza31720ze3z87_1203;

											BgL_zc3z04anonymousza31720ze3z87_1203 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31720ze3ze5zzexpand_definez00,
												(int) (((long) 0)), (int) (((long) 3)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31720ze3z87_1203,
												(int) (((long) 0)), BgL_bodyz00_32);
											PROCEDURE_SET(BgL_zc3z04anonymousza31720ze3z87_1203,
												(int) (((long) 1)), BgL_locz00_660);
											PROCEDURE_SET(BgL_zc3z04anonymousza31720ze3z87_1203,
												(int) (((long) 2)), BgL_ez00_649);
											BgL_ebodyz00_661 =
												BGl_withzd2lexicalzd2zzexpand_epsz00(BgL_arg1711z00_666,
												CNST_TABLE_REF(((long) 1)), BgL_arg1712z00_667,
												BgL_zc3z04anonymousza31720ze3z87_1203);
									}}
									{	/* Expand/define.scm 263 */

										BGl_leavezd2functionzd2zztools_errorz00();
										{	/* Expand/define.scm 269 */
											obj_t BgL_arg1698z00_662;

											{	/* Expand/define.scm 269 */
												obj_t BgL_arg1704z00_663;
												obj_t BgL_arg1707z00_664;

												BgL_arg1704z00_663 =
													MAKE_YOUNG_PAIR(BgL_namez00_30,
													BGl_expandzd2argszd2zzexpand_lambdaz00(BgL_argsz00_31,
														BgL_ez00_649));
												BgL_arg1707z00_664 =
													MAKE_YOUNG_PAIR(BgL_ebodyz00_661, BNIL);
												BgL_arg1698z00_662 =
													MAKE_YOUNG_PAIR(BgL_arg1704z00_663,
													BgL_arg1707z00_664);
											}
											return
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
												BgL_arg1698z00_662);
		}}}}}}}}}

	}



/* &<@anonymous:1720> */
	obj_t BGl_z62zc3z04anonymousza31720ze3ze5zzexpand_definez00(obj_t
		BgL_envz00_1204)
	{
		{	/* Expand/define.scm 267 */
			{	/* Expand/define.scm 267 */
				obj_t BgL_bodyz00_1205;
				obj_t BgL_locz00_1206;
				obj_t BgL_ez00_1207;

				BgL_bodyz00_1205 = PROCEDURE_REF(BgL_envz00_1204, (int) (((long) 0)));
				BgL_locz00_1206 = PROCEDURE_REF(BgL_envz00_1204, (int) (((long) 1)));
				BgL_ez00_1207 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1204, (int) (((long) 2))));
				{	/* Expand/define.scm 267 */
					obj_t BgL_arg1725z00_1255;

					BgL_arg1725z00_1255 =
						BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(BgL_bodyz00_1205,
						BgL_locz00_1206);
					return PROCEDURE_ENTRY(BgL_ez00_1207) (BgL_ez00_1207,
						BgL_arg1725z00_1255, BgL_ez00_1207, BEOA);
				}
			}
		}

	}



/* do-external-define-value */
	obj_t BGl_dozd2externalzd2definezd2valuezd2zzexpand_definez00(obj_t
		BgL_ez00_34, obj_t BgL_namez00_35, obj_t BgL_valuez00_36,
		obj_t BgL_srcz00_37)
	{
		{	/* Expand/define.scm 274 */
			{	/* Expand/define.scm 275 */
				obj_t BgL_ozd2expzd2_675;

				BgL_ozd2expzd2_675 =
					BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(BgL_namez00_35);
				{	/* Expand/define.scm 276 */
					obj_t BgL_gzd2expzd2_676;

					BgL_gzd2expzd2_676 =
						BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(BgL_namez00_35);
					{	/* Expand/define.scm 277 */
						obj_t BgL_ez00_677;

						BgL_ez00_677 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_34);
						{	/* Expand/define.scm 278 */

							{	/* Expand/define.scm 281 */
								bool_t BgL_test2116z00_2329;

								{	/* Expand/define.scm 281 */
									bool_t BgL_test2117z00_2330;

									if (STRUCTP(BgL_ozd2expzd2_675))
										{	/* Expand/define.scm 281 */
											BgL_test2117z00_2330 =
												(STRUCT_KEY(BgL_ozd2expzd2_675) ==
												CNST_TABLE_REF(((long) 6)));
										}
									else
										{	/* Expand/define.scm 281 */
											BgL_test2117z00_2330 = ((bool_t) 0);
										}
									if (BgL_test2117z00_2330)
										{	/* Expand/define.scm 281 */
											if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
												{	/* Expand/define.scm 281 */
													BgL_test2116z00_2329 = ((bool_t) 0);
												}
											else
												{	/* Expand/define.scm 281 */
													BgL_test2116z00_2329 = ((bool_t) 1);
												}
										}
									else
										{	/* Expand/define.scm 281 */
											BgL_test2116z00_2329 = ((bool_t) 0);
										}
								}
								if (BgL_test2116z00_2329)
									{	/* Expand/define.scm 281 */
										BGl_userzd2warningzf2locationz20zztools_errorz00
											(BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_37),
											BGl_string1940z00zzexpand_definez00,
											BGl_string1946z00zzexpand_definez00, BgL_namez00_35);
										BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00
											(BgL_namez00_35);
									}
								else
									{	/* Expand/define.scm 281 */
										BFALSE;
									}
							}
							{	/* Expand/define.scm 288 */
								bool_t BgL_test2120z00_2341;

								{	/* Expand/define.scm 288 */
									bool_t BgL_test2121z00_2342;

									if (STRUCTP(BgL_gzd2expzd2_676))
										{	/* Expand/define.scm 288 */
											BgL_test2121z00_2342 =
												(STRUCT_KEY(BgL_gzd2expzd2_676) ==
												CNST_TABLE_REF(((long) 6)));
										}
									else
										{	/* Expand/define.scm 288 */
											BgL_test2121z00_2342 = ((bool_t) 0);
										}
									if (BgL_test2121z00_2342)
										{	/* Expand/define.scm 288 */
											if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
												{	/* Expand/define.scm 288 */
													BgL_test2120z00_2341 = ((bool_t) 0);
												}
											else
												{	/* Expand/define.scm 288 */
													BgL_test2120z00_2341 = ((bool_t) 1);
												}
										}
									else
										{	/* Expand/define.scm 288 */
											BgL_test2120z00_2341 = ((bool_t) 0);
										}
								}
								if (BgL_test2120z00_2341)
									{	/* Expand/define.scm 288 */
										BGl_userzd2warningzf2locationz20zztools_errorz00
											(BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_37),
											BGl_string1940z00zzexpand_definez00,
											BGl_string1947z00zzexpand_definez00, BgL_namez00_35);
										BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00
											(BgL_namez00_35);
									}
								else
									{	/* Expand/define.scm 288 */
										BFALSE;
									}
							}
							{	/* Expand/define.scm 295 */
								obj_t BgL_locz00_686;

								{	/* Expand/define.scm 295 */
									obj_t BgL_arg1742z00_691;
									obj_t BgL_arg1743z00_692;

									{	/* Expand/define.scm 295 */
										obj_t BgL_pairz00_1117;

										BgL_pairz00_1117 = CDR(((obj_t) BgL_srcz00_37));
										BgL_arg1742z00_691 = CDR(BgL_pairz00_1117);
									}
									BgL_arg1743z00_692 =
										BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_37);
									BgL_locz00_686 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_arg1742z00_691, BgL_arg1743z00_692);
								}
								{	/* Expand/define.scm 295 */
									obj_t BgL_evaluez00_687;

									{	/* Expand/define.scm 296 */
										obj_t BgL_arg1741z00_690;

										BgL_arg1741z00_690 =
											BGl_normaliza7ezd2prognzf2locz87zztools_prognz00
											(BgL_valuez00_36, BgL_locz00_686);
										BgL_evaluez00_687 =
											PROCEDURE_ENTRY(BgL_ez00_677) (BgL_ez00_677,
											BgL_arg1741z00_690, BgL_ez00_677, BEOA);
									}
									{	/* Expand/define.scm 296 */

										{	/* Expand/define.scm 297 */
											obj_t BgL_arg1739z00_688;

											{	/* Expand/define.scm 297 */
												obj_t BgL_arg1740z00_689;

												BgL_arg1740z00_689 =
													MAKE_YOUNG_PAIR(BgL_evaluez00_687, BNIL);
												BgL_arg1739z00_688 =
													MAKE_YOUNG_PAIR(BgL_namez00_35, BgL_arg1740z00_689);
											}
											return
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
												BgL_arg1739z00_688);
		}}}}}}}}}

	}



/* do-inline/generic/method */
	obj_t BGl_dozd2inlinezf2genericzf2methodzd2zzexpand_definez00(obj_t
		BgL_definezd2keywordzd2_38, obj_t BgL_ez00_39, obj_t BgL_idz00_40,
		obj_t BgL_namez00_41, obj_t BgL_argsz00_42, obj_t BgL_bodyz00_43,
		obj_t BgL_srcz00_44)
	{
		{	/* Expand/define.scm 302 */
			BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
			BGl_enterzd2functionzd2zztools_errorz00(BgL_namez00_41);
			{	/* Expand/define.scm 305 */
				obj_t BgL_ozd2expzd2_693;

				BgL_ozd2expzd2_693 =
					BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(BgL_namez00_41);
				{	/* Expand/define.scm 305 */
					obj_t BgL_gzd2expzd2_694;

					BgL_gzd2expzd2_694 =
						BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(BgL_namez00_41);
					{	/* Expand/define.scm 306 */
						obj_t BgL_ez00_695;

						BgL_ez00_695 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_39);
						{	/* Expand/define.scm 307 */
							obj_t BgL_locz00_696;

							{	/* Expand/define.scm 308 */
								obj_t BgL_arg1784z00_721;
								obj_t BgL_arg1790z00_722;

								{	/* Expand/define.scm 308 */
									obj_t BgL_pairz00_1121;

									BgL_pairz00_1121 = CDR(((obj_t) BgL_srcz00_44));
									BgL_arg1784z00_721 = CDR(BgL_pairz00_1121);
								}
								BgL_arg1790z00_722 =
									BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_44);
								BgL_locz00_696 =
									BGl_findzd2locationzf2locz20zztools_locationz00
									(BgL_arg1784z00_721, BgL_arg1790z00_722);
							}
							{	/* Expand/define.scm 308 */
								obj_t BgL_ebodyz00_697;

								if (PAIRP(BgL_bodyz00_43))
									{	/* Expand/define.scm 311 */
										obj_t BgL_arg1775z00_715;
										obj_t BgL_arg1778z00_716;

										BgL_arg1775z00_715 =
											BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
											(BgL_argsz00_42);
										BgL_arg1778z00_716 =
											BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_44);
										{	/* Expand/define.scm 315 */
											obj_t BgL_zc3z04anonymousza31780ze3z87_1208;

											BgL_zc3z04anonymousza31780ze3z87_1208 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31780ze3ze5zzexpand_definez00,
												(int) (((long) 0)), (int) (((long) 3)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31780ze3z87_1208,
												(int) (((long) 0)), BgL_bodyz00_43);
											PROCEDURE_SET(BgL_zc3z04anonymousza31780ze3z87_1208,
												(int) (((long) 1)), BgL_locz00_696);
											PROCEDURE_SET(BgL_zc3z04anonymousza31780ze3z87_1208,
												(int) (((long) 2)), BgL_ez00_695);
											BgL_ebodyz00_697 =
												BGl_withzd2lexicalzd2zzexpand_epsz00(BgL_arg1775z00_715,
												CNST_TABLE_REF(((long) 1)), BgL_arg1778z00_716,
												BgL_zc3z04anonymousza31780ze3z87_1208);
									}}
								else
									{	/* Expand/define.scm 309 */
										BgL_ebodyz00_697 = BNIL;
									}
								{	/* Expand/define.scm 309 */

									BGl_leavezd2functionzd2zztools_errorz00();
									{	/* Expand/define.scm 320 */
										bool_t BgL_test2125z00_2393;

										{	/* Expand/define.scm 320 */
											bool_t BgL_test2126z00_2394;

											if (STRUCTP(BgL_ozd2expzd2_693))
												{	/* Expand/define.scm 320 */
													BgL_test2126z00_2394 =
														(STRUCT_KEY(BgL_ozd2expzd2_693) ==
														CNST_TABLE_REF(((long) 6)));
												}
											else
												{	/* Expand/define.scm 320 */
													BgL_test2126z00_2394 = ((bool_t) 0);
												}
											if (BgL_test2126z00_2394)
												{	/* Expand/define.scm 320 */
													if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
														{	/* Expand/define.scm 320 */
															BgL_test2125z00_2393 = ((bool_t) 0);
														}
													else
														{	/* Expand/define.scm 320 */
															BgL_test2125z00_2393 = ((bool_t) 1);
														}
												}
											else
												{	/* Expand/define.scm 320 */
													BgL_test2125z00_2393 = ((bool_t) 0);
												}
										}
										if (BgL_test2125z00_2393)
											{	/* Expand/define.scm 320 */
												BGl_userzd2warningzf2locationz20zztools_errorz00
													(BGl_findzd2locationzd2zztools_locationz00
													(BgL_srcz00_44), BGl_string1940z00zzexpand_definez00,
													BGl_string1946z00zzexpand_definez00, BgL_namez00_41);
												BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00
													(BgL_namez00_41);
											}
										else
											{	/* Expand/define.scm 320 */
												BFALSE;
											}
									}
									{	/* Expand/define.scm 327 */
										bool_t BgL_test2129z00_2405;

										{	/* Expand/define.scm 327 */
											bool_t BgL_test2130z00_2406;

											if (STRUCTP(BgL_gzd2expzd2_694))
												{	/* Expand/define.scm 327 */
													BgL_test2130z00_2406 =
														(STRUCT_KEY(BgL_gzd2expzd2_694) ==
														CNST_TABLE_REF(((long) 6)));
												}
											else
												{	/* Expand/define.scm 327 */
													BgL_test2130z00_2406 = ((bool_t) 0);
												}
											if (BgL_test2130z00_2406)
												{	/* Expand/define.scm 327 */
													if (CBOOL(BGl_za2libzd2modeza2zd2zzengine_paramz00))
														{	/* Expand/define.scm 327 */
															BgL_test2129z00_2405 = ((bool_t) 0);
														}
													else
														{	/* Expand/define.scm 327 */
															BgL_test2129z00_2405 = ((bool_t) 1);
														}
												}
											else
												{	/* Expand/define.scm 327 */
													BgL_test2129z00_2405 = ((bool_t) 0);
												}
										}
										if (BgL_test2129z00_2405)
											{	/* Expand/define.scm 327 */
												BGl_userzd2warningzf2locationz20zztools_errorz00
													(BGl_findzd2locationzd2zztools_locationz00
													(BgL_srcz00_44), BGl_string1940z00zzexpand_definez00,
													BGl_string1947z00zzexpand_definez00, BgL_namez00_41);
												BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00
													(BgL_namez00_41);
											}
										else
											{	/* Expand/define.scm 327 */
												BFALSE;
											}
									}
									BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BFALSE;
									if (NULLP(BgL_ebodyz00_697))
										{	/* Expand/define.scm 336 */
											obj_t BgL_arg1756z00_707;

											{	/* Expand/define.scm 336 */
												obj_t BgL_arg1757z00_708;

												BgL_arg1757z00_708 =
													MAKE_YOUNG_PAIR(BgL_idz00_40,
													BGl_expandzd2argszd2zzexpand_lambdaz00(BgL_argsz00_42,
														BgL_ez00_695));
												BgL_arg1756z00_707 =
													MAKE_YOUNG_PAIR(BgL_arg1757z00_708, BNIL);
											}
											return
												MAKE_YOUNG_PAIR(BgL_definezd2keywordzd2_38,
												BgL_arg1756z00_707);
										}
									else
										{	/* Expand/define.scm 337 */
											obj_t BgL_arg1760z00_710;

											{	/* Expand/define.scm 337 */
												obj_t BgL_arg1761z00_711;
												obj_t BgL_arg1768z00_712;

												BgL_arg1761z00_711 =
													MAKE_YOUNG_PAIR(BgL_idz00_40,
													BGl_expandzd2argszd2zzexpand_lambdaz00(BgL_argsz00_42,
														BgL_ez00_695));
												BgL_arg1768z00_712 =
													MAKE_YOUNG_PAIR(BgL_ebodyz00_697, BNIL);
												BgL_arg1760z00_710 =
													MAKE_YOUNG_PAIR(BgL_arg1761z00_711,
													BgL_arg1768z00_712);
											}
											return
												MAKE_YOUNG_PAIR(BgL_definezd2keywordzd2_38,
												BgL_arg1760z00_710);
										}
								}
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1780> */
	obj_t BGl_z62zc3z04anonymousza31780ze3ze5zzexpand_definez00(obj_t
		BgL_envz00_1209)
	{
		{	/* Expand/define.scm 314 */
			{	/* Expand/define.scm 315 */
				obj_t BgL_bodyz00_1210;
				obj_t BgL_locz00_1211;
				obj_t BgL_ez00_1212;

				BgL_bodyz00_1210 = PROCEDURE_REF(BgL_envz00_1209, (int) (((long) 0)));
				BgL_locz00_1211 = PROCEDURE_REF(BgL_envz00_1209, (int) (((long) 1)));
				BgL_ez00_1212 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1209, (int) (((long) 2))));
				{	/* Expand/define.scm 315 */
					obj_t BgL_arg1782z00_1256;

					BgL_arg1782z00_1256 =
						BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(BgL_bodyz00_1210,
						BgL_locz00_1211);
					return PROCEDURE_ENTRY(BgL_ez00_1212) (BgL_ez00_1212,
						BgL_arg1782z00_1256, BgL_ez00_1212, BEOA);
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_definez00()
	{
		{	/* Expand/define.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_definez00()
	{
		{	/* Expand/define.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_definez00()
	{
		{	/* Expand/define.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_definez00()
	{
		{	/* Expand/define.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zzexpand_expanderz00(((long) 393359),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(((long) 223654870),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1948z00zzexpand_definez00));
		}

	}

#ifdef __cplusplus
}
#endif
