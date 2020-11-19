/*===========================================================================*/
/*   (Llib/tvector.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/tvector.scm -indent -o objs/obj_u/Llib/tvector.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62listzd2ze3tvectorz53zz__tvectorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1673z00zz__tvectorz00 = BUNSPEC;
	static obj_t BGl_symbol1675z00zz__tvectorz00 = BUNSPEC;
	static obj_t BGl_symbol1677z00zz__tvectorz00 = BUNSPEC;
	static obj_t BGl_z62tvectorzf3z91zz__tvectorz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__tvectorz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_vectorzd2ze3tvectorz31zz__tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__tvectorz00();
	static obj_t BGl_z62vectorzd2ze3tvectorz53zz__tvectorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__tvectorz00();
	BGL_EXPORTED_DECL obj_t BGl_tvectorzd2ze3vectorz31zz__tvectorz00(obj_t);
	static obj_t BGl_z62tvectorzd2ze3vectorz53zz__tvectorz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__tvectorz00();
	BGL_EXPORTED_DECL obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62tvectorzd2lengthzb0zz__tvectorz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__tvectorz00();
	BGL_EXPORTED_DECL bool_t BGl_tvectorzf3zf3zz__tvectorz00(obj_t);
	BGL_EXPORTED_DECL obj_t get_tvector_descriptor(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3tvectorz31zz__tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t);
	static obj_t BGl_z62tvectorzd2idzb0zz__tvectorz00(obj_t, obj_t);
	extern obj_t BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 = BUNSPEC;
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62tvectorzd2refzb0zz__tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_tvectorzd2lengthzd2zz__tvectorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t create_struct(obj_t, int);
	static obj_t BGl_z62getzd2tvectorzd2descriptorz62zz__tvectorz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__tvectorz00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__tvectorz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__tvectorz00();
	BGL_EXPORTED_DECL obj_t BGl_declarezd2tvectorz12zc0zz__tvectorz00(char *,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62declarezd2tvectorz12za2zz__tvectorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_bigloozd2casezd2sensitivityz00zz__readerz00();
	extern obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tvectorzf3zd2envz21zz__tvectorz00,
		BgL_bgl_za762tvectorza7f3za7911694za7, BGl_z62tvectorzf3z91zz__tvectorz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3tvectorzd2envze3zz__tvectorz00,
		BgL_bgl_za762listza7d2za7e3tve1695za7,
		BGl_z62listzd2ze3tvectorz53zz__tvectorz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tvectorzd2lengthzd2envz00zz__tvectorz00,
		BgL_bgl_za762tvectorza7d2len1696z00,
		BGl_z62tvectorzd2lengthzb0zz__tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declarezd2tvectorz12zd2envz12zz__tvectorz00,
		BgL_bgl_za762declareza7d2tve1697z00,
		BGl_z62declarezd2tvectorz12za2zz__tvectorz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2tvectorzd2descriptorzd2envzd2zz__tvectorz00,
		BgL_bgl_za762getza7d2tvector1698z00,
		BGl_z62getzd2tvectorzd2descriptorz62zz__tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1667z00zz__tvectorz00,
		BgL_bgl_string1667za700za7za7_1699za7, "/tmp/4.4a/runtime/Llib/tvector.scm",
		34);
	      DEFINE_STRING(BGl_string1668z00zz__tvectorz00,
		BgL_bgl_string1668za700za7za7_1700za7, "&tvector-length", 15);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tvectorzd2refzd2envz00zz__tvectorz00,
		BgL_bgl_za762tvectorza7d2ref1701z00, BGl_z62tvectorzd2refzb0zz__tvectorz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1669z00zz__tvectorz00,
		BgL_bgl_string1669za700za7za7_1702za7, "tvector", 7);
	      DEFINE_STRING(BGl_string1670z00zz__tvectorz00,
		BgL_bgl_string1670za700za7za7_1703za7, "&tvector-id", 11);
	      DEFINE_STRING(BGl_string1671z00zz__tvectorz00,
		BgL_bgl_string1671za700za7za7_1704za7, "&get-tvector-descriptor", 23);
	      DEFINE_STRING(BGl_string1672z00zz__tvectorz00,
		BgL_bgl_string1672za700za7za7_1705za7, "symbol", 6);
	      DEFINE_STRING(BGl_string1674z00zz__tvectorz00,
		BgL_bgl_string1674za700za7za7_1706za7, "upcase", 6);
	      DEFINE_STRING(BGl_string1676z00zz__tvectorz00,
		BgL_bgl_string1676za700za7za7_1707za7, "downcase", 8);
	      DEFINE_STRING(BGl_string1678z00zz__tvectorz00,
		BgL_bgl_string1678za700za7za7_1708za7, "tvect-descr", 11);
	      DEFINE_STRING(BGl_string1679z00zz__tvectorz00,
		BgL_bgl_string1679za700za7za7_1709za7, "&declare-tvector!", 17);
	      DEFINE_STRING(BGl_string1680z00zz__tvectorz00,
		BgL_bgl_string1680za700za7za7_1710za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1681z00zz__tvectorz00,
		BgL_bgl_string1681za700za7za7_1711za7, "procedure", 9);
	      DEFINE_STRING(BGl_string1682z00zz__tvectorz00,
		BgL_bgl_string1682za700za7za7_1712za7, "&tvector-ref", 12);
	      DEFINE_STRING(BGl_string1683z00zz__tvectorz00,
		BgL_bgl_string1683za700za7za7_1713za7, "list->tvector", 13);
	      DEFINE_STRING(BGl_string1684z00zz__tvectorz00,
		BgL_bgl_string1684za700za7za7_1714za7, "Unable to convert to such tvector",
		33);
	      DEFINE_STRING(BGl_string1685z00zz__tvectorz00,
		BgL_bgl_string1685za700za7za7_1715za7, "Undeclared tvector", 18);
	      DEFINE_STRING(BGl_string1686z00zz__tvectorz00,
		BgL_bgl_string1686za700za7za7_1716za7, "&list->tvector", 14);
	      DEFINE_STRING(BGl_string1687z00zz__tvectorz00,
		BgL_bgl_string1687za700za7za7_1717za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string1688z00zz__tvectorz00,
		BgL_bgl_string1688za700za7za7_1718za7, "vector->tvector", 15);
	      DEFINE_STRING(BGl_string1689z00zz__tvectorz00,
		BgL_bgl_string1689za700za7za7_1719za7, "&vector->tvector", 16);
	      DEFINE_STRING(BGl_string1690z00zz__tvectorz00,
		BgL_bgl_string1690za700za7za7_1720za7, "vector", 6);
	      DEFINE_STRING(BGl_string1691z00zz__tvectorz00,
		BgL_bgl_string1691za700za7za7_1721za7, "tvector->vector", 15);
	      DEFINE_STRING(BGl_string1692z00zz__tvectorz00,
		BgL_bgl_string1692za700za7za7_1722za7, "&tvector->vector", 16);
	      DEFINE_STRING(BGl_string1693z00zz__tvectorz00,
		BgL_bgl_string1693za700za7za7_1723za7, "__tvector", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tvectorzd2idzd2envz00zz__tvectorz00,
		BgL_bgl_za762tvectorza7d2idza71724za7, BGl_z62tvectorzd2idzb0zz__tvectorz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2ze3tvectorzd2envze3zz__tvectorz00,
		BgL_bgl_za762vectorza7d2za7e3t1725za7,
		BGl_z62vectorzd2ze3tvectorz53zz__tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tvectorzd2ze3vectorzd2envze3zz__tvectorz00,
		BgL_bgl_za762tvectorza7d2za7e31726za7,
		BGl_z62tvectorzd2ze3vectorz53zz__tvectorz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1673z00zz__tvectorz00));
		     ADD_ROOT((void *) (&BGl_symbol1675z00zz__tvectorz00));
		     ADD_ROOT((void *) (&BGl_symbol1677z00zz__tvectorz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__tvectorz00));
		     ADD_ROOT((void *) (&BGl_za2tvectorzd2tableza2zd2zz__tvectorz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long
		BgL_checksumz00_1951, char *BgL_fromz00_1952)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__tvectorz00))
				{
					BGl_requirezd2initializa7ationz75zz__tvectorz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__tvectorz00();
					BGl_cnstzd2initzd2zz__tvectorz00();
					BGl_importedzd2moduleszd2initz00zz__tvectorz00();
					return BGl_toplevelzd2initzd2zz__tvectorz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__tvectorz00()
	{
		{	/* Llib/tvector.scm 14 */
			BGl_symbol1673z00zz__tvectorz00 =
				bstring_to_symbol(BGl_string1674z00zz__tvectorz00);
			BGl_symbol1675z00zz__tvectorz00 =
				bstring_to_symbol(BGl_string1676z00zz__tvectorz00);
			return (BGl_symbol1677z00zz__tvectorz00 =
				bstring_to_symbol(BGl_string1678z00zz__tvectorz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__tvectorz00()
	{
		{	/* Llib/tvector.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__tvectorz00()
	{
		{	/* Llib/tvector.scm 14 */
			return (BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 = BNIL, BUNSPEC);
		}

	}



/* tvector? */
	BGL_EXPORTED_DEF bool_t BGl_tvectorzf3zf3zz__tvectorz00(obj_t BgL_objz00_3)
	{
		{	/* Llib/tvector.scm 92 */
			return TVECTORP(BgL_objz00_3);
		}

	}



/* &tvector? */
	obj_t BGl_z62tvectorzf3z91zz__tvectorz00(obj_t BgL_envz00_1905,
		obj_t BgL_objz00_1906)
	{
		{	/* Llib/tvector.scm 92 */
			return BBOOL(BGl_tvectorzf3zf3zz__tvectorz00(BgL_objz00_1906));
		}

	}



/* tvector-length */
	BGL_EXPORTED_DEF int BGl_tvectorzd2lengthzd2zz__tvectorz00(obj_t BgL_objz00_4)
	{
		{	/* Llib/tvector.scm 98 */
			return TVECTOR_LENGTH(BgL_objz00_4);
		}

	}



/* &tvector-length */
	obj_t BGl_z62tvectorzd2lengthzb0zz__tvectorz00(obj_t BgL_envz00_1907,
		obj_t BgL_objz00_1908)
	{
		{	/* Llib/tvector.scm 98 */
			{	/* Llib/tvector.scm 99 */
				int BgL_tmpz00_1968;

				{	/* Llib/tvector.scm 99 */
					obj_t BgL_auxz00_1969;

					if (TVECTORP(BgL_objz00_1908))
						{	/* Llib/tvector.scm 99 */
							BgL_auxz00_1969 = BgL_objz00_1908;
						}
					else
						{
							obj_t BgL_auxz00_1972;

							BgL_auxz00_1972 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__tvectorz00,
								BINT(((long) 3558)), BGl_string1668z00zz__tvectorz00,
								BGl_string1669z00zz__tvectorz00, BgL_objz00_1908);
							FAILURE(BgL_auxz00_1972, BFALSE, BFALSE);
						}
					BgL_tmpz00_1968 =
						BGl_tvectorzd2lengthzd2zz__tvectorz00(BgL_auxz00_1969);
				}
				return BINT(BgL_tmpz00_1968);
			}
		}

	}



/* tvector-id */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t BgL_tvectz00_5)
	{
		{	/* Llib/tvector.scm 104 */
			return STRUCT_REF(TVECTOR_DESCR(BgL_tvectz00_5), (int) (((long) 0)));
		}

	}



