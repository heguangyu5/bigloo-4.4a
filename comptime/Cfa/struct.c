/*===========================================================================*/
/*   (Cfa/struct.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/struct.scm) */
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

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_stackablez00;
	}             *BgL_appz00_bglt;

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

	typedef struct BgL_prezd2makezd2structzd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                   *BgL_prezd2makezd2structzd2appzd2_bglt;

	typedef struct BgL_prezd2structzd2refzd2appzd2_bgl
	{
	}                                  *BgL_prezd2structzd2refzd2appzd2_bglt;

	typedef struct BgL_prezd2structzd2setz12zd2appzc0_bgl
	{
	}                                    
		*BgL_prezd2structzd2setz12zd2appzc0_bglt;

	typedef struct BgL_makezd2structzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
	}                             *BgL_makezd2structzd2appz00_bglt;

	typedef struct BgL_structzd2refzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_structzd2refzd2appz00_bglt;

	typedef struct BgL_structzd2setz12zd2appz12_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_structzd2setz12zd2appz12_bglt;


	extern obj_t BGl_makezd2structzd2appz00zzcfa_info2z00;
	extern obj_t BGl_za2structza2z00zztype_cachez00;
	extern obj_t BGl_structzd2refzd2appz00zzcfa_info2z00;
	static obj_t BGl_objectzd2initzd2zzcfa_structz00();
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_structz00();
	extern obj_t BGl_structzd2setz12zd2appz12zzcfa_info2z00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_z62zc3z04anonymousza31613ze3ze5zzcfa_structz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2prezd2stru1503za2zzcfa_structz00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2setupz12zd2prezd2stru1505za2zzcfa_structz00(obj_t,
		obj_t);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	extern obj_t BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00;
	static obj_t BGl_gczd2rootszd2initz00zzcfa_structz00();
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	static obj_t BGl_z62zc3z04anonymousza31653ze3ze5zzcfa_structz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00;
	static obj_t BGl_z62loosezd2allocz12zd2makezd2st1513za2zzcfa_structz00(obj_t,
		obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_structz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_toplevelzd2initzd2zzcfa_structz00();
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2makezd2structzd2app1507za2zzcfa_structz00(obj_t, obj_t);
	extern obj_t BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00;
	static obj_t BGl_genericzd2initzd2zzcfa_structz00();
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2structzd2refzd2app1509za2zzcfa_structz00(obj_t, obj_t);
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62cfaz12zd2structzd2setz12zd2app1511zb0zzcfa_structz00(obj_t, obj_t);
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt,
		BgL_nodez00_bglt);
	extern obj_t BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_structz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_z62nodezd2setupz12zd2prezd2make1501za2zzcfa_structz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_structz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_structz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_structz00();
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_typez00_bglt);
	static obj_t __cnst[1];


	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1966z00zzcfa_structz00,
		BgL_bgl_za762nodeza7d2setupza71981za7,
		BGl_z62nodezd2setupz12zd2prezd2make1501za2zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1968z00zzcfa_structz00,
		BgL_bgl_za762nodeza7d2setupza71982za7,
		BGl_z62nodezd2setupz12zd2prezd2stru1503za2zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1969z00zzcfa_structz00,
		BgL_bgl_za762nodeza7d2setupza71983za7,
		BGl_z62nodezd2setupz12zd2prezd2stru1505za2zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1970z00zzcfa_structz00,
		BgL_bgl_za762cfaza712za7d2make1984za7,
		BGl_z62cfaz12zd2makezd2structzd2app1507za2zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1972z00zzcfa_structz00,
		BgL_bgl_za762cfaza712za7d2stru1985za7,
		BGl_z62cfaz12zd2structzd2refzd2app1509za2zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1973z00zzcfa_structz00,
		BgL_bgl_za762cfaza712za7d2stru1986za7,
		BGl_z62cfaz12zd2structzd2setz12zd2app1511zb0zzcfa_structz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1974z00zzcfa_structz00,
		BgL_bgl_za762looseza7d2alloc1987z00,
		BGl_z62loosezd2allocz12zd2makezd2st1513za2zzcfa_structz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_nodezd2setupz12zd2envz12zzcfa_setupz00;
	   
		 
		DEFINE_STRING(BGl_string1967z00zzcfa_structz00,
		BgL_bgl_string1967za700za7za7c1988za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string1971z00zzcfa_structz00,
		BgL_bgl_string1971za700za7za7c1989za7, "cfa!::approx", 12);
	      DEFINE_STRING(BGl_string1975z00zzcfa_structz00,
		BgL_bgl_string1975za700za7za7c1990za7, "loose-alloc!", 12);
	      DEFINE_STRING(BGl_string1976z00zzcfa_structz00,
		BgL_bgl_string1976za700za7za7c1991za7, "cfa_struct", 10);
	      DEFINE_STRING(BGl_string1977z00zzcfa_structz00,
		BgL_bgl_string1977za700za7za7c1992za7, "all ", 4);
	extern obj_t BGl_loosezd2allocz12zd2envz12zzcfa_loosez00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_structz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_structz00(long
		BgL_checksumz00_3626, char *BgL_fromz00_3627)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_structz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_structz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_structz00();
					BGl_libraryzd2moduleszd2initz00zzcfa_structz00();
					BGl_cnstzd2initzd2zzcfa_structz00();
					BGl_importedzd2moduleszd2initz00zzcfa_structz00();
					BGl_methodzd2initzd2zzcfa_structz00();
					return BGl_toplevelzd2initzd2zzcfa_structz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_structz00()
	{
		{	/* Cfa/struct.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_struct");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_struct");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_struct");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_struct");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_struct");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_struct");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_struct");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_structz00()
	{
		{	/* Cfa/struct.scm 17 */
			{	/* Cfa/struct.scm 17 */
				obj_t BgL_cportz00_3535;

				{	/* Cfa/struct.scm 17 */
					obj_t BgL_stringz00_3543;

					BgL_stringz00_3543 = BGl_string1977z00zzcfa_structz00;
					{	/* Cfa/struct.scm 17 */
						obj_t BgL_startz00_3544;

						BgL_startz00_3544 = BINT(((long) 0));
						{	/* Cfa/struct.scm 17 */
							obj_t BgL_endz00_3545;

							BgL_endz00_3545 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3543)));
							{	/* Cfa/struct.scm 17 */

								BgL_cportz00_3535 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3543, BgL_startz00_3544, BgL_endz00_3545);
				}}}}
				{
					long BgL_iz00_3536;

					BgL_iz00_3536 = ((long) 0);
				BgL_loopz00_3537:
					if ((BgL_iz00_3536 == ((long) -1)))
						{	/* Cfa/struct.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/struct.scm 17 */
							{	/* Cfa/struct.scm 17 */
								obj_t BgL_arg1979z00_3539;

								{	/* Cfa/struct.scm 17 */

									{	/* Cfa/struct.scm 17 */
										obj_t BgL_locationz00_3541;

										BgL_locationz00_3541 = BBOOL(((bool_t) 0));
										{	/* Cfa/struct.scm 17 */

											BgL_arg1979z00_3539 =
												BGl_readz00zz__readerz00(BgL_cportz00_3535,
												BgL_locationz00_3541);
										}
									}
								}
								{	/* Cfa/struct.scm 17 */
									int BgL_tmpz00_3653;

									BgL_tmpz00_3653 = (int) (BgL_iz00_3536);
									CNST_TABLE_SET(BgL_tmpz00_3653, BgL_arg1979z00_3539);
							}}
							{	/* Cfa/struct.scm 17 */
								int BgL_auxz00_3542;

								BgL_auxz00_3542 = (int) ((BgL_iz00_3536 - ((long) 1)));
								{
									long BgL_iz00_3658;

									BgL_iz00_3658 = (long) (BgL_auxz00_3542);
									BgL_iz00_3536 = BgL_iz00_3658;
									goto BgL_loopz00_3537;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_structz00()
	{
		{	/* Cfa/struct.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_structz00()
	{
		{	/* Cfa/struct.scm 17 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_structz00()
	{
		{	/* Cfa/struct.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_structz00()
	{
		{	/* Cfa/struct.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_structz00()
	{
		{	/* Cfa/struct.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00,
				BGl_proc1966z00zzcfa_structz00, BGl_string1967z00zzcfa_structz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00,
				BGl_proc1968z00zzcfa_structz00, BGl_string1967z00zzcfa_structz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00,
				BGl_proc1969z00zzcfa_structz00, BGl_string1967z00zzcfa_structz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_makezd2structzd2appz00zzcfa_info2z00,
				BGl_proc1970z00zzcfa_structz00, BGl_string1971z00zzcfa_structz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_structzd2refzd2appz00zzcfa_info2z00, BGl_proc1972z00zzcfa_structz00,
				BGl_string1971z00zzcfa_structz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_structzd2setz12zd2appz12zzcfa_info2z00,
				BGl_proc1973z00zzcfa_structz00, BGl_string1971z00zzcfa_structz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_makezd2structzd2appz00zzcfa_info2z00,
				BGl_proc1974z00zzcfa_structz00, BGl_string1975z00zzcfa_structz00);
		}

	}



/* &loose-alloc!-make-st1513 */
	obj_t BGl_z62loosezd2allocz12zd2makezd2st1513za2zzcfa_structz00(obj_t
		BgL_envz00_3511, obj_t BgL_allocz00_3512)
	{
		{	/* Cfa/struct.scm 136 */
			{	/* Cfa/struct.scm 138 */
				bool_t BgL_test1995z00_3668;

				{	/* Cfa/struct.scm 138 */
					long BgL_arg1687z00_3549;

					{
						BgL_makezd2structzd2appz00_bglt BgL_auxz00_3669;

						{
							obj_t BgL_auxz00_3670;

							{	/* Cfa/struct.scm 138 */
								BgL_objectz00_bglt BgL_tmpz00_3671;

								BgL_tmpz00_3671 =
									((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_allocz00_3512));
								BgL_auxz00_3670 = BGL_OBJECT_WIDENING(BgL_tmpz00_3671);
							}
							BgL_auxz00_3669 =
								((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_3670);
						}
						BgL_arg1687z00_3549 =
							(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_3669))->
							BgL_lostzd2stampzd2);
					}
					BgL_test1995z00_3668 =
						(BgL_arg1687z00_3549 ==
						(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00));
				}
				if (BgL_test1995z00_3668)
					{	/* Cfa/struct.scm 138 */
						return BUNSPEC;
					}
				else
					{	/* Cfa/struct.scm 138 */
						{
							BgL_makezd2structzd2appz00_bglt BgL_auxz00_3679;

							{
								obj_t BgL_auxz00_3680;

								{	/* Cfa/struct.scm 142 */
									BgL_objectz00_bglt BgL_tmpz00_3681;

									BgL_tmpz00_3681 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) BgL_allocz00_3512));
									BgL_auxz00_3680 = BGL_OBJECT_WIDENING(BgL_tmpz00_3681);
								}
								BgL_auxz00_3679 =
									((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_3680);
							}
							((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_3679))->
									BgL_lostzd2stampzd2) =
								((long) (long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00)),
								BUNSPEC);
						}
						{	/* Cfa/struct.scm 143 */
							BgL_approxz00_bglt BgL_arg1684z00_3550;

							{
								BgL_makezd2structzd2appz00_bglt BgL_auxz00_3688;

								{
									obj_t BgL_auxz00_3689;

									{	/* Cfa/struct.scm 143 */
										BgL_objectz00_bglt BgL_tmpz00_3690;

										BgL_tmpz00_3690 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_allocz00_3512));
										BgL_auxz00_3689 = BGL_OBJECT_WIDENING(BgL_tmpz00_3690);
									}
									BgL_auxz00_3688 =
										((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_3689);
								}
								BgL_arg1684z00_3550 =
									(((BgL_makezd2structzd2appz00_bglt)
										COBJECT(BgL_auxz00_3688))->BgL_valuezd2approxzd2);
							}
							BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
								(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
								BgL_arg1684z00_3550);
						}
						{	/* Cfa/struct.scm 144 */
							BgL_approxz00_bglt BgL_arg1685z00_3551;

							{
								BgL_makezd2structzd2appz00_bglt BgL_auxz00_3697;

								{
									obj_t BgL_auxz00_3698;

									{	/* Cfa/struct.scm 144 */
										BgL_objectz00_bglt BgL_tmpz00_3699;

										BgL_tmpz00_3699 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_allocz00_3512));
										BgL_auxz00_3698 = BGL_OBJECT_WIDENING(BgL_tmpz00_3699);
									}
									BgL_auxz00_3697 =
										((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_3698);
								}
								BgL_arg1685z00_3551 =
									(((BgL_makezd2structzd2appz00_bglt)
										COBJECT(BgL_auxz00_3697))->BgL_valuezd2approxzd2);
							}
							BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_arg1685z00_3551,
								((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00));
						}
						{	/* Cfa/struct.scm 145 */
							BgL_approxz00_bglt BgL_arg1686z00_3552;

							{
								BgL_makezd2structzd2appz00_bglt BgL_auxz00_3707;

								{
									obj_t BgL_auxz00_3708;

									{	/* Cfa/struct.scm 145 */
										BgL_objectz00_bglt BgL_tmpz00_3709;

										BgL_tmpz00_3709 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_allocz00_3512));
										BgL_auxz00_3708 = BGL_OBJECT_WIDENING(BgL_tmpz00_3709);
									}
									BgL_auxz00_3707 =
										((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_3708);
								}
								BgL_arg1686z00_3552 =
									(((BgL_makezd2structzd2appz00_bglt)
										COBJECT(BgL_auxz00_3707))->BgL_valuezd2approxzd2);
							}
							return
								BGl_approxzd2setzd2topz12z12zzcfa_approxz00
								(BgL_arg1686z00_3552);
						}
					}
			}
		}

	}



