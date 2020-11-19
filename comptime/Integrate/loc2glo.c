/*===========================================================================*/
/*   (Integrate/loc2glo.scm)                                                 */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/loc2glo.scm) */
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

	typedef struct BgL_funz00_bgl
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
	}             *BgL_funz00_bglt;

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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_svarzf2iinfozf2_bgl
	{
		obj_t BgL_fzd2markzd2;
		obj_t BgL_uzd2markzd2;
		bool_t BgL_kapturedzf3zf3;
		bool_t BgL_celledzf3zf3;
		obj_t BgL_xhdlz00;
	}                      *BgL_svarzf2iinfozf2_bglt;

	typedef struct BgL_sfunzf2iinfozf2_bgl
	{
		obj_t BgL_ownerz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
		obj_t BgL_cfromz00;
		obj_t BgL_ctoz00;
		obj_t BgL_kz00;
		obj_t BgL_kza2za2;
		obj_t BgL_uz00;
		obj_t BgL_cnz00;
		obj_t BgL_ctz00;
		obj_t BgL_kontz00;
		bool_t BgL_gzf3zf3;
		bool_t BgL_forcegzf3zf3;
		obj_t BgL_lz00;
		obj_t BgL_ledz00;
		obj_t BgL_istampz00;
		obj_t BgL_globalz00;
		obj_t BgL_kapturedz00;
		obj_t BgL_tailzd2coercionzd2;
		bool_t BgL_xhdlzf3zf3;
	}                      *BgL_sfunzf2iinfozf2_bglt;


	extern obj_t BGl_zb2zd2arityz60zztools_argsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_z62thezd2globalzb0zzintegrate_localzd2ze3globalz31(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzintegrate_localzd2ze3globalz31();
	static obj_t
		BGl_localzd2idzd2ze3globalzd2idz31zzintegrate_localzd2ze3globalz31
		(BgL_localz00_bglt);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzintegrate_localzd2ze3globalz31(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_localzd2ze3globalz31();
	extern obj_t
		BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern bool_t
		BGl_integratezd2celledzf3z21zzintegrate_nodez00(BgL_localz00_bglt);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_localzd2ze3globalz31();
	BGL_EXPORTED_DECL obj_t
		BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_localzd2ze3globalz31
		= BUNSPEC;
	static obj_t BGl_symbolzd2quotezd2zzintegrate_localzd2ze3globalz31 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzintegrate_localzd2ze3globalz31();
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzintegrate_localzd2ze3globalz31();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern BgL_localz00_bglt BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt,
		BgL_valuez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_svarzf2Iinfozf2zzintegrate_infoz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_nodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t
		BGl_z62localzd2ze3globalz53zzintegrate_localzd2ze3globalz31(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_cnstzd2initzd2zzintegrate_localzd2ze3globalz31();
	static obj_t
		BGl_libraryzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31();
	static obj_t
		BGl_importedzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31();
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzd2ze3globalzd2envze3zzintegrate_localzd2ze3globalz31,
		BgL_bgl_za762localza7d2za7e3gl1601za7,
		BGl_z62localzd2ze3globalz53zzintegrate_localzd2ze3globalz31, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_thezd2globalzd2envz00zzintegrate_localzd2ze3globalz31,
		BgL_bgl_za762theza7d2globalza71602za7,
		BGl_z62thezd2globalzb0zzintegrate_localzd2ze3globalz31, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1593z00zzintegrate_localzd2ze3globalz31,
		BgL_bgl_string1593za700za7za7i1603za7, "'", 1);
	      DEFINE_STRING(BGl_string1594z00zzintegrate_localzd2ze3globalz31,
		BgL_bgl_string1594za700za7za7i1604za7, "~", 1);
	      DEFINE_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31,
		BgL_bgl_string1595za700za7za7i1605za7, "integrate_local->global", 23);
	      DEFINE_STRING(BGl_string1596z00zzintegrate_localzd2ze3globalz31,
		BgL_bgl_string1596za700za7za7i1606za7, "now a-integrated-body sfun ", 27);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*)
			(&BGl_requirezd2initializa7ationz75zzintegrate_localzd2ze3globalz31));
		     ADD_ROOT((void
				*) (&BGl_symbolzd2quotezd2zzintegrate_localzd2ze3globalz31));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzintegrate_localzd2ze3globalz31(long
		BgL_checksumz00_1939, char *BgL_fromz00_1940)
	{
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zzintegrate_localzd2ze3globalz31))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_localzd2ze3globalz31 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_localzd2ze3globalz31();
					BGl_libraryzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31();
					BGl_cnstzd2initzd2zzintegrate_localzd2ze3globalz31();
					BGl_importedzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31();
					return BGl_toplevelzd2initzd2zzintegrate_localzd2ze3globalz31();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31()
	{
		{	/* Integrate/loc2glo.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"integrate_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"integrate_local->global");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"integrate_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"integrate_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_local->global");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"integrate_local->global");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzintegrate_localzd2ze3globalz31()
	{
		{	/* Integrate/loc2glo.scm 15 */
			{	/* Integrate/loc2glo.scm 15 */
				obj_t BgL_cportz00_1926;

				{	/* Integrate/loc2glo.scm 15 */
					obj_t BgL_stringz00_1934;

					BgL_stringz00_1934 =
						BGl_string1596z00zzintegrate_localzd2ze3globalz31;
					{	/* Integrate/loc2glo.scm 15 */
						obj_t BgL_startz00_1935;

						BgL_startz00_1935 = BINT(((long) 0));
						{	/* Integrate/loc2glo.scm 15 */
							obj_t BgL_endz00_1936;

							BgL_endz00_1936 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1934)));
							{	/* Integrate/loc2glo.scm 15 */

								BgL_cportz00_1926 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1934, BgL_startz00_1935, BgL_endz00_1936);
				}}}}
				{
					long BgL_iz00_1927;

					BgL_iz00_1927 = ((long) 2);
				BgL_loopz00_1928:
					if ((BgL_iz00_1927 == ((long) -1)))
						{	/* Integrate/loc2glo.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Integrate/loc2glo.scm 15 */
							{	/* Integrate/loc2glo.scm 15 */
								obj_t BgL_arg1599z00_1930;

								{	/* Integrate/loc2glo.scm 15 */

									{	/* Integrate/loc2glo.scm 15 */
										obj_t BgL_locationz00_1932;

										BgL_locationz00_1932 = BBOOL(((bool_t) 0));
										{	/* Integrate/loc2glo.scm 15 */

											BgL_arg1599z00_1930 =
												BGl_readz00zz__readerz00(BgL_cportz00_1926,
												BgL_locationz00_1932);
										}
									}
								}
								{	/* Integrate/loc2glo.scm 15 */
									int BgL_tmpz00_1965;

									BgL_tmpz00_1965 = (int) (BgL_iz00_1927);
									CNST_TABLE_SET(BgL_tmpz00_1965, BgL_arg1599z00_1930);
							}}
							{	/* Integrate/loc2glo.scm 15 */
								int BgL_auxz00_1933;

								BgL_auxz00_1933 = (int) ((BgL_iz00_1927 - ((long) 1)));
								{
									long BgL_iz00_1970;

									BgL_iz00_1970 = (long) (BgL_auxz00_1933);
									BgL_iz00_1927 = BgL_iz00_1970;
									goto BgL_loopz00_1928;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_localzd2ze3globalz31()
	{
		{	/* Integrate/loc2glo.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzintegrate_localzd2ze3globalz31()
	{
		{	/* Integrate/loc2glo.scm 15 */
			return (BGl_symbolzd2quotezd2zzintegrate_localzd2ze3globalz31 =
				bstring_to_symbol(BGl_string1593z00zzintegrate_localzd2ze3globalz31),
				BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzintegrate_localzd2ze3globalz31(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1519;

				BgL_headz00_1519 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1520;
					obj_t BgL_tailz00_1521;

					BgL_prevz00_1520 = BgL_headz00_1519;
					BgL_tailz00_1521 = BgL_l1z00_1;
				BgL_loopz00_1522:
					if (PAIRP(BgL_tailz00_1521))
						{
							obj_t BgL_newzd2prevzd2_1524;

							BgL_newzd2prevzd2_1524 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1521), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1520, BgL_newzd2prevzd2_1524);
							{
								obj_t BgL_tailz00_1981;
								obj_t BgL_prevz00_1980;

								BgL_prevz00_1980 = BgL_newzd2prevzd2_1524;
								BgL_tailz00_1981 = CDR(BgL_tailz00_1521);
								BgL_tailz00_1521 = BgL_tailz00_1981;
								BgL_prevz00_1520 = BgL_prevz00_1980;
								goto BgL_loopz00_1522;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1519);
				}
			}
		}

	}



/* local->global */
	BGL_EXPORTED_DEF obj_t
		BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt
		BgL_localz00_3)
	{
		{	/* Integrate/loc2glo.scm 35 */
			{	/* Integrate/loc2glo.scm 38 */
				obj_t BgL_globalz00_1527;

				BgL_globalz00_1527 =
					BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(BgL_localz00_3);
				{	/* Integrate/loc2glo.scm 38 */
					obj_t BgL_kapturedz00_1528;

					{	/* Integrate/loc2glo.scm 39 */
						BgL_sfunz00_bglt BgL_oz00_1828;

						BgL_oz00_1828 =
							((BgL_sfunz00_bglt)
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_localz00_3)))->BgL_valuez00));
						{
							BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1988;

							{
								obj_t BgL_auxz00_1989;

								{	/* Integrate/loc2glo.scm 39 */
									BgL_objectz00_bglt BgL_tmpz00_1990;

									BgL_tmpz00_1990 = ((BgL_objectz00_bglt) BgL_oz00_1828);
									BgL_auxz00_1989 = BGL_OBJECT_WIDENING(BgL_tmpz00_1990);
								}
								BgL_auxz00_1988 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1989);
							}
							BgL_kapturedz00_1528 =
								(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_1988))->
								BgL_kapturedz00);
						}
					}
					{	/* Integrate/loc2glo.scm 39 */
						obj_t BgL_addzd2argszd2_1529;

						if (NULLP(BgL_kapturedz00_1528))
							{	/* Integrate/loc2glo.scm 40 */
								BgL_addzd2argszd2_1529 = BNIL;
							}
						else
							{	/* Integrate/loc2glo.scm 40 */
								obj_t BgL_head1260z00_1588;

								{	/* Integrate/loc2glo.scm 40 */
									obj_t BgL_res1577z00_1831;

									BgL_res1577z00_1831 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1260z00_1588 = BgL_res1577z00_1831;
								}
								{
									obj_t BgL_l1258z00_1590;
									obj_t BgL_tail1261z00_1591;

									BgL_l1258z00_1590 = BgL_kapturedz00_1528;
									BgL_tail1261z00_1591 = BgL_head1260z00_1588;
								BgL_zc3z04anonymousza31306ze3z87_1592:
									if (NULLP(BgL_l1258z00_1590))
										{	/* Integrate/loc2glo.scm 40 */
											BgL_addzd2argszd2_1529 = CDR(BgL_head1260z00_1588);
										}
									else
										{	/* Integrate/loc2glo.scm 40 */
											obj_t BgL_newtail1262z00_1594;

											{	/* Integrate/loc2glo.scm 40 */
												BgL_localz00_bglt BgL_arg1309z00_1596;

												{	/* Integrate/loc2glo.scm 40 */
													obj_t BgL_oldz00_1597;

													BgL_oldz00_1597 = CAR(((obj_t) BgL_l1258z00_1590));
													{	/* Integrate/loc2glo.scm 42 */
														BgL_svarz00_bglt BgL_arg1310z00_1598;

														{	/* Integrate/loc2glo.scm 42 */
															BgL_svarz00_bglt BgL_duplicated1110z00_1599;
															BgL_svarz00_bglt BgL_new1108z00_1600;

															BgL_duplicated1110z00_1599 =
																((BgL_svarz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					BgL_oldz00_1597))))->BgL_valuez00));
															{	/* Integrate/loc2glo.scm 42 */
																BgL_svarz00_bglt BgL_tmp1117z00_1606;
																BgL_svarzf2iinfozf2_bglt BgL_wide1118z00_1607;

																{
																	BgL_svarz00_bglt BgL_auxz00_2007;

																	{	/* Integrate/loc2glo.scm 42 */
																		BgL_svarz00_bglt BgL_new1116z00_1609;

																		BgL_new1116z00_1609 =
																			((BgL_svarz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_svarz00_bgl))));
																		{	/* Integrate/loc2glo.scm 42 */
																			long BgL_arg1312z00_1610;

																			{	/* Integrate/loc2glo.scm 42 */
																				long BgL_res1579z00_1837;

																				BgL_res1579z00_1837 =
																					BGL_CLASS_INDEX
																					(BGl_svarz00zzast_varz00);
																				BgL_arg1312z00_1610 =
																					BgL_res1579z00_1837;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1116z00_1609),
																				BgL_arg1312z00_1610);
																		}
																		{	/* Integrate/loc2glo.scm 42 */
																			BgL_objectz00_bglt BgL_tmpz00_2012;

																			BgL_tmpz00_2012 =
																				((BgL_objectz00_bglt)
																				BgL_new1116z00_1609);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2012,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1116z00_1609);
																		BgL_auxz00_2007 = BgL_new1116z00_1609;
																	}
																	BgL_tmp1117z00_1606 =
																		((BgL_svarz00_bglt) BgL_auxz00_2007);
																}
																BgL_wide1118z00_1607 =
																	((BgL_svarzf2iinfozf2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_svarzf2iinfozf2_bgl))));
																{	/* Integrate/loc2glo.scm 42 */
																	obj_t BgL_auxz00_2020;
																	BgL_objectz00_bglt BgL_tmpz00_2018;

																	BgL_auxz00_2020 =
																		((obj_t) BgL_wide1118z00_1607);
																	BgL_tmpz00_2018 =
																		((BgL_objectz00_bglt) BgL_tmp1117z00_1606);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2018,
																		BgL_auxz00_2020);
																}
																((BgL_objectz00_bglt) BgL_tmp1117z00_1606);
																{	/* Integrate/loc2glo.scm 42 */
																	long BgL_arg1311z00_1608;

																	{	/* Integrate/loc2glo.scm 42 */
																		long BgL_res1580z00_1843;

																		BgL_res1580z00_1843 =
																			BGL_CLASS_INDEX
																			(BGl_svarzf2Iinfozf2zzintegrate_infoz00);
																		BgL_arg1311z00_1608 = BgL_res1580z00_1843;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_tmp1117z00_1606),
																		BgL_arg1311z00_1608);
																}
																BgL_new1108z00_1600 =
																	((BgL_svarz00_bglt) BgL_tmp1117z00_1606);
															}
															((((BgL_svarz00_bglt) COBJECT(
																			((BgL_svarz00_bglt)
																				BgL_new1108z00_1600)))->BgL_locz00) =
																((obj_t) (((BgL_svarz00_bglt)
																			COBJECT(BgL_duplicated1110z00_1599))->
																		BgL_locz00)), BUNSPEC);
															{
																obj_t BgL_auxz00_2037;
																BgL_svarzf2iinfozf2_bglt BgL_auxz00_2031;

																{
																	BgL_svarzf2iinfozf2_bglt BgL_auxz00_2038;

																	{
																		obj_t BgL_auxz00_2039;

																		{	/* Integrate/loc2glo.scm 42 */
																			BgL_objectz00_bglt BgL_tmpz00_2040;

																			BgL_tmpz00_2040 =
																				((BgL_objectz00_bglt)
																				((BgL_svarz00_bglt)
																					BgL_duplicated1110z00_1599));
																			BgL_auxz00_2039 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2040);
																		}
																		BgL_auxz00_2038 =
																			((BgL_svarzf2iinfozf2_bglt)
																			BgL_auxz00_2039);
																	}
																	BgL_auxz00_2037 =
																		(((BgL_svarzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2038))->
																		BgL_fzd2markzd2);
																}
																{
																	obj_t BgL_auxz00_2032;

																	{	/* Integrate/loc2glo.scm 42 */
																		BgL_objectz00_bglt BgL_tmpz00_2033;

																		BgL_tmpz00_2033 =
																			((BgL_objectz00_bglt)
																			BgL_new1108z00_1600);
																		BgL_auxz00_2032 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2033);
																	}
																	BgL_auxz00_2031 =
																		((BgL_svarzf2iinfozf2_bglt)
																		BgL_auxz00_2032);
																}
																((((BgL_svarzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2031))->
																		BgL_fzd2markzd2) =
																	((obj_t) BgL_auxz00_2037), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_2053;
																BgL_svarzf2iinfozf2_bglt BgL_auxz00_2047;

																{
																	BgL_svarzf2iinfozf2_bglt BgL_auxz00_2054;

																	{
																		obj_t BgL_auxz00_2055;

																		{	/* Integrate/loc2glo.scm 42 */
																			BgL_objectz00_bglt BgL_tmpz00_2056;

																			BgL_tmpz00_2056 =
																				((BgL_objectz00_bglt)
																				((BgL_svarz00_bglt)
																					BgL_duplicated1110z00_1599));
																			BgL_auxz00_2055 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2056);
																		}
																		BgL_auxz00_2054 =
																			((BgL_svarzf2iinfozf2_bglt)
																			BgL_auxz00_2055);
																	}
																	BgL_auxz00_2053 =
																		(((BgL_svarzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2054))->
																		BgL_uzd2markzd2);
																}
																{
																	obj_t BgL_auxz00_2048;

																	{	/* Integrate/loc2glo.scm 42 */
																		BgL_objectz00_bglt BgL_tmpz00_2049;

																		BgL_tmpz00_2049 =
																			((BgL_objectz00_bglt)
																			BgL_new1108z00_1600);
																		BgL_auxz00_2048 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2049);
																	}
																	BgL_auxz00_2047 =
																		((BgL_svarzf2iinfozf2_bglt)
																		BgL_auxz00_2048);
																}
																((((BgL_svarzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2047))->
																		BgL_uzd2markzd2) =
																	((obj_t) BgL_auxz00_2053), BUNSPEC);
															}
															{
																bool_t BgL_auxz00_2069;
																BgL_svarzf2iinfozf2_bglt BgL_auxz00_2063;

																{
																	BgL_svarzf2iinfozf2_bglt BgL_auxz00_2070;

																	{
																		obj_t BgL_auxz00_2071;

																		{	/* Integrate/loc2glo.scm 42 */
																			BgL_objectz00_bglt BgL_tmpz00_2072;

																			BgL_tmpz00_2072 =
																				((BgL_objectz00_bglt)
																				((BgL_svarz00_bglt)
																					BgL_duplicated1110z00_1599));
																			BgL_auxz00_2071 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2072);
																		}
																		BgL_auxz00_2070 =
																			((BgL_svarzf2iinfozf2_bglt)
																			BgL_auxz00_2071);
																	}
																	BgL_auxz00_2069 =
																		(((BgL_svarzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2070))->
																		BgL_kapturedzf3zf3);
																}
																{
																	obj_t BgL_auxz00_2064;

																	{	/* Integrate/loc2glo.scm 42 */
																		BgL_objectz00_bglt BgL_tmpz00_2065;

																		BgL_tmpz00_2065 =
																			((BgL_objectz00_bglt)
																			BgL_new1108z00_1600);
																		BgL_auxz00_2064 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2065);
																	}
																	BgL_auxz00_2063 =
																		((BgL_svarzf2iinfozf2_bglt)
																		BgL_auxz00_2064);
																}
																((((BgL_svarzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2063))->
																		BgL_kapturedzf3zf3) =
																	((bool_t) BgL_auxz00_2069), BUNSPEC);
															}
															{
																bool_t BgL_auxz00_2085;
																BgL_svarzf2iinfozf2_bglt BgL_auxz00_2079;

																{
																	BgL_svarzf2iinfozf2_bglt BgL_auxz00_2086;

																	{
																		obj_t BgL_auxz00_2087;

																		{	/* Integrate/loc2glo.scm 42 */
																			BgL_objectz00_bglt BgL_tmpz00_2088;

																			BgL_tmpz00_2088 =
																				((BgL_objectz00_bglt)
																				((BgL_svarz00_bglt)
																					BgL_duplicated1110z00_1599));
																			BgL_auxz00_2087 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2088);
																		}
																		BgL_auxz00_2086 =
																			((BgL_svarzf2iinfozf2_bglt)
																			BgL_auxz00_2087);
																	}
																	BgL_auxz00_2085 =
																		(((BgL_svarzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2086))->
																		BgL_celledzf3zf3);
																}
																{
																	obj_t BgL_auxz00_2080;

																	{	/* Integrate/loc2glo.scm 42 */
																		BgL_objectz00_bglt BgL_tmpz00_2081;

																		BgL_tmpz00_2081 =
																			((BgL_objectz00_bglt)
																			BgL_new1108z00_1600);
																		BgL_auxz00_2080 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2081);
																	}
																	BgL_auxz00_2079 =
																		((BgL_svarzf2iinfozf2_bglt)
																		BgL_auxz00_2080);
																}
																((((BgL_svarzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2079))->
																		BgL_celledzf3zf3) =
																	((bool_t) BgL_auxz00_2085), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_2101;
																BgL_svarzf2iinfozf2_bglt BgL_auxz00_2095;

																{
																	BgL_svarzf2iinfozf2_bglt BgL_auxz00_2102;

																	{
																		obj_t BgL_auxz00_2103;

																		{	/* Integrate/loc2glo.scm 42 */
																			BgL_objectz00_bglt BgL_tmpz00_2104;

																			BgL_tmpz00_2104 =
																				((BgL_objectz00_bglt)
																				((BgL_svarz00_bglt)
																					BgL_duplicated1110z00_1599));
																			BgL_auxz00_2103 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2104);
																		}
																		BgL_auxz00_2102 =
																			((BgL_svarzf2iinfozf2_bglt)
																			BgL_auxz00_2103);
																	}
																	BgL_auxz00_2101 =
																		(((BgL_svarzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2102))->BgL_xhdlz00);
																}
																{
																	obj_t BgL_auxz00_2096;

																	{	/* Integrate/loc2glo.scm 42 */
																		BgL_objectz00_bglt BgL_tmpz00_2097;

																		BgL_tmpz00_2097 =
																			((BgL_objectz00_bglt)
																			BgL_new1108z00_1600);
																		BgL_auxz00_2096 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2097);
																	}
																	BgL_auxz00_2095 =
																		((BgL_svarzf2iinfozf2_bglt)
																		BgL_auxz00_2096);
																}
																((((BgL_svarzf2iinfozf2_bglt)
																			COBJECT(BgL_auxz00_2095))->BgL_xhdlz00) =
																	((obj_t) BgL_auxz00_2101), BUNSPEC);
															}
															BgL_arg1310z00_1598 = BgL_new1108z00_1600;
														}
														BgL_arg1309z00_1596 =
															BGl_clonezd2localzd2zzast_localz00(
															((BgL_localz00_bglt) BgL_oldz00_1597),
															((BgL_valuez00_bglt) BgL_arg1310z00_1598));
												}}
												{	/* Integrate/loc2glo.scm 40 */
													obj_t BgL_res1581z00_1856;

													BgL_res1581z00_1856 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1309z00_1596), BNIL);
													BgL_newtail1262z00_1594 = BgL_res1581z00_1856;
											}}
											SET_CDR(BgL_tail1261z00_1591, BgL_newtail1262z00_1594);
											{	/* Integrate/loc2glo.scm 40 */
												obj_t BgL_arg1308z00_1595;

												BgL_arg1308z00_1595 = CDR(((obj_t) BgL_l1258z00_1590));
												{
													obj_t BgL_tail1261z00_2120;
													obj_t BgL_l1258z00_2119;

													BgL_l1258z00_2119 = BgL_arg1308z00_1595;
													BgL_tail1261z00_2120 = BgL_newtail1262z00_1594;
													BgL_tail1261z00_1591 = BgL_tail1261z00_2120;
													BgL_l1258z00_1590 = BgL_l1258z00_2119;
													goto BgL_zc3z04anonymousza31306ze3z87_1592;
												}
											}
										}
								}
							}
						{	/* Integrate/loc2glo.scm 40 */
							BgL_valuez00_bglt BgL_oldzd2funzd2_1530;

							BgL_oldzd2funzd2_1530 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_localz00_3)))->BgL_valuez00);
							{	/* Integrate/loc2glo.scm 45 */
								BgL_sfunz00_bglt BgL_newzd2funzd2_1531;

								{	/* Integrate/loc2glo.scm 46 */
									BgL_sfunz00_bglt BgL_new1119z00_1568;

									{	/* Integrate/loc2glo.scm 47 */
										BgL_sfunz00_bglt BgL_new1133z00_1584;

										BgL_new1133z00_1584 =
											((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_sfunz00_bgl))));
										{	/* Integrate/loc2glo.scm 47 */
											long BgL_arg1304z00_1585;

											{	/* Integrate/loc2glo.scm 47 */
												long BgL_res1582z00_1861;

												BgL_res1582z00_1861 =
													BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
												BgL_arg1304z00_1585 = BgL_res1582z00_1861;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1133z00_1584),
												BgL_arg1304z00_1585);
										}
										{	/* Integrate/loc2glo.scm 47 */
											BgL_objectz00_bglt BgL_tmpz00_2127;

											BgL_tmpz00_2127 =
												((BgL_objectz00_bglt) BgL_new1133z00_1584);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2127, BFALSE);
										}
										((BgL_objectz00_bglt) BgL_new1133z00_1584);
										BgL_new1119z00_1568 = BgL_new1133z00_1584;
									}
									{
										long BgL_auxz00_2131;

										{	/* Integrate/loc2glo.scm 47 */
											long BgL_arg1299z00_1569;
											long BgL_arg1300z00_1570;

											BgL_arg1299z00_1569 =
												(((BgL_funz00_bglt) COBJECT(
														((BgL_funz00_bglt)
															((BgL_sfunz00_bglt) BgL_oldzd2funzd2_1530))))->
												BgL_arityz00);
											BgL_arg1300z00_1570 =
												bgl_list_length(BgL_addzd2argszd2_1529);
											BgL_auxz00_2131 =
												(long)
												CINT(BGl_zb2zd2arityz60zztools_argsz00(BINT
													(BgL_arg1299z00_1569), BINT(BgL_arg1300z00_1570)));
										}
										((((BgL_funz00_bglt) COBJECT(
														((BgL_funz00_bglt) BgL_new1119z00_1568)))->
												BgL_arityz00) = ((long) BgL_auxz00_2131), BUNSPEC);
									}
									((((BgL_funz00_bglt) COBJECT(
													((BgL_funz00_bglt) BgL_new1119z00_1568)))->
											BgL_sidezd2effectzd2) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1530)))->BgL_sidezd2effectzd2)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1119z00_1568)))->BgL_predicatezd2ofzd2) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1530)))->BgL_predicatezd2ofzd2)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1119z00_1568)))->BgL_stackzd2allocatorzd2) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1530)))->
												BgL_stackzd2allocatorzd2)), BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1119z00_1568)))->BgL_topzf3zf3) =
										((bool_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1530)))->BgL_topzf3zf3)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1119z00_1568)))->BgL_thezd2closurezd2) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1530)))->BgL_thezd2closurezd2)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1119z00_1568)))->BgL_effectz00) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1530)))->BgL_effectz00)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1119z00_1568)))->BgL_failsafez00) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1530)))->BgL_failsafez00)),
										BUNSPEC);
									((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
														BgL_new1119z00_1568)))->BgL_argszd2noescapezd2) =
										((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_oldzd2funzd2_1530)))->
												BgL_argszd2noescapezd2)), BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
											BgL_propertyz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1530))))->BgL_propertyz00)),
										BUNSPEC);
									{
										obj_t BgL_auxz00_2178;

										{	/* Integrate/loc2glo.scm 48 */
											obj_t BgL_arg1301z00_1572;
											obj_t BgL_arg1303z00_1573;

											BgL_arg1301z00_1572 = bgl_reverse(BgL_addzd2argszd2_1529);
											BgL_arg1303z00_1573 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_oldzd2funzd2_1530)))->
												BgL_argsz00);
											BgL_auxz00_2178 =
												BGl_appendzd221011zd2zzintegrate_localzd2ze3globalz31
												(BgL_arg1301z00_1572, BgL_arg1303z00_1573);
										}
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
												BgL_argsz00) = ((obj_t) BgL_auxz00_2178), BUNSPEC);
									}
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
											BgL_argszd2namezd2) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1530))))->BgL_argszd2namezd2)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
											BgL_bodyz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1530))))->BgL_bodyz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
											BgL_classz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1530))))->BgL_classz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
											BgL_dssslzd2keywordszd2) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1530))))->
												BgL_dssslzd2keywordszd2)), BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
											BgL_locz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1530))))->BgL_locz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
											BgL_optionalsz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1530))))->BgL_optionalsz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
											BgL_keysz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1530))))->BgL_keysz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
											BgL_thezd2closurezd2globalz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1530))))->
												BgL_thezd2closurezd2globalz00)), BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
											BgL_strengthz00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1530))))->BgL_strengthz00)),
										BUNSPEC);
									((((BgL_sfunz00_bglt) COBJECT(BgL_new1119z00_1568))->
											BgL_stackablez00) =
										((obj_t) (((BgL_sfunz00_bglt)
													COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																BgL_oldzd2funzd2_1530))))->BgL_stackablez00)),
										BUNSPEC);
									BgL_newzd2funzd2_1531 = BgL_new1119z00_1568;
								}
								{	/* Integrate/loc2glo.scm 46 */

									{	/* Integrate/loc2glo.scm 51 */
										BgL_typez00_bglt BgL_arg1277z00_1532;

										BgL_arg1277z00_1532 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_localz00_3)))->
											BgL_typez00);
										((((BgL_variablez00_bglt)
													COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
																BgL_globalz00_1527))))->BgL_typez00) =
											((BgL_typez00_bglt) BgL_arg1277z00_1532), BUNSPEC);
									}
									{	/* Integrate/loc2glo.scm 52 */
										obj_t BgL_g1265z00_1533;

										BgL_g1265z00_1533 =
											(((BgL_sfunz00_bglt) COBJECT(BgL_newzd2funzd2_1531))->
											BgL_argsz00);
										{
											obj_t BgL_l1263z00_1535;

											BgL_l1263z00_1535 = BgL_g1265z00_1533;
										BgL_zc3z04anonymousza31278ze3z87_1536:
											if (PAIRP(BgL_l1263z00_1535))
												{	/* Integrate/loc2glo.scm 55 */
													{	/* Integrate/loc2glo.scm 53 */
														obj_t BgL_lz00_1538;

														BgL_lz00_1538 = CAR(BgL_l1263z00_1535);
														if (BGl_integratezd2celledzf3z21zzintegrate_nodez00(
																((BgL_localz00_bglt) BgL_lz00_1538)))
															{	/* Integrate/loc2glo.scm 54 */
																BgL_typez00_bglt BgL_vz00_1874;

																BgL_vz00_1874 =
																	((BgL_typez00_bglt)
																	BGl_za2objza2z00zztype_cachez00);
																((((BgL_variablez00_bglt)
																			COBJECT(((BgL_variablez00_bglt) (
																						(BgL_localz00_bglt)
																						BgL_lz00_1538))))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_vz00_1874), BUNSPEC);
															}
														else
															{	/* Integrate/loc2glo.scm 53 */
																BFALSE;
															}
													}
													{
														obj_t BgL_l1263z00_2240;

														BgL_l1263z00_2240 = CDR(BgL_l1263z00_1535);
														BgL_l1263z00_1535 = BgL_l1263z00_2240;
														goto BgL_zc3z04anonymousza31278ze3z87_1536;
													}
												}
											else
												{	/* Integrate/loc2glo.scm 55 */
													((bool_t) 1);
												}
										}
									}
									{	/* Integrate/loc2glo.scm 57 */
										obj_t BgL_arg1282z00_1542;

										{	/* Integrate/loc2glo.scm 57 */
											obj_t BgL_arg1284z00_1543;
											obj_t BgL_arg1285z00_1544;

											BgL_arg1284z00_1543 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_oldzd2funzd2_1530)))->
												BgL_bodyz00);
											if (NULLP(BgL_kapturedz00_1528))
												{	/* Integrate/loc2glo.scm 59 */
													BgL_arg1285z00_1544 = BNIL;
												}
											else
												{	/* Integrate/loc2glo.scm 59 */
													obj_t BgL_head1268z00_1548;

													{	/* Integrate/loc2glo.scm 59 */
														obj_t BgL_arg1296z00_1564;

														{	/* Integrate/loc2glo.scm 59 */
															obj_t BgL_arg1297z00_1565;
															obj_t BgL_arg1298z00_1566;

															BgL_arg1297z00_1565 =
																CAR(((obj_t) BgL_kapturedz00_1528));
															BgL_arg1298z00_1566 =
																CAR(((obj_t) BgL_addzd2argszd2_1529));
															BgL_arg1296z00_1564 =
																MAKE_YOUNG_PAIR(BgL_arg1297z00_1565,
																BgL_arg1298z00_1566);
														}
														{	/* Integrate/loc2glo.scm 59 */
															obj_t BgL_res1585z00_1880;

															BgL_res1585z00_1880 =
																MAKE_YOUNG_PAIR(BgL_arg1296z00_1564, BNIL);
															BgL_head1268z00_1548 = BgL_res1585z00_1880;
														}
													}
													{	/* Integrate/loc2glo.scm 59 */
														obj_t BgL_g1272z00_1549;
														obj_t BgL_g1273z00_1550;

														BgL_g1272z00_1549 =
															CDR(((obj_t) BgL_kapturedz00_1528));
														BgL_g1273z00_1550 =
															CDR(((obj_t) BgL_addzd2argszd2_1529));
														{
															obj_t BgL_ll1266z00_1552;
															obj_t BgL_ll1267z00_1553;
															obj_t BgL_tail1269z00_1554;

															BgL_ll1266z00_1552 = BgL_g1272z00_1549;
															BgL_ll1267z00_1553 = BgL_g1273z00_1550;
															BgL_tail1269z00_1554 = BgL_head1268z00_1548;
														BgL_zc3z04anonymousza31287ze3z87_1555:
															if (NULLP(BgL_ll1266z00_1552))
																{	/* Integrate/loc2glo.scm 59 */
																	BgL_arg1285z00_1544 = BgL_head1268z00_1548;
																}
															else
																{	/* Integrate/loc2glo.scm 59 */
																	obj_t BgL_newtail1270z00_1557;

																	{	/* Integrate/loc2glo.scm 59 */
																		obj_t BgL_arg1291z00_1560;

																		{	/* Integrate/loc2glo.scm 59 */
																			obj_t BgL_arg1292z00_1561;
																			obj_t BgL_arg1295z00_1562;

																			BgL_arg1292z00_1561 =
																				CAR(((obj_t) BgL_ll1266z00_1552));
																			BgL_arg1295z00_1562 =
																				CAR(((obj_t) BgL_ll1267z00_1553));
																			BgL_arg1291z00_1560 =
																				MAKE_YOUNG_PAIR(BgL_arg1292z00_1561,
																				BgL_arg1295z00_1562);
																		}
																		{	/* Integrate/loc2glo.scm 59 */
																			obj_t BgL_res1587z00_1886;

																			BgL_res1587z00_1886 =
																				MAKE_YOUNG_PAIR(BgL_arg1291z00_1560,
																				BNIL);
																			BgL_newtail1270z00_1557 =
																				BgL_res1587z00_1886;
																		}
																	}
																	SET_CDR(BgL_tail1269z00_1554,
																		BgL_newtail1270z00_1557);
																	{	/* Integrate/loc2glo.scm 59 */
																		obj_t BgL_arg1289z00_1558;
																		obj_t BgL_arg1290z00_1559;

																		BgL_arg1289z00_1558 =
																			CDR(((obj_t) BgL_ll1266z00_1552));
																		BgL_arg1290z00_1559 =
																			CDR(((obj_t) BgL_ll1267z00_1553));
																		{
																			obj_t BgL_tail1269z00_2271;
																			obj_t BgL_ll1267z00_2270;
																			obj_t BgL_ll1266z00_2269;

																			BgL_ll1266z00_2269 = BgL_arg1289z00_1558;
																			BgL_ll1267z00_2270 = BgL_arg1290z00_1559;
																			BgL_tail1269z00_2271 =
																				BgL_newtail1270z00_1557;
																			BgL_tail1269z00_1554 =
																				BgL_tail1269z00_2271;
																			BgL_ll1267z00_1553 = BgL_ll1267z00_2270;
																			BgL_ll1266z00_1552 = BgL_ll1266z00_2269;
																			goto
																				BgL_zc3z04anonymousza31287ze3z87_1555;
																		}
																	}
																}
														}
													}
												}
											BgL_arg1282z00_1542 =
												BGl_integratezd2globaliza7ez12z67zzintegrate_nodez00(
												((BgL_nodez00_bglt) BgL_arg1284z00_1543),
												((BgL_variablez00_bglt) BgL_localz00_3),
												BgL_arg1285z00_1544);
										}
										((((BgL_sfunz00_bglt) COBJECT(BgL_newzd2funzd2_1531))->
												BgL_bodyz00) = ((obj_t) BgL_arg1282z00_1542), BUNSPEC);
									}
									((((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_globalz00_1527))))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) ((BgL_valuez00_bglt)
												BgL_newzd2funzd2_1531)), BUNSPEC);
									return BgL_globalz00_1527;
								}
							}
						}
					}
				}
			}
		}

	}



