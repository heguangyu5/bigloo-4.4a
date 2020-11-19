/*===========================================================================*/
/*   (Llib/socket.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/socket.scm -indent -o objs/obj_u/Llib/socket.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t bgl_socket_host_addr(obj_t);
	static obj_t BGl_z62socketzd2localzf3z43zz__socketz00(obj_t, obj_t);
	static obj_t BGl_keyword1969z00zz__socketz00 = BUNSPEC;
	extern obj_t bgl_make_client_socket(obj_t, int, int, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2closezd2zz__socketz00(obj_t);
	static obj_t BGl_z62socketzd2hostzd2addresszd3zf3z42zz__socketz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_keyword1971z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_keyword1973z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_keyword1975z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__socketz00 = BUNSPEC;
	static obj_t BGl_z62datagramzd2socketzd2portzd2numberzb0zz__socketz00(obj_t,
		obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_list2000z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_z62socketzd2portzd2numberz62zz__socketz00(obj_t, obj_t);
	static obj_t BGl_list2007z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_z62socketzd2localzd2addressz62zz__socketz00(obj_t, obj_t);
	extern obj_t bgl_gethostname();
	BGL_EXPORTED_DECL obj_t BGl_socketzd2acceptzd2manyz00zz__socketz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2optionzd2setz12z12zz__socketz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_keyword1990z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_keyword1992z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_keyword1994z00zz__socketz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_makezd2serverzd2socketz00zz__socketz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2inputzd2zz__socketz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__socketz00();
	BGL_EXPORTED_DECL obj_t BGl_socketzd2hostzd2addressz00zz__socketz00(obj_t);
	static obj_t BGl_z62socketzd2outputzb0zz__socketz00(obj_t, obj_t);
	extern void socket_cleanup();
	static obj_t BGl__socketzd2shutdownzd2zz__socketz00(obj_t, obj_t);
	static obj_t BGl__hostnamez00zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hostnamez00zz__socketz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2localzd2addressz00zz__socketz00(obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_symbol1966z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__socketz00();
	extern bool_t bgl_socket_localp(obj_t);
	static obj_t BGl_symbol1977z00zz__socketz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2protocolszd2zz__socketz00();
	static obj_t BGl_z62socketzd2downzf3z43zz__socketz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__socketz00();
	static obj_t BGl_z62datagramzd2socketzd2receivez62zz__socketz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62socketzd2clientzf3z43zz__socketz00(obj_t, obj_t);
	static obj_t BGl__makezd2datagramzd2clientzd2socketzd2zz__socketz00(obj_t,
		obj_t);
	extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_symbol1984z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_symbol1986z00zz__socketz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_socketzd2optionzd2zz__socketz00(obj_t, obj_t);
	static obj_t BGl_z62socketzd2serverzf3z43zz__socketz00(obj_t, obj_t);
	extern obj_t bgl_make_unix_socket(obj_t, int, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31240ze3ze5zz__socketz00(obj_t, obj_t);
	static obj_t BGl_z62z52socketzd2initz12zf0zz__socketz00(obj_t);
	extern obj_t bgl_host(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_socketzf3zf3zz__socketz00(obj_t);
	static obj_t BGl__makezd2clientzd2socketz00zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hostinfoz00zz__socketz00(obj_t);
	extern obj_t bgl_getsockopt(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t bgl_res_query(obj_t, obj_t);
	extern obj_t make_vector(long, obj_t);
	static obj_t BGl_z62datagramzd2socketzd2hostzd2addresszb0zz__socketz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2datagramzd2serverzd2socketzd2zz__socketz00(obj_t);
	static obj_t BGl__makezd2datagramzd2unboundzd2socketzd2zz__socketz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__socketz00();
	extern bool_t bgl_socket_host_addr_cmp(obj_t, obj_t);
	static obj_t BGl_keyword2001z00zz__socketz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2optionz00zz__socketz00(obj_t,
		obj_t);
	extern obj_t BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t);
	static obj_t BGl_keyword2008z00zz__socketz00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_socketzd2shutdownzd2zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_resolvz00zz__socketz00(obj_t, obj_t);
	static obj_t BGl_z62datagramzd2socketzd2hostnamez62zz__socketz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_socketzd2localzf3z21zz__socketz00(obj_t);
	extern obj_t bgl_make_datagram_client_socket(obj_t, int, bool_t);
	static obj_t BGl_keyword2010z00zz__socketz00 = BUNSPEC;
	extern obj_t bgl_socket_accept(obj_t, bool_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_socketzd2clientzf3z21zz__socketz00(obj_t);
	static obj_t BGl_z62getzd2protocolzb0zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_datagramzd2socketzd2optionzd2setz12zc0zz__socketz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__socketzd2acceptzd2zz__socketz00(obj_t, obj_t);
	extern obj_t BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_socketzd2serverzf3z21zz__socketz00(obj_t);
	extern obj_t bgl_getprotoents();
	extern int socket_shutdown(obj_t, int);
	static obj_t BGl_z62datagramzd2socketzd2clientzf3z91zz__socketz00(obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_hostinfo(obj_t);
	static obj_t BGl_z62datagramzd2socketzd2serverzf3z91zz__socketz00(obj_t,
		obj_t);
	static obj_t BGl_z62socketzd2closezb0zz__socketz00(obj_t, obj_t);
	static obj_t BGl_symbol2003z00zz__socketz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_socketzd2outputzd2zz__socketz00(obj_t);
	extern obj_t bgl_gethostname_by_address(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2portzd2numberz00zz__socketz00(obj_t);
	static obj_t BGl_symbol2012z00zz__socketz00 = BUNSPEC;
	extern obj_t bgl_datagram_socket_send(obj_t, obj_t, obj_t, int);
	static obj_t BGl_z62hostz62zz__socketz00(obj_t, obj_t);
	static obj_t BGl_symbol2018z00zz__socketz00 = BUNSPEC;
	extern obj_t bgl_datagram_socket_close(obj_t);
	extern long bgl_socket_accept_many(obj_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2020z00zz__socketz00 = BUNSPEC;
	static obj_t BGl_symbol2022z00zz__socketz00 = BUNSPEC;
	extern obj_t BGl_applyz00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
	extern obj_t bgl_make_server_socket(obj_t, int, int, bool_t);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2acceptzd2zz__socketz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62socketzd2inputzb0zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_hostz00zz__socketz00(obj_t);
	extern obj_t bgl_setsockopt(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t, int,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t bgl_gethostinterfaces();
	BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2outputz00zz__socketz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_z52socketzd2initz12z92zz__socketz00();
	static obj_t BGl_z62getzd2interfaceszb0zz__socketz00(obj_t);
	extern obj_t bgl_make_datagram_unbound_socket(obj_t);
	extern obj_t bgl_getsockopt(obj_t, obj_t);
	static obj_t BGl_z62datagramzd2socketzd2optionzd2setz12za2zz__socketz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62datagramzd2socketzd2optionz62zz__socketz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_datagramzd2socketzd2hostnamez00zz__socketz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__socketz00();
	static obj_t BGl_z62socketzd2optionzd2setz12z70zz__socketz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t bgl_getprotobyname(char *);
	BGL_EXPORTED_DECL obj_t BGl_socketzd2hostnamezd2zz__socketz00(obj_t);
	extern obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62resolvz62zz__socketz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		int);
	static obj_t BGl_z62socketzd2hostnamezb0zz__socketz00(obj_t, obj_t);
	static obj_t BGl_z62makezd2serverzd2socketz62zz__socketz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__socketz00();
	BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2receivez00zz__socketz00(obj_t,
		int);
	static obj_t BGl_importedzd2moduleszd2initz00zz__socketz00();
	BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2closez00zz__socketz00(obj_t);
	extern obj_t socket_close(obj_t);
	static obj_t BGl__makezd2datagramzd2serverzd2socketzd2zz__socketz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31279ze3ze5zz__socketz00(obj_t, obj_t);
	static bool_t BGl_za2socketzd2initializa7edza2z75zz__socketz00;
	BGL_EXPORTED_DECL bool_t BGl_socketzd2downzf3z21zz__socketz00(obj_t);
	static obj_t BGl_list1968z00zz__socketz00 = BUNSPEC;
	extern obj_t bgl_datagram_socket_receive(obj_t, long);
	BGL_EXPORTED_DECL bool_t BGl_datagramzd2socketzf3z21zz__socketz00(obj_t);
	static obj_t BGl_z62datagramzd2socketzd2sendz62zz__socketz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_za2socketzd2mutexza2zd2zz__socketz00 = BUNSPEC;
	static obj_t BGl_z62socketzf3z91zz__socketz00(obj_t, obj_t);
	static obj_t BGl__socketzd2acceptzd2manyz00zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2datagramzd2clientzd2socketzd2zz__socketz00(obj_t, int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2inputz00zz__socketz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_datagramzd2socketzd2portzd2numberzd2zz__socketz00(obj_t);
	static obj_t BGl_list1989z00zz__socketz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_getzd2interfaceszd2zz__socketz00();
	extern obj_t bgl_setsockopt(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2sendz00zz__socketz00(obj_t,
		obj_t, obj_t, int);
	static obj_t BGl_z62getzd2protocolszb0zz__socketz00(obj_t);
	static obj_t BGl_z62datagramzd2socketzd2closez62zz__socketz00(obj_t, obj_t);
	extern obj_t BGl_mapz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_z62socketzd2optionzb0zz__socketz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_datagramzd2socketzd2hostzd2addresszd2zz__socketz00(obj_t);
	static obj_t BGl_z62socketzd2hostzd2addressz62zz__socketz00(obj_t, obj_t);
	extern obj_t bgl_make_datagram_server_socket(int);
	extern void socket_startup();
	extern obj_t bstring_to_keyword(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_socketzd2hostzd2addresszd3zf3z20zz__socketz00(obj_t, obj_t);
	extern obj_t bgl_socket_local_addr(obj_t);
	extern obj_t bgl_getprotobynumber(int);
	static obj_t BGl_z62datagramzd2socketzd2inputz62zz__socketz00(obj_t, obj_t);
	static obj_t BGl_z62datagramzd2socketzd2outputz62zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_datagramzd2socketzd2clientzf3zf3zz__socketz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2datagramzd2unboundzd2socketzd2zz__socketz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2protocolzd2zz__socketz00(obj_t);
	static obj_t BGl_z62datagramzd2socketzf3z43zz__socketz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_datagramzd2socketzd2serverzf3zf3zz__socketz00(obj_t);
	static obj_t BGl_z62hostinfoz62zz__socketz00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_hostnamezd2envzd2zz__socketz00,
		BgL_bgl__hostnameza700za7za7__2054za7, opt_generic_entry,
		BGl__hostnamez00zz__socketz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2040z00zz__socketz00,
		BgL_bgl_string2040za700za7za7_2055za7, "Datagram-socket has no output port",
		34);
	      DEFINE_STRING(BGl_string2041z00zz__socketz00,
		BgL_bgl_string2041za700za7za7_2056za7, "&datagram-socket-output", 23);
	      DEFINE_STRING(BGl_string2042z00zz__socketz00,
		BgL_bgl_string2042za700za7za7_2057za7, "datagram-socket-input", 21);
	      DEFINE_STRING(BGl_string2043z00zz__socketz00,
		BgL_bgl_string2043za700za7za7_2058za7, "Datagram-socket has no input port",
		33);
	      DEFINE_STRING(BGl_string2044z00zz__socketz00,
		BgL_bgl_string2044za700za7za7_2059za7, "&datagram-socket-input", 22);
	      DEFINE_STRING(BGl_string2045z00zz__socketz00,
		BgL_bgl_string2045za700za7za7_2060za7, "_make-datagram-server-socket", 28);
	      DEFINE_STRING(BGl_string2046z00zz__socketz00,
		BgL_bgl_string2046za700za7za7_2061za7, "_make-datagram-unbound-socket", 29);
	      DEFINE_STRING(BGl_string2047z00zz__socketz00,
		BgL_bgl_string2047za700za7za7_2062za7, "_make-datagram-client-socket", 28);
	      DEFINE_STRING(BGl_string2048z00zz__socketz00,
		BgL_bgl_string2048za700za7za7_2063za7, "&datagram-socket-close", 22);
	      DEFINE_STRING(BGl_string2049z00zz__socketz00,
		BgL_bgl_string2049za700za7za7_2064za7, "&datagram-socket-receive", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2hostnamezd2envzd2zz__socketz00,
		BgL_bgl_za762datagramza7d2so2065z00,
		BGl_z62datagramzd2socketzd2hostnamez62zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2050z00zz__socketz00,
		BgL_bgl_string2050za700za7za7_2066za7, "&datagram-socket-send", 21);
	      DEFINE_STRING(BGl_string2051z00zz__socketz00,
		BgL_bgl_string2051za700za7za7_2067za7, "&datagram-socket-option", 23);
	      DEFINE_STRING(BGl_string2052z00zz__socketz00,
		BgL_bgl_string2052za700za7za7_2068za7, "&datagram-socket-option-set!", 28);
	      DEFINE_STRING(BGl_string2053z00zz__socketz00,
		BgL_bgl_string2053za700za7za7_2069za7, "__socket", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2datagramzd2serverzd2socketzd2envz00zz__socketz00,
		BgL_bgl__makeza7d2datagram2070za7, opt_generic_entry,
		BGl__makezd2datagramzd2serverzd2socketzd2zz__socketz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_socketzd2acceptzd2manyzd2envzd2zz__socketz00,
		BgL_bgl__socketza7d2accept2071za7, opt_generic_entry,
		BGl__socketzd2acceptzd2manyz00zz__socketz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2optionzd2envz00zz__socketz00,
		BgL_bgl_za762socketza7d2opti2072z00, BGl_z62socketzd2optionzb0zz__socketz00,
		0L, BUNSPEC, 2);
	extern obj_t BGl_stringzd2appendzd2envz00zz__r4_strings_6_7z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2serverzd2socketzd2envzd2zz__socketz00,
		BgL_bgl_za762makeza7d2server2073z00, va_generic_entry,
		BGl_z62makezd2serverzd2socketz62zz__socketz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2clientzf3zd2envz21zz__socketz00,
		BgL_bgl_za762datagramza7d2so2074z00,
		BGl_z62datagramzd2socketzd2clientzf3z91zz__socketz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2datagramzd2unboundzd2socketzd2envz00zz__socketz00,
		BgL_bgl__makeza7d2datagram2075za7, opt_generic_entry,
		BGl__makezd2datagramzd2unboundzd2socketzd2zz__socketz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2serverzf3zd2envz21zz__socketz00,
		BgL_bgl_za762datagramza7d2so2076z00,
		BGl_z62datagramzd2socketzd2serverzf3z91zz__socketz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_socketzd2optionzd2setz12zd2envzc0zz__socketz00,
		BgL_bgl_za762socketza7d2opti2077z00,
		BGl_z62socketzd2optionzd2setz12z70zz__socketz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2outputzd2envzd2zz__socketz00,
		BgL_bgl_za762datagramza7d2so2078z00,
		BGl_z62datagramzd2socketzd2outputz62zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzf3zd2envz21zz__socketz00,
		BgL_bgl_za762socketza7f3za791za72079z00, BGl_z62socketzf3z91zz__socketz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2optionzd2setz12zd2envz12zz__socketz00,
		BgL_bgl_za762datagramza7d2so2080z00,
		BGl_z62datagramzd2socketzd2optionzd2setz12za2zz__socketz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_socketzd2hostzd2addresszd3zf3zd2envzf2zz__socketz00,
		BgL_bgl_za762socketza7d2host2081z00,
		BGl_z62socketzd2hostzd2addresszd3zf3z42zz__socketz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2hostnamezd2envz00zz__socketz00,
		BgL_bgl_za762socketza7d2host2082z00,
		BGl_z62socketzd2hostnamezb0zz__socketz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2inputzd2envzd2zz__socketz00,
		BgL_bgl_za762datagramza7d2so2083z00,
		BGl_z62datagramzd2socketzd2inputz62zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2acceptzd2envz00zz__socketz00,
		BgL_bgl__socketza7d2accept2084za7, opt_generic_entry,
		BGl__socketzd2acceptzd2zz__socketz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hostzd2envzd2zz__socketz00,
		BgL_bgl_za762hostza762za7za7__so2085z00, BGl_z62hostz62zz__socketz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2localzf3zd2envzf3zz__socketz00,
		BgL_bgl_za762socketza7d2loca2086z00,
		BGl_z62socketzd2localzf3z43zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2outputzd2envz00zz__socketz00,
		BgL_bgl_za762socketza7d2outp2087z00, BGl_z62socketzd2outputzb0zz__socketz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2downzf3zd2envzf3zz__socketz00,
		BgL_bgl_za762socketza7d2down2088z00,
		BGl_z62socketzd2downzf3z43zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2protocolszd2envz00zz__socketz00,
		BgL_bgl_za762getza7d2protoco2089z00, BGl_z62getzd2protocolszb0zz__socketz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2hostzd2addresszd2envz00zz__socketz00,
		BgL_bgl_za762datagramza7d2so2090z00,
		BGl_z62datagramzd2socketzd2hostzd2addresszb0zz__socketz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_datagramzd2socketzf3zd2envzf3zz__socketz00,
		BgL_bgl_za762datagramza7d2so2091z00,
		BGl_z62datagramzd2socketzf3z43zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_hostinfozd2envzd2zz__socketz00,
		BgL_bgl_za762hostinfoza762za7za72092z00, BGl_z62hostinfoz62zz__socketz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2closezd2envz00zz__socketz00,
		BgL_bgl_za762socketza7d2clos2093z00, BGl_z62socketzd2closezb0zz__socketz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1953z00zz__socketz00,
		BgL_bgl_string1953za700za7za7_2094za7, "socket", 6);
	      DEFINE_STRING(BGl_string1955z00zz__socketz00,
		BgL_bgl_string1955za700za7za7_2095za7, "/tmp/4.4a/runtime/Llib/socket.scm",
		33);
	      DEFINE_STRING(BGl_string1956z00zz__socketz00,
		BgL_bgl_string1956za700za7za7_2096za7, "&socket-hostname", 16);
	      DEFINE_STRING(BGl_string1957z00zz__socketz00,
		BgL_bgl_string1957za700za7za7_2097za7, "&socket-host-address", 20);
	      DEFINE_STRING(BGl_string1958z00zz__socketz00,
		BgL_bgl_string1958za700za7za7_2098za7, "&socket-local-address", 21);
	      DEFINE_STRING(BGl_string1959z00zz__socketz00,
		BgL_bgl_string1959za700za7za7_2099za7, "&socket-local?", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2datagramzd2clientzd2socketzd2envz00zz__socketz00,
		BgL_bgl__makeza7d2datagram2100za7, opt_generic_entry,
		BGl__makezd2datagramzd2clientzd2socketzd2zz__socketz00, BFALSE, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1954z00zz__socketz00,
		BgL_bgl_za762za7c3za704anonymo2101za7,
		BGl_z62zc3z04anonymousza31240ze3ze5zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1960z00zz__socketz00,
		BgL_bgl_string1960za700za7za7_2102za7, "&socket-host-address=?", 22);
	      DEFINE_STRING(BGl_string1961z00zz__socketz00,
		BgL_bgl_string1961za700za7za7_2103za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1962z00zz__socketz00,
		BgL_bgl_string1962za700za7za7_2104za7, "&socket-down?", 13);
	      DEFINE_STRING(BGl_string1963z00zz__socketz00,
		BgL_bgl_string1963za700za7za7_2105za7, "&socket-port-number", 19);
	      DEFINE_STRING(BGl_string1964z00zz__socketz00,
		BgL_bgl_string1964za700za7za7_2106za7, "&socket-input", 13);
	      DEFINE_STRING(BGl_string1965z00zz__socketz00,
		BgL_bgl_string1965za700za7za7_2107za7, "&socket-output", 14);
	      DEFINE_STRING(BGl_string1967z00zz__socketz00,
		BgL_bgl_string1967za700za7za7_2108za7, "inet", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2receivezd2envzd2zz__socketz00,
		BgL_bgl_za762datagramza7d2so2109z00,
		BGl_z62datagramzd2socketzd2receivez62zz__socketz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2sendzd2envzd2zz__socketz00,
		BgL_bgl_za762datagramza7d2so2110z00,
		BGl_z62datagramzd2socketzd2sendz62zz__socketz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2clientzd2socketzd2envzd2zz__socketz00,
		BgL_bgl__makeza7d2clientza7d2111z00, opt_generic_entry,
		BGl__makezd2clientzd2socketz00zz__socketz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string1970z00zz__socketz00,
		BgL_bgl_string1970za700za7za7_2112za7, "domain", 6);
	      DEFINE_STRING(BGl_string1972z00zz__socketz00,
		BgL_bgl_string1972za700za7za7_2113za7, "inbuf", 5);
	      DEFINE_STRING(BGl_string1974z00zz__socketz00,
		BgL_bgl_string1974za700za7za7_2114za7, "outbuf", 6);
	      DEFINE_STRING(BGl_string1976z00zz__socketz00,
		BgL_bgl_string1976za700za7za7_2115za7, "timeout", 7);
	      DEFINE_STRING(BGl_string1978z00zz__socketz00,
		BgL_bgl_string1978za700za7za7_2116za7, "make-client-socket::socket", 26);
	      DEFINE_STRING(BGl_string1979z00zz__socketz00,
		BgL_bgl_string1979za700za7za7_2117za7, "Illegal keyword argument", 24);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2shutdownzd2envz00zz__socketz00,
		BgL_bgl__socketza7d2shutdo2118za7, opt_generic_entry,
		BGl__socketzd2shutdownzd2zz__socketz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string1980z00zz__socketz00,
		BgL_bgl_string1980za700za7za7_2119za7,
		"wrong number of arguments: [2..6] expected, provided", 52);
	      DEFINE_STRING(BGl_string1981z00zz__socketz00,
		BgL_bgl_string1981za700za7za7_2120za7, "_make-client-socket", 19);
	      DEFINE_STRING(BGl_string1982z00zz__socketz00,
		BgL_bgl_string1982za700za7za7_2121za7, "bint", 4);
	      DEFINE_STRING(BGl_string1983z00zz__socketz00,
		BgL_bgl_string1983za700za7za7_2122za7, "make-client-socket", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52socketzd2initz12zd2envz40zz__socketz00,
		BgL_bgl_za762za752socketza7d2i2123za7,
		BGl_z62z52socketzd2initz12zf0zz__socketz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1985z00zz__socketz00,
		BgL_bgl_string1985za700za7za7_2124za7, "unix", 4);
	      DEFINE_STRING(BGl_string1987z00zz__socketz00,
		BgL_bgl_string1987za700za7za7_2125za7, "local", 5);
	      DEFINE_STRING(BGl_string1988z00zz__socketz00,
		BgL_bgl_string1988za700za7za7_2126za7, "Unknown socket domain", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_socketzd2portzd2numberzd2envzd2zz__socketz00,
		BgL_bgl_za762socketza7d2port2127z00,
		BGl_z62socketzd2portzd2numberz62zz__socketz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_socketzd2localzd2addresszd2envzd2zz__socketz00,
		BgL_bgl_za762socketza7d2loca2128z00,
		BGl_z62socketzd2localzd2addressz62zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1991z00zz__socketz00,
		BgL_bgl_string1991za700za7za7_2129za7, "ipv6", 4);
	      DEFINE_STRING(BGl_string1993z00zz__socketz00,
		BgL_bgl_string1993za700za7za7_2130za7, "backlog", 7);
	      DEFINE_STRING(BGl_string1995z00zz__socketz00,
		BgL_bgl_string1995za700za7za7_2131za7, "name", 4);
	      DEFINE_STRING(BGl_string1997z00zz__socketz00,
		BgL_bgl_string1997za700za7za7_2132za7, "Illegal extra key arguments: ", 29);
	      DEFINE_STRING(BGl_string1998z00zz__socketz00,
		BgL_bgl_string1998za700za7za7_2133za7, "dsssl-get-key-arg", 17);
	      DEFINE_STRING(BGl_string1999z00zz__socketz00,
		BgL_bgl_string1999za700za7za7_2134za7, "~a ", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2portzd2numberzd2envz00zz__socketz00,
		BgL_bgl_za762datagramza7d2so2135z00,
		BGl_z62datagramzd2socketzd2portzd2numberzb0zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1996z00zz__socketz00,
		BgL_bgl_za762za7c3za704anonymo2136za7,
		BGl_z62zc3z04anonymousza31279ze3ze5zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_resolvzd2envzd2zz__socketz00,
		BgL_bgl_za762resolvza762za7za7__2137z00, BGl_z62resolvz62zz__socketz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2protocolzd2envz00zz__socketz00,
		BgL_bgl_za762getza7d2protoco2138z00, BGl_z62getzd2protocolzb0zz__socketz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2inputzd2envz00zz__socketz00,
		BgL_bgl_za762socketza7d2inpu2139z00, BGl_z62socketzd2inputzb0zz__socketz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2clientzf3zd2envzf3zz__socketz00,
		BgL_bgl_za762socketza7d2clie2140z00,
		BGl_z62socketzd2clientzf3z43zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2002z00zz__socketz00,
		BgL_bgl_string2002za700za7za7_2141za7, "errp", 4);
	      DEFINE_STRING(BGl_string2004z00zz__socketz00,
		BgL_bgl_string2004za700za7za7_2142za7, "socket-accept", 13);
	      DEFINE_STRING(BGl_string2005z00zz__socketz00,
		BgL_bgl_string2005za700za7za7_2143za7,
		"wrong number of arguments: [1..4] expected, provided", 52);
	      DEFINE_STRING(BGl_string2006z00zz__socketz00,
		BgL_bgl_string2006za700za7za7_2144za7, "_socket-accept", 14);
	      DEFINE_STRING(BGl_string2009z00zz__socketz00,
		BgL_bgl_string2009za700za7za7_2145za7, "inbufs", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_socketzd2serverzf3zd2envzf3zz__socketz00,
		BgL_bgl_za762socketza7d2serv2146z00,
		BGl_z62socketzd2serverzf3z43zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2011z00zz__socketz00,
		BgL_bgl_string2011za700za7za7_2147za7, "outbufs", 7);
	      DEFINE_STRING(BGl_string2013z00zz__socketz00,
		BgL_bgl_string2013za700za7za7_2148za7, "socket-accept-many", 18);
	      DEFINE_STRING(BGl_string2014z00zz__socketz00,
		BgL_bgl_string2014za700za7za7_2149za7,
		"wrong number of arguments: [2..5] expected, provided", 52);
	      DEFINE_STRING(BGl_string2015z00zz__socketz00,
		BgL_bgl_string2015za700za7za7_2150za7, "_socket-accept-many", 19);
	      DEFINE_STRING(BGl_string2016z00zz__socketz00,
		BgL_bgl_string2016za700za7za7_2151za7, "vector", 6);
	      DEFINE_STRING(BGl_string2017z00zz__socketz00,
		BgL_bgl_string2017za700za7za7_2152za7, "_socket-shutdown", 16);
	      DEFINE_STRING(BGl_string2019z00zz__socketz00,
		BgL_bgl_string2019za700za7za7_2153za7, "RDWR", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2interfaceszd2envz00zz__socketz00,
		BgL_bgl_za762getza7d2interfa2154z00,
		BGl_z62getzd2interfaceszb0zz__socketz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2021z00zz__socketz00,
		BgL_bgl_string2021za700za7za7_2155za7, "WR", 2);
	      DEFINE_STRING(BGl_string2023z00zz__socketz00,
		BgL_bgl_string2023za700za7za7_2156za7, "RD", 2);
	      DEFINE_STRING(BGl_string2024z00zz__socketz00,
		BgL_bgl_string2024za700za7za7_2157za7, "socket-shutdown", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2closezd2envzd2zz__socketz00,
		BgL_bgl_za762datagramza7d2so2158z00,
		BGl_z62datagramzd2socketzd2closez62zz__socketz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2025z00zz__socketz00,
		BgL_bgl_string2025za700za7za7_2159za7, "wrong optional argument", 23);
	      DEFINE_STRING(BGl_string2026z00zz__socketz00,
		BgL_bgl_string2026za700za7za7_2160za7, "&socket-close", 13);
	      DEFINE_STRING(BGl_string2027z00zz__socketz00,
		BgL_bgl_string2027za700za7za7_2161za7, "&host", 5);
	      DEFINE_STRING(BGl_string2028z00zz__socketz00,
		BgL_bgl_string2028za700za7za7_2162za7, "&hostinfo", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_datagramzd2socketzd2optionzd2envzd2zz__socketz00,
		BgL_bgl_za762datagramza7d2so2163z00,
		BGl_z62datagramzd2socketzd2optionz62zz__socketz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2029z00zz__socketz00,
		BgL_bgl_string2029za700za7za7_2164za7, "_hostname", 9);
	      DEFINE_STRING(BGl_string2030z00zz__socketz00,
		BgL_bgl_string2030za700za7za7_2165za7, "&resolv", 7);
	      DEFINE_STRING(BGl_string2031z00zz__socketz00,
		BgL_bgl_string2031za700za7za7_2166za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2032z00zz__socketz00,
		BgL_bgl_string2032za700za7za7_2167za7, "&socket-option", 14);
	      DEFINE_STRING(BGl_string2033z00zz__socketz00,
		BgL_bgl_string2033za700za7za7_2168za7, "keyword", 7);
	      DEFINE_STRING(BGl_string2034z00zz__socketz00,
		BgL_bgl_string2034za700za7za7_2169za7, "&socket-option-set!", 19);
	      DEFINE_STRING(BGl_string2035z00zz__socketz00,
		BgL_bgl_string2035za700za7za7_2170za7, "&datagram-socket-hostname", 25);
	      DEFINE_STRING(BGl_string2036z00zz__socketz00,
		BgL_bgl_string2036za700za7za7_2171za7, "datagram-socket", 15);
	      DEFINE_STRING(BGl_string2037z00zz__socketz00,
		BgL_bgl_string2037za700za7za7_2172za7, "&datagram-socket-host-address", 29);
	      DEFINE_STRING(BGl_string2038z00zz__socketz00,
		BgL_bgl_string2038za700za7za7_2173za7, "&datagram-socket-port-number", 28);
	      DEFINE_STRING(BGl_string2039z00zz__socketz00,
		BgL_bgl_string2039za700za7za7_2174za7, "datagram-socket-output", 22);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_socketzd2hostzd2addresszd2envzd2zz__socketz00,
		BgL_bgl_za762socketza7d2host2175z00,
		BGl_z62socketzd2hostzd2addressz62zz__socketz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_keyword1969z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_keyword1971z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_keyword1973z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_keyword1975z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__socketz00));
		     ADD_ROOT((void *) (&BGl_list2000z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_list2007z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_keyword1990z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_keyword1992z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_keyword1994z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_symbol1966z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_symbol1977z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_symbol1984z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_symbol1986z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_keyword2001z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_keyword2008z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_keyword2010z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_symbol2003z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_symbol2012z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_symbol2018z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_symbol2020z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_symbol2022z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_list1968z00zz__socketz00));
		     ADD_ROOT((void *) (&BGl_za2socketzd2mutexza2zd2zz__socketz00));
		     ADD_ROOT((void *) (&BGl_list1989z00zz__socketz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long
		BgL_checksumz00_2670, char *BgL_fromz00_2671)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__socketz00))
				{
					BGl_requirezd2initializa7ationz75zz__socketz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__socketz00();
					BGl_cnstzd2initzd2zz__socketz00();
					BGl_importedzd2moduleszd2initz00zz__socketz00();
					return BGl_toplevelzd2initzd2zz__socketz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__socketz00()
	{
		{	/* Llib/socket.scm 14 */
			BGl_symbol1966z00zz__socketz00 =
				bstring_to_symbol(BGl_string1967z00zz__socketz00);
			BGl_keyword1969z00zz__socketz00 =
				bstring_to_keyword(BGl_string1970z00zz__socketz00);
			BGl_keyword1971z00zz__socketz00 =
				bstring_to_keyword(BGl_string1972z00zz__socketz00);
			BGl_keyword1973z00zz__socketz00 =
				bstring_to_keyword(BGl_string1974z00zz__socketz00);
			BGl_keyword1975z00zz__socketz00 =
				bstring_to_keyword(BGl_string1976z00zz__socketz00);
			BGl_list1968z00zz__socketz00 =
				MAKE_YOUNG_PAIR(BGl_keyword1969z00zz__socketz00,
				MAKE_YOUNG_PAIR(BGl_keyword1971z00zz__socketz00,
					MAKE_YOUNG_PAIR(BGl_keyword1973z00zz__socketz00,
						MAKE_YOUNG_PAIR(BGl_keyword1975z00zz__socketz00, BNIL))));
			BGl_symbol1977z00zz__socketz00 =
				bstring_to_symbol(BGl_string1978z00zz__socketz00);
			BGl_symbol1984z00zz__socketz00 =
				bstring_to_symbol(BGl_string1985z00zz__socketz00);
			BGl_symbol1986z00zz__socketz00 =
				bstring_to_symbol(BGl_string1987z00zz__socketz00);
			BGl_keyword1990z00zz__socketz00 =
				bstring_to_keyword(BGl_string1991z00zz__socketz00);
			BGl_keyword1992z00zz__socketz00 =
				bstring_to_keyword(BGl_string1993z00zz__socketz00);
			BGl_keyword1994z00zz__socketz00 =
				bstring_to_keyword(BGl_string1995z00zz__socketz00);
			BGl_list1989z00zz__socketz00 =
				MAKE_YOUNG_PAIR(BGl_keyword1990z00zz__socketz00,
				MAKE_YOUNG_PAIR(BGl_keyword1992z00zz__socketz00,
					MAKE_YOUNG_PAIR(BGl_keyword1994z00zz__socketz00, BNIL)));
			BGl_keyword2001z00zz__socketz00 =
				bstring_to_keyword(BGl_string2002z00zz__socketz00);
			BGl_list2000z00zz__socketz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2001z00zz__socketz00,
				MAKE_YOUNG_PAIR(BGl_keyword1971z00zz__socketz00,
					MAKE_YOUNG_PAIR(BGl_keyword1973z00zz__socketz00, BNIL)));
			BGl_symbol2003z00zz__socketz00 =
				bstring_to_symbol(BGl_string2004z00zz__socketz00);
			BGl_keyword2008z00zz__socketz00 =
				bstring_to_keyword(BGl_string2009z00zz__socketz00);
			BGl_keyword2010z00zz__socketz00 =
				bstring_to_keyword(BGl_string2011z00zz__socketz00);
			BGl_list2007z00zz__socketz00 =
				MAKE_YOUNG_PAIR(BGl_keyword2001z00zz__socketz00,
				MAKE_YOUNG_PAIR(BGl_keyword2008z00zz__socketz00,
					MAKE_YOUNG_PAIR(BGl_keyword2010z00zz__socketz00, BNIL)));
			BGl_symbol2012z00zz__socketz00 =
				bstring_to_symbol(BGl_string2013z00zz__socketz00);
			BGl_symbol2018z00zz__socketz00 =
				bstring_to_symbol(BGl_string2019z00zz__socketz00);
			BGl_symbol2020z00zz__socketz00 =
				bstring_to_symbol(BGl_string2021z00zz__socketz00);
			return (BGl_symbol2022z00zz__socketz00 =
				bstring_to_symbol(BGl_string2023z00zz__socketz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__socketz00()
	{
		{	/* Llib/socket.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__socketz00()
	{
		{	/* Llib/socket.scm 14 */
			BGl_za2socketzd2initializa7edza2z75zz__socketz00 = ((bool_t) 0);
			{	/* Llib/socket.scm 279 */
				obj_t BgL_res1702z00_1754;

				BgL_res1702z00_1754 = bgl_make_mutex(BGl_string1953z00zz__socketz00);
				return (BGl_za2socketzd2mutexza2zd2zz__socketz00 =
					BgL_res1702z00_1754, BUNSPEC);
			}
		}

	}



/* %socket-init! */
	BGL_EXPORTED_DEF obj_t BGl_z52socketzd2initz12z92zz__socketz00()
	{
		{	/* Llib/socket.scm 284 */
			{	/* Llib/socket.scm 285 */
				obj_t BgL_top2178z00_2714;

				BgL_top2178z00_2714 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_za2socketzd2mutexza2zd2zz__socketz00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2178z00_2714,
					BGl_za2socketzd2mutexza2zd2zz__socketz00);
				BUNSPEC;
				{	/* Llib/socket.scm 285 */
					obj_t BgL_tmp2177z00_2713;

					if (BGl_za2socketzd2initializa7edza2z75zz__socketz00)
						{	/* Llib/socket.scm 286 */
							BgL_tmp2177z00_2713 = BFALSE;
						}
					else
						{	/* Llib/socket.scm 286 */
							BGl_za2socketzd2initializa7edza2z75zz__socketz00 = ((bool_t) 1);
							socket_startup();
							BUNSPEC;
							BGl_registerzd2exitzd2functionz12z12zz__biglooz00
								(BGl_proc1954z00zz__socketz00);
							BgL_tmp2177z00_2713 = BUNSPEC;
						}
					BGL_EXITD_POP_PROTECT(BgL_top2178z00_2714);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_za2socketzd2mutexza2zd2zz__socketz00);
					return BgL_tmp2177z00_2713;
				}
			}
		}

	}



