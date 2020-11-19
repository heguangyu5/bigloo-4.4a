/*===========================================================================*/
/*   (Llib/struct.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/struct.scm -indent -o objs/obj_u/Llib/struct.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_structzd2refzd2zz__structurez00(obj_t, int);
	static obj_t BGl_z62makezd2structzb0zz__structurez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__structurez00 = BUNSPEC;
	static obj_t BGl_z62listzd2ze3structz53zz__structurez00(obj_t, obj_t);
	static obj_t BGl_z62structzd2refzb0zz__structurez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_structzd2lengthzd2zz__structurez00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_structzd2keyzd2zz__structurez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_listzd2ze3structz31zz__structurez00(obj_t);
	static obj_t BGl_z62structzd2keyzb0zz__structurez00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__structurez00();
	extern long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__structurez00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__structurez00();
	BGL_EXPORTED_DECL bool_t BGl_recordzf3zf3zz__structurez00(obj_t);
	static obj_t BGl_z62structzd2lengthzb0zz__structurez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_structzd2setz12zc0zz__structurez00(obj_t, int,
		obj_t);
	static obj_t BGl_z62structzd2updatez12za2zz__structurez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62recordzf3z91zz__structurez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2structzd2zz__structurez00(obj_t, int,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_structzf3zf3zz__structurez00(obj_t);
	static obj_t BGl_z62structzf3z91zz__structurez00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62structzd2ze3listz53zz__structurez00(obj_t, obj_t);
	extern obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_structzd2keyzd2setz12z12zz__structurez00(obj_t,
		obj_t);
	static obj_t BGl_z62structzd2keyzd2setz12z70zz__structurez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol1543z00zz__structurez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_structzd2updatez12zc0zz__structurez00(obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62structzd2setz12za2zz__structurez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2lengthzd2envz00zz__structurez00,
		BgL_bgl_za762structza7d2leng1549z00,
		BGl_z62structzd2lengthzb0zz__structurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2setz12zd2envz12zz__structurez00,
		BgL_bgl_za762structza7d2setza71550za7,
		BGl_z62structzd2setz12za2zz__structurez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3structzd2envze3zz__structurez00,
		BgL_bgl_za762listza7d2za7e3str1551za7,
		BGl_z62listzd2ze3structz53zz__structurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2updatez12zd2envz12zz__structurez00,
		BgL_bgl_za762structza7d2upda1552z00,
		BGl_z62structzd2updatez12za2zz__structurez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1529z00zz__structurez00,
		BgL_bgl_string1529za700za7za7_1553za7, "/tmp/4.4a/runtime/Llib/struct.scm",
		33);
	      DEFINE_STRING(BGl_string1530z00zz__structurez00,
		BgL_bgl_string1530za700za7za7_1554za7, "&make-struct", 12);
	      DEFINE_STRING(BGl_string1531z00zz__structurez00,
		BgL_bgl_string1531za700za7za7_1555za7, "symbol", 6);
	      DEFINE_STRING(BGl_string1532z00zz__structurez00,
		BgL_bgl_string1532za700za7za7_1556za7, "bint", 4);
	      DEFINE_STRING(BGl_string1533z00zz__structurez00,
		BgL_bgl_string1533za700za7za7_1557za7, "&struct-key", 11);
	      DEFINE_STRING(BGl_string1534z00zz__structurez00,
		BgL_bgl_string1534za700za7za7_1558za7, "struct", 6);
	      DEFINE_STRING(BGl_string1535z00zz__structurez00,
		BgL_bgl_string1535za700za7za7_1559za7, "&struct-key-set!", 16);
	      DEFINE_STRING(BGl_string1536z00zz__structurez00,
		BgL_bgl_string1536za700za7za7_1560za7, "&struct-length", 14);
	      DEFINE_STRING(BGl_string1537z00zz__structurez00,
		BgL_bgl_string1537za700za7za7_1561za7, "&struct-ref", 11);
	      DEFINE_STRING(BGl_string1538z00zz__structurez00,
		BgL_bgl_string1538za700za7za7_1562za7, "&struct-set!", 12);
	      DEFINE_STRING(BGl_string1539z00zz__structurez00,
		BgL_bgl_string1539za700za7za7_1563za7, "struct-update!", 14);
	      DEFINE_STRING(BGl_string1540z00zz__structurez00,
		BgL_bgl_string1540za700za7za7_1564za7, "Incompatible structures", 23);
	      DEFINE_STRING(BGl_string1541z00zz__structurez00,
		BgL_bgl_string1541za700za7za7_1565za7, "&struct-update!", 15);
	      DEFINE_STRING(BGl_string1542z00zz__structurez00,
		BgL_bgl_string1542za700za7za7_1566za7, "&struct->list", 13);
	      DEFINE_STRING(BGl_string1544z00zz__structurez00,
		BgL_bgl_string1544za700za7za7_1567za7, "list->struct", 12);
	      DEFINE_STRING(BGl_string1545z00zz__structurez00,
		BgL_bgl_string1545za700za7za7_1568za7, "Illegal struct key", 18);
	      DEFINE_STRING(BGl_string1546z00zz__structurez00,
		BgL_bgl_string1546za700za7za7_1569za7, "&list->struct", 13);
	      DEFINE_STRING(BGl_string1547z00zz__structurez00,
		BgL_bgl_string1547za700za7za7_1570za7, "pair", 4);
	      DEFINE_STRING(BGl_string1548z00zz__structurez00,
		BgL_bgl_string1548za700za7za7_1571za7, "__structure", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2structzd2envz00zz__structurez00,
		BgL_bgl_za762makeza7d2struct1572z00,
		BGl_z62makezd2structzb0zz__structurez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzf3zd2envz21zz__structurez00,
		BgL_bgl_za762structza7f3za791za71573z00,
		BGl_z62structzf3z91zz__structurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2ze3listzd2envze3zz__structurez00,
		BgL_bgl_za762structza7d2za7e3l1574za7,
		BGl_z62structzd2ze3listz53zz__structurez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2refzd2envz00zz__structurez00,
		BgL_bgl_za762structza7d2refza71575za7,
		BGl_z62structzd2refzb0zz__structurez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2keyzd2setz12zd2envzc0zz__structurez00,
		BgL_bgl_za762structza7d2keyza71576za7,
		BGl_z62structzd2keyzd2setz12z70zz__structurez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_structzd2keyzd2envz00zz__structurez00,
		BgL_bgl_za762structza7d2keyza71577za7,
		BGl_z62structzd2keyzb0zz__structurez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_recordzf3zd2envz21zz__structurez00,
		BgL_bgl_za762recordza7f3za791za71578z00,
		BGl_z62recordzf3z91zz__structurez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__structurez00));
		     ADD_ROOT((void *) (&BGl_symbol1543z00zz__structurez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long
		BgL_checksumz00_1300, char *BgL_fromz00_1301)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__structurez00))
				{
					BGl_requirezd2initializa7ationz75zz__structurez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__structurez00();
					BGl_cnstzd2initzd2zz__structurez00();
					return BGl_importedzd2moduleszd2initz00zz__structurez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__structurez00()
	{
		{	/* Llib/struct.scm 18 */
			return (BGl_symbol1543z00zz__structurez00 =
				bstring_to_symbol(BGl_string1544z00zz__structurez00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__structurez00()
	{
		{	/* Llib/struct.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* make-struct */
	BGL_EXPORTED_DEF obj_t BGl_makezd2structzd2zz__structurez00(obj_t
		BgL_keyz00_3, int BgL_lenz00_4, obj_t BgL_initz00_5)
	{
		{	/* Llib/struct.scm 119 */
			return make_struct(BgL_keyz00_3, BgL_lenz00_4, BgL_initz00_5);
		}

	}



/* &make-struct */
	obj_t BGl_z62makezd2structzb0zz__structurez00(obj_t BgL_envz00_1243,
		obj_t BgL_keyz00_1244, obj_t BgL_lenz00_1245, obj_t BgL_initz00_1246)
	{
		{	/* Llib/struct.scm 119 */
			{	/* Llib/struct.scm 120 */
				int BgL_auxz00_1318;
				obj_t BgL_auxz00_1311;

				{	/* Llib/struct.scm 120 */
					obj_t BgL_tmpz00_1319;

					if (INTEGERP(BgL_lenz00_1245))
						{	/* Llib/struct.scm 120 */
							BgL_tmpz00_1319 = BgL_lenz00_1245;
						}
					else
						{
							obj_t BgL_auxz00_1322;

							BgL_auxz00_1322 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1529z00zz__structurez00, BINT(((long) 5074)),
								BGl_string1530z00zz__structurez00,
								BGl_string1532z00zz__structurez00, BgL_lenz00_1245);
							FAILURE(BgL_auxz00_1322, BFALSE, BFALSE);
						}
					BgL_auxz00_1318 = CINT(BgL_tmpz00_1319);
				}
				if (SYMBOLP(BgL_keyz00_1244))
					{	/* Llib/struct.scm 120 */
						BgL_auxz00_1311 = BgL_keyz00_1244;
					}
				else
					{
						obj_t BgL_auxz00_1314;

						BgL_auxz00_1314 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__structurez00,
							BINT(((long) 5074)), BGl_string1530z00zz__structurez00,
							BGl_string1531z00zz__structurez00, BgL_keyz00_1244);
						FAILURE(BgL_auxz00_1314, BFALSE, BFALSE);
					}
				return
					BGl_makezd2structzd2zz__structurez00(BgL_auxz00_1311, BgL_auxz00_1318,
					BgL_initz00_1246);
			}
		}

	}



/* struct? */
	BGL_EXPORTED_DEF bool_t BGl_structzf3zf3zz__structurez00(obj_t BgL_oz00_6)
	{
		{	/* Llib/struct.scm 125 */
			return STRUCTP(BgL_oz00_6);
		}

	}



/* &struct? */
	obj_t BGl_z62structzf3z91zz__structurez00(obj_t BgL_envz00_1247,
		obj_t BgL_oz00_1248)
	{
		{	/* Llib/struct.scm 125 */
			return BBOOL(BGl_structzf3zf3zz__structurez00(BgL_oz00_1248));
		}

	}



/* record? */
	BGL_EXPORTED_DEF bool_t BGl_recordzf3zf3zz__structurez00(obj_t BgL_oz00_7)
	{
		{	/* Llib/struct.scm 131 */
			return STRUCTP(BgL_oz00_7);
		}

	}



/* &record? */
	obj_t BGl_z62recordzf3z91zz__structurez00(obj_t BgL_envz00_1249,
		obj_t BgL_oz00_1250)
	{
		{	/* Llib/struct.scm 131 */
			return BBOOL(BGl_recordzf3zf3zz__structurez00(BgL_oz00_1250));
		}

	}



/* struct-key */
	BGL_EXPORTED_DEF obj_t BGl_structzd2keyzd2zz__structurez00(obj_t BgL_sz00_8)
	{
		{	/* Llib/struct.scm 137 */
			return STRUCT_KEY(BgL_sz00_8);
		}

	}



/* &struct-key */
	obj_t BGl_z62structzd2keyzb0zz__structurez00(obj_t BgL_envz00_1251,
		obj_t BgL_sz00_1252)
	{
		{	/* Llib/struct.scm 137 */
			{	/* Llib/struct.scm 138 */
				obj_t BgL_auxz00_1335;

				if (STRUCTP(BgL_sz00_1252))
					{	/* Llib/struct.scm 138 */
						BgL_auxz00_1335 = BgL_sz00_1252;
					}
				else
					{
						obj_t BgL_auxz00_1338;

						BgL_auxz00_1338 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__structurez00,
							BINT(((long) 5893)), BGl_string1533z00zz__structurez00,
							BGl_string1534z00zz__structurez00, BgL_sz00_1252);
						FAILURE(BgL_auxz00_1338, BFALSE, BFALSE);
					}
				return BGl_structzd2keyzd2zz__structurez00(BgL_auxz00_1335);
			}
		}

	}



/* struct-key-set! */
	BGL_EXPORTED_DEF obj_t BGl_structzd2keyzd2setz12z12zz__structurez00(obj_t
		BgL_sz00_9, obj_t BgL_kz00_10)
	{
		{	/* Llib/struct.scm 143 */
			return STRUCT_KEY_SET(BgL_sz00_9, BgL_kz00_10);
		}

	}



/* &struct-key-set! */
	obj_t BGl_z62structzd2keyzd2setz12z70zz__structurez00(obj_t BgL_envz00_1253,
		obj_t BgL_sz00_1254, obj_t BgL_kz00_1255)
	{
		{	/* Llib/struct.scm 143 */
			{	/* Llib/struct.scm 144 */
				obj_t BgL_auxz00_1351;
				obj_t BgL_auxz00_1344;

				if (SYMBOLP(BgL_kz00_1255))
					{	/* Llib/struct.scm 144 */
						BgL_auxz00_1351 = BgL_kz00_1255;
					}
				else
					{
						obj_t BgL_auxz00_1354;

						BgL_auxz00_1354 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__structurez00,
							BINT(((long) 6173)), BGl_string1535z00zz__structurez00,
							BGl_string1531z00zz__structurez00, BgL_kz00_1255);
						FAILURE(BgL_auxz00_1354, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_sz00_1254))
					{	/* Llib/struct.scm 144 */
						BgL_auxz00_1344 = BgL_sz00_1254;
					}
				else
					{
						obj_t BgL_auxz00_1347;

						BgL_auxz00_1347 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__structurez00,
							BINT(((long) 6173)), BGl_string1535z00zz__structurez00,
							BGl_string1534z00zz__structurez00, BgL_sz00_1254);
						FAILURE(BgL_auxz00_1347, BFALSE, BFALSE);
					}
				return
					BGl_structzd2keyzd2setz12z12zz__structurez00(BgL_auxz00_1344,
					BgL_auxz00_1351);
			}
		}

	}



