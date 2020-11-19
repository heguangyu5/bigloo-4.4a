/*===========================================================================*/
/*   (Cnst/cache.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cnst/cache.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_objectzd2initzd2zzcnst_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2llongzd2ze3bllongza2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2bfalseza2z00zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2elongzd2ze3belongza2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cnstzd2tablezd2setz12za2z12zzcnst_cachez00 =
		BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzcnst_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_stopzd2cnstzd2cachez12z12zzcnst_cachez00();
	static obj_t BGl_z62startzd2cnstzd2cachez12z70zzcnst_cachez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2listzd2ze3structza2z31zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2consza2z00zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2int64zd2ze3bint64za2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2uint64zd2ze3buint64za2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2longzd2ze3intza2z31zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2uint32zd2ze3buint32za2z31zzcnst_cachez00 =
		BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zzcnst_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2int32zd2ze3bint32za2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2doublezd2ze3realza2z31zzcnst_cachez00 = BUNSPEC;
	static bool_t BGl_za2cachezd2startedzf3za2z21zzcnst_cachez00;
	BGL_EXPORTED_DEF obj_t BGl_za2stringzd2ze3bignumza2z31zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_startzd2cnstzd2cachez12z12zzcnst_cachez00();
	static obj_t BGl_requirezd2initializa7ationz75zzcnst_cachez00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00 =
		BUNSPEC;
	extern obj_t BGl_getzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcnst_cachez00();
	static obj_t BGl_genericzd2initzd2zzcnst_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2makezd2lzd2procedureza2z00zzcnst_cachez00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00 = BUNSPEC;
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcnst_cachez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_z62stopzd2cnstzd2cachez12z70zzcnst_cachez00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzcnst_cachez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcnst_cachez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcnst_cachez00();
	BGL_EXPORTED_DEF obj_t BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2btrueza2z00zzcnst_cachez00 = BUNSPEC;
	static obj_t __cnst[27];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_startzd2cnstzd2cachez12zd2envzc0zzcnst_cachez00,
		BgL_bgl_za762startza7d2cnstza71131za7,
		BGl_z62startzd2cnstzd2cachez12z70zzcnst_cachez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1126z00zzcnst_cachez00,
		BgL_bgl_string1126za700za7za7c1132za7, "cnst_cache", 10);
	      DEFINE_STRING(BGl_string1127z00zzcnst_cachez00,
		BgL_bgl_string1127za700za7za7c1133za7,
		"__bignum $string->bignum list->struct vector-tag-set! list->vector $uint64->buint64 $int64->bint64 $uint32->buint32 $int32->bint32 $llong->bllong $elong->belong $double->real make-l-procedure make-va-procedure make-fx-procedure $long->int $bool->bbool c-bstring->keyword c-bstring->symbol c-utf8-string->ucs2-string $string->bstring bfalse btrue $cons cnst-table-set! foreign cnst-table-ref ",
		391);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stopzd2cnstzd2cachez12zd2envzc0zzcnst_cachez00,
		BgL_bgl_za762stopza7d2cnstza7d1134za7,
		BGl_z62stopzd2cnstzd2cachez12z70zzcnst_cachez00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2llongzd2ze3bllongza2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bfalseza2z00zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2elongzd2ze3belongza2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00));
		   
			 ADD_ROOT((void *) (&BGl_za2cnstzd2tablezd2setz12za2z12zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2listzd2ze3structza2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2consza2z00zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2int64zd2ze3bint64za2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2uint64zd2ze3buint64za2z31zzcnst_cachez00));
		   
			 ADD_ROOT((void *) (&BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2longzd2ze3intza2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2uint32zd2ze3buint32za2z31zzcnst_cachez00));
		   
			 ADD_ROOT((void *) (&BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2int32zd2ze3bint32za2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2doublezd2ze3realza2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2stringzd2ze3bignumza2z31zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2makezd2lzd2procedureza2z00zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00));
		   
			 ADD_ROOT((void *) (&BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00));
		   
			 ADD_ROOT((void *) (&BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00));
		     ADD_ROOT((void *) (&BGl_za2btrueza2z00zzcnst_cachez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcnst_cachez00(long
		BgL_checksumz00_485, char *BgL_fromz00_486)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcnst_cachez00))
				{
					BGl_requirezd2initializa7ationz75zzcnst_cachez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcnst_cachez00();
					BGl_libraryzd2moduleszd2initz00zzcnst_cachez00();
					BGl_cnstzd2initzd2zzcnst_cachez00();
					BGl_importedzd2moduleszd2initz00zzcnst_cachez00();
					return BGl_toplevelzd2initzd2zzcnst_cachez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcnst_cachez00()
	{
		{	/* Cnst/cache.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cnst_cache");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cnst_cache");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cnst_cache");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcnst_cachez00()
	{
		{	/* Cnst/cache.scm 15 */
			{	/* Cnst/cache.scm 15 */
				obj_t BgL_cportz00_472;

				{	/* Cnst/cache.scm 15 */
					obj_t BgL_stringz00_480;

					BgL_stringz00_480 = BGl_string1127z00zzcnst_cachez00;
					{	/* Cnst/cache.scm 15 */
						obj_t BgL_startz00_481;

						BgL_startz00_481 = BINT(((long) 0));
						{	/* Cnst/cache.scm 15 */
							obj_t BgL_endz00_482;

							BgL_endz00_482 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_480)));
							{	/* Cnst/cache.scm 15 */

								BgL_cportz00_472 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_480, BgL_startz00_481, BgL_endz00_482);
				}}}}
				{
					long BgL_iz00_473;

					BgL_iz00_473 = ((long) 26);
				BgL_loopz00_474:
					if ((BgL_iz00_473 == ((long) -1)))
						{	/* Cnst/cache.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cnst/cache.scm 15 */
							{	/* Cnst/cache.scm 15 */
								obj_t BgL_arg1129z00_476;

								{	/* Cnst/cache.scm 15 */

									{	/* Cnst/cache.scm 15 */
										obj_t BgL_locationz00_478;

										BgL_locationz00_478 = BBOOL(((bool_t) 0));
										{	/* Cnst/cache.scm 15 */

											BgL_arg1129z00_476 =
												BGl_readz00zz__readerz00(BgL_cportz00_472,
												BgL_locationz00_478);
										}
									}
								}
								{	/* Cnst/cache.scm 15 */
									int BgL_tmpz00_507;

									BgL_tmpz00_507 = (int) (BgL_iz00_473);
									CNST_TABLE_SET(BgL_tmpz00_507, BgL_arg1129z00_476);
							}}
							{	/* Cnst/cache.scm 15 */
								int BgL_auxz00_479;

								BgL_auxz00_479 = (int) ((BgL_iz00_473 - ((long) 1)));
								{
									long BgL_iz00_512;

									BgL_iz00_512 = (long) (BgL_auxz00_479);
									BgL_iz00_473 = BgL_iz00_512;
									goto BgL_loopz00_474;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcnst_cachez00()
	{
		{	/* Cnst/cache.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcnst_cachez00()
	{
		{	/* Cnst/cache.scm 15 */
			BGl_za2cachezd2startedzf3za2z21zzcnst_cachez00 = ((bool_t) 0);
			BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2cnstzd2tablezd2setz12za2z12zzcnst_cachez00 = BFALSE;
			BGl_za2consza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2btrueza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2bfalseza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2longzd2ze3intza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2makezd2lzd2procedureza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2doublezd2ze3realza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2elongzd2ze3belongza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2llongzd2ze3bllongza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2int32zd2ze3bint32za2z31zzcnst_cachez00 = BFALSE;
			BGl_za2uint32zd2ze3buint32za2z31zzcnst_cachez00 = BFALSE;
			BGl_za2int64zd2ze3bint64za2z31zzcnst_cachez00 = BFALSE;
			BGl_za2uint64zd2ze3buint64za2z31zzcnst_cachez00 = BFALSE;
			BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00 = BFALSE;
			BGl_za2listzd2ze3structza2z31zzcnst_cachez00 = BFALSE;
			return (BGl_za2stringzd2ze3bignumza2z31zzcnst_cachez00 = BFALSE, BUNSPEC);
		}

	}



/* start-cnst-cache! */
	BGL_EXPORTED_DEF obj_t BGl_startzd2cnstzd2cachez12z12zzcnst_cachez00()
	{
		{	/* Cnst/cache.scm 82 */
			if (BGl_za2cachezd2startedzf3za2z21zzcnst_cachez00)
				{	/* Cnst/cache.scm 83 */
					return BTRUE;
				}
			else
				{	/* Cnst/cache.scm 83 */
					BGl_za2cachezd2startedzf3za2z21zzcnst_cachez00 = ((bool_t) 1);
					BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 0)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2cnstzd2tablezd2setz12za2z12zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 2)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2consza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 3)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2btrueza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 4)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2bfalseza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 5)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 6)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 7)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 8)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 9)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								10)), CNST_TABLE_REF(((long) 1)));
					BGl_za2longzd2ze3intza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								11)), CNST_TABLE_REF(((long) 1)));
					BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								12)), CNST_TABLE_REF(((long) 1)));
					BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								13)), CNST_TABLE_REF(((long) 1)));
					BGl_za2makezd2lzd2procedureza2z00zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								14)), CNST_TABLE_REF(((long) 1)));
					BGl_za2doublezd2ze3realza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								15)), CNST_TABLE_REF(((long) 1)));
					BGl_za2elongzd2ze3belongza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								16)), CNST_TABLE_REF(((long) 1)));
					BGl_za2llongzd2ze3bllongza2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								17)), CNST_TABLE_REF(((long) 1)));
					BGl_za2int32zd2ze3bint32za2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								18)), CNST_TABLE_REF(((long) 1)));
					BGl_za2uint32zd2ze3buint32za2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								19)), CNST_TABLE_REF(((long) 1)));
					BGl_za2int64zd2ze3bint64za2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								20)), CNST_TABLE_REF(((long) 1)));
					BGl_za2uint64zd2ze3buint64za2z31zzcnst_cachez00 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								21)), CNST_TABLE_REF(((long) 1)));
					BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 22)), BNIL);
					BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 23)), BNIL);
					BGl_za2listzd2ze3structza2z31zzcnst_cachez00 =
						BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 24)), BNIL);
					{	/* Cnst/cache.scm 135 */
						obj_t BgL__ortest_1059z00_429;

						{	/* Cnst/cache.scm 135 */
							obj_t BgL_list1103z00_430;

							BgL_list1103z00_430 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)), BNIL);
							BgL__ortest_1059z00_429 =
								BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 25)),
								BgL_list1103z00_430);
						}
						if (CBOOL(BgL__ortest_1059z00_429))
							{	/* Cnst/cache.scm 135 */
								BGl_za2stringzd2ze3bignumza2z31zzcnst_cachez00 =
									BgL__ortest_1059z00_429;
							}
						else
							{	/* Cnst/cache.scm 135 */
								BGl_za2stringzd2ze3bignumza2z31zzcnst_cachez00 =
									BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF((
											(long) 25)), CNST_TABLE_REF(((long) 26)));
					}}
					return BTRUE;
				}
		}

	}