/* &tvector-id */
	obj_t BGl_z62tvectorzd2idzb0zz__tvectorz00(obj_t BgL_envz00_1909,
		obj_t BgL_tvectz00_1910)
	{
		{	/* Llib/tvector.scm 104 */
			{	/* Llib/tvector.scm 105 */
				obj_t BgL_auxz00_1981;

				if (TVECTORP(BgL_tvectz00_1910))
					{	/* Llib/tvector.scm 105 */
						BgL_auxz00_1981 = BgL_tvectz00_1910;
					}
				else
					{
						obj_t BgL_auxz00_1984;

						BgL_auxz00_1984 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__tvectorz00,
							BINT(((long) 3850)), BGl_string1670z00zz__tvectorz00,
							BGl_string1669z00zz__tvectorz00, BgL_tvectz00_1910);
						FAILURE(BgL_auxz00_1984, BFALSE, BFALSE);
					}
				return BGl_tvectorzd2idzd2zz__tvectorz00(BgL_auxz00_1981);
			}
		}

	}



/* get-tvector-descriptor */
	BGL_EXPORTED_DEF obj_t get_tvector_descriptor(obj_t BgL_idz00_24)
	{
		{	/* Llib/tvector.scm 127 */
			if (NULLP(BGl_za2tvectorzd2tableza2zd2zz__tvectorz00))
				{	/* Llib/tvector.scm 128 */
					return BFALSE;
				}
			else
				{	/* Llib/tvector.scm 129 */
					obj_t BgL_cellz00_1554;

					BgL_cellz00_1554 =
						BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_24,
						BGl_za2tvectorzd2tableza2zd2zz__tvectorz00);
					if (PAIRP(BgL_cellz00_1554))
						{	/* Llib/tvector.scm 130 */
							return CDR(BgL_cellz00_1554);
						}
					else
						{	/* Llib/tvector.scm 130 */
							return BFALSE;
						}
				}
		}

	}



