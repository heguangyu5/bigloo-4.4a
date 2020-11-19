/*===========================================================================*/
/*   (Rgc/rgcset.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Rgc/rgcset.scm -indent -o objs/obj_u/Rgc/rgcset.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_makezd2rgcsetzd2zz__rgc_setz00(long);
	static obj_t BGl_z62rgcsetzd2equalzf3z43zz__rgc_setz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__rgc_setz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00(obj_t,
		obj_t);
	static obj_t BGl_z62forzd2eachzd2rgcsetz62zz__rgc_setz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2notz12zc0zz__rgc_setz00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol1863z00zz__rgc_setz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__rgc_setz00();
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2ze3listz31zz__rgc_setz00(obj_t);
	static long BGl_bitzd2perzd2wordz00zz__rgc_setz00;
	static obj_t BGl_genericzd2initzd2zz__rgc_setz00();
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__rgc_setz00();
	extern bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62makezd2rgcsetzb0zz__rgc_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2andz12zc0zz__rgc_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_rgcsetzd2ze3hashz31zz__rgc_setz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2butz12zc0zz__rgc_setz00(obj_t, obj_t);
	extern obj_t make_vector(long, obj_t);
	static obj_t BGl_z62rgcsetzd2notz12za2zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__rgc_setz00();
	BGL_EXPORTED_DECL bool_t BGl_rgcsetzd2equalzf3z21zz__rgc_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3rgcsetz31zz__rgc_setz00(obj_t, long);
	static obj_t BGl_z62rgcsetzd2removez12za2zz__rgc_setz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62rgcsetzd2andz12za2zz__rgc_setz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62rgcsetzd2butz12za2zz__rgc_setz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62rgcsetzd2lengthzb0zz__rgc_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62rgcsetzd2ze3listz53zz__rgc_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2addz12zc0zz__rgc_setz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2removez12zc0zz__rgc_setz00(obj_t, long);
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_z62rgcsetzd2memberzf3z43zz__rgc_setz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__rgc_setz00();
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2notzd2zz__rgc_setz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__rgc_setz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__rgc_setz00();
	static obj_t BGl_z62rgcsetzd2ze3hashz53zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_z62rgcsetzd2notzb0zz__rgc_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2orz12zc0zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_z62rgcsetzd2orzb0zz__rgc_setz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62listzd2ze3rgcsetz53zz__rgc_setz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31289ze3ze5zz__rgc_setz00(obj_t, obj_t);
	static obj_t BGl_z62rgcsetzd2orz12za2zz__rgc_setz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(obj_t, long);
	static obj_t BGl_z62rgcsetzd2addz12za2zz__rgc_setz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_rgcsetzd2orzd2zz__rgc_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_rgcsetzd2lengthzd2zz__rgc_setz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2ze3listzd2envze3zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2za7e3l1875za7,
		BGl_z62rgcsetzd2ze3listz53zz__rgc_setz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2ze3hashzd2envze3zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2za7e3h1876za7,
		BGl_z62rgcsetzd2ze3hashz53zz__rgc_setz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2removez12zd2envz12zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2remo1877z00,
		BGl_z62rgcsetzd2removez12za2zz__rgc_setz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3rgcsetzd2envze3zz__rgc_setz00,
		BgL_bgl_za762listza7d2za7e3rgc1878za7,
		BGl_z62listzd2ze3rgcsetz53zz__rgc_setz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_forzd2eachzd2rgcsetzd2envzd2zz__rgc_setz00,
		BgL_bgl_za762forza7d2eachza7d21879za7,
		BGl_z62forzd2eachzd2rgcsetz62zz__rgc_setz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2memberzf3zd2envzf3zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2memb1880z00,
		BGl_z62rgcsetzd2memberzf3z43zz__rgc_setz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rgcsetzd2envz00zz__rgc_setz00,
		BgL_bgl_za762makeza7d2rgcset1881z00, BGl_z62makezd2rgcsetzb0zz__rgc_setz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2andz12zd2envz12zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2andza71882za7,
		BGl_z62rgcsetzd2andz12za2zz__rgc_setz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2butz12zd2envz12zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2butza71883za7,
		BGl_z62rgcsetzd2butz12za2zz__rgc_setz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2notzd2envz00zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2notza71884za7, BGl_z62rgcsetzd2notzb0zz__rgc_setz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2addz12zd2envz12zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2addza71885za7,
		BGl_z62rgcsetzd2addz12za2zz__rgc_setz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1864z00zz__rgc_setz00,
		BgL_bgl_string1864za700za7za7_1886za7, "__rgcset", 8);
	      DEFINE_STRING(BGl_string1865z00zz__rgc_setz00,
		BgL_bgl_string1865za700za7za7_1887za7, "/tmp/4.4a/runtime/Rgc/rgcset.scm",
		32);
	      DEFINE_STRING(BGl_string1866z00zz__rgc_setz00,
		BgL_bgl_string1866za700za7za7_1888za7, "&make-rgcset", 12);
	      DEFINE_STRING(BGl_string1867z00zz__rgc_setz00,
		BgL_bgl_string1867za700za7za7_1889za7, "bint", 4);
	      DEFINE_STRING(BGl_string1868z00zz__rgc_setz00,
		BgL_bgl_string1868za700za7za7_1890za7, "&rgcset-add!", 12);
	      DEFINE_STRING(BGl_string1869z00zz__rgc_setz00,
		BgL_bgl_string1869za700za7za7_1891za7, "&rgcset-member?", 15);
	      DEFINE_STRING(BGl_string1870z00zz__rgc_setz00,
		BgL_bgl_string1870za700za7za7_1892za7, "&list->rgcset", 13);
	      DEFINE_STRING(BGl_string1871z00zz__rgc_setz00,
		BgL_bgl_string1871za700za7za7_1893za7, "&for-each-rgcset", 16);
	      DEFINE_STRING(BGl_string1872z00zz__rgc_setz00,
		BgL_bgl_string1872za700za7za7_1894za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1873z00zz__rgc_setz00,
		BgL_bgl_string1873za700za7za7_1895za7, "&rgcset-remove!", 15);
	      DEFINE_STRING(BGl_string1874z00zz__rgc_setz00,
		BgL_bgl_string1874za700za7za7_1896za7, "__rgc_set", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2orzd2envz00zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2orza7b1897za7, BGl_z62rgcsetzd2orzb0zz__rgc_setz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2orz12zd2envz12zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2orza711898za7,
		BGl_z62rgcsetzd2orz12za2zz__rgc_setz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2lengthzd2envz00zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2leng1899z00,
		BGl_z62rgcsetzd2lengthzb0zz__rgc_setz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2equalzf3zd2envzf3zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2equa1900z00,
		BGl_z62rgcsetzd2equalzf3z43zz__rgc_setz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rgcsetzd2notz12zd2envz12zz__rgc_setz00,
		BgL_bgl_za762rgcsetza7d2notza71901za7,
		BGl_z62rgcsetzd2notz12za2zz__rgc_setz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__rgc_setz00));
		     ADD_ROOT((void *) (&BGl_symbol1863z00zz__rgc_setz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__rgc_setz00(long
		BgL_checksumz00_2791, char *BgL_fromz00_2792)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__rgc_setz00))
				{
					BGl_requirezd2initializa7ationz75zz__rgc_setz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__rgc_setz00();
					BGl_cnstzd2initzd2zz__rgc_setz00();
					BGl_importedzd2moduleszd2initz00zz__rgc_setz00();
					return BGl_toplevelzd2initzd2zz__rgc_setz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__rgc_setz00()
	{
		{	/* Rgc/rgcset.scm 15 */
			return (BGl_symbol1863z00zz__rgc_setz00 =
				bstring_to_symbol(BGl_string1864z00zz__rgc_setz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__rgc_setz00()
	{
		{	/* Rgc/rgcset.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__rgc_setz00()
	{
		{	/* Rgc/rgcset.scm 15 */
			BGl_bitzd2perzd2wordz00zz__rgc_setz00 = (BGL_INT_BIT_SIZE - ((long) 1));
			return BUNSPEC;
		}

	}



/* make-rgcset */
	BGL_EXPORTED_DEF obj_t BGl_makezd2rgcsetzd2zz__rgc_setz00(long
		BgL_siza7eza7_13)
	{
		{	/* Rgc/rgcset.scm 84 */
			{	/* Rgc/rgcset.scm 85 */
				obj_t BgL_arg1216z00_1783;

				{	/* Rgc/rgcset.scm 85 */
					long BgL_arg1221z00_1784;

					{	/* Rgc/rgcset.scm 85 */
						obj_t BgL_tmpz00_2803;

						{	/* Rgc/rgcset.scm 85 */
							obj_t BgL_auxz00_2804;

							{	/* Rgc/rgcset.scm 85 */
								long BgL_za72za7_1787;

								BgL_za72za7_1787 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
								BgL_auxz00_2804 = BINT((BgL_siza7eza7_13 / BgL_za72za7_1787));
							}
							BgL_tmpz00_2803 =
								BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
								BgL_auxz00_2804);
						}
						BgL_arg1221z00_1784 = (long) CINT(BgL_tmpz00_2803);
					}
					BgL_arg1216z00_1783 =
						make_vector(BgL_arg1221z00_1784, BINT(((long) 0)));
				}
				{	/* Rgc/rgcset.scm 79 */
					obj_t BgL_newz00_1789;

					BgL_newz00_1789 =
						create_struct(BGl_symbol1863z00zz__rgc_setz00, (int) (((long) 2)));
					{	/* Rgc/rgcset.scm 79 */
						int BgL_tmpz00_2814;

						BgL_tmpz00_2814 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_1789, BgL_tmpz00_2814, BgL_arg1216z00_1783);
					}
					{	/* Rgc/rgcset.scm 79 */
						obj_t BgL_auxz00_2819;
						int BgL_tmpz00_2817;

						BgL_auxz00_2819 = BINT(BgL_siza7eza7_13);
						BgL_tmpz00_2817 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_1789, BgL_tmpz00_2817, BgL_auxz00_2819);
					}
					return BgL_newz00_1789;
				}
			}
		}

	}



