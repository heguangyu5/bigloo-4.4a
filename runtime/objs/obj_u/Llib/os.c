/*===========================================================================*/
/*   (Llib/os.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/os.scm -indent -o objs/obj_u/Llib/os.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern bool_t bgl_chmod(char *, bool_t, bool_t, bool_t);
	extern long BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_setgidz00zz__osz00(int);
	BGL_EXPORTED_DECL int BGl_getuidz00zz__osz00();
	static obj_t BGl_z62getpidz62zz__osz00(obj_t);
	static obj_t BGl_z62basenamez62zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getpwnamz00zz__osz00(obj_t);
	static obj_t BGl_z62makezd2sharedzd2libzd2namezb0zz__osz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62oszd2classzb0zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_systemzd2ze3stringz31zz__osz00(obj_t);
	static obj_t BGl_z62prefixz62zz__osz00(obj_t, obj_t);
	static obj_t BGl_z62ioctlz62zz__osz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2813z00zz__osz00 = BUNSPEC;
	static obj_t BGl_z62defaultzd2scriptzd2namez62zz__osz00(obj_t);
	static obj_t BGl_symbol2815z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2817z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2819z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2739z00zz__osz00 = BUNSPEC;
	static obj_t BGl_defaultzd2basenamezd2zz__osz00(obj_t);
	extern int bgl_getgid();
	static obj_t BGl_z62openlogz62zz__osz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_umaskz00zz__osz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__osz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filezd2separatorzd2zz__osz00();
	static obj_t BGl_symbol2821z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2741z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2743z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2825z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2827z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2829z00zz__osz00 = BUNSPEC;
	static obj_t BGl_z62chmodz62zz__osz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t bgl_display_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dynamiczd2unloadzd2zz__osz00(obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2831z00zz__osz00 = BUNSPEC;
	extern obj_t bgl_getgroups();
	extern obj_t bgl_dload(char *, char *, char *);
	static obj_t BGl_symbol2833z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2752z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2835z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2755z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2837z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2839z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2758z00zz__osz00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_getgidz00zz__osz00();
	extern obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__dynamiczd2loadzd2symbolz00zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_relativezd2filezd2namez00zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_systemz00zz__osz00(obj_t);
	static obj_t BGl_z62makezd2filezd2namez62zz__osz00(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2841z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2843z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2845z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2847z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2849z00zz__osz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_commandzd2linezd2zz__osz00();
	static obj_t BGl__umaskz00zz__osz00(obj_t, obj_t);
	static obj_t BGl_z62dynamiczd2loadzd2symbolzd2setzb0zz__osz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getenvz00zz__osz00(obj_t);
	static obj_t BGl_symbol2851z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2853z00zz__osz00 = BUNSPEC;
	BGL_EXPORTED_DECL int BGl_syslogzd2facilityzd2zz__osz00(obj_t);
	BGL_EXPORTED_DECL int BGl_syslogzd2levelzd2zz__osz00(obj_t);
	static obj_t BGl_symbol2855z00zz__osz00 = BUNSPEC;
	extern bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_symbol2857z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2859z00zz__osz00 = BUNSPEC;
	static obj_t BGl_z62syslogzd2facilityzb0zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2canonicaliza7eza7zz__osz00(obj_t);
	extern obj_t bigloo_module_mangle(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__osz00();
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_chdirz00zz__osz00(char *);
	extern obj_t bgl_getpwnam(char *);
	static obj_t BGl_symbol2861z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2780z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2863z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2784z00zz__osz00 = BUNSPEC;
	extern obj_t bgl_dlsym_set(obj_t, obj_t);
	static obj_t BGl_symbol2786z00zz__osz00 = BUNSPEC;
	static long BGl_requestzd2ze3elongz31zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_oszd2namezd2zz__osz00();
	static obj_t BGl_symbol2868z00zz__osz00 = BUNSPEC;
	static obj_t BGl_mingwzd2basenamezd2zz__osz00(obj_t);
	static obj_t BGl_z62setuidz62zz__osz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__osz00();
	static obj_t BGl_z62filezd2namezd2canonicaliza7ez12zd7zz__osz00(obj_t, obj_t);
	extern obj_t bgl_get_signal_handler(int);
	static obj_t BGl__getenvz00zz__osz00(obj_t, obj_t);
	static obj_t BGl_symbol2870z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2872z00zz__osz00 = BUNSPEC;
	extern int bgl_dunload(obj_t);
	static obj_t BGl_symbol2874z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2876z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2878z00zz__osz00 = BUNSPEC;
	static obj_t BGl_z62oszd2archzb0zz__osz00(obj_t);
	BGL_EXPORTED_DECL char *BGl_executablezd2namezd2zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_staticzd2libraryzd2suffixz00zz__osz00();
	static obj_t BGl_z62makezd2staticzd2libraryzd2namezb0zz__osz00(obj_t, obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62executablezd2namezb0zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dirnamez00zz__osz00(obj_t);
	extern char *bgl_dload_error();
	static obj_t BGl_z62syslogz62zz__osz00(obj_t, obj_t, obj_t);
	static obj_t BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(obj_t,
		obj_t, long);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_symbol2880z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2882z00zz__osz00 = BUNSPEC;
	extern obj_t BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62syslogzd2optionzb0zz__osz00(obj_t, obj_t);
	static obj_t BGl__dynamiczd2loadzd2zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_defaultzd2scriptzd2namez00zz__osz00();
	static obj_t BGl_z62datez62zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unixzd2pathzd2ze3listze3zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t);
	static obj_t BGl_z62unixzd2pathzd2ze3listz81zz__osz00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_basenamez00zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	static obj_t BGl_z62setgidz62zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_oszd2classzd2zz__osz00();
	static obj_t BGl_z62getuidz62zz__osz00(obj_t);
	static obj_t BGl_z62chdirz62zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL char *BGl_datez00zz__osz00();
	static obj_t BGl_appendzd221011zd2zz__osz00(obj_t, obj_t);
	static obj_t BGl_z62closelogz62zz__osz00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__osz00();
	static obj_t BGl_z62getzd2signalzd2handlerz62zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t);
	extern obj_t bgl_getenv_all();
	BGL_EXPORTED_DECL obj_t BGl_oszd2tmpzd2zz__osz00();
	static obj_t BGl_z62staticzd2libraryzd2suffixz62zz__osz00(obj_t);
	static obj_t BGl_z62getpwuidz62zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dynamiczd2loadzd2zz__osz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62dynamiczd2loadzd2symbolzd2getzb0zz__osz00(obj_t, obj_t);
	extern obj_t bgl_signal(int, obj_t);
	extern obj_t make_string(long, unsigned char);
	extern obj_t bgl_close_input_port(obj_t);
	static obj_t BGl_z62defaultzd2executablezd2namez62zz__osz00(obj_t);
	static obj_t BGl_z62getgidz62zz__osz00(obj_t);
	static obj_t BGl_defaultzd2dirnamezd2zz__osz00(obj_t);
	static obj_t BGl_z62ioctlzd2registerzd2requestz12z70zz__osz00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_dlsym_get(obj_t);
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62systemz62zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_getppidz00zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_signalz00zz__osz00(int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dynamiczd2loadzd2symbolz00zz__osz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62filezd2namezd2canonicaliza7ezc5zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sharedzd2libraryzd2suffixz00zz__osz00();
	static obj_t BGl_z62pwdz62zz__osz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2defaultzd2javazd2packageza2z00zz__osz00 =
		BUNSPEC;
	extern obj_t BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_sleepz00zz__osz00(long);
	static obj_t BGl_list2709z00zz__osz00 = BUNSPEC;
	static obj_t BGl_z62makezd2filezd2pathz62zz__osz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_openlogz00zz__osz00(obj_t, int, int);
	static obj_t BGl_z62filezd2namezd2unixzd2canonicaliza7ez17zz__osz00(obj_t,
		obj_t);
	static obj_t BGl_z62makezd2staticzd2libzd2namezb0zz__osz00(obj_t, obj_t,
		obj_t);
	extern void bgl_sleep(long);
	static obj_t BGl_z62makezd2sharedzd2libraryzd2namezb0zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_oszd2charsetzd2zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_filezd2namezd2ze3listze3zz__osz00(obj_t);
	static obj_t BGl_z62commandzd2linezb0zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_putenvz00zz__osz00(char *, char *);
	static obj_t BGl_z62filezd2namezd2ze3listz81zz__osz00(obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	extern int bgl_setenv(char *, char *);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__osz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62syslogzd2levelzb0zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2staticzd2libzd2namezd2zz__osz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_oszd2versionzd2zz__osz00();
	extern bool_t fexists(char *);
	extern obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL int BGl_syslogzd2optionzd2zz__osz00(obj_t);
	static obj_t BGl_z62sharedzd2libraryzd2suffixz62zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_suffixz00zz__osz00(obj_t);
	static obj_t BGl_z62pathzd2separatorzb0zz__osz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_closelogz00zz__osz00();
	static obj_t BGl_z62sleepz62zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dynamiczd2loadzd2symbolzd2setzd2zz__osz00(obj_t,
		obj_t);
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
	BGL_EXPORTED_DECL obj_t
		BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t);
	extern bool_t bgl_ioctl(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_makezd2filezd2pathz00zz__osz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_oszd2archzd2zz__osz00();
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62dirnamez62zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_pwdz00zz__osz00();
	extern obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	extern obj_t bgl_dlsym(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2signalzd2handlerz00zz__osz00(int);
	BGL_EXPORTED_DECL obj_t BGl_getgroupsz00zz__osz00();
	static obj_t BGl_z62signalz62zz__osz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62filezd2namezd2unixzd2canonicaliza7ez12z05zz__osz00(obj_t,
		obj_t);
	extern obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
	extern obj_t c_substring(obj_t, long, long);
	extern int bgl_setuid(int);
	BGL_EXPORTED_DECL obj_t BGl_pathzd2separatorzd2zz__osz00();
	static obj_t BGl_z62systemzd2ze3stringz53zz__osz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31751ze3ze5zz__osz00(obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t);
	static obj_t BGl_ioctlzd2requestszd2tablez00zz__osz00 = BUNSPEC;
	static obj_t BGl_z62filezd2separatorzb0zz__osz00(obj_t);
	extern char *c_date();
	BGL_EXPORTED_DECL obj_t BGl_setuidz00zz__osz00(int);
	extern obj_t bgl_getpwuid(int);
	BGL_EXPORTED_DECL obj_t BGl_dynamiczd2loadzd2symbolzd2getzd2zz__osz00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_ioctlz00zz__osz00(obj_t, obj_t, obj_t);
	extern char *executable_name;
	static obj_t BGl_z62dynamiczd2unloadzb0zz__osz00(obj_t, obj_t);
	static obj_t BGl_z62putenvz62zz__osz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_defaultzd2executablezd2namez00zz__osz00();
	BGL_EXPORTED_DECL obj_t BGl_ioctlzd2registerzd2requestz12z12zz__osz00(obj_t,
		uint64_t);
	BGL_EXPORTED_DECL obj_t BGl_syslogz00zz__osz00(int, obj_t);
	extern int bgl_setgid(int);
	extern int bgl_getuid();
	BGL_EXPORTED_DECL bool_t BGl_chmodz00zz__osz00(obj_t, obj_t);
	static obj_t BGl_z62getppidz62zz__osz00(obj_t);
	static obj_t BGl_z62suffixz62zz__osz00(obj_t, obj_t);
	static obj_t BGl_symbol2715z00zz__osz00 = BUNSPEC;
	static obj_t BGl_symbol2717z00zz__osz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_openlogzd2envzd2zz__osz00,
		BgL_bgl_za762openlogza762za7za7_2888z00, BGl_z62openlogz62zz__osz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_syslogzd2envzd2zz__osz00,
		BgL_bgl_za762syslogza762za7za7__2889z00, va_generic_entry,
		BGl_z62syslogz62zz__osz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getppidzd2envzd2zz__osz00,
		BgL_bgl_za762getppidza762za7za7_2890z00, BGl_z62getppidz62zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_datezd2envzd2zz__osz00,
		BgL_bgl_za762dateza762za7za7__os2891z00, BGl_z62datez62zz__osz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dynamiczd2loadzd2symbolzd2envzd2zz__osz00,
		BgL_bgl__dynamicza7d2loadza72892z00, opt_generic_entry,
		BGl__dynamiczd2loadzd2symbolz00zz__osz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2filezf2pathzd2envzf2zz__osz00,
		BgL_bgl_za762findza7d2fileza7f2893za7,
		BGl_z62findzd2filezf2pathz42zz__osz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sharedzd2libraryzd2namezd2envz00zz__osz00,
		BgL_bgl_za762makeza7d2shared2894z00,
		BGl_z62makezd2sharedzd2libraryzd2namezb0zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pwdzd2envzd2zz__osz00,
		BgL_bgl_za762pwdza762za7za7__osza72895za7, BGl_z62pwdz62zz__osz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dynamiczd2loadzd2symbolzd2getzd2envz00zz__osz00,
		BgL_bgl_za762dynamicza7d2loa2896z00,
		BGl_z62dynamiczd2loadzd2symbolzd2getzb0zz__osz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defaultzd2executablezd2namezd2envzd2zz__osz00,
		BgL_bgl_za762defaultza7d2exe2897z00,
		BGl_z62defaultzd2executablezd2namez62zz__osz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_umaskzd2envzd2zz__osz00,
		BgL_bgl__umaskza700za7za7__osza72898z00, opt_generic_entry,
		BGl__umaskz00zz__osz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2namezd2envz00zz__osz00,
		BgL_bgl_za762osza7d2nameza7b0za72899z00, BGl_z62oszd2namezb0zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pathzd2separatorzd2envz00zz__osz00,
		BgL_bgl_za762pathza7d2separa2900z00, BGl_z62pathzd2separatorzb0zz__osz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2namezd2canonicaliza7ez12zd2envz67zz__osz00,
		BgL_bgl_za762fileza7d2nameza7d2901za7,
		BGl_z62filezd2namezd2canonicaliza7ez12zd7zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2namezd2ze3listzd2envz31zz__osz00,
		BgL_bgl_za762fileza7d2nameza7d2902za7,
		BGl_z62filezd2namezd2ze3listz81zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_signalzd2envzd2zz__osz00,
		BgL_bgl_za762signalza762za7za7__2903z00, BGl_z62signalz62zz__osz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2staticzd2libzd2namezd2envz00zz__osz00,
		BgL_bgl_za762makeza7d2static2904z00,
		BGl_z62makezd2staticzd2libzd2namezb0zz__osz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_executablezd2namezd2envz00zz__osz00,
		BgL_bgl_za762executableza7d22905z00, BGl_z62executablezd2namezb0zz__osz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2versionzd2envz00zz__osz00,
		BgL_bgl_za762osza7d2versionza72906za7, BGl_z62oszd2versionzb0zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dirnamezd2envzd2zz__osz00,
		BgL_bgl_za762dirnameza762za7za7_2907z00, BGl_z62dirnamez62zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getuidzd2envzd2zz__osz00,
		BgL_bgl_za762getuidza762za7za7__2908z00, BGl_z62getuidz62zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_suffixzd2envzd2zz__osz00,
		BgL_bgl_za762suffixza762za7za7__2909z00, BGl_z62suffixz62zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ioctlzd2envzd2zz__osz00,
		BgL_bgl_za762ioctlza762za7za7__o2910z00, BGl_z62ioctlz62zz__osz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getenvzd2envzd2zz__osz00,
		BgL_bgl__getenvza700za7za7__os2911za7, opt_generic_entry,
		BGl__getenvz00zz__osz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getpidzd2envzd2zz__osz00,
		BgL_bgl_za762getpidza762za7za7__2912z00, BGl_z62getpidz62zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_chmodzd2envzd2zz__osz00,
		BgL_bgl_za762chmodza762za7za7__o2913z00, va_generic_entry,
		BGl_z62chmodz62zz__osz00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2filezd2pathzd2envzd2zz__osz00,
		BgL_bgl_za762makeza7d2fileza7d2914za7, va_generic_entry,
		BGl_z62makezd2filezd2pathz62zz__osz00, BUNSPEC, -3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2archzd2envz00zz__osz00,
		BgL_bgl_za762osza7d2archza7b0za72915z00, BGl_z62oszd2archzb0zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2tmpzd2envz00zz__osz00,
		BgL_bgl_za762osza7d2tmpza7b0za7za72916za7, BGl_z62oszd2tmpzb0zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getpwnamzd2envzd2zz__osz00,
		BgL_bgl_za762getpwnamza762za7za72917z00, BGl_z62getpwnamz62zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2710z00zz__osz00,
		BgL_bgl_string2710za700za7za7_2918za7, ".", 1);
	      DEFINE_STRING(BGl_string2711z00zz__osz00,
		BgL_bgl_string2711za700za7za7_2919za7, "bigloo.foreign", 14);
	      DEFINE_STRING(BGl_string2712z00zz__osz00,
		BgL_bgl_string2712za700za7za7_2920za7, "LANG", 4);
	      DEFINE_STRING(BGl_string2713z00zz__osz00,
		BgL_bgl_string2713za700za7za7_2921za7, "LC_CTYPE", 8);
	      DEFINE_STRING(BGl_string2714z00zz__osz00,
		BgL_bgl_string2714za700za7za7_2922za7, "LC_ALL", 6);
	      DEFINE_STRING(BGl_string2716z00zz__osz00,
		BgL_bgl_string2716za700za7za7_2923za7, "ignore", 6);
	      DEFINE_STRING(BGl_string2718z00zz__osz00,
		BgL_bgl_string2718za700za7za7_2924za7, "default", 7);
	      DEFINE_STRING(BGl_string2719z00zz__osz00,
		BgL_bgl_string2719za700za7za7_2925za7, "signal", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dynamiczd2loadzd2symbolzd2setzd2envz00zz__osz00,
		BgL_bgl_za762dynamicza7d2loa2926z00,
		BGl_z62dynamiczd2loadzd2symbolzd2setzb0zz__osz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2800z00zz__osz00,
		BgL_bgl_string2800za700za7za7_2927za7, "&setgid", 7);
	      DEFINE_STRING(BGl_string2801z00zz__osz00,
		BgL_bgl_string2801za700za7za7_2928za7, "&getpwnam", 9);
	      DEFINE_STRING(BGl_string2720z00zz__osz00,
		BgL_bgl_string2720za700za7za7_2929za7, "Illegal signal", 14);
	      DEFINE_STRING(BGl_string2802z00zz__osz00,
		BgL_bgl_string2802za700za7za7_2930za7, "&getpwuid", 9);
	      DEFINE_STRING(BGl_string2721z00zz__osz00,
		BgL_bgl_string2721za700za7za7_2931za7, "Wrong number of arguments", 25);
	      DEFINE_STRING(BGl_string2803z00zz__osz00,
		BgL_bgl_string2803za700za7za7_2932za7, "&ioctl-register-request!", 24);
	      DEFINE_STRING(BGl_string2722z00zz__osz00,
		BgL_bgl_string2722za700za7za7_2933za7, "/tmp/4.4a/runtime/Llib/os.scm", 29);
	      DEFINE_STRING(BGl_string2804z00zz__osz00,
		BgL_bgl_string2804za700za7za7_2934za7, "buint64", 7);
	      DEFINE_STRING(BGl_string2723z00zz__osz00,
		BgL_bgl_string2723za700za7za7_2935za7, "&signal", 7);
	      DEFINE_STRING(BGl_string2805z00zz__osz00,
		BgL_bgl_string2805za700za7za7_2936za7, "ioctl", 5);
	      DEFINE_STRING(BGl_string2724z00zz__osz00,
		BgL_bgl_string2724za700za7za7_2937za7, "bint", 4);
	      DEFINE_STRING(BGl_string2806z00zz__osz00,
		BgL_bgl_string2806za700za7za7_2938za7, "number of string", 16);
	      DEFINE_STRING(BGl_string2725z00zz__osz00,
		BgL_bgl_string2725za700za7za7_2939za7, "&get-signal-handler", 19);
	      DEFINE_STRING(BGl_string2807z00zz__osz00,
		BgL_bgl_string2807za700za7za7_2940za7, "elong pair", 10);
	      DEFINE_STRING(BGl_string2726z00zz__osz00,
		BgL_bgl_string2726za700za7za7_2941za7, "win32", 5);
	      DEFINE_STRING(BGl_string2808z00zz__osz00,
		BgL_bgl_string2808za700za7za7_2942za7, "_umask", 6);
	      DEFINE_STRING(BGl_string2727z00zz__osz00,
		BgL_bgl_string2727za700za7za7_2943za7, "HOME", 4);
	      DEFINE_STRING(BGl_string2809z00zz__osz00,
		BgL_bgl_string2809za700za7za7_2944za7, "long", 4);
	      DEFINE_STRING(BGl_string2728z00zz__osz00,
		BgL_bgl_string2728za700za7za7_2945za7, "USERPROFILE", 11);
	      DEFINE_STRING(BGl_string2729z00zz__osz00,
		BgL_bgl_string2729za700za7za7_2946za7, "&putenv", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ioctlzd2registerzd2requestz12zd2envzc0zz__osz00,
		BgL_bgl_za762ioctlza7d2regis2947z00,
		BGl_z62ioctlzd2registerzd2requestz12z70zz__osz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2filezd2namezd2envzd2zz__osz00,
		BgL_bgl_za762makeza7d2fileza7d2948za7,
		BGl_z62makezd2filezd2namez62zz__osz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_chdirzd2envzd2zz__osz00,
		BgL_bgl_za762chdirza762za7za7__o2949z00, BGl_z62chdirz62zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2810z00zz__osz00,
		BgL_bgl_string2810za700za7za7_2950za7, "&openlog", 8);
	      DEFINE_STRING(BGl_string2811z00zz__osz00,
		BgL_bgl_string2811za700za7za7_2951za7, "%s", 2);
	      DEFINE_STRING(BGl_string2730z00zz__osz00,
		BgL_bgl_string2730za700za7za7_2952za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2812z00zz__osz00,
		BgL_bgl_string2812za700za7za7_2953za7, "&syslog", 7);
	      DEFINE_STRING(BGl_string2731z00zz__osz00,
		BgL_bgl_string2731za700za7za7_2954za7, "| ", 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_prefixzd2envzd2zz__osz00,
		BgL_bgl_za762prefixza762za7za7__2955z00, BGl_z62prefixz62zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2732z00zz__osz00,
		BgL_bgl_string2732za700za7za7_2956za7, "&chdir", 6);
	      DEFINE_STRING(BGl_string2814z00zz__osz00,
		BgL_bgl_string2814za700za7za7_2957za7, "LOG_CONS", 8);
	      DEFINE_STRING(BGl_string2733z00zz__osz00,
		BgL_bgl_string2733za700za7za7_2958za7, "mingw", 5);
	      DEFINE_STRING(BGl_string2734z00zz__osz00,
		BgL_bgl_string2734za700za7za7_2959za7, "&basename", 9);
	      DEFINE_STRING(BGl_string2816z00zz__osz00,
		BgL_bgl_string2816za700za7za7_2960za7, "LOG_NDELAY", 10);
	      DEFINE_STRING(BGl_string2735z00zz__osz00,
		BgL_bgl_string2735za700za7za7_2961za7, "&prefix", 7);
	      DEFINE_STRING(BGl_string2736z00zz__osz00,
		BgL_bgl_string2736za700za7za7_2962za7, "&dirname", 8);
	      DEFINE_STRING(BGl_string2818z00zz__osz00,
		BgL_bgl_string2818za700za7za7_2963za7, "LOG_NOWAIT", 10);
	      DEFINE_STRING(BGl_string2737z00zz__osz00,
		BgL_bgl_string2737za700za7za7_2964za7, "", 0);
	      DEFINE_STRING(BGl_string2738z00zz__osz00,
		BgL_bgl_string2738za700za7za7_2965za7, "&suffix", 7);
	      DEFINE_STRING(BGl_string2820z00zz__osz00,
		BgL_bgl_string2820za700za7za7_2966za7, "LOG_ODELAY", 10);
	      DEFINE_STRING(BGl_string2740z00zz__osz00,
		BgL_bgl_string2740za700za7za7_2967za7, "read", 4);
	      DEFINE_STRING(BGl_string2822z00zz__osz00,
		BgL_bgl_string2822za700za7za7_2968za7, "LOG_PID", 7);
	      DEFINE_STRING(BGl_string2823z00zz__osz00,
		BgL_bgl_string2823za700za7za7_2969za7, "syslog-option", 13);
	      DEFINE_STRING(BGl_string2742z00zz__osz00,
		BgL_bgl_string2742za700za7za7_2970za7, "write", 5);
	      DEFINE_STRING(BGl_string2824z00zz__osz00,
		BgL_bgl_string2824za700za7za7_2971za7, "unknown option", 14);
	      DEFINE_STRING(BGl_string2744z00zz__osz00,
		BgL_bgl_string2744za700za7za7_2972za7, "execute", 7);
	      DEFINE_STRING(BGl_string2826z00zz__osz00,
		BgL_bgl_string2826za700za7za7_2973za7, "LOG_AUTH", 8);
	      DEFINE_STRING(BGl_string2745z00zz__osz00,
		BgL_bgl_string2745za700za7za7_2974za7, "chmod", 5);
	      DEFINE_STRING(BGl_string2746z00zz__osz00,
		BgL_bgl_string2746za700za7za7_2975za7, "Unknown mode", 12);
	      DEFINE_STRING(BGl_string2828z00zz__osz00,
		BgL_bgl_string2828za700za7za7_2976za7, "LOG_AUTHPRIV", 12);
	      DEFINE_STRING(BGl_string2747z00zz__osz00,
		BgL_bgl_string2747za700za7za7_2977za7, "&chmod", 6);
	      DEFINE_STRING(BGl_string2748z00zz__osz00,
		BgL_bgl_string2748za700za7za7_2978za7, "&make-file-name", 15);
	      DEFINE_STRING(BGl_string2749z00zz__osz00,
		BgL_bgl_string2749za700za7za7_2979za7, "make-file-path", 14);
	      DEFINE_STRING(BGl_string2830z00zz__osz00,
		BgL_bgl_string2830za700za7za7_2980za7, "LOG_CRON", 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_syslogzd2optionzd2envz00zz__osz00,
		BgL_bgl_za762syslogza7d2opti2981z00, va_generic_entry,
		BGl_z62syslogzd2optionzb0zz__osz00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2750z00zz__osz00,
		BgL_bgl_string2750za700za7za7_2982za7, "string", 6);
	      DEFINE_STRING(BGl_string2832z00zz__osz00,
		BgL_bgl_string2832za700za7za7_2983za7, "LOG_DAEMON", 10);
	      DEFINE_STRING(BGl_string2751z00zz__osz00,
		BgL_bgl_string2751za700za7za7_2984za7, "&make-file-path", 15);
	      DEFINE_STRING(BGl_string2834z00zz__osz00,
		BgL_bgl_string2834za700za7za7_2985za7, "LOG_FTP", 7);
	      DEFINE_STRING(BGl_string2753z00zz__osz00,
		BgL_bgl_string2753za700za7za7_2986za7, "bigloo-c", 8);
	      DEFINE_STRING(BGl_string2754z00zz__osz00,
		BgL_bgl_string2754za700za7za7_2987za7, "lib", 3);
	      DEFINE_STRING(BGl_string2836z00zz__osz00,
		BgL_bgl_string2836za700za7za7_2988za7, "LOG_KERN", 8);
	      DEFINE_STRING(BGl_string2756z00zz__osz00,
		BgL_bgl_string2756za700za7za7_2989za7, "bigloo-jvm", 10);
	      DEFINE_STRING(BGl_string2838z00zz__osz00,
		BgL_bgl_string2838za700za7za7_2990za7, "LOG_LOCAL0", 10);
	      DEFINE_STRING(BGl_string2757z00zz__osz00,
		BgL_bgl_string2757za700za7za7_2991za7, ".zip", 4);
	      DEFINE_STRING(BGl_string2759z00zz__osz00,
		BgL_bgl_string2759za700za7za7_2992za7, "bigloo-.net", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2signalzd2handlerzd2envzd2zz__osz00,
		BgL_bgl_za762getza7d2signalza72993za7,
		BGl_z62getzd2signalzd2handlerz62zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_syslogzd2facilityzd2envz00zz__osz00,
		BgL_bgl_za762syslogza7d2faci2994z00, BGl_z62syslogzd2facilityzb0zz__osz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2840z00zz__osz00,
		BgL_bgl_string2840za700za7za7_2995za7, "LOG_LOCAL1", 10);
	      DEFINE_STRING(BGl_string2760z00zz__osz00,
		BgL_bgl_string2760za700za7za7_2996za7, ".dll", 4);
	      DEFINE_STRING(BGl_string2842z00zz__osz00,
		BgL_bgl_string2842za700za7za7_2997za7, "LOG_LOCAL2", 10);
	      DEFINE_STRING(BGl_string2761z00zz__osz00,
		BgL_bgl_string2761za700za7za7_2998za7, "make-static-lib-name", 20);
	      DEFINE_STRING(BGl_string2762z00zz__osz00,
		BgL_bgl_string2762za700za7za7_2999za7, "Unknown backend", 15);
	      DEFINE_STRING(BGl_string2844z00zz__osz00,
		BgL_bgl_string2844za700za7za7_3000za7, "LOG_LOCAL3", 10);
	      DEFINE_STRING(BGl_string2763z00zz__osz00,
		BgL_bgl_string2763za700za7za7_3001za7, "&make-static-lib-name", 21);
	      DEFINE_STRING(BGl_string2764z00zz__osz00,
		BgL_bgl_string2764za700za7za7_3002za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2846z00zz__osz00,
		BgL_bgl_string2846za700za7za7_3003za7, "LOG_LOCAL4", 10);
	      DEFINE_STRING(BGl_string2765z00zz__osz00,
		BgL_bgl_string2765za700za7za7_3004za7, "make-shared-lib-name", 20);
	      DEFINE_STRING(BGl_string2766z00zz__osz00,
		BgL_bgl_string2766za700za7za7_3005za7, "&make-shared-lib-name", 21);
	      DEFINE_STRING(BGl_string2848z00zz__osz00,
		BgL_bgl_string2848za700za7za7_3006za7, "LOG_LOCAL5", 10);
	      DEFINE_STRING(BGl_string2767z00zz__osz00,
		BgL_bgl_string2767za700za7za7_3007za7, "&find-file/path", 15);
	      DEFINE_STRING(BGl_string2768z00zz__osz00,
		BgL_bgl_string2768za700za7za7_3008za7, "&file-name->list", 16);
	      DEFINE_STRING(BGl_string2769z00zz__osz00,
		BgL_bgl_string2769za700za7za7_3009za7, "&file-name-canonicalize", 23);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2namezd2canonicaliza7ezd2envz75zz__osz00,
		BgL_bgl_za762fileza7d2nameza7d3010za7,
		BGl_z62filezd2namezd2canonicaliza7ezc5zz__osz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2sharedzd2libzd2namezd2envz00zz__osz00,
		BgL_bgl_za762makeza7d2shared3011z00,
		BGl_z62makezd2sharedzd2libzd2namezb0zz__osz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2850z00zz__osz00,
		BgL_bgl_string2850za700za7za7_3012za7, "LOG_LOCAL6", 10);
	      DEFINE_STRING(BGl_string2770z00zz__osz00,
		BgL_bgl_string2770za700za7za7_3013za7, "&file-name-canonicalize!", 24);
	      DEFINE_STRING(BGl_string2852z00zz__osz00,
		BgL_bgl_string2852za700za7za7_3014za7, "LOG_LOCAL7", 10);
	      DEFINE_STRING(BGl_string2771z00zz__osz00,
		BgL_bgl_string2771za700za7za7_3015za7, "..", 2);
	      DEFINE_STRING(BGl_string2772z00zz__osz00,
		BgL_bgl_string2772za700za7za7_3016za7, "&file-name-unix-canonicalize", 28);
	      DEFINE_STRING(BGl_string2854z00zz__osz00,
		BgL_bgl_string2854za700za7za7_3017za7, "LOG_LPR", 7);
	      DEFINE_STRING(BGl_string2773z00zz__osz00,
		BgL_bgl_string2773za700za7za7_3018za7, "&file-name-unix-canonicalize!", 29);
	      DEFINE_STRING(BGl_string2774z00zz__osz00,
		BgL_bgl_string2774za700za7za7_3019za7, "&relative-file-name", 19);
	      DEFINE_STRING(BGl_string2856z00zz__osz00,
		BgL_bgl_string2856za700za7za7_3020za7, "LOG_MAIL", 8);
	      DEFINE_STRING(BGl_string2775z00zz__osz00,
		BgL_bgl_string2775za700za7za7_3021za7, "&make-static-library-name", 25);
	      DEFINE_STRING(BGl_string2776z00zz__osz00,
		BgL_bgl_string2776za700za7za7_3022za7, "&make-shared-library-name", 25);
	      DEFINE_STRING(BGl_string2858z00zz__osz00,
		BgL_bgl_string2858za700za7za7_3023za7, "LOG_NEWS", 8);
	      DEFINE_STRING(BGl_string2777z00zz__osz00,
		BgL_bgl_string2777za700za7za7_3024za7, "&sleep", 6);
	      DEFINE_STRING(BGl_string2778z00zz__osz00,
		BgL_bgl_string2778za700za7za7_3025za7, "_dynamic-load", 13);
	      DEFINE_STRING(BGl_string2779z00zz__osz00,
		BgL_bgl_string2779za700za7za7_3026za7, "module-initialization", 21);
	      DEFINE_STRING(BGl_string2860z00zz__osz00,
		BgL_bgl_string2860za700za7za7_3027za7, "LOG_SYSLOG", 10);
	      DEFINE_STRING(BGl_string2862z00zz__osz00,
		BgL_bgl_string2862za700za7za7_3028za7, "LOG_USER", 8);
	      DEFINE_STRING(BGl_string2781z00zz__osz00,
		BgL_bgl_string2781za700za7za7_3029za7, "__dload_noarch", 14);
	      DEFINE_STRING(BGl_string2782z00zz__osz00,
		BgL_bgl_string2782za700za7za7_3030za7, "dynamic-load:", 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getgidzd2envzd2zz__osz00,
		BgL_bgl_za762getgidza762za7za7__3031z00, BGl_z62getgidz62zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2864z00zz__osz00,
		BgL_bgl_string2864za700za7za7_3032za7, "LOG_UUCP", 8);
	      DEFINE_STRING(BGl_string2783z00zz__osz00,
		BgL_bgl_string2783za700za7za7_3033za7, "Not supported on this architecture",
		34);
	      DEFINE_STRING(BGl_string2865z00zz__osz00,
		BgL_bgl_string2865za700za7za7_3034za7, "syslog-facility", 15);
	      DEFINE_STRING(BGl_string2866z00zz__osz00,
		BgL_bgl_string2866za700za7za7_3035za7, "unknown facility", 16);
	      DEFINE_STRING(BGl_string2785z00zz__osz00,
		BgL_bgl_string2785za700za7za7_3036za7, "__dload_error", 13);
	      DEFINE_STRING(BGl_string2867z00zz__osz00,
		BgL_bgl_string2867za700za7za7_3037za7, "&syslog-facility", 16);
	      DEFINE_STRING(BGl_string2787z00zz__osz00,
		BgL_bgl_string2787za700za7za7_3038za7, "__dload_noinit", 14);
	      DEFINE_STRING(BGl_string2869z00zz__osz00,
		BgL_bgl_string2869za700za7za7_3039za7, "LOG_EMERG", 9);
	      DEFINE_STRING(BGl_string2788z00zz__osz00,
		BgL_bgl_string2788za700za7za7_3040za7, "dynamic-load: ", 14);
	      DEFINE_STRING(BGl_string2789z00zz__osz00,
		BgL_bgl_string2789za700za7za7_3041za7,
		"Cannot find library init entry point -- ", 40);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setuidzd2envzd2zz__osz00,
		BgL_bgl_za762setuidza762za7za7__3042z00, BGl_z62setuidz62zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2871z00zz__osz00,
		BgL_bgl_string2871za700za7za7_3043za7, "LOG_ALERT", 9);
	      DEFINE_STRING(BGl_string2790z00zz__osz00,
		BgL_bgl_string2790za700za7za7_3044za7,
		"Cannot find library init entry point", 36);
	      DEFINE_STRING(BGl_string2791z00zz__osz00,
		BgL_bgl_string2791za700za7za7_3045za7, "Can't find library", 18);
	      DEFINE_STRING(BGl_string2873z00zz__osz00,
		BgL_bgl_string2873za700za7za7_3046za7, "LOG_CRIT", 8);
	      DEFINE_STRING(BGl_string2792z00zz__osz00,
		BgL_bgl_string2792za700za7za7_3047za7, "dynamic-unload", 14);
	      DEFINE_STRING(BGl_string2793z00zz__osz00,
		BgL_bgl_string2793za700za7za7_3048za7, "&dynamic-unload", 15);
	      DEFINE_STRING(BGl_string2875z00zz__osz00,
		BgL_bgl_string2875za700za7za7_3049za7, "LOG_ERR", 7);
	      DEFINE_STRING(BGl_string2794z00zz__osz00,
		BgL_bgl_string2794za700za7za7_3050za7, "_dynamic-load-symbol", 20);
	      DEFINE_STRING(BGl_string2795z00zz__osz00,
		BgL_bgl_string2795za700za7za7_3051za7, "&dynamic-load-symbol-get", 24);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dynamiczd2loadzd2envz00zz__osz00,
		BgL_bgl__dynamicza7d2loadza73052z00, opt_generic_entry,
		BGl__dynamiczd2loadzd2zz__osz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sleepzd2envzd2zz__osz00,
		BgL_bgl_za762sleepza762za7za7__o3053z00, BGl_z62sleepz62zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2877z00zz__osz00,
		BgL_bgl_string2877za700za7za7_3054za7, "LOG_WARNING", 11);
	      DEFINE_STRING(BGl_string2796z00zz__osz00,
		BgL_bgl_string2796za700za7za7_3055za7, "custom", 6);
	      DEFINE_STRING(BGl_string2797z00zz__osz00,
		BgL_bgl_string2797za700za7za7_3056za7, "&dynamic-load-symbol-set", 24);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_closelogzd2envzd2zz__osz00,
		BgL_bgl_za762closelogza762za7za73057z00, BGl_z62closelogz62zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_commandzd2linezd2envz00zz__osz00,
		BgL_bgl_za762commandza7d2lin3058z00, BGl_z62commandzd2linezb0zz__osz00, 0L,
		BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2879z00zz__osz00,
		BgL_bgl_string2879za700za7za7_3059za7, "LOG_NOTICE", 10);
	      DEFINE_STRING(BGl_string2798z00zz__osz00,
		BgL_bgl_string2798za700za7za7_3060za7, "&unix-path->list", 16);
	      DEFINE_STRING(BGl_string2799z00zz__osz00,
		BgL_bgl_string2799za700za7za7_3061za7, "&setuid", 7);
	      DEFINE_STRING(BGl_string2881z00zz__osz00,
		BgL_bgl_string2881za700za7za7_3062za7, "LOG_INFO", 8);
	      DEFINE_STRING(BGl_string2883z00zz__osz00,
		BgL_bgl_string2883za700za7za7_3063za7, "LOG_DEBUG", 9);
	      DEFINE_STRING(BGl_string2884z00zz__osz00,
		BgL_bgl_string2884za700za7za7_3064za7, "syslog-level", 12);
	      DEFINE_STRING(BGl_string2885z00zz__osz00,
		BgL_bgl_string2885za700za7za7_3065za7, "unknown level", 13);
	      DEFINE_STRING(BGl_string2886z00zz__osz00,
		BgL_bgl_string2886za700za7za7_3066za7, "&syslog-level", 13);
	      DEFINE_STRING(BGl_string2887z00zz__osz00,
		BgL_bgl_string2887za700za7za7_3067za7, "__os", 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dynamiczd2unloadzd2envz00zz__osz00,
		BgL_bgl_za762dynamicza7d2unl3068z00, BGl_z62dynamiczd2unloadzb0zz__osz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2charsetzd2envz00zz__osz00,
		BgL_bgl_za762osza7d2charsetza73069za7, BGl_z62oszd2charsetzb0zz__osz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_staticzd2libraryzd2suffixzd2envzd2zz__osz00,
		BgL_bgl_za762staticza7d2libr3070z00,
		BGl_z62staticzd2libraryzd2suffixz62zz__osz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_systemzd2envzd2zz__osz00,
		BgL_bgl_za762systemza762za7za7__3071z00, va_generic_entry,
		BGl_z62systemz62zz__osz00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getgroupszd2envzd2zz__osz00,
		BgL_bgl_za762getgroupsza762za73072za7, BGl_z62getgroupsz62zz__osz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2namezd2unixzd2canonicaliza7ezd2envza7zz__osz00,
		BgL_bgl_za762fileza7d2nameza7d3073za7,
		BGl_z62filezd2namezd2unixzd2canonicaliza7ez17zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_basenamezd2envzd2zz__osz00,
		BgL_bgl_za762basenameza762za7za73074z00, BGl_z62basenamez62zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2separatorzd2envz00zz__osz00,
		BgL_bgl_za762fileza7d2separa3075z00, BGl_z62filezd2separatorzb0zz__osz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_getpwuidzd2envzd2zz__osz00,
		BgL_bgl_za762getpwuidza762za7za73076z00, BGl_z62getpwuidz62zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_putenvzd2envzd2zz__osz00,
		BgL_bgl_za762putenvza762za7za7__3077z00, BGl_z62putenvz62zz__osz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sharedzd2libraryzd2suffixzd2envzd2zz__osz00,
		BgL_bgl_za762sharedza7d2libr3078z00,
		BGl_z62sharedzd2libraryzd2suffixz62zz__osz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_systemzd2ze3stringzd2envze3zz__osz00,
		BgL_bgl_za762systemza7d2za7e3s3079za7, va_generic_entry,
		BGl_z62systemzd2ze3stringz53zz__osz00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_defaultzd2scriptzd2namezd2envzd2zz__osz00,
		BgL_bgl_za762defaultza7d2scr3080z00,
		BGl_z62defaultzd2scriptzd2namez62zz__osz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_syslogzd2levelzd2envz00zz__osz00,
		BgL_bgl_za762syslogza7d2leve3081z00, BGl_z62syslogzd2levelzb0zz__osz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unixzd2pathzd2ze3listzd2envz31zz__osz00,
		BgL_bgl_za762unixza7d2pathza7d3082za7,
		BGl_z62unixzd2pathzd2ze3listz81zz__osz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2staticzd2libraryzd2namezd2envz00zz__osz00,
		BgL_bgl_za762makeza7d2static3083z00,
		BGl_z62makezd2staticzd2libraryzd2namezb0zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_oszd2classzd2envz00zz__osz00,
		BgL_bgl_za762osza7d2classza7b03084za7, BGl_z62oszd2classzb0zz__osz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2namezd2unixzd2canonicaliza7ez12zd2envzb5zz__osz00,
		BgL_bgl_za762fileza7d2nameza7d3085za7,
		BGl_z62filezd2namezd2unixzd2canonicaliza7ez12z05zz__osz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_setgidzd2envzd2zz__osz00,
		BgL_bgl_za762setgidza762za7za7__3086z00, BGl_z62setgidz62zz__osz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_relativezd2filezd2namezd2envzd2zz__osz00,
		BgL_bgl_za762relativeza7d2fi3087z00,
		BGl_z62relativezd2filezd2namez62zz__osz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol2813z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2815z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2817z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2819z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2739z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2821z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2741z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2743z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2825z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2827z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2829z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2831z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2833z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2752z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2835z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2755z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2837z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2839z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2758z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2841z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2843z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2845z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2847z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2849z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2851z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2853z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2855z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2857z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2859z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2861z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2780z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2863z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2784z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2786z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2868z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2870z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2872z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2874z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2876z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2878z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2880z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2882z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_za2defaultzd2javazd2packageza2z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_list2709z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_ioctlzd2requestszd2tablez00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2715z00zz__osz00));
		     ADD_ROOT((void *) (&BGl_symbol2717z00zz__osz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__osz00(long
		BgL_checksumz00_4145, char *BgL_fromz00_4146)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__osz00))
				{
					BGl_requirezd2initializa7ationz75zz__osz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__osz00();
					BGl_cnstzd2initzd2zz__osz00();
					BGl_importedzd2moduleszd2initz00zz__osz00();
					return BGl_toplevelzd2initzd2zz__osz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__osz00()
	{
		{	/* Llib/os.scm 18 */
			BGl_list2709z00zz__osz00 =
				MAKE_YOUNG_PAIR(BGl_string2710z00zz__osz00, BNIL);
			BGl_symbol2715z00zz__osz00 =
				bstring_to_symbol(BGl_string2716z00zz__osz00);
			BGl_symbol2717z00zz__osz00 =
				bstring_to_symbol(BGl_string2718z00zz__osz00);
			BGl_symbol2739z00zz__osz00 =
				bstring_to_symbol(BGl_string2740z00zz__osz00);
			BGl_symbol2741z00zz__osz00 =
				bstring_to_symbol(BGl_string2742z00zz__osz00);
			BGl_symbol2743z00zz__osz00 =
				bstring_to_symbol(BGl_string2744z00zz__osz00);
			BGl_symbol2752z00zz__osz00 =
				bstring_to_symbol(BGl_string2753z00zz__osz00);
			BGl_symbol2755z00zz__osz00 =
				bstring_to_symbol(BGl_string2756z00zz__osz00);
			BGl_symbol2758z00zz__osz00 =
				bstring_to_symbol(BGl_string2759z00zz__osz00);
			BGl_symbol2780z00zz__osz00 =
				bstring_to_symbol(BGl_string2781z00zz__osz00);
			BGl_symbol2784z00zz__osz00 =
				bstring_to_symbol(BGl_string2785z00zz__osz00);
			BGl_symbol2786z00zz__osz00 =
				bstring_to_symbol(BGl_string2787z00zz__osz00);
			BGl_symbol2813z00zz__osz00 =
				bstring_to_symbol(BGl_string2814z00zz__osz00);
			BGl_symbol2815z00zz__osz00 =
				bstring_to_symbol(BGl_string2816z00zz__osz00);
			BGl_symbol2817z00zz__osz00 =
				bstring_to_symbol(BGl_string2818z00zz__osz00);
			BGl_symbol2819z00zz__osz00 =
				bstring_to_symbol(BGl_string2820z00zz__osz00);
			BGl_symbol2821z00zz__osz00 =
				bstring_to_symbol(BGl_string2822z00zz__osz00);
			BGl_symbol2825z00zz__osz00 =
				bstring_to_symbol(BGl_string2826z00zz__osz00);
			BGl_symbol2827z00zz__osz00 =
				bstring_to_symbol(BGl_string2828z00zz__osz00);
			BGl_symbol2829z00zz__osz00 =
				bstring_to_symbol(BGl_string2830z00zz__osz00);
			BGl_symbol2831z00zz__osz00 =
				bstring_to_symbol(BGl_string2832z00zz__osz00);
			BGl_symbol2833z00zz__osz00 =
				bstring_to_symbol(BGl_string2834z00zz__osz00);
			BGl_symbol2835z00zz__osz00 =
				bstring_to_symbol(BGl_string2836z00zz__osz00);
			BGl_symbol2837z00zz__osz00 =
				bstring_to_symbol(BGl_string2838z00zz__osz00);
			BGl_symbol2839z00zz__osz00 =
				bstring_to_symbol(BGl_string2840z00zz__osz00);
			BGl_symbol2841z00zz__osz00 =
				bstring_to_symbol(BGl_string2842z00zz__osz00);
			BGl_symbol2843z00zz__osz00 =
				bstring_to_symbol(BGl_string2844z00zz__osz00);
			BGl_symbol2845z00zz__osz00 =
				bstring_to_symbol(BGl_string2846z00zz__osz00);
			BGl_symbol2847z00zz__osz00 =
				bstring_to_symbol(BGl_string2848z00zz__osz00);
			BGl_symbol2849z00zz__osz00 =
				bstring_to_symbol(BGl_string2850z00zz__osz00);
			BGl_symbol2851z00zz__osz00 =
				bstring_to_symbol(BGl_string2852z00zz__osz00);
			BGl_symbol2853z00zz__osz00 =
				bstring_to_symbol(BGl_string2854z00zz__osz00);
			BGl_symbol2855z00zz__osz00 =
				bstring_to_symbol(BGl_string2856z00zz__osz00);
			BGl_symbol2857z00zz__osz00 =
				bstring_to_symbol(BGl_string2858z00zz__osz00);
			BGl_symbol2859z00zz__osz00 =
				bstring_to_symbol(BGl_string2860z00zz__osz00);
			BGl_symbol2861z00zz__osz00 =
				bstring_to_symbol(BGl_string2862z00zz__osz00);
			BGl_symbol2863z00zz__osz00 =
				bstring_to_symbol(BGl_string2864z00zz__osz00);
			BGl_symbol2868z00zz__osz00 =
				bstring_to_symbol(BGl_string2869z00zz__osz00);
			BGl_symbol2870z00zz__osz00 =
				bstring_to_symbol(BGl_string2871z00zz__osz00);
			BGl_symbol2872z00zz__osz00 =
				bstring_to_symbol(BGl_string2873z00zz__osz00);
			BGl_symbol2874z00zz__osz00 =
				bstring_to_symbol(BGl_string2875z00zz__osz00);
			BGl_symbol2876z00zz__osz00 =
				bstring_to_symbol(BGl_string2877z00zz__osz00);
			BGl_symbol2878z00zz__osz00 =
				bstring_to_symbol(BGl_string2879z00zz__osz00);
			BGl_symbol2880z00zz__osz00 =
				bstring_to_symbol(BGl_string2881z00zz__osz00);
			return (BGl_symbol2882z00zz__osz00 =
				bstring_to_symbol(BGl_string2883z00zz__osz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__osz00()
	{
		{	/* Llib/os.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__osz00()
	{
		{	/* Llib/os.scm 18 */
			BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00 = BGl_list2709z00zz__osz00;
			BGl_za2defaultzd2javazd2packageza2z00zz__osz00 =
				BGl_string2711z00zz__osz00;
			return (BGl_ioctlzd2requestszd2tablez00zz__osz00 = BNIL, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__osz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1203;

				BgL_headz00_1203 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2369;
					obj_t BgL_tailz00_2370;

					BgL_prevz00_2369 = BgL_headz00_1203;
					BgL_tailz00_2370 = BgL_l1z00_1;
				BgL_loopz00_2368:
					if (PAIRP(BgL_tailz00_2370))
						{
							obj_t BgL_newzd2prevzd2_2376;

							BgL_newzd2prevzd2_2376 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2370), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2369, BgL_newzd2prevzd2_2376);
							{
								obj_t BgL_tailz00_4207;
								obj_t BgL_prevz00_4206;

								BgL_prevz00_4206 = BgL_newzd2prevzd2_2376;
								BgL_tailz00_4207 = CDR(BgL_tailz00_2370);
								BgL_tailz00_2370 = BgL_tailz00_4207;
								BgL_prevz00_2369 = BgL_prevz00_4206;
								goto BgL_loopz00_2368;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_1203);
			}
		}

	}



/* default-executable-name */
	BGL_EXPORTED_DEF obj_t BGl_defaultzd2executablezd2namez00zz__osz00()
	{
		{	/* Llib/os.scm 293 */
			return string_to_bstring(BGL_DEFAULT_A_OUT);
		}

	}



/* &default-executable-name */
	obj_t BGl_z62defaultzd2executablezd2namez62zz__osz00(obj_t BgL_envz00_3910)
	{
		{	/* Llib/os.scm 293 */
			return BGl_defaultzd2executablezd2namez00zz__osz00();
		}

	}



/* default-script-name */
	BGL_EXPORTED_DEF obj_t BGl_defaultzd2scriptzd2namez00zz__osz00()
	{
		{	/* Llib/os.scm 294 */
			return string_to_bstring(BGL_DEFAULT_A_BAT);
		}

	}



/* &default-script-name */
	obj_t BGl_z62defaultzd2scriptzd2namez62zz__osz00(obj_t BgL_envz00_3911)
	{
		{	/* Llib/os.scm 294 */
			return BGl_defaultzd2scriptzd2namez00zz__osz00();
		}

	}



/* os-class */
	BGL_EXPORTED_DEF obj_t BGl_oszd2classzd2zz__osz00()
	{
		{	/* Llib/os.scm 295 */
			return string_to_bstring(OS_CLASS);
		}

	}



/* &os-class */
	obj_t BGl_z62oszd2classzb0zz__osz00(obj_t BgL_envz00_3912)
	{
		{	/* Llib/os.scm 295 */
			return BGl_oszd2classzd2zz__osz00();
		}

	}



/* os-name */
	BGL_EXPORTED_DEF obj_t BGl_oszd2namezd2zz__osz00()
	{
		{	/* Llib/os.scm 296 */
			return string_to_bstring(OS_NAME);
		}

	}



/* &os-name */
	obj_t BGl_z62oszd2namezb0zz__osz00(obj_t BgL_envz00_3913)
	{
		{	/* Llib/os.scm 296 */
			return BGl_oszd2namezd2zz__osz00();
		}

	}



/* os-arch */
	BGL_EXPORTED_DEF obj_t BGl_oszd2archzd2zz__osz00()
	{
		{	/* Llib/os.scm 297 */
			return string_to_bstring(OS_ARCH);
		}

	}



/* &os-arch */
	obj_t BGl_z62oszd2archzb0zz__osz00(obj_t BgL_envz00_3914)
	{
		{	/* Llib/os.scm 297 */
			return BGl_oszd2archzd2zz__osz00();
		}

	}



/* os-version */
	BGL_EXPORTED_DEF obj_t BGl_oszd2versionzd2zz__osz00()
	{
		{	/* Llib/os.scm 298 */
			return string_to_bstring(OS_VERSION);
		}

	}



/* &os-version */
	obj_t BGl_z62oszd2versionzb0zz__osz00(obj_t BgL_envz00_3915)
	{
		{	/* Llib/os.scm 298 */
			return BGl_oszd2versionzd2zz__osz00();
		}

	}



/* os-tmp */
	BGL_EXPORTED_DEF obj_t BGl_oszd2tmpzd2zz__osz00()
	{
		{	/* Llib/os.scm 299 */
			return string_to_bstring(OS_TMP);
		}

	}



/* &os-tmp */
	obj_t BGl_z62oszd2tmpzb0zz__osz00(obj_t BgL_envz00_3916)
	{
		{	/* Llib/os.scm 299 */
			return BGl_oszd2tmpzd2zz__osz00();
		}

	}



/* file-separator */
	BGL_EXPORTED_DEF obj_t BGl_filezd2separatorzd2zz__osz00()
	{
		{	/* Llib/os.scm 300 */
			return BCHAR(FILE_SEPARATOR);
		}

	}



/* &file-separator */
	obj_t BGl_z62filezd2separatorzb0zz__osz00(obj_t BgL_envz00_3917)
	{
		{	/* Llib/os.scm 300 */
			return BGl_filezd2separatorzd2zz__osz00();
		}

	}



/* path-separator */
	BGL_EXPORTED_DEF obj_t BGl_pathzd2separatorzd2zz__osz00()
	{
		{	/* Llib/os.scm 301 */
			return BCHAR(PATH_SEPARATOR);
		}

	}



/* &path-separator */
	obj_t BGl_z62pathzd2separatorzb0zz__osz00(obj_t BgL_envz00_3918)
	{
		{	/* Llib/os.scm 301 */
			return BGl_pathzd2separatorzd2zz__osz00();
		}

	}



/* static-library-suffix */
	BGL_EXPORTED_DEF obj_t BGl_staticzd2libraryzd2suffixz00zz__osz00()
	{
		{	/* Llib/os.scm 302 */
			return string_to_bstring(STATIC_LIB_SUFFIX);
		}

	}



/* &static-library-suffix */
	obj_t BGl_z62staticzd2libraryzd2suffixz62zz__osz00(obj_t BgL_envz00_3919)
	{
		{	/* Llib/os.scm 302 */
			return BGl_staticzd2libraryzd2suffixz00zz__osz00();
		}

	}



/* shared-library-suffix */
	BGL_EXPORTED_DEF obj_t BGl_sharedzd2libraryzd2suffixz00zz__osz00()
	{
		{	/* Llib/os.scm 303 */
			return string_to_bstring(SHARED_LIB_SUFFIX);
		}

	}



/* &shared-library-suffix */
	obj_t BGl_z62sharedzd2libraryzd2suffixz62zz__osz00(obj_t BgL_envz00_3920)
	{
		{	/* Llib/os.scm 303 */
			return BGl_sharedzd2libraryzd2suffixz00zz__osz00();
		}

	}



/* os-charset */
	BGL_EXPORTED_DEF obj_t BGl_oszd2charsetzd2zz__osz00()
	{
		{	/* Llib/os.scm 308 */
			{	/* Llib/os.scm 310 */
				obj_t BgL_g1039z00_1211;

				BgL_g1039z00_1211 = BGl_getenvz00zz__osz00(BGl_string2712z00zz__osz00);
				if (CBOOL(BgL_g1039z00_1211))
					{	/* Llib/os.scm 310 */
						return BgL_g1039z00_1211;
					}
				else
					{	/* Llib/os.scm 311 */
						obj_t BgL_g1041z00_1214;

						BgL_g1041z00_1214 =
							BGl_getenvz00zz__osz00(BGl_string2713z00zz__osz00);
						if (CBOOL(BgL_g1041z00_1214))
							{	/* Llib/os.scm 311 */
								return BgL_g1041z00_1214;
							}
						else
							{	/* Llib/os.scm 312 */
								obj_t BgL_g1043z00_1217;

								BgL_g1043z00_1217 =
									BGl_getenvz00zz__osz00(BGl_string2714z00zz__osz00);
								if (CBOOL(BgL_g1043z00_1217))
									{	/* Llib/os.scm 312 */
										return BgL_g1043z00_1217;
									}
								else
									{	/* Llib/os.scm 312 */
										return string_to_bstring(OS_CHARSET);
									}
							}
					}
			}
		}

	}



/* &os-charset */
	obj_t BGl_z62oszd2charsetzb0zz__osz00(obj_t BgL_envz00_3921)
	{
		{	/* Llib/os.scm 308 */
			return BGl_oszd2charsetzd2zz__osz00();
		}

	}



/* command-line */
	BGL_EXPORTED_DEF obj_t BGl_commandzd2linezd2zz__osz00()
	{
		{	/* Llib/os.scm 318 */
			return command_line;
		}

	}



/* &command-line */
	obj_t BGl_z62commandzd2linezb0zz__osz00(obj_t BgL_envz00_3922)
	{
		{	/* Llib/os.scm 318 */
			return BGl_commandzd2linezd2zz__osz00();
		}

	}



/* executable-name */
	BGL_EXPORTED_DEF char *BGl_executablezd2namezd2zz__osz00()
	{
		{	/* Llib/os.scm 324 */
			return executable_name;
		}

	}



/* &executable-name */
	obj_t BGl_z62executablezd2namezb0zz__osz00(obj_t BgL_envz00_3923)
	{
		{	/* Llib/os.scm 324 */
			return string_to_bstring(BGl_executablezd2namezd2zz__osz00());
		}

	}



/* signal */
	BGL_EXPORTED_DEF obj_t BGl_signalz00zz__osz00(int BgL_numz00_3,
		obj_t BgL_procz00_4)
	{
		{	/* Llib/os.scm 330 */
			if ((BgL_procz00_4 == BGl_symbol2715z00zz__osz00))
				{	/* Llib/os.scm 332 */
					return bgl_signal(BgL_numz00_3, BTRUE);
				}
			else
				{	/* Llib/os.scm 332 */
					if ((BgL_procz00_4 == BGl_symbol2717z00zz__osz00))
						{	/* Llib/os.scm 334 */
							return bgl_signal(BgL_numz00_3, BFALSE);
						}
					else
						{	/* Llib/os.scm 336 */
							bool_t BgL_test3095z00_4252;

							{	/* Llib/os.scm 336 */
								int BgL_arg1250z00_1226;

								{	/* Llib/os.scm 336 */
									int BgL_res2124z00_2385;

									BgL_res2124z00_2385 =
										PROCEDURE_ARITY(((obj_t) BgL_procz00_4));
									BgL_arg1250z00_1226 = BgL_res2124z00_2385;
								}
								BgL_test3095z00_4252 =
									((long) (BgL_arg1250z00_1226) == ((long) 1));
							}
							if (BgL_test3095z00_4252)
								{	/* Llib/os.scm 336 */
									if (((long) (BgL_numz00_3) < ((long) 0)))
										{	/* Llib/os.scm 338 */
											return BUNSPEC;
										}
									else
										{	/* Llib/os.scm 338 */
											if (((long) (BgL_numz00_3) > ((long) 31)))
												{	/* Llib/os.scm 340 */
													return
														BGl_errorz00zz__errorz00(BGl_string2719z00zz__osz00,
														BGl_string2720z00zz__osz00, BINT(BgL_numz00_3));
												}
											else
												{	/* Llib/os.scm 340 */
													return bgl_signal(BgL_numz00_3, BgL_procz00_4);
												}
										}
								}
							else
								{	/* Llib/os.scm 336 */
									return
										BGl_errorz00zz__errorz00(BGl_string2719z00zz__osz00,
										BGl_string2721z00zz__osz00, BgL_procz00_4);
								}
						}
				}
		}

	}



/* &signal */
	obj_t BGl_z62signalz62zz__osz00(obj_t BgL_envz00_3924, obj_t BgL_numz00_3925,
		obj_t BgL_procz00_3926)
	{
		{	/* Llib/os.scm 330 */
			{	/* Llib/os.scm 332 */
				int BgL_auxz00_4267;

				{	/* Llib/os.scm 332 */
					obj_t BgL_tmpz00_4268;

					if (INTEGERP(BgL_numz00_3925))
						{	/* Llib/os.scm 332 */
							BgL_tmpz00_4268 = BgL_numz00_3925;
						}
					else
						{
							obj_t BgL_auxz00_4271;

							BgL_auxz00_4271 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 13150)), BGl_string2723z00zz__osz00,
								BGl_string2724z00zz__osz00, BgL_numz00_3925);
							FAILURE(BgL_auxz00_4271, BFALSE, BFALSE);
						}
					BgL_auxz00_4267 = CINT(BgL_tmpz00_4268);
				}
				return BGl_signalz00zz__osz00(BgL_auxz00_4267, BgL_procz00_3926);
			}
		}

	}



