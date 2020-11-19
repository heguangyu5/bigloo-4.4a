/*===========================================================================*/
/*   (Expand/expander.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/expander.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62getzd2Ozd2macrozd2toplevelzb0zzexpand_expanderz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2Ozd2macrozd2toplevelzd2zzexpand_expanderz00();
	BGL_EXPORTED_DECL obj_t BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(obj_t);
	static obj_t BGl_za2Genvza2z00zzexpand_expanderz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31034ze3ze5zzexpand_expanderz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_expanderz00();
	static obj_t
		BGl_z62installzd2Ozd2comptimezd2expanderzb0zzexpand_expanderz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00;
	static obj_t BGl_methodzd2initzd2zzexpand_expanderz00();
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2Genvz12z67zzexpand_expanderz00();
	BGL_EXPORTED_DECL obj_t BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62unbindzd2Gzd2expanderz12z70zzexpand_expanderz00(obj_t,
		obj_t);
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_z62initializa7ezd2Oenvz12z05zzexpand_expanderz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_expanderz00();
	BGL_EXPORTED_DECL obj_t
		BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00(obj_t);
	static obj_t BGl_z62unbindzd2Ozd2expanderz12z70zzexpand_expanderz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_expanderz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t, obj_t);
	static obj_t BGl_z62findzd2Gzd2expanderz62zzexpand_expanderz00(obj_t, obj_t);
	static obj_t BGl_za2Oenvza2z00zzexpand_expanderz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzexpand_expanderz00();
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getzd2compilerzd2expanderz00zz__macroz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_expanderz00();
	static obj_t BGl_z62checkzd2tozd2bezd2macroszb0zzexpand_expanderz00(obj_t);
	BGL_IMPORT bool_t BGl_hashtablezd2removez12zc0zz__hashz00(obj_t, obj_t);
	static obj_t BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_initializa7ezd2Oenvz12z67zzexpand_expanderz00();
	static obj_t BGl_z62findzd2Ozd2expanderz62zzexpand_expanderz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tozd2bezd2macroz12z12zzexpand_expanderz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2Ozd2macrozd2toplevelz12zc0zzexpand_expanderz00(obj_t);
	static obj_t BGl_z62initializa7ezd2Genvz12z05zzexpand_expanderz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__macroz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t
		BGl_z62addzd2Ozd2macrozd2toplevelz12za2zzexpand_expanderz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_checkzd2tozd2bezd2macroszd2zzexpand_expanderz00();
	static obj_t BGl_cnstzd2initzd2zzexpand_expanderz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_expanderz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_expanderz00();
	static obj_t
		BGl_z62installzd2Gzd2comptimezd2expanderzb0zzexpand_expanderz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2Ozd2macrozd2toplevelza2z00zzexpand_expanderz00 = BUNSPEC;
	static obj_t BGl_z62tozd2bezd2macroz12z70zzexpand_expanderz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2Ozd2macrozd2toplevelz12zd2envz12zzexpand_expanderz00,
		BgL_bgl_za762addza7d2oza7d2mac1111za7,
		BGl_z62addzd2Ozd2macrozd2toplevelz12za2zzexpand_expanderz00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string1095z00zzexpand_expanderz00,
		BgL_bgl_string1095za700za7za7e1112za7, "install-O-comptime-expander", 27);
	      DEFINE_STRING(BGl_string1096z00zzexpand_expanderz00,
		BgL_bgl_string1096za700za7za7e1113za7,
		"Illegal re-installation of O-expander", 37);
	      DEFINE_STRING(BGl_string1097z00zzexpand_expanderz00,
		BgL_bgl_string1097za700za7za7e1114za7, "install-G-comptime-expander", 27);
	      DEFINE_STRING(BGl_string1098z00zzexpand_expanderz00,
		BgL_bgl_string1098za700za7za7e1115za7,
		"Illegal re-installation of G-expander", 37);
	      DEFINE_STRING(BGl_string1099z00zzexpand_expanderz00,
		BgL_bgl_string1099za700za7za7e1116za7, "expand", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2Gzd2expanderzd2envzd2zzexpand_expanderz00,
		BgL_bgl_za762findza7d2gza7d2ex1117za7,
		BGl_z62findzd2Gzd2expanderz62zzexpand_expanderz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2Ozd2comptimezd2expanderzd2envz00zzexpand_expanderz00,
		BgL_bgl_za762installza7d2oza7d1118za7,
		BGl_z62installzd2Ozd2comptimezd2expanderzb0zzexpand_expanderz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unbindzd2Ozd2expanderz12zd2envzc0zzexpand_expanderz00,
		BgL_bgl_za762unbindza7d2oza7d21119za7,
		BGl_z62unbindzd2Ozd2expanderz12z70zzexpand_expanderz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2Gzd2comptimezd2expanderzd2envz00zzexpand_expanderz00,
		BgL_bgl_za762installza7d2gza7d1120za7,
		BGl_z62installzd2Gzd2comptimezd2expanderzb0zzexpand_expanderz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1100z00zzexpand_expanderz00,
		BgL_bgl_string1100za700za7za7e1121za7, "Can't find syntax definition", 28);
	      DEFINE_STRING(BGl_string1101z00zzexpand_expanderz00,
		BgL_bgl_string1101za700za7za7e1122za7, "Can't find macro definition", 27);
	      DEFINE_STRING(BGl_string1102z00zzexpand_expanderz00,
		BgL_bgl_string1102za700za7za7e1123za7, "expand_expander", 15);
	      DEFINE_STRING(BGl_string1103z00zzexpand_expanderz00,
		BgL_bgl_string1103za700za7za7e1124za7, "syntax expander ", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unbindzd2Gzd2expanderz12zd2envzc0zzexpand_expanderz00,
		BgL_bgl_za762unbindza7d2gza7d21125za7,
		BGl_z62unbindzd2Gzd2expanderz12z70zzexpand_expanderz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2tozd2bezd2macroszd2envz00zzexpand_expanderz00,
		BgL_bgl_za762checkza7d2toza7d21126za7,
		BGl_z62checkzd2tozd2bezd2macroszb0zzexpand_expanderz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tozd2bezd2macroz12zd2envzc0zzexpand_expanderz00,
		BgL_bgl_za762toza7d2beza7d2mac1127za7,
		BGl_z62tozd2bezd2macroz12z70zzexpand_expanderz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2Genvz12zd2envzb5zzexpand_expanderz00,
		BgL_bgl_za762initializa7a7eza71128za7,
		BGl_z62initializa7ezd2Genvz12z05zzexpand_expanderz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2Oenvz12zd2envzb5zzexpand_expanderz00,
		BgL_bgl_za762initializa7a7eza71129za7,
		BGl_z62initializa7ezd2Oenvz12z05zzexpand_expanderz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2Ozd2macrozd2toplevelzd2envz00zzexpand_expanderz00,
		BgL_bgl_za762getza7d2oza7d2mac1130za7,
		BGl_z62getzd2Ozd2macrozd2toplevelzb0zzexpand_expanderz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2Ozd2expanderzd2envzd2zzexpand_expanderz00,
		BgL_bgl_za762findza7d2oza7d2ex1131za7,
		BGl_z62findzd2Ozd2expanderz62zzexpand_expanderz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2Genvza2z00zzexpand_expanderz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzexpand_expanderz00));
		     ADD_ROOT((void *) (&BGl_za2Oenvza2z00zzexpand_expanderz00));
		   
			 ADD_ROOT((void *) (&BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2Ozd2macrozd2toplevelza2z00zzexpand_expanderz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzexpand_expanderz00(long
		BgL_checksumz00_202, char *BgL_fromz00_203)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_expanderz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_expanderz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_expanderz00();
					BGl_libraryzd2moduleszd2initz00zzexpand_expanderz00();
					BGl_cnstzd2initzd2zzexpand_expanderz00();
					BGl_importedzd2moduleszd2initz00zzexpand_expanderz00();
					return BGl_toplevelzd2initzd2zzexpand_expanderz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__macroz00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"expand_expander");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"expand_expander");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 15 */
			{	/* Expand/expander.scm 15 */
				obj_t BgL_cportz00_188;

				{	/* Expand/expander.scm 15 */
					obj_t BgL_stringz00_196;

					BgL_stringz00_196 = BGl_string1103z00zzexpand_expanderz00;
					{	/* Expand/expander.scm 15 */
						obj_t BgL_startz00_197;

						BgL_startz00_197 = BINT(((long) 0));
						{	/* Expand/expander.scm 15 */
							obj_t BgL_endz00_198;

							BgL_endz00_198 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_196)));
							{	/* Expand/expander.scm 15 */

								BgL_cportz00_188 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_196, BgL_startz00_197, BgL_endz00_198);
				}}}}
				{
					long BgL_iz00_189;

					BgL_iz00_189 = ((long) 1);
				BgL_loopz00_190:
					if ((BgL_iz00_189 == ((long) -1)))
						{	/* Expand/expander.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/expander.scm 15 */
							{	/* Expand/expander.scm 15 */
								obj_t BgL_arg1109z00_192;

								{	/* Expand/expander.scm 15 */

									{	/* Expand/expander.scm 15 */
										obj_t BgL_locationz00_194;

										BgL_locationz00_194 = BBOOL(((bool_t) 0));
										{	/* Expand/expander.scm 15 */

											BgL_arg1109z00_192 =
												BGl_readz00zz__readerz00(BgL_cportz00_188,
												BgL_locationz00_194);
										}
									}
								}
								{	/* Expand/expander.scm 15 */
									int BgL_tmpz00_232;

									BgL_tmpz00_232 = (int) (BgL_iz00_189);
									CNST_TABLE_SET(BgL_tmpz00_232, BgL_arg1109z00_192);
							}}
							{	/* Expand/expander.scm 15 */
								int BgL_auxz00_195;

								BgL_auxz00_195 = (int) ((BgL_iz00_189 - ((long) 1)));
								{
									long BgL_iz00_237;

									BgL_iz00_237 = (long) (BgL_auxz00_195);
									BgL_iz00_189 = BgL_iz00_237;
									goto BgL_loopz00_190;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 15 */
			BGl_za2Oenvza2z00zzexpand_expanderz00 = BNIL;
			BGl_za2Ozd2macrozd2toplevelza2z00zzexpand_expanderz00 = BNIL;
			BGl_za2Genvza2z00zzexpand_expanderz00 = BNIL;
			return (BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00 =
				BNIL, BUNSPEC);
		}

	}



/* initialize-Oenv! */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2Oenvz12z67zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 41 */
			return (BGl_za2Oenvza2z00zzexpand_expanderz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
		}

	}



/* &initialize-Oenv! */
	obj_t BGl_z62initializa7ezd2Oenvz12z05zzexpand_expanderz00(obj_t
		BgL_envz00_159)
	{
		{	/* Expand/expander.scm 41 */
			return BGl_initializa7ezd2Oenvz12z67zzexpand_expanderz00();
		}

	}



/* add-O-macro-toplevel! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2Ozd2macrozd2toplevelz12zc0zzexpand_expanderz00(obj_t
		BgL_expz00_13)
	{
		{	/* Expand/expander.scm 52 */
			return (BGl_za2Ozd2macrozd2toplevelza2z00zzexpand_expanderz00 =
				MAKE_YOUNG_PAIR(BgL_expz00_13,
					BGl_za2Ozd2macrozd2toplevelza2z00zzexpand_expanderz00), BUNSPEC);
		}

	}