/* &cfa!-struct-set!-app1511 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2structzd2setz12zd2app1511zb0zzcfa_structz00(obj_t
		BgL_envz00_3513, obj_t BgL_nodez00_3514)
	{
		{	/* Cfa/struct.scm 109 */
			{	/* Cfa/struct.scm 113 */
				obj_t BgL_arg1641z00_3554;

				{	/* Cfa/struct.scm 113 */
					obj_t BgL_pairz00_3555;

					BgL_pairz00_3555 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_3514))))->BgL_argsz00);
					BgL_arg1641z00_3554 = CAR(CDR(BgL_pairz00_3555));
				}
				BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1641z00_3554));
			}
			{	/* Cfa/struct.scm 114 */
				BgL_approxz00_bglt BgL_structzd2approxzd2_3556;
				BgL_approxz00_bglt BgL_valzd2approxzd2_3557;

				{	/* Cfa/struct.scm 114 */
					obj_t BgL_arg1663z00_3558;

					{	/* Cfa/struct.scm 114 */
						obj_t BgL_pairz00_3559;

						BgL_pairz00_3559 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3514))))->BgL_argsz00);
						BgL_arg1663z00_3558 = CAR(BgL_pairz00_3559);
					}
					BgL_structzd2approxzd2_3556 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1663z00_3558));
				}
				{	/* Cfa/struct.scm 115 */
					obj_t BgL_arg1667z00_3560;

					{	/* Cfa/struct.scm 115 */
						obj_t BgL_pairz00_3561;

						BgL_pairz00_3561 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3514))))->BgL_argsz00);
						BgL_arg1667z00_3560 = CAR(CDR(CDR(BgL_pairz00_3561)));
					}
					BgL_valzd2approxzd2_3557 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1667z00_3560));
				}
				if (
					(((BgL_approxz00_bglt) COBJECT(BgL_structzd2approxzd2_3556))->
						BgL_topzf3zf3))
					{	/* Cfa/struct.scm 118 */
						((obj_t)
							BGl_loosez12z12zzcfa_loosez00(BgL_valzd2approxzd2_3557,
								CNST_TABLE_REF(((long) 0))));
					}
				else
					{	/* Cfa/struct.scm 123 */
						obj_t BgL_zc3z04anonymousza31653ze3z87_3562;

						BgL_zc3z04anonymousza31653ze3z87_3562 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31653ze3ze5zzcfa_structz00,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31653ze3z87_3562,
							(int) (((long) 0)), ((obj_t) BgL_valzd2approxzd2_3557));
						BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
							(BgL_zc3z04anonymousza31653ze3z87_3562,
							BgL_structzd2approxzd2_3556);
			}}
			{
				BgL_structzd2setz12zd2appz12_bglt BgL_auxz00_3749;

				{
					obj_t BgL_auxz00_3750;

					{	/* Cfa/struct.scm 127 */
						BgL_objectz00_bglt BgL_tmpz00_3751;

						BgL_tmpz00_3751 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3514));
						BgL_auxz00_3750 = BGL_OBJECT_WIDENING(BgL_tmpz00_3751);
					}
					BgL_auxz00_3749 =
						((BgL_structzd2setz12zd2appz12_bglt) BgL_auxz00_3750);
				}
				return
					(((BgL_structzd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_3749))->
					BgL_approxz00);
			}
		}

	}