/* get-signal-handler */
	BGL_EXPORTED_DEF obj_t BGl_getzd2signalzd2handlerz00zz__osz00(int
		BgL_numz00_5)
	{
		{	/* Llib/os.scm 348 */
			{	/* Llib/os.scm 349 */
				obj_t BgL_vz00_2392;

				BgL_vz00_2392 = bgl_get_signal_handler(BgL_numz00_5);
				if ((BgL_vz00_2392 == BTRUE))
					{	/* Llib/os.scm 351 */
						return BGl_symbol2715z00zz__osz00;
					}
				else
					{	/* Llib/os.scm 351 */
						if ((BgL_vz00_2392 == BFALSE))
							{	/* Llib/os.scm 352 */
								return BGl_symbol2717z00zz__osz00;
							}
						else
							{	/* Llib/os.scm 352 */
								return BgL_vz00_2392;
							}
					}
			}
		}

	}



/* &get-signal-handler */
	obj_t BGl_z62getzd2signalzd2handlerz62zz__osz00(obj_t BgL_envz00_3927,
		obj_t BgL_numz00_3928)
	{
		{	/* Llib/os.scm 348 */
			{	/* Llib/os.scm 349 */
				int BgL_auxz00_4282;

				{	/* Llib/os.scm 349 */
					obj_t BgL_tmpz00_4283;

					if (INTEGERP(BgL_numz00_3928))
						{	/* Llib/os.scm 349 */
							BgL_tmpz00_4283 = BgL_numz00_3928;
						}
					else
						{
							obj_t BgL_auxz00_4286;

							BgL_auxz00_4286 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 13755)), BGl_string2725z00zz__osz00,
								BGl_string2724z00zz__osz00, BgL_numz00_3928);
							FAILURE(BgL_auxz00_4286, BFALSE, BFALSE);
						}
					BgL_auxz00_4282 = CINT(BgL_tmpz00_4283);
				}
				return BGl_getzd2signalzd2handlerz00zz__osz00(BgL_auxz00_4282);
			}
		}

	}