/* &add-O-macro-toplevel! */
	obj_t BGl_z62addzd2Ozd2macrozd2toplevelz12za2zzexpand_expanderz00(obj_t
		BgL_envz00_160, obj_t BgL_expz00_161)
	{
		{	/* Expand/expander.scm 52 */
			return
				BGl_addzd2Ozd2macrozd2toplevelz12zc0zzexpand_expanderz00
				(BgL_expz00_161);
		}

	}



/* get-O-macro-toplevel */
	BGL_EXPORTED_DEF obj_t BGl_getzd2Ozd2macrozd2toplevelzd2zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 58 */
			{	/* Expand/expander.scm 59 */
				obj_t BgL_vz00_44;

				BgL_vz00_44 = BGl_za2Ozd2macrozd2toplevelza2z00zzexpand_expanderz00;
				BGl_za2Ozd2macrozd2toplevelza2z00zzexpand_expanderz00 = BNIL;
				return BgL_vz00_44;
			}
		}

	}



/* &get-O-macro-toplevel */
	obj_t BGl_z62getzd2Ozd2macrozd2toplevelzb0zzexpand_expanderz00(obj_t
		BgL_envz00_162)
	{
		{	/* Expand/expander.scm 58 */
			return BGl_getzd2Ozd2macrozd2toplevelzd2zzexpand_expanderz00();
		}

	}