/* &get-tvector-descriptor */
	obj_t BGl_z62getzd2tvectorzd2descriptorz62zz__tvectorz00(obj_t
		BgL_envz00_1911, obj_t BgL_idz00_1912)
	{
		{	/* Llib/tvector.scm 127 */
			{	/* Llib/tvector.scm 128 */
				obj_t BgL_auxz00_1995;

				if (SYMBOLP(BgL_idz00_1912))
					{	/* Llib/tvector.scm 128 */
						BgL_auxz00_1995 = BgL_idz00_1912;
					}
				else
					{
						obj_t BgL_auxz00_1998;

						BgL_auxz00_1998 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__tvectorz00,
							BINT(((long) 5101)), BGl_string1671z00zz__tvectorz00,
							BGl_string1672z00zz__tvectorz00, BgL_idz00_1912);
						FAILURE(BgL_auxz00_1998, BFALSE, BFALSE);
					}
				return get_tvector_descriptor(BgL_auxz00_1995);
			}
		}

	}



/* declare-tvector! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2tvectorz12zc0zz__tvectorz00(char
		*BgL_idz00_25, obj_t BgL_allocatez00_26, obj_t BgL_refz00_27,
		obj_t BgL_setz00_28)
	{
		{	/* Llib/tvector.scm 141 */
			{	/* Llib/tvector.scm 142 */
				obj_t BgL_idz00_1091;

				{	/* Llib/tvector.scm 142 */
					obj_t BgL_arg1190z00_1096;

					{	/* Llib/tvector.scm 142 */
						obj_t BgL_casezd2valuezd2_1097;

						BgL_casezd2valuezd2_1097 =
							BGl_bigloozd2casezd2sensitivityz00zz__readerz00();
						if ((BgL_casezd2valuezd2_1097 == BGl_symbol1673z00zz__tvectorz00))
							{	/* Llib/tvector.scm 142 */
								BgL_arg1190z00_1096 =
									BGl_stringzd2upcasezd2zz__r4_strings_6_7z00(string_to_bstring
									(BgL_idz00_25));
							}
						else
							{	/* Llib/tvector.scm 142 */
								if (
									(BgL_casezd2valuezd2_1097 == BGl_symbol1675z00zz__tvectorz00))
									{	/* Llib/tvector.scm 142 */
										BgL_arg1190z00_1096 =
											BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
											(string_to_bstring(BgL_idz00_25));
									}
								else
									{	/* Llib/tvector.scm 142 */
										BgL_arg1190z00_1096 = string_to_bstring(BgL_idz00_25);
									}
							}
					}
					BgL_idz00_1091 = bstring_to_symbol(BgL_arg1190z00_1096);
				}
				{	/* Llib/tvector.scm 142 */
					obj_t BgL_oldz00_1092;

					if (NULLP(BGl_za2tvectorzd2tableza2zd2zz__tvectorz00))
						{	/* Llib/tvector.scm 128 */
							BgL_oldz00_1092 = BFALSE;
						}
					else
						{	/* Llib/tvector.scm 129 */
							obj_t BgL_cellz00_1568;

							BgL_cellz00_1568 =
								BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_1091,
								BGl_za2tvectorzd2tableza2zd2zz__tvectorz00);
							if (PAIRP(BgL_cellz00_1568))
								{	/* Llib/tvector.scm 130 */
									BgL_oldz00_1092 = CDR(BgL_cellz00_1568);
								}
							else
								{	/* Llib/tvector.scm 130 */
									BgL_oldz00_1092 = BFALSE;
								}
						}
					{	/* Llib/tvector.scm 149 */

						{	/* Llib/tvector.scm 150 */
							bool_t BgL_test1737z00_2020;

							if (STRUCTP(BgL_oldz00_1092))
								{	/* Llib/tvector.scm 113 */
									BgL_test1737z00_2020 =
										(STRUCT_KEY(BgL_oldz00_1092) ==
										BGl_symbol1677z00zz__tvectorz00);
								}
							else
								{	/* Llib/tvector.scm 113 */
									BgL_test1737z00_2020 = ((bool_t) 0);
								}
							if (BgL_test1737z00_2020)
								{	/* Llib/tvector.scm 150 */
									return BgL_oldz00_1092;
								}
							else
								{	/* Llib/tvector.scm 151 */
									obj_t BgL_newz00_1094;

									{	/* Llib/tvector.scm 113 */
										obj_t BgL_newz00_1579;

										BgL_newz00_1579 =
											create_struct(BGl_symbol1677z00zz__tvectorz00,
											(int) (((long) 4)));
										{	/* Llib/tvector.scm 113 */
											int BgL_tmpz00_2027;

											BgL_tmpz00_2027 = (int) (((long) 3));
											STRUCT_SET(BgL_newz00_1579, BgL_tmpz00_2027,
												BgL_setz00_28);
										}
										{	/* Llib/tvector.scm 113 */
											int BgL_tmpz00_2030;

											BgL_tmpz00_2030 = (int) (((long) 2));
											STRUCT_SET(BgL_newz00_1579, BgL_tmpz00_2030,
												BgL_refz00_27);
										}
										{	/* Llib/tvector.scm 113 */
											int BgL_tmpz00_2033;

											BgL_tmpz00_2033 = (int) (((long) 1));
											STRUCT_SET(BgL_newz00_1579, BgL_tmpz00_2033,
												BgL_allocatez00_26);
										}
										{	/* Llib/tvector.scm 113 */
											int BgL_tmpz00_2036;

											BgL_tmpz00_2036 = (int) (((long) 0));
											STRUCT_SET(BgL_newz00_1579, BgL_tmpz00_2036,
												BgL_idz00_1091);
										}
										BgL_newz00_1094 = BgL_newz00_1579;
									}
									{	/* Llib/tvector.scm 152 */
										obj_t BgL_arg1186z00_1095;

										BgL_arg1186z00_1095 =
											MAKE_YOUNG_PAIR(BgL_idz00_1091, BgL_newz00_1094);
										BGl_za2tvectorzd2tableza2zd2zz__tvectorz00 =
											MAKE_YOUNG_PAIR(BgL_arg1186z00_1095,
											BGl_za2tvectorzd2tableza2zd2zz__tvectorz00);
									}
									return BgL_newz00_1094;
								}
						}
					}
				}
			}
		}

	}