/* &<@anonymous:1653> */
	obj_t BGl_z62zc3z04anonymousza31653ze3ze5zzcfa_structz00(obj_t
		BgL_envz00_3515, obj_t BgL_appz00_3517)
	{
		{	/* Cfa/struct.scm 122 */
			{	/* Cfa/struct.scm 123 */
				BgL_approxz00_bglt BgL_valzd2approxzd2_3516;

				BgL_valzd2approxzd2_3516 =
					((BgL_approxz00_bglt)
					PROCEDURE_REF(BgL_envz00_3515, (int) (((long) 0))));
				if (BGl_isazf3zf3zz__objectz00(BgL_appz00_3517,
						BGl_makezd2structzd2appz00zzcfa_info2z00))
					{	/* Cfa/struct.scm 125 */
						BgL_approxz00_bglt BgL_arg1662z00_3563;

						{
							BgL_makezd2structzd2appz00_bglt BgL_auxz00_3762;

							{
								obj_t BgL_auxz00_3763;

								{	/* Cfa/struct.scm 125 */
									BgL_objectz00_bglt BgL_tmpz00_3764;

									BgL_tmpz00_3764 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_appz00_3517));
									BgL_auxz00_3763 = BGL_OBJECT_WIDENING(BgL_tmpz00_3764);
								}
								BgL_auxz00_3762 =
									((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_3763);
							}
							BgL_arg1662z00_3563 =
								(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_3762))->
								BgL_valuezd2approxzd2);
						}
						return
							((obj_t)
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1662z00_3563,
								BgL_valzd2approxzd2_3516));
					}
				else
					{	/* Cfa/struct.scm 123 */
						return BFALSE;
					}
			}
		}

	}