/* &%socket-init! */
	obj_t BGl_z62z52socketzd2initz12zf0zz__socketz00(obj_t BgL_envz00_2415)
	{
		{	/* Llib/socket.scm 284 */
			return BGl_z52socketzd2initz12z92zz__socketz00();
		}

	}



/* &<@anonymous:1240> */
	obj_t BGl_z62zc3z04anonymousza31240ze3ze5zz__socketz00(obj_t BgL_envz00_2416,
		obj_t BgL_xz00_2417)
	{
		{	/* Llib/socket.scm 290 */
			socket_cleanup();
			BUNSPEC;
			return BgL_xz00_2417;
		}

	}



/* socket? */
	BGL_EXPORTED_DEF bool_t BGl_socketzf3zf3zz__socketz00(obj_t BgL_objz00_3)
	{
		{	/* Llib/socket.scm 300 */
			return SOCKETP(BgL_objz00_3);
		}

	}



/* &socket? */
	obj_t BGl_z62socketzf3z91zz__socketz00(obj_t BgL_envz00_2418,
		obj_t BgL_objz00_2419)
	{
		{	/* Llib/socket.scm 300 */
			return BBOOL(BGl_socketzf3zf3zz__socketz00(BgL_objz00_2419));
		}

	}



/* socket-server? */
	BGL_EXPORTED_DEF bool_t BGl_socketzd2serverzf3z21zz__socketz00(obj_t
		BgL_objz00_4)
	{
		{	/* Llib/socket.scm 306 */
			return BGL_SOCKET_SERVERP(BgL_objz00_4);
		}

	}



/* &socket-server? */
	obj_t BGl_z62socketzd2serverzf3z43zz__socketz00(obj_t BgL_envz00_2420,
		obj_t BgL_objz00_2421)
	{
		{	/* Llib/socket.scm 306 */
			return BBOOL(BGl_socketzd2serverzf3z21zz__socketz00(BgL_objz00_2421));
		}

	}



/* socket-client? */
	BGL_EXPORTED_DEF bool_t BGl_socketzd2clientzf3z21zz__socketz00(obj_t
		BgL_objz00_5)
	{
		{	/* Llib/socket.scm 312 */
			return BGL_SOCKET_CLIENTP(BgL_objz00_5);
		}

	}



/* &socket-client? */
	obj_t BGl_z62socketzd2clientzf3z43zz__socketz00(obj_t BgL_envz00_2422,
		obj_t BgL_objz00_2423)
	{
		{	/* Llib/socket.scm 312 */
			return BBOOL(BGl_socketzd2clientzf3z21zz__socketz00(BgL_objz00_2423));
		}

	}



/* socket-hostname */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2hostnamezd2zz__socketz00(obj_t
		BgL_socketz00_6)
	{
		{	/* Llib/socket.scm 318 */
			return SOCKET_HOSTNAME(BgL_socketz00_6);
		}

	}



/* &socket-hostname */
	obj_t BGl_z62socketzd2hostnamezb0zz__socketz00(obj_t BgL_envz00_2424,
		obj_t BgL_socketz00_2425)
	{
		{	/* Llib/socket.scm 318 */
			{	/* Llib/socket.scm 319 */
				obj_t BgL_auxz00_2735;

				if (SOCKETP(BgL_socketz00_2425))
					{	/* Llib/socket.scm 319 */
						BgL_auxz00_2735 = BgL_socketz00_2425;
					}
				else
					{
						obj_t BgL_auxz00_2738;

						BgL_auxz00_2738 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 13980)), BGl_string1956z00zz__socketz00,
							BGl_string1953z00zz__socketz00, BgL_socketz00_2425);
						FAILURE(BgL_auxz00_2738, BFALSE, BFALSE);
					}
				return BGl_socketzd2hostnamezd2zz__socketz00(BgL_auxz00_2735);
			}
		}

	}



/* socket-host-address */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2hostzd2addressz00zz__socketz00(obj_t
		BgL_socketz00_7)
	{
		{	/* Llib/socket.scm 324 */
			return bgl_socket_host_addr(BgL_socketz00_7);
		}

	}



/* &socket-host-address */
	obj_t BGl_z62socketzd2hostzd2addressz62zz__socketz00(obj_t BgL_envz00_2426,
		obj_t BgL_socketz00_2427)
	{
		{	/* Llib/socket.scm 324 */
			{	/* Llib/socket.scm 325 */
				obj_t BgL_auxz00_2744;

				if (SOCKETP(BgL_socketz00_2427))
					{	/* Llib/socket.scm 325 */
						BgL_auxz00_2744 = BgL_socketz00_2427;
					}
				else
					{
						obj_t BgL_auxz00_2747;

						BgL_auxz00_2747 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 14278)), BGl_string1957z00zz__socketz00,
							BGl_string1953z00zz__socketz00, BgL_socketz00_2427);
						FAILURE(BgL_auxz00_2747, BFALSE, BFALSE);
					}
				return BGl_socketzd2hostzd2addressz00zz__socketz00(BgL_auxz00_2744);
			}
		}

	}