/* &declare-tvector! */
	obj_t BGl_z62declarezd2tvectorz12za2zz__tvectorz00(obj_t BgL_envz00_1913,
		obj_t BgL_idz00_1914, obj_t BgL_allocatez00_1915, obj_t BgL_refz00_1916,
		obj_t BgL_setz00_1917)
	{
		{	/* Llib/tvector.scm 141 */
			{	/* Llib/tvector.scm 142 */
				obj_t BgL_auxz00_2050;
				char *BgL_auxz00_2041;

				if (PROCEDUREP(BgL_allocatez00_1915))
					{	/* Llib/tvector.scm 142 */
						BgL_auxz00_2050 = BgL_allocatez00_1915;
					}
				else
					{
						obj_t BgL_auxz00_2053;

						BgL_auxz00_2053 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__tvectorz00,
							BINT(((long) 5790)), BGl_string1679z00zz__tvectorz00,
							BGl_string1681z00zz__tvectorz00, BgL_allocatez00_1915);
						FAILURE(BgL_auxz00_2053, BFALSE, BFALSE);
					}
				{	/* Llib/tvector.scm 142 */
					obj_t BgL_tmpz00_2042;

					if (STRINGP(BgL_idz00_1914))
						{	/* Llib/tvector.scm 142 */
							BgL_tmpz00_2042 = BgL_idz00_1914;
						}
					else
						{
							obj_t BgL_auxz00_2045;

							BgL_auxz00_2045 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__tvectorz00,
								BINT(((long) 5790)), BGl_string1679z00zz__tvectorz00,
								BGl_string1680z00zz__tvectorz00, BgL_idz00_1914);
							FAILURE(BgL_auxz00_2045, BFALSE, BFALSE);
						}
					BgL_auxz00_2041 = BSTRING_TO_STRING(BgL_tmpz00_2042);
				}
				return
					BGl_declarezd2tvectorz12zc0zz__tvectorz00(BgL_auxz00_2041,
					BgL_auxz00_2050, BgL_refz00_1916, BgL_setz00_1917);
			}
		}

	}