/* install-O-comptime-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t
		BgL_keywordz00_14, obj_t BgL_functionz00_15)
	{
		{	/* Expand/expander.scm 70 */
			{	/* Expand/expander.scm 71 */
				bool_t BgL_test1134z00_245;

				{	/* Expand/expander.scm 71 */
					obj_t BgL_arg1036z00_55;

					{	/* Expand/expander.scm 90 */
						obj_t BgL__andtest_1012z00_117;

						BgL__andtest_1012z00_117 =
							BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00;
						if (CBOOL(BgL__andtest_1012z00_117))
							{	/* Expand/expander.scm 90 */
								BgL_arg1036z00_55 =
									BGl_hashtablezd2getzd2zz__hashz00
									(BGl_za2Oenvza2z00zzexpand_expanderz00, BgL_keywordz00_14);
							}
						else
							{	/* Expand/expander.scm 90 */
								BgL_arg1036z00_55 = BFALSE;
							}
					}
					if (STRUCTP(BgL_arg1036z00_55))
						{	/* Expand/expander.scm 71 */
							BgL_test1134z00_245 =
								(STRUCT_KEY(BgL_arg1036z00_55) == CNST_TABLE_REF(((long) 0)));
						}
					else
						{	/* Expand/expander.scm 71 */
							BgL_test1134z00_245 = ((bool_t) 0);
						}
				}
				if (BgL_test1134z00_245)
					{	/* Expand/expander.scm 71 */
						return
							BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string1095z00zzexpand_expanderz00,
							BGl_string1096z00zzexpand_expanderz00, BgL_keywordz00_14);
					}
				else
					{	/* Expand/expander.scm 75 */
						obj_t BgL_newz00_47;

						{	/* Expand/expander.scm 76 */
							obj_t BgL_zc3z04anonymousza31034ze3z87_163;

							BgL_zc3z04anonymousza31034ze3z87_163 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31034ze3ze5zzexpand_expanderz00,
								(int) (((long) 2)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31034ze3z87_163,
								(int) (((long) 0)), BgL_functionz00_15);
							{	/* Expand/expander.scm 75 */
								obj_t BgL_newz00_124;

								BgL_newz00_124 =
									create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 2)));
								{	/* Expand/expander.scm 75 */
									int BgL_tmpz00_263;

									BgL_tmpz00_263 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_124, BgL_tmpz00_263,
										BgL_zc3z04anonymousza31034ze3z87_163);
								}
								{	/* Expand/expander.scm 75 */
									int BgL_tmpz00_266;

									BgL_tmpz00_266 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_124, BgL_tmpz00_266, BgL_keywordz00_14);
								}
								BgL_newz00_47 = BgL_newz00_124;
						}}
						BGl_hashtablezd2putz12zc0zz__hashz00
							(BGl_za2Oenvza2z00zzexpand_expanderz00, BgL_keywordz00_14,
							BgL_newz00_47);
						return BgL_newz00_47;
					}
			}
		}

	}



