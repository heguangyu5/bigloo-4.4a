/*===========================================================================*/
/*   (Expand/exit.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/exit.scm) */
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2setzd2exitz62zzexpand_exitz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_exitz00();
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzexpand_exitz00();
	extern obj_t BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
	static obj_t BGl_z62expandzd2bindzd2exitz62zzexpand_exitz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2jumpzd2exitz00zzexpand_exitz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_returnz12ze70zf5zzexpand_exitz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_exitz00();
	BGL_IMPORT int BGl_bigloozd2compilerzd2debugz00zz__paramz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_exitz00 = BUNSPEC;
	static bool_t BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzexpand_exitz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_exitz00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2setzd2exitz00zzexpand_exitz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2bindzd2exitz00zzexpand_exitz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2unwindzd2protectz00zzexpand_exitz00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2withzd2handlerz62zzexpand_exitz00(obj_t, obj_t,
		obj_t);
	static bool_t BGl_tailreczf3ze70z14zzexpand_exitz00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2unwindzd2protectz62zzexpand_exitz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzexpand_exitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2withzd2handlerz00zzexpand_exitz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_exitz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_exitz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_exitz00();
	static obj_t BGl_z62expandzd2jumpzd2exitz62zzexpand_exitz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t __cnst[43];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2setzd2exitzd2envzd2zzexpand_exitz00,
		BgL_bgl_za762expandza7d2setza72347za7,
		BGl_z62expandzd2setzd2exitz62zzexpand_exitz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2336z00zzexpand_exitz00,
		BgL_bgl_string2336za700za7za7e2348za7, "Illegal 'jump-exit' form", 24);
	      DEFINE_STRING(BGl_string2337z00zzexpand_exitz00,
		BgL_bgl_string2337za700za7za7e2349za7, "Illegal `set-exit' form", 23);
	      DEFINE_STRING(BGl_string2338z00zzexpand_exitz00,
		BgL_bgl_string2338za700za7za7e2350za7, "Illegal `bind-exit' form", 24);
	      DEFINE_STRING(BGl_string2339z00zzexpand_exitz00,
		BgL_bgl_string2339za700za7za7e2351za7, "Illegal `unwind-protect' form", 29);
	      DEFINE_STRING(BGl_string2340z00zzexpand_exitz00,
		BgL_bgl_string2340za700za7za7e2352za7, "with-handler@~a:~a", 18);
	      DEFINE_STRING(BGl_string2341z00zzexpand_exitz00,
		BgL_bgl_string2341za700za7za7e2353za7, "Illegal `with-handler' form", 27);
	      DEFINE_STRING(BGl_string2342z00zzexpand_exitz00,
		BgL_bgl_string2342za700za7za7e2354za7, "expand_exit", 11);
	      DEFINE_STRING(BGl_string2343z00zzexpand_exitz00,
		BgL_bgl_string2343za700za7za7e2355za7,
		"$pop-trace $push-trace loc name at location unwind-protect $set-error-handler! cons set! e $get-error-handler handler escape err ohs exitd-pop-protect! exitd-push-protect! lambda tmp protect exitd bind-exit if quote letrec* letrec let* labels let pop-exit! begin @ unwind-until! __bexit $get-exitd-top push-exit! res val an_exitd an_exit set-exit jump-exit ",
		357);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2unwindzd2protectzd2envzd2zzexpand_exitz00,
		BgL_bgl_za762expandza7d2unwi2356z00,
		BGl_z62expandzd2unwindzd2protectz62zzexpand_exitz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2bindzd2exitzd2envzd2zzexpand_exitz00,
		BgL_bgl_za762expandza7d2bind2357z00,
		BGl_z62expandzd2bindzd2exitz62zzexpand_exitz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2withzd2handlerzd2envzd2zzexpand_exitz00,
		BgL_bgl_za762expandza7d2with2358z00,
		BGl_z62expandzd2withzd2handlerz62zzexpand_exitz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2jumpzd2exitzd2envzd2zzexpand_exitz00,
		BgL_bgl_za762expandza7d2jump2359z00,
		BGl_z62expandzd2jumpzd2exitz62zzexpand_exitz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzexpand_exitz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_exitz00(long
		BgL_checksumz00_1856, char *BgL_fromz00_1857)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_exitz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_exitz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_exitz00();
					BGl_libraryzd2moduleszd2initz00zzexpand_exitz00();
					BGl_cnstzd2initzd2zzexpand_exitz00();
					BGl_importedzd2moduleszd2initz00zzexpand_exitz00();
					return BGl_toplevelzd2initzd2zzexpand_exitz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_exitz00()
	{
		{	/* Expand/exit.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_exit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"expand_exit");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_exit");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "expand_exit");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_exit");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_exit");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"expand_exit");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "expand_exit");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_exit");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_exit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"expand_exit");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"expand_exit");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"expand_exit");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "expand_exit");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_exitz00()
	{
		{	/* Expand/exit.scm 15 */
			{	/* Expand/exit.scm 15 */
				obj_t BgL_cportz00_1843;

				{	/* Expand/exit.scm 15 */
					obj_t BgL_stringz00_1851;

					BgL_stringz00_1851 = BGl_string2343z00zzexpand_exitz00;
					{	/* Expand/exit.scm 15 */
						obj_t BgL_startz00_1852;

						BgL_startz00_1852 = BINT(((long) 0));
						{	/* Expand/exit.scm 15 */
							obj_t BgL_endz00_1853;

							BgL_endz00_1853 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1851)));
							{	/* Expand/exit.scm 15 */

								BgL_cportz00_1843 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1851, BgL_startz00_1852, BgL_endz00_1853);
				}}}}
				{
					long BgL_iz00_1844;

					BgL_iz00_1844 = ((long) 42);
				BgL_loopz00_1845:
					if ((BgL_iz00_1844 == ((long) -1)))
						{	/* Expand/exit.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/exit.scm 15 */
							{	/* Expand/exit.scm 15 */
								obj_t BgL_arg2345z00_1847;

								{	/* Expand/exit.scm 15 */

									{	/* Expand/exit.scm 15 */
										obj_t BgL_locationz00_1849;

										BgL_locationz00_1849 = BBOOL(((bool_t) 0));
										{	/* Expand/exit.scm 15 */

											BgL_arg2345z00_1847 =
												BGl_readz00zz__readerz00(BgL_cportz00_1843,
												BgL_locationz00_1849);
										}
									}
								}
								{	/* Expand/exit.scm 15 */
									int BgL_tmpz00_1889;

									BgL_tmpz00_1889 = (int) (BgL_iz00_1844);
									CNST_TABLE_SET(BgL_tmpz00_1889, BgL_arg2345z00_1847);
							}}
							{	/* Expand/exit.scm 15 */
								int BgL_auxz00_1850;

								BgL_auxz00_1850 = (int) ((BgL_iz00_1844 - ((long) 1)));
								{
									long BgL_iz00_1894;

									BgL_iz00_1894 = (long) (BgL_auxz00_1850);
									BgL_iz00_1844 = BgL_iz00_1894;
									goto BgL_loopz00_1845;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_exitz00()
	{
		{	/* Expand/exit.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_exitz00()
	{
		{	/* Expand/exit.scm 15 */
			return BUNSPEC;
		}

	}



/* expand-jump-exit */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2jumpzd2exitz00zzexpand_exitz00(obj_t
		BgL_xz00_27, obj_t BgL_ez00_28)
	{
		{	/* Expand/exit.scm 39 */
			{
				obj_t BgL_exitz00_215;
				obj_t BgL_valuez00_216;

				if (PAIRP(BgL_xz00_27))
					{	/* Expand/exit.scm 40 */
						obj_t BgL_cdrzd2367zd2_221;

						BgL_cdrzd2367zd2_221 = CDR(BgL_xz00_27);
						if (PAIRP(BgL_cdrzd2367zd2_221))
							{	/* Expand/exit.scm 40 */
								BgL_exitz00_215 = CAR(BgL_cdrzd2367zd2_221);
								BgL_valuez00_216 = CDR(BgL_cdrzd2367zd2_221);
								{	/* Expand/exit.scm 42 */
									obj_t BgL_newz00_225;

									{	/* Expand/exit.scm 42 */
										obj_t BgL_arg1190z00_226;

										{	/* Expand/exit.scm 42 */
											obj_t BgL_arg1194z00_227;
											obj_t BgL_arg1197z00_228;

											BgL_arg1194z00_227 =
												PROCEDURE_ENTRY(BgL_ez00_28) (BgL_ez00_28,
												BgL_exitz00_215, BgL_ez00_28, BEOA);
											{	/* Expand/exit.scm 42 */
												obj_t BgL_arg1201z00_229;

												{	/* Expand/exit.scm 42 */
													obj_t BgL_arg1208z00_230;

													BgL_arg1208z00_230 =
														BGl_expandzd2prognzd2zz__prognz00(BgL_valuez00_216);
													BgL_arg1201z00_229 =
														PROCEDURE_ENTRY(BgL_ez00_28) (BgL_ez00_28,
														BgL_arg1208z00_230, BgL_ez00_28, BEOA);
												}
												BgL_arg1197z00_228 =
													MAKE_YOUNG_PAIR(BgL_arg1201z00_229, BNIL);
											}
											BgL_arg1190z00_226 =
												MAKE_YOUNG_PAIR(BgL_arg1194z00_227, BgL_arg1197z00_228);
										}
										BgL_newz00_225 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
											BgL_arg1190z00_226);
									}
									return
										BGl_replacez12z12zztools_miscz00(BgL_xz00_27,
										BgL_newz00_225);
								}
							}
						else
							{	/* Expand/exit.scm 40 */
							BgL_tagzd2360zd2_218:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string2336z00zzexpand_exitz00, BgL_xz00_27);
							}
					}
				else
					{	/* Expand/exit.scm 40 */
						goto BgL_tagzd2360zd2_218;
					}
			}
		}

	}



/* &expand-jump-exit */
	obj_t BGl_z62expandzd2jumpzd2exitz62zzexpand_exitz00(obj_t BgL_envz00_1826,
		obj_t BgL_xz00_1827, obj_t BgL_ez00_1828)
	{
		{	/* Expand/exit.scm 39 */
			return
				BGl_expandzd2jumpzd2exitz00zzexpand_exitz00(BgL_xz00_1827,
				BgL_ez00_1828);
		}

	}



/* expand-set-exit */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2setzd2exitz00zzexpand_exitz00(obj_t
		BgL_xz00_29, obj_t BgL_ez00_30)
	{
		{	/* Expand/exit.scm 50 */
			{
				obj_t BgL_exitz00_231;
				obj_t BgL_bodyz00_232;

				if (PAIRP(BgL_xz00_29))
					{	/* Expand/exit.scm 51 */
						obj_t BgL_cdrzd2382zd2_237;

						BgL_cdrzd2382zd2_237 = CDR(BgL_xz00_29);
						if (PAIRP(BgL_cdrzd2382zd2_237))
							{	/* Expand/exit.scm 51 */
								obj_t BgL_carzd2385zd2_239;

								BgL_carzd2385zd2_239 = CAR(BgL_cdrzd2382zd2_237);
								if (PAIRP(BgL_carzd2385zd2_239))
									{	/* Expand/exit.scm 51 */
										if (NULLP(CDR(BgL_carzd2385zd2_239)))
											{	/* Expand/exit.scm 51 */
												BgL_exitz00_231 = CAR(BgL_carzd2385zd2_239);
												BgL_bodyz00_232 = CDR(BgL_cdrzd2382zd2_237);
												{	/* Expand/exit.scm 53 */
													obj_t BgL_newz00_246;

													{	/* Expand/exit.scm 53 */
														obj_t BgL_arg1227z00_247;

														{	/* Expand/exit.scm 53 */
															obj_t BgL_arg1229z00_248;
															obj_t BgL_arg1232z00_249;

															BgL_arg1229z00_248 =
																MAKE_YOUNG_PAIR(BgL_exitz00_231, BNIL);
															{	/* Expand/exit.scm 53 */
																obj_t BgL_arg1239z00_250;

																{	/* Expand/exit.scm 53 */
																	obj_t BgL_arg1242z00_251;

																	BgL_arg1242z00_251 =
																		BGl_expandzd2prognzd2zz__prognz00
																		(BgL_bodyz00_232);
																	BgL_arg1239z00_250 =
																		PROCEDURE_ENTRY(BgL_ez00_30) (BgL_ez00_30,
																		BgL_arg1242z00_251, BgL_ez00_30, BEOA);
																}
																BgL_arg1232z00_249 =
																	MAKE_YOUNG_PAIR(BgL_arg1239z00_250, BNIL);
															}
															BgL_arg1227z00_247 =
																MAKE_YOUNG_PAIR(BgL_arg1229z00_248,
																BgL_arg1232z00_249);
														}
														BgL_newz00_246 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
															BgL_arg1227z00_247);
													}
													return
														BGl_replacez12z12zztools_miscz00(BgL_xz00_29,
														BgL_newz00_246);
												}
											}
										else
											{	/* Expand/exit.scm 51 */
											BgL_tagzd2375zd2_234:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string2337z00zzexpand_exitz00, BgL_xz00_29);
											}
									}
								else
									{	/* Expand/exit.scm 51 */
										goto BgL_tagzd2375zd2_234;
									}
							}
						else
							{	/* Expand/exit.scm 51 */
								goto BgL_tagzd2375zd2_234;
							}
					}
				else
					{	/* Expand/exit.scm 51 */
						goto BgL_tagzd2375zd2_234;
					}
			}
		}

	}



/* &expand-set-exit */
	obj_t BGl_z62expandzd2setzd2exitz62zzexpand_exitz00(obj_t BgL_envz00_1829,
		obj_t BgL_xz00_1830, obj_t BgL_ez00_1831)
	{
		{	/* Expand/exit.scm 50 */
			return
				BGl_expandzd2setzd2exitz00zzexpand_exitz00(BgL_xz00_1830,
				BgL_ez00_1831);
		}

	}



