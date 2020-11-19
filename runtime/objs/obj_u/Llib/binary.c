/*===========================================================================*/
/*   (Llib/binary.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/binary.scm -indent -o objs/obj_u/Llib/binary.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62inputzd2stringzb0zz__binaryz00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__binaryz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62outputzd2stringzb0zz__binaryz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62appendzd2outputzd2binaryzd2filezb0zz__binaryz00(obj_t,
		obj_t);
	extern int bgl_input_fill_string(obj_t, obj_t);
	extern obj_t output_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_closezd2binaryzd2portz00zz__binaryz00(obj_t);
	extern obj_t input_obj(obj_t);
	static obj_t BGl_genericzd2initzd2zz__binaryz00();
	static obj_t BGl_objectzd2initzd2zz__binaryz00();
	extern obj_t open_input_binary_file(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	BGL_EXPORTED_DECL int BGl_inputzd2fillzd2stringz12z12zz__binaryz00(obj_t,
		obj_t);
	extern obj_t bgl_input_string(obj_t, int);
	static obj_t BGl_z62binaryzd2portzf3z43zz__binaryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_outputzd2bytezd2zz__binaryz00(obj_t, char);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	extern int bgl_output_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__binaryz00();
	extern obj_t open_output_binary_file(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_flushzd2binaryzd2portz00zz__binaryz00(obj_t);
	extern obj_t close_binary_port(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_outputzd2stringzd2zz__binaryz00(obj_t, obj_t);
	static obj_t BGl_z62closezd2binaryzd2portz62zz__binaryz00(obj_t, obj_t);
	static obj_t BGl_z62outputzd2bytezb0zz__binaryz00(obj_t, obj_t, obj_t);
	extern obj_t append_output_binary_file(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_inputzd2stringzd2zz__binaryz00(obj_t, int);
	static obj_t BGl_z62openzd2inputzd2binaryzd2filezb0zz__binaryz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_outputzd2objzd2zz__binaryz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_outputzd2charzd2zz__binaryz00(obj_t,
		unsigned char);
	static obj_t BGl_gczd2rootszd2initz00zz__binaryz00();
	extern obj_t bgl_flush_binary_port(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__binaryz00();
	static obj_t BGl_z62inputzd2objzb0zz__binaryz00(obj_t, obj_t);
	static obj_t BGl_z62outputzd2objzb0zz__binaryz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62flushzd2binaryzd2portz62zz__binaryz00(obj_t, obj_t);
	static obj_t BGl_z62inputzd2fillzd2stringz12z70zz__binaryz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_binaryzd2portzf3z21zz__binaryz00(obj_t);
	static obj_t BGl_z62openzd2outputzd2binaryzd2filezb0zz__binaryz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_inputzd2charzd2zz__binaryz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_inputzd2objzd2zz__binaryz00(obj_t);
	static obj_t BGl_z62inputzd2charzb0zz__binaryz00(obj_t, obj_t);
	static obj_t BGl_z62outputzd2charzb0zz__binaryz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2inputzd2binaryzd2filezd2envz00zz__binaryz00,
		BgL_bgl_za762openza7d2inputza71663za7,
		BGl_z62openzd2inputzd2binaryzd2filezb0zz__binaryz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_inputzd2stringzd2envz00zz__binaryz00,
		BgL_bgl_za762inputza7d2strin1664z00, BGl_z62inputzd2stringzb0zz__binaryz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_outputzd2stringzd2envz00zz__binaryz00,
		BgL_bgl_za762outputza7d2stri1665z00, BGl_z62outputzd2stringzb0zz__binaryz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_flushzd2binaryzd2portzd2envzd2zz__binaryz00,
		BgL_bgl_za762flushza7d2binar1666z00,
		BGl_z62flushzd2binaryzd2portz62zz__binaryz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_openzd2outputzd2binaryzd2filezd2envz00zz__binaryz00,
		BgL_bgl_za762openza7d2output1667z00,
		BGl_z62openzd2outputzd2binaryzd2filezb0zz__binaryz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_outputzd2charzd2envz00zz__binaryz00,
		BgL_bgl_za762outputza7d2char1668z00, BGl_z62outputzd2charzb0zz__binaryz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_inputzd2charzd2envz00zz__binaryz00,
		BgL_bgl_za762inputza7d2charza71669za7, BGl_z62inputzd2charzb0zz__binaryz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1644z00zz__binaryz00,
		BgL_bgl_string1644za700za7za7_1670za7, "/tmp/4.4a/runtime/Llib/binary.scm",
		33);
	      DEFINE_STRING(BGl_string1645z00zz__binaryz00,
		BgL_bgl_string1645za700za7za7_1671za7, "&open-output-binary-file", 24);
	      DEFINE_STRING(BGl_string1646z00zz__binaryz00,
		BgL_bgl_string1646za700za7za7_1672za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1647z00zz__binaryz00,
		BgL_bgl_string1647za700za7za7_1673za7, "&append-output-binary-file", 26);
	      DEFINE_STRING(BGl_string1648z00zz__binaryz00,
		BgL_bgl_string1648za700za7za7_1674za7, "&open-input-binary-file", 23);
	      DEFINE_STRING(BGl_string1649z00zz__binaryz00,
		BgL_bgl_string1649za700za7za7_1675za7, "&close-binary-port", 18);
	      DEFINE_STRING(BGl_string1650z00zz__binaryz00,
		BgL_bgl_string1650za700za7za7_1676za7, "binary-port", 11);
	      DEFINE_STRING(BGl_string1651z00zz__binaryz00,
		BgL_bgl_string1651za700za7za7_1677za7, "&flush-binary-port", 18);
	      DEFINE_STRING(BGl_string1652z00zz__binaryz00,
		BgL_bgl_string1652za700za7za7_1678za7, "&input-obj", 10);
	      DEFINE_STRING(BGl_string1653z00zz__binaryz00,
		BgL_bgl_string1653za700za7za7_1679za7, "&output-obj", 11);
	      DEFINE_STRING(BGl_string1654z00zz__binaryz00,
		BgL_bgl_string1654za700za7za7_1680za7, "&output-char", 12);
	      DEFINE_STRING(BGl_string1655z00zz__binaryz00,
		BgL_bgl_string1655za700za7za7_1681za7, "bchar", 5);
	      DEFINE_STRING(BGl_string1656z00zz__binaryz00,
		BgL_bgl_string1656za700za7za7_1682za7, "&output-byte", 12);
	      DEFINE_STRING(BGl_string1657z00zz__binaryz00,
		BgL_bgl_string1657za700za7za7_1683za7, "bint", 4);
	      DEFINE_STRING(BGl_string1658z00zz__binaryz00,
		BgL_bgl_string1658za700za7za7_1684za7, "&input-char", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inputzd2fillzd2stringz12zd2envzc0zz__binaryz00,
		BgL_bgl_za762inputza7d2fillza71685za7,
		BGl_z62inputzd2fillzd2stringz12z70zz__binaryz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1659z00zz__binaryz00,
		BgL_bgl_string1659za700za7za7_1686za7, "&output-string", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_closezd2binaryzd2portzd2envzd2zz__binaryz00,
		BgL_bgl_za762closeza7d2binar1687z00,
		BGl_z62closezd2binaryzd2portz62zz__binaryz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1660z00zz__binaryz00,
		BgL_bgl_string1660za700za7za7_1688za7, "&input-string", 13);
	      DEFINE_STRING(BGl_string1661z00zz__binaryz00,
		BgL_bgl_string1661za700za7za7_1689za7, "&input-fill-string!", 19);
	      DEFINE_STRING(BGl_string1662z00zz__binaryz00,
		BgL_bgl_string1662za700za7za7_1690za7, "__binary", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_outputzd2bytezd2envz00zz__binaryz00,
		BgL_bgl_za762outputza7d2byte1691z00, BGl_z62outputzd2bytezb0zz__binaryz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_binaryzd2portzf3zd2envzf3zz__binaryz00,
		BgL_bgl_za762binaryza7d2port1692z00,
		BGl_z62binaryzd2portzf3z43zz__binaryz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_outputzd2objzd2envz00zz__binaryz00,
		BgL_bgl_za762outputza7d2objza71693za7, BGl_z62outputzd2objzb0zz__binaryz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd2outputzd2binaryzd2filezd2envz00zz__binaryz00,
		BgL_bgl_za762appendza7d2outp1694z00,
		BGl_z62appendzd2outputzd2binaryzd2filezb0zz__binaryz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_inputzd2objzd2envz00zz__binaryz00,
		BgL_bgl_za762inputza7d2objza7b1695za7, BGl_z62inputzd2objzb0zz__binaryz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__binaryz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long
		BgL_checksumz00_1936, char *BgL_fromz00_1937)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__binaryz00))
				{
					BGl_requirezd2initializa7ationz75zz__binaryz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__binaryz00();
					BGl_importedzd2moduleszd2initz00zz__binaryz00();
					return BGl_methodzd2initzd2zz__binaryz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__binaryz00()
	{
		{	/* Llib/binary.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* binary-port? */
	BGL_EXPORTED_DEF bool_t BGl_binaryzd2portzf3z21zz__binaryz00(obj_t
		BgL_objz00_3)
	{
		{	/* Llib/binary.scm 138 */
			return BINARY_PORTP(BgL_objz00_3);
		}

	}