/* &cfa!-struct-ref-app1509 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2structzd2refzd2app1509za2zzcfa_structz00(obj_t
		BgL_envz00_3518, obj_t BgL_nodez00_3519)
	{
		{	/* Cfa/struct.scm 87 */
			{	/* Cfa/struct.scm 91 */
				obj_t BgL_arg1605z00_3565;

				{	/* Cfa/struct.scm 91 */
					obj_t BgL_pairz00_3566;

					BgL_pairz00_3566 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_3519))))->BgL_argsz00);
					BgL_arg1605z00_3565 = CAR(CDR(BgL_pairz00_3566));
				}
				BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1605z00_3565));
			}
			{	/* Cfa/struct.scm 92 */
				BgL_approxz00_bglt BgL_structzd2approxzd2_3567;

				{	/* Cfa/struct.scm 92 */
					obj_t BgL_arg1639z00_3568;

					{	/* Cfa/struct.scm 92 */
						obj_t BgL_pairz00_3569;

						BgL_pairz00_3569 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3519))))->BgL_argsz00);
						BgL_arg1639z00_3568 = CAR(BgL_pairz00_3569);
					}
					BgL_structzd2approxzd2_3567 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1639z00_3568));
				}
				if (
					(((BgL_approxz00_bglt) COBJECT(BgL_structzd2approxzd2_3567))->
						BgL_topzf3zf3))
					{	/* Cfa/struct.scm 96 */
						BgL_approxz00_bglt BgL_arg1611z00_3570;

						{
							BgL_structzd2refzd2appz00_bglt BgL_auxz00_3787;

							{
								obj_t BgL_auxz00_3788;

								{	/* Cfa/struct.scm 96 */
									BgL_objectz00_bglt BgL_tmpz00_3789;

									BgL_tmpz00_3789 =
										((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3519));
									BgL_auxz00_3788 = BGL_OBJECT_WIDENING(BgL_tmpz00_3789);
								}
								BgL_auxz00_3787 =
									((BgL_structzd2refzd2appz00_bglt) BgL_auxz00_3788);
							}
							BgL_arg1611z00_3570 =
								(((BgL_structzd2refzd2appz00_bglt) COBJECT(BgL_auxz00_3787))->
								BgL_approxz00);
						}
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg1611z00_3570);
					}
				else
					{	/* Cfa/struct.scm 95 */
						BFALSE;
					}
				{	/* Cfa/struct.scm 99 */
					obj_t BgL_zc3z04anonymousza31613ze3z87_3571;

					BgL_zc3z04anonymousza31613ze3z87_3571 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31613ze3ze5zzcfa_structz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31613ze3z87_3571,
						(int) (((long) 0)), ((obj_t) ((BgL_appz00_bglt) BgL_nodez00_3519)));
					BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
						(BgL_zc3z04anonymousza31613ze3z87_3571,
						BgL_structzd2approxzd2_3567);
			}}
			{
				BgL_structzd2refzd2appz00_bglt BgL_auxz00_3804;

				{
					obj_t BgL_auxz00_3805;

					{	/* Cfa/struct.scm 104 */
						BgL_objectz00_bglt BgL_tmpz00_3806;

						BgL_tmpz00_3806 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3519));
						BgL_auxz00_3805 = BGL_OBJECT_WIDENING(BgL_tmpz00_3806);
					}
					BgL_auxz00_3804 = ((BgL_structzd2refzd2appz00_bglt) BgL_auxz00_3805);
				}
				return
					(((BgL_structzd2refzd2appz00_bglt) COBJECT(BgL_auxz00_3804))->
					BgL_approxz00);
			}
		}

	}