/* &make-rgcset */
	obj_t BGl_z62makezd2rgcsetzb0zz__rgc_setz00(obj_t BgL_envz00_2727,
		obj_t BgL_siza7eza7_2728)
	{
		{	/* Rgc/rgcset.scm 84 */
			{	/* Rgc/rgcset.scm 85 */
				long BgL_auxz00_2822;

				{	/* Rgc/rgcset.scm 85 */
					obj_t BgL_tmpz00_2823;

					if (INTEGERP(BgL_siza7eza7_2728))
						{	/* Rgc/rgcset.scm 85 */
							BgL_tmpz00_2823 = BgL_siza7eza7_2728;
						}
					else
						{
							obj_t BgL_auxz00_2826;

							BgL_auxz00_2826 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1865z00zz__rgc_setz00,
								BINT(((long) 3279)), BGl_string1866z00zz__rgc_setz00,
								BGl_string1867z00zz__rgc_setz00, BgL_siza7eza7_2728);
							FAILURE(BgL_auxz00_2826, BFALSE, BFALSE);
						}
					BgL_auxz00_2822 = (long) CINT(BgL_tmpz00_2823);
				}
				return BGl_makezd2rgcsetzd2zz__rgc_setz00(BgL_auxz00_2822);
			}
		}

	}



/* rgcset-add! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2addz12zc0zz__rgc_setz00(obj_t
		BgL_rgcsetz00_20, long BgL_numz00_21)
	{
		{	/* Rgc/rgcset.scm 108 */
			{	/* Rgc/rgcset.scm 109 */
				long BgL_wordzd2numzd2_1803;

				BgL_wordzd2numzd2_1803 =
					(BgL_numz00_21 / BGl_bitzd2perzd2wordz00zz__rgc_setz00);
				{	/* Rgc/rgcset.scm 109 */
					long BgL_wordzd2bitzd2_1804;

					{	/* Rgc/rgcset.scm 110 */
						long BgL_res1702z00_1829;

						{	/* Rgc/rgcset.scm 110 */
							long BgL_n1z00_1811;
							long BgL_n2z00_1812;

							BgL_n1z00_1811 = BgL_numz00_21;
							BgL_n2z00_1812 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
							{	/* Rgc/rgcset.scm 110 */
								bool_t BgL_test1904z00_2833;

								{	/* Rgc/rgcset.scm 110 */
									long BgL_arg1535z00_1814;

									BgL_arg1535z00_1814 =
										(((BgL_n1z00_1811) | (BgL_n2z00_1812)) & -2147483648);
									BgL_test1904z00_2833 = (BgL_arg1535z00_1814 == ((long) 0));
								}
								if (BgL_test1904z00_2833)
									{	/* Rgc/rgcset.scm 110 */
										int32_t BgL_arg1532z00_1815;

										{	/* Rgc/rgcset.scm 110 */
											int32_t BgL_arg1533z00_1816;
											int32_t BgL_arg1534z00_1817;

											{	/* Rgc/rgcset.scm 110 */
												int32_t BgL_res1698z00_1821;

												BgL_res1698z00_1821 = (int32_t) (BgL_n1z00_1811);
												BgL_arg1533z00_1816 = BgL_res1698z00_1821;
											}
											{	/* Rgc/rgcset.scm 110 */
												int32_t BgL_res1699z00_1823;

												BgL_res1699z00_1823 = (int32_t) (BgL_n2z00_1812);
												BgL_arg1534z00_1817 = BgL_res1699z00_1823;
											}
											BgL_arg1532z00_1815 =
												(BgL_arg1533z00_1816 % BgL_arg1534z00_1817);
										}
										{	/* Rgc/rgcset.scm 110 */
											long BgL_res1701z00_1828;

											{	/* Rgc/rgcset.scm 110 */
												long BgL_arg1651z00_1825;

												BgL_arg1651z00_1825 = (long) (BgL_arg1532z00_1815);
												{	/* Rgc/rgcset.scm 110 */
													long BgL_res1700z00_1827;

													BgL_res1700z00_1827 = (long) (BgL_arg1651z00_1825);
													BgL_res1701z00_1828 = BgL_res1700z00_1827;
											}}
											BgL_res1702z00_1829 = BgL_res1701z00_1828;
									}}
								else
									{	/* Rgc/rgcset.scm 110 */
										BgL_res1702z00_1829 = (BgL_n1z00_1811 % BgL_n2z00_1812);
									}
							}
						}
						BgL_wordzd2bitzd2_1804 = BgL_res1702z00_1829;
					}
					{	/* Rgc/rgcset.scm 110 */
						obj_t BgL_oldz00_1805;

						{	/* Rgc/rgcset.scm 97 */
							obj_t BgL_arg1227z00_1830;

							BgL_arg1227z00_1830 =
								STRUCT_REF(((obj_t) BgL_rgcsetz00_20), (int) (((long) 1)));
							BgL_oldz00_1805 =
								VECTOR_REF(
								((obj_t) BgL_arg1227z00_1830), BgL_wordzd2numzd2_1803);
						}
						{	/* Rgc/rgcset.scm 111 */

							{	/* Rgc/rgcset.scm 114 */
								long BgL_arg1232z00_1806;

								BgL_arg1232z00_1806 =
									(
									(long) CINT(BgL_oldz00_1805) |
									(((long) 1) << (int) (BgL_wordzd2bitzd2_1804)));
								{	/* Rgc/rgcset.scm 91 */
									obj_t BgL_arg1225z00_1839;

									BgL_arg1225z00_1839 =
										STRUCT_REF(((obj_t) BgL_rgcsetz00_20), (int) (((long) 1)));
									return
										VECTOR_SET(
										((obj_t) BgL_arg1225z00_1839), BgL_wordzd2numzd2_1803,
										BINT(BgL_arg1232z00_1806));
								}
							}
						}
					}
				}
			}
		}

	}



/* &rgcset-add! */
	obj_t BGl_z62rgcsetzd2addz12za2zz__rgc_setz00(obj_t BgL_envz00_2729,
		obj_t BgL_rgcsetz00_2730, obj_t BgL_numz00_2731)
	{
		{	/* Rgc/rgcset.scm 108 */
			{	/* Rgc/rgcset.scm 109 */
				long BgL_auxz00_2857;

				{	/* Rgc/rgcset.scm 109 */
					obj_t BgL_tmpz00_2858;

					if (INTEGERP(BgL_numz00_2731))
						{	/* Rgc/rgcset.scm 109 */
							BgL_tmpz00_2858 = BgL_numz00_2731;
						}
					else
						{
							obj_t BgL_auxz00_2861;

							BgL_auxz00_2861 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1865z00zz__rgc_setz00,
								BINT(((long) 4509)), BGl_string1868z00zz__rgc_setz00,
								BGl_string1867z00zz__rgc_setz00, BgL_numz00_2731);
							FAILURE(BgL_auxz00_2861, BFALSE, BFALSE);
						}
					BgL_auxz00_2857 = (long) CINT(BgL_tmpz00_2858);
				}
				return
					BGl_rgcsetzd2addz12zc0zz__rgc_setz00(BgL_rgcsetz00_2730,
					BgL_auxz00_2857);
			}
		}

	}



/* rgcset-member? */
	BGL_EXPORTED_DEF bool_t BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(obj_t
		BgL_setz00_22, long BgL_numz00_23)
	{
		{	/* Rgc/rgcset.scm 119 */
			{	/* Rgc/rgcset.scm 120 */
				long BgL_wordzd2numzd2_1843;

				BgL_wordzd2numzd2_1843 =
					(BgL_numz00_23 / BGl_bitzd2perzd2wordz00zz__rgc_setz00);
				{	/* Rgc/rgcset.scm 120 */
					long BgL_wordzd2bitzd2_1844;

					{	/* Rgc/rgcset.scm 121 */
						long BgL_res1711z00_1869;

						{	/* Rgc/rgcset.scm 121 */
							long BgL_n1z00_1851;
							long BgL_n2z00_1852;

							BgL_n1z00_1851 = BgL_numz00_23;
							BgL_n2z00_1852 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
							{	/* Rgc/rgcset.scm 121 */
								bool_t BgL_test1906z00_2868;

								{	/* Rgc/rgcset.scm 121 */
									long BgL_arg1535z00_1854;

									BgL_arg1535z00_1854 =
										(((BgL_n1z00_1851) | (BgL_n2z00_1852)) & -2147483648);
									BgL_test1906z00_2868 = (BgL_arg1535z00_1854 == ((long) 0));
								}
								if (BgL_test1906z00_2868)
									{	/* Rgc/rgcset.scm 121 */
										int32_t BgL_arg1532z00_1855;

										{	/* Rgc/rgcset.scm 121 */
											int32_t BgL_arg1533z00_1856;
											int32_t BgL_arg1534z00_1857;

											{	/* Rgc/rgcset.scm 121 */
												int32_t BgL_res1707z00_1861;

												BgL_res1707z00_1861 = (int32_t) (BgL_n1z00_1851);
												BgL_arg1533z00_1856 = BgL_res1707z00_1861;
											}
											{	/* Rgc/rgcset.scm 121 */
												int32_t BgL_res1708z00_1863;

												BgL_res1708z00_1863 = (int32_t) (BgL_n2z00_1852);
												BgL_arg1534z00_1857 = BgL_res1708z00_1863;
											}
											BgL_arg1532z00_1855 =
												(BgL_arg1533z00_1856 % BgL_arg1534z00_1857);
										}
										{	/* Rgc/rgcset.scm 121 */
											long BgL_res1710z00_1868;

											{	/* Rgc/rgcset.scm 121 */
												long BgL_arg1651z00_1865;

												BgL_arg1651z00_1865 = (long) (BgL_arg1532z00_1855);
												{	/* Rgc/rgcset.scm 121 */
													long BgL_res1709z00_1867;

													BgL_res1709z00_1867 = (long) (BgL_arg1651z00_1865);
													BgL_res1710z00_1868 = BgL_res1709z00_1867;
											}}
											BgL_res1711z00_1869 = BgL_res1710z00_1868;
									}}
								else
									{	/* Rgc/rgcset.scm 121 */
										BgL_res1711z00_1869 = (BgL_n1z00_1851 % BgL_n2z00_1852);
									}
							}
						}
						BgL_wordzd2bitzd2_1844 = BgL_res1711z00_1869;
					}
					{	/* Rgc/rgcset.scm 121 */
						obj_t BgL_oldz00_1845;

						{	/* Rgc/rgcset.scm 97 */
							obj_t BgL_arg1227z00_1870;

							BgL_arg1227z00_1870 =
								STRUCT_REF(((obj_t) BgL_setz00_22), (int) (((long) 1)));
							BgL_oldz00_1845 =
								VECTOR_REF(
								((obj_t) BgL_arg1227z00_1870), BgL_wordzd2numzd2_1843);
						}
						{	/* Rgc/rgcset.scm 122 */
							long BgL_maskz00_1846;

							BgL_maskz00_1846 = (((long) 1) << (int) (BgL_wordzd2bitzd2_1844));
							{	/* Rgc/rgcset.scm 123 */

								return
									(BgL_maskz00_1846 ==
									((long) CINT(BgL_oldz00_1845) & BgL_maskz00_1846));
		}}}}}}

	}