/* &install-O-comptime-expander */
	obj_t BGl_z62installzd2Ozd2comptimezd2expanderzb0zzexpand_expanderz00(obj_t
		BgL_envz00_164, obj_t BgL_keywordz00_165, obj_t BgL_functionz00_166)
	{
		{	/* Expand/expander.scm 70 */
			return
				BGl_installzd2Ozd2comptimezd2expanderzd2zzexpand_expanderz00
				(BgL_keywordz00_165, BgL_functionz00_166);
		}

	}



/* &<@anonymous:1034> */
	obj_t BGl_z62zc3z04anonymousza31034ze3ze5zzexpand_expanderz00(obj_t
		BgL_envz00_167, obj_t BgL_xz00_169, obj_t BgL_ez00_170)
	{
		{	/* Expand/expander.scm 75 */
			{	/* Expand/expander.scm 76 */
				obj_t BgL_functionz00_168;

				BgL_functionz00_168 =
					((obj_t) PROCEDURE_REF(BgL_envz00_167, (int) (((long) 0))));
				{	/* Expand/expander.scm 76 */
					obj_t BgL_newxz00_201;

					BgL_newxz00_201 =
						PROCEDURE_ENTRY(BgL_functionz00_168) (BgL_functionz00_168,
						BgL_xz00_169, BgL_ez00_170, BEOA);
					if (PAIRP(BgL_newxz00_201))
						{	/* Expand/expander.scm 77 */
							return
								BGl_epairifyz00zztools_miscz00(BgL_newxz00_201, BgL_xz00_169);
						}
					else
						{	/* Expand/expander.scm 77 */
							return BgL_newxz00_201;
						}
				}
			}
		}

	}



