/*===========================================================================*/
/*   (Llib/param.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/param.scm -indent -o objs/obj_u/Llib/param.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62bigloozd2loadzd2readerzd2setz12za2zz__paramz00(obj_t,
		obj_t);
	static long BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00;
	static obj_t BGl_symbol1670z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_z62bigloozd2profilezb0zz__paramz00(obj_t);
	static obj_t BGl_symbol1674z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_z62bigloozd2loadzd2modulezd2setz12za2zz__paramz00(obj_t,
		obj_t);
	static obj_t BGl_z62bigloozd2debugzd2modulezd2setz12za2zz__paramz00(obj_t,
		obj_t);
	static obj_t BGl_za2parameterzd2mutexza2zd2zz__paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_bigloozd2warningzd2zz__paramz00();
	static obj_t BGl_symbol1682z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_symbol1684z00zz__paramz00 = BUNSPEC;
	static bool_t BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00;
	static obj_t BGl_z62bigloozd2debugzd2setz12z70zz__paramz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__paramz00 = BUNSPEC;
	static obj_t BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_symbol1690z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_z62bigloozd2debugzd2modulez62zz__paramz00(obj_t);
	static obj_t BGl_za2bigloozd2profileza2zd2zz__paramz00 = BUNSPEC;
	static obj_t BGl_z62bigloozd2debugzb0zz__paramz00(obj_t);
	static obj_t BGl_za2bigloozd2warningza2zd2zz__paramz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bigloozd2evalzd2strictzd2modulezb0zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(int);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(long);
	static obj_t
		BGl_z62bigloozd2dnszd2enablezd2cachezd2setz12z70zz__paramz00(obj_t, obj_t);
	static obj_t BGl_z62bigloozd2loadzd2readerz62zz__paramz00(obj_t);
	static obj_t
		BGl_z62bigloozd2evalzd2strictzd2modulezd2setz12z70zz__paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long bgl_dns_cache_validity_timeout();
	static obj_t BGl_toplevelzd2initzd2zz__paramz00();
	extern obj_t BGl_getenvz00zz__osz00(obj_t);
	static obj_t BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_z62bigloozd2warningzd2setz12z70zz__paramz00(obj_t, obj_t);
	static obj_t BGl_z62bigloozd2compilerzd2debugzd2setz12za2zz__paramz00(obj_t,
		obj_t);
	static obj_t BGl_z62bigloozd2loadzd2modulez62zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t);
	static obj_t BGl_z62bigloozd2dnszd2enablezd2cachezb0zz__paramz00(obj_t);
	BGL_EXPORTED_DECL int BGl_bigloozd2profilezd2zz__paramz00();
	static obj_t BGl_genericzd2initzd2zz__paramz00();
	static obj_t BGl_objectzd2initzd2zz__paramz00();
	BGL_EXPORTED_DECL bool_t BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00();
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2tracezd2zz__paramz00();
	static obj_t BGl_z62bigloozd2casezd2sensitivezd2setz12za2zz__paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t);
	static obj_t BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00();
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(int);
	BGL_EXPORTED_DECL int BGl_bigloozd2debugzd2modulez00zz__paramz00();
	static obj_t BGl_methodzd2initzd2zz__paramz00();
	static obj_t BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int);
	static obj_t BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_z62bigloozd2initializa7edz12z05zz__paramz00(obj_t);
	static obj_t
		BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12za2zz__paramz00
		(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(bool_t);
	static obj_t BGl_z62bigloozd2initializa7edzf3ze4zz__paramz00(obj_t);
	static obj_t BGl_za2bigloozd2traceza2zd2zz__paramz00 = BUNSPEC;
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t
		BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutz62zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2tracezd2setz12z12zz__paramz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00();
	static obj_t BGl_z62bigloozd2profilezd2setz12z70zz__paramz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00();
	static obj_t
		BGl_z62bigloozd2tracezd2stackzd2depthzd2setz12z70zz__paramz00(obj_t, obj_t);
	static obj_t BGl_z62bigloozd2tracezd2stackzd2depthzb0zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2loadzd2modulez00zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_za2bigloozd2debugza2zd2zz__paramz00 = BUNSPEC;
	static obj_t BGl_z62bigloozd2strictzd2r5rszd2stringszb0zz__paramz00(obj_t);
	static obj_t BGl_list1681z00zz__paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL int bgl_debug();
	static bool_t BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00;
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2initializa7edz12z67zz__paramz00();
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(bool_t);
	BGL_EXPORTED_DECL bool_t bgl_dns_enable_cache();
	BGL_EXPORTED_DECL obj_t bgl_debug_set(int);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__paramz00();
	static obj_t BGl_z62bigloozd2tracezb0zz__paramz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_bigloozd2initializa7edzf3z86zz__paramz00();
	static obj_t BGl_gczd2rootszd2initz00zz__paramz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__paramz00();
	static obj_t BGl_z62bigloozd2libraryzd2pathz62zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
	static obj_t
		BGl_z62bigloozd2modulezd2extensionzd2handlerzb0zz__paramz00(obj_t);
	static bool_t BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00;
	extern obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	extern obj_t BGl_stringzd2splitzd2zz__r4_strings_6_7z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2casezd2sensitivez00zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2profilezd2setz12z12zz__paramz00(int);
	static obj_t BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_bigloozd2compilerzd2debugz00zz__paramz00();
	static obj_t BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = BUNSPEC;
	static obj_t
		BGl_z62bigloozd2modulezd2extensionzd2handlerzd2setz12z70zz__paramz00(obj_t,
		obj_t);
	static long
		BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00;
	static obj_t BGl_z62bigloozd2warningzb0zz__paramz00(obj_t);
	static bool_t BGl_za2bigloozd2initializa7edpza2z75zz__paramz00;
	static obj_t BGl_z62bigloozd2tracezd2colorz62zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(bool_t);
	static obj_t
		BGl_z62bigloozd2strictzd2r5rszd2stringszd2setz12z70zz__paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t);
	static obj_t BGl_z62bigloozd2casezd2sensitivez62zz__paramz00(obj_t);
	static obj_t BGl_z62bigloozd2tracezd2setz12z70zz__paramz00(obj_t, obj_t);
	static bool_t BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00;
	static obj_t BGl_symbol1652z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_symbol1654z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_z62bigloozd2libraryzd2pathzd2setz12za2zz__paramz00(obj_t,
		obj_t);
	static obj_t BGl_symbol1657z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_z62bigloozd2compilerzd2debugz62zz__paramz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(int);
	static obj_t BGl_z62bigloozd2tracezd2colorzd2setz12za2zz__paramz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2libraryzd2pathz00zz__paramz00();
	static obj_t BGl_symbol1663z00zz__paramz00 = BUNSPEC;
	static obj_t BGl_symbol1666z00zz__paramz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2dnszd2enablezd2cachezd2envz00zz__paramz00,
		BgL_bgl_za762biglooza7d2dnsza71697za7,
		BGl_z62bigloozd2dnszd2enablezd2cachezb0zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2loadzd2modulezd2envzd2zz__paramz00,
		BgL_bgl_za762biglooza7d2load1698z00,
		BGl_z62bigloozd2loadzd2modulez62zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zd2envz12zz__paramz00,
		BgL_bgl_za762biglooza7d2dnsza71699za7,
		BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12za2zz__paramz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2tracezd2colorzd2setz12zd2envz12zz__paramz00,
		BgL_bgl_za762biglooza7d2trac1700z00,
		BGl_z62bigloozd2tracezd2colorzd2setz12za2zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2modulezd2extensionzd2handlerzd2envz00zz__paramz00,
		BgL_bgl_za762biglooza7d2modu1701z00,
		BGl_z62bigloozd2modulezd2extensionzd2handlerzb0zz__paramz00, 0L, BUNSPEC,
		0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2tracezd2envz00zz__paramz00,
		BgL_bgl_za762biglooza7d2trac1702z00, BGl_z62bigloozd2tracezb0zz__paramz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2loadzd2modulezd2setz12zd2envz12zz__paramz00,
		BgL_bgl_za762biglooza7d2load1703z00,
		BGl_z62bigloozd2loadzd2modulezd2setz12za2zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2casezd2sensitivezd2envzd2zz__paramz00,
		BgL_bgl_za762biglooza7d2case1704z00,
		BGl_z62bigloozd2casezd2sensitivez62zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2profilezd2setz12zd2envzc0zz__paramz00,
		BgL_bgl_za762biglooza7d2prof1705z00,
		BGl_z62bigloozd2profilezd2setz12z70zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2dnszd2enablezd2cachezd2setz12zd2envzc0zz__paramz00,
		BgL_bgl_za762biglooza7d2dnsza71706za7,
		BGl_z62bigloozd2dnszd2enablezd2cachezd2setz12z70zz__paramz00, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string1649z00zz__paramz00,
		BgL_bgl_string1649za700za7za7_1707za7, "param", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2compilerzd2debugzd2setz12zd2envz12zz__paramz00,
		BgL_bgl_za762biglooza7d2comp1708z00,
		BGl_z62bigloozd2compilerzd2debugzd2setz12za2zz__paramz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1650z00zz__paramz00,
		BgL_bgl_string1650za700za7za7_1709za7, "BIGLOOTRACE", 11);
	      DEFINE_STRING(BGl_string1651z00zz__paramz00,
		BgL_bgl_string1651za700za7za7_1710za7, "BIGLOOSTACKDEPTH", 16);
	      DEFINE_STRING(BGl_string1653z00zz__paramz00,
		BgL_bgl_string1653za700za7za7_1711za7, "sensitive", 9);
	      DEFINE_STRING(BGl_string1655z00zz__paramz00,
		BgL_bgl_string1655za700za7za7_1712za7, "library-directory", 17);
	      DEFINE_STRING(BGl_string1656z00zz__paramz00,
		BgL_bgl_string1656za700za7za7_1713za7, ".", 1);
	      DEFINE_STRING(BGl_string1658z00zz__paramz00,
		BgL_bgl_string1658za700za7za7_1714za7, "bigloo-compiler-debug-set!", 26);
	      DEFINE_STRING(BGl_string1659z00zz__paramz00,
		BgL_bgl_string1659za700za7za7_1715za7, "Illegal debug level", 19);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2strictzd2r5rszd2stringszd2setz12zd2envzc0zz__paramz00,
		BgL_bgl_za762biglooza7d2stri1716z00,
		BGl_z62bigloozd2strictzd2r5rszd2stringszd2setz12z70zz__paramz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1660z00zz__paramz00,
		BgL_bgl_string1660za700za7za7_1717za7, "/tmp/4.4a/runtime/Llib/param.scm",
		32);
	      DEFINE_STRING(BGl_string1661z00zz__paramz00,
		BgL_bgl_string1661za700za7za7_1718za7, "&bigloo-compiler-debug-set!", 27);
	      DEFINE_STRING(BGl_string1662z00zz__paramz00,
		BgL_bgl_string1662za700za7za7_1719za7, "bint", 4);
	      DEFINE_STRING(BGl_string1664z00zz__paramz00,
		BgL_bgl_string1664za700za7za7_1720za7, "bigloo-debug-set!", 17);
	      DEFINE_STRING(BGl_string1665z00zz__paramz00,
		BgL_bgl_string1665za700za7za7_1721za7, "&bigloo-debug-set!", 18);
	      DEFINE_STRING(BGl_string1667z00zz__paramz00,
		BgL_bgl_string1667za700za7za7_1722za7, "bigloo-debug-module-set!", 24);
	      DEFINE_STRING(BGl_string1668z00zz__paramz00,
		BgL_bgl_string1668za700za7za7_1723za7, "Illegal debug module level", 26);
	      DEFINE_STRING(BGl_string1669z00zz__paramz00,
		BgL_bgl_string1669za700za7za7_1724za7, "&bigloo-debug-module-set!", 25);
	      DEFINE_STRING(BGl_string1671z00zz__paramz00,
		BgL_bgl_string1671za700za7za7_1725za7, "bigloo-warning-set!", 19);
	      DEFINE_STRING(BGl_string1672z00zz__paramz00,
		BgL_bgl_string1672za700za7za7_1726za7, "Illegal warning level", 21);
	      DEFINE_STRING(BGl_string1673z00zz__paramz00,
		BgL_bgl_string1673za700za7za7_1727za7, "&bigloo-warning-set!", 20);
	      DEFINE_STRING(BGl_string1675z00zz__paramz00,
		BgL_bgl_string1675za700za7za7_1728za7, "bigloo-profile-set!", 19);
	      DEFINE_STRING(BGl_string1676z00zz__paramz00,
		BgL_bgl_string1676za700za7za7_1729za7, "Illegal profile level", 21);
	      DEFINE_STRING(BGl_string1677z00zz__paramz00,
		BgL_bgl_string1677za700za7za7_1730za7, "&bigloo-profile-set!", 20);
	      DEFINE_STRING(BGl_string1678z00zz__paramz00,
		BgL_bgl_string1678za700za7za7_1731za7, "&bigloo-trace-set!", 18);
	      DEFINE_STRING(BGl_string1679z00zz__paramz00,
		BgL_bgl_string1679za700za7za7_1732za7, "pair-nil", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2profilezd2envz00zz__paramz00,
		BgL_bgl_za762biglooza7d2prof1733z00, BGl_z62bigloozd2profilezb0zz__paramz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2initializa7edzf3zd2envz54zz__paramz00,
		BgL_bgl_za762biglooza7d2init1734z00,
		BGl_z62bigloozd2initializa7edzf3ze4zz__paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1680z00zz__paramz00,
		BgL_bgl_string1680za700za7za7_1735za7, "&bigloo-trace-stack-depth-set!",
		30);
	      DEFINE_STRING(BGl_string1683z00zz__paramz00,
		BgL_bgl_string1683za700za7za7_1736za7, "downcase", 8);
	      DEFINE_STRING(BGl_string1685z00zz__paramz00,
		BgL_bgl_string1685za700za7za7_1737za7, "upcase", 6);
	      DEFINE_STRING(BGl_string1686z00zz__paramz00,
		BgL_bgl_string1686za700za7za7_1738za7, "bigloo-sensitivity-set!", 23);
	      DEFINE_STRING(BGl_string1687z00zz__paramz00,
		BgL_bgl_string1687za700za7za7_1739za7, "Illegal sensitive value", 23);
	      DEFINE_STRING(BGl_string1688z00zz__paramz00,
		BgL_bgl_string1688za700za7za7_1740za7, "&bigloo-case-sensitive-set!", 27);
	      DEFINE_STRING(BGl_string1689z00zz__paramz00,
		BgL_bgl_string1689za700za7za7_1741za7, "symbol", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2evalzd2strictzd2modulezd2envz00zz__paramz00,
		BgL_bgl_za762biglooza7d2eval1742z00,
		BGl_z62bigloozd2evalzd2strictzd2modulezb0zz__paramz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1691z00zz__paramz00,
		BgL_bgl_string1691za700za7za7_1743za7, "bigloo-library-path-set!", 24);
	      DEFINE_STRING(BGl_string1692z00zz__paramz00,
		BgL_bgl_string1692za700za7za7_1744za7, "Illegal values", 14);
	      DEFINE_STRING(BGl_string1693z00zz__paramz00,
		BgL_bgl_string1693za700za7za7_1745za7, "Illegal list", 12);
	      DEFINE_STRING(BGl_string1694z00zz__paramz00,
		BgL_bgl_string1694za700za7za7_1746za7, "&bigloo-library-path-set!", 25);
	      DEFINE_STRING(BGl_string1695z00zz__paramz00,
		BgL_bgl_string1695za700za7za7_1747za7,
		"&bigloo-dns-cache-validity-timeout-set!", 39);
	      DEFINE_STRING(BGl_string1696z00zz__paramz00,
		BgL_bgl_string1696za700za7za7_1748za7, "__param", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2libraryzd2pathzd2setz12zd2envz12zz__paramz00,
		BgL_bgl_za762biglooza7d2libr1749z00,
		BGl_z62bigloozd2libraryzd2pathzd2setz12za2zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2tracezd2stackzd2depthzd2envz00zz__paramz00,
		BgL_bgl_za762biglooza7d2trac1750z00,
		BGl_z62bigloozd2tracezd2stackzd2depthzb0zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2warningzd2setz12zd2envzc0zz__paramz00,
		BgL_bgl_za762biglooza7d2warn1751z00,
		BGl_z62bigloozd2warningzd2setz12z70zz__paramz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2debugzd2envz00zz__paramz00,
		BgL_bgl_za762biglooza7d2debu1752z00, BGl_z62bigloozd2debugzb0zz__paramz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12zd2envzc0zz__paramz00,
		BgL_bgl_za762biglooza7d2modu1753z00,
		BGl_z62bigloozd2modulezd2extensionzd2handlerzd2setz12z70zz__paramz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2initializa7edz12zd2envzb5zz__paramz00,
		BgL_bgl_za762biglooza7d2init1754z00,
		BGl_z62bigloozd2initializa7edz12z05zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2loadzd2readerzd2envzd2zz__paramz00,
		BgL_bgl_za762biglooza7d2load1755z00,
		BGl_z62bigloozd2loadzd2readerz62zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2debugzd2modulezd2envzd2zz__paramz00,
		BgL_bgl_za762biglooza7d2debu1756z00,
		BGl_z62bigloozd2debugzd2modulez62zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2tracezd2setz12zd2envzc0zz__paramz00,
		BgL_bgl_za762biglooza7d2trac1757z00,
		BGl_z62bigloozd2tracezd2setz12z70zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2strictzd2r5rszd2stringszd2envz00zz__paramz00,
		BgL_bgl_za762biglooza7d2stri1758z00,
		BGl_z62bigloozd2strictzd2r5rszd2stringszb0zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2tracezd2colorzd2envzd2zz__paramz00,
		BgL_bgl_za762biglooza7d2trac1759z00,
		BGl_z62bigloozd2tracezd2colorz62zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2evalzd2strictzd2modulezd2setz12zd2envzc0zz__paramz00,
		BgL_bgl_za762biglooza7d2eval1760z00,
		BGl_z62bigloozd2evalzd2strictzd2modulezd2setz12z70zz__paramz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2compilerzd2debugzd2envzd2zz__paramz00,
		BgL_bgl_za762biglooza7d2comp1761z00,
		BGl_z62bigloozd2compilerzd2debugz62zz__paramz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2tracezd2stackzd2depthzd2setz12zd2envzc0zz__paramz00,
		BgL_bgl_za762biglooza7d2trac1762z00,
		BGl_z62bigloozd2tracezd2stackzd2depthzd2setz12z70zz__paramz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2loadzd2readerzd2setz12zd2envz12zz__paramz00,
		BgL_bgl_za762biglooza7d2load1763z00,
		BGl_z62bigloozd2loadzd2readerzd2setz12za2zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2envzd2zz__paramz00,
		BgL_bgl_za762biglooza7d2dnsza71764za7,
		BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutz62zz__paramz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2warningzd2envz00zz__paramz00,
		BgL_bgl_za762biglooza7d2warn1765z00, BGl_z62bigloozd2warningzb0zz__paramz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2debugzd2setz12zd2envzc0zz__paramz00,
		BgL_bgl_za762biglooza7d2debu1766z00,
		BGl_z62bigloozd2debugzd2setz12z70zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2casezd2sensitivezd2setz12zd2envz12zz__paramz00,
		BgL_bgl_za762biglooza7d2case1767z00,
		BGl_z62bigloozd2casezd2sensitivezd2setz12za2zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2debugzd2modulezd2setz12zd2envz12zz__paramz00,
		BgL_bgl_za762biglooza7d2debu1768z00,
		BGl_z62bigloozd2debugzd2modulezd2setz12za2zz__paramz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bigloozd2libraryzd2pathzd2envzd2zz__paramz00,
		BgL_bgl_za762biglooza7d2libr1769z00,
		BGl_z62bigloozd2libraryzd2pathz62zz__paramz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1670z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_symbol1674z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_za2parameterzd2mutexza2zd2zz__paramz00));
		     ADD_ROOT((void *) (&BGl_symbol1682z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_symbol1684z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_symbol1690z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2profileza2zd2zz__paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2warningza2zd2zz__paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2traceza2zd2zz__paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2debugza2zd2zz__paramz00));
		     ADD_ROOT((void *) (&BGl_list1681z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00));
		   
			 ADD_ROOT((void *) (&BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_symbol1652z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_symbol1654z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_symbol1657z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_symbol1663z00zz__paramz00));
		     ADD_ROOT((void *) (&BGl_symbol1666z00zz__paramz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long
		BgL_checksumz00_1895, char *BgL_fromz00_1896)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__paramz00))
				{
					BGl_requirezd2initializa7ationz75zz__paramz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__paramz00();
					BGl_cnstzd2initzd2zz__paramz00();
					BGl_importedzd2moduleszd2initz00zz__paramz00();
					return BGl_toplevelzd2initzd2zz__paramz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__paramz00()
	{
		{	/* Llib/param.scm 15 */
			BGl_symbol1652z00zz__paramz00 =
				bstring_to_symbol(BGl_string1653z00zz__paramz00);
			BGl_symbol1654z00zz__paramz00 =
				bstring_to_symbol(BGl_string1655z00zz__paramz00);
			BGl_symbol1657z00zz__paramz00 =
				bstring_to_symbol(BGl_string1658z00zz__paramz00);
			BGl_symbol1663z00zz__paramz00 =
				bstring_to_symbol(BGl_string1664z00zz__paramz00);
			BGl_symbol1666z00zz__paramz00 =
				bstring_to_symbol(BGl_string1667z00zz__paramz00);
			BGl_symbol1670z00zz__paramz00 =
				bstring_to_symbol(BGl_string1671z00zz__paramz00);
			BGl_symbol1674z00zz__paramz00 =
				bstring_to_symbol(BGl_string1675z00zz__paramz00);
			BGl_symbol1682z00zz__paramz00 =
				bstring_to_symbol(BGl_string1683z00zz__paramz00);
			BGl_symbol1684z00zz__paramz00 =
				bstring_to_symbol(BGl_string1685z00zz__paramz00);
			BGl_list1681z00zz__paramz00 =
				MAKE_YOUNG_PAIR(BGl_symbol1652z00zz__paramz00,
				MAKE_YOUNG_PAIR(BGl_symbol1682z00zz__paramz00,
					MAKE_YOUNG_PAIR(BGl_symbol1684z00zz__paramz00, BNIL)));
			return (BGl_symbol1690z00zz__paramz00 =
				bstring_to_symbol(BGl_string1691z00zz__paramz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__paramz00()
	{
		{	/* Llib/param.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__paramz00()
	{
		{	/* Llib/param.scm 15 */
			{	/* Llib/param.scm 110 */
				obj_t BgL_res1548z00_1502;

				BgL_res1548z00_1502 = bgl_make_mutex(BGl_string1649z00zz__paramz00);
				BGl_za2parameterzd2mutexza2zd2zz__paramz00 = BgL_res1548z00_1502;
			}
			BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00 = ((bool_t) 0);
			BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 = BINT(((long) 0));
			BGl_za2bigloozd2debugza2zd2zz__paramz00 = BINT(((long) 0));
			BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 = BINT(((long) 0));
			BGl_za2bigloozd2warningza2zd2zz__paramz00 = BINT(((long) 1));
			BGl_za2bigloozd2profileza2zd2zz__paramz00 = BINT(((long) 0));
			BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00 = ((bool_t) 1);
			{	/* Llib/param.scm 206 */
				obj_t BgL_envzd2valuezd2_1037;

				BgL_envzd2valuezd2_1037 =
					BGl_getenvz00zz__osz00(BGl_string1650z00zz__paramz00);
				if (STRINGP(BgL_envzd2valuezd2_1037))
					{	/* Llib/param.scm 208 */
						obj_t BgL_l1069z00_1039;

						BgL_l1069z00_1039 =
							BGl_stringzd2splitzd2zz__r4_strings_6_7z00
							(BgL_envzd2valuezd2_1037, BNIL);
						if (NULLP(BgL_l1069z00_1039))
							{	/* Llib/param.scm 208 */
								BGl_za2bigloozd2traceza2zd2zz__paramz00 = BNIL;
							}
						else
							{	/* Llib/param.scm 208 */
								obj_t BgL_head1071z00_1041;

								{	/* Llib/param.scm 208 */
									obj_t BgL_arg1170z00_1053;

									{	/* Llib/param.scm 208 */
										obj_t BgL_arg1172z00_1054;

										BgL_arg1172z00_1054 = CAR(BgL_l1069z00_1039);
										{	/* Llib/param.scm 208 */
											obj_t BgL_res1551z00_1507;

											BgL_res1551z00_1507 =
												bstring_to_symbol(((obj_t) BgL_arg1172z00_1054));
											BgL_arg1170z00_1053 = BgL_res1551z00_1507;
										}
									}
									{	/* Llib/param.scm 208 */
										obj_t BgL_res1552z00_1508;

										BgL_res1552z00_1508 =
											MAKE_YOUNG_PAIR(BgL_arg1170z00_1053, BNIL);
										BgL_head1071z00_1041 = BgL_res1552z00_1508;
									}
								}
								{	/* Llib/param.scm 208 */
									obj_t BgL_g1074z00_1042;

									BgL_g1074z00_1042 = CDR(BgL_l1069z00_1039);
									{
										obj_t BgL_l1069z00_1535;
										obj_t BgL_tail1072z00_1536;

										BgL_l1069z00_1535 = BgL_g1074z00_1042;
										BgL_tail1072z00_1536 = BgL_head1071z00_1041;
									BgL_zc3z04anonymousza31164ze3z87_1534:
										if (NULLP(BgL_l1069z00_1535))
											{	/* Llib/param.scm 208 */
												BGl_za2bigloozd2traceza2zd2zz__paramz00 =
													BgL_head1071z00_1041;
											}
										else
											{	/* Llib/param.scm 208 */
												obj_t BgL_newtail1073z00_1543;

												{	/* Llib/param.scm 208 */
													obj_t BgL_arg1167z00_1544;

													{	/* Llib/param.scm 208 */
														obj_t BgL_arg1169z00_1545;

														BgL_arg1169z00_1545 =
															CAR(((obj_t) BgL_l1069z00_1535));
														{	/* Llib/param.scm 208 */
															obj_t BgL_res1560z00_1550;

															BgL_res1560z00_1550 =
																bstring_to_symbol(
																((obj_t) BgL_arg1169z00_1545));
															BgL_arg1167z00_1544 = BgL_res1560z00_1550;
														}
													}
													{	/* Llib/param.scm 208 */
														obj_t BgL_res1561z00_1551;

														BgL_res1561z00_1551 =
															MAKE_YOUNG_PAIR(BgL_arg1167z00_1544, BNIL);
														BgL_newtail1073z00_1543 = BgL_res1561z00_1551;
													}
												}
												SET_CDR(BgL_tail1072z00_1536, BgL_newtail1073z00_1543);
												{	/* Llib/param.scm 208 */
													obj_t BgL_arg1166z00_1546;

													BgL_arg1166z00_1546 =
														CDR(((obj_t) BgL_l1069z00_1535));
													{
														obj_t BgL_tail1072z00_1946;
														obj_t BgL_l1069z00_1945;

														BgL_l1069z00_1945 = BgL_arg1166z00_1546;
														BgL_tail1072z00_1946 = BgL_newtail1073z00_1543;
														BgL_tail1072z00_1536 = BgL_tail1072z00_1946;
														BgL_l1069z00_1535 = BgL_l1069z00_1945;
														goto BgL_zc3z04anonymousza31164ze3z87_1534;
													}
												}
											}
									}
								}
							}
					}
				else
					{	/* Llib/param.scm 207 */
						BGl_za2bigloozd2traceza2zd2zz__paramz00 = BNIL;
					}
			}
			{	/* Llib/param.scm 217 */
				obj_t BgL_envzd2valuezd2_1056;

				BgL_envzd2valuezd2_1056 =
					BGl_getenvz00zz__osz00(BGl_string1651z00zz__paramz00);
				if (STRINGP(BgL_envzd2valuezd2_1056))
					{	/* Llib/param.scm 219 */
						char *BgL_tmpz00_1950;

						BgL_tmpz00_1950 = BSTRING_TO_STRING(BgL_envzd2valuezd2_1056);
						BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 =
							BGL_STRTOL(BgL_tmpz00_1950, ((long) 0), ((long) 10));
					}
				else
					{	/* Llib/param.scm 218 */
						BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 =
							((long) 10);
			}}
			BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 =
				BGl_symbol1652z00zz__paramz00;
			BGl_za2bigloozd2initializa7edpza2z75zz__paramz00 = ((bool_t) 0);
			BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 = BFALSE;
			BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 = BFALSE;
			BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 = BFALSE;
			BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00 = ((bool_t) 1);
			{	/* Llib/param.scm 281 */
				obj_t BgL_arg1175z00_1058;

				BgL_arg1175z00_1058 =
					BGl_bigloozd2configzd2zz__configurez00(BGl_symbol1654z00zz__paramz00);
				{	/* Llib/param.scm 281 */
					obj_t BgL_list1176z00_1059;

					{	/* Llib/param.scm 281 */
						obj_t BgL_arg1177z00_1060;

						BgL_arg1177z00_1060 = MAKE_YOUNG_PAIR(BgL_arg1175z00_1058, BNIL);
						BgL_list1176z00_1059 =
							MAKE_YOUNG_PAIR(BGl_string1656z00zz__paramz00,
							BgL_arg1177z00_1060);
					}
					BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 =
						BgL_list1176z00_1059;
			}}
			BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00 = ((bool_t) 1);
			return (BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00
				= ((long) 20), BUNSPEC);
		}

	}



/* bigloo-strict-r5rs-strings */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00()
	{
		{	/* Llib/param.scm 135 */
			return BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00;
		}

	}



/* &bigloo-strict-r5rs-strings */
	obj_t BGl_z62bigloozd2strictzd2r5rszd2stringszb0zz__paramz00(obj_t
		BgL_envz00_1822)
	{
		{	/* Llib/param.scm 135 */
			return BBOOL(BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00());
		}

	}



/* bigloo-strict-r5rs-strings-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(bool_t
		BgL_vz00_3)
	{
		{	/* Llib/param.scm 135 */
			BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			{	/* Llib/param.scm 135 */
				obj_t BgL_tmp1775z00_1958;

				BgL_tmp1775z00_1958 =
					(BGl_za2bigloozd2strictzd2r5rszd2stringsza2zd2zz__paramz00 =
					BgL_vz00_3, BUNSPEC);
				BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BgL_tmp1775z00_1958;
			}
			return BBOOL(BgL_vz00_3);
		}

	}