/* struct-length */
	BGL_EXPORTED_DEF int BGl_structzd2lengthzd2zz__structurez00(obj_t BgL_sz00_11)
	{
		{	/* Llib/struct.scm 149 */
			return STRUCT_LENGTH(BgL_sz00_11);
		}

	}



/* &struct-length */
	obj_t BGl_z62structzd2lengthzb0zz__structurez00(obj_t BgL_envz00_1256,
		obj_t BgL_sz00_1257)
	{
		{	/* Llib/struct.scm 149 */
			{	/* Llib/struct.scm 150 */
				int BgL_tmpz00_1360;

				{	/* Llib/struct.scm 150 */
					obj_t BgL_auxz00_1361;

					if (STRUCTP(BgL_sz00_1257))
						{	/* Llib/struct.scm 150 */
							BgL_auxz00_1361 = BgL_sz00_1257;
						}
					else
						{
							obj_t BgL_auxz00_1364;

							BgL_auxz00_1364 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1529z00zz__structurez00, BINT(((long) 6457)),
								BGl_string1536z00zz__structurez00,
								BGl_string1534z00zz__structurez00, BgL_sz00_1257);
							FAILURE(BgL_auxz00_1364, BFALSE, BFALSE);
						}
					BgL_tmpz00_1360 =
						BGl_structzd2lengthzd2zz__structurez00(BgL_auxz00_1361);
				}
				return BINT(BgL_tmpz00_1360);
			}
		}

	}