/* &start-cnst-cache! */
	obj_t BGl_z62startzd2cnstzd2cachez12z70zzcnst_cachez00(obj_t BgL_envz00_470)
	{
		{	/* Cnst/cache.scm 82 */
			return BGl_startzd2cnstzd2cachez12z12zzcnst_cachez00();
		}

	}



/* stop-cnst-cache! */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2cnstzd2cachez12z12zzcnst_cachez00()
	{
		{	/* Cnst/cache.scm 143 */
			BGl_za2stringzd2ze3bignumza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2stringzd2ze3bstringza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2boolzd2ze3bboolza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2longzd2ze3intza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2makezd2fxzd2procedureza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2makezd2vazd2procedureza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2doublezd2ze3realza2z31zzcnst_cachez00 = BFALSE;
			BGl_za2consza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2btrueza2z00zzcnst_cachez00 = BFALSE;
			BGl_za2bfalseza2z00zzcnst_cachez00 = BFALSE;
			return BTRUE;
		}

	}



/* &stop-cnst-cache! */
	obj_t BGl_z62stopzd2cnstzd2cachez12z70zzcnst_cachez00(obj_t BgL_envz00_471)
	{
		{	/* Cnst/cache.scm 143 */
			return BGl_stopzd2cnstzd2cachez12z12zzcnst_cachez00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcnst_cachez00()
	{
		{	/* Cnst/cache.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcnst_cachez00()
	{
		{	/* Cnst/cache.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcnst_cachez00()
	{
		{	/* Cnst/cache.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcnst_cachez00()
	{
		{	/* Cnst/cache.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1126z00zzcnst_cachez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1126z00zzcnst_cachez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1126z00zzcnst_cachez00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1126z00zzcnst_cachez00));
		}

	}

#ifdef __cplusplus
}
#endif