/* find-O-expander */
	BGL_EXPORTED_DEF obj_t BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(obj_t
		BgL_symbolz00_16)
	{
		{	/* Expand/expander.scm 89 */
			{	/* Expand/expander.scm 90 */
				obj_t BgL__andtest_1012z00_127;

				BgL__andtest_1012z00_127 =
					BGl_za2optimzd2Ozd2macrozf3za2zf3zzengine_paramz00;
				if (CBOOL(BgL__andtest_1012z00_127))
					{	/* Expand/expander.scm 90 */
						return
							BGl_hashtablezd2getzd2zz__hashz00
							(BGl_za2Oenvza2z00zzexpand_expanderz00, BgL_symbolz00_16);
					}
				else
					{	/* Expand/expander.scm 90 */
						return BFALSE;
					}
			}
		}

	}



/* &find-O-expander */
	obj_t BGl_z62findzd2Ozd2expanderz62zzexpand_expanderz00(obj_t BgL_envz00_171,
		obj_t BgL_symbolz00_172)
	{
		{	/* Expand/expander.scm 89 */
			return BGl_findzd2Ozd2expanderz00zzexpand_expanderz00(BgL_symbolz00_172);
		}

	}



/* unbind-O-expander! */
	BGL_EXPORTED_DEF obj_t
		BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00(obj_t BgL_symbolz00_17)
	{
		{	/* Expand/expander.scm 95 */
			return
				BBOOL(BGl_hashtablezd2removez12zc0zz__hashz00
				(BGl_za2Oenvza2z00zzexpand_expanderz00, BgL_symbolz00_17));
		}

	}



/* &unbind-O-expander! */
	obj_t BGl_z62unbindzd2Ozd2expanderz12z70zzexpand_expanderz00(obj_t
		BgL_envz00_173, obj_t BgL_symbolz00_174)
	{
		{	/* Expand/expander.scm 95 */
			return
				BGl_unbindzd2Ozd2expanderz12z12zzexpand_expanderz00(BgL_symbolz00_174);
		}

	}



/* initialize-Genv! */
	BGL_EXPORTED_DEF obj_t BGl_initializa7ezd2Genvz12z67zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 106 */
			return (BGl_za2Genvza2z00zzexpand_expanderz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
		}

	}



/* &initialize-Genv! */
	obj_t BGl_z62initializa7ezd2Genvz12z05zzexpand_expanderz00(obj_t
		BgL_envz00_175)
	{
		{	/* Expand/expander.scm 106 */
			return BGl_initializa7ezd2Genvz12z67zzexpand_expanderz00();
		}

	}