/* socket-local-address */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2localzd2addressz00zz__socketz00(obj_t
		BgL_socketz00_8)
	{
		{	/* Llib/socket.scm 330 */
			return bgl_socket_local_addr(BgL_socketz00_8);
		}

	}



/* &socket-local-address */
	obj_t BGl_z62socketzd2localzd2addressz62zz__socketz00(obj_t BgL_envz00_2428,
		obj_t BgL_socketz00_2429)
	{
		{	/* Llib/socket.scm 330 */
			{	/* Llib/socket.scm 331 */
				obj_t BgL_auxz00_2753;

				if (SOCKETP(BgL_socketz00_2429))
					{	/* Llib/socket.scm 331 */
						BgL_auxz00_2753 = BgL_socketz00_2429;
					}
				else
					{
						obj_t BgL_auxz00_2756;

						BgL_auxz00_2756 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 14585)), BGl_string1958z00zz__socketz00,
							BGl_string1953z00zz__socketz00, BgL_socketz00_2429);
						FAILURE(BgL_auxz00_2756, BFALSE, BFALSE);
					}
				return BGl_socketzd2localzd2addressz00zz__socketz00(BgL_auxz00_2753);
			}
		}

	}



/* socket-local? */
	BGL_EXPORTED_DEF bool_t BGl_socketzd2localzf3z21zz__socketz00(obj_t
		BgL_socketz00_9)
	{
		{	/* Llib/socket.scm 336 */
			return bgl_socket_localp(BgL_socketz00_9);
		}

	}



/* &socket-local? */
	obj_t BGl_z62socketzd2localzf3z43zz__socketz00(obj_t BgL_envz00_2430,
		obj_t BgL_socketz00_2431)
	{
		{	/* Llib/socket.scm 336 */
			{	/* Llib/socket.scm 339 */
				bool_t BgL_tmpz00_2762;

				{	/* Llib/socket.scm 339 */
					obj_t BgL_auxz00_2763;

					if (SOCKETP(BgL_socketz00_2431))
						{	/* Llib/socket.scm 339 */
							BgL_auxz00_2763 = BgL_socketz00_2431;
						}
					else
						{
							obj_t BgL_auxz00_2766;

							BgL_auxz00_2766 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
								BINT(((long) 14922)), BGl_string1959z00zz__socketz00,
								BGl_string1953z00zz__socketz00, BgL_socketz00_2431);
							FAILURE(BgL_auxz00_2766, BFALSE, BFALSE);
						}
					BgL_tmpz00_2762 =
						BGl_socketzd2localzf3z21zz__socketz00(BgL_auxz00_2763);
				}
				return BBOOL(BgL_tmpz00_2762);
			}
		}

	}



/* socket-host-address=? */
	BGL_EXPORTED_DEF bool_t
		BGl_socketzd2hostzd2addresszd3zf3z20zz__socketz00(obj_t BgL_socketz00_10,
		obj_t BgL_addrz00_11)
	{
		{	/* Llib/socket.scm 346 */
			return bgl_socket_host_addr_cmp(BgL_socketz00_10, BgL_addrz00_11);
		}

	}



/* &socket-host-address=? */
	obj_t BGl_z62socketzd2hostzd2addresszd3zf3z42zz__socketz00(obj_t
		BgL_envz00_2432, obj_t BgL_socketz00_2433, obj_t BgL_addrz00_2434)
	{
		{	/* Llib/socket.scm 346 */
			{	/* Llib/socket.scm 349 */
				bool_t BgL_tmpz00_2773;

				{	/* Llib/socket.scm 349 */
					obj_t BgL_auxz00_2781;
					obj_t BgL_auxz00_2774;

					if (STRINGP(BgL_addrz00_2434))
						{	/* Llib/socket.scm 349 */
							BgL_auxz00_2781 = BgL_addrz00_2434;
						}
					else
						{
							obj_t BgL_auxz00_2784;

							BgL_auxz00_2784 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
								BINT(((long) 15376)), BGl_string1960z00zz__socketz00,
								BGl_string1961z00zz__socketz00, BgL_addrz00_2434);
							FAILURE(BgL_auxz00_2784, BFALSE, BFALSE);
						}
					if (SOCKETP(BgL_socketz00_2433))
						{	/* Llib/socket.scm 349 */
							BgL_auxz00_2774 = BgL_socketz00_2433;
						}
					else
						{
							obj_t BgL_auxz00_2777;

							BgL_auxz00_2777 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
								BINT(((long) 15376)), BGl_string1960z00zz__socketz00,
								BGl_string1953z00zz__socketz00, BgL_socketz00_2433);
							FAILURE(BgL_auxz00_2777, BFALSE, BFALSE);
						}
					BgL_tmpz00_2773 =
						BGl_socketzd2hostzd2addresszd3zf3z20zz__socketz00(BgL_auxz00_2774,
						BgL_auxz00_2781);
				}
				return BBOOL(BgL_tmpz00_2773);
			}
		}

	}



/* socket-down? */
	BGL_EXPORTED_DEF bool_t BGl_socketzd2downzf3z21zz__socketz00(obj_t
		BgL_socketz00_12)
	{
		{	/* Llib/socket.scm 356 */
			return SOCKET_DOWNP(BgL_socketz00_12);
		}

	}



/* &socket-down? */
	obj_t BGl_z62socketzd2downzf3z43zz__socketz00(obj_t BgL_envz00_2435,
		obj_t BgL_socketz00_2436)
	{
		{	/* Llib/socket.scm 356 */
			{	/* Llib/socket.scm 357 */
				bool_t BgL_tmpz00_2791;

				{	/* Llib/socket.scm 357 */
					obj_t BgL_auxz00_2792;

					if (SOCKETP(BgL_socketz00_2436))
						{	/* Llib/socket.scm 357 */
							BgL_auxz00_2792 = BgL_socketz00_2436;
						}
					else
						{
							obj_t BgL_auxz00_2795;

							BgL_auxz00_2795 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
								BINT(((long) 15761)), BGl_string1962z00zz__socketz00,
								BGl_string1953z00zz__socketz00, BgL_socketz00_2436);
							FAILURE(BgL_auxz00_2795, BFALSE, BFALSE);
						}
					BgL_tmpz00_2791 =
						BGl_socketzd2downzf3z21zz__socketz00(BgL_auxz00_2792);
				}
				return BBOOL(BgL_tmpz00_2791);
			}
		}

	}



/* socket-port-number */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2portzd2numberz00zz__socketz00(obj_t
		BgL_socketz00_13)
	{
		{	/* Llib/socket.scm 362 */
			return BINT(SOCKET_PORT(BgL_socketz00_13));
		}

	}



/* &socket-port-number */
	obj_t BGl_z62socketzd2portzd2numberz62zz__socketz00(obj_t BgL_envz00_2437,
		obj_t BgL_socketz00_2438)
	{
		{	/* Llib/socket.scm 362 */
			{	/* Llib/socket.scm 363 */
				obj_t BgL_auxz00_2803;

				if (SOCKETP(BgL_socketz00_2438))
					{	/* Llib/socket.scm 363 */
						BgL_auxz00_2803 = BgL_socketz00_2438;
					}
				else
					{
						obj_t BgL_auxz00_2806;

						BgL_auxz00_2806 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 16069)), BGl_string1963z00zz__socketz00,
							BGl_string1953z00zz__socketz00, BgL_socketz00_2438);
						FAILURE(BgL_auxz00_2806, BFALSE, BFALSE);
					}
				return BGl_socketzd2portzd2numberz00zz__socketz00(BgL_auxz00_2803);
			}
		}

	}



/* socket-input */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2inputzd2zz__socketz00(obj_t
		BgL_socketz00_14)
	{
		{	/* Llib/socket.scm 368 */
			return SOCKET_INPUT(BgL_socketz00_14);
		}

	}



/* &socket-input */
	obj_t BGl_z62socketzd2inputzb0zz__socketz00(obj_t BgL_envz00_2439,
		obj_t BgL_socketz00_2440)
	{
		{	/* Llib/socket.scm 368 */
			{	/* Llib/socket.scm 369 */
				obj_t BgL_auxz00_2812;

				if (SOCKETP(BgL_socketz00_2440))
					{	/* Llib/socket.scm 369 */
						BgL_auxz00_2812 = BgL_socketz00_2440;
					}
				else
					{
						obj_t BgL_auxz00_2815;

						BgL_auxz00_2815 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 16371)), BGl_string1964z00zz__socketz00,
							BGl_string1953z00zz__socketz00, BgL_socketz00_2440);
						FAILURE(BgL_auxz00_2815, BFALSE, BFALSE);
					}
				return BGl_socketzd2inputzd2zz__socketz00(BgL_auxz00_2812);
			}
		}

	}



/* socket-output */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2outputzd2zz__socketz00(obj_t
		BgL_socketz00_15)
	{
		{	/* Llib/socket.scm 374 */
			return SOCKET_OUTPUT(BgL_socketz00_15);
		}

	}



/* &socket-output */
	obj_t BGl_z62socketzd2outputzb0zz__socketz00(obj_t BgL_envz00_2441,
		obj_t BgL_socketz00_2442)
	{
		{	/* Llib/socket.scm 374 */
			{	/* Llib/socket.scm 375 */
				obj_t BgL_auxz00_2821;

				if (SOCKETP(BgL_socketz00_2442))
					{	/* Llib/socket.scm 375 */
						BgL_auxz00_2821 = BgL_socketz00_2442;
					}
				else
					{
						obj_t BgL_auxz00_2824;

						BgL_auxz00_2824 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 16668)), BGl_string1965z00zz__socketz00,
							BGl_string1953z00zz__socketz00, BgL_socketz00_2442);
						FAILURE(BgL_auxz00_2824, BFALSE, BFALSE);
					}
				return BGl_socketzd2outputzd2zz__socketz00(BgL_auxz00_2821);
			}
		}

	}