/* &bigloo-strict-r5rs-strings-set! */
	obj_t BGl_z62bigloozd2strictzd2r5rszd2stringszd2setz12z70zz__paramz00(obj_t
		BgL_envz00_1823, obj_t BgL_vz00_1824)
	{
		{	/* Llib/param.scm 135 */
			return
				BGl_bigloozd2strictzd2r5rszd2stringszd2setz12z12zz__paramz00(CBOOL
				(BgL_vz00_1824));
		}

	}



/* bigloo-compiler-debug */
	BGL_EXPORTED_DEF int BGl_bigloozd2compilerzd2debugz00zz__paramz00()
	{
		{	/* Llib/param.scm 142 */
			return CINT(BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00);
		}

	}



/* &bigloo-compiler-debug */
	obj_t BGl_z62bigloozd2compilerzd2debugz62zz__paramz00(obj_t BgL_envz00_1825)
	{
		{	/* Llib/param.scm 142 */
			return BINT(BGl_bigloozd2compilerzd2debugz00zz__paramz00());
		}

	}



/* bigloo-compiler-debug-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00(int BgL_vz00_4)
	{
		{	/* Llib/param.scm 142 */
			{	/* Llib/param.scm 142 */
				obj_t BgL_top1777z00_1968;

				BgL_top1777z00_1968 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top1777z00_1968,
					BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BUNSPEC;
				{	/* Llib/param.scm 142 */
					obj_t BgL_tmp1776z00_1967;

					if (((long) (BgL_vz00_4) < ((long) 0)))
						{	/* Llib/param.scm 145 */
							BgL_tmp1776z00_1967 =
								(BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 =
								BGl_errorz00zz__errorz00(BGl_symbol1657z00zz__paramz00,
									BGl_string1659z00zz__paramz00, BINT(BgL_vz00_4)), BUNSPEC);
						}
					else
						{	/* Llib/param.scm 145 */
							BgL_tmp1776z00_1967 =
								(BGl_za2bigloozd2compilerzd2debugza2z00zz__paramz00 =
								BINT(BgL_vz00_4), BUNSPEC);
						}
					BGL_EXITD_POP_PROTECT(BgL_top1777z00_1968);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
					BgL_tmp1776z00_1967;
				}
			}
			return BINT(BgL_vz00_4);
		}

	}



