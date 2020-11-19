/*===========================================================================*/
/*   (Llib/process.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/process.scm -indent -o objs/obj_u/Llib/process.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t c_process_xstatus(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__processz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62processzd2killzb0zz__processz00(obj_t, obj_t);
	static obj_t BGl_z62runzd2processzb0zz__processz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62processzd2errorzd2portz62zz__processz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_processzf3zf3zz__processz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__processz00();
	BGL_EXPORTED_DECL bool_t BGl_processzd2waitzd2zz__processz00(obj_t);
	extern obj_t c_process_kill(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_processzd2nilzd2zz__processz00();
	BGL_EXPORTED_DECL obj_t BGl_processzd2stopzd2zz__processz00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__processz00();
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	extern obj_t bgl_process_nil();
	static obj_t BGl_z62processzd2inputzd2portz62zz__processz00(obj_t, obj_t);
	extern obj_t c_process_continue(obj_t);
	BGL_EXPORTED_DECL int BGl_processzd2pidzd2zz__processz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unregisterzd2processzd2zz__processz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__processz00();
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_z62processzd2listzb0zz__processz00(obj_t);
	static obj_t BGl_z62processzd2nilzb0zz__processz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern bool_t c_process_alivep(obj_t);
	extern obj_t bgl_close_output_port(obj_t);
	extern obj_t c_process_list();
	BGL_EXPORTED_DECL obj_t BGl_processzd2errorzd2portz00zz__processz00(obj_t);
	static obj_t BGl_z62processzd2pidzb0zz__processz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__processz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62processzd2waitzb0zz__processz00(obj_t, obj_t);
	static obj_t BGl_list1684z00zz__processz00 = BUNSPEC;
	static obj_t BGl_z62processzd2sendzd2signalz62zz__processz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_processzd2killzd2zz__processz00(obj_t);
	static obj_t BGl_z62processzd2stopzb0zz__processz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__processz00();
	static obj_t BGl_z62processzd2outputzd2portz62zz__processz00(obj_t, obj_t);
	static obj_t BGl_keyword1701z00zz__processz00 = BUNSPEC;
	static obj_t BGl_keyword1703z00zz__processz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zz__processz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__processz00();
	BGL_EXPORTED_DECL obj_t BGl_processzd2inputzd2portz00zz__processz00(obj_t);
	static obj_t BGl_z62closezd2processzd2portsz62zz__processz00(obj_t, obj_t);
	static obj_t BGl_z62processzd2exitzd2statusz62zz__processz00(obj_t, obj_t);
	extern obj_t c_process_wait(obj_t);
	extern obj_t c_process_stop(obj_t);
	static obj_t BGl_z62processzd2alivezf3z43zz__processz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_processzd2continuezd2zz__processz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_runzd2processzd2zz__processz00(obj_t, obj_t);
	static obj_t BGl_z62processzf3z91zz__processz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_processzd2sendzd2signalz00zz__processz00(obj_t,
		int);
	extern obj_t c_unregister_process(obj_t);
	extern obj_t c_run_process(obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_keyword1685z00zz__processz00 = BUNSPEC;
	static obj_t BGl_keyword1687z00zz__processz00 = BUNSPEC;
	extern obj_t bstring_to_keyword(obj_t);
	static obj_t BGl_z62unregisterzd2processzb0zz__processz00(obj_t, obj_t);
	static obj_t BGl_keyword1691z00zz__processz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_processzd2outputzd2portz00zz__processz00(obj_t);
	static obj_t BGl_keyword1693z00zz__processz00 = BUNSPEC;
	static obj_t BGl_keyword1695z00zz__processz00 = BUNSPEC;
	extern obj_t c_process_send_signal(obj_t, int);
	static obj_t BGl_keyword1697z00zz__processz00 = BUNSPEC;
	static obj_t BGl_keyword1699z00zz__processz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_processzd2alivezf3z21zz__processz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_closezd2processzd2portsz00zz__processz00(obj_t);
	static obj_t BGl_z62processzd2continuezb0zz__processz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_processzd2exitzd2statusz00zz__processz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_processzd2listzd2zz__processz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2nilzd2envz00zz__processz00,
		BgL_bgl_za762processza7d2nil1710z00, BGl_z62processzd2nilzb0zz__processz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1700z00zz__processz00,
		BgL_bgl_string1700za700za7za7_1711za7, "error", 5);
	      DEFINE_STRING(BGl_string1702z00zz__processz00,
		BgL_bgl_string1702za700za7za7_1712za7, "host", 4);
	      DEFINE_STRING(BGl_string1704z00zz__processz00,
		BgL_bgl_string1704za700za7za7_1713za7, "env", 3);
	      DEFINE_STRING(BGl_string1705z00zz__processz00,
		BgL_bgl_string1705za700za7za7_1714za7, "&run-process", 12);
	      DEFINE_STRING(BGl_string1706z00zz__processz00,
		BgL_bgl_string1706za700za7za7_1715za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1707z00zz__processz00,
		BgL_bgl_string1707za700za7za7_1716za7, "&close-process-ports", 20);
	      DEFINE_STRING(BGl_string1708z00zz__processz00,
		BgL_bgl_string1708za700za7za7_1717za7, "&unregister-process", 19);
	      DEFINE_STRING(BGl_string1709z00zz__processz00,
		BgL_bgl_string1709za700za7za7_1718za7, "__process", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2waitzd2envz00zz__processz00,
		BgL_bgl_za762processza7d2wai1719z00, BGl_z62processzd2waitzb0zz__processz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1670z00zz__processz00,
		BgL_bgl_string1670za700za7za7_1720za7, "/tmp/4.4a/runtime/Llib/process.scm",
		34);
	      DEFINE_STRING(BGl_string1671z00zz__processz00,
		BgL_bgl_string1671za700za7za7_1721za7, "&process-pid", 12);
	      DEFINE_STRING(BGl_string1672z00zz__processz00,
		BgL_bgl_string1672za700za7za7_1722za7, "process", 7);
	      DEFINE_STRING(BGl_string1673z00zz__processz00,
		BgL_bgl_string1673za700za7za7_1723za7, "&process-output-port", 20);
	      DEFINE_STRING(BGl_string1674z00zz__processz00,
		BgL_bgl_string1674za700za7za7_1724za7, "&process-input-port", 19);
	      DEFINE_STRING(BGl_string1675z00zz__processz00,
		BgL_bgl_string1675za700za7za7_1725za7, "&process-error-port", 19);
	      DEFINE_STRING(BGl_string1676z00zz__processz00,
		BgL_bgl_string1676za700za7za7_1726za7, "&process-alive?", 15);
	      DEFINE_STRING(BGl_string1677z00zz__processz00,
		BgL_bgl_string1677za700za7za7_1727za7, "&process-wait", 13);
	      DEFINE_STRING(BGl_string1678z00zz__processz00,
		BgL_bgl_string1678za700za7za7_1728za7, "&process-exit-status", 20);
	      DEFINE_STRING(BGl_string1679z00zz__processz00,
		BgL_bgl_string1679za700za7za7_1729za7, "&process-send-signal", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2alivezf3zd2envzf3zz__processz00,
		BgL_bgl_za762processza7d2ali1730z00,
		BGl_z62processzd2alivezf3z43zz__processz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2pidzd2envz00zz__processz00,
		BgL_bgl_za762processza7d2pid1731z00, BGl_z62processzd2pidzb0zz__processz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1680z00zz__processz00,
		BgL_bgl_string1680za700za7za7_1732za7, "bint", 4);
	      DEFINE_STRING(BGl_string1681z00zz__processz00,
		BgL_bgl_string1681za700za7za7_1733za7, "&process-kill", 13);
	      DEFINE_STRING(BGl_string1682z00zz__processz00,
		BgL_bgl_string1682za700za7za7_1734za7, "&process-stop", 13);
	      DEFINE_STRING(BGl_string1683z00zz__processz00,
		BgL_bgl_string1683za700za7za7_1735za7, "&process-continue", 17);
	      DEFINE_STRING(BGl_string1686z00zz__processz00,
		BgL_bgl_string1686za700za7za7_1736za7, "pipe", 4);
	      DEFINE_STRING(BGl_string1688z00zz__processz00,
		BgL_bgl_string1688za700za7za7_1737za7, "wait", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2stopzd2envz00zz__processz00,
		BgL_bgl_za762processza7d2sto1738z00, BGl_z62processzd2stopzb0zz__processz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1689z00zz__processz00,
		BgL_bgl_string1689za700za7za7_1739za7, "run-process", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2inputzd2portzd2envzd2zz__processz00,
		BgL_bgl_za762processza7d2inp1740z00,
		BGl_z62processzd2inputzd2portz62zz__processz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1690z00zz__processz00,
		BgL_bgl_string1690za700za7za7_1741za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string1692z00zz__processz00,
		BgL_bgl_string1692za700za7za7_1742za7, "fork", 4);
	      DEFINE_STRING(BGl_string1694z00zz__processz00,
		BgL_bgl_string1694za700za7za7_1743za7, "input", 5);
	      DEFINE_STRING(BGl_string1696z00zz__processz00,
		BgL_bgl_string1696za700za7za7_1744za7, "output", 6);
	      DEFINE_STRING(BGl_string1698z00zz__processz00,
		BgL_bgl_string1698za700za7za7_1745za7, "null", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2errorzd2portzd2envzd2zz__processz00,
		BgL_bgl_za762processza7d2err1746z00,
		BGl_z62processzd2errorzd2portz62zz__processz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2killzd2envz00zz__processz00,
		BgL_bgl_za762processza7d2kil1747z00, BGl_z62processzd2killzb0zz__processz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2outputzd2portzd2envzd2zz__processz00,
		BgL_bgl_za762processza7d2out1748z00,
		BGl_z62processzd2outputzd2portz62zz__processz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closezd2processzd2portszd2envzd2zz__processz00,
		BgL_bgl_za762closeza7d2proce1749z00,
		BGl_z62closezd2processzd2portsz62zz__processz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unregisterzd2processzd2envz00zz__processz00,
		BgL_bgl_za762unregisterza7d21750z00,
		BGl_z62unregisterzd2processzb0zz__processz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2exitzd2statuszd2envzd2zz__processz00,
		BgL_bgl_za762processza7d2exi1751z00,
		BGl_z62processzd2exitzd2statusz62zz__processz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2continuezd2envz00zz__processz00,
		BgL_bgl_za762processza7d2con1752z00,
		BGl_z62processzd2continuezb0zz__processz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzf3zd2envz21zz__processz00,
		BgL_bgl_za762processza7f3za7911753za7, BGl_z62processzf3z91zz__processz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_runzd2processzd2envz00zz__processz00,
		BgL_bgl_za762runza7d2process1754z00, va_generic_entry,
		BGl_z62runzd2processzb0zz__processz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_processzd2listzd2envz00zz__processz00,
		BgL_bgl_za762processza7d2lis1755z00, BGl_z62processzd2listzb0zz__processz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_processzd2sendzd2signalzd2envzd2zz__processz00,
		BgL_bgl_za762processza7d2sen1756z00,
		BGl_z62processzd2sendzd2signalz62zz__processz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__processz00));
		     ADD_ROOT((void *) (&BGl_list1684z00zz__processz00));
		     ADD_ROOT((void *) (&BGl_keyword1701z00zz__processz00));
		     ADD_ROOT((void *) (&BGl_keyword1703z00zz__processz00));
		     ADD_ROOT((void *) (&BGl_keyword1685z00zz__processz00));
		     ADD_ROOT((void *) (&BGl_keyword1687z00zz__processz00));
		     ADD_ROOT((void *) (&BGl_keyword1691z00zz__processz00));
		     ADD_ROOT((void *) (&BGl_keyword1693z00zz__processz00));
		     ADD_ROOT((void *) (&BGl_keyword1695z00zz__processz00));
		     ADD_ROOT((void *) (&BGl_keyword1697z00zz__processz00));
		     ADD_ROOT((void *) (&BGl_keyword1699z00zz__processz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__processz00(long
		BgL_checksumz00_1870, char *BgL_fromz00_1871)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__processz00))
				{
					BGl_requirezd2initializa7ationz75zz__processz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__processz00();
					BGl_cnstzd2initzd2zz__processz00();
					BGl_importedzd2moduleszd2initz00zz__processz00();
					return BGl_methodzd2initzd2zz__processz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__processz00()
	{
		{	/* Llib/process.scm 15 */
			BGl_keyword1685z00zz__processz00 =
				bstring_to_keyword(BGl_string1686z00zz__processz00);
			BGl_list1684z00zz__processz00 =
				MAKE_YOUNG_PAIR(BGl_keyword1685z00zz__processz00, BNIL);
			BGl_keyword1687z00zz__processz00 =
				bstring_to_keyword(BGl_string1688z00zz__processz00);
			BGl_keyword1691z00zz__processz00 =
				bstring_to_keyword(BGl_string1692z00zz__processz00);
			BGl_keyword1693z00zz__processz00 =
				bstring_to_keyword(BGl_string1694z00zz__processz00);
			BGl_keyword1695z00zz__processz00 =
				bstring_to_keyword(BGl_string1696z00zz__processz00);
			BGl_keyword1697z00zz__processz00 =
				bstring_to_keyword(BGl_string1698z00zz__processz00);
			BGl_keyword1699z00zz__processz00 =
				bstring_to_keyword(BGl_string1700z00zz__processz00);
			BGl_keyword1701z00zz__processz00 =
				bstring_to_keyword(BGl_string1702z00zz__processz00);
			return (BGl_keyword1703z00zz__processz00 =
				bstring_to_keyword(BGl_string1704z00zz__processz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__processz00()
	{
		{	/* Llib/process.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* process? */
	BGL_EXPORTED_DEF bool_t BGl_processzf3zf3zz__processz00(obj_t BgL_objz00_3)
	{
		{	/* Llib/process.scm 123 */
			return PROCESSP(BgL_objz00_3);
		}

	}



/* &process? */
	obj_t BGl_z62processzf3z91zz__processz00(obj_t BgL_envz00_1806,
		obj_t BgL_objz00_1807)
	{
		{	/* Llib/process.scm 123 */
			return BBOOL(BGl_processzf3zf3zz__processz00(BgL_objz00_1807));
		}

	}



/* process-nil */
	BGL_EXPORTED_DEF obj_t BGl_processzd2nilzd2zz__processz00()
	{
		{	/* Llib/process.scm 129 */
			return bgl_process_nil();
		}

	}



/* &process-nil */
	obj_t BGl_z62processzd2nilzb0zz__processz00(obj_t BgL_envz00_1808)
	{
		{	/* Llib/process.scm 129 */
			return BGl_processzd2nilzd2zz__processz00();
		}

	}



/* process-pid */
	BGL_EXPORTED_DEF int BGl_processzd2pidzd2zz__processz00(obj_t BgL_procz00_4)
	{
		{	/* Llib/process.scm 135 */
			return PROCESS_PID(BgL_procz00_4);
		}

	}



/* &process-pid */
	obj_t BGl_z62processzd2pidzb0zz__processz00(obj_t BgL_envz00_1809,
		obj_t BgL_procz00_1810)
	{
		{	/* Llib/process.scm 135 */
			{	/* Llib/process.scm 136 */
				int BgL_tmpz00_1896;

				{	/* Llib/process.scm 136 */
					obj_t BgL_auxz00_1897;

					if (PROCESSP(BgL_procz00_1810))
						{	/* Llib/process.scm 136 */
							BgL_auxz00_1897 = BgL_procz00_1810;
						}
					else
						{
							obj_t BgL_auxz00_1900;

							BgL_auxz00_1900 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
								BINT(((long) 5714)), BGl_string1671z00zz__processz00,
								BGl_string1672z00zz__processz00, BgL_procz00_1810);
							FAILURE(BgL_auxz00_1900, BFALSE, BFALSE);
						}
					BgL_tmpz00_1896 = BGl_processzd2pidzd2zz__processz00(BgL_auxz00_1897);
				}
				return BINT(BgL_tmpz00_1896);
			}
		}

	}



/* process-output-port */
	BGL_EXPORTED_DEF obj_t BGl_processzd2outputzd2portz00zz__processz00(obj_t
		BgL_procz00_5)
	{
		{	/* Llib/process.scm 141 */
			return PROCESS_OUTPUT_PORT(BgL_procz00_5);
		}

	}



/* &process-output-port */
	obj_t BGl_z62processzd2outputzd2portz62zz__processz00(obj_t BgL_envz00_1811,
		obj_t BgL_procz00_1812)
	{
		{	/* Llib/process.scm 141 */
			{	/* Llib/process.scm 142 */
				obj_t BgL_auxz00_1907;

				if (PROCESSP(BgL_procz00_1812))
					{	/* Llib/process.scm 142 */
						BgL_auxz00_1907 = BgL_procz00_1812;
					}
				else
					{
						obj_t BgL_auxz00_1910;

						BgL_auxz00_1910 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
							BINT(((long) 6004)), BGl_string1673z00zz__processz00,
							BGl_string1672z00zz__processz00, BgL_procz00_1812);
						FAILURE(BgL_auxz00_1910, BFALSE, BFALSE);
					}
				return BGl_processzd2outputzd2portz00zz__processz00(BgL_auxz00_1907);
			}
		}

	}



/* process-input-port */
	BGL_EXPORTED_DEF obj_t BGl_processzd2inputzd2portz00zz__processz00(obj_t
		BgL_procz00_6)
	{
		{	/* Llib/process.scm 147 */
			return PROCESS_INPUT_PORT(BgL_procz00_6);
		}

	}



/* &process-input-port */
	obj_t BGl_z62processzd2inputzd2portz62zz__processz00(obj_t BgL_envz00_1813,
		obj_t BgL_procz00_1814)
	{
		{	/* Llib/process.scm 147 */
			{	/* Llib/process.scm 148 */
				obj_t BgL_auxz00_1916;

				if (PROCESSP(BgL_procz00_1814))
					{	/* Llib/process.scm 148 */
						BgL_auxz00_1916 = BgL_procz00_1814;
					}
				else
					{
						obj_t BgL_auxz00_1919;

						BgL_auxz00_1919 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
							BINT(((long) 6301)), BGl_string1674z00zz__processz00,
							BGl_string1672z00zz__processz00, BgL_procz00_1814);
						FAILURE(BgL_auxz00_1919, BFALSE, BFALSE);
					}
				return BGl_processzd2inputzd2portz00zz__processz00(BgL_auxz00_1916);
			}
		}

	}



/* process-error-port */
	BGL_EXPORTED_DEF obj_t BGl_processzd2errorzd2portz00zz__processz00(obj_t
		BgL_procz00_7)
	{
		{	/* Llib/process.scm 153 */
			return PROCESS_ERROR_PORT(BgL_procz00_7);
		}

	}



/* &process-error-port */
	obj_t BGl_z62processzd2errorzd2portz62zz__processz00(obj_t BgL_envz00_1815,
		obj_t BgL_procz00_1816)
	{
		{	/* Llib/process.scm 153 */
			{	/* Llib/process.scm 154 */
				obj_t BgL_auxz00_1925;

				if (PROCESSP(BgL_procz00_1816))
					{	/* Llib/process.scm 154 */
						BgL_auxz00_1925 = BgL_procz00_1816;
					}
				else
					{
						obj_t BgL_auxz00_1928;

						BgL_auxz00_1928 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
							BINT(((long) 6597)), BGl_string1675z00zz__processz00,
							BGl_string1672z00zz__processz00, BgL_procz00_1816);
						FAILURE(BgL_auxz00_1928, BFALSE, BFALSE);
					}
				return BGl_processzd2errorzd2portz00zz__processz00(BgL_auxz00_1925);
			}
		}

	}



