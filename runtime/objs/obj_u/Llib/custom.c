/*===========================================================================*/
/*   (Llib/custom.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/custom.scm -indent -o objs/obj_u/Llib/custom.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62customzf3z91zz__customz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__customz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_customzd2nilzd2zz__customz00();
	static obj_t BGl_z62customzd2hashzb0zz__customz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__customz00();
	static obj_t BGl_objectzd2initzd2zz__customz00();
	static obj_t BGl_z62customzd2nilzb0zz__customz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__customz00();
	BGL_EXPORTED_DECL char *BGl_customzd2identifierzd2zz__customz00(obj_t);
	static obj_t BGl_z62customzd2equalzf3z43zz__customz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_customzf3zf3zz__customz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__customz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_customzd2identifierzd2setz12z12zz__customz00(obj_t, char *);
	static obj_t BGl_gczd2rootszd2initz00zz__customz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__customz00();
	extern obj_t bgl_custom_nil();
	static obj_t BGl_z62customzd2identifierzb0zz__customz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_customzd2equalzf3z21zz__customz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_customzd2hashzd2zz__customz00(obj_t, int);
	static obj_t BGl_z62customzd2identifierzd2setz12z70zz__customz00(obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1600z00zz__customz00,
		BgL_bgl_string1600za700za7za7_1605za7, "&custom-identifier-set!", 23);
	      DEFINE_STRING(BGl_string1601z00zz__customz00,
		BgL_bgl_string1601za700za7za7_1606za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1602z00zz__customz00,
		BgL_bgl_string1602za700za7za7_1607za7, "&custom-hash", 12);
	      DEFINE_STRING(BGl_string1603z00zz__customz00,
		BgL_bgl_string1603za700za7za7_1608za7, "bint", 4);
	      DEFINE_STRING(BGl_string1604z00zz__customz00,
		BgL_bgl_string1604za700za7za7_1609za7, "__custom", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_customzd2identifierzd2setz12zd2envzc0zz__customz00,
		BgL_bgl_za762customza7d2iden1610z00,
		BGl_z62customzd2identifierzd2setz12z70zz__customz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_customzd2hashzd2envz00zz__customz00,
		BgL_bgl_za762customza7d2hash1611z00, BGl_z62customzd2hashzb0zz__customz00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1596z00zz__customz00,
		BgL_bgl_string1596za700za7za7_1612za7, "/tmp/4.4a/runtime/Llib/custom.scm",
		33);
	      DEFINE_STRING(BGl_string1597z00zz__customz00,
		BgL_bgl_string1597za700za7za7_1613za7, "&custom-equal?", 14);
	      DEFINE_STRING(BGl_string1598z00zz__customz00,
		BgL_bgl_string1598za700za7za7_1614za7, "custom", 6);
	      DEFINE_STRING(BGl_string1599z00zz__customz00,
		BgL_bgl_string1599za700za7za7_1615za7, "&custom-identifier", 18);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_customzd2nilzd2envz00zz__customz00,
		BgL_bgl_za762customza7d2nilza71616za7, BGl_z62customzd2nilzb0zz__customz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_customzd2equalzf3zd2envzf3zz__customz00,
		BgL_bgl_za762customza7d2equa1617z00,
		BGl_z62customzd2equalzf3z43zz__customz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_customzd2identifierzd2envz00zz__customz00,
		BgL_bgl_za762customza7d2iden1618z00,
		BGl_z62customzd2identifierzb0zz__customz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_customzf3zd2envz21zz__customz00,
		BgL_bgl_za762customza7f3za791za71619z00, BGl_z62customzf3z91zz__customz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__customz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__customz00(long
		BgL_checksumz00_1740, char *BgL_fromz00_1741)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__customz00))
				{
					BGl_requirezd2initializa7ationz75zz__customz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__customz00();
					BGl_importedzd2moduleszd2initz00zz__customz00();
					return BGl_methodzd2initzd2zz__customz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__customz00()
	{
		{	/* Llib/custom.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* custom? */
	BGL_EXPORTED_DEF bool_t BGl_customzf3zf3zz__customz00(obj_t BgL_objz00_3)
	{
		{	/* Llib/custom.scm 84 */
			return CUSTOMP(BgL_objz00_3);
		}

	}