/* &rgcset-member? */
	obj_t BGl_z62rgcsetzd2memberzf3z43zz__rgc_setz00(obj_t BgL_envz00_2732,
		obj_t BgL_setz00_2733, obj_t BgL_numz00_2734)
	{
		{	/* Rgc/rgcset.scm 119 */
			{	/* Rgc/rgcset.scm 120 */
				bool_t BgL_tmpz00_2887;

				{	/* Rgc/rgcset.scm 120 */
					long BgL_auxz00_2888;

					{	/* Rgc/rgcset.scm 120 */
						obj_t BgL_tmpz00_2889;

						if (INTEGERP(BgL_numz00_2734))
							{	/* Rgc/rgcset.scm 120 */
								BgL_tmpz00_2889 = BgL_numz00_2734;
							}
						else
							{
								obj_t BgL_auxz00_2892;

								BgL_auxz00_2892 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string1865z00zz__rgc_setz00, BINT(((long) 4992)),
									BGl_string1869z00zz__rgc_setz00,
									BGl_string1867z00zz__rgc_setz00, BgL_numz00_2734);
								FAILURE(BgL_auxz00_2892, BFALSE, BFALSE);
							}
						BgL_auxz00_2888 = (long) CINT(BgL_tmpz00_2889);
					}
					BgL_tmpz00_2887 =
						BGl_rgcsetzd2memberzf3z21zz__rgc_setz00(BgL_setz00_2733,
						BgL_auxz00_2888);
				}
				return BBOOL(BgL_tmpz00_2887);
			}
		}

	}



/* list->rgcset */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3rgcsetz31zz__rgc_setz00(obj_t
		BgL_lstz00_24, long BgL_maxz00_25)
	{
		{	/* Rgc/rgcset.scm 129 */
			{	/* Rgc/rgcset.scm 130 */
				obj_t BgL_setz00_1882;

				{	/* Rgc/rgcset.scm 85 */
					obj_t BgL_arg1216z00_1889;

					{	/* Rgc/rgcset.scm 85 */
						long BgL_arg1221z00_1890;

						{	/* Rgc/rgcset.scm 85 */
							obj_t BgL_tmpz00_2899;

							{	/* Rgc/rgcset.scm 85 */
								obj_t BgL_auxz00_2900;

								{	/* Rgc/rgcset.scm 85 */
									long BgL_za72za7_1893;

									BgL_za72za7_1893 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
									BgL_auxz00_2900 = BINT((BgL_maxz00_25 / BgL_za72za7_1893));
								}
								BgL_tmpz00_2899 =
									BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
									BgL_auxz00_2900);
							}
							BgL_arg1221z00_1890 = (long) CINT(BgL_tmpz00_2899);
						}
						BgL_arg1216z00_1889 =
							make_vector(BgL_arg1221z00_1890, BINT(((long) 0)));
					}
					{	/* Rgc/rgcset.scm 79 */
						obj_t BgL_newz00_1895;

						BgL_newz00_1895 =
							create_struct(BGl_symbol1863z00zz__rgc_setz00,
							(int) (((long) 2)));
						{	/* Rgc/rgcset.scm 79 */
							int BgL_tmpz00_2910;

							BgL_tmpz00_2910 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_1895, BgL_tmpz00_2910, BgL_arg1216z00_1889);
						}
						{	/* Rgc/rgcset.scm 79 */
							obj_t BgL_auxz00_2915;
							int BgL_tmpz00_2913;

							BgL_auxz00_2915 = BINT(BgL_maxz00_25);
							BgL_tmpz00_2913 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_1895, BgL_tmpz00_2913, BgL_auxz00_2915);
						}
						BgL_setz00_1882 = BgL_newz00_1895;
				}}
				{
					obj_t BgL_l1089z00_1952;

					BgL_l1089z00_1952 = BgL_lstz00_24;
				BgL_zc3z04anonymousza31243ze3z87_1951:
					if (PAIRP(BgL_l1089z00_1952))
						{	/* Rgc/rgcset.scm 131 */
							{	/* Rgc/rgcset.scm 131 */
								obj_t BgL_itemz00_1957;

								BgL_itemz00_1957 = CAR(BgL_l1089z00_1952);
								BGl_rgcsetzd2addz12zc0zz__rgc_setz00(BgL_setz00_1882,
									(long) CINT(BgL_itemz00_1957));
							}
							{
								obj_t BgL_l1089z00_2923;

								BgL_l1089z00_2923 = CDR(BgL_l1089z00_1952);
								BgL_l1089z00_1952 = BgL_l1089z00_2923;
								goto BgL_zc3z04anonymousza31243ze3z87_1951;
							}
						}
					else
						{	/* Rgc/rgcset.scm 131 */
							((bool_t) 1);
						}
				}
				return BgL_setz00_1882;
			}
		}

	}



/* &list->rgcset */
	obj_t BGl_z62listzd2ze3rgcsetz53zz__rgc_setz00(obj_t BgL_envz00_2735,
		obj_t BgL_lstz00_2736, obj_t BgL_maxz00_2737)
	{
		{	/* Rgc/rgcset.scm 129 */
			{	/* Rgc/rgcset.scm 130 */
				long BgL_auxz00_2925;

				{	/* Rgc/rgcset.scm 130 */
					obj_t BgL_tmpz00_2926;

					if (INTEGERP(BgL_maxz00_2737))
						{	/* Rgc/rgcset.scm 130 */
							BgL_tmpz00_2926 = BgL_maxz00_2737;
						}
					else
						{
							obj_t BgL_auxz00_2929;

							BgL_auxz00_2929 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1865z00zz__rgc_setz00,
								BINT(((long) 5454)), BGl_string1870z00zz__rgc_setz00,
								BGl_string1867z00zz__rgc_setz00, BgL_maxz00_2737);
							FAILURE(BgL_auxz00_2929, BFALSE, BFALSE);
						}
					BgL_auxz00_2925 = (long) CINT(BgL_tmpz00_2926);
				}
				return
					BGl_listzd2ze3rgcsetz31zz__rgc_setz00(BgL_lstz00_2736,
					BgL_auxz00_2925);
			}
		}

	}



/* rgcset->list */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2ze3listz31zz__rgc_setz00(obj_t
		BgL_setz00_26)
	{
		{	/* Rgc/rgcset.scm 137 */
			{	/* Rgc/rgcset.scm 138 */
				obj_t BgL_maxz00_1197;
				long BgL_maxmaskz00_1198;

				BgL_maxz00_1197 =
					STRUCT_REF(((obj_t) BgL_setz00_26), (int) (((long) 0)));
				{	/* Rgc/rgcset.scm 139 */
					long BgL_yz00_1963;

					BgL_yz00_1963 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
					BgL_maxmaskz00_1198 = (((long) 1) << (int) (BgL_yz00_1963));
				}
				{	/* Rgc/rgcset.scm 140 */
					obj_t BgL_g1039z00_1199;

					{	/* Rgc/rgcset.scm 97 */
						obj_t BgL_arg1227z00_1965;

						BgL_arg1227z00_1965 =
							STRUCT_REF(((obj_t) BgL_setz00_26), (int) (((long) 1)));
						BgL_g1039z00_1199 =
							VECTOR_REF(((obj_t) BgL_arg1227z00_1965), ((long) 0));
					}
					{
						long BgL_iz00_1997;
						long BgL_wordzd2numzd2_1998;
						obj_t BgL_wordz00_1999;
						long BgL_maskz00_2000;
						obj_t BgL_resz00_2001;

						BgL_iz00_1997 = ((long) 0);
						BgL_wordzd2numzd2_1998 = ((long) 0);
						BgL_wordz00_1999 = BgL_g1039z00_1199;
						BgL_maskz00_2000 = ((long) 1);
						BgL_resz00_2001 = BNIL;
					BgL_loopz00_1996:
						if ((BgL_iz00_1997 == (long) CINT(BgL_maxz00_1197)))
							{	/* Rgc/rgcset.scm 146 */
								return BgL_resz00_2001;
							}
						else
							{	/* Rgc/rgcset.scm 146 */
								if ((BgL_maskz00_2000 == BgL_maxmaskz00_1198))
									{	/* Rgc/rgcset.scm 150 */
										long BgL_arg1250z00_2010;
										obj_t BgL_arg1252z00_2011;

										BgL_arg1250z00_2010 = (BgL_wordzd2numzd2_1998 + ((long) 1));
										{	/* Rgc/rgcset.scm 151 */
											long BgL_arg1253z00_2014;

											BgL_arg1253z00_2014 =
												(BgL_wordzd2numzd2_1998 + ((long) 1));
											{	/* Rgc/rgcset.scm 97 */
												obj_t BgL_arg1227z00_2017;

												BgL_arg1227z00_2017 =
													STRUCT_REF(
													((obj_t) BgL_setz00_26), (int) (((long) 1)));
												BgL_arg1252z00_2011 =
													VECTOR_REF(
													((obj_t) BgL_arg1227z00_2017), BgL_arg1253z00_2014);
										}}
										{
											long BgL_maskz00_2959;
											obj_t BgL_wordz00_2958;
											long BgL_wordzd2numzd2_2957;

											BgL_wordzd2numzd2_2957 = BgL_arg1250z00_2010;
											BgL_wordz00_2958 = BgL_arg1252z00_2011;
											BgL_maskz00_2959 = ((long) 1);
											BgL_maskz00_2000 = BgL_maskz00_2959;
											BgL_wordz00_1999 = BgL_wordz00_2958;
											BgL_wordzd2numzd2_1998 = BgL_wordzd2numzd2_2957;
											goto BgL_loopz00_1996;
										}
									}
								else
									{	/* Rgc/rgcset.scm 148 */
										if (
											(((long) CINT(BgL_wordz00_1999) & BgL_maskz00_2000) ==
												BgL_maskz00_2000))
											{	/* Rgc/rgcset.scm 155 */
												long BgL_arg1256z00_2029;
												long BgL_arg1258z00_2030;
												obj_t BgL_arg1263z00_2031;

												BgL_arg1256z00_2029 = (BgL_iz00_1997 + ((long) 1));
												BgL_arg1258z00_2030 =
													(BgL_maskz00_2000 << (int) (((long) 1)));
												BgL_arg1263z00_2031 =
													MAKE_YOUNG_PAIR(BINT(BgL_iz00_1997), BgL_resz00_2001);
												{
													obj_t BgL_resz00_2971;
													long BgL_maskz00_2970;
													long BgL_iz00_2969;

													BgL_iz00_2969 = BgL_arg1256z00_2029;
													BgL_maskz00_2970 = BgL_arg1258z00_2030;
													BgL_resz00_2971 = BgL_arg1263z00_2031;
													BgL_resz00_2001 = BgL_resz00_2971;
													BgL_maskz00_2000 = BgL_maskz00_2970;
													BgL_iz00_1997 = BgL_iz00_2969;
													goto BgL_loopz00_1996;
												}
											}
										else
											{
												long BgL_maskz00_2974;
												long BgL_iz00_2972;

												BgL_iz00_2972 = (BgL_iz00_1997 + ((long) 1));
												BgL_maskz00_2974 =
													(BgL_maskz00_2000 << (int) (((long) 1)));
												BgL_maskz00_2000 = BgL_maskz00_2974;
												BgL_iz00_1997 = BgL_iz00_2972;
												goto BgL_loopz00_1996;
											}
									}
							}
					}
				}
			}
		}

	}