/* tvector-ref */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t
		BgL_tvectorz00_29)
	{
		{	/* Llib/tvector.scm 159 */
			return STRUCT_REF(TVECTOR_DESCR(BgL_tvectorz00_29), (int) (((long) 2)));
		}

	}



/* &tvector-ref */
	obj_t BGl_z62tvectorzd2refzb0zz__tvectorz00(obj_t BgL_envz00_1918,
		obj_t BgL_tvectorz00_1919)
	{
		{	/* Llib/tvector.scm 159 */
			{	/* Llib/tvector.scm 160 */
				obj_t BgL_auxz00_2061;

				if (TVECTORP(BgL_tvectorz00_1919))
					{	/* Llib/tvector.scm 160 */
						BgL_auxz00_2061 = BgL_tvectorz00_1919;
					}
				else
					{
						obj_t BgL_auxz00_2064;

						BgL_auxz00_2064 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__tvectorz00,
							BINT(((long) 6511)), BGl_string1682z00zz__tvectorz00,
							BGl_string1669z00zz__tvectorz00, BgL_tvectorz00_1919);
						FAILURE(BgL_auxz00_2064, BFALSE, BFALSE);
					}
				return BGl_tvectorzd2refzd2zz__tvectorz00(BgL_auxz00_2061);
			}
		}

	}