/* struct-ref */
	BGL_EXPORTED_DEF obj_t BGl_structzd2refzd2zz__structurez00(obj_t BgL_sz00_12,
		int BgL_kz00_13)
	{
		{	/* Llib/struct.scm 155 */
			return STRUCT_REF(BgL_sz00_12, BgL_kz00_13);
		}

	}



/* &struct-ref */
	obj_t BGl_z62structzd2refzb0zz__structurez00(obj_t BgL_envz00_1258,
		obj_t BgL_sz00_1259, obj_t BgL_kz00_1260)
	{
		{	/* Llib/struct.scm 155 */
			{	/* Llib/struct.scm 156 */
				int BgL_auxz00_1378;
				obj_t BgL_auxz00_1371;

				{	/* Llib/struct.scm 156 */
					obj_t BgL_tmpz00_1379;

					if (INTEGERP(BgL_kz00_1260))
						{	/* Llib/struct.scm 156 */
							BgL_tmpz00_1379 = BgL_kz00_1260;
						}
					else
						{
							obj_t BgL_auxz00_1382;

							BgL_auxz00_1382 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1529z00zz__structurez00, BINT(((long) 6739)),
								BGl_string1537z00zz__structurez00,
								BGl_string1532z00zz__structurez00, BgL_kz00_1260);
							FAILURE(BgL_auxz00_1382, BFALSE, BFALSE);
						}
					BgL_auxz00_1378 = CINT(BgL_tmpz00_1379);
				}
				if (STRUCTP(BgL_sz00_1259))
					{	/* Llib/struct.scm 156 */
						BgL_auxz00_1371 = BgL_sz00_1259;
					}
				else
					{
						obj_t BgL_auxz00_1374;

						BgL_auxz00_1374 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__structurez00,
							BINT(((long) 6739)), BGl_string1537z00zz__structurez00,
							BGl_string1534z00zz__structurez00, BgL_sz00_1259);
						FAILURE(BgL_auxz00_1374, BFALSE, BFALSE);
					}
				return
					BGl_structzd2refzd2zz__structurez00(BgL_auxz00_1371, BgL_auxz00_1378);
			}
		}

	}



