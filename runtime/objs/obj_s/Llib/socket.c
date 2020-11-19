/*===========================================================================*/
/*   (Llib/socket.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/socket.scm -indent -o objs/obj_s/Llib/socket.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
extern obj_t bgl_socket_host_addr(obj_t);
static obj_t BGl_z62socketzd2localzf3z43zz__socketz00(obj_t, obj_t);
extern obj_t bgl_make_client_socket(obj_t, int, int, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2closezd2zz__socketz00(obj_t);
static obj_t BGl_z62socketzd2hostzd2addresszd3zf3z42zz__socketz00(obj_t, obj_t, obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__socketz00 = BUNSPEC;
static obj_t BGl_z62datagramzd2socketzd2portzd2numberzb0zz__socketz00(obj_t, obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62socketzd2portzd2numberz62zz__socketz00(obj_t, obj_t);
static obj_t BGl_z62socketzd2localzd2addressz62zz__socketz00(obj_t, obj_t);
extern obj_t bgl_gethostname();
BGL_EXPORTED_DECL obj_t BGl_socketzd2acceptzd2manyz00zz__socketz00(obj_t, obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2optionzd2setz12z12zz__socketz00(obj_t, obj_t, obj_t);
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
static obj_t BGl_list2107z00zz__socketz00 = BUNSPEC;
extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl_genericzd2initzd2zz__socketz00();
static obj_t BGl_list2114z00zz__socketz00 = BUNSPEC;
extern bool_t bgl_socket_localp(obj_t);
BGL_EXPORTED_DECL obj_t BGl_getzd2protocolszd2zz__socketz00();
static obj_t BGl_z62socketzd2downzf3z43zz__socketz00(obj_t, obj_t);
static obj_t BGl_objectzd2initzd2zz__socketz00();
static obj_t BGl_z62datagramzd2socketzd2receivez62zz__socketz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62socketzd2clientzf3z43zz__socketz00(obj_t, obj_t);
static obj_t BGl__makezd2datagramzd2clientzd2socketzd2zz__socketz00(obj_t, obj_t);
extern obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
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
static obj_t BGl_list2073z00zz__socketz00 = BUNSPEC;
static obj_t BGl_z62datagramzd2socketzd2hostzd2addresszb0zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2datagramzd2serverzd2socketzd2zz__socketz00(obj_t);
static obj_t BGl__makezd2datagramzd2unboundzd2socketzd2zz__socketz00(obj_t, obj_t);
static obj_t BGl_methodzd2initzd2zz__socketz00();
extern bool_t bgl_socket_host_addr_cmp(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2optionz00zz__socketz00(obj_t, obj_t);
extern obj_t BGl_registerzd2exitzd2functionz12z12zz__biglooz00(obj_t);
BGL_EXPORTED_DECL int BGl_socketzd2shutdownzd2zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_resolvz00zz__socketz00(obj_t, obj_t);
static obj_t BGl_z62datagramzd2socketzd2hostnamez62zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_socketzd2localzf3z21zz__socketz00(obj_t);
extern obj_t bgl_make_datagram_client_socket(obj_t, int, bool_t);
static obj_t BGl_list2096z00zz__socketz00 = BUNSPEC;
extern obj_t bgl_socket_accept(obj_t, bool_t, obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_socketzd2clientzf3z21zz__socketz00(obj_t);
static obj_t BGl_z62getzd2protocolzb0zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2optionzd2setz12zc0zz__socketz00(obj_t, obj_t, obj_t);
static obj_t BGl__socketzd2acceptzd2zz__socketz00(obj_t, obj_t);
static obj_t BGl_keyword2101z00zz__socketz00 = BUNSPEC;
extern obj_t BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_socketzd2serverzf3z21zz__socketz00(obj_t);
static obj_t BGl_keyword2108z00zz__socketz00 = BUNSPEC;
extern obj_t bgl_getprotoents();
extern int socket_shutdown(obj_t, int);
static obj_t BGl_keyword2115z00zz__socketz00 = BUNSPEC;
static obj_t BGl_keyword2117z00zz__socketz00 = BUNSPEC;
static obj_t BGl_z62datagramzd2socketzd2clientzf3z91zz__socketz00(obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t bgl_hostinfo(obj_t);
static obj_t BGl_z62datagramzd2socketzd2serverzf3z91zz__socketz00(obj_t, obj_t);
static obj_t BGl_z62socketzd2closezb0zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2outputzd2zz__socketz00(obj_t);
extern obj_t bgl_gethostname_by_address(obj_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2portzd2numberz00zz__socketz00(obj_t);
extern obj_t bgl_datagram_socket_send(obj_t, obj_t, obj_t, int);
static obj_t BGl_z62hostz62zz__socketz00(obj_t, obj_t);
extern obj_t bgl_datagram_socket_close(obj_t);
extern long bgl_socket_accept_many(obj_t, bool_t, obj_t, obj_t, obj_t);
extern obj_t BGl_applyz00zz__r4_control_features_6_9z00(obj_t, obj_t, obj_t);
extern obj_t bgl_make_server_socket(obj_t, int, int, bool_t);
BGL_EXPORTED_DECL obj_t BGl_socketzd2acceptzd2zz__socketz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62socketzd2inputzb0zz__socketz00(obj_t, obj_t);
static obj_t BGl_keyword2074z00zz__socketz00 = BUNSPEC;
static obj_t BGl_keyword2076z00zz__socketz00 = BUNSPEC;
static obj_t BGl_keyword2078z00zz__socketz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_hostz00zz__socketz00(obj_t);
static obj_t BGl_symbol2110z00zz__socketz00 = BUNSPEC;
extern obj_t bgl_setsockopt(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2119z00zz__socketz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
BGL_EXPORTED_DECL obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t, int, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_search1121ze70ze7zz__socketz00(long, obj_t, obj_t, long);
extern obj_t bgl_gethostinterfaces();
static obj_t BGl_keyword2080z00zz__socketz00 = BUNSPEC;
static obj_t BGl_symbol2126z00zz__socketz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2outputz00zz__socketz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_z52socketzd2initz12z92zz__socketz00();
static obj_t BGl_keyword2097z00zz__socketz00 = BUNSPEC;
static obj_t BGl_keyword2099z00zz__socketz00 = BUNSPEC;
static obj_t BGl_symbol2130z00zz__socketz00 = BUNSPEC;
static obj_t BGl_z62getzd2interfaceszb0zz__socketz00(obj_t);
static obj_t BGl_symbol2132z00zz__socketz00 = BUNSPEC;
static obj_t BGl_symbol2134z00zz__socketz00 = BUNSPEC;
extern obj_t bgl_make_datagram_unbound_socket(obj_t);
extern obj_t bgl_getsockopt(obj_t, obj_t);
static obj_t BGl_z62datagramzd2socketzd2optionzd2setz12za2zz__socketz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62datagramzd2socketzd2optionz62zz__socketz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2hostnamez00zz__socketz00(obj_t);
static obj_t BGl_cnstzd2initzd2zz__socketz00();
static obj_t BGl_z62socketzd2optionzd2setz12z70zz__socketz00(obj_t, obj_t, obj_t, obj_t);
extern obj_t bgl_getprotobyname(char *);
BGL_EXPORTED_DECL obj_t BGl_socketzd2hostnamezd2zz__socketz00(obj_t);
extern obj_t BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol2140z00zz__socketz00 = BUNSPEC;
static obj_t BGl_z62resolvz62zz__socketz00(obj_t, obj_t, obj_t);
extern obj_t BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(obj_t, obj_t, int);
static obj_t BGl_z62socketzd2hostnamezb0zz__socketz00(obj_t, obj_t);
static obj_t BGl_z62makezd2serverzd2socketz62zz__socketz00(obj_t, obj_t);
static obj_t BGl_search1131ze70ze7zz__socketz00(long, obj_t, obj_t, long);
static obj_t BGl_gczd2rootszd2initz00zz__socketz00();
BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2receivez00zz__socketz00(obj_t, int);
static obj_t BGl_importedzd2moduleszd2initz00zz__socketz00();
static obj_t BGl_symbol2070z00zz__socketz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2closez00zz__socketz00(obj_t);
extern obj_t socket_close(obj_t);
static obj_t BGl__makezd2datagramzd2serverzd2socketzd2zz__socketz00(obj_t, obj_t);
static obj_t BGl_z62zc3z04anonymousza31279ze3ze5zz__socketz00(obj_t, obj_t);
static obj_t BGl_symbol2162z00zz__socketz00 = BUNSPEC;
static obj_t BGl_symbol2082z00zz__socketz00 = BUNSPEC;
static obj_t BGl_symbol2165z00zz__socketz00 = BUNSPEC;
static obj_t BGl_symbol2168z00zz__socketz00 = BUNSPEC;
static obj_t BGl_symbol2088z00zz__socketz00 = BUNSPEC;
static bool_t BGl_za2socketzd2initializa7edza2z75zz__socketz00;
BGL_EXPORTED_DECL bool_t BGl_socketzd2downzf3z21zz__socketz00(obj_t);
extern obj_t bgl_datagram_socket_receive(obj_t, long);
BGL_EXPORTED_DECL bool_t BGl_datagramzd2socketzf3z21zz__socketz00(obj_t);
static obj_t BGl_z62datagramzd2socketzd2sendz62zz__socketz00(obj_t, obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_symbol2090z00zz__socketz00 = BUNSPEC;
static obj_t BGl_za2socketzd2mutexza2zd2zz__socketz00 = BUNSPEC;
static obj_t BGl_z62socketzf3z91zz__socketz00(obj_t, obj_t);
static obj_t BGl_search1107ze70ze7zz__socketz00(long, obj_t, obj_t, long);
static obj_t BGl__socketzd2acceptzd2manyz00zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2datagramzd2clientzd2socketzd2zz__socketz00(obj_t, int, obj_t);
BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2inputz00zz__socketz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2portzd2numberzd2zz__socketz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_getzd2interfaceszd2zz__socketz00();
extern obj_t bgl_setsockopt(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2sendz00zz__socketz00(obj_t, obj_t, obj_t, int);
static obj_t BGl_z62getzd2protocolszb0zz__socketz00(obj_t);
static obj_t BGl_z62datagramzd2socketzd2closez62zz__socketz00(obj_t, obj_t);
extern obj_t BGl_mapz00zz__r4_control_features_6_9z00(obj_t, obj_t);
static obj_t BGl_z62socketzd2optionzb0zz__socketz00(obj_t, obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
BGL_EXPORTED_DECL obj_t BGl_datagramzd2socketzd2hostzd2addresszd2zz__socketz00(obj_t);
static obj_t BGl_z62socketzd2hostzd2addressz62zz__socketz00(obj_t, obj_t);
extern obj_t bgl_make_datagram_server_socket(int);
extern void socket_startup();
extern obj_t bstring_to_keyword(obj_t);
BGL_EXPORTED_DECL bool_t BGl_socketzd2hostzd2addresszd3zf3z20zz__socketz00(obj_t, obj_t);
extern obj_t bgl_socket_local_addr(obj_t);
extern obj_t bgl_getprotobynumber(int);
static obj_t BGl_z62datagramzd2socketzd2inputz62zz__socketz00(obj_t, obj_t);
static obj_t BGl_z62datagramzd2socketzd2outputz62zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_datagramzd2socketzd2clientzf3zf3zz__socketz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2datagramzd2unboundzd2socketzd2zz__socketz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_getzd2protocolzd2zz__socketz00(obj_t);
static obj_t BGl_z62datagramzd2socketzf3z43zz__socketz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_datagramzd2socketzd2serverzf3zf3zz__socketz00(obj_t);
static obj_t BGl_z62hostinfoz62zz__socketz00(obj_t, obj_t);
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_hostnamezd2envzd2zz__socketz00, BgL_bgl__hostnameza700za7za7__2178za7, opt_generic_entry, BGl__hostnamez00zz__socketz00, BFALSE, -1 );
DEFINE_STRING( BGl_string2120z00zz__socketz00, BgL_bgl_string2120za700za7za7_2179za7, "socket-accept-many", 18 );
DEFINE_STRING( BGl_string2121z00zz__socketz00, BgL_bgl_string2121za700za7za7_2180za7, "_socket-accept-many", 19 );
DEFINE_STRING( BGl_string2122z00zz__socketz00, BgL_bgl_string2122za700za7za7_2181za7, "vector", 6 );
DEFINE_STRING( BGl_string2123z00zz__socketz00, BgL_bgl_string2123za700za7za7_2182za7, "wrong number of arguments: [2..5] expected, provided", 52 );
DEFINE_STRING( BGl_string2124z00zz__socketz00, BgL_bgl_string2124za700za7za7_2183za7, "loop", 4 );
DEFINE_STRING( BGl_string2125z00zz__socketz00, BgL_bgl_string2125za700za7za7_2184za7, "vector-set!", 11 );
DEFINE_STRING( BGl_string2127z00zz__socketz00, BgL_bgl_string2127za700za7za7_2185za7, "socket-shutdown", 15 );
DEFINE_STRING( BGl_string2128z00zz__socketz00, BgL_bgl_string2128za700za7za7_2186za7, "wrong number of arguments: [1..2] expected, provided", 52 );
DEFINE_STRING( BGl_string2129z00zz__socketz00, BgL_bgl_string2129za700za7za7_2187za7, "_socket-shutdown", 16 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2hostnamezd2envzd2zz__socketz00, BgL_bgl_za762datagramza7d2so2188z00, BGl_z62datagramzd2socketzd2hostnamez62zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2131z00zz__socketz00, BgL_bgl_string2131za700za7za7_2189za7, "RDWR", 4 );
DEFINE_STRING( BGl_string2133z00zz__socketz00, BgL_bgl_string2133za700za7za7_2190za7, "WR", 2 );
DEFINE_STRING( BGl_string2135z00zz__socketz00, BgL_bgl_string2135za700za7za7_2191za7, "RD", 2 );
DEFINE_STRING( BGl_string2136z00zz__socketz00, BgL_bgl_string2136za700za7za7_2192za7, "wrong optional argument", 23 );
DEFINE_STRING( BGl_string2137z00zz__socketz00, BgL_bgl_string2137za700za7za7_2193za7, "&socket-close", 13 );
DEFINE_STRING( BGl_string2138z00zz__socketz00, BgL_bgl_string2138za700za7za7_2194za7, "&host", 5 );
DEFINE_STRING( BGl_string2057z00zz__socketz00, BgL_bgl_string2057za700za7za7_2195za7, "socket", 6 );
DEFINE_STRING( BGl_string2139z00zz__socketz00, BgL_bgl_string2139za700za7za7_2196za7, "&hostinfo", 9 );
DEFINE_STRING( BGl_string2059z00zz__socketz00, BgL_bgl_string2059za700za7za7_2197za7, "/tmp/4.4a/runtime/Llib/socket.scm", 33 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2datagramzd2serverzd2socketzd2envz00zz__socketz00, BgL_bgl__makeza7d2datagram2198za7, opt_generic_entry, BGl__makezd2datagramzd2serverzd2socketzd2zz__socketz00, BFALSE, -1 );
DEFINE_STRING( BGl_string2141z00zz__socketz00, BgL_bgl_string2141za700za7za7_2199za7, "hostname", 8 );
DEFINE_STRING( BGl_string2060z00zz__socketz00, BgL_bgl_string2060za700za7za7_2200za7, "&socket-hostname", 16 );
DEFINE_STRING( BGl_string2142z00zz__socketz00, BgL_bgl_string2142za700za7za7_2201za7, "wrong number of arguments: [0..1] expected, provided", 52 );
DEFINE_STRING( BGl_string2061z00zz__socketz00, BgL_bgl_string2061za700za7za7_2202za7, "&socket-host-address", 20 );
DEFINE_STRING( BGl_string2143z00zz__socketz00, BgL_bgl_string2143za700za7za7_2203za7, "_hostname", 9 );
DEFINE_STRING( BGl_string2062z00zz__socketz00, BgL_bgl_string2062za700za7za7_2204za7, "&socket-local-address", 21 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2058z00zz__socketz00, BgL_bgl_za762za7c3za704anonymo2205za7, BGl_z62zc3z04anonymousza31240ze3ze5zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2144z00zz__socketz00, BgL_bgl_string2144za700za7za7_2206za7, "&resolv", 7 );
DEFINE_STRING( BGl_string2063z00zz__socketz00, BgL_bgl_string2063za700za7za7_2207za7, "&socket-local?", 14 );
DEFINE_STRING( BGl_string2145z00zz__socketz00, BgL_bgl_string2145za700za7za7_2208za7, "symbol", 6 );
DEFINE_STRING( BGl_string2064z00zz__socketz00, BgL_bgl_string2064za700za7za7_2209za7, "&socket-host-address=?", 22 );
DEFINE_STRING( BGl_string2146z00zz__socketz00, BgL_bgl_string2146za700za7za7_2210za7, "get-protocol", 12 );
DEFINE_STRING( BGl_string2065z00zz__socketz00, BgL_bgl_string2065za700za7za7_2211za7, "bstring", 7 );
DEFINE_STRING( BGl_string2147z00zz__socketz00, BgL_bgl_string2147za700za7za7_2212za7, "&socket-option", 14 );
DEFINE_STRING( BGl_string2066z00zz__socketz00, BgL_bgl_string2066za700za7za7_2213za7, "&socket-down?", 13 );
DEFINE_STRING( BGl_string2148z00zz__socketz00, BgL_bgl_string2148za700za7za7_2214za7, "keyword", 7 );
DEFINE_STRING( BGl_string2067z00zz__socketz00, BgL_bgl_string2067za700za7za7_2215za7, "&socket-port-number", 19 );
DEFINE_STRING( BGl_string2149z00zz__socketz00, BgL_bgl_string2149za700za7za7_2216za7, "&socket-option-set!", 19 );
DEFINE_STRING( BGl_string2068z00zz__socketz00, BgL_bgl_string2068za700za7za7_2217za7, "&socket-input", 13 );
DEFINE_STRING( BGl_string2069z00zz__socketz00, BgL_bgl_string2069za700za7za7_2218za7, "&socket-output", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2acceptzd2manyzd2envzd2zz__socketz00, BgL_bgl__socketza7d2accept2219za7, opt_generic_entry, BGl__socketzd2acceptzd2manyz00zz__socketz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2optionzd2envz00zz__socketz00, BgL_bgl_za762socketza7d2opti2220z00, BGl_z62socketzd2optionzb0zz__socketz00, 0L, BUNSPEC, 2 );
extern obj_t BGl_stringzd2appendzd2envz00zz__r4_strings_6_7z00;
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2serverzd2socketzd2envzd2zz__socketz00, BgL_bgl_za762makeza7d2server2221z00, va_generic_entry, BGl_z62makezd2serverzd2socketz62zz__socketz00, BUNSPEC, -1 );
DEFINE_STRING( BGl_string2150z00zz__socketz00, BgL_bgl_string2150za700za7za7_2222za7, "&datagram-socket-hostname", 25 );
DEFINE_STRING( BGl_string2151z00zz__socketz00, BgL_bgl_string2151za700za7za7_2223za7, "datagram-socket", 15 );
DEFINE_STRING( BGl_string2152z00zz__socketz00, BgL_bgl_string2152za700za7za7_2224za7, "&datagram-socket-host-address", 29 );
DEFINE_STRING( BGl_string2071z00zz__socketz00, BgL_bgl_string2071za700za7za7_2225za7, "inet", 4 );
DEFINE_STRING( BGl_string2153z00zz__socketz00, BgL_bgl_string2153za700za7za7_2226za7, "&datagram-socket-port-number", 28 );
DEFINE_STRING( BGl_string2072z00zz__socketz00, BgL_bgl_string2072za700za7za7_2227za7, "vector-ref", 10 );
DEFINE_STRING( BGl_string2154z00zz__socketz00, BgL_bgl_string2154za700za7za7_2228za7, "datagram-socket-output", 22 );
DEFINE_STRING( BGl_string2155z00zz__socketz00, BgL_bgl_string2155za700za7za7_2229za7, "output-port", 11 );
DEFINE_STRING( BGl_string2156z00zz__socketz00, BgL_bgl_string2156za700za7za7_2230za7, "Datagram-socket has no output port", 34 );
DEFINE_STRING( BGl_string2075z00zz__socketz00, BgL_bgl_string2075za700za7za7_2231za7, "domain", 6 );
DEFINE_STRING( BGl_string2157z00zz__socketz00, BgL_bgl_string2157za700za7za7_2232za7, "&datagram-socket-output", 23 );
DEFINE_STRING( BGl_string2158z00zz__socketz00, BgL_bgl_string2158za700za7za7_2233za7, "datagram-socket-input", 21 );
DEFINE_STRING( BGl_string2077z00zz__socketz00, BgL_bgl_string2077za700za7za7_2234za7, "inbuf", 5 );
DEFINE_STRING( BGl_string2159z00zz__socketz00, BgL_bgl_string2159za700za7za7_2235za7, "input-port", 10 );
DEFINE_STRING( BGl_string2079z00zz__socketz00, BgL_bgl_string2079za700za7za7_2236za7, "outbuf", 6 );
DEFINE_STRING( BGl_string2160z00zz__socketz00, BgL_bgl_string2160za700za7za7_2237za7, "Datagram-socket has no input port", 33 );
DEFINE_STRING( BGl_string2161z00zz__socketz00, BgL_bgl_string2161za700za7za7_2238za7, "&datagram-socket-input", 22 );
DEFINE_STRING( BGl_string2081z00zz__socketz00, BgL_bgl_string2081za700za7za7_2239za7, "timeout", 7 );
DEFINE_STRING( BGl_string2163z00zz__socketz00, BgL_bgl_string2163za700za7za7_2240za7, "make-datagram-server-socket", 27 );
DEFINE_STRING( BGl_string2164z00zz__socketz00, BgL_bgl_string2164za700za7za7_2241za7, "_make-datagram-server-socket", 28 );
DEFINE_STRING( BGl_string2083z00zz__socketz00, BgL_bgl_string2083za700za7za7_2242za7, "make-client-socket::socket", 26 );
DEFINE_STRING( BGl_string2084z00zz__socketz00, BgL_bgl_string2084za700za7za7_2243za7, "Illegal keyword argument", 24 );
DEFINE_STRING( BGl_string2166z00zz__socketz00, BgL_bgl_string2166za700za7za7_2244za7, "make-datagram-unbound-socket", 28 );
DEFINE_STRING( BGl_string2085z00zz__socketz00, BgL_bgl_string2085za700za7za7_2245za7, "_make-client-socket", 19 );
DEFINE_STRING( BGl_string2167z00zz__socketz00, BgL_bgl_string2167za700za7za7_2246za7, "_make-datagram-unbound-socket", 29 );
DEFINE_STRING( BGl_string2086z00zz__socketz00, BgL_bgl_string2086za700za7za7_2247za7, "bint", 4 );
DEFINE_STRING( BGl_string2087z00zz__socketz00, BgL_bgl_string2087za700za7za7_2248za7, "make-client-socket", 18 );
DEFINE_STRING( BGl_string2169z00zz__socketz00, BgL_bgl_string2169za700za7za7_2249za7, "make-datagram-client-socket", 27 );
DEFINE_STRING( BGl_string2089z00zz__socketz00, BgL_bgl_string2089za700za7za7_2250za7, "unix", 4 );
DEFINE_STRING( BGl_string2170z00zz__socketz00, BgL_bgl_string2170za700za7za7_2251za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string2171z00zz__socketz00, BgL_bgl_string2171za700za7za7_2252za7, "_make-datagram-client-socket", 28 );
DEFINE_STRING( BGl_string2172z00zz__socketz00, BgL_bgl_string2172za700za7za7_2253za7, "&datagram-socket-close", 22 );
DEFINE_STRING( BGl_string2091z00zz__socketz00, BgL_bgl_string2091za700za7za7_2254za7, "local", 5 );
DEFINE_STRING( BGl_string2173z00zz__socketz00, BgL_bgl_string2173za700za7za7_2255za7, "&datagram-socket-receive", 24 );
DEFINE_STRING( BGl_string2092z00zz__socketz00, BgL_bgl_string2092za700za7za7_2256za7, "Unknown socket domain", 21 );
DEFINE_STRING( BGl_string2174z00zz__socketz00, BgL_bgl_string2174za700za7za7_2257za7, "&datagram-socket-send", 21 );
DEFINE_STRING( BGl_string2093z00zz__socketz00, BgL_bgl_string2093za700za7za7_2258za7, "wrong number of arguments: [2..6] expected, provided", 52 );
DEFINE_STRING( BGl_string2175z00zz__socketz00, BgL_bgl_string2175za700za7za7_2259za7, "&datagram-socket-option", 23 );
DEFINE_STRING( BGl_string2094z00zz__socketz00, BgL_bgl_string2094za700za7za7_2260za7, "make-server-socket", 18 );
DEFINE_STRING( BGl_string2176z00zz__socketz00, BgL_bgl_string2176za700za7za7_2261za7, "&datagram-socket-option-set!", 28 );
DEFINE_STRING( BGl_string2095z00zz__socketz00, BgL_bgl_string2095za700za7za7_2262za7, "pair", 4 );
DEFINE_STRING( BGl_string2177z00zz__socketz00, BgL_bgl_string2177za700za7za7_2263za7, "__socket", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2clientzf3zd2envz21zz__socketz00, BgL_bgl_za762datagramza7d2so2264z00, BGl_z62datagramzd2socketzd2clientzf3z91zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2098z00zz__socketz00, BgL_bgl_string2098za700za7za7_2265za7, "ipv6", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2datagramzd2unboundzd2socketzd2envz00zz__socketz00, BgL_bgl__makeza7d2datagram2266za7, opt_generic_entry, BGl__makezd2datagramzd2unboundzd2socketzd2zz__socketz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2serverzf3zd2envz21zz__socketz00, BgL_bgl_za762datagramza7d2so2267z00, BGl_z62datagramzd2socketzd2serverzf3z91zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2optionzd2setz12zd2envzc0zz__socketz00, BgL_bgl_za762socketza7d2opti2268z00, BGl_z62socketzd2optionzd2setz12z70zz__socketz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2outputzd2envzd2zz__socketz00, BgL_bgl_za762datagramza7d2so2269z00, BGl_z62datagramzd2socketzd2outputz62zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzf3zd2envz21zz__socketz00, BgL_bgl_za762socketza7f3za791za72270z00, BGl_z62socketzf3z91zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2optionzd2setz12zd2envz12zz__socketz00, BgL_bgl_za762datagramza7d2so2271z00, BGl_z62datagramzd2socketzd2optionzd2setz12za2zz__socketz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2hostzd2addresszd3zf3zd2envzf2zz__socketz00, BgL_bgl_za762socketza7d2host2272z00, BGl_z62socketzd2hostzd2addresszd3zf3z42zz__socketz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2hostnamezd2envz00zz__socketz00, BgL_bgl_za762socketza7d2host2273z00, BGl_z62socketzd2hostnamezb0zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2inputzd2envzd2zz__socketz00, BgL_bgl_za762datagramza7d2so2274z00, BGl_z62datagramzd2socketzd2inputz62zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2acceptzd2envz00zz__socketz00, BgL_bgl__socketza7d2accept2275za7, opt_generic_entry, BGl__socketzd2acceptzd2zz__socketz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hostzd2envzd2zz__socketz00, BgL_bgl_za762hostza762za7za7__so2276z00, BGl_z62hostz62zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2localzf3zd2envzf3zz__socketz00, BgL_bgl_za762socketza7d2loca2277z00, BGl_z62socketzd2localzf3z43zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2outputzd2envz00zz__socketz00, BgL_bgl_za762socketza7d2outp2278z00, BGl_z62socketzd2outputzb0zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2downzf3zd2envzf3zz__socketz00, BgL_bgl_za762socketza7d2down2279z00, BGl_z62socketzd2downzf3z43zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2protocolszd2envz00zz__socketz00, BgL_bgl_za762getza7d2protoco2280z00, BGl_z62getzd2protocolszb0zz__socketz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2hostzd2addresszd2envz00zz__socketz00, BgL_bgl_za762datagramza7d2so2281z00, BGl_z62datagramzd2socketzd2hostzd2addresszb0zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzf3zd2envzf3zz__socketz00, BgL_bgl_za762datagramza7d2so2282z00, BGl_z62datagramzd2socketzf3z43zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_hostinfozd2envzd2zz__socketz00, BgL_bgl_za762hostinfoza762za7za72283z00, BGl_z62hostinfoz62zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2closezd2envz00zz__socketz00, BgL_bgl_za762socketza7d2clos2284z00, BGl_z62socketzd2closezb0zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2datagramzd2clientzd2socketzd2envz00zz__socketz00, BgL_bgl__makeza7d2datagram2285za7, opt_generic_entry, BGl__makezd2datagramzd2clientzd2socketzd2zz__socketz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2receivezd2envzd2zz__socketz00, BgL_bgl_za762datagramza7d2so2286z00, BGl_z62datagramzd2socketzd2receivez62zz__socketz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2sendzd2envzd2zz__socketz00, BgL_bgl_za762datagramza7d2so2287z00, BGl_z62datagramzd2socketzd2sendz62zz__socketz00, 0L, BUNSPEC, 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2clientzd2socketzd2envzd2zz__socketz00, BgL_bgl__makeza7d2clientza7d2288z00, opt_generic_entry, BGl__makezd2clientzd2socketz00zz__socketz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2shutdownzd2envz00zz__socketz00, BgL_bgl__socketza7d2shutdo2289za7, opt_generic_entry, BGl__socketzd2shutdownzd2zz__socketz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_z52socketzd2initz12zd2envz40zz__socketz00, BgL_bgl_za762za752socketza7d2i2290za7, BGl_z62z52socketzd2initz12zf0zz__socketz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2portzd2numberzd2envzd2zz__socketz00, BgL_bgl_za762socketza7d2port2291z00, BGl_z62socketzd2portzd2numberz62zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2localzd2addresszd2envzd2zz__socketz00, BgL_bgl_za762socketza7d2loca2292z00, BGl_z62socketzd2localzd2addressz62zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2portzd2numberzd2envz00zz__socketz00, BgL_bgl_za762datagramza7d2so2293z00, BGl_z62datagramzd2socketzd2portzd2numberzb0zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_resolvzd2envzd2zz__socketz00, BgL_bgl_za762resolvza762za7za7__2294z00, BGl_z62resolvz62zz__socketz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2protocolzd2envz00zz__socketz00, BgL_bgl_za762getza7d2protoco2295z00, BGl_z62getzd2protocolzb0zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2inputzd2envz00zz__socketz00, BgL_bgl_za762socketza7d2inpu2296z00, BGl_z62socketzd2inputzb0zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2clientzf3zd2envzf3zz__socketz00, BgL_bgl_za762socketza7d2clie2297z00, BGl_z62socketzd2clientzf3z43zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2serverzf3zd2envzf3zz__socketz00, BgL_bgl_za762socketza7d2serv2298z00, BGl_z62socketzd2serverzf3z43zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2interfaceszd2envz00zz__socketz00, BgL_bgl_za762getza7d2interfa2299z00, BGl_z62getzd2interfaceszb0zz__socketz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string2100z00zz__socketz00, BgL_bgl_string2100za700za7za7_2300za7, "backlog", 7 );
DEFINE_STRING( BGl_string2102z00zz__socketz00, BgL_bgl_string2102za700za7za7_2301za7, "name", 4 );
DEFINE_STRING( BGl_string2104z00zz__socketz00, BgL_bgl_string2104za700za7za7_2302za7, "Illegal extra key arguments: ", 29 );
DEFINE_STRING( BGl_string2105z00zz__socketz00, BgL_bgl_string2105za700za7za7_2303za7, "dsssl-get-key-arg", 17 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2closezd2envzd2zz__socketz00, BgL_bgl_za762datagramza7d2so2304z00, BGl_z62datagramzd2socketzd2closez62zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2106z00zz__socketz00, BgL_bgl_string2106za700za7za7_2305za7, "~a ", 3 );
DEFINE_STRING( BGl_string2109z00zz__socketz00, BgL_bgl_string2109za700za7za7_2306za7, "errp", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datagramzd2socketzd2optionzd2envzd2zz__socketz00, BgL_bgl_za762datagramza7d2so2307z00, BGl_z62datagramzd2socketzd2optionz62zz__socketz00, 0L, BUNSPEC, 2 );
DEFINE_STATIC_BGL_PROCEDURE( BGl_proc2103z00zz__socketz00, BgL_bgl_za762za7c3za704anonymo2308za7, BGl_z62zc3z04anonymousza31279ze3ze5zz__socketz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string2111z00zz__socketz00, BgL_bgl_string2111za700za7za7_2309za7, "socket-accept", 13 );
DEFINE_STRING( BGl_string2112z00zz__socketz00, BgL_bgl_string2112za700za7za7_2310za7, "_socket-accept", 14 );
DEFINE_STRING( BGl_string2113z00zz__socketz00, BgL_bgl_string2113za700za7za7_2311za7, "wrong number of arguments: [1..4] expected, provided", 52 );
DEFINE_STRING( BGl_string2116z00zz__socketz00, BgL_bgl_string2116za700za7za7_2312za7, "inbufs", 6 );
DEFINE_STRING( BGl_string2118z00zz__socketz00, BgL_bgl_string2118za700za7za7_2313za7, "outbufs", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_socketzd2hostzd2addresszd2envzd2zz__socketz00, BgL_bgl_za762socketza7d2host2314z00, BGl_z62socketzd2hostzd2addressz62zz__socketz00, 0L, BUNSPEC, 1 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__socketz00) );
ADD_ROOT( (void *)(&BGl_list2107z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_list2114z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_list2073z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_list2096z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_keyword2101z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_keyword2108z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_keyword2115z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_keyword2117z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_keyword2074z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_keyword2076z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_keyword2078z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2110z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2119z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_keyword2080z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2126z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_keyword2097z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_keyword2099z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2130z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2132z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2134z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2140z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2070z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2162z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2082z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2165z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2168z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2088z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_symbol2090z00zz__socketz00) );
ADD_ROOT( (void *)(&BGl_za2socketzd2mutexza2zd2zz__socketz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__socketz00(long BgL_checksumz00_2548, char * BgL_fromz00_2549)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__socketz00))
{ 
BGl_requirezd2initializa7ationz75zz__socketz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__socketz00(); 
BGl_cnstzd2initzd2zz__socketz00(); 
BGl_importedzd2moduleszd2initz00zz__socketz00(); 
return 
BGl_toplevelzd2initzd2zz__socketz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__socketz00()
{
{ /* Llib/socket.scm 14 */
BGl_symbol2070z00zz__socketz00 = 
bstring_to_symbol(BGl_string2071z00zz__socketz00); 
BGl_keyword2074z00zz__socketz00 = 
bstring_to_keyword(BGl_string2075z00zz__socketz00); 
BGl_keyword2076z00zz__socketz00 = 
bstring_to_keyword(BGl_string2077z00zz__socketz00); 
BGl_keyword2078z00zz__socketz00 = 
bstring_to_keyword(BGl_string2079z00zz__socketz00); 
BGl_keyword2080z00zz__socketz00 = 
bstring_to_keyword(BGl_string2081z00zz__socketz00); 
BGl_list2073z00zz__socketz00 = 
MAKE_YOUNG_PAIR(BGl_keyword2074z00zz__socketz00, 
MAKE_YOUNG_PAIR(BGl_keyword2076z00zz__socketz00, 
MAKE_YOUNG_PAIR(BGl_keyword2078z00zz__socketz00, 
MAKE_YOUNG_PAIR(BGl_keyword2080z00zz__socketz00, BNIL)))); 
BGl_symbol2082z00zz__socketz00 = 
bstring_to_symbol(BGl_string2083z00zz__socketz00); 
BGl_symbol2088z00zz__socketz00 = 
bstring_to_symbol(BGl_string2089z00zz__socketz00); 
BGl_symbol2090z00zz__socketz00 = 
bstring_to_symbol(BGl_string2091z00zz__socketz00); 
BGl_keyword2097z00zz__socketz00 = 
bstring_to_keyword(BGl_string2098z00zz__socketz00); 
BGl_keyword2099z00zz__socketz00 = 
bstring_to_keyword(BGl_string2100z00zz__socketz00); 
BGl_keyword2101z00zz__socketz00 = 
bstring_to_keyword(BGl_string2102z00zz__socketz00); 
BGl_list2096z00zz__socketz00 = 
MAKE_YOUNG_PAIR(BGl_keyword2097z00zz__socketz00, 
MAKE_YOUNG_PAIR(BGl_keyword2099z00zz__socketz00, 
MAKE_YOUNG_PAIR(BGl_keyword2101z00zz__socketz00, BNIL))); 
BGl_keyword2108z00zz__socketz00 = 
bstring_to_keyword(BGl_string2109z00zz__socketz00); 
BGl_list2107z00zz__socketz00 = 
MAKE_YOUNG_PAIR(BGl_keyword2108z00zz__socketz00, 
MAKE_YOUNG_PAIR(BGl_keyword2076z00zz__socketz00, 
MAKE_YOUNG_PAIR(BGl_keyword2078z00zz__socketz00, BNIL))); 
BGl_symbol2110z00zz__socketz00 = 
bstring_to_symbol(BGl_string2111z00zz__socketz00); 
BGl_keyword2115z00zz__socketz00 = 
bstring_to_keyword(BGl_string2116z00zz__socketz00); 
BGl_keyword2117z00zz__socketz00 = 
bstring_to_keyword(BGl_string2118z00zz__socketz00); 
BGl_list2114z00zz__socketz00 = 
MAKE_YOUNG_PAIR(BGl_keyword2108z00zz__socketz00, 
MAKE_YOUNG_PAIR(BGl_keyword2115z00zz__socketz00, 
MAKE_YOUNG_PAIR(BGl_keyword2117z00zz__socketz00, BNIL))); 
BGl_symbol2119z00zz__socketz00 = 
bstring_to_symbol(BGl_string2120z00zz__socketz00); 
BGl_symbol2126z00zz__socketz00 = 
bstring_to_symbol(BGl_string2127z00zz__socketz00); 
BGl_symbol2130z00zz__socketz00 = 
bstring_to_symbol(BGl_string2131z00zz__socketz00); 
BGl_symbol2132z00zz__socketz00 = 
bstring_to_symbol(BGl_string2133z00zz__socketz00); 
BGl_symbol2134z00zz__socketz00 = 
bstring_to_symbol(BGl_string2135z00zz__socketz00); 
BGl_symbol2140z00zz__socketz00 = 
bstring_to_symbol(BGl_string2141z00zz__socketz00); 
BGl_symbol2162z00zz__socketz00 = 
bstring_to_symbol(BGl_string2163z00zz__socketz00); 
BGl_symbol2165z00zz__socketz00 = 
bstring_to_symbol(BGl_string2166z00zz__socketz00); 
return ( 
BGl_symbol2168z00zz__socketz00 = 
bstring_to_symbol(BGl_string2169z00zz__socketz00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__socketz00()
{
{ /* Llib/socket.scm 14 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__socketz00()
{
{ /* Llib/socket.scm 14 */
BGl_za2socketzd2initializa7edza2z75zz__socketz00 = ((bool_t)0); 
{ /* Llib/socket.scm 279 */
obj_t BgL_res1732z00_1771;
BgL_res1732z00_1771 = 
bgl_make_mutex(BGl_string2057z00zz__socketz00); 
return ( 
BGl_za2socketzd2mutexza2zd2zz__socketz00 = BgL_res1732z00_1771, BUNSPEC) ;} } 

}



/* %socket-init! */
BGL_EXPORTED_DEF obj_t BGl_z52socketzd2initz12z92zz__socketz00()
{
{ /* Llib/socket.scm 284 */
{ /* Llib/socket.scm 285 */
obj_t BgL_top2317z00_2597;
BgL_top2317z00_2597 = 
BGL_EXITD_TOP_AS_OBJ(); 
BGL_MUTEX_LOCK(BGl_za2socketzd2mutexza2zd2zz__socketz00); 
BGL_EXITD_PUSH_PROTECT(BgL_top2317z00_2597, BGl_za2socketzd2mutexza2zd2zz__socketz00); BUNSPEC; 
{ /* Llib/socket.scm 285 */
obj_t BgL_tmp2316z00_2596;
if(BGl_za2socketzd2initializa7edza2z75zz__socketz00)
{ /* Llib/socket.scm 286 */
BgL_tmp2316z00_2596 = BFALSE; }  else 
{ /* Llib/socket.scm 286 */
BGl_za2socketzd2initializa7edza2z75zz__socketz00 = ((bool_t)1); 
socket_startup(); BUNSPEC; 
BGl_registerzd2exitzd2functionz12z12zz__biglooz00(BGl_proc2058z00zz__socketz00); 
BgL_tmp2316z00_2596 = BUNSPEC; } 
BGL_EXITD_POP_PROTECT(BgL_top2317z00_2597); BUNSPEC; 
BGL_MUTEX_UNLOCK(BGl_za2socketzd2mutexza2zd2zz__socketz00); 
return BgL_tmp2316z00_2596;} } } 

}



/* &%socket-init! */
obj_t BGl_z62z52socketzd2initz12zf0zz__socketz00(obj_t BgL_envz00_2206)
{
{ /* Llib/socket.scm 284 */
return 
BGl_z52socketzd2initz12z92zz__socketz00();} 

}



/* &<@anonymous:1240> */
obj_t BGl_z62zc3z04anonymousza31240ze3ze5zz__socketz00(obj_t BgL_envz00_2207, obj_t BgL_xz00_2208)
{
{ /* Llib/socket.scm 290 */
socket_cleanup(); BUNSPEC; 
return BgL_xz00_2208;} 

}



/* socket? */
BGL_EXPORTED_DEF bool_t BGl_socketzf3zf3zz__socketz00(obj_t BgL_objz00_3)
{
{ /* Llib/socket.scm 300 */
return 
SOCKETP(BgL_objz00_3);} 

}



/* &socket? */
obj_t BGl_z62socketzf3z91zz__socketz00(obj_t BgL_envz00_2209, obj_t BgL_objz00_2210)
{
{ /* Llib/socket.scm 300 */
return 
BBOOL(
BGl_socketzf3zf3zz__socketz00(BgL_objz00_2210));} 

}



/* socket-server? */
BGL_EXPORTED_DEF bool_t BGl_socketzd2serverzf3z21zz__socketz00(obj_t BgL_objz00_4)
{
{ /* Llib/socket.scm 306 */
return 
BGL_SOCKET_SERVERP(BgL_objz00_4);} 

}



/* &socket-server? */
obj_t BGl_z62socketzd2serverzf3z43zz__socketz00(obj_t BgL_envz00_2211, obj_t BgL_objz00_2212)
{
{ /* Llib/socket.scm 306 */
return 
BBOOL(
BGl_socketzd2serverzf3z21zz__socketz00(BgL_objz00_2212));} 

}



/* socket-client? */
BGL_EXPORTED_DEF bool_t BGl_socketzd2clientzf3z21zz__socketz00(obj_t BgL_objz00_5)
{
{ /* Llib/socket.scm 312 */
return 
BGL_SOCKET_CLIENTP(BgL_objz00_5);} 

}



/* &socket-client? */
obj_t BGl_z62socketzd2clientzf3z43zz__socketz00(obj_t BgL_envz00_2213, obj_t BgL_objz00_2214)
{
{ /* Llib/socket.scm 312 */
return 
BBOOL(
BGl_socketzd2clientzf3z21zz__socketz00(BgL_objz00_2214));} 

}



/* socket-hostname */
BGL_EXPORTED_DEF obj_t BGl_socketzd2hostnamezd2zz__socketz00(obj_t BgL_socketz00_6)
{
{ /* Llib/socket.scm 318 */
return 
SOCKET_HOSTNAME(BgL_socketz00_6);} 

}



/* &socket-hostname */
obj_t BGl_z62socketzd2hostnamezb0zz__socketz00(obj_t BgL_envz00_2215, obj_t BgL_socketz00_2216)
{
{ /* Llib/socket.scm 318 */
{ /* Llib/socket.scm 319 */
obj_t BgL_auxz00_2618;
if(
SOCKETP(BgL_socketz00_2216))
{ /* Llib/socket.scm 319 */
BgL_auxz00_2618 = BgL_socketz00_2216
; }  else 
{ 
obj_t BgL_auxz00_2621;
BgL_auxz00_2621 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)13980)), BGl_string2060z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2216); 
FAILURE(BgL_auxz00_2621,BFALSE,BFALSE);} 
return 
BGl_socketzd2hostnamezd2zz__socketz00(BgL_auxz00_2618);} } 

}



