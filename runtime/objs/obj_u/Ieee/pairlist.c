/*===========================================================================*/
/*   (Ieee/pairlist.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/pairlist.scm -indent -o objs/obj_u/Ieee/pairlist.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t
		BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, long, obj_t);
	static obj_t BGl_z62carz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62nullzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62cdaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62caddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62lengthz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62takez62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_reducez00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_z62appendz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62listz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62cddaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62cdaddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_remq_bang(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		long);
	BGL_EXPORTED_DECL obj_t BGl_caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00 =
		BUNSPEC;
	static obj_t BGl_z62caadarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t bgl_list_ref(obj_t, long);
	static obj_t BGl_z62epairzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_listz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62caarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62cdrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cdadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_recurze70ze7zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_deletez00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_appendzd2listze70z35zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_appendzd2listze71z35zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_appendzd2listze72z35zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62assqz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cerz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62assvz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62cddadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62pairzd2orzd2nullzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62makezd2listzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62iotaz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62setzd2carz12za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62remqz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_consza21ze70z45zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62appendz12z70zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62cadaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62caaddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__deletez00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62memqz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62memvz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00();
	static obj_t BGl_z62remqz12z70zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t bgl_reverse(obj_t);
	static obj_t BGl_z62cadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long bgl_list_length(obj_t);
	static obj_t BGl_z62reversez62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62cddarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	BGL_EXPORTED_DECL obj_t bgl_remq(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__r4_pairs_and_lists_6_3z00();
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62dropz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00();
	extern obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62caaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62appendzd22zb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62cdddarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62ereversez62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_carz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t
		BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62assocz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_z62cdaaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62cadadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int,
		obj_t);
	static obj_t BGl_z62listzd2refzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62everyz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62memberz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62cdarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62findz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62cdddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62anyz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62lastzd2pairzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t, int, obj_t);
	static obj_t BGl_z62listzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62caadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62appendzd22z12za2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62cddddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_econsz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62setzd2cdrz12za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62reducez62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_appendzd221011zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62cdaadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62caddarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62pairzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cerz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62listzd2splitzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62listzd2setz12za2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62caaaarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62cddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62consza2zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62consz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62setzd2cerz12za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62cadarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62listzd2splitz12za2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62eappendz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62eappendzd22zb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2291z00zz__r4_pairs_and_lists_6_3z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62listzd2tailzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62treezd2copyzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62reversez12z70zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62cdadarz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62listzd2tabulatezb0zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62cadddrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62listzd2copyzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_consz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62econsz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62findzd2tailzb0zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62caaadrz62zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_eappendzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762eappendza762za7za7_2294z00, va_generic_entry,
		BGl_z62eappendz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_eappendzd22zd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762eappendza7d22za7b2295za7,
		BGl_z62eappendzd22zb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_anyzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762anyza762za7za7__r4_2296z00, va_generic_entry,
		BGl_z62anyz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_lastzd2pairzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762lastza7d2pairza7b2297za7,
		BGl_z62lastzd2pairzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762listza7f3za791za7za7_2298za7,
		BGl_z62listzf3z91zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762caadrza762za7za7__r2299z00,
		BGl_z62caadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_treezd2copyzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762treeza7d2copyza7b2300za7,
		BGl_z62treezd2copyzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cddrza762za7za7__r42301z00,
		BGl_z62cddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cddadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cddadrza762za7za7__2302z00,
		BGl_z62cddadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2copyzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762listza7d2copyza7b2303za7,
		BGl_z62listzd2copyzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2215za700za7za7_2304za7,
		"/tmp/4.4a/runtime/Ieee/pairlist.scm", 35);
	      DEFINE_STRING(BGl_string2216z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2216za700za7za7_2305za7, "&car", 4);
	      DEFINE_STRING(BGl_string2217z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2217za700za7za7_2306za7, "pair", 4);
	      DEFINE_STRING(BGl_string2218z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2218za700za7za7_2307za7, "&cdr", 4);
	      DEFINE_STRING(BGl_string2219z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2219za700za7za7_2308za7, "&cer", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762caaarza762za7za7__r2309z00,
		BGl_z62caaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cdarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cdarza762za7za7__r42310z00,
		BGl_z62cdarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762listza762za7za7__r42311z00, va_generic_entry,
		BGl_z62listz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2tailzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762findza7d2tailza7b2312za7,
		BGl_z62findzd2tailzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cddaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cddaarza762za7za7__2313z00,
		BGl_z62cddaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2220z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2220za700za7za7_2314za7, "epair", 5);
	      DEFINE_STRING(BGl_string2221z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2221za700za7za7_2315za7, "&caar", 5);
	      DEFINE_STRING(BGl_string2222z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2222za700za7za7_2316za7, "&cadr", 5);
	      DEFINE_STRING(BGl_string2223z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2223za700za7za7_2317za7, "&cdar", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762pairza7f3za791za7za7_2318za7,
		BGl_z62pairzf3z91zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2224z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2224za700za7za7_2319za7, "&cddr", 5);
	      DEFINE_STRING(BGl_string2225z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2225za700za7za7_2320za7, "&caaar", 6);
	      DEFINE_STRING(BGl_string2226z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2226za700za7za7_2321za7, "&caadr", 6);
	      DEFINE_STRING(BGl_string2227z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2227za700za7za7_2322za7, "&cadar", 6);
	      DEFINE_STRING(BGl_string2228z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2228za700za7za7_2323za7, "&caddr", 6);
	      DEFINE_STRING(BGl_string2229z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2229za700za7za7_2324za7, "&cdaar", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cerzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cerza762za7za7__r4_2325z00,
		BGl_z62cerz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_nullzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762nullza7f3za791za7za7_2326za7,
		BGl_z62nullzf3z91zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762caddrza762za7za7__r2327z00,
		BGl_z62caddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cddddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cddddrza762za7za7__2328z00,
		BGl_z62cddddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2230z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2230za700za7za7_2329za7, "&cddar", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_pairzd2orzd2nullzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762pairza7d2orza7d2n2330za7,
		BGl_z62pairzd2orzd2nullzf3z91zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2231z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2231za700za7za7_2331za7, "&cdadr", 6);
	      DEFINE_STRING(BGl_string2232z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2232za700za7za7_2332za7, "&cdddr", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2listzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762makeza7d2listza7b2333za7, va_generic_entry,
		BGl_z62makezd2listzb0zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2233z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2233za700za7za7_2334za7, "&caaaar", 7);
	      DEFINE_STRING(BGl_string2234z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2234za700za7za7_2335za7, "&caaadr", 7);
	      DEFINE_STRING(BGl_string2235z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2235za700za7za7_2336za7, "&caadar", 7);
	      DEFINE_STRING(BGl_string2236z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2236za700za7za7_2337za7, "&cadaar", 7);
	      DEFINE_STRING(BGl_string2237z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2237za700za7za7_2338za7, "&cdaaar", 7);
	      DEFINE_STRING(BGl_string2238z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2238za700za7za7_2339za7, "&caaddr", 7);
	      DEFINE_STRING(BGl_string2239z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2239za700za7za7_2340za7, "&caddar", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cadarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cadarza762za7za7__r2341z00,
		BGl_z62cadarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caaadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762caaadrza762za7za7__2342z00,
		BGl_z62caaadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cdddarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cdddarza762za7za7__2343z00,
		BGl_z62cdddarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ereversezd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762ereverseza762za7za72344z00,
		BGl_z62ereversez62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2240z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2240za700za7za7_2345za7, "&cadadr", 7);
	      DEFINE_STRING(BGl_string2241z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2241za700za7za7_2346za7, "&cadddr", 7);
	      DEFINE_STRING(BGl_string2242z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2242za700za7za7_2347za7, "&cdaadr", 7);
	      DEFINE_STRING(BGl_string2243z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2243za700za7za7_2348za7, "&cdaddr", 7);
	      DEFINE_STRING(BGl_string2244z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2244za700za7za7_2349za7, "&cddaar", 7);
	      DEFINE_STRING(BGl_string2245z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2245za700za7za7_2350za7, "&cddadr", 7);
	      DEFINE_STRING(BGl_string2246z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2246za700za7za7_2351za7, "&cdadar", 7);
	      DEFINE_STRING(BGl_string2247z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2247za700za7za7_2352za7, "&cdddar", 7);
	      DEFINE_STRING(BGl_string2248z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2248za700za7za7_2353za7, "&cddddr", 7);
	      DEFINE_STRING(BGl_string2249z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2249za700za7za7_2354za7, "&set-car!", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_assqzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762assqza762za7za7__r42355z00,
		BGl_z62assqz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletezd2duplicateszd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__deleteza7d2duplic2356za7, opt_generic_entry,
		BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caaaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762caaaarza762za7za7__2357z00,
		BGl_z62caaaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reversezd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762reverseza762za7za7_2358z00,
		BGl_z62reversez62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2tabulatezd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762listza7d2tabula2359z00,
		BGl_z62listzd2tabulatezb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_takezd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762takeza762za7za7__r42360z00,
		BGl_z62takez62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2250z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2250za700za7za7_2361za7, "&set-cdr!", 9);
	      DEFINE_STRING(BGl_string2251z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2251za700za7za7_2362za7, "&set-cer!", 9);
	      DEFINE_STRING(BGl_string2252z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2252za700za7za7_2363za7, "&append-2", 9);
	      DEFINE_STRING(BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2253za700za7za7_2364za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string2254z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2254za700za7za7_2365za7, "&eappend-2", 10);
	      DEFINE_STRING(BGl_string2255z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2255za700za7za7_2366za7, "&append-2!", 10);
	      DEFINE_STRING(BGl_string2256z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2256za700za7za7_2367za7, "&length", 7);
	      DEFINE_STRING(BGl_string2257z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2257za700za7za7_2368za7, "&reverse", 8);
	      DEFINE_STRING(BGl_string2258z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2258za700za7za7_2369za7, "&ereverse", 9);
	      DEFINE_STRING(BGl_string2259z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2259za700za7za7_2370za7, "&take", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2cerz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762setza7d2cerza712za72371z00,
		BGl_z62setzd2cerz12za2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762appendza762za7za7__2372z00, va_generic_entry,
		BGl_z62appendz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cdadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cdadrza762za7za7__r2373z00,
		BGl_z62cdadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caaddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762caaddrza762za7za7__2374z00,
		BGl_z62caaddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2260z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2260za700za7za7_2375za7, "bint", 4);
	      DEFINE_STRING(BGl_string2261z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2261za700za7za7_2376za7, "&drop", 5);
	      DEFINE_STRING(BGl_string2262z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2262za700za7za7_2377za7, "&list-tail", 10);
	      DEFINE_STRING(BGl_string2263z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2263za700za7za7_2378za7, "&list-ref", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_memqzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762memqza762za7za7__r42379z00,
		BGl_z62memqz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2264z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2264za700za7za7_2380za7, "&list-set!", 10);
	      DEFINE_STRING(BGl_string2265z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2265za700za7za7_2381za7, "&last-pair", 10);
	      DEFINE_STRING(BGl_string2266z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2266za700za7za7_2382za7, "&memq", 5);
	      DEFINE_STRING(BGl_string2267z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2267za700za7za7_2383za7, "&memv", 5);
	      DEFINE_STRING(BGl_string2268z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2268za700za7za7_2384za7, "&member", 7);
	      DEFINE_STRING(BGl_string2269z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2269za700za7za7_2385za7, "&assq", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_assoczd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762assocza762za7za7__r2386z00,
		BGl_z62assocz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2setz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762listza7d2setza7122387za7,
		BGl_z62listzd2setz12za2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cdaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cdaarza762za7za7__r2388z00,
		BGl_z62cdaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caadarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762caadarza762za7za7__2389z00,
		BGl_z62caadarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2270z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2270za700za7za7_2390za7, "&assv", 5);
	      DEFINE_STRING(BGl_string2271z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2271za700za7za7_2391za7, "&assoc", 6);
	      DEFINE_STRING(BGl_string2272z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2272za700za7za7_2392za7, "&remq", 5);
	      DEFINE_STRING(BGl_string2273z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2273za700za7za7_2393za7, "&remq!", 6);
	      DEFINE_STRING(BGl_string2274z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2274za700za7za7_2394za7, "_delete", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_epairzf3zd2envz21zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762epairza7f3za791za7za72395za7,
		BGl_z62epairzf3z91zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2275z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2275za700za7za7_2396za7, "_delete!", 8);
	      DEFINE_STRING(BGl_string2276z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2276za700za7za7_2397za7, "&reverse!", 9);
	      DEFINE_STRING(BGl_string2277z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2277za700za7za7_2398za7, "&every", 6);
	      DEFINE_STRING(BGl_string2278z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2278za700za7za7_2399za7, "procedure", 9);
	      DEFINE_STRING(BGl_string2279z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2279za700za7za7_2400za7, "&any", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendz12zd2envzc0zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762appendza712za770za72401z00, va_generic_entry,
		BGl_z62appendz12z70zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cdddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cdddrza762za7za7__r2402z00,
		BGl_z62cdddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2280z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2280za700za7za7_2403za7, "&find", 5);
	      DEFINE_STRING(BGl_string2281z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2281za700za7za7_2404za7, "&find-tail", 10);
	      DEFINE_STRING(BGl_string2282z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2282za700za7za7_2405za7, "&reduce", 7);
	      DEFINE_STRING(BGl_string2283z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2283za700za7za7_2406za7, "&make-list", 10);
	      DEFINE_STRING(BGl_string2284z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2284za700za7za7_2407za7, "&list-tabulate", 14);
	      DEFINE_STRING(BGl_string2285z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2285za700za7za7_2408za7, "&list-split", 11);
	      DEFINE_STRING(BGl_string2286z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2286za700za7za7_2409za7, "&list-split!", 12);
	      DEFINE_STRING(BGl_string2287z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2287za700za7za7_2410za7, "&iota", 5);
	      DEFINE_STRING(BGl_string2288z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2288za700za7za7_2411za7, "&list-copy", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_remqz12zd2envzc0zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762remqza712za770za7za7_2412za7,
		BGl_z62remqz12z70zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2289z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2289za700za7za7_2413za7, "_delete-duplicates", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_assvzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762assvza762za7za7__r42414z00,
		BGl_z62assvz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cddarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cddarza762za7za7__r2415z00,
		BGl_z62cddarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cadadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cadadrza762za7za7__2416z00,
		BGl_z62cadadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2refzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762listza7d2refza7b02417za7,
		BGl_z62listzd2refzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_iotazd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762iotaza762za7za7__r42418z00, va_generic_entry,
		BGl_z62iotaz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2290z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2290za700za7za7_2419za7, "_delete-duplicates!", 19);
	      DEFINE_STRING(BGl_string2292z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2292za700za7za7_2420za7, "delete-duplicates!", 18);
	      DEFINE_STRING(BGl_string2293z00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_string2293za700za7za7_2421za7, "__r4_pairs_and_lists_6_3", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762consza762za7za7__r42422z00,
		BGl_z62consz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_remqzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762remqza762za7za7__r42423z00,
		BGl_z62remqz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_econszd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762econsza762za7za7__r2424z00,
		BGl_z62econsz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cadaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cadaarza762za7za7__2425z00,
		BGl_z62cadaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_memvzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762memvza762za7za7__r42426z00,
		BGl_z62memvz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_consza2zd2envz70zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762consza7a2za7c0za7za7_2427za7, va_generic_entry,
		BGl_z62consza2zc0zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reversez12zd2envzc0zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762reverseza712za7702428za7,
		BGl_z62reversez12z70zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cadddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cadddrza762za7za7__2429z00,
		BGl_z62cadddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dropzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762dropza762za7za7__r42430z00,
		BGl_z62dropz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletez12zd2envzc0zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__deleteza712za712za7za7_2431z00, opt_generic_entry,
		BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd22zd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762appendza7d22za7b02432za7,
		BGl_z62appendzd22zb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2splitz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762listza7d2splitza72433za7, va_generic_entry,
		BGl_z62listzd2splitz12za2zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cdaadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cdaadrza762za7za7__2434z00,
		BGl_z62cdaadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_caddarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762caddarza762za7za7__2435z00,
		BGl_z62caddarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2tailzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762listza7d2tailza7b2436za7,
		BGl_z62listzd2tailzb0zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_listzd2splitzd2envz00zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762listza7d2splitza72437za7, va_generic_entry,
		BGl_z62listzd2splitzb0zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletezd2duplicatesz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__deleteza7d2duplic2438za7, opt_generic_entry,
		BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_appendzd22z12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762appendza7d22za7122439za7,
		BGl_z62appendzd22z12za2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cdaaarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cdaaarza762za7za7__2440z00,
		BGl_z62cdaaarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_lengthzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762lengthza762za7za7__2441z00,
		BGl_z62lengthz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2carz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762setza7d2carza712za72442z00,
		BGl_z62setzd2carz12za2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cdrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cdrza762za7za7__r4_2443z00,
		BGl_z62cdrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	extern obj_t BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_memberzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762memberza762za7za7__2444z00,
		BGl_z62memberz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762findza762za7za7__r42445z00,
		BGl_z62findz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cdaddrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cdaddrza762za7za7__2446z00,
		BGl_z62cdaddrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_deletezd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl__deleteza700za7za7__r42447za7, opt_generic_entry,
		BGl__deletez00zz__r4_pairs_and_lists_6_3z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_carzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762carza762za7za7__r4_2448z00,
		BGl_z62carz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cadrzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cadrza762za7za7__r42449z00,
		BGl_z62cadrz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cdadarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762cdadarza762za7za7__2450z00,
		BGl_z62cdadarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_everyzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762everyza762za7za7__r2451z00, va_generic_entry,
		BGl_z62everyz62zz__r4_pairs_and_lists_6_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2cdrz12zd2envz12zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762setza7d2cdrza712za72452z00,
		BGl_z62setzd2cdrz12za2zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_caarzd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762caarza762za7za7__r42453z00,
		BGl_z62caarz62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reducezd2envzd2zz__r4_pairs_and_lists_6_3z00,
		BgL_bgl_za762reduceza762za7za7__2454z00,
		BGl_z62reducez62zz__r4_pairs_and_lists_6_3z00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00));
		     ADD_ROOT((void *) (&BGl_symbol2291z00zz__r4_pairs_and_lists_6_3z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long
		BgL_checksumz00_3148, char *BgL_fromz00_3149)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_pairs_and_lists_6_3z00();
					BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00();
					return
						BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_pairs_and_lists_6_3z00()
	{
		{	/* Ieee/pairlist.scm 18 */
			return (BGl_symbol2291z00zz__r4_pairs_and_lists_6_3z00 =
				bstring_to_symbol(BGl_string2292z00zz__r4_pairs_and_lists_6_3z00),
				BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_pairs_and_lists_6_3z00()
	{
		{	/* Ieee/pairlist.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__r4_pairs_and_lists_6_3z00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_785;

				BgL_headz00_785 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1627;
					obj_t BgL_tailz00_1628;

					BgL_prevz00_1627 = BgL_headz00_785;
					BgL_tailz00_1628 = BgL_l1z00_1;
				BgL_loopz00_1626:
					if (PAIRP(BgL_tailz00_1628))
						{
							obj_t BgL_newzd2prevzd2_1634;

							BgL_newzd2prevzd2_1634 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1628), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1627, BgL_newzd2prevzd2_1634);
							{
								obj_t BgL_tailz00_3165;
								obj_t BgL_prevz00_3164;

								BgL_prevz00_3164 = BgL_newzd2prevzd2_1634;
								BgL_tailz00_3165 = CDR(BgL_tailz00_1628);
								BgL_tailz00_1628 = BgL_tailz00_3165;
								BgL_prevz00_1627 = BgL_prevz00_3164;
								goto BgL_loopz00_1626;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_785);
			}
		}

	}



/* pair? */
	BGL_EXPORTED_DEF bool_t BGl_pairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_3)
	{
		{	/* Ieee/pairlist.scm 213 */
			return PAIRP(BgL_objz00_3);
		}

	}



/* &pair? */
	obj_t BGl_z62pairzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2776,
		obj_t BgL_objz00_2777)
	{
		{	/* Ieee/pairlist.scm 213 */
			return
				BBOOL(BGl_pairzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2777));
		}

	}



/* epair? */
	BGL_EXPORTED_DEF bool_t BGl_epairzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_4)
	{
		{	/* Ieee/pairlist.scm 219 */
			return EPAIRP(BgL_objz00_4);
		}

	}



/* &epair? */
	obj_t BGl_z62epairzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2778,
		obj_t BgL_objz00_2779)
	{
		{	/* Ieee/pairlist.scm 219 */
			return
				BBOOL(BGl_epairzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2779));
		}

	}



/* pair-or-null? */
	BGL_EXPORTED_DEF bool_t
		BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t BgL_objz00_5)
	{
		{	/* Ieee/pairlist.scm 225 */
			if (PAIRP(BgL_objz00_5))
				{	/* Ieee/pairlist.scm 226 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/pairlist.scm 226 */
					return NULLP(BgL_objz00_5);
				}
		}

	}



/* &pair-or-null? */
	obj_t BGl_z62pairzd2orzd2nullzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2780, obj_t BgL_objz00_2781)
	{
		{	/* Ieee/pairlist.scm 225 */
			return
				BBOOL(BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
				(BgL_objz00_2781));
		}

	}



/* cons */
	BGL_EXPORTED_DEF obj_t BGl_consz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_obj1z00_6, obj_t BgL_obj2z00_7)
	{
		{	/* Ieee/pairlist.scm 233 */
			return MAKE_YOUNG_PAIR(BgL_obj1z00_6, BgL_obj2z00_7);
		}

	}



/* &cons */
	obj_t BGl_z62consz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2782,
		obj_t BgL_obj1z00_2783, obj_t BgL_obj2z00_2784)
	{
		{	/* Ieee/pairlist.scm 233 */
			return
				BGl_consz00zz__r4_pairs_and_lists_6_3z00(BgL_obj1z00_2783,
				BgL_obj2z00_2784);
		}

	}



/* econs */
	BGL_EXPORTED_DEF obj_t BGl_econsz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_obj1z00_8, obj_t BgL_obj2z00_9, obj_t BgL_obj3z00_10)
	{
		{	/* Ieee/pairlist.scm 239 */
			return MAKE_YOUNG_EPAIR(BgL_obj1z00_8, BgL_obj2z00_9, BgL_obj3z00_10);
		}

	}



/* &econs */
	obj_t BGl_z62econsz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2785,
		obj_t BgL_obj1z00_2786, obj_t BgL_obj2z00_2787, obj_t BgL_obj3z00_2788)
	{
		{	/* Ieee/pairlist.scm 239 */
			return
				BGl_econsz00zz__r4_pairs_and_lists_6_3z00(BgL_obj1z00_2786,
				BgL_obj2z00_2787, BgL_obj3z00_2788);
		}

	}



/* car */
	BGL_EXPORTED_DEF obj_t BGl_carz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_11)
	{
		{	/* Ieee/pairlist.scm 245 */
			return CAR(BgL_pairz00_11);
		}

	}



/* &car */
	obj_t BGl_z62carz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2789,
		obj_t BgL_pairz00_2790)
	{
		{	/* Ieee/pairlist.scm 245 */
			{	/* Ieee/pairlist.scm 246 */
				obj_t BgL_auxz00_3184;

				if (PAIRP(BgL_pairz00_2790))
					{	/* Ieee/pairlist.scm 246 */
						BgL_auxz00_3184 = BgL_pairz00_2790;
					}
				else
					{
						obj_t BgL_auxz00_3187;

						BgL_auxz00_3187 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 9743)),
							BGl_string2216z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2790);
						FAILURE(BgL_auxz00_3187, BFALSE, BFALSE);
					}
				return BGl_carz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3184);
			}
		}

	}



/* cdr */
	BGL_EXPORTED_DEF obj_t BGl_cdrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_12)
	{
		{	/* Ieee/pairlist.scm 251 */
			return CDR(BgL_pairz00_12);
		}

	}



/* &cdr */
	obj_t BGl_z62cdrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2791,
		obj_t BgL_pairz00_2792)
	{
		{	/* Ieee/pairlist.scm 251 */
			{	/* Ieee/pairlist.scm 252 */
				obj_t BgL_auxz00_3193;

				if (PAIRP(BgL_pairz00_2792))
					{	/* Ieee/pairlist.scm 252 */
						BgL_auxz00_3193 = BgL_pairz00_2792;
					}
				else
					{
						obj_t BgL_auxz00_3196;

						BgL_auxz00_3196 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 10008)),
							BGl_string2218z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2792);
						FAILURE(BgL_auxz00_3196, BFALSE, BFALSE);
					}
				return BGl_cdrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3193);
			}
		}

	}



/* cer */
	BGL_EXPORTED_DEF obj_t BGl_cerz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_13)
	{
		{	/* Ieee/pairlist.scm 257 */
			return CER(BgL_objz00_13);
		}

	}



/* &cer */
	obj_t BGl_z62cerz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2793,
		obj_t BgL_objz00_2794)
	{
		{	/* Ieee/pairlist.scm 257 */
			{	/* Ieee/pairlist.scm 258 */
				obj_t BgL_auxz00_3202;

				if (EPAIRP(BgL_objz00_2794))
					{	/* Ieee/pairlist.scm 258 */
						BgL_auxz00_3202 = BgL_objz00_2794;
					}
				else
					{
						obj_t BgL_auxz00_3205;

						BgL_auxz00_3205 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 10272)),
							BGl_string2219z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2220z00zz__r4_pairs_and_lists_6_3z00, BgL_objz00_2794);
						FAILURE(BgL_auxz00_3205, BFALSE, BFALSE);
					}
				return BGl_cerz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3202);
			}
		}

	}