/* struct-set! */
	BGL_EXPORTED_DEF obj_t BGl_structzd2setz12zc0zz__structurez00(obj_t
		BgL_sz00_14, int BgL_kz00_15, obj_t BgL_oz00_16)
	{
		{	/* Llib/struct.scm 161 */
			return STRUCT_SET(BgL_sz00_14, BgL_kz00_15, BgL_oz00_16);
		}

	}



/* &struct-set! */
	obj_t BGl_z62structzd2setz12za2zz__structurez00(obj_t BgL_envz00_1261,
		obj_t BgL_sz00_1262, obj_t BgL_kz00_1263, obj_t BgL_oz00_1264)
	{
		{	/* Llib/struct.scm 161 */
			{	/* Llib/struct.scm 162 */
				int BgL_auxz00_1396;
				obj_t BgL_auxz00_1389;

				{	/* Llib/struct.scm 162 */
					obj_t BgL_tmpz00_1397;

					if (INTEGERP(BgL_kz00_1263))
						{	/* Llib/struct.scm 162 */
							BgL_tmpz00_1397 = BgL_kz00_1263;
						}
					else
						{
							obj_t BgL_auxz00_1400;

							BgL_auxz00_1400 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string1529z00zz__structurez00, BINT(((long) 7020)),
								BGl_string1538z00zz__structurez00,
								BGl_string1532z00zz__structurez00, BgL_kz00_1263);
							FAILURE(BgL_auxz00_1400, BFALSE, BFALSE);
						}
					BgL_auxz00_1396 = CINT(BgL_tmpz00_1397);
				}
				if (STRUCTP(BgL_sz00_1262))
					{	/* Llib/struct.scm 162 */
						BgL_auxz00_1389 = BgL_sz00_1262;
					}
				else
					{
						obj_t BgL_auxz00_1392;

						BgL_auxz00_1392 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__structurez00,
							BINT(((long) 7020)), BGl_string1538z00zz__structurez00,
							BGl_string1534z00zz__structurez00, BgL_sz00_1262);
						FAILURE(BgL_auxz00_1392, BFALSE, BFALSE);
					}
				return
					BGl_structzd2setz12zc0zz__structurez00(BgL_auxz00_1389,
					BgL_auxz00_1396, BgL_oz00_1264);
			}
		}

	}