/* process-alive? */
	BGL_EXPORTED_DEF bool_t BGl_processzd2alivezf3z21zz__processz00(obj_t
		BgL_procz00_8)
	{
		{	/* Llib/process.scm 159 */
			return c_process_alivep(BgL_procz00_8);
		}

	}



/* &process-alive? */
	obj_t BGl_z62processzd2alivezf3z43zz__processz00(obj_t BgL_envz00_1817,
		obj_t BgL_procz00_1818)
	{
		{	/* Llib/process.scm 159 */
			{	/* Llib/process.scm 160 */
				bool_t BgL_tmpz00_1934;

				{	/* Llib/process.scm 160 */
					obj_t BgL_auxz00_1935;

					if (PROCESSP(BgL_procz00_1818))
						{	/* Llib/process.scm 160 */
							BgL_auxz00_1935 = BgL_procz00_1818;
						}
					else
						{
							obj_t BgL_auxz00_1938;

							BgL_auxz00_1938 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
								BINT(((long) 6889)), BGl_string1676z00zz__processz00,
								BGl_string1672z00zz__processz00, BgL_procz00_1818);
							FAILURE(BgL_auxz00_1938, BFALSE, BFALSE);
						}
					BgL_tmpz00_1934 =
						BGl_processzd2alivezf3z21zz__processz00(BgL_auxz00_1935);
				}
				return BBOOL(BgL_tmpz00_1934);
			}
		}

	}



