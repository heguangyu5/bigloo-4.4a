/*===========================================================================*/
/*   (Cfa/box.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/box.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_makezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		obj_t BgL_stackablez00;
	}                    *BgL_makezd2boxzd2_bglt;

	typedef struct BgL_boxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                   *BgL_boxzd2refzd2_bglt;

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                      *BgL_boxzd2setz12zc0_bglt;

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
		obj_t BgL_dupz00;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_prezd2makezd2boxz00_bgl
	{
	}                          *BgL_prezd2makezd2boxz00_bglt;

	typedef struct BgL_makezd2boxzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_makezd2boxzf2cinfoz20_bglt;

	typedef struct BgL_makezd2boxzf2ozd2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
	}                                *BgL_makezd2boxzf2ozd2cinfozf2_bglt;

	typedef struct BgL_boxzd2setz12zf2cinfoz32_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                              *BgL_boxzd2setz12zf2cinfoz32_bglt;

	typedef struct BgL_boxzd2refzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                           *BgL_boxzd2refzf2cinfoz20_bglt;

	typedef struct BgL_boxzd2setz12zf2ozd2cinfoze0_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                                  *BgL_boxzd2setz12zf2ozd2cinfoze0_bglt;

	typedef struct BgL_boxzd2refzf2ozd2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_boxzd2refzf2ozd2cinfozf2_bglt;


	static obj_t BGl_objectzd2initzd2zzcfa_boxz00();
	extern obj_t BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00;
	extern obj_t BGl_prezd2makezd2boxz00zzcfa_infoz00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	extern obj_t BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_boxz00();
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_z62zc3z04anonymousza31632ze3ze5zzcfa_boxz00(obj_t, obj_t);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_boxz00();
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_boxz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2boxzd2setz12zf2Ozd2Cinf1522z42zzcfa_boxz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2boxzd2ref1516za2zzcfa_boxz00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_boxz00();
	static obj_t BGl_z62nodezd2setupz12zd2boxzd2setz121514zb0zzcfa_boxz00(obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_boxz00();
	static obj_t BGl_z62nodezd2setupz12zd2makezd2box1510za2zzcfa_boxz00(obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2boxzd2refzf2Ozd2Cinfo1520z50zzcfa_boxz00(obj_t, obj_t);
	extern obj_t BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_nodez00_bglt);
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt,
		BgL_nodez00_bglt);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza31606ze3ze5zzcfa_boxz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_boxz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00;
	static obj_t BGl_z62nodezd2setupz12zd2prezd2make1512za2zzcfa_boxz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_boxz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_boxz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_boxz00();
	static obj_t BGl_z62loosezd2allocz12zd2makezd2bo1524za2zzcfa_boxz00(obj_t,
		obj_t);
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	extern obj_t BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00;
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2makezd2boxzf2Ozd2Cinf1518z50zzcfa_boxz00(obj_t, obj_t);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00;
	static obj_t __cnst[1];


	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1954z00zzcfa_boxz00,
		BgL_bgl_za762nodeza7d2setupza71972za7,
		BGl_z62nodezd2setupz12zd2makezd2box1510za2zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1956z00zzcfa_boxz00,
		BgL_bgl_za762nodeza7d2setupza71973za7,
		BGl_z62nodezd2setupz12zd2prezd2make1512za2zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1957z00zzcfa_boxz00,
		BgL_bgl_za762nodeza7d2setupza71974za7,
		BGl_z62nodezd2setupz12zd2boxzd2setz121514zb0zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1958z00zzcfa_boxz00,
		BgL_bgl_za762nodeza7d2setupza71975za7,
		BGl_z62nodezd2setupz12zd2boxzd2ref1516za2zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1959z00zzcfa_boxz00,
		BgL_bgl_za762cfaza712za7d2make1976za7,
		BGl_z62cfaz12zd2makezd2boxzf2Ozd2Cinf1518z50zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1961z00zzcfa_boxz00,
		BgL_bgl_za762cfaza712za7d2boxza71977z00,
		BGl_z62cfaz12zd2boxzd2refzf2Ozd2Cinfo1520z50zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1962z00zzcfa_boxz00,
		BgL_bgl_za762cfaza712za7d2boxza71978z00,
		BGl_z62cfaz12zd2boxzd2setz12zf2Ozd2Cinf1522z42zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1963z00zzcfa_boxz00,
		BgL_bgl_za762looseza7d2alloc1979z00,
		BGl_z62loosezd2allocz12zd2makezd2bo1524za2zzcfa_boxz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_nodezd2setupz12zd2envz12zzcfa_setupz00;
	   
		 
		DEFINE_STRING(BGl_string1955z00zzcfa_boxz00,
		BgL_bgl_string1955za700za7za7c1980za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string1960z00zzcfa_boxz00,
		BgL_bgl_string1960za700za7za7c1981za7, "cfa!::approx", 12);
	      DEFINE_STRING(BGl_string1964z00zzcfa_boxz00,
		BgL_bgl_string1964za700za7za7c1982za7, "loose-alloc!", 12);
	      DEFINE_STRING(BGl_string1965z00zzcfa_boxz00,
		BgL_bgl_string1965za700za7za7c1983za7, "box-ref", 7);
	      DEFINE_STRING(BGl_string1966z00zzcfa_boxz00,
		BgL_bgl_string1966za700za7za7c1984za7,
		"Illegal mixed of optimized and unoptimize `make-box'", 52);
	      DEFINE_STRING(BGl_string1967z00zzcfa_boxz00,
		BgL_bgl_string1967za700za7za7c1985za7, "cfa_box", 7);
	      DEFINE_STRING(BGl_string1968z00zzcfa_boxz00,
		BgL_bgl_string1968za700za7za7c1986za7, "all ", 4);
	extern obj_t BGl_loosezd2allocz12zd2envz12zzcfa_loosez00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_boxz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_boxz00(long
		BgL_checksumz00_3568, char *BgL_fromz00_3569)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_boxz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_boxz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_boxz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_boxz00();
					BGl_cnstzd2initzd2zzcfa_boxz00();
					BGl_importedzd2moduleszd2initz00zzcfa_boxz00();
					BGl_methodzd2initzd2zzcfa_boxz00();
					return BGl_toplevelzd2initzd2zzcfa_boxz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_boxz00()
	{
		{	/* Cfa/box.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_box");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_box");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_box");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_box");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_box");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_box");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_boxz00()
	{
		{	/* Cfa/box.scm 15 */
			{	/* Cfa/box.scm 15 */
				obj_t BgL_cportz00_3498;

				{	/* Cfa/box.scm 15 */
					obj_t BgL_stringz00_3506;

					BgL_stringz00_3506 = BGl_string1968z00zzcfa_boxz00;
					{	/* Cfa/box.scm 15 */
						obj_t BgL_startz00_3507;

						BgL_startz00_3507 = BINT(((long) 0));
						{	/* Cfa/box.scm 15 */
							obj_t BgL_endz00_3508;

							BgL_endz00_3508 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3506)));
							{	/* Cfa/box.scm 15 */

								BgL_cportz00_3498 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3506, BgL_startz00_3507, BgL_endz00_3508);
				}}}}
				{
					long BgL_iz00_3499;

					BgL_iz00_3499 = ((long) 0);
				BgL_loopz00_3500:
					if ((BgL_iz00_3499 == ((long) -1)))
						{	/* Cfa/box.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/box.scm 15 */
							{	/* Cfa/box.scm 15 */
								obj_t BgL_arg1970z00_3502;

								{	/* Cfa/box.scm 15 */

									{	/* Cfa/box.scm 15 */
										obj_t BgL_locationz00_3504;

										BgL_locationz00_3504 = BBOOL(((bool_t) 0));
										{	/* Cfa/box.scm 15 */

											BgL_arg1970z00_3502 =
												BGl_readz00zz__readerz00(BgL_cportz00_3498,
												BgL_locationz00_3504);
										}
									}
								}
								{	/* Cfa/box.scm 15 */
									int BgL_tmpz00_3594;

									BgL_tmpz00_3594 = (int) (BgL_iz00_3499);
									CNST_TABLE_SET(BgL_tmpz00_3594, BgL_arg1970z00_3502);
							}}
							{	/* Cfa/box.scm 15 */
								int BgL_auxz00_3505;

								BgL_auxz00_3505 = (int) ((BgL_iz00_3499 - ((long) 1)));
								{
									long BgL_iz00_3599;

									BgL_iz00_3599 = (long) (BgL_auxz00_3505);
									BgL_iz00_3499 = BgL_iz00_3599;
									goto BgL_loopz00_3500;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_boxz00()
	{
		{	/* Cfa/box.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_boxz00()
	{
		{	/* Cfa/box.scm 15 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_boxz00()
	{
		{	/* Cfa/box.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_boxz00()
	{
		{	/* Cfa/box.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_boxz00()
	{
		{	/* Cfa/box.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1954z00zzcfa_boxz00,
				BGl_string1955z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2makezd2boxz00zzcfa_infoz00, BGl_proc1956z00zzcfa_boxz00,
				BGl_string1955z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1957z00zzcfa_boxz00,
				BGl_string1955z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1958z00zzcfa_boxz00,
				BGl_string1955z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00, BGl_proc1959z00zzcfa_boxz00,
				BGl_string1960z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00, BGl_proc1961z00zzcfa_boxz00,
				BGl_string1960z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00,
				BGl_proc1962z00zzcfa_boxz00, BGl_string1960z00zzcfa_boxz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1963z00zzcfa_boxz00,
				BGl_string1964z00zzcfa_boxz00);
		}

	}



/* &loose-alloc!-make-bo1524 */
	obj_t BGl_z62loosezd2allocz12zd2makezd2bo1524za2zzcfa_boxz00(obj_t
		BgL_envz00_3468, obj_t BgL_allocz00_3469)
	{
		{	/* Cfa/box.scm 145 */
			return BUNSPEC;
		}

	}



/* &cfa!-box-set!/O-Cinf1522 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2boxzd2setz12zf2Ozd2Cinf1522z42zzcfa_boxz00(obj_t
		BgL_envz00_3470, obj_t BgL_nodez00_3471)
	{
		{	/* Cfa/box.scm 117 */
			{	/* Cfa/box.scm 119 */
				BgL_approxz00_bglt BgL_boxzd2approxzd2_3513;
				BgL_approxz00_bglt BgL_valzd2approxzd2_3514;

				{	/* Cfa/box.scm 119 */
					BgL_varz00_bglt BgL_arg1640z00_3515;

					BgL_arg1640z00_3515 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt)
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3471))))->BgL_varz00);
					BgL_boxzd2approxzd2_3513 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1640z00_3515));
				}
				{	/* Cfa/box.scm 120 */
					BgL_nodez00_bglt BgL_arg1641z00_3516;

					BgL_arg1641z00_3516 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt)
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3471))))->
						BgL_valuez00);
					BgL_valzd2approxzd2_3514 =
						BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1641z00_3516);
				}
				if (
					(((BgL_approxz00_bglt) COBJECT(BgL_boxzd2approxzd2_3513))->
						BgL_topzf3zf3))
					{	/* Cfa/box.scm 122 */
						((obj_t)
							BGl_loosez12z12zzcfa_loosez00(BgL_valzd2approxzd2_3514,
								CNST_TABLE_REF(((long) 0))));
					}
				else
					{	/* Cfa/box.scm 128 */
						obj_t BgL_zc3z04anonymousza31632ze3z87_3517;

						BgL_zc3z04anonymousza31632ze3z87_3517 =
							MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31632ze3ze5zzcfa_boxz00,
							(int) (((long) 1)), (int) (((long) 2)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31632ze3z87_3517,
							(int) (((long) 0)),
							((obj_t) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3471)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31632ze3z87_3517,
							(int) (((long) 1)), ((obj_t) BgL_valzd2approxzd2_3514));
						BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
							(BgL_zc3z04anonymousza31632ze3z87_3517, BgL_boxzd2approxzd2_3513);
			}}
			{
				BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_auxz00_3635;

				{
					obj_t BgL_auxz00_3636;

					{	/* Cfa/box.scm 137 */
						BgL_objectz00_bglt BgL_tmpz00_3637;

						BgL_tmpz00_3637 =
							((BgL_objectz00_bglt)
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3471));
						BgL_auxz00_3636 = BGL_OBJECT_WIDENING(BgL_tmpz00_3637);
					}
					BgL_auxz00_3635 =
						((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt) BgL_auxz00_3636);
				}
				return
					(((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt) COBJECT(BgL_auxz00_3635))->
					BgL_approxz00);
			}
		}

	}