/* &custom? */
	obj_t BGl_z62customzf3z91zz__customz00(obj_t BgL_envz00_1712,
		obj_t BgL_objz00_1713)
	{
		{	/* Llib/custom.scm 84 */
			return BBOOL(BGl_customzf3zf3zz__customz00(BgL_objz00_1713));
		}

	}



/* custom-nil */
	BGL_EXPORTED_DEF obj_t BGl_customzd2nilzd2zz__customz00()
	{
		{	/* Llib/custom.scm 90 */
			return bgl_custom_nil();
		}

	}



/* &custom-nil */
	obj_t BGl_z62customzd2nilzb0zz__customz00(obj_t BgL_envz00_1714)
	{
		{	/* Llib/custom.scm 90 */
			return BGl_customzd2nilzd2zz__customz00();
		}

	}



/* custom-equal? */
	BGL_EXPORTED_DEF bool_t BGl_customzd2equalzf3z21zz__customz00(obj_t
		BgL_obj1z00_4, obj_t BgL_obj2z00_5)
	{
		{	/* Llib/custom.scm 96 */
			return CUSTOM_CMP(BgL_obj1z00_4, BgL_obj2z00_5);
		}

	}



/* &custom-equal? */
	obj_t BGl_z62customzd2equalzf3z43zz__customz00(obj_t BgL_envz00_1715,
		obj_t BgL_obj1z00_1716, obj_t BgL_obj2z00_1717)
	{
		{	/* Llib/custom.scm 96 */
			{	/* Llib/custom.scm 97 */
				bool_t BgL_tmpz00_1755;

				{	/* Llib/custom.scm 97 */
					obj_t BgL_auxz00_1763;
					obj_t BgL_auxz00_1756;

					if (CUSTOMP(BgL_obj2z00_1717))
						{	/* Llib/custom.scm 97 */
							BgL_auxz00_1763 = BgL_obj2z00_1717;
						}
					else
						{
							obj_t BgL_auxz00_1766;

							BgL_auxz00_1766 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1596z00zz__customz00,
								BINT(((long) 3593)), BGl_string1597z00zz__customz00,
								BGl_string1598z00zz__customz00, BgL_obj2z00_1717);
							FAILURE(BgL_auxz00_1766, BFALSE, BFALSE);
						}
					if (CUSTOMP(BgL_obj1z00_1716))
						{	/* Llib/custom.scm 97 */
							BgL_auxz00_1756 = BgL_obj1z00_1716;
						}
					else
						{
							obj_t BgL_auxz00_1759;

							BgL_auxz00_1759 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1596z00zz__customz00,
								BINT(((long) 3593)), BGl_string1597z00zz__customz00,
								BGl_string1598z00zz__customz00, BgL_obj1z00_1716);
							FAILURE(BgL_auxz00_1759, BFALSE, BFALSE);
						}
					BgL_tmpz00_1755 =
						BGl_customzd2equalzf3z21zz__customz00(BgL_auxz00_1756,
						BgL_auxz00_1763);
				}
				return BBOOL(BgL_tmpz00_1755);
			}
		}

	}



/* custom-identifier */
	BGL_EXPORTED_DEF char *BGl_customzd2identifierzd2zz__customz00(obj_t
		BgL_customz00_6)
	{
		{	/* Llib/custom.scm 102 */
			return CUSTOM_IDENTIFIER(BgL_customz00_6);
		}

	}