/* expand-bind-exit */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2bindzd2exitz00zzexpand_exitz00(obj_t
		BgL_xz00_31, obj_t BgL_ez00_32)
	{
		{	/* Expand/exit.scm 61 */
			{
				obj_t BgL_exitz00_1111;
				obj_t BgL_bodyz00_1112;

				{
					obj_t BgL_exitz00_260;
					obj_t BgL_exprsz00_261;

					if (PAIRP(BgL_xz00_31))
						{	/* Expand/exit.scm 142 */
							obj_t BgL_cdrzd21192zd2_266;

							BgL_cdrzd21192zd2_266 = CDR(BgL_xz00_31);
							if (PAIRP(BgL_cdrzd21192zd2_266))
								{	/* Expand/exit.scm 142 */
									obj_t BgL_carzd21195zd2_268;
									obj_t BgL_cdrzd21196zd2_269;

									BgL_carzd21195zd2_268 = CAR(BgL_cdrzd21192zd2_266);
									BgL_cdrzd21196zd2_269 = CDR(BgL_cdrzd21192zd2_266);
									if (PAIRP(BgL_carzd21195zd2_268))
										{	/* Expand/exit.scm 142 */
											obj_t BgL_exitz00_271;

											BgL_exitz00_271 = CAR(BgL_carzd21195zd2_268);
											if (NULLP(CDR(BgL_carzd21195zd2_268)))
												{	/* Expand/exit.scm 142 */
													if (PAIRP(BgL_cdrzd21196zd2_269))
														{	/* Expand/exit.scm 142 */
															obj_t BgL_carzd21203zd2_275;

															BgL_carzd21203zd2_275 =
																CAR(BgL_cdrzd21196zd2_269);
															if (PAIRP(BgL_carzd21203zd2_275))
																{	/* Expand/exit.scm 142 */
																	obj_t BgL_cdrzd21208zd2_277;

																	BgL_cdrzd21208zd2_277 =
																		CDR(BgL_carzd21203zd2_275);
																	if (
																		(BgL_exitz00_271 ==
																			CAR(BgL_carzd21203zd2_275)))
																		{	/* Expand/exit.scm 142 */
																			if (PAIRP(BgL_cdrzd21208zd2_277))
																				{	/* Expand/exit.scm 142 */
																					if (NULLP(CDR(BgL_cdrzd21208zd2_277)))
																						{	/* Expand/exit.scm 142 */
																							if (NULLP(CDR
																									(BgL_cdrzd21196zd2_269)))
																								{	/* Expand/exit.scm 142 */
																									obj_t BgL_arg1258z00_285;

																									BgL_arg1258z00_285 =
																										CAR(BgL_cdrzd21208zd2_277);
																									return
																										PROCEDURE_ENTRY(BgL_ez00_32)
																										(BgL_ez00_32,
																										BgL_arg1258z00_285,
																										BgL_ez00_32, BEOA);
																								}
																							else
																								{	/* Expand/exit.scm 142 */
																									obj_t BgL_arg1263z00_287;
																									obj_t BgL_arg1268z00_288;

																									{	/* Expand/exit.scm 142 */
																										obj_t BgL_pairz00_1772;

																										BgL_pairz00_1772 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd21192zd2_266));
																										BgL_arg1263z00_287 =
																											CAR(BgL_pairz00_1772);
																									}
																									BgL_arg1268z00_288 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd21192zd2_266));
																									BgL_exitz00_260 =
																										BgL_arg1263z00_287;
																									BgL_exprsz00_261 =
																										BgL_arg1268z00_288;
																								BgL_tagzd21183zd2_262:
																									{	/* Expand/exit.scm 147 */
																										obj_t
																											BgL_oldzd2internalzd2_314;
																										BgL_oldzd2internalzd2_314 =
																											BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
																										BGl_internalzd2definitionzf3z21zzexpand_lambdaz00
																											= BTRUE;
																										{	/* Expand/exit.scm 150 */
																											obj_t BgL_ez00_315;

																											BgL_ez00_315 =
																												BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00
																												(BgL_ez00_32);
																											{	/* Expand/exit.scm 150 */
																												obj_t BgL_nexprsz00_316;

																												{	/* Expand/exit.scm 151 */
																													obj_t
																														BgL_arg1298z00_319;
																													{	/* Expand/exit.scm 151 */
																														obj_t
																															BgL_arg1299z00_320;
																														BgL_arg1299z00_320 =
																															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																															(BgL_exprsz00_261,
																															BNIL);
																														BgL_arg1298z00_319 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 11)),
																															BgL_arg1299z00_320);
																													}
																													BgL_nexprsz00_316 =
																														PROCEDURE_ENTRY
																														(BgL_ez00_315)
																														(BgL_ez00_315,
																														BgL_arg1298z00_319,
																														BgL_ez00_315, BEOA);
																												}
																												{	/* Expand/exit.scm 151 */

																													{	/* Expand/exit.scm 152 */
																														obj_t
																															BgL_arg1296z00_317;
																														{	/* Expand/exit.scm 152 */
																															obj_t
																																BgL_pairz00_1651;
																															BgL_pairz00_1651 =
																																CDR(((obj_t)
																																	BgL_xz00_31));
																															BgL_arg1296z00_317
																																=
																																CDR
																																(BgL_pairz00_1651);
																														}
																														{	/* Expand/exit.scm 152 */
																															obj_t
																																BgL_tmpz00_2002;
																															BgL_tmpz00_2002 =
																																((obj_t)
																																BgL_arg1296z00_317);
																															SET_CAR
																																(BgL_tmpz00_2002,
																																BgL_nexprsz00_316);
																													}}
																													{	/* Expand/exit.scm 153 */
																														obj_t
																															BgL_arg1297z00_318;
																														{	/* Expand/exit.scm 153 */
																															obj_t
																																BgL_pairz00_1656;
																															BgL_pairz00_1656 =
																																CDR(((obj_t)
																																	BgL_xz00_31));
																															BgL_arg1297z00_318
																																=
																																CDR
																																(BgL_pairz00_1656);
																														}
																														{	/* Expand/exit.scm 153 */
																															obj_t
																																BgL_tmpz00_2008;
																															BgL_tmpz00_2008 =
																																((obj_t)
																																BgL_arg1297z00_318);
																															SET_CDR
																																(BgL_tmpz00_2008,
																																BNIL);
																										}}}}}
																										BGl_internalzd2definitionzf3z21zzexpand_lambdaz00
																											=
																											BgL_oldzd2internalzd2_314;
																									}
																									{
																										obj_t BgL_letkz00_321;
																										obj_t BgL_bindingsz00_322;
																										obj_t BgL_bodyz00_323;
																										obj_t BgL_exitz00_324;
																										obj_t BgL_exprz00_325;
																										obj_t BgL_exitz00_327;
																										obj_t BgL_bodyz00_328;

																										if (PAIRP(BgL_xz00_31))
																											{	/* Expand/exit.scm 155 */
																												obj_t
																													BgL_cdrzd21360zd2_333;
																												BgL_cdrzd21360zd2_333 =
																													CDR(BgL_xz00_31);
																												if (PAIRP
																													(BgL_cdrzd21360zd2_333))
																													{	/* Expand/exit.scm 155 */
																														obj_t
																															BgL_carzd21366zd2_335;
																														obj_t
																															BgL_cdrzd21367zd2_336;
																														BgL_carzd21366zd2_335
																															=
																															CAR
																															(BgL_cdrzd21360zd2_333);
																														BgL_cdrzd21367zd2_336
																															=
																															CDR
																															(BgL_cdrzd21360zd2_333);
																														if (PAIRP
																															(BgL_carzd21366zd2_335))
																															{	/* Expand/exit.scm 155 */
																																obj_t
																																	BgL_exitz00_338;
																																BgL_exitz00_338
																																	=
																																	CAR
																																	(BgL_carzd21366zd2_335);
																																if (NULLP(CDR
																																		(BgL_carzd21366zd2_335)))
																																	{	/* Expand/exit.scm 155 */
																																		if (PAIRP
																																			(BgL_cdrzd21367zd2_336))
																																			{	/* Expand/exit.scm 155 */
																																				obj_t
																																					BgL_carzd21377zd2_342;
																																				BgL_carzd21377zd2_342
																																					=
																																					CAR
																																					(BgL_cdrzd21367zd2_336);
																																				if (PAIRP(BgL_carzd21377zd2_342))
																																					{	/* Expand/exit.scm 155 */
																																						obj_t
																																							BgL_carzd21384zd2_344;
																																						obj_t
																																							BgL_cdrzd21385zd2_345;
																																						BgL_carzd21384zd2_344
																																							=
																																							CAR
																																							(BgL_carzd21377zd2_342);
																																						BgL_cdrzd21385zd2_345
																																							=
																																							CDR
																																							(BgL_carzd21377zd2_342);
																																						{

																																							if ((BgL_carzd21384zd2_344 == CNST_TABLE_REF(((long) 13))))
																																								{	/* Expand/exit.scm 155 */
																																								BgL_kapzd21388zd2_346:
																																									if (PAIRP(BgL_cdrzd21385zd2_345))
																																										{	/* Expand/exit.scm 155 */
																																											obj_t
																																												BgL_carzd21394zd2_357;
																																											obj_t
																																												BgL_cdrzd21395zd2_358;
																																											BgL_carzd21394zd2_357
																																												=
																																												CAR
																																												(BgL_cdrzd21385zd2_345);
																																											BgL_cdrzd21395zd2_358
																																												=
																																												CDR
																																												(BgL_cdrzd21385zd2_345);
																																											if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd21394zd2_357))
																																												{	/* Expand/exit.scm 155 */
																																													if (PAIRP(BgL_cdrzd21395zd2_358))
																																														{	/* Expand/exit.scm 155 */
																																															obj_t
																																																BgL_carzd21402zd2_361;
																																															BgL_carzd21402zd2_361
																																																=
																																																CAR
																																																(BgL_cdrzd21395zd2_358);
																																															if (PAIRP(BgL_carzd21402zd2_361))
																																																{	/* Expand/exit.scm 155 */
																																																	obj_t
																																																		BgL_cdrzd21413zd2_363;
																																																	BgL_cdrzd21413zd2_363
																																																		=
																																																		CDR
																																																		(BgL_carzd21402zd2_361);
																																																	if ((BgL_exitz00_338 == CAR(BgL_carzd21402zd2_361)))
																																																		{	/* Expand/exit.scm 155 */
																																																			if (PAIRP(BgL_cdrzd21413zd2_363))
																																																				{	/* Expand/exit.scm 155 */
																																																					if (NULLP(CDR(BgL_cdrzd21413zd2_363)))
																																																						{	/* Expand/exit.scm 155 */
																																																							if (NULLP(CDR(BgL_cdrzd21395zd2_358)))
																																																								{	/* Expand/exit.scm 155 */
																																																									if (NULLP(CDR(((obj_t) BgL_cdrzd21367zd2_336))))
																																																										{	/* Expand/exit.scm 155 */
																																																											BgL_letkz00_321
																																																												=
																																																												BgL_carzd21384zd2_344;
																																																											BgL_bindingsz00_322
																																																												=
																																																												BgL_carzd21394zd2_357;
																																																											BgL_bodyz00_323
																																																												=
																																																												BgL_carzd21402zd2_361;
																																																											BgL_exitz00_324
																																																												=
																																																												BgL_exitz00_338;
																																																											BgL_exprz00_325
																																																												=
																																																												CAR
																																																												(BgL_cdrzd21413zd2_363);
																																																											{	/* Expand/exit.scm 160 */
																																																												bool_t
																																																													BgL_test2394z00_2061;
																																																												{
																																																													obj_t
																																																														BgL_l1125z00_442;
																																																													BgL_l1125z00_442
																																																														=
																																																														BgL_bindingsz00_322;
																																																												BgL_zc3z04anonymousza31465ze3z87_443:
																																																													if (NULLP(BgL_l1125z00_442))
																																																														{	/* Expand/exit.scm 160 */
																																																															BgL_test2394z00_2061
																																																																=
																																																																(
																																																																(bool_t)
																																																																1);
																																																														}
																																																													else
																																																														{	/* Expand/exit.scm 160 */
																																																															bool_t
																																																																BgL_test2396z00_2064;
																																																															{	/* Expand/exit.scm 161 */
																																																																obj_t
																																																																	BgL_bz00_448;
																																																																BgL_bz00_448
																																																																	=
																																																																	CAR
																																																																	(
																																																																	((obj_t) BgL_l1125z00_442));
																																																																{	/* Expand/exit.scm 161 */
																																																																	bool_t
																																																																		BgL__ortest_1055z00_449;
																																																																	BgL__ortest_1055z00_449
																																																																		=
																																																																		SYMBOLP
																																																																		(BgL_bz00_448);
																																																																	if (BgL__ortest_1055z00_449)
																																																																		{	/* Expand/exit.scm 161 */
																																																																			BgL_test2396z00_2064
																																																																				=
																																																																				BgL__ortest_1055z00_449;
																																																																		}
																																																																	else
																																																																		{	/* Expand/exit.scm 161 */
																																																																			if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_bz00_448))
																																																																				{	/* Expand/exit.scm 162 */
																																																																					if (BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00(BgL_exitz00_324, CAR(((obj_t) BgL_bz00_448))))
																																																																						{	/* Expand/exit.scm 163 */
																																																																							BgL_test2396z00_2064
																																																																								=
																																																																								(
																																																																								(bool_t)
																																																																								0);
																																																																						}
																																																																					else
																																																																						{	/* Expand/exit.scm 163 */
																																																																							BgL_test2396z00_2064
																																																																								=
																																																																								(
																																																																								(bool_t)
																																																																								1);
																																																																						}
																																																																				}
																																																																			else
																																																																				{	/* Expand/exit.scm 162 */
																																																																					BgL_test2396z00_2064
																																																																						=
																																																																						(
																																																																						(bool_t)
																																																																						0);
																																																																				}
																																																																		}
																																																																}
																																																															}
																																																															if (BgL_test2396z00_2064)
																																																																{	/* Expand/exit.scm 160 */
																																																																	obj_t
																																																																		BgL_arg1474z00_447;
																																																																	BgL_arg1474z00_447
																																																																		=
																																																																		CDR
																																																																		(
																																																																		((obj_t) BgL_l1125z00_442));
																																																																	{
																																																																		obj_t
																																																																			BgL_l1125z00_2077;
																																																																		BgL_l1125z00_2077
																																																																			=
																																																																			BgL_arg1474z00_447;
																																																																		BgL_l1125z00_442
																																																																			=
																																																																			BgL_l1125z00_2077;
																																																																		goto
																																																																			BgL_zc3z04anonymousza31465ze3z87_443;
																																																																	}
																																																																}
																																																															else
																																																																{	/* Expand/exit.scm 160 */
																																																																	BgL_test2394z00_2061
																																																																		=
																																																																		(
																																																																		(bool_t)
																																																																		0);
																																																																}
																																																														}
																																																												}
																																																												if (BgL_test2394z00_2061)
																																																													{	/* Expand/exit.scm 165 */
																																																														obj_t
																																																															BgL_arg1461z00_438;
																																																														{	/* Expand/exit.scm 165 */
																																																															obj_t
																																																																BgL_arg1462z00_439;
																																																															{	/* Expand/exit.scm 165 */
																																																																obj_t
																																																																	BgL_arg1464z00_440;
																																																																BgL_arg1464z00_440
																																																																	=
																																																																	MAKE_YOUNG_PAIR
																																																																	(BgL_exprz00_325,
																																																																	BNIL);
																																																																BgL_arg1462z00_439
																																																																	=
																																																																	MAKE_YOUNG_PAIR
																																																																	(BgL_bindingsz00_322,
																																																																	BgL_arg1464z00_440);
																																																															}
																																																															BgL_arg1461z00_438
																																																																=
																																																																MAKE_YOUNG_PAIR
																																																																(BgL_letkz00_321,
																																																																BgL_arg1462z00_439);
																																																														}
																																																														return
																																																															BGl_replacez12z12zztools_miscz00
																																																															(BgL_xz00_31,
																																																															BgL_arg1461z00_438);
																																																													}
																																																												else
																																																													{	/* Expand/exit.scm 160 */
																																																														BgL_exitz00_1111
																																																															=
																																																															BgL_exitz00_324;
																																																														BgL_bodyz00_1112
																																																															=
																																																															BgL_bodyz00_323;
																																																													BgL_zc3z04anonymousza32006ze3z87_1113:
																																																														{	/* Expand/exit.scm 124 */
																																																															obj_t
																																																																BgL_anzd2exitzd2_1114;
																																																															obj_t
																																																																BgL_anzd2exitdzd2_1115;
																																																															obj_t
																																																																BgL_valz00_1116;
																																																															obj_t
																																																																BgL_resz00_1117;
																																																															BgL_anzd2exitzd2_1114
																																																																=
																																																																BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																																																																(BGl_gensymz00zz__r4_symbols_6_4z00
																																																																(CNST_TABLE_REF
																																																																	(((long) 2))));
																																																															BgL_anzd2exitdzd2_1115
																																																																=
																																																																BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																																																																(BGl_gensymz00zz__r4_symbols_6_4z00
																																																																(CNST_TABLE_REF
																																																																	(((long) 3))));
																																																															BgL_valz00_1116
																																																																=
																																																																BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																																																																(BGl_gensymz00zz__r4_symbols_6_4z00
																																																																(CNST_TABLE_REF
																																																																	(((long) 4))));
																																																															BgL_resz00_1117
																																																																=
																																																																BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																																																																(BGl_gensymz00zz__r4_symbols_6_4z00
																																																																(CNST_TABLE_REF
																																																																	(((long) 5))));
																																																															{	/* Expand/exit.scm 128 */
																																																																obj_t
																																																																	BgL_newz00_1118;
																																																																{	/* Expand/exit.scm 128 */
																																																																	obj_t
																																																																		BgL_arg2007z00_1119;
																																																																	{	/* Expand/exit.scm 128 */
																																																																		obj_t
																																																																			BgL_arg2008z00_1120;
																																																																		obj_t
																																																																			BgL_arg2010z00_1121;
																																																																		BgL_arg2008z00_1120
																																																																			=
																																																																			MAKE_YOUNG_PAIR
																																																																			(BgL_anzd2exitzd2_1114,
																																																																			BNIL);
																																																																		{	/* Expand/exit.scm 130 */
																																																																			obj_t
																																																																				BgL_arg2011z00_1122;
																																																																			{	/* Expand/exit.scm 130 */
																																																																				obj_t
																																																																					BgL_arg2012z00_1123;
																																																																				{	/* Expand/exit.scm 130 */
																																																																					obj_t
																																																																						BgL_arg2013z00_1124;
																																																																					{	/* Expand/exit.scm 130 */
																																																																						obj_t
																																																																							BgL_arg2014z00_1125;
																																																																						obj_t
																																																																							BgL_arg2016z00_1126;
																																																																						{	/* Expand/exit.scm 130 */
																																																																							obj_t
																																																																								BgL_arg2017z00_1127;
																																																																							{	/* Expand/exit.scm 130 */
																																																																								obj_t
																																																																									BgL_arg2018z00_1128;
																																																																								BgL_arg2018z00_1128
																																																																									=
																																																																									MAKE_YOUNG_PAIR
																																																																									(BINT
																																																																									(((long) 1)), BNIL);
																																																																								BgL_arg2017z00_1127
																																																																									=
																																																																									MAKE_YOUNG_PAIR
																																																																									(BgL_anzd2exitzd2_1114,
																																																																									BgL_arg2018z00_1128);
																																																																							}
																																																																							BgL_arg2014z00_1125
																																																																								=
																																																																								MAKE_YOUNG_PAIR
																																																																								(CNST_TABLE_REF
																																																																								(((long) 6)), BgL_arg2017z00_1127);
																																																																						}
																																																																						{	/* Expand/exit.scm 131 */
																																																																							obj_t
																																																																								BgL_arg2020z00_1129;
																																																																							{	/* Expand/exit.scm 131 */
																																																																								obj_t
																																																																									BgL_arg2021z00_1130;
																																																																								{	/* Expand/exit.scm 131 */
																																																																									obj_t
																																																																										BgL_arg2022z00_1131;
																																																																									obj_t
																																																																										BgL_arg2023z00_1132;
																																																																									{	/* Expand/exit.scm 131 */
																																																																										obj_t
																																																																											BgL_arg2026z00_1133;
																																																																										{	/* Expand/exit.scm 131 */
																																																																											obj_t
																																																																												BgL_arg2028z00_1134;
																																																																											{	/* Expand/exit.scm 131 */
																																																																												obj_t
																																																																													BgL_arg2029z00_1135;
																																																																												BgL_arg2029z00_1135
																																																																													=
																																																																													MAKE_YOUNG_PAIR
																																																																													(CNST_TABLE_REF
																																																																													(((long) 7)), BNIL);
																																																																												BgL_arg2028z00_1134
																																																																													=
																																																																													MAKE_YOUNG_PAIR
																																																																													(BgL_arg2029z00_1135,
																																																																													BNIL);
																																																																											}
																																																																											BgL_arg2026z00_1133
																																																																												=
																																																																												MAKE_YOUNG_PAIR
																																																																												(BgL_anzd2exitdzd2_1115,
																																																																												BgL_arg2028z00_1134);
																																																																										}
																																																																										BgL_arg2022z00_1131
																																																																											=
																																																																											MAKE_YOUNG_PAIR
																																																																											(BgL_arg2026z00_1133,
																																																																											BNIL);
																																																																									}
																																																																									{	/* Expand/exit.scm 132 */
																																																																										obj_t
																																																																											BgL_arg2031z00_1136;
																																																																										{	/* Expand/exit.scm 132 */
																																																																											obj_t
																																																																												BgL_arg2033z00_1137;
																																																																											{	/* Expand/exit.scm 132 */
																																																																												obj_t
																																																																													BgL_arg2034z00_1138;
																																																																												obj_t
																																																																													BgL_arg2035z00_1139;
																																																																												{	/* Expand/exit.scm 132 */
																																																																													obj_t
																																																																														BgL_arg2036z00_1140;
																																																																													{	/* Expand/exit.scm 132 */
																																																																														obj_t
																																																																															BgL_arg2037z00_1141;
																																																																														{	/* Expand/exit.scm 132 */
																																																																															obj_t
																																																																																BgL_arg2038z00_1142;
																																																																															obj_t
																																																																																BgL_arg2039z00_1143;
																																																																															BgL_arg2038z00_1142
																																																																																=
																																																																																MAKE_YOUNG_PAIR
																																																																																(BgL_valz00_1116,
																																																																																BNIL);
																																																																															{	/* Expand/exit.scm 133 */
																																																																																obj_t
																																																																																	BgL_arg2040z00_1144;
																																																																																{	/* Expand/exit.scm 133 */
																																																																																	obj_t
																																																																																		BgL_arg2041z00_1145;
																																																																																	obj_t
																																																																																		BgL_arg2043z00_1146;
																																																																																	{	/* Expand/exit.scm 133 */
																																																																																		obj_t
																																																																																			BgL_arg2044z00_1147;
																																																																																		{	/* Expand/exit.scm 133 */
																																																																																			obj_t
																																																																																				BgL_arg2045z00_1148;
																																																																																			BgL_arg2045z00_1148
																																																																																				=
																																																																																				MAKE_YOUNG_PAIR
																																																																																				(CNST_TABLE_REF
																																																																																				(((long) 8)), BNIL);
																																																																																			BgL_arg2044z00_1147
																																																																																				=
																																																																																				MAKE_YOUNG_PAIR
																																																																																				(CNST_TABLE_REF
																																																																																				(((long) 9)), BgL_arg2045z00_1148);
																																																																																		}
																																																																																		BgL_arg2041z00_1145
																																																																																			=
																																																																																			MAKE_YOUNG_PAIR
																																																																																			(CNST_TABLE_REF
																																																																																			(((long) 10)), BgL_arg2044z00_1147);
																																																																																	}
																																																																																	{	/* Expand/exit.scm 133 */
																																																																																		obj_t
																																																																																			BgL_arg2046z00_1149;
																																																																																		BgL_arg2046z00_1149
																																																																																			=
																																																																																			MAKE_YOUNG_PAIR
																																																																																			(BgL_valz00_1116,
																																																																																			BNIL);
																																																																																		BgL_arg2043z00_1146
																																																																																			=
																																																																																			MAKE_YOUNG_PAIR
																																																																																			(BgL_anzd2exitdzd2_1115,
																																																																																			BgL_arg2046z00_1149);
																																																																																	}
																																																																																	BgL_arg2040z00_1144
																																																																																		=
																																																																																		MAKE_YOUNG_PAIR
																																																																																		(BgL_arg2041z00_1145,
																																																																																		BgL_arg2043z00_1146);
																																																																																}
																																																																																BgL_arg2039z00_1143
																																																																																	=
																																																																																	MAKE_YOUNG_PAIR
																																																																																	(BgL_arg2040z00_1144,
																																																																																	BNIL);
																																																																															}
																																																																															BgL_arg2037z00_1141
																																																																																=
																																																																																MAKE_YOUNG_PAIR
																																																																																(BgL_arg2038z00_1142,
																																																																																BgL_arg2039z00_1143);
																																																																														}
																																																																														BgL_arg2036z00_1140
																																																																															=
																																																																															MAKE_YOUNG_PAIR
																																																																															(BgL_exitz00_1111,
																																																																															BgL_arg2037z00_1141);
																																																																													}
																																																																													BgL_arg2034z00_1138
																																																																														=
																																																																														MAKE_YOUNG_PAIR
																																																																														(BgL_arg2036z00_1140,
																																																																														BNIL);
																																																																												}
																																																																												{	/* Expand/exit.scm 136 */
																																																																													obj_t
																																																																														BgL_arg2047z00_1150;
																																																																													{	/* Expand/exit.scm 136 */
																																																																														obj_t
																																																																															BgL_arg2048z00_1151;
																																																																														{	/* Expand/exit.scm 136 */
																																																																															obj_t
																																																																																BgL_arg2049z00_1152;
																																																																															obj_t
																																																																																BgL_arg2050z00_1153;
																																																																															{	/* Expand/exit.scm 136 */
																																																																																obj_t
																																																																																	BgL_arg2051z00_1154;
																																																																																{	/* Expand/exit.scm 136 */
																																																																																	obj_t
																																																																																		BgL_arg2053z00_1155;
																																																																																	{	/* Expand/exit.scm 136 */
																																																																																		obj_t
																																																																																			BgL_arg2055z00_1156;
																																																																																		{	/* Expand/exit.scm 136 */
																																																																																			obj_t
																																																																																				BgL_arg2056z00_1157;
																																																																																			BgL_arg2056z00_1157
																																																																																				=
																																																																																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																																																																				(BgL_bodyz00_1112,
																																																																																				BNIL);
																																																																																			BgL_arg2055z00_1156
																																																																																				=
																																																																																				MAKE_YOUNG_PAIR
																																																																																				(CNST_TABLE_REF
																																																																																				(((long) 11)), BgL_arg2056z00_1157);
																																																																																		}
																																																																																		BgL_arg2053z00_1155
																																																																																			=
																																																																																			MAKE_YOUNG_PAIR
																																																																																			(BgL_arg2055z00_1156,
																																																																																			BNIL);
																																																																																	}
																																																																																	BgL_arg2051z00_1154
																																																																																		=
																																																																																		MAKE_YOUNG_PAIR
																																																																																		(BgL_resz00_1117,
																																																																																		BgL_arg2053z00_1155);
																																																																																}
																																																																																BgL_arg2049z00_1152
																																																																																	=
																																																																																	MAKE_YOUNG_PAIR
																																																																																	(BgL_arg2051z00_1154,
																																																																																	BNIL);
																																																																															}
																																																																															{	/* Expand/exit.scm 137 */
																																																																																obj_t
																																																																																	BgL_arg2057z00_1158;
																																																																																obj_t
																																																																																	BgL_arg2059z00_1159;
																																																																																BgL_arg2057z00_1158
																																																																																	=
																																																																																	MAKE_YOUNG_PAIR
																																																																																	(CNST_TABLE_REF
																																																																																	(((long) 12)), BNIL);
																																																																																BgL_arg2059z00_1159
																																																																																	=
																																																																																	MAKE_YOUNG_PAIR
																																																																																	(BgL_resz00_1117,
																																																																																	BNIL);
																																																																																BgL_arg2050z00_1153
																																																																																	=
																																																																																	MAKE_YOUNG_PAIR
																																																																																	(BgL_arg2057z00_1158,
																																																																																	BgL_arg2059z00_1159);
																																																																															}
																																																																															BgL_arg2048z00_1151
																																																																																=
																																																																																MAKE_YOUNG_PAIR
																																																																																(BgL_arg2049z00_1152,
																																																																																BgL_arg2050z00_1153);
																																																																														}
																																																																														BgL_arg2047z00_1150
																																																																															=
																																																																															MAKE_YOUNG_PAIR
																																																																															(CNST_TABLE_REF
																																																																															(((long) 13)), BgL_arg2048z00_1151);
																																																																													}
																																																																													BgL_arg2035z00_1139
																																																																														=
																																																																														MAKE_YOUNG_PAIR
																																																																														(BgL_arg2047z00_1150,
																																																																														BNIL);
																																																																												}
																																																																												BgL_arg2033z00_1137
																																																																													=
																																																																													MAKE_YOUNG_PAIR
																																																																													(BgL_arg2034z00_1138,
																																																																													BgL_arg2035z00_1139);
																																																																											}
																																																																											BgL_arg2031z00_1136
																																																																												=
																																																																												MAKE_YOUNG_PAIR
																																																																												(CNST_TABLE_REF
																																																																												(((long) 14)), BgL_arg2033z00_1137);
																																																																										}
																																																																										BgL_arg2023z00_1132
																																																																											=
																																																																											MAKE_YOUNG_PAIR
																																																																											(BgL_arg2031z00_1136,
																																																																											BNIL);
																																																																									}
																																																																									BgL_arg2021z00_1130
																																																																										=
																																																																										MAKE_YOUNG_PAIR
																																																																										(BgL_arg2022z00_1131,
																																																																										BgL_arg2023z00_1132);
																																																																								}
																																																																								BgL_arg2020z00_1129
																																																																									=
																																																																									MAKE_YOUNG_PAIR
																																																																									(CNST_TABLE_REF
																																																																									(((long) 13)), BgL_arg2021z00_1130);
																																																																							}
																																																																							BgL_arg2016z00_1126
																																																																								=
																																																																								MAKE_YOUNG_PAIR
																																																																								(BgL_arg2020z00_1129,
																																																																								BNIL);
																																																																						}
																																																																						BgL_arg2013z00_1124
																																																																							=
																																																																							MAKE_YOUNG_PAIR
																																																																							(BgL_arg2014z00_1125,
																																																																							BgL_arg2016z00_1126);
																																																																					}
																																																																					BgL_arg2012z00_1123
																																																																						=
																																																																						MAKE_YOUNG_PAIR
																																																																						(BNIL,
																																																																						BgL_arg2013z00_1124);
																																																																				}
																																																																				BgL_arg2011z00_1122
																																																																					=
																																																																					MAKE_YOUNG_PAIR
																																																																					(CNST_TABLE_REF
																																																																					(((long) 13)), BgL_arg2012z00_1123);
																																																																			}
																																																																			BgL_arg2010z00_1121
																																																																				=
																																																																				MAKE_YOUNG_PAIR
																																																																				(BgL_arg2011z00_1122,
																																																																				BNIL);
																																																																		}
																																																																		BgL_arg2007z00_1119
																																																																			=
																																																																			MAKE_YOUNG_PAIR
																																																																			(BgL_arg2008z00_1120,
																																																																			BgL_arg2010z00_1121);
																																																																	}
																																																																	BgL_newz00_1118
																																																																		=
																																																																		MAKE_YOUNG_PAIR
																																																																		(CNST_TABLE_REF
																																																																		(((long) 1)), BgL_arg2007z00_1119);
																																																																}
																																																																return
																																																																	BGl_replacez12z12zztools_miscz00
																																																																	(BgL_xz00_31,
																																																																	BgL_newz00_1118);
																																																															}
																																																														}
																																																													}
																																																											}
																																																										}
																																																									else
																																																										{	/* Expand/exit.scm 155 */
																																																											obj_t
																																																												BgL_cdrzd21425zd2_374;
																																																											BgL_cdrzd21425zd2_374
																																																												=
																																																												CDR
																																																												(
																																																												((obj_t) BgL_xz00_31));
																																																											{	/* Expand/exit.scm 155 */
																																																												obj_t
																																																													BgL_arg1329z00_375;
																																																												obj_t
																																																													BgL_arg1330z00_376;
																																																												{	/* Expand/exit.scm 155 */
																																																													obj_t
																																																														BgL_pairz00_1696;
																																																													BgL_pairz00_1696
																																																														=
																																																														CAR
																																																														(
																																																														((obj_t) BgL_cdrzd21425zd2_374));
																																																													BgL_arg1329z00_375
																																																														=
																																																														CAR
																																																														(BgL_pairz00_1696);
																																																												}
																																																												BgL_arg1330z00_376
																																																													=
																																																													CDR
																																																													(
																																																													((obj_t) BgL_cdrzd21425zd2_374));
																																																												BgL_exitz00_327
																																																													=
																																																													BgL_arg1329z00_375;
																																																												BgL_bodyz00_328
																																																													=
																																																													BgL_arg1330z00_376;
																																																											BgL_tagzd21346zd2_329:
																																																												if (BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00(BgL_exitz00_327, BgL_bodyz00_328))
																																																													{	/* Expand/exit.scm 170 */
																																																														obj_t
																																																															BgL_headz00_455;
																																																														obj_t
																																																															BgL_tailz00_456;
																																																														BgL_headz00_455
																																																															=
																																																															BGl_takez00zz__r4_pairs_and_lists_6_3z00
																																																															(BgL_bodyz00_328,
																																																															(long)
																																																															CINT
																																																															(BGl_2zd2zd2zz__r4_numbers_6_5z00
																																																																(BINT
																																																																	(bgl_list_length
																																																																		(BgL_bodyz00_328)),
																																																																	BINT
																																																																	(((long) 1)))));
																																																														BgL_tailz00_456
																																																															=
																																																															CAR
																																																															(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																																																															(BgL_bodyz00_328));
																																																														{	/* Expand/exit.scm 172 */
																																																															bool_t
																																																																BgL_test2401z00_2168;
																																																															if (BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00(BgL_exitz00_327, BgL_headz00_455))
																																																																{	/* Expand/exit.scm 172 */
																																																																	BgL_test2401z00_2168
																																																																		=
																																																																		(
																																																																		(bool_t)
																																																																		0);
																																																																}
																																																															else
																																																																{	/* Expand/exit.scm 172 */
																																																																	BgL_test2401z00_2168
																																																																		=
																																																																		BGl_tailreczf3ze70z14zzexpand_exitz00
																																																																		(BgL_exitz00_327,
																																																																		BgL_tailz00_456);
																																																																}
																																																															if (BgL_test2401z00_2168)
																																																																{	/* Expand/exit.scm 174 */
																																																																	obj_t
																																																																		BgL_arg1489z00_459;
																																																																	{	/* Expand/exit.scm 174 */
																																																																		obj_t
																																																																			BgL_arg1493z00_460;
																																																																		{	/* Expand/exit.scm 174 */
																																																																			obj_t
																																																																				BgL_arg1495z00_461;
																																																																			BgL_arg1495z00_461
																																																																				=
																																																																				MAKE_YOUNG_PAIR
																																																																				(BGl_returnz12ze70zf5zzexpand_exitz00
																																																																				(BgL_exitz00_327,
																																																																					BgL_tailz00_456),
																																																																				BNIL);
																																																																			BgL_arg1493z00_460
																																																																				=
																																																																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																																																				(BgL_headz00_455,
																																																																				BgL_arg1495z00_461);
																																																																		}
																																																																		BgL_arg1489z00_459
																																																																			=
																																																																			MAKE_YOUNG_PAIR
																																																																			(CNST_TABLE_REF
																																																																			(((long) 11)), BgL_arg1493z00_460);
																																																																	}
																																																																	return
																																																																		BGl_replacez12z12zztools_miscz00
																																																																		(BgL_xz00_31,
																																																																		BgL_arg1489z00_459);
																																																																}
																																																															else
																																																																{
																																																																	obj_t
																																																																		BgL_bodyz00_2179;
																																																																	obj_t
																																																																		BgL_exitz00_2178;
																																																																	BgL_exitz00_2178
																																																																		=
																																																																		BgL_exitz00_327;
																																																																	BgL_bodyz00_2179
																																																																		=
																																																																		BgL_bodyz00_328;
																																																																	BgL_bodyz00_1112
																																																																		=
																																																																		BgL_bodyz00_2179;
																																																																	BgL_exitz00_1111
																																																																		=
																																																																		BgL_exitz00_2178;
																																																																	goto
																																																																		BgL_zc3z04anonymousza32006ze3z87_1113;
																																																																}
																																																														}
																																																													}
																																																												else
																																																													{	/* Expand/exit.scm 169 */
																																																														obj_t
																																																															BgL_arg1536z00_467;
																																																														{	/* Expand/exit.scm 169 */
																																																															obj_t
																																																																BgL_arg1537z00_468;
																																																															{	/* Expand/exit.scm 169 */
																																																																obj_t
																																																																	BgL_arg1540z00_469;
																																																																BgL_arg1540z00_469
																																																																	=
																																																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																																																	(BgL_bodyz00_328,
																																																																	BNIL);
																																																																BgL_arg1537z00_468
																																																																	=
																																																																	MAKE_YOUNG_PAIR
																																																																	(CNST_TABLE_REF
																																																																	(((long) 11)), BgL_arg1540z00_469);
																																																															}
																																																															BgL_arg1536z00_467
																																																																=
																																																																PROCEDURE_ENTRY
																																																																(BgL_ez00_32)
																																																																(BgL_ez00_32,
																																																																BgL_arg1537z00_468,
																																																																BgL_ez00_32,
																																																																BEOA);
																																																														}
																																																														return
																																																															BGl_replacez12z12zztools_miscz00
																																																															(BgL_xz00_31,
																																																															BgL_arg1536z00_467);
																																																													}
																																																											}
																																																										}
																																																								}
																																																							else
																																																								{	/* Expand/exit.scm 155 */
																																																									obj_t
																																																										BgL_cdrzd21444zd2_379;
																																																									BgL_cdrzd21444zd2_379
																																																										=
																																																										CDR
																																																										(
																																																										((obj_t) BgL_xz00_31));
																																																									{	/* Expand/exit.scm 155 */
																																																										obj_t
																																																											BgL_arg1335z00_380;
																																																										obj_t
																																																											BgL_arg1337z00_381;
																																																										{	/* Expand/exit.scm 155 */
																																																											obj_t
																																																												BgL_pairz00_1700;
																																																											BgL_pairz00_1700
																																																												=
																																																												CAR
																																																												(
																																																												((obj_t) BgL_cdrzd21444zd2_379));
																																																											BgL_arg1335z00_380
																																																												=
																																																												CAR
																																																												(BgL_pairz00_1700);
																																																										}
																																																										BgL_arg1337z00_381
																																																											=
																																																											CDR
																																																											(
																																																											((obj_t) BgL_cdrzd21444zd2_379));
																																																										{
																																																											obj_t
																																																												BgL_bodyz00_2197;
																																																											obj_t
																																																												BgL_exitz00_2196;
																																																											BgL_exitz00_2196
																																																												=
																																																												BgL_arg1335z00_380;
																																																											BgL_bodyz00_2197
																																																												=
																																																												BgL_arg1337z00_381;
																																																											BgL_bodyz00_328
																																																												=
																																																												BgL_bodyz00_2197;
																																																											BgL_exitz00_327
																																																												=
																																																												BgL_exitz00_2196;
																																																											goto
																																																												BgL_tagzd21346zd2_329;
																																																										}
																																																									}
																																																								}
																																																						}
																																																					else
																																																						{	/* Expand/exit.scm 155 */
																																																							obj_t
																																																								BgL_cdrzd21463zd2_384;
																																																							BgL_cdrzd21463zd2_384
																																																								=
																																																								CDR
																																																								(
																																																								((obj_t) BgL_xz00_31));
																																																							{	/* Expand/exit.scm 155 */
																																																								obj_t
																																																									BgL_arg1340z00_385;
																																																								obj_t
																																																									BgL_arg1344z00_386;
																																																								{	/* Expand/exit.scm 155 */
																																																									obj_t
																																																										BgL_pairz00_1704;
																																																									BgL_pairz00_1704
																																																										=
																																																										CAR
																																																										(
																																																										((obj_t) BgL_cdrzd21463zd2_384));
																																																									BgL_arg1340z00_385
																																																										=
																																																										CAR
																																																										(BgL_pairz00_1704);
																																																								}
																																																								BgL_arg1344z00_386
																																																									=
																																																									CDR
																																																									(
																																																									((obj_t) BgL_cdrzd21463zd2_384));
																																																								{
																																																									obj_t
																																																										BgL_bodyz00_2206;
																																																									obj_t
																																																										BgL_exitz00_2205;
																																																									BgL_exitz00_2205
																																																										=
																																																										BgL_arg1340z00_385;
																																																									BgL_bodyz00_2206
																																																										=
																																																										BgL_arg1344z00_386;
																																																									BgL_bodyz00_328
																																																										=
																																																										BgL_bodyz00_2206;
																																																									BgL_exitz00_327
																																																										=
																																																										BgL_exitz00_2205;
																																																									goto
																																																										BgL_tagzd21346zd2_329;
																																																								}
																																																							}
																																																						}
																																																				}
																																																			else
																																																				{	/* Expand/exit.scm 155 */
																																																					obj_t
																																																						BgL_cdrzd21482zd2_389;
																																																					BgL_cdrzd21482zd2_389
																																																						=
																																																						CDR
																																																						(
																																																						((obj_t) BgL_xz00_31));
																																																					{	/* Expand/exit.scm 155 */
																																																						obj_t
																																																							BgL_arg1347z00_390;
																																																						obj_t
																																																							BgL_arg1348z00_391;
																																																						{	/* Expand/exit.scm 155 */
																																																							obj_t
																																																								BgL_pairz00_1708;
																																																							BgL_pairz00_1708
																																																								=
																																																								CAR
																																																								(
																																																								((obj_t) BgL_cdrzd21482zd2_389));
																																																							BgL_arg1347z00_390
																																																								=
																																																								CAR
																																																								(BgL_pairz00_1708);
																																																						}
																																																						BgL_arg1348z00_391
																																																							=
																																																							CDR
																																																							(
																																																							((obj_t) BgL_cdrzd21482zd2_389));
																																																						{
																																																							obj_t
																																																								BgL_bodyz00_2215;
																																																							obj_t
																																																								BgL_exitz00_2214;
																																																							BgL_exitz00_2214
																																																								=
																																																								BgL_arg1347z00_390;
																																																							BgL_bodyz00_2215
																																																								=
																																																								BgL_arg1348z00_391;
																																																							BgL_bodyz00_328
																																																								=
																																																								BgL_bodyz00_2215;
																																																							BgL_exitz00_327
																																																								=
																																																								BgL_exitz00_2214;
																																																							goto
																																																								BgL_tagzd21346zd2_329;
																																																						}
																																																					}
																																																				}
																																																		}
																																																	else
																																																		{	/* Expand/exit.scm 155 */
																																																			obj_t
																																																				BgL_cdrzd21501zd2_393;
																																																			BgL_cdrzd21501zd2_393
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_xz00_31));
																																																			{	/* Expand/exit.scm 155 */
																																																				obj_t
																																																					BgL_arg1352z00_394;
																																																				obj_t
																																																					BgL_arg1357z00_395;
																																																				{	/* Expand/exit.scm 155 */
																																																					obj_t
																																																						BgL_pairz00_1712;
																																																					BgL_pairz00_1712
																																																						=
																																																						CAR
																																																						(
																																																						((obj_t) BgL_cdrzd21501zd2_393));
																																																					BgL_arg1352z00_394
																																																						=
																																																						CAR
																																																						(BgL_pairz00_1712);
																																																				}
																																																				BgL_arg1357z00_395
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_cdrzd21501zd2_393));
																																																				{
																																																					obj_t
																																																						BgL_bodyz00_2224;
																																																					obj_t
																																																						BgL_exitz00_2223;
																																																					BgL_exitz00_2223
																																																						=
																																																						BgL_arg1352z00_394;
																																																					BgL_bodyz00_2224
																																																						=
																																																						BgL_arg1357z00_395;
																																																					BgL_bodyz00_328
																																																						=
																																																						BgL_bodyz00_2224;
																																																					BgL_exitz00_327
																																																						=
																																																						BgL_exitz00_2223;
																																																					goto
																																																						BgL_tagzd21346zd2_329;
																																																				}
																																																			}
																																																		}
																																																}
																																															else
																																																{	/* Expand/exit.scm 155 */
																																																	obj_t
																																																		BgL_cdrzd21520zd2_398;
																																																	BgL_cdrzd21520zd2_398
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_xz00_31));
																																																	{	/* Expand/exit.scm 155 */
																																																		obj_t
																																																			BgL_arg1363z00_399;
																																																		obj_t
																																																			BgL_arg1364z00_400;
																																																		{	/* Expand/exit.scm 155 */
																																																			obj_t
																																																				BgL_pairz00_1716;
																																																			BgL_pairz00_1716
																																																				=
																																																				CAR
																																																				(
																																																				((obj_t) BgL_cdrzd21520zd2_398));
																																																			BgL_arg1363z00_399
																																																				=
																																																				CAR
																																																				(BgL_pairz00_1716);
																																																		}
																																																		BgL_arg1364z00_400
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_cdrzd21520zd2_398));
																																																		{
																																																			obj_t
																																																				BgL_bodyz00_2233;
																																																			obj_t
																																																				BgL_exitz00_2232;
																																																			BgL_exitz00_2232
																																																				=
																																																				BgL_arg1363z00_399;
																																																			BgL_bodyz00_2233
																																																				=
																																																				BgL_arg1364z00_400;
																																																			BgL_bodyz00_328
																																																				=
																																																				BgL_bodyz00_2233;
																																																			BgL_exitz00_327
																																																				=
																																																				BgL_exitz00_2232;
																																																			goto
																																																				BgL_tagzd21346zd2_329;
																																																		}
																																																	}
																																																}
																																														}
																																													else
																																														{	/* Expand/exit.scm 155 */
																																															obj_t
																																																BgL_cdrzd21539zd2_402;
																																															BgL_cdrzd21539zd2_402
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_xz00_31));
																																															{	/* Expand/exit.scm 155 */
																																																obj_t
																																																	BgL_arg1370z00_403;
																																																obj_t
																																																	BgL_arg1371z00_404;
																																																{	/* Expand/exit.scm 155 */
																																																	obj_t
																																																		BgL_pairz00_1720;
																																																	BgL_pairz00_1720
																																																		=
																																																		CAR
																																																		(
																																																		((obj_t) BgL_cdrzd21539zd2_402));
																																																	BgL_arg1370z00_403
																																																		=
																																																		CAR
																																																		(BgL_pairz00_1720);
																																																}
																																																BgL_arg1371z00_404
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_cdrzd21539zd2_402));
																																																{
																																																	obj_t
																																																		BgL_bodyz00_2242;
																																																	obj_t
																																																		BgL_exitz00_2241;
																																																	BgL_exitz00_2241
																																																		=
																																																		BgL_arg1370z00_403;
																																																	BgL_bodyz00_2242
																																																		=
																																																		BgL_arg1371z00_404;
																																																	BgL_bodyz00_328
																																																		=
																																																		BgL_bodyz00_2242;
																																																	BgL_exitz00_327
																																																		=
																																																		BgL_exitz00_2241;
																																																	goto
																																																		BgL_tagzd21346zd2_329;
																																																}
																																															}
																																														}
																																												}
																																											else
																																												{	/* Expand/exit.scm 155 */
																																													obj_t
																																														BgL_cdrzd21558zd2_406;
																																													BgL_cdrzd21558zd2_406
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_xz00_31));
																																													{	/* Expand/exit.scm 155 */
																																														obj_t
																																															BgL_arg1381z00_407;
																																														obj_t
																																															BgL_arg1382z00_408;
																																														{	/* Expand/exit.scm 155 */
																																															obj_t
																																																BgL_pairz00_1724;
																																															BgL_pairz00_1724
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_cdrzd21558zd2_406));
																																															BgL_arg1381z00_407
																																																=
																																																CAR
																																																(BgL_pairz00_1724);
																																														}
																																														BgL_arg1382z00_408
																																															=
																																															CDR
																																															(
																																															((obj_t) BgL_cdrzd21558zd2_406));
																																														{
																																															obj_t
																																																BgL_bodyz00_2251;
																																															obj_t
																																																BgL_exitz00_2250;
																																															BgL_exitz00_2250
																																																=
																																																BgL_arg1381z00_407;
																																															BgL_bodyz00_2251
																																																=
																																																BgL_arg1382z00_408;
																																															BgL_bodyz00_328
																																																=
																																																BgL_bodyz00_2251;
																																															BgL_exitz00_327
																																																=
																																																BgL_exitz00_2250;
																																															goto
																																																BgL_tagzd21346zd2_329;
																																														}
																																													}
																																												}
																																										}
																																									else
																																										{	/* Expand/exit.scm 155 */
																																											obj_t
																																												BgL_cdrzd21577zd2_410;
																																											BgL_cdrzd21577zd2_410
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_xz00_31));
																																											{	/* Expand/exit.scm 155 */
																																												obj_t
																																													BgL_arg1384z00_411;
																																												obj_t
																																													BgL_arg1385z00_412;
																																												{	/* Expand/exit.scm 155 */
																																													obj_t
																																														BgL_pairz00_1728;
																																													BgL_pairz00_1728
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd21577zd2_410));
																																													BgL_arg1384z00_411
																																														=
																																														CAR
																																														(BgL_pairz00_1728);
																																												}
																																												BgL_arg1385z00_412
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_cdrzd21577zd2_410));
																																												{
																																													obj_t
																																														BgL_bodyz00_2260;
																																													obj_t
																																														BgL_exitz00_2259;
																																													BgL_exitz00_2259
																																														=
																																														BgL_arg1384z00_411;
																																													BgL_bodyz00_2260
																																														=
																																														BgL_arg1385z00_412;
																																													BgL_bodyz00_328
																																														=
																																														BgL_bodyz00_2260;
																																													BgL_exitz00_327
																																														=
																																														BgL_exitz00_2259;
																																													goto
																																														BgL_tagzd21346zd2_329;
																																												}
																																											}
																																										}
																																								}
																																							else
																																								{	/* Expand/exit.scm 155 */
																																									if ((BgL_carzd21384zd2_344 == CNST_TABLE_REF(((long) 15))))
																																										{	/* Expand/exit.scm 155 */
																																											goto
																																												BgL_kapzd21388zd2_346;
																																										}
																																									else
																																										{	/* Expand/exit.scm 155 */
																																											if ((BgL_carzd21384zd2_344 == CNST_TABLE_REF(((long) 16))))
																																												{	/* Expand/exit.scm 155 */
																																													goto
																																														BgL_kapzd21388zd2_346;
																																												}
																																											else
																																												{	/* Expand/exit.scm 155 */
																																													if ((BgL_carzd21384zd2_344 == CNST_TABLE_REF(((long) 17))))
																																														{	/* Expand/exit.scm 155 */
																																															goto
																																																BgL_kapzd21388zd2_346;
																																														}
																																													else
																																														{	/* Expand/exit.scm 155 */
																																															obj_t
																																																BgL_arg1311z00_353;
																																															obj_t
																																																BgL_arg1312z00_354;
																																															{	/* Expand/exit.scm 155 */
																																																obj_t
																																																	BgL_pairz00_1740;
																																																BgL_pairz00_1740
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd21360zd2_333));
																																																BgL_arg1311z00_353
																																																	=
																																																	CAR
																																																	(BgL_pairz00_1740);
																																															}
																																															BgL_arg1312z00_354
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd21360zd2_333));
																																															{
																																																obj_t
																																																	BgL_bodyz00_2276;
																																																obj_t
																																																	BgL_exitz00_2275;
																																																BgL_exitz00_2275
																																																	=
																																																	BgL_arg1311z00_353;
																																																BgL_bodyz00_2276
																																																	=
																																																	BgL_arg1312z00_354;
																																																BgL_bodyz00_328
																																																	=
																																																	BgL_bodyz00_2276;
																																																BgL_exitz00_327
																																																	=
																																																	BgL_exitz00_2275;
																																																goto
																																																	BgL_tagzd21346zd2_329;
																																															}
																																														}
																																												}
																																										}
																																								}
																																						}
																																					}
																																				else
																																					{	/* Expand/exit.scm 155 */
																																						obj_t
																																							BgL_arg1387z00_415;
																																						obj_t
																																							BgL_arg1388z00_416;
																																						{	/* Expand/exit.scm 155 */
																																							obj_t
																																								BgL_pairz00_1744;
																																							BgL_pairz00_1744
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd21360zd2_333));
																																							BgL_arg1387z00_415
																																								=
																																								CAR
																																								(BgL_pairz00_1744);
																																						}
																																						BgL_arg1388z00_416
																																							=
																																							CDR
																																							(((obj_t) BgL_cdrzd21360zd2_333));
																																						{
																																							obj_t
																																								BgL_bodyz00_2283;
																																							obj_t
																																								BgL_exitz00_2282;
																																							BgL_exitz00_2282
																																								=
																																								BgL_arg1387z00_415;
																																							BgL_bodyz00_2283
																																								=
																																								BgL_arg1388z00_416;
																																							BgL_bodyz00_328
																																								=
																																								BgL_bodyz00_2283;
																																							BgL_exitz00_327
																																								=
																																								BgL_exitz00_2282;
																																							goto
																																								BgL_tagzd21346zd2_329;
																																						}
																																					}
																																			}
																																		else
																																			{	/* Expand/exit.scm 155 */
																																				obj_t
																																					BgL_arg1396z00_419;
																																				obj_t
																																					BgL_arg1417z00_420;
																																				{	/* Expand/exit.scm 155 */
																																					obj_t
																																						BgL_pairz00_1748;
																																					BgL_pairz00_1748
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd21360zd2_333));
																																					BgL_arg1396z00_419
																																						=
																																						CAR
																																						(BgL_pairz00_1748);
																																				}
																																				BgL_arg1417z00_420
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_cdrzd21360zd2_333));
																																				{
																																					obj_t
																																						BgL_bodyz00_2290;
																																					obj_t
																																						BgL_exitz00_2289;
																																					BgL_exitz00_2289
																																						=
																																						BgL_arg1396z00_419;
																																					BgL_bodyz00_2290
																																						=
																																						BgL_arg1417z00_420;
																																					BgL_bodyz00_328
																																						=
																																						BgL_bodyz00_2290;
																																					BgL_exitz00_327
																																						=
																																						BgL_exitz00_2289;
																																					goto
																																						BgL_tagzd21346zd2_329;
																																				}
																																			}
																																	}
																																else
																																	{	/* Expand/exit.scm 155 */
																																	BgL_tagzd21347zd2_330:
																																		return
																																			BGl_errorz00zz__errorz00
																																			(BFALSE,
																																			BGl_string2338z00zzexpand_exitz00,
																																			BgL_xz00_31);
																																	}
																															}
																														else
																															{	/* Expand/exit.scm 155 */
																																goto
																																	BgL_tagzd21347zd2_330;
																															}
																													}
																												else
																													{	/* Expand/exit.scm 155 */
																														goto
																															BgL_tagzd21347zd2_330;
																													}
																											}
																										else
																											{	/* Expand/exit.scm 155 */
																												goto
																													BgL_tagzd21347zd2_330;
																											}
																									}
																								}
																						}
																					else
																						{	/* Expand/exit.scm 142 */
																							obj_t BgL_arg1273z00_292;
																							obj_t BgL_arg1274z00_293;

																							{	/* Expand/exit.scm 142 */
																								obj_t BgL_pairz00_1776;

																								BgL_pairz00_1776 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd21192zd2_266));
																								BgL_arg1273z00_292 =
																									CAR(BgL_pairz00_1776);
																							}
																							BgL_arg1274z00_293 =
																								CDR(
																								((obj_t)
																									BgL_cdrzd21192zd2_266));
																							{
																								obj_t BgL_exprsz00_2298;
																								obj_t BgL_exitz00_2297;

																								BgL_exitz00_2297 =
																									BgL_arg1273z00_292;
																								BgL_exprsz00_2298 =
																									BgL_arg1274z00_293;
																								BgL_exprsz00_261 =
																									BgL_exprsz00_2298;
																								BgL_exitz00_260 =
																									BgL_exitz00_2297;
																								goto BgL_tagzd21183zd2_262;
																							}
																						}
																				}
																			else
																				{	/* Expand/exit.scm 142 */
																					obj_t BgL_arg1277z00_297;
																					obj_t BgL_arg1280z00_298;

																					{	/* Expand/exit.scm 142 */
																						obj_t BgL_pairz00_1780;

																						BgL_pairz00_1780 =
																							CAR(
																							((obj_t) BgL_cdrzd21192zd2_266));
																						BgL_arg1277z00_297 =
																							CAR(BgL_pairz00_1780);
																					}
																					BgL_arg1280z00_298 =
																						CDR(
																						((obj_t) BgL_cdrzd21192zd2_266));
																					{
																						obj_t BgL_exprsz00_2305;
																						obj_t BgL_exitz00_2304;

																						BgL_exitz00_2304 =
																							BgL_arg1277z00_297;
																						BgL_exprsz00_2305 =
																							BgL_arg1280z00_298;
																						BgL_exprsz00_261 =
																							BgL_exprsz00_2305;
																						BgL_exitz00_260 = BgL_exitz00_2304;
																						goto BgL_tagzd21183zd2_262;
																					}
																				}
																		}
																	else
																		{	/* Expand/exit.scm 142 */
																			obj_t BgL_arg1282z00_301;
																			obj_t BgL_arg1284z00_302;

																			{	/* Expand/exit.scm 142 */
																				obj_t BgL_pairz00_1784;

																				BgL_pairz00_1784 =
																					CAR(((obj_t) BgL_cdrzd21192zd2_266));
																				BgL_arg1282z00_301 =
																					CAR(BgL_pairz00_1784);
																			}
																			BgL_arg1284z00_302 =
																				CDR(((obj_t) BgL_cdrzd21192zd2_266));
																			{
																				obj_t BgL_exprsz00_2312;
																				obj_t BgL_exitz00_2311;

																				BgL_exitz00_2311 = BgL_arg1282z00_301;
																				BgL_exprsz00_2312 = BgL_arg1284z00_302;
																				BgL_exprsz00_261 = BgL_exprsz00_2312;
																				BgL_exitz00_260 = BgL_exitz00_2311;
																				goto BgL_tagzd21183zd2_262;
																			}
																		}
																}
															else
																{	/* Expand/exit.scm 142 */
																	obj_t BgL_arg1287z00_306;
																	obj_t BgL_arg1288z00_307;

																	{	/* Expand/exit.scm 142 */
																		obj_t BgL_pairz00_1788;

																		BgL_pairz00_1788 =
																			CAR(((obj_t) BgL_cdrzd21192zd2_266));
																		BgL_arg1287z00_306 = CAR(BgL_pairz00_1788);
																	}
																	BgL_arg1288z00_307 =
																		CDR(((obj_t) BgL_cdrzd21192zd2_266));
																	{
																		obj_t BgL_exprsz00_2319;
																		obj_t BgL_exitz00_2318;

																		BgL_exitz00_2318 = BgL_arg1287z00_306;
																		BgL_exprsz00_2319 = BgL_arg1288z00_307;
																		BgL_exprsz00_261 = BgL_exprsz00_2319;
																		BgL_exitz00_260 = BgL_exitz00_2318;
																		goto BgL_tagzd21183zd2_262;
																	}
																}
														}
													else
														{	/* Expand/exit.scm 142 */
															obj_t BgL_arg1290z00_310;
															obj_t BgL_arg1291z00_311;

															{	/* Expand/exit.scm 142 */
																obj_t BgL_pairz00_1792;

																BgL_pairz00_1792 =
																	CAR(((obj_t) BgL_cdrzd21192zd2_266));
																BgL_arg1290z00_310 = CAR(BgL_pairz00_1792);
															}
															BgL_arg1291z00_311 =
																CDR(((obj_t) BgL_cdrzd21192zd2_266));
															{
																obj_t BgL_exprsz00_2326;
																obj_t BgL_exitz00_2325;

																BgL_exitz00_2325 = BgL_arg1290z00_310;
																BgL_exprsz00_2326 = BgL_arg1291z00_311;
																BgL_exprsz00_261 = BgL_exprsz00_2326;
																BgL_exitz00_260 = BgL_exitz00_2325;
																goto BgL_tagzd21183zd2_262;
															}
														}
												}
											else
												{	/* Expand/exit.scm 142 */
												BgL_tagzd21184zd2_263:
													return
														BGl_errorz00zz__errorz00(BFALSE,
														BGl_string2338z00zzexpand_exitz00, BgL_xz00_31);
												}
										}
									else
										{	/* Expand/exit.scm 142 */
											goto BgL_tagzd21184zd2_263;
										}
								}
							else
								{	/* Expand/exit.scm 142 */
									goto BgL_tagzd21184zd2_263;
								}
						}
					else
						{	/* Expand/exit.scm 142 */
							goto BgL_tagzd21184zd2_263;
						}
				}
			}
		}

	}