/* caar */
	BGL_EXPORTED_DEF obj_t BGl_caarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_14)
	{
		{	/* Ieee/pairlist.scm 263 */
			return CAR(CAR(BgL_pairz00_14));
		}

	}



/* &caar */
	obj_t BGl_z62caarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2795,
		obj_t BgL_pairz00_2796)
	{
		{	/* Ieee/pairlist.scm 263 */
			{	/* Ieee/pairlist.scm 264 */
				obj_t BgL_auxz00_3212;

				if (PAIRP(BgL_pairz00_2796))
					{	/* Ieee/pairlist.scm 264 */
						BgL_auxz00_3212 = BgL_pairz00_2796;
					}
				else
					{
						obj_t BgL_auxz00_3215;

						BgL_auxz00_3215 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 10542)),
							BGl_string2221z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2796);
						FAILURE(BgL_auxz00_3215, BFALSE, BFALSE);
					}
				return BGl_caarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3212);
			}
		}

	}



/* cadr */
	BGL_EXPORTED_DEF obj_t BGl_cadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_15)
	{
		{	/* Ieee/pairlist.scm 269 */
			return CAR(CDR(BgL_pairz00_15));
		}

	}



/* &cadr */
	obj_t BGl_z62cadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2797,
		obj_t BgL_pairz00_2798)
	{
		{	/* Ieee/pairlist.scm 269 */
			{	/* Ieee/pairlist.scm 270 */
				obj_t BgL_auxz00_3222;

				if (PAIRP(BgL_pairz00_2798))
					{	/* Ieee/pairlist.scm 270 */
						BgL_auxz00_3222 = BgL_pairz00_2798;
					}
				else
					{
						obj_t BgL_auxz00_3225;

						BgL_auxz00_3225 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 10813)),
							BGl_string2222z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2798);
						FAILURE(BgL_auxz00_3225, BFALSE, BFALSE);
					}
				return BGl_cadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3222);
			}
		}

	}



/* cdar */
	BGL_EXPORTED_DEF obj_t BGl_cdarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_16)
	{
		{	/* Ieee/pairlist.scm 275 */
			return CDR(CAR(BgL_pairz00_16));
		}

	}



/* &cdar */
	obj_t BGl_z62cdarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2799,
		obj_t BgL_pairz00_2800)
	{
		{	/* Ieee/pairlist.scm 275 */
			{	/* Ieee/pairlist.scm 276 */
				obj_t BgL_auxz00_3232;

				if (PAIRP(BgL_pairz00_2800))
					{	/* Ieee/pairlist.scm 276 */
						BgL_auxz00_3232 = BgL_pairz00_2800;
					}
				else
					{
						obj_t BgL_auxz00_3235;

						BgL_auxz00_3235 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 11084)),
							BGl_string2223z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2800);
						FAILURE(BgL_auxz00_3235, BFALSE, BFALSE);
					}
				return BGl_cdarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3232);
			}
		}

	}



/* cddr */
	BGL_EXPORTED_DEF obj_t BGl_cddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_17)
	{
		{	/* Ieee/pairlist.scm 281 */
			return CDR(CDR(BgL_pairz00_17));
		}

	}



/* &cddr */
	obj_t BGl_z62cddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2801,
		obj_t BgL_pairz00_2802)
	{
		{	/* Ieee/pairlist.scm 281 */
			{	/* Ieee/pairlist.scm 282 */
				obj_t BgL_auxz00_3242;

				if (PAIRP(BgL_pairz00_2802))
					{	/* Ieee/pairlist.scm 282 */
						BgL_auxz00_3242 = BgL_pairz00_2802;
					}
				else
					{
						obj_t BgL_auxz00_3245;

						BgL_auxz00_3245 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 11355)),
							BGl_string2224z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2802);
						FAILURE(BgL_auxz00_3245, BFALSE, BFALSE);
					}
				return BGl_cddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3242);
			}
		}

	}



/* caaar */
	BGL_EXPORTED_DEF obj_t BGl_caaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_18)
	{
		{	/* Ieee/pairlist.scm 287 */
			return CAR(CAR(CAR(BgL_pairz00_18)));
		}

	}



/* &caaar */
	obj_t BGl_z62caaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2803,
		obj_t BgL_pairz00_2804)
	{
		{	/* Ieee/pairlist.scm 287 */
			{	/* Ieee/pairlist.scm 288 */
				obj_t BgL_auxz00_3253;

				if (PAIRP(BgL_pairz00_2804))
					{	/* Ieee/pairlist.scm 288 */
						BgL_auxz00_3253 = BgL_pairz00_2804;
					}
				else
					{
						obj_t BgL_auxz00_3256;

						BgL_auxz00_3256 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 11632)),
							BGl_string2225z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2804);
						FAILURE(BgL_auxz00_3256, BFALSE, BFALSE);
					}
				return BGl_caaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3253);
			}
		}

	}



/* caadr */
	BGL_EXPORTED_DEF obj_t BGl_caadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_19)
	{
		{	/* Ieee/pairlist.scm 293 */
			return CAR(CAR(CDR(BgL_pairz00_19)));
		}

	}



/* &caadr */
	obj_t BGl_z62caadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2805,
		obj_t BgL_pairz00_2806)
	{
		{	/* Ieee/pairlist.scm 293 */
			{	/* Ieee/pairlist.scm 294 */
				obj_t BgL_auxz00_3264;

				if (PAIRP(BgL_pairz00_2806))
					{	/* Ieee/pairlist.scm 294 */
						BgL_auxz00_3264 = BgL_pairz00_2806;
					}
				else
					{
						obj_t BgL_auxz00_3267;

						BgL_auxz00_3267 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 11910)),
							BGl_string2226z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2806);
						FAILURE(BgL_auxz00_3267, BFALSE, BFALSE);
					}
				return BGl_caadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3264);
			}
		}

	}



/* cadar */
	BGL_EXPORTED_DEF obj_t BGl_cadarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_20)
	{
		{	/* Ieee/pairlist.scm 299 */
			return CAR(CDR(CAR(BgL_pairz00_20)));
		}

	}



/* &cadar */
	obj_t BGl_z62cadarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2807,
		obj_t BgL_pairz00_2808)
	{
		{	/* Ieee/pairlist.scm 299 */
			{	/* Ieee/pairlist.scm 300 */
				obj_t BgL_auxz00_3275;

				if (PAIRP(BgL_pairz00_2808))
					{	/* Ieee/pairlist.scm 300 */
						BgL_auxz00_3275 = BgL_pairz00_2808;
					}
				else
					{
						obj_t BgL_auxz00_3278;

						BgL_auxz00_3278 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 12188)),
							BGl_string2227z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2808);
						FAILURE(BgL_auxz00_3278, BFALSE, BFALSE);
					}
				return BGl_cadarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3275);
			}
		}

	}



/* caddr */
	BGL_EXPORTED_DEF obj_t BGl_caddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_21)
	{
		{	/* Ieee/pairlist.scm 305 */
			return CAR(CDR(CDR(BgL_pairz00_21)));
		}

	}



/* &caddr */
	obj_t BGl_z62caddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2809,
		obj_t BgL_pairz00_2810)
	{
		{	/* Ieee/pairlist.scm 305 */
			{	/* Ieee/pairlist.scm 306 */
				obj_t BgL_auxz00_3286;

				if (PAIRP(BgL_pairz00_2810))
					{	/* Ieee/pairlist.scm 306 */
						BgL_auxz00_3286 = BgL_pairz00_2810;
					}
				else
					{
						obj_t BgL_auxz00_3289;

						BgL_auxz00_3289 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 12466)),
							BGl_string2228z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2810);
						FAILURE(BgL_auxz00_3289, BFALSE, BFALSE);
					}
				return BGl_caddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3286);
			}
		}

	}



/* cdaar */
	BGL_EXPORTED_DEF obj_t BGl_cdaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_22)
	{
		{	/* Ieee/pairlist.scm 311 */
			return CDR(CAR(CAR(BgL_pairz00_22)));
		}

	}



/* &cdaar */
	obj_t BGl_z62cdaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2811,
		obj_t BgL_pairz00_2812)
	{
		{	/* Ieee/pairlist.scm 311 */
			{	/* Ieee/pairlist.scm 312 */
				obj_t BgL_auxz00_3297;

				if (PAIRP(BgL_pairz00_2812))
					{	/* Ieee/pairlist.scm 312 */
						BgL_auxz00_3297 = BgL_pairz00_2812;
					}
				else
					{
						obj_t BgL_auxz00_3300;

						BgL_auxz00_3300 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 12744)),
							BGl_string2229z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2812);
						FAILURE(BgL_auxz00_3300, BFALSE, BFALSE);
					}
				return BGl_cdaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3297);
			}
		}

	}



/* cddar */
	BGL_EXPORTED_DEF obj_t BGl_cddarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_23)
	{
		{	/* Ieee/pairlist.scm 317 */
			return CDR(CDR(CAR(BgL_pairz00_23)));
		}

	}



/* &cddar */
	obj_t BGl_z62cddarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2813,
		obj_t BgL_pairz00_2814)
	{
		{	/* Ieee/pairlist.scm 317 */
			{	/* Ieee/pairlist.scm 318 */
				obj_t BgL_auxz00_3308;

				if (PAIRP(BgL_pairz00_2814))
					{	/* Ieee/pairlist.scm 318 */
						BgL_auxz00_3308 = BgL_pairz00_2814;
					}
				else
					{
						obj_t BgL_auxz00_3311;

						BgL_auxz00_3311 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 13022)),
							BGl_string2230z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2814);
						FAILURE(BgL_auxz00_3311, BFALSE, BFALSE);
					}
				return BGl_cddarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3308);
			}
		}

	}



/* cdadr */
	BGL_EXPORTED_DEF obj_t BGl_cdadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_24)
	{
		{	/* Ieee/pairlist.scm 323 */
			return CDR(CAR(CDR(BgL_pairz00_24)));
		}

	}



/* &cdadr */
	obj_t BGl_z62cdadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2815,
		obj_t BgL_pairz00_2816)
	{
		{	/* Ieee/pairlist.scm 323 */
			{	/* Ieee/pairlist.scm 324 */
				obj_t BgL_auxz00_3319;

				if (PAIRP(BgL_pairz00_2816))
					{	/* Ieee/pairlist.scm 324 */
						BgL_auxz00_3319 = BgL_pairz00_2816;
					}
				else
					{
						obj_t BgL_auxz00_3322;

						BgL_auxz00_3322 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 13300)),
							BGl_string2231z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2816);
						FAILURE(BgL_auxz00_3322, BFALSE, BFALSE);
					}
				return BGl_cdadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3319);
			}
		}

	}



/* cdddr */
	BGL_EXPORTED_DEF obj_t BGl_cdddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_25)
	{
		{	/* Ieee/pairlist.scm 329 */
			return CDR(CDR(CDR(BgL_pairz00_25)));
		}

	}



/* &cdddr */
	obj_t BGl_z62cdddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2817,
		obj_t BgL_pairz00_2818)
	{
		{	/* Ieee/pairlist.scm 329 */
			{	/* Ieee/pairlist.scm 330 */
				obj_t BgL_auxz00_3330;

				if (PAIRP(BgL_pairz00_2818))
					{	/* Ieee/pairlist.scm 330 */
						BgL_auxz00_3330 = BgL_pairz00_2818;
					}
				else
					{
						obj_t BgL_auxz00_3333;

						BgL_auxz00_3333 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 13578)),
							BGl_string2232z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2818);
						FAILURE(BgL_auxz00_3333, BFALSE, BFALSE);
					}
				return BGl_cdddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3330);
			}
		}

	}



/* caaaar */
	BGL_EXPORTED_DEF obj_t BGl_caaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_26)
	{
		{	/* Ieee/pairlist.scm 335 */
			return CAR(CAR(CAR(CAR(BgL_pairz00_26))));
		}

	}



/* &caaaar */
	obj_t BGl_z62caaaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2819,
		obj_t BgL_pairz00_2820)
	{
		{	/* Ieee/pairlist.scm 335 */
			{	/* Ieee/pairlist.scm 336 */
				obj_t BgL_auxz00_3342;

				if (PAIRP(BgL_pairz00_2820))
					{	/* Ieee/pairlist.scm 336 */
						BgL_auxz00_3342 = BgL_pairz00_2820;
					}
				else
					{
						obj_t BgL_auxz00_3345;

						BgL_auxz00_3345 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 13862)),
							BGl_string2233z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2820);
						FAILURE(BgL_auxz00_3345, BFALSE, BFALSE);
					}
				return BGl_caaaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3342);
			}
		}

	}



/* caaadr */
	BGL_EXPORTED_DEF obj_t BGl_caaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_27)
	{
		{	/* Ieee/pairlist.scm 341 */
			return CAR(CAR(CAR(CDR(BgL_pairz00_27))));
		}

	}



/* &caaadr */
	obj_t BGl_z62caaadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2821,
		obj_t BgL_pairz00_2822)
	{
		{	/* Ieee/pairlist.scm 341 */
			{	/* Ieee/pairlist.scm 342 */
				obj_t BgL_auxz00_3354;

				if (PAIRP(BgL_pairz00_2822))
					{	/* Ieee/pairlist.scm 342 */
						BgL_auxz00_3354 = BgL_pairz00_2822;
					}
				else
					{
						obj_t BgL_auxz00_3357;

						BgL_auxz00_3357 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 14147)),
							BGl_string2234z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2822);
						FAILURE(BgL_auxz00_3357, BFALSE, BFALSE);
					}
				return BGl_caaadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3354);
			}
		}

	}



/* caadar */
	BGL_EXPORTED_DEF obj_t BGl_caadarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_28)
	{
		{	/* Ieee/pairlist.scm 347 */
			return CAR(CAR(CDR(CAR(BgL_pairz00_28))));
		}

	}



/* &caadar */
	obj_t BGl_z62caadarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2823,
		obj_t BgL_pairz00_2824)
	{
		{	/* Ieee/pairlist.scm 347 */
			{	/* Ieee/pairlist.scm 348 */
				obj_t BgL_auxz00_3366;

				if (PAIRP(BgL_pairz00_2824))
					{	/* Ieee/pairlist.scm 348 */
						BgL_auxz00_3366 = BgL_pairz00_2824;
					}
				else
					{
						obj_t BgL_auxz00_3369;

						BgL_auxz00_3369 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 14432)),
							BGl_string2235z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2824);
						FAILURE(BgL_auxz00_3369, BFALSE, BFALSE);
					}
				return BGl_caadarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3366);
			}
		}

	}



/* cadaar */
	BGL_EXPORTED_DEF obj_t BGl_cadaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_29)
	{
		{	/* Ieee/pairlist.scm 353 */
			return CAR(CDR(CAR(CAR(BgL_pairz00_29))));
		}

	}



/* &cadaar */
	obj_t BGl_z62cadaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2825,
		obj_t BgL_pairz00_2826)
	{
		{	/* Ieee/pairlist.scm 353 */
			{	/* Ieee/pairlist.scm 354 */
				obj_t BgL_auxz00_3378;

				if (PAIRP(BgL_pairz00_2826))
					{	/* Ieee/pairlist.scm 354 */
						BgL_auxz00_3378 = BgL_pairz00_2826;
					}
				else
					{
						obj_t BgL_auxz00_3381;

						BgL_auxz00_3381 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 14717)),
							BGl_string2236z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2826);
						FAILURE(BgL_auxz00_3381, BFALSE, BFALSE);
					}
				return BGl_cadaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3378);
			}
		}

	}



/* cdaaar */
	BGL_EXPORTED_DEF obj_t BGl_cdaaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_30)
	{
		{	/* Ieee/pairlist.scm 359 */
			return CDR(CAR(CAR(CAR(BgL_pairz00_30))));
		}

	}



/* &cdaaar */
	obj_t BGl_z62cdaaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2827,
		obj_t BgL_pairz00_2828)
	{
		{	/* Ieee/pairlist.scm 359 */
			{	/* Ieee/pairlist.scm 360 */
				obj_t BgL_auxz00_3390;

				if (PAIRP(BgL_pairz00_2828))
					{	/* Ieee/pairlist.scm 360 */
						BgL_auxz00_3390 = BgL_pairz00_2828;
					}
				else
					{
						obj_t BgL_auxz00_3393;

						BgL_auxz00_3393 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 15002)),
							BGl_string2237z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2828);
						FAILURE(BgL_auxz00_3393, BFALSE, BFALSE);
					}
				return BGl_cdaaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3390);
			}
		}

	}



/* caaddr */
	BGL_EXPORTED_DEF obj_t BGl_caaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_31)
	{
		{	/* Ieee/pairlist.scm 365 */
			return CAR(CAR(CDR(CDR(BgL_pairz00_31))));
		}

	}



/* &caaddr */
	obj_t BGl_z62caaddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2829,
		obj_t BgL_pairz00_2830)
	{
		{	/* Ieee/pairlist.scm 365 */
			{	/* Ieee/pairlist.scm 366 */
				obj_t BgL_auxz00_3402;

				if (PAIRP(BgL_pairz00_2830))
					{	/* Ieee/pairlist.scm 366 */
						BgL_auxz00_3402 = BgL_pairz00_2830;
					}
				else
					{
						obj_t BgL_auxz00_3405;

						BgL_auxz00_3405 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 15287)),
							BGl_string2238z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2830);
						FAILURE(BgL_auxz00_3405, BFALSE, BFALSE);
					}
				return BGl_caaddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3402);
			}
		}

	}



/* caddar */
	BGL_EXPORTED_DEF obj_t BGl_caddarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_32)
	{
		{	/* Ieee/pairlist.scm 371 */
			return CAR(CDR(CDR(CAR(BgL_pairz00_32))));
		}

	}



/* &caddar */
	obj_t BGl_z62caddarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2831,
		obj_t BgL_pairz00_2832)
	{
		{	/* Ieee/pairlist.scm 371 */
			{	/* Ieee/pairlist.scm 372 */
				obj_t BgL_auxz00_3414;

				if (PAIRP(BgL_pairz00_2832))
					{	/* Ieee/pairlist.scm 372 */
						BgL_auxz00_3414 = BgL_pairz00_2832;
					}
				else
					{
						obj_t BgL_auxz00_3417;

						BgL_auxz00_3417 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 15572)),
							BGl_string2239z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2832);
						FAILURE(BgL_auxz00_3417, BFALSE, BFALSE);
					}
				return BGl_caddarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3414);
			}
		}

	}



/* cadadr */
	BGL_EXPORTED_DEF obj_t BGl_cadadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_33)
	{
		{	/* Ieee/pairlist.scm 377 */
			return CAR(CDR(CAR(CDR(BgL_pairz00_33))));
		}

	}



/* &cadadr */
	obj_t BGl_z62cadadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2833,
		obj_t BgL_pairz00_2834)
	{
		{	/* Ieee/pairlist.scm 377 */
			{	/* Ieee/pairlist.scm 378 */
				obj_t BgL_auxz00_3426;

				if (PAIRP(BgL_pairz00_2834))
					{	/* Ieee/pairlist.scm 378 */
						BgL_auxz00_3426 = BgL_pairz00_2834;
					}
				else
					{
						obj_t BgL_auxz00_3429;

						BgL_auxz00_3429 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 15857)),
							BGl_string2240z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2834);
						FAILURE(BgL_auxz00_3429, BFALSE, BFALSE);
					}
				return BGl_cadadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3426);
			}
		}

	}



/* cadddr */
	BGL_EXPORTED_DEF obj_t BGl_cadddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_34)
	{
		{	/* Ieee/pairlist.scm 383 */
			return CAR(CDR(CDR(CDR(BgL_pairz00_34))));
		}

	}



/* &cadddr */
	obj_t BGl_z62cadddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2835,
		obj_t BgL_pairz00_2836)
	{
		{	/* Ieee/pairlist.scm 383 */
			{	/* Ieee/pairlist.scm 384 */
				obj_t BgL_auxz00_3438;

				if (PAIRP(BgL_pairz00_2836))
					{	/* Ieee/pairlist.scm 384 */
						BgL_auxz00_3438 = BgL_pairz00_2836;
					}
				else
					{
						obj_t BgL_auxz00_3441;

						BgL_auxz00_3441 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 16142)),
							BGl_string2241z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2836);
						FAILURE(BgL_auxz00_3441, BFALSE, BFALSE);
					}
				return BGl_cadddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3438);
			}
		}

	}



/* cdaadr */
	BGL_EXPORTED_DEF obj_t BGl_cdaadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_35)
	{
		{	/* Ieee/pairlist.scm 389 */
			return CDR(CAR(CAR(CDR(BgL_pairz00_35))));
		}

	}



/* &cdaadr */
	obj_t BGl_z62cdaadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2837,
		obj_t BgL_pairz00_2838)
	{
		{	/* Ieee/pairlist.scm 389 */
			{	/* Ieee/pairlist.scm 390 */
				obj_t BgL_auxz00_3450;

				if (PAIRP(BgL_pairz00_2838))
					{	/* Ieee/pairlist.scm 390 */
						BgL_auxz00_3450 = BgL_pairz00_2838;
					}
				else
					{
						obj_t BgL_auxz00_3453;

						BgL_auxz00_3453 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 16427)),
							BGl_string2242z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2838);
						FAILURE(BgL_auxz00_3453, BFALSE, BFALSE);
					}
				return BGl_cdaadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3450);
			}
		}

	}



/* cdaddr */
	BGL_EXPORTED_DEF obj_t BGl_cdaddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_36)
	{
		{	/* Ieee/pairlist.scm 395 */
			return CDR(CAR(CDR(CDR(BgL_pairz00_36))));
		}

	}



/* &cdaddr */
	obj_t BGl_z62cdaddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2839,
		obj_t BgL_pairz00_2840)
	{
		{	/* Ieee/pairlist.scm 395 */
			{	/* Ieee/pairlist.scm 396 */
				obj_t BgL_auxz00_3462;

				if (PAIRP(BgL_pairz00_2840))
					{	/* Ieee/pairlist.scm 396 */
						BgL_auxz00_3462 = BgL_pairz00_2840;
					}
				else
					{
						obj_t BgL_auxz00_3465;

						BgL_auxz00_3465 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 16712)),
							BGl_string2243z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2840);
						FAILURE(BgL_auxz00_3465, BFALSE, BFALSE);
					}
				return BGl_cdaddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3462);
			}
		}

	}



/* cddaar */
	BGL_EXPORTED_DEF obj_t BGl_cddaarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_37)
	{
		{	/* Ieee/pairlist.scm 401 */
			return CDR(CDR(CAR(CAR(BgL_pairz00_37))));
		}

	}



/* &cddaar */
	obj_t BGl_z62cddaarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2841,
		obj_t BgL_pairz00_2842)
	{
		{	/* Ieee/pairlist.scm 401 */
			{	/* Ieee/pairlist.scm 402 */
				obj_t BgL_auxz00_3474;

				if (PAIRP(BgL_pairz00_2842))
					{	/* Ieee/pairlist.scm 402 */
						BgL_auxz00_3474 = BgL_pairz00_2842;
					}
				else
					{
						obj_t BgL_auxz00_3477;

						BgL_auxz00_3477 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 16997)),
							BGl_string2244z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2842);
						FAILURE(BgL_auxz00_3477, BFALSE, BFALSE);
					}
				return BGl_cddaarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3474);
			}
		}

	}



/* cddadr */
	BGL_EXPORTED_DEF obj_t BGl_cddadrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_38)
	{
		{	/* Ieee/pairlist.scm 407 */
			return CDR(CDR(CAR(CDR(BgL_pairz00_38))));
		}

	}



/* &cddadr */
	obj_t BGl_z62cddadrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2843,
		obj_t BgL_pairz00_2844)
	{
		{	/* Ieee/pairlist.scm 407 */
			{	/* Ieee/pairlist.scm 408 */
				obj_t BgL_auxz00_3486;

				if (PAIRP(BgL_pairz00_2844))
					{	/* Ieee/pairlist.scm 408 */
						BgL_auxz00_3486 = BgL_pairz00_2844;
					}
				else
					{
						obj_t BgL_auxz00_3489;

						BgL_auxz00_3489 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 17282)),
							BGl_string2245z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2844);
						FAILURE(BgL_auxz00_3489, BFALSE, BFALSE);
					}
				return BGl_cddadrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3486);
			}
		}

	}



/* cdadar */
	BGL_EXPORTED_DEF obj_t BGl_cdadarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_39)
	{
		{	/* Ieee/pairlist.scm 413 */
			return CDR(CAR(CDR(CAR(BgL_pairz00_39))));
		}

	}



/* &cdadar */
	obj_t BGl_z62cdadarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2845,
		obj_t BgL_pairz00_2846)
	{
		{	/* Ieee/pairlist.scm 413 */
			{	/* Ieee/pairlist.scm 414 */
				obj_t BgL_auxz00_3498;

				if (PAIRP(BgL_pairz00_2846))
					{	/* Ieee/pairlist.scm 414 */
						BgL_auxz00_3498 = BgL_pairz00_2846;
					}
				else
					{
						obj_t BgL_auxz00_3501;

						BgL_auxz00_3501 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 17567)),
							BGl_string2246z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2846);
						FAILURE(BgL_auxz00_3501, BFALSE, BFALSE);
					}
				return BGl_cdadarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3498);
			}
		}

	}



/* cdddar */
	BGL_EXPORTED_DEF obj_t BGl_cdddarz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_40)
	{
		{	/* Ieee/pairlist.scm 419 */
			return CDR(CDR(CDR(CAR(BgL_pairz00_40))));
		}

	}



