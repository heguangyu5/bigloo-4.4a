/*===========================================================================*/
/*   (Cfa/set.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/set.scm) */
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

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;


	static obj_t BGl_z62makezd2setz12za2zzcfa_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2lengthzd2zzcfa_setz00(obj_t);
	static obj_t BGl_z62setzd2extendz12za2zzcfa_setz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2setz12zc0zzcfa_setz00(obj_t);
	static obj_t BGl_z62setzd2lengthzb0zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl_z62setzd2ze3vectorz53zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl_z62declarezd2setz12za2zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_setz00();
	static obj_t BGl_setzd2unionzd22z12z12zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_setz00();
	BGL_IMPORT obj_t make_string(long, unsigned char);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_setz00();
	BGL_EXPORTED_DECL bool_t BGl_setzf3zf3zzcfa_setz00(obj_t);
	static obj_t BGl_z62setzd2ze3listz53zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_setz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_setzd2memberzf3z21zzcfa_setz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_setz00();
	BGL_EXPORTED_DECL obj_t BGl_setzd2ze3listz31zzcfa_setz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_setz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62setzd2memberzf3z43zzcfa_setz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2forzd2eachz00zzcfa_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2unionz12zc0zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl_z62setzd2unionz12za2zzcfa_setz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzcfa_setz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_setz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_setz00();
	BGL_EXPORTED_DECL obj_t BGl_declarezd2setz12zc0zzcfa_setz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2extendz12zc0zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl_z62setzd2forzd2eachz62zzcfa_setz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setzd2ze3vectorz31zzcfa_setz00(obj_t);
	static obj_t BGl_z62setzf3z91zzcfa_setz00(obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2memberzf3zd2envzf3zzcfa_setz00,
		BgL_bgl_za762setza7d2memberza72046za7,
		BGl_z62setzd2memberzf3z43zzcfa_setz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2setz12zd2envz12zzcfa_setz00,
		BgL_bgl_za762makeza7d2setza7122047za7, BGl_z62makezd2setz12za2zzcfa_setz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2forzd2eachzd2envzd2zzcfa_setz00,
		BgL_bgl_za762setza7d2forza7d2e2048za7,
		BGl_z62setzd2forzd2eachz62zzcfa_setz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2ze3vectorzd2envze3zzcfa_setz00,
		BgL_bgl_za762setza7d2za7e3vect2049za7,
		BGl_z62setzd2ze3vectorz53zzcfa_setz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2lengthzd2envz00zzcfa_setz00,
		BgL_bgl_za762setza7d2lengthza72050za7, BGl_z62setzd2lengthzb0zzcfa_setz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2ze3listzd2envze3zzcfa_setz00,
		BgL_bgl_za762setza7d2za7e3list2051za7, BGl_z62setzd2ze3listz53zzcfa_setz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2unionz12zd2envz12zzcfa_setz00,
		BgL_bgl_za762setza7d2unionza712052za7, va_generic_entry,
		BGl_z62setzd2unionz12za2zzcfa_setz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2037z00zzcfa_setz00,
		BgL_bgl_string2037za700za7za7c2053za7, "make-set", 8);
	      DEFINE_STRING(BGl_string2038z00zzcfa_setz00,
		BgL_bgl_string2038za700za7za7c2054za7, "Not a meta-set", 14);
	      DEFINE_STRING(BGl_string2039z00zzcfa_setz00,
		BgL_bgl_string2039za700za7za7c2055za7, "set-union!", 10);
	      DEFINE_STRING(BGl_string2040z00zzcfa_setz00,
		BgL_bgl_string2040za700za7za7c2056za7, "Incompatible sets", 17);
	      DEFINE_STRING(BGl_string2041z00zzcfa_setz00,
		BgL_bgl_string2041za700za7za7c2057za7, "cfa_set", 7);
	      DEFINE_STRING(BGl_string2042z00zzcfa_setz00,
		BgL_bgl_string2042za700za7za7c2058za7, "large-set meta-set ", 19);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzd2extendz12zd2envz12zzcfa_setz00,
		BgL_bgl_za762setza7d2extendza72059za7,
		BGl_z62setzd2extendz12za2zzcfa_setz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setzf3zd2envz21zzcfa_setz00,
		BgL_bgl_za762setza7f3za791za7za7cf2060za7, BGl_z62setzf3z91zzcfa_setz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2setz12zd2envz12zzcfa_setz00,
		BgL_bgl_za762declareza7d2set2061z00, BGl_z62declarezd2setz12za2zzcfa_setz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_setz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long
		BgL_checksumz00_3722, char *BgL_fromz00_3723)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_setz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_setz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_setz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_setz00();
					BGl_cnstzd2initzd2zzcfa_setz00();
					BGl_importedzd2moduleszd2initz00zzcfa_setz00();
					return BGl_toplevelzd2initzd2zzcfa_setz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_setz00()
	{
		{	/* Cfa/set.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_set");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_set");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_set");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "cfa_set");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"cfa_set");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_set");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_set");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_set");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "cfa_set");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "cfa_set");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_setz00()
	{
		{	/* Cfa/set.scm 15 */
			{	/* Cfa/set.scm 15 */
				obj_t BgL_cportz00_3709;

				{	/* Cfa/set.scm 15 */
					obj_t BgL_stringz00_3717;

					BgL_stringz00_3717 = BGl_string2042z00zzcfa_setz00;
					{	/* Cfa/set.scm 15 */
						obj_t BgL_startz00_3718;

						BgL_startz00_3718 = BINT(((long) 0));
						{	/* Cfa/set.scm 15 */
							obj_t BgL_endz00_3719;

							BgL_endz00_3719 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3717)));
							{	/* Cfa/set.scm 15 */

								BgL_cportz00_3709 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3717, BgL_startz00_3718, BgL_endz00_3719);
				}}}}
				{
					long BgL_iz00_3710;

					BgL_iz00_3710 = ((long) 1);
				BgL_loopz00_3711:
					if ((BgL_iz00_3710 == ((long) -1)))
						{	/* Cfa/set.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/set.scm 15 */
							{	/* Cfa/set.scm 15 */
								obj_t BgL_arg2044z00_3713;

								{	/* Cfa/set.scm 15 */

									{	/* Cfa/set.scm 15 */
										obj_t BgL_locationz00_3715;

										BgL_locationz00_3715 = BBOOL(((bool_t) 0));
										{	/* Cfa/set.scm 15 */

											BgL_arg2044z00_3713 =
												BGl_readz00zz__readerz00(BgL_cportz00_3709,
												BgL_locationz00_3715);
										}
									}
								}
								{	/* Cfa/set.scm 15 */
									int BgL_tmpz00_3751;

									BgL_tmpz00_3751 = (int) (BgL_iz00_3710);
									CNST_TABLE_SET(BgL_tmpz00_3751, BgL_arg2044z00_3713);
							}}
							{	/* Cfa/set.scm 15 */
								int BgL_auxz00_3716;

								BgL_auxz00_3716 = (int) ((BgL_iz00_3710 - ((long) 1)));
								{
									long BgL_iz00_3756;

									BgL_iz00_3756 = (long) (BgL_auxz00_3716);
									BgL_iz00_3710 = BgL_iz00_3756;
									goto BgL_loopz00_3711;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_setz00()
	{
		{	/* Cfa/set.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_setz00()
	{
		{	/* Cfa/set.scm 15 */
			return BUNSPEC;
		}

	}



/* declare-set! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2setz12zc0zzcfa_setz00(obj_t
		BgL_tablez00_23)
	{
		{	/* Cfa/set.scm 45 */
			{	/* Cfa/set.scm 46 */
				long BgL_quotientz00_2843;

				{	/* Cfa/set.scm 47 */
					long BgL_res1977z00_3487;

					{	/* Cfa/set.scm 47 */
						long BgL_tmpz00_3759;

						BgL_tmpz00_3759 = VECTOR_LENGTH(BgL_tablez00_23);
						BgL_res1977z00_3487 = (BgL_tmpz00_3759 / ((long) 8));
					}
					BgL_quotientz00_2843 = BgL_res1977z00_3487;
				}
				{	/* Cfa/set.scm 47 */
					long BgL_remainderz00_2844;

					{	/* Cfa/set.scm 48 */
						long BgL_res1983z00_3506;

						{	/* Cfa/set.scm 48 */
							long BgL_n1z00_3488;
							long BgL_n2z00_3489;

							BgL_n1z00_3488 = VECTOR_LENGTH(BgL_tablez00_23);
							BgL_n2z00_3489 = ((long) 8);
							{	/* Cfa/set.scm 48 */
								bool_t BgL_test2064z00_3763;

								{	/* Cfa/set.scm 48 */
									long BgL_arg1356z00_3491;

									BgL_arg1356z00_3491 =
										(((BgL_n1z00_3488) | (BgL_n2z00_3489)) & -2147483648);
									BgL_test2064z00_3763 = (BgL_arg1356z00_3491 == ((long) 0));
								}
								if (BgL_test2064z00_3763)
									{	/* Cfa/set.scm 48 */
										int32_t BgL_arg1353z00_3492;

										{	/* Cfa/set.scm 48 */
											int32_t BgL_arg1354z00_3493;
											int32_t BgL_arg1355z00_3494;

											{	/* Cfa/set.scm 48 */
												int32_t BgL_res1979z00_3498;

												BgL_res1979z00_3498 = (int32_t) (BgL_n1z00_3488);
												BgL_arg1354z00_3493 = BgL_res1979z00_3498;
											}
											{	/* Cfa/set.scm 48 */
												int32_t BgL_res1980z00_3500;

												BgL_res1980z00_3500 = (int32_t) (BgL_n2z00_3489);
												BgL_arg1355z00_3494 = BgL_res1980z00_3500;
											}
											BgL_arg1353z00_3492 =
												(BgL_arg1354z00_3493 % BgL_arg1355z00_3494);
										}
										{	/* Cfa/set.scm 48 */
											long BgL_res1982z00_3505;

											{	/* Cfa/set.scm 48 */
												long BgL_arg1456z00_3502;

												BgL_arg1456z00_3502 = (long) (BgL_arg1353z00_3492);
												{	/* Cfa/set.scm 48 */
													long BgL_res1981z00_3504;

													BgL_res1981z00_3504 = (long) (BgL_arg1456z00_3502);
													BgL_res1982z00_3505 = BgL_res1981z00_3504;
											}}
											BgL_res1983z00_3506 = BgL_res1982z00_3505;
									}}
								else
									{	/* Cfa/set.scm 48 */
										BgL_res1983z00_3506 = (BgL_n1z00_3488 % BgL_n2z00_3489);
									}
							}
						}
						BgL_remainderz00_2844 = BgL_res1983z00_3506;
					}
					{	/* Cfa/set.scm 48 */
						long BgL_siza7eza7_2845;

						if ((BgL_remainderz00_2844 == ((long) 0)))
							{	/* Cfa/set.scm 49 */
								BgL_siza7eza7_2845 = (BgL_quotientz00_2843 + ((long) 1));
							}
						else
							{	/* Cfa/set.scm 49 */
								BgL_siza7eza7_2845 = (BgL_quotientz00_2843 + ((long) 2));
							}
						{	/* Cfa/set.scm 49 */

							{
								long BgL_iz00_2847;
								long BgL_quotientz00_2848;
								long BgL_maskz00_2849;

								BgL_iz00_2847 = ((long) 0);
								BgL_quotientz00_2848 = ((long) 0);
								BgL_maskz00_2849 = ((long) 1);
							BgL_zc3z04anonymousza31553ze3z87_2850:
								if ((BgL_iz00_2847 == VECTOR_LENGTH(BgL_tablez00_23)))
									{	/* Cfa/set.scm 39 */
										obj_t BgL_newz00_3516;

										BgL_newz00_3516 =
											create_struct(CNST_TABLE_REF(((long) 0)),
											(int) (((long) 2)));
										{	/* Cfa/set.scm 39 */
											obj_t BgL_auxz00_3784;
											int BgL_tmpz00_3782;

											BgL_auxz00_3784 = BINT(BgL_siza7eza7_2845);
											BgL_tmpz00_3782 = (int) (((long) 1));
											STRUCT_SET(BgL_newz00_3516, BgL_tmpz00_3782,
												BgL_auxz00_3784);
										}
										{	/* Cfa/set.scm 39 */
											int BgL_tmpz00_3787;

											BgL_tmpz00_3787 = (int) (((long) 0));
											STRUCT_SET(BgL_newz00_3516, BgL_tmpz00_3787,
												BgL_tablez00_23);
										}
										return BgL_newz00_3516;
									}
								else
									{	/* Cfa/set.scm 54 */
										if ((BgL_maskz00_2849 == ((long) 256)))
											{
												long BgL_maskz00_3794;
												long BgL_quotientz00_3792;

												BgL_quotientz00_3792 =
													(BgL_quotientz00_2848 + ((long) 1));
												BgL_maskz00_3794 = ((long) 1);
												BgL_maskz00_2849 = BgL_maskz00_3794;
												BgL_quotientz00_2848 = BgL_quotientz00_3792;
												goto BgL_zc3z04anonymousza31553ze3z87_2850;
											}
										else
											{	/* Cfa/set.scm 56 */
												{	/* Cfa/set.scm 59 */
													obj_t BgL_arg1561z00_2854;
													obj_t BgL_arg1564z00_2855;

													BgL_arg1561z00_2854 =
														VECTOR_REF(BgL_tablez00_23, BgL_iz00_2847);
													BgL_arg1564z00_2855 =
														MAKE_YOUNG_PAIR(BINT(BgL_quotientz00_2848),
														BINT(BgL_maskz00_2849));
													((((BgL_nodezf2effectzf2_bglt) COBJECT(
																	((BgL_nodezf2effectzf2_bglt)
																		BgL_arg1561z00_2854)))->BgL_keyz00) =
														((obj_t) BgL_arg1564z00_2855), BUNSPEC);
												}
												{
													long BgL_maskz00_3803;
													long BgL_iz00_3801;

													BgL_iz00_3801 = (BgL_iz00_2847 + ((long) 1));
													BgL_maskz00_3803 = (BgL_maskz00_2849 * ((long) 2));
													BgL_maskz00_2849 = BgL_maskz00_3803;
													BgL_iz00_2847 = BgL_iz00_3801;
													goto BgL_zc3z04anonymousza31553ze3z87_2850;
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



/* &declare-set! */
	obj_t BGl_z62declarezd2setz12za2zzcfa_setz00(obj_t BgL_envz00_3683,
		obj_t BgL_tablez00_3684)
	{
		{	/* Cfa/set.scm 45 */
			return BGl_declarezd2setz12zc0zzcfa_setz00(BgL_tablez00_3684);
		}

	}



/* make-set! */
	BGL_EXPORTED_DEF obj_t BGl_makezd2setz12zc0zzcfa_setz00(obj_t
		BgL_metazd2setzd2_24)
	{
		{	/* Cfa/set.scm 65 */
			{	/* Cfa/set.scm 67 */
				bool_t BgL_test2068z00_3806;

				if (STRUCTP(BgL_metazd2setzd2_24))
					{	/* Cfa/set.scm 39 */
						BgL_test2068z00_3806 =
							(STRUCT_KEY(BgL_metazd2setzd2_24) == CNST_TABLE_REF(((long) 0)));
					}
				else
					{	/* Cfa/set.scm 39 */
						BgL_test2068z00_3806 = ((bool_t) 0);
					}
				if (BgL_test2068z00_3806)
					{	/* Cfa/set.scm 70 */
						obj_t BgL_arg1578z00_2861;

						{	/* Cfa/set.scm 70 */
							obj_t BgL_arg1582z00_2862;

							BgL_arg1582z00_2862 =
								STRUCT_REF(BgL_metazd2setzd2_24, (int) (((long) 1)));
							BgL_arg1578z00_2861 =
								make_string(
								(long) CINT(BgL_arg1582z00_2862), ((unsigned char) '\000'));
						}
						{	/* Cfa/set.scm 40 */
							obj_t BgL_newz00_3539;

							BgL_newz00_3539 =
								create_struct(CNST_TABLE_REF(((long) 1)), (int) (((long) 2)));
							{	/* Cfa/set.scm 40 */
								int BgL_tmpz00_3819;

								BgL_tmpz00_3819 = (int) (((long) 1));
								STRUCT_SET(BgL_newz00_3539, BgL_tmpz00_3819,
									BgL_metazd2setzd2_24);
							}
							{	/* Cfa/set.scm 40 */
								int BgL_tmpz00_3822;

								BgL_tmpz00_3822 = (int) (((long) 0));
								STRUCT_SET(BgL_newz00_3539, BgL_tmpz00_3822,
									BgL_arg1578z00_2861);
							}
							return BgL_newz00_3539;
						}
					}
				else
					{	/* Cfa/set.scm 67 */
						return
							BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string2037z00zzcfa_setz00, BGl_string2038z00zzcfa_setz00,
							BGl_shapez00zztools_shapez00(BgL_metazd2setzd2_24));
					}
			}
		}

	}



/* &make-set! */
	obj_t BGl_z62makezd2setz12za2zzcfa_setz00(obj_t BgL_envz00_3685,
		obj_t BgL_metazd2setzd2_3686)
	{
		{	/* Cfa/set.scm 65 */
			return BGl_makezd2setz12zc0zzcfa_setz00(BgL_metazd2setzd2_3686);
		}

	}



/* set? */
	BGL_EXPORTED_DEF bool_t BGl_setzf3zf3zzcfa_setz00(obj_t BgL_objz00_25)
	{
		{	/* Cfa/set.scm 76 */
			if (STRUCTP(BgL_objz00_25))
				{	/* Cfa/set.scm 40 */
					return (STRUCT_KEY(BgL_objz00_25) == CNST_TABLE_REF(((long) 1)));
				}
			else
				{	/* Cfa/set.scm 40 */
					return ((bool_t) 0);
				}
		}

	}



/* &set? */
	obj_t BGl_z62setzf3z91zzcfa_setz00(obj_t BgL_envz00_3687,
		obj_t BgL_objz00_3688)
	{
		{	/* Cfa/set.scm 76 */
			return BBOOL(BGl_setzf3zf3zzcfa_setz00(BgL_objz00_3688));
		}

	}



/* set-extend! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2extendz12zc0zzcfa_setz00(obj_t BgL_setz00_26,
		obj_t BgL_objz00_27)
	{
		{	/* Cfa/set.scm 82 */
			{	/* Cfa/set.scm 83 */
				obj_t BgL_keyz00_2864;

				BgL_keyz00_2864 =
					(((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_objz00_27)))->BgL_keyz00);
				{	/* Cfa/set.scm 83 */
					obj_t BgL_thezd2setzd2_2865;

					BgL_thezd2setzd2_2865 =
						STRUCT_REF(((obj_t) BgL_setz00_26), (int) (((long) 0)));
					{	/* Cfa/set.scm 84 */
						obj_t BgL_quotientz00_2866;

						BgL_quotientz00_2866 = CAR(((obj_t) BgL_keyz00_2864));
						{	/* Cfa/set.scm 85 */
							obj_t BgL_maskz00_2867;

							BgL_maskz00_2867 = CDR(((obj_t) BgL_keyz00_2864));
							{	/* Cfa/set.scm 86 */

								{	/* Cfa/set.scm 89 */
									unsigned char BgL_arg1588z00_2868;

									BgL_arg1588z00_2868 =
										(
										((long) CINT(BgL_maskz00_2867)) |
										STRING_REF(
											((obj_t) BgL_thezd2setzd2_2865),
											(long) CINT(BgL_quotientz00_2866)));
									{	/* Cfa/set.scm 87 */
										long BgL_kz00_3561;

										BgL_kz00_3561 = (long) CINT(BgL_quotientz00_2866);
										{	/* Cfa/set.scm 87 */
											obj_t BgL_tmpz00_3851;

											BgL_tmpz00_3851 = ((obj_t) BgL_thezd2setzd2_2865);
											STRING_SET(BgL_tmpz00_3851, BgL_kz00_3561,
												BgL_arg1588z00_2868);
								}}}
								return BUNSPEC;
							}
						}
					}
				}
			}
		}

	}



/* &set-extend! */
	obj_t BGl_z62setzd2extendz12za2zzcfa_setz00(obj_t BgL_envz00_3689,
		obj_t BgL_setz00_3690, obj_t BgL_objz00_3691)
	{
		{	/* Cfa/set.scm 82 */
			return
				BGl_setzd2extendz12zc0zzcfa_setz00(BgL_setz00_3690, BgL_objz00_3691);
		}

	}



/* set-member? */
	BGL_EXPORTED_DEF obj_t BGl_setzd2memberzf3z21zzcfa_setz00(obj_t BgL_setz00_28,
		obj_t BgL_objz00_29)
	{
		{	/* Cfa/set.scm 96 */
			{	/* Cfa/set.scm 97 */
				obj_t BgL_keyz00_2871;

				BgL_keyz00_2871 =
					(((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_objz00_29)))->BgL_keyz00);
				{	/* Cfa/set.scm 100 */

					{	/* Cfa/set.scm 101 */
						bool_t BgL_tmpz00_3857;

						{	/* Cfa/set.scm 101 */
							long BgL_tmpz00_3858;

							{	/* Cfa/set.scm 101 */
								long BgL_tmpz00_3859;

								{	/* Cfa/set.scm 101 */
									unsigned char BgL_tmpz00_3863;

									{	/* Cfa/set.scm 101 */
										obj_t BgL_stringz00_3568;

										BgL_stringz00_3568 =
											STRUCT_REF(((obj_t) BgL_setz00_28), (int) (((long) 0)));
										BgL_tmpz00_3863 =
											STRING_REF(BgL_stringz00_3568,
											(long) CINT(CAR(((obj_t) BgL_keyz00_2871))));
									}
									BgL_tmpz00_3859 = (BgL_tmpz00_3863);
								}
								BgL_tmpz00_3858 =
									(
									(long) CINT(CDR(
											((obj_t) BgL_keyz00_2871))) & BgL_tmpz00_3859);
							}
							BgL_tmpz00_3857 = (BgL_tmpz00_3858 > ((long) 0));
						}
						return BBOOL(BgL_tmpz00_3857);
					}
				}
			}
		}

	}



/* &set-member? */
	obj_t BGl_z62setzd2memberzf3z43zzcfa_setz00(obj_t BgL_envz00_3692,
		obj_t BgL_setz00_3693, obj_t BgL_objz00_3694)
	{
		{	/* Cfa/set.scm 96 */
			return
				BGl_setzd2memberzf3z21zzcfa_setz00(BgL_setz00_3693, BgL_objz00_3694);
		}

	}



/* set-union-2! */
	obj_t BGl_setzd2unionzd22z12z12zzcfa_setz00(obj_t BgL_dstz00_30,
		obj_t BgL_srcz00_31)
	{
		{	/* Cfa/set.scm 109 */
			{

				{	/* Cfa/set.scm 126 */
					bool_t BgL_test2071z00_3876;

					if (STRUCTP(BgL_srcz00_31))
						{	/* Cfa/set.scm 40 */
							BgL_test2071z00_3876 =
								(STRUCT_KEY(BgL_srcz00_31) == CNST_TABLE_REF(((long) 1)));
						}
					else
						{	/* Cfa/set.scm 40 */
							BgL_test2071z00_3876 = ((bool_t) 0);
						}
					if (BgL_test2071z00_3876)
						{	/* Cfa/set.scm 128 */
							bool_t BgL_test2073z00_3882;

							{	/* Cfa/set.scm 128 */
								long BgL_tmpz00_3883;

								{	/* Cfa/set.scm 128 */
									obj_t BgL_stringz00_3614;

									BgL_stringz00_3614 =
										STRUCT_REF(((obj_t) BgL_dstz00_30), (int) (((long) 0)));
									BgL_tmpz00_3883 = STRING_LENGTH(BgL_stringz00_3614);
								}
								BgL_test2073z00_3882 =
									(BgL_tmpz00_3883 ==
									STRING_LENGTH(STRUCT_REF(BgL_srcz00_31, (int) (((long) 0)))));
							}
							if (BgL_test2073z00_3882)
								{	/* Cfa/set.scm 131 */
									bool_t BgL_tmpz00_3892;

									{	/* Cfa/set.scm 111 */
										obj_t BgL_thezd2dstzd2_2892;
										obj_t BgL_thezd2srczd2_2893;

										BgL_thezd2dstzd2_2892 =
											STRUCT_REF(((obj_t) BgL_dstz00_30), (int) (((long) 0)));
										BgL_thezd2srczd2_2893 =
											STRUCT_REF(((obj_t) BgL_srcz00_31), (int) (((long) 0)));
										{	/* Cfa/set.scm 113 */
											long BgL_g1153z00_2894;

											{	/* Cfa/set.scm 113 */
												long BgL_tmpz00_3899;

												{	/* Cfa/set.scm 39 */
													obj_t BgL_sz00_3581;

													BgL_sz00_3581 =
														STRUCT_REF(
														((obj_t) BgL_dstz00_30), (int) (((long) 1)));
													BgL_tmpz00_3899 =
														(long) CINT(STRUCT_REF(BgL_sz00_3581,
															(int) (((long) 1))));
												}
												BgL_g1153z00_2894 = (BgL_tmpz00_3899 - ((long) 1));
											}
											{
												long BgL_iz00_2896;
												bool_t BgL_resz00_2897;

												BgL_iz00_2896 = BgL_g1153z00_2894;
												BgL_resz00_2897 = ((bool_t) 0);
											BgL_zc3z04anonymousza31636ze3z87_2898:
												if ((BgL_iz00_2896 == ((long) -1)))
													{	/* Cfa/set.scm 116 */
														BgL_tmpz00_3892 = BgL_resz00_2897;
													}
												else
													{	/* Cfa/set.scm 118 */
														unsigned char BgL_oldz00_2900;
														unsigned char BgL_newz00_2901;

														BgL_oldz00_2900 =
															STRING_REF(
															((obj_t) BgL_thezd2dstzd2_2892), BgL_iz00_2896);
														BgL_newz00_2901 =
															(STRING_REF(
																((obj_t) BgL_thezd2dstzd2_2892),
																BgL_iz00_2896) | STRING_REF(((obj_t)
																	BgL_thezd2srczd2_2893), BgL_iz00_2896));
														if ((BgL_newz00_2901 == BgL_oldz00_2900))
															{
																long BgL_iz00_3918;

																BgL_iz00_3918 = (BgL_iz00_2896 - ((long) 1));
																BgL_iz00_2896 = BgL_iz00_3918;
																goto BgL_zc3z04anonymousza31636ze3z87_2898;
															}
														else
															{	/* Cfa/set.scm 121 */
																{	/* Cfa/set.scm 124 */
																	obj_t BgL_tmpz00_3920;

																	BgL_tmpz00_3920 =
																		((obj_t) BgL_thezd2dstzd2_2892);
																	STRING_SET(BgL_tmpz00_3920, BgL_iz00_2896,
																		BgL_newz00_2901);
																}
																{
																	bool_t BgL_resz00_3925;
																	long BgL_iz00_3923;

																	BgL_iz00_3923 = (BgL_iz00_2896 - ((long) 1));
																	BgL_resz00_3925 = ((bool_t) 1);
																	BgL_resz00_2897 = BgL_resz00_3925;
																	BgL_iz00_2896 = BgL_iz00_3923;
																	goto BgL_zc3z04anonymousza31636ze3z87_2898;
																}
															}
													}
											}
										}
									}
									return BBOOL(BgL_tmpz00_3892);
								}
							else
								{	/* Cfa/set.scm 128 */
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2039z00zzcfa_setz00,
										BGl_string2040z00zzcfa_setz00,
										BGl_shapez00zztools_shapez00(BgL_srcz00_31));
								}
						}
					else
						{	/* Cfa/set.scm 126 */
							return
								BGl_internalzd2errorzd2zztools_errorz00
								(BGl_string2039z00zzcfa_setz00, BGl_string2040z00zzcfa_setz00,
								BGl_shapez00zztools_shapez00(BgL_srcz00_31));
						}
				}
			}
		}

	}



/* set-union! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2unionz12zc0zzcfa_setz00(obj_t BgL_dstz00_32,
		obj_t BgL_srcza2za2_33)
	{
		{	/* Cfa/set.scm 139 */
			if (NULLP(BgL_srcza2za2_33))
				{	/* Cfa/set.scm 141 */
					return BgL_dstz00_32;
				}
			else
				{	/* Cfa/set.scm 141 */
					if (NULLP(CDR(((obj_t) BgL_srcza2za2_33))))
						{	/* Cfa/set.scm 144 */
							obj_t BgL_arg1667z00_2914;

							BgL_arg1667z00_2914 = CAR(((obj_t) BgL_srcza2za2_33));
							return
								BGl_setzd2unionzd22z12z12zzcfa_setz00(BgL_dstz00_32,
								BgL_arg1667z00_2914);
						}
					else
						{
							obj_t BgL_srcza2za2_2916;
							obj_t BgL_resz00_2917;

							BgL_srcza2za2_2916 = BgL_srcza2za2_33;
							BgL_resz00_2917 = BFALSE;
						BgL_zc3z04anonymousza31668ze3z87_2918:
							if (NULLP(BgL_srcza2za2_2916))
								{	/* Cfa/set.scm 148 */
									return BgL_resz00_2917;
								}
							else
								{	/* Cfa/set.scm 150 */
									obj_t BgL_arg1672z00_2920;
									obj_t BgL_arg1684z00_2921;

									BgL_arg1672z00_2920 = CDR(((obj_t) BgL_srcza2za2_2916));
									{	/* Cfa/set.scm 151 */
										obj_t BgL__ortest_1154z00_2922;

										{	/* Cfa/set.scm 151 */
											obj_t BgL_arg1685z00_2923;

											BgL_arg1685z00_2923 = CAR(((obj_t) BgL_srcza2za2_2916));
											BgL__ortest_1154z00_2922 =
												BGl_setzd2unionzd22z12z12zzcfa_setz00(BgL_dstz00_32,
												BgL_arg1685z00_2923);
										}
										if (CBOOL(BgL__ortest_1154z00_2922))
											{	/* Cfa/set.scm 151 */
												BgL_arg1684z00_2921 = BgL__ortest_1154z00_2922;
											}
										else
											{	/* Cfa/set.scm 151 */
												BgL_arg1684z00_2921 = BgL_resz00_2917;
											}
									}
									{
										obj_t BgL_resz00_3950;
										obj_t BgL_srcza2za2_3949;

										BgL_srcza2za2_3949 = BgL_arg1672z00_2920;
										BgL_resz00_3950 = BgL_arg1684z00_2921;
										BgL_resz00_2917 = BgL_resz00_3950;
										BgL_srcza2za2_2916 = BgL_srcza2za2_3949;
										goto BgL_zc3z04anonymousza31668ze3z87_2918;
									}
								}
						}
				}
		}

	}



/* &set-union! */
	obj_t BGl_z62setzd2unionz12za2zzcfa_setz00(obj_t BgL_envz00_3695,
		obj_t BgL_dstz00_3696, obj_t BgL_srcza2za2_3697)
	{
		{	/* Cfa/set.scm 139 */
			return
				BGl_setzd2unionz12zc0zzcfa_setz00(BgL_dstz00_3696, BgL_srcza2za2_3697);
		}

	}



/* set-for-each */
	BGL_EXPORTED_DEF obj_t BGl_setzd2forzd2eachz00zzcfa_setz00(obj_t
		BgL_procz00_34, obj_t BgL_setz00_35)
	{
		{	/* Cfa/set.scm 156 */
			{

				{	/* Cfa/set.scm 158 */
					obj_t BgL_metaz00_2928;

					BgL_metaz00_2928 =
						STRUCT_REF(((obj_t) BgL_setz00_35), (int) (((long) 1)));
					{	/* Cfa/set.scm 158 */
						obj_t BgL_tablez00_2929;

						BgL_tablez00_2929 =
							STRUCT_REF(((obj_t) BgL_metaz00_2928), (int) (((long) 0)));
						{	/* Cfa/set.scm 159 */

							{	/* Cfa/set.scm 160 */
								long BgL_g1155z00_2930;

								BgL_g1155z00_2930 =
									(VECTOR_LENGTH(((obj_t) BgL_tablez00_2929)) - ((long) 1));
								{
									long BgL_iz00_2932;

									BgL_iz00_2932 = BgL_g1155z00_2930;
								BgL_zc3z04anonymousza31688ze3z87_2933:
									if ((BgL_iz00_2932 == ((long) -1)))
										{	/* Cfa/set.scm 162 */
											return BUNSPEC;
										}
									else
										{	/* Cfa/set.scm 164 */
											bool_t BgL_test2081z00_3963;

											{	/* Cfa/set.scm 164 */
												obj_t BgL_arg1704z00_2940;

												BgL_arg1704z00_2940 =
													VECTOR_REF(
													((obj_t) BgL_tablez00_2929), BgL_iz00_2932);
												BgL_test2081z00_3963 =
													CBOOL(BGl_setzd2memberzf3z21zzcfa_setz00
													(BgL_setz00_35, BgL_arg1704z00_2940));
											}
											if (BgL_test2081z00_3963)
												{	/* Cfa/set.scm 164 */
													{	/* Cfa/set.scm 165 */
														obj_t BgL_arg1695z00_2937;

														BgL_arg1695z00_2937 =
															VECTOR_REF(
															((obj_t) BgL_tablez00_2929), BgL_iz00_2932);
														PROCEDURE_ENTRY(BgL_procz00_34) (BgL_procz00_34,
															BgL_arg1695z00_2937, BEOA);
													}
													{
														long BgL_iz00_3974;

														BgL_iz00_3974 = (BgL_iz00_2932 - ((long) 1));
														BgL_iz00_2932 = BgL_iz00_3974;
														goto BgL_zc3z04anonymousza31688ze3z87_2933;
													}
												}
											else
												{
													long BgL_iz00_3976;

													BgL_iz00_3976 = (BgL_iz00_2932 - ((long) 1));
													BgL_iz00_2932 = BgL_iz00_3976;
													goto BgL_zc3z04anonymousza31688ze3z87_2933;
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



/* &set-for-each */
	obj_t BGl_z62setzd2forzd2eachz62zzcfa_setz00(obj_t BgL_envz00_3698,
		obj_t BgL_procz00_3699, obj_t BgL_setz00_3700)
	{
		{	/* Cfa/set.scm 156 */
			return
				BGl_setzd2forzd2eachz00zzcfa_setz00(BgL_procz00_3699, BgL_setz00_3700);
		}

	}



/* set-length */
	BGL_EXPORTED_DEF obj_t BGl_setzd2lengthzd2zzcfa_setz00(obj_t BgL_setz00_36)
	{
		{	/* Cfa/set.scm 174 */
			{

				{	/* Cfa/set.scm 190 */
					long BgL_tmpz00_3979;

					{	/* Cfa/set.scm 176 */
						obj_t BgL_thezd2setzd2_2946;

						BgL_thezd2setzd2_2946 =
							STRUCT_REF(((obj_t) BgL_setz00_36), (int) (((long) 0)));
						{	/* Cfa/set.scm 176 */
							long BgL_thezd2lenzd2_2947;

							BgL_thezd2lenzd2_2947 =
								STRING_LENGTH(((obj_t) BgL_thezd2setzd2_2946));
							{	/* Cfa/set.scm 177 */

								{
									long BgL_offsetz00_2949;
									long BgL_numz00_2950;

									BgL_offsetz00_2949 = ((long) 0);
									BgL_numz00_2950 = ((long) 0);
								BgL_zc3z04anonymousza31709ze3z87_2951:
									if ((BgL_offsetz00_2949 == BgL_thezd2lenzd2_2947))
										{	/* Cfa/set.scm 180 */
											BgL_tmpz00_3979 = BgL_numz00_2950;
										}
									else
										{
											long BgL_charz00_2955;
											long BgL_numz00_2956;

											BgL_charz00_2955 =
												(STRING_REF(
													((obj_t) BgL_thezd2setzd2_2946), BgL_offsetz00_2949));
											BgL_numz00_2956 = BgL_numz00_2950;
										BgL_zc3z04anonymousza31711ze3z87_2957:
											if ((BgL_charz00_2955 == ((long) 0)))
												{
													long BgL_numz00_3991;
													long BgL_offsetz00_3989;

													BgL_offsetz00_3989 =
														(((long) 1) + BgL_offsetz00_2949);
													BgL_numz00_3991 = BgL_numz00_2956;
													BgL_numz00_2950 = BgL_numz00_3991;
													BgL_offsetz00_2949 = BgL_offsetz00_3989;
													goto BgL_zc3z04anonymousza31709ze3z87_2951;
												}
											else
												{
													long BgL_numz00_3995;
													long BgL_charz00_3992;

													BgL_charz00_3992 =
														(BgL_charz00_2955 >> (int) (((long) 1)));
													BgL_numz00_3995 =
														(BgL_numz00_2956 + (BgL_charz00_2955 & ((long) 1)));
													BgL_numz00_2956 = BgL_numz00_3995;
													BgL_charz00_2955 = BgL_charz00_3992;
													goto BgL_zc3z04anonymousza31711ze3z87_2957;
												}
										}
								}
							}
						}
					}
					return BINT(BgL_tmpz00_3979);
				}
			}
		}

	}



/* &set-length */
	obj_t BGl_z62setzd2lengthzb0zzcfa_setz00(obj_t BgL_envz00_3701,
		obj_t BgL_setz00_3702)
	{
		{	/* Cfa/set.scm 174 */
			return BGl_setzd2lengthzd2zzcfa_setz00(BgL_setz00_3702);
		}

	}



/* set->list */
	BGL_EXPORTED_DEF obj_t BGl_setzd2ze3listz31zzcfa_setz00(obj_t BgL_setz00_37)
	{
		{	/* Cfa/set.scm 195 */
			{	/* Cfa/set.scm 196 */
				obj_t BgL_metaz00_2967;

				BgL_metaz00_2967 =
					STRUCT_REF(((obj_t) BgL_setz00_37), (int) (((long) 1)));
				{	/* Cfa/set.scm 197 */
					obj_t BgL_tablez00_2968;

					BgL_tablez00_2968 =
						STRUCT_REF(((obj_t) BgL_metaz00_2967), (int) (((long) 0)));
					{	/* Cfa/set.scm 198 */

						{
							long BgL_iz00_2972;
							obj_t BgL_lz00_2973;

							BgL_iz00_2972 = ((long) 0);
							BgL_lz00_2973 = BNIL;
						BgL_zc3z04anonymousza31729ze3z87_2974:
							if ((BgL_iz00_2972 == VECTOR_LENGTH(((obj_t) BgL_tablez00_2968))))
								{	/* Cfa/set.scm 202 */
									return BgL_lz00_2973;
								}
							else
								{	/* Cfa/set.scm 204 */
									bool_t BgL_test2085z00_4013;

									{	/* Cfa/set.scm 204 */
										obj_t BgL_arg1741z00_2982;

										BgL_arg1741z00_2982 =
											VECTOR_REF(((obj_t) BgL_tablez00_2968), BgL_iz00_2972);
										BgL_test2085z00_4013 =
											CBOOL(BGl_setzd2memberzf3z21zzcfa_setz00(BgL_setz00_37,
												BgL_arg1741z00_2982));
									}
									if (BgL_test2085z00_4013)
										{	/* Cfa/set.scm 205 */
											long BgL_arg1733z00_2978;
											obj_t BgL_arg1738z00_2979;

											BgL_arg1733z00_2978 = (BgL_iz00_2972 + ((long) 1));
											{	/* Cfa/set.scm 205 */
												obj_t BgL_arg1739z00_2980;

												BgL_arg1739z00_2980 =
													VECTOR_REF(
													((obj_t) BgL_tablez00_2968), BgL_iz00_2972);
												BgL_arg1738z00_2979 =
													MAKE_YOUNG_PAIR(BgL_arg1739z00_2980, BgL_lz00_2973);
											}
											{
												obj_t BgL_lz00_4023;
												long BgL_iz00_4022;

												BgL_iz00_4022 = BgL_arg1733z00_2978;
												BgL_lz00_4023 = BgL_arg1738z00_2979;
												BgL_lz00_2973 = BgL_lz00_4023;
												BgL_iz00_2972 = BgL_iz00_4022;
												goto BgL_zc3z04anonymousza31729ze3z87_2974;
											}
										}
									else
										{
											long BgL_iz00_4024;

											BgL_iz00_4024 = (BgL_iz00_2972 + ((long) 1));
											BgL_iz00_2972 = BgL_iz00_4024;
											goto BgL_zc3z04anonymousza31729ze3z87_2974;
										}
								}
						}
					}
				}
			}
		}

	}



/* &set->list */
	obj_t BGl_z62setzd2ze3listz53zzcfa_setz00(obj_t BgL_envz00_3703,
		obj_t BgL_setz00_3704)
	{
		{	/* Cfa/set.scm 195 */
			return BGl_setzd2ze3listz31zzcfa_setz00(BgL_setz00_3704);
		}

	}



/* set->vector */
	BGL_EXPORTED_DEF obj_t BGl_setzd2ze3vectorz31zzcfa_setz00(obj_t BgL_setz00_38)
	{
		{	/* Cfa/set.scm 212 */
			return
				BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
				(BGl_setzd2ze3listz31zzcfa_setz00(BgL_setz00_38));
		}

	}



/* &set->vector */
	obj_t BGl_z62setzd2ze3vectorz53zzcfa_setz00(obj_t BgL_envz00_3705,
		obj_t BgL_setz00_3706)
	{
		{	/* Cfa/set.scm 212 */
			return BGl_setzd2ze3vectorz31zzcfa_setz00(BgL_setz00_3706);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_setz00()
	{
		{	/* Cfa/set.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_setz00()
	{
		{	/* Cfa/set.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_setz00()
	{
		{	/* Cfa/set.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_setz00()
	{
		{	/* Cfa/set.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2041z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2041z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2041z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string2041z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string2041z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2041z00zzcfa_setz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2041z00zzcfa_setz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string2041z00zzcfa_setz00));
		}

	}

#ifdef __cplusplus
}
#endif
