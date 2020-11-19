/*===========================================================================*/
/*   (Sync/node.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Sync/node.scm) */
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

	typedef struct BgL_sequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_nodesz00;
		bool_t BgL_unsafez00;
		obj_t BgL_metaz00;
	}                  *BgL_sequencez00_bglt;

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

	typedef struct BgL_syncz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_mutexz00;
		struct BgL_nodez00_bgl *BgL_prelockz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}              *BgL_syncz00_bglt;

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


	static obj_t BGl_mpopz00zzsync_nodez00 = BUNSPEC;
	extern obj_t BGl_za2synczd2profilingza2zd2zzengine_paramz00;
	extern BgL_nodez00_bglt BGl_applicationzd2ze3nodez31zzast_appz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzsync_nodez00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_getexitdtopz00zzsync_nodez00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzsync_nodez00();
	static obj_t BGl_exitdzd2mutexzd2profilez00zzsync_nodez00 = BUNSPEC;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_mpushz00zzsync_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_synczd2ze3sequencez31zzsync_nodez00(BgL_syncz00_bglt);
	static obj_t BGl_mulockz00zzsync_nodez00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zzsync_nodez00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_failsafezd2synczf3z21zzsync_failsafez00(BgL_syncz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzsync_nodez00 = BUNSPEC;
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_toplevelzd2initzd2zzsync_nodez00();
	static obj_t BGl_genericzd2initzd2zzsync_nodez00();
	static obj_t BGl_failsafezd2mutexzd2profilez00zzsync_nodez00 = BUNSPEC;
	static obj_t BGl_initzd2syncz12zc0zzsync_nodez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_mlockz00zzsync_nodez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62synczd2ze3sequencez53zzsync_nodez00(obj_t,
		obj_t);
	static obj_t BGl_mlockprelockz00zzsync_nodez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsync_nodez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsync_failsafez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinline_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzsync_nodez00();
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsync_nodez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsync_nodez00();
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	static obj_t __cnst[16];


	   
		 
		DEFINE_STRING(BGl_string1854z00zzsync_nodez00,
		BgL_bgl_string1854za700za7za7s1859za7, "sync_node", 9);
	      DEFINE_STRING(BGl_string1855z00zzsync_nodez00,
		BgL_bgl_string1855za700za7za7s1860za7,
		"top tmp value (@ exitd-pop-protect! __bexit) (@ exitd-push-protect! __bexit) $exitd-pop-protect! $exitd-push-protect! $failsafe-mutex-profile $exitd-mutex-profile c-saw c $mutex-unlock $mutex-lock-prelock $mutex-lock app $get-exitd-top ",
		236);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_synczd2ze3sequencezd2envze3zzsync_nodez00,
		BgL_bgl_za762syncza7d2za7e3seq1861za7,
		BGl_z62synczd2ze3sequencez53zzsync_nodez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_mpopz00zzsync_nodez00));
		     ADD_ROOT((void *) (&BGl_getexitdtopz00zzsync_nodez00));
		     ADD_ROOT((void *) (&BGl_exitdzd2mutexzd2profilez00zzsync_nodez00));
		     ADD_ROOT((void *) (&BGl_mpushz00zzsync_nodez00));
		     ADD_ROOT((void *) (&BGl_mulockz00zzsync_nodez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsync_nodez00));
		     ADD_ROOT((void *) (&BGl_failsafezd2mutexzd2profilez00zzsync_nodez00));
		     ADD_ROOT((void *) (&BGl_mlockz00zzsync_nodez00));
		     ADD_ROOT((void *) (&BGl_mlockprelockz00zzsync_nodez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsync_nodez00(long
		BgL_checksumz00_2190, char *BgL_fromz00_2191)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsync_nodez00))
				{
					BGl_requirezd2initializa7ationz75zzsync_nodez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsync_nodez00();
					BGl_libraryzd2moduleszd2initz00zzsync_nodez00();
					BGl_cnstzd2initzd2zzsync_nodez00();
					BGl_importedzd2moduleszd2initz00zzsync_nodez00();
					return BGl_toplevelzd2initzd2zzsync_nodez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsync_nodez00()
	{
		{	/* Sync/node.scm 18 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "sync_node");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"sync_node");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "sync_node");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"sync_node");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"sync_node");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"sync_node");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "sync_node");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsync_nodez00()
	{
		{	/* Sync/node.scm 18 */
			{	/* Sync/node.scm 18 */
				obj_t BgL_cportz00_2177;

				{	/* Sync/node.scm 18 */
					obj_t BgL_stringz00_2185;

					BgL_stringz00_2185 = BGl_string1855z00zzsync_nodez00;
					{	/* Sync/node.scm 18 */
						obj_t BgL_startz00_2186;

						BgL_startz00_2186 = BINT(((long) 0));
						{	/* Sync/node.scm 18 */
							obj_t BgL_endz00_2187;

							BgL_endz00_2187 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2185)));
							{	/* Sync/node.scm 18 */

								BgL_cportz00_2177 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2185, BgL_startz00_2186, BgL_endz00_2187);
				}}}}
				{
					long BgL_iz00_2178;

					BgL_iz00_2178 = ((long) 15);
				BgL_loopz00_2179:
					if ((BgL_iz00_2178 == ((long) -1)))
						{	/* Sync/node.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Sync/node.scm 18 */
							{	/* Sync/node.scm 18 */
								obj_t BgL_arg1857z00_2181;

								{	/* Sync/node.scm 18 */

									{	/* Sync/node.scm 18 */
										obj_t BgL_locationz00_2183;

										BgL_locationz00_2183 = BBOOL(((bool_t) 0));
										{	/* Sync/node.scm 18 */

											BgL_arg1857z00_2181 =
												BGl_readz00zz__readerz00(BgL_cportz00_2177,
												BgL_locationz00_2183);
										}
									}
								}
								{	/* Sync/node.scm 18 */
									int BgL_tmpz00_2216;

									BgL_tmpz00_2216 = (int) (BgL_iz00_2178);
									CNST_TABLE_SET(BgL_tmpz00_2216, BgL_arg1857z00_2181);
							}}
							{	/* Sync/node.scm 18 */
								int BgL_auxz00_2184;

								BgL_auxz00_2184 = (int) ((BgL_iz00_2178 - ((long) 1)));
								{
									long BgL_iz00_2221;

									BgL_iz00_2221 = (long) (BgL_auxz00_2184);
									BgL_iz00_2178 = BgL_iz00_2221;
									goto BgL_loopz00_2179;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsync_nodez00()
	{
		{	/* Sync/node.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsync_nodez00()
	{
		{	/* Sync/node.scm 18 */
			BGl_mlockz00zzsync_nodez00 = BFALSE;
			BGl_mlockprelockz00zzsync_nodez00 = BFALSE;
			BGl_mulockz00zzsync_nodez00 = BFALSE;
			BGl_mpushz00zzsync_nodez00 = BFALSE;
			BGl_mpopz00zzsync_nodez00 = BFALSE;
			BGl_getexitdtopz00zzsync_nodez00 = BFALSE;
			BGl_exitdzd2mutexzd2profilez00zzsync_nodez00 = BFALSE;
			return (BGl_failsafezd2mutexzd2profilez00zzsync_nodez00 =
				BFALSE, BUNSPEC);
		}

	}



/* init-sync! */
	obj_t BGl_initzd2syncz12zc0zzsync_nodez00(obj_t BgL_locz00_17)
	{
		{	/* Sync/node.scm 61 */
			if (CBOOL(BGl_mlockz00zzsync_nodez00))
				{	/* Sync/node.scm 62 */
					return BFALSE;
				}
			else
				{	/* Sync/node.scm 62 */
					BGl_getexitdtopz00zzsync_nodez00 =
						((obj_t)
						BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long) 0)), BNIL,
							BgL_locz00_17, CNST_TABLE_REF(((long) 1))));
					BGl_mlockz00zzsync_nodez00 =
						((obj_t) BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long)
									2)), BNIL, BgL_locz00_17, CNST_TABLE_REF(((long) 1))));
					BGl_mlockprelockz00zzsync_nodez00 =
						((obj_t) BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long)
									3)), BNIL, BgL_locz00_17, CNST_TABLE_REF(((long) 1))));
					BGl_mulockz00zzsync_nodez00 =
						((obj_t) BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long)
									4)), BNIL, BgL_locz00_17, CNST_TABLE_REF(((long) 1))));
					{	/* Sync/node.scm 67 */
						obj_t BgL_casezd2valuezd2_1698;

						{	/* Sync/node.scm 67 */
							obj_t BgL_arg1346z00_1704;

							BgL_arg1346z00_1704 = BGl_thezd2backendzd2zzbackend_backendz00();
							BgL_casezd2valuezd2_1698 =
								(((BgL_backendz00_bglt) COBJECT(
										((BgL_backendz00_bglt) BgL_arg1346z00_1704)))->
								BgL_languagez00);
						}
						{	/* Sync/node.scm 67 */
							bool_t BgL_test1865z00_2245;

							{	/* Sync/node.scm 67 */
								bool_t BgL__ortest_1109z00_1703;

								BgL__ortest_1109z00_1703 =
									(BgL_casezd2valuezd2_1698 == CNST_TABLE_REF(((long) 5)));
								if (BgL__ortest_1109z00_1703)
									{	/* Sync/node.scm 67 */
										BgL_test1865z00_2245 = BgL__ortest_1109z00_1703;
									}
								else
									{	/* Sync/node.scm 67 */
										BgL_test1865z00_2245 =
											(BgL_casezd2valuezd2_1698 == CNST_TABLE_REF(((long) 6)));
							}}
							if (BgL_test1865z00_2245)
								{	/* Sync/node.scm 67 */
									if (CBOOL(BGl_za2synczd2profilingza2zd2zzengine_paramz00))
										{	/* Sync/node.scm 69 */
											BGl_exitdzd2mutexzd2profilez00zzsync_nodez00 =
												((obj_t)
												BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF((
															(long) 7)), BNIL, BgL_locz00_17,
													CNST_TABLE_REF(((long) 1))));
											BGl_failsafezd2mutexzd2profilez00zzsync_nodez00 =
												((obj_t)
												BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF((
															(long) 8)), BNIL, BgL_locz00_17,
													CNST_TABLE_REF(((long) 1))));
											{	/* Sync/node.scm 74 */
												BgL_variablez00_bglt BgL_arg1344z00_1701;

												{	/* Sync/node.scm 74 */
													BgL_varz00_bglt BgL_oz00_2105;

													BgL_oz00_2105 =
														((BgL_varz00_bglt)
														BGl_exitdzd2mutexzd2profilez00zzsync_nodez00);
													BgL_arg1344z00_1701 =
														(((BgL_varz00_bglt) COBJECT(BgL_oz00_2105))->
														BgL_variablez00);
												}
												BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
													(BgL_arg1344z00_1701);
											}
											{	/* Sync/node.scm 75 */
												BgL_variablez00_bglt BgL_arg1345z00_1702;

												{	/* Sync/node.scm 75 */
													BgL_varz00_bglt BgL_oz00_2106;

													BgL_oz00_2106 =
														((BgL_varz00_bglt)
														BGl_failsafezd2mutexzd2profilez00zzsync_nodez00);
													BgL_arg1345z00_1702 =
														(((BgL_varz00_bglt) COBJECT(BgL_oz00_2106))->
														BgL_variablez00);
												}
												BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
													(BgL_arg1345z00_1702);
										}}
									else
										{	/* Sync/node.scm 69 */
											BFALSE;
										}
									BGl_mpushz00zzsync_nodez00 =
										((obj_t)
										BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long)
													9)), BNIL, BgL_locz00_17,
											CNST_TABLE_REF(((long) 1))));
									BGl_mpopz00zzsync_nodez00 =
										((obj_t)
										BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long)
													10)), BNIL, BgL_locz00_17,
											CNST_TABLE_REF(((long) 1))));
								}
							else
								{	/* Sync/node.scm 67 */
									BGl_mpushz00zzsync_nodez00 =
										((obj_t)
										BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long)
													11)), BNIL, BgL_locz00_17,
											CNST_TABLE_REF(((long) 1))));
									BGl_mpopz00zzsync_nodez00 =
										((obj_t)
										BGl_sexpzd2ze3nodez31zzast_sexpz00(CNST_TABLE_REF(((long)
													12)), BNIL, BgL_locz00_17,
											CNST_TABLE_REF(((long) 1))));
					}}}
					{	/* Sync/node.scm 81 */
						BgL_variablez00_bglt BgL_arg1347z00_1705;

						{	/* Sync/node.scm 81 */
							BgL_varz00_bglt BgL_oz00_2107;

							BgL_oz00_2107 =
								((BgL_varz00_bglt) BGl_getexitdtopz00zzsync_nodez00);
							BgL_arg1347z00_1705 =
								(((BgL_varz00_bglt) COBJECT(BgL_oz00_2107))->BgL_variablez00);
						}
						BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
							(BgL_arg1347z00_1705);
					}
					{	/* Sync/node.scm 82 */
						BgL_variablez00_bglt BgL_arg1348z00_1706;

						{	/* Sync/node.scm 82 */
							BgL_varz00_bglt BgL_oz00_2108;

							BgL_oz00_2108 = ((BgL_varz00_bglt) BGl_mlockz00zzsync_nodez00);
							BgL_arg1348z00_1706 =
								(((BgL_varz00_bglt) COBJECT(BgL_oz00_2108))->BgL_variablez00);
						}
						BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
							(BgL_arg1348z00_1706);
					}
					{	/* Sync/node.scm 83 */
						BgL_variablez00_bglt BgL_arg1351z00_1707;

						{	/* Sync/node.scm 83 */
							BgL_varz00_bglt BgL_oz00_2109;

							BgL_oz00_2109 =
								((BgL_varz00_bglt) BGl_mlockprelockz00zzsync_nodez00);
							BgL_arg1351z00_1707 =
								(((BgL_varz00_bglt) COBJECT(BgL_oz00_2109))->BgL_variablez00);
						}
						BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
							(BgL_arg1351z00_1707);
					}
					{	/* Sync/node.scm 84 */
						BgL_variablez00_bglt BgL_arg1352z00_1708;

						{	/* Sync/node.scm 84 */
							BgL_varz00_bglt BgL_oz00_2110;

							BgL_oz00_2110 = ((BgL_varz00_bglt) BGl_mulockz00zzsync_nodez00);
							BgL_arg1352z00_1708 =
								(((BgL_varz00_bglt) COBJECT(BgL_oz00_2110))->BgL_variablez00);
						}
						BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
							(BgL_arg1352z00_1708);
					}
					{	/* Sync/node.scm 85 */
						BgL_variablez00_bglt BgL_arg1357z00_1709;

						{	/* Sync/node.scm 85 */
							BgL_varz00_bglt BgL_oz00_2111;

							BgL_oz00_2111 = ((BgL_varz00_bglt) BGl_mpushz00zzsync_nodez00);
							BgL_arg1357z00_1709 =
								(((BgL_varz00_bglt) COBJECT(BgL_oz00_2111))->BgL_variablez00);
						}
						BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
							(BgL_arg1357z00_1709);
					}
					{	/* Sync/node.scm 86 */
						BgL_variablez00_bglt BgL_arg1360z00_1710;

						{	/* Sync/node.scm 86 */
							BgL_varz00_bglt BgL_oz00_2112;

							BgL_oz00_2112 = ((BgL_varz00_bglt) BGl_mpopz00zzsync_nodez00);
							BgL_arg1360z00_1710 =
								(((BgL_varz00_bglt) COBJECT(BgL_oz00_2112))->BgL_variablez00);
						}
						return
							BGl_setzd2variablezd2namez12z12zzbackend_cplibz00
							(BgL_arg1360z00_1710);
					}
				}
		}

	}