/* &cdddar */
	obj_t BGl_z62cdddarz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2847,
		obj_t BgL_pairz00_2848)
	{
		{	/* Ieee/pairlist.scm 419 */
			{	/* Ieee/pairlist.scm 420 */
				obj_t BgL_auxz00_3510;

				if (PAIRP(BgL_pairz00_2848))
					{	/* Ieee/pairlist.scm 420 */
						BgL_auxz00_3510 = BgL_pairz00_2848;
					}
				else
					{
						obj_t BgL_auxz00_3513;

						BgL_auxz00_3513 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 17852)),
							BGl_string2247z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2848);
						FAILURE(BgL_auxz00_3513, BFALSE, BFALSE);
					}
				return BGl_cdddarz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3510);
			}
		}

	}



/* cddddr */
	BGL_EXPORTED_DEF obj_t BGl_cddddrz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_41)
	{
		{	/* Ieee/pairlist.scm 426 */
			return CDR(CDR(CDR(CDR(BgL_pairz00_41))));
		}

	}



/* &cddddr */
	obj_t BGl_z62cddddrz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2849,
		obj_t BgL_pairz00_2850)
	{
		{	/* Ieee/pairlist.scm 426 */
			{	/* Ieee/pairlist.scm 427 */
				obj_t BgL_auxz00_3522;

				if (PAIRP(BgL_pairz00_2850))
					{	/* Ieee/pairlist.scm 427 */
						BgL_auxz00_3522 = BgL_pairz00_2850;
					}
				else
					{
						obj_t BgL_auxz00_3525;

						BgL_auxz00_3525 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 18138)),
							BGl_string2248z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2850);
						FAILURE(BgL_auxz00_3525, BFALSE, BFALSE);
					}
				return BGl_cddddrz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3522);
			}
		}

	}



/* set-car! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_42, obj_t BgL_objz00_43)
	{
		{	/* Ieee/pairlist.scm 432 */
			return SET_CAR(BgL_pairz00_42, BgL_objz00_43);
		}

	}



/* &set-car! */
	obj_t BGl_z62setzd2carz12za2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2851, obj_t BgL_pairz00_2852, obj_t BgL_objz00_2853)
	{
		{	/* Ieee/pairlist.scm 432 */
			{	/* Ieee/pairlist.scm 433 */
				obj_t BgL_auxz00_3531;

				if (PAIRP(BgL_pairz00_2852))
					{	/* Ieee/pairlist.scm 433 */
						BgL_auxz00_3531 = BgL_pairz00_2852;
					}
				else
					{
						obj_t BgL_auxz00_3534;

						BgL_auxz00_3534 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 18414)),
							BGl_string2249z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2852);
						FAILURE(BgL_auxz00_3534, BFALSE, BFALSE);
					}
				return
					BGl_setzd2carz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3531,
					BgL_objz00_2853);
			}
		}

	}



/* set-cdr! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_pairz00_44, obj_t BgL_objz00_45)
	{
		{	/* Ieee/pairlist.scm 438 */
			return SET_CDR(BgL_pairz00_44, BgL_objz00_45);
		}

	}



/* &set-cdr! */
	obj_t BGl_z62setzd2cdrz12za2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2854, obj_t BgL_pairz00_2855, obj_t BgL_objz00_2856)
	{
		{	/* Ieee/pairlist.scm 438 */
			{	/* Ieee/pairlist.scm 439 */
				obj_t BgL_auxz00_3540;

				if (PAIRP(BgL_pairz00_2855))
					{	/* Ieee/pairlist.scm 439 */
						BgL_auxz00_3540 = BgL_pairz00_2855;
					}
				else
					{
						obj_t BgL_auxz00_3543;

						BgL_auxz00_3543 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 18697)),
							BGl_string2250z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_pairz00_2855);
						FAILURE(BgL_auxz00_3543, BFALSE, BFALSE);
					}
				return
					BGl_setzd2cdrz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3540,
					BgL_objz00_2856);
			}
		}

	}



/* set-cer! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_epairz00_46, obj_t BgL_objz00_47)
	{
		{	/* Ieee/pairlist.scm 444 */
			return SET_CER(BgL_epairz00_46, BgL_objz00_47);
		}

	}



/* &set-cer! */
	obj_t BGl_z62setzd2cerz12za2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2857, obj_t BgL_epairz00_2858, obj_t BgL_objz00_2859)
	{
		{	/* Ieee/pairlist.scm 444 */
			{	/* Ieee/pairlist.scm 445 */
				obj_t BgL_auxz00_3549;

				if (EPAIRP(BgL_epairz00_2858))
					{	/* Ieee/pairlist.scm 445 */
						BgL_auxz00_3549 = BgL_epairz00_2858;
					}
				else
					{
						obj_t BgL_auxz00_3552;

						BgL_auxz00_3552 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 18981)),
							BGl_string2251z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2220z00zz__r4_pairs_and_lists_6_3z00,
							BgL_epairz00_2858);
						FAILURE(BgL_auxz00_3552, BFALSE, BFALSE);
					}
				return
					BGl_setzd2cerz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3549,
					BgL_objz00_2859);
			}
		}

	}



/* null? */
	BGL_EXPORTED_DEF bool_t BGl_nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_48)
	{
		{	/* Ieee/pairlist.scm 450 */
			return NULLP(BgL_objz00_48);
		}

	}



/* &null? */
	obj_t BGl_z62nullzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2860,
		obj_t BgL_objz00_2861)
	{
		{	/* Ieee/pairlist.scm 450 */
			return
				BBOOL(BGl_nullzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2861));
		}

	}



/* list */
	BGL_EXPORTED_DEF obj_t BGl_listz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_49)
	{
		{	/* Ieee/pairlist.scm 456 */
			return BgL_lz00_49;
		}

	}



/* &list */
	obj_t BGl_z62listz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2862,
		obj_t BgL_lz00_2863)
	{
		{	/* Ieee/pairlist.scm 456 */
			return BGl_listz00zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2863);
		}

	}



/* list? */
	BGL_EXPORTED_DEF bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_50)
	{
		{	/* Ieee/pairlist.scm 462 */
			{
				obj_t BgL_xz00_865;
				obj_t BgL_prevz00_866;

				if (NULLP(BgL_xz00_50))
					{	/* Ieee/pairlist.scm 479 */
						return ((bool_t) 1);
					}
				else
					{	/* Ieee/pairlist.scm 479 */
						if (PAIRP(BgL_xz00_50))
							{	/* Ieee/pairlist.scm 482 */
								obj_t BgL_arg1306z00_870;

								BgL_arg1306z00_870 = CDR(BgL_xz00_50);
								if (NULLP(BgL_arg1306z00_870))
									{	/* Ieee/pairlist.scm 464 */
										return ((bool_t) 1);
									}
								else
									{	/* Ieee/pairlist.scm 464 */
										if (PAIRP(BgL_arg1306z00_870))
											{	/* Ieee/pairlist.scm 466 */
												if ((BgL_arg1306z00_870 == BgL_xz00_50))
													{	/* Ieee/pairlist.scm 467 */
														return ((bool_t) 0);
													}
												else
													{	/* Ieee/pairlist.scm 467 */
														BgL_xz00_865 = CDR(BgL_arg1306z00_870);
														BgL_prevz00_866 = BgL_xz00_50;
													BgL_l2z00_867:
														if (NULLP(BgL_xz00_865))
															{	/* Ieee/pairlist.scm 472 */
																return ((bool_t) 1);
															}
														else
															{	/* Ieee/pairlist.scm 472 */
																if (PAIRP(BgL_xz00_865))
																	{	/* Ieee/pairlist.scm 474 */
																		if ((BgL_xz00_865 == BgL_prevz00_866))
																			{	/* Ieee/pairlist.scm 475 */
																				return ((bool_t) 0);
																			}
																		else
																			{	/* Ieee/pairlist.scm 477 */
																				obj_t BgL_arg1314z00_1828;
																				obj_t BgL_arg1315z00_1829;

																				BgL_arg1314z00_1828 = CDR(BgL_xz00_865);
																				BgL_arg1315z00_1829 =
																					CDR(((obj_t) BgL_prevz00_866));
																				if (NULLP(BgL_arg1314z00_1828))
																					{	/* Ieee/pairlist.scm 464 */
																						return ((bool_t) 1);
																					}
																				else
																					{	/* Ieee/pairlist.scm 464 */
																						if (PAIRP(BgL_arg1314z00_1828))
																							{	/* Ieee/pairlist.scm 466 */
																								if (
																									(BgL_arg1314z00_1828 ==
																										BgL_arg1315z00_1829))
																									{	/* Ieee/pairlist.scm 467 */
																										return ((bool_t) 0);
																									}
																								else
																									{
																										obj_t BgL_prevz00_3589;
																										obj_t BgL_xz00_3587;

																										BgL_xz00_3587 =
																											CDR(BgL_arg1314z00_1828);
																										BgL_prevz00_3589 =
																											BgL_arg1315z00_1829;
																										BgL_prevz00_866 =
																											BgL_prevz00_3589;
																										BgL_xz00_865 =
																											BgL_xz00_3587;
																										goto BgL_l2z00_867;
																									}
																							}
																						else
																							{	/* Ieee/pairlist.scm 466 */
																								return ((bool_t) 0);
																							}
																					}
																			}
																	}
																else
																	{	/* Ieee/pairlist.scm 474 */
																		return ((bool_t) 0);
																	}
															}
													}
											}
										else
											{	/* Ieee/pairlist.scm 466 */
												return ((bool_t) 0);
											}
									}
							}
						else
							{	/* Ieee/pairlist.scm 481 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* &list? */
	obj_t BGl_z62listzf3z91zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2864,
		obj_t BgL_xz00_2865)
	{
		{	/* Ieee/pairlist.scm 462 */
			return BBOOL(BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_xz00_2865));
		}

	}



/* append-2 */
	BGL_EXPORTED_DEF obj_t bgl_append2(obj_t BgL_l1z00_51, obj_t BgL_l2z00_52)
	{
		{	/* Ieee/pairlist.scm 489 */
			{	/* Ieee/pairlist.scm 490 */
				obj_t BgL_headz00_880;

				BgL_headz00_880 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_52);
				{
					obj_t BgL_prevz00_1868;
					obj_t BgL_tailz00_1869;

					BgL_prevz00_1868 = BgL_headz00_880;
					BgL_tailz00_1869 = BgL_l1z00_51;
				BgL_loopz00_1867:
					if (NULLP(BgL_tailz00_1869))
						{	/* Ieee/pairlist.scm 492 */
							BNIL;
						}
					else
						{	/* Ieee/pairlist.scm 494 */
							obj_t BgL_newzd2prevzd2_1875;

							{	/* Ieee/pairlist.scm 494 */
								obj_t BgL_arg1318z00_1876;

								BgL_arg1318z00_1876 = CAR(((obj_t) BgL_tailz00_1869));
								BgL_newzd2prevzd2_1875 =
									MAKE_YOUNG_PAIR(BgL_arg1318z00_1876, BgL_l2z00_52);
							}
							SET_CDR(BgL_prevz00_1868, BgL_newzd2prevzd2_1875);
							{	/* Ieee/pairlist.scm 496 */
								obj_t BgL_arg1317z00_1877;

								BgL_arg1317z00_1877 = CDR(((obj_t) BgL_tailz00_1869));
								{
									obj_t BgL_tailz00_3603;
									obj_t BgL_prevz00_3602;

									BgL_prevz00_3602 = BgL_newzd2prevzd2_1875;
									BgL_tailz00_3603 = BgL_arg1317z00_1877;
									BgL_tailz00_1869 = BgL_tailz00_3603;
									BgL_prevz00_1868 = BgL_prevz00_3602;
									goto BgL_loopz00_1867;
								}
							}
						}
				}
				return CDR(BgL_headz00_880);
			}
		}

	}



/* &append-2 */
	obj_t BGl_z62appendzd22zb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2866,
		obj_t BgL_l1z00_2867, obj_t BgL_l2z00_2868)
	{
		{	/* Ieee/pairlist.scm 489 */
			{	/* Ieee/pairlist.scm 490 */
				obj_t BgL_auxz00_3605;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_l1z00_2867))
					{	/* Ieee/pairlist.scm 490 */
						BgL_auxz00_3605 = BgL_l1z00_2867;
					}
				else
					{
						obj_t BgL_auxz00_3608;

						BgL_auxz00_3608 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 20438)),
							BGl_string2252z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_l1z00_2867);
						FAILURE(BgL_auxz00_3608, BFALSE, BFALSE);
					}
				return bgl_append2(BgL_auxz00_3605, BgL_l2z00_2868);
			}
		}

	}



/* eappend-2 */
	BGL_EXPORTED_DEF obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_l1z00_53, obj_t BgL_l2z00_54)
	{
		{	/* Ieee/pairlist.scm 503 */
			{	/* Ieee/pairlist.scm 504 */
				obj_t BgL_headz00_888;

				{	/* Ieee/pairlist.scm 504 */
					bool_t BgL_test2505z00_3613;

					{	/* Ieee/pairlist.scm 504 */
						bool_t BgL_res1857z00_1883;

						BgL_res1857z00_1883 = EPAIRP(BgL_l2z00_54);
						BgL_test2505z00_3613 = BgL_res1857z00_1883;
					}
					if (BgL_test2505z00_3613)
						{	/* Ieee/pairlist.scm 505 */
							obj_t BgL_arg1328z00_900;

							BgL_arg1328z00_900 = CER(((obj_t) BgL_l2z00_54));
							{	/* Ieee/pairlist.scm 505 */
								obj_t BgL_res1858z00_1885;

								BgL_res1858z00_1885 =
									MAKE_YOUNG_EPAIR(BNIL, BgL_l2z00_54, BgL_arg1328z00_900);
								BgL_headz00_888 = BgL_res1858z00_1885;
							}
						}
					else
						{	/* Ieee/pairlist.scm 504 */
							BgL_headz00_888 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_54);
						}
				}
				{
					obj_t BgL_prevz00_889;
					obj_t BgL_tailz00_890;

					BgL_prevz00_889 = BgL_headz00_888;
					BgL_tailz00_890 = BgL_l1z00_53;
				BgL_loopz00_891:
					if (NULLP(BgL_tailz00_890))
						{	/* Ieee/pairlist.scm 508 */
							BNIL;
						}
					else
						{	/* Ieee/pairlist.scm 510 */
							obj_t BgL_newzd2prevzd2_893;

							{	/* Ieee/pairlist.scm 510 */
								bool_t BgL_test2507z00_3621;

								{	/* Ieee/pairlist.scm 510 */
									bool_t BgL_res1860z00_1887;

									BgL_res1860z00_1887 = EPAIRP(BgL_tailz00_890);
									BgL_test2507z00_3621 = BgL_res1860z00_1887;
								}
								if (BgL_test2507z00_3621)
									{	/* Ieee/pairlist.scm 511 */
										obj_t BgL_arg1324z00_896;
										obj_t BgL_arg1325z00_897;

										BgL_arg1324z00_896 = CAR(((obj_t) BgL_tailz00_890));
										BgL_arg1325z00_897 = CER(((obj_t) BgL_tailz00_890));
										{	/* Ieee/pairlist.scm 511 */
											obj_t BgL_res1861z00_1890;

											BgL_res1861z00_1890 =
												MAKE_YOUNG_EPAIR(BgL_arg1324z00_896, BgL_l2z00_54,
												BgL_arg1325z00_897);
											BgL_newzd2prevzd2_893 = BgL_res1861z00_1890;
										}
									}
								else
									{	/* Ieee/pairlist.scm 512 */
										obj_t BgL_arg1326z00_898;

										BgL_arg1326z00_898 = CAR(((obj_t) BgL_tailz00_890));
										BgL_newzd2prevzd2_893 =
											MAKE_YOUNG_PAIR(BgL_arg1326z00_898, BgL_l2z00_54);
									}
							}
							SET_CDR(BgL_prevz00_889, BgL_newzd2prevzd2_893);
							{	/* Ieee/pairlist.scm 514 */
								obj_t BgL_arg1322z00_894;

								BgL_arg1322z00_894 = CDR(((obj_t) BgL_tailz00_890));
								{
									obj_t BgL_tailz00_3635;
									obj_t BgL_prevz00_3634;

									BgL_prevz00_3634 = BgL_newzd2prevzd2_893;
									BgL_tailz00_3635 = BgL_arg1322z00_894;
									BgL_tailz00_890 = BgL_tailz00_3635;
									BgL_prevz00_889 = BgL_prevz00_3634;
									goto BgL_loopz00_891;
								}
							}
						}
					return CDR(BgL_headz00_888);
				}
			}
		}

	}



/* &eappend-2 */
	obj_t BGl_z62eappendzd22zb0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2869, obj_t BgL_l1z00_2870, obj_t BgL_l2z00_2871)
	{
		{	/* Ieee/pairlist.scm 503 */
			{	/* Ieee/pairlist.scm 504 */
				obj_t BgL_auxz00_3637;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_l1z00_2870))
					{	/* Ieee/pairlist.scm 504 */
						BgL_auxz00_3637 = BgL_l1z00_2870;
					}
				else
					{
						obj_t BgL_auxz00_3640;

						BgL_auxz00_3640 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 20929)),
							BGl_string2254z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_l1z00_2870);
						FAILURE(BgL_auxz00_3640, BFALSE, BFALSE);
					}
				return
					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3637,
					BgL_l2z00_2871);
			}
		}

	}



/* append */
	BGL_EXPORTED_DEF obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_55)
	{
		{	/* Ieee/pairlist.scm 521 */
			return BGl_appendzd2listze72z35zz__r4_pairs_and_lists_6_3z00(BgL_lz00_55);
		}

	}



/* append-list~2 */
	obj_t BGl_appendzd2listze72z35zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_901)
	{
		{	/* Ieee/pairlist.scm 522 */
			{	/* Ieee/pairlist.scm 523 */
				long BgL_lenz00_903;

				BgL_lenz00_903 = bgl_list_length(BgL_lz00_901);
				{

					switch (BgL_lenz00_903)
						{
						case ((long) 0):

							return BNIL;
							break;
						case ((long) 1):

							return CAR(((obj_t) BgL_lz00_901));
							break;
						case ((long) 2):

							{	/* Ieee/pairlist.scm 529 */
								obj_t BgL_arg1330z00_907;
								obj_t BgL_arg1331z00_908;

								BgL_arg1330z00_907 = CAR(((obj_t) BgL_lz00_901));
								{	/* Ieee/pairlist.scm 530 */
									obj_t BgL_pairz00_1900;

									BgL_pairz00_1900 = CDR(((obj_t) BgL_lz00_901));
									BgL_arg1331z00_908 = CAR(BgL_pairz00_1900);
								}
								return
									BGl_appendzd221011zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1330z00_907, BgL_arg1331z00_908);
							}
							break;
						default:
							{	/* Ieee/pairlist.scm 531 */
								obj_t BgL_arg1334z00_910;
								obj_t BgL_arg1335z00_911;

								BgL_arg1334z00_910 = CAR(((obj_t) BgL_lz00_901));
								{	/* Ieee/pairlist.scm 532 */
									obj_t BgL_arg1337z00_912;

									BgL_arg1337z00_912 = CDR(((obj_t) BgL_lz00_901));
									BgL_arg1335z00_911 =
										BGl_appendzd2listze72z35zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1337z00_912);
								}
								return
									BGl_appendzd221011zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1334z00_910, BgL_arg1335z00_911);
							}
						}
				}
			}
		}

	}



/* &append */
	obj_t BGl_z62appendz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2872,
		obj_t BgL_lz00_2873)
	{
		{	/* Ieee/pairlist.scm 521 */
			return BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2873);
		}

	}



/* eappend */
	BGL_EXPORTED_DEF obj_t BGl_eappendz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_56)
	{
		{	/* Ieee/pairlist.scm 538 */
			return BGl_appendzd2listze71z35zz__r4_pairs_and_lists_6_3z00(BgL_lz00_56);
		}

	}



/* append-list~1 */
	obj_t BGl_appendzd2listze71z35zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_913)
	{
		{	/* Ieee/pairlist.scm 539 */
			{	/* Ieee/pairlist.scm 540 */
				long BgL_lenz00_915;

				BgL_lenz00_915 = bgl_list_length(BgL_lz00_913);
				{

					switch (BgL_lenz00_915)
						{
						case ((long) 0):

							return BNIL;
							break;
						case ((long) 1):

							return CAR(((obj_t) BgL_lz00_913));
							break;
						case ((long) 2):

							{	/* Ieee/pairlist.scm 546 */
								obj_t BgL_arg1339z00_919;
								obj_t BgL_arg1340z00_920;

								BgL_arg1339z00_919 = CAR(((obj_t) BgL_lz00_913));
								{	/* Ieee/pairlist.scm 547 */
									obj_t BgL_pairz00_1906;

									BgL_pairz00_1906 = CDR(((obj_t) BgL_lz00_913));
									BgL_arg1340z00_920 = CAR(BgL_pairz00_1906);
								}
								return
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1339z00_919, BgL_arg1340z00_920);
							}
							break;
						default:
							{	/* Ieee/pairlist.scm 548 */
								obj_t BgL_arg1342z00_922;
								obj_t BgL_arg1343z00_923;

								BgL_arg1342z00_922 = CAR(((obj_t) BgL_lz00_913));
								BgL_arg1343z00_923 =
									BGl_appendzd2listze71z35zz__r4_pairs_and_lists_6_3z00(CDR(
										((obj_t) BgL_lz00_913)));
								return
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1342z00_922, BgL_arg1343z00_923);
							}
						}
				}
			}
		}

	}



/* &eappend */
	obj_t BGl_z62eappendz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2874,
		obj_t BgL_lz00_2875)
	{
		{	/* Ieee/pairlist.scm 538 */
			return BGl_eappendz00zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2875);
		}

	}



/* append! */
	BGL_EXPORTED_DEF obj_t BGl_appendz12z12zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_57)
	{
		{	/* Ieee/pairlist.scm 555 */
			return BGl_appendzd2listze70z35zz__r4_pairs_and_lists_6_3z00(BgL_lz00_57);
		}

	}



/* append-list~0 */
	obj_t BGl_appendzd2listze70z35zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_925)
	{
		{	/* Ieee/pairlist.scm 556 */
			{	/* Ieee/pairlist.scm 557 */
				long BgL_lenz00_927;

				BgL_lenz00_927 = bgl_list_length(BgL_lz00_925);
				{

					switch (BgL_lenz00_927)
						{
						case ((long) 0):

							return BNIL;
							break;
						case ((long) 1):

							return CAR(((obj_t) BgL_lz00_925));
							break;
						case ((long) 2):

							{	/* Ieee/pairlist.scm 563 */
								obj_t BgL_arg1346z00_931;
								obj_t BgL_arg1347z00_932;

								BgL_arg1346z00_931 = CAR(((obj_t) BgL_lz00_925));
								{	/* Ieee/pairlist.scm 564 */
									obj_t BgL_pairz00_1912;

									BgL_pairz00_1912 = CDR(((obj_t) BgL_lz00_925));
									BgL_arg1347z00_932 = CAR(BgL_pairz00_1912);
								}
								return
									BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1346z00_931, BgL_arg1347z00_932);
							}
							break;
						default:
							{	/* Ieee/pairlist.scm 565 */
								obj_t BgL_arg1350z00_934;
								obj_t BgL_arg1351z00_935;

								BgL_arg1350z00_934 = CAR(((obj_t) BgL_lz00_925));
								{	/* Ieee/pairlist.scm 566 */
									obj_t BgL_arg1352z00_936;

									BgL_arg1352z00_936 = CDR(((obj_t) BgL_lz00_925));
									BgL_arg1351z00_935 =
										BGl_appendzd2listze70z35zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1352z00_936);
								}
								return
									BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1350z00_934, BgL_arg1351z00_935);
							}
						}
				}
			}
		}

	}



/* &append! */
	obj_t BGl_z62appendz12z70zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2876,
		obj_t BgL_lz00_2877)
	{
		{	/* Ieee/pairlist.scm 555 */
			return BGl_appendz12z12zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2877);
		}

	}



/* append-2! */
	BGL_EXPORTED_DEF obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_58, obj_t BgL_yz00_59)
	{
		{	/* Ieee/pairlist.scm 572 */
			if (NULLP(BgL_xz00_58))
				{	/* Ieee/pairlist.scm 573 */
					return BgL_yz00_59;
				}
			else
				{	/* Ieee/pairlist.scm 576 */
					obj_t BgL_arg1354z00_939;

					BgL_arg1354z00_939 = CDR(BgL_xz00_58);
					{
						obj_t BgL_az00_1926;
						obj_t BgL_bz00_1927;

						BgL_az00_1926 = BgL_xz00_58;
						BgL_bz00_1927 = BgL_arg1354z00_939;
					BgL_dozd2loopzd2zd21018zd2_1925:
						if (NULLP(BgL_bz00_1927))
							{	/* Ieee/pairlist.scm 575 */
								{	/* Ieee/pairlist.scm 439 */
									obj_t BgL_tmpz00_3704;

									BgL_tmpz00_3704 = ((obj_t) BgL_az00_1926);
									SET_CDR(BgL_tmpz00_3704, BgL_yz00_59);
								}
								return BgL_xz00_58;
							}
						else
							{	/* Ieee/pairlist.scm 576 */
								obj_t BgL_arg1357z00_1931;

								BgL_arg1357z00_1931 = CDR(((obj_t) BgL_bz00_1927));
								{
									obj_t BgL_bz00_3710;
									obj_t BgL_az00_3709;

									BgL_az00_3709 = BgL_bz00_1927;
									BgL_bz00_3710 = BgL_arg1357z00_1931;
									BgL_bz00_1927 = BgL_bz00_3710;
									BgL_az00_1926 = BgL_az00_3709;
									goto BgL_dozd2loopzd2zd21018zd2_1925;
								}
							}
					}
				}
		}

	}