/* list->tvector */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3tvectorz31zz__tvectorz00(obj_t
		BgL_idz00_30, obj_t BgL_lz00_31)
	{
		{	/* Llib/tvector.scm 165 */
			{	/* Llib/tvector.scm 166 */
				obj_t BgL_descrz00_1103;

				if (NULLP(BGl_za2tvectorzd2tableza2zd2zz__tvectorz00))
					{	/* Llib/tvector.scm 128 */
						BgL_descrz00_1103 = BFALSE;
					}
				else
					{	/* Llib/tvector.scm 129 */
						obj_t BgL_cellz00_1588;

						BgL_cellz00_1588 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_30,
							BGl_za2tvectorzd2tableza2zd2zz__tvectorz00);
						if (PAIRP(BgL_cellz00_1588))
							{	/* Llib/tvector.scm 130 */
								BgL_descrz00_1103 = CDR(BgL_cellz00_1588);
							}
						else
							{	/* Llib/tvector.scm 130 */
								BgL_descrz00_1103 = BFALSE;
							}
					}
				if (CBOOL(BgL_descrz00_1103))
					{	/* Llib/tvector.scm 169 */
						obj_t BgL_allocatez00_1104;
						obj_t BgL_setz00_1105;

						BgL_allocatez00_1104 =
							STRUCT_REF(((obj_t) BgL_descrz00_1103), (int) (((long) 1)));
						BgL_setz00_1105 =
							STRUCT_REF(((obj_t) BgL_descrz00_1103), (int) (((long) 3)));
						if (PROCEDUREP(BgL_setz00_1105))
							{	/* Llib/tvector.scm 175 */
								long BgL_lenz00_1107;

								BgL_lenz00_1107 = bgl_list_length(BgL_lz00_31);
								{	/* Llib/tvector.scm 175 */
									obj_t BgL_tvecz00_1108;

									BgL_tvecz00_1108 =
										PROCEDURE_ENTRY(BgL_allocatez00_1104) (BgL_allocatez00_1104,
										BINT(BgL_lenz00_1107), BEOA);
									{	/* Llib/tvector.scm 176 */

										{
											obj_t BgL_lz00_1616;
											long BgL_iz00_1617;

											BgL_lz00_1616 = BgL_lz00_31;
											BgL_iz00_1617 = ((long) 0);
										BgL_loopz00_1615:
											if (NULLP(BgL_lz00_1616))
												{	/* Llib/tvector.scm 179 */
													return BgL_tvecz00_1108;
												}
											else
												{	/* Llib/tvector.scm 179 */
													{	/* Llib/tvector.scm 182 */
														obj_t BgL_arg1208z00_1623;

														BgL_arg1208z00_1623 = CAR(((obj_t) BgL_lz00_1616));
														PROCEDURE_ENTRY(BgL_setz00_1105) (BgL_setz00_1105,
															BgL_tvecz00_1108, BINT(BgL_iz00_1617),
															BgL_arg1208z00_1623, BEOA);
													}
													{	/* Llib/tvector.scm 183 */
														obj_t BgL_arg1211z00_1624;
														long BgL_arg1216z00_1625;

														BgL_arg1211z00_1624 = CDR(((obj_t) BgL_lz00_1616));
														BgL_arg1216z00_1625 = (BgL_iz00_1617 + ((long) 1));
														{
															long BgL_iz00_2106;
															obj_t BgL_lz00_2105;

															BgL_lz00_2105 = BgL_arg1211z00_1624;
															BgL_iz00_2106 = BgL_arg1216z00_1625;
															BgL_iz00_1617 = BgL_iz00_2106;
															BgL_lz00_1616 = BgL_lz00_2105;
															goto BgL_loopz00_1615;
														}
													}
												}
										}
									}
								}
							}
						else
							{	/* Llib/tvector.scm 171 */
								return
									BGl_errorz00zz__errorz00(BGl_string1683z00zz__tvectorz00,
									BGl_string1684z00zz__tvectorz00, BgL_idz00_30);
							}
					}
				else
					{	/* Llib/tvector.scm 167 */
						return
							BGl_errorz00zz__errorz00(BGl_string1683z00zz__tvectorz00,
							BGl_string1685z00zz__tvectorz00, BgL_idz00_30);
					}
			}
		}

	}



/* &list->tvector */
	obj_t BGl_z62listzd2ze3tvectorz53zz__tvectorz00(obj_t BgL_envz00_1920,
		obj_t BgL_idz00_1921, obj_t BgL_lz00_1922)
	{
		{	/* Llib/tvector.scm 165 */
			{	/* Llib/tvector.scm 166 */
				obj_t BgL_auxz00_2116;
				obj_t BgL_auxz00_2109;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_lz00_1922))
					{	/* Llib/tvector.scm 166 */
						BgL_auxz00_2116 = BgL_lz00_1922;
					}
				else
					{
						obj_t BgL_auxz00_2119;

						BgL_auxz00_2119 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__tvectorz00,
							BINT(((long) 6812)), BGl_string1686z00zz__tvectorz00,
							BGl_string1687z00zz__tvectorz00, BgL_lz00_1922);
						FAILURE(BgL_auxz00_2119, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_idz00_1921))
					{	/* Llib/tvector.scm 166 */
						BgL_auxz00_2109 = BgL_idz00_1921;
					}
				else
					{
						obj_t BgL_auxz00_2112;

						BgL_auxz00_2112 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__tvectorz00,
							BINT(((long) 6812)), BGl_string1686z00zz__tvectorz00,
							BGl_string1672z00zz__tvectorz00, BgL_idz00_1921);
						FAILURE(BgL_auxz00_2112, BFALSE, BFALSE);
					}
				return
					BGl_listzd2ze3tvectorz31zz__tvectorz00(BgL_auxz00_2109,
					BgL_auxz00_2116);
			}
		}

	}