/* &bigloo-compiler-debug-set! */
	obj_t BGl_z62bigloozd2compilerzd2debugzd2setz12za2zz__paramz00(obj_t
		BgL_envz00_1826, obj_t BgL_vz00_1827)
	{
		{	/* Llib/param.scm 142 */
			{	/* Llib/param.scm 142 */
				int BgL_auxz00_1981;

				{	/* Llib/param.scm 142 */
					obj_t BgL_tmpz00_1982;

					if (INTEGERP(BgL_vz00_1827))
						{	/* Llib/param.scm 142 */
							BgL_tmpz00_1982 = BgL_vz00_1827;
						}
					else
						{
							obj_t BgL_auxz00_1985;

							BgL_auxz00_1985 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1660z00zz__paramz00,
								BINT(((long) 4860)), BGl_string1661z00zz__paramz00,
								BGl_string1662z00zz__paramz00, BgL_vz00_1827);
							FAILURE(BgL_auxz00_1985, BFALSE, BFALSE);
						}
					BgL_auxz00_1981 = CINT(BgL_tmpz00_1982);
				}
				return
					BGl_bigloozd2compilerzd2debugzd2setz12zc0zz__paramz00
					(BgL_auxz00_1981);
			}
		}

	}



/* bigloo-debug */
	BGL_EXPORTED_DEF int bgl_debug()
	{
		{	/* Llib/param.scm 154 */
			return CINT(BGl_za2bigloozd2debugza2zd2zz__paramz00);
		}

	}