/* &custom-identifier */
	obj_t BGl_z62customzd2identifierzb0zz__customz00(obj_t BgL_envz00_1718,
		obj_t BgL_customz00_1719)
	{
		{	/* Llib/custom.scm 102 */
			{	/* Llib/custom.scm 103 */
				char *BgL_tmpz00_1773;

				{	/* Llib/custom.scm 103 */
					obj_t BgL_auxz00_1774;

					if (CUSTOMP(BgL_customz00_1719))
						{	/* Llib/custom.scm 103 */
							BgL_auxz00_1774 = BgL_customz00_1719;
						}
					else
						{
							obj_t BgL_auxz00_1777;

							BgL_auxz00_1777 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1596z00zz__customz00,
								BINT(((long) 3906)), BGl_string1599z00zz__customz00,
								BGl_string1598z00zz__customz00, BgL_customz00_1719);
							FAILURE(BgL_auxz00_1777, BFALSE, BFALSE);
						}
					BgL_tmpz00_1773 =
						BGl_customzd2identifierzd2zz__customz00(BgL_auxz00_1774);
				}
				return string_to_bstring(BgL_tmpz00_1773);
			}
		}

	}



/* custom-identifier-set! */
	BGL_EXPORTED_DEF obj_t BGl_customzd2identifierzd2setz12z12zz__customz00(obj_t
		BgL_customz00_7, char *BgL_strz00_8)
	{
		{	/* Llib/custom.scm 108 */
			return CUSTOM_IDENTIFIER_SET(BgL_customz00_7, BgL_strz00_8);
		}

	}



/* &custom-identifier-set! */
	obj_t BGl_z62customzd2identifierzd2setz12z70zz__customz00(obj_t
		BgL_envz00_1720, obj_t BgL_customz00_1721, obj_t BgL_strz00_1722)
	{
		{	/* Llib/custom.scm 108 */
			{	/* Llib/custom.scm 109 */
				char *BgL_auxz00_1791;
				obj_t BgL_auxz00_1784;

				{	/* Llib/custom.scm 109 */
					obj_t BgL_tmpz00_1792;

					if (STRINGP(BgL_strz00_1722))
						{	/* Llib/custom.scm 109 */
							BgL_tmpz00_1792 = BgL_strz00_1722;
						}
					else
						{
							obj_t BgL_auxz00_1795;

							BgL_auxz00_1795 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1596z00zz__customz00,
								BINT(((long) 4229)), BGl_string1600z00zz__customz00,
								BGl_string1601z00zz__customz00, BgL_strz00_1722);
							FAILURE(BgL_auxz00_1795, BFALSE, BFALSE);
						}
					BgL_auxz00_1791 = BSTRING_TO_STRING(BgL_tmpz00_1792);
				}
				if (CUSTOMP(BgL_customz00_1721))
					{	/* Llib/custom.scm 109 */
						BgL_auxz00_1784 = BgL_customz00_1721;
					}
				else
					{
						obj_t BgL_auxz00_1787;

						BgL_auxz00_1787 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1596z00zz__customz00,
							BINT(((long) 4229)), BGl_string1600z00zz__customz00,
							BGl_string1598z00zz__customz00, BgL_customz00_1721);
						FAILURE(BgL_auxz00_1787, BFALSE, BFALSE);
					}
				return
					BGl_customzd2identifierzd2setz12z12zz__customz00(BgL_auxz00_1784,
					BgL_auxz00_1791);
			}
		}

	}