/* _make-client-socket */
	obj_t BGl__makezd2clientzd2socketz00zz__socketz00(obj_t BgL_env1105z00_23,
		obj_t BgL_opt1104z00_22)
	{
		{	/* Llib/socket.scm 380 */
			{	/* Llib/socket.scm 380 */
				obj_t BgL_g1114z00_1151;
				obj_t BgL_g1115z00_1152;

				BgL_g1114z00_1151 = VECTOR_REF(BgL_opt1104z00_22, ((long) 0));
				BgL_g1115z00_1152 = VECTOR_REF(BgL_opt1104z00_22, ((long) 1));
				{	/* Llib/socket.scm 380 */
					obj_t BgL_domainz00_1153;

					BgL_domainz00_1153 = BGl_symbol1966z00zz__socketz00;
					{	/* Llib/socket.scm 380 */
						obj_t BgL_inbufz00_1154;

						BgL_inbufz00_1154 = BTRUE;
						{	/* Llib/socket.scm 380 */
							obj_t BgL_outbufz00_1155;

							BgL_outbufz00_1155 = BTRUE;
							{	/* Llib/socket.scm 380 */
								obj_t BgL_timeoutz00_1156;

								BgL_timeoutz00_1156 = BINT(((long) 0));
								{	/* Llib/socket.scm 380 */

									{
										long BgL_iz00_1157;

										BgL_iz00_1157 = ((long) 2);
									BgL_check1108z00_1158:
										if ((BgL_iz00_1157 == VECTOR_LENGTH(BgL_opt1104z00_22)))
											{	/* Llib/socket.scm 380 */
												BNIL;
											}
										else
											{	/* Llib/socket.scm 380 */
												bool_t BgL_test2191z00_2835;

												{	/* Llib/socket.scm 380 */
													obj_t BgL_arg1247z00_1164;

													BgL_arg1247z00_1164 =
														VECTOR_REF(BgL_opt1104z00_22, BgL_iz00_1157);
													BgL_test2191z00_2835 =
														CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1247z00_1164,
															BGl_list1968z00zz__socketz00));
												}
												if (BgL_test2191z00_2835)
													{
														long BgL_iz00_2839;

														BgL_iz00_2839 = (BgL_iz00_1157 + ((long) 2));
														BgL_iz00_1157 = BgL_iz00_2839;
														goto BgL_check1108z00_1158;
													}
												else
													{	/* Llib/socket.scm 380 */
														obj_t BgL_arg1246z00_1163;

														BgL_arg1246z00_1163 =
															VECTOR_REF(BgL_opt1104z00_22, BgL_iz00_1157);
														BGl_errorz00zz__errorz00
															(BGl_symbol1977z00zz__socketz00,
															BGl_string1979z00zz__socketz00,
															BgL_arg1246z00_1163);
													}
											}
									}
									{	/* Llib/socket.scm 380 */
										obj_t BgL_index1110z00_1165;

										{
											long BgL_iz00_1778;

											BgL_iz00_1778 = ((long) 2);
										BgL_search1107z00_1777:
											if ((BgL_iz00_1778 == VECTOR_LENGTH(BgL_opt1104z00_22)))
												{	/* Llib/socket.scm 380 */
													BgL_index1110z00_1165 = BINT(((long) -1));
												}
											else
												{	/* Llib/socket.scm 380 */
													if (
														(BgL_iz00_1778 ==
															(VECTOR_LENGTH(BgL_opt1104z00_22) - ((long) 1))))
														{	/* Llib/socket.scm 380 */
															BgL_index1110z00_1165 =
																BGl_errorz00zz__errorz00
																(BGl_symbol1977z00zz__socketz00,
																BGl_string1980z00zz__socketz00,
																BINT(VECTOR_LENGTH(BgL_opt1104z00_22)));
														}
													else
														{	/* Llib/socket.scm 380 */
															obj_t BgL_vz00_1791;

															BgL_vz00_1791 =
																VECTOR_REF(BgL_opt1104z00_22, BgL_iz00_1778);
															if (
																(BgL_vz00_1791 ==
																	BGl_keyword1969z00zz__socketz00))
																{	/* Llib/socket.scm 380 */
																	BgL_index1110z00_1165 =
																		BINT((BgL_iz00_1778 + ((long) 1)));
																}
															else
																{
																	long BgL_iz00_2859;

																	BgL_iz00_2859 = (BgL_iz00_1778 + ((long) 2));
																	BgL_iz00_1778 = BgL_iz00_2859;
																	goto BgL_search1107z00_1777;
																}
														}
												}
										}
										{	/* Llib/socket.scm 380 */
											bool_t BgL_test2195z00_2861;

											{	/* Llib/socket.scm 380 */
												long BgL_n1z00_1798;

												{	/* Llib/socket.scm 380 */
													obj_t BgL_tmpz00_2862;

													if (INTEGERP(BgL_index1110z00_1165))
														{	/* Llib/socket.scm 380 */
															BgL_tmpz00_2862 = BgL_index1110z00_1165;
														}
													else
														{
															obj_t BgL_auxz00_2865;

															BgL_auxz00_2865 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 16917)),
																BGl_string1981z00zz__socketz00,
																BGl_string1982z00zz__socketz00,
																BgL_index1110z00_1165);
															FAILURE(BgL_auxz00_2865, BFALSE, BFALSE);
														}
													BgL_n1z00_1798 = (long) CINT(BgL_tmpz00_2862);
												}
												BgL_test2195z00_2861 = (BgL_n1z00_1798 >= ((long) 0));
											}
											if (BgL_test2195z00_2861)
												{
													long BgL_auxz00_2871;

													{	/* Llib/socket.scm 380 */
														obj_t BgL_tmpz00_2872;

														if (INTEGERP(BgL_index1110z00_1165))
															{	/* Llib/socket.scm 380 */
																BgL_tmpz00_2872 = BgL_index1110z00_1165;
															}
														else
															{
																obj_t BgL_auxz00_2875;

																BgL_auxz00_2875 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1955z00zz__socketz00,
																	BINT(((long) 16917)),
																	BGl_string1981z00zz__socketz00,
																	BGl_string1982z00zz__socketz00,
																	BgL_index1110z00_1165);
																FAILURE(BgL_auxz00_2875, BFALSE, BFALSE);
															}
														BgL_auxz00_2871 = (long) CINT(BgL_tmpz00_2872);
													}
													BgL_domainz00_1153 =
														VECTOR_REF(BgL_opt1104z00_22, BgL_auxz00_2871);
												}
											else
												{	/* Llib/socket.scm 380 */
													BFALSE;
												}
										}
									}
									{	/* Llib/socket.scm 380 */
										obj_t BgL_index1111z00_1167;

										{
											long BgL_iz00_1801;

											BgL_iz00_1801 = ((long) 2);
										BgL_search1107z00_1800:
											if ((BgL_iz00_1801 == VECTOR_LENGTH(BgL_opt1104z00_22)))
												{	/* Llib/socket.scm 380 */
													BgL_index1111z00_1167 = BINT(((long) -1));
												}
											else
												{	/* Llib/socket.scm 380 */
													if (
														(BgL_iz00_1801 ==
															(VECTOR_LENGTH(BgL_opt1104z00_22) - ((long) 1))))
														{	/* Llib/socket.scm 380 */
															BgL_index1111z00_1167 =
																BGl_errorz00zz__errorz00
																(BGl_symbol1977z00zz__socketz00,
																BGl_string1980z00zz__socketz00,
																BINT(VECTOR_LENGTH(BgL_opt1104z00_22)));
														}
													else
														{	/* Llib/socket.scm 380 */
															obj_t BgL_vz00_1814;

															BgL_vz00_1814 =
																VECTOR_REF(BgL_opt1104z00_22, BgL_iz00_1801);
															if (
																(BgL_vz00_1814 ==
																	BGl_keyword1971z00zz__socketz00))
																{	/* Llib/socket.scm 380 */
																	BgL_index1111z00_1167 =
																		BINT((BgL_iz00_1801 + ((long) 1)));
																}
															else
																{
																	long BgL_iz00_2897;

																	BgL_iz00_2897 = (BgL_iz00_1801 + ((long) 2));
																	BgL_iz00_1801 = BgL_iz00_2897;
																	goto BgL_search1107z00_1800;
																}
														}
												}
										}
										{	/* Llib/socket.scm 380 */
											bool_t BgL_test2201z00_2899;

											{	/* Llib/socket.scm 380 */
												long BgL_n1z00_1821;

												{	/* Llib/socket.scm 380 */
													obj_t BgL_tmpz00_2900;

													if (INTEGERP(BgL_index1111z00_1167))
														{	/* Llib/socket.scm 380 */
															BgL_tmpz00_2900 = BgL_index1111z00_1167;
														}
													else
														{
															obj_t BgL_auxz00_2903;

															BgL_auxz00_2903 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 16917)),
																BGl_string1981z00zz__socketz00,
																BGl_string1982z00zz__socketz00,
																BgL_index1111z00_1167);
															FAILURE(BgL_auxz00_2903, BFALSE, BFALSE);
														}
													BgL_n1z00_1821 = (long) CINT(BgL_tmpz00_2900);
												}
												BgL_test2201z00_2899 = (BgL_n1z00_1821 >= ((long) 0));
											}
											if (BgL_test2201z00_2899)
												{
													long BgL_auxz00_2909;

													{	/* Llib/socket.scm 380 */
														obj_t BgL_tmpz00_2910;

														if (INTEGERP(BgL_index1111z00_1167))
															{	/* Llib/socket.scm 380 */
																BgL_tmpz00_2910 = BgL_index1111z00_1167;
															}
														else
															{
																obj_t BgL_auxz00_2913;

																BgL_auxz00_2913 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1955z00zz__socketz00,
																	BINT(((long) 16917)),
																	BGl_string1981z00zz__socketz00,
																	BGl_string1982z00zz__socketz00,
																	BgL_index1111z00_1167);
																FAILURE(BgL_auxz00_2913, BFALSE, BFALSE);
															}
														BgL_auxz00_2909 = (long) CINT(BgL_tmpz00_2910);
													}
													BgL_inbufz00_1154 =
														VECTOR_REF(BgL_opt1104z00_22, BgL_auxz00_2909);
												}
											else
												{	/* Llib/socket.scm 380 */
													BFALSE;
												}
										}
									}
									{	/* Llib/socket.scm 380 */
										obj_t BgL_index1112z00_1169;

										{
											long BgL_iz00_1824;

											BgL_iz00_1824 = ((long) 2);
										BgL_search1107z00_1823:
											if ((BgL_iz00_1824 == VECTOR_LENGTH(BgL_opt1104z00_22)))
												{	/* Llib/socket.scm 380 */
													BgL_index1112z00_1169 = BINT(((long) -1));
												}
											else
												{	/* Llib/socket.scm 380 */
													if (
														(BgL_iz00_1824 ==
															(VECTOR_LENGTH(BgL_opt1104z00_22) - ((long) 1))))
														{	/* Llib/socket.scm 380 */
															BgL_index1112z00_1169 =
																BGl_errorz00zz__errorz00
																(BGl_symbol1977z00zz__socketz00,
																BGl_string1980z00zz__socketz00,
																BINT(VECTOR_LENGTH(BgL_opt1104z00_22)));
														}
													else
														{	/* Llib/socket.scm 380 */
															obj_t BgL_vz00_1837;

															BgL_vz00_1837 =
																VECTOR_REF(BgL_opt1104z00_22, BgL_iz00_1824);
															if (
																(BgL_vz00_1837 ==
																	BGl_keyword1973z00zz__socketz00))
																{	/* Llib/socket.scm 380 */
																	BgL_index1112z00_1169 =
																		BINT((BgL_iz00_1824 + ((long) 1)));
																}
															else
																{
																	long BgL_iz00_2935;

																	BgL_iz00_2935 = (BgL_iz00_1824 + ((long) 2));
																	BgL_iz00_1824 = BgL_iz00_2935;
																	goto BgL_search1107z00_1823;
																}
														}
												}
										}
										{	/* Llib/socket.scm 380 */
											bool_t BgL_test2207z00_2937;

											{	/* Llib/socket.scm 380 */
												long BgL_n1z00_1844;

												{	/* Llib/socket.scm 380 */
													obj_t BgL_tmpz00_2938;

													if (INTEGERP(BgL_index1112z00_1169))
														{	/* Llib/socket.scm 380 */
															BgL_tmpz00_2938 = BgL_index1112z00_1169;
														}
													else
														{
															obj_t BgL_auxz00_2941;

															BgL_auxz00_2941 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 16917)),
																BGl_string1981z00zz__socketz00,
																BGl_string1982z00zz__socketz00,
																BgL_index1112z00_1169);
															FAILURE(BgL_auxz00_2941, BFALSE, BFALSE);
														}
													BgL_n1z00_1844 = (long) CINT(BgL_tmpz00_2938);
												}
												BgL_test2207z00_2937 = (BgL_n1z00_1844 >= ((long) 0));
											}
											if (BgL_test2207z00_2937)
												{
													long BgL_auxz00_2947;

													{	/* Llib/socket.scm 380 */
														obj_t BgL_tmpz00_2948;

														if (INTEGERP(BgL_index1112z00_1169))
															{	/* Llib/socket.scm 380 */
																BgL_tmpz00_2948 = BgL_index1112z00_1169;
															}
														else
															{
																obj_t BgL_auxz00_2951;

																BgL_auxz00_2951 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1955z00zz__socketz00,
																	BINT(((long) 16917)),
																	BGl_string1981z00zz__socketz00,
																	BGl_string1982z00zz__socketz00,
																	BgL_index1112z00_1169);
																FAILURE(BgL_auxz00_2951, BFALSE, BFALSE);
															}
														BgL_auxz00_2947 = (long) CINT(BgL_tmpz00_2948);
													}
													BgL_outbufz00_1155 =
														VECTOR_REF(BgL_opt1104z00_22, BgL_auxz00_2947);
												}
											else
												{	/* Llib/socket.scm 380 */
													BFALSE;
												}
										}
									}
									{	/* Llib/socket.scm 380 */
										obj_t BgL_index1113z00_1171;

										{
											long BgL_iz00_1847;

											BgL_iz00_1847 = ((long) 2);
										BgL_search1107z00_1846:
											if ((BgL_iz00_1847 == VECTOR_LENGTH(BgL_opt1104z00_22)))
												{	/* Llib/socket.scm 380 */
													BgL_index1113z00_1171 = BINT(((long) -1));
												}
											else
												{	/* Llib/socket.scm 380 */
													if (
														(BgL_iz00_1847 ==
															(VECTOR_LENGTH(BgL_opt1104z00_22) - ((long) 1))))
														{	/* Llib/socket.scm 380 */
															BgL_index1113z00_1171 =
																BGl_errorz00zz__errorz00
																(BGl_symbol1977z00zz__socketz00,
																BGl_string1980z00zz__socketz00,
																BINT(VECTOR_LENGTH(BgL_opt1104z00_22)));
														}
													else
														{	/* Llib/socket.scm 380 */
															obj_t BgL_vz00_1860;

															BgL_vz00_1860 =
																VECTOR_REF(BgL_opt1104z00_22, BgL_iz00_1847);
															if (
																(BgL_vz00_1860 ==
																	BGl_keyword1975z00zz__socketz00))
																{	/* Llib/socket.scm 380 */
																	BgL_index1113z00_1171 =
																		BINT((BgL_iz00_1847 + ((long) 1)));
																}
															else
																{
																	long BgL_iz00_2973;

																	BgL_iz00_2973 = (BgL_iz00_1847 + ((long) 2));
																	BgL_iz00_1847 = BgL_iz00_2973;
																	goto BgL_search1107z00_1846;
																}
														}
												}
										}
										{	/* Llib/socket.scm 380 */
											bool_t BgL_test2213z00_2975;

											{	/* Llib/socket.scm 380 */
												long BgL_n1z00_1867;

												{	/* Llib/socket.scm 380 */
													obj_t BgL_tmpz00_2976;

													if (INTEGERP(BgL_index1113z00_1171))
														{	/* Llib/socket.scm 380 */
															BgL_tmpz00_2976 = BgL_index1113z00_1171;
														}
													else
														{
															obj_t BgL_auxz00_2979;

															BgL_auxz00_2979 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 16917)),
																BGl_string1981z00zz__socketz00,
																BGl_string1982z00zz__socketz00,
																BgL_index1113z00_1171);
															FAILURE(BgL_auxz00_2979, BFALSE, BFALSE);
														}
													BgL_n1z00_1867 = (long) CINT(BgL_tmpz00_2976);
												}
												BgL_test2213z00_2975 = (BgL_n1z00_1867 >= ((long) 0));
											}
											if (BgL_test2213z00_2975)
												{
													long BgL_auxz00_2985;

													{	/* Llib/socket.scm 380 */
														obj_t BgL_tmpz00_2986;

														if (INTEGERP(BgL_index1113z00_1171))
															{	/* Llib/socket.scm 380 */
																BgL_tmpz00_2986 = BgL_index1113z00_1171;
															}
														else
															{
																obj_t BgL_auxz00_2989;

																BgL_auxz00_2989 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string1955z00zz__socketz00,
																	BINT(((long) 16917)),
																	BGl_string1981z00zz__socketz00,
																	BGl_string1982z00zz__socketz00,
																	BgL_index1113z00_1171);
																FAILURE(BgL_auxz00_2989, BFALSE, BFALSE);
															}
														BgL_auxz00_2985 = (long) CINT(BgL_tmpz00_2986);
													}
													BgL_timeoutz00_1156 =
														VECTOR_REF(BgL_opt1104z00_22, BgL_auxz00_2985);
												}
											else
												{	/* Llib/socket.scm 380 */
													BFALSE;
												}
										}
									}
									{	/* Llib/socket.scm 380 */
										obj_t BgL_arg1252z00_1173;
										obj_t BgL_arg1253z00_1174;

										BgL_arg1252z00_1173 =
											VECTOR_REF(BgL_opt1104z00_22, ((long) 0));
										BgL_arg1253z00_1174 =
											VECTOR_REF(BgL_opt1104z00_22, ((long) 1));
										{	/* Llib/socket.scm 380 */
											obj_t BgL_domainz00_1175;

											BgL_domainz00_1175 = BgL_domainz00_1153;
											{	/* Llib/socket.scm 380 */
												obj_t BgL_inbufz00_1176;

												BgL_inbufz00_1176 = BgL_inbufz00_1154;
												{	/* Llib/socket.scm 380 */
													obj_t BgL_outbufz00_1177;

													BgL_outbufz00_1177 = BgL_outbufz00_1155;
													{	/* Llib/socket.scm 380 */
														obj_t BgL_timeoutz00_1178;

														BgL_timeoutz00_1178 = BgL_timeoutz00_1156;
														{	/* Llib/socket.scm 380 */
															obj_t BgL_res1715z00_1879;

															{	/* Llib/socket.scm 380 */
																obj_t BgL_hostz00_1869;
																int BgL_portz00_1870;

																if (STRINGP(BgL_arg1252z00_1173))
																	{	/* Llib/socket.scm 380 */
																		BgL_hostz00_1869 = BgL_arg1252z00_1173;
																	}
																else
																	{
																		obj_t BgL_auxz00_2999;

																		BgL_auxz00_2999 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string1955z00zz__socketz00,
																			BINT(((long) 16917)),
																			BGl_string1981z00zz__socketz00,
																			BGl_string1961z00zz__socketz00,
																			BgL_arg1252z00_1173);
																		FAILURE(BgL_auxz00_2999, BFALSE, BFALSE);
																	}
																{	/* Llib/socket.scm 380 */
																	obj_t BgL_tmpz00_3003;

																	if (INTEGERP(BgL_arg1253z00_1174))
																		{	/* Llib/socket.scm 380 */
																			BgL_tmpz00_3003 = BgL_arg1253z00_1174;
																		}
																	else
																		{
																			obj_t BgL_auxz00_3006;

																			BgL_auxz00_3006 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string1955z00zz__socketz00,
																				BINT(((long) 16917)),
																				BGl_string1981z00zz__socketz00,
																				BGl_string1982z00zz__socketz00,
																				BgL_arg1253z00_1174);
																			FAILURE(BgL_auxz00_3006, BFALSE, BFALSE);
																		}
																	BgL_portz00_1870 = CINT(BgL_tmpz00_3003);
																}
																BGl_z52socketzd2initz12z92zz__socketz00();
																{	/* Llib/socket.scm 382 */
																	obj_t BgL_inbufz00_1871;
																	obj_t BgL_outbufz00_1872;

																	BgL_inbufz00_1871 =
																		BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
																		(BGl_string1983z00zz__socketz00,
																		BgL_inbufz00_1176, (int) (((long) 512)));
																	BgL_outbufz00_1872 =
																		BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
																		(BGl_string1983z00zz__socketz00,
																		BgL_outbufz00_1177, (int) (((long) 1024)));
																	if ((BgL_domainz00_1175 ==
																			BGl_symbol1966z00zz__socketz00))
																		{	/* Llib/socket.scm 386 */
																			int BgL_tmpz00_3018;

																			{	/* Llib/socket.scm 386 */
																				obj_t BgL_tmpz00_3019;

																				if (INTEGERP(BgL_timeoutz00_1178))
																					{	/* Llib/socket.scm 386 */
																						BgL_tmpz00_3019 =
																							BgL_timeoutz00_1178;
																					}
																				else
																					{
																						obj_t BgL_auxz00_3022;

																						BgL_auxz00_3022 =
																							BGl_typezd2errorzd2zz__errorz00
																							(BGl_string1955z00zz__socketz00,
																							BINT(((long) 17231)),
																							BGl_string1981z00zz__socketz00,
																							BGl_string1982z00zz__socketz00,
																							BgL_timeoutz00_1178);
																						FAILURE(BgL_auxz00_3022, BFALSE,
																							BFALSE);
																					}
																				BgL_tmpz00_3018 = CINT(BgL_tmpz00_3019);
																			}
																			BgL_res1715z00_1879 =
																				bgl_make_client_socket(BgL_hostz00_1869,
																				BgL_portz00_1870, BgL_tmpz00_3018,
																				BgL_inbufz00_1871, BgL_outbufz00_1872);
																		}
																	else
																		{	/* Llib/socket.scm 384 */
																			bool_t BgL_test2220z00_3028;

																			{	/* Llib/socket.scm 384 */
																				bool_t BgL__ortest_1040z00_1876;

																				BgL__ortest_1040z00_1876 =
																					(BgL_domainz00_1175 ==
																					BGl_symbol1984z00zz__socketz00);
																				if (BgL__ortest_1040z00_1876)
																					{	/* Llib/socket.scm 384 */
																						BgL_test2220z00_3028 =
																							BgL__ortest_1040z00_1876;
																					}
																				else
																					{	/* Llib/socket.scm 384 */
																						BgL_test2220z00_3028 =
																							(BgL_domainz00_1175 ==
																							BGl_symbol1986z00zz__socketz00);
																					}
																			}
																			if (BgL_test2220z00_3028)
																				{	/* Llib/socket.scm 389 */
																					int BgL_tmpz00_3032;

																					{	/* Llib/socket.scm 389 */
																						obj_t BgL_tmpz00_3033;

																						if (INTEGERP(BgL_timeoutz00_1178))
																							{	/* Llib/socket.scm 389 */
																								BgL_tmpz00_3033 =
																									BgL_timeoutz00_1178;
																							}
																						else
																							{
																								obj_t BgL_auxz00_3036;

																								BgL_auxz00_3036 =
																									BGl_typezd2errorzd2zz__errorz00
																									(BGl_string1955z00zz__socketz00,
																									BINT(((long) 17326)),
																									BGl_string1981z00zz__socketz00,
																									BGl_string1982z00zz__socketz00,
																									BgL_timeoutz00_1178);
																								FAILURE(BgL_auxz00_3036, BFALSE,
																									BFALSE);
																							}
																						BgL_tmpz00_3032 =
																							CINT(BgL_tmpz00_3033);
																					}
																					BgL_res1715z00_1879 =
																						bgl_make_unix_socket
																						(BgL_hostz00_1869, BgL_tmpz00_3032,
																						BgL_inbufz00_1871,
																						BgL_outbufz00_1872);
																				}
																			else
																				{	/* Llib/socket.scm 392 */
																					obj_t BgL_aux1852z00_2547;

																					BgL_aux1852z00_2547 =
																						BGl_errorz00zz__errorz00
																						(BGl_string1983z00zz__socketz00,
																						BGl_string1988z00zz__socketz00,
																						BgL_domainz00_1175);
																					if (SOCKETP(BgL_aux1852z00_2547))
																						{	/* Llib/socket.scm 392 */
																							BgL_res1715z00_1879 =
																								BgL_aux1852z00_2547;
																						}
																					else
																						{
																							obj_t BgL_auxz00_3045;

																							BgL_auxz00_3045 =
																								BGl_typezd2errorzd2zz__errorz00
																								(BGl_string1955z00zz__socketz00,
																								BINT(((long) 17432)),
																								BGl_string1981z00zz__socketz00,
																								BGl_string1953z00zz__socketz00,
																								BgL_aux1852z00_2547);
																							FAILURE(BgL_auxz00_3045, BFALSE,
																								BFALSE);
															}}}}}
															return BgL_res1715z00_1879;
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
				}
			}
		}

	}



/* make-client-socket */
	BGL_EXPORTED_DEF obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t
		BgL_hostz00_16, int BgL_portz00_17, obj_t BgL_domainz00_18,
		obj_t BgL_inbufz00_19, obj_t BgL_outbufz00_20, obj_t BgL_timeoutz00_21)
	{
		{	/* Llib/socket.scm 380 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			{	/* Llib/socket.scm 382 */
				obj_t BgL_inbufz00_1880;
				obj_t BgL_outbufz00_1881;

				BgL_inbufz00_1880 =
					BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
					(BGl_string1983z00zz__socketz00, BgL_inbufz00_19,
					(int) (((long) 512)));
				BgL_outbufz00_1881 =
					BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
					(BGl_string1983z00zz__socketz00, BgL_outbufz00_20,
					(int) (((long) 1024)));
				if ((BgL_domainz00_18 == BGl_symbol1966z00zz__socketz00))
					{	/* Llib/socket.scm 384 */
						return
							bgl_make_client_socket(BgL_hostz00_16, BgL_portz00_17,
							CINT(BgL_timeoutz00_21), BgL_inbufz00_1880, BgL_outbufz00_1881);
					}
				else
					{	/* Llib/socket.scm 384 */
						bool_t BgL_test2225z00_3058;

						{	/* Llib/socket.scm 384 */
							bool_t BgL__ortest_1040z00_1885;

							BgL__ortest_1040z00_1885 =
								(BgL_domainz00_18 == BGl_symbol1984z00zz__socketz00);
							if (BgL__ortest_1040z00_1885)
								{	/* Llib/socket.scm 384 */
									BgL_test2225z00_3058 = BgL__ortest_1040z00_1885;
								}
							else
								{	/* Llib/socket.scm 384 */
									BgL_test2225z00_3058 =
										(BgL_domainz00_18 == BGl_symbol1986z00zz__socketz00);
								}
						}
						if (BgL_test2225z00_3058)
							{	/* Llib/socket.scm 384 */
								return
									bgl_make_unix_socket(BgL_hostz00_16,
									CINT(BgL_timeoutz00_21), BgL_inbufz00_1880,
									BgL_outbufz00_1881);
							}
						else
							{	/* Llib/socket.scm 384 */
								return
									BGl_errorz00zz__errorz00(BGl_string1983z00zz__socketz00,
									BGl_string1988z00zz__socketz00, BgL_domainz00_18);
							}
					}
			}
		}

	}



/* make-server-socket */
	BGL_EXPORTED_DEF obj_t BGl_makezd2serverzd2socketz00zz__socketz00(obj_t
		BgL_portz00_24)
	{
		{	/* Llib/socket.scm 397 */
			{	/* Llib/socket.scm 226 */
				obj_t BgL_dsssl1116z00_1194;

				BgL_dsssl1116z00_1194 = BgL_portz00_24;
				{	/* Llib/socket.scm 226 */
					obj_t BgL_portz00_1195;

					{	/* Llib/socket.scm 226 */
						bool_t BgL_test2227z00_3065;

						if (NULLP(BgL_dsssl1116z00_1194))
							{	/* Llib/socket.scm 226 */
								BgL_test2227z00_3065 = ((bool_t) 1);
							}
						else
							{	/* Llib/socket.scm 226 */
								BgL_test2227z00_3065 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
										(BgL_dsssl1116z00_1194), BGl_list1989z00zz__socketz00));
							}
						if (BgL_test2227z00_3065)
							{	/* Llib/socket.scm 226 */
								BgL_portz00_1195 = BINT(((long) 0));
							}
						else
							{	/* Llib/socket.scm 226 */
								obj_t BgL_tmp1117z00_1215;

								BgL_tmp1117z00_1215 = CAR(BgL_dsssl1116z00_1194);
								BgL_dsssl1116z00_1194 = CDR(BgL_dsssl1116z00_1194);
								BgL_portz00_1195 = BgL_tmp1117z00_1215;
							}
					}
					{	/* Llib/socket.scm 226 */
						obj_t BgL_namez00_1196;

						BgL_namez00_1196 =
							BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dsssl1116z00_1194,
							BGl_keyword1994z00zz__socketz00, BFALSE);
						{	/* Llib/socket.scm 226 */
							obj_t BgL_backlogz00_1197;

							BgL_backlogz00_1197 =
								BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00
								(BgL_dsssl1116z00_1194, BGl_keyword1992z00zz__socketz00,
								BINT(((long) 5)));
							{	/* Llib/socket.scm 226 */
								obj_t BgL_ipv6z00_1198;

								BgL_ipv6z00_1198 =
									BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00
									(BgL_dsssl1116z00_1194, BGl_keyword1990z00zz__socketz00,
									BFALSE);
								if (NULLP(BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00
										(BgL_dsssl1116z00_1194, BGl_list1989z00zz__socketz00)))
									{	/* Llib/socket.scm 226 */
										BGl_z52socketzd2initz12z92zz__socketz00();
										return
											bgl_make_server_socket(BgL_namez00_1196,
											CINT(BgL_portz00_1195),
											CINT(BgL_backlogz00_1197), CBOOL(BgL_ipv6z00_1198));
									}
								else
									{	/* Llib/socket.scm 226 */
										obj_t BgL_arg1273z00_1201;

										{	/* Llib/socket.scm 226 */
											obj_t BgL_arg1274z00_1202;

											{	/* Llib/socket.scm 226 */
												obj_t BgL_arg1277z00_1205;

												BgL_arg1277z00_1205 =
													BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00
													(BgL_dsssl1116z00_1194, BGl_list1989z00zz__socketz00);
												{	/* Llib/socket.scm 226 */
													obj_t BgL_list1278z00_1206;

													BgL_list1278z00_1206 =
														MAKE_YOUNG_PAIR(BgL_arg1277z00_1205, BNIL);
													BgL_arg1274z00_1202 =
														BGl_mapz00zz__r4_control_features_6_9z00
														(BGl_proc1996z00zz__socketz00,
														BgL_list1278z00_1206);
												}
											}
											{	/* Llib/socket.scm 226 */
												obj_t BgL_list1275z00_1203;

												BgL_list1275z00_1203 =
													MAKE_YOUNG_PAIR(BgL_arg1274z00_1202, BNIL);
												BgL_arg1273z00_1201 =
													BGl_applyz00zz__r4_control_features_6_9z00
													(BGl_stringzd2appendzd2envz00zz__r4_strings_6_7z00,
													BGl_string1997z00zz__socketz00, BgL_list1275z00_1203);
											}
										}
										return
											BGl_errorz00zz__errorz00(BGl_string1998z00zz__socketz00,
											BgL_arg1273z00_1201, BgL_dsssl1116z00_1194);
									}
							}
						}
					}
				}
			}
		}

	}



/* &make-server-socket */
	obj_t BGl_z62makezd2serverzd2socketz62zz__socketz00(obj_t BgL_envz00_2444,
		obj_t BgL_portz00_2445)
	{
		{	/* Llib/socket.scm 397 */
			return BGl_makezd2serverzd2socketz00zz__socketz00(BgL_portz00_2445);
		}

	}



/* &<@anonymous:1279> */
	obj_t BGl_z62zc3z04anonymousza31279ze3ze5zz__socketz00(obj_t BgL_envz00_2446,
		obj_t BgL_vz00_2447)
	{
		{	/* Llib/socket.scm 226 */
			{	/* Llib/socket.scm 226 */
				obj_t BgL_list1280z00_2650;

				BgL_list1280z00_2650 = MAKE_YOUNG_PAIR(BgL_vz00_2447, BNIL);
				return
					BGl_formatz00zz__r4_output_6_10_3z00(BGl_string1999z00zz__socketz00,
					BgL_list1280z00_2650);
			}
		}

	}