/* socket-host-address */
BGL_EXPORTED_DEF obj_t BGl_socketzd2hostzd2addressz00zz__socketz00(obj_t BgL_socketz00_7)
{
{ /* Llib/socket.scm 324 */
return 
bgl_socket_host_addr(BgL_socketz00_7);} 

}



/* &socket-host-address */
obj_t BGl_z62socketzd2hostzd2addressz62zz__socketz00(obj_t BgL_envz00_2217, obj_t BgL_socketz00_2218)
{
{ /* Llib/socket.scm 324 */
{ /* Llib/socket.scm 325 */
obj_t BgL_auxz00_2627;
if(
SOCKETP(BgL_socketz00_2218))
{ /* Llib/socket.scm 325 */
BgL_auxz00_2627 = BgL_socketz00_2218
; }  else 
{ 
obj_t BgL_auxz00_2630;
BgL_auxz00_2630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)14278)), BGl_string2061z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2218); 
FAILURE(BgL_auxz00_2630,BFALSE,BFALSE);} 
return 
BGl_socketzd2hostzd2addressz00zz__socketz00(BgL_auxz00_2627);} } 

}



/* socket-local-address */
BGL_EXPORTED_DEF obj_t BGl_socketzd2localzd2addressz00zz__socketz00(obj_t BgL_socketz00_8)
{
{ /* Llib/socket.scm 330 */
return 
bgl_socket_local_addr(BgL_socketz00_8);} 

}