/* custom-hash */
	BGL_EXPORTED_DEF obj_t BGl_customzd2hashzd2zz__customz00(obj_t
		BgL_customz00_9, int BgL_modz00_10)
	{
		{	/* Llib/custom.scm 114 */
			{	/* Llib/custom.scm 115 */
				int BgL_numz00_1435;

				BgL_numz00_1435 = CUSTOM_HASH_NUMBER(BgL_customz00_9);
				{	/* Llib/custom.scm 116 */
					long BgL_res1525z00_1454;

					{	/* Llib/custom.scm 116 */
						long BgL_n1z00_1436;
						long BgL_n2z00_1437;

						BgL_n1z00_1436 = (long) (BgL_numz00_1435);
						BgL_n2z00_1437 = (long) (BgL_modz00_10);
						{	/* Llib/custom.scm 116 */
							bool_t BgL_test1626z00_1804;

							{	/* Llib/custom.scm 116 */
								long BgL_arg1376z00_1439;

								BgL_arg1376z00_1439 =
									(((BgL_n1z00_1436) | (BgL_n2z00_1437)) & -2147483648);
								BgL_test1626z00_1804 = (BgL_arg1376z00_1439 == ((long) 0));
							}
							if (BgL_test1626z00_1804)
								{	/* Llib/custom.scm 116 */
									int32_t BgL_arg1373z00_1440;

									{	/* Llib/custom.scm 116 */
										int32_t BgL_arg1374z00_1441;
										int32_t BgL_arg1375z00_1442;

										{	/* Llib/custom.scm 116 */
											int32_t BgL_res1521z00_1446;

											BgL_res1521z00_1446 = (int32_t) (BgL_n1z00_1436);
											BgL_arg1374z00_1441 = BgL_res1521z00_1446;
										}
										{	/* Llib/custom.scm 116 */
											int32_t BgL_res1522z00_1448;

											BgL_res1522z00_1448 = (int32_t) (BgL_n2z00_1437);
											BgL_arg1375z00_1442 = BgL_res1522z00_1448;
										}
										BgL_arg1373z00_1440 =
											(BgL_arg1374z00_1441 % BgL_arg1375z00_1442);
									}
									{	/* Llib/custom.scm 116 */
										long BgL_res1524z00_1453;

										{	/* Llib/custom.scm 116 */
											long BgL_arg1471z00_1450;

											BgL_arg1471z00_1450 = (long) (BgL_arg1373z00_1440);
											{	/* Llib/custom.scm 116 */
												long BgL_res1523z00_1452;

												BgL_res1523z00_1452 = (long) (BgL_arg1471z00_1450);
												BgL_res1524z00_1453 = BgL_res1523z00_1452;
										}}
										BgL_res1525z00_1454 = BgL_res1524z00_1453;
								}}
							else
								{	/* Llib/custom.scm 116 */
									BgL_res1525z00_1454 = (BgL_n1z00_1436 % BgL_n2z00_1437);
								}
						}
					}
					return BINT(BgL_res1525z00_1454);
				}
			}
		}

	}



/* &custom-hash */
	obj_t BGl_z62customzd2hashzb0zz__customz00(obj_t BgL_envz00_1723,
		obj_t BgL_customz00_1724, obj_t BgL_modz00_1725)
	{
		{	/* Llib/custom.scm 114 */
			{	/* Llib/custom.scm 115 */
				int BgL_auxz00_1821;
				obj_t BgL_auxz00_1814;

				{	/* Llib/custom.scm 115 */
					obj_t BgL_tmpz00_1822;

					if (INTEGERP(BgL_modz00_1725))
						{	/* Llib/custom.scm 115 */
							BgL_tmpz00_1822 = BgL_modz00_1725;
						}
					else
						{
							obj_t BgL_auxz00_1825;

							BgL_auxz00_1825 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1596z00zz__customz00,
								BINT(((long) 4540)), BGl_string1602z00zz__customz00,
								BGl_string1603z00zz__customz00, BgL_modz00_1725);
							FAILURE(BgL_auxz00_1825, BFALSE, BFALSE);
						}
					BgL_auxz00_1821 = CINT(BgL_tmpz00_1822);
				}
				if (CUSTOMP(BgL_customz00_1724))
					{	/* Llib/custom.scm 115 */
						BgL_auxz00_1814 = BgL_customz00_1724;
					}
				else
					{
						obj_t BgL_auxz00_1817;

						BgL_auxz00_1817 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1596z00zz__customz00,
							BINT(((long) 4540)), BGl_string1602z00zz__customz00,
							BGl_string1598z00zz__customz00, BgL_customz00_1724);
						FAILURE(BgL_auxz00_1817, BFALSE, BFALSE);
					}
				return
					BGl_customzd2hashzd2zz__customz00(BgL_auxz00_1814, BgL_auxz00_1821);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__customz00()
	{
		{	/* Llib/custom.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__customz00()
	{
		{	/* Llib/custom.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__customz00()
	{
		{	/* Llib/custom.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__customz00()
	{
		{	/* Llib/custom.scm 14 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1604z00zz__customz00));
		}

	}

#ifdef __cplusplus
}
#endif