/* _socket-accept */
	obj_t BGl__socketzd2acceptzd2zz__socketz00(obj_t BgL_env1119z00_30,
		obj_t BgL_opt1118z00_29)
	{
		{	/* Llib/socket.scm 404 */
			{	/* Llib/socket.scm 404 */
				obj_t BgL_g1127z00_1222;

				BgL_g1127z00_1222 = VECTOR_REF(BgL_opt1118z00_29, ((long) 0));
				{	/* Llib/socket.scm 404 */
					obj_t BgL_errpz00_1223;

					BgL_errpz00_1223 = BTRUE;
					{	/* Llib/socket.scm 404 */
						obj_t BgL_inbufz00_1224;

						BgL_inbufz00_1224 = BTRUE;
						{	/* Llib/socket.scm 404 */
							obj_t BgL_outbufz00_1225;

							BgL_outbufz00_1225 = BTRUE;
							{	/* Llib/socket.scm 404 */

								{
									long BgL_iz00_1226;

									BgL_iz00_1226 = ((long) 1);
								BgL_check1122z00_1227:
									if ((BgL_iz00_1226 == VECTOR_LENGTH(BgL_opt1118z00_29)))
										{	/* Llib/socket.scm 404 */
											BNIL;
										}
									else
										{	/* Llib/socket.scm 404 */
											bool_t BgL_test2231z00_3099;

											{	/* Llib/socket.scm 404 */
												obj_t BgL_arg1292z00_1233;

												BgL_arg1292z00_1233 =
													VECTOR_REF(BgL_opt1118z00_29, BgL_iz00_1226);
												BgL_test2231z00_3099 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1292z00_1233, BGl_list2000z00zz__socketz00));
											}
											if (BgL_test2231z00_3099)
												{
													long BgL_iz00_3103;

													BgL_iz00_3103 = (BgL_iz00_1226 + ((long) 2));
													BgL_iz00_1226 = BgL_iz00_3103;
													goto BgL_check1122z00_1227;
												}
											else
												{	/* Llib/socket.scm 404 */
													obj_t BgL_arg1291z00_1232;

													BgL_arg1291z00_1232 =
														VECTOR_REF(BgL_opt1118z00_29, BgL_iz00_1226);
													BGl_errorz00zz__errorz00
														(BGl_symbol2003z00zz__socketz00,
														BGl_string1979z00zz__socketz00,
														BgL_arg1291z00_1232);
												}
										}
								}
								{	/* Llib/socket.scm 404 */
									obj_t BgL_index1124z00_1234;

									{
										long BgL_iz00_1918;

										BgL_iz00_1918 = ((long) 1);
									BgL_search1121z00_1917:
										if ((BgL_iz00_1918 == VECTOR_LENGTH(BgL_opt1118z00_29)))
											{	/* Llib/socket.scm 404 */
												BgL_index1124z00_1234 = BINT(((long) -1));
											}
										else
											{	/* Llib/socket.scm 404 */
												if (
													(BgL_iz00_1918 ==
														(VECTOR_LENGTH(BgL_opt1118z00_29) - ((long) 1))))
													{	/* Llib/socket.scm 404 */
														BgL_index1124z00_1234 =
															BGl_errorz00zz__errorz00
															(BGl_symbol2003z00zz__socketz00,
															BGl_string2005z00zz__socketz00,
															BINT(VECTOR_LENGTH(BgL_opt1118z00_29)));
													}
												else
													{	/* Llib/socket.scm 404 */
														obj_t BgL_vz00_1931;

														BgL_vz00_1931 =
															VECTOR_REF(BgL_opt1118z00_29, BgL_iz00_1918);
														if (
															(BgL_vz00_1931 ==
																BGl_keyword2001z00zz__socketz00))
															{	/* Llib/socket.scm 404 */
																BgL_index1124z00_1234 =
																	BINT((BgL_iz00_1918 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_3123;

																BgL_iz00_3123 = (BgL_iz00_1918 + ((long) 2));
																BgL_iz00_1918 = BgL_iz00_3123;
																goto BgL_search1121z00_1917;
															}
													}
											}
									}
									{	/* Llib/socket.scm 404 */
										bool_t BgL_test2235z00_3125;

										{	/* Llib/socket.scm 404 */
											long BgL_n1z00_1938;

											{	/* Llib/socket.scm 404 */
												obj_t BgL_tmpz00_3126;

												if (INTEGERP(BgL_index1124z00_1234))
													{	/* Llib/socket.scm 404 */
														BgL_tmpz00_3126 = BgL_index1124z00_1234;
													}
												else
													{
														obj_t BgL_auxz00_3129;

														BgL_auxz00_3129 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1955z00zz__socketz00,
															BINT(((long) 18105)),
															BGl_string2006z00zz__socketz00,
															BGl_string1982z00zz__socketz00,
															BgL_index1124z00_1234);
														FAILURE(BgL_auxz00_3129, BFALSE, BFALSE);
													}
												BgL_n1z00_1938 = (long) CINT(BgL_tmpz00_3126);
											}
											BgL_test2235z00_3125 = (BgL_n1z00_1938 >= ((long) 0));
										}
										if (BgL_test2235z00_3125)
											{
												long BgL_auxz00_3135;

												{	/* Llib/socket.scm 404 */
													obj_t BgL_tmpz00_3136;

													if (INTEGERP(BgL_index1124z00_1234))
														{	/* Llib/socket.scm 404 */
															BgL_tmpz00_3136 = BgL_index1124z00_1234;
														}
													else
														{
															obj_t BgL_auxz00_3139;

															BgL_auxz00_3139 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 18105)),
																BGl_string2006z00zz__socketz00,
																BGl_string1982z00zz__socketz00,
																BgL_index1124z00_1234);
															FAILURE(BgL_auxz00_3139, BFALSE, BFALSE);
														}
													BgL_auxz00_3135 = (long) CINT(BgL_tmpz00_3136);
												}
												BgL_errpz00_1223 =
													VECTOR_REF(BgL_opt1118z00_29, BgL_auxz00_3135);
											}
										else
											{	/* Llib/socket.scm 404 */
												BFALSE;
											}
									}
								}
								{	/* Llib/socket.scm 404 */
									obj_t BgL_index1125z00_1236;

									{
										long BgL_iz00_1941;

										BgL_iz00_1941 = ((long) 1);
									BgL_search1121z00_1940:
										if ((BgL_iz00_1941 == VECTOR_LENGTH(BgL_opt1118z00_29)))
											{	/* Llib/socket.scm 404 */
												BgL_index1125z00_1236 = BINT(((long) -1));
											}
										else
											{	/* Llib/socket.scm 404 */
												if (
													(BgL_iz00_1941 ==
														(VECTOR_LENGTH(BgL_opt1118z00_29) - ((long) 1))))
													{	/* Llib/socket.scm 404 */
														BgL_index1125z00_1236 =
															BGl_errorz00zz__errorz00
															(BGl_symbol2003z00zz__socketz00,
															BGl_string2005z00zz__socketz00,
															BINT(VECTOR_LENGTH(BgL_opt1118z00_29)));
													}
												else
													{	/* Llib/socket.scm 404 */
														obj_t BgL_vz00_1954;

														BgL_vz00_1954 =
															VECTOR_REF(BgL_opt1118z00_29, BgL_iz00_1941);
														if (
															(BgL_vz00_1954 ==
																BGl_keyword1971z00zz__socketz00))
															{	/* Llib/socket.scm 404 */
																BgL_index1125z00_1236 =
																	BINT((BgL_iz00_1941 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_3161;

																BgL_iz00_3161 = (BgL_iz00_1941 + ((long) 2));
																BgL_iz00_1941 = BgL_iz00_3161;
																goto BgL_search1121z00_1940;
															}
													}
											}
									}
									{	/* Llib/socket.scm 404 */
										bool_t BgL_test2241z00_3163;

										{	/* Llib/socket.scm 404 */
											long BgL_n1z00_1961;

											{	/* Llib/socket.scm 404 */
												obj_t BgL_tmpz00_3164;

												if (INTEGERP(BgL_index1125z00_1236))
													{	/* Llib/socket.scm 404 */
														BgL_tmpz00_3164 = BgL_index1125z00_1236;
													}
												else
													{
														obj_t BgL_auxz00_3167;

														BgL_auxz00_3167 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1955z00zz__socketz00,
															BINT(((long) 18105)),
															BGl_string2006z00zz__socketz00,
															BGl_string1982z00zz__socketz00,
															BgL_index1125z00_1236);
														FAILURE(BgL_auxz00_3167, BFALSE, BFALSE);
													}
												BgL_n1z00_1961 = (long) CINT(BgL_tmpz00_3164);
											}
											BgL_test2241z00_3163 = (BgL_n1z00_1961 >= ((long) 0));
										}
										if (BgL_test2241z00_3163)
											{
												long BgL_auxz00_3173;

												{	/* Llib/socket.scm 404 */
													obj_t BgL_tmpz00_3174;

													if (INTEGERP(BgL_index1125z00_1236))
														{	/* Llib/socket.scm 404 */
															BgL_tmpz00_3174 = BgL_index1125z00_1236;
														}
													else
														{
															obj_t BgL_auxz00_3177;

															BgL_auxz00_3177 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 18105)),
																BGl_string2006z00zz__socketz00,
																BGl_string1982z00zz__socketz00,
																BgL_index1125z00_1236);
															FAILURE(BgL_auxz00_3177, BFALSE, BFALSE);
														}
													BgL_auxz00_3173 = (long) CINT(BgL_tmpz00_3174);
												}
												BgL_inbufz00_1224 =
													VECTOR_REF(BgL_opt1118z00_29, BgL_auxz00_3173);
											}
										else
											{	/* Llib/socket.scm 404 */
												BFALSE;
											}
									}
								}
								{	/* Llib/socket.scm 404 */
									obj_t BgL_index1126z00_1238;

									{
										long BgL_iz00_1964;

										BgL_iz00_1964 = ((long) 1);
									BgL_search1121z00_1963:
										if ((BgL_iz00_1964 == VECTOR_LENGTH(BgL_opt1118z00_29)))
											{	/* Llib/socket.scm 404 */
												BgL_index1126z00_1238 = BINT(((long) -1));
											}
										else
											{	/* Llib/socket.scm 404 */
												if (
													(BgL_iz00_1964 ==
														(VECTOR_LENGTH(BgL_opt1118z00_29) - ((long) 1))))
													{	/* Llib/socket.scm 404 */
														BgL_index1126z00_1238 =
															BGl_errorz00zz__errorz00
															(BGl_symbol2003z00zz__socketz00,
															BGl_string2005z00zz__socketz00,
															BINT(VECTOR_LENGTH(BgL_opt1118z00_29)));
													}
												else
													{	/* Llib/socket.scm 404 */
														obj_t BgL_vz00_1977;

														BgL_vz00_1977 =
															VECTOR_REF(BgL_opt1118z00_29, BgL_iz00_1964);
														if (
															(BgL_vz00_1977 ==
																BGl_keyword1973z00zz__socketz00))
															{	/* Llib/socket.scm 404 */
																BgL_index1126z00_1238 =
																	BINT((BgL_iz00_1964 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_3199;

																BgL_iz00_3199 = (BgL_iz00_1964 + ((long) 2));
																BgL_iz00_1964 = BgL_iz00_3199;
																goto BgL_search1121z00_1963;
															}
													}
											}
									}
									{	/* Llib/socket.scm 404 */
										bool_t BgL_test2247z00_3201;

										{	/* Llib/socket.scm 404 */
											long BgL_n1z00_1984;

											{	/* Llib/socket.scm 404 */
												obj_t BgL_tmpz00_3202;

												if (INTEGERP(BgL_index1126z00_1238))
													{	/* Llib/socket.scm 404 */
														BgL_tmpz00_3202 = BgL_index1126z00_1238;
													}
												else
													{
														obj_t BgL_auxz00_3205;

														BgL_auxz00_3205 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1955z00zz__socketz00,
															BINT(((long) 18105)),
															BGl_string2006z00zz__socketz00,
															BGl_string1982z00zz__socketz00,
															BgL_index1126z00_1238);
														FAILURE(BgL_auxz00_3205, BFALSE, BFALSE);
													}
												BgL_n1z00_1984 = (long) CINT(BgL_tmpz00_3202);
											}
											BgL_test2247z00_3201 = (BgL_n1z00_1984 >= ((long) 0));
										}
										if (BgL_test2247z00_3201)
											{
												long BgL_auxz00_3211;

												{	/* Llib/socket.scm 404 */
													obj_t BgL_tmpz00_3212;

													if (INTEGERP(BgL_index1126z00_1238))
														{	/* Llib/socket.scm 404 */
															BgL_tmpz00_3212 = BgL_index1126z00_1238;
														}
													else
														{
															obj_t BgL_auxz00_3215;

															BgL_auxz00_3215 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 18105)),
																BGl_string2006z00zz__socketz00,
																BGl_string1982z00zz__socketz00,
																BgL_index1126z00_1238);
															FAILURE(BgL_auxz00_3215, BFALSE, BFALSE);
														}
													BgL_auxz00_3211 = (long) CINT(BgL_tmpz00_3212);
												}
												BgL_outbufz00_1225 =
													VECTOR_REF(BgL_opt1118z00_29, BgL_auxz00_3211);
											}
										else
											{	/* Llib/socket.scm 404 */
												BFALSE;
											}
									}
								}
								{	/* Llib/socket.scm 404 */
									obj_t BgL_arg1296z00_1240;

									BgL_arg1296z00_1240 =
										VECTOR_REF(BgL_opt1118z00_29, ((long) 0));
									{	/* Llib/socket.scm 404 */
										obj_t BgL_errpz00_1241;

										BgL_errpz00_1241 = BgL_errpz00_1223;
										{	/* Llib/socket.scm 404 */
											obj_t BgL_inbufz00_1242;

											BgL_inbufz00_1242 = BgL_inbufz00_1224;
											{	/* Llib/socket.scm 404 */
												obj_t BgL_outbufz00_1243;

												BgL_outbufz00_1243 = BgL_outbufz00_1225;
												{	/* Llib/socket.scm 404 */
													obj_t BgL_socketz00_1986;

													if (SOCKETP(BgL_arg1296z00_1240))
														{	/* Llib/socket.scm 404 */
															BgL_socketz00_1986 = BgL_arg1296z00_1240;
														}
													else
														{
															obj_t BgL_auxz00_3224;

															BgL_auxz00_3224 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 18105)),
																BGl_string2006z00zz__socketz00,
																BGl_string1953z00zz__socketz00,
																BgL_arg1296z00_1240);
															FAILURE(BgL_auxz00_3224, BFALSE, BFALSE);
														}
													return
														bgl_socket_accept(BgL_socketz00_1986,
														CBOOL(BgL_errpz00_1241),
														BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
														(BGl_string2004z00zz__socketz00, BgL_inbufz00_1242,
															(int) (((long) 512))),
														BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
														(BGl_string2004z00zz__socketz00, BgL_outbufz00_1243,
															(int) (((long) 1024))));
		}}}}}}}}}}}

	}



/* socket-accept */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2acceptzd2zz__socketz00(obj_t
		BgL_socketz00_25, obj_t BgL_errpz00_26, obj_t BgL_inbufz00_27,
		obj_t BgL_outbufz00_28)
	{
		{	/* Llib/socket.scm 404 */
			return
				bgl_socket_accept(BgL_socketz00_25,
				CBOOL(BgL_errpz00_26),
				BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_string2004z00zz__socketz00, BgL_inbufz00_27, (int) (((long) 512))),
				BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
				(BGl_string2004z00zz__socketz00, BgL_outbufz00_28,
					(int) (((long) 1024))));
		}

	}