/* install-G-comptime-expander */
	BGL_EXPORTED_DEF obj_t
		BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00(obj_t
		BgL_keywordz00_18, obj_t BgL_functionz00_19)
	{
		{	/* Expand/expander.scm 116 */
			{	/* Expand/expander.scm 117 */
				bool_t BgL_test1139z00_291;

				{	/* Expand/expander.scm 117 */
					obj_t BgL_arg1040z00_61;

					BgL_arg1040z00_61 =
						BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(BgL_keywordz00_18);
					if (STRUCTP(BgL_arg1040z00_61))
						{	/* Expand/expander.scm 117 */
							BgL_test1139z00_291 =
								(STRUCT_KEY(BgL_arg1040z00_61) == CNST_TABLE_REF(((long) 0)));
						}
					else
						{	/* Expand/expander.scm 117 */
							BgL_test1139z00_291 = ((bool_t) 0);
						}
				}
				if (BgL_test1139z00_291)
					{	/* Expand/expander.scm 117 */
						return
							BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string1097z00zzexpand_expanderz00,
							BGl_string1098z00zzexpand_expanderz00, BgL_keywordz00_18);
					}
				else
					{	/* Expand/expander.scm 121 */
						obj_t BgL_newz00_60;

						{	/* Expand/expander.scm 121 */
							obj_t BgL_newz00_133;

							BgL_newz00_133 =
								create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 2)));
							{	/* Expand/expander.scm 121 */
								int BgL_tmpz00_302;

								BgL_tmpz00_302 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_133, BgL_tmpz00_302, BgL_functionz00_19);
							}
							{	/* Expand/expander.scm 121 */
								int BgL_tmpz00_305;

								BgL_tmpz00_305 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_133, BgL_tmpz00_305, BgL_keywordz00_18);
							}
							BgL_newz00_60 = BgL_newz00_133;
						}
						BGl_hashtablezd2putz12zc0zz__hashz00
							(BGl_za2Genvza2z00zzexpand_expanderz00, BgL_keywordz00_18,
							BgL_newz00_60);
						return BgL_newz00_60;
					}
			}
		}

	}



/* &install-G-comptime-expander */
	obj_t BGl_z62installzd2Gzd2comptimezd2expanderzb0zzexpand_expanderz00(obj_t
		BgL_envz00_176, obj_t BgL_keywordz00_177, obj_t BgL_functionz00_178)
	{
		{	/* Expand/expander.scm 116 */
			return
				BGl_installzd2Gzd2comptimezd2expanderzd2zzexpand_expanderz00
				(BgL_keywordz00_177, BgL_functionz00_178);
		}

	}



/* find-G-expander */
	BGL_EXPORTED_DEF obj_t BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(obj_t
		BgL_symbolz00_20)
	{
		{	/* Expand/expander.scm 131 */
			if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
				(BGl_za2compilerzd2debugza2zd2zzengine_paramz00))
				{	/* Expand/expander.scm 132 */
					bool_t BgL_test1142z00_312;

					if (INTEGERP(BGl_za2compilerzd2debugza2zd2zzengine_paramz00))
						{	/* Expand/expander.scm 132 */
							BgL_test1142z00_312 =
								(
								(long) CINT(BGl_za2compilerzd2debugza2zd2zzengine_paramz00) >=
								((long) 1));
						}
					else
						{	/* Expand/expander.scm 132 */
							BgL_test1142z00_312 =
								BGl_2ze3zd3z30zz__r4_numbers_6_5z00
								(BGl_za2compilerzd2debugza2zd2zzengine_paramz00,
								BINT(((long) 1)));
						}
					if (BgL_test1142z00_312)
						{	/* Expand/expander.scm 132 */
							return
								BGl_hashtablezd2getzd2zz__hashz00
								(BGl_za2Genvza2z00zzexpand_expanderz00, BgL_symbolz00_20);
						}
					else
						{	/* Expand/expander.scm 132 */
							return BFALSE;
						}
				}
			else
				{	/* Expand/expander.scm 132 */
					return BFALSE;
				}
		}

	}



/* &find-G-expander */
	obj_t BGl_z62findzd2Gzd2expanderz62zzexpand_expanderz00(obj_t BgL_envz00_179,
		obj_t BgL_symbolz00_180)
	{
		{	/* Expand/expander.scm 131 */
			return BGl_findzd2Gzd2expanderz00zzexpand_expanderz00(BgL_symbolz00_180);
		}

	}