/* &bigloo-debug */
	obj_t BGl_z62bigloozd2debugzb0zz__paramz00(obj_t BgL_envz00_1828)
	{
		{	/* Llib/param.scm 154 */
			return BINT(bgl_debug());
		}

	}



/* bigloo-debug-set! */
	BGL_EXPORTED_DEF obj_t bgl_debug_set(int BgL_vz00_5)
	{
		{	/* Llib/param.scm 154 */
			{	/* Llib/param.scm 154 */
				obj_t BgL_top1781z00_1995;

				BgL_top1781z00_1995 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top1781z00_1995,
					BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BUNSPEC;
				{	/* Llib/param.scm 154 */
					obj_t BgL_tmp1780z00_1994;

					if (((long) (BgL_vz00_5) < ((long) 0)))
						{	/* Llib/param.scm 157 */
							BgL_tmp1780z00_1994 = (BGl_za2bigloozd2debugza2zd2zz__paramz00 =
								BGl_errorz00zz__errorz00(BGl_symbol1663z00zz__paramz00,
									BGl_string1659z00zz__paramz00, BINT(BgL_vz00_5)), BUNSPEC);
						}
					else
						{	/* Llib/param.scm 157 */
							BgL_tmp1780z00_1994 = (BGl_za2bigloozd2debugza2zd2zz__paramz00 =
								BINT(BgL_vz00_5), BUNSPEC);
						}
					BGL_EXITD_POP_PROTECT(BgL_top1781z00_1995);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
					BgL_tmp1780z00_1994;
				}
			}
			return BINT(BgL_vz00_5);
		}

	}



/* &bigloo-debug-set! */
	obj_t BGl_z62bigloozd2debugzd2setz12z70zz__paramz00(obj_t BgL_envz00_1829,
		obj_t BgL_vz00_1830)
	{
		{	/* Llib/param.scm 154 */
			{	/* Llib/param.scm 154 */
				int BgL_auxz00_2008;

				{	/* Llib/param.scm 154 */
					obj_t BgL_tmpz00_2009;

					if (INTEGERP(BgL_vz00_1830))
						{	/* Llib/param.scm 154 */
							BgL_tmpz00_2009 = BgL_vz00_1830;
						}
					else
						{
							obj_t BgL_auxz00_2012;

							BgL_auxz00_2012 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1660z00zz__paramz00,
								BINT(((long) 5413)), BGl_string1665z00zz__paramz00,
								BGl_string1662z00zz__paramz00, BgL_vz00_1830);
							FAILURE(BgL_auxz00_2012, BFALSE, BFALSE);
						}
					BgL_auxz00_2008 = CINT(BgL_tmpz00_2009);
				}
				return bgl_debug_set(BgL_auxz00_2008);
			}
		}

	}