/* struct-update! */
	BGL_EXPORTED_DEF obj_t BGl_structzd2updatez12zc0zz__structurez00(obj_t
		BgL_dstz00_17, obj_t BgL_srcz00_18)
	{
		{	/* Llib/struct.scm 167 */
			{	/* Llib/struct.scm 168 */
				bool_t BgL_test1590z00_1406;

				if ((STRUCT_KEY(BgL_dstz00_17) == STRUCT_KEY(BgL_srcz00_18)))
					{	/* Llib/struct.scm 168 */
						BgL_test1590z00_1406 =
							(
							(long) (STRUCT_LENGTH(BgL_dstz00_17)) ==
							(long) (STRUCT_LENGTH(BgL_srcz00_18)));
					}
				else
					{	/* Llib/struct.scm 168 */
						BgL_test1590z00_1406 = ((bool_t) 0);
					}
				if (BgL_test1590z00_1406)
					{	/* Llib/struct.scm 170 */
						long BgL_g1012z00_742;

						BgL_g1012z00_742 =
							((long) (STRUCT_LENGTH(BgL_dstz00_17)) - ((long) 1));
						{
							long BgL_iz00_744;

							BgL_iz00_744 = BgL_g1012z00_742;
						BgL_zc3z04anonymousza31066ze3z87_745:
							if ((BgL_iz00_744 == ((long) -1)))
								{	/* Llib/struct.scm 171 */
									return BgL_dstz00_17;
								}
							else
								{	/* Llib/struct.scm 171 */
									{	/* Llib/struct.scm 162 */
										obj_t BgL_auxz00_1423;
										int BgL_tmpz00_1421;

										BgL_auxz00_1423 =
											STRUCT_REF(BgL_srcz00_18, (int) (BgL_iz00_744));
										BgL_tmpz00_1421 = (int) (BgL_iz00_744);
										STRUCT_SET(BgL_dstz00_17, BgL_tmpz00_1421, BgL_auxz00_1423);
									}
									{
										long BgL_iz00_1427;

										BgL_iz00_1427 = (BgL_iz00_744 - ((long) 1));
										BgL_iz00_744 = BgL_iz00_1427;
										goto BgL_zc3z04anonymousza31066ze3z87_745;
									}
								}
						}
					}
				else
					{	/* Llib/struct.scm 176 */
						obj_t BgL_arg1095z00_751;

						{	/* Llib/struct.scm 176 */
							obj_t BgL_list1096z00_752;

							{	/* Llib/struct.scm 176 */
								obj_t BgL_arg1099z00_753;

								BgL_arg1099z00_753 = MAKE_YOUNG_PAIR(BgL_srcz00_18, BNIL);
								BgL_list1096z00_752 =
									MAKE_YOUNG_PAIR(BgL_dstz00_17, BgL_arg1099z00_753);
							}
							BgL_arg1095z00_751 = BgL_list1096z00_752;
						}
						return
							BGl_errorz00zz__errorz00(BGl_string1539z00zz__structurez00,
							BGl_string1540z00zz__structurez00, BgL_arg1095z00_751);
					}
			}
		}

	}