/* &binary-port? */
	obj_t BGl_z62binaryzd2portzf3z43zz__binaryz00(obj_t BgL_envz00_1865,
		obj_t BgL_objz00_1866)
	{
		{	/* Llib/binary.scm 138 */
			return BBOOL(BGl_binaryzd2portzf3z21zz__binaryz00(BgL_objz00_1866));
		}

	}



/* open-output-binary-file */
	BGL_EXPORTED_DEF obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t
		BgL_strz00_4)
	{
		{	/* Llib/binary.scm 144 */
			return open_output_binary_file(BgL_strz00_4);
		}

	}



/* &open-output-binary-file */
	obj_t BGl_z62openzd2outputzd2binaryzd2filezb0zz__binaryz00(obj_t
		BgL_envz00_1867, obj_t BgL_strz00_1868)
	{
		{	/* Llib/binary.scm 144 */
			{	/* Llib/binary.scm 145 */
				obj_t BgL_auxz00_1949;

				if (STRINGP(BgL_strz00_1868))
					{	/* Llib/binary.scm 145 */
						BgL_auxz00_1949 = BgL_strz00_1868;
					}
				else
					{
						obj_t BgL_auxz00_1952;

						BgL_auxz00_1952 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 5623)), BGl_string1645z00zz__binaryz00,
							BGl_string1646z00zz__binaryz00, BgL_strz00_1868);
						FAILURE(BgL_auxz00_1952, BFALSE, BFALSE);
					}
				return
					BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(BgL_auxz00_1949);
			}
		}

	}