/* &<@anonymous:1613> */
	obj_t BGl_z62zc3z04anonymousza31613ze3ze5zzcfa_structz00(obj_t
		BgL_envz00_3520, obj_t BgL_appz00_3522)
	{
		{	/* Cfa/struct.scm 98 */
			{	/* Cfa/struct.scm 99 */
				BgL_appz00_bglt BgL_i1176z00_3521;

				BgL_i1176z00_3521 =
					((BgL_appz00_bglt)
					PROCEDURE_REF(BgL_envz00_3520, (int) (((long) 0))));
				if (BGl_isazf3zf3zz__objectz00(BgL_appz00_3522,
						BGl_makezd2structzd2appz00zzcfa_info2z00))
					{	/* Cfa/struct.scm 99 */
						{	/* Cfa/struct.scm 101 */
							BgL_approxz00_bglt BgL_arg1624z00_3572;
							BgL_approxz00_bglt BgL_arg1626z00_3573;

							{
								BgL_structzd2refzd2appz00_bglt BgL_auxz00_3817;

								{
									obj_t BgL_auxz00_3818;

									{	/* Cfa/struct.scm 101 */
										BgL_objectz00_bglt BgL_tmpz00_3819;

										BgL_tmpz00_3819 = ((BgL_objectz00_bglt) BgL_i1176z00_3521);
										BgL_auxz00_3818 = BGL_OBJECT_WIDENING(BgL_tmpz00_3819);
									}
									BgL_auxz00_3817 =
										((BgL_structzd2refzd2appz00_bglt) BgL_auxz00_3818);
								}
								BgL_arg1624z00_3572 =
									(((BgL_structzd2refzd2appz00_bglt) COBJECT(BgL_auxz00_3817))->
									BgL_approxz00);
							}
							{
								BgL_makezd2structzd2appz00_bglt BgL_auxz00_3824;

								{
									obj_t BgL_auxz00_3825;

									{	/* Cfa/struct.scm 101 */
										BgL_objectz00_bglt BgL_tmpz00_3826;

										BgL_tmpz00_3826 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_appz00_3522));
										BgL_auxz00_3825 = BGL_OBJECT_WIDENING(BgL_tmpz00_3826);
									}
									BgL_auxz00_3824 =
										((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_3825);
								}
								BgL_arg1626z00_3573 =
									(((BgL_makezd2structzd2appz00_bglt)
										COBJECT(BgL_auxz00_3824))->BgL_valuezd2approxzd2);
							}
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1624z00_3572,
								BgL_arg1626z00_3573);
						}
						{	/* Cfa/struct.scm 102 */
							BgL_approxz00_bglt BgL_arg1627z00_3574;
							BgL_typez00_bglt BgL_arg1631z00_3575;

							{
								BgL_makezd2structzd2appz00_bglt BgL_auxz00_3833;

								{
									obj_t BgL_auxz00_3834;

									{	/* Cfa/struct.scm 102 */
										BgL_objectz00_bglt BgL_tmpz00_3835;

										BgL_tmpz00_3835 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_appz00_3522));
										BgL_auxz00_3834 = BGL_OBJECT_WIDENING(BgL_tmpz00_3835);
									}
									BgL_auxz00_3833 =
										((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_3834);
								}
								BgL_arg1627z00_3574 =
									(((BgL_makezd2structzd2appz00_bglt)
										COBJECT(BgL_auxz00_3833))->BgL_valuezd2approxzd2);
							}
							{	/* Cfa/struct.scm 102 */
								BgL_approxz00_bglt BgL_arg1634z00_3576;

								{
									BgL_structzd2refzd2appz00_bglt BgL_auxz00_3841;

									{
										obj_t BgL_auxz00_3842;

										{	/* Cfa/struct.scm 102 */
											BgL_objectz00_bglt BgL_tmpz00_3843;

											BgL_tmpz00_3843 =
												((BgL_objectz00_bglt) BgL_i1176z00_3521);
											BgL_auxz00_3842 = BGL_OBJECT_WIDENING(BgL_tmpz00_3843);
										}
										BgL_auxz00_3841 =
											((BgL_structzd2refzd2appz00_bglt) BgL_auxz00_3842);
									}
									BgL_arg1634z00_3576 =
										(((BgL_structzd2refzd2appz00_bglt)
											COBJECT(BgL_auxz00_3841))->BgL_approxz00);
								}
								BgL_arg1631z00_3575 =
									(((BgL_approxz00_bglt) COBJECT(BgL_arg1634z00_3576))->
									BgL_typez00);
							}
							return
								BGl_approxzd2setzd2typez12z12zzcfa_approxz00
								(BgL_arg1627z00_3574, BgL_arg1631z00_3575);
						}
					}
				else
					{	/* Cfa/struct.scm 99 */
						return BFALSE;
					}
			}
		}

	}



/* &cfa!-make-struct-app1507 */
	BgL_approxz00_bglt
		BGl_z62cfaz12zd2makezd2structzd2app1507za2zzcfa_structz00(obj_t
		BgL_envz00_3523, obj_t BgL_nodez00_3524)
	{
		{	/* Cfa/struct.scm 71 */
			{	/* Cfa/struct.scm 74 */
				obj_t BgL_arg1592z00_3578;

				{	/* Cfa/struct.scm 74 */
					obj_t BgL_pairz00_3579;

					BgL_pairz00_3579 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_3524))))->BgL_argsz00);
					BgL_arg1592z00_3578 = CAR(BgL_pairz00_3579);
				}
				BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1592z00_3578));
			}
			{	/* Cfa/struct.scm 75 */
				BgL_approxz00_bglt BgL_initzd2valuezd2approxz00_3580;

				{	/* Cfa/struct.scm 75 */
					obj_t BgL_arg1599z00_3581;

					{	/* Cfa/struct.scm 75 */
						obj_t BgL_pairz00_3582;

						BgL_pairz00_3582 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_3524))))->BgL_argsz00);
						BgL_arg1599z00_3581 = CAR(CDR(BgL_pairz00_3582));
					}
					BgL_initzd2valuezd2approxz00_3580 =
						BGl_cfaz12z12zzcfa_cfaz00(((BgL_nodez00_bglt) BgL_arg1599z00_3581));
				}
				{	/* Cfa/struct.scm 76 */
					BgL_approxz00_bglt BgL_arg1597z00_3583;

					{
						BgL_makezd2structzd2appz00_bglt BgL_auxz00_3863;

						{
							obj_t BgL_auxz00_3864;

							{	/* Cfa/struct.scm 76 */
								BgL_objectz00_bglt BgL_tmpz00_3865;

								BgL_tmpz00_3865 =
									((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3524));
								BgL_auxz00_3864 = BGL_OBJECT_WIDENING(BgL_tmpz00_3865);
							}
							BgL_auxz00_3863 =
								((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_3864);
						}
						BgL_arg1597z00_3583 =
							(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_3863))->
							BgL_valuezd2approxzd2);
					}
					BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg1597z00_3583,
						BgL_initzd2valuezd2approxz00_3580);
				}
				{
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_3872;

					{
						obj_t BgL_auxz00_3873;

						{	/* Cfa/struct.scm 77 */
							BgL_objectz00_bglt BgL_tmpz00_3874;

							BgL_tmpz00_3874 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3524));
							BgL_auxz00_3873 = BGL_OBJECT_WIDENING(BgL_tmpz00_3874);
						}
						BgL_auxz00_3872 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_3873);
					}
					return
						(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_3872))->
						BgL_approxz00);
				}
			}
		}

	}