/* bigloo-debug-module */
	BGL_EXPORTED_DEF int BGl_bigloozd2debugzd2modulez00zz__paramz00()
	{
		{	/* Llib/param.scm 166 */
			return CINT(BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00);
		}

	}



/* &bigloo-debug-module */
	obj_t BGl_z62bigloozd2debugzd2modulez62zz__paramz00(obj_t BgL_envz00_1831)
	{
		{	/* Llib/param.scm 166 */
			return BINT(BGl_bigloozd2debugzd2modulez00zz__paramz00());
		}

	}



/* bigloo-debug-module-set! */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(int
		BgL_vz00_6)
	{
		{	/* Llib/param.scm 166 */
			{	/* Llib/param.scm 166 */
				obj_t BgL_top1785z00_2022;

				BgL_top1785z00_2022 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top1785z00_2022,
					BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BUNSPEC;
				{	/* Llib/param.scm 166 */
					obj_t BgL_tmp1784z00_2021;

					if (((long) (BgL_vz00_6) < ((long) 0)))
						{	/* Llib/param.scm 169 */
							BgL_tmp1784z00_2021 =
								(BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 =
								BGl_errorz00zz__errorz00(BGl_symbol1666z00zz__paramz00,
									BGl_string1668z00zz__paramz00, BINT(BgL_vz00_6)), BUNSPEC);
						}
					else
						{	/* Llib/param.scm 169 */
							BgL_tmp1784z00_2021 =
								(BGl_za2bigloozd2debugzd2moduleza2z00zz__paramz00 =
								BINT(BgL_vz00_6), BUNSPEC);
						}
					BGL_EXITD_POP_PROTECT(BgL_top1785z00_2022);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
					BgL_tmp1784z00_2021;
				}
			}
			return BINT(BgL_vz00_6);
		}

	}



/* &bigloo-debug-module-set! */
	obj_t BGl_z62bigloozd2debugzd2modulezd2setz12za2zz__paramz00(obj_t
		BgL_envz00_1832, obj_t BgL_vz00_1833)
	{
		{	/* Llib/param.scm 166 */
			{	/* Llib/param.scm 166 */
				int BgL_auxz00_2035;

				{	/* Llib/param.scm 166 */
					obj_t BgL_tmpz00_2036;

					if (INTEGERP(BgL_vz00_1833))
						{	/* Llib/param.scm 166 */
							BgL_tmpz00_2036 = BgL_vz00_1833;
						}
					else
						{
							obj_t BgL_auxz00_2039;

							BgL_auxz00_2039 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1660z00zz__paramz00,
								BINT(((long) 5945)), BGl_string1669z00zz__paramz00,
								BGl_string1662z00zz__paramz00, BgL_vz00_1833);
							FAILURE(BgL_auxz00_2039, BFALSE, BFALSE);
						}
					BgL_auxz00_2035 = CINT(BgL_tmpz00_2036);
				}
				return
					BGl_bigloozd2debugzd2modulezd2setz12zc0zz__paramz00(BgL_auxz00_2035);
			}
		}

	}



/* bigloo-warning */
	BGL_EXPORTED_DEF int BGl_bigloozd2warningzd2zz__paramz00()
	{
		{	/* Llib/param.scm 178 */
			return CINT(BGl_za2bigloozd2warningza2zd2zz__paramz00);
		}

	}



/* &bigloo-warning */
	obj_t BGl_z62bigloozd2warningzb0zz__paramz00(obj_t BgL_envz00_1834)
	{
		{	/* Llib/param.scm 178 */
			return BINT(BGl_bigloozd2warningzd2zz__paramz00());
		}

	}



/* bigloo-warning-set! */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int
		BgL_vz00_7)
	{
		{	/* Llib/param.scm 178 */
			{	/* Llib/param.scm 178 */
				obj_t BgL_top1789z00_2049;

				BgL_top1789z00_2049 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top1789z00_2049,
					BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BUNSPEC;
				{	/* Llib/param.scm 178 */
					obj_t BgL_tmp1788z00_2048;

					if (((long) (BgL_vz00_7) < ((long) 0)))
						{	/* Llib/param.scm 181 */
							BgL_tmp1788z00_2048 = (BGl_za2bigloozd2warningza2zd2zz__paramz00 =
								BGl_errorz00zz__errorz00(BGl_symbol1670z00zz__paramz00,
									BGl_string1672z00zz__paramz00, BINT(BgL_vz00_7)), BUNSPEC);
						}
					else
						{	/* Llib/param.scm 181 */
							BgL_tmp1788z00_2048 = (BGl_za2bigloozd2warningza2zd2zz__paramz00 =
								BINT(BgL_vz00_7), BUNSPEC);
						}
					BGL_EXITD_POP_PROTECT(BgL_top1789z00_2049);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
					BgL_tmp1788z00_2048;
				}
			}
			return BINT(BgL_vz00_7);
		}

	}



/* &bigloo-warning-set! */
	obj_t BGl_z62bigloozd2warningzd2setz12z70zz__paramz00(obj_t BgL_envz00_1835,
		obj_t BgL_vz00_1836)
	{
		{	/* Llib/param.scm 178 */
			{	/* Llib/param.scm 178 */
				int BgL_auxz00_2062;

				{	/* Llib/param.scm 178 */
					obj_t BgL_tmpz00_2063;

					if (INTEGERP(BgL_vz00_1836))
						{	/* Llib/param.scm 178 */
							BgL_tmpz00_2063 = BgL_vz00_1836;
						}
					else
						{
							obj_t BgL_auxz00_2066;

							BgL_auxz00_2066 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1660z00zz__paramz00,
								BINT(((long) 6498)), BGl_string1673z00zz__paramz00,
								BGl_string1662z00zz__paramz00, BgL_vz00_1836);
							FAILURE(BgL_auxz00_2066, BFALSE, BFALSE);
						}
					BgL_auxz00_2062 = CINT(BgL_tmpz00_2063);
				}
				return BGl_bigloozd2warningzd2setz12z12zz__paramz00(BgL_auxz00_2062);
			}
		}

	}



/* bigloo-profile */
	BGL_EXPORTED_DEF int BGl_bigloozd2profilezd2zz__paramz00()
	{
		{	/* Llib/param.scm 190 */
			return CINT(BGl_za2bigloozd2profileza2zd2zz__paramz00);
		}

	}



/* &bigloo-profile */
	obj_t BGl_z62bigloozd2profilezb0zz__paramz00(obj_t BgL_envz00_1837)
	{
		{	/* Llib/param.scm 190 */
			return BINT(BGl_bigloozd2profilezd2zz__paramz00());
		}

	}



/* bigloo-profile-set! */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2profilezd2setz12z12zz__paramz00(int
		BgL_vz00_8)
	{
		{	/* Llib/param.scm 190 */
			{	/* Llib/param.scm 190 */
				obj_t BgL_top1793z00_2076;

				BgL_top1793z00_2076 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top1793z00_2076,
					BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BUNSPEC;
				{	/* Llib/param.scm 190 */
					obj_t BgL_tmp1792z00_2075;

					if (((long) (BgL_vz00_8) < ((long) 0)))
						{	/* Llib/param.scm 193 */
							BgL_tmp1792z00_2075 = (BGl_za2bigloozd2profileza2zd2zz__paramz00 =
								BGl_errorz00zz__errorz00(BGl_symbol1674z00zz__paramz00,
									BGl_string1676z00zz__paramz00, BINT(BgL_vz00_8)), BUNSPEC);
						}
					else
						{	/* Llib/param.scm 193 */
							BgL_tmp1792z00_2075 = (BGl_za2bigloozd2profileza2zd2zz__paramz00 =
								BINT(BgL_vz00_8), BUNSPEC);
						}
					BGL_EXITD_POP_PROTECT(BgL_top1793z00_2076);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
					BgL_tmp1792z00_2075;
				}
			}
			return BINT(BgL_vz00_8);
		}

	}



/* &bigloo-profile-set! */
	obj_t BGl_z62bigloozd2profilezd2setz12z70zz__paramz00(obj_t BgL_envz00_1838,
		obj_t BgL_vz00_1839)
	{
		{	/* Llib/param.scm 190 */
			{	/* Llib/param.scm 190 */
				int BgL_auxz00_2089;

				{	/* Llib/param.scm 190 */
					obj_t BgL_tmpz00_2090;

					if (INTEGERP(BgL_vz00_1839))
						{	/* Llib/param.scm 190 */
							BgL_tmpz00_2090 = BgL_vz00_1839;
						}
					else
						{
							obj_t BgL_auxz00_2093;

							BgL_auxz00_2093 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1660z00zz__paramz00,
								BINT(((long) 7036)), BGl_string1677z00zz__paramz00,
								BGl_string1662z00zz__paramz00, BgL_vz00_1839);
							FAILURE(BgL_auxz00_2093, BFALSE, BFALSE);
						}
					BgL_auxz00_2089 = CINT(BgL_tmpz00_2090);
				}
				return BGl_bigloozd2profilezd2setz12z12zz__paramz00(BgL_auxz00_2089);
			}
		}

	}