/* &append-2! */
	obj_t BGl_z62appendzd22z12za2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2878, obj_t BgL_xz00_2879, obj_t BgL_yz00_2880)
	{
		{	/* Ieee/pairlist.scm 572 */
			{	/* Ieee/pairlist.scm 573 */
				obj_t BgL_auxz00_3718;
				obj_t BgL_auxz00_3711;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_yz00_2880))
					{	/* Ieee/pairlist.scm 573 */
						BgL_auxz00_3718 = BgL_yz00_2880;
					}
				else
					{
						obj_t BgL_auxz00_3721;

						BgL_auxz00_3721 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 23116)),
							BGl_string2255z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_2880);
						FAILURE(BgL_auxz00_3721, BFALSE, BFALSE);
					}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_xz00_2879))
					{	/* Ieee/pairlist.scm 573 */
						BgL_auxz00_3711 = BgL_xz00_2879;
					}
				else
					{
						obj_t BgL_auxz00_3714;

						BgL_auxz00_3714 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 23116)),
							BGl_string2255z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_2879);
						FAILURE(BgL_auxz00_3714, BFALSE, BFALSE);
					}
				return
					BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3711,
					BgL_auxz00_3718);
			}
		}

	}



/* length */
	BGL_EXPORTED_DEF long bgl_list_length(obj_t BgL_listz00_60)
	{
		{	/* Ieee/pairlist.scm 584 */
			{
				obj_t BgL_lz00_1951;
				long BgL_resz00_1952;

				BgL_lz00_1951 = BgL_listz00_60;
				BgL_resz00_1952 = ((long) 0);
			BgL_loopz00_1950:
				if (NULLP(BgL_lz00_1951))
					{	/* Ieee/pairlist.scm 588 */
						return BgL_resz00_1952;
					}
				else
					{
						long BgL_resz00_3731;
						obj_t BgL_lz00_3728;

						BgL_lz00_3728 = CDR(((obj_t) BgL_lz00_1951));
						BgL_resz00_3731 = (((long) 1) + BgL_resz00_1952);
						BgL_resz00_1952 = BgL_resz00_3731;
						BgL_lz00_1951 = BgL_lz00_3728;
						goto BgL_loopz00_1950;
					}
			}
		}

	}



/* &length */
	obj_t BGl_z62lengthz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2881,
		obj_t BgL_listz00_2882)
	{
		{	/* Ieee/pairlist.scm 584 */
			{	/* Ieee/pairlist.scm 585 */
				long BgL_tmpz00_3733;

				{	/* Ieee/pairlist.scm 585 */
					obj_t BgL_auxz00_3734;

					if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
						(BgL_listz00_2882))
						{	/* Ieee/pairlist.scm 585 */
							BgL_auxz00_3734 = BgL_listz00_2882;
						}
					else
						{
							obj_t BgL_auxz00_3737;

							BgL_auxz00_3737 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 23501)),
								BGl_string2256z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
								BgL_listz00_2882);
							FAILURE(BgL_auxz00_3737, BFALSE, BFALSE);
						}
					BgL_tmpz00_3733 = bgl_list_length(BgL_auxz00_3734);
				}
				return BINT(BgL_tmpz00_3733);
			}
		}

	}



/* reverse */
	BGL_EXPORTED_DEF obj_t bgl_reverse(obj_t BgL_lz00_61)
	{
		{	/* Ieee/pairlist.scm 596 */
			{
				obj_t BgL_lz00_1978;
				obj_t BgL_accz00_1979;

				BgL_lz00_1978 = BgL_lz00_61;
				BgL_accz00_1979 = BNIL;
			BgL_loopz00_1977:
				if (NULLP(BgL_lz00_1978))
					{	/* Ieee/pairlist.scm 599 */
						return BgL_accz00_1979;
					}
				else
					{	/* Ieee/pairlist.scm 601 */
						obj_t BgL_arg1364z00_1985;
						obj_t BgL_arg1365z00_1986;

						BgL_arg1364z00_1985 = CDR(((obj_t) BgL_lz00_1978));
						{	/* Ieee/pairlist.scm 601 */
							obj_t BgL_arg1367z00_1987;

							BgL_arg1367z00_1987 = CAR(((obj_t) BgL_lz00_1978));
							BgL_arg1365z00_1986 =
								MAKE_YOUNG_PAIR(BgL_arg1367z00_1987, BgL_accz00_1979);
						}
						{
							obj_t BgL_accz00_3751;
							obj_t BgL_lz00_3750;

							BgL_lz00_3750 = BgL_arg1364z00_1985;
							BgL_accz00_3751 = BgL_arg1365z00_1986;
							BgL_accz00_1979 = BgL_accz00_3751;
							BgL_lz00_1978 = BgL_lz00_3750;
							goto BgL_loopz00_1977;
						}
					}
			}
		}

	}



/* &reverse */
	obj_t BGl_z62reversez62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2883,
		obj_t BgL_lz00_2884)
	{
		{	/* Ieee/pairlist.scm 596 */
			{	/* Ieee/pairlist.scm 597 */
				obj_t BgL_auxz00_3752;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_lz00_2884))
					{	/* Ieee/pairlist.scm 597 */
						BgL_auxz00_3752 = BgL_lz00_2884;
					}
				else
					{
						obj_t BgL_auxz00_3755;

						BgL_auxz00_3755 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 23871)),
							BGl_string2257z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2884);
						FAILURE(BgL_auxz00_3755, BFALSE, BFALSE);
					}
				return bgl_reverse(BgL_auxz00_3752);
			}
		}

	}



/* ereverse */
	BGL_EXPORTED_DEF obj_t BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_62)
	{
		{	/* Ieee/pairlist.scm 606 */
			{
				obj_t BgL_lz00_966;
				obj_t BgL_accz00_967;

				BgL_lz00_966 = BgL_lz00_62;
				BgL_accz00_967 = BNIL;
			BgL_zc3z04anonymousza31368ze3z87_968:
				if (NULLP(BgL_lz00_966))
					{	/* Ieee/pairlist.scm 609 */
						return BgL_accz00_967;
					}
				else
					{	/* Ieee/pairlist.scm 611 */
						obj_t BgL_arg1370z00_970;
						obj_t BgL_arg1371z00_971;

						BgL_arg1370z00_970 = CDR(((obj_t) BgL_lz00_966));
						{	/* Ieee/pairlist.scm 612 */
							bool_t BgL_test2518z00_3764;

							{	/* Ieee/pairlist.scm 612 */
								bool_t BgL_res1876z00_1993;

								BgL_res1876z00_1993 = EPAIRP(BgL_lz00_966);
								BgL_test2518z00_3764 = BgL_res1876z00_1993;
							}
							if (BgL_test2518z00_3764)
								{	/* Ieee/pairlist.scm 613 */
									obj_t BgL_arg1373z00_973;
									obj_t BgL_arg1374z00_974;

									BgL_arg1373z00_973 = CAR(((obj_t) BgL_lz00_966));
									BgL_arg1374z00_974 = CER(((obj_t) BgL_lz00_966));
									{	/* Ieee/pairlist.scm 613 */
										obj_t BgL_res1877z00_1996;

										BgL_res1877z00_1996 =
											MAKE_YOUNG_EPAIR(BgL_arg1373z00_973, BgL_accz00_967,
											BgL_arg1374z00_974);
										BgL_arg1371z00_971 = BgL_res1877z00_1996;
									}
								}
							else
								{	/* Ieee/pairlist.scm 614 */
									obj_t BgL_arg1375z00_975;

									BgL_arg1375z00_975 = CAR(((obj_t) BgL_lz00_966));
									BgL_arg1371z00_971 =
										MAKE_YOUNG_PAIR(BgL_arg1375z00_975, BgL_accz00_967);
								}
						}
						{
							obj_t BgL_accz00_3775;
							obj_t BgL_lz00_3774;

							BgL_lz00_3774 = BgL_arg1370z00_970;
							BgL_accz00_3775 = BgL_arg1371z00_971;
							BgL_accz00_967 = BgL_accz00_3775;
							BgL_lz00_966 = BgL_lz00_3774;
							goto BgL_zc3z04anonymousza31368ze3z87_968;
						}
					}
			}
		}

	}



/* &ereverse */
	obj_t BGl_z62ereversez62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2885,
		obj_t BgL_lz00_2886)
	{
		{	/* Ieee/pairlist.scm 606 */
			{	/* Ieee/pairlist.scm 609 */
				obj_t BgL_auxz00_3776;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_lz00_2886))
					{	/* Ieee/pairlist.scm 609 */
						BgL_auxz00_3776 = BgL_lz00_2886;
					}
				else
					{
						obj_t BgL_auxz00_3779;

						BgL_auxz00_3779 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 24265)),
							BGl_string2258z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2886);
						FAILURE(BgL_auxz00_3779, BFALSE, BFALSE);
					}
				return BGl_ereversez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3776);
			}
		}

	}



/* take */
	BGL_EXPORTED_DEF obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_listz00_63, long BgL_kz00_64)
	{
		{	/* Ieee/pairlist.scm 619 */
			{
				obj_t BgL_listz00_2025;
				long BgL_kz00_2026;
				obj_t BgL_resz00_2027;

				BgL_listz00_2025 = BgL_listz00_63;
				BgL_kz00_2026 = BgL_kz00_64;
				BgL_resz00_2027 = BNIL;
			BgL_loopz00_2024:
				if ((BgL_kz00_2026 == ((long) 0)))
					{	/* Ieee/pairlist.scm 623 */
						return bgl_reverse_bang(BgL_resz00_2027);
					}
				else
					{	/* Ieee/pairlist.scm 625 */
						obj_t BgL_arg1378z00_2034;
						long BgL_arg1379z00_2035;
						obj_t BgL_arg1380z00_2036;

						BgL_arg1378z00_2034 = CDR(((obj_t) BgL_listz00_2025));
						BgL_arg1379z00_2035 = (BgL_kz00_2026 - ((long) 1));
						{	/* Ieee/pairlist.scm 625 */
							obj_t BgL_arg1381z00_2037;

							BgL_arg1381z00_2037 = CAR(((obj_t) BgL_listz00_2025));
							BgL_arg1380z00_2036 =
								MAKE_YOUNG_PAIR(BgL_arg1381z00_2037, BgL_resz00_2027);
						}
						{
							obj_t BgL_resz00_3795;
							long BgL_kz00_3794;
							obj_t BgL_listz00_3793;

							BgL_listz00_3793 = BgL_arg1378z00_2034;
							BgL_kz00_3794 = BgL_arg1379z00_2035;
							BgL_resz00_3795 = BgL_arg1380z00_2036;
							BgL_resz00_2027 = BgL_resz00_3795;
							BgL_kz00_2026 = BgL_kz00_3794;
							BgL_listz00_2025 = BgL_listz00_3793;
							goto BgL_loopz00_2024;
						}
					}
			}
		}

	}



/* &take */
	obj_t BGl_z62takez62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2887,
		obj_t BgL_listz00_2888, obj_t BgL_kz00_2889)
	{
		{	/* Ieee/pairlist.scm 619 */
			{	/* Ieee/pairlist.scm 620 */
				long BgL_auxz00_3803;
				obj_t BgL_auxz00_3796;

				{	/* Ieee/pairlist.scm 620 */
					obj_t BgL_tmpz00_3804;

					if (INTEGERP(BgL_kz00_2889))
						{	/* Ieee/pairlist.scm 620 */
							BgL_tmpz00_3804 = BgL_kz00_2889;
						}
					else
						{
							obj_t BgL_auxz00_3807;

							BgL_auxz00_3807 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 24632)),
								BGl_string2259z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2260z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2889);
							FAILURE(BgL_auxz00_3807, BFALSE, BFALSE);
						}
					BgL_auxz00_3803 = (long) CINT(BgL_tmpz00_3804);
				}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_2888))
					{	/* Ieee/pairlist.scm 620 */
						BgL_auxz00_3796 = BgL_listz00_2888;
					}
				else
					{
						obj_t BgL_auxz00_3799;

						BgL_auxz00_3799 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 24632)),
							BGl_string2259z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2888);
						FAILURE(BgL_auxz00_3799, BFALSE, BFALSE);
					}
				return
					BGl_takez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3796,
					BgL_auxz00_3803);
			}
		}

	}



/* drop */
	BGL_EXPORTED_DEF obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_listz00_65, long BgL_kz00_66)
	{
		{	/* Ieee/pairlist.scm 630 */
		BGl_dropz00zz__r4_pairs_and_lists_6_3z00:
			if ((BgL_kz00_66 == ((long) 0)))
				{	/* Ieee/pairlist.scm 631 */
					return BgL_listz00_65;
				}
			else
				{	/* Ieee/pairlist.scm 633 */
					obj_t BgL_listz00_2056;
					long BgL_kz00_2057;

					BgL_listz00_2056 = CDR(((obj_t) BgL_listz00_65));
					BgL_kz00_2057 = (BgL_kz00_66 - ((long) 1));
					if ((BgL_kz00_2057 == ((long) 0)))
						{	/* Ieee/pairlist.scm 631 */
							return BgL_listz00_2056;
						}
					else
						{
							long BgL_kz00_3823;
							obj_t BgL_listz00_3820;

							BgL_listz00_3820 = CDR(((obj_t) BgL_listz00_2056));
							BgL_kz00_3823 = (BgL_kz00_2057 - ((long) 1));
							BgL_kz00_66 = BgL_kz00_3823;
							BgL_listz00_65 = BgL_listz00_3820;
							goto BGl_dropz00zz__r4_pairs_and_lists_6_3z00;
						}
				}
		}

	}



/* &drop */
	obj_t BGl_z62dropz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2890,
		obj_t BgL_listz00_2891, obj_t BgL_kz00_2892)
	{
		{	/* Ieee/pairlist.scm 630 */
			{	/* Ieee/pairlist.scm 631 */
				long BgL_auxz00_3832;
				obj_t BgL_auxz00_3825;

				{	/* Ieee/pairlist.scm 631 */
					obj_t BgL_tmpz00_3833;

					if (INTEGERP(BgL_kz00_2892))
						{	/* Ieee/pairlist.scm 631 */
							BgL_tmpz00_3833 = BgL_kz00_2892;
						}
					else
						{
							obj_t BgL_auxz00_3836;

							BgL_auxz00_3836 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25030)),
								BGl_string2261z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2260z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2892);
							FAILURE(BgL_auxz00_3836, BFALSE, BFALSE);
						}
					BgL_auxz00_3832 = (long) CINT(BgL_tmpz00_3833);
				}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_2891))
					{	/* Ieee/pairlist.scm 631 */
						BgL_auxz00_3825 = BgL_listz00_2891;
					}
				else
					{
						obj_t BgL_auxz00_3828;

						BgL_auxz00_3828 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 25030)),
							BGl_string2261z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2891);
						FAILURE(BgL_auxz00_3828, BFALSE, BFALSE);
					}
				return
					BGl_dropz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3825,
					BgL_auxz00_3832);
			}
		}

	}



/* list-tail */
	BGL_EXPORTED_DEF obj_t BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_listz00_67, long BgL_kz00_68)
	{
		{	/* Ieee/pairlist.scm 638 */
			{
				obj_t BgL_listz00_2070;
				long BgL_kz00_2071;

				BgL_listz00_2070 = BgL_listz00_67;
				BgL_kz00_2071 = BgL_kz00_68;
			BgL_dropz00_2069:
				if ((BgL_kz00_2071 == ((long) 0)))
					{	/* Ieee/pairlist.scm 631 */
						return BgL_listz00_2070;
					}
				else
					{
						long BgL_kz00_3847;
						obj_t BgL_listz00_3844;

						BgL_listz00_3844 = CDR(((obj_t) BgL_listz00_2070));
						BgL_kz00_3847 = (BgL_kz00_2071 - ((long) 1));
						BgL_kz00_2071 = BgL_kz00_3847;
						BgL_listz00_2070 = BgL_listz00_3844;
						goto BgL_dropz00_2069;
					}
			}
		}

	}



/* &list-tail */
	obj_t BGl_z62listzd2tailzb0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2893, obj_t BgL_listz00_2894, obj_t BgL_kz00_2895)
	{
		{	/* Ieee/pairlist.scm 638 */
			{	/* Ieee/pairlist.scm 639 */
				long BgL_auxz00_3856;
				obj_t BgL_auxz00_3849;

				{	/* Ieee/pairlist.scm 639 */
					obj_t BgL_tmpz00_3857;

					if (INTEGERP(BgL_kz00_2895))
						{	/* Ieee/pairlist.scm 639 */
							BgL_tmpz00_3857 = BgL_kz00_2895;
						}
					else
						{
							obj_t BgL_auxz00_3860;

							BgL_auxz00_3860 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25348)),
								BGl_string2262z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2260z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2895);
							FAILURE(BgL_auxz00_3860, BFALSE, BFALSE);
						}
					BgL_auxz00_3856 = (long) CINT(BgL_tmpz00_3857);
				}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_2894))
					{	/* Ieee/pairlist.scm 639 */
						BgL_auxz00_3849 = BgL_listz00_2894;
					}
				else
					{
						obj_t BgL_auxz00_3852;

						BgL_auxz00_3852 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 25348)),
							BGl_string2262z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2894);
						FAILURE(BgL_auxz00_3852, BFALSE, BFALSE);
					}
				return
					BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3849,
					BgL_auxz00_3856);
			}
		}

	}



/* list-ref */
	BGL_EXPORTED_DEF obj_t bgl_list_ref(obj_t BgL_listz00_69, long BgL_kz00_70)
	{
		{	/* Ieee/pairlist.scm 644 */
		bgl_list_ref:
			if ((BgL_kz00_70 == ((long) 0)))
				{	/* Ieee/pairlist.scm 645 */
					return CAR(((obj_t) BgL_listz00_69));
				}
			else
				{	/* Ieee/pairlist.scm 647 */
					obj_t BgL_listz00_2096;
					long BgL_kz00_2097;

					BgL_listz00_2096 = CDR(((obj_t) BgL_listz00_69));
					BgL_kz00_2097 = (BgL_kz00_70 - ((long) 1));
					if ((BgL_kz00_2097 == ((long) 0)))
						{	/* Ieee/pairlist.scm 645 */
							return CAR(((obj_t) BgL_listz00_2096));
						}
					else
						{
							long BgL_kz00_3880;
							obj_t BgL_listz00_3877;

							BgL_listz00_3877 = CDR(((obj_t) BgL_listz00_2096));
							BgL_kz00_3880 = (BgL_kz00_2097 - ((long) 1));
							BgL_kz00_70 = BgL_kz00_3880;
							BgL_listz00_69 = BgL_listz00_3877;
							goto bgl_list_ref;
						}
				}
		}

	}



/* &list-ref */
	obj_t BGl_z62listzd2refzb0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2896,
		obj_t BgL_listz00_2897, obj_t BgL_kz00_2898)
	{
		{	/* Ieee/pairlist.scm 644 */
			{	/* Ieee/pairlist.scm 645 */
				long BgL_auxz00_3889;
				obj_t BgL_auxz00_3882;

				{	/* Ieee/pairlist.scm 645 */
					obj_t BgL_tmpz00_3890;

					if (INTEGERP(BgL_kz00_2898))
						{	/* Ieee/pairlist.scm 645 */
							BgL_tmpz00_3890 = BgL_kz00_2898;
						}
					else
						{
							obj_t BgL_auxz00_3893;

							BgL_auxz00_3893 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25615)),
								BGl_string2263z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2260z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2898);
							FAILURE(BgL_auxz00_3893, BFALSE, BFALSE);
						}
					BgL_auxz00_3889 = (long) CINT(BgL_tmpz00_3890);
				}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_2897))
					{	/* Ieee/pairlist.scm 645 */
						BgL_auxz00_3882 = BgL_listz00_2897;
					}
				else
					{
						obj_t BgL_auxz00_3885;

						BgL_auxz00_3885 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 25615)),
							BGl_string2263z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2897);
						FAILURE(BgL_auxz00_3885, BFALSE, BFALSE);
					}
				return bgl_list_ref(BgL_auxz00_3882, BgL_auxz00_3889);
			}
		}

	}



/* list-set! */
	BGL_EXPORTED_DEF obj_t BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_listz00_71, long BgL_kz00_72, obj_t BgL_valz00_73)
	{
		{	/* Ieee/pairlist.scm 652 */
		BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00:
			if ((BgL_kz00_72 == ((long) 0)))
				{	/* Ieee/pairlist.scm 433 */
					obj_t BgL_tmpz00_3901;

					BgL_tmpz00_3901 = ((obj_t) BgL_listz00_71);
					return SET_CAR(BgL_tmpz00_3901, BgL_valz00_73);
				}
			else
				{	/* Ieee/pairlist.scm 655 */
					obj_t BgL_arg1389z00_2110;
					long BgL_arg1390z00_2111;

					BgL_arg1389z00_2110 = CDR(((obj_t) BgL_listz00_71));
					BgL_arg1390z00_2111 = (BgL_kz00_72 - ((long) 1));
					if ((BgL_arg1390z00_2111 == ((long) 0)))
						{	/* Ieee/pairlist.scm 433 */
							obj_t BgL_tmpz00_3909;

							BgL_tmpz00_3909 = ((obj_t) ((obj_t) BgL_arg1389z00_2110));
							return SET_CAR(BgL_tmpz00_3909, BgL_valz00_73);
						}
					else
						{	/* Ieee/pairlist.scm 655 */
							obj_t BgL_arg1389z00_2123;
							long BgL_arg1390z00_2124;

							BgL_arg1389z00_2123 =
								CDR(((obj_t) ((obj_t) BgL_arg1389z00_2110)));
							BgL_arg1390z00_2124 = (BgL_arg1390z00_2111 - ((long) 1));
							{
								long BgL_kz00_3918;
								obj_t BgL_listz00_3917;

								BgL_listz00_3917 = BgL_arg1389z00_2123;
								BgL_kz00_3918 = BgL_arg1390z00_2124;
								BgL_kz00_72 = BgL_kz00_3918;
								BgL_listz00_71 = BgL_listz00_3917;
								goto BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00;
							}
						}
				}
		}

	}



/* &list-set! */
	obj_t BGl_z62listzd2setz12za2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2899, obj_t BgL_listz00_2900, obj_t BgL_kz00_2901,
		obj_t BgL_valz00_2902)
	{
		{	/* Ieee/pairlist.scm 652 */
			{	/* Ieee/pairlist.scm 653 */
				long BgL_auxz00_3926;
				obj_t BgL_auxz00_3919;

				{	/* Ieee/pairlist.scm 653 */
					obj_t BgL_tmpz00_3927;

					if (INTEGERP(BgL_kz00_2901))
						{	/* Ieee/pairlist.scm 653 */
							BgL_tmpz00_3927 = BgL_kz00_2901;
						}
					else
						{
							obj_t BgL_auxz00_3930;

							BgL_auxz00_3930 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 25947)),
								BGl_string2264z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2260z00zz__r4_pairs_and_lists_6_3z00, BgL_kz00_2901);
							FAILURE(BgL_auxz00_3930, BFALSE, BFALSE);
						}
					BgL_auxz00_3926 = (long) CINT(BgL_tmpz00_3927);
				}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_2900))
					{	/* Ieee/pairlist.scm 653 */
						BgL_auxz00_3919 = BgL_listz00_2900;
					}
				else
					{
						obj_t BgL_auxz00_3922;

						BgL_auxz00_3922 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 25947)),
							BGl_string2264z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2900);
						FAILURE(BgL_auxz00_3922, BFALSE, BFALSE);
					}
				return
					BGl_listzd2setz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3919,
					BgL_auxz00_3926, BgL_valz00_2902);
			}
		}

	}



/* last-pair */
	BGL_EXPORTED_DEF obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_74)
	{
		{	/* Ieee/pairlist.scm 660 */
		BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00:
			{	/* Ieee/pairlist.scm 661 */
				bool_t BgL_test2538z00_3936;

				{	/* Ieee/pairlist.scm 214 */
					obj_t BgL_tmpz00_3937;

					BgL_tmpz00_3937 = CDR(BgL_xz00_74);
					BgL_test2538z00_3936 = PAIRP(BgL_tmpz00_3937);
				}
				if (BgL_test2538z00_3936)
					{	/* Ieee/pairlist.scm 662 */
						obj_t BgL_xz00_2139;

						BgL_xz00_2139 = CDR(BgL_xz00_74);
						{	/* Ieee/pairlist.scm 661 */
							bool_t BgL_test2539z00_3941;

							{	/* Ieee/pairlist.scm 214 */
								obj_t BgL_tmpz00_3942;

								BgL_tmpz00_3942 = CDR(BgL_xz00_2139);
								BgL_test2539z00_3941 = PAIRP(BgL_tmpz00_3942);
							}
							if (BgL_test2539z00_3941)
								{
									obj_t BgL_xz00_3945;

									BgL_xz00_3945 = CDR(BgL_xz00_2139);
									BgL_xz00_74 = BgL_xz00_3945;
									goto BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00;
								}
							else
								{	/* Ieee/pairlist.scm 661 */
									return BgL_xz00_2139;
								}
						}
					}
				else
					{	/* Ieee/pairlist.scm 661 */
						return BgL_xz00_74;
					}
			}
		}

	}