/* _getenv */
	obj_t BGl__getenvz00zz__osz00(obj_t BgL_env1133z00_8, obj_t BgL_opt1132z00_7)
	{
		{	/* Llib/os.scm 358 */
			{	/* Llib/os.scm 358 */

				switch (VECTOR_LENGTH(BgL_opt1132z00_7))
					{
					case ((long) 0):

						{	/* Llib/os.scm 358 */

							return BGl_getenvz00zz__osz00(BFALSE);
						}
						break;
					case ((long) 1):

						{	/* Llib/os.scm 358 */
							obj_t BgL_namez00_1234;

							BgL_namez00_1234 = VECTOR_REF(BgL_opt1132z00_7, ((long) 0));
							{	/* Llib/os.scm 358 */

								return BGl_getenvz00zz__osz00(BgL_namez00_1234);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* getenv */
	BGL_EXPORTED_DEF obj_t BGl_getenvz00zz__osz00(obj_t BgL_namez00_6)
	{
		{	/* Llib/os.scm 358 */
			if (STRINGP(BgL_namez00_6))
				{	/* Llib/os.scm 359 */
					{	/* Llib/os.scm 361 */
						bool_t BgL_test3103z00_4299;

						{	/* Llib/os.scm 361 */
							bool_t BgL_test3104z00_4300;

							{	/* Llib/os.scm 361 */
								bool_t BgL_res2133z00_2412;

								{	/* Llib/os.scm 361 */
									obj_t BgL_string1z00_2397;

									BgL_string1z00_2397 = string_to_bstring(OS_CLASS);
									{	/* Llib/os.scm 361 */
										long BgL_l1z00_2399;

										BgL_l1z00_2399 = STRING_LENGTH(BgL_string1z00_2397);
										if ((BgL_l1z00_2399 == ((long) 5)))
											{	/* Llib/os.scm 361 */
												int BgL_arg1861z00_2402;

												{	/* Llib/os.scm 361 */
													char *BgL_auxz00_4307;
													char *BgL_tmpz00_4305;

													BgL_auxz00_4307 =
														BSTRING_TO_STRING(BGl_string2726z00zz__osz00);
													BgL_tmpz00_4305 =
														BSTRING_TO_STRING(BgL_string1z00_2397);
													BgL_arg1861z00_2402 =
														memcmp(BgL_tmpz00_4305, BgL_auxz00_4307,
														BgL_l1z00_2399);
												}
												BgL_res2133z00_2412 =
													((long) (BgL_arg1861z00_2402) == ((long) 0));
											}
										else
											{	/* Llib/os.scm 361 */
												BgL_res2133z00_2412 = ((bool_t) 0);
											}
									}
								}
								BgL_test3104z00_4300 = BgL_res2133z00_2412;
							}
							if (BgL_test3104z00_4300)
								{	/* Llib/os.scm 361 */
									bool_t BgL_res2138z00_2428;

									{	/* Llib/os.scm 361 */
										obj_t BgL_string1z00_2413;

										BgL_string1z00_2413 = BgL_namez00_6;
										{	/* Llib/os.scm 361 */
											long BgL_l1z00_2415;

											BgL_l1z00_2415 = STRING_LENGTH(BgL_string1z00_2413);
											if ((BgL_l1z00_2415 == ((long) 4)))
												{	/* Llib/os.scm 361 */
													int BgL_arg1861z00_2418;

													{	/* Llib/os.scm 361 */
														char *BgL_auxz00_4317;
														char *BgL_tmpz00_4315;

														BgL_auxz00_4317 =
															BSTRING_TO_STRING(BGl_string2727z00zz__osz00);
														BgL_tmpz00_4315 =
															BSTRING_TO_STRING(BgL_string1z00_2413);
														BgL_arg1861z00_2418 =
															memcmp(BgL_tmpz00_4315, BgL_auxz00_4317,
															BgL_l1z00_2415);
													}
													BgL_res2138z00_2428 =
														((long) (BgL_arg1861z00_2418) == ((long) 0));
												}
											else
												{	/* Llib/os.scm 361 */
													BgL_res2138z00_2428 = ((bool_t) 0);
												}
										}
									}
									BgL_test3103z00_4299 = BgL_res2138z00_2428;
								}
							else
								{	/* Llib/os.scm 361 */
									BgL_test3103z00_4299 = ((bool_t) 0);
								}
						}
						if (BgL_test3103z00_4299)
							{	/* Llib/os.scm 361 */
								BgL_namez00_6 = BGl_string2728z00zz__osz00;
							}
						else
							{	/* Llib/os.scm 361 */
								BFALSE;
							}
					}
					{	/* Llib/os.scm 363 */
						bool_t BgL_test3107z00_4322;

						{	/* Llib/os.scm 363 */
							char *BgL_tmpz00_4323;

							BgL_tmpz00_4323 = BSTRING_TO_STRING(BgL_namez00_6);
							BgL_test3107z00_4322 = (long) getenv(BgL_tmpz00_4323);
						}
						if (BgL_test3107z00_4322)
							{	/* Llib/os.scm 364 */
								char *BgL_resultz00_1243;

								{	/* Llib/os.scm 364 */
									char *BgL_tmpz00_4326;

									BgL_tmpz00_4326 = BSTRING_TO_STRING(BgL_namez00_6);
									BgL_resultz00_1243 = (char *) getenv(BgL_tmpz00_4326);
								}
								{	/* Llib/os.scm 365 */
									bool_t BgL_test3108z00_4329;

									{	/* Llib/os.scm 365 */
										bool_t BgL_res2139z00_2430;

										BgL_res2139z00_2430 = STRING_PTR_NULL(BgL_resultz00_1243);
										BgL_test3108z00_4329 = BgL_res2139z00_2430;
									}
									if (BgL_test3108z00_4329)
										{	/* Llib/os.scm 365 */
											return BFALSE;
										}
									else
										{	/* Llib/os.scm 365 */
											return string_to_bstring(BgL_resultz00_1243);
										}
								}
							}
						else
							{	/* Llib/os.scm 363 */
								return BFALSE;
							}
					}
				}
			else
				{	/* Llib/os.scm 359 */
					return bgl_getenv_all();
				}
		}

	}



/* putenv */
	BGL_EXPORTED_DEF obj_t BGl_putenvz00zz__osz00(char *BgL_stringz00_9,
		char *BgL_valz00_10)
	{
		{	/* Llib/os.scm 374 */
			{	/* Llib/os.scm 375 */
				bool_t BgL_test3109z00_4333;

				{	/* Llib/os.scm 375 */
					bool_t BgL_test3110z00_4334;

					{	/* Llib/os.scm 375 */
						bool_t BgL_res2144z00_2450;

						{	/* Llib/os.scm 375 */
							obj_t BgL_string1z00_2435;

							BgL_string1z00_2435 = string_to_bstring(OS_CLASS);
							{	/* Llib/os.scm 375 */
								long BgL_l1z00_2437;

								BgL_l1z00_2437 = STRING_LENGTH(BgL_string1z00_2435);
								if ((BgL_l1z00_2437 == ((long) 5)))
									{	/* Llib/os.scm 375 */
										int BgL_arg1861z00_2440;

										{	/* Llib/os.scm 375 */
											char *BgL_auxz00_4341;
											char *BgL_tmpz00_4339;

											BgL_auxz00_4341 =
												BSTRING_TO_STRING(BGl_string2726z00zz__osz00);
											BgL_tmpz00_4339 = BSTRING_TO_STRING(BgL_string1z00_2435);
											BgL_arg1861z00_2440 =
												memcmp(BgL_tmpz00_4339, BgL_auxz00_4341,
												BgL_l1z00_2437);
										}
										BgL_res2144z00_2450 =
											((long) (BgL_arg1861z00_2440) == ((long) 0));
									}
								else
									{	/* Llib/os.scm 375 */
										BgL_res2144z00_2450 = ((bool_t) 0);
									}
							}
						}
						BgL_test3110z00_4334 = BgL_res2144z00_2450;
					}
					if (BgL_test3110z00_4334)
						{	/* Llib/os.scm 376 */
							bool_t BgL_res2149z00_2466;

							{	/* Llib/os.scm 376 */
								obj_t BgL_string1z00_2451;

								BgL_string1z00_2451 = string_to_bstring(BgL_stringz00_9);
								{	/* Llib/os.scm 376 */
									long BgL_l1z00_2453;

									BgL_l1z00_2453 = STRING_LENGTH(BgL_string1z00_2451);
									if ((BgL_l1z00_2453 == ((long) 4)))
										{	/* Llib/os.scm 376 */
											int BgL_arg1861z00_2456;

											{	/* Llib/os.scm 376 */
												char *BgL_auxz00_4352;
												char *BgL_tmpz00_4350;

												BgL_auxz00_4352 =
													BSTRING_TO_STRING(BGl_string2727z00zz__osz00);
												BgL_tmpz00_4350 =
													BSTRING_TO_STRING(BgL_string1z00_2451);
												BgL_arg1861z00_2456 =
													memcmp(BgL_tmpz00_4350, BgL_auxz00_4352,
													BgL_l1z00_2453);
											}
											BgL_res2149z00_2466 =
												((long) (BgL_arg1861z00_2456) == ((long) 0));
										}
									else
										{	/* Llib/os.scm 376 */
											BgL_res2149z00_2466 = ((bool_t) 0);
										}
								}
							}
							BgL_test3109z00_4333 = BgL_res2149z00_2466;
						}
					else
						{	/* Llib/os.scm 375 */
							BgL_test3109z00_4333 = ((bool_t) 0);
						}
				}
				if (BgL_test3109z00_4333)
					{	/* Llib/os.scm 375 */
						BgL_stringz00_9 = BSTRING_TO_STRING(BGl_string2728z00zz__osz00);
					}
				else
					{	/* Llib/os.scm 375 */
						BFALSE;
					}
			}
			{	/* Llib/os.scm 378 */
				int BgL_arg1274z00_2434;

				BgL_arg1274z00_2434 = bgl_setenv(BgL_stringz00_9, BgL_valz00_10);
				return BBOOL(((long) (BgL_arg1274z00_2434) == ((long) 0)));
		}}

	}



/* &putenv */
	obj_t BGl_z62putenvz62zz__osz00(obj_t BgL_envz00_3929,
		obj_t BgL_stringz00_3930, obj_t BgL_valz00_3931)
	{
		{	/* Llib/os.scm 374 */
			{	/* Llib/os.scm 377 */
				char *BgL_auxz00_4371;
				char *BgL_auxz00_4362;

				{	/* Llib/os.scm 377 */
					obj_t BgL_tmpz00_4372;

					if (STRINGP(BgL_valz00_3931))
						{	/* Llib/os.scm 377 */
							BgL_tmpz00_4372 = BgL_valz00_3931;
						}
					else
						{
							obj_t BgL_auxz00_4375;

							BgL_auxz00_4375 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 14778)), BGl_string2729z00zz__osz00,
								BGl_string2730z00zz__osz00, BgL_valz00_3931);
							FAILURE(BgL_auxz00_4375, BFALSE, BFALSE);
						}
					BgL_auxz00_4371 = BSTRING_TO_STRING(BgL_tmpz00_4372);
				}
				{	/* Llib/os.scm 377 */
					obj_t BgL_tmpz00_4363;

					if (STRINGP(BgL_stringz00_3930))
						{	/* Llib/os.scm 377 */
							BgL_tmpz00_4363 = BgL_stringz00_3930;
						}
					else
						{
							obj_t BgL_auxz00_4366;

							BgL_auxz00_4366 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 14778)), BGl_string2729z00zz__osz00,
								BGl_string2730z00zz__osz00, BgL_stringz00_3930);
							FAILURE(BgL_auxz00_4366, BFALSE, BFALSE);
						}
					BgL_auxz00_4362 = BSTRING_TO_STRING(BgL_tmpz00_4363);
				}
				return BGl_putenvz00zz__osz00(BgL_auxz00_4362, BgL_auxz00_4371);
			}
		}

	}



/* system */
	BGL_EXPORTED_DEF obj_t BGl_systemz00zz__osz00(obj_t BgL_stringsz00_11)
	{
		{	/* Llib/os.scm 383 */
			if (NULLP(BgL_stringsz00_11))
				{	/* Llib/os.scm 385 */
					return BFALSE;
				}
			else
				{	/* Llib/os.scm 385 */
					if (NULLP(CDR(((obj_t) BgL_stringsz00_11))))
						{	/* Llib/os.scm 388 */
							obj_t BgL_arg1280z00_1255;

							BgL_arg1280z00_1255 = CAR(((obj_t) BgL_stringsz00_11));
							{	/* Llib/os.scm 388 */
								int BgL_tmpz00_4389;

								{	/* Llib/os.scm 388 */
									char *BgL_tmpz00_4390;

									BgL_tmpz00_4390 = BSTRING_TO_STRING(BgL_arg1280z00_1255);
									BgL_tmpz00_4389 = system(BgL_tmpz00_4390);
								}
								return BINT(BgL_tmpz00_4389);
							}
						}
					else
						{	/* Llib/os.scm 390 */
							obj_t BgL_arg1281z00_1256;

							BgL_arg1281z00_1256 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_stringsz00_11);
							{	/* Llib/os.scm 390 */
								int BgL_tmpz00_4395;

								{	/* Llib/os.scm 390 */
									char *BgL_tmpz00_4396;

									BgL_tmpz00_4396 = BSTRING_TO_STRING(BgL_arg1281z00_1256);
									BgL_tmpz00_4395 = system(BgL_tmpz00_4396);
								}
								return BINT(BgL_tmpz00_4395);
							}
						}
				}
		}

	}



/* &system */
	obj_t BGl_z62systemz62zz__osz00(obj_t BgL_envz00_3932,
		obj_t BgL_stringsz00_3933)
	{
		{	/* Llib/os.scm 383 */
			return BGl_systemz00zz__osz00(BgL_stringsz00_3933);
		}

	}



/* system->string */
	BGL_EXPORTED_DEF obj_t BGl_systemzd2ze3stringz31zz__osz00(obj_t
		BgL_stringsz00_12)
	{
		{	/* Llib/os.scm 395 */
			{	/* Llib/os.scm 396 */
				obj_t BgL_pz00_1259;

				{	/* Llib/os.scm 396 */
					obj_t BgL_arg1286z00_1265;

					{	/* Llib/os.scm 396 */
						obj_t BgL_runner1289z00_1270;

						{	/* Llib/os.scm 396 */
							obj_t BgL_list1288z00_1269;

							BgL_list1288z00_1269 = MAKE_YOUNG_PAIR(BgL_stringsz00_12, BNIL);
							BgL_runner1289z00_1270 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
								(BGl_string2731z00zz__osz00, BgL_list1288z00_1269);
						}
						BgL_arg1286z00_1265 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00
							(BgL_runner1289z00_1270);
					}
					{	/* Ieee/port.scm 440 */

						BgL_pz00_1259 =
							BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
							(BgL_arg1286z00_1265, BTRUE, BINT(((long) 5000000)));
				}}
				{	/* Llib/os.scm 397 */
					obj_t BgL_exitd1046z00_1260;

					BgL_exitd1046z00_1260 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Llib/os.scm 399 */
						obj_t BgL_zc3z04anonymousza31285ze3z87_3934;

						BgL_zc3z04anonymousza31285ze3z87_3934 =
							MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31285ze3ze5zz__osz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31285ze3z87_3934,
							(int) (((long) 0)), BgL_pz00_1259);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1046z00_1260,
							BgL_zc3z04anonymousza31285ze3z87_3934);
						{	/* Llib/os.scm 398 */
							obj_t BgL_tmp1048z00_1262;

							BgL_tmp1048z00_1262 =
								BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_pz00_1259);
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1046z00_1260);
							bgl_close_input_port(((obj_t) BgL_pz00_1259));
							return BgL_tmp1048z00_1262;
						}
					}
				}
			}
		}

	}



/* &system->string */
	obj_t BGl_z62systemzd2ze3stringz53zz__osz00(obj_t BgL_envz00_3935,
		obj_t BgL_stringsz00_3936)
	{
		{	/* Llib/os.scm 395 */
			return BGl_systemzd2ze3stringz31zz__osz00(BgL_stringsz00_3936);
		}

	}



/* &<@anonymous:1285> */
	obj_t BGl_z62zc3z04anonymousza31285ze3ze5zz__osz00(obj_t BgL_envz00_3937)
	{
		{	/* Llib/os.scm 397 */
			{	/* Llib/os.scm 399 */
				obj_t BgL_pz00_3938;

				BgL_pz00_3938 = PROCEDURE_REF(BgL_envz00_3937, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_pz00_3938));
			}
		}

	}



/* date */
	BGL_EXPORTED_DEF char *BGl_datez00zz__osz00()
	{
		{	/* Llib/os.scm 404 */
			{	/* Llib/os.scm 405 */
				char *BgL_dtz00_1271;

				BgL_dtz00_1271 = c_date();
				{	/* Llib/os.scm 405 */
					long BgL_lenz00_1272;

					BgL_lenz00_1272 = STRING_LENGTH(string_to_bstring(BgL_dtz00_1271));
					{	/* Llib/os.scm 406 */

						if (
							(STRING_REF(string_to_bstring(BgL_dtz00_1271),
									(BgL_lenz00_1272 - ((long) 1))) == ((unsigned char) 10)))
							{	/* Llib/os.scm 408 */
								long BgL_arg1295z00_1276;

								BgL_arg1295z00_1276 = (BgL_lenz00_1272 - ((long) 1));
								return
									BSTRING_TO_STRING(c_substring(string_to_bstring
										(BgL_dtz00_1271), ((long) 0), BgL_arg1295z00_1276));
							}
						else
							{	/* Llib/os.scm 407 */
								return BgL_dtz00_1271;
							}
					}
				}
			}
		}

	}



/* &date */
	obj_t BGl_z62datez62zz__osz00(obj_t BgL_envz00_3939)
	{
		{	/* Llib/os.scm 404 */
			return string_to_bstring(BGl_datez00zz__osz00());
		}

	}



/* chdir */
	BGL_EXPORTED_DEF bool_t BGl_chdirz00zz__osz00(char *BgL_dirnamez00_13)
	{
		{	/* Llib/os.scm 414 */
			if (chdir(BgL_dirnamez00_13))
				{	/* Llib/os.scm 415 */
					return ((bool_t) 0);
				}
			else
				{	/* Llib/os.scm 415 */
					return ((bool_t) 1);
				}
		}

	}



/* &chdir */
	obj_t BGl_z62chdirz62zz__osz00(obj_t BgL_envz00_3940,
		obj_t BgL_dirnamez00_3941)
	{
		{	/* Llib/os.scm 414 */
			{	/* Llib/os.scm 415 */
				bool_t BgL_tmpz00_4438;

				{	/* Llib/os.scm 415 */
					char *BgL_auxz00_4439;

					{	/* Llib/os.scm 415 */
						obj_t BgL_tmpz00_4440;

						if (STRINGP(BgL_dirnamez00_3941))
							{	/* Llib/os.scm 415 */
								BgL_tmpz00_4440 = BgL_dirnamez00_3941;
							}
						else
							{
								obj_t BgL_auxz00_4443;

								BgL_auxz00_4443 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
									BINT(((long) 16272)), BGl_string2732z00zz__osz00,
									BGl_string2730z00zz__osz00, BgL_dirnamez00_3941);
								FAILURE(BgL_auxz00_4443, BFALSE, BFALSE);
							}
						BgL_auxz00_4439 = BSTRING_TO_STRING(BgL_tmpz00_4440);
					}
					BgL_tmpz00_4438 = BGl_chdirz00zz__osz00(BgL_auxz00_4439);
				}
				return BBOOL(BgL_tmpz00_4438);
			}
		}

	}



/* pwd */
	BGL_EXPORTED_DEF obj_t BGl_pwdz00zz__osz00()
	{
		{	/* Llib/os.scm 420 */
			{	/* Llib/os.scm 421 */
				obj_t BgL_stringz00_1280;

				{	/* Ieee/string.scm 168 */

					BgL_stringz00_1280 =
						make_string(((long) 1024), ((unsigned char) ' '));
				}
				{	/* Llib/os.scm 422 */
					char *BgL_tmpz00_4451;

					{	/* Llib/os.scm 422 */
						int BgL_auxz00_4454;
						char *BgL_tmpz00_4452;

						BgL_auxz00_4454 = (int) (((long) 1024));
						BgL_tmpz00_4452 = BSTRING_TO_STRING(BgL_stringz00_1280);
						BgL_tmpz00_4451 =
							(char *) (long) getcwd(BgL_tmpz00_4452, BgL_auxz00_4454);
					}
					return string_to_bstring(BgL_tmpz00_4451);
				}
			}
		}

	}



/* &pwd */
	obj_t BGl_z62pwdz62zz__osz00(obj_t BgL_envz00_3942)
	{
		{	/* Llib/os.scm 420 */
			return BGl_pwdz00zz__osz00();
		}

	}



/* basename */
	BGL_EXPORTED_DEF obj_t BGl_basenamez00zz__osz00(obj_t BgL_stringz00_14)
	{
		{	/* Llib/os.scm 427 */
			{	/* Llib/os.scm 428 */
				bool_t BgL_test3120z00_4459;

				{	/* Llib/os.scm 428 */
					bool_t BgL_res2164z00_2510;

					{	/* Llib/os.scm 428 */
						obj_t BgL_string1z00_2495;

						BgL_string1z00_2495 = string_to_bstring(OS_CLASS);
						{	/* Llib/os.scm 428 */
							long BgL_l1z00_2497;

							BgL_l1z00_2497 = STRING_LENGTH(BgL_string1z00_2495);
							if ((BgL_l1z00_2497 == ((long) 5)))
								{	/* Llib/os.scm 428 */
									int BgL_arg1861z00_2500;

									{	/* Llib/os.scm 428 */
										char *BgL_auxz00_4466;
										char *BgL_tmpz00_4464;

										BgL_auxz00_4466 =
											BSTRING_TO_STRING(BGl_string2733z00zz__osz00);
										BgL_tmpz00_4464 = BSTRING_TO_STRING(BgL_string1z00_2495);
										BgL_arg1861z00_2500 =
											memcmp(BgL_tmpz00_4464, BgL_auxz00_4466, BgL_l1z00_2497);
									}
									BgL_res2164z00_2510 =
										((long) (BgL_arg1861z00_2500) == ((long) 0));
								}
							else
								{	/* Llib/os.scm 428 */
									BgL_res2164z00_2510 = ((bool_t) 0);
								}
						}
					}
					BgL_test3120z00_4459 = BgL_res2164z00_2510;
				}
				if (BgL_test3120z00_4459)
					{	/* Llib/os.scm 428 */
						return BGl_mingwzd2basenamezd2zz__osz00(BgL_stringz00_14);
					}
				else
					{	/* Llib/os.scm 428 */
						return BGl_defaultzd2basenamezd2zz__osz00(BgL_stringz00_14);
					}
			}
		}

	}



/* &basename */
	obj_t BGl_z62basenamez62zz__osz00(obj_t BgL_envz00_3943,
		obj_t BgL_stringz00_3944)
	{
		{	/* Llib/os.scm 427 */
			{	/* Llib/os.scm 428 */
				obj_t BgL_auxz00_4473;

				if (STRINGP(BgL_stringz00_3944))
					{	/* Llib/os.scm 428 */
						BgL_auxz00_4473 = BgL_stringz00_3944;
					}
				else
					{
						obj_t BgL_auxz00_4476;

						BgL_auxz00_4476 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 16863)), BGl_string2734z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_stringz00_3944);
						FAILURE(BgL_auxz00_4476, BFALSE, BFALSE);
					}
				return BGl_basenamez00zz__osz00(BgL_auxz00_4473);
			}
		}

	}



/* mingw-basename */
	obj_t BGl_mingwzd2basenamezd2zz__osz00(obj_t BgL_stringz00_15)
	{
		{	/* Llib/os.scm 435 */
			{	/* Llib/os.scm 436 */
				long BgL_nz00_1286;
				bool_t BgL_stopz00_1287;

				BgL_nz00_1286 = STRING_LENGTH(BgL_stringz00_15);
				BgL_stopz00_1287 = ((bool_t) 0);
				{
					long BgL_iz00_1290;

					BgL_iz00_1290 = (BgL_nz00_1286 - ((long) 1));
				BgL_zc3z04anonymousza31303ze3z87_1291:
					if ((BBOOL(BgL_stopz00_1287) == BTRUE))
						{	/* Llib/os.scm 438 */
							return
								c_substring(BgL_stringz00_15,
								(BgL_iz00_1290 + ((long) 2)), BgL_nz00_1286);
						}
					else
						{	/* Llib/os.scm 438 */
							if ((BgL_iz00_1290 < ((long) 0)))
								{	/* Llib/os.scm 441 */
									BgL_stopz00_1287 = ((bool_t) 1);
								}
							else
								{	/* Llib/os.scm 443 */
									bool_t BgL__ortest_1050z00_1295;

									BgL__ortest_1050z00_1295 =
										(STRING_REF(BgL_stringz00_15,
											BgL_iz00_1290) == ((unsigned char) '\\'));
									if (BgL__ortest_1050z00_1295)
										{	/* Llib/os.scm 443 */
											BgL_stopz00_1287 = BgL__ortest_1050z00_1295;
										}
									else
										{	/* Llib/os.scm 443 */
											BgL_stopz00_1287 =
												(STRING_REF(BgL_stringz00_15,
													BgL_iz00_1290) == ((unsigned char) '/'));
								}}
							{
								long BgL_iz00_4494;

								BgL_iz00_4494 = (BgL_iz00_1290 - ((long) 1));
								BgL_iz00_1290 = BgL_iz00_4494;
								goto BgL_zc3z04anonymousza31303ze3z87_1291;
							}
						}
				}
			}
		}

	}



/* default-basename */
	obj_t BGl_defaultzd2basenamezd2zz__osz00(obj_t BgL_stringz00_16)
	{
		{	/* Llib/os.scm 449 */
			{	/* Llib/os.scm 450 */
				long BgL_lenz00_1300;

				BgL_lenz00_1300 = (STRING_LENGTH(BgL_stringz00_16) - ((long) 1));
				{	/* Llib/os.scm 450 */
					long BgL_startz00_1301;

					{	/* Llib/os.scm 451 */
						bool_t BgL_test3126z00_4499;

						if ((BgL_lenz00_1300 > ((long) 0)))
							{	/* Llib/os.scm 451 */
								BgL_test3126z00_4499 =
									(STRING_REF(BgL_stringz00_16, BgL_lenz00_1300) ==
									(unsigned char) (FILE_SEPARATOR));
							}
						else
							{	/* Llib/os.scm 451 */
								BgL_test3126z00_4499 = ((bool_t) 0);
							}
						if (BgL_test3126z00_4499)
							{	/* Llib/os.scm 451 */
								BgL_startz00_1301 = (BgL_lenz00_1300 - ((long) 1));
							}
						else
							{	/* Llib/os.scm 451 */
								BgL_startz00_1301 = BgL_lenz00_1300;
							}
					}
					{	/* Llib/os.scm 451 */

						{
							long BgL_indexz00_1303;

							BgL_indexz00_1303 = BgL_startz00_1301;
						BgL_zc3z04anonymousza31311ze3z87_1304:
							if ((BgL_indexz00_1303 == ((long) -1)))
								{	/* Llib/os.scm 458 */
									return BgL_stringz00_16;
								}
							else
								{	/* Llib/os.scm 458 */
									if (
										(STRING_REF(BgL_stringz00_16, BgL_indexz00_1303) ==
											(unsigned char) (FILE_SEPARATOR)))
										{	/* Llib/os.scm 460 */
											return
												c_substring(BgL_stringz00_16,
												(BgL_indexz00_1303 + ((long) 1)),
												(BgL_startz00_1301 + ((long) 1)));
										}
									else
										{
											long BgL_indexz00_4515;

											BgL_indexz00_4515 = (BgL_indexz00_1303 - ((long) 1));
											BgL_indexz00_1303 = BgL_indexz00_4515;
											goto BgL_zc3z04anonymousza31311ze3z87_1304;
										}
								}
						}
					}
				}
			}
		}

	}



/* prefix */
	BGL_EXPORTED_DEF obj_t BGl_prefixz00zz__osz00(obj_t BgL_stringz00_17)
	{
		{	/* Llib/os.scm 468 */
			{	/* Llib/os.scm 469 */
				long BgL_lenz00_1319;

				BgL_lenz00_1319 = (STRING_LENGTH(BgL_stringz00_17) - ((long) 1));
				{
					long BgL_ez00_1321;
					long BgL_sz00_1322;

					BgL_ez00_1321 = BgL_lenz00_1319;
					BgL_sz00_1322 = BgL_lenz00_1319;
				BgL_zc3z04anonymousza31326ze3z87_1323:
					if ((BgL_sz00_1322 <= ((long) 0)))
						{	/* Llib/os.scm 473 */
							return
								c_substring(BgL_stringz00_17, ((long) 0),
								(((long) 1) + BgL_ez00_1321));
						}
					else
						{	/* Llib/os.scm 476 */
							bool_t BgL_test3131z00_4523;

							if (
								(BCHAR(STRING_REF(BgL_stringz00_17, BgL_sz00_1322)) ==
									BCHAR(((unsigned char) '.'))))
								{	/* Llib/os.scm 476 */
									BgL_test3131z00_4523 = (BgL_ez00_1321 == BgL_lenz00_1319);
								}
							else
								{	/* Llib/os.scm 476 */
									BgL_test3131z00_4523 = ((bool_t) 0);
								}
							if (BgL_test3131z00_4523)
								{
									long BgL_sz00_4532;
									long BgL_ez00_4530;

									BgL_ez00_4530 = (BgL_sz00_1322 - ((long) 1));
									BgL_sz00_4532 = (BgL_sz00_1322 - ((long) 1));
									BgL_sz00_1322 = BgL_sz00_4532;
									BgL_ez00_1321 = BgL_ez00_4530;
									goto BgL_zc3z04anonymousza31326ze3z87_1323;
								}
							else
								{
									long BgL_sz00_4534;

									BgL_sz00_4534 = (BgL_sz00_1322 - ((long) 1));
									BgL_sz00_1322 = BgL_sz00_4534;
									goto BgL_zc3z04anonymousza31326ze3z87_1323;
								}
						}
				}
			}
		}

	}



/* &prefix */
	obj_t BGl_z62prefixz62zz__osz00(obj_t BgL_envz00_3945,
		obj_t BgL_stringz00_3946)
	{
		{	/* Llib/os.scm 468 */
			{	/* Llib/os.scm 469 */
				obj_t BgL_auxz00_4536;

				if (STRINGP(BgL_stringz00_3946))
					{	/* Llib/os.scm 469 */
						BgL_auxz00_4536 = BgL_stringz00_3946;
					}
				else
					{
						obj_t BgL_auxz00_4539;

						BgL_auxz00_4539 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 18408)), BGl_string2735z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_stringz00_3946);
						FAILURE(BgL_auxz00_4539, BFALSE, BFALSE);
					}
				return BGl_prefixz00zz__osz00(BgL_auxz00_4536);
			}
		}

	}



/* dirname */
	BGL_EXPORTED_DEF obj_t BGl_dirnamez00zz__osz00(obj_t BgL_stringz00_18)
	{
		{	/* Llib/os.scm 484 */
			{	/* Llib/os.scm 485 */
				bool_t BgL_test3134z00_4544;

				{	/* Llib/os.scm 485 */
					bool_t BgL_res2202z00_2609;

					{	/* Llib/os.scm 485 */
						obj_t BgL_string1z00_2594;

						BgL_string1z00_2594 = string_to_bstring(OS_CLASS);
						{	/* Llib/os.scm 485 */
							long BgL_l1z00_2596;

							BgL_l1z00_2596 = STRING_LENGTH(BgL_string1z00_2594);
							if ((BgL_l1z00_2596 == ((long) 5)))
								{	/* Llib/os.scm 485 */
									int BgL_arg1861z00_2599;

									{	/* Llib/os.scm 485 */
										char *BgL_auxz00_4551;
										char *BgL_tmpz00_4549;

										BgL_auxz00_4551 =
											BSTRING_TO_STRING(BGl_string2733z00zz__osz00);
										BgL_tmpz00_4549 = BSTRING_TO_STRING(BgL_string1z00_2594);
										BgL_arg1861z00_2599 =
											memcmp(BgL_tmpz00_4549, BgL_auxz00_4551, BgL_l1z00_2596);
									}
									BgL_res2202z00_2609 =
										((long) (BgL_arg1861z00_2599) == ((long) 0));
								}
							else
								{	/* Llib/os.scm 485 */
									BgL_res2202z00_2609 = ((bool_t) 0);
								}
						}
					}
					BgL_test3134z00_4544 = BgL_res2202z00_2609;
				}
				if (BgL_test3134z00_4544)
					{	/* Llib/os.scm 485 */
						return BGl_mingwzd2dirnamezd2zz__osz00(BgL_stringz00_18);
					}
				else
					{	/* Llib/os.scm 485 */
						return BGl_defaultzd2dirnamezd2zz__osz00(BgL_stringz00_18);
					}
			}
		}

	}