/* &socket-local-address */
obj_t BGl_z62socketzd2localzd2addressz62zz__socketz00(obj_t BgL_envz00_2219, obj_t BgL_socketz00_2220)
{
{ /* Llib/socket.scm 330 */
{ /* Llib/socket.scm 331 */
obj_t BgL_auxz00_2636;
if(
SOCKETP(BgL_socketz00_2220))
{ /* Llib/socket.scm 331 */
BgL_auxz00_2636 = BgL_socketz00_2220
; }  else 
{ 
obj_t BgL_auxz00_2639;
BgL_auxz00_2639 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)14585)), BGl_string2062z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2220); 
FAILURE(BgL_auxz00_2639,BFALSE,BFALSE);} 
return 
BGl_socketzd2localzd2addressz00zz__socketz00(BgL_auxz00_2636);} } 

}



/* socket-local? */
BGL_EXPORTED_DEF bool_t BGl_socketzd2localzf3z21zz__socketz00(obj_t BgL_socketz00_9)
{
{ /* Llib/socket.scm 336 */
return 
bgl_socket_localp(BgL_socketz00_9);} 

}



/* &socket-local? */
obj_t BGl_z62socketzd2localzf3z43zz__socketz00(obj_t BgL_envz00_2221, obj_t BgL_socketz00_2222)
{
{ /* Llib/socket.scm 336 */
{ /* Llib/socket.scm 339 */
bool_t BgL_tmpz00_2645;
{ /* Llib/socket.scm 339 */
obj_t BgL_auxz00_2646;
if(
SOCKETP(BgL_socketz00_2222))
{ /* Llib/socket.scm 339 */
BgL_auxz00_2646 = BgL_socketz00_2222
; }  else 
{ 
obj_t BgL_auxz00_2649;
BgL_auxz00_2649 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)14922)), BGl_string2063z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2222); 
FAILURE(BgL_auxz00_2649,BFALSE,BFALSE);} 
BgL_tmpz00_2645 = 
BGl_socketzd2localzf3z21zz__socketz00(BgL_auxz00_2646); } 
return 
BBOOL(BgL_tmpz00_2645);} } 

}



/* socket-host-address=? */
BGL_EXPORTED_DEF bool_t BGl_socketzd2hostzd2addresszd3zf3z20zz__socketz00(obj_t BgL_socketz00_10, obj_t BgL_addrz00_11)
{
{ /* Llib/socket.scm 346 */
return 
bgl_socket_host_addr_cmp(BgL_socketz00_10, BgL_addrz00_11);} 

}



/* &socket-host-address=? */
obj_t BGl_z62socketzd2hostzd2addresszd3zf3z42zz__socketz00(obj_t BgL_envz00_2223, obj_t BgL_socketz00_2224, obj_t BgL_addrz00_2225)
{
{ /* Llib/socket.scm 346 */
{ /* Llib/socket.scm 349 */
bool_t BgL_tmpz00_2656;
{ /* Llib/socket.scm 349 */
obj_t BgL_auxz00_2664;obj_t BgL_auxz00_2657;
if(
STRINGP(BgL_addrz00_2225))
{ /* Llib/socket.scm 349 */
BgL_auxz00_2664 = BgL_addrz00_2225
; }  else 
{ 
obj_t BgL_auxz00_2667;
BgL_auxz00_2667 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)15376)), BGl_string2064z00zz__socketz00, BGl_string2065z00zz__socketz00, BgL_addrz00_2225); 
FAILURE(BgL_auxz00_2667,BFALSE,BFALSE);} 
if(
SOCKETP(BgL_socketz00_2224))
{ /* Llib/socket.scm 349 */
BgL_auxz00_2657 = BgL_socketz00_2224
; }  else 
{ 
obj_t BgL_auxz00_2660;
BgL_auxz00_2660 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)15376)), BGl_string2064z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2224); 
FAILURE(BgL_auxz00_2660,BFALSE,BFALSE);} 
BgL_tmpz00_2656 = 
BGl_socketzd2hostzd2addresszd3zf3z20zz__socketz00(BgL_auxz00_2657, BgL_auxz00_2664); } 
return 
BBOOL(BgL_tmpz00_2656);} } 

}



/* socket-down? */
BGL_EXPORTED_DEF bool_t BGl_socketzd2downzf3z21zz__socketz00(obj_t BgL_socketz00_12)
{
{ /* Llib/socket.scm 356 */
return 
SOCKET_DOWNP(BgL_socketz00_12);} 

}



/* &socket-down? */
obj_t BGl_z62socketzd2downzf3z43zz__socketz00(obj_t BgL_envz00_2226, obj_t BgL_socketz00_2227)
{
{ /* Llib/socket.scm 356 */
{ /* Llib/socket.scm 357 */
bool_t BgL_tmpz00_2674;
{ /* Llib/socket.scm 357 */
obj_t BgL_auxz00_2675;
if(
SOCKETP(BgL_socketz00_2227))
{ /* Llib/socket.scm 357 */
BgL_auxz00_2675 = BgL_socketz00_2227
; }  else 
{ 
obj_t BgL_auxz00_2678;
BgL_auxz00_2678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)15761)), BGl_string2066z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2227); 
FAILURE(BgL_auxz00_2678,BFALSE,BFALSE);} 
BgL_tmpz00_2674 = 
BGl_socketzd2downzf3z21zz__socketz00(BgL_auxz00_2675); } 
return 
BBOOL(BgL_tmpz00_2674);} } 

}



/* socket-port-number */
BGL_EXPORTED_DEF obj_t BGl_socketzd2portzd2numberz00zz__socketz00(obj_t BgL_socketz00_13)
{
{ /* Llib/socket.scm 362 */
return 
BINT(
SOCKET_PORT(BgL_socketz00_13));} 

}



/* &socket-port-number */
obj_t BGl_z62socketzd2portzd2numberz62zz__socketz00(obj_t BgL_envz00_2228, obj_t BgL_socketz00_2229)
{
{ /* Llib/socket.scm 362 */
{ /* Llib/socket.scm 363 */
obj_t BgL_auxz00_2686;
if(
SOCKETP(BgL_socketz00_2229))
{ /* Llib/socket.scm 363 */
BgL_auxz00_2686 = BgL_socketz00_2229
; }  else 
{ 
obj_t BgL_auxz00_2689;
BgL_auxz00_2689 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16069)), BGl_string2067z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2229); 
FAILURE(BgL_auxz00_2689,BFALSE,BFALSE);} 
return 
BGl_socketzd2portzd2numberz00zz__socketz00(BgL_auxz00_2686);} } 

}



/* socket-input */
BGL_EXPORTED_DEF obj_t BGl_socketzd2inputzd2zz__socketz00(obj_t BgL_socketz00_14)
{
{ /* Llib/socket.scm 368 */
return 
SOCKET_INPUT(BgL_socketz00_14);} 

}



/* &socket-input */
obj_t BGl_z62socketzd2inputzb0zz__socketz00(obj_t BgL_envz00_2230, obj_t BgL_socketz00_2231)
{
{ /* Llib/socket.scm 368 */
{ /* Llib/socket.scm 369 */
obj_t BgL_auxz00_2695;
if(
SOCKETP(BgL_socketz00_2231))
{ /* Llib/socket.scm 369 */
BgL_auxz00_2695 = BgL_socketz00_2231
; }  else 
{ 
obj_t BgL_auxz00_2698;
BgL_auxz00_2698 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16371)), BGl_string2068z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2231); 
FAILURE(BgL_auxz00_2698,BFALSE,BFALSE);} 
return 
BGl_socketzd2inputzd2zz__socketz00(BgL_auxz00_2695);} } 

}



/* socket-output */
BGL_EXPORTED_DEF obj_t BGl_socketzd2outputzd2zz__socketz00(obj_t BgL_socketz00_15)
{
{ /* Llib/socket.scm 374 */
return 
SOCKET_OUTPUT(BgL_socketz00_15);} 

}



/* &socket-output */
obj_t BGl_z62socketzd2outputzb0zz__socketz00(obj_t BgL_envz00_2232, obj_t BgL_socketz00_2233)
{
{ /* Llib/socket.scm 374 */
{ /* Llib/socket.scm 375 */
obj_t BgL_auxz00_2704;
if(
SOCKETP(BgL_socketz00_2233))
{ /* Llib/socket.scm 375 */
BgL_auxz00_2704 = BgL_socketz00_2233
; }  else 
{ 
obj_t BgL_auxz00_2707;
BgL_auxz00_2707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16668)), BGl_string2069z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2233); 
FAILURE(BgL_auxz00_2707,BFALSE,BFALSE);} 
return 
BGl_socketzd2outputzd2zz__socketz00(BgL_auxz00_2704);} } 

}



/* _make-client-socket */
obj_t BGl__makezd2clientzd2socketz00zz__socketz00(obj_t BgL_env1105z00_23, obj_t BgL_opt1104z00_22)
{
{ /* Llib/socket.scm 380 */
{ /* Llib/socket.scm 380 */
obj_t BgL_g1114z00_1151;obj_t BgL_g1115z00_1152;
BgL_g1114z00_1151 = 
VECTOR_REF(BgL_opt1104z00_22,((long)0)); 
BgL_g1115z00_1152 = 
VECTOR_REF(BgL_opt1104z00_22,((long)1)); 
{ /* Llib/socket.scm 380 */
obj_t BgL_domainz00_1153;
BgL_domainz00_1153 = BGl_symbol2070z00zz__socketz00; 
{ /* Llib/socket.scm 380 */
obj_t BgL_inbufz00_1154;
BgL_inbufz00_1154 = BTRUE; 
{ /* Llib/socket.scm 380 */
obj_t BgL_outbufz00_1155;
BgL_outbufz00_1155 = BTRUE; 
{ /* Llib/socket.scm 380 */
obj_t BgL_timeoutz00_1156;
BgL_timeoutz00_1156 = 
BINT(((long)0)); 
{ /* Llib/socket.scm 380 */

{ 
long BgL_iz00_1157;
BgL_iz00_1157 = ((long)2); 
BgL_check1108z00_1158:
if(
(BgL_iz00_1157==
VECTOR_LENGTH(BgL_opt1104z00_22)))
{ /* Llib/socket.scm 380 */BNIL; }  else 
{ /* Llib/socket.scm 380 */
bool_t BgL_test2330z00_2718;
{ /* Llib/socket.scm 380 */
obj_t BgL_arg1247z00_1164;
{ /* Llib/socket.scm 380 */
bool_t BgL_test2331z00_2719;
{ /* Llib/socket.scm 380 */
long BgL_tmpz00_2720;
BgL_tmpz00_2720 = 
VECTOR_LENGTH(BgL_opt1104z00_22); 
BgL_test2331z00_2719 = 
BOUND_CHECK(BgL_iz00_1157, BgL_tmpz00_2720); } 
if(BgL_test2331z00_2719)
{ /* Llib/socket.scm 380 */
BgL_arg1247z00_1164 = 
VECTOR_REF(BgL_opt1104z00_22,BgL_iz00_1157); }  else 
{ 
obj_t BgL_auxz00_2724;
BgL_auxz00_2724 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2072z00zz__socketz00, BgL_opt1104z00_22, 
(int)(
VECTOR_LENGTH(BgL_opt1104z00_22)), 
(int)(BgL_iz00_1157)); 
FAILURE(BgL_auxz00_2724,BFALSE,BFALSE);} } 
BgL_test2330z00_2718 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1247z00_1164, BGl_list2073z00zz__socketz00)); } 
if(BgL_test2330z00_2718)
{ 
long BgL_iz00_2733;
BgL_iz00_2733 = 
(BgL_iz00_1157+((long)2)); 
BgL_iz00_1157 = BgL_iz00_2733; 
goto BgL_check1108z00_1158;}  else 
{ /* Llib/socket.scm 380 */
obj_t BgL_arg1246z00_1163;
{ /* Llib/socket.scm 380 */
bool_t BgL_test2332z00_2735;
{ /* Llib/socket.scm 380 */
long BgL_tmpz00_2736;
BgL_tmpz00_2736 = 
VECTOR_LENGTH(BgL_opt1104z00_22); 
BgL_test2332z00_2735 = 
BOUND_CHECK(BgL_iz00_1157, BgL_tmpz00_2736); } 
if(BgL_test2332z00_2735)
{ /* Llib/socket.scm 380 */
BgL_arg1246z00_1163 = 
VECTOR_REF(BgL_opt1104z00_22,BgL_iz00_1157); }  else 
{ 
obj_t BgL_auxz00_2740;
BgL_auxz00_2740 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2072z00zz__socketz00, BgL_opt1104z00_22, 
(int)(
VECTOR_LENGTH(BgL_opt1104z00_22)), 
(int)(BgL_iz00_1157)); 
FAILURE(BgL_auxz00_2740,BFALSE,BFALSE);} } 
BGl_errorz00zz__errorz00(BGl_symbol2082z00zz__socketz00, BGl_string2084z00zz__socketz00, BgL_arg1246z00_1163); } } } 
{ /* Llib/socket.scm 380 */
obj_t BgL_index1110z00_1165;
BgL_index1110z00_1165 = 
BGl_search1107ze70ze7zz__socketz00(
VECTOR_LENGTH(BgL_opt1104z00_22), BgL_opt1104z00_22, BGl_keyword2074z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 380 */
bool_t BgL_test2333z00_2750;
{ /* Llib/socket.scm 380 */
long BgL_n1z00_1794;
{ /* Llib/socket.scm 380 */
obj_t BgL_tmpz00_2751;
if(
INTEGERP(BgL_index1110z00_1165))
{ /* Llib/socket.scm 380 */
BgL_tmpz00_2751 = BgL_index1110z00_1165
; }  else 
{ 
obj_t BgL_auxz00_2754;
BgL_auxz00_2754 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2085z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1110z00_1165); 
FAILURE(BgL_auxz00_2754,BFALSE,BFALSE);} 
BgL_n1z00_1794 = 
(long)CINT(BgL_tmpz00_2751); } 
BgL_test2333z00_2750 = 
(BgL_n1z00_1794>=((long)0)); } 
if(BgL_test2333z00_2750)
{ 
long BgL_auxz00_2760;
{ /* Llib/socket.scm 380 */
obj_t BgL_tmpz00_2761;
if(
INTEGERP(BgL_index1110z00_1165))
{ /* Llib/socket.scm 380 */
BgL_tmpz00_2761 = BgL_index1110z00_1165
; }  else 
{ 
obj_t BgL_auxz00_2764;
BgL_auxz00_2764 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2085z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1110z00_1165); 
FAILURE(BgL_auxz00_2764,BFALSE,BFALSE);} 
BgL_auxz00_2760 = 
(long)CINT(BgL_tmpz00_2761); } 
BgL_domainz00_1153 = 
VECTOR_REF(BgL_opt1104z00_22,BgL_auxz00_2760); }  else 
{ /* Llib/socket.scm 380 */BFALSE; } } } 
{ /* Llib/socket.scm 380 */
obj_t BgL_index1111z00_1167;
BgL_index1111z00_1167 = 
BGl_search1107ze70ze7zz__socketz00(
VECTOR_LENGTH(BgL_opt1104z00_22), BgL_opt1104z00_22, BGl_keyword2076z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 380 */
bool_t BgL_test2336z00_2772;
{ /* Llib/socket.scm 380 */
long BgL_n1z00_1796;
{ /* Llib/socket.scm 380 */
obj_t BgL_tmpz00_2773;
if(
INTEGERP(BgL_index1111z00_1167))
{ /* Llib/socket.scm 380 */
BgL_tmpz00_2773 = BgL_index1111z00_1167
; }  else 
{ 
obj_t BgL_auxz00_2776;
BgL_auxz00_2776 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2085z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1111z00_1167); 
FAILURE(BgL_auxz00_2776,BFALSE,BFALSE);} 
BgL_n1z00_1796 = 
(long)CINT(BgL_tmpz00_2773); } 
BgL_test2336z00_2772 = 
(BgL_n1z00_1796>=((long)0)); } 
if(BgL_test2336z00_2772)
{ 
long BgL_auxz00_2782;
{ /* Llib/socket.scm 380 */
obj_t BgL_tmpz00_2783;
if(
INTEGERP(BgL_index1111z00_1167))
{ /* Llib/socket.scm 380 */
BgL_tmpz00_2783 = BgL_index1111z00_1167
; }  else 
{ 
obj_t BgL_auxz00_2786;
BgL_auxz00_2786 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2085z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1111z00_1167); 
FAILURE(BgL_auxz00_2786,BFALSE,BFALSE);} 
BgL_auxz00_2782 = 
(long)CINT(BgL_tmpz00_2783); } 
BgL_inbufz00_1154 = 
VECTOR_REF(BgL_opt1104z00_22,BgL_auxz00_2782); }  else 
{ /* Llib/socket.scm 380 */BFALSE; } } } 
{ /* Llib/socket.scm 380 */
obj_t BgL_index1112z00_1169;
BgL_index1112z00_1169 = 
BGl_search1107ze70ze7zz__socketz00(
VECTOR_LENGTH(BgL_opt1104z00_22), BgL_opt1104z00_22, BGl_keyword2078z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 380 */
bool_t BgL_test2339z00_2794;
{ /* Llib/socket.scm 380 */
long BgL_n1z00_1798;
{ /* Llib/socket.scm 380 */
obj_t BgL_tmpz00_2795;
if(
INTEGERP(BgL_index1112z00_1169))
{ /* Llib/socket.scm 380 */
BgL_tmpz00_2795 = BgL_index1112z00_1169
; }  else 
{ 
obj_t BgL_auxz00_2798;
BgL_auxz00_2798 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2085z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1112z00_1169); 
FAILURE(BgL_auxz00_2798,BFALSE,BFALSE);} 
BgL_n1z00_1798 = 
(long)CINT(BgL_tmpz00_2795); } 
BgL_test2339z00_2794 = 
(BgL_n1z00_1798>=((long)0)); } 
if(BgL_test2339z00_2794)
{ 
long BgL_auxz00_2804;
{ /* Llib/socket.scm 380 */
obj_t BgL_tmpz00_2805;
if(
INTEGERP(BgL_index1112z00_1169))
{ /* Llib/socket.scm 380 */
BgL_tmpz00_2805 = BgL_index1112z00_1169
; }  else 
{ 
obj_t BgL_auxz00_2808;
BgL_auxz00_2808 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2085z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1112z00_1169); 
FAILURE(BgL_auxz00_2808,BFALSE,BFALSE);} 
BgL_auxz00_2804 = 
(long)CINT(BgL_tmpz00_2805); } 
BgL_outbufz00_1155 = 
VECTOR_REF(BgL_opt1104z00_22,BgL_auxz00_2804); }  else 
{ /* Llib/socket.scm 380 */BFALSE; } } } 
{ /* Llib/socket.scm 380 */
obj_t BgL_index1113z00_1171;
BgL_index1113z00_1171 = 
BGl_search1107ze70ze7zz__socketz00(
VECTOR_LENGTH(BgL_opt1104z00_22), BgL_opt1104z00_22, BGl_keyword2080z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 380 */
bool_t BgL_test2342z00_2816;
{ /* Llib/socket.scm 380 */
long BgL_n1z00_1800;
{ /* Llib/socket.scm 380 */
obj_t BgL_tmpz00_2817;
if(
INTEGERP(BgL_index1113z00_1171))
{ /* Llib/socket.scm 380 */
BgL_tmpz00_2817 = BgL_index1113z00_1171
; }  else 
{ 
obj_t BgL_auxz00_2820;
BgL_auxz00_2820 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2085z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1113z00_1171); 
FAILURE(BgL_auxz00_2820,BFALSE,BFALSE);} 
BgL_n1z00_1800 = 
(long)CINT(BgL_tmpz00_2817); } 
BgL_test2342z00_2816 = 
(BgL_n1z00_1800>=((long)0)); } 
if(BgL_test2342z00_2816)
{ 
long BgL_auxz00_2826;
{ /* Llib/socket.scm 380 */
obj_t BgL_tmpz00_2827;
if(
INTEGERP(BgL_index1113z00_1171))
{ /* Llib/socket.scm 380 */
BgL_tmpz00_2827 = BgL_index1113z00_1171
; }  else 
{ 
obj_t BgL_auxz00_2830;
BgL_auxz00_2830 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2085z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1113z00_1171); 
FAILURE(BgL_auxz00_2830,BFALSE,BFALSE);} 
BgL_auxz00_2826 = 
(long)CINT(BgL_tmpz00_2827); } 
BgL_timeoutz00_1156 = 
VECTOR_REF(BgL_opt1104z00_22,BgL_auxz00_2826); }  else 
{ /* Llib/socket.scm 380 */BFALSE; } } } 
{ /* Llib/socket.scm 380 */
obj_t BgL_arg1252z00_1173;obj_t BgL_arg1253z00_1174;
BgL_arg1252z00_1173 = 
VECTOR_REF(BgL_opt1104z00_22,((long)0)); 
BgL_arg1253z00_1174 = 
VECTOR_REF(BgL_opt1104z00_22,((long)1)); 
{ /* Llib/socket.scm 380 */
obj_t BgL_domainz00_1175;
BgL_domainz00_1175 = BgL_domainz00_1153; 
{ /* Llib/socket.scm 380 */
obj_t BgL_inbufz00_1176;
BgL_inbufz00_1176 = BgL_inbufz00_1154; 
{ /* Llib/socket.scm 380 */
obj_t BgL_outbufz00_1177;
BgL_outbufz00_1177 = BgL_outbufz00_1155; 
{ /* Llib/socket.scm 380 */
obj_t BgL_timeoutz00_1178;
BgL_timeoutz00_1178 = BgL_timeoutz00_1156; 
{ /* Llib/socket.scm 380 */
obj_t BgL_res1745z00_1812;
{ /* Llib/socket.scm 380 */
obj_t BgL_hostz00_1802;int BgL_portz00_1803;
if(
STRINGP(BgL_arg1252z00_1173))
{ /* Llib/socket.scm 380 */
BgL_hostz00_1802 = BgL_arg1252z00_1173; }  else 
{ 
obj_t BgL_auxz00_2840;
BgL_auxz00_2840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2085z00zz__socketz00, BGl_string2065z00zz__socketz00, BgL_arg1252z00_1173); 
FAILURE(BgL_auxz00_2840,BFALSE,BFALSE);} 
{ /* Llib/socket.scm 380 */
obj_t BgL_tmpz00_2844;
if(
INTEGERP(BgL_arg1253z00_1174))
{ /* Llib/socket.scm 380 */
BgL_tmpz00_2844 = BgL_arg1253z00_1174
; }  else 
{ 
obj_t BgL_auxz00_2847;
BgL_auxz00_2847 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)16917)), BGl_string2085z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_arg1253z00_1174); 
FAILURE(BgL_auxz00_2847,BFALSE,BFALSE);} 
BgL_portz00_1803 = 
CINT(BgL_tmpz00_2844); } 
BGl_z52socketzd2initz12z92zz__socketz00(); 
{ /* Llib/socket.scm 382 */
obj_t BgL_inbufz00_1804;obj_t BgL_outbufz00_1805;
BgL_inbufz00_1804 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2087z00zz__socketz00, BgL_inbufz00_1176, 
(int)(((long)512))); 
BgL_outbufz00_1805 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2087z00zz__socketz00, BgL_outbufz00_1177, 
(int)(((long)1024))); 
if(
(BgL_domainz00_1175==BGl_symbol2070z00zz__socketz00))
{ /* Llib/socket.scm 386 */
int BgL_tmpz00_2859;
{ /* Llib/socket.scm 386 */
obj_t BgL_tmpz00_2860;
if(
INTEGERP(BgL_timeoutz00_1178))
{ /* Llib/socket.scm 386 */
BgL_tmpz00_2860 = BgL_timeoutz00_1178
; }  else 
{ 
obj_t BgL_auxz00_2863;
BgL_auxz00_2863 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)17231)), BGl_string2085z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_timeoutz00_1178); 
FAILURE(BgL_auxz00_2863,BFALSE,BFALSE);} 
BgL_tmpz00_2859 = 
CINT(BgL_tmpz00_2860); } 
BgL_res1745z00_1812 = 
bgl_make_client_socket(BgL_hostz00_1802, BgL_portz00_1803, BgL_tmpz00_2859, BgL_inbufz00_1804, BgL_outbufz00_1805); }  else 
{ /* Llib/socket.scm 384 */
bool_t BgL_test2349z00_2869;
{ /* Llib/socket.scm 384 */
bool_t BgL__ortest_1040z00_1809;
BgL__ortest_1040z00_1809 = 
(BgL_domainz00_1175==BGl_symbol2088z00zz__socketz00); 
if(BgL__ortest_1040z00_1809)
{ /* Llib/socket.scm 384 */
BgL_test2349z00_2869 = BgL__ortest_1040z00_1809
; }  else 
{ /* Llib/socket.scm 384 */
BgL_test2349z00_2869 = 
(BgL_domainz00_1175==BGl_symbol2090z00zz__socketz00)
; } } 
if(BgL_test2349z00_2869)
{ /* Llib/socket.scm 389 */
int BgL_tmpz00_2873;
{ /* Llib/socket.scm 389 */
obj_t BgL_tmpz00_2874;
if(
INTEGERP(BgL_timeoutz00_1178))
{ /* Llib/socket.scm 389 */
BgL_tmpz00_2874 = BgL_timeoutz00_1178
; }  else 
{ 
obj_t BgL_auxz00_2877;
BgL_auxz00_2877 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)17326)), BGl_string2085z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_timeoutz00_1178); 
FAILURE(BgL_auxz00_2877,BFALSE,BFALSE);} 
BgL_tmpz00_2873 = 
CINT(BgL_tmpz00_2874); } 
BgL_res1745z00_1812 = 
bgl_make_unix_socket(BgL_hostz00_1802, BgL_tmpz00_2873, BgL_inbufz00_1804, BgL_outbufz00_1805); }  else 
{ /* Llib/socket.scm 392 */
obj_t BgL_aux1914z00_2376;
BgL_aux1914z00_2376 = 
BGl_errorz00zz__errorz00(BGl_string2087z00zz__socketz00, BGl_string2092z00zz__socketz00, BgL_domainz00_1175); 
if(
SOCKETP(BgL_aux1914z00_2376))
{ /* Llib/socket.scm 392 */
BgL_res1745z00_1812 = BgL_aux1914z00_2376; }  else 
{ 
obj_t BgL_auxz00_2886;
BgL_auxz00_2886 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)17432)), BGl_string2085z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_aux1914z00_2376); 
FAILURE(BgL_auxz00_2886,BFALSE,BFALSE);} } } } } 
return BgL_res1745z00_1812;} } } } } } } } } } } } } 

}