/* process-wait */
	BGL_EXPORTED_DEF bool_t BGl_processzd2waitzd2zz__processz00(obj_t
		BgL_procz00_9)
	{
		{	/* Llib/process.scm 165 */
			if (c_process_alivep(BgL_procz00_9))
				{	/* Llib/process.scm 166 */
					return CBOOL(c_process_wait(BgL_procz00_9));
				}
			else
				{	/* Llib/process.scm 166 */
					return ((bool_t) 0);
				}
		}

	}



/* &process-wait */
	obj_t BGl_z62processzd2waitzb0zz__processz00(obj_t BgL_envz00_1819,
		obj_t BgL_procz00_1820)
	{
		{	/* Llib/process.scm 165 */
			{	/* Llib/process.scm 166 */
				bool_t BgL_tmpz00_1948;

				{	/* Llib/process.scm 166 */
					obj_t BgL_auxz00_1949;

					if (PROCESSP(BgL_procz00_1820))
						{	/* Llib/process.scm 166 */
							BgL_auxz00_1949 = BgL_procz00_1820;
						}
					else
						{
							obj_t BgL_auxz00_1952;

							BgL_auxz00_1952 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
								BINT(((long) 7175)), BGl_string1677z00zz__processz00,
								BGl_string1672z00zz__processz00, BgL_procz00_1820);
							FAILURE(BgL_auxz00_1952, BFALSE, BFALSE);
						}
					BgL_tmpz00_1948 =
						BGl_processzd2waitzd2zz__processz00(BgL_auxz00_1949);
				}
				return BBOOL(BgL_tmpz00_1948);
			}
		}

	}