/* &<@anonymous:1632> */
	obj_t BGl_z62zc3z04anonymousza31632ze3ze5zzcfa_boxz00(obj_t BgL_envz00_3472,
		obj_t BgL_boxz00_3475)
	{
		{	/* Cfa/box.scm 126 */
			{	/* Cfa/box.scm 128 */
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_3473;
				BgL_approxz00_bglt BgL_valzd2approxzd2_3474;

				BgL_nodez00_3473 =
					((BgL_boxzd2setz12zc0_bglt)
					PROCEDURE_REF(BgL_envz00_3472, (int) (((long) 0))));
				BgL_valzd2approxzd2_3474 =
					((BgL_approxz00_bglt)
					PROCEDURE_REF(BgL_envz00_3472, (int) (((long) 1))));
				if (BGl_isazf3zf3zz__objectz00(BgL_boxz00_3475,
						BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00))
					{	/* Cfa/box.scm 130 */
						BgL_approxz00_bglt BgL_arg1634z00_3518;

						{
							BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_auxz00_3651;

							{
								obj_t BgL_auxz00_3652;

								{	/* Cfa/box.scm 130 */
									BgL_objectz00_bglt BgL_tmpz00_3653;

									BgL_tmpz00_3653 =
										((BgL_objectz00_bglt)
										((BgL_makezd2boxzd2_bglt) BgL_boxz00_3475));
									BgL_auxz00_3652 = BGL_OBJECT_WIDENING(BgL_tmpz00_3653);
								}
								BgL_auxz00_3651 =
									((BgL_makezd2boxzf2ozd2cinfozf2_bglt) BgL_auxz00_3652);
							}
							BgL_arg1634z00_3518 =
								(((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
									COBJECT(BgL_auxz00_3651))->BgL_valuezd2approxzd2);
						}
						return
							((obj_t)
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1634z00_3518,
								BgL_valzd2approxzd2_3474));
					}
				else
					{	/* Cfa/box.scm 128 */
						if (BGl_isazf3zf3zz__objectz00(BgL_boxz00_3475,
								BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00))
							{	/* Cfa/box.scm 135 */
								obj_t BgL_arg1639z00_3519;

								BgL_arg1639z00_3519 =
									BGl_shapez00zztools_shapez00(((obj_t) BgL_nodez00_3473));
								return
									BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string1965z00zzcfa_boxz00, BGl_string1966z00zzcfa_boxz00,
									BgL_arg1639z00_3519);
							}
						else
							{	/* Cfa/box.scm 131 */
								return BFALSE;
							}
					}
			}
		}

	}