/* &struct-update! */
	obj_t BGl_z62structzd2updatez12za2zz__structurez00(obj_t BgL_envz00_1265,
		obj_t BgL_dstz00_1266, obj_t BgL_srcz00_1267)
	{
		{	/* Llib/struct.scm 167 */
			{	/* Llib/struct.scm 168 */
				obj_t BgL_auxz00_1439;
				obj_t BgL_auxz00_1432;

				if (STRUCTP(BgL_srcz00_1267))
					{	/* Llib/struct.scm 168 */
						BgL_auxz00_1439 = BgL_srcz00_1267;
					}
				else
					{
						obj_t BgL_auxz00_1442;

						BgL_auxz00_1442 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__structurez00,
							BINT(((long) 7301)), BGl_string1541z00zz__structurez00,
							BGl_string1534z00zz__structurez00, BgL_srcz00_1267);
						FAILURE(BgL_auxz00_1442, BFALSE, BFALSE);
					}
				if (STRUCTP(BgL_dstz00_1266))
					{	/* Llib/struct.scm 168 */
						BgL_auxz00_1432 = BgL_dstz00_1266;
					}
				else
					{
						obj_t BgL_auxz00_1435;

						BgL_auxz00_1435 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__structurez00,
							BINT(((long) 7301)), BGl_string1541z00zz__structurez00,
							BGl_string1534z00zz__structurez00, BgL_dstz00_1266);
						FAILURE(BgL_auxz00_1435, BFALSE, BFALSE);
					}
				return
					BGl_structzd2updatez12zc0zz__structurez00(BgL_auxz00_1432,
					BgL_auxz00_1439);
			}
		}

	}