/* find-in-body~0 */
	bool_t BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00(obj_t BgL_kz00_470,
		obj_t BgL_bodyz00_471)
	{
		{	/* Expand/exit.scm 70 */
		BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00:
			if ((BgL_bodyz00_471 == BgL_kz00_470))
				{	/* Expand/exit.scm 65 */
					return ((bool_t) 1);
				}
			else
				{	/* Expand/exit.scm 65 */
					if (PAIRP(BgL_bodyz00_471))
						{	/* Expand/exit.scm 67 */
							if ((CAR(BgL_bodyz00_471) == CNST_TABLE_REF(((long) 18))))
								{	/* Expand/exit.scm 68 */
									return ((bool_t) 0);
								}
							else
								{	/* Expand/exit.scm 69 */
									bool_t BgL__ortest_1052z00_477;

									BgL__ortest_1052z00_477 =
										BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00(BgL_kz00_470,
										CAR(BgL_bodyz00_471));
									if (BgL__ortest_1052z00_477)
										{	/* Expand/exit.scm 69 */
											return BgL__ortest_1052z00_477;
										}
									else
										{
											obj_t BgL_bodyz00_2339;

											BgL_bodyz00_2339 = CDR(BgL_bodyz00_471);
											BgL_bodyz00_471 = BgL_bodyz00_2339;
											goto BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00;
										}
								}
						}
					else
						{	/* Expand/exit.scm 67 */
							return ((bool_t) 0);
						}
				}
		}

	}