/* append-output-binary-file */
	BGL_EXPORTED_DEF obj_t
		BGl_appendzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t BgL_strz00_5)
	{
		{	/* Llib/binary.scm 150 */
			return append_output_binary_file(BgL_strz00_5);
		}

	}



/* &append-output-binary-file */
	obj_t BGl_z62appendzd2outputzd2binaryzd2filezb0zz__binaryz00(obj_t
		BgL_envz00_1869, obj_t BgL_strz00_1870)
	{
		{	/* Llib/binary.scm 150 */
			{	/* Llib/binary.scm 151 */
				obj_t BgL_auxz00_1958;

				if (STRINGP(BgL_strz00_1870))
					{	/* Llib/binary.scm 151 */
						BgL_auxz00_1958 = BgL_strz00_1870;
					}
				else
					{
						obj_t BgL_auxz00_1961;

						BgL_auxz00_1961 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 5921)), BGl_string1647z00zz__binaryz00,
							BGl_string1646z00zz__binaryz00, BgL_strz00_1870);
						FAILURE(BgL_auxz00_1961, BFALSE, BFALSE);
					}
				return
					BGl_appendzd2outputzd2binaryzd2filezd2zz__binaryz00(BgL_auxz00_1958);
			}
		}

	}



/* open-input-binary-file */
	BGL_EXPORTED_DEF obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t
		BgL_strz00_6)
	{
		{	/* Llib/binary.scm 156 */
			return open_input_binary_file(BgL_strz00_6);
		}

	}