/* vector->tvector */
	BGL_EXPORTED_DEF obj_t BGl_vectorzd2ze3tvectorz31zz__tvectorz00(obj_t
		BgL_idz00_32, obj_t BgL_vz00_33)
	{
		{	/* Llib/tvector.scm 188 */
			{	/* Llib/tvector.scm 189 */
				obj_t BgL_descrz00_1118;

				if (NULLP(BGl_za2tvectorzd2tableza2zd2zz__tvectorz00))
					{	/* Llib/tvector.scm 128 */
						BgL_descrz00_1118 = BFALSE;
					}
				else
					{	/* Llib/tvector.scm 129 */
						obj_t BgL_cellz00_1633;

						BgL_cellz00_1633 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_32,
							BGl_za2tvectorzd2tableza2zd2zz__tvectorz00);
						if (PAIRP(BgL_cellz00_1633))
							{	/* Llib/tvector.scm 130 */
								BgL_descrz00_1118 = CDR(BgL_cellz00_1633);
							}
						else
							{	/* Llib/tvector.scm 130 */
								BgL_descrz00_1118 = BFALSE;
							}
					}
				if (CBOOL(BgL_descrz00_1118))
					{	/* Llib/tvector.scm 192 */
						obj_t BgL_allocatez00_1119;
						obj_t BgL_setz00_1120;

						BgL_allocatez00_1119 =
							STRUCT_REF(((obj_t) BgL_descrz00_1118), (int) (((long) 1)));
						BgL_setz00_1120 =
							STRUCT_REF(((obj_t) BgL_descrz00_1118), (int) (((long) 3)));
						if (PROCEDUREP(BgL_setz00_1120))
							{	/* Llib/tvector.scm 198 */
								obj_t BgL_tvecz00_1123;

								BgL_tvecz00_1123 =
									PROCEDURE_ENTRY(BgL_allocatez00_1119) (BgL_allocatez00_1119,
									BINT(VECTOR_LENGTH(BgL_vz00_33)), BEOA);
								{	/* Llib/tvector.scm 199 */

									{	/* Llib/tvector.scm 200 */
										long BgL_g1040z00_1124;

										BgL_g1040z00_1124 =
											(VECTOR_LENGTH(BgL_vz00_33) - ((long) 1));
										{
											long BgL_iz00_1126;

											BgL_iz00_1126 = BgL_g1040z00_1124;
										BgL_zc3z04anonymousza31218ze3z87_1127:
											if ((BgL_iz00_1126 == ((long) -1)))
												{	/* Llib/tvector.scm 201 */
													return BgL_tvecz00_1123;
												}
											else
												{	/* Llib/tvector.scm 201 */
													{	/* Llib/tvector.scm 204 */
														obj_t BgL_arg1221z00_1129;

														BgL_arg1221z00_1129 =
															VECTOR_REF(BgL_vz00_33, BgL_iz00_1126);
														PROCEDURE_ENTRY(BgL_setz00_1120) (BgL_setz00_1120,
															BgL_tvecz00_1123, BINT(BgL_iz00_1126),
															BgL_arg1221z00_1129, BEOA);
													}
													{
														long BgL_iz00_2158;

														BgL_iz00_2158 = (BgL_iz00_1126 - ((long) 1));
														BgL_iz00_1126 = BgL_iz00_2158;
														goto BgL_zc3z04anonymousza31218ze3z87_1127;
													}
												}
										}
									}
								}
							}
						else
							{	/* Llib/tvector.scm 194 */
								return
									BGl_errorz00zz__errorz00(BGl_string1688z00zz__tvectorz00,
									BGl_string1684z00zz__tvectorz00, BgL_idz00_32);
							}
					}
				else
					{	/* Llib/tvector.scm 190 */
						return
							BGl_errorz00zz__errorz00(BGl_string1688z00zz__tvectorz00,
							BGl_string1685z00zz__tvectorz00, BgL_idz00_32);
					}
			}
		}

	}



/* &vector->tvector */
	obj_t BGl_z62vectorzd2ze3tvectorz53zz__tvectorz00(obj_t BgL_envz00_1923,
		obj_t BgL_idz00_1924, obj_t BgL_vz00_1925)
	{
		{	/* Llib/tvector.scm 188 */
			{	/* Llib/tvector.scm 189 */
				obj_t BgL_auxz00_2169;
				obj_t BgL_auxz00_2162;

				if (VECTORP(BgL_vz00_1925))
					{	/* Llib/tvector.scm 189 */
						BgL_auxz00_2169 = BgL_vz00_1925;
					}
				else
					{
						obj_t BgL_auxz00_2172;

						BgL_auxz00_2172 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__tvectorz00,
							BINT(((long) 7607)), BGl_string1689z00zz__tvectorz00,
							BGl_string1690z00zz__tvectorz00, BgL_vz00_1925);
						FAILURE(BgL_auxz00_2172, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_idz00_1924))
					{	/* Llib/tvector.scm 189 */
						BgL_auxz00_2162 = BgL_idz00_1924;
					}
				else
					{
						obj_t BgL_auxz00_2165;

						BgL_auxz00_2165 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__tvectorz00,
							BINT(((long) 7607)), BGl_string1689z00zz__tvectorz00,
							BGl_string1672z00zz__tvectorz00, BgL_idz00_1924);
						FAILURE(BgL_auxz00_2165, BFALSE, BFALSE);
					}
				return
					BGl_vectorzd2ze3tvectorz31zz__tvectorz00(BgL_auxz00_2162,
					BgL_auxz00_2169);
			}
		}

	}