/* search1107~0 */
obj_t BGl_search1107ze70ze7zz__socketz00(long BgL_l1106z00_2299, obj_t BgL_opt1104z00_2298, obj_t BgL_k1z00_1148, long BgL_iz00_1149)
{
{ /* Llib/socket.scm 380 */
BGl_search1107ze70ze7zz__socketz00:
if(
(BgL_iz00_1149==BgL_l1106z00_2299))
{ /* Llib/socket.scm 380 */
return 
BINT(((long)-1));}  else 
{ /* Llib/socket.scm 380 */
if(
(BgL_iz00_1149==
(BgL_l1106z00_2299-((long)1))))
{ /* Llib/socket.scm 380 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2082z00zz__socketz00, BGl_string2093z00zz__socketz00, 
BINT(
VECTOR_LENGTH(BgL_opt1104z00_2298)));}  else 
{ /* Llib/socket.scm 380 */
obj_t BgL_vz00_1183;
BgL_vz00_1183 = 
VECTOR_REF(BgL_opt1104z00_2298,BgL_iz00_1149); 
if(
(BgL_vz00_1183==BgL_k1z00_1148))
{ /* Llib/socket.scm 380 */
return 
BINT(
(BgL_iz00_1149+((long)1)));}  else 
{ 
long BgL_iz00_2904;
BgL_iz00_2904 = 
(BgL_iz00_1149+((long)2)); 
BgL_iz00_1149 = BgL_iz00_2904; 
goto BGl_search1107ze70ze7zz__socketz00;} } } } 

}



/* make-client-socket */
BGL_EXPORTED_DEF obj_t BGl_makezd2clientzd2socketz00zz__socketz00(obj_t BgL_hostz00_16, int BgL_portz00_17, obj_t BgL_domainz00_18, obj_t BgL_inbufz00_19, obj_t BgL_outbufz00_20, obj_t BgL_timeoutz00_21)
{
{ /* Llib/socket.scm 380 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
{ /* Llib/socket.scm 382 */
obj_t BgL_inbufz00_1813;obj_t BgL_outbufz00_1814;
BgL_inbufz00_1813 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2087z00zz__socketz00, BgL_inbufz00_19, 
(int)(((long)512))); 
BgL_outbufz00_1814 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2087z00zz__socketz00, BgL_outbufz00_20, 
(int)(((long)1024))); 
if(
(BgL_domainz00_18==BGl_symbol2070z00zz__socketz00))
{ /* Llib/socket.scm 386 */
int BgL_tmpz00_2913;
{ /* Llib/socket.scm 386 */
obj_t BgL_tmpz00_2914;
if(
INTEGERP(BgL_timeoutz00_21))
{ /* Llib/socket.scm 386 */
BgL_tmpz00_2914 = BgL_timeoutz00_21
; }  else 
{ 
obj_t BgL_auxz00_2917;
BgL_auxz00_2917 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)17231)), BGl_string2087z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_timeoutz00_21); 
FAILURE(BgL_auxz00_2917,BFALSE,BFALSE);} 
BgL_tmpz00_2913 = 
CINT(BgL_tmpz00_2914); } 
return 
bgl_make_client_socket(BgL_hostz00_16, BgL_portz00_17, BgL_tmpz00_2913, BgL_inbufz00_1813, BgL_outbufz00_1814);}  else 
{ /* Llib/socket.scm 384 */
bool_t BgL_test2358z00_2923;
{ /* Llib/socket.scm 384 */
bool_t BgL__ortest_1040z00_1818;
BgL__ortest_1040z00_1818 = 
(BgL_domainz00_18==BGl_symbol2088z00zz__socketz00); 
if(BgL__ortest_1040z00_1818)
{ /* Llib/socket.scm 384 */
BgL_test2358z00_2923 = BgL__ortest_1040z00_1818
; }  else 
{ /* Llib/socket.scm 384 */
BgL_test2358z00_2923 = 
(BgL_domainz00_18==BGl_symbol2090z00zz__socketz00)
; } } 
if(BgL_test2358z00_2923)
{ /* Llib/socket.scm 389 */
int BgL_tmpz00_2927;
{ /* Llib/socket.scm 389 */
obj_t BgL_tmpz00_2928;
if(
INTEGERP(BgL_timeoutz00_21))
{ /* Llib/socket.scm 389 */
BgL_tmpz00_2928 = BgL_timeoutz00_21
; }  else 
{ 
obj_t BgL_auxz00_2931;
BgL_auxz00_2931 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)17326)), BGl_string2087z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_timeoutz00_21); 
FAILURE(BgL_auxz00_2931,BFALSE,BFALSE);} 
BgL_tmpz00_2927 = 
CINT(BgL_tmpz00_2928); } 
return 
bgl_make_unix_socket(BgL_hostz00_16, BgL_tmpz00_2927, BgL_inbufz00_1813, BgL_outbufz00_1814);}  else 
{ /* Llib/socket.scm 392 */
obj_t BgL_aux1920z00_2382;
BgL_aux1920z00_2382 = 
BGl_errorz00zz__errorz00(BGl_string2087z00zz__socketz00, BGl_string2092z00zz__socketz00, BgL_domainz00_18); 
if(
SOCKETP(BgL_aux1920z00_2382))
{ /* Llib/socket.scm 392 */
return BgL_aux1920z00_2382;}  else 
{ 
obj_t BgL_auxz00_2940;
BgL_auxz00_2940 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)17432)), BGl_string2087z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_aux1920z00_2382); 
FAILURE(BgL_auxz00_2940,BFALSE,BFALSE);} } } } } 

}



/* make-server-socket */
BGL_EXPORTED_DEF obj_t BGl_makezd2serverzd2socketz00zz__socketz00(obj_t BgL_portz00_24)
{
{ /* Llib/socket.scm 397 */
{ /* Llib/socket.scm 226 */
obj_t BgL_dsssl1116z00_1194;
BgL_dsssl1116z00_1194 = BgL_portz00_24; 
{ /* Llib/socket.scm 226 */
obj_t BgL_portz00_1195;
{ /* Llib/socket.scm 226 */
bool_t BgL_test2362z00_2944;
if(
NULLP(BgL_dsssl1116z00_1194))
{ /* Llib/socket.scm 226 */
BgL_test2362z00_2944 = ((bool_t)1)
; }  else 
{ /* Llib/socket.scm 226 */
obj_t BgL_tmpz00_2947;
{ /* Llib/socket.scm 226 */
obj_t BgL_auxz00_2948;
{ /* Llib/socket.scm 226 */
obj_t BgL_pairz00_1823;
{ /* Llib/socket.scm 226 */
obj_t BgL_aux1922z00_2384;
BgL_aux1922z00_2384 = BgL_dsssl1116z00_1194; 
if(
PAIRP(BgL_aux1922z00_2384))
{ /* Llib/socket.scm 226 */
BgL_pairz00_1823 = BgL_aux1922z00_2384; }  else 
{ 
obj_t BgL_auxz00_2951;
BgL_auxz00_2951 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)9686)), BGl_string2094z00zz__socketz00, BGl_string2095z00zz__socketz00, BgL_aux1922z00_2384); 
FAILURE(BgL_auxz00_2951,BFALSE,BFALSE);} } 
BgL_auxz00_2948 = 
CAR(BgL_pairz00_1823); } 
BgL_tmpz00_2947 = 
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_2948, BGl_list2096z00zz__socketz00); } 
BgL_test2362z00_2944 = 
CBOOL(BgL_tmpz00_2947); } 
if(BgL_test2362z00_2944)
{ /* Llib/socket.scm 226 */
BgL_portz00_1195 = 
BINT(((long)0)); }  else 
{ /* Llib/socket.scm 226 */
obj_t BgL_tmp1117z00_1215;
{ /* Llib/socket.scm 226 */
obj_t BgL_pairz00_1824;
{ /* Llib/socket.scm 226 */
obj_t BgL_aux1924z00_2386;
BgL_aux1924z00_2386 = BgL_dsssl1116z00_1194; 
if(
PAIRP(BgL_aux1924z00_2386))
{ /* Llib/socket.scm 226 */
BgL_pairz00_1824 = BgL_aux1924z00_2386; }  else 
{ 
obj_t BgL_auxz00_2961;
BgL_auxz00_2961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)9686)), BGl_string2094z00zz__socketz00, BGl_string2095z00zz__socketz00, BgL_aux1924z00_2386); 
FAILURE(BgL_auxz00_2961,BFALSE,BFALSE);} } 
BgL_tmp1117z00_1215 = 
CAR(BgL_pairz00_1824); } 
{ /* Llib/socket.scm 226 */
obj_t BgL_pairz00_1825;
{ /* Llib/socket.scm 226 */
obj_t BgL_aux1926z00_2388;
BgL_aux1926z00_2388 = BgL_dsssl1116z00_1194; 
if(
PAIRP(BgL_aux1926z00_2388))
{ /* Llib/socket.scm 226 */
BgL_pairz00_1825 = BgL_aux1926z00_2388; }  else 
{ 
obj_t BgL_auxz00_2968;
BgL_auxz00_2968 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)9686)), BGl_string2094z00zz__socketz00, BGl_string2095z00zz__socketz00, BgL_aux1926z00_2388); 
FAILURE(BgL_auxz00_2968,BFALSE,BFALSE);} } 
BgL_dsssl1116z00_1194 = 
CDR(BgL_pairz00_1825); } 
BgL_portz00_1195 = BgL_tmp1117z00_1215; } } 
{ /* Llib/socket.scm 226 */
obj_t BgL_namez00_1196;
BgL_namez00_1196 = 
BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dsssl1116z00_1194, BGl_keyword2101z00zz__socketz00, BFALSE); 
{ /* Llib/socket.scm 226 */
obj_t BgL_backlogz00_1197;
BgL_backlogz00_1197 = 
BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dsssl1116z00_1194, BGl_keyword2099z00zz__socketz00, 
BINT(((long)5))); 
{ /* Llib/socket.scm 226 */
obj_t BgL_ipv6z00_1198;
BgL_ipv6z00_1198 = 
BGl_dssslzd2getzd2keyzd2argzd2zz__dssslz00(BgL_dsssl1116z00_1194, BGl_keyword2097z00zz__socketz00, BFALSE); 
if(
NULLP(
BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(BgL_dsssl1116z00_1194, BGl_list2096z00zz__socketz00)))
{ /* Llib/socket.scm 226 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
{ /* Llib/socket.scm 399 */
int BgL_auxz00_2990;int BgL_tmpz00_2981;
{ /* Llib/socket.scm 399 */
obj_t BgL_tmpz00_2991;
if(
INTEGERP(BgL_backlogz00_1197))
{ /* Llib/socket.scm 399 */
BgL_tmpz00_2991 = BgL_backlogz00_1197
; }  else 
{ 
obj_t BgL_auxz00_2994;
BgL_auxz00_2994 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)17867)), BGl_string2094z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_backlogz00_1197); 
FAILURE(BgL_auxz00_2994,BFALSE,BFALSE);} 
BgL_auxz00_2990 = 
CINT(BgL_tmpz00_2991); } 
{ /* Llib/socket.scm 399 */
obj_t BgL_tmpz00_2982;
if(
INTEGERP(BgL_portz00_1195))
{ /* Llib/socket.scm 399 */
BgL_tmpz00_2982 = BgL_portz00_1195
; }  else 
{ 
obj_t BgL_auxz00_2985;
BgL_auxz00_2985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)17862)), BGl_string2094z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_portz00_1195); 
FAILURE(BgL_auxz00_2985,BFALSE,BFALSE);} 
BgL_tmpz00_2981 = 
CINT(BgL_tmpz00_2982); } 
return 
bgl_make_server_socket(BgL_namez00_1196, BgL_tmpz00_2981, BgL_auxz00_2990, 
CBOOL(BgL_ipv6z00_1198));} }  else 
{ /* Llib/socket.scm 226 */
obj_t BgL_arg1273z00_1201;
{ /* Llib/socket.scm 226 */
obj_t BgL_arg1274z00_1202;
{ /* Llib/socket.scm 226 */
obj_t BgL_arg1277z00_1205;
BgL_arg1277z00_1205 = 
BGl_dssslzd2getzd2keyzd2restzd2argz00zz__dssslz00(BgL_dsssl1116z00_1194, BGl_list2096z00zz__socketz00); 
{ /* Llib/socket.scm 226 */
obj_t BgL_list1278z00_1206;
BgL_list1278z00_1206 = 
MAKE_YOUNG_PAIR(BgL_arg1277z00_1205, BNIL); 
BgL_arg1274z00_1202 = 
BGl_mapz00zz__r4_control_features_6_9z00(BGl_proc2103z00zz__socketz00, BgL_list1278z00_1206); } } 
{ /* Llib/socket.scm 226 */
obj_t BgL_list1275z00_1203;
BgL_list1275z00_1203 = 
MAKE_YOUNG_PAIR(BgL_arg1274z00_1202, BNIL); 
BgL_arg1273z00_1201 = 
BGl_applyz00zz__r4_control_features_6_9z00(BGl_stringzd2appendzd2envz00zz__r4_strings_6_7z00, BGl_string2104z00zz__socketz00, BgL_list1275z00_1203); } } 
{ /* Llib/socket.scm 226 */
obj_t BgL_aux1932z00_2394;
BgL_aux1932z00_2394 = 
BGl_errorz00zz__errorz00(BGl_string2105z00zz__socketz00, BgL_arg1273z00_1201, BgL_dsssl1116z00_1194); 
if(
SOCKETP(BgL_aux1932z00_2394))
{ /* Llib/socket.scm 226 */
return BgL_aux1932z00_2394;}  else 
{ 
obj_t BgL_auxz00_3009;
BgL_auxz00_3009 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)9686)), BGl_string2094z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_aux1932z00_2394); 
FAILURE(BgL_auxz00_3009,BFALSE,BFALSE);} } } } } } } } } 

}



/* &make-server-socket */
obj_t BGl_z62makezd2serverzd2socketz62zz__socketz00(obj_t BgL_envz00_2235, obj_t BgL_portz00_2236)
{
{ /* Llib/socket.scm 397 */
return 
BGl_makezd2serverzd2socketz00zz__socketz00(BgL_portz00_2236);} 

}



/* &<@anonymous:1279> */
obj_t BGl_z62zc3z04anonymousza31279ze3ze5zz__socketz00(obj_t BgL_envz00_2237, obj_t BgL_vz00_2238)
{
{ /* Llib/socket.scm 226 */
{ /* Llib/socket.scm 226 */
obj_t BgL_list1280z00_2521;
BgL_list1280z00_2521 = 
MAKE_YOUNG_PAIR(BgL_vz00_2238, BNIL); 
return 
BGl_formatz00zz__r4_output_6_10_3z00(BGl_string2106z00zz__socketz00, BgL_list1280z00_2521);} } 

}