/* &cfa!-box-ref/O-Cinfo1520 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2boxzd2refzf2Ozd2Cinfo1520z50zzcfa_boxz00(obj_t
		BgL_envz00_3476, obj_t BgL_nodez00_3477)
	{
		{	/* Cfa/box.scm 97 */
			{	/* Cfa/box.scm 99 */
				BgL_approxz00_bglt BgL_boxzd2approxzd2_3521;

				{	/* Cfa/box.scm 99 */
					BgL_varz00_bglt BgL_arg1626z00_3522;

					BgL_arg1626z00_3522 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt)
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_3477))))->BgL_varz00);
					BgL_boxzd2approxzd2_3521 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1626z00_3522));
				}
				{	/* Cfa/box.scm 103 */
					obj_t BgL_zc3z04anonymousza31606ze3z87_3523;

					BgL_zc3z04anonymousza31606ze3z87_3523 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31606ze3ze5zzcfa_boxz00,
						(int) (((long) 1)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31606ze3z87_3523,
						(int) (((long) 0)),
						((obj_t) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_3477)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31606ze3z87_3523,
						(int) (((long) 1)),
						((obj_t) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_3477)));
					BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
						(BgL_zc3z04anonymousza31606ze3z87_3523, BgL_boxzd2approxzd2_3521);
			}}
			{
				BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_auxz00_3683;

				{
					obj_t BgL_auxz00_3684;

					{	/* Cfa/box.scm 112 */
						BgL_objectz00_bglt BgL_tmpz00_3685;

						BgL_tmpz00_3685 =
							((BgL_objectz00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_3477));
						BgL_auxz00_3684 = BGL_OBJECT_WIDENING(BgL_tmpz00_3685);
					}
					BgL_auxz00_3683 =
						((BgL_boxzd2refzf2ozd2cinfozf2_bglt) BgL_auxz00_3684);
				}
				return
					(((BgL_boxzd2refzf2ozd2cinfozf2_bglt) COBJECT(BgL_auxz00_3683))->
					BgL_approxz00);
			}
		}

	}