/* &dirname */
	obj_t BGl_z62dirnamez62zz__osz00(obj_t BgL_envz00_3947,
		obj_t BgL_stringz00_3948)
	{
		{	/* Llib/os.scm 484 */
			{	/* Llib/os.scm 485 */
				obj_t BgL_auxz00_4558;

				if (STRINGP(BgL_stringz00_3948))
					{	/* Llib/os.scm 485 */
						BgL_auxz00_4558 = BgL_stringz00_3948;
					}
				else
					{
						obj_t BgL_auxz00_4561;

						BgL_auxz00_4561 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 19030)), BGl_string2736z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_stringz00_3948);
						FAILURE(BgL_auxz00_4561, BFALSE, BFALSE);
					}
				return BGl_dirnamez00zz__osz00(BgL_auxz00_4558);
			}
		}

	}



/* mingw-dirname */
	obj_t BGl_mingwzd2dirnamezd2zz__osz00(obj_t BgL_stringz00_19)
	{
		{	/* Llib/os.scm 492 */
			{	/* Llib/os.scm 493 */
				long BgL_nz00_1340;
				bool_t BgL_stopz00_1341;

				BgL_nz00_1340 = STRING_LENGTH(BgL_stringz00_19);
				BgL_stopz00_1341 = ((bool_t) 0);
				{
					long BgL_iz00_1344;

					BgL_iz00_1344 = (BgL_nz00_1340 - ((long) 1));
				BgL_zc3z04anonymousza31343ze3z87_1345:
					if ((BBOOL(BgL_stopz00_1341) == BTRUE))
						{	/* Llib/os.scm 495 */
							if ((BgL_iz00_1344 < ((long) 0)))
								{	/* Llib/os.scm 497 */
									return BGl_string2710z00zz__osz00;
								}
							else
								{	/* Llib/os.scm 497 */
									return
										c_substring(BgL_stringz00_19, ((long) 0),
										(BgL_iz00_1344 + ((long) 1)));
						}}
					else
						{	/* Llib/os.scm 495 */
							if ((BgL_iz00_1344 < ((long) 0)))
								{	/* Llib/os.scm 500 */
									BgL_stopz00_1341 = ((bool_t) 1);
								}
							else
								{	/* Llib/os.scm 502 */
									bool_t BgL__ortest_1052z00_1350;

									BgL__ortest_1052z00_1350 =
										(STRING_REF(BgL_stringz00_19,
											BgL_iz00_1344) == ((unsigned char) '\\'));
									if (BgL__ortest_1052z00_1350)
										{	/* Llib/os.scm 502 */
											BgL_stopz00_1341 = BgL__ortest_1052z00_1350;
										}
									else
										{	/* Llib/os.scm 502 */
											BgL_stopz00_1341 =
												(STRING_REF(BgL_stringz00_19,
													BgL_iz00_1344) == ((unsigned char) '/'));
								}}
							{
								long BgL_iz00_4581;

								BgL_iz00_4581 = (BgL_iz00_1344 - ((long) 1));
								BgL_iz00_1344 = BgL_iz00_4581;
								goto BgL_zc3z04anonymousza31343ze3z87_1345;
							}
						}
				}
			}
		}

	}



/* default-dirname */
	obj_t BGl_defaultzd2dirnamezd2zz__osz00(obj_t BgL_stringz00_20)
	{
		{	/* Llib/os.scm 508 */
			{	/* Llib/os.scm 509 */
				long BgL_lenz00_1355;

				BgL_lenz00_1355 = (STRING_LENGTH(BgL_stringz00_20) - ((long) 1));
				if ((BgL_lenz00_1355 == ((long) -1)))
					{	/* Llib/os.scm 510 */
						return BGl_string2710z00zz__osz00;
					}
				else
					{
						long BgL_readz00_1358;

						BgL_readz00_1358 = BgL_lenz00_1355;
					BgL_zc3z04anonymousza31353ze3z87_1359:
						if ((BgL_readz00_1358 == ((long) 0)))
							{	/* Llib/os.scm 514 */
								if (
									(STRING_REF(BgL_stringz00_20, BgL_readz00_1358) ==
										(unsigned char) (FILE_SEPARATOR)))
									{	/* Llib/os.scm 515 */
										return
											make_string(((long) 1), (unsigned char) (FILE_SEPARATOR));
									}
								else
									{	/* Llib/os.scm 515 */
										return BGl_string2710z00zz__osz00;
									}
							}
						else
							{	/* Llib/os.scm 514 */
								if (
									(STRING_REF(BgL_stringz00_20, BgL_readz00_1358) ==
										(unsigned char) (FILE_SEPARATOR)))
									{	/* Llib/os.scm 518 */
										return
											c_substring(BgL_stringz00_20, ((long) 0),
											BgL_readz00_1358);
									}
								else
									{
										long BgL_readz00_4601;

										BgL_readz00_4601 = (BgL_readz00_1358 - ((long) 1));
										BgL_readz00_1358 = BgL_readz00_4601;
										goto BgL_zc3z04anonymousza31353ze3z87_1359;
									}
							}
					}
			}
		}

	}



/* suffix */
	BGL_EXPORTED_DEF obj_t BGl_suffixz00zz__osz00(obj_t BgL_stringz00_21)
	{
		{	/* Llib/os.scm 526 */
			{	/* Llib/os.scm 527 */
				long BgL_lenz00_1370;

				BgL_lenz00_1370 = STRING_LENGTH(BgL_stringz00_21);
				{	/* Llib/os.scm 527 */
					long BgL_lenzd21zd2_1371;

					BgL_lenzd21zd2_1371 = (BgL_lenz00_1370 - ((long) 1));
					{	/* Llib/os.scm 528 */

						{
							long BgL_readz00_1373;

							BgL_readz00_1373 = BgL_lenzd21zd2_1371;
						BgL_zc3z04anonymousza31364ze3z87_1374:
							if ((BgL_readz00_1373 < ((long) 0)))
								{	/* Llib/os.scm 531 */
									return BGl_string2737z00zz__osz00;
								}
							else
								{	/* Llib/os.scm 531 */
									if (
										(STRING_REF(BgL_stringz00_21, BgL_readz00_1373) ==
											(unsigned char) (FILE_SEPARATOR)))
										{	/* Llib/os.scm 533 */
											return BGl_string2737z00zz__osz00;
										}
									else
										{	/* Llib/os.scm 533 */
											if (
												(STRING_REF(BgL_stringz00_21,
														BgL_readz00_1373) == ((unsigned char) '.')))
												{	/* Llib/os.scm 535 */
													if ((BgL_readz00_1373 == BgL_lenzd21zd2_1371))
														{	/* Llib/os.scm 537 */
															return BGl_string2737z00zz__osz00;
														}
													else
														{	/* Llib/os.scm 537 */
															return
																c_substring(BgL_stringz00_21,
																(BgL_readz00_1373 + ((long) 1)),
																BgL_lenz00_1370);
												}}
											else
												{
													long BgL_readz00_4618;

													BgL_readz00_4618 = (BgL_readz00_1373 - ((long) 1));
													BgL_readz00_1373 = BgL_readz00_4618;
													goto BgL_zc3z04anonymousza31364ze3z87_1374;
												}
										}
								}
						}
					}
				}
			}
		}

	}



/* &suffix */
	obj_t BGl_z62suffixz62zz__osz00(obj_t BgL_envz00_3949,
		obj_t BgL_stringz00_3950)
	{
		{	/* Llib/os.scm 526 */
			{	/* Llib/os.scm 527 */
				obj_t BgL_auxz00_4620;

				if (STRINGP(BgL_stringz00_3950))
					{	/* Llib/os.scm 527 */
						BgL_auxz00_4620 = BgL_stringz00_3950;
					}
				else
					{
						obj_t BgL_auxz00_4623;

						BgL_auxz00_4623 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 20569)), BGl_string2738z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_stringz00_3950);
						FAILURE(BgL_auxz00_4623, BFALSE, BFALSE);
					}
				return BGl_suffixz00zz__osz00(BgL_auxz00_4620);
			}
		}

	}



/* chmod */
	BGL_EXPORTED_DEF bool_t BGl_chmodz00zz__osz00(obj_t BgL_filez00_22,
		obj_t BgL_modez00_23)
	{
		{	/* Llib/os.scm 547 */
			{
				obj_t BgL_modez00_1387;
				bool_t BgL_readzf3zf3_1388;
				bool_t BgL_writezf3zf3_1389;
				bool_t BgL_execzf3zf3_1390;

				{	/* Llib/os.scm 548 */
					obj_t BgL_tmpz00_4628;

					BgL_modez00_1387 = BgL_modez00_23;
					BgL_readzf3zf3_1388 = ((bool_t) 0);
					BgL_writezf3zf3_1389 = ((bool_t) 0);
					BgL_execzf3zf3_1390 = ((bool_t) 0);
				BgL_zc3z04anonymousza31377ze3z87_1391:
					if (NULLP(BgL_modez00_1387))
						{	/* Llib/os.scm 553 */
							BgL_tmpz00_4628 =
								BBOOL(bgl_chmod(BSTRING_TO_STRING(BgL_filez00_22),
									BgL_readzf3zf3_1388, BgL_writezf3zf3_1389,
									BgL_execzf3zf3_1390));
						}
					else
						{	/* Llib/os.scm 553 */
							if (INTEGERP(CAR(((obj_t) BgL_modez00_1387))))
								{	/* Llib/os.scm 556 */
									obj_t BgL_arg1381z00_1395;

									BgL_arg1381z00_1395 = CAR(((obj_t) BgL_modez00_1387));
									{	/* Llib/os.scm 556 */
										bool_t BgL_tmpz00_4640;

										{	/* Llib/os.scm 556 */
											int BgL_auxz00_4643;
											char *BgL_tmpz00_4641;

											BgL_auxz00_4643 = CINT(BgL_arg1381z00_1395);
											BgL_tmpz00_4641 = BSTRING_TO_STRING(BgL_filez00_22);
											BgL_tmpz00_4640 = chmod(BgL_tmpz00_4641, BgL_auxz00_4643);
										}
										BgL_tmpz00_4628 = BBOOL(BgL_tmpz00_4640);
								}}
							else
								{	/* Llib/os.scm 555 */
									if (
										(CAR(
												((obj_t) BgL_modez00_1387)) ==
											BGl_symbol2739z00zz__osz00))
										{	/* Llib/os.scm 558 */
											obj_t BgL_arg1384z00_1398;

											BgL_arg1384z00_1398 = CDR(((obj_t) BgL_modez00_1387));
											{
												bool_t BgL_readzf3zf3_4654;
												obj_t BgL_modez00_4653;

												BgL_modez00_4653 = BgL_arg1384z00_1398;
												BgL_readzf3zf3_4654 = ((bool_t) 1);
												BgL_readzf3zf3_1388 = BgL_readzf3zf3_4654;
												BgL_modez00_1387 = BgL_modez00_4653;
												goto BgL_zc3z04anonymousza31377ze3z87_1391;
											}
										}
									else
										{	/* Llib/os.scm 557 */
											if (
												(CAR(
														((obj_t) BgL_modez00_1387)) ==
													BGl_symbol2741z00zz__osz00))
												{	/* Llib/os.scm 563 */
													obj_t BgL_arg1387z00_1401;

													BgL_arg1387z00_1401 = CDR(((obj_t) BgL_modez00_1387));
													{
														bool_t BgL_writezf3zf3_4662;
														obj_t BgL_modez00_4661;

														BgL_modez00_4661 = BgL_arg1387z00_1401;
														BgL_writezf3zf3_4662 = ((bool_t) 1);
														BgL_writezf3zf3_1389 = BgL_writezf3zf3_4662;
														BgL_modez00_1387 = BgL_modez00_4661;
														goto BgL_zc3z04anonymousza31377ze3z87_1391;
													}
												}
											else
												{	/* Llib/os.scm 562 */
													if (
														(CAR(
																((obj_t) BgL_modez00_1387)) ==
															BGl_symbol2743z00zz__osz00))
														{	/* Llib/os.scm 568 */
															obj_t BgL_arg1390z00_1404;

															BgL_arg1390z00_1404 =
																CDR(((obj_t) BgL_modez00_1387));
															{
																bool_t BgL_execzf3zf3_4670;
																obj_t BgL_modez00_4669;

																BgL_modez00_4669 = BgL_arg1390z00_1404;
																BgL_execzf3zf3_4670 = ((bool_t) 1);
																BgL_execzf3zf3_1390 = BgL_execzf3zf3_4670;
																BgL_modez00_1387 = BgL_modez00_4669;
																goto BgL_zc3z04anonymousza31377ze3z87_1391;
															}
														}
													else
														{	/* Llib/os.scm 567 */
															BgL_tmpz00_4628 =
																BGl_errorz00zz__errorz00
																(BGl_string2745z00zz__osz00,
																BGl_string2746z00zz__osz00, BgL_modez00_1387);
														}
												}
										}
								}
						}
					return CBOOL(BgL_tmpz00_4628);
				}
			}
		}

	}



/* &chmod */
	obj_t BGl_z62chmodz62zz__osz00(obj_t BgL_envz00_3951, obj_t BgL_filez00_3952,
		obj_t BgL_modez00_3953)
	{
		{	/* Llib/os.scm 547 */
			{	/* Llib/os.scm 553 */
				bool_t BgL_tmpz00_4673;

				{	/* Llib/os.scm 553 */
					obj_t BgL_auxz00_4674;

					if (STRINGP(BgL_filez00_3952))
						{	/* Llib/os.scm 553 */
							BgL_auxz00_4674 = BgL_filez00_3952;
						}
					else
						{
							obj_t BgL_auxz00_4677;

							BgL_auxz00_4677 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 21420)), BGl_string2747z00zz__osz00,
								BGl_string2730z00zz__osz00, BgL_filez00_3952);
							FAILURE(BgL_auxz00_4677, BFALSE, BFALSE);
						}
					BgL_tmpz00_4673 =
						BGl_chmodz00zz__osz00(BgL_auxz00_4674, BgL_modez00_3953);
				}
				return BBOOL(BgL_tmpz00_4673);
			}
		}

	}



/* make-file-name */
	BGL_EXPORTED_DEF obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t
		BgL_directoryz00_24, obj_t BgL_filez00_25)
	{
		{	/* Llib/os.scm 581 */
			{
				long BgL_ldirz00_1429;

				{	/* Llib/os.scm 589 */
					long BgL_ldirz00_1411;

					BgL_ldirz00_1411 = STRING_LENGTH(BgL_directoryz00_24);
					{	/* Llib/os.scm 591 */
						bool_t BgL_test3156z00_4684;

						if ((BgL_ldirz00_1411 == ((long) 1)))
							{	/* Llib/os.scm 591 */
								BgL_test3156z00_4684 =
									(STRING_REF(BgL_directoryz00_24,
										((long) 0)) == ((unsigned char) '.'));
							}
						else
							{	/* Llib/os.scm 591 */
								BgL_test3156z00_4684 = ((bool_t) 0);
							}
						if (BgL_test3156z00_4684)
							{	/* Llib/os.scm 591 */
								return BgL_filez00_25;
							}
						else
							{	/* Llib/os.scm 591 */
								if ((BgL_ldirz00_1411 == ((long) 0)))
									{	/* Llib/os.scm 594 */
										long BgL_lfilez00_1416;

										BgL_lfilez00_1416 = STRING_LENGTH(BgL_filez00_25);
										{	/* Llib/os.scm 594 */
											long BgL_lenz00_1417;

											BgL_lenz00_1417 = (((long) 1) + BgL_lfilez00_1416);
											{	/* Llib/os.scm 595 */
												obj_t BgL_strz00_1418;

												BgL_strz00_1418 =
													make_string(BgL_lenz00_1417,
													(unsigned char) (FILE_SEPARATOR));
												{	/* Llib/os.scm 596 */

													blit_string(BgL_filez00_25, ((long) 0),
														BgL_strz00_1418, ((long) 1), BgL_lfilez00_1416);
													return BgL_strz00_1418;
												}
											}
										}
									}
								else
									{	/* Llib/os.scm 593 */
										if (
											(STRING_REF(BgL_directoryz00_24,
													(BgL_ldirz00_1411 - ((long) 1))) ==
												(unsigned char) (FILE_SEPARATOR)))
											{	/* Llib/os.scm 600 */
												long BgL_lfilez00_1422;

												BgL_lfilez00_1422 = STRING_LENGTH(BgL_filez00_25);
												{	/* Llib/os.scm 600 */
													long BgL_lenz00_1423;

													BgL_lenz00_1423 =
														(BgL_ldirz00_1411 + BgL_lfilez00_1422);
													{	/* Llib/os.scm 601 */
														obj_t BgL_strz00_1424;

														BgL_strz00_1424 =
															make_string(BgL_lenz00_1423,
															(unsigned char) (FILE_SEPARATOR));
														{	/* Llib/os.scm 602 */

															blit_string(BgL_directoryz00_24, ((long) 0),
																BgL_strz00_1424, ((long) 0), BgL_ldirz00_1411);
															blit_string(BgL_filez00_25, ((long) 0),
																BgL_strz00_1424, BgL_ldirz00_1411,
																BgL_lfilez00_1422);
															return BgL_strz00_1424;
														}
													}
												}
											}
										else
											{	/* Llib/os.scm 599 */
												BgL_ldirz00_1429 = BgL_ldirz00_1411;
												{	/* Llib/os.scm 583 */
													long BgL_lfilez00_1431;

													BgL_lfilez00_1431 = STRING_LENGTH(BgL_filez00_25);
													{	/* Llib/os.scm 583 */
														long BgL_lenz00_1432;

														BgL_lenz00_1432 =
															(BgL_ldirz00_1429 +
															(BgL_lfilez00_1431 + ((long) 1)));
														{	/* Llib/os.scm 584 */
															obj_t BgL_strz00_1433;

															BgL_strz00_1433 =
																make_string(BgL_lenz00_1432,
																(unsigned char) (FILE_SEPARATOR));
															{	/* Llib/os.scm 585 */

																blit_string(BgL_directoryz00_24, ((long) 0),
																	BgL_strz00_1433, ((long) 0),
																	BgL_ldirz00_1429);
																blit_string(BgL_filez00_25, ((long) 0),
																	BgL_strz00_1433,
																	(((long) 1) + BgL_ldirz00_1429),
																	BgL_lfilez00_1431);
																return BgL_strz00_1433;
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



/* &make-file-name */
	obj_t BGl_z62makezd2filezd2namez62zz__osz00(obj_t BgL_envz00_3954,
		obj_t BgL_directoryz00_3955, obj_t BgL_filez00_3956)
	{
		{	/* Llib/os.scm 581 */
			{	/* Llib/os.scm 583 */
				obj_t BgL_auxz00_4722;
				obj_t BgL_auxz00_4715;

				if (STRINGP(BgL_filez00_3956))
					{	/* Llib/os.scm 583 */
						BgL_auxz00_4722 = BgL_filez00_3956;
					}
				else
					{
						obj_t BgL_auxz00_4725;

						BgL_auxz00_4725 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 22335)), BGl_string2748z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_filez00_3956);
						FAILURE(BgL_auxz00_4725, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_directoryz00_3955))
					{	/* Llib/os.scm 583 */
						BgL_auxz00_4715 = BgL_directoryz00_3955;
					}
				else
					{
						obj_t BgL_auxz00_4718;

						BgL_auxz00_4718 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 22335)), BGl_string2748z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_directoryz00_3955);
						FAILURE(BgL_auxz00_4718, BFALSE, BFALSE);
					}
				return
					BGl_makezd2filezd2namez00zz__osz00(BgL_auxz00_4715, BgL_auxz00_4722);
			}
		}

	}



/* make-file-path */
	BGL_EXPORTED_DEF obj_t BGl_makezd2filezd2pathz00zz__osz00(obj_t
		BgL_directoryz00_26, obj_t BgL_filez00_27, obj_t BgL_objz00_28)
	{
		{	/* Llib/os.scm 615 */
			{	/* Llib/os.scm 616 */
				bool_t BgL_test3162z00_4730;

				if ((STRING_LENGTH(BgL_directoryz00_26) == ((long) 0)))
					{	/* Llib/os.scm 616 */
						BgL_test3162z00_4730 = NULLP(BgL_objz00_28);
					}
				else
					{	/* Llib/os.scm 616 */
						BgL_test3162z00_4730 = ((bool_t) 0);
					}
				if (BgL_test3162z00_4730)
					{	/* Llib/os.scm 616 */
						return BgL_filez00_27;
					}
				else
					{	/* Llib/os.scm 618 */
						long BgL_ldirz00_1441;

						BgL_ldirz00_1441 = STRING_LENGTH(BgL_directoryz00_26);
						{	/* Llib/os.scm 618 */
							long BgL_lfilez00_1442;

							BgL_lfilez00_1442 = STRING_LENGTH(BgL_filez00_27);
							{	/* Llib/os.scm 619 */
								obj_t BgL_lenz00_1443;

								{	/* Llib/os.scm 620 */
									long BgL_g1053z00_1461;

									BgL_g1053z00_1461 =
										(BgL_ldirz00_1441 + (((long) 1) + BgL_lfilez00_1442));
									{
										obj_t BgL_objz00_1463;
										long BgL_lz00_1464;

										BgL_objz00_1463 = BgL_objz00_28;
										BgL_lz00_1464 = BgL_g1053z00_1461;
									BgL_zc3z04anonymousza31425ze3z87_1465:
										if (NULLP(BgL_objz00_1463))
											{	/* Llib/os.scm 623 */
												BgL_lenz00_1443 = BINT(BgL_lz00_1464);
											}
										else
											{	/* Llib/os.scm 625 */
												bool_t BgL_test3165z00_4742;

												{	/* Llib/os.scm 625 */
													obj_t BgL_tmpz00_4743;

													BgL_tmpz00_4743 = CAR(((obj_t) BgL_objz00_1463));
													BgL_test3165z00_4742 = STRINGP(BgL_tmpz00_4743);
												}
												if (BgL_test3165z00_4742)
													{	/* Llib/os.scm 629 */
														obj_t BgL_arg1429z00_1469;
														long BgL_arg1430z00_1470;

														BgL_arg1429z00_1469 =
															CDR(((obj_t) BgL_objz00_1463));
														{	/* Llib/os.scm 629 */
															long BgL_tmpz00_4749;

															{	/* Llib/os.scm 630 */
																long BgL_tmpz00_4750;

																{	/* Llib/os.scm 630 */
																	obj_t BgL_stringz00_2781;

																	BgL_stringz00_2781 =
																		CAR(((obj_t) BgL_objz00_1463));
																	BgL_tmpz00_4750 =
																		STRING_LENGTH(BgL_stringz00_2781);
																}
																BgL_tmpz00_4749 =
																	(BgL_tmpz00_4750 + BgL_lz00_1464);
															}
															BgL_arg1430z00_1470 =
																(((long) 1) + BgL_tmpz00_4749);
														}
														{
															long BgL_lz00_4757;
															obj_t BgL_objz00_4756;

															BgL_objz00_4756 = BgL_arg1429z00_1469;
															BgL_lz00_4757 = BgL_arg1430z00_1470;
															BgL_lz00_1464 = BgL_lz00_4757;
															BgL_objz00_1463 = BgL_objz00_4756;
															goto BgL_zc3z04anonymousza31425ze3z87_1465;
														}
													}
												else
													{	/* Llib/os.scm 627 */
														obj_t BgL_arg1434z00_1474;

														BgL_arg1434z00_1474 =
															CAR(((obj_t) BgL_objz00_1463));
														BgL_lenz00_1443 =
															BGl_bigloozd2typezd2errorz00zz__errorz00
															(BGl_string2749z00zz__osz00,
															BGl_string2750z00zz__osz00, BgL_arg1434z00_1474);
													}
											}
									}
								}
								{	/* Llib/os.scm 620 */
									obj_t BgL_strz00_1444;

									BgL_strz00_1444 =
										make_string(
										(long) CINT(BgL_lenz00_1443),
										(unsigned char) (FILE_SEPARATOR));
									{	/* Llib/os.scm 632 */

										blit_string(BgL_directoryz00_26, ((long) 0),
											BgL_strz00_1444, ((long) 0), BgL_ldirz00_1441);
										blit_string(BgL_filez00_27, ((long) 0), BgL_strz00_1444,
											(((long) 1) + BgL_ldirz00_1441), BgL_lfilez00_1442);
										{	/* Llib/os.scm 635 */
											long BgL_g1054z00_1446;

											BgL_g1054z00_1446 =
												(((long) 1) + (BgL_ldirz00_1441 + BgL_lfilez00_1442));
											{
												obj_t BgL_objz00_1448;
												long BgL_wz00_1449;

												BgL_objz00_1448 = BgL_objz00_28;
												BgL_wz00_1449 = BgL_g1054z00_1446;
											BgL_zc3z04anonymousza31415ze3z87_1450:
												if (NULLP(BgL_objz00_1448))
													{	/* Llib/os.scm 637 */
														return BgL_strz00_1444;
													}
												else
													{	/* Llib/os.scm 639 */
														long BgL_loz00_1452;

														{	/* Llib/os.scm 639 */
															obj_t BgL_stringz00_2807;

															BgL_stringz00_2807 =
																CAR(((obj_t) BgL_objz00_1448));
															BgL_loz00_1452 =
																STRING_LENGTH(BgL_stringz00_2807);
														}
														{	/* Llib/os.scm 640 */
															obj_t BgL_arg1417z00_1453;
															long BgL_arg1418z00_1454;

															BgL_arg1417z00_1453 =
																CAR(((obj_t) BgL_objz00_1448));
															BgL_arg1418z00_1454 =
																(((long) 1) + BgL_wz00_1449);
															blit_string(
																((obj_t) BgL_arg1417z00_1453), ((long) 0),
																BgL_strz00_1444, BgL_arg1418z00_1454,
																BgL_loz00_1452);
														}
														{	/* Llib/os.scm 641 */
															obj_t BgL_arg1419z00_1455;
															long BgL_arg1420z00_1456;

															BgL_arg1419z00_1455 =
																CDR(((obj_t) BgL_objz00_1448));
															BgL_arg1420z00_1456 =
																(BgL_wz00_1449 + (BgL_loz00_1452 + ((long) 1)));
															{
																long BgL_wz00_4784;
																obj_t BgL_objz00_4783;

																BgL_objz00_4783 = BgL_arg1419z00_1455;
																BgL_wz00_4784 = BgL_arg1420z00_1456;
																BgL_wz00_1449 = BgL_wz00_4784;
																BgL_objz00_1448 = BgL_objz00_4783;
																goto BgL_zc3z04anonymousza31415ze3z87_1450;
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



/* &make-file-path */
	obj_t BGl_z62makezd2filezd2pathz62zz__osz00(obj_t BgL_envz00_3957,
		obj_t BgL_directoryz00_3958, obj_t BgL_filez00_3959, obj_t BgL_objz00_3960)
	{
		{	/* Llib/os.scm 615 */
			{	/* Llib/os.scm 616 */
				obj_t BgL_auxz00_4792;
				obj_t BgL_auxz00_4785;

				if (STRINGP(BgL_filez00_3959))
					{	/* Llib/os.scm 616 */
						BgL_auxz00_4792 = BgL_filez00_3959;
					}
				else
					{
						obj_t BgL_auxz00_4795;

						BgL_auxz00_4795 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 23705)), BGl_string2751z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_filez00_3959);
						FAILURE(BgL_auxz00_4795, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_directoryz00_3958))
					{	/* Llib/os.scm 616 */
						BgL_auxz00_4785 = BgL_directoryz00_3958;
					}
				else
					{
						obj_t BgL_auxz00_4788;

						BgL_auxz00_4788 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 23705)), BGl_string2751z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_directoryz00_3958);
						FAILURE(BgL_auxz00_4788, BFALSE, BFALSE);
					}
				return
					BGl_makezd2filezd2pathz00zz__osz00(BgL_auxz00_4785, BgL_auxz00_4792,
					BgL_objz00_3960);
			}
		}

	}



/* make-static-lib-name */
	BGL_EXPORTED_DEF obj_t BGl_makezd2staticzd2libzd2namezd2zz__osz00(obj_t
		BgL_libz00_29, obj_t BgL_backendz00_30)
	{
		{	/* Llib/os.scm 646 */
			if ((BgL_backendz00_30 == BGl_symbol2752z00zz__osz00))
				{	/* Llib/os.scm 649 */
					bool_t BgL_test3170z00_4802;

					{	/* Llib/os.scm 649 */
						bool_t BgL_res2283z00_2839;

						{	/* Llib/os.scm 649 */
							obj_t BgL_string1z00_2824;

							BgL_string1z00_2824 = string_to_bstring(OS_CLASS);
							{	/* Llib/os.scm 649 */
								long BgL_l1z00_2826;

								BgL_l1z00_2826 = STRING_LENGTH(BgL_string1z00_2824);
								if ((BgL_l1z00_2826 == ((long) 5)))
									{	/* Llib/os.scm 649 */
										int BgL_arg1861z00_2829;

										{	/* Llib/os.scm 649 */
											char *BgL_auxz00_4809;
											char *BgL_tmpz00_4807;

											BgL_auxz00_4809 =
												BSTRING_TO_STRING(BGl_string2726z00zz__osz00);
											BgL_tmpz00_4807 = BSTRING_TO_STRING(BgL_string1z00_2824);
											BgL_arg1861z00_2829 =
												memcmp(BgL_tmpz00_4807, BgL_auxz00_4809,
												BgL_l1z00_2826);
										}
										BgL_res2283z00_2839 =
											((long) (BgL_arg1861z00_2829) == ((long) 0));
									}
								else
									{	/* Llib/os.scm 649 */
										BgL_res2283z00_2839 = ((bool_t) 0);
									}
							}
						}
						BgL_test3170z00_4802 = BgL_res2283z00_2839;
					}
					if (BgL_test3170z00_4802)
						{	/* Llib/os.scm 649 */
							return
								string_append_3(BgL_libz00_29, BGl_string2710z00zz__osz00,
								string_to_bstring(STATIC_LIB_SUFFIX));
						}
					else
						{	/* Llib/os.scm 651 */
							obj_t BgL_list1441z00_1484;

							{	/* Llib/os.scm 651 */
								obj_t BgL_arg1442z00_1485;

								{	/* Llib/os.scm 651 */
									obj_t BgL_arg1443z00_1486;

									{	/* Llib/os.scm 651 */
										obj_t BgL_arg1444z00_1487;

										BgL_arg1444z00_1487 =
											MAKE_YOUNG_PAIR(string_to_bstring(STATIC_LIB_SUFFIX),
											BNIL);
										BgL_arg1443z00_1486 =
											MAKE_YOUNG_PAIR(BGl_string2710z00zz__osz00,
											BgL_arg1444z00_1487);
									}
									BgL_arg1442z00_1485 =
										MAKE_YOUNG_PAIR(BgL_libz00_29, BgL_arg1443z00_1486);
								}
								BgL_list1441z00_1484 =
									MAKE_YOUNG_PAIR(BGl_string2754z00zz__osz00,
									BgL_arg1442z00_1485);
							}
							return
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list1441z00_1484);
						}
				}
			else
				{	/* Llib/os.scm 647 */
					if ((BgL_backendz00_30 == BGl_symbol2755z00zz__osz00))
						{	/* Llib/os.scm 647 */
							return string_append(BgL_libz00_29, BGl_string2757z00zz__osz00);
						}
					else
						{	/* Llib/os.scm 647 */
							if ((BgL_backendz00_30 == BGl_symbol2758z00zz__osz00))
								{	/* Llib/os.scm 647 */
									return
										string_append(BgL_libz00_29, BGl_string2760z00zz__osz00);
								}
							else
								{	/* Llib/os.scm 647 */
									return
										BGl_errorz00zz__errorz00(BGl_string2761z00zz__osz00,
										BGl_string2762z00zz__osz00, BgL_backendz00_30);
								}
						}
				}
		}

	}



/* &make-static-lib-name */
	obj_t BGl_z62makezd2staticzd2libzd2namezb0zz__osz00(obj_t BgL_envz00_3961,
		obj_t BgL_libz00_3962, obj_t BgL_backendz00_3963)
	{
		{	/* Llib/os.scm 646 */
			{	/* Llib/os.scm 647 */
				obj_t BgL_auxz00_4836;
				obj_t BgL_auxz00_4829;

				if (SYMBOLP(BgL_backendz00_3963))
					{	/* Llib/os.scm 647 */
						BgL_auxz00_4836 = BgL_backendz00_3963;
					}
				else
					{
						obj_t BgL_auxz00_4839;

						BgL_auxz00_4839 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 24821)), BGl_string2763z00zz__osz00,
							BGl_string2764z00zz__osz00, BgL_backendz00_3963);
						FAILURE(BgL_auxz00_4839, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_libz00_3962))
					{	/* Llib/os.scm 647 */
						BgL_auxz00_4829 = BgL_libz00_3962;
					}
				else
					{
						obj_t BgL_auxz00_4832;

						BgL_auxz00_4832 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 24821)), BGl_string2763z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_libz00_3962);
						FAILURE(BgL_auxz00_4832, BFALSE, BFALSE);
					}
				return
					BGl_makezd2staticzd2libzd2namezd2zz__osz00(BgL_auxz00_4829,
					BgL_auxz00_4836);
			}
		}

	}



/* make-shared-lib-name */
	BGL_EXPORTED_DEF obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t
		BgL_libz00_31, obj_t BgL_backendz00_32)
	{
		{	/* Llib/os.scm 662 */
			if ((BgL_backendz00_32 == BGl_symbol2752z00zz__osz00))
				{	/* Llib/os.scm 665 */
					bool_t BgL_test3177z00_4846;

					{	/* Llib/os.scm 665 */
						bool_t BgL_res2291z00_2861;

						{	/* Llib/os.scm 665 */
							obj_t BgL_string1z00_2846;

							BgL_string1z00_2846 = string_to_bstring(OS_CLASS);
							{	/* Llib/os.scm 665 */
								long BgL_l1z00_2848;

								BgL_l1z00_2848 = STRING_LENGTH(BgL_string1z00_2846);
								if ((BgL_l1z00_2848 == ((long) 5)))
									{	/* Llib/os.scm 665 */
										int BgL_arg1861z00_2851;

										{	/* Llib/os.scm 665 */
											char *BgL_auxz00_4853;
											char *BgL_tmpz00_4851;

											BgL_auxz00_4853 =
												BSTRING_TO_STRING(BGl_string2726z00zz__osz00);
											BgL_tmpz00_4851 = BSTRING_TO_STRING(BgL_string1z00_2846);
											BgL_arg1861z00_2851 =
												memcmp(BgL_tmpz00_4851, BgL_auxz00_4853,
												BgL_l1z00_2848);
										}
										BgL_res2291z00_2861 =
											((long) (BgL_arg1861z00_2851) == ((long) 0));
									}
								else
									{	/* Llib/os.scm 665 */
										BgL_res2291z00_2861 = ((bool_t) 0);
									}
							}
						}
						BgL_test3177z00_4846 = BgL_res2291z00_2861;
					}
					if (BgL_test3177z00_4846)
						{	/* Llib/os.scm 665 */
							return
								string_append_3(BgL_libz00_31, BGl_string2710z00zz__osz00,
								string_to_bstring(STATIC_LIB_SUFFIX));
						}
					else
						{	/* Llib/os.scm 667 */
							obj_t BgL_list1451z00_1495;

							{	/* Llib/os.scm 667 */
								obj_t BgL_arg1452z00_1496;

								{	/* Llib/os.scm 667 */
									obj_t BgL_arg1453z00_1497;

									{	/* Llib/os.scm 667 */
										obj_t BgL_arg1454z00_1498;

										BgL_arg1454z00_1498 =
											MAKE_YOUNG_PAIR(string_to_bstring(SHARED_LIB_SUFFIX),
											BNIL);
										BgL_arg1453z00_1497 =
											MAKE_YOUNG_PAIR(BGl_string2710z00zz__osz00,
											BgL_arg1454z00_1498);
									}
									BgL_arg1452z00_1496 =
										MAKE_YOUNG_PAIR(BgL_libz00_31, BgL_arg1453z00_1497);
								}
								BgL_list1451z00_1495 =
									MAKE_YOUNG_PAIR(BGl_string2754z00zz__osz00,
									BgL_arg1452z00_1496);
							}
							return
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list1451z00_1495);
						}
				}
			else
				{	/* Llib/os.scm 663 */
					if ((BgL_backendz00_32 == BGl_symbol2755z00zz__osz00))
						{	/* Llib/os.scm 663 */
							return string_append(BgL_libz00_31, BGl_string2757z00zz__osz00);
						}
					else
						{	/* Llib/os.scm 663 */
							if ((BgL_backendz00_32 == BGl_symbol2758z00zz__osz00))
								{	/* Llib/os.scm 663 */
									return
										string_append(BgL_libz00_31, BGl_string2760z00zz__osz00);
								}
							else
								{	/* Llib/os.scm 663 */
									return
										BGl_errorz00zz__errorz00(BGl_string2765z00zz__osz00,
										BGl_string2762z00zz__osz00, BgL_backendz00_32);
								}
						}
				}
		}

	}



/* &make-shared-lib-name */
	obj_t BGl_z62makezd2sharedzd2libzd2namezb0zz__osz00(obj_t BgL_envz00_3964,
		obj_t BgL_libz00_3965, obj_t BgL_backendz00_3966)
	{
		{	/* Llib/os.scm 662 */
			{	/* Llib/os.scm 663 */
				obj_t BgL_auxz00_4880;
				obj_t BgL_auxz00_4873;

				if (SYMBOLP(BgL_backendz00_3966))
					{	/* Llib/os.scm 663 */
						BgL_auxz00_4880 = BgL_backendz00_3966;
					}
				else
					{
						obj_t BgL_auxz00_4883;

						BgL_auxz00_4883 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 25477)), BGl_string2766z00zz__osz00,
							BGl_string2764z00zz__osz00, BgL_backendz00_3966);
						FAILURE(BgL_auxz00_4883, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_libz00_3965))
					{	/* Llib/os.scm 663 */
						BgL_auxz00_4873 = BgL_libz00_3965;
					}
				else
					{
						obj_t BgL_auxz00_4876;

						BgL_auxz00_4876 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 25477)), BGl_string2766z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_libz00_3965);
						FAILURE(BgL_auxz00_4876, BFALSE, BFALSE);
					}
				return
					BGl_makezd2sharedzd2libzd2namezd2zz__osz00(BgL_auxz00_4873,
					BgL_auxz00_4880);
			}
		}

	}