/* &last-pair */
	obj_t BGl_z62lastzd2pairzb0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2903, obj_t BgL_xz00_2904)
	{
		{	/* Ieee/pairlist.scm 660 */
			{	/* Ieee/pairlist.scm 661 */
				obj_t BgL_auxz00_3947;

				if (PAIRP(BgL_xz00_2904))
					{	/* Ieee/pairlist.scm 661 */
						BgL_auxz00_3947 = BgL_xz00_2904;
					}
				else
					{
						obj_t BgL_auxz00_3950;

						BgL_auxz00_3950 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 26284)),
							BGl_string2265z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2217z00zz__r4_pairs_and_lists_6_3z00, BgL_xz00_2904);
						FAILURE(BgL_auxz00_3950, BFALSE, BFALSE);
					}
				return BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3947);
			}
		}

	}



/* memq */
	BGL_EXPORTED_DEF obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_75, obj_t BgL_listz00_76)
	{
		{	/* Ieee/pairlist.scm 668 */
			{
				obj_t BgL_listz00_2148;

				BgL_listz00_2148 = BgL_listz00_76;
			BgL_loopz00_2147:
				if (PAIRP(BgL_listz00_2148))
					{	/* Ieee/pairlist.scm 670 */
						if ((CAR(BgL_listz00_2148) == BgL_objz00_75))
							{	/* Ieee/pairlist.scm 671 */
								return BgL_listz00_2148;
							}
						else
							{
								obj_t BgL_listz00_3960;

								BgL_listz00_3960 = CDR(BgL_listz00_2148);
								BgL_listz00_2148 = BgL_listz00_3960;
								goto BgL_loopz00_2147;
							}
					}
				else
					{	/* Ieee/pairlist.scm 670 */
						return BFALSE;
					}
			}
		}

	}



/* &memq */
	obj_t BGl_z62memqz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2905,
		obj_t BgL_objz00_2906, obj_t BgL_listz00_2907)
	{
		{	/* Ieee/pairlist.scm 668 */
			{	/* Ieee/pairlist.scm 670 */
				obj_t BgL_auxz00_3962;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_2907))
					{	/* Ieee/pairlist.scm 670 */
						BgL_auxz00_3962 = BgL_listz00_2907;
					}
				else
					{
						obj_t BgL_auxz00_3965;

						BgL_auxz00_3965 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 26622)),
							BGl_string2266z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2907);
						FAILURE(BgL_auxz00_3965, BFALSE, BFALSE);
					}
				return
					BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2906,
					BgL_auxz00_3962);
			}
		}

	}



/* memv */
	BGL_EXPORTED_DEF obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_77, obj_t BgL_listz00_78)
	{
		{	/* Ieee/pairlist.scm 679 */
			{
				obj_t BgL_listz00_2157;

				BgL_listz00_2157 = BgL_listz00_78;
			BgL_loopz00_2156:
				if (PAIRP(BgL_listz00_2157))
					{	/* Ieee/pairlist.scm 681 */
						if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(CAR(BgL_listz00_2157),
								BgL_objz00_77))
							{	/* Ieee/pairlist.scm 682 */
								return BgL_listz00_2157;
							}
						else
							{
								obj_t BgL_listz00_3975;

								BgL_listz00_3975 = CDR(BgL_listz00_2157);
								BgL_listz00_2157 = BgL_listz00_3975;
								goto BgL_loopz00_2156;
							}
					}
				else
					{	/* Ieee/pairlist.scm 681 */
						return BFALSE;
					}
			}
		}

	}



/* &memv */
	obj_t BGl_z62memvz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2908,
		obj_t BgL_objz00_2909, obj_t BgL_listz00_2910)
	{
		{	/* Ieee/pairlist.scm 679 */
			{	/* Ieee/pairlist.scm 681 */
				obj_t BgL_auxz00_3977;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_2910))
					{	/* Ieee/pairlist.scm 681 */
						BgL_auxz00_3977 = BgL_listz00_2910;
					}
				else
					{
						obj_t BgL_auxz00_3980;

						BgL_auxz00_3980 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 26994)),
							BGl_string2267z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2910);
						FAILURE(BgL_auxz00_3980, BFALSE, BFALSE);
					}
				return
					BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2909,
					BgL_auxz00_3977);
			}
		}

	}



/* member */
	BGL_EXPORTED_DEF obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_79, obj_t BgL_listz00_80)
	{
		{	/* Ieee/pairlist.scm 690 */
			{
				obj_t BgL_listz00_2166;

				BgL_listz00_2166 = BgL_listz00_80;
			BgL_loopz00_2165:
				if (PAIRP(BgL_listz00_2166))
					{	/* Ieee/pairlist.scm 693 */
						if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_objz00_79,
								CAR(BgL_listz00_2166)))
							{	/* Ieee/pairlist.scm 694 */
								return BgL_listz00_2166;
							}
						else
							{
								obj_t BgL_listz00_3990;

								BgL_listz00_3990 = CDR(BgL_listz00_2166);
								BgL_listz00_2166 = BgL_listz00_3990;
								goto BgL_loopz00_2165;
							}
					}
				else
					{	/* Ieee/pairlist.scm 693 */
						return BFALSE;
					}
			}
		}

	}



/* &member */
	obj_t BGl_z62memberz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2911,
		obj_t BgL_objz00_2912, obj_t BgL_listz00_2913)
	{
		{	/* Ieee/pairlist.scm 690 */
			{	/* Ieee/pairlist.scm 693 */
				obj_t BgL_auxz00_3992;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_2913))
					{	/* Ieee/pairlist.scm 693 */
						BgL_auxz00_3992 = BgL_listz00_2913;
					}
				else
					{
						obj_t BgL_auxz00_3995;

						BgL_auxz00_3995 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 27377)),
							BGl_string2268z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2913);
						FAILURE(BgL_auxz00_3995, BFALSE, BFALSE);
					}
				return
					BGl_memberz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2912,
					BgL_auxz00_3992);
			}
		}

	}



/* assq */
	BGL_EXPORTED_DEF obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_81, obj_t BgL_alistz00_82)
	{
		{	/* Ieee/pairlist.scm 700 */
			{
				obj_t BgL_alistz00_1030;

				BgL_alistz00_1030 = BgL_alistz00_82;
			BgL_zc3z04anonymousza31414ze3z87_1031:
				if (PAIRP(BgL_alistz00_1030))
					{	/* Ieee/pairlist.scm 702 */
						if ((CAR(CAR(BgL_alistz00_1030)) == BgL_objz00_81))
							{	/* Ieee/pairlist.scm 703 */
								return CAR(BgL_alistz00_1030);
							}
						else
							{
								obj_t BgL_alistz00_4007;

								BgL_alistz00_4007 = CDR(BgL_alistz00_1030);
								BgL_alistz00_1030 = BgL_alistz00_4007;
								goto BgL_zc3z04anonymousza31414ze3z87_1031;
							}
					}
				else
					{	/* Ieee/pairlist.scm 702 */
						return BFALSE;
					}
			}
		}

	}



/* &assq */
	obj_t BGl_z62assqz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2914,
		obj_t BgL_objz00_2915, obj_t BgL_alistz00_2916)
	{
		{	/* Ieee/pairlist.scm 700 */
			{	/* Ieee/pairlist.scm 702 */
				obj_t BgL_auxz00_4009;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_alistz00_2916))
					{	/* Ieee/pairlist.scm 702 */
						BgL_auxz00_4009 = BgL_alistz00_2916;
					}
				else
					{
						obj_t BgL_auxz00_4012;

						BgL_auxz00_4012 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 27748)),
							BGl_string2269z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
							BgL_alistz00_2916);
						FAILURE(BgL_auxz00_4012, BFALSE, BFALSE);
					}
				return
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2915,
					BgL_auxz00_4009);
			}
		}

	}



/* assv */
	BGL_EXPORTED_DEF obj_t BGl_assvz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_83, obj_t BgL_alistz00_84)
	{
		{	/* Ieee/pairlist.scm 711 */
			{
				obj_t BgL_alistz00_1041;

				BgL_alistz00_1041 = BgL_alistz00_84;
			BgL_zc3z04anonymousza31422ze3z87_1042:
				if (PAIRP(BgL_alistz00_1041))
					{	/* Ieee/pairlist.scm 713 */
						if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(CAR(CAR
									(BgL_alistz00_1041)), BgL_objz00_83))
							{	/* Ieee/pairlist.scm 714 */
								return CAR(BgL_alistz00_1041);
							}
						else
							{
								obj_t BgL_alistz00_4024;

								BgL_alistz00_4024 = CDR(BgL_alistz00_1041);
								BgL_alistz00_1041 = BgL_alistz00_4024;
								goto BgL_zc3z04anonymousza31422ze3z87_1042;
							}
					}
				else
					{	/* Ieee/pairlist.scm 713 */
						return BFALSE;
					}
			}
		}

	}



/* &assv */
	obj_t BGl_z62assvz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2917,
		obj_t BgL_objz00_2918, obj_t BgL_alistz00_2919)
	{
		{	/* Ieee/pairlist.scm 711 */
			{	/* Ieee/pairlist.scm 713 */
				obj_t BgL_auxz00_4026;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_alistz00_2919))
					{	/* Ieee/pairlist.scm 713 */
						BgL_auxz00_4026 = BgL_alistz00_2919;
					}
				else
					{
						obj_t BgL_auxz00_4029;

						BgL_auxz00_4029 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 28167)),
							BGl_string2270z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
							BgL_alistz00_2919);
						FAILURE(BgL_auxz00_4029, BFALSE, BFALSE);
					}
				return
					BGl_assvz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2918,
					BgL_auxz00_4026);
			}
		}

	}



/* assoc */
	BGL_EXPORTED_DEF obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_objz00_85, obj_t BgL_alistz00_86)
	{
		{	/* Ieee/pairlist.scm 722 */
			{
				obj_t BgL_alistz00_1052;

				BgL_alistz00_1052 = BgL_alistz00_86;
			BgL_zc3z04anonymousza31430ze3z87_1053:
				if (PAIRP(BgL_alistz00_1052))
					{	/* Ieee/pairlist.scm 724 */
						if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR(CAR
									(BgL_alistz00_1052)), BgL_objz00_85))
							{	/* Ieee/pairlist.scm 725 */
								return CAR(BgL_alistz00_1052);
							}
						else
							{
								obj_t BgL_alistz00_4041;

								BgL_alistz00_4041 = CDR(BgL_alistz00_1052);
								BgL_alistz00_1052 = BgL_alistz00_4041;
								goto BgL_zc3z04anonymousza31430ze3z87_1053;
							}
					}
				else
					{	/* Ieee/pairlist.scm 724 */
						return BFALSE;
					}
			}
		}

	}



/* &assoc */
	obj_t BGl_z62assocz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2920,
		obj_t BgL_objz00_2921, obj_t BgL_alistz00_2922)
	{
		{	/* Ieee/pairlist.scm 722 */
			{	/* Ieee/pairlist.scm 724 */
				obj_t BgL_auxz00_4043;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_alistz00_2922))
					{	/* Ieee/pairlist.scm 724 */
						BgL_auxz00_4043 = BgL_alistz00_2922;
					}
				else
					{
						obj_t BgL_auxz00_4046;

						BgL_auxz00_4046 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 28581)),
							BGl_string2271z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
							BgL_alistz00_2922);
						FAILURE(BgL_auxz00_4046, BFALSE, BFALSE);
					}
				return
					BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_objz00_2921,
					BgL_auxz00_4043);
			}
		}

	}



/* remq */
	BGL_EXPORTED_DEF obj_t bgl_remq(obj_t BgL_xz00_87, obj_t BgL_yz00_88)
	{
		{	/* Ieee/pairlist.scm 736 */
		bgl_remq:
			if (NULLP(BgL_yz00_88))
				{	/* Ieee/pairlist.scm 738 */
					return BgL_yz00_88;
				}
			else
				{	/* Ieee/pairlist.scm 738 */
					if ((BgL_xz00_87 == CAR(BgL_yz00_88)))
						{
							obj_t BgL_yz00_4056;

							BgL_yz00_4056 = CDR(BgL_yz00_88);
							BgL_yz00_88 = BgL_yz00_4056;
							goto bgl_remq;
						}
					else
						{	/* Ieee/pairlist.scm 739 */
							return
								MAKE_YOUNG_PAIR(CAR(BgL_yz00_88),
								bgl_remq(BgL_xz00_87, CDR(BgL_yz00_88)));
						}
				}
		}

	}



/* &remq */
	obj_t BGl_z62remqz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2923,
		obj_t BgL_xz00_2924, obj_t BgL_yz00_2925)
	{
		{	/* Ieee/pairlist.scm 736 */
			{	/* Ieee/pairlist.scm 738 */
				obj_t BgL_auxz00_4062;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_yz00_2925))
					{	/* Ieee/pairlist.scm 738 */
						BgL_auxz00_4062 = BgL_yz00_2925;
					}
				else
					{
						obj_t BgL_auxz00_4065;

						BgL_auxz00_4065 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 29192)),
							BGl_string2272z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_2925);
						FAILURE(BgL_auxz00_4065, BFALSE, BFALSE);
					}
				return bgl_remq(BgL_xz00_2924, BgL_auxz00_4062);
			}
		}

	}



/* remq! */
	BGL_EXPORTED_DEF obj_t bgl_remq_bang(obj_t BgL_xz00_89, obj_t BgL_yz00_90)
	{
		{	/* Ieee/pairlist.scm 745 */
		bgl_remq_bang:
			if (NULLP(BgL_yz00_90))
				{	/* Ieee/pairlist.scm 747 */
					return BgL_yz00_90;
				}
			else
				{	/* Ieee/pairlist.scm 747 */
					if ((BgL_xz00_89 == CAR(BgL_yz00_90)))
						{
							obj_t BgL_yz00_4075;

							BgL_yz00_4075 = CDR(BgL_yz00_90);
							BgL_yz00_90 = BgL_yz00_4075;
							goto bgl_remq_bang;
						}
					else
						{
							obj_t BgL_prevz00_1075;

							BgL_prevz00_1075 = BgL_yz00_90;
						BgL_zc3z04anonymousza31452ze3z87_1076:
							if (NULLP(CDR(((obj_t) BgL_prevz00_1075))))
								{	/* Ieee/pairlist.scm 750 */
									return BgL_yz00_90;
								}
							else
								{	/* Ieee/pairlist.scm 752 */
									bool_t BgL_test2565z00_4081;

									{	/* Ieee/pairlist.scm 752 */
										obj_t BgL_tmpz00_4082;

										{	/* Ieee/pairlist.scm 270 */
											obj_t BgL_pairz00_2202;

											BgL_pairz00_2202 = CDR(((obj_t) BgL_prevz00_1075));
											BgL_tmpz00_4082 = CAR(BgL_pairz00_2202);
										}
										BgL_test2565z00_4081 = (BgL_tmpz00_4082 == BgL_xz00_89);
									}
									if (BgL_test2565z00_4081)
										{	/* Ieee/pairlist.scm 752 */
											{	/* Ieee/pairlist.scm 753 */
												obj_t BgL_arg1457z00_1081;

												{	/* Ieee/pairlist.scm 282 */
													obj_t BgL_pairz00_2206;

													BgL_pairz00_2206 = CDR(((obj_t) BgL_prevz00_1075));
													BgL_arg1457z00_1081 = CDR(BgL_pairz00_2206);
												}
												{	/* Ieee/pairlist.scm 439 */
													obj_t BgL_tmpz00_4090;

													BgL_tmpz00_4090 = ((obj_t) BgL_prevz00_1075);
													SET_CDR(BgL_tmpz00_4090, BgL_arg1457z00_1081);
												}
											}
											{

												goto BgL_zc3z04anonymousza31452ze3z87_1076;
											}
										}
									else
										{	/* Ieee/pairlist.scm 755 */
											obj_t BgL_arg1458z00_1082;

											BgL_arg1458z00_1082 = CDR(((obj_t) BgL_prevz00_1075));
											{
												obj_t BgL_prevz00_4095;

												BgL_prevz00_4095 = BgL_arg1458z00_1082;
												BgL_prevz00_1075 = BgL_prevz00_4095;
												goto BgL_zc3z04anonymousza31452ze3z87_1076;
											}
										}
								}
						}
				}
		}

	}



/* &remq! */
	obj_t BGl_z62remqz12z70zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2926,
		obj_t BgL_xz00_2927, obj_t BgL_yz00_2928)
	{
		{	/* Ieee/pairlist.scm 745 */
			{	/* Ieee/pairlist.scm 747 */
				obj_t BgL_auxz00_4096;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_yz00_2928))
					{	/* Ieee/pairlist.scm 747 */
						BgL_auxz00_4096 = BgL_yz00_2928;
					}
				else
					{
						obj_t BgL_auxz00_4099;

						BgL_auxz00_4099 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 29552)),
							BGl_string2273z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_yz00_2928);
						FAILURE(BgL_auxz00_4099, BFALSE, BFALSE);
					}
				return bgl_remq_bang(BgL_xz00_2927, BgL_auxz00_4096);
			}
		}

	}



/* _delete */
	obj_t BGl__deletez00zz__r4_pairs_and_lists_6_3z00(obj_t BgL_env1104z00_95,
		obj_t BgL_opt1103z00_94)
	{
		{	/* Ieee/pairlist.scm 760 */
			{	/* Ieee/pairlist.scm 760 */
				obj_t BgL_g1105z00_1087;
				obj_t BgL_g1106z00_1088;

				BgL_g1105z00_1087 = VECTOR_REF(BgL_opt1103z00_94, ((long) 0));
				BgL_g1106z00_1088 = VECTOR_REF(BgL_opt1103z00_94, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1103z00_94))
					{
					case ((long) 2):

						{	/* Ieee/pairlist.scm 760 */

							{	/* Ieee/pairlist.scm 760 */
								obj_t BgL_auxz00_4106;

								if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
									(BgL_g1106z00_1088))
									{	/* Ieee/pairlist.scm 760 */
										BgL_auxz00_4106 = BgL_g1106z00_1088;
									}
								else
									{
										obj_t BgL_auxz00_4109;

										BgL_auxz00_4109 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
											BINT(((long) 30108)),
											BGl_string2274z00zz__r4_pairs_and_lists_6_3z00,
											BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
											BgL_g1106z00_1088);
										FAILURE(BgL_auxz00_4109, BFALSE, BFALSE);
									}
								return
									BGl_deletez00zz__r4_pairs_and_lists_6_3z00(BgL_g1105z00_1087,
									BgL_auxz00_4106,
									BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/pairlist.scm 760 */
							obj_t BgL_eqz00_1093;

							BgL_eqz00_1093 = VECTOR_REF(BgL_opt1103z00_94, ((long) 2));
							{	/* Ieee/pairlist.scm 760 */

								{	/* Ieee/pairlist.scm 760 */
									obj_t BgL_auxz00_4115;

									if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
										(BgL_g1106z00_1088))
										{	/* Ieee/pairlist.scm 760 */
											BgL_auxz00_4115 = BgL_g1106z00_1088;
										}
									else
										{
											obj_t BgL_auxz00_4118;

											BgL_auxz00_4118 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
												BINT(((long) 30108)),
												BGl_string2274z00zz__r4_pairs_and_lists_6_3z00,
												BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
												BgL_g1106z00_1088);
											FAILURE(BgL_auxz00_4118, BFALSE, BFALSE);
										}
									return
										BGl_deletez00zz__r4_pairs_and_lists_6_3z00
										(BgL_g1105z00_1087, BgL_auxz00_4115, BgL_eqz00_1093);
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



/* delete */
	BGL_EXPORTED_DEF obj_t BGl_deletez00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_91, obj_t BgL_yz00_92, obj_t BgL_eqz00_93)
	{
		{	/* Ieee/pairlist.scm 760 */
			return
				BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_93, BgL_xz00_91,
				BgL_yz00_92);
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00(obj_t BgL_eqz00_2975,
		obj_t BgL_xz00_1095, obj_t BgL_yz00_1096)
	{
		{	/* Ieee/pairlist.scm 761 */
		BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00:
			if (NULLP(BgL_yz00_1096))
				{	/* Ieee/pairlist.scm 764 */
					return BgL_yz00_1096;
				}
			else
				{	/* Ieee/pairlist.scm 765 */
					bool_t BgL_test2570z00_4128;

					{	/* Ieee/pairlist.scm 765 */
						obj_t BgL_arg1471z00_1105;

						BgL_arg1471z00_1105 = CAR(((obj_t) BgL_yz00_1096));
						BgL_test2570z00_4128 =
							CBOOL(PROCEDURE_ENTRY(BgL_eqz00_2975) (BgL_eqz00_2975,
								BgL_xz00_1095, BgL_arg1471z00_1105, BEOA));
					}
					if (BgL_test2570z00_4128)
						{	/* Ieee/pairlist.scm 765 */
							obj_t BgL_arg1467z00_1101;

							BgL_arg1467z00_1101 = CDR(((obj_t) BgL_yz00_1096));
							{
								obj_t BgL_yz00_4139;

								BgL_yz00_4139 = BgL_arg1467z00_1101;
								BgL_yz00_1096 = BgL_yz00_4139;
								goto BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00;
							}
						}
					else
						{	/* Ieee/pairlist.scm 766 */
							obj_t BgL_arg1468z00_1102;
							obj_t BgL_arg1469z00_1103;

							BgL_arg1468z00_1102 = CAR(((obj_t) BgL_yz00_1096));
							{	/* Ieee/pairlist.scm 766 */
								obj_t BgL_arg1470z00_1104;

								BgL_arg1470z00_1104 = CDR(((obj_t) BgL_yz00_1096));
								BgL_arg1469z00_1103 =
									BGl_loopze70ze7zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_2975,
									BgL_xz00_1095, BgL_arg1470z00_1104);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1468z00_1102, BgL_arg1469z00_1103);
						}
				}
		}

	}



/* _delete! */
	obj_t BGl__deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t BgL_env1110z00_100,
		obj_t BgL_opt1109z00_99)
	{
		{	/* Ieee/pairlist.scm 771 */
			{	/* Ieee/pairlist.scm 771 */
				obj_t BgL_g1111z00_1107;
				obj_t BgL_g1112z00_1108;

				BgL_g1111z00_1107 = VECTOR_REF(BgL_opt1109z00_99, ((long) 0));
				BgL_g1112z00_1108 = VECTOR_REF(BgL_opt1109z00_99, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1109z00_99))
					{
					case ((long) 2):

						{	/* Ieee/pairlist.scm 771 */

							{	/* Ieee/pairlist.scm 771 */
								obj_t BgL_auxz00_4148;

								if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
									(BgL_g1112z00_1108))
									{	/* Ieee/pairlist.scm 771 */
										BgL_auxz00_4148 = BgL_g1112z00_1108;
									}
								else
									{
										obj_t BgL_auxz00_4151;

										BgL_auxz00_4151 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
											BINT(((long) 30517)),
											BGl_string2275z00zz__r4_pairs_and_lists_6_3z00,
											BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
											BgL_g1112z00_1108);
										FAILURE(BgL_auxz00_4151, BFALSE, BFALSE);
									}
								return
									BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00
									(BgL_g1111z00_1107, BgL_auxz00_4148,
									BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/pairlist.scm 771 */
							obj_t BgL_eqz00_1113;

							BgL_eqz00_1113 = VECTOR_REF(BgL_opt1109z00_99, ((long) 2));
							{	/* Ieee/pairlist.scm 771 */

								{	/* Ieee/pairlist.scm 771 */
									obj_t BgL_auxz00_4157;

									if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
										(BgL_g1112z00_1108))
										{	/* Ieee/pairlist.scm 771 */
											BgL_auxz00_4157 = BgL_g1112z00_1108;
										}
									else
										{
											obj_t BgL_auxz00_4160;

											BgL_auxz00_4160 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
												BINT(((long) 30517)),
												BGl_string2275z00zz__r4_pairs_and_lists_6_3z00,
												BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
												BgL_g1112z00_1108);
											FAILURE(BgL_auxz00_4160, BFALSE, BFALSE);
										}
									return
										BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00
										(BgL_g1111z00_1107, BgL_auxz00_4157, BgL_eqz00_1113);
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



/* delete! */
	BGL_EXPORTED_DEF obj_t BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_96, obj_t BgL_yz00_97, obj_t BgL_eqz00_98)
	{
		{	/* Ieee/pairlist.scm 771 */
			{
				obj_t BgL_xz00_1115;
				obj_t BgL_yz00_1116;

				BgL_xz00_1115 = BgL_xz00_96;
				BgL_yz00_1116 = BgL_yz00_97;
			BgL_zc3z04anonymousza31473ze3z87_1117:
				if (NULLP(BgL_yz00_1116))
					{	/* Ieee/pairlist.scm 775 */
						return BgL_yz00_1116;
					}
				else
					{	/* Ieee/pairlist.scm 776 */
						bool_t BgL_test2574z00_4169;

						{	/* Ieee/pairlist.scm 776 */
							obj_t BgL_arg1491z00_1134;

							BgL_arg1491z00_1134 = CAR(((obj_t) BgL_yz00_1116));
							BgL_test2574z00_4169 =
								CBOOL(PROCEDURE_ENTRY(BgL_eqz00_98) (BgL_eqz00_98,
									BgL_xz00_1115, BgL_arg1491z00_1134, BEOA));
						}
						if (BgL_test2574z00_4169)
							{	/* Ieee/pairlist.scm 776 */
								obj_t BgL_arg1477z00_1121;

								BgL_arg1477z00_1121 = CDR(((obj_t) BgL_yz00_1116));
								{
									obj_t BgL_yz00_4180;

									BgL_yz00_4180 = BgL_arg1477z00_1121;
									BgL_yz00_1116 = BgL_yz00_4180;
									goto BgL_zc3z04anonymousza31473ze3z87_1117;
								}
							}
						else
							{
								obj_t BgL_prevz00_1123;

								BgL_prevz00_1123 = BgL_yz00_1116;
							BgL_zc3z04anonymousza31478ze3z87_1124:
								if (NULLP(CDR(((obj_t) BgL_prevz00_1123))))
									{	/* Ieee/pairlist.scm 778 */
										return BgL_yz00_1116;
									}
								else
									{	/* Ieee/pairlist.scm 780 */
										bool_t BgL_test2576z00_4185;

										{	/* Ieee/pairlist.scm 780 */
											obj_t BgL_arg1487z00_1131;

											{	/* Ieee/pairlist.scm 270 */
												obj_t BgL_pairz00_2222;

												BgL_pairz00_2222 = CDR(((obj_t) BgL_prevz00_1123));
												BgL_arg1487z00_1131 = CAR(BgL_pairz00_2222);
											}
											BgL_test2576z00_4185 =
												CBOOL(PROCEDURE_ENTRY(BgL_eqz00_98) (BgL_eqz00_98,
													BgL_arg1487z00_1131, BgL_xz00_1115, BEOA));
										}
										if (BgL_test2576z00_4185)
											{	/* Ieee/pairlist.scm 780 */
												{	/* Ieee/pairlist.scm 781 */
													obj_t BgL_arg1485z00_1129;

													{	/* Ieee/pairlist.scm 282 */
														obj_t BgL_pairz00_2226;

														BgL_pairz00_2226 = CDR(((obj_t) BgL_prevz00_1123));
														BgL_arg1485z00_1129 = CDR(BgL_pairz00_2226);
													}
													{	/* Ieee/pairlist.scm 439 */
														obj_t BgL_tmpz00_4198;

														BgL_tmpz00_4198 = ((obj_t) BgL_prevz00_1123);
														SET_CDR(BgL_tmpz00_4198, BgL_arg1485z00_1129);
													}
												}
												{

													goto BgL_zc3z04anonymousza31478ze3z87_1124;
												}
											}
										else
											{	/* Ieee/pairlist.scm 783 */
												obj_t BgL_arg1486z00_1130;

												BgL_arg1486z00_1130 = CDR(((obj_t) BgL_prevz00_1123));
												{
													obj_t BgL_prevz00_4203;

													BgL_prevz00_4203 = BgL_arg1486z00_1130;
													BgL_prevz00_1123 = BgL_prevz00_4203;
													goto BgL_zc3z04anonymousza31478ze3z87_1124;
												}
											}
									}
							}
					}
			}
		}

	}



/* cons* */
	BGL_EXPORTED_DEF obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_xz00_101, obj_t BgL_yz00_102)
	{
		{	/* Ieee/pairlist.scm 788 */
			if (NULLP(BgL_yz00_102))
				{	/* Ieee/pairlist.scm 793 */
					return BgL_xz00_101;
				}
			else
				{	/* Ieee/pairlist.scm 793 */
					return
						MAKE_YOUNG_PAIR(BgL_xz00_101,
						BGl_consza21ze70z45zz__r4_pairs_and_lists_6_3z00(BgL_yz00_102));
				}
		}

	}



/* cons*1~0 */
	obj_t BGl_consza21ze70z45zz__r4_pairs_and_lists_6_3z00(obj_t BgL_xz00_1136)
	{
		{	/* Ieee/pairlist.scm 789 */
			if (NULLP(CDR(((obj_t) BgL_xz00_1136))))
				{	/* Ieee/pairlist.scm 789 */
					return CAR(((obj_t) BgL_xz00_1136));
				}
			else
				{	/* Ieee/pairlist.scm 792 */
					obj_t BgL_arg1496z00_1142;
					obj_t BgL_arg1497z00_1143;

					BgL_arg1496z00_1142 = CAR(((obj_t) BgL_xz00_1136));
					{	/* Ieee/pairlist.scm 792 */
						obj_t BgL_arg1498z00_1144;

						BgL_arg1498z00_1144 = CDR(((obj_t) BgL_xz00_1136));
						BgL_arg1497z00_1143 =
							BGl_consza21ze70z45zz__r4_pairs_and_lists_6_3z00
							(BgL_arg1498z00_1144);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1496z00_1142, BgL_arg1497z00_1143);
				}
		}

	}



/* &cons* */
	obj_t BGl_z62consza2zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2932,
		obj_t BgL_xz00_2933, obj_t BgL_yz00_2934)
	{
		{	/* Ieee/pairlist.scm 788 */
			return
				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_xz00_2933,
				BgL_yz00_2934);
		}

	}



/* reverse! */
	BGL_EXPORTED_DEF obj_t bgl_reverse_bang(obj_t BgL_lz00_103)
	{
		{	/* Ieee/pairlist.scm 800 */
			if (NULLP(BgL_lz00_103))
				{	/* Ieee/pairlist.scm 801 */
					return BgL_lz00_103;
				}
			else
				{
					obj_t BgL_lz00_2255;
					obj_t BgL_rz00_2256;

					BgL_lz00_2255 = BgL_lz00_103;
					BgL_rz00_2256 = BNIL;
				BgL_nrz00_2254:
					if (NULLP(CDR(((obj_t) BgL_lz00_2255))))
						{	/* Ieee/pairlist.scm 804 */
							{	/* Ieee/pairlist.scm 439 */
								obj_t BgL_tmpz00_4227;

								BgL_tmpz00_4227 = ((obj_t) BgL_lz00_2255);
								SET_CDR(BgL_tmpz00_4227, BgL_rz00_2256);
							}
							return BgL_lz00_2255;
						}
					else
						{	/* Ieee/pairlist.scm 808 */
							obj_t BgL_cdrlz00_2263;

							BgL_cdrlz00_2263 = CDR(((obj_t) BgL_lz00_2255));
							{	/* Ieee/pairlist.scm 810 */
								obj_t BgL_arg1507z00_2264;

								{	/* Ieee/pairlist.scm 439 */
									obj_t BgL_tmpz00_4232;

									BgL_tmpz00_4232 = ((obj_t) BgL_lz00_2255);
									SET_CDR(BgL_tmpz00_4232, BgL_rz00_2256);
								}
								BgL_arg1507z00_2264 = BgL_lz00_2255;
								{
									obj_t BgL_rz00_4236;
									obj_t BgL_lz00_4235;

									BgL_lz00_4235 = BgL_cdrlz00_2263;
									BgL_rz00_4236 = BgL_arg1507z00_2264;
									BgL_rz00_2256 = BgL_rz00_4236;
									BgL_lz00_2255 = BgL_lz00_4235;
									goto BgL_nrz00_2254;
								}
							}
						}
				}
		}

	}



/* &reverse! */
	obj_t BGl_z62reversez12z70zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2935,
		obj_t BgL_lz00_2936)
	{
		{	/* Ieee/pairlist.scm 800 */
			{	/* Ieee/pairlist.scm 801 */
				obj_t BgL_auxz00_4237;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_lz00_2936))
					{	/* Ieee/pairlist.scm 801 */
						BgL_auxz00_4237 = BgL_lz00_2936;
					}
				else
					{
						obj_t BgL_auxz00_4240;

						BgL_auxz00_4240 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 31509)),
							BGl_string2276z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2936);
						FAILURE(BgL_auxz00_4240, BFALSE, BFALSE);
					}
				return bgl_reverse_bang(BgL_auxz00_4237);
			}
		}

	}