/* unbind-G-expander! */
	BGL_EXPORTED_DEF obj_t
		BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00(obj_t BgL_symbolz00_21)
	{
		{	/* Expand/expander.scm 138 */
			return
				BBOOL(BGl_hashtablezd2removez12zc0zz__hashz00
				(BGl_za2Genvza2z00zzexpand_expanderz00, BgL_symbolz00_21));
		}

	}



/* &unbind-G-expander! */
	obj_t BGl_z62unbindzd2Gzd2expanderz12z70zzexpand_expanderz00(obj_t
		BgL_envz00_181, obj_t BgL_symbolz00_182)
	{
		{	/* Expand/expander.scm 138 */
			return
				BGl_unbindzd2Gzd2expanderz12z12zzexpand_expanderz00(BgL_symbolz00_182);
		}

	}



/* to-be-macro! */
	BGL_EXPORTED_DEF obj_t BGl_tozd2bezd2macroz12z12zzexpand_expanderz00(obj_t
		BgL_idz00_22, obj_t BgL_srcz00_23)
	{
		{	/* Expand/expander.scm 149 */
			if (CBOOL(BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_22,
						BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00)))
				{	/* Expand/expander.scm 150 */
					return BFALSE;
				}
			else
				{	/* Expand/expander.scm 151 */
					obj_t BgL_arg1043z00_66;

					BgL_arg1043z00_66 = MAKE_YOUNG_PAIR(BgL_idz00_22, BgL_srcz00_23);
					return (BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00 =
						MAKE_YOUNG_PAIR(BgL_arg1043z00_66,
							BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00), BUNSPEC);
				}
		}

	}



/* &to-be-macro! */
	obj_t BGl_z62tozd2bezd2macroz12z70zzexpand_expanderz00(obj_t BgL_envz00_183,
		obj_t BgL_idz00_184, obj_t BgL_srcz00_185)
	{
		{	/* Expand/expander.scm 149 */
			return
				BGl_tozd2bezd2macroz12z12zzexpand_expanderz00(BgL_idz00_184,
				BgL_srcz00_185);
		}

	}