/* find-file/path */
	BGL_EXPORTED_DEF obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t
		BgL_filezd2namezd2_33, obj_t BgL_pathz00_34)
	{
		{	/* Llib/os.scm 678 */
			{
				obj_t BgL_filezd2namezd2_1522;

				if ((STRING_LENGTH(BgL_filezd2namezd2_33) == ((long) 0)))
					{	/* Llib/os.scm 690 */
						return BFALSE;
					}
				else
					{	/* Llib/os.scm 692 */
						bool_t BgL_test3184z00_4891;

						if (
							(STRING_REF(BgL_filezd2namezd2_33, ((long) 0)) ==
								(unsigned char) (FILE_SEPARATOR)))
							{	/* Llib/os.scm 692 */
								BgL_test3184z00_4891 = ((bool_t) 1);
							}
						else
							{	/* Llib/os.scm 692 */
								BgL_filezd2namezd2_1522 = BgL_filezd2namezd2_33;
								{	/* Llib/os.scm 680 */
									bool_t BgL_test3186z00_4896;

									{	/* Llib/os.scm 680 */
										bool_t BgL_res2298z00_2881;

										{	/* Llib/os.scm 680 */
											obj_t BgL_string1z00_2866;

											BgL_string1z00_2866 = string_to_bstring(OS_CLASS);
											{	/* Llib/os.scm 680 */
												long BgL_l1z00_2868;

												BgL_l1z00_2868 = STRING_LENGTH(BgL_string1z00_2866);
												if ((BgL_l1z00_2868 == ((long) 5)))
													{	/* Llib/os.scm 680 */
														int BgL_arg1861z00_2871;

														{	/* Llib/os.scm 680 */
															char *BgL_auxz00_4903;
															char *BgL_tmpz00_4901;

															BgL_auxz00_4903 =
																BSTRING_TO_STRING(BGl_string2733z00zz__osz00);
															BgL_tmpz00_4901 =
																BSTRING_TO_STRING(BgL_string1z00_2866);
															BgL_arg1861z00_2871 =
																memcmp(BgL_tmpz00_4901, BgL_auxz00_4903,
																BgL_l1z00_2868);
														}
														BgL_res2298z00_2881 =
															((long) (BgL_arg1861z00_2871) == ((long) 0));
													}
												else
													{	/* Llib/os.scm 680 */
														BgL_res2298z00_2881 = ((bool_t) 0);
													}
											}
										}
										BgL_test3186z00_4896 = BgL_res2298z00_2881;
									}
									if (BgL_test3186z00_4896)
										{	/* Llib/os.scm 681 */
											bool_t BgL__ortest_1055z00_1526;

											BgL__ortest_1055z00_1526 =
												(STRING_REF(BgL_filezd2namezd2_1522,
													((long) 0)) == ((unsigned char) '/'));
											if (BgL__ortest_1055z00_1526)
												{	/* Llib/os.scm 681 */
													BgL_test3184z00_4891 = BgL__ortest_1055z00_1526;
												}
											else
												{	/* Llib/os.scm 682 */
													bool_t BgL__ortest_1056z00_1527;

													BgL__ortest_1056z00_1527 =
														(STRING_REF(BgL_filezd2namezd2_1522,
															((long) 0)) == ((unsigned char) '\\'));
													if (BgL__ortest_1056z00_1527)
														{	/* Llib/os.scm 682 */
															BgL_test3184z00_4891 = BgL__ortest_1056z00_1527;
														}
													else
														{	/* Llib/os.scm 682 */
															if (
																(STRING_LENGTH(BgL_filezd2namezd2_1522) >
																	((long) 2)))
																{	/* Llib/os.scm 683 */
																	if (
																		(STRING_REF(BgL_filezd2namezd2_1522,
																				((long) 1)) == ((unsigned char) ':')))
																		{	/* Llib/os.scm 685 */
																			bool_t BgL__ortest_1058z00_1531;

																			BgL__ortest_1058z00_1531 =
																				(STRING_REF(BgL_filezd2namezd2_1522,
																					((long) 2)) == ((unsigned char) '/'));
																			if (BgL__ortest_1058z00_1531)
																				{	/* Llib/os.scm 685 */
																					BgL_test3184z00_4891 =
																						BgL__ortest_1058z00_1531;
																				}
																			else
																				{	/* Llib/os.scm 685 */
																					BgL_test3184z00_4891 =
																						(STRING_REF(BgL_filezd2namezd2_1522,
																							((long) 2)) ==
																						((unsigned char) '\\'));
																		}}
																	else
																		{	/* Llib/os.scm 684 */
																			BgL_test3184z00_4891 = ((bool_t) 0);
																		}
																}
															else
																{	/* Llib/os.scm 683 */
																	BgL_test3184z00_4891 = ((bool_t) 0);
																}
														}
												}
										}
									else
										{	/* Llib/os.scm 680 */
											BgL_test3184z00_4891 = ((bool_t) 0);
										}
								}
							}
						if (BgL_test3184z00_4891)
							{	/* Llib/os.scm 692 */
								if (fexists(BSTRING_TO_STRING(BgL_filezd2namezd2_33)))
									{	/* Llib/os.scm 694 */
										return BgL_filezd2namezd2_33;
									}
								else
									{	/* Llib/os.scm 694 */
										return BFALSE;
									}
							}
						else
							{
								obj_t BgL_pathz00_1511;

								BgL_pathz00_1511 = BgL_pathz00_34;
							BgL_zc3z04anonymousza31465ze3z87_1512:
								if (NULLP(BgL_pathz00_1511))
									{	/* Llib/os.scm 699 */
										return BFALSE;
									}
								else
									{	/* Llib/os.scm 701 */
										obj_t BgL_fnamez00_1514;

										{	/* Llib/os.scm 701 */
											obj_t BgL_arg1469z00_1517;

											BgL_arg1469z00_1517 = CAR(((obj_t) BgL_pathz00_1511));
											BgL_fnamez00_1514 =
												BGl_makezd2filezd2namez00zz__osz00(BgL_arg1469z00_1517,
												BgL_filezd2namezd2_33);
										}
										if (fexists(BSTRING_TO_STRING(BgL_fnamez00_1514)))
											{	/* Llib/os.scm 702 */
												return BgL_fnamez00_1514;
											}
										else
											{	/* Llib/os.scm 704 */
												obj_t BgL_arg1468z00_1516;

												BgL_arg1468z00_1516 = CDR(((obj_t) BgL_pathz00_1511));
												{
													obj_t BgL_pathz00_4938;

													BgL_pathz00_4938 = BgL_arg1468z00_1516;
													BgL_pathz00_1511 = BgL_pathz00_4938;
													goto BgL_zc3z04anonymousza31465ze3z87_1512;
												}
											}
									}
							}
					}
			}
		}

	}



/* &find-file/path */
	obj_t BGl_z62findzd2filezf2pathz42zz__osz00(obj_t BgL_envz00_3967,
		obj_t BgL_filezd2namezd2_3968, obj_t BgL_pathz00_3969)
	{
		{	/* Llib/os.scm 678 */
			{	/* Llib/os.scm 680 */
				obj_t BgL_auxz00_4939;

				if (STRINGP(BgL_filezd2namezd2_3968))
					{	/* Llib/os.scm 680 */
						BgL_auxz00_4939 = BgL_filezd2namezd2_3968;
					}
				else
					{
						obj_t BgL_auxz00_4942;

						BgL_auxz00_4942 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 26183)), BGl_string2767z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_filezd2namezd2_3968);
						FAILURE(BgL_auxz00_4942, BFALSE, BFALSE);
					}
				return
					BGl_findzd2filezf2pathz20zz__osz00(BgL_auxz00_4939, BgL_pathz00_3969);
			}
		}

	}



/* file-name->list */
	BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2ze3listze3zz__osz00(obj_t
		BgL_namez00_35)
	{
		{	/* Llib/os.scm 709 */
			{	/* Llib/os.scm 710 */
				long BgL_lenz00_1540;

				BgL_lenz00_1540 = STRING_LENGTH(BgL_namez00_35);
				{	/* Llib/os.scm 711 */
					bool_t BgL_test3197z00_4948;

					if ((BgL_lenz00_1540 == ((long) 1)))
						{	/* Llib/os.scm 711 */
							BgL_test3197z00_4948 =
								(STRING_REF(BgL_namez00_35, ((long) 0)) ==
								(unsigned char) (FILE_SEPARATOR));
						}
					else
						{	/* Llib/os.scm 711 */
							BgL_test3197z00_4948 = ((bool_t) 0);
						}
					if (BgL_test3197z00_4948)
						{	/* Llib/os.scm 712 */
							obj_t BgL_list1491z00_1545;

							BgL_list1491z00_1545 =
								MAKE_YOUNG_PAIR(BGl_string2737z00zz__osz00, BNIL);
							return BgL_list1491z00_1545;
						}
					else
						{
							long BgL_startz00_2961;
							long BgL_stopz00_2962;
							obj_t BgL_resz00_2963;

							BgL_startz00_2961 = ((long) 0);
							BgL_stopz00_2962 = ((long) 0);
							BgL_resz00_2963 = BNIL;
						BgL_loopz00_2960:
							if ((BgL_stopz00_2962 == BgL_lenz00_1540))
								{	/* Llib/os.scm 718 */
									obj_t BgL_arg1494z00_2968;

									BgL_arg1494z00_2968 =
										MAKE_YOUNG_PAIR(c_substring(BgL_namez00_35,
											BgL_startz00_2961, BgL_stopz00_2962), BgL_resz00_2963);
									return bgl_reverse_bang(BgL_arg1494z00_2968);
								}
							else
								{	/* Llib/os.scm 717 */
									if (
										(STRING_REF(BgL_namez00_35, BgL_stopz00_2962) ==
											(unsigned char) (FILE_SEPARATOR)))
										{	/* Llib/os.scm 720 */
											long BgL_arg1500z00_2983;
											long BgL_arg1502z00_2984;
											obj_t BgL_arg1505z00_2985;

											BgL_arg1500z00_2983 = (BgL_stopz00_2962 + ((long) 1));
											BgL_arg1502z00_2984 = (BgL_stopz00_2962 + ((long) 1));
											BgL_arg1505z00_2985 =
												MAKE_YOUNG_PAIR(c_substring(BgL_namez00_35,
													BgL_startz00_2961, BgL_stopz00_2962),
												BgL_resz00_2963);
											{
												obj_t BgL_resz00_4970;
												long BgL_stopz00_4969;
												long BgL_startz00_4968;

												BgL_startz00_4968 = BgL_arg1500z00_2983;
												BgL_stopz00_4969 = BgL_arg1502z00_2984;
												BgL_resz00_4970 = BgL_arg1505z00_2985;
												BgL_resz00_2963 = BgL_resz00_4970;
												BgL_stopz00_2962 = BgL_stopz00_4969;
												BgL_startz00_2961 = BgL_startz00_4968;
												goto BgL_loopz00_2960;
											}
										}
									else
										{
											long BgL_stopz00_4971;

											BgL_stopz00_4971 = (BgL_stopz00_2962 + ((long) 1));
											BgL_stopz00_2962 = BgL_stopz00_4971;
											goto BgL_loopz00_2960;
										}
								}
						}
				}
			}
		}

	}



/* &file-name->list */
	obj_t BGl_z62filezd2namezd2ze3listz81zz__osz00(obj_t BgL_envz00_3970,
		obj_t BgL_namez00_3971)
	{
		{	/* Llib/os.scm 709 */
			{	/* Llib/os.scm 710 */
				obj_t BgL_auxz00_4973;

				if (STRINGP(BgL_namez00_3971))
					{	/* Llib/os.scm 710 */
						BgL_auxz00_4973 = BgL_namez00_3971;
					}
				else
					{
						obj_t BgL_auxz00_4976;

						BgL_auxz00_4976 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 27222)), BGl_string2768z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_namez00_3971);
						FAILURE(BgL_auxz00_4976, BFALSE, BFALSE);
					}
				return BGl_filezd2namezd2ze3listze3zz__osz00(BgL_auxz00_4973);
			}
		}

	}



/* file-name-canonicalize-inner */
	obj_t BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(obj_t
		BgL_srcz00_36, obj_t BgL_resz00_37, long BgL_indexz00_38)
	{
		{	/* Llib/os.scm 729 */
			{	/* Llib/os.scm 731 */
				long BgL_lenz00_1570;
				long BgL_iz00_1571;
				long BgL_jz00_1572;

				BgL_lenz00_1570 = STRING_LENGTH(BgL_srcz00_36);
				BgL_iz00_1571 = BgL_indexz00_38;
				BgL_jz00_1572 = BgL_indexz00_38;
				{

				BgL_zc3z04anonymousza31568ze3z87_1633:
					{	/* Llib/os.scm 845 */
						bool_t BgL_test3202z00_4982;

						if ((BgL_iz00_1571 < (BgL_lenz00_1570 - ((long) 3))))
							{	/* Llib/os.scm 845 */
								if (
									(STRING_REF(BgL_srcz00_36,
											BgL_iz00_1571) == ((unsigned char) '.')))
									{	/* Llib/os.scm 846 */
										if (
											(STRING_REF(BgL_srcz00_36,
													(BgL_iz00_1571 + ((long) 1))) ==
												((unsigned char) '.')))
											{	/* Llib/os.scm 847 */
												BgL_test3202z00_4982 =
													(STRING_REF(BgL_srcz00_36,
														(BgL_iz00_1571 + ((long) 2))) ==
													(unsigned char) (FILE_SEPARATOR));
											}
										else
											{	/* Llib/os.scm 847 */
												BgL_test3202z00_4982 = ((bool_t) 0);
											}
									}
								else
									{	/* Llib/os.scm 846 */
										BgL_test3202z00_4982 = ((bool_t) 0);
									}
							}
						else
							{	/* Llib/os.scm 845 */
								BgL_test3202z00_4982 = ((bool_t) 0);
							}
						if (BgL_test3202z00_4982)
							{	/* Llib/os.scm 845 */
								STRING_SET(BgL_resz00_37, BgL_jz00_1572, ((unsigned char) '.'));
								{	/* Llib/os.scm 851 */
									long BgL_tmpz00_4998;

									BgL_tmpz00_4998 = (BgL_jz00_1572 + ((long) 1));
									STRING_SET(BgL_resz00_37, BgL_tmpz00_4998,
										((unsigned char) '.'));
								}
								{	/* Llib/os.scm 852 */
									unsigned char BgL_auxz00_5003;
									long BgL_tmpz00_5001;

									BgL_auxz00_5003 = (unsigned char) (FILE_SEPARATOR);
									BgL_tmpz00_5001 = (BgL_jz00_1572 + ((long) 2));
									STRING_SET(BgL_resz00_37, BgL_tmpz00_5001, BgL_auxz00_5003);
								}
								BgL_iz00_1571 = (BgL_iz00_1571 + ((long) 3));
								BgL_jz00_1572 = (BgL_jz00_1572 + ((long) 3));
								{

								BgL_zc3z04anonymousza31593ze3z87_1651:
									if ((BgL_iz00_1571 == BgL_lenz00_1570))
										{	/* Llib/os.scm 856 */
											return bgl_string_shrink(BgL_resz00_37, BgL_jz00_1572);
										}
									else
										{	/* Llib/os.scm 858 */
											bool_t BgL_test3207z00_5011;

											{	/* Llib/os.scm 858 */
												unsigned char BgL_char2z00_3264;

												BgL_char2z00_3264 = (unsigned char) (FILE_SEPARATOR);
												BgL_test3207z00_5011 =
													(STRING_REF(BgL_srcz00_36,
														BgL_iz00_1571) == BgL_char2z00_3264);
											}
											if (BgL_test3207z00_5011)
												{	/* Llib/os.scm 858 */
													BgL_iz00_1571 = (BgL_iz00_1571 + ((long) 1));
													goto BgL_zc3z04anonymousza31593ze3z87_1651;
												}
											else
												{	/* Llib/os.scm 858 */
													goto BgL_zc3z04anonymousza31568ze3z87_1633;
												}
										}
								}
							}
						else
							{	/* Llib/os.scm 845 */
							BgL_zc3z04anonymousza31524ze3z87_1592:
								if ((BgL_iz00_1571 == BgL_lenz00_1570))
									{	/* Llib/os.scm 768 */
										return bgl_string_shrink(BgL_resz00_37, BgL_jz00_1572);
									}
								else
									{	/* Llib/os.scm 770 */
										unsigned char BgL_cz00_1594;

										BgL_cz00_1594 = STRING_REF(BgL_srcz00_36, BgL_iz00_1571);
										if ((BgL_cz00_1594 == (unsigned char) (FILE_SEPARATOR)))
											{	/* Llib/os.scm 772 */
												STRING_SET(BgL_resz00_37, BgL_jz00_1572, BgL_cz00_1594);
												BgL_iz00_1571 = (BgL_iz00_1571 + ((long) 1));
												BgL_jz00_1572 = (BgL_jz00_1572 + ((long) 1));
											BgL_zc3z04anonymousza31512ze3z87_1578:
												if ((BgL_iz00_1571 == BgL_lenz00_1570))
													{	/* Llib/os.scm 737 */
														return
															bgl_string_shrink(BgL_resz00_37, BgL_jz00_1572);
													}
												else
													{	/* Llib/os.scm 739 */
														bool_t BgL_test3211z00_5029;

														{	/* Llib/os.scm 739 */
															unsigned char BgL_char2z00_3009;

															BgL_char2z00_3009 =
																(unsigned char) (FILE_SEPARATOR);
															BgL_test3211z00_5029 =
																(STRING_REF(BgL_srcz00_36,
																	BgL_iz00_1571) == BgL_char2z00_3009);
														}
														if (BgL_test3211z00_5029)
															{	/* Llib/os.scm 739 */
																BgL_iz00_1571 = (BgL_iz00_1571 + ((long) 1));
																goto BgL_zc3z04anonymousza31512ze3z87_1578;
															}
														else
															{	/* Llib/os.scm 739 */
																goto BgL_zc3z04anonymousza31524ze3z87_1592;
															}
													}
											}
										else
											{	/* Llib/os.scm 772 */
												if ((BgL_cz00_1594 == ((unsigned char) '.')))
													{	/* Llib/os.scm 778 */
														if (
															(BgL_iz00_1571 == (BgL_lenz00_1570 - ((long) 1))))
															{	/* Llib/os.scm 780 */
																if ((BgL_jz00_1572 == ((long) 0)))
																	{	/* Llib/os.scm 782 */
																		STRING_SET(BgL_resz00_37, BgL_jz00_1572,
																			((unsigned char) '.'));
																		{	/* Llib/os.scm 785 */
																			long BgL_tmpz00_5042;

																			BgL_tmpz00_5042 =
																				(BgL_jz00_1572 + ((long) 1));
																			return
																				bgl_string_shrink(BgL_resz00_37,
																				BgL_tmpz00_5042);
																		}
																	}
																else
																	{	/* Llib/os.scm 786 */
																		long BgL_tmpz00_5045;

																		BgL_tmpz00_5045 =
																			(BgL_jz00_1572 - ((long) 1));
																		return
																			bgl_string_shrink(BgL_resz00_37,
																			BgL_tmpz00_5045);
																	}
															}
														else
															{	/* Llib/os.scm 780 */
																if (
																	(STRING_REF(BgL_srcz00_36,
																			(BgL_iz00_1571 + ((long) 1))) ==
																		(unsigned char) (FILE_SEPARATOR)))
																	{	/* Llib/os.scm 787 */
																		if (
																			(BgL_iz00_1571 ==
																				(BgL_lenz00_1570 - ((long) 2))))
																			{	/* Llib/os.scm 788 */
																				STRING_SET(BgL_resz00_37, BgL_jz00_1572,
																					((unsigned char) '.'));
																				{	/* Llib/os.scm 792 */
																					long BgL_tmpz00_5057;

																					BgL_tmpz00_5057 =
																						(BgL_jz00_1572 + ((long) 1));
																					return
																						bgl_string_shrink(BgL_resz00_37,
																						BgL_tmpz00_5057);
																				}
																			}
																		else
																			{	/* Llib/os.scm 788 */
																				BgL_iz00_1571 =
																					(BgL_iz00_1571 + ((long) 2));
																				goto
																					BgL_zc3z04anonymousza31512ze3z87_1578;
																			}
																	}
																else
																	{	/* Llib/os.scm 787 */
																		if (
																			(STRING_REF(BgL_srcz00_36,
																					(BgL_iz00_1571 + ((long) 1))) ==
																				((unsigned char) '.')))
																			{	/* Llib/os.scm 797 */
																				if (
																					(BgL_iz00_1571 ==
																						(BgL_lenz00_1570 - ((long) 2))))
																					{	/* Llib/os.scm 800 */
																						if ((BgL_jz00_1572 == ((long) 0)))
																							{	/* Llib/os.scm 803 */
																								return
																									bgl_string_shrink
																									(BgL_resz00_37, ((long) 0));
																							}
																						else
																							{	/* Llib/os.scm 803 */
																								if (
																									(BgL_jz00_1572 == ((long) 1)))
																									{	/* Llib/os.scm 805 */
																										return
																											bgl_string_shrink
																											(BgL_resz00_37,
																											((long) 1));
																									}
																								else
																									{	/* Llib/os.scm 805 */
																										{	/* Llib/os.scm 808 */
																											long BgL_jz00_3126;

																											BgL_jz00_3126 =
																												BgL_jz00_1572;
																											{	/* Llib/os.scm 762 */
																												obj_t BgL_njz00_3127;

																												{	/* Llib/os.scm 762 */
																													long
																														BgL_arg1523z00_3128;
																													BgL_arg1523z00_3128 =
																														(BgL_jz00_3126 -
																														((long) 1));
																													BgL_njz00_3127 =
																														BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00
																														(BgL_resz00_37,
																														BCHAR
																														(FILE_SEPARATOR),
																														BINT
																														(BgL_arg1523z00_3128));
																												}
																												if (INTEGERP
																													(BgL_njz00_3127))
																													{	/* Llib/os.scm 763 */
																														BgL_jz00_1572 =
																															(
																															(long)
																															CINT
																															(BgL_njz00_3127) +
																															((long) 1));
																													}
																												else
																													{	/* Llib/os.scm 763 */
																														BgL_jz00_1572 =
																															((long) 0);
																										}}}
																										if (
																											(BgL_jz00_1572 >
																												((long) 1)))
																											{	/* Llib/os.scm 810 */
																												long BgL_tmpz00_5084;

																												BgL_tmpz00_5084 =
																													(BgL_jz00_1572 -
																													((long) 1));
																												return
																													bgl_string_shrink
																													(BgL_resz00_37,
																													BgL_tmpz00_5084);
																											}
																										else
																											{	/* Llib/os.scm 809 */
																												return
																													bgl_string_shrink
																													(BgL_resz00_37,
																													BgL_jz00_1572);
																											}
																									}
																							}
																					}
																				else
																					{	/* Llib/os.scm 800 */
																						if (
																							(STRING_REF(BgL_srcz00_36,
																									(BgL_iz00_1571 +
																										((long) 2))) ==
																								(unsigned
																									char) (FILE_SEPARATOR)))
																							{	/* Llib/os.scm 812 */
																								if (
																									(BgL_jz00_1572 >= ((long) 2)))
																									{	/* Llib/os.scm 815 */
																										long BgL_jz00_3153;

																										BgL_jz00_3153 =
																											BgL_jz00_1572;
																										{	/* Llib/os.scm 762 */
																											obj_t BgL_njz00_3154;

																											{	/* Llib/os.scm 762 */
																												long
																													BgL_arg1523z00_3155;
																												BgL_arg1523z00_3155 =
																													(BgL_jz00_3153 -
																													((long) 1));
																												BgL_njz00_3154 =
																													BGl_stringzd2indexzd2rightz00zz__r4_strings_6_7z00
																													(BgL_resz00_37,
																													BCHAR(FILE_SEPARATOR),
																													BINT
																													(BgL_arg1523z00_3155));
																											}
																											if (INTEGERP
																												(BgL_njz00_3154))
																												{	/* Llib/os.scm 763 */
																													BgL_jz00_1572 =
																														(
																														(long)
																														CINT(BgL_njz00_3154)
																														+ ((long) 1));
																												}
																											else
																												{	/* Llib/os.scm 763 */
																													BgL_jz00_1572 =
																														((long) 0);
																									}}}
																								else
																									{	/* Llib/os.scm 814 */
																										BFALSE;
																									}
																								BgL_iz00_1571 =
																									(BgL_iz00_1571 + ((long) 3));
																								goto
																									BgL_zc3z04anonymousza31512ze3z87_1578;
																							}
																						else
																							{	/* Llib/os.scm 812 */
																								STRING_SET(BgL_resz00_37,
																									BgL_jz00_1572, BgL_cz00_1594);
																								BgL_iz00_1571 =
																									(BgL_iz00_1571 + ((long) 1));
																								BgL_jz00_1572 =
																									(BgL_jz00_1572 + ((long) 1));
																								{	/* Llib/os.scm 822 */
																									unsigned char
																										BgL_arg1556z00_1622;
																									BgL_arg1556z00_1622 =
																										STRING_REF(BgL_srcz00_36,
																										BgL_iz00_1571);
																									STRING_SET(BgL_resz00_37,
																										BgL_jz00_1572,
																										BgL_arg1556z00_1622);
																								}
																								BgL_iz00_1571 =
																									(BgL_iz00_1571 + ((long) 1));
																								BgL_jz00_1572 =
																									(BgL_jz00_1572 + ((long) 1));
																								{	/* Llib/os.scm 825 */
																									unsigned char
																										BgL_arg1557z00_1623;
																									BgL_arg1557z00_1623 =
																										STRING_REF(BgL_srcz00_36,
																										BgL_iz00_1571);
																									STRING_SET(BgL_resz00_37,
																										BgL_jz00_1572,
																										BgL_arg1557z00_1623);
																								}
																							BgL_zc3z04anonymousza31517ze3z87_1583:
																								if (
																									(BgL_iz00_1571 ==
																										BgL_lenz00_1570))
																									{	/* Llib/os.scm 746 */
																										return
																											bgl_string_shrink
																											(BgL_resz00_37,
																											BgL_jz00_1572);
																									}
																								else
																									{	/* Llib/os.scm 748 */
																										unsigned char BgL_cz00_1585;

																										BgL_cz00_1585 =
																											STRING_REF(BgL_srcz00_36,
																											BgL_iz00_1571);
																										if ((BgL_cz00_1585 ==
																												(unsigned
																													char)
																												(FILE_SEPARATOR)))
																											{	/* Llib/os.scm 750 */
																												STRING_SET
																													(BgL_resz00_37,
																													BgL_jz00_1572,
																													BgL_cz00_1585);
																												BgL_iz00_1571 =
																													(BgL_iz00_1571 +
																													((long) 1));
																												BgL_jz00_1572 =
																													(BgL_jz00_1572 +
																													((long) 1));
																												goto
																													BgL_zc3z04anonymousza31512ze3z87_1578;
																											}
																										else
																											{	/* Llib/os.scm 750 */
																												STRING_SET
																													(BgL_resz00_37,
																													BgL_jz00_1572,
																													BgL_cz00_1585);
																												BgL_iz00_1571 =
																													(BgL_iz00_1571 +
																													((long) 1));
																												BgL_jz00_1572 =
																													(BgL_jz00_1572 +
																													((long) 1));
																												goto
																													BgL_zc3z04anonymousza31517ze3z87_1583;
																											}
																									}
																							}
																					}
																			}
																		else
																			{	/* Llib/os.scm 797 */
																				STRING_SET(BgL_resz00_37, BgL_jz00_1572,
																					BgL_cz00_1594);
																				BgL_iz00_1571 =
																					(BgL_iz00_1571 + ((long) 1));
																				BgL_jz00_1572 =
																					(BgL_jz00_1572 + ((long) 1));
																				{	/* Llib/os.scm 832 */
																					unsigned char BgL_arg1562z00_1627;

																					BgL_arg1562z00_1627 =
																						STRING_REF(BgL_srcz00_36,
																						BgL_iz00_1571);
																					STRING_SET(BgL_resz00_37,
																						BgL_jz00_1572, BgL_arg1562z00_1627);
																				}
																				BgL_iz00_1571 =
																					(BgL_iz00_1571 + ((long) 1));
																				BgL_jz00_1572 =
																					(BgL_jz00_1572 + ((long) 1));
																				goto
																					BgL_zc3z04anonymousza31517ze3z87_1583;
																			}
																	}
															}
													}
												else
													{	/* Llib/os.scm 778 */
														STRING_SET(BgL_resz00_37, BgL_jz00_1572,
															BgL_cz00_1594);
														BgL_iz00_1571 = (BgL_iz00_1571 + ((long) 1));
														BgL_jz00_1572 = (BgL_jz00_1572 + ((long) 1));
														goto BgL_zc3z04anonymousza31517ze3z87_1583;
													}
											}
									}
							}
					}
				}
			}
		}

	}