/* &rgcset->list */
	obj_t BGl_z62rgcsetzd2ze3listz53zz__rgc_setz00(obj_t BgL_envz00_2738,
		obj_t BgL_setz00_2739)
	{
		{	/* Rgc/rgcset.scm 137 */
			return BGl_rgcsetzd2ze3listz31zz__rgc_setz00(BgL_setz00_2739);
		}

	}



/* for-each-rgcset */
	BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00(obj_t
		BgL_procz00_27, obj_t BgL_setz00_28)
	{
		{	/* Rgc/rgcset.scm 162 */
			{	/* Rgc/rgcset.scm 163 */
				obj_t BgL_maxz00_1222;
				long BgL_maxmaskz00_1223;

				BgL_maxz00_1222 =
					STRUCT_REF(((obj_t) BgL_setz00_28), (int) (((long) 0)));
				{	/* Rgc/rgcset.scm 164 */
					long BgL_yz00_2043;

					BgL_yz00_2043 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
					BgL_maxmaskz00_1223 = (((long) 1) << (int) (BgL_yz00_2043));
				}
				{	/* Rgc/rgcset.scm 165 */
					obj_t BgL_g1041z00_1224;

					{	/* Rgc/rgcset.scm 97 */
						obj_t BgL_arg1227z00_2045;

						BgL_arg1227z00_2045 =
							STRUCT_REF(((obj_t) BgL_setz00_28), (int) (((long) 1)));
						BgL_g1041z00_1224 =
							VECTOR_REF(((obj_t) BgL_arg1227z00_2045), ((long) 0));
					}
					{
						long BgL_iz00_2077;
						long BgL_wordzd2numzd2_2078;
						obj_t BgL_wordz00_2079;
						long BgL_maskz00_2080;

						BgL_iz00_2077 = ((long) 0);
						BgL_wordzd2numzd2_2078 = ((long) 0);
						BgL_wordz00_2079 = BgL_g1041z00_1224;
						BgL_maskz00_2080 = ((long) 1);
					BgL_loopz00_2076:
						if ((BgL_iz00_2077 == (long) CINT(BgL_maxz00_1222)))
							{	/* Rgc/rgcset.scm 170 */
								return BUNSPEC;
							}
						else
							{	/* Rgc/rgcset.scm 170 */
								if ((BgL_maskz00_2080 == BgL_maxmaskz00_1223))
									{	/* Rgc/rgcset.scm 174 */
										long BgL_arg1275z00_2089;
										obj_t BgL_arg1276z00_2090;

										BgL_arg1275z00_2089 = (BgL_wordzd2numzd2_2078 + ((long) 1));
										{	/* Rgc/rgcset.scm 175 */
											long BgL_arg1277z00_2093;

											BgL_arg1277z00_2093 =
												(BgL_wordzd2numzd2_2078 + ((long) 1));
											{	/* Rgc/rgcset.scm 97 */
												obj_t BgL_arg1227z00_2096;

												BgL_arg1227z00_2096 =
													STRUCT_REF(
													((obj_t) BgL_setz00_28), (int) (((long) 1)));
												BgL_arg1276z00_2090 =
													VECTOR_REF(
													((obj_t) BgL_arg1227z00_2096), BgL_arg1277z00_2093);
										}}
										{
											long BgL_maskz00_3002;
											obj_t BgL_wordz00_3001;
											long BgL_wordzd2numzd2_3000;

											BgL_wordzd2numzd2_3000 = BgL_arg1275z00_2089;
											BgL_wordz00_3001 = BgL_arg1276z00_2090;
											BgL_maskz00_3002 = ((long) 1);
											BgL_maskz00_2080 = BgL_maskz00_3002;
											BgL_wordz00_2079 = BgL_wordz00_3001;
											BgL_wordzd2numzd2_2078 = BgL_wordzd2numzd2_3000;
											goto BgL_loopz00_2076;
										}
									}
								else
									{	/* Rgc/rgcset.scm 172 */
										if (
											(((long) CINT(BgL_wordz00_2079) & BgL_maskz00_2080) ==
												BgL_maskz00_2080))
											{	/* Rgc/rgcset.scm 177 */
												PROCEDURE_ENTRY(BgL_procz00_27) (BgL_procz00_27,
													BINT(BgL_iz00_2077), BEOA);
												{
													long BgL_maskz00_3014;
													long BgL_iz00_3012;

													BgL_iz00_3012 = (BgL_iz00_2077 + ((long) 1));
													BgL_maskz00_3014 =
														(BgL_maskz00_2080 << (int) (((long) 1)));
													BgL_maskz00_2080 = BgL_maskz00_3014;
													BgL_iz00_2077 = BgL_iz00_3012;
													goto BgL_loopz00_2076;
												}
											}
										else
											{
												long BgL_maskz00_3019;
												long BgL_iz00_3017;

												BgL_iz00_3017 = (BgL_iz00_2077 + ((long) 1));
												BgL_maskz00_3019 =
													(BgL_maskz00_2080 << (int) (((long) 1)));
												BgL_maskz00_2080 = BgL_maskz00_3019;
												BgL_iz00_2077 = BgL_iz00_3017;
												goto BgL_loopz00_2076;
											}
									}
							}
					}
				}
			}
		}

	}



/* &for-each-rgcset */
	obj_t BGl_z62forzd2eachzd2rgcsetz62zz__rgc_setz00(obj_t BgL_envz00_2740,
		obj_t BgL_procz00_2741, obj_t BgL_setz00_2742)
	{
		{	/* Rgc/rgcset.scm 162 */
			{	/* Rgc/rgcset.scm 163 */
				obj_t BgL_auxz00_3022;

				if (PROCEDUREP(BgL_procz00_2741))
					{	/* Rgc/rgcset.scm 163 */
						BgL_auxz00_3022 = BgL_procz00_2741;
					}
				else
					{
						obj_t BgL_auxz00_3025;

						BgL_auxz00_3025 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1865z00zz__rgc_setz00,
							BINT(((long) 6606)), BGl_string1871z00zz__rgc_setz00,
							BGl_string1872z00zz__rgc_setz00, BgL_procz00_2741);
						FAILURE(BgL_auxz00_3025, BFALSE, BFALSE);
					}
				return
					BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00(BgL_auxz00_3022,
					BgL_setz00_2742);
			}
		}

	}



/* rgcset-length */
	BGL_EXPORTED_DEF long BGl_rgcsetzd2lengthzd2zz__rgc_setz00(obj_t
		BgL_setz00_29)
	{
		{	/* Rgc/rgcset.scm 188 */
			{	/* Rgc/rgcset.scm 189 */
				obj_t BgL_numz00_2750;

				BgL_numz00_2750 = MAKE_CELL(BINT(((long) 0)));
				{	/* Rgc/rgcset.scm 190 */
					obj_t BgL_zc3z04anonymousza31289ze3z87_2743;

					BgL_zc3z04anonymousza31289ze3z87_2743 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31289ze3ze5zz__rgc_setz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31289ze3z87_2743,
						(int) (((long) 0)), ((obj_t) BgL_numz00_2750));
					BGl_forzd2eachzd2rgcsetz00zz__rgc_setz00
						(BgL_zc3z04anonymousza31289ze3z87_2743, BgL_setz00_29);
				}
				return (long) CINT(CELL_REF(BgL_numz00_2750));
		}}

	}



/* &rgcset-length */
	obj_t BGl_z62rgcsetzd2lengthzb0zz__rgc_setz00(obj_t BgL_envz00_2744,
		obj_t BgL_setz00_2745)
	{
		{	/* Rgc/rgcset.scm 188 */
			return BINT(BGl_rgcsetzd2lengthzd2zz__rgc_setz00(BgL_setz00_2745));
		}

	}



/* &<@anonymous:1289> */
	obj_t BGl_z62zc3z04anonymousza31289ze3ze5zz__rgc_setz00(obj_t BgL_envz00_2746,
		obj_t BgL_xz00_2748)
	{
		{	/* Rgc/rgcset.scm 190 */
			{	/* Rgc/rgcset.scm 190 */
				obj_t BgL_numz00_2747;

				BgL_numz00_2747 = PROCEDURE_REF(BgL_envz00_2746, (int) (((long) 0)));
				{	/* Rgc/rgcset.scm 190 */
					obj_t BgL_auxz00_2790;

					BgL_auxz00_2790 = ADDFX(BINT(((long) 1)), CELL_REF(BgL_numz00_2747));
					return CELL_SET(BgL_numz00_2747, BgL_auxz00_2790);
				}
			}
		}

	}