/* every */
	BGL_EXPORTED_DEF obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_predz00_104, obj_t BgL_lz00_105)
	{
		{	/* Ieee/pairlist.scm 816 */
			if (NULLP(BgL_lz00_105))
				{	/* Ieee/pairlist.scm 818 */
					return BTRUE;
				}
			else
				{	/* Ieee/pairlist.scm 818 */
					if (NULLP(CDR(((obj_t) BgL_lz00_105))))
						{	/* Ieee/pairlist.scm 821 */
							obj_t BgL_g1025z00_1161;

							BgL_g1025z00_1161 = CAR(((obj_t) BgL_lz00_105));
							{
								obj_t BgL_lz00_1163;

								{	/* Ieee/pairlist.scm 821 */
									bool_t BgL_tmpz00_4253;

									BgL_lz00_1163 = BgL_g1025z00_1161;
								BgL_zc3z04anonymousza31512ze3z87_1164:
									{	/* Ieee/pairlist.scm 822 */
										bool_t BgL__ortest_1026z00_1165;

										BgL__ortest_1026z00_1165 = NULLP(BgL_lz00_1163);
										if (BgL__ortest_1026z00_1165)
											{	/* Ieee/pairlist.scm 822 */
												BgL_tmpz00_4253 = BgL__ortest_1026z00_1165;
											}
										else
											{	/* Ieee/pairlist.scm 823 */
												obj_t BgL__andtest_1027z00_1166;

												{	/* Ieee/pairlist.scm 823 */
													obj_t BgL_arg1514z00_1168;

													BgL_arg1514z00_1168 = CAR(((obj_t) BgL_lz00_1163));
													BgL__andtest_1027z00_1166 =
														PROCEDURE_ENTRY(BgL_predz00_104) (BgL_predz00_104,
														BgL_arg1514z00_1168, BEOA);
												}
												if (CBOOL(BgL__andtest_1027z00_1166))
													{	/* Ieee/pairlist.scm 823 */
														obj_t BgL_arg1513z00_1167;

														BgL_arg1513z00_1167 = CDR(((obj_t) BgL_lz00_1163));
														{
															obj_t BgL_lz00_4266;

															BgL_lz00_4266 = BgL_arg1513z00_1167;
															BgL_lz00_1163 = BgL_lz00_4266;
															goto BgL_zc3z04anonymousza31512ze3z87_1164;
														}
													}
												else
													{	/* Ieee/pairlist.scm 823 */
														BgL_tmpz00_4253 = ((bool_t) 0);
													}
											}
									}
									return BBOOL(BgL_tmpz00_4253);
								}
							}
						}
					else
						{
							obj_t BgL_lz00_1171;

							{	/* Ieee/pairlist.scm 825 */
								bool_t BgL_tmpz00_4268;

								BgL_lz00_1171 = BgL_lz00_105;
							BgL_zc3z04anonymousza31515ze3z87_1172:
								{	/* Ieee/pairlist.scm 826 */
									bool_t BgL__ortest_1028z00_1173;

									BgL__ortest_1028z00_1173 =
										NULLP(CAR(((obj_t) BgL_lz00_1171)));
									if (BgL__ortest_1028z00_1173)
										{	/* Ieee/pairlist.scm 826 */
											BgL_tmpz00_4268 = BgL__ortest_1028z00_1173;
										}
									else
										{	/* Ieee/pairlist.scm 827 */
											obj_t BgL__andtest_1029z00_1174;

											{	/* Ieee/pairlist.scm 827 */
												obj_t BgL_auxz00_4273;

												if (NULLP(BgL_lz00_1171))
													{	/* Ieee/pairlist.scm 827 */
														BgL_auxz00_4273 = BNIL;
													}
												else
													{	/* Ieee/pairlist.scm 827 */
														obj_t BgL_head1074z00_1194;

														{	/* Ieee/pairlist.scm 827 */
															obj_t BgL_arg1533z00_1206;

															{	/* Ieee/pairlist.scm 827 */
																obj_t BgL_pairz00_2281;

																BgL_pairz00_2281 = CAR(((obj_t) BgL_lz00_1171));
																BgL_arg1533z00_1206 = CAR(BgL_pairz00_2281);
															}
															{	/* Ieee/pairlist.scm 827 */
																obj_t BgL_res1935z00_2282;

																BgL_res1935z00_2282 =
																	MAKE_YOUNG_PAIR(BgL_arg1533z00_1206, BNIL);
																BgL_head1074z00_1194 = BgL_res1935z00_2282;
															}
														}
														{	/* Ieee/pairlist.scm 827 */
															obj_t BgL_g1077z00_1195;

															BgL_g1077z00_1195 = CDR(((obj_t) BgL_lz00_1171));
															{
																obj_t BgL_l1072z00_2307;
																obj_t BgL_tail1075z00_2308;

																BgL_l1072z00_2307 = BgL_g1077z00_1195;
																BgL_tail1075z00_2308 = BgL_head1074z00_1194;
															BgL_zc3z04anonymousza31527ze3z87_2306:
																if (NULLP(BgL_l1072z00_2307))
																	{	/* Ieee/pairlist.scm 827 */
																		BgL_auxz00_4273 = BgL_head1074z00_1194;
																	}
																else
																	{	/* Ieee/pairlist.scm 827 */
																		obj_t BgL_newtail1076z00_2315;

																		{	/* Ieee/pairlist.scm 827 */
																			obj_t BgL_arg1531z00_2316;

																			{	/* Ieee/pairlist.scm 827 */
																				obj_t BgL_pairz00_2321;

																				BgL_pairz00_2321 =
																					CAR(((obj_t) BgL_l1072z00_2307));
																				BgL_arg1531z00_2316 =
																					CAR(BgL_pairz00_2321);
																			}
																			{	/* Ieee/pairlist.scm 827 */
																				obj_t BgL_res1941z00_2322;

																				BgL_res1941z00_2322 =
																					MAKE_YOUNG_PAIR(BgL_arg1531z00_2316,
																					BNIL);
																				BgL_newtail1076z00_2315 =
																					BgL_res1941z00_2322;
																			}
																		}
																		SET_CDR(BgL_tail1075z00_2308,
																			BgL_newtail1076z00_2315);
																		{	/* Ieee/pairlist.scm 827 */
																			obj_t BgL_arg1530z00_2318;

																			BgL_arg1530z00_2318 =
																				CDR(((obj_t) BgL_l1072z00_2307));
																			{
																				obj_t BgL_tail1075z00_4292;
																				obj_t BgL_l1072z00_4291;

																				BgL_l1072z00_4291 = BgL_arg1530z00_2318;
																				BgL_tail1075z00_4292 =
																					BgL_newtail1076z00_2315;
																				BgL_tail1075z00_2308 =
																					BgL_tail1075z00_4292;
																				BgL_l1072z00_2307 = BgL_l1072z00_4291;
																				goto
																					BgL_zc3z04anonymousza31527ze3z87_2306;
																			}
																		}
																	}
															}
														}
													}
												BgL__andtest_1029z00_1174 =
													apply(BgL_predz00_104, BgL_auxz00_4273);
											}
											if (CBOOL(BgL__andtest_1029z00_1174))
												{	/* Ieee/pairlist.scm 827 */
													obj_t BgL_arg1516z00_1175;

													if (NULLP(BgL_lz00_1171))
														{	/* Ieee/pairlist.scm 827 */
															BgL_arg1516z00_1175 = BNIL;
														}
													else
														{	/* Ieee/pairlist.scm 827 */
															obj_t BgL_head1080z00_1178;

															{	/* Ieee/pairlist.scm 827 */
																obj_t BgL_arg1524z00_1190;

																{	/* Ieee/pairlist.scm 827 */
																	obj_t BgL_pairz00_2327;

																	BgL_pairz00_2327 =
																		CAR(((obj_t) BgL_lz00_1171));
																	BgL_arg1524z00_1190 = CDR(BgL_pairz00_2327);
																}
																{	/* Ieee/pairlist.scm 827 */
																	obj_t BgL_res1943z00_2328;

																	BgL_res1943z00_2328 =
																		MAKE_YOUNG_PAIR(BgL_arg1524z00_1190, BNIL);
																	BgL_head1080z00_1178 = BgL_res1943z00_2328;
																}
															}
															{	/* Ieee/pairlist.scm 827 */
																obj_t BgL_g1083z00_1179;

																BgL_g1083z00_1179 =
																	CDR(((obj_t) BgL_lz00_1171));
																{
																	obj_t BgL_l1078z00_2353;
																	obj_t BgL_tail1081z00_2354;

																	BgL_l1078z00_2353 = BgL_g1083z00_1179;
																	BgL_tail1081z00_2354 = BgL_head1080z00_1178;
																BgL_zc3z04anonymousza31518ze3z87_2352:
																	if (NULLP(BgL_l1078z00_2353))
																		{	/* Ieee/pairlist.scm 827 */
																			BgL_arg1516z00_1175 =
																				BgL_head1080z00_1178;
																		}
																	else
																		{	/* Ieee/pairlist.scm 827 */
																			obj_t BgL_newtail1082z00_2361;

																			{	/* Ieee/pairlist.scm 827 */
																				obj_t BgL_arg1521z00_2362;

																				{	/* Ieee/pairlist.scm 827 */
																					obj_t BgL_pairz00_2367;

																					BgL_pairz00_2367 =
																						CAR(((obj_t) BgL_l1078z00_2353));
																					BgL_arg1521z00_2362 =
																						CDR(BgL_pairz00_2367);
																				}
																				{	/* Ieee/pairlist.scm 827 */
																					obj_t BgL_res1949z00_2368;

																					BgL_res1949z00_2368 =
																						MAKE_YOUNG_PAIR(BgL_arg1521z00_2362,
																						BNIL);
																					BgL_newtail1082z00_2361 =
																						BgL_res1949z00_2368;
																				}
																			}
																			SET_CDR(BgL_tail1081z00_2354,
																				BgL_newtail1082z00_2361);
																			{	/* Ieee/pairlist.scm 827 */
																				obj_t BgL_arg1520z00_2364;

																				BgL_arg1520z00_2364 =
																					CDR(((obj_t) BgL_l1078z00_2353));
																				{
																					obj_t BgL_tail1081z00_4314;
																					obj_t BgL_l1078z00_4313;

																					BgL_l1078z00_4313 =
																						BgL_arg1520z00_2364;
																					BgL_tail1081z00_4314 =
																						BgL_newtail1082z00_2361;
																					BgL_tail1081z00_2354 =
																						BgL_tail1081z00_4314;
																					BgL_l1078z00_2353 = BgL_l1078z00_4313;
																					goto
																						BgL_zc3z04anonymousza31518ze3z87_2352;
																				}
																			}
																		}
																}
															}
														}
													{
														obj_t BgL_lz00_4315;

														BgL_lz00_4315 = BgL_arg1516z00_1175;
														BgL_lz00_1171 = BgL_lz00_4315;
														goto BgL_zc3z04anonymousza31515ze3z87_1172;
													}
												}
											else
												{	/* Ieee/pairlist.scm 827 */
													BgL_tmpz00_4268 = ((bool_t) 0);
												}
										}
								}
								return BBOOL(BgL_tmpz00_4268);
							}
						}
				}
		}

	}



/* &every */
	obj_t BGl_z62everyz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2937,
		obj_t BgL_predz00_2938, obj_t BgL_lz00_2939)
	{
		{	/* Ieee/pairlist.scm 816 */
			{	/* Ieee/pairlist.scm 818 */
				obj_t BgL_auxz00_4317;

				if (PROCEDUREP(BgL_predz00_2938))
					{	/* Ieee/pairlist.scm 818 */
						BgL_auxz00_4317 = BgL_predz00_2938;
					}
				else
					{
						obj_t BgL_auxz00_4320;

						BgL_auxz00_4320 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 32010)),
							BGl_string2277z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2278z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2938);
						FAILURE(BgL_auxz00_4320, BFALSE, BFALSE);
					}
				return
					BGl_everyz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4317,
					BgL_lz00_2939);
			}
		}

	}



/* any */
	BGL_EXPORTED_DEF obj_t BGl_anyz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_predz00_106, obj_t BgL_lz00_107)
	{
		{	/* Ieee/pairlist.scm 832 */
			if (NULLP(BgL_lz00_107))
				{	/* Ieee/pairlist.scm 834 */
					return BFALSE;
				}
			else
				{	/* Ieee/pairlist.scm 834 */
					if (NULLP(CDR(((obj_t) BgL_lz00_107))))
						{	/* Ieee/pairlist.scm 837 */
							obj_t BgL_g1030z00_1214;

							BgL_g1030z00_1214 = CAR(((obj_t) BgL_lz00_107));
							{
								obj_t BgL_lz00_1216;

								BgL_lz00_1216 = BgL_g1030z00_1214;
							BgL_zc3z04anonymousza31542ze3z87_1217:
								if (PAIRP(BgL_lz00_1216))
									{	/* Ieee/pairlist.scm 839 */
										obj_t BgL__ortest_1032z00_1219;

										{	/* Ieee/pairlist.scm 839 */
											obj_t BgL_arg1545z00_1221;

											BgL_arg1545z00_1221 = CAR(BgL_lz00_1216);
											BgL__ortest_1032z00_1219 =
												PROCEDURE_ENTRY(BgL_predz00_106) (BgL_predz00_106,
												BgL_arg1545z00_1221, BEOA);
										}
										if (CBOOL(BgL__ortest_1032z00_1219))
											{	/* Ieee/pairlist.scm 839 */
												return BgL__ortest_1032z00_1219;
											}
										else
											{
												obj_t BgL_lz00_4342;

												BgL_lz00_4342 = CDR(BgL_lz00_1216);
												BgL_lz00_1216 = BgL_lz00_4342;
												goto BgL_zc3z04anonymousza31542ze3z87_1217;
											}
									}
								else
									{	/* Ieee/pairlist.scm 838 */
										return BFALSE;
									}
							}
						}
					else
						{
							obj_t BgL_lz00_1224;

							BgL_lz00_1224 = BgL_lz00_107;
						BgL_zc3z04anonymousza31546ze3z87_1225:
							{	/* Ieee/pairlist.scm 842 */
								bool_t BgL_test2597z00_4344;

								{	/* Ieee/pairlist.scm 214 */
									obj_t BgL_tmpz00_4345;

									BgL_tmpz00_4345 = CAR(((obj_t) BgL_lz00_1224));
									BgL_test2597z00_4344 = PAIRP(BgL_tmpz00_4345);
								}
								if (BgL_test2597z00_4344)
									{	/* Ieee/pairlist.scm 843 */
										obj_t BgL__ortest_1034z00_1227;

										{	/* Ieee/pairlist.scm 843 */
											obj_t BgL_auxz00_4349;

											if (NULLP(BgL_lz00_1224))
												{	/* Ieee/pairlist.scm 843 */
													BgL_auxz00_4349 = BNIL;
												}
											else
												{	/* Ieee/pairlist.scm 843 */
													obj_t BgL_head1086z00_1247;

													{	/* Ieee/pairlist.scm 843 */
														obj_t BgL_arg1563z00_1259;

														{	/* Ieee/pairlist.scm 843 */
															obj_t BgL_pairz00_2382;

															BgL_pairz00_2382 = CAR(((obj_t) BgL_lz00_1224));
															BgL_arg1563z00_1259 = CAR(BgL_pairz00_2382);
														}
														{	/* Ieee/pairlist.scm 843 */
															obj_t BgL_res1957z00_2383;

															BgL_res1957z00_2383 =
																MAKE_YOUNG_PAIR(BgL_arg1563z00_1259, BNIL);
															BgL_head1086z00_1247 = BgL_res1957z00_2383;
														}
													}
													{	/* Ieee/pairlist.scm 843 */
														obj_t BgL_g1089z00_1248;

														BgL_g1089z00_1248 = CDR(((obj_t) BgL_lz00_1224));
														{
															obj_t BgL_l1084z00_2408;
															obj_t BgL_tail1087z00_2409;

															BgL_l1084z00_2408 = BgL_g1089z00_1248;
															BgL_tail1087z00_2409 = BgL_head1086z00_1247;
														BgL_zc3z04anonymousza31558ze3z87_2407:
															if (NULLP(BgL_l1084z00_2408))
																{	/* Ieee/pairlist.scm 843 */
																	BgL_auxz00_4349 = BgL_head1086z00_1247;
																}
															else
																{	/* Ieee/pairlist.scm 843 */
																	obj_t BgL_newtail1088z00_2416;

																	{	/* Ieee/pairlist.scm 843 */
																		obj_t BgL_arg1561z00_2417;

																		{	/* Ieee/pairlist.scm 843 */
																			obj_t BgL_pairz00_2422;

																			BgL_pairz00_2422 =
																				CAR(((obj_t) BgL_l1084z00_2408));
																			BgL_arg1561z00_2417 =
																				CAR(BgL_pairz00_2422);
																		}
																		{	/* Ieee/pairlist.scm 843 */
																			obj_t BgL_res1963z00_2423;

																			BgL_res1963z00_2423 =
																				MAKE_YOUNG_PAIR(BgL_arg1561z00_2417,
																				BNIL);
																			BgL_newtail1088z00_2416 =
																				BgL_res1963z00_2423;
																		}
																	}
																	SET_CDR(BgL_tail1087z00_2409,
																		BgL_newtail1088z00_2416);
																	{	/* Ieee/pairlist.scm 843 */
																		obj_t BgL_arg1560z00_2419;

																		BgL_arg1560z00_2419 =
																			CDR(((obj_t) BgL_l1084z00_2408));
																		{
																			obj_t BgL_tail1087z00_4368;
																			obj_t BgL_l1084z00_4367;

																			BgL_l1084z00_4367 = BgL_arg1560z00_2419;
																			BgL_tail1087z00_4368 =
																				BgL_newtail1088z00_2416;
																			BgL_tail1087z00_2409 =
																				BgL_tail1087z00_4368;
																			BgL_l1084z00_2408 = BgL_l1084z00_4367;
																			goto
																				BgL_zc3z04anonymousza31558ze3z87_2407;
																		}
																	}
																}
														}
													}
												}
											BgL__ortest_1034z00_1227 =
												apply(BgL_predz00_106, BgL_auxz00_4349);
										}
										if (CBOOL(BgL__ortest_1034z00_1227))
											{	/* Ieee/pairlist.scm 843 */
												return BgL__ortest_1034z00_1227;
											}
										else
											{	/* Ieee/pairlist.scm 843 */
												obj_t BgL_arg1547z00_1228;

												if (NULLP(BgL_lz00_1224))
													{	/* Ieee/pairlist.scm 843 */
														BgL_arg1547z00_1228 = BNIL;
													}
												else
													{	/* Ieee/pairlist.scm 843 */
														obj_t BgL_head1092z00_1231;

														{	/* Ieee/pairlist.scm 843 */
															obj_t BgL_arg1554z00_1243;

															{	/* Ieee/pairlist.scm 843 */
																obj_t BgL_pairz00_2428;

																BgL_pairz00_2428 = CAR(((obj_t) BgL_lz00_1224));
																BgL_arg1554z00_1243 = CDR(BgL_pairz00_2428);
															}
															{	/* Ieee/pairlist.scm 843 */
																obj_t BgL_res1965z00_2429;

																BgL_res1965z00_2429 =
																	MAKE_YOUNG_PAIR(BgL_arg1554z00_1243, BNIL);
																BgL_head1092z00_1231 = BgL_res1965z00_2429;
															}
														}
														{	/* Ieee/pairlist.scm 843 */
															obj_t BgL_g1095z00_1232;

															BgL_g1095z00_1232 = CDR(((obj_t) BgL_lz00_1224));
															{
																obj_t BgL_l1090z00_2454;
																obj_t BgL_tail1093z00_2455;

																BgL_l1090z00_2454 = BgL_g1095z00_1232;
																BgL_tail1093z00_2455 = BgL_head1092z00_1231;
															BgL_zc3z04anonymousza31549ze3z87_2453:
																if (NULLP(BgL_l1090z00_2454))
																	{	/* Ieee/pairlist.scm 843 */
																		BgL_arg1547z00_1228 = BgL_head1092z00_1231;
																	}
																else
																	{	/* Ieee/pairlist.scm 843 */
																		obj_t BgL_newtail1094z00_2462;

																		{	/* Ieee/pairlist.scm 843 */
																			obj_t BgL_arg1552z00_2463;

																			{	/* Ieee/pairlist.scm 843 */
																				obj_t BgL_pairz00_2468;

																				BgL_pairz00_2468 =
																					CAR(((obj_t) BgL_l1090z00_2454));
																				BgL_arg1552z00_2463 =
																					CDR(BgL_pairz00_2468);
																			}
																			{	/* Ieee/pairlist.scm 843 */
																				obj_t BgL_res1973z00_2469;

																				BgL_res1973z00_2469 =
																					MAKE_YOUNG_PAIR(BgL_arg1552z00_2463,
																					BNIL);
																				BgL_newtail1094z00_2462 =
																					BgL_res1973z00_2469;
																			}
																		}
																		SET_CDR(BgL_tail1093z00_2455,
																			BgL_newtail1094z00_2462);
																		{	/* Ieee/pairlist.scm 843 */
																			obj_t BgL_arg1551z00_2465;

																			BgL_arg1551z00_2465 =
																				CDR(((obj_t) BgL_l1090z00_2454));
																			{
																				obj_t BgL_tail1093z00_4390;
																				obj_t BgL_l1090z00_4389;

																				BgL_l1090z00_4389 = BgL_arg1551z00_2465;
																				BgL_tail1093z00_4390 =
																					BgL_newtail1094z00_2462;
																				BgL_tail1093z00_2455 =
																					BgL_tail1093z00_4390;
																				BgL_l1090z00_2454 = BgL_l1090z00_4389;
																				goto
																					BgL_zc3z04anonymousza31549ze3z87_2453;
																			}
																		}
																	}
															}
														}
													}
												{
													obj_t BgL_lz00_4391;

													BgL_lz00_4391 = BgL_arg1547z00_1228;
													BgL_lz00_1224 = BgL_lz00_4391;
													goto BgL_zc3z04anonymousza31546ze3z87_1225;
												}
											}
									}
								else
									{	/* Ieee/pairlist.scm 842 */
										return BFALSE;
									}
							}
						}
				}
		}

	}