/* &open-input-binary-file */
	obj_t BGl_z62openzd2inputzd2binaryzd2filezb0zz__binaryz00(obj_t
		BgL_envz00_1871, obj_t BgL_strz00_1872)
	{
		{	/* Llib/binary.scm 156 */
			{	/* Llib/binary.scm 157 */
				obj_t BgL_auxz00_1967;

				if (STRINGP(BgL_strz00_1872))
					{	/* Llib/binary.scm 157 */
						BgL_auxz00_1967 = BgL_strz00_1872;
					}
				else
					{
						obj_t BgL_auxz00_1970;

						BgL_auxz00_1970 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 6218)), BGl_string1648z00zz__binaryz00,
							BGl_string1646z00zz__binaryz00, BgL_strz00_1872);
						FAILURE(BgL_auxz00_1970, BFALSE, BFALSE);
					}
				return
					BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(BgL_auxz00_1967);
			}
		}

	}



/* close-binary-port */
	BGL_EXPORTED_DEF obj_t BGl_closezd2binaryzd2portz00zz__binaryz00(obj_t
		BgL_portz00_7)
	{
		{	/* Llib/binary.scm 162 */
			return close_binary_port(BgL_portz00_7);
		}

	}



/* &close-binary-port */
	obj_t BGl_z62closezd2binaryzd2portz62zz__binaryz00(obj_t BgL_envz00_1873,
		obj_t BgL_portz00_1874)
	{
		{	/* Llib/binary.scm 162 */
			{	/* Llib/binary.scm 163 */
				obj_t BgL_auxz00_1976;

				if (BINARY_PORTP(BgL_portz00_1874))
					{	/* Llib/binary.scm 163 */
						BgL_auxz00_1976 = BgL_portz00_1874;
					}
				else
					{
						obj_t BgL_auxz00_1979;

						BgL_auxz00_1979 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 6515)), BGl_string1649z00zz__binaryz00,
							BGl_string1650z00zz__binaryz00, BgL_portz00_1874);
						FAILURE(BgL_auxz00_1979, BFALSE, BFALSE);
					}
				return BGl_closezd2binaryzd2portz00zz__binaryz00(BgL_auxz00_1976);
			}
		}

	}



/* flush-binary-port */
	BGL_EXPORTED_DEF obj_t BGl_flushzd2binaryzd2portz00zz__binaryz00(obj_t
		BgL_portz00_8)
	{
		{	/* Llib/binary.scm 168 */
			return bgl_flush_binary_port(BgL_portz00_8);
		}

	}



/* &flush-binary-port */
	obj_t BGl_z62flushzd2binaryzd2portz62zz__binaryz00(obj_t BgL_envz00_1875,
		obj_t BgL_portz00_1876)
	{
		{	/* Llib/binary.scm 168 */
			{	/* Llib/binary.scm 169 */
				obj_t BgL_auxz00_1985;

				if (BINARY_PORTP(BgL_portz00_1876))
					{	/* Llib/binary.scm 169 */
						BgL_auxz00_1985 = BgL_portz00_1876;
					}
				else
					{
						obj_t BgL_auxz00_1988;

						BgL_auxz00_1988 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 6808)), BGl_string1651z00zz__binaryz00,
							BGl_string1650z00zz__binaryz00, BgL_portz00_1876);
						FAILURE(BgL_auxz00_1988, BFALSE, BFALSE);
					}
				return BGl_flushzd2binaryzd2portz00zz__binaryz00(BgL_auxz00_1985);
			}
		}

	}