/* &<@anonymous:1606> */
	obj_t BGl_z62zc3z04anonymousza31606ze3ze5zzcfa_boxz00(obj_t BgL_envz00_3478,
		obj_t BgL_boxz00_3481)
	{
		{	/* Cfa/box.scm 101 */
			{	/* Cfa/box.scm 103 */
				BgL_boxzd2refzd2_bglt BgL_nodez00_3479;
				BgL_boxzd2refzd2_bglt BgL_i1187z00_3480;

				BgL_nodez00_3479 =
					((BgL_boxzd2refzd2_bglt)
					PROCEDURE_REF(BgL_envz00_3478, (int) (((long) 0))));
				BgL_i1187z00_3480 =
					((BgL_boxzd2refzd2_bglt)
					PROCEDURE_REF(BgL_envz00_3478, (int) (((long) 1))));
				if (BGl_isazf3zf3zz__objectz00(BgL_boxz00_3481,
						BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00))
					{	/* Cfa/box.scm 105 */
						BgL_approxz00_bglt BgL_arg1611z00_3524;
						BgL_approxz00_bglt BgL_arg1612z00_3525;

						{
							BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_auxz00_3699;

							{
								obj_t BgL_auxz00_3700;

								{	/* Cfa/box.scm 105 */
									BgL_objectz00_bglt BgL_tmpz00_3701;

									BgL_tmpz00_3701 = ((BgL_objectz00_bglt) BgL_i1187z00_3480);
									BgL_auxz00_3700 = BGL_OBJECT_WIDENING(BgL_tmpz00_3701);
								}
								BgL_auxz00_3699 =
									((BgL_boxzd2refzf2ozd2cinfozf2_bglt) BgL_auxz00_3700);
							}
							BgL_arg1611z00_3524 =
								(((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
									COBJECT(BgL_auxz00_3699))->BgL_approxz00);
						}
						{
							BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_auxz00_3706;

							{
								obj_t BgL_auxz00_3707;

								{	/* Cfa/box.scm 105 */
									BgL_objectz00_bglt BgL_tmpz00_3708;

									BgL_tmpz00_3708 =
										((BgL_objectz00_bglt)
										((BgL_makezd2boxzd2_bglt) BgL_boxz00_3481));
									BgL_auxz00_3707 = BGL_OBJECT_WIDENING(BgL_tmpz00_3708);
								}
								BgL_auxz00_3706 =
									((BgL_makezd2boxzf2ozd2cinfozf2_bglt) BgL_auxz00_3707);
							}
							BgL_arg1612z00_3525 =
								(((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
									COBJECT(BgL_auxz00_3706))->BgL_valuezd2approxzd2);
						}
						return
							((obj_t)
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1611z00_3524,
								BgL_arg1612z00_3525));
					}
				else
					{	/* Cfa/box.scm 103 */
						if (BGl_isazf3zf3zz__objectz00(BgL_boxz00_3481,
								BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00))
							{	/* Cfa/box.scm 110 */
								obj_t BgL_arg1624z00_3526;

								BgL_arg1624z00_3526 =
									BGl_shapez00zztools_shapez00(((obj_t) BgL_nodez00_3479));
								return
									BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string1965z00zzcfa_boxz00, BGl_string1966z00zzcfa_boxz00,
									BgL_arg1624z00_3526);
							}
						else
							{	/* Cfa/box.scm 106 */
								return BFALSE;
							}
					}
			}
		}

	}



/* &cfa!-make-box/O-Cinf1518 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2makezd2boxzf2Ozd2Cinf1518z50zzcfa_boxz00(obj_t
		BgL_envz00_3482, obj_t BgL_nodez00_3483)
	{
		{	/* Cfa/box.scm 87 */
			{	/* Cfa/box.scm 90 */
				BgL_approxz00_bglt BgL_initzd2valuezd2approxz00_3528;

				{	/* Cfa/box.scm 90 */
					BgL_nodez00_bglt BgL_arg1604z00_3529;

					BgL_arg1604z00_3529 =
						(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt)
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_3483))))->BgL_valuez00);
					BgL_initzd2valuezd2approxz00_3528 =
						BGl_cfaz12z12zzcfa_cfaz00(BgL_arg1604z00_3529);
				}
				{	/* Cfa/box.scm 91 */
					BgL_approxz00_bglt BgL_arg1599z00_3530;

					{
						BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_auxz00_3725;

						{
							obj_t BgL_auxz00_3726;

							{	/* Cfa/box.scm 91 */
								BgL_objectz00_bglt BgL_tmpz00_3727;

								BgL_tmpz00_3727 =
									((BgL_objectz00_bglt)
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_3483));
								BgL_auxz00_3726 = BGL_OBJECT_WIDENING(BgL_tmpz00_3727);
							}
							BgL_auxz00_3725 =
								((BgL_makezd2boxzf2ozd2cinfozf2_bglt) BgL_auxz00_3726);
						}
						BgL_arg1599z00_3530 =
							(((BgL_makezd2boxzf2ozd2cinfozf2_bglt) COBJECT(BgL_auxz00_3725))->
							BgL_valuezd2approxzd2);
					}
					BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1599z00_3530,
						BgL_initzd2valuezd2approxz00_3528);
				}
				{
					BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_auxz00_3734;

					{
						obj_t BgL_auxz00_3735;

						{	/* Cfa/box.scm 92 */
							BgL_objectz00_bglt BgL_tmpz00_3736;

							BgL_tmpz00_3736 =
								((BgL_objectz00_bglt)
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_3483));
							BgL_auxz00_3735 = BGL_OBJECT_WIDENING(BgL_tmpz00_3736);
						}
						BgL_auxz00_3734 =
							((BgL_makezd2boxzf2ozd2cinfozf2_bglt) BgL_auxz00_3735);
					}
					return
						(((BgL_makezd2boxzf2ozd2cinfozf2_bglt) COBJECT(BgL_auxz00_3734))->
						BgL_approxz00);
				}
			}
		}

	}