/* process-exit-status */
	BGL_EXPORTED_DEF obj_t BGl_processzd2exitzd2statusz00zz__processz00(obj_t
		BgL_procz00_10)
	{
		{	/* Llib/process.scm 172 */
			return c_process_xstatus(BgL_procz00_10);
		}

	}



/* &process-exit-status */
	obj_t BGl_z62processzd2exitzd2statusz62zz__processz00(obj_t BgL_envz00_1821,
		obj_t BgL_procz00_1822)
	{
		{	/* Llib/process.scm 172 */
			{	/* Llib/process.scm 173 */
				obj_t BgL_auxz00_1959;

				if (PROCESSP(BgL_procz00_1822))
					{	/* Llib/process.scm 173 */
						BgL_auxz00_1959 = BgL_procz00_1822;
					}
				else
					{
						obj_t BgL_auxz00_1962;

						BgL_auxz00_1962 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
							BINT(((long) 7500)), BGl_string1678z00zz__processz00,
							BGl_string1672z00zz__processz00, BgL_procz00_1822);
						FAILURE(BgL_auxz00_1962, BFALSE, BFALSE);
					}
				return BGl_processzd2exitzd2statusz00zz__processz00(BgL_auxz00_1959);
			}
		}

	}



/* process-send-signal */
	BGL_EXPORTED_DEF obj_t BGl_processzd2sendzd2signalz00zz__processz00(obj_t
		BgL_procz00_11, int BgL_signalz00_12)
	{
		{	/* Llib/process.scm 178 */
			return c_process_send_signal(BgL_procz00_11, BgL_signalz00_12);
		}

	}