/* &node-setup!-pre-stru1505 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2stru1505za2zzcfa_structz00(obj_t
		BgL_envz00_3525, obj_t BgL_nodez00_3526)
	{
		{	/* Cfa/struct.scm 62 */
			{	/* Cfa/struct.scm 64 */
				obj_t BgL_arg1578z00_3585;

				BgL_arg1578z00_3585 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_3526))))->BgL_argsz00);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1578z00_3585);
			}
			{	/* Cfa/struct.scm 65 */
				BgL_appz00_bglt BgL_nodez00_3586;

				{	/* Cfa/struct.scm 65 */
					long BgL_arg1584z00_3587;

					{	/* Cfa/struct.scm 65 */
						obj_t BgL_arg1588z00_3588;

						{	/* Cfa/struct.scm 65 */
							obj_t BgL_arg1589z00_3589;

							{	/* Cfa/struct.scm 65 */
								long BgL_arg1816z00_3590;

								{	/* Cfa/struct.scm 65 */
									long BgL_arg1817z00_3591;

									{	/* Cfa/struct.scm 65 */
										long BgL_res1956z00_3592;

										BgL_res1956z00_3592 =
											BGL_OBJECT_CLASS_NUM(
											((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_3526)));
										BgL_arg1817z00_3591 = BgL_res1956z00_3592;
									}
									BgL_arg1816z00_3590 = (BgL_arg1817z00_3591 - OBJECT_TYPE);
								}
								BgL_arg1589z00_3589 =
									VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
									BgL_arg1816z00_3590);
							}
							BgL_arg1588z00_3588 =
								BGl_classzd2superzd2zz__objectz00(BgL_arg1589z00_3589);
						}
						{	/* Cfa/struct.scm 65 */
							long BgL_res1958z00_3593;

							{	/* Cfa/struct.scm 65 */
								obj_t BgL_tmpz00_3890;

								BgL_tmpz00_3890 = ((obj_t) BgL_arg1588z00_3588);
								BgL_res1958z00_3593 = BGL_CLASS_INDEX(BgL_tmpz00_3890);
							}
							BgL_arg1584z00_3587 = BgL_res1958z00_3593;
					}}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt) BgL_nodez00_3526)), BgL_arg1584z00_3587);
				}
				{	/* Cfa/struct.scm 65 */
					BgL_objectz00_bglt BgL_tmpz00_3896;

					BgL_tmpz00_3896 =
						((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3526));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3896, BFALSE);
				}
				((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3526));
				BgL_nodez00_3586 = ((BgL_appz00_bglt) BgL_nodez00_3526);
				{	/* Cfa/struct.scm 66 */
					BgL_structzd2setz12zd2appz12_bglt BgL_wide1173z00_3594;

					BgL_wide1173z00_3594 =
						((BgL_structzd2setz12zd2appz12_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_structzd2setz12zd2appz12_bgl))));
					{	/* Cfa/struct.scm 66 */
						obj_t BgL_auxz00_3908;
						BgL_objectz00_bglt BgL_tmpz00_3904;

						BgL_auxz00_3908 = ((obj_t) BgL_wide1173z00_3594);
						BgL_tmpz00_3904 =
							((BgL_objectz00_bglt)
							((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3586)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3904, BgL_auxz00_3908);
					}
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3586)));
					{	/* Cfa/struct.scm 66 */
						long BgL_arg1582z00_3595;

						{	/* Cfa/struct.scm 66 */
							long BgL_res1959z00_3596;

							BgL_res1959z00_3596 =
								BGL_CLASS_INDEX(BGl_structzd2setz12zd2appz12zzcfa_info2z00);
							BgL_arg1582z00_3595 = BgL_res1959z00_3596;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_3586))), BgL_arg1582z00_3595);
					}
					((BgL_appz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3586)));
				}
				{
					BgL_structzd2setz12zd2appz12_bglt BgL_auxz00_3922;

					{
						obj_t BgL_auxz00_3923;

						{	/* Cfa/struct.scm 66 */
							BgL_objectz00_bglt BgL_tmpz00_3924;

							BgL_tmpz00_3924 =
								((BgL_objectz00_bglt)
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3586)));
							BgL_auxz00_3923 = BGL_OBJECT_WIDENING(BgL_tmpz00_3924);
						}
						BgL_auxz00_3922 =
							((BgL_structzd2setz12zd2appz12_bglt) BgL_auxz00_3923);
					}
					((((BgL_structzd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_3922))->
							BgL_approxz00) =
						((BgL_approxz00_bglt)
							BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
									BGl_za2unspecza2z00zztype_cachez00))), BUNSPEC);
				}
				return
					((obj_t) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3586)));
			}
		}

	}