/* _socket-accept */
obj_t BGl__socketzd2acceptzd2zz__socketz00(obj_t BgL_env1119z00_30, obj_t BgL_opt1118z00_29)
{
{ /* Llib/socket.scm 404 */
{ /* Llib/socket.scm 404 */
obj_t BgL_g1127z00_1222;
BgL_g1127z00_1222 = 
VECTOR_REF(BgL_opt1118z00_29,((long)0)); 
{ /* Llib/socket.scm 404 */
obj_t BgL_errpz00_1223;
BgL_errpz00_1223 = BTRUE; 
{ /* Llib/socket.scm 404 */
obj_t BgL_inbufz00_1224;
BgL_inbufz00_1224 = BTRUE; 
{ /* Llib/socket.scm 404 */
obj_t BgL_outbufz00_1225;
BgL_outbufz00_1225 = BTRUE; 
{ /* Llib/socket.scm 404 */

{ 
long BgL_iz00_1226;
BgL_iz00_1226 = ((long)1); 
BgL_check1122z00_1227:
if(
(BgL_iz00_1226==
VECTOR_LENGTH(BgL_opt1118z00_29)))
{ /* Llib/socket.scm 404 */BNIL; }  else 
{ /* Llib/socket.scm 404 */
bool_t BgL_test2372z00_3020;
{ /* Llib/socket.scm 404 */
obj_t BgL_arg1292z00_1233;
{ /* Llib/socket.scm 404 */
bool_t BgL_test2373z00_3021;
{ /* Llib/socket.scm 404 */
long BgL_tmpz00_3022;
BgL_tmpz00_3022 = 
VECTOR_LENGTH(BgL_opt1118z00_29); 
BgL_test2373z00_3021 = 
BOUND_CHECK(BgL_iz00_1226, BgL_tmpz00_3022); } 
if(BgL_test2373z00_3021)
{ /* Llib/socket.scm 404 */
BgL_arg1292z00_1233 = 
VECTOR_REF(BgL_opt1118z00_29,BgL_iz00_1226); }  else 
{ 
obj_t BgL_auxz00_3026;
BgL_auxz00_3026 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18105)), BGl_string2072z00zz__socketz00, BgL_opt1118z00_29, 
(int)(
VECTOR_LENGTH(BgL_opt1118z00_29)), 
(int)(BgL_iz00_1226)); 
FAILURE(BgL_auxz00_3026,BFALSE,BFALSE);} } 
BgL_test2372z00_3020 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1292z00_1233, BGl_list2107z00zz__socketz00)); } 
if(BgL_test2372z00_3020)
{ 
long BgL_iz00_3035;
BgL_iz00_3035 = 
(BgL_iz00_1226+((long)2)); 
BgL_iz00_1226 = BgL_iz00_3035; 
goto BgL_check1122z00_1227;}  else 
{ /* Llib/socket.scm 404 */
obj_t BgL_arg1291z00_1232;
{ /* Llib/socket.scm 404 */
bool_t BgL_test2374z00_3037;
{ /* Llib/socket.scm 404 */
long BgL_tmpz00_3038;
BgL_tmpz00_3038 = 
VECTOR_LENGTH(BgL_opt1118z00_29); 
BgL_test2374z00_3037 = 
BOUND_CHECK(BgL_iz00_1226, BgL_tmpz00_3038); } 
if(BgL_test2374z00_3037)
{ /* Llib/socket.scm 404 */
BgL_arg1291z00_1232 = 
VECTOR_REF(BgL_opt1118z00_29,BgL_iz00_1226); }  else 
{ 
obj_t BgL_auxz00_3042;
BgL_auxz00_3042 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18105)), BGl_string2072z00zz__socketz00, BgL_opt1118z00_29, 
(int)(
VECTOR_LENGTH(BgL_opt1118z00_29)), 
(int)(BgL_iz00_1226)); 
FAILURE(BgL_auxz00_3042,BFALSE,BFALSE);} } 
BGl_errorz00zz__errorz00(BGl_symbol2110z00zz__socketz00, BGl_string2084z00zz__socketz00, BgL_arg1291z00_1232); } } } 
{ /* Llib/socket.scm 404 */
obj_t BgL_index1124z00_1234;
BgL_index1124z00_1234 = 
BGl_search1121ze70ze7zz__socketz00(
VECTOR_LENGTH(BgL_opt1118z00_29), BgL_opt1118z00_29, BGl_keyword2108z00zz__socketz00, ((long)1)); 
{ /* Llib/socket.scm 404 */
bool_t BgL_test2375z00_3052;
{ /* Llib/socket.scm 404 */
long BgL_n1z00_1850;
{ /* Llib/socket.scm 404 */
obj_t BgL_tmpz00_3053;
if(
INTEGERP(BgL_index1124z00_1234))
{ /* Llib/socket.scm 404 */
BgL_tmpz00_3053 = BgL_index1124z00_1234
; }  else 
{ 
obj_t BgL_auxz00_3056;
BgL_auxz00_3056 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18105)), BGl_string2112z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1124z00_1234); 
FAILURE(BgL_auxz00_3056,BFALSE,BFALSE);} 
BgL_n1z00_1850 = 
(long)CINT(BgL_tmpz00_3053); } 
BgL_test2375z00_3052 = 
(BgL_n1z00_1850>=((long)0)); } 
if(BgL_test2375z00_3052)
{ 
long BgL_auxz00_3062;
{ /* Llib/socket.scm 404 */
obj_t BgL_tmpz00_3063;
if(
INTEGERP(BgL_index1124z00_1234))
{ /* Llib/socket.scm 404 */
BgL_tmpz00_3063 = BgL_index1124z00_1234
; }  else 
{ 
obj_t BgL_auxz00_3066;
BgL_auxz00_3066 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18105)), BGl_string2112z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1124z00_1234); 
FAILURE(BgL_auxz00_3066,BFALSE,BFALSE);} 
BgL_auxz00_3062 = 
(long)CINT(BgL_tmpz00_3063); } 
BgL_errpz00_1223 = 
VECTOR_REF(BgL_opt1118z00_29,BgL_auxz00_3062); }  else 
{ /* Llib/socket.scm 404 */BFALSE; } } } 
{ /* Llib/socket.scm 404 */
obj_t BgL_index1125z00_1236;
BgL_index1125z00_1236 = 
BGl_search1121ze70ze7zz__socketz00(
VECTOR_LENGTH(BgL_opt1118z00_29), BgL_opt1118z00_29, BGl_keyword2076z00zz__socketz00, ((long)1)); 
{ /* Llib/socket.scm 404 */
bool_t BgL_test2378z00_3074;
{ /* Llib/socket.scm 404 */
long BgL_n1z00_1852;
{ /* Llib/socket.scm 404 */
obj_t BgL_tmpz00_3075;
if(
INTEGERP(BgL_index1125z00_1236))
{ /* Llib/socket.scm 404 */
BgL_tmpz00_3075 = BgL_index1125z00_1236
; }  else 
{ 
obj_t BgL_auxz00_3078;
BgL_auxz00_3078 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18105)), BGl_string2112z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1125z00_1236); 
FAILURE(BgL_auxz00_3078,BFALSE,BFALSE);} 
BgL_n1z00_1852 = 
(long)CINT(BgL_tmpz00_3075); } 
BgL_test2378z00_3074 = 
(BgL_n1z00_1852>=((long)0)); } 
if(BgL_test2378z00_3074)
{ 
long BgL_auxz00_3084;
{ /* Llib/socket.scm 404 */
obj_t BgL_tmpz00_3085;
if(
INTEGERP(BgL_index1125z00_1236))
{ /* Llib/socket.scm 404 */
BgL_tmpz00_3085 = BgL_index1125z00_1236
; }  else 
{ 
obj_t BgL_auxz00_3088;
BgL_auxz00_3088 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18105)), BGl_string2112z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1125z00_1236); 
FAILURE(BgL_auxz00_3088,BFALSE,BFALSE);} 
BgL_auxz00_3084 = 
(long)CINT(BgL_tmpz00_3085); } 
BgL_inbufz00_1224 = 
VECTOR_REF(BgL_opt1118z00_29,BgL_auxz00_3084); }  else 
{ /* Llib/socket.scm 404 */BFALSE; } } } 
{ /* Llib/socket.scm 404 */
obj_t BgL_index1126z00_1238;
BgL_index1126z00_1238 = 
BGl_search1121ze70ze7zz__socketz00(
VECTOR_LENGTH(BgL_opt1118z00_29), BgL_opt1118z00_29, BGl_keyword2078z00zz__socketz00, ((long)1)); 
{ /* Llib/socket.scm 404 */
bool_t BgL_test2381z00_3096;
{ /* Llib/socket.scm 404 */
long BgL_n1z00_1854;
{ /* Llib/socket.scm 404 */
obj_t BgL_tmpz00_3097;
if(
INTEGERP(BgL_index1126z00_1238))
{ /* Llib/socket.scm 404 */
BgL_tmpz00_3097 = BgL_index1126z00_1238
; }  else 
{ 
obj_t BgL_auxz00_3100;
BgL_auxz00_3100 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18105)), BGl_string2112z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1126z00_1238); 
FAILURE(BgL_auxz00_3100,BFALSE,BFALSE);} 
BgL_n1z00_1854 = 
(long)CINT(BgL_tmpz00_3097); } 
BgL_test2381z00_3096 = 
(BgL_n1z00_1854>=((long)0)); } 
if(BgL_test2381z00_3096)
{ 
long BgL_auxz00_3106;
{ /* Llib/socket.scm 404 */
obj_t BgL_tmpz00_3107;
if(
INTEGERP(BgL_index1126z00_1238))
{ /* Llib/socket.scm 404 */
BgL_tmpz00_3107 = BgL_index1126z00_1238
; }  else 
{ 
obj_t BgL_auxz00_3110;
BgL_auxz00_3110 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18105)), BGl_string2112z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1126z00_1238); 
FAILURE(BgL_auxz00_3110,BFALSE,BFALSE);} 
BgL_auxz00_3106 = 
(long)CINT(BgL_tmpz00_3107); } 
BgL_outbufz00_1225 = 
VECTOR_REF(BgL_opt1118z00_29,BgL_auxz00_3106); }  else 
{ /* Llib/socket.scm 404 */BFALSE; } } } 
{ /* Llib/socket.scm 404 */
obj_t BgL_arg1296z00_1240;
BgL_arg1296z00_1240 = 
VECTOR_REF(BgL_opt1118z00_29,((long)0)); 
{ /* Llib/socket.scm 404 */
obj_t BgL_errpz00_1241;
BgL_errpz00_1241 = BgL_errpz00_1223; 
{ /* Llib/socket.scm 404 */
obj_t BgL_inbufz00_1242;
BgL_inbufz00_1242 = BgL_inbufz00_1224; 
{ /* Llib/socket.scm 404 */
obj_t BgL_outbufz00_1243;
BgL_outbufz00_1243 = BgL_outbufz00_1225; 
{ /* Llib/socket.scm 404 */
obj_t BgL_socketz00_1856;
if(
SOCKETP(BgL_arg1296z00_1240))
{ /* Llib/socket.scm 404 */
BgL_socketz00_1856 = BgL_arg1296z00_1240; }  else 
{ 
obj_t BgL_auxz00_3119;
BgL_auxz00_3119 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18105)), BGl_string2112z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_arg1296z00_1240); 
FAILURE(BgL_auxz00_3119,BFALSE,BFALSE);} 
return 
bgl_socket_accept(BgL_socketz00_1856, 
CBOOL(BgL_errpz00_1241), 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2111z00zz__socketz00, BgL_inbufz00_1242, 
(int)(((long)512))), 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2111z00zz__socketz00, BgL_outbufz00_1243, 
(int)(((long)1024))));} } } } } } } } } } } 

}



/* search1121~0 */
obj_t BGl_search1121ze70ze7zz__socketz00(long BgL_l1120z00_2297, obj_t BgL_opt1118z00_2296, obj_t BgL_k1z00_1219, long BgL_iz00_1220)
{
{ /* Llib/socket.scm 404 */
BGl_search1121ze70ze7zz__socketz00:
if(
(BgL_iz00_1220==BgL_l1120z00_2297))
{ /* Llib/socket.scm 404 */
return 
BINT(((long)-1));}  else 
{ /* Llib/socket.scm 404 */
if(
(BgL_iz00_1220==
(BgL_l1120z00_2297-((long)1))))
{ /* Llib/socket.scm 404 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2110z00zz__socketz00, BGl_string2113z00zz__socketz00, 
BINT(
VECTOR_LENGTH(BgL_opt1118z00_2296)));}  else 
{ /* Llib/socket.scm 404 */
obj_t BgL_vz00_1248;
BgL_vz00_1248 = 
VECTOR_REF(BgL_opt1118z00_2296,BgL_iz00_1220); 
if(
(BgL_vz00_1248==BgL_k1z00_1219))
{ /* Llib/socket.scm 404 */
return 
BINT(
(BgL_iz00_1220+((long)1)));}  else 
{ 
long BgL_iz00_3143;
BgL_iz00_3143 = 
(BgL_iz00_1220+((long)2)); 
BgL_iz00_1220 = BgL_iz00_3143; 
goto BGl_search1121ze70ze7zz__socketz00;} } } } 

}



/* socket-accept */
BGL_EXPORTED_DEF obj_t BGl_socketzd2acceptzd2zz__socketz00(obj_t BgL_socketz00_25, obj_t BgL_errpz00_26, obj_t BgL_inbufz00_27, obj_t BgL_outbufz00_28)
{
{ /* Llib/socket.scm 404 */
return 
bgl_socket_accept(BgL_socketz00_25, 
CBOOL(BgL_errpz00_26), 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2111z00zz__socketz00, BgL_inbufz00_27, 
(int)(((long)512))), 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2111z00zz__socketz00, BgL_outbufz00_28, 
(int)(((long)1024))));} 

}



/* _socket-accept-many */
obj_t BGl__socketzd2acceptzd2manyz00zz__socketz00(obj_t BgL_env1129z00_37, obj_t BgL_opt1128z00_36)
{
{ /* Llib/socket.scm 415 */
{ /* Llib/socket.scm 415 */
obj_t BgL_g1137z00_1258;obj_t BgL_g1138z00_1259;
BgL_g1137z00_1258 = 
VECTOR_REF(BgL_opt1128z00_36,((long)0)); 
BgL_g1138z00_1259 = 
VECTOR_REF(BgL_opt1128z00_36,((long)1)); 
{ /* Llib/socket.scm 415 */
obj_t BgL_errpz00_1260;
BgL_errpz00_1260 = BTRUE; 
{ /* Llib/socket.scm 415 */
obj_t BgL_inbufsz00_1261;
BgL_inbufsz00_1261 = BTRUE; 
{ /* Llib/socket.scm 415 */
obj_t BgL_outbufsz00_1262;
BgL_outbufsz00_1262 = BTRUE; 
{ /* Llib/socket.scm 415 */

{ 
long BgL_iz00_1263;
BgL_iz00_1263 = ((long)2); 
BgL_check1132z00_1264:
if(
(BgL_iz00_1263==
VECTOR_LENGTH(BgL_opt1128z00_36)))
{ /* Llib/socket.scm 415 */BNIL; }  else 
{ /* Llib/socket.scm 415 */
bool_t BgL_test2389z00_3156;
{ /* Llib/socket.scm 415 */
obj_t BgL_arg1310z00_1270;
{ /* Llib/socket.scm 415 */
bool_t BgL_test2390z00_3157;
{ /* Llib/socket.scm 415 */
long BgL_tmpz00_3158;
BgL_tmpz00_3158 = 
VECTOR_LENGTH(BgL_opt1128z00_36); 
BgL_test2390z00_3157 = 
BOUND_CHECK(BgL_iz00_1263, BgL_tmpz00_3158); } 
if(BgL_test2390z00_3157)
{ /* Llib/socket.scm 415 */
BgL_arg1310z00_1270 = 
VECTOR_REF(BgL_opt1128z00_36,BgL_iz00_1263); }  else 
{ 
obj_t BgL_auxz00_3162;
BgL_auxz00_3162 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18797)), BGl_string2072z00zz__socketz00, BgL_opt1128z00_36, 
(int)(
VECTOR_LENGTH(BgL_opt1128z00_36)), 
(int)(BgL_iz00_1263)); 
FAILURE(BgL_auxz00_3162,BFALSE,BFALSE);} } 
BgL_test2389z00_3156 = 
CBOOL(
BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg1310z00_1270, BGl_list2114z00zz__socketz00)); } 
if(BgL_test2389z00_3156)
{ 
long BgL_iz00_3171;
BgL_iz00_3171 = 
(BgL_iz00_1263+((long)2)); 
BgL_iz00_1263 = BgL_iz00_3171; 
goto BgL_check1132z00_1264;}  else 
{ /* Llib/socket.scm 415 */
obj_t BgL_arg1309z00_1269;
{ /* Llib/socket.scm 415 */
bool_t BgL_test2391z00_3173;
{ /* Llib/socket.scm 415 */
long BgL_tmpz00_3174;
BgL_tmpz00_3174 = 
VECTOR_LENGTH(BgL_opt1128z00_36); 
BgL_test2391z00_3173 = 
BOUND_CHECK(BgL_iz00_1263, BgL_tmpz00_3174); } 
if(BgL_test2391z00_3173)
{ /* Llib/socket.scm 415 */
BgL_arg1309z00_1269 = 
VECTOR_REF(BgL_opt1128z00_36,BgL_iz00_1263); }  else 
{ 
obj_t BgL_auxz00_3178;
BgL_auxz00_3178 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18797)), BGl_string2072z00zz__socketz00, BgL_opt1128z00_36, 
(int)(
VECTOR_LENGTH(BgL_opt1128z00_36)), 
(int)(BgL_iz00_1263)); 
FAILURE(BgL_auxz00_3178,BFALSE,BFALSE);} } 
BGl_errorz00zz__errorz00(BGl_symbol2119z00zz__socketz00, BGl_string2084z00zz__socketz00, BgL_arg1309z00_1269); } } } 
{ /* Llib/socket.scm 415 */
obj_t BgL_index1134z00_1271;
BgL_index1134z00_1271 = 
BGl_search1131ze70ze7zz__socketz00(
VECTOR_LENGTH(BgL_opt1128z00_36), BgL_opt1128z00_36, BGl_keyword2108z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 415 */
bool_t BgL_test2392z00_3188;
{ /* Llib/socket.scm 415 */
long BgL_n1z00_1883;
{ /* Llib/socket.scm 415 */
obj_t BgL_tmpz00_3189;
if(
INTEGERP(BgL_index1134z00_1271))
{ /* Llib/socket.scm 415 */
BgL_tmpz00_3189 = BgL_index1134z00_1271
; }  else 
{ 
obj_t BgL_auxz00_3192;
BgL_auxz00_3192 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18797)), BGl_string2121z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1134z00_1271); 
FAILURE(BgL_auxz00_3192,BFALSE,BFALSE);} 
BgL_n1z00_1883 = 
(long)CINT(BgL_tmpz00_3189); } 
BgL_test2392z00_3188 = 
(BgL_n1z00_1883>=((long)0)); } 
if(BgL_test2392z00_3188)
{ 
long BgL_auxz00_3198;
{ /* Llib/socket.scm 415 */
obj_t BgL_tmpz00_3199;
if(
INTEGERP(BgL_index1134z00_1271))
{ /* Llib/socket.scm 415 */
BgL_tmpz00_3199 = BgL_index1134z00_1271
; }  else 
{ 
obj_t BgL_auxz00_3202;
BgL_auxz00_3202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18797)), BGl_string2121z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1134z00_1271); 
FAILURE(BgL_auxz00_3202,BFALSE,BFALSE);} 
BgL_auxz00_3198 = 
(long)CINT(BgL_tmpz00_3199); } 
BgL_errpz00_1260 = 
VECTOR_REF(BgL_opt1128z00_36,BgL_auxz00_3198); }  else 
{ /* Llib/socket.scm 415 */BFALSE; } } } 
{ /* Llib/socket.scm 415 */
obj_t BgL_index1135z00_1273;
BgL_index1135z00_1273 = 
BGl_search1131ze70ze7zz__socketz00(
VECTOR_LENGTH(BgL_opt1128z00_36), BgL_opt1128z00_36, BGl_keyword2115z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 415 */
bool_t BgL_test2395z00_3210;
{ /* Llib/socket.scm 415 */
long BgL_n1z00_1885;
{ /* Llib/socket.scm 415 */
obj_t BgL_tmpz00_3211;
if(
INTEGERP(BgL_index1135z00_1273))
{ /* Llib/socket.scm 415 */
BgL_tmpz00_3211 = BgL_index1135z00_1273
; }  else 
{ 
obj_t BgL_auxz00_3214;
BgL_auxz00_3214 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18797)), BGl_string2121z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1135z00_1273); 
FAILURE(BgL_auxz00_3214,BFALSE,BFALSE);} 
BgL_n1z00_1885 = 
(long)CINT(BgL_tmpz00_3211); } 
BgL_test2395z00_3210 = 
(BgL_n1z00_1885>=((long)0)); } 
if(BgL_test2395z00_3210)
{ 
long BgL_auxz00_3220;
{ /* Llib/socket.scm 415 */
obj_t BgL_tmpz00_3221;
if(
INTEGERP(BgL_index1135z00_1273))
{ /* Llib/socket.scm 415 */
BgL_tmpz00_3221 = BgL_index1135z00_1273
; }  else 
{ 
obj_t BgL_auxz00_3224;
BgL_auxz00_3224 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18797)), BGl_string2121z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1135z00_1273); 
FAILURE(BgL_auxz00_3224,BFALSE,BFALSE);} 
BgL_auxz00_3220 = 
(long)CINT(BgL_tmpz00_3221); } 
BgL_inbufsz00_1261 = 
VECTOR_REF(BgL_opt1128z00_36,BgL_auxz00_3220); }  else 
{ /* Llib/socket.scm 415 */BFALSE; } } } 
{ /* Llib/socket.scm 415 */
obj_t BgL_index1136z00_1275;
BgL_index1136z00_1275 = 
BGl_search1131ze70ze7zz__socketz00(
VECTOR_LENGTH(BgL_opt1128z00_36), BgL_opt1128z00_36, BGl_keyword2117z00zz__socketz00, ((long)2)); 
{ /* Llib/socket.scm 415 */
bool_t BgL_test2398z00_3232;
{ /* Llib/socket.scm 415 */
long BgL_n1z00_1887;
{ /* Llib/socket.scm 415 */
obj_t BgL_tmpz00_3233;
if(
INTEGERP(BgL_index1136z00_1275))
{ /* Llib/socket.scm 415 */
BgL_tmpz00_3233 = BgL_index1136z00_1275
; }  else 
{ 
obj_t BgL_auxz00_3236;
BgL_auxz00_3236 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18797)), BGl_string2121z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1136z00_1275); 
FAILURE(BgL_auxz00_3236,BFALSE,BFALSE);} 
BgL_n1z00_1887 = 
(long)CINT(BgL_tmpz00_3233); } 
BgL_test2398z00_3232 = 
(BgL_n1z00_1887>=((long)0)); } 
if(BgL_test2398z00_3232)
{ 
long BgL_auxz00_3242;
{ /* Llib/socket.scm 415 */
obj_t BgL_tmpz00_3243;
if(
INTEGERP(BgL_index1136z00_1275))
{ /* Llib/socket.scm 415 */
BgL_tmpz00_3243 = BgL_index1136z00_1275
; }  else 
{ 
obj_t BgL_auxz00_3246;
BgL_auxz00_3246 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18797)), BGl_string2121z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_index1136z00_1275); 
FAILURE(BgL_auxz00_3246,BFALSE,BFALSE);} 
BgL_auxz00_3242 = 
(long)CINT(BgL_tmpz00_3243); } 
BgL_outbufsz00_1262 = 
VECTOR_REF(BgL_opt1128z00_36,BgL_auxz00_3242); }  else 
{ /* Llib/socket.scm 415 */BFALSE; } } } 
{ /* Llib/socket.scm 415 */
obj_t BgL_arg1314z00_1277;obj_t BgL_arg1315z00_1278;
BgL_arg1314z00_1277 = 
VECTOR_REF(BgL_opt1128z00_36,((long)0)); 
BgL_arg1315z00_1278 = 
VECTOR_REF(BgL_opt1128z00_36,((long)1)); 
{ /* Llib/socket.scm 415 */
obj_t BgL_errpz00_1279;
BgL_errpz00_1279 = BgL_errpz00_1260; 
{ /* Llib/socket.scm 415 */
obj_t BgL_inbufsz00_1280;
BgL_inbufsz00_1280 = BgL_inbufsz00_1261; 
{ /* Llib/socket.scm 415 */
obj_t BgL_outbufsz00_1281;
BgL_outbufsz00_1281 = BgL_outbufsz00_1262; 
{ /* Llib/socket.scm 415 */
obj_t BgL_auxz00_3261;obj_t BgL_auxz00_3254;
if(
VECTORP(BgL_arg1315z00_1278))
{ /* Llib/socket.scm 415 */
BgL_auxz00_3261 = BgL_arg1315z00_1278
; }  else 
{ 
obj_t BgL_auxz00_3264;
BgL_auxz00_3264 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18797)), BGl_string2121z00zz__socketz00, BGl_string2122z00zz__socketz00, BgL_arg1315z00_1278); 
FAILURE(BgL_auxz00_3264,BFALSE,BFALSE);} 
if(
SOCKETP(BgL_arg1314z00_1277))
{ /* Llib/socket.scm 415 */
BgL_auxz00_3254 = BgL_arg1314z00_1277
; }  else 
{ 
obj_t BgL_auxz00_3257;
BgL_auxz00_3257 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)18797)), BGl_string2121z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_arg1314z00_1277); 
FAILURE(BgL_auxz00_3257,BFALSE,BFALSE);} 
return 
BGl_socketzd2acceptzd2manyz00zz__socketz00(BgL_auxz00_3254, BgL_auxz00_3261, BgL_errpz00_1279, BgL_inbufsz00_1280, BgL_outbufsz00_1281);} } } } } } } } } } } 

}