/* &node-setup!-box-ref1516 */
	obj_t BGl_z62nodezd2setupz12zd2boxzd2ref1516za2zzcfa_boxz00(obj_t
		BgL_envz00_3484, obj_t BgL_nodez00_3485)
	{
		{	/* Cfa/box.scm 73 */
			{	/* Cfa/box.scm 75 */
				BgL_varz00_bglt BgL_arg1589z00_3532;

				BgL_arg1589z00_3532 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485)))->BgL_varz00);
				BGl_nodezd2setupz12zc0zzcfa_setupz00(
					((BgL_nodez00_bglt) BgL_arg1589z00_3532));
			}
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 1)))
				{	/* Cfa/box.scm 76 */
					{	/* Cfa/box.scm 77 */
						BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_wide1180z00_3533;

						BgL_wide1180z00_3533 =
							((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
							BOBJECT(GC_MALLOC(sizeof(struct
										BgL_boxzd2refzf2ozd2cinfozf2_bgl))));
						{	/* Cfa/box.scm 77 */
							obj_t BgL_auxz00_3754;
							BgL_objectz00_bglt BgL_tmpz00_3750;

							BgL_auxz00_3754 = ((obj_t) BgL_wide1180z00_3533);
							BgL_tmpz00_3750 =
								((BgL_objectz00_bglt)
								((BgL_boxzd2refzd2_bglt)
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3750, BgL_auxz00_3754);
						}
						((BgL_objectz00_bglt)
							((BgL_boxzd2refzd2_bglt)
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485)));
						{	/* Cfa/box.scm 77 */
							long BgL_arg1592z00_3534;

							{	/* Cfa/box.scm 77 */
								long BgL_res1943z00_3535;

								BgL_res1943z00_3535 =
									BGL_CLASS_INDEX(BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00);
								BgL_arg1592z00_3534 = BgL_res1943z00_3535;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_boxzd2refzd2_bglt)
										((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485))),
								BgL_arg1592z00_3534);
						}
						((BgL_boxzd2refzd2_bglt)
							((BgL_boxzd2refzd2_bglt)
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485)));
					}
					{
						BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_auxz00_3768;

						{
							obj_t BgL_auxz00_3769;

							{	/* Cfa/box.scm 78 */
								BgL_objectz00_bglt BgL_tmpz00_3770;

								BgL_tmpz00_3770 =
									((BgL_objectz00_bglt)
									((BgL_boxzd2refzd2_bglt)
										((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485)));
								BgL_auxz00_3769 = BGL_OBJECT_WIDENING(BgL_tmpz00_3770);
							}
							BgL_auxz00_3768 =
								((BgL_boxzd2refzf2ozd2cinfozf2_bglt) BgL_auxz00_3769);
						}
						((((BgL_boxzd2refzf2ozd2cinfozf2_bglt) COBJECT(BgL_auxz00_3768))->
								BgL_approxz00) =
							((BgL_approxz00_bglt)
								BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
										BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
					}
					return
						((obj_t)
						((BgL_boxzd2refzd2_bglt)
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485)));
				}
			else
				{	/* Cfa/box.scm 76 */
					{	/* Cfa/box.scm 80 */
						BgL_boxzd2refzf2cinfoz20_bglt BgL_wide1184z00_3536;

						BgL_wide1184z00_3536 =
							((BgL_boxzd2refzf2cinfoz20_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_boxzd2refzf2cinfoz20_bgl))));
						{	/* Cfa/box.scm 80 */
							obj_t BgL_auxz00_3787;
							BgL_objectz00_bglt BgL_tmpz00_3783;

							BgL_auxz00_3787 = ((obj_t) BgL_wide1184z00_3536);
							BgL_tmpz00_3783 =
								((BgL_objectz00_bglt)
								((BgL_boxzd2refzd2_bglt)
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3783, BgL_auxz00_3787);
						}
						((BgL_objectz00_bglt)
							((BgL_boxzd2refzd2_bglt)
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485)));
						{	/* Cfa/box.scm 80 */
							long BgL_arg1593z00_3537;

							{	/* Cfa/box.scm 80 */
								long BgL_res1944z00_3538;

								BgL_res1944z00_3538 =
									BGL_CLASS_INDEX(BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00);
								BgL_arg1593z00_3537 = BgL_res1944z00_3538;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_boxzd2refzd2_bglt)
										((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485))),
								BgL_arg1593z00_3537);
						}
						((BgL_boxzd2refzd2_bglt)
							((BgL_boxzd2refzd2_bglt)
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485)));
					}
					{
						BgL_boxzd2refzf2cinfoz20_bglt BgL_auxz00_3801;

						{
							obj_t BgL_auxz00_3802;

							{	/* Cfa/box.scm 81 */
								BgL_objectz00_bglt BgL_tmpz00_3803;

								BgL_tmpz00_3803 =
									((BgL_objectz00_bglt)
									((BgL_boxzd2refzd2_bglt)
										((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485)));
								BgL_auxz00_3802 = BGL_OBJECT_WIDENING(BgL_tmpz00_3803);
							}
							BgL_auxz00_3801 =
								((BgL_boxzd2refzf2cinfoz20_bglt) BgL_auxz00_3802);
						}
						((((BgL_boxzd2refzf2cinfoz20_bglt) COBJECT(BgL_auxz00_3801))->
								BgL_approxz00) =
							((BgL_approxz00_bglt)
								BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
										BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
					}
					((BgL_boxzd2refzd2_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485));
					{	/* Cfa/box.scm 82 */
						BgL_approxz00_bglt BgL_arg1597z00_3539;

						{
							BgL_boxzd2refzf2cinfoz20_bglt BgL_auxz00_3814;

							{
								obj_t BgL_auxz00_3815;

								{	/* Cfa/box.scm 82 */
									BgL_objectz00_bglt BgL_tmpz00_3816;

									BgL_tmpz00_3816 =
										((BgL_objectz00_bglt)
										((BgL_boxzd2refzd2_bglt)
											((BgL_boxzd2refzd2_bglt) BgL_nodez00_3485)));
									BgL_auxz00_3815 = BGL_OBJECT_WIDENING(BgL_tmpz00_3816);
								}
								BgL_auxz00_3814 =
									((BgL_boxzd2refzf2cinfoz20_bglt) BgL_auxz00_3815);
							}
							BgL_arg1597z00_3539 =
								(((BgL_boxzd2refzf2cinfoz20_bglt) COBJECT(BgL_auxz00_3814))->
								BgL_approxz00);
						}
						return
							BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1597z00_3539);
					}
				}
		}

	}