/* &node-setup!-pre-stru1503 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2stru1503za2zzcfa_structz00(obj_t
		BgL_envz00_3527, obj_t BgL_nodez00_3528)
	{
		{	/* Cfa/struct.scm 53 */
			{	/* Cfa/struct.scm 55 */
				obj_t BgL_arg1561z00_3598;

				BgL_arg1561z00_3598 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_3528))))->BgL_argsz00);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1561z00_3598);
			}
			{	/* Cfa/struct.scm 56 */
				BgL_appz00_bglt BgL_nodez00_3599;

				{	/* Cfa/struct.scm 56 */
					long BgL_arg1565z00_3600;

					{	/* Cfa/struct.scm 56 */
						obj_t BgL_arg1573z00_3601;

						{	/* Cfa/struct.scm 56 */
							obj_t BgL_arg1575z00_3602;

							{	/* Cfa/struct.scm 56 */
								long BgL_arg1816z00_3603;

								{	/* Cfa/struct.scm 56 */
									long BgL_arg1817z00_3604;

									{	/* Cfa/struct.scm 56 */
										long BgL_res1951z00_3605;

										BgL_res1951z00_3605 =
											BGL_OBJECT_CLASS_NUM(
											((BgL_objectz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_3528)));
										BgL_arg1817z00_3604 = BgL_res1951z00_3605;
									}
									BgL_arg1816z00_3603 = (BgL_arg1817z00_3604 - OBJECT_TYPE);
								}
								BgL_arg1575z00_3602 =
									VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
									BgL_arg1816z00_3603);
							}
							BgL_arg1573z00_3601 =
								BGl_classzd2superzd2zz__objectz00(BgL_arg1575z00_3602);
						}
						{	/* Cfa/struct.scm 56 */
							long BgL_res1954z00_3606;

							{	/* Cfa/struct.scm 56 */
								obj_t BgL_tmpz00_3946;

								BgL_tmpz00_3946 = ((obj_t) BgL_arg1573z00_3601);
								BgL_res1954z00_3606 = BGL_CLASS_INDEX(BgL_tmpz00_3946);
							}
							BgL_arg1565z00_3600 = BgL_res1954z00_3606;
					}}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt) BgL_nodez00_3528)), BgL_arg1565z00_3600);
				}
				{	/* Cfa/struct.scm 56 */
					BgL_objectz00_bglt BgL_tmpz00_3952;

					BgL_tmpz00_3952 =
						((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3528));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3952, BFALSE);
				}
				((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3528));
				BgL_nodez00_3599 = ((BgL_appz00_bglt) BgL_nodez00_3528);
				{	/* Cfa/struct.scm 57 */
					BgL_structzd2refzd2appz00_bglt BgL_wide1167z00_3607;

					BgL_wide1167z00_3607 =
						((BgL_structzd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_structzd2refzd2appz00_bgl))));
					{	/* Cfa/struct.scm 57 */
						obj_t BgL_auxz00_3964;
						BgL_objectz00_bglt BgL_tmpz00_3960;

						BgL_auxz00_3964 = ((obj_t) BgL_wide1167z00_3607);
						BgL_tmpz00_3960 =
							((BgL_objectz00_bglt)
							((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3599)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3960, BgL_auxz00_3964);
					}
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3599)));
					{	/* Cfa/struct.scm 57 */
						long BgL_arg1564z00_3608;

						{	/* Cfa/struct.scm 57 */
							long BgL_res1955z00_3609;

							BgL_res1955z00_3609 =
								BGL_CLASS_INDEX(BGl_structzd2refzd2appz00zzcfa_info2z00);
							BgL_arg1564z00_3608 = BgL_res1955z00_3609;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_3599))), BgL_arg1564z00_3608);
					}
					((BgL_appz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3599)));
				}
				{
					BgL_structzd2refzd2appz00_bglt BgL_auxz00_3978;

					{
						obj_t BgL_auxz00_3979;

						{	/* Cfa/struct.scm 57 */
							BgL_objectz00_bglt BgL_tmpz00_3980;

							BgL_tmpz00_3980 =
								((BgL_objectz00_bglt)
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3599)));
							BgL_auxz00_3979 = BGL_OBJECT_WIDENING(BgL_tmpz00_3980);
						}
						BgL_auxz00_3978 =
							((BgL_structzd2refzd2appz00_bglt) BgL_auxz00_3979);
					}
					((((BgL_structzd2refzd2appz00_bglt) COBJECT(BgL_auxz00_3978))->
							BgL_approxz00) =
						((BgL_approxz00_bglt)
							BGl_makezd2typezd2approxz00zzcfa_approxz00(((BgL_typez00_bglt)
									BGl_za2objza2z00zztype_cachez00))), BUNSPEC);
				}
				return
					((obj_t) ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3599)));
			}
		}

	}