/* rgcset-not! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2notz12zc0zz__rgc_setz00(obj_t
		BgL_setz00_30)
	{
		{	/* Rgc/rgcset.scm 196 */
			{	/* Rgc/rgcset.scm 198 */
				long BgL_lenz00_1249;

				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2125;

					BgL_arg1229z00_2125 =
						STRUCT_REF(((obj_t) BgL_setz00_30), (int) (((long) 1)));
					BgL_lenz00_1249 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2125));
				}
				{
					long BgL_iz00_2141;

					{	/* Rgc/rgcset.scm 199 */
						bool_t BgL_tmpz00_3050;

						BgL_iz00_2141 = ((long) 0);
					BgL_loopz00_2140:
						if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_2141),
								BINT(BgL_lenz00_1249)))
							{	/* Rgc/rgcset.scm 200 */
								{	/* Rgc/rgcset.scm 202 */
									long BgL_arg1292z00_2143;

									{	/* Rgc/rgcset.scm 202 */
										obj_t BgL_arg1295z00_2144;

										{	/* Rgc/rgcset.scm 97 */
											obj_t BgL_arg1227z00_2145;

											BgL_arg1227z00_2145 =
												STRUCT_REF(((obj_t) BgL_setz00_30), (int) (((long) 1)));
											BgL_arg1295z00_2144 =
												VECTOR_REF(
												((obj_t) BgL_arg1227z00_2145), BgL_iz00_2141);
										}
										BgL_arg1292z00_2143 = ~((long) CINT(BgL_arg1295z00_2144));
									}
									{	/* Rgc/rgcset.scm 91 */
										obj_t BgL_arg1225z00_2151;

										BgL_arg1225z00_2151 =
											STRUCT_REF(((obj_t) BgL_setz00_30), (int) (((long) 1)));
										VECTOR_SET(
											((obj_t) BgL_arg1225z00_2151), BgL_iz00_2141,
											BINT(BgL_arg1292z00_2143));
								}}
								{
									long BgL_iz00_3068;

									BgL_iz00_3068 = (BgL_iz00_2141 + ((long) 1));
									BgL_iz00_2141 = BgL_iz00_3068;
									goto BgL_loopz00_2140;
								}
							}
						else
							{	/* Rgc/rgcset.scm 200 */
								BgL_tmpz00_3050 = ((bool_t) 0);
							}
						return BBOOL(BgL_tmpz00_3050);
					}
				}
			}
		}

	}



/* &rgcset-not! */
	obj_t BGl_z62rgcsetzd2notz12za2zz__rgc_setz00(obj_t BgL_envz00_2752,
		obj_t BgL_setz00_2753)
	{
		{	/* Rgc/rgcset.scm 196 */
			return BGl_rgcsetzd2notz12zc0zz__rgc_setz00(BgL_setz00_2753);
		}

	}



/* rgcset-not */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2notzd2zz__rgc_setz00(obj_t BgL_setz00_31)
	{
		{	/* Rgc/rgcset.scm 208 */
			{	/* Rgc/rgcset.scm 210 */
				long BgL_lenz00_1258;
				obj_t BgL_newz00_1259;

				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2158;

					BgL_arg1229z00_2158 =
						STRUCT_REF(((obj_t) BgL_setz00_31), (int) (((long) 1)));
					BgL_lenz00_1258 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2158));
				}
				{	/* Rgc/rgcset.scm 211 */
					obj_t BgL_arg1302z00_1268;

					BgL_arg1302z00_1268 =
						STRUCT_REF(((obj_t) BgL_setz00_31), (int) (((long) 0)));
					{	/* Rgc/rgcset.scm 211 */
						long BgL_siza7eza7_2162;

						BgL_siza7eza7_2162 = (long) CINT(BgL_arg1302z00_1268);
						{	/* Rgc/rgcset.scm 85 */
							obj_t BgL_arg1216z00_2163;

							{	/* Rgc/rgcset.scm 85 */
								long BgL_arg1221z00_2164;

								{	/* Rgc/rgcset.scm 85 */
									obj_t BgL_tmpz00_3081;

									{	/* Rgc/rgcset.scm 85 */
										obj_t BgL_auxz00_3082;

										{	/* Rgc/rgcset.scm 85 */
											long BgL_za72za7_2167;

											BgL_za72za7_2167 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
											BgL_auxz00_3082 =
												BINT((BgL_siza7eza7_2162 / BgL_za72za7_2167));
										}
										BgL_tmpz00_3081 =
											BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
											BgL_auxz00_3082);
									}
									BgL_arg1221z00_2164 = (long) CINT(BgL_tmpz00_3081);
								}
								BgL_arg1216z00_2163 =
									make_vector(BgL_arg1221z00_2164, BINT(((long) 0)));
							}
							{	/* Rgc/rgcset.scm 79 */
								obj_t BgL_newz00_2169;

								BgL_newz00_2169 =
									create_struct(BGl_symbol1863z00zz__rgc_setz00,
									(int) (((long) 2)));
								{	/* Rgc/rgcset.scm 79 */
									int BgL_tmpz00_3092;

									BgL_tmpz00_3092 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_2169, BgL_tmpz00_3092,
										BgL_arg1216z00_2163);
								}
								{	/* Rgc/rgcset.scm 79 */
									obj_t BgL_auxz00_3097;
									int BgL_tmpz00_3095;

									BgL_auxz00_3097 = BINT(BgL_siza7eza7_2162);
									BgL_tmpz00_3095 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_2169, BgL_tmpz00_3095, BgL_auxz00_3097);
								}
								BgL_newz00_1259 = BgL_newz00_2169;
				}}}}
				{
					long BgL_iz00_2185;

					BgL_iz00_2185 = ((long) 0);
				BgL_loopz00_2184:
					if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_2185),
							BINT(BgL_lenz00_1258)))
						{	/* Rgc/rgcset.scm 213 */
							{	/* Rgc/rgcset.scm 215 */
								long BgL_arg1299z00_2187;

								{	/* Rgc/rgcset.scm 215 */
									obj_t BgL_arg1300z00_2188;

									{	/* Rgc/rgcset.scm 97 */
										obj_t BgL_arg1227z00_2189;

										BgL_arg1227z00_2189 =
											STRUCT_REF(((obj_t) BgL_setz00_31), (int) (((long) 1)));
										BgL_arg1300z00_2188 =
											VECTOR_REF(((obj_t) BgL_arg1227z00_2189), BgL_iz00_2185);
									}
									BgL_arg1299z00_2187 = ~((long) CINT(BgL_arg1300z00_2188));
								}
								{	/* Rgc/rgcset.scm 91 */
									obj_t BgL_arg1225z00_2195;

									BgL_arg1225z00_2195 =
										STRUCT_REF(BgL_newz00_1259, (int) (((long) 1)));
									VECTOR_SET(
										((obj_t) BgL_arg1225z00_2195), BgL_iz00_2185,
										BINT(BgL_arg1299z00_2187));
							}}
							{
								long BgL_iz00_3116;

								BgL_iz00_3116 = (BgL_iz00_2185 + ((long) 1));
								BgL_iz00_2185 = BgL_iz00_3116;
								goto BgL_loopz00_2184;
							}
						}
					else
						{	/* Rgc/rgcset.scm 213 */
							return BgL_newz00_1259;
						}
				}
			}
		}

	}



/* &rgcset-not */
	obj_t BGl_z62rgcsetzd2notzb0zz__rgc_setz00(obj_t BgL_envz00_2754,
		obj_t BgL_setz00_2755)
	{
		{	/* Rgc/rgcset.scm 208 */
			return BGl_rgcsetzd2notzd2zz__rgc_setz00(BgL_setz00_2755);
		}

	}



/* rgcset-and! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2andz12zc0zz__rgc_setz00(obj_t
		BgL_set1z00_32, obj_t BgL_set2z00_33)
	{
		{	/* Rgc/rgcset.scm 222 */
			{	/* Rgc/rgcset.scm 224 */
				long BgL_len1z00_1269;
				long BgL_len2z00_1270;

				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2202;

					BgL_arg1229z00_2202 =
						STRUCT_REF(((obj_t) BgL_set1z00_32), (int) (((long) 1)));
					BgL_len1z00_1269 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2202));
				}
				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2205;

					BgL_arg1229z00_2205 =
						STRUCT_REF(((obj_t) BgL_set2z00_33), (int) (((long) 1)));
					BgL_len2z00_1270 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2205));
				}
				{
					long BgL_iz00_1272;

					{	/* Rgc/rgcset.scm 226 */
						bool_t BgL_tmpz00_3129;

						BgL_iz00_1272 = ((long) 0);
					BgL_zc3z04anonymousza31303ze3z87_1273:
						{	/* Rgc/rgcset.scm 227 */
							bool_t BgL_test1919z00_3130;

							if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1272),
									BINT(BgL_len1z00_1269)))
								{	/* Rgc/rgcset.scm 227 */
									BgL_test1919z00_3130 =
										BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1272),
										BINT(BgL_len2z00_1270));
								}
							else
								{	/* Rgc/rgcset.scm 227 */
									BgL_test1919z00_3130 = ((bool_t) 0);
								}
							if (BgL_test1919z00_3130)
								{	/* Rgc/rgcset.scm 227 */
									{	/* Rgc/rgcset.scm 231 */
										long BgL_arg1306z00_1276;

										{	/* Rgc/rgcset.scm 231 */
											obj_t BgL_arg1307z00_1277;
											obj_t BgL_arg1308z00_1278;

											{	/* Rgc/rgcset.scm 97 */
												obj_t BgL_arg1227z00_2208;

												BgL_arg1227z00_2208 =
													STRUCT_REF(
													((obj_t) BgL_set1z00_32), (int) (((long) 1)));
												BgL_arg1307z00_1277 =
													VECTOR_REF(
													((obj_t) BgL_arg1227z00_2208), BgL_iz00_1272);
											}
											{	/* Rgc/rgcset.scm 97 */
												obj_t BgL_arg1227z00_2212;

												BgL_arg1227z00_2212 =
													STRUCT_REF(
													((obj_t) BgL_set2z00_33), (int) (((long) 1)));
												BgL_arg1308z00_1278 =
													VECTOR_REF(
													((obj_t) BgL_arg1227z00_2212), BgL_iz00_1272);
											}
											BgL_arg1306z00_1276 =
												(
												(long) CINT(BgL_arg1307z00_1277) &
												(long) CINT(BgL_arg1308z00_1278));
										}
										{	/* Rgc/rgcset.scm 91 */
											obj_t BgL_arg1225z00_2219;

											BgL_arg1225z00_2219 =
												STRUCT_REF(
												((obj_t) BgL_set1z00_32), (int) (((long) 1)));
											VECTOR_SET(
												((obj_t) BgL_arg1225z00_2219), BgL_iz00_1272,
												BINT(BgL_arg1306z00_1276));
									}}
									{
										long BgL_iz00_3157;

										BgL_iz00_3157 = (BgL_iz00_1272 + ((long) 1));
										BgL_iz00_1272 = BgL_iz00_3157;
										goto BgL_zc3z04anonymousza31303ze3z87_1273;
									}
								}
							else
								{	/* Rgc/rgcset.scm 227 */
									BgL_tmpz00_3129 = ((bool_t) 0);
								}
						}
						return BBOOL(BgL_tmpz00_3129);
					}
				}
			}
		}

	}



