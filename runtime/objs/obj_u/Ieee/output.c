/*===========================================================================*/
/*   (Ieee/output.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/output.scm -indent -o objs/obj_u/Ieee/output.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */

	static obj_t BGl_z62newlinez62zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t bgl_write_utf8string(obj_t, obj_t);
	static obj_t BGl_displayzd2pairzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_write_ucs2(obj_t, obj_t);
	extern obj_t bgl_write_binary_port(obj_t, obj_t);
	extern obj_t symbol_for_read(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00 =
		BUNSPEC;
	static obj_t BGl_symbol2663z00zz__r4_output_6_10_3z00 = BUNSPEC;
	static obj_t BGl_symbol2665z00zz__r4_output_6_10_3z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	extern obj_t bgl_display_ucs2string(obj_t, obj_t);
	static obj_t BGl_symbol2671z00zz__r4_output_6_10_3z00 = BUNSPEC;
	static obj_t BGl_z62illegalzd2charzd2repz62zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	extern obj_t bgl_write_output_port(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2stringzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	extern obj_t bgl_write_cnst(obj_t, obj_t);
	extern obj_t weakptr_data(obj_t);
	static obj_t BGl_z62displayzd2flonumzb0zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_write_procedure(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00();
	extern obj_t bgl_write_char(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62writeza2zc0zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_objectzd2displayzd2zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zz__r4_output_6_10_3z00();
	static obj_t BGl_objectzd2initzd2zz__r4_output_6_10_3z00();
	extern obj_t BGl_stringzd2skipzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_listzd2ze3stringz31zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62displayzd2ucs2stringzb0zz__r4_output_6_10_3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__writezd2bytezd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62printfz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	extern obj_t bgl_write_custom(obj_t, obj_t);
	extern obj_t bgl_write_bignum(obj_t, obj_t);
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_printz00zz__r4_output_6_10_3z00(obj_t);
	extern obj_t bgl_write_unknown(obj_t, obj_t);
	static obj_t BGl_z62displayzd2substringzb0zz__r4_output_6_10_3z00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_tvectorzd2refzd2zz__tvectorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2bytezd2zz__r4_output_6_10_3z00(unsigned
		char, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62writezd2bytezd22z62zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62newlinezd21zb0zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62writezd2symbolzb0zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62displayzd2elongzb0zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62writezd22zb0zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62writezd2charzd22z62zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__r4_output_6_10_3z00();
	extern obj_t BGl_objectzd2writezd2zz__objectz00(BgL_objectz00_bglt, obj_t);
	static obj_t BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_tvectorzd2idzd2zz__tvectorz00(obj_t);
	extern obj_t bgl_write_input_port(obj_t, obj_t);
	extern obj_t bgl_display_llong(BGL_LONGLONG_T, obj_t);
	static obj_t BGl_z62printz62zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62displayz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	static obj_t BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00 = BUNSPEC;
	extern obj_t make_string(long, unsigned char);
	extern obj_t bgl_write_mmap(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_newlinezd21zd2zz__r4_output_6_10_3z00(obj_t);
	extern obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t bgl_write_dynamic_env(obj_t, obj_t);
	static obj_t BGl_z62writez62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_datezd2ze3stringz31zz__datez00(obj_t);
	static obj_t BGl_z62displayza2zc0zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_ill_char_rep(unsigned char);
	static obj_t BGl_z62formatz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	extern obj_t bgl_display_bignum(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_newlinez00zz__r4_output_6_10_3z00(obj_t);
	extern obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_z62writezd2ucs2stringzb0zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	extern obj_t bgl_write_llong(BGL_LONGLONG_T, obj_t);
	extern obj_t bgl_display_elong(long, obj_t);
	extern obj_t bgl_write_datagram_socket(obj_t, obj_t);
	extern bool_t BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00();
	static obj_t BGl_z62writezd2stringzb0zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	extern obj_t string_for_read(obj_t);
	static obj_t BGl_z62displayzd2fixnumzb0zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t bgl_display_ucs2(obj_t, obj_t);
	extern obj_t bgl_write_socket(obj_t, obj_t);
	extern bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	extern obj_t bgl_write_elong(long, obj_t);
	extern obj_t ucs2_string_to_utf8_string(obj_t);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl__writezd2charzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t bgl_write_process(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62displayzd2symbolzb0zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_output_6_10_3z00();
	BGL_EXPORTED_DECL obj_t BGl_displayzd2elongzd2zz__r4_output_6_10_3z00(long,
		obj_t);
	extern obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl_xprintfz00zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__r4_output_6_10_3z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00();
	BGL_EXPORTED_DECL obj_t BGl_writezd2charzd2zz__r4_output_6_10_3z00(unsigned
		char, obj_t);
	extern obj_t bgl_display_fixnum(obj_t, obj_t);
	extern obj_t bgl_write_semaphore(obj_t, obj_t);
	extern obj_t bgl_write_foreign(obj_t, obj_t);
	extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_writezd2pairzd2zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_writezd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	static obj_t BGl_z62fprintz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	extern obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	extern obj_t bgl_write_regexp(obj_t, obj_t);
	extern obj_t bgl_write_opaque(obj_t, obj_t);
	extern obj_t bgl_write_string(obj_t, bool_t, obj_t);
	static obj_t BGl_z62fprintfz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t c_substring(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t bgl_write_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_writezd2bytezd22z00zz__r4_output_6_10_3z00(unsigned char, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writeza2za2zz__r4_output_6_10_3z00(obj_t);
	static obj_t BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t, long, long, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_displayz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_writezd2charzd22z00zz__r4_output_6_10_3z00(unsigned char, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(unsigned char);
	static obj_t BGl_z62displayzd2stringzb0zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_printfz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_symbol2625z00zz__r4_output_6_10_3z00 = BUNSPEC;
	extern obj_t bgl_real_to_string(double);
	static obj_t BGl_symbol2629z00zz__r4_output_6_10_3z00 = BUNSPEC;
	static obj_t BGl_z62displayzd22zb0zz__r4_output_6_10_3z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2632z00zz__r4_output_6_10_3z00 = BUNSPEC;
	static obj_t BGl_z62tprintz62zz__r4_output_6_10_3z00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2fixnumzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762displayza7d2fix2685z00,
		BGl_z62displayzd2fixnumzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_illegalzd2charzd2repzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762illegalza7d2cha2686z00,
		BGl_z62illegalzd2charzd2repz62zz__r4_output_6_10_3z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_writezd22zd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762writeza7d22za7b0za72687z00,
		BGl_z62writezd22zb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2bytezd22zd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762writeza7d2byteza72688za7,
		BGl_z62writezd2bytezd22z62zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2600z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2600za700za7za7_2689za7, "display", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_formatzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762formatza762za7za7__2690z00, va_generic_entry,
		BGl_z62formatz62zz__r4_output_6_10_3z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2601z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2601za700za7za7_2691za7, "write", 5);
	      DEFINE_STRING(BGl_string2602z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2602za700za7za7_2692za7, "_write-char", 11);
	      DEFINE_STRING(BGl_string2603z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2603za700za7za7_2693za7, "bchar", 5);
	      DEFINE_STRING(BGl_string2604z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2604za700za7za7_2694za7, "&write-char-2", 13);
	      DEFINE_STRING(BGl_string2605z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2605za700za7za7_2695za7, "_write-byte", 11);
	      DEFINE_STRING(BGl_string2606z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2606za700za7za7_2696za7, "bint", 4);
	      DEFINE_STRING(BGl_string2607z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2607za700za7za7_2697za7, "&write-byte-2", 13);
	      DEFINE_STRING(BGl_string2608z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2608za700za7za7_2698za7, "#Newline", 8);
	      DEFINE_STRING(BGl_string2609z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2609za700za7za7_2699za7, "#Return", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_printfzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762printfza762za7za7__2700z00, va_generic_entry,
		BGl_z62printfz62zz__r4_output_6_10_3z00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string2610z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2610za700za7za7_2701za7, "#Space", 6);
	      DEFINE_STRING(BGl_string2611z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2611za700za7za7_2702za7, "#Tab", 4);
	      DEFINE_STRING(BGl_string2612z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2612za700za7za7_2703za7, "&illegal-char-rep", 17);
	      DEFINE_STRING(BGl_string2613z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2613za700za7za7_2704za7, "&tprint", 7);
	      DEFINE_STRING(BGl_string2614z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2614za700za7za7_2705za7, "&fprint", 7);
	      DEFINE_STRING(BGl_string2615z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2615za700za7za7_2706za7, "Insufficient number of arguments",
		32);
	      DEFINE_STRING(BGl_string2616z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2616za700za7za7_2707za7, "Illegal tag \"", 13);
	      DEFINE_STRING(BGl_string2617z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2617za700za7za7_2708za7, "\"", 1);
	      DEFINE_STRING(BGl_string2618z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2618za700za7za7_2709za7, "Illegal char", 12);
	      DEFINE_STRING(BGl_string2619z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2619za700za7za7_2710za7, "number", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2stringzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762displayza7d2str2711z00,
		BGl_z62displayzd2stringzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2620z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2620za700za7za7_2712za7, " ", 1);
	      DEFINE_STRING(BGl_string2621z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2621za700za7za7_2713za7, "Illegal tag", 11);
	      DEFINE_STRING(BGl_string2622z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2622za700za7za7_2714za7, "0123456789", 10);
	      DEFINE_STRING(BGl_string2623z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2623za700za7za7_2715za7, "Tag not allowed here", 20);
	      DEFINE_STRING(BGl_string2624z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2624za700za7za7_2716za7, " . ", 3);
	      DEFINE_STRING(BGl_string2626z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2626za700za7za7_2717za7, "format", 6);
	      DEFINE_STRING(BGl_string2627z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2627za700za7za7_2718za7, "&format", 7);
	      DEFINE_STRING(BGl_string2628z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2628za700za7za7_2719za7, "bstring", 7);
	      DEFINE_STRING(BGl_string2630z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2630za700za7za7_2720za7, "printf", 6);
	      DEFINE_STRING(BGl_string2631z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2631za700za7za7_2721za7, "&printf", 7);
	      DEFINE_STRING(BGl_string2633z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2633za700za7za7_2722za7, "fprintf", 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2substringzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762displayza7d2sub2723z00,
		BGl_z62displayzd2substringzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2634z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2634za700za7za7_2724za7, "&fprintf", 8);
	      DEFINE_STRING(BGl_string2635z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2635za700za7za7_2725za7, "()", 2);
	      DEFINE_STRING(BGl_string2636z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2636za700za7za7_2726za7, "#f", 2);
	      DEFINE_STRING(BGl_string2637z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2637za700za7za7_2727za7, "#t", 2);
	      DEFINE_STRING(BGl_string2638z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2638za700za7za7_2728za7, "#unspecified", 12);
	      DEFINE_STRING(BGl_string2639z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2639za700za7za7_2729za7, "#<class:", 8);
	      DEFINE_STRING(BGl_string2640z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2640za700za7za7_2730za7, ">", 1);
	      DEFINE_STRING(BGl_string2641z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2641za700za7za7_2731za7, "#<mutex:", 8);
	      DEFINE_STRING(BGl_string2642z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2642za700za7za7_2732za7, ":", 1);
	      DEFINE_STRING(BGl_string2643z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2643za700za7za7_2733za7, "#<condition-variable:", 21);
	      DEFINE_STRING(BGl_string2644z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2644za700za7za7_2734za7, "#<cell:", 7);
	      DEFINE_STRING(BGl_string2645z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2645za700za7za7_2735za7, "#eof-object", 11);
	      DEFINE_STRING(BGl_string2646z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2646za700za7za7_2736za7, "#!optional", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_newlinezd21zd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762newlineza7d21za7b2737za7,
		BGl_z62newlinezd21zb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2647z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2647za700za7za7_2738za7, "#!rest", 6);
	      DEFINE_STRING(BGl_string2648z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2648za700za7za7_2739za7, "#!key", 5);
	      DEFINE_STRING(BGl_string2649z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2649za700za7za7_2740za7, "#<output_string_port>", 21);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fprintfzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762fprintfza762za7za7_2741z00, va_generic_entry,
		BGl_z62fprintfz62zz__r4_output_6_10_3z00, BUNSPEC, -3);
	      DEFINE_STRING(BGl_string2650z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2650za700za7za7_2742za7, "#<output_procedure_port>", 24);
	      DEFINE_STRING(BGl_string2651z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2651za700za7za7_2743za7, "#<weakptr:", 10);
	      DEFINE_STRING(BGl_string2652z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2652za700za7za7_2744za7, "#<date:", 7);
	      DEFINE_STRING(BGl_string2653z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2653za700za7za7_2745za7, "#s8:", 4);
	      DEFINE_STRING(BGl_string2654z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2654za700za7za7_2746za7, "#u8:", 4);
	      DEFINE_STRING(BGl_string2655z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2655za700za7za7_2747za7, "#s16:", 5);
	      DEFINE_STRING(BGl_string2656z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2656za700za7za7_2748za7, "#u16:", 5);
	      DEFINE_STRING(BGl_string2657z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2657za700za7za7_2749za7, "#s32:", 5);
	      DEFINE_STRING(BGl_string2658z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2658za700za7za7_2750za7, "#u32:", 5);
	      DEFINE_STRING(BGl_string2659z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2659za700za7za7_2751za7, "#s64:", 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2charzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__writeza7d2charza7d22752z00, opt_generic_entry,
		BGl__writezd2charzd2zz__r4_output_6_10_3z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string2660z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2660za700za7za7_2753za7, "#u64:", 5);
	      DEFINE_STRING(BGl_string2661z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2661za700za7za7_2754za7, "&display-symbol", 15);
	      DEFINE_STRING(BGl_string2662z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2662za700za7za7_2755za7, "symbol", 6);
	      DEFINE_STRING(BGl_string2664z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2664za700za7za7_2756za7, "+", 1);
	      DEFINE_STRING(BGl_string2666z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2666za700za7za7_2757za7, "-", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_writeza2zd2envz70zz__r4_output_6_10_3z00,
		BgL_bgl_za762writeza7a2za7c0za7za72758za7, va_generic_entry,
		BGl_z62writeza2zc0zz__r4_output_6_10_3z00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string2667z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2667za700za7za7_2759za7, "|", 1);
	      DEFINE_STRING(BGl_string2668z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2668za700za7za7_2760za7, "&write-symbol", 13);
	      DEFINE_STRING(BGl_string2669z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2669za700za7za7_2761za7, "&display-string", 15);
	      DEFINE_STRING(BGl_string2670z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2670za700za7za7_2762za7, "Illegal index, start=~a end=~a",
		30);
	      DEFINE_STRING(BGl_string2672z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2672za700za7za7_2763za7, "display-substring", 17);
	      DEFINE_STRING(BGl_string2673z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2673za700za7za7_2764za7, "&display-substring", 18);
	      DEFINE_STRING(BGl_string2674z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2674za700za7za7_2765za7, "&write-string", 13);
	      DEFINE_STRING(BGl_string2675z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2675za700za7za7_2766za7, "&display-fixnum", 15);
	      DEFINE_STRING(BGl_string2594z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2594za700za7za7_2767za7, "tprint", 6);
	      DEFINE_STRING(BGl_string2676z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2676za700za7za7_2768za7, "&display-elong", 14);
	      DEFINE_STRING(BGl_string2595z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2595za700za7za7_2769za7, "newline", 7);
	      DEFINE_STRING(BGl_string2677z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2677za700za7za7_2770za7, "belong", 6);
	      DEFINE_STRING(BGl_string2596z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2596za700za7za7_2771za7, "wrong number of optional arguments",
		34);
	      DEFINE_STRING(BGl_string2678z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2678za700za7za7_2772za7, "&display-flonum", 15);
	      DEFINE_STRING(BGl_string2597z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2597za700za7za7_2773za7, "/tmp/4.4a/runtime/Ieee/output.scm",
		33);
	      DEFINE_STRING(BGl_string2679z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2679za700za7za7_2774za7, "real", 4);
	      DEFINE_STRING(BGl_string2598z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2598za700za7za7_2775za7, "&newline-1", 10);
	      DEFINE_STRING(BGl_string2599z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2599za700za7za7_2776za7, "output-port", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2charzd22zd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762writeza7d2charza72777za7,
		BGl_z62writezd2charzd22z62zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2ucs2stringzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762displayza7d2ucs2778z00,
		BGl_z62displayzd2ucs2stringzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2680z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2680za700za7za7_2779za7, "&display-ucs2string", 19);
	      DEFINE_STRING(BGl_string2681z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2681za700za7za7_2780za7, "ucs2string", 10);
	      DEFINE_STRING(BGl_string2682z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2682za700za7za7_2781za7, "&write-ucs2string", 17);
	      DEFINE_STRING(BGl_string2683z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2683za700za7za7_2782za7, "...)", 4);
	      DEFINE_STRING(BGl_string2684z00zz__r4_output_6_10_3z00,
		BgL_bgl_string2684za700za7za7_2783za7, "__r4_output_6_10_3", 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2symbolzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762writeza7d2symbo2784z00,
		BGl_z62writezd2symbolzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_displayzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762displayza762za7za7_2785z00, va_generic_entry,
		BGl_z62displayz62zz__r4_output_6_10_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2elongzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762displayza7d2elo2786z00,
		BGl_z62displayzd2elongzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_writezd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762writeza762za7za7__r2787z00, va_generic_entry,
		BGl_z62writez62zz__r4_output_6_10_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762displayza7d22za7b2788za7,
		BGl_z62displayzd22zb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_newlinezd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762newlineza762za7za7_2789z00, va_generic_entry,
		BGl_z62newlinez62zz__r4_output_6_10_3z00, BUNSPEC, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tprintzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762tprintza762za7za7__2790z00, va_generic_entry,
		BGl_z62tprintz62zz__r4_output_6_10_3z00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_displayza2zd2envz70zz__r4_output_6_10_3z00,
		BgL_bgl_za762displayza7a2za7c02791za7, va_generic_entry,
		BGl_z62displayza2zc0zz__r4_output_6_10_3z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2bytezd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl__writeza7d2byteza7d22792z00, opt_generic_entry,
		BGl__writezd2bytezd2zz__r4_output_6_10_3z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2ucs2stringzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762writeza7d2ucs2s2793z00,
		BGl_z62writezd2ucs2stringzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2flonumzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762displayza7d2flo2794z00,
		BGl_z62displayzd2flonumzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fprintzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762fprintza762za7za7__2795z00, va_generic_entry,
		BGl_z62fprintz62zz__r4_output_6_10_3z00, BUNSPEC, -2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_printzd2envzd2zz__r4_output_6_10_3z00,
		BgL_bgl_za762printza762za7za7__r2796z00, va_generic_entry,
		BGl_z62printz62zz__r4_output_6_10_3z00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_displayzd2symbolzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762displayza7d2sym2797z00,
		BGl_z62displayzd2symbolzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2stringzd2envz00zz__r4_output_6_10_3z00,
		BgL_bgl_za762writeza7d2strin2798z00,
		BGl_z62writezd2stringzb0zz__r4_output_6_10_3z00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00));
		     ADD_ROOT((void *) (&BGl_symbol2663z00zz__r4_output_6_10_3z00));
		     ADD_ROOT((void *) (&BGl_symbol2665z00zz__r4_output_6_10_3z00));
		     ADD_ROOT((void *) (&BGl_symbol2671z00zz__r4_output_6_10_3z00));
		     ADD_ROOT((void *) (&BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00));
		     ADD_ROOT((void *) (&BGl_symbol2625z00zz__r4_output_6_10_3z00));
		     ADD_ROOT((void *) (&BGl_symbol2629z00zz__r4_output_6_10_3z00));
		     ADD_ROOT((void *) (&BGl_symbol2632z00zz__r4_output_6_10_3z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long
		BgL_checksumz00_4204, char *BgL_fromz00_4205)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_output_6_10_3z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_output_6_10_3z00();
					BGl_cnstzd2initzd2zz__r4_output_6_10_3z00();
					BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00();
					return BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_output_6_10_3z00()
	{
		{	/* Ieee/output.scm 24 */
			BGl_symbol2625z00zz__r4_output_6_10_3z00 =
				bstring_to_symbol(BGl_string2626z00zz__r4_output_6_10_3z00);
			BGl_symbol2629z00zz__r4_output_6_10_3z00 =
				bstring_to_symbol(BGl_string2630z00zz__r4_output_6_10_3z00);
			BGl_symbol2632z00zz__r4_output_6_10_3z00 =
				bstring_to_symbol(BGl_string2633z00zz__r4_output_6_10_3z00);
			BGl_symbol2663z00zz__r4_output_6_10_3z00 =
				bstring_to_symbol(BGl_string2664z00zz__r4_output_6_10_3z00);
			BGl_symbol2665z00zz__r4_output_6_10_3z00 =
				bstring_to_symbol(BGl_string2666z00zz__r4_output_6_10_3z00);
			return (BGl_symbol2671z00zz__r4_output_6_10_3z00 =
				bstring_to_symbol(BGl_string2672z00zz__r4_output_6_10_3z00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_output_6_10_3z00()
	{
		{	/* Ieee/output.scm 24 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r4_output_6_10_3z00()
	{
		{	/* Ieee/output.scm 24 */
			{	/* Ieee/output.scm 391 */
				obj_t BgL_res2127z00_2654;

				BgL_res2127z00_2654 =
					bgl_make_mutex(BGl_string2594z00zz__r4_output_6_10_3z00);
				return (BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00 =
					BgL_res2127z00_2654, BUNSPEC);
			}
		}

	}



/* newline */
	BGL_EXPORTED_DEF obj_t BGl_newlinez00zz__r4_output_6_10_3z00(obj_t
		BgL_portz00_3)
	{
		{	/* Ieee/output.scm 256 */
			{	/* Ieee/output.scm 257 */
				obj_t BgL_portz00_1540;

				if (NULLP(BgL_portz00_3))
					{	/* Ieee/output.scm 259 */
						obj_t BgL_res2130z00_2660;

						{	/* Ieee/output.scm 259 */
							obj_t BgL_tmpz00_4223;

							BgL_tmpz00_4223 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2130z00_2660 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4223);
						}
						BgL_portz00_1540 = BgL_res2130z00_2660;
					}
				else
					{	/* Ieee/output.scm 257 */
						if (PAIRP(BgL_portz00_3))
							{	/* Ieee/output.scm 257 */
								if (NULLP(CDR(BgL_portz00_3)))
									{	/* Ieee/output.scm 257 */
										BgL_portz00_1540 = CAR(((obj_t) BgL_portz00_3));
									}
								else
									{	/* Ieee/output.scm 257 */
										BgL_portz00_1540 =
											BGl_errorz00zz__errorz00
											(BGl_string2595z00zz__r4_output_6_10_3z00,
											BGl_string2596z00zz__r4_output_6_10_3z00, BgL_portz00_3);
									}
							}
						else
							{	/* Ieee/output.scm 257 */
								BgL_portz00_1540 =
									BGl_errorz00zz__errorz00
									(BGl_string2595z00zz__r4_output_6_10_3z00,
									BGl_string2596z00zz__r4_output_6_10_3z00, BgL_portz00_3);
							}
					}
				{	/* Ieee/output.scm 272 */
					obj_t BgL_tmpz00_4235;

					BgL_tmpz00_4235 = ((obj_t) BgL_portz00_1540);
					return bgl_display_char(((unsigned char) 10), BgL_tmpz00_4235);
		}}}

	}



/* &newline */
	obj_t BGl_z62newlinez62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4043,
		obj_t BgL_portz00_4044)
	{
		{	/* Ieee/output.scm 256 */
			return BGl_newlinez00zz__r4_output_6_10_3z00(BgL_portz00_4044);
		}

	}



/* newline-1 */
	BGL_EXPORTED_DEF obj_t BGl_newlinezd21zd2zz__r4_output_6_10_3z00(obj_t
		BgL_portz00_4)
	{
		{	/* Ieee/output.scm 271 */
			return bgl_display_char(((unsigned char) 10), BgL_portz00_4);
		}

	}



/* &newline-1 */
	obj_t BGl_z62newlinezd21zb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4045,
		obj_t BgL_portz00_4046)
	{
		{	/* Ieee/output.scm 271 */
			{	/* Ieee/output.scm 272 */
				obj_t BgL_auxz00_4240;

				if (OUTPUT_PORTP(BgL_portz00_4046))
					{	/* Ieee/output.scm 272 */
						BgL_auxz00_4240 = BgL_portz00_4046;
					}
				else
					{
						obj_t BgL_auxz00_4243;

						BgL_auxz00_4243 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 10498)),
							BGl_string2598z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4046);
						FAILURE(BgL_auxz00_4243, BFALSE, BFALSE);
					}
				return BGl_newlinezd21zd2zz__r4_output_6_10_3z00(BgL_auxz00_4240);
			}
		}

	}



/* display */
	BGL_EXPORTED_DEF obj_t BGl_displayz00zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_5, obj_t BgL_portz00_6)
	{
		{	/* Ieee/output.scm 277 */
			{	/* Ieee/output.scm 278 */
				obj_t BgL_portz00_1550;

				if (NULLP(BgL_portz00_6))
					{	/* Ieee/output.scm 280 */
						obj_t BgL_res2135z00_2671;

						{	/* Ieee/output.scm 280 */
							obj_t BgL_tmpz00_4250;

							BgL_tmpz00_4250 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2135z00_2671 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4250);
						}
						BgL_portz00_1550 = BgL_res2135z00_2671;
					}
				else
					{	/* Ieee/output.scm 278 */
						if (PAIRP(BgL_portz00_6))
							{	/* Ieee/output.scm 278 */
								if (NULLP(CDR(BgL_portz00_6)))
									{	/* Ieee/output.scm 278 */
										BgL_portz00_1550 = CAR(((obj_t) BgL_portz00_6));
									}
								else
									{	/* Ieee/output.scm 278 */
										BgL_portz00_1550 =
											BGl_errorz00zz__errorz00
											(BGl_string2600z00zz__r4_output_6_10_3z00,
											BGl_string2596z00zz__r4_output_6_10_3z00, BgL_portz00_6);
									}
							}
						else
							{	/* Ieee/output.scm 278 */
								BgL_portz00_1550 =
									BGl_errorz00zz__errorz00
									(BGl_string2600z00zz__r4_output_6_10_3z00,
									BGl_string2596z00zz__r4_output_6_10_3z00, BgL_portz00_6);
							}
					}
				return bgl_display_obj(BgL_objz00_5, BgL_portz00_1550);
			}
		}

	}



/* &display */
	obj_t BGl_z62displayz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4047,
		obj_t BgL_objz00_4048, obj_t BgL_portz00_4049)
	{
		{	/* Ieee/output.scm 277 */
			return
				BGl_displayz00zz__r4_output_6_10_3z00(BgL_objz00_4048,
				BgL_portz00_4049);
		}

	}



/* write */
	BGL_EXPORTED_DEF obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t BgL_objz00_7,
		obj_t BgL_portz00_8)
	{
		{	/* Ieee/output.scm 292 */
			{	/* Ieee/output.scm 293 */
				obj_t BgL_portz00_1560;

				if (NULLP(BgL_portz00_8))
					{	/* Ieee/output.scm 295 */
						obj_t BgL_res2140z00_2681;

						{	/* Ieee/output.scm 295 */
							obj_t BgL_tmpz00_4266;

							BgL_tmpz00_4266 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2140z00_2681 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4266);
						}
						BgL_portz00_1560 = BgL_res2140z00_2681;
					}
				else
					{	/* Ieee/output.scm 293 */
						if (PAIRP(BgL_portz00_8))
							{	/* Ieee/output.scm 293 */
								if (NULLP(CDR(BgL_portz00_8)))
									{	/* Ieee/output.scm 293 */
										BgL_portz00_1560 = CAR(((obj_t) BgL_portz00_8));
									}
								else
									{	/* Ieee/output.scm 293 */
										BgL_portz00_1560 =
											BGl_errorz00zz__errorz00
											(BGl_string2601z00zz__r4_output_6_10_3z00,
											BGl_string2596z00zz__r4_output_6_10_3z00, BgL_portz00_8);
									}
							}
						else
							{	/* Ieee/output.scm 293 */
								BgL_portz00_1560 =
									BGl_errorz00zz__errorz00
									(BGl_string2601z00zz__r4_output_6_10_3z00,
									BGl_string2596z00zz__r4_output_6_10_3z00, BgL_portz00_8);
							}
					}
				return bgl_write_obj(BgL_objz00_7, BgL_portz00_1560);
			}
		}

	}



/* &write */
	obj_t BGl_z62writez62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4050,
		obj_t BgL_objz00_4051, obj_t BgL_portz00_4052)
	{
		{	/* Ieee/output.scm 292 */
			return
				BGl_writez00zz__r4_output_6_10_3z00(BgL_objz00_4051, BgL_portz00_4052);
		}

	}



/* _write-char */
	obj_t BGl__writezd2charzd2zz__r4_output_6_10_3z00(obj_t BgL_env1143z00_12,
		obj_t BgL_opt1142z00_11)
	{
		{	/* Ieee/output.scm 307 */
			{	/* Ieee/output.scm 307 */
				obj_t BgL_g1144z00_1570;

				BgL_g1144z00_1570 = VECTOR_REF(BgL_opt1142z00_11, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1142z00_11))
					{
					case ((long) 1):

						{	/* Ieee/output.scm 307 */
							obj_t BgL_portz00_1574;

							{	/* Ieee/output.scm 307 */
								obj_t BgL_res2143z00_2687;

								{	/* Ieee/output.scm 307 */
									obj_t BgL_tmpz00_4281;

									BgL_tmpz00_4281 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2143z00_2687 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4281);
								}
								BgL_portz00_1574 = BgL_res2143z00_2687;
							}
							{	/* Ieee/output.scm 307 */

								{	/* Ieee/output.scm 307 */
									unsigned char BgL_charz00_2688;

									{	/* Ieee/output.scm 307 */
										obj_t BgL_tmpz00_4284;

										if (CHARP(BgL_g1144z00_1570))
											{	/* Ieee/output.scm 307 */
												BgL_tmpz00_4284 = BgL_g1144z00_1570;
											}
										else
											{
												obj_t BgL_auxz00_4287;

												BgL_auxz00_4287 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2597z00zz__r4_output_6_10_3z00,
													BINT(((long) 11677)),
													BGl_string2602z00zz__r4_output_6_10_3z00,
													BGl_string2603z00zz__r4_output_6_10_3z00,
													BgL_g1144z00_1570);
												FAILURE(BgL_auxz00_4287, BFALSE, BFALSE);
											}
										BgL_charz00_2688 = CCHAR(BgL_tmpz00_4284);
									}
									return bgl_display_char(BgL_charz00_2688, BgL_portz00_1574);
								}
							}
						}
						break;
					case ((long) 2):

						{	/* Ieee/output.scm 307 */
							obj_t BgL_portz00_1575;

							BgL_portz00_1575 = VECTOR_REF(BgL_opt1142z00_11, ((long) 1));
							{	/* Ieee/output.scm 307 */

								{	/* Ieee/output.scm 307 */
									unsigned char BgL_charz00_2691;

									{	/* Ieee/output.scm 307 */
										obj_t BgL_tmpz00_4294;

										if (CHARP(BgL_g1144z00_1570))
											{	/* Ieee/output.scm 307 */
												BgL_tmpz00_4294 = BgL_g1144z00_1570;
											}
										else
											{
												obj_t BgL_auxz00_4297;

												BgL_auxz00_4297 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2597z00zz__r4_output_6_10_3z00,
													BINT(((long) 11677)),
													BGl_string2602z00zz__r4_output_6_10_3z00,
													BGl_string2603z00zz__r4_output_6_10_3z00,
													BgL_g1144z00_1570);
												FAILURE(BgL_auxz00_4297, BFALSE, BFALSE);
											}
										BgL_charz00_2691 = CCHAR(BgL_tmpz00_4294);
									}
									{	/* Ieee/output.scm 308 */
										obj_t BgL_portz00_2693;

										if (OUTPUT_PORTP(BgL_portz00_1575))
											{	/* Ieee/output.scm 308 */
												BgL_portz00_2693 = BgL_portz00_1575;
											}
										else
											{
												obj_t BgL_auxz00_4304;

												BgL_auxz00_4304 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2597z00zz__r4_output_6_10_3z00,
													BINT(((long) 11765)),
													BGl_string2602z00zz__r4_output_6_10_3z00,
													BGl_string2599z00zz__r4_output_6_10_3z00,
													BgL_portz00_1575);
												FAILURE(BgL_auxz00_4304, BFALSE, BFALSE);
											}
										return bgl_display_char(BgL_charz00_2691, BgL_portz00_2693);
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



/* write-char */
	BGL_EXPORTED_DEF obj_t BGl_writezd2charzd2zz__r4_output_6_10_3z00(unsigned
		char BgL_charz00_9, obj_t BgL_portz00_10)
	{
		{	/* Ieee/output.scm 307 */
			{	/* Ieee/output.scm 314 */
				obj_t BgL_tmpz00_4311;

				BgL_tmpz00_4311 = ((obj_t) BgL_portz00_10);
				return bgl_display_char(BgL_charz00_9, BgL_tmpz00_4311);
			}
		}

	}



/* write-char-2 */
	BGL_EXPORTED_DEF obj_t BGl_writezd2charzd22z00zz__r4_output_6_10_3z00(unsigned
		char BgL_charz00_13, obj_t BgL_portz00_14)
	{
		{	/* Ieee/output.scm 313 */
			return bgl_display_char(BgL_charz00_13, BgL_portz00_14);
		}

	}



/* &write-char-2 */
	obj_t BGl_z62writezd2charzd22z62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4053,
		obj_t BgL_charz00_4054, obj_t BgL_portz00_4055)
	{
		{	/* Ieee/output.scm 313 */
			{	/* Ieee/output.scm 314 */
				obj_t BgL_auxz00_4324;
				unsigned char BgL_auxz00_4315;

				if (OUTPUT_PORTP(BgL_portz00_4055))
					{	/* Ieee/output.scm 314 */
						BgL_auxz00_4324 = BgL_portz00_4055;
					}
				else
					{
						obj_t BgL_auxz00_4327;

						BgL_auxz00_4327 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 12058)),
							BGl_string2604z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4055);
						FAILURE(BgL_auxz00_4327, BFALSE, BFALSE);
					}
				{	/* Ieee/output.scm 314 */
					obj_t BgL_tmpz00_4316;

					if (CHARP(BgL_charz00_4054))
						{	/* Ieee/output.scm 314 */
							BgL_tmpz00_4316 = BgL_charz00_4054;
						}
					else
						{
							obj_t BgL_auxz00_4319;

							BgL_auxz00_4319 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 12058)),
								BGl_string2604z00zz__r4_output_6_10_3z00,
								BGl_string2603z00zz__r4_output_6_10_3z00, BgL_charz00_4054);
							FAILURE(BgL_auxz00_4319, BFALSE, BFALSE);
						}
					BgL_auxz00_4315 = CCHAR(BgL_tmpz00_4316);
				}
				return
					BGl_writezd2charzd22z00zz__r4_output_6_10_3z00(BgL_auxz00_4315,
					BgL_auxz00_4324);
			}
		}

	}