/* search1131~0 */
obj_t BGl_search1131ze70ze7zz__socketz00(long BgL_l1130z00_2295, obj_t BgL_opt1128z00_2294, obj_t BgL_k1z00_1255, long BgL_iz00_1256)
{
{ /* Llib/socket.scm 415 */
BGl_search1131ze70ze7zz__socketz00:
if(
(BgL_iz00_1256==BgL_l1130z00_2295))
{ /* Llib/socket.scm 415 */
return 
BINT(((long)-1));}  else 
{ /* Llib/socket.scm 415 */
if(
(BgL_iz00_1256==
(BgL_l1130z00_2295-((long)1))))
{ /* Llib/socket.scm 415 */
return 
BGl_errorz00zz__errorz00(BGl_symbol2119z00zz__socketz00, BGl_string2123z00zz__socketz00, 
BINT(
VECTOR_LENGTH(BgL_opt1128z00_2294)));}  else 
{ /* Llib/socket.scm 415 */
obj_t BgL_vz00_1286;
BgL_vz00_1286 = 
VECTOR_REF(BgL_opt1128z00_2294,BgL_iz00_1256); 
if(
(BgL_vz00_1286==BgL_k1z00_1255))
{ /* Llib/socket.scm 415 */
return 
BINT(
(BgL_iz00_1256+((long)1)));}  else 
{ 
long BgL_iz00_3283;
BgL_iz00_3283 = 
(BgL_iz00_1256+((long)2)); 
BgL_iz00_1256 = BgL_iz00_3283; 
goto BGl_search1131ze70ze7zz__socketz00;} } } } 

}



/* socket-accept-many */
BGL_EXPORTED_DEF obj_t BGl_socketzd2acceptzd2manyz00zz__socketz00(obj_t BgL_socketz00_31, obj_t BgL_resultz00_32, obj_t BgL_errpz00_33, obj_t BgL_inbufsz00_34, obj_t BgL_outbufsz00_35)
{
{ /* Llib/socket.scm 415 */
if(
VECTORP(BgL_inbufsz00_34))
{ /* Llib/socket.scm 416 */((bool_t)0); }  else 
{ /* Llib/socket.scm 416 */
BgL_inbufsz00_34 = 
make_vector(
VECTOR_LENGTH(BgL_resultz00_32), BUNSPEC); 
{ 
long BgL_iz00_1294;
BgL_iz00_1294 = ((long)0); 
BgL_zc3z04anonymousza31328ze3z87_1295:
if(
(BgL_iz00_1294<
VECTOR_LENGTH(BgL_resultz00_32)))
{ /* Llib/socket.scm 420 */
obj_t BgL_bufz00_1298;
BgL_bufz00_1298 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2120z00zz__socketz00, BTRUE, 
(int)(((long)512))); 
{ /* Llib/socket.scm 421 */
obj_t BgL_vectorz00_1897;
{ /* Llib/socket.scm 421 */
obj_t BgL_aux1964z00_2427;
BgL_aux1964z00_2427 = BgL_inbufsz00_34; 
if(
VECTORP(BgL_aux1964z00_2427))
{ /* Llib/socket.scm 421 */
BgL_vectorz00_1897 = BgL_aux1964z00_2427; }  else 
{ 
obj_t BgL_auxz00_3296;
BgL_auxz00_3296 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)19122)), BGl_string2124z00zz__socketz00, BGl_string2122z00zz__socketz00, BgL_aux1964z00_2427); 
FAILURE(BgL_auxz00_3296,BFALSE,BFALSE);} } 
{ /* Llib/socket.scm 421 */
bool_t BgL_test2409z00_3300;
{ /* Llib/socket.scm 421 */
long BgL_tmpz00_3301;
BgL_tmpz00_3301 = 
VECTOR_LENGTH(BgL_vectorz00_1897); 
BgL_test2409z00_3300 = 
BOUND_CHECK(BgL_iz00_1294, BgL_tmpz00_3301); } 
if(BgL_test2409z00_3300)
{ /* Llib/socket.scm 421 */
VECTOR_SET(BgL_vectorz00_1897,BgL_iz00_1294,BgL_bufz00_1298); }  else 
{ 
obj_t BgL_auxz00_3305;
BgL_auxz00_3305 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)19109)), BGl_string2125z00zz__socketz00, BgL_vectorz00_1897, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_1897)), 
(int)(BgL_iz00_1294)); 
FAILURE(BgL_auxz00_3305,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_3312;
BgL_iz00_3312 = 
(BgL_iz00_1294+((long)1)); 
BgL_iz00_1294 = BgL_iz00_3312; 
goto BgL_zc3z04anonymousza31328ze3z87_1295;} }  else 
{ /* Llib/socket.scm 419 */((bool_t)0); } } } 
if(
VECTORP(BgL_outbufsz00_35))
{ /* Llib/socket.scm 423 */((bool_t)0); }  else 
{ /* Llib/socket.scm 423 */
BgL_outbufsz00_35 = 
make_vector(
VECTOR_LENGTH(BgL_resultz00_32), BUNSPEC); 
{ 
long BgL_iz00_1306;
BgL_iz00_1306 = ((long)0); 
BgL_zc3z04anonymousza31338ze3z87_1307:
if(
(BgL_iz00_1306<
VECTOR_LENGTH(BgL_resultz00_32)))
{ /* Llib/socket.scm 427 */
obj_t BgL_bufz00_1310;
BgL_bufz00_1310 = 
BGl_getzd2portzd2bufferz00zz__r4_ports_6_10_1z00(BGl_string2120z00zz__socketz00, BTRUE, 
(int)(((long)512))); 
{ /* Llib/socket.scm 428 */
obj_t BgL_vectorz00_1909;
{ /* Llib/socket.scm 428 */
obj_t BgL_aux1966z00_2430;
BgL_aux1966z00_2430 = BgL_outbufsz00_35; 
if(
VECTORP(BgL_aux1966z00_2430))
{ /* Llib/socket.scm 428 */
BgL_vectorz00_1909 = BgL_aux1966z00_2430; }  else 
{ 
obj_t BgL_auxz00_3325;
BgL_auxz00_3325 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)19400)), BGl_string2124z00zz__socketz00, BGl_string2122z00zz__socketz00, BgL_aux1966z00_2430); 
FAILURE(BgL_auxz00_3325,BFALSE,BFALSE);} } 
{ /* Llib/socket.scm 428 */
bool_t BgL_test2413z00_3329;
{ /* Llib/socket.scm 428 */
long BgL_tmpz00_3330;
BgL_tmpz00_3330 = 
VECTOR_LENGTH(BgL_vectorz00_1909); 
BgL_test2413z00_3329 = 
BOUND_CHECK(BgL_iz00_1306, BgL_tmpz00_3330); } 
if(BgL_test2413z00_3329)
{ /* Llib/socket.scm 428 */
VECTOR_SET(BgL_vectorz00_1909,BgL_iz00_1306,BgL_bufz00_1310); }  else 
{ 
obj_t BgL_auxz00_3334;
BgL_auxz00_3334 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)19387)), BGl_string2125z00zz__socketz00, BgL_vectorz00_1909, 
(int)(
VECTOR_LENGTH(BgL_vectorz00_1909)), 
(int)(BgL_iz00_1306)); 
FAILURE(BgL_auxz00_3334,BFALSE,BFALSE);} } } 
{ 
long BgL_iz00_3341;
BgL_iz00_3341 = 
(BgL_iz00_1306+((long)1)); 
BgL_iz00_1306 = BgL_iz00_3341; 
goto BgL_zc3z04anonymousza31338ze3z87_1307;} }  else 
{ /* Llib/socket.scm 426 */((bool_t)0); } } } 
{ /* Llib/socket.scm 432 */
long BgL_tmpz00_3343;
{ /* Llib/socket.scm 432 */
obj_t BgL_auxz00_3352;obj_t BgL_tmpz00_3344;
{ /* Llib/socket.scm 432 */
obj_t BgL_aux1970z00_2434;
BgL_aux1970z00_2434 = BgL_outbufsz00_35; 
if(
VECTORP(BgL_aux1970z00_2434))
{ /* Llib/socket.scm 432 */
BgL_auxz00_3352 = BgL_aux1970z00_2434
; }  else 
{ 
obj_t BgL_auxz00_3355;
BgL_auxz00_3355 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)19523)), BGl_string2120z00zz__socketz00, BGl_string2122z00zz__socketz00, BgL_aux1970z00_2434); 
FAILURE(BgL_auxz00_3355,BFALSE,BFALSE);} } 
{ /* Llib/socket.scm 432 */
obj_t BgL_aux1968z00_2432;
BgL_aux1968z00_2432 = BgL_inbufsz00_34; 
if(
VECTORP(BgL_aux1968z00_2432))
{ /* Llib/socket.scm 432 */
BgL_tmpz00_3344 = BgL_aux1968z00_2432
; }  else 
{ 
obj_t BgL_auxz00_3348;
BgL_auxz00_3348 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)19516)), BGl_string2120z00zz__socketz00, BGl_string2122z00zz__socketz00, BgL_aux1968z00_2432); 
FAILURE(BgL_auxz00_3348,BFALSE,BFALSE);} } 
BgL_tmpz00_3343 = 
bgl_socket_accept_many(BgL_socketz00_31, 
CBOOL(BgL_errpz00_33), BgL_tmpz00_3344, BgL_auxz00_3352, BgL_resultz00_32); } 
return 
BINT(BgL_tmpz00_3343);} } 

}



/* _socket-shutdown */
obj_t BGl__socketzd2shutdownzd2zz__socketz00(obj_t BgL_env1140z00_41, obj_t BgL_opt1139z00_40)
{
{ /* Llib/socket.scm 443 */
{ /* Llib/socket.scm 443 */
obj_t BgL_g1141z00_1314;
BgL_g1141z00_1314 = 
VECTOR_REF(BgL_opt1139z00_40,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1139z00_40)) { case ((long)1) : 

{ /* Llib/socket.scm 443 */

{ /* Llib/socket.scm 443 */
int BgL_tmpz00_3362;
{ /* Llib/socket.scm 443 */
obj_t BgL_auxz00_3363;
if(
SOCKETP(BgL_g1141z00_1314))
{ /* Llib/socket.scm 443 */
BgL_auxz00_3363 = BgL_g1141z00_1314
; }  else 
{ 
obj_t BgL_auxz00_3366;
BgL_auxz00_3366 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)19935)), BGl_string2129z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_g1141z00_1314); 
FAILURE(BgL_auxz00_3366,BFALSE,BFALSE);} 
BgL_tmpz00_3362 = 
BGl_socketzd2shutdownzd2zz__socketz00(BgL_auxz00_3363, BTRUE); } 
return 
BINT(BgL_tmpz00_3362);} } break;case ((long)2) : 

{ /* Llib/socket.scm 443 */
obj_t BgL_howz00_1319;
BgL_howz00_1319 = 
VECTOR_REF(BgL_opt1139z00_40,((long)1)); 
{ /* Llib/socket.scm 443 */

{ /* Llib/socket.scm 443 */
int BgL_tmpz00_3373;
{ /* Llib/socket.scm 443 */
obj_t BgL_auxz00_3374;
if(
SOCKETP(BgL_g1141z00_1314))
{ /* Llib/socket.scm 443 */
BgL_auxz00_3374 = BgL_g1141z00_1314
; }  else 
{ 
obj_t BgL_auxz00_3377;
BgL_auxz00_3377 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)19935)), BGl_string2129z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_g1141z00_1314); 
FAILURE(BgL_auxz00_3377,BFALSE,BFALSE);} 
BgL_tmpz00_3373 = 
BGl_socketzd2shutdownzd2zz__socketz00(BgL_auxz00_3374, BgL_howz00_1319); } 
return 
BINT(BgL_tmpz00_3373);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2126z00zz__socketz00, BGl_string2128z00zz__socketz00, 
BINT(
VECTOR_LENGTH(BgL_opt1139z00_40)));} } } } 

}



/* socket-shutdown */
BGL_EXPORTED_DEF int BGl_socketzd2shutdownzd2zz__socketz00(obj_t BgL_socketz00_38, obj_t BgL_howz00_39)
{
{ /* Llib/socket.scm 443 */
if(
(BgL_howz00_39==BTRUE))
{ /* Llib/socket.scm 446 */
int BgL_rz00_1322;
BgL_rz00_1322 = 
socket_shutdown(BgL_socketz00_38, 
(int)(((long)2))); 
socket_close(BgL_socketz00_38); 
return BgL_rz00_1322;}  else 
{ /* Llib/socket.scm 449 */
bool_t BgL_test2419z00_3393;
if(
(BgL_howz00_39==BFALSE))
{ /* Llib/socket.scm 449 */
BgL_test2419z00_3393 = ((bool_t)1)
; }  else 
{ /* Llib/socket.scm 449 */
BgL_test2419z00_3393 = 
(BgL_howz00_39==BGl_symbol2130z00zz__socketz00)
; } 
if(BgL_test2419z00_3393)
{ /* Llib/socket.scm 449 */
return 
socket_shutdown(BgL_socketz00_38, 
(int)(((long)2)));}  else 
{ /* Llib/socket.scm 449 */
if(
(BgL_howz00_39==BGl_symbol2132z00zz__socketz00))
{ /* Llib/socket.scm 451 */
return 
socket_shutdown(BgL_socketz00_38, 
(int)(((long)1)));}  else 
{ /* Llib/socket.scm 451 */
if(
(BgL_howz00_39==BGl_symbol2134z00zz__socketz00))
{ /* Llib/socket.scm 453 */
return 
socket_shutdown(BgL_socketz00_38, 
(int)(((long)0)));}  else 
{ /* Llib/socket.scm 456 */
obj_t BgL_tmpz00_3407;
{ /* Llib/socket.scm 456 */
obj_t BgL_aux1976z00_2440;
BgL_aux1976z00_2440 = 
BGl_errorz00zz__errorz00(BGl_string2127z00zz__socketz00, BGl_string2136z00zz__socketz00, BgL_howz00_39); 
if(
INTEGERP(BgL_aux1976z00_2440))
{ /* Llib/socket.scm 456 */
BgL_tmpz00_3407 = BgL_aux1976z00_2440
; }  else 
{ 
obj_t BgL_auxz00_3411;
BgL_auxz00_3411 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)20313)), BGl_string2127z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_aux1976z00_2440); 
FAILURE(BgL_auxz00_3411,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_3407);} } } } } 

}



/* socket-close */
BGL_EXPORTED_DEF obj_t BGl_socketzd2closezd2zz__socketz00(obj_t BgL_socketz00_42)
{
{ /* Llib/socket.scm 461 */
return 
socket_close(BgL_socketz00_42);} 

}



/* &socket-close */
obj_t BGl_z62socketzd2closezb0zz__socketz00(obj_t BgL_envz00_2241, obj_t BgL_socketz00_2242)
{
{ /* Llib/socket.scm 461 */
{ /* Llib/socket.scm 462 */
obj_t BgL_auxz00_3417;
if(
SOCKETP(BgL_socketz00_2242))
{ /* Llib/socket.scm 462 */
BgL_auxz00_3417 = BgL_socketz00_2242
; }  else 
{ 
obj_t BgL_auxz00_3420;
BgL_auxz00_3420 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)20643)), BGl_string2137z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2242); 
FAILURE(BgL_auxz00_3420,BFALSE,BFALSE);} 
return 
BGl_socketzd2closezd2zz__socketz00(BgL_auxz00_3417);} } 

}



/* host */
BGL_EXPORTED_DEF obj_t BGl_hostz00zz__socketz00(obj_t BgL_hostnamez00_43)
{
{ /* Llib/socket.scm 467 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
return 
bgl_host(BgL_hostnamez00_43);} 

}



/* &host */
obj_t BGl_z62hostz62zz__socketz00(obj_t BgL_envz00_2243, obj_t BgL_hostnamez00_2244)
{
{ /* Llib/socket.scm 467 */
{ /* Llib/socket.scm 469 */
obj_t BgL_auxz00_3427;
if(
STRINGP(BgL_hostnamez00_2244))
{ /* Llib/socket.scm 469 */
BgL_auxz00_3427 = BgL_hostnamez00_2244
; }  else 
{ 
obj_t BgL_auxz00_3430;
BgL_auxz00_3430 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)20951)), BGl_string2138z00zz__socketz00, BGl_string2065z00zz__socketz00, BgL_hostnamez00_2244); 
FAILURE(BgL_auxz00_3430,BFALSE,BFALSE);} 
return 
BGl_hostz00zz__socketz00(BgL_auxz00_3427);} } 

}



/* hostinfo */
BGL_EXPORTED_DEF obj_t BGl_hostinfoz00zz__socketz00(obj_t BgL_hostnamez00_44)
{
{ /* Llib/socket.scm 475 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
return 
bgl_hostinfo(BgL_hostnamez00_44);} 

}



/* &hostinfo */
obj_t BGl_z62hostinfoz62zz__socketz00(obj_t BgL_envz00_2245, obj_t BgL_hostnamez00_2246)
{
{ /* Llib/socket.scm 475 */
{ /* Llib/socket.scm 477 */
obj_t BgL_auxz00_3437;
if(
STRINGP(BgL_hostnamez00_2246))
{ /* Llib/socket.scm 477 */
BgL_auxz00_3437 = BgL_hostnamez00_2246
; }  else 
{ 
obj_t BgL_auxz00_3440;
BgL_auxz00_3440 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)21266)), BGl_string2139z00zz__socketz00, BGl_string2065z00zz__socketz00, BgL_hostnamez00_2246); 
FAILURE(BgL_auxz00_3440,BFALSE,BFALSE);} 
return 
BGl_hostinfoz00zz__socketz00(BgL_auxz00_3437);} } 

}