/* _socket-accept-many */
	obj_t BGl__socketzd2acceptzd2manyz00zz__socketz00(obj_t BgL_env1129z00_37,
		obj_t BgL_opt1128z00_36)
	{
		{	/* Llib/socket.scm 415 */
			{	/* Llib/socket.scm 415 */
				obj_t BgL_g1137z00_1258;
				obj_t BgL_g1138z00_1259;

				BgL_g1137z00_1258 = VECTOR_REF(BgL_opt1128z00_36, ((long) 0));
				BgL_g1138z00_1259 = VECTOR_REF(BgL_opt1128z00_36, ((long) 1));
				{	/* Llib/socket.scm 415 */
					obj_t BgL_errpz00_1260;

					BgL_errpz00_1260 = BTRUE;
					{	/* Llib/socket.scm 415 */
						obj_t BgL_inbufsz00_1261;

						BgL_inbufsz00_1261 = BTRUE;
						{	/* Llib/socket.scm 415 */
							obj_t BgL_outbufsz00_1262;

							BgL_outbufsz00_1262 = BTRUE;
							{	/* Llib/socket.scm 415 */

								{
									long BgL_iz00_1263;

									BgL_iz00_1263 = ((long) 2);
								BgL_check1132z00_1264:
									if ((BgL_iz00_1263 == VECTOR_LENGTH(BgL_opt1128z00_36)))
										{	/* Llib/socket.scm 415 */
											BNIL;
										}
									else
										{	/* Llib/socket.scm 415 */
											bool_t BgL_test2252z00_3245;

											{	/* Llib/socket.scm 415 */
												obj_t BgL_arg1310z00_1270;

												BgL_arg1310z00_1270 =
													VECTOR_REF(BgL_opt1128z00_36, BgL_iz00_1263);
												BgL_test2252z00_3245 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1310z00_1270, BGl_list2007z00zz__socketz00));
											}
											if (BgL_test2252z00_3245)
												{
													long BgL_iz00_3249;

													BgL_iz00_3249 = (BgL_iz00_1263 + ((long) 2));
													BgL_iz00_1263 = BgL_iz00_3249;
													goto BgL_check1132z00_1264;
												}
											else
												{	/* Llib/socket.scm 415 */
													obj_t BgL_arg1309z00_1269;

													BgL_arg1309z00_1269 =
														VECTOR_REF(BgL_opt1128z00_36, BgL_iz00_1263);
													BGl_errorz00zz__errorz00
														(BGl_symbol2012z00zz__socketz00,
														BGl_string1979z00zz__socketz00,
														BgL_arg1309z00_1269);
												}
										}
								}
								{	/* Llib/socket.scm 415 */
									obj_t BgL_index1134z00_1271;

									{
										long BgL_iz00_2014;

										BgL_iz00_2014 = ((long) 2);
									BgL_search1131z00_2013:
										if ((BgL_iz00_2014 == VECTOR_LENGTH(BgL_opt1128z00_36)))
											{	/* Llib/socket.scm 415 */
												BgL_index1134z00_1271 = BINT(((long) -1));
											}
										else
											{	/* Llib/socket.scm 415 */
												if (
													(BgL_iz00_2014 ==
														(VECTOR_LENGTH(BgL_opt1128z00_36) - ((long) 1))))
													{	/* Llib/socket.scm 415 */
														BgL_index1134z00_1271 =
															BGl_errorz00zz__errorz00
															(BGl_symbol2012z00zz__socketz00,
															BGl_string2014z00zz__socketz00,
															BINT(VECTOR_LENGTH(BgL_opt1128z00_36)));
													}
												else
													{	/* Llib/socket.scm 415 */
														obj_t BgL_vz00_2027;

														BgL_vz00_2027 =
															VECTOR_REF(BgL_opt1128z00_36, BgL_iz00_2014);
														if (
															(BgL_vz00_2027 ==
																BGl_keyword2001z00zz__socketz00))
															{	/* Llib/socket.scm 415 */
																BgL_index1134z00_1271 =
																	BINT((BgL_iz00_2014 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_3269;

																BgL_iz00_3269 = (BgL_iz00_2014 + ((long) 2));
																BgL_iz00_2014 = BgL_iz00_3269;
																goto BgL_search1131z00_2013;
															}
													}
											}
									}
									{	/* Llib/socket.scm 415 */
										bool_t BgL_test2256z00_3271;

										{	/* Llib/socket.scm 415 */
											long BgL_n1z00_2034;

											{	/* Llib/socket.scm 415 */
												obj_t BgL_tmpz00_3272;

												if (INTEGERP(BgL_index1134z00_1271))
													{	/* Llib/socket.scm 415 */
														BgL_tmpz00_3272 = BgL_index1134z00_1271;
													}
												else
													{
														obj_t BgL_auxz00_3275;

														BgL_auxz00_3275 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1955z00zz__socketz00,
															BINT(((long) 18797)),
															BGl_string2015z00zz__socketz00,
															BGl_string1982z00zz__socketz00,
															BgL_index1134z00_1271);
														FAILURE(BgL_auxz00_3275, BFALSE, BFALSE);
													}
												BgL_n1z00_2034 = (long) CINT(BgL_tmpz00_3272);
											}
											BgL_test2256z00_3271 = (BgL_n1z00_2034 >= ((long) 0));
										}
										if (BgL_test2256z00_3271)
											{
												long BgL_auxz00_3281;

												{	/* Llib/socket.scm 415 */
													obj_t BgL_tmpz00_3282;

													if (INTEGERP(BgL_index1134z00_1271))
														{	/* Llib/socket.scm 415 */
															BgL_tmpz00_3282 = BgL_index1134z00_1271;
														}
													else
														{
															obj_t BgL_auxz00_3285;

															BgL_auxz00_3285 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 18797)),
																BGl_string2015z00zz__socketz00,
																BGl_string1982z00zz__socketz00,
																BgL_index1134z00_1271);
															FAILURE(BgL_auxz00_3285, BFALSE, BFALSE);
														}
													BgL_auxz00_3281 = (long) CINT(BgL_tmpz00_3282);
												}
												BgL_errpz00_1260 =
													VECTOR_REF(BgL_opt1128z00_36, BgL_auxz00_3281);
											}
										else
											{	/* Llib/socket.scm 415 */
												BFALSE;
											}
									}
								}
								{	/* Llib/socket.scm 415 */
									obj_t BgL_index1135z00_1273;

									{
										long BgL_iz00_2037;

										BgL_iz00_2037 = ((long) 2);
									BgL_search1131z00_2036:
										if ((BgL_iz00_2037 == VECTOR_LENGTH(BgL_opt1128z00_36)))
											{	/* Llib/socket.scm 415 */
												BgL_index1135z00_1273 = BINT(((long) -1));
											}
										else
											{	/* Llib/socket.scm 415 */
												if (
													(BgL_iz00_2037 ==
														(VECTOR_LENGTH(BgL_opt1128z00_36) - ((long) 1))))
													{	/* Llib/socket.scm 415 */
														BgL_index1135z00_1273 =
															BGl_errorz00zz__errorz00
															(BGl_symbol2012z00zz__socketz00,
															BGl_string2014z00zz__socketz00,
															BINT(VECTOR_LENGTH(BgL_opt1128z00_36)));
													}
												else
													{	/* Llib/socket.scm 415 */
														obj_t BgL_vz00_2050;

														BgL_vz00_2050 =
															VECTOR_REF(BgL_opt1128z00_36, BgL_iz00_2037);
														if (
															(BgL_vz00_2050 ==
																BGl_keyword2008z00zz__socketz00))
															{	/* Llib/socket.scm 415 */
																BgL_index1135z00_1273 =
																	BINT((BgL_iz00_2037 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_3307;

																BgL_iz00_3307 = (BgL_iz00_2037 + ((long) 2));
																BgL_iz00_2037 = BgL_iz00_3307;
																goto BgL_search1131z00_2036;
															}
													}
											}
									}
									{	/* Llib/socket.scm 415 */
										bool_t BgL_test2262z00_3309;

										{	/* Llib/socket.scm 415 */
											long BgL_n1z00_2057;

											{	/* Llib/socket.scm 415 */
												obj_t BgL_tmpz00_3310;

												if (INTEGERP(BgL_index1135z00_1273))
													{	/* Llib/socket.scm 415 */
														BgL_tmpz00_3310 = BgL_index1135z00_1273;
													}
												else
													{
														obj_t BgL_auxz00_3313;

														BgL_auxz00_3313 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1955z00zz__socketz00,
															BINT(((long) 18797)),
															BGl_string2015z00zz__socketz00,
															BGl_string1982z00zz__socketz00,
															BgL_index1135z00_1273);
														FAILURE(BgL_auxz00_3313, BFALSE, BFALSE);
													}
												BgL_n1z00_2057 = (long) CINT(BgL_tmpz00_3310);
											}
											BgL_test2262z00_3309 = (BgL_n1z00_2057 >= ((long) 0));
										}
										if (BgL_test2262z00_3309)
											{
												long BgL_auxz00_3319;

												{	/* Llib/socket.scm 415 */
													obj_t BgL_tmpz00_3320;

													if (INTEGERP(BgL_index1135z00_1273))
														{	/* Llib/socket.scm 415 */
															BgL_tmpz00_3320 = BgL_index1135z00_1273;
														}
													else
														{
															obj_t BgL_auxz00_3323;

															BgL_auxz00_3323 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 18797)),
																BGl_string2015z00zz__socketz00,
																BGl_string1982z00zz__socketz00,
																BgL_index1135z00_1273);
															FAILURE(BgL_auxz00_3323, BFALSE, BFALSE);
														}
													BgL_auxz00_3319 = (long) CINT(BgL_tmpz00_3320);
												}
												BgL_inbufsz00_1261 =
													VECTOR_REF(BgL_opt1128z00_36, BgL_auxz00_3319);
											}
										else
											{	/* Llib/socket.scm 415 */
												BFALSE;
											}
									}
								}
								{	/* Llib/socket.scm 415 */
									obj_t BgL_index1136z00_1275;

									{
										long BgL_iz00_2060;

										BgL_iz00_2060 = ((long) 2);
									BgL_search1131z00_2059:
										if ((BgL_iz00_2060 == VECTOR_LENGTH(BgL_opt1128z00_36)))
											{	/* Llib/socket.scm 415 */
												BgL_index1136z00_1275 = BINT(((long) -1));
											}
										else
											{	/* Llib/socket.scm 415 */
												if (
													(BgL_iz00_2060 ==
														(VECTOR_LENGTH(BgL_opt1128z00_36) - ((long) 1))))
													{	/* Llib/socket.scm 415 */
														BgL_index1136z00_1275 =
															BGl_errorz00zz__errorz00
															(BGl_symbol2012z00zz__socketz00,
															BGl_string2014z00zz__socketz00,
															BINT(VECTOR_LENGTH(BgL_opt1128z00_36)));
													}
												else
													{	/* Llib/socket.scm 415 */
														obj_t BgL_vz00_2073;

														BgL_vz00_2073 =
															VECTOR_REF(BgL_opt1128z00_36, BgL_iz00_2060);
														if (
															(BgL_vz00_2073 ==
																BGl_keyword2010z00zz__socketz00))
															{	/* Llib/socket.scm 415 */
																BgL_index1136z00_1275 =
																	BINT((BgL_iz00_2060 + ((long) 1)));
															}
														else
															{
																long BgL_iz00_3345;

																BgL_iz00_3345 = (BgL_iz00_2060 + ((long) 2));
																BgL_iz00_2060 = BgL_iz00_3345;
																goto BgL_search1131z00_2059;
															}
													}
											}
									}
									{	/* Llib/socket.scm 415 */
										bool_t BgL_test2268z00_3347;

										{	/* Llib/socket.scm 415 */
											long BgL_n1z00_2080;

											{	/* Llib/socket.scm 415 */
												obj_t BgL_tmpz00_3348;

												if (INTEGERP(BgL_index1136z00_1275))
													{	/* Llib/socket.scm 415 */
														BgL_tmpz00_3348 = BgL_index1136z00_1275;
													}
												else
													{
														obj_t BgL_auxz00_3351;

														BgL_auxz00_3351 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string1955z00zz__socketz00,
															BINT(((long) 18797)),
															BGl_string2015z00zz__socketz00,
															BGl_string1982z00zz__socketz00,
															BgL_index1136z00_1275);
														FAILURE(BgL_auxz00_3351, BFALSE, BFALSE);
													}
												BgL_n1z00_2080 = (long) CINT(BgL_tmpz00_3348);
											}
											BgL_test2268z00_3347 = (BgL_n1z00_2080 >= ((long) 0));
										}
										if (BgL_test2268z00_3347)
											{
												long BgL_auxz00_3357;

												{	/* Llib/socket.scm 415 */
													obj_t BgL_tmpz00_3358;

													if (INTEGERP(BgL_index1136z00_1275))
														{	/* Llib/socket.scm 415 */
															BgL_tmpz00_3358 = BgL_index1136z00_1275;
														}
													else
														{
															obj_t BgL_auxz00_3361;

															BgL_auxz00_3361 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 18797)),
																BGl_string2015z00zz__socketz00,
																BGl_string1982z00zz__socketz00,
																BgL_index1136z00_1275);
															FAILURE(BgL_auxz00_3361, BFALSE, BFALSE);
														}
													BgL_auxz00_3357 = (long) CINT(BgL_tmpz00_3358);
												}
												BgL_outbufsz00_1262 =
													VECTOR_REF(BgL_opt1128z00_36, BgL_auxz00_3357);
											}
										else
											{	/* Llib/socket.scm 415 */
												BFALSE;
											}
									}
								}
								{	/* Llib/socket.scm 415 */
									obj_t BgL_arg1314z00_1277;
									obj_t BgL_arg1315z00_1278;

									BgL_arg1314z00_1277 =
										VECTOR_REF(BgL_opt1128z00_36, ((long) 0));
									BgL_arg1315z00_1278 =
										VECTOR_REF(BgL_opt1128z00_36, ((long) 1));
									{	/* Llib/socket.scm 415 */
										obj_t BgL_errpz00_1279;

										BgL_errpz00_1279 = BgL_errpz00_1260;
										{	/* Llib/socket.scm 415 */
											obj_t BgL_inbufsz00_1280;

											BgL_inbufsz00_1280 = BgL_inbufsz00_1261;
											{	/* Llib/socket.scm 415 */
												obj_t BgL_outbufsz00_1281;

												BgL_outbufsz00_1281 = BgL_outbufsz00_1262;
												{	/* Llib/socket.scm 415 */
													obj_t BgL_auxz00_3376;
													obj_t BgL_auxz00_3369;

													if (VECTORP(BgL_arg1315z00_1278))
														{	/* Llib/socket.scm 415 */
															BgL_auxz00_3376 = BgL_arg1315z00_1278;
														}
													else
														{
															obj_t BgL_auxz00_3379;

															BgL_auxz00_3379 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 18797)),
																BGl_string2015z00zz__socketz00,
																BGl_string2016z00zz__socketz00,
																BgL_arg1315z00_1278);
															FAILURE(BgL_auxz00_3379, BFALSE, BFALSE);
														}
													if (SOCKETP(BgL_arg1314z00_1277))
														{	/* Llib/socket.scm 415 */
															BgL_auxz00_3369 = BgL_arg1314z00_1277;
														}
													else
														{
															obj_t BgL_auxz00_3372;

															BgL_auxz00_3372 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string1955z00zz__socketz00,
																BINT(((long) 18797)),
																BGl_string2015z00zz__socketz00,
																BGl_string1953z00zz__socketz00,
																BgL_arg1314z00_1277);
															FAILURE(BgL_auxz00_3372, BFALSE, BFALSE);
														}
													return
														BGl_socketzd2acceptzd2manyz00zz__socketz00
														(BgL_auxz00_3369, BgL_auxz00_3376, BgL_errpz00_1279,
														BgL_inbufsz00_1280, BgL_outbufsz00_1281);
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
		}

	}



/* socket-accept-many */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2acceptzd2manyz00zz__socketz00(obj_t
		BgL_socketz00_31, obj_t BgL_resultz00_32, obj_t BgL_errpz00_33,
		obj_t BgL_inbufsz00_34, obj_t BgL_outbufsz00_35)
	{
		{	/* Llib/socket.scm 415 */
			if (VECTORP(BgL_inbufsz00_34))
				{	/* Llib/socket.scm 416 */
					((bool_t) 0);
				}
			else
				{	/* Llib/socket.scm 416 */
					BgL_inbufsz00_34 =
						make_vector(VECTOR_LENGTH(BgL_resultz00_32), BUNSPEC);
					{
						long BgL_iz00_2095;

						BgL_iz00_2095 = ((long) 0);
					BgL_loopz00_2094:
						if ((BgL_iz00_2095 < VECTOR_LENGTH(BgL_resultz00_32)))
							{	/* Llib/socket.scm 420 */
								obj_t BgL_bufz00_2102;

								BgL_bufz00_2102 =
									BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
									(BGl_string2013z00zz__socketz00, BTRUE, (int) (((long) 512)));
								VECTOR_SET(BgL_inbufsz00_34, BgL_iz00_2095, BgL_bufz00_2102);
								{
									long BgL_iz00_3394;

									BgL_iz00_3394 = (BgL_iz00_2095 + ((long) 1));
									BgL_iz00_2095 = BgL_iz00_3394;
									goto BgL_loopz00_2094;
								}
							}
						else
							{	/* Llib/socket.scm 419 */
								((bool_t) 0);
							}
					}
				}
			if (VECTORP(BgL_outbufsz00_35))
				{	/* Llib/socket.scm 423 */
					((bool_t) 0);
				}
			else
				{	/* Llib/socket.scm 423 */
					BgL_outbufsz00_35 =
						make_vector(VECTOR_LENGTH(BgL_resultz00_32), BUNSPEC);
					{
						long BgL_iz00_2121;

						BgL_iz00_2121 = ((long) 0);
					BgL_loopz00_2120:
						if ((BgL_iz00_2121 < VECTOR_LENGTH(BgL_resultz00_32)))
							{	/* Llib/socket.scm 427 */
								obj_t BgL_bufz00_2128;

								BgL_bufz00_2128 =
									BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00
									(BGl_string2013z00zz__socketz00, BTRUE, (int) (((long) 512)));
								VECTOR_SET(BgL_outbufsz00_35, BgL_iz00_2121, BgL_bufz00_2128);
								{
									long BgL_iz00_3406;

									BgL_iz00_3406 = (BgL_iz00_2121 + ((long) 1));
									BgL_iz00_2121 = BgL_iz00_3406;
									goto BgL_loopz00_2120;
								}
							}
						else
							{	/* Llib/socket.scm 426 */
								((bool_t) 0);
							}
					}
				}
			return
				BINT(bgl_socket_accept_many(BgL_socketz00_31,
					CBOOL(BgL_errpz00_33), BgL_inbufsz00_34, BgL_outbufsz00_35,
					BgL_resultz00_32));
		}

	}



/* _socket-shutdown */
	obj_t BGl__socketzd2shutdownzd2zz__socketz00(obj_t BgL_env1140z00_41,
		obj_t BgL_opt1139z00_40)
	{
		{	/* Llib/socket.scm 443 */
			{	/* Llib/socket.scm 443 */
				obj_t BgL_g1141z00_1314;

				BgL_g1141z00_1314 = VECTOR_REF(BgL_opt1139z00_40, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1139z00_40))
					{
					case ((long) 1):

						{	/* Llib/socket.scm 443 */

							{	/* Llib/socket.scm 443 */
								int BgL_tmpz00_3412;

								{	/* Llib/socket.scm 443 */
									obj_t BgL_auxz00_3413;

									if (SOCKETP(BgL_g1141z00_1314))
										{	/* Llib/socket.scm 443 */
											BgL_auxz00_3413 = BgL_g1141z00_1314;
										}
									else
										{
											obj_t BgL_auxz00_3416;

											BgL_auxz00_3416 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1955z00zz__socketz00, BINT(((long) 19935)),
												BGl_string2017z00zz__socketz00,
												BGl_string1953z00zz__socketz00, BgL_g1141z00_1314);
											FAILURE(BgL_auxz00_3416, BFALSE, BFALSE);
										}
									BgL_tmpz00_3412 =
										BGl_socketzd2shutdownzd2zz__socketz00(BgL_auxz00_3413,
										BTRUE);
								}
								return BINT(BgL_tmpz00_3412);
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/socket.scm 443 */
							obj_t BgL_howz00_1319;

							BgL_howz00_1319 = VECTOR_REF(BgL_opt1139z00_40, ((long) 1));
							{	/* Llib/socket.scm 443 */

								{	/* Llib/socket.scm 443 */
									int BgL_tmpz00_3423;

									{	/* Llib/socket.scm 443 */
										obj_t BgL_auxz00_3424;

										if (SOCKETP(BgL_g1141z00_1314))
											{	/* Llib/socket.scm 443 */
												BgL_auxz00_3424 = BgL_g1141z00_1314;
											}
										else
											{
												obj_t BgL_auxz00_3427;

												BgL_auxz00_3427 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1955z00zz__socketz00, BINT(((long) 19935)),
													BGl_string2017z00zz__socketz00,
													BGl_string1953z00zz__socketz00, BgL_g1141z00_1314);
												FAILURE(BgL_auxz00_3427, BFALSE, BFALSE);
											}
										BgL_tmpz00_3423 =
											BGl_socketzd2shutdownzd2zz__socketz00(BgL_auxz00_3424,
											BgL_howz00_1319);
									}
									return BINT(BgL_tmpz00_3423);
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* socket-shutdown */
	BGL_EXPORTED_DEF int BGl_socketzd2shutdownzd2zz__socketz00(obj_t
		BgL_socketz00_38, obj_t BgL_howz00_39)
	{
		{	/* Llib/socket.scm 443 */
			if ((BgL_howz00_39 == BTRUE))
				{	/* Llib/socket.scm 446 */
					int BgL_rz00_1321;

					BgL_rz00_1321 = socket_shutdown(BgL_socketz00_38, (int) (((long) 2)));
					socket_close(BgL_socketz00_38);
					return BgL_rz00_1321;
				}
			else
				{	/* Llib/socket.scm 449 */
					bool_t BgL_test2280z00_3440;

					if ((BgL_howz00_39 == BFALSE))
						{	/* Llib/socket.scm 449 */
							BgL_test2280z00_3440 = ((bool_t) 1);
						}
					else
						{	/* Llib/socket.scm 449 */
							BgL_test2280z00_3440 =
								(BgL_howz00_39 == BGl_symbol2018z00zz__socketz00);
						}
					if (BgL_test2280z00_3440)
						{	/* Llib/socket.scm 449 */
							return socket_shutdown(BgL_socketz00_38, (int) (((long) 2)));
						}
					else
						{	/* Llib/socket.scm 449 */
							if ((BgL_howz00_39 == BGl_symbol2020z00zz__socketz00))
								{	/* Llib/socket.scm 451 */
									return socket_shutdown(BgL_socketz00_38, (int) (((long) 1)));
								}
							else
								{	/* Llib/socket.scm 451 */
									if ((BgL_howz00_39 == BGl_symbol2022z00zz__socketz00))
										{	/* Llib/socket.scm 453 */
											return
												socket_shutdown(BgL_socketz00_38, (int) (((long) 0)));
										}
									else
										{	/* Llib/socket.scm 453 */
											return
												CINT(BGl_errorz00zz__errorz00
												(BGl_string2024z00zz__socketz00,
													BGl_string2025z00zz__socketz00, BgL_howz00_39));
										}
								}
						}
				}
		}

	}



/* socket-close */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2closezd2zz__socketz00(obj_t
		BgL_socketz00_42)
	{
		{	/* Llib/socket.scm 461 */
			return socket_close(BgL_socketz00_42);
		}

	}



/* &socket-close */
	obj_t BGl_z62socketzd2closezb0zz__socketz00(obj_t BgL_envz00_2450,
		obj_t BgL_socketz00_2451)
	{
		{	/* Llib/socket.scm 461 */
			{	/* Llib/socket.scm 462 */
				obj_t BgL_auxz00_3457;

				if (SOCKETP(BgL_socketz00_2451))
					{	/* Llib/socket.scm 462 */
						BgL_auxz00_3457 = BgL_socketz00_2451;
					}
				else
					{
						obj_t BgL_auxz00_3460;

						BgL_auxz00_3460 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 20643)), BGl_string2026z00zz__socketz00,
							BGl_string1953z00zz__socketz00, BgL_socketz00_2451);
						FAILURE(BgL_auxz00_3460, BFALSE, BFALSE);
					}
				return BGl_socketzd2closezd2zz__socketz00(BgL_auxz00_3457);
			}
		}

	}



/* host */
	BGL_EXPORTED_DEF obj_t BGl_hostz00zz__socketz00(obj_t BgL_hostnamez00_43)
	{
		{	/* Llib/socket.scm 467 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			return bgl_host(BgL_hostnamez00_43);
		}

	}



/* &host */
	obj_t BGl_z62hostz62zz__socketz00(obj_t BgL_envz00_2452,
		obj_t BgL_hostnamez00_2453)
	{
		{	/* Llib/socket.scm 467 */
			{	/* Llib/socket.scm 469 */
				obj_t BgL_auxz00_3467;

				if (STRINGP(BgL_hostnamez00_2453))
					{	/* Llib/socket.scm 469 */
						BgL_auxz00_3467 = BgL_hostnamez00_2453;
					}
				else
					{
						obj_t BgL_auxz00_3470;

						BgL_auxz00_3470 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 20951)), BGl_string2027z00zz__socketz00,
							BGl_string1961z00zz__socketz00, BgL_hostnamez00_2453);
						FAILURE(BgL_auxz00_3470, BFALSE, BFALSE);
					}
				return BGl_hostz00zz__socketz00(BgL_auxz00_3467);
			}
		}

	}



/* hostinfo */
	BGL_EXPORTED_DEF obj_t BGl_hostinfoz00zz__socketz00(obj_t BgL_hostnamez00_44)
	{
		{	/* Llib/socket.scm 475 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			return bgl_hostinfo(BgL_hostnamez00_44);
		}

	}



/* &hostinfo */
	obj_t BGl_z62hostinfoz62zz__socketz00(obj_t BgL_envz00_2454,
		obj_t BgL_hostnamez00_2455)
	{
		{	/* Llib/socket.scm 475 */
			{	/* Llib/socket.scm 477 */
				obj_t BgL_auxz00_3477;

				if (STRINGP(BgL_hostnamez00_2455))
					{	/* Llib/socket.scm 477 */
						BgL_auxz00_3477 = BgL_hostnamez00_2455;
					}
				else
					{
						obj_t BgL_auxz00_3480;

						BgL_auxz00_3480 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 21266)), BGl_string2028z00zz__socketz00,
							BGl_string1961z00zz__socketz00, BgL_hostnamez00_2455);
						FAILURE(BgL_auxz00_3480, BFALSE, BFALSE);
					}
				return BGl_hostinfoz00zz__socketz00(BgL_auxz00_3477);
			}
		}

	}