/* bigloo-trace-color */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2tracezd2colorz00zz__paramz00()
	{
		{	/* Llib/param.scm 200 */
			return BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00;
		}

	}



/* &bigloo-trace-color */
	obj_t BGl_z62bigloozd2tracezd2colorz62zz__paramz00(obj_t BgL_envz00_1840)
	{
		{	/* Llib/param.scm 200 */
			return BBOOL(BGl_bigloozd2tracezd2colorz00zz__paramz00());
		}

	}



/* bigloo-trace-color-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(bool_t BgL_vz00_9)
	{
		{	/* Llib/param.scm 200 */
			BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			{	/* Llib/param.scm 200 */
				obj_t BgL_tmp1796z00_2101;

				BgL_tmp1796z00_2101 = (BGl_za2bigloozd2tracezd2colorza2z00zz__paramz00 =
					BgL_vz00_9, BUNSPEC);
				BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BgL_tmp1796z00_2101;
			}
			return BBOOL(BgL_vz00_9);
		}

	}



/* &bigloo-trace-color-set! */
	obj_t BGl_z62bigloozd2tracezd2colorzd2setz12za2zz__paramz00(obj_t
		BgL_envz00_1841, obj_t BgL_vz00_1842)
	{
		{	/* Llib/param.scm 200 */
			return
				BGl_bigloozd2tracezd2colorzd2setz12zc0zz__paramz00(CBOOL
				(BgL_vz00_1842));
		}

	}



/* bigloo-trace */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2tracezd2zz__paramz00()
	{
		{	/* Llib/param.scm 205 */
			return BGl_za2bigloozd2traceza2zd2zz__paramz00;
		}

	}



/* &bigloo-trace */
	obj_t BGl_z62bigloozd2tracezb0zz__paramz00(obj_t BgL_envz00_1843)
	{
		{	/* Llib/param.scm 205 */
			return BGl_bigloozd2tracezd2zz__paramz00();
		}

	}



/* bigloo-trace-set! */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2tracezd2setz12z12zz__paramz00(obj_t
		BgL_vz00_10)
	{
		{	/* Llib/param.scm 205 */
			BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			{	/* Llib/param.scm 205 */
				obj_t BgL_tmp1797z00_2108;

				BgL_tmp1797z00_2108 = (BGl_za2bigloozd2traceza2zd2zz__paramz00 =
					BgL_vz00_10, BUNSPEC);
				BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BgL_tmp1797z00_2108;
			}
			return BgL_vz00_10;
		}

	}



/* &bigloo-trace-set! */
	obj_t BGl_z62bigloozd2tracezd2setz12z70zz__paramz00(obj_t BgL_envz00_1844,
		obj_t BgL_vz00_1845)
	{
		{	/* Llib/param.scm 205 */
			{	/* Llib/param.scm 205 */
				obj_t BgL_auxz00_2111;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_vz00_1845))
					{	/* Llib/param.scm 205 */
						BgL_auxz00_2111 = BgL_vz00_1845;
					}
				else
					{
						obj_t BgL_auxz00_2114;

						BgL_auxz00_2114 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1660z00zz__paramz00,
							BINT(((long) 7690)), BGl_string1678z00zz__paramz00,
							BGl_string1679z00zz__paramz00, BgL_vz00_1845);
						FAILURE(BgL_auxz00_2114, BFALSE, BFALSE);
					}
				return BGl_bigloozd2tracezd2setz12z12zz__paramz00(BgL_auxz00_2111);
			}
		}

	}



/* bigloo-trace-stack-depth */
	BGL_EXPORTED_DEF int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00()
	{
		{	/* Llib/param.scm 216 */
			return (int) (BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00);
		}

	}



/* &bigloo-trace-stack-depth */
	obj_t BGl_z62bigloozd2tracezd2stackzd2depthzb0zz__paramz00(obj_t
		BgL_envz00_1846)
	{
		{	/* Llib/param.scm 216 */
			return BINT(BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00());
		}

	}



/* bigloo-trace-stack-depth-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(int BgL_vz00_11)
	{
		{	/* Llib/param.scm 216 */
			BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			{	/* Llib/param.scm 216 */
				obj_t BgL_tmp1799z00_2122;

				BgL_tmp1799z00_2122 =
					(BGl_za2bigloozd2tracezd2stackzd2depthza2zd2zz__paramz00 =
					(long) (BgL_vz00_11), BUNSPEC);
				BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BgL_tmp1799z00_2122;
			}
			return BINT(BgL_vz00_11);
		}

	}



/* &bigloo-trace-stack-depth-set! */
	obj_t BGl_z62bigloozd2tracezd2stackzd2depthzd2setz12z70zz__paramz00(obj_t
		BgL_envz00_1847, obj_t BgL_vz00_1848)
	{
		{	/* Llib/param.scm 216 */
			{	/* Llib/param.scm 216 */
				int BgL_auxz00_2127;

				{	/* Llib/param.scm 216 */
					obj_t BgL_tmpz00_2128;

					if (INTEGERP(BgL_vz00_1848))
						{	/* Llib/param.scm 216 */
							BgL_tmpz00_2128 = BgL_vz00_1848;
						}
					else
						{
							obj_t BgL_auxz00_2131;

							BgL_auxz00_2131 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1660z00zz__paramz00,
								BINT(((long) 8226)), BGl_string1680z00zz__paramz00,
								BGl_string1662z00zz__paramz00, BgL_vz00_1848);
							FAILURE(BgL_auxz00_2131, BFALSE, BFALSE);
						}
					BgL_auxz00_2127 = CINT(BgL_tmpz00_2128);
				}
				return
					BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00
					(BgL_auxz00_2127);
			}
		}

	}



/* bigloo-case-sensitive */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2casezd2sensitivez00zz__paramz00()
	{
		{	/* Llib/param.scm 231 */
			return BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00;
		}

	}



/* &bigloo-case-sensitive */
	obj_t BGl_z62bigloozd2casezd2sensitivez62zz__paramz00(obj_t BgL_envz00_1849)
	{
		{	/* Llib/param.scm 231 */
			return BGl_bigloozd2casezd2sensitivez00zz__paramz00();
		}

	}



/* bigloo-case-sensitive-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00(obj_t BgL_vz00_12)
	{
		{	/* Llib/param.scm 231 */
			{	/* Llib/param.scm 231 */
				obj_t BgL_top1802z00_2139;

				BgL_top1802z00_2139 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top1802z00_2139,
					BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BUNSPEC;
				{	/* Llib/param.scm 231 */
					obj_t BgL_tmp1801z00_2138;

					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_vz00_12,
								BGl_list1681z00zz__paramz00)))
						{	/* Llib/param.scm 235 */
							BgL_tmp1801z00_2138 =
								(BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 =
								BgL_vz00_12, BUNSPEC);
						}
					else
						{	/* Llib/param.scm 235 */
							BgL_tmp1801z00_2138 =
								(BGl_za2bigloozd2casezd2sensitiveza2z00zz__paramz00 =
								BGl_errorz00zz__errorz00(BGl_string1686z00zz__paramz00,
									BGl_string1687z00zz__paramz00, BgL_vz00_12), BUNSPEC);
						}
					BGL_EXITD_POP_PROTECT(BgL_top1802z00_2139);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
					BgL_tmp1801z00_2138;
				}
			}
			return BgL_vz00_12;
		}

	}



/* &bigloo-case-sensitive-set! */
	obj_t BGl_z62bigloozd2casezd2sensitivezd2setz12za2zz__paramz00(obj_t
		BgL_envz00_1850, obj_t BgL_vz00_1851)
	{
		{	/* Llib/param.scm 231 */
			{	/* Llib/param.scm 231 */
				obj_t BgL_auxz00_2149;

				if (SYMBOLP(BgL_vz00_1851))
					{	/* Llib/param.scm 231 */
						BgL_auxz00_2149 = BgL_vz00_1851;
					}
				else
					{
						obj_t BgL_auxz00_2152;

						BgL_auxz00_2152 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1660z00zz__paramz00,
							BINT(((long) 9056)), BGl_string1688z00zz__paramz00,
							BGl_string1689z00zz__paramz00, BgL_vz00_1851);
						FAILURE(BgL_auxz00_2152, BFALSE, BFALSE);
					}
				return
					BGl_bigloozd2casezd2sensitivezd2setz12zc0zz__paramz00
					(BgL_auxz00_2149);
			}
		}

	}



/* bigloo-initialized! */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2initializa7edz12z67zz__paramz00()
	{
		{	/* Llib/param.scm 248 */
			return (BGl_za2bigloozd2initializa7edpza2z75zz__paramz00 =
				((bool_t) 1), BUNSPEC);
		}

	}



/* &bigloo-initialized! */
	obj_t BGl_z62bigloozd2initializa7edz12z05zz__paramz00(obj_t BgL_envz00_1852)
	{
		{	/* Llib/param.scm 248 */
			return BGl_bigloozd2initializa7edz12z67zz__paramz00();
		}

	}