/* _write-byte */
	obj_t BGl__writezd2bytezd2zz__r4_output_6_10_3z00(obj_t BgL_env1148z00_18,
		obj_t BgL_opt1147z00_17)
	{
		{	/* Ieee/output.scm 319 */
			{	/* Ieee/output.scm 319 */
				obj_t BgL_g1149z00_1576;

				BgL_g1149z00_1576 = VECTOR_REF(BgL_opt1147z00_17, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1147z00_17))
					{
					case ((long) 1):

						{	/* Ieee/output.scm 319 */
							obj_t BgL_portz00_1580;

							{	/* Ieee/output.scm 319 */
								obj_t BgL_res2144z00_2697;

								{	/* Ieee/output.scm 319 */
									obj_t BgL_tmpz00_4333;

									BgL_tmpz00_4333 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2144z00_2697 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4333);
								}
								BgL_portz00_1580 = BgL_res2144z00_2697;
							}
							{	/* Ieee/output.scm 319 */

								{	/* Ieee/output.scm 319 */
									unsigned char BgL_bytez00_2698;

									{	/* Ieee/output.scm 319 */
										obj_t BgL_tmpz00_4336;

										if (INTEGERP(BgL_g1149z00_1576))
											{	/* Ieee/output.scm 319 */
												BgL_tmpz00_4336 = BgL_g1149z00_1576;
											}
										else
											{
												obj_t BgL_auxz00_4339;

												BgL_auxz00_4339 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2597z00zz__r4_output_6_10_3z00,
													BINT(((long) 12309)),
													BGl_string2605z00zz__r4_output_6_10_3z00,
													BGl_string2606z00zz__r4_output_6_10_3z00,
													BgL_g1149z00_1576);
												FAILURE(BgL_auxz00_4339, BFALSE, BFALSE);
											}
										BgL_bytez00_2698 = (unsigned char) CINT(BgL_tmpz00_4336);
									}
									return bgl_display_char(BgL_bytez00_2698, BgL_portz00_1580);
								}
							}
						}
						break;
					case ((long) 2):

						{	/* Ieee/output.scm 319 */
							obj_t BgL_portz00_1581;

							BgL_portz00_1581 = VECTOR_REF(BgL_opt1147z00_17, ((long) 1));
							{	/* Ieee/output.scm 319 */

								{	/* Ieee/output.scm 319 */
									unsigned char BgL_bytez00_2701;

									{	/* Ieee/output.scm 319 */
										obj_t BgL_tmpz00_4346;

										if (INTEGERP(BgL_g1149z00_1576))
											{	/* Ieee/output.scm 319 */
												BgL_tmpz00_4346 = BgL_g1149z00_1576;
											}
										else
											{
												obj_t BgL_auxz00_4349;

												BgL_auxz00_4349 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2597z00zz__r4_output_6_10_3z00,
													BINT(((long) 12309)),
													BGl_string2605z00zz__r4_output_6_10_3z00,
													BGl_string2606z00zz__r4_output_6_10_3z00,
													BgL_g1149z00_1576);
												FAILURE(BgL_auxz00_4349, BFALSE, BFALSE);
											}
										BgL_bytez00_2701 = (unsigned char) CINT(BgL_tmpz00_4346);
									}
									{	/* Ieee/output.scm 320 */
										obj_t BgL_portz00_2703;

										if (OUTPUT_PORTP(BgL_portz00_1581))
											{	/* Ieee/output.scm 320 */
												BgL_portz00_2703 = BgL_portz00_1581;
											}
										else
											{
												obj_t BgL_auxz00_4356;

												BgL_auxz00_4356 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string2597z00zz__r4_output_6_10_3z00,
													BINT(((long) 12397)),
													BGl_string2605z00zz__r4_output_6_10_3z00,
													BGl_string2599z00zz__r4_output_6_10_3z00,
													BgL_portz00_1581);
												FAILURE(BgL_auxz00_4356, BFALSE, BFALSE);
											}
										return bgl_display_char(BgL_bytez00_2701, BgL_portz00_2703);
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



/* write-byte */
	BGL_EXPORTED_DEF obj_t BGl_writezd2bytezd2zz__r4_output_6_10_3z00(unsigned
		char BgL_bytez00_15, obj_t BgL_portz00_16)
	{
		{	/* Ieee/output.scm 319 */
			{	/* Ieee/output.scm 326 */
				obj_t BgL_tmpz00_4363;

				BgL_tmpz00_4363 = ((obj_t) BgL_portz00_16);
				return bgl_display_char(BgL_bytez00_15, BgL_tmpz00_4363);
			}
		}

	}



/* write-byte-2 */
	BGL_EXPORTED_DEF obj_t BGl_writezd2bytezd22z00zz__r4_output_6_10_3z00(unsigned
		char BgL_bytez00_19, obj_t BgL_portz00_20)
	{
		{	/* Ieee/output.scm 325 */
			return bgl_display_char(BgL_bytez00_19, BgL_portz00_20);
		}

	}



/* &write-byte-2 */
	obj_t BGl_z62writezd2bytezd22z62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4056,
		obj_t BgL_bytez00_4057, obj_t BgL_portz00_4058)
	{
		{	/* Ieee/output.scm 325 */
			{	/* Ieee/output.scm 326 */
				obj_t BgL_auxz00_4376;
				unsigned char BgL_auxz00_4367;

				if (OUTPUT_PORTP(BgL_portz00_4058))
					{	/* Ieee/output.scm 326 */
						BgL_auxz00_4376 = BgL_portz00_4058;
					}
				else
					{
						obj_t BgL_auxz00_4379;

						BgL_auxz00_4379 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 12690)),
							BGl_string2607z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4058);
						FAILURE(BgL_auxz00_4379, BFALSE, BFALSE);
					}
				{	/* Ieee/output.scm 326 */
					obj_t BgL_tmpz00_4368;

					if (INTEGERP(BgL_bytez00_4057))
						{	/* Ieee/output.scm 326 */
							BgL_tmpz00_4368 = BgL_bytez00_4057;
						}
					else
						{
							obj_t BgL_auxz00_4371;

							BgL_auxz00_4371 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 12690)),
								BGl_string2607z00zz__r4_output_6_10_3z00,
								BGl_string2606z00zz__r4_output_6_10_3z00, BgL_bytez00_4057);
							FAILURE(BgL_auxz00_4371, BFALSE, BFALSE);
						}
					BgL_auxz00_4367 = (unsigned char) CINT(BgL_tmpz00_4368);
				}
				return
					BGl_writezd2bytezd22z00zz__r4_output_6_10_3z00(BgL_auxz00_4367,
					BgL_auxz00_4376);
			}
		}

	}



/* illegal-char-rep */
	BGL_EXPORTED_DEF obj_t
		BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(unsigned char
		BgL_charz00_21)
	{
		{	/* Ieee/output.scm 331 */
			{	/* Ieee/output.scm 332 */
				bool_t BgL_test2820z00_4384;

				{	/* Ieee/output.scm 332 */
					bool_t BgL_test2821z00_4385;

					{	/* Ieee/output.scm 332 */
						bool_t BgL_res2145z00_2707;

						BgL_res2145z00_2707 = isalpha(BgL_charz00_21);
						BgL_test2821z00_4385 = BgL_res2145z00_2707;
					}
					if (BgL_test2821z00_4385)
						{	/* Ieee/output.scm 332 */
							BgL_test2820z00_4384 = ((bool_t) 1);
						}
					else
						{	/* Ieee/output.scm 332 */
							bool_t BgL_res2146z00_2709;

							BgL_res2146z00_2709 = isdigit(BgL_charz00_21);
							BgL_test2820z00_4384 = BgL_res2146z00_2709;
						}
				}
				if (BgL_test2820z00_4384)
					{	/* Ieee/output.scm 332 */
						return BCHAR(BgL_charz00_21);
					}
				else
					{

						switch (BgL_charz00_21)
							{
							case ((unsigned char) 10):

								return BGl_string2608z00zz__r4_output_6_10_3z00;
								break;
							case ((unsigned char) 13):

								return BGl_string2609z00zz__r4_output_6_10_3z00;
								break;
							case ((unsigned char) ' '):

								return BGl_string2610z00zz__r4_output_6_10_3z00;
								break;
							case ((unsigned char) 9):

								return BGl_string2611z00zz__r4_output_6_10_3z00;
								break;
							default:
								{	/* Ieee/output.scm 344 */
									long BgL_iz00_1587;

									BgL_iz00_1587 = (BgL_charz00_21);
									if ((BgL_iz00_1587 < ((long) 33)))
										{	/* Ieee/output.scm 345 */
											return bgl_ill_char_rep(BgL_charz00_21);
										}
									else
										{	/* Ieee/output.scm 345 */
											return BCHAR(BgL_charz00_21);
										}
								}
							}
					}
			}
		}

	}



/* &illegal-char-rep */
	obj_t BGl_z62illegalzd2charzd2repz62zz__r4_output_6_10_3z00(obj_t
		BgL_envz00_4059, obj_t BgL_charz00_4060)
	{
		{	/* Ieee/output.scm 331 */
			{	/* Ieee/output.scm 332 */
				unsigned char BgL_auxz00_4395;

				{	/* Ieee/output.scm 332 */
					obj_t BgL_tmpz00_4396;

					if (CHARP(BgL_charz00_4060))
						{	/* Ieee/output.scm 332 */
							BgL_tmpz00_4396 = BgL_charz00_4060;
						}
					else
						{
							obj_t BgL_auxz00_4399;

							BgL_auxz00_4399 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 12975)),
								BGl_string2612z00zz__r4_output_6_10_3z00,
								BGl_string2603z00zz__r4_output_6_10_3z00, BgL_charz00_4060);
							FAILURE(BgL_auxz00_4399, BFALSE, BFALSE);
						}
					BgL_auxz00_4395 = CCHAR(BgL_tmpz00_4396);
				}
				return
					BGl_illegalzd2charzd2repz00zz__r4_output_6_10_3z00(BgL_auxz00_4395);
			}
		}

	}



/* print */
	BGL_EXPORTED_DEF obj_t BGl_printz00zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_22)
	{
		{	/* Ieee/output.scm 352 */
			{	/* Ieee/output.scm 353 */
				obj_t BgL_portz00_1590;

				{	/* Ieee/output.scm 353 */
					obj_t BgL_res2149z00_2715;

					{	/* Ieee/output.scm 353 */
						obj_t BgL_tmpz00_4405;

						BgL_tmpz00_4405 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2149z00_2715 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4405);
					}
					BgL_portz00_1590 = BgL_res2149z00_2715;
				}
				{
					obj_t BgL_lz00_2729;
					obj_t BgL_resz00_2730;

					BgL_lz00_2729 = BgL_objz00_22;
					BgL_resz00_2730 = BNIL;
				BgL_loopz00_2728:
					if (NULLP(BgL_lz00_2729))
						{	/* Ieee/output.scm 356 */
							bgl_display_char(((unsigned char) 10), BgL_portz00_1590);
							return BgL_resz00_2730;
						}
					else
						{	/* Ieee/output.scm 360 */
							obj_t BgL_vz00_2735;

							BgL_vz00_2735 = CAR(((obj_t) BgL_lz00_2729));
							bgl_display_obj(BgL_vz00_2735, BgL_portz00_1590);
							{	/* Ieee/output.scm 362 */
								obj_t BgL_arg1284z00_2736;

								BgL_arg1284z00_2736 = CDR(((obj_t) BgL_lz00_2729));
								{
									obj_t BgL_resz00_4417;
									obj_t BgL_lz00_4416;

									BgL_lz00_4416 = BgL_arg1284z00_2736;
									BgL_resz00_4417 = BgL_vz00_2735;
									BgL_resz00_2730 = BgL_resz00_4417;
									BgL_lz00_2729 = BgL_lz00_4416;
									goto BgL_loopz00_2728;
								}
							}
						}
				}
			}
		}

	}



/* &print */
	obj_t BGl_z62printz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4061,
		obj_t BgL_objz00_4062)
	{
		{	/* Ieee/output.scm 352 */
			return BGl_printz00zz__r4_output_6_10_3z00(BgL_objz00_4062);
		}

	}



/* display* */
	BGL_EXPORTED_DEF obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_23)
	{
		{	/* Ieee/output.scm 367 */
			{	/* Ieee/output.scm 368 */
				obj_t BgL_portz00_1600;

				{	/* Ieee/output.scm 368 */
					obj_t BgL_res2153z00_2741;

					{	/* Ieee/output.scm 368 */
						obj_t BgL_tmpz00_4419;

						BgL_tmpz00_4419 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2153z00_2741 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4419);
					}
					BgL_portz00_1600 = BgL_res2153z00_2741;
				}
				{
					obj_t BgL_lz00_1602;

					BgL_lz00_1602 = BgL_objz00_23;
				BgL_zc3z04anonymousza31285ze3z87_1603:
					if (NULLP(BgL_lz00_1602))
						{	/* Ieee/output.scm 370 */
							return BUNSPEC;
						}
					else
						{	/* Ieee/output.scm 370 */
							{	/* Ieee/output.scm 373 */
								obj_t BgL_arg1287z00_1606;

								BgL_arg1287z00_1606 = CAR(((obj_t) BgL_lz00_1602));
								bgl_display_obj(BgL_arg1287z00_1606, BgL_portz00_1600);
							}
							{	/* Ieee/output.scm 374 */
								obj_t BgL_arg1288z00_1607;

								BgL_arg1288z00_1607 = CDR(((obj_t) BgL_lz00_1602));
								{
									obj_t BgL_lz00_4429;

									BgL_lz00_4429 = BgL_arg1288z00_1607;
									BgL_lz00_1602 = BgL_lz00_4429;
									goto BgL_zc3z04anonymousza31285ze3z87_1603;
								}
							}
						}
				}
			}
		}

	}



/* &display* */
	obj_t BGl_z62displayza2zc0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4063,
		obj_t BgL_objz00_4064)
	{
		{	/* Ieee/output.scm 367 */
			return BGl_displayza2za2zz__r4_output_6_10_3z00(BgL_objz00_4064);
		}

	}



/* write* */
	BGL_EXPORTED_DEF obj_t BGl_writeza2za2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_24)
	{
		{	/* Ieee/output.scm 379 */
			{	/* Ieee/output.scm 380 */
				obj_t BgL_portz00_1609;

				{	/* Ieee/output.scm 380 */
					obj_t BgL_res2155z00_2747;

					{	/* Ieee/output.scm 380 */
						obj_t BgL_tmpz00_4431;

						BgL_tmpz00_4431 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2155z00_2747 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4431);
					}
					BgL_portz00_1609 = BgL_res2155z00_2747;
				}
				{
					obj_t BgL_lz00_1611;

					BgL_lz00_1611 = BgL_objz00_24;
				BgL_zc3z04anonymousza31289ze3z87_1612:
					if (NULLP(BgL_lz00_1611))
						{	/* Ieee/output.scm 382 */
							return BUNSPEC;
						}
					else
						{	/* Ieee/output.scm 382 */
							{	/* Ieee/output.scm 385 */
								obj_t BgL_arg1291z00_1615;

								BgL_arg1291z00_1615 = CAR(((obj_t) BgL_lz00_1611));
								bgl_write_obj(BgL_arg1291z00_1615, BgL_portz00_1609);
							}
							{	/* Ieee/output.scm 386 */
								obj_t BgL_arg1292z00_1616;

								BgL_arg1292z00_1616 = CDR(((obj_t) BgL_lz00_1611));
								{
									obj_t BgL_lz00_4441;

									BgL_lz00_4441 = BgL_arg1292z00_1616;
									BgL_lz00_1611 = BgL_lz00_4441;
									goto BgL_zc3z04anonymousza31289ze3z87_1612;
								}
							}
						}
				}
			}
		}

	}



/* &write* */
	obj_t BGl_z62writeza2zc0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4065,
		obj_t BgL_objz00_4066)
	{
		{	/* Ieee/output.scm 379 */
			return BGl_writeza2za2zz__r4_output_6_10_3z00(BgL_objz00_4066);
		}

	}



/* tprint */
	BGL_EXPORTED_DEF obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t
		BgL_portz00_25, obj_t BgL_objz00_26)
	{
		{	/* Ieee/output.scm 396 */
			{	/* Ieee/output.scm 397 */
				obj_t BgL_top2828z00_4444;

				BgL_top2828z00_4444 = BGL_EXITD_TOP_AS_OBJ();
				BGL_MUTEX_LOCK(BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00);
				BGL_EXITD_PUSH_PROTECT(BgL_top2828z00_4444,
					BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00);
				BUNSPEC;
				{	/* Ieee/output.scm 397 */
					obj_t BgL_tmp2827z00_4443;

					{	/* Ieee/output.scm 398 */
						obj_t BgL_runner1295z00_2752;

						{	/* Ieee/output.scm 398 */
							obj_t BgL_list1293z00_2753;

							BgL_list1293z00_2753 = MAKE_YOUNG_PAIR(BgL_objz00_26, BNIL);
							BgL_runner1295z00_2752 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_portz00_25,
								BgL_list1293z00_2753);
						}
						{	/* Ieee/output.scm 398 */
							obj_t BgL_aux1294z00_2754;

							BgL_aux1294z00_2754 = CAR(BgL_runner1295z00_2752);
							BgL_runner1295z00_2752 = CDR(BgL_runner1295z00_2752);
							BGl_fprintz00zz__r4_output_6_10_3z00(BgL_aux1294z00_2754,
								BgL_runner1295z00_2752);
						}
					}
					BgL_tmp2827z00_4443 = bgl_flush_output_port(BgL_portz00_25);
					BGL_EXITD_POP_PROTECT(BgL_top2828z00_4444);
					BUNSPEC;
					BGL_MUTEX_UNLOCK(BGl_tprintzd2mutexzd2zz__r4_output_6_10_3z00);
					return BgL_tmp2827z00_4443;
				}
			}
		}

	}



/* &tprint */
	obj_t BGl_z62tprintz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4067,
		obj_t BgL_portz00_4068, obj_t BgL_objz00_4069)
	{
		{	/* Ieee/output.scm 396 */
			{	/* Ieee/output.scm 397 */
				obj_t BgL_auxz00_4456;

				if (OUTPUT_PORTP(BgL_portz00_4068))
					{	/* Ieee/output.scm 397 */
						BgL_auxz00_4456 = BgL_portz00_4068;
					}
				else
					{
						obj_t BgL_auxz00_4459;

						BgL_auxz00_4459 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 15124)),
							BGl_string2613z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4068);
						FAILURE(BgL_auxz00_4459, BFALSE, BFALSE);
					}
				return
					BGl_tprintz00zz__r4_output_6_10_3z00(BgL_auxz00_4456,
					BgL_objz00_4069);
			}
		}

	}



/* fprint */
	BGL_EXPORTED_DEF obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t
		BgL_portz00_27, obj_t BgL_objz00_28)
	{
		{	/* Ieee/output.scm 404 */
			{
				obj_t BgL_lz00_2775;
				obj_t BgL_resz00_2776;

				BgL_lz00_2775 = BgL_objz00_28;
				BgL_resz00_2776 = BNIL;
			BgL_loopz00_2774:
				if (NULLP(BgL_lz00_2775))
					{	/* Ieee/output.scm 407 */
						bgl_display_char(((unsigned char) 10), BgL_portz00_27);
						return BgL_resz00_2776;
					}
				else
					{	/* Ieee/output.scm 411 */
						obj_t BgL_vz00_2782;

						BgL_vz00_2782 = CAR(((obj_t) BgL_lz00_2775));
						bgl_display_obj(BgL_vz00_2782, BgL_portz00_27);
						{	/* Ieee/output.scm 413 */
							obj_t BgL_arg1299z00_2784;

							BgL_arg1299z00_2784 = CDR(((obj_t) BgL_lz00_2775));
							{
								obj_t BgL_resz00_4473;
								obj_t BgL_lz00_4472;

								BgL_lz00_4472 = BgL_arg1299z00_2784;
								BgL_resz00_4473 = BgL_vz00_2782;
								BgL_resz00_2776 = BgL_resz00_4473;
								BgL_lz00_2775 = BgL_lz00_4472;
								goto BgL_loopz00_2774;
							}
						}
					}
			}
		}

	}



/* &fprint */
	obj_t BGl_z62fprintz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4070,
		obj_t BgL_portz00_4071, obj_t BgL_objz00_4072)
	{
		{	/* Ieee/output.scm 404 */
			{	/* Ieee/output.scm 405 */
				obj_t BgL_auxz00_4474;

				if (OUTPUT_PORTP(BgL_portz00_4071))
					{	/* Ieee/output.scm 405 */
						BgL_auxz00_4474 = BgL_portz00_4071;
					}
				else
					{
						obj_t BgL_auxz00_4477;

						BgL_auxz00_4477 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 15467)),
							BGl_string2614z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4071);
						FAILURE(BgL_auxz00_4477, BFALSE, BFALSE);
					}
				return
					BGl_fprintz00zz__r4_output_6_10_3z00(BgL_auxz00_4474,
					BgL_objz00_4072);
			}
		}

	}