/* &node-setup!-box-set!1514 */
	obj_t BGl_z62nodezd2setupz12zd2boxzd2setz121514zb0zzcfa_boxz00(obj_t
		BgL_envz00_3486, obj_t BgL_nodez00_3487)
	{
		{	/* Cfa/box.scm 60 */
			{	/* Cfa/box.scm 62 */
				BgL_varz00_bglt BgL_arg1578z00_3541;

				BgL_arg1578z00_3541 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)))->BgL_varz00);
				BGl_nodezd2setupz12zc0zzcfa_setupz00(
					((BgL_nodez00_bglt) BgL_arg1578z00_3541));
			}
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)))->BgL_valuez00));
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 1)))
				{	/* Cfa/box.scm 64 */
					{	/* Cfa/box.scm 65 */
						BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_wide1171z00_3542;

						BgL_wide1171z00_3542 =
							((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
							BOBJECT(GC_MALLOC(sizeof(struct
										BgL_boxzd2setz12zf2ozd2cinfoze0_bgl))));
						{	/* Cfa/box.scm 65 */
							obj_t BgL_auxz00_3839;
							BgL_objectz00_bglt BgL_tmpz00_3835;

							BgL_auxz00_3839 = ((obj_t) BgL_wide1171z00_3542);
							BgL_tmpz00_3835 =
								((BgL_objectz00_bglt)
								((BgL_boxzd2setz12zc0_bglt)
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3835, BgL_auxz00_3839);
						}
						((BgL_objectz00_bglt)
							((BgL_boxzd2setz12zc0_bglt)
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)));
						{	/* Cfa/box.scm 65 */
							long BgL_arg1584z00_3543;

							{	/* Cfa/box.scm 65 */
								long BgL_res1940z00_3544;

								BgL_res1940z00_3544 =
									BGL_CLASS_INDEX(BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00);
								BgL_arg1584z00_3543 = BgL_res1940z00_3544;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_boxzd2setz12zc0_bglt)
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487))),
								BgL_arg1584z00_3543);
						}
						((BgL_boxzd2setz12zc0_bglt)
							((BgL_boxzd2setz12zc0_bglt)
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)));
					}
					{
						BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_auxz00_3853;

						{
							obj_t BgL_auxz00_3854;

							{	/* Cfa/box.scm 66 */
								BgL_objectz00_bglt BgL_tmpz00_3855;

								BgL_tmpz00_3855 =
									((BgL_objectz00_bglt)
									((BgL_boxzd2setz12zc0_bglt)
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)));
								BgL_auxz00_3854 = BGL_OBJECT_WIDENING(BgL_tmpz00_3855);
							}
							BgL_auxz00_3853 =
								((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt) BgL_auxz00_3854);
						}
						((((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt)
									COBJECT(BgL_auxz00_3853))->BgL_approxz00) =
							((BgL_approxz00_bglt)
								BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
										BGl_za2unspecza2z00zztype_cachez00))), BUNSPEC);
					}
					return
						((obj_t)
						((BgL_boxzd2setz12zc0_bglt)
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)));
				}
			else
				{	/* Cfa/box.scm 64 */
					{	/* Cfa/box.scm 67 */
						BgL_boxzd2setz12zf2cinfoz32_bglt BgL_wide1175z00_3545;

						BgL_wide1175z00_3545 =
							((BgL_boxzd2setz12zf2cinfoz32_bglt)
							BOBJECT(GC_MALLOC(sizeof(struct
										BgL_boxzd2setz12zf2cinfoz32_bgl))));
						{	/* Cfa/box.scm 67 */
							obj_t BgL_auxz00_3872;
							BgL_objectz00_bglt BgL_tmpz00_3868;

							BgL_auxz00_3872 = ((obj_t) BgL_wide1175z00_3545);
							BgL_tmpz00_3868 =
								((BgL_objectz00_bglt)
								((BgL_boxzd2setz12zc0_bglt)
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3868, BgL_auxz00_3872);
						}
						((BgL_objectz00_bglt)
							((BgL_boxzd2setz12zc0_bglt)
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)));
						{	/* Cfa/box.scm 67 */
							long BgL_arg1588z00_3546;

							{	/* Cfa/box.scm 67 */
								long BgL_res1941z00_3547;

								BgL_res1941z00_3547 =
									BGL_CLASS_INDEX(BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00);
								BgL_arg1588z00_3546 = BgL_res1941z00_3547;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_boxzd2setz12zc0_bglt)
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487))),
								BgL_arg1588z00_3546);
						}
						((BgL_boxzd2setz12zc0_bglt)
							((BgL_boxzd2setz12zc0_bglt)
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)));
					}
					{
						BgL_boxzd2setz12zf2cinfoz32_bglt BgL_auxz00_3886;

						{
							obj_t BgL_auxz00_3887;

							{	/* Cfa/box.scm 68 */
								BgL_objectz00_bglt BgL_tmpz00_3888;

								BgL_tmpz00_3888 =
									((BgL_objectz00_bglt)
									((BgL_boxzd2setz12zc0_bglt)
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)));
								BgL_auxz00_3887 = BGL_OBJECT_WIDENING(BgL_tmpz00_3888);
							}
							BgL_auxz00_3886 =
								((BgL_boxzd2setz12zf2cinfoz32_bglt) BgL_auxz00_3887);
						}
						((((BgL_boxzd2setz12zf2cinfoz32_bglt) COBJECT(BgL_auxz00_3886))->
								BgL_approxz00) =
							((BgL_approxz00_bglt)
								BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
										BGl_za2unspecza2z00zztype_cachez00))), BUNSPEC);
					}
					return
						((obj_t)
						((BgL_boxzd2setz12zc0_bglt)
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_3487)));
				}
		}

	}