/* tailrec?~0 */
	bool_t BGl_tailreczf3ze70z14zzexpand_exitz00(obj_t BgL_exitz00_505,
		obj_t BgL_bodyz00_506)
	{
		{	/* Expand/exit.scm 100 */
		BGl_tailreczf3ze70z14zzexpand_exitz00:
			{
				obj_t BgL_exitz00_481;
				obj_t BgL_bodyz00_482;

				{
					obj_t BgL_bindingsz00_516;
					obj_t BgL_bodyz00_517;

					if (PAIRP(BgL_bodyz00_506))
						{	/* Expand/exit.scm 100 */
							obj_t BgL_cdrzd2411zd2_528;

							BgL_cdrzd2411zd2_528 = CDR(BgL_bodyz00_506);
							if ((CAR(BgL_bodyz00_506) == BgL_exitz00_505))
								{	/* Expand/exit.scm 100 */
									if (PAIRP(BgL_cdrzd2411zd2_528))
										{	/* Expand/exit.scm 100 */
											if (NULLP(CDR(BgL_cdrzd2411zd2_528)))
												{	/* Expand/exit.scm 100 */
													if (BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00
														(BgL_exitz00_505, CAR(BgL_cdrzd2411zd2_528)))
														{	/* Expand/exit.scm 80 */
															return ((bool_t) 0);
														}
													else
														{	/* Expand/exit.scm 80 */
															return ((bool_t) 1);
														}
												}
											else
												{	/* Expand/exit.scm 100 */
													if (
														(CAR(BgL_bodyz00_506) ==
															CNST_TABLE_REF(((long) 11))))
														{	/* Expand/exit.scm 100 */
															if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
																(BgL_cdrzd2411zd2_528))
																{	/* Expand/exit.scm 100 */
																	BgL_exitz00_481 = BgL_exitz00_505;
																	BgL_bodyz00_482 = BgL_cdrzd2411zd2_528;
																BgL_zc3z04anonymousza31565ze3z87_483:
																	{	/* Expand/exit.scm 73 */
																		obj_t BgL_ydobz00_484;

																		BgL_ydobz00_484 =
																			bgl_reverse(BgL_bodyz00_482);
																		{	/* Expand/exit.scm 74 */
																			bool_t BgL_test2417z00_2362;

																			{
																				obj_t BgL_l1118z00_498;

																				BgL_l1118z00_498 =
																					CDR(((obj_t) BgL_ydobz00_484));
																			BgL_zc3z04anonymousza31576ze3z87_499:
																				if (NULLP(BgL_l1118z00_498))
																					{	/* Expand/exit.scm 74 */
																						BgL_test2417z00_2362 = ((bool_t) 0);
																					}
																				else
																					{	/* Expand/exit.scm 74 */
																						bool_t BgL__ortest_1121z00_501;

																						BgL__ortest_1121z00_501 =
																							BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00
																							(BgL_exitz00_481,
																							CAR(((obj_t) BgL_l1118z00_498)));
																						if (BgL__ortest_1121z00_501)
																							{	/* Expand/exit.scm 74 */
																								BgL_test2417z00_2362 =
																									BgL__ortest_1121z00_501;
																							}
																						else
																							{
																								obj_t BgL_l1118z00_2369;

																								BgL_l1118z00_2369 =
																									CDR(
																									((obj_t) BgL_l1118z00_498));
																								BgL_l1118z00_498 =
																									BgL_l1118z00_2369;
																								goto
																									BgL_zc3z04anonymousza31576ze3z87_499;
																							}
																					}
																			}
																			if (BgL_test2417z00_2362)
																				{	/* Expand/exit.scm 74 */
																					return ((bool_t) 0);
																				}
																			else
																				{	/* Expand/exit.scm 75 */
																					obj_t BgL_arg1575z00_495;

																					BgL_arg1575z00_495 =
																						CAR(((obj_t) BgL_ydobz00_484));
																					{
																						obj_t BgL_bodyz00_2377;
																						obj_t BgL_exitz00_2376;

																						BgL_exitz00_2376 = BgL_exitz00_481;
																						BgL_bodyz00_2377 =
																							BgL_arg1575z00_495;
																						BgL_bodyz00_506 = BgL_bodyz00_2377;
																						BgL_exitz00_505 = BgL_exitz00_2376;
																						goto
																							BGl_tailreczf3ze70z14zzexpand_exitz00;
																					}
																				}
																		}
																	}
																}
															else
																{	/* Expand/exit.scm 100 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Expand/exit.scm 100 */
															obj_t BgL_cdrzd2478zd2_560;

															BgL_cdrzd2478zd2_560 = CDR(BgL_bodyz00_506);
															if (
																(CAR(BgL_bodyz00_506) ==
																	CNST_TABLE_REF(((long) 19))))
																{	/* Expand/exit.scm 100 */
																	obj_t BgL_cdrzd2484zd2_563;

																	BgL_cdrzd2484zd2_563 =
																		CDR(((obj_t) BgL_cdrzd2478zd2_560));
																	if (PAIRP(BgL_cdrzd2484zd2_563))
																		{	/* Expand/exit.scm 100 */
																			obj_t BgL_cdrzd2490zd2_565;

																			BgL_cdrzd2490zd2_565 =
																				CDR(BgL_cdrzd2484zd2_563);
																			if (PAIRP(BgL_cdrzd2490zd2_565))
																				{	/* Expand/exit.scm 100 */
																					if (NULLP(CDR(BgL_cdrzd2490zd2_565)))
																						{	/* Expand/exit.scm 100 */
																							obj_t BgL_arg1613z00_569;
																							obj_t BgL_arg1624z00_570;
																							obj_t BgL_arg1626z00_571;

																							BgL_arg1613z00_569 =
																								CAR(
																								((obj_t) BgL_cdrzd2478zd2_560));
																							BgL_arg1624z00_570 =
																								CAR(BgL_cdrzd2484zd2_563);
																							BgL_arg1626z00_571 =
																								CAR(BgL_cdrzd2490zd2_565);
																							if (BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00(BgL_exitz00_505, BgL_arg1613z00_569))
																								{	/* Expand/exit.scm 84 */
																									return ((bool_t) 0);
																								}
																							else
																								{	/* Expand/exit.scm 84 */
																									if (BGl_tailreczf3ze70z14zzexpand_exitz00(BgL_exitz00_505, BgL_arg1624z00_570))
																										{
																											obj_t BgL_bodyz00_2401;

																											BgL_bodyz00_2401 =
																												BgL_arg1626z00_571;
																											BgL_bodyz00_506 =
																												BgL_bodyz00_2401;
																											goto
																												BGl_tailreczf3ze70z14zzexpand_exitz00;
																										}
																									else
																										{	/* Expand/exit.scm 85 */
																											return ((bool_t) 0);
																										}
																								}
																						}
																					else
																						{	/* Expand/exit.scm 100 */
																							return ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Expand/exit.scm 100 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Expand/exit.scm 100 */
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Expand/exit.scm 100 */
																	obj_t BgL_carzd2580zd2_636;

																	BgL_carzd2580zd2_636 = CAR(BgL_bodyz00_506);
																	{

																		if (
																			(BgL_carzd2580zd2_636 ==
																				CNST_TABLE_REF(((long) 13))))
																			{	/* Expand/exit.scm 100 */
																			BgL_kapzd2582zd2_638:
																				{	/* Expand/exit.scm 100 */
																					obj_t BgL_carzd2586zd2_681;

																					BgL_carzd2586zd2_681 =
																						CAR(((obj_t) BgL_cdrzd2478zd2_560));
																					if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2586zd2_681))
																						{	/* Expand/exit.scm 100 */
																							obj_t BgL_arg1711z00_683;

																							BgL_arg1711z00_683 =
																								CDR(
																								((obj_t) BgL_cdrzd2478zd2_560));
																							BgL_bindingsz00_516 =
																								BgL_carzd2586zd2_681;
																							BgL_bodyz00_517 =
																								BgL_arg1711z00_683;
																						BgL_tagzd2395zd2_518:
																							{	/* Expand/exit.scm 88 */
																								bool_t BgL_test2428z00_2412;

																								{
																									obj_t BgL_l1122z00_999;

																									BgL_l1122z00_999 =
																										BgL_bindingsz00_516;
																								BgL_zc3z04anonymousza31928ze3z87_1000:
																									if (NULLP
																										(BgL_l1122z00_999))
																										{	/* Expand/exit.scm 88 */
																											BgL_test2428z00_2412 =
																												((bool_t) 0);
																										}
																									else
																										{	/* Expand/exit.scm 88 */
																											bool_t
																												BgL__ortest_1124z00_1002;
																											BgL__ortest_1124z00_1002 =
																												BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00
																												(BgL_exitz00_505,
																												CAR(((obj_t)
																														BgL_l1122z00_999)));
																											if (BgL__ortest_1124z00_1002)
																												{	/* Expand/exit.scm 88 */
																													BgL_test2428z00_2412 =
																														BgL__ortest_1124z00_1002;
																												}
																											else
																												{
																													obj_t
																														BgL_l1122z00_2419;
																													BgL_l1122z00_2419 =
																														CDR(((obj_t)
																															BgL_l1122z00_999));
																													BgL_l1122z00_999 =
																														BgL_l1122z00_2419;
																													goto
																														BgL_zc3z04anonymousza31928ze3z87_1000;
																												}
																										}
																								}
																								if (BgL_test2428z00_2412)
																									{	/* Expand/exit.scm 88 */
																										return ((bool_t) 0);
																									}
																								else
																									{
																										obj_t BgL_bodyz00_2423;
																										obj_t BgL_exitz00_2422;

																										BgL_exitz00_2422 =
																											BgL_exitz00_505;
																										BgL_bodyz00_2423 =
																											BgL_bodyz00_517;
																										BgL_bodyz00_482 =
																											BgL_bodyz00_2423;
																										BgL_exitz00_481 =
																											BgL_exitz00_2422;
																										goto
																											BgL_zc3z04anonymousza31565ze3z87_483;
																									}
																							}
																						}
																					else
																						{	/* Expand/exit.scm 100 */
																							obj_t BgL_cdrzd2599zd2_684;

																							BgL_cdrzd2599zd2_684 =
																								CDR(((obj_t) BgL_bodyz00_506));
																							if (
																								(CAR(
																										((obj_t) BgL_bodyz00_506))
																									==
																									CNST_TABLE_REF(((long) 20))))
																								{	/* Expand/exit.scm 100 */
																									obj_t BgL_carzd2602zd2_687;

																									BgL_carzd2602zd2_687 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2599zd2_684));
																									if (PAIRP
																										(BgL_carzd2602zd2_687))
																										{	/* Expand/exit.scm 100 */
																											if (NULLP(CDR
																													(BgL_carzd2602zd2_687)))
																												{	/* Expand/exit.scm 100 */
																													obj_t
																														BgL_arg1725z00_691;
																													obj_t
																														BgL_arg1726z00_692;
																													BgL_arg1725z00_691 =
																														CAR
																														(BgL_carzd2602zd2_687);
																													BgL_arg1726z00_692 =
																														CDR(((obj_t)
																															BgL_cdrzd2599zd2_684));
																													if (
																														(BgL_arg1725z00_691
																															==
																															BgL_exitz00_505))
																														{	/* Expand/exit.scm 91 */
																															return ((bool_t)
																																0);
																														}
																													else
																														{
																															obj_t
																																BgL_bodyz00_2444;
																															obj_t
																																BgL_exitz00_2443;
																															BgL_exitz00_2443 =
																																BgL_exitz00_505;
																															BgL_bodyz00_2444 =
																																BgL_arg1726z00_692;
																															BgL_bodyz00_482 =
																																BgL_bodyz00_2444;
																															BgL_exitz00_481 =
																																BgL_exitz00_2443;
																															goto
																																BgL_zc3z04anonymousza31565ze3z87_483;
																														}
																												}
																											else
																												{	/* Expand/exit.scm 100 */
																													return ((bool_t) 0);
																												}
																										}
																									else
																										{	/* Expand/exit.scm 100 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Expand/exit.scm 100 */
																									return
																										(CAR(
																											((obj_t) BgL_bodyz00_506))
																										==
																										CNST_TABLE_REF(((long)
																												18)));
																			}}}}
																		else
																			{	/* Expand/exit.scm 100 */
																				if (
																					(BgL_carzd2580zd2_636 ==
																						CNST_TABLE_REF(((long) 15))))
																					{	/* Expand/exit.scm 100 */
																						goto BgL_kapzd2582zd2_638;
																					}
																				else
																					{	/* Expand/exit.scm 100 */
																						if (
																							(BgL_carzd2580zd2_636 ==
																								CNST_TABLE_REF(((long) 16))))
																							{	/* Expand/exit.scm 100 */
																								goto BgL_kapzd2582zd2_638;
																							}
																						else
																							{	/* Expand/exit.scm 100 */
																								if (
																									(BgL_carzd2580zd2_636 ==
																										CNST_TABLE_REF(((long)
																												17))))
																									{	/* Expand/exit.scm 100 */
																										goto BgL_kapzd2582zd2_638;
																									}
																								else
																									{	/* Expand/exit.scm 100 */
																										obj_t BgL_cdrzd2618zd2_643;

																										BgL_cdrzd2618zd2_643 =
																											CDR(BgL_bodyz00_506);
																										if (
																											(CAR(BgL_bodyz00_506) ==
																												CNST_TABLE_REF(((long)
																														20))))
																											{	/* Expand/exit.scm 100 */
																												obj_t
																													BgL_carzd2621zd2_646;
																												BgL_carzd2621zd2_646 =
																													CAR(((obj_t)
																														BgL_cdrzd2618zd2_643));
																												if (PAIRP
																													(BgL_carzd2621zd2_646))
																													{	/* Expand/exit.scm 100 */
																														if (NULLP(CDR
																																(BgL_carzd2621zd2_646)))
																															{	/* Expand/exit.scm 100 */
																																obj_t
																																	BgL_arg1686z00_650;
																																obj_t
																																	BgL_arg1687z00_651;
																																BgL_arg1686z00_650
																																	=
																																	CAR
																																	(BgL_carzd2621zd2_646);
																																BgL_arg1687z00_651
																																	=
																																	CDR(((obj_t)
																																		BgL_cdrzd2618zd2_643));
																																if (
																																	(BgL_arg1686z00_650
																																		==
																																		BgL_exitz00_505))
																																	{	/* Expand/exit.scm 91 */
																																		return (
																																			(bool_t)
																																			0);
																																	}
																																else
																																	{
																																		obj_t
																																			BgL_bodyz00_2476;
																																		obj_t
																																			BgL_exitz00_2475;
																																		BgL_exitz00_2475
																																			=
																																			BgL_exitz00_505;
																																		BgL_bodyz00_2476
																																			=
																																			BgL_arg1687z00_651;
																																		BgL_bodyz00_482
																																			=
																																			BgL_bodyz00_2476;
																																		BgL_exitz00_481
																																			=
																																			BgL_exitz00_2475;
																																		goto
																																			BgL_zc3z04anonymousza31565ze3z87_483;
																																	}
																															}
																														else
																															{	/* Expand/exit.scm 100 */
																																return ((bool_t)
																																	0);
																															}
																													}
																												else
																													{	/* Expand/exit.scm 100 */
																														return ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Expand/exit.scm 100 */
																												return
																													(CAR(BgL_bodyz00_506)
																													==
																													CNST_TABLE_REF(((long)
																															18)));
										}}}}}}}}}}
									else
										{	/* Expand/exit.scm 100 */
											if ((CAR(BgL_bodyz00_506) == CNST_TABLE_REF(((long) 11))))
												{	/* Expand/exit.scm 100 */
													if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
														(BgL_cdrzd2411zd2_528))
														{
															obj_t BgL_bodyz00_2487;
															obj_t BgL_exitz00_2486;

															BgL_exitz00_2486 = BgL_exitz00_505;
															BgL_bodyz00_2487 = BgL_cdrzd2411zd2_528;
															BgL_bodyz00_482 = BgL_bodyz00_2487;
															BgL_exitz00_481 = BgL_exitz00_2486;
															goto BgL_zc3z04anonymousza31565ze3z87_483;
														}
													else
														{	/* Expand/exit.scm 100 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Expand/exit.scm 100 */
													return
														(CAR(BgL_bodyz00_506) ==
														CNST_TABLE_REF(((long) 18)));
								}}}
							else
								{	/* Expand/exit.scm 100 */
									if ((CAR(BgL_bodyz00_506) == CNST_TABLE_REF(((long) 11))))
										{	/* Expand/exit.scm 100 */
											if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
												(BgL_cdrzd2411zd2_528))
												{
													obj_t BgL_bodyz00_2498;
													obj_t BgL_exitz00_2497;

													BgL_exitz00_2497 = BgL_exitz00_505;
													BgL_bodyz00_2498 = BgL_cdrzd2411zd2_528;
													BgL_bodyz00_482 = BgL_bodyz00_2498;
													BgL_exitz00_481 = BgL_exitz00_2497;
													goto BgL_zc3z04anonymousza31565ze3z87_483;
												}
											else
												{	/* Expand/exit.scm 100 */
													return ((bool_t) 0);
												}
										}
									else
										{	/* Expand/exit.scm 100 */
											obj_t BgL_cdrzd2741zd2_783;

											BgL_cdrzd2741zd2_783 = CDR(BgL_bodyz00_506);
											if ((CAR(BgL_bodyz00_506) == CNST_TABLE_REF(((long) 19))))
												{	/* Expand/exit.scm 100 */
													if (PAIRP(BgL_cdrzd2741zd2_783))
														{	/* Expand/exit.scm 100 */
															obj_t BgL_cdrzd2746zd2_787;

															BgL_cdrzd2746zd2_787 = CDR(BgL_cdrzd2741zd2_783);
															if (PAIRP(BgL_cdrzd2746zd2_787))
																{	/* Expand/exit.scm 100 */
																	obj_t BgL_cdrzd2751zd2_789;

																	BgL_cdrzd2751zd2_789 =
																		CDR(BgL_cdrzd2746zd2_787);
																	if (PAIRP(BgL_cdrzd2751zd2_789))
																		{	/* Expand/exit.scm 100 */
																			if (NULLP(CDR(BgL_cdrzd2751zd2_789)))
																				{	/* Expand/exit.scm 100 */
																					obj_t BgL_arg1811z00_793;
																					obj_t BgL_arg1820z00_794;
																					obj_t BgL_arg1821z00_795;

																					BgL_arg1811z00_793 =
																						CAR(BgL_cdrzd2741zd2_783);
																					BgL_arg1820z00_794 =
																						CAR(BgL_cdrzd2746zd2_787);
																					BgL_arg1821z00_795 =
																						CAR(BgL_cdrzd2751zd2_789);
																					if (BGl_findzd2inzd2bodyze70ze7zzexpand_exitz00(BgL_exitz00_505, BgL_arg1811z00_793))
																						{	/* Expand/exit.scm 84 */
																							return ((bool_t) 0);
																						}
																					else
																						{	/* Expand/exit.scm 84 */
																							if (BGl_tailreczf3ze70z14zzexpand_exitz00(BgL_exitz00_505, BgL_arg1820z00_794))
																								{
																									obj_t BgL_bodyz00_2522;

																									BgL_bodyz00_2522 =
																										BgL_arg1821z00_795;
																									BgL_bodyz00_506 =
																										BgL_bodyz00_2522;
																									goto
																										BGl_tailreczf3ze70z14zzexpand_exitz00;
																								}
																							else
																								{	/* Expand/exit.scm 85 */
																									return ((bool_t) 0);
																								}
																						}
																				}
																			else
																				{	/* Expand/exit.scm 100 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Expand/exit.scm 100 */
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Expand/exit.scm 100 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Expand/exit.scm 100 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Expand/exit.scm 100 */
													obj_t BgL_carzd2861zd2_868;

													BgL_carzd2861zd2_868 = CAR(BgL_bodyz00_506);
													{

														if (
															(BgL_carzd2861zd2_868 ==
																CNST_TABLE_REF(((long) 13))))
															{	/* Expand/exit.scm 100 */
															BgL_kapzd2863zd2_870:
																if (PAIRP(BgL_cdrzd2741zd2_783))
																	{	/* Expand/exit.scm 100 */
																		obj_t BgL_carzd2866zd2_923;

																		BgL_carzd2866zd2_923 =
																			CAR(BgL_cdrzd2741zd2_783);
																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2866zd2_923))
																			{
																				obj_t BgL_bodyz00_2533;
																				obj_t BgL_bindingsz00_2532;

																				BgL_bindingsz00_2532 =
																					BgL_carzd2866zd2_923;
																				BgL_bodyz00_2533 =
																					CDR(BgL_cdrzd2741zd2_783);
																				BgL_bodyz00_517 = BgL_bodyz00_2533;
																				BgL_bindingsz00_516 =
																					BgL_bindingsz00_2532;
																				goto BgL_tagzd2395zd2_518;
																			}
																		else
																			{	/* Expand/exit.scm 100 */
																				obj_t BgL_cdrzd2877zd2_926;

																				BgL_cdrzd2877zd2_926 =
																					CDR(((obj_t) BgL_bodyz00_506));
																				if (
																					(CAR(
																							((obj_t) BgL_bodyz00_506)) ==
																						CNST_TABLE_REF(((long) 20))))
																					{	/* Expand/exit.scm 100 */
																						obj_t BgL_carzd2880zd2_929;

																						BgL_carzd2880zd2_929 =
																							CAR(
																							((obj_t) BgL_cdrzd2877zd2_926));
																						if (PAIRP(BgL_carzd2880zd2_929))
																							{	/* Expand/exit.scm 100 */
																								if (NULLP(CDR
																										(BgL_carzd2880zd2_929)))
																									{	/* Expand/exit.scm 100 */
																										obj_t BgL_arg1893z00_933;
																										obj_t BgL_arg1895z00_934;

																										BgL_arg1893z00_933 =
																											CAR(BgL_carzd2880zd2_929);
																										BgL_arg1895z00_934 =
																											CDR(
																											((obj_t)
																												BgL_cdrzd2877zd2_926));
																										if ((BgL_arg1893z00_933 ==
																												BgL_exitz00_505))
																											{	/* Expand/exit.scm 91 */
																												return ((bool_t) 0);
																											}
																										else
																											{
																												obj_t BgL_bodyz00_2555;
																												obj_t BgL_exitz00_2554;

																												BgL_exitz00_2554 =
																													BgL_exitz00_505;
																												BgL_bodyz00_2555 =
																													BgL_arg1895z00_934;
																												BgL_bodyz00_482 =
																													BgL_bodyz00_2555;
																												BgL_exitz00_481 =
																													BgL_exitz00_2554;
																												goto
																													BgL_zc3z04anonymousza31565ze3z87_483;
																											}
																									}
																								else
																									{	/* Expand/exit.scm 100 */
																										return ((bool_t) 0);
																									}
																							}
																						else
																							{	/* Expand/exit.scm 100 */
																								return ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Expand/exit.scm 100 */
																						return
																							(CAR(
																								((obj_t) BgL_bodyz00_506)) ==
																							CNST_TABLE_REF(((long) 18)));
																	}}}
																else
																	{	/* Expand/exit.scm 100 */
																		return
																			(CAR(
																				((obj_t) BgL_bodyz00_506)) ==
																			CNST_TABLE_REF(((long) 18)));
															}}
														else
															{	/* Expand/exit.scm 100 */
																if (
																	(BgL_carzd2861zd2_868 ==
																		CNST_TABLE_REF(((long) 15))))
																	{	/* Expand/exit.scm 100 */
																		goto BgL_kapzd2863zd2_870;
																	}
																else
																	{	/* Expand/exit.scm 100 */
																		if (
																			(BgL_carzd2861zd2_868 ==
																				CNST_TABLE_REF(((long) 16))))
																			{	/* Expand/exit.scm 100 */
																				goto BgL_kapzd2863zd2_870;
																			}
																		else
																			{	/* Expand/exit.scm 100 */
																				if (
																					(BgL_carzd2861zd2_868 ==
																						CNST_TABLE_REF(((long) 17))))
																					{	/* Expand/exit.scm 100 */
																						goto BgL_kapzd2863zd2_870;
																					}
																				else
																					{	/* Expand/exit.scm 100 */
																						obj_t BgL_cdrzd2902zd2_875;

																						BgL_cdrzd2902zd2_875 =
																							CDR(BgL_bodyz00_506);
																						if (
																							(CAR(BgL_bodyz00_506) ==
																								CNST_TABLE_REF(((long) 20))))
																							{	/* Expand/exit.scm 100 */
																								if (PAIRP(BgL_cdrzd2902zd2_875))
																									{	/* Expand/exit.scm 100 */
																										obj_t BgL_carzd2905zd2_879;

																										BgL_carzd2905zd2_879 =
																											CAR(BgL_cdrzd2902zd2_875);
																										if (PAIRP
																											(BgL_carzd2905zd2_879))
																											{	/* Expand/exit.scm 100 */
																												if (NULLP(CDR
																														(BgL_carzd2905zd2_879)))
																													{	/* Expand/exit.scm 100 */
																														obj_t
																															BgL_arg1863z00_883;
																														obj_t
																															BgL_arg1865z00_884;
																														BgL_arg1863z00_883 =
																															CAR
																															(BgL_carzd2905zd2_879);
																														BgL_arg1865z00_884 =
																															CDR
																															(BgL_cdrzd2902zd2_875);
																														if (
																															(BgL_arg1863z00_883
																																==
																																BgL_exitz00_505))
																															{	/* Expand/exit.scm 91 */
																																return ((bool_t)
																																	0);
																															}
																														else
																															{
																																obj_t
																																	BgL_bodyz00_2591;
																																obj_t
																																	BgL_exitz00_2590;
																																BgL_exitz00_2590
																																	=
																																	BgL_exitz00_505;
																																BgL_bodyz00_2591
																																	=
																																	BgL_arg1865z00_884;
																																BgL_bodyz00_482
																																	=
																																	BgL_bodyz00_2591;
																																BgL_exitz00_481
																																	=
																																	BgL_exitz00_2590;
																																goto
																																	BgL_zc3z04anonymousza31565ze3z87_483;
																															}
																													}
																												else
																													{	/* Expand/exit.scm 100 */
																														return ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Expand/exit.scm 100 */
																												return ((bool_t) 0);
																											}
																									}
																								else
																									{	/* Expand/exit.scm 100 */
																										return ((bool_t) 0);
																									}
																							}
																						else
																							{	/* Expand/exit.scm 100 */
																								return
																									(CAR(BgL_bodyz00_506) ==
																									CNST_TABLE_REF(((long) 18)));
						}}}}}}}}}}
					else
						{	/* Expand/exit.scm 100 */
							if ((BgL_bodyz00_506 == BgL_exitz00_505))
								{	/* Expand/exit.scm 100 */
									return ((bool_t) 0);
								}
							else
								{	/* Expand/exit.scm 100 */
									return ((bool_t) 1);
								}
						}
				}
			}
		}

	}



/* return!~0 */
	obj_t BGl_returnz12ze70zf5zzexpand_exitz00(obj_t BgL_exitz00_1007,
		obj_t BgL_bodyz00_1008)
	{
		{	/* Expand/exit.scm 121 */
			{
				obj_t BgL_exprsz00_1012;
				obj_t BgL_exprsz00_1018;
				obj_t BgL_exprsz00_1020;

				if (PAIRP(BgL_bodyz00_1008))
					{	/* Expand/exit.scm 121 */
						obj_t BgL_cdrzd2953zd2_1025;

						BgL_cdrzd2953zd2_1025 = CDR(BgL_bodyz00_1008);
						if ((CAR(BgL_bodyz00_1008) == BgL_exitz00_1007))
							{	/* Expand/exit.scm 121 */
								if (PAIRP(BgL_cdrzd2953zd2_1025))
									{	/* Expand/exit.scm 121 */
										if (NULLP(CDR(BgL_cdrzd2953zd2_1025)))
											{	/* Expand/exit.scm 121 */
												{	/* Expand/exit.scm 105 */
													obj_t BgL_objz00_1601;

													BgL_objz00_1601 = CNST_TABLE_REF(((long) 11));
													{	/* Expand/exit.scm 105 */
														obj_t BgL_tmpz00_2609;

														BgL_tmpz00_2609 = ((obj_t) BgL_bodyz00_1008);
														SET_CAR(BgL_tmpz00_2609, BgL_objz00_1601);
												}}
												return BgL_bodyz00_1008;
											}
										else
											{	/* Expand/exit.scm 121 */
												if (
													(CAR(BgL_bodyz00_1008) ==
														CNST_TABLE_REF(((long) 11))))
													{	/* Expand/exit.scm 121 */
														BgL_exprsz00_1012 = BgL_cdrzd2953zd2_1025;
													BgL_tagzd2940zd2_1013:
														BGl_returnz12ze70zf5zzexpand_exitz00
															(BgL_exitz00_1007,
															CAR
															(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																(BgL_exprsz00_1012)));
														return BgL_bodyz00_1008;
													}
												else
													{	/* Expand/exit.scm 121 */
														if (
															(CAR(BgL_bodyz00_1008) ==
																CNST_TABLE_REF(((long) 19))))
															{	/* Expand/exit.scm 121 */
																obj_t BgL_cdrzd2981zd2_1038;

																BgL_cdrzd2981zd2_1038 =
																	CDR(((obj_t) BgL_cdrzd2953zd2_1025));
																if (PAIRP(BgL_cdrzd2981zd2_1038))
																	{	/* Expand/exit.scm 121 */
																		obj_t BgL_cdrzd2987zd2_1040;

																		BgL_cdrzd2987zd2_1040 =
																			CDR(BgL_cdrzd2981zd2_1038);
																		if (PAIRP(BgL_cdrzd2987zd2_1040))
																			{	/* Expand/exit.scm 121 */
																				if (NULLP(CDR(BgL_cdrzd2987zd2_1040)))
																					{	/* Expand/exit.scm 121 */
																						obj_t BgL_arg1948z00_1045;
																						obj_t BgL_arg1949z00_1046;

																						BgL_arg1948z00_1045 =
																							CAR(BgL_cdrzd2981zd2_1038);
																						BgL_arg1949z00_1046 =
																							CAR(BgL_cdrzd2987zd2_1040);
																						BGl_returnz12ze70zf5zzexpand_exitz00
																							(BgL_exitz00_1007,
																							BgL_arg1948z00_1045);
																						BGl_returnz12ze70zf5zzexpand_exitz00
																							(BgL_exitz00_1007,
																							BgL_arg1949z00_1046);
																						return BgL_bodyz00_1008;
																					}
																				else
																					{	/* Expand/exit.scm 121 */
																						return BgL_bodyz00_1008;
																					}
																			}
																		else
																			{	/* Expand/exit.scm 121 */
																				return BgL_bodyz00_1008;
																			}
																	}
																else
																	{	/* Expand/exit.scm 121 */
																		return BgL_bodyz00_1008;
																	}
															}
														else
															{	/* Expand/exit.scm 121 */
																obj_t BgL_carzd21034zd2_1048;
																obj_t BgL_cdrzd21035zd2_1049;

																BgL_carzd21034zd2_1048 = CAR(BgL_bodyz00_1008);
																BgL_cdrzd21035zd2_1049 = CDR(BgL_bodyz00_1008);
																if (
																	(BgL_carzd21034zd2_1048 ==
																		CNST_TABLE_REF(((long) 13))))
																	{	/* Expand/exit.scm 121 */
																		obj_t BgL_arg1953z00_1051;

																		BgL_arg1953z00_1051 =
																			CDR(((obj_t) BgL_cdrzd21035zd2_1049));
																		BgL_exprsz00_1018 = BgL_arg1953z00_1051;
																	BgL_tagzd2942zd2_1019:
																		BGl_returnz12ze70zf5zzexpand_exitz00
																			(BgL_exitz00_1007,
																			CAR
																			(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_exprsz00_1018)));
																		return BgL_bodyz00_1008;
																	}
																else
																	{	/* Expand/exit.scm 121 */
																		if (
																			(BgL_carzd21034zd2_1048 ==
																				CNST_TABLE_REF(((long) 15))))
																			{	/* Expand/exit.scm 121 */
																				obj_t BgL_arg1955z00_1053;

																				BgL_arg1955z00_1053 =
																					CDR(((obj_t) BgL_cdrzd21035zd2_1049));
																				{
																					obj_t BgL_exprsz00_2652;

																					BgL_exprsz00_2652 =
																						BgL_arg1955z00_1053;
																					BgL_exprsz00_1018 = BgL_exprsz00_2652;
																					goto BgL_tagzd2942zd2_1019;
																				}
																			}
																		else
																			{	/* Expand/exit.scm 121 */
																				if (
																					(BgL_carzd21034zd2_1048 ==
																						CNST_TABLE_REF(((long) 16))))
																					{	/* Expand/exit.scm 121 */
																						obj_t BgL_arg1957z00_1055;

																						BgL_arg1957z00_1055 =
																							CDR(
																							((obj_t) BgL_cdrzd21035zd2_1049));
																						{
																							obj_t BgL_exprsz00_2658;

																							BgL_exprsz00_2658 =
																								BgL_arg1957z00_1055;
																							BgL_exprsz00_1018 =
																								BgL_exprsz00_2658;
																							goto BgL_tagzd2942zd2_1019;
																						}
																					}
																				else
																					{	/* Expand/exit.scm 121 */
																						if (
																							(BgL_carzd21034zd2_1048 ==
																								CNST_TABLE_REF(((long) 17))))
																							{	/* Expand/exit.scm 121 */
																								obj_t BgL_arg1959z00_1057;

																								BgL_arg1959z00_1057 =
																									CDR(
																									((obj_t)
																										BgL_cdrzd21035zd2_1049));
																								{
																									obj_t BgL_exprsz00_2664;

																									BgL_exprsz00_2664 =
																										BgL_arg1959z00_1057;
																									BgL_exprsz00_1018 =
																										BgL_exprsz00_2664;
																									goto BgL_tagzd2942zd2_1019;
																								}
																							}
																						else
																							{	/* Expand/exit.scm 121 */
																								if (
																									(BgL_carzd21034zd2_1048 ==
																										CNST_TABLE_REF(((long)
																												20))))
																									{	/* Expand/exit.scm 121 */
																										BgL_exprsz00_1020 =
																											CDR(CDR
																											(BgL_bodyz00_1008));
																									BgL_tagzd2943zd2_1021:
																										BGl_returnz12ze70zf5zzexpand_exitz00(BgL_exitz00_1007, CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(BgL_exprsz00_1020)));
																										return BgL_bodyz00_1008;
																									}
																								else
																									{	/* Expand/exit.scm 121 */
																										return BgL_bodyz00_1008;
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
									{	/* Expand/exit.scm 121 */
										if ((CAR(BgL_bodyz00_1008) == CNST_TABLE_REF(((long) 11))))
											{
												obj_t BgL_exprsz00_2677;

												BgL_exprsz00_2677 = BgL_cdrzd2953zd2_1025;
												BgL_exprsz00_1012 = BgL_exprsz00_2677;
												goto BgL_tagzd2940zd2_1013;
											}
										else
											{	/* Expand/exit.scm 121 */
												return BgL_bodyz00_1008;
											}
									}
							}
						else
							{	/* Expand/exit.scm 121 */
								if ((CAR(BgL_bodyz00_1008) == CNST_TABLE_REF(((long) 11))))
									{
										obj_t BgL_exprsz00_2682;

										BgL_exprsz00_2682 = BgL_cdrzd2953zd2_1025;
										BgL_exprsz00_1012 = BgL_exprsz00_2682;
										goto BgL_tagzd2940zd2_1013;
									}
								else
									{	/* Expand/exit.scm 121 */
										if ((CAR(BgL_bodyz00_1008) == CNST_TABLE_REF(((long) 19))))
											{	/* Expand/exit.scm 121 */
												if (PAIRP(BgL_cdrzd2953zd2_1025))
													{	/* Expand/exit.scm 121 */
														obj_t BgL_cdrzd21091zd2_1077;

														BgL_cdrzd21091zd2_1077 = CDR(BgL_cdrzd2953zd2_1025);
														if (PAIRP(BgL_cdrzd21091zd2_1077))
															{	/* Expand/exit.scm 121 */
																obj_t BgL_cdrzd21096zd2_1079;

																BgL_cdrzd21096zd2_1079 =
																	CDR(BgL_cdrzd21091zd2_1077);
																if (PAIRP(BgL_cdrzd21096zd2_1079))
																	{	/* Expand/exit.scm 121 */
																		if (NULLP(CDR(BgL_cdrzd21096zd2_1079)))
																			{	/* Expand/exit.scm 121 */
																				obj_t BgL_arg1983z00_1084;
																				obj_t BgL_arg1984z00_1085;

																				BgL_arg1983z00_1084 =
																					CAR(BgL_cdrzd21091zd2_1077);
																				BgL_arg1984z00_1085 =
																					CAR(BgL_cdrzd21096zd2_1079);
																				BGl_returnz12ze70zf5zzexpand_exitz00
																					(BgL_exitz00_1007,
																					BgL_arg1983z00_1084);
																				BGl_returnz12ze70zf5zzexpand_exitz00
																					(BgL_exitz00_1007,
																					BgL_arg1984z00_1085);
																				return BgL_bodyz00_1008;
																			}
																		else
																			{	/* Expand/exit.scm 121 */
																				return BgL_bodyz00_1008;
																			}
																	}
																else
																	{	/* Expand/exit.scm 121 */
																		return BgL_bodyz00_1008;
																	}
															}
														else
															{	/* Expand/exit.scm 121 */
																return BgL_bodyz00_1008;
															}
													}
												else
													{	/* Expand/exit.scm 121 */
														return BgL_bodyz00_1008;
													}
											}
										else
											{	/* Expand/exit.scm 121 */
												obj_t BgL_carzd21147zd2_1087;
												obj_t BgL_cdrzd21148zd2_1088;

												BgL_carzd21147zd2_1087 = CAR(BgL_bodyz00_1008);
												BgL_cdrzd21148zd2_1088 = CDR(BgL_bodyz00_1008);
												{

													if (
														(BgL_carzd21147zd2_1087 ==
															CNST_TABLE_REF(((long) 13))))
														{	/* Expand/exit.scm 121 */
														BgL_kapzd21149zd2_1089:
															if (PAIRP(BgL_cdrzd21148zd2_1088))
																{
																	obj_t BgL_exprsz00_2709;

																	BgL_exprsz00_2709 =
																		CDR(BgL_cdrzd21148zd2_1088);
																	BgL_exprsz00_1018 = BgL_exprsz00_2709;
																	goto BgL_tagzd2942zd2_1019;
																}
															else
																{	/* Expand/exit.scm 121 */
																	return BgL_bodyz00_1008;
																}
														}
													else
														{	/* Expand/exit.scm 121 */
															if (
																(BgL_carzd21147zd2_1087 ==
																	CNST_TABLE_REF(((long) 15))))
																{	/* Expand/exit.scm 121 */
																	goto BgL_kapzd21149zd2_1089;
																}
															else
																{	/* Expand/exit.scm 121 */
																	if (
																		(BgL_carzd21147zd2_1087 ==
																			CNST_TABLE_REF(((long) 16))))
																		{	/* Expand/exit.scm 121 */
																			goto BgL_kapzd21149zd2_1089;
																		}
																	else
																		{	/* Expand/exit.scm 121 */
																			if (
																				(BgL_carzd21147zd2_1087 ==
																					CNST_TABLE_REF(((long) 17))))
																				{	/* Expand/exit.scm 121 */
																					goto BgL_kapzd21149zd2_1089;
																				}
																			else
																				{	/* Expand/exit.scm 121 */
																					if (
																						(CAR(BgL_bodyz00_1008) ==
																							CNST_TABLE_REF(((long) 20))))
																						{	/* Expand/exit.scm 121 */
																							if (PAIRP(BgL_cdrzd21148zd2_1088))
																								{
																									obj_t BgL_exprsz00_2726;

																									BgL_exprsz00_2726 =
																										CDR(BgL_cdrzd21148zd2_1088);
																									BgL_exprsz00_1020 =
																										BgL_exprsz00_2726;
																									goto BgL_tagzd2943zd2_1021;
																								}
																							else
																								{	/* Expand/exit.scm 121 */
																									return BgL_bodyz00_1008;
																								}
																						}
																					else
																						{	/* Expand/exit.scm 121 */
																							return BgL_bodyz00_1008;
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
					{	/* Expand/exit.scm 121 */
						return BgL_bodyz00_1008;
					}
			}
		}

	}



/* &expand-bind-exit */
	obj_t BGl_z62expandzd2bindzd2exitz62zzexpand_exitz00(obj_t BgL_envz00_1832,
		obj_t BgL_xz00_1833, obj_t BgL_ez00_1834)
	{
		{	/* Expand/exit.scm 61 */
			return
				BGl_expandzd2bindzd2exitz00zzexpand_exitz00(BgL_xz00_1833,
				BgL_ez00_1834);
		}

	}



/* expand-unwind-protect */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2unwindzd2protectz00zzexpand_exitz00(obj_t
		BgL_xz00_33, obj_t BgL_ez00_34)
	{
		{	/* Expand/exit.scm 184 */
			{
				obj_t BgL_expz00_1181;
				obj_t BgL_cleanupz00_1182;

				{

					if (PAIRP(BgL_xz00_33))
						{	/* Expand/exit.scm 199 */
							obj_t BgL_cdrzd21674zd2_1176;

							BgL_cdrzd21674zd2_1176 = CDR(BgL_xz00_33);
							if (PAIRP(BgL_cdrzd21674zd2_1176))
								{	/* Expand/exit.scm 199 */
									obj_t BgL_cdrzd21678zd2_1178;

									BgL_cdrzd21678zd2_1178 = CDR(BgL_cdrzd21674zd2_1176);
									if (PAIRP(BgL_cdrzd21678zd2_1178))
										{	/* Expand/exit.scm 199 */
											BgL_expz00_1181 = CAR(BgL_cdrzd21674zd2_1176);
											BgL_cleanupz00_1182 = BgL_cdrzd21678zd2_1178;
											{	/* Expand/exit.scm 187 */
												obj_t BgL_exitdz00_1184;
												obj_t BgL_protectz00_1185;
												obj_t BgL_tmpz00_1186;

												BgL_exitdz00_1184 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 21))));
												BgL_protectz00_1185 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 22))));
												BgL_tmpz00_1186 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 23))));
												{	/* Expand/exit.scm 190 */
													obj_t BgL_newz00_1187;

													{	/* Expand/exit.scm 190 */
														obj_t BgL_arg2071z00_1189;

														{	/* Expand/exit.scm 190 */
															obj_t BgL_arg2072z00_1190;
															obj_t BgL_arg2075z00_1191;

															{	/* Expand/exit.scm 190 */
																obj_t BgL_arg2076z00_1192;
																obj_t BgL_arg2077z00_1193;

																{	/* Expand/exit.scm 190 */
																	obj_t BgL_arg2078z00_1194;

																	{	/* Expand/exit.scm 190 */
																		obj_t BgL_arg2079z00_1195;

																		BgL_arg2079z00_1195 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					7)), BNIL);
																		BgL_arg2078z00_1194 =
																			MAKE_YOUNG_PAIR(BgL_arg2079z00_1195,
																			BNIL);
																	}
																	BgL_arg2076z00_1192 =
																		MAKE_YOUNG_PAIR(BgL_exitdz00_1184,
																		BgL_arg2078z00_1194);
																}
																{	/* Expand/exit.scm 191 */
																	obj_t BgL_arg2080z00_1196;

																	{	/* Expand/exit.scm 191 */
																		obj_t BgL_arg2081z00_1197;

																		{	/* Expand/exit.scm 191 */
																			obj_t BgL_arg2082z00_1198;

																			{	/* Expand/exit.scm 191 */
																				obj_t BgL_arg2083z00_1199;

																				BgL_arg2083z00_1199 =
																					MAKE_YOUNG_PAIR(BNIL,
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_cleanupz00_1182, BNIL));
																				BgL_arg2082z00_1198 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							24)), BgL_arg2083z00_1199);
																			}
																			BgL_arg2081z00_1197 =
																				MAKE_YOUNG_PAIR(BgL_arg2082z00_1198,
																				BNIL);
																		}
																		BgL_arg2080z00_1196 =
																			MAKE_YOUNG_PAIR(BgL_protectz00_1185,
																			BgL_arg2081z00_1197);
																	}
																	BgL_arg2077z00_1193 =
																		MAKE_YOUNG_PAIR(BgL_arg2080z00_1196, BNIL);
																}
																BgL_arg2072z00_1190 =
																	MAKE_YOUNG_PAIR(BgL_arg2076z00_1192,
																	BgL_arg2077z00_1193);
															}
															{	/* Expand/exit.scm 192 */
																obj_t BgL_arg2085z00_1201;
																obj_t BgL_arg2086z00_1202;

																{	/* Expand/exit.scm 192 */
																	obj_t BgL_arg2087z00_1203;
																	obj_t BgL_arg2088z00_1204;

																	{	/* Expand/exit.scm 192 */
																		obj_t BgL_arg2089z00_1205;

																		{	/* Expand/exit.scm 192 */
																			obj_t BgL_arg2090z00_1206;

																			BgL_arg2090z00_1206 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						8)), BNIL);
																			BgL_arg2089z00_1205 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						25)), BgL_arg2090z00_1206);
																		}
																		BgL_arg2087z00_1203 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					10)), BgL_arg2089z00_1205);
																	}
																	{	/* Expand/exit.scm 192 */
																		obj_t BgL_arg2091z00_1207;

																		BgL_arg2091z00_1207 =
																			MAKE_YOUNG_PAIR(BgL_protectz00_1185,
																			BNIL);
																		BgL_arg2088z00_1204 =
																			MAKE_YOUNG_PAIR(BgL_exitdz00_1184,
																			BgL_arg2091z00_1207);
																	}
																	BgL_arg2085z00_1201 =
																		MAKE_YOUNG_PAIR(BgL_arg2087z00_1203,
																		BgL_arg2088z00_1204);
																}
																{	/* Expand/exit.scm 193 */
																	obj_t BgL_arg2092z00_1208;

																	{	/* Expand/exit.scm 193 */
																		obj_t BgL_arg2093z00_1209;

																		{	/* Expand/exit.scm 193 */
																			obj_t BgL_arg2094z00_1210;
																			obj_t BgL_arg2095z00_1211;

																			{	/* Expand/exit.scm 193 */
																				obj_t BgL_arg2096z00_1212;

																				{	/* Expand/exit.scm 193 */
																					obj_t BgL_arg2097z00_1213;

																					BgL_arg2097z00_1213 =
																						MAKE_YOUNG_PAIR(BgL_expz00_1181,
																						BNIL);
																					BgL_arg2096z00_1212 =
																						MAKE_YOUNG_PAIR(BgL_tmpz00_1186,
																						BgL_arg2097z00_1213);
																				}
																				BgL_arg2094z00_1210 =
																					MAKE_YOUNG_PAIR(BgL_arg2096z00_1212,
																					BNIL);
																			}
																			{	/* Expand/exit.scm 194 */
																				obj_t BgL_arg2098z00_1214;
																				obj_t BgL_arg2100z00_1215;

																				{	/* Expand/exit.scm 194 */
																					obj_t BgL_arg2101z00_1216;
																					obj_t BgL_arg2102z00_1217;

																					{	/* Expand/exit.scm 194 */
																						obj_t BgL_arg2103z00_1218;

																						{	/* Expand/exit.scm 194 */
																							obj_t BgL_arg2104z00_1219;

																							BgL_arg2104z00_1219 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 8)), BNIL);
																							BgL_arg2103z00_1218 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 26)),
																								BgL_arg2104z00_1219);
																						}
																						BgL_arg2101z00_1216 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 10)),
																							BgL_arg2103z00_1218);
																					}
																					BgL_arg2102z00_1217 =
																						MAKE_YOUNG_PAIR(BgL_exitdz00_1184,
																						BNIL);
																					BgL_arg2098z00_1214 =
																						MAKE_YOUNG_PAIR(BgL_arg2101z00_1216,
																						BgL_arg2102z00_1217);
																				}
																				{	/* Expand/exit.scm 195 */
																					obj_t BgL_arg2105z00_1220;
																					obj_t BgL_arg2106z00_1221;

																					BgL_arg2105z00_1220 =
																						MAKE_YOUNG_PAIR(BgL_protectz00_1185,
																						BNIL);
																					BgL_arg2106z00_1221 =
																						MAKE_YOUNG_PAIR(BgL_tmpz00_1186,
																						BNIL);
																					BgL_arg2100z00_1215 =
																						MAKE_YOUNG_PAIR(BgL_arg2105z00_1220,
																						BgL_arg2106z00_1221);
																				}
																				BgL_arg2095z00_1211 =
																					MAKE_YOUNG_PAIR(BgL_arg2098z00_1214,
																					BgL_arg2100z00_1215);
																			}
																			BgL_arg2093z00_1209 =
																				MAKE_YOUNG_PAIR(BgL_arg2094z00_1210,
																				BgL_arg2095z00_1211);
																		}
																		BgL_arg2092z00_1208 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					13)), BgL_arg2093z00_1209);
																	}
																	BgL_arg2086z00_1202 =
																		MAKE_YOUNG_PAIR(BgL_arg2092z00_1208, BNIL);
																}
																BgL_arg2075z00_1191 =
																	MAKE_YOUNG_PAIR(BgL_arg2085z00_1201,
																	BgL_arg2086z00_1202);
															}
															BgL_arg2071z00_1189 =
																MAKE_YOUNG_PAIR(BgL_arg2072z00_1190,
																BgL_arg2075z00_1191);
														}
														BgL_newz00_1187 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
															BgL_arg2071z00_1189);
													}
													{	/* Expand/exit.scm 197 */
														obj_t BgL_arg2070z00_1188;

														BgL_arg2070z00_1188 =
															PROCEDURE_ENTRY(BgL_ez00_34) (BgL_ez00_34,
															BgL_newz00_1187, BgL_ez00_34, BEOA);
														return BGl_replacez12z12zztools_miscz00(BgL_xz00_33,
															BgL_arg2070z00_1188);
													}
												}
											}
										}
									else
										{	/* Expand/exit.scm 199 */
										BgL_tagzd21667zd2_1173:
											return
												BGl_errorz00zz__errorz00(BFALSE,
												BGl_string2339z00zzexpand_exitz00, BgL_xz00_33);
										}
								}
							else
								{	/* Expand/exit.scm 199 */
									goto BgL_tagzd21667zd2_1173;
								}
						}
					else
						{	/* Expand/exit.scm 199 */
							goto BgL_tagzd21667zd2_1173;
						}
				}
			}
		}

	}