/* xprintf */
	obj_t BGl_xprintfz00zz__r4_output_6_10_3z00(obj_t BgL_procnamez00_29,
		obj_t BgL_pz00_30, obj_t BgL__fmtz00_31, obj_t BgL_objsz00_32)
	{
		{	/* Ieee/output.scm 418 */
			{	/* Ieee/output.scm 419 */
				long BgL_lenz00_1631;

				BgL_lenz00_1631 = STRING_LENGTH(BgL__fmtz00_31);
				{
					obj_t BgL_iz00_1633;
					obj_t BgL_osz00_1634;

					BgL_iz00_1633 = BINT(((long) 0));
					BgL_osz00_1634 = BgL_objsz00_32;
				BgL_zc3z04anonymousza31300ze3z87_1635:
					{
						obj_t BgL_iz00_1701;
						obj_t BgL_numz00_1702;
						long BgL_mincolz00_1703;
						unsigned char BgL_paddingz00_1704;
						long BgL_iz00_1715;
						obj_t BgL_numz00_1716;
						obj_t BgL_pz00_1717;
						unsigned char BgL_fz00_1734;
						long BgL_iz00_1735;
						bool_t BgL_altzf3zf3_1736;

						if (((long) CINT(BgL_iz00_1633) < BgL_lenz00_1631))
							{	/* Ieee/output.scm 557 */
								unsigned char BgL_cz00_1644;

								BgL_cz00_1644 =
									STRING_REF(BgL__fmtz00_31, (long) CINT(BgL_iz00_1633));
								if ((BgL_cz00_1644 == ((unsigned char) '~')))
									{	/* Ieee/output.scm 558 */
										if (
											((long) CINT(BgL_iz00_1633) ==
												(BgL_lenz00_1631 - ((long) 1))))
											{	/* Ieee/output.scm 560 */
												return
													BGl_errorz00zz__errorz00(BgL_procnamez00_29,
													BGl_string2623z00zz__r4_output_6_10_3z00,
													c_substring(BgL__fmtz00_31,
														(long) CINT(BgL_iz00_1633), BgL_lenz00_1631));
											}
										else
											{	/* Ieee/output.scm 560 */
												if (
													(((unsigned char) ':') ==
														STRING_REF(BgL__fmtz00_31,
															((long) CINT(BgL_iz00_1633) + ((long) 1)))))
													{	/* Ieee/output.scm 564 */
														if (
															((long) CINT(BgL_iz00_1633) ==
																(BgL_lenz00_1631 - ((long) 2))))
															{	/* Ieee/output.scm 565 */
																return
																	BGl_errorz00zz__errorz00(BgL_procnamez00_29,
																	BGl_string2623z00zz__r4_output_6_10_3z00,
																	c_substring(BgL__fmtz00_31,
																		(long) CINT(BgL_iz00_1633),
																		BgL_lenz00_1631));
															}
														else
															{	/* Ieee/output.scm 565 */
																BgL_fz00_1734 =
																	STRING_REF(BgL__fmtz00_31,
																	((long) CINT(BgL_iz00_1633) + ((long) 2)));
																BgL_iz00_1735 =
																	((long) CINT(BgL_iz00_1633) + ((long) 2));
																BgL_altzf3zf3_1736 = ((bool_t) 1);
															BgL_zc3z04anonymousza31372ze3z87_1737:
																{

																	switch (BgL_fz00_1734)
																		{
																		case ((unsigned char) 'a'):
																		case ((unsigned char) 'A'):

																			if (BgL_altzf3zf3_1736)
																				{	/* Ieee/output.scm 500 */
																					obj_t BgL_arg1374z00_1741;

																					if (NULLP(BgL_osz00_1634))
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1374z00_1741 =
																								BGl_errorz00zz__errorz00
																								(BgL_procnamez00_29,
																								BGl_string2615z00zz__r4_output_6_10_3z00,
																								BCHAR(BgL_fz00_1734));
																						}
																					else
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1374z00_1741 =
																								CAR(((obj_t) BgL_osz00_1634));
																						}
																					BGl_displayzd2circlezd2zz__pp_circlez00
																						(BgL_arg1374z00_1741, BgL_pz00_30);
																				}
																			else
																				{	/* Ieee/output.scm 501 */
																					obj_t BgL_arg1375z00_1742;

																					if (NULLP(BgL_osz00_1634))
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1375z00_1742 =
																								BGl_errorz00zz__errorz00
																								(BgL_procnamez00_29,
																								BGl_string2615z00zz__r4_output_6_10_3z00,
																								BCHAR(BgL_fz00_1734));
																						}
																					else
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1375z00_1742 =
																								CAR(((obj_t) BgL_osz00_1634));
																						}
																					bgl_display_obj(BgL_arg1375z00_1742,
																						BgL_pz00_30);
																				}
																			{	/* Ieee/output.scm 502 */
																				long BgL_arg1376z00_1743;
																				obj_t BgL_arg1377z00_1744;

																				BgL_arg1376z00_1743 =
																					(BgL_iz00_1735 + ((long) 1));
																				BgL_arg1377z00_1744 =
																					CDR(((obj_t) BgL_osz00_1634));
																				{
																					obj_t BgL_osz00_4529;
																					obj_t BgL_iz00_4527;

																					BgL_iz00_4527 =
																						BINT(BgL_arg1376z00_1743);
																					BgL_osz00_4529 = BgL_arg1377z00_1744;
																					BgL_osz00_1634 = BgL_osz00_4529;
																					BgL_iz00_1633 = BgL_iz00_4527;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1635;
																				}
																			}
																			break;
																		case ((unsigned char) 's'):
																		case ((unsigned char) 'S'):

																			if (BgL_altzf3zf3_1736)
																				{	/* Ieee/output.scm 505 */
																					obj_t BgL_arg1378z00_1745;

																					if (NULLP(BgL_osz00_1634))
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1378z00_1745 =
																								BGl_errorz00zz__errorz00
																								(BgL_procnamez00_29,
																								BGl_string2615z00zz__r4_output_6_10_3z00,
																								BCHAR(BgL_fz00_1734));
																						}
																					else
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1378z00_1745 =
																								CAR(((obj_t) BgL_osz00_1634));
																						}
																					BGl_writezd2circlezd2zz__pp_circlez00
																						(BgL_arg1378z00_1745, BgL_pz00_30);
																				}
																			else
																				{	/* Ieee/output.scm 506 */
																					obj_t BgL_arg1379z00_1746;

																					if (NULLP(BgL_osz00_1634))
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1379z00_1746 =
																								BGl_errorz00zz__errorz00
																								(BgL_procnamez00_29,
																								BGl_string2615z00zz__r4_output_6_10_3z00,
																								BCHAR(BgL_fz00_1734));
																						}
																					else
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1379z00_1746 =
																								CAR(((obj_t) BgL_osz00_1634));
																						}
																					{	/* Ieee/output.scm 506 */
																						obj_t BgL_list1380z00_1747;

																						BgL_list1380z00_1747 =
																							MAKE_YOUNG_PAIR(BgL_pz00_30,
																							BNIL);
																						BGl_writez00zz__r4_output_6_10_3z00
																							(BgL_arg1379z00_1746,
																							BgL_list1380z00_1747);
																					}
																				}
																			{	/* Ieee/output.scm 507 */
																				long BgL_arg1381z00_1748;
																				obj_t BgL_arg1382z00_1749;

																				BgL_arg1381z00_1748 =
																					(BgL_iz00_1735 + ((long) 1));
																				BgL_arg1382z00_1749 =
																					CDR(((obj_t) BgL_osz00_1634));
																				{
																					obj_t BgL_osz00_4551;
																					obj_t BgL_iz00_4549;

																					BgL_iz00_4549 =
																						BINT(BgL_arg1381z00_1748);
																					BgL_osz00_4551 = BgL_arg1382z00_1749;
																					BgL_osz00_1634 = BgL_osz00_4551;
																					BgL_iz00_1633 = BgL_iz00_4549;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1635;
																				}
																			}
																			break;
																		case ((unsigned char) 'v'):
																		case ((unsigned char) 'V'):

																			if (BgL_altzf3zf3_1736)
																				{	/* Ieee/output.scm 510 */
																					obj_t BgL_arg1383z00_1750;

																					if (NULLP(BgL_osz00_1634))
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1383z00_1750 =
																								BGl_errorz00zz__errorz00
																								(BgL_procnamez00_29,
																								BGl_string2615z00zz__r4_output_6_10_3z00,
																								BCHAR(BgL_fz00_1734));
																						}
																					else
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1383z00_1750 =
																								CAR(((obj_t) BgL_osz00_1634));
																						}
																					BGl_displayzd2circlezd2zz__pp_circlez00
																						(BgL_arg1383z00_1750, BgL_pz00_30);
																				}
																			else
																				{	/* Ieee/output.scm 511 */
																					obj_t BgL_arg1384z00_1751;

																					if (NULLP(BgL_osz00_1634))
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1384z00_1751 =
																								BGl_errorz00zz__errorz00
																								(BgL_procnamez00_29,
																								BGl_string2615z00zz__r4_output_6_10_3z00,
																								BCHAR(BgL_fz00_1734));
																						}
																					else
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1384z00_1751 =
																								CAR(((obj_t) BgL_osz00_1634));
																						}
																					bgl_display_obj(BgL_arg1384z00_1751,
																						BgL_pz00_30);
																				}
																			bgl_display_char(((unsigned char) 10),
																				BgL_pz00_30);
																			{	/* Ieee/output.scm 513 */
																				long BgL_arg1385z00_1752;
																				obj_t BgL_arg1386z00_1753;

																				BgL_arg1385z00_1752 =
																					(BgL_iz00_1735 + ((long) 1));
																				BgL_arg1386z00_1753 =
																					CDR(((obj_t) BgL_osz00_1634));
																				{
																					obj_t BgL_osz00_4573;
																					obj_t BgL_iz00_4571;

																					BgL_iz00_4571 =
																						BINT(BgL_arg1385z00_1752);
																					BgL_osz00_4573 = BgL_arg1386z00_1753;
																					BgL_osz00_1634 = BgL_osz00_4573;
																					BgL_iz00_1633 = BgL_iz00_4571;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1635;
																				}
																			}
																			break;
																		case ((unsigned char) 'c'):
																		case ((unsigned char) 'C'):

																			{	/* Ieee/output.scm 515 */
																				obj_t BgL_oz00_1754;

																				if (NULLP(BgL_osz00_1634))
																					{	/* Ieee/output.scm 424 */
																						BgL_oz00_1754 =
																							BGl_errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BGl_string2615z00zz__r4_output_6_10_3z00,
																							BCHAR(BgL_fz00_1734));
																					}
																				else
																					{	/* Ieee/output.scm 424 */
																						BgL_oz00_1754 =
																							CAR(((obj_t) BgL_osz00_1634));
																					}
																				if (CHARP(BgL_oz00_1754))
																					{	/* Ieee/output.scm 516 */
																						{	/* Ieee/output.scm 314 */
																							unsigned char BgL_tmpz00_4582;

																							BgL_tmpz00_4582 =
																								CCHAR(BgL_oz00_1754);
																							bgl_display_char(BgL_tmpz00_4582,
																								BgL_pz00_30);
																						}
																						{	/* Ieee/output.scm 520 */
																							long BgL_arg1388z00_1756;
																							obj_t BgL_arg1389z00_1757;

																							BgL_arg1388z00_1756 =
																								(BgL_iz00_1735 + ((long) 1));
																							BgL_arg1389z00_1757 =
																								CDR(((obj_t) BgL_osz00_1634));
																							{
																								obj_t BgL_osz00_4590;
																								obj_t BgL_iz00_4588;

																								BgL_iz00_4588 =
																									BINT(BgL_arg1388z00_1756);
																								BgL_osz00_4590 =
																									BgL_arg1389z00_1757;
																								BgL_osz00_1634 = BgL_osz00_4590;
																								BgL_iz00_1633 = BgL_iz00_4588;
																								goto
																									BgL_zc3z04anonymousza31300ze3z87_1635;
																							}
																						}
																					}
																				else
																					{	/* Ieee/output.scm 516 */
																						return
																							BGl_errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BGl_string2618z00zz__r4_output_6_10_3z00,
																							BgL_oz00_1754);
																					}
																			}
																			break;
																		case ((unsigned char) 'd'):
																		case ((unsigned char) 'D'):

																			{	/* Ieee/output.scm 522 */
																				obj_t BgL_arg1390z00_1758;

																				if (NULLP(BgL_osz00_1634))
																					{	/* Ieee/output.scm 424 */
																						BgL_arg1390z00_1758 =
																							BGl_errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BGl_string2615z00zz__r4_output_6_10_3z00,
																							BCHAR(BgL_fz00_1734));
																					}
																				else
																					{	/* Ieee/output.scm 424 */
																						BgL_arg1390z00_1758 =
																							CAR(((obj_t) BgL_osz00_1634));
																					}
																				if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg1390z00_1758))
																					{	/* Ieee/output.scm 429 */
																						bgl_display_obj
																							(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																							(BgL_arg1390z00_1758,
																								BINT(((long) 10))),
																							BgL_pz00_30);
																					}
																				else
																					{	/* Ieee/output.scm 429 */
																						BGl_bigloozd2typezd2errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BGl_string2619z00zz__r4_output_6_10_3z00,
																							BgL_arg1390z00_1758);
																					}
																			}
																			{	/* Ieee/output.scm 523 */
																				long BgL_arg1391z00_1759;
																				obj_t BgL_arg1392z00_1760;

																				BgL_arg1391z00_1759 =
																					(BgL_iz00_1735 + ((long) 1));
																				BgL_arg1392z00_1760 =
																					CDR(((obj_t) BgL_osz00_1634));
																				{
																					obj_t BgL_osz00_4609;
																					obj_t BgL_iz00_4607;

																					BgL_iz00_4607 =
																						BINT(BgL_arg1391z00_1759);
																					BgL_osz00_4609 = BgL_arg1392z00_1760;
																					BgL_osz00_1634 = BgL_osz00_4609;
																					BgL_iz00_1633 = BgL_iz00_4607;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1635;
																				}
																			}
																			break;
																		case ((unsigned char) 'x'):
																		case ((unsigned char) 'X'):

																			{	/* Ieee/output.scm 525 */
																				obj_t BgL_arg1393z00_1761;

																				if (NULLP(BgL_osz00_1634))
																					{	/* Ieee/output.scm 424 */
																						BgL_arg1393z00_1761 =
																							BGl_errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BGl_string2615z00zz__r4_output_6_10_3z00,
																							BCHAR(BgL_fz00_1734));
																					}
																				else
																					{	/* Ieee/output.scm 424 */
																						BgL_arg1393z00_1761 =
																							CAR(((obj_t) BgL_osz00_1634));
																					}
																				if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg1393z00_1761))
																					{	/* Ieee/output.scm 429 */
																						bgl_display_obj
																							(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																							(BgL_arg1393z00_1761,
																								BINT(((long) 16))),
																							BgL_pz00_30);
																					}
																				else
																					{	/* Ieee/output.scm 429 */
																						BGl_bigloozd2typezd2errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BGl_string2619z00zz__r4_output_6_10_3z00,
																							BgL_arg1393z00_1761);
																					}
																			}
																			{	/* Ieee/output.scm 526 */
																				long BgL_arg1394z00_1762;
																				obj_t BgL_arg1395z00_1763;

																				BgL_arg1394z00_1762 =
																					(BgL_iz00_1735 + ((long) 1));
																				BgL_arg1395z00_1763 =
																					CDR(((obj_t) BgL_osz00_1634));
																				{
																					obj_t BgL_osz00_4627;
																					obj_t BgL_iz00_4625;

																					BgL_iz00_4625 =
																						BINT(BgL_arg1394z00_1762);
																					BgL_osz00_4627 = BgL_arg1395z00_1763;
																					BgL_osz00_1634 = BgL_osz00_4627;
																					BgL_iz00_1633 = BgL_iz00_4625;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1635;
																				}
																			}
																			break;
																		case ((unsigned char) 'o'):
																		case ((unsigned char) 'O'):

																			{	/* Ieee/output.scm 528 */
																				obj_t BgL_arg1396z00_1764;

																				if (NULLP(BgL_osz00_1634))
																					{	/* Ieee/output.scm 424 */
																						BgL_arg1396z00_1764 =
																							BGl_errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BGl_string2615z00zz__r4_output_6_10_3z00,
																							BCHAR(BgL_fz00_1734));
																					}
																				else
																					{	/* Ieee/output.scm 424 */
																						BgL_arg1396z00_1764 =
																							CAR(((obj_t) BgL_osz00_1634));
																					}
																				if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg1396z00_1764))
																					{	/* Ieee/output.scm 429 */
																						bgl_display_obj
																							(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																							(BgL_arg1396z00_1764,
																								BINT(((long) 8))), BgL_pz00_30);
																					}
																				else
																					{	/* Ieee/output.scm 429 */
																						BGl_bigloozd2typezd2errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BGl_string2619z00zz__r4_output_6_10_3z00,
																							BgL_arg1396z00_1764);
																					}
																			}
																			{	/* Ieee/output.scm 529 */
																				long BgL_arg1397z00_1765;
																				obj_t BgL_arg1398z00_1766;

																				BgL_arg1397z00_1765 =
																					(BgL_iz00_1735 + ((long) 1));
																				BgL_arg1398z00_1766 =
																					CDR(((obj_t) BgL_osz00_1634));
																				{
																					obj_t BgL_osz00_4645;
																					obj_t BgL_iz00_4643;

																					BgL_iz00_4643 =
																						BINT(BgL_arg1397z00_1765);
																					BgL_osz00_4645 = BgL_arg1398z00_1766;
																					BgL_osz00_1634 = BgL_osz00_4645;
																					BgL_iz00_1633 = BgL_iz00_4643;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1635;
																				}
																			}
																			break;
																		case ((unsigned char) 'b'):
																		case ((unsigned char) 'B'):

																			{	/* Ieee/output.scm 531 */
																				obj_t BgL_arg1399z00_1767;

																				if (NULLP(BgL_osz00_1634))
																					{	/* Ieee/output.scm 424 */
																						BgL_arg1399z00_1767 =
																							BGl_errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BGl_string2615z00zz__r4_output_6_10_3z00,
																							BCHAR(BgL_fz00_1734));
																					}
																				else
																					{	/* Ieee/output.scm 424 */
																						BgL_arg1399z00_1767 =
																							CAR(((obj_t) BgL_osz00_1634));
																					}
																				if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_arg1399z00_1767))
																					{	/* Ieee/output.scm 429 */
																						bgl_display_obj
																							(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																							(BgL_arg1399z00_1767,
																								BINT(((long) 2))), BgL_pz00_30);
																					}
																				else
																					{	/* Ieee/output.scm 429 */
																						BGl_bigloozd2typezd2errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BGl_string2619z00zz__r4_output_6_10_3z00,
																							BgL_arg1399z00_1767);
																					}
																			}
																			{	/* Ieee/output.scm 532 */
																				long BgL_arg1400z00_1768;
																				obj_t BgL_arg1401z00_1769;

																				BgL_arg1400z00_1768 =
																					(BgL_iz00_1735 + ((long) 1));
																				BgL_arg1401z00_1769 =
																					CDR(((obj_t) BgL_osz00_1634));
																				{
																					obj_t BgL_osz00_4663;
																					obj_t BgL_iz00_4661;

																					BgL_iz00_4661 =
																						BINT(BgL_arg1400z00_1768);
																					BgL_osz00_4663 = BgL_arg1401z00_1769;
																					BgL_osz00_1634 = BgL_osz00_4663;
																					BgL_iz00_1633 = BgL_iz00_4661;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1635;
																				}
																			}
																			break;
																		case ((unsigned char) '%'):
																		case ((unsigned char) 'n'):

																			bgl_display_char(((unsigned char) 10),
																				BgL_pz00_30);
																			{	/* Ieee/output.scm 535 */
																				long BgL_arg1402z00_1770;

																				BgL_arg1402z00_1770 =
																					(BgL_iz00_1735 + ((long) 1));
																				{
																					obj_t BgL_iz00_4666;

																					BgL_iz00_4666 =
																						BINT(BgL_arg1402z00_1770);
																					BgL_iz00_1633 = BgL_iz00_4666;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1635;
																				}
																			}
																			break;
																		case ((unsigned char) 'r'):

																			bgl_display_char(((unsigned char) 13),
																				BgL_pz00_30);
																			{	/* Ieee/output.scm 538 */
																				long BgL_arg1404z00_1771;

																				BgL_arg1404z00_1771 =
																					(BgL_iz00_1735 + ((long) 1));
																				{
																					obj_t BgL_iz00_4670;

																					BgL_iz00_4670 =
																						BINT(BgL_arg1404z00_1771);
																					BgL_iz00_1633 = BgL_iz00_4670;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1635;
																				}
																			}
																			break;
																		case ((unsigned char) 'l'):
																		case ((unsigned char) 'L'):

																			{	/* Ieee/output.scm 540 */
																				obj_t BgL_arg1405z00_1772;

																				if (NULLP(BgL_osz00_1634))
																					{	/* Ieee/output.scm 424 */
																						BgL_arg1405z00_1772 =
																							BGl_errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BGl_string2615z00zz__r4_output_6_10_3z00,
																							BCHAR(BgL_fz00_1734));
																					}
																				else
																					{	/* Ieee/output.scm 424 */
																						BgL_arg1405z00_1772 =
																							CAR(((obj_t) BgL_osz00_1634));
																					}
																				BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00
																					(BgL_arg1405z00_1772, BgL_pz00_30,
																					BGl_string2620z00zz__r4_output_6_10_3z00);
																			}
																			{	/* Ieee/output.scm 541 */
																				long BgL_arg1406z00_1773;
																				obj_t BgL_arg1407z00_1774;

																				BgL_arg1406z00_1773 =
																					(BgL_iz00_1735 + ((long) 1));
																				BgL_arg1407z00_1774 =
																					CDR(((obj_t) BgL_osz00_1634));
																				{
																					obj_t BgL_osz00_4684;
																					obj_t BgL_iz00_4682;

																					BgL_iz00_4682 =
																						BINT(BgL_arg1406z00_1773);
																					BgL_osz00_4684 = BgL_arg1407z00_1774;
																					BgL_osz00_1634 = BgL_osz00_4684;
																					BgL_iz00_1633 = BgL_iz00_4682;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1635;
																				}
																			}
																			break;
																		case ((unsigned char) '('):

																			{	/* Ieee/output.scm 543 */
																				obj_t BgL_niz00_1775;

																				{	/* Ieee/output.scm 543 */
																					obj_t BgL_arg1410z00_1777;

																					if (NULLP(BgL_osz00_1634))
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1410z00_1777 =
																								BGl_errorz00zz__errorz00
																								(BgL_procnamez00_29,
																								BGl_string2615z00zz__r4_output_6_10_3z00,
																								BCHAR(BgL_fz00_1734));
																						}
																					else
																						{	/* Ieee/output.scm 424 */
																							BgL_arg1410z00_1777 =
																								CAR(((obj_t) BgL_osz00_1634));
																						}
																					{	/* Ieee/output.scm 449 */
																						obj_t BgL_jz00_2954;

																						BgL_jz00_2954 =
																							BGl_stringzd2indexzd2zz__r4_strings_6_7z00
																							(BgL__fmtz00_31,
																							BCHAR(((unsigned char) ')')),
																							BINT(BgL_iz00_1735));
																						if (CBOOL(BgL_jz00_2954))
																							{	/* Ieee/output.scm 452 */
																								obj_t BgL_sepz00_2955;

																								BgL_sepz00_2955 =
																									c_substring(BgL__fmtz00_31,
																									(BgL_iz00_1735 + ((long) 1)),
																									(long) CINT(BgL_jz00_2954));
																								BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00
																									(BgL_arg1410z00_1777,
																									BgL_pz00_30, BgL_sepz00_2955);
																								BgL_niz00_1775 =
																									ADDFX(BgL_jz00_2954,
																									BINT(((long) 1)));
																							}
																						else
																							{	/* Ieee/output.scm 450 */
																								BgL_niz00_1775 =
																									BGl_errorz00zz__errorz00
																									(BgL_procnamez00_29,
																									BGl_string2621z00zz__r4_output_6_10_3z00,
																									BgL__fmtz00_31);
																							}
																					}
																				}
																				{	/* Ieee/output.scm 544 */
																					obj_t BgL_arg1409z00_1776;

																					BgL_arg1409z00_1776 =
																						CDR(((obj_t) BgL_osz00_1634));
																					{
																						obj_t BgL_osz00_4706;
																						obj_t BgL_iz00_4705;

																						BgL_iz00_4705 = BgL_niz00_1775;
																						BgL_osz00_4706 =
																							BgL_arg1409z00_1776;
																						BgL_osz00_1634 = BgL_osz00_4706;
																						BgL_iz00_1633 = BgL_iz00_4705;
																						goto
																							BgL_zc3z04anonymousza31300ze3z87_1635;
																					}
																				}
																			}
																			break;
																		case ((unsigned char) '~'):

																			bgl_display_char(((unsigned char) '~'),
																				BgL_pz00_30);
																			{	/* Ieee/output.scm 547 */
																				long BgL_arg1411z00_1778;

																				BgL_arg1411z00_1778 =
																					(BgL_iz00_1735 + ((long) 1));
																				{
																					obj_t BgL_iz00_4709;

																					BgL_iz00_4709 =
																						BINT(BgL_arg1411z00_1778);
																					BgL_iz00_1633 = BgL_iz00_4709;
																					goto
																						BgL_zc3z04anonymousza31300ze3z87_1635;
																				}
																			}
																			break;
																		default:
																			{	/* Ieee/output.scm 549 */
																				bool_t BgL_test2859z00_4711;

																				{	/* Ieee/output.scm 549 */
																					bool_t BgL_res2185z00_2863;

																					BgL_res2185z00_2863 =
																						isdigit(BgL_fz00_1734);
																					BgL_test2859z00_4711 =
																						BgL_res2185z00_2863;
																				}
																				if (BgL_test2859z00_4711)
																					{	/* Ieee/output.scm 550 */
																						obj_t BgL_niz00_1780;

																						{	/* Ieee/output.scm 550 */
																							obj_t BgL_arg1414z00_1782;

																							if (NULLP(BgL_osz00_1634))
																								{	/* Ieee/output.scm 424 */
																									BgL_arg1414z00_1782 =
																										BGl_errorz00zz__errorz00
																										(BgL_procnamez00_29,
																										BGl_string2615z00zz__r4_output_6_10_3z00,
																										BCHAR(BgL_fz00_1734));
																								}
																							else
																								{	/* Ieee/output.scm 424 */
																									BgL_arg1414z00_1782 =
																										CAR(
																										((obj_t) BgL_osz00_1634));
																								}
																							BgL_iz00_1715 = BgL_iz00_1735;
																							BgL_numz00_1716 =
																								BgL_arg1414z00_1782;
																							BgL_pz00_1717 = BgL_pz00_30;
																							if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_numz00_1716))
																								{	/* Ieee/output.scm 479 */
																									obj_t BgL_jz00_1720;

																									BgL_jz00_1720 =
																										BGl_stringzd2skipzd2zz__r4_strings_6_7z00
																										(BgL__fmtz00_31,
																										BGl_string2622z00zz__r4_output_6_10_3z00,
																										BINT(BgL_iz00_1715));
																									if (CBOOL(BgL_jz00_1720))
																										{	/* Ieee/output.scm 481 */
																											if (
																												(STRING_REF
																													(BgL__fmtz00_31,
																														(long)
																														CINT(BgL_jz00_1720))
																													==
																													((unsigned char)
																														',')))
																												{	/* Ieee/output.scm 483 */
																													if (
																														((long)
																															CINT
																															(BgL_jz00_1720) ==
																															(BgL_lenz00_1631 -
																																((long) 1))))
																														{	/* Ieee/output.scm 484 */
																															BgL_niz00_1780 =
																																BGl_errorz00zz__errorz00
																																(BgL_procnamez00_29,
																																BGl_string2621z00zz__r4_output_6_10_3z00,
																																BgL__fmtz00_31);
																														}
																													else
																														{	/* Ieee/output.scm 486 */
																															long
																																BgL_arg1361z00_1725;
																															long
																																BgL_arg1362z00_1726;
																															unsigned char
																																BgL_arg1363z00_1727;
																															BgL_arg1361z00_1725
																																=
																																((long)
																																CINT
																																(BgL_jz00_1720)
																																+ ((long) 2));
																															{	/* Ieee/output.scm 488 */
																																obj_t
																																	BgL_arg1364z00_1728;
																																BgL_arg1364z00_1728
																																	=
																																	c_substring
																																	(BgL__fmtz00_31,
																																	BgL_iz00_1715,
																																	(long)
																																	CINT
																																	(BgL_jz00_1720));
																																{	/* Ieee/output.scm 488 */
																																	char
																																		*BgL_tmpz00_4738;
																																	BgL_tmpz00_4738
																																		=
																																		BSTRING_TO_STRING
																																		(BgL_arg1364z00_1728);
																																	BgL_arg1362z00_1726
																																		=
																																		BGL_STRTOL
																																		(BgL_tmpz00_4738,
																																		((long) 0),
																																		((long)
																																			10));
																															}}
																															BgL_arg1363z00_1727
																																=
																																STRING_REF
																																(BgL__fmtz00_31,
																																((long)
																																	CINT
																																	(BgL_jz00_1720)
																																	+
																																	((long) 1)));
																															BgL_iz00_1701 =
																																BINT
																																(BgL_arg1361z00_1725);
																															BgL_numz00_1702 =
																																BgL_numz00_1716;
																															BgL_mincolz00_1703
																																=
																																BgL_arg1362z00_1726;
																															BgL_paddingz00_1704
																																=
																																BgL_arg1363z00_1727;
																														BgL_zc3z04anonymousza31348ze3z87_1705:
																															if (
																																((long)
																																	CINT
																																	(BgL_iz00_1701)
																																	==
																																	BgL_lenz00_1631))
																																{	/* Ieee/output.scm 457 */
																																	BgL_niz00_1780
																																		=
																																		BGl_errorz00zz__errorz00
																																		(BgL_procnamez00_29,
																																		BGl_string2621z00zz__r4_output_6_10_3z00,
																																		BgL__fmtz00_31);
																																}
																															else
																																{	/* Ieee/output.scm 459 */
																																	obj_t
																																		BgL_sz00_1707;
																																	{	/* Ieee/output.scm 459 */
																																		unsigned
																																			char
																																			BgL_aux1046z00_1713;
																																		BgL_aux1046z00_1713
																																			=
																																			STRING_REF
																																			(BgL__fmtz00_31,
																																			(long)
																																			CINT
																																			(BgL_iz00_1701));
																																		switch
																																			(BgL_aux1046z00_1713)
																																			{
																																			case ((unsigned char) 'd'):
																																			case ((unsigned char) 'D'):

																																				BgL_sz00_1707 = BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1702, BINT(((long) 10)));
																																				break;
																																			case ((unsigned char) 'x'):
																																			case ((unsigned char) 'X'):

																																				BgL_sz00_1707 = BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1702, BINT(((long) 16)));
																																				break;
																																			case ((unsigned char) 'o'):
																																			case ((unsigned char) 'O'):

																																				BgL_sz00_1707 = BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1702, BINT(((long) 8)));
																																				break;
																																			case ((unsigned char) 'b'):
																																			case ((unsigned char) 'B'):

																																				BgL_sz00_1707 = BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BgL_numz00_1702, BINT(((long) 2)));
																																				break;
																																			default:
																																				BgL_sz00_1707 = BGl_errorz00zz__errorz00(BgL_procnamez00_29, BGl_string2621z00zz__r4_output_6_10_3z00, BgL__fmtz00_31);
																																			}
																																	}
																																	{	/* Ieee/output.scm 459 */
																																		long
																																			BgL_lz00_1708;
																																		BgL_lz00_1708
																																			=
																																			STRING_LENGTH
																																			(((obj_t)
																																				BgL_sz00_1707));
																																		{	/* Ieee/output.scm 470 */

																																			if (
																																				(BgL_lz00_1708
																																					<
																																					BgL_mincolz00_1703))
																																				{	/* Ieee/output.scm 471 */
																																					bgl_display_obj
																																						(make_string
																																						((BgL_mincolz00_1703 - BgL_lz00_1708), BgL_paddingz00_1704), BgL_pz00_30);
																																				}
																																			else
																																				{	/* Ieee/output.scm 471 */
																																					BFALSE;
																																				}
																																			bgl_display_obj
																																				(BgL_sz00_1707,
																																				BgL_pz00_30);
																																			BgL_niz00_1780
																																				=
																																				ADDFX
																																				(BgL_iz00_1701,
																																				BINT((
																																						(long)
																																						1)));
																												}}}}}
																											else
																												{	/* Ieee/output.scm 493 */
																													long
																														BgL_arg1368z00_1731;
																													{	/* Ieee/output.scm 493 */
																														obj_t
																															BgL_arg1370z00_1732;
																														BgL_arg1370z00_1732
																															=
																															c_substring
																															(BgL__fmtz00_31,
																															BgL_iz00_1715,
																															(long)
																															CINT
																															(BgL_jz00_1720));
																														{	/* Ieee/output.scm 493 */
																															char
																																*BgL_tmpz00_4773;
																															BgL_tmpz00_4773 =
																																BSTRING_TO_STRING
																																(BgL_arg1370z00_1732);
																															BgL_arg1368z00_1731
																																=
																																BGL_STRTOL
																																(BgL_tmpz00_4773,
																																((long) 0),
																																((long) 10));
																													}}
																													{
																														unsigned char
																															BgL_paddingz00_4779;
																														long
																															BgL_mincolz00_4778;
																														obj_t
																															BgL_numz00_4777;
																														obj_t BgL_iz00_4776;

																														BgL_iz00_4776 =
																															BgL_jz00_1720;
																														BgL_numz00_4777 =
																															BgL_numz00_1716;
																														BgL_mincolz00_4778 =
																															BgL_arg1368z00_1731;
																														BgL_paddingz00_4779
																															=
																															((unsigned char)
																															' ');
																														BgL_paddingz00_1704
																															=
																															BgL_paddingz00_4779;
																														BgL_mincolz00_1703 =
																															BgL_mincolz00_4778;
																														BgL_numz00_1702 =
																															BgL_numz00_4777;
																														BgL_iz00_1701 =
																															BgL_iz00_4776;
																														goto
																															BgL_zc3z04anonymousza31348ze3z87_1705;
																													}
																												}
																										}
																									else
																										{	/* Ieee/output.scm 481 */
																											BgL_niz00_1780 =
																												BGl_errorz00zz__errorz00
																												(BgL_procnamez00_29,
																												BGl_string2621z00zz__r4_output_6_10_3z00,
																												BgL__fmtz00_31);
																										}
																								}
																							else
																								{	/* Ieee/output.scm 477 */
																									BgL_niz00_1780 =
																										BGl_bigloozd2typezd2errorz00zz__errorz00
																										(BgL_procnamez00_29,
																										BGl_string2619z00zz__r4_output_6_10_3z00,
																										BgL_numz00_1716);
																								}
																						}
																						{	/* Ieee/output.scm 551 */
																							obj_t BgL_arg1413z00_1781;

																							BgL_arg1413z00_1781 =
																								CDR(((obj_t) BgL_osz00_1634));
																							{
																								obj_t BgL_osz00_4785;
																								obj_t BgL_iz00_4784;

																								BgL_iz00_4784 = BgL_niz00_1780;
																								BgL_osz00_4785 =
																									BgL_arg1413z00_1781;
																								BgL_osz00_1634 = BgL_osz00_4785;
																								BgL_iz00_1633 = BgL_iz00_4784;
																								goto
																									BgL_zc3z04anonymousza31300ze3z87_1635;
																							}
																						}
																					}
																				else
																					{	/* Ieee/output.scm 554 */
																						obj_t BgL_arg1415z00_1783;

																						{	/* Ieee/output.scm 554 */
																							obj_t BgL_arg1416z00_1784;

																							{	/* Ieee/output.scm 554 */
																								obj_t BgL_list1417z00_1785;

																								BgL_list1417z00_1785 =
																									MAKE_YOUNG_PAIR(BCHAR
																									(BgL_fz00_1734), BNIL);
																								BgL_arg1416z00_1784 =
																									BGl_listzd2ze3stringz31zz__r4_strings_6_7z00
																									(BgL_list1417z00_1785);
																							}
																							BgL_arg1415z00_1783 =
																								string_append_3
																								(BGl_string2616z00zz__r4_output_6_10_3z00,
																								BgL_arg1416z00_1784,
																								BGl_string2617z00zz__r4_output_6_10_3z00);
																						}
																						return
																							BGl_errorz00zz__errorz00
																							(BgL_procnamez00_29,
																							BgL_arg1415z00_1783,
																							BgL__fmtz00_31);
																					}
																			}
																		}
																}
															}
													}
												else
													{
														bool_t BgL_altzf3zf3_4804;
														long BgL_iz00_4801;
														unsigned char BgL_fz00_4797;

														BgL_fz00_4797 =
															STRING_REF(BgL__fmtz00_31,
															((long) CINT(BgL_iz00_1633) + ((long) 1)));
														BgL_iz00_4801 =
															((long) CINT(BgL_iz00_1633) + ((long) 1));
														BgL_altzf3zf3_4804 = ((bool_t) 0);
														BgL_altzf3zf3_1736 = BgL_altzf3zf3_4804;
														BgL_iz00_1735 = BgL_iz00_4801;
														BgL_fz00_1734 = BgL_fz00_4797;
														goto BgL_zc3z04anonymousza31372ze3z87_1737;
													}
											}
									}
								else
									{	/* Ieee/output.scm 558 */
										bgl_display_char(BgL_cz00_1644, BgL_pz00_30);
										{	/* Ieee/output.scm 578 */
											long BgL_arg1326z00_1665;

											BgL_arg1326z00_1665 =
												((long) CINT(BgL_iz00_1633) + ((long) 1));
											{
												obj_t BgL_iz00_4808;

												BgL_iz00_4808 = BINT(BgL_arg1326z00_1665);
												BgL_iz00_1633 = BgL_iz00_4808;
												goto BgL_zc3z04anonymousza31300ze3z87_1635;
											}
										}
									}
							}
						else
							{	/* Ieee/output.scm 556 */
								return BFALSE;
							}
					}
				}
			}
		}

	}