/* &node-setup!-pre-make1501 */
	obj_t BGl_z62nodezd2setupz12zd2prezd2make1501za2zzcfa_structz00(obj_t
		BgL_envz00_3529, obj_t BgL_nodez00_3530)
	{
		{	/* Cfa/struct.scm 36 */
			{	/* Cfa/struct.scm 38 */
				obj_t BgL_arg1528z00_3611;

				BgL_arg1528z00_3611 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_3530))))->BgL_argsz00);
				BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg1528z00_3611);
			}
			{	/* Cfa/struct.scm 39 */
				BgL_variablez00_bglt BgL_ownerz00_3612;

				{
					BgL_prezd2makezd2structzd2appzd2_bglt BgL_auxz00_3996;

					{
						obj_t BgL_auxz00_3997;

						{	/* Cfa/struct.scm 39 */
							BgL_objectz00_bglt BgL_tmpz00_3998;

							BgL_tmpz00_3998 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3530));
							BgL_auxz00_3997 = BGL_OBJECT_WIDENING(BgL_tmpz00_3998);
						}
						BgL_auxz00_3996 =
							((BgL_prezd2makezd2structzd2appzd2_bglt) BgL_auxz00_3997);
					}
					BgL_ownerz00_3612 =
						(((BgL_prezd2makezd2structzd2appzd2_bglt)
							COBJECT(BgL_auxz00_3996))->BgL_ownerz00);
				}
				{	/* Cfa/struct.scm 39 */
					BgL_appz00_bglt BgL_nodez00_3613;

					{	/* Cfa/struct.scm 40 */
						long BgL_arg1540z00_3614;

						{	/* Cfa/struct.scm 40 */
							obj_t BgL_arg1552z00_3615;

							{	/* Cfa/struct.scm 40 */
								obj_t BgL_arg1558z00_3616;

								{	/* Cfa/struct.scm 40 */
									long BgL_arg1816z00_3617;

									{	/* Cfa/struct.scm 40 */
										long BgL_arg1817z00_3618;

										{	/* Cfa/struct.scm 40 */
											long BgL_res1946z00_3619;

											BgL_res1946z00_3619 =
												BGL_OBJECT_CLASS_NUM(
												((BgL_objectz00_bglt)
													((BgL_appz00_bglt) BgL_nodez00_3530)));
											BgL_arg1817z00_3618 = BgL_res1946z00_3619;
										}
										BgL_arg1816z00_3617 = (BgL_arg1817z00_3618 - OBJECT_TYPE);
									}
									BgL_arg1558z00_3616 =
										VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
										BgL_arg1816z00_3617);
								}
								BgL_arg1552z00_3615 =
									BGl_classzd2superzd2zz__objectz00(BgL_arg1558z00_3616);
							}
							{	/* Cfa/struct.scm 40 */
								long BgL_res1948z00_3620;

								{	/* Cfa/struct.scm 40 */
									obj_t BgL_tmpz00_4010;

									BgL_tmpz00_4010 = ((obj_t) BgL_arg1552z00_3615);
									BgL_res1948z00_3620 = BGL_CLASS_INDEX(BgL_tmpz00_4010);
								}
								BgL_arg1540z00_3614 = BgL_res1948z00_3620;
						}}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_appz00_bglt) BgL_nodez00_3530)), BgL_arg1540z00_3614);
					}
					{	/* Cfa/struct.scm 40 */
						BgL_objectz00_bglt BgL_tmpz00_4016;

						BgL_tmpz00_4016 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3530));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4016, BFALSE);
					}
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3530));
					BgL_nodez00_3613 = ((BgL_appz00_bglt) BgL_nodez00_3530);
					{	/* Cfa/struct.scm 40 */

						{	/* Cfa/struct.scm 41 */
							BgL_appz00_bglt BgL_wnodez00_3621;

							{	/* Cfa/struct.scm 41 */
								BgL_makezd2structzd2appz00_bglt BgL_wide1161z00_3622;

								BgL_wide1161z00_3622 =
									((BgL_makezd2structzd2appz00_bglt)
									BOBJECT(GC_MALLOC(sizeof(struct
												BgL_makezd2structzd2appz00_bgl))));
								{	/* Cfa/struct.scm 41 */
									obj_t BgL_auxz00_4028;
									BgL_objectz00_bglt BgL_tmpz00_4024;

									BgL_auxz00_4028 = ((obj_t) BgL_wide1161z00_3622);
									BgL_tmpz00_4024 =
										((BgL_objectz00_bglt)
										((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3613)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4024, BgL_auxz00_4028);
								}
								((BgL_objectz00_bglt)
									((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3613)));
								{	/* Cfa/struct.scm 41 */
									long BgL_arg1537z00_3623;

									{	/* Cfa/struct.scm 41 */
										long BgL_res1949z00_3624;

										BgL_res1949z00_3624 =
											BGL_CLASS_INDEX(BGl_makezd2structzd2appz00zzcfa_info2z00);
										BgL_arg1537z00_3623 = BgL_res1949z00_3624;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt)
												((BgL_appz00_bglt) BgL_nodez00_3613))),
										BgL_arg1537z00_3623);
								}
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3613)));
							}
							{
								BgL_makezd2structzd2appz00_bglt BgL_auxz00_4042;

								{
									obj_t BgL_auxz00_4043;

									{	/* Cfa/struct.scm 43 */
										BgL_objectz00_bglt BgL_tmpz00_4044;

										BgL_tmpz00_4044 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3613)));
										BgL_auxz00_4043 = BGL_OBJECT_WIDENING(BgL_tmpz00_4044);
									}
									BgL_auxz00_4042 =
										((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_4043);
								}
								((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_4042))->
										BgL_approxz00) =
									((BgL_approxz00_bglt)
										BGl_makezd2emptyzd2approxz00zzcfa_approxz00()), BUNSPEC);
							}
							{
								BgL_makezd2structzd2appz00_bglt BgL_auxz00_4052;

								{
									obj_t BgL_auxz00_4053;

									{	/* Cfa/struct.scm 44 */
										BgL_objectz00_bglt BgL_tmpz00_4054;

										BgL_tmpz00_4054 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3613)));
										BgL_auxz00_4053 = BGL_OBJECT_WIDENING(BgL_tmpz00_4054);
									}
									BgL_auxz00_4052 =
										((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_4053);
								}
								((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_4052))->
										BgL_valuezd2approxzd2) =
									((BgL_approxz00_bglt)
										BGl_makezd2emptyzd2approxz00zzcfa_approxz00()), BUNSPEC);
							}
							{
								BgL_makezd2structzd2appz00_bglt BgL_auxz00_4062;

								{
									obj_t BgL_auxz00_4063;

									{	/* Cfa/struct.scm 40 */
										BgL_objectz00_bglt BgL_tmpz00_4064;

										BgL_tmpz00_4064 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3613)));
										BgL_auxz00_4063 = BGL_OBJECT_WIDENING(BgL_tmpz00_4064);
									}
									BgL_auxz00_4062 =
										((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_4063);
								}
								((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_4062))->
										BgL_lostzd2stampzd2) = ((long) ((long) -1)), BUNSPEC);
							}
							{
								BgL_makezd2structzd2appz00_bglt BgL_auxz00_4071;

								{
									obj_t BgL_auxz00_4072;

									{	/* Cfa/struct.scm 42 */
										BgL_objectz00_bglt BgL_tmpz00_4073;

										BgL_tmpz00_4073 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3613)));
										BgL_auxz00_4072 = BGL_OBJECT_WIDENING(BgL_tmpz00_4073);
									}
									BgL_auxz00_4071 =
										((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_4072);
								}
								((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_4071))->
										BgL_ownerz00) =
									((BgL_variablez00_bglt) BgL_ownerz00_3612), BUNSPEC);
							}
							{
								BgL_makezd2structzd2appz00_bglt BgL_auxz00_4080;

								{
									obj_t BgL_auxz00_4081;

									{	/* Cfa/struct.scm 40 */
										BgL_objectz00_bglt BgL_tmpz00_4082;

										BgL_tmpz00_4082 =
											((BgL_objectz00_bglt)
											((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3613)));
										BgL_auxz00_4081 = BGL_OBJECT_WIDENING(BgL_tmpz00_4082);
									}
									BgL_auxz00_4080 =
										((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_4081);
								}
								((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_4080))->
										BgL_stackzd2stampzd2) = ((obj_t) BNIL), BUNSPEC);
							}
							BgL_wnodez00_3621 =
								((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_3613));
							{	/* Cfa/struct.scm 47 */
								BgL_approxz00_bglt BgL_arg1536z00_3625;

								BgL_arg1536z00_3625 =
									BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(
									((BgL_typez00_bglt) BGl_za2structza2z00zztype_cachez00),
									((BgL_nodez00_bglt) BgL_nodez00_3613));
								{
									BgL_makezd2structzd2appz00_bglt BgL_auxz00_4094;

									{
										obj_t BgL_auxz00_4095;

										{	/* Cfa/struct.scm 46 */
											BgL_objectz00_bglt BgL_tmpz00_4096;

											BgL_tmpz00_4096 =
												((BgL_objectz00_bglt) BgL_wnodez00_3621);
											BgL_auxz00_4095 = BGL_OBJECT_WIDENING(BgL_tmpz00_4096);
										}
										BgL_auxz00_4094 =
											((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_4095);
									}
									return
										((((BgL_makezd2structzd2appz00_bglt)
												COBJECT(BgL_auxz00_4094))->BgL_approxz00) =
										((BgL_approxz00_bglt) BgL_arg1536z00_3625), BUNSPEC);
								}
							}
						}
					}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_structz00()
	{
		{	/* Cfa/struct.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 471177483),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 131412196),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 400853773),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 168272051),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 468997780),
				BSTRING_TO_STRING(BGl_string1976z00zzcfa_structz00));
		}

	}

#ifdef __cplusplus
}
#endif