/* _hostname */
obj_t BGl__hostnamez00zz__socketz00(obj_t BgL_env1145z00_47, obj_t BgL_opt1144z00_46)
{
{ /* Llib/socket.scm 483 */
{ /* Llib/socket.scm 483 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1144z00_46)) { case ((long)0) : 

{ /* Llib/socket.scm 483 */

{ /* Llib/socket.scm 483 */
obj_t BgL_res1777z00_1914;
BGl_z52socketzd2initz12z92zz__socketz00(); 
BgL_res1777z00_1914 = 
bgl_gethostname(); 
return BgL_res1777z00_1914;} } break;case ((long)1) : 

{ /* Llib/socket.scm 483 */
obj_t BgL_hostipz00_1332;
BgL_hostipz00_1332 = 
VECTOR_REF(BgL_opt1144z00_46,((long)0)); 
{ /* Llib/socket.scm 483 */

{ /* Llib/socket.scm 483 */
obj_t BgL_res1778z00_1915;
BGl_z52socketzd2initz12z92zz__socketz00(); 
if(
CBOOL(BgL_hostipz00_1332))
{ /* Llib/socket.scm 486 */
obj_t BgL_tmpz00_3451;
if(
STRINGP(BgL_hostipz00_1332))
{ /* Llib/socket.scm 486 */
BgL_tmpz00_3451 = BgL_hostipz00_1332
; }  else 
{ 
obj_t BgL_auxz00_3454;
BgL_auxz00_3454 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)21622)), BGl_string2143z00zz__socketz00, BGl_string2065z00zz__socketz00, BgL_hostipz00_1332); 
FAILURE(BgL_auxz00_3454,BFALSE,BFALSE);} 
BgL_res1778z00_1915 = 
bgl_gethostname_by_address(BgL_tmpz00_3451); }  else 
{ /* Llib/socket.scm 485 */
BgL_res1778z00_1915 = 
bgl_gethostname(); } 
return BgL_res1778z00_1915;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2140z00zz__socketz00, BGl_string2142z00zz__socketz00, 
BINT(
VECTOR_LENGTH(BgL_opt1144z00_46)));} } } } 

}



/* hostname */
BGL_EXPORTED_DEF obj_t BGl_hostnamez00zz__socketz00(obj_t BgL_hostipz00_45)
{
{ /* Llib/socket.scm 483 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
if(
CBOOL(BgL_hostipz00_45))
{ /* Llib/socket.scm 486 */
obj_t BgL_tmpz00_3468;
if(
STRINGP(BgL_hostipz00_45))
{ /* Llib/socket.scm 486 */
BgL_tmpz00_3468 = BgL_hostipz00_45
; }  else 
{ 
obj_t BgL_auxz00_3471;
BgL_auxz00_3471 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)21622)), BGl_string2141z00zz__socketz00, BGl_string2065z00zz__socketz00, BgL_hostipz00_45); 
FAILURE(BgL_auxz00_3471,BFALSE,BFALSE);} 
return 
bgl_gethostname_by_address(BgL_tmpz00_3468);}  else 
{ /* Llib/socket.scm 485 */
return 
bgl_gethostname();} } 

}



/* resolv */
BGL_EXPORTED_DEF obj_t BGl_resolvz00zz__socketz00(obj_t BgL_hostnamez00_48, obj_t BgL_typez00_49)
{
{ /* Llib/socket.scm 492 */
{ /* Llib/socket.scm 495 */
obj_t BgL_arg1352z00_1916;
{ /* Llib/socket.scm 495 */
obj_t BgL_res1779z00_1918;
BgL_res1779z00_1918 = 
SYMBOL_TO_STRING(BgL_typez00_49); 
BgL_arg1352z00_1916 = BgL_res1779z00_1918; } 
return 
bgl_res_query(BgL_hostnamez00_48, BgL_arg1352z00_1916);} } 

}



/* &resolv */
obj_t BGl_z62resolvz62zz__socketz00(obj_t BgL_envz00_2247, obj_t BgL_hostnamez00_2248, obj_t BgL_typez00_2249)
{
{ /* Llib/socket.scm 492 */
{ /* Llib/socket.scm 495 */
obj_t BgL_auxz00_3486;obj_t BgL_auxz00_3479;
if(
SYMBOLP(BgL_typez00_2249))
{ /* Llib/socket.scm 495 */
BgL_auxz00_3486 = BgL_typez00_2249
; }  else 
{ 
obj_t BgL_auxz00_3489;
BgL_auxz00_3489 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)21965)), BGl_string2144z00zz__socketz00, BGl_string2145z00zz__socketz00, BgL_typez00_2249); 
FAILURE(BgL_auxz00_3489,BFALSE,BFALSE);} 
if(
STRINGP(BgL_hostnamez00_2248))
{ /* Llib/socket.scm 495 */
BgL_auxz00_3479 = BgL_hostnamez00_2248
; }  else 
{ 
obj_t BgL_auxz00_3482;
BgL_auxz00_3482 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)21965)), BGl_string2144z00zz__socketz00, BGl_string2065z00zz__socketz00, BgL_hostnamez00_2248); 
FAILURE(BgL_auxz00_3482,BFALSE,BFALSE);} 
return 
BGl_resolvz00zz__socketz00(BgL_auxz00_3479, BgL_auxz00_3486);} } 

}



/* get-interfaces */
BGL_EXPORTED_DEF obj_t BGl_getzd2interfaceszd2zz__socketz00()
{
{ /* Llib/socket.scm 502 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
return 
bgl_gethostinterfaces();} 

}



/* &get-interfaces */
obj_t BGl_z62getzd2interfaceszb0zz__socketz00(obj_t BgL_envz00_2250)
{
{ /* Llib/socket.scm 502 */
return 
BGl_getzd2interfaceszd2zz__socketz00();} 

}



/* get-protocols */
BGL_EXPORTED_DEF obj_t BGl_getzd2protocolszd2zz__socketz00()
{
{ /* Llib/socket.scm 510 */
return 
bgl_getprotoents();} 

}



/* &get-protocols */
obj_t BGl_z62getzd2protocolszb0zz__socketz00(obj_t BgL_envz00_2251)
{
{ /* Llib/socket.scm 510 */
return 
BGl_getzd2protocolszd2zz__socketz00();} 

}



/* get-protocol */
BGL_EXPORTED_DEF obj_t BGl_getzd2protocolzd2zz__socketz00(obj_t BgL_protocolz00_50)
{
{ /* Llib/socket.scm 516 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_protocolz00_50))
{ /* Llib/socket.scm 519 */
int BgL_tmpz00_3501;
{ /* Llib/socket.scm 519 */
obj_t BgL_tmpz00_3502;
if(
INTEGERP(BgL_protocolz00_50))
{ /* Llib/socket.scm 519 */
BgL_tmpz00_3502 = BgL_protocolz00_50
; }  else 
{ 
obj_t BgL_auxz00_3505;
BgL_auxz00_3505 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)22924)), BGl_string2146z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_protocolz00_50); 
FAILURE(BgL_auxz00_3505,BFALSE,BFALSE);} 
BgL_tmpz00_3501 = 
CINT(BgL_tmpz00_3502); } 
return 
bgl_getprotobynumber(BgL_tmpz00_3501);}  else 
{ /* Llib/socket.scm 518 */
if(
STRINGP(BgL_protocolz00_50))
{ /* Llib/socket.scm 520 */
return 
bgl_getprotobyname(
BSTRING_TO_STRING(BgL_protocolz00_50));}  else 
{ /* Llib/socket.scm 520 */
return BFALSE;} } } 

}



/* &get-protocol */
obj_t BGl_z62getzd2protocolzb0zz__socketz00(obj_t BgL_envz00_2252, obj_t BgL_protocolz00_2253)
{
{ /* Llib/socket.scm 516 */
return 
BGl_getzd2protocolzd2zz__socketz00(BgL_protocolz00_2253);} 

}



/* socket-option */
BGL_EXPORTED_DEF obj_t BGl_socketzd2optionzd2zz__socketz00(obj_t BgL_socketz00_51, obj_t BgL_optionz00_52)
{
{ /* Llib/socket.scm 528 */
return 
bgl_getsockopt(BgL_socketz00_51, BgL_optionz00_52);} 

}



/* &socket-option */
obj_t BGl_z62socketzd2optionzb0zz__socketz00(obj_t BgL_envz00_2254, obj_t BgL_socketz00_2255, obj_t BgL_optionz00_2256)
{
{ /* Llib/socket.scm 528 */
{ /* Llib/socket.scm 529 */
obj_t BgL_auxz00_3524;obj_t BgL_auxz00_3517;
if(
KEYWORDP(BgL_optionz00_2256))
{ /* Llib/socket.scm 529 */
BgL_auxz00_3524 = BgL_optionz00_2256
; }  else 
{ 
obj_t BgL_auxz00_3527;
BgL_auxz00_3527 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)23292)), BGl_string2147z00zz__socketz00, BGl_string2148z00zz__socketz00, BgL_optionz00_2256); 
FAILURE(BgL_auxz00_3527,BFALSE,BFALSE);} 
if(
SOCKETP(BgL_socketz00_2255))
{ /* Llib/socket.scm 529 */
BgL_auxz00_3517 = BgL_socketz00_2255
; }  else 
{ 
obj_t BgL_auxz00_3520;
BgL_auxz00_3520 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)23292)), BGl_string2147z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2255); 
FAILURE(BgL_auxz00_3520,BFALSE,BFALSE);} 
return 
BGl_socketzd2optionzd2zz__socketz00(BgL_auxz00_3517, BgL_auxz00_3524);} } 

}



/* socket-option-set! */
BGL_EXPORTED_DEF obj_t BGl_socketzd2optionzd2setz12z12zz__socketz00(obj_t BgL_socketz00_53, obj_t BgL_optionz00_54, obj_t BgL_valz00_55)
{
{ /* Llib/socket.scm 534 */
return 
bgl_setsockopt(BgL_socketz00_53, BgL_optionz00_54, BgL_valz00_55);} 

}



/* &socket-option-set! */
obj_t BGl_z62socketzd2optionzd2setz12z70zz__socketz00(obj_t BgL_envz00_2257, obj_t BgL_socketz00_2258, obj_t BgL_optionz00_2259, obj_t BgL_valz00_2260)
{
{ /* Llib/socket.scm 534 */
{ /* Llib/socket.scm 535 */
obj_t BgL_auxz00_3540;obj_t BgL_auxz00_3533;
if(
KEYWORDP(BgL_optionz00_2259))
{ /* Llib/socket.scm 535 */
BgL_auxz00_3540 = BgL_optionz00_2259
; }  else 
{ 
obj_t BgL_auxz00_3543;
BgL_auxz00_3543 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)23601)), BGl_string2149z00zz__socketz00, BGl_string2148z00zz__socketz00, BgL_optionz00_2259); 
FAILURE(BgL_auxz00_3543,BFALSE,BFALSE);} 
if(
SOCKETP(BgL_socketz00_2258))
{ /* Llib/socket.scm 535 */
BgL_auxz00_3533 = BgL_socketz00_2258
; }  else 
{ 
obj_t BgL_auxz00_3536;
BgL_auxz00_3536 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)23601)), BGl_string2149z00zz__socketz00, BGl_string2057z00zz__socketz00, BgL_socketz00_2258); 
FAILURE(BgL_auxz00_3536,BFALSE,BFALSE);} 
return 
BGl_socketzd2optionzd2setz12z12zz__socketz00(BgL_auxz00_3533, BgL_auxz00_3540, BgL_valz00_2260);} } 

}



/* datagram-socket? */
BGL_EXPORTED_DEF bool_t BGl_datagramzd2socketzf3z21zz__socketz00(obj_t BgL_objz00_56)
{
{ /* Llib/socket.scm 540 */
return 
BGL_DATAGRAM_SOCKETP(BgL_objz00_56);} 

}



/* &datagram-socket? */
obj_t BGl_z62datagramzd2socketzf3z43zz__socketz00(obj_t BgL_envz00_2261, obj_t BgL_objz00_2262)
{
{ /* Llib/socket.scm 540 */
return 
BBOOL(
BGl_datagramzd2socketzf3z21zz__socketz00(BgL_objz00_2262));} 

}



/* datagram-socket-server? */
BGL_EXPORTED_DEF bool_t BGl_datagramzd2socketzd2serverzf3zf3zz__socketz00(obj_t BgL_objz00_57)
{
{ /* Llib/socket.scm 546 */
return 
BGL_DATAGRAM_SOCKET_SERVERP(BgL_objz00_57);} 

}



/* &datagram-socket-server? */
obj_t BGl_z62datagramzd2socketzd2serverzf3z91zz__socketz00(obj_t BgL_envz00_2263, obj_t BgL_objz00_2264)
{
{ /* Llib/socket.scm 546 */
return 
BBOOL(
BGl_datagramzd2socketzd2serverzf3zf3zz__socketz00(BgL_objz00_2264));} 

}



/* datagram-socket-client? */
BGL_EXPORTED_DEF bool_t BGl_datagramzd2socketzd2clientzf3zf3zz__socketz00(obj_t BgL_objz00_58)
{
{ /* Llib/socket.scm 552 */
return 
BGL_DATAGRAM_SOCKET_CLIENTP(BgL_objz00_58);} 

}



/* &datagram-socket-client? */
obj_t BGl_z62datagramzd2socketzd2clientzf3z91zz__socketz00(obj_t BgL_envz00_2265, obj_t BgL_objz00_2266)
{
{ /* Llib/socket.scm 552 */
return 
BBOOL(
BGl_datagramzd2socketzd2clientzf3zf3zz__socketz00(BgL_objz00_2266));} 

}



/* datagram-socket-hostname */
BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2hostnamez00zz__socketz00(obj_t BgL_socketz00_59)
{
{ /* Llib/socket.scm 558 */
return 
BGL_DATAGRAM_SOCKET_HOSTNAME(BgL_socketz00_59);} 

}



/* &datagram-socket-hostname */
obj_t BGl_z62datagramzd2socketzd2hostnamez62zz__socketz00(obj_t BgL_envz00_2267, obj_t BgL_socketz00_2268)
{
{ /* Llib/socket.scm 558 */
{ /* Llib/socket.scm 559 */
obj_t BgL_auxz00_3558;
if(
BGL_DATAGRAM_SOCKETP(BgL_socketz00_2268))
{ /* Llib/socket.scm 559 */
BgL_auxz00_3558 = BgL_socketz00_2268
; }  else 
{ 
obj_t BgL_auxz00_3561;
BgL_auxz00_3561 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)24805)), BGl_string2150z00zz__socketz00, BGl_string2151z00zz__socketz00, BgL_socketz00_2268); 
FAILURE(BgL_auxz00_3561,BFALSE,BFALSE);} 
return 
BGl_datagramzd2socketzd2hostnamez00zz__socketz00(BgL_auxz00_3558);} } 

}



/* datagram-socket-host-address */
BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2hostzd2addresszd2zz__socketz00(obj_t BgL_socketz00_60)
{
{ /* Llib/socket.scm 564 */
return 
BGL_DATAGRAM_SOCKET_HOSTIP(BgL_socketz00_60);} 

}



/* &datagram-socket-host-address */
obj_t BGl_z62datagramzd2socketzd2hostzd2addresszb0zz__socketz00(obj_t BgL_envz00_2269, obj_t BgL_socketz00_2270)
{
{ /* Llib/socket.scm 564 */
{ /* Llib/socket.scm 565 */
obj_t BgL_auxz00_3567;
if(
BGL_DATAGRAM_SOCKETP(BgL_socketz00_2270))
{ /* Llib/socket.scm 565 */
BgL_auxz00_3567 = BgL_socketz00_2270
; }  else 
{ 
obj_t BgL_auxz00_3570;
BgL_auxz00_3570 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)25120)), BGl_string2152z00zz__socketz00, BGl_string2151z00zz__socketz00, BgL_socketz00_2270); 
FAILURE(BgL_auxz00_3570,BFALSE,BFALSE);} 
return 
BGl_datagramzd2socketzd2hostzd2addresszd2zz__socketz00(BgL_auxz00_3567);} } 

}



/* datagram-socket-port-number */
BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2portzd2numberzd2zz__socketz00(obj_t BgL_socketz00_61)
{
{ /* Llib/socket.scm 570 */
return 
BINT(
BGL_DATAGRAM_SOCKET_PORTNUM(BgL_socketz00_61));} 

}



/* &datagram-socket-port-number */
obj_t BGl_z62datagramzd2socketzd2portzd2numberzb0zz__socketz00(obj_t BgL_envz00_2271, obj_t BgL_socketz00_2272)
{
{ /* Llib/socket.scm 570 */
{ /* Llib/socket.scm 571 */
obj_t BgL_auxz00_3577;
if(
BGL_DATAGRAM_SOCKETP(BgL_socketz00_2272))
{ /* Llib/socket.scm 571 */
BgL_auxz00_3577 = BgL_socketz00_2272
; }  else 
{ 
obj_t BgL_auxz00_3580;
BgL_auxz00_3580 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)25432)), BGl_string2153z00zz__socketz00, BGl_string2151z00zz__socketz00, BgL_socketz00_2272); 
FAILURE(BgL_auxz00_3580,BFALSE,BFALSE);} 
return 
BGl_datagramzd2socketzd2portzd2numberzd2zz__socketz00(BgL_auxz00_3577);} } 

}



/* datagram-socket-output */
BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2outputz00zz__socketz00(obj_t BgL_socketz00_62)
{
{ /* Llib/socket.scm 576 */
{ /* Llib/socket.scm 577 */
bool_t BgL_test2443z00_3585;
{ /* Llib/socket.scm 577 */
obj_t BgL_arg1357z00_2522;
BgL_arg1357z00_2522 = 
BGL_DATAGRAM_SOCKET_PORT(BgL_socketz00_62); 
BgL_test2443z00_3585 = 
OUTPUT_PORTP(BgL_arg1357z00_2522); } 
if(BgL_test2443z00_3585)
{ /* Llib/socket.scm 578 */
obj_t BgL_aux2009z00_2523;
BgL_aux2009z00_2523 = 
BGL_DATAGRAM_SOCKET_PORT(BgL_socketz00_62); 
if(
OUTPUT_PORTP(BgL_aux2009z00_2523))
{ /* Llib/socket.scm 578 */
return BgL_aux2009z00_2523;}  else 
{ 
obj_t BgL_auxz00_3591;
BgL_auxz00_3591 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)25801)), BGl_string2154z00zz__socketz00, BGl_string2155z00zz__socketz00, BgL_aux2009z00_2523); 
FAILURE(BgL_auxz00_3591,BFALSE,BFALSE);} }  else 
{ /* Llib/socket.scm 579 */
obj_t BgL_aux2011z00_2524;
BgL_aux2011z00_2524 = 
BGl_errorz00zz__errorz00(BGl_string2154z00zz__socketz00, BGl_string2156z00zz__socketz00, BgL_socketz00_62); 
if(
OUTPUT_PORTP(BgL_aux2011z00_2524))
{ /* Llib/socket.scm 579 */
return BgL_aux2011z00_2524;}  else 
{ 
obj_t BgL_auxz00_3598;
BgL_auxz00_3598 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)25839)), BGl_string2154z00zz__socketz00, BGl_string2155z00zz__socketz00, BgL_aux2011z00_2524); 
FAILURE(BgL_auxz00_3598,BFALSE,BFALSE);} } } } 

}



/* &datagram-socket-output */
obj_t BGl_z62datagramzd2socketzd2outputz62zz__socketz00(obj_t BgL_envz00_2273, obj_t BgL_socketz00_2274)
{
{ /* Llib/socket.scm 576 */
{ /* Llib/socket.scm 577 */
obj_t BgL_auxz00_3602;
if(
BGL_DATAGRAM_SOCKETP(BgL_socketz00_2274))
{ /* Llib/socket.scm 577 */
BgL_auxz00_3602 = BgL_socketz00_2274
; }  else 
{ 
obj_t BgL_auxz00_3605;
BgL_auxz00_3605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)25744)), BGl_string2157z00zz__socketz00, BGl_string2151z00zz__socketz00, BgL_socketz00_2274); 
FAILURE(BgL_auxz00_3605,BFALSE,BFALSE);} 
return 
BGl_datagramzd2socketzd2outputz00zz__socketz00(BgL_auxz00_3602);} } 

}



/* datagram-socket-input */
BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2inputz00zz__socketz00(obj_t BgL_socketz00_63)
{
{ /* Llib/socket.scm 585 */
{ /* Llib/socket.scm 586 */
bool_t BgL_test2447z00_3610;
{ /* Llib/socket.scm 586 */
obj_t BgL_arg1361z00_2525;
BgL_arg1361z00_2525 = 
BGL_DATAGRAM_SOCKET_PORT(BgL_socketz00_63); 
BgL_test2447z00_3610 = 
INPUT_PORTP(BgL_arg1361z00_2525); } 
if(BgL_test2447z00_3610)
{ /* Llib/socket.scm 587 */
obj_t BgL_aux2015z00_2526;
BgL_aux2015z00_2526 = 
BGL_DATAGRAM_SOCKET_PORT(BgL_socketz00_63); 
if(
INPUT_PORTP(BgL_aux2015z00_2526))
{ /* Llib/socket.scm 587 */
return BgL_aux2015z00_2526;}  else 
{ 
obj_t BgL_auxz00_3616;
BgL_auxz00_3616 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)26249)), BGl_string2158z00zz__socketz00, BGl_string2159z00zz__socketz00, BgL_aux2015z00_2526); 
FAILURE(BgL_auxz00_3616,BFALSE,BFALSE);} }  else 
{ /* Llib/socket.scm 588 */
obj_t BgL_aux2017z00_2527;
BgL_aux2017z00_2527 = 
BGl_errorz00zz__errorz00(BGl_string2158z00zz__socketz00, BGl_string2160z00zz__socketz00, BgL_socketz00_63); 
if(
INPUT_PORTP(BgL_aux2017z00_2527))
{ /* Llib/socket.scm 588 */
return BgL_aux2017z00_2527;}  else 
{ 
obj_t BgL_auxz00_3623;
BgL_auxz00_3623 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)26287)), BGl_string2158z00zz__socketz00, BGl_string2159z00zz__socketz00, BgL_aux2017z00_2527); 
FAILURE(BgL_auxz00_3623,BFALSE,BFALSE);} } } } 

}