/* print-flat-list~0 */
	obj_t BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00(obj_t
		BgL_lz00_1675, obj_t BgL_pz00_1676, obj_t BgL_sepz00_1677)
	{
		{	/* Ieee/output.scm 446 */
		BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00:
			if (PAIRP(BgL_lz00_1675))
				{
					obj_t BgL_lz00_1681;

					BgL_lz00_1681 = BgL_lz00_1675;
				BgL_zc3z04anonymousza31334ze3z87_1682:
					{	/* Ieee/output.scm 437 */
						obj_t BgL_arg1335z00_1683;

						BgL_arg1335z00_1683 = CAR(((obj_t) BgL_lz00_1681));
						BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00
							(BgL_arg1335z00_1683, BgL_pz00_1676, BgL_sepz00_1677);
					}
					{	/* Ieee/output.scm 439 */
						bool_t BgL_test2868z00_4816;

						{	/* Ieee/output.scm 439 */
							obj_t BgL_tmpz00_4817;

							BgL_tmpz00_4817 = CDR(((obj_t) BgL_lz00_1681));
							BgL_test2868z00_4816 = PAIRP(BgL_tmpz00_4817);
						}
						if (BgL_test2868z00_4816)
							{	/* Ieee/output.scm 439 */
								bgl_display_obj(BgL_sepz00_1677, BgL_pz00_1676);
								{	/* Ieee/output.scm 441 */
									obj_t BgL_arg1339z00_1686;

									BgL_arg1339z00_1686 = CDR(((obj_t) BgL_lz00_1681));
									{
										obj_t BgL_lz00_4824;

										BgL_lz00_4824 = BgL_arg1339z00_1686;
										BgL_lz00_1681 = BgL_lz00_4824;
										goto BgL_zc3z04anonymousza31334ze3z87_1682;
									}
								}
							}
						else
							{	/* Ieee/output.scm 439 */
								if (NULLP(CDR(((obj_t) BgL_lz00_1681))))
									{	/* Ieee/output.scm 442 */
										return BFALSE;
									}
								else
									{	/* Ieee/output.scm 442 */
										bgl_display_string(BGl_string2624z00zz__r4_output_6_10_3z00,
											BgL_pz00_1676);
										{	/* Ieee/output.scm 444 */
											obj_t BgL_arg1342z00_1689;

											BgL_arg1342z00_1689 = CDR(((obj_t) BgL_lz00_1681));
											{
												obj_t BgL_lz00_4832;

												BgL_lz00_4832 = BgL_arg1342z00_1689;
												BgL_lz00_1675 = BgL_lz00_4832;
												goto
													BGl_printzd2flatzd2listze70ze7zz__r4_output_6_10_3z00;
											}
										}
									}
							}
					}
				}
			else
				{	/* Ieee/output.scm 435 */
					if (NULLP(BgL_lz00_1675))
						{	/* Ieee/output.scm 445 */
							return BFALSE;
						}
					else
						{	/* Ieee/output.scm 445 */
							return bgl_display_obj(BgL_lz00_1675, BgL_pz00_1676);
						}
				}
		}

	}



/* format */
	BGL_EXPORTED_DEF obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t
		BgL_fmtz00_33, obj_t BgL_objz00_34)
	{
		{	/* Ieee/output.scm 583 */
			{	/* Ieee/output.scm 584 */
				obj_t BgL_pz00_3023;

				{	/* Ieee/output.scm 584 */

					{	/* Ieee/output.scm 584 */

						BgL_pz00_3023 =
							BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
					}
				}
				BGl_xprintfz00zz__r4_output_6_10_3z00
					(BGl_symbol2625z00zz__r4_output_6_10_3z00, BgL_pz00_3023,
					BgL_fmtz00_33, BgL_objz00_34);
				return bgl_close_output_port(BgL_pz00_3023);
			}
		}

	}



/* &format */
	obj_t BGl_z62formatz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4073,
		obj_t BgL_fmtz00_4074, obj_t BgL_objz00_4075)
	{
		{	/* Ieee/output.scm 583 */
			{	/* Ieee/output.scm 584 */
				obj_t BgL_auxz00_4839;

				if (STRINGP(BgL_fmtz00_4074))
					{	/* Ieee/output.scm 584 */
						BgL_auxz00_4839 = BgL_fmtz00_4074;
					}
				else
					{
						obj_t BgL_auxz00_4842;

						BgL_auxz00_4842 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 20462)),
							BGl_string2627z00zz__r4_output_6_10_3z00,
							BGl_string2628z00zz__r4_output_6_10_3z00, BgL_fmtz00_4074);
						FAILURE(BgL_auxz00_4842, BFALSE, BFALSE);
					}
				return
					BGl_formatz00zz__r4_output_6_10_3z00(BgL_auxz00_4839,
					BgL_objz00_4075);
			}
		}

	}



/* printf */
	BGL_EXPORTED_DEF obj_t BGl_printfz00zz__r4_output_6_10_3z00(obj_t
		BgL_fmtz00_35, obj_t BgL_objz00_36)
	{
		{	/* Ieee/output.scm 591 */
			{	/* Ieee/output.scm 592 */
				obj_t BgL_arg1418z00_3026;

				{	/* Ieee/output.scm 592 */
					obj_t BgL_res2236z00_3028;

					{	/* Ieee/output.scm 592 */
						obj_t BgL_tmpz00_4847;

						BgL_tmpz00_4847 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2236z00_3028 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4847);
					}
					BgL_arg1418z00_3026 = BgL_res2236z00_3028;
				}
				return
					BGl_xprintfz00zz__r4_output_6_10_3z00
					(BGl_symbol2629z00zz__r4_output_6_10_3z00, BgL_arg1418z00_3026,
					BgL_fmtz00_35, BgL_objz00_36);
			}
		}

	}



/* &printf */
	obj_t BGl_z62printfz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4076,
		obj_t BgL_fmtz00_4077, obj_t BgL_objz00_4078)
	{
		{	/* Ieee/output.scm 591 */
			{	/* Ieee/output.scm 592 */
				obj_t BgL_auxz00_4851;

				if (STRINGP(BgL_fmtz00_4077))
					{	/* Ieee/output.scm 592 */
						BgL_auxz00_4851 = BgL_fmtz00_4077;
					}
				else
					{
						obj_t BgL_auxz00_4854;

						BgL_auxz00_4854 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 20828)),
							BGl_string2631z00zz__r4_output_6_10_3z00,
							BGl_string2628z00zz__r4_output_6_10_3z00, BgL_fmtz00_4077);
						FAILURE(BgL_auxz00_4854, BFALSE, BFALSE);
					}
				return
					BGl_printfz00zz__r4_output_6_10_3z00(BgL_auxz00_4851,
					BgL_objz00_4078);
			}
		}

	}



/* fprintf */
	BGL_EXPORTED_DEF obj_t BGl_fprintfz00zz__r4_output_6_10_3z00(obj_t
		BgL_portz00_37, obj_t BgL_fmtz00_38, obj_t BgL_objz00_39)
	{
		{	/* Ieee/output.scm 597 */
			return
				BGl_xprintfz00zz__r4_output_6_10_3z00
				(BGl_symbol2632z00zz__r4_output_6_10_3z00, BgL_portz00_37,
				BgL_fmtz00_38, BgL_objz00_39);
		}

	}



/* &fprintf */
	obj_t BGl_z62fprintfz62zz__r4_output_6_10_3z00(obj_t BgL_envz00_4079,
		obj_t BgL_portz00_4080, obj_t BgL_fmtz00_4081, obj_t BgL_objz00_4082)
	{
		{	/* Ieee/output.scm 597 */
			{	/* Ieee/output.scm 598 */
				obj_t BgL_auxz00_4867;
				obj_t BgL_auxz00_4860;

				if (STRINGP(BgL_fmtz00_4081))
					{	/* Ieee/output.scm 598 */
						BgL_auxz00_4867 = BgL_fmtz00_4081;
					}
				else
					{
						obj_t BgL_auxz00_4870;

						BgL_auxz00_4870 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 21119)),
							BGl_string2634z00zz__r4_output_6_10_3z00,
							BGl_string2628z00zz__r4_output_6_10_3z00, BgL_fmtz00_4081);
						FAILURE(BgL_auxz00_4870, BFALSE, BFALSE);
					}
				if (OUTPUT_PORTP(BgL_portz00_4080))
					{	/* Ieee/output.scm 598 */
						BgL_auxz00_4860 = BgL_portz00_4080;
					}
				else
					{
						obj_t BgL_auxz00_4863;

						BgL_auxz00_4863 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 21119)),
							BGl_string2634z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4080);
						FAILURE(BgL_auxz00_4863, BFALSE, BFALSE);
					}
				return
					BGl_fprintfz00zz__r4_output_6_10_3z00(BgL_auxz00_4860,
					BgL_auxz00_4867, BgL_objz00_4082);
			}
		}

	}