/* file-name-canonicalize */
	BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2canonicaliza7eza7zz__osz00(obj_t
		BgL_namez00_39)
	{
		{	/* Llib/os.scm 870 */
			{	/* Llib/os.scm 871 */
				obj_t BgL_arg1607z00_3268;

				{	/* Llib/os.scm 871 */
					long BgL_arg1608z00_3269;

					BgL_arg1608z00_3269 = STRING_LENGTH(BgL_namez00_39);
					{	/* Llib/os.scm 871 */

						BgL_arg1607z00_3268 =
							make_string(BgL_arg1608z00_3269, ((unsigned char) ' '));
				}}
				return
					BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00(BgL_namez00_39,
					BgL_arg1607z00_3268, ((long) 0));
		}}

	}



/* &file-name-canonicalize */
	obj_t BGl_z62filezd2namezd2canonicaliza7ezc5zz__osz00(obj_t BgL_envz00_3972,
		obj_t BgL_namez00_3973)
	{
		{	/* Llib/os.scm 870 */
			{	/* Llib/os.scm 871 */
				obj_t BgL_auxz00_5139;

				if (STRINGP(BgL_namez00_3973))
					{	/* Llib/os.scm 871 */
						BgL_auxz00_5139 = BgL_namez00_3973;
					}
				else
					{
						obj_t BgL_auxz00_5142;

						BgL_auxz00_5142 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 31710)), BGl_string2769z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_namez00_3973);
						FAILURE(BgL_auxz00_5142, BFALSE, BFALSE);
					}
				return BGl_filezd2namezd2canonicaliza7eza7zz__osz00(BgL_auxz00_5139);
			}
		}

	}



/* file-name-canonicalize! */
	BGL_EXPORTED_DEF obj_t BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(obj_t
		BgL_namez00_40)
	{
		{	/* Llib/os.scm 876 */
			{	/* Llib/os.scm 877 */
				long BgL_lenz00_1675;

				BgL_lenz00_1675 = STRING_LENGTH(BgL_namez00_40);
				{
					long BgL_iz00_1678;
					long BgL_sz00_1679;

					BgL_iz00_1678 = ((long) 0);
					BgL_sz00_1679 = ((long) 0);
				BgL_zc3z04anonymousza31609ze3z87_1680:
					if ((BgL_iz00_1678 == BgL_lenz00_1675))
						{	/* Llib/os.scm 881 */
							return BgL_namez00_40;
						}
					else
						{	/* Llib/os.scm 883 */
							unsigned char BgL_cz00_1682;

							BgL_cz00_1682 = STRING_REF(BgL_namez00_40, BgL_iz00_1678);
							if ((BgL_cz00_1682 == (unsigned char) (FILE_SEPARATOR)))
								{	/* Llib/os.scm 885 */
									if ((BgL_sz00_1679 == (BgL_iz00_1678 - ((long) 1))))
										{	/* Llib/os.scm 887 */
											obj_t BgL_resz00_1686;

											{	/* Ieee/string.scm 168 */

												BgL_resz00_1686 =
													make_string(BgL_lenz00_1675, ((unsigned char) ' '));
											}
											blit_string(BgL_namez00_40, ((long) 0), BgL_resz00_1686,
												((long) 0), BgL_iz00_1678);
											return
												BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00
												(BgL_namez00_40, BgL_resz00_1686, BgL_sz00_1679);
										}
									else
										{
											long BgL_sz00_5162;
											long BgL_iz00_5160;

											BgL_iz00_5160 = (BgL_iz00_1678 + ((long) 1));
											BgL_sz00_5162 = BgL_iz00_1678;
											BgL_sz00_1679 = BgL_sz00_5162;
											BgL_iz00_1678 = BgL_iz00_5160;
											goto BgL_zc3z04anonymousza31609ze3z87_1680;
										}
								}
							else
								{	/* Llib/os.scm 891 */
									bool_t BgL_test3232z00_5163;

									if ((BgL_cz00_1682 == ((unsigned char) '.')))
										{	/* Llib/os.scm 891 */
											BgL_test3232z00_5163 = (BgL_sz00_1679 >= ((long) 0));
										}
									else
										{	/* Llib/os.scm 891 */
											BgL_test3232z00_5163 = ((bool_t) 0);
										}
									if (BgL_test3232z00_5163)
										{	/* Llib/os.scm 892 */
											obj_t BgL_resz00_1693;

											{	/* Ieee/string.scm 168 */

												BgL_resz00_1693 =
													make_string(BgL_lenz00_1675, ((unsigned char) ' '));
											}
											blit_string(BgL_namez00_40, ((long) 0), BgL_resz00_1693,
												((long) 0), BgL_iz00_1678);
											return
												BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00
												(BgL_namez00_40, BgL_resz00_1693, BgL_sz00_1679);
										}
									else
										{
											long BgL_sz00_5172;
											long BgL_iz00_5170;

											BgL_iz00_5170 = (BgL_iz00_1678 + ((long) 1));
											BgL_sz00_5172 = ((long) -1);
											BgL_sz00_1679 = BgL_sz00_5172;
											BgL_iz00_1678 = BgL_iz00_5170;
											goto BgL_zc3z04anonymousza31609ze3z87_1680;
										}
								}
						}
				}
			}
		}

	}



/* &file-name-canonicalize! */
	obj_t BGl_z62filezd2namezd2canonicaliza7ez12zd7zz__osz00(obj_t
		BgL_envz00_3974, obj_t BgL_namez00_3975)
	{
		{	/* Llib/os.scm 876 */
			{	/* Llib/os.scm 877 */
				obj_t BgL_auxz00_5173;

				if (STRINGP(BgL_namez00_3975))
					{	/* Llib/os.scm 877 */
						BgL_auxz00_5173 = BgL_namez00_3975;
					}
				else
					{
						obj_t BgL_auxz00_5176;

						BgL_auxz00_5176 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 32001)), BGl_string2770z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_namez00_3975);
						FAILURE(BgL_auxz00_5176, BFALSE, BFALSE);
					}
				return BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00(BgL_auxz00_5173);
			}
		}

	}



/* file-name-unix-canonicalize */
	BGL_EXPORTED_DEF obj_t
		BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(obj_t BgL_namez00_41)
	{
		{	/* Llib/os.scm 901 */
			{	/* Llib/os.scm 902 */
				long BgL_lenz00_1699;

				BgL_lenz00_1699 = STRING_LENGTH(BgL_namez00_41);
				if ((BgL_lenz00_1699 == ((long) 0)))
					{	/* Llib/os.scm 904 */
						return BgL_namez00_41;
					}
				else
					{	/* Llib/os.scm 904 */
						if (
							(STRING_REF(BgL_namez00_41, ((long) 0)) == ((unsigned char) '~')))
							{	/* Llib/os.scm 906 */
								if ((BgL_lenz00_1699 == ((long) 1)))
									{	/* Llib/os.scm 908 */
										return
											BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00
											(BGl_getenvz00zz__osz00(BGl_string2727z00zz__osz00));
									}
								else
									{	/* Llib/os.scm 908 */
										if (
											(STRING_REF(BgL_namez00_41, ((long) 1)) ==
												(unsigned char) (FILE_SEPARATOR)))
											{	/* Llib/os.scm 911 */
												return
													BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00
													(string_append(BGl_getenvz00zz__osz00
														(BGl_string2727z00zz__osz00),
														c_substring(BgL_namez00_41, ((long) 1),
															BgL_lenz00_1699)));
											}
										else
											{	/* Llib/os.scm 918 */
												obj_t BgL_arg1631z00_1711;

												{	/* Llib/os.scm 918 */
													obj_t BgL_arg1632z00_1712;
													obj_t BgL_arg1633z00_1713;

													BgL_arg1632z00_1712 =
														BGl_getenvz00zz__osz00(BGl_string2727z00zz__osz00);
													BgL_arg1633z00_1713 =
														c_substring(BgL_namez00_41, ((long) 1),
														BgL_lenz00_1699);
													{	/* Llib/os.scm 918 */
														obj_t BgL_list1634z00_1714;

														BgL_list1634z00_1714 =
															MAKE_YOUNG_PAIR(BgL_arg1633z00_1713, BNIL);
														BgL_arg1631z00_1711 =
															BGl_makezd2filezd2pathz00zz__osz00
															(BgL_arg1632z00_1712, BGl_string2771z00zz__osz00,
															BgL_list1634z00_1714);
												}}
												return
													BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00
													(BgL_arg1631z00_1711);
											}
									}
							}
						else
							{	/* Llib/os.scm 920 */
								obj_t BgL_res2440z00_3342;

								{	/* Llib/os.scm 871 */
									obj_t BgL_arg1607z00_3334;

									{	/* Llib/os.scm 871 */

										BgL_arg1607z00_3334 =
											make_string(BgL_lenz00_1699, ((unsigned char) ' '));
									}
									BgL_res2440z00_3342 =
										BGl_filezd2namezd2canonicaliza7ezd2innerz75zz__osz00
										(BgL_namez00_41, BgL_arg1607z00_3334, ((long) 0));
								}
								return BgL_res2440z00_3342;
							}
					}
			}
		}

	}



/* &file-name-unix-canonicalize */
	obj_t BGl_z62filezd2namezd2unixzd2canonicaliza7ez17zz__osz00(obj_t
		BgL_envz00_3976, obj_t BgL_namez00_3977)
	{
		{	/* Llib/os.scm 901 */
			{	/* Llib/os.scm 902 */
				obj_t BgL_auxz00_5206;

				if (STRINGP(BgL_namez00_3977))
					{	/* Llib/os.scm 902 */
						BgL_auxz00_5206 = BgL_namez00_3977;
					}
				else
					{
						obj_t BgL_auxz00_5209;

						BgL_auxz00_5209 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 32848)), BGl_string2772z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_namez00_3977);
						FAILURE(BgL_auxz00_5209, BFALSE, BFALSE);
					}
				return
					BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00(BgL_auxz00_5206);
			}
		}

	}



/* file-name-unix-canonicalize! */
	BGL_EXPORTED_DEF obj_t
		BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00(obj_t BgL_namez00_42)
	{
		{	/* Llib/os.scm 925 */
			{	/* Llib/os.scm 926 */
				long BgL_lenz00_1718;

				BgL_lenz00_1718 = STRING_LENGTH(BgL_namez00_42);
				if ((BgL_lenz00_1718 == ((long) 0)))
					{	/* Llib/os.scm 928 */
						return BgL_namez00_42;
					}
				else
					{	/* Llib/os.scm 928 */
						if (
							(STRING_REF(BgL_namez00_42, ((long) 0)) == ((unsigned char) '~')))
							{	/* Llib/os.scm 930 */
								return
									BGl_filezd2namezd2unixzd2canonicaliza7ez75zz__osz00
									(BgL_namez00_42);
							}
						else
							{	/* Llib/os.scm 930 */
								return
									BGl_filezd2namezd2canonicaliza7ez12zb5zz__osz00
									(BgL_namez00_42);
							}
					}
			}
		}

	}



/* &file-name-unix-canonicalize! */
	obj_t BGl_z62filezd2namezd2unixzd2canonicaliza7ez12z05zz__osz00(obj_t
		BgL_envz00_3978, obj_t BgL_namez00_3979)
	{
		{	/* Llib/os.scm 925 */
			{	/* Llib/os.scm 926 */
				obj_t BgL_auxz00_5222;

				if (STRINGP(BgL_namez00_3979))
					{	/* Llib/os.scm 926 */
						BgL_auxz00_5222 = BgL_namez00_3979;
					}
				else
					{
						obj_t BgL_auxz00_5225;

						BgL_auxz00_5225 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 33724)), BGl_string2773z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_namez00_3979);
						FAILURE(BgL_auxz00_5225, BFALSE, BFALSE);
					}
				return
					BGl_filezd2namezd2unixzd2canonicaliza7ez12z67zz__osz00
					(BgL_auxz00_5222);
			}
		}

	}



/* relative-file-name */
	BGL_EXPORTED_DEF obj_t BGl_relativezd2filezd2namez00zz__osz00(obj_t
		BgL_namez00_43, obj_t BgL_basez00_44)
	{
		{	/* Llib/os.scm 938 */
			{
				obj_t BgL_fz00_1747;

				{	/* Llib/os.scm 947 */
					obj_t BgL_fz00_1724;

					BgL_fz00_1724 = BGl_filezd2namezd2ze3listze3zz__osz00(BgL_namez00_43);
					{	/* Llib/os.scm 948 */
						bool_t BgL_test3243z00_5231;

						{	/* Llib/os.scm 948 */
							obj_t BgL_arg1662z00_1746;

							BgL_arg1662z00_1746 = CAR(((obj_t) BgL_fz00_1724));
							{	/* Llib/os.scm 948 */
								bool_t BgL_res2451z00_3385;

								{	/* Llib/os.scm 948 */
									long BgL_l1z00_3372;

									BgL_l1z00_3372 = STRING_LENGTH(((obj_t) BgL_arg1662z00_1746));
									if ((BgL_l1z00_3372 == ((long) 0)))
										{	/* Llib/os.scm 948 */
											int BgL_arg1861z00_3375;

											{	/* Llib/os.scm 948 */
												char *BgL_auxz00_5241;
												char *BgL_tmpz00_5238;

												BgL_auxz00_5241 =
													BSTRING_TO_STRING(BGl_string2737z00zz__osz00);
												BgL_tmpz00_5238 =
													BSTRING_TO_STRING(((obj_t) BgL_arg1662z00_1746));
												BgL_arg1861z00_3375 =
													memcmp(BgL_tmpz00_5238, BgL_auxz00_5241,
													BgL_l1z00_3372);
											}
											BgL_res2451z00_3385 =
												((long) (BgL_arg1861z00_3375) == ((long) 0));
										}
									else
										{	/* Llib/os.scm 948 */
											BgL_res2451z00_3385 = ((bool_t) 0);
										}
								}
								BgL_test3243z00_5231 = BgL_res2451z00_3385;
							}
						}
						if (BgL_test3243z00_5231)
							{	/* Llib/os.scm 950 */
								obj_t BgL_g1060z00_1727;

								BgL_g1060z00_1727 =
									BGl_filezd2namezd2ze3listze3zz__osz00(BgL_basez00_44);
								{
									obj_t BgL_fz00_1729;
									obj_t BgL_bz00_1730;

									BgL_fz00_1729 = BgL_fz00_1724;
									BgL_bz00_1730 = BgL_g1060z00_1727;
								BgL_zc3z04anonymousza31646ze3z87_1731:
									if (NULLP(BgL_fz00_1729))
										{	/* Llib/os.scm 953 */
											return BGl_string2737z00zz__osz00;
										}
									else
										{	/* Llib/os.scm 953 */
											if (NULLP(BgL_bz00_1730))
												{	/* Llib/os.scm 955 */
													BgL_fz00_1747 = BgL_fz00_1729;
												BgL_zc3z04anonymousza31663ze3z87_1748:
													if (NULLP(CDR(((obj_t) BgL_fz00_1747))))
														{	/* Llib/os.scm 941 */
															return CAR(((obj_t) BgL_fz00_1747));
														}
													else
														{	/* Llib/os.scm 943 */
															bool_t BgL_test3248z00_5257;

															{	/* Llib/os.scm 943 */
																obj_t BgL_tmpz00_5258;

																{	/* Llib/os.scm 943 */
																	obj_t BgL_pairz00_3358;

																	BgL_pairz00_3358 =
																		CDR(((obj_t) BgL_fz00_1747));
																	BgL_tmpz00_5258 = CDR(BgL_pairz00_3358);
																}
																BgL_test3248z00_5257 = NULLP(BgL_tmpz00_5258);
															}
															if (BgL_test3248z00_5257)
																{	/* Llib/os.scm 944 */
																	obj_t BgL_arg1669z00_1753;
																	obj_t BgL_arg1672z00_1754;

																	BgL_arg1669z00_1753 =
																		CAR(((obj_t) BgL_fz00_1747));
																	{	/* Llib/os.scm 944 */
																		obj_t BgL_pairz00_3364;

																		BgL_pairz00_3364 =
																			CDR(((obj_t) BgL_fz00_1747));
																		BgL_arg1672z00_1754 = CAR(BgL_pairz00_3364);
																	}
																	return
																		BGl_makezd2filezd2namez00zz__osz00
																		(BgL_arg1669z00_1753, BgL_arg1672z00_1754);
																}
															else
																{	/* Llib/os.scm 946 */
																	obj_t BgL_runner1675z00_1757;

																	BgL_runner1675z00_1757 = BgL_fz00_1747;
																	{	/* Llib/os.scm 946 */
																		obj_t BgL_aux1673z00_1755;

																		BgL_aux1673z00_1755 =
																			CAR(BgL_runner1675z00_1757);
																		BgL_runner1675z00_1757 =
																			CDR(BgL_runner1675z00_1757);
																		{	/* Llib/os.scm 946 */
																			obj_t BgL_aux1674z00_1756;

																			BgL_aux1674z00_1756 =
																				CAR(BgL_runner1675z00_1757);
																			BgL_runner1675z00_1757 =
																				CDR(BgL_runner1675z00_1757);
																			return
																				BGl_makezd2filezd2pathz00zz__osz00
																				(BgL_aux1673z00_1755,
																				BgL_aux1674z00_1756,
																				BgL_runner1675z00_1757);
																		}
																	}
																}
														}
												}
											else
												{	/* Llib/os.scm 957 */
													bool_t BgL_test3249z00_5274;

													{	/* Llib/os.scm 957 */
														obj_t BgL_arg1660z00_1743;
														obj_t BgL_arg1661z00_1744;

														BgL_arg1660z00_1743 = CAR(((obj_t) BgL_fz00_1729));
														BgL_arg1661z00_1744 = CAR(((obj_t) BgL_bz00_1730));
														{	/* Llib/os.scm 957 */
															bool_t BgL_res2458z00_3405;

															{	/* Llib/os.scm 957 */
																long BgL_l1z00_3392;

																BgL_l1z00_3392 =
																	STRING_LENGTH(((obj_t) BgL_arg1660z00_1743));
																if (
																	(BgL_l1z00_3392 ==
																		STRING_LENGTH(
																			((obj_t) BgL_arg1661z00_1744))))
																	{	/* Llib/os.scm 957 */
																		int BgL_arg1861z00_3395;

																		{	/* Llib/os.scm 957 */
																			char *BgL_auxz00_5288;
																			char *BgL_tmpz00_5285;

																			BgL_auxz00_5288 =
																				BSTRING_TO_STRING(
																				((obj_t) BgL_arg1661z00_1744));
																			BgL_tmpz00_5285 =
																				BSTRING_TO_STRING(
																				((obj_t) BgL_arg1660z00_1743));
																			BgL_arg1861z00_3395 =
																				memcmp(BgL_tmpz00_5285, BgL_auxz00_5288,
																				BgL_l1z00_3392);
																		}
																		BgL_res2458z00_3405 =
																			(
																			(long) (BgL_arg1861z00_3395) ==
																			((long) 0));
																	}
																else
																	{	/* Llib/os.scm 957 */
																		BgL_res2458z00_3405 = ((bool_t) 0);
																	}
															}
															BgL_test3249z00_5274 = BgL_res2458z00_3405;
														}
													}
													if (BgL_test3249z00_5274)
														{	/* Llib/os.scm 960 */
															obj_t BgL_arg1652z00_1737;
															obj_t BgL_arg1654z00_1738;

															BgL_arg1652z00_1737 =
																CDR(((obj_t) BgL_fz00_1729));
															BgL_arg1654z00_1738 =
																CDR(((obj_t) BgL_bz00_1730));
															{
																obj_t BgL_bz00_5299;
																obj_t BgL_fz00_5298;

																BgL_fz00_5298 = BgL_arg1652z00_1737;
																BgL_bz00_5299 = BgL_arg1654z00_1738;
																BgL_bz00_1730 = BgL_bz00_5299;
																BgL_fz00_1729 = BgL_fz00_5298;
																goto BgL_zc3z04anonymousza31646ze3z87_1731;
															}
														}
													else
														{	/* Llib/os.scm 958 */
															obj_t BgL_arg1656z00_1739;

															{	/* Llib/os.scm 958 */
																obj_t BgL_arg1657z00_1740;

																{	/* Llib/os.scm 958 */
																	long BgL_arg1658z00_1741;

																	BgL_arg1658z00_1741 =
																		bgl_list_length(BgL_bz00_1730);
																	{	/* Llib/os.scm 958 */
																		obj_t BgL_list1659z00_1742;

																		BgL_list1659z00_1742 =
																			MAKE_YOUNG_PAIR
																			(BGl_string2771z00zz__osz00, BNIL);
																		BgL_arg1657z00_1740 =
																			BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00
																			((int) (BgL_arg1658z00_1741),
																			BgL_list1659z00_1742);
																}}
																BgL_arg1656z00_1739 =
																	BGl_appendzd221011zd2zz__osz00
																	(BgL_arg1657z00_1740, BgL_fz00_1729);
															}
															{
																obj_t BgL_fz00_5305;

																BgL_fz00_5305 = BgL_arg1656z00_1739;
																BgL_fz00_1747 = BgL_fz00_5305;
																goto BgL_zc3z04anonymousza31663ze3z87_1748;
															}
														}
												}
										}
								}
							}
						else
							{	/* Llib/os.scm 948 */
								return BgL_namez00_43;
							}
					}
				}
			}
		}

	}



/* &relative-file-name */
	obj_t BGl_z62relativezd2filezd2namez62zz__osz00(obj_t BgL_envz00_3980,
		obj_t BgL_namez00_3981, obj_t BgL_basez00_3982)
	{
		{	/* Llib/os.scm 938 */
			{	/* Llib/os.scm 941 */
				obj_t BgL_auxz00_5313;
				obj_t BgL_auxz00_5306;

				if (STRINGP(BgL_basez00_3982))
					{	/* Llib/os.scm 941 */
						BgL_auxz00_5313 = BgL_basez00_3982;
					}
				else
					{
						obj_t BgL_auxz00_5316;

						BgL_auxz00_5316 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 34216)), BGl_string2774z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_basez00_3982);
						FAILURE(BgL_auxz00_5316, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_namez00_3981))
					{	/* Llib/os.scm 941 */
						BgL_auxz00_5306 = BgL_namez00_3981;
					}
				else
					{
						obj_t BgL_auxz00_5309;

						BgL_auxz00_5309 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 34216)), BGl_string2774z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_namez00_3981);
						FAILURE(BgL_auxz00_5309, BFALSE, BFALSE);
					}
				return
					BGl_relativezd2filezd2namez00zz__osz00(BgL_auxz00_5306,
					BgL_auxz00_5313);
			}
		}

	}



/* make-static-library-name */
	BGL_EXPORTED_DEF obj_t BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(obj_t
		BgL_libnamez00_45)
	{
		{	/* Llib/os.scm 967 */
			return
				string_append_3(BgL_libnamez00_45, BGl_string2710z00zz__osz00,
				string_to_bstring(STATIC_LIB_SUFFIX));
		}

	}



/* &make-static-library-name */
	obj_t BGl_z62makezd2staticzd2libraryzd2namezb0zz__osz00(obj_t BgL_envz00_3983,
		obj_t BgL_libnamez00_3984)
	{
		{	/* Llib/os.scm 967 */
			{	/* Llib/os.scm 968 */
				obj_t BgL_auxz00_5323;

				if (STRINGP(BgL_libnamez00_3984))
					{	/* Llib/os.scm 968 */
						BgL_auxz00_5323 = BgL_libnamez00_3984;
					}
				else
					{
						obj_t BgL_auxz00_5326;

						BgL_auxz00_5326 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 35100)), BGl_string2775z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_libnamez00_3984);
						FAILURE(BgL_auxz00_5326, BFALSE, BFALSE);
					}
				return BGl_makezd2staticzd2libraryzd2namezd2zz__osz00(BgL_auxz00_5323);
			}
		}

	}



/* make-shared-library-name */
	BGL_EXPORTED_DEF obj_t BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(obj_t
		BgL_libnamez00_46)
	{
		{	/* Llib/os.scm 975 */
			return
				string_append_3(BgL_libnamez00_46, BGl_string2710z00zz__osz00,
				string_to_bstring(SHARED_LIB_SUFFIX));
		}

	}



/* &make-shared-library-name */
	obj_t BGl_z62makezd2sharedzd2libraryzd2namezb0zz__osz00(obj_t BgL_envz00_3985,
		obj_t BgL_libnamez00_3986)
	{
		{	/* Llib/os.scm 975 */
			{	/* Llib/os.scm 976 */
				obj_t BgL_auxz00_5333;

				if (STRINGP(BgL_libnamez00_3986))
					{	/* Llib/os.scm 976 */
						BgL_auxz00_5333 = BgL_libnamez00_3986;
					}
				else
					{
						obj_t BgL_auxz00_5336;

						BgL_auxz00_5336 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 35585)), BGl_string2776z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_libnamez00_3986);
						FAILURE(BgL_auxz00_5336, BFALSE, BFALSE);
					}
				return BGl_makezd2sharedzd2libraryzd2namezd2zz__osz00(BgL_auxz00_5333);
			}
		}

	}



/* sleep */
	BGL_EXPORTED_DEF obj_t BGl_sleepz00zz__osz00(long BgL_msz00_47)
	{
		{	/* Llib/os.scm 981 */
			bgl_sleep(BgL_msz00_47);
			BUNSPEC;
			return BINT(BgL_msz00_47);
		}

	}



/* &sleep */
	obj_t BGl_z62sleepz62zz__osz00(obj_t BgL_envz00_3987, obj_t BgL_msz00_3988)
	{
		{	/* Llib/os.scm 981 */
			{	/* Llib/os.scm 982 */
				long BgL_auxz00_5343;

				{	/* Llib/os.scm 982 */
					obj_t BgL_tmpz00_5344;

					if (INTEGERP(BgL_msz00_3988))
						{	/* Llib/os.scm 982 */
							BgL_tmpz00_5344 = BgL_msz00_3988;
						}
					else
						{
							obj_t BgL_auxz00_5347;

							BgL_auxz00_5347 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 35907)), BGl_string2777z00zz__osz00,
								BGl_string2724z00zz__osz00, BgL_msz00_3988);
							FAILURE(BgL_auxz00_5347, BFALSE, BFALSE);
						}
					BgL_auxz00_5343 = (long) CINT(BgL_tmpz00_5344);
				}
				return BGl_sleepz00zz__osz00(BgL_auxz00_5343);
			}
		}

	}



