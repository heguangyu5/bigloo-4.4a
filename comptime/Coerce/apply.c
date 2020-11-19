/*===========================================================================*/
/*   (Coerce/apply.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/apply.scm) */
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

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;


	extern obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzcoerce_applyz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_lvtypezd2nodezd2zzast_lvtypez00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzcoerce_applyz00();
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	extern BgL_typez00_bglt
		BGl_strictzd2nodezd2typez00zzast_nodez00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl_gczd2rootszd2initz00zzcoerce_applyz00();
	extern obj_t BGl_currentzd2functionzd2zztools_errorz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_applyz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzcoerce_applyz00();
	static obj_t BGl_genericzd2initzd2zzcoerce_applyz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static BgL_nodez00_bglt BGl_makezd2errorzd2nodez00zzcoerce_applyz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_applyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static BgL_nodez00_bglt
		BGl_z62coercez12zd2appzd2ly1288z70zzcoerce_applyz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcoerce_applyz00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_applyz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_applyz00();
	static obj_t __cnst[17];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1774z00zzcoerce_applyz00,
		BgL_bgl_za762coerceza712za7d2a1781za7,
		BGl_z62coercez12zd2appzd2ly1288z70zzcoerce_applyz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string1773z00zzcoerce_applyz00,
		BgL_bgl_string1773za700za7za7c1782za7, "Wrong number of arguments", 25);
	      DEFINE_STRING(BGl_string1775z00zzcoerce_applyz00,
		BgL_bgl_string1775za700za7za7c1783za7, "coerce!", 7);
	      DEFINE_STRING(BGl_string1776z00zzcoerce_applyz00,
		BgL_bgl_string1776za700za7za7c1784za7, "coerce_apply", 12);
	      DEFINE_STRING(BGl_string1777z00zzcoerce_applyz00,
		BgL_bgl_string1777za700za7za7c1785za7,
		"let if correct-arity? ::int len length val fun begin failure _ quote @ error/location __error location bdb ",
		107);
	extern obj_t BGl_coercez12zd2envzc0zzcoerce_coercez00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcoerce_applyz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcoerce_applyz00(long
		BgL_checksumz00_1974, char *BgL_fromz00_1975)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_applyz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_applyz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcoerce_applyz00();
					BGl_libraryzd2moduleszd2initz00zzcoerce_applyz00();
					BGl_cnstzd2initzd2zzcoerce_applyz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_applyz00();
					BGl_methodzd2initzd2zzcoerce_applyz00();
					return BGl_toplevelzd2initzd2zzcoerce_applyz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_applyz00()
	{
		{	/* Coerce/apply.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"coerce_apply");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "coerce_apply");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"coerce_apply");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"coerce_apply");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "coerce_apply");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"coerce_apply");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"coerce_apply");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"coerce_apply");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "coerce_apply");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_applyz00()
	{
		{	/* Coerce/apply.scm 15 */
			{	/* Coerce/apply.scm 15 */
				obj_t BgL_cportz00_1881;

				{	/* Coerce/apply.scm 15 */
					obj_t BgL_stringz00_1889;

					BgL_stringz00_1889 = BGl_string1777z00zzcoerce_applyz00;
					{	/* Coerce/apply.scm 15 */
						obj_t BgL_startz00_1890;

						BgL_startz00_1890 = BINT(((long) 0));
						{	/* Coerce/apply.scm 15 */
							obj_t BgL_endz00_1891;

							BgL_endz00_1891 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1889)));
							{	/* Coerce/apply.scm 15 */

								BgL_cportz00_1881 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1889, BgL_startz00_1890, BgL_endz00_1891);
				}}}}
				{
					long BgL_iz00_1882;

					BgL_iz00_1882 = ((long) 16);
				BgL_loopz00_1883:
					if ((BgL_iz00_1882 == ((long) -1)))
						{	/* Coerce/apply.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/apply.scm 15 */
							{	/* Coerce/apply.scm 15 */
								obj_t BgL_arg1779z00_1885;

								{	/* Coerce/apply.scm 15 */

									{	/* Coerce/apply.scm 15 */
										obj_t BgL_locationz00_1887;

										BgL_locationz00_1887 = BBOOL(((bool_t) 0));
										{	/* Coerce/apply.scm 15 */

											BgL_arg1779z00_1885 =
												BGl_readz00zz__readerz00(BgL_cportz00_1881,
												BgL_locationz00_1887);
										}
									}
								}
								{	/* Coerce/apply.scm 15 */
									int BgL_tmpz00_2003;

									BgL_tmpz00_2003 = (int) (BgL_iz00_1882);
									CNST_TABLE_SET(BgL_tmpz00_2003, BgL_arg1779z00_1885);
							}}
							{	/* Coerce/apply.scm 15 */
								int BgL_auxz00_1888;

								BgL_auxz00_1888 = (int) ((BgL_iz00_1882 - ((long) 1)));
								{
									long BgL_iz00_2008;

									BgL_iz00_2008 = (long) (BgL_auxz00_1888);
									BgL_iz00_1882 = BgL_iz00_2008;
									goto BgL_loopz00_1883;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcoerce_applyz00()
	{
		{	/* Coerce/apply.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_applyz00()
	{
		{	/* Coerce/apply.scm 15 */
			return BUNSPEC;
		}

	}



/* make-error-node */
	BgL_nodez00_bglt BGl_makezd2errorzd2nodez00zzcoerce_applyz00(obj_t
		BgL_errorzd2msgzd2_21, obj_t BgL_locz00_22, obj_t BgL_callerz00_23,
		obj_t BgL_toz00_24)
	{
		{	/* Coerce/apply.scm 97 */
			{	/* Coerce/apply.scm 98 */
				BgL_nodez00_bglt BgL_nodez00_1446;

				{	/* Coerce/apply.scm 99 */
					obj_t BgL_arg1307z00_1447;

					{	/* Coerce/apply.scm 99 */
						bool_t BgL_test1788z00_2011;

						{	/* Coerce/apply.scm 99 */
							bool_t BgL_test1789z00_2012;

							{	/* Coerce/apply.scm 99 */
								bool_t BgL_test1790z00_2013;

								if (
									((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
										((long) 0)))
									{	/* Coerce/apply.scm 102 */
										obj_t BgL_arg1382z00_1498;

										{	/* Coerce/apply.scm 102 */
											obj_t BgL_arg1383z00_1499;

											BgL_arg1383z00_1499 =
												BGl_thezd2backendzd2zzbackend_backendz00();
											BgL_arg1382z00_1498 =
												(((BgL_backendz00_bglt) COBJECT(
														((BgL_backendz00_bglt) BgL_arg1383z00_1499)))->
												BgL_debugzd2supportzd2);
										}
										BgL_test1790z00_2013 =
											CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(CNST_TABLE_REF(((long) 0)), BgL_arg1382z00_1498));
									}
								else
									{	/* Coerce/apply.scm 99 */
										BgL_test1790z00_2013 = ((bool_t) 0);
									}
								if (BgL_test1790z00_2013)
									{	/* Coerce/apply.scm 99 */
										BgL_test1789z00_2012 = ((bool_t) 1);
									}
								else
									{	/* Coerce/apply.scm 99 */
										BgL_test1789z00_2012 =
											(
											(long)
											CINT(BGl_za2compilerzd2debugza2zd2zzengine_paramz00) >
											((long) 0));
							}}
							if (BgL_test1789z00_2012)
								{	/* Coerce/apply.scm 99 */
									if (STRUCTP(BgL_locz00_22))
										{	/* Coerce/apply.scm 104 */
											BgL_test1788z00_2011 =
												(STRUCT_KEY(BgL_locz00_22) ==
												CNST_TABLE_REF(((long) 1)));
										}
									else
										{	/* Coerce/apply.scm 104 */
											BgL_test1788z00_2011 = ((bool_t) 0);
										}
								}
							else
								{	/* Coerce/apply.scm 99 */
									BgL_test1788z00_2011 = ((bool_t) 0);
								}
						}
						if (BgL_test1788z00_2011)
							{	/* Coerce/apply.scm 106 */
								obj_t BgL_arg1319z00_1461;

								{	/* Coerce/apply.scm 106 */
									obj_t BgL_arg1322z00_1462;
									obj_t BgL_arg1324z00_1463;

									{	/* Coerce/apply.scm 106 */
										obj_t BgL_arg1325z00_1464;
										obj_t BgL_arg1326z00_1465;

										{	/* Coerce/apply.scm 106 */
											obj_t BgL_arg1327z00_1466;

											{	/* Coerce/apply.scm 106 */
												obj_t BgL_arg1328z00_1467;

												BgL_arg1328z00_1467 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)), BNIL);
												BgL_arg1327z00_1466 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
													BgL_arg1328z00_1467);
											}
											BgL_arg1325z00_1464 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
												BgL_arg1327z00_1466);
										}
										{	/* Coerce/apply.scm 107 */
											obj_t BgL_arg1329z00_1468;
											obj_t BgL_arg1330z00_1469;

											{	/* Coerce/apply.scm 107 */
												obj_t BgL_arg1331z00_1470;

												BgL_arg1331z00_1470 =
													BGl_currentzd2functionzd2zztools_errorz00();
												{	/* Coerce/apply.scm 107 */
													obj_t BgL_list1332z00_1471;

													{	/* Coerce/apply.scm 107 */
														obj_t BgL_arg1334z00_1472;

														BgL_arg1334z00_1472 =
															MAKE_YOUNG_PAIR(BgL_arg1331z00_1470, BNIL);
														BgL_list1332z00_1471 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
															BgL_arg1334z00_1472);
													}
													BgL_arg1329z00_1468 = BgL_list1332z00_1471;
											}}
											{	/* Coerce/apply.scm 110 */
												obj_t BgL_arg1335z00_1473;

												{	/* Coerce/apply.scm 110 */
													obj_t BgL_arg1337z00_1474;

													{	/* Coerce/apply.scm 110 */
														obj_t BgL_arg1338z00_1475;
														obj_t BgL_arg1339z00_1476;

														BgL_arg1338z00_1475 =
															BGl_locationzd2fullzd2fnamez00zztools_locationz00
															(BgL_locz00_22);
														BgL_arg1339z00_1476 =
															MAKE_YOUNG_PAIR(STRUCT_REF(BgL_locz00_22,
																(int) (((long) 1))), BNIL);
														BgL_arg1337z00_1474 =
															MAKE_YOUNG_PAIR(BgL_arg1338z00_1475,
															BgL_arg1339z00_1476);
													}
													BgL_arg1335z00_1473 =
														MAKE_YOUNG_PAIR(BgL_errorzd2msgzd2_21,
														BgL_arg1337z00_1474);
												}
												BgL_arg1330z00_1469 =
													MAKE_YOUNG_PAIR(BGl_string1773z00zzcoerce_applyz00,
													BgL_arg1335z00_1473);
											}
											BgL_arg1326z00_1465 =
												MAKE_YOUNG_PAIR(BgL_arg1329z00_1468,
												BgL_arg1330z00_1469);
										}
										BgL_arg1322z00_1462 =
											MAKE_YOUNG_PAIR(BgL_arg1325z00_1464, BgL_arg1326z00_1465);
									}
									{	/* Coerce/apply.scm 112 */
										obj_t BgL_arg1344z00_1478;

										{	/* Coerce/apply.scm 112 */
											obj_t BgL_arg1345z00_1479;

											{	/* Coerce/apply.scm 112 */
												obj_t BgL_arg1346z00_1480;
												obj_t BgL_arg1347z00_1481;

												{	/* Coerce/apply.scm 112 */
													obj_t BgL_arg1348z00_1482;

													BgL_arg1348z00_1482 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)), BNIL);
													BgL_arg1346z00_1480 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
														BgL_arg1348z00_1482);
												}
												{	/* Coerce/apply.scm 112 */
													obj_t BgL_arg1351z00_1483;
													obj_t BgL_arg1352z00_1484;

													{	/* Coerce/apply.scm 112 */
														obj_t BgL_arg1357z00_1485;

														BgL_arg1357z00_1485 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)), BNIL);
														BgL_arg1351z00_1483 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
															BgL_arg1357z00_1485);
													}
													{	/* Coerce/apply.scm 112 */
														obj_t BgL_arg1360z00_1486;

														{	/* Coerce/apply.scm 112 */
															obj_t BgL_arg1361z00_1487;

															BgL_arg1361z00_1487 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																BNIL);
															BgL_arg1360z00_1486 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
																BgL_arg1361z00_1487);
														}
														BgL_arg1352z00_1484 =
															MAKE_YOUNG_PAIR(BgL_arg1360z00_1486, BNIL);
													}
													BgL_arg1347z00_1481 =
														MAKE_YOUNG_PAIR(BgL_arg1351z00_1483,
														BgL_arg1352z00_1484);
												}
												BgL_arg1345z00_1479 =
													MAKE_YOUNG_PAIR(BgL_arg1346z00_1480,
													BgL_arg1347z00_1481);
											}
											BgL_arg1344z00_1478 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
												BgL_arg1345z00_1479);
										}
										BgL_arg1324z00_1463 =
											MAKE_YOUNG_PAIR(BgL_arg1344z00_1478, BNIL);
									}
									BgL_arg1319z00_1461 =
										MAKE_YOUNG_PAIR(BgL_arg1322z00_1462, BgL_arg1324z00_1463);
								}
								BgL_arg1307z00_1447 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
									BgL_arg1319z00_1461);
							}
						else
							{	/* Coerce/apply.scm 113 */
								obj_t BgL_arg1363z00_1488;

								{	/* Coerce/apply.scm 113 */
									obj_t BgL_arg1364z00_1489;
									obj_t BgL_arg1367z00_1490;

									{	/* Coerce/apply.scm 113 */
										obj_t BgL_arg1370z00_1491;

										BgL_arg1370z00_1491 =
											BGl_currentzd2functionzd2zztools_errorz00();
										{	/* Coerce/apply.scm 113 */
											obj_t BgL_list1371z00_1492;

											{	/* Coerce/apply.scm 113 */
												obj_t BgL_arg1372z00_1493;

												BgL_arg1372z00_1493 =
													MAKE_YOUNG_PAIR(BgL_arg1370z00_1491, BNIL);
												BgL_list1371z00_1492 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
													BgL_arg1372z00_1493);
											}
											BgL_arg1364z00_1489 = BgL_list1371z00_1492;
									}}
									{	/* Coerce/apply.scm 113 */
										obj_t BgL_arg1381z00_1494;

										BgL_arg1381z00_1494 =
											MAKE_YOUNG_PAIR(BgL_errorzd2msgzd2_21, BNIL);
										BgL_arg1367z00_1490 =
											MAKE_YOUNG_PAIR(BGl_string1773z00zzcoerce_applyz00,
											BgL_arg1381z00_1494);
									}
									BgL_arg1363z00_1488 =
										MAKE_YOUNG_PAIR(BgL_arg1364z00_1489, BgL_arg1367z00_1490);
								}
								BgL_arg1307z00_1447 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
									BgL_arg1363z00_1488);
					}}
					BgL_nodez00_1446 =
						BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
						(BgL_arg1307z00_1447, BgL_locz00_22);
				}
				return
					BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_1446, BgL_callerz00_23,
					((BgL_typez00_bglt) BgL_toz00_24), ((bool_t) 0));
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcoerce_applyz00()
	{
		{	/* Coerce/apply.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_applyz00()
	{
		{	/* Coerce/apply.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_applyz00()
	{
		{	/* Coerce/apply.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc1774z00zzcoerce_applyz00, BGl_string1775z00zzcoerce_applyz00);
		}

	}



/* &coerce!-app-ly1288 */
	BgL_nodez00_bglt BGl_z62coercez12zd2appzd2ly1288z70zzcoerce_applyz00(obj_t
		BgL_envz00_1870, obj_t BgL_nodez00_1871, obj_t BgL_callerz00_1872,
		obj_t BgL_toz00_1873, obj_t BgL_safez00_1874)
	{
		{	/* Coerce/apply.scm 36 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_errorzd2msgzd2_1895;

				{	/* Tools/trace.sch 53 */
					obj_t BgL_arg1599z00_1896;

					BgL_arg1599z00_1896 =
						BGl_shapez00zztools_shapez00(
						((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_1871)));
					{	/* Tools/trace.sch 53 */
						obj_t BgL_list1600z00_1897;

						{	/* Tools/trace.sch 53 */
							obj_t BgL_arg1604z00_1898;

							BgL_arg1604z00_1898 = MAKE_YOUNG_PAIR(BgL_arg1599z00_1896, BNIL);
							BgL_list1600z00_1897 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
								BgL_arg1604z00_1898);
						}
						BgL_errorzd2msgzd2_1895 = BgL_list1600z00_1897;
				}}
				{	/* Tools/trace.sch 53 */
					BgL_nodez00_bglt BgL_arg1384z00_1899;

					{	/* Tools/trace.sch 53 */
						BgL_nodez00_bglt BgL_arg1385z00_1900;

						BgL_arg1385z00_1900 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_1871)))->BgL_argz00);
						BgL_arg1384z00_1899 =
							BGl_coercez12z12zzcoerce_coercez00(BgL_arg1385z00_1900,
							BgL_callerz00_1872,
							((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00),
							CBOOL(BgL_safez00_1874));
					}
					((((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_1871)))->BgL_argz00) =
						((BgL_nodez00_bglt) BgL_arg1384z00_1899), BUNSPEC);
				}
				{	/* Tools/trace.sch 53 */
					BgL_nodez00_bglt BgL_czd2funzd2_1901;

					{	/* Tools/trace.sch 53 */
						BgL_nodez00_bglt BgL_arg1597z00_1902;

						BgL_arg1597z00_1902 =
							(((BgL_appzd2lyzd2_bglt) COBJECT(
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_1871)))->BgL_funz00);
						BgL_czd2funzd2_1901 =
							BGl_coercez12z12zzcoerce_coercez00(BgL_arg1597z00_1902,
							BgL_callerz00_1872,
							((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00),
							CBOOL(BgL_safez00_1874));
					}
					if (CBOOL(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
						{	/* Tools/trace.sch 53 */
							bool_t BgL_test1794z00_2103;

							{	/* Tools/trace.sch 53 */
								bool_t BgL_res1758z00_1903;

								BgL_res1758z00_1903 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_czd2funzd2_1901), BGl_varz00zzast_nodez00);
								BgL_test1794z00_2103 = BgL_res1758z00_1903;
							}
							if (BgL_test1794z00_2103)
								{	/* Tools/trace.sch 53 */
									((((BgL_appzd2lyzd2_bglt) COBJECT(
													((BgL_appzd2lyzd2_bglt) BgL_nodez00_1871)))->
											BgL_funz00) =
										((BgL_nodez00_bglt) BgL_czd2funzd2_1901), BUNSPEC);
									return
										BGl_convertz12z12zzcoerce_convertz00(((BgL_nodez00_bglt) (
												(BgL_appzd2lyzd2_bglt) BgL_nodez00_1871)),
										((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00),
										((BgL_typez00_bglt) BgL_toz00_1873),
										CBOOL(BgL_safez00_1874));
								}
							else
								{	/* Tools/trace.sch 53 */
									BgL_localz00_bglt BgL_funz00_1904;

									BgL_funz00_1904 =
										BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
												(long) 9)),
										((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00));
									{	/* Tools/trace.sch 53 */
										BgL_varz00_bglt BgL_arg1394z00_1905;

										{	/* Tools/trace.sch 53 */
											BgL_varz00_bglt BgL_new1106z00_1906;

											{	/* Tools/trace.sch 53 */
												BgL_varz00_bglt BgL_new1105z00_1907;

												BgL_new1105z00_1907 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Tools/trace.sch 53 */
													long BgL_arg1396z00_1908;

													{	/* Tools/trace.sch 53 */
														long BgL_res1759z00_1909;

														BgL_res1759z00_1909 =
															BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
														BgL_arg1396z00_1908 = BgL_res1759z00_1909;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1105z00_1907),
														BgL_arg1396z00_1908);
												}
												BgL_new1106z00_1906 = BgL_new1105z00_1907;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1106z00_1906)))->
													BgL_locz00) =
												((obj_t) (((BgL_nodez00_bglt)
															COBJECT(BgL_czd2funzd2_1901))->BgL_locz00)),
												BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1106z00_1906)))->BgL_typez00) =
												((BgL_typez00_bglt) ((BgL_typez00_bglt)
														BGl_za2procedureza2z00zztype_cachez00)), BUNSPEC);
											((((BgL_varz00_bglt) COBJECT(BgL_new1106z00_1906))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
														BgL_funz00_1904)), BUNSPEC);
											BgL_arg1394z00_1905 = BgL_new1106z00_1906;
										}
										((((BgL_appzd2lyzd2_bglt) COBJECT(
														((BgL_appzd2lyzd2_bglt) BgL_nodez00_1871)))->
												BgL_funz00) =
											((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
													BgL_arg1394z00_1905)), BUNSPEC);
									}
									{	/* Tools/trace.sch 53 */
										BgL_letzd2varzd2_bglt BgL_new1108z00_1910;

										{	/* Tools/trace.sch 53 */
											BgL_letzd2varzd2_bglt BgL_new1107z00_1911;

											BgL_new1107z00_1911 =
												((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_letzd2varzd2_bgl))));
											{	/* Tools/trace.sch 53 */
												long BgL_arg1421z00_1912;

												{	/* Tools/trace.sch 53 */
													long BgL_res1760z00_1913;

													BgL_res1760z00_1913 =
														BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
													BgL_arg1421z00_1912 = BgL_res1760z00_1913;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1107z00_1911),
													BgL_arg1421z00_1912);
											}
											{	/* Tools/trace.sch 53 */
												BgL_objectz00_bglt BgL_tmpz00_2136;

												BgL_tmpz00_2136 =
													((BgL_objectz00_bglt) BgL_new1107z00_1911);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2136, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1107z00_1911);
											BgL_new1108z00_1910 = BgL_new1107z00_1911;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1108z00_1910)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt)
														COBJECT(((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt)
																	BgL_nodez00_1871))))->BgL_locz00)), BUNSPEC);
										{
											BgL_typez00_bglt BgL_auxz00_2145;

											{	/* Tools/trace.sch 53 */
												BgL_typez00_bglt BgL_arg1417z00_1914;

												BgL_arg1417z00_1914 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_appzd2lyzd2_bglt) BgL_nodez00_1871))))->
													BgL_typez00);
												BgL_auxz00_2145 =
													BGl_strictzd2nodezd2typez00zzast_nodez00((
														(BgL_typez00_bglt) BgL_toz00_1873),
													BgL_arg1417z00_1914);
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1108z00_1910)))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_auxz00_2145), BUNSPEC);
										}
										((((BgL_nodezf2effectzf2_bglt) COBJECT(
														((BgL_nodezf2effectzf2_bglt)
															BgL_new1108z00_1910)))->BgL_sidezd2effectzd2) =
											((obj_t) BUNSPEC), BUNSPEC);
										((((BgL_nodezf2effectzf2_bglt)
													COBJECT(((BgL_nodezf2effectzf2_bglt)
															BgL_new1108z00_1910)))->BgL_keyz00) =
											((obj_t) BINT(((long) -1))), BUNSPEC);
										{
											obj_t BgL_auxz00_2158;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_arg1418z00_1915;

												BgL_arg1418z00_1915 =
													MAKE_YOUNG_PAIR(
													((obj_t) BgL_funz00_1904),
													((obj_t) BgL_czd2funzd2_1901));
												{	/* Tools/trace.sch 53 */
													obj_t BgL_list1419z00_1916;

													BgL_list1419z00_1916 =
														MAKE_YOUNG_PAIR(BgL_arg1418z00_1915, BNIL);
													BgL_auxz00_2158 = BgL_list1419z00_1916;
											}}
											((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1108z00_1910))->
													BgL_bindingsz00) =
												((obj_t) BgL_auxz00_2158), BUNSPEC);
										}
										((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1108z00_1910))->
												BgL_bodyz00) =
											((BgL_nodez00_bglt)
												BGl_convertz12z12zzcoerce_convertz00(((BgL_nodez00_bglt)
														((BgL_appzd2lyzd2_bglt) BgL_nodez00_1871)),
													((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00),
													((BgL_typez00_bglt) BgL_toz00_1873),
													CBOOL(BgL_safez00_1874))), BUNSPEC);
										((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1108z00_1910))->
												BgL_removablezf3zf3) =
											((bool_t) ((bool_t) 1)), BUNSPEC);
										return ((BgL_nodez00_bglt) BgL_new1108z00_1910);
									}
								}
						}
					else
						{	/* Tools/trace.sch 53 */
							BgL_localz00_bglt BgL_funz00_1917;

							BgL_funz00_1917 =
								BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF(((long)
										9)),
								((BgL_typez00_bglt) BGl_za2procedureza2z00zztype_cachez00));
							{	/* Tools/trace.sch 53 */
								BgL_localz00_bglt BgL_valz00_1918;

								BgL_valz00_1918 =
									BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
											(long) 10)),
									((BgL_typez00_bglt) BGl_za2pairzd2nilza2zd2zztype_cachez00));
								{	/* Tools/trace.sch 53 */
									obj_t BgL_locz00_1919;

									BgL_locz00_1919 =
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_appzd2lyzd2_bglt) BgL_nodez00_1871))))->
										BgL_locz00);
									{	/* Tools/trace.sch 53 */
										BgL_nodez00_bglt BgL_lvalz00_1920;

										{	/* Tools/trace.sch 53 */
											BgL_nodez00_bglt BgL_arg1589z00_1921;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_arg1592z00_1922;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_arg1593z00_1923;

													BgL_arg1593z00_1923 =
														MAKE_YOUNG_PAIR(((obj_t) BgL_valz00_1918), BNIL);
													BgL_arg1592z00_1922 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
														BgL_arg1593z00_1923);
												}
												BgL_arg1589z00_1921 =
													BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg1592z00_1922, BgL_locz00_1919);
											}
											BgL_lvalz00_1920 =
												BGl_lvtypezd2nodezd2zzast_lvtypez00
												(BgL_arg1589z00_1921);
										}
										{	/* Tools/trace.sch 53 */
											obj_t BgL_lenz00_1924;

											BgL_lenz00_1924 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 12)));
											{	/* Tools/trace.sch 53 */
												BgL_nodez00_bglt BgL_bodyz00_1925;

												{	/* Tools/trace.sch 53 */
													BgL_nodez00_bglt BgL_arg1489z00_1926;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg1493z00_1927;

														{	/* Tools/trace.sch 53 */
															obj_t BgL_arg1495z00_1928;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_arg1497z00_1929;
																obj_t BgL_arg1518z00_1930;

																{	/* Tools/trace.sch 53 */
																	obj_t BgL_arg1521z00_1931;

																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_arg1528z00_1932;
																		obj_t BgL_arg1536z00_1933;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1537z00_1934;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1540z00_1935;
																				obj_t BgL_arg1552z00_1936;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_res1762z00_1937;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1466z00_1938;

																						BgL_arg1466z00_1938 =
																							SYMBOL_TO_STRING(BgL_lenz00_1924);
																						BgL_res1762z00_1937 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg1466z00_1938);
																					}
																					BgL_arg1540z00_1935 =
																						BgL_res1762z00_1937;
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_res1763z00_1939;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_symbolz00_1940;

																						BgL_symbolz00_1940 =
																							CNST_TABLE_REF(((long) 13));
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1466z00_1941;

																							BgL_arg1466z00_1941 =
																								SYMBOL_TO_STRING
																								(BgL_symbolz00_1940);
																							BgL_res1763z00_1939 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1941);
																					}}
																					BgL_arg1552z00_1936 =
																						BgL_res1763z00_1939;
																				}
																				BgL_arg1537z00_1934 =
																					string_append(BgL_arg1540z00_1935,
																					BgL_arg1552z00_1936);
																			}
																			BgL_arg1528z00_1932 =
																				bstring_to_symbol(BgL_arg1537z00_1934);
																		}
																		{	/* Tools/trace.sch 53 */
																			BgL_nodez00_bglt BgL_arg1558z00_1942;

																			BgL_arg1558z00_1942 =
																				BGl_coercez12z12zzcoerce_coercez00
																				(BgL_lvalz00_1920, BgL_callerz00_1872,
																				((BgL_typez00_bglt)
																					BGl_za2intza2z00zztype_cachez00),
																				CBOOL(BgL_safez00_1874));
																			BgL_arg1536z00_1933 =
																				MAKE_YOUNG_PAIR(((obj_t)
																					BgL_arg1558z00_1942), BNIL);
																		}
																		BgL_arg1521z00_1931 =
																			MAKE_YOUNG_PAIR(BgL_arg1528z00_1932,
																			BgL_arg1536z00_1933);
																	}
																	BgL_arg1497z00_1929 =
																		MAKE_YOUNG_PAIR(BgL_arg1521z00_1931, BNIL);
																}
																{	/* Tools/trace.sch 53 */
																	obj_t BgL_arg1561z00_1943;

																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_arg1564z00_1944;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1565z00_1945;
																			obj_t BgL_arg1573z00_1946;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1575z00_1947;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1578z00_1948;

																					BgL_arg1578z00_1948 =
																						MAKE_YOUNG_PAIR(BgL_lenz00_1924,
																						BNIL);
																					BgL_arg1575z00_1947 =
																						MAKE_YOUNG_PAIR(((obj_t)
																							BgL_funz00_1917),
																						BgL_arg1578z00_1948);
																				}
																				BgL_arg1565z00_1945 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							14)), BgL_arg1575z00_1947);
																			}
																			{	/* Tools/trace.sch 53 */
																				BgL_nodez00_bglt BgL_arg1582z00_1949;
																				obj_t BgL_arg1584z00_1950;

																				BgL_arg1582z00_1949 =
																					BGl_convertz12z12zzcoerce_convertz00(
																					((BgL_nodez00_bglt)
																						((BgL_appzd2lyzd2_bglt)
																							BgL_nodez00_1871)),
																					((BgL_typez00_bglt)
																						BGl_za2objza2z00zztype_cachez00),
																					((BgL_typez00_bglt) BgL_toz00_1873),
																					CBOOL(BgL_safez00_1874));
																				{	/* Tools/trace.sch 53 */
																					BgL_nodez00_bglt BgL_arg1588z00_1951;

																					BgL_arg1588z00_1951 =
																						BGl_makezd2errorzd2nodez00zzcoerce_applyz00
																						(BgL_errorzd2msgzd2_1895,
																						BgL_locz00_1919, BgL_callerz00_1872,
																						BgL_toz00_1873);
																					BgL_arg1584z00_1950 =
																						MAKE_YOUNG_PAIR(((obj_t)
																							BgL_arg1588z00_1951), BNIL);
																				}
																				BgL_arg1573z00_1946 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_arg1582z00_1949),
																					BgL_arg1584z00_1950);
																			}
																			BgL_arg1564z00_1944 =
																				MAKE_YOUNG_PAIR(BgL_arg1565z00_1945,
																				BgL_arg1573z00_1946);
																		}
																		BgL_arg1561z00_1943 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					15)), BgL_arg1564z00_1944);
																	}
																	BgL_arg1518z00_1930 =
																		MAKE_YOUNG_PAIR(BgL_arg1561z00_1943, BNIL);
																}
																BgL_arg1495z00_1928 =
																	MAKE_YOUNG_PAIR(BgL_arg1497z00_1929,
																	BgL_arg1518z00_1930);
															}
															BgL_arg1493z00_1927 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
																BgL_arg1495z00_1928);
														}
														BgL_arg1489z00_1926 =
															BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
															(BgL_arg1493z00_1927, BgL_locz00_1919);
													}
													BgL_bodyz00_1925 =
														BGl_lvtypezd2nodezd2zzast_lvtypez00
														(BgL_arg1489z00_1926);
												}
												{	/* Tools/trace.sch 53 */
													BgL_letzd2varzd2_bglt BgL_lnodez00_1952;

													{	/* Tools/trace.sch 53 */
														BgL_letzd2varzd2_bglt BgL_new1110z00_1953;

														{	/* Tools/trace.sch 53 */
															BgL_letzd2varzd2_bglt BgL_new1109z00_1954;

															BgL_new1109z00_1954 =
																((BgL_letzd2varzd2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_letzd2varzd2_bgl))));
															{	/* Tools/trace.sch 53 */
																long BgL_arg1477z00_1955;

																{	/* Tools/trace.sch 53 */
																	long BgL_res1765z00_1956;

																	BgL_res1765z00_1956 =
																		BGL_CLASS_INDEX
																		(BGl_letzd2varzd2zzast_nodez00);
																	BgL_arg1477z00_1955 = BgL_res1765z00_1956;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1109z00_1954),
																	BgL_arg1477z00_1955);
															}
															{	/* Tools/trace.sch 53 */
																BgL_objectz00_bglt BgL_tmpz00_2233;

																BgL_tmpz00_2233 =
																	((BgL_objectz00_bglt) BgL_new1109z00_1954);
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2233,
																	BFALSE);
															}
															((BgL_objectz00_bglt) BgL_new1109z00_1954);
															BgL_new1110z00_1953 = BgL_new1109z00_1954;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1110z00_1953)))->
																BgL_locz00) =
															((obj_t) BgL_locz00_1919), BUNSPEC);
														{
															BgL_typez00_bglt BgL_auxz00_2239;

															{	/* Tools/trace.sch 53 */
																BgL_typez00_bglt BgL_arg1461z00_1957;

																BgL_arg1461z00_1957 =
																	(((BgL_nodez00_bglt)
																		COBJECT(BgL_bodyz00_1925))->BgL_typez00);
																BgL_auxz00_2239 =
																	BGl_strictzd2nodezd2typez00zzast_nodez00
																	(BgL_arg1461z00_1957,
																	((BgL_typez00_bglt)
																		BGl_za2objza2z00zztype_cachez00));
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1110z00_1953)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_auxz00_2239), BUNSPEC);
														}
														((((BgL_nodezf2effectzf2_bglt) COBJECT(
																		((BgL_nodezf2effectzf2_bglt)
																			BgL_new1110z00_1953)))->
																BgL_sidezd2effectzd2) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_nodezf2effectzf2_bglt)
																	COBJECT(((BgL_nodezf2effectzf2_bglt)
																			BgL_new1110z00_1953)))->BgL_keyz00) =
															((obj_t) BINT(((long) -1))), BUNSPEC);
														{
															obj_t BgL_auxz00_2250;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_arg1462z00_1958;
																obj_t BgL_arg1464z00_1959;

																BgL_arg1462z00_1958 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_funz00_1917),
																	((obj_t) BgL_czd2funzd2_1901));
																{	/* Tools/trace.sch 53 */
																	BgL_nodez00_bglt BgL_arg1476z00_1960;

																	BgL_arg1476z00_1960 =
																		(((BgL_appzd2lyzd2_bglt) COBJECT(
																				((BgL_appzd2lyzd2_bglt)
																					BgL_nodez00_1871)))->BgL_argz00);
																	BgL_arg1464z00_1959 =
																		MAKE_YOUNG_PAIR(((obj_t) BgL_valz00_1918),
																		((obj_t) BgL_arg1476z00_1960));
																}
																{	/* Tools/trace.sch 53 */
																	obj_t BgL_list1465z00_1961;

																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_arg1474z00_1962;

																		BgL_arg1474z00_1962 =
																			MAKE_YOUNG_PAIR(BgL_arg1464z00_1959,
																			BNIL);
																		BgL_list1465z00_1961 =
																			MAKE_YOUNG_PAIR(BgL_arg1462z00_1958,
																			BgL_arg1474z00_1962);
																	}
																	BgL_auxz00_2250 = BgL_list1465z00_1961;
															}}
															((((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_new1110z00_1953))->
																	BgL_bindingsz00) =
																((obj_t) BgL_auxz00_2250), BUNSPEC);
														}
														((((BgL_letzd2varzd2_bglt)
																	COBJECT(BgL_new1110z00_1953))->BgL_bodyz00) =
															((BgL_nodez00_bglt) BgL_bodyz00_1925), BUNSPEC);
														((((BgL_letzd2varzd2_bglt)
																	COBJECT(BgL_new1110z00_1953))->
																BgL_removablezf3zf3) =
															((bool_t) ((bool_t) 1)), BUNSPEC);
														BgL_lnodez00_1952 = BgL_new1110z00_1953;
													}
													{	/* Tools/trace.sch 53 */

														{	/* Tools/trace.sch 53 */
															BgL_varz00_bglt BgL_arg1422z00_1963;

															{	/* Tools/trace.sch 53 */
																BgL_varz00_bglt BgL_new1112z00_1964;

																{	/* Tools/trace.sch 53 */
																	BgL_varz00_bglt BgL_new1111z00_1965;

																	BgL_new1111z00_1965 =
																		((BgL_varz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_varz00_bgl))));
																	{	/* Tools/trace.sch 53 */
																		long BgL_arg1441z00_1966;

																		{	/* Tools/trace.sch 53 */
																			long BgL_res1767z00_1967;

																			BgL_res1767z00_1967 =
																				BGL_CLASS_INDEX
																				(BGl_varz00zzast_nodez00);
																			BgL_arg1441z00_1966 = BgL_res1767z00_1967;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1111z00_1965),
																			BgL_arg1441z00_1966);
																	}
																	BgL_new1112z00_1964 = BgL_new1111z00_1965;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1112z00_1964)))->BgL_locz00) =
																	((obj_t) BgL_locz00_1919), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1112z00_1964)))->BgL_typez00) =
																	((BgL_typez00_bglt) ((BgL_typez00_bglt)
																			BGl_za2procedureza2z00zztype_cachez00)),
																	BUNSPEC);
																((((BgL_varz00_bglt)
																			COBJECT(BgL_new1112z00_1964))->
																		BgL_variablez00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt) BgL_funz00_1917)),
																	BUNSPEC);
																BgL_arg1422z00_1963 = BgL_new1112z00_1964;
															}
															((((BgL_appzd2lyzd2_bglt) COBJECT(
																			((BgL_appzd2lyzd2_bglt)
																				BgL_nodez00_1871)))->BgL_funz00) =
																((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																		BgL_arg1422z00_1963)), BUNSPEC);
														}
														{	/* Tools/trace.sch 53 */
															BgL_varz00_bglt BgL_arg1442z00_1968;

															{	/* Tools/trace.sch 53 */
																BgL_varz00_bglt BgL_new1114z00_1969;

																{	/* Tools/trace.sch 53 */
																	BgL_varz00_bglt BgL_new1113z00_1970;

																	BgL_new1113z00_1970 =
																		((BgL_varz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_varz00_bgl))));
																	{	/* Tools/trace.sch 53 */
																		long BgL_arg1449z00_1971;

																		{	/* Tools/trace.sch 53 */
																			long BgL_res1768z00_1972;

																			BgL_res1768z00_1972 =
																				BGL_CLASS_INDEX
																				(BGl_varz00zzast_nodez00);
																			BgL_arg1449z00_1971 = BgL_res1768z00_1972;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1113z00_1970),
																			BgL_arg1449z00_1971);
																	}
																	BgL_new1114z00_1969 = BgL_new1113z00_1970;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1114z00_1969)))->BgL_locz00) =
																	((obj_t) BgL_locz00_1919), BUNSPEC);
																{
																	BgL_typez00_bglt BgL_auxz00_2284;

																	{	/* Tools/trace.sch 53 */
																		BgL_typez00_bglt BgL_arg1448z00_1973;

																		BgL_arg1448z00_1973 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						BgL_valz00_1918)))->BgL_typez00);
																		BgL_auxz00_2284 =
																			BGl_strictzd2nodezd2typez00zzast_nodez00
																			(BgL_arg1448z00_1973,
																			((BgL_typez00_bglt)
																				BGl_za2objza2z00zztype_cachez00));
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1114z00_1969)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_auxz00_2284),
																		BUNSPEC);
																}
																((((BgL_varz00_bglt)
																			COBJECT(BgL_new1114z00_1969))->
																		BgL_variablez00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt) BgL_valz00_1918)),
																	BUNSPEC);
																BgL_arg1442z00_1968 = BgL_new1114z00_1969;
															}
															((((BgL_appzd2lyzd2_bglt) COBJECT(
																			((BgL_appzd2lyzd2_bglt)
																				BgL_nodez00_1871)))->BgL_argz00) =
																((BgL_nodez00_bglt) ((BgL_nodez00_bglt)
																		BgL_arg1442z00_1968)), BUNSPEC);
														}
														return ((BgL_nodez00_bglt) BgL_lnodez00_1952);
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



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_applyz00()
	{
		{	/* Coerce/apply.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 361167230),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
			return
				BGl_modulezd2initializa7ationz75zzcoerce_convertz00(((long) 87995526),
				BSTRING_TO_STRING(BGl_string1776z00zzcoerce_applyz00));
		}

	}

#ifdef __cplusplus
}
#endif