/* &datagram-socket-input */
obj_t BGl_z62datagramzd2socketzd2inputz62zz__socketz00(obj_t BgL_envz00_2275, obj_t BgL_socketz00_2276)
{
{ /* Llib/socket.scm 585 */
{ /* Llib/socket.scm 586 */
obj_t BgL_auxz00_3627;
if(
BGL_DATAGRAM_SOCKETP(BgL_socketz00_2276))
{ /* Llib/socket.scm 586 */
BgL_auxz00_3627 = BgL_socketz00_2276
; }  else 
{ 
obj_t BgL_auxz00_3630;
BgL_auxz00_3630 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)26193)), BGl_string2161z00zz__socketz00, BGl_string2151z00zz__socketz00, BgL_socketz00_2276); 
FAILURE(BgL_auxz00_3630,BFALSE,BFALSE);} 
return 
BGl_datagramzd2socketzd2inputz00zz__socketz00(BgL_auxz00_3627);} } 

}



/* _make-datagram-server-socket */
obj_t BGl__makezd2datagramzd2serverzd2socketzd2zz__socketz00(obj_t BgL_env1149z00_66, obj_t BgL_opt1148z00_65)
{
{ /* Llib/socket.scm 594 */
{ /* Llib/socket.scm 594 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1148z00_65)) { case ((long)0) : 

{ /* Llib/socket.scm 594 */

{ /* Llib/socket.scm 594 */
obj_t BgL_res1781z00_2529;
BGl_z52socketzd2initz12z92zz__socketz00(); 
BgL_res1781z00_2529 = 
bgl_make_datagram_server_socket(
(int)(((long)0))); 
return BgL_res1781z00_2529;} } break;case ((long)1) : 

{ /* Llib/socket.scm 594 */
obj_t BgL_portz00_2530;
BgL_portz00_2530 = 
VECTOR_REF(BgL_opt1148z00_65,((long)0)); 
{ /* Llib/socket.scm 594 */

{ /* Llib/socket.scm 594 */
obj_t BgL_res1782z00_2531;
BGl_z52socketzd2initz12z92zz__socketz00(); 
{ /* Llib/socket.scm 596 */
int BgL_tmpz00_3640;
{ /* Llib/socket.scm 596 */
obj_t BgL_tmpz00_3641;
if(
INTEGERP(BgL_portz00_2530))
{ /* Llib/socket.scm 596 */
BgL_tmpz00_3641 = BgL_portz00_2530
; }  else 
{ 
obj_t BgL_auxz00_3644;
BgL_auxz00_3644 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)26707)), BGl_string2164z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_portz00_2530); 
FAILURE(BgL_auxz00_3644,BFALSE,BFALSE);} 
BgL_tmpz00_3640 = 
CINT(BgL_tmpz00_3641); } 
BgL_res1782z00_2531 = 
bgl_make_datagram_server_socket(BgL_tmpz00_3640); } 
return BgL_res1782z00_2531;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2162z00zz__socketz00, BGl_string2142z00zz__socketz00, 
BINT(
VECTOR_LENGTH(BgL_opt1148z00_65)));} } } } 

}



/* make-datagram-server-socket */
BGL_EXPORTED_DEF obj_t BGl_makezd2datagramzd2serverzd2socketzd2zz__socketz00(obj_t BgL_portz00_64)
{
{ /* Llib/socket.scm 594 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
{ /* Llib/socket.scm 596 */
int BgL_tmpz00_3656;
{ /* Llib/socket.scm 596 */
obj_t BgL_tmpz00_3657;
if(
INTEGERP(BgL_portz00_64))
{ /* Llib/socket.scm 596 */
BgL_tmpz00_3657 = BgL_portz00_64
; }  else 
{ 
obj_t BgL_auxz00_3660;
BgL_auxz00_3660 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)26707)), BGl_string2163z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_portz00_64); 
FAILURE(BgL_auxz00_3660,BFALSE,BFALSE);} 
BgL_tmpz00_3656 = 
CINT(BgL_tmpz00_3657); } 
return 
bgl_make_datagram_server_socket(BgL_tmpz00_3656);} } 

}



/* _make-datagram-unbound-socket */
obj_t BGl__makezd2datagramzd2unboundzd2socketzd2zz__socketz00(obj_t BgL_env1153z00_69, obj_t BgL_opt1152z00_68)
{
{ /* Llib/socket.scm 601 */
{ /* Llib/socket.scm 601 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1152z00_68)) { case ((long)0) : 

{ /* Llib/socket.scm 601 */
obj_t BgL_familyz00_2533;
BgL_familyz00_2533 = BGl_symbol2070z00zz__socketz00; 
{ /* Llib/socket.scm 601 */

{ /* Llib/socket.scm 601 */
obj_t BgL_res1783z00_2534;
BGl_z52socketzd2initz12z92zz__socketz00(); 
BgL_res1783z00_2534 = 
bgl_make_datagram_unbound_socket(BgL_familyz00_2533); 
return BgL_res1783z00_2534;} } } break;case ((long)1) : 

{ /* Llib/socket.scm 601 */
obj_t BgL_familyz00_2535;
BgL_familyz00_2535 = 
VECTOR_REF(BgL_opt1152z00_68,((long)0)); 
{ /* Llib/socket.scm 601 */

{ /* Llib/socket.scm 601 */
obj_t BgL_res1784z00_2536;
{ /* Llib/socket.scm 601 */
obj_t BgL_familyz00_2537;
if(
SYMBOLP(BgL_familyz00_2535))
{ /* Llib/socket.scm 601 */
BgL_familyz00_2537 = BgL_familyz00_2535; }  else 
{ 
obj_t BgL_auxz00_3671;
BgL_auxz00_3671 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)26937)), BGl_string2167z00zz__socketz00, BGl_string2145z00zz__socketz00, BgL_familyz00_2535); 
FAILURE(BgL_auxz00_3671,BFALSE,BFALSE);} 
BGl_z52socketzd2initz12z92zz__socketz00(); 
BgL_res1784z00_2536 = 
bgl_make_datagram_unbound_socket(BgL_familyz00_2537); } 
return BgL_res1784z00_2536;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2165z00zz__socketz00, BGl_string2142z00zz__socketz00, 
BINT(
VECTOR_LENGTH(BgL_opt1152z00_68)));} } } } 

}



/* make-datagram-unbound-socket */
BGL_EXPORTED_DEF obj_t BGl_makezd2datagramzd2unboundzd2socketzd2zz__socketz00(obj_t BgL_familyz00_67)
{
{ /* Llib/socket.scm 601 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
return 
bgl_make_datagram_unbound_socket(BgL_familyz00_67);} 

}



/* _make-datagram-client-socket */
obj_t BGl__makezd2datagramzd2clientzd2socketzd2zz__socketz00(obj_t BgL_env1157z00_74, obj_t BgL_opt1156z00_73)
{
{ /* Llib/socket.scm 608 */
{ /* Llib/socket.scm 608 */
obj_t BgL_g1158z00_2538;obj_t BgL_g1159z00_2539;
BgL_g1158z00_2538 = 
VECTOR_REF(BgL_opt1156z00_73,((long)0)); 
BgL_g1159z00_2539 = 
VECTOR_REF(BgL_opt1156z00_73,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1156z00_73)) { case ((long)2) : 

{ /* Llib/socket.scm 608 */

{ /* Llib/socket.scm 608 */
obj_t BgL_res1785z00_2541;
{ /* Llib/socket.scm 608 */
obj_t BgL_hostnamez00_2542;int BgL_portz00_2543;
if(
STRINGP(BgL_g1158z00_2538))
{ /* Llib/socket.scm 608 */
BgL_hostnamez00_2542 = BgL_g1158z00_2538; }  else 
{ 
obj_t BgL_auxz00_3688;
BgL_auxz00_3688 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)27303)), BGl_string2171z00zz__socketz00, BGl_string2065z00zz__socketz00, BgL_g1158z00_2538); 
FAILURE(BgL_auxz00_3688,BFALSE,BFALSE);} 
{ /* Llib/socket.scm 608 */
obj_t BgL_tmpz00_3692;
if(
INTEGERP(BgL_g1159z00_2539))
{ /* Llib/socket.scm 608 */
BgL_tmpz00_3692 = BgL_g1159z00_2539
; }  else 
{ 
obj_t BgL_auxz00_3695;
BgL_auxz00_3695 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)27303)), BGl_string2171z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_g1159z00_2539); 
FAILURE(BgL_auxz00_3695,BFALSE,BFALSE);} 
BgL_portz00_2543 = 
CINT(BgL_tmpz00_3692); } 
BGl_z52socketzd2initz12z92zz__socketz00(); 
BgL_res1785z00_2541 = 
bgl_make_datagram_client_socket(BgL_hostnamez00_2542, BgL_portz00_2543, ((bool_t)0)); } 
return BgL_res1785z00_2541;} } break;case ((long)3) : 

{ /* Llib/socket.scm 608 */
obj_t BgL_broadcastz00_2544;
BgL_broadcastz00_2544 = 
VECTOR_REF(BgL_opt1156z00_73,((long)2)); 
{ /* Llib/socket.scm 608 */

{ /* Llib/socket.scm 608 */
obj_t BgL_res1786z00_2545;
{ /* Llib/socket.scm 608 */
obj_t BgL_hostnamez00_2546;int BgL_portz00_2547;
if(
STRINGP(BgL_g1158z00_2538))
{ /* Llib/socket.scm 608 */
BgL_hostnamez00_2546 = BgL_g1158z00_2538; }  else 
{ 
obj_t BgL_auxz00_3705;
BgL_auxz00_3705 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)27303)), BGl_string2171z00zz__socketz00, BGl_string2065z00zz__socketz00, BgL_g1158z00_2538); 
FAILURE(BgL_auxz00_3705,BFALSE,BFALSE);} 
{ /* Llib/socket.scm 608 */
obj_t BgL_tmpz00_3709;
if(
INTEGERP(BgL_g1159z00_2539))
{ /* Llib/socket.scm 608 */
BgL_tmpz00_3709 = BgL_g1159z00_2539
; }  else 
{ 
obj_t BgL_auxz00_3712;
BgL_auxz00_3712 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)27303)), BGl_string2171z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_g1159z00_2539); 
FAILURE(BgL_auxz00_3712,BFALSE,BFALSE);} 
BgL_portz00_2547 = 
CINT(BgL_tmpz00_3709); } 
BGl_z52socketzd2initz12z92zz__socketz00(); 
BgL_res1786z00_2545 = 
bgl_make_datagram_client_socket(BgL_hostnamez00_2546, BgL_portz00_2547, 
CBOOL(BgL_broadcastz00_2544)); } 
return BgL_res1786z00_2545;} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol2168z00zz__socketz00, BGl_string2170z00zz__socketz00, 
BINT(
VECTOR_LENGTH(BgL_opt1156z00_73)));} } } } 

}



/* make-datagram-client-socket */
BGL_EXPORTED_DEF obj_t BGl_makezd2datagramzd2clientzd2socketzd2zz__socketz00(obj_t BgL_hostnamez00_70, int BgL_portz00_71, obj_t BgL_broadcastz00_72)
{
{ /* Llib/socket.scm 608 */
BGl_z52socketzd2initz12z92zz__socketz00(); 
return 
bgl_make_datagram_client_socket(BgL_hostnamez00_70, BgL_portz00_71, 
CBOOL(BgL_broadcastz00_72));} 

}



/* datagram-socket-close */
BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2closez00zz__socketz00(obj_t BgL_socketz00_75)
{
{ /* Llib/socket.scm 615 */
return 
bgl_datagram_socket_close(BgL_socketz00_75);} 

}



/* &datagram-socket-close */
obj_t BGl_z62datagramzd2socketzd2closez62zz__socketz00(obj_t BgL_envz00_2277, obj_t BgL_socketz00_2278)
{
{ /* Llib/socket.scm 615 */
{ /* Llib/socket.scm 616 */
obj_t BgL_auxz00_3729;
if(
BGL_DATAGRAM_SOCKETP(BgL_socketz00_2278))
{ /* Llib/socket.scm 616 */
BgL_auxz00_3729 = BgL_socketz00_2278
; }  else 
{ 
obj_t BgL_auxz00_3732;
BgL_auxz00_3732 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)27733)), BGl_string2172z00zz__socketz00, BGl_string2151z00zz__socketz00, BgL_socketz00_2278); 
FAILURE(BgL_auxz00_3732,BFALSE,BFALSE);} 
return 
BGl_datagramzd2socketzd2closez00zz__socketz00(BgL_auxz00_3729);} } 

}



/* datagram-socket-receive */
BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2receivez00zz__socketz00(obj_t BgL_socketz00_76, int BgL_lengthz00_77)
{
{ /* Llib/socket.scm 621 */
return 
bgl_datagram_socket_receive(BgL_socketz00_76, 
(long)(BgL_lengthz00_77));} 

}



/* &datagram-socket-receive */
obj_t BGl_z62datagramzd2socketzd2receivez62zz__socketz00(obj_t BgL_envz00_2279, obj_t BgL_socketz00_2280, obj_t BgL_lengthz00_2281)
{
{ /* Llib/socket.scm 621 */
{ /* Llib/socket.scm 622 */
int BgL_auxz00_3746;obj_t BgL_auxz00_3739;
{ /* Llib/socket.scm 622 */
obj_t BgL_tmpz00_3747;
if(
INTEGERP(BgL_lengthz00_2281))
{ /* Llib/socket.scm 622 */
BgL_tmpz00_3747 = BgL_lengthz00_2281
; }  else 
{ 
obj_t BgL_auxz00_3750;
BgL_auxz00_3750 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)28050)), BGl_string2173z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_lengthz00_2281); 
FAILURE(BgL_auxz00_3750,BFALSE,BFALSE);} 
BgL_auxz00_3746 = 
CINT(BgL_tmpz00_3747); } 
if(
BGL_DATAGRAM_SOCKETP(BgL_socketz00_2280))
{ /* Llib/socket.scm 622 */
BgL_auxz00_3739 = BgL_socketz00_2280
; }  else 
{ 
obj_t BgL_auxz00_3742;
BgL_auxz00_3742 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)28050)), BGl_string2173z00zz__socketz00, BGl_string2151z00zz__socketz00, BgL_socketz00_2280); 
FAILURE(BgL_auxz00_3742,BFALSE,BFALSE);} 
return 
BGl_datagramzd2socketzd2receivez00zz__socketz00(BgL_auxz00_3739, BgL_auxz00_3746);} } 

}



/* datagram-socket-send */
BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2sendz00zz__socketz00(obj_t BgL_socketz00_78, obj_t BgL_stringz00_79, obj_t BgL_hostz00_80, int BgL_portz00_81)
{
{ /* Llib/socket.scm 627 */
return 
bgl_datagram_socket_send(BgL_socketz00_78, BgL_stringz00_79, BgL_hostz00_80, BgL_portz00_81);} 

}



/* &datagram-socket-send */
obj_t BGl_z62datagramzd2socketzd2sendz62zz__socketz00(obj_t BgL_envz00_2282, obj_t BgL_socketz00_2283, obj_t BgL_stringz00_2284, obj_t BgL_hostz00_2285, obj_t BgL_portz00_2286)
{
{ /* Llib/socket.scm 627 */
{ /* Llib/socket.scm 628 */
int BgL_auxz00_3778;obj_t BgL_auxz00_3771;obj_t BgL_auxz00_3764;obj_t BgL_auxz00_3757;
{ /* Llib/socket.scm 628 */
obj_t BgL_tmpz00_3779;
if(
INTEGERP(BgL_portz00_2286))
{ /* Llib/socket.scm 628 */
BgL_tmpz00_3779 = BgL_portz00_2286
; }  else 
{ 
obj_t BgL_auxz00_3782;
BgL_auxz00_3782 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)28380)), BGl_string2174z00zz__socketz00, BGl_string2086z00zz__socketz00, BgL_portz00_2286); 
FAILURE(BgL_auxz00_3782,BFALSE,BFALSE);} 
BgL_auxz00_3778 = 
CINT(BgL_tmpz00_3779); } 
if(
STRINGP(BgL_hostz00_2285))
{ /* Llib/socket.scm 628 */
BgL_auxz00_3771 = BgL_hostz00_2285
; }  else 
{ 
obj_t BgL_auxz00_3774;
BgL_auxz00_3774 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)28380)), BGl_string2174z00zz__socketz00, BGl_string2065z00zz__socketz00, BgL_hostz00_2285); 
FAILURE(BgL_auxz00_3774,BFALSE,BFALSE);} 
if(
STRINGP(BgL_stringz00_2284))
{ /* Llib/socket.scm 628 */
BgL_auxz00_3764 = BgL_stringz00_2284
; }  else 
{ 
obj_t BgL_auxz00_3767;
BgL_auxz00_3767 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)28380)), BGl_string2174z00zz__socketz00, BGl_string2065z00zz__socketz00, BgL_stringz00_2284); 
FAILURE(BgL_auxz00_3767,BFALSE,BFALSE);} 
if(
BGL_DATAGRAM_SOCKETP(BgL_socketz00_2283))
{ /* Llib/socket.scm 628 */
BgL_auxz00_3757 = BgL_socketz00_2283
; }  else 
{ 
obj_t BgL_auxz00_3760;
BgL_auxz00_3760 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)28380)), BGl_string2174z00zz__socketz00, BGl_string2151z00zz__socketz00, BgL_socketz00_2283); 
FAILURE(BgL_auxz00_3760,BFALSE,BFALSE);} 
return 
BGl_datagramzd2socketzd2sendz00zz__socketz00(BgL_auxz00_3757, BgL_auxz00_3764, BgL_auxz00_3771, BgL_auxz00_3778);} } 

}



/* datagram-socket-option */
BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2optionz00zz__socketz00(obj_t BgL_socketz00_82, obj_t BgL_optionz00_83)
{
{ /* Llib/socket.scm 633 */
return 
bgl_getsockopt(BgL_socketz00_82, BgL_optionz00_83);} 

}



/* &datagram-socket-option */
obj_t BGl_z62datagramzd2socketzd2optionz62zz__socketz00(obj_t BgL_envz00_2287, obj_t BgL_socketz00_2288, obj_t BgL_optionz00_2289)
{
{ /* Llib/socket.scm 633 */
{ /* Llib/socket.scm 634 */
obj_t BgL_auxz00_3796;obj_t BgL_auxz00_3789;
if(
KEYWORDP(BgL_optionz00_2289))
{ /* Llib/socket.scm 634 */
BgL_auxz00_3796 = BgL_optionz00_2289
; }  else 
{ 
obj_t BgL_auxz00_3799;
BgL_auxz00_3799 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)28709)), BGl_string2175z00zz__socketz00, BGl_string2148z00zz__socketz00, BgL_optionz00_2289); 
FAILURE(BgL_auxz00_3799,BFALSE,BFALSE);} 
if(
BGL_DATAGRAM_SOCKETP(BgL_socketz00_2288))
{ /* Llib/socket.scm 634 */
BgL_auxz00_3789 = BgL_socketz00_2288
; }  else 
{ 
obj_t BgL_auxz00_3792;
BgL_auxz00_3792 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)28709)), BGl_string2175z00zz__socketz00, BGl_string2151z00zz__socketz00, BgL_socketz00_2288); 
FAILURE(BgL_auxz00_3792,BFALSE,BFALSE);} 
return 
BGl_datagramzd2socketzd2optionz00zz__socketz00(BgL_auxz00_3789, BgL_auxz00_3796);} } 

}



/* datagram-socket-option-set! */
BGL_EXPORTED_DEF obj_t BGl_datagramzd2socketzd2optionzd2setz12zc0zz__socketz00(obj_t BgL_socketz00_84, obj_t BgL_optionz00_85, obj_t BgL_valz00_86)
{
{ /* Llib/socket.scm 639 */
return 
bgl_setsockopt(BgL_socketz00_84, BgL_optionz00_85, BgL_valz00_86);} 

}



/* &datagram-socket-option-set! */
obj_t BGl_z62datagramzd2socketzd2optionzd2setz12za2zz__socketz00(obj_t BgL_envz00_2290, obj_t BgL_socketz00_2291, obj_t BgL_optionz00_2292, obj_t BgL_valz00_2293)
{
{ /* Llib/socket.scm 639 */
{ /* Llib/socket.scm 640 */
obj_t BgL_auxz00_3812;obj_t BgL_auxz00_3805;
if(
KEYWORDP(BgL_optionz00_2292))
{ /* Llib/socket.scm 640 */
BgL_auxz00_3812 = BgL_optionz00_2292
; }  else 
{ 
obj_t BgL_auxz00_3815;
BgL_auxz00_3815 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)29028)), BGl_string2176z00zz__socketz00, BGl_string2148z00zz__socketz00, BgL_optionz00_2292); 
FAILURE(BgL_auxz00_3815,BFALSE,BFALSE);} 
if(
BGL_DATAGRAM_SOCKETP(BgL_socketz00_2291))
{ /* Llib/socket.scm 640 */
BgL_auxz00_3805 = BgL_socketz00_2291
; }  else 
{ 
obj_t BgL_auxz00_3808;
BgL_auxz00_3808 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string2059z00zz__socketz00, 
BINT(((long)29028)), BGl_string2176z00zz__socketz00, BGl_string2151z00zz__socketz00, BgL_socketz00_2291); 
FAILURE(BgL_auxz00_3808,BFALSE,BFALSE);} 
return 
BGl_datagramzd2socketzd2optionzd2setz12zc0zz__socketz00(BgL_auxz00_3805, BgL_auxz00_3812, BgL_valz00_2293);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__socketz00()
{
{ /* Llib/socket.scm 14 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__socketz00()
{
{ /* Llib/socket.scm 14 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__socketz00()
{
{ /* Llib/socket.scm 14 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__socketz00()
{
{ /* Llib/socket.scm 14 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string2177z00zz__socketz00)); 
BGl_modulezd2initializa7ationz75zz__objectz00(((long)193422032), 
BSTRING_TO_STRING(BGl_string2177z00zz__socketz00)); 
return 
BGl_modulezd2initializa7ationz75zz__threadz00(((long)224967910), 
BSTRING_TO_STRING(BGl_string2177z00zz__socketz00));} 

}

#ifdef __cplusplus
}
#endif