/* _dynamic-load */
	obj_t BGl__dynamiczd2loadzd2zz__osz00(obj_t BgL_env1137z00_52,
		obj_t BgL_opt1136z00_51)
	{
		{	/* Llib/os.scm 1002 */
			{	/* Llib/os.scm 1002 */
				obj_t BgL_g1138z00_1761;

				BgL_g1138z00_1761 = VECTOR_REF(BgL_opt1136z00_51, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1136z00_51))
					{
					case ((long) 1):

						{	/* Llib/os.scm 1002 */

							{	/* Llib/os.scm 1002 */
								obj_t BgL_auxz00_5354;

								if (STRINGP(BgL_g1138z00_1761))
									{	/* Llib/os.scm 1002 */
										BgL_auxz00_5354 = BgL_g1138z00_1761;
									}
								else
									{
										obj_t BgL_auxz00_5357;

										BgL_auxz00_5357 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2722z00zz__osz00, BINT(((long) 36966)),
											BGl_string2778z00zz__osz00, BGl_string2730z00zz__osz00,
											BgL_g1138z00_1761);
										FAILURE(BgL_auxz00_5357, BFALSE, BFALSE);
									}
								return
									BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_5354,
									string_to_bstring(BGL_DYNAMIC_LOAD_INIT), BFALSE);
							}
						}
						break;
					case ((long) 2):

						{	/* Llib/os.scm 1002 */
							obj_t BgL_initz00_1767;

							BgL_initz00_1767 = VECTOR_REF(BgL_opt1136z00_51, ((long) 1));
							{	/* Llib/os.scm 1002 */

								{	/* Llib/os.scm 1002 */
									obj_t BgL_auxz00_5364;

									if (STRINGP(BgL_g1138z00_1761))
										{	/* Llib/os.scm 1002 */
											BgL_auxz00_5364 = BgL_g1138z00_1761;
										}
									else
										{
											obj_t BgL_auxz00_5367;

											BgL_auxz00_5367 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2722z00zz__osz00, BINT(((long) 36966)),
												BGl_string2778z00zz__osz00, BGl_string2730z00zz__osz00,
												BgL_g1138z00_1761);
											FAILURE(BgL_auxz00_5367, BFALSE, BFALSE);
										}
									return
										BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_5364,
										BgL_initz00_1767, BFALSE);
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Llib/os.scm 1002 */
							obj_t BgL_initz00_1769;

							BgL_initz00_1769 = VECTOR_REF(BgL_opt1136z00_51, ((long) 1));
							{	/* Llib/os.scm 1002 */
								obj_t BgL_modulez00_1770;

								BgL_modulez00_1770 = VECTOR_REF(BgL_opt1136z00_51, ((long) 2));
								{	/* Llib/os.scm 1002 */

									{	/* Llib/os.scm 1002 */
										obj_t BgL_auxz00_5374;

										if (STRINGP(BgL_g1138z00_1761))
											{	/* Llib/os.scm 1002 */
												BgL_auxz00_5374 = BgL_g1138z00_1761;
											}
										else
											{
												obj_t BgL_auxz00_5377;

												BgL_auxz00_5377 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2722z00zz__osz00, BINT(((long) 36966)),
													BGl_string2778z00zz__osz00,
													BGl_string2730z00zz__osz00, BgL_g1138z00_1761);
												FAILURE(BgL_auxz00_5377, BFALSE, BFALSE);
											}
										return
											BGl_dynamiczd2loadzd2zz__osz00(BgL_auxz00_5374,
											BgL_initz00_1769, BgL_modulez00_1770);
									}
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



/* dynamic-load */
	BGL_EXPORTED_DEF obj_t BGl_dynamiczd2loadzd2zz__osz00(obj_t BgL_libz00_48,
		obj_t BgL_initz00_49, obj_t BgL_modulez00_50)
	{
		{	/* Llib/os.scm 1002 */
			{	/* Llib/os.scm 1010 */
				obj_t BgL_flibz00_1773;
				obj_t BgL_modz00_1774;

				BgL_flibz00_1773 =
					BGl_findzd2filezf2pathz20zz__osz00(BgL_libz00_48,
					BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00);
				if (CBOOL(BgL_modulez00_50))
					{	/* Llib/os.scm 1018 */
						obj_t BgL_arg1699z00_1790;

						{	/* Llib/os.scm 1018 */
							obj_t BgL_res2459z00_3410;

							BgL_res2459z00_3410 =
								SYMBOL_TO_STRING(((obj_t) BgL_modulez00_50));
							BgL_arg1699z00_1790 = BgL_res2459z00_3410;
						}
						BgL_modz00_1774 =
							bigloo_module_mangle(BGl_string2779z00zz__osz00,
							BgL_arg1699z00_1790);
					}
				else
					{	/* Llib/os.scm 1014 */
						BgL_modz00_1774 = BGl_string2737z00zz__osz00;
					}
				if (STRINGP(BgL_flibz00_1773))
					{	/* Llib/os.scm 1024 */
						obj_t BgL_iniz00_1776;

						if (CBOOL(BgL_initz00_49))
							{	/* Llib/os.scm 1024 */
								BgL_iniz00_1776 = BgL_initz00_49;
							}
						else
							{	/* Llib/os.scm 1024 */
								BgL_iniz00_1776 = BGl_string2737z00zz__osz00;
							}
						{	/* Llib/os.scm 1024 */
							obj_t BgL_valz00_1777;

							BgL_valz00_1777 =
								bgl_dload(BSTRING_TO_STRING(BgL_flibz00_1773),
								BSTRING_TO_STRING(BgL_iniz00_1776),
								BSTRING_TO_STRING(BgL_modz00_1774));
							{	/* Llib/os.scm 1025 */

								if ((BgL_valz00_1777 == BGl_symbol2780z00zz__osz00))
									{	/* Llib/os.scm 1026 */
										return
											BGl_errorz00zz__errorz00(BGl_string2782z00zz__osz00,
											BGl_string2783z00zz__osz00, BgL_flibz00_1773);
									}
								else
									{	/* Llib/os.scm 1026 */
										if ((BgL_valz00_1777 == BGl_symbol2784z00zz__osz00))
											{	/* Llib/os.scm 1030 */
												char *BgL_arg1691z00_1781;

												BgL_arg1691z00_1781 = bgl_dload_error();
												{	/* Llib/os.scm 1005 */
													obj_t BgL_arg1701z00_3416;

													BgL_arg1701z00_3416 =
														string_append(BGl_string2782z00zz__osz00,
														BgL_flibz00_1773);
													return BGl_errorz00zz__errorz00(BgL_arg1701z00_3416,
														string_to_bstring(BgL_arg1691z00_1781),
														BgL_flibz00_1773);
												}
											}
										else
											{	/* Llib/os.scm 1026 */
												if ((BgL_valz00_1777 == BGl_symbol2786z00zz__osz00))
													{	/* Llib/os.scm 1033 */
														bool_t BgL_test3265z00_5409;

														if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00
															(BgL_initz00_49,
																string_to_bstring(BGL_DYNAMIC_LOAD_INIT)))
															{	/* Llib/os.scm 1033 */
																if (CBOOL(BgL_modulez00_50))
																	{	/* Llib/os.scm 1033 */
																		BgL_test3265z00_5409 = ((bool_t) 0);
																	}
																else
																	{	/* Llib/os.scm 1033 */
																		BgL_test3265z00_5409 = ((bool_t) 1);
																	}
															}
														else
															{	/* Llib/os.scm 1033 */
																BgL_test3265z00_5409 = ((bool_t) 0);
															}
														if (BgL_test3265z00_5409)
															{	/* Llib/os.scm 1034 */
																obj_t BgL_arg1695z00_1785;

																BgL_arg1695z00_1785 =
																	string_append(BGl_string2788z00zz__osz00,
																	BgL_flibz00_1773);
																{	/* Llib/os.scm 1034 */
																	obj_t BgL_list1696z00_1786;

																	{	/* Llib/os.scm 1034 */
																		obj_t BgL_arg1697z00_1787;

																		{	/* Llib/os.scm 1034 */
																			obj_t BgL_arg1698z00_1788;

																			BgL_arg1698z00_1788 =
																				MAKE_YOUNG_PAIR(BgL_initz00_49, BNIL);
																			BgL_arg1697z00_1787 =
																				MAKE_YOUNG_PAIR
																				(BGl_string2789z00zz__osz00,
																				BgL_arg1698z00_1788);
																		}
																		BgL_list1696z00_1786 =
																			MAKE_YOUNG_PAIR(BgL_arg1695z00_1785,
																			BgL_arg1697z00_1787);
																	}
																	return
																		BGl_warningz00zz__errorz00
																		(BgL_list1696z00_1786);
																}
															}
														else
															{	/* Llib/os.scm 1033 */
																if (CBOOL(BgL_initz00_49))
																	{	/* Llib/os.scm 1037 */
																		return
																			BGl_errorz00zz__errorz00(string_append
																			(BGl_string2782z00zz__osz00,
																				BgL_flibz00_1773),
																			BGl_string2790z00zz__osz00,
																			BgL_initz00_49);
																	}
																else
																	{	/* Llib/os.scm 1037 */
																		return BUNSPEC;
																	}
															}
													}
												else
													{	/* Llib/os.scm 1026 */
														return BgL_valz00_1777;
													}
											}
									}
							}
						}
					}
				else
					{	/* Llib/os.scm 1022 */
						return
							BGl_errorz00zz__errorz00(BGl_string2782z00zz__osz00,
							BGl_string2791z00zz__osz00, BgL_libz00_48);
					}
			}
		}

	}



/* dynamic-unload */
	BGL_EXPORTED_DEF obj_t BGl_dynamiczd2unloadzd2zz__osz00(obj_t BgL_libz00_53)
	{
		{	/* Llib/os.scm 1049 */
			{	/* Llib/os.scm 1050 */
				obj_t BgL_flibz00_1801;

				BgL_flibz00_1801 =
					BGl_findzd2filezf2pathz20zz__osz00(BgL_libz00_53,
					BGl_za2dynamiczd2loadzd2pathza2z00zz__osz00);
				if (STRINGP(BgL_flibz00_1801))
					{	/* Llib/os.scm 1059 */
						int BgL_arg1704z00_1803;

						BgL_arg1704z00_1803 = bgl_dunload(BgL_flibz00_1801);
						return BBOOL(((long) (BgL_arg1704z00_1803) == ((long) 0)));
					}
				else
					{	/* Llib/os.scm 1057 */
						return
							BGl_errorz00zz__errorz00(BGl_string2792z00zz__osz00,
							BGl_string2791z00zz__osz00, BgL_libz00_53);
					}
			}
		}

	}



/* &dynamic-unload */
	obj_t BGl_z62dynamiczd2unloadzb0zz__osz00(obj_t BgL_envz00_3989,
		obj_t BgL_libz00_3990)
	{
		{	/* Llib/os.scm 1049 */
			{	/* Llib/os.scm 1050 */
				obj_t BgL_auxz00_5433;

				if (STRINGP(BgL_libz00_3990))
					{	/* Llib/os.scm 1050 */
						BgL_auxz00_5433 = BgL_libz00_3990;
					}
				else
					{
						obj_t BgL_auxz00_5436;

						BgL_auxz00_5436 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 38428)), BGl_string2793z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_libz00_3990);
						FAILURE(BgL_auxz00_5436, BFALSE, BFALSE);
					}
				return BGl_dynamiczd2unloadzd2zz__osz00(BgL_auxz00_5433);
			}
		}

	}



/* _dynamic-load-symbol */
	obj_t BGl__dynamiczd2loadzd2symbolz00zz__osz00(obj_t BgL_env1142z00_58,
		obj_t BgL_opt1141z00_57)
	{
		{	/* Llib/os.scm 1064 */
			{	/* Llib/os.scm 1064 */
				obj_t BgL_g1143z00_1804;
				obj_t BgL_g1144z00_1805;

				BgL_g1143z00_1804 = VECTOR_REF(BgL_opt1141z00_57, ((long) 0));
				BgL_g1144z00_1805 = VECTOR_REF(BgL_opt1141z00_57, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1141z00_57))
					{
					case ((long) 2):

						{	/* Llib/os.scm 1064 */

							{	/* Llib/os.scm 1064 */
								obj_t BgL_libz00_3423;
								obj_t BgL_namez00_3424;

								if (STRINGP(BgL_g1143z00_1804))
									{	/* Llib/os.scm 1064 */
										BgL_libz00_3423 = BgL_g1143z00_1804;
									}
								else
									{
										obj_t BgL_auxz00_5445;

										BgL_auxz00_5445 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2722z00zz__osz00, BINT(((long) 38937)),
											BGl_string2794z00zz__osz00, BGl_string2730z00zz__osz00,
											BgL_g1143z00_1804);
										FAILURE(BgL_auxz00_5445, BFALSE, BFALSE);
									}
								if (STRINGP(BgL_g1144z00_1805))
									{	/* Llib/os.scm 1064 */
										BgL_namez00_3424 = BgL_g1144z00_1805;
									}
								else
									{
										obj_t BgL_auxz00_5451;

										BgL_auxz00_5451 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2722z00zz__osz00, BINT(((long) 38937)),
											BGl_string2794z00zz__osz00, BGl_string2730z00zz__osz00,
											BgL_g1144z00_1805);
										FAILURE(BgL_auxz00_5451, BFALSE, BFALSE);
									}
								return
									bgl_dlsym(BgL_libz00_3423, BgL_namez00_3424,
									BgL_namez00_3424);
							}
						}
						break;
					case ((long) 3):

						{	/* Llib/os.scm 1064 */
							obj_t BgL_modulez00_1810;

							BgL_modulez00_1810 = VECTOR_REF(BgL_opt1141z00_57, ((long) 2));
							{	/* Llib/os.scm 1064 */

								{	/* Llib/os.scm 1064 */
									obj_t BgL_libz00_3428;
									obj_t BgL_namez00_3429;

									if (STRINGP(BgL_g1143z00_1804))
										{	/* Llib/os.scm 1064 */
											BgL_libz00_3428 = BgL_g1143z00_1804;
										}
									else
										{
											obj_t BgL_auxz00_5459;

											BgL_auxz00_5459 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2722z00zz__osz00, BINT(((long) 38937)),
												BGl_string2794z00zz__osz00, BGl_string2730z00zz__osz00,
												BgL_g1143z00_1804);
											FAILURE(BgL_auxz00_5459, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1144z00_1805))
										{	/* Llib/os.scm 1064 */
											BgL_namez00_3429 = BgL_g1144z00_1805;
										}
									else
										{
											obj_t BgL_auxz00_5465;

											BgL_auxz00_5465 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2722z00zz__osz00, BINT(((long) 38937)),
												BGl_string2794z00zz__osz00, BGl_string2730z00zz__osz00,
												BgL_g1144z00_1805);
											FAILURE(BgL_auxz00_5465, BFALSE, BFALSE);
										}
									{	/* Llib/os.scm 1065 */
										obj_t BgL_symz00_3430;

										if (STRINGP(BgL_modulez00_1810))
											{	/* Llib/os.scm 1065 */
												BgL_symz00_3430 =
													bigloo_module_mangle(BgL_namez00_3429,
													BgL_modulez00_1810);
											}
										else
											{	/* Llib/os.scm 1065 */
												BgL_symz00_3430 = BgL_namez00_3429;
											}
										return
											bgl_dlsym(BgL_libz00_3428, BgL_namez00_3429,
											BgL_symz00_3430);
									}
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



/* dynamic-load-symbol */
	BGL_EXPORTED_DEF obj_t BGl_dynamiczd2loadzd2symbolz00zz__osz00(obj_t
		BgL_libz00_54, obj_t BgL_namez00_55, obj_t BgL_modulez00_56)
	{
		{	/* Llib/os.scm 1064 */
			{	/* Llib/os.scm 1065 */
				obj_t BgL_symz00_3433;

				if (STRINGP(BgL_modulez00_56))
					{	/* Llib/os.scm 1065 */
						BgL_symz00_3433 =
							bigloo_module_mangle(BgL_namez00_55, BgL_modulez00_56);
					}
				else
					{	/* Llib/os.scm 1065 */
						BgL_symz00_3433 = BgL_namez00_55;
					}
				return bgl_dlsym(BgL_libz00_54, BgL_namez00_55, BgL_symz00_3433);
			}
		}

	}



/* dynamic-load-symbol-get */
	BGL_EXPORTED_DEF obj_t BGl_dynamiczd2loadzd2symbolzd2getzd2zz__osz00(obj_t
		BgL_symz00_59)
	{
		{	/* Llib/os.scm 1071 */
			return bgl_dlsym_get(BgL_symz00_59);
		}

	}



/* &dynamic-load-symbol-get */
	obj_t BGl_z62dynamiczd2loadzd2symbolzd2getzb0zz__osz00(obj_t BgL_envz00_3991,
		obj_t BgL_symz00_3992)
	{
		{	/* Llib/os.scm 1071 */
			{	/* Llib/os.scm 1072 */
				obj_t BgL_auxz00_5480;

				if (CUSTOMP(BgL_symz00_3992))
					{	/* Llib/os.scm 1072 */
						BgL_auxz00_5480 = BgL_symz00_3992;
					}
				else
					{
						obj_t BgL_auxz00_5483;

						BgL_auxz00_5483 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 39385)), BGl_string2795z00zz__osz00,
							BGl_string2796z00zz__osz00, BgL_symz00_3992);
						FAILURE(BgL_auxz00_5483, BFALSE, BFALSE);
					}
				return BGl_dynamiczd2loadzd2symbolzd2getzd2zz__osz00(BgL_auxz00_5480);
			}
		}

	}



/* dynamic-load-symbol-set */
	BGL_EXPORTED_DEF obj_t BGl_dynamiczd2loadzd2symbolzd2setzd2zz__osz00(obj_t
		BgL_symz00_60, obj_t BgL_valz00_61)
	{
		{	/* Llib/os.scm 1077 */
			return bgl_dlsym_set(BgL_symz00_60, BgL_valz00_61);
		}

	}



/* &dynamic-load-symbol-set */
	obj_t BGl_z62dynamiczd2loadzd2symbolzd2setzb0zz__osz00(obj_t BgL_envz00_3993,
		obj_t BgL_symz00_3994, obj_t BgL_valz00_3995)
	{
		{	/* Llib/os.scm 1077 */
			{	/* Llib/os.scm 1078 */
				obj_t BgL_auxz00_5489;

				if (CUSTOMP(BgL_symz00_3994))
					{	/* Llib/os.scm 1078 */
						BgL_auxz00_5489 = BgL_symz00_3994;
					}
				else
					{
						obj_t BgL_auxz00_5492;

						BgL_auxz00_5492 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 39695)), BGl_string2797z00zz__osz00,
							BGl_string2796z00zz__osz00, BgL_symz00_3994);
						FAILURE(BgL_auxz00_5492, BFALSE, BFALSE);
					}
				return
					BGl_dynamiczd2loadzd2symbolzd2setzd2zz__osz00(BgL_auxz00_5489,
					BgL_valz00_3995);
			}
		}

	}



/* unix-path->list */
	BGL_EXPORTED_DEF obj_t BGl_unixzd2pathzd2ze3listze3zz__osz00(obj_t
		BgL_strz00_62)
	{
		{	/* Llib/os.scm 1083 */
			{	/* Llib/os.scm 1084 */
				long BgL_stopz00_1813;

				BgL_stopz00_1813 = STRING_LENGTH(BgL_strz00_62);
				{
					long BgL_markz00_1817;
					long BgL_rz00_1818;
					obj_t BgL_resz00_1819;

					BgL_markz00_1817 = ((long) 0);
					BgL_rz00_1818 = ((long) 0);
					BgL_resz00_1819 = BNIL;
				BgL_zc3z04anonymousza31707ze3z87_1820:
					if ((BgL_stopz00_1813 == BgL_rz00_1818))
						{	/* Llib/os.scm 1091 */
							obj_t BgL_resz00_1822;

							if ((BgL_markz00_1817 < BgL_rz00_1818))
								{	/* Llib/os.scm 1091 */
									BgL_resz00_1822 =
										MAKE_YOUNG_PAIR(c_substring(BgL_strz00_62, BgL_markz00_1817,
											BgL_rz00_1818), BgL_resz00_1819);
								}
							else
								{	/* Llib/os.scm 1091 */
									BgL_resz00_1822 = BgL_resz00_1819;
								}
							return bgl_reverse_bang(BgL_resz00_1822);
						}
					else
						{	/* Llib/os.scm 1090 */
							if (
								(STRING_REF(BgL_strz00_62, BgL_rz00_1818) ==
									(unsigned char) (PATH_SEPARATOR)))
								{	/* Llib/os.scm 1095 */
									if ((BgL_markz00_1817 < BgL_rz00_1818))
										{	/* Llib/os.scm 1097 */
											long BgL_arg1716z00_1828;
											long BgL_arg1717z00_1829;
											obj_t BgL_arg1719z00_1830;

											BgL_arg1716z00_1828 = (((long) 1) + BgL_rz00_1818);
											BgL_arg1717z00_1829 = (((long) 1) + BgL_rz00_1818);
											BgL_arg1719z00_1830 =
												MAKE_YOUNG_PAIR(c_substring(BgL_strz00_62,
													BgL_markz00_1817, BgL_rz00_1818), BgL_resz00_1819);
											{
												obj_t BgL_resz00_5517;
												long BgL_rz00_5516;
												long BgL_markz00_5515;

												BgL_markz00_5515 = BgL_arg1716z00_1828;
												BgL_rz00_5516 = BgL_arg1717z00_1829;
												BgL_resz00_5517 = BgL_arg1719z00_1830;
												BgL_resz00_1819 = BgL_resz00_5517;
												BgL_rz00_1818 = BgL_rz00_5516;
												BgL_markz00_1817 = BgL_markz00_5515;
												goto BgL_zc3z04anonymousza31707ze3z87_1820;
											}
										}
									else
										{
											long BgL_rz00_5520;
											long BgL_markz00_5518;

											BgL_markz00_5518 = (((long) 1) + BgL_rz00_1818);
											BgL_rz00_5520 = (((long) 1) + BgL_rz00_1818);
											BgL_rz00_1818 = BgL_rz00_5520;
											BgL_markz00_1817 = BgL_markz00_5518;
											goto BgL_zc3z04anonymousza31707ze3z87_1820;
										}
								}
							else
								{
									long BgL_rz00_5522;

									BgL_rz00_5522 = (((long) 1) + BgL_rz00_1818);
									BgL_rz00_1818 = BgL_rz00_5522;
									goto BgL_zc3z04anonymousza31707ze3z87_1820;
								}
						}
				}
			}
		}

	}



/* &unix-path->list */
	obj_t BGl_z62unixzd2pathzd2ze3listz81zz__osz00(obj_t BgL_envz00_3996,
		obj_t BgL_strz00_3997)
	{
		{	/* Llib/os.scm 1083 */
			{	/* Llib/os.scm 1084 */
				obj_t BgL_auxz00_5524;

				if (STRINGP(BgL_strz00_3997))
					{	/* Llib/os.scm 1084 */
						BgL_auxz00_5524 = BgL_strz00_3997;
					}
				else
					{
						obj_t BgL_auxz00_5527;

						BgL_auxz00_5527 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 39977)), BGl_string2798z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_strz00_3997);
						FAILURE(BgL_auxz00_5527, BFALSE, BFALSE);
					}
				return BGl_unixzd2pathzd2ze3listze3zz__osz00(BgL_auxz00_5524);
			}
		}

	}



/* getuid */
	BGL_EXPORTED_DEF int BGl_getuidz00zz__osz00()
	{
		{	/* Llib/os.scm 1105 */
			return bgl_getuid();
		}

	}



/* &getuid */
	obj_t BGl_z62getuidz62zz__osz00(obj_t BgL_envz00_3998)
	{
		{	/* Llib/os.scm 1105 */
			return BINT(BGl_getuidz00zz__osz00());
		}

	}



/* setuid */
	BGL_EXPORTED_DEF obj_t BGl_setuidz00zz__osz00(int BgL_uidz00_63)
	{
		{	/* Llib/os.scm 1115 */
			return BINT(bgl_setuid(BgL_uidz00_63));
		}

	}



/* &setuid */
	obj_t BGl_z62setuidz62zz__osz00(obj_t BgL_envz00_3999, obj_t BgL_uidz00_4000)
	{
		{	/* Llib/os.scm 1115 */
			{	/* Llib/os.scm 1118 */
				int BgL_auxz00_5537;

				{	/* Llib/os.scm 1118 */
					obj_t BgL_tmpz00_5538;

					if (INTEGERP(BgL_uidz00_4000))
						{	/* Llib/os.scm 1118 */
							BgL_tmpz00_5538 = BgL_uidz00_4000;
						}
					else
						{
							obj_t BgL_auxz00_5541;

							BgL_auxz00_5541 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 41032)), BGl_string2799z00zz__osz00,
								BGl_string2724z00zz__osz00, BgL_uidz00_4000);
							FAILURE(BgL_auxz00_5541, BFALSE, BFALSE);
						}
					BgL_auxz00_5537 = CINT(BgL_tmpz00_5538);
				}
				return BGl_setuidz00zz__osz00(BgL_auxz00_5537);
			}
		}

	}



/* getgid */
	BGL_EXPORTED_DEF int BGl_getgidz00zz__osz00()
	{
		{	/* Llib/os.scm 1125 */
			return bgl_getgid();
		}

	}



/* &getgid */
	obj_t BGl_z62getgidz62zz__osz00(obj_t BgL_envz00_4001)
	{
		{	/* Llib/os.scm 1125 */
			return BINT(BGl_getgidz00zz__osz00());
		}

	}



/* setgid */
	BGL_EXPORTED_DEF obj_t BGl_setgidz00zz__osz00(int BgL_uidz00_64)
	{
		{	/* Llib/os.scm 1135 */
			return BINT(bgl_setgid(BgL_uidz00_64));
		}

	}



/* &setgid */
	obj_t BGl_z62setgidz62zz__osz00(obj_t BgL_envz00_4002, obj_t BgL_uidz00_4003)
	{
		{	/* Llib/os.scm 1135 */
			{	/* Llib/os.scm 1138 */
				int BgL_auxz00_5552;

				{	/* Llib/os.scm 1138 */
					obj_t BgL_tmpz00_5553;

					if (INTEGERP(BgL_uidz00_4003))
						{	/* Llib/os.scm 1138 */
							BgL_tmpz00_5553 = BgL_uidz00_4003;
						}
					else
						{
							obj_t BgL_auxz00_5556;

							BgL_auxz00_5556 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 41713)), BGl_string2800z00zz__osz00,
								BGl_string2724z00zz__osz00, BgL_uidz00_4003);
							FAILURE(BgL_auxz00_5556, BFALSE, BFALSE);
						}
					BgL_auxz00_5552 = CINT(BgL_tmpz00_5553);
				}
				return BGl_setgidz00zz__osz00(BgL_auxz00_5552);
			}
		}

	}



/* getpwnam */
	BGL_EXPORTED_DEF obj_t BGl_getpwnamz00zz__osz00(obj_t BgL_namez00_65)
	{
		{	/* Llib/os.scm 1145 */
			return bgl_getpwnam(BSTRING_TO_STRING(BgL_namez00_65));
		}

	}



/* &getpwnam */
	obj_t BGl_z62getpwnamz62zz__osz00(obj_t BgL_envz00_4004,
		obj_t BgL_namez00_4005)
	{
		{	/* Llib/os.scm 1145 */
			{	/* Llib/os.scm 1148 */
				obj_t BgL_auxz00_5564;

				if (STRINGP(BgL_namez00_4005))
					{	/* Llib/os.scm 1148 */
						BgL_auxz00_5564 = BgL_namez00_4005;
					}
				else
					{
						obj_t BgL_auxz00_5567;

						BgL_auxz00_5567 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 42083)), BGl_string2801z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_namez00_4005);
						FAILURE(BgL_auxz00_5567, BFALSE, BFALSE);
					}
				return BGl_getpwnamz00zz__osz00(BgL_auxz00_5564);
			}
		}

	}



/* getpwuid */
	BGL_EXPORTED_DEF obj_t BGl_getpwuidz00zz__osz00(int BgL_uidz00_66)
	{
		{	/* Llib/os.scm 1155 */
			return bgl_getpwuid(BgL_uidz00_66);
		}

	}



/* &getpwuid */
	obj_t BGl_z62getpwuidz62zz__osz00(obj_t BgL_envz00_4006,
		obj_t BgL_uidz00_4007)
	{
		{	/* Llib/os.scm 1155 */
			{	/* Llib/os.scm 1158 */
				int BgL_auxz00_5573;

				{	/* Llib/os.scm 1158 */
					obj_t BgL_tmpz00_5574;

					if (INTEGERP(BgL_uidz00_4007))
						{	/* Llib/os.scm 1158 */
							BgL_tmpz00_5574 = BgL_uidz00_4007;
						}
					else
						{
							obj_t BgL_auxz00_5577;

							BgL_auxz00_5577 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 42411)), BGl_string2802z00zz__osz00,
								BGl_string2724z00zz__osz00, BgL_uidz00_4007);
							FAILURE(BgL_auxz00_5577, BFALSE, BFALSE);
						}
					BgL_auxz00_5573 = CINT(BgL_tmpz00_5574);
				}
				return BGl_getpwuidz00zz__osz00(BgL_auxz00_5573);
			}
		}

	}



/* getpid */
	BGL_EXPORTED_DEF int BGl_getpidz00zz__osz00()
	{
		{	/* Llib/os.scm 1164 */
			return getpid();
		}

	}



/* &getpid */
	obj_t BGl_z62getpidz62zz__osz00(obj_t BgL_envz00_4008)
	{
		{	/* Llib/os.scm 1164 */
			return BINT(BGl_getpidz00zz__osz00());
		}

	}



/* getppid */
	BGL_EXPORTED_DEF int BGl_getppidz00zz__osz00()
	{
		{	/* Llib/os.scm 1172 */
			return getppid();
		}

	}



/* &getppid */
	obj_t BGl_z62getppidz62zz__osz00(obj_t BgL_envz00_4009)
	{
		{	/* Llib/os.scm 1172 */
			return BINT(BGl_getppidz00zz__osz00());
		}

	}



/* getgroups */
	BGL_EXPORTED_DEF obj_t BGl_getgroupsz00zz__osz00()
	{
		{	/* Llib/os.scm 1180 */
			return bgl_getgroups();
		}

	}



/* &getgroups */
	obj_t BGl_z62getgroupsz62zz__osz00(obj_t BgL_envz00_4010)
	{
		{	/* Llib/os.scm 1180 */
			return BGl_getgroupsz00zz__osz00();
		}

	}



/* ioctl-register-request! */
	BGL_EXPORTED_DEF obj_t BGl_ioctlzd2registerzd2requestz12z12zz__osz00(obj_t
		BgL_namez00_67, uint64_t BgL_valz00_68)
	{
		{	/* Llib/os.scm 1194 */
			{	/* Llib/os.scm 1195 */
				obj_t BgL_arg1726z00_3471;

				BgL_arg1726z00_3471 =
					MAKE_YOUNG_PAIR(BgL_namez00_67, BGL_UINT64_TO_BUINT64(BgL_valz00_68));
				return (BGl_ioctlzd2requestszd2tablez00zz__osz00 =
					MAKE_YOUNG_PAIR(BgL_arg1726z00_3471,
						BGl_ioctlzd2requestszd2tablez00zz__osz00), BUNSPEC);
			}
		}

	}



/* &ioctl-register-request! */
	obj_t BGl_z62ioctlzd2registerzd2requestz12z70zz__osz00(obj_t BgL_envz00_4011,
		obj_t BgL_namez00_4012, obj_t BgL_valz00_4013)
	{
		{	/* Llib/os.scm 1194 */
			{	/* Llib/os.scm 1195 */
				uint64_t BgL_auxz00_5601;
				obj_t BgL_auxz00_5594;

				{	/* Llib/os.scm 1195 */
					obj_t BgL_tmpz00_5602;

					if (BGL_UINT64P(BgL_valz00_4013))
						{	/* Llib/os.scm 1195 */
							BgL_tmpz00_5602 = BgL_valz00_4013;
						}
					else
						{
							obj_t BgL_auxz00_5605;

							BgL_auxz00_5605 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 43930)), BGl_string2803z00zz__osz00,
								BGl_string2804z00zz__osz00, BgL_valz00_4013);
							FAILURE(BgL_auxz00_5605, BFALSE, BFALSE);
						}
					BgL_auxz00_5601 = BGL_BINT64_TO_INT64(BgL_tmpz00_5602);
				}
				if (STRINGP(BgL_namez00_4012))
					{	/* Llib/os.scm 1195 */
						BgL_auxz00_5594 = BgL_namez00_4012;
					}
				else
					{
						obj_t BgL_auxz00_5597;

						BgL_auxz00_5597 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 43930)), BGl_string2803z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_namez00_4012);
						FAILURE(BgL_auxz00_5597, BFALSE, BFALSE);
					}
				return
					BGl_ioctlzd2registerzd2requestz12z12zz__osz00(BgL_auxz00_5594,
					BgL_auxz00_5601);
			}
		}

	}