/* tvector->vector */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2ze3vectorz31zz__tvectorz00(obj_t
		BgL_tvz00_34)
	{
		{	/* Llib/tvector.scm 210 */
			{	/* Llib/tvector.scm 211 */
				obj_t BgL_descrz00_1132;

				BgL_descrz00_1132 = TVECTOR_DESCR(BgL_tvz00_34);
				{	/* Llib/tvector.scm 212 */
					obj_t BgL_refz00_1134;

					BgL_refz00_1134 =
						STRUCT_REF(((obj_t) BgL_descrz00_1132), (int) (((long) 2)));
					if (PROCEDUREP(BgL_refz00_1134))
						{	/* Llib/tvector.scm 218 */
							int BgL_lenz00_1136;

							BgL_lenz00_1136 = TVECTOR_LENGTH(BgL_tvz00_34);
							{	/* Llib/tvector.scm 218 */
								obj_t BgL_vecz00_1137;

								BgL_vecz00_1137 = create_vector((long) (BgL_lenz00_1136));
								{	/* Llib/tvector.scm 219 */

									{	/* Llib/tvector.scm 220 */
										long BgL_g1041z00_1138;

										BgL_g1041z00_1138 = ((long) (BgL_lenz00_1136) - ((long) 1));
										{
											long BgL_iz00_1140;

											BgL_iz00_1140 = BgL_g1041z00_1138;
										BgL_zc3z04anonymousza31225ze3z87_1141:
											if ((BgL_iz00_1140 == ((long) -1)))
												{	/* Llib/tvector.scm 221 */
													return BgL_vecz00_1137;
												}
											else
												{	/* Llib/tvector.scm 221 */
													{	/* Llib/tvector.scm 224 */
														obj_t BgL_arg1227z00_1143;

														BgL_arg1227z00_1143 =
															PROCEDURE_ENTRY(BgL_refz00_1134) (BgL_refz00_1134,
															BgL_tvz00_34, BINT(BgL_iz00_1140), BEOA);
														VECTOR_SET(BgL_vecz00_1137, BgL_iz00_1140,
															BgL_arg1227z00_1143);
													}
													{
														long BgL_iz00_2197;

														BgL_iz00_2197 = (BgL_iz00_1140 - ((long) 1));
														BgL_iz00_1140 = BgL_iz00_2197;
														goto BgL_zc3z04anonymousza31225ze3z87_1141;
													}
												}
										}
									}
								}
							}
						}
					else
						{	/* Llib/tvector.scm 217 */
							obj_t BgL_arg1232z00_1146;

							BgL_arg1232z00_1146 =
								STRUCT_REF(((obj_t) BgL_descrz00_1132), (int) (((long) 0)));
							return
								BGl_errorz00zz__errorz00(BGl_string1691z00zz__tvectorz00,
								BGl_string1684z00zz__tvectorz00, BgL_arg1232z00_1146);
						}
				}
			}
		}

	}



/* &tvector->vector */
	obj_t BGl_z62tvectorzd2ze3vectorz53zz__tvectorz00(obj_t BgL_envz00_1926,
		obj_t BgL_tvz00_1927)
	{
		{	/* Llib/tvector.scm 210 */
			{	/* Llib/tvector.scm 211 */
				obj_t BgL_auxz00_2203;

				if (TVECTORP(BgL_tvz00_1927))
					{	/* Llib/tvector.scm 211 */
						BgL_auxz00_2203 = BgL_tvz00_1927;
					}
				else
					{
						obj_t BgL_auxz00_2206;

						BgL_auxz00_2206 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1667z00zz__tvectorz00,
							BINT(((long) 8400)), BGl_string1692z00zz__tvectorz00,
							BGl_string1669z00zz__tvectorz00, BgL_tvz00_1927);
						FAILURE(BgL_auxz00_2206, BFALSE, BFALSE);
					}
				return BGl_tvectorzd2ze3vectorz31zz__tvectorz00(BgL_auxz00_2203);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__tvectorz00()
	{
		{	/* Llib/tvector.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__tvectorz00()
	{
		{	/* Llib/tvector.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__tvectorz00()
	{
		{	/* Llib/tvector.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__tvectorz00()
	{
		{	/* Llib/tvector.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1693z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 214649622),
				BSTRING_TO_STRING(BGl_string1693z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string1693z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1693z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1693z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1693z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1693z00zz__tvectorz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1693z00zz__tvectorz00));
			return
				BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long)
					460263341), BSTRING_TO_STRING(BGl_string1693z00zz__tvectorz00));
		}

	}

#ifdef __cplusplus
}
#endif
