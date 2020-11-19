/*===========================================================================*/
/*   (Llib/os.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-safe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -O3 -mklib -cc gcc -fsharing -q -unsafev -eval (set! *indent* 4) -c Llib/os.scm -indent -o objs/obj_s/Llib/os.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C" {
#endif
extern bool_t bgl_chmod(char *, bool_t, bool_t, bool_t);
extern long BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
BGL_EXPORTED_DECL obj_t BGl_setgidz00zz__osz00(int);
BGL_EXPORTED_DECL int BGl_getuidz00zz__osz00();
static obj_t BGl_z62getpidz62zz__osz00(obj_t);
static obj_t BGl_z62basenamez62zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_getpwnamz00zz__osz00(obj_t);
static obj_t BGl_symbol3291z00zz__osz00 = BUNSPEC;
static obj_t BGl_z62makezd2sharedzd2libzd2namezb0zz__osz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62oszd2classzb0zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_systemzd2ze3stringz31zz__osz00(obj_t);
static obj_t BGl_z62prefixz62zz__osz00(obj_t, obj_t);
static obj_t BGl_z62ioctlz62zz__osz00(obj_t, obj_t, obj_t, obj_t);
static obj_t BGl_z62defaultzd2scriptzd2namez62zz__osz00(obj_t);
static obj_t BGl_defaultzd2basenamezd2zz__osz00(obj_t);
extern int bgl_getgid();
static obj_t BGl_z62openlogz62zz__osz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_umaskz00zz__osz00(obj_t);
static obj_t BGl_requirezd2initializa7ationz75zz__osz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2separatorzd2zz__osz00();
static obj_t BGl_z62chmodz62zz__osz00(obj_t, obj_t, obj_t);
extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
extern obj_t bgl_display_obj(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dynamiczd2unloadzd2zz__osz00(obj_t);
extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t bgl_getgroups();
extern obj_t bgl_dload(char *, char *, char *);
BGL_EXPORTED_DECL int BGl_getgidz00zz__osz00();
extern obj_t BGl_warningz00zz__errorz00(obj_t);
extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl__dynamiczd2loadzd2symbolz00zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_relativezd2filezd2namez00zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_systemz00zz__osz00(obj_t);
static obj_t BGl_z62makezd2filezd2namez62zz__osz00(obj_t, obj_t, obj_t);
static obj_t BGl_toplevelzd2initzd2zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_commandzd2linezd2zz__osz00();
static obj_t BGl__umaskz00zz__osz00(obj_t, obj_t);
static obj_t BGl_z62dynamiczd2loadzd2symbolzd2setzb0zz__osz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_getenvz00zz__osz00(obj_t);
BGL_EXPORTED_DECL int BGl_syslogzd2facilityzd2zz__osz00(obj_t);
BGL_EXPORTED_DECL int BGl_syslogzd2levelzd2zz__osz00(obj_t);
extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
static obj_t BGl_z62syslogzd2facilityzb0zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2canonicaliza7eza7zz__osz00(obj_t);
extern obj_t bigloo_module_mangle(obj_t, obj_t);
static obj_t BGl_genericzd2initzd2zz__osz00();
extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
BGL_EXPORTED_DECL bool_t BGl_chdirz00zz__osz00(char *);
extern obj_t bgl_getpwnam(char *);
extern obj_t bgl_dlsym_set(obj_t, obj_t);
static long BGl_requestzd2ze3elongz31zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_oszd2namezd2zz__osz00();
static obj_t BGl_mingwzd2basenamezd2zz__osz00(obj_t);
static obj_t BGl_z62setuidz62zz__osz00(obj_t, obj_t);
static obj_t BGl_objectzd2initzd2zz__osz00();
static obj_t BGl_z62filezd2namezd2canonicaliza7ez12zd7zz__osz00(obj_t, obj_t);
extern obj_t bgl_get_signal_handler(int);
static obj_t BGl__getenvz00zz__osz00(obj_t, obj_t);
extern int bgl_dunload(obj_t);
static obj_t BGl_z62oszd2archzb0zz__osz00(obj_t);
BGL_EXPORTED_DECL char * BGl_executablezd2namezd2zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_staticzd2libraryzd2suffixz00zz__osz00();
static obj_t BGl_z62makezd2staticzd2libraryzd2namezb0zz__osz00(obj_t, obj_t);
extern obj_t bgl_reverse_bang(obj_t);
static obj_t BGl_z62executablezd2namezb0zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_dirnamez00zz__osz00(obj_t);
extern char * bgl_dload_error();
static obj_t BGl_z62syslogz62zz__osz00(obj_t, obj_t, obj_t);
static obj_t BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(obj_t, obj_t, long);
extern obj_t string_append_3(obj_t, obj_t, obj_t);
extern obj_t BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
static obj_t BGl_z62syslogzd2optionzb0zz__osz00(obj_t, obj_t);
static obj_t BGl__dynamiczd2loadzd2zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_defaultzd2scriptzd2namez00zz__osz00();
static obj_t BGl_z62datez62zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_unixzd2pathzd2ze3listze3zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t);
static obj_t BGl_z62unixzd2pathzd2ze3listz81zz__osz00(obj_t, obj_t);
extern obj_t bstring_to_symbol(obj_t);
BGL_EXPORTED_DECL obj_t BGl_basenamez00zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
static obj_t BGl_z62setgidz62zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_oszd2classzd2zz__osz00();
static obj_t BGl_z62getuidz62zz__osz00(obj_t);
static obj_t BGl_z62chdirz62zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL char * BGl_datez00zz__osz00();
static obj_t BGl_appendzd221011zd2zz__osz00(obj_t, obj_t);
static obj_t BGl_z62closelogz62zz__osz00(obj_t);
static obj_t BGl_methodzd2initzd2zz__osz00();
static obj_t BGl_z62getzd2signalzd2handlerz62zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t);
extern obj_t bgl_getenv_all();
BGL_EXPORTED_DECL obj_t BGl_oszd2tmpzd2zz__osz00();
static obj_t BGl_z62staticzd2libraryzd2suffixz62zz__osz00(obj_t);
static obj_t BGl_z62getpwuidz62zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dynamiczd2loadzd2zz__osz00(obj_t, obj_t, obj_t);
static obj_t BGl_z62dynamiczd2loadzd2symbolzd2getzb0zz__osz00(obj_t, obj_t);
extern obj_t BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t, obj_t, obj_t);
extern obj_t bgl_signal(int, obj_t);
extern obj_t make_string(long, unsigned char);
extern obj_t bgl_close_input_port(obj_t);
static obj_t BGl_z62defaultzd2executablezd2namez62zz__osz00(obj_t);
static obj_t BGl_z62getgidz62zz__osz00(obj_t);
static obj_t BGl_defaultzd2dirnamezd2zz__osz00(obj_t);
static obj_t BGl_z62ioctlzd2registerzd2requestz12z70zz__osz00(obj_t, obj_t, obj_t);
extern obj_t bgl_dlsym_get(obj_t);
extern obj_t string_append(obj_t, obj_t);
static obj_t BGl_z62systemz62zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL int BGl_getppidz00zz__osz00();
static obj_t BGl_list3086z00zz__osz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_signalz00zz__osz00(int, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dynamiczd2loadzd2symbolz00zz__osz00(obj_t, obj_t, obj_t);
extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
extern obj_t BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
static obj_t BGl_z62filezd2namezd2canonicaliza7ezc5zz__osz00(obj_t, obj_t);
extern obj_t BGl_substringz00zz__r4_strings_6_7z00(obj_t, long, long);
BGL_EXPORTED_DECL obj_t BGl_sharedzd2libraryzd2suffixz00zz__osz00();
static obj_t BGl_z62pwdz62zz__osz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_za2defaultzd2javazd2packageza2z00zz__osz00 = BUNSPEC;
extern obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_sleepz00zz__osz00(long);
static obj_t BGl_z62makezd2filezd2pathz62zz__osz00(obj_t, obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_openlogz00zz__osz00(obj_t, int, int);
static obj_t BGl_z62filezd2namezd2unixzd2canonicaliza7ez17zz__osz00(obj_t, obj_t);
static obj_t BGl_z62makezd2staticzd2libzd2namezb0zz__osz00(obj_t, obj_t, obj_t);
extern void bgl_sleep(long);
static obj_t BGl_z62makezd2sharedzd2libraryzd2namezb0zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_oszd2charsetzd2zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2ze3listze3zz__osz00(obj_t);
static obj_t BGl_z62commandzd2linezb0zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_putenvz00zz__osz00(char *, char *);
static obj_t BGl_z62filezd2namezd2ze3listz81zz__osz00(obj_t, obj_t);
extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t, obj_t);
extern int bgl_setenv(char *, char *);
BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
static obj_t BGl_z62syslogzd2levelzb0zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_makezd2staticzd2libzd2namezd2zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_oszd2versionzd2zz__osz00();
extern bool_t fexists(char *);
extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
BGL_EXPORTED_DECL int BGl_syslogzd2optionzd2zz__osz00(obj_t);
static obj_t BGl_z62sharedzd2libraryzd2suffixz62zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_suffixz00zz__osz00(obj_t);
static obj_t BGl_z62pathzd2separatorzb0zz__osz00(obj_t);
BGL_EXPORTED_DECL obj_t BGl_closelogz00zz__osz00();
static obj_t BGl_z62sleepz62zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_dynamiczd2loadzd2symbolzd2setzd2zz__osz00(obj_t, obj_t);
static obj_t BGl_symbol3104z00zz__osz00 = BUNSPEC;
static obj_t BGl_z62oszd2charsetzb0zz__osz00(obj_t);
static obj_t BGl_z62getgroupsz62zz__osz00(obj_t);
BGL_EXPORTED_DEF obj_t BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00 = BUNSPEC;
extern long bgl_bignum_to_long(obj_t);
static obj_t BGl_mingwzd2dirnamezd2zz__osz00(obj_t);
static obj_t BGl_z62findzd2filezf2pathz42zz__osz00(obj_t, obj_t, obj_t);
static obj_t BGl_cnstzd2initzd2zz__osz00();
BGL_EXPORTED_DECL int BGl_getpidz00zz__osz00();
static obj_t BGl_z62zc3z04anonymousza31285ze3ze5zz__osz00(obj_t);
static obj_t BGl_z62oszd2versionzb0zz__osz00(obj_t);
extern long bgl_list_length(obj_t);
extern obj_t command_line;
static obj_t BGl_z62oszd2tmpzb0zz__osz00(obj_t);
static obj_t BGl_z62relativezd2filezd2namez62zz__osz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_getpwuidz00zz__osz00(int);
static obj_t BGl_z62getpwnamz62zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_prefixz00zz__osz00(obj_t);
static obj_t BGl_gczd2rootszd2initz00zz__osz00();
static obj_t BGl_z62oszd2namezb0zz__osz00(obj_t);
static obj_t BGl_importedzd2moduleszd2initz00zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t);
extern bool_t bgl_ioctl(obj_t, long, long);
static obj_t BGl_symbol3127z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3129z00zz__osz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_makezd2filezd2pathz00zz__osz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_oszd2archzd2zz__osz00();
extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
static obj_t BGl_symbol3211z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3131z00zz__osz00 = BUNSPEC;
static obj_t BGl_z62dirnamez62zz__osz00(obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_pwdz00zz__osz00();
extern obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
extern obj_t bgl_dlsym(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3140z00zz__osz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_getzd2signalzd2handlerz00zz__osz00(int);
static obj_t BGl_symbol3222z00zz__osz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_getgroupsz00zz__osz00();
static obj_t BGl_symbol3224z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3143z00zz__osz00 = BUNSPEC;
static obj_t BGl_z62signalz62zz__osz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3226z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3146z00zz__osz00 = BUNSPEC;
static long BGl_popzd2directoryze70z35zz__osz00(unsigned char, obj_t, long);
static obj_t BGl_symbol3228z00zz__osz00 = BUNSPEC;
static obj_t BGl_z62filezd2namezd2unixzd2canonicaliza7ez12z05zz__osz00(obj_t, obj_t);
static obj_t BGl_symbol3230z00zz__osz00 = BUNSPEC;
extern obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
static obj_t BGl_symbol3234z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3236z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3238z00zz__osz00 = BUNSPEC;
extern int bgl_setuid(int);
BGL_EXPORTED_DECL obj_t BGl_pathzd2separatorzd2zz__osz00();
static obj_t BGl_z62systemzd2ze3stringz53zz__osz00(obj_t, obj_t);
static obj_t BGl_symbol3240z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3242z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3244z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3246z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3248z00zz__osz00 = BUNSPEC;
extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
BGL_EXPORTED_DECL obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
extern obj_t blit_string(obj_t, long, obj_t, long, long);
static obj_t BGl_z62zc3z04anonymousza31752ze3ze5zz__osz00(obj_t, obj_t);
extern obj_t BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(obj_t, obj_t, obj_t, obj_t, int, int);
static obj_t BGl_symbol3250z00zz__osz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t);
static obj_t BGl_symbol3252z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3171z00zz__osz00 = BUNSPEC;
static obj_t BGl_ioctlzd2requestszd2tablez00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3254z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3092z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3256z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3094z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3176z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3258z00zz__osz00 = BUNSPEC;
static obj_t BGl_z62filezd2separatorzb0zz__osz00(obj_t);
extern char * c_date();
BGL_EXPORTED_DECL obj_t BGl_setuidz00zz__osz00(int);
extern obj_t bgl_getpwuid(int);
BGL_EXPORTED_DECL obj_t BGl_dynamiczd2loadzd2symbolzd2getzd2zz__osz00(obj_t);
BGL_EXPORTED_DECL bool_t BGl_ioctlz00zz__osz00(obj_t, obj_t, obj_t);
extern char * executable_name;
static obj_t BGl_z62dynamiczd2unloadzb0zz__osz00(obj_t, obj_t);
static obj_t BGl_symbol3260z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3180z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3262z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3182z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3264z00zz__osz00 = BUNSPEC;
static obj_t BGl_z62putenvz62zz__osz00(obj_t, obj_t, obj_t);
static obj_t BGl_symbol3266z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3268z00zz__osz00 = BUNSPEC;
BGL_EXPORTED_DECL obj_t BGl_defaultzd2executablezd2namez00zz__osz00();
BGL_EXPORTED_DECL obj_t BGl_ioctlzd2registerzd2requestz12z12zz__osz00(obj_t, uint64_t);
BGL_EXPORTED_DECL obj_t BGl_syslogz00zz__osz00(int, obj_t);
extern int bgl_setgid(int);
static obj_t BGl_symbol3270z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3190z00zz__osz00 = BUNSPEC;
extern int bgl_getuid();
static obj_t BGl_symbol3272z00zz__osz00 = BUNSPEC;
BGL_EXPORTED_DECL bool_t BGl_chmodz00zz__osz00(obj_t, obj_t);
static obj_t BGl_symbol3277z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3279z00zz__osz00 = BUNSPEC;
static obj_t BGl_z62getppidz62zz__osz00(obj_t);
extern obj_t BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(obj_t, long, obj_t, long, long);
static obj_t BGl_z62suffixz62zz__osz00(obj_t, obj_t);
static obj_t BGl_symbol3281z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3283z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3285z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3287z00zz__osz00 = BUNSPEC;
static obj_t BGl_symbol3289z00zz__osz00 = BUNSPEC;
static obj_t *__cnst;


DEFINE_EXPORT_BGL_PROCEDURE( BGl_openlogzd2envzd2zz__osz00, BgL_bgl_za762openlogza762za7za7_3299z00, BGl_z62openlogz62zz__osz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_syslogzd2envzd2zz__osz00, BgL_bgl_za762syslogza762za7za7__3300z00, va_generic_entry, BGl_z62syslogz62zz__osz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3100z00zz__osz00, BgL_bgl_string3100za700za7za7_3301za7, "Wrong number of arguments", 25 );
DEFINE_STRING( BGl_string3101z00zz__osz00, BgL_bgl_string3101za700za7za7_3302za7, "&signal", 7 );
DEFINE_STRING( BGl_string3102z00zz__osz00, BgL_bgl_string3102za700za7za7_3303za7, "bint", 4 );
DEFINE_STRING( BGl_string3103z00zz__osz00, BgL_bgl_string3103za700za7za7_3304za7, "&get-signal-handler", 19 );
DEFINE_STRING( BGl_string3105z00zz__osz00, BgL_bgl_string3105za700za7za7_3305za7, "getenv", 6 );
DEFINE_STRING( BGl_string3106z00zz__osz00, BgL_bgl_string3106za700za7za7_3306za7, "wrong number of arguments: [0..1] expected, provided", 52 );
DEFINE_STRING( BGl_string3107z00zz__osz00, BgL_bgl_string3107za700za7za7_3307za7, "win32", 5 );
DEFINE_STRING( BGl_string3108z00zz__osz00, BgL_bgl_string3108za700za7za7_3308za7, "HOME", 4 );
DEFINE_STRING( BGl_string3109z00zz__osz00, BgL_bgl_string3109za700za7za7_3309za7, "USERPROFILE", 11 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getppidzd2envzd2zz__osz00, BgL_bgl_za762getppidza762za7za7_3310z00, BGl_z62getppidz62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_datezd2envzd2zz__osz00, BgL_bgl_za762dateza762za7za7__os3311z00, BGl_z62datez62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dynamiczd2loadzd2symbolzd2envzd2zz__osz00, BgL_bgl__dynamicza7d2loadza73312z00, opt_generic_entry, BGl__dynamiczd2loadzd2symbolz00zz__osz00, BFALSE, -1 );
DEFINE_STRING( BGl_string3110z00zz__osz00, BgL_bgl_string3110za700za7za7_3313za7, "&putenv", 7 );
DEFINE_STRING( BGl_string3111z00zz__osz00, BgL_bgl_string3111za700za7za7_3314za7, "bstring", 7 );
DEFINE_STRING( BGl_string3112z00zz__osz00, BgL_bgl_string3112za700za7za7_3315za7, "system", 6 );
DEFINE_STRING( BGl_string3113z00zz__osz00, BgL_bgl_string3113za700za7za7_3316za7, "pair", 4 );
DEFINE_STRING( BGl_string3114z00zz__osz00, BgL_bgl_string3114za700za7za7_3317za7, "| ", 2 );
DEFINE_STRING( BGl_string3115z00zz__osz00, BgL_bgl_string3115za700za7za7_3318za7, "system->string", 14 );
DEFINE_STRING( BGl_string3116z00zz__osz00, BgL_bgl_string3116za700za7za7_3319za7, "input-port", 10 );
DEFINE_STRING( BGl_string3117z00zz__osz00, BgL_bgl_string3117za700za7za7_3320za7, "<@anonymous:1285>", 17 );
DEFINE_STRING( BGl_string3118z00zz__osz00, BgL_bgl_string3118za700za7za7_3321za7, "string-ref", 10 );
DEFINE_STRING( BGl_string3119z00zz__osz00, BgL_bgl_string3119za700za7za7_3322za7, "&chdir", 6 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_findzd2filezf2pathzd2envzf2zz__osz00, BgL_bgl_za762findza7d2fileza7f3323za7, BGl_z62findzd2filezf2pathz42zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2sharedzd2libraryzd2namezd2envz00zz__osz00, BgL_bgl_za762makeza7d2shared3324z00, BGl_z62makezd2sharedzd2libraryzd2namezb0zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3200z00zz__osz00, BgL_bgl_string3200za700za7za7_3325za7, "&getpwnam", 9 );
DEFINE_STRING( BGl_string3201z00zz__osz00, BgL_bgl_string3201za700za7za7_3326za7, "&getpwuid", 9 );
DEFINE_STRING( BGl_string3120z00zz__osz00, BgL_bgl_string3120za700za7za7_3327za7, "mingw", 5 );
DEFINE_STRING( BGl_string3202z00zz__osz00, BgL_bgl_string3202za700za7za7_3328za7, "&ioctl-register-request!", 24 );
DEFINE_STRING( BGl_string3121z00zz__osz00, BgL_bgl_string3121za700za7za7_3329za7, "&basename", 9 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pwdzd2envzd2zz__osz00, BgL_bgl_za762pwdza762za7za7__osza73330za7, BGl_z62pwdz62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3203z00zz__osz00, BgL_bgl_string3203za700za7za7_3331za7, "buint64", 7 );
DEFINE_STRING( BGl_string3122z00zz__osz00, BgL_bgl_string3122za700za7za7_3332za7, "&prefix", 7 );
DEFINE_STRING( BGl_string3204z00zz__osz00, BgL_bgl_string3204za700za7za7_3333za7, "ioctl", 5 );
DEFINE_STRING( BGl_string3123z00zz__osz00, BgL_bgl_string3123za700za7za7_3334za7, "&dirname", 8 );
DEFINE_STRING( BGl_string3205z00zz__osz00, BgL_bgl_string3205za700za7za7_3335za7, "number of string", 16 );
DEFINE_STRING( BGl_string3124z00zz__osz00, BgL_bgl_string3124za700za7za7_3336za7, "", 0 );
DEFINE_STRING( BGl_string3206z00zz__osz00, BgL_bgl_string3206za700za7za7_3337za7, "request->elong", 14 );
DEFINE_STRING( BGl_string3125z00zz__osz00, BgL_bgl_string3125za700za7za7_3338za7, "&suffix", 7 );
DEFINE_STRING( BGl_string3207z00zz__osz00, BgL_bgl_string3207za700za7za7_3339za7, "belong", 6 );
DEFINE_STRING( BGl_string3126z00zz__osz00, BgL_bgl_string3126za700za7za7_3340za7, "loop", 4 );
DEFINE_STRING( BGl_string3208z00zz__osz00, BgL_bgl_string3208za700za7za7_3341za7, "->elong", 7 );
DEFINE_STRING( BGl_string3209z00zz__osz00, BgL_bgl_string3209za700za7za7_3342za7, "real", 4 );
DEFINE_STRING( BGl_string3128z00zz__osz00, BgL_bgl_string3128za700za7za7_3343za7, "read", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dynamiczd2loadzd2symbolzd2getzd2envz00zz__osz00, BgL_bgl_za762dynamicza7d2loa3344z00, BGl_z62dynamiczd2loadzd2symbolzd2getzb0zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3210z00zz__osz00, BgL_bgl_string3210za700za7za7_3345za7, "elong pair", 10 );
DEFINE_STRING( BGl_string3130z00zz__osz00, BgL_bgl_string3130za700za7za7_3346za7, "write", 5 );
DEFINE_STRING( BGl_string3212z00zz__osz00, BgL_bgl_string3212za700za7za7_3347za7, "umask", 5 );
DEFINE_STRING( BGl_string3213z00zz__osz00, BgL_bgl_string3213za700za7za7_3348za7, "_umask", 6 );
DEFINE_STRING( BGl_string3132z00zz__osz00, BgL_bgl_string3132za700za7za7_3349za7, "execute", 7 );
DEFINE_STRING( BGl_string3214z00zz__osz00, BgL_bgl_string3214za700za7za7_3350za7, "long", 4 );
DEFINE_STRING( BGl_string3133z00zz__osz00, BgL_bgl_string3133za700za7za7_3351za7, "chmod", 5 );
DEFINE_STRING( BGl_string3215z00zz__osz00, BgL_bgl_string3215za700za7za7_3352za7, "&openlog", 8 );
DEFINE_STRING( BGl_string3134z00zz__osz00, BgL_bgl_string3134za700za7za7_3353za7, "Unknown mode", 12 );
DEFINE_STRING( BGl_string3216z00zz__osz00, BgL_bgl_string3216za700za7za7_3354za7, "%s", 2 );
DEFINE_STRING( BGl_string3135z00zz__osz00, BgL_bgl_string3135za700za7za7_3355za7, "&chmod", 6 );
DEFINE_STRING( BGl_string3217z00zz__osz00, BgL_bgl_string3217za700za7za7_3356za7, "&syslog", 7 );
DEFINE_STRING( BGl_string3136z00zz__osz00, BgL_bgl_string3136za700za7za7_3357za7, "&make-file-name", 15 );
DEFINE_STRING( BGl_string3218z00zz__osz00, BgL_bgl_string3218za700za7za7_3358za7, "<@anonymous:1753>", 17 );
DEFINE_STRING( BGl_string3137z00zz__osz00, BgL_bgl_string3137za700za7za7_3359za7, "make-file-path", 14 );
DEFINE_STRING( BGl_string3219z00zz__osz00, BgL_bgl_string3219za700za7za7_3360za7, "output-port", 11 );
DEFINE_STRING( BGl_string3138z00zz__osz00, BgL_bgl_string3138za700za7za7_3361za7, "string", 6 );
DEFINE_STRING( BGl_string3139z00zz__osz00, BgL_bgl_string3139za700za7za7_3362za7, "&make-file-path", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_defaultzd2executablezd2namezd2envzd2zz__osz00, BgL_bgl_za762defaultza7d2exe3363z00, BGl_z62defaultzd2executablezd2namez62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_umaskzd2envzd2zz__osz00, BgL_bgl__umaskza700za7za7__osza73364z00, opt_generic_entry, BGl__umaskz00zz__osz00, BFALSE, -1 );
DEFINE_STRING( BGl_string3220z00zz__osz00, BgL_bgl_string3220za700za7za7_3365za7, "for-each", 8 );
DEFINE_STRING( BGl_string3221z00zz__osz00, BgL_bgl_string3221za700za7za7_3366za7, "list", 4 );
DEFINE_STRING( BGl_string3141z00zz__osz00, BgL_bgl_string3141za700za7za7_3367za7, "bigloo-c", 8 );
DEFINE_STRING( BGl_string3223z00zz__osz00, BgL_bgl_string3223za700za7za7_3368za7, "LOG_CONS", 8 );
DEFINE_STRING( BGl_string3142z00zz__osz00, BgL_bgl_string3142za700za7za7_3369za7, "lib", 3 );
DEFINE_STRING( BGl_string3225z00zz__osz00, BgL_bgl_string3225za700za7za7_3370za7, "LOG_NDELAY", 10 );
DEFINE_STRING( BGl_string3144z00zz__osz00, BgL_bgl_string3144za700za7za7_3371za7, "bigloo-jvm", 10 );
DEFINE_STRING( BGl_string3145z00zz__osz00, BgL_bgl_string3145za700za7za7_3372za7, ".zip", 4 );
DEFINE_STRING( BGl_string3227z00zz__osz00, BgL_bgl_string3227za700za7za7_3373za7, "LOG_NOWAIT", 10 );
DEFINE_STRING( BGl_string3147z00zz__osz00, BgL_bgl_string3147za700za7za7_3374za7, "bigloo-.net", 11 );
DEFINE_STRING( BGl_string3229z00zz__osz00, BgL_bgl_string3229za700za7za7_3375za7, "LOG_ODELAY", 10 );
DEFINE_STRING( BGl_string3148z00zz__osz00, BgL_bgl_string3148za700za7za7_3376za7, ".dll", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2namezd2envz00zz__osz00, BgL_bgl_za762osza7d2nameza7b0za73377z00, BGl_z62oszd2namezb0zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3149z00zz__osz00, BgL_bgl_string3149za700za7za7_3378za7, "make-static-lib-name", 20 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_pathzd2separatorzd2envz00zz__osz00, BgL_bgl_za762pathza7d2separa3379z00, BGl_z62pathzd2separatorzb0zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2namezd2canonicaliza7ez12zd2envz67zz__osz00, BgL_bgl_za762fileza7d2nameza7d3380za7, BGl_z62filezd2namezd2canonicaliza7ez12zd7zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2namezd2ze3listzd2envz31zz__osz00, BgL_bgl_za762fileza7d2nameza7d3381za7, BGl_z62filezd2namezd2ze3listz81zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_signalzd2envzd2zz__osz00, BgL_bgl_za762signalza762za7za7__3382z00, BGl_z62signalz62zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3231z00zz__osz00, BgL_bgl_string3231za700za7za7_3383za7, "LOG_PID", 7 );
DEFINE_STRING( BGl_string3150z00zz__osz00, BgL_bgl_string3150za700za7za7_3384za7, "Unknown backend", 15 );
DEFINE_STRING( BGl_string3232z00zz__osz00, BgL_bgl_string3232za700za7za7_3385za7, "syslog-option", 13 );
DEFINE_STRING( BGl_string3151z00zz__osz00, BgL_bgl_string3151za700za7za7_3386za7, "&make-static-lib-name", 21 );
DEFINE_STRING( BGl_string3233z00zz__osz00, BgL_bgl_string3233za700za7za7_3387za7, "unknown option", 14 );
DEFINE_STRING( BGl_string3152z00zz__osz00, BgL_bgl_string3152za700za7za7_3388za7, "symbol", 6 );
DEFINE_STRING( BGl_string3153z00zz__osz00, BgL_bgl_string3153za700za7za7_3389za7, "make-shared-lib-name", 20 );
DEFINE_STRING( BGl_string3235z00zz__osz00, BgL_bgl_string3235za700za7za7_3390za7, "LOG_AUTH", 8 );
DEFINE_STRING( BGl_string3154z00zz__osz00, BgL_bgl_string3154za700za7za7_3391za7, "&make-shared-lib-name", 21 );
DEFINE_STRING( BGl_string3155z00zz__osz00, BgL_bgl_string3155za700za7za7_3392za7, "&find-file/path", 15 );
DEFINE_STRING( BGl_string3237z00zz__osz00, BgL_bgl_string3237za700za7za7_3393za7, "LOG_AUTHPRIV", 12 );
DEFINE_STRING( BGl_string3156z00zz__osz00, BgL_bgl_string3156za700za7za7_3394za7, "&file-name->list", 16 );
DEFINE_STRING( BGl_string3157z00zz__osz00, BgL_bgl_string3157za700za7za7_3395za7, "string-set!", 11 );
DEFINE_STRING( BGl_string3239z00zz__osz00, BgL_bgl_string3239za700za7za7_3396za7, "LOG_CRON", 8 );
DEFINE_STRING( BGl_string3158z00zz__osz00, BgL_bgl_string3158za700za7za7_3397za7, "&file-name-canonicalize", 23 );
DEFINE_STRING( BGl_string3159z00zz__osz00, BgL_bgl_string3159za700za7za7_3398za7, "&file-name-canonicalize!", 24 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2staticzd2libzd2namezd2envz00zz__osz00, BgL_bgl_za762makeza7d2static3399z00, BGl_z62makezd2staticzd2libzd2namezb0zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_executablezd2namezd2envz00zz__osz00, BgL_bgl_za762executableza7d23400z00, BGl_z62executablezd2namezb0zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2versionzd2envz00zz__osz00, BgL_bgl_za762osza7d2versionza73401za7, BGl_z62oszd2versionzb0zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dirnamezd2envzd2zz__osz00, BgL_bgl_za762dirnameza762za7za7_3402z00, BGl_z62dirnamez62zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getuidzd2envzd2zz__osz00, BgL_bgl_za762getuidza762za7za7__3403z00, BGl_z62getuidz62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3241z00zz__osz00, BgL_bgl_string3241za700za7za7_3404za7, "LOG_DAEMON", 10 );
DEFINE_STRING( BGl_string3160z00zz__osz00, BgL_bgl_string3160za700za7za7_3405za7, "file-name-unix-canonicalize", 27 );
DEFINE_STRING( BGl_string3161z00zz__osz00, BgL_bgl_string3161za700za7za7_3406za7, "..", 2 );
DEFINE_STRING( BGl_string3243z00zz__osz00, BgL_bgl_string3243za700za7za7_3407za7, "LOG_FTP", 7 );
DEFINE_STRING( BGl_string3162z00zz__osz00, BgL_bgl_string3162za700za7za7_3408za7, "&file-name-unix-canonicalize", 28 );
DEFINE_STRING( BGl_string3163z00zz__osz00, BgL_bgl_string3163za700za7za7_3409za7, "&file-name-unix-canonicalize!", 29 );
DEFINE_STRING( BGl_string3245z00zz__osz00, BgL_bgl_string3245za700za7za7_3410za7, "LOG_KERN", 8 );
DEFINE_STRING( BGl_string3164z00zz__osz00, BgL_bgl_string3164za700za7za7_3411za7, "make-file", 9 );
DEFINE_STRING( BGl_string3165z00zz__osz00, BgL_bgl_string3165za700za7za7_3412za7, "relative-file-name", 18 );
DEFINE_STRING( BGl_string3247z00zz__osz00, BgL_bgl_string3247za700za7za7_3413za7, "LOG_LOCAL0", 10 );
DEFINE_STRING( BGl_string3166z00zz__osz00, BgL_bgl_string3166za700za7za7_3414za7, "pair-nil", 8 );
DEFINE_STRING( BGl_string3167z00zz__osz00, BgL_bgl_string3167za700za7za7_3415za7, "&relative-file-name", 19 );
DEFINE_STRING( BGl_string3249z00zz__osz00, BgL_bgl_string3249za700za7za7_3416za7, "LOG_LOCAL1", 10 );
DEFINE_STRING( BGl_string3168z00zz__osz00, BgL_bgl_string3168za700za7za7_3417za7, "&make-static-library-name", 25 );
DEFINE_STRING( BGl_string3087z00zz__osz00, BgL_bgl_string3087za700za7za7_3418za7, ".", 1 );
DEFINE_STRING( BGl_string3169z00zz__osz00, BgL_bgl_string3169za700za7za7_3419za7, "&make-shared-library-name", 25 );
DEFINE_STRING( BGl_string3088z00zz__osz00, BgL_bgl_string3088za700za7za7_3420za7, "bigloo.foreign", 14 );
DEFINE_STRING( BGl_string3089z00zz__osz00, BgL_bgl_string3089za700za7za7_3421za7, "LANG", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_suffixzd2envzd2zz__osz00, BgL_bgl_za762suffixza762za7za7__3422z00, BGl_z62suffixz62zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ioctlzd2envzd2zz__osz00, BgL_bgl_za762ioctlza762za7za7__o3423z00, BGl_z62ioctlz62zz__osz00, 0L, BUNSPEC, 3 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getenvzd2envzd2zz__osz00, BgL_bgl__getenvza700za7za7__os3424za7, opt_generic_entry, BGl__getenvz00zz__osz00, BFALSE, -1 );
DEFINE_STRING( BGl_string3251z00zz__osz00, BgL_bgl_string3251za700za7za7_3425za7, "LOG_LOCAL2", 10 );
DEFINE_STRING( BGl_string3170z00zz__osz00, BgL_bgl_string3170za700za7za7_3426za7, "&sleep", 6 );
DEFINE_STRING( BGl_string3090z00zz__osz00, BgL_bgl_string3090za700za7za7_3427za7, "LC_CTYPE", 8 );
DEFINE_STRING( BGl_string3253z00zz__osz00, BgL_bgl_string3253za700za7za7_3428za7, "LOG_LOCAL3", 10 );
DEFINE_STRING( BGl_string3172z00zz__osz00, BgL_bgl_string3172za700za7za7_3429za7, "dynamic-load", 12 );
DEFINE_STRING( BGl_string3091z00zz__osz00, BgL_bgl_string3091za700za7za7_3430za7, "LC_ALL", 6 );
DEFINE_STRING( BGl_string3173z00zz__osz00, BgL_bgl_string3173za700za7za7_3431za7, "wrong number of arguments: [1..3] expected, provided", 52 );
DEFINE_STRING( BGl_string3255z00zz__osz00, BgL_bgl_string3255za700za7za7_3432za7, "LOG_LOCAL4", 10 );
DEFINE_STRING( BGl_string3174z00zz__osz00, BgL_bgl_string3174za700za7za7_3433za7, "_dynamic-load", 13 );
DEFINE_STRING( BGl_string3093z00zz__osz00, BgL_bgl_string3093za700za7za7_3434za7, "ignore", 6 );
DEFINE_STRING( BGl_string3175z00zz__osz00, BgL_bgl_string3175za700za7za7_3435za7, "module-initialization", 21 );
DEFINE_STRING( BGl_string3257z00zz__osz00, BgL_bgl_string3257za700za7za7_3436za7, "LOG_LOCAL5", 10 );
DEFINE_STRING( BGl_string3095z00zz__osz00, BgL_bgl_string3095za700za7za7_3437za7, "default", 7 );
DEFINE_STRING( BGl_string3177z00zz__osz00, BgL_bgl_string3177za700za7za7_3438za7, "__dload_noarch", 14 );
DEFINE_STRING( BGl_string3096z00zz__osz00, BgL_bgl_string3096za700za7za7_3439za7, "/tmp/4.4a/runtime/Llib/os.scm", 29 );
DEFINE_STRING( BGl_string3259z00zz__osz00, BgL_bgl_string3259za700za7za7_3440za7, "LOG_LOCAL6", 10 );
DEFINE_STRING( BGl_string3178z00zz__osz00, BgL_bgl_string3178za700za7za7_3441za7, "dynamic-load:", 13 );
DEFINE_STRING( BGl_string3097z00zz__osz00, BgL_bgl_string3097za700za7za7_3442za7, "signal", 6 );
DEFINE_STRING( BGl_string3179z00zz__osz00, BgL_bgl_string3179za700za7za7_3443za7, "Not supported on this architecture", 34 );
DEFINE_STRING( BGl_string3098z00zz__osz00, BgL_bgl_string3098za700za7za7_3444za7, "procedure", 9 );
DEFINE_STRING( BGl_string3099z00zz__osz00, BgL_bgl_string3099za700za7za7_3445za7, "Illegal signal", 14 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getpidzd2envzd2zz__osz00, BgL_bgl_za762getpidza762za7za7__3446z00, BGl_z62getpidz62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_chmodzd2envzd2zz__osz00, BgL_bgl_za762chmodza762za7za7__o3447z00, va_generic_entry, BGl_z62chmodz62zz__osz00, BUNSPEC, -2 );
DEFINE_STRING( BGl_string3261z00zz__osz00, BgL_bgl_string3261za700za7za7_3448za7, "LOG_LOCAL7", 10 );
DEFINE_STRING( BGl_string3181z00zz__osz00, BgL_bgl_string3181za700za7za7_3449za7, "__dload_error", 13 );
DEFINE_STRING( BGl_string3263z00zz__osz00, BgL_bgl_string3263za700za7za7_3450za7, "LOG_LPR", 7 );
DEFINE_STRING( BGl_string3183z00zz__osz00, BgL_bgl_string3183za700za7za7_3451za7, "__dload_noinit", 14 );
DEFINE_STRING( BGl_string3265z00zz__osz00, BgL_bgl_string3265za700za7za7_3452za7, "LOG_MAIL", 8 );
DEFINE_STRING( BGl_string3184z00zz__osz00, BgL_bgl_string3184za700za7za7_3453za7, "dynamic-load: ", 14 );
DEFINE_STRING( BGl_string3185z00zz__osz00, BgL_bgl_string3185za700za7za7_3454za7, "Cannot find library init entry point -- ", 40 );
DEFINE_STRING( BGl_string3267z00zz__osz00, BgL_bgl_string3267za700za7za7_3455za7, "LOG_NEWS", 8 );
DEFINE_STRING( BGl_string3186z00zz__osz00, BgL_bgl_string3186za700za7za7_3456za7, "Cannot find library init entry point", 36 );
DEFINE_STRING( BGl_string3187z00zz__osz00, BgL_bgl_string3187za700za7za7_3457za7, "Can't find library", 18 );
DEFINE_STRING( BGl_string3269z00zz__osz00, BgL_bgl_string3269za700za7za7_3458za7, "LOG_SYSLOG", 10 );
DEFINE_STRING( BGl_string3188z00zz__osz00, BgL_bgl_string3188za700za7za7_3459za7, "dynamic-unload", 14 );
DEFINE_STRING( BGl_string3189z00zz__osz00, BgL_bgl_string3189za700za7za7_3460za7, "&dynamic-unload", 15 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2filezd2pathzd2envzd2zz__osz00, BgL_bgl_za762makeza7d2fileza7d3461za7, va_generic_entry, BGl_z62makezd2filezd2pathz62zz__osz00, BUNSPEC, -3 );
DEFINE_STRING( BGl_string3271z00zz__osz00, BgL_bgl_string3271za700za7za7_3462za7, "LOG_USER", 8 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2archzd2envz00zz__osz00, BgL_bgl_za762osza7d2archza7b0za73463z00, BGl_z62oszd2archzb0zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_STRING( BGl_string3191z00zz__osz00, BgL_bgl_string3191za700za7za7_3464za7, "dynamic-load-symbol", 19 );
DEFINE_STRING( BGl_string3273z00zz__osz00, BgL_bgl_string3273za700za7za7_3465za7, "LOG_UUCP", 8 );
DEFINE_STRING( BGl_string3192z00zz__osz00, BgL_bgl_string3192za700za7za7_3466za7, "wrong number of arguments: [2..3] expected, provided", 52 );
DEFINE_STRING( BGl_string3274z00zz__osz00, BgL_bgl_string3274za700za7za7_3467za7, "syslog-facility", 15 );
DEFINE_STRING( BGl_string3193z00zz__osz00, BgL_bgl_string3193za700za7za7_3468za7, "_dynamic-load-symbol", 20 );
DEFINE_STRING( BGl_string3275z00zz__osz00, BgL_bgl_string3275za700za7za7_3469za7, "unknown facility", 16 );
DEFINE_STRING( BGl_string3194z00zz__osz00, BgL_bgl_string3194za700za7za7_3470za7, "&dynamic-load-symbol-get", 24 );
DEFINE_STRING( BGl_string3276z00zz__osz00, BgL_bgl_string3276za700za7za7_3471za7, "&syslog-facility", 16 );
DEFINE_STRING( BGl_string3195z00zz__osz00, BgL_bgl_string3195za700za7za7_3472za7, "custom", 6 );
DEFINE_STRING( BGl_string3196z00zz__osz00, BgL_bgl_string3196za700za7za7_3473za7, "&dynamic-load-symbol-set", 24 );
DEFINE_STRING( BGl_string3278z00zz__osz00, BgL_bgl_string3278za700za7za7_3474za7, "LOG_EMERG", 9 );
DEFINE_STRING( BGl_string3197z00zz__osz00, BgL_bgl_string3197za700za7za7_3475za7, "&unix-path->list", 16 );
DEFINE_STRING( BGl_string3198z00zz__osz00, BgL_bgl_string3198za700za7za7_3476za7, "&setuid", 7 );
DEFINE_STRING( BGl_string3199z00zz__osz00, BgL_bgl_string3199za700za7za7_3477za7, "&setgid", 7 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2tmpzd2envz00zz__osz00, BgL_bgl_za762osza7d2tmpza7b0za7za73478za7, BGl_z62oszd2tmpzb0zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getpwnamzd2envzd2zz__osz00, BgL_bgl_za762getpwnamza762za7za73479z00, BGl_z62getpwnamz62zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_STRING( BGl_string3280z00zz__osz00, BgL_bgl_string3280za700za7za7_3480za7, "LOG_ALERT", 9 );
DEFINE_STRING( BGl_string3282z00zz__osz00, BgL_bgl_string3282za700za7za7_3481za7, "LOG_CRIT", 8 );
DEFINE_STRING( BGl_string3284z00zz__osz00, BgL_bgl_string3284za700za7za7_3482za7, "LOG_ERR", 7 );
DEFINE_STRING( BGl_string3286z00zz__osz00, BgL_bgl_string3286za700za7za7_3483za7, "LOG_WARNING", 11 );
DEFINE_STRING( BGl_string3288z00zz__osz00, BgL_bgl_string3288za700za7za7_3484za7, "LOG_NOTICE", 10 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dynamiczd2loadzd2symbolzd2setzd2envz00zz__osz00, BgL_bgl_za762dynamicza7d2loa3485z00, BGl_z62dynamiczd2loadzd2symbolzd2setzb0zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_STRING( BGl_string3290z00zz__osz00, BgL_bgl_string3290za700za7za7_3486za7, "LOG_INFO", 8 );
DEFINE_STRING( BGl_string3292z00zz__osz00, BgL_bgl_string3292za700za7za7_3487za7, "LOG_DEBUG", 9 );
DEFINE_STRING( BGl_string3293z00zz__osz00, BgL_bgl_string3293za700za7za7_3488za7, "syslog-level", 12 );
DEFINE_STRING( BGl_string3294z00zz__osz00, BgL_bgl_string3294za700za7za7_3489za7, "unknown level", 13 );
DEFINE_STRING( BGl_string3295z00zz__osz00, BgL_bgl_string3295za700za7za7_3490za7, "&syslog-level", 13 );
DEFINE_STRING( BGl_string3296z00zz__osz00, BgL_bgl_string3296za700za7za7_3491za7, "__os", 4 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_ioctlzd2registerzd2requestz12zd2envzc0zz__osz00, BgL_bgl_za762ioctlza7d2regis3492z00, BGl_z62ioctlzd2registerzd2requestz12z70zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2filezd2namezd2envzd2zz__osz00, BgL_bgl_za762makeza7d2fileza7d3493za7, BGl_z62makezd2filezd2namez62zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_chdirzd2envzd2zz__osz00, BgL_bgl_za762chdirza762za7za7__o3494z00, BGl_z62chdirz62zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_prefixzd2envzd2zz__osz00, BgL_bgl_za762prefixza762za7za7__3495z00, BGl_z62prefixz62zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_syslogzd2optionzd2envz00zz__osz00, BgL_bgl_za762syslogza7d2opti3496z00, va_generic_entry, BGl_z62syslogzd2optionzb0zz__osz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getzd2signalzd2handlerzd2envzd2zz__osz00, BgL_bgl_za762getza7d2signalza73497za7, BGl_z62getzd2signalzd2handlerz62zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_syslogzd2facilityzd2envz00zz__osz00, BgL_bgl_za762syslogza7d2faci3498z00, BGl_z62syslogzd2facilityzb0zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2namezd2canonicaliza7ezd2envz75zz__osz00, BgL_bgl_za762fileza7d2nameza7d3499za7, BGl_z62filezd2namezd2canonicaliza7ezc5zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2sharedzd2libzd2namezd2envz00zz__osz00, BgL_bgl_za762makeza7d2shared3500z00, BGl_z62makezd2sharedzd2libzd2namezb0zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getgidzd2envzd2zz__osz00, BgL_bgl_za762getgidza762za7za7__3501z00, BGl_z62getgidz62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setuidzd2envzd2zz__osz00, BgL_bgl_za762setuidza762za7za7__3502z00, BGl_z62setuidz62zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dynamiczd2loadzd2envz00zz__osz00, BgL_bgl__dynamicza7d2loadza73503z00, opt_generic_entry, BGl__dynamiczd2loadzd2zz__osz00, BFALSE, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sleepzd2envzd2zz__osz00, BgL_bgl_za762sleepza762za7za7__o3504z00, BGl_z62sleepz62zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_closelogzd2envzd2zz__osz00, BgL_bgl_za762closelogza762za7za73505z00, BGl_z62closelogz62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_commandzd2linezd2envz00zz__osz00, BgL_bgl_za762commandza7d2lin3506z00, BGl_z62commandzd2linezb0zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_dynamiczd2unloadzd2envz00zz__osz00, BgL_bgl_za762dynamicza7d2unl3507z00, BGl_z62dynamiczd2unloadzb0zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2charsetzd2envz00zz__osz00, BgL_bgl_za762osza7d2charsetza73508za7, BGl_z62oszd2charsetzb0zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_staticzd2libraryzd2suffixzd2envzd2zz__osz00, BgL_bgl_za762staticza7d2libr3509z00, BGl_z62staticzd2libraryzd2suffixz62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_systemzd2envzd2zz__osz00, BgL_bgl_za762systemza762za7za7__3510z00, va_generic_entry, BGl_z62systemz62zz__osz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getgroupszd2envzd2zz__osz00, BgL_bgl_za762getgroupsza762za73511za7, BGl_z62getgroupsz62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2namezd2unixzd2canonicaliza7ezd2envza7zz__osz00, BgL_bgl_za762fileza7d2nameza7d3512za7, BGl_z62filezd2namezd2unixzd2canonicaliza7ez17zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_basenamezd2envzd2zz__osz00, BgL_bgl_za762basenameza762za7za73513z00, BGl_z62basenamez62zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2separatorzd2envz00zz__osz00, BgL_bgl_za762fileza7d2separa3514z00, BGl_z62filezd2separatorzb0zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_getpwuidzd2envzd2zz__osz00, BgL_bgl_za762getpwuidza762za7za73515z00, BGl_z62getpwuidz62zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_putenvzd2envzd2zz__osz00, BgL_bgl_za762putenvza762za7za7__3516z00, BGl_z62putenvz62zz__osz00, 0L, BUNSPEC, 2 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_sharedzd2libraryzd2suffixzd2envzd2zz__osz00, BgL_bgl_za762sharedza7d2libr3517z00, BGl_z62sharedzd2libraryzd2suffixz62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_systemzd2ze3stringzd2envze3zz__osz00, BgL_bgl_za762systemza7d2za7e3s3518za7, va_generic_entry, BGl_z62systemzd2ze3stringz53zz__osz00, BUNSPEC, -1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_defaultzd2scriptzd2namezd2envzd2zz__osz00, BgL_bgl_za762defaultza7d2scr3519z00, BGl_z62defaultzd2scriptzd2namez62zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_syslogzd2levelzd2envz00zz__osz00, BgL_bgl_za762syslogza7d2leve3520z00, BGl_z62syslogzd2levelzb0zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_unixzd2pathzd2ze3listzd2envz31zz__osz00, BgL_bgl_za762unixza7d2pathza7d3521za7, BGl_z62unixzd2pathzd2ze3listz81zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_makezd2staticzd2libraryzd2namezd2envz00zz__osz00, BgL_bgl_za762makeza7d2static3522z00, BGl_z62makezd2staticzd2libraryzd2namezb0zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_oszd2classzd2envz00zz__osz00, BgL_bgl_za762osza7d2classza7b03523za7, BGl_z62oszd2classzb0zz__osz00, 0L, BUNSPEC, 0 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_filezd2namezd2unixzd2canonicaliza7ez12zd2envzb5zz__osz00, BgL_bgl_za762fileza7d2nameza7d3524za7, BGl_z62filezd2namezd2unixzd2canonicaliza7ez12z05zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_setgidzd2envzd2zz__osz00, BgL_bgl_za762setgidza762za7za7__3525z00, BGl_z62setgidz62zz__osz00, 0L, BUNSPEC, 1 );
DEFINE_EXPORT_BGL_PROCEDURE( BGl_relativezd2filezd2namezd2envzd2zz__osz00, BgL_bgl_za762relativeza7d2fi3526z00, BGl_z62relativezd2filezd2namez62zz__osz00, 0L, BUNSPEC, 2 );

/* GC roots registration */
static obj_t bgl_gc_roots_register() {
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
void *roots_min = (void*)ULONG_MAX, *roots_max = 0;
ADD_ROOT( (void *)(&BGl_symbol3291z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_requirezd2initializa7ationz75zz__osz00) );
ADD_ROOT( (void *)(&BGl_list3086z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_za2defaultzd2javazd2packageza2z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3104z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3127z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3129z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3211z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3131z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3140z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3222z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3224z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3143z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3226z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3146z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3228z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3230z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3234z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3236z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3238z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3240z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3242z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3244z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3246z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3248z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3250z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3252z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3171z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_ioctlzd2requestszd2tablez00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3254z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3092z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3256z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3094z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3176z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3258z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3260z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3180z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3262z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3182z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3264z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3266z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3268z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3270z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3190z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3272z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3277z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3279z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3281z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3283z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3285z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3287z00zz__osz00) );
ADD_ROOT( (void *)(&BGl_symbol3289z00zz__osz00) );
#undef ADD_ROOT
if( roots_max > 0 ) GC_add_roots( roots_min, ((void **)roots_max) + 1 );
#endif
return BUNSPEC;
}



/* module-initialization */
BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__osz00(long BgL_checksumz00_4491, char * BgL_fromz00_4492)
{
{ 
if(
CBOOL(BGl_requirezd2initializa7ationz75zz__osz00))
{ 
BGl_requirezd2initializa7ationz75zz__osz00 = 
BBOOL(((bool_t)0)); 
BGl_gczd2rootszd2initz00zz__osz00(); 
BGl_cnstzd2initzd2zz__osz00(); 
BGl_importedzd2moduleszd2initz00zz__osz00(); 
return 
BGl_toplevelzd2initzd2zz__osz00();}  else 
{ 
return BUNSPEC;} } 

}



/* cnst-init */
obj_t BGl_cnstzd2initzd2zz__osz00()
{
{ /* Llib/os.scm 18 */
BGl_list3086z00zz__osz00 = 
MAKE_YOUNG_PAIR(BGl_string3087z00zz__osz00, BNIL); 
BGl_symbol3092z00zz__osz00 = 
bstring_to_symbol(BGl_string3093z00zz__osz00); 
BGl_symbol3094z00zz__osz00 = 
bstring_to_symbol(BGl_string3095z00zz__osz00); 
BGl_symbol3104z00zz__osz00 = 
bstring_to_symbol(BGl_string3105z00zz__osz00); 
BGl_symbol3127z00zz__osz00 = 
bstring_to_symbol(BGl_string3128z00zz__osz00); 
BGl_symbol3129z00zz__osz00 = 
bstring_to_symbol(BGl_string3130z00zz__osz00); 
BGl_symbol3131z00zz__osz00 = 
bstring_to_symbol(BGl_string3132z00zz__osz00); 
BGl_symbol3140z00zz__osz00 = 
bstring_to_symbol(BGl_string3141z00zz__osz00); 
BGl_symbol3143z00zz__osz00 = 
bstring_to_symbol(BGl_string3144z00zz__osz00); 
BGl_symbol3146z00zz__osz00 = 
bstring_to_symbol(BGl_string3147z00zz__osz00); 
BGl_symbol3171z00zz__osz00 = 
bstring_to_symbol(BGl_string3172z00zz__osz00); 
BGl_symbol3176z00zz__osz00 = 
bstring_to_symbol(BGl_string3177z00zz__osz00); 
BGl_symbol3180z00zz__osz00 = 
bstring_to_symbol(BGl_string3181z00zz__osz00); 
BGl_symbol3182z00zz__osz00 = 
bstring_to_symbol(BGl_string3183z00zz__osz00); 
BGl_symbol3190z00zz__osz00 = 
bstring_to_symbol(BGl_string3191z00zz__osz00); 
BGl_symbol3211z00zz__osz00 = 
bstring_to_symbol(BGl_string3212z00zz__osz00); 
BGl_symbol3222z00zz__osz00 = 
bstring_to_symbol(BGl_string3223z00zz__osz00); 
BGl_symbol3224z00zz__osz00 = 
bstring_to_symbol(BGl_string3225z00zz__osz00); 
BGl_symbol3226z00zz__osz00 = 
bstring_to_symbol(BGl_string3227z00zz__osz00); 
BGl_symbol3228z00zz__osz00 = 
bstring_to_symbol(BGl_string3229z00zz__osz00); 
BGl_symbol3230z00zz__osz00 = 
bstring_to_symbol(BGl_string3231z00zz__osz00); 
BGl_symbol3234z00zz__osz00 = 
bstring_to_symbol(BGl_string3235z00zz__osz00); 
BGl_symbol3236z00zz__osz00 = 
bstring_to_symbol(BGl_string3237z00zz__osz00); 
BGl_symbol3238z00zz__osz00 = 
bstring_to_symbol(BGl_string3239z00zz__osz00); 
BGl_symbol3240z00zz__osz00 = 
bstring_to_symbol(BGl_string3241z00zz__osz00); 
BGl_symbol3242z00zz__osz00 = 
bstring_to_symbol(BGl_string3243z00zz__osz00); 
BGl_symbol3244z00zz__osz00 = 
bstring_to_symbol(BGl_string3245z00zz__osz00); 
BGl_symbol3246z00zz__osz00 = 
bstring_to_symbol(BGl_string3247z00zz__osz00); 
BGl_symbol3248z00zz__osz00 = 
bstring_to_symbol(BGl_string3249z00zz__osz00); 
BGl_symbol3250z00zz__osz00 = 
bstring_to_symbol(BGl_string3251z00zz__osz00); 
BGl_symbol3252z00zz__osz00 = 
bstring_to_symbol(BGl_string3253z00zz__osz00); 
BGl_symbol3254z00zz__osz00 = 
bstring_to_symbol(BGl_string3255z00zz__osz00); 
BGl_symbol3256z00zz__osz00 = 
bstring_to_symbol(BGl_string3257z00zz__osz00); 
BGl_symbol3258z00zz__osz00 = 
bstring_to_symbol(BGl_string3259z00zz__osz00); 
BGl_symbol3260z00zz__osz00 = 
bstring_to_symbol(BGl_string3261z00zz__osz00); 
BGl_symbol3262z00zz__osz00 = 
bstring_to_symbol(BGl_string3263z00zz__osz00); 
BGl_symbol3264z00zz__osz00 = 
bstring_to_symbol(BGl_string3265z00zz__osz00); 
BGl_symbol3266z00zz__osz00 = 
bstring_to_symbol(BGl_string3267z00zz__osz00); 
BGl_symbol3268z00zz__osz00 = 
bstring_to_symbol(BGl_string3269z00zz__osz00); 
BGl_symbol3270z00zz__osz00 = 
bstring_to_symbol(BGl_string3271z00zz__osz00); 
BGl_symbol3272z00zz__osz00 = 
bstring_to_symbol(BGl_string3273z00zz__osz00); 
BGl_symbol3277z00zz__osz00 = 
bstring_to_symbol(BGl_string3278z00zz__osz00); 
BGl_symbol3279z00zz__osz00 = 
bstring_to_symbol(BGl_string3280z00zz__osz00); 
BGl_symbol3281z00zz__osz00 = 
bstring_to_symbol(BGl_string3282z00zz__osz00); 
BGl_symbol3283z00zz__osz00 = 
bstring_to_symbol(BGl_string3284z00zz__osz00); 
BGl_symbol3285z00zz__osz00 = 
bstring_to_symbol(BGl_string3286z00zz__osz00); 
BGl_symbol3287z00zz__osz00 = 
bstring_to_symbol(BGl_string3288z00zz__osz00); 
BGl_symbol3289z00zz__osz00 = 
bstring_to_symbol(BGl_string3290z00zz__osz00); 
return ( 
BGl_symbol3291z00zz__osz00 = 
bstring_to_symbol(BGl_string3292z00zz__osz00), BUNSPEC) ;} 

}



/* gc-roots-init */
obj_t BGl_gczd2rootszd2initz00zz__osz00()
{
{ /* Llib/os.scm 18 */
return 
bgl_gc_roots_register();} 

}



/* toplevel-init */
obj_t BGl_toplevelzd2initzd2zz__osz00()
{
{ /* Llib/os.scm 18 */
BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00 = BGl_list3086z00zz__osz00; 
BGl_za2defaultzd2javazd2packageza2z00zz__osz00 = BGl_string3088z00zz__osz00; 
return ( 
BGl_ioctlzd2requestszd2tablez00zz__osz00 = BNIL, BUNSPEC) ;} 

}



/* append-21011 */
obj_t BGl_appendzd221011zd2zz__osz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
{
{ 
{ 
obj_t BgL_headz00_1203;
BgL_headz00_1203 = 
MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2); 
{ 
obj_t BgL_prevz00_1204;obj_t BgL_tailz00_1205;
BgL_prevz00_1204 = BgL_headz00_1203; 
BgL_tailz00_1205 = BgL_l1z00_1; 
BgL_loopz00_1206:
if(
PAIRP(BgL_tailz00_1205))
{ 
obj_t BgL_newzd2prevzd2_1208;
BgL_newzd2prevzd2_1208 = 
MAKE_YOUNG_PAIR(
CAR(BgL_tailz00_1205), BgL_l2z00_2); 
SET_CDR(BgL_prevz00_1204, BgL_newzd2prevzd2_1208); 
{ 
obj_t BgL_tailz00_4557;obj_t BgL_prevz00_4556;
BgL_prevz00_4556 = BgL_newzd2prevzd2_1208; 
BgL_tailz00_4557 = 
CDR(BgL_tailz00_1205); 
BgL_tailz00_1205 = BgL_tailz00_4557; 
BgL_prevz00_1204 = BgL_prevz00_4556; 
goto BgL_loopz00_1206;} }  else 
{ BNIL; } 
return 
CDR(BgL_headz00_1203);} } } 

}



/* default-executable-name */
BGL_EXPORTED_DEF obj_t BGl_defaultzd2executablezd2namez00zz__osz00()
{
{ /* Llib/os.scm 293 */
return 
string_to_bstring(BGL_DEFAULT_A_OUT);} 

}



/* &default-executable-name */
obj_t BGl_z62defaultzd2executablezd2namez62zz__osz00(obj_t BgL_envz00_3889)
{
{ /* Llib/os.scm 293 */
return 
BGl_defaultzd2executablezd2namez00zz__osz00();} 

}



/* default-script-name */
BGL_EXPORTED_DEF obj_t BGl_defaultzd2scriptzd2namez00zz__osz00()
{
{ /* Llib/os.scm 294 */
return 
string_to_bstring(BGL_DEFAULT_A_BAT);} 

}



/* &default-script-name */
obj_t BGl_z62defaultzd2scriptzd2namez62zz__osz00(obj_t BgL_envz00_3890)
{
{ /* Llib/os.scm 294 */
return 
BGl_defaultzd2scriptzd2namez00zz__osz00();} 

}



/* os-class */
BGL_EXPORTED_DEF obj_t BGl_oszd2classzd2zz__osz00()
{
{ /* Llib/os.scm 295 */
return 
string_to_bstring(OS_CLASS);} 

}



/* &os-class */
obj_t BGl_z62oszd2classzb0zz__osz00(obj_t BgL_envz00_3891)
{
{ /* Llib/os.scm 295 */
return 
BGl_oszd2classzd2zz__osz00();} 

}



/* os-name */
BGL_EXPORTED_DEF obj_t BGl_oszd2namezd2zz__osz00()
{
{ /* Llib/os.scm 296 */
return 
string_to_bstring(OS_NAME);} 

}



/* &os-name */
obj_t BGl_z62oszd2namezb0zz__osz00(obj_t BgL_envz00_3892)
{
{ /* Llib/os.scm 296 */
return 
BGl_oszd2namezd2zz__osz00();} 

}



/* os-arch */
BGL_EXPORTED_DEF obj_t BGl_oszd2archzd2zz__osz00()
{
{ /* Llib/os.scm 297 */
return 
string_to_bstring(OS_ARCH);} 

}



/* &os-arch */
obj_t BGl_z62oszd2archzb0zz__osz00(obj_t BgL_envz00_3893)
{
{ /* Llib/os.scm 297 */
return 
BGl_oszd2archzd2zz__osz00();} 

}



/* os-version */
BGL_EXPORTED_DEF obj_t BGl_oszd2versionzd2zz__osz00()
{
{ /* Llib/os.scm 298 */
return 
string_to_bstring(OS_VERSION);} 

}



/* &os-version */
obj_t BGl_z62oszd2versionzb0zz__osz00(obj_t BgL_envz00_3894)
{
{ /* Llib/os.scm 298 */
return 
BGl_oszd2versionzd2zz__osz00();} 

}



/* os-tmp */
BGL_EXPORTED_DEF obj_t BGl_oszd2tmpzd2zz__osz00()
{
{ /* Llib/os.scm 299 */
return 
string_to_bstring(OS_TMP);} 

}



/* &os-tmp */
obj_t BGl_z62oszd2tmpzb0zz__osz00(obj_t BgL_envz00_3895)
{
{ /* Llib/os.scm 299 */
return 
BGl_oszd2tmpzd2zz__osz00();} 

}



/* file-separator */
BGL_EXPORTED_DEF obj_t BGl_filezd2separatorzd2zz__osz00()
{
{ /* Llib/os.scm 300 */
return 
BCHAR(FILE_SEPARATOR);} 

}



/* &file-separator */
obj_t BGl_z62filezd2separatorzb0zz__osz00(obj_t BgL_envz00_3896)
{
{ /* Llib/os.scm 300 */
return 
BGl_filezd2separatorzd2zz__osz00();} 

}



/* path-separator */
BGL_EXPORTED_DEF obj_t BGl_pathzd2separatorzd2zz__osz00()
{
{ /* Llib/os.scm 301 */
return 
BCHAR(PATH_SEPARATOR);} 

}



/* &path-separator */
obj_t BGl_z62pathzd2separatorzb0zz__osz00(obj_t BgL_envz00_3897)
{
{ /* Llib/os.scm 301 */
return 
BGl_pathzd2separatorzd2zz__osz00();} 

}



/* static-library-suffix */
BGL_EXPORTED_DEF obj_t BGl_staticzd2libraryzd2suffixz00zz__osz00()
{
{ /* Llib/os.scm 302 */
return 
string_to_bstring(STATIC_LIB_SUFFIX);} 

}



/* &static-library-suffix */
obj_t BGl_z62staticzd2libraryzd2suffixz62zz__osz00(obj_t BgL_envz00_3898)
{
{ /* Llib/os.scm 302 */
return 
BGl_staticzd2libraryzd2suffixz00zz__osz00();} 

}



/* shared-library-suffix */
BGL_EXPORTED_DEF obj_t BGl_sharedzd2libraryzd2suffixz00zz__osz00()
{
{ /* Llib/os.scm 303 */
return 
string_to_bstring(SHARED_LIB_SUFFIX);} 

}



/* &shared-library-suffix */
obj_t BGl_z62sharedzd2libraryzd2suffixz62zz__osz00(obj_t BgL_envz00_3899)
{
{ /* Llib/os.scm 303 */
return 
BGl_sharedzd2libraryzd2suffixz00zz__osz00();} 

}



/* os-charset */
BGL_EXPORTED_DEF obj_t BGl_oszd2charsetzd2zz__osz00()
{
{ /* Llib/os.scm 308 */
{ /* Llib/os.scm 310 */
obj_t BgL_g1039z00_1211;
BgL_g1039z00_1211 = 
BGl_getenvz00zz__osz00(BGl_string3089z00zz__osz00); 
if(
CBOOL(BgL_g1039z00_1211))
{ /* Llib/os.scm 310 */
return BgL_g1039z00_1211;}  else 
{ /* Llib/os.scm 311 */
obj_t BgL_g1041z00_1214;
BgL_g1041z00_1214 = 
BGl_getenvz00zz__osz00(BGl_string3090z00zz__osz00); 
if(
CBOOL(BgL_g1041z00_1214))
{ /* Llib/os.scm 311 */
return BgL_g1041z00_1214;}  else 
{ /* Llib/os.scm 312 */
obj_t BgL_g1043z00_1217;
BgL_g1043z00_1217 = 
BGl_getenvz00zz__osz00(BGl_string3091z00zz__osz00); 
if(
CBOOL(BgL_g1043z00_1217))
{ /* Llib/os.scm 312 */
return BgL_g1043z00_1217;}  else 
{ /* Llib/os.scm 312 */
return 
string_to_bstring(OS_CHARSET);} } } } } 

}



/* &os-charset */
obj_t BGl_z62oszd2charsetzb0zz__osz00(obj_t BgL_envz00_3900)
{
{ /* Llib/os.scm 308 */
return 
BGl_oszd2charsetzd2zz__osz00();} 

}



/* command-line */
BGL_EXPORTED_DEF obj_t BGl_commandzd2linezd2zz__osz00()
{
{ /* Llib/os.scm 318 */
return command_line;} 

}



/* &command-line */
obj_t BGl_z62commandzd2linezb0zz__osz00(obj_t BgL_envz00_3901)
{
{ /* Llib/os.scm 318 */
return 
BGl_commandzd2linezd2zz__osz00();} 

}



/* executable-name */
BGL_EXPORTED_DEF char * BGl_executablezd2namezd2zz__osz00()
{
{ /* Llib/os.scm 324 */
return executable_name;} 

}



/* &executable-name */
obj_t BGl_z62executablezd2namezb0zz__osz00(obj_t BgL_envz00_3902)
{
{ /* Llib/os.scm 324 */
return 
string_to_bstring(
BGl_executablezd2namezd2zz__osz00());} 

}



/* signal */
BGL_EXPORTED_DEF obj_t BGl_signalz00zz__osz00(int BgL_numz00_3, obj_t BgL_procz00_4)
{
{ /* Llib/os.scm 330 */
if(
(BgL_procz00_4==BGl_symbol3092z00zz__osz00))
{ /* Llib/os.scm 332 */
return 
bgl_signal(BgL_numz00_3, BTRUE);}  else 
{ /* Llib/os.scm 332 */
if(
(BgL_procz00_4==BGl_symbol3094z00zz__osz00))
{ /* Llib/os.scm 334 */
return 
bgl_signal(BgL_numz00_3, BFALSE);}  else 
{ /* Llib/os.scm 336 */
bool_t BgL_test3534z00_4602;
{ /* Llib/os.scm 336 */
int BgL_arg1250z00_1226;
{ /* Llib/os.scm 336 */
int BgL_res2142z00_2391;
{ /* Llib/os.scm 336 */
obj_t BgL_procz00_2390;
if(
PROCEDUREP(BgL_procz00_4))
{ /* Llib/os.scm 336 */
BgL_procz00_2390 = BgL_procz00_4; }  else 
{ 
obj_t BgL_auxz00_4605;
BgL_auxz00_4605 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)13281)), BGl_string3097z00zz__osz00, BGl_string3098z00zz__osz00, BgL_procz00_4); 
FAILURE(BgL_auxz00_4605,BFALSE,BFALSE);} 
BgL_res2142z00_2391 = 
PROCEDURE_ARITY(BgL_procz00_2390); } 
BgL_arg1250z00_1226 = BgL_res2142z00_2391; } 
BgL_test3534z00_4602 = 
(
(long)(BgL_arg1250z00_1226)==((long)1)); } 
if(BgL_test3534z00_4602)
{ /* Llib/os.scm 336 */
if(
(
(long)(BgL_numz00_3)<((long)0)))
{ /* Llib/os.scm 338 */
return BUNSPEC;}  else 
{ /* Llib/os.scm 338 */
if(
(
(long)(BgL_numz00_3)>((long)31)))
{ /* Llib/os.scm 340 */
return 
BGl_errorz00zz__errorz00(BGl_string3097z00zz__osz00, BGl_string3099z00zz__osz00, 
BINT(BgL_numz00_3));}  else 
{ /* Llib/os.scm 340 */
return 
bgl_signal(BgL_numz00_3, BgL_procz00_4);} } }  else 
{ /* Llib/os.scm 336 */
return 
BGl_errorz00zz__errorz00(BGl_string3097z00zz__osz00, BGl_string3100z00zz__osz00, BgL_procz00_4);} } } } 

}



/* &signal */
obj_t BGl_z62signalz62zz__osz00(obj_t BgL_envz00_3903, obj_t BgL_numz00_3904, obj_t BgL_procz00_3905)
{
{ /* Llib/os.scm 330 */
{ /* Llib/os.scm 332 */
int BgL_auxz00_4622;
{ /* Llib/os.scm 332 */
obj_t BgL_tmpz00_4623;
if(
INTEGERP(BgL_numz00_3904))
{ /* Llib/os.scm 332 */
BgL_tmpz00_4623 = BgL_numz00_3904
; }  else 
{ 
obj_t BgL_auxz00_4626;
BgL_auxz00_4626 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)13150)), BGl_string3101z00zz__osz00, BGl_string3102z00zz__osz00, BgL_numz00_3904); 
FAILURE(BgL_auxz00_4626,BFALSE,BFALSE);} 
BgL_auxz00_4622 = 
CINT(BgL_tmpz00_4623); } 
return 
BGl_signalz00zz__osz00(BgL_auxz00_4622, BgL_procz00_3905);} } 

}



/* get-signal-handler */
BGL_EXPORTED_DEF obj_t BGl_getzd2signalzd2handlerz00zz__osz00(int BgL_numz00_5)
{
{ /* Llib/os.scm 348 */
{ /* Llib/os.scm 349 */
obj_t BgL_vz00_1227;
BgL_vz00_1227 = 
bgl_get_signal_handler(BgL_numz00_5); 
if(
(BgL_vz00_1227==BTRUE))
{ /* Llib/os.scm 351 */
return BGl_symbol3092z00zz__osz00;}  else 
{ /* Llib/os.scm 351 */
if(
(BgL_vz00_1227==BFALSE))
{ /* Llib/os.scm 352 */
return BGl_symbol3094z00zz__osz00;}  else 
{ /* Llib/os.scm 352 */
return BgL_vz00_1227;} } } } 

}



/* &get-signal-handler */
obj_t BGl_z62getzd2signalzd2handlerz62zz__osz00(obj_t BgL_envz00_3906, obj_t BgL_numz00_3907)
{
{ /* Llib/os.scm 348 */
{ /* Llib/os.scm 349 */
int BgL_auxz00_4637;
{ /* Llib/os.scm 349 */
obj_t BgL_tmpz00_4638;
if(
INTEGERP(BgL_numz00_3907))
{ /* Llib/os.scm 349 */
BgL_tmpz00_4638 = BgL_numz00_3907
; }  else 
{ 
obj_t BgL_auxz00_4641;
BgL_auxz00_4641 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)13755)), BGl_string3103z00zz__osz00, BGl_string3102z00zz__osz00, BgL_numz00_3907); 
FAILURE(BgL_auxz00_4641,BFALSE,BFALSE);} 
BgL_auxz00_4637 = 
CINT(BgL_tmpz00_4638); } 
return 
BGl_getzd2signalzd2handlerz00zz__osz00(BgL_auxz00_4637);} } 

}



/* _getenv */
obj_t BGl__getenvz00zz__osz00(obj_t BgL_env1135z00_8, obj_t BgL_opt1134z00_7)
{
{ /* Llib/os.scm 358 */
{ /* Llib/os.scm 358 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1134z00_7)) { case ((long)0) : 

{ /* Llib/os.scm 358 */

return 
BGl_getenvz00zz__osz00(BFALSE);} break;case ((long)1) : 

{ /* Llib/os.scm 358 */
obj_t BgL_namez00_1234;
BgL_namez00_1234 = 
VECTOR_REF(BgL_opt1134z00_7,((long)0)); 
{ /* Llib/os.scm 358 */

return 
BGl_getenvz00zz__osz00(BgL_namez00_1234);} } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3104z00zz__osz00, BGl_string3106z00zz__osz00, 
BINT(
VECTOR_LENGTH(BgL_opt1134z00_7)));} } } } 

}



/* getenv */
BGL_EXPORTED_DEF obj_t BGl_getenvz00zz__osz00(obj_t BgL_namez00_6)
{
{ /* Llib/os.scm 358 */
if(
STRINGP(BgL_namez00_6))
{ /* Llib/os.scm 359 */
{ /* Llib/os.scm 361 */
bool_t BgL_test3543z00_4657;
{ /* Llib/os.scm 361 */
bool_t BgL_test3544z00_4658;
{ /* Llib/os.scm 361 */
bool_t BgL_res2151z00_2415;
{ /* Llib/os.scm 361 */
obj_t BgL_string1z00_2400;
BgL_string1z00_2400 = 
string_to_bstring(OS_CLASS); 
{ /* Llib/os.scm 361 */
long BgL_l1z00_2402;
BgL_l1z00_2402 = 
STRING_LENGTH(BgL_string1z00_2400); 
if(
(BgL_l1z00_2402==((long)5)))
{ /* Llib/os.scm 361 */
int BgL_arg1881z00_2405;
{ /* Llib/os.scm 361 */
char * BgL_auxz00_4665;char * BgL_tmpz00_4663;
BgL_auxz00_4665 = 
BSTRING_TO_STRING(BGl_string3107z00zz__osz00); 
BgL_tmpz00_4663 = 
BSTRING_TO_STRING(BgL_string1z00_2400); 
BgL_arg1881z00_2405 = 
memcmp(BgL_tmpz00_4663, BgL_auxz00_4665, BgL_l1z00_2402); } 
BgL_res2151z00_2415 = 
(
(long)(BgL_arg1881z00_2405)==((long)0)); }  else 
{ /* Llib/os.scm 361 */
BgL_res2151z00_2415 = ((bool_t)0); } } } 
BgL_test3544z00_4658 = BgL_res2151z00_2415; } 
if(BgL_test3544z00_4658)
{ /* Llib/os.scm 361 */
bool_t BgL_res2156z00_2431;
{ /* Llib/os.scm 361 */
obj_t BgL_string1z00_2416;
BgL_string1z00_2416 = BgL_namez00_6; 
{ /* Llib/os.scm 361 */
long BgL_l1z00_2418;
BgL_l1z00_2418 = 
STRING_LENGTH(BgL_string1z00_2416); 
if(
(BgL_l1z00_2418==((long)4)))
{ /* Llib/os.scm 361 */
int BgL_arg1881z00_2421;
{ /* Llib/os.scm 361 */
char * BgL_auxz00_4675;char * BgL_tmpz00_4673;
BgL_auxz00_4675 = 
BSTRING_TO_STRING(BGl_string3108z00zz__osz00); 
BgL_tmpz00_4673 = 
BSTRING_TO_STRING(BgL_string1z00_2416); 
BgL_arg1881z00_2421 = 
memcmp(BgL_tmpz00_4673, BgL_auxz00_4675, BgL_l1z00_2418); } 
BgL_res2156z00_2431 = 
(
(long)(BgL_arg1881z00_2421)==((long)0)); }  else 
{ /* Llib/os.scm 361 */
BgL_res2156z00_2431 = ((bool_t)0); } } } 
BgL_test3543z00_4657 = BgL_res2156z00_2431; }  else 
{ /* Llib/os.scm 361 */
BgL_test3543z00_4657 = ((bool_t)0)
; } } 
if(BgL_test3543z00_4657)
{ /* Llib/os.scm 361 */
BgL_namez00_6 = BGl_string3109z00zz__osz00; }  else 
{ /* Llib/os.scm 361 */BFALSE; } } 
{ /* Llib/os.scm 363 */
bool_t BgL_test3547z00_4680;
{ /* Llib/os.scm 363 */
char * BgL_tmpz00_4681;
BgL_tmpz00_4681 = 
BSTRING_TO_STRING(BgL_namez00_6); 
BgL_test3547z00_4680 = 
(long)getenv(BgL_tmpz00_4681); } 
if(BgL_test3547z00_4680)
{ /* Llib/os.scm 364 */
char * BgL_resultz00_1244;
{ /* Llib/os.scm 364 */
char * BgL_tmpz00_4684;
BgL_tmpz00_4684 = 
BSTRING_TO_STRING(BgL_namez00_6); 
BgL_resultz00_1244 = 
(char *)getenv(BgL_tmpz00_4684); } 
{ /* Llib/os.scm 365 */
bool_t BgL_test3548z00_4687;
{ /* Llib/os.scm 365 */
bool_t BgL_res2157z00_2433;
BgL_res2157z00_2433 = 
STRING_PTR_NULL(BgL_resultz00_1244); 
BgL_test3548z00_4687 = BgL_res2157z00_2433; } 
if(BgL_test3548z00_4687)
{ /* Llib/os.scm 365 */
return BFALSE;}  else 
{ /* Llib/os.scm 365 */
return 
string_to_bstring(BgL_resultz00_1244);} } }  else 
{ /* Llib/os.scm 363 */
return BFALSE;} } }  else 
{ /* Llib/os.scm 359 */
return 
bgl_getenv_all();} } 

}



/* putenv */
BGL_EXPORTED_DEF obj_t BGl_putenvz00zz__osz00(char * BgL_stringz00_9, char * BgL_valz00_10)
{
{ /* Llib/os.scm 374 */
{ /* Llib/os.scm 375 */
bool_t BgL_test3549z00_4691;
{ /* Llib/os.scm 375 */
bool_t BgL_test3550z00_4692;
{ /* Llib/os.scm 375 */
bool_t BgL_res2162z00_2449;
{ /* Llib/os.scm 375 */
obj_t BgL_string1z00_2434;
BgL_string1z00_2434 = 
string_to_bstring(OS_CLASS); 
{ /* Llib/os.scm 375 */
long BgL_l1z00_2436;
BgL_l1z00_2436 = 
STRING_LENGTH(BgL_string1z00_2434); 
if(
(BgL_l1z00_2436==((long)5)))
{ /* Llib/os.scm 375 */
int BgL_arg1881z00_2439;
{ /* Llib/os.scm 375 */
char * BgL_auxz00_4699;char * BgL_tmpz00_4697;
BgL_auxz00_4699 = 
BSTRING_TO_STRING(BGl_string3107z00zz__osz00); 
BgL_tmpz00_4697 = 
BSTRING_TO_STRING(BgL_string1z00_2434); 
BgL_arg1881z00_2439 = 
memcmp(BgL_tmpz00_4697, BgL_auxz00_4699, BgL_l1z00_2436); } 
BgL_res2162z00_2449 = 
(
(long)(BgL_arg1881z00_2439)==((long)0)); }  else 
{ /* Llib/os.scm 375 */
BgL_res2162z00_2449 = ((bool_t)0); } } } 
BgL_test3550z00_4692 = BgL_res2162z00_2449; } 
if(BgL_test3550z00_4692)
{ /* Llib/os.scm 376 */
bool_t BgL_res2167z00_2465;
{ /* Llib/os.scm 376 */
obj_t BgL_string1z00_2450;
BgL_string1z00_2450 = 
string_to_bstring(BgL_stringz00_9); 
{ /* Llib/os.scm 376 */
long BgL_l1z00_2452;
BgL_l1z00_2452 = 
STRING_LENGTH(BgL_string1z00_2450); 
if(
(BgL_l1z00_2452==((long)4)))
{ /* Llib/os.scm 376 */
int BgL_arg1881z00_2455;
{ /* Llib/os.scm 376 */
char * BgL_auxz00_4710;char * BgL_tmpz00_4708;
BgL_auxz00_4710 = 
BSTRING_TO_STRING(BGl_string3108z00zz__osz00); 
BgL_tmpz00_4708 = 
BSTRING_TO_STRING(BgL_string1z00_2450); 
BgL_arg1881z00_2455 = 
memcmp(BgL_tmpz00_4708, BgL_auxz00_4710, BgL_l1z00_2452); } 
BgL_res2167z00_2465 = 
(
(long)(BgL_arg1881z00_2455)==((long)0)); }  else 
{ /* Llib/os.scm 376 */
BgL_res2167z00_2465 = ((bool_t)0); } } } 
BgL_test3549z00_4691 = BgL_res2167z00_2465; }  else 
{ /* Llib/os.scm 375 */
BgL_test3549z00_4691 = ((bool_t)0)
; } } 
if(BgL_test3549z00_4691)
{ /* Llib/os.scm 375 */
BgL_stringz00_9 = 
BSTRING_TO_STRING(BGl_string3109z00zz__osz00); }  else 
{ /* Llib/os.scm 375 */BFALSE; } } 
{ /* Llib/os.scm 378 */
int BgL_arg1274z00_1252;
BgL_arg1274z00_1252 = 
bgl_setenv(BgL_stringz00_9, BgL_valz00_10); 
return 
BBOOL(
(
(long)(BgL_arg1274z00_1252)==((long)0)));} } 

}



/* &putenv */
obj_t BGl_z62putenvz62zz__osz00(obj_t BgL_envz00_3908, obj_t BgL_stringz00_3909, obj_t BgL_valz00_3910)
{
{ /* Llib/os.scm 374 */
{ /* Llib/os.scm 377 */
char * BgL_auxz00_4729;char * BgL_auxz00_4720;
{ /* Llib/os.scm 377 */
obj_t BgL_tmpz00_4730;
if(
STRINGP(BgL_valz00_3910))
{ /* Llib/os.scm 377 */
BgL_tmpz00_4730 = BgL_valz00_3910
; }  else 
{ 
obj_t BgL_auxz00_4733;
BgL_auxz00_4733 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)14778)), BGl_string3110z00zz__osz00, BGl_string3111z00zz__osz00, BgL_valz00_3910); 
FAILURE(BgL_auxz00_4733,BFALSE,BFALSE);} 
BgL_auxz00_4729 = 
BSTRING_TO_STRING(BgL_tmpz00_4730); } 
{ /* Llib/os.scm 377 */
obj_t BgL_tmpz00_4721;
if(
STRINGP(BgL_stringz00_3909))
{ /* Llib/os.scm 377 */
BgL_tmpz00_4721 = BgL_stringz00_3909
; }  else 
{ 
obj_t BgL_auxz00_4724;
BgL_auxz00_4724 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)14778)), BGl_string3110z00zz__osz00, BGl_string3111z00zz__osz00, BgL_stringz00_3909); 
FAILURE(BgL_auxz00_4724,BFALSE,BFALSE);} 
BgL_auxz00_4720 = 
BSTRING_TO_STRING(BgL_tmpz00_4721); } 
return 
BGl_putenvz00zz__osz00(BgL_auxz00_4720, BgL_auxz00_4729);} } 

}



/* system */
BGL_EXPORTED_DEF obj_t BGl_systemz00zz__osz00(obj_t BgL_stringsz00_11)
{
{ /* Llib/os.scm 383 */
if(
NULLP(BgL_stringsz00_11))
{ /* Llib/os.scm 385 */
return BFALSE;}  else 
{ /* Llib/os.scm 387 */
bool_t BgL_test3556z00_4741;
{ /* Llib/os.scm 387 */
obj_t BgL_tmpz00_4742;
{ /* Llib/os.scm 387 */
obj_t BgL_pairz00_2469;
if(
PAIRP(BgL_stringsz00_11))
{ /* Llib/os.scm 387 */
BgL_pairz00_2469 = BgL_stringsz00_11; }  else 
{ 
obj_t BgL_auxz00_4745;
BgL_auxz00_4745 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)15126)), BGl_string3112z00zz__osz00, BGl_string3113z00zz__osz00, BgL_stringsz00_11); 
FAILURE(BgL_auxz00_4745,BFALSE,BFALSE);} 
BgL_tmpz00_4742 = 
CDR(BgL_pairz00_2469); } 
BgL_test3556z00_4741 = 
NULLP(BgL_tmpz00_4742); } 
if(BgL_test3556z00_4741)
{ /* Llib/os.scm 388 */
obj_t BgL_arg1280z00_1256;
{ /* Llib/os.scm 388 */
obj_t BgL_pairz00_2471;
if(
PAIRP(BgL_stringsz00_11))
{ /* Llib/os.scm 388 */
BgL_pairz00_2471 = BgL_stringsz00_11; }  else 
{ 
obj_t BgL_auxz00_4753;
BgL_auxz00_4753 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)15158)), BGl_string3112z00zz__osz00, BGl_string3113z00zz__osz00, BgL_stringsz00_11); 
FAILURE(BgL_auxz00_4753,BFALSE,BFALSE);} 
BgL_arg1280z00_1256 = 
CAR(BgL_pairz00_2471); } 
{ /* Llib/os.scm 388 */
int BgL_tmpz00_4758;
{ /* Llib/os.scm 388 */
char * BgL_tmpz00_4759;
{ /* Llib/os.scm 388 */
obj_t BgL_tmpz00_4760;
if(
STRINGP(BgL_arg1280z00_1256))
{ /* Llib/os.scm 388 */
BgL_tmpz00_4760 = BgL_arg1280z00_1256
; }  else 
{ 
obj_t BgL_auxz00_4763;
BgL_auxz00_4763 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)15165)), BGl_string3112z00zz__osz00, BGl_string3111z00zz__osz00, BgL_arg1280z00_1256); 
FAILURE(BgL_auxz00_4763,BFALSE,BFALSE);} 
BgL_tmpz00_4759 = 
BSTRING_TO_STRING(BgL_tmpz00_4760); } 
BgL_tmpz00_4758 = 
system(BgL_tmpz00_4759); } 
return 
BINT(BgL_tmpz00_4758);} }  else 
{ /* Llib/os.scm 390 */
obj_t BgL_arg1281z00_1257;
BgL_arg1281z00_1257 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_stringsz00_11); 
{ /* Llib/os.scm 390 */
int BgL_tmpz00_4771;
{ /* Llib/os.scm 390 */
char * BgL_tmpz00_4772;
BgL_tmpz00_4772 = 
BSTRING_TO_STRING(BgL_arg1281z00_1257); 
BgL_tmpz00_4771 = 
system(BgL_tmpz00_4772); } 
return 
BINT(BgL_tmpz00_4771);} } } } 

}



/* &system */
obj_t BGl_z62systemz62zz__osz00(obj_t BgL_envz00_3911, obj_t BgL_stringsz00_3912)
{
{ /* Llib/os.scm 383 */
return 
BGl_systemz00zz__osz00(BgL_stringsz00_3912);} 

}



/* system->string */
BGL_EXPORTED_DEF obj_t BGl_systemzd2ze3stringz31zz__osz00(obj_t BgL_stringsz00_12)
{
{ /* Llib/os.scm 395 */
{ /* Llib/os.scm 396 */
obj_t BgL_pz00_1260;
{ /* Llib/os.scm 396 */
obj_t BgL_arg1286z00_1266;
{ /* Llib/os.scm 396 */
obj_t BgL_runner1289z00_1271;
{ /* Llib/os.scm 396 */
obj_t BgL_list1288z00_1270;
BgL_list1288z00_1270 = 
MAKE_YOUNG_PAIR(BgL_stringsz00_12, BNIL); 
BgL_runner1289z00_1271 = 
BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BGl_string3114z00zz__osz00, BgL_list1288z00_1270); } 
BgL_arg1286z00_1266 = 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_runner1289z00_1271); } 
{ /* Ieee/port.scm 440 */

BgL_pz00_1260 = 
BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(BgL_arg1286z00_1266, BTRUE, 
BINT(((long)5000000))); } } 
{ /* Llib/os.scm 397 */
obj_t BgL_exitd1046z00_1261;
BgL_exitd1046z00_1261 = 
BGL_EXITD_TOP_AS_OBJ(); 
{ /* Llib/os.scm 399 */
obj_t BgL_zc3z04anonymousza31285ze3z87_3913;
BgL_zc3z04anonymousza31285ze3z87_3913 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31285ze3ze5zz__osz00, 
(int)(((long)0)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31285ze3z87_3913, 
(int)(((long)0)), BgL_pz00_1260); 
BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1046z00_1261, BgL_zc3z04anonymousza31285ze3z87_3913); 
{ /* Llib/os.scm 398 */
obj_t BgL_tmp1048z00_1263;
BgL_tmp1048z00_1263 = 
BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_pz00_1260); 
BGl_exitdzd2popzd2protectz12z12zz__bexitz00(BgL_exitd1046z00_1261); 
{ /* Llib/os.scm 399 */
obj_t BgL_portz00_2473;
if(
INPUT_PORTP(BgL_pz00_1260))
{ /* Llib/os.scm 399 */
BgL_portz00_2473 = BgL_pz00_1260; }  else 
{ 
obj_t BgL_auxz00_4793;
BgL_auxz00_4793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)15620)), BGl_string3115z00zz__osz00, BGl_string3116z00zz__osz00, BgL_pz00_1260); 
FAILURE(BgL_auxz00_4793,BFALSE,BFALSE);} 
bgl_close_input_port(BgL_portz00_2473); } 
return BgL_tmp1048z00_1263;} } } } } 

}



/* &system->string */
obj_t BGl_z62systemzd2ze3stringz53zz__osz00(obj_t BgL_envz00_3914, obj_t BgL_stringsz00_3915)
{
{ /* Llib/os.scm 395 */
return 
BGl_systemzd2ze3stringz31zz__osz00(BgL_stringsz00_3915);} 

}



/* &<@anonymous:1285> */
obj_t BGl_z62zc3z04anonymousza31285ze3ze5zz__osz00(obj_t BgL_envz00_3916)
{
{ /* Llib/os.scm 397 */
{ /* Llib/os.scm 399 */
obj_t BgL_pz00_3917;
BgL_pz00_3917 = 
PROCEDURE_REF(BgL_envz00_3916, 
(int)(((long)0))); 
{ /* Llib/os.scm 399 */
obj_t BgL_portz00_4482;
if(
INPUT_PORTP(BgL_pz00_3917))
{ /* Llib/os.scm 399 */
BgL_portz00_4482 = BgL_pz00_3917; }  else 
{ 
obj_t BgL_auxz00_4803;
BgL_auxz00_4803 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)15620)), BGl_string3117z00zz__osz00, BGl_string3116z00zz__osz00, BgL_pz00_3917); 
FAILURE(BgL_auxz00_4803,BFALSE,BFALSE);} 
return 
bgl_close_input_port(BgL_portz00_4482);} } } 

}



/* date */
BGL_EXPORTED_DEF char * BGl_datez00zz__osz00()
{
{ /* Llib/os.scm 404 */
{ /* Llib/os.scm 405 */
char * BgL_dtz00_1272;
BgL_dtz00_1272 = 
c_date(); 
{ /* Llib/os.scm 405 */
long BgL_lenz00_1273;
BgL_lenz00_1273 = 
STRING_LENGTH(
string_to_bstring(BgL_dtz00_1272)); 
{ /* Llib/os.scm 406 */

{ /* Llib/os.scm 407 */
bool_t BgL_test3562z00_4811;
{ /* Llib/os.scm 407 */
unsigned char BgL_tmpz00_4812;
{ /* Llib/os.scm 407 */
obj_t BgL_s2621z00_4017;long BgL_i2622z00_4018;
BgL_s2621z00_4017 = 
string_to_bstring(BgL_dtz00_1272); 
BgL_i2622z00_4018 = 
(BgL_lenz00_1273-((long)1)); 
{ /* Llib/os.scm 407 */
long BgL_l2623z00_4019;
BgL_l2623z00_4019 = 
STRING_LENGTH(BgL_s2621z00_4017); 
if(
BOUND_CHECK(BgL_i2622z00_4018, BgL_l2623z00_4019))
{ /* Llib/os.scm 407 */
BgL_tmpz00_4812 = 
STRING_REF(BgL_s2621z00_4017, BgL_i2622z00_4018)
; }  else 
{ 
obj_t BgL_auxz00_4819;
BgL_auxz00_4819 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)15935)), BGl_string3118z00zz__osz00, BgL_s2621z00_4017, 
(int)(BgL_l2623z00_4019), 
(int)(BgL_i2622z00_4018)); 
FAILURE(BgL_auxz00_4819,BFALSE,BFALSE);} } } 
BgL_test3562z00_4811 = 
(BgL_tmpz00_4812==((unsigned char)10)); } 
if(BgL_test3562z00_4811)
{ /* Llib/os.scm 408 */
long BgL_arg1295z00_1277;
BgL_arg1295z00_1277 = 
(BgL_lenz00_1273-((long)1)); 
return 
BSTRING_TO_STRING(
BGl_substringz00zz__r4_strings_6_7z00(
string_to_bstring(BgL_dtz00_1272), ((long)0), BgL_arg1295z00_1277));}  else 
{ /* Llib/os.scm 407 */
return BgL_dtz00_1272;} } } } } } 

}



/* &date */
obj_t BGl_z62datez62zz__osz00(obj_t BgL_envz00_3918)
{
{ /* Llib/os.scm 404 */
return 
string_to_bstring(
BGl_datez00zz__osz00());} 

}



/* chdir */
BGL_EXPORTED_DEF bool_t BGl_chdirz00zz__osz00(char * BgL_dirnamez00_13)
{
{ /* Llib/os.scm 414 */
if(
chdir(BgL_dirnamez00_13))
{ /* Llib/os.scm 415 */
return ((bool_t)0);}  else 
{ /* Llib/os.scm 415 */
return ((bool_t)1);} } 

}



/* &chdir */
obj_t BGl_z62chdirz62zz__osz00(obj_t BgL_envz00_3919, obj_t BgL_dirnamez00_3920)
{
{ /* Llib/os.scm 414 */
{ /* Llib/os.scm 415 */
bool_t BgL_tmpz00_4834;
{ /* Llib/os.scm 415 */
char * BgL_auxz00_4835;
{ /* Llib/os.scm 415 */
obj_t BgL_tmpz00_4836;
if(
STRINGP(BgL_dirnamez00_3920))
{ /* Llib/os.scm 415 */
BgL_tmpz00_4836 = BgL_dirnamez00_3920
; }  else 
{ 
obj_t BgL_auxz00_4839;
BgL_auxz00_4839 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)16272)), BGl_string3119z00zz__osz00, BGl_string3111z00zz__osz00, BgL_dirnamez00_3920); 
FAILURE(BgL_auxz00_4839,BFALSE,BFALSE);} 
BgL_auxz00_4835 = 
BSTRING_TO_STRING(BgL_tmpz00_4836); } 
BgL_tmpz00_4834 = 
BGl_chdirz00zz__osz00(BgL_auxz00_4835); } 
return 
BBOOL(BgL_tmpz00_4834);} } 

}



/* pwd */
BGL_EXPORTED_DEF obj_t BGl_pwdz00zz__osz00()
{
{ /* Llib/os.scm 420 */
{ /* Llib/os.scm 421 */
obj_t BgL_stringz00_1281;
{ /* Ieee/string.scm 168 */

BgL_stringz00_1281 = 
make_string(((long)1024), ((unsigned char)' ')); } 
{ /* Llib/os.scm 422 */
char * BgL_tmpz00_4847;
{ /* Llib/os.scm 422 */
int BgL_auxz00_4850;char * BgL_tmpz00_4848;
BgL_auxz00_4850 = 
(int)(((long)1024)); 
BgL_tmpz00_4848 = 
BSTRING_TO_STRING(BgL_stringz00_1281); 
BgL_tmpz00_4847 = 
(char *)(long)getcwd(BgL_tmpz00_4848, BgL_auxz00_4850); } 
return 
string_to_bstring(BgL_tmpz00_4847);} } } 

}



/* &pwd */
obj_t BGl_z62pwdz62zz__osz00(obj_t BgL_envz00_3921)
{
{ /* Llib/os.scm 420 */
return 
BGl_pwdz00zz__osz00();} 

}



/* basename */
BGL_EXPORTED_DEF obj_t BGl_basenamez00zz__osz00(obj_t BgL_stringz00_14)
{
{ /* Llib/os.scm 427 */
{ /* Llib/os.scm 428 */
bool_t BgL_test3566z00_4855;
{ /* Llib/os.scm 428 */
bool_t BgL_res2181z00_2506;
{ /* Llib/os.scm 428 */
obj_t BgL_string1z00_2491;
BgL_string1z00_2491 = 
string_to_bstring(OS_CLASS); 
{ /* Llib/os.scm 428 */
long BgL_l1z00_2493;
BgL_l1z00_2493 = 
STRING_LENGTH(BgL_string1z00_2491); 
if(
(BgL_l1z00_2493==((long)5)))
{ /* Llib/os.scm 428 */
int BgL_arg1881z00_2496;
{ /* Llib/os.scm 428 */
char * BgL_auxz00_4862;char * BgL_tmpz00_4860;
BgL_auxz00_4862 = 
BSTRING_TO_STRING(BGl_string3120z00zz__osz00); 
BgL_tmpz00_4860 = 
BSTRING_TO_STRING(BgL_string1z00_2491); 
BgL_arg1881z00_2496 = 
memcmp(BgL_tmpz00_4860, BgL_auxz00_4862, BgL_l1z00_2493); } 
BgL_res2181z00_2506 = 
(
(long)(BgL_arg1881z00_2496)==((long)0)); }  else 
{ /* Llib/os.scm 428 */
BgL_res2181z00_2506 = ((bool_t)0); } } } 
BgL_test3566z00_4855 = BgL_res2181z00_2506; } 
if(BgL_test3566z00_4855)
{ /* Llib/os.scm 428 */
return 
BGl_mingwzd2basenamezd2zz__osz00(BgL_stringz00_14);}  else 
{ /* Llib/os.scm 428 */
return 
BGl_defaultzd2basenamezd2zz__osz00(BgL_stringz00_14);} } } 

}



/* &basename */
obj_t BGl_z62basenamez62zz__osz00(obj_t BgL_envz00_3922, obj_t BgL_stringz00_3923)
{
{ /* Llib/os.scm 427 */
{ /* Llib/os.scm 428 */
obj_t BgL_auxz00_4869;
if(
STRINGP(BgL_stringz00_3923))
{ /* Llib/os.scm 428 */
BgL_auxz00_4869 = BgL_stringz00_3923
; }  else 
{ 
obj_t BgL_auxz00_4872;
BgL_auxz00_4872 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)16863)), BGl_string3121z00zz__osz00, BGl_string3111z00zz__osz00, BgL_stringz00_3923); 
FAILURE(BgL_auxz00_4872,BFALSE,BFALSE);} 
return 
BGl_basenamez00zz__osz00(BgL_auxz00_4869);} } 

}



/* mingw-basename */
obj_t BGl_mingwzd2basenamezd2zz__osz00(obj_t BgL_stringz00_15)
{
{ /* Llib/os.scm 435 */
{ /* Llib/os.scm 436 */
long BgL_nz00_1287;bool_t BgL_stopz00_1288;
BgL_nz00_1287 = 
STRING_LENGTH(BgL_stringz00_15); 
BgL_stopz00_1288 = ((bool_t)0); 
{ 
long BgL_iz00_1291;
BgL_iz00_1291 = 
(BgL_nz00_1287-((long)1)); 
BgL_zc3z04anonymousza31303ze3z87_1292:
if(
(
BBOOL(BgL_stopz00_1288)==BTRUE))
{ /* Llib/os.scm 438 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_15, 
(BgL_iz00_1291+((long)2)), BgL_nz00_1287);}  else 
{ /* Llib/os.scm 438 */
if(
(BgL_iz00_1291<((long)0)))
{ /* Llib/os.scm 441 */
BgL_stopz00_1288 = ((bool_t)1); }  else 
{ /* Llib/os.scm 443 */
bool_t BgL__ortest_1050z00_1296;
{ /* Llib/os.scm 443 */
unsigned char BgL_tmpz00_4885;
{ /* Llib/os.scm 443 */
long BgL_l2627z00_4023;
BgL_l2627z00_4023 = 
STRING_LENGTH(BgL_stringz00_15); 
if(
BOUND_CHECK(BgL_iz00_1291, BgL_l2627z00_4023))
{ /* Llib/os.scm 443 */
BgL_tmpz00_4885 = 
STRING_REF(BgL_stringz00_15, BgL_iz00_1291)
; }  else 
{ 
obj_t BgL_auxz00_4890;
BgL_auxz00_4890 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)17408)), BGl_string3118z00zz__osz00, BgL_stringz00_15, 
(int)(BgL_l2627z00_4023), 
(int)(BgL_iz00_1291)); 
FAILURE(BgL_auxz00_4890,BFALSE,BFALSE);} } 
BgL__ortest_1050z00_1296 = 
(BgL_tmpz00_4885==((unsigned char)'\\')); } 
if(BgL__ortest_1050z00_1296)
{ /* Llib/os.scm 443 */
BgL_stopz00_1288 = BgL__ortest_1050z00_1296; }  else 
{ /* Llib/os.scm 444 */
unsigned char BgL_tmpz00_4898;
{ /* Llib/os.scm 444 */
long BgL_l2631z00_4027;
BgL_l2631z00_4027 = 
STRING_LENGTH(BgL_stringz00_15); 
if(
BOUND_CHECK(BgL_iz00_1291, BgL_l2631z00_4027))
{ /* Llib/os.scm 444 */
BgL_tmpz00_4898 = 
STRING_REF(BgL_stringz00_15, BgL_iz00_1291)
; }  else 
{ 
obj_t BgL_auxz00_4903;
BgL_auxz00_4903 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)17451)), BGl_string3118z00zz__osz00, BgL_stringz00_15, 
(int)(BgL_l2631z00_4027), 
(int)(BgL_iz00_1291)); 
FAILURE(BgL_auxz00_4903,BFALSE,BFALSE);} } 
BgL_stopz00_1288 = 
(BgL_tmpz00_4898==((unsigned char)'/')); } } 
{ 
long BgL_iz00_4910;
BgL_iz00_4910 = 
(BgL_iz00_1291-((long)1)); 
BgL_iz00_1291 = BgL_iz00_4910; 
goto BgL_zc3z04anonymousza31303ze3z87_1292;} } } } } 

}



/* default-basename */
obj_t BGl_defaultzd2basenamezd2zz__osz00(obj_t BgL_stringz00_16)
{
{ /* Llib/os.scm 449 */
{ /* Llib/os.scm 450 */
long BgL_lenz00_1301;
BgL_lenz00_1301 = 
(
STRING_LENGTH(BgL_stringz00_16)-((long)1)); 
{ /* Llib/os.scm 450 */
long BgL_startz00_1302;
{ /* Llib/os.scm 451 */
bool_t BgL_test3574z00_4915;
if(
(BgL_lenz00_1301>((long)0)))
{ /* Llib/os.scm 452 */
unsigned char BgL_char2z00_2539;
BgL_char2z00_2539 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 452 */
unsigned char BgL_tmpz00_4919;
{ /* Llib/os.scm 452 */
long BgL_l2635z00_4031;
BgL_l2635z00_4031 = 
STRING_LENGTH(BgL_stringz00_16); 
if(
BOUND_CHECK(BgL_lenz00_1301, BgL_l2635z00_4031))
{ /* Llib/os.scm 452 */
BgL_tmpz00_4919 = 
STRING_REF(BgL_stringz00_16, BgL_lenz00_1301)
; }  else 
{ 
obj_t BgL_auxz00_4924;
BgL_auxz00_4924 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)17834)), BGl_string3118z00zz__osz00, BgL_stringz00_16, 
(int)(BgL_l2635z00_4031), 
(int)(BgL_lenz00_1301)); 
FAILURE(BgL_auxz00_4924,BFALSE,BFALSE);} } 
BgL_test3574z00_4915 = 
(BgL_tmpz00_4919==BgL_char2z00_2539); } }  else 
{ /* Llib/os.scm 451 */
BgL_test3574z00_4915 = ((bool_t)0)
; } 
if(BgL_test3574z00_4915)
{ /* Llib/os.scm 451 */
BgL_startz00_1302 = 
(BgL_lenz00_1301-((long)1)); }  else 
{ /* Llib/os.scm 451 */
BgL_startz00_1302 = BgL_lenz00_1301; } } 
{ /* Llib/os.scm 451 */

{ 
long BgL_indexz00_1304;
BgL_indexz00_1304 = BgL_startz00_1302; 
BgL_zc3z04anonymousza31311ze3z87_1305:
if(
(BgL_indexz00_1304==((long)-1)))
{ /* Llib/os.scm 458 */
return BgL_stringz00_16;}  else 
{ /* Llib/os.scm 460 */
bool_t BgL_test3578z00_4934;
{ /* Llib/os.scm 460 */
unsigned char BgL_char2z00_2549;
BgL_char2z00_2549 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 460 */
unsigned char BgL_tmpz00_4936;
{ /* Llib/os.scm 460 */
long BgL_l2639z00_4035;
BgL_l2639z00_4035 = 
STRING_LENGTH(BgL_stringz00_16); 
if(
BOUND_CHECK(BgL_indexz00_1304, BgL_l2639z00_4035))
{ /* Llib/os.scm 460 */
BgL_tmpz00_4936 = 
STRING_REF(BgL_stringz00_16, BgL_indexz00_1304)
; }  else 
{ 
obj_t BgL_auxz00_4941;
BgL_auxz00_4941 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)18011)), BGl_string3118z00zz__osz00, BgL_stringz00_16, 
(int)(BgL_l2639z00_4035), 
(int)(BgL_indexz00_1304)); 
FAILURE(BgL_auxz00_4941,BFALSE,BFALSE);} } 
BgL_test3578z00_4934 = 
(BgL_tmpz00_4936==BgL_char2z00_2549); } } 
if(BgL_test3578z00_4934)
{ /* Llib/os.scm 460 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_16, 
(BgL_indexz00_1304+((long)1)), 
(BgL_startz00_1302+((long)1)));}  else 
{ 
long BgL_indexz00_4951;
BgL_indexz00_4951 = 
(BgL_indexz00_1304-((long)1)); 
BgL_indexz00_1304 = BgL_indexz00_4951; 
goto BgL_zc3z04anonymousza31311ze3z87_1305;} } } } } } } 

}



/* prefix */
BGL_EXPORTED_DEF obj_t BGl_prefixz00zz__osz00(obj_t BgL_stringz00_17)
{
{ /* Llib/os.scm 468 */
{ /* Llib/os.scm 469 */
long BgL_lenz00_1320;
BgL_lenz00_1320 = 
(
STRING_LENGTH(BgL_stringz00_17)-((long)1)); 
{ 
long BgL_ez00_1322;long BgL_sz00_1323;
BgL_ez00_1322 = BgL_lenz00_1320; 
BgL_sz00_1323 = BgL_lenz00_1320; 
BgL_zc3z04anonymousza31326ze3z87_1324:
if(
(BgL_sz00_1323<=((long)0)))
{ /* Llib/os.scm 473 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_17, ((long)0), 
(((long)1)+BgL_ez00_1322));}  else 
{ /* Llib/os.scm 476 */
bool_t BgL_test3581z00_4959;
{ /* Llib/os.scm 476 */
bool_t BgL_test3582z00_4960;
{ /* Llib/os.scm 476 */
obj_t BgL_tmpz00_4961;
{ /* Llib/os.scm 476 */
long BgL_l2643z00_4039;
BgL_l2643z00_4039 = 
STRING_LENGTH(BgL_stringz00_17); 
if(
BOUND_CHECK(BgL_sz00_1323, BgL_l2643z00_4039))
{ /* Llib/os.scm 476 */
BgL_tmpz00_4961 = 
BCHAR(
STRING_REF(BgL_stringz00_17, BgL_sz00_1323))
; }  else 
{ 
obj_t BgL_auxz00_4967;
BgL_auxz00_4967 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)18632)), BGl_string3118z00zz__osz00, BgL_stringz00_17, 
(int)(BgL_l2643z00_4039), 
(int)(BgL_sz00_1323)); 
FAILURE(BgL_auxz00_4967,BFALSE,BFALSE);} } 
BgL_test3582z00_4960 = 
(BgL_tmpz00_4961==
BCHAR(((unsigned char)'.'))); } 
if(BgL_test3582z00_4960)
{ /* Llib/os.scm 476 */
BgL_test3581z00_4959 = 
(BgL_ez00_1322==BgL_lenz00_1320)
; }  else 
{ /* Llib/os.scm 476 */
BgL_test3581z00_4959 = ((bool_t)0)
; } } 
if(BgL_test3581z00_4959)
{ 
long BgL_sz00_4978;long BgL_ez00_4976;
BgL_ez00_4976 = 
(BgL_sz00_1323-((long)1)); 
BgL_sz00_4978 = 
(BgL_sz00_1323-((long)1)); 
BgL_sz00_1323 = BgL_sz00_4978; 
BgL_ez00_1322 = BgL_ez00_4976; 
goto BgL_zc3z04anonymousza31326ze3z87_1324;}  else 
{ 
long BgL_sz00_4980;
BgL_sz00_4980 = 
(BgL_sz00_1323-((long)1)); 
BgL_sz00_1323 = BgL_sz00_4980; 
goto BgL_zc3z04anonymousza31326ze3z87_1324;} } } } } 

}



/* &prefix */
obj_t BGl_z62prefixz62zz__osz00(obj_t BgL_envz00_3924, obj_t BgL_stringz00_3925)
{
{ /* Llib/os.scm 468 */
{ /* Llib/os.scm 469 */
obj_t BgL_auxz00_4982;
if(
STRINGP(BgL_stringz00_3925))
{ /* Llib/os.scm 469 */
BgL_auxz00_4982 = BgL_stringz00_3925
; }  else 
{ 
obj_t BgL_auxz00_4985;
BgL_auxz00_4985 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)18408)), BGl_string3122z00zz__osz00, BGl_string3111z00zz__osz00, BgL_stringz00_3925); 
FAILURE(BgL_auxz00_4985,BFALSE,BFALSE);} 
return 
BGl_prefixz00zz__osz00(BgL_auxz00_4982);} } 

}



/* dirname */
BGL_EXPORTED_DEF obj_t BGl_dirnamez00zz__osz00(obj_t BgL_stringz00_18)
{
{ /* Llib/os.scm 484 */
{ /* Llib/os.scm 485 */
bool_t BgL_test3585z00_4990;
{ /* Llib/os.scm 485 */
bool_t BgL_res2216z00_2594;
{ /* Llib/os.scm 485 */
obj_t BgL_string1z00_2579;
BgL_string1z00_2579 = 
string_to_bstring(OS_CLASS); 
{ /* Llib/os.scm 485 */
long BgL_l1z00_2581;
BgL_l1z00_2581 = 
STRING_LENGTH(BgL_string1z00_2579); 
if(
(BgL_l1z00_2581==((long)5)))
{ /* Llib/os.scm 485 */
int BgL_arg1881z00_2584;
{ /* Llib/os.scm 485 */
char * BgL_auxz00_4997;char * BgL_tmpz00_4995;
BgL_auxz00_4997 = 
BSTRING_TO_STRING(BGl_string3120z00zz__osz00); 
BgL_tmpz00_4995 = 
BSTRING_TO_STRING(BgL_string1z00_2579); 
BgL_arg1881z00_2584 = 
memcmp(BgL_tmpz00_4995, BgL_auxz00_4997, BgL_l1z00_2581); } 
BgL_res2216z00_2594 = 
(
(long)(BgL_arg1881z00_2584)==((long)0)); }  else 
{ /* Llib/os.scm 485 */
BgL_res2216z00_2594 = ((bool_t)0); } } } 
BgL_test3585z00_4990 = BgL_res2216z00_2594; } 
if(BgL_test3585z00_4990)
{ /* Llib/os.scm 485 */
return 
BGl_mingwzd2dirnamezd2zz__osz00(BgL_stringz00_18);}  else 
{ /* Llib/os.scm 485 */
return 
BGl_defaultzd2dirnamezd2zz__osz00(BgL_stringz00_18);} } } 

}



/* &dirname */
obj_t BGl_z62dirnamez62zz__osz00(obj_t BgL_envz00_3926, obj_t BgL_stringz00_3927)
{
{ /* Llib/os.scm 484 */
{ /* Llib/os.scm 485 */
obj_t BgL_auxz00_5004;
if(
STRINGP(BgL_stringz00_3927))
{ /* Llib/os.scm 485 */
BgL_auxz00_5004 = BgL_stringz00_3927
; }  else 
{ 
obj_t BgL_auxz00_5007;
BgL_auxz00_5007 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)19030)), BGl_string3123z00zz__osz00, BGl_string3111z00zz__osz00, BgL_stringz00_3927); 
FAILURE(BgL_auxz00_5007,BFALSE,BFALSE);} 
return 
BGl_dirnamez00zz__osz00(BgL_auxz00_5004);} } 

}



/* mingw-dirname */
obj_t BGl_mingwzd2dirnamezd2zz__osz00(obj_t BgL_stringz00_19)
{
{ /* Llib/os.scm 492 */
{ /* Llib/os.scm 493 */
long BgL_nz00_1341;bool_t BgL_stopz00_1342;
BgL_nz00_1341 = 
STRING_LENGTH(BgL_stringz00_19); 
BgL_stopz00_1342 = ((bool_t)0); 
{ 
long BgL_iz00_1345;
BgL_iz00_1345 = 
(BgL_nz00_1341-((long)1)); 
BgL_zc3z04anonymousza31343ze3z87_1346:
if(
(
BBOOL(BgL_stopz00_1342)==BTRUE))
{ /* Llib/os.scm 495 */
if(
(BgL_iz00_1345<((long)0)))
{ /* Llib/os.scm 497 */
return BGl_string3087z00zz__osz00;}  else 
{ /* Llib/os.scm 497 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_19, ((long)0), 
(BgL_iz00_1345+((long)1)));} }  else 
{ /* Llib/os.scm 495 */
if(
(BgL_iz00_1345<((long)0)))
{ /* Llib/os.scm 500 */
BgL_stopz00_1342 = ((bool_t)1); }  else 
{ /* Llib/os.scm 502 */
bool_t BgL__ortest_1052z00_1351;
{ /* Llib/os.scm 502 */
unsigned char BgL_tmpz00_5022;
{ /* Llib/os.scm 502 */
long BgL_l2647z00_4043;
BgL_l2647z00_4043 = 
STRING_LENGTH(BgL_stringz00_19); 
if(
BOUND_CHECK(BgL_iz00_1345, BgL_l2647z00_4043))
{ /* Llib/os.scm 502 */
BgL_tmpz00_5022 = 
STRING_REF(BgL_stringz00_19, BgL_iz00_1345)
; }  else 
{ 
obj_t BgL_auxz00_5027;
BgL_auxz00_5027 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)19606)), BGl_string3118z00zz__osz00, BgL_stringz00_19, 
(int)(BgL_l2647z00_4043), 
(int)(BgL_iz00_1345)); 
FAILURE(BgL_auxz00_5027,BFALSE,BFALSE);} } 
BgL__ortest_1052z00_1351 = 
(BgL_tmpz00_5022==((unsigned char)'\\')); } 
if(BgL__ortest_1052z00_1351)
{ /* Llib/os.scm 502 */
BgL_stopz00_1342 = BgL__ortest_1052z00_1351; }  else 
{ /* Llib/os.scm 503 */
unsigned char BgL_tmpz00_5035;
{ /* Llib/os.scm 503 */
long BgL_l2651z00_4047;
BgL_l2651z00_4047 = 
STRING_LENGTH(BgL_stringz00_19); 
if(
BOUND_CHECK(BgL_iz00_1345, BgL_l2651z00_4047))
{ /* Llib/os.scm 503 */
BgL_tmpz00_5035 = 
STRING_REF(BgL_stringz00_19, BgL_iz00_1345)
; }  else 
{ 
obj_t BgL_auxz00_5040;
BgL_auxz00_5040 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)19649)), BGl_string3118z00zz__osz00, BgL_stringz00_19, 
(int)(BgL_l2651z00_4047), 
(int)(BgL_iz00_1345)); 
FAILURE(BgL_auxz00_5040,BFALSE,BFALSE);} } 
BgL_stopz00_1342 = 
(BgL_tmpz00_5035==((unsigned char)'/')); } } 
{ 
long BgL_iz00_5047;
BgL_iz00_5047 = 
(BgL_iz00_1345-((long)1)); 
BgL_iz00_1345 = BgL_iz00_5047; 
goto BgL_zc3z04anonymousza31343ze3z87_1346;} } } } } 

}



/* default-dirname */
obj_t BGl_defaultzd2dirnamezd2zz__osz00(obj_t BgL_stringz00_20)
{
{ /* Llib/os.scm 508 */
{ /* Llib/os.scm 509 */
long BgL_lenz00_1356;
BgL_lenz00_1356 = 
(
STRING_LENGTH(BgL_stringz00_20)-((long)1)); 
if(
(BgL_lenz00_1356==((long)-1)))
{ /* Llib/os.scm 510 */
return BGl_string3087z00zz__osz00;}  else 
{ 
long BgL_readz00_1359;
BgL_readz00_1359 = BgL_lenz00_1356; 
BgL_zc3z04anonymousza31353ze3z87_1360:
if(
(BgL_readz00_1359==((long)0)))
{ /* Llib/os.scm 515 */
bool_t BgL_test3596z00_5056;
{ /* Llib/os.scm 515 */
unsigned char BgL_char2z00_2631;
BgL_char2z00_2631 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 515 */
unsigned char BgL_tmpz00_5058;
{ /* Llib/os.scm 515 */
long BgL_l2655z00_4051;
BgL_l2655z00_4051 = 
STRING_LENGTH(BgL_stringz00_20); 
if(
BOUND_CHECK(BgL_readz00_1359, BgL_l2655z00_4051))
{ /* Llib/os.scm 515 */
BgL_tmpz00_5058 = 
STRING_REF(BgL_stringz00_20, BgL_readz00_1359)
; }  else 
{ 
obj_t BgL_auxz00_5063;
BgL_auxz00_5063 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)20084)), BGl_string3118z00zz__osz00, BgL_stringz00_20, 
(int)(BgL_l2655z00_4051), 
(int)(BgL_readz00_1359)); 
FAILURE(BgL_auxz00_5063,BFALSE,BFALSE);} } 
BgL_test3596z00_5056 = 
(BgL_tmpz00_5058==BgL_char2z00_2631); } } 
if(BgL_test3596z00_5056)
{ /* Llib/os.scm 515 */
return 
make_string(((long)1), 
(unsigned char)(FILE_SEPARATOR));}  else 
{ /* Llib/os.scm 515 */
return BGl_string3087z00zz__osz00;} }  else 
{ /* Llib/os.scm 518 */
bool_t BgL_test3598z00_5072;
{ /* Llib/os.scm 518 */
unsigned char BgL_char2z00_2638;
BgL_char2z00_2638 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 518 */
unsigned char BgL_tmpz00_5074;
{ /* Llib/os.scm 518 */
long BgL_l2659z00_4055;
BgL_l2659z00_4055 = 
STRING_LENGTH(BgL_stringz00_20); 
if(
BOUND_CHECK(BgL_readz00_1359, BgL_l2659z00_4055))
{ /* Llib/os.scm 518 */
BgL_tmpz00_5074 = 
STRING_REF(BgL_stringz00_20, BgL_readz00_1359)
; }  else 
{ 
obj_t BgL_auxz00_5079;
BgL_auxz00_5079 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)20203)), BGl_string3118z00zz__osz00, BgL_stringz00_20, 
(int)(BgL_l2659z00_4055), 
(int)(BgL_readz00_1359)); 
FAILURE(BgL_auxz00_5079,BFALSE,BFALSE);} } 
BgL_test3598z00_5072 = 
(BgL_tmpz00_5074==BgL_char2z00_2638); } } 
if(BgL_test3598z00_5072)
{ /* Llib/os.scm 518 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_20, ((long)0), BgL_readz00_1359);}  else 
{ 
long BgL_readz00_5087;
BgL_readz00_5087 = 
(BgL_readz00_1359-((long)1)); 
BgL_readz00_1359 = BgL_readz00_5087; 
goto BgL_zc3z04anonymousza31353ze3z87_1360;} } } } } 

}



/* suffix */
BGL_EXPORTED_DEF obj_t BGl_suffixz00zz__osz00(obj_t BgL_stringz00_21)
{
{ /* Llib/os.scm 526 */
{ /* Llib/os.scm 527 */
long BgL_lenz00_1371;
BgL_lenz00_1371 = 
STRING_LENGTH(BgL_stringz00_21); 
{ /* Llib/os.scm 527 */
long BgL_lenzd21zd2_1372;
BgL_lenzd21zd2_1372 = 
(BgL_lenz00_1371-((long)1)); 
{ /* Llib/os.scm 528 */

{ 
long BgL_readz00_1374;
BgL_readz00_1374 = BgL_lenzd21zd2_1372; 
BgL_zc3z04anonymousza31364ze3z87_1375:
if(
(BgL_readz00_1374<((long)0)))
{ /* Llib/os.scm 531 */
return BGl_string3124z00zz__osz00;}  else 
{ /* Llib/os.scm 533 */
bool_t BgL_test3601z00_5093;
{ /* Llib/os.scm 533 */
unsigned char BgL_char2z00_2652;
BgL_char2z00_2652 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 533 */
unsigned char BgL_tmpz00_5095;
{ /* Llib/os.scm 533 */
long BgL_l2663z00_4059;
BgL_l2663z00_4059 = 
STRING_LENGTH(BgL_stringz00_21); 
if(
BOUND_CHECK(BgL_readz00_1374, BgL_l2663z00_4059))
{ /* Llib/os.scm 533 */
BgL_tmpz00_5095 = 
STRING_REF(BgL_stringz00_21, BgL_readz00_1374)
; }  else 
{ 
obj_t BgL_auxz00_5100;
BgL_auxz00_5100 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)20746)), BGl_string3118z00zz__osz00, BgL_stringz00_21, 
(int)(BgL_l2663z00_4059), 
(int)(BgL_readz00_1374)); 
FAILURE(BgL_auxz00_5100,BFALSE,BFALSE);} } 
BgL_test3601z00_5093 = 
(BgL_tmpz00_5095==BgL_char2z00_2652); } } 
if(BgL_test3601z00_5093)
{ /* Llib/os.scm 533 */
return BGl_string3124z00zz__osz00;}  else 
{ /* Llib/os.scm 535 */
bool_t BgL_test3603z00_5107;
{ /* Llib/os.scm 535 */
unsigned char BgL_tmpz00_5108;
{ /* Llib/os.scm 535 */
long BgL_l2667z00_4063;
BgL_l2667z00_4063 = 
STRING_LENGTH(BgL_stringz00_21); 
if(
BOUND_CHECK(BgL_readz00_1374, BgL_l2667z00_4063))
{ /* Llib/os.scm 535 */
BgL_tmpz00_5108 = 
STRING_REF(BgL_stringz00_21, BgL_readz00_1374)
; }  else 
{ 
obj_t BgL_auxz00_5113;
BgL_auxz00_5113 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)20826)), BGl_string3118z00zz__osz00, BgL_stringz00_21, 
(int)(BgL_l2667z00_4063), 
(int)(BgL_readz00_1374)); 
FAILURE(BgL_auxz00_5113,BFALSE,BFALSE);} } 
BgL_test3603z00_5107 = 
(BgL_tmpz00_5108==((unsigned char)'.')); } 
if(BgL_test3603z00_5107)
{ /* Llib/os.scm 535 */
if(
(BgL_readz00_1374==BgL_lenzd21zd2_1372))
{ /* Llib/os.scm 537 */
return BGl_string3124z00zz__osz00;}  else 
{ /* Llib/os.scm 537 */
return 
BGl_substringz00zz__r4_strings_6_7z00(BgL_stringz00_21, 
(BgL_readz00_1374+((long)1)), BgL_lenz00_1371);} }  else 
{ 
long BgL_readz00_5124;
BgL_readz00_5124 = 
(BgL_readz00_1374-((long)1)); 
BgL_readz00_1374 = BgL_readz00_5124; 
goto BgL_zc3z04anonymousza31364ze3z87_1375;} } } } } } } } 

}



/* &suffix */
obj_t BGl_z62suffixz62zz__osz00(obj_t BgL_envz00_3928, obj_t BgL_stringz00_3929)
{
{ /* Llib/os.scm 526 */
{ /* Llib/os.scm 527 */
obj_t BgL_auxz00_5126;
if(
STRINGP(BgL_stringz00_3929))
{ /* Llib/os.scm 527 */
BgL_auxz00_5126 = BgL_stringz00_3929
; }  else 
{ 
obj_t BgL_auxz00_5129;
BgL_auxz00_5129 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)20569)), BGl_string3125z00zz__osz00, BGl_string3111z00zz__osz00, BgL_stringz00_3929); 
FAILURE(BgL_auxz00_5129,BFALSE,BFALSE);} 
return 
BGl_suffixz00zz__osz00(BgL_auxz00_5126);} } 

}



/* chmod */
BGL_EXPORTED_DEF bool_t BGl_chmodz00zz__osz00(obj_t BgL_filez00_22, obj_t BgL_modez00_23)
{
{ /* Llib/os.scm 547 */
{ 
obj_t BgL_modez00_1388;bool_t BgL_readzf3zf3_1389;bool_t BgL_writezf3zf3_1390;bool_t BgL_execzf3zf3_1391;
{ /* Llib/os.scm 548 */
obj_t BgL_tmpz00_5134;
BgL_modez00_1388 = BgL_modez00_23; 
BgL_readzf3zf3_1389 = ((bool_t)0); 
BgL_writezf3zf3_1390 = ((bool_t)0); 
BgL_execzf3zf3_1391 = ((bool_t)0); 
BgL_zc3z04anonymousza31377ze3z87_1392:
if(
NULLP(BgL_modez00_1388))
{ /* Llib/os.scm 553 */
BgL_tmpz00_5134 = 
BBOOL(
bgl_chmod(
BSTRING_TO_STRING(BgL_filez00_22), BgL_readzf3zf3_1389, BgL_writezf3zf3_1390, BgL_execzf3zf3_1391))
; }  else 
{ /* Llib/os.scm 555 */
bool_t BgL_test3608z00_5140;
{ /* Llib/os.scm 555 */
obj_t BgL_tmpz00_5141;
{ /* Llib/os.scm 555 */
obj_t BgL_pairz00_2668;
if(
PAIRP(BgL_modez00_1388))
{ /* Llib/os.scm 555 */
BgL_pairz00_2668 = BgL_modez00_1388; }  else 
{ 
obj_t BgL_auxz00_5144;
BgL_auxz00_5144 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)21489)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_modez00_1388); 
FAILURE(BgL_auxz00_5144,BFALSE,BFALSE);} 
BgL_tmpz00_5141 = 
CAR(BgL_pairz00_2668); } 
BgL_test3608z00_5140 = 
INTEGERP(BgL_tmpz00_5141); } 
if(BgL_test3608z00_5140)
{ /* Llib/os.scm 556 */
obj_t BgL_arg1381z00_1396;
{ /* Llib/os.scm 556 */
obj_t BgL_pairz00_2670;
if(
PAIRP(BgL_modez00_1388))
{ /* Llib/os.scm 556 */
BgL_pairz00_2670 = BgL_modez00_1388; }  else 
{ 
obj_t BgL_auxz00_5152;
BgL_auxz00_5152 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)21522)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_modez00_1388); 
FAILURE(BgL_auxz00_5152,BFALSE,BFALSE);} 
BgL_arg1381z00_1396 = 
CAR(BgL_pairz00_2670); } 
{ /* Llib/os.scm 556 */
bool_t BgL_tmpz00_5157;
{ /* Llib/os.scm 556 */
int BgL_auxz00_5160;char * BgL_tmpz00_5158;
{ /* Llib/os.scm 556 */
obj_t BgL_tmpz00_5161;
if(
INTEGERP(BgL_arg1381z00_1396))
{ /* Llib/os.scm 556 */
BgL_tmpz00_5161 = BgL_arg1381z00_1396
; }  else 
{ 
obj_t BgL_auxz00_5164;
BgL_auxz00_5164 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)21526)), BGl_string3126z00zz__osz00, BGl_string3102z00zz__osz00, BgL_arg1381z00_1396); 
FAILURE(BgL_auxz00_5164,BFALSE,BFALSE);} 
BgL_auxz00_5160 = 
CINT(BgL_tmpz00_5161); } 
BgL_tmpz00_5158 = 
BSTRING_TO_STRING(BgL_filez00_22); 
BgL_tmpz00_5157 = 
chmod(BgL_tmpz00_5158, BgL_auxz00_5160); } 
BgL_tmpz00_5134 = 
BBOOL(BgL_tmpz00_5157); } }  else 
{ /* Llib/os.scm 557 */
bool_t BgL_test3612z00_5171;
{ /* Llib/os.scm 557 */
obj_t BgL_tmpz00_5172;
{ /* Llib/os.scm 557 */
obj_t BgL_pairz00_2671;
if(
PAIRP(BgL_modez00_1388))
{ /* Llib/os.scm 557 */
BgL_pairz00_2671 = BgL_modez00_1388; }  else 
{ 
obj_t BgL_auxz00_5175;
BgL_auxz00_5175 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)21543)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_modez00_1388); 
FAILURE(BgL_auxz00_5175,BFALSE,BFALSE);} 
BgL_tmpz00_5172 = 
CAR(BgL_pairz00_2671); } 
BgL_test3612z00_5171 = 
(BgL_tmpz00_5172==BGl_symbol3127z00zz__osz00); } 
if(BgL_test3612z00_5171)
{ /* Llib/os.scm 558 */
obj_t BgL_arg1384z00_1399;
{ /* Llib/os.scm 558 */
obj_t BgL_pairz00_2672;
if(
PAIRP(BgL_modez00_1388))
{ /* Llib/os.scm 558 */
BgL_pairz00_2672 = BgL_modez00_1388; }  else 
{ 
obj_t BgL_auxz00_5183;
BgL_auxz00_5183 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)21570)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_modez00_1388); 
FAILURE(BgL_auxz00_5183,BFALSE,BFALSE);} 
BgL_arg1384z00_1399 = 
CDR(BgL_pairz00_2672); } 
{ 
bool_t BgL_readzf3zf3_5189;obj_t BgL_modez00_5188;
BgL_modez00_5188 = BgL_arg1384z00_1399; 
BgL_readzf3zf3_5189 = ((bool_t)1); 
BgL_readzf3zf3_1389 = BgL_readzf3zf3_5189; 
BgL_modez00_1388 = BgL_modez00_5188; 
goto BgL_zc3z04anonymousza31377ze3z87_1392;} }  else 
{ /* Llib/os.scm 562 */
bool_t BgL_test3615z00_5190;
{ /* Llib/os.scm 562 */
obj_t BgL_tmpz00_5191;
{ /* Llib/os.scm 562 */
obj_t BgL_pairz00_2673;
if(
PAIRP(BgL_modez00_1388))
{ /* Llib/os.scm 562 */
BgL_pairz00_2673 = BgL_modez00_1388; }  else 
{ 
obj_t BgL_auxz00_5194;
BgL_auxz00_5194 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)21613)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_modez00_1388); 
FAILURE(BgL_auxz00_5194,BFALSE,BFALSE);} 
BgL_tmpz00_5191 = 
CAR(BgL_pairz00_2673); } 
BgL_test3615z00_5190 = 
(BgL_tmpz00_5191==BGl_symbol3129z00zz__osz00); } 
if(BgL_test3615z00_5190)
{ /* Llib/os.scm 563 */
obj_t BgL_arg1387z00_1402;
{ /* Llib/os.scm 563 */
obj_t BgL_pairz00_2674;
if(
PAIRP(BgL_modez00_1388))
{ /* Llib/os.scm 563 */
BgL_pairz00_2674 = BgL_modez00_1388; }  else 
{ 
obj_t BgL_auxz00_5202;
BgL_auxz00_5202 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)21641)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_modez00_1388); 
FAILURE(BgL_auxz00_5202,BFALSE,BFALSE);} 
BgL_arg1387z00_1402 = 
CDR(BgL_pairz00_2674); } 
{ 
bool_t BgL_writezf3zf3_5208;obj_t BgL_modez00_5207;
BgL_modez00_5207 = BgL_arg1387z00_1402; 
BgL_writezf3zf3_5208 = ((bool_t)1); 
BgL_writezf3zf3_1390 = BgL_writezf3zf3_5208; 
BgL_modez00_1388 = BgL_modez00_5207; 
goto BgL_zc3z04anonymousza31377ze3z87_1392;} }  else 
{ /* Llib/os.scm 567 */
bool_t BgL_test3618z00_5209;
{ /* Llib/os.scm 567 */
obj_t BgL_tmpz00_5210;
{ /* Llib/os.scm 567 */
obj_t BgL_pairz00_2675;
if(
PAIRP(BgL_modez00_1388))
{ /* Llib/os.scm 567 */
BgL_pairz00_2675 = BgL_modez00_1388; }  else 
{ 
obj_t BgL_auxz00_5213;
BgL_auxz00_5213 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)21683)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_modez00_1388); 
FAILURE(BgL_auxz00_5213,BFALSE,BFALSE);} 
BgL_tmpz00_5210 = 
CAR(BgL_pairz00_2675); } 
BgL_test3618z00_5209 = 
(BgL_tmpz00_5210==BGl_symbol3131z00zz__osz00); } 
if(BgL_test3618z00_5209)
{ /* Llib/os.scm 568 */
obj_t BgL_arg1390z00_1405;
{ /* Llib/os.scm 568 */
obj_t BgL_pairz00_2676;
if(
PAIRP(BgL_modez00_1388))
{ /* Llib/os.scm 568 */
BgL_pairz00_2676 = BgL_modez00_1388; }  else 
{ 
obj_t BgL_auxz00_5221;
BgL_auxz00_5221 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)21713)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_modez00_1388); 
FAILURE(BgL_auxz00_5221,BFALSE,BFALSE);} 
BgL_arg1390z00_1405 = 
CDR(BgL_pairz00_2676); } 
{ 
bool_t BgL_execzf3zf3_5227;obj_t BgL_modez00_5226;
BgL_modez00_5226 = BgL_arg1390z00_1405; 
BgL_execzf3zf3_5227 = ((bool_t)1); 
BgL_execzf3zf3_1391 = BgL_execzf3zf3_5227; 
BgL_modez00_1388 = BgL_modez00_5226; 
goto BgL_zc3z04anonymousza31377ze3z87_1392;} }  else 
{ /* Llib/os.scm 567 */
BgL_tmpz00_5134 = 
BGl_errorz00zz__errorz00(BGl_string3133z00zz__osz00, BGl_string3134z00zz__osz00, BgL_modez00_1388)
; } } } } } 
return 
CBOOL(BgL_tmpz00_5134);} } } 

}



/* &chmod */
obj_t BGl_z62chmodz62zz__osz00(obj_t BgL_envz00_3930, obj_t BgL_filez00_3931, obj_t BgL_modez00_3932)
{
{ /* Llib/os.scm 547 */
{ /* Llib/os.scm 553 */
bool_t BgL_tmpz00_5230;
{ /* Llib/os.scm 553 */
obj_t BgL_auxz00_5231;
if(
STRINGP(BgL_filez00_3931))
{ /* Llib/os.scm 553 */
BgL_auxz00_5231 = BgL_filez00_3931
; }  else 
{ 
obj_t BgL_auxz00_5234;
BgL_auxz00_5234 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)21420)), BGl_string3135z00zz__osz00, BGl_string3111z00zz__osz00, BgL_filez00_3931); 
FAILURE(BgL_auxz00_5234,BFALSE,BFALSE);} 
BgL_tmpz00_5230 = 
BGl_chmodz00zz__osz00(BgL_auxz00_5231, BgL_modez00_3932); } 
return 
BBOOL(BgL_tmpz00_5230);} } 

}



/* make-file-name */
BGL_EXPORTED_DEF obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t BgL_directoryz00_24, obj_t BgL_filez00_25)
{
{ /* Llib/os.scm 581 */
{ 
long BgL_ldirz00_1430;
{ /* Llib/os.scm 589 */
long BgL_ldirz00_1412;
BgL_ldirz00_1412 = 
STRING_LENGTH(BgL_directoryz00_24); 
{ /* Llib/os.scm 591 */
bool_t BgL_test3622z00_5241;
if(
(BgL_ldirz00_1412==((long)1)))
{ /* Llib/os.scm 591 */
unsigned char BgL_tmpz00_5244;
if(
BOUND_CHECK(((long)0), BgL_ldirz00_1412))
{ /* Llib/os.scm 591 */
BgL_tmpz00_5244 = 
STRING_REF(BgL_directoryz00_24, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_5248;
BgL_auxz00_5248 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)22647)), BGl_string3118z00zz__osz00, BgL_directoryz00_24, 
(int)(BgL_ldirz00_1412), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_5248,BFALSE,BFALSE);} 
BgL_test3622z00_5241 = 
(BgL_tmpz00_5244==((unsigned char)'.')); }  else 
{ /* Llib/os.scm 591 */
BgL_test3622z00_5241 = ((bool_t)0)
; } 
if(BgL_test3622z00_5241)
{ /* Llib/os.scm 591 */
return BgL_filez00_25;}  else 
{ /* Llib/os.scm 591 */
if(
(BgL_ldirz00_1412==((long)0)))
{ /* Llib/os.scm 594 */
long BgL_lfilez00_1417;
BgL_lfilez00_1417 = 
STRING_LENGTH(BgL_filez00_25); 
{ /* Llib/os.scm 594 */
long BgL_lenz00_1418;
BgL_lenz00_1418 = 
(((long)1)+BgL_lfilez00_1417); 
{ /* Llib/os.scm 595 */
obj_t BgL_strz00_1419;
BgL_strz00_1419 = 
make_string(BgL_lenz00_1418, 
(unsigned char)(FILE_SEPARATOR)); 
{ /* Llib/os.scm 596 */

blit_string(BgL_filez00_25, ((long)0), BgL_strz00_1419, ((long)1), BgL_lfilez00_1417); 
return BgL_strz00_1419;} } } }  else 
{ /* Llib/os.scm 599 */
bool_t BgL_test3626z00_5262;
{ /* Llib/os.scm 599 */
unsigned char BgL_char2z00_2721;
BgL_char2z00_2721 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 599 */
unsigned char BgL_tmpz00_5264;
{ /* Llib/os.scm 599 */
long BgL_i2674z00_4070;
BgL_i2674z00_4070 = 
(BgL_ldirz00_1412-((long)1)); 
{ /* Llib/os.scm 599 */
long BgL_l2675z00_4071;
BgL_l2675z00_4071 = 
STRING_LENGTH(BgL_directoryz00_24); 
if(
BOUND_CHECK(BgL_i2674z00_4070, BgL_l2675z00_4071))
{ /* Llib/os.scm 599 */
BgL_tmpz00_5264 = 
STRING_REF(BgL_directoryz00_24, BgL_i2674z00_4070)
; }  else 
{ 
obj_t BgL_auxz00_5270;
BgL_auxz00_5270 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)22882)), BGl_string3118z00zz__osz00, BgL_directoryz00_24, 
(int)(BgL_l2675z00_4071), 
(int)(BgL_i2674z00_4070)); 
FAILURE(BgL_auxz00_5270,BFALSE,BFALSE);} } } 
BgL_test3626z00_5262 = 
(BgL_tmpz00_5264==BgL_char2z00_2721); } } 
if(BgL_test3626z00_5262)
{ /* Llib/os.scm 600 */
long BgL_lfilez00_1423;
BgL_lfilez00_1423 = 
STRING_LENGTH(BgL_filez00_25); 
{ /* Llib/os.scm 600 */
long BgL_lenz00_1424;
BgL_lenz00_1424 = 
(BgL_ldirz00_1412+BgL_lfilez00_1423); 
{ /* Llib/os.scm 601 */
obj_t BgL_strz00_1425;
BgL_strz00_1425 = 
make_string(BgL_lenz00_1424, 
(unsigned char)(FILE_SEPARATOR)); 
{ /* Llib/os.scm 602 */

blit_string(BgL_directoryz00_24, ((long)0), BgL_strz00_1425, ((long)0), BgL_ldirz00_1412); 
blit_string(BgL_filez00_25, ((long)0), BgL_strz00_1425, BgL_ldirz00_1412, BgL_lfilez00_1423); 
return BgL_strz00_1425;} } } }  else 
{ /* Llib/os.scm 599 */
BgL_ldirz00_1430 = BgL_ldirz00_1412; 
{ /* Llib/os.scm 583 */
long BgL_lfilez00_1432;
BgL_lfilez00_1432 = 
STRING_LENGTH(BgL_filez00_25); 
{ /* Llib/os.scm 583 */
long BgL_lenz00_1433;
BgL_lenz00_1433 = 
(BgL_ldirz00_1430+
(BgL_lfilez00_1432+((long)1))); 
{ /* Llib/os.scm 584 */
obj_t BgL_strz00_1434;
BgL_strz00_1434 = 
make_string(BgL_lenz00_1433, 
(unsigned char)(FILE_SEPARATOR)); 
{ /* Llib/os.scm 585 */

blit_string(BgL_directoryz00_24, ((long)0), BgL_strz00_1434, ((long)0), BgL_ldirz00_1430); 
blit_string(BgL_filez00_25, ((long)0), BgL_strz00_1434, 
(((long)1)+BgL_ldirz00_1430), BgL_lfilez00_1432); 
return BgL_strz00_1434;} } } } } } } } } } } 

}



/* &make-file-name */
obj_t BGl_z62makezd2filezd2namez62zz__osz00(obj_t BgL_envz00_3933, obj_t BgL_directoryz00_3934, obj_t BgL_filez00_3935)
{
{ /* Llib/os.scm 581 */
{ /* Llib/os.scm 583 */
obj_t BgL_auxz00_5298;obj_t BgL_auxz00_5291;
if(
STRINGP(BgL_filez00_3935))
{ /* Llib/os.scm 583 */
BgL_auxz00_5298 = BgL_filez00_3935
; }  else 
{ 
obj_t BgL_auxz00_5301;
BgL_auxz00_5301 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)22335)), BGl_string3136z00zz__osz00, BGl_string3111z00zz__osz00, BgL_filez00_3935); 
FAILURE(BgL_auxz00_5301,BFALSE,BFALSE);} 
if(
STRINGP(BgL_directoryz00_3934))
{ /* Llib/os.scm 583 */
BgL_auxz00_5291 = BgL_directoryz00_3934
; }  else 
{ 
obj_t BgL_auxz00_5294;
BgL_auxz00_5294 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)22335)), BGl_string3136z00zz__osz00, BGl_string3111z00zz__osz00, BgL_directoryz00_3934); 
FAILURE(BgL_auxz00_5294,BFALSE,BFALSE);} 
return 
BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_5291, BgL_auxz00_5298);} } 

}



/* make-file-path */
BGL_EXPORTED_DEF obj_t BGl_makezd2filezd2pathz00zz__osz00(obj_t BgL_directoryz00_26, obj_t BgL_filez00_27, obj_t BgL_objz00_28)
{
{ /* Llib/os.scm 615 */
{ /* Llib/os.scm 616 */
bool_t BgL_test3630z00_5306;
if(
(
STRING_LENGTH(BgL_directoryz00_26)==((long)0)))
{ /* Llib/os.scm 616 */
BgL_test3630z00_5306 = 
NULLP(BgL_objz00_28)
; }  else 
{ /* Llib/os.scm 616 */
BgL_test3630z00_5306 = ((bool_t)0)
; } 
if(BgL_test3630z00_5306)
{ /* Llib/os.scm 616 */
return BgL_filez00_27;}  else 
{ /* Llib/os.scm 618 */
long BgL_ldirz00_1442;
BgL_ldirz00_1442 = 
STRING_LENGTH(BgL_directoryz00_26); 
{ /* Llib/os.scm 618 */
long BgL_lfilez00_1443;
BgL_lfilez00_1443 = 
STRING_LENGTH(BgL_filez00_27); 
{ /* Llib/os.scm 619 */
obj_t BgL_lenz00_1444;
{ /* Llib/os.scm 620 */
long BgL_g1053z00_1462;
BgL_g1053z00_1462 = 
(BgL_ldirz00_1442+
(((long)1)+BgL_lfilez00_1443)); 
{ 
obj_t BgL_objz00_1464;long BgL_lz00_1465;
BgL_objz00_1464 = BgL_objz00_28; 
BgL_lz00_1465 = BgL_g1053z00_1462; 
BgL_zc3z04anonymousza31425ze3z87_1466:
if(
NULLP(BgL_objz00_1464))
{ /* Llib/os.scm 623 */
BgL_lenz00_1444 = 
BINT(BgL_lz00_1465); }  else 
{ /* Llib/os.scm 625 */
bool_t BgL_test3633z00_5318;
{ /* Llib/os.scm 625 */
obj_t BgL_tmpz00_5319;
{ /* Llib/os.scm 625 */
obj_t BgL_pairz00_2752;
if(
PAIRP(BgL_objz00_1464))
{ /* Llib/os.scm 625 */
BgL_pairz00_2752 = BgL_objz00_1464; }  else 
{ 
obj_t BgL_auxz00_5322;
BgL_auxz00_5322 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)23992)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_objz00_1464); 
FAILURE(BgL_auxz00_5322,BFALSE,BFALSE);} 
BgL_tmpz00_5319 = 
CAR(BgL_pairz00_2752); } 
BgL_test3633z00_5318 = 
STRINGP(BgL_tmpz00_5319); } 
if(BgL_test3633z00_5318)
{ /* Llib/os.scm 629 */
obj_t BgL_arg1429z00_1470;long BgL_arg1430z00_1471;
{ /* Llib/os.scm 629 */
obj_t BgL_pairz00_2754;
if(
PAIRP(BgL_objz00_1464))
{ /* Llib/os.scm 629 */
BgL_pairz00_2754 = BgL_objz00_1464; }  else 
{ 
obj_t BgL_auxz00_5330;
BgL_auxz00_5330 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24095)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_objz00_1464); 
FAILURE(BgL_auxz00_5330,BFALSE,BFALSE);} 
BgL_arg1429z00_1470 = 
CDR(BgL_pairz00_2754); } 
{ /* Llib/os.scm 629 */
long BgL_tmpz00_5335;
{ /* Llib/os.scm 630 */
long BgL_tmpz00_5336;
{ /* Llib/os.scm 630 */
obj_t BgL_stringz00_2756;
{ /* Llib/os.scm 630 */
obj_t BgL_pairz00_2755;
if(
PAIRP(BgL_objz00_1464))
{ /* Llib/os.scm 630 */
BgL_pairz00_2755 = BgL_objz00_1464; }  else 
{ 
obj_t BgL_auxz00_5339;
BgL_auxz00_5339 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24144)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_objz00_1464); 
FAILURE(BgL_auxz00_5339,BFALSE,BFALSE);} 
{ /* Llib/os.scm 630 */
obj_t BgL_aux2897z00_4293;
BgL_aux2897z00_4293 = 
CAR(BgL_pairz00_2755); 
if(
STRINGP(BgL_aux2897z00_4293))
{ /* Llib/os.scm 630 */
BgL_stringz00_2756 = BgL_aux2897z00_4293; }  else 
{ 
obj_t BgL_auxz00_5346;
BgL_auxz00_5346 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24139)), BGl_string3126z00zz__osz00, BGl_string3111z00zz__osz00, BgL_aux2897z00_4293); 
FAILURE(BgL_auxz00_5346,BFALSE,BFALSE);} } } 
BgL_tmpz00_5336 = 
STRING_LENGTH(BgL_stringz00_2756); } 
BgL_tmpz00_5335 = 
(BgL_tmpz00_5336+BgL_lz00_1465); } 
BgL_arg1430z00_1471 = 
(((long)1)+BgL_tmpz00_5335); } 
{ 
long BgL_lz00_5354;obj_t BgL_objz00_5353;
BgL_objz00_5353 = BgL_arg1429z00_1470; 
BgL_lz00_5354 = BgL_arg1430z00_1471; 
BgL_lz00_1465 = BgL_lz00_5354; 
BgL_objz00_1464 = BgL_objz00_5353; 
goto BgL_zc3z04anonymousza31425ze3z87_1466;} }  else 
{ /* Llib/os.scm 627 */
obj_t BgL_arg1434z00_1475;
{ /* Llib/os.scm 627 */
obj_t BgL_pairz00_2763;
if(
PAIRP(BgL_objz00_1464))
{ /* Llib/os.scm 627 */
BgL_pairz00_2763 = BgL_objz00_1464; }  else 
{ 
obj_t BgL_auxz00_5357;
BgL_auxz00_5357 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24062)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_objz00_1464); 
FAILURE(BgL_auxz00_5357,BFALSE,BFALSE);} 
BgL_arg1434z00_1475 = 
CAR(BgL_pairz00_2763); } 
BgL_lenz00_1444 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3137z00zz__osz00, BGl_string3138z00zz__osz00, BgL_arg1434z00_1475); } } } } 
{ /* Llib/os.scm 620 */
obj_t BgL_strz00_1445;
{ /* Llib/os.scm 632 */
obj_t BgL_res2280z00_2765;
{ /* Llib/os.scm 632 */
long BgL_kz00_2764;
{ /* Llib/os.scm 632 */
obj_t BgL_tmpz00_5363;
if(
INTEGERP(BgL_lenz00_1444))
{ /* Llib/os.scm 632 */
BgL_tmpz00_5363 = BgL_lenz00_1444
; }  else 
{ 
obj_t BgL_auxz00_5366;
BgL_auxz00_5366 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24195)), BGl_string3137z00zz__osz00, BGl_string3102z00zz__osz00, BgL_lenz00_1444); 
FAILURE(BgL_auxz00_5366,BFALSE,BFALSE);} 
BgL_kz00_2764 = 
(long)CINT(BgL_tmpz00_5363); } 
BgL_res2280z00_2765 = 
make_string(BgL_kz00_2764, 
(unsigned char)(FILE_SEPARATOR)); } 
BgL_strz00_1445 = BgL_res2280z00_2765; } 
{ /* Llib/os.scm 632 */

blit_string(BgL_directoryz00_26, ((long)0), BgL_strz00_1445, ((long)0), BgL_ldirz00_1442); 
blit_string(BgL_filez00_27, ((long)0), BgL_strz00_1445, 
(((long)1)+BgL_ldirz00_1442), BgL_lfilez00_1443); 
{ /* Llib/os.scm 635 */
long BgL_g1054z00_1447;
BgL_g1054z00_1447 = 
(((long)1)+
(BgL_ldirz00_1442+BgL_lfilez00_1443)); 
{ 
obj_t BgL_objz00_1449;long BgL_wz00_1450;
BgL_objz00_1449 = BgL_objz00_28; 
BgL_wz00_1450 = BgL_g1054z00_1447; 
BgL_zc3z04anonymousza31415ze3z87_1451:
if(
NULLP(BgL_objz00_1449))
{ /* Llib/os.scm 637 */
return BgL_strz00_1445;}  else 
{ /* Llib/os.scm 639 */
long BgL_loz00_1453;
{ /* Llib/os.scm 639 */
obj_t BgL_stringz00_2782;
{ /* Llib/os.scm 639 */
obj_t BgL_pairz00_2781;
if(
PAIRP(BgL_objz00_1449))
{ /* Llib/os.scm 639 */
BgL_pairz00_2781 = BgL_objz00_1449; }  else 
{ 
obj_t BgL_auxz00_5382;
BgL_auxz00_5382 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24443)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_objz00_1449); 
FAILURE(BgL_auxz00_5382,BFALSE,BFALSE);} 
{ /* Llib/os.scm 639 */
obj_t BgL_aux2905z00_4301;
BgL_aux2905z00_4301 = 
CAR(BgL_pairz00_2781); 
if(
STRINGP(BgL_aux2905z00_4301))
{ /* Llib/os.scm 639 */
BgL_stringz00_2782 = BgL_aux2905z00_4301; }  else 
{ 
obj_t BgL_auxz00_5389;
BgL_auxz00_5389 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24438)), BGl_string3126z00zz__osz00, BGl_string3111z00zz__osz00, BgL_aux2905z00_4301); 
FAILURE(BgL_auxz00_5389,BFALSE,BFALSE);} } } 
BgL_loz00_1453 = 
STRING_LENGTH(BgL_stringz00_2782); } 
{ /* Llib/os.scm 640 */
obj_t BgL_arg1417z00_1454;long BgL_arg1418z00_1455;
{ /* Llib/os.scm 640 */
obj_t BgL_pairz00_2784;
if(
PAIRP(BgL_objz00_1449))
{ /* Llib/os.scm 640 */
BgL_pairz00_2784 = BgL_objz00_1449; }  else 
{ 
obj_t BgL_auxz00_5396;
BgL_auxz00_5396 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24479)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_objz00_1449); 
FAILURE(BgL_auxz00_5396,BFALSE,BFALSE);} 
BgL_arg1417z00_1454 = 
CAR(BgL_pairz00_2784); } 
BgL_arg1418z00_1455 = 
(((long)1)+BgL_wz00_1450); 
{ /* Llib/os.scm 640 */
obj_t BgL_s1z00_2787;
if(
STRINGP(BgL_arg1417z00_1454))
{ /* Llib/os.scm 640 */
BgL_s1z00_2787 = BgL_arg1417z00_1454; }  else 
{ 
obj_t BgL_auxz00_5404;
BgL_auxz00_5404 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24482)), BGl_string3126z00zz__osz00, BGl_string3111z00zz__osz00, BgL_arg1417z00_1454); 
FAILURE(BgL_auxz00_5404,BFALSE,BFALSE);} 
blit_string(BgL_s1z00_2787, ((long)0), BgL_strz00_1445, BgL_arg1418z00_1455, BgL_loz00_1453); } } 
{ /* Llib/os.scm 641 */
obj_t BgL_arg1419z00_1456;long BgL_arg1420z00_1457;
{ /* Llib/os.scm 641 */
obj_t BgL_pairz00_2791;
if(
PAIRP(BgL_objz00_1449))
{ /* Llib/os.scm 641 */
BgL_pairz00_2791 = BgL_objz00_1449; }  else 
{ 
obj_t BgL_auxz00_5411;
BgL_auxz00_5411 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24521)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_objz00_1449); 
FAILURE(BgL_auxz00_5411,BFALSE,BFALSE);} 
BgL_arg1419z00_1456 = 
CDR(BgL_pairz00_2791); } 
BgL_arg1420z00_1457 = 
(BgL_wz00_1450+
(BgL_loz00_1453+((long)1))); 
{ 
long BgL_wz00_5419;obj_t BgL_objz00_5418;
BgL_objz00_5418 = BgL_arg1419z00_1456; 
BgL_wz00_5419 = BgL_arg1420z00_1457; 
BgL_wz00_1450 = BgL_wz00_5419; 
BgL_objz00_1449 = BgL_objz00_5418; 
goto BgL_zc3z04anonymousza31415ze3z87_1451;} } } } } } } } } } } } 

}



/* &make-file-path */
obj_t BGl_z62makezd2filezd2pathz62zz__osz00(obj_t BgL_envz00_3936, obj_t BgL_directoryz00_3937, obj_t BgL_filez00_3938, obj_t BgL_objz00_3939)
{
{ /* Llib/os.scm 615 */
{ /* Llib/os.scm 616 */
obj_t BgL_auxz00_5427;obj_t BgL_auxz00_5420;
if(
STRINGP(BgL_filez00_3938))
{ /* Llib/os.scm 616 */
BgL_auxz00_5427 = BgL_filez00_3938
; }  else 
{ 
obj_t BgL_auxz00_5430;
BgL_auxz00_5430 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)23705)), BGl_string3139z00zz__osz00, BGl_string3111z00zz__osz00, BgL_filez00_3938); 
FAILURE(BgL_auxz00_5430,BFALSE,BFALSE);} 
if(
STRINGP(BgL_directoryz00_3937))
{ /* Llib/os.scm 616 */
BgL_auxz00_5420 = BgL_directoryz00_3937
; }  else 
{ 
obj_t BgL_auxz00_5423;
BgL_auxz00_5423 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)23705)), BGl_string3139z00zz__osz00, BGl_string3111z00zz__osz00, BgL_directoryz00_3937); 
FAILURE(BgL_auxz00_5423,BFALSE,BFALSE);} 
return 
BGl_makezd2filezd2pathz00zz__osz00(BgL_auxz00_5420, BgL_auxz00_5427, BgL_objz00_3939);} } 

}



/* make-static-lib-name */
BGL_EXPORTED_DEF obj_t BGl_makezd2staticzd2libzd2namezd2zz__osz00(obj_t BgL_libz00_29, obj_t BgL_backendz00_30)
{
{ /* Llib/os.scm 646 */
if(
(BgL_backendz00_30==BGl_symbol3140z00zz__osz00))
{ /* Llib/os.scm 649 */
bool_t BgL_test3649z00_5437;
{ /* Llib/os.scm 649 */
bool_t BgL_res2294z00_2814;
{ /* Llib/os.scm 649 */
obj_t BgL_string1z00_2799;
BgL_string1z00_2799 = 
string_to_bstring(OS_CLASS); 
{ /* Llib/os.scm 649 */
long BgL_l1z00_2801;
BgL_l1z00_2801 = 
STRING_LENGTH(BgL_string1z00_2799); 
if(
(BgL_l1z00_2801==((long)5)))
{ /* Llib/os.scm 649 */
int BgL_arg1881z00_2804;
{ /* Llib/os.scm 649 */
char * BgL_auxz00_5444;char * BgL_tmpz00_5442;
BgL_auxz00_5444 = 
BSTRING_TO_STRING(BGl_string3107z00zz__osz00); 
BgL_tmpz00_5442 = 
BSTRING_TO_STRING(BgL_string1z00_2799); 
BgL_arg1881z00_2804 = 
memcmp(BgL_tmpz00_5442, BgL_auxz00_5444, BgL_l1z00_2801); } 
BgL_res2294z00_2814 = 
(
(long)(BgL_arg1881z00_2804)==((long)0)); }  else 
{ /* Llib/os.scm 649 */
BgL_res2294z00_2814 = ((bool_t)0); } } } 
BgL_test3649z00_5437 = BgL_res2294z00_2814; } 
if(BgL_test3649z00_5437)
{ /* Llib/os.scm 649 */
return 
string_append_3(BgL_libz00_29, BGl_string3087z00zz__osz00, 
string_to_bstring(STATIC_LIB_SUFFIX));}  else 
{ /* Llib/os.scm 651 */
obj_t BgL_list1441z00_1485;
{ /* Llib/os.scm 651 */
obj_t BgL_arg1442z00_1486;
{ /* Llib/os.scm 651 */
obj_t BgL_arg1443z00_1487;
{ /* Llib/os.scm 651 */
obj_t BgL_arg1444z00_1488;
BgL_arg1444z00_1488 = 
MAKE_YOUNG_PAIR(
string_to_bstring(STATIC_LIB_SUFFIX), BNIL); 
BgL_arg1443z00_1487 = 
MAKE_YOUNG_PAIR(BGl_string3087z00zz__osz00, BgL_arg1444z00_1488); } 
BgL_arg1442z00_1486 = 
MAKE_YOUNG_PAIR(BgL_libz00_29, BgL_arg1443z00_1487); } 
BgL_list1441z00_1485 = 
MAKE_YOUNG_PAIR(BGl_string3142z00zz__osz00, BgL_arg1442z00_1486); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1441z00_1485);} }  else 
{ /* Llib/os.scm 647 */
if(
(BgL_backendz00_30==BGl_symbol3143z00zz__osz00))
{ /* Llib/os.scm 647 */
return 
string_append(BgL_libz00_29, BGl_string3145z00zz__osz00);}  else 
{ /* Llib/os.scm 647 */
if(
(BgL_backendz00_30==BGl_symbol3146z00zz__osz00))
{ /* Llib/os.scm 647 */
return 
string_append(BgL_libz00_29, BGl_string3148z00zz__osz00);}  else 
{ /* Llib/os.scm 647 */
return 
BGl_errorz00zz__errorz00(BGl_string3149z00zz__osz00, BGl_string3150z00zz__osz00, BgL_backendz00_30);} } } } 

}



/* &make-static-lib-name */
obj_t BGl_z62makezd2staticzd2libzd2namezb0zz__osz00(obj_t BgL_envz00_3940, obj_t BgL_libz00_3941, obj_t BgL_backendz00_3942)
{
{ /* Llib/os.scm 646 */
{ /* Llib/os.scm 647 */
obj_t BgL_auxz00_5471;obj_t BgL_auxz00_5464;
if(
SYMBOLP(BgL_backendz00_3942))
{ /* Llib/os.scm 647 */
BgL_auxz00_5471 = BgL_backendz00_3942
; }  else 
{ 
obj_t BgL_auxz00_5474;
BgL_auxz00_5474 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24821)), BGl_string3151z00zz__osz00, BGl_string3152z00zz__osz00, BgL_backendz00_3942); 
FAILURE(BgL_auxz00_5474,BFALSE,BFALSE);} 
if(
STRINGP(BgL_libz00_3941))
{ /* Llib/os.scm 647 */
BgL_auxz00_5464 = BgL_libz00_3941
; }  else 
{ 
obj_t BgL_auxz00_5467;
BgL_auxz00_5467 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)24821)), BGl_string3151z00zz__osz00, BGl_string3111z00zz__osz00, BgL_libz00_3941); 
FAILURE(BgL_auxz00_5467,BFALSE,BFALSE);} 
return 
BGl_makezd2staticzd2libzd2namezd2zz__osz00(BgL_auxz00_5464, BgL_auxz00_5471);} } 

}



/* make-shared-lib-name */
BGL_EXPORTED_DEF obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t BgL_libz00_31, obj_t BgL_backendz00_32)
{
{ /* Llib/os.scm 662 */
if(
(BgL_backendz00_32==BGl_symbol3140z00zz__osz00))
{ /* Llib/os.scm 665 */
bool_t BgL_test3656z00_5481;
{ /* Llib/os.scm 665 */
bool_t BgL_res2302z00_2836;
{ /* Llib/os.scm 665 */
obj_t BgL_string1z00_2821;
BgL_string1z00_2821 = 
string_to_bstring(OS_CLASS); 
{ /* Llib/os.scm 665 */
long BgL_l1z00_2823;
BgL_l1z00_2823 = 
STRING_LENGTH(BgL_string1z00_2821); 
if(
(BgL_l1z00_2823==((long)5)))
{ /* Llib/os.scm 665 */
int BgL_arg1881z00_2826;
{ /* Llib/os.scm 665 */
char * BgL_auxz00_5488;char * BgL_tmpz00_5486;
BgL_auxz00_5488 = 
BSTRING_TO_STRING(BGl_string3107z00zz__osz00); 
BgL_tmpz00_5486 = 
BSTRING_TO_STRING(BgL_string1z00_2821); 
BgL_arg1881z00_2826 = 
memcmp(BgL_tmpz00_5486, BgL_auxz00_5488, BgL_l1z00_2823); } 
BgL_res2302z00_2836 = 
(
(long)(BgL_arg1881z00_2826)==((long)0)); }  else 
{ /* Llib/os.scm 665 */
BgL_res2302z00_2836 = ((bool_t)0); } } } 
BgL_test3656z00_5481 = BgL_res2302z00_2836; } 
if(BgL_test3656z00_5481)
{ /* Llib/os.scm 665 */
return 
string_append_3(BgL_libz00_31, BGl_string3087z00zz__osz00, 
string_to_bstring(STATIC_LIB_SUFFIX));}  else 
{ /* Llib/os.scm 667 */
obj_t BgL_list1451z00_1496;
{ /* Llib/os.scm 667 */
obj_t BgL_arg1452z00_1497;
{ /* Llib/os.scm 667 */
obj_t BgL_arg1453z00_1498;
{ /* Llib/os.scm 667 */
obj_t BgL_arg1454z00_1499;
BgL_arg1454z00_1499 = 
MAKE_YOUNG_PAIR(
string_to_bstring(SHARED_LIB_SUFFIX), BNIL); 
BgL_arg1453z00_1498 = 
MAKE_YOUNG_PAIR(BGl_string3087z00zz__osz00, BgL_arg1454z00_1499); } 
BgL_arg1452z00_1497 = 
MAKE_YOUNG_PAIR(BgL_libz00_31, BgL_arg1453z00_1498); } 
BgL_list1451z00_1496 = 
MAKE_YOUNG_PAIR(BGl_string3142z00zz__osz00, BgL_arg1452z00_1497); } 
return 
BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1451z00_1496);} }  else 
{ /* Llib/os.scm 663 */
if(
(BgL_backendz00_32==BGl_symbol3143z00zz__osz00))
{ /* Llib/os.scm 663 */
return 
string_append(BgL_libz00_31, BGl_string3145z00zz__osz00);}  else 
{ /* Llib/os.scm 663 */
if(
(BgL_backendz00_32==BGl_symbol3146z00zz__osz00))
{ /* Llib/os.scm 663 */
return 
string_append(BgL_libz00_31, BGl_string3148z00zz__osz00);}  else 
{ /* Llib/os.scm 663 */
return 
BGl_errorz00zz__errorz00(BGl_string3153z00zz__osz00, BGl_string3150z00zz__osz00, BgL_backendz00_32);} } } } 

}



/* &make-shared-lib-name */
obj_t BGl_z62makezd2sharedzd2libzd2namezb0zz__osz00(obj_t BgL_envz00_3943, obj_t BgL_libz00_3944, obj_t BgL_backendz00_3945)
{
{ /* Llib/os.scm 662 */
{ /* Llib/os.scm 663 */
obj_t BgL_auxz00_5515;obj_t BgL_auxz00_5508;
if(
SYMBOLP(BgL_backendz00_3945))
{ /* Llib/os.scm 663 */
BgL_auxz00_5515 = BgL_backendz00_3945
; }  else 
{ 
obj_t BgL_auxz00_5518;
BgL_auxz00_5518 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)25477)), BGl_string3154z00zz__osz00, BGl_string3152z00zz__osz00, BgL_backendz00_3945); 
FAILURE(BgL_auxz00_5518,BFALSE,BFALSE);} 
if(
STRINGP(BgL_libz00_3944))
{ /* Llib/os.scm 663 */
BgL_auxz00_5508 = BgL_libz00_3944
; }  else 
{ 
obj_t BgL_auxz00_5511;
BgL_auxz00_5511 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)25477)), BGl_string3154z00zz__osz00, BGl_string3111z00zz__osz00, BgL_libz00_3944); 
FAILURE(BgL_auxz00_5511,BFALSE,BFALSE);} 
return 
BGl_makezd2sharedzd2libzd2namezd2zz__osz00(BgL_auxz00_5508, BgL_auxz00_5515);} } 

}



/* find-file/path */
BGL_EXPORTED_DEF obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t BgL_filezd2namezd2_33, obj_t BgL_pathz00_34)
{
{ /* Llib/os.scm 678 */
{ 
obj_t BgL_filezd2namezd2_1523;
if(
(
STRING_LENGTH(BgL_filezd2namezd2_33)==((long)0)))
{ /* Llib/os.scm 690 */
return BFALSE;}  else 
{ /* Llib/os.scm 692 */
bool_t BgL_test3663z00_5526;
{ /* Llib/os.scm 692 */
bool_t BgL_test3664z00_5527;
{ /* Llib/os.scm 692 */
unsigned char BgL_char2z00_2893;
BgL_char2z00_2893 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 692 */
unsigned char BgL_tmpz00_5529;
{ /* Llib/os.scm 692 */
long BgL_l2699z00_4095;
BgL_l2699z00_4095 = 
STRING_LENGTH(BgL_filezd2namezd2_33); 
if(
BOUND_CHECK(((long)0), BgL_l2699z00_4095))
{ /* Llib/os.scm 692 */
BgL_tmpz00_5529 = 
STRING_REF(BgL_filezd2namezd2_33, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_5534;
BgL_auxz00_5534 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)26593)), BGl_string3118z00zz__osz00, BgL_filezd2namezd2_33, 
(int)(BgL_l2699z00_4095), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_5534,BFALSE,BFALSE);} } 
BgL_test3664z00_5527 = 
(BgL_tmpz00_5529==BgL_char2z00_2893); } } 
if(BgL_test3664z00_5527)
{ /* Llib/os.scm 692 */
BgL_test3663z00_5526 = ((bool_t)1)
; }  else 
{ /* Llib/os.scm 692 */
BgL_filezd2namezd2_1523 = BgL_filezd2namezd2_33; 
{ /* Llib/os.scm 680 */
bool_t BgL_test3666z00_5541;
{ /* Llib/os.scm 680 */
bool_t BgL_res2309z00_2856;
{ /* Llib/os.scm 680 */
obj_t BgL_string1z00_2841;
BgL_string1z00_2841 = 
string_to_bstring(OS_CLASS); 
{ /* Llib/os.scm 680 */
long BgL_l1z00_2843;
BgL_l1z00_2843 = 
STRING_LENGTH(BgL_string1z00_2841); 
if(
(BgL_l1z00_2843==((long)5)))
{ /* Llib/os.scm 680 */
int BgL_arg1881z00_2846;
{ /* Llib/os.scm 680 */
char * BgL_auxz00_5548;char * BgL_tmpz00_5546;
BgL_auxz00_5548 = 
BSTRING_TO_STRING(BGl_string3120z00zz__osz00); 
BgL_tmpz00_5546 = 
BSTRING_TO_STRING(BgL_string1z00_2841); 
BgL_arg1881z00_2846 = 
memcmp(BgL_tmpz00_5546, BgL_auxz00_5548, BgL_l1z00_2843); } 
BgL_res2309z00_2856 = 
(
(long)(BgL_arg1881z00_2846)==((long)0)); }  else 
{ /* Llib/os.scm 680 */
BgL_res2309z00_2856 = ((bool_t)0); } } } 
BgL_test3666z00_5541 = BgL_res2309z00_2856; } 
if(BgL_test3666z00_5541)
{ /* Llib/os.scm 681 */
bool_t BgL__ortest_1055z00_1527;
{ /* Llib/os.scm 681 */
unsigned char BgL_tmpz00_5553;
{ /* Llib/os.scm 681 */
long BgL_l2679z00_4075;
BgL_l2679z00_4075 = 
STRING_LENGTH(BgL_filezd2namezd2_1523); 
if(
BOUND_CHECK(((long)0), BgL_l2679z00_4075))
{ /* Llib/os.scm 681 */
BgL_tmpz00_5553 = 
STRING_REF(BgL_filezd2namezd2_1523, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_5558;
BgL_auxz00_5558 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)26232)), BGl_string3118z00zz__osz00, BgL_filezd2namezd2_1523, 
(int)(BgL_l2679z00_4075), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_5558,BFALSE,BFALSE);} } 
BgL__ortest_1055z00_1527 = 
(BgL_tmpz00_5553==((unsigned char)'/')); } 
if(BgL__ortest_1055z00_1527)
{ /* Llib/os.scm 681 */
BgL_test3663z00_5526 = BgL__ortest_1055z00_1527
; }  else 
{ /* Llib/os.scm 682 */
bool_t BgL__ortest_1056z00_1528;
{ /* Llib/os.scm 682 */
unsigned char BgL_tmpz00_5566;
{ /* Llib/os.scm 682 */
long BgL_l2683z00_4079;
BgL_l2683z00_4079 = 
STRING_LENGTH(BgL_filezd2namezd2_1523); 
if(
BOUND_CHECK(((long)0), BgL_l2683z00_4079))
{ /* Llib/os.scm 682 */
BgL_tmpz00_5566 = 
STRING_REF(BgL_filezd2namezd2_1523, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_5571;
BgL_auxz00_5571 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)26277)), BGl_string3118z00zz__osz00, BgL_filezd2namezd2_1523, 
(int)(BgL_l2683z00_4079), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_5571,BFALSE,BFALSE);} } 
BgL__ortest_1056z00_1528 = 
(BgL_tmpz00_5566==((unsigned char)'\\')); } 
if(BgL__ortest_1056z00_1528)
{ /* Llib/os.scm 682 */
BgL_test3663z00_5526 = BgL__ortest_1056z00_1528
; }  else 
{ /* Llib/os.scm 682 */
if(
(
STRING_LENGTH(BgL_filezd2namezd2_1523)>((long)2)))
{ /* Llib/os.scm 684 */
bool_t BgL_test3673z00_5582;
{ /* Llib/os.scm 684 */
unsigned char BgL_tmpz00_5583;
{ /* Llib/os.scm 684 */
long BgL_l2687z00_4083;
BgL_l2687z00_4083 = 
STRING_LENGTH(BgL_filezd2namezd2_1523); 
if(
BOUND_CHECK(((long)1), BgL_l2687z00_4083))
{ /* Llib/os.scm 684 */
BgL_tmpz00_5583 = 
STRING_REF(BgL_filezd2namezd2_1523, ((long)1))
; }  else 
{ 
obj_t BgL_auxz00_5588;
BgL_auxz00_5588 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)26369)), BGl_string3118z00zz__osz00, BgL_filezd2namezd2_1523, 
(int)(BgL_l2687z00_4083), 
(int)(((long)1))); 
FAILURE(BgL_auxz00_5588,BFALSE,BFALSE);} } 
BgL_test3673z00_5582 = 
(BgL_tmpz00_5583==((unsigned char)':')); } 
if(BgL_test3673z00_5582)
{ /* Llib/os.scm 685 */
bool_t BgL__ortest_1058z00_1532;
{ /* Llib/os.scm 685 */
unsigned char BgL_tmpz00_5595;
{ /* Llib/os.scm 685 */
long BgL_l2691z00_4087;
BgL_l2691z00_4087 = 
STRING_LENGTH(BgL_filezd2namezd2_1523); 
if(
BOUND_CHECK(((long)2), BgL_l2691z00_4087))
{ /* Llib/os.scm 685 */
BgL_tmpz00_5595 = 
STRING_REF(BgL_filezd2namezd2_1523, ((long)2))
; }  else 
{ 
obj_t BgL_auxz00_5600;
BgL_auxz00_5600 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)26420)), BGl_string3118z00zz__osz00, BgL_filezd2namezd2_1523, 
(int)(BgL_l2691z00_4087), 
(int)(((long)2))); 
FAILURE(BgL_auxz00_5600,BFALSE,BFALSE);} } 
BgL__ortest_1058z00_1532 = 
(BgL_tmpz00_5595==((unsigned char)'/')); } 
if(BgL__ortest_1058z00_1532)
{ /* Llib/os.scm 685 */
BgL_test3663z00_5526 = BgL__ortest_1058z00_1532
; }  else 
{ /* Llib/os.scm 686 */
unsigned char BgL_tmpz00_5608;
{ /* Llib/os.scm 686 */
long BgL_l2695z00_4091;
BgL_l2695z00_4091 = 
STRING_LENGTH(BgL_filezd2namezd2_1523); 
if(
BOUND_CHECK(((long)2), BgL_l2695z00_4091))
{ /* Llib/os.scm 686 */
BgL_tmpz00_5608 = 
STRING_REF(BgL_filezd2namezd2_1523, ((long)2))
; }  else 
{ 
obj_t BgL_auxz00_5613;
BgL_auxz00_5613 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)26464)), BGl_string3118z00zz__osz00, BgL_filezd2namezd2_1523, 
(int)(BgL_l2695z00_4091), 
(int)(((long)2))); 
FAILURE(BgL_auxz00_5613,BFALSE,BFALSE);} } 
BgL_test3663z00_5526 = 
(BgL_tmpz00_5608==((unsigned char)'\\')); } }  else 
{ /* Llib/os.scm 684 */
BgL_test3663z00_5526 = ((bool_t)0)
; } }  else 
{ /* Llib/os.scm 683 */
BgL_test3663z00_5526 = ((bool_t)0)
; } } } }  else 
{ /* Llib/os.scm 680 */
BgL_test3663z00_5526 = ((bool_t)0)
; } } } } 
if(BgL_test3663z00_5526)
{ /* Llib/os.scm 692 */
if(
fexists(
BSTRING_TO_STRING(BgL_filezd2namezd2_33)))
{ /* Llib/os.scm 694 */
return BgL_filezd2namezd2_33;}  else 
{ /* Llib/os.scm 694 */
return BFALSE;} }  else 
{ 
obj_t BgL_pathz00_1512;
BgL_pathz00_1512 = BgL_pathz00_34; 
BgL_zc3z04anonymousza31465ze3z87_1513:
if(
NULLP(BgL_pathz00_1512))
{ /* Llib/os.scm 699 */
return BFALSE;}  else 
{ /* Llib/os.scm 701 */
obj_t BgL_fnamez00_1515;
{ /* Llib/os.scm 701 */
obj_t BgL_arg1469z00_1518;
{ /* Llib/os.scm 701 */
obj_t BgL_pairz00_2898;
if(
PAIRP(BgL_pathz00_1512))
{ /* Llib/os.scm 701 */
BgL_pairz00_2898 = BgL_pathz00_1512; }  else 
{ 
obj_t BgL_auxz00_5627;
BgL_auxz00_5627 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)26873)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_pathz00_1512); 
FAILURE(BgL_auxz00_5627,BFALSE,BFALSE);} 
BgL_arg1469z00_1518 = 
CAR(BgL_pairz00_2898); } 
{ /* Llib/os.scm 701 */
obj_t BgL_auxz00_5632;
if(
STRINGP(BgL_arg1469z00_1518))
{ /* Llib/os.scm 701 */
BgL_auxz00_5632 = BgL_arg1469z00_1518
; }  else 
{ 
obj_t BgL_auxz00_5635;
BgL_auxz00_5635 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)26877)), BGl_string3126z00zz__osz00, BGl_string3111z00zz__osz00, BgL_arg1469z00_1518); 
FAILURE(BgL_auxz00_5635,BFALSE,BFALSE);} 
BgL_fnamez00_1515 = 
BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_5632, BgL_filezd2namezd2_33); } } 
if(
fexists(
BSTRING_TO_STRING(BgL_fnamez00_1515)))
{ /* Llib/os.scm 702 */
return BgL_fnamez00_1515;}  else 
{ /* Llib/os.scm 704 */
obj_t BgL_arg1468z00_1517;
{ /* Llib/os.scm 704 */
obj_t BgL_pairz00_2901;
if(
PAIRP(BgL_pathz00_1512))
{ /* Llib/os.scm 704 */
BgL_pairz00_2901 = BgL_pathz00_1512; }  else 
{ 
obj_t BgL_auxz00_5645;
BgL_auxz00_5645 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)26951)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_pathz00_1512); 
FAILURE(BgL_auxz00_5645,BFALSE,BFALSE);} 
BgL_arg1468z00_1517 = 
CDR(BgL_pairz00_2901); } 
{ 
obj_t BgL_pathz00_5650;
BgL_pathz00_5650 = BgL_arg1468z00_1517; 
BgL_pathz00_1512 = BgL_pathz00_5650; 
goto BgL_zc3z04anonymousza31465ze3z87_1513;} } } } } } } 

}



/* &find-file/path */
obj_t BGl_z62findzd2filezf2pathz42zz__osz00(obj_t BgL_envz00_3946, obj_t BgL_filezd2namezd2_3947, obj_t BgL_pathz00_3948)
{
{ /* Llib/os.scm 678 */
{ /* Llib/os.scm 680 */
obj_t BgL_auxz00_5651;
if(
STRINGP(BgL_filezd2namezd2_3947))
{ /* Llib/os.scm 680 */
BgL_auxz00_5651 = BgL_filezd2namezd2_3947
; }  else 
{ 
obj_t BgL_auxz00_5654;
BgL_auxz00_5654 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)26183)), BGl_string3155z00zz__osz00, BGl_string3111z00zz__osz00, BgL_filezd2namezd2_3947); 
FAILURE(BgL_auxz00_5654,BFALSE,BFALSE);} 
return 
BGl_findzd2filezf2pathz20zz__osz00(BgL_auxz00_5651, BgL_pathz00_3948);} } 

}



/* file-name->list */
BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2ze3listze3zz__osz00(obj_t BgL_namez00_35)
{
{ /* Llib/os.scm 709 */
{ /* Llib/os.scm 710 */
long BgL_lenz00_1541;
BgL_lenz00_1541 = 
STRING_LENGTH(BgL_namez00_35); 
{ /* Llib/os.scm 711 */
bool_t BgL_test3685z00_5660;
if(
(BgL_lenz00_1541==((long)1)))
{ /* Llib/os.scm 711 */
unsigned char BgL_char2z00_2909;
BgL_char2z00_2909 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 711 */
unsigned char BgL_tmpz00_5664;
if(
BOUND_CHECK(((long)0), BgL_lenz00_1541))
{ /* Llib/os.scm 711 */
BgL_tmpz00_5664 = 
STRING_REF(BgL_namez00_35, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_5668;
BgL_auxz00_5668 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)27291)), BGl_string3118z00zz__osz00, BgL_namez00_35, 
(int)(BgL_lenz00_1541), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_5668,BFALSE,BFALSE);} 
BgL_test3685z00_5660 = 
(BgL_tmpz00_5664==BgL_char2z00_2909); } }  else 
{ /* Llib/os.scm 711 */
BgL_test3685z00_5660 = ((bool_t)0)
; } 
if(BgL_test3685z00_5660)
{ /* Llib/os.scm 712 */
obj_t BgL_list1491z00_1546;
BgL_list1491z00_1546 = 
MAKE_YOUNG_PAIR(BGl_string3124z00zz__osz00, BNIL); 
return BgL_list1491z00_1546;}  else 
{ 
long BgL_startz00_1549;long BgL_stopz00_1550;obj_t BgL_resz00_1551;
BgL_startz00_1549 = ((long)0); 
BgL_stopz00_1550 = ((long)0); 
BgL_resz00_1551 = BNIL; 
BgL_zc3z04anonymousza31492ze3z87_1552:
if(
(BgL_stopz00_1550==BgL_lenz00_1541))
{ /* Llib/os.scm 718 */
obj_t BgL_arg1494z00_1554;
BgL_arg1494z00_1554 = 
MAKE_YOUNG_PAIR(
BGl_substringz00zz__r4_strings_6_7z00(BgL_namez00_35, BgL_startz00_1549, BgL_stopz00_1550), BgL_resz00_1551); 
return 
bgl_reverse_bang(BgL_arg1494z00_1554);}  else 
{ /* Llib/os.scm 719 */
bool_t BgL_test3689z00_5681;
{ /* Llib/os.scm 719 */
unsigned char BgL_char2z00_2919;
BgL_char2z00_2919 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 719 */
unsigned char BgL_tmpz00_5683;
{ /* Llib/os.scm 719 */
long BgL_l2707z00_4103;
BgL_l2707z00_4103 = 
STRING_LENGTH(BgL_namez00_35); 
if(
BOUND_CHECK(BgL_stopz00_1550, BgL_l2707z00_4103))
{ /* Llib/os.scm 719 */
BgL_tmpz00_5683 = 
STRING_REF(BgL_namez00_35, BgL_stopz00_1550)
; }  else 
{ 
obj_t BgL_auxz00_5688;
BgL_auxz00_5688 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)27496)), BGl_string3118z00zz__osz00, BgL_namez00_35, 
(int)(BgL_l2707z00_4103), 
(int)(BgL_stopz00_1550)); 
FAILURE(BgL_auxz00_5688,BFALSE,BFALSE);} } 
BgL_test3689z00_5681 = 
(BgL_tmpz00_5683==BgL_char2z00_2919); } } 
if(BgL_test3689z00_5681)
{ /* Llib/os.scm 720 */
long BgL_arg1500z00_1559;long BgL_arg1502z00_1560;obj_t BgL_arg1505z00_1561;
BgL_arg1500z00_1559 = 
(BgL_stopz00_1550+((long)1)); 
BgL_arg1502z00_1560 = 
(BgL_stopz00_1550+((long)1)); 
BgL_arg1505z00_1561 = 
MAKE_YOUNG_PAIR(
BGl_substringz00zz__r4_strings_6_7z00(BgL_namez00_35, BgL_startz00_1549, BgL_stopz00_1550), BgL_resz00_1551); 
{ 
obj_t BgL_resz00_5701;long BgL_stopz00_5700;long BgL_startz00_5699;
BgL_startz00_5699 = BgL_arg1500z00_1559; 
BgL_stopz00_5700 = BgL_arg1502z00_1560; 
BgL_resz00_5701 = BgL_arg1505z00_1561; 
BgL_resz00_1551 = BgL_resz00_5701; 
BgL_stopz00_1550 = BgL_stopz00_5700; 
BgL_startz00_1549 = BgL_startz00_5699; 
goto BgL_zc3z04anonymousza31492ze3z87_1552;} }  else 
{ 
long BgL_stopz00_5702;
BgL_stopz00_5702 = 
(BgL_stopz00_1550+((long)1)); 
BgL_stopz00_1550 = BgL_stopz00_5702; 
goto BgL_zc3z04anonymousza31492ze3z87_1552;} } } } } } 

}



/* &file-name->list */
obj_t BGl_z62filezd2namezd2ze3listz81zz__osz00(obj_t BgL_envz00_3949, obj_t BgL_namez00_3950)
{
{ /* Llib/os.scm 709 */
{ /* Llib/os.scm 710 */
obj_t BgL_auxz00_5704;
if(
STRINGP(BgL_namez00_3950))
{ /* Llib/os.scm 710 */
BgL_auxz00_5704 = BgL_namez00_3950
; }  else 
{ 
obj_t BgL_auxz00_5707;
BgL_auxz00_5707 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)27222)), BGl_string3156z00zz__osz00, BGl_string3111z00zz__osz00, BgL_namez00_3950); 
FAILURE(BgL_auxz00_5707,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2ze3listze3zz__osz00(BgL_auxz00_5704);} } 

}



/* file-name-canonicalize-inner */
obj_t BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(obj_t BgL_srcz00_36, obj_t BgL_resz00_37, long BgL_indexz00_38)
{
{ /* Llib/os.scm 729 */
{ /* Llib/os.scm 731 */
long BgL_lenz00_1571;long BgL_iz00_1572;long BgL_jz00_1573;
BgL_lenz00_1571 = 
STRING_LENGTH(BgL_srcz00_36); 
BgL_iz00_1572 = BgL_indexz00_38; 
BgL_jz00_1573 = BgL_indexz00_38; 
{ 

BgL_zc3z04anonymousza31568ze3z87_1634:
{ /* Llib/os.scm 845 */
bool_t BgL_test3692z00_5713;
if(
(BgL_iz00_1572<
(BgL_lenz00_1571-((long)3))))
{ /* Llib/os.scm 846 */
bool_t BgL_test3694z00_5717;
{ /* Llib/os.scm 846 */
unsigned char BgL_tmpz00_5718;
{ /* Llib/os.scm 846 */
long BgL_kz00_3125;
BgL_kz00_3125 = BgL_iz00_1572; 
{ /* Llib/os.scm 846 */
long BgL_l2711z00_4107;
BgL_l2711z00_4107 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_kz00_3125, BgL_l2711z00_4107))
{ /* Llib/os.scm 846 */
BgL_tmpz00_5718 = 
STRING_REF(BgL_srcz00_36, BgL_kz00_3125)
; }  else 
{ 
obj_t BgL_auxz00_5723;
BgL_auxz00_5723 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30890)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2711z00_4107), 
(int)(BgL_kz00_3125)); 
FAILURE(BgL_auxz00_5723,BFALSE,BFALSE);} } } 
BgL_test3694z00_5717 = 
(BgL_tmpz00_5718==((unsigned char)'.')); } 
if(BgL_test3694z00_5717)
{ /* Llib/os.scm 847 */
bool_t BgL_test3696z00_5730;
{ /* Llib/os.scm 847 */
unsigned char BgL_arg1603z00_1663;
{ /* Llib/os.scm 847 */
long BgL_i2714z00_4110;
BgL_i2714z00_4110 = 
(BgL_iz00_1572+((long)1)); 
{ /* Llib/os.scm 847 */
long BgL_l2715z00_4111;
BgL_l2715z00_4111 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_i2714z00_4110, BgL_l2715z00_4111))
{ /* Llib/os.scm 847 */
BgL_arg1603z00_1663 = 
STRING_REF(BgL_srcz00_36, BgL_i2714z00_4110); }  else 
{ 
obj_t BgL_auxz00_5736;
BgL_auxz00_5736 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30926)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2715z00_4111), 
(int)(BgL_i2714z00_4110)); 
FAILURE(BgL_auxz00_5736,BFALSE,BFALSE);} } } 
BgL_test3696z00_5730 = 
(BgL_arg1603z00_1663==((unsigned char)'.')); } 
if(BgL_test3696z00_5730)
{ /* Llib/os.scm 848 */
unsigned char BgL_arg1599z00_1661;
{ /* Llib/os.scm 848 */
long BgL_i2718z00_4114;
BgL_i2718z00_4114 = 
(BgL_iz00_1572+((long)2)); 
{ /* Llib/os.scm 848 */
long BgL_l2719z00_4115;
BgL_l2719z00_4115 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_i2718z00_4114, BgL_l2719z00_4115))
{ /* Llib/os.scm 848 */
BgL_arg1599z00_1661 = 
STRING_REF(BgL_srcz00_36, BgL_i2718z00_4114); }  else 
{ 
obj_t BgL_auxz00_5748;
BgL_auxz00_5748 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30970)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2719z00_4115), 
(int)(BgL_i2718z00_4114)); 
FAILURE(BgL_auxz00_5748,BFALSE,BFALSE);} } } 
BgL_test3692z00_5713 = 
(BgL_arg1599z00_1661==
(unsigned char)(FILE_SEPARATOR)); }  else 
{ /* Llib/os.scm 847 */
BgL_test3692z00_5713 = ((bool_t)0)
; } }  else 
{ /* Llib/os.scm 846 */
BgL_test3692z00_5713 = ((bool_t)0)
; } }  else 
{ /* Llib/os.scm 845 */
BgL_test3692z00_5713 = ((bool_t)0)
; } 
if(BgL_test3692z00_5713)
{ /* Llib/os.scm 845 */
{ /* Llib/os.scm 850 */
long BgL_kz00_3147;
BgL_kz00_3147 = BgL_jz00_1573; 
{ /* Llib/os.scm 850 */
long BgL_l2723z00_4119;
BgL_l2723z00_4119 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_3147, BgL_l2723z00_4119))
{ /* Llib/os.scm 850 */
STRING_SET(BgL_resz00_37, BgL_kz00_3147, ((unsigned char)'.')); }  else 
{ 
obj_t BgL_auxz00_5760;
BgL_auxz00_5760 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)31018)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2723z00_4119), 
(int)(BgL_kz00_3147)); 
FAILURE(BgL_auxz00_5760,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 851 */
long BgL_arg1589z00_1649;
BgL_arg1589z00_1649 = 
(BgL_jz00_1573+((long)1)); 
{ /* Llib/os.scm 851 */
long BgL_l2727z00_4123;
BgL_l2727z00_4123 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_arg1589z00_1649, BgL_l2727z00_4123))
{ /* Llib/os.scm 851 */
STRING_SET(BgL_resz00_37, BgL_arg1589z00_1649, ((unsigned char)'.')); }  else 
{ 
obj_t BgL_auxz00_5771;
BgL_auxz00_5771 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)31044)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2727z00_4123), 
(int)(BgL_arg1589z00_1649)); 
FAILURE(BgL_auxz00_5771,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 852 */
long BgL_arg1592z00_1650;
BgL_arg1592z00_1650 = 
(BgL_jz00_1573+((long)2)); 
{ /* Llib/os.scm 852 */
unsigned char BgL_charz00_3158;
BgL_charz00_3158 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 852 */
long BgL_l2731z00_4127;
BgL_l2731z00_4127 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_arg1592z00_1650, BgL_l2731z00_4127))
{ /* Llib/os.scm 852 */
STRING_SET(BgL_resz00_37, BgL_arg1592z00_1650, BgL_charz00_3158); }  else 
{ 
obj_t BgL_auxz00_5783;
BgL_auxz00_5783 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)31078)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2731z00_4127), 
(int)(BgL_arg1592z00_1650)); 
FAILURE(BgL_auxz00_5783,BFALSE,BFALSE);} } } } 
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)3)); 
BgL_jz00_1573 = 
(BgL_jz00_1573+((long)3)); 
{ 

BgL_zc3z04anonymousza31593ze3z87_1652:
if(
(BgL_iz00_1572==BgL_lenz00_1571))
{ /* Llib/os.scm 856 */
return 
bgl_string_shrink(BgL_resz00_37, BgL_jz00_1573);}  else 
{ /* Llib/os.scm 858 */
bool_t BgL_test3703z00_5794;
{ /* Llib/os.scm 858 */
unsigned char BgL_char2z00_3172;
BgL_char2z00_3172 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 858 */
unsigned char BgL_tmpz00_5796;
{ /* Llib/os.scm 858 */
long BgL_kz00_3169;
BgL_kz00_3169 = BgL_iz00_1572; 
{ /* Llib/os.scm 858 */
long BgL_l2735z00_4131;
BgL_l2735z00_4131 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_kz00_3169, BgL_l2735z00_4131))
{ /* Llib/os.scm 858 */
BgL_tmpz00_5796 = 
STRING_REF(BgL_srcz00_36, BgL_kz00_3169)
; }  else 
{ 
obj_t BgL_auxz00_5801;
BgL_auxz00_5801 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)31241)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2735z00_4131), 
(int)(BgL_kz00_3169)); 
FAILURE(BgL_auxz00_5801,BFALSE,BFALSE);} } } 
BgL_test3703z00_5794 = 
(BgL_tmpz00_5796==BgL_char2z00_3172); } } 
if(BgL_test3703z00_5794)
{ /* Llib/os.scm 858 */
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)1)); 
goto BgL_zc3z04anonymousza31593ze3z87_1652;}  else 
{ /* Llib/os.scm 858 */
goto BgL_zc3z04anonymousza31568ze3z87_1634;} } } }  else 
{ /* Llib/os.scm 845 */
BgL_zc3z04anonymousza31524ze3z87_1593:
if(
(BgL_iz00_1572==BgL_lenz00_1571))
{ /* Llib/os.scm 768 */
return 
bgl_string_shrink(BgL_resz00_37, BgL_jz00_1573);}  else 
{ /* Llib/os.scm 770 */
unsigned char BgL_cz00_1595;
{ /* Llib/os.scm 770 */
long BgL_kz00_2978;
BgL_kz00_2978 = BgL_iz00_1572; 
{ /* Llib/os.scm 770 */
long BgL_l2739z00_4135;
BgL_l2739z00_4135 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_kz00_2978, BgL_l2739z00_4135))
{ /* Llib/os.scm 770 */
BgL_cz00_1595 = 
STRING_REF(BgL_srcz00_36, BgL_kz00_2978); }  else 
{ 
obj_t BgL_auxz00_5816;
BgL_auxz00_5816 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)28864)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2739z00_4135), 
(int)(BgL_kz00_2978)); 
FAILURE(BgL_auxz00_5816,BFALSE,BFALSE);} } } 
if(
(BgL_cz00_1595==
(unsigned char)(FILE_SEPARATOR)))
{ /* Llib/os.scm 772 */
{ /* Llib/os.scm 774 */
long BgL_kz00_2984;
BgL_kz00_2984 = BgL_jz00_1573; 
{ /* Llib/os.scm 774 */
long BgL_l2743z00_4139;
BgL_l2743z00_4139 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_2984, BgL_l2743z00_4139))
{ /* Llib/os.scm 774 */
STRING_SET(BgL_resz00_37, BgL_kz00_2984, BgL_cz00_1595); }  else 
{ 
obj_t BgL_auxz00_5829;
BgL_auxz00_5829 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)28946)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2743z00_4139), 
(int)(BgL_kz00_2984)); 
FAILURE(BgL_auxz00_5829,BFALSE,BFALSE);} } } 
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)1)); 
BgL_jz00_1573 = 
(BgL_jz00_1573+((long)1)); 
BgL_zc3z04anonymousza31512ze3z87_1579:
if(
(BgL_iz00_1572==BgL_lenz00_1571))
{ /* Llib/os.scm 737 */
return 
bgl_string_shrink(BgL_resz00_37, BgL_jz00_1573);}  else 
{ /* Llib/os.scm 739 */
bool_t BgL_test3710z00_5840;
{ /* Llib/os.scm 739 */
unsigned char BgL_char2z00_2938;
BgL_char2z00_2938 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 739 */
unsigned char BgL_tmpz00_5842;
{ /* Llib/os.scm 739 */
long BgL_kz00_2935;
BgL_kz00_2935 = BgL_iz00_1572; 
{ /* Llib/os.scm 739 */
long BgL_l2815z00_4211;
BgL_l2815z00_4211 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_kz00_2935, BgL_l2815z00_4211))
{ /* Llib/os.scm 739 */
BgL_tmpz00_5842 = 
STRING_REF(BgL_srcz00_36, BgL_kz00_2935)
; }  else 
{ 
obj_t BgL_auxz00_5847;
BgL_auxz00_5847 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)28174)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2815z00_4211), 
(int)(BgL_kz00_2935)); 
FAILURE(BgL_auxz00_5847,BFALSE,BFALSE);} } } 
BgL_test3710z00_5840 = 
(BgL_tmpz00_5842==BgL_char2z00_2938); } } 
if(BgL_test3710z00_5840)
{ /* Llib/os.scm 739 */
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)1)); 
goto BgL_zc3z04anonymousza31512ze3z87_1579;}  else 
{ /* Llib/os.scm 739 */
goto BgL_zc3z04anonymousza31524ze3z87_1593;} } }  else 
{ /* Llib/os.scm 772 */
if(
(BgL_cz00_1595==((unsigned char)'.')))
{ /* Llib/os.scm 778 */
if(
(BgL_iz00_1572==
(BgL_lenz00_1571-((long)1))))
{ /* Llib/os.scm 780 */
if(
(BgL_jz00_1573==((long)0)))
{ /* Llib/os.scm 782 */
{ /* Llib/os.scm 784 */
long BgL_kz00_3001;
BgL_kz00_3001 = BgL_jz00_1573; 
{ /* Llib/os.scm 784 */
long BgL_l2747z00_4143;
BgL_l2747z00_4143 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_3001, BgL_l2747z00_4143))
{ /* Llib/os.scm 784 */
STRING_SET(BgL_resz00_37, BgL_kz00_3001, ((unsigned char)'.')); }  else 
{ 
obj_t BgL_auxz00_5866;
BgL_auxz00_5866 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)29167)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2747z00_4143), 
(int)(BgL_kz00_3001)); 
FAILURE(BgL_auxz00_5866,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 785 */
long BgL_tmpz00_5872;
BgL_tmpz00_5872 = 
(BgL_jz00_1573+((long)1)); 
return 
bgl_string_shrink(BgL_resz00_37, BgL_tmpz00_5872);} }  else 
{ /* Llib/os.scm 786 */
long BgL_tmpz00_5875;
BgL_tmpz00_5875 = 
(BgL_jz00_1573-((long)1)); 
return 
bgl_string_shrink(BgL_resz00_37, BgL_tmpz00_5875);} }  else 
{ /* Llib/os.scm 787 */
bool_t BgL_test3716z00_5878;
{ /* Llib/os.scm 787 */
unsigned char BgL_arg1565z00_1631;
{ /* Llib/os.scm 787 */
long BgL_i2750z00_4146;
BgL_i2750z00_4146 = 
(BgL_iz00_1572+((long)1)); 
{ /* Llib/os.scm 787 */
long BgL_l2751z00_4147;
BgL_l2751z00_4147 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_i2750z00_4146, BgL_l2751z00_4147))
{ /* Llib/os.scm 787 */
BgL_arg1565z00_1631 = 
STRING_REF(BgL_srcz00_36, BgL_i2750z00_4146); }  else 
{ 
obj_t BgL_auxz00_5884;
BgL_auxz00_5884 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)29291)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2751z00_4147), 
(int)(BgL_i2750z00_4146)); 
FAILURE(BgL_auxz00_5884,BFALSE,BFALSE);} } } 
BgL_test3716z00_5878 = 
(BgL_arg1565z00_1631==
(unsigned char)(FILE_SEPARATOR)); } 
if(BgL_test3716z00_5878)
{ /* Llib/os.scm 787 */
if(
(BgL_iz00_1572==
(BgL_lenz00_1571-((long)2))))
{ /* Llib/os.scm 788 */
{ /* Llib/os.scm 791 */
long BgL_kz00_3025;
BgL_kz00_3025 = BgL_jz00_1573; 
{ /* Llib/os.scm 791 */
long BgL_l2755z00_4151;
BgL_l2755z00_4151 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_3025, BgL_l2755z00_4151))
{ /* Llib/os.scm 791 */
STRING_SET(BgL_resz00_37, BgL_kz00_3025, ((unsigned char)'.')); }  else 
{ 
obj_t BgL_auxz00_5899;
BgL_auxz00_5899 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)29409)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2755z00_4151), 
(int)(BgL_kz00_3025)); 
FAILURE(BgL_auxz00_5899,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 792 */
long BgL_tmpz00_5905;
BgL_tmpz00_5905 = 
(BgL_jz00_1573+((long)1)); 
return 
bgl_string_shrink(BgL_resz00_37, BgL_tmpz00_5905);} }  else 
{ /* Llib/os.scm 788 */
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)2)); 
goto BgL_zc3z04anonymousza31512ze3z87_1579;} }  else 
{ /* Llib/os.scm 797 */
bool_t BgL_test3720z00_5909;
{ /* Llib/os.scm 797 */
unsigned char BgL_arg1563z00_1629;
{ /* Llib/os.scm 797 */
long BgL_i2758z00_4154;
BgL_i2758z00_4154 = 
(BgL_iz00_1572+((long)1)); 
{ /* Llib/os.scm 797 */
long BgL_l2759z00_4155;
BgL_l2759z00_4155 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_i2758z00_4154, BgL_l2759z00_4155))
{ /* Llib/os.scm 797 */
BgL_arg1563z00_1629 = 
STRING_REF(BgL_srcz00_36, BgL_i2758z00_4154); }  else 
{ 
obj_t BgL_auxz00_5915;
BgL_auxz00_5915 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)29612)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2759z00_4155), 
(int)(BgL_i2758z00_4154)); 
FAILURE(BgL_auxz00_5915,BFALSE,BFALSE);} } } 
BgL_test3720z00_5909 = 
(BgL_arg1563z00_1629==((unsigned char)'.')); } 
if(BgL_test3720z00_5909)
{ /* Llib/os.scm 797 */
if(
(BgL_iz00_1572==
(BgL_lenz00_1571-((long)2))))
{ /* Llib/os.scm 800 */
if(
(BgL_jz00_1573==((long)0)))
{ /* Llib/os.scm 803 */
return 
bgl_string_shrink(BgL_resz00_37, ((long)0));}  else 
{ /* Llib/os.scm 803 */
if(
(BgL_jz00_1573==((long)1)))
{ /* Llib/os.scm 805 */
return 
bgl_string_shrink(BgL_resz00_37, ((long)1));}  else 
{ /* Llib/os.scm 805 */
BgL_jz00_1573 = 
BGl_popzd2directoryze70z35zz__osz00(FILE_SEPARATOR, BgL_resz00_37, BgL_jz00_1573); 
if(
(BgL_jz00_1573>((long)1)))
{ /* Llib/os.scm 810 */
long BgL_tmpz00_5934;
BgL_tmpz00_5934 = 
(BgL_jz00_1573-((long)1)); 
return 
bgl_string_shrink(BgL_resz00_37, BgL_tmpz00_5934);}  else 
{ /* Llib/os.scm 809 */
return 
bgl_string_shrink(BgL_resz00_37, BgL_jz00_1573);} } } }  else 
{ /* Llib/os.scm 812 */
bool_t BgL_test3726z00_5938;
{ /* Llib/os.scm 812 */
unsigned char BgL_arg1558z00_1625;
{ /* Llib/os.scm 812 */
long BgL_i2762z00_4158;
BgL_i2762z00_4158 = 
(BgL_iz00_1572+((long)2)); 
{ /* Llib/os.scm 812 */
long BgL_l2763z00_4159;
BgL_l2763z00_4159 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_i2762z00_4158, BgL_l2763z00_4159))
{ /* Llib/os.scm 812 */
BgL_arg1558z00_1625 = 
STRING_REF(BgL_srcz00_36, BgL_i2762z00_4158); }  else 
{ 
obj_t BgL_auxz00_5944;
BgL_auxz00_5944 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)29990)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2763z00_4159), 
(int)(BgL_i2762z00_4158)); 
FAILURE(BgL_auxz00_5944,BFALSE,BFALSE);} } } 
BgL_test3726z00_5938 = 
(BgL_arg1558z00_1625==
(unsigned char)(FILE_SEPARATOR)); } 
if(BgL_test3726z00_5938)
{ /* Llib/os.scm 812 */
if(
(BgL_jz00_1573>=((long)2)))
{ /* Llib/os.scm 814 */
BgL_jz00_1573 = 
BGl_popzd2directoryze70z35zz__osz00(FILE_SEPARATOR, BgL_resz00_37, BgL_jz00_1573); }  else 
{ /* Llib/os.scm 814 */BFALSE; } 
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)3)); 
goto BgL_zc3z04anonymousza31512ze3z87_1579;}  else 
{ /* Llib/os.scm 812 */
{ /* Llib/os.scm 819 */
long BgL_kz00_3073;
BgL_kz00_3073 = BgL_jz00_1573; 
{ /* Llib/os.scm 819 */
long BgL_l2767z00_4163;
BgL_l2767z00_4163 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_3073, BgL_l2767z00_4163))
{ /* Llib/os.scm 819 */
STRING_SET(BgL_resz00_37, BgL_kz00_3073, BgL_cz00_1595); }  else 
{ 
obj_t BgL_auxz00_5960;
BgL_auxz00_5960 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30182)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2767z00_4163), 
(int)(BgL_kz00_3073)); 
FAILURE(BgL_auxz00_5960,BFALSE,BFALSE);} } } 
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)1)); 
BgL_jz00_1573 = 
(BgL_jz00_1573+((long)1)); 
{ /* Llib/os.scm 822 */
unsigned char BgL_arg1556z00_1623;
{ /* Llib/os.scm 822 */
long BgL_kz00_3080;
BgL_kz00_3080 = BgL_iz00_1572; 
{ /* Llib/os.scm 822 */
long BgL_l2771z00_4167;
BgL_l2771z00_4167 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_kz00_3080, BgL_l2771z00_4167))
{ /* Llib/os.scm 822 */
BgL_arg1556z00_1623 = 
STRING_REF(BgL_srcz00_36, BgL_kz00_3080); }  else 
{ 
obj_t BgL_auxz00_5972;
BgL_auxz00_5972 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30282)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2771z00_4167), 
(int)(BgL_kz00_3080)); 
FAILURE(BgL_auxz00_5972,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 822 */
long BgL_kz00_3083;
BgL_kz00_3083 = BgL_jz00_1573; 
{ /* Llib/os.scm 822 */
long BgL_l2775z00_4171;
BgL_l2775z00_4171 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_3083, BgL_l2775z00_4171))
{ /* Llib/os.scm 822 */
STRING_SET(BgL_resz00_37, BgL_kz00_3083, BgL_arg1556z00_1623); }  else 
{ 
obj_t BgL_auxz00_5982;
BgL_auxz00_5982 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30263)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2775z00_4171), 
(int)(BgL_kz00_3083)); 
FAILURE(BgL_auxz00_5982,BFALSE,BFALSE);} } } } 
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)1)); 
BgL_jz00_1573 = 
(BgL_jz00_1573+((long)1)); 
{ /* Llib/os.scm 825 */
unsigned char BgL_arg1557z00_1624;
{ /* Llib/os.scm 825 */
long BgL_kz00_3090;
BgL_kz00_3090 = BgL_iz00_1572; 
{ /* Llib/os.scm 825 */
long BgL_l2779z00_4175;
BgL_l2779z00_4175 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_kz00_3090, BgL_l2779z00_4175))
{ /* Llib/os.scm 825 */
BgL_arg1557z00_1624 = 
STRING_REF(BgL_srcz00_36, BgL_kz00_3090); }  else 
{ 
obj_t BgL_auxz00_5994;
BgL_auxz00_5994 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30380)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2779z00_4175), 
(int)(BgL_kz00_3090)); 
FAILURE(BgL_auxz00_5994,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 825 */
long BgL_kz00_3093;
BgL_kz00_3093 = BgL_jz00_1573; 
{ /* Llib/os.scm 825 */
long BgL_l2783z00_4179;
BgL_l2783z00_4179 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_3093, BgL_l2783z00_4179))
{ /* Llib/os.scm 825 */
STRING_SET(BgL_resz00_37, BgL_kz00_3093, BgL_arg1557z00_1624); }  else 
{ 
obj_t BgL_auxz00_6004;
BgL_auxz00_6004 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30361)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2783z00_4179), 
(int)(BgL_kz00_3093)); 
FAILURE(BgL_auxz00_6004,BFALSE,BFALSE);} } } } 
BgL_zc3z04anonymousza31517ze3z87_1584:
if(
(BgL_iz00_1572==BgL_lenz00_1571))
{ /* Llib/os.scm 746 */
return 
bgl_string_shrink(BgL_resz00_37, BgL_jz00_1573);}  else 
{ /* Llib/os.scm 748 */
unsigned char BgL_cz00_1586;
{ /* Llib/os.scm 748 */
long BgL_kz00_2948;
BgL_kz00_2948 = BgL_iz00_1572; 
{ /* Llib/os.scm 748 */
long BgL_l2803z00_4199;
BgL_l2803z00_4199 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_kz00_2948, BgL_l2803z00_4199))
{ /* Llib/os.scm 748 */
BgL_cz00_1586 = 
STRING_REF(BgL_srcz00_36, BgL_kz00_2948); }  else 
{ 
obj_t BgL_auxz00_6017;
BgL_auxz00_6017 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)28371)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2803z00_4199), 
(int)(BgL_kz00_2948)); 
FAILURE(BgL_auxz00_6017,BFALSE,BFALSE);} } } 
if(
(BgL_cz00_1586==
(unsigned char)(FILE_SEPARATOR)))
{ /* Llib/os.scm 750 */
{ /* Llib/os.scm 751 */
long BgL_kz00_2954;
BgL_kz00_2954 = BgL_jz00_1573; 
{ /* Llib/os.scm 751 */
long BgL_l2807z00_4203;
BgL_l2807z00_4203 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_2954, BgL_l2807z00_4203))
{ /* Llib/os.scm 751 */
STRING_SET(BgL_resz00_37, BgL_kz00_2954, BgL_cz00_1586); }  else 
{ 
obj_t BgL_auxz00_6030;
BgL_auxz00_6030 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)28427)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2807z00_4203), 
(int)(BgL_kz00_2954)); 
FAILURE(BgL_auxz00_6030,BFALSE,BFALSE);} } } 
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)1)); 
BgL_jz00_1573 = 
(BgL_jz00_1573+((long)1)); 
goto BgL_zc3z04anonymousza31512ze3z87_1579;}  else 
{ /* Llib/os.scm 750 */
{ /* Llib/os.scm 756 */
long BgL_kz00_2961;
BgL_kz00_2961 = BgL_jz00_1573; 
{ /* Llib/os.scm 756 */
long BgL_l2811z00_4207;
BgL_l2811z00_4207 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_2961, BgL_l2811z00_4207))
{ /* Llib/os.scm 756 */
STRING_SET(BgL_resz00_37, BgL_kz00_2961, BgL_cz00_1586); }  else 
{ 
obj_t BgL_auxz00_6042;
BgL_auxz00_6042 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)28541)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2811z00_4207), 
(int)(BgL_kz00_2961)); 
FAILURE(BgL_auxz00_6042,BFALSE,BFALSE);} } } 
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)1)); 
BgL_jz00_1573 = 
(BgL_jz00_1573+((long)1)); 
goto BgL_zc3z04anonymousza31517ze3z87_1584;} } } } }  else 
{ /* Llib/os.scm 797 */
{ /* Llib/os.scm 829 */
long BgL_kz00_3096;
BgL_kz00_3096 = BgL_jz00_1573; 
{ /* Llib/os.scm 829 */
long BgL_l2787z00_4183;
BgL_l2787z00_4183 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_3096, BgL_l2787z00_4183))
{ /* Llib/os.scm 829 */
STRING_SET(BgL_resz00_37, BgL_kz00_3096, BgL_cz00_1595); }  else 
{ 
obj_t BgL_auxz00_6054;
BgL_auxz00_6054 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30465)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2787z00_4183), 
(int)(BgL_kz00_3096)); 
FAILURE(BgL_auxz00_6054,BFALSE,BFALSE);} } } 
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)1)); 
BgL_jz00_1573 = 
(BgL_jz00_1573+((long)1)); 
{ /* Llib/os.scm 832 */
unsigned char BgL_arg1562z00_1628;
{ /* Llib/os.scm 832 */
long BgL_kz00_3103;
BgL_kz00_3103 = BgL_iz00_1572; 
{ /* Llib/os.scm 832 */
long BgL_l2791z00_4187;
BgL_l2791z00_4187 = 
STRING_LENGTH(BgL_srcz00_36); 
if(
BOUND_CHECK(BgL_kz00_3103, BgL_l2791z00_4187))
{ /* Llib/os.scm 832 */
BgL_arg1562z00_1628 = 
STRING_REF(BgL_srcz00_36, BgL_kz00_3103); }  else 
{ 
obj_t BgL_auxz00_6066;
BgL_auxz00_6066 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30553)), BGl_string3118z00zz__osz00, BgL_srcz00_36, 
(int)(BgL_l2791z00_4187), 
(int)(BgL_kz00_3103)); 
FAILURE(BgL_auxz00_6066,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 832 */
long BgL_kz00_3106;
BgL_kz00_3106 = BgL_jz00_1573; 
{ /* Llib/os.scm 832 */
long BgL_l2795z00_4191;
BgL_l2795z00_4191 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_3106, BgL_l2795z00_4191))
{ /* Llib/os.scm 832 */
STRING_SET(BgL_resz00_37, BgL_kz00_3106, BgL_arg1562z00_1628); }  else 
{ 
obj_t BgL_auxz00_6076;
BgL_auxz00_6076 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30534)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2795z00_4191), 
(int)(BgL_kz00_3106)); 
FAILURE(BgL_auxz00_6076,BFALSE,BFALSE);} } } } 
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)1)); 
BgL_jz00_1573 = 
(BgL_jz00_1573+((long)1)); 
goto BgL_zc3z04anonymousza31517ze3z87_1584;} } } }  else 
{ /* Llib/os.scm 778 */
{ /* Llib/os.scm 838 */
long BgL_kz00_3113;
BgL_kz00_3113 = BgL_jz00_1573; 
{ /* Llib/os.scm 838 */
long BgL_l2799z00_4195;
BgL_l2799z00_4195 = 
STRING_LENGTH(BgL_resz00_37); 
if(
BOUND_CHECK(BgL_kz00_3113, BgL_l2799z00_4195))
{ /* Llib/os.scm 838 */
STRING_SET(BgL_resz00_37, BgL_kz00_3113, BgL_cz00_1595); }  else 
{ 
obj_t BgL_auxz00_6088;
BgL_auxz00_6088 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)30676)), BGl_string3157z00zz__osz00, BgL_resz00_37, 
(int)(BgL_l2799z00_4195), 
(int)(BgL_kz00_3113)); 
FAILURE(BgL_auxz00_6088,BFALSE,BFALSE);} } } 
BgL_iz00_1572 = 
(BgL_iz00_1572+((long)1)); 
BgL_jz00_1573 = 
(BgL_jz00_1573+((long)1)); 
goto BgL_zc3z04anonymousza31517ze3z87_1584;} } } } } } } } 

}



/* pop-directory~0 */
long BGl_popzd2directoryze70z35zz__osz00(unsigned char BgL_sepz00_4016, obj_t BgL_resz00_4015, long BgL_jz00_1588)
{
{ /* Llib/os.scm 765 */
{ /* Llib/os.scm 762 */
obj_t BgL_njz00_1590;
{ /* Llib/os.scm 762 */
long BgL_arg1523z00_1592;
BgL_arg1523z00_1592 = 
(BgL_jz00_1588-((long)1)); 
BgL_njz00_1590 = 
BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(BgL_resz00_4015, 
BCHAR(BgL_sepz00_4016), 
BINT(BgL_arg1523z00_1592)); } 
if(
INTEGERP(BgL_njz00_1590))
{ /* Llib/os.scm 763 */
return 
(
(long)CINT(BgL_njz00_1590)+((long)1));}  else 
{ /* Llib/os.scm 763 */
return ((long)0);} } } 

}



/* file-name-canonicalize */
BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2canonicaliza7eza7zz__osz00(obj_t BgL_namez00_39)
{
{ /* Llib/os.scm 870 */
{ /* Llib/os.scm 871 */
obj_t BgL_arg1607z00_3176;
{ /* Llib/os.scm 871 */
long BgL_arg1608z00_3177;
BgL_arg1608z00_3177 = 
STRING_LENGTH(BgL_namez00_39); 
{ /* Llib/os.scm 871 */

BgL_arg1607z00_3176 = 
make_string(BgL_arg1608z00_3177, ((unsigned char)' ')); } } 
return 
BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(BgL_namez00_39, BgL_arg1607z00_3176, ((long)0));} } 

}



/* &file-name-canonicalize */
obj_t BGl_z62filezd2namezd2canonicaliza7ezc5zz__osz00(obj_t BgL_envz00_3951, obj_t BgL_namez00_3952)
{
{ /* Llib/os.scm 870 */
{ /* Llib/os.scm 871 */
obj_t BgL_auxz00_6107;
if(
STRINGP(BgL_namez00_3952))
{ /* Llib/os.scm 871 */
BgL_auxz00_6107 = BgL_namez00_3952
; }  else 
{ 
obj_t BgL_auxz00_6110;
BgL_auxz00_6110 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)31710)), BGl_string3158z00zz__osz00, BGl_string3111z00zz__osz00, BgL_namez00_3952); 
FAILURE(BgL_auxz00_6110,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2canonicaliza7eza7zz__osz00(BgL_auxz00_6107);} } 

}



/* file-name-canonicalize! */
BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t BgL_namez00_40)
{
{ /* Llib/os.scm 876 */
{ /* Llib/os.scm 877 */
long BgL_lenz00_1676;
BgL_lenz00_1676 = 
STRING_LENGTH(BgL_namez00_40); 
{ 
long BgL_iz00_1679;long BgL_sz00_1680;
BgL_iz00_1679 = ((long)0); 
BgL_sz00_1680 = ((long)0); 
BgL_zc3z04anonymousza31609ze3z87_1681:
if(
(BgL_iz00_1679==BgL_lenz00_1676))
{ /* Llib/os.scm 881 */
return BgL_namez00_40;}  else 
{ /* Llib/os.scm 883 */
unsigned char BgL_cz00_1683;
{ /* Llib/os.scm 883 */
long BgL_l2819z00_4215;
BgL_l2819z00_4215 = 
STRING_LENGTH(BgL_namez00_40); 
if(
BOUND_CHECK(BgL_iz00_1679, BgL_l2819z00_4215))
{ /* Llib/os.scm 883 */
BgL_cz00_1683 = 
STRING_REF(BgL_namez00_40, BgL_iz00_1679); }  else 
{ 
obj_t BgL_auxz00_6122;
BgL_auxz00_6122 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)32137)), BGl_string3118z00zz__osz00, BgL_namez00_40, 
(int)(BgL_l2819z00_4215), 
(int)(BgL_iz00_1679)); 
FAILURE(BgL_auxz00_6122,BFALSE,BFALSE);} } 
if(
(BgL_cz00_1683==
(unsigned char)(FILE_SEPARATOR)))
{ /* Llib/os.scm 885 */
if(
(BgL_sz00_1680==
(BgL_iz00_1679-((long)1))))
{ /* Llib/os.scm 887 */
obj_t BgL_resz00_1687;
{ /* Ieee/string.scm 168 */

BgL_resz00_1687 = 
make_string(BgL_lenz00_1676, ((unsigned char)' ')); } 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_namez00_40, ((long)0), BgL_resz00_1687, ((long)0), BgL_iz00_1679); 
return 
BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(BgL_namez00_40, BgL_resz00_1687, BgL_sz00_1680);}  else 
{ 
long BgL_sz00_6139;long BgL_iz00_6137;
BgL_iz00_6137 = 
(BgL_iz00_1679+((long)1)); 
BgL_sz00_6139 = BgL_iz00_1679; 
BgL_sz00_1680 = BgL_sz00_6139; 
BgL_iz00_1679 = BgL_iz00_6137; 
goto BgL_zc3z04anonymousza31609ze3z87_1681;} }  else 
{ /* Llib/os.scm 891 */
bool_t BgL_test3749z00_6140;
if(
(BgL_cz00_1683==((unsigned char)'.')))
{ /* Llib/os.scm 891 */
BgL_test3749z00_6140 = 
(BgL_sz00_1680>=((long)0))
; }  else 
{ /* Llib/os.scm 891 */
BgL_test3749z00_6140 = ((bool_t)0)
; } 
if(BgL_test3749z00_6140)
{ /* Llib/os.scm 892 */
obj_t BgL_resz00_1694;
{ /* Ieee/string.scm 168 */

BgL_resz00_1694 = 
make_string(BgL_lenz00_1676, ((unsigned char)' ')); } 
BGl_blitzd2stringz12zc0zz__r4_strings_6_7z00(BgL_namez00_40, ((long)0), BgL_resz00_1694, ((long)0), BgL_iz00_1679); 
return 
BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(BgL_namez00_40, BgL_resz00_1694, BgL_sz00_1680);}  else 
{ 
long BgL_sz00_6149;long BgL_iz00_6147;
BgL_iz00_6147 = 
(BgL_iz00_1679+((long)1)); 
BgL_sz00_6149 = ((long)-1); 
BgL_sz00_1680 = BgL_sz00_6149; 
BgL_iz00_1679 = BgL_iz00_6147; 
goto BgL_zc3z04anonymousza31609ze3z87_1681;} } } } } } 

}



/* &file-name-canonicalize! */
obj_t BGl_z62filezd2namezd2canonicaliza7ez12zd7zz__osz00(obj_t BgL_envz00_3953, obj_t BgL_namez00_3954)
{
{ /* Llib/os.scm 876 */
{ /* Llib/os.scm 877 */
obj_t BgL_auxz00_6150;
if(
STRINGP(BgL_namez00_3954))
{ /* Llib/os.scm 877 */
BgL_auxz00_6150 = BgL_namez00_3954
; }  else 
{ 
obj_t BgL_auxz00_6153;
BgL_auxz00_6153 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)32001)), BGl_string3159z00zz__osz00, BGl_string3111z00zz__osz00, BgL_namez00_3954); 
FAILURE(BgL_auxz00_6153,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_auxz00_6150);} } 

}



/* file-name-unix-canonicalize */
BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t BgL_namez00_41)
{
{ /* Llib/os.scm 901 */
{ /* Llib/os.scm 902 */
long BgL_lenz00_1700;
BgL_lenz00_1700 = 
STRING_LENGTH(BgL_namez00_41); 
if(
(BgL_lenz00_1700==((long)0)))
{ /* Llib/os.scm 904 */
return BgL_namez00_41;}  else 
{ /* Llib/os.scm 906 */
bool_t BgL_test3753z00_6161;
{ /* Llib/os.scm 906 */
unsigned char BgL_tmpz00_6162;
if(
BOUND_CHECK(((long)0), BgL_lenz00_1700))
{ /* Llib/os.scm 906 */
BgL_tmpz00_6162 = 
STRING_REF(BgL_namez00_41, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_6166;
BgL_auxz00_6166 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)32929)), BGl_string3118z00zz__osz00, BgL_namez00_41, 
(int)(BgL_lenz00_1700), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_6166,BFALSE,BFALSE);} 
BgL_test3753z00_6161 = 
(BgL_tmpz00_6162==((unsigned char)'~')); } 
if(BgL_test3753z00_6161)
{ /* Llib/os.scm 906 */
if(
(BgL_lenz00_1700==((long)1)))
{ /* Llib/os.scm 910 */
obj_t BgL_arg1623z00_1705;
BgL_arg1623z00_1705 = 
BGl_getenvz00zz__osz00(BGl_string3108z00zz__osz00); 
{ /* Llib/os.scm 910 */
obj_t BgL_auxz00_6176;
if(
STRINGP(BgL_arg1623z00_1705))
{ /* Llib/os.scm 910 */
BgL_auxz00_6176 = BgL_arg1623z00_1705
; }  else 
{ 
obj_t BgL_auxz00_6179;
BgL_auxz00_6179 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)33062)), BGl_string3160z00zz__osz00, BGl_string3111z00zz__osz00, BgL_arg1623z00_1705); 
FAILURE(BgL_auxz00_6179,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_auxz00_6176);} }  else 
{ /* Llib/os.scm 911 */
bool_t BgL_test3757z00_6184;
{ /* Llib/os.scm 911 */
unsigned char BgL_char2z00_3227;
BgL_char2z00_3227 = 
(unsigned char)(FILE_SEPARATOR); 
{ /* Llib/os.scm 911 */
unsigned char BgL_tmpz00_6186;
{ /* Llib/os.scm 911 */
long BgL_l2827z00_4223;
BgL_l2827z00_4223 = 
STRING_LENGTH(BgL_namez00_41); 
if(
BOUND_CHECK(((long)1), BgL_l2827z00_4223))
{ /* Llib/os.scm 911 */
BgL_tmpz00_6186 = 
STRING_REF(BgL_namez00_41, ((long)1))
; }  else 
{ 
obj_t BgL_auxz00_6191;
BgL_auxz00_6191 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)33081)), BGl_string3118z00zz__osz00, BgL_namez00_41, 
(int)(BgL_l2827z00_4223), 
(int)(((long)1))); 
FAILURE(BgL_auxz00_6191,BFALSE,BFALSE);} } 
BgL_test3757z00_6184 = 
(BgL_tmpz00_6186==BgL_char2z00_3227); } } 
if(BgL_test3757z00_6184)
{ /* Llib/os.scm 914 */
obj_t BgL_arg1628z00_1709;
{ /* Llib/os.scm 914 */
obj_t BgL_arg1629z00_1710;obj_t BgL_arg1630z00_1711;
BgL_arg1629z00_1710 = 
BGl_getenvz00zz__osz00(BGl_string3108z00zz__osz00); 
BgL_arg1630z00_1711 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_namez00_41, ((long)1), BgL_lenz00_1700); 
{ /* Llib/os.scm 914 */
obj_t BgL_tmpz00_6200;
if(
STRINGP(BgL_arg1629z00_1710))
{ /* Llib/os.scm 914 */
BgL_tmpz00_6200 = BgL_arg1629z00_1710
; }  else 
{ 
obj_t BgL_auxz00_6203;
BgL_auxz00_6203 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)33193)), BGl_string3160z00zz__osz00, BGl_string3111z00zz__osz00, BgL_arg1629z00_1710); 
FAILURE(BgL_auxz00_6203,BFALSE,BFALSE);} 
BgL_arg1628z00_1709 = 
string_append(BgL_tmpz00_6200, BgL_arg1630z00_1711); } } 
return 
BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_arg1628z00_1709);}  else 
{ /* Llib/os.scm 918 */
obj_t BgL_arg1631z00_1712;
{ /* Llib/os.scm 918 */
obj_t BgL_arg1632z00_1713;obj_t BgL_arg1633z00_1714;
BgL_arg1632z00_1713 = 
BGl_getenvz00zz__osz00(BGl_string3108z00zz__osz00); 
BgL_arg1633z00_1714 = 
BGl_substringz00zz__r4_strings_6_7z00(BgL_namez00_41, ((long)1), BgL_lenz00_1700); 
{ /* Llib/os.scm 918 */
obj_t BgL_list1634z00_1715;
BgL_list1634z00_1715 = 
MAKE_YOUNG_PAIR(BgL_arg1633z00_1714, BNIL); 
{ /* Llib/os.scm 918 */
obj_t BgL_auxz00_6212;
if(
STRINGP(BgL_arg1632z00_1713))
{ /* Llib/os.scm 918 */
BgL_auxz00_6212 = BgL_arg1632z00_1713
; }  else 
{ 
obj_t BgL_auxz00_6215;
BgL_auxz00_6215 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)33338)), BGl_string3160z00zz__osz00, BGl_string3111z00zz__osz00, BgL_arg1632z00_1713); 
FAILURE(BgL_auxz00_6215,BFALSE,BFALSE);} 
BgL_arg1631z00_1712 = 
BGl_makezd2filezd2pathz00zz__osz00(BgL_auxz00_6212, BGl_string3161z00zz__osz00, BgL_list1634z00_1715); } } } 
return 
BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_arg1631z00_1712);} } }  else 
{ /* Llib/os.scm 920 */
obj_t BgL_res2441z00_3238;
{ /* Llib/os.scm 871 */
obj_t BgL_arg1607z00_3230;
{ /* Llib/os.scm 871 */
long BgL_arg1608z00_3231;
BgL_arg1608z00_3231 = 
STRING_LENGTH(BgL_namez00_41); 
{ /* Llib/os.scm 871 */

BgL_arg1607z00_3230 = 
make_string(BgL_arg1608z00_3231, ((unsigned char)' ')); } } 
BgL_res2441z00_3238 = 
BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(BgL_namez00_41, BgL_arg1607z00_3230, ((long)0)); } 
return BgL_res2441z00_3238;} } } } 

}



/* &file-name-unix-canonicalize */
obj_t BGl_z62filezd2namezd2unixzd2canonicaliza7ez17zz__osz00(obj_t BgL_envz00_3955, obj_t BgL_namez00_3956)
{
{ /* Llib/os.scm 901 */
{ /* Llib/os.scm 902 */
obj_t BgL_auxz00_6224;
if(
STRINGP(BgL_namez00_3956))
{ /* Llib/os.scm 902 */
BgL_auxz00_6224 = BgL_namez00_3956
; }  else 
{ 
obj_t BgL_auxz00_6227;
BgL_auxz00_6227 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)32848)), BGl_string3162z00zz__osz00, BGl_string3111z00zz__osz00, BgL_namez00_3956); 
FAILURE(BgL_auxz00_6227,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(BgL_auxz00_6224);} } 

}



/* file-name-unix-canonicalize! */
BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t BgL_namez00_42)
{
{ /* Llib/os.scm 925 */
{ /* Llib/os.scm 926 */
long BgL_lenz00_1719;
BgL_lenz00_1719 = 
STRING_LENGTH(BgL_namez00_42); 
if(
(BgL_lenz00_1719==((long)0)))
{ /* Llib/os.scm 928 */
return BgL_namez00_42;}  else 
{ /* Llib/os.scm 930 */
bool_t BgL_test3763z00_6235;
{ /* Llib/os.scm 930 */
unsigned char BgL_tmpz00_6236;
if(
BOUND_CHECK(((long)0), BgL_lenz00_1719))
{ /* Llib/os.scm 930 */
BgL_tmpz00_6236 = 
STRING_REF(BgL_namez00_42, ((long)0))
; }  else 
{ 
obj_t BgL_auxz00_6240;
BgL_auxz00_6240 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)33805)), BGl_string3118z00zz__osz00, BgL_namez00_42, 
(int)(BgL_lenz00_1719), 
(int)(((long)0))); 
FAILURE(BgL_auxz00_6240,BFALSE,BFALSE);} 
BgL_test3763z00_6235 = 
(BgL_tmpz00_6236==((unsigned char)'~')); } 
if(BgL_test3763z00_6235)
{ /* Llib/os.scm 930 */
return 
BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(BgL_namez00_42);}  else 
{ /* Llib/os.scm 930 */
return 
BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_namez00_42);} } } } 

}



/* &file-name-unix-canonicalize! */
obj_t BGl_z62filezd2namezd2unixzd2canonicaliza7ez12z05zz__osz00(obj_t BgL_envz00_3957, obj_t BgL_namez00_3958)
{
{ /* Llib/os.scm 925 */
{ /* Llib/os.scm 926 */
obj_t BgL_auxz00_6249;
if(
STRINGP(BgL_namez00_3958))
{ /* Llib/os.scm 926 */
BgL_auxz00_6249 = BgL_namez00_3958
; }  else 
{ 
obj_t BgL_auxz00_6252;
BgL_auxz00_6252 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)33724)), BGl_string3163z00zz__osz00, BGl_string3111z00zz__osz00, BgL_namez00_3958); 
FAILURE(BgL_auxz00_6252,BFALSE,BFALSE);} 
return 
BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(BgL_auxz00_6249);} } 

}



/* relative-file-name */
BGL_EXPORTED_DEF obj_t BGl_relativezd2filezd2namez00zz__osz00(obj_t BgL_namez00_43, obj_t BgL_basez00_44)
{
{ /* Llib/os.scm 938 */
{ 
obj_t BgL_fz00_1748;
{ /* Llib/os.scm 947 */
obj_t BgL_fz00_1725;
BgL_fz00_1725 = 
BGl_filezd2namezd2ze3listze3zz__osz00(BgL_namez00_43); 
{ /* Llib/os.scm 948 */
bool_t BgL_test3766z00_6258;
{ /* Llib/os.scm 948 */
obj_t BgL_arg1662z00_1747;
{ /* Llib/os.scm 948 */
obj_t BgL_pairz00_3265;
if(
PAIRP(BgL_fz00_1725))
{ /* Llib/os.scm 948 */
BgL_pairz00_3265 = BgL_fz00_1725; }  else 
{ 
obj_t BgL_auxz00_6261;
BgL_auxz00_6261 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34409)), BGl_string3165z00zz__osz00, BGl_string3113z00zz__osz00, BgL_fz00_1725); 
FAILURE(BgL_auxz00_6261,BFALSE,BFALSE);} 
BgL_arg1662z00_1747 = 
CAR(BgL_pairz00_3265); } 
{ /* Llib/os.scm 948 */
bool_t BgL_res2452z00_3281;
{ /* Llib/os.scm 948 */
obj_t BgL_string1z00_3266;
if(
STRINGP(BgL_arg1662z00_1747))
{ /* Llib/os.scm 948 */
BgL_string1z00_3266 = BgL_arg1662z00_1747; }  else 
{ 
obj_t BgL_auxz00_6268;
BgL_auxz00_6268 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34410)), BGl_string3165z00zz__osz00, BGl_string3111z00zz__osz00, BgL_arg1662z00_1747); 
FAILURE(BgL_auxz00_6268,BFALSE,BFALSE);} 
{ /* Llib/os.scm 948 */
long BgL_l1z00_3268;
BgL_l1z00_3268 = 
STRING_LENGTH(BgL_string1z00_3266); 
if(
(BgL_l1z00_3268==((long)0)))
{ /* Llib/os.scm 948 */
int BgL_arg1881z00_3271;
{ /* Llib/os.scm 948 */
char * BgL_auxz00_6277;char * BgL_tmpz00_6275;
BgL_auxz00_6277 = 
BSTRING_TO_STRING(BGl_string3124z00zz__osz00); 
BgL_tmpz00_6275 = 
BSTRING_TO_STRING(BgL_string1z00_3266); 
BgL_arg1881z00_3271 = 
memcmp(BgL_tmpz00_6275, BgL_auxz00_6277, BgL_l1z00_3268); } 
BgL_res2452z00_3281 = 
(
(long)(BgL_arg1881z00_3271)==((long)0)); }  else 
{ /* Llib/os.scm 948 */
BgL_res2452z00_3281 = ((bool_t)0); } } } 
BgL_test3766z00_6258 = BgL_res2452z00_3281; } } 
if(BgL_test3766z00_6258)
{ /* Llib/os.scm 950 */
obj_t BgL_g1060z00_1728;
BgL_g1060z00_1728 = 
BGl_filezd2namezd2ze3listze3zz__osz00(BgL_basez00_44); 
{ 
obj_t BgL_fz00_1730;obj_t BgL_bz00_1731;
{ /* Llib/os.scm 950 */
obj_t BgL_aux2997z00_4393;
BgL_fz00_1730 = BgL_fz00_1725; 
BgL_bz00_1731 = BgL_g1060z00_1728; 
BgL_zc3z04anonymousza31646ze3z87_1732:
if(
NULLP(BgL_fz00_1730))
{ /* Llib/os.scm 953 */
BgL_aux2997z00_4393 = BGl_string3124z00zz__osz00; }  else 
{ /* Llib/os.scm 953 */
if(
NULLP(BgL_bz00_1731))
{ /* Llib/os.scm 955 */
BgL_fz00_1748 = BgL_fz00_1730; 
BgL_zc3z04anonymousza31663ze3z87_1749:
{ /* Llib/os.scm 941 */
bool_t BgL_test3772z00_6287;
{ /* Llib/os.scm 941 */
obj_t BgL_tmpz00_6288;
{ /* Llib/os.scm 941 */
obj_t BgL_pairz00_3248;
if(
PAIRP(BgL_fz00_1748))
{ /* Llib/os.scm 941 */
BgL_pairz00_3248 = BgL_fz00_1748; }  else 
{ 
obj_t BgL_auxz00_6291;
BgL_auxz00_6291 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34229)), BGl_string3164z00zz__osz00, BGl_string3113z00zz__osz00, BgL_fz00_1748); 
FAILURE(BgL_auxz00_6291,BFALSE,BFALSE);} 
BgL_tmpz00_6288 = 
CDR(BgL_pairz00_3248); } 
BgL_test3772z00_6287 = 
NULLP(BgL_tmpz00_6288); } 
if(BgL_test3772z00_6287)
{ /* Llib/os.scm 942 */
obj_t BgL_pairz00_3250;
if(
PAIRP(BgL_fz00_1748))
{ /* Llib/os.scm 942 */
BgL_pairz00_3250 = BgL_fz00_1748; }  else 
{ 
obj_t BgL_auxz00_6299;
BgL_auxz00_6299 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34241)), BGl_string3164z00zz__osz00, BGl_string3113z00zz__osz00, BgL_fz00_1748); 
FAILURE(BgL_auxz00_6299,BFALSE,BFALSE);} 
BgL_aux2997z00_4393 = 
CAR(BgL_pairz00_3250); }  else 
{ /* Llib/os.scm 943 */
bool_t BgL_test3775z00_6304;
{ /* Llib/os.scm 943 */
obj_t BgL_tmpz00_6305;
{ /* Llib/os.scm 943 */
obj_t BgL_pairz00_3251;
if(
PAIRP(BgL_fz00_1748))
{ /* Llib/os.scm 943 */
BgL_pairz00_3251 = BgL_fz00_1748; }  else 
{ 
obj_t BgL_auxz00_6308;
BgL_auxz00_6308 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34261)), BGl_string3164z00zz__osz00, BGl_string3113z00zz__osz00, BgL_fz00_1748); 
FAILURE(BgL_auxz00_6308,BFALSE,BFALSE);} 
{ /* Llib/os.scm 943 */
obj_t BgL_pairz00_3254;
{ /* Llib/os.scm 943 */
obj_t BgL_aux2955z00_4351;
BgL_aux2955z00_4351 = 
CDR(BgL_pairz00_3251); 
if(
PAIRP(BgL_aux2955z00_4351))
{ /* Llib/os.scm 943 */
BgL_pairz00_3254 = BgL_aux2955z00_4351; }  else 
{ 
obj_t BgL_auxz00_6315;
BgL_auxz00_6315 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34255)), BGl_string3164z00zz__osz00, BGl_string3113z00zz__osz00, BgL_aux2955z00_4351); 
FAILURE(BgL_auxz00_6315,BFALSE,BFALSE);} } 
BgL_tmpz00_6305 = 
CDR(BgL_pairz00_3254); } } 
BgL_test3775z00_6304 = 
NULLP(BgL_tmpz00_6305); } 
if(BgL_test3775z00_6304)
{ /* Llib/os.scm 944 */
obj_t BgL_arg1669z00_1754;obj_t BgL_arg1672z00_1755;
{ /* Llib/os.scm 944 */
obj_t BgL_pairz00_3256;
if(
PAIRP(BgL_fz00_1748))
{ /* Llib/os.scm 944 */
BgL_pairz00_3256 = BgL_fz00_1748; }  else 
{ 
obj_t BgL_auxz00_6323;
BgL_auxz00_6323 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34289)), BGl_string3164z00zz__osz00, BGl_string3113z00zz__osz00, BgL_fz00_1748); 
FAILURE(BgL_auxz00_6323,BFALSE,BFALSE);} 
BgL_arg1669z00_1754 = 
CAR(BgL_pairz00_3256); } 
{ /* Llib/os.scm 944 */
obj_t BgL_pairz00_3257;
if(
PAIRP(BgL_fz00_1748))
{ /* Llib/os.scm 944 */
BgL_pairz00_3257 = BgL_fz00_1748; }  else 
{ 
obj_t BgL_auxz00_6330;
BgL_auxz00_6330 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34298)), BGl_string3164z00zz__osz00, BGl_string3113z00zz__osz00, BgL_fz00_1748); 
FAILURE(BgL_auxz00_6330,BFALSE,BFALSE);} 
{ /* Llib/os.scm 944 */
obj_t BgL_pairz00_3260;
{ /* Llib/os.scm 944 */
obj_t BgL_aux2961z00_4357;
BgL_aux2961z00_4357 = 
CDR(BgL_pairz00_3257); 
if(
PAIRP(BgL_aux2961z00_4357))
{ /* Llib/os.scm 944 */
BgL_pairz00_3260 = BgL_aux2961z00_4357; }  else 
{ 
obj_t BgL_auxz00_6337;
BgL_auxz00_6337 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34292)), BGl_string3164z00zz__osz00, BGl_string3113z00zz__osz00, BgL_aux2961z00_4357); 
FAILURE(BgL_auxz00_6337,BFALSE,BFALSE);} } 
BgL_arg1672z00_1755 = 
CAR(BgL_pairz00_3260); } } 
{ /* Llib/os.scm 944 */
obj_t BgL_auxz00_6349;obj_t BgL_auxz00_6342;
if(
STRINGP(BgL_arg1672z00_1755))
{ /* Llib/os.scm 944 */
BgL_auxz00_6349 = BgL_arg1672z00_1755
; }  else 
{ 
obj_t BgL_auxz00_6352;
BgL_auxz00_6352 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34299)), BGl_string3164z00zz__osz00, BGl_string3111z00zz__osz00, BgL_arg1672z00_1755); 
FAILURE(BgL_auxz00_6352,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1669z00_1754))
{ /* Llib/os.scm 944 */
BgL_auxz00_6342 = BgL_arg1669z00_1754
; }  else 
{ 
obj_t BgL_auxz00_6345;
BgL_auxz00_6345 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34290)), BGl_string3164z00zz__osz00, BGl_string3111z00zz__osz00, BgL_arg1669z00_1754); 
FAILURE(BgL_auxz00_6345,BFALSE,BFALSE);} 
BgL_aux2997z00_4393 = 
BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_6342, BgL_auxz00_6349); } }  else 
{ /* Llib/os.scm 946 */
obj_t BgL_runner1675z00_1758;
BgL_runner1675z00_1758 = BgL_fz00_1748; 
{ /* Llib/os.scm 946 */
obj_t BgL_aux1673z00_1756;
{ /* Llib/os.scm 946 */
obj_t BgL_pairz00_3261;
{ /* Llib/os.scm 946 */
obj_t BgL_aux2967z00_4363;
BgL_aux2967z00_4363 = BgL_runner1675z00_1758; 
if(
PAIRP(BgL_aux2967z00_4363))
{ /* Llib/os.scm 946 */
BgL_pairz00_3261 = BgL_aux2967z00_4363; }  else 
{ 
obj_t BgL_auxz00_6359;
BgL_auxz00_6359 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34314)), BGl_string3164z00zz__osz00, BGl_string3113z00zz__osz00, BgL_aux2967z00_4363); 
FAILURE(BgL_auxz00_6359,BFALSE,BFALSE);} } 
{ /* Llib/os.scm 946 */
obj_t BgL_aux2969z00_4365;
BgL_aux2969z00_4365 = 
CAR(BgL_pairz00_3261); 
if(
STRINGP(BgL_aux2969z00_4365))
{ /* Llib/os.scm 946 */
BgL_aux1673z00_1756 = BgL_aux2969z00_4365; }  else 
{ 
obj_t BgL_auxz00_6366;
BgL_auxz00_6366 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34314)), BGl_string3164z00zz__osz00, BGl_string3111z00zz__osz00, BgL_aux2969z00_4365); 
FAILURE(BgL_auxz00_6366,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 946 */
obj_t BgL_pairz00_3262;
{ /* Llib/os.scm 946 */
obj_t BgL_aux2971z00_4367;
BgL_aux2971z00_4367 = BgL_runner1675z00_1758; 
if(
PAIRP(BgL_aux2971z00_4367))
{ /* Llib/os.scm 946 */
BgL_pairz00_3262 = BgL_aux2971z00_4367; }  else 
{ 
obj_t BgL_auxz00_6372;
BgL_auxz00_6372 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34314)), BGl_string3164z00zz__osz00, BGl_string3113z00zz__osz00, BgL_aux2971z00_4367); 
FAILURE(BgL_auxz00_6372,BFALSE,BFALSE);} } 
BgL_runner1675z00_1758 = 
CDR(BgL_pairz00_3262); } 
{ /* Llib/os.scm 946 */
obj_t BgL_aux1674z00_1757;
{ /* Llib/os.scm 946 */
obj_t BgL_pairz00_3263;
{ /* Llib/os.scm 946 */
obj_t BgL_aux2973z00_4369;
BgL_aux2973z00_4369 = BgL_runner1675z00_1758; 
if(
PAIRP(BgL_aux2973z00_4369))
{ /* Llib/os.scm 946 */
BgL_pairz00_3263 = BgL_aux2973z00_4369; }  else 
{ 
obj_t BgL_auxz00_6379;
BgL_auxz00_6379 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34314)), BGl_string3164z00zz__osz00, BGl_string3113z00zz__osz00, BgL_aux2973z00_4369); 
FAILURE(BgL_auxz00_6379,BFALSE,BFALSE);} } 
{ /* Llib/os.scm 946 */
obj_t BgL_aux2975z00_4371;
BgL_aux2975z00_4371 = 
CAR(BgL_pairz00_3263); 
if(
STRINGP(BgL_aux2975z00_4371))
{ /* Llib/os.scm 946 */
BgL_aux1674z00_1757 = BgL_aux2975z00_4371; }  else 
{ 
obj_t BgL_auxz00_6386;
BgL_auxz00_6386 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34314)), BGl_string3164z00zz__osz00, BGl_string3111z00zz__osz00, BgL_aux2975z00_4371); 
FAILURE(BgL_auxz00_6386,BFALSE,BFALSE);} } } 
{ /* Llib/os.scm 946 */
obj_t BgL_pairz00_3264;
{ /* Llib/os.scm 946 */
obj_t BgL_aux2977z00_4373;
BgL_aux2977z00_4373 = BgL_runner1675z00_1758; 
if(
PAIRP(BgL_aux2977z00_4373))
{ /* Llib/os.scm 946 */
BgL_pairz00_3264 = BgL_aux2977z00_4373; }  else 
{ 
obj_t BgL_auxz00_6392;
BgL_auxz00_6392 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34314)), BGl_string3164z00zz__osz00, BGl_string3113z00zz__osz00, BgL_aux2977z00_4373); 
FAILURE(BgL_auxz00_6392,BFALSE,BFALSE);} } 
BgL_runner1675z00_1758 = 
CDR(BgL_pairz00_3264); } 
BgL_aux2997z00_4393 = 
BGl_makezd2filezd2pathz00zz__osz00(BgL_aux1673z00_1756, BgL_aux1674z00_1757, BgL_runner1675z00_1758); } } } } } }  else 
{ /* Llib/os.scm 957 */
bool_t BgL_test3789z00_6398;
{ /* Llib/os.scm 957 */
obj_t BgL_arg1660z00_1744;obj_t BgL_arg1661z00_1745;
{ /* Llib/os.scm 957 */
obj_t BgL_pairz00_3284;
if(
PAIRP(BgL_fz00_1730))
{ /* Llib/os.scm 957 */
BgL_pairz00_3284 = BgL_fz00_1730; }  else 
{ 
obj_t BgL_auxz00_6401;
BgL_auxz00_6401 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34566)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_fz00_1730); 
FAILURE(BgL_auxz00_6401,BFALSE,BFALSE);} 
BgL_arg1660z00_1744 = 
CAR(BgL_pairz00_3284); } 
{ /* Llib/os.scm 957 */
obj_t BgL_pairz00_3285;
if(
PAIRP(BgL_bz00_1731))
{ /* Llib/os.scm 957 */
BgL_pairz00_3285 = BgL_bz00_1731; }  else 
{ 
obj_t BgL_auxz00_6408;
BgL_auxz00_6408 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34574)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_bz00_1731); 
FAILURE(BgL_auxz00_6408,BFALSE,BFALSE);} 
BgL_arg1661z00_1745 = 
CAR(BgL_pairz00_3285); } 
{ /* Llib/os.scm 957 */
bool_t BgL_res2459z00_3301;
{ /* Llib/os.scm 957 */
obj_t BgL_string1z00_3286;obj_t BgL_string2z00_3287;
if(
STRINGP(BgL_arg1660z00_1744))
{ /* Llib/os.scm 957 */
BgL_string1z00_3286 = BgL_arg1660z00_1744; }  else 
{ 
obj_t BgL_auxz00_6415;
BgL_auxz00_6415 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34567)), BGl_string3126z00zz__osz00, BGl_string3111z00zz__osz00, BgL_arg1660z00_1744); 
FAILURE(BgL_auxz00_6415,BFALSE,BFALSE);} 
if(
STRINGP(BgL_arg1661z00_1745))
{ /* Llib/os.scm 957 */
BgL_string2z00_3287 = BgL_arg1661z00_1745; }  else 
{ 
obj_t BgL_auxz00_6421;
BgL_auxz00_6421 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34575)), BGl_string3126z00zz__osz00, BGl_string3111z00zz__osz00, BgL_arg1661z00_1745); 
FAILURE(BgL_auxz00_6421,BFALSE,BFALSE);} 
{ /* Llib/os.scm 957 */
long BgL_l1z00_3288;
BgL_l1z00_3288 = 
STRING_LENGTH(BgL_string1z00_3286); 
if(
(BgL_l1z00_3288==
STRING_LENGTH(BgL_string2z00_3287)))
{ /* Llib/os.scm 957 */
int BgL_arg1881z00_3291;
{ /* Llib/os.scm 957 */
char * BgL_auxz00_6431;char * BgL_tmpz00_6429;
BgL_auxz00_6431 = 
BSTRING_TO_STRING(BgL_string2z00_3287); 
BgL_tmpz00_6429 = 
BSTRING_TO_STRING(BgL_string1z00_3286); 
BgL_arg1881z00_3291 = 
memcmp(BgL_tmpz00_6429, BgL_auxz00_6431, BgL_l1z00_3288); } 
BgL_res2459z00_3301 = 
(
(long)(BgL_arg1881z00_3291)==((long)0)); }  else 
{ /* Llib/os.scm 957 */
BgL_res2459z00_3301 = ((bool_t)0); } } } 
BgL_test3789z00_6398 = BgL_res2459z00_3301; } } 
if(BgL_test3789z00_6398)
{ /* Llib/os.scm 960 */
obj_t BgL_arg1652z00_1738;obj_t BgL_arg1654z00_1739;
{ /* Llib/os.scm 960 */
obj_t BgL_pairz00_3302;
if(
PAIRP(BgL_fz00_1730))
{ /* Llib/os.scm 960 */
BgL_pairz00_3302 = BgL_fz00_1730; }  else 
{ 
obj_t BgL_auxz00_6438;
BgL_auxz00_6438 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34656)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_fz00_1730); 
FAILURE(BgL_auxz00_6438,BFALSE,BFALSE);} 
BgL_arg1652z00_1738 = 
CDR(BgL_pairz00_3302); } 
{ /* Llib/os.scm 960 */
obj_t BgL_pairz00_3303;
if(
PAIRP(BgL_bz00_1731))
{ /* Llib/os.scm 960 */
BgL_pairz00_3303 = BgL_bz00_1731; }  else 
{ 
obj_t BgL_auxz00_6445;
BgL_auxz00_6445 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34664)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_bz00_1731); 
FAILURE(BgL_auxz00_6445,BFALSE,BFALSE);} 
BgL_arg1654z00_1739 = 
CDR(BgL_pairz00_3303); } 
{ 
obj_t BgL_bz00_6451;obj_t BgL_fz00_6450;
BgL_fz00_6450 = BgL_arg1652z00_1738; 
BgL_bz00_6451 = BgL_arg1654z00_1739; 
BgL_bz00_1731 = BgL_bz00_6451; 
BgL_fz00_1730 = BgL_fz00_6450; 
goto BgL_zc3z04anonymousza31646ze3z87_1732;} }  else 
{ /* Llib/os.scm 958 */
obj_t BgL_arg1656z00_1740;
{ /* Llib/os.scm 958 */
obj_t BgL_arg1657z00_1741;
{ /* Llib/os.scm 958 */
long BgL_arg1658z00_1742;
{ /* Llib/os.scm 958 */
obj_t BgL_auxz00_6452;
{ /* Llib/os.scm 958 */
bool_t BgL_test3797z00_6453;
if(
PAIRP(BgL_bz00_1731))
{ /* Llib/os.scm 958 */
BgL_test3797z00_6453 = ((bool_t)1)
; }  else 
{ /* Llib/os.scm 958 */
BgL_test3797z00_6453 = 
NULLP(BgL_bz00_1731)
; } 
if(BgL_test3797z00_6453)
{ /* Llib/os.scm 958 */
BgL_auxz00_6452 = BgL_bz00_1731
; }  else 
{ 
obj_t BgL_auxz00_6457;
BgL_auxz00_6457 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34620)), BGl_string3126z00zz__osz00, BGl_string3166z00zz__osz00, BgL_bz00_1731); 
FAILURE(BgL_auxz00_6457,BFALSE,BFALSE);} } 
BgL_arg1658z00_1742 = 
bgl_list_length(BgL_auxz00_6452); } 
{ /* Llib/os.scm 958 */
obj_t BgL_list1659z00_1743;
BgL_list1659z00_1743 = 
MAKE_YOUNG_PAIR(BGl_string3161z00zz__osz00, BNIL); 
BgL_arg1657z00_1741 = 
BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
(int)(BgL_arg1658z00_1742), BgL_list1659z00_1743); } } 
BgL_arg1656z00_1740 = 
BGl_appendzd221011zd2zz__osz00(BgL_arg1657z00_1741, BgL_fz00_1730); } 
{ 
obj_t BgL_fz00_6466;
BgL_fz00_6466 = BgL_arg1656z00_1740; 
BgL_fz00_1748 = BgL_fz00_6466; 
goto BgL_zc3z04anonymousza31663ze3z87_1749;} } } } 
if(
STRINGP(BgL_aux2997z00_4393))
{ /* Llib/os.scm 950 */
return BgL_aux2997z00_4393;}  else 
{ 
obj_t BgL_auxz00_6469;
BgL_auxz00_6469 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34428)), BGl_string3165z00zz__osz00, BGl_string3111z00zz__osz00, BgL_aux2997z00_4393); 
FAILURE(BgL_auxz00_6469,BFALSE,BFALSE);} } } }  else 
{ /* Llib/os.scm 948 */
return BgL_namez00_43;} } } } } 

}



/* &relative-file-name */
obj_t BGl_z62relativezd2filezd2namez62zz__osz00(obj_t BgL_envz00_3959, obj_t BgL_namez00_3960, obj_t BgL_basez00_3961)
{
{ /* Llib/os.scm 938 */
{ /* Llib/os.scm 941 */
obj_t BgL_auxz00_6480;obj_t BgL_auxz00_6473;
if(
STRINGP(BgL_basez00_3961))
{ /* Llib/os.scm 941 */
BgL_auxz00_6480 = BgL_basez00_3961
; }  else 
{ 
obj_t BgL_auxz00_6483;
BgL_auxz00_6483 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34216)), BGl_string3167z00zz__osz00, BGl_string3111z00zz__osz00, BgL_basez00_3961); 
FAILURE(BgL_auxz00_6483,BFALSE,BFALSE);} 
if(
STRINGP(BgL_namez00_3960))
{ /* Llib/os.scm 941 */
BgL_auxz00_6473 = BgL_namez00_3960
; }  else 
{ 
obj_t BgL_auxz00_6476;
BgL_auxz00_6476 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)34216)), BGl_string3167z00zz__osz00, BGl_string3111z00zz__osz00, BgL_namez00_3960); 
FAILURE(BgL_auxz00_6476,BFALSE,BFALSE);} 
return 
BGl_relativezd2filezd2namez00zz__osz00(BgL_auxz00_6473, BgL_auxz00_6480);} } 

}



/* make-static-library-name */
BGL_EXPORTED_DEF obj_t BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t BgL_libnamez00_45)
{
{ /* Llib/os.scm 967 */
return 
string_append_3(BgL_libnamez00_45, BGl_string3087z00zz__osz00, 
string_to_bstring(STATIC_LIB_SUFFIX));} 

}



/* &make-static-library-name */
obj_t BGl_z62makezd2staticzd2libraryzd2namezb0zz__osz00(obj_t BgL_envz00_3962, obj_t BgL_libnamez00_3963)
{
{ /* Llib/os.scm 967 */
{ /* Llib/os.scm 968 */
obj_t BgL_auxz00_6490;
if(
STRINGP(BgL_libnamez00_3963))
{ /* Llib/os.scm 968 */
BgL_auxz00_6490 = BgL_libnamez00_3963
; }  else 
{ 
obj_t BgL_auxz00_6493;
BgL_auxz00_6493 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)35100)), BGl_string3168z00zz__osz00, BGl_string3111z00zz__osz00, BgL_libnamez00_3963); 
FAILURE(BgL_auxz00_6493,BFALSE,BFALSE);} 
return 
BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(BgL_auxz00_6490);} } 

}



/* make-shared-library-name */
BGL_EXPORTED_DEF obj_t BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t BgL_libnamez00_46)
{
{ /* Llib/os.scm 975 */
return 
string_append_3(BgL_libnamez00_46, BGl_string3087z00zz__osz00, 
string_to_bstring(SHARED_LIB_SUFFIX));} 

}



/* &make-shared-library-name */
obj_t BGl_z62makezd2sharedzd2libraryzd2namezb0zz__osz00(obj_t BgL_envz00_3964, obj_t BgL_libnamez00_3965)
{
{ /* Llib/os.scm 975 */
{ /* Llib/os.scm 976 */
obj_t BgL_auxz00_6500;
if(
STRINGP(BgL_libnamez00_3965))
{ /* Llib/os.scm 976 */
BgL_auxz00_6500 = BgL_libnamez00_3965
; }  else 
{ 
obj_t BgL_auxz00_6503;
BgL_auxz00_6503 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)35585)), BGl_string3169z00zz__osz00, BGl_string3111z00zz__osz00, BgL_libnamez00_3965); 
FAILURE(BgL_auxz00_6503,BFALSE,BFALSE);} 
return 
BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(BgL_auxz00_6500);} } 

}



/* sleep */
BGL_EXPORTED_DEF obj_t BGl_sleepz00zz__osz00(long BgL_msz00_47)
{
{ /* Llib/os.scm 981 */
bgl_sleep(BgL_msz00_47); BUNSPEC; 
return 
BINT(BgL_msz00_47);} 

}



/* &sleep */
obj_t BGl_z62sleepz62zz__osz00(obj_t BgL_envz00_3966, obj_t BgL_msz00_3967)
{
{ /* Llib/os.scm 981 */
{ /* Llib/os.scm 982 */
long BgL_auxz00_6510;
{ /* Llib/os.scm 982 */
obj_t BgL_tmpz00_6511;
if(
INTEGERP(BgL_msz00_3967))
{ /* Llib/os.scm 982 */
BgL_tmpz00_6511 = BgL_msz00_3967
; }  else 
{ 
obj_t BgL_auxz00_6514;
BgL_auxz00_6514 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)35907)), BGl_string3170z00zz__osz00, BGl_string3102z00zz__osz00, BgL_msz00_3967); 
FAILURE(BgL_auxz00_6514,BFALSE,BFALSE);} 
BgL_auxz00_6510 = 
(long)CINT(BgL_tmpz00_6511); } 
return 
BGl_sleepz00zz__osz00(BgL_auxz00_6510);} } 

}



/* _dynamic-load */
obj_t BGl__dynamiczd2loadzd2zz__osz00(obj_t BgL_env1139z00_52, obj_t BgL_opt1138z00_51)
{
{ /* Llib/os.scm 1002 */
{ /* Llib/os.scm 1002 */
obj_t BgL_g1140z00_1762;
BgL_g1140z00_1762 = 
VECTOR_REF(BgL_opt1138z00_51,((long)0)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1138z00_51)) { case ((long)1) : 

{ /* Llib/os.scm 1002 */

{ /* Llib/os.scm 1002 */
obj_t BgL_auxz00_6521;
if(
STRINGP(BgL_g1140z00_1762))
{ /* Llib/os.scm 1002 */
BgL_auxz00_6521 = BgL_g1140z00_1762
; }  else 
{ 
obj_t BgL_auxz00_6524;
BgL_auxz00_6524 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)36966)), BGl_string3174z00zz__osz00, BGl_string3111z00zz__osz00, BgL_g1140z00_1762); 
FAILURE(BgL_auxz00_6524,BFALSE,BFALSE);} 
return 
BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_6521, 
string_to_bstring(BGL_DYNAMIC_LOAD_INIT), BFALSE);} } break;case ((long)2) : 

{ /* Llib/os.scm 1002 */
obj_t BgL_initz00_1768;
BgL_initz00_1768 = 
VECTOR_REF(BgL_opt1138z00_51,((long)1)); 
{ /* Llib/os.scm 1002 */

{ /* Llib/os.scm 1002 */
obj_t BgL_auxz00_6531;
if(
STRINGP(BgL_g1140z00_1762))
{ /* Llib/os.scm 1002 */
BgL_auxz00_6531 = BgL_g1140z00_1762
; }  else 
{ 
obj_t BgL_auxz00_6534;
BgL_auxz00_6534 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)36966)), BGl_string3174z00zz__osz00, BGl_string3111z00zz__osz00, BgL_g1140z00_1762); 
FAILURE(BgL_auxz00_6534,BFALSE,BFALSE);} 
return 
BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_6531, BgL_initz00_1768, BFALSE);} } } break;case ((long)3) : 

{ /* Llib/os.scm 1002 */
obj_t BgL_initz00_1770;
BgL_initz00_1770 = 
VECTOR_REF(BgL_opt1138z00_51,((long)1)); 
{ /* Llib/os.scm 1002 */
obj_t BgL_modulez00_1771;
BgL_modulez00_1771 = 
VECTOR_REF(BgL_opt1138z00_51,((long)2)); 
{ /* Llib/os.scm 1002 */

{ /* Llib/os.scm 1002 */
obj_t BgL_auxz00_6541;
if(
STRINGP(BgL_g1140z00_1762))
{ /* Llib/os.scm 1002 */
BgL_auxz00_6541 = BgL_g1140z00_1762
; }  else 
{ 
obj_t BgL_auxz00_6544;
BgL_auxz00_6544 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)36966)), BGl_string3174z00zz__osz00, BGl_string3111z00zz__osz00, BgL_g1140z00_1762); 
FAILURE(BgL_auxz00_6544,BFALSE,BFALSE);} 
return 
BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_6541, BgL_initz00_1770, BgL_modulez00_1771);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3171z00zz__osz00, BGl_string3173z00zz__osz00, 
BINT(
VECTOR_LENGTH(BgL_opt1138z00_51)));} } } } 

}



/* dynamic-load */
BGL_EXPORTED_DEF obj_t BGl_dynamiczd2loadzd2zz__osz00(obj_t BgL_libz00_48, obj_t BgL_initz00_49, obj_t BgL_modulez00_50)
{
{ /* Llib/os.scm 1002 */
{ /* Llib/os.scm 1010 */
obj_t BgL_flibz00_1775;obj_t BgL_modz00_1776;
BgL_flibz00_1775 = 
BGl_findzd2filezf2pathz20zz__osz00(BgL_libz00_48, BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00); 
if(
CBOOL(BgL_modulez00_50))
{ /* Llib/os.scm 1018 */
obj_t BgL_arg1699z00_1792;
{ /* Llib/os.scm 1018 */
obj_t BgL_res2460z00_3306;
{ /* Llib/os.scm 1018 */
obj_t BgL_symbolz00_3305;
if(
SYMBOLP(BgL_modulez00_50))
{ /* Llib/os.scm 1018 */
BgL_symbolz00_3305 = BgL_modulez00_50; }  else 
{ 
obj_t BgL_auxz00_6559;
BgL_auxz00_6559 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)37496)), BGl_string3172z00zz__osz00, BGl_string3152z00zz__osz00, BgL_modulez00_50); 
FAILURE(BgL_auxz00_6559,BFALSE,BFALSE);} 
BgL_res2460z00_3306 = 
SYMBOL_TO_STRING(BgL_symbolz00_3305); } 
BgL_arg1699z00_1792 = BgL_res2460z00_3306; } 
BgL_modz00_1776 = 
bigloo_module_mangle(BGl_string3175z00zz__osz00, BgL_arg1699z00_1792); }  else 
{ /* Llib/os.scm 1014 */
BgL_modz00_1776 = BGl_string3124z00zz__osz00; } 
if(
STRINGP(BgL_flibz00_1775))
{ /* Llib/os.scm 1024 */
obj_t BgL_iniz00_1778;
if(
CBOOL(BgL_initz00_49))
{ /* Llib/os.scm 1024 */
BgL_iniz00_1778 = BgL_initz00_49; }  else 
{ /* Llib/os.scm 1024 */
BgL_iniz00_1778 = BGl_string3124z00zz__osz00; } 
{ /* Llib/os.scm 1024 */
obj_t BgL_valz00_1779;
{ /* Llib/os.scm 1025 */
char * BgL_tmpz00_6569;
{ /* Llib/os.scm 1025 */
obj_t BgL_tmpz00_6571;
if(
STRINGP(BgL_iniz00_1778))
{ /* Llib/os.scm 1025 */
BgL_tmpz00_6571 = BgL_iniz00_1778
; }  else 
{ 
obj_t BgL_auxz00_6574;
BgL_auxz00_6574 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)37672)), BGl_string3172z00zz__osz00, BGl_string3111z00zz__osz00, BgL_iniz00_1778); 
FAILURE(BgL_auxz00_6574,BFALSE,BFALSE);} 
BgL_tmpz00_6569 = 
BSTRING_TO_STRING(BgL_tmpz00_6571); } 
BgL_valz00_1779 = 
bgl_dload(
BSTRING_TO_STRING(BgL_flibz00_1775), BgL_tmpz00_6569, 
BSTRING_TO_STRING(BgL_modz00_1776)); } 
{ /* Llib/os.scm 1025 */

if(
(BgL_valz00_1779==BGl_symbol3176z00zz__osz00))
{ /* Llib/os.scm 1026 */
return 
BGl_errorz00zz__errorz00(BGl_string3178z00zz__osz00, BGl_string3179z00zz__osz00, BgL_flibz00_1775);}  else 
{ /* Llib/os.scm 1026 */
if(
(BgL_valz00_1779==BGl_symbol3180z00zz__osz00))
{ /* Llib/os.scm 1030 */
char * BgL_arg1691z00_1783;
BgL_arg1691z00_1783 = 
bgl_dload_error(); 
{ /* Llib/os.scm 1005 */
obj_t BgL_arg1701z00_3312;
BgL_arg1701z00_3312 = 
string_append(BGl_string3178z00zz__osz00, BgL_flibz00_1775); 
return 
BGl_errorz00zz__errorz00(BgL_arg1701z00_3312, 
string_to_bstring(BgL_arg1691z00_1783), BgL_flibz00_1775);} }  else 
{ /* Llib/os.scm 1026 */
if(
(BgL_valz00_1779==BGl_symbol3182z00zz__osz00))
{ /* Llib/os.scm 1033 */
bool_t BgL_test3816z00_6592;
if(
BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_initz00_49, 
string_to_bstring(BGL_DYNAMIC_LOAD_INIT)))
{ /* Llib/os.scm 1033 */
if(
CBOOL(BgL_modulez00_50))
{ /* Llib/os.scm 1033 */
BgL_test3816z00_6592 = ((bool_t)0)
; }  else 
{ /* Llib/os.scm 1033 */
BgL_test3816z00_6592 = ((bool_t)1)
; } }  else 
{ /* Llib/os.scm 1033 */
BgL_test3816z00_6592 = ((bool_t)0)
; } 
if(BgL_test3816z00_6592)
{ /* Llib/os.scm 1034 */
obj_t BgL_arg1695z00_1787;
BgL_arg1695z00_1787 = 
string_append(BGl_string3184z00zz__osz00, BgL_flibz00_1775); 
{ /* Llib/os.scm 1034 */
obj_t BgL_list1696z00_1788;
{ /* Llib/os.scm 1034 */
obj_t BgL_arg1697z00_1789;
{ /* Llib/os.scm 1034 */
obj_t BgL_arg1698z00_1790;
BgL_arg1698z00_1790 = 
MAKE_YOUNG_PAIR(BgL_initz00_49, BNIL); 
BgL_arg1697z00_1789 = 
MAKE_YOUNG_PAIR(BGl_string3185z00zz__osz00, BgL_arg1698z00_1790); } 
BgL_list1696z00_1788 = 
MAKE_YOUNG_PAIR(BgL_arg1695z00_1787, BgL_arg1697z00_1789); } 
return 
BGl_warningz00zz__errorz00(BgL_list1696z00_1788);} }  else 
{ /* Llib/os.scm 1033 */
if(
CBOOL(BgL_initz00_49))
{ /* Llib/os.scm 1037 */
return 
BGl_errorz00zz__errorz00(
string_append(BGl_string3178z00zz__osz00, BgL_flibz00_1775), BGl_string3186z00zz__osz00, BgL_initz00_49);}  else 
{ /* Llib/os.scm 1037 */
return BUNSPEC;} } }  else 
{ /* Llib/os.scm 1026 */
return BgL_valz00_1779;} } } } } }  else 
{ /* Llib/os.scm 1022 */
return 
BGl_errorz00zz__errorz00(BGl_string3178z00zz__osz00, BGl_string3187z00zz__osz00, BgL_libz00_48);} } } 

}



/* dynamic-unload */
BGL_EXPORTED_DEF obj_t BGl_dynamiczd2unloadzd2zz__osz00(obj_t BgL_libz00_53)
{
{ /* Llib/os.scm 1049 */
{ /* Llib/os.scm 1050 */
obj_t BgL_flibz00_1803;
BgL_flibz00_1803 = 
BGl_findzd2filezf2pathz20zz__osz00(BgL_libz00_53, BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00); 
if(
STRINGP(BgL_flibz00_1803))
{ /* Llib/os.scm 1059 */
int BgL_arg1704z00_1805;
BgL_arg1704z00_1805 = 
bgl_dunload(BgL_flibz00_1803); 
return 
BBOOL(
(
(long)(BgL_arg1704z00_1805)==((long)0)));}  else 
{ /* Llib/os.scm 1057 */
return 
BGl_errorz00zz__errorz00(BGl_string3188z00zz__osz00, BGl_string3187z00zz__osz00, BgL_libz00_53);} } } 

}



/* &dynamic-unload */
obj_t BGl_z62dynamiczd2unloadzb0zz__osz00(obj_t BgL_envz00_3968, obj_t BgL_libz00_3969)
{
{ /* Llib/os.scm 1049 */
{ /* Llib/os.scm 1050 */
obj_t BgL_auxz00_6616;
if(
STRINGP(BgL_libz00_3969))
{ /* Llib/os.scm 1050 */
BgL_auxz00_6616 = BgL_libz00_3969
; }  else 
{ 
obj_t BgL_auxz00_6619;
BgL_auxz00_6619 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)38428)), BGl_string3189z00zz__osz00, BGl_string3111z00zz__osz00, BgL_libz00_3969); 
FAILURE(BgL_auxz00_6619,BFALSE,BFALSE);} 
return 
BGl_dynamiczd2unloadzd2zz__osz00(BgL_auxz00_6616);} } 

}



/* _dynamic-load-symbol */
obj_t BGl__dynamiczd2loadzd2symbolz00zz__osz00(obj_t BgL_env1144z00_58, obj_t BgL_opt1143z00_57)
{
{ /* Llib/os.scm 1064 */
{ /* Llib/os.scm 1064 */
obj_t BgL_g1145z00_1806;obj_t BgL_g1146z00_1807;
BgL_g1145z00_1806 = 
VECTOR_REF(BgL_opt1143z00_57,((long)0)); 
BgL_g1146z00_1807 = 
VECTOR_REF(BgL_opt1143z00_57,((long)1)); 
{ 

switch( 
VECTOR_LENGTH(BgL_opt1143z00_57)) { case ((long)2) : 

{ /* Llib/os.scm 1064 */

{ /* Llib/os.scm 1064 */
obj_t BgL_libz00_3319;obj_t BgL_namez00_3320;
if(
STRINGP(BgL_g1145z00_1806))
{ /* Llib/os.scm 1064 */
BgL_libz00_3319 = BgL_g1145z00_1806; }  else 
{ 
obj_t BgL_auxz00_6628;
BgL_auxz00_6628 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)38937)), BGl_string3193z00zz__osz00, BGl_string3111z00zz__osz00, BgL_g1145z00_1806); 
FAILURE(BgL_auxz00_6628,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1146z00_1807))
{ /* Llib/os.scm 1064 */
BgL_namez00_3320 = BgL_g1146z00_1807; }  else 
{ 
obj_t BgL_auxz00_6634;
BgL_auxz00_6634 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)38937)), BGl_string3193z00zz__osz00, BGl_string3111z00zz__osz00, BgL_g1146z00_1807); 
FAILURE(BgL_auxz00_6634,BFALSE,BFALSE);} 
return 
bgl_dlsym(BgL_libz00_3319, BgL_namez00_3320, BgL_namez00_3320);} } break;case ((long)3) : 

{ /* Llib/os.scm 1064 */
obj_t BgL_modulez00_1812;
BgL_modulez00_1812 = 
VECTOR_REF(BgL_opt1143z00_57,((long)2)); 
{ /* Llib/os.scm 1064 */

{ /* Llib/os.scm 1064 */
obj_t BgL_libz00_3324;obj_t BgL_namez00_3325;
if(
STRINGP(BgL_g1145z00_1806))
{ /* Llib/os.scm 1064 */
BgL_libz00_3324 = BgL_g1145z00_1806; }  else 
{ 
obj_t BgL_auxz00_6642;
BgL_auxz00_6642 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)38937)), BGl_string3193z00zz__osz00, BGl_string3111z00zz__osz00, BgL_g1145z00_1806); 
FAILURE(BgL_auxz00_6642,BFALSE,BFALSE);} 
if(
STRINGP(BgL_g1146z00_1807))
{ /* Llib/os.scm 1064 */
BgL_namez00_3325 = BgL_g1146z00_1807; }  else 
{ 
obj_t BgL_auxz00_6648;
BgL_auxz00_6648 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)38937)), BGl_string3193z00zz__osz00, BGl_string3111z00zz__osz00, BgL_g1146z00_1807); 
FAILURE(BgL_auxz00_6648,BFALSE,BFALSE);} 
{ /* Llib/os.scm 1065 */
obj_t BgL_symz00_3326;
if(
STRINGP(BgL_modulez00_1812))
{ /* Llib/os.scm 1065 */
BgL_symz00_3326 = 
bigloo_module_mangle(BgL_namez00_3325, BgL_modulez00_1812); }  else 
{ /* Llib/os.scm 1065 */
BgL_symz00_3326 = BgL_namez00_3325; } 
return 
bgl_dlsym(BgL_libz00_3324, BgL_namez00_3325, BgL_symz00_3326);} } } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3190z00zz__osz00, BGl_string3192z00zz__osz00, 
BINT(
VECTOR_LENGTH(BgL_opt1143z00_57)));} } } } 

}



/* dynamic-load-symbol */
BGL_EXPORTED_DEF obj_t BGl_dynamiczd2loadzd2symbolz00zz__osz00(obj_t BgL_libz00_54, obj_t BgL_namez00_55, obj_t BgL_modulez00_56)
{
{ /* Llib/os.scm 1064 */
{ /* Llib/os.scm 1065 */
obj_t BgL_symz00_3329;
if(
STRINGP(BgL_modulez00_56))
{ /* Llib/os.scm 1065 */
BgL_symz00_3329 = 
bigloo_module_mangle(BgL_namez00_55, BgL_modulez00_56); }  else 
{ /* Llib/os.scm 1065 */
BgL_symz00_3329 = BgL_namez00_55; } 
return 
bgl_dlsym(BgL_libz00_54, BgL_namez00_55, BgL_symz00_3329);} } 

}



/* dynamic-load-symbol-get */
BGL_EXPORTED_DEF obj_t BGl_dynamiczd2loadzd2symbolzd2getzd2zz__osz00(obj_t BgL_symz00_59)
{
{ /* Llib/os.scm 1071 */
return 
bgl_dlsym_get(BgL_symz00_59);} 

}



/* &dynamic-load-symbol-get */
obj_t BGl_z62dynamiczd2loadzd2symbolzd2getzb0zz__osz00(obj_t BgL_envz00_3970, obj_t BgL_symz00_3971)
{
{ /* Llib/os.scm 1071 */
{ /* Llib/os.scm 1072 */
obj_t BgL_auxz00_6666;
if(
CUSTOMP(BgL_symz00_3971))
{ /* Llib/os.scm 1072 */
BgL_auxz00_6666 = BgL_symz00_3971
; }  else 
{ 
obj_t BgL_auxz00_6669;
BgL_auxz00_6669 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)39385)), BGl_string3194z00zz__osz00, BGl_string3195z00zz__osz00, BgL_symz00_3971); 
FAILURE(BgL_auxz00_6669,BFALSE,BFALSE);} 
return 
BGl_dynamiczd2loadzd2symbolzd2getzd2zz__osz00(BgL_auxz00_6666);} } 

}



/* dynamic-load-symbol-set */
BGL_EXPORTED_DEF obj_t BGl_dynamiczd2loadzd2symbolzd2setzd2zz__osz00(obj_t BgL_symz00_60, obj_t BgL_valz00_61)
{
{ /* Llib/os.scm 1077 */
return 
bgl_dlsym_set(BgL_symz00_60, BgL_valz00_61);} 

}



/* &dynamic-load-symbol-set */
obj_t BGl_z62dynamiczd2loadzd2symbolzd2setzb0zz__osz00(obj_t BgL_envz00_3972, obj_t BgL_symz00_3973, obj_t BgL_valz00_3974)
{
{ /* Llib/os.scm 1077 */
{ /* Llib/os.scm 1078 */
obj_t BgL_auxz00_6675;
if(
CUSTOMP(BgL_symz00_3973))
{ /* Llib/os.scm 1078 */
BgL_auxz00_6675 = BgL_symz00_3973
; }  else 
{ 
obj_t BgL_auxz00_6678;
BgL_auxz00_6678 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)39695)), BGl_string3196z00zz__osz00, BGl_string3195z00zz__osz00, BgL_symz00_3973); 
FAILURE(BgL_auxz00_6678,BFALSE,BFALSE);} 
return 
BGl_dynamiczd2loadzd2symbolzd2setzd2zz__osz00(BgL_auxz00_6675, BgL_valz00_3974);} } 

}



/* unix-path->list */
BGL_EXPORTED_DEF obj_t BGl_unixzd2pathzd2ze3listze3zz__osz00(obj_t BgL_strz00_62)
{
{ /* Llib/os.scm 1083 */
{ /* Llib/os.scm 1084 */
long BgL_stopz00_1816;
BgL_stopz00_1816 = 
STRING_LENGTH(BgL_strz00_62); 
{ 
long BgL_markz00_1820;long BgL_rz00_1821;obj_t BgL_resz00_1822;
BgL_markz00_1820 = ((long)0); 
BgL_rz00_1821 = ((long)0); 
BgL_resz00_1822 = BNIL; 
BgL_zc3z04anonymousza31709ze3z87_1823:
if(
(BgL_stopz00_1816==BgL_rz00_1821))
{ /* Llib/os.scm 1091 */
obj_t BgL_resz00_1825;
if(
(BgL_markz00_1820<BgL_rz00_1821))
{ /* Llib/os.scm 1091 */
BgL_resz00_1825 = 
MAKE_YOUNG_PAIR(
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_62, BgL_markz00_1820, BgL_rz00_1821), BgL_resz00_1822); }  else 
{ /* Llib/os.scm 1091 */
BgL_resz00_1825 = BgL_resz00_1822; } 
return 
bgl_reverse_bang(BgL_resz00_1825);}  else 
{ /* Llib/os.scm 1095 */
bool_t BgL_test3832z00_6691;
{ /* Llib/os.scm 1095 */
unsigned char BgL_char2z00_3344;
BgL_char2z00_3344 = 
(unsigned char)(PATH_SEPARATOR); 
{ /* Llib/os.scm 1095 */
unsigned char BgL_tmpz00_6693;
{ /* Llib/os.scm 1095 */
long BgL_l2835z00_4231;
BgL_l2835z00_4231 = 
STRING_LENGTH(BgL_strz00_62); 
if(
BOUND_CHECK(BgL_rz00_1821, BgL_l2835z00_4231))
{ /* Llib/os.scm 1095 */
BgL_tmpz00_6693 = 
STRING_REF(BgL_strz00_62, BgL_rz00_1821)
; }  else 
{ 
obj_t BgL_auxz00_6698;
BgL_auxz00_6698 = 
BGl_indexzd2outzd2ofzd2boundszd2errorz00zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)40234)), BGl_string3118z00zz__osz00, BgL_strz00_62, 
(int)(BgL_l2835z00_4231), 
(int)(BgL_rz00_1821)); 
FAILURE(BgL_auxz00_6698,BFALSE,BFALSE);} } 
BgL_test3832z00_6691 = 
(BgL_tmpz00_6693==BgL_char2z00_3344); } } 
if(BgL_test3832z00_6691)
{ /* Llib/os.scm 1095 */
if(
(BgL_markz00_1820<BgL_rz00_1821))
{ /* Llib/os.scm 1097 */
long BgL_arg1716z00_1831;long BgL_arg1717z00_1832;obj_t BgL_arg1719z00_1833;
BgL_arg1716z00_1831 = 
(((long)1)+BgL_rz00_1821); 
BgL_arg1717z00_1832 = 
(((long)1)+BgL_rz00_1821); 
BgL_arg1719z00_1833 = 
MAKE_YOUNG_PAIR(
BGl_substringz00zz__r4_strings_6_7z00(BgL_strz00_62, BgL_markz00_1820, BgL_rz00_1821), BgL_resz00_1822); 
{ 
obj_t BgL_resz00_6713;long BgL_rz00_6712;long BgL_markz00_6711;
BgL_markz00_6711 = BgL_arg1716z00_1831; 
BgL_rz00_6712 = BgL_arg1717z00_1832; 
BgL_resz00_6713 = BgL_arg1719z00_1833; 
BgL_resz00_1822 = BgL_resz00_6713; 
BgL_rz00_1821 = BgL_rz00_6712; 
BgL_markz00_1820 = BgL_markz00_6711; 
goto BgL_zc3z04anonymousza31709ze3z87_1823;} }  else 
{ 
long BgL_rz00_6716;long BgL_markz00_6714;
BgL_markz00_6714 = 
(((long)1)+BgL_rz00_1821); 
BgL_rz00_6716 = 
(((long)1)+BgL_rz00_1821); 
BgL_rz00_1821 = BgL_rz00_6716; 
BgL_markz00_1820 = BgL_markz00_6714; 
goto BgL_zc3z04anonymousza31709ze3z87_1823;} }  else 
{ 
long BgL_rz00_6718;
BgL_rz00_6718 = 
(((long)1)+BgL_rz00_1821); 
BgL_rz00_1821 = BgL_rz00_6718; 
goto BgL_zc3z04anonymousza31709ze3z87_1823;} } } } } 

}



/* &unix-path->list */
obj_t BGl_z62unixzd2pathzd2ze3listz81zz__osz00(obj_t BgL_envz00_3975, obj_t BgL_strz00_3976)
{
{ /* Llib/os.scm 1083 */
{ /* Llib/os.scm 1084 */
obj_t BgL_auxz00_6720;
if(
STRINGP(BgL_strz00_3976))
{ /* Llib/os.scm 1084 */
BgL_auxz00_6720 = BgL_strz00_3976
; }  else 
{ 
obj_t BgL_auxz00_6723;
BgL_auxz00_6723 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)39977)), BGl_string3197z00zz__osz00, BGl_string3111z00zz__osz00, BgL_strz00_3976); 
FAILURE(BgL_auxz00_6723,BFALSE,BFALSE);} 
return 
BGl_unixzd2pathzd2ze3listze3zz__osz00(BgL_auxz00_6720);} } 

}



/* getuid */
BGL_EXPORTED_DEF int BGl_getuidz00zz__osz00()
{
{ /* Llib/os.scm 1105 */
return 
bgl_getuid();} 

}



/* &getuid */
obj_t BGl_z62getuidz62zz__osz00(obj_t BgL_envz00_3977)
{
{ /* Llib/os.scm 1105 */
return 
BINT(
BGl_getuidz00zz__osz00());} 

}



/* setuid */
BGL_EXPORTED_DEF obj_t BGl_setuidz00zz__osz00(int BgL_uidz00_63)
{
{ /* Llib/os.scm 1115 */
return 
BINT(
bgl_setuid(BgL_uidz00_63));} 

}



/* &setuid */
obj_t BGl_z62setuidz62zz__osz00(obj_t BgL_envz00_3978, obj_t BgL_uidz00_3979)
{
{ /* Llib/os.scm 1115 */
{ /* Llib/os.scm 1118 */
int BgL_auxz00_6733;
{ /* Llib/os.scm 1118 */
obj_t BgL_tmpz00_6734;
if(
INTEGERP(BgL_uidz00_3979))
{ /* Llib/os.scm 1118 */
BgL_tmpz00_6734 = BgL_uidz00_3979
; }  else 
{ 
obj_t BgL_auxz00_6737;
BgL_auxz00_6737 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)41032)), BGl_string3198z00zz__osz00, BGl_string3102z00zz__osz00, BgL_uidz00_3979); 
FAILURE(BgL_auxz00_6737,BFALSE,BFALSE);} 
BgL_auxz00_6733 = 
CINT(BgL_tmpz00_6734); } 
return 
BGl_setuidz00zz__osz00(BgL_auxz00_6733);} } 

}



/* getgid */
BGL_EXPORTED_DEF int BGl_getgidz00zz__osz00()
{
{ /* Llib/os.scm 1125 */
return 
bgl_getgid();} 

}



/* &getgid */
obj_t BGl_z62getgidz62zz__osz00(obj_t BgL_envz00_3980)
{
{ /* Llib/os.scm 1125 */
return 
BINT(
BGl_getgidz00zz__osz00());} 

}



/* setgid */
BGL_EXPORTED_DEF obj_t BGl_setgidz00zz__osz00(int BgL_uidz00_64)
{
{ /* Llib/os.scm 1135 */
return 
BINT(
bgl_setgid(BgL_uidz00_64));} 

}



/* &setgid */
obj_t BGl_z62setgidz62zz__osz00(obj_t BgL_envz00_3981, obj_t BgL_uidz00_3982)
{
{ /* Llib/os.scm 1135 */
{ /* Llib/os.scm 1138 */
int BgL_auxz00_6748;
{ /* Llib/os.scm 1138 */
obj_t BgL_tmpz00_6749;
if(
INTEGERP(BgL_uidz00_3982))
{ /* Llib/os.scm 1138 */
BgL_tmpz00_6749 = BgL_uidz00_3982
; }  else 
{ 
obj_t BgL_auxz00_6752;
BgL_auxz00_6752 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)41713)), BGl_string3199z00zz__osz00, BGl_string3102z00zz__osz00, BgL_uidz00_3982); 
FAILURE(BgL_auxz00_6752,BFALSE,BFALSE);} 
BgL_auxz00_6748 = 
CINT(BgL_tmpz00_6749); } 
return 
BGl_setgidz00zz__osz00(BgL_auxz00_6748);} } 

}



/* getpwnam */
BGL_EXPORTED_DEF obj_t BGl_getpwnamz00zz__osz00(obj_t BgL_namez00_65)
{
{ /* Llib/os.scm 1145 */
return 
bgl_getpwnam(
BSTRING_TO_STRING(BgL_namez00_65));} 

}



/* &getpwnam */
obj_t BGl_z62getpwnamz62zz__osz00(obj_t BgL_envz00_3983, obj_t BgL_namez00_3984)
{
{ /* Llib/os.scm 1145 */
{ /* Llib/os.scm 1148 */
obj_t BgL_auxz00_6760;
if(
STRINGP(BgL_namez00_3984))
{ /* Llib/os.scm 1148 */
BgL_auxz00_6760 = BgL_namez00_3984
; }  else 
{ 
obj_t BgL_auxz00_6763;
BgL_auxz00_6763 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)42083)), BGl_string3200z00zz__osz00, BGl_string3111z00zz__osz00, BgL_namez00_3984); 
FAILURE(BgL_auxz00_6763,BFALSE,BFALSE);} 
return 
BGl_getpwnamz00zz__osz00(BgL_auxz00_6760);} } 

}



/* getpwuid */
BGL_EXPORTED_DEF obj_t BGl_getpwuidz00zz__osz00(int BgL_uidz00_66)
{
{ /* Llib/os.scm 1155 */
return 
bgl_getpwuid(BgL_uidz00_66);} 

}



/* &getpwuid */
obj_t BGl_z62getpwuidz62zz__osz00(obj_t BgL_envz00_3985, obj_t BgL_uidz00_3986)
{
{ /* Llib/os.scm 1155 */
{ /* Llib/os.scm 1158 */
int BgL_auxz00_6769;
{ /* Llib/os.scm 1158 */
obj_t BgL_tmpz00_6770;
if(
INTEGERP(BgL_uidz00_3986))
{ /* Llib/os.scm 1158 */
BgL_tmpz00_6770 = BgL_uidz00_3986
; }  else 
{ 
obj_t BgL_auxz00_6773;
BgL_auxz00_6773 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)42411)), BGl_string3201z00zz__osz00, BGl_string3102z00zz__osz00, BgL_uidz00_3986); 
FAILURE(BgL_auxz00_6773,BFALSE,BFALSE);} 
BgL_auxz00_6769 = 
CINT(BgL_tmpz00_6770); } 
return 
BGl_getpwuidz00zz__osz00(BgL_auxz00_6769);} } 

}



/* getpid */
BGL_EXPORTED_DEF int BGl_getpidz00zz__osz00()
{
{ /* Llib/os.scm 1164 */
return 
getpid();} 

}



/* &getpid */
obj_t BGl_z62getpidz62zz__osz00(obj_t BgL_envz00_3987)
{
{ /* Llib/os.scm 1164 */
return 
BINT(
BGl_getpidz00zz__osz00());} 

}



/* getppid */
BGL_EXPORTED_DEF int BGl_getppidz00zz__osz00()
{
{ /* Llib/os.scm 1172 */
return 
getppid();} 

}



/* &getppid */
obj_t BGl_z62getppidz62zz__osz00(obj_t BgL_envz00_3988)
{
{ /* Llib/os.scm 1172 */
return 
BINT(
BGl_getppidz00zz__osz00());} 

}



/* getgroups */
BGL_EXPORTED_DEF obj_t BGl_getgroupsz00zz__osz00()
{
{ /* Llib/os.scm 1180 */
return 
bgl_getgroups();} 

}



/* &getgroups */
obj_t BGl_z62getgroupsz62zz__osz00(obj_t BgL_envz00_3989)
{
{ /* Llib/os.scm 1180 */
return 
BGl_getgroupsz00zz__osz00();} 

}



/* ioctl-register-request! */
BGL_EXPORTED_DEF obj_t BGl_ioctlzd2registerzd2requestz12z12zz__osz00(obj_t BgL_namez00_67, uint64_t BgL_valz00_68)
{
{ /* Llib/os.scm 1194 */
{ /* Llib/os.scm 1195 */
obj_t BgL_arg1726z00_3359;
BgL_arg1726z00_3359 = 
MAKE_YOUNG_PAIR(BgL_namez00_67, 
BGL_UINT64_TO_BUINT64(BgL_valz00_68)); 
return ( 
BGl_ioctlzd2requestszd2tablez00zz__osz00 = 
MAKE_YOUNG_PAIR(BgL_arg1726z00_3359, BGl_ioctlzd2requestszd2tablez00zz__osz00), BUNSPEC) ;} } 

}



/* &ioctl-register-request! */
obj_t BGl_z62ioctlzd2registerzd2requestz12z70zz__osz00(obj_t BgL_envz00_3990, obj_t BgL_namez00_3991, obj_t BgL_valz00_3992)
{
{ /* Llib/os.scm 1194 */
{ /* Llib/os.scm 1195 */
uint64_t BgL_auxz00_6797;obj_t BgL_auxz00_6790;
{ /* Llib/os.scm 1195 */
obj_t BgL_tmpz00_6798;
if(
BGL_UINT64P(BgL_valz00_3992))
{ /* Llib/os.scm 1195 */
BgL_tmpz00_6798 = BgL_valz00_3992
; }  else 
{ 
obj_t BgL_auxz00_6801;
BgL_auxz00_6801 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)43930)), BGl_string3202z00zz__osz00, BGl_string3203z00zz__osz00, BgL_valz00_3992); 
FAILURE(BgL_auxz00_6801,BFALSE,BFALSE);} 
BgL_auxz00_6797 = 
BGL_BINT64_TO_INT64(BgL_tmpz00_6798); } 
if(
STRINGP(BgL_namez00_3991))
{ /* Llib/os.scm 1195 */
BgL_auxz00_6790 = BgL_namez00_3991
; }  else 
{ 
obj_t BgL_auxz00_6793;
BgL_auxz00_6793 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)43930)), BGl_string3202z00zz__osz00, BGl_string3111z00zz__osz00, BgL_namez00_3991); 
FAILURE(BgL_auxz00_6793,BFALSE,BFALSE);} 
return 
BGl_ioctlzd2registerzd2requestz12z12zz__osz00(BgL_auxz00_6790, BgL_auxz00_6797);} } 

}



/* request->elong */
long BGl_requestzd2ze3elongz31zz__osz00(obj_t BgL_reqz00_69)
{
{ /* Llib/os.scm 1200 */
{ 
obj_t BgL_objz00_1842;
{ /* Llib/os.scm 1201 */
obj_t BgL_tmpz00_6807;
{ /* Llib/os.scm 1201 */
obj_t BgL_aux3049z00_4445;
BgL_objz00_1842 = BgL_reqz00_69; 
BgL_zc3z04anonymousza31727ze3z87_1843:
if(
ELONGP(BgL_objz00_1842))
{ /* Llib/os.scm 1203 */
BgL_aux3049z00_4445 = BgL_objz00_1842; }  else 
{ /* Llib/os.scm 1203 */
if(
INTEGERP(BgL_objz00_1842))
{ /* Llib/os.scm 1206 */
long BgL_res2483z00_3363;
{ /* Llib/os.scm 1206 */
long BgL_tmpz00_6812;
BgL_tmpz00_6812 = 
(long)CINT(BgL_objz00_1842); 
BgL_res2483z00_3363 = 
(long)(BgL_tmpz00_6812); } 
BgL_aux3049z00_4445 = 
make_belong(BgL_res2483z00_3363); }  else 
{ /* Llib/os.scm 1205 */
if(
REALP(BgL_objz00_1842))
{ /* Llib/os.scm 1208 */
long BgL_res2485z00_3367;
{ /* Llib/os.scm 1208 */
double BgL_xz00_3366;
BgL_xz00_3366 = 
REAL_TO_DOUBLE(BgL_objz00_1842); 
{ /* Llib/os.scm 1208 */
long BgL_tmpz00_6819;
BgL_tmpz00_6819 = 
(long)(BgL_xz00_3366); 
BgL_res2485z00_3367 = 
(long)(BgL_tmpz00_6819); } } 
BgL_aux3049z00_4445 = 
make_belong(BgL_res2485z00_3367); }  else 
{ /* Llib/os.scm 1207 */
if(
STRINGP(BgL_objz00_1842))
{ /* Llib/os.scm 1210 */
obj_t BgL_cellz00_1848;
BgL_cellz00_1848 = 
BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_1842, BGl_ioctlzd2requestszd2tablez00zz__osz00); 
if(
PAIRP(BgL_cellz00_1848))
{ /* Llib/os.scm 1211 */
BgL_aux3049z00_4445 = 
CDR(BgL_cellz00_1848); }  else 
{ /* Llib/os.scm 1213 */
obj_t BgL_arg1733z00_1850;
{ /* Ieee/number.scm 165 */

BgL_arg1733z00_1850 = 
BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(BgL_objz00_1842, 
BINT(((long)10))); } 
{ 
obj_t BgL_objz00_6831;
BgL_objz00_6831 = BgL_arg1733z00_1850; 
BgL_objz00_1842 = BgL_objz00_6831; 
goto BgL_zc3z04anonymousza31727ze3z87_1843;} } }  else 
{ /* Llib/os.scm 1209 */
if(
BIGNUMP(BgL_objz00_1842))
{ /* Llib/os.scm 1215 */
long BgL_tmpz00_6834;
BgL_tmpz00_6834 = 
bgl_bignum_to_long(BgL_objz00_1842); 
BgL_aux3049z00_4445 = 
make_belong(BgL_tmpz00_6834); }  else 
{ /* Llib/os.scm 1214 */
BgL_aux3049z00_4445 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3204z00zz__osz00, BGl_string3205z00zz__osz00, BgL_reqz00_69); } } } } } 
if(
ELONGP(BgL_aux3049z00_4445))
{ /* Llib/os.scm 1201 */
BgL_tmpz00_6807 = BgL_aux3049z00_4445
; }  else 
{ 
obj_t BgL_auxz00_6840;
BgL_auxz00_6840 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)44265)), BGl_string3206z00zz__osz00, BGl_string3207z00zz__osz00, BgL_aux3049z00_4445); 
FAILURE(BgL_auxz00_6840,BFALSE,BFALSE);} } 
return 
BELONG_TO_LONG(BgL_tmpz00_6807);} } } 

}



/* ioctl */
BGL_EXPORTED_DEF bool_t BGl_ioctlz00zz__osz00(obj_t BgL_devz00_70, obj_t BgL_requestz00_71, obj_t BgL_valz00_72)
{
{ /* Llib/os.scm 1222 */
{ 
obj_t BgL_nz00_1858;
{ /* Llib/os.scm 1234 */
long BgL_arg1736z00_1856;obj_t BgL_arg1737z00_1857;
BgL_arg1736z00_1856 = 
BGl_requestzd2ze3elongz31zz__osz00(BgL_requestz00_71); 
BgL_nz00_1858 = BgL_valz00_72; 
BgL_lambda1738z00_1859:
if(
ELONGP(BgL_nz00_1858))
{ /* Llib/os.scm 1226 */
BgL_arg1737z00_1857 = BgL_nz00_1858; }  else 
{ /* Llib/os.scm 1226 */
if(
INTEGERP(BgL_nz00_1858))
{ /* Llib/os.scm 1227 */
long BgL_res2492z00_3377;
{ /* Llib/os.scm 1227 */
long BgL_tmpz00_6850;
BgL_tmpz00_6850 = 
(long)CINT(BgL_nz00_1858); 
BgL_res2492z00_3377 = 
(long)(BgL_tmpz00_6850); } 
BgL_arg1737z00_1857 = 
make_belong(BgL_res2492z00_3377); }  else 
{ /* Llib/os.scm 1227 */
if(
BIGNUMP(BgL_nz00_1858))
{ /* Llib/os.scm 1228 */
long BgL_tmpz00_6856;
BgL_tmpz00_6856 = 
bgl_bignum_to_long(BgL_nz00_1858); 
BgL_arg1737z00_1857 = 
make_belong(BgL_tmpz00_6856); }  else 
{ /* Llib/os.scm 1228 */
if(
STRINGP(BgL_nz00_1858))
{ /* Ieee/fixnum.scm 985 */

{ /* Ieee/fixnum.scm 985 */
long BgL_tmpz00_6861;
BgL_tmpz00_6861 = 
BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(BgL_nz00_1858, ((long)10)); 
BgL_arg1737z00_1857 = 
make_belong(BgL_tmpz00_6861); } }  else 
{ /* Llib/os.scm 1230 */
bool_t BgL_test3853z00_6864;
if(
INTEGERP(BgL_nz00_1858))
{ /* Llib/os.scm 1230 */
BgL_test3853z00_6864 = ((bool_t)1)
; }  else 
{ /* Llib/os.scm 1230 */
BgL_test3853z00_6864 = 
REALP(BgL_nz00_1858)
; } 
if(BgL_test3853z00_6864)
{ /* Llib/os.scm 1230 */
long BgL_arg1745z00_1867;
{ /* Llib/os.scm 1230 */
double BgL_xz00_3384;
{ /* Llib/os.scm 1230 */
obj_t BgL_tmpz00_6868;
if(
REALP(BgL_nz00_1858))
{ /* Llib/os.scm 1230 */
BgL_tmpz00_6868 = BgL_nz00_1858
; }  else 
{ 
obj_t BgL_auxz00_6871;
BgL_auxz00_6871 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)45097)), BGl_string3208z00zz__osz00, BGl_string3209z00zz__osz00, BgL_nz00_1858); 
FAILURE(BgL_auxz00_6871,BFALSE,BFALSE);} 
BgL_xz00_3384 = 
REAL_TO_DOUBLE(BgL_tmpz00_6868); } 
BgL_arg1745z00_1867 = 
(long)(BgL_xz00_3384); } 
{ 
obj_t BgL_nz00_6877;
BgL_nz00_6877 = 
BINT(BgL_arg1745z00_1867); 
BgL_nz00_1858 = BgL_nz00_6877; 
goto BgL_lambda1738z00_1859;} }  else 
{ /* Llib/os.scm 1230 */
BgL_arg1737z00_1857 = 
BGl_bigloozd2typezd2errorz00zz__errorz00(BGl_string3204z00zz__osz00, BGl_string3210z00zz__osz00, BgL_nz00_1858); } } } } } 
{ /* Llib/os.scm 1234 */
long BgL_tmpz00_6880;
{ /* Llib/os.scm 1234 */
obj_t BgL_tmpz00_6881;
if(
ELONGP(BgL_arg1737z00_1857))
{ /* Llib/os.scm 1234 */
BgL_tmpz00_6881 = BgL_arg1737z00_1857
; }  else 
{ 
obj_t BgL_auxz00_6884;
BgL_auxz00_6884 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)45257)), BGl_string3204z00zz__osz00, BGl_string3207z00zz__osz00, BgL_arg1737z00_1857); 
FAILURE(BgL_auxz00_6884,BFALSE,BFALSE);} 
BgL_tmpz00_6880 = 
BELONG_TO_LONG(BgL_tmpz00_6881); } 
return 
bgl_ioctl(BgL_devz00_70, BgL_arg1736z00_1856, BgL_tmpz00_6880);} } } } 

}



/* &ioctl */
obj_t BGl_z62ioctlz62zz__osz00(obj_t BgL_envz00_3993, obj_t BgL_devz00_3994, obj_t BgL_requestz00_3995, obj_t BgL_valz00_3996)
{
{ /* Llib/os.scm 1222 */
return 
BBOOL(
BGl_ioctlz00zz__osz00(BgL_devz00_3994, BgL_requestz00_3995, BgL_valz00_3996));} 

}



/* _umask */
obj_t BGl__umaskz00zz__osz00(obj_t BgL_env1150z00_75, obj_t BgL_opt1149z00_74)
{
{ /* Llib/os.scm 1240 */
{ /* Llib/os.scm 1240 */

{ 

switch( 
VECTOR_LENGTH(BgL_opt1149z00_74)) { case ((long)0) : 

{ /* Llib/os.scm 1240 */

{ /* Llib/os.scm 1240 */
int BgL_res2498z00_3388;
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BFALSE))
{ /* Llib/os.scm 1242 */
long BgL_tmpz00_6894;
{ /* Llib/os.scm 1242 */
long BgL_tmpz00_6895;
{ /* Llib/os.scm 1240 */
obj_t BgL_aux3055z00_4451;
BgL_aux3055z00_4451 = BFALSE; 
{ 
obj_t BgL_auxz00_6896;
BgL_auxz00_6896 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)45546)), BGl_string3213z00zz__osz00, BGl_string3214z00zz__osz00, BgL_aux3055z00_4451); 
FAILURE(BgL_auxz00_6896,BFALSE,BFALSE);} } 
BgL_tmpz00_6895 = ((long)0); 
BgL_tmpz00_6894 = 
umask(BgL_tmpz00_6895); } 
BgL_res2498z00_3388 = 
(int)(BgL_tmpz00_6894); }  else 
{ /* Llib/os.scm 1243 */
long BgL_oldz00_3387;
BgL_oldz00_3387 = 
umask(((long)0)); 
umask(BgL_oldz00_3387); 
BgL_res2498z00_3388 = 
(int)(BgL_oldz00_3387); } 
return 
BINT(BgL_res2498z00_3388);} } break;case ((long)1) : 

{ /* Llib/os.scm 1240 */
obj_t BgL_maskz00_1873;
BgL_maskz00_1873 = 
VECTOR_REF(BgL_opt1149z00_74,((long)0)); 
{ /* Llib/os.scm 1240 */

{ /* Llib/os.scm 1240 */
int BgL_res2499z00_3391;
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_maskz00_1873))
{ /* Llib/os.scm 1242 */
long BgL_tmpz00_6909;
{ /* Llib/os.scm 1242 */
long BgL_tmpz00_6910;
{ /* Llib/os.scm 1242 */
obj_t BgL_tmpz00_6911;
if(
INTEGERP(BgL_maskz00_1873))
{ /* Llib/os.scm 1242 */
BgL_tmpz00_6911 = BgL_maskz00_1873
; }  else 
{ 
obj_t BgL_auxz00_6914;
BgL_auxz00_6914 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)45616)), BGl_string3213z00zz__osz00, BGl_string3102z00zz__osz00, BgL_maskz00_1873); 
FAILURE(BgL_auxz00_6914,BFALSE,BFALSE);} 
BgL_tmpz00_6910 = 
(long)CINT(BgL_tmpz00_6911); } 
BgL_tmpz00_6909 = 
umask(BgL_tmpz00_6910); } 
BgL_res2499z00_3391 = 
(int)(BgL_tmpz00_6909); }  else 
{ /* Llib/os.scm 1243 */
long BgL_oldz00_3390;
BgL_oldz00_3390 = 
umask(((long)0)); 
umask(BgL_oldz00_3390); 
BgL_res2499z00_3391 = 
(int)(BgL_oldz00_3390); } 
return 
BINT(BgL_res2499z00_3391);} } } break;
default: 
return 
BGl_errorz00zz__errorz00(BGl_symbol3211z00zz__osz00, BGl_string3106z00zz__osz00, 
BINT(
VECTOR_LENGTH(BgL_opt1149z00_74)));} } } } 

}



/* umask */
BGL_EXPORTED_DEF int BGl_umaskz00zz__osz00(obj_t BgL_maskz00_73)
{
{ /* Llib/os.scm 1240 */
if(
BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_maskz00_73))
{ /* Llib/os.scm 1242 */
long BgL_tmpz00_6932;
{ /* Llib/os.scm 1242 */
long BgL_tmpz00_6933;
{ /* Llib/os.scm 1242 */
obj_t BgL_tmpz00_6934;
if(
INTEGERP(BgL_maskz00_73))
{ /* Llib/os.scm 1242 */
BgL_tmpz00_6934 = BgL_maskz00_73
; }  else 
{ 
obj_t BgL_auxz00_6937;
BgL_auxz00_6937 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)45616)), BGl_string3212z00zz__osz00, BGl_string3102z00zz__osz00, BgL_maskz00_73); 
FAILURE(BgL_auxz00_6937,BFALSE,BFALSE);} 
BgL_tmpz00_6933 = 
(long)CINT(BgL_tmpz00_6934); } 
BgL_tmpz00_6932 = 
umask(BgL_tmpz00_6933); } 
return 
(int)(BgL_tmpz00_6932);}  else 
{ /* Llib/os.scm 1243 */
long BgL_oldz00_3393;
BgL_oldz00_3393 = 
umask(((long)0)); 
umask(BgL_oldz00_3393); 
return 
(int)(BgL_oldz00_3393);} } 

}



/* openlog */
BGL_EXPORTED_DEF obj_t BGl_openlogz00zz__osz00(obj_t BgL_identz00_76, int BgL_optionz00_77, int BgL_facilityz00_78)
{
{ /* Llib/os.scm 1250 */
{ /* Llib/os.scm 1253 */
char * BgL_tmpz00_6947;
BgL_tmpz00_6947 = 
BSTRING_TO_STRING(BgL_identz00_76); 
openlog(BgL_tmpz00_6947, BgL_optionz00_77, BgL_facilityz00_78); } BUNSPEC; 
return BUNSPEC;} 

}



/* &openlog */
obj_t BGl_z62openlogz62zz__osz00(obj_t BgL_envz00_3997, obj_t BgL_identz00_3998, obj_t BgL_optionz00_3999, obj_t BgL_facilityz00_4000)
{
{ /* Llib/os.scm 1250 */
{ /* Llib/os.scm 1253 */
int BgL_auxz00_6966;int BgL_auxz00_6957;obj_t BgL_auxz00_6950;
{ /* Llib/os.scm 1253 */
obj_t BgL_tmpz00_6967;
if(
INTEGERP(BgL_facilityz00_4000))
{ /* Llib/os.scm 1253 */
BgL_tmpz00_6967 = BgL_facilityz00_4000
; }  else 
{ 
obj_t BgL_auxz00_6970;
BgL_auxz00_6970 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)46070)), BGl_string3215z00zz__osz00, BGl_string3102z00zz__osz00, BgL_facilityz00_4000); 
FAILURE(BgL_auxz00_6970,BFALSE,BFALSE);} 
BgL_auxz00_6966 = 
CINT(BgL_tmpz00_6967); } 
{ /* Llib/os.scm 1253 */
obj_t BgL_tmpz00_6958;
if(
INTEGERP(BgL_optionz00_3999))
{ /* Llib/os.scm 1253 */
BgL_tmpz00_6958 = BgL_optionz00_3999
; }  else 
{ 
obj_t BgL_auxz00_6961;
BgL_auxz00_6961 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)46070)), BGl_string3215z00zz__osz00, BGl_string3102z00zz__osz00, BgL_optionz00_3999); 
FAILURE(BgL_auxz00_6961,BFALSE,BFALSE);} 
BgL_auxz00_6957 = 
CINT(BgL_tmpz00_6958); } 
if(
STRINGP(BgL_identz00_3998))
{ /* Llib/os.scm 1253 */
BgL_auxz00_6950 = BgL_identz00_3998
; }  else 
{ 
obj_t BgL_auxz00_6953;
BgL_auxz00_6953 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)46070)), BGl_string3215z00zz__osz00, BGl_string3111z00zz__osz00, BgL_identz00_3998); 
FAILURE(BgL_auxz00_6953,BFALSE,BFALSE);} 
return 
BGl_openlogz00zz__osz00(BgL_auxz00_6950, BgL_auxz00_6957, BgL_auxz00_6966);} } 

}



/* syslog */
BGL_EXPORTED_DEF obj_t BGl_syslogz00zz__osz00(int BgL_priorityz00_79, obj_t BgL_argsz00_80)
{
{ /* Llib/os.scm 1259 */
{ /* Llib/os.scm 1265 */
obj_t BgL_arg1750z00_1877;
{ /* Llib/os.scm 1265 */
obj_t BgL_zc3z04anonymousza31752ze3z87_4001;
BgL_zc3z04anonymousza31752ze3z87_4001 = 
MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31752ze3ze5zz__osz00, 
(int)(((long)1)), 
(int)(((long)1))); 
PROCEDURE_SET(BgL_zc3z04anonymousza31752ze3z87_4001, 
(int)(((long)0)), BgL_argsz00_80); 
BgL_arg1750z00_1877 = 
BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(BgL_zc3z04anonymousza31752ze3z87_4001); } 
{ /* Llib/os.scm 1262 */
char * BgL_auxz00_6984;char * BgL_tmpz00_6982;
BgL_auxz00_6984 = 
BSTRING_TO_STRING(BgL_arg1750z00_1877); 
BgL_tmpz00_6982 = 
BSTRING_TO_STRING(BGl_string3216z00zz__osz00); 
syslog(BgL_priorityz00_79, BgL_tmpz00_6982, BgL_auxz00_6984); } BUNSPEC; } 
return BUNSPEC;} 

}



/* &syslog */
obj_t BGl_z62syslogz62zz__osz00(obj_t BgL_envz00_4002, obj_t BgL_priorityz00_4003, obj_t BgL_argsz00_4004)
{
{ /* Llib/os.scm 1259 */
{ /* Llib/os.scm 1265 */
int BgL_auxz00_6987;
{ /* Llib/os.scm 1265 */
obj_t BgL_tmpz00_6988;
if(
INTEGERP(BgL_priorityz00_4003))
{ /* Llib/os.scm 1265 */
BgL_tmpz00_6988 = BgL_priorityz00_4003
; }  else 
{ 
obj_t BgL_auxz00_6991;
BgL_auxz00_6991 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)46538)), BGl_string3217z00zz__osz00, BGl_string3102z00zz__osz00, BgL_priorityz00_4003); 
FAILURE(BgL_auxz00_6991,BFALSE,BFALSE);} 
BgL_auxz00_6987 = 
CINT(BgL_tmpz00_6988); } 
return 
BGl_syslogz00zz__osz00(BgL_auxz00_6987, BgL_argsz00_4004);} } 

}



/* &<@anonymous:1752> */
obj_t BGl_z62zc3z04anonymousza31752ze3ze5zz__osz00(obj_t BgL_envz00_4005, obj_t BgL_opz00_4007)
{
{ /* Llib/os.scm 1264 */
{ /* Llib/os.scm 1265 */
obj_t BgL_argsz00_4006;
BgL_argsz00_4006 = 
PROCEDURE_REF(BgL_envz00_4005, 
(int)(((long)0))); 
{ 
obj_t BgL_l1116z00_4489;
BgL_l1116z00_4489 = BgL_argsz00_4006; 
BgL_zc3z04anonymousza31753ze3z87_4488:
if(
PAIRP(BgL_l1116z00_4489))
{ /* Llib/os.scm 1265 */
{ /* Llib/os.scm 1265 */
obj_t BgL_az00_4490;
BgL_az00_4490 = 
CAR(BgL_l1116z00_4489); 
{ /* Llib/os.scm 1265 */
obj_t BgL_auxz00_7002;
if(
OUTPUT_PORTP(BgL_opz00_4007))
{ /* Llib/os.scm 1265 */
BgL_auxz00_7002 = BgL_opz00_4007
; }  else 
{ 
obj_t BgL_auxz00_7005;
BgL_auxz00_7005 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)46513)), BGl_string3218z00zz__osz00, BGl_string3219z00zz__osz00, BgL_opz00_4007); 
FAILURE(BgL_auxz00_7005,BFALSE,BFALSE);} 
bgl_display_obj(BgL_az00_4490, BgL_auxz00_7002); } } 
{ 
obj_t BgL_l1116z00_7010;
BgL_l1116z00_7010 = 
CDR(BgL_l1116z00_4489); 
BgL_l1116z00_4489 = BgL_l1116z00_7010; 
goto BgL_zc3z04anonymousza31753ze3z87_4488;} }  else 
{ /* Llib/os.scm 1265 */
if(
NULLP(BgL_l1116z00_4489))
{ /* Llib/os.scm 1265 */
return BTRUE;}  else 
{ /* Llib/os.scm 1265 */
return 
BGl_bigloozd2typezd2errorzf2locationzf2zz__errorz00(BGl_string3220z00zz__osz00, BGl_string3221z00zz__osz00, BgL_l1116z00_4489, BGl_string3096z00zz__osz00, 
BINT(((long)46491)));} } } } } 

}



/* closelog */
BGL_EXPORTED_DEF obj_t BGl_closelogz00zz__osz00()
{
{ /* Llib/os.scm 1271 */
closelog(); BUNSPEC; 
return BUNSPEC;} 

}



/* &closelog */
obj_t BGl_z62closelogz62zz__osz00(obj_t BgL_envz00_4008)
{
{ /* Llib/os.scm 1271 */
return 
BGl_closelogz00zz__osz00();} 

}



/* syslog-option */
BGL_EXPORTED_DEF int BGl_syslogzd2optionzd2zz__osz00(obj_t BgL_optsz00_81)
{
{ /* Llib/os.scm 1279 */
{ 
obj_t BgL_optsz00_1891;long BgL_oz00_1892;
{ /* Llib/os.scm 1282 */
long BgL_tmpz00_7018;
BgL_optsz00_1891 = BgL_optsz00_81; 
BgL_oz00_1892 = ((long)0); 
BgL_zc3z04anonymousza31757ze3z87_1893:
if(
NULLP(BgL_optsz00_1891))
{ /* Llib/os.scm 1284 */
BgL_tmpz00_7018 = BgL_oz00_1892
; }  else 
{ /* Llib/os.scm 1286 */
obj_t BgL_arg1759z00_1895;long BgL_arg1760z00_1896;
{ /* Llib/os.scm 1286 */
obj_t BgL_pairz00_3399;
if(
PAIRP(BgL_optsz00_1891))
{ /* Llib/os.scm 1286 */
BgL_pairz00_3399 = BgL_optsz00_1891; }  else 
{ 
obj_t BgL_auxz00_7023;
BgL_auxz00_7023 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)47304)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_optsz00_1891); 
FAILURE(BgL_auxz00_7023,BFALSE,BFALSE);} 
BgL_arg1759z00_1895 = 
CDR(BgL_pairz00_3399); } 
{ /* Llib/os.scm 1288 */
obj_t BgL_arg1761z00_1897;
{ /* Llib/os.scm 1288 */
obj_t BgL_casezd2valuezd2_1898;
{ /* Llib/os.scm 1288 */
obj_t BgL_pairz00_3400;
if(
PAIRP(BgL_optsz00_1891))
{ /* Llib/os.scm 1288 */
BgL_pairz00_3400 = BgL_optsz00_1891; }  else 
{ 
obj_t BgL_auxz00_7030;
BgL_auxz00_7030 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)47340)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_optsz00_1891); 
FAILURE(BgL_auxz00_7030,BFALSE,BFALSE);} 
BgL_casezd2valuezd2_1898 = 
CAR(BgL_pairz00_3400); } 
if(
(BgL_casezd2valuezd2_1898==BGl_symbol3222z00zz__osz00))
{ /* Llib/os.scm 1288 */
BgL_arg1761z00_1897 = 
BINT(LOG_CONS); }  else 
{ /* Llib/os.scm 1288 */
if(
(BgL_casezd2valuezd2_1898==BGl_symbol3224z00zz__osz00))
{ /* Llib/os.scm 1288 */
BgL_arg1761z00_1897 = 
BINT(LOG_NDELAY); }  else 
{ /* Llib/os.scm 1288 */
if(
(BgL_casezd2valuezd2_1898==BGl_symbol3226z00zz__osz00))
{ /* Llib/os.scm 1288 */
BgL_arg1761z00_1897 = 
BINT(LOG_NOWAIT); }  else 
{ /* Llib/os.scm 1288 */
if(
(BgL_casezd2valuezd2_1898==BGl_symbol3228z00zz__osz00))
{ /* Llib/os.scm 1288 */
BgL_arg1761z00_1897 = 
BINT(LOG_ODELAY); }  else 
{ /* Llib/os.scm 1288 */
if(
(BgL_casezd2valuezd2_1898==BGl_symbol3230z00zz__osz00))
{ /* Llib/os.scm 1288 */
BgL_arg1761z00_1897 = 
BINT(LOG_PID); }  else 
{ /* Llib/os.scm 1296 */
obj_t BgL_arg1768z00_1904;
{ /* Llib/os.scm 1296 */
obj_t BgL_pairz00_3411;
if(
PAIRP(BgL_optsz00_1891))
{ /* Llib/os.scm 1296 */
BgL_pairz00_3411 = BgL_optsz00_1891; }  else 
{ 
obj_t BgL_auxz00_7052;
BgL_auxz00_7052 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)47661)), BGl_string3126z00zz__osz00, BGl_string3113z00zz__osz00, BgL_optsz00_1891); 
FAILURE(BgL_auxz00_7052,BFALSE,BFALSE);} 
BgL_arg1768z00_1904 = 
CAR(BgL_pairz00_3411); } 
BgL_arg1761z00_1897 = 
BGl_errorz00zz__errorz00(BGl_string3232z00zz__osz00, BGl_string3233z00zz__osz00, BgL_arg1768z00_1904); } } } } } } 
{ /* Llib/os.scm 1287 */
long BgL_yz00_3413;
{ /* Llib/os.scm 1296 */
obj_t BgL_tmpz00_7058;
if(
INTEGERP(BgL_arg1761z00_1897))
{ /* Llib/os.scm 1296 */
BgL_tmpz00_7058 = BgL_arg1761z00_1897
; }  else 
{ 
obj_t BgL_auxz00_7061;
BgL_auxz00_7061 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)47668)), BGl_string3126z00zz__osz00, BGl_string3102z00zz__osz00, BgL_arg1761z00_1897); 
FAILURE(BgL_auxz00_7061,BFALSE,BFALSE);} 
BgL_yz00_3413 = 
(long)CINT(BgL_tmpz00_7058); } 
BgL_arg1760z00_1896 = 
(BgL_oz00_1892 | BgL_yz00_3413); } } 
{ 
long BgL_oz00_7068;obj_t BgL_optsz00_7067;
BgL_optsz00_7067 = BgL_arg1759z00_1895; 
BgL_oz00_7068 = BgL_arg1760z00_1896; 
BgL_oz00_1892 = BgL_oz00_7068; 
BgL_optsz00_1891 = BgL_optsz00_7067; 
goto BgL_zc3z04anonymousza31757ze3z87_1893;} } 
return 
(int)(BgL_tmpz00_7018);} } } 

}



/* &syslog-option */
obj_t BGl_z62syslogzd2optionzb0zz__osz00(obj_t BgL_envz00_4009, obj_t BgL_optsz00_4010)
{
{ /* Llib/os.scm 1279 */
return 
BINT(
BGl_syslogzd2optionzd2zz__osz00(BgL_optsz00_4010));} 

}



/* syslog-facility */
BGL_EXPORTED_DEF int BGl_syslogzd2facilityzd2zz__osz00(obj_t BgL_facilityz00_82)
{
{ /* Llib/os.scm 1303 */
if(
(BgL_facilityz00_82==BGl_symbol3234z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_AUTH;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3236z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_AUTHPRIV;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3238z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_CRON;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3240z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_DAEMON;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3242z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_FTP;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3244z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_KERN;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3246z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_LOCAL0;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3248z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_LOCAL1;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3250z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_LOCAL2;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3252z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_LOCAL3;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3254z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_LOCAL4;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3256z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_LOCAL5;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3258z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_LOCAL6;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3260z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_LOCAL7;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3262z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_LPR;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3264z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_MAIL;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3266z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_NEWS;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3268z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_SYSLOG;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3270z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_USER;}  else 
{ /* Llib/os.scm 1306 */
if(
(BgL_facilityz00_82==BGl_symbol3272z00zz__osz00))
{ /* Llib/os.scm 1306 */
return LOG_UUCP;}  else 
{ /* Llib/os.scm 1327 */
obj_t BgL_tmpz00_7112;
{ /* Llib/os.scm 1327 */
obj_t BgL_aux3078z00_4474;
BgL_aux3078z00_4474 = 
BGl_errorz00zz__errorz00(BGl_string3274z00zz__osz00, BGl_string3275z00zz__osz00, BgL_facilityz00_82); 
if(
INTEGERP(BgL_aux3078z00_4474))
{ /* Llib/os.scm 1327 */
BgL_tmpz00_7112 = BgL_aux3078z00_4474
; }  else 
{ 
obj_t BgL_auxz00_7116;
BgL_auxz00_7116 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)48754)), BGl_string3274z00zz__osz00, BGl_string3102z00zz__osz00, BgL_aux3078z00_4474); 
FAILURE(BgL_auxz00_7116,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_7112);} } } } } } } } } } } } } } } } } } } } } 

}



/* &syslog-facility */
obj_t BGl_z62syslogzd2facilityzb0zz__osz00(obj_t BgL_envz00_4011, obj_t BgL_facilityz00_4012)
{
{ /* Llib/os.scm 1303 */
{ /* Llib/os.scm 1306 */
int BgL_tmpz00_7121;
{ /* Llib/os.scm 1306 */
obj_t BgL_auxz00_7122;
if(
SYMBOLP(BgL_facilityz00_4012))
{ /* Llib/os.scm 1306 */
BgL_auxz00_7122 = BgL_facilityz00_4012
; }  else 
{ 
obj_t BgL_auxz00_7125;
BgL_auxz00_7125 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)48026)), BGl_string3276z00zz__osz00, BGl_string3152z00zz__osz00, BgL_facilityz00_4012); 
FAILURE(BgL_auxz00_7125,BFALSE,BFALSE);} 
BgL_tmpz00_7121 = 
BGl_syslogzd2facilityzd2zz__osz00(BgL_auxz00_7122); } 
return 
BINT(BgL_tmpz00_7121);} } 

}



/* syslog-level */
BGL_EXPORTED_DEF int BGl_syslogzd2levelzd2zz__osz00(obj_t BgL_lvlz00_83)
{
{ /* Llib/os.scm 1334 */
if(
(BgL_lvlz00_83==BGl_symbol3277z00zz__osz00))
{ /* Llib/os.scm 1337 */
return LOG_EMERG;}  else 
{ /* Llib/os.scm 1337 */
if(
(BgL_lvlz00_83==BGl_symbol3279z00zz__osz00))
{ /* Llib/os.scm 1337 */
return LOG_ALERT;}  else 
{ /* Llib/os.scm 1337 */
if(
(BgL_lvlz00_83==BGl_symbol3281z00zz__osz00))
{ /* Llib/os.scm 1337 */
return LOG_CRIT;}  else 
{ /* Llib/os.scm 1337 */
if(
(BgL_lvlz00_83==BGl_symbol3283z00zz__osz00))
{ /* Llib/os.scm 1337 */
return LOG_ERR;}  else 
{ /* Llib/os.scm 1337 */
if(
(BgL_lvlz00_83==BGl_symbol3285z00zz__osz00))
{ /* Llib/os.scm 1337 */
return LOG_WARNING;}  else 
{ /* Llib/os.scm 1337 */
if(
(BgL_lvlz00_83==BGl_symbol3287z00zz__osz00))
{ /* Llib/os.scm 1337 */
return LOG_NOTICE;}  else 
{ /* Llib/os.scm 1337 */
if(
(BgL_lvlz00_83==BGl_symbol3289z00zz__osz00))
{ /* Llib/os.scm 1337 */
return LOG_INFO;}  else 
{ /* Llib/os.scm 1337 */
if(
(BgL_lvlz00_83==BGl_symbol3291z00zz__osz00))
{ /* Llib/os.scm 1337 */
return LOG_DEBUG;}  else 
{ /* Llib/os.scm 1346 */
obj_t BgL_tmpz00_7147;
{ /* Llib/os.scm 1346 */
obj_t BgL_aux3082z00_4478;
BgL_aux3082z00_4478 = 
BGl_errorz00zz__errorz00(BGl_string3293z00zz__osz00, BGl_string3294z00zz__osz00, BgL_lvlz00_83); 
if(
INTEGERP(BgL_aux3082z00_4478))
{ /* Llib/os.scm 1346 */
BgL_tmpz00_7147 = BgL_aux3082z00_4478
; }  else 
{ 
obj_t BgL_auxz00_7151;
BgL_auxz00_7151 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)49451)), BGl_string3293z00zz__osz00, BGl_string3102z00zz__osz00, BgL_aux3082z00_4478); 
FAILURE(BgL_auxz00_7151,BFALSE,BFALSE);} } 
return 
CINT(BgL_tmpz00_7147);} } } } } } } } } 

}



/* &syslog-level */
obj_t BGl_z62syslogzd2levelzb0zz__osz00(obj_t BgL_envz00_4013, obj_t BgL_lvlz00_4014)
{
{ /* Llib/os.scm 1334 */
{ /* Llib/os.scm 1337 */
int BgL_tmpz00_7156;
{ /* Llib/os.scm 1337 */
obj_t BgL_auxz00_7157;
if(
SYMBOLP(BgL_lvlz00_4014))
{ /* Llib/os.scm 1337 */
BgL_auxz00_7157 = BgL_lvlz00_4014
; }  else 
{ 
obj_t BgL_auxz00_7160;
BgL_auxz00_7160 = 
BGl_typezd2errorzd2zz__errorz00(BGl_string3096z00zz__osz00, 
BINT(((long)49154)), BGl_string3295z00zz__osz00, BGl_string3152z00zz__osz00, BgL_lvlz00_4014); 
FAILURE(BgL_auxz00_7160,BFALSE,BFALSE);} 
BgL_tmpz00_7156 = 
BGl_syslogzd2levelzd2zz__osz00(BgL_auxz00_7157); } 
return 
BINT(BgL_tmpz00_7156);} } 

}



/* object-init */
obj_t BGl_objectzd2initzd2zz__osz00()
{
{ /* Llib/os.scm 18 */
return BUNSPEC;} 

}



/* generic-init */
obj_t BGl_genericzd2initzd2zz__osz00()
{
{ /* Llib/os.scm 18 */
return BUNSPEC;} 

}



/* method-init */
obj_t BGl_methodzd2initzd2zz__osz00()
{
{ /* Llib/os.scm 18 */
return BUNSPEC;} 

}



/* imported-modules-init */
obj_t BGl_importedzd2moduleszd2initz00zz__osz00()
{
{ /* Llib/os.scm 18 */
BGl_modulezd2initializa7ationz75zz__errorz00(((long)37115357), 
BSTRING_TO_STRING(BGl_string3296z00zz__osz00)); 
return 
BGl_modulezd2initializa7ationz75zz__paramz00(((long)453938973), 
BSTRING_TO_STRING(BGl_string3296z00zz__osz00));} 

}

#ifdef __cplusplus
}
#endif