/* &process-send-signal */
	obj_t BGl_z62processzd2sendzd2signalz62zz__processz00(obj_t BgL_envz00_1823,
		obj_t BgL_procz00_1824, obj_t BgL_signalz00_1825)
	{
		{	/* Llib/process.scm 178 */
			{	/* Llib/process.scm 179 */
				int BgL_auxz00_1975;
				obj_t BgL_auxz00_1968;

				{	/* Llib/process.scm 179 */
					obj_t BgL_tmpz00_1976;

					if (INTEGERP(BgL_signalz00_1825))
						{	/* Llib/process.scm 179 */
							BgL_tmpz00_1976 = BgL_signalz00_1825;
						}
					else
						{
							obj_t BgL_auxz00_1979;

							BgL_auxz00_1979 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
								BINT(((long) 7805)), BGl_string1679z00zz__processz00,
								BGl_string1680z00zz__processz00, BgL_signalz00_1825);
							FAILURE(BgL_auxz00_1979, BFALSE, BFALSE);
						}
					BgL_auxz00_1975 = CINT(BgL_tmpz00_1976);
				}
				if (PROCESSP(BgL_procz00_1824))
					{	/* Llib/process.scm 179 */
						BgL_auxz00_1968 = BgL_procz00_1824;
					}
				else
					{
						obj_t BgL_auxz00_1971;

						BgL_auxz00_1971 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
							BINT(((long) 7805)), BGl_string1679z00zz__processz00,
							BGl_string1672z00zz__processz00, BgL_procz00_1824);
						FAILURE(BgL_auxz00_1971, BFALSE, BFALSE);
					}
				return
					BGl_processzd2sendzd2signalz00zz__processz00(BgL_auxz00_1968,
					BgL_auxz00_1975);
			}
		}

	}



/* process-kill */
	BGL_EXPORTED_DEF obj_t BGl_processzd2killzd2zz__processz00(obj_t
		BgL_procz00_13)
	{
		{	/* Llib/process.scm 184 */
			c_process_kill(BgL_procz00_13);
			return BGl_closezd2processzd2portsz00zz__processz00(BgL_procz00_13);
		}

	}



/* &process-kill */
	obj_t BGl_z62processzd2killzb0zz__processz00(obj_t BgL_envz00_1826,
		obj_t BgL_procz00_1827)
	{
		{	/* Llib/process.scm 184 */
			{	/* Llib/process.scm 185 */
				obj_t BgL_auxz00_1987;

				if (PROCESSP(BgL_procz00_1827))
					{	/* Llib/process.scm 185 */
						BgL_auxz00_1987 = BgL_procz00_1827;
					}
				else
					{
						obj_t BgL_auxz00_1990;

						BgL_auxz00_1990 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
							BINT(((long) 8123)), BGl_string1681z00zz__processz00,
							BGl_string1672z00zz__processz00, BgL_procz00_1827);
						FAILURE(BgL_auxz00_1990, BFALSE, BFALSE);
					}
				return BGl_processzd2killzd2zz__processz00(BgL_auxz00_1987);
			}
		}

	}



/* process-stop */
	BGL_EXPORTED_DEF obj_t BGl_processzd2stopzd2zz__processz00(obj_t
		BgL_procz00_14)
	{
		{	/* Llib/process.scm 191 */
			return c_process_stop(BgL_procz00_14);
		}

	}



/* &process-stop */
	obj_t BGl_z62processzd2stopzb0zz__processz00(obj_t BgL_envz00_1828,
		obj_t BgL_procz00_1829)
	{
		{	/* Llib/process.scm 191 */
			{	/* Llib/process.scm 192 */
				obj_t BgL_auxz00_1996;

				if (PROCESSP(BgL_procz00_1829))
					{	/* Llib/process.scm 192 */
						BgL_auxz00_1996 = BgL_procz00_1829;
					}
				else
					{
						obj_t BgL_auxz00_1999;

						BgL_auxz00_1999 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
							BINT(((long) 8417)), BGl_string1682z00zz__processz00,
							BGl_string1672z00zz__processz00, BgL_procz00_1829);
						FAILURE(BgL_auxz00_1999, BFALSE, BFALSE);
					}
				return BGl_processzd2stopzd2zz__processz00(BgL_auxz00_1996);
			}
		}

	}



/* process-continue */
	BGL_EXPORTED_DEF obj_t BGl_processzd2continuezd2zz__processz00(obj_t
		BgL_procz00_15)
	{
		{	/* Llib/process.scm 197 */
			return c_process_continue(BgL_procz00_15);
		}

	}



/* &process-continue */
	obj_t BGl_z62processzd2continuezb0zz__processz00(obj_t BgL_envz00_1830,
		obj_t BgL_procz00_1831)
	{
		{	/* Llib/process.scm 197 */
			{	/* Llib/process.scm 198 */
				obj_t BgL_auxz00_2005;

				if (PROCESSP(BgL_procz00_1831))
					{	/* Llib/process.scm 198 */
						BgL_auxz00_2005 = BgL_procz00_1831;
					}
				else
					{
						obj_t BgL_auxz00_2008;

						BgL_auxz00_2008 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
							BINT(((long) 8705)), BGl_string1683z00zz__processz00,
							BGl_string1672z00zz__processz00, BgL_procz00_1831);
						FAILURE(BgL_auxz00_2008, BFALSE, BFALSE);
					}
				return BGl_processzd2continuezd2zz__processz00(BgL_auxz00_2005);
			}
		}

	}



/* process-list */
	BGL_EXPORTED_DEF obj_t BGl_processzd2listzd2zz__processz00()
	{
		{	/* Llib/process.scm 203 */
			return c_process_list();
		}

	}



/* &process-list */
	obj_t BGl_z62processzd2listzb0zz__processz00(obj_t BgL_envz00_1832)
	{
		{	/* Llib/process.scm 203 */
			return BGl_processzd2listzd2zz__processz00();
		}

	}