/* &any */
	obj_t BGl_z62anyz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2940,
		obj_t BgL_predz00_2941, obj_t BgL_lz00_2942)
	{
		{	/* Ieee/pairlist.scm 832 */
			{	/* Ieee/pairlist.scm 834 */
				obj_t BgL_auxz00_4392;

				if (PROCEDUREP(BgL_predz00_2941))
					{	/* Ieee/pairlist.scm 834 */
						BgL_auxz00_4392 = BgL_predz00_2941;
					}
				else
					{
						obj_t BgL_auxz00_4395;

						BgL_auxz00_4395 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 32532)),
							BGl_string2279z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2278z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2941);
						FAILURE(BgL_auxz00_4395, BFALSE, BFALSE);
					}
				return
					BGl_anyz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4392,
					BgL_lz00_2942);
			}
		}

	}



/* find */
	BGL_EXPORTED_DEF obj_t BGl_findz00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_predz00_108, obj_t BgL_listz00_109)
	{
		{	/* Ieee/pairlist.scm 848 */
			{	/* Ieee/pairlist.scm 849 */
				obj_t BgL_g1035z00_2472;

				{
					obj_t BgL_listz00_2477;

					BgL_listz00_2477 = BgL_listz00_109;
				BgL_lpz00_2476:
					if (PAIRP(BgL_listz00_2477))
						{	/* Ieee/pairlist.scm 858 */
							bool_t BgL_test2605z00_4402;

							{	/* Ieee/pairlist.scm 858 */
								obj_t BgL_arg1574z00_2480;

								BgL_arg1574z00_2480 = CAR(BgL_listz00_2477);
								BgL_test2605z00_4402 =
									CBOOL(PROCEDURE_ENTRY(BgL_predz00_108) (BgL_predz00_108,
										BgL_arg1574z00_2480, BEOA));
							}
							if (BgL_test2605z00_4402)
								{	/* Ieee/pairlist.scm 858 */
									BgL_g1035z00_2472 = BgL_listz00_2477;
								}
							else
								{
									obj_t BgL_listz00_4409;

									BgL_listz00_4409 = CDR(BgL_listz00_2477);
									BgL_listz00_2477 = BgL_listz00_4409;
									goto BgL_lpz00_2476;
								}
						}
					else
						{	/* Ieee/pairlist.scm 857 */
							BgL_g1035z00_2472 = BFALSE;
						}
				}
				if (CBOOL(BgL_g1035z00_2472))
					{	/* Ieee/pairlist.scm 849 */
						return CAR(((obj_t) BgL_g1035z00_2472));
					}
				else
					{	/* Ieee/pairlist.scm 849 */
						return BFALSE;
					}
			}
		}

	}



/* &find */
	obj_t BGl_z62findz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2943,
		obj_t BgL_predz00_2944, obj_t BgL_listz00_2945)
	{
		{	/* Ieee/pairlist.scm 848 */
			{	/* Ieee/pairlist.scm 849 */
				obj_t BgL_auxz00_4422;
				obj_t BgL_auxz00_4415;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_2945))
					{	/* Ieee/pairlist.scm 849 */
						BgL_auxz00_4422 = BgL_listz00_2945;
					}
				else
					{
						obj_t BgL_auxz00_4425;

						BgL_auxz00_4425 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 33053)),
							BGl_string2280z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2945);
						FAILURE(BgL_auxz00_4425, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_predz00_2944))
					{	/* Ieee/pairlist.scm 849 */
						BgL_auxz00_4415 = BgL_predz00_2944;
					}
				else
					{
						obj_t BgL_auxz00_4418;

						BgL_auxz00_4418 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 33053)),
							BGl_string2280z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2278z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2944);
						FAILURE(BgL_auxz00_4418, BFALSE, BFALSE);
					}
				return
					BGl_findz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4415,
					BgL_auxz00_4422);
			}
		}

	}



/* find-tail */
	BGL_EXPORTED_DEF obj_t BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_predz00_110, obj_t BgL_listz00_111)
	{
		{	/* Ieee/pairlist.scm 855 */
			{
				obj_t BgL_listz00_2487;

				BgL_listz00_2487 = BgL_listz00_111;
			BgL_lpz00_2486:
				if (PAIRP(BgL_listz00_2487))
					{	/* Ieee/pairlist.scm 858 */
						bool_t BgL_test2610z00_4432;

						{	/* Ieee/pairlist.scm 858 */
							obj_t BgL_arg1574z00_2490;

							BgL_arg1574z00_2490 = CAR(BgL_listz00_2487);
							BgL_test2610z00_4432 =
								CBOOL(PROCEDURE_ENTRY(BgL_predz00_110) (BgL_predz00_110,
									BgL_arg1574z00_2490, BEOA));
						}
						if (BgL_test2610z00_4432)
							{	/* Ieee/pairlist.scm 858 */
								return BgL_listz00_2487;
							}
						else
							{
								obj_t BgL_listz00_4439;

								BgL_listz00_4439 = CDR(BgL_listz00_2487);
								BgL_listz00_2487 = BgL_listz00_4439;
								goto BgL_lpz00_2486;
							}
					}
				else
					{	/* Ieee/pairlist.scm 857 */
						return BFALSE;
					}
			}
		}

	}



/* &find-tail */
	obj_t BGl_z62findzd2tailzb0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2946, obj_t BgL_predz00_2947, obj_t BgL_listz00_2948)
	{
		{	/* Ieee/pairlist.scm 855 */
			{	/* Ieee/pairlist.scm 857 */
				obj_t BgL_auxz00_4448;
				obj_t BgL_auxz00_4441;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_2948))
					{	/* Ieee/pairlist.scm 857 */
						BgL_auxz00_4448 = BgL_listz00_2948;
					}
				else
					{
						obj_t BgL_auxz00_4451;

						BgL_auxz00_4451 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 33381)),
							BGl_string2281z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2948);
						FAILURE(BgL_auxz00_4451, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_predz00_2947))
					{	/* Ieee/pairlist.scm 857 */
						BgL_auxz00_4441 = BgL_predz00_2947;
					}
				else
					{
						obj_t BgL_auxz00_4444;

						BgL_auxz00_4444 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 33381)),
							BGl_string2281z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2278z00zz__r4_pairs_and_lists_6_3z00, BgL_predz00_2947);
						FAILURE(BgL_auxz00_4444, BFALSE, BFALSE);
					}
				return
					BGl_findzd2tailzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4441,
					BgL_auxz00_4448);
			}
		}

	}



/* reduce */
	BGL_EXPORTED_DEF obj_t BGl_reducez00zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_fz00_112, obj_t BgL_ridentifyz00_113, obj_t BgL_listz00_114)
	{
		{	/* Ieee/pairlist.scm 865 */
			if (NULLP(BgL_listz00_114))
				{	/* Ieee/pairlist.scm 866 */
					return BgL_ridentifyz00_113;
				}
			else
				{	/* Ieee/pairlist.scm 868 */
					obj_t BgL_g1037z00_2496;
					obj_t BgL_g1038z00_2497;

					BgL_g1037z00_2496 = CDR(BgL_listz00_114);
					BgL_g1038z00_2497 = CAR(BgL_listz00_114);
					{
						obj_t BgL_listz00_2523;
						obj_t BgL_ansz00_2524;

						BgL_listz00_2523 = BgL_g1037z00_2496;
						BgL_ansz00_2524 = BgL_g1038z00_2497;
					BgL_loopz00_2522:
						if (PAIRP(BgL_listz00_2523))
							{	/* Ieee/pairlist.scm 872 */
								obj_t BgL_arg1578z00_2530;
								obj_t BgL_arg1579z00_2531;

								BgL_arg1578z00_2530 = CDR(BgL_listz00_2523);
								{	/* Ieee/pairlist.scm 872 */
									obj_t BgL_arg1580z00_2532;

									BgL_arg1580z00_2532 = CAR(BgL_listz00_2523);
									BgL_arg1579z00_2531 =
										PROCEDURE_ENTRY(BgL_fz00_112) (BgL_fz00_112,
										BgL_arg1580z00_2532, BgL_ansz00_2524, BEOA);
								}
								{
									obj_t BgL_ansz00_4470;
									obj_t BgL_listz00_4469;

									BgL_listz00_4469 = BgL_arg1578z00_2530;
									BgL_ansz00_4470 = BgL_arg1579z00_2531;
									BgL_ansz00_2524 = BgL_ansz00_4470;
									BgL_listz00_2523 = BgL_listz00_4469;
									goto BgL_loopz00_2522;
								}
							}
						else
							{	/* Ieee/pairlist.scm 870 */
								return BgL_ansz00_2524;
							}
					}
				}
		}

	}



/* &reduce */
	obj_t BGl_z62reducez62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2949,
		obj_t BgL_fz00_2950, obj_t BgL_ridentifyz00_2951, obj_t BgL_listz00_2952)
	{
		{	/* Ieee/pairlist.scm 865 */
			{	/* Ieee/pairlist.scm 866 */
				obj_t BgL_auxz00_4478;
				obj_t BgL_auxz00_4471;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_listz00_2952))
					{	/* Ieee/pairlist.scm 866 */
						BgL_auxz00_4478 = BgL_listz00_2952;
					}
				else
					{
						obj_t BgL_auxz00_4481;

						BgL_auxz00_4481 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 33721)),
							BGl_string2282z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_listz00_2952);
						FAILURE(BgL_auxz00_4481, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_fz00_2950))
					{	/* Ieee/pairlist.scm 866 */
						BgL_auxz00_4471 = BgL_fz00_2950;
					}
				else
					{
						obj_t BgL_auxz00_4474;

						BgL_auxz00_4474 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 33721)),
							BGl_string2282z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2278z00zz__r4_pairs_and_lists_6_3z00, BgL_fz00_2950);
						FAILURE(BgL_auxz00_4474, BFALSE, BFALSE);
					}
				return
					BGl_reducez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4471,
					BgL_ridentifyz00_2951, BgL_auxz00_4478);
			}
		}

	}



/* make-list */
	BGL_EXPORTED_DEF obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int
		BgL_nz00_115, obj_t BgL_oz00_116)
	{
		{	/* Ieee/pairlist.scm 877 */
			{	/* Ieee/pairlist.scm 878 */
				obj_t BgL_fillz00_1287;

				if (PAIRP(BgL_oz00_116))
					{	/* Ieee/pairlist.scm 878 */
						BgL_fillz00_1287 = CAR(BgL_oz00_116);
					}
				else
					{	/* Ieee/pairlist.scm 878 */
						BgL_fillz00_1287 = BUNSPEC;
					}
				{
					int BgL_iz00_2553;
					obj_t BgL_rz00_2554;

					BgL_iz00_2553 = BgL_nz00_115;
					BgL_rz00_2554 = BNIL;
				BgL_walkz00_2552:
					if (((long) (BgL_iz00_2553) <= ((long) 0)))
						{	/* Ieee/pairlist.scm 880 */
							return BgL_rz00_2554;
						}
					else
						{	/* Ieee/pairlist.scm 882 */
							long BgL_arg1583z00_2559;
							obj_t BgL_arg1584z00_2560;

							BgL_arg1583z00_2559 = ((long) (BgL_iz00_2553) - ((long) 1));
							BgL_arg1584z00_2560 =
								MAKE_YOUNG_PAIR(BgL_fillz00_1287, BgL_rz00_2554);
							{
								obj_t BgL_rz00_4497;
								int BgL_iz00_4495;

								BgL_iz00_4495 = (int) (BgL_arg1583z00_2559);
								BgL_rz00_4497 = BgL_arg1584z00_2560;
								BgL_rz00_2554 = BgL_rz00_4497;
								BgL_iz00_2553 = BgL_iz00_4495;
								goto BgL_walkz00_2552;
							}
						}
				}
			}
		}

	}



/* &make-list */
	obj_t BGl_z62makezd2listzb0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2953, obj_t BgL_nz00_2954, obj_t BgL_oz00_2955)
	{
		{	/* Ieee/pairlist.scm 877 */
			{	/* Ieee/pairlist.scm 878 */
				int BgL_auxz00_4498;

				{	/* Ieee/pairlist.scm 878 */
					obj_t BgL_tmpz00_4499;

					if (INTEGERP(BgL_nz00_2954))
						{	/* Ieee/pairlist.scm 878 */
							BgL_tmpz00_4499 = BgL_nz00_2954;
						}
					else
						{
							obj_t BgL_auxz00_4502;

							BgL_auxz00_4502 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 34150)),
								BGl_string2283z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2260z00zz__r4_pairs_and_lists_6_3z00, BgL_nz00_2954);
							FAILURE(BgL_auxz00_4502, BFALSE, BFALSE);
						}
					BgL_auxz00_4498 = CINT(BgL_tmpz00_4499);
				}
				return
					BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4498,
					BgL_oz00_2955);
			}
		}

	}



/* list-tabulate */
	BGL_EXPORTED_DEF obj_t BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(int
		BgL_nz00_117, obj_t BgL_initzd2proczd2_118)
	{
		{	/* Ieee/pairlist.scm 887 */
			{	/* Ieee/pairlist.scm 888 */
				long BgL_g1040z00_1298;

				BgL_g1040z00_1298 = ((long) (BgL_nz00_117) - ((long) 1));
				{
					long BgL_iz00_2584;
					obj_t BgL_rz00_2585;

					BgL_iz00_2584 = BgL_g1040z00_1298;
					BgL_rz00_2585 = BNIL;
				BgL_walkz00_2583:
					if ((BgL_iz00_2584 < ((long) 0)))
						{	/* Ieee/pairlist.scm 889 */
							return BgL_rz00_2585;
						}
					else
						{	/* Ieee/pairlist.scm 891 */
							long BgL_arg1588z00_2591;
							obj_t BgL_arg1589z00_2592;

							BgL_arg1588z00_2591 = (BgL_iz00_2584 - ((long) 1));
							{	/* Ieee/pairlist.scm 891 */
								obj_t BgL_arg1592z00_2593;

								BgL_arg1592z00_2593 =
									PROCEDURE_ENTRY(BgL_initzd2proczd2_118)
									(BgL_initzd2proczd2_118, BINT(BgL_iz00_2584), BEOA);
								BgL_arg1589z00_2592 =
									MAKE_YOUNG_PAIR(BgL_arg1592z00_2593, BgL_rz00_2585);
							}
							{
								obj_t BgL_rz00_4520;
								long BgL_iz00_4519;

								BgL_iz00_4519 = BgL_arg1588z00_2591;
								BgL_rz00_4520 = BgL_arg1589z00_2592;
								BgL_rz00_2585 = BgL_rz00_4520;
								BgL_iz00_2584 = BgL_iz00_4519;
								goto BgL_walkz00_2583;
							}
						}
				}
			}
		}

	}



/* &list-tabulate */
	obj_t BGl_z62listzd2tabulatezb0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2956, obj_t BgL_nz00_2957, obj_t BgL_initzd2proczd2_2958)
	{
		{	/* Ieee/pairlist.scm 887 */
			{	/* Ieee/pairlist.scm 888 */
				obj_t BgL_auxz00_4530;
				int BgL_auxz00_4521;

				if (PROCEDUREP(BgL_initzd2proczd2_2958))
					{	/* Ieee/pairlist.scm 888 */
						BgL_auxz00_4530 = BgL_initzd2proczd2_2958;
					}
				else
					{
						obj_t BgL_auxz00_4533;

						BgL_auxz00_4533 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 34561)),
							BGl_string2284z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2278z00zz__r4_pairs_and_lists_6_3z00,
							BgL_initzd2proczd2_2958);
						FAILURE(BgL_auxz00_4533, BFALSE, BFALSE);
					}
				{	/* Ieee/pairlist.scm 888 */
					obj_t BgL_tmpz00_4522;

					if (INTEGERP(BgL_nz00_2957))
						{	/* Ieee/pairlist.scm 888 */
							BgL_tmpz00_4522 = BgL_nz00_2957;
						}
					else
						{
							obj_t BgL_auxz00_4525;

							BgL_auxz00_4525 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 34561)),
								BGl_string2284z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2260z00zz__r4_pairs_and_lists_6_3z00, BgL_nz00_2957);
							FAILURE(BgL_auxz00_4525, BFALSE, BFALSE);
						}
					BgL_auxz00_4521 = CINT(BgL_tmpz00_4522);
				}
				return
					BGl_listzd2tabulatezd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4521,
					BgL_auxz00_4530);
			}
		}

	}



/* list-split */
	BGL_EXPORTED_DEF obj_t BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_119, int BgL_numz00_120, obj_t BgL_fillz00_121)
	{
		{	/* Ieee/pairlist.scm 896 */
			{
				obj_t BgL_lz00_1312;
				long BgL_iz00_1313;
				obj_t BgL_accz00_1314;
				obj_t BgL_resz00_1315;

				BgL_lz00_1312 = BgL_lz00_119;
				BgL_iz00_1313 = ((long) 0);
				BgL_accz00_1314 = BNIL;
				BgL_resz00_1315 = BNIL;
			BgL_zc3z04anonymousza31593ze3z87_1316:
				if (NULLP(BgL_lz00_1312))
					{	/* Ieee/pairlist.scm 903 */
						obj_t BgL_arg1596z00_1318;

						{	/* Ieee/pairlist.scm 903 */
							obj_t BgL_arg1597z00_1319;

							{	/* Ieee/pairlist.scm 903 */
								bool_t BgL_test2624z00_4540;

								if (NULLP(BgL_fillz00_121))
									{	/* Ieee/pairlist.scm 903 */
										BgL_test2624z00_4540 = ((bool_t) 1);
									}
								else
									{	/* Ieee/pairlist.scm 903 */
										if ((BgL_iz00_1313 == (long) (BgL_numz00_120)))
											{	/* Ieee/pairlist.scm 903 */
												BgL_test2624z00_4540 = ((bool_t) 1);
											}
										else
											{	/* Ieee/pairlist.scm 903 */
												BgL_test2624z00_4540 = (BgL_iz00_1313 == ((long) 0));
									}}
								if (BgL_test2624z00_4540)
									{	/* Ieee/pairlist.scm 903 */
										BgL_arg1597z00_1319 = bgl_reverse_bang(BgL_accz00_1314);
									}
								else
									{	/* Ieee/pairlist.scm 905 */
										obj_t BgL_arg1602z00_1323;
										obj_t BgL_arg1603z00_1324;

										BgL_arg1602z00_1323 = bgl_reverse_bang(BgL_accz00_1314);
										{	/* Ieee/pairlist.scm 906 */
											long BgL_arg1604z00_1325;
											obj_t BgL_arg1605z00_1326;

											BgL_arg1604z00_1325 =
												((long) (BgL_numz00_120) - BgL_iz00_1313);
											BgL_arg1605z00_1326 = CAR(((obj_t) BgL_fillz00_121));
											{	/* Ieee/pairlist.scm 906 */
												obj_t BgL_list1606z00_1327;

												BgL_list1606z00_1327 =
													MAKE_YOUNG_PAIR(BgL_arg1605z00_1326, BNIL);
												BgL_arg1603z00_1324 =
													BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
													(int) (BgL_arg1604z00_1325), BgL_list1606z00_1327);
										}}
										BgL_arg1597z00_1319 =
											BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1602z00_1323, BgL_arg1603z00_1324);
							}}
							BgL_arg1596z00_1318 =
								MAKE_YOUNG_PAIR(BgL_arg1597z00_1319, BgL_resz00_1315);
						}
						return bgl_reverse_bang(BgL_arg1596z00_1318);
					}
				else
					{	/* Ieee/pairlist.scm 902 */
						if ((BgL_iz00_1313 == (long) (BgL_numz00_120)))
							{	/* Ieee/pairlist.scm 909 */
								obj_t BgL_arg1608z00_1331;

								BgL_arg1608z00_1331 =
									MAKE_YOUNG_PAIR(bgl_reverse_bang(BgL_accz00_1314),
									BgL_resz00_1315);
								{
									obj_t BgL_resz00_4566;
									obj_t BgL_accz00_4565;
									long BgL_iz00_4564;

									BgL_iz00_4564 = ((long) 0);
									BgL_accz00_4565 = BNIL;
									BgL_resz00_4566 = BgL_arg1608z00_1331;
									BgL_resz00_1315 = BgL_resz00_4566;
									BgL_accz00_1314 = BgL_accz00_4565;
									BgL_iz00_1313 = BgL_iz00_4564;
									goto BgL_zc3z04anonymousza31593ze3z87_1316;
								}
							}
						else
							{	/* Ieee/pairlist.scm 911 */
								obj_t BgL_arg1612z00_1333;
								long BgL_arg1613z00_1334;
								obj_t BgL_arg1614z00_1335;

								BgL_arg1612z00_1333 = CDR(((obj_t) BgL_lz00_1312));
								BgL_arg1613z00_1334 = (BgL_iz00_1313 + ((long) 1));
								{	/* Ieee/pairlist.scm 911 */
									obj_t BgL_arg1615z00_1336;

									BgL_arg1615z00_1336 = CAR(((obj_t) BgL_lz00_1312));
									BgL_arg1614z00_1335 =
										MAKE_YOUNG_PAIR(BgL_arg1615z00_1336, BgL_accz00_1314);
								}
								{
									obj_t BgL_accz00_4575;
									long BgL_iz00_4574;
									obj_t BgL_lz00_4573;

									BgL_lz00_4573 = BgL_arg1612z00_1333;
									BgL_iz00_4574 = BgL_arg1613z00_1334;
									BgL_accz00_4575 = BgL_arg1614z00_1335;
									BgL_accz00_1314 = BgL_accz00_4575;
									BgL_iz00_1313 = BgL_iz00_4574;
									BgL_lz00_1312 = BgL_lz00_4573;
									goto BgL_zc3z04anonymousza31593ze3z87_1316;
								}
							}
					}
			}
		}

	}