/* &local->global */
	obj_t BGl_z62localzd2ze3globalz53zzintegrate_localzd2ze3globalz31(obj_t
		BgL_envz00_1922, obj_t BgL_localz00_1923)
	{
		{	/* Integrate/loc2glo.scm 35 */
			return
				BGl_localzd2ze3globalz31zzintegrate_localzd2ze3globalz31(
				((BgL_localz00_bglt) BgL_localz00_1923));
		}

	}



/* local-id->global-id */
	obj_t
		BGl_localzd2idzd2ze3globalzd2idz31zzintegrate_localzd2ze3globalz31
		(BgL_localz00_bglt BgL_localz00_4)
	{
		{	/* Integrate/loc2glo.scm 73 */
			{	/* Integrate/loc2glo.scm 74 */
				obj_t BgL_pz00_1613;

				{	/* Integrate/loc2glo.scm 74 */
					obj_t BgL_arg1326z00_1627;

					{	/* Integrate/loc2glo.scm 74 */
						obj_t BgL_arg1327z00_1628;

						BgL_arg1327z00_1628 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_localz00_4)))->BgL_idz00);
						{	/* Integrate/loc2glo.scm 74 */
							obj_t BgL_res1588z00_1896;

							{	/* Integrate/loc2glo.scm 74 */
								obj_t BgL_arg1466z00_1895;

								BgL_arg1466z00_1895 = SYMBOL_TO_STRING(BgL_arg1327z00_1628);
								BgL_res1588z00_1896 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_1895);
							}
							BgL_arg1326z00_1627 = BgL_res1588z00_1896;
						}
					}
					BgL_pz00_1613 =
						string_append(BgL_arg1326z00_1627,
						BGl_string1594z00zzintegrate_localzd2ze3globalz31);
				}
				{
					long BgL_countz00_1615;

					BgL_countz00_1615 = ((long) 0);
				BgL_zc3z04anonymousza31315ze3z87_1616:
					{	/* Integrate/loc2glo.scm 76 */
						obj_t BgL_idz00_1617;

						{	/* Integrate/loc2glo.scm 76 */
							obj_t BgL_arg1324z00_1622;

							{	/* Integrate/loc2glo.scm 76 */
								obj_t BgL_arg1325z00_1623;

								{	/* Integrate/loc2glo.scm 76 */

									BgL_arg1325z00_1623 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_countz00_1615, ((long) 10));
								}
								BgL_arg1324z00_1622 =
									string_append(BgL_pz00_1613, BgL_arg1325z00_1623);
							}
							BgL_idz00_1617 = bstring_to_symbol(BgL_arg1324z00_1622);
						}
						{	/* Integrate/loc2glo.scm 77 */
							bool_t BgL_test1619z00_2290;

							{	/* Integrate/loc2glo.scm 77 */
								obj_t BgL_arg1322z00_1621;

								BgL_arg1322z00_1621 =
									BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idz00_1617,
									BGl_za2moduleza2z00zzmodule_modulez00);
								BgL_test1619z00_2290 =
									BGl_isazf3zf3zz__objectz00(BgL_arg1322z00_1621,
									BGl_globalz00zzast_varz00);
							}
							if (BgL_test1619z00_2290)
								{
									long BgL_countz00_2293;

									BgL_countz00_2293 = (BgL_countz00_1615 + ((long) 1));
									BgL_countz00_1615 = BgL_countz00_2293;
									goto BgL_zc3z04anonymousza31315ze3z87_1616;
								}
							else
								{	/* Integrate/loc2glo.scm 77 */
									return BgL_idz00_1617;
								}
						}
					}
				}
			}
		}

	}



