/*===========================================================================*/
/*   (Read/reader.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/reader.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_compilerzd2readzd2srcz00zzread_readerz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzread_readerz00();
	BGL_IMPORT obj_t string_to_obj(obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2compilerzd2readerz00zzread_readerz00();
	static obj_t BGl_z62compilerzd2readzb0zzread_readerz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzread_readerz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzread_readerz00();
	static obj_t BGl_requirezd2initializa7ationz75zzread_readerz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzread_readerz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62compilerzd2readzd2srcz62zzread_readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzread_readerz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_readerz00();
	BGL_EXPORTED_DECL obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzread_readerz00();
	extern obj_t BGl_za2readerza2z00zzengine_paramz00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_compilerzd2readzd2srczd2envzd2zzread_readerz00,
		BgL_bgl_za762compilerza7d2re1035z00, va_generic_entry,
		BGl_z62compilerzd2readzd2srcz62zzread_readerz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_compilerzd2readzd2envz00zzread_readerz00,
		BgL_bgl_za762compilerza7d2re1036z00, va_generic_entry,
		BGl_z62compilerzd2readzb0zzread_readerz00, BUNSPEC, -1);
	BGL_IMPORT obj_t BGl_readzd2envzd2zz__readerz00;
	   
		 
		DEFINE_STRING(BGl_string1028z00zzread_readerz00,
		BgL_bgl_string1028za700za7za7r1037za7, "", 0);
	      DEFINE_STRING(BGl_string1029z00zzread_readerz00,
		BgL_bgl_string1029za700za7za7r1038za7, "Illegal intern value", 20);
	      DEFINE_STRING(BGl_string1030z00zzread_readerz00,
		BgL_bgl_string1030za700za7za7r1039za7, "read_reader", 11);
	      DEFINE_STRING(BGl_string1031z00zzread_readerz00,
		BgL_bgl_string1031za700za7za7r1040za7, "intern-src intern ", 18);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzread_readerz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long
		BgL_checksumz00_54, char *BgL_fromz00_55)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_readerz00))
				{
					BGl_requirezd2initializa7ationz75zzread_readerz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzread_readerz00();
					BGl_libraryzd2moduleszd2initz00zzread_readerz00();
					BGl_cnstzd2initzd2zzread_readerz00();
					BGl_importedzd2moduleszd2initz00zzread_readerz00();
					return BGl_methodzd2initzd2zzread_readerz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_readerz00()
	{
		{	/* Read/reader.scm 16 */
			BGl_modulezd2initializa7ationz75zz__intextz00(((long) 0), "read_reader");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "read_reader");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_reader");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"read_reader");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "read_reader");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"read_reader");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"read_reader");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzread_readerz00()
	{
		{	/* Read/reader.scm 16 */
			{	/* Read/reader.scm 16 */
				obj_t BgL_cportz00_41;

				{	/* Read/reader.scm 16 */
					obj_t BgL_stringz00_49;

					BgL_stringz00_49 = BGl_string1031z00zzread_readerz00;
					{	/* Read/reader.scm 16 */
						obj_t BgL_startz00_50;

						BgL_startz00_50 = BINT(((long) 0));
						{	/* Read/reader.scm 16 */
							obj_t BgL_endz00_51;

							BgL_endz00_51 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_49)));
							{	/* Read/reader.scm 16 */

								BgL_cportz00_41 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_49, BgL_startz00_50, BgL_endz00_51);
				}}}}
				{
					long BgL_iz00_42;

					BgL_iz00_42 = ((long) 1);
				BgL_loopz00_43:
					if ((BgL_iz00_42 == ((long) -1)))
						{	/* Read/reader.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Read/reader.scm 16 */
							{	/* Read/reader.scm 16 */
								obj_t BgL_arg1033z00_45;

								{	/* Read/reader.scm 16 */

									{	/* Read/reader.scm 16 */
										obj_t BgL_locationz00_47;

										BgL_locationz00_47 = BBOOL(((bool_t) 0));
										{	/* Read/reader.scm 16 */

											BgL_arg1033z00_45 =
												BGl_readz00zz__readerz00(BgL_cportz00_41,
												BgL_locationz00_47);
										}
									}
								}
								{	/* Read/reader.scm 16 */
									int BgL_tmpz00_80;

									BgL_tmpz00_80 = (int) (BgL_iz00_42);
									CNST_TABLE_SET(BgL_tmpz00_80, BgL_arg1033z00_45);
							}}
							{	/* Read/reader.scm 16 */
								int BgL_auxz00_48;

								BgL_auxz00_48 = (int) ((BgL_iz00_42 - ((long) 1)));
								{
									long BgL_iz00_85;

									BgL_iz00_85 = (long) (BgL_auxz00_48);
									BgL_iz00_42 = BgL_iz00_85;
									goto BgL_loopz00_43;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzread_readerz00()
	{
		{	/* Read/reader.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* get-compiler-reader */
	obj_t BGl_getzd2compilerzd2readerz00zzread_readerz00()
	{
		{	/* Read/reader.scm 24 */
			{	/* Read/reader.scm 25 */
				obj_t BgL__ortest_1012z00_13;

				BgL__ortest_1012z00_13 = BGl_bigloozd2loadzd2readerz00zz__paramz00();
				if (CBOOL(BgL__ortest_1012z00_13))
					{	/* Read/reader.scm 25 */
						return BgL__ortest_1012z00_13;
					}
				else
					{	/* Read/reader.scm 25 */
						return BGl_readzd2envzd2zz__readerz00;
					}
			}
		}

	}



/* compiler-read */
	BGL_EXPORTED_DEF obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t
		BgL_argsz00_3)
	{
		{	/* Read/reader.scm 30 */
			{	/* Read/reader.scm 31 */
				obj_t BgL_readz00_14;

				BgL_readz00_14 = BGl_getzd2compilerzd2readerz00zzread_readerz00();
				{	/* Read/reader.scm 31 */
					obj_t BgL_valuez00_15;

					BgL_valuez00_15 = apply(BgL_readz00_14, BgL_argsz00_3);
					{	/* Read/reader.scm 32 */

						if (
							(BGl_za2readerza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 0))))
							{	/* Read/reader.scm 35 */
								bool_t BgL_test1045z00_97;

								{	/* Read/reader.scm 35 */
									bool_t BgL_res1022z00_30;

									BgL_res1022z00_30 = EOF_OBJECTP(BgL_valuez00_15);
									BgL_test1045z00_97 = BgL_res1022z00_30;
								}
								if (BgL_test1045z00_97)
									{	/* Read/reader.scm 35 */
										return BgL_valuez00_15;
									}
								else
									{	/* Read/reader.scm 35 */
										if (STRINGP(BgL_valuez00_15))
											{	/* Read/reader.scm 38 */

												return string_to_obj(BgL_valuez00_15, BFALSE, BFALSE);
											}
										else
											{	/* Read/reader.scm 37 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string1028z00zzread_readerz00,
													BGl_string1029z00zzread_readerz00, BgL_valuez00_15);
											}
									}
							}
						else
							{	/* Read/reader.scm 33 */
								return BgL_valuez00_15;
							}
					}
				}
			}
		}

	}



/* &compiler-read */
	obj_t BGl_z62compilerzd2readzb0zzread_readerz00(obj_t BgL_envz00_37,
		obj_t BgL_argsz00_38)
	{
		{	/* Read/reader.scm 30 */
			return BGl_compilerzd2readzd2zzread_readerz00(BgL_argsz00_38);
		}

	}



/* compiler-read-src */
	BGL_EXPORTED_DEF obj_t BGl_compilerzd2readzd2srcz00zzread_readerz00(obj_t
		BgL_argsz00_4)
	{
		{	/* Read/reader.scm 46 */
			{	/* Read/reader.scm 47 */
				obj_t BgL_readz00_22;

				BgL_readz00_22 = BGl_getzd2compilerzd2readerz00zzread_readerz00();
				{	/* Read/reader.scm 47 */
					obj_t BgL_valuez00_23;

					BgL_valuez00_23 = apply(BgL_readz00_22, BgL_argsz00_4);
					{	/* Read/reader.scm 48 */

						if (
							(BGl_za2readerza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 1))))
							{	/* Read/reader.scm 51 */
								bool_t BgL_test1048z00_110;

								{	/* Read/reader.scm 51 */
									bool_t BgL_res1024z00_32;

									BgL_res1024z00_32 = EOF_OBJECTP(BgL_valuez00_23);
									BgL_test1048z00_110 = BgL_res1024z00_32;
								}
								if (BgL_test1048z00_110)
									{	/* Read/reader.scm 51 */
										return BgL_valuez00_23;
									}
								else
									{	/* Read/reader.scm 51 */
										if (STRINGP(BgL_valuez00_23))
											{	/* Read/reader.scm 54 */

												return string_to_obj(BgL_valuez00_23, BFALSE, BFALSE);
											}
										else
											{	/* Read/reader.scm 53 */
												return
													BGl_errorz00zz__errorz00
													(BGl_string1028z00zzread_readerz00,
													BGl_string1029z00zzread_readerz00, BgL_valuez00_23);
											}
									}
							}
						else
							{	/* Read/reader.scm 49 */
								return BgL_valuez00_23;
							}
					}
				}
			}
		}

	}



/* &compiler-read-src */
	obj_t BGl_z62compilerzd2readzd2srcz62zzread_readerz00(obj_t BgL_envz00_39,
		obj_t BgL_argsz00_40)
	{
		{	/* Read/reader.scm 46 */
			return BGl_compilerzd2readzd2srcz00zzread_readerz00(BgL_argsz00_40);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzread_readerz00()
	{
		{	/* Read/reader.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_readerz00()
	{
		{	/* Read/reader.scm 16 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_readerz00()
	{
		{	/* Read/reader.scm 16 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_readerz00()
	{
		{	/* Read/reader.scm 16 */
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1030z00zzread_readerz00));
		}

	}

#ifdef __cplusplus
}
#endif