/* _hostname */
	obj_t BGl__hostnamez00zz__socketz00(obj_t BgL_env1145z00_47,
		obj_t BgL_opt1144z00_46)
	{
		{	/* Llib/socket.scm 483 */
			{	/* Llib/socket.scm 483 */

				switch (VECTOR_LENGTH(BgL_opt1144z00_46))
					{
					case ((long) 0):

						{	/* Llib/socket.scm 483 */

							{	/* Llib/socket.scm 483 */
								obj_t BgL_res1747z00_2135;

								BGl_z52socketzd2initz12z92zz__socketz00();
								BgL_res1747z00_2135 = bgl_gethostname();
								return BgL_res1747z00_2135;
							}
						}
						break;
					case ((long) 1):

						{	/* Llib/socket.scm 483 */
							obj_t BgL_hostipz00_1331;

							BgL_hostipz00_1331 = VECTOR_REF(BgL_opt1144z00_46, ((long) 0));
							{	/* Llib/socket.scm 483 */

								{	/* Llib/socket.scm 483 */
									obj_t BgL_res1748z00_2136;

									BGl_z52socketzd2initz12z92zz__socketz00();
									if (CBOOL(BgL_hostipz00_1331))
										{	/* Llib/socket.scm 486 */
											obj_t BgL_tmpz00_3491;

											if (STRINGP(BgL_hostipz00_1331))
												{	/* Llib/socket.scm 486 */
													BgL_tmpz00_3491 = BgL_hostipz00_1331;
												}
											else
												{
													obj_t BgL_auxz00_3494;

													BgL_auxz00_3494 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1955z00zz__socketz00,
														BINT(((long) 21622)),
														BGl_string2029z00zz__socketz00,
														BGl_string1961z00zz__socketz00, BgL_hostipz00_1331);
													FAILURE(BgL_auxz00_3494, BFALSE, BFALSE);
												}
											BgL_res1748z00_2136 =
												bgl_gethostname_by_address(BgL_tmpz00_3491);
										}
									else
										{	/* Llib/socket.scm 485 */
											BgL_res1748z00_2136 = bgl_gethostname();
										}
									return BgL_res1748z00_2136;
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* hostname */
	BGL_EXPORTED_DEF obj_t BGl_hostnamez00zz__socketz00(obj_t BgL_hostipz00_45)
	{
		{	/* Llib/socket.scm 483 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			if (CBOOL(BgL_hostipz00_45))
				{	/* Llib/socket.scm 485 */
					return bgl_gethostname_by_address(BgL_hostipz00_45);
				}
			else
				{	/* Llib/socket.scm 485 */
					return bgl_gethostname();
				}
		}

	}



/* resolv */
	BGL_EXPORTED_DEF obj_t BGl_resolvz00zz__socketz00(obj_t BgL_hostnamez00_48,
		obj_t BgL_typez00_49)
	{
		{	/* Llib/socket.scm 492 */
			{	/* Llib/socket.scm 495 */
				obj_t BgL_arg1350z00_2137;

				{	/* Llib/socket.scm 495 */
					obj_t BgL_res1749z00_2139;

					BgL_res1749z00_2139 = SYMBOL_TO_STRING(BgL_typez00_49);
					BgL_arg1350z00_2137 = BgL_res1749z00_2139;
				}
				return bgl_res_query(BgL_hostnamez00_48, BgL_arg1350z00_2137);
			}
		}

	}



/* &resolv */
	obj_t BGl_z62resolvz62zz__socketz00(obj_t BgL_envz00_2456,
		obj_t BgL_hostnamez00_2457, obj_t BgL_typez00_2458)
	{
		{	/* Llib/socket.scm 492 */
			{	/* Llib/socket.scm 495 */
				obj_t BgL_auxz00_3516;
				obj_t BgL_auxz00_3509;

				if (SYMBOLP(BgL_typez00_2458))
					{	/* Llib/socket.scm 495 */
						BgL_auxz00_3516 = BgL_typez00_2458;
					}
				else
					{
						obj_t BgL_auxz00_3519;

						BgL_auxz00_3519 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 21965)), BGl_string2030z00zz__socketz00,
							BGl_string2031z00zz__socketz00, BgL_typez00_2458);
						FAILURE(BgL_auxz00_3519, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_hostnamez00_2457))
					{	/* Llib/socket.scm 495 */
						BgL_auxz00_3509 = BgL_hostnamez00_2457;
					}
				else
					{
						obj_t BgL_auxz00_3512;

						BgL_auxz00_3512 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 21965)), BGl_string2030z00zz__socketz00,
							BGl_string1961z00zz__socketz00, BgL_hostnamez00_2457);
						FAILURE(BgL_auxz00_3512, BFALSE, BFALSE);
					}
				return BGl_resolvz00zz__socketz00(BgL_auxz00_3509, BgL_auxz00_3516);
			}
		}

	}



/* get-interfaces */
	BGL_EXPORTED_DEF obj_t BGl_getzd2interfaceszd2zz__socketz00()
	{
		{	/* Llib/socket.scm 502 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			return bgl_gethostinterfaces();
		}

	}



/* &get-interfaces */
	obj_t BGl_z62getzd2interfaceszb0zz__socketz00(obj_t BgL_envz00_2459)
	{
		{	/* Llib/socket.scm 502 */
			return BGl_getzd2interfaceszd2zz__socketz00();
		}

	}



/* get-protocols */
	BGL_EXPORTED_DEF obj_t BGl_getzd2protocolszd2zz__socketz00()
	{
		{	/* Llib/socket.scm 510 */
			return bgl_getprotoents();
		}

	}



/* &get-protocols */
	obj_t BGl_z62getzd2protocolszb0zz__socketz00(obj_t BgL_envz00_2460)
	{
		{	/* Llib/socket.scm 510 */
			return BGl_getzd2protocolszd2zz__socketz00();
		}

	}



/* get-protocol */
	BGL_EXPORTED_DEF obj_t BGl_getzd2protocolzd2zz__socketz00(obj_t
		BgL_protocolz00_50)
	{
		{	/* Llib/socket.scm 516 */
			if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_protocolz00_50))
				{	/* Llib/socket.scm 518 */
					return bgl_getprotobynumber(CINT(BgL_protocolz00_50));
				}
			else
				{	/* Llib/socket.scm 518 */
					if (STRINGP(BgL_protocolz00_50))
						{	/* Llib/socket.scm 520 */
							return bgl_getprotobyname(BSTRING_TO_STRING(BgL_protocolz00_50));
						}
					else
						{	/* Llib/socket.scm 520 */
							return BFALSE;
						}
				}
		}

	}



/* &get-protocol */
	obj_t BGl_z62getzd2protocolzb0zz__socketz00(obj_t BgL_envz00_2461,
		obj_t BgL_protocolz00_2462)
	{
		{	/* Llib/socket.scm 516 */
			return BGl_getzd2protocolzd2zz__socketz00(BgL_protocolz00_2462);
		}

	}



/* socket-option */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2optionzd2zz__socketz00(obj_t
		BgL_socketz00_51, obj_t BgL_optionz00_52)
	{
		{	/* Llib/socket.scm 528 */
			return bgl_getsockopt(BgL_socketz00_51, BgL_optionz00_52);
		}

	}



/* &socket-option */
	obj_t BGl_z62socketzd2optionzb0zz__socketz00(obj_t BgL_envz00_2463,
		obj_t BgL_socketz00_2464, obj_t BgL_optionz00_2465)
	{
		{	/* Llib/socket.scm 528 */
			{	/* Llib/socket.scm 529 */
				obj_t BgL_auxz00_3546;
				obj_t BgL_auxz00_3539;

				if (KEYWORDP(BgL_optionz00_2465))
					{	/* Llib/socket.scm 529 */
						BgL_auxz00_3546 = BgL_optionz00_2465;
					}
				else
					{
						obj_t BgL_auxz00_3549;

						BgL_auxz00_3549 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 23292)), BGl_string2032z00zz__socketz00,
							BGl_string2033z00zz__socketz00, BgL_optionz00_2465);
						FAILURE(BgL_auxz00_3549, BFALSE, BFALSE);
					}
				if (SOCKETP(BgL_socketz00_2464))
					{	/* Llib/socket.scm 529 */
						BgL_auxz00_3539 = BgL_socketz00_2464;
					}
				else
					{
						obj_t BgL_auxz00_3542;

						BgL_auxz00_3542 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 23292)), BGl_string2032z00zz__socketz00,
							BGl_string1953z00zz__socketz00, BgL_socketz00_2464);
						FAILURE(BgL_auxz00_3542, BFALSE, BFALSE);
					}
				return
					BGl_socketzd2optionzd2zz__socketz00(BgL_auxz00_3539, BgL_auxz00_3546);
			}
		}

	}



/* socket-option-set! */
	BGL_EXPORTED_DEF obj_t BGl_socketzd2optionzd2setz12z12zz__socketz00(obj_t
		BgL_socketz00_53, obj_t BgL_optionz00_54, obj_t BgL_valz00_55)
	{
		{	/* Llib/socket.scm 534 */
			return bgl_setsockopt(BgL_socketz00_53, BgL_optionz00_54, BgL_valz00_55);
		}

	}



/* &socket-option-set! */
	obj_t BGl_z62socketzd2optionzd2setz12z70zz__socketz00(obj_t BgL_envz00_2466,
		obj_t BgL_socketz00_2467, obj_t BgL_optionz00_2468, obj_t BgL_valz00_2469)
	{
		{	/* Llib/socket.scm 534 */
			{	/* Llib/socket.scm 535 */
				obj_t BgL_auxz00_3562;
				obj_t BgL_auxz00_3555;

				if (KEYWORDP(BgL_optionz00_2468))
					{	/* Llib/socket.scm 535 */
						BgL_auxz00_3562 = BgL_optionz00_2468;
					}
				else
					{
						obj_t BgL_auxz00_3565;

						BgL_auxz00_3565 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 23601)), BGl_string2034z00zz__socketz00,
							BGl_string2033z00zz__socketz00, BgL_optionz00_2468);
						FAILURE(BgL_auxz00_3565, BFALSE, BFALSE);
					}
				if (SOCKETP(BgL_socketz00_2467))
					{	/* Llib/socket.scm 535 */
						BgL_auxz00_3555 = BgL_socketz00_2467;
					}
				else
					{
						obj_t BgL_auxz00_3558;

						BgL_auxz00_3558 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 23601)), BGl_string2034z00zz__socketz00,
							BGl_string1953z00zz__socketz00, BgL_socketz00_2467);
						FAILURE(BgL_auxz00_3558, BFALSE, BFALSE);
					}
				return
					BGl_socketzd2optionzd2setz12z12zz__socketz00(BgL_auxz00_3555,
					BgL_auxz00_3562, BgL_valz00_2469);
			}
		}

	}



/* datagram-socket? */
	BGL_EXPORTED_DEF bool_t BGl_datagramzd2socketzf3z21zz__socketz00(obj_t
		BgL_objz00_56)
	{
		{	/* Llib/socket.scm 540 */
			return BGL_DATAGRAM_SOCKETP(BgL_objz00_56);
		}

	}



/* &datagram-socket? */
	obj_t BGl_z62datagramzd2socketzf3z43zz__socketz00(obj_t BgL_envz00_2470,
		obj_t BgL_objz00_2471)
	{
		{	/* Llib/socket.scm 540 */
			return BBOOL(BGl_datagramzd2socketzf3z21zz__socketz00(BgL_objz00_2471));
		}

	}



/* datagram-socket-server? */
	BGL_EXPORTED_DEF bool_t
		BGl_datagramzd2socketzd2serverzf3zf3zz__socketz00(obj_t BgL_objz00_57)
	{
		{	/* Llib/socket.scm 546 */
			return BGL_DATAGRAM_SOCKET_SERVERP(BgL_objz00_57);
		}

	}



/* &datagram-socket-server? */
	obj_t BGl_z62datagramzd2socketzd2serverzf3z91zz__socketz00(obj_t
		BgL_envz00_2472, obj_t BgL_objz00_2473)
	{
		{	/* Llib/socket.scm 546 */
			return
				BBOOL(BGl_datagramzd2socketzd2serverzf3zf3zz__socketz00
				(BgL_objz00_2473));
		}

	}



/* datagram-socket-client? */
	BGL_EXPORTED_DEF bool_t
		BGl_datagramzd2socketzd2clientzf3zf3zz__socketz00(obj_t BgL_objz00_58)
	{
		{	/* Llib/socket.scm 552 */
			return BGL_DATAGRAM_SOCKET_CLIENTP(BgL_objz00_58);
		}

	}



/* &datagram-socket-client? */
	obj_t BGl_z62datagramzd2socketzd2clientzf3z91zz__socketz00(obj_t
		BgL_envz00_2474, obj_t BgL_objz00_2475)
	{
		{	/* Llib/socket.scm 552 */
			return
				BBOOL(BGl_datagramzd2socketzd2clientzf3zf3zz__socketz00
				(BgL_objz00_2475));
		}

	}



/* datagram-socket-hostname */
	BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2hostnamez00zz__socketz00(obj_t
		BgL_socketz00_59)
	{
		{	/* Llib/socket.scm 558 */
			return BGL_DATAGRAM_SOCKET_HOSTNAME(BgL_socketz00_59);
		}

	}



/* &datagram-socket-hostname */
	obj_t BGl_z62datagramzd2socketzd2hostnamez62zz__socketz00(obj_t
		BgL_envz00_2476, obj_t BgL_socketz00_2477)
	{
		{	/* Llib/socket.scm 558 */
			{	/* Llib/socket.scm 559 */
				obj_t BgL_auxz00_3580;

				if (BGL_DATAGRAM_SOCKETP(BgL_socketz00_2477))
					{	/* Llib/socket.scm 559 */
						BgL_auxz00_3580 = BgL_socketz00_2477;
					}
				else
					{
						obj_t BgL_auxz00_3583;

						BgL_auxz00_3583 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 24805)), BGl_string2035z00zz__socketz00,
							BGl_string2036z00zz__socketz00, BgL_socketz00_2477);
						FAILURE(BgL_auxz00_3583, BFALSE, BFALSE);
					}
				return
					BGl_datagramzd2socketzd2hostnamez00zz__socketz00(BgL_auxz00_3580);
			}
		}

	}



/* datagram-socket-host-address */
	BGL_EXPORTED_DEF obj_t
		BGl_datagramzd2socketzd2hostzd2addresszd2zz__socketz00(obj_t
		BgL_socketz00_60)
	{
		{	/* Llib/socket.scm 564 */
			return BGL_DATAGRAM_SOCKET_HOSTIP(BgL_socketz00_60);
		}

	}



/* &datagram-socket-host-address */
	obj_t BGl_z62datagramzd2socketzd2hostzd2addresszb0zz__socketz00(obj_t
		BgL_envz00_2478, obj_t BgL_socketz00_2479)
	{
		{	/* Llib/socket.scm 564 */
			{	/* Llib/socket.scm 565 */
				obj_t BgL_auxz00_3589;

				if (BGL_DATAGRAM_SOCKETP(BgL_socketz00_2479))
					{	/* Llib/socket.scm 565 */
						BgL_auxz00_3589 = BgL_socketz00_2479;
					}
				else
					{
						obj_t BgL_auxz00_3592;

						BgL_auxz00_3592 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 25120)), BGl_string2037z00zz__socketz00,
							BGl_string2036z00zz__socketz00, BgL_socketz00_2479);
						FAILURE(BgL_auxz00_3592, BFALSE, BFALSE);
					}
				return
					BGl_datagramzd2socketzd2hostzd2addresszd2zz__socketz00
					(BgL_auxz00_3589);
			}
		}

	}



/* datagram-socket-port-number */
	BGL_EXPORTED_DEF obj_t
		BGl_datagramzd2socketzd2portzd2numberzd2zz__socketz00(obj_t
		BgL_socketz00_61)
	{
		{	/* Llib/socket.scm 570 */
			return BINT(BGL_DATAGRAM_SOCKET_PORTNUM(BgL_socketz00_61));
		}

	}



/* &datagram-socket-port-number */
	obj_t BGl_z62datagramzd2socketzd2portzd2numberzb0zz__socketz00(obj_t
		BgL_envz00_2480, obj_t BgL_socketz00_2481)
	{
		{	/* Llib/socket.scm 570 */
			{	/* Llib/socket.scm 571 */
				obj_t BgL_auxz00_3599;

				if (BGL_DATAGRAM_SOCKETP(BgL_socketz00_2481))
					{	/* Llib/socket.scm 571 */
						BgL_auxz00_3599 = BgL_socketz00_2481;
					}
				else
					{
						obj_t BgL_auxz00_3602;

						BgL_auxz00_3602 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 25432)), BGl_string2038z00zz__socketz00,
							BGl_string2036z00zz__socketz00, BgL_socketz00_2481);
						FAILURE(BgL_auxz00_3602, BFALSE, BFALSE);
					}
				return
					BGl_datagramzd2socketzd2portzd2numberzd2zz__socketz00
					(BgL_auxz00_3599);
			}
		}

	}



/* datagram-socket-output */
	BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2outputz00zz__socketz00(obj_t
		BgL_socketz00_62)
	{
		{	/* Llib/socket.scm 576 */
			{	/* Llib/socket.scm 577 */
				bool_t BgL_test2301z00_3607;

				{	/* Llib/socket.scm 577 */
					obj_t BgL_arg1355z00_2651;

					BgL_arg1355z00_2651 = BGL_DATAGRAM_SOCKET_PORT(BgL_socketz00_62);
					BgL_test2301z00_3607 = OUTPUT_PORTP(BgL_arg1355z00_2651);
				}
				if (BgL_test2301z00_3607)
					{	/* Llib/socket.scm 577 */
						return BGL_DATAGRAM_SOCKET_PORT(BgL_socketz00_62);
					}
				else
					{	/* Llib/socket.scm 577 */
						return
							BGl_errorz00zz__errorz00(BGl_string2039z00zz__socketz00,
							BGl_string2040z00zz__socketz00, BgL_socketz00_62);
					}
			}
		}

	}



/* &datagram-socket-output */
	obj_t BGl_z62datagramzd2socketzd2outputz62zz__socketz00(obj_t BgL_envz00_2482,
		obj_t BgL_socketz00_2483)
	{
		{	/* Llib/socket.scm 576 */
			{	/* Llib/socket.scm 577 */
				obj_t BgL_auxz00_3612;

				if (BGL_DATAGRAM_SOCKETP(BgL_socketz00_2483))
					{	/* Llib/socket.scm 577 */
						BgL_auxz00_3612 = BgL_socketz00_2483;
					}
				else
					{
						obj_t BgL_auxz00_3615;

						BgL_auxz00_3615 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 25744)), BGl_string2041z00zz__socketz00,
							BGl_string2036z00zz__socketz00, BgL_socketz00_2483);
						FAILURE(BgL_auxz00_3615, BFALSE, BFALSE);
					}
				return BGl_datagramzd2socketzd2outputz00zz__socketz00(BgL_auxz00_3612);
			}
		}

	}



/* datagram-socket-input */
	BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2inputz00zz__socketz00(obj_t
		BgL_socketz00_63)
	{
		{	/* Llib/socket.scm 585 */
			{	/* Llib/socket.scm 586 */
				bool_t BgL_test2303z00_3620;

				{	/* Llib/socket.scm 586 */
					obj_t BgL_arg1359z00_2652;

					BgL_arg1359z00_2652 = BGL_DATAGRAM_SOCKET_PORT(BgL_socketz00_63);
					BgL_test2303z00_3620 = INPUT_PORTP(BgL_arg1359z00_2652);
				}
				if (BgL_test2303z00_3620)
					{	/* Llib/socket.scm 586 */
						return BGL_DATAGRAM_SOCKET_PORT(BgL_socketz00_63);
					}
				else
					{	/* Llib/socket.scm 586 */
						return
							BGl_errorz00zz__errorz00(BGl_string2042z00zz__socketz00,
							BGl_string2043z00zz__socketz00, BgL_socketz00_63);
					}
			}
		}

	}



/* &datagram-socket-input */
	obj_t BGl_z62datagramzd2socketzd2inputz62zz__socketz00(obj_t BgL_envz00_2484,
		obj_t BgL_socketz00_2485)
	{
		{	/* Llib/socket.scm 585 */
			{	/* Llib/socket.scm 586 */
				obj_t BgL_auxz00_3625;

				if (BGL_DATAGRAM_SOCKETP(BgL_socketz00_2485))
					{	/* Llib/socket.scm 586 */
						BgL_auxz00_3625 = BgL_socketz00_2485;
					}
				else
					{
						obj_t BgL_auxz00_3628;

						BgL_auxz00_3628 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 26193)), BGl_string2044z00zz__socketz00,
							BGl_string2036z00zz__socketz00, BgL_socketz00_2485);
						FAILURE(BgL_auxz00_3628, BFALSE, BFALSE);
					}
				return BGl_datagramzd2socketzd2inputz00zz__socketz00(BgL_auxz00_3625);
			}
		}

	}