/* the-global */
	BGL_EXPORTED_DEF obj_t
		BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(BgL_localz00_bglt
		BgL_localz00_5)
	{
		{	/* Integrate/loc2glo.scm 84 */
			{	/* Integrate/loc2glo.scm 85 */
				BgL_valuez00_bglt BgL_valuez00_1629;

				BgL_valuez00_1629 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_localz00_5)))->BgL_valuez00);
				{	/* Integrate/loc2glo.scm 86 */
					bool_t BgL_test1620z00_2297;

					{	/* Integrate/loc2glo.scm 86 */
						obj_t BgL_arg1337z00_1639;

						{
							BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2298;

							{
								obj_t BgL_auxz00_2299;

								{	/* Integrate/loc2glo.scm 86 */
									BgL_objectz00_bglt BgL_tmpz00_2300;

									BgL_tmpz00_2300 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_valuez00_1629));
									BgL_auxz00_2299 = BGL_OBJECT_WIDENING(BgL_tmpz00_2300);
								}
								BgL_auxz00_2298 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2299);
							}
							BgL_arg1337z00_1639 =
								(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2298))->
								BgL_globalz00);
						}
						BgL_test1620z00_2297 =
							BGl_isazf3zf3zz__objectz00(BgL_arg1337z00_1639,
							BGl_globalz00zzast_varz00);
					}
					if (BgL_test1620z00_2297)
						{
							BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2307;

							{
								obj_t BgL_auxz00_2308;

								{	/* Integrate/loc2glo.scm 87 */
									BgL_objectz00_bglt BgL_tmpz00_2309;

									BgL_tmpz00_2309 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_valuez00_1629));
									BgL_auxz00_2308 = BGL_OBJECT_WIDENING(BgL_tmpz00_2309);
								}
								BgL_auxz00_2307 = ((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2308);
							}
							return
								(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2307))->
								BgL_globalz00);
						}
					else
						{	/* Integrate/loc2glo.scm 88 */
							obj_t BgL_idz00_1632;

							BgL_idz00_1632 =
								BGl_localzd2idzd2ze3globalzd2idz31zzintegrate_localzd2ze3globalz31
								(BgL_localz00_5);
							{	/* Integrate/loc2glo.scm 88 */
								BgL_globalz00_bglt BgL_globalz00_1633;

								BgL_globalz00_1633 =
									BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
									(BgL_idz00_1632, BNIL, BNIL,
									BGl_za2moduleza2z00zzmodule_modulez00,
									CNST_TABLE_REF(((long) 0)), CNST_TABLE_REF(((long) 1)),
									CNST_TABLE_REF(((long) 2)), BUNSPEC);
								{	/* Integrate/loc2glo.scm 89 */

									{	/* Integrate/loc2glo.scm 102 */
										BgL_valuez00_bglt BgL_arg1330z00_1634;
										obj_t BgL_arg1331z00_1635;

										BgL_arg1330z00_1634 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_1633)))->
											BgL_valuez00);
										BgL_arg1331z00_1635 =
											(((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
														BgL_valuez00_1629)))->BgL_locz00);
										((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
															BgL_arg1330z00_1634)))->BgL_locz00) =
											((obj_t) BgL_arg1331z00_1635), BUNSPEC);
									}
									if (
										(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_localz00_5)))->
											BgL_userzf3zf3))
										{	/* Integrate/loc2glo.scm 104 */
											BFALSE;
										}
									else
										{	/* Integrate/loc2glo.scm 104 */
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_globalz00_1633)))->
													BgL_userzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
										}
									{
										BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2331;

										{
											obj_t BgL_auxz00_2332;

											{	/* Integrate/loc2glo.scm 106 */
												BgL_objectz00_bglt BgL_tmpz00_2333;

												BgL_tmpz00_2333 =
													((BgL_objectz00_bglt)
													((BgL_sfunz00_bglt) BgL_valuez00_1629));
												BgL_auxz00_2332 = BGL_OBJECT_WIDENING(BgL_tmpz00_2333);
											}
											BgL_auxz00_2331 =
												((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2332);
										}
										((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2331))->
												BgL_globalz00) =
											((obj_t) ((obj_t) BgL_globalz00_1633)), BUNSPEC);
									}
									{	/* Integrate/loc2glo.scm 107 */
										BgL_valuez00_bglt BgL_arg1334z00_1637;
										obj_t BgL_arg1335z00_1638;

										BgL_arg1334z00_1637 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_1633)))->
											BgL_valuez00);
										BgL_arg1335z00_1638 =
											(((BgL_funz00_bglt)
												COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
															BgL_valuez00_1629))))->BgL_sidezd2effectzd2);
										((((BgL_funz00_bglt)
													COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
																BgL_arg1334z00_1637))))->BgL_sidezd2effectzd2) =
											((obj_t) BgL_arg1335z00_1638), BUNSPEC);
									}
									return ((obj_t) BgL_globalz00_1633);
								}
							}
						}
				}
			}
		}

	}



/* &the-global */
	obj_t BGl_z62thezd2globalzb0zzintegrate_localzd2ze3globalz31(obj_t
		BgL_envz00_1924, obj_t BgL_localz00_1925)
	{
		{	/* Integrate/loc2glo.scm 84 */
			return
				BGl_thezd2globalzd2zzintegrate_localzd2ze3globalz31(
				((BgL_localz00_bglt) BgL_localz00_1925));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_localzd2ze3globalz31()
	{
		{	/* Integrate/loc2glo.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_localzd2ze3globalz31()
	{
		{	/* Integrate/loc2glo.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_localzd2ze3globalz31()
	{
		{	/* Integrate/loc2glo.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_localzd2ze3globalz31()
	{
		{	/* Integrate/loc2glo.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 44601778),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_nodez00(((long) 347237018),
				BSTRING_TO_STRING(BGl_string1595z00zzintegrate_localzd2ze3globalz31));
		}

	}

#ifdef __cplusplus
}
#endif