/* &list-split */
	obj_t BGl_z62listzd2splitzb0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2959, obj_t BgL_lz00_2960, obj_t BgL_numz00_2961,
		obj_t BgL_fillz00_2962)
	{
		{	/* Ieee/pairlist.scm 896 */
			{	/* Ieee/pairlist.scm 902 */
				int BgL_auxz00_4583;
				obj_t BgL_auxz00_4576;

				{	/* Ieee/pairlist.scm 902 */
					obj_t BgL_tmpz00_4584;

					if (INTEGERP(BgL_numz00_2961))
						{	/* Ieee/pairlist.scm 902 */
							BgL_tmpz00_4584 = BgL_numz00_2961;
						}
					else
						{
							obj_t BgL_auxz00_4587;

							BgL_auxz00_4587 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 35005)),
								BGl_string2285z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2260z00zz__r4_pairs_and_lists_6_3z00,
								BgL_numz00_2961);
							FAILURE(BgL_auxz00_4587, BFALSE, BFALSE);
						}
					BgL_auxz00_4583 = CINT(BgL_tmpz00_4584);
				}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_lz00_2960))
					{	/* Ieee/pairlist.scm 902 */
						BgL_auxz00_4576 = BgL_lz00_2960;
					}
				else
					{
						obj_t BgL_auxz00_4579;

						BgL_auxz00_4579 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 35005)),
							BGl_string2285z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2960);
						FAILURE(BgL_auxz00_4579, BFALSE, BFALSE);
					}
				return
					BGl_listzd2splitzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4576,
					BgL_auxz00_4583, BgL_fillz00_2962);
			}
		}

	}



/* list-split! */
	BGL_EXPORTED_DEF obj_t
		BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t BgL_lz00_122,
		int BgL_numz00_123, obj_t BgL_fillz00_124)
	{
		{	/* Ieee/pairlist.scm 916 */
			{
				obj_t BgL_lz00_1340;
				long BgL_iz00_1341;
				obj_t BgL_lastz00_1342;
				obj_t BgL_accz00_1343;
				obj_t BgL_rowsz00_1344;

				BgL_lz00_1340 = BgL_lz00_122;
				BgL_iz00_1341 = ((long) 0);
				BgL_lastz00_1342 = BFALSE;
				BgL_accz00_1343 = BgL_lz00_122;
				BgL_rowsz00_1344 = BNIL;
			BgL_zc3z04anonymousza31616ze3z87_1345:
				if (NULLP(BgL_lz00_1340))
					{	/* Ieee/pairlist.scm 924 */
						obj_t BgL_lrowz00_1347;

						{	/* Ieee/pairlist.scm 924 */
							bool_t BgL_test2631z00_4595;

							if (NULLP(BgL_fillz00_124))
								{	/* Ieee/pairlist.scm 924 */
									BgL_test2631z00_4595 = ((bool_t) 1);
								}
							else
								{	/* Ieee/pairlist.scm 924 */
									if ((BgL_iz00_1341 == (long) (BgL_numz00_123)))
										{	/* Ieee/pairlist.scm 924 */
											BgL_test2631z00_4595 = ((bool_t) 1);
										}
									else
										{	/* Ieee/pairlist.scm 924 */
											BgL_test2631z00_4595 = (BgL_iz00_1341 == ((long) 0));
								}}
							if (BgL_test2631z00_4595)
								{	/* Ieee/pairlist.scm 924 */
									BgL_lrowz00_1347 = BgL_accz00_1343;
								}
							else
								{	/* Ieee/pairlist.scm 924 */
									{	/* Ieee/pairlist.scm 928 */
										obj_t BgL_arg1623z00_1352;

										{	/* Ieee/pairlist.scm 928 */
											long BgL_arg1624z00_1353;
											obj_t BgL_arg1626z00_1354;

											BgL_arg1624z00_1353 =
												((long) (BgL_numz00_123) - BgL_iz00_1341);
											BgL_arg1626z00_1354 = CAR(((obj_t) BgL_fillz00_124));
											{	/* Ieee/pairlist.scm 928 */
												obj_t BgL_list1627z00_1355;

												BgL_list1627z00_1355 =
													MAKE_YOUNG_PAIR(BgL_arg1626z00_1354, BNIL);
												BgL_arg1623z00_1352 =
													BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
													(int) (BgL_arg1624z00_1353), BgL_list1627z00_1355);
										}}
										{	/* Ieee/pairlist.scm 439 */
											obj_t BgL_tmpz00_4609;

											BgL_tmpz00_4609 = ((obj_t) BgL_lastz00_1342);
											SET_CDR(BgL_tmpz00_4609, BgL_arg1623z00_1352);
									}}
									BgL_lrowz00_1347 = BgL_accz00_1343;
						}}
						{	/* Ieee/pairlist.scm 930 */
							obj_t BgL_arg1618z00_1348;

							BgL_arg1618z00_1348 =
								MAKE_YOUNG_PAIR(BgL_lrowz00_1347, BgL_rowsz00_1344);
							return bgl_reverse_bang(BgL_arg1618z00_1348);
						}
					}
				else
					{	/* Ieee/pairlist.scm 923 */
						if ((BgL_iz00_1341 == (long) (BgL_numz00_123)))
							{	/* Ieee/pairlist.scm 931 */
								{	/* Ieee/pairlist.scm 439 */
									obj_t BgL_tmpz00_4617;

									BgL_tmpz00_4617 = ((obj_t) BgL_lastz00_1342);
									SET_CDR(BgL_tmpz00_4617, BNIL);
								}
								{	/* Ieee/pairlist.scm 933 */
									obj_t BgL_arg1629z00_1359;

									BgL_arg1629z00_1359 =
										MAKE_YOUNG_PAIR(BgL_accz00_1343, BgL_rowsz00_1344);
									{
										obj_t BgL_rowsz00_4624;
										obj_t BgL_accz00_4623;
										obj_t BgL_lastz00_4622;
										long BgL_iz00_4621;

										BgL_iz00_4621 = ((long) 0);
										BgL_lastz00_4622 = BgL_lz00_1340;
										BgL_accz00_4623 = BgL_lz00_1340;
										BgL_rowsz00_4624 = BgL_arg1629z00_1359;
										BgL_rowsz00_1344 = BgL_rowsz00_4624;
										BgL_accz00_1343 = BgL_accz00_4623;
										BgL_lastz00_1342 = BgL_lastz00_4622;
										BgL_iz00_1341 = BgL_iz00_4621;
										goto BgL_zc3z04anonymousza31616ze3z87_1345;
									}
								}
							}
						else
							{	/* Ieee/pairlist.scm 935 */
								obj_t BgL_arg1630z00_1360;
								long BgL_arg1631z00_1361;

								BgL_arg1630z00_1360 = CDR(((obj_t) BgL_lz00_1340));
								BgL_arg1631z00_1361 = (BgL_iz00_1341 + ((long) 1));
								{
									obj_t BgL_lastz00_4630;
									long BgL_iz00_4629;
									obj_t BgL_lz00_4628;

									BgL_lz00_4628 = BgL_arg1630z00_1360;
									BgL_iz00_4629 = BgL_arg1631z00_1361;
									BgL_lastz00_4630 = BgL_lz00_1340;
									BgL_lastz00_1342 = BgL_lastz00_4630;
									BgL_iz00_1341 = BgL_iz00_4629;
									BgL_lz00_1340 = BgL_lz00_4628;
									goto BgL_zc3z04anonymousza31616ze3z87_1345;
								}
							}
					}
			}
		}

	}



/* &list-split! */
	obj_t BGl_z62listzd2splitz12za2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2963, obj_t BgL_lz00_2964, obj_t BgL_numz00_2965,
		obj_t BgL_fillz00_2966)
	{
		{	/* Ieee/pairlist.scm 916 */
			{	/* Ieee/pairlist.scm 923 */
				int BgL_auxz00_4638;
				obj_t BgL_auxz00_4631;

				{	/* Ieee/pairlist.scm 923 */
					obj_t BgL_tmpz00_4639;

					if (INTEGERP(BgL_numz00_2965))
						{	/* Ieee/pairlist.scm 923 */
							BgL_tmpz00_4639 = BgL_numz00_2965;
						}
					else
						{
							obj_t BgL_auxz00_4642;

							BgL_auxz00_4642 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 35675)),
								BGl_string2286z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2260z00zz__r4_pairs_and_lists_6_3z00,
								BgL_numz00_2965);
							FAILURE(BgL_auxz00_4642, BFALSE, BFALSE);
						}
					BgL_auxz00_4638 = CINT(BgL_tmpz00_4639);
				}
				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_lz00_2964))
					{	/* Ieee/pairlist.scm 923 */
						BgL_auxz00_4631 = BgL_lz00_2964;
					}
				else
					{
						obj_t BgL_auxz00_4634;

						BgL_auxz00_4634 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 35675)),
							BGl_string2286z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2964);
						FAILURE(BgL_auxz00_4634, BFALSE, BFALSE);
					}
				return
					BGl_listzd2splitz12zc0zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4631,
					BgL_auxz00_4638, BgL_fillz00_2966);
			}
		}

	}



/* iota */
	BGL_EXPORTED_DEF obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int
		BgL_countz00_125, obj_t BgL_restz00_126)
	{
		{	/* Ieee/pairlist.scm 940 */
			{	/* Ieee/pairlist.scm 941 */
				obj_t BgL_startz00_1363;
				obj_t BgL_stepz00_1364;

				BgL_startz00_1363 = BINT(((long) 0));
				BgL_stepz00_1364 = BINT(((long) 1));
				if (PAIRP(BgL_restz00_126))
					{	/* Ieee/pairlist.scm 943 */
						BgL_startz00_1363 = CAR(BgL_restz00_126);
						{	/* Ieee/pairlist.scm 946 */
							bool_t BgL_test2638z00_4653;

							{	/* Ieee/pairlist.scm 214 */
								obj_t BgL_tmpz00_4654;

								BgL_tmpz00_4654 = CDR(BgL_restz00_126);
								BgL_test2638z00_4653 = PAIRP(BgL_tmpz00_4654);
							}
							if (BgL_test2638z00_4653)
								{	/* Ieee/pairlist.scm 946 */
									BgL_stepz00_1364 = CAR(CDR(BgL_restz00_126));
								}
							else
								{	/* Ieee/pairlist.scm 946 */
									BFALSE;
								}
						}
					}
				else
					{	/* Ieee/pairlist.scm 943 */
						BFALSE;
					}
				{	/* Ieee/pairlist.scm 948 */
					obj_t BgL_g1045z00_1369;

					{	/* Ieee/pairlist.scm 948 */
						obj_t BgL_arg1642z00_1381;

						{	/* Ieee/pairlist.scm 948 */
							long BgL_arg1643z00_1382;

							BgL_arg1643z00_1382 = ((long) (BgL_countz00_125) - ((long) 1));
							BgL_arg1642z00_1381 =
								BGl_2za2za2zz__r4_numbers_6_5z00(BINT(BgL_arg1643z00_1382),
								BgL_stepz00_1364);
						}
						BgL_g1045z00_1369 =
							BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_startz00_1363,
							BgL_arg1642z00_1381);
					}
					{
						int BgL_iz00_2663;
						obj_t BgL_vz00_2664;
						obj_t BgL_rz00_2665;

						BgL_iz00_2663 = BgL_countz00_125;
						BgL_vz00_2664 = BgL_g1045z00_1369;
						BgL_rz00_2665 = BNIL;
					BgL_walkz00_2662:
						if (((long) (BgL_iz00_2663) <= ((long) 0)))
							{	/* Ieee/pairlist.scm 949 */
								return BgL_rz00_2665;
							}
						else
							{	/* Ieee/pairlist.scm 951 */
								long BgL_arg1639z00_2671;
								obj_t BgL_arg1640z00_2672;
								obj_t BgL_arg1641z00_2673;

								BgL_arg1639z00_2671 = ((long) (BgL_iz00_2663) - ((long) 1));
								BgL_arg1640z00_2672 =
									BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_vz00_2664,
									BgL_stepz00_1364);
								BgL_arg1641z00_2673 =
									MAKE_YOUNG_PAIR(BgL_vz00_2664, BgL_rz00_2665);
								{
									obj_t BgL_rz00_4674;
									obj_t BgL_vz00_4673;
									int BgL_iz00_4671;

									BgL_iz00_4671 = (int) (BgL_arg1639z00_2671);
									BgL_vz00_4673 = BgL_arg1640z00_2672;
									BgL_rz00_4674 = BgL_arg1641z00_2673;
									BgL_rz00_2665 = BgL_rz00_4674;
									BgL_vz00_2664 = BgL_vz00_4673;
									BgL_iz00_2663 = BgL_iz00_4671;
									goto BgL_walkz00_2662;
								}
							}
					}
				}
			}
		}

	}



/* &iota */
	obj_t BGl_z62iotaz62zz__r4_pairs_and_lists_6_3z00(obj_t BgL_envz00_2967,
		obj_t BgL_countz00_2968, obj_t BgL_restz00_2969)
	{
		{	/* Ieee/pairlist.scm 940 */
			{	/* Ieee/pairlist.scm 941 */
				int BgL_auxz00_4675;

				{	/* Ieee/pairlist.scm 941 */
					obj_t BgL_tmpz00_4676;

					if (INTEGERP(BgL_countz00_2968))
						{	/* Ieee/pairlist.scm 941 */
							BgL_tmpz00_4676 = BgL_countz00_2968;
						}
					else
						{
							obj_t BgL_auxz00_4679;

							BgL_auxz00_4679 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
								BINT(((long) 36266)),
								BGl_string2287z00zz__r4_pairs_and_lists_6_3z00,
								BGl_string2260z00zz__r4_pairs_and_lists_6_3z00,
								BgL_countz00_2968);
							FAILURE(BgL_auxz00_4679, BFALSE, BFALSE);
						}
					BgL_auxz00_4675 = CINT(BgL_tmpz00_4676);
				}
				return
					BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4675,
					BgL_restz00_2969);
			}
		}

	}



/* list-copy */
	BGL_EXPORTED_DEF obj_t BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_127)
	{
		{	/* Ieee/pairlist.scm 956 */
			if (NULLP(BgL_lz00_127))
				{	/* Ieee/pairlist.scm 957 */
					return BgL_lz00_127;
				}
			else
				{	/* Ieee/pairlist.scm 957 */
					return
						MAKE_YOUNG_PAIR(CAR(BgL_lz00_127),
						BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(CDR(BgL_lz00_127)));
				}
		}

	}



/* &list-copy */
	obj_t BGl_z62listzd2copyzb0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2970, obj_t BgL_lz00_2971)
	{
		{	/* Ieee/pairlist.scm 956 */
			{	/* Ieee/pairlist.scm 957 */
				obj_t BgL_auxz00_4691;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_lz00_2971))
					{	/* Ieee/pairlist.scm 957 */
						BgL_auxz00_4691 = BgL_lz00_2971;
					}
				else
					{
						obj_t BgL_auxz00_4694;

						BgL_auxz00_4694 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
							BINT(((long) 36810)),
							BGl_string2288z00zz__r4_pairs_and_lists_6_3z00,
							BGl_string2253z00zz__r4_pairs_and_lists_6_3z00, BgL_lz00_2971);
						FAILURE(BgL_auxz00_4694, BFALSE, BFALSE);
					}
				return BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_4691);
			}
		}

	}



/* tree-copy */
	BGL_EXPORTED_DEF obj_t BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lz00_128)
	{
		{	/* Ieee/pairlist.scm 964 */
			{	/* Ieee/pairlist.scm 966 */
				bool_t BgL_test2643z00_4699;

				{	/* Ieee/pairlist.scm 966 */
					bool_t BgL_res2019z00_2685;

					BgL_res2019z00_2685 = EPAIRP(BgL_lz00_128);
					BgL_test2643z00_4699 = BgL_res2019z00_2685;
				}
				if (BgL_test2643z00_4699)
					{	/* Ieee/pairlist.scm 967 */
						obj_t BgL_arg1652z00_1389;
						obj_t BgL_arg1654z00_1390;
						obj_t BgL_arg1656z00_1391;

						{	/* Ieee/pairlist.scm 967 */
							obj_t BgL_arg1657z00_1392;

							BgL_arg1657z00_1392 = CAR(((obj_t) BgL_lz00_128));
							BgL_arg1652z00_1389 =
								BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg1657z00_1392);
						}
						{	/* Ieee/pairlist.scm 967 */
							obj_t BgL_arg1658z00_1393;

							BgL_arg1658z00_1393 = CDR(((obj_t) BgL_lz00_128));
							BgL_arg1654z00_1390 =
								BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg1658z00_1393);
						}
						{	/* Ieee/pairlist.scm 967 */
							obj_t BgL_arg1659z00_1394;

							BgL_arg1659z00_1394 = CER(((obj_t) BgL_lz00_128));
							BgL_arg1656z00_1391 =
								BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg1659z00_1394);
						}
						{	/* Ieee/pairlist.scm 967 */
							obj_t BgL_res2020z00_2689;

							BgL_res2020z00_2689 =
								MAKE_YOUNG_EPAIR(BgL_arg1652z00_1389, BgL_arg1654z00_1390,
								BgL_arg1656z00_1391);
							return BgL_res2020z00_2689;
						}
					}
				else
					{	/* Ieee/pairlist.scm 966 */
						if (PAIRP(BgL_lz00_128))
							{	/* Ieee/pairlist.scm 968 */
								return
									MAKE_YOUNG_PAIR
									(BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(CAR
										(BgL_lz00_128)),
									BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(CDR
										(BgL_lz00_128)));
							}
						else
							{	/* Ieee/pairlist.scm 968 */
								return BgL_lz00_128;
							}
					}
			}
		}

	}



/* &tree-copy */
	obj_t BGl_z62treezd2copyzb0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_envz00_2972, obj_t BgL_lz00_2973)
	{
		{	/* Ieee/pairlist.scm 964 */
			return BGl_treezd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_lz00_2973);
		}

	}



/* _delete-duplicates */
	obj_t BGl__deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_env1116z00_132, obj_t BgL_opt1115z00_131)
	{
		{	/* Ieee/pairlist.scm 976 */
			{	/* Ieee/pairlist.scm 976 */
				obj_t BgL_g1117z00_1400;

				BgL_g1117z00_1400 = VECTOR_REF(BgL_opt1115z00_131, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1115z00_131))
					{
					case ((long) 1):

						{	/* Ieee/pairlist.scm 976 */

							{	/* Ieee/pairlist.scm 976 */
								obj_t BgL_res2022z00_2695;

								{	/* Ieee/pairlist.scm 976 */
									obj_t BgL_lisz00_2693;

									if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
										(BgL_g1117z00_1400))
										{	/* Ieee/pairlist.scm 976 */
											BgL_lisz00_2693 = BgL_g1117z00_1400;
										}
									else
										{
											obj_t BgL_auxz00_4722;

											BgL_auxz00_4722 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
												BINT(((long) 37544)),
												BGl_string2289z00zz__r4_pairs_and_lists_6_3z00,
												BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
												BgL_g1117z00_1400);
											FAILURE(BgL_auxz00_4722, BFALSE, BFALSE);
										}
									BgL_res2022z00_2695 =
										BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00
										(BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00
										(BgL_lisz00_2693),
										BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
								}
								return BgL_res2022z00_2695;
							}
						}
						break;
					case ((long) 2):

						{	/* Ieee/pairlist.scm 976 */
							obj_t BgL_eqz00_1405;

							BgL_eqz00_1405 = VECTOR_REF(BgL_opt1115z00_131, ((long) 1));
							{	/* Ieee/pairlist.scm 976 */

								{	/* Ieee/pairlist.scm 976 */
									obj_t BgL_res2023z00_2698;

									{	/* Ieee/pairlist.scm 976 */
										obj_t BgL_lisz00_2696;

										if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
											(BgL_g1117z00_1400))
											{	/* Ieee/pairlist.scm 976 */
												BgL_lisz00_2696 = BgL_g1117z00_1400;
											}
										else
											{
												obj_t BgL_auxz00_4731;

												BgL_auxz00_4731 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
													BINT(((long) 37544)),
													BGl_string2289z00zz__r4_pairs_and_lists_6_3z00,
													BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
													BgL_g1117z00_1400);
												FAILURE(BgL_auxz00_4731, BFALSE, BFALSE);
											}
										BgL_res2023z00_2698 =
											BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00
											(BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00
											(BgL_lisz00_2696), BgL_eqz00_1405);
									}
									return BgL_res2023z00_2698;
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



/* delete-duplicates */
	BGL_EXPORTED_DEF obj_t
		BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lisz00_129, obj_t BgL_eqz00_130)
	{
		{	/* Ieee/pairlist.scm 976 */
			return
				BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00
				(BGl_listzd2copyzd2zz__r4_pairs_and_lists_6_3z00(BgL_lisz00_129),
				BgL_eqz00_130);
		}

	}



/* _delete-duplicates! */
	obj_t BGl__deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_env1121z00_136, obj_t BgL_opt1120z00_135)
	{
		{	/* Ieee/pairlist.scm 982 */
			{	/* Ieee/pairlist.scm 982 */
				obj_t BgL_g1122z00_1407;

				BgL_g1122z00_1407 = VECTOR_REF(BgL_opt1120z00_135, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1120z00_135))
					{
					case ((long) 1):

						{	/* Ieee/pairlist.scm 982 */

							{	/* Ieee/pairlist.scm 982 */
								obj_t BgL_auxz00_4742;

								if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
									(BgL_g1122z00_1407))
									{	/* Ieee/pairlist.scm 982 */
										BgL_auxz00_4742 = BgL_g1122z00_1407;
									}
								else
									{
										obj_t BgL_auxz00_4745;

										BgL_auxz00_4745 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
											BINT(((long) 37866)),
											BGl_string2290z00zz__r4_pairs_and_lists_6_3z00,
											BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
											BgL_g1122z00_1407);
										FAILURE(BgL_auxz00_4745, BFALSE, BFALSE);
									}
								return
									BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00
									(BgL_auxz00_4742,
									BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
							}
						}
						break;
					case ((long) 2):

						{	/* Ieee/pairlist.scm 982 */
							obj_t BgL_eqz00_1412;

							BgL_eqz00_1412 = VECTOR_REF(BgL_opt1120z00_135, ((long) 1));
							{	/* Ieee/pairlist.scm 982 */

								{	/* Ieee/pairlist.scm 982 */
									obj_t BgL_auxz00_4751;

									if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
										(BgL_g1122z00_1407))
										{	/* Ieee/pairlist.scm 982 */
											BgL_auxz00_4751 = BgL_g1122z00_1407;
										}
									else
										{
											obj_t BgL_auxz00_4754;

											BgL_auxz00_4754 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string2215z00zz__r4_pairs_and_lists_6_3z00,
												BINT(((long) 37866)),
												BGl_string2290z00zz__r4_pairs_and_lists_6_3z00,
												BGl_string2253z00zz__r4_pairs_and_lists_6_3z00,
												BgL_g1122z00_1407);
											FAILURE(BgL_auxz00_4754, BFALSE, BFALSE);
										}
									return
										BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00
										(BgL_auxz00_4751, BgL_eqz00_1412);
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



/* delete-duplicates! */
	BGL_EXPORTED_DEF obj_t
		BGl_deletezd2duplicatesz12zc0zz__r4_pairs_and_lists_6_3z00(obj_t
		BgL_lisz00_133, obj_t BgL_eqz00_134)
	{
		{	/* Ieee/pairlist.scm 982 */
			if (PROCEDUREP(BgL_eqz00_134))
				{	/* Ieee/pairlist.scm 983 */
					BFALSE;
				}
			else
				{	/* Ieee/pairlist.scm 983 */
					BGl_bigloozd2typezd2errorz00zz__errorz00
						(BGl_symbol2291z00zz__r4_pairs_and_lists_6_3z00,
						BGl_string2278z00zz__r4_pairs_and_lists_6_3z00, BgL_eqz00_134);
				}
			return
				BGl_recurze70ze7zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_134,
				BgL_lisz00_133);
		}

	}



/* recur~0 */
	obj_t BGl_recurze70ze7zz__r4_pairs_and_lists_6_3z00(obj_t BgL_eqz00_2974,
		obj_t BgL_lisz00_1415)
	{
		{	/* Ieee/pairlist.scm 985 */
			if (NULLP(BgL_lisz00_1415))
				{	/* Ieee/pairlist.scm 986 */
					return BgL_lisz00_1415;
				}
			else
				{	/* Ieee/pairlist.scm 987 */
					obj_t BgL_xz00_1418;

					BgL_xz00_1418 = CAR(BgL_lisz00_1415);
					{	/* Ieee/pairlist.scm 987 */
						obj_t BgL_tailz00_1419;

						BgL_tailz00_1419 = CDR(BgL_lisz00_1415);
						{	/* Ieee/pairlist.scm 988 */
							obj_t BgL_newzd2tailzd2_1420;

							BgL_newzd2tailzd2_1420 =
								BGl_recurze70ze7zz__r4_pairs_and_lists_6_3z00(BgL_eqz00_2974,
								BGl_deletez12z12zz__r4_pairs_and_lists_6_3z00(BgL_xz00_1418,
									BgL_tailz00_1419, BgL_eqz00_2974));
							{	/* Ieee/pairlist.scm 989 */

								if ((BgL_tailz00_1419 == BgL_newzd2tailzd2_1420))
									{	/* Ieee/pairlist.scm 990 */
										return BgL_lisz00_1415;
									}
								else
									{	/* Ieee/pairlist.scm 990 */
										return
											MAKE_YOUNG_PAIR(BgL_xz00_1418, BgL_newzd2tailzd2_1420);
									}
							}
						}
					}
				}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_pairs_and_lists_6_3z00()
	{
		{	/* Ieee/pairlist.scm 18 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2293z00zz__r4_pairs_and_lists_6_3z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2293z00zz__r4_pairs_and_lists_6_3z00));
		}

	}

#ifdef __cplusplus
}
#endif