/* display-2 */
	BGL_EXPORTED_DEF obj_t bgl_display_obj(obj_t BgL_objz00_40,
		obj_t BgL_portz00_41)
	{
		{	/* Ieee/output.scm 757 */
		bgl_display_obj:
			if (STRINGP(BgL_objz00_40))
				{	/* Ieee/output.scm 758 */
					return bgl_display_string(BgL_objz00_40, BgL_portz00_41);
				}
			else
				{	/* Ieee/output.scm 758 */
					if (SYMBOLP(BgL_objz00_40))
						{	/* Ieee/output.scm 770 */
							obj_t BgL_arg1566z00_3035;

							{	/* Ieee/output.scm 770 */
								obj_t BgL_res2239z00_3037;

								BgL_res2239z00_3037 = SYMBOL_TO_STRING(BgL_objz00_40);
								BgL_arg1566z00_3035 = BgL_res2239z00_3037;
							}
							return bgl_display_string(BgL_arg1566z00_3035, BgL_portz00_41);
						}
					else
						{	/* Ieee/output.scm 758 */
							if (INTEGERP(BgL_objz00_40))
								{	/* Ieee/output.scm 758 */
									return bgl_display_fixnum(BgL_objz00_40, BgL_portz00_41);
								}
							else
								{	/* Ieee/output.scm 758 */
									if (CHARP(BgL_objz00_40))
										{	/* Ieee/output.scm 758 */
											unsigned char BgL_tmpz00_4887;

											BgL_tmpz00_4887 = CCHAR(BgL_objz00_40);
											return bgl_display_char(BgL_tmpz00_4887, BgL_portz00_41);
										}
									else
										{	/* Ieee/output.scm 758 */
											if (PAIRP(BgL_objz00_40))
												{	/* Ieee/output.scm 758 */
													return
														BGl_displayzd2pairzd2zz__r4_output_6_10_3z00
														(BgL_objz00_40, BgL_portz00_41);
												}
											else
												{	/* Ieee/output.scm 758 */
													if (NULLP(BgL_objz00_40))
														{	/* Ieee/output.scm 758 */
															return
																bgl_display_string
																(BGl_string2635z00zz__r4_output_6_10_3z00,
																BgL_portz00_41);
														}
													else
														{	/* Ieee/output.scm 758 */
															if ((BgL_objz00_40 == BFALSE))
																{	/* Ieee/output.scm 758 */
																	return
																		bgl_display_string
																		(BGl_string2636z00zz__r4_output_6_10_3z00,
																		BgL_portz00_41);
																}
															else
																{	/* Ieee/output.scm 758 */
																	if ((BgL_objz00_40 == BTRUE))
																		{	/* Ieee/output.scm 758 */
																			return
																				bgl_display_string
																				(BGl_string2637z00zz__r4_output_6_10_3z00,
																				BgL_portz00_41);
																		}
																	else
																		{	/* Ieee/output.scm 758 */
																			if ((BgL_objz00_40 == BUNSPEC))
																				{	/* Ieee/output.scm 758 */
																					return
																						bgl_display_string
																						(BGl_string2638z00zz__r4_output_6_10_3z00,
																						BgL_portz00_41);
																				}
																			else
																				{	/* Ieee/output.scm 758 */
																					if (ELONGP(BgL_objz00_40))
																						{	/* Ieee/output.scm 758 */
																							return
																								bgl_display_elong(BELONG_TO_LONG
																								(BgL_objz00_40),
																								BgL_portz00_41);
																						}
																					else
																						{	/* Ieee/output.scm 758 */
																							if (REALP(BgL_objz00_40))
																								{	/* Ieee/output.scm 881 */
																									obj_t BgL_arg1613z00_3056;

																									BgL_arg1613z00_3056 =
																										bgl_real_to_string
																										(REAL_TO_DOUBLE
																										(BgL_objz00_40));
																									return
																										bgl_display_string
																										(BgL_arg1613z00_3056,
																										BgL_portz00_41);
																								}
																							else
																								{	/* Ieee/output.scm 758 */
																									if (KEYWORDP(BgL_objz00_40))
																										{	/* Ieee/output.scm 758 */
																											bgl_display_char((
																													(unsigned char) ':'),
																												BgL_portz00_41);
																											{	/* Ieee/output.scm 863 */
																												obj_t
																													BgL_arg1612z00_3060;
																												{	/* Ieee/output.scm 863 */
																													obj_t
																														BgL_res2247z00_3062;
																													BgL_res2247z00_3062 =
																														KEYWORD_TO_STRING
																														(BgL_objz00_40);
																													BgL_arg1612z00_3060 =
																														BgL_res2247z00_3062;
																												}
																												return
																													bgl_display_string
																													(BgL_arg1612z00_3060,
																													BgL_portz00_41);
																											}
																										}
																									else
																										{	/* Ieee/output.scm 758 */
																											if (BGl_classzf3zf3zz__objectz00(BgL_objz00_40))
																												{	/* Ieee/output.scm 758 */
																													bgl_display_string
																														(BGl_string2639z00zz__r4_output_6_10_3z00,
																														BgL_portz00_41);
																													{	/* Ieee/output.scm 933 */
																														obj_t
																															BgL_arg1621z00_3065;
																														BgL_arg1621z00_3065
																															=
																															BGl_classzd2namezd2zz__objectz00
																															(BgL_objz00_40);
																														{	/* Ieee/output.scm 770 */
																															obj_t
																																BgL_arg1566z00_3070;
																															{	/* Ieee/output.scm 770 */
																																obj_t
																																	BgL_res2248z00_3072;
																																BgL_res2248z00_3072
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_arg1621z00_3065);
																																BgL_arg1566z00_3070
																																	=
																																	BgL_res2248z00_3072;
																															}
																															bgl_display_string
																																(BgL_arg1566z00_3070,
																																BgL_portz00_41);
																														}
																													}
																													return
																														bgl_display_string
																														(BGl_string2640z00zz__r4_output_6_10_3z00,
																														BgL_portz00_41);
																												}
																											else
																												{	/* Ieee/output.scm 758 */
																													if (VECTORP
																														(BgL_objz00_40))
																														{	/* Ieee/output.scm 758 */
																															return
																																BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00
																																(BgL_objz00_40,
																																BgL_portz00_41,
																																BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);
																														}
																													else
																														{	/* Ieee/output.scm 758 */
																															if (LLONGP
																																(BgL_objz00_40))
																																{	/* Ieee/output.scm 758 */
																																	return
																																		bgl_display_llong
																																		(BLLONG_TO_LLONG
																																		(BgL_objz00_40),
																																		BgL_portz00_41);
																																}
																															else
																																{	/* Ieee/output.scm 758 */
																																	if (UCS2_STRINGP(BgL_objz00_40))
																																		{	/* Ieee/output.scm 758 */
																																			return
																																				bgl_display_ucs2string
																																				(BgL_objz00_40,
																																				BgL_portz00_41);
																																		}
																																	else
																																		{	/* Ieee/output.scm 758 */
																																			if (STRUCTP(BgL_objz00_40))
																																				{	/* Ieee/output.scm 758 */
																																					return
																																						BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00
																																						(BgL_objz00_40,
																																						BgL_portz00_41,
																																						BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);
																																				}
																																			else
																																				{	/* Ieee/output.scm 758 */
																																					if (BGL_OBJECTP(BgL_objz00_40))
																																						{	/* Ieee/output.scm 758 */
																																							obj_t
																																								BgL_list1437z00_1815;
																																							BgL_list1437z00_1815
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_portz00_41,
																																								BNIL);
																																							return
																																								BGl_objectzd2displayzd2zz__objectz00
																																								(
																																								((BgL_objectz00_bglt) BgL_objz00_40), BgL_list1437z00_1815);
																																						}
																																					else
																																						{	/* Ieee/output.scm 758 */
																																							if (BGL_DATEP(BgL_objz00_40))
																																								{	/* Ieee/output.scm 830 */
																																									obj_t
																																										BgL_tmpz00_4946;
																																									BgL_tmpz00_4946
																																										=
																																										BGl_datezd2ze3stringz31zz__datez00
																																										(BgL_objz00_40);
																																									return
																																										bgl_display_string
																																										(BgL_tmpz00_4946,
																																										BgL_portz00_41);
																																								}
																																							else
																																								{	/* Ieee/output.scm 758 */
																																									bool_t
																																										BgL_test2894z00_4949;
																																									{	/* Ieee/output.scm 758 */
																																										bool_t
																																											BgL_res2255z00_3088;
																																										BgL_res2255z00_3088
																																											=
																																											BGL_MUTEXP
																																											(BgL_objz00_40);
																																										BgL_test2894z00_4949
																																											=
																																											BgL_res2255z00_3088;
																																									}
																																									if (BgL_test2894z00_4949)
																																										{	/* Ieee/output.scm 758 */
																																											bgl_display_string
																																												(BGl_string2641z00zz__r4_output_6_10_3z00,
																																												BgL_portz00_41);
																																											{	/* Ieee/output.scm 915 */
																																												obj_t
																																													BgL_arg1618z00_3089;
																																												{	/* Ieee/output.scm 915 */
																																													obj_t
																																														BgL_tmpz00_4952;
																																													BgL_tmpz00_4952
																																														=
																																														(
																																														(obj_t)
																																														BgL_objz00_40);
																																													BgL_arg1618z00_3089
																																														=
																																														BGL_MUTEX_NAME
																																														(BgL_tmpz00_4952);
																																												}
																																												bgl_display_obj
																																													(BgL_arg1618z00_3089,
																																													BgL_portz00_41);
																																											}
																																											bgl_display_string
																																												(BGl_string2642z00zz__r4_output_6_10_3z00,
																																												BgL_portz00_41);
																																											{	/* Ieee/output.scm 917 */
																																												obj_t
																																													BgL_arg1619z00_3090;
																																												BgL_arg1619z00_3090
																																													=
																																													BGL_MUTEX_BACKEND
																																													(BgL_objz00_40);
																																												bgl_display_obj
																																													(BgL_arg1619z00_3090,
																																													BgL_portz00_41);
																																											}
																																											return
																																												bgl_display_string
																																												(BGl_string2640z00zz__r4_output_6_10_3z00,
																																												BgL_portz00_41);
																																										}
																																									else
																																										{	/* Ieee/output.scm 758 */
																																											bool_t
																																												BgL_test2895z00_4960;
																																											{	/* Ieee/output.scm 758 */
																																												bool_t
																																													BgL_res2256z00_3098;
																																												BgL_res2256z00_3098
																																													=
																																													BGL_CONDVARP
																																													(BgL_objz00_40);
																																												BgL_test2895z00_4960
																																													=
																																													BgL_res2256z00_3098;
																																											}
																																											if (BgL_test2895z00_4960)
																																												{	/* Ieee/output.scm 758 */
																																													bgl_display_string
																																														(BGl_string2643z00zz__r4_output_6_10_3z00,
																																														BgL_portz00_41);
																																													{	/* Ieee/output.scm 925 */
																																														obj_t
																																															BgL_arg1620z00_3099;
																																														{	/* Ieee/output.scm 925 */
																																															obj_t
																																																BgL_tmpz00_4963;
																																															BgL_tmpz00_4963
																																																=
																																																(
																																																(obj_t)
																																																BgL_objz00_40);
																																															BgL_arg1620z00_3099
																																																=
																																																BGL_CONDVAR_NAME
																																																(BgL_tmpz00_4963);
																																														}
																																														bgl_display_obj
																																															(BgL_arg1620z00_3099,
																																															BgL_portz00_41);
																																													}
																																													return
																																														bgl_display_string
																																														(BGl_string2640z00zz__r4_output_6_10_3z00,
																																														BgL_portz00_41);
																																												}
																																											else
																																												{	/* Ieee/output.scm 758 */
																																													if (UCS2P(BgL_objz00_40))
																																														{	/* Ieee/output.scm 758 */
																																															return
																																																bgl_display_ucs2
																																																(BgL_objz00_40,
																																																BgL_portz00_41);
																																														}
																																													else
																																														{	/* Ieee/output.scm 758 */
																																															if (CELLP(BgL_objz00_40))
																																																{	/* Ieee/output.scm 758 */
																																																	bgl_display_string
																																																		(BGl_string2644z00zz__r4_output_6_10_3z00,
																																																		BgL_portz00_41);
																																																	bgl_display_obj
																																																		(CELL_REF
																																																		(BgL_objz00_40),
																																																		BgL_portz00_41);
																																																	return
																																																		bgl_display_string
																																																		(BGl_string2640z00zz__r4_output_6_10_3z00,
																																																		BgL_portz00_41);
																																																}
																																															else
																																																{	/* Ieee/output.scm 758 */
																																																	bool_t
																																																		BgL_test2898z00_4977;
																																																	{	/* Ieee/output.scm 758 */
																																																		bool_t
																																																			BgL_res2258z00_3112;
																																																		BgL_res2258z00_3112
																																																			=
																																																			EOF_OBJECTP
																																																			(BgL_objz00_40);
																																																		BgL_test2898z00_4977
																																																			=
																																																			BgL_res2258z00_3112;
																																																	}
																																																	if (BgL_test2898z00_4977)
																																																		{	/* Ieee/output.scm 758 */
																																																			return
																																																				bgl_display_string
																																																				(BGl_string2645z00zz__r4_output_6_10_3z00,
																																																				BgL_portz00_41);
																																																		}
																																																	else
																																																		{	/* Ieee/output.scm 758 */
																																																			if ((BgL_objz00_40 == (BOPTIONAL)))
																																																				{	/* Ieee/output.scm 758 */
																																																					return
																																																						bgl_display_string
																																																						(BGl_string2646z00zz__r4_output_6_10_3z00,
																																																						BgL_portz00_41);
																																																				}
																																																			else
																																																				{	/* Ieee/output.scm 758 */
																																																					if ((BgL_objz00_40 == (BREST)))
																																																						{	/* Ieee/output.scm 758 */
																																																							return
																																																								bgl_display_string
																																																								(BGl_string2647z00zz__r4_output_6_10_3z00,
																																																								BgL_portz00_41);
																																																						}
																																																					else
																																																						{	/* Ieee/output.scm 758 */
																																																							if ((BgL_objz00_40 == (BKEY)))
																																																								{	/* Ieee/output.scm 758 */
																																																									return
																																																										bgl_display_string
																																																										(BGl_string2648z00zz__r4_output_6_10_3z00,
																																																										BgL_portz00_41);
																																																								}
																																																							else
																																																								{	/* Ieee/output.scm 758 */
																																																									if (PROCEDUREP(BgL_objz00_40))
																																																										{	/* Ieee/output.scm 758 */
																																																											return
																																																												bgl_write_procedure
																																																												(BgL_objz00_40,
																																																												BgL_portz00_41);
																																																										}
																																																									else
																																																										{	/* Ieee/output.scm 758 */
																																																											if (OUTPUT_PORTP(BgL_objz00_40))
																																																												{	/* Ieee/output.scm 758 */
																																																													if (BGL_OUTPUT_STRING_PORTP(BgL_objz00_40))
																																																														{	/* Ieee/output.scm 758 */
																																																															return
																																																																bgl_display_string
																																																																(BGl_string2649z00zz__r4_output_6_10_3z00,
																																																																BgL_portz00_41);
																																																														}
																																																													else
																																																														{	/* Ieee/output.scm 758 */
																																																															if (BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_40))
																																																																{	/* Ieee/output.scm 758 */
																																																																	return
																																																																		bgl_display_string
																																																																		(BGl_string2650z00zz__r4_output_6_10_3z00,
																																																																		BgL_portz00_41);
																																																																}
																																																															else
																																																																{	/* Ieee/output.scm 758 */
																																																																	return
																																																																		bgl_write_output_port
																																																																		(BgL_objz00_40,
																																																																		BgL_portz00_41);
																																																																}
																																																														}
																																																												}
																																																											else
																																																												{	/* Ieee/output.scm 758 */
																																																													if (INPUT_PORTP(BgL_objz00_40))
																																																														{	/* Ieee/output.scm 758 */
																																																															return
																																																																bgl_write_input_port
																																																																(BgL_objz00_40,
																																																																BgL_portz00_41);
																																																														}
																																																													else
																																																														{	/* Ieee/output.scm 758 */
																																																															if (BIGNUMP(BgL_objz00_40))
																																																																{	/* Ieee/output.scm 758 */
																																																																	return
																																																																		bgl_display_bignum
																																																																		(BgL_objz00_40,
																																																																		BgL_portz00_41);
																																																																}
																																																															else
																																																																{	/* Ieee/output.scm 758 */
																																																																	if (BGL_HVECTORP(BgL_objz00_40))
																																																																		{	/* Ieee/output.scm 758 */
																																																																			return
																																																																				BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00
																																																																				(BgL_objz00_40,
																																																																				BgL_portz00_41,
																																																																				BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);
																																																																		}
																																																																	else
																																																																		{	/* Ieee/output.scm 758 */
																																																																			if (TVECTORP(BgL_objz00_40))
																																																																				{	/* Ieee/output.scm 758 */
																																																																					return
																																																																						BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00
																																																																						(BgL_objz00_40,
																																																																						BgL_portz00_41,
																																																																						BGl_displayzd22zd2envz00zz__r4_output_6_10_3z00);
																																																																				}
																																																																			else
																																																																				{	/* Ieee/output.scm 758 */
																																																																					if (BGL_WEAKPTRP(BgL_objz00_40))
																																																																						{	/* Ieee/output.scm 1049 */
																																																																							obj_t
																																																																								BgL_dataz00_3129;
																																																																							BgL_dataz00_3129
																																																																								=
																																																																								weakptr_data
																																																																								(BgL_objz00_40);
																																																																							bgl_display_string
																																																																								(BGl_string2651z00zz__r4_output_6_10_3z00,
																																																																								BgL_portz00_41);
																																																																							bgl_display_obj
																																																																								(BgL_dataz00_3129,
																																																																								BgL_portz00_41);
																																																																							return
																																																																								bgl_display_char
																																																																								(
																																																																								((unsigned char) '>'), BgL_portz00_41);
																																																																						}
																																																																					else
																																																																						{	/* Ieee/output.scm 758 */
																																																																							if (FOREIGNP(BgL_objz00_40))
																																																																								{	/* Ieee/output.scm 758 */
																																																																									return
																																																																										bgl_write_foreign
																																																																										(BgL_objz00_40,
																																																																										BgL_portz00_41);
																																																																								}
																																																																							else
																																																																								{	/* Ieee/output.scm 758 */
																																																																									if (PROCESSP(BgL_objz00_40))
																																																																										{	/* Ieee/output.scm 758 */
																																																																											return
																																																																												bgl_write_process
																																																																												(BgL_objz00_40,
																																																																												BgL_portz00_41);
																																																																										}
																																																																									else
																																																																										{	/* Ieee/output.scm 758 */
																																																																											if (SOCKETP(BgL_objz00_40))
																																																																												{	/* Ieee/output.scm 758 */
																																																																													return
																																																																														bgl_write_socket
																																																																														(BgL_objz00_40,
																																																																														BgL_portz00_41);
																																																																												}
																																																																											else
																																																																												{	/* Ieee/output.scm 758 */
																																																																													bool_t
																																																																														BgL_test2914z00_5028;
																																																																													{	/* Ieee/output.scm 758 */
																																																																														bool_t
																																																																															BgL_res2266z00_3134;
																																																																														BgL_res2266z00_3134
																																																																															=
																																																																															BGL_DATAGRAM_SOCKETP
																																																																															(BgL_objz00_40);
																																																																														BgL_test2914z00_5028
																																																																															=
																																																																															BgL_res2266z00_3134;
																																																																													}
																																																																													if (BgL_test2914z00_5028)
																																																																														{	/* Ieee/output.scm 758 */
																																																																															return
																																																																																bgl_write_datagram_socket
																																																																																(BgL_objz00_40,
																																																																																BgL_portz00_41);
																																																																														}
																																																																													else
																																																																														{	/* Ieee/output.scm 758 */
																																																																															bool_t
																																																																																BgL_test2915z00_5031;
																																																																															{	/* Ieee/output.scm 758 */
																																																																																bool_t
																																																																																	BgL_res2267z00_3135;
																																																																																BgL_res2267z00_3135
																																																																																	=
																																																																																	BGL_REGEXPP
																																																																																	(BgL_objz00_40);
																																																																																BgL_test2915z00_5031
																																																																																	=
																																																																																	BgL_res2267z00_3135;
																																																																															}
																																																																															if (BgL_test2915z00_5031)
																																																																																{	/* Ieee/output.scm 758 */
																																																																																	return
																																																																																		bgl_write_regexp
																																																																																		(BgL_objz00_40,
																																																																																		BgL_portz00_41);
																																																																																}
																																																																															else
																																																																																{	/* Ieee/output.scm 758 */
																																																																																	bool_t
																																																																																		BgL_test2916z00_5034;
																																																																																	{	/* Ieee/output.scm 758 */
																																																																																		bool_t
																																																																																			BgL_res2268z00_3136;
																																																																																		BgL_res2268z00_3136
																																																																																			=
																																																																																			BGL_MMAPP
																																																																																			(BgL_objz00_40);
																																																																																		BgL_test2916z00_5034
																																																																																			=
																																																																																			BgL_res2268z00_3136;
																																																																																	}
																																																																																	if (BgL_test2916z00_5034)
																																																																																		{	/* Ieee/output.scm 758 */
																																																																																			return
																																																																																				bgl_write_mmap
																																																																																				(BgL_objz00_40,
																																																																																				BgL_portz00_41);
																																																																																		}
																																																																																	else
																																																																																		{	/* Ieee/output.scm 758 */
																																																																																			bool_t
																																																																																				BgL_test2917z00_5037;
																																																																																			{	/* Ieee/output.scm 758 */
																																																																																				bool_t
																																																																																					BgL_res2269z00_3137;
																																																																																				BgL_res2269z00_3137
																																																																																					=
																																																																																					BGL_SEMAPHOREP
																																																																																					(BgL_objz00_40);
																																																																																				BgL_test2917z00_5037
																																																																																					=
																																																																																					BgL_res2269z00_3137;
																																																																																			}
																																																																																			if (BgL_test2917z00_5037)
																																																																																				{	/* Ieee/output.scm 758 */
																																																																																					return
																																																																																						bgl_write_semaphore
																																																																																						(BgL_objz00_40,
																																																																																						BgL_portz00_41);
																																																																																				}
																																																																																			else
																																																																																				{	/* Ieee/output.scm 758 */
																																																																																					if (OPAQUEP(BgL_objz00_40))
																																																																																						{	/* Ieee/output.scm 758 */
																																																																																							return
																																																																																								bgl_write_opaque
																																																																																								(BgL_objz00_40,
																																																																																								BgL_portz00_41);
																																																																																						}
																																																																																					else
																																																																																						{	/* Ieee/output.scm 758 */
																																																																																							if (CUSTOMP(BgL_objz00_40))
																																																																																								{	/* Ieee/output.scm 758 */
																																																																																									return
																																																																																										bgl_write_custom
																																																																																										(BgL_objz00_40,
																																																																																										BgL_portz00_41);
																																																																																								}
																																																																																							else
																																																																																								{	/* Ieee/output.scm 758 */
																																																																																									if (BINARY_PORTP(BgL_objz00_40))
																																																																																										{	/* Ieee/output.scm 758 */
																																																																																											return
																																																																																												bgl_write_binary_port
																																																																																												(BgL_objz00_40,
																																																																																												BgL_portz00_41);
																																																																																										}
																																																																																									else
																																																																																										{	/* Ieee/output.scm 758 */
																																																																																											if (BGL_DYNAMIC_ENVP(BgL_objz00_40))
																																																																																												{	/* Ieee/output.scm 758 */
																																																																																													return
																																																																																														bgl_write_dynamic_env
																																																																																														(BgL_objz00_40,
																																																																																														BgL_portz00_41);
																																																																																												}
																																																																																											else
																																																																																												{	/* Ieee/output.scm 758 */
																																																																																													if (BGL_INT8P(BgL_objz00_40))
																																																																																														{	/* Ieee/output.scm 758 */
																																																																																															long
																																																																																																BgL_arg1468z00_1846;
																																																																																															{	/* Ieee/output.scm 758 */
																																																																																																long
																																																																																																	BgL_res2276z00_3147;
																																																																																																{	/* Ieee/output.scm 758 */
																																																																																																	int8_t
																																																																																																		BgL_xz00_3143;
																																																																																																	BgL_xz00_3143
																																																																																																		=
																																																																																																		BGL_BINT8_TO_INT8
																																																																																																		(BgL_objz00_40);
																																																																																																	{	/* Ieee/output.scm 758 */
																																																																																																		long
																																																																																																			BgL_arg1949z00_3144;
																																																																																																		BgL_arg1949z00_3144
																																																																																																			=
																																																																																																			(long)
																																																																																																			(BgL_xz00_3143);
																																																																																																		{	/* Ieee/output.scm 758 */
																																																																																																			long
																																																																																																				BgL_res2275z00_3146;
																																																																																																			BgL_res2275z00_3146
																																																																																																				=
																																																																																																				(long)
																																																																																																				(BgL_arg1949z00_3144);
																																																																																																			BgL_res2276z00_3147
																																																																																																				=
																																																																																																				BgL_res2275z00_3146;
																																																																																																}}}
																																																																																																BgL_arg1468z00_1846
																																																																																																	=
																																																																																																	BgL_res2276z00_3147;
																																																																																															}
																																																																																															{
																																																																																																obj_t
																																																																																																	BgL_objz00_5057;
																																																																																																BgL_objz00_5057
																																																																																																	=
																																																																																																	BINT
																																																																																																	(BgL_arg1468z00_1846);
																																																																																																BgL_objz00_40
																																																																																																	=
																																																																																																	BgL_objz00_5057;
																																																																																																goto
																																																																																																	bgl_display_obj;
																																																																																															}
																																																																																														}
																																																																																													else
																																																																																														{	/* Ieee/output.scm 758 */
																																																																																															if (BGL_UINT8P(BgL_objz00_40))
																																																																																																{	/* Ieee/output.scm 758 */
																																																																																																	long
																																																																																																		BgL_arg1470z00_1848;
																																																																																																	{	/* Ieee/output.scm 758 */
																																																																																																		long
																																																																																																			BgL_res2279z00_3153;
																																																																																																		{	/* Ieee/output.scm 758 */
																																																																																																			uint8_t
																																																																																																				BgL_xz00_3149;
																																																																																																			BgL_xz00_3149
																																																																																																				=
																																																																																																				BGL_BUINT8_TO_UINT8
																																																																																																				(BgL_objz00_40);
																																																																																																			{	/* Ieee/output.scm 758 */
																																																																																																				long
																																																																																																					BgL_arg1948z00_3150;
																																																																																																				BgL_arg1948z00_3150
																																																																																																					=
																																																																																																					(long)
																																																																																																					(BgL_xz00_3149);
																																																																																																				{	/* Ieee/output.scm 758 */
																																																																																																					long
																																																																																																						BgL_res2278z00_3152;
																																																																																																					BgL_res2278z00_3152
																																																																																																						=
																																																																																																						(long)
																																																																																																						(BgL_arg1948z00_3150);
																																																																																																					BgL_res2279z00_3153
																																																																																																						=
																																																																																																						BgL_res2278z00_3152;
																																																																																																		}}}
																																																																																																		BgL_arg1470z00_1848
																																																																																																			=
																																																																																																			BgL_res2279z00_3153;
																																																																																																	}
																																																																																																	{
																																																																																																		obj_t
																																																																																																			BgL_objz00_5064;
																																																																																																		BgL_objz00_5064
																																																																																																			=
																																																																																																			BINT
																																																																																																			(BgL_arg1470z00_1848);
																																																																																																		BgL_objz00_40
																																																																																																			=
																																																																																																			BgL_objz00_5064;
																																																																																																		goto
																																																																																																			bgl_display_obj;
																																																																																																	}
																																																																																																}
																																																																																															else
																																																																																																{	/* Ieee/output.scm 758 */
																																																																																																	if (BGL_INT16P(BgL_objz00_40))
																																																																																																		{	/* Ieee/output.scm 758 */
																																																																																																			long
																																																																																																				BgL_arg1472z00_1850;
																																																																																																			{	/* Ieee/output.scm 758 */
																																																																																																				long
																																																																																																					BgL_res2282z00_3159;
																																																																																																				{	/* Ieee/output.scm 758 */
																																																																																																					int16_t
																																																																																																						BgL_xz00_3155;
																																																																																																					BgL_xz00_3155
																																																																																																						=
																																																																																																						BGL_BINT16_TO_INT16
																																																																																																						(BgL_objz00_40);
																																																																																																					{	/* Ieee/output.scm 758 */
																																																																																																						long
																																																																																																							BgL_arg1947z00_3156;
																																																																																																						BgL_arg1947z00_3156
																																																																																																							=
																																																																																																							(long)
																																																																																																							(BgL_xz00_3155);
																																																																																																						{	/* Ieee/output.scm 758 */
																																																																																																							long
																																																																																																								BgL_res2281z00_3158;
																																																																																																							BgL_res2281z00_3158
																																																																																																								=
																																																																																																								(long)
																																																																																																								(BgL_arg1947z00_3156);
																																																																																																							BgL_res2282z00_3159
																																																																																																								=
																																																																																																								BgL_res2281z00_3158;
																																																																																																				}}}
																																																																																																				BgL_arg1472z00_1850
																																																																																																					=
																																																																																																					BgL_res2282z00_3159;
																																																																																																			}
																																																																																																			{
																																																																																																				obj_t
																																																																																																					BgL_objz00_5071;
																																																																																																				BgL_objz00_5071
																																																																																																					=
																																																																																																					BINT
																																																																																																					(BgL_arg1472z00_1850);
																																																																																																				BgL_objz00_40
																																																																																																					=
																																																																																																					BgL_objz00_5071;
																																																																																																				goto
																																																																																																					bgl_display_obj;
																																																																																																			}
																																																																																																		}
																																																																																																	else
																																																																																																		{	/* Ieee/output.scm 758 */
																																																																																																			if (BGL_UINT16P(BgL_objz00_40))
																																																																																																				{	/* Ieee/output.scm 758 */
																																																																																																					long
																																																																																																						BgL_arg1474z00_1852;
																																																																																																					{	/* Ieee/output.scm 758 */
																																																																																																						long
																																																																																																							BgL_res2285z00_3165;
																																																																																																						{	/* Ieee/output.scm 758 */
																																																																																																							uint16_t
																																																																																																								BgL_xz00_3161;
																																																																																																							BgL_xz00_3161
																																																																																																								=
																																																																																																								BGL_BUINT16_TO_UINT16
																																																																																																								(BgL_objz00_40);
																																																																																																							{	/* Ieee/output.scm 758 */
																																																																																																								long
																																																																																																									BgL_arg1946z00_3162;
																																																																																																								BgL_arg1946z00_3162
																																																																																																									=
																																																																																																									(long)
																																																																																																									(BgL_xz00_3161);
																																																																																																								{	/* Ieee/output.scm 758 */
																																																																																																									long
																																																																																																										BgL_res2284z00_3164;
																																																																																																									BgL_res2284z00_3164
																																																																																																										=
																																																																																																										(long)
																																																																																																										(BgL_arg1946z00_3162);
																																																																																																									BgL_res2285z00_3165
																																																																																																										=
																																																																																																										BgL_res2284z00_3164;
																																																																																																						}}}
																																																																																																						BgL_arg1474z00_1852
																																																																																																							=
																																																																																																							BgL_res2285z00_3165;
																																																																																																					}
																																																																																																					{
																																																																																																						obj_t
																																																																																																							BgL_objz00_5078;
																																																																																																						BgL_objz00_5078
																																																																																																							=
																																																																																																							BINT
																																																																																																							(BgL_arg1474z00_1852);
																																																																																																						BgL_objz00_40
																																																																																																							=
																																																																																																							BgL_objz00_5078;
																																																																																																						goto
																																																																																																							bgl_display_obj;
																																																																																																					}
																																																																																																				}
																																																																																																			else
																																																																																																				{	/* Ieee/output.scm 758 */
																																																																																																					if (BGL_INT32P(BgL_objz00_40))
																																																																																																						{	/* Ieee/output.scm 758 */
																																																																																																							long
																																																																																																								BgL_arg1476z00_1854;
																																																																																																							{	/* Ieee/output.scm 758 */
																																																																																																								long
																																																																																																									BgL_res2287z00_3168;
																																																																																																								{	/* Ieee/output.scm 758 */
																																																																																																									int32_t
																																																																																																										BgL_nz00_3167;
																																																																																																									BgL_nz00_3167
																																																																																																										=
																																																																																																										BGL_BINT32_TO_INT32
																																																																																																										(BgL_objz00_40);
																																																																																																									BgL_res2287z00_3168
																																																																																																										=
																																																																																																										(long)
																																																																																																										(BgL_nz00_3167);
																																																																																																								}
																																																																																																								BgL_arg1476z00_1854
																																																																																																									=
																																																																																																									BgL_res2287z00_3168;
																																																																																																							}
																																																																																																							{
																																																																																																								obj_t
																																																																																																									BgL_objz00_5084;
																																																																																																								BgL_objz00_5084
																																																																																																									=
																																																																																																									make_belong
																																																																																																									(BgL_arg1476z00_1854);
																																																																																																								BgL_objz00_40
																																																																																																									=
																																																																																																									BgL_objz00_5084;
																																																																																																								goto
																																																																																																									bgl_display_obj;
																																																																																																							}
																																																																																																						}
																																																																																																					else
																																																																																																						{	/* Ieee/output.scm 758 */
																																																																																																							if (BGL_UINT32P(BgL_objz00_40))
																																																																																																								{	/* Ieee/output.scm 758 */
																																																																																																									BGL_LONGLONG_T
																																																																																																										BgL_arg1478z00_1856;
																																																																																																									{	/* Ieee/output.scm 758 */
																																																																																																										BGL_LONGLONG_T
																																																																																																											BgL_res2289z00_3171;
																																																																																																										{	/* Ieee/output.scm 758 */
																																																																																																											uint32_t
																																																																																																												BgL_nz00_3170;
																																																																																																											BgL_nz00_3170
																																																																																																												=
																																																																																																												BGL_BUINT32_TO_UINT32
																																																																																																												(BgL_objz00_40);
																																																																																																											BgL_res2289z00_3171
																																																																																																												=
																																																																																																												(BGL_LONGLONG_T)
																																																																																																												(BgL_nz00_3170);
																																																																																																										}
																																																																																																										BgL_arg1478z00_1856
																																																																																																											=
																																																																																																											BgL_res2289z00_3171;
																																																																																																									}
																																																																																																									{
																																																																																																										obj_t
																																																																																																											BgL_objz00_5090;
																																																																																																										BgL_objz00_5090
																																																																																																											=
																																																																																																											make_bllong
																																																																																																											(BgL_arg1478z00_1856);
																																																																																																										BgL_objz00_40
																																																																																																											=
																																																																																																											BgL_objz00_5090;
																																																																																																										goto
																																																																																																											bgl_display_obj;
																																																																																																									}
																																																																																																								}
																																																																																																							else
																																																																																																								{	/* Ieee/output.scm 758 */
																																																																																																									if (BGL_INT64P(BgL_objz00_40))
																																																																																																										{	/* Ieee/output.scm 758 */
																																																																																																											BGL_LONGLONG_T
																																																																																																												BgL_arg1480z00_1858;
																																																																																																											{	/* Ieee/output.scm 758 */
																																																																																																												BGL_LONGLONG_T
																																																																																																													BgL_res2291z00_3174;
																																																																																																												{	/* Ieee/output.scm 758 */
																																																																																																													int64_t
																																																																																																														BgL_nz00_3173;
																																																																																																													BgL_nz00_3173
																																																																																																														=
																																																																																																														BGL_BINT64_TO_INT64
																																																																																																														(BgL_objz00_40);
																																																																																																													BgL_res2291z00_3174
																																																																																																														=
																																																																																																														(BGL_LONGLONG_T)
																																																																																																														(BgL_nz00_3173);
																																																																																																												}
																																																																																																												BgL_arg1480z00_1858
																																																																																																													=
																																																																																																													BgL_res2291z00_3174;
																																																																																																											}
																																																																																																											{
																																																																																																												obj_t
																																																																																																													BgL_objz00_5096;
																																																																																																												BgL_objz00_5096
																																																																																																													=
																																																																																																													make_bllong
																																																																																																													(BgL_arg1480z00_1858);
																																																																																																												BgL_objz00_40
																																																																																																													=
																																																																																																													BgL_objz00_5096;
																																																																																																												goto
																																																																																																													bgl_display_obj;
																																																																																																											}
																																																																																																										}
																																																																																																									else
																																																																																																										{	/* Ieee/output.scm 758 */
																																																																																																											if (BGL_UINT64P(BgL_objz00_40))
																																																																																																												{	/* Ieee/output.scm 758 */
																																																																																																													{	/* Ieee/output.scm 758 */
																																																																																																														uint64_t
																																																																																																															BgL_vz00_1860;
																																																																																																														{	/* Ieee/output.scm 758 */
																																																																																																															uint64_t
																																																																																																																BgL_arg1484z00_1863;
																																																																																																															{	/* Ieee/output.scm 758 */
																																																																																																																uint64_t
																																																																																																																	BgL_res2293z00_3176;
																																																																																																																BgL_res2293z00_3176
																																																																																																																	=
																																																																																																																	(uint64_t)
																																																																																																																	(
																																																																																																																	((long) 10));
																																																																																																																BgL_arg1484z00_1863
																																																																																																																	=
																																																																																																																	BgL_res2293z00_3176;
																																																																																																															}
																																																																																																															{	/* Ieee/output.scm 758 */
																																																																																																																uint64_t
																																																																																																																	BgL_za71za7_3177;
																																																																																																																BgL_za71za7_3177
																																																																																																																	=
																																																																																																																	BGL_BINT64_TO_INT64
																																																																																																																	(BgL_objz00_40);
																																																																																																																BgL_vz00_1860
																																																																																																																	=
																																																																																																																	(BgL_za71za7_3177
																																																																																																																	/
																																																																																																																	BgL_arg1484z00_1863);
																																																																																																														}}
																																																																																																														if ((BgL_vz00_1860 > (uint64_t) (0)))
																																																																																																															{	/* Ieee/output.scm 758 */
																																																																																																																BGL_LONGLONG_T
																																																																																																																	BgL_arg1483z00_1862;
																																																																																																																{	/* Ieee/output.scm 758 */
																																																																																																																	BGL_LONGLONG_T
																																																																																																																		BgL_res2296z00_3184;
																																																																																																																	BgL_res2296z00_3184
																																																																																																																		=
																																																																																																																		(BGL_LONGLONG_T)
																																																																																																																		(BgL_vz00_1860);
																																																																																																																	BgL_arg1483z00_1862
																																																																																																																		=
																																																																																																																		BgL_res2296z00_3184;
																																																																																																																}
																																																																																																																bgl_display_obj
																																																																																																																	(make_bllong
																																																																																																																	(BgL_arg1483z00_1862),
																																																																																																																	BgL_portz00_41);
																																																																																																															}
																																																																																																														else
																																																																																																															{	/* Ieee/output.scm 758 */
																																																																																																																BFALSE;
																																																																																																															}
																																																																																																													}
																																																																																																													{	/* Ieee/output.scm 758 */
																																																																																																														long
																																																																																																															BgL_arg1485z00_1864;
																																																																																																														{	/* Ieee/output.scm 758 */
																																																																																																															uint64_t
																																																																																																																BgL_arg1486z00_1865;
																																																																																																															{	/* Ieee/output.scm 758 */
																																																																																																																uint64_t
																																																																																																																	BgL_arg1487z00_1866;
																																																																																																																{	/* Ieee/output.scm 758 */
																																																																																																																	uint64_t
																																																																																																																		BgL_res2297z00_3185;
																																																																																																																	BgL_res2297z00_3185
																																																																																																																		=
																																																																																																																		(uint64_t)
																																																																																																																		(
																																																																																																																		((long) 10));
																																																																																																																	BgL_arg1487z00_1866
																																																																																																																		=
																																																																																																																		BgL_res2297z00_3185;
																																																																																																																}
																																																																																																																{	/* Ieee/output.scm 758 */
																																																																																																																	uint64_t
																																																																																																																		BgL_res2298z00_3188;
																																																																																																																	{	/* Ieee/output.scm 758 */
																																																																																																																		uint64_t
																																																																																																																			BgL_n1z00_3186;
																																																																																																																		BgL_n1z00_3186
																																																																																																																			=
																																																																																																																			BGL_BINT64_TO_INT64
																																																																																																																			(BgL_objz00_40);
																																																																																																																		{	/* Ieee/output.scm 758 */
																																																																																																																			int64_t
																																																																																																																				BgL_tmpz00_5110;
																																																																																																																			BgL_tmpz00_5110
																																																																																																																				=
																																																																																																																				(int64_t)
																																																																																																																				(BgL_arg1487z00_1866);
																																																																																																																			BgL_res2298z00_3188
																																																																																																																				=
																																																																																																																				(BgL_n1z00_3186
																																																																																																																				%
																																																																																																																				BgL_tmpz00_5110);
																																																																																																																	}}
																																																																																																																	BgL_arg1486z00_1865
																																																																																																																		=
																																																																																																																		BgL_res2298z00_3188;
																																																																																																															}}
																																																																																																															{	/* Ieee/output.scm 758 */
																																																																																																																long
																																																																																																																	BgL_res2300z00_3193;
																																																																																																																{	/* Ieee/output.scm 758 */
																																																																																																																	long
																																																																																																																		BgL_arg1943z00_3190;
																																																																																																																	BgL_arg1943z00_3190
																																																																																																																		=
																																																																																																																		(long)
																																																																																																																		(BgL_arg1486z00_1865);
																																																																																																																	{	/* Ieee/output.scm 758 */
																																																																																																																		long
																																																																																																																			BgL_res2299z00_3192;
																																																																																																																		BgL_res2299z00_3192
																																																																																																																			=
																																																																																																																			(long)
																																																																																																																			(BgL_arg1943z00_3190);
																																																																																																																		BgL_res2300z00_3193
																																																																																																																			=
																																																																																																																			BgL_res2299z00_3192;
																																																																																																																}}
																																																																																																																BgL_arg1485z00_1864
																																																																																																																	=
																																																																																																																	BgL_res2300z00_3193;
																																																																																																														}}
																																																																																																														{
																																																																																																															obj_t
																																																																																																																BgL_objz00_5115;
																																																																																																															BgL_objz00_5115
																																																																																																																=
																																																																																																																BINT
																																																																																																																(BgL_arg1485z00_1864);
																																																																																																															BgL_objz00_40
																																																																																																																=
																																																																																																																BgL_objz00_5115;
																																																																																																															goto
																																																																																																																bgl_display_obj;
																																																																																																														}
																																																																																																													}
																																																																																																												}
																																																																																																											else
																																																																																																												{	/* Ieee/output.scm 758 */
																																																																																																													if (CNSTP(BgL_objz00_40))
																																																																																																														{	/* Ieee/output.scm 758 */
																																																																																																															return
																																																																																																																bgl_write_cnst
																																																																																																																(BgL_objz00_40,
																																																																																																																BgL_portz00_41);
																																																																																																														}
																																																																																																													else
																																																																																																														{	/* Ieee/output.scm 758 */
																																																																																																															return
																																																																																																																bgl_write_unknown
																																																																																																																(BgL_objz00_40,
																																																																																																																BgL_portz00_41);
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



/* &display-2 */
	obj_t BGl_z62displayzd22zb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4083,
		obj_t BgL_objz00_4084, obj_t BgL_portz00_4085)
	{
		{	/* Ieee/output.scm 757 */
			return bgl_display_obj(BgL_objz00_4084, BgL_portz00_4085);
		}

	}



/* write-2 */
	BGL_EXPORTED_DEF obj_t bgl_write_obj(obj_t BgL_objz00_42,
		obj_t BgL_portz00_43)
	{
		{	/* Ieee/output.scm 763 */
			if (STRINGP(BgL_objz00_42))
				{	/* Ieee/output.scm 764 */
					if (BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00())
						{	/* Ieee/output.scm 851 */
							obj_t BgL_strz00_3199;

							BgL_strz00_3199 = string_for_read(BgL_objz00_42);
							{	/* Ieee/output.scm 852 */
								obj_t BgL_escz00_3200;

								{	/* Ieee/output.scm 853 */
									int BgL_tmpz00_5127;

									BgL_tmpz00_5127 = (int) (((long) 1));
									BgL_escz00_3200 = BGL_MVALUES_VAL(BgL_tmpz00_5127);
								}
								return
									bgl_write_string(BgL_strz00_3199,
									CBOOL(BgL_escz00_3200), BgL_portz00_43);
							}
						}
					else
						{	/* Ieee/output.scm 848 */
							return
								bgl_write_string(string_for_read(BgL_objz00_42), ((bool_t) 0),
								BgL_portz00_43);
						}
				}
			else
				{	/* Ieee/output.scm 764 */
					if (SYMBOLP(BgL_objz00_42))
						{	/* Ieee/output.scm 764 */
							return
								BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(BgL_objz00_42,
								BgL_portz00_43);
						}
					else
						{	/* Ieee/output.scm 764 */
							if (INTEGERP(BgL_objz00_42))
								{	/* Ieee/output.scm 764 */
									return bgl_display_fixnum(BgL_objz00_42, BgL_portz00_43);
								}
							else
								{	/* Ieee/output.scm 764 */
									if (CHARP(BgL_objz00_42))
										{	/* Ieee/output.scm 764 */
											return bgl_write_char(BgL_objz00_42, BgL_portz00_43);
										}
									else
										{	/* Ieee/output.scm 764 */
											if (PAIRP(BgL_objz00_42))
												{	/* Ieee/output.scm 764 */
													return
														BGl_writezd2pairzd2zz__r4_output_6_10_3z00
														(BgL_objz00_42, BgL_portz00_43);
												}
											else
												{	/* Ieee/output.scm 764 */
													if (NULLP(BgL_objz00_42))
														{	/* Ieee/output.scm 764 */
															return
																bgl_display_string
																(BGl_string2635z00zz__r4_output_6_10_3z00,
																BgL_portz00_43);
														}
													else
														{	/* Ieee/output.scm 764 */
															if ((BgL_objz00_42 == BFALSE))
																{	/* Ieee/output.scm 764 */
																	return
																		bgl_display_string
																		(BGl_string2636z00zz__r4_output_6_10_3z00,
																		BgL_portz00_43);
																}
															else
																{	/* Ieee/output.scm 764 */
																	if ((BgL_objz00_42 == BTRUE))
																		{	/* Ieee/output.scm 764 */
																			return
																				bgl_display_string
																				(BGl_string2637z00zz__r4_output_6_10_3z00,
																				BgL_portz00_43);
																		}
																	else
																		{	/* Ieee/output.scm 764 */
																			if ((BgL_objz00_42 == BUNSPEC))
																				{	/* Ieee/output.scm 764 */
																					return
																						bgl_display_string
																						(BGl_string2638z00zz__r4_output_6_10_3z00,
																						BgL_portz00_43);
																				}
																			else
																				{	/* Ieee/output.scm 764 */
																					if (ELONGP(BgL_objz00_42))
																						{	/* Ieee/output.scm 764 */
																							return
																								bgl_write_elong(BELONG_TO_LONG
																								(BgL_objz00_42),
																								BgL_portz00_43);
																						}
																					else
																						{	/* Ieee/output.scm 764 */
																							if (REALP(BgL_objz00_42))
																								{	/* Ieee/output.scm 881 */
																									obj_t BgL_arg1613z00_3223;

																									BgL_arg1613z00_3223 =
																										bgl_real_to_string
																										(REAL_TO_DOUBLE
																										(BgL_objz00_42));
																									return
																										bgl_display_string
																										(BgL_arg1613z00_3223,
																										BgL_portz00_43);
																								}
																							else
																								{	/* Ieee/output.scm 764 */
																									if (KEYWORDP(BgL_objz00_42))
																										{	/* Ieee/output.scm 764 */
																											bgl_display_char((
																													(unsigned char) ':'),
																												BgL_portz00_43);
																											{	/* Ieee/output.scm 863 */
																												obj_t
																													BgL_arg1612z00_3227;
																												{	/* Ieee/output.scm 863 */
																													obj_t
																														BgL_res2313z00_3229;
																													BgL_res2313z00_3229 =
																														KEYWORD_TO_STRING
																														(BgL_objz00_42);
																													BgL_arg1612z00_3227 =
																														BgL_res2313z00_3229;
																												}
																												return
																													bgl_display_string
																													(BgL_arg1612z00_3227,
																													BgL_portz00_43);
																											}
																										}
																									else
																										{	/* Ieee/output.scm 764 */
																											if (BGl_classzf3zf3zz__objectz00(BgL_objz00_42))
																												{	/* Ieee/output.scm 764 */
																													bgl_display_string
																														(BGl_string2639z00zz__r4_output_6_10_3z00,
																														BgL_portz00_43);
																													{	/* Ieee/output.scm 933 */
																														obj_t
																															BgL_arg1621z00_3232;
																														BgL_arg1621z00_3232
																															=
																															BGl_classzd2namezd2zz__objectz00
																															(BgL_objz00_42);
																														{	/* Ieee/output.scm 770 */
																															obj_t
																																BgL_arg1566z00_3237;
																															{	/* Ieee/output.scm 770 */
																																obj_t
																																	BgL_res2314z00_3239;
																																BgL_res2314z00_3239
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_arg1621z00_3232);
																																BgL_arg1566z00_3237
																																	=
																																	BgL_res2314z00_3239;
																															}
																															bgl_display_string
																																(BgL_arg1566z00_3237,
																																BgL_portz00_43);
																														}
																													}
																													return
																														bgl_display_string
																														(BGl_string2640z00zz__r4_output_6_10_3z00,
																														BgL_portz00_43);
																												}
																											else
																												{	/* Ieee/output.scm 764 */
																													if (VECTORP
																														(BgL_objz00_42))
																														{	/* Ieee/output.scm 764 */
																															return
																																BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00
																																(BgL_objz00_42,
																																BgL_portz00_43,
																																BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);
																														}
																													else
																														{	/* Ieee/output.scm 764 */
																															if (LLONGP
																																(BgL_objz00_42))
																																{	/* Ieee/output.scm 764 */
																																	return
																																		bgl_write_llong
																																		(BLLONG_TO_LLONG
																																		(BgL_objz00_42),
																																		BgL_portz00_43);
																																}
																															else
																																{	/* Ieee/output.scm 764 */
																																	if (UCS2_STRINGP(BgL_objz00_42))
																																		{	/* Ieee/output.scm 764 */
																																			return
																																				bgl_write_utf8string
																																				(string_for_read
																																				(ucs2_string_to_utf8_string
																																					(BgL_objz00_42)),
																																				BgL_portz00_43);
																																		}
																																	else
																																		{	/* Ieee/output.scm 764 */
																																			if (STRUCTP(BgL_objz00_42))
																																				{	/* Ieee/output.scm 764 */
																																					return
																																						BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00
																																						(BgL_objz00_42,
																																						BgL_portz00_43,
																																						BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);
																																				}
																																			else
																																				{	/* Ieee/output.scm 764 */
																																					if (BGL_OBJECTP(BgL_objz00_42))
																																						{	/* Ieee/output.scm 764 */
																																							obj_t
																																								BgL_list1507z00_1886;
																																							BgL_list1507z00_1886
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BgL_portz00_43,
																																								BNIL);
																																							return
																																								BGl_objectzd2writezd2zz__objectz00
																																								(
																																								((BgL_objectz00_bglt) BgL_objz00_42), BgL_list1507z00_1886);
																																						}
																																					else
																																						{	/* Ieee/output.scm 764 */
																																							if (BGL_DATEP(BgL_objz00_42))
																																								{	/* Ieee/output.scm 764 */
																																									bgl_display_string
																																										(BGl_string2652z00zz__r4_output_6_10_3z00,
																																										BgL_portz00_43);
																																									{	/* Ieee/output.scm 830 */
																																										obj_t
																																											BgL_tmpz00_5202;
																																										BgL_tmpz00_5202
																																											=
																																											BGl_datezd2ze3stringz31zz__datez00
																																											(BgL_objz00_42);
																																										bgl_display_string
																																											(BgL_tmpz00_5202,
																																											BgL_portz00_43);
																																									}
																																									return
																																										bgl_display_string
																																										(BGl_string2640z00zz__r4_output_6_10_3z00,
																																										BgL_portz00_43);
																																								}
																																							else
																																								{	/* Ieee/output.scm 764 */
																																									bool_t
																																										BgL_test2952z00_5206;
																																									{	/* Ieee/output.scm 764 */
																																										bool_t
																																											BgL_res2323z00_3265;
																																										BgL_res2323z00_3265
																																											=
																																											BGL_MUTEXP
																																											(BgL_objz00_42);
																																										BgL_test2952z00_5206
																																											=
																																											BgL_res2323z00_3265;
																																									}
																																									if (BgL_test2952z00_5206)
																																										{	/* Ieee/output.scm 764 */
																																											bgl_display_string
																																												(BGl_string2641z00zz__r4_output_6_10_3z00,
																																												BgL_portz00_43);
																																											{	/* Ieee/output.scm 915 */
																																												obj_t
																																													BgL_arg1618z00_3266;
																																												{	/* Ieee/output.scm 915 */
																																													obj_t
																																														BgL_tmpz00_5209;
																																													BgL_tmpz00_5209
																																														=
																																														(
																																														(obj_t)
																																														BgL_objz00_42);
																																													BgL_arg1618z00_3266
																																														=
																																														BGL_MUTEX_NAME
																																														(BgL_tmpz00_5209);
																																												}
																																												bgl_display_obj
																																													(BgL_arg1618z00_3266,
																																													BgL_portz00_43);
																																											}
																																											bgl_display_string
																																												(BGl_string2642z00zz__r4_output_6_10_3z00,
																																												BgL_portz00_43);
																																											{	/* Ieee/output.scm 917 */
																																												obj_t
																																													BgL_arg1619z00_3267;
																																												BgL_arg1619z00_3267
																																													=
																																													BGL_MUTEX_BACKEND
																																													(BgL_objz00_42);
																																												bgl_display_obj
																																													(BgL_arg1619z00_3267,
																																													BgL_portz00_43);
																																											}
																																											return
																																												bgl_display_string
																																												(BGl_string2640z00zz__r4_output_6_10_3z00,
																																												BgL_portz00_43);
																																										}
																																									else
																																										{	/* Ieee/output.scm 764 */
																																											bool_t
																																												BgL_test2953z00_5217;
																																											{	/* Ieee/output.scm 764 */
																																												bool_t
																																													BgL_res2324z00_3275;
																																												BgL_res2324z00_3275
																																													=
																																													BGL_CONDVARP
																																													(BgL_objz00_42);
																																												BgL_test2953z00_5217
																																													=
																																													BgL_res2324z00_3275;
																																											}
																																											if (BgL_test2953z00_5217)
																																												{	/* Ieee/output.scm 764 */
																																													bgl_display_string
																																														(BGl_string2643z00zz__r4_output_6_10_3z00,
																																														BgL_portz00_43);
																																													{	/* Ieee/output.scm 925 */
																																														obj_t
																																															BgL_arg1620z00_3276;
																																														{	/* Ieee/output.scm 925 */
																																															obj_t
																																																BgL_tmpz00_5220;
																																															BgL_tmpz00_5220
																																																=
																																																(
																																																(obj_t)
																																																BgL_objz00_42);
																																															BgL_arg1620z00_3276
																																																=
																																																BGL_CONDVAR_NAME
																																																(BgL_tmpz00_5220);
																																														}
																																														bgl_display_obj
																																															(BgL_arg1620z00_3276,
																																															BgL_portz00_43);
																																													}
																																													return
																																														bgl_display_string
																																														(BGl_string2640z00zz__r4_output_6_10_3z00,
																																														BgL_portz00_43);
																																												}
																																											else
																																												{	/* Ieee/output.scm 764 */
																																													if (UCS2P(BgL_objz00_42))
																																														{	/* Ieee/output.scm 764 */
																																															return
																																																bgl_write_ucs2
																																																(BgL_objz00_42,
																																																BgL_portz00_43);
																																														}
																																													else
																																														{	/* Ieee/output.scm 764 */
																																															if (CELLP(BgL_objz00_42))
																																																{	/* Ieee/output.scm 764 */
																																																	bgl_display_string
																																																		(BGl_string2644z00zz__r4_output_6_10_3z00,
																																																		BgL_portz00_43);
																																																	bgl_write_obj
																																																		(CELL_REF
																																																		(BgL_objz00_42),
																																																		BgL_portz00_43);
																																																	return
																																																		bgl_display_string
																																																		(BGl_string2640z00zz__r4_output_6_10_3z00,
																																																		BgL_portz00_43);
																																																}
																																															else
																																																{	/* Ieee/output.scm 764 */
																																																	bool_t
																																																		BgL_test2956z00_5234;
																																																	{	/* Ieee/output.scm 764 */
																																																		bool_t
																																																			BgL_res2326z00_3289;
																																																		BgL_res2326z00_3289
																																																			=
																																																			EOF_OBJECTP
																																																			(BgL_objz00_42);
																																																		BgL_test2956z00_5234
																																																			=
																																																			BgL_res2326z00_3289;
																																																	}
																																																	if (BgL_test2956z00_5234)
																																																		{	/* Ieee/output.scm 764 */
																																																			return
																																																				bgl_display_string
																																																				(BGl_string2645z00zz__r4_output_6_10_3z00,
																																																				BgL_portz00_43);
																																																		}
																																																	else
																																																		{	/* Ieee/output.scm 764 */
																																																			if ((BgL_objz00_42 == (BOPTIONAL)))
																																																				{	/* Ieee/output.scm 764 */
																																																					return
																																																						bgl_display_string
																																																						(BGl_string2646z00zz__r4_output_6_10_3z00,
																																																						BgL_portz00_43);
																																																				}
																																																			else
																																																				{	/* Ieee/output.scm 764 */
																																																					if ((BgL_objz00_42 == (BREST)))
																																																						{	/* Ieee/output.scm 764 */
																																																							return
																																																								bgl_display_string
																																																								(BGl_string2647z00zz__r4_output_6_10_3z00,
																																																								BgL_portz00_43);
																																																						}
																																																					else
																																																						{	/* Ieee/output.scm 764 */
																																																							if ((BgL_objz00_42 == (BKEY)))
																																																								{	/* Ieee/output.scm 764 */
																																																									return
																																																										bgl_display_string
																																																										(BGl_string2648z00zz__r4_output_6_10_3z00,
																																																										BgL_portz00_43);
																																																								}
																																																							else
																																																								{	/* Ieee/output.scm 764 */
																																																									if (PROCEDUREP(BgL_objz00_42))
																																																										{	/* Ieee/output.scm 764 */
																																																											return
																																																												bgl_write_procedure
																																																												(BgL_objz00_42,
																																																												BgL_portz00_43);
																																																										}
																																																									else
																																																										{	/* Ieee/output.scm 764 */
																																																											if (OUTPUT_PORTP(BgL_objz00_42))
																																																												{	/* Ieee/output.scm 764 */
																																																													if (BGL_OUTPUT_STRING_PORTP(BgL_objz00_42))
																																																														{	/* Ieee/output.scm 764 */
																																																															return
																																																																bgl_display_string
																																																																(BGl_string2649z00zz__r4_output_6_10_3z00,
																																																																BgL_portz00_43);
																																																														}
																																																													else
																																																														{	/* Ieee/output.scm 764 */
																																																															if (BGL_OUTPUT_PROCEDURE_PORTP(BgL_objz00_42))
																																																																{	/* Ieee/output.scm 764 */
																																																																	return
																																																																		bgl_display_string
																																																																		(BGl_string2650z00zz__r4_output_6_10_3z00,
																																																																		BgL_portz00_43);
																																																																}
																																																															else
																																																																{	/* Ieee/output.scm 764 */
																																																																	return
																																																																		bgl_write_output_port
																																																																		(BgL_objz00_42,
																																																																		BgL_portz00_43);
																																																																}
																																																														}
																																																												}
																																																											else
																																																												{	/* Ieee/output.scm 764 */
																																																													if (INPUT_PORTP(BgL_objz00_42))
																																																														{	/* Ieee/output.scm 764 */
																																																															return
																																																																bgl_write_input_port
																																																																(BgL_objz00_42,
																																																																BgL_portz00_43);
																																																														}
																																																													else
																																																														{	/* Ieee/output.scm 764 */
																																																															if (BIGNUMP(BgL_objz00_42))
																																																																{	/* Ieee/output.scm 764 */
																																																																	return
																																																																		bgl_write_bignum
																																																																		(BgL_objz00_42,
																																																																		BgL_portz00_43);
																																																																}
																																																															else
																																																																{	/* Ieee/output.scm 764 */
																																																																	if (BGL_HVECTORP(BgL_objz00_42))
																																																																		{	/* Ieee/output.scm 764 */
																																																																			return
																																																																				BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00
																																																																				(BgL_objz00_42,
																																																																				BgL_portz00_43,
																																																																				BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);
																																																																		}
																																																																	else
																																																																		{	/* Ieee/output.scm 764 */
																																																																			if (TVECTORP(BgL_objz00_42))
																																																																				{	/* Ieee/output.scm 764 */
																																																																					return
																																																																						BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00
																																																																						(BgL_objz00_42,
																																																																						BgL_portz00_43,
																																																																						BGl_writezd22zd2envz00zz__r4_output_6_10_3z00);
																																																																				}
																																																																			else
																																																																				{	/* Ieee/output.scm 764 */
																																																																					if (BGL_WEAKPTRP(BgL_objz00_42))
																																																																						{	/* Ieee/output.scm 1049 */
																																																																							obj_t
																																																																								BgL_dataz00_3306;
																																																																							BgL_dataz00_3306
																																																																								=
																																																																								weakptr_data
																																																																								(BgL_objz00_42);
																																																																							bgl_display_string
																																																																								(BGl_string2651z00zz__r4_output_6_10_3z00,
																																																																								BgL_portz00_43);
																																																																							bgl_write_obj
																																																																								(BgL_dataz00_3306,
																																																																								BgL_portz00_43);
																																																																							return
																																																																								bgl_display_char
																																																																								(
																																																																								((unsigned char) '>'), BgL_portz00_43);
																																																																						}
																																																																					else
																																																																						{	/* Ieee/output.scm 764 */
																																																																							if (FOREIGNP(BgL_objz00_42))
																																																																								{	/* Ieee/output.scm 764 */
																																																																									return
																																																																										bgl_write_foreign
																																																																										(BgL_objz00_42,
																																																																										BgL_portz00_43);
																																																																								}
																																																																							else
																																																																								{	/* Ieee/output.scm 764 */
																																																																									if (PROCESSP(BgL_objz00_42))
																																																																										{	/* Ieee/output.scm 764 */
																																																																											return
																																																																												bgl_write_process
																																																																												(BgL_objz00_42,
																																																																												BgL_portz00_43);
																																																																										}
																																																																									else
																																																																										{	/* Ieee/output.scm 764 */
																																																																											if (SOCKETP(BgL_objz00_42))
																																																																												{	/* Ieee/output.scm 764 */
																																																																													return
																																																																														bgl_write_socket
																																																																														(BgL_objz00_42,
																																																																														BgL_portz00_43);
																																																																												}
																																																																											else
																																																																												{	/* Ieee/output.scm 764 */
																																																																													bool_t
																																																																														BgL_test2972z00_5285;
																																																																													{	/* Ieee/output.scm 764 */
																																																																														bool_t
																																																																															BgL_res2334z00_3311;
																																																																														BgL_res2334z00_3311
																																																																															=
																																																																															BGL_DATAGRAM_SOCKETP
																																																																															(BgL_objz00_42);
																																																																														BgL_test2972z00_5285
																																																																															=
																																																																															BgL_res2334z00_3311;
																																																																													}
																																																																													if (BgL_test2972z00_5285)
																																																																														{	/* Ieee/output.scm 764 */
																																																																															return
																																																																																bgl_write_datagram_socket
																																																																																(BgL_objz00_42,
																																																																																BgL_portz00_43);
																																																																														}
																																																																													else
																																																																														{	/* Ieee/output.scm 764 */
																																																																															bool_t
																																																																																BgL_test2973z00_5288;
																																																																															{	/* Ieee/output.scm 764 */
																																																																																bool_t
																																																																																	BgL_res2335z00_3312;
																																																																																BgL_res2335z00_3312
																																																																																	=
																																																																																	BGL_REGEXPP
																																																																																	(BgL_objz00_42);
																																																																																BgL_test2973z00_5288
																																																																																	=
																																																																																	BgL_res2335z00_3312;
																																																																															}
																																																																															if (BgL_test2973z00_5288)
																																																																																{	/* Ieee/output.scm 764 */
																																																																																	return
																																																																																		bgl_write_regexp
																																																																																		(BgL_objz00_42,
																																																																																		BgL_portz00_43);
																																																																																}
																																																																															else
																																																																																{	/* Ieee/output.scm 764 */
																																																																																	bool_t
																																																																																		BgL_test2974z00_5291;
																																																																																	{	/* Ieee/output.scm 764 */
																																																																																		bool_t
																																																																																			BgL_res2336z00_3313;
																																																																																		BgL_res2336z00_3313
																																																																																			=
																																																																																			BGL_MMAPP
																																																																																			(BgL_objz00_42);
																																																																																		BgL_test2974z00_5291
																																																																																			=
																																																																																			BgL_res2336z00_3313;
																																																																																	}
																																																																																	if (BgL_test2974z00_5291)
																																																																																		{	/* Ieee/output.scm 764 */
																																																																																			return
																																																																																				bgl_write_mmap
																																																																																				(BgL_objz00_42,
																																																																																				BgL_portz00_43);
																																																																																		}
																																																																																	else
																																																																																		{	/* Ieee/output.scm 764 */
																																																																																			bool_t
																																																																																				BgL_test2975z00_5294;
																																																																																			{	/* Ieee/output.scm 764 */
																																																																																				bool_t
																																																																																					BgL_res2337z00_3314;
																																																																																				BgL_res2337z00_3314
																																																																																					=
																																																																																					BGL_SEMAPHOREP
																																																																																					(BgL_objz00_42);
																																																																																				BgL_test2975z00_5294
																																																																																					=
																																																																																					BgL_res2337z00_3314;
																																																																																			}
																																																																																			if (BgL_test2975z00_5294)
																																																																																				{	/* Ieee/output.scm 764 */
																																																																																					return
																																																																																						bgl_write_semaphore
																																																																																						(BgL_objz00_42,
																																																																																						BgL_portz00_43);
																																																																																				}
																																																																																			else
																																																																																				{	/* Ieee/output.scm 764 */
																																																																																					if (OPAQUEP(BgL_objz00_42))
																																																																																						{	/* Ieee/output.scm 764 */
																																																																																							return
																																																																																								bgl_write_opaque
																																																																																								(BgL_objz00_42,
																																																																																								BgL_portz00_43);
																																																																																						}
																																																																																					else
																																																																																						{	/* Ieee/output.scm 764 */
																																																																																							if (CUSTOMP(BgL_objz00_42))
																																																																																								{	/* Ieee/output.scm 764 */
																																																																																									return
																																																																																										bgl_write_custom
																																																																																										(BgL_objz00_42,
																																																																																										BgL_portz00_43);
																																																																																								}
																																																																																							else
																																																																																								{	/* Ieee/output.scm 764 */
																																																																																									if (BINARY_PORTP(BgL_objz00_42))
																																																																																										{	/* Ieee/output.scm 764 */
																																																																																											return
																																																																																												bgl_write_binary_port
																																																																																												(BgL_objz00_42,
																																																																																												BgL_portz00_43);
																																																																																										}
																																																																																									else
																																																																																										{	/* Ieee/output.scm 764 */
																																																																																											if (BGL_DYNAMIC_ENVP(BgL_objz00_42))
																																																																																												{	/* Ieee/output.scm 764 */
																																																																																													return
																																																																																														bgl_write_dynamic_env
																																																																																														(BgL_objz00_42,
																																																																																														BgL_portz00_43);
																																																																																												}
																																																																																											else
																																																																																												{	/* Ieee/output.scm 764 */
																																																																																													if (BGL_INT8P(BgL_objz00_42))
																																																																																														{	/* Ieee/output.scm 764 */
																																																																																															bgl_display_string
																																																																																																(BGl_string2653z00zz__r4_output_6_10_3z00,
																																																																																																BgL_portz00_43);
																																																																																															{	/* Ieee/output.scm 764 */
																																																																																																long
																																																																																																	BgL_arg1540z00_1917;
																																																																																																{	/* Ieee/output.scm 764 */
																																																																																																	long
																																																																																																		BgL_res2344z00_3326;
																																																																																																	{	/* Ieee/output.scm 764 */
																																																																																																		int8_t
																																																																																																			BgL_xz00_3322;
																																																																																																		BgL_xz00_3322
																																																																																																			=
																																																																																																			BGL_BINT8_TO_INT8
																																																																																																			(BgL_objz00_42);
																																																																																																		{	/* Ieee/output.scm 764 */
																																																																																																			long
																																																																																																				BgL_arg1949z00_3323;
																																																																																																			BgL_arg1949z00_3323
																																																																																																				=
																																																																																																				(long)
																																																																																																				(BgL_xz00_3322);
																																																																																																			{	/* Ieee/output.scm 764 */
																																																																																																				long
																																																																																																					BgL_res2343z00_3325;
																																																																																																				BgL_res2343z00_3325
																																																																																																					=
																																																																																																					(long)
																																																																																																					(BgL_arg1949z00_3323);
																																																																																																				BgL_res2344z00_3326
																																																																																																					=
																																																																																																					BgL_res2343z00_3325;
																																																																																																	}}}
																																																																																																	BgL_arg1540z00_1917
																																																																																																		=
																																																																																																		BgL_res2344z00_3326;
																																																																																																}
																																																																																																return
																																																																																																	bgl_display_obj
																																																																																																	(BINT
																																																																																																	(BgL_arg1540z00_1917),
																																																																																																	BgL_portz00_43);
																																																																																															}
																																																																																														}
																																																																																													else
																																																																																														{	/* Ieee/output.scm 764 */
																																																																																															if (BGL_UINT8P(BgL_objz00_42))
																																																																																																{	/* Ieee/output.scm 764 */
																																																																																																	bgl_display_string
																																																																																																		(BGl_string2654z00zz__r4_output_6_10_3z00,
																																																																																																		BgL_portz00_43);
																																																																																																	{	/* Ieee/output.scm 764 */
																																																																																																		long
																																																																																																			BgL_arg1542z00_1919;
																																																																																																		{	/* Ieee/output.scm 764 */
																																																																																																			long
																																																																																																				BgL_res2347z00_3334;
																																																																																																			{	/* Ieee/output.scm 764 */
																																																																																																				uint8_t
																																																																																																					BgL_xz00_3330;
																																																																																																				BgL_xz00_3330
																																																																																																					=
																																																																																																					BGL_BUINT8_TO_UINT8
																																																																																																					(BgL_objz00_42);
																																																																																																				{	/* Ieee/output.scm 764 */
																																																																																																					long
																																																																																																						BgL_arg1948z00_3331;
																																																																																																					BgL_arg1948z00_3331
																																																																																																						=
																																																																																																						(long)
																																																																																																						(BgL_xz00_3330);
																																																																																																					{	/* Ieee/output.scm 764 */
																																																																																																						long
																																																																																																							BgL_res2346z00_3333;
																																																																																																						BgL_res2346z00_3333
																																																																																																							=
																																																																																																							(long)
																																																																																																							(BgL_arg1948z00_3331);
																																																																																																						BgL_res2347z00_3334
																																																																																																							=
																																																																																																							BgL_res2346z00_3333;
																																																																																																			}}}
																																																																																																			BgL_arg1542z00_1919
																																																																																																				=
																																																																																																				BgL_res2347z00_3334;
																																																																																																		}
																																																																																																		return
																																																																																																			bgl_display_obj
																																																																																																			(BINT
																																																																																																			(BgL_arg1542z00_1919),
																																																																																																			BgL_portz00_43);
																																																																																																	}
																																																																																																}
																																																																																															else
																																																																																																{	/* Ieee/output.scm 764 */
																																																																																																	if (BGL_INT16P(BgL_objz00_42))
																																																																																																		{	/* Ieee/output.scm 764 */
																																																																																																			bgl_display_string
																																																																																																				(BGl_string2655z00zz__r4_output_6_10_3z00,
																																																																																																				BgL_portz00_43);
																																																																																																			{	/* Ieee/output.scm 764 */
																																																																																																				long
																																																																																																					BgL_arg1544z00_1921;
																																																																																																				{	/* Ieee/output.scm 764 */
																																																																																																					long
																																																																																																						BgL_res2350z00_3342;
																																																																																																					{	/* Ieee/output.scm 764 */
																																																																																																						int16_t
																																																																																																							BgL_xz00_3338;
																																																																																																						BgL_xz00_3338
																																																																																																							=
																																																																																																							BGL_BINT16_TO_INT16
																																																																																																							(BgL_objz00_42);
																																																																																																						{	/* Ieee/output.scm 764 */
																																																																																																							long
																																																																																																								BgL_arg1947z00_3339;
																																																																																																							BgL_arg1947z00_3339
																																																																																																								=
																																																																																																								(long)
																																																																																																								(BgL_xz00_3338);
																																																																																																							{	/* Ieee/output.scm 764 */
																																																																																																								long
																																																																																																									BgL_res2349z00_3341;
																																																																																																								BgL_res2349z00_3341
																																																																																																									=
																																																																																																									(long)
																																																																																																									(BgL_arg1947z00_3339);
																																																																																																								BgL_res2350z00_3342
																																																																																																									=
																																																																																																									BgL_res2349z00_3341;
																																																																																																					}}}
																																																																																																					BgL_arg1544z00_1921
																																																																																																						=
																																																																																																						BgL_res2350z00_3342;
																																																																																																				}
																																																																																																				return
																																																																																																					bgl_display_obj
																																																																																																					(BINT
																																																																																																					(BgL_arg1544z00_1921),
																																																																																																					BgL_portz00_43);
																																																																																																			}
																																																																																																		}
																																																																																																	else
																																																																																																		{	/* Ieee/output.scm 764 */
																																																																																																			if (BGL_UINT16P(BgL_objz00_42))
																																																																																																				{	/* Ieee/output.scm 764 */
																																																																																																					bgl_display_string
																																																																																																						(BGl_string2656z00zz__r4_output_6_10_3z00,
																																																																																																						BgL_portz00_43);
																																																																																																					{	/* Ieee/output.scm 764 */
																																																																																																						long
																																																																																																							BgL_arg1546z00_1923;
																																																																																																						{	/* Ieee/output.scm 764 */
																																																																																																							long
																																																																																																								BgL_res2353z00_3350;
																																																																																																							{	/* Ieee/output.scm 764 */
																																																																																																								uint16_t
																																																																																																									BgL_xz00_3346;
																																																																																																								BgL_xz00_3346
																																																																																																									=
																																																																																																									BGL_BUINT16_TO_UINT16
																																																																																																									(BgL_objz00_42);
																																																																																																								{	/* Ieee/output.scm 764 */
																																																																																																									long
																																																																																																										BgL_arg1946z00_3347;
																																																																																																									BgL_arg1946z00_3347
																																																																																																										=
																																																																																																										(long)
																																																																																																										(BgL_xz00_3346);
																																																																																																									{	/* Ieee/output.scm 764 */
																																																																																																										long
																																																																																																											BgL_res2352z00_3349;
																																																																																																										BgL_res2352z00_3349
																																																																																																											=
																																																																																																											(long)
																																																																																																											(BgL_arg1946z00_3347);
																																																																																																										BgL_res2353z00_3350
																																																																																																											=
																																																																																																											BgL_res2352z00_3349;
																																																																																																							}}}
																																																																																																							BgL_arg1546z00_1923
																																																																																																								=
																																																																																																								BgL_res2353z00_3350;
																																																																																																						}
																																																																																																						return
																																																																																																							bgl_display_obj
																																																																																																							(BINT
																																																																																																							(BgL_arg1546z00_1923),
																																																																																																							BgL_portz00_43);
																																																																																																					}
																																																																																																				}
																																																																																																			else
																																																																																																				{	/* Ieee/output.scm 764 */
																																																																																																					if (BGL_INT32P(BgL_objz00_42))
																																																																																																						{	/* Ieee/output.scm 764 */
																																																																																																							bgl_display_string
																																																																																																								(BGl_string2657z00zz__r4_output_6_10_3z00,
																																																																																																								BgL_portz00_43);
																																																																																																							{	/* Ieee/output.scm 764 */
																																																																																																								long
																																																																																																									BgL_arg1551z00_1925;
																																																																																																								{	/* Ieee/output.scm 764 */
																																																																																																									long
																																																																																																										BgL_res2355z00_3355;
																																																																																																									{	/* Ieee/output.scm 764 */
																																																																																																										int32_t
																																																																																																											BgL_nz00_3354;
																																																																																																										BgL_nz00_3354
																																																																																																											=
																																																																																																											BGL_BINT32_TO_INT32
																																																																																																											(BgL_objz00_42);
																																																																																																										BgL_res2355z00_3355
																																																																																																											=
																																																																																																											(long)
																																																																																																											(BgL_nz00_3354);
																																																																																																									}
																																																																																																									BgL_arg1551z00_1925
																																																																																																										=
																																																																																																										BgL_res2355z00_3355;
																																																																																																								}
																																																																																																								return
																																																																																																									bgl_display_obj
																																																																																																									(make_belong
																																																																																																									(BgL_arg1551z00_1925),
																																																																																																									BgL_portz00_43);
																																																																																																							}
																																																																																																						}
																																																																																																					else
																																																																																																						{	/* Ieee/output.scm 764 */
																																																																																																							if (BGL_UINT32P(BgL_objz00_42))
																																																																																																								{	/* Ieee/output.scm 764 */
																																																																																																									bgl_display_string
																																																																																																										(BGl_string2658z00zz__r4_output_6_10_3z00,
																																																																																																										BgL_portz00_43);
																																																																																																									{	/* Ieee/output.scm 764 */
																																																																																																										BGL_LONGLONG_T
																																																																																																											BgL_arg1553z00_1927;
																																																																																																										{	/* Ieee/output.scm 764 */
																																																																																																											BGL_LONGLONG_T
																																																																																																												BgL_res2357z00_3360;
																																																																																																											{	/* Ieee/output.scm 764 */
																																																																																																												uint32_t
																																																																																																													BgL_nz00_3359;
																																																																																																												BgL_nz00_3359
																																																																																																													=
																																																																																																													BGL_BUINT32_TO_UINT32
																																																																																																													(BgL_objz00_42);
																																																																																																												BgL_res2357z00_3360
																																																																																																													=
																																																																																																													(BGL_LONGLONG_T)
																																																																																																													(BgL_nz00_3359);
																																																																																																											}
																																																																																																											BgL_arg1553z00_1927
																																																																																																												=
																																																																																																												BgL_res2357z00_3360;
																																																																																																										}
																																																																																																										return
																																																																																																											bgl_display_obj
																																																																																																											(make_bllong
																																																																																																											(BgL_arg1553z00_1927),
																																																																																																											BgL_portz00_43);
																																																																																																									}
																																																																																																								}
																																																																																																							else
																																																																																																								{	/* Ieee/output.scm 764 */
																																																																																																									if (BGL_INT64P(BgL_objz00_42))
																																																																																																										{	/* Ieee/output.scm 764 */
																																																																																																											bgl_display_string
																																																																																																												(BGl_string2659z00zz__r4_output_6_10_3z00,
																																																																																																												BgL_portz00_43);
																																																																																																											{	/* Ieee/output.scm 764 */
																																																																																																												BGL_LONGLONG_T
																																																																																																													BgL_arg1556z00_1929;
																																																																																																												{	/* Ieee/output.scm 764 */
																																																																																																													BGL_LONGLONG_T
																																																																																																														BgL_res2359z00_3365;
																																																																																																													{	/* Ieee/output.scm 764 */
																																																																																																														int64_t
																																																																																																															BgL_nz00_3364;
																																																																																																														BgL_nz00_3364
																																																																																																															=
																																																																																																															BGL_BINT64_TO_INT64
																																																																																																															(BgL_objz00_42);
																																																																																																														BgL_res2359z00_3365
																																																																																																															=
																																																																																																															(BGL_LONGLONG_T)
																																																																																																															(BgL_nz00_3364);
																																																																																																													}
																																																																																																													BgL_arg1556z00_1929
																																																																																																														=
																																																																																																														BgL_res2359z00_3365;
																																																																																																												}
																																																																																																												return
																																																																																																													bgl_display_obj
																																																																																																													(make_bllong
																																																																																																													(BgL_arg1556z00_1929),
																																																																																																													BgL_portz00_43);
																																																																																																											}
																																																																																																										}
																																																																																																									else
																																																																																																										{	/* Ieee/output.scm 764 */
																																																																																																											if (BGL_UINT64P(BgL_objz00_42))
																																																																																																												{	/* Ieee/output.scm 764 */
																																																																																																													bgl_display_string
																																																																																																														(BGl_string2660z00zz__r4_output_6_10_3z00,
																																																																																																														BgL_portz00_43);
																																																																																																													{	/* Ieee/output.scm 764 */
																																																																																																														uint64_t
																																																																																																															BgL_vz00_1931;
																																																																																																														{	/* Ieee/output.scm 764 */
																																																																																																															uint64_t
																																																																																																																BgL_arg1561z00_1934;
																																																																																																															{	/* Ieee/output.scm 764 */
																																																																																																																uint64_t
																																																																																																																	BgL_res2361z00_3369;
																																																																																																																BgL_res2361z00_3369
																																																																																																																	=
																																																																																																																	(uint64_t)
																																																																																																																	(
																																																																																																																	((long) 10));
																																																																																																																BgL_arg1561z00_1934
																																																																																																																	=
																																																																																																																	BgL_res2361z00_3369;
																																																																																																															}
																																																																																																															{	/* Ieee/output.scm 764 */
																																																																																																																uint64_t
																																																																																																																	BgL_za71za7_3370;
																																																																																																																BgL_za71za7_3370
																																																																																																																	=
																																																																																																																	BGL_BINT64_TO_INT64
																																																																																																																	(BgL_objz00_42);
																																																																																																																BgL_vz00_1931
																																																																																																																	=
																																																																																																																	(BgL_za71za7_3370
																																																																																																																	/
																																																																																																																	BgL_arg1561z00_1934);
																																																																																																														}}
																																																																																																														if ((BgL_vz00_1931 > (uint64_t) (0)))
																																																																																																															{	/* Ieee/output.scm 764 */
																																																																																																																BGL_LONGLONG_T
																																																																																																																	BgL_arg1560z00_1933;
																																																																																																																{	/* Ieee/output.scm 764 */
																																																																																																																	BGL_LONGLONG_T
																																																																																																																		BgL_res2364z00_3377;
																																																																																																																	BgL_res2364z00_3377
																																																																																																																		=
																																																																																																																		(BGL_LONGLONG_T)
																																																																																																																		(BgL_vz00_1931);
																																																																																																																	BgL_arg1560z00_1933
																																																																																																																		=
																																																																																																																		BgL_res2364z00_3377;
																																																																																																																}
																																																																																																																bgl_display_obj
																																																																																																																	(make_bllong
																																																																																																																	(BgL_arg1560z00_1933),
																																																																																																																	BgL_portz00_43);
																																																																																																															}
																																																																																																														else
																																																																																																															{	/* Ieee/output.scm 764 */
																																																																																																																BFALSE;
																																																																																																															}
																																																																																																													}
																																																																																																													{	/* Ieee/output.scm 764 */
																																																																																																														long
																																																																																																															BgL_arg1562z00_1935;
																																																																																																														{	/* Ieee/output.scm 764 */
																																																																																																															uint64_t
																																																																																																																BgL_arg1563z00_1936;
																																																																																																															{	/* Ieee/output.scm 764 */
																																																																																																																uint64_t
																																																																																																																	BgL_arg1564z00_1937;
																																																																																																																{	/* Ieee/output.scm 764 */
																																																																																																																	uint64_t
																																																																																																																		BgL_res2365z00_3378;
																																																																																																																	BgL_res2365z00_3378
																																																																																																																		=
																																																																																																																		(uint64_t)
																																																																																																																		(
																																																																																																																		((long) 10));
																																																																																																																	BgL_arg1564z00_1937
																																																																																																																		=
																																																																																																																		BgL_res2365z00_3378;
																																																																																																																}
																																																																																																																{	/* Ieee/output.scm 764 */
																																																																																																																	uint64_t
																																																																																																																		BgL_res2366z00_3381;
																																																																																																																	{	/* Ieee/output.scm 764 */
																																																																																																																		uint64_t
																																																																																																																			BgL_n1z00_3379;
																																																																																																																		BgL_n1z00_3379
																																																																																																																			=
																																																																																																																			BGL_BINT64_TO_INT64
																																																																																																																			(BgL_objz00_42);
																																																																																																																		{	/* Ieee/output.scm 764 */
																																																																																																																			int64_t
																																																																																																																				BgL_tmpz00_5375;
																																																																																																																			BgL_tmpz00_5375
																																																																																																																				=
																																																																																																																				(int64_t)
																																																																																																																				(BgL_arg1564z00_1937);
																																																																																																																			BgL_res2366z00_3381
																																																																																																																				=
																																																																																																																				(BgL_n1z00_3379
																																																																																																																				%
																																																																																																																				BgL_tmpz00_5375);
																																																																																																																	}}
																																																																																																																	BgL_arg1563z00_1936
																																																																																																																		=
																																																																																																																		BgL_res2366z00_3381;
																																																																																																															}}
																																																																																																															{	/* Ieee/output.scm 764 */
																																																																																																																long
																																																																																																																	BgL_res2368z00_3386;
																																																																																																																{	/* Ieee/output.scm 764 */
																																																																																																																	long
																																																																																																																		BgL_arg1943z00_3383;
																																																																																																																	BgL_arg1943z00_3383
																																																																																																																		=
																																																																																																																		(long)
																																																																																																																		(BgL_arg1563z00_1936);
																																																																																																																	{	/* Ieee/output.scm 764 */
																																																																																																																		long
																																																																																																																			BgL_res2367z00_3385;
																																																																																																																		BgL_res2367z00_3385
																																																																																																																			=
																																																																																																																			(long)
																																																																																																																			(BgL_arg1943z00_3383);
																																																																																																																		BgL_res2368z00_3386
																																																																																																																			=
																																																																																																																			BgL_res2367z00_3385;
																																																																																																																}}
																																																																																																																BgL_arg1562z00_1935
																																																																																																																	=
																																																																																																																	BgL_res2368z00_3386;
																																																																																																														}}
																																																																																																														return
																																																																																																															bgl_display_obj
																																																																																																															(BINT
																																																																																																															(BgL_arg1562z00_1935),
																																																																																																															BgL_portz00_43);
																																																																																																													}
																																																																																																												}
																																																																																																											else
																																																																																																												{	/* Ieee/output.scm 764 */
																																																																																																													if (CNSTP(BgL_objz00_42))
																																																																																																														{	/* Ieee/output.scm 764 */
																																																																																																															return
																																																																																																																bgl_write_cnst
																																																																																																																(BgL_objz00_42,
																																																																																																																BgL_portz00_43);
																																																																																																														}
																																																																																																													else
																																																																																																														{	/* Ieee/output.scm 764 */
																																																																																																															return
																																																																																																																bgl_write_unknown
																																																																																																																(BgL_objz00_42,
																																																																																																																BgL_portz00_43);
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



/* &write-2 */
	obj_t BGl_z62writezd22zb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4086,
		obj_t BgL_objz00_4087, obj_t BgL_portz00_4088)
	{
		{	/* Ieee/output.scm 763 */
			return bgl_write_obj(BgL_objz00_4087, BgL_portz00_4088);
		}

	}



/* display-symbol */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_44, obj_t BgL_portz00_45)
	{
		{	/* Ieee/output.scm 769 */
			{	/* Ieee/output.scm 770 */
				obj_t BgL_arg1566z00_3388;

				{	/* Ieee/output.scm 770 */
					obj_t BgL_res2370z00_3390;

					BgL_res2370z00_3390 = SYMBOL_TO_STRING(BgL_objz00_44);
					BgL_arg1566z00_3388 = BgL_res2370z00_3390;
				}
				return bgl_display_string(BgL_arg1566z00_3388, BgL_portz00_45);
			}
		}

	}



/* &display-symbol */
	obj_t BGl_z62displayzd2symbolzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4089,
		obj_t BgL_objz00_4090, obj_t BgL_portz00_4091)
	{
		{	/* Ieee/output.scm 769 */
			{	/* Ieee/output.scm 770 */
				obj_t BgL_auxz00_5396;
				obj_t BgL_auxz00_5389;

				if (OUTPUT_PORTP(BgL_portz00_4091))
					{	/* Ieee/output.scm 770 */
						BgL_auxz00_5396 = BgL_portz00_4091;
					}
				else
					{
						obj_t BgL_auxz00_5399;

						BgL_auxz00_5399 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 27315)),
							BGl_string2661z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4091);
						FAILURE(BgL_auxz00_5399, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_objz00_4090))
					{	/* Ieee/output.scm 770 */
						BgL_auxz00_5389 = BgL_objz00_4090;
					}
				else
					{
						obj_t BgL_auxz00_5392;

						BgL_auxz00_5392 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 27315)),
							BGl_string2661z00zz__r4_output_6_10_3z00,
							BGl_string2662z00zz__r4_output_6_10_3z00, BgL_objz00_4090);
						FAILURE(BgL_auxz00_5392, BFALSE, BFALSE);
					}
				return
					BGl_displayzd2symbolzd2zz__r4_output_6_10_3z00(BgL_auxz00_5389,
					BgL_auxz00_5396);
			}
		}

	}



/* write-symbol */
	BGL_EXPORTED_DEF obj_t BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_46, obj_t BgL_portz00_47)
	{
		{	/* Ieee/output.scm 775 */
			{	/* Ieee/output.scm 782 */
				obj_t BgL_strz00_1941;

				{	/* Ieee/output.scm 782 */
					obj_t BgL_res2371z00_3401;

					BgL_res2371z00_3401 = SYMBOL_TO_STRING(BgL_objz00_46);
					BgL_strz00_1941 = BgL_res2371z00_3401;
				}
				{	/* Ieee/output.scm 782 */
					long BgL_lenz00_1942;

					BgL_lenz00_1942 = STRING_LENGTH(BgL_strz00_1941);
					{	/* Ieee/output.scm 783 */
						long BgL_lenzd21zd2_1943;

						BgL_lenzd21zd2_1943 = (BgL_lenz00_1942 - ((long) 1));
						{	/* Ieee/output.scm 784 */

							{
								long BgL_iz00_1945;
								bool_t BgL_az00_1946;

								BgL_iz00_1945 = ((long) 0);
								BgL_az00_1946 = ((bool_t) 0);
							BgL_zc3z04anonymousza31567ze3z87_1947:
								if ((BgL_iz00_1945 == BgL_lenz00_1942))
									{	/* Ieee/output.scm 787 */
										if (BgL_az00_1946)
											{	/* Ieee/output.scm 789 */
												return
													bgl_display_string(BgL_strz00_1941, BgL_portz00_47);
											}
										else
											{	/* Ieee/output.scm 790 */
												bool_t BgL_test2994z00_5411;

												if (
													(BgL_objz00_46 ==
														BGl_symbol2663z00zz__r4_output_6_10_3z00))
													{	/* Ieee/output.scm 790 */
														BgL_test2994z00_5411 = ((bool_t) 1);
													}
												else
													{	/* Ieee/output.scm 790 */
														BgL_test2994z00_5411 =
															(BgL_objz00_46 ==
															BGl_symbol2665z00zz__r4_output_6_10_3z00);
													}
												if (BgL_test2994z00_5411)
													{	/* Ieee/output.scm 790 */
														return
															bgl_display_string(BgL_strz00_1941,
															BgL_portz00_47);
													}
												else
													{	/* Ieee/output.scm 790 */
														bgl_display_string
															(BGl_string2667z00zz__r4_output_6_10_3z00,
															BgL_portz00_47);
														{	/* Ieee/output.scm 830 */
															obj_t BgL_tmpz00_5417;

															BgL_tmpz00_5417 =
																symbol_for_read(BgL_strz00_1941);
															bgl_display_string(BgL_tmpz00_5417,
																BgL_portz00_47);
														}
														return
															bgl_display_string
															(BGl_string2667z00zz__r4_output_6_10_3z00,
															BgL_portz00_47);
													}
											}
									}
								else
									{	/* Ieee/output.scm 792 */
										unsigned char BgL_cz00_1952;

										BgL_cz00_1952 = STRING_REF(BgL_strz00_1941, BgL_iz00_1945);
										{

											switch (BgL_cz00_1952)
												{
												case ((unsigned char) 10):
												case ((unsigned char) 9):
												case ((unsigned char) 13):
												case ((unsigned char) '`'):
												case ((unsigned char) '\''):
												case ((unsigned char) '"'):
												case ((unsigned char) '#'):
												case ((unsigned char) '\\'):
												case ((unsigned char) ';'):
												case ((unsigned char) '('):
												case ((unsigned char) ')'):
												case ((unsigned char) '['):
												case ((unsigned char) ']'):
												case ((unsigned char) '{'):
												case ((unsigned char) '}'):
												case ((unsigned char) ','):

													bgl_display_string
														(BGl_string2667z00zz__r4_output_6_10_3z00,
														BgL_portz00_47);
													{	/* Ieee/output.scm 830 */
														obj_t BgL_tmpz00_5423;

														BgL_tmpz00_5423 = symbol_for_read(BgL_strz00_1941);
														bgl_display_string(BgL_tmpz00_5423, BgL_portz00_47);
													}
													return
														bgl_display_string
														(BGl_string2667z00zz__r4_output_6_10_3z00,
														BgL_portz00_47);
													break;
												case ((unsigned char) ':'):

													if ((BgL_iz00_1945 == ((long) 0)))
														{	/* Ieee/output.scm 800 */
															bool_t BgL_test2997z00_5429;

															if ((BgL_lenzd21zd2_1943 > ((long) 2)))
																{	/* Ieee/output.scm 800 */
																	BgL_test2997z00_5429 =
																		(STRING_REF(BgL_strz00_1941,
																			(BgL_iz00_1945 + ((long) 1))) ==
																		((unsigned char) ':'));
																}
															else
																{	/* Ieee/output.scm 800 */
																	BgL_test2997z00_5429 = ((bool_t) 0);
																}
															if (BgL_test2997z00_5429)
																{
																	long BgL_iz00_5435;

																	BgL_iz00_5435 = (BgL_iz00_1945 + ((long) 2));
																	BgL_iz00_1945 = BgL_iz00_5435;
																	goto BgL_zc3z04anonymousza31567ze3z87_1947;
																}
															else
																{	/* Ieee/output.scm 800 */
																	bgl_display_string
																		(BGl_string2667z00zz__r4_output_6_10_3z00,
																		BgL_portz00_47);
																	{	/* Ieee/output.scm 830 */
																		obj_t BgL_tmpz00_5438;

																		BgL_tmpz00_5438 =
																			symbol_for_read(BgL_strz00_1941);
																		bgl_display_string(BgL_tmpz00_5438,
																			BgL_portz00_47);
																	}
																	return
																		bgl_display_string
																		(BGl_string2667z00zz__r4_output_6_10_3z00,
																		BgL_portz00_47);
																}
														}
													else
														{	/* Ieee/output.scm 799 */
															if ((BgL_iz00_1945 == BgL_lenzd21zd2_1943))
																{	/* Ieee/output.scm 804 */
																	bgl_display_string
																		(BGl_string2667z00zz__r4_output_6_10_3z00,
																		BgL_portz00_47);
																	{	/* Ieee/output.scm 830 */
																		obj_t BgL_tmpz00_5445;

																		BgL_tmpz00_5445 =
																			symbol_for_read(BgL_strz00_1941);
																		bgl_display_string(BgL_tmpz00_5445,
																			BgL_portz00_47);
																	}
																	return
																		bgl_display_string
																		(BGl_string2667z00zz__r4_output_6_10_3z00,
																		BgL_portz00_47);
																}
															else
																{
																	long BgL_iz00_5449;

																	BgL_iz00_5449 = (BgL_iz00_1945 + ((long) 1));
																	BgL_iz00_1945 = BgL_iz00_5449;
																	goto BgL_zc3z04anonymousza31567ze3z87_1947;
																}
														}
													break;
												case ((unsigned char) '.'):

													if ((BgL_lenz00_1942 == ((long) 1)))
														{	/* Ieee/output.scm 809 */
															bgl_display_string
																(BGl_string2667z00zz__r4_output_6_10_3z00,
																BgL_portz00_47);
															{	/* Ieee/output.scm 830 */
																obj_t BgL_tmpz00_5454;

																BgL_tmpz00_5454 =
																	symbol_for_read(BgL_strz00_1941);
																bgl_display_string(BgL_tmpz00_5454,
																	BgL_portz00_47);
															}
															return
																bgl_display_string
																(BGl_string2667z00zz__r4_output_6_10_3z00,
																BgL_portz00_47);
														}
													else
														{
															long BgL_iz00_5458;

															BgL_iz00_5458 = (BgL_iz00_1945 + ((long) 1));
															BgL_iz00_1945 = BgL_iz00_5458;
															goto BgL_zc3z04anonymousza31567ze3z87_1947;
														}
													break;
												default:
													{	/* Ieee/output.scm 813 */
														bool_t BgL_test3001z00_5460;

														if ((BgL_cz00_1952 <= ((unsigned char) ' ')))
															{	/* Ieee/output.scm 813 */
																BgL_test3001z00_5460 = ((bool_t) 1);
															}
														else
															{	/* Ieee/output.scm 813 */
																BgL_test3001z00_5460 =
																	(BgL_cz00_1952 >= ((unsigned char) ''));
															}
														if (BgL_test3001z00_5460)
															{	/* Ieee/output.scm 813 */
																bgl_display_string
																	(BGl_string2667z00zz__r4_output_6_10_3z00,
																	BgL_portz00_47);
																{	/* Ieee/output.scm 830 */
																	obj_t BgL_tmpz00_5465;

																	BgL_tmpz00_5465 =
																		symbol_for_read(BgL_strz00_1941);
																	bgl_display_string(BgL_tmpz00_5465,
																		BgL_portz00_47);
																}
																return
																	bgl_display_string
																	(BGl_string2667z00zz__r4_output_6_10_3z00,
																	BgL_portz00_47);
															}
														else
															{	/* Ieee/output.scm 815 */
																long BgL_arg1587z00_1971;
																bool_t BgL_arg1588z00_1972;

																BgL_arg1587z00_1971 =
																	(BgL_iz00_1945 + ((long) 1));
																if (BgL_az00_1946)
																	{	/* Ieee/output.scm 816 */
																		BgL_arg1588z00_1972 = BgL_az00_1946;
																	}
																else
																	{	/* Ieee/output.scm 817 */
																		bool_t BgL__ortest_1053z00_1974;

																		{	/* Ieee/output.scm 817 */
																			bool_t BgL_test3004z00_5471;

																			{	/* Ieee/output.scm 817 */
																				bool_t BgL_res2379z00_3439;

																				BgL_res2379z00_3439 =
																					isdigit(BgL_cz00_1952);
																				BgL_test3004z00_5471 =
																					BgL_res2379z00_3439;
																			}
																			if (BgL_test3004z00_5471)
																				{	/* Ieee/output.scm 817 */
																					BgL__ortest_1053z00_1974 =
																						((bool_t) 0);
																				}
																			else
																				{	/* Ieee/output.scm 817 */
																					if (
																						(BgL_cz00_1952 ==
																							((unsigned char) 'e')))
																						{	/* Ieee/output.scm 818 */
																							BgL__ortest_1053z00_1974 =
																								((bool_t) 0);
																						}
																					else
																						{	/* Ieee/output.scm 818 */
																							if (
																								(BgL_cz00_1952 ==
																									((unsigned char) 'E')))
																								{	/* Ieee/output.scm 819 */
																									BgL__ortest_1053z00_1974 =
																										((bool_t) 0);
																								}
																							else
																								{	/* Ieee/output.scm 819 */
																									if (
																										(BgL_cz00_1952 ==
																											((unsigned char) '-')))
																										{	/* Ieee/output.scm 820 */
																											BgL__ortest_1053z00_1974 =
																												((bool_t) 0);
																										}
																									else
																										{	/* Ieee/output.scm 820 */
																											if (
																												(BgL_cz00_1952 ==
																													((unsigned char)
																														'+')))
																												{	/* Ieee/output.scm 821 */
																													BgL__ortest_1053z00_1974
																														= ((bool_t) 0);
																												}
																											else
																												{	/* Ieee/output.scm 821 */
																													BgL__ortest_1053z00_1974
																														= ((bool_t) 1);
																												}
																										}
																								}
																						}
																				}
																		}
																		if (BgL__ortest_1053z00_1974)
																			{	/* Ieee/output.scm 817 */
																				BgL_arg1588z00_1972 =
																					BgL__ortest_1053z00_1974;
																			}
																		else
																			{	/* Ieee/output.scm 817 */
																				if ((BgL_iz00_1945 == ((long) 0)))
																					{	/* Ieee/output.scm 823 */
																						bool_t BgL__ortest_1059z00_1976;

																						BgL__ortest_1059z00_1976 =
																							(BgL_cz00_1952 ==
																							((unsigned char) 'e'));
																						if (BgL__ortest_1059z00_1976)
																							{	/* Ieee/output.scm 823 */
																								BgL_arg1588z00_1972 =
																									BgL__ortest_1059z00_1976;
																							}
																						else
																							{	/* Ieee/output.scm 823 */
																								BgL_arg1588z00_1972 =
																									(BgL_cz00_1952 ==
																									((unsigned char) 'E'));
																					}}
																				else
																					{	/* Ieee/output.scm 822 */
																						BgL_arg1588z00_1972 = ((bool_t) 0);
																					}
																			}
																	}
																{
																	bool_t BgL_az00_5488;
																	long BgL_iz00_5487;

																	BgL_iz00_5487 = BgL_arg1587z00_1971;
																	BgL_az00_5488 = BgL_arg1588z00_1972;
																	BgL_az00_1946 = BgL_az00_5488;
																	BgL_iz00_1945 = BgL_iz00_5487;
																	goto BgL_zc3z04anonymousza31567ze3z87_1947;
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



/* &write-symbol */
	obj_t BGl_z62writezd2symbolzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4092,
		obj_t BgL_objz00_4093, obj_t BgL_portz00_4094)
	{
		{	/* Ieee/output.scm 775 */
			{	/* Ieee/output.scm 782 */
				obj_t BgL_auxz00_5497;
				obj_t BgL_auxz00_5490;

				if (OUTPUT_PORTP(BgL_portz00_4094))
					{	/* Ieee/output.scm 782 */
						BgL_auxz00_5497 = BgL_portz00_4094;
					}
				else
					{
						obj_t BgL_auxz00_5500;

						BgL_auxz00_5500 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 27747)),
							BGl_string2668z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4094);
						FAILURE(BgL_auxz00_5500, BFALSE, BFALSE);
					}
				if (SYMBOLP(BgL_objz00_4093))
					{	/* Ieee/output.scm 782 */
						BgL_auxz00_5490 = BgL_objz00_4093;
					}
				else
					{
						obj_t BgL_auxz00_5493;

						BgL_auxz00_5493 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 27747)),
							BGl_string2668z00zz__r4_output_6_10_3z00,
							BGl_string2662z00zz__r4_output_6_10_3z00, BgL_objz00_4093);
						FAILURE(BgL_auxz00_5493, BFALSE, BFALSE);
					}
				return
					BGl_writezd2symbolzd2zz__r4_output_6_10_3z00(BgL_auxz00_5490,
					BgL_auxz00_5497);
			}
		}

	}



/* display-string */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2stringzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_48, obj_t BgL_portz00_49)
	{
		{	/* Ieee/output.scm 829 */
			return bgl_display_string(BgL_objz00_48, BgL_portz00_49);
		}

	}



/* &display-string */
	obj_t BGl_z62displayzd2stringzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4095,
		obj_t BgL_objz00_4096, obj_t BgL_portz00_4097)
	{
		{	/* Ieee/output.scm 829 */
			{	/* Ieee/output.scm 830 */
				obj_t BgL_auxz00_5513;
				obj_t BgL_auxz00_5506;

				if (OUTPUT_PORTP(BgL_portz00_4097))
					{	/* Ieee/output.scm 830 */
						BgL_auxz00_5513 = BgL_portz00_4097;
					}
				else
					{
						obj_t BgL_auxz00_5516;

						BgL_auxz00_5516 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 29085)),
							BGl_string2669z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4097);
						FAILURE(BgL_auxz00_5516, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_objz00_4096))
					{	/* Ieee/output.scm 830 */
						BgL_auxz00_5506 = BgL_objz00_4096;
					}
				else
					{
						obj_t BgL_auxz00_5509;

						BgL_auxz00_5509 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 29085)),
							BGl_string2669z00zz__r4_output_6_10_3z00,
							BGl_string2628z00zz__r4_output_6_10_3z00, BgL_objz00_4096);
						FAILURE(BgL_auxz00_5509, BFALSE, BFALSE);
					}
				return
					BGl_displayzd2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_5506,
					BgL_auxz00_5513);
			}
		}

	}



/* display-substring */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2substringzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_50, long BgL_startz00_51, long BgL_endz00_52,
		obj_t BgL_portz00_53)
	{
		{	/* Ieee/output.scm 835 */
			{	/* Ieee/output.scm 836 */
				bool_t BgL_test3016z00_5521;

				if ((BgL_endz00_52 >= BgL_startz00_51))
					{	/* Ieee/output.scm 837 */
						bool_t BgL_test3018z00_5524;

						{	/* Ieee/output.scm 837 */
							long BgL_tmpz00_5525;

							BgL_tmpz00_5525 = (STRING_LENGTH(BgL_objz00_50) + ((long) 1));
							BgL_test3018z00_5524 =
								BOUND_CHECK(BgL_endz00_52, BgL_tmpz00_5525);
						}
						if (BgL_test3018z00_5524)
							{	/* Ieee/output.scm 837 */
								BgL_test3016z00_5521 = (BgL_startz00_51 >= ((long) 0));
							}
						else
							{	/* Ieee/output.scm 837 */
								BgL_test3016z00_5521 = ((bool_t) 0);
							}
					}
				else
					{	/* Ieee/output.scm 836 */
						BgL_test3016z00_5521 = ((bool_t) 0);
					}
				if (BgL_test3016z00_5521)
					{	/* Ieee/output.scm 836 */
						return
							bgl_display_substring(BgL_objz00_50, BgL_startz00_51,
							BgL_endz00_52, BgL_portz00_53);
					}
				else
					{	/* Ieee/output.scm 841 */
						obj_t BgL_arg1604z00_4201;

						{	/* Ieee/output.scm 841 */
							obj_t BgL_list1605z00_4202;

							{	/* Ieee/output.scm 841 */
								obj_t BgL_arg1606z00_4203;

								BgL_arg1606z00_4203 =
									MAKE_YOUNG_PAIR(BINT(BgL_endz00_52), BNIL);
								BgL_list1605z00_4202 =
									MAKE_YOUNG_PAIR(BINT(BgL_startz00_51), BgL_arg1606z00_4203);
							}
							BgL_arg1604z00_4201 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string2670z00zz__r4_output_6_10_3z00,
								BgL_list1605z00_4202);
						}
						return
							BGl_errorz00zz__errorz00(BGl_symbol2671z00zz__r4_output_6_10_3z00,
							BgL_arg1604z00_4201, BgL_objz00_50);
					}
			}
		}

	}



/* &display-substring */
	obj_t BGl_z62displayzd2substringzb0zz__r4_output_6_10_3z00(obj_t
		BgL_envz00_4098, obj_t BgL_objz00_4099, obj_t BgL_startz00_4100,
		obj_t BgL_endz00_4101, obj_t BgL_portz00_4102)
	{
		{	/* Ieee/output.scm 835 */
			{	/* Ieee/output.scm 836 */
				obj_t BgL_auxz00_5562;
				long BgL_auxz00_5553;
				long BgL_auxz00_5544;
				obj_t BgL_auxz00_5537;

				if (OUTPUT_PORTP(BgL_portz00_4102))
					{	/* Ieee/output.scm 836 */
						BgL_auxz00_5562 = BgL_portz00_4102;
					}
				else
					{
						obj_t BgL_auxz00_5565;

						BgL_auxz00_5565 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 29393)),
							BGl_string2673z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4102);
						FAILURE(BgL_auxz00_5565, BFALSE, BFALSE);
					}
				{	/* Ieee/output.scm 836 */
					obj_t BgL_tmpz00_5554;

					if (INTEGERP(BgL_endz00_4101))
						{	/* Ieee/output.scm 836 */
							BgL_tmpz00_5554 = BgL_endz00_4101;
						}
					else
						{
							obj_t BgL_auxz00_5557;

							BgL_auxz00_5557 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 29393)),
								BGl_string2673z00zz__r4_output_6_10_3z00,
								BGl_string2606z00zz__r4_output_6_10_3z00, BgL_endz00_4101);
							FAILURE(BgL_auxz00_5557, BFALSE, BFALSE);
						}
					BgL_auxz00_5553 = (long) CINT(BgL_tmpz00_5554);
				}
				{	/* Ieee/output.scm 836 */
					obj_t BgL_tmpz00_5545;

					if (INTEGERP(BgL_startz00_4100))
						{	/* Ieee/output.scm 836 */
							BgL_tmpz00_5545 = BgL_startz00_4100;
						}
					else
						{
							obj_t BgL_auxz00_5548;

							BgL_auxz00_5548 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 29393)),
								BGl_string2673z00zz__r4_output_6_10_3z00,
								BGl_string2606z00zz__r4_output_6_10_3z00, BgL_startz00_4100);
							FAILURE(BgL_auxz00_5548, BFALSE, BFALSE);
						}
					BgL_auxz00_5544 = (long) CINT(BgL_tmpz00_5545);
				}
				if (STRINGP(BgL_objz00_4099))
					{	/* Ieee/output.scm 836 */
						BgL_auxz00_5537 = BgL_objz00_4099;
					}
				else
					{
						obj_t BgL_auxz00_5540;

						BgL_auxz00_5540 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 29393)),
							BGl_string2673z00zz__r4_output_6_10_3z00,
							BGl_string2628z00zz__r4_output_6_10_3z00, BgL_objz00_4099);
						FAILURE(BgL_auxz00_5540, BFALSE, BFALSE);
					}
				return
					BGl_displayzd2substringzd2zz__r4_output_6_10_3z00(BgL_auxz00_5537,
					BgL_auxz00_5544, BgL_auxz00_5553, BgL_auxz00_5562);
			}
		}

	}



/* write-string */
	BGL_EXPORTED_DEF obj_t BGl_writezd2stringzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_54, obj_t BgL_portz00_55)
	{
		{	/* Ieee/output.scm 847 */
			if (BGl_bigloozd2strictzd2r5rszd2stringszd2zz__paramz00())
				{	/* Ieee/output.scm 851 */
					obj_t BgL_strz00_3529;

					BgL_strz00_3529 = string_for_read(BgL_objz00_54);
					{	/* Ieee/output.scm 852 */
						obj_t BgL_escz00_3530;

						{	/* Ieee/output.scm 853 */
							int BgL_tmpz00_5573;

							BgL_tmpz00_5573 = (int) (((long) 1));
							BgL_escz00_3530 = BGL_MVALUES_VAL(BgL_tmpz00_5573);
						}
						return
							bgl_write_string(BgL_strz00_3529,
							CBOOL(BgL_escz00_3530), BgL_portz00_55);
					}
				}
			else
				{	/* Ieee/output.scm 848 */
					return
						bgl_write_string(string_for_read(BgL_objz00_54), ((bool_t) 0),
						BgL_portz00_55);
				}
		}

	}



/* &write-string */
	obj_t BGl_z62writezd2stringzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4103,
		obj_t BgL_objz00_4104, obj_t BgL_portz00_4105)
	{
		{	/* Ieee/output.scm 847 */
			{	/* Ieee/output.scm 848 */
				obj_t BgL_auxz00_5587;
				obj_t BgL_auxz00_5580;

				if (OUTPUT_PORTP(BgL_portz00_4105))
					{	/* Ieee/output.scm 848 */
						BgL_auxz00_5587 = BgL_portz00_4105;
					}
				else
					{
						obj_t BgL_auxz00_5590;

						BgL_auxz00_5590 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 29911)),
							BGl_string2674z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4105);
						FAILURE(BgL_auxz00_5590, BFALSE, BFALSE);
					}
				if (STRINGP(BgL_objz00_4104))
					{	/* Ieee/output.scm 848 */
						BgL_auxz00_5580 = BgL_objz00_4104;
					}
				else
					{
						obj_t BgL_auxz00_5583;

						BgL_auxz00_5583 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 29911)),
							BGl_string2674z00zz__r4_output_6_10_3z00,
							BGl_string2628z00zz__r4_output_6_10_3z00, BgL_objz00_4104);
						FAILURE(BgL_auxz00_5583, BFALSE, BFALSE);
					}
				return
					BGl_writezd2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_5580,
					BgL_auxz00_5587);
			}
		}

	}



/* display-fixnum */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2fixnumzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_58, obj_t BgL_portz00_59)
	{
		{	/* Ieee/output.scm 868 */
			return bgl_display_fixnum(BgL_objz00_58, BgL_portz00_59);
		}

	}



/* &display-fixnum */
	obj_t BGl_z62displayzd2fixnumzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4106,
		obj_t BgL_objz00_4107, obj_t BgL_portz00_4108)
	{
		{	/* Ieee/output.scm 868 */
			{	/* Ieee/output.scm 869 */
				obj_t BgL_auxz00_5603;
				obj_t BgL_auxz00_5596;

				if (OUTPUT_PORTP(BgL_portz00_4108))
					{	/* Ieee/output.scm 869 */
						BgL_auxz00_5603 = BgL_portz00_4108;
					}
				else
					{
						obj_t BgL_auxz00_5606;

						BgL_auxz00_5606 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 30797)),
							BGl_string2675z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4108);
						FAILURE(BgL_auxz00_5606, BFALSE, BFALSE);
					}
				if (INTEGERP(BgL_objz00_4107))
					{	/* Ieee/output.scm 869 */
						BgL_auxz00_5596 = BgL_objz00_4107;
					}
				else
					{
						obj_t BgL_auxz00_5599;

						BgL_auxz00_5599 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 30797)),
							BGl_string2675z00zz__r4_output_6_10_3z00,
							BGl_string2606z00zz__r4_output_6_10_3z00, BgL_objz00_4107);
						FAILURE(BgL_auxz00_5599, BFALSE, BFALSE);
					}
				return
					BGl_displayzd2fixnumzd2zz__r4_output_6_10_3z00(BgL_auxz00_5596,
					BgL_auxz00_5603);
			}
		}

	}



/* display-elong */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2elongzd2zz__r4_output_6_10_3z00(long
		BgL_objz00_60, obj_t BgL_portz00_61)
	{
		{	/* Ieee/output.scm 874 */
			return bgl_display_elong(BgL_objz00_60, BgL_portz00_61);
		}

	}



/* &display-elong */
	obj_t BGl_z62displayzd2elongzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4109,
		obj_t BgL_objz00_4110, obj_t BgL_portz00_4111)
	{
		{	/* Ieee/output.scm 874 */
			{	/* Ieee/output.scm 875 */
				obj_t BgL_auxz00_5621;
				long BgL_auxz00_5612;

				if (OUTPUT_PORTP(BgL_portz00_4111))
					{	/* Ieee/output.scm 875 */
						BgL_auxz00_5621 = BgL_portz00_4111;
					}
				else
					{
						obj_t BgL_auxz00_5624;

						BgL_auxz00_5624 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 31091)),
							BGl_string2676z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4111);
						FAILURE(BgL_auxz00_5624, BFALSE, BFALSE);
					}
				{	/* Ieee/output.scm 875 */
					obj_t BgL_tmpz00_5613;

					if (ELONGP(BgL_objz00_4110))
						{	/* Ieee/output.scm 875 */
							BgL_tmpz00_5613 = BgL_objz00_4110;
						}
					else
						{
							obj_t BgL_auxz00_5616;

							BgL_auxz00_5616 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 31091)),
								BGl_string2676z00zz__r4_output_6_10_3z00,
								BGl_string2677z00zz__r4_output_6_10_3z00, BgL_objz00_4110);
							FAILURE(BgL_auxz00_5616, BFALSE, BFALSE);
						}
					BgL_auxz00_5612 = BELONG_TO_LONG(BgL_tmpz00_5613);
				}
				return
					BGl_displayzd2elongzd2zz__r4_output_6_10_3z00(BgL_auxz00_5612,
					BgL_auxz00_5621);
			}
		}

	}



/* display-flonum */
	BGL_EXPORTED_DEF obj_t BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_62, obj_t BgL_portz00_63)
	{
		{	/* Ieee/output.scm 880 */
			{	/* Ieee/output.scm 881 */
				obj_t BgL_arg1613z00_3541;

				BgL_arg1613z00_3541 = bgl_real_to_string(REAL_TO_DOUBLE(BgL_objz00_62));
				return bgl_display_string(BgL_arg1613z00_3541, BgL_portz00_63);
			}
		}

	}



/* &display-flonum */
	obj_t BGl_z62displayzd2flonumzb0zz__r4_output_6_10_3z00(obj_t BgL_envz00_4112,
		obj_t BgL_objz00_4113, obj_t BgL_portz00_4114)
	{
		{	/* Ieee/output.scm 880 */
			{	/* Ieee/output.scm 881 */
				obj_t BgL_auxz00_5639;
				obj_t BgL_auxz00_5632;

				if (OUTPUT_PORTP(BgL_portz00_4114))
					{	/* Ieee/output.scm 881 */
						BgL_auxz00_5639 = BgL_portz00_4114;
					}
				else
					{
						obj_t BgL_auxz00_5642;

						BgL_auxz00_5642 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 31394)),
							BGl_string2678z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4114);
						FAILURE(BgL_auxz00_5642, BFALSE, BFALSE);
					}
				if (REALP(BgL_objz00_4113))
					{	/* Ieee/output.scm 881 */
						BgL_auxz00_5632 = BgL_objz00_4113;
					}
				else
					{
						obj_t BgL_auxz00_5635;

						BgL_auxz00_5635 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 31394)),
							BGl_string2678z00zz__r4_output_6_10_3z00,
							BGl_string2679z00zz__r4_output_6_10_3z00, BgL_objz00_4113);
						FAILURE(BgL_auxz00_5635, BFALSE, BFALSE);
					}
				return
					BGl_displayzd2flonumzd2zz__r4_output_6_10_3z00(BgL_auxz00_5632,
					BgL_auxz00_5639);
			}
		}

	}



/* display-ucs2string */
	BGL_EXPORTED_DEF obj_t
		BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_64,
		obj_t BgL_portz00_65)
	{
		{	/* Ieee/output.scm 886 */
			return bgl_display_ucs2string(BgL_objz00_64, BgL_portz00_65);
		}

	}



/* &display-ucs2string */
	obj_t BGl_z62displayzd2ucs2stringzb0zz__r4_output_6_10_3z00(obj_t
		BgL_envz00_4115, obj_t BgL_objz00_4116, obj_t BgL_portz00_4117)
	{
		{	/* Ieee/output.scm 886 */
			{	/* Ieee/output.scm 887 */
				obj_t BgL_auxz00_5655;
				obj_t BgL_auxz00_5648;

				if (OUTPUT_PORTP(BgL_portz00_4117))
					{	/* Ieee/output.scm 887 */
						BgL_auxz00_5655 = BgL_portz00_4117;
					}
				else
					{
						obj_t BgL_auxz00_5658;

						BgL_auxz00_5658 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 31684)),
							BGl_string2680z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4117);
						FAILURE(BgL_auxz00_5658, BFALSE, BFALSE);
					}
				if (UCS2_STRINGP(BgL_objz00_4116))
					{	/* Ieee/output.scm 887 */
						BgL_auxz00_5648 = BgL_objz00_4116;
					}
				else
					{
						obj_t BgL_auxz00_5651;

						BgL_auxz00_5651 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 31684)),
							BGl_string2680z00zz__r4_output_6_10_3z00,
							BGl_string2681z00zz__r4_output_6_10_3z00, BgL_objz00_4116);
						FAILURE(BgL_auxz00_5651, BFALSE, BFALSE);
					}
				return
					BGl_displayzd2ucs2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_5648,
					BgL_auxz00_5655);
			}
		}

	}



/* write-ucs2string */
	BGL_EXPORTED_DEF obj_t BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_66, obj_t BgL_portz00_67)
	{
		{	/* Ieee/output.scm 892 */
			return
				bgl_write_utf8string(string_for_read(ucs2_string_to_utf8_string
					(BgL_objz00_66)), BgL_portz00_67);
		}

	}



/* &write-ucs2string */
	obj_t BGl_z62writezd2ucs2stringzb0zz__r4_output_6_10_3z00(obj_t
		BgL_envz00_4118, obj_t BgL_objz00_4119, obj_t BgL_portz00_4120)
	{
		{	/* Ieee/output.scm 892 */
			{	/* Ieee/output.scm 893 */
				obj_t BgL_auxz00_5673;
				obj_t BgL_auxz00_5666;

				if (OUTPUT_PORTP(BgL_portz00_4120))
					{	/* Ieee/output.scm 893 */
						BgL_auxz00_5673 = BgL_portz00_4120;
					}
				else
					{
						obj_t BgL_auxz00_5676;

						BgL_auxz00_5676 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 32014)),
							BGl_string2682z00zz__r4_output_6_10_3z00,
							BGl_string2599z00zz__r4_output_6_10_3z00, BgL_portz00_4120);
						FAILURE(BgL_auxz00_5676, BFALSE, BFALSE);
					}
				if (UCS2_STRINGP(BgL_objz00_4119))
					{	/* Ieee/output.scm 893 */
						BgL_auxz00_5666 = BgL_objz00_4119;
					}
				else
					{
						obj_t BgL_auxz00_5669;

						BgL_auxz00_5669 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string2597z00zz__r4_output_6_10_3z00, BINT(((long) 32014)),
							BGl_string2682z00zz__r4_output_6_10_3z00,
							BGl_string2681z00zz__r4_output_6_10_3z00, BgL_objz00_4119);
						FAILURE(BgL_auxz00_5669, BFALSE, BFALSE);
					}
				return
					BGl_writezd2ucs2stringzd2zz__r4_output_6_10_3z00(BgL_auxz00_5666,
					BgL_auxz00_5673);
			}
		}

	}



/* write/display-structure */
	obj_t BGl_writezf2displayzd2structurez20zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_81, obj_t BgL_portz00_82, obj_t BgL_dispz00_83)
	{
		{	/* Ieee/output.scm 947 */
			bgl_display_char(((unsigned char) '#'), BgL_portz00_82);
			bgl_display_char(((unsigned char) '{'), BgL_portz00_82);
			{	/* Ieee/output.scm 950 */
				obj_t BgL_arg1624z00_2017;

				BgL_arg1624z00_2017 = STRUCT_KEY(BgL_objz00_81);
				PROCEDURE_ENTRY(BgL_dispz00_83) (BgL_dispz00_83, BgL_arg1624z00_2017,
					BgL_portz00_82, BEOA);
			}
			if ((((long) 0) == (long) (STRUCT_LENGTH(BgL_objz00_81))))
				{	/* Ieee/output.scm 951 */
					return bgl_display_char(((unsigned char) '}'), BgL_portz00_82);
				}
			else
				{	/* Ieee/output.scm 953 */
					long BgL_lenz00_2020;

					BgL_lenz00_2020 =
						((long) (STRUCT_LENGTH(BgL_objz00_81)) - ((long) 1));
					bgl_display_char(((unsigned char) ' '), BgL_portz00_82);
					{
						long BgL_iz00_2022;

						BgL_iz00_2022 = ((long) 0);
					BgL_zc3z04anonymousza31628ze3z87_2023:
						if ((BgL_iz00_2022 == BgL_lenz00_2020))
							{	/* Ieee/output.scm 957 */
								{	/* Ieee/output.scm 958 */
									obj_t BgL_arg1630z00_2025;

									BgL_arg1630z00_2025 =
										STRUCT_REF(BgL_objz00_81, (int) (BgL_iz00_2022));
									PROCEDURE_ENTRY(BgL_dispz00_83) (BgL_dispz00_83,
										BgL_arg1630z00_2025, BgL_portz00_82, BEOA);
								}
								return bgl_display_char(((unsigned char) '}'), BgL_portz00_82);
							}
						else
							{	/* Ieee/output.scm 957 */
								{	/* Ieee/output.scm 961 */
									obj_t BgL_arg1631z00_2026;

									BgL_arg1631z00_2026 =
										STRUCT_REF(BgL_objz00_81, (int) (BgL_iz00_2022));
									PROCEDURE_ENTRY(BgL_dispz00_83) (BgL_dispz00_83,
										BgL_arg1631z00_2026, BgL_portz00_82, BEOA);
								}
								bgl_display_char(((unsigned char) ' '), BgL_portz00_82);
								{
									long BgL_iz00_5716;

									BgL_iz00_5716 = (((long) 1) + BgL_iz00_2022);
									BgL_iz00_2022 = BgL_iz00_5716;
									goto BgL_zc3z04anonymousza31628ze3z87_2023;
								}
							}
					}
				}
		}

	}



/* write/display-vector */
	obj_t BGl_writezf2displayzd2vectorz20zz__r4_output_6_10_3z00(obj_t
		BgL_objz00_84, obj_t BgL_portz00_85, obj_t BgL_dispz00_86)
	{
		{	/* Ieee/output.scm 968 */
			bgl_display_char(((unsigned char) '#'), BgL_portz00_85);
			{	/* Ieee/output.scm 970 */
				int BgL_tagz00_2031;

				{	/* Ieee/output.scm 970 */
					int BgL_res2414z00_3613;

					BgL_res2414z00_3613 = VECTOR_TAG(BgL_objz00_84);
					BgL_tagz00_2031 = BgL_res2414z00_3613;
				}
				if (((long) (BgL_tagz00_2031) > ((long) 0)))
					{	/* Ieee/output.scm 971 */
						if (((long) (BgL_tagz00_2031) >= ((long) 100)))
							{	/* Ieee/output.scm 973 */
								PROCEDURE_ENTRY(BgL_dispz00_86) (BgL_dispz00_86,
									BINT(BgL_tagz00_2031), BgL_portz00_85, BEOA);
							}
						else
							{	/* Ieee/output.scm 973 */
								bgl_display_char(((unsigned char) '0'), BgL_portz00_85);
								if (((long) (BgL_tagz00_2031) >= ((long) 10)))
									{	/* Ieee/output.scm 977 */
										PROCEDURE_ENTRY(BgL_dispz00_86) (BgL_dispz00_86,
											BINT(BgL_tagz00_2031), BgL_portz00_85, BEOA);
									}
								else
									{	/* Ieee/output.scm 977 */
										bgl_display_char(((unsigned char) '0'), BgL_portz00_85);
										PROCEDURE_ENTRY(BgL_dispz00_86) (BgL_dispz00_86,
											BINT(BgL_tagz00_2031), BgL_portz00_85, BEOA);
					}}}
				else
					{	/* Ieee/output.scm 971 */
						BFALSE;
					}
			}
			bgl_display_char(((unsigned char) '('), BgL_portz00_85);
			if ((((long) 0) == VECTOR_LENGTH(BgL_objz00_84)))
				{	/* Ieee/output.scm 983 */
					return bgl_display_char(((unsigned char) ')'), BgL_portz00_85);
				}
			else
				{	/* Ieee/output.scm 985 */
					long BgL_lenz00_2037;

					BgL_lenz00_2037 = (VECTOR_LENGTH(BgL_objz00_84) - ((long) 1));
					{
						long BgL_iz00_2039;

						BgL_iz00_2039 = ((long) 0);
					BgL_zc3z04anonymousza31641ze3z87_2040:
						if ((BgL_iz00_2039 == BgL_lenz00_2037))
							{	/* Ieee/output.scm 988 */
								{	/* Ieee/output.scm 989 */
									obj_t BgL_arg1643z00_2042;

									BgL_arg1643z00_2042 =
										VECTOR_REF(BgL_objz00_84, BgL_iz00_2039);
									PROCEDURE_ENTRY(BgL_dispz00_86) (BgL_dispz00_86,
										BgL_arg1643z00_2042, BgL_portz00_85, BEOA);
								}
								return bgl_display_char(((unsigned char) ')'), BgL_portz00_85);
							}
						else
							{	/* Ieee/output.scm 988 */
								{	/* Ieee/output.scm 992 */
									obj_t BgL_arg1644z00_2043;

									BgL_arg1644z00_2043 =
										VECTOR_REF(BgL_objz00_84, BgL_iz00_2039);
									PROCEDURE_ENTRY(BgL_dispz00_86) (BgL_dispz00_86,
										BgL_arg1644z00_2043, BgL_portz00_85, BEOA);
								}
								bgl_display_char(((unsigned char) ' '), BgL_portz00_85);
								{
									long BgL_iz00_5772;

									BgL_iz00_5772 = (((long) 1) + BgL_iz00_2039);
									BgL_iz00_2039 = BgL_iz00_5772;
									goto BgL_zc3z04anonymousza31641ze3z87_2040;
								}
							}
					}
				}
		}

	}



/* write/display-tvector */
	obj_t BGl_writezf2displayzd2tvectorz20zz__r4_output_6_10_3z00(obj_t
		BgL_tvecz00_87, obj_t BgL_portz00_88, obj_t BgL_dispz00_89)
	{
		{	/* Ieee/output.scm 999 */
			{	/* Ieee/output.scm 1000 */
				obj_t BgL_tvectorzd2refzd2_2048;
				obj_t BgL_idz00_2049;

				BgL_tvectorzd2refzd2_2048 =
					BGl_tvectorzd2refzd2zz__tvectorz00(BgL_tvecz00_87);
				BgL_idz00_2049 = BGl_tvectorzd2idzd2zz__tvectorz00(BgL_tvecz00_87);
				bgl_display_char(((unsigned char) '#'), BgL_portz00_88);
				PROCEDURE_ENTRY(BgL_dispz00_89) (BgL_dispz00_89, BgL_idz00_2049,
					BgL_portz00_88, BEOA);
				bgl_display_char(((unsigned char) '('), BgL_portz00_88);
				if (CBOOL(BgL_tvectorzd2refzd2_2048))
					{	/* Ieee/output.scm 1005 */
						if ((((long) 0) == (long) (TVECTOR_LENGTH(BgL_tvecz00_87))))
							{	/* Ieee/output.scm 1010 */
								return bgl_display_char(((unsigned char) ')'), BgL_portz00_88);
							}
						else
							{	/* Ieee/output.scm 1012 */
								long BgL_lenz00_2052;

								BgL_lenz00_2052 =
									((long) (TVECTOR_LENGTH(BgL_tvecz00_87)) - ((long) 1));
								{
									long BgL_iz00_2054;

									BgL_iz00_2054 = ((long) 0);
								BgL_zc3z04anonymousza31652ze3z87_2055:
									if ((BgL_iz00_2054 == BgL_lenz00_2052))
										{	/* Ieee/output.scm 1015 */
											{	/* Ieee/output.scm 1016 */
												obj_t BgL_arg1654z00_2057;

												BgL_arg1654z00_2057 =
													PROCEDURE_ENTRY(BgL_tvectorzd2refzd2_2048)
													(BgL_tvectorzd2refzd2_2048, BgL_tvecz00_87,
													BINT(BgL_iz00_2054), BEOA);
												PROCEDURE_ENTRY(BgL_dispz00_89) (BgL_dispz00_89,
													BgL_arg1654z00_2057, BgL_portz00_88, BEOA);
											}
											return
												bgl_display_char(((unsigned char) ')'), BgL_portz00_88);
										}
									else
										{	/* Ieee/output.scm 1015 */
											{	/* Ieee/output.scm 1019 */
												obj_t BgL_arg1656z00_2058;

												BgL_arg1656z00_2058 =
													PROCEDURE_ENTRY(BgL_tvectorzd2refzd2_2048)
													(BgL_tvectorzd2refzd2_2048, BgL_tvecz00_87,
													BINT(BgL_iz00_2054), BEOA);
												PROCEDURE_ENTRY(BgL_dispz00_89) (BgL_dispz00_89,
													BgL_arg1656z00_2058, BgL_portz00_88, BEOA);
											}
											bgl_display_char(((unsigned char) ' '), BgL_portz00_88);
											{
												long BgL_iz00_5819;

												BgL_iz00_5819 = (((long) 1) + BgL_iz00_2054);
												BgL_iz00_2054 = BgL_iz00_5819;
												goto BgL_zc3z04anonymousza31652ze3z87_2055;
											}
										}
								}
							}
					}
				else
					{	/* Ieee/output.scm 1005 */
						bgl_display_string(BGl_string2683z00zz__r4_output_6_10_3z00,
							BgL_portz00_88);
						return BgL_tvecz00_87;
					}
			}
		}

	}



/* write/display-hvector */
	obj_t BGl_writezf2displayzd2hvectorz20zz__r4_output_6_10_3z00(obj_t
		BgL_svecz00_90, obj_t BgL_portz00_91, obj_t BgL_dispz00_92)
	{
		{	/* Ieee/output.scm 1026 */
			{	/* Ieee/output.scm 1027 */
				obj_t BgL_idz00_2063;

				BgL_idz00_2063 =
					BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_svecz00_90);
				{	/* Ieee/output.scm 1028 */
					obj_t BgL__z00_2064;
					obj_t BgL_vrefz00_2065;
					obj_t BgL__z00_2066;
					obj_t BgL__z00_2067;

					{	/* Ieee/output.scm 1029 */
						int BgL_tmpz00_5823;

						BgL_tmpz00_5823 = (int) (((long) 1));
						BgL__z00_2064 = BGL_MVALUES_VAL(BgL_tmpz00_5823);
					}
					{	/* Ieee/output.scm 1029 */
						int BgL_tmpz00_5826;

						BgL_tmpz00_5826 = (int) (((long) 2));
						BgL_vrefz00_2065 = BGL_MVALUES_VAL(BgL_tmpz00_5826);
					}
					{	/* Ieee/output.scm 1029 */
						int BgL_tmpz00_5829;

						BgL_tmpz00_5829 = (int) (((long) 3));
						BgL__z00_2066 = BGL_MVALUES_VAL(BgL_tmpz00_5829);
					}
					{	/* Ieee/output.scm 1029 */
						int BgL_tmpz00_5832;

						BgL_tmpz00_5832 = (int) (((long) 4));
						BgL__z00_2067 = BGL_MVALUES_VAL(BgL_tmpz00_5832);
					}
					bgl_display_char(((unsigned char) '#'), BgL_portz00_91);
					{	/* Ieee/output.scm 770 */
						obj_t BgL_arg1566z00_3652;

						{	/* Ieee/output.scm 770 */
							obj_t BgL_res2428z00_3654;

							BgL_res2428z00_3654 = SYMBOL_TO_STRING(((obj_t) BgL_idz00_2063));
							BgL_arg1566z00_3652 = BgL_res2428z00_3654;
						}
						bgl_display_string(BgL_arg1566z00_3652, BgL_portz00_91);
					}
					bgl_display_char(((unsigned char) '('), BgL_portz00_91);
					{	/* Ieee/output.scm 1032 */
						bool_t BgL_test3046z00_5840;

						{	/* Ieee/output.scm 1032 */
							long BgL_arg1669z00_2080;

							BgL_arg1669z00_2080 = BGL_HVECTOR_LENGTH(BgL_svecz00_90);
							BgL_test3046z00_5840 = (((long) 0) == BgL_arg1669z00_2080);
						}
						if (BgL_test3046z00_5840)
							{	/* Ieee/output.scm 1032 */
								return bgl_display_char(((unsigned char) ')'), BgL_portz00_91);
							}
						else
							{	/* Ieee/output.scm 1034 */
								long BgL_lenz00_2070;

								{	/* Ieee/output.scm 1034 */
									long BgL_arg1668z00_2079;

									BgL_arg1668z00_2079 = BGL_HVECTOR_LENGTH(BgL_svecz00_90);
									BgL_lenz00_2070 = (BgL_arg1668z00_2079 - ((long) 1));
								}
								{
									long BgL_iz00_2072;

									BgL_iz00_2072 = ((long) 0);
								BgL_zc3z04anonymousza31662ze3z87_2073:
									if ((BgL_iz00_2072 == BgL_lenz00_2070))
										{	/* Ieee/output.scm 1037 */
											{	/* Ieee/output.scm 1038 */
												obj_t BgL_arg1664z00_2075;

												BgL_arg1664z00_2075 =
													PROCEDURE_ENTRY(BgL_vrefz00_2065) (BgL_vrefz00_2065,
													BgL_svecz00_90, BINT(BgL_iz00_2072), BEOA);
												PROCEDURE_ENTRY(BgL_dispz00_92) (BgL_dispz00_92,
													BgL_arg1664z00_2075, BgL_portz00_91, BEOA);
											}
											return
												bgl_display_char(((unsigned char) ')'), BgL_portz00_91);
										}
									else
										{	/* Ieee/output.scm 1037 */
											{	/* Ieee/output.scm 1041 */
												obj_t BgL_arg1665z00_2076;

												BgL_arg1665z00_2076 =
													PROCEDURE_ENTRY(BgL_vrefz00_2065) (BgL_vrefz00_2065,
													BgL_svecz00_90, BINT(BgL_iz00_2072), BEOA);
												PROCEDURE_ENTRY(BgL_dispz00_92) (BgL_dispz00_92,
													BgL_arg1665z00_2076, BgL_portz00_91, BEOA);
											}
											bgl_display_char(((unsigned char) ' '), BgL_portz00_91);
											{
												long BgL_iz00_5872;

												BgL_iz00_5872 = (((long) 1) + BgL_iz00_2072);
												BgL_iz00_2072 = BgL_iz00_5872;
												goto BgL_zc3z04anonymousza31662ze3z87_2073;
											}
										}
								}
							}
					}
				}
			}
		}

	}



/* display-pair */
	obj_t BGl_displayzd2pairzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_96,
		obj_t BgL_portz00_97)
	{
		{	/* Ieee/output.scm 1080 */
			bgl_display_char(((unsigned char) '('), BgL_portz00_97);
			{
				obj_t BgL_lz00_2083;

				BgL_lz00_2083 = BgL_objz00_96;
			BgL_zc3z04anonymousza31670ze3z87_2084:
				if (NULLP(CDR(((obj_t) BgL_lz00_2083))))
					{	/* Ieee/output.scm 1081 */
						{	/* Ieee/output.scm 1081 */
							obj_t BgL_arg1675z00_2087;

							BgL_arg1675z00_2087 = CAR(((obj_t) BgL_lz00_2083));
							bgl_display_obj(BgL_arg1675z00_2087, BgL_portz00_97);
						}
						return bgl_display_char(((unsigned char) ')'), BgL_portz00_97);
					}
				else
					{	/* Ieee/output.scm 1081 */
						bool_t BgL_test3049z00_5883;

						{	/* Ieee/output.scm 1081 */
							obj_t BgL_tmpz00_5884;

							BgL_tmpz00_5884 = CDR(((obj_t) BgL_lz00_2083));
							BgL_test3049z00_5883 = PAIRP(BgL_tmpz00_5884);
						}
						if (BgL_test3049z00_5883)
							{	/* Ieee/output.scm 1081 */
								{	/* Ieee/output.scm 1081 */
									obj_t BgL_arg1685z00_2090;

									BgL_arg1685z00_2090 = CAR(((obj_t) BgL_lz00_2083));
									bgl_display_obj(BgL_arg1685z00_2090, BgL_portz00_97);
								}
								bgl_display_char(((unsigned char) ' '), BgL_portz00_97);
								{	/* Ieee/output.scm 1081 */
									obj_t BgL_arg1686z00_2091;

									BgL_arg1686z00_2091 = CDR(((obj_t) BgL_lz00_2083));
									{
										obj_t BgL_lz00_5894;

										BgL_lz00_5894 = BgL_arg1686z00_2091;
										BgL_lz00_2083 = BgL_lz00_5894;
										goto BgL_zc3z04anonymousza31670ze3z87_2084;
									}
								}
							}
						else
							{	/* Ieee/output.scm 1081 */
								{	/* Ieee/output.scm 1081 */
									obj_t BgL_arg1687z00_2092;

									BgL_arg1687z00_2092 = CAR(((obj_t) BgL_lz00_2083));
									bgl_display_obj(BgL_arg1687z00_2092, BgL_portz00_97);
								}
								bgl_display_char(((unsigned char) ' '), BgL_portz00_97);
								bgl_display_char(((unsigned char) '.'), BgL_portz00_97);
								bgl_display_char(((unsigned char) ' '), BgL_portz00_97);
								{	/* Ieee/output.scm 1081 */
									obj_t BgL_arg1688z00_2093;

									BgL_arg1688z00_2093 = CDR(((obj_t) BgL_lz00_2083));
									bgl_display_obj(BgL_arg1688z00_2093, BgL_portz00_97);
								}
								return bgl_display_char(((unsigned char) ')'), BgL_portz00_97);
		}}}}

	}



/* write-pair */
	obj_t BGl_writezd2pairzd2zz__r4_output_6_10_3z00(obj_t BgL_objz00_98,
		obj_t BgL_portz00_99)
	{
		{	/* Ieee/output.scm 1086 */
			bgl_display_char(((unsigned char) '('), BgL_portz00_99);
			{
				obj_t BgL_lz00_2098;

				BgL_lz00_2098 = BgL_objz00_98;
			BgL_zc3z04anonymousza31693ze3z87_2099:
				if (NULLP(CDR(((obj_t) BgL_lz00_2098))))
					{	/* Ieee/output.scm 1087 */
						{	/* Ieee/output.scm 1087 */
							obj_t BgL_arg1697z00_2102;

							BgL_arg1697z00_2102 = CAR(((obj_t) BgL_lz00_2098));
							bgl_write_obj(BgL_arg1697z00_2102, BgL_portz00_99);
						}
						return bgl_display_char(((unsigned char) ')'), BgL_portz00_99);
					}
				else
					{	/* Ieee/output.scm 1087 */
						bool_t BgL_test3051z00_5914;

						{	/* Ieee/output.scm 1087 */
							obj_t BgL_tmpz00_5915;

							BgL_tmpz00_5915 = CDR(((obj_t) BgL_lz00_2098));
							BgL_test3051z00_5914 = PAIRP(BgL_tmpz00_5915);
						}
						if (BgL_test3051z00_5914)
							{	/* Ieee/output.scm 1087 */
								{	/* Ieee/output.scm 1087 */
									obj_t BgL_arg1700z00_2105;

									BgL_arg1700z00_2105 = CAR(((obj_t) BgL_lz00_2098));
									bgl_write_obj(BgL_arg1700z00_2105, BgL_portz00_99);
								}
								bgl_display_char(((unsigned char) ' '), BgL_portz00_99);
								{	/* Ieee/output.scm 1087 */
									obj_t BgL_arg1701z00_2106;

									BgL_arg1701z00_2106 = CDR(((obj_t) BgL_lz00_2098));
									{
										obj_t BgL_lz00_5925;

										BgL_lz00_5925 = BgL_arg1701z00_2106;
										BgL_lz00_2098 = BgL_lz00_5925;
										goto BgL_zc3z04anonymousza31693ze3z87_2099;
									}
								}
							}
						else
							{	/* Ieee/output.scm 1087 */
								{	/* Ieee/output.scm 1087 */
									obj_t BgL_arg1702z00_2107;

									BgL_arg1702z00_2107 = CAR(((obj_t) BgL_lz00_2098));
									bgl_write_obj(BgL_arg1702z00_2107, BgL_portz00_99);
								}
								bgl_display_char(((unsigned char) ' '), BgL_portz00_99);
								bgl_display_char(((unsigned char) '.'), BgL_portz00_99);
								bgl_display_char(((unsigned char) ' '), BgL_portz00_99);
								{	/* Ieee/output.scm 1087 */
									obj_t BgL_arg1704z00_2108;

									BgL_arg1704z00_2108 = CDR(((obj_t) BgL_lz00_2098));
									bgl_write_obj(BgL_arg1704z00_2108, BgL_portz00_99);
								}
								return bgl_display_char(((unsigned char) ')'), BgL_portz00_99);
		}}}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__r4_output_6_10_3z00()
	{
		{	/* Ieee/output.scm 24 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r4_output_6_10_3z00()
	{
		{	/* Ieee/output.scm 24 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r4_output_6_10_3z00()
	{
		{	/* Ieee/output.scm 24 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_output_6_10_3z00()
	{
		{	/* Ieee/output.scm 24 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string2684z00zz__r4_output_6_10_3z00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string2684z00zz__r4_output_6_10_3z00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string2684z00zz__r4_output_6_10_3z00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874),
				BSTRING_TO_STRING(BGl_string2684z00zz__r4_output_6_10_3z00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string2684z00zz__r4_output_6_10_3z00));
			BGl_modulezd2initializa7ationz75zz__srfi4z00(((long) 467925662),
				BSTRING_TO_STRING(BGl_string2684z00zz__r4_output_6_10_3z00));
			return BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string2684z00zz__r4_output_6_10_3z00));
		}

	}

#ifdef __cplusplus
}
#endif