/* run-process */
	BGL_EXPORTED_DEF obj_t BGl_runzd2processzd2zz__processz00(obj_t
		BgL_commandz00_16, obj_t BgL_restz00_17)
	{
		{	/* Llib/process.scm 212 */
			{	/* Llib/process.scm 213 */
				bool_t BgL_forkz00_1062;
				bool_t BgL_waitz00_1063;
				obj_t BgL_inputz00_1064;
				obj_t BgL_outputz00_1065;
				obj_t BgL_errorz00_1066;
				obj_t BgL_hostz00_1067;
				obj_t BgL_pipesz00_1068;
				obj_t BgL_argsz00_1069;
				obj_t BgL_envz00_1070;

				BgL_forkz00_1062 = ((bool_t) 1);
				BgL_waitz00_1063 = ((bool_t) 0);
				BgL_inputz00_1064 = BUNSPEC;
				BgL_outputz00_1065 = BUNSPEC;
				BgL_errorz00_1066 = BUNSPEC;
				BgL_hostz00_1067 = BUNSPEC;
				BgL_pipesz00_1068 = BGl_list1684z00zz__processz00;
				BgL_argsz00_1069 = BNIL;
				BgL_envz00_1070 = BNIL;
				{
					obj_t BgL_restz00_1073;

					BgL_restz00_1073 = BgL_restz00_17;
				BgL_zc3z04anonymousza31158ze3z87_1074:
					if (NULLP(BgL_restz00_1073))
						{	/* Llib/process.scm 229 */
							obj_t BgL_arg1165z00_1076;

							BgL_arg1165z00_1076 = bgl_reverse_bang(BgL_argsz00_1069);
							return
								c_run_process(BgL_hostz00_1067,
								BBOOL(BgL_forkz00_1062),
								BBOOL(BgL_waitz00_1063), BgL_inputz00_1064, BgL_outputz00_1065,
								BgL_errorz00_1066, BgL_commandz00_16, BgL_arg1165z00_1076,
								BgL_envz00_1070);
						}
					else
						{	/* Llib/process.scm 230 */
							bool_t BgL_test1772z00_2021;

							{	/* Llib/process.scm 230 */
								bool_t BgL_test1773z00_2022;

								{	/* Llib/process.scm 230 */
									obj_t BgL_tmpz00_2023;

									BgL_tmpz00_2023 = CAR(((obj_t) BgL_restz00_1073));
									BgL_test1773z00_2022 = KEYWORDP(BgL_tmpz00_2023);
								}
								if (BgL_test1773z00_2022)
									{	/* Llib/process.scm 230 */
										obj_t BgL_tmpz00_2027;

										BgL_tmpz00_2027 = CDR(((obj_t) BgL_restz00_1073));
										BgL_test1772z00_2021 = PAIRP(BgL_tmpz00_2027);
									}
								else
									{	/* Llib/process.scm 230 */
										BgL_test1772z00_2021 = ((bool_t) 0);
									}
							}
							if (BgL_test1772z00_2021)
								{	/* Llib/process.scm 231 */
									obj_t BgL_valz00_1082;

									{	/* Llib/process.scm 231 */
										obj_t BgL_pairz00_1527;

										BgL_pairz00_1527 = CDR(((obj_t) BgL_restz00_1073));
										BgL_valz00_1082 = CAR(BgL_pairz00_1527);
									}
									{	/* Llib/process.scm 232 */
										obj_t BgL_casezd2valuezd2_1083;

										BgL_casezd2valuezd2_1083 = CAR(((obj_t) BgL_restz00_1073));
										if (
											(BgL_casezd2valuezd2_1083 ==
												BGl_keyword1687z00zz__processz00))
											{	/* Llib/process.scm 232 */
												if (BOOLEANP(BgL_valz00_1082))
													{	/* Llib/process.scm 234 */
														BgL_waitz00_1063 = CBOOL(BgL_valz00_1082);
													}
												else
													{	/* Llib/process.scm 234 */
														BGl_errorz00zz__errorz00
															(BGl_string1689z00zz__processz00,
															BGl_string1690z00zz__processz00,
															BgL_restz00_1073);
													}
											}
										else
											{	/* Llib/process.scm 232 */
												if (
													(BgL_casezd2valuezd2_1083 ==
														BGl_keyword1691z00zz__processz00))
													{	/* Llib/process.scm 232 */
														if (BOOLEANP(BgL_valz00_1082))
															{	/* Llib/process.scm 238 */
																BgL_forkz00_1062 = CBOOL(BgL_valz00_1082);
															}
														else
															{	/* Llib/process.scm 238 */
																BGl_errorz00zz__errorz00
																	(BGl_string1689z00zz__processz00,
																	BGl_string1690z00zz__processz00,
																	BgL_restz00_1073);
															}
													}
												else
													{	/* Llib/process.scm 232 */
														if (
															(BgL_casezd2valuezd2_1083 ==
																BGl_keyword1693z00zz__processz00))
															{	/* Llib/process.scm 242 */
																bool_t BgL_test1779z00_2050;

																if (STRINGP(BgL_valz00_1082))
																	{	/* Llib/process.scm 242 */
																		BgL_test1779z00_2050 = ((bool_t) 1);
																	}
																else
																	{	/* Llib/process.scm 242 */
																		BgL_test1779z00_2050 =
																			CBOOL
																			(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																			(BgL_valz00_1082, BgL_pipesz00_1068));
																	}
																if (BgL_test1779z00_2050)
																	{	/* Llib/process.scm 242 */
																		BgL_inputz00_1064 = BgL_valz00_1082;
																	}
																else
																	{	/* Llib/process.scm 242 */
																		BGl_errorz00zz__errorz00
																			(BGl_string1689z00zz__processz00,
																			BGl_string1690z00zz__processz00,
																			BgL_restz00_1073);
																	}
															}
														else
															{	/* Llib/process.scm 232 */
																if (
																	(BgL_casezd2valuezd2_1083 ==
																		BGl_keyword1695z00zz__processz00))
																	{	/* Llib/process.scm 246 */
																		bool_t BgL_test1782z00_2058;

																		if (STRINGP(BgL_valz00_1082))
																			{	/* Llib/process.scm 246 */
																				BgL_test1782z00_2058 = ((bool_t) 1);
																			}
																		else
																			{	/* Llib/process.scm 246 */
																				if (CBOOL
																					(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																						(BgL_valz00_1082,
																							BgL_pipesz00_1068)))
																					{	/* Llib/process.scm 246 */
																						BgL_test1782z00_2058 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/process.scm 246 */
																						BgL_test1782z00_2058 =
																							(BgL_valz00_1082 ==
																							BGl_keyword1697z00zz__processz00);
																					}
																			}
																		if (BgL_test1782z00_2058)
																			{	/* Llib/process.scm 246 */
																				BgL_outputz00_1065 = BgL_valz00_1082;
																			}
																		else
																			{	/* Llib/process.scm 246 */
																				BGl_errorz00zz__errorz00
																					(BGl_string1689z00zz__processz00,
																					BGl_string1690z00zz__processz00,
																					BgL_restz00_1073);
																			}
																	}
																else
																	{	/* Llib/process.scm 232 */
																		if (
																			(BgL_casezd2valuezd2_1083 ==
																				BGl_keyword1699z00zz__processz00))
																			{	/* Llib/process.scm 250 */
																				bool_t BgL_test1786z00_2068;

																				if (STRINGP(BgL_valz00_1082))
																					{	/* Llib/process.scm 250 */
																						BgL_test1786z00_2068 = ((bool_t) 1);
																					}
																				else
																					{	/* Llib/process.scm 250 */
																						if (CBOOL
																							(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_valz00_1082,
																									BgL_pipesz00_1068)))
																							{	/* Llib/process.scm 250 */
																								BgL_test1786z00_2068 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Llib/process.scm 250 */
																								BgL_test1786z00_2068 =
																									(BgL_valz00_1082 ==
																									BGl_keyword1697z00zz__processz00);
																							}
																					}
																				if (BgL_test1786z00_2068)
																					{	/* Llib/process.scm 250 */
																						BgL_errorz00_1066 = BgL_valz00_1082;
																					}
																				else
																					{	/* Llib/process.scm 250 */
																						BGl_errorz00zz__errorz00
																							(BGl_string1689z00zz__processz00,
																							BGl_string1690z00zz__processz00,
																							BgL_restz00_1073);
																					}
																			}
																		else
																			{	/* Llib/process.scm 232 */
																				if (
																					(BgL_casezd2valuezd2_1083 ==
																						BGl_keyword1701z00zz__processz00))
																					{	/* Llib/process.scm 232 */
																						if (STRINGP(BgL_valz00_1082))
																							{	/* Llib/process.scm 254 */
																								BgL_hostz00_1067 =
																									BgL_valz00_1082;
																							}
																						else
																							{	/* Llib/process.scm 254 */
																								BGl_errorz00zz__errorz00
																									(BGl_string1689z00zz__processz00,
																									BGl_string1690z00zz__processz00,
																									BgL_restz00_1073);
																							}
																					}
																				else
																					{	/* Llib/process.scm 232 */
																						if (
																							(BgL_casezd2valuezd2_1083 ==
																								BGl_keyword1703z00zz__processz00))
																							{	/* Llib/process.scm 232 */
																								if (STRINGP(BgL_valz00_1082))
																									{	/* Llib/process.scm 258 */
																										BgL_envz00_1070 =
																											MAKE_YOUNG_PAIR
																											(BgL_valz00_1082,
																											BgL_envz00_1070);
																									}
																								else
																									{	/* Llib/process.scm 258 */
																										BGl_errorz00zz__errorz00
																											(BGl_string1689z00zz__processz00,
																											BGl_string1690z00zz__processz00,
																											BgL_restz00_1073);
																									}
																							}
																						else
																							{	/* Llib/process.scm 232 */
																								BGl_errorz00zz__errorz00
																									(BGl_string1689z00zz__processz00,
																									BGl_string1690z00zz__processz00,
																									BgL_restz00_1073);
																							}
																					}
																			}
																	}
															}
													}
											}
									}
									{	/* Llib/process.scm 263 */
										obj_t BgL_arg1194z00_1108;

										{	/* Llib/process.scm 263 */
											obj_t BgL_pairz00_1551;

											BgL_pairz00_1551 = CDR(((obj_t) BgL_restz00_1073));
											BgL_arg1194z00_1108 = CDR(BgL_pairz00_1551);
										}
										{
											obj_t BgL_restz00_2091;

											BgL_restz00_2091 = BgL_arg1194z00_1108;
											BgL_restz00_1073 = BgL_restz00_2091;
											goto BgL_zc3z04anonymousza31158ze3z87_1074;
										}
									}
								}
							else
								{	/* Llib/process.scm 264 */
									bool_t BgL_test1793z00_2092;

									{	/* Llib/process.scm 264 */
										obj_t BgL_tmpz00_2093;

										BgL_tmpz00_2093 = CAR(((obj_t) BgL_restz00_1073));
										BgL_test1793z00_2092 = STRINGP(BgL_tmpz00_2093);
									}
									if (BgL_test1793z00_2092)
										{	/* Llib/process.scm 264 */
											{	/* Llib/process.scm 265 */
												obj_t BgL_arg1208z00_1112;

												BgL_arg1208z00_1112 = CAR(((obj_t) BgL_restz00_1073));
												BgL_argsz00_1069 =
													MAKE_YOUNG_PAIR(BgL_arg1208z00_1112,
													BgL_argsz00_1069);
											}
											{	/* Llib/process.scm 266 */
												obj_t BgL_arg1211z00_1113;

												BgL_arg1211z00_1113 = CDR(((obj_t) BgL_restz00_1073));
												{
													obj_t BgL_restz00_2102;

													BgL_restz00_2102 = BgL_arg1211z00_1113;
													BgL_restz00_1073 = BgL_restz00_2102;
													goto BgL_zc3z04anonymousza31158ze3z87_1074;
												}
											}
										}
									else
										{	/* Llib/process.scm 264 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string1689z00zz__processz00,
												BGl_string1690z00zz__processz00, BgL_restz00_1073);
										}
								}
						}
				}
			}
		}

	}



/* &run-process */
	obj_t BGl_z62runzd2processzb0zz__processz00(obj_t BgL_envz00_1833,
		obj_t BgL_commandz00_1834, obj_t BgL_restz00_1835)
	{
		{	/* Llib/process.scm 212 */
			{	/* Llib/process.scm 213 */
				obj_t BgL_auxz00_2104;

				if (STRINGP(BgL_commandz00_1834))
					{	/* Llib/process.scm 213 */
						BgL_auxz00_2104 = BgL_commandz00_1834;
					}
				else
					{
						obj_t BgL_auxz00_2107;

						BgL_auxz00_2107 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
							BINT(((long) 9491)), BGl_string1705z00zz__processz00,
							BGl_string1706z00zz__processz00, BgL_commandz00_1834);
						FAILURE(BgL_auxz00_2107, BFALSE, BFALSE);
					}
				return
					BGl_runzd2processzd2zz__processz00(BgL_auxz00_2104, BgL_restz00_1835);
			}
		}

	}



/* close-process-ports */
	BGL_EXPORTED_DEF obj_t BGl_closezd2processzd2portsz00zz__processz00(obj_t
		BgL_procz00_18)
	{
		{	/* Llib/process.scm 273 */
			{	/* Llib/process.scm 274 */
				bool_t BgL_test1795z00_2112;

				{	/* Llib/process.scm 274 */
					obj_t BgL_tmpz00_2113;

					BgL_tmpz00_2113 = PROCESS_INPUT_PORT(BgL_procz00_18);
					BgL_test1795z00_2112 = OUTPUT_PORTP(BgL_tmpz00_2113);
				}
				if (BgL_test1795z00_2112)
					{	/* Llib/process.scm 275 */
						obj_t BgL_arg1227z00_1124;

						BgL_arg1227z00_1124 = PROCESS_INPUT_PORT(BgL_procz00_18);
						bgl_close_output_port(((obj_t) BgL_arg1227z00_1124));
					}
				else
					{	/* Llib/process.scm 274 */
						BFALSE;
					}
			}
			{	/* Llib/process.scm 276 */
				bool_t BgL_test1796z00_2119;

				{	/* Llib/process.scm 276 */
					obj_t BgL_tmpz00_2120;

					BgL_tmpz00_2120 = PROCESS_ERROR_PORT(BgL_procz00_18);
					BgL_test1796z00_2119 = INPUT_PORTP(BgL_tmpz00_2120);
				}
				if (BgL_test1796z00_2119)
					{	/* Llib/process.scm 277 */
						obj_t BgL_arg1239z00_1128;

						BgL_arg1239z00_1128 = PROCESS_ERROR_PORT(BgL_procz00_18);
						bgl_close_input_port(((obj_t) BgL_arg1239z00_1128));
					}
				else
					{	/* Llib/process.scm 276 */
						BFALSE;
					}
			}
			{	/* Llib/process.scm 278 */
				bool_t BgL_test1797z00_2126;

				{	/* Llib/process.scm 278 */
					obj_t BgL_tmpz00_2127;

					BgL_tmpz00_2127 = PROCESS_OUTPUT_PORT(BgL_procz00_18);
					BgL_test1797z00_2126 = INPUT_PORTP(BgL_tmpz00_2127);
				}
				if (BgL_test1797z00_2126)
					{	/* Llib/process.scm 279 */
						obj_t BgL_arg1245z00_1132;

						BgL_arg1245z00_1132 = PROCESS_OUTPUT_PORT(BgL_procz00_18);
						return bgl_close_input_port(((obj_t) BgL_arg1245z00_1132));
					}
				else
					{	/* Llib/process.scm 278 */
						return BFALSE;
					}
			}
		}

	}



/* &close-process-ports */
	obj_t BGl_z62closezd2processzd2portsz62zz__processz00(obj_t BgL_envz00_1836,
		obj_t BgL_procz00_1837)
	{
		{	/* Llib/process.scm 273 */
			{	/* Llib/process.scm 275 */
				obj_t BgL_auxz00_2133;

				if (PROCESSP(BgL_procz00_1837))
					{	/* Llib/process.scm 275 */
						BgL_auxz00_2133 = BgL_procz00_1837;
					}
				else
					{
						obj_t BgL_auxz00_2136;

						BgL_auxz00_2136 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
							BINT(((long) 11238)), BGl_string1707z00zz__processz00,
							BGl_string1672z00zz__processz00, BgL_procz00_1837);
						FAILURE(BgL_auxz00_2136, BFALSE, BFALSE);
					}
				return BGl_closezd2processzd2portsz00zz__processz00(BgL_auxz00_2133);
			}
		}

	}



/* unregister-process */
	BGL_EXPORTED_DEF obj_t BGl_unregisterzd2processzd2zz__processz00(obj_t
		BgL_procz00_19)
	{
		{	/* Llib/process.scm 284 */
			return c_unregister_process(BgL_procz00_19);
		}

	}



/* &unregister-process */
	obj_t BGl_z62unregisterzd2processzb0zz__processz00(obj_t BgL_envz00_1838,
		obj_t BgL_procz00_1839)
	{
		{	/* Llib/process.scm 284 */
			{	/* Llib/process.scm 285 */
				obj_t BgL_auxz00_2142;

				if (PROCESSP(BgL_procz00_1839))
					{	/* Llib/process.scm 285 */
						BgL_auxz00_2142 = BgL_procz00_1839;
					}
				else
					{
						obj_t BgL_auxz00_2145;

						BgL_auxz00_2145 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1670z00zz__processz00,
							BINT(((long) 11710)), BGl_string1708z00zz__processz00,
							BGl_string1672z00zz__processz00, BgL_procz00_1839);
						FAILURE(BgL_auxz00_2145, BFALSE, BFALSE);
					}
				return BGl_unregisterzd2processzd2zz__processz00(BgL_auxz00_2142);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__processz00()
	{
		{	/* Llib/process.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__processz00()
	{
		{	/* Llib/process.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__processz00()
	{
		{	/* Llib/process.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__processz00()
	{
		{	/* Llib/process.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1709z00zz__processz00));
		}

	}

#ifdef __cplusplus
}
#endif