/* request->elong */
	long BGl_requestzd2ze3elongz31zz__osz00(obj_t BgL_reqz00_69)
	{
		{	/* Llib/os.scm 1200 */
			{
				obj_t BgL_objz00_1839;

				{	/* Llib/os.scm 1201 */
					obj_t BgL_tmpz00_5611;

					BgL_objz00_1839 = BgL_reqz00_69;
				BgL_zc3z04anonymousza31727ze3z87_1840:
					if (ELONGP(BgL_objz00_1839))
						{	/* Llib/os.scm 1203 */
							BgL_tmpz00_5611 = BgL_objz00_1839;
						}
					else
						{	/* Llib/os.scm 1203 */
							if (INTEGERP(BgL_objz00_1839))
								{	/* Llib/os.scm 1206 */
									long BgL_res2484z00_3475;

									{	/* Llib/os.scm 1206 */
										long BgL_tmpz00_5616;

										BgL_tmpz00_5616 = (long) CINT(BgL_objz00_1839);
										BgL_res2484z00_3475 = (long) (BgL_tmpz00_5616);
									}
									BgL_tmpz00_5611 = make_belong(BgL_res2484z00_3475);
								}
							else
								{	/* Llib/os.scm 1205 */
									if (REALP(BgL_objz00_1839))
										{	/* Llib/os.scm 1208 */
											long BgL_res2486z00_3479;

											{	/* Llib/os.scm 1208 */
												double BgL_xz00_3478;

												BgL_xz00_3478 = REAL_TO_DOUBLE(BgL_objz00_1839);
												{	/* Llib/os.scm 1208 */
													long BgL_tmpz00_5623;

													BgL_tmpz00_5623 = (long) (BgL_xz00_3478);
													BgL_res2486z00_3479 = (long) (BgL_tmpz00_5623);
											}}
											BgL_tmpz00_5611 = make_belong(BgL_res2486z00_3479);
										}
									else
										{	/* Llib/os.scm 1207 */
											if (STRINGP(BgL_objz00_1839))
												{	/* Llib/os.scm 1210 */
													obj_t BgL_cellz00_1845;

													BgL_cellz00_1845 =
														BGl_assocz00zz__r4_pairs_and_lists_6_3z00
														(BgL_objz00_1839,
														BGl_ioctlzd2requestszd2tablez00zz__osz00);
													if (PAIRP(BgL_cellz00_1845))
														{	/* Llib/os.scm 1211 */
															BgL_tmpz00_5611 = CDR(BgL_cellz00_1845);
														}
													else
														{	/* Llib/os.scm 1213 */
															obj_t BgL_arg1733z00_1847;

															{	/* Ieee/number.scm 165 */

																BgL_arg1733z00_1847 =
																	BGl_stringzd2ze3numberz31zz__r4_numbers_6_5z00
																	(BgL_objz00_1839, BINT(((long) 10)));
															}
															{
																obj_t BgL_objz00_5635;

																BgL_objz00_5635 = BgL_arg1733z00_1847;
																BgL_objz00_1839 = BgL_objz00_5635;
																goto BgL_zc3z04anonymousza31727ze3z87_1840;
															}
														}
												}
											else
												{	/* Llib/os.scm 1209 */
													if (BIGNUMP(BgL_objz00_1839))
														{	/* Llib/os.scm 1215 */
															long BgL_tmpz00_5638;

															BgL_tmpz00_5638 =
																bgl_bignum_to_long(BgL_objz00_1839);
															BgL_tmpz00_5611 = make_belong(BgL_tmpz00_5638);
														}
													else
														{	/* Llib/os.scm 1214 */
															BgL_tmpz00_5611 =
																BGl_bigloozd2typezd2errorz00zz__errorz00
																(BGl_string2805z00zz__osz00,
																BGl_string2806z00zz__osz00, BgL_reqz00_69);
														}
												}
										}
								}
						}
					return BELONG_TO_LONG(BgL_tmpz00_5611);
				}
			}
		}

	}



/* ioctl */
	BGL_EXPORTED_DEF bool_t BGl_ioctlz00zz__osz00(obj_t BgL_devz00_70,
		obj_t BgL_requestz00_71, obj_t BgL_valz00_72)
	{
		{	/* Llib/os.scm 1222 */
			{
				obj_t BgL_nz00_1855;

				{	/* Llib/os.scm 1234 */
					long BgL_arg1736z00_1853;
					obj_t BgL_arg1737z00_1854;

					BgL_arg1736z00_1853 =
						BGl_requestzd2ze3elongz31zz__osz00(BgL_requestz00_71);
					BgL_nz00_1855 = BgL_valz00_72;
				BgL_lambda1738z00_1856:
					if (ELONGP(BgL_nz00_1855))
						{	/* Llib/os.scm 1226 */
							BgL_arg1737z00_1854 = BgL_nz00_1855;
						}
					else
						{	/* Llib/os.scm 1226 */
							if (INTEGERP(BgL_nz00_1855))
								{	/* Llib/os.scm 1227 */
									long BgL_res2493z00_3489;

									{	/* Llib/os.scm 1227 */
										long BgL_tmpz00_5648;

										BgL_tmpz00_5648 = (long) CINT(BgL_nz00_1855);
										BgL_res2493z00_3489 = (long) (BgL_tmpz00_5648);
									}
									BgL_arg1737z00_1854 = make_belong(BgL_res2493z00_3489);
								}
							else
								{	/* Llib/os.scm 1227 */
									if (BIGNUMP(BgL_nz00_1855))
										{	/* Llib/os.scm 1228 */
											long BgL_tmpz00_5654;

											BgL_tmpz00_5654 = bgl_bignum_to_long(BgL_nz00_1855);
											BgL_arg1737z00_1854 = make_belong(BgL_tmpz00_5654);
										}
									else
										{	/* Llib/os.scm 1228 */
											if (STRINGP(BgL_nz00_1855))
												{	/* Ieee/fixnum.scm 985 */

													{	/* Ieee/fixnum.scm 985 */
														long BgL_tmpz00_5659;

														BgL_tmpz00_5659 =
															BGl_stringzd2ze3elongz31zz__r4_numbers_6_5_fixnumz00
															(BgL_nz00_1855, ((long) 10));
														BgL_arg1737z00_1854 = make_belong(BgL_tmpz00_5659);
												}}
											else
												{	/* Llib/os.scm 1230 */
													bool_t BgL_test3300z00_5662;

													if (INTEGERP(BgL_nz00_1855))
														{	/* Llib/os.scm 1230 */
															BgL_test3300z00_5662 = ((bool_t) 1);
														}
													else
														{	/* Llib/os.scm 1230 */
															BgL_test3300z00_5662 = REALP(BgL_nz00_1855);
														}
													if (BgL_test3300z00_5662)
														{	/* Llib/os.scm 1230 */
															long BgL_arg1745z00_1864;

															BgL_arg1745z00_1864 =
																(long) (REAL_TO_DOUBLE(BgL_nz00_1855));
															{
																obj_t BgL_nz00_5668;

																BgL_nz00_5668 = BINT(BgL_arg1745z00_1864);
																BgL_nz00_1855 = BgL_nz00_5668;
																goto BgL_lambda1738z00_1856;
															}
														}
													else
														{	/* Llib/os.scm 1230 */
															BgL_arg1737z00_1854 =
																BGl_bigloozd2typezd2errorz00zz__errorz00
																(BGl_string2805z00zz__osz00,
																BGl_string2807z00zz__osz00, BgL_nz00_1855);
														}
												}
										}
								}
						}
					return
						bgl_ioctl(BgL_devz00_70, BgL_arg1736z00_1853,
						BELONG_TO_LONG(BgL_arg1737z00_1854));
				}
			}
		}

	}



/* &ioctl */
	obj_t BGl_z62ioctlz62zz__osz00(obj_t BgL_envz00_4014, obj_t BgL_devz00_4015,
		obj_t BgL_requestz00_4016, obj_t BgL_valz00_4017)
	{
		{	/* Llib/os.scm 1222 */
			return
				BBOOL(BGl_ioctlz00zz__osz00(BgL_devz00_4015, BgL_requestz00_4016,
					BgL_valz00_4017));
		}

	}



/* _umask */
	obj_t BGl__umaskz00zz__osz00(obj_t BgL_env1148z00_75, obj_t BgL_opt1147z00_74)
	{
		{	/* Llib/os.scm 1240 */
			{	/* Llib/os.scm 1240 */

				switch (VECTOR_LENGTH(BgL_opt1147z00_74))
					{
					case ((long) 0):

						{	/* Llib/os.scm 1240 */

							{	/* Llib/os.scm 1240 */
								int BgL_res2499z00_3500;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BFALSE))
									{	/* Llib/os.scm 1242 */
										long BgL_tmpz00_5677;

										{	/* Llib/os.scm 1242 */
											long BgL_tmpz00_5678;

											{	/* Llib/os.scm 1240 */
												obj_t BgL_aux2694z00_4128;

												BgL_aux2694z00_4128 = BFALSE;
												{
													obj_t BgL_auxz00_5679;

													BgL_auxz00_5679 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string2722z00zz__osz00, BINT(((long) 45546)),
														BGl_string2808z00zz__osz00,
														BGl_string2809z00zz__osz00, BgL_aux2694z00_4128);
													FAILURE(BgL_auxz00_5679, BFALSE, BFALSE);
											}}
											BgL_tmpz00_5678 = ((long) 0);
											BgL_tmpz00_5677 = umask(BgL_tmpz00_5678);
										}
										BgL_res2499z00_3500 = (int) (BgL_tmpz00_5677);
									}
								else
									{	/* Llib/os.scm 1243 */
										long BgL_oldz00_3499;

										BgL_oldz00_3499 = umask(((long) 0));
										umask(BgL_oldz00_3499);
										BgL_res2499z00_3500 = (int) (BgL_oldz00_3499);
									}
								return BINT(BgL_res2499z00_3500);
							}
						}
						break;
					case ((long) 1):

						{	/* Llib/os.scm 1240 */
							obj_t BgL_maskz00_1870;

							BgL_maskz00_1870 = VECTOR_REF(BgL_opt1147z00_74, ((long) 0));
							{	/* Llib/os.scm 1240 */

								{	/* Llib/os.scm 1240 */
									int BgL_res2500z00_3503;

									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BgL_maskz00_1870))
										{	/* Llib/os.scm 1242 */
											long BgL_tmpz00_5692;

											{	/* Llib/os.scm 1242 */
												long BgL_tmpz00_5693;

												{	/* Llib/os.scm 1242 */
													obj_t BgL_tmpz00_5694;

													if (INTEGERP(BgL_maskz00_1870))
														{	/* Llib/os.scm 1242 */
															BgL_tmpz00_5694 = BgL_maskz00_1870;
														}
													else
														{
															obj_t BgL_auxz00_5697;

															BgL_auxz00_5697 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string2722z00zz__osz00,
																BINT(((long) 45616)),
																BGl_string2808z00zz__osz00,
																BGl_string2724z00zz__osz00, BgL_maskz00_1870);
															FAILURE(BgL_auxz00_5697, BFALSE, BFALSE);
														}
													BgL_tmpz00_5693 = (long) CINT(BgL_tmpz00_5694);
												}
												BgL_tmpz00_5692 = umask(BgL_tmpz00_5693);
											}
											BgL_res2500z00_3503 = (int) (BgL_tmpz00_5692);
										}
									else
										{	/* Llib/os.scm 1243 */
											long BgL_oldz00_3502;

											BgL_oldz00_3502 = umask(((long) 0));
											umask(BgL_oldz00_3502);
											BgL_res2500z00_3503 = (int) (BgL_oldz00_3502);
										}
									return BINT(BgL_res2500z00_3503);
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



/* umask */
	BGL_EXPORTED_DEF int BGl_umaskz00zz__osz00(obj_t BgL_maskz00_73)
	{
		{	/* Llib/os.scm 1240 */
			if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(BgL_maskz00_73))
				{	/* Llib/os.scm 1242 */
					long BgL_tmpz00_5712;

					{	/* Llib/os.scm 1242 */
						long BgL_tmpz00_5713;

						BgL_tmpz00_5713 = (long) CINT(BgL_maskz00_73);
						BgL_tmpz00_5712 = umask(BgL_tmpz00_5713);
					}
					return (int) (BgL_tmpz00_5712);
				}
			else
				{	/* Llib/os.scm 1243 */
					long BgL_oldz00_3505;

					BgL_oldz00_3505 = umask(((long) 0));
					umask(BgL_oldz00_3505);
					return (int) (BgL_oldz00_3505);
		}}

	}



/* openlog */
	BGL_EXPORTED_DEF obj_t BGl_openlogz00zz__osz00(obj_t BgL_identz00_76,
		int BgL_optionz00_77, int BgL_facilityz00_78)
	{
		{	/* Llib/os.scm 1250 */
			{	/* Llib/os.scm 1253 */
				char *BgL_tmpz00_5720;

				BgL_tmpz00_5720 = BSTRING_TO_STRING(BgL_identz00_76);
				openlog(BgL_tmpz00_5720, BgL_optionz00_77, BgL_facilityz00_78);
			} BUNSPEC;
			return BUNSPEC;
		}

	}



/* &openlog */
	obj_t BGl_z62openlogz62zz__osz00(obj_t BgL_envz00_4018,
		obj_t BgL_identz00_4019, obj_t BgL_optionz00_4020,
		obj_t BgL_facilityz00_4021)
	{
		{	/* Llib/os.scm 1250 */
			{	/* Llib/os.scm 1253 */
				int BgL_auxz00_5739;
				int BgL_auxz00_5730;
				obj_t BgL_auxz00_5723;

				{	/* Llib/os.scm 1253 */
					obj_t BgL_tmpz00_5740;

					if (INTEGERP(BgL_facilityz00_4021))
						{	/* Llib/os.scm 1253 */
							BgL_tmpz00_5740 = BgL_facilityz00_4021;
						}
					else
						{
							obj_t BgL_auxz00_5743;

							BgL_auxz00_5743 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 46070)), BGl_string2810z00zz__osz00,
								BGl_string2724z00zz__osz00, BgL_facilityz00_4021);
							FAILURE(BgL_auxz00_5743, BFALSE, BFALSE);
						}
					BgL_auxz00_5739 = CINT(BgL_tmpz00_5740);
				}
				{	/* Llib/os.scm 1253 */
					obj_t BgL_tmpz00_5731;

					if (INTEGERP(BgL_optionz00_4020))
						{	/* Llib/os.scm 1253 */
							BgL_tmpz00_5731 = BgL_optionz00_4020;
						}
					else
						{
							obj_t BgL_auxz00_5734;

							BgL_auxz00_5734 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 46070)), BGl_string2810z00zz__osz00,
								BGl_string2724z00zz__osz00, BgL_optionz00_4020);
							FAILURE(BgL_auxz00_5734, BFALSE, BFALSE);
						}
					BgL_auxz00_5730 = CINT(BgL_tmpz00_5731);
				}
				if (STRINGP(BgL_identz00_4019))
					{	/* Llib/os.scm 1253 */
						BgL_auxz00_5723 = BgL_identz00_4019;
					}
				else
					{
						obj_t BgL_auxz00_5726;

						BgL_auxz00_5726 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
							BINT(((long) 46070)), BGl_string2810z00zz__osz00,
							BGl_string2730z00zz__osz00, BgL_identz00_4019);
						FAILURE(BgL_auxz00_5726, BFALSE, BFALSE);
					}
				return
					BGl_openlogz00zz__osz00(BgL_auxz00_5723, BgL_auxz00_5730,
					BgL_auxz00_5739);
			}
		}

	}



/* syslog */
	BGL_EXPORTED_DEF obj_t BGl_syslogz00zz__osz00(int BgL_priorityz00_79,
		obj_t BgL_argsz00_80)
	{
		{	/* Llib/os.scm 1259 */
			{	/* Llib/os.scm 1265 */
				obj_t BgL_arg1748z00_1873;

				{	/* Llib/os.scm 1265 */
					obj_t BgL_zc3z04anonymousza31751ze3z87_4022;

					BgL_zc3z04anonymousza31751ze3z87_4022 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31751ze3ze5zz__osz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31751ze3z87_4022,
						(int) (((long) 0)), BgL_argsz00_80);
					BgL_arg1748z00_1873 =
						BGl_callzd2withzd2outputzd2stringzd2zz__r4_ports_6_10_1z00
						(BgL_zc3z04anonymousza31751ze3z87_4022);
				}
				{	/* Llib/os.scm 1262 */
					char *BgL_auxz00_5757;
					char *BgL_tmpz00_5755;

					BgL_auxz00_5757 = BSTRING_TO_STRING(BgL_arg1748z00_1873);
					BgL_tmpz00_5755 = BSTRING_TO_STRING(BGl_string2811z00zz__osz00);
					syslog(BgL_priorityz00_79, BgL_tmpz00_5755, BgL_auxz00_5757);
				} BUNSPEC;
			}
			return BUNSPEC;
		}

	}



/* &syslog */
	obj_t BGl_z62syslogz62zz__osz00(obj_t BgL_envz00_4023,
		obj_t BgL_priorityz00_4024, obj_t BgL_argsz00_4025)
	{
		{	/* Llib/os.scm 1259 */
			{	/* Llib/os.scm 1265 */
				int BgL_auxz00_5760;

				{	/* Llib/os.scm 1265 */
					obj_t BgL_tmpz00_5761;

					if (INTEGERP(BgL_priorityz00_4024))
						{	/* Llib/os.scm 1265 */
							BgL_tmpz00_5761 = BgL_priorityz00_4024;
						}
					else
						{
							obj_t BgL_auxz00_5764;

							BgL_auxz00_5764 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 46538)), BGl_string2812z00zz__osz00,
								BGl_string2724z00zz__osz00, BgL_priorityz00_4024);
							FAILURE(BgL_auxz00_5764, BFALSE, BFALSE);
						}
					BgL_auxz00_5760 = CINT(BgL_tmpz00_5761);
				}
				return BGl_syslogz00zz__osz00(BgL_auxz00_5760, BgL_argsz00_4025);
			}
		}

	}



/* &<@anonymous:1751> */
	obj_t BGl_z62zc3z04anonymousza31751ze3ze5zz__osz00(obj_t BgL_envz00_4026,
		obj_t BgL_opz00_4028)
	{
		{	/* Llib/os.scm 1264 */
			{	/* Llib/os.scm 1265 */
				obj_t BgL_argsz00_4027;

				BgL_argsz00_4027 = PROCEDURE_REF(BgL_envz00_4026, (int) (((long) 0)));
				{	/* Llib/os.scm 1265 */
					bool_t BgL_tmpz00_5772;

					{
						obj_t BgL_l1114z00_4144;

						BgL_l1114z00_4144 = BgL_argsz00_4027;
					BgL_zc3z04anonymousza31752ze3z87_4143:
						if (PAIRP(BgL_l1114z00_4144))
							{	/* Llib/os.scm 1265 */
								bgl_display_obj(CAR(BgL_l1114z00_4144), BgL_opz00_4028);
								{
									obj_t BgL_l1114z00_5777;

									BgL_l1114z00_5777 = CDR(BgL_l1114z00_4144);
									BgL_l1114z00_4144 = BgL_l1114z00_5777;
									goto BgL_zc3z04anonymousza31752ze3z87_4143;
								}
							}
						else
							{	/* Llib/os.scm 1265 */
								BgL_tmpz00_5772 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_tmpz00_5772);
				}
			}
		}

	}



/* closelog */
	BGL_EXPORTED_DEF obj_t BGl_closelogz00zz__osz00()
	{
		{	/* Llib/os.scm 1271 */
			closelog();
			BUNSPEC;
			return BUNSPEC;
		}

	}



/* &closelog */
	obj_t BGl_z62closelogz62zz__osz00(obj_t BgL_envz00_4029)
	{
		{	/* Llib/os.scm 1271 */
			return BGl_closelogz00zz__osz00();
		}

	}



/* syslog-option */
	BGL_EXPORTED_DEF int BGl_syslogzd2optionzd2zz__osz00(obj_t BgL_optsz00_81)
	{
		{	/* Llib/os.scm 1279 */
			{
				obj_t BgL_optsz00_1886;
				long BgL_oz00_1887;

				{	/* Llib/os.scm 1282 */
					long BgL_tmpz00_5782;

					BgL_optsz00_1886 = BgL_optsz00_81;
					BgL_oz00_1887 = ((long) 0);
				BgL_zc3z04anonymousza31755ze3z87_1888:
					if (NULLP(BgL_optsz00_1886))
						{	/* Llib/os.scm 1284 */
							BgL_tmpz00_5782 = BgL_oz00_1887;
						}
					else
						{	/* Llib/os.scm 1286 */
							obj_t BgL_arg1757z00_1890;
							long BgL_arg1759z00_1891;

							BgL_arg1757z00_1890 = CDR(((obj_t) BgL_optsz00_1886));
							{	/* Llib/os.scm 1288 */
								obj_t BgL_arg1760z00_1892;

								{	/* Llib/os.scm 1288 */
									obj_t BgL_casezd2valuezd2_1893;

									BgL_casezd2valuezd2_1893 = CAR(((obj_t) BgL_optsz00_1886));
									if ((BgL_casezd2valuezd2_1893 == BGl_symbol2813z00zz__osz00))
										{	/* Llib/os.scm 1288 */
											BgL_arg1760z00_1892 = BINT(LOG_CONS);
										}
									else
										{	/* Llib/os.scm 1288 */
											if (
												(BgL_casezd2valuezd2_1893 ==
													BGl_symbol2815z00zz__osz00))
												{	/* Llib/os.scm 1288 */
													BgL_arg1760z00_1892 = BINT(LOG_NDELAY);
												}
											else
												{	/* Llib/os.scm 1288 */
													if (
														(BgL_casezd2valuezd2_1893 ==
															BGl_symbol2817z00zz__osz00))
														{	/* Llib/os.scm 1288 */
															BgL_arg1760z00_1892 = BINT(LOG_NOWAIT);
														}
													else
														{	/* Llib/os.scm 1288 */
															if (
																(BgL_casezd2valuezd2_1893 ==
																	BGl_symbol2819z00zz__osz00))
																{	/* Llib/os.scm 1288 */
																	BgL_arg1760z00_1892 = BINT(LOG_ODELAY);
																}
															else
																{	/* Llib/os.scm 1288 */
																	if (
																		(BgL_casezd2valuezd2_1893 ==
																			BGl_symbol2821z00zz__osz00))
																		{	/* Llib/os.scm 1288 */
																			BgL_arg1760z00_1892 = BINT(LOG_PID);
																		}
																	else
																		{	/* Llib/os.scm 1288 */
																			BgL_arg1760z00_1892 =
																				BGl_errorz00zz__errorz00
																				(BGl_string2823z00zz__osz00,
																				BGl_string2824z00zz__osz00,
																				BgL_casezd2valuezd2_1893);
																		}
																}
														}
												}
										}
								}
								BgL_arg1759z00_1891 =
									(BgL_oz00_1887 | (long) CINT(BgL_arg1760z00_1892));
							}
							{
								long BgL_oz00_5808;
								obj_t BgL_optsz00_5807;

								BgL_optsz00_5807 = BgL_arg1757z00_1890;
								BgL_oz00_5808 = BgL_arg1759z00_1891;
								BgL_oz00_1887 = BgL_oz00_5808;
								BgL_optsz00_1886 = BgL_optsz00_5807;
								goto BgL_zc3z04anonymousza31755ze3z87_1888;
							}
						}
					return (int) (BgL_tmpz00_5782);
		}}}

	}



/* &syslog-option */
	obj_t BGl_z62syslogzd2optionzb0zz__osz00(obj_t BgL_envz00_4030,
		obj_t BgL_optsz00_4031)
	{
		{	/* Llib/os.scm 1279 */
			return BINT(BGl_syslogzd2optionzd2zz__osz00(BgL_optsz00_4031));
		}

	}



/* syslog-facility */
	BGL_EXPORTED_DEF int BGl_syslogzd2facilityzd2zz__osz00(obj_t
		BgL_facilityz00_82)
	{
		{	/* Llib/os.scm 1303 */
			if ((BgL_facilityz00_82 == BGl_symbol2825z00zz__osz00))
				{	/* Llib/os.scm 1306 */
					return LOG_AUTH;
				}
			else
				{	/* Llib/os.scm 1306 */
					if ((BgL_facilityz00_82 == BGl_symbol2827z00zz__osz00))
						{	/* Llib/os.scm 1306 */
							return LOG_AUTHPRIV;
						}
					else
						{	/* Llib/os.scm 1306 */
							if ((BgL_facilityz00_82 == BGl_symbol2829z00zz__osz00))
								{	/* Llib/os.scm 1306 */
									return LOG_CRON;
								}
							else
								{	/* Llib/os.scm 1306 */
									if ((BgL_facilityz00_82 == BGl_symbol2831z00zz__osz00))
										{	/* Llib/os.scm 1306 */
											return LOG_DAEMON;
										}
									else
										{	/* Llib/os.scm 1306 */
											if ((BgL_facilityz00_82 == BGl_symbol2833z00zz__osz00))
												{	/* Llib/os.scm 1306 */
													return LOG_FTP;
												}
											else
												{	/* Llib/os.scm 1306 */
													if (
														(BgL_facilityz00_82 == BGl_symbol2835z00zz__osz00))
														{	/* Llib/os.scm 1306 */
															return LOG_KERN;
														}
													else
														{	/* Llib/os.scm 1306 */
															if (
																(BgL_facilityz00_82 ==
																	BGl_symbol2837z00zz__osz00))
																{	/* Llib/os.scm 1306 */
																	return LOG_LOCAL0;
																}
															else
																{	/* Llib/os.scm 1306 */
																	if (
																		(BgL_facilityz00_82 ==
																			BGl_symbol2839z00zz__osz00))
																		{	/* Llib/os.scm 1306 */
																			return LOG_LOCAL1;
																		}
																	else
																		{	/* Llib/os.scm 1306 */
																			if (
																				(BgL_facilityz00_82 ==
																					BGl_symbol2841z00zz__osz00))
																				{	/* Llib/os.scm 1306 */
																					return LOG_LOCAL2;
																				}
																			else
																				{	/* Llib/os.scm 1306 */
																					if (
																						(BgL_facilityz00_82 ==
																							BGl_symbol2843z00zz__osz00))
																						{	/* Llib/os.scm 1306 */
																							return LOG_LOCAL3;
																						}
																					else
																						{	/* Llib/os.scm 1306 */
																							if (
																								(BgL_facilityz00_82 ==
																									BGl_symbol2845z00zz__osz00))
																								{	/* Llib/os.scm 1306 */
																									return LOG_LOCAL4;
																								}
																							else
																								{	/* Llib/os.scm 1306 */
																									if (
																										(BgL_facilityz00_82 ==
																											BGl_symbol2847z00zz__osz00))
																										{	/* Llib/os.scm 1306 */
																											return LOG_LOCAL5;
																										}
																									else
																										{	/* Llib/os.scm 1306 */
																											if (
																												(BgL_facilityz00_82 ==
																													BGl_symbol2849z00zz__osz00))
																												{	/* Llib/os.scm 1306 */
																													return LOG_LOCAL6;
																												}
																											else
																												{	/* Llib/os.scm 1306 */
																													if (
																														(BgL_facilityz00_82
																															==
																															BGl_symbol2851z00zz__osz00))
																														{	/* Llib/os.scm 1306 */
																															return LOG_LOCAL7;
																														}
																													else
																														{	/* Llib/os.scm 1306 */
																															if (
																																(BgL_facilityz00_82
																																	==
																																	BGl_symbol2853z00zz__osz00))
																																{	/* Llib/os.scm 1306 */
																																	return
																																		LOG_LPR;
																																}
																															else
																																{	/* Llib/os.scm 1306 */
																																	if (
																																		(BgL_facilityz00_82
																																			==
																																			BGl_symbol2855z00zz__osz00))
																																		{	/* Llib/os.scm 1306 */
																																			return
																																				LOG_MAIL;
																																		}
																																	else
																																		{	/* Llib/os.scm 1306 */
																																			if (
																																				(BgL_facilityz00_82
																																					==
																																					BGl_symbol2857z00zz__osz00))
																																				{	/* Llib/os.scm 1306 */
																																					return
																																						LOG_NEWS;
																																				}
																																			else
																																				{	/* Llib/os.scm 1306 */
																																					if (
																																						(BgL_facilityz00_82
																																							==
																																							BGl_symbol2859z00zz__osz00))
																																						{	/* Llib/os.scm 1306 */
																																							return
																																								LOG_SYSLOG;
																																						}
																																					else
																																						{	/* Llib/os.scm 1306 */
																																							if ((BgL_facilityz00_82 == BGl_symbol2861z00zz__osz00))
																																								{	/* Llib/os.scm 1306 */
																																									return
																																										LOG_USER;
																																								}
																																							else
																																								{	/* Llib/os.scm 1306 */
																																									if ((BgL_facilityz00_82 == BGl_symbol2863z00zz__osz00))
																																										{	/* Llib/os.scm 1306 */
																																											return
																																												LOG_UUCP;
																																										}
																																									else
																																										{	/* Llib/os.scm 1306 */
																																											return
																																												CINT
																																												(BGl_errorz00zz__errorz00
																																												(BGl_string2865z00zz__osz00,
																																													BGl_string2866z00zz__osz00,
																																													BgL_facilityz00_82));
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
														}
												}
										}
								}
						}
				}
		}

	}



/* &syslog-facility */
	obj_t BGl_z62syslogzd2facilityzb0zz__osz00(obj_t BgL_envz00_4032,
		obj_t BgL_facilityz00_4033)
	{
		{	/* Llib/os.scm 1303 */
			{	/* Llib/os.scm 1306 */
				int BgL_tmpz00_5854;

				{	/* Llib/os.scm 1306 */
					obj_t BgL_auxz00_5855;

					if (SYMBOLP(BgL_facilityz00_4033))
						{	/* Llib/os.scm 1306 */
							BgL_auxz00_5855 = BgL_facilityz00_4033;
						}
					else
						{
							obj_t BgL_auxz00_5858;

							BgL_auxz00_5858 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 48026)), BGl_string2867z00zz__osz00,
								BGl_string2764z00zz__osz00, BgL_facilityz00_4033);
							FAILURE(BgL_auxz00_5858, BFALSE, BFALSE);
						}
					BgL_tmpz00_5854 = BGl_syslogzd2facilityzd2zz__osz00(BgL_auxz00_5855);
				}
				return BINT(BgL_tmpz00_5854);
			}
		}

	}



/* syslog-level */
	BGL_EXPORTED_DEF int BGl_syslogzd2levelzd2zz__osz00(obj_t BgL_lvlz00_83)
	{
		{	/* Llib/os.scm 1334 */
			if ((BgL_lvlz00_83 == BGl_symbol2868z00zz__osz00))
				{	/* Llib/os.scm 1337 */
					return LOG_EMERG;
				}
			else
				{	/* Llib/os.scm 1337 */
					if ((BgL_lvlz00_83 == BGl_symbol2870z00zz__osz00))
						{	/* Llib/os.scm 1337 */
							return LOG_ALERT;
						}
					else
						{	/* Llib/os.scm 1337 */
							if ((BgL_lvlz00_83 == BGl_symbol2872z00zz__osz00))
								{	/* Llib/os.scm 1337 */
									return LOG_CRIT;
								}
							else
								{	/* Llib/os.scm 1337 */
									if ((BgL_lvlz00_83 == BGl_symbol2874z00zz__osz00))
										{	/* Llib/os.scm 1337 */
											return LOG_ERR;
										}
									else
										{	/* Llib/os.scm 1337 */
											if ((BgL_lvlz00_83 == BGl_symbol2876z00zz__osz00))
												{	/* Llib/os.scm 1337 */
													return LOG_WARNING;
												}
											else
												{	/* Llib/os.scm 1337 */
													if ((BgL_lvlz00_83 == BGl_symbol2878z00zz__osz00))
														{	/* Llib/os.scm 1337 */
															return LOG_NOTICE;
														}
													else
														{	/* Llib/os.scm 1337 */
															if ((BgL_lvlz00_83 == BGl_symbol2880z00zz__osz00))
																{	/* Llib/os.scm 1337 */
																	return LOG_INFO;
																}
															else
																{	/* Llib/os.scm 1337 */
																	if (
																		(BgL_lvlz00_83 ==
																			BGl_symbol2882z00zz__osz00))
																		{	/* Llib/os.scm 1337 */
																			return LOG_DEBUG;
																		}
																	else
																		{	/* Llib/os.scm 1337 */
																			return
																				CINT(BGl_errorz00zz__errorz00
																				(BGl_string2884z00zz__osz00,
																					BGl_string2885z00zz__osz00,
																					BgL_lvlz00_83));
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



/* &syslog-level */
	obj_t BGl_z62syslogzd2levelzb0zz__osz00(obj_t BgL_envz00_4034,
		obj_t BgL_lvlz00_4035)
	{
		{	/* Llib/os.scm 1334 */
			{	/* Llib/os.scm 1337 */
				int BgL_tmpz00_5882;

				{	/* Llib/os.scm 1337 */
					obj_t BgL_auxz00_5883;

					if (SYMBOLP(BgL_lvlz00_4035))
						{	/* Llib/os.scm 1337 */
							BgL_auxz00_5883 = BgL_lvlz00_4035;
						}
					else
						{
							obj_t BgL_auxz00_5886;

							BgL_auxz00_5886 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string2722z00zz__osz00,
								BINT(((long) 49154)), BGl_string2886z00zz__osz00,
								BGl_string2764z00zz__osz00, BgL_lvlz00_4035);
							FAILURE(BgL_auxz00_5886, BFALSE, BFALSE);
						}
					BgL_tmpz00_5882 = BGl_syslogzd2levelzd2zz__osz00(BgL_auxz00_5883);
				}
				return BINT(BgL_tmpz00_5882);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__osz00()
	{
		{	/* Llib/os.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__osz00()
	{
		{	/* Llib/os.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__osz00()
	{
		{	/* Llib/os.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__osz00()
	{
		{	/* Llib/os.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2887z00zz__osz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2887z00zz__osz00));
		}

	}

#ifdef __cplusplus
}
#endif