/* _make-datagram-server-socket */
	obj_t BGl__makezd2datagramzd2serverzd2socketzd2zz__socketz00(obj_t
		BgL_env1149z00_66, obj_t BgL_opt1148z00_65)
	{
		{	/* Llib/socket.scm 594 */
			{	/* Llib/socket.scm 594 */

				switch (VECTOR_LENGTH(BgL_opt1148z00_65))
					{
					case ((long) 0):

						{	/* Llib/socket.scm 594 */

							{	/* Llib/socket.scm 594 */
								obj_t BgL_res1751z00_2653;

								BGl_z52socketzd2initz12z92zz__socketz00();
								BgL_res1751z00_2653 =
									bgl_make_datagram_server_socket((int) (((long) 0)));
								return BgL_res1751z00_2653;
							}
						}
						break;
					case ((long) 1):

						{	/* Llib/socket.scm 594 */
							obj_t BgL_portz00_2654;

							BgL_portz00_2654 = VECTOR_REF(BgL_opt1148z00_65, ((long) 0));
							{	/* Llib/socket.scm 594 */

								{	/* Llib/socket.scm 594 */
									obj_t BgL_res1752z00_2655;

									BGl_z52socketzd2initz12z92zz__socketz00();
									{	/* Llib/socket.scm 596 */
										int BgL_tmpz00_3638;

										{	/* Llib/socket.scm 596 */
											obj_t BgL_tmpz00_3639;

											if (INTEGERP(BgL_portz00_2654))
												{	/* Llib/socket.scm 596 */
													BgL_tmpz00_3639 = BgL_portz00_2654;
												}
											else
												{
													obj_t BgL_auxz00_3642;

													BgL_auxz00_3642 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1955z00zz__socketz00,
														BINT(((long) 26707)),
														BGl_string2045z00zz__socketz00,
														BGl_string1982z00zz__socketz00, BgL_portz00_2654);
													FAILURE(BgL_auxz00_3642, BFALSE, BFALSE);
												}
											BgL_tmpz00_3638 = CINT(BgL_tmpz00_3639);
										}
										BgL_res1752z00_2655 =
											bgl_make_datagram_server_socket(BgL_tmpz00_3638);
									}
									return BgL_res1752z00_2655;
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* make-datagram-server-socket */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2datagramzd2serverzd2socketzd2zz__socketz00(obj_t BgL_portz00_64)
	{
		{	/* Llib/socket.scm 594 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			return bgl_make_datagram_server_socket(CINT(BgL_portz00_64));
		}

	}



/* _make-datagram-unbound-socket */
	obj_t BGl__makezd2datagramzd2unboundzd2socketzd2zz__socketz00(obj_t
		BgL_env1153z00_69, obj_t BgL_opt1152z00_68)
	{
		{	/* Llib/socket.scm 601 */
			{	/* Llib/socket.scm 601 */

				switch (VECTOR_LENGTH(BgL_opt1152z00_68))
					{
					case ((long) 0):

						{	/* Llib/socket.scm 601 */
							obj_t BgL_familyz00_2656;

							BgL_familyz00_2656 = BGl_symbol1966z00zz__socketz00;
							{	/* Llib/socket.scm 601 */

								{	/* Llib/socket.scm 601 */
									obj_t BgL_res1753z00_2657;

									BGl_z52socketzd2initz12z92zz__socketz00();
									BgL_res1753z00_2657 =
										bgl_make_datagram_unbound_socket(BgL_familyz00_2656);
									return BgL_res1753z00_2657;
								}
							}
						}
						break;
					case ((long) 1):

						{	/* Llib/socket.scm 601 */
							obj_t BgL_familyz00_2658;

							BgL_familyz00_2658 = VECTOR_REF(BgL_opt1152z00_68, ((long) 0));
							{	/* Llib/socket.scm 601 */

								{	/* Llib/socket.scm 601 */
									obj_t BgL_res1754z00_2659;

									{	/* Llib/socket.scm 601 */
										obj_t BgL_familyz00_2660;

										if (SYMBOLP(BgL_familyz00_2658))
											{	/* Llib/socket.scm 601 */
												BgL_familyz00_2660 = BgL_familyz00_2658;
											}
										else
											{
												obj_t BgL_auxz00_3658;

												BgL_auxz00_3658 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1955z00zz__socketz00, BINT(((long) 26937)),
													BGl_string2046z00zz__socketz00,
													BGl_string2031z00zz__socketz00, BgL_familyz00_2658);
												FAILURE(BgL_auxz00_3658, BFALSE, BFALSE);
											}
										BGl_z52socketzd2initz12z92zz__socketz00();
										BgL_res1754z00_2659 =
											bgl_make_datagram_unbound_socket(BgL_familyz00_2660);
									}
									return BgL_res1754z00_2659;
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* make-datagram-unbound-socket */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2datagramzd2unboundzd2socketzd2zz__socketz00(obj_t
		BgL_familyz00_67)
	{
		{	/* Llib/socket.scm 601 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			return bgl_make_datagram_unbound_socket(BgL_familyz00_67);
		}

	}



/* _make-datagram-client-socket */
	obj_t BGl__makezd2datagramzd2clientzd2socketzd2zz__socketz00(obj_t
		BgL_env1157z00_74, obj_t BgL_opt1156z00_73)
	{
		{	/* Llib/socket.scm 608 */
			{	/* Llib/socket.scm 608 */
				obj_t BgL_g1158z00_2661;
				obj_t BgL_g1159z00_2662;

				BgL_g1158z00_2661 = VECTOR_REF(BgL_opt1156z00_73, ((long) 0));
				BgL_g1159z00_2662 = VECTOR_REF(BgL_opt1156z00_73, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1156z00_73))
					{
					case ((long) 2):

						{	/* Llib/socket.scm 608 */

							{	/* Llib/socket.scm 608 */
								obj_t BgL_res1755z00_2663;

								{	/* Llib/socket.scm 608 */
									obj_t BgL_hostnamez00_2664;
									int BgL_portz00_2665;

									if (STRINGP(BgL_g1158z00_2661))
										{	/* Llib/socket.scm 608 */
											BgL_hostnamez00_2664 = BgL_g1158z00_2661;
										}
									else
										{
											obj_t BgL_auxz00_3672;

											BgL_auxz00_3672 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string1955z00zz__socketz00, BINT(((long) 27303)),
												BGl_string2047z00zz__socketz00,
												BGl_string1961z00zz__socketz00, BgL_g1158z00_2661);
											FAILURE(BgL_auxz00_3672, BFALSE, BFALSE);
										}
									{	/* Llib/socket.scm 608 */
										obj_t BgL_tmpz00_3676;

										if (INTEGERP(BgL_g1159z00_2662))
											{	/* Llib/socket.scm 608 */
												BgL_tmpz00_3676 = BgL_g1159z00_2662;
											}
										else
											{
												obj_t BgL_auxz00_3679;

												BgL_auxz00_3679 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1955z00zz__socketz00, BINT(((long) 27303)),
													BGl_string2047z00zz__socketz00,
													BGl_string1982z00zz__socketz00, BgL_g1159z00_2662);
												FAILURE(BgL_auxz00_3679, BFALSE, BFALSE);
											}
										BgL_portz00_2665 = CINT(BgL_tmpz00_3676);
									}
									BGl_z52socketzd2initz12z92zz__socketz00();
									BgL_res1755z00_2663 =
										bgl_make_datagram_client_socket(BgL_hostnamez00_2664,
										BgL_portz00_2665, ((bool_t) 0));
								}
								return BgL_res1755z00_2663;
							}
						}
						break;
					case ((long) 3):

						{	/* Llib/socket.scm 608 */
							obj_t BgL_broadcastz00_2666;

							BgL_broadcastz00_2666 = VECTOR_REF(BgL_opt1156z00_73, ((long) 2));
							{	/* Llib/socket.scm 608 */

								{	/* Llib/socket.scm 608 */
									obj_t BgL_res1756z00_2667;

									{	/* Llib/socket.scm 608 */
										obj_t BgL_hostnamez00_2668;
										int BgL_portz00_2669;

										if (STRINGP(BgL_g1158z00_2661))
											{	/* Llib/socket.scm 608 */
												BgL_hostnamez00_2668 = BgL_g1158z00_2661;
											}
										else
											{
												obj_t BgL_auxz00_3689;

												BgL_auxz00_3689 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string1955z00zz__socketz00, BINT(((long) 27303)),
													BGl_string2047z00zz__socketz00,
													BGl_string1961z00zz__socketz00, BgL_g1158z00_2661);
												FAILURE(BgL_auxz00_3689, BFALSE, BFALSE);
											}
										{	/* Llib/socket.scm 608 */
											obj_t BgL_tmpz00_3693;

											if (INTEGERP(BgL_g1159z00_2662))
												{	/* Llib/socket.scm 608 */
													BgL_tmpz00_3693 = BgL_g1159z00_2662;
												}
											else
												{
													obj_t BgL_auxz00_3696;

													BgL_auxz00_3696 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string1955z00zz__socketz00,
														BINT(((long) 27303)),
														BGl_string2047z00zz__socketz00,
														BGl_string1982z00zz__socketz00, BgL_g1159z00_2662);
													FAILURE(BgL_auxz00_3696, BFALSE, BFALSE);
												}
											BgL_portz00_2669 = CINT(BgL_tmpz00_3693);
										}
										BGl_z52socketzd2initz12z92zz__socketz00();
										BgL_res1756z00_2667 =
											bgl_make_datagram_client_socket(BgL_hostnamez00_2668,
											BgL_portz00_2669, CBOOL(BgL_broadcastz00_2666));
									}
									return BgL_res1756z00_2667;
								}
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* make-datagram-client-socket */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2datagramzd2clientzd2socketzd2zz__socketz00(obj_t
		BgL_hostnamez00_70, int BgL_portz00_71, obj_t BgL_broadcastz00_72)
	{
		{	/* Llib/socket.scm 608 */
			BGl_z52socketzd2initz12z92zz__socketz00();
			return
				bgl_make_datagram_client_socket(BgL_hostnamez00_70, BgL_portz00_71,
				CBOOL(BgL_broadcastz00_72));
		}

	}



/* datagram-socket-close */
	BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2closez00zz__socketz00(obj_t
		BgL_socketz00_75)
	{
		{	/* Llib/socket.scm 615 */
			return bgl_datagram_socket_close(BgL_socketz00_75);
		}

	}



/* &datagram-socket-close */
	obj_t BGl_z62datagramzd2socketzd2closez62zz__socketz00(obj_t BgL_envz00_2486,
		obj_t BgL_socketz00_2487)
	{
		{	/* Llib/socket.scm 615 */
			{	/* Llib/socket.scm 616 */
				obj_t BgL_auxz00_3710;

				if (BGL_DATAGRAM_SOCKETP(BgL_socketz00_2487))
					{	/* Llib/socket.scm 616 */
						BgL_auxz00_3710 = BgL_socketz00_2487;
					}
				else
					{
						obj_t BgL_auxz00_3713;

						BgL_auxz00_3713 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 27733)), BGl_string2048z00zz__socketz00,
							BGl_string2036z00zz__socketz00, BgL_socketz00_2487);
						FAILURE(BgL_auxz00_3713, BFALSE, BFALSE);
					}
				return BGl_datagramzd2socketzd2closez00zz__socketz00(BgL_auxz00_3710);
			}
		}

	}



/* datagram-socket-receive */
	BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2receivez00zz__socketz00(obj_t
		BgL_socketz00_76, int BgL_lengthz00_77)
	{
		{	/* Llib/socket.scm 621 */
			return
				bgl_datagram_socket_receive(BgL_socketz00_76,
				(long) (BgL_lengthz00_77));
		}

	}



/* &datagram-socket-receive */
	obj_t BGl_z62datagramzd2socketzd2receivez62zz__socketz00(obj_t
		BgL_envz00_2488, obj_t BgL_socketz00_2489, obj_t BgL_lengthz00_2490)
	{
		{	/* Llib/socket.scm 621 */
			{	/* Llib/socket.scm 622 */
				int BgL_auxz00_3727;
				obj_t BgL_auxz00_3720;

				{	/* Llib/socket.scm 622 */
					obj_t BgL_tmpz00_3728;

					if (INTEGERP(BgL_lengthz00_2490))
						{	/* Llib/socket.scm 622 */
							BgL_tmpz00_3728 = BgL_lengthz00_2490;
						}
					else
						{
							obj_t BgL_auxz00_3731;

							BgL_auxz00_3731 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
								BINT(((long) 28050)), BGl_string2049z00zz__socketz00,
								BGl_string1982z00zz__socketz00, BgL_lengthz00_2490);
							FAILURE(BgL_auxz00_3731, BFALSE, BFALSE);
						}
					BgL_auxz00_3727 = CINT(BgL_tmpz00_3728);
				}
				if (BGL_DATAGRAM_SOCKETP(BgL_socketz00_2489))
					{	/* Llib/socket.scm 622 */
						BgL_auxz00_3720 = BgL_socketz00_2489;
					}
				else
					{
						obj_t BgL_auxz00_3723;

						BgL_auxz00_3723 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 28050)), BGl_string2049z00zz__socketz00,
							BGl_string2036z00zz__socketz00, BgL_socketz00_2489);
						FAILURE(BgL_auxz00_3723, BFALSE, BFALSE);
					}
				return
					BGl_datagramzd2socketzd2receivez00zz__socketz00(BgL_auxz00_3720,
					BgL_auxz00_3727);
			}
		}

	}



/* datagram-socket-send */
	BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2sendz00zz__socketz00(obj_t
		BgL_socketz00_78, obj_t BgL_stringz00_79, obj_t BgL_hostz00_80,
		int BgL_portz00_81)
	{
		{	/* Llib/socket.scm 627 */
			return
				bgl_datagram_socket_send(BgL_socketz00_78, BgL_stringz00_79,
				BgL_hostz00_80, BgL_portz00_81);
		}

	}



/* &datagram-socket-send */
	obj_t BGl_z62datagramzd2socketzd2sendz62zz__socketz00(obj_t BgL_envz00_2491,
		obj_t BgL_socketz00_2492, obj_t BgL_stringz00_2493, obj_t BgL_hostz00_2494,
		obj_t BgL_portz00_2495)
	{
		{	/* Llib/socket.scm 627 */
			{	/* Llib/socket.scm 628 */
				int BgL_auxz00_3759;
				obj_t BgL_auxz00_3752;
				obj_t BgL_auxz00_3745;
				obj_t BgL_auxz00_3738;

				{	/* Llib/socket.scm 628 */
					obj_t BgL_tmpz00_3760;

					if (INTEGERP(BgL_portz00_2495))
						{	/* Llib/socket.scm 628 */
							BgL_tmpz00_3760 = BgL_portz00_2495;
						}
					else
						{
							obj_t BgL_auxz00_3763;

							BgL_auxz00_3763 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
								BINT(((long) 28380)), BGl_string2050z00zz__socketz00,
								BGl_string1982z00zz__socketz00, BgL_portz00_2495);
							FAILURE(BgL_auxz00_3763, BFALSE, BFALSE);
						}
					BgL_auxz00_3759 = CINT(BgL_tmpz00_3760);
				}
				if (STRINGP(BgL_hostz00_2494))
					{	/* Llib/socket.scm 628 */
						BgL_auxz00_3752 = BgL_hostz00_2494;
					}
				else
					{
						obj_t BgL_auxz00_3755;

						BgL_auxz00_3755 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 28380)), BGl_string2050z00zz__socketz00,
							BGl_string1961z00zz__socketz00, BgL_hostz00_2494);
						FAILURE(BgL_auxz00_3755, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_stringz00_2493))
					{	/* Llib/socket.scm 628 */
						BgL_auxz00_3745 = BgL_stringz00_2493;
					}
				else
					{
						obj_t BgL_auxz00_3748;

						BgL_auxz00_3748 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 28380)), BGl_string2050z00zz__socketz00,
							BGl_string1961z00zz__socketz00, BgL_stringz00_2493);
						FAILURE(BgL_auxz00_3748, BFALSE, BFALSE);
					}
				if (BGL_DATAGRAM_SOCKETP(BgL_socketz00_2492))
					{	/* Llib/socket.scm 628 */
						BgL_auxz00_3738 = BgL_socketz00_2492;
					}
				else
					{
						obj_t BgL_auxz00_3741;

						BgL_auxz00_3741 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 28380)), BGl_string2050z00zz__socketz00,
							BGl_string2036z00zz__socketz00, BgL_socketz00_2492);
						FAILURE(BgL_auxz00_3741, BFALSE, BFALSE);
					}
				return
					BGl_datagramzd2socketzd2sendz00zz__socketz00(BgL_auxz00_3738,
					BgL_auxz00_3745, BgL_auxz00_3752, BgL_auxz00_3759);
			}
		}

	}



/* datagram-socket-option */
	BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2optionz00zz__socketz00(obj_t
		BgL_socketz00_82, obj_t BgL_optionz00_83)
	{
		{	/* Llib/socket.scm 633 */
			return bgl_getsockopt(BgL_socketz00_82, BgL_optionz00_83);
		}

	}



/* &datagram-socket-option */
	obj_t BGl_z62datagramzd2socketzd2optionz62zz__socketz00(obj_t BgL_envz00_2496,
		obj_t BgL_socketz00_2497, obj_t BgL_optionz00_2498)
	{
		{	/* Llib/socket.scm 633 */
			{	/* Llib/socket.scm 634 */
				obj_t BgL_auxz00_3777;
				obj_t BgL_auxz00_3770;

				if (KEYWORDP(BgL_optionz00_2498))
					{	/* Llib/socket.scm 634 */
						BgL_auxz00_3777 = BgL_optionz00_2498;
					}
				else
					{
						obj_t BgL_auxz00_3780;

						BgL_auxz00_3780 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 28709)), BGl_string2051z00zz__socketz00,
							BGl_string2033z00zz__socketz00, BgL_optionz00_2498);
						FAILURE(BgL_auxz00_3780, BFALSE, BFALSE);
					}
				if (BGL_DATAGRAM_SOCKETP(BgL_socketz00_2497))
					{	/* Llib/socket.scm 634 */
						BgL_auxz00_3770 = BgL_socketz00_2497;
					}
				else
					{
						obj_t BgL_auxz00_3773;

						BgL_auxz00_3773 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 28709)), BGl_string2051z00zz__socketz00,
							BGl_string2036z00zz__socketz00, BgL_socketz00_2497);
						FAILURE(BgL_auxz00_3773, BFALSE, BFALSE);
					}
				return
					BGl_datagramzd2socketzd2optionz00zz__socketz00(BgL_auxz00_3770,
					BgL_auxz00_3777);
			}
		}

	}



/* datagram-socket-option-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_datagramzd2socketzd2optionzd2setz12zc0zz__socketz00(obj_t
		BgL_socketz00_84, obj_t BgL_optionz00_85, obj_t BgL_valz00_86)
	{
		{	/* Llib/socket.scm 639 */
			return bgl_setsockopt(BgL_socketz00_84, BgL_optionz00_85, BgL_valz00_86);
		}

	}



/* &datagram-socket-option-set! */
	obj_t BGl_z62datagramzd2socketzd2optionzd2setz12za2zz__socketz00(obj_t
		BgL_envz00_2499, obj_t BgL_socketz00_2500, obj_t BgL_optionz00_2501,
		obj_t BgL_valz00_2502)
	{
		{	/* Llib/socket.scm 639 */
			{	/* Llib/socket.scm 640 */
				obj_t BgL_auxz00_3793;
				obj_t BgL_auxz00_3786;

				if (KEYWORDP(BgL_optionz00_2501))
					{	/* Llib/socket.scm 640 */
						BgL_auxz00_3793 = BgL_optionz00_2501;
					}
				else
					{
						obj_t BgL_auxz00_3796;

						BgL_auxz00_3796 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 29028)), BGl_string2052z00zz__socketz00,
							BGl_string2033z00zz__socketz00, BgL_optionz00_2501);
						FAILURE(BgL_auxz00_3796, BFALSE, BFALSE);
					}
				if (BGL_DATAGRAM_SOCKETP(BgL_socketz00_2500))
					{	/* Llib/socket.scm 640 */
						BgL_auxz00_3786 = BgL_socketz00_2500;
					}
				else
					{
						obj_t BgL_auxz00_3789;

						BgL_auxz00_3789 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1955z00zz__socketz00,
							BINT(((long) 29028)), BGl_string2052z00zz__socketz00,
							BGl_string2036z00zz__socketz00, BgL_socketz00_2500);
						FAILURE(BgL_auxz00_3789, BFALSE, BFALSE);
					}
				return
					BGl_datagramzd2socketzd2optionzd2setz12zc0zz__socketz00
					(BgL_auxz00_3786, BgL_auxz00_3793, BgL_valz00_2502);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__socketz00()
	{
		{	/* Llib/socket.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__socketz00()
	{
		{	/* Llib/socket.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__socketz00()
	{
		{	/* Llib/socket.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__socketz00()
	{
		{	/* Llib/socket.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2053z00zz__socketz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string2053z00zz__socketz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string2053z00zz__socketz00));
		}

	}

#ifdef __cplusplus
}
#endif