/* &expand-unwind-protect */
	obj_t BGl_z62expandzd2unwindzd2protectz62zzexpand_exitz00(obj_t
		BgL_envz00_1835, obj_t BgL_xz00_1836, obj_t BgL_ez00_1837)
	{
		{	/* Expand/exit.scm 184 */
			return
				BGl_expandzd2unwindzd2protectz00zzexpand_exitz00(BgL_xz00_1836,
				BgL_ez00_1837);
		}

	}



/* expand-with-handler */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2withzd2handlerz00zzexpand_exitz00(obj_t
		BgL_xz00_35, obj_t BgL_ez00_36)
	{
		{	/* Expand/exit.scm 208 */
			{
				obj_t BgL_bodyz00_1303;
				obj_t BgL_handlerz00_1240;
				obj_t BgL_bodyz00_1241;

				{

					if (PAIRP(BgL_xz00_35))
						{	/* Expand/exit.scm 255 */
							obj_t BgL_cdrzd21691zd2_1234;

							BgL_cdrzd21691zd2_1234 = CDR(BgL_xz00_35);
							if (PAIRP(BgL_cdrzd21691zd2_1234))
								{	/* Expand/exit.scm 255 */
									obj_t BgL_arg2112z00_1236;
									obj_t BgL_arg2114z00_1237;

									BgL_arg2112z00_1236 = CAR(BgL_cdrzd21691zd2_1234);
									BgL_arg2114z00_1237 = CDR(BgL_cdrzd21691zd2_1234);
									{	/* Expand/exit.scm 257 */
										obj_t BgL_auxz00_2806;

										BgL_handlerz00_1240 = BgL_arg2112z00_1236;
										BgL_bodyz00_1241 = BgL_arg2114z00_1237;
										{	/* Expand/exit.scm 211 */
											obj_t BgL_ohsz00_1243;
											obj_t BgL_errz00_1244;
											obj_t BgL_resz00_1245;
											obj_t BgL_escapez00_1246;
											obj_t BgL_hdlz00_1247;

											BgL_ohsz00_1243 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 27)));
											BgL_errz00_1244 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 28)));
											BgL_resz00_1245 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 5)));
											BgL_escapez00_1246 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 29)));
											BgL_hdlz00_1247 =
												BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
														(long) 30)));
											{	/* Expand/exit.scm 216 */
												obj_t BgL_arg2118z00_1248;

												{	/* Expand/exit.scm 216 */
													obj_t BgL_arg2119z00_1249;

													{	/* Expand/exit.scm 216 */
														obj_t BgL_arg2120z00_1250;
														obj_t BgL_arg2121z00_1251;

														{	/* Expand/exit.scm 216 */
															obj_t BgL_arg2122z00_1252;
															obj_t BgL_arg2123z00_1253;

															{	/* Expand/exit.scm 216 */
																obj_t BgL_arg2125z00_1254;

																BgL_arg2125z00_1254 =
																	MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
																BgL_arg2122z00_1252 =
																	MAKE_YOUNG_PAIR(BgL_resz00_1245,
																	BgL_arg2125z00_1254);
															}
															{	/* Expand/exit.scm 217 */
																obj_t BgL_arg2126z00_1255;

																{	/* Expand/exit.scm 217 */
																	obj_t BgL_arg2127z00_1256;

																	BgL_arg2127z00_1256 =
																		MAKE_YOUNG_PAIR(BgL_handlerz00_1240, BNIL);
																	BgL_arg2126z00_1255 =
																		MAKE_YOUNG_PAIR(BgL_hdlz00_1247,
																		BgL_arg2127z00_1256);
																}
																BgL_arg2123z00_1253 =
																	MAKE_YOUNG_PAIR(BgL_arg2126z00_1255, BNIL);
															}
															BgL_arg2120z00_1250 =
																MAKE_YOUNG_PAIR(BgL_arg2122z00_1252,
																BgL_arg2123z00_1253);
														}
														{	/* Expand/exit.scm 218 */
															obj_t BgL_arg2128z00_1257;

															{	/* Expand/exit.scm 218 */
																obj_t BgL_arg2129z00_1258;

																{	/* Expand/exit.scm 218 */
																	obj_t BgL_arg2130z00_1259;
																	obj_t BgL_arg2131z00_1260;

																	{	/* Expand/exit.scm 218 */
																		obj_t BgL_arg2132z00_1261;

																		{	/* Expand/exit.scm 218 */
																			obj_t BgL_arg2133z00_1262;
																			obj_t BgL_arg2134z00_1263;

																			BgL_arg2133z00_1262 =
																				MAKE_YOUNG_PAIR(BgL_escapez00_1246,
																				BNIL);
																			{	/* Expand/exit.scm 219 */
																				obj_t BgL_arg2135z00_1264;

																				{	/* Expand/exit.scm 219 */
																					obj_t BgL_arg2136z00_1265;

																					{	/* Expand/exit.scm 219 */
																						obj_t BgL_arg2137z00_1266;
																						obj_t BgL_arg2138z00_1267;

																						{	/* Expand/exit.scm 219 */
																							obj_t BgL_arg2140z00_1268;

																							{	/* Expand/exit.scm 219 */
																								obj_t BgL_arg2141z00_1269;

																								{	/* Expand/exit.scm 219 */
																									obj_t BgL_arg2142z00_1270;

																									BgL_arg2142z00_1270 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												31)), BNIL);
																									BgL_arg2141z00_1269 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2142z00_1270, BNIL);
																								}
																								BgL_arg2140z00_1268 =
																									MAKE_YOUNG_PAIR
																									(BgL_ohsz00_1243,
																									BgL_arg2141z00_1269);
																							}
																							BgL_arg2137z00_1266 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2140z00_1268, BNIL);
																						}
																						{	/* Expand/exit.scm 223 */
																							obj_t BgL_arg2143z00_1271;

																							{	/* Expand/exit.scm 223 */
																								obj_t BgL_arg2144z00_1272;

																								{	/* Expand/exit.scm 223 */
																									obj_t BgL_arg2145z00_1273;
																									obj_t BgL_arg2146z00_1274;

																									{	/* Expand/exit.scm 223 */
																										obj_t BgL_arg2147z00_1275;

																										{	/* Expand/exit.scm 223 */
																											obj_t BgL_arg2148z00_1276;
																											obj_t BgL_arg2149z00_1277;

																											{	/* Expand/exit.scm 223 */
																												obj_t
																													BgL_arg2150z00_1278;
																												{	/* Expand/exit.scm 223 */
																													obj_t
																														BgL_arg2152z00_1279;
																													{	/* Expand/exit.scm 223 */
																														obj_t
																															BgL_arg2153z00_1280;
																														{	/* Expand/exit.scm 223 */
																															obj_t
																																BgL_arg2154z00_1281;
																															obj_t
																																BgL_arg2155z00_1282;
																															{	/* Expand/exit.scm 223 */
																																obj_t
																																	BgL_arg2156z00_1283;
																																{	/* Expand/exit.scm 223 */
																																	obj_t
																																		BgL_arg2157z00_1284;
																																	obj_t
																																		BgL_arg2158z00_1285;
																																	BgL_arg2157z00_1284
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				32)),
																																		BNIL);
																																	{	/* Expand/exit.scm 224 */
																																		obj_t
																																			BgL_arg2159z00_1286;
																																		obj_t
																																			BgL_arg2160z00_1287;
																																		{	/* Expand/exit.scm 224 */
																																			obj_t
																																				BgL_arg2161z00_1288;
																																			{	/* Expand/exit.scm 224 */
																																				obj_t
																																					BgL_arg2162z00_1289;
																																				BgL_arg2162z00_1289
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 32)), BNIL);
																																				BgL_arg2161z00_1288
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_resz00_1245,
																																					BgL_arg2162z00_1289);
																																			}
																																			BgL_arg2159z00_1286
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						33)),
																																				BgL_arg2161z00_1288);
																																		}
																																		{	/* Expand/exit.scm 225 */
																																			obj_t
																																				BgL_arg2163z00_1290;
																																			{	/* Expand/exit.scm 225 */
																																				obj_t
																																					BgL_arg2164z00_1291;
																																				BgL_arg2164z00_1291
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BTRUE,
																																					BNIL);
																																				BgL_arg2163z00_1290
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_escapez00_1246,
																																					BgL_arg2164z00_1291);
																																			}
																																			BgL_arg2160z00_1287
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg2163z00_1290,
																																				BNIL);
																																		}
																																		BgL_arg2158z00_1285
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg2159z00_1286,
																																			BgL_arg2160z00_1287);
																																	}
																																	BgL_arg2156z00_1283
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg2157z00_1284,
																																		BgL_arg2158z00_1285);
																																}
																																BgL_arg2154z00_1281
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 24)),
																																	BgL_arg2156z00_1283);
																															}
																															BgL_arg2155z00_1282
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_ohsz00_1243,
																																BNIL);
																															BgL_arg2153z00_1280
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg2154z00_1281,
																																BgL_arg2155z00_1282);
																														}
																														BgL_arg2152z00_1279
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 34)),
																															BgL_arg2153z00_1280);
																													}
																													BgL_arg2150z00_1278 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg2152z00_1279,
																														BNIL);
																												}
																												BgL_arg2148z00_1276 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 35)),
																													BgL_arg2150z00_1278);
																											}
																											{	/* Expand/exit.scm 227 */
																												obj_t
																													BgL_arg2165z00_1292;
																												obj_t
																													BgL_arg2166z00_1293;
																												{	/* Expand/exit.scm 227 */
																													obj_t
																														BgL_arg2167z00_1294;
																													{	/* Expand/exit.scm 227 */
																														obj_t
																															BgL_arg2168z00_1295;
																														{	/* Expand/exit.scm 227 */
																															obj_t
																																BgL_arg2169z00_1296;
																															{	/* Expand/exit.scm 227 */
																																obj_t
																																	BgL_arg2170z00_1297;
																																BgL_arg2170z00_1297
																																	=
																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_bodyz00_1241,
																																	BNIL);
																																BgL_arg2169z00_1296
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 11)),
																																	BgL_arg2170z00_1297);
																															}
																															BgL_arg2168z00_1295
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg2169z00_1296,
																																BNIL);
																														}
																														BgL_arg2167z00_1294
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_resz00_1245,
																															BgL_arg2168z00_1295);
																													}
																													BgL_arg2165z00_1292 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 33)),
																														BgL_arg2167z00_1294);
																												}
																												BgL_arg2166z00_1293 =
																													MAKE_YOUNG_PAIR
																													(BFALSE, BNIL);
																												BgL_arg2149z00_1277 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg2165z00_1292,
																													BgL_arg2166z00_1293);
																											}
																											BgL_arg2147z00_1275 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg2148z00_1276,
																												BgL_arg2149z00_1277);
																										}
																										BgL_arg2145z00_1273 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													11)),
																											BgL_arg2147z00_1275);
																									}
																									{	/* Expand/exit.scm 229 */
																										obj_t BgL_arg2172z00_1298;

																										{	/* Expand/exit.scm 229 */
																											obj_t BgL_arg2173z00_1299;

																											BgL_arg2173z00_1299 =
																												MAKE_YOUNG_PAIR
																												(BgL_ohsz00_1243, BNIL);
																											BgL_arg2172z00_1298 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														35)),
																												BgL_arg2173z00_1299);
																										}
																										BgL_arg2146z00_1274 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2172z00_1298,
																											BNIL);
																									}
																									BgL_arg2144z00_1272 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2145z00_1273,
																										BgL_arg2146z00_1274);
																								}
																								BgL_arg2143z00_1271 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 36)),
																									BgL_arg2144z00_1272);
																							}
																							BgL_arg2138z00_1267 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2143z00_1271, BNIL);
																						}
																						BgL_arg2136z00_1265 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2137z00_1266,
																							BgL_arg2138z00_1267);
																					}
																					BgL_arg2135z00_1264 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 13)),
																						BgL_arg2136z00_1265);
																				}
																				BgL_arg2134z00_1263 =
																					MAKE_YOUNG_PAIR(BgL_arg2135z00_1264,
																					BNIL);
																			}
																			BgL_arg2132z00_1261 =
																				MAKE_YOUNG_PAIR(BgL_arg2133z00_1262,
																				BgL_arg2134z00_1263);
																		}
																		BgL_arg2130z00_1259 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					20)), BgL_arg2132z00_1261);
																	}
																	{	/* Expand/exit.scm 230 */
																		obj_t BgL_arg2174z00_1300;
																		obj_t BgL_arg2175z00_1301;

																		{	/* Expand/exit.scm 230 */
																			obj_t BgL_arg2176z00_1302;

																			BgL_arg2176z00_1302 =
																				MAKE_YOUNG_PAIR(BgL_resz00_1245, BNIL);
																			BgL_arg2174z00_1300 =
																				MAKE_YOUNG_PAIR(BgL_hdlz00_1247,
																				BgL_arg2176z00_1302);
																		}
																		BgL_arg2175z00_1301 =
																			MAKE_YOUNG_PAIR(BgL_resz00_1245, BNIL);
																		BgL_arg2131z00_1260 =
																			MAKE_YOUNG_PAIR(BgL_arg2174z00_1300,
																			BgL_arg2175z00_1301);
																	}
																	BgL_arg2129z00_1258 =
																		MAKE_YOUNG_PAIR(BgL_arg2130z00_1259,
																		BgL_arg2131z00_1260);
																}
																BgL_arg2128z00_1257 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
																	BgL_arg2129z00_1258);
															}
															BgL_arg2121z00_1251 =
																MAKE_YOUNG_PAIR(BgL_arg2128z00_1257, BNIL);
														}
														BgL_arg2119z00_1249 =
															MAKE_YOUNG_PAIR(BgL_arg2120z00_1250,
															BgL_arg2121z00_1251);
													}
													BgL_arg2118z00_1248 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
														BgL_arg2119z00_1249);
												}
												BgL_bodyz00_1303 =
													PROCEDURE_ENTRY(BgL_ez00_36) (BgL_ez00_36,
													BgL_arg2118z00_1248, BgL_ez00_36, BEOA);
										}}
										{	/* Expand/exit.scm 235 */
											obj_t BgL_locz00_1305;

											BgL_locz00_1305 =
												BGl_findzd2locationzd2zztools_locationz00(BgL_xz00_35);
											{	/* Expand/exit.scm 236 */
												bool_t BgL_test2502z00_2808;

												{	/* Expand/exit.scm 236 */
													bool_t BgL_test2503z00_2809;

													if (STRUCTP(BgL_locz00_1305))
														{	/* Expand/exit.scm 236 */
															BgL_test2503z00_2809 =
																(STRUCT_KEY(BgL_locz00_1305) ==
																CNST_TABLE_REF(((long) 37)));
														}
													else
														{	/* Expand/exit.scm 236 */
															BgL_test2503z00_2809 = ((bool_t) 0);
														}
													if (BgL_test2503z00_2809)
														{	/* Expand/exit.scm 237 */
															bool_t BgL_test2505z00_2815;

															{	/* Expand/exit.scm 237 */
																int BgL_arg2224z00_1359;

																BgL_arg2224z00_1359 =
																	BGl_bigloozd2compilerzd2debugz00zz__paramz00
																	();
																BgL_test2505z00_2815 =
																	((long) (BgL_arg2224z00_1359) > ((long) 0));
															}
															if (BgL_test2505z00_2815)
																{	/* Expand/exit.scm 238 */
																	obj_t BgL_arg2223z00_1358;

																	BgL_arg2223z00_1358 =
																		BGl_thezd2backendzd2zzbackend_backendz00();
																	BgL_test2502z00_2808 =
																		(((BgL_backendz00_bglt) COBJECT(
																				((BgL_backendz00_bglt)
																					BgL_arg2223z00_1358)))->
																		BgL_tracezd2supportzd2);
																}
															else
																{	/* Expand/exit.scm 237 */
																	BgL_test2502z00_2808 = ((bool_t) 0);
																}
														}
													else
														{	/* Expand/exit.scm 236 */
															BgL_test2502z00_2808 = ((bool_t) 0);
														}
												}
												if (BgL_test2502z00_2808)
													{	/* Expand/exit.scm 239 */
														obj_t BgL_atz00_1312;
														obj_t BgL_vidz00_1313;
														obj_t BgL_tmp1z00_1314;
														obj_t BgL_tmp2z00_1315;

														{	/* Expand/exit.scm 239 */
															obj_t BgL_arg2217z00_1349;

															{	/* Expand/exit.scm 239 */
																obj_t BgL_arg2218z00_1350;
																obj_t BgL_arg2219z00_1351;

																BgL_arg2218z00_1350 =
																	BGl_locationzd2fullzd2fnamez00zztools_locationz00
																	(BgL_locz00_1305);
																BgL_arg2219z00_1351 =
																	MAKE_YOUNG_PAIR(STRUCT_REF(BgL_locz00_1305,
																		(int) (((long) 1))), BNIL);
																BgL_arg2217z00_1349 =
																	MAKE_YOUNG_PAIR(BgL_arg2218z00_1350,
																	BgL_arg2219z00_1351);
															}
															BgL_atz00_1312 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 38)),
																BgL_arg2217z00_1349);
														}
														{	/* Expand/exit.scm 240 */

															{	/* Expand/exit.scm 240 */

																BgL_vidz00_1313 =
																	BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
														}}
														BgL_tmp1z00_1314 =
															BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
															(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF
																(((long) 39))));
														BgL_tmp2z00_1315 =
															BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
															(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF
																(((long) 40))));
														{	/* Expand/exit.scm 245 */
															obj_t BgL_arg2184z00_1316;

															{	/* Expand/exit.scm 245 */
																obj_t BgL_arg2185z00_1317;
																obj_t BgL_arg2186z00_1318;

																{	/* Expand/exit.scm 245 */
																	obj_t BgL_arg2187z00_1319;
																	obj_t BgL_arg2188z00_1320;

																	{	/* Expand/exit.scm 245 */
																		obj_t BgL_arg2189z00_1321;

																		{	/* Expand/exit.scm 245 */
																			obj_t BgL_arg2190z00_1322;

																			{	/* Expand/exit.scm 245 */
																				obj_t BgL_arg2191z00_1323;

																				{	/* Expand/exit.scm 245 */
																					obj_t BgL_arg2192z00_1324;

																					{	/* Expand/exit.scm 245 */
																						obj_t BgL_arg2193z00_1325;

																						{	/* Expand/exit.scm 245 */
																							obj_t BgL_arg2194z00_1326;
																							obj_t BgL_arg2195z00_1327;

																							BgL_arg2194z00_1326 =
																								STRUCT_REF(BgL_locz00_1305,
																								(int) (((long) 1)));
																							BgL_arg2195z00_1327 =
																								BGl_locationzd2fullzd2fnamez00zztools_locationz00
																								(BgL_locz00_1305);
																							{	/* Expand/exit.scm 244 */
																								obj_t BgL_list2196z00_1328;

																								{	/* Expand/exit.scm 244 */
																									obj_t BgL_arg2197z00_1329;

																									BgL_arg2197z00_1329 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2195z00_1327, BNIL);
																									BgL_list2196z00_1328 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2194z00_1326,
																										BgL_arg2197z00_1329);
																								}
																								BgL_arg2193z00_1325 =
																									BGl_formatz00zz__r4_output_6_10_3z00
																									(BGl_string2340z00zzexpand_exitz00,
																									BgL_list2196z00_1328);
																						}}
																						BgL_arg2192z00_1324 =
																							bstring_to_symbol
																							(BgL_arg2193z00_1325);
																					}
																					BgL_arg2191z00_1323 =
																						MAKE_YOUNG_PAIR(BgL_arg2192z00_1324,
																						BNIL);
																				}
																				BgL_arg2190z00_1322 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							18)), BgL_arg2191z00_1323);
																			}
																			BgL_arg2189z00_1321 =
																				MAKE_YOUNG_PAIR(BgL_arg2190z00_1322,
																				BNIL);
																		}
																		BgL_arg2187z00_1319 =
																			MAKE_YOUNG_PAIR(BgL_tmp1z00_1314,
																			BgL_arg2189z00_1321);
																	}
																	{	/* Expand/exit.scm 247 */
																		obj_t BgL_arg2198z00_1330;

																		{	/* Expand/exit.scm 247 */
																			obj_t BgL_arg2199z00_1331;

																			{	/* Expand/exit.scm 247 */
																				obj_t BgL_arg2200z00_1332;

																				{	/* Expand/exit.scm 247 */
																					obj_t BgL_arg2201z00_1333;

																					BgL_arg2201z00_1333 =
																						MAKE_YOUNG_PAIR(BgL_atz00_1312,
																						BNIL);
																					BgL_arg2200z00_1332 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 18)),
																						BgL_arg2201z00_1333);
																				}
																				BgL_arg2199z00_1331 =
																					MAKE_YOUNG_PAIR(BgL_arg2200z00_1332,
																					BNIL);
																			}
																			BgL_arg2198z00_1330 =
																				MAKE_YOUNG_PAIR(BgL_tmp2z00_1315,
																				BgL_arg2199z00_1331);
																		}
																		BgL_arg2188z00_1320 =
																			MAKE_YOUNG_PAIR(BgL_arg2198z00_1330,
																			BNIL);
																	}
																	BgL_arg2185z00_1317 =
																		MAKE_YOUNG_PAIR(BgL_arg2187z00_1319,
																		BgL_arg2188z00_1320);
																}
																{	/* Expand/exit.scm 249 */
																	obj_t BgL_arg2202z00_1334;

																	{	/* Expand/exit.scm 249 */
																		obj_t BgL_arg2203z00_1335;

																		{	/* Expand/exit.scm 249 */
																			obj_t BgL_arg2204z00_1336;

																			{	/* Expand/exit.scm 249 */
																				obj_t BgL_arg2205z00_1337;
																				obj_t BgL_arg2206z00_1338;

																				{	/* Expand/exit.scm 249 */
																					obj_t BgL_arg2207z00_1339;

																					{	/* Expand/exit.scm 249 */
																						obj_t BgL_arg2208z00_1340;

																						BgL_arg2208z00_1340 =
																							MAKE_YOUNG_PAIR(BgL_tmp2z00_1315,
																							BNIL);
																						BgL_arg2207z00_1339 =
																							MAKE_YOUNG_PAIR(BgL_tmp1z00_1314,
																							BgL_arg2208z00_1340);
																					}
																					BgL_arg2205z00_1337 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 41)),
																						BgL_arg2207z00_1339);
																				}
																				{	/* Expand/exit.scm 250 */
																					obj_t BgL_arg2209z00_1341;

																					{	/* Expand/exit.scm 250 */
																						obj_t BgL_arg2210z00_1342;

																						{	/* Expand/exit.scm 250 */
																							obj_t BgL_arg2211z00_1343;
																							obj_t BgL_arg2212z00_1344;

																							{	/* Expand/exit.scm 250 */
																								obj_t BgL_arg2213z00_1345;

																								{	/* Expand/exit.scm 250 */
																									obj_t BgL_arg2214z00_1346;

																									BgL_arg2214z00_1346 =
																										MAKE_YOUNG_PAIR
																										(BgL_bodyz00_1303, BNIL);
																									BgL_arg2213z00_1345 =
																										MAKE_YOUNG_PAIR
																										(BgL_vidz00_1313,
																										BgL_arg2214z00_1346);
																								}
																								BgL_arg2211z00_1343 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2213z00_1345, BNIL);
																							}
																							{	/* Expand/exit.scm 251 */
																								obj_t BgL_arg2215z00_1347;
																								obj_t BgL_arg2216z00_1348;

																								{	/* Expand/exit.scm 251 */
																									obj_t BgL_res2333z00_1815;

																									{	/* Expand/exit.scm 251 */
																										obj_t BgL_obj1z00_1814;

																										BgL_obj1z00_1814 =
																											CNST_TABLE_REF(((long)
																												42));
																										BgL_res2333z00_1815 =
																											MAKE_YOUNG_EPAIR
																											(BgL_obj1z00_1814, BNIL,
																											BgL_atz00_1312);
																									}
																									BgL_arg2215z00_1347 =
																										BgL_res2333z00_1815;
																								}
																								BgL_arg2216z00_1348 =
																									MAKE_YOUNG_PAIR
																									(BgL_vidz00_1313, BNIL);
																								BgL_arg2212z00_1344 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2215z00_1347,
																									BgL_arg2216z00_1348);
																							}
																							BgL_arg2210z00_1342 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2211z00_1343,
																								BgL_arg2212z00_1344);
																						}
																						BgL_arg2209z00_1341 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 13)),
																							BgL_arg2210z00_1342);
																					}
																					BgL_arg2206z00_1338 =
																						MAKE_YOUNG_PAIR(BgL_arg2209z00_1341,
																						BNIL);
																				}
																				BgL_arg2204z00_1336 =
																					MAKE_YOUNG_PAIR(BgL_arg2205z00_1337,
																					BgL_arg2206z00_1338);
																			}
																			BgL_arg2203z00_1335 =
																				MAKE_YOUNG_PAIR(BNIL,
																				BgL_arg2204z00_1336);
																		}
																		BgL_arg2202z00_1334 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					13)), BgL_arg2203z00_1335);
																	}
																	BgL_arg2186z00_1318 =
																		MAKE_YOUNG_PAIR(BgL_arg2202z00_1334, BNIL);
																}
																BgL_arg2184z00_1316 =
																	MAKE_YOUNG_PAIR(BgL_arg2185z00_1317,
																	BgL_arg2186z00_1318);
															}
															BgL_auxz00_2806 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
																BgL_arg2184z00_1316);
													}}
												else
													{	/* Expand/exit.scm 236 */
														BgL_auxz00_2806 = BgL_bodyz00_1303;
													}
											}
										}
										return
											BGl_replacez12z12zztools_miscz00(BgL_xz00_35,
											BgL_auxz00_2806);
									}
								}
							else
								{	/* Expand/exit.scm 255 */
								BgL_tagzd21684zd2_1231:
									return
										BGl_errorz00zz__errorz00(BFALSE,
										BGl_string2341z00zzexpand_exitz00, BgL_xz00_35);
								}
						}
					else
						{	/* Expand/exit.scm 255 */
							goto BgL_tagzd21684zd2_1231;
						}
				}
			}
		}

	}



/* &expand-with-handler */
	obj_t BGl_z62expandzd2withzd2handlerz62zzexpand_exitz00(obj_t BgL_envz00_1838,
		obj_t BgL_xz00_1839, obj_t BgL_ez00_1840)
	{
		{	/* Expand/exit.scm 208 */
			return
				BGl_expandzd2withzd2handlerz00zzexpand_exitz00(BgL_xz00_1839,
				BgL_ez00_1840);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_exitz00()
	{
		{	/* Expand/exit.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_exitz00()
	{
		{	/* Expand/exit.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_exitz00()
	{
		{	/* Expand/exit.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_exitz00()
	{
		{	/* Expand/exit.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzexpand_expanderz00(((long) 393359),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(((long) 223654870),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2342z00zzexpand_exitz00));
		}

	}

#ifdef __cplusplus
}
#endif