/* &node-setup!-pre-make1512 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2make1512za2zzcfa_boxz00(obj_t
		BgL_envz00_3488, obj_t BgL_nodez00_3489)
	{
		{	/* Cfa/box.scm 46 */
			{	/* Cfa/box.scm 48 */
				BgL_nodez00_bglt BgL_arg1558z00_3549;

				BgL_arg1558z00_3549 =
					(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt)
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_3489))))->BgL_valuez00);
				BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_arg1558z00_3549);
			}
			{	/* Cfa/box.scm 49 */
				BgL_makezd2boxzd2_bglt BgL_nodez00_3550;

				{	/* Cfa/box.scm 49 */
					long BgL_arg1565z00_3551;

					{	/* Cfa/box.scm 49 */
						obj_t BgL_arg1573z00_3552;

						{	/* Cfa/box.scm 49 */
							obj_t BgL_arg1575z00_3553;

							{	/* Cfa/box.scm 49 */
								long BgL_arg1816z00_3554;

								{	/* Cfa/box.scm 49 */
									long BgL_arg1817z00_3555;

									{	/* Cfa/box.scm 49 */
										long BgL_res1935z00_3556;

										BgL_res1935z00_3556 =
											BGL_OBJECT_CLASS_NUM(
											((BgL_objectz00_bglt)
												((BgL_makezd2boxzd2_bglt) BgL_nodez00_3489)));
										BgL_arg1817z00_3555 = BgL_res1935z00_3556;
									}
									BgL_arg1816z00_3554 = (BgL_arg1817z00_3555 - OBJECT_TYPE);
								}
								BgL_arg1575z00_3553 =
									VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
									BgL_arg1816z00_3554);
							}
							BgL_arg1573z00_3552 =
								BGl_classzd2superzd2zz__objectz00(BgL_arg1575z00_3553);
						}
						{	/* Cfa/box.scm 49 */
							long BgL_res1937z00_3557;

							{	/* Cfa/box.scm 49 */
								obj_t BgL_tmpz00_3910;

								BgL_tmpz00_3910 = ((obj_t) BgL_arg1573z00_3552);
								BgL_res1937z00_3557 = BGL_CLASS_INDEX(BgL_tmpz00_3910);
							}
							BgL_arg1565z00_3551 = BgL_res1937z00_3557;
					}}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_3489)),
						BgL_arg1565z00_3551);
				}
				{	/* Cfa/box.scm 49 */
					BgL_objectz00_bglt BgL_tmpz00_3916;

					BgL_tmpz00_3916 =
						((BgL_objectz00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_3489));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3916, BFALSE);
				}
				((BgL_objectz00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_3489));
				BgL_nodez00_3550 = ((BgL_makezd2boxzd2_bglt) BgL_nodez00_3489);
				{	/* Cfa/box.scm 49 */

					{	/* Cfa/box.scm 50 */
						BgL_makezd2boxzd2_bglt BgL_nodez00_3558;

						{	/* Cfa/box.scm 50 */
							BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_wide1166z00_3559;

							BgL_wide1166z00_3559 =
								((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
								BOBJECT(GC_MALLOC(sizeof(struct
											BgL_makezd2boxzf2ozd2cinfozf2_bgl))));
							{	/* Cfa/box.scm 50 */
								obj_t BgL_auxz00_3928;
								BgL_objectz00_bglt BgL_tmpz00_3924;

								BgL_auxz00_3928 = ((obj_t) BgL_wide1166z00_3559);
								BgL_tmpz00_3924 =
									((BgL_objectz00_bglt)
									((BgL_makezd2boxzd2_bglt)
										((BgL_makezd2boxzd2_bglt) BgL_nodez00_3550)));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3924, BgL_auxz00_3928);
							}
							((BgL_objectz00_bglt)
								((BgL_makezd2boxzd2_bglt)
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_3550)));
							{	/* Cfa/box.scm 50 */
								long BgL_arg1564z00_3560;

								{	/* Cfa/box.scm 50 */
									long BgL_res1938z00_3561;

									BgL_res1938z00_3561 =
										BGL_CLASS_INDEX(BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00);
									BgL_arg1564z00_3560 = BgL_res1938z00_3561;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_makezd2boxzd2_bglt)
											((BgL_makezd2boxzd2_bglt) BgL_nodez00_3550))),
									BgL_arg1564z00_3560);
							}
							((BgL_makezd2boxzd2_bglt)
								((BgL_makezd2boxzd2_bglt)
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_3550)));
						}
						{
							BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_auxz00_3942;

							{
								obj_t BgL_auxz00_3943;

								{	/* Cfa/box.scm 51 */
									BgL_objectz00_bglt BgL_tmpz00_3944;

									BgL_tmpz00_3944 =
										((BgL_objectz00_bglt)
										((BgL_makezd2boxzd2_bglt)
											((BgL_makezd2boxzd2_bglt) BgL_nodez00_3550)));
									BgL_auxz00_3943 = BGL_OBJECT_WIDENING(BgL_tmpz00_3944);
								}
								BgL_auxz00_3942 =
									((BgL_makezd2boxzf2ozd2cinfozf2_bglt) BgL_auxz00_3943);
							}
							((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
										COBJECT(BgL_auxz00_3942))->BgL_approxz00) =
								((BgL_approxz00_bglt)
									BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
											BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
						}
						{
							BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_auxz00_3953;

							{
								obj_t BgL_auxz00_3954;

								{	/* Cfa/box.scm 52 */
									BgL_objectz00_bglt BgL_tmpz00_3955;

									BgL_tmpz00_3955 =
										((BgL_objectz00_bglt)
										((BgL_makezd2boxzd2_bglt)
											((BgL_makezd2boxzd2_bglt) BgL_nodez00_3550)));
									BgL_auxz00_3954 = BGL_OBJECT_WIDENING(BgL_tmpz00_3955);
								}
								BgL_auxz00_3953 =
									((BgL_makezd2boxzf2ozd2cinfozf2_bglt) BgL_auxz00_3954);
							}
							((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
										COBJECT(BgL_auxz00_3953))->BgL_valuezd2approxzd2) =
								((BgL_approxz00_bglt)
									BGl_makezd2emptyzd2approxz00zzcfa_approxz00()), BUNSPEC);
						}
						BgL_nodez00_3558 =
							((BgL_makezd2boxzd2_bglt)
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_3550));
						{	/* Cfa/box.scm 55 */
							BgL_approxz00_bglt BgL_arg1561z00_3562;

							BgL_arg1561z00_3562 =
								BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(
								((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00),
								((BgL_nodez00_bglt) BgL_nodez00_3558));
							{
								BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_auxz00_3968;

								{
									obj_t BgL_auxz00_3969;

									{	/* Cfa/box.scm 53 */
										BgL_objectz00_bglt BgL_tmpz00_3970;

										BgL_tmpz00_3970 = ((BgL_objectz00_bglt) BgL_nodez00_3558);
										BgL_auxz00_3969 = BGL_OBJECT_WIDENING(BgL_tmpz00_3970);
									}
									BgL_auxz00_3968 =
										((BgL_makezd2boxzf2ozd2cinfozf2_bglt) BgL_auxz00_3969);
								}
								return
									((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
											COBJECT(BgL_auxz00_3968))->BgL_approxz00) =
									((BgL_approxz00_bglt) BgL_arg1561z00_3562), BUNSPEC);
							}
						}
					}
				}
			}
		}

	}