/* input-obj */
	BGL_EXPORTED_DEF obj_t BGl_inputzd2objzd2zz__binaryz00(obj_t BgL_portz00_9)
	{
		{	/* Llib/binary.scm 174 */
			return input_obj(BgL_portz00_9);
		}

	}



/* &input-obj */
	obj_t BGl_z62inputzd2objzb0zz__binaryz00(obj_t BgL_envz00_1877,
		obj_t BgL_portz00_1878)
	{
		{	/* Llib/binary.scm 174 */
			{	/* Llib/binary.scm 175 */
				obj_t BgL_auxz00_1994;

				if (BINARY_PORTP(BgL_portz00_1878))
					{	/* Llib/binary.scm 175 */
						BgL_auxz00_1994 = BgL_portz00_1878;
					}
				else
					{
						obj_t BgL_auxz00_1997;

						BgL_auxz00_1997 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 7093)), BGl_string1652z00zz__binaryz00,
							BGl_string1650z00zz__binaryz00, BgL_portz00_1878);
						FAILURE(BgL_auxz00_1997, BFALSE, BFALSE);
					}
				return BGl_inputzd2objzd2zz__binaryz00(BgL_auxz00_1994);
			}
		}

	}



/* output-obj */
	BGL_EXPORTED_DEF obj_t BGl_outputzd2objzd2zz__binaryz00(obj_t BgL_portz00_10,
		obj_t BgL_objz00_11)
	{
		{	/* Llib/binary.scm 180 */
			return output_obj(BgL_portz00_10, BgL_objz00_11);
		}

	}



/* &output-obj */
	obj_t BGl_z62outputzd2objzb0zz__binaryz00(obj_t BgL_envz00_1879,
		obj_t BgL_portz00_1880, obj_t BgL_objz00_1881)
	{
		{	/* Llib/binary.scm 180 */
			{	/* Llib/binary.scm 181 */
				obj_t BgL_auxz00_2003;

				if (BINARY_PORTP(BgL_portz00_1880))
					{	/* Llib/binary.scm 181 */
						BgL_auxz00_2003 = BgL_portz00_1880;
					}
				else
					{
						obj_t BgL_auxz00_2006;

						BgL_auxz00_2006 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 7375)), BGl_string1653z00zz__binaryz00,
							BGl_string1650z00zz__binaryz00, BgL_portz00_1880);
						FAILURE(BgL_auxz00_2006, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2objzd2zz__binaryz00(BgL_auxz00_2003, BgL_objz00_1881);
			}
		}

	}



/* output-char */
	BGL_EXPORTED_DEF obj_t BGl_outputzd2charzd2zz__binaryz00(obj_t BgL_portz00_12,
		unsigned char BgL_charz00_13)
	{
		{	/* Llib/binary.scm 186 */
			return BGL_OUTPUT_CHAR(BgL_portz00_12, BgL_charz00_13);
		}

	}