/* bigloo-initialized? */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2initializa7edzf3z86zz__paramz00()
	{
		{	/* Llib/param.scm 254 */
			return BGl_za2bigloozd2initializa7edpza2z75zz__paramz00;
		}

	}



/* &bigloo-initialized? */
	obj_t BGl_z62bigloozd2initializa7edzf3ze4zz__paramz00(obj_t BgL_envz00_1853)
	{
		{	/* Llib/param.scm 254 */
			return BBOOL(BGl_bigloozd2initializa7edzf3z86zz__paramz00());
		}

	}



/* bigloo-load-reader */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2readerz00zz__paramz00()
	{
		{	/* Llib/param.scm 260 */
			return BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00;
		}

	}



/* &bigloo-load-reader */
	obj_t BGl_z62bigloozd2loadzd2readerz62zz__paramz00(obj_t BgL_envz00_1854)
	{
		{	/* Llib/param.scm 260 */
			return BGl_bigloozd2loadzd2readerz00zz__paramz00();
		}

	}



/* bigloo-load-reader-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(obj_t BgL_vz00_13)
	{
		{	/* Llib/param.scm 260 */
			BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			{	/* Llib/param.scm 260 */
				obj_t BgL_tmp1805z00_2161;

				BgL_tmp1805z00_2161 = (BGl_za2bigloozd2loadzd2readerza2z00zz__paramz00 =
					BgL_vz00_13, BUNSPEC);
				BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BgL_tmp1805z00_2161;
			}
			return BgL_vz00_13;
		}

	}



/* &bigloo-load-reader-set! */
	obj_t BGl_z62bigloozd2loadzd2readerzd2setz12za2zz__paramz00(obj_t
		BgL_envz00_1855, obj_t BgL_vz00_1856)
	{
		{	/* Llib/param.scm 260 */
			return BGl_bigloozd2loadzd2readerzd2setz12zc0zz__paramz00(BgL_vz00_1856);
		}

	}



/* bigloo-load-module */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2loadzd2modulez00zz__paramz00()
	{
		{	/* Llib/param.scm 265 */
			return BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00;
		}

	}



/* &bigloo-load-module */
	obj_t BGl_z62bigloozd2loadzd2modulez62zz__paramz00(obj_t BgL_envz00_1857)
	{
		{	/* Llib/param.scm 265 */
			return BGl_bigloozd2loadzd2modulez00zz__paramz00();
		}

	}



/* bigloo-load-module-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(obj_t BgL_vz00_14)
	{
		{	/* Llib/param.scm 265 */
			BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			{	/* Llib/param.scm 265 */
				obj_t BgL_tmp1806z00_2166;

				BgL_tmp1806z00_2166 = (BGl_za2bigloozd2loadzd2moduleza2z00zz__paramz00 =
					BgL_vz00_14, BUNSPEC);
				BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BgL_tmp1806z00_2166;
			}
			return BgL_vz00_14;
		}

	}



/* &bigloo-load-module-set! */
	obj_t BGl_z62bigloozd2loadzd2modulezd2setz12za2zz__paramz00(obj_t
		BgL_envz00_1858, obj_t BgL_vz00_1859)
	{
		{	/* Llib/param.scm 265 */
			return BGl_bigloozd2loadzd2modulezd2setz12zc0zz__paramz00(BgL_vz00_1859);
		}

	}



/* bigloo-module-extension-handler */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00()
	{
		{	/* Llib/param.scm 270 */
			return BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00;
		}

	}



/* &bigloo-module-extension-handler */
	obj_t BGl_z62bigloozd2modulezd2extensionzd2handlerzb0zz__paramz00(obj_t
		BgL_envz00_1860)
	{
		{	/* Llib/param.scm 270 */
			return BGl_bigloozd2modulezd2extensionzd2handlerzd2zz__paramz00();
		}

	}



/* bigloo-module-extension-handler-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00(obj_t
		BgL_vz00_15)
	{
		{	/* Llib/param.scm 270 */
			BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			{	/* Llib/param.scm 270 */
				obj_t BgL_tmp1807z00_2171;

				BgL_tmp1807z00_2171 =
					(BGl_za2bigloozd2modulezd2extensionzd2handlerza2zd2zz__paramz00 =
					BgL_vz00_15, BUNSPEC);
				BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BgL_tmp1807z00_2171;
			}
			return BgL_vz00_15;
		}

	}



/* &bigloo-module-extension-handler-set! */
	obj_t
		BGl_z62bigloozd2modulezd2extensionzd2handlerzd2setz12z70zz__paramz00(obj_t
		BgL_envz00_1861, obj_t BgL_vz00_1862)
	{
		{	/* Llib/param.scm 270 */
			return
				BGl_bigloozd2modulezd2extensionzd2handlerzd2setz12z12zz__paramz00
				(BgL_vz00_1862);
		}

	}



/* bigloo-eval-strict-module */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00()
	{
		{	/* Llib/param.scm 275 */
			return BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00;
		}

	}



/* &bigloo-eval-strict-module */
	obj_t BGl_z62bigloozd2evalzd2strictzd2modulezb0zz__paramz00(obj_t
		BgL_envz00_1863)
	{
		{	/* Llib/param.scm 275 */
			return BBOOL(BGl_bigloozd2evalzd2strictzd2modulezd2zz__paramz00());
		}

	}



/* bigloo-eval-strict-module-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(bool_t
		BgL_vz00_16)
	{
		{	/* Llib/param.scm 275 */
			BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			{	/* Llib/param.scm 275 */
				obj_t BgL_tmp1808z00_2177;

				BgL_tmp1808z00_2177 =
					(BGl_za2bigloozd2evalzd2strictzd2moduleza2zd2zz__paramz00 =
					BgL_vz00_16, BUNSPEC);
				BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BgL_tmp1808z00_2177;
			}
			return BBOOL(BgL_vz00_16);
		}

	}



/* &bigloo-eval-strict-module-set! */
	obj_t BGl_z62bigloozd2evalzd2strictzd2modulezd2setz12z70zz__paramz00(obj_t
		BgL_envz00_1864, obj_t BgL_vz00_1865)
	{
		{	/* Llib/param.scm 275 */
			return
				BGl_bigloozd2evalzd2strictzd2modulezd2setz12z12zz__paramz00(CBOOL
				(BgL_vz00_1865));
		}

	}



/* bigloo-library-path */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2libraryzd2pathz00zz__paramz00()
	{
		{	/* Llib/param.scm 280 */
			return BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00;
		}

	}



/* &bigloo-library-path */
	obj_t BGl_z62bigloozd2libraryzd2pathz62zz__paramz00(obj_t BgL_envz00_1866)
	{
		{	/* Llib/param.scm 280 */
			return BGl_bigloozd2libraryzd2pathz00zz__paramz00();
		}

	}