/* &node-setup!-make-box1510 */
	obj_t BGl_z62nodezd2setupz12zd2makezd2box1510za2zzcfa_boxz00(obj_t
		BgL_envz00_3490, obj_t BgL_nodez00_3491)
	{
		{	/* Cfa/box.scm 36 */
			BGl_nodezd2setupz12zc0zzcfa_setupz00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_3491)))->BgL_valuez00));
			{	/* Cfa/box.scm 39 */
				BgL_makezd2boxzf2cinfoz20_bglt BgL_wide1160z00_3564;

				BgL_wide1160z00_3564 =
					((BgL_makezd2boxzf2cinfoz20_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_makezd2boxzf2cinfoz20_bgl))));
				{	/* Cfa/box.scm 39 */
					obj_t BgL_auxz00_3983;
					BgL_objectz00_bglt BgL_tmpz00_3979;

					BgL_auxz00_3983 = ((obj_t) BgL_wide1160z00_3564);
					BgL_tmpz00_3979 =
						((BgL_objectz00_bglt)
						((BgL_makezd2boxzd2_bglt)
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_3491)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3979, BgL_auxz00_3983);
				}
				((BgL_objectz00_bglt)
					((BgL_makezd2boxzd2_bglt)
						((BgL_makezd2boxzd2_bglt) BgL_nodez00_3491)));
				{	/* Cfa/box.scm 39 */
					long BgL_arg1540z00_3565;

					{	/* Cfa/box.scm 39 */
						long BgL_res1934z00_3566;

						BgL_res1934z00_3566 =
							BGL_CLASS_INDEX(BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00);
						BgL_arg1540z00_3565 = BgL_res1934z00_3566;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_makezd2boxzd2_bglt)
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_3491))),
						BgL_arg1540z00_3565);
				}
				((BgL_makezd2boxzd2_bglt)
					((BgL_makezd2boxzd2_bglt)
						((BgL_makezd2boxzd2_bglt) BgL_nodez00_3491)));
			}
			{
				BgL_makezd2boxzf2cinfoz20_bglt BgL_auxz00_3997;

				{
					obj_t BgL_auxz00_3998;

					{	/* Cfa/box.scm 40 */
						BgL_objectz00_bglt BgL_tmpz00_3999;

						BgL_tmpz00_3999 =
							((BgL_objectz00_bglt)
							((BgL_makezd2boxzd2_bglt)
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_3491)));
						BgL_auxz00_3998 = BGL_OBJECT_WIDENING(BgL_tmpz00_3999);
					}
					BgL_auxz00_3997 = ((BgL_makezd2boxzf2cinfoz20_bglt) BgL_auxz00_3998);
				}
				((((BgL_makezd2boxzf2cinfoz20_bglt) COBJECT(BgL_auxz00_3997))->
						BgL_approxz00) =
					((BgL_approxz00_bglt)
						BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
								BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
			}
			((BgL_makezd2boxzd2_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_3491));
			{	/* Cfa/box.scm 41 */
				BgL_approxz00_bglt BgL_arg1552z00_3567;

				{
					BgL_makezd2boxzf2cinfoz20_bglt BgL_auxz00_4010;

					{
						obj_t BgL_auxz00_4011;

						{	/* Cfa/box.scm 41 */
							BgL_objectz00_bglt BgL_tmpz00_4012;

							BgL_tmpz00_4012 =
								((BgL_objectz00_bglt)
								((BgL_makezd2boxzd2_bglt)
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_3491)));
							BgL_auxz00_4011 = BGL_OBJECT_WIDENING(BgL_tmpz00_4012);
						}
						BgL_auxz00_4010 =
							((BgL_makezd2boxzf2cinfoz20_bglt) BgL_auxz00_4011);
					}
					BgL_arg1552z00_3567 =
						(((BgL_makezd2boxzf2cinfoz20_bglt) COBJECT(BgL_auxz00_4010))->
						BgL_approxz00);
				}
				return BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1552z00_3567);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_boxz00()
	{
		{	/* Cfa/box.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 471177483),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 168272051),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 400853773),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_closurez00(((long) 189402632),
				BSTRING_TO_STRING(BGl_string1967z00zzcfa_boxz00));
		}

	}

#ifdef __cplusplus
}
#endif