/* &output-char */
	obj_t BGl_z62outputzd2charzb0zz__binaryz00(obj_t BgL_envz00_1882,
		obj_t BgL_portz00_1883, obj_t BgL_charz00_1884)
	{
		{	/* Llib/binary.scm 186 */
			{	/* Llib/binary.scm 187 */
				unsigned char BgL_auxz00_2019;
				obj_t BgL_auxz00_2012;

				{	/* Llib/binary.scm 187 */
					obj_t BgL_tmpz00_2020;

					if (CHARP(BgL_charz00_1884))
						{	/* Llib/binary.scm 187 */
							BgL_tmpz00_2020 = BgL_charz00_1884;
						}
					else
						{
							obj_t BgL_auxz00_2023;

							BgL_auxz00_2023 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
								BINT(((long) 7669)), BGl_string1654z00zz__binaryz00,
								BGl_string1655z00zz__binaryz00, BgL_charz00_1884);
							FAILURE(BgL_auxz00_2023, BFALSE, BFALSE);
						}
					BgL_auxz00_2019 = CCHAR(BgL_tmpz00_2020);
				}
				if (BINARY_PORTP(BgL_portz00_1883))
					{	/* Llib/binary.scm 187 */
						BgL_auxz00_2012 = BgL_portz00_1883;
					}
				else
					{
						obj_t BgL_auxz00_2015;

						BgL_auxz00_2015 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 7669)), BGl_string1654z00zz__binaryz00,
							BGl_string1650z00zz__binaryz00, BgL_portz00_1883);
						FAILURE(BgL_auxz00_2015, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2charzd2zz__binaryz00(BgL_auxz00_2012, BgL_auxz00_2019);
			}
		}

	}



/* output-byte */
	BGL_EXPORTED_DEF obj_t BGl_outputzd2bytezd2zz__binaryz00(obj_t BgL_portz00_14,
		char BgL_charz00_15)
	{
		{	/* Llib/binary.scm 192 */
			return BGL_OUTPUT_CHAR(BgL_portz00_14, BgL_charz00_15);
		}

	}



/* &output-byte */
	obj_t BGl_z62outputzd2bytezb0zz__binaryz00(obj_t BgL_envz00_1885,
		obj_t BgL_portz00_1886, obj_t BgL_charz00_1887)
	{
		{	/* Llib/binary.scm 192 */
			{	/* Llib/binary.scm 193 */
				char BgL_auxz00_2037;
				obj_t BgL_auxz00_2030;

				{	/* Llib/binary.scm 193 */
					obj_t BgL_tmpz00_2038;

					if (INTEGERP(BgL_charz00_1887))
						{	/* Llib/binary.scm 193 */
							BgL_tmpz00_2038 = BgL_charz00_1887;
						}
					else
						{
							obj_t BgL_auxz00_2041;

							BgL_auxz00_2041 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
								BINT(((long) 7960)), BGl_string1656z00zz__binaryz00,
								BGl_string1657z00zz__binaryz00, BgL_charz00_1887);
							FAILURE(BgL_auxz00_2041, BFALSE, BFALSE);
						}
					BgL_auxz00_2037 = (signed char) CINT(BgL_tmpz00_2038);
				}
				if (BINARY_PORTP(BgL_portz00_1886))
					{	/* Llib/binary.scm 193 */
						BgL_auxz00_2030 = BgL_portz00_1886;
					}
				else
					{
						obj_t BgL_auxz00_2033;

						BgL_auxz00_2033 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 7960)), BGl_string1656z00zz__binaryz00,
							BGl_string1650z00zz__binaryz00, BgL_portz00_1886);
						FAILURE(BgL_auxz00_2033, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2bytezd2zz__binaryz00(BgL_auxz00_2030, BgL_auxz00_2037);
			}
		}

	}



/* input-char */
	BGL_EXPORTED_DEF obj_t BGl_inputzd2charzd2zz__binaryz00(obj_t BgL_portz00_16)
	{
		{	/* Llib/binary.scm 198 */
			{	/* Llib/binary.scm 199 */
				int BgL_charz00_1935;

				BgL_charz00_1935 = BGL_INPUT_CHAR(BgL_portz00_16);
				if (BGL_INT_EOFP(BgL_charz00_1935))
					{	/* Llib/binary.scm 200 */
						return BEOF;
					}
				else
					{	/* Llib/binary.scm 200 */
						return BCHAR(((long) (BgL_charz00_1935)));
		}}}

	}