/* &rgcset-and! */
	obj_t BGl_z62rgcsetzd2andz12za2zz__rgc_setz00(obj_t BgL_envz00_2756,
		obj_t BgL_set1z00_2757, obj_t BgL_set2z00_2758)
	{
		{	/* Rgc/rgcset.scm 222 */
			return
				BGl_rgcsetzd2andz12zc0zz__rgc_setz00(BgL_set1z00_2757,
				BgL_set2z00_2758);
		}

	}



/* rgcset-or! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2orz12zc0zz__rgc_setz00(obj_t
		BgL_set1z00_34, obj_t BgL_set2z00_35)
	{
		{	/* Rgc/rgcset.scm 238 */
			{	/* Rgc/rgcset.scm 240 */
				long BgL_len1z00_1282;
				long BgL_len2z00_1283;

				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2225;

					BgL_arg1229z00_2225 =
						STRUCT_REF(((obj_t) BgL_set1z00_34), (int) (((long) 1)));
					BgL_len1z00_1282 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2225));
				}
				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2228;

					BgL_arg1229z00_2228 =
						STRUCT_REF(((obj_t) BgL_set2z00_35), (int) (((long) 1)));
					BgL_len2z00_1283 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2228));
				}
				{
					long BgL_iz00_1285;

					{	/* Rgc/rgcset.scm 243 */
						bool_t BgL_tmpz00_3171;

						BgL_iz00_1285 = ((long) 0);
					BgL_zc3z04anonymousza31310ze3z87_1286:
						if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1285),
								BINT(BgL_len1z00_1282)))
							{	/* Rgc/rgcset.scm 244 */
								{	/* Rgc/rgcset.scm 248 */
									long BgL_arg1312z00_1288;

									{	/* Rgc/rgcset.scm 248 */
										obj_t BgL_arg1313z00_1289;
										obj_t BgL_arg1314z00_1290;

										{	/* Rgc/rgcset.scm 97 */
											obj_t BgL_arg1227z00_2231;

											BgL_arg1227z00_2231 =
												STRUCT_REF(
												((obj_t) BgL_set1z00_34), (int) (((long) 1)));
											BgL_arg1313z00_1289 =
												VECTOR_REF(
												((obj_t) BgL_arg1227z00_2231), BgL_iz00_1285);
										}
										{	/* Rgc/rgcset.scm 97 */
											obj_t BgL_arg1227z00_2235;

											BgL_arg1227z00_2235 =
												STRUCT_REF(
												((obj_t) BgL_set2z00_35), (int) (((long) 1)));
											BgL_arg1314z00_1290 =
												VECTOR_REF(
												((obj_t) BgL_arg1227z00_2235), BgL_iz00_1285);
										}
										BgL_arg1312z00_1288 =
											(
											(long) CINT(BgL_arg1313z00_1289) |
											(long) CINT(BgL_arg1314z00_1290));
									}
									{	/* Rgc/rgcset.scm 91 */
										obj_t BgL_arg1225z00_2242;

										BgL_arg1225z00_2242 =
											STRUCT_REF(((obj_t) BgL_set1z00_34), (int) (((long) 1)));
										VECTOR_SET(
											((obj_t) BgL_arg1225z00_2242), BgL_iz00_1285,
											BINT(BgL_arg1312z00_1288));
								}}
								{
									long BgL_iz00_3195;

									BgL_iz00_3195 = (BgL_iz00_1285 + ((long) 1));
									BgL_iz00_1285 = BgL_iz00_3195;
									goto BgL_zc3z04anonymousza31310ze3z87_1286;
								}
							}
						else
							{	/* Rgc/rgcset.scm 244 */
								BgL_tmpz00_3171 = ((bool_t) 0);
							}
						return BBOOL(BgL_tmpz00_3171);
					}
				}
			}
		}

	}



/* &rgcset-or! */
	obj_t BGl_z62rgcsetzd2orz12za2zz__rgc_setz00(obj_t BgL_envz00_2759,
		obj_t BgL_set1z00_2760, obj_t BgL_set2z00_2761)
	{
		{	/* Rgc/rgcset.scm 238 */
			return
				BGl_rgcsetzd2orz12zc0zz__rgc_setz00(BgL_set1z00_2760, BgL_set2z00_2761);
		}

	}



/* rgcset-or */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2orzd2zz__rgc_setz00(obj_t BgL_set1z00_36,
		obj_t BgL_set2z00_37)
	{
		{	/* Rgc/rgcset.scm 255 */
			{	/* Rgc/rgcset.scm 257 */
				long BgL_len1z00_1293;

				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2248;

					BgL_arg1229z00_2248 =
						STRUCT_REF(((obj_t) BgL_set1z00_36), (int) (((long) 1)));
					BgL_len1z00_1293 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2248));
				}
				{	/* Rgc/rgcset.scm 257 */
					long BgL_len2z00_1294;

					{	/* Rgc/rgcset.scm 103 */
						obj_t BgL_arg1229z00_2251;

						BgL_arg1229z00_2251 =
							STRUCT_REF(((obj_t) BgL_set2z00_37), (int) (((long) 1)));
						BgL_len2z00_1294 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2251));
					}
					{	/* Rgc/rgcset.scm 258 */
						obj_t BgL_newz00_1295;

						{	/* Rgc/rgcset.scm 259 */
							obj_t BgL_arg1325z00_1305;

							BgL_arg1325z00_1305 =
								STRUCT_REF(((obj_t) BgL_set1z00_36), (int) (((long) 0)));
							{	/* Rgc/rgcset.scm 259 */
								long BgL_siza7eza7_2255;

								BgL_siza7eza7_2255 = (long) CINT(BgL_arg1325z00_1305);
								{	/* Rgc/rgcset.scm 85 */
									obj_t BgL_arg1216z00_2256;

									{	/* Rgc/rgcset.scm 85 */
										long BgL_arg1221z00_2257;

										{	/* Rgc/rgcset.scm 85 */
											obj_t BgL_tmpz00_3213;

											{	/* Rgc/rgcset.scm 85 */
												obj_t BgL_auxz00_3214;

												{	/* Rgc/rgcset.scm 85 */
													long BgL_za72za7_2260;

													BgL_za72za7_2260 =
														BGl_bitzd2perzd2wordz00zz__rgc_setz00;
													BgL_auxz00_3214 =
														BINT((BgL_siza7eza7_2255 / BgL_za72za7_2260));
												}
												BgL_tmpz00_3213 =
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long) 1)),
													BgL_auxz00_3214);
											}
											BgL_arg1221z00_2257 = (long) CINT(BgL_tmpz00_3213);
										}
										BgL_arg1216z00_2256 =
											make_vector(BgL_arg1221z00_2257, BINT(((long) 0)));
									}
									{	/* Rgc/rgcset.scm 79 */
										obj_t BgL_newz00_2262;

										BgL_newz00_2262 =
											create_struct(BGl_symbol1863z00zz__rgc_setz00,
											(int) (((long) 2)));
										{	/* Rgc/rgcset.scm 79 */
											int BgL_tmpz00_3224;

											BgL_tmpz00_3224 = (int) (((long) 1));
											STRUCT_SET(BgL_newz00_2262, BgL_tmpz00_3224,
												BgL_arg1216z00_2256);
										}
										{	/* Rgc/rgcset.scm 79 */
											obj_t BgL_auxz00_3229;
											int BgL_tmpz00_3227;

											BgL_auxz00_3229 = BINT(BgL_siza7eza7_2255);
											BgL_tmpz00_3227 = (int) (((long) 0));
											STRUCT_SET(BgL_newz00_2262, BgL_tmpz00_3227,
												BgL_auxz00_3229);
										}
										BgL_newz00_1295 = BgL_newz00_2262;
						}}}}
						{	/* Rgc/rgcset.scm 259 */

							{
								long BgL_iz00_1297;

								BgL_iz00_1297 = ((long) 0);
							BgL_zc3z04anonymousza31316ze3z87_1298:
								if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1297),
										BINT(BgL_len1z00_1293)))
									{	/* Rgc/rgcset.scm 262 */
										{	/* Rgc/rgcset.scm 266 */
											long BgL_arg1318z00_1300;

											{	/* Rgc/rgcset.scm 266 */
												obj_t BgL_arg1319z00_1301;
												obj_t BgL_arg1322z00_1302;

												{	/* Rgc/rgcset.scm 97 */
													obj_t BgL_arg1227z00_2265;

													BgL_arg1227z00_2265 =
														STRUCT_REF(
														((obj_t) BgL_set1z00_36), (int) (((long) 1)));
													BgL_arg1319z00_1301 =
														VECTOR_REF(
														((obj_t) BgL_arg1227z00_2265), BgL_iz00_1297);
												}
												{	/* Rgc/rgcset.scm 97 */
													obj_t BgL_arg1227z00_2269;

													BgL_arg1227z00_2269 =
														STRUCT_REF(
														((obj_t) BgL_set2z00_37), (int) (((long) 1)));
													BgL_arg1322z00_1302 =
														VECTOR_REF(
														((obj_t) BgL_arg1227z00_2269), BgL_iz00_1297);
												}
												BgL_arg1318z00_1300 =
													(
													(long) CINT(BgL_arg1319z00_1301) |
													(long) CINT(BgL_arg1322z00_1302));
											}
											{	/* Rgc/rgcset.scm 91 */
												obj_t BgL_arg1225z00_2276;

												BgL_arg1225z00_2276 =
													STRUCT_REF(BgL_newz00_1295, (int) (((long) 1)));
												VECTOR_SET(
													((obj_t) BgL_arg1225z00_2276), BgL_iz00_1297,
													BINT(BgL_arg1318z00_1300));
										}}
										{
											long BgL_iz00_3254;

											BgL_iz00_3254 = (BgL_iz00_1297 + ((long) 1));
											BgL_iz00_1297 = BgL_iz00_3254;
											goto BgL_zc3z04anonymousza31316ze3z87_1298;
										}
									}
								else
									{	/* Rgc/rgcset.scm 262 */
										return BgL_newz00_1295;
									}
							}
						}
					}
				}
			}
		}

	}