/* sync->sequence */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_synczd2ze3sequencez31zzsync_nodez00(BgL_syncz00_bglt BgL_nodez00_18)
	{
		{	/* Sync/node.scm 111 */
			{
				BgL_syncz00_bglt BgL_nodez00_1786;
				BgL_syncz00_bglt BgL_nodez00_1740;
				BgL_letzd2varzd2_bglt BgL_nodez00_1731;
				obj_t BgL_locz00_1732;
				BgL_letzd2varzd2_bglt BgL_nodez00_1722;
				obj_t BgL_locz00_1723;

				{	/* Sync/node.scm 191 */
					obj_t BgL_arg1361z00_1717;

					BgL_arg1361z00_1717 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_nodez00_18)))->BgL_locz00);
					BGl_initzd2syncz12zc0zzsync_nodez00(BgL_arg1361z00_1717);
				}
				if (CBOOL(BGl_failsafezd2synczf3z21zzsync_failsafez00(BgL_nodez00_18)))
					{
						BgL_sequencez00_bglt BgL_auxz00_2307;

						BgL_nodez00_1740 = BgL_nodez00_18;
						{	/* Sync/node.scm 130 */
							BgL_localz00_bglt BgL_tmpz00_1743;

							{	/* Sync/node.scm 130 */
								obj_t BgL_arg1537z00_1784;
								BgL_typez00_bglt BgL_arg1540z00_1785;

								BgL_arg1537z00_1784 =
									BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											14)));
								BgL_arg1540z00_1785 =
									(((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_nodez00_1740)))->BgL_typez00);
								BgL_tmpz00_1743 =
									BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg1537z00_1784,
									BgL_arg1540z00_1785);
							}
							{	/* Sync/node.scm 130 */
								BgL_nodez00_bglt BgL_lockz00_1744;

								{	/* Sync/node.scm 131 */
									bool_t BgL_test1869z00_2313;

									{	/* Sync/node.scm 131 */
										BgL_nodez00_bglt BgL_arg1536z00_1783;

										BgL_arg1536z00_1783 =
											(((BgL_syncz00_bglt) COBJECT(BgL_nodez00_1740))->
											BgL_prelockz00);
										{	/* Sync/node.scm 131 */
											bool_t BgL_res1837z00_2117;

											BgL_res1837z00_2117 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1536z00_1783),
												BGl_atomz00zzast_nodez00);
											BgL_test1869z00_2313 = BgL_res1837z00_2117;
									}}
									if (BgL_test1869z00_2313)
										{	/* Sync/node.scm 132 */
											obj_t BgL_arg1474z00_1773;
											obj_t BgL_arg1476z00_1774;

											{	/* Sync/node.scm 132 */
												obj_t BgL_arg1477z00_1775;

												{	/* Sync/node.scm 132 */
													BgL_nodez00_bglt BgL_arg1489z00_1776;

													BgL_arg1489z00_1776 =
														(((BgL_syncz00_bglt) COBJECT(BgL_nodez00_1740))->
														BgL_mutexz00);
													BgL_arg1477z00_1775 =
														MAKE_YOUNG_PAIR(((obj_t) BgL_arg1489z00_1776),
														BNIL);
												}
												BgL_arg1474z00_1773 =
													MAKE_YOUNG_PAIR(BGl_mlockz00zzsync_nodez00,
													BgL_arg1477z00_1775);
											}
											BgL_arg1476z00_1774 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_nodez00_1740)))->
												BgL_locz00);
											BgL_lockz00_1744 =
												BGl_applicationzd2ze3nodez31zzast_appz00
												(BgL_arg1474z00_1773, BNIL, BgL_arg1476z00_1774,
												CNST_TABLE_REF(((long) 13)));
										}
									else
										{	/* Sync/node.scm 133 */
											obj_t BgL_arg1493z00_1777;
											obj_t BgL_arg1495z00_1778;

											{	/* Sync/node.scm 133 */
												obj_t BgL_arg1497z00_1779;

												{	/* Sync/node.scm 133 */
													BgL_nodez00_bglt BgL_arg1518z00_1780;
													obj_t BgL_arg1521z00_1781;

													BgL_arg1518z00_1780 =
														(((BgL_syncz00_bglt) COBJECT(BgL_nodez00_1740))->
														BgL_mutexz00);
													{	/* Sync/node.scm 133 */
														BgL_nodez00_bglt BgL_arg1528z00_1782;

														BgL_arg1528z00_1782 =
															(((BgL_syncz00_bglt) COBJECT(BgL_nodez00_1740))->
															BgL_prelockz00);
														BgL_arg1521z00_1781 =
															MAKE_YOUNG_PAIR(((obj_t) BgL_arg1528z00_1782),
															BNIL);
													}
													BgL_arg1497z00_1779 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg1518z00_1780), BgL_arg1521z00_1781);
												}
												BgL_arg1493z00_1777 =
													MAKE_YOUNG_PAIR(BGl_mlockprelockz00zzsync_nodez00,
													BgL_arg1497z00_1779);
											}
											BgL_arg1495z00_1778 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_nodez00_1740)))->
												BgL_locz00);
											BgL_lockz00_1744 =
												BGl_applicationzd2ze3nodez31zzast_appz00
												(BgL_arg1493z00_1777, BNIL, BgL_arg1495z00_1778,
												CNST_TABLE_REF(((long) 13)));
								}}
								{	/* Sync/node.scm 131 */
									BgL_nodez00_bglt BgL_unlockz00_1745;

									{	/* Sync/node.scm 134 */
										obj_t BgL_arg1448z00_1767;
										obj_t BgL_arg1449z00_1768;

										{	/* Sync/node.scm 134 */
											obj_t BgL_arg1461z00_1769;

											{	/* Sync/node.scm 134 */
												BgL_nodez00_bglt BgL_arg1462z00_1770;

												BgL_arg1462z00_1770 =
													(((BgL_syncz00_bglt) COBJECT(BgL_nodez00_1740))->
													BgL_mutexz00);
												BgL_arg1461z00_1769 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1462z00_1770), BNIL);
											}
											BgL_arg1448z00_1767 =
												MAKE_YOUNG_PAIR(BGl_mulockz00zzsync_nodez00,
												BgL_arg1461z00_1769);
										}
										BgL_arg1449z00_1768 =
											(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt) BgL_nodez00_1740)))->BgL_locz00);
										BgL_unlockz00_1745 =
											BGl_applicationzd2ze3nodez31zzast_appz00
											(BgL_arg1448z00_1767, BNIL, BgL_arg1449z00_1768,
											CNST_TABLE_REF(((long) 13)));
									}
									{	/* Sync/node.scm 134 */
										BgL_varz00_bglt BgL_vrefz00_1746;

										{	/* Sync/node.scm 135 */
											BgL_varz00_bglt BgL_new1112z00_1764;

											{	/* Sync/node.scm 136 */
												BgL_varz00_bglt BgL_new1111z00_1765;

												BgL_new1111z00_1765 =
													((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_varz00_bgl))));
												{	/* Sync/node.scm 136 */
													long BgL_arg1442z00_1766;

													{	/* Sync/node.scm 136 */
														long BgL_res1838z00_2119;

														BgL_res1838z00_2119 =
															BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
														BgL_arg1442z00_1766 = BgL_res1838z00_2119;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1111z00_1765),
														BgL_arg1442z00_1766);
												}
												BgL_new1112z00_1764 = BgL_new1111z00_1765;
											}
											((((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt) BgL_new1112z00_1764)))->
													BgL_locz00) =
												((obj_t) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) BgL_nodez00_1740)))->
														BgL_locz00)), BUNSPEC);
											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_new1112z00_1764)))->BgL_typez00) =
												((BgL_typez00_bglt) (((BgL_nodez00_bglt)
															COBJECT(((BgL_nodez00_bglt) BgL_nodez00_1740)))->
														BgL_typez00)), BUNSPEC);
											((((BgL_varz00_bglt) COBJECT(BgL_new1112z00_1764))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
														BgL_tmpz00_1743)), BUNSPEC);
											BgL_vrefz00_1746 = BgL_new1112z00_1764;
										}
										{	/* Sync/node.scm 135 */
											BgL_letzd2varzd2_bglt BgL_lbodyz00_1747;

											{	/* Sync/node.scm 139 */
												BgL_letzd2varzd2_bglt BgL_new1114z00_1753;

												{	/* Sync/node.scm 140 */
													BgL_letzd2varzd2_bglt BgL_new1113z00_1762;

													BgL_new1113z00_1762 =
														((BgL_letzd2varzd2_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_letzd2varzd2_bgl))));
													{	/* Sync/node.scm 140 */
														long BgL_arg1441z00_1763;

														{	/* Sync/node.scm 140 */
															long BgL_res1839z00_2123;

															BgL_res1839z00_2123 =
																BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
															BgL_arg1441z00_1763 = BgL_res1839z00_2123;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1113z00_1762),
															BgL_arg1441z00_1763);
													}
													{	/* Sync/node.scm 140 */
														BgL_objectz00_bglt BgL_tmpz00_2362;

														BgL_tmpz00_2362 =
															((BgL_objectz00_bglt) BgL_new1113z00_1762);
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2362, BFALSE);
													}
													((BgL_objectz00_bglt) BgL_new1113z00_1762);
													BgL_new1114z00_1753 = BgL_new1113z00_1762;
												}
												((((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_new1114z00_1753)))->
														BgL_locz00) =
													((obj_t) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt)
																		BgL_nodez00_1740)))->BgL_locz00)), BUNSPEC);
												((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																	BgL_new1114z00_1753)))->BgL_typez00) =
													((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt)
																		BgL_nodez00_1740)))->BgL_typez00)),
													BUNSPEC);
												((((BgL_nodezf2effectzf2_bglt)
															COBJECT(((BgL_nodezf2effectzf2_bglt)
																	BgL_new1114z00_1753)))->
														BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
												((((BgL_nodezf2effectzf2_bglt)
															COBJECT(((BgL_nodezf2effectzf2_bglt)
																	BgL_new1114z00_1753)))->BgL_keyz00) =
													((obj_t) BINT(((long) -1))), BUNSPEC);
												{
													obj_t BgL_auxz00_2379;

													{	/* Sync/node.scm 142 */
														obj_t BgL_arg1396z00_1754;

														{	/* Sync/node.scm 142 */
															BgL_nodez00_bglt BgL_arg1417z00_1756;

															BgL_arg1417z00_1756 =
																(((BgL_syncz00_bglt)
																	COBJECT(BgL_nodez00_1740))->BgL_bodyz00);
															BgL_arg1396z00_1754 =
																MAKE_YOUNG_PAIR(((obj_t) BgL_tmpz00_1743),
																((obj_t) BgL_arg1417z00_1756));
														}
														{	/* Sync/node.scm 142 */
															obj_t BgL_list1397z00_1755;

															BgL_list1397z00_1755 =
																MAKE_YOUNG_PAIR(BgL_arg1396z00_1754, BNIL);
															BgL_auxz00_2379 = BgL_list1397z00_1755;
													}}
													((((BgL_letzd2varzd2_bglt)
																COBJECT(BgL_new1114z00_1753))->
															BgL_bindingsz00) =
														((obj_t) BgL_auxz00_2379), BUNSPEC);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_2386;

													{	/* Sync/node.scm 143 */
														BgL_sequencez00_bglt BgL_new1117z00_1757;

														{	/* Sync/node.scm 144 */
															BgL_sequencez00_bglt BgL_new1116z00_1760;

															BgL_new1116z00_1760 =
																((BgL_sequencez00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_sequencez00_bgl))));
															{	/* Sync/node.scm 144 */
																long BgL_arg1422z00_1761;

																{	/* Sync/node.scm 144 */
																	long BgL_res1841z00_2129;

																	{	/* Sync/node.scm 144 */
																		obj_t BgL_classz00_2128;

																		BgL_classz00_2128 =
																			BGl_sequencez00zzast_nodez00;
																		BgL_res1841z00_2129 =
																			BGL_CLASS_INDEX(BgL_classz00_2128);
																	}
																	BgL_arg1422z00_1761 = BgL_res1841z00_2129;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1116z00_1760),
																	BgL_arg1422z00_1761);
															}
															{	/* Sync/node.scm 144 */
																BgL_objectz00_bglt BgL_tmpz00_2391;

																BgL_tmpz00_2391 =
																	((BgL_objectz00_bglt) BgL_new1116z00_1760);
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2391,
																	BFALSE);
															}
															((BgL_objectz00_bglt) BgL_new1116z00_1760);
															BgL_new1117z00_1757 = BgL_new1116z00_1760;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1117z00_1757)))->
																BgL_locz00) =
															((obj_t) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt)
																				BgL_nodez00_1740)))->BgL_locz00)),
															BUNSPEC);
														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																			BgL_new1117z00_1757)))->BgL_typez00) =
															((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt)
																				BgL_nodez00_1740)))->BgL_typez00)),
															BUNSPEC);
														((((BgL_nodezf2effectzf2_bglt)
																	COBJECT(((BgL_nodezf2effectzf2_bglt)
																			BgL_new1117z00_1757)))->
																BgL_sidezd2effectzd2) =
															((obj_t) BUNSPEC), BUNSPEC);
														((((BgL_nodezf2effectzf2_bglt)
																	COBJECT(((BgL_nodezf2effectzf2_bglt)
																			BgL_new1117z00_1757)))->BgL_keyz00) =
															((obj_t) BINT(((long) -1))), BUNSPEC);
														{
															obj_t BgL_auxz00_2408;

															{	/* Sync/node.scm 146 */
																obj_t BgL_list1418z00_1758;

																{	/* Sync/node.scm 146 */
																	obj_t BgL_arg1421z00_1759;

																	BgL_arg1421z00_1759 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_vrefz00_1746), BNIL);
																	BgL_list1418z00_1758 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_unlockz00_1745),
																		BgL_arg1421z00_1759);
																}
																BgL_auxz00_2408 = BgL_list1418z00_1758;
															}
															((((BgL_sequencez00_bglt)
																		COBJECT(BgL_new1117z00_1757))->
																	BgL_nodesz00) =
																((obj_t) BgL_auxz00_2408), BUNSPEC);
														}
														((((BgL_sequencez00_bglt)
																	COBJECT(BgL_new1117z00_1757))->
																BgL_unsafez00) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
														((((BgL_sequencez00_bglt)
																	COBJECT(BgL_new1117z00_1757))->BgL_metaz00) =
															((obj_t) BNIL), BUNSPEC);
														BgL_auxz00_2386 =
															((BgL_nodez00_bglt) BgL_new1117z00_1757);
													}
													((((BgL_letzd2varzd2_bglt)
																COBJECT(BgL_new1114z00_1753))->BgL_bodyz00) =
														((BgL_nodez00_bglt) BgL_auxz00_2386), BUNSPEC);
												}
												((((BgL_letzd2varzd2_bglt)
															COBJECT(BgL_new1114z00_1753))->
														BgL_removablezf3zf3) =
													((bool_t) ((bool_t) 1)), BUNSPEC);
												BgL_lbodyz00_1747 = BgL_new1114z00_1753;
											}
											{	/* Sync/node.scm 139 */

												{	/* Sync/node.scm 147 */
													BgL_sequencez00_bglt BgL_new1119z00_1748;

													{	/* Sync/node.scm 148 */
														BgL_sequencez00_bglt BgL_new1118z00_1751;

														BgL_new1118z00_1751 =
															((BgL_sequencez00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_sequencez00_bgl))));
														{	/* Sync/node.scm 148 */
															long BgL_arg1394z00_1752;

															{	/* Sync/node.scm 148 */
																long BgL_res1843z00_2135;

																BgL_res1843z00_2135 =
																	BGL_CLASS_INDEX(BGl_sequencez00zzast_nodez00);
																BgL_arg1394z00_1752 = BgL_res1843z00_2135;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1118z00_1751),
																BgL_arg1394z00_1752);
														}
														{	/* Sync/node.scm 148 */
															BgL_objectz00_bglt BgL_tmpz00_2423;

															BgL_tmpz00_2423 =
																((BgL_objectz00_bglt) BgL_new1118z00_1751);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2423, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1118z00_1751);
														BgL_new1119z00_1748 = BgL_new1118z00_1751;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1119z00_1748)))->
															BgL_locz00) =
														((obj_t) (((BgL_nodez00_bglt)
																	COBJECT(((BgL_nodez00_bglt)
																			BgL_nodez00_1740)))->BgL_locz00)),
														BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1119z00_1748)))->BgL_typez00) =
														((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																	COBJECT(((BgL_nodez00_bglt)
																			BgL_nodez00_1740)))->BgL_typez00)),
														BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1119z00_1748)))->
															BgL_sidezd2effectzd2) =
														((obj_t) BUNSPEC), BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1119z00_1748)))->BgL_keyz00) =
														((obj_t) BINT(((long) -1))), BUNSPEC);
													{
														obj_t BgL_auxz00_2440;

														{	/* Sync/node.scm 150 */
															obj_t BgL_arg1387z00_1749;

															{	/* Sync/node.scm 150 */
																obj_t BgL_arg1388z00_1750;

																BgL_arg1388z00_1750 =
																	(((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt) BgL_nodez00_1740)))->
																	BgL_locz00);
																BgL_nodez00_1731 = BgL_lbodyz00_1747;
																BgL_locz00_1732 = BgL_arg1388z00_1750;
																if (CBOOL
																	(BGl_failsafezd2mutexzd2profilez00zzsync_nodez00))
																	{	/* Sync/node.scm 123 */
																		BgL_nodez00_bglt BgL_arg1381z00_1735;

																		{	/* Sync/node.scm 123 */
																			obj_t BgL_arg1384z00_1738;

																			BgL_arg1384z00_1738 =
																				MAKE_YOUNG_PAIR
																				(BGl_failsafezd2mutexzd2profilez00zzsync_nodez00,
																				BNIL);
																			BgL_arg1381z00_1735 =
																				BGl_applicationzd2ze3nodez31zzast_appz00
																				(BgL_arg1384z00_1738, BNIL,
																				BgL_locz00_1732,
																				CNST_TABLE_REF(((long) 13)));
																		}
																		{	/* Sync/node.scm 123 */
																			obj_t BgL_list1382z00_1736;

																			{	/* Sync/node.scm 123 */
																				obj_t BgL_arg1383z00_1737;

																				BgL_arg1383z00_1737 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_nodez00_1731), BNIL);
																				BgL_list1382z00_1736 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_arg1381z00_1735),
																					BgL_arg1383z00_1737);
																			}
																			BgL_arg1387z00_1749 =
																				BgL_list1382z00_1736;
																	}}
																else
																	{	/* Sync/node.scm 124 */
																		obj_t BgL_list1385z00_1739;

																		BgL_list1385z00_1739 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_nodez00_1731), BNIL);
																		BgL_arg1387z00_1749 = BgL_list1385z00_1739;
																	}
															}
															BgL_auxz00_2440 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_lockz00_1744),
																BgL_arg1387z00_1749);
														}
														((((BgL_sequencez00_bglt)
																	COBJECT(BgL_new1119z00_1748))->BgL_nodesz00) =
															((obj_t) BgL_auxz00_2440), BUNSPEC);
													}
													((((BgL_sequencez00_bglt)
																COBJECT(BgL_new1119z00_1748))->BgL_unsafez00) =
														((bool_t) ((bool_t) 0)), BUNSPEC);
													((((BgL_sequencez00_bglt)
																COBJECT(BgL_new1119z00_1748))->BgL_metaz00) =
														((obj_t) BNIL), BUNSPEC);
													BgL_auxz00_2307 = BgL_new1119z00_1748;
												}
											}
										}
									}
								}
							}
						}
						return ((BgL_nodez00_bglt) BgL_auxz00_2307);
					}
				else
					{
						BgL_letzd2varzd2_bglt BgL_auxz00_2460;

						BgL_nodez00_1786 = BgL_nodez00_18;
						{	/* Sync/node.scm 156 */
							BgL_localz00_bglt BgL_tmpz00_1789;

							{	/* Sync/node.scm 156 */
								obj_t BgL_arg1687z00_1856;
								BgL_typez00_bglt BgL_arg1688z00_1857;

								BgL_arg1687z00_1856 =
									BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											14)));
								BgL_arg1688z00_1857 =
									(((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
												BgL_nodez00_1786)))->BgL_typez00);
								BgL_tmpz00_1789 =
									BGl_makezd2localzd2svarz00zzast_localz00(BgL_arg1687z00_1856,
									BgL_arg1688z00_1857);
							}
							{	/* Sync/node.scm 156 */
								BgL_localz00_bglt BgL_topz00_1790;

								{	/* Sync/node.scm 157 */
									obj_t BgL_arg1686z00_1855;

									BgL_arg1686z00_1855 =
										BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												15)));
									BgL_topz00_1790 =
										BGl_makezd2localzd2svarz00zzast_localz00
										(BgL_arg1686z00_1855,
										((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
								}
								{	/* Sync/node.scm 157 */
									BgL_varz00_bglt BgL_toprefz00_1791;

									{	/* Sync/node.scm 158 */
										BgL_varz00_bglt BgL_new1122z00_1852;

										{	/* Sync/node.scm 159 */
											BgL_varz00_bglt BgL_new1121z00_1853;

											BgL_new1121z00_1853 =
												((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_varz00_bgl))));
											{	/* Sync/node.scm 159 */
												long BgL_arg1685z00_1854;

												{	/* Sync/node.scm 159 */
													long BgL_res1844z00_2140;

													BgL_res1844z00_2140 =
														BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
													BgL_arg1685z00_1854 = BgL_res1844z00_2140;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1121z00_1853),
													BgL_arg1685z00_1854);
											}
											BgL_new1122z00_1852 = BgL_new1121z00_1853;
										}
										((((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_new1122z00_1852)))->
												BgL_locz00) =
											((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_nodez00_1786)))->BgL_locz00)), BUNSPEC);
										((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
															BgL_new1122z00_1852)))->BgL_typez00) =
											((BgL_typez00_bglt) ((BgL_typez00_bglt)
													BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
										((((BgL_varz00_bglt) COBJECT(BgL_new1122z00_1852))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
													BgL_topz00_1790)), BUNSPEC);
										BgL_toprefz00_1791 = BgL_new1122z00_1852;
									}
									{	/* Sync/node.scm 158 */
										BgL_nodez00_bglt BgL_gettopz00_1792;

										{	/* Sync/node.scm 162 */
											obj_t BgL_arg1672z00_1850;
											obj_t BgL_arg1684z00_1851;

											BgL_arg1672z00_1850 =
												MAKE_YOUNG_PAIR(BGl_getexitdtopz00zzsync_nodez00, BNIL);
											BgL_arg1684z00_1851 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_nodez00_1786)))->
												BgL_locz00);
											BgL_gettopz00_1792 =
												BGl_applicationzd2ze3nodez31zzast_appz00
												(BgL_arg1672z00_1850, BNIL, BgL_arg1684z00_1851,
												CNST_TABLE_REF(((long) 13)));
										}
										{	/* Sync/node.scm 162 */
											BgL_nodez00_bglt BgL_lockz00_1793;

											{	/* Sync/node.scm 163 */
												bool_t BgL_test1871z00_2488;

												{	/* Sync/node.scm 163 */
													BgL_nodez00_bglt BgL_arg1669z00_1849;

													BgL_arg1669z00_1849 =
														(((BgL_syncz00_bglt) COBJECT(BgL_nodez00_1786))->
														BgL_prelockz00);
													{	/* Sync/node.scm 163 */
														bool_t BgL_res1845z00_2143;

														BgL_res1845z00_2143 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_arg1669z00_1849),
															BGl_atomz00zzast_nodez00);
														BgL_test1871z00_2488 = BgL_res1845z00_2143;
												}}
												if (BgL_test1871z00_2488)
													{	/* Sync/node.scm 164 */
														obj_t BgL_arg1634z00_1839;
														obj_t BgL_arg1639z00_1840;

														{	/* Sync/node.scm 164 */
															obj_t BgL_arg1640z00_1841;

															{	/* Sync/node.scm 164 */
																BgL_nodez00_bglt BgL_arg1641z00_1842;

																BgL_arg1641z00_1842 =
																	(((BgL_syncz00_bglt)
																		COBJECT(BgL_nodez00_1786))->BgL_mutexz00);
																BgL_arg1640z00_1841 =
																	MAKE_YOUNG_PAIR(((obj_t) BgL_arg1641z00_1842),
																	BNIL);
															}
															BgL_arg1634z00_1839 =
																MAKE_YOUNG_PAIR(BGl_mlockz00zzsync_nodez00,
																BgL_arg1640z00_1841);
														}
														BgL_arg1639z00_1840 =
															(((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_nodez00_1786)))->
															BgL_locz00);
														BgL_lockz00_1793 =
															BGl_applicationzd2ze3nodez31zzast_appz00
															(BgL_arg1634z00_1839, BNIL, BgL_arg1639z00_1840,
															CNST_TABLE_REF(((long) 13)));
													}
												else
													{	/* Sync/node.scm 165 */
														obj_t BgL_arg1644z00_1843;
														obj_t BgL_arg1652z00_1844;

														{	/* Sync/node.scm 165 */
															obj_t BgL_arg1662z00_1845;

															{	/* Sync/node.scm 165 */
																BgL_nodez00_bglt BgL_arg1663z00_1846;
																obj_t BgL_arg1664z00_1847;

																BgL_arg1663z00_1846 =
																	(((BgL_syncz00_bglt)
																		COBJECT(BgL_nodez00_1786))->BgL_mutexz00);
																{	/* Sync/node.scm 165 */
																	BgL_nodez00_bglt BgL_arg1667z00_1848;

																	BgL_arg1667z00_1848 =
																		(((BgL_syncz00_bglt)
																			COBJECT(BgL_nodez00_1786))->
																		BgL_prelockz00);
																	BgL_arg1664z00_1847 =
																		MAKE_YOUNG_PAIR(((obj_t)
																			BgL_arg1667z00_1848), BNIL);
																}
																BgL_arg1662z00_1845 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg1663z00_1846),
																	BgL_arg1664z00_1847);
															}
															BgL_arg1644z00_1843 =
																MAKE_YOUNG_PAIR
																(BGl_mlockprelockz00zzsync_nodez00,
																BgL_arg1662z00_1845);
														}
														BgL_arg1652z00_1844 =
															(((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_nodez00_1786)))->
															BgL_locz00);
														BgL_lockz00_1793 =
															BGl_applicationzd2ze3nodez31zzast_appz00
															(BgL_arg1644z00_1843, BNIL, BgL_arg1652z00_1844,
															CNST_TABLE_REF(((long) 13)));
											}}
											{	/* Sync/node.scm 163 */
												BgL_nodez00_bglt BgL_pushz00_1794;

												{	/* Sync/node.scm 166 */
													obj_t BgL_arg1612z00_1832;
													obj_t BgL_arg1613z00_1833;

													{	/* Sync/node.scm 166 */
														obj_t BgL_arg1624z00_1834;

														{	/* Sync/node.scm 166 */
															obj_t BgL_arg1626z00_1835;

															{	/* Sync/node.scm 166 */
																BgL_nodez00_bglt BgL_arg1627z00_1836;

																BgL_arg1627z00_1836 =
																	(((BgL_syncz00_bglt)
																		COBJECT(BgL_nodez00_1786))->BgL_mutexz00);
																BgL_arg1626z00_1835 =
																	MAKE_YOUNG_PAIR(((obj_t) BgL_arg1627z00_1836),
																	BNIL);
															}
															BgL_arg1624z00_1834 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_toprefz00_1791),
																BgL_arg1626z00_1835);
														}
														BgL_arg1612z00_1832 =
															MAKE_YOUNG_PAIR(BGl_mpushz00zzsync_nodez00,
															BgL_arg1624z00_1834);
													}
													BgL_arg1613z00_1833 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt) BgL_nodez00_1786)))->
														BgL_locz00);
													BgL_pushz00_1794 =
														BGl_applicationzd2ze3nodez31zzast_appz00
														(BgL_arg1612z00_1832, BNIL, BgL_arg1613z00_1833,
														CNST_TABLE_REF(((long) 13)));
												}
												{	/* Sync/node.scm 166 */
													BgL_nodez00_bglt BgL_popz00_1795;

													{	/* Sync/node.scm 167 */
														obj_t BgL_arg1605z00_1829;
														obj_t BgL_arg1606z00_1830;

														{	/* Sync/node.scm 167 */
															obj_t BgL_arg1611z00_1831;

															BgL_arg1611z00_1831 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_toprefz00_1791), BNIL);
															BgL_arg1605z00_1829 =
																MAKE_YOUNG_PAIR(BGl_mpopz00zzsync_nodez00,
																BgL_arg1611z00_1831);
														}
														BgL_arg1606z00_1830 =
															(((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_nodez00_1786)))->
															BgL_locz00);
														BgL_popz00_1795 =
															BGl_applicationzd2ze3nodez31zzast_appz00
															(BgL_arg1605z00_1829, BNIL, BgL_arg1606z00_1830,
															CNST_TABLE_REF(((long) 13)));
													}
													{	/* Sync/node.scm 167 */
														BgL_nodez00_bglt BgL_unlockz00_1796;

														{	/* Sync/node.scm 168 */
															obj_t BgL_arg1593z00_1825;
															obj_t BgL_arg1597z00_1826;

															{	/* Sync/node.scm 168 */
																obj_t BgL_arg1599z00_1827;

																{	/* Sync/node.scm 168 */
																	BgL_nodez00_bglt BgL_arg1604z00_1828;

																	BgL_arg1604z00_1828 =
																		(((BgL_syncz00_bglt)
																			COBJECT(BgL_nodez00_1786))->BgL_mutexz00);
																	BgL_arg1599z00_1827 =
																		MAKE_YOUNG_PAIR(((obj_t)
																			BgL_arg1604z00_1828), BNIL);
																}
																BgL_arg1593z00_1825 =
																	MAKE_YOUNG_PAIR(BGl_mulockz00zzsync_nodez00,
																	BgL_arg1599z00_1827);
															}
															BgL_arg1597z00_1826 =
																(((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_nodez00_1786)))->
																BgL_locz00);
															BgL_unlockz00_1796 =
																BGl_applicationzd2ze3nodez31zzast_appz00
																(BgL_arg1593z00_1825, BNIL, BgL_arg1597z00_1826,
																CNST_TABLE_REF(((long) 13)));
														}
														{	/* Sync/node.scm 168 */
															BgL_varz00_bglt BgL_vrefz00_1797;

															{	/* Sync/node.scm 169 */
																BgL_varz00_bglt BgL_new1125z00_1822;

																{	/* Sync/node.scm 170 */
																	BgL_varz00_bglt BgL_new1123z00_1823;

																	BgL_new1123z00_1823 =
																		((BgL_varz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_varz00_bgl))));
																	{	/* Sync/node.scm 170 */
																		long BgL_arg1592z00_1824;

																		{	/* Sync/node.scm 170 */
																			long BgL_res1846z00_2145;

																			BgL_res1846z00_2145 =
																				BGL_CLASS_INDEX
																				(BGl_varz00zzast_nodez00);
																			BgL_arg1592z00_1824 = BgL_res1846z00_2145;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1123z00_1823),
																			BgL_arg1592z00_1824);
																	}
																	BgL_new1125z00_1822 = BgL_new1123z00_1823;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1125z00_1822)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_nodez00_1786)))->BgL_locz00)),
																	BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1125z00_1822)))->BgL_typez00) =
																	((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_nodez00_1786)))->BgL_typez00)),
																	BUNSPEC);
																((((BgL_varz00_bglt)
																			COBJECT(BgL_new1125z00_1822))->
																		BgL_variablez00) =
																	((BgL_variablez00_bglt) (
																			(BgL_variablez00_bglt) BgL_tmpz00_1789)),
																	BUNSPEC);
																BgL_vrefz00_1797 = BgL_new1125z00_1822;
															}
															{	/* Sync/node.scm 169 */
																BgL_letzd2varzd2_bglt BgL_lbodyz00_1798;

																{	/* Sync/node.scm 173 */
																	BgL_letzd2varzd2_bglt BgL_new1128z00_1810;

																	{	/* Sync/node.scm 174 */
																		BgL_letzd2varzd2_bglt BgL_new1126z00_1820;

																		BgL_new1126z00_1820 =
																			((BgL_letzd2varzd2_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_letzd2varzd2_bgl))));
																		{	/* Sync/node.scm 174 */
																			long BgL_arg1589z00_1821;

																			{	/* Sync/node.scm 174 */
																				long BgL_res1847z00_2149;

																				BgL_res1847z00_2149 =
																					BGL_CLASS_INDEX
																					(BGl_letzd2varzd2zzast_nodez00);
																				BgL_arg1589z00_1821 =
																					BgL_res1847z00_2149;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1126z00_1820),
																				BgL_arg1589z00_1821);
																		}
																		{	/* Sync/node.scm 174 */
																			BgL_objectz00_bglt BgL_tmpz00_2554;

																			BgL_tmpz00_2554 =
																				((BgL_objectz00_bglt)
																				BgL_new1126z00_1820);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2554,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1126z00_1820);
																		BgL_new1128z00_1810 = BgL_new1126z00_1820;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1128z00_1810)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_nodez00_1786)))->BgL_locz00)),
																		BUNSPEC);
																	((((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_new1128z00_1810)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_nodez00_1786)))->
																				BgL_typez00)), BUNSPEC);
																	((((BgL_nodezf2effectzf2_bglt)
																				COBJECT(((BgL_nodezf2effectzf2_bglt)
																						BgL_new1128z00_1810)))->
																			BgL_sidezd2effectzd2) =
																		((obj_t) BUNSPEC), BUNSPEC);
																	((((BgL_nodezf2effectzf2_bglt)
																				COBJECT(((BgL_nodezf2effectzf2_bglt)
																						BgL_new1128z00_1810)))->
																			BgL_keyz00) =
																		((obj_t) BINT(((long) -1))), BUNSPEC);
																	{
																		obj_t BgL_auxz00_2571;

																		{	/* Sync/node.scm 176 */
																			obj_t BgL_arg1575z00_1811;

																			{	/* Sync/node.scm 176 */
																				BgL_nodez00_bglt BgL_arg1578z00_1813;

																				BgL_arg1578z00_1813 =
																					(((BgL_syncz00_bglt)
																						COBJECT(BgL_nodez00_1786))->
																					BgL_bodyz00);
																				BgL_arg1575z00_1811 =
																					MAKE_YOUNG_PAIR(((obj_t)
																						BgL_tmpz00_1789),
																					((obj_t) BgL_arg1578z00_1813));
																			}
																			{	/* Sync/node.scm 176 */
																				obj_t BgL_list1576z00_1812;

																				BgL_list1576z00_1812 =
																					MAKE_YOUNG_PAIR(BgL_arg1575z00_1811,
																					BNIL);
																				BgL_auxz00_2571 = BgL_list1576z00_1812;
																		}}
																		((((BgL_letzd2varzd2_bglt)
																					COBJECT(BgL_new1128z00_1810))->
																				BgL_bindingsz00) =
																			((obj_t) BgL_auxz00_2571), BUNSPEC);
																	}
																	{
																		BgL_nodez00_bglt BgL_auxz00_2578;

																		{	/* Sync/node.scm 177 */
																			BgL_sequencez00_bglt BgL_new1131z00_1814;

																			{	/* Sync/node.scm 178 */
																				BgL_sequencez00_bglt
																					BgL_new1130z00_1818;
																				BgL_new1130z00_1818 =
																					((BgL_sequencez00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_sequencez00_bgl))));
																				{	/* Sync/node.scm 178 */
																					long BgL_arg1588z00_1819;

																					{	/* Sync/node.scm 178 */
																						long BgL_res1849z00_2155;

																						{	/* Sync/node.scm 178 */
																							obj_t BgL_classz00_2154;

																							BgL_classz00_2154 =
																								BGl_sequencez00zzast_nodez00;
																							BgL_res1849z00_2155 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_2154);
																						}
																						BgL_arg1588z00_1819 =
																							BgL_res1849z00_2155;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1130z00_1818),
																						BgL_arg1588z00_1819);
																				}
																				{	/* Sync/node.scm 178 */
																					BgL_objectz00_bglt BgL_tmpz00_2583;

																					BgL_tmpz00_2583 =
																						((BgL_objectz00_bglt)
																						BgL_new1130z00_1818);
																					BGL_OBJECT_WIDENING_SET
																						(BgL_tmpz00_2583, BFALSE);
																				}
																				((BgL_objectz00_bglt)
																					BgL_new1130z00_1818);
																				BgL_new1131z00_1814 =
																					BgL_new1130z00_1818;
																			}
																			((((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								BgL_new1131z00_1814)))->
																					BgL_locz00) =
																				((obj_t) (((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt)
																									BgL_nodez00_1786)))->
																						BgL_locz00)), BUNSPEC);
																			((((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_new1131z00_1814)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt)
																									BgL_nodez00_1786)))->
																						BgL_typez00)), BUNSPEC);
																			((((BgL_nodezf2effectzf2_bglt)
																						COBJECT(((BgL_nodezf2effectzf2_bglt)
																								BgL_new1131z00_1814)))->
																					BgL_sidezd2effectzd2) =
																				((obj_t) BUNSPEC), BUNSPEC);
																			((((BgL_nodezf2effectzf2_bglt)
																						COBJECT(((BgL_nodezf2effectzf2_bglt)
																								BgL_new1131z00_1814)))->
																					BgL_keyz00) =
																				((obj_t) BINT(((long) -1))), BUNSPEC);
																			{
																				obj_t BgL_auxz00_2600;

																				{	/* Sync/node.scm 180 */
																					obj_t BgL_list1579z00_1815;

																					{	/* Sync/node.scm 180 */
																						obj_t BgL_arg1582z00_1816;

																						{	/* Sync/node.scm 180 */
																							obj_t BgL_arg1584z00_1817;

																							BgL_arg1584z00_1817 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_vrefz00_1797),
																								BNIL);
																							BgL_arg1582z00_1816 =
																								MAKE_YOUNG_PAIR(((obj_t)
																									BgL_unlockz00_1796),
																								BgL_arg1584z00_1817);
																						}
																						BgL_list1579z00_1815 =
																							MAKE_YOUNG_PAIR(
																							((obj_t) BgL_popz00_1795),
																							BgL_arg1582z00_1816);
																					}
																					BgL_auxz00_2600 =
																						BgL_list1579z00_1815;
																				}
																				((((BgL_sequencez00_bglt)
																							COBJECT(BgL_new1131z00_1814))->
																						BgL_nodesz00) =
																					((obj_t) BgL_auxz00_2600), BUNSPEC);
																			}
																			((((BgL_sequencez00_bglt)
																						COBJECT(BgL_new1131z00_1814))->
																					BgL_unsafez00) =
																				((bool_t) ((bool_t) 0)), BUNSPEC);
																			((((BgL_sequencez00_bglt)
																						COBJECT(BgL_new1131z00_1814))->
																					BgL_metaz00) =
																				((obj_t) BNIL), BUNSPEC);
																			BgL_auxz00_2578 =
																				((BgL_nodez00_bglt)
																				BgL_new1131z00_1814);
																		}
																		((((BgL_letzd2varzd2_bglt)
																					COBJECT(BgL_new1128z00_1810))->
																				BgL_bodyz00) =
																			((BgL_nodez00_bglt) BgL_auxz00_2578),
																			BUNSPEC);
																	}
																	((((BgL_letzd2varzd2_bglt)
																				COBJECT(BgL_new1128z00_1810))->
																			BgL_removablezf3zf3) =
																		((bool_t) ((bool_t) 1)), BUNSPEC);
																	BgL_lbodyz00_1798 = BgL_new1128z00_1810;
																}
																{	/* Sync/node.scm 173 */

																	{	/* Sync/node.scm 181 */
																		BgL_letzd2varzd2_bglt BgL_new1134z00_1799;

																		{	/* Sync/node.scm 182 */
																			BgL_letzd2varzd2_bglt BgL_new1133z00_1808;

																			BgL_new1133z00_1808 =
																				((BgL_letzd2varzd2_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_letzd2varzd2_bgl))));
																			{	/* Sync/node.scm 182 */
																				long BgL_arg1573z00_1809;

																				{	/* Sync/node.scm 182 */
																					long BgL_res1851z00_2161;

																					BgL_res1851z00_2161 =
																						BGL_CLASS_INDEX
																						(BGl_letzd2varzd2zzast_nodez00);
																					BgL_arg1573z00_1809 =
																						BgL_res1851z00_2161;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1133z00_1808),
																					BgL_arg1573z00_1809);
																			}
																			{	/* Sync/node.scm 182 */
																				BgL_objectz00_bglt BgL_tmpz00_2617;

																				BgL_tmpz00_2617 =
																					((BgL_objectz00_bglt)
																					BgL_new1133z00_1808);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2617,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1133z00_1808);
																			BgL_new1134z00_1799 = BgL_new1133z00_1808;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1134z00_1799)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_nodez00_1786)))->
																					BgL_locz00)), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1134z00_1799)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_nodez00_1786)))->
																					BgL_typez00)), BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1134z00_1799)))->
																				BgL_sidezd2effectzd2) =
																			((obj_t) BUNSPEC), BUNSPEC);
																		((((BgL_nodezf2effectzf2_bglt)
																					COBJECT(((BgL_nodezf2effectzf2_bglt)
																							BgL_new1134z00_1799)))->
																				BgL_keyz00) =
																			((obj_t) BINT(((long) -1))), BUNSPEC);
																		{
																			obj_t BgL_auxz00_2634;

																			{	/* Sync/node.scm 184 */
																				obj_t BgL_arg1552z00_1800;

																				BgL_arg1552z00_1800 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_topz00_1790),
																					((obj_t) BgL_gettopz00_1792));
																				{	/* Sync/node.scm 184 */
																					obj_t BgL_list1554z00_1801;

																					BgL_list1554z00_1801 =
																						MAKE_YOUNG_PAIR(BgL_arg1552z00_1800,
																						BNIL);
																					BgL_auxz00_2634 =
																						BgL_list1554z00_1801;
																			}}
																			((((BgL_letzd2varzd2_bglt)
																						COBJECT(BgL_new1134z00_1799))->
																					BgL_bindingsz00) =
																				((obj_t) BgL_auxz00_2634), BUNSPEC);
																		}
																		{
																			BgL_nodez00_bglt BgL_auxz00_2640;

																			{	/* Sync/node.scm 185 */
																				BgL_sequencez00_bglt
																					BgL_new1136z00_1802;
																				{	/* Sync/node.scm 186 */
																					BgL_sequencez00_bglt
																						BgL_new1135z00_1806;
																					BgL_new1135z00_1806 =
																						((BgL_sequencez00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_sequencez00_bgl))));
																					{	/* Sync/node.scm 186 */
																						long BgL_arg1565z00_1807;

																						{	/* Sync/node.scm 186 */
																							long BgL_res1853z00_2167;

																							{	/* Sync/node.scm 186 */
																								obj_t BgL_classz00_2166;

																								BgL_classz00_2166 =
																									BGl_sequencez00zzast_nodez00;
																								BgL_res1853z00_2167 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_2166);
																							}
																							BgL_arg1565z00_1807 =
																								BgL_res1853z00_2167;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1135z00_1806),
																							BgL_arg1565z00_1807);
																					}
																					{	/* Sync/node.scm 186 */
																						BgL_objectz00_bglt BgL_tmpz00_2645;

																						BgL_tmpz00_2645 =
																							((BgL_objectz00_bglt)
																							BgL_new1135z00_1806);
																						BGL_OBJECT_WIDENING_SET
																							(BgL_tmpz00_2645, BFALSE);
																					}
																					((BgL_objectz00_bglt)
																						BgL_new1135z00_1806);
																					BgL_new1136z00_1802 =
																						BgL_new1135z00_1806;
																				}
																				((((BgL_nodez00_bglt) COBJECT(
																								((BgL_nodez00_bglt)
																									BgL_new1136z00_1802)))->
																						BgL_locz00) =
																					((obj_t) (((BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt)
																										BgL_nodez00_1786)))->
																							BgL_locz00)), BUNSPEC);
																				((((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt)
																									BgL_new1136z00_1802)))->
																						BgL_typez00) =
																					((BgL_typez00_bglt) ((
																								(BgL_nodez00_bglt)
																								COBJECT(((BgL_nodez00_bglt)
																										BgL_nodez00_1786)))->
																							BgL_typez00)), BUNSPEC);
																				((((BgL_nodezf2effectzf2_bglt)
																							COBJECT((
																									(BgL_nodezf2effectzf2_bglt)
																									BgL_new1136z00_1802)))->
																						BgL_sidezd2effectzd2) =
																					((obj_t) BUNSPEC), BUNSPEC);
																				((((BgL_nodezf2effectzf2_bglt)
																							COBJECT((
																									(BgL_nodezf2effectzf2_bglt)
																									BgL_new1136z00_1802)))->
																						BgL_keyz00) =
																					((obj_t) BINT(((long) -1))), BUNSPEC);
																				{
																					obj_t BgL_auxz00_2662;

																					{	/* Sync/node.scm 188 */
																						obj_t BgL_arg1558z00_1803;

																						{	/* Sync/node.scm 188 */
																							obj_t BgL_arg1561z00_1804;

																							{	/* Sync/node.scm 188 */
																								obj_t BgL_arg1564z00_1805;

																								BgL_arg1564z00_1805 =
																									(((BgL_nodez00_bglt) COBJECT(
																											((BgL_nodez00_bglt)
																												BgL_nodez00_1786)))->
																									BgL_locz00);
																								BgL_nodez00_1722 =
																									BgL_lbodyz00_1798;
																								BgL_locz00_1723 =
																									BgL_arg1564z00_1805;
																								if (CBOOL
																									(BGl_exitdzd2mutexzd2profilez00zzsync_nodez00))
																									{	/* Sync/node.scm 118 */
																										BgL_nodez00_bglt
																											BgL_arg1367z00_1726;
																										{	/* Sync/node.scm 118 */
																											obj_t BgL_arg1371z00_1729;

																											BgL_arg1371z00_1729 =
																												MAKE_YOUNG_PAIR
																												(BGl_exitdzd2mutexzd2profilez00zzsync_nodez00,
																												BNIL);
																											BgL_arg1367z00_1726 =
																												BGl_applicationzd2ze3nodez31zzast_appz00
																												(BgL_arg1371z00_1729,
																												BNIL, BgL_locz00_1723,
																												CNST_TABLE_REF(((long)
																														13)));
																										}
																										{	/* Sync/node.scm 118 */
																											obj_t
																												BgL_list1368z00_1727;
																											{	/* Sync/node.scm 118 */
																												obj_t
																													BgL_arg1370z00_1728;
																												BgL_arg1370z00_1728 =
																													MAKE_YOUNG_PAIR((
																														(obj_t)
																														BgL_nodez00_1722),
																													BNIL);
																												BgL_list1368z00_1727 =
																													MAKE_YOUNG_PAIR((
																														(obj_t)
																														BgL_arg1367z00_1726),
																													BgL_arg1370z00_1728);
																											}
																											BgL_arg1561z00_1804 =
																												BgL_list1368z00_1727;
																									}}
																								else
																									{	/* Sync/node.scm 119 */
																										obj_t BgL_list1372z00_1730;

																										BgL_list1372z00_1730 =
																											MAKE_YOUNG_PAIR(
																											((obj_t)
																												BgL_nodez00_1722),
																											BNIL);
																										BgL_arg1561z00_1804 =
																											BgL_list1372z00_1730;
																									}
																							}
																							BgL_arg1558z00_1803 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_pushz00_1794),
																								BgL_arg1561z00_1804);
																						}
																						BgL_auxz00_2662 =
																							MAKE_YOUNG_PAIR(
																							((obj_t) BgL_lockz00_1793),
																							BgL_arg1558z00_1803);
																					}
																					((((BgL_sequencez00_bglt)
																								COBJECT(BgL_new1136z00_1802))->
																							BgL_nodesz00) =
																						((obj_t) BgL_auxz00_2662), BUNSPEC);
																				}
																				((((BgL_sequencez00_bglt)
																							COBJECT(BgL_new1136z00_1802))->
																						BgL_unsafez00) =
																					((bool_t) ((bool_t) 0)), BUNSPEC);
																				((((BgL_sequencez00_bglt)
																							COBJECT(BgL_new1136z00_1802))->
																						BgL_metaz00) =
																					((obj_t) BNIL), BUNSPEC);
																				BgL_auxz00_2640 =
																					((BgL_nodez00_bglt)
																					BgL_new1136z00_1802);
																			}
																			((((BgL_letzd2varzd2_bglt)
																						COBJECT(BgL_new1134z00_1799))->
																					BgL_bodyz00) =
																				((BgL_nodez00_bglt) BgL_auxz00_2640),
																				BUNSPEC);
																		}
																		((((BgL_letzd2varzd2_bglt)
																					COBJECT(BgL_new1134z00_1799))->
																				BgL_removablezf3zf3) =
																			((bool_t) ((bool_t) 1)), BUNSPEC);
																		BgL_auxz00_2460 = BgL_new1134z00_1799;
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
						return ((BgL_nodez00_bglt) BgL_auxz00_2460);
					}
			}
		}

	}



/* &sync->sequence */
	BgL_nodez00_bglt BGl_z62synczd2ze3sequencez53zzsync_nodez00(obj_t
		BgL_envz00_2172, obj_t BgL_nodez00_2173)
	{
		{	/* Sync/node.scm 111 */
			return
				BGl_synczd2ze3sequencez31zzsync_nodez00(
				((BgL_syncz00_bglt) BgL_nodez00_2173));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsync_nodez00()
	{
		{	/* Sync/node.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsync_nodez00()
	{
		{	/* Sync/node.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsync_nodez00()
	{
		{	/* Sync/node.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsync_nodez00()
	{
		{	/* Sync/node.scm 18 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzast_appz00(((long) 449859289),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzinline_appz00(((long) 148760837),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 395790731),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
			return
				BGl_modulezd2initializa7ationz75zzsync_failsafez00(((long) 377892139),
				BSTRING_TO_STRING(BGl_string1854z00zzsync_nodez00));
		}

	}

#ifdef __cplusplus
}
#endif