/* &input-char */
	obj_t BGl_z62inputzd2charzb0zz__binaryz00(obj_t BgL_envz00_1888,
		obj_t BgL_portz00_1889)
	{
		{	/* Llib/binary.scm 198 */
			{	/* Llib/binary.scm 199 */
				obj_t BgL_auxz00_2053;

				if (BINARY_PORTP(BgL_portz00_1889))
					{	/* Llib/binary.scm 199 */
						BgL_auxz00_2053 = BgL_portz00_1889;
					}
				else
					{
						obj_t BgL_auxz00_2056;

						BgL_auxz00_2056 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 8245)), BGl_string1658z00zz__binaryz00,
							BGl_string1650z00zz__binaryz00, BgL_portz00_1889);
						FAILURE(BgL_auxz00_2056, BFALSE, BFALSE);
					}
				return BGl_inputzd2charzd2zz__binaryz00(BgL_auxz00_2053);
			}
		}

	}



/* output-string */
	BGL_EXPORTED_DEF obj_t BGl_outputzd2stringzd2zz__binaryz00(obj_t
		BgL_portz00_17, obj_t BgL_stringz00_18)
	{
		{	/* Llib/binary.scm 207 */
			return BINT(bgl_output_string(BgL_portz00_17, BgL_stringz00_18));
		}

	}



/* &output-string */
	obj_t BGl_z62outputzd2stringzb0zz__binaryz00(obj_t BgL_envz00_1890,
		obj_t BgL_portz00_1891, obj_t BgL_stringz00_1892)
	{
		{	/* Llib/binary.scm 207 */
			{	/* Llib/binary.scm 208 */
				obj_t BgL_auxz00_2070;
				obj_t BgL_auxz00_2063;

				if (STRINGP(BgL_stringz00_1892))
					{	/* Llib/binary.scm 208 */
						BgL_auxz00_2070 = BgL_stringz00_1892;
					}
				else
					{
						obj_t BgL_auxz00_2073;

						BgL_auxz00_2073 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 8609)), BGl_string1659z00zz__binaryz00,
							BGl_string1646z00zz__binaryz00, BgL_stringz00_1892);
						FAILURE(BgL_auxz00_2073, BFALSE, BFALSE);
					}
				if (BINARY_PORTP(BgL_portz00_1891))
					{	/* Llib/binary.scm 208 */
						BgL_auxz00_2063 = BgL_portz00_1891;
					}
				else
					{
						obj_t BgL_auxz00_2066;

						BgL_auxz00_2066 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 8609)), BGl_string1659z00zz__binaryz00,
							BGl_string1650z00zz__binaryz00, BgL_portz00_1891);
						FAILURE(BgL_auxz00_2066, BFALSE, BFALSE);
					}
				return
					BGl_outputzd2stringzd2zz__binaryz00(BgL_auxz00_2063, BgL_auxz00_2070);
			}
		}

	}



/* input-string */
	BGL_EXPORTED_DEF obj_t BGl_inputzd2stringzd2zz__binaryz00(obj_t
		BgL_portz00_19, int BgL_lenz00_20)
	{
		{	/* Llib/binary.scm 213 */
			return bgl_input_string(BgL_portz00_19, BgL_lenz00_20);
		}

	}