/* check-to-be-macros */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2tozd2bezd2macroszd2zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 156 */
			{
				obj_t BgL_l1015z00_68;

				{	/* Expand/expander.scm 157 */
					bool_t BgL_tmpz00_330;

					BgL_l1015z00_68 = BGl_za2tozd2bezd2macrosza2z00zzexpand_expanderz00;
				BgL_zc3z04anonymousza31044ze3z87_69:
					if (PAIRP(BgL_l1015z00_68))
						{	/* Expand/expander.scm 157 */
							{	/* Expand/expander.scm 158 */
								obj_t BgL_mz00_71;

								BgL_mz00_71 = CAR(BgL_l1015z00_68);
								{
									obj_t BgL_idz00_74;
									obj_t BgL_idz00_72;

									{	/* Expand/expander.scm 158 */
										obj_t BgL_ezd2104zd2_77;

										BgL_ezd2104zd2_77 = CDR(((obj_t) BgL_mz00_71));
										if (PAIRP(BgL_ezd2104zd2_77))
											{	/* Expand/expander.scm 158 */
												obj_t BgL_cdrzd2108zd2_79;

												BgL_cdrzd2108zd2_79 = CDR(BgL_ezd2104zd2_77);
												if (
													(CAR(BgL_ezd2104zd2_77) ==
														CNST_TABLE_REF(((long) 1))))
													{	/* Expand/expander.scm 158 */
														if (PAIRP(BgL_cdrzd2108zd2_79))
															{	/* Expand/expander.scm 158 */
																if (NULLP(CDR(BgL_cdrzd2108zd2_79)))
																	{	/* Expand/expander.scm 158 */
																		BgL_idz00_72 = CAR(BgL_cdrzd2108zd2_79);
																		if (CBOOL
																			(BGl_getzd2compilerzd2expanderz00zz__macroz00
																				(BgL_idz00_72)))
																			{	/* Expand/expander.scm 160 */
																				BFALSE;
																			}
																		else
																			{	/* Expand/expander.scm 160 */
																				BGl_errorz00zz__errorz00
																					(BGl_string1099z00zzexpand_expanderz00,
																					BGl_string1100z00zzexpand_expanderz00,
																					BgL_idz00_72);
																			}
																	}
																else
																	{	/* Expand/expander.scm 158 */
																	BgL_tagzd2103zd2_76:
																		{	/* Expand/expander.scm 170 */
																			bool_t BgL_test1151z00_353;

																			{	/* Expand/expander.scm 170 */
																				obj_t BgL_arg1074z00_102;

																				BgL_arg1074z00_102 =
																					CAR(((obj_t) BgL_mz00_71));
																				BgL_test1151z00_353 =
																					CBOOL
																					(BGl_getzd2compilerzd2expanderz00zz__macroz00
																					(BgL_arg1074z00_102));
																			}
																			if (BgL_test1151z00_353)
																				{	/* Expand/expander.scm 170 */
																					BFALSE;
																				}
																			else
																				{	/* Expand/expander.scm 173 */
																					obj_t BgL_arg1073z00_101;

																					BgL_arg1073z00_101 =
																						CDR(((obj_t) BgL_mz00_71));
																					BGl_errorz00zz__errorz00
																						(BGl_string1099z00zzexpand_expanderz00,
																						BGl_string1101z00zzexpand_expanderz00,
																						BgL_arg1073z00_101);
																				}
																		}
																	}
															}
														else
															{	/* Expand/expander.scm 158 */
																goto BgL_tagzd2103zd2_76;
															}
													}
												else
													{	/* Expand/expander.scm 158 */
														if (
															(CAR(BgL_ezd2104zd2_77) ==
																CNST_TABLE_REF(((long) 0))))
															{	/* Expand/expander.scm 158 */
																if (PAIRP(BgL_cdrzd2108zd2_79))
																	{	/* Expand/expander.scm 158 */
																		if (NULLP(CDR(BgL_cdrzd2108zd2_79)))
																			{	/* Expand/expander.scm 158 */
																				BgL_idz00_74 = CAR(BgL_cdrzd2108zd2_79);
																				if (CBOOL
																					(BGl_getzd2compilerzd2expanderz00zz__macroz00
																						(BgL_idz00_74)))
																					{	/* Expand/expander.scm 165 */
																						BFALSE;
																					}
																				else
																					{	/* Expand/expander.scm 165 */
																						BGl_errorz00zz__errorz00
																							(BGl_string1099z00zzexpand_expanderz00,
																							BGl_string1100z00zzexpand_expanderz00,
																							BgL_idz00_74);
																					}
																			}
																		else
																			{	/* Expand/expander.scm 158 */
																				goto BgL_tagzd2103zd2_76;
																			}
																	}
																else
																	{	/* Expand/expander.scm 158 */
																		goto BgL_tagzd2103zd2_76;
																	}
															}
														else
															{	/* Expand/expander.scm 158 */
																goto BgL_tagzd2103zd2_76;
															}
													}
											}
										else
											{	/* Expand/expander.scm 158 */
												goto BgL_tagzd2103zd2_76;
											}
									}
								}
							}
							{
								obj_t BgL_l1015z00_375;

								BgL_l1015z00_375 = CDR(BgL_l1015z00_68);
								BgL_l1015z00_68 = BgL_l1015z00_375;
								goto BgL_zc3z04anonymousza31044ze3z87_69;
							}
						}
					else
						{	/* Expand/expander.scm 157 */
							BgL_tmpz00_330 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_330);
				}
			}
		}

	}



/* &check-to-be-macros */
	obj_t BGl_z62checkzd2tozd2bezd2macroszb0zzexpand_expanderz00(obj_t
		BgL_envz00_186)
	{
		{	/* Expand/expander.scm 156 */
			return BGl_checkzd2tozd2bezd2macroszd2zzexpand_expanderz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_expanderz00()
	{
		{	/* Expand/expander.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1102z00zzexpand_expanderz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1102z00zzexpand_expanderz00));
			return
				BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1102z00zzexpand_expanderz00));
		}

	}

#ifdef __cplusplus
}
#endif
