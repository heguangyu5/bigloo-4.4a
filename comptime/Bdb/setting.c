/*===========================================================================*/
/*   (Bdb/setting.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Bdb/setting.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_za2stripza2z00zzengine_paramz00;
	static obj_t BGl_z62bdbzd2settingz12za2zzbdb_settingz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzbdb_settingz00();
	static obj_t BGl_methodzd2initzd2zzbdb_settingz00();
	static obj_t BGl_gczd2rootszd2initz00zzbdb_settingz00();
	BGL_EXPORTED_DEF obj_t BGl_za2jvmzd2debugzd2moduleza2z00zzbdb_settingz00 =
		BUNSPEC;
	BGL_IMPORT obj_t
		BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00;
	extern obj_t BGl_za2czd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzbdb_settingz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzbdb_settingz00();
	static obj_t BGl_genericzd2initzd2zzbdb_settingz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2inliningzf3za2zf3zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbdb_settingz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_bdbzd2settingz12zc0zzbdb_settingz00();
	static obj_t BGl_cnstzd2initzd2zzbdb_settingz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbdb_settingz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzbdb_settingz00();
	extern obj_t BGl_za2indentza2z00zzengine_paramz00;
	BGL_EXPORTED_DEF obj_t BGl_za2bdbzd2moduleza2zd2zzbdb_settingz00 = BUNSPEC;
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bdbzd2settingz12zd2envz12zzbdb_settingz00,
		BgL_bgl_za762bdbza7d2setting1022z00,
		BGl_z62bdbzd2settingz12za2zzbdb_settingz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1016z00zzbdb_settingz00,
		BgL_bgl_string1016za700za7za7b1023za7, "bigloobdb", 9);
	      DEFINE_STRING(BGl_string1017z00zzbdb_settingz00,
		BgL_bgl_string1017za700za7za7b1024za7, "bdb_setting", 11);
	      DEFINE_STRING(BGl_string1018z00zzbdb_settingz00,
		BgL_bgl_string1018za700za7za7b1025za7, "bdb (__pp_circle) (__bdb) ", 26);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_za2jvmzd2debugzd2moduleza2z00zzbdb_settingz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzbdb_settingz00));
		     ADD_ROOT((void *) (&BGl_za2bdbzd2moduleza2zd2zzbdb_settingz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbdb_settingz00(long
		BgL_checksumz00_26, char *BgL_fromz00_27)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbdb_settingz00))
				{
					BGl_requirezd2initializa7ationz75zzbdb_settingz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbdb_settingz00();
					BGl_libraryzd2moduleszd2initz00zzbdb_settingz00();
					BGl_cnstzd2initzd2zzbdb_settingz00();
					BGl_importedzd2moduleszd2initz00zzbdb_settingz00();
					return BGl_toplevelzd2initzd2zzbdb_settingz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbdb_settingz00()
	{
		{	/* Bdb/setting.scm 15 */
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 0), "bdb_setting");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "bdb_setting");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"bdb_setting");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"bdb_setting");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbdb_settingz00()
	{
		{	/* Bdb/setting.scm 15 */
			{	/* Bdb/setting.scm 15 */
				obj_t BgL_cportz00_13;

				{	/* Bdb/setting.scm 15 */
					obj_t BgL_stringz00_21;

					BgL_stringz00_21 = BGl_string1018z00zzbdb_settingz00;
					{	/* Bdb/setting.scm 15 */
						obj_t BgL_startz00_22;

						BgL_startz00_22 = BINT(((long) 0));
						{	/* Bdb/setting.scm 15 */
							obj_t BgL_endz00_23;

							BgL_endz00_23 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_21)));
							{	/* Bdb/setting.scm 15 */

								BgL_cportz00_13 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_21, BgL_startz00_22, BgL_endz00_23);
				}}}}
				{
					long BgL_iz00_14;

					BgL_iz00_14 = ((long) 2);
				BgL_loopz00_15:
					if ((BgL_iz00_14 == ((long) -1)))
						{	/* Bdb/setting.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Bdb/setting.scm 15 */
							{	/* Bdb/setting.scm 15 */
								obj_t BgL_arg1020z00_17;

								{	/* Bdb/setting.scm 15 */

									{	/* Bdb/setting.scm 15 */
										obj_t BgL_locationz00_19;

										BgL_locationz00_19 = BBOOL(((bool_t) 0));
										{	/* Bdb/setting.scm 15 */

											BgL_arg1020z00_17 =
												BGl_readz00zz__readerz00(BgL_cportz00_13,
												BgL_locationz00_19);
										}
									}
								}
								{	/* Bdb/setting.scm 15 */
									int BgL_tmpz00_49;

									BgL_tmpz00_49 = (int) (BgL_iz00_14);
									CNST_TABLE_SET(BgL_tmpz00_49, BgL_arg1020z00_17);
							}}
							{	/* Bdb/setting.scm 15 */
								int BgL_auxz00_20;

								BgL_auxz00_20 = (int) ((BgL_iz00_14 - ((long) 1)));
								{
									long BgL_iz00_54;

									BgL_iz00_54 = (long) (BgL_auxz00_20);
									BgL_iz00_14 = BgL_iz00_54;
									goto BgL_loopz00_15;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbdb_settingz00()
	{
		{	/* Bdb/setting.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbdb_settingz00()
	{
		{	/* Bdb/setting.scm 15 */
			BGl_za2bdbzd2moduleza2zd2zzbdb_settingz00 = CNST_TABLE_REF(((long) 0));
			return (BGl_za2jvmzd2debugzd2moduleza2z00zzbdb_settingz00 =
				CNST_TABLE_REF(((long) 1)), BUNSPEC);
		}

	}



/* bdb-setting! */
	BGL_EXPORTED_DEF obj_t BGl_bdbzd2settingz12zc0zzbdb_settingz00()
	{
		{	/* Bdb/setting.scm 35 */
			BGl_za2rmzd2tmpzd2filesza2z00zzengine_paramz00 = BFALSE;
			BGl_za2czd2debugza2zd2zzengine_paramz00 = BTRUE;
			BGl_za2stripza2z00zzengine_paramz00 = BFALSE;
			BGl_za2indentza2z00zzengine_paramz00 = BFALSE;
			BGl_za2inliningzf3za2zf3zzengine_paramz00 = BFALSE;
			return
				BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00
				(CNST_TABLE_REF(((long) 2)), BGl_string1016z00zzbdb_settingz00, BNIL);
		}

	}



/* &bdb-setting! */
	obj_t BGl_z62bdbzd2settingz12za2zzbdb_settingz00(obj_t BgL_envz00_12)
	{
		{	/* Bdb/setting.scm 35 */
			return BGl_bdbzd2settingz12zc0zzbdb_settingz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbdb_settingz00()
	{
		{	/* Bdb/setting.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbdb_settingz00()
	{
		{	/* Bdb/setting.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbdb_settingz00()
	{
		{	/* Bdb/setting.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbdb_settingz00()
	{
		{	/* Bdb/setting.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1017z00zzbdb_settingz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1017z00zzbdb_settingz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1017z00zzbdb_settingz00));
			return
				BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1017z00zzbdb_settingz00));
		}

	}

#ifdef __cplusplus
}
#endif