/* bigloo-library-path-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(obj_t BgL_vz00_17)
	{
		{	/* Llib/param.scm 280 */
			{	/* Llib/param.scm 280 */
				obj_t BgL_top1810z00_2185;

				BgL_top1810z00_2185 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top1810z00_2185,
					BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BUNSPEC;
				{	/* Llib/param.scm 280 */
					obj_t BgL_tmp1809z00_2184;

					if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_vz00_17))
						{	/* Llib/param.scm 286 */
							bool_t BgL_test1812z00_2191;

							{
								obj_t BgL_l1075z00_1121;

								BgL_l1075z00_1121 = BgL_vz00_17;
							BgL_zc3z04anonymousza31224ze3z87_1122:
								if (NULLP(BgL_l1075z00_1121))
									{	/* Llib/param.scm 286 */
										BgL_test1812z00_2191 = ((bool_t) 1);
									}
								else
									{	/* Llib/param.scm 286 */
										bool_t BgL_test1814z00_2194;

										{	/* Llib/param.scm 286 */
											obj_t BgL_tmpz00_2195;

											BgL_tmpz00_2195 = CAR(((obj_t) BgL_l1075z00_1121));
											BgL_test1814z00_2194 = STRINGP(BgL_tmpz00_2195);
										}
										if (BgL_test1814z00_2194)
											{
												obj_t BgL_l1075z00_2199;

												BgL_l1075z00_2199 = CDR(((obj_t) BgL_l1075z00_1121));
												BgL_l1075z00_1121 = BgL_l1075z00_2199;
												goto BgL_zc3z04anonymousza31224ze3z87_1122;
											}
										else
											{	/* Llib/param.scm 286 */
												BgL_test1812z00_2191 = ((bool_t) 0);
											}
									}
							}
							if (BgL_test1812z00_2191)
								{	/* Llib/param.scm 286 */
									BgL_tmp1809z00_2184 =
										(BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 =
										BgL_vz00_17, BUNSPEC);
								}
							else
								{	/* Llib/param.scm 289 */
									obj_t BgL_arg1211z00_1103;

									{	/* Llib/param.scm 289 */
										obj_t BgL_hook1082z00_1104;

										BgL_hook1082z00_1104 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
										{
											obj_t BgL_l1079z00_1106;
											obj_t BgL_h1080z00_1107;

											BgL_l1079z00_1106 = BgL_vz00_17;
											BgL_h1080z00_1107 = BgL_hook1082z00_1104;
										BgL_zc3z04anonymousza31212ze3z87_1108:
											if (NULLP(BgL_l1079z00_1106))
												{	/* Llib/param.scm 289 */
													BgL_arg1211z00_1103 = CDR(BgL_hook1082z00_1104);
												}
											else
												{	/* Llib/param.scm 289 */
													bool_t BgL_test1816z00_2206;

													{	/* Llib/param.scm 289 */
														bool_t BgL_test1817z00_2207;

														{	/* Llib/param.scm 289 */
															obj_t BgL_tmpz00_2208;

															BgL_tmpz00_2208 =
																CAR(((obj_t) BgL_l1079z00_1106));
															BgL_test1817z00_2207 = STRINGP(BgL_tmpz00_2208);
														}
														if (BgL_test1817z00_2207)
															{	/* Llib/param.scm 289 */
																BgL_test1816z00_2206 = ((bool_t) 0);
															}
														else
															{	/* Llib/param.scm 289 */
																BgL_test1816z00_2206 = ((bool_t) 1);
															}
													}
													if (BgL_test1816z00_2206)
														{	/* Llib/param.scm 289 */
															obj_t BgL_nh1081z00_1113;

															{	/* Llib/param.scm 289 */
																obj_t BgL_arg1221z00_1115;

																BgL_arg1221z00_1115 =
																	CAR(((obj_t) BgL_l1079z00_1106));
																{	/* Llib/param.scm 289 */
																	obj_t BgL_res1578z00_1580;

																	BgL_res1578z00_1580 =
																		MAKE_YOUNG_PAIR(BgL_arg1221z00_1115, BNIL);
																	BgL_nh1081z00_1113 = BgL_res1578z00_1580;
																}
															}
															SET_CDR(BgL_h1080z00_1107, BgL_nh1081z00_1113);
															{	/* Llib/param.scm 289 */
																obj_t BgL_arg1216z00_1114;

																BgL_arg1216z00_1114 =
																	CDR(((obj_t) BgL_l1079z00_1106));
																{
																	obj_t BgL_h1080z00_2219;
																	obj_t BgL_l1079z00_2218;

																	BgL_l1079z00_2218 = BgL_arg1216z00_1114;
																	BgL_h1080z00_2219 = BgL_nh1081z00_1113;
																	BgL_h1080z00_1107 = BgL_h1080z00_2219;
																	BgL_l1079z00_1106 = BgL_l1079z00_2218;
																	goto BgL_zc3z04anonymousza31212ze3z87_1108;
																}
															}
														}
													else
														{	/* Llib/param.scm 289 */
															obj_t BgL_arg1223z00_1116;

															BgL_arg1223z00_1116 =
																CDR(((obj_t) BgL_l1079z00_1106));
															{
																obj_t BgL_l1079z00_2222;

																BgL_l1079z00_2222 = BgL_arg1223z00_1116;
																BgL_l1079z00_1106 = BgL_l1079z00_2222;
																goto BgL_zc3z04anonymousza31212ze3z87_1108;
															}
														}
												}
										}
									}
									BgL_tmp1809z00_2184 =
										(BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 =
										BGl_errorz00zz__errorz00(BGl_symbol1690z00zz__paramz00,
											BGl_string1692z00zz__paramz00, BgL_arg1211z00_1103),
										BUNSPEC);
								}
						}
					else
						{	/* Llib/param.scm 284 */
							BgL_tmp1809z00_2184 =
								(BGl_za2bigloozd2libraryzd2pathza2z00zz__paramz00 =
								BGl_errorz00zz__errorz00(BGl_symbol1690z00zz__paramz00,
									BGl_string1693z00zz__paramz00, BgL_vz00_17), BUNSPEC);
						}
					BGL_EXITD_POP_PROTECT(BgL_top1810z00_2185);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
					BgL_tmp1809z00_2184;
				}
			}
			return BgL_vz00_17;
		}

	}



/* &bigloo-library-path-set! */
	obj_t BGl_z62bigloozd2libraryzd2pathzd2setz12za2zz__paramz00(obj_t
		BgL_envz00_1867, obj_t BgL_vz00_1868)
	{
		{	/* Llib/param.scm 280 */
			{	/* Llib/param.scm 280 */
				obj_t BgL_auxz00_2227;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_vz00_1868))
					{	/* Llib/param.scm 280 */
						BgL_auxz00_2227 = BgL_vz00_1868;
					}
				else
					{
						obj_t BgL_auxz00_2230;

						BgL_auxz00_2230 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1660z00zz__paramz00,
							BINT(((long) 11394)), BGl_string1694z00zz__paramz00,
							BGl_string1679z00zz__paramz00, BgL_vz00_1868);
						FAILURE(BgL_auxz00_2230, BFALSE, BFALSE);
					}
				return
					BGl_bigloozd2libraryzd2pathzd2setz12zc0zz__paramz00(BgL_auxz00_2227);
			}
		}

	}



/* bigloo-dns-enable-cache */
	BGL_EXPORTED_DEF bool_t bgl_dns_enable_cache()
	{
		{	/* Llib/param.scm 296 */
			return BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00;
		}

	}



/* &bigloo-dns-enable-cache */
	obj_t BGl_z62bigloozd2dnszd2enablezd2cachezb0zz__paramz00(obj_t
		BgL_envz00_1869)
	{
		{	/* Llib/param.scm 296 */
			return BBOOL(bgl_dns_enable_cache());
		}

	}



/* bigloo-dns-enable-cache-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(bool_t
		BgL_vz00_18)
	{
		{	/* Llib/param.scm 296 */
			BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			{	/* Llib/param.scm 296 */
				obj_t BgL_tmp1819z00_2237;

				BgL_tmp1819z00_2237 =
					(BGl_za2bigloozd2dnszd2enablezd2cacheza2zd2zz__paramz00 =
					BgL_vz00_18, BUNSPEC);
				BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BgL_tmp1819z00_2237;
			}
			return BBOOL(BgL_vz00_18);
		}

	}



/* &bigloo-dns-enable-cache-set! */
	obj_t BGl_z62bigloozd2dnszd2enablezd2cachezd2setz12z70zz__paramz00(obj_t
		BgL_envz00_1870, obj_t BgL_vz00_1871)
	{
		{	/* Llib/param.scm 296 */
			return
				BGl_bigloozd2dnszd2enablezd2cachezd2setz12z12zz__paramz00(CBOOL
				(BgL_vz00_1871));
		}

	}



/* bigloo-dns-cache-validity-timeout */
	BGL_EXPORTED_DEF long bgl_dns_cache_validity_timeout()
	{
		{	/* Llib/param.scm 301 */
			return BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00;
		}

	}



/* &bigloo-dns-cache-validity-timeout */
	obj_t BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutz62zz__paramz00(obj_t
		BgL_envz00_1872)
	{
		{	/* Llib/param.scm 301 */
			return BINT(bgl_dns_cache_validity_timeout());
		}

	}



/* bigloo-dns-cache-validity-timeout-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00(long
		BgL_vz00_19)
	{
		{	/* Llib/param.scm 301 */
			BGL_MUTEX_LOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
			{	/* Llib/param.scm 301 */
				obj_t BgL_tmp1820z00_2245;

				BgL_tmp1820z00_2245 =
					(BGl_za2bigloozd2dnszd2cachezd2validityzd2timeoutza2z00zz__paramz00 =
					BgL_vz00_19, BUNSPEC);
				BGL_MUTEX_UNLOCK(BGl_za2parameterzd2mutexza2zd2zz__paramz00);
				BgL_tmp1820z00_2245;
			}
			return BINT(BgL_vz00_19);
		}

	}



/* &bigloo-dns-cache-validity-timeout-set! */
	obj_t
		BGl_z62bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12za2zz__paramz00
		(obj_t BgL_envz00_1873, obj_t BgL_vz00_1874)
	{
		{	/* Llib/param.scm 301 */
			{	/* Llib/param.scm 301 */
				long BgL_auxz00_2249;

				{	/* Llib/param.scm 301 */
					obj_t BgL_tmpz00_2250;

					if (INTEGERP(BgL_vz00_1874))
						{	/* Llib/param.scm 301 */
							BgL_tmpz00_2250 = BgL_vz00_1874;
						}
					else
						{
							obj_t BgL_auxz00_2253;

							BgL_auxz00_2253 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1660z00zz__paramz00,
								BINT(((long) 12233)), BGl_string1695z00zz__paramz00,
								BGl_string1662z00zz__paramz00, BgL_vz00_1874);
							FAILURE(BgL_auxz00_2253, BFALSE, BFALSE);
						}
					BgL_auxz00_2249 = (long) CINT(BgL_tmpz00_2250);
				}
				return
					BGl_bigloozd2dnszd2cachezd2validityzd2timeoutzd2setz12zc0zz__paramz00
					(BgL_auxz00_2249);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__paramz00()
	{
		{	/* Llib/param.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__paramz00()
	{
		{	/* Llib/param.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__paramz00()
	{
		{	/* Llib/param.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__paramz00()
	{
		{	/* Llib/param.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1696z00zz__paramz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1696z00zz__paramz00));
			return
				BGl_modulezd2initializa7ationz75zz__configurez00(((long) 62374350),
				BSTRING_TO_STRING(BGl_string1696z00zz__paramz00));
		}

	}

#ifdef __cplusplus
}
#endif