/* &rgcset-or */
	obj_t BGl_z62rgcsetzd2orzb0zz__rgc_setz00(obj_t BgL_envz00_2762,
		obj_t BgL_set1z00_2763, obj_t BgL_set2z00_2764)
	{
		{	/* Rgc/rgcset.scm 255 */
			return
				BGl_rgcsetzd2orzd2zz__rgc_setz00(BgL_set1z00_2763, BgL_set2z00_2764);
		}

	}



/* rgcset-but! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2butz12zc0zz__rgc_setz00(obj_t
		BgL_set1z00_38, obj_t BgL_set2z00_39)
	{
		{	/* Rgc/rgcset.scm 274 */
			{	/* Rgc/rgcset.scm 275 */
				long BgL_len1z00_1306;
				long BgL_len2z00_1307;

				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2282;

					BgL_arg1229z00_2282 =
						STRUCT_REF(((obj_t) BgL_set1z00_38), (int) (((long) 1)));
					BgL_len1z00_1306 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2282));
				}
				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2285;

					BgL_arg1229z00_2285 =
						STRUCT_REF(((obj_t) BgL_set2z00_39), (int) (((long) 1)));
					BgL_len2z00_1307 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2285));
				}
				{
					long BgL_iz00_1309;

					{	/* Rgc/rgcset.scm 278 */
						bool_t BgL_tmpz00_3267;

						BgL_iz00_1309 = ((long) 0);
					BgL_zc3z04anonymousza31326ze3z87_1310:
						if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT(BgL_iz00_1309),
								BINT(BgL_len1z00_1306)))
							{	/* Rgc/rgcset.scm 279 */
								{	/* Rgc/rgcset.scm 283 */
									obj_t BgL_arg1328z00_1312;

									{	/* Rgc/rgcset.scm 283 */
										obj_t BgL_arg1329z00_1313;
										obj_t BgL_arg1330z00_1314;

										{	/* Rgc/rgcset.scm 97 */
											obj_t BgL_arg1227z00_2288;

											BgL_arg1227z00_2288 =
												STRUCT_REF(
												((obj_t) BgL_set1z00_38), (int) (((long) 1)));
											BgL_arg1329z00_1313 =
												VECTOR_REF(
												((obj_t) BgL_arg1227z00_2288), BgL_iz00_1309);
										}
										{	/* Rgc/rgcset.scm 97 */
											obj_t BgL_arg1227z00_2292;

											BgL_arg1227z00_2292 =
												STRUCT_REF(
												((obj_t) BgL_set2z00_39), (int) (((long) 1)));
											BgL_arg1330z00_1314 =
												VECTOR_REF(
												((obj_t) BgL_arg1227z00_2292), BgL_iz00_1309);
										}
										BgL_arg1328z00_1312 =
											BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_arg1329z00_1313,
											BgL_arg1330z00_1314);
									}
									{	/* Rgc/rgcset.scm 91 */
										obj_t BgL_arg1225z00_2296;

										BgL_arg1225z00_2296 =
											STRUCT_REF(((obj_t) BgL_set1z00_38), (int) (((long) 1)));
										VECTOR_SET(
											((obj_t) BgL_arg1225z00_2296), BgL_iz00_1309,
											BgL_arg1328z00_1312);
								}}
								{
									long BgL_iz00_3288;

									BgL_iz00_3288 = (BgL_iz00_1309 + ((long) 1));
									BgL_iz00_1309 = BgL_iz00_3288;
									goto BgL_zc3z04anonymousza31326ze3z87_1310;
								}
							}
						else
							{	/* Rgc/rgcset.scm 279 */
								BgL_tmpz00_3267 = ((bool_t) 0);
							}
						return BBOOL(BgL_tmpz00_3267);
					}
				}
			}
		}

	}



/* &rgcset-but! */
	obj_t BGl_z62rgcsetzd2butz12za2zz__rgc_setz00(obj_t BgL_envz00_2765,
		obj_t BgL_set1z00_2766, obj_t BgL_set2z00_2767)
	{
		{	/* Rgc/rgcset.scm 274 */
			return
				BGl_rgcsetzd2butz12zc0zz__rgc_setz00(BgL_set1z00_2766,
				BgL_set2z00_2767);
		}

	}