/* struct->list */
	BGL_EXPORTED_DEF obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t
		BgL_structz00_19)
	{
		{	/* Llib/struct.scm 181 */
			{	/* Llib/struct.scm 182 */
				long BgL_g1013z00_759;

				BgL_g1013z00_759 =
					((long) (STRUCT_LENGTH(BgL_structz00_19)) - ((long) 1));
				{
					long BgL_iz00_1100;
					obj_t BgL_rz00_1101;

					BgL_iz00_1100 = BgL_g1013z00_759;
					BgL_rz00_1101 = BNIL;
				BgL_loopz00_1099:
					if ((BgL_iz00_1100 == ((long) -1)))
						{	/* Llib/struct.scm 184 */
							return
								MAKE_YOUNG_PAIR(STRUCT_KEY(BgL_structz00_19), BgL_rz00_1101);
						}
					else
						{	/* Llib/struct.scm 186 */
							long BgL_arg1114z00_1109;
							obj_t BgL_arg1115z00_1110;

							BgL_arg1114z00_1109 = (BgL_iz00_1100 - ((long) 1));
							BgL_arg1115z00_1110 =
								MAKE_YOUNG_PAIR(STRUCT_REF(BgL_structz00_19,
									(int) (BgL_iz00_1100)), BgL_rz00_1101);
							{
								obj_t BgL_rz00_1459;
								long BgL_iz00_1458;

								BgL_iz00_1458 = BgL_arg1114z00_1109;
								BgL_rz00_1459 = BgL_arg1115z00_1110;
								BgL_rz00_1101 = BgL_rz00_1459;
								BgL_iz00_1100 = BgL_iz00_1458;
								goto BgL_loopz00_1099;
							}
						}
				}
			}
		}

	}



/* &struct->list */
	obj_t BGl_z62structzd2ze3listz53zz__structurez00(obj_t BgL_envz00_1268,
		obj_t BgL_structz00_1269)
	{
		{	/* Llib/struct.scm 181 */
			{	/* Llib/struct.scm 182 */
				obj_t BgL_auxz00_1460;

				if (STRUCTP(BgL_structz00_1269))
					{	/* Llib/struct.scm 182 */
						BgL_auxz00_1460 = BgL_structz00_1269;
					}
				else
					{
						obj_t BgL_auxz00_1463;

						BgL_auxz00_1463 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__structurez00,
							BINT(((long) 7892)), BGl_string1542z00zz__structurez00,
							BGl_string1534z00zz__structurez00, BgL_structz00_1269);
						FAILURE(BgL_auxz00_1463, BFALSE, BFALSE);
					}
				return BGl_structzd2ze3listz31zz__structurez00(BgL_auxz00_1460);
			}
		}

	}