/* &input-string */
	obj_t BGl_z62inputzd2stringzb0zz__binaryz00(obj_t BgL_envz00_1893,
		obj_t BgL_portz00_1894, obj_t BgL_lenz00_1895)
	{
		{	/* Llib/binary.scm 213 */
			{	/* Llib/binary.scm 214 */
				int BgL_auxz00_2086;
				obj_t BgL_auxz00_2079;

				{	/* Llib/binary.scm 214 */
					obj_t BgL_tmpz00_2087;

					if (INTEGERP(BgL_lenz00_1895))
						{	/* Llib/binary.scm 214 */
							BgL_tmpz00_2087 = BgL_lenz00_1895;
						}
					else
						{
							obj_t BgL_auxz00_2090;

							BgL_auxz00_2090 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
								BINT(((long) 8904)), BGl_string1660z00zz__binaryz00,
								BGl_string1657z00zz__binaryz00, BgL_lenz00_1895);
							FAILURE(BgL_auxz00_2090, BFALSE, BFALSE);
						}
					BgL_auxz00_2086 = CINT(BgL_tmpz00_2087);
				}
				if (BINARY_PORTP(BgL_portz00_1894))
					{	/* Llib/binary.scm 214 */
						BgL_auxz00_2079 = BgL_portz00_1894;
					}
				else
					{
						obj_t BgL_auxz00_2082;

						BgL_auxz00_2082 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
							BINT(((long) 8904)), BGl_string1660z00zz__binaryz00,
							BGl_string1650z00zz__binaryz00, BgL_portz00_1894);
						FAILURE(BgL_auxz00_2082, BFALSE, BFALSE);
					}
				return
					BGl_inputzd2stringzd2zz__binaryz00(BgL_auxz00_2079, BgL_auxz00_2086);
			}
		}

	}



/* input-fill-string! */
	BGL_EXPORTED_DEF int BGl_inputzd2fillzd2stringz12z12zz__binaryz00(obj_t
		BgL_portz00_21, obj_t BgL_strz00_22)
	{
		{	/* Llib/binary.scm 219 */
			return bgl_input_fill_string(BgL_portz00_21, BgL_strz00_22);
		}

	}



/* &input-fill-string! */
	obj_t BGl_z62inputzd2fillzd2stringz12z70zz__binaryz00(obj_t BgL_envz00_1896,
		obj_t BgL_portz00_1897, obj_t BgL_strz00_1898)
	{
		{	/* Llib/binary.scm 219 */
			{	/* Llib/binary.scm 220 */
				int BgL_tmpz00_2097;

				{	/* Llib/binary.scm 220 */
					obj_t BgL_auxz00_2105;
					obj_t BgL_auxz00_2098;

					if (STRINGP(BgL_strz00_1898))
						{	/* Llib/binary.scm 220 */
							BgL_auxz00_2105 = BgL_strz00_1898;
						}
					else
						{
							obj_t BgL_auxz00_2108;

							BgL_auxz00_2108 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
								BINT(((long) 9201)), BGl_string1661z00zz__binaryz00,
								BGl_string1646z00zz__binaryz00, BgL_strz00_1898);
							FAILURE(BgL_auxz00_2108, BFALSE, BFALSE);
						}
					if (BINARY_PORTP(BgL_portz00_1897))
						{	/* Llib/binary.scm 220 */
							BgL_auxz00_2098 = BgL_portz00_1897;
						}
					else
						{
							obj_t BgL_auxz00_2101;

							BgL_auxz00_2101 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1644z00zz__binaryz00,
								BINT(((long) 9201)), BGl_string1661z00zz__binaryz00,
								BGl_string1650z00zz__binaryz00, BgL_portz00_1897);
							FAILURE(BgL_auxz00_2101, BFALSE, BFALSE);
						}
					BgL_tmpz00_2097 =
						BGl_inputzd2fillzd2stringz12z12zz__binaryz00(BgL_auxz00_2098,
						BgL_auxz00_2105);
				}
				return BINT(BgL_tmpz00_2097);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__binaryz00()
	{
		{	/* Llib/binary.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__binaryz00()
	{
		{	/* Llib/binary.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__binaryz00()
	{
		{	/* Llib/binary.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__binaryz00()
	{
		{	/* Llib/binary.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1662z00zz__binaryz00));
			BGl_modulezd2initializa7ationz75zz__intextz00(((long) 6305416),
				BSTRING_TO_STRING(BGl_string1662z00zz__binaryz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1662z00zz__binaryz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1662z00zz__binaryz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1662z00zz__binaryz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1662z00zz__binaryz00));
		}

	}

#ifdef __cplusplus
}
#endif