/* rgcset-equal? */
	BGL_EXPORTED_DEF bool_t BGl_rgcsetzd2equalzf3z21zz__rgc_setz00(obj_t
		BgL_set1z00_40, obj_t BgL_set2z00_41)
	{
		{	/* Rgc/rgcset.scm 290 */
			{	/* Rgc/rgcset.scm 291 */
				long BgL_len1z00_1317;
				long BgL_len2z00_1318;

				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2302;

					BgL_arg1229z00_2302 =
						STRUCT_REF(((obj_t) BgL_set1z00_40), (int) (((long) 1)));
					BgL_len1z00_1317 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2302));
				}
				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2305;

					BgL_arg1229z00_2305 =
						STRUCT_REF(((obj_t) BgL_set2z00_41), (int) (((long) 1)));
					BgL_len2z00_1318 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2305));
				}
				if ((BgL_len1z00_1317 == BgL_len2z00_1318))
					{	/* Rgc/rgcset.scm 294 */
						obj_t BgL_w1z00_1320;
						obj_t BgL_w2z00_1321;

						BgL_w1z00_1320 =
							STRUCT_REF(((obj_t) BgL_set1z00_40), (int) (((long) 1)));
						BgL_w2z00_1321 =
							STRUCT_REF(((obj_t) BgL_set2z00_41), (int) (((long) 1)));
						{
							long BgL_iz00_2326;

							BgL_iz00_2326 = ((long) 0);
						BgL_loopz00_2325:
							if ((BgL_iz00_2326 == BgL_len1z00_1317))
								{	/* Rgc/rgcset.scm 298 */
									return ((bool_t) 1);
								}
							else
								{	/* Rgc/rgcset.scm 300 */
									bool_t BgL_test1926z00_3312;

									{	/* Rgc/rgcset.scm 300 */
										obj_t BgL_arg1338z00_2332;
										obj_t BgL_arg1339z00_2333;

										BgL_arg1338z00_2332 =
											VECTOR_REF(((obj_t) BgL_w1z00_1320), BgL_iz00_2326);
										BgL_arg1339z00_2333 =
											VECTOR_REF(((obj_t) BgL_w2z00_1321), BgL_iz00_2326);
										BgL_test1926z00_3312 =
											(
											(long) CINT(BgL_arg1338z00_2332) ==
											(long) CINT(BgL_arg1339z00_2333));
									}
									if (BgL_test1926z00_3312)
										{
											long BgL_iz00_3320;

											BgL_iz00_3320 = (BgL_iz00_2326 + ((long) 1));
											BgL_iz00_2326 = BgL_iz00_3320;
											goto BgL_loopz00_2325;
										}
									else
										{	/* Rgc/rgcset.scm 300 */
											return ((bool_t) 0);
										}
								}
						}
					}
				else
					{	/* Rgc/rgcset.scm 293 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &rgcset-equal? */
	obj_t BGl_z62rgcsetzd2equalzf3z43zz__rgc_setz00(obj_t BgL_envz00_2768,
		obj_t BgL_set1z00_2769, obj_t BgL_set2z00_2770)
	{
		{	/* Rgc/rgcset.scm 290 */
			return
				BBOOL(BGl_rgcsetzd2equalzf3z21zz__rgc_setz00(BgL_set1z00_2769,
					BgL_set2z00_2770));
		}

	}



/* rgcset->hash */
	BGL_EXPORTED_DEF long BGl_rgcsetzd2ze3hashz31zz__rgc_setz00(obj_t
		BgL_setz00_42)
	{
		{	/* Rgc/rgcset.scm 308 */
			{	/* Rgc/rgcset.scm 309 */
				long BgL_lenz00_1333;

				{	/* Rgc/rgcset.scm 103 */
					obj_t BgL_arg1229z00_2344;

					BgL_arg1229z00_2344 =
						STRUCT_REF(((obj_t) BgL_setz00_42), (int) (((long) 1)));
					BgL_lenz00_1333 = VECTOR_LENGTH(((obj_t) BgL_arg1229z00_2344));
				}
				{	/* Rgc/rgcset.scm 310 */
					obj_t BgL_g1043z00_1334;

					{	/* Rgc/rgcset.scm 97 */
						obj_t BgL_arg1227z00_2347;

						BgL_arg1227z00_2347 =
							STRUCT_REF(((obj_t) BgL_setz00_42), (int) (((long) 1)));
						BgL_g1043z00_1334 =
							VECTOR_REF(((obj_t) BgL_arg1227z00_2347), ((long) 0));
					}
					{
						long BgL_iz00_1336;
						obj_t BgL_resz00_1337;

						{	/* Rgc/rgcset.scm 310 */
							obj_t BgL_tmpz00_3334;

							BgL_iz00_1336 = ((long) 1);
							BgL_resz00_1337 = BgL_g1043z00_1334;
						BgL_zc3z04anonymousza31340ze3z87_1338:
							if ((BgL_iz00_1336 == BgL_lenz00_1333))
								{	/* Rgc/rgcset.scm 312 */
									if (((long) CINT(BgL_resz00_1337) < ((long) 0)))
										{	/* Rgc/rgcset.scm 313 */
											BgL_tmpz00_3334 = BINT(NEG((long) CINT(BgL_resz00_1337)));
										}
									else
										{	/* Rgc/rgcset.scm 313 */
											BgL_tmpz00_3334 = BgL_resz00_1337;
										}
								}
							else
								{	/* Rgc/rgcset.scm 316 */
									long BgL_vz00_1341;

									{	/* Rgc/rgcset.scm 316 */
										long BgL_arg1348z00_1347;

										{	/* Rgc/rgcset.scm 316 */
											long BgL_arg1350z00_1348;
											obj_t BgL_arg1351z00_1349;

											BgL_arg1350z00_1348 =
												((long) CINT(BgL_resz00_1337) << (int) (((long) 3)));
											{	/* Rgc/rgcset.scm 97 */
												obj_t BgL_arg1227z00_2359;

												BgL_arg1227z00_2359 =
													STRUCT_REF(
													((obj_t) BgL_setz00_42), (int) (((long) 1)));
												BgL_arg1351z00_1349 =
													VECTOR_REF(
													((obj_t) BgL_arg1227z00_2359), BgL_iz00_1336);
											}
											BgL_arg1348z00_1347 =
												(BgL_arg1350z00_1348 +
												(long) CINT(BgL_arg1351z00_1349));
										}
										BgL_vz00_1341 =
											((long) CINT(BgL_resz00_1337) + BgL_arg1348z00_1347);
									}
									{	/* Rgc/rgcset.scm 317 */
										long BgL_arg1343z00_1342;
										long BgL_arg1344z00_1343;

										BgL_arg1343z00_1342 = (BgL_iz00_1336 + ((long) 1));
										{	/* Rgc/rgcset.scm 318 */
											bool_t BgL_test1929z00_3356;

											{	/* Rgc/rgcset.scm 318 */
												obj_t BgL_arg1347z00_1346;

												{	/* Rgc/rgcset.scm 97 */
													obj_t BgL_arg1227z00_2371;

													BgL_arg1227z00_2371 =
														STRUCT_REF(
														((obj_t) BgL_setz00_42), (int) (((long) 1)));
													BgL_arg1347z00_1346 =
														VECTOR_REF(
														((obj_t) BgL_arg1227z00_2371), BgL_iz00_1336);
												}
												BgL_test1929z00_3356 =
													((long) CINT(BgL_arg1347z00_1346) == ((long) 0));
											}
											if (BgL_test1929z00_3356)
												{	/* Rgc/rgcset.scm 318 */
													BgL_arg1344z00_1343 = BgL_vz00_1341;
												}
											else
												{	/* Rgc/rgcset.scm 318 */
													BgL_arg1344z00_1343 = (BgL_iz00_1336 + BgL_vz00_1341);
												}
										}
										{
											obj_t BgL_resz00_3366;
											long BgL_iz00_3365;

											BgL_iz00_3365 = BgL_arg1343z00_1342;
											BgL_resz00_3366 = BINT(BgL_arg1344z00_1343);
											BgL_resz00_1337 = BgL_resz00_3366;
											BgL_iz00_1336 = BgL_iz00_3365;
											goto BgL_zc3z04anonymousza31340ze3z87_1338;
										}
									}
								}
							return (long) CINT(BgL_tmpz00_3334);
		}}}}}

	}



/* &rgcset->hash */
	obj_t BGl_z62rgcsetzd2ze3hashz53zz__rgc_setz00(obj_t BgL_envz00_2771,
		obj_t BgL_setz00_2772)
	{
		{	/* Rgc/rgcset.scm 308 */
			return BINT(BGl_rgcsetzd2ze3hashz31zz__rgc_setz00(BgL_setz00_2772));
		}

	}



/* rgcset-remove! */
	BGL_EXPORTED_DEF obj_t BGl_rgcsetzd2removez12zc0zz__rgc_setz00(obj_t
		BgL_setz00_43, long BgL_numz00_44)
	{
		{	/* Rgc/rgcset.scm 325 */
			{	/* Rgc/rgcset.scm 326 */
				long BgL_wordzd2numzd2_2380;

				BgL_wordzd2numzd2_2380 =
					(BgL_numz00_44 / BGl_bitzd2perzd2wordz00zz__rgc_setz00);
				{	/* Rgc/rgcset.scm 326 */
					long BgL_wordzd2bitzd2_2381;

					{	/* Rgc/rgcset.scm 327 */
						long BgL_res1783z00_2406;

						{	/* Rgc/rgcset.scm 327 */
							long BgL_n1z00_2388;
							long BgL_n2z00_2389;

							BgL_n1z00_2388 = BgL_numz00_44;
							BgL_n2z00_2389 = BGl_bitzd2perzd2wordz00zz__rgc_setz00;
							{	/* Rgc/rgcset.scm 327 */
								bool_t BgL_test1930z00_3372;

								{	/* Rgc/rgcset.scm 327 */
									long BgL_arg1535z00_2391;

									BgL_arg1535z00_2391 =
										(((BgL_n1z00_2388) | (BgL_n2z00_2389)) & -2147483648);
									BgL_test1930z00_3372 = (BgL_arg1535z00_2391 == ((long) 0));
								}
								if (BgL_test1930z00_3372)
									{	/* Rgc/rgcset.scm 327 */
										int32_t BgL_arg1532z00_2392;

										{	/* Rgc/rgcset.scm 327 */
											int32_t BgL_arg1533z00_2393;
											int32_t BgL_arg1534z00_2394;

											{	/* Rgc/rgcset.scm 327 */
												int32_t BgL_res1779z00_2398;

												BgL_res1779z00_2398 = (int32_t) (BgL_n1z00_2388);
												BgL_arg1533z00_2393 = BgL_res1779z00_2398;
											}
											{	/* Rgc/rgcset.scm 327 */
												int32_t BgL_res1780z00_2400;

												BgL_res1780z00_2400 = (int32_t) (BgL_n2z00_2389);
												BgL_arg1534z00_2394 = BgL_res1780z00_2400;
											}
											BgL_arg1532z00_2392 =
												(BgL_arg1533z00_2393 % BgL_arg1534z00_2394);
										}
										{	/* Rgc/rgcset.scm 327 */
											long BgL_res1782z00_2405;

											{	/* Rgc/rgcset.scm 327 */
												long BgL_arg1651z00_2402;

												BgL_arg1651z00_2402 = (long) (BgL_arg1532z00_2392);
												{	/* Rgc/rgcset.scm 327 */
													long BgL_res1781z00_2404;

													BgL_res1781z00_2404 = (long) (BgL_arg1651z00_2402);
													BgL_res1782z00_2405 = BgL_res1781z00_2404;
											}}
											BgL_res1783z00_2406 = BgL_res1782z00_2405;
									}}
								else
									{	/* Rgc/rgcset.scm 327 */
										BgL_res1783z00_2406 = (BgL_n1z00_2388 % BgL_n2z00_2389);
									}
							}
						}
						BgL_wordzd2bitzd2_2381 = BgL_res1783z00_2406;
					}
					{	/* Rgc/rgcset.scm 327 */
						obj_t BgL_oldz00_2382;

						{	/* Rgc/rgcset.scm 97 */
							obj_t BgL_arg1227z00_2407;

							BgL_arg1227z00_2407 =
								STRUCT_REF(((obj_t) BgL_setz00_43), (int) (((long) 1)));
							BgL_oldz00_2382 =
								VECTOR_REF(
								((obj_t) BgL_arg1227z00_2407), BgL_wordzd2numzd2_2380);
						}
						{	/* Rgc/rgcset.scm 328 */

							{	/* Rgc/rgcset.scm 329 */
								long BgL_arg1352z00_2383;

								BgL_arg1352z00_2383 =
									(
									(long) CINT(BgL_oldz00_2382) ^
									(((long) 1) << (int) (BgL_wordzd2bitzd2_2381)));
								{	/* Rgc/rgcset.scm 91 */
									obj_t BgL_arg1225z00_2416;

									BgL_arg1225z00_2416 =
										STRUCT_REF(((obj_t) BgL_setz00_43), (int) (((long) 1)));
									return
										VECTOR_SET(
										((obj_t) BgL_arg1225z00_2416), BgL_wordzd2numzd2_2380,
										BINT(BgL_arg1352z00_2383));
								}
							}
						}
					}
				}
			}
		}

	}



/* &rgcset-remove! */
	obj_t BGl_z62rgcsetzd2removez12za2zz__rgc_setz00(obj_t BgL_envz00_2773,
		obj_t BgL_setz00_2774, obj_t BgL_numz00_2775)
	{
		{	/* Rgc/rgcset.scm 325 */
			{	/* Rgc/rgcset.scm 326 */
				long BgL_auxz00_3396;

				{	/* Rgc/rgcset.scm 326 */
					obj_t BgL_tmpz00_3397;

					if (INTEGERP(BgL_numz00_2775))
						{	/* Rgc/rgcset.scm 326 */
							BgL_tmpz00_3397 = BgL_numz00_2775;
						}
					else
						{
							obj_t BgL_auxz00_3400;

							BgL_auxz00_3400 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1865z00zz__rgc_setz00,
								BINT(((long) 12634)), BGl_string1873z00zz__rgc_setz00,
								BGl_string1867z00zz__rgc_setz00, BgL_numz00_2775);
							FAILURE(BgL_auxz00_3400, BFALSE, BFALSE);
						}
					BgL_auxz00_3396 = (long) CINT(BgL_tmpz00_3397);
				}
				return
					BGl_rgcsetzd2removez12zc0zz__rgc_setz00(BgL_setz00_2774,
					BgL_auxz00_3396);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__rgc_setz00()
	{
		{	/* Rgc/rgcset.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__rgc_setz00()
	{
		{	/* Rgc/rgcset.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__rgc_setz00()
	{
		{	/* Rgc/rgcset.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__rgc_setz00()
	{
		{	/* Rgc/rgcset.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1874z00zz__rgc_setz00));
		}

	}

#ifdef __cplusplus
}
#endif