/* list->struct */
	BGL_EXPORTED_DEF obj_t BGl_listzd2ze3structz31zz__structurez00(obj_t
		BgL_lstz00_20)
	{
		{	/* Llib/struct.scm 191 */
			{	/* Llib/struct.scm 195 */
				bool_t BgL_test1597z00_1468;

				{	/* Llib/struct.scm 195 */
					obj_t BgL_tmpz00_1469;

					BgL_tmpz00_1469 = CAR(BgL_lstz00_20);
					BgL_test1597z00_1468 = SYMBOLP(BgL_tmpz00_1469);
				}
				if (BgL_test1597z00_1468)
					{	/* Llib/struct.scm 198 */
						long BgL_lenz00_775;

						BgL_lenz00_775 = bgl_list_length(CDR(BgL_lstz00_20));
						{	/* Llib/struct.scm 198 */
							obj_t BgL_structz00_776;

							{	/* Llib/struct.scm 199 */
								obj_t BgL_arg1128z00_787;

								BgL_arg1128z00_787 = CAR(BgL_lstz00_20);
								{	/* Llib/struct.scm 199 */
									obj_t BgL_res1478z00_1127;

									{	/* Llib/struct.scm 199 */
										int BgL_lenz00_1126;

										BgL_lenz00_1126 = (int) (BgL_lenz00_775);
										BgL_res1478z00_1127 =
											make_struct(
											((obj_t) BgL_arg1128z00_787), BgL_lenz00_1126, BUNSPEC);
									}
									BgL_structz00_776 = BgL_res1478z00_1127;
							}}
							{	/* Llib/struct.scm 199 */

								{	/* Llib/struct.scm 200 */
									obj_t BgL_g1015z00_777;

									BgL_g1015z00_777 = CDR(BgL_lstz00_20);
									{
										long BgL_iz00_1152;
										obj_t BgL_lz00_1153;

										BgL_iz00_1152 = ((long) 0);
										BgL_lz00_1153 = BgL_g1015z00_777;
									BgL_loopz00_1151:
										if (NULLP(BgL_lz00_1153))
											{	/* Llib/struct.scm 202 */
												return BgL_structz00_776;
											}
										else
											{	/* Llib/struct.scm 202 */
												{	/* Llib/struct.scm 205 */
													obj_t BgL_arg1125z00_1159;

													BgL_arg1125z00_1159 = CAR(((obj_t) BgL_lz00_1153));
													{	/* Llib/struct.scm 162 */
														int BgL_tmpz00_1483;

														BgL_tmpz00_1483 = (int) (BgL_iz00_1152);
														STRUCT_SET(BgL_structz00_776, BgL_tmpz00_1483,
															BgL_arg1125z00_1159);
												}}
												{	/* Llib/struct.scm 206 */
													long BgL_arg1126z00_1160;
													obj_t BgL_arg1127z00_1161;

													BgL_arg1126z00_1160 = (BgL_iz00_1152 + ((long) 1));
													BgL_arg1127z00_1161 = CDR(((obj_t) BgL_lz00_1153));
													{
														obj_t BgL_lz00_1490;
														long BgL_iz00_1489;

														BgL_iz00_1489 = BgL_arg1126z00_1160;
														BgL_lz00_1490 = BgL_arg1127z00_1161;
														BgL_lz00_1153 = BgL_lz00_1490;
														BgL_iz00_1152 = BgL_iz00_1489;
														goto BgL_loopz00_1151;
													}
												}
											}
									}
								}
							}
						}
					}
				else
					{	/* Llib/struct.scm 196 */
						obj_t BgL_arg1133z00_789;

						BgL_arg1133z00_789 = CAR(BgL_lstz00_20);
						return
							BGl_errorz00zz__errorz00(BGl_symbol1543z00zz__structurez00,
							BGl_string1545z00zz__structurez00, BgL_arg1133z00_789);
					}
			}
		}

	}



/* &list->struct */
	obj_t BGl_z62listzd2ze3structz53zz__structurez00(obj_t BgL_envz00_1270,
		obj_t BgL_lstz00_1271)
	{
		{	/* Llib/struct.scm 191 */
			{	/* Llib/struct.scm 195 */
				obj_t BgL_auxz00_1493;

				if (PAIRP(BgL_lstz00_1271))
					{	/* Llib/struct.scm 195 */
						BgL_auxz00_1493 = BgL_lstz00_1271;
					}
				else
					{
						obj_t BgL_auxz00_1496;

						BgL_auxz00_1496 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1529z00zz__structurez00,
							BINT(((long) 8400)), BGl_string1546z00zz__structurez00,
							BGl_string1547z00zz__structurez00, BgL_lstz00_1271);
						FAILURE(BgL_auxz00_1496, BFALSE, BFALSE);
					}
				return BGl_listzd2ze3structz31zz__structurez00(BgL_auxz00_1493);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__structurez00()
	{
		{	/* Llib/struct.scm 18 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1548z00zz__structurez00));
		}

	}

#ifdef __cplusplus
}
#endif
