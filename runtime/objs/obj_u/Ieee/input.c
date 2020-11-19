/*===========================================================================*/
/*   (Ieee/input.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/input.scm -indent -o objs/obj_u/Ieee/input.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                  *BgL_z62errorz62_bglt;

	typedef struct BgL_z62iozd2errorzb0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                       *BgL_z62iozd2errorzb0_bglt;


	static obj_t BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	static obj_t BGl__readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32744ze3ze5zz__r4_input_6_10_2z00(obj_t);
	static int BGl_z52sendcharsz52zz__r4_input_6_10_2z00(obj_t, obj_t, long,
		long);
	static obj_t BGl_z62eofzd2objectzf3z43zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl_symbol4276z00zz__r4_input_6_10_2z00 = BUNSPEC;
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl__passwordz00zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_passwordz00zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00 =
		BUNSPEC;
	static obj_t BGl_symbol4286z00zz__r4_input_6_10_2z00 = BUNSPEC;
	extern obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32593ze3ze5zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_symbol4292z00zz__r4_input_6_10_2z00 = BUNSPEC;
	extern obj_t bgl_file_to_string(char *);
	static obj_t BGl_symbol4298z00zz__r4_input_6_10_2z00 = BUNSPEC;
	static obj_t BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00();
	static obj_t BGl_z62filezd2positionzd2ze3linez81zz__r4_input_6_10_2z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzf2rpzf2zz__r4_input_6_10_2z00(obj_t, obj_t,
		obj_t);
	extern obj_t
		BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00(obj_t, long);
	static obj_t BGl_genericzd2initzd2zz__r4_input_6_10_2z00();
	static obj_t BGl_z62zc3z04anonymousza32596ze3ze5zz__r4_input_6_10_2z00(obj_t);
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__r4_input_6_10_2z00();
	BGL_EXPORTED_DECL obj_t
		BGl_readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32593ze34145ze5zz__r4_input_6_10_2z00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32593ze34146ze5zz__r4_input_6_10_2z00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32593ze34147ze5zz__r4_input_6_10_2z00(obj_t);
	extern obj_t bgl_password(char *);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl__peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t, long, long,
		obj_t);
	static obj_t BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl__readzd2charzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__r4_input_6_10_2z00();
	BGL_EXPORTED_DECL obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_z62readzf2lalrpz90zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int, obj_t);
	static obj_t BGl__readzd2lineszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t);
	extern obj_t make_string(long, unsigned char);
	extern obj_t bgl_close_input_port(obj_t);
	extern bool_t bgl_rgc_charready(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	extern obj_t rgc_buffer_substring(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_readzd2lineszd2zz__r4_input_6_10_2z00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t, obj_t, long,
		long);
	static obj_t BGl_z62sendzd2charszf2siza7eze5zz__r4_input_6_10_2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__gunza7ipza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern bool_t fexists(char *);
	BGL_EXPORTED_DECL obj_t BGl_eofzd2objectzd2zz__r4_input_6_10_2z00();
	static obj_t BGl__readzd2linezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern bool_t rgc_buffer_insert_substring(obj_t, obj_t, long, long);
	static obj_t BGl__peekzd2charzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_z62readzf2rpz90zz__r4_input_6_10_2z00(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t rgc_buffer_eof_p(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__r4_input_6_10_2z00();
	extern obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62eofzd2objectzb0zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_filezd2lineszd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_peekzd2charzd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__r4_input_6_10_2z00();
	extern obj_t BGl_z62iozd2errorzb0zz__objectz00;
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00();
	static obj_t BGl__sendzd2filezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl__readzd2stringzd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern long bgl_rgc_blit_string(obj_t, char *, long, long);
	BGL_EXPORTED_DECL long BGl_sendzd2filezd2zz__r4_input_6_10_2z00(obj_t, obj_t,
		long, long);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31392ze3ze5zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	static obj_t BGl__readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t, long, long,
		obj_t);
	extern obj_t bgl_sendchars(obj_t, obj_t, long, long);
	static obj_t BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl_z62filezd2lineszb0zz__r4_input_6_10_2z00(obj_t, obj_t);
	static obj_t BGl__readzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t);
	extern obj_t bgl_sendfile(obj_t, obj_t, long, long);
	extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
	extern bool_t rgc_buffer_insert_char(obj_t, int);
	extern obj_t c_substring(obj_t, long, long);
	static obj_t BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00
		= BUNSPEC;
	extern int rgc_buffer_unget_char(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62portzd2ze3stringzd2listz81zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	extern long default_io_bufsiz;
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62filezd2ze3stringz53zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t blit_string(obj_t, long, obj_t, long, long);
	static obj_t BGl_symbol4302z00zz__r4_input_6_10_2z00 = BUNSPEC;
	static obj_t BGl_symbol4306z00zz__r4_input_6_10_2z00 = BUNSPEC;
	static obj_t BGl_symbol4309z00zz__r4_input_6_10_2z00 = BUNSPEC;
	extern obj_t bgl_find_runtime_type(obj_t);
	extern obj_t BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(unsigned
		char, obj_t);
	extern bool_t BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__readzd2bytezd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern bool_t rgc_fill_buffer(obj_t);
	static obj_t BGl_symbol4318z00zz__r4_input_6_10_2z00 = BUNSPEC;
	static obj_t BGl__sendzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t);
	extern obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32580ze3ze5zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_symbol4324z00zz__r4_input_6_10_2z00 = BUNSPEC;
	extern obj_t make_string_sans_fill(long);
	BGL_EXPORTED_DECL long BGl_sendzd2charszd2zz__r4_input_6_10_2z00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2positionzd2ze3linezd2envz31zz__r4_input_6_10_2z00,
		BgL_bgl_za762fileza7d2positi4330z00,
		BGl_z62filezd2positionzd2ze3linez81zz__r4_input_6_10_2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_peekzd2bytezd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__peekza7d2byteza7d2za74331za7, opt_generic_entry,
		BGl__peekzd2bytezd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzf2lalrpzd2envz20zz__r4_input_6_10_2z00,
		BgL_bgl_za762readza7f2lalrpza74332za7, va_generic_entry,
		BGl_z62readzf2lalrpz90zz__r4_input_6_10_2z00, BUNSPEC, -4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2charszd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2charsza7d24333z00, opt_generic_entry,
		BGl__readzd2charszd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2linezd2newlinezd2envzd2zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2lineza7d2n4334z00, opt_generic_entry,
		BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2charsz12zd2envz12zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2charsza7124335z00, opt_generic_entry,
		BGl__readzd2charsz12zc0zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2charzd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2charza7d2za74336za7, opt_generic_entry,
		BGl__readzd2charzd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_charzd2readyzf3zd2envzf3zz__r4_input_6_10_2z00,
		BgL_bgl__charza7d2readyza7f34337z00, opt_generic_entry,
		BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unreadzd2charz12zd2envz12zz__r4_input_6_10_2z00,
		BgL_bgl__unreadza7d2charza714338z00, opt_generic_entry,
		BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string4300z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4300za700za7za7_4339za7, "Unread char failed", 18);
	      DEFINE_STRING(BGl_string4301z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4301za700za7za7_4340za7, "_unread-string!", 15);
	      DEFINE_STRING(BGl_string4303z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4303za700za7za7_4341za7, "unread-string!", 14);
	      DEFINE_STRING(BGl_string4304z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4304za700za7za7_4342za7, "Unread string failed", 20);
	      DEFINE_STRING(BGl_string4305z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4305za700za7za7_4343za7, "_unread-substring!", 18);
	      DEFINE_STRING(BGl_string4307z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4307za700za7za7_4344za7, "unread-substring!", 17);
	      DEFINE_STRING(BGl_string4308z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4308za700za7za7_4345za7, "Invalid positional parameters", 29);
	      DEFINE_STRING(BGl_string4310z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4310za700za7za7_4346za7, "unread-sustring!", 16);
	      DEFINE_STRING(BGl_string4311z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4311za700za7za7_4347za7, "&port->string-list", 18);
	      DEFINE_STRING(BGl_string4312z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4312za700za7za7_4348za7, "file:", 5);
	      DEFINE_STRING(BGl_string4313z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4313za700za7za7_4349za7, "&file->string", 13);
	      DEFINE_STRING(BGl_string4314z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4314za700za7za7_4350za7, "&send-chars/size", 16);
	      DEFINE_STRING(BGl_string4315z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4315za700za7za7_4351za7, "output-port", 11);
	      DEFINE_STRING(BGl_string4316z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4316za700za7za7_4352za7, "belong", 6);
	      DEFINE_STRING(BGl_string4317z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4317za700za7za7_4353za7, "_send-chars", 11);
	      DEFINE_STRING(BGl_string4319z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4319za700za7za7_4354za7, "send-chars", 10);
	      DEFINE_STRING(BGl_string4320z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4320za700za7za7_4355za7, "Illegal size", 12);
	      DEFINE_STRING(BGl_string4321z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4321za700za7za7_4356za7, "Illegal offset", 14);
	      DEFINE_STRING(BGl_string4322z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4322za700za7za7_4357za7, "_send-file", 10);
	      DEFINE_STRING(BGl_string4323z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4323za700za7za7_4358za7, "&file-lines", 11);
	      DEFINE_STRING(BGl_string4325z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4325za700za7za7_4359za7, "file-lines", 10);
	      DEFINE_STRING(BGl_string4326z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4326za700za7za7_4360za7, "Illegal files", 13);
	      DEFINE_STRING(BGl_string4327z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4327za700za7za7_4361za7, "&file-position->line", 20);
	      DEFINE_STRING(BGl_string4328z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4328za700za7za7_4362za7, "_password", 9);
	      DEFINE_STRING(BGl_string4329z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4329za700za7za7_4363za7, "__r4_input_6_10_2", 17);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2fillzd2stringz12zd2envzc0zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2fillza7d2s4364z00, opt_generic_entry,
		BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_eofzd2objectzd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl_za762eofza7d2objectza74365za7,
		BGl_z62eofzd2objectzb0zz__r4_input_6_10_2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_eofzd2objectzf3zd2envzf3zz__r4_input_6_10_2z00,
		BgL_bgl_za762eofza7d2objectza74366za7,
		BGl_z62eofzd2objectzf3z43zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_passwordzd2envzd2zz__r4_input_6_10_2z00,
		BgL_bgl__passwordza700za7za7__4367za7, opt_generic_entry,
		BGl__passwordz00zz__r4_input_6_10_2z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string4272z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4272za700za7za7_4368za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string4273z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4273za700za7za7_4369za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string4274z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4274za700za7za7_4370za7, "Illegal range `~a'", 18);
	      DEFINE_STRING(BGl_string4275z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4275za700za7za7_4371za7, "the-substring", 13);
	      DEFINE_STRING(BGl_string4277z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4277za700za7za7_4372za7, "read/rp", 7);
	      DEFINE_STRING(BGl_string4278z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4278za700za7za7_4373za7, "Grammar arity mismatch", 22);
	      DEFINE_STRING(BGl_string4279z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4279za700za7za7_4374za7, "/tmp/4.4a/runtime/Ieee/input.scm",
		32);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_portzd2ze3stringzd2listzd2envz31zz__r4_input_6_10_2z00,
		BgL_bgl_za762portza7d2za7e3str4375za7,
		BGl_z62portzd2ze3stringzd2listz81zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4280z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4280za700za7za7_4376za7, "&read/rp", 8);
	      DEFINE_STRING(BGl_string4281z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4281za700za7za7_4377za7, "procedure", 9);
	      DEFINE_STRING(BGl_string4282z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4282za700za7za7_4378za7, "input-port", 10);
	      DEFINE_STRING(BGl_string4283z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4283za700za7za7_4379za7, "&read/lalrp", 11);
	      DEFINE_STRING(BGl_string4284z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4284za700za7za7_4380za7, "_char-ready?", 12);
	      DEFINE_STRING(BGl_string4285z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4285za700za7za7_4381za7, "", 0);
	      DEFINE_STRING(BGl_string4287z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4287za700za7za7_4382za7, "read-chars", 10);
	      DEFINE_STRING(BGl_string4288z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4288za700za7za7_4383za7, "integer", 7);
	      DEFINE_STRING(BGl_string4289z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4289za700za7za7_4384za7, "Illegal negative length", 23);
	      DEFINE_STRING(BGl_string4290z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4290za700za7za7_4385za7, "_read-chars!", 12);
	      DEFINE_STRING(BGl_string4291z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4291za700za7za7_4386za7, "bstring", 7);
	      DEFINE_STRING(BGl_string4293z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4293za700za7za7_4387za7, "read-chars!", 11);
	      DEFINE_STRING(BGl_string4294z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4294za700za7za7_4388za7, "_read-fill-string!", 18);
	      DEFINE_STRING(BGl_string4295z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4295za700za7za7_4389za7, "bint", 4);
	      DEFINE_STRING(BGl_string4296z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4296za700za7za7_4390za7, "_unread-char!", 13);
	      DEFINE_STRING(BGl_string4297z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4297za700za7za7_4391za7, "bchar", 5);
	      DEFINE_STRING(BGl_string4299z00zz__r4_input_6_10_2z00,
		BgL_bgl_string4299za700za7za7_4392za7, "unread-char!", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2bytezd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2byteza7d2za74393za7, opt_generic_entry,
		BGl__readzd2bytezd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sendzd2filezd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__sendza7d2fileza7d2za74394za7, opt_generic_entry,
		BGl__sendzd2filezd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_filezd2ze3stringzd2envze3zz__r4_input_6_10_2z00,
		BgL_bgl_za762fileza7d2za7e3str4395za7,
		BGl_z62filezd2ze3stringz53zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_filezd2lineszd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl_za762fileza7d2linesza74396za7,
		BGl_z62filezd2lineszb0zz__r4_input_6_10_2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_peekzd2charzd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__peekza7d2charza7d2za74397za7, opt_generic_entry,
		BGl__peekzd2charzd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sendzd2charszf2siza7ezd2envz55zz__r4_input_6_10_2z00,
		BgL_bgl_za762sendza7d2charsza74398za7,
		BGl_z62sendzd2charszf2siza7eze5zz__r4_input_6_10_2z00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzf2rpzd2envz20zz__r4_input_6_10_2z00,
		BgL_bgl_za762readza7f2rpza790za74399z00, va_generic_entry,
		BGl_z62readzf2rpz90zz__r4_input_6_10_2z00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2linezd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2lineza7d2za74400za7, opt_generic_entry,
		BGl__readzd2linezd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2stringzd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2stringza7d4401z00, opt_generic_entry,
		BGl__readzd2stringzd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unreadzd2stringz12zd2envz12zz__r4_input_6_10_2z00,
		BgL_bgl__unreadza7d2string4402za7, opt_generic_entry,
		BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2ofzd2stringszd2envzd2zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2ofza7d2str4403z00, opt_generic_entry,
		BGl__readzd2ofzd2stringsz00zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2lineszd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__readza7d2linesza7d24404z00, opt_generic_entry,
		BGl__readzd2lineszd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_sendzd2charszd2envz00zz__r4_input_6_10_2z00,
		BgL_bgl__sendza7d2charsza7d24405z00, opt_generic_entry,
		BGl__sendzd2charszd2zz__r4_input_6_10_2z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unreadzd2substringz12zd2envz12zz__r4_input_6_10_2z00,
		BgL_bgl__unreadza7d2substr4406za7, opt_generic_entry,
		BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00, BFALSE, -1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol4276z00zz__r4_input_6_10_2z00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00));
		     ADD_ROOT((void *) (&BGl_symbol4286z00zz__r4_input_6_10_2z00));
		     ADD_ROOT((void *) (&BGl_symbol4292z00zz__r4_input_6_10_2z00));
		     ADD_ROOT((void *) (&BGl_symbol4298z00zz__r4_input_6_10_2z00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00));
		     ADD_ROOT((void *) (&BGl_symbol4302z00zz__r4_input_6_10_2z00));
		     ADD_ROOT((void *) (&BGl_symbol4306z00zz__r4_input_6_10_2z00));
		     ADD_ROOT((void *) (&BGl_symbol4309z00zz__r4_input_6_10_2z00));
		     ADD_ROOT((void *) (&BGl_symbol4318z00zz__r4_input_6_10_2z00));
		     ADD_ROOT((void *) (&BGl_symbol4324z00zz__r4_input_6_10_2z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long
		BgL_checksumz00_7459, char *BgL_fromz00_7460)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_input_6_10_2z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_input_6_10_2z00();
					BGl_cnstzd2initzd2zz__r4_input_6_10_2z00();
					BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00();
					return BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__r4_input_6_10_2z00()
	{
		{	/* Ieee/input.scm 14 */
			BGl_symbol4276z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string4277z00zz__r4_input_6_10_2z00);
			BGl_symbol4286z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string4287z00zz__r4_input_6_10_2z00);
			BGl_symbol4292z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string4293z00zz__r4_input_6_10_2z00);
			BGl_symbol4298z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string4299z00zz__r4_input_6_10_2z00);
			BGl_symbol4302z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string4303z00zz__r4_input_6_10_2z00);
			BGl_symbol4306z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string4307z00zz__r4_input_6_10_2z00);
			BGl_symbol4309z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string4310z00zz__r4_input_6_10_2z00);
			BGl_symbol4318z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string4319z00zz__r4_input_6_10_2z00);
			return (BGl_symbol4324z00zz__r4_input_6_10_2z00 =
				bstring_to_symbol(BGl_string4325z00zz__r4_input_6_10_2z00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_input_6_10_2z00()
	{
		{	/* Ieee/input.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__r4_input_6_10_2z00()
	{
		{	/* Ieee/input.scm 14 */
			{	/* Ieee/input.scm 307 */
				obj_t BgL_zc3z04anonymousza31392ze3z87_6986;

				{
					int BgL_tmpz00_7478;

					BgL_tmpz00_7478 = (int) (((long) 0));
					BgL_zc3z04anonymousza31392ze3z87_6986 =
						MAKE_EL_PROCEDURE(BgL_tmpz00_7478);
				}
				return (BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00
					= BgL_zc3z04anonymousza31392ze3z87_6986, BUNSPEC);
			}
		}

	}



/* &<@anonymous:1392> */
	obj_t BGl_z62zc3z04anonymousza31392ze3ze5zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_6987, obj_t BgL_iportz00_6988)
	{
		{	/* Ieee/input.scm 307 */
			{
				obj_t BgL_iportz00_7307;
				long BgL_lastzd2matchzd2_7308;
				long BgL_forwardz00_7309;
				long BgL_bufposz00_7310;
				obj_t BgL_iportz00_7280;
				long BgL_lastzd2matchzd2_7281;
				long BgL_forwardz00_7282;
				long BgL_bufposz00_7283;
				obj_t BgL_iportz00_7267;
				long BgL_lastzd2matchzd2_7268;
				long BgL_forwardz00_7269;
				long BgL_bufposz00_7270;
				obj_t BgL_iportz00_7242;
				long BgL_lastzd2matchzd2_7243;
				long BgL_forwardz00_7244;
				long BgL_bufposz00_7245;
				obj_t BgL_iportz00_7231;
				long BgL_lastzd2matchzd2_7232;
				long BgL_forwardz00_7233;
				long BgL_bufposz00_7234;
				obj_t BgL_iportz00_7218;
				long BgL_lastzd2matchzd2_7219;
				long BgL_forwardz00_7220;
				long BgL_bufposz00_7221;
				obj_t BgL_iportz00_7205;
				long BgL_lastzd2matchzd2_7206;
				long BgL_forwardz00_7207;
				long BgL_bufposz00_7208;
				int BgL_minz00_7187;
				int BgL_maxz00_7188;

			BgL_ignorez00_7160:
				{	/* Ieee/input.scm 307 */
					long BgL_res3467z00_7170;

					{	/* Ieee/input.scm 307 */
						obj_t BgL_tmpz00_7481;

						BgL_tmpz00_7481 = ((obj_t) BgL_iportz00_6988);
						BgL_res3467z00_7170 = RGC_START_MATCH(BgL_tmpz00_7481);
					} BgL_res3467z00_7170;
				}
				{	/* Ieee/input.scm 307 */
					long BgL_matchz00_7171;

					{	/* Ieee/input.scm 307 */
						long BgL_arg1573z00_7172;
						long BgL_arg1574z00_7173;

						{	/* Ieee/input.scm 307 */
							long BgL_res3468z00_7174;

							{	/* Ieee/input.scm 307 */
								obj_t BgL_tmpz00_7484;

								BgL_tmpz00_7484 = ((obj_t) BgL_iportz00_6988);
								BgL_res3468z00_7174 = RGC_BUFFER_FORWARD(BgL_tmpz00_7484);
							}
							BgL_arg1573z00_7172 = BgL_res3468z00_7174;
						}
						{	/* Ieee/input.scm 307 */
							long BgL_res3469z00_7175;

							{	/* Ieee/input.scm 307 */
								obj_t BgL_tmpz00_7487;

								BgL_tmpz00_7487 = ((obj_t) BgL_iportz00_6988);
								BgL_res3469z00_7175 = RGC_BUFFER_BUFPOS(BgL_tmpz00_7487);
							}
							BgL_arg1574z00_7173 = BgL_res3469z00_7175;
						}
						BgL_iportz00_7231 = BgL_iportz00_6988;
						BgL_lastzd2matchzd2_7232 = ((long) 4);
						BgL_forwardz00_7233 = BgL_arg1573z00_7172;
						BgL_bufposz00_7234 = BgL_arg1574z00_7173;
					BgL_statezd20zd21103z00_7165:
						if ((BgL_forwardz00_7233 == BgL_bufposz00_7234))
							{	/* Ieee/input.scm 307 */
								bool_t BgL_test4409z00_7492;

								{	/* Ieee/input.scm 307 */
									bool_t BgL_res3403z00_7235;

									BgL_res3403z00_7235 =
										rgc_fill_buffer(((obj_t) BgL_iportz00_7231));
									BgL_test4409z00_7492 = BgL_res3403z00_7235;
								}
								if (BgL_test4409z00_7492)
									{	/* Ieee/input.scm 307 */
										long BgL_arg1440z00_7236;
										long BgL_arg1441z00_7237;

										{	/* Ieee/input.scm 307 */
											long BgL_res3404z00_7238;

											{	/* Ieee/input.scm 307 */
												obj_t BgL_tmpz00_7495;

												BgL_tmpz00_7495 = ((obj_t) BgL_iportz00_7231);
												BgL_res3404z00_7238 =
													RGC_BUFFER_FORWARD(BgL_tmpz00_7495);
											}
											BgL_arg1440z00_7236 = BgL_res3404z00_7238;
										}
										{	/* Ieee/input.scm 307 */
											long BgL_res3405z00_7239;

											{	/* Ieee/input.scm 307 */
												obj_t BgL_tmpz00_7498;

												BgL_tmpz00_7498 = ((obj_t) BgL_iportz00_7231);
												BgL_res3405z00_7239 =
													RGC_BUFFER_BUFPOS(BgL_tmpz00_7498);
											}
											BgL_arg1441z00_7237 = BgL_res3405z00_7239;
										}
										{
											long BgL_bufposz00_7502;
											long BgL_forwardz00_7501;

											BgL_forwardz00_7501 = BgL_arg1440z00_7236;
											BgL_bufposz00_7502 = BgL_arg1441z00_7237;
											BgL_bufposz00_7234 = BgL_bufposz00_7502;
											BgL_forwardz00_7233 = BgL_forwardz00_7501;
											goto BgL_statezd20zd21103z00_7165;
										}
									}
								else
									{	/* Ieee/input.scm 307 */
										BgL_matchz00_7171 = BgL_lastzd2matchzd2_7232;
									}
							}
						else
							{	/* Ieee/input.scm 307 */
								int BgL_curz00_7240;

								{	/* Ieee/input.scm 307 */
									int BgL_res3406z00_7241;

									{	/* Ieee/input.scm 307 */
										obj_t BgL_tmpz00_7503;

										BgL_tmpz00_7503 = ((obj_t) BgL_iportz00_7231);
										BgL_res3406z00_7241 =
											RGC_BUFFER_GET_CHAR(BgL_tmpz00_7503, BgL_forwardz00_7233);
									}
									BgL_curz00_7240 = BgL_res3406z00_7241;
								}
								{	/* Ieee/input.scm 307 */

									if (((long) (BgL_curz00_7240) == ((long) 34)))
										{	/* Ieee/input.scm 307 */
											BgL_iportz00_7280 = BgL_iportz00_7231;
											BgL_lastzd2matchzd2_7281 = BgL_lastzd2matchzd2_7232;
											BgL_forwardz00_7282 = (((long) 1) + BgL_forwardz00_7233);
											BgL_bufposz00_7283 = BgL_bufposz00_7234;
										BgL_statezd23zd21106z00_7168:
											{	/* Ieee/input.scm 307 */
												long BgL_newzd2matchzd2_7284;

												{	/* Ieee/input.scm 307 */
													long BgL_res3351z00_7285;

													{	/* Ieee/input.scm 307 */
														obj_t BgL_tmpz00_7509;

														BgL_tmpz00_7509 = ((obj_t) BgL_iportz00_7280);
														BgL_res3351z00_7285 =
															RGC_STOP_MATCH(BgL_tmpz00_7509,
															BgL_forwardz00_7282);
													} BgL_res3351z00_7285;
												}
												BgL_newzd2matchzd2_7284 = ((long) 1);
												if ((BgL_forwardz00_7282 == BgL_bufposz00_7283))
													{	/* Ieee/input.scm 307 */
														bool_t BgL_test4412z00_7514;

														{	/* Ieee/input.scm 307 */
															bool_t BgL_res3353z00_7286;

															BgL_res3353z00_7286 =
																rgc_fill_buffer(((obj_t) BgL_iportz00_7280));
															BgL_test4412z00_7514 = BgL_res3353z00_7286;
														}
														if (BgL_test4412z00_7514)
															{	/* Ieee/input.scm 307 */
																long BgL_arg1406z00_7287;
																long BgL_arg1407z00_7288;

																{	/* Ieee/input.scm 307 */
																	long BgL_res3354z00_7289;

																	{	/* Ieee/input.scm 307 */
																		obj_t BgL_tmpz00_7517;

																		BgL_tmpz00_7517 =
																			((obj_t) BgL_iportz00_7280);
																		BgL_res3354z00_7289 =
																			RGC_BUFFER_FORWARD(BgL_tmpz00_7517);
																	}
																	BgL_arg1406z00_7287 = BgL_res3354z00_7289;
																}
																{	/* Ieee/input.scm 307 */
																	long BgL_res3355z00_7290;

																	{	/* Ieee/input.scm 307 */
																		obj_t BgL_tmpz00_7520;

																		BgL_tmpz00_7520 =
																			((obj_t) BgL_iportz00_7280);
																		BgL_res3355z00_7290 =
																			RGC_BUFFER_BUFPOS(BgL_tmpz00_7520);
																	}
																	BgL_arg1407z00_7288 = BgL_res3355z00_7290;
																}
																{
																	long BgL_bufposz00_7524;
																	long BgL_forwardz00_7523;

																	BgL_forwardz00_7523 = BgL_arg1406z00_7287;
																	BgL_bufposz00_7524 = BgL_arg1407z00_7288;
																	BgL_bufposz00_7283 = BgL_bufposz00_7524;
																	BgL_forwardz00_7282 = BgL_forwardz00_7523;
																	goto BgL_statezd23zd21106z00_7168;
																}
															}
														else
															{	/* Ieee/input.scm 307 */
																BgL_matchz00_7171 = BgL_newzd2matchzd2_7284;
															}
													}
												else
													{	/* Ieee/input.scm 307 */
														int BgL_curz00_7291;

														{	/* Ieee/input.scm 307 */
															int BgL_res3356z00_7292;

															{	/* Ieee/input.scm 307 */
																obj_t BgL_tmpz00_7525;

																BgL_tmpz00_7525 = ((obj_t) BgL_iportz00_7280);
																BgL_res3356z00_7292 =
																	RGC_BUFFER_GET_CHAR(BgL_tmpz00_7525,
																	BgL_forwardz00_7282);
															}
															BgL_curz00_7291 = BgL_res3356z00_7292;
														}
														{	/* Ieee/input.scm 307 */

															if (((long) (BgL_curz00_7291) == ((long) 92)))
																{	/* Ieee/input.scm 307 */
																	long BgL_arg1409z00_7293;

																	BgL_arg1409z00_7293 =
																		(((long) 1) + BgL_forwardz00_7282);
																	{
																		long BgL_forwardz00_7295;
																		long BgL_bufposz00_7296;

																		BgL_forwardz00_7295 = BgL_arg1409z00_7293;
																		BgL_bufposz00_7296 = BgL_bufposz00_7283;
																	BgL_statezd26zd21109z00_7294:
																		if (
																			(BgL_forwardz00_7295 ==
																				BgL_bufposz00_7296))
																			{	/* Ieee/input.scm 307 */
																				bool_t BgL_test4415z00_7534;

																				{	/* Ieee/input.scm 307 */
																					bool_t BgL_res3360z00_7297;

																					BgL_res3360z00_7297 =
																						rgc_fill_buffer(
																						((obj_t) BgL_iportz00_7280));
																					BgL_test4415z00_7534 =
																						BgL_res3360z00_7297;
																				}
																				if (BgL_test4415z00_7534)
																					{	/* Ieee/input.scm 307 */
																						long BgL_arg1463z00_7298;
																						long BgL_arg1464z00_7299;

																						{	/* Ieee/input.scm 307 */
																							long BgL_res3361z00_7300;

																							{	/* Ieee/input.scm 307 */
																								obj_t BgL_tmpz00_7537;

																								BgL_tmpz00_7537 =
																									((obj_t) BgL_iportz00_7280);
																								BgL_res3361z00_7300 =
																									RGC_BUFFER_FORWARD
																									(BgL_tmpz00_7537);
																							}
																							BgL_arg1463z00_7298 =
																								BgL_res3361z00_7300;
																						}
																						{	/* Ieee/input.scm 307 */
																							long BgL_res3362z00_7301;

																							{	/* Ieee/input.scm 307 */
																								obj_t BgL_tmpz00_7540;

																								BgL_tmpz00_7540 =
																									((obj_t) BgL_iportz00_7280);
																								BgL_res3362z00_7301 =
																									RGC_BUFFER_BUFPOS
																									(BgL_tmpz00_7540);
																							}
																							BgL_arg1464z00_7299 =
																								BgL_res3362z00_7301;
																						}
																						{
																							long BgL_bufposz00_7544;
																							long BgL_forwardz00_7543;

																							BgL_forwardz00_7543 =
																								BgL_arg1463z00_7298;
																							BgL_bufposz00_7544 =
																								BgL_arg1464z00_7299;
																							BgL_bufposz00_7296 =
																								BgL_bufposz00_7544;
																							BgL_forwardz00_7295 =
																								BgL_forwardz00_7543;
																							goto BgL_statezd26zd21109z00_7294;
																						}
																					}
																				else
																					{	/* Ieee/input.scm 307 */
																						BgL_matchz00_7171 =
																							BgL_newzd2matchzd2_7284;
																					}
																			}
																		else
																			{	/* Ieee/input.scm 307 */
																				int BgL_curz00_7302;

																				{	/* Ieee/input.scm 307 */
																					int BgL_res3363z00_7303;

																					{	/* Ieee/input.scm 307 */
																						obj_t BgL_tmpz00_7545;

																						BgL_tmpz00_7545 =
																							((obj_t) BgL_iportz00_7280);
																						BgL_res3363z00_7303 =
																							RGC_BUFFER_GET_CHAR
																							(BgL_tmpz00_7545,
																							BgL_forwardz00_7295);
																					}
																					BgL_curz00_7302 = BgL_res3363z00_7303;
																				}
																				{	/* Ieee/input.scm 307 */

																					if (
																						((long) (BgL_curz00_7302) ==
																							((long) 10)))
																						{	/* Ieee/input.scm 307 */
																							BgL_matchz00_7171 =
																								BgL_newzd2matchzd2_7284;
																						}
																					else
																						{	/* Ieee/input.scm 307 */
																							BgL_iportz00_7242 =
																								BgL_iportz00_7280;
																							BgL_lastzd2matchzd2_7243 =
																								BgL_newzd2matchzd2_7284;
																							BgL_forwardz00_7244 =
																								(((long) 1) +
																								BgL_forwardz00_7295);
																							BgL_bufposz00_7245 =
																								BgL_bufposz00_7296;
																						BgL_statezd24zd21107z00_7166:
																							if (
																								(BgL_forwardz00_7244 ==
																									BgL_bufposz00_7245))
																								{	/* Ieee/input.scm 307 */
																									bool_t BgL_test4418z00_7553;

																									{	/* Ieee/input.scm 307 */
																										bool_t BgL_res3383z00_7246;

																										BgL_res3383z00_7246 =
																											rgc_fill_buffer(
																											((obj_t)
																												BgL_iportz00_7242));
																										BgL_test4418z00_7553 =
																											BgL_res3383z00_7246;
																									}
																									if (BgL_test4418z00_7553)
																										{	/* Ieee/input.scm 307 */
																											long BgL_arg1428z00_7247;
																											long BgL_arg1429z00_7248;

																											{	/* Ieee/input.scm 307 */
																												long
																													BgL_res3384z00_7249;
																												{	/* Ieee/input.scm 307 */
																													obj_t BgL_tmpz00_7556;

																													BgL_tmpz00_7556 =
																														((obj_t)
																														BgL_iportz00_7242);
																													BgL_res3384z00_7249 =
																														RGC_BUFFER_FORWARD
																														(BgL_tmpz00_7556);
																												}
																												BgL_arg1428z00_7247 =
																													BgL_res3384z00_7249;
																											}
																											{	/* Ieee/input.scm 307 */
																												long
																													BgL_res3385z00_7250;
																												{	/* Ieee/input.scm 307 */
																													obj_t BgL_tmpz00_7559;

																													BgL_tmpz00_7559 =
																														((obj_t)
																														BgL_iportz00_7242);
																													BgL_res3385z00_7250 =
																														RGC_BUFFER_BUFPOS
																														(BgL_tmpz00_7559);
																												}
																												BgL_arg1429z00_7248 =
																													BgL_res3385z00_7250;
																											}
																											{
																												long BgL_bufposz00_7563;
																												long
																													BgL_forwardz00_7562;
																												BgL_forwardz00_7562 =
																													BgL_arg1428z00_7247;
																												BgL_bufposz00_7563 =
																													BgL_arg1429z00_7248;
																												BgL_bufposz00_7245 =
																													BgL_bufposz00_7563;
																												BgL_forwardz00_7244 =
																													BgL_forwardz00_7562;
																												goto
																													BgL_statezd24zd21107z00_7166;
																											}
																										}
																									else
																										{	/* Ieee/input.scm 307 */
																											BgL_matchz00_7171 =
																												BgL_lastzd2matchzd2_7243;
																										}
																								}
																							else
																								{	/* Ieee/input.scm 307 */
																									int BgL_curz00_7251;

																									{	/* Ieee/input.scm 307 */
																										int BgL_res3386z00_7252;

																										{	/* Ieee/input.scm 307 */
																											obj_t BgL_tmpz00_7564;

																											BgL_tmpz00_7564 =
																												((obj_t)
																												BgL_iportz00_7242);
																											BgL_res3386z00_7252 =
																												RGC_BUFFER_GET_CHAR
																												(BgL_tmpz00_7564,
																												BgL_forwardz00_7244);
																										}
																										BgL_curz00_7251 =
																											BgL_res3386z00_7252;
																									}
																									{	/* Ieee/input.scm 307 */

																										if (
																											((long) (BgL_curz00_7251)
																												== ((long) 92)))
																											{	/* Ieee/input.scm 307 */
																												long
																													BgL_arg1431z00_7253;
																												BgL_arg1431z00_7253 =
																													(((long) 1) +
																													BgL_forwardz00_7244);
																												{
																													long
																														BgL_forwardz00_7255;
																													long
																														BgL_bufposz00_7256;
																													BgL_forwardz00_7255 =
																														BgL_arg1431z00_7253;
																													BgL_bufposz00_7256 =
																														BgL_bufposz00_7245;
																												BgL_statezd26zd21109z00_7254:
																													if (
																														(BgL_forwardz00_7255
																															==
																															BgL_bufposz00_7256))
																														{	/* Ieee/input.scm 307 */
																															bool_t
																																BgL_test4421z00_7573;
																															{	/* Ieee/input.scm 307 */
																																bool_t
																																	BgL_res3390z00_7257;
																																BgL_res3390z00_7257
																																	=
																																	rgc_fill_buffer
																																	(((obj_t)
																																		BgL_iportz00_7242));
																																BgL_test4421z00_7573
																																	=
																																	BgL_res3390z00_7257;
																															}
																															if (BgL_test4421z00_7573)
																																{	/* Ieee/input.scm 307 */
																																	long
																																		BgL_arg1463z00_7258;
																																	long
																																		BgL_arg1464z00_7259;
																																	{	/* Ieee/input.scm 307 */
																																		long
																																			BgL_res3391z00_7260;
																																		{	/* Ieee/input.scm 307 */
																																			obj_t
																																				BgL_tmpz00_7576;
																																			BgL_tmpz00_7576
																																				=
																																				((obj_t)
																																				BgL_iportz00_7242);
																																			BgL_res3391z00_7260
																																				=
																																				RGC_BUFFER_FORWARD
																																				(BgL_tmpz00_7576);
																																		}
																																		BgL_arg1463z00_7258
																																			=
																																			BgL_res3391z00_7260;
																																	}
																																	{	/* Ieee/input.scm 307 */
																																		long
																																			BgL_res3392z00_7261;
																																		{	/* Ieee/input.scm 307 */
																																			obj_t
																																				BgL_tmpz00_7579;
																																			BgL_tmpz00_7579
																																				=
																																				((obj_t)
																																				BgL_iportz00_7242);
																																			BgL_res3392z00_7261
																																				=
																																				RGC_BUFFER_BUFPOS
																																				(BgL_tmpz00_7579);
																																		}
																																		BgL_arg1464z00_7259
																																			=
																																			BgL_res3392z00_7261;
																																	}
																																	{
																																		long
																																			BgL_bufposz00_7583;
																																		long
																																			BgL_forwardz00_7582;
																																		BgL_forwardz00_7582
																																			=
																																			BgL_arg1463z00_7258;
																																		BgL_bufposz00_7583
																																			=
																																			BgL_arg1464z00_7259;
																																		BgL_bufposz00_7256
																																			=
																																			BgL_bufposz00_7583;
																																		BgL_forwardz00_7255
																																			=
																																			BgL_forwardz00_7582;
																																		goto
																																			BgL_statezd26zd21109z00_7254;
																																	}
																																}
																															else
																																{	/* Ieee/input.scm 307 */
																																	BgL_matchz00_7171
																																		=
																																		BgL_lastzd2matchzd2_7243;
																																}
																														}
																													else
																														{	/* Ieee/input.scm 307 */
																															int
																																BgL_curz00_7262;
																															{	/* Ieee/input.scm 307 */
																																int
																																	BgL_res3393z00_7263;
																																{	/* Ieee/input.scm 307 */
																																	obj_t
																																		BgL_tmpz00_7584;
																																	BgL_tmpz00_7584
																																		=
																																		((obj_t)
																																		BgL_iportz00_7242);
																																	BgL_res3393z00_7263
																																		=
																																		RGC_BUFFER_GET_CHAR
																																		(BgL_tmpz00_7584,
																																		BgL_forwardz00_7255);
																																}
																																BgL_curz00_7262
																																	=
																																	BgL_res3393z00_7263;
																															}
																															{	/* Ieee/input.scm 307 */

																																if (
																																	((long)
																																		(BgL_curz00_7262)
																																		==
																																		((long)
																																			10)))
																																	{	/* Ieee/input.scm 307 */
																																		BgL_matchz00_7171
																																			=
																																			BgL_lastzd2matchzd2_7243;
																																	}
																																else
																																	{
																																		long
																																			BgL_bufposz00_7592;
																																		long
																																			BgL_forwardz00_7590;
																																		BgL_forwardz00_7590
																																			=
																																			(((long)
																																				1) +
																																			BgL_forwardz00_7255);
																																		BgL_bufposz00_7592
																																			=
																																			BgL_bufposz00_7256;
																																		BgL_bufposz00_7245
																																			=
																																			BgL_bufposz00_7592;
																																		BgL_forwardz00_7244
																																			=
																																			BgL_forwardz00_7590;
																																		goto
																																			BgL_statezd24zd21107z00_7166;
																																	}
																															}
																														}
																												}
																											}
																										else
																											{	/* Ieee/input.scm 307 */
																												if (
																													((long)
																														(BgL_curz00_7251) ==
																														((long) 34)))
																													{	/* Ieee/input.scm 307 */
																														long
																															BgL_arg1433z00_7264;
																														BgL_arg1433z00_7264
																															=
																															(((long) 1) +
																															BgL_forwardz00_7244);
																														{	/* Ieee/input.scm 307 */
																															long
																																BgL_newzd2matchzd2_7265;
																															{	/* Ieee/input.scm 307 */
																																long
																																	BgL_res3398z00_7266;
																																{	/* Ieee/input.scm 307 */
																																	obj_t
																																		BgL_tmpz00_7597;
																																	BgL_tmpz00_7597
																																		=
																																		((obj_t)
																																		BgL_iportz00_7242);
																																	BgL_res3398z00_7266
																																		=
																																		RGC_STOP_MATCH
																																		(BgL_tmpz00_7597,
																																		BgL_arg1433z00_7264);
																																} BgL_res3398z00_7266;
																															}
																															BgL_newzd2matchzd2_7265
																																= ((long) 2);
																															BgL_matchz00_7171
																																=
																																BgL_newzd2matchzd2_7265;
																													}}
																												else
																													{	/* Ieee/input.scm 307 */
																														bool_t
																															BgL_test4424z00_7600;
																														if (((long)
																																(BgL_curz00_7251)
																																== ((long) 34)))
																															{	/* Ieee/input.scm 307 */
																																BgL_test4424z00_7600
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Ieee/input.scm 307 */
																																BgL_test4424z00_7600
																																	=
																																	((long)
																																	(BgL_curz00_7251)
																																	==
																																	((long) 92));
																															}
																														if (BgL_test4424z00_7600)
																															{	/* Ieee/input.scm 307 */
																																BgL_matchz00_7171
																																	=
																																	BgL_lastzd2matchzd2_7243;
																															}
																														else
																															{
																																long
																																	BgL_forwardz00_7606;
																																BgL_forwardz00_7606
																																	=
																																	(((long) 1) +
																																	BgL_forwardz00_7244);
																																BgL_forwardz00_7244
																																	=
																																	BgL_forwardz00_7606;
																																goto
																																	BgL_statezd24zd21107z00_7166;
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
															else
																{	/* Ieee/input.scm 307 */
																	if (((long) (BgL_curz00_7291) == ((long) 34)))
																		{	/* Ieee/input.scm 307 */
																			long BgL_arg1411z00_7304;

																			BgL_arg1411z00_7304 =
																				(((long) 1) + BgL_forwardz00_7282);
																			{	/* Ieee/input.scm 307 */
																				long BgL_newzd2matchzd2_7305;

																				{	/* Ieee/input.scm 307 */
																					long BgL_res3368z00_7306;

																					{	/* Ieee/input.scm 307 */
																						obj_t BgL_tmpz00_7613;

																						BgL_tmpz00_7613 =
																							((obj_t) BgL_iportz00_7280);
																						BgL_res3368z00_7306 =
																							RGC_STOP_MATCH(BgL_tmpz00_7613,
																							BgL_arg1411z00_7304);
																					} BgL_res3368z00_7306;
																				}
																				BgL_newzd2matchzd2_7305 = ((long) 2);
																				BgL_matchz00_7171 =
																					BgL_newzd2matchzd2_7305;
																		}}
																	else
																		{	/* Ieee/input.scm 307 */
																			bool_t BgL_test4427z00_7616;

																			if (
																				((long) (BgL_curz00_7291) ==
																					((long) 34)))
																				{	/* Ieee/input.scm 307 */
																					BgL_test4427z00_7616 = ((bool_t) 1);
																				}
																			else
																				{	/* Ieee/input.scm 307 */
																					BgL_test4427z00_7616 =
																						(
																						(long) (BgL_curz00_7291) ==
																						((long) 92));
																				}
																			if (BgL_test4427z00_7616)
																				{	/* Ieee/input.scm 307 */
																					BgL_matchz00_7171 =
																						BgL_newzd2matchzd2_7284;
																				}
																			else
																				{
																					long BgL_bufposz00_7626;
																					long BgL_forwardz00_7624;
																					long BgL_lastzd2matchzd2_7623;
																					obj_t BgL_iportz00_7622;

																					BgL_iportz00_7622 = BgL_iportz00_7280;
																					BgL_lastzd2matchzd2_7623 =
																						BgL_newzd2matchzd2_7284;
																					BgL_forwardz00_7624 =
																						(((long) 1) + BgL_forwardz00_7282);
																					BgL_bufposz00_7626 =
																						BgL_bufposz00_7283;
																					BgL_bufposz00_7245 =
																						BgL_bufposz00_7626;
																					BgL_forwardz00_7244 =
																						BgL_forwardz00_7624;
																					BgL_lastzd2matchzd2_7243 =
																						BgL_lastzd2matchzd2_7623;
																					BgL_iportz00_7242 = BgL_iportz00_7622;
																					goto BgL_statezd24zd21107z00_7166;
																				}
																		}
																}
														}
													}
											}
										}
									else
										{	/* Ieee/input.scm 307 */
											bool_t BgL_test4429z00_7628;

											{	/* Ieee/input.scm 307 */
												bool_t BgL_test4430z00_7629;

												if (((long) (BgL_curz00_7240) == ((long) 10)))
													{	/* Ieee/input.scm 307 */
														BgL_test4430z00_7629 = ((bool_t) 1);
													}
												else
													{	/* Ieee/input.scm 307 */
														BgL_test4430z00_7629 =
															((long) (BgL_curz00_7240) == ((long) 9));
													}
												if (BgL_test4430z00_7629)
													{	/* Ieee/input.scm 307 */
														BgL_test4429z00_7628 = ((bool_t) 1);
													}
												else
													{	/* Ieee/input.scm 307 */
														BgL_test4429z00_7628 =
															((long) (BgL_curz00_7240) == ((long) 32));
											}}
											if (BgL_test4429z00_7628)
												{	/* Ieee/input.scm 307 */
													BgL_iportz00_7267 = BgL_iportz00_7231;
													BgL_lastzd2matchzd2_7268 = BgL_lastzd2matchzd2_7232;
													BgL_forwardz00_7269 =
														(((long) 1) + BgL_forwardz00_7233);
													BgL_bufposz00_7270 = BgL_bufposz00_7234;
												BgL_statezd22zd21105z00_7167:
													{	/* Ieee/input.scm 307 */
														long BgL_newzd2matchzd2_7271;

														{	/* Ieee/input.scm 307 */
															long BgL_res3372z00_7272;

															{	/* Ieee/input.scm 307 */
																obj_t BgL_tmpz00_7637;

																BgL_tmpz00_7637 = ((obj_t) BgL_iportz00_7267);
																BgL_res3372z00_7272 =
																	RGC_STOP_MATCH(BgL_tmpz00_7637,
																	BgL_forwardz00_7269);
															} BgL_res3372z00_7272;
														}
														BgL_newzd2matchzd2_7271 = ((long) 0);
														if ((BgL_forwardz00_7269 == BgL_bufposz00_7270))
															{	/* Ieee/input.scm 307 */
																bool_t BgL_test4433z00_7642;

																{	/* Ieee/input.scm 307 */
																	bool_t BgL_res3374z00_7273;

																	BgL_res3374z00_7273 =
																		rgc_fill_buffer(
																		((obj_t) BgL_iportz00_7267));
																	BgL_test4433z00_7642 = BgL_res3374z00_7273;
																}
																if (BgL_test4433z00_7642)
																	{	/* Ieee/input.scm 307 */
																		long BgL_arg1418z00_7274;
																		long BgL_arg1419z00_7275;

																		{	/* Ieee/input.scm 307 */
																			long BgL_res3375z00_7276;

																			{	/* Ieee/input.scm 307 */
																				obj_t BgL_tmpz00_7645;

																				BgL_tmpz00_7645 =
																					((obj_t) BgL_iportz00_7267);
																				BgL_res3375z00_7276 =
																					RGC_BUFFER_FORWARD(BgL_tmpz00_7645);
																			}
																			BgL_arg1418z00_7274 = BgL_res3375z00_7276;
																		}
																		{	/* Ieee/input.scm 307 */
																			long BgL_res3376z00_7277;

																			{	/* Ieee/input.scm 307 */
																				obj_t BgL_tmpz00_7648;

																				BgL_tmpz00_7648 =
																					((obj_t) BgL_iportz00_7267);
																				BgL_res3376z00_7277 =
																					RGC_BUFFER_BUFPOS(BgL_tmpz00_7648);
																			}
																			BgL_arg1419z00_7275 = BgL_res3376z00_7277;
																		}
																		{
																			long BgL_bufposz00_7652;
																			long BgL_forwardz00_7651;

																			BgL_forwardz00_7651 = BgL_arg1418z00_7274;
																			BgL_bufposz00_7652 = BgL_arg1419z00_7275;
																			BgL_bufposz00_7270 = BgL_bufposz00_7652;
																			BgL_forwardz00_7269 = BgL_forwardz00_7651;
																			goto BgL_statezd22zd21105z00_7167;
																		}
																	}
																else
																	{	/* Ieee/input.scm 307 */
																		BgL_matchz00_7171 = BgL_newzd2matchzd2_7271;
																	}
															}
														else
															{	/* Ieee/input.scm 307 */
																int BgL_curz00_7278;

																{	/* Ieee/input.scm 307 */
																	int BgL_res3377z00_7279;

																	{	/* Ieee/input.scm 307 */
																		obj_t BgL_tmpz00_7653;

																		BgL_tmpz00_7653 =
																			((obj_t) BgL_iportz00_7267);
																		BgL_res3377z00_7279 =
																			RGC_BUFFER_GET_CHAR(BgL_tmpz00_7653,
																			BgL_forwardz00_7269);
																	}
																	BgL_curz00_7278 = BgL_res3377z00_7279;
																}
																{	/* Ieee/input.scm 307 */

																	{	/* Ieee/input.scm 307 */
																		bool_t BgL_test4434z00_7656;

																		{	/* Ieee/input.scm 307 */
																			bool_t BgL_test4435z00_7657;

																			if (
																				((long) (BgL_curz00_7278) ==
																					((long) 10)))
																				{	/* Ieee/input.scm 307 */
																					BgL_test4435z00_7657 = ((bool_t) 1);
																				}
																			else
																				{	/* Ieee/input.scm 307 */
																					BgL_test4435z00_7657 =
																						(
																						(long) (BgL_curz00_7278) ==
																						((long) 9));
																				}
																			if (BgL_test4435z00_7657)
																				{	/* Ieee/input.scm 307 */
																					BgL_test4434z00_7656 = ((bool_t) 1);
																				}
																			else
																				{	/* Ieee/input.scm 307 */
																					BgL_test4434z00_7656 =
																						(
																						(long) (BgL_curz00_7278) ==
																						((long) 32));
																		}}
																		if (BgL_test4434z00_7656)
																			{	/* Ieee/input.scm 307 */
																				BgL_iportz00_7205 = BgL_iportz00_7267;
																				BgL_lastzd2matchzd2_7206 =
																					BgL_newzd2matchzd2_7271;
																				BgL_forwardz00_7207 =
																					(((long) 1) + BgL_forwardz00_7269);
																				BgL_bufposz00_7208 = BgL_bufposz00_7270;
																			BgL_statezd28zd21111z00_7163:
																				{	/* Ieee/input.scm 307 */
																					long BgL_newzd2matchzd2_7209;

																					{	/* Ieee/input.scm 307 */
																						long BgL_res3440z00_7210;

																						{	/* Ieee/input.scm 307 */
																							obj_t BgL_tmpz00_7665;

																							BgL_tmpz00_7665 =
																								((obj_t) BgL_iportz00_7205);
																							BgL_res3440z00_7210 =
																								RGC_STOP_MATCH(BgL_tmpz00_7665,
																								BgL_forwardz00_7207);
																						} BgL_res3440z00_7210;
																					}
																					BgL_newzd2matchzd2_7209 = ((long) 0);
																					if (
																						(BgL_forwardz00_7207 ==
																							BgL_bufposz00_7208))
																						{	/* Ieee/input.scm 307 */
																							bool_t BgL_test4438z00_7670;

																							{	/* Ieee/input.scm 307 */
																								bool_t BgL_res3442z00_7211;

																								BgL_res3442z00_7211 =
																									rgc_fill_buffer(
																									((obj_t) BgL_iportz00_7205));
																								BgL_test4438z00_7670 =
																									BgL_res3442z00_7211;
																							}
																							if (BgL_test4438z00_7670)
																								{	/* Ieee/input.scm 307 */
																									long BgL_arg1471z00_7212;
																									long BgL_arg1472z00_7213;

																									{	/* Ieee/input.scm 307 */
																										long BgL_res3443z00_7214;

																										{	/* Ieee/input.scm 307 */
																											obj_t BgL_tmpz00_7673;

																											BgL_tmpz00_7673 =
																												((obj_t)
																												BgL_iportz00_7205);
																											BgL_res3443z00_7214 =
																												RGC_BUFFER_FORWARD
																												(BgL_tmpz00_7673);
																										}
																										BgL_arg1471z00_7212 =
																											BgL_res3443z00_7214;
																									}
																									{	/* Ieee/input.scm 307 */
																										long BgL_res3444z00_7215;

																										{	/* Ieee/input.scm 307 */
																											obj_t BgL_tmpz00_7676;

																											BgL_tmpz00_7676 =
																												((obj_t)
																												BgL_iportz00_7205);
																											BgL_res3444z00_7215 =
																												RGC_BUFFER_BUFPOS
																												(BgL_tmpz00_7676);
																										}
																										BgL_arg1472z00_7213 =
																											BgL_res3444z00_7215;
																									}
																									{
																										long BgL_bufposz00_7680;
																										long BgL_forwardz00_7679;

																										BgL_forwardz00_7679 =
																											BgL_arg1471z00_7212;
																										BgL_bufposz00_7680 =
																											BgL_arg1472z00_7213;
																										BgL_bufposz00_7208 =
																											BgL_bufposz00_7680;
																										BgL_forwardz00_7207 =
																											BgL_forwardz00_7679;
																										goto
																											BgL_statezd28zd21111z00_7163;
																									}
																								}
																							else
																								{	/* Ieee/input.scm 307 */
																									BgL_matchz00_7171 =
																										BgL_newzd2matchzd2_7209;
																								}
																						}
																					else
																						{	/* Ieee/input.scm 307 */
																							int BgL_curz00_7216;

																							{	/* Ieee/input.scm 307 */
																								int BgL_res3445z00_7217;

																								{	/* Ieee/input.scm 307 */
																									obj_t BgL_tmpz00_7681;

																									BgL_tmpz00_7681 =
																										((obj_t) BgL_iportz00_7205);
																									BgL_res3445z00_7217 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_tmpz00_7681,
																										BgL_forwardz00_7207);
																								}
																								BgL_curz00_7216 =
																									BgL_res3445z00_7217;
																							}
																							{	/* Ieee/input.scm 307 */

																								{	/* Ieee/input.scm 307 */
																									bool_t BgL_test4439z00_7684;

																									{	/* Ieee/input.scm 307 */
																										bool_t BgL_test4440z00_7685;

																										if (
																											((long) (BgL_curz00_7216)
																												== ((long) 10)))
																											{	/* Ieee/input.scm 307 */
																												BgL_test4440z00_7685 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Ieee/input.scm 307 */
																												BgL_test4440z00_7685 =
																													(
																													(long)
																													(BgL_curz00_7216) ==
																													((long) 9));
																											}
																										if (BgL_test4440z00_7685)
																											{	/* Ieee/input.scm 307 */
																												BgL_test4439z00_7684 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Ieee/input.scm 307 */
																												BgL_test4439z00_7684 =
																													(
																													(long)
																													(BgL_curz00_7216) ==
																													((long) 32));
																									}}
																									if (BgL_test4439z00_7684)
																										{
																											long BgL_forwardz00_7694;
																											long
																												BgL_lastzd2matchzd2_7693;
																											BgL_lastzd2matchzd2_7693 =
																												BgL_newzd2matchzd2_7209;
																											BgL_forwardz00_7694 =
																												(((long) 1) +
																												BgL_forwardz00_7207);
																											BgL_forwardz00_7207 =
																												BgL_forwardz00_7694;
																											BgL_lastzd2matchzd2_7206 =
																												BgL_lastzd2matchzd2_7693;
																											goto
																												BgL_statezd28zd21111z00_7163;
																										}
																									else
																										{	/* Ieee/input.scm 307 */
																											BgL_matchz00_7171 =
																												BgL_newzd2matchzd2_7209;
																										}
																								}
																							}
																						}
																				}
																			}
																		else
																			{	/* Ieee/input.scm 307 */
																				BgL_matchz00_7171 =
																					BgL_newzd2matchzd2_7271;
																			}
																	}
																}
															}
													}
												}
											else
												{	/* Ieee/input.scm 307 */
													BgL_iportz00_7307 = BgL_iportz00_7231;
													BgL_lastzd2matchzd2_7308 = BgL_lastzd2matchzd2_7232;
													BgL_forwardz00_7309 =
														(((long) 1) + BgL_forwardz00_7233);
													BgL_bufposz00_7310 = BgL_bufposz00_7234;
												BgL_statezd21zd21104z00_7169:
													{	/* Ieee/input.scm 307 */
														long BgL_newzd2matchzd2_7311;

														{	/* Ieee/input.scm 307 */
															long BgL_res3340z00_7312;

															{	/* Ieee/input.scm 307 */
																obj_t BgL_tmpz00_7698;

																BgL_tmpz00_7698 = ((obj_t) BgL_iportz00_7307);
																BgL_res3340z00_7312 =
																	RGC_STOP_MATCH(BgL_tmpz00_7698,
																	BgL_forwardz00_7309);
															} BgL_res3340z00_7312;
														}
														BgL_newzd2matchzd2_7311 = ((long) 3);
														if ((BgL_forwardz00_7309 == BgL_bufposz00_7310))
															{	/* Ieee/input.scm 307 */
																bool_t BgL_test4443z00_7703;

																{	/* Ieee/input.scm 307 */
																	bool_t BgL_res3342z00_7313;

																	BgL_res3342z00_7313 =
																		rgc_fill_buffer(
																		((obj_t) BgL_iportz00_7307));
																	BgL_test4443z00_7703 = BgL_res3342z00_7313;
																}
																if (BgL_test4443z00_7703)
																	{	/* Ieee/input.scm 307 */
																		long BgL_arg1396z00_7314;
																		long BgL_arg1397z00_7315;

																		{	/* Ieee/input.scm 307 */
																			long BgL_res3343z00_7316;

																			{	/* Ieee/input.scm 307 */
																				obj_t BgL_tmpz00_7706;

																				BgL_tmpz00_7706 =
																					((obj_t) BgL_iportz00_7307);
																				BgL_res3343z00_7316 =
																					RGC_BUFFER_FORWARD(BgL_tmpz00_7706);
																			}
																			BgL_arg1396z00_7314 = BgL_res3343z00_7316;
																		}
																		{	/* Ieee/input.scm 307 */
																			long BgL_res3344z00_7317;

																			{	/* Ieee/input.scm 307 */
																				obj_t BgL_tmpz00_7709;

																				BgL_tmpz00_7709 =
																					((obj_t) BgL_iportz00_7307);
																				BgL_res3344z00_7317 =
																					RGC_BUFFER_BUFPOS(BgL_tmpz00_7709);
																			}
																			BgL_arg1397z00_7315 = BgL_res3344z00_7317;
																		}
																		{
																			long BgL_bufposz00_7713;
																			long BgL_forwardz00_7712;

																			BgL_forwardz00_7712 = BgL_arg1396z00_7314;
																			BgL_bufposz00_7713 = BgL_arg1397z00_7315;
																			BgL_bufposz00_7310 = BgL_bufposz00_7713;
																			BgL_forwardz00_7309 = BgL_forwardz00_7712;
																			goto BgL_statezd21zd21104z00_7169;
																		}
																	}
																else
																	{	/* Ieee/input.scm 307 */
																		BgL_matchz00_7171 = BgL_newzd2matchzd2_7311;
																	}
															}
														else
															{	/* Ieee/input.scm 307 */
																int BgL_curz00_7318;

																{	/* Ieee/input.scm 307 */
																	int BgL_res3345z00_7319;

																	{	/* Ieee/input.scm 307 */
																		obj_t BgL_tmpz00_7714;

																		BgL_tmpz00_7714 =
																			((obj_t) BgL_iportz00_7307);
																		BgL_res3345z00_7319 =
																			RGC_BUFFER_GET_CHAR(BgL_tmpz00_7714,
																			BgL_forwardz00_7309);
																	}
																	BgL_curz00_7318 = BgL_res3345z00_7319;
																}
																{	/* Ieee/input.scm 307 */

																	{	/* Ieee/input.scm 307 */
																		bool_t BgL_test4444z00_7717;

																		{	/* Ieee/input.scm 307 */
																			bool_t BgL_test4445z00_7718;

																			if (
																				((long) (BgL_curz00_7318) ==
																					((long) 10)))
																				{	/* Ieee/input.scm 307 */
																					BgL_test4445z00_7718 = ((bool_t) 1);
																				}
																			else
																				{	/* Ieee/input.scm 307 */
																					BgL_test4445z00_7718 =
																						(
																						(long) (BgL_curz00_7318) ==
																						((long) 9));
																				}
																			if (BgL_test4445z00_7718)
																				{	/* Ieee/input.scm 307 */
																					BgL_test4444z00_7717 = ((bool_t) 1);
																				}
																			else
																				{	/* Ieee/input.scm 307 */
																					if (
																						((long) (BgL_curz00_7318) ==
																							((long) 32)))
																						{	/* Ieee/input.scm 307 */
																							BgL_test4444z00_7717 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Ieee/input.scm 307 */
																							BgL_test4444z00_7717 =
																								(
																								(long) (BgL_curz00_7318) ==
																								((long) 34));
																		}}}
																		if (BgL_test4444z00_7717)
																			{	/* Ieee/input.scm 307 */
																				BgL_matchz00_7171 =
																					BgL_newzd2matchzd2_7311;
																			}
																		else
																			{	/* Ieee/input.scm 307 */
																				BgL_iportz00_7218 = BgL_iportz00_7307;
																				BgL_lastzd2matchzd2_7219 =
																					BgL_newzd2matchzd2_7311;
																				BgL_forwardz00_7220 =
																					(((long) 1) + BgL_forwardz00_7309);
																				BgL_bufposz00_7221 = BgL_bufposz00_7310;
																			BgL_statezd29zd21112z00_7164:
																				{	/* Ieee/input.scm 307 */
																					long BgL_newzd2matchzd2_7222;

																					{	/* Ieee/input.scm 307 */
																						long BgL_res3414z00_7223;

																						{	/* Ieee/input.scm 307 */
																							obj_t BgL_tmpz00_7729;

																							BgL_tmpz00_7729 =
																								((obj_t) BgL_iportz00_7218);
																							BgL_res3414z00_7223 =
																								RGC_STOP_MATCH(BgL_tmpz00_7729,
																								BgL_forwardz00_7220);
																						} BgL_res3414z00_7223;
																					}
																					BgL_newzd2matchzd2_7222 = ((long) 3);
																					if (
																						(BgL_forwardz00_7220 ==
																							BgL_bufposz00_7221))
																						{	/* Ieee/input.scm 307 */
																							bool_t BgL_test4449z00_7734;

																							{	/* Ieee/input.scm 307 */
																								bool_t BgL_res3416z00_7224;

																								BgL_res3416z00_7224 =
																									rgc_fill_buffer(
																									((obj_t) BgL_iportz00_7218));
																								BgL_test4449z00_7734 =
																									BgL_res3416z00_7224;
																							}
																							if (BgL_test4449z00_7734)
																								{	/* Ieee/input.scm 307 */
																									long BgL_arg1453z00_7225;
																									long BgL_arg1454z00_7226;

																									{	/* Ieee/input.scm 307 */
																										long BgL_res3417z00_7227;

																										{	/* Ieee/input.scm 307 */
																											obj_t BgL_tmpz00_7737;

																											BgL_tmpz00_7737 =
																												((obj_t)
																												BgL_iportz00_7218);
																											BgL_res3417z00_7227 =
																												RGC_BUFFER_FORWARD
																												(BgL_tmpz00_7737);
																										}
																										BgL_arg1453z00_7225 =
																											BgL_res3417z00_7227;
																									}
																									{	/* Ieee/input.scm 307 */
																										long BgL_res3418z00_7228;

																										{	/* Ieee/input.scm 307 */
																											obj_t BgL_tmpz00_7740;

																											BgL_tmpz00_7740 =
																												((obj_t)
																												BgL_iportz00_7218);
																											BgL_res3418z00_7228 =
																												RGC_BUFFER_BUFPOS
																												(BgL_tmpz00_7740);
																										}
																										BgL_arg1454z00_7226 =
																											BgL_res3418z00_7228;
																									}
																									{
																										long BgL_bufposz00_7744;
																										long BgL_forwardz00_7743;

																										BgL_forwardz00_7743 =
																											BgL_arg1453z00_7225;
																										BgL_bufposz00_7744 =
																											BgL_arg1454z00_7226;
																										BgL_bufposz00_7221 =
																											BgL_bufposz00_7744;
																										BgL_forwardz00_7220 =
																											BgL_forwardz00_7743;
																										goto
																											BgL_statezd29zd21112z00_7164;
																									}
																								}
																							else
																								{	/* Ieee/input.scm 307 */
																									BgL_matchz00_7171 =
																										BgL_newzd2matchzd2_7222;
																								}
																						}
																					else
																						{	/* Ieee/input.scm 307 */
																							int BgL_curz00_7229;

																							{	/* Ieee/input.scm 307 */
																								int BgL_res3419z00_7230;

																								{	/* Ieee/input.scm 307 */
																									obj_t BgL_tmpz00_7745;

																									BgL_tmpz00_7745 =
																										((obj_t) BgL_iportz00_7218);
																									BgL_res3419z00_7230 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_tmpz00_7745,
																										BgL_forwardz00_7220);
																								}
																								BgL_curz00_7229 =
																									BgL_res3419z00_7230;
																							}
																							{	/* Ieee/input.scm 307 */

																								{	/* Ieee/input.scm 307 */
																									bool_t BgL_test4450z00_7748;

																									{	/* Ieee/input.scm 307 */
																										bool_t BgL_test4451z00_7749;

																										if (
																											((long) (BgL_curz00_7229)
																												== ((long) 10)))
																											{	/* Ieee/input.scm 307 */
																												BgL_test4451z00_7749 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Ieee/input.scm 307 */
																												BgL_test4451z00_7749 =
																													(
																													(long)
																													(BgL_curz00_7229) ==
																													((long) 9));
																											}
																										if (BgL_test4451z00_7749)
																											{	/* Ieee/input.scm 307 */
																												BgL_test4450z00_7748 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Ieee/input.scm 307 */
																												if (
																													((long)
																														(BgL_curz00_7229) ==
																														((long) 32)))
																													{	/* Ieee/input.scm 307 */
																														BgL_test4450z00_7748
																															= ((bool_t) 1);
																													}
																												else
																													{	/* Ieee/input.scm 307 */
																														BgL_test4450z00_7748
																															=
																															((long)
																															(BgL_curz00_7229)
																															== ((long) 34));
																									}}}
																									if (BgL_test4450z00_7748)
																										{	/* Ieee/input.scm 307 */
																											BgL_matchz00_7171 =
																												BgL_newzd2matchzd2_7222;
																										}
																									else
																										{
																											long BgL_forwardz00_7761;
																											long
																												BgL_lastzd2matchzd2_7760;
																											BgL_lastzd2matchzd2_7760 =
																												BgL_newzd2matchzd2_7222;
																											BgL_forwardz00_7761 =
																												(((long) 1) +
																												BgL_forwardz00_7220);
																											BgL_forwardz00_7220 =
																												BgL_forwardz00_7761;
																											BgL_lastzd2matchzd2_7219 =
																												BgL_lastzd2matchzd2_7760;
																											goto
																												BgL_statezd29zd21112z00_7164;
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
					{	/* Ieee/input.scm 307 */
						obj_t BgL_tmpz00_7765;

						BgL_tmpz00_7765 = ((obj_t) BgL_iportz00_6988);
						RGC_SET_FILEPOS(BgL_tmpz00_7765);
					}
					switch (BgL_matchz00_7171)
						{
						case ((long) 4):

							{	/* Ieee/input.scm 307 */
								bool_t BgL_test4454z00_7768;

								{	/* Ieee/input.scm 307 */
									long BgL_arg1564z00_7184;

									{	/* Ieee/input.scm 307 */
										long BgL_res3464z00_7185;

										{	/* Ieee/input.scm 307 */
											obj_t BgL_tmpz00_7769;

											BgL_tmpz00_7769 = ((obj_t) BgL_iportz00_6988);
											BgL_res3464z00_7185 =
												RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_7769);
										}
										BgL_arg1564z00_7184 = BgL_res3464z00_7185;
									}
									BgL_test4454z00_7768 = (BgL_arg1564z00_7184 == ((long) 0));
								}
								if (BgL_test4454z00_7768)
									{	/* Ieee/input.scm 307 */
										return BEOF;
									}
								else
									{	/* Ieee/input.scm 307 */
										unsigned char BgL_res3466z00_7186;

										{	/* Ieee/input.scm 307 */
											obj_t BgL_tmpz00_7773;

											BgL_tmpz00_7773 = ((obj_t) BgL_iportz00_6988);
											BgL_res3466z00_7186 =
												RGC_BUFFER_CHARACTER(BgL_tmpz00_7773);
										}
										return BCHAR(BgL_res3466z00_7186);
									}
							}
							break;
						case ((long) 3):

							{	/* Ieee/input.scm 315 */
								obj_t BgL_res3472z00_7176;

								{	/* Ieee/input.scm 307 */
									long BgL_arg1483z00_7177;

									{	/* Ieee/input.scm 307 */
										long BgL_res3470z00_7178;

										{	/* Ieee/input.scm 307 */
											obj_t BgL_tmpz00_7777;

											BgL_tmpz00_7777 = ((obj_t) BgL_iportz00_6988);
											BgL_res3470z00_7178 =
												RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_7777);
										}
										BgL_arg1483z00_7177 = BgL_res3470z00_7178;
									}
									{	/* Ieee/input.scm 307 */
										obj_t BgL_res3471z00_7179;

										BgL_res3471z00_7179 =
											rgc_buffer_substring(
											((obj_t) BgL_iportz00_6988), ((long) 0),
											BgL_arg1483z00_7177);
										BgL_res3472z00_7176 = BgL_res3471z00_7179;
								}}
								return BgL_res3472z00_7176;
							}
							break;
						case ((long) 2):

							BgL_minz00_7187 = (int) (((long) 1));
							BgL_maxz00_7188 = (int) (((long) -1));
							if (((long) (BgL_maxz00_7188) < (long) (BgL_minz00_7187)))
								{	/* Ieee/input.scm 307 */
									long BgL_arg1486z00_7189;

									{	/* Ieee/input.scm 307 */
										long BgL_res3453z00_7190;

										{	/* Ieee/input.scm 307 */
											obj_t BgL_tmpz00_7786;

											BgL_tmpz00_7786 = ((obj_t) BgL_iportz00_6988);
											BgL_res3453z00_7190 =
												RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_7786);
										}
										BgL_arg1486z00_7189 = BgL_res3453z00_7190;
									}
									{	/* Ieee/input.scm 307 */
										long BgL_za72za7_7191;

										BgL_za72za7_7191 = (long) (BgL_maxz00_7188);
										BgL_maxz00_7188 =
											(int) ((BgL_arg1486z00_7189 + BgL_za72za7_7191));
								}}
							else
								{	/* Ieee/input.scm 307 */
									BFALSE;
								}
							{	/* Ieee/input.scm 307 */
								bool_t BgL_test4456z00_7792;

								if (((long) (BgL_minz00_7187) >= ((long) 0)))
									{	/* Ieee/input.scm 307 */
										if (((long) (BgL_maxz00_7188) >= (long) (BgL_minz00_7187)))
											{	/* Ieee/input.scm 307 */
												long BgL_arg1495z00_7192;

												{	/* Ieee/input.scm 307 */
													long BgL_res3457z00_7193;

													{	/* Ieee/input.scm 307 */
														obj_t BgL_tmpz00_7800;

														BgL_tmpz00_7800 = ((obj_t) BgL_iportz00_6988);
														BgL_res3457z00_7193 =
															RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_7800);
													}
													BgL_arg1495z00_7192 = BgL_res3457z00_7193;
												}
												BgL_test4456z00_7792 =
													((long) (BgL_maxz00_7188) <= BgL_arg1495z00_7192);
											}
										else
											{	/* Ieee/input.scm 307 */
												BgL_test4456z00_7792 = ((bool_t) 0);
											}
									}
								else
									{	/* Ieee/input.scm 307 */
										BgL_test4456z00_7792 = ((bool_t) 0);
									}
								if (BgL_test4456z00_7792)
									{	/* Ieee/input.scm 307 */
										obj_t BgL_res3459z00_7194;

										{	/* Ieee/input.scm 307 */
											long BgL_startz00_7195;
											long BgL_stopz00_7196;

											BgL_startz00_7195 = (long) (BgL_minz00_7187);
											BgL_stopz00_7196 = (long) (BgL_maxz00_7188);
											BgL_res3459z00_7194 =
												rgc_buffer_substring(
												((obj_t) BgL_iportz00_6988), BgL_startz00_7195,
												BgL_stopz00_7196);
										}
										return BgL_res3459z00_7194;
									}
								else
									{	/* Ieee/input.scm 307 */
										obj_t BgL_arg1491z00_7197;
										obj_t BgL_arg1492z00_7198;

										{	/* Ieee/input.scm 307 */
											obj_t BgL_arg1493z00_7199;

											{	/* Ieee/input.scm 307 */
												obj_t BgL_res3462z00_7200;

												{	/* Ieee/input.scm 307 */
													long BgL_arg1483z00_7201;

													{	/* Ieee/input.scm 307 */
														long BgL_res3460z00_7202;

														{	/* Ieee/input.scm 307 */
															obj_t BgL_tmpz00_7809;

															BgL_tmpz00_7809 = ((obj_t) BgL_iportz00_6988);
															BgL_res3460z00_7202 =
																RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_7809);
														}
														BgL_arg1483z00_7201 = BgL_res3460z00_7202;
													}
													{	/* Ieee/input.scm 307 */
														obj_t BgL_res3461z00_7203;

														BgL_res3461z00_7203 =
															rgc_buffer_substring(
															((obj_t) BgL_iportz00_6988), ((long) 0),
															BgL_arg1483z00_7201);
														BgL_res3462z00_7200 = BgL_res3461z00_7203;
												}}
												BgL_arg1493z00_7199 = BgL_res3462z00_7200;
											}
											{	/* Ieee/input.scm 307 */
												obj_t BgL_list1494z00_7204;

												BgL_list1494z00_7204 =
													MAKE_YOUNG_PAIR(BgL_arg1493z00_7199, BNIL);
												BgL_arg1491z00_7197 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string4274z00zz__r4_input_6_10_2z00,
													BgL_list1494z00_7204);
										}}
										BgL_arg1492z00_7198 =
											MAKE_YOUNG_PAIR(BINT(BgL_minz00_7187),
											BINT(BgL_maxz00_7188));
										return
											BGl_errorz00zz__errorz00
											(BGl_string4275z00zz__r4_input_6_10_2z00,
											BgL_arg1491z00_7197, BgL_arg1492z00_7198);
									}
							}
							break;
						case ((long) 1):

							{	/* Ieee/input.scm 311 */
								obj_t BgL_res3475z00_7180;

								{	/* Ieee/input.scm 307 */
									long BgL_arg1483z00_7181;

									{	/* Ieee/input.scm 307 */
										long BgL_res3473z00_7182;

										{	/* Ieee/input.scm 307 */
											obj_t BgL_tmpz00_7822;

											BgL_tmpz00_7822 = ((obj_t) BgL_iportz00_6988);
											BgL_res3473z00_7182 =
												RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_7822);
										}
										BgL_arg1483z00_7181 = BgL_res3473z00_7182;
									}
									{	/* Ieee/input.scm 307 */
										obj_t BgL_res3474z00_7183;

										BgL_res3474z00_7183 =
											rgc_buffer_substring(
											((obj_t) BgL_iportz00_6988), ((long) 0),
											BgL_arg1483z00_7181);
										BgL_res3475z00_7180 = BgL_res3474z00_7183;
								}}
								return BgL_res3475z00_7180;
							}
							break;
						case ((long) 0):

							goto BgL_ignorez00_7160;
							break;
						default:
							return
								BGl_errorz00zz__errorz00
								(BGl_string4272z00zz__r4_input_6_10_2z00,
								BGl_string4273z00zz__r4_input_6_10_2z00,
								BINT(BgL_matchz00_7171));
						}
				}
			}
		}

	}



/* read/rp */
	BGL_EXPORTED_DEF obj_t BGl_readzf2rpzf2zz__r4_input_6_10_2z00(obj_t
		BgL_grammarz00_3, obj_t BgL_portz00_4, obj_t BgL_optsz00_5)
	{
		{	/* Ieee/input.scm 106 */
			if (PAIRP(BgL_optsz00_5))
				{	/* Ieee/input.scm 109 */
					obj_t BgL_auxz00_7832;

					{	/* Ieee/input.scm 109 */
						obj_t BgL_list1580z00_1551;

						BgL_list1580z00_1551 = MAKE_YOUNG_PAIR(BgL_optsz00_5, BNIL);
						BgL_auxz00_7832 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_portz00_4,
							BgL_list1580z00_1551);
					}
					return apply(BgL_grammarz00_3, BgL_auxz00_7832);
				}
			else
				{	/* Ieee/input.scm 108 */
					if (PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_3, (int) (((long) 1))))
						{	/* Ieee/input.scm 110 */
							return
								PROCEDURE_ENTRY(BgL_grammarz00_3) (BgL_grammarz00_3,
								BgL_portz00_4, BEOA);
						}
					else
						{	/* Ieee/input.scm 110 */
							if (PROCEDURE_CORRECT_ARITYP(BgL_grammarz00_3,
									(int) (((long) 2))))
								{	/* Ieee/input.scm 112 */
									return
										PROCEDURE_ENTRY(BgL_grammarz00_3) (BgL_grammarz00_3,
										BgL_portz00_4, BUNSPEC, BEOA);
								}
							else
								{	/* Ieee/input.scm 112 */
									return
										BGl_errorz00zz__errorz00
										(BGl_symbol4276z00zz__r4_input_6_10_2z00,
										BGl_string4278z00zz__r4_input_6_10_2z00, BgL_grammarz00_3);
								}
						}
				}
		}

	}



/* &read/rp */
	obj_t BGl_z62readzf2rpz90zz__r4_input_6_10_2z00(obj_t BgL_envz00_6989,
		obj_t BgL_grammarz00_6990, obj_t BgL_portz00_6991, obj_t BgL_optsz00_6992)
	{
		{	/* Ieee/input.scm 106 */
			{	/* Ieee/input.scm 108 */
				obj_t BgL_auxz00_7859;
				obj_t BgL_auxz00_7852;

				if (INPUT_PORTP(BgL_portz00_6991))
					{	/* Ieee/input.scm 108 */
						BgL_auxz00_7859 = BgL_portz00_6991;
					}
				else
					{
						obj_t BgL_auxz00_7862;

						BgL_auxz00_7862 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string4279z00zz__r4_input_6_10_2z00, BINT(((long) 4665)),
							BGl_string4280z00zz__r4_input_6_10_2z00,
							BGl_string4282z00zz__r4_input_6_10_2z00, BgL_portz00_6991);
						FAILURE(BgL_auxz00_7862, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_grammarz00_6990))
					{	/* Ieee/input.scm 108 */
						BgL_auxz00_7852 = BgL_grammarz00_6990;
					}
				else
					{
						obj_t BgL_auxz00_7855;

						BgL_auxz00_7855 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string4279z00zz__r4_input_6_10_2z00, BINT(((long) 4665)),
							BGl_string4280z00zz__r4_input_6_10_2z00,
							BGl_string4281z00zz__r4_input_6_10_2z00, BgL_grammarz00_6990);
						FAILURE(BgL_auxz00_7855, BFALSE, BFALSE);
					}
				return
					BGl_readzf2rpzf2zz__r4_input_6_10_2z00(BgL_auxz00_7852,
					BgL_auxz00_7859, BgL_optsz00_6992);
			}
		}

	}



/* read/lalrp */
	BGL_EXPORTED_DEF obj_t BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(obj_t
		BgL_lalrz00_6, obj_t BgL_rgcz00_7, obj_t BgL_portz00_8,
		obj_t BgL_eofzd2funzf3z21_9)
	{
		{	/* Ieee/input.scm 120 */
			if (NULLP(BgL_eofzd2funzf3z21_9))
				{	/* Ieee/input.scm 121 */
					return
						PROCEDURE_ENTRY(BgL_lalrz00_6) (BgL_lalrz00_6, BgL_rgcz00_7,
						BgL_portz00_8, BGl_eofzd2objectzf3zd2envzf3zz__r4_input_6_10_2z00,
						BEOA);
				}
			else
				{	/* Ieee/input.scm 123 */
					obj_t BgL_arg1584z00_4831;

					BgL_arg1584z00_4831 = CAR(((obj_t) BgL_eofzd2funzf3z21_9));
					return
						PROCEDURE_ENTRY(BgL_lalrz00_6) (BgL_lalrz00_6, BgL_rgcz00_7,
						BgL_portz00_8, BgL_arg1584z00_4831, BEOA);
				}
		}

	}



/* &read/lalrp */
	obj_t BGl_z62readzf2lalrpz90zz__r4_input_6_10_2z00(obj_t BgL_envz00_6993,
		obj_t BgL_lalrz00_6994, obj_t BgL_rgcz00_6995, obj_t BgL_portz00_6996,
		obj_t BgL_eofzd2funzf3z21_6997)
	{
		{	/* Ieee/input.scm 120 */
			{	/* Ieee/input.scm 121 */
				obj_t BgL_auxz00_7897;
				obj_t BgL_auxz00_7890;
				obj_t BgL_auxz00_7883;

				if (INPUT_PORTP(BgL_portz00_6996))
					{	/* Ieee/input.scm 121 */
						BgL_auxz00_7897 = BgL_portz00_6996;
					}
				else
					{
						obj_t BgL_auxz00_7900;

						BgL_auxz00_7900 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string4279z00zz__r4_input_6_10_2z00, BINT(((long) 5184)),
							BGl_string4283z00zz__r4_input_6_10_2z00,
							BGl_string4282z00zz__r4_input_6_10_2z00, BgL_portz00_6996);
						FAILURE(BgL_auxz00_7900, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_rgcz00_6995))
					{	/* Ieee/input.scm 121 */
						BgL_auxz00_7890 = BgL_rgcz00_6995;
					}
				else
					{
						obj_t BgL_auxz00_7893;

						BgL_auxz00_7893 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string4279z00zz__r4_input_6_10_2z00, BINT(((long) 5184)),
							BGl_string4283z00zz__r4_input_6_10_2z00,
							BGl_string4281z00zz__r4_input_6_10_2z00, BgL_rgcz00_6995);
						FAILURE(BgL_auxz00_7893, BFALSE, BFALSE);
					}
				if (PROCEDUREP(BgL_lalrz00_6994))
					{	/* Ieee/input.scm 121 */
						BgL_auxz00_7883 = BgL_lalrz00_6994;
					}
				else
					{
						obj_t BgL_auxz00_7886;

						BgL_auxz00_7886 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string4279z00zz__r4_input_6_10_2z00, BINT(((long) 5184)),
							BGl_string4283z00zz__r4_input_6_10_2z00,
							BGl_string4281z00zz__r4_input_6_10_2z00, BgL_lalrz00_6994);
						FAILURE(BgL_auxz00_7886, BFALSE, BFALSE);
					}
				return
					BGl_readzf2lalrpzf2zz__r4_input_6_10_2z00(BgL_auxz00_7883,
					BgL_auxz00_7890, BgL_auxz00_7897, BgL_eofzd2funzf3z21_6997);
			}
		}

	}



/* _read-char */
	obj_t BGl__readzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_env1238z00_12,
		obj_t BgL_opt1237z00_11)
	{
		{	/* Ieee/input.scm 128 */
			{	/* Ieee/input.scm 128 */

				switch (VECTOR_LENGTH(BgL_opt1237z00_11))
					{
					case ((long) 0):

						{	/* Ieee/input.scm 128 */
							obj_t BgL_ipz00_1559;

							{	/* Ieee/input.scm 128 */
								obj_t BgL_res3478z00_4835;

								{	/* Ieee/input.scm 128 */
									obj_t BgL_tmpz00_7905;

									BgL_tmpz00_7905 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3478z00_4835 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_7905);
								}
								BgL_ipz00_1559 = BgL_res3478z00_4835;
							}
							{	/* Ieee/input.scm 128 */

								return BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1559);
							}
						}
						break;
					case ((long) 1):

						{	/* Ieee/input.scm 128 */
							obj_t BgL_ipz00_1560;

							BgL_ipz00_1560 = VECTOR_REF(BgL_opt1237z00_11, ((long) 0));
							{	/* Ieee/input.scm 128 */

								return BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1560);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* read-char */
	BGL_EXPORTED_DEF obj_t BGl_readzd2charzd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_10)
	{
		{	/* Ieee/input.scm 128 */
			{
				obj_t BgL_iportz00_1563;

				BgL_iportz00_1563 = BgL_ipz00_10;
				{

					{	/* Ieee/input.scm 129 */
						long BgL_res3498z00_4897;

						{	/* Ieee/input.scm 129 */
							obj_t BgL_tmpz00_7913;

							BgL_tmpz00_7913 = ((obj_t) BgL_iportz00_1563);
							BgL_res3498z00_4897 = RGC_START_MATCH(BgL_tmpz00_7913);
						} BgL_res3498z00_4897;
					}
					{	/* Ieee/input.scm 129 */
						long BgL_matchz00_1730;

						{	/* Ieee/input.scm 129 */
							long BgL_arg1701z00_1734;
							long BgL_arg1702z00_1735;

							{	/* Ieee/input.scm 129 */
								long BgL_res3499z00_4899;

								{	/* Ieee/input.scm 129 */
									obj_t BgL_tmpz00_7916;

									BgL_tmpz00_7916 = ((obj_t) BgL_iportz00_1563);
									BgL_res3499z00_4899 = RGC_BUFFER_FORWARD(BgL_tmpz00_7916);
								}
								BgL_arg1701z00_1734 = BgL_res3499z00_4899;
							}
							{	/* Ieee/input.scm 129 */
								long BgL_res3500z00_4901;

								{	/* Ieee/input.scm 129 */
									obj_t BgL_tmpz00_7919;

									BgL_tmpz00_7919 = ((obj_t) BgL_iportz00_1563);
									BgL_res3500z00_4901 = RGC_BUFFER_BUFPOS(BgL_tmpz00_7919);
								}
								BgL_arg1702z00_1735 = BgL_res3500z00_4901;
							}
							{
								long BgL_forwardz00_4903;
								long BgL_bufposz00_4904;

								BgL_forwardz00_4903 = BgL_arg1701z00_1734;
								BgL_bufposz00_4904 = BgL_arg1702z00_1735;
							BgL_statezd20zd21040z00_4902:
								if ((BgL_forwardz00_4903 == BgL_bufposz00_4904))
									{	/* Ieee/input.scm 129 */
										bool_t BgL_test4469z00_7924;

										{	/* Ieee/input.scm 129 */
											bool_t BgL_res3502z00_4915;

											BgL_res3502z00_4915 =
												rgc_fill_buffer(((obj_t) BgL_iportz00_1563));
											BgL_test4469z00_7924 = BgL_res3502z00_4915;
										}
										if (BgL_test4469z00_7924)
											{	/* Ieee/input.scm 129 */
												long BgL_arg1592z00_4907;
												long BgL_arg1593z00_4908;

												{	/* Ieee/input.scm 129 */
													long BgL_res3503z00_4917;

													{	/* Ieee/input.scm 129 */
														obj_t BgL_tmpz00_7927;

														BgL_tmpz00_7927 = ((obj_t) BgL_iportz00_1563);
														BgL_res3503z00_4917 =
															RGC_BUFFER_FORWARD(BgL_tmpz00_7927);
													}
													BgL_arg1592z00_4907 = BgL_res3503z00_4917;
												}
												{	/* Ieee/input.scm 129 */
													long BgL_res3504z00_4919;

													{	/* Ieee/input.scm 129 */
														obj_t BgL_tmpz00_7930;

														BgL_tmpz00_7930 = ((obj_t) BgL_iportz00_1563);
														BgL_res3504z00_4919 =
															RGC_BUFFER_BUFPOS(BgL_tmpz00_7930);
													}
													BgL_arg1593z00_4908 = BgL_res3504z00_4919;
												}
												{
													long BgL_bufposz00_7934;
													long BgL_forwardz00_7933;

													BgL_forwardz00_7933 = BgL_arg1592z00_4907;
													BgL_bufposz00_7934 = BgL_arg1593z00_4908;
													BgL_bufposz00_4904 = BgL_bufposz00_7934;
													BgL_forwardz00_4903 = BgL_forwardz00_7933;
													goto BgL_statezd20zd21040z00_4902;
												}
											}
										else
											{	/* Ieee/input.scm 129 */
												BgL_matchz00_1730 = ((long) 1);
									}}
								else
									{	/* Ieee/input.scm 129 */
										int BgL_curz00_4909;

										{	/* Ieee/input.scm 129 */
											int BgL_res3505z00_4922;

											{	/* Ieee/input.scm 129 */
												obj_t BgL_tmpz00_7935;

												BgL_tmpz00_7935 = ((obj_t) BgL_iportz00_1563);
												BgL_res3505z00_4922 =
													RGC_BUFFER_GET_CHAR(BgL_tmpz00_7935,
													BgL_forwardz00_4903);
											}
											BgL_curz00_4909 = BgL_res3505z00_4922;
										}
										{	/* Ieee/input.scm 129 */

											{	/* Ieee/input.scm 129 */
												long BgL_arg1596z00_4910;

												BgL_arg1596z00_4910 =
													(((long) 1) + BgL_forwardz00_4903);
												{	/* Ieee/input.scm 129 */
													long BgL_newzd2matchzd2_4925;

													{	/* Ieee/input.scm 129 */
														long BgL_res3507z00_4928;

														{	/* Ieee/input.scm 129 */
															obj_t BgL_tmpz00_7939;

															BgL_tmpz00_7939 = ((obj_t) BgL_iportz00_1563);
															BgL_res3507z00_4928 =
																RGC_STOP_MATCH(BgL_tmpz00_7939,
																BgL_arg1596z00_4910);
														} BgL_res3507z00_4928;
													}
													BgL_newzd2matchzd2_4925 = ((long) 0);
													BgL_matchz00_1730 = BgL_newzd2matchzd2_4925;
						}}}}}}
						{	/* Ieee/input.scm 129 */
							obj_t BgL_tmpz00_7942;

							BgL_tmpz00_7942 = ((obj_t) BgL_iportz00_1563);
							RGC_SET_FILEPOS(BgL_tmpz00_7942);
						}
						switch (BgL_matchz00_1730)
							{
							case ((long) 1):

								{	/* Ieee/input.scm 129 */
									bool_t BgL_test4470z00_7945;

									{	/* Ieee/input.scm 129 */
										long BgL_arg1693z00_1720;

										{	/* Ieee/input.scm 129 */
											long BgL_res3495z00_4891;

											{	/* Ieee/input.scm 129 */
												obj_t BgL_tmpz00_7946;

												BgL_tmpz00_7946 = ((obj_t) BgL_iportz00_1563);
												BgL_res3495z00_4891 =
													RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_7946);
											}
											BgL_arg1693z00_1720 = BgL_res3495z00_4891;
										}
										BgL_test4470z00_7945 = (BgL_arg1693z00_1720 == ((long) 0));
									}
									if (BgL_test4470z00_7945)
										{	/* Ieee/input.scm 129 */
											return BEOF;
										}
									else
										{	/* Ieee/input.scm 129 */
											unsigned char BgL_res3497z00_4895;

											{	/* Ieee/input.scm 129 */
												obj_t BgL_tmpz00_7950;

												BgL_tmpz00_7950 = ((obj_t) BgL_iportz00_1563);
												BgL_res3497z00_4895 =
													RGC_BUFFER_CHARACTER(BgL_tmpz00_7950);
											}
											return BCHAR(BgL_res3497z00_4895);
										}
								}
								break;
							case ((long) 0):

								{	/* Ieee/input.scm 129 */
									unsigned char BgL_res3508z00_4931;

									{	/* Ieee/input.scm 129 */
										obj_t BgL_tmpz00_7954;

										BgL_tmpz00_7954 = ((obj_t) BgL_iportz00_1563);
										BgL_res3508z00_4931 = RGC_BUFFER_CHARACTER(BgL_tmpz00_7954);
									}
									return BCHAR(BgL_res3508z00_4931);
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00
									(BGl_string4272z00zz__r4_input_6_10_2z00,
									BGl_string4273z00zz__r4_input_6_10_2z00,
									BINT(BgL_matchz00_1730));
							}
					}
				}
			}
		}

	}



/* _peek-char */
	obj_t BGl__peekzd2charzd2zz__r4_input_6_10_2z00(obj_t BgL_env1242z00_15,
		obj_t BgL_opt1241z00_14)
	{
		{	/* Ieee/input.scm 136 */
			{	/* Ieee/input.scm 136 */

				switch (VECTOR_LENGTH(BgL_opt1241z00_14))
					{
					case ((long) 0):

						{	/* Ieee/input.scm 136 */
							obj_t BgL_ipz00_1769;

							{	/* Ieee/input.scm 136 */
								obj_t BgL_res3509z00_4933;

								{	/* Ieee/input.scm 136 */
									obj_t BgL_tmpz00_7961;

									BgL_tmpz00_7961 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3509z00_4933 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_7961);
								}
								BgL_ipz00_1769 = BgL_res3509z00_4933;
							}
							{	/* Ieee/input.scm 136 */

								return BGl_peekzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1769);
							}
						}
						break;
					case ((long) 1):

						{	/* Ieee/input.scm 136 */
							obj_t BgL_ipz00_1770;

							BgL_ipz00_1770 = VECTOR_REF(BgL_opt1241z00_14, ((long) 0));
							{	/* Ieee/input.scm 136 */

								return BGl_peekzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_1770);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* peek-char */
	BGL_EXPORTED_DEF obj_t BGl_peekzd2charzd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_13)
	{
		{	/* Ieee/input.scm 136 */
			{
				obj_t BgL_iportz00_1773;

				BgL_iportz00_1773 = BgL_ipz00_13;
				{

					{	/* Ieee/input.scm 137 */
						long BgL_res3529z00_4995;

						{	/* Ieee/input.scm 137 */
							obj_t BgL_tmpz00_7969;

							BgL_tmpz00_7969 = ((obj_t) BgL_iportz00_1773);
							BgL_res3529z00_4995 = RGC_START_MATCH(BgL_tmpz00_7969);
						} BgL_res3529z00_4995;
					}
					{	/* Ieee/input.scm 137 */
						long BgL_matchz00_1940;

						{	/* Ieee/input.scm 137 */
							long BgL_arg1807z00_1947;
							long BgL_arg1808z00_1948;

							{	/* Ieee/input.scm 137 */
								long BgL_res3530z00_4997;

								{	/* Ieee/input.scm 137 */
									obj_t BgL_tmpz00_7972;

									BgL_tmpz00_7972 = ((obj_t) BgL_iportz00_1773);
									BgL_res3530z00_4997 = RGC_BUFFER_FORWARD(BgL_tmpz00_7972);
								}
								BgL_arg1807z00_1947 = BgL_res3530z00_4997;
							}
							{	/* Ieee/input.scm 137 */
								long BgL_res3531z00_4999;

								{	/* Ieee/input.scm 137 */
									obj_t BgL_tmpz00_7975;

									BgL_tmpz00_7975 = ((obj_t) BgL_iportz00_1773);
									BgL_res3531z00_4999 = RGC_BUFFER_BUFPOS(BgL_tmpz00_7975);
								}
								BgL_arg1808z00_1948 = BgL_res3531z00_4999;
							}
							{
								long BgL_forwardz00_5001;
								long BgL_bufposz00_5002;

								BgL_forwardz00_5001 = BgL_arg1807z00_1947;
								BgL_bufposz00_5002 = BgL_arg1808z00_1948;
							BgL_statezd20zd21046z00_5000:
								if ((BgL_forwardz00_5001 == BgL_bufposz00_5002))
									{	/* Ieee/input.scm 137 */
										bool_t BgL_test4472z00_7980;

										{	/* Ieee/input.scm 137 */
											bool_t BgL_res3533z00_5013;

											BgL_res3533z00_5013 =
												rgc_fill_buffer(((obj_t) BgL_iportz00_1773));
											BgL_test4472z00_7980 = BgL_res3533z00_5013;
										}
										if (BgL_test4472z00_7980)
											{	/* Ieee/input.scm 137 */
												long BgL_arg1709z00_5005;
												long BgL_arg1710z00_5006;

												{	/* Ieee/input.scm 137 */
													long BgL_res3534z00_5015;

													{	/* Ieee/input.scm 137 */
														obj_t BgL_tmpz00_7983;

														BgL_tmpz00_7983 = ((obj_t) BgL_iportz00_1773);
														BgL_res3534z00_5015 =
															RGC_BUFFER_FORWARD(BgL_tmpz00_7983);
													}
													BgL_arg1709z00_5005 = BgL_res3534z00_5015;
												}
												{	/* Ieee/input.scm 137 */
													long BgL_res3535z00_5017;

													{	/* Ieee/input.scm 137 */
														obj_t BgL_tmpz00_7986;

														BgL_tmpz00_7986 = ((obj_t) BgL_iportz00_1773);
														BgL_res3535z00_5017 =
															RGC_BUFFER_BUFPOS(BgL_tmpz00_7986);
													}
													BgL_arg1710z00_5006 = BgL_res3535z00_5017;
												}
												{
													long BgL_bufposz00_7990;
													long BgL_forwardz00_7989;

													BgL_forwardz00_7989 = BgL_arg1709z00_5005;
													BgL_bufposz00_7990 = BgL_arg1710z00_5006;
													BgL_bufposz00_5002 = BgL_bufposz00_7990;
													BgL_forwardz00_5001 = BgL_forwardz00_7989;
													goto BgL_statezd20zd21046z00_5000;
												}
											}
										else
											{	/* Ieee/input.scm 137 */
												BgL_matchz00_1940 = ((long) 1);
									}}
								else
									{	/* Ieee/input.scm 137 */
										int BgL_curz00_5007;

										{	/* Ieee/input.scm 137 */
											int BgL_res3536z00_5020;

											{	/* Ieee/input.scm 137 */
												obj_t BgL_tmpz00_7991;

												BgL_tmpz00_7991 = ((obj_t) BgL_iportz00_1773);
												BgL_res3536z00_5020 =
													RGC_BUFFER_GET_CHAR(BgL_tmpz00_7991,
													BgL_forwardz00_5001);
											}
											BgL_curz00_5007 = BgL_res3536z00_5020;
										}
										{	/* Ieee/input.scm 137 */

											{	/* Ieee/input.scm 137 */
												long BgL_arg1711z00_5008;

												BgL_arg1711z00_5008 =
													(((long) 1) + BgL_forwardz00_5001);
												{	/* Ieee/input.scm 137 */
													long BgL_newzd2matchzd2_5023;

													{	/* Ieee/input.scm 137 */
														long BgL_res3538z00_5026;

														{	/* Ieee/input.scm 137 */
															obj_t BgL_tmpz00_7995;

															BgL_tmpz00_7995 = ((obj_t) BgL_iportz00_1773);
															BgL_res3538z00_5026 =
																RGC_STOP_MATCH(BgL_tmpz00_7995,
																BgL_arg1711z00_5008);
														} BgL_res3538z00_5026;
													}
													BgL_newzd2matchzd2_5023 = ((long) 0);
													BgL_matchz00_1940 = BgL_newzd2matchzd2_5023;
						}}}}}}
						{	/* Ieee/input.scm 137 */
							obj_t BgL_tmpz00_7998;

							BgL_tmpz00_7998 = ((obj_t) BgL_iportz00_1773);
							RGC_SET_FILEPOS(BgL_tmpz00_7998);
						}
						switch (BgL_matchz00_1940)
							{
							case ((long) 1):

								{	/* Ieee/input.scm 137 */
									bool_t BgL_test4473z00_8001;

									{	/* Ieee/input.scm 137 */
										long BgL_arg1796z00_1930;

										{	/* Ieee/input.scm 137 */
											long BgL_res3526z00_4989;

											{	/* Ieee/input.scm 137 */
												obj_t BgL_tmpz00_8002;

												BgL_tmpz00_8002 = ((obj_t) BgL_iportz00_1773);
												BgL_res3526z00_4989 =
													RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8002);
											}
											BgL_arg1796z00_1930 = BgL_res3526z00_4989;
										}
										BgL_test4473z00_8001 = (BgL_arg1796z00_1930 == ((long) 0));
									}
									if (BgL_test4473z00_8001)
										{	/* Ieee/input.scm 137 */
											return BEOF;
										}
									else
										{	/* Ieee/input.scm 137 */
											unsigned char BgL_res3528z00_4993;

											{	/* Ieee/input.scm 137 */
												obj_t BgL_tmpz00_8006;

												BgL_tmpz00_8006 = ((obj_t) BgL_iportz00_1773);
												BgL_res3528z00_4993 =
													RGC_BUFFER_CHARACTER(BgL_tmpz00_8006);
											}
											return BCHAR(BgL_res3528z00_4993);
										}
								}
								break;
							case ((long) 0):

								{	/* Ieee/input.scm 139 */
									unsigned char BgL_cz00_1944;

									{	/* Ieee/input.scm 137 */
										unsigned char BgL_res3539z00_5029;

										{	/* Ieee/input.scm 137 */
											obj_t BgL_tmpz00_8010;

											BgL_tmpz00_8010 = ((obj_t) BgL_iportz00_1773);
											BgL_res3539z00_5029 =
												RGC_BUFFER_CHARACTER(BgL_tmpz00_8010);
										}
										BgL_cz00_1944 = BgL_res3539z00_5029;
									}
									{	/* Ieee/input.scm 140 */
										long BgL_arg1806z00_1946;

										BgL_arg1806z00_1946 = ((unsigned char) (BgL_cz00_1944));
										{	/* Ieee/input.scm 140 */
											int BgL_res3542z00_5035;

											{	/* Ieee/input.scm 140 */
												int BgL_charz00_5034;

												BgL_charz00_5034 = (int) (BgL_arg1806z00_1946);
												BgL_res3542z00_5035 =
													rgc_buffer_unget_char(
													((obj_t) BgL_iportz00_1773), BgL_charz00_5034);
											} BgL_res3542z00_5035;
									}}
									return BCHAR(BgL_cz00_1944);
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00
									(BGl_string4272z00zz__r4_input_6_10_2z00,
									BGl_string4273z00zz__r4_input_6_10_2z00,
									BINT(BgL_matchz00_1940));
							}
					}
				}
			}
		}

	}



/* _read-byte */
	obj_t BGl__readzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_env1246z00_18,
		obj_t BgL_opt1245z00_17)
	{
		{	/* Ieee/input.scm 147 */
			{	/* Ieee/input.scm 147 */

				switch (VECTOR_LENGTH(BgL_opt1245z00_17))
					{
					case ((long) 0):

						{	/* Ieee/input.scm 147 */
							obj_t BgL_ipz00_1982;

							{	/* Ieee/input.scm 147 */
								obj_t BgL_res3543z00_5037;

								{	/* Ieee/input.scm 147 */
									obj_t BgL_tmpz00_8022;

									BgL_tmpz00_8022 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3543z00_5037 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8022);
								}
								BgL_ipz00_1982 = BgL_res3543z00_5037;
							}
							{	/* Ieee/input.scm 147 */

								return BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_1982);
							}
						}
						break;
					case ((long) 1):

						{	/* Ieee/input.scm 147 */
							obj_t BgL_ipz00_1983;

							BgL_ipz00_1983 = VECTOR_REF(BgL_opt1245z00_17, ((long) 0));
							{	/* Ieee/input.scm 147 */

								return BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_1983);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* read-byte */
	BGL_EXPORTED_DEF obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_16)
	{
		{	/* Ieee/input.scm 147 */
			{
				obj_t BgL_iportz00_1986;

				BgL_iportz00_1986 = BgL_ipz00_16;
				{

					{	/* Ieee/input.scm 148 */
						long BgL_res3563z00_5099;

						{	/* Ieee/input.scm 148 */
							obj_t BgL_tmpz00_8030;

							BgL_tmpz00_8030 = ((obj_t) BgL_iportz00_1986);
							BgL_res3563z00_5099 = RGC_START_MATCH(BgL_tmpz00_8030);
						} BgL_res3563z00_5099;
					}
					{	/* Ieee/input.scm 148 */
						long BgL_matchz00_2153;

						{	/* Ieee/input.scm 148 */
							long BgL_arg1913z00_2157;
							long BgL_arg1914z00_2158;

							{	/* Ieee/input.scm 148 */
								long BgL_res3564z00_5101;

								{	/* Ieee/input.scm 148 */
									obj_t BgL_tmpz00_8033;

									BgL_tmpz00_8033 = ((obj_t) BgL_iportz00_1986);
									BgL_res3564z00_5101 = RGC_BUFFER_FORWARD(BgL_tmpz00_8033);
								}
								BgL_arg1913z00_2157 = BgL_res3564z00_5101;
							}
							{	/* Ieee/input.scm 148 */
								long BgL_res3565z00_5103;

								{	/* Ieee/input.scm 148 */
									obj_t BgL_tmpz00_8036;

									BgL_tmpz00_8036 = ((obj_t) BgL_iportz00_1986);
									BgL_res3565z00_5103 = RGC_BUFFER_BUFPOS(BgL_tmpz00_8036);
								}
								BgL_arg1914z00_2158 = BgL_res3565z00_5103;
							}
							{
								long BgL_forwardz00_5105;
								long BgL_bufposz00_5106;

								BgL_forwardz00_5105 = BgL_arg1913z00_2157;
								BgL_bufposz00_5106 = BgL_arg1914z00_2158;
							BgL_statezd20zd21052z00_5104:
								if ((BgL_forwardz00_5105 == BgL_bufposz00_5106))
									{	/* Ieee/input.scm 148 */
										bool_t BgL_test4475z00_8041;

										{	/* Ieee/input.scm 148 */
											bool_t BgL_res3567z00_5117;

											BgL_res3567z00_5117 =
												rgc_fill_buffer(((obj_t) BgL_iportz00_1986));
											BgL_test4475z00_8041 = BgL_res3567z00_5117;
										}
										if (BgL_test4475z00_8041)
											{	/* Ieee/input.scm 148 */
												long BgL_arg1815z00_5109;
												long BgL_arg1816z00_5110;

												{	/* Ieee/input.scm 148 */
													long BgL_res3568z00_5119;

													{	/* Ieee/input.scm 148 */
														obj_t BgL_tmpz00_8044;

														BgL_tmpz00_8044 = ((obj_t) BgL_iportz00_1986);
														BgL_res3568z00_5119 =
															RGC_BUFFER_FORWARD(BgL_tmpz00_8044);
													}
													BgL_arg1815z00_5109 = BgL_res3568z00_5119;
												}
												{	/* Ieee/input.scm 148 */
													long BgL_res3569z00_5121;

													{	/* Ieee/input.scm 148 */
														obj_t BgL_tmpz00_8047;

														BgL_tmpz00_8047 = ((obj_t) BgL_iportz00_1986);
														BgL_res3569z00_5121 =
															RGC_BUFFER_BUFPOS(BgL_tmpz00_8047);
													}
													BgL_arg1816z00_5110 = BgL_res3569z00_5121;
												}
												{
													long BgL_bufposz00_8051;
													long BgL_forwardz00_8050;

													BgL_forwardz00_8050 = BgL_arg1815z00_5109;
													BgL_bufposz00_8051 = BgL_arg1816z00_5110;
													BgL_bufposz00_5106 = BgL_bufposz00_8051;
													BgL_forwardz00_5105 = BgL_forwardz00_8050;
													goto BgL_statezd20zd21052z00_5104;
												}
											}
										else
											{	/* Ieee/input.scm 148 */
												BgL_matchz00_2153 = ((long) 1);
									}}
								else
									{	/* Ieee/input.scm 148 */
										int BgL_curz00_5111;

										{	/* Ieee/input.scm 148 */
											int BgL_res3570z00_5124;

											{	/* Ieee/input.scm 148 */
												obj_t BgL_tmpz00_8052;

												BgL_tmpz00_8052 = ((obj_t) BgL_iportz00_1986);
												BgL_res3570z00_5124 =
													RGC_BUFFER_GET_CHAR(BgL_tmpz00_8052,
													BgL_forwardz00_5105);
											}
											BgL_curz00_5111 = BgL_res3570z00_5124;
										}
										{	/* Ieee/input.scm 148 */

											{	/* Ieee/input.scm 148 */
												long BgL_arg1817z00_5112;

												BgL_arg1817z00_5112 =
													(((long) 1) + BgL_forwardz00_5105);
												{	/* Ieee/input.scm 148 */
													long BgL_newzd2matchzd2_5127;

													{	/* Ieee/input.scm 148 */
														long BgL_res3572z00_5130;

														{	/* Ieee/input.scm 148 */
															obj_t BgL_tmpz00_8056;

															BgL_tmpz00_8056 = ((obj_t) BgL_iportz00_1986);
															BgL_res3572z00_5130 =
																RGC_STOP_MATCH(BgL_tmpz00_8056,
																BgL_arg1817z00_5112);
														} BgL_res3572z00_5130;
													}
													BgL_newzd2matchzd2_5127 = ((long) 0);
													BgL_matchz00_2153 = BgL_newzd2matchzd2_5127;
						}}}}}}
						{	/* Ieee/input.scm 148 */
							obj_t BgL_tmpz00_8059;

							BgL_tmpz00_8059 = ((obj_t) BgL_iportz00_1986);
							RGC_SET_FILEPOS(BgL_tmpz00_8059);
						}
						switch (BgL_matchz00_2153)
							{
							case ((long) 1):

								{	/* Ieee/input.scm 148 */
									bool_t BgL_test4476z00_8062;

									{	/* Ieee/input.scm 148 */
										long BgL_arg1905z00_2143;

										{	/* Ieee/input.scm 148 */
											long BgL_res3560z00_5093;

											{	/* Ieee/input.scm 148 */
												obj_t BgL_tmpz00_8063;

												BgL_tmpz00_8063 = ((obj_t) BgL_iportz00_1986);
												BgL_res3560z00_5093 =
													RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8063);
											}
											BgL_arg1905z00_2143 = BgL_res3560z00_5093;
										}
										BgL_test4476z00_8062 = (BgL_arg1905z00_2143 == ((long) 0));
									}
									if (BgL_test4476z00_8062)
										{	/* Ieee/input.scm 148 */
											return BEOF;
										}
									else
										{	/* Ieee/input.scm 148 */
											unsigned char BgL_res3562z00_5097;

											{	/* Ieee/input.scm 148 */
												obj_t BgL_tmpz00_8067;

												BgL_tmpz00_8067 = ((obj_t) BgL_iportz00_1986);
												BgL_res3562z00_5097 =
													RGC_BUFFER_CHARACTER(BgL_tmpz00_8067);
											}
											return BCHAR(BgL_res3562z00_5097);
										}
								}
								break;
							case ((long) 0):

								{	/* Ieee/input.scm 148 */
									int BgL_res3573z00_5133;

									{	/* Ieee/input.scm 148 */
										obj_t BgL_tmpz00_8071;

										BgL_tmpz00_8071 = ((obj_t) BgL_iportz00_1986);
										BgL_res3573z00_5133 = RGC_BUFFER_BYTE(BgL_tmpz00_8071);
									}
									return BINT(BgL_res3573z00_5133);
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00
									(BGl_string4272z00zz__r4_input_6_10_2z00,
									BGl_string4273z00zz__r4_input_6_10_2z00,
									BINT(BgL_matchz00_2153));
							}
					}
				}
			}
		}

	}



/* _peek-byte */
	obj_t BGl__peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t BgL_env1250z00_21,
		obj_t BgL_opt1249z00_20)
	{
		{	/* Ieee/input.scm 155 */
			{	/* Ieee/input.scm 155 */

				switch (VECTOR_LENGTH(BgL_opt1249z00_20))
					{
					case ((long) 0):

						{	/* Ieee/input.scm 155 */
							obj_t BgL_ipz00_2192;

							{	/* Ieee/input.scm 155 */
								obj_t BgL_res3574z00_5135;

								{	/* Ieee/input.scm 155 */
									obj_t BgL_tmpz00_8078;

									BgL_tmpz00_8078 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3574z00_5135 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8078);
								}
								BgL_ipz00_2192 = BgL_res3574z00_5135;
							}
							{	/* Ieee/input.scm 155 */

								return BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_2192);
							}
						}
						break;
					case ((long) 1):

						{	/* Ieee/input.scm 155 */
							obj_t BgL_ipz00_2193;

							BgL_ipz00_2193 = VECTOR_REF(BgL_opt1249z00_20, ((long) 0));
							{	/* Ieee/input.scm 155 */

								return BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_2193);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* peek-byte */
	BGL_EXPORTED_DEF obj_t BGl_peekzd2bytezd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_19)
	{
		{	/* Ieee/input.scm 155 */
			{
				obj_t BgL_iportz00_2196;

				BgL_iportz00_2196 = BgL_ipz00_19;
				{

					{	/* Ieee/input.scm 156 */
						long BgL_res3594z00_5197;

						{	/* Ieee/input.scm 156 */
							obj_t BgL_tmpz00_8086;

							BgL_tmpz00_8086 = ((obj_t) BgL_iportz00_2196);
							BgL_res3594z00_5197 = RGC_START_MATCH(BgL_tmpz00_8086);
						} BgL_res3594z00_5197;
					}
					{	/* Ieee/input.scm 156 */
						long BgL_matchz00_2363;

						{	/* Ieee/input.scm 156 */
							long BgL_arg2017z00_2369;
							long BgL_arg2018z00_2370;

							{	/* Ieee/input.scm 156 */
								long BgL_res3595z00_5199;

								{	/* Ieee/input.scm 156 */
									obj_t BgL_tmpz00_8089;

									BgL_tmpz00_8089 = ((obj_t) BgL_iportz00_2196);
									BgL_res3595z00_5199 = RGC_BUFFER_FORWARD(BgL_tmpz00_8089);
								}
								BgL_arg2017z00_2369 = BgL_res3595z00_5199;
							}
							{	/* Ieee/input.scm 156 */
								long BgL_res3596z00_5201;

								{	/* Ieee/input.scm 156 */
									obj_t BgL_tmpz00_8092;

									BgL_tmpz00_8092 = ((obj_t) BgL_iportz00_2196);
									BgL_res3596z00_5201 = RGC_BUFFER_BUFPOS(BgL_tmpz00_8092);
								}
								BgL_arg2018z00_2370 = BgL_res3596z00_5201;
							}
							{
								long BgL_forwardz00_5203;
								long BgL_bufposz00_5204;

								BgL_forwardz00_5203 = BgL_arg2017z00_2369;
								BgL_bufposz00_5204 = BgL_arg2018z00_2370;
							BgL_statezd20zd21058z00_5202:
								if ((BgL_forwardz00_5203 == BgL_bufposz00_5204))
									{	/* Ieee/input.scm 156 */
										bool_t BgL_test4478z00_8097;

										{	/* Ieee/input.scm 156 */
											bool_t BgL_res3598z00_5215;

											BgL_res3598z00_5215 =
												rgc_fill_buffer(((obj_t) BgL_iportz00_2196));
											BgL_test4478z00_8097 = BgL_res3598z00_5215;
										}
										if (BgL_test4478z00_8097)
											{	/* Ieee/input.scm 156 */
												long BgL_arg1921z00_5207;
												long BgL_arg1923z00_5208;

												{	/* Ieee/input.scm 156 */
													long BgL_res3599z00_5217;

													{	/* Ieee/input.scm 156 */
														obj_t BgL_tmpz00_8100;

														BgL_tmpz00_8100 = ((obj_t) BgL_iportz00_2196);
														BgL_res3599z00_5217 =
															RGC_BUFFER_FORWARD(BgL_tmpz00_8100);
													}
													BgL_arg1921z00_5207 = BgL_res3599z00_5217;
												}
												{	/* Ieee/input.scm 156 */
													long BgL_res3600z00_5219;

													{	/* Ieee/input.scm 156 */
														obj_t BgL_tmpz00_8103;

														BgL_tmpz00_8103 = ((obj_t) BgL_iportz00_2196);
														BgL_res3600z00_5219 =
															RGC_BUFFER_BUFPOS(BgL_tmpz00_8103);
													}
													BgL_arg1923z00_5208 = BgL_res3600z00_5219;
												}
												{
													long BgL_bufposz00_8107;
													long BgL_forwardz00_8106;

													BgL_forwardz00_8106 = BgL_arg1921z00_5207;
													BgL_bufposz00_8107 = BgL_arg1923z00_5208;
													BgL_bufposz00_5204 = BgL_bufposz00_8107;
													BgL_forwardz00_5203 = BgL_forwardz00_8106;
													goto BgL_statezd20zd21058z00_5202;
												}
											}
										else
											{	/* Ieee/input.scm 156 */
												BgL_matchz00_2363 = ((long) 1);
									}}
								else
									{	/* Ieee/input.scm 156 */
										int BgL_curz00_5209;

										{	/* Ieee/input.scm 156 */
											int BgL_res3601z00_5222;

											{	/* Ieee/input.scm 156 */
												obj_t BgL_tmpz00_8108;

												BgL_tmpz00_8108 = ((obj_t) BgL_iportz00_2196);
												BgL_res3601z00_5222 =
													RGC_BUFFER_GET_CHAR(BgL_tmpz00_8108,
													BgL_forwardz00_5203);
											}
											BgL_curz00_5209 = BgL_res3601z00_5222;
										}
										{	/* Ieee/input.scm 156 */

											{	/* Ieee/input.scm 156 */
												long BgL_arg1924z00_5210;

												BgL_arg1924z00_5210 =
													(((long) 1) + BgL_forwardz00_5203);
												{	/* Ieee/input.scm 156 */
													long BgL_newzd2matchzd2_5225;

													{	/* Ieee/input.scm 156 */
														long BgL_res3603z00_5228;

														{	/* Ieee/input.scm 156 */
															obj_t BgL_tmpz00_8112;

															BgL_tmpz00_8112 = ((obj_t) BgL_iportz00_2196);
															BgL_res3603z00_5228 =
																RGC_STOP_MATCH(BgL_tmpz00_8112,
																BgL_arg1924z00_5210);
														} BgL_res3603z00_5228;
													}
													BgL_newzd2matchzd2_5225 = ((long) 0);
													BgL_matchz00_2363 = BgL_newzd2matchzd2_5225;
						}}}}}}
						{	/* Ieee/input.scm 156 */
							obj_t BgL_tmpz00_8115;

							BgL_tmpz00_8115 = ((obj_t) BgL_iportz00_2196);
							RGC_SET_FILEPOS(BgL_tmpz00_8115);
						}
						switch (BgL_matchz00_2363)
							{
							case ((long) 1):

								{	/* Ieee/input.scm 156 */
									bool_t BgL_test4479z00_8118;

									{	/* Ieee/input.scm 156 */
										long BgL_arg2007z00_2353;

										{	/* Ieee/input.scm 156 */
											long BgL_res3591z00_5191;

											{	/* Ieee/input.scm 156 */
												obj_t BgL_tmpz00_8119;

												BgL_tmpz00_8119 = ((obj_t) BgL_iportz00_2196);
												BgL_res3591z00_5191 =
													RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8119);
											}
											BgL_arg2007z00_2353 = BgL_res3591z00_5191;
										}
										BgL_test4479z00_8118 = (BgL_arg2007z00_2353 == ((long) 0));
									}
									if (BgL_test4479z00_8118)
										{	/* Ieee/input.scm 156 */
											return BEOF;
										}
									else
										{	/* Ieee/input.scm 156 */
											unsigned char BgL_res3593z00_5195;

											{	/* Ieee/input.scm 156 */
												obj_t BgL_tmpz00_8123;

												BgL_tmpz00_8123 = ((obj_t) BgL_iportz00_2196);
												BgL_res3593z00_5195 =
													RGC_BUFFER_CHARACTER(BgL_tmpz00_8123);
											}
											return BCHAR(BgL_res3593z00_5195);
										}
								}
								break;
							case ((long) 0):

								{	/* Ieee/input.scm 158 */
									int BgL_cz00_2367;

									{	/* Ieee/input.scm 156 */
										int BgL_res3604z00_5231;

										{	/* Ieee/input.scm 156 */
											obj_t BgL_tmpz00_8127;

											BgL_tmpz00_8127 = ((obj_t) BgL_iportz00_2196);
											BgL_res3604z00_5231 = RGC_BUFFER_BYTE(BgL_tmpz00_8127);
										}
										BgL_cz00_2367 = BgL_res3604z00_5231;
									}
									{	/* Ieee/input.scm 159 */
										int BgL_res3606z00_5235;

										BgL_res3606z00_5235 =
											rgc_buffer_unget_char(
											((obj_t) BgL_iportz00_2196), BgL_cz00_2367);
										BgL_res3606z00_5235;
									}
									return BINT(BgL_cz00_2367);
								}
								break;
							default:
								return
									BGl_errorz00zz__errorz00
									(BGl_string4272z00zz__r4_input_6_10_2z00,
									BGl_string4273z00zz__r4_input_6_10_2z00,
									BINT(BgL_matchz00_2363));
							}
					}
				}
			}
		}

	}



/* eof-object */
	BGL_EXPORTED_DEF obj_t BGl_eofzd2objectzd2zz__r4_input_6_10_2z00()
	{
		{	/* Ieee/input.scm 166 */
			return BEOF;
		}

	}



/* &eof-object */
	obj_t BGl_z62eofzd2objectzb0zz__r4_input_6_10_2z00(obj_t BgL_envz00_7000)
	{
		{	/* Ieee/input.scm 166 */
			return BGl_eofzd2objectzd2zz__r4_input_6_10_2z00();
		}

	}



/* eof-object? */
	BGL_EXPORTED_DEF bool_t BGl_eofzd2objectzf3z21zz__r4_input_6_10_2z00(obj_t
		BgL_objectz00_22)
	{
		{	/* Ieee/input.scm 172 */
			return EOF_OBJECTP(BgL_objectz00_22);
		}

	}



/* &eof-object? */
	obj_t BGl_z62eofzd2objectzf3z43zz__r4_input_6_10_2z00(obj_t BgL_envz00_6998,
		obj_t BgL_objectz00_6999)
	{
		{	/* Ieee/input.scm 172 */
			return BBOOL(EOF_OBJECTP(BgL_objectz00_6999));
		}

	}



/* _char-ready? */
	obj_t BGl__charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t BgL_env1254z00_25,
		obj_t BgL_opt1253z00_24)
	{
		{	/* Ieee/input.scm 178 */
			{	/* Ieee/input.scm 178 */

				switch (VECTOR_LENGTH(BgL_opt1253z00_24))
					{
					case ((long) 0):

						{	/* Ieee/input.scm 178 */
							obj_t BgL_ipz00_7320;

							{	/* Ieee/input.scm 178 */
								obj_t BgL_res3607z00_7321;

								{	/* Ieee/input.scm 178 */
									obj_t BgL_tmpz00_8140;

									BgL_tmpz00_8140 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3607z00_7321 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8140);
								}
								BgL_ipz00_7320 = BgL_res3607z00_7321;
							}
							{	/* Ieee/input.scm 178 */

								return BBOOL(bgl_rgc_charready(BgL_ipz00_7320));
							}
						}
						break;
					case ((long) 1):

						{	/* Ieee/input.scm 178 */
							obj_t BgL_ipz00_7322;

							BgL_ipz00_7322 = VECTOR_REF(BgL_opt1253z00_24, ((long) 0));
							{	/* Ieee/input.scm 178 */

								{	/* Ieee/input.scm 178 */
									bool_t BgL_res3609z00_7323;

									{	/* Ieee/input.scm 179 */
										obj_t BgL_tmpz00_8146;

										if (INPUT_PORTP(BgL_ipz00_7322))
											{	/* Ieee/input.scm 179 */
												BgL_tmpz00_8146 = BgL_ipz00_7322;
											}
										else
											{
												obj_t BgL_auxz00_8149;

												BgL_auxz00_8149 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 7849)),
													BGl_string4284z00zz__r4_input_6_10_2z00,
													BGl_string4282z00zz__r4_input_6_10_2z00,
													BgL_ipz00_7322);
												FAILURE(BgL_auxz00_8149, BFALSE, BFALSE);
											}
										BgL_res3609z00_7323 = bgl_rgc_charready(BgL_tmpz00_8146);
									}
									return BBOOL(BgL_res3609z00_7323);
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



/* char-ready? */
	BGL_EXPORTED_DEF bool_t BGl_charzd2readyzf3z21zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_23)
	{
		{	/* Ieee/input.scm 178 */
			return bgl_rgc_charready(BgL_ipz00_23);
		}

	}



/* _read-line */
	obj_t BGl__readzd2linezd2zz__r4_input_6_10_2z00(obj_t BgL_env1258z00_28,
		obj_t BgL_opt1257z00_27)
	{
		{	/* Ieee/input.scm 184 */
			{	/* Ieee/input.scm 184 */

				switch (VECTOR_LENGTH(BgL_opt1257z00_27))
					{
					case ((long) 0):

						{	/* Ieee/input.scm 184 */
							obj_t BgL_ipz00_2409;

							{	/* Ieee/input.scm 184 */
								obj_t BgL_res3610z00_5246;

								{	/* Ieee/input.scm 184 */
									obj_t BgL_tmpz00_8158;

									BgL_tmpz00_8158 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3610z00_5246 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8158);
								}
								BgL_ipz00_2409 = BgL_res3610z00_5246;
							}
							{	/* Ieee/input.scm 184 */

								return BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_2409);
							}
						}
						break;
					case ((long) 1):

						{	/* Ieee/input.scm 184 */
							obj_t BgL_ipz00_2410;

							BgL_ipz00_2410 = VECTOR_REF(BgL_opt1257z00_27, ((long) 0));
							{	/* Ieee/input.scm 184 */

								return BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_2410);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* read-line */
	BGL_EXPORTED_DEF obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_26)
	{
		{	/* Ieee/input.scm 184 */
			{	/* Ieee/input.scm 185 */
				bool_t BgL_test4481z00_8166;

				{	/* Ieee/input.scm 185 */
					long BgL_arg2182z00_2743;

					BgL_arg2182z00_2743 = BGL_INPUT_PORT_BUFSIZ(BgL_ipz00_26);
					BgL_test4481z00_8166 = (BgL_arg2182z00_2743 > ((long) 2));
				}
				if (BgL_test4481z00_8166)
					{
						obj_t BgL_iportz00_2415;

						BgL_iportz00_2415 = BgL_ipz00_26;
						{
							int BgL_minz00_2562;
							int BgL_maxz00_2563;
							obj_t BgL_iportz00_2525;
							long BgL_lastzd2matchzd2_2526;
							long BgL_forwardz00_2527;
							long BgL_bufposz00_2528;
							obj_t BgL_iportz00_2497;
							long BgL_lastzd2matchzd2_2498;
							long BgL_forwardz00_2499;
							long BgL_bufposz00_2500;
							obj_t BgL_iportz00_2484;
							long BgL_lastzd2matchzd2_2485;
							long BgL_forwardz00_2486;
							long BgL_bufposz00_2487;
							obj_t BgL_iportz00_2469;
							long BgL_lastzd2matchzd2_2470;
							long BgL_forwardz00_2471;
							long BgL_bufposz00_2472;
							obj_t BgL_iportz00_2453;
							long BgL_lastzd2matchzd2_2454;
							long BgL_forwardz00_2455;
							long BgL_bufposz00_2456;

							{	/* Ieee/input.scm 186 */
								long BgL_res3686z00_5439;

								{	/* Ieee/input.scm 186 */
									obj_t BgL_tmpz00_8169;

									BgL_tmpz00_8169 = ((obj_t) BgL_iportz00_2415);
									BgL_res3686z00_5439 = RGC_START_MATCH(BgL_tmpz00_8169);
								} BgL_res3686z00_5439;
							}
							{	/* Ieee/input.scm 186 */
								long BgL_matchz00_2669;

								{	/* Ieee/input.scm 186 */
									long BgL_arg2167z00_2677;
									long BgL_arg2168z00_2678;

									{	/* Ieee/input.scm 186 */
										long BgL_res3687z00_5441;

										{	/* Ieee/input.scm 186 */
											obj_t BgL_tmpz00_8172;

											BgL_tmpz00_8172 = ((obj_t) BgL_iportz00_2415);
											BgL_res3687z00_5441 = RGC_BUFFER_FORWARD(BgL_tmpz00_8172);
										}
										BgL_arg2167z00_2677 = BgL_res3687z00_5441;
									}
									{	/* Ieee/input.scm 186 */
										long BgL_res3688z00_5443;

										{	/* Ieee/input.scm 186 */
											obj_t BgL_tmpz00_8175;

											BgL_tmpz00_8175 = ((obj_t) BgL_iportz00_2415);
											BgL_res3688z00_5443 = RGC_BUFFER_BUFPOS(BgL_tmpz00_8175);
										}
										BgL_arg2168z00_2678 = BgL_res3688z00_5443;
									}
									BgL_iportz00_2469 = BgL_iportz00_2415;
									BgL_lastzd2matchzd2_2470 = ((long) 4);
									BgL_forwardz00_2471 = BgL_arg2167z00_2677;
									BgL_bufposz00_2472 = BgL_arg2168z00_2678;
								BgL_zc3z04anonymousza32035ze3z87_2473:
									if ((BgL_forwardz00_2471 == BgL_bufposz00_2472))
										{	/* Ieee/input.scm 186 */
											bool_t BgL_test4483z00_8180;

											{	/* Ieee/input.scm 186 */
												bool_t BgL_res3625z00_5282;

												BgL_res3625z00_5282 =
													rgc_fill_buffer(((obj_t) BgL_iportz00_2469));
												BgL_test4483z00_8180 = BgL_res3625z00_5282;
											}
											if (BgL_test4483z00_8180)
												{	/* Ieee/input.scm 186 */
													long BgL_arg2038z00_2476;
													long BgL_arg2039z00_2477;

													{	/* Ieee/input.scm 186 */
														long BgL_res3626z00_5284;

														{	/* Ieee/input.scm 186 */
															obj_t BgL_tmpz00_8183;

															BgL_tmpz00_8183 = ((obj_t) BgL_iportz00_2469);
															BgL_res3626z00_5284 =
																RGC_BUFFER_FORWARD(BgL_tmpz00_8183);
														}
														BgL_arg2038z00_2476 = BgL_res3626z00_5284;
													}
													{	/* Ieee/input.scm 186 */
														long BgL_res3627z00_5286;

														{	/* Ieee/input.scm 186 */
															obj_t BgL_tmpz00_8186;

															BgL_tmpz00_8186 = ((obj_t) BgL_iportz00_2469);
															BgL_res3627z00_5286 =
																RGC_BUFFER_BUFPOS(BgL_tmpz00_8186);
														}
														BgL_arg2039z00_2477 = BgL_res3627z00_5286;
													}
													{
														long BgL_bufposz00_8190;
														long BgL_forwardz00_8189;

														BgL_forwardz00_8189 = BgL_arg2038z00_2476;
														BgL_bufposz00_8190 = BgL_arg2039z00_2477;
														BgL_bufposz00_2472 = BgL_bufposz00_8190;
														BgL_forwardz00_2471 = BgL_forwardz00_8189;
														goto BgL_zc3z04anonymousza32035ze3z87_2473;
													}
												}
											else
												{	/* Ieee/input.scm 186 */
													BgL_matchz00_2669 = BgL_lastzd2matchzd2_2470;
												}
										}
									else
										{	/* Ieee/input.scm 186 */
											int BgL_curz00_2478;

											{	/* Ieee/input.scm 186 */
												int BgL_res3628z00_5289;

												{	/* Ieee/input.scm 186 */
													obj_t BgL_tmpz00_8191;

													BgL_tmpz00_8191 = ((obj_t) BgL_iportz00_2469);
													BgL_res3628z00_5289 =
														RGC_BUFFER_GET_CHAR(BgL_tmpz00_8191,
														BgL_forwardz00_2471);
												}
												BgL_curz00_2478 = BgL_res3628z00_5289;
											}
											{	/* Ieee/input.scm 186 */

												if (((long) (BgL_curz00_2478) == ((long) 13)))
													{	/* Ieee/input.scm 186 */
														BgL_iportz00_2484 = BgL_iportz00_2469;
														BgL_lastzd2matchzd2_2485 = BgL_lastzd2matchzd2_2470;
														BgL_forwardz00_2486 =
															(((long) 1) + BgL_forwardz00_2471);
														BgL_bufposz00_2487 = BgL_bufposz00_2472;
													BgL_zc3z04anonymousza32045ze3z87_2488:
														{	/* Ieee/input.scm 186 */
															long BgL_newzd2matchzd2_2489;

															{	/* Ieee/input.scm 186 */
																long BgL_res3635z00_5306;

																{	/* Ieee/input.scm 186 */
																	obj_t BgL_tmpz00_8197;

																	BgL_tmpz00_8197 = ((obj_t) BgL_iportz00_2484);
																	BgL_res3635z00_5306 =
																		RGC_STOP_MATCH(BgL_tmpz00_8197,
																		BgL_forwardz00_2486);
																} BgL_res3635z00_5306;
															}
															BgL_newzd2matchzd2_2489 = ((long) 3);
															if ((BgL_forwardz00_2486 == BgL_bufposz00_2487))
																{	/* Ieee/input.scm 186 */
																	bool_t BgL_test4486z00_8202;

																	{	/* Ieee/input.scm 186 */
																		bool_t BgL_res3637z00_5311;

																		BgL_res3637z00_5311 =
																			rgc_fill_buffer(
																			((obj_t) BgL_iportz00_2484));
																		BgL_test4486z00_8202 = BgL_res3637z00_5311;
																	}
																	if (BgL_test4486z00_8202)
																		{	/* Ieee/input.scm 186 */
																			long BgL_arg2048z00_2492;
																			long BgL_arg2049z00_2493;

																			{	/* Ieee/input.scm 186 */
																				long BgL_res3638z00_5313;

																				{	/* Ieee/input.scm 186 */
																					obj_t BgL_tmpz00_8205;

																					BgL_tmpz00_8205 =
																						((obj_t) BgL_iportz00_2484);
																					BgL_res3638z00_5313 =
																						RGC_BUFFER_FORWARD(BgL_tmpz00_8205);
																				}
																				BgL_arg2048z00_2492 =
																					BgL_res3638z00_5313;
																			}
																			{	/* Ieee/input.scm 186 */
																				long BgL_res3639z00_5315;

																				{	/* Ieee/input.scm 186 */
																					obj_t BgL_tmpz00_8208;

																					BgL_tmpz00_8208 =
																						((obj_t) BgL_iportz00_2484);
																					BgL_res3639z00_5315 =
																						RGC_BUFFER_BUFPOS(BgL_tmpz00_8208);
																				}
																				BgL_arg2049z00_2493 =
																					BgL_res3639z00_5315;
																			}
																			{
																				long BgL_bufposz00_8212;
																				long BgL_forwardz00_8211;

																				BgL_forwardz00_8211 =
																					BgL_arg2048z00_2492;
																				BgL_bufposz00_8212 =
																					BgL_arg2049z00_2493;
																				BgL_bufposz00_2487 = BgL_bufposz00_8212;
																				BgL_forwardz00_2486 =
																					BgL_forwardz00_8211;
																				goto
																					BgL_zc3z04anonymousza32045ze3z87_2488;
																			}
																		}
																	else
																		{	/* Ieee/input.scm 186 */
																			BgL_matchz00_2669 =
																				BgL_newzd2matchzd2_2489;
																		}
																}
															else
																{	/* Ieee/input.scm 186 */
																	int BgL_curz00_2494;

																	{	/* Ieee/input.scm 186 */
																		int BgL_res3640z00_5318;

																		{	/* Ieee/input.scm 186 */
																			obj_t BgL_tmpz00_8213;

																			BgL_tmpz00_8213 =
																				((obj_t) BgL_iportz00_2484);
																			BgL_res3640z00_5318 =
																				RGC_BUFFER_GET_CHAR(BgL_tmpz00_8213,
																				BgL_forwardz00_2486);
																		}
																		BgL_curz00_2494 = BgL_res3640z00_5318;
																	}
																	{	/* Ieee/input.scm 186 */

																		if (
																			((long) (BgL_curz00_2494) == ((long) 10)))
																			{	/* Ieee/input.scm 186 */
																				long BgL_arg2051z00_2496;

																				BgL_arg2051z00_2496 =
																					(((long) 1) + BgL_forwardz00_2486);
																				{	/* Ieee/input.scm 186 */
																					long BgL_newzd2matchzd2_5323;

																					{	/* Ieee/input.scm 186 */
																						long BgL_res3643z00_5326;

																						{	/* Ieee/input.scm 186 */
																							obj_t BgL_tmpz00_8220;

																							BgL_tmpz00_8220 =
																								((obj_t) BgL_iportz00_2484);
																							BgL_res3643z00_5326 =
																								RGC_STOP_MATCH(BgL_tmpz00_8220,
																								BgL_arg2051z00_2496);
																						} BgL_res3643z00_5326;
																					}
																					BgL_newzd2matchzd2_5323 = ((long) 3);
																					BgL_matchz00_2669 =
																						BgL_newzd2matchzd2_5323;
																			}}
																		else
																			{	/* Ieee/input.scm 186 */
																				BgL_matchz00_2669 =
																					BgL_newzd2matchzd2_2489;
																			}
																	}
																}
														}
													}
												else
													{	/* Ieee/input.scm 186 */
														if (((long) (BgL_curz00_2478) == ((long) 10)))
															{	/* Ieee/input.scm 186 */
																long BgL_arg2043z00_2482;

																BgL_arg2043z00_2482 =
																	(((long) 1) + BgL_forwardz00_2471);
																{	/* Ieee/input.scm 186 */
																	long BgL_newzd2matchzd2_5298;

																	{	/* Ieee/input.scm 186 */
																		long BgL_res3633z00_5301;

																		{	/* Ieee/input.scm 186 */
																			obj_t BgL_tmpz00_8228;

																			BgL_tmpz00_8228 =
																				((obj_t) BgL_iportz00_2469);
																			BgL_res3633z00_5301 =
																				RGC_STOP_MATCH(BgL_tmpz00_8228,
																				BgL_arg2043z00_2482);
																		} BgL_res3633z00_5301;
																	}
																	BgL_newzd2matchzd2_5298 = ((long) 3);
																	BgL_matchz00_2669 = BgL_newzd2matchzd2_5298;
															}}
														else
															{	/* Ieee/input.scm 186 */
																BgL_iportz00_2453 = BgL_iportz00_2469;
																BgL_lastzd2matchzd2_2454 =
																	BgL_lastzd2matchzd2_2470;
																BgL_forwardz00_2455 =
																	(((long) 1) + BgL_forwardz00_2471);
																BgL_bufposz00_2456 = BgL_bufposz00_2472;
															BgL_zc3z04anonymousza32024ze3z87_2457:
																{	/* Ieee/input.scm 186 */
																	long BgL_newzd2matchzd2_2458;

																	{	/* Ieee/input.scm 186 */
																		long BgL_res3612z00_5251;

																		{	/* Ieee/input.scm 186 */
																			obj_t BgL_tmpz00_8231;

																			BgL_tmpz00_8231 =
																				((obj_t) BgL_iportz00_2453);
																			BgL_res3612z00_5251 =
																				RGC_STOP_MATCH(BgL_tmpz00_8231,
																				BgL_forwardz00_2455);
																		} BgL_res3612z00_5251;
																	}
																	BgL_newzd2matchzd2_2458 = ((long) 2);
																	if (
																		(BgL_forwardz00_2455 == BgL_bufposz00_2456))
																		{	/* Ieee/input.scm 186 */
																			bool_t BgL_test4490z00_8236;

																			{	/* Ieee/input.scm 186 */
																				bool_t BgL_res3614z00_5256;

																				BgL_res3614z00_5256 =
																					rgc_fill_buffer(
																					((obj_t) BgL_iportz00_2453));
																				BgL_test4490z00_8236 =
																					BgL_res3614z00_5256;
																			}
																			if (BgL_test4490z00_8236)
																				{	/* Ieee/input.scm 186 */
																					long BgL_arg2028z00_2461;
																					long BgL_arg2029z00_2462;

																					{	/* Ieee/input.scm 186 */
																						long BgL_res3615z00_5258;

																						{	/* Ieee/input.scm 186 */
																							obj_t BgL_tmpz00_8239;

																							BgL_tmpz00_8239 =
																								((obj_t) BgL_iportz00_2453);
																							BgL_res3615z00_5258 =
																								RGC_BUFFER_FORWARD
																								(BgL_tmpz00_8239);
																						}
																						BgL_arg2028z00_2461 =
																							BgL_res3615z00_5258;
																					}
																					{	/* Ieee/input.scm 186 */
																						long BgL_res3616z00_5260;

																						{	/* Ieee/input.scm 186 */
																							obj_t BgL_tmpz00_8242;

																							BgL_tmpz00_8242 =
																								((obj_t) BgL_iportz00_2453);
																							BgL_res3616z00_5260 =
																								RGC_BUFFER_BUFPOS
																								(BgL_tmpz00_8242);
																						}
																						BgL_arg2029z00_2462 =
																							BgL_res3616z00_5260;
																					}
																					{
																						long BgL_bufposz00_8246;
																						long BgL_forwardz00_8245;

																						BgL_forwardz00_8245 =
																							BgL_arg2028z00_2461;
																						BgL_bufposz00_8246 =
																							BgL_arg2029z00_2462;
																						BgL_bufposz00_2456 =
																							BgL_bufposz00_8246;
																						BgL_forwardz00_2455 =
																							BgL_forwardz00_8245;
																						goto
																							BgL_zc3z04anonymousza32024ze3z87_2457;
																					}
																				}
																			else
																				{	/* Ieee/input.scm 186 */
																					BgL_matchz00_2669 =
																						BgL_newzd2matchzd2_2458;
																				}
																		}
																	else
																		{	/* Ieee/input.scm 186 */
																			int BgL_curz00_2463;

																			{	/* Ieee/input.scm 186 */
																				int BgL_res3617z00_5263;

																				{	/* Ieee/input.scm 186 */
																					obj_t BgL_tmpz00_8247;

																					BgL_tmpz00_8247 =
																						((obj_t) BgL_iportz00_2453);
																					BgL_res3617z00_5263 =
																						RGC_BUFFER_GET_CHAR(BgL_tmpz00_8247,
																						BgL_forwardz00_2455);
																				}
																				BgL_curz00_2463 = BgL_res3617z00_5263;
																			}
																			{	/* Ieee/input.scm 186 */

																				if (
																					((long) (BgL_curz00_2463) ==
																						((long) 13)))
																					{	/* Ieee/input.scm 186 */
																						BgL_iportz00_2525 =
																							BgL_iportz00_2453;
																						BgL_lastzd2matchzd2_2526 =
																							BgL_newzd2matchzd2_2458;
																						BgL_forwardz00_2527 =
																							(((long) 1) +
																							BgL_forwardz00_2455);
																						BgL_bufposz00_2528 =
																							BgL_bufposz00_2456;
																					BgL_zc3z04anonymousza32065ze3z87_2529:
																						{	/* Ieee/input.scm 186 */
																							long BgL_newzd2matchzd2_2530;

																							{	/* Ieee/input.scm 186 */
																								long BgL_res3658z00_5366;

																								{	/* Ieee/input.scm 186 */
																									obj_t BgL_tmpz00_8253;

																									BgL_tmpz00_8253 =
																										((obj_t) BgL_iportz00_2525);
																									BgL_res3658z00_5366 =
																										RGC_STOP_MATCH
																										(BgL_tmpz00_8253,
																										BgL_forwardz00_2527);
																								} BgL_res3658z00_5366;
																							}
																							BgL_newzd2matchzd2_2530 =
																								((long) 0);
																							if ((BgL_forwardz00_2527 ==
																									BgL_bufposz00_2528))
																								{	/* Ieee/input.scm 186 */
																									bool_t BgL_test4493z00_8258;

																									{	/* Ieee/input.scm 186 */
																										bool_t BgL_res3660z00_5371;

																										BgL_res3660z00_5371 =
																											rgc_fill_buffer(
																											((obj_t)
																												BgL_iportz00_2525));
																										BgL_test4493z00_8258 =
																											BgL_res3660z00_5371;
																									}
																									if (BgL_test4493z00_8258)
																										{	/* Ieee/input.scm 186 */
																											long BgL_arg2068z00_2533;
																											long BgL_arg2069z00_2534;

																											{	/* Ieee/input.scm 186 */
																												long
																													BgL_res3661z00_5373;
																												{	/* Ieee/input.scm 186 */
																													obj_t BgL_tmpz00_8261;

																													BgL_tmpz00_8261 =
																														((obj_t)
																														BgL_iportz00_2525);
																													BgL_res3661z00_5373 =
																														RGC_BUFFER_FORWARD
																														(BgL_tmpz00_8261);
																												}
																												BgL_arg2068z00_2533 =
																													BgL_res3661z00_5373;
																											}
																											{	/* Ieee/input.scm 186 */
																												long
																													BgL_res3662z00_5375;
																												{	/* Ieee/input.scm 186 */
																													obj_t BgL_tmpz00_8264;

																													BgL_tmpz00_8264 =
																														((obj_t)
																														BgL_iportz00_2525);
																													BgL_res3662z00_5375 =
																														RGC_BUFFER_BUFPOS
																														(BgL_tmpz00_8264);
																												}
																												BgL_arg2069z00_2534 =
																													BgL_res3662z00_5375;
																											}
																											{
																												long BgL_bufposz00_8268;
																												long
																													BgL_forwardz00_8267;
																												BgL_forwardz00_8267 =
																													BgL_arg2068z00_2533;
																												BgL_bufposz00_8268 =
																													BgL_arg2069z00_2534;
																												BgL_bufposz00_2528 =
																													BgL_bufposz00_8268;
																												BgL_forwardz00_2527 =
																													BgL_forwardz00_8267;
																												goto
																													BgL_zc3z04anonymousza32065ze3z87_2529;
																											}
																										}
																									else
																										{	/* Ieee/input.scm 186 */
																											BgL_matchz00_2669 =
																												BgL_newzd2matchzd2_2530;
																										}
																								}
																							else
																								{	/* Ieee/input.scm 186 */
																									int BgL_curz00_2535;

																									{	/* Ieee/input.scm 186 */
																										int BgL_res3663z00_5378;

																										{	/* Ieee/input.scm 186 */
																											obj_t BgL_tmpz00_8269;

																											BgL_tmpz00_8269 =
																												((obj_t)
																												BgL_iportz00_2525);
																											BgL_res3663z00_5378 =
																												RGC_BUFFER_GET_CHAR
																												(BgL_tmpz00_8269,
																												BgL_forwardz00_2527);
																										}
																										BgL_curz00_2535 =
																											BgL_res3663z00_5378;
																									}
																									{	/* Ieee/input.scm 186 */

																										if (
																											((long) (BgL_curz00_2535)
																												== ((long) 10)))
																											{	/* Ieee/input.scm 186 */
																												long
																													BgL_arg2071z00_2537;
																												BgL_arg2071z00_2537 =
																													(((long) 1) +
																													BgL_forwardz00_2527);
																												{	/* Ieee/input.scm 186 */
																													long
																														BgL_newzd2matchzd2_5383;
																													{	/* Ieee/input.scm 186 */
																														long
																															BgL_res3666z00_5386;
																														{	/* Ieee/input.scm 186 */
																															obj_t
																																BgL_tmpz00_8276;
																															BgL_tmpz00_8276 =
																																((obj_t)
																																BgL_iportz00_2525);
																															BgL_res3666z00_5386
																																=
																																RGC_STOP_MATCH
																																(BgL_tmpz00_8276,
																																BgL_arg2071z00_2537);
																														} BgL_res3666z00_5386;
																													}
																													BgL_newzd2matchzd2_5383
																														= ((long) 1);
																													BgL_matchz00_2669 =
																														BgL_newzd2matchzd2_5383;
																											}}
																										else
																											{	/* Ieee/input.scm 186 */
																												BgL_matchz00_2669 =
																													BgL_newzd2matchzd2_2530;
																											}
																									}
																								}
																						}
																					}
																				else
																					{	/* Ieee/input.scm 186 */
																						if (
																							((long) (BgL_curz00_2463) ==
																								((long) 10)))
																							{	/* Ieee/input.scm 186 */
																								long BgL_arg2033z00_2467;

																								BgL_arg2033z00_2467 =
																									(((long) 1) +
																									BgL_forwardz00_2455);
																								{	/* Ieee/input.scm 186 */
																									long BgL_newzd2matchzd2_5272;

																									{	/* Ieee/input.scm 186 */
																										long BgL_res3622z00_5275;

																										{	/* Ieee/input.scm 186 */
																											obj_t BgL_tmpz00_8284;

																											BgL_tmpz00_8284 =
																												((obj_t)
																												BgL_iportz00_2453);
																											BgL_res3622z00_5275 =
																												RGC_STOP_MATCH
																												(BgL_tmpz00_8284,
																												BgL_arg2033z00_2467);
																										} BgL_res3622z00_5275;
																									}
																									BgL_newzd2matchzd2_5272 =
																										((long) 0);
																									BgL_matchz00_2669 =
																										BgL_newzd2matchzd2_5272;
																							}}
																						else
																							{	/* Ieee/input.scm 186 */
																								BgL_iportz00_2497 =
																									BgL_iportz00_2453;
																								BgL_lastzd2matchzd2_2498 =
																									BgL_newzd2matchzd2_2458;
																								BgL_forwardz00_2499 =
																									(((long) 1) +
																									BgL_forwardz00_2455);
																								BgL_bufposz00_2500 =
																									BgL_bufposz00_2456;
																							BgL_zc3z04anonymousza32052ze3z87_2501:
																								{	/* Ieee/input.scm 186 */
																									long BgL_newzd2matchzd2_2502;

																									{	/* Ieee/input.scm 186 */
																										long BgL_res3644z00_5329;

																										{	/* Ieee/input.scm 186 */
																											obj_t BgL_tmpz00_8287;

																											BgL_tmpz00_8287 =
																												((obj_t)
																												BgL_iportz00_2497);
																											BgL_res3644z00_5329 =
																												RGC_STOP_MATCH
																												(BgL_tmpz00_8287,
																												BgL_forwardz00_2499);
																										} BgL_res3644z00_5329;
																									}
																									BgL_newzd2matchzd2_2502 =
																										((long) 2);
																									if ((BgL_forwardz00_2499 ==
																											BgL_bufposz00_2500))
																										{	/* Ieee/input.scm 186 */
																											bool_t
																												BgL_test4497z00_8292;
																											{	/* Ieee/input.scm 186 */
																												bool_t
																													BgL_res3646z00_5334;
																												BgL_res3646z00_5334 =
																													rgc_fill_buffer((
																														(obj_t)
																														BgL_iportz00_2497));
																												BgL_test4497z00_8292 =
																													BgL_res3646z00_5334;
																											}
																											if (BgL_test4497z00_8292)
																												{	/* Ieee/input.scm 186 */
																													long
																														BgL_arg2055z00_2505;
																													long
																														BgL_arg2056z00_2506;
																													{	/* Ieee/input.scm 186 */
																														long
																															BgL_res3647z00_5336;
																														{	/* Ieee/input.scm 186 */
																															obj_t
																																BgL_tmpz00_8295;
																															BgL_tmpz00_8295 =
																																((obj_t)
																																BgL_iportz00_2497);
																															BgL_res3647z00_5336
																																=
																																RGC_BUFFER_FORWARD
																																(BgL_tmpz00_8295);
																														}
																														BgL_arg2055z00_2505
																															=
																															BgL_res3647z00_5336;
																													}
																													{	/* Ieee/input.scm 186 */
																														long
																															BgL_res3648z00_5338;
																														{	/* Ieee/input.scm 186 */
																															obj_t
																																BgL_tmpz00_8298;
																															BgL_tmpz00_8298 =
																																((obj_t)
																																BgL_iportz00_2497);
																															BgL_res3648z00_5338
																																=
																																RGC_BUFFER_BUFPOS
																																(BgL_tmpz00_8298);
																														}
																														BgL_arg2056z00_2506
																															=
																															BgL_res3648z00_5338;
																													}
																													{
																														long
																															BgL_bufposz00_8302;
																														long
																															BgL_forwardz00_8301;
																														BgL_forwardz00_8301
																															=
																															BgL_arg2055z00_2505;
																														BgL_bufposz00_8302 =
																															BgL_arg2056z00_2506;
																														BgL_bufposz00_2500 =
																															BgL_bufposz00_8302;
																														BgL_forwardz00_2499
																															=
																															BgL_forwardz00_8301;
																														goto
																															BgL_zc3z04anonymousza32052ze3z87_2501;
																													}
																												}
																											else
																												{	/* Ieee/input.scm 186 */
																													BgL_matchz00_2669 =
																														BgL_newzd2matchzd2_2502;
																												}
																										}
																									else
																										{	/* Ieee/input.scm 186 */
																											int BgL_curz00_2507;

																											{	/* Ieee/input.scm 186 */
																												int BgL_res3649z00_5341;

																												{	/* Ieee/input.scm 186 */
																													obj_t BgL_tmpz00_8303;

																													BgL_tmpz00_8303 =
																														((obj_t)
																														BgL_iportz00_2497);
																													BgL_res3649z00_5341 =
																														RGC_BUFFER_GET_CHAR
																														(BgL_tmpz00_8303,
																														BgL_forwardz00_2499);
																												}
																												BgL_curz00_2507 =
																													BgL_res3649z00_5341;
																											}
																											{	/* Ieee/input.scm 186 */

																												if (
																													((long)
																														(BgL_curz00_2507) ==
																														((long) 13)))
																													{
																														long
																															BgL_bufposz00_8313;
																														long
																															BgL_forwardz00_8311;
																														long
																															BgL_lastzd2matchzd2_8310;
																														obj_t
																															BgL_iportz00_8309;
																														BgL_iportz00_8309 =
																															BgL_iportz00_2497;
																														BgL_lastzd2matchzd2_8310
																															=
																															BgL_newzd2matchzd2_2502;
																														BgL_forwardz00_8311
																															=
																															(((long) 1) +
																															BgL_forwardz00_2499);
																														BgL_bufposz00_8313 =
																															BgL_bufposz00_2500;
																														BgL_bufposz00_2528 =
																															BgL_bufposz00_8313;
																														BgL_forwardz00_2527
																															=
																															BgL_forwardz00_8311;
																														BgL_lastzd2matchzd2_2526
																															=
																															BgL_lastzd2matchzd2_8310;
																														BgL_iportz00_2525 =
																															BgL_iportz00_8309;
																														goto
																															BgL_zc3z04anonymousza32065ze3z87_2529;
																													}
																												else
																													{	/* Ieee/input.scm 186 */
																														if (
																															((long)
																																(BgL_curz00_2507)
																																== ((long) 10)))
																															{	/* Ieee/input.scm 186 */
																																long
																																	BgL_arg2061z00_2511;
																																BgL_arg2061z00_2511
																																	=
																																	(((long) 1) +
																																	BgL_forwardz00_2499);
																																{	/* Ieee/input.scm 186 */
																																	long
																																		BgL_newzd2matchzd2_5350;
																																	{	/* Ieee/input.scm 186 */
																																		long
																																			BgL_res3654z00_5353;
																																		{	/* Ieee/input.scm 186 */
																																			obj_t
																																				BgL_tmpz00_8318;
																																			BgL_tmpz00_8318
																																				=
																																				((obj_t)
																																				BgL_iportz00_2497);
																																			BgL_res3654z00_5353
																																				=
																																				RGC_STOP_MATCH
																																				(BgL_tmpz00_8318,
																																				BgL_arg2061z00_2511);
																																		} BgL_res3654z00_5353;
																																	}
																																	BgL_newzd2matchzd2_5350
																																		=
																																		((long) 0);
																																	BgL_matchz00_2669
																																		=
																																		BgL_newzd2matchzd2_5350;
																															}}
																														else
																															{
																																long
																																	BgL_forwardz00_8322;
																																long
																																	BgL_lastzd2matchzd2_8321;
																																BgL_lastzd2matchzd2_8321
																																	=
																																	BgL_newzd2matchzd2_2502;
																																BgL_forwardz00_8322
																																	=
																																	(((long) 1) +
																																	BgL_forwardz00_2499);
																																BgL_forwardz00_2499
																																	=
																																	BgL_forwardz00_8322;
																																BgL_lastzd2matchzd2_2498
																																	=
																																	BgL_lastzd2matchzd2_8321;
																																goto
																																	BgL_zc3z04anonymousza32052ze3z87_2501;
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
								{	/* Ieee/input.scm 186 */
									obj_t BgL_tmpz00_8326;

									BgL_tmpz00_8326 = ((obj_t) BgL_iportz00_2415);
									RGC_SET_FILEPOS(BgL_tmpz00_8326);
								}
								switch (BgL_matchz00_2669)
									{
									case ((long) 4):

										{	/* Ieee/input.scm 186 */
											bool_t BgL_test4500z00_8329;

											{	/* Ieee/input.scm 186 */
												long BgL_arg2155z00_2659;

												{	/* Ieee/input.scm 186 */
													long BgL_res3683z00_5433;

													{	/* Ieee/input.scm 186 */
														obj_t BgL_tmpz00_8330;

														BgL_tmpz00_8330 = ((obj_t) BgL_iportz00_2415);
														BgL_res3683z00_5433 =
															RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8330);
													}
													BgL_arg2155z00_2659 = BgL_res3683z00_5433;
												}
												BgL_test4500z00_8329 =
													(BgL_arg2155z00_2659 == ((long) 0));
											}
											if (BgL_test4500z00_8329)
												{	/* Ieee/input.scm 186 */
													return BEOF;
												}
											else
												{	/* Ieee/input.scm 186 */
													unsigned char BgL_res3685z00_5437;

													{	/* Ieee/input.scm 186 */
														obj_t BgL_tmpz00_8334;

														BgL_tmpz00_8334 = ((obj_t) BgL_iportz00_2415);
														BgL_res3685z00_5437 =
															RGC_BUFFER_CHARACTER(BgL_tmpz00_8334);
													}
													return BCHAR(BgL_res3685z00_5437);
												}
										}
										break;
									case ((long) 3):

										return BGl_string4285z00zz__r4_input_6_10_2z00;
										break;
									case ((long) 2):

										{	/* Ieee/input.scm 193 */
											obj_t BgL_res3691z00_5451;

											{	/* Ieee/input.scm 186 */
												long BgL_arg2080z00_5445;

												{	/* Ieee/input.scm 186 */
													long BgL_res3689z00_5447;

													{	/* Ieee/input.scm 186 */
														obj_t BgL_tmpz00_8338;

														BgL_tmpz00_8338 = ((obj_t) BgL_iportz00_2415);
														BgL_res3689z00_5447 =
															RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8338);
													}
													BgL_arg2080z00_5445 = BgL_res3689z00_5447;
												}
												{	/* Ieee/input.scm 186 */
													obj_t BgL_res3690z00_5450;

													BgL_res3690z00_5450 =
														rgc_buffer_substring(
														((obj_t) BgL_iportz00_2415), ((long) 0),
														BgL_arg2080z00_5445);
													BgL_res3691z00_5451 = BgL_res3690z00_5450;
											}}
											return BgL_res3691z00_5451;
										}
										break;
									case ((long) 1):

										{	/* Ieee/input.scm 191 */
											long BgL_arg2163z00_2673;

											{	/* Ieee/input.scm 191 */
												long BgL_arg2164z00_2674;

												{	/* Ieee/input.scm 186 */
													long BgL_res3692z00_5453;

													{	/* Ieee/input.scm 186 */
														obj_t BgL_tmpz00_8343;

														BgL_tmpz00_8343 = ((obj_t) BgL_iportz00_2415);
														BgL_res3692z00_5453 =
															RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8343);
													}
													BgL_arg2164z00_2674 = BgL_res3692z00_5453;
												}
												BgL_arg2163z00_2673 =
													(BgL_arg2164z00_2674 - ((long) 2));
											}
											BgL_minz00_2562 = (int) (((long) 0));
											BgL_maxz00_2563 = (int) (BgL_arg2163z00_2673);
										BgL_lambda2081z00_2564:
											if (((long) (BgL_maxz00_2563) < (long) (BgL_minz00_2562)))
												{	/* Ieee/input.scm 186 */
													long BgL_arg2083z00_2566;

													{	/* Ieee/input.scm 186 */
														long BgL_res3672z00_5405;

														{	/* Ieee/input.scm 186 */
															obj_t BgL_tmpz00_8351;

															BgL_tmpz00_8351 = ((obj_t) BgL_iportz00_2415);
															BgL_res3672z00_5405 =
																RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8351);
														}
														BgL_arg2083z00_2566 = BgL_res3672z00_5405;
													}
													{	/* Ieee/input.scm 186 */
														long BgL_za72za7_5407;

														BgL_za72za7_5407 = (long) (BgL_maxz00_2563);
														BgL_maxz00_2563 =
															(int) ((BgL_arg2083z00_2566 + BgL_za72za7_5407));
												}}
											else
												{	/* Ieee/input.scm 186 */
													BFALSE;
												}
											{	/* Ieee/input.scm 186 */
												bool_t BgL_test4502z00_8357;

												if (((long) (BgL_minz00_2562) >= ((long) 0)))
													{	/* Ieee/input.scm 186 */
														if (
															((long) (BgL_maxz00_2563) >=
																(long) (BgL_minz00_2562)))
															{	/* Ieee/input.scm 186 */
																long BgL_arg2092z00_2577;

																{	/* Ieee/input.scm 186 */
																	long BgL_res3676z00_5415;

																	{	/* Ieee/input.scm 186 */
																		obj_t BgL_tmpz00_8365;

																		BgL_tmpz00_8365 =
																			((obj_t) BgL_iportz00_2415);
																		BgL_res3676z00_5415 =
																			RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8365);
																	}
																	BgL_arg2092z00_2577 = BgL_res3676z00_5415;
																}
																BgL_test4502z00_8357 =
																	(
																	(long) (BgL_maxz00_2563) <=
																	BgL_arg2092z00_2577);
															}
														else
															{	/* Ieee/input.scm 186 */
																BgL_test4502z00_8357 = ((bool_t) 0);
															}
													}
												else
													{	/* Ieee/input.scm 186 */
														BgL_test4502z00_8357 = ((bool_t) 0);
													}
												if (BgL_test4502z00_8357)
													{	/* Ieee/input.scm 186 */
														obj_t BgL_res3678z00_5422;

														{	/* Ieee/input.scm 186 */
															long BgL_startz00_5420;
															long BgL_stopz00_5421;

															BgL_startz00_5420 = (long) (BgL_minz00_2562);
															BgL_stopz00_5421 = (long) (BgL_maxz00_2563);
															BgL_res3678z00_5422 =
																rgc_buffer_substring(
																((obj_t) BgL_iportz00_2415), BgL_startz00_5420,
																BgL_stopz00_5421);
														}
														return BgL_res3678z00_5422;
													}
												else
													{	/* Ieee/input.scm 186 */
														obj_t BgL_arg2088z00_2571;
														obj_t BgL_arg2089z00_2572;

														{	/* Ieee/input.scm 186 */
															obj_t BgL_arg2090z00_2573;

															{	/* Ieee/input.scm 186 */
																obj_t BgL_res3681z00_5429;

																{	/* Ieee/input.scm 186 */
																	long BgL_arg2080z00_5423;

																	{	/* Ieee/input.scm 186 */
																		long BgL_res3679z00_5425;

																		{	/* Ieee/input.scm 186 */
																			obj_t BgL_tmpz00_8374;

																			BgL_tmpz00_8374 =
																				((obj_t) BgL_iportz00_2415);
																			BgL_res3679z00_5425 =
																				RGC_BUFFER_MATCH_LENGTH
																				(BgL_tmpz00_8374);
																		}
																		BgL_arg2080z00_5423 = BgL_res3679z00_5425;
																	}
																	{	/* Ieee/input.scm 186 */
																		obj_t BgL_res3680z00_5428;

																		BgL_res3680z00_5428 =
																			rgc_buffer_substring(
																			((obj_t) BgL_iportz00_2415), ((long) 0),
																			BgL_arg2080z00_5423);
																		BgL_res3681z00_5429 = BgL_res3680z00_5428;
																}}
																BgL_arg2090z00_2573 = BgL_res3681z00_5429;
															}
															{	/* Ieee/input.scm 186 */
																obj_t BgL_list2091z00_2574;

																BgL_list2091z00_2574 =
																	MAKE_YOUNG_PAIR(BgL_arg2090z00_2573, BNIL);
																BgL_arg2088z00_2571 =
																	BGl_formatz00zz__r4_output_6_10_3z00
																	(BGl_string4274z00zz__r4_input_6_10_2z00,
																	BgL_list2091z00_2574);
														}}
														BgL_arg2089z00_2572 =
															MAKE_YOUNG_PAIR(BINT(BgL_minz00_2562),
															BINT(BgL_maxz00_2563));
														return
															BGl_errorz00zz__errorz00
															(BGl_string4275z00zz__r4_input_6_10_2z00,
															BgL_arg2088z00_2571, BgL_arg2089z00_2572);
													}
											}
										}
										break;
									case ((long) 0):

										{	/* Ieee/input.scm 189 */
											long BgL_arg2165z00_2675;

											{	/* Ieee/input.scm 189 */
												long BgL_arg2166z00_2676;

												{	/* Ieee/input.scm 186 */
													long BgL_res3694z00_5457;

													{	/* Ieee/input.scm 186 */
														obj_t BgL_tmpz00_8387;

														BgL_tmpz00_8387 = ((obj_t) BgL_iportz00_2415);
														BgL_res3694z00_5457 =
															RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8387);
													}
													BgL_arg2166z00_2676 = BgL_res3694z00_5457;
												}
												BgL_arg2165z00_2675 =
													(BgL_arg2166z00_2676 - ((long) 1));
											}
											{
												int BgL_maxz00_8393;
												int BgL_minz00_8391;

												BgL_minz00_8391 = (int) (((long) 0));
												BgL_maxz00_8393 = (int) (BgL_arg2165z00_2675);
												BgL_maxz00_2563 = BgL_maxz00_8393;
												BgL_minz00_2562 = BgL_minz00_8391;
												goto BgL_lambda2081z00_2564;
											}
										}
										break;
									default:
										return
											BGl_errorz00zz__errorz00
											(BGl_string4272z00zz__r4_input_6_10_2z00,
											BGl_string4273z00zz__r4_input_6_10_2z00,
											BINT(BgL_matchz00_2669));
									}
							}
						}
					}
				else
					{	/* Ieee/input.scm 201 */
						obj_t BgL_g1078z00_2716;
						obj_t BgL_g1079z00_2717;

						BgL_g1078z00_2716 =
							BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_26);
						{	/* Ieee/string.scm 168 */

							BgL_g1079z00_2717 =
								make_string(((long) 100), ((unsigned char) ' '));
						}
						{
							obj_t BgL_cz00_2719;
							long BgL_wz00_2720;
							long BgL_mz00_2721;
							obj_t BgL_accz00_2722;

							BgL_cz00_2719 = BgL_g1078z00_2716;
							BgL_wz00_2720 = ((long) 0);
							BgL_mz00_2721 = ((long) 100);
							BgL_accz00_2722 = BgL_g1079z00_2717;
						BgL_zc3z04anonymousza32169ze3z87_2723:
							{	/* Ieee/input.scm 206 */
								bool_t BgL_test4505z00_8400;

								{	/* Ieee/input.scm 206 */
									bool_t BgL_res3697z00_5462;

									BgL_res3697z00_5462 = EOF_OBJECTP(BgL_cz00_2719);
									BgL_test4505z00_8400 = BgL_res3697z00_5462;
								}
								if (BgL_test4505z00_8400)
									{	/* Ieee/input.scm 206 */
										if ((BgL_wz00_2720 == ((long) 0)))
											{	/* Ieee/input.scm 208 */
												return BgL_cz00_2719;
											}
										else
											{	/* Ieee/input.scm 208 */
												return
													c_substring(BgL_accz00_2722, ((long) 0),
													BgL_wz00_2720);
									}}
								else
									{	/* Ieee/input.scm 206 */
										if ((BgL_wz00_2720 == BgL_mz00_2721))
											{	/* Ieee/input.scm 213 */
												long BgL_arg2173z00_2727;
												obj_t BgL_arg2174z00_2728;

												BgL_arg2173z00_2727 = (BgL_mz00_2721 * ((long) 2));
												{	/* Ieee/input.scm 214 */
													obj_t BgL_newzd2acczd2_2729;

													{	/* Ieee/input.scm 214 */
														long BgL_arg2175z00_2730;

														BgL_arg2175z00_2730 = (BgL_mz00_2721 * ((long) 2));
														{	/* Ieee/string.scm 168 */

															BgL_newzd2acczd2_2729 =
																make_string(BgL_arg2175z00_2730,
																((unsigned char) ' '));
													}}
													blit_string(BgL_accz00_2722, ((long) 0),
														BgL_newzd2acczd2_2729, ((long) 0), BgL_mz00_2721);
													BgL_arg2174z00_2728 = BgL_newzd2acczd2_2729;
												}
												{
													obj_t BgL_accz00_8412;
													long BgL_mz00_8411;

													BgL_mz00_8411 = BgL_arg2173z00_2727;
													BgL_accz00_8412 = BgL_arg2174z00_2728;
													BgL_accz00_2722 = BgL_accz00_8412;
													BgL_mz00_2721 = BgL_mz00_8411;
													goto BgL_zc3z04anonymousza32169ze3z87_2723;
												}
											}
										else
											{	/* Ieee/input.scm 209 */
												if ((CCHAR(BgL_cz00_2719) == ((unsigned char) 13)))
													{	/* Ieee/input.scm 218 */
														obj_t BgL_c2z00_2734;

														BgL_c2z00_2734 =
															BGl_readzd2charzd2zz__r4_input_6_10_2z00
															(BgL_ipz00_26);
														if ((CCHAR(BgL_c2z00_2734) == ((unsigned char) 10)))
															{	/* Ieee/input.scm 219 */
																return
																	c_substring(BgL_accz00_2722, ((long) 0),
																	BgL_wz00_2720);
															}
														else
															{	/* Ieee/input.scm 219 */
																{	/* Ieee/input.scm 222 */
																	unsigned char BgL_tmpz00_8421;

																	BgL_tmpz00_8421 = CCHAR(BgL_cz00_2719);
																	STRING_SET(BgL_accz00_2722, BgL_wz00_2720,
																		BgL_tmpz00_8421);
																}
																{
																	long BgL_wz00_8425;
																	obj_t BgL_cz00_8424;

																	BgL_cz00_8424 = BgL_c2z00_2734;
																	BgL_wz00_8425 = (BgL_wz00_2720 + ((long) 1));
																	BgL_wz00_2720 = BgL_wz00_8425;
																	BgL_cz00_2719 = BgL_cz00_8424;
																	goto BgL_zc3z04anonymousza32169ze3z87_2723;
																}
															}
													}
												else
													{	/* Ieee/input.scm 217 */
														if ((CCHAR(BgL_cz00_2719) == ((unsigned char) 10)))
															{	/* Ieee/input.scm 224 */
																return
																	c_substring(BgL_accz00_2722, ((long) 0),
																	BgL_wz00_2720);
															}
														else
															{	/* Ieee/input.scm 224 */
																{	/* Ieee/input.scm 229 */
																	unsigned char BgL_tmpz00_8431;

																	BgL_tmpz00_8431 = CCHAR(BgL_cz00_2719);
																	STRING_SET(BgL_accz00_2722, BgL_wz00_2720,
																		BgL_tmpz00_8431);
																}
																{
																	long BgL_wz00_8436;
																	obj_t BgL_cz00_8434;

																	BgL_cz00_8434 =
																		BGl_readzd2charzd2zz__r4_input_6_10_2z00
																		(BgL_ipz00_26);
																	BgL_wz00_8436 = (BgL_wz00_2720 + ((long) 1));
																	BgL_wz00_2720 = BgL_wz00_8436;
																	BgL_cz00_2719 = BgL_cz00_8434;
																	goto BgL_zc3z04anonymousza32169ze3z87_2723;
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



/* _read-line-newline */
	obj_t BGl__readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t
		BgL_env1262z00_31, obj_t BgL_opt1261z00_30)
	{
		{	/* Ieee/input.scm 235 */
			{	/* Ieee/input.scm 235 */

				switch (VECTOR_LENGTH(BgL_opt1261z00_30))
					{
					case ((long) 0):

						{	/* Ieee/input.scm 235 */
							obj_t BgL_ipz00_2747;

							{	/* Ieee/input.scm 235 */
								obj_t BgL_res3711z00_5506;

								{	/* Ieee/input.scm 235 */
									obj_t BgL_tmpz00_8438;

									BgL_tmpz00_8438 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3711z00_5506 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8438);
								}
								BgL_ipz00_2747 = BgL_res3711z00_5506;
							}
							{	/* Ieee/input.scm 235 */

								return
									BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00
									(BgL_ipz00_2747);
							}
						}
						break;
					case ((long) 1):

						{	/* Ieee/input.scm 235 */
							obj_t BgL_ipz00_2748;

							BgL_ipz00_2748 = VECTOR_REF(BgL_opt1261z00_30, ((long) 0));
							{	/* Ieee/input.scm 235 */

								return
									BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00
									(BgL_ipz00_2748);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* read-line-newline */
	BGL_EXPORTED_DEF obj_t
		BGl_readzd2linezd2newlinez00zz__r4_input_6_10_2z00(obj_t BgL_ipz00_29)
	{
		{	/* Ieee/input.scm 235 */
			{	/* Ieee/input.scm 236 */
				bool_t BgL_test4511z00_8446;

				{	/* Ieee/input.scm 236 */
					long BgL_arg2349z00_3068;

					BgL_arg2349z00_3068 = BGL_INPUT_PORT_BUFSIZ(BgL_ipz00_29);
					BgL_test4511z00_8446 = (BgL_arg2349z00_3068 > ((long) 2));
				}
				if (BgL_test4511z00_8446)
					{
						obj_t BgL_iportz00_2753;

						BgL_iportz00_2753 = BgL_ipz00_29;
						{
							obj_t BgL_iportz00_2855;
							long BgL_lastzd2matchzd2_2856;
							long BgL_forwardz00_2857;
							long BgL_bufposz00_2858;
							obj_t BgL_iportz00_2839;
							long BgL_lastzd2matchzd2_2840;
							long BgL_forwardz00_2841;
							long BgL_bufposz00_2842;
							obj_t BgL_iportz00_2824;
							long BgL_lastzd2matchzd2_2825;
							long BgL_forwardz00_2826;
							long BgL_bufposz00_2827;
							obj_t BgL_iportz00_2811;
							long BgL_lastzd2matchzd2_2812;
							long BgL_forwardz00_2813;
							long BgL_bufposz00_2814;
							obj_t BgL_iportz00_2789;
							long BgL_lastzd2matchzd2_2790;
							long BgL_forwardz00_2791;
							long BgL_bufposz00_2792;

							{	/* Ieee/input.scm 237 */
								long BgL_res3774z00_5662;

								{	/* Ieee/input.scm 237 */
									obj_t BgL_tmpz00_8449;

									BgL_tmpz00_8449 = ((obj_t) BgL_iportz00_2753);
									BgL_res3774z00_5662 = RGC_START_MATCH(BgL_tmpz00_8449);
								} BgL_res3774z00_5662;
							}
							{	/* Ieee/input.scm 237 */
								long BgL_matchz00_2993;

								{	/* Ieee/input.scm 237 */
									long BgL_arg2326z00_2997;
									long BgL_arg2327z00_2998;

									{	/* Ieee/input.scm 237 */
										long BgL_res3775z00_5664;

										{	/* Ieee/input.scm 237 */
											obj_t BgL_tmpz00_8452;

											BgL_tmpz00_8452 = ((obj_t) BgL_iportz00_2753);
											BgL_res3775z00_5664 = RGC_BUFFER_FORWARD(BgL_tmpz00_8452);
										}
										BgL_arg2326z00_2997 = BgL_res3775z00_5664;
									}
									{	/* Ieee/input.scm 237 */
										long BgL_res3776z00_5666;

										{	/* Ieee/input.scm 237 */
											obj_t BgL_tmpz00_8455;

											BgL_tmpz00_8455 = ((obj_t) BgL_iportz00_2753);
											BgL_res3776z00_5666 = RGC_BUFFER_BUFPOS(BgL_tmpz00_8455);
										}
										BgL_arg2327z00_2998 = BgL_res3776z00_5666;
									}
									BgL_iportz00_2824 = BgL_iportz00_2753;
									BgL_lastzd2matchzd2_2825 = ((long) 1);
									BgL_forwardz00_2826 = BgL_arg2326z00_2997;
									BgL_bufposz00_2827 = BgL_arg2327z00_2998;
								BgL_zc3z04anonymousza32205ze3z87_2828:
									if ((BgL_forwardz00_2826 == BgL_bufposz00_2827))
										{	/* Ieee/input.scm 237 */
											bool_t BgL_test4513z00_8460;

											{	/* Ieee/input.scm 237 */
												bool_t BgL_res3736z00_5569;

												BgL_res3736z00_5569 =
													rgc_fill_buffer(((obj_t) BgL_iportz00_2824));
												BgL_test4513z00_8460 = BgL_res3736z00_5569;
											}
											if (BgL_test4513z00_8460)
												{	/* Ieee/input.scm 237 */
													long BgL_arg2208z00_2831;
													long BgL_arg2209z00_2832;

													{	/* Ieee/input.scm 237 */
														long BgL_res3737z00_5571;

														{	/* Ieee/input.scm 237 */
															obj_t BgL_tmpz00_8463;

															BgL_tmpz00_8463 = ((obj_t) BgL_iportz00_2824);
															BgL_res3737z00_5571 =
																RGC_BUFFER_FORWARD(BgL_tmpz00_8463);
														}
														BgL_arg2208z00_2831 = BgL_res3737z00_5571;
													}
													{	/* Ieee/input.scm 237 */
														long BgL_res3738z00_5573;

														{	/* Ieee/input.scm 237 */
															obj_t BgL_tmpz00_8466;

															BgL_tmpz00_8466 = ((obj_t) BgL_iportz00_2824);
															BgL_res3738z00_5573 =
																RGC_BUFFER_BUFPOS(BgL_tmpz00_8466);
														}
														BgL_arg2209z00_2832 = BgL_res3738z00_5573;
													}
													{
														long BgL_bufposz00_8470;
														long BgL_forwardz00_8469;

														BgL_forwardz00_8469 = BgL_arg2208z00_2831;
														BgL_bufposz00_8470 = BgL_arg2209z00_2832;
														BgL_bufposz00_2827 = BgL_bufposz00_8470;
														BgL_forwardz00_2826 = BgL_forwardz00_8469;
														goto BgL_zc3z04anonymousza32205ze3z87_2828;
													}
												}
											else
												{	/* Ieee/input.scm 237 */
													BgL_matchz00_2993 = BgL_lastzd2matchzd2_2825;
												}
										}
									else
										{	/* Ieee/input.scm 237 */
											int BgL_curz00_2833;

											{	/* Ieee/input.scm 237 */
												int BgL_res3739z00_5576;

												{	/* Ieee/input.scm 237 */
													obj_t BgL_tmpz00_8471;

													BgL_tmpz00_8471 = ((obj_t) BgL_iportz00_2824);
													BgL_res3739z00_5576 =
														RGC_BUFFER_GET_CHAR(BgL_tmpz00_8471,
														BgL_forwardz00_2826);
												}
												BgL_curz00_2833 = BgL_res3739z00_5576;
											}
											{	/* Ieee/input.scm 237 */

												if (((long) (BgL_curz00_2833) == ((long) 13)))
													{	/* Ieee/input.scm 237 */
														BgL_iportz00_2811 = BgL_iportz00_2824;
														BgL_lastzd2matchzd2_2812 = BgL_lastzd2matchzd2_2825;
														BgL_forwardz00_2813 =
															(((long) 1) + BgL_forwardz00_2826);
														BgL_bufposz00_2814 = BgL_bufposz00_2827;
													BgL_zc3z04anonymousza32198ze3z87_2815:
														{	/* Ieee/input.scm 237 */
															long BgL_newzd2matchzd2_2816;

															{	/* Ieee/input.scm 237 */
																long BgL_res3726z00_5544;

																{	/* Ieee/input.scm 237 */
																	obj_t BgL_tmpz00_8477;

																	BgL_tmpz00_8477 = ((obj_t) BgL_iportz00_2811);
																	BgL_res3726z00_5544 =
																		RGC_STOP_MATCH(BgL_tmpz00_8477,
																		BgL_forwardz00_2813);
																} BgL_res3726z00_5544;
															}
															BgL_newzd2matchzd2_2816 = ((long) 0);
															if ((BgL_forwardz00_2813 == BgL_bufposz00_2814))
																{	/* Ieee/input.scm 237 */
																	bool_t BgL_test4516z00_8482;

																	{	/* Ieee/input.scm 237 */
																		bool_t BgL_res3728z00_5549;

																		BgL_res3728z00_5549 =
																			rgc_fill_buffer(
																			((obj_t) BgL_iportz00_2811));
																		BgL_test4516z00_8482 = BgL_res3728z00_5549;
																	}
																	if (BgL_test4516z00_8482)
																		{	/* Ieee/input.scm 237 */
																			long BgL_arg2201z00_2819;
																			long BgL_arg2202z00_2820;

																			{	/* Ieee/input.scm 237 */
																				long BgL_res3729z00_5551;

																				{	/* Ieee/input.scm 237 */
																					obj_t BgL_tmpz00_8485;

																					BgL_tmpz00_8485 =
																						((obj_t) BgL_iportz00_2811);
																					BgL_res3729z00_5551 =
																						RGC_BUFFER_FORWARD(BgL_tmpz00_8485);
																				}
																				BgL_arg2201z00_2819 =
																					BgL_res3729z00_5551;
																			}
																			{	/* Ieee/input.scm 237 */
																				long BgL_res3730z00_5553;

																				{	/* Ieee/input.scm 237 */
																					obj_t BgL_tmpz00_8488;

																					BgL_tmpz00_8488 =
																						((obj_t) BgL_iportz00_2811);
																					BgL_res3730z00_5553 =
																						RGC_BUFFER_BUFPOS(BgL_tmpz00_8488);
																				}
																				BgL_arg2202z00_2820 =
																					BgL_res3730z00_5553;
																			}
																			{
																				long BgL_bufposz00_8492;
																				long BgL_forwardz00_8491;

																				BgL_forwardz00_8491 =
																					BgL_arg2201z00_2819;
																				BgL_bufposz00_8492 =
																					BgL_arg2202z00_2820;
																				BgL_bufposz00_2814 = BgL_bufposz00_8492;
																				BgL_forwardz00_2813 =
																					BgL_forwardz00_8491;
																				goto
																					BgL_zc3z04anonymousza32198ze3z87_2815;
																			}
																		}
																	else
																		{	/* Ieee/input.scm 237 */
																			BgL_matchz00_2993 =
																				BgL_newzd2matchzd2_2816;
																		}
																}
															else
																{	/* Ieee/input.scm 237 */
																	int BgL_curz00_2821;

																	{	/* Ieee/input.scm 237 */
																		int BgL_res3731z00_5556;

																		{	/* Ieee/input.scm 237 */
																			obj_t BgL_tmpz00_8493;

																			BgL_tmpz00_8493 =
																				((obj_t) BgL_iportz00_2811);
																			BgL_res3731z00_5556 =
																				RGC_BUFFER_GET_CHAR(BgL_tmpz00_8493,
																				BgL_forwardz00_2813);
																		}
																		BgL_curz00_2821 = BgL_res3731z00_5556;
																	}
																	{	/* Ieee/input.scm 237 */

																		if (
																			((long) (BgL_curz00_2821) == ((long) 10)))
																			{	/* Ieee/input.scm 237 */
																				long BgL_arg2204z00_2823;

																				BgL_arg2204z00_2823 =
																					(((long) 1) + BgL_forwardz00_2813);
																				{	/* Ieee/input.scm 237 */
																					long BgL_newzd2matchzd2_5561;

																					{	/* Ieee/input.scm 237 */
																						long BgL_res3734z00_5564;

																						{	/* Ieee/input.scm 237 */
																							obj_t BgL_tmpz00_8500;

																							BgL_tmpz00_8500 =
																								((obj_t) BgL_iportz00_2811);
																							BgL_res3734z00_5564 =
																								RGC_STOP_MATCH(BgL_tmpz00_8500,
																								BgL_arg2204z00_2823);
																						} BgL_res3734z00_5564;
																					}
																					BgL_newzd2matchzd2_5561 = ((long) 0);
																					BgL_matchz00_2993 =
																						BgL_newzd2matchzd2_5561;
																			}}
																		else
																			{	/* Ieee/input.scm 237 */
																				BgL_matchz00_2993 =
																					BgL_newzd2matchzd2_2816;
																			}
																	}
																}
														}
													}
												else
													{	/* Ieee/input.scm 237 */
														if (((long) (BgL_curz00_2833) == ((long) 10)))
															{	/* Ieee/input.scm 237 */
																long BgL_arg2213z00_2837;

																BgL_arg2213z00_2837 =
																	(((long) 1) + BgL_forwardz00_2826);
																{	/* Ieee/input.scm 237 */
																	long BgL_newzd2matchzd2_5585;

																	{	/* Ieee/input.scm 237 */
																		long BgL_res3744z00_5588;

																		{	/* Ieee/input.scm 237 */
																			obj_t BgL_tmpz00_8508;

																			BgL_tmpz00_8508 =
																				((obj_t) BgL_iportz00_2824);
																			BgL_res3744z00_5588 =
																				RGC_STOP_MATCH(BgL_tmpz00_8508,
																				BgL_arg2213z00_2837);
																		} BgL_res3744z00_5588;
																	}
																	BgL_newzd2matchzd2_5585 = ((long) 0);
																	BgL_matchz00_2993 = BgL_newzd2matchzd2_5585;
															}}
														else
															{	/* Ieee/input.scm 237 */
																BgL_iportz00_2839 = BgL_iportz00_2824;
																BgL_lastzd2matchzd2_2840 =
																	BgL_lastzd2matchzd2_2825;
																BgL_forwardz00_2841 =
																	(((long) 1) + BgL_forwardz00_2826);
																BgL_bufposz00_2842 = BgL_bufposz00_2827;
															BgL_zc3z04anonymousza32215ze3z87_2843:
																{	/* Ieee/input.scm 237 */
																	long BgL_newzd2matchzd2_2844;

																	{	/* Ieee/input.scm 237 */
																		long BgL_res3746z00_5593;

																		{	/* Ieee/input.scm 237 */
																			obj_t BgL_tmpz00_8511;

																			BgL_tmpz00_8511 =
																				((obj_t) BgL_iportz00_2839);
																			BgL_res3746z00_5593 =
																				RGC_STOP_MATCH(BgL_tmpz00_8511,
																				BgL_forwardz00_2841);
																		} BgL_res3746z00_5593;
																	}
																	BgL_newzd2matchzd2_2844 = ((long) 0);
																	if (
																		(BgL_forwardz00_2841 == BgL_bufposz00_2842))
																		{	/* Ieee/input.scm 237 */
																			bool_t BgL_test4520z00_8516;

																			{	/* Ieee/input.scm 237 */
																				bool_t BgL_res3748z00_5598;

																				BgL_res3748z00_5598 =
																					rgc_fill_buffer(
																					((obj_t) BgL_iportz00_2839));
																				BgL_test4520z00_8516 =
																					BgL_res3748z00_5598;
																			}
																			if (BgL_test4520z00_8516)
																				{	/* Ieee/input.scm 237 */
																					long BgL_arg2218z00_2847;
																					long BgL_arg2219z00_2848;

																					{	/* Ieee/input.scm 237 */
																						long BgL_res3749z00_5600;

																						{	/* Ieee/input.scm 237 */
																							obj_t BgL_tmpz00_8519;

																							BgL_tmpz00_8519 =
																								((obj_t) BgL_iportz00_2839);
																							BgL_res3749z00_5600 =
																								RGC_BUFFER_FORWARD
																								(BgL_tmpz00_8519);
																						}
																						BgL_arg2218z00_2847 =
																							BgL_res3749z00_5600;
																					}
																					{	/* Ieee/input.scm 237 */
																						long BgL_res3750z00_5602;

																						{	/* Ieee/input.scm 237 */
																							obj_t BgL_tmpz00_8522;

																							BgL_tmpz00_8522 =
																								((obj_t) BgL_iportz00_2839);
																							BgL_res3750z00_5602 =
																								RGC_BUFFER_BUFPOS
																								(BgL_tmpz00_8522);
																						}
																						BgL_arg2219z00_2848 =
																							BgL_res3750z00_5602;
																					}
																					{
																						long BgL_bufposz00_8526;
																						long BgL_forwardz00_8525;

																						BgL_forwardz00_8525 =
																							BgL_arg2218z00_2847;
																						BgL_bufposz00_8526 =
																							BgL_arg2219z00_2848;
																						BgL_bufposz00_2842 =
																							BgL_bufposz00_8526;
																						BgL_forwardz00_2841 =
																							BgL_forwardz00_8525;
																						goto
																							BgL_zc3z04anonymousza32215ze3z87_2843;
																					}
																				}
																			else
																				{	/* Ieee/input.scm 237 */
																					BgL_matchz00_2993 =
																						BgL_newzd2matchzd2_2844;
																				}
																		}
																	else
																		{	/* Ieee/input.scm 237 */
																			int BgL_curz00_2849;

																			{	/* Ieee/input.scm 237 */
																				int BgL_res3751z00_5605;

																				{	/* Ieee/input.scm 237 */
																					obj_t BgL_tmpz00_8527;

																					BgL_tmpz00_8527 =
																						((obj_t) BgL_iportz00_2839);
																					BgL_res3751z00_5605 =
																						RGC_BUFFER_GET_CHAR(BgL_tmpz00_8527,
																						BgL_forwardz00_2841);
																				}
																				BgL_curz00_2849 = BgL_res3751z00_5605;
																			}
																			{	/* Ieee/input.scm 237 */

																				if (
																					((long) (BgL_curz00_2849) ==
																						((long) 13)))
																					{	/* Ieee/input.scm 237 */
																						BgL_iportz00_2855 =
																							BgL_iportz00_2839;
																						BgL_lastzd2matchzd2_2856 =
																							BgL_newzd2matchzd2_2844;
																						BgL_forwardz00_2857 =
																							(((long) 1) +
																							BgL_forwardz00_2841);
																						BgL_bufposz00_2858 =
																							BgL_bufposz00_2842;
																					BgL_zc3z04anonymousza32225ze3z87_2859:
																						{	/* Ieee/input.scm 237 */
																							long BgL_newzd2matchzd2_2860;

																							{	/* Ieee/input.scm 237 */
																								long BgL_res3758z00_5622;

																								{	/* Ieee/input.scm 237 */
																									obj_t BgL_tmpz00_8533;

																									BgL_tmpz00_8533 =
																										((obj_t) BgL_iportz00_2855);
																									BgL_res3758z00_5622 =
																										RGC_STOP_MATCH
																										(BgL_tmpz00_8533,
																										BgL_forwardz00_2857);
																								} BgL_res3758z00_5622;
																							}
																							BgL_newzd2matchzd2_2860 =
																								((long) 0);
																							if ((BgL_forwardz00_2857 ==
																									BgL_bufposz00_2858))
																								{	/* Ieee/input.scm 237 */
																									bool_t BgL_test4523z00_8538;

																									{	/* Ieee/input.scm 237 */
																										bool_t BgL_res3760z00_5627;

																										BgL_res3760z00_5627 =
																											rgc_fill_buffer(
																											((obj_t)
																												BgL_iportz00_2855));
																										BgL_test4523z00_8538 =
																											BgL_res3760z00_5627;
																									}
																									if (BgL_test4523z00_8538)
																										{	/* Ieee/input.scm 237 */
																											long BgL_arg2228z00_2863;
																											long BgL_arg2229z00_2864;

																											{	/* Ieee/input.scm 237 */
																												long
																													BgL_res3761z00_5629;
																												{	/* Ieee/input.scm 237 */
																													obj_t BgL_tmpz00_8541;

																													BgL_tmpz00_8541 =
																														((obj_t)
																														BgL_iportz00_2855);
																													BgL_res3761z00_5629 =
																														RGC_BUFFER_FORWARD
																														(BgL_tmpz00_8541);
																												}
																												BgL_arg2228z00_2863 =
																													BgL_res3761z00_5629;
																											}
																											{	/* Ieee/input.scm 237 */
																												long
																													BgL_res3762z00_5631;
																												{	/* Ieee/input.scm 237 */
																													obj_t BgL_tmpz00_8544;

																													BgL_tmpz00_8544 =
																														((obj_t)
																														BgL_iportz00_2855);
																													BgL_res3762z00_5631 =
																														RGC_BUFFER_BUFPOS
																														(BgL_tmpz00_8544);
																												}
																												BgL_arg2229z00_2864 =
																													BgL_res3762z00_5631;
																											}
																											{
																												long BgL_bufposz00_8548;
																												long
																													BgL_forwardz00_8547;
																												BgL_forwardz00_8547 =
																													BgL_arg2228z00_2863;
																												BgL_bufposz00_8548 =
																													BgL_arg2229z00_2864;
																												BgL_bufposz00_2858 =
																													BgL_bufposz00_8548;
																												BgL_forwardz00_2857 =
																													BgL_forwardz00_8547;
																												goto
																													BgL_zc3z04anonymousza32225ze3z87_2859;
																											}
																										}
																									else
																										{	/* Ieee/input.scm 237 */
																											BgL_matchz00_2993 =
																												BgL_newzd2matchzd2_2860;
																										}
																								}
																							else
																								{	/* Ieee/input.scm 237 */
																									int BgL_curz00_2865;

																									{	/* Ieee/input.scm 237 */
																										int BgL_res3763z00_5634;

																										{	/* Ieee/input.scm 237 */
																											obj_t BgL_tmpz00_8549;

																											BgL_tmpz00_8549 =
																												((obj_t)
																												BgL_iportz00_2855);
																											BgL_res3763z00_5634 =
																												RGC_BUFFER_GET_CHAR
																												(BgL_tmpz00_8549,
																												BgL_forwardz00_2857);
																										}
																										BgL_curz00_2865 =
																											BgL_res3763z00_5634;
																									}
																									{	/* Ieee/input.scm 237 */

																										if (
																											((long) (BgL_curz00_2865)
																												== ((long) 10)))
																											{	/* Ieee/input.scm 237 */
																												long
																													BgL_arg2231z00_2867;
																												BgL_arg2231z00_2867 =
																													(((long) 1) +
																													BgL_forwardz00_2857);
																												{	/* Ieee/input.scm 237 */
																													long
																														BgL_newzd2matchzd2_5639;
																													{	/* Ieee/input.scm 237 */
																														long
																															BgL_res3766z00_5642;
																														{	/* Ieee/input.scm 237 */
																															obj_t
																																BgL_tmpz00_8556;
																															BgL_tmpz00_8556 =
																																((obj_t)
																																BgL_iportz00_2855);
																															BgL_res3766z00_5642
																																=
																																RGC_STOP_MATCH
																																(BgL_tmpz00_8556,
																																BgL_arg2231z00_2867);
																														} BgL_res3766z00_5642;
																													}
																													BgL_newzd2matchzd2_5639
																														= ((long) 0);
																													BgL_matchz00_2993 =
																														BgL_newzd2matchzd2_5639;
																											}}
																										else
																											{	/* Ieee/input.scm 237 */
																												BgL_matchz00_2993 =
																													BgL_newzd2matchzd2_2860;
																											}
																									}
																								}
																						}
																					}
																				else
																					{	/* Ieee/input.scm 237 */
																						if (
																							((long) (BgL_curz00_2849) ==
																								((long) 10)))
																							{	/* Ieee/input.scm 237 */
																								long BgL_arg2223z00_2853;

																								BgL_arg2223z00_2853 =
																									(((long) 1) +
																									BgL_forwardz00_2841);
																								{	/* Ieee/input.scm 237 */
																									long BgL_newzd2matchzd2_5614;

																									{	/* Ieee/input.scm 237 */
																										long BgL_res3756z00_5617;

																										{	/* Ieee/input.scm 237 */
																											obj_t BgL_tmpz00_8564;

																											BgL_tmpz00_8564 =
																												((obj_t)
																												BgL_iportz00_2839);
																											BgL_res3756z00_5617 =
																												RGC_STOP_MATCH
																												(BgL_tmpz00_8564,
																												BgL_arg2223z00_2853);
																										} BgL_res3756z00_5617;
																									}
																									BgL_newzd2matchzd2_5614 =
																										((long) 0);
																									BgL_matchz00_2993 =
																										BgL_newzd2matchzd2_5614;
																							}}
																						else
																							{	/* Ieee/input.scm 237 */
																								BgL_iportz00_2789 =
																									BgL_iportz00_2839;
																								BgL_lastzd2matchzd2_2790 =
																									BgL_newzd2matchzd2_2844;
																								BgL_forwardz00_2791 =
																									(((long) 1) +
																									BgL_forwardz00_2841);
																								BgL_bufposz00_2792 =
																									BgL_bufposz00_2842;
																							BgL_zc3z04anonymousza32187ze3z87_2793:
																								{	/* Ieee/input.scm 237 */
																									long BgL_newzd2matchzd2_2794;

																									{	/* Ieee/input.scm 237 */
																										long BgL_res3713z00_5511;

																										{	/* Ieee/input.scm 237 */
																											obj_t BgL_tmpz00_8567;

																											BgL_tmpz00_8567 =
																												((obj_t)
																												BgL_iportz00_2789);
																											BgL_res3713z00_5511 =
																												RGC_STOP_MATCH
																												(BgL_tmpz00_8567,
																												BgL_forwardz00_2791);
																										} BgL_res3713z00_5511;
																									}
																									BgL_newzd2matchzd2_2794 =
																										((long) 0);
																									if ((BgL_forwardz00_2791 ==
																											BgL_bufposz00_2792))
																										{	/* Ieee/input.scm 237 */
																											bool_t
																												BgL_test4527z00_8572;
																											{	/* Ieee/input.scm 237 */
																												bool_t
																													BgL_res3715z00_5516;
																												BgL_res3715z00_5516 =
																													rgc_fill_buffer((
																														(obj_t)
																														BgL_iportz00_2789));
																												BgL_test4527z00_8572 =
																													BgL_res3715z00_5516;
																											}
																											if (BgL_test4527z00_8572)
																												{	/* Ieee/input.scm 237 */
																													long
																														BgL_arg2190z00_2797;
																													long
																														BgL_arg2191z00_2798;
																													{	/* Ieee/input.scm 237 */
																														long
																															BgL_res3716z00_5518;
																														{	/* Ieee/input.scm 237 */
																															obj_t
																																BgL_tmpz00_8575;
																															BgL_tmpz00_8575 =
																																((obj_t)
																																BgL_iportz00_2789);
																															BgL_res3716z00_5518
																																=
																																RGC_BUFFER_FORWARD
																																(BgL_tmpz00_8575);
																														}
																														BgL_arg2190z00_2797
																															=
																															BgL_res3716z00_5518;
																													}
																													{	/* Ieee/input.scm 237 */
																														long
																															BgL_res3717z00_5520;
																														{	/* Ieee/input.scm 237 */
																															obj_t
																																BgL_tmpz00_8578;
																															BgL_tmpz00_8578 =
																																((obj_t)
																																BgL_iportz00_2789);
																															BgL_res3717z00_5520
																																=
																																RGC_BUFFER_BUFPOS
																																(BgL_tmpz00_8578);
																														}
																														BgL_arg2191z00_2798
																															=
																															BgL_res3717z00_5520;
																													}
																													{
																														long
																															BgL_bufposz00_8582;
																														long
																															BgL_forwardz00_8581;
																														BgL_forwardz00_8581
																															=
																															BgL_arg2190z00_2797;
																														BgL_bufposz00_8582 =
																															BgL_arg2191z00_2798;
																														BgL_bufposz00_2792 =
																															BgL_bufposz00_8582;
																														BgL_forwardz00_2791
																															=
																															BgL_forwardz00_8581;
																														goto
																															BgL_zc3z04anonymousza32187ze3z87_2793;
																													}
																												}
																											else
																												{	/* Ieee/input.scm 237 */
																													BgL_matchz00_2993 =
																														BgL_newzd2matchzd2_2794;
																												}
																										}
																									else
																										{	/* Ieee/input.scm 237 */
																											int BgL_curz00_2799;

																											{	/* Ieee/input.scm 237 */
																												int BgL_res3718z00_5523;

																												{	/* Ieee/input.scm 237 */
																													obj_t BgL_tmpz00_8583;

																													BgL_tmpz00_8583 =
																														((obj_t)
																														BgL_iportz00_2789);
																													BgL_res3718z00_5523 =
																														RGC_BUFFER_GET_CHAR
																														(BgL_tmpz00_8583,
																														BgL_forwardz00_2791);
																												}
																												BgL_curz00_2799 =
																													BgL_res3718z00_5523;
																											}
																											{	/* Ieee/input.scm 237 */

																												if (
																													((long)
																														(BgL_curz00_2799) ==
																														((long) 13)))
																													{
																														long
																															BgL_bufposz00_8593;
																														long
																															BgL_forwardz00_8591;
																														long
																															BgL_lastzd2matchzd2_8590;
																														obj_t
																															BgL_iportz00_8589;
																														BgL_iportz00_8589 =
																															BgL_iportz00_2789;
																														BgL_lastzd2matchzd2_8590
																															=
																															BgL_newzd2matchzd2_2794;
																														BgL_forwardz00_8591
																															=
																															(((long) 1) +
																															BgL_forwardz00_2791);
																														BgL_bufposz00_8593 =
																															BgL_bufposz00_2792;
																														BgL_bufposz00_2858 =
																															BgL_bufposz00_8593;
																														BgL_forwardz00_2857
																															=
																															BgL_forwardz00_8591;
																														BgL_lastzd2matchzd2_2856
																															=
																															BgL_lastzd2matchzd2_8590;
																														BgL_iportz00_2855 =
																															BgL_iportz00_8589;
																														goto
																															BgL_zc3z04anonymousza32225ze3z87_2859;
																													}
																												else
																													{	/* Ieee/input.scm 237 */
																														if (
																															((long)
																																(BgL_curz00_2799)
																																== ((long) 10)))
																															{	/* Ieee/input.scm 237 */
																																long
																																	BgL_arg2195z00_2803;
																																BgL_arg2195z00_2803
																																	=
																																	(((long) 1) +
																																	BgL_forwardz00_2791);
																																{	/* Ieee/input.scm 237 */
																																	long
																																		BgL_newzd2matchzd2_5532;
																																	{	/* Ieee/input.scm 237 */
																																		long
																																			BgL_res3723z00_5535;
																																		{	/* Ieee/input.scm 237 */
																																			obj_t
																																				BgL_tmpz00_8598;
																																			BgL_tmpz00_8598
																																				=
																																				((obj_t)
																																				BgL_iportz00_2789);
																																			BgL_res3723z00_5535
																																				=
																																				RGC_STOP_MATCH
																																				(BgL_tmpz00_8598,
																																				BgL_arg2195z00_2803);
																																		} BgL_res3723z00_5535;
																																	}
																																	BgL_newzd2matchzd2_5532
																																		=
																																		((long) 0);
																																	BgL_matchz00_2993
																																		=
																																		BgL_newzd2matchzd2_5532;
																															}}
																														else
																															{
																																long
																																	BgL_forwardz00_8602;
																																long
																																	BgL_lastzd2matchzd2_8601;
																																BgL_lastzd2matchzd2_8601
																																	=
																																	BgL_newzd2matchzd2_2794;
																																BgL_forwardz00_8602
																																	=
																																	(((long) 1) +
																																	BgL_forwardz00_2791);
																																BgL_forwardz00_2791
																																	=
																																	BgL_forwardz00_8602;
																																BgL_lastzd2matchzd2_2790
																																	=
																																	BgL_lastzd2matchzd2_8601;
																																goto
																																	BgL_zc3z04anonymousza32187ze3z87_2793;
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
								{	/* Ieee/input.scm 237 */
									obj_t BgL_tmpz00_8606;

									BgL_tmpz00_8606 = ((obj_t) BgL_iportz00_2753);
									RGC_SET_FILEPOS(BgL_tmpz00_8606);
								}
								switch (BgL_matchz00_2993)
									{
									case ((long) 1):

										{	/* Ieee/input.scm 237 */
											bool_t BgL_test4530z00_8609;

											{	/* Ieee/input.scm 237 */
												long BgL_arg2318z00_2983;

												{	/* Ieee/input.scm 237 */
													long BgL_res3771z00_5656;

													{	/* Ieee/input.scm 237 */
														obj_t BgL_tmpz00_8610;

														BgL_tmpz00_8610 = ((obj_t) BgL_iportz00_2753);
														BgL_res3771z00_5656 =
															RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8610);
													}
													BgL_arg2318z00_2983 = BgL_res3771z00_5656;
												}
												BgL_test4530z00_8609 =
													(BgL_arg2318z00_2983 == ((long) 0));
											}
											if (BgL_test4530z00_8609)
												{	/* Ieee/input.scm 237 */
													return BEOF;
												}
											else
												{	/* Ieee/input.scm 237 */
													unsigned char BgL_res3773z00_5660;

													{	/* Ieee/input.scm 237 */
														obj_t BgL_tmpz00_8614;

														BgL_tmpz00_8614 = ((obj_t) BgL_iportz00_2753);
														BgL_res3773z00_5660 =
															RGC_BUFFER_CHARACTER(BgL_tmpz00_8614);
													}
													return BCHAR(BgL_res3773z00_5660);
												}
										}
										break;
									case ((long) 0):

										{	/* Ieee/input.scm 243 */
											obj_t BgL_res3779z00_5674;

											{	/* Ieee/input.scm 237 */
												long BgL_arg2239z00_5668;

												{	/* Ieee/input.scm 237 */
													long BgL_res3777z00_5670;

													{	/* Ieee/input.scm 237 */
														obj_t BgL_tmpz00_8618;

														BgL_tmpz00_8618 = ((obj_t) BgL_iportz00_2753);
														BgL_res3777z00_5670 =
															RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8618);
													}
													BgL_arg2239z00_5668 = BgL_res3777z00_5670;
												}
												{	/* Ieee/input.scm 237 */
													obj_t BgL_res3778z00_5673;

													BgL_res3778z00_5673 =
														rgc_buffer_substring(
														((obj_t) BgL_iportz00_2753), ((long) 0),
														BgL_arg2239z00_5668);
													BgL_res3779z00_5674 = BgL_res3778z00_5673;
											}}
											return BgL_res3779z00_5674;
										}
										break;
									default:
										return
											BGl_errorz00zz__errorz00
											(BGl_string4272z00zz__r4_input_6_10_2z00,
											BGl_string4273z00zz__r4_input_6_10_2z00,
											BINT(BgL_matchz00_2993));
									}
							}
						}
					}
				else
					{	/* Ieee/input.scm 249 */
						obj_t BgL_g1091z00_3034;
						obj_t BgL_g1092z00_3035;

						BgL_g1091z00_3034 =
							BGl_readzd2charzd2zz__r4_input_6_10_2z00(BgL_ipz00_29);
						{	/* Ieee/string.scm 168 */

							BgL_g1092z00_3035 =
								make_string(((long) 100), ((unsigned char) ' '));
						}
						{
							obj_t BgL_cz00_3037;
							long BgL_wz00_3038;
							long BgL_mz00_3039;
							obj_t BgL_accz00_3040;

							BgL_cz00_3037 = BgL_g1091z00_3034;
							BgL_wz00_3038 = ((long) 0);
							BgL_mz00_3039 = ((long) 100);
							BgL_accz00_3040 = BgL_g1092z00_3035;
						BgL_zc3z04anonymousza32328ze3z87_3041:
							{	/* Ieee/input.scm 254 */
								bool_t BgL_test4531z00_8628;

								{	/* Ieee/input.scm 254 */
									bool_t BgL_res3781z00_5677;

									BgL_res3781z00_5677 = EOF_OBJECTP(BgL_cz00_3037);
									BgL_test4531z00_8628 = BgL_res3781z00_5677;
								}
								if (BgL_test4531z00_8628)
									{	/* Ieee/input.scm 254 */
										if ((BgL_wz00_3038 == ((long) 0)))
											{	/* Ieee/input.scm 256 */
												return BgL_cz00_3037;
											}
										else
											{	/* Ieee/input.scm 256 */
												return
													c_substring(BgL_accz00_3040, ((long) 0),
													BgL_wz00_3038);
									}}
								else
									{	/* Ieee/input.scm 254 */
										if ((BgL_wz00_3038 == (BgL_mz00_3039 - ((long) 2))))
											{	/* Ieee/input.scm 261 */
												long BgL_arg2334z00_3047;
												obj_t BgL_arg2335z00_3048;

												BgL_arg2334z00_3047 = (BgL_mz00_3039 * ((long) 2));
												{	/* Ieee/input.scm 262 */
													obj_t BgL_newzd2acczd2_3049;

													{	/* Ieee/input.scm 262 */
														long BgL_arg2336z00_3050;

														BgL_arg2336z00_3050 = (BgL_mz00_3039 * ((long) 2));
														{	/* Ieee/string.scm 168 */

															BgL_newzd2acczd2_3049 =
																make_string(BgL_arg2336z00_3050,
																((unsigned char) ' '));
													}}
													blit_string(BgL_accz00_3040, ((long) 0),
														BgL_newzd2acczd2_3049, ((long) 0), BgL_mz00_3039);
													BgL_arg2335z00_3048 = BgL_newzd2acczd2_3049;
												}
												{
													obj_t BgL_accz00_8641;
													long BgL_mz00_8640;

													BgL_mz00_8640 = BgL_arg2334z00_3047;
													BgL_accz00_8641 = BgL_arg2335z00_3048;
													BgL_accz00_3040 = BgL_accz00_8641;
													BgL_mz00_3039 = BgL_mz00_8640;
													goto BgL_zc3z04anonymousza32328ze3z87_3041;
												}
											}
										else
											{	/* Ieee/input.scm 257 */
												if ((CCHAR(BgL_cz00_3037) == ((unsigned char) 13)))
													{	/* Ieee/input.scm 266 */
														obj_t BgL_c2z00_3054;

														BgL_c2z00_3054 =
															BGl_readzd2charzd2zz__r4_input_6_10_2z00
															(BgL_ipz00_29);
														if ((CCHAR(BgL_c2z00_3054) == ((unsigned char) 10)))
															{	/* Ieee/input.scm 267 */
																STRING_SET(BgL_accz00_3040, BgL_wz00_3038,
																	((unsigned char) 13));
																{	/* Ieee/input.scm 270 */
																	long BgL_tmpz00_8650;

																	BgL_tmpz00_8650 =
																		(((long) 1) + BgL_wz00_3038);
																	STRING_SET(BgL_accz00_3040, BgL_tmpz00_8650,
																		((unsigned char) 10));
																}
																return
																	c_substring(BgL_accz00_3040, ((long) 0),
																	(BgL_wz00_3038 + ((long) 2)));
															}
														else
															{	/* Ieee/input.scm 267 */
																{	/* Ieee/input.scm 273 */
																	unsigned char BgL_tmpz00_8655;

																	BgL_tmpz00_8655 = CCHAR(BgL_cz00_3037);
																	STRING_SET(BgL_accz00_3040, BgL_wz00_3038,
																		BgL_tmpz00_8655);
																}
																{
																	long BgL_wz00_8659;
																	obj_t BgL_cz00_8658;

																	BgL_cz00_8658 = BgL_c2z00_3054;
																	BgL_wz00_8659 = (BgL_wz00_3038 + ((long) 1));
																	BgL_wz00_3038 = BgL_wz00_8659;
																	BgL_cz00_3037 = BgL_cz00_8658;
																	goto BgL_zc3z04anonymousza32328ze3z87_3041;
																}
															}
													}
												else
													{	/* Ieee/input.scm 265 */
														if ((CCHAR(BgL_cz00_3037) == ((unsigned char) 10)))
															{	/* Ieee/input.scm 275 */
																STRING_SET(BgL_accz00_3040, BgL_wz00_3038,
																	((unsigned char) 10));
																return c_substring(BgL_accz00_3040, ((long) 0),
																	(BgL_wz00_3038 + ((long) 1)));
															}
														else
															{	/* Ieee/input.scm 275 */
																{	/* Ieee/input.scm 281 */
																	unsigned char BgL_tmpz00_8667;

																	BgL_tmpz00_8667 = CCHAR(BgL_cz00_3037);
																	STRING_SET(BgL_accz00_3040, BgL_wz00_3038,
																		BgL_tmpz00_8667);
																}
																{
																	long BgL_wz00_8672;
																	obj_t BgL_cz00_8670;

																	BgL_cz00_8670 =
																		BGl_readzd2charzd2zz__r4_input_6_10_2z00
																		(BgL_ipz00_29);
																	BgL_wz00_8672 = (BgL_wz00_3038 + ((long) 1));
																	BgL_wz00_3038 = BgL_wz00_8672;
																	BgL_cz00_3037 = BgL_cz00_8670;
																	goto BgL_zc3z04anonymousza32328ze3z87_3041;
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



/* _read-lines */
	obj_t BGl__readzd2lineszd2zz__r4_input_6_10_2z00(obj_t BgL_env1266z00_34,
		obj_t BgL_opt1265z00_33)
	{
		{	/* Ieee/input.scm 287 */
			{	/* Ieee/input.scm 287 */

				switch (VECTOR_LENGTH(BgL_opt1265z00_33))
					{
					case ((long) 0):

						{	/* Ieee/input.scm 287 */
							obj_t BgL_ipz00_3072;

							{	/* Ieee/input.scm 287 */
								obj_t BgL_res3800z00_5739;

								{	/* Ieee/input.scm 287 */
									obj_t BgL_tmpz00_8674;

									BgL_tmpz00_8674 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3800z00_5739 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8674);
								}
								BgL_ipz00_3072 = BgL_res3800z00_5739;
							}
							{	/* Ieee/input.scm 287 */

								return
									BGl_readzd2lineszd2zz__r4_input_6_10_2z00(BgL_ipz00_3072);
							}
						}
						break;
					case ((long) 1):

						{	/* Ieee/input.scm 287 */
							obj_t BgL_ipz00_3073;

							BgL_ipz00_3073 = VECTOR_REF(BgL_opt1265z00_33, ((long) 0));
							{	/* Ieee/input.scm 287 */

								return
									BGl_readzd2lineszd2zz__r4_input_6_10_2z00(BgL_ipz00_3073);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* read-lines */
	BGL_EXPORTED_DEF obj_t BGl_readzd2lineszd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_32)
	{
		{	/* Ieee/input.scm 287 */
			{	/* Ieee/input.scm 288 */
				obj_t BgL_g1094z00_3074;

				BgL_g1094z00_3074 =
					BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_32);
				{
					obj_t BgL_lz00_5749;
					obj_t BgL_lsz00_5750;

					BgL_lz00_5749 = BgL_g1094z00_3074;
					BgL_lsz00_5750 = BNIL;
				BgL_loopz00_5748:
					{	/* Ieee/input.scm 290 */
						bool_t BgL_test4537z00_8683;

						{	/* Ieee/input.scm 290 */
							bool_t BgL_res3803z00_5757;

							BgL_res3803z00_5757 = EOF_OBJECTP(BgL_lz00_5749);
							BgL_test4537z00_8683 = BgL_res3803z00_5757;
						}
						if (BgL_test4537z00_8683)
							{	/* Ieee/input.scm 290 */
								return bgl_reverse_bang(BgL_lsz00_5750);
							}
						else
							{	/* Ieee/input.scm 292 */
								obj_t BgL_arg2353z00_5755;
								obj_t BgL_arg2354z00_5756;

								BgL_arg2353z00_5755 =
									BGl_readzd2linezd2zz__r4_input_6_10_2z00(BgL_ipz00_32);
								BgL_arg2354z00_5756 =
									MAKE_YOUNG_PAIR(BgL_lz00_5749, BgL_lsz00_5750);
								{
									obj_t BgL_lsz00_8689;
									obj_t BgL_lz00_8688;

									BgL_lz00_8688 = BgL_arg2353z00_5755;
									BgL_lsz00_8689 = BgL_arg2354z00_5756;
									BgL_lsz00_5750 = BgL_lsz00_8689;
									BgL_lz00_5749 = BgL_lz00_8688;
									goto BgL_loopz00_5748;
								}
							}
					}
				}
			}
		}

	}



/* _read-string */
	obj_t BGl__readzd2stringzd2zz__r4_input_6_10_2z00(obj_t BgL_env1270z00_37,
		obj_t BgL_opt1269z00_36)
	{
		{	/* Ieee/input.scm 297 */
			{	/* Ieee/input.scm 297 */

				switch (VECTOR_LENGTH(BgL_opt1269z00_36))
					{
					case ((long) 0):

						{	/* Ieee/input.scm 297 */
							obj_t BgL_ipz00_3087;

							{	/* Ieee/input.scm 297 */
								obj_t BgL_res3804z00_5759;

								{	/* Ieee/input.scm 297 */
									obj_t BgL_tmpz00_8690;

									BgL_tmpz00_8690 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3804z00_5759 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8690);
								}
								BgL_ipz00_3087 = BgL_res3804z00_5759;
							}
							{	/* Ieee/input.scm 297 */

								return
									BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_ipz00_3087);
							}
						}
						break;
					case ((long) 1):

						{	/* Ieee/input.scm 297 */
							obj_t BgL_ipz00_3088;

							BgL_ipz00_3088 = VECTOR_REF(BgL_opt1269z00_36, ((long) 0));
							{	/* Ieee/input.scm 297 */

								return
									BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_ipz00_3088);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* read-string */
	BGL_EXPORTED_DEF obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_35)
	{
		{	/* Ieee/input.scm 297 */
			{
				obj_t BgL_iportz00_3144;
				long BgL_lastzd2matchzd2_3145;
				long BgL_forwardz00_3146;
				long BgL_bufposz00_3147;
				obj_t BgL_iportz00_3132;
				long BgL_lastzd2matchzd2_3133;
				long BgL_forwardz00_3134;
				long BgL_bufposz00_3135;

				{	/* Ieee/input.scm 298 */
					long BgL_res3869z00_5984;

					{	/* Ieee/input.scm 298 */
						obj_t BgL_tmpz00_8698;

						BgL_tmpz00_8698 = ((obj_t) BgL_ipz00_35);
						BgL_res3869z00_5984 = RGC_START_MATCH(BgL_tmpz00_8698);
					} BgL_res3869z00_5984;
				}
				{	/* Ieee/input.scm 298 */
					long BgL_matchz00_3275;

					{	/* Ieee/input.scm 298 */
						long BgL_arg2473z00_3282;
						long BgL_arg2474z00_3283;

						{	/* Ieee/input.scm 298 */
							long BgL_res3870z00_5986;

							{	/* Ieee/input.scm 298 */
								obj_t BgL_tmpz00_8701;

								BgL_tmpz00_8701 = ((obj_t) BgL_ipz00_35);
								BgL_res3870z00_5986 = RGC_BUFFER_FORWARD(BgL_tmpz00_8701);
							}
							BgL_arg2473z00_3282 = BgL_res3870z00_5986;
						}
						{	/* Ieee/input.scm 298 */
							long BgL_res3871z00_5988;

							{	/* Ieee/input.scm 298 */
								obj_t BgL_tmpz00_8704;

								BgL_tmpz00_8704 = ((obj_t) BgL_ipz00_35);
								BgL_res3871z00_5988 = RGC_BUFFER_BUFPOS(BgL_tmpz00_8704);
							}
							BgL_arg2474z00_3283 = BgL_res3871z00_5988;
						}
						{
							long BgL_forwardz00_5990;
							long BgL_bufposz00_5991;

							BgL_forwardz00_5990 = BgL_arg2473z00_3282;
							BgL_bufposz00_5991 = BgL_arg2474z00_3283;
						BgL_statezd20zd21097z00_5989:
							if ((BgL_forwardz00_5990 == BgL_bufposz00_5991))
								{	/* Ieee/input.scm 298 */
									bool_t BgL_test4539z00_8709;

									{	/* Ieee/input.scm 298 */
										bool_t BgL_res3873z00_6002;

										BgL_res3873z00_6002 =
											rgc_fill_buffer(((obj_t) BgL_ipz00_35));
										BgL_test4539z00_8709 = BgL_res3873z00_6002;
									}
									if (BgL_test4539z00_8709)
										{	/* Ieee/input.scm 298 */
											long BgL_arg2359z00_5994;
											long BgL_arg2360z00_5995;

											{	/* Ieee/input.scm 298 */
												long BgL_res3874z00_6004;

												{	/* Ieee/input.scm 298 */
													obj_t BgL_tmpz00_8712;

													BgL_tmpz00_8712 = ((obj_t) BgL_ipz00_35);
													BgL_res3874z00_6004 =
														RGC_BUFFER_FORWARD(BgL_tmpz00_8712);
												}
												BgL_arg2359z00_5994 = BgL_res3874z00_6004;
											}
											{	/* Ieee/input.scm 298 */
												long BgL_res3875z00_6006;

												{	/* Ieee/input.scm 298 */
													obj_t BgL_tmpz00_8715;

													BgL_tmpz00_8715 = ((obj_t) BgL_ipz00_35);
													BgL_res3875z00_6006 =
														RGC_BUFFER_BUFPOS(BgL_tmpz00_8715);
												}
												BgL_arg2360z00_5995 = BgL_res3875z00_6006;
											}
											{
												long BgL_bufposz00_8719;
												long BgL_forwardz00_8718;

												BgL_forwardz00_8718 = BgL_arg2359z00_5994;
												BgL_bufposz00_8719 = BgL_arg2360z00_5995;
												BgL_bufposz00_5991 = BgL_bufposz00_8719;
												BgL_forwardz00_5990 = BgL_forwardz00_8718;
												goto BgL_statezd20zd21097z00_5989;
											}
										}
									else
										{	/* Ieee/input.scm 298 */
											BgL_matchz00_3275 = ((long) 1);
								}}
							else
								{	/* Ieee/input.scm 298 */
									int BgL_curz00_5996;

									{	/* Ieee/input.scm 298 */
										int BgL_res3876z00_6009;

										{	/* Ieee/input.scm 298 */
											obj_t BgL_tmpz00_8720;

											BgL_tmpz00_8720 = ((obj_t) BgL_ipz00_35);
											BgL_res3876z00_6009 =
												RGC_BUFFER_GET_CHAR(BgL_tmpz00_8720,
												BgL_forwardz00_5990);
										}
										BgL_curz00_5996 = BgL_res3876z00_6009;
									}
									{	/* Ieee/input.scm 298 */

										BgL_iportz00_3144 = BgL_ipz00_35;
										BgL_lastzd2matchzd2_3145 = ((long) 1);
										BgL_forwardz00_3146 = (((long) 1) + BgL_forwardz00_5990);
										BgL_bufposz00_3147 = BgL_bufposz00_5991;
									BgL_zc3z04anonymousza32368ze3z87_3148:
										{	/* Ieee/input.scm 298 */
											long BgL_newzd2matchzd2_5899;

											{	/* Ieee/input.scm 298 */
												long BgL_res3845z00_5908;

												{	/* Ieee/input.scm 298 */
													obj_t BgL_tmpz00_8723;

													BgL_tmpz00_8723 = ((obj_t) BgL_iportz00_3144);
													BgL_res3845z00_5908 =
														RGC_STOP_MATCH(BgL_tmpz00_8723,
														BgL_forwardz00_3146);
												} BgL_res3845z00_5908;
											}
											BgL_newzd2matchzd2_5899 = ((long) 0);
											if ((BgL_forwardz00_3146 == BgL_bufposz00_3147))
												{	/* Ieee/input.scm 298 */
													bool_t BgL_test4541z00_8728;

													{	/* Ieee/input.scm 298 */
														bool_t BgL_res3847z00_5913;

														BgL_res3847z00_5913 =
															rgc_fill_buffer(((obj_t) BgL_iportz00_3144));
														BgL_test4541z00_8728 = BgL_res3847z00_5913;
													}
													if (BgL_test4541z00_8728)
														{	/* Ieee/input.scm 298 */
															long BgL_arg2371z00_5902;
															long BgL_arg2372z00_5903;

															{	/* Ieee/input.scm 298 */
																long BgL_res3848z00_5915;

																{	/* Ieee/input.scm 298 */
																	obj_t BgL_tmpz00_8731;

																	BgL_tmpz00_8731 = ((obj_t) BgL_iportz00_3144);
																	BgL_res3848z00_5915 =
																		RGC_BUFFER_FORWARD(BgL_tmpz00_8731);
																}
																BgL_arg2371z00_5902 = BgL_res3848z00_5915;
															}
															{	/* Ieee/input.scm 298 */
																long BgL_res3849z00_5917;

																{	/* Ieee/input.scm 298 */
																	obj_t BgL_tmpz00_8734;

																	BgL_tmpz00_8734 = ((obj_t) BgL_iportz00_3144);
																	BgL_res3849z00_5917 =
																		RGC_BUFFER_BUFPOS(BgL_tmpz00_8734);
																}
																BgL_arg2372z00_5903 = BgL_res3849z00_5917;
															}
															{	/* Ieee/input.scm 298 */
																long BgL_newzd2matchzd2_5918;

																{	/* Ieee/input.scm 298 */
																	long BgL_res3850z00_5927;

																	{	/* Ieee/input.scm 298 */
																		obj_t BgL_tmpz00_8737;

																		BgL_tmpz00_8737 =
																			((obj_t) BgL_iportz00_3144);
																		BgL_res3850z00_5927 =
																			RGC_STOP_MATCH(BgL_tmpz00_8737,
																			BgL_arg2371z00_5902);
																	} BgL_res3850z00_5927;
																}
																BgL_newzd2matchzd2_5918 = ((long) 0);
																if (
																	(BgL_arg2371z00_5902 == BgL_arg2372z00_5903))
																	{	/* Ieee/input.scm 298 */
																		bool_t BgL_test4543z00_8742;

																		{	/* Ieee/input.scm 298 */
																			bool_t BgL_res3852z00_5932;

																			BgL_res3852z00_5932 =
																				rgc_fill_buffer(
																				((obj_t) BgL_iportz00_3144));
																			BgL_test4543z00_8742 =
																				BgL_res3852z00_5932;
																		}
																		if (BgL_test4543z00_8742)
																			{	/* Ieee/input.scm 298 */
																				long BgL_arg2371z00_5921;
																				long BgL_arg2372z00_5922;

																				{	/* Ieee/input.scm 298 */
																					long BgL_res3853z00_5934;

																					{	/* Ieee/input.scm 298 */
																						obj_t BgL_tmpz00_8745;

																						BgL_tmpz00_8745 =
																							((obj_t) BgL_iportz00_3144);
																						BgL_res3853z00_5934 =
																							RGC_BUFFER_FORWARD
																							(BgL_tmpz00_8745);
																					}
																					BgL_arg2371z00_5921 =
																						BgL_res3853z00_5934;
																				}
																				{	/* Ieee/input.scm 298 */
																					long BgL_res3854z00_5936;

																					{	/* Ieee/input.scm 298 */
																						obj_t BgL_tmpz00_8748;

																						BgL_tmpz00_8748 =
																							((obj_t) BgL_iportz00_3144);
																						BgL_res3854z00_5936 =
																							RGC_BUFFER_BUFPOS
																							(BgL_tmpz00_8748);
																					}
																					BgL_arg2372z00_5922 =
																						BgL_res3854z00_5936;
																				}
																				{
																					long BgL_bufposz00_8752;
																					long BgL_forwardz00_8751;

																					BgL_forwardz00_8751 =
																						BgL_arg2371z00_5921;
																					BgL_bufposz00_8752 =
																						BgL_arg2372z00_5922;
																					BgL_bufposz00_3147 =
																						BgL_bufposz00_8752;
																					BgL_forwardz00_3146 =
																						BgL_forwardz00_8751;
																					goto
																						BgL_zc3z04anonymousza32368ze3z87_3148;
																				}
																			}
																		else
																			{	/* Ieee/input.scm 298 */
																				BgL_matchz00_3275 =
																					BgL_newzd2matchzd2_5918;
																			}
																	}
																else
																	{	/* Ieee/input.scm 298 */
																		int BgL_curz00_5923;

																		{	/* Ieee/input.scm 298 */
																			int BgL_res3855z00_5939;

																			{	/* Ieee/input.scm 298 */
																				obj_t BgL_tmpz00_8753;

																				BgL_tmpz00_8753 =
																					((obj_t) BgL_iportz00_3144);
																				BgL_res3855z00_5939 =
																					RGC_BUFFER_GET_CHAR(BgL_tmpz00_8753,
																					BgL_arg2371z00_5902);
																			}
																			BgL_curz00_5923 = BgL_res3855z00_5939;
																		}
																		{	/* Ieee/input.scm 298 */

																			BgL_iportz00_3132 = BgL_iportz00_3144;
																			BgL_lastzd2matchzd2_3133 =
																				BgL_newzd2matchzd2_5918;
																			BgL_forwardz00_3134 =
																				(((long) 1) + BgL_arg2371z00_5902);
																			BgL_bufposz00_3135 = BgL_arg2372z00_5903;
																		BgL_zc3z04anonymousza32362ze3z87_3136:
																			{	/* Ieee/input.scm 298 */
																				long BgL_newzd2matchzd2_5827;

																				{	/* Ieee/input.scm 298 */
																					long BgL_res3824z00_5836;

																					{	/* Ieee/input.scm 298 */
																						obj_t BgL_tmpz00_8756;

																						BgL_tmpz00_8756 =
																							((obj_t) BgL_iportz00_3132);
																						BgL_res3824z00_5836 =
																							RGC_STOP_MATCH(BgL_tmpz00_8756,
																							BgL_forwardz00_3134);
																					} BgL_res3824z00_5836;
																				}
																				BgL_newzd2matchzd2_5827 = ((long) 0);
																				if (
																					(BgL_forwardz00_3134 ==
																						BgL_bufposz00_3135))
																					{	/* Ieee/input.scm 298 */
																						bool_t BgL_test4545z00_8761;

																						{	/* Ieee/input.scm 298 */
																							bool_t BgL_res3826z00_5841;

																							BgL_res3826z00_5841 =
																								rgc_fill_buffer(
																								((obj_t) BgL_iportz00_3132));
																							BgL_test4545z00_8761 =
																								BgL_res3826z00_5841;
																						}
																						if (BgL_test4545z00_8761)
																							{	/* Ieee/input.scm 298 */
																								long BgL_arg2365z00_5830;
																								long BgL_arg2366z00_5831;

																								{	/* Ieee/input.scm 298 */
																									long BgL_res3827z00_5843;

																									{	/* Ieee/input.scm 298 */
																										obj_t BgL_tmpz00_8764;

																										BgL_tmpz00_8764 =
																											((obj_t)
																											BgL_iportz00_3132);
																										BgL_res3827z00_5843 =
																											RGC_BUFFER_FORWARD
																											(BgL_tmpz00_8764);
																									}
																									BgL_arg2365z00_5830 =
																										BgL_res3827z00_5843;
																								}
																								{	/* Ieee/input.scm 298 */
																									long BgL_res3828z00_5845;

																									{	/* Ieee/input.scm 298 */
																										obj_t BgL_tmpz00_8767;

																										BgL_tmpz00_8767 =
																											((obj_t)
																											BgL_iportz00_3132);
																										BgL_res3828z00_5845 =
																											RGC_BUFFER_BUFPOS
																											(BgL_tmpz00_8767);
																									}
																									BgL_arg2366z00_5831 =
																										BgL_res3828z00_5845;
																								}
																								{	/* Ieee/input.scm 298 */
																									long BgL_newzd2matchzd2_5846;

																									{	/* Ieee/input.scm 298 */
																										long BgL_res3829z00_5855;

																										{	/* Ieee/input.scm 298 */
																											obj_t BgL_tmpz00_8770;

																											BgL_tmpz00_8770 =
																												((obj_t)
																												BgL_iportz00_3132);
																											BgL_res3829z00_5855 =
																												RGC_STOP_MATCH
																												(BgL_tmpz00_8770,
																												BgL_arg2365z00_5830);
																										} BgL_res3829z00_5855;
																									}
																									BgL_newzd2matchzd2_5846 =
																										((long) 0);
																									if ((BgL_arg2365z00_5830 ==
																											BgL_arg2366z00_5831))
																										{	/* Ieee/input.scm 298 */
																											bool_t
																												BgL_test4547z00_8775;
																											{	/* Ieee/input.scm 298 */
																												bool_t
																													BgL_res3831z00_5860;
																												BgL_res3831z00_5860 =
																													rgc_fill_buffer((
																														(obj_t)
																														BgL_iportz00_3132));
																												BgL_test4547z00_8775 =
																													BgL_res3831z00_5860;
																											}
																											if (BgL_test4547z00_8775)
																												{	/* Ieee/input.scm 298 */
																													long
																														BgL_arg2365z00_5849;
																													long
																														BgL_arg2366z00_5850;
																													{	/* Ieee/input.scm 298 */
																														long
																															BgL_res3832z00_5862;
																														{	/* Ieee/input.scm 298 */
																															obj_t
																																BgL_tmpz00_8778;
																															BgL_tmpz00_8778 =
																																((obj_t)
																																BgL_iportz00_3132);
																															BgL_res3832z00_5862
																																=
																																RGC_BUFFER_FORWARD
																																(BgL_tmpz00_8778);
																														}
																														BgL_arg2365z00_5849
																															=
																															BgL_res3832z00_5862;
																													}
																													{	/* Ieee/input.scm 298 */
																														long
																															BgL_res3833z00_5864;
																														{	/* Ieee/input.scm 298 */
																															obj_t
																																BgL_tmpz00_8781;
																															BgL_tmpz00_8781 =
																																((obj_t)
																																BgL_iportz00_3132);
																															BgL_res3833z00_5864
																																=
																																RGC_BUFFER_BUFPOS
																																(BgL_tmpz00_8781);
																														}
																														BgL_arg2366z00_5850
																															=
																															BgL_res3833z00_5864;
																													}
																													{
																														long
																															BgL_bufposz00_8785;
																														long
																															BgL_forwardz00_8784;
																														BgL_forwardz00_8784
																															=
																															BgL_arg2365z00_5849;
																														BgL_bufposz00_8785 =
																															BgL_arg2366z00_5850;
																														BgL_bufposz00_3135 =
																															BgL_bufposz00_8785;
																														BgL_forwardz00_3134
																															=
																															BgL_forwardz00_8784;
																														goto
																															BgL_zc3z04anonymousza32362ze3z87_3136;
																													}
																												}
																											else
																												{	/* Ieee/input.scm 298 */
																													BgL_matchz00_3275 =
																														BgL_newzd2matchzd2_5846;
																												}
																										}
																									else
																										{	/* Ieee/input.scm 298 */
																											int BgL_curz00_5851;

																											{	/* Ieee/input.scm 298 */
																												int BgL_res3834z00_5867;

																												{	/* Ieee/input.scm 298 */
																													obj_t BgL_tmpz00_8786;

																													BgL_tmpz00_8786 =
																														((obj_t)
																														BgL_iportz00_3132);
																													BgL_res3834z00_5867 =
																														RGC_BUFFER_GET_CHAR
																														(BgL_tmpz00_8786,
																														BgL_arg2365z00_5830);
																												}
																												BgL_curz00_5851 =
																													BgL_res3834z00_5867;
																											}
																											{	/* Ieee/input.scm 298 */

																												{
																													long
																														BgL_bufposz00_8792;
																													long
																														BgL_forwardz00_8790;
																													long
																														BgL_lastzd2matchzd2_8789;
																													BgL_lastzd2matchzd2_8789
																														=
																														BgL_newzd2matchzd2_5846;
																													BgL_forwardz00_8790 =
																														(((long) 1) +
																														BgL_arg2365z00_5830);
																													BgL_bufposz00_8792 =
																														BgL_arg2366z00_5831;
																													BgL_bufposz00_3135 =
																														BgL_bufposz00_8792;
																													BgL_forwardz00_3134 =
																														BgL_forwardz00_8790;
																													BgL_lastzd2matchzd2_3133
																														=
																														BgL_lastzd2matchzd2_8789;
																													goto
																														BgL_zc3z04anonymousza32362ze3z87_3136;
																												}
																											}
																										}
																								}
																							}
																						else
																							{	/* Ieee/input.scm 298 */
																								BgL_matchz00_3275 =
																									BgL_newzd2matchzd2_5827;
																							}
																					}
																				else
																					{	/* Ieee/input.scm 298 */
																						int BgL_curz00_5832;

																						{	/* Ieee/input.scm 298 */
																							int BgL_res3836z00_5872;

																							{	/* Ieee/input.scm 298 */
																								obj_t BgL_tmpz00_8793;

																								BgL_tmpz00_8793 =
																									((obj_t) BgL_iportz00_3132);
																								BgL_res3836z00_5872 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_tmpz00_8793,
																									BgL_forwardz00_3134);
																							}
																							BgL_curz00_5832 =
																								BgL_res3836z00_5872;
																						}
																						{	/* Ieee/input.scm 298 */

																							{	/* Ieee/input.scm 298 */
																								long BgL_arg2367z00_5833;

																								BgL_arg2367z00_5833 =
																									(((long) 1) +
																									BgL_forwardz00_3134);
																								{	/* Ieee/input.scm 298 */
																									long BgL_newzd2matchzd2_5875;

																									{	/* Ieee/input.scm 298 */
																										long BgL_res3838z00_5884;

																										{	/* Ieee/input.scm 298 */
																											obj_t BgL_tmpz00_8797;

																											BgL_tmpz00_8797 =
																												((obj_t)
																												BgL_iportz00_3132);
																											BgL_res3838z00_5884 =
																												RGC_STOP_MATCH
																												(BgL_tmpz00_8797,
																												BgL_arg2367z00_5833);
																										} BgL_res3838z00_5884;
																									}
																									BgL_newzd2matchzd2_5875 =
																										((long) 0);
																									if ((BgL_arg2367z00_5833 ==
																											BgL_bufposz00_3135))
																										{	/* Ieee/input.scm 298 */
																											bool_t
																												BgL_test4549z00_8802;
																											{	/* Ieee/input.scm 298 */
																												bool_t
																													BgL_res3840z00_5889;
																												BgL_res3840z00_5889 =
																													rgc_fill_buffer((
																														(obj_t)
																														BgL_iportz00_3132));
																												BgL_test4549z00_8802 =
																													BgL_res3840z00_5889;
																											}
																											if (BgL_test4549z00_8802)
																												{	/* Ieee/input.scm 298 */
																													long
																														BgL_arg2365z00_5878;
																													long
																														BgL_arg2366z00_5879;
																													{	/* Ieee/input.scm 298 */
																														long
																															BgL_res3841z00_5891;
																														{	/* Ieee/input.scm 298 */
																															obj_t
																																BgL_tmpz00_8805;
																															BgL_tmpz00_8805 =
																																((obj_t)
																																BgL_iportz00_3132);
																															BgL_res3841z00_5891
																																=
																																RGC_BUFFER_FORWARD
																																(BgL_tmpz00_8805);
																														}
																														BgL_arg2365z00_5878
																															=
																															BgL_res3841z00_5891;
																													}
																													{	/* Ieee/input.scm 298 */
																														long
																															BgL_res3842z00_5893;
																														{	/* Ieee/input.scm 298 */
																															obj_t
																																BgL_tmpz00_8808;
																															BgL_tmpz00_8808 =
																																((obj_t)
																																BgL_iportz00_3132);
																															BgL_res3842z00_5893
																																=
																																RGC_BUFFER_BUFPOS
																																(BgL_tmpz00_8808);
																														}
																														BgL_arg2366z00_5879
																															=
																															BgL_res3842z00_5893;
																													}
																													{
																														long
																															BgL_bufposz00_8813;
																														long
																															BgL_forwardz00_8812;
																														long
																															BgL_lastzd2matchzd2_8811;
																														BgL_lastzd2matchzd2_8811
																															=
																															BgL_newzd2matchzd2_5827;
																														BgL_forwardz00_8812
																															=
																															BgL_arg2365z00_5878;
																														BgL_bufposz00_8813 =
																															BgL_arg2366z00_5879;
																														BgL_bufposz00_3135 =
																															BgL_bufposz00_8813;
																														BgL_forwardz00_3134
																															=
																															BgL_forwardz00_8812;
																														BgL_lastzd2matchzd2_3133
																															=
																															BgL_lastzd2matchzd2_8811;
																														goto
																															BgL_zc3z04anonymousza32362ze3z87_3136;
																													}
																												}
																											else
																												{	/* Ieee/input.scm 298 */
																													BgL_matchz00_3275 =
																														BgL_newzd2matchzd2_5875;
																												}
																										}
																									else
																										{	/* Ieee/input.scm 298 */
																											int BgL_curz00_5880;

																											{	/* Ieee/input.scm 298 */
																												int BgL_res3843z00_5896;

																												{	/* Ieee/input.scm 298 */
																													obj_t BgL_tmpz00_8814;

																													BgL_tmpz00_8814 =
																														((obj_t)
																														BgL_iportz00_3132);
																													BgL_res3843z00_5896 =
																														RGC_BUFFER_GET_CHAR
																														(BgL_tmpz00_8814,
																														BgL_arg2367z00_5833);
																												}
																												BgL_curz00_5880 =
																													BgL_res3843z00_5896;
																											}
																											{	/* Ieee/input.scm 298 */

																												{
																													long
																														BgL_forwardz00_8818;
																													long
																														BgL_lastzd2matchzd2_8817;
																													BgL_lastzd2matchzd2_8817
																														=
																														BgL_newzd2matchzd2_5875;
																													BgL_forwardz00_8818 =
																														(((long) 1) +
																														BgL_arg2367z00_5833);
																													BgL_forwardz00_3134 =
																														BgL_forwardz00_8818;
																													BgL_lastzd2matchzd2_3133
																														=
																														BgL_lastzd2matchzd2_8817;
																													goto
																														BgL_zc3z04anonymousza32362ze3z87_3136;
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
													else
														{	/* Ieee/input.scm 298 */
															BgL_matchz00_3275 = BgL_newzd2matchzd2_5899;
														}
												}
											else
												{	/* Ieee/input.scm 298 */
													int BgL_curz00_5904;

													{	/* Ieee/input.scm 298 */
														int BgL_res3857z00_5944;

														{	/* Ieee/input.scm 298 */
															obj_t BgL_tmpz00_8821;

															BgL_tmpz00_8821 = ((obj_t) BgL_iportz00_3144);
															BgL_res3857z00_5944 =
																RGC_BUFFER_GET_CHAR(BgL_tmpz00_8821,
																BgL_forwardz00_3146);
														}
														BgL_curz00_5904 = BgL_res3857z00_5944;
													}
													{	/* Ieee/input.scm 298 */

														{	/* Ieee/input.scm 298 */
															long BgL_arg2374z00_5905;

															BgL_arg2374z00_5905 =
																(((long) 1) + BgL_forwardz00_3146);
															{
																long BgL_lastzd2matchzd2_5948;
																long BgL_forwardz00_5949;
																long BgL_bufposz00_5950;

																BgL_lastzd2matchzd2_5948 =
																	BgL_newzd2matchzd2_5899;
																BgL_forwardz00_5949 = BgL_arg2374z00_5905;
																BgL_bufposz00_5950 = BgL_bufposz00_3147;
															BgL_statezd22zd21099z00_5947:
																{	/* Ieee/input.scm 298 */
																	long BgL_newzd2matchzd2_5951;

																	{	/* Ieee/input.scm 298 */
																		long BgL_res3859z00_5960;

																		{	/* Ieee/input.scm 298 */
																			obj_t BgL_tmpz00_8825;

																			BgL_tmpz00_8825 =
																				((obj_t) BgL_iportz00_3144);
																			BgL_res3859z00_5960 =
																				RGC_STOP_MATCH(BgL_tmpz00_8825,
																				BgL_forwardz00_5949);
																		} BgL_res3859z00_5960;
																	}
																	BgL_newzd2matchzd2_5951 = ((long) 0);
																	if (
																		(BgL_forwardz00_5949 == BgL_bufposz00_5950))
																		{	/* Ieee/input.scm 298 */
																			bool_t BgL_test4551z00_8830;

																			{	/* Ieee/input.scm 298 */
																				bool_t BgL_res3861z00_5965;

																				BgL_res3861z00_5965 =
																					rgc_fill_buffer(
																					((obj_t) BgL_iportz00_3144));
																				BgL_test4551z00_8830 =
																					BgL_res3861z00_5965;
																			}
																			if (BgL_test4551z00_8830)
																				{	/* Ieee/input.scm 298 */
																					long BgL_arg2365z00_5954;
																					long BgL_arg2366z00_5955;

																					{	/* Ieee/input.scm 298 */
																						long BgL_res3862z00_5967;

																						{	/* Ieee/input.scm 298 */
																							obj_t BgL_tmpz00_8833;

																							BgL_tmpz00_8833 =
																								((obj_t) BgL_iportz00_3144);
																							BgL_res3862z00_5967 =
																								RGC_BUFFER_FORWARD
																								(BgL_tmpz00_8833);
																						}
																						BgL_arg2365z00_5954 =
																							BgL_res3862z00_5967;
																					}
																					{	/* Ieee/input.scm 298 */
																						long BgL_res3863z00_5969;

																						{	/* Ieee/input.scm 298 */
																							obj_t BgL_tmpz00_8836;

																							BgL_tmpz00_8836 =
																								((obj_t) BgL_iportz00_3144);
																							BgL_res3863z00_5969 =
																								RGC_BUFFER_BUFPOS
																								(BgL_tmpz00_8836);
																						}
																						BgL_arg2366z00_5955 =
																							BgL_res3863z00_5969;
																					}
																					{
																						long BgL_bufposz00_8840;
																						long BgL_forwardz00_8839;

																						BgL_forwardz00_8839 =
																							BgL_arg2365z00_5954;
																						BgL_bufposz00_8840 =
																							BgL_arg2366z00_5955;
																						BgL_bufposz00_5950 =
																							BgL_bufposz00_8840;
																						BgL_forwardz00_5949 =
																							BgL_forwardz00_8839;
																						goto BgL_statezd22zd21099z00_5947;
																					}
																				}
																			else
																				{	/* Ieee/input.scm 298 */
																					BgL_matchz00_3275 =
																						BgL_newzd2matchzd2_5951;
																				}
																		}
																	else
																		{	/* Ieee/input.scm 298 */
																			int BgL_curz00_5956;

																			{	/* Ieee/input.scm 298 */
																				int BgL_res3864z00_5972;

																				{	/* Ieee/input.scm 298 */
																					obj_t BgL_tmpz00_8841;

																					BgL_tmpz00_8841 =
																						((obj_t) BgL_iportz00_3144);
																					BgL_res3864z00_5972 =
																						RGC_BUFFER_GET_CHAR(BgL_tmpz00_8841,
																						BgL_forwardz00_5949);
																				}
																				BgL_curz00_5956 = BgL_res3864z00_5972;
																			}
																			{	/* Ieee/input.scm 298 */

																				{
																					long BgL_forwardz00_8845;
																					long BgL_lastzd2matchzd2_8844;

																					BgL_lastzd2matchzd2_8844 =
																						BgL_newzd2matchzd2_5951;
																					BgL_forwardz00_8845 =
																						(((long) 1) + BgL_forwardz00_5949);
																					BgL_forwardz00_5949 =
																						BgL_forwardz00_8845;
																					BgL_lastzd2matchzd2_5948 =
																						BgL_lastzd2matchzd2_8844;
																					goto BgL_statezd22zd21099z00_5947;
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
					{	/* Ieee/input.scm 298 */
						obj_t BgL_tmpz00_8848;

						BgL_tmpz00_8848 = ((obj_t) BgL_ipz00_35);
						RGC_SET_FILEPOS(BgL_tmpz00_8848);
					}
					{

						{	/* Ieee/input.scm 298 */
							obj_t BgL_aux1213z00_3280;

							BgL_aux1213z00_3280 = BINT(BgL_matchz00_3275);
							switch ((long) CINT(BgL_aux1213z00_3280))
								{
								case ((long) 1):

									return BGl_string4285z00zz__r4_input_6_10_2z00;
									break;
								case ((long) 0):

									{	/* Ieee/input.scm 299 */
										obj_t BgL_res3880z00_6019;

										{	/* Ieee/input.scm 298 */
											long BgL_arg2381z00_6013;

											{	/* Ieee/input.scm 298 */
												long BgL_res3878z00_6015;

												{	/* Ieee/input.scm 298 */
													obj_t BgL_tmpz00_8852;

													BgL_tmpz00_8852 = ((obj_t) BgL_ipz00_35);
													BgL_res3878z00_6015 =
														RGC_BUFFER_MATCH_LENGTH(BgL_tmpz00_8852);
												}
												BgL_arg2381z00_6013 = BgL_res3878z00_6015;
											}
											{	/* Ieee/input.scm 298 */
												obj_t BgL_res3879z00_6018;

												BgL_res3879z00_6018 =
													rgc_buffer_substring(
													((obj_t) BgL_ipz00_35), ((long) 0),
													BgL_arg2381z00_6013);
												BgL_res3880z00_6019 = BgL_res3879z00_6018;
										}}
										return BgL_res3880z00_6019;
									}
									break;
								default:
									return
										BGl_errorz00zz__errorz00
										(BGl_string4272z00zz__r4_input_6_10_2z00,
										BGl_string4273z00zz__r4_input_6_10_2z00,
										BINT(BgL_matchz00_3275));
								}
						}
					}
				}
			}
		}

	}



/* _read-of-strings */
	obj_t BGl__readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t
		BgL_env1274z00_40, obj_t BgL_opt1273z00_39)
	{
		{	/* Ieee/input.scm 320 */
			{	/* Ieee/input.scm 320 */

				switch (VECTOR_LENGTH(BgL_opt1273z00_39))
					{
					case ((long) 0):

						{	/* Ieee/input.scm 320 */
							obj_t BgL_ipz00_3317;

							{	/* Ieee/input.scm 320 */
								obj_t BgL_res3881z00_6021;

								{	/* Ieee/input.scm 320 */
									obj_t BgL_tmpz00_8861;

									BgL_tmpz00_8861 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3881z00_6021 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8861);
								}
								BgL_ipz00_3317 = BgL_res3881z00_6021;
							}
							{	/* Ieee/input.scm 320 */

								return
									BGl_z62zc3z04anonymousza31392ze3ze5zz__r4_input_6_10_2z00
									(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00,
									BgL_ipz00_3317);
							}
						}
						break;
					case ((long) 1):

						{	/* Ieee/input.scm 320 */
							obj_t BgL_ipz00_3318;

							BgL_ipz00_3318 = VECTOR_REF(BgL_opt1273z00_39, ((long) 0));
							{	/* Ieee/input.scm 320 */

								return
									BGl_z62zc3z04anonymousza31392ze3ze5zz__r4_input_6_10_2z00
									(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00,
									BgL_ipz00_3318);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* read-of-strings */
	BGL_EXPORTED_DEF obj_t BGl_readzd2ofzd2stringsz00zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_38)
	{
		{	/* Ieee/input.scm 320 */
			return
				BGl_z62zc3z04anonymousza31392ze3ze5zz__r4_input_6_10_2z00
				(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00,
				BgL_ipz00_38);
		}

	}



/* _read-chars */
	obj_t BGl__readzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_env1278z00_44,
		obj_t BgL_opt1277z00_43)
	{
		{	/* Ieee/input.scm 326 */
			{	/* Ieee/input.scm 326 */
				obj_t BgL_g1279z00_3319;

				BgL_g1279z00_3319 = VECTOR_REF(BgL_opt1277z00_43, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1277z00_43))
					{
					case ((long) 1):

						{	/* Ieee/input.scm 326 */
							obj_t BgL_ipz00_3323;

							{	/* Ieee/input.scm 326 */
								obj_t BgL_res3882z00_6023;

								{	/* Ieee/input.scm 326 */
									obj_t BgL_tmpz00_8880;

									BgL_tmpz00_8880 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3882z00_6023 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8880);
								}
								BgL_ipz00_3323 = BgL_res3882z00_6023;
							}
							{	/* Ieee/input.scm 326 */

								return
									BGl_readzd2charszd2zz__r4_input_6_10_2z00(BgL_g1279z00_3319,
									BgL_ipz00_3323);
							}
						}
						break;
					case ((long) 2):

						{	/* Ieee/input.scm 326 */
							obj_t BgL_ipz00_3324;

							BgL_ipz00_3324 = VECTOR_REF(BgL_opt1277z00_43, ((long) 1));
							{	/* Ieee/input.scm 326 */

								return
									BGl_readzd2charszd2zz__r4_input_6_10_2z00(BgL_g1279z00_3319,
									BgL_ipz00_3324);
							}
						}
						break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* read-chars */
	BGL_EXPORTED_DEF obj_t BGl_readzd2charszd2zz__r4_input_6_10_2z00(obj_t
		BgL_lz00_41, obj_t BgL_ipz00_42)
	{
		{	/* Ieee/input.scm 326 */
			{	/* Ieee/input.scm 327 */
				obj_t BgL_lenz00_3325;

				if (INTEGERP(BgL_lz00_41))
					{	/* Ieee/input.scm 328 */
						BgL_lenz00_3325 = BgL_lz00_41;
					}
				else
					{	/* Ieee/input.scm 328 */
						if (ELONGP(BgL_lz00_41))
							{	/* Ieee/input.scm 329 */
								long BgL_res3885z00_6027;

								{	/* Ieee/input.scm 329 */
									long BgL_xz00_6026;

									BgL_xz00_6026 = BELONG_TO_LONG(BgL_lz00_41);
									BgL_res3885z00_6027 = (long) (BgL_xz00_6026);
								}
								BgL_lenz00_3325 = BINT(BgL_res3885z00_6027);
							}
						else
							{	/* Ieee/input.scm 329 */
								if (LLONGP(BgL_lz00_41))
									{	/* Ieee/input.scm 330 */
										long BgL_res3887z00_6030;

										{	/* Ieee/input.scm 330 */
											BGL_LONGLONG_T BgL_tmpz00_8897;

											BgL_tmpz00_8897 = BLLONG_TO_LLONG(BgL_lz00_41);
											BgL_res3887z00_6030 = LLONG_TO_LONG(BgL_tmpz00_8897);
										}
										BgL_lenz00_3325 = BINT(BgL_res3887z00_6030);
									}
								else
									{	/* Ieee/input.scm 332 */
										obj_t BgL_arg2491z00_3342;

										BgL_arg2491z00_3342 = bgl_find_runtime_type(BgL_lz00_41);
										BgL_lenz00_3325 =
											BGl_bigloozd2typezd2errorz00zz__errorz00
											(BGl_symbol4286z00zz__r4_input_6_10_2z00,
											BGl_string4288z00zz__r4_input_6_10_2z00,
											BgL_arg2491z00_3342);
									}
							}
					}
				if (((long) CINT(BgL_lenz00_3325) <= ((long) 0)))
					{	/* Ieee/input.scm 334 */
						if (((long) CINT(BgL_lenz00_3325) == ((long) 0)))
							{	/* Ieee/input.scm 335 */
								return BGl_string4285z00zz__r4_input_6_10_2z00;
							}
						else
							{	/* Ieee/input.scm 338 */
								BgL_z62iozd2errorzb0_bglt BgL_arg2479z00_3328;

								{	/* Ieee/input.scm 338 */
									BgL_z62iozd2errorzb0_bglt BgL_new1118z00_3329;

									{	/* Ieee/input.scm 338 */
										BgL_z62iozd2errorzb0_bglt BgL_new1117z00_3332;

										BgL_new1117z00_3332 =
											((BgL_z62iozd2errorzb0_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_z62iozd2errorzb0_bgl))));
										{	/* Ieee/input.scm 338 */
											long BgL_arg2483z00_3333;

											{	/* Ieee/input.scm 338 */
												long BgL_res3890z00_6036;

												BgL_res3890z00_6036 =
													BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00);
												BgL_arg2483z00_3333 = BgL_res3890z00_6036;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1117z00_3332),
												BgL_arg2483z00_3333);
										}
										BgL_new1118z00_3329 = BgL_new1117z00_3332;
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1118z00_3329)))->
											BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1118z00_3329)))->BgL_locationz00) =
										((obj_t) BFALSE), BUNSPEC);
									{
										obj_t BgL_auxz00_8917;

										{	/* Ieee/input.scm 338 */
											obj_t BgL_arg2481z00_3330;

											{	/* Ieee/input.scm 338 */
												obj_t BgL_arg2482z00_3331;

												{	/* Ieee/input.scm 338 */
													obj_t BgL_res3891z00_6040;

													{	/* Ieee/input.scm 338 */
														obj_t BgL_classz00_6039;

														BgL_classz00_6039 =
															BGl_z62iozd2errorzb0zz__objectz00;
														BgL_res3891z00_6040 =
															BGL_CLASS_ALL_FIELDS(BgL_classz00_6039);
													}
													BgL_arg2482z00_3331 = BgL_res3891z00_6040;
												}
												BgL_arg2481z00_3330 =
													VECTOR_REF(BgL_arg2482z00_3331, ((long) 2));
											}
											BgL_auxz00_8917 =
												BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
												(BgL_arg2481z00_3330);
										}
										((((BgL_z62exceptionz62_bglt) COBJECT(
														((BgL_z62exceptionz62_bglt) BgL_new1118z00_3329)))->
												BgL_stackz00) = ((obj_t) BgL_auxz00_8917), BUNSPEC);
									}
									((((BgL_z62errorz62_bglt) COBJECT(
													((BgL_z62errorz62_bglt) BgL_new1118z00_3329)))->
											BgL_procz00) =
										((obj_t) BGl_symbol4286z00zz__r4_input_6_10_2z00), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
														BgL_new1118z00_3329)))->BgL_msgz00) =
										((obj_t) BGl_string4289z00zz__r4_input_6_10_2z00), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
														BgL_new1118z00_3329)))->BgL_objz00) =
										((obj_t) BgL_lenz00_3325), BUNSPEC);
									BgL_arg2479z00_3328 = BgL_new1118z00_3329;
								}
								return BGl_raisez00zz__errorz00(((obj_t) BgL_arg2479z00_3328));
							}
					}
				else
					{	/* Ieee/input.scm 343 */
						obj_t BgL_sz00_3334;

						BgL_sz00_3334 = make_string_sans_fill((long) CINT(BgL_lenz00_3325));
						{	/* Ieee/input.scm 343 */
							long BgL_nz00_3335;

							BgL_nz00_3335 =
								bgl_rgc_blit_string(BgL_ipz00_42,
								BSTRING_TO_STRING(BgL_sz00_3334), ((long) 0),
								(long) CINT(BgL_lenz00_3325));
							{	/* Ieee/input.scm 344 */

								if ((BgL_nz00_3335 == ((long) 0)))
									{	/* Ieee/input.scm 347 */
										bool_t BgL_test4560z00_8938;

										{	/* Ieee/input.scm 347 */
											bool_t BgL_res3893z00_6045;

											BgL_res3893z00_6045 =
												rgc_buffer_eof_p(((obj_t) BgL_ipz00_42));
											BgL_test4560z00_8938 = BgL_res3893z00_6045;
										}
										if (BgL_test4560z00_8938)
											{	/* Ieee/input.scm 347 */
												return BEOF;
											}
										else
											{	/* Ieee/input.scm 347 */
												return BGl_string4285z00zz__r4_input_6_10_2z00;
											}
									}
								else
									{	/* Ieee/input.scm 346 */
										if ((BgL_nz00_3335 < (long) CINT(BgL_lenz00_3325)))
											{	/* Ieee/input.scm 350 */
												return bgl_string_shrink(BgL_sz00_3334, BgL_nz00_3335);
											}
										else
											{	/* Ieee/input.scm 350 */
												return BgL_sz00_3334;
											}
									}
							}
						}
					}
			}
		}

	}



/* _read-chars! */
	obj_t BGl__readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t BgL_env1283z00_49,
		obj_t BgL_opt1282z00_48)
	{
		{	/* Ieee/input.scm 358 */
			{	/* Ieee/input.scm 358 */
				obj_t BgL_g1284z00_3343;
				obj_t BgL_g1285z00_3344;

				BgL_g1284z00_3343 = VECTOR_REF(BgL_opt1282z00_48, ((long) 0));
				BgL_g1285z00_3344 = VECTOR_REF(BgL_opt1282z00_48, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1282z00_48))
					{
					case ((long) 2):

						{	/* Ieee/input.scm 358 */
							obj_t BgL_ipz00_3348;

							{	/* Ieee/input.scm 358 */
								obj_t BgL_res3895z00_6052;

								{	/* Ieee/input.scm 358 */
									obj_t BgL_tmpz00_8947;

									BgL_tmpz00_8947 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3895z00_6052 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_8947);
								}
								BgL_ipz00_3348 = BgL_res3895z00_6052;
							}
							{	/* Ieee/input.scm 358 */

								{	/* Ieee/input.scm 358 */
									obj_t BgL_auxz00_8950;

									if (STRINGP(BgL_g1284z00_3343))
										{	/* Ieee/input.scm 358 */
											BgL_auxz00_8950 = BgL_g1284z00_3343;
										}
									else
										{
											obj_t BgL_auxz00_8953;

											BgL_auxz00_8953 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 13935)),
												BGl_string4290z00zz__r4_input_6_10_2z00,
												BGl_string4291z00zz__r4_input_6_10_2z00,
												BgL_g1284z00_3343);
											FAILURE(BgL_auxz00_8953, BFALSE, BFALSE);
										}
									return
										BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
										(BgL_auxz00_8950, BgL_g1285z00_3344, BgL_ipz00_3348);
								}
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/input.scm 358 */
							obj_t BgL_ipz00_3349;

							BgL_ipz00_3349 = VECTOR_REF(BgL_opt1282z00_48, ((long) 2));
							{	/* Ieee/input.scm 358 */

								{	/* Ieee/input.scm 358 */
									obj_t BgL_auxz00_8959;

									if (STRINGP(BgL_g1284z00_3343))
										{	/* Ieee/input.scm 358 */
											BgL_auxz00_8959 = BgL_g1284z00_3343;
										}
									else
										{
											obj_t BgL_auxz00_8962;

											BgL_auxz00_8962 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 13935)),
												BGl_string4290z00zz__r4_input_6_10_2z00,
												BGl_string4291z00zz__r4_input_6_10_2z00,
												BgL_g1284z00_3343);
											FAILURE(BgL_auxz00_8962, BFALSE, BFALSE);
										}
									return
										BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
										(BgL_auxz00_8959, BgL_g1285z00_3344, BgL_ipz00_3349);
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



/* read-chars! */
	BGL_EXPORTED_DEF obj_t BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00(obj_t
		BgL_bufz00_45, obj_t BgL_lz00_46, obj_t BgL_ipz00_47)
	{
		{	/* Ieee/input.scm 358 */
			{	/* Ieee/input.scm 359 */
				obj_t BgL_lenz00_3350;

				if (INTEGERP(BgL_lz00_46))
					{	/* Ieee/input.scm 360 */
						BgL_lenz00_3350 = BgL_lz00_46;
					}
				else
					{	/* Ieee/input.scm 360 */
						if (ELONGP(BgL_lz00_46))
							{	/* Ieee/input.scm 361 */
								long BgL_res3898z00_6056;

								{	/* Ieee/input.scm 361 */
									long BgL_xz00_6055;

									BgL_xz00_6055 = BELONG_TO_LONG(BgL_lz00_46);
									BgL_res3898z00_6056 = (long) (BgL_xz00_6055);
								}
								BgL_lenz00_3350 = BINT(BgL_res3898z00_6056);
							}
						else
							{	/* Ieee/input.scm 361 */
								if (LLONGP(BgL_lz00_46))
									{	/* Ieee/input.scm 362 */
										long BgL_res3900z00_6059;

										{	/* Ieee/input.scm 362 */
											BGL_LONGLONG_T BgL_tmpz00_8978;

											BgL_tmpz00_8978 = BLLONG_TO_LLONG(BgL_lz00_46);
											BgL_res3900z00_6059 = LLONG_TO_LONG(BgL_tmpz00_8978);
										}
										BgL_lenz00_3350 = BINT(BgL_res3900z00_6059);
									}
								else
									{	/* Ieee/input.scm 364 */
										obj_t BgL_arg2506z00_3366;

										BgL_arg2506z00_3366 = bgl_find_runtime_type(BgL_lz00_46);
										BgL_lenz00_3350 =
											BGl_bigloozd2typezd2errorz00zz__errorz00
											(BGl_symbol4292z00zz__r4_input_6_10_2z00,
											BGl_string4288z00zz__r4_input_6_10_2z00,
											BgL_arg2506z00_3366);
									}
							}
					}
				if (((long) CINT(BgL_lenz00_3350) <= ((long) 0)))
					{	/* Ieee/input.scm 365 */
						if (((long) CINT(BgL_lenz00_3350) == ((long) 0)))
							{	/* Ieee/input.scm 366 */
								return BINT(((long) 0));
							}
						else
							{	/* Ieee/input.scm 369 */
								BgL_z62iozd2errorzb0_bglt BgL_arg2496z00_3353;

								{	/* Ieee/input.scm 369 */
									BgL_z62iozd2errorzb0_bglt BgL_new1121z00_3354;

									{	/* Ieee/input.scm 369 */
										BgL_z62iozd2errorzb0_bglt BgL_new1120z00_3357;

										BgL_new1120z00_3357 =
											((BgL_z62iozd2errorzb0_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_z62iozd2errorzb0_bgl))));
										{	/* Ieee/input.scm 369 */
											long BgL_arg2500z00_3358;

											{	/* Ieee/input.scm 369 */
												long BgL_res3903z00_6065;

												BgL_res3903z00_6065 =
													BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00);
												BgL_arg2500z00_3358 = BgL_res3903z00_6065;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1120z00_3357),
												BgL_arg2500z00_3358);
										}
										BgL_new1121z00_3354 = BgL_new1120z00_3357;
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1121z00_3354)))->
											BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1121z00_3354)))->BgL_locationz00) =
										((obj_t) BFALSE), BUNSPEC);
									{
										obj_t BgL_auxz00_8999;

										{	/* Ieee/input.scm 369 */
											obj_t BgL_arg2497z00_3355;

											{	/* Ieee/input.scm 369 */
												obj_t BgL_arg2499z00_3356;

												{	/* Ieee/input.scm 369 */
													obj_t BgL_res3904z00_6069;

													{	/* Ieee/input.scm 369 */
														obj_t BgL_classz00_6068;

														BgL_classz00_6068 =
															BGl_z62iozd2errorzb0zz__objectz00;
														BgL_res3904z00_6069 =
															BGL_CLASS_ALL_FIELDS(BgL_classz00_6068);
													}
													BgL_arg2499z00_3356 = BgL_res3904z00_6069;
												}
												BgL_arg2497z00_3355 =
													VECTOR_REF(BgL_arg2499z00_3356, ((long) 2));
											}
											BgL_auxz00_8999 =
												BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
												(BgL_arg2497z00_3355);
										}
										((((BgL_z62exceptionz62_bglt) COBJECT(
														((BgL_z62exceptionz62_bglt) BgL_new1121z00_3354)))->
												BgL_stackz00) = ((obj_t) BgL_auxz00_8999), BUNSPEC);
									}
									((((BgL_z62errorz62_bglt) COBJECT(
													((BgL_z62errorz62_bglt) BgL_new1121z00_3354)))->
											BgL_procz00) =
										((obj_t) BGl_symbol4286z00zz__r4_input_6_10_2z00), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
														BgL_new1121z00_3354)))->BgL_msgz00) =
										((obj_t) BGl_string4289z00zz__r4_input_6_10_2z00), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
														BgL_new1121z00_3354)))->BgL_objz00) =
										((obj_t) BgL_lenz00_3350), BUNSPEC);
									BgL_arg2496z00_3353 = BgL_new1121z00_3354;
								}
								return BGl_raisez00zz__errorz00(((obj_t) BgL_arg2496z00_3353));
							}
					}
				else
					{	/* Ieee/input.scm 373 */
						obj_t BgL_arg2501z00_3359;

						{	/* Ieee/input.scm 373 */
							long BgL_az00_3360;

							BgL_az00_3360 = STRING_LENGTH(BgL_bufz00_45);
							if ((BgL_az00_3360 < (long) CINT(BgL_lenz00_3350)))
								{	/* Ieee/input.scm 373 */
									BgL_arg2501z00_3359 = BINT(BgL_az00_3360);
								}
							else
								{	/* Ieee/input.scm 373 */
									BgL_arg2501z00_3359 = BgL_lenz00_3350;
								}
						}
						return
							BINT(bgl_rgc_blit_string(BgL_ipz00_47,
								BSTRING_TO_STRING(BgL_bufz00_45), ((long) 0),
								(long) CINT(BgL_arg2501z00_3359)));
		}}}

	}



/* _read-fill-string! */
	obj_t BGl__readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t
		BgL_env1289z00_55, obj_t BgL_opt1288z00_54)
	{
		{	/* Ieee/input.scm 378 */
			{	/* Ieee/input.scm 378 */
				obj_t BgL_g1290z00_7324;
				obj_t BgL_g1291z00_7325;
				obj_t BgL_g1292z00_7326;

				BgL_g1290z00_7324 = VECTOR_REF(BgL_opt1288z00_54, ((long) 0));
				BgL_g1291z00_7325 = VECTOR_REF(BgL_opt1288z00_54, ((long) 1));
				BgL_g1292z00_7326 = VECTOR_REF(BgL_opt1288z00_54, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1288z00_54))
					{
					case ((long) 3):

						{	/* Ieee/input.scm 378 */
							obj_t BgL_ipz00_7327;

							{	/* Ieee/input.scm 378 */
								obj_t BgL_res3907z00_7328;

								{	/* Ieee/input.scm 378 */
									obj_t BgL_tmpz00_9025;

									BgL_tmpz00_9025 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3907z00_7328 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_9025);
								}
								BgL_ipz00_7327 = BgL_res3907z00_7328;
							}
							{	/* Ieee/input.scm 378 */

								{	/* Ieee/input.scm 378 */
									obj_t BgL_sz00_7329;
									long BgL_oz00_7330;
									long BgL_lenz00_7331;

									if (STRINGP(BgL_g1290z00_7324))
										{	/* Ieee/input.scm 378 */
											BgL_sz00_7329 = BgL_g1290z00_7324;
										}
									else
										{
											obj_t BgL_auxz00_9030;

											BgL_auxz00_9030 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 14652)),
												BGl_string4294z00zz__r4_input_6_10_2z00,
												BGl_string4291z00zz__r4_input_6_10_2z00,
												BgL_g1290z00_7324);
											FAILURE(BgL_auxz00_9030, BFALSE, BFALSE);
										}
									{	/* Ieee/input.scm 378 */
										obj_t BgL_tmpz00_9034;

										if (INTEGERP(BgL_g1291z00_7325))
											{	/* Ieee/input.scm 378 */
												BgL_tmpz00_9034 = BgL_g1291z00_7325;
											}
										else
											{
												obj_t BgL_auxz00_9037;

												BgL_auxz00_9037 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 14652)),
													BGl_string4294z00zz__r4_input_6_10_2z00,
													BGl_string4295z00zz__r4_input_6_10_2z00,
													BgL_g1291z00_7325);
												FAILURE(BgL_auxz00_9037, BFALSE, BFALSE);
											}
										BgL_oz00_7330 = (long) CINT(BgL_tmpz00_9034);
									}
									{	/* Ieee/input.scm 378 */
										obj_t BgL_tmpz00_9042;

										if (INTEGERP(BgL_g1292z00_7326))
											{	/* Ieee/input.scm 378 */
												BgL_tmpz00_9042 = BgL_g1292z00_7326;
											}
										else
											{
												obj_t BgL_auxz00_9045;

												BgL_auxz00_9045 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 14652)),
													BGl_string4294z00zz__r4_input_6_10_2z00,
													BGl_string4295z00zz__r4_input_6_10_2z00,
													BgL_g1292z00_7326);
												FAILURE(BgL_auxz00_9045, BFALSE, BFALSE);
											}
										BgL_lenz00_7331 = (long) CINT(BgL_tmpz00_9042);
									}
									{	/* Ieee/input.scm 382 */
										long BgL_nz00_7332;

										BgL_nz00_7332 =
											bgl_rgc_blit_string(BgL_ipz00_7327,
											BSTRING_TO_STRING(BgL_sz00_7329), BgL_oz00_7330,
											BgL_lenz00_7331);
										{	/* Ieee/input.scm 383 */
											bool_t BgL_test4573z00_9052;

											if ((BgL_nz00_7332 == ((long) 0)))
												{	/* Ieee/input.scm 383 */
													BgL_test4573z00_9052 =
														rgc_buffer_eof_p(BgL_ipz00_7327);
												}
											else
												{	/* Ieee/input.scm 383 */
													BgL_test4573z00_9052 = ((bool_t) 0);
												}
											if (BgL_test4573z00_9052)
												{	/* Ieee/input.scm 383 */
													return BEOF;
												}
											else
												{	/* Ieee/input.scm 383 */
													return BINT(BgL_nz00_7332);
												}
										}
									}
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/input.scm 378 */
							obj_t BgL_ipz00_7333;

							BgL_ipz00_7333 = VECTOR_REF(BgL_opt1288z00_54, ((long) 3));
							{	/* Ieee/input.scm 378 */

								{	/* Ieee/input.scm 378 */
									obj_t BgL_sz00_7334;
									long BgL_oz00_7335;
									long BgL_lenz00_7336;

									if (STRINGP(BgL_g1290z00_7324))
										{	/* Ieee/input.scm 378 */
											BgL_sz00_7334 = BgL_g1290z00_7324;
										}
									else
										{
											obj_t BgL_auxz00_9060;

											BgL_auxz00_9060 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 14652)),
												BGl_string4294z00zz__r4_input_6_10_2z00,
												BGl_string4291z00zz__r4_input_6_10_2z00,
												BgL_g1290z00_7324);
											FAILURE(BgL_auxz00_9060, BFALSE, BFALSE);
										}
									{	/* Ieee/input.scm 378 */
										obj_t BgL_tmpz00_9064;

										if (INTEGERP(BgL_g1291z00_7325))
											{	/* Ieee/input.scm 378 */
												BgL_tmpz00_9064 = BgL_g1291z00_7325;
											}
										else
											{
												obj_t BgL_auxz00_9067;

												BgL_auxz00_9067 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 14652)),
													BGl_string4294z00zz__r4_input_6_10_2z00,
													BGl_string4295z00zz__r4_input_6_10_2z00,
													BgL_g1291z00_7325);
												FAILURE(BgL_auxz00_9067, BFALSE, BFALSE);
											}
										BgL_oz00_7335 = (long) CINT(BgL_tmpz00_9064);
									}
									{	/* Ieee/input.scm 378 */
										obj_t BgL_tmpz00_9072;

										if (INTEGERP(BgL_g1292z00_7326))
											{	/* Ieee/input.scm 378 */
												BgL_tmpz00_9072 = BgL_g1292z00_7326;
											}
										else
											{
												obj_t BgL_auxz00_9075;

												BgL_auxz00_9075 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 14652)),
													BGl_string4294z00zz__r4_input_6_10_2z00,
													BGl_string4295z00zz__r4_input_6_10_2z00,
													BgL_g1292z00_7326);
												FAILURE(BgL_auxz00_9075, BFALSE, BFALSE);
											}
										BgL_lenz00_7336 = (long) CINT(BgL_tmpz00_9072);
									}
									{	/* Ieee/input.scm 382 */
										long BgL_nz00_7337;

										{	/* Ieee/input.scm 382 */
											obj_t BgL_tmpz00_9080;

											if (INPUT_PORTP(BgL_ipz00_7333))
												{	/* Ieee/input.scm 382 */
													BgL_tmpz00_9080 = BgL_ipz00_7333;
												}
											else
												{
													obj_t BgL_auxz00_9083;

													BgL_auxz00_9083 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4279z00zz__r4_input_6_10_2z00,
														BINT(((long) 14866)),
														BGl_string4294z00zz__r4_input_6_10_2z00,
														BGl_string4282z00zz__r4_input_6_10_2z00,
														BgL_ipz00_7333);
													FAILURE(BgL_auxz00_9083, BFALSE, BFALSE);
												}
											BgL_nz00_7337 =
												bgl_rgc_blit_string(BgL_tmpz00_9080,
												BSTRING_TO_STRING(BgL_sz00_7334), BgL_oz00_7335,
												BgL_lenz00_7336);
										}
										{	/* Ieee/input.scm 383 */
											bool_t BgL_test4579z00_9089;

											if ((BgL_nz00_7337 == ((long) 0)))
												{	/* Ieee/input.scm 383 */
													obj_t BgL_tmpz00_9092;

													if (INPUT_PORTP(BgL_ipz00_7333))
														{	/* Ieee/input.scm 383 */
															BgL_tmpz00_9092 = BgL_ipz00_7333;
														}
													else
														{
															obj_t BgL_auxz00_9095;

															BgL_auxz00_9095 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string4279z00zz__r4_input_6_10_2z00,
																BINT(((long) 14920)),
																BGl_string4294z00zz__r4_input_6_10_2z00,
																BGl_string4282z00zz__r4_input_6_10_2z00,
																BgL_ipz00_7333);
															FAILURE(BgL_auxz00_9095, BFALSE, BFALSE);
														}
													BgL_test4579z00_9089 =
														rgc_buffer_eof_p(BgL_tmpz00_9092);
												}
											else
												{	/* Ieee/input.scm 383 */
													BgL_test4579z00_9089 = ((bool_t) 0);
												}
											if (BgL_test4579z00_9089)
												{	/* Ieee/input.scm 383 */
													return BEOF;
												}
											else
												{	/* Ieee/input.scm 383 */
													return BINT(BgL_nz00_7337);
												}
										}
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



/* read-fill-string! */
	BGL_EXPORTED_DEF obj_t
		BGl_readzd2fillzd2stringz12z12zz__r4_input_6_10_2z00(obj_t BgL_sz00_50,
		long BgL_oz00_51, long BgL_lenz00_52, obj_t BgL_ipz00_53)
	{
		{	/* Ieee/input.scm 378 */
			{	/* Ieee/input.scm 382 */
				long BgL_nz00_7338;

				BgL_nz00_7338 =
					bgl_rgc_blit_string(BgL_ipz00_53,
					BSTRING_TO_STRING(BgL_sz00_50), BgL_oz00_51, BgL_lenz00_52);
				{	/* Ieee/input.scm 383 */
					bool_t BgL_test4582z00_9105;

					if ((BgL_nz00_7338 == ((long) 0)))
						{	/* Ieee/input.scm 383 */
							BgL_test4582z00_9105 = rgc_buffer_eof_p(BgL_ipz00_53);
						}
					else
						{	/* Ieee/input.scm 383 */
							BgL_test4582z00_9105 = ((bool_t) 0);
						}
					if (BgL_test4582z00_9105)
						{	/* Ieee/input.scm 383 */
							return BEOF;
						}
					else
						{	/* Ieee/input.scm 383 */
							return BINT(BgL_nz00_7338);
						}
				}
			}
		}

	}



/* _unread-char! */
	obj_t BGl__unreadzd2charz12zc0zz__r4_input_6_10_2z00(obj_t BgL_env1296z00_59,
		obj_t BgL_opt1295z00_58)
	{
		{	/* Ieee/input.scm 401 */
			{	/* Ieee/input.scm 401 */
				obj_t BgL_g1297z00_3379;

				BgL_g1297z00_3379 = VECTOR_REF(BgL_opt1295z00_58, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1295z00_58))
					{
					case ((long) 1):

						{	/* Ieee/input.scm 401 */
							obj_t BgL_ipz00_3383;

							{	/* Ieee/input.scm 401 */
								obj_t BgL_res3911z00_6108;

								{	/* Ieee/input.scm 401 */
									obj_t BgL_tmpz00_9111;

									BgL_tmpz00_9111 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3911z00_6108 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_9111);
								}
								BgL_ipz00_3383 = BgL_res3911z00_6108;
							}
							{	/* Ieee/input.scm 401 */

								{	/* Ieee/input.scm 401 */
									unsigned char BgL_auxz00_9114;

									{	/* Ieee/input.scm 401 */
										obj_t BgL_tmpz00_9115;

										if (CHARP(BgL_g1297z00_3379))
											{	/* Ieee/input.scm 401 */
												BgL_tmpz00_9115 = BgL_g1297z00_3379;
											}
										else
											{
												obj_t BgL_auxz00_9118;

												BgL_auxz00_9118 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 15535)),
													BGl_string4296z00zz__r4_input_6_10_2z00,
													BGl_string4297z00zz__r4_input_6_10_2z00,
													BgL_g1297z00_3379);
												FAILURE(BgL_auxz00_9118, BFALSE, BFALSE);
											}
										BgL_auxz00_9114 = CCHAR(BgL_tmpz00_9115);
									}
									return
										BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00
										(BgL_auxz00_9114, BgL_ipz00_3383);
								}
							}
						}
						break;
					case ((long) 2):

						{	/* Ieee/input.scm 401 */
							obj_t BgL_ipz00_3384;

							BgL_ipz00_3384 = VECTOR_REF(BgL_opt1295z00_58, ((long) 1));
							{	/* Ieee/input.scm 401 */

								{	/* Ieee/input.scm 401 */
									unsigned char BgL_auxz00_9125;

									{	/* Ieee/input.scm 401 */
										obj_t BgL_tmpz00_9126;

										if (CHARP(BgL_g1297z00_3379))
											{	/* Ieee/input.scm 401 */
												BgL_tmpz00_9126 = BgL_g1297z00_3379;
											}
										else
											{
												obj_t BgL_auxz00_9129;

												BgL_auxz00_9129 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 15535)),
													BGl_string4296z00zz__r4_input_6_10_2z00,
													BGl_string4297z00zz__r4_input_6_10_2z00,
													BgL_g1297z00_3379);
												FAILURE(BgL_auxz00_9129, BFALSE, BFALSE);
											}
										BgL_auxz00_9125 = CCHAR(BgL_tmpz00_9126);
									}
									return
										BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00
										(BgL_auxz00_9125, BgL_ipz00_3384);
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



/* unread-char! */
	BGL_EXPORTED_DEF obj_t BGl_unreadzd2charz12zc0zz__r4_input_6_10_2z00(unsigned
		char BgL_cz00_56, obj_t BgL_ipz00_57)
	{
		{	/* Ieee/input.scm 401 */
			{	/* Ieee/input.scm 402 */
				bool_t BgL_test4586z00_9137;

				{	/* Ieee/input.scm 402 */
					long BgL_arg2521z00_3393;

					BgL_arg2521z00_3393 = ((unsigned char) (BgL_cz00_56));
					{	/* Ieee/input.scm 402 */
						bool_t BgL_res3913z00_6113;

						BgL_res3913z00_6113 =
							rgc_buffer_insert_char(
							((obj_t) BgL_ipz00_57), (int) (BgL_arg2521z00_3393));
						BgL_test4586z00_9137 = BgL_res3913z00_6113;
				}}
				if (BgL_test4586z00_9137)
					{	/* Ieee/input.scm 402 */
						return BFALSE;
					}
				else
					{	/* Ieee/input.scm 404 */
						BgL_z62iozd2errorzb0_bglt BgL_arg2515z00_3387;

						{	/* Ieee/input.scm 404 */
							BgL_z62iozd2errorzb0_bglt BgL_new1126z00_3388;

							{	/* Ieee/input.scm 404 */
								BgL_z62iozd2errorzb0_bglt BgL_new1125z00_3391;

								BgL_new1125z00_3391 =
									((BgL_z62iozd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_z62iozd2errorzb0_bgl))));
								{	/* Ieee/input.scm 404 */
									long BgL_arg2520z00_3392;

									{	/* Ieee/input.scm 404 */
										long BgL_res3914z00_6115;

										BgL_res3914z00_6115 =
											BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00);
										BgL_arg2520z00_3392 = BgL_res3914z00_6115;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1125z00_3391),
										BgL_arg2520z00_3392);
								}
								BgL_new1126z00_3388 = BgL_new1125z00_3391;
							}
							((((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt) BgL_new1126z00_3388)))->
									BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
							((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
												BgL_new1126z00_3388)))->BgL_locationz00) =
								((obj_t) BFALSE), BUNSPEC);
							{
								obj_t BgL_auxz00_9151;

								{	/* Ieee/input.scm 404 */
									obj_t BgL_arg2518z00_3389;

									{	/* Ieee/input.scm 404 */
										obj_t BgL_arg2519z00_3390;

										{	/* Ieee/input.scm 404 */
											obj_t BgL_res3915z00_6119;

											{	/* Ieee/input.scm 404 */
												obj_t BgL_classz00_6118;

												BgL_classz00_6118 = BGl_z62iozd2errorzb0zz__objectz00;
												BgL_res3915z00_6119 =
													BGL_CLASS_ALL_FIELDS(BgL_classz00_6118);
											}
											BgL_arg2519z00_3390 = BgL_res3915z00_6119;
										}
										BgL_arg2518z00_3389 =
											VECTOR_REF(BgL_arg2519z00_3390, ((long) 2));
									}
									BgL_auxz00_9151 =
										BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
										(BgL_arg2518z00_3389);
								}
								((((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt) BgL_new1126z00_3388)))->
										BgL_stackz00) = ((obj_t) BgL_auxz00_9151), BUNSPEC);
							}
							((((BgL_z62errorz62_bglt) COBJECT(
											((BgL_z62errorz62_bglt) BgL_new1126z00_3388)))->
									BgL_procz00) =
								((obj_t) BGl_symbol4298z00zz__r4_input_6_10_2z00), BUNSPEC);
							((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
												BgL_new1126z00_3388)))->BgL_msgz00) =
								((obj_t) BGl_string4300z00zz__r4_input_6_10_2z00), BUNSPEC);
							((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
												BgL_new1126z00_3388)))->BgL_objz00) =
								((obj_t) BCHAR(BgL_cz00_56)), BUNSPEC);
							BgL_arg2515z00_3387 = BgL_new1126z00_3388;
						}
						return BGl_raisez00zz__errorz00(((obj_t) BgL_arg2515z00_3387));
					}
			}
		}

	}



/* _unread-string! */
	obj_t BGl__unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t
		BgL_env1301z00_63, obj_t BgL_opt1300z00_62)
	{
		{	/* Ieee/input.scm 412 */
			{	/* Ieee/input.scm 412 */
				obj_t BgL_g1302z00_3394;

				BgL_g1302z00_3394 = VECTOR_REF(BgL_opt1300z00_62, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1300z00_62))
					{
					case ((long) 1):

						{	/* Ieee/input.scm 412 */
							obj_t BgL_ipz00_3398;

							{	/* Ieee/input.scm 412 */
								obj_t BgL_res3916z00_6122;

								{	/* Ieee/input.scm 412 */
									obj_t BgL_tmpz00_9167;

									BgL_tmpz00_9167 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3916z00_6122 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_9167);
								}
								BgL_ipz00_3398 = BgL_res3916z00_6122;
							}
							{	/* Ieee/input.scm 412 */

								{	/* Ieee/input.scm 412 */
									obj_t BgL_auxz00_9170;

									if (STRINGP(BgL_g1302z00_3394))
										{	/* Ieee/input.scm 412 */
											BgL_auxz00_9170 = BgL_g1302z00_3394;
										}
									else
										{
											obj_t BgL_auxz00_9173;

											BgL_auxz00_9173 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 15998)),
												BGl_string4301z00zz__r4_input_6_10_2z00,
												BGl_string4291z00zz__r4_input_6_10_2z00,
												BgL_g1302z00_3394);
											FAILURE(BgL_auxz00_9173, BFALSE, BFALSE);
										}
									return
										BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00
										(BgL_auxz00_9170, BgL_ipz00_3398);
								}
							}
						}
						break;
					case ((long) 2):

						{	/* Ieee/input.scm 412 */
							obj_t BgL_ipz00_3399;

							BgL_ipz00_3399 = VECTOR_REF(BgL_opt1300z00_62, ((long) 1));
							{	/* Ieee/input.scm 412 */

								{	/* Ieee/input.scm 412 */
									obj_t BgL_auxz00_9179;

									if (STRINGP(BgL_g1302z00_3394))
										{	/* Ieee/input.scm 412 */
											BgL_auxz00_9179 = BgL_g1302z00_3394;
										}
									else
										{
											obj_t BgL_auxz00_9182;

											BgL_auxz00_9182 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 15998)),
												BGl_string4301z00zz__r4_input_6_10_2z00,
												BGl_string4291z00zz__r4_input_6_10_2z00,
												BgL_g1302z00_3394);
											FAILURE(BgL_auxz00_9182, BFALSE, BFALSE);
										}
									return
										BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00
										(BgL_auxz00_9179, BgL_ipz00_3399);
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



/* unread-string! */
	BGL_EXPORTED_DEF obj_t BGl_unreadzd2stringz12zc0zz__r4_input_6_10_2z00(obj_t
		BgL_strz00_60, obj_t BgL_ipz00_61)
	{
		{	/* Ieee/input.scm 412 */
			{	/* Ieee/input.scm 413 */
				bool_t BgL_test4589z00_9189;

				{	/* Ieee/input.scm 413 */
					long BgL_arg2530z00_3408;

					BgL_arg2530z00_3408 = STRING_LENGTH(BgL_strz00_60);
					{	/* Ieee/input.scm 413 */
						bool_t BgL_res3918z00_6128;

						BgL_res3918z00_6128 =
							rgc_buffer_insert_substring(
							((obj_t) BgL_ipz00_61), BgL_strz00_60, ((long) 0),
							BgL_arg2530z00_3408);
						BgL_test4589z00_9189 = BgL_res3918z00_6128;
				}}
				if (BgL_test4589z00_9189)
					{	/* Ieee/input.scm 413 */
						return BFALSE;
					}
				else
					{	/* Ieee/input.scm 415 */
						BgL_z62iozd2errorzb0_bglt BgL_arg2525z00_3402;

						{	/* Ieee/input.scm 415 */
							BgL_z62iozd2errorzb0_bglt BgL_new1130z00_3403;

							{	/* Ieee/input.scm 415 */
								BgL_z62iozd2errorzb0_bglt BgL_new1128z00_3406;

								BgL_new1128z00_3406 =
									((BgL_z62iozd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_z62iozd2errorzb0_bgl))));
								{	/* Ieee/input.scm 415 */
									long BgL_arg2529z00_3407;

									{	/* Ieee/input.scm 415 */
										long BgL_res3919z00_6130;

										BgL_res3919z00_6130 =
											BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00);
										BgL_arg2529z00_3407 = BgL_res3919z00_6130;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1128z00_3406),
										BgL_arg2529z00_3407);
								}
								BgL_new1130z00_3403 = BgL_new1128z00_3406;
							}
							((((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt) BgL_new1130z00_3403)))->
									BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
							((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
												BgL_new1130z00_3403)))->BgL_locationz00) =
								((obj_t) BFALSE), BUNSPEC);
							{
								obj_t BgL_auxz00_9201;

								{	/* Ieee/input.scm 415 */
									obj_t BgL_arg2526z00_3404;

									{	/* Ieee/input.scm 415 */
										obj_t BgL_arg2527z00_3405;

										{	/* Ieee/input.scm 415 */
											obj_t BgL_res3920z00_6134;

											{	/* Ieee/input.scm 415 */
												obj_t BgL_classz00_6133;

												BgL_classz00_6133 = BGl_z62iozd2errorzb0zz__objectz00;
												BgL_res3920z00_6134 =
													BGL_CLASS_ALL_FIELDS(BgL_classz00_6133);
											}
											BgL_arg2527z00_3405 = BgL_res3920z00_6134;
										}
										BgL_arg2526z00_3404 =
											VECTOR_REF(BgL_arg2527z00_3405, ((long) 2));
									}
									BgL_auxz00_9201 =
										BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
										(BgL_arg2526z00_3404);
								}
								((((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt) BgL_new1130z00_3403)))->
										BgL_stackz00) = ((obj_t) BgL_auxz00_9201), BUNSPEC);
							}
							((((BgL_z62errorz62_bglt) COBJECT(
											((BgL_z62errorz62_bglt) BgL_new1130z00_3403)))->
									BgL_procz00) =
								((obj_t) BGl_symbol4302z00zz__r4_input_6_10_2z00), BUNSPEC);
							((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
												BgL_new1130z00_3403)))->BgL_msgz00) =
								((obj_t) BGl_string4304z00zz__r4_input_6_10_2z00), BUNSPEC);
							((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
												BgL_new1130z00_3403)))->BgL_objz00) =
								((obj_t) BgL_strz00_60), BUNSPEC);
							BgL_arg2525z00_3402 = BgL_new1130z00_3403;
						}
						return BGl_raisez00zz__errorz00(((obj_t) BgL_arg2525z00_3402));
					}
			}
		}

	}



/* _unread-substring! */
	obj_t BGl__unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t
		BgL_env1306z00_69, obj_t BgL_opt1305z00_68)
	{
		{	/* Ieee/input.scm 423 */
			{	/* Ieee/input.scm 423 */
				obj_t BgL_g1307z00_3409;
				obj_t BgL_g1308z00_3410;
				obj_t BgL_g1309z00_3411;

				BgL_g1307z00_3409 = VECTOR_REF(BgL_opt1305z00_68, ((long) 0));
				BgL_g1308z00_3410 = VECTOR_REF(BgL_opt1305z00_68, ((long) 1));
				BgL_g1309z00_3411 = VECTOR_REF(BgL_opt1305z00_68, ((long) 2));
				switch (VECTOR_LENGTH(BgL_opt1305z00_68))
					{
					case ((long) 3):

						{	/* Ieee/input.scm 424 */
							obj_t BgL_ipz00_3415;

							{	/* Ieee/input.scm 424 */
								obj_t BgL_res3921z00_6137;

								{	/* Ieee/input.scm 424 */
									obj_t BgL_tmpz00_9218;

									BgL_tmpz00_9218 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res3921z00_6137 =
										BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_9218);
								}
								BgL_ipz00_3415 = BgL_res3921z00_6137;
							}
							{	/* Ieee/input.scm 423 */

								{	/* Ieee/input.scm 423 */
									long BgL_auxz00_9237;
									long BgL_auxz00_9228;
									obj_t BgL_auxz00_9221;

									{	/* Ieee/input.scm 423 */
										obj_t BgL_tmpz00_9238;

										if (INTEGERP(BgL_g1309z00_3411))
											{	/* Ieee/input.scm 423 */
												BgL_tmpz00_9238 = BgL_g1309z00_3411;
											}
										else
											{
												obj_t BgL_auxz00_9241;

												BgL_auxz00_9241 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 16490)),
													BGl_string4305z00zz__r4_input_6_10_2z00,
													BGl_string4295z00zz__r4_input_6_10_2z00,
													BgL_g1309z00_3411);
												FAILURE(BgL_auxz00_9241, BFALSE, BFALSE);
											}
										BgL_auxz00_9237 = (long) CINT(BgL_tmpz00_9238);
									}
									{	/* Ieee/input.scm 423 */
										obj_t BgL_tmpz00_9229;

										if (INTEGERP(BgL_g1308z00_3410))
											{	/* Ieee/input.scm 423 */
												BgL_tmpz00_9229 = BgL_g1308z00_3410;
											}
										else
											{
												obj_t BgL_auxz00_9232;

												BgL_auxz00_9232 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 16490)),
													BGl_string4305z00zz__r4_input_6_10_2z00,
													BGl_string4295z00zz__r4_input_6_10_2z00,
													BgL_g1308z00_3410);
												FAILURE(BgL_auxz00_9232, BFALSE, BFALSE);
											}
										BgL_auxz00_9228 = (long) CINT(BgL_tmpz00_9229);
									}
									if (STRINGP(BgL_g1307z00_3409))
										{	/* Ieee/input.scm 423 */
											BgL_auxz00_9221 = BgL_g1307z00_3409;
										}
									else
										{
											obj_t BgL_auxz00_9224;

											BgL_auxz00_9224 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 16490)),
												BGl_string4305z00zz__r4_input_6_10_2z00,
												BGl_string4291z00zz__r4_input_6_10_2z00,
												BgL_g1307z00_3409);
											FAILURE(BgL_auxz00_9224, BFALSE, BFALSE);
										}
									return
										BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00
										(BgL_auxz00_9221, BgL_auxz00_9228, BgL_auxz00_9237,
										BgL_ipz00_3415);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/input.scm 423 */
							obj_t BgL_ipz00_3416;

							BgL_ipz00_3416 = VECTOR_REF(BgL_opt1305z00_68, ((long) 3));
							{	/* Ieee/input.scm 423 */

								{	/* Ieee/input.scm 423 */
									long BgL_auxz00_9264;
									long BgL_auxz00_9255;
									obj_t BgL_auxz00_9248;

									{	/* Ieee/input.scm 423 */
										obj_t BgL_tmpz00_9265;

										if (INTEGERP(BgL_g1309z00_3411))
											{	/* Ieee/input.scm 423 */
												BgL_tmpz00_9265 = BgL_g1309z00_3411;
											}
										else
											{
												obj_t BgL_auxz00_9268;

												BgL_auxz00_9268 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 16490)),
													BGl_string4305z00zz__r4_input_6_10_2z00,
													BGl_string4295z00zz__r4_input_6_10_2z00,
													BgL_g1309z00_3411);
												FAILURE(BgL_auxz00_9268, BFALSE, BFALSE);
											}
										BgL_auxz00_9264 = (long) CINT(BgL_tmpz00_9265);
									}
									{	/* Ieee/input.scm 423 */
										obj_t BgL_tmpz00_9256;

										if (INTEGERP(BgL_g1308z00_3410))
											{	/* Ieee/input.scm 423 */
												BgL_tmpz00_9256 = BgL_g1308z00_3410;
											}
										else
											{
												obj_t BgL_auxz00_9259;

												BgL_auxz00_9259 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 16490)),
													BGl_string4305z00zz__r4_input_6_10_2z00,
													BGl_string4295z00zz__r4_input_6_10_2z00,
													BgL_g1308z00_3410);
												FAILURE(BgL_auxz00_9259, BFALSE, BFALSE);
											}
										BgL_auxz00_9255 = (long) CINT(BgL_tmpz00_9256);
									}
									if (STRINGP(BgL_g1307z00_3409))
										{	/* Ieee/input.scm 423 */
											BgL_auxz00_9248 = BgL_g1307z00_3409;
										}
									else
										{
											obj_t BgL_auxz00_9251;

											BgL_auxz00_9251 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 16490)),
												BGl_string4305z00zz__r4_input_6_10_2z00,
												BGl_string4291z00zz__r4_input_6_10_2z00,
												BgL_g1307z00_3409);
											FAILURE(BgL_auxz00_9251, BFALSE, BFALSE);
										}
									return
										BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00
										(BgL_auxz00_9248, BgL_auxz00_9255, BgL_auxz00_9264,
										BgL_ipz00_3416);
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



/* unread-substring! */
	BGL_EXPORTED_DEF obj_t
		BGl_unreadzd2substringz12zc0zz__r4_input_6_10_2z00(obj_t BgL_strz00_64,
		long BgL_fromz00_65, long BgL_toz00_66, obj_t BgL_ipz00_67)
	{
		{	/* Ieee/input.scm 423 */
			{	/* Ieee/input.scm 425 */
				bool_t BgL_test4596z00_9276;

				if ((BgL_toz00_66 >= BgL_fromz00_65))
					{	/* Ieee/input.scm 425 */
						if ((BgL_fromz00_65 < ((long) 0)))
							{	/* Ieee/input.scm 426 */
								BgL_test4596z00_9276 = ((bool_t) 1);
							}
						else
							{	/* Ieee/input.scm 426 */
								BgL_test4596z00_9276 =
									(BgL_toz00_66 > STRING_LENGTH(BgL_strz00_64));
							}
					}
				else
					{	/* Ieee/input.scm 425 */
						BgL_test4596z00_9276 = ((bool_t) 1);
					}
				if (BgL_test4596z00_9276)
					{	/* Ieee/input.scm 428 */
						BgL_z62iozd2errorzb0_bglt BgL_arg2538z00_3421;

						{	/* Ieee/input.scm 428 */
							BgL_z62iozd2errorzb0_bglt BgL_new1134z00_3422;

							{	/* Ieee/input.scm 428 */
								BgL_z62iozd2errorzb0_bglt BgL_new1133z00_3429;

								BgL_new1133z00_3429 =
									((BgL_z62iozd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_z62iozd2errorzb0_bgl))));
								{	/* Ieee/input.scm 428 */
									long BgL_arg2548z00_3430;

									{	/* Ieee/input.scm 428 */
										long BgL_res3926z00_6149;

										BgL_res3926z00_6149 =
											BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00);
										BgL_arg2548z00_3430 = BgL_res3926z00_6149;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1133z00_3429),
										BgL_arg2548z00_3430);
								}
								BgL_new1134z00_3422 = BgL_new1133z00_3429;
							}
							((((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt) BgL_new1134z00_3422)))->
									BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
							((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
												BgL_new1134z00_3422)))->BgL_locationz00) =
								((obj_t) BFALSE), BUNSPEC);
							{
								obj_t BgL_auxz00_9291;

								{	/* Ieee/input.scm 428 */
									obj_t BgL_arg2539z00_3423;

									{	/* Ieee/input.scm 428 */
										obj_t BgL_arg2541z00_3424;

										{	/* Ieee/input.scm 428 */
											obj_t BgL_res3927z00_6153;

											{	/* Ieee/input.scm 428 */
												obj_t BgL_classz00_6152;

												BgL_classz00_6152 = BGl_z62iozd2errorzb0zz__objectz00;
												BgL_res3927z00_6153 =
													BGL_CLASS_ALL_FIELDS(BgL_classz00_6152);
											}
											BgL_arg2541z00_3424 = BgL_res3927z00_6153;
										}
										BgL_arg2539z00_3423 =
											VECTOR_REF(BgL_arg2541z00_3424, ((long) 2));
									}
									BgL_auxz00_9291 =
										BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
										(BgL_arg2539z00_3423);
								}
								((((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt) BgL_new1134z00_3422)))->
										BgL_stackz00) = ((obj_t) BgL_auxz00_9291), BUNSPEC);
							}
							((((BgL_z62errorz62_bglt) COBJECT(
											((BgL_z62errorz62_bglt) BgL_new1134z00_3422)))->
									BgL_procz00) =
								((obj_t) BGl_symbol4306z00zz__r4_input_6_10_2z00), BUNSPEC);
							((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
												BgL_new1134z00_3422)))->BgL_msgz00) =
								((obj_t) BGl_string4308z00zz__r4_input_6_10_2z00), BUNSPEC);
							{
								obj_t BgL_auxz00_9301;

								{	/* Ieee/input.scm 431 */
									long BgL_arg2542z00_3425;

									BgL_arg2542z00_3425 = STRING_LENGTH(BgL_strz00_64);
									{	/* Ieee/input.scm 431 */
										obj_t BgL_list2543z00_3426;

										{	/* Ieee/input.scm 431 */
											obj_t BgL_arg2544z00_3427;

											{	/* Ieee/input.scm 431 */
												obj_t BgL_arg2545z00_3428;

												BgL_arg2545z00_3428 =
													MAKE_YOUNG_PAIR(BINT(BgL_arg2542z00_3425), BNIL);
												BgL_arg2544z00_3427 =
													MAKE_YOUNG_PAIR(BINT(BgL_toz00_66),
													BgL_arg2545z00_3428);
											}
											BgL_list2543z00_3426 =
												MAKE_YOUNG_PAIR(BINT(BgL_fromz00_65),
												BgL_arg2544z00_3427);
										}
										BgL_auxz00_9301 = BgL_list2543z00_3426;
								}}
								((((BgL_z62errorz62_bglt) COBJECT(
												((BgL_z62errorz62_bglt) BgL_new1134z00_3422)))->
										BgL_objz00) = ((obj_t) BgL_auxz00_9301), BUNSPEC);
							}
							BgL_arg2538z00_3421 = BgL_new1134z00_3422;
						}
						BGl_raisez00zz__errorz00(((obj_t) BgL_arg2538z00_3421));
					}
				else
					{	/* Ieee/input.scm 425 */
						BFALSE;
					}
			}
			{	/* Ieee/input.scm 432 */
				bool_t BgL_test4599z00_9313;

				{	/* Ieee/input.scm 432 */
					bool_t BgL_res3930z00_6162;

					BgL_res3930z00_6162 =
						rgc_buffer_insert_substring(
						((obj_t) BgL_ipz00_67), BgL_strz00_64, BgL_fromz00_65,
						BgL_toz00_66);
					BgL_test4599z00_9313 = BgL_res3930z00_6162;
				}
				if (BgL_test4599z00_9313)
					{	/* Ieee/input.scm 432 */
						return BFALSE;
					}
				else
					{	/* Ieee/input.scm 433 */
						BgL_z62iozd2errorzb0_bglt BgL_arg2554z00_3435;

						{	/* Ieee/input.scm 433 */
							BgL_z62iozd2errorzb0_bglt BgL_new1136z00_3436;

							{	/* Ieee/input.scm 433 */
								BgL_z62iozd2errorzb0_bglt BgL_new1135z00_3439;

								BgL_new1135z00_3439 =
									((BgL_z62iozd2errorzb0_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_z62iozd2errorzb0_bgl))));
								{	/* Ieee/input.scm 433 */
									long BgL_arg2559z00_3440;

									{	/* Ieee/input.scm 433 */
										long BgL_res3931z00_6164;

										BgL_res3931z00_6164 =
											BGL_CLASS_INDEX(BGl_z62iozd2errorzb0zz__objectz00);
										BgL_arg2559z00_3440 = BgL_res3931z00_6164;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1135z00_3439),
										BgL_arg2559z00_3440);
								}
								BgL_new1136z00_3436 = BgL_new1135z00_3439;
							}
							((((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt) BgL_new1136z00_3436)))->
									BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
							((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
												BgL_new1136z00_3436)))->BgL_locationz00) =
								((obj_t) BFALSE), BUNSPEC);
							{
								obj_t BgL_auxz00_9324;

								{	/* Ieee/input.scm 433 */
									obj_t BgL_arg2556z00_3437;

									{	/* Ieee/input.scm 433 */
										obj_t BgL_arg2558z00_3438;

										{	/* Ieee/input.scm 433 */
											obj_t BgL_res3932z00_6168;

											{	/* Ieee/input.scm 433 */
												obj_t BgL_classz00_6167;

												BgL_classz00_6167 = BGl_z62iozd2errorzb0zz__objectz00;
												BgL_res3932z00_6168 =
													BGL_CLASS_ALL_FIELDS(BgL_classz00_6167);
											}
											BgL_arg2558z00_3438 = BgL_res3932z00_6168;
										}
										BgL_arg2556z00_3437 =
											VECTOR_REF(BgL_arg2558z00_3438, ((long) 2));
									}
									BgL_auxz00_9324 =
										BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
										(BgL_arg2556z00_3437);
								}
								((((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt) BgL_new1136z00_3436)))->
										BgL_stackz00) = ((obj_t) BgL_auxz00_9324), BUNSPEC);
							}
							((((BgL_z62errorz62_bglt) COBJECT(
											((BgL_z62errorz62_bglt) BgL_new1136z00_3436)))->
									BgL_procz00) =
								((obj_t) BGl_symbol4309z00zz__r4_input_6_10_2z00), BUNSPEC);
							((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
												BgL_new1136z00_3436)))->BgL_msgz00) =
								((obj_t) BGl_string4304z00zz__r4_input_6_10_2z00), BUNSPEC);
							((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
												BgL_new1136z00_3436)))->BgL_objz00) =
								((obj_t) BgL_strz00_64), BUNSPEC);
							BgL_arg2554z00_3435 = BgL_new1136z00_3436;
						}
						return BGl_raisez00zz__errorz00(((obj_t) BgL_arg2554z00_3435));
					}
			}
		}

	}



/* port->string-list */
	BGL_EXPORTED_DEF obj_t
		BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(obj_t BgL_ipz00_70)
	{
		{	/* Ieee/input.scm 441 */
			{
				obj_t BgL_resz00_6179;

				BgL_resz00_6179 = BNIL;
			BgL_loopz00_6178:
				{	/* Ieee/input.scm 443 */
					obj_t BgL_expz00_6183;

					BgL_expz00_6183 =
						BGl_z62zc3z04anonymousza31392ze3ze5zz__r4_input_6_10_2z00
						(BGl_za2readzd2ofzd2stringszd2grammarza2zd2zz__r4_input_6_10_2z00,
						BgL_ipz00_70);
					{	/* Ieee/input.scm 444 */
						bool_t BgL_test4600z00_9342;

						{	/* Ieee/input.scm 444 */
							bool_t BgL_res3935z00_6186;

							BgL_res3935z00_6186 = EOF_OBJECTP(BgL_expz00_6183);
							BgL_test4600z00_9342 = BgL_res3935z00_6186;
						}
						if (BgL_test4600z00_9342)
							{	/* Ieee/input.scm 444 */
								return bgl_reverse_bang(BgL_resz00_6179);
							}
						else
							{	/* Ieee/input.scm 446 */
								obj_t BgL_arg2562z00_6185;

								BgL_arg2562z00_6185 =
									MAKE_YOUNG_PAIR(BgL_expz00_6183, BgL_resz00_6179);
								{
									obj_t BgL_resz00_9346;

									BgL_resz00_9346 = BgL_arg2562z00_6185;
									BgL_resz00_6179 = BgL_resz00_9346;
									goto BgL_loopz00_6178;
								}
							}
					}
				}
			}
		}

	}



/* &port->string-list */
	obj_t BGl_z62portzd2ze3stringzd2listz81zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_7001, obj_t BgL_ipz00_7002)
	{
		{	/* Ieee/input.scm 441 */
			{	/* Ieee/input.scm 442 */
				obj_t BgL_auxz00_9347;

				if (INPUT_PORTP(BgL_ipz00_7002))
					{	/* Ieee/input.scm 442 */
						BgL_auxz00_9347 = BgL_ipz00_7002;
					}
				else
					{
						obj_t BgL_auxz00_9350;

						BgL_auxz00_9350 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string4279z00zz__r4_input_6_10_2z00, BINT(((long) 17251)),
							BGl_string4311z00zz__r4_input_6_10_2z00,
							BGl_string4282z00zz__r4_input_6_10_2z00, BgL_ipz00_7002);
						FAILURE(BgL_auxz00_9350, BFALSE, BFALSE);
					}
				return
					BGl_portzd2ze3stringzd2listze3zz__r4_input_6_10_2z00(BgL_auxz00_9347);
			}
		}

	}



/* %sendchars */
	int BGl_z52sendcharsz52zz__r4_input_6_10_2z00(obj_t BgL_ipz00_71,
		obj_t BgL_opz00_72, long BgL_sza7za7_73, long BgL_offsetz00_74)
	{
		{	/* Ieee/input.scm 455 */
			if ((BgL_offsetz00_74 >= ((long) 0)))
				{	/* Ieee/input.scm 456 */
					BGl_setzd2inputzd2portzd2positionz12zc0zz__r4_ports_6_10_1z00
						(BgL_ipz00_71, BgL_offsetz00_74);
				}
			else
				{	/* Ieee/input.scm 456 */
					BFALSE;
				}
			{	/* Ieee/input.scm 457 */
				long BgL_bufsiza7eza7_3450;

				if ((BgL_sza7za7_73 == ((long) -1)))
					{	/* Ieee/input.scm 458 */
						BgL_bufsiza7eza7_3450 = BGL_INPUT_PORT_BUFSIZ(BgL_ipz00_71);
					}
				else
					{	/* Ieee/input.scm 458 */
						if ((default_io_bufsiz < BgL_sza7za7_73))
							{	/* Ieee/input.scm 460 */
								BgL_bufsiza7eza7_3450 = default_io_bufsiz;
							}
						else
							{	/* Ieee/input.scm 460 */
								BgL_bufsiza7eza7_3450 = BgL_sza7za7_73;
							}
					}
				{	/* Ieee/input.scm 457 */
					obj_t BgL_bufz00_3451;

					{	/* Ieee/string.scm 168 */

						BgL_bufz00_3451 =
							make_string(BgL_bufsiza7eza7_3450, ((unsigned char) ' '));
					}
					{	/* Ieee/input.scm 466 */

						if ((BgL_sza7za7_73 < ((long) 0)))
							{
								long BgL_charszd2readzd2_3456;

								{	/* Ieee/input.scm 468 */
									long BgL_tmpz00_9366;

									BgL_charszd2readzd2_3456 = ((long) 0);
								BgL_zc3z04anonymousza32565ze3z87_3457:
									{	/* Ieee/input.scm 469 */
										obj_t BgL_nz00_3458;

										BgL_nz00_3458 =
											BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
											(BgL_bufz00_3451, BINT(BgL_bufsiza7eza7_3450),
											BgL_ipz00_71);
										if (((long) CINT(BgL_nz00_3458) == ((long) 0)))
											{	/* Ieee/input.scm 470 */
												bgl_flush_output_port(BgL_opz00_72);
												BgL_tmpz00_9366 = BgL_charszd2readzd2_3456;
											}
										else
											{	/* Ieee/input.scm 474 */
												obj_t BgL_sz00_3460;

												if (
													((long) CINT(BgL_nz00_3458) < BgL_bufsiza7eza7_3450))
													{	/* Ieee/input.scm 474 */
														BgL_sz00_3460 =
															c_substring(BgL_bufz00_3451, ((long) 0),
															(long) CINT(BgL_nz00_3458));
													}
												else
													{	/* Ieee/input.scm 474 */
														BgL_sz00_3460 = BgL_bufz00_3451;
													}
												bgl_display_obj(BgL_sz00_3460, BgL_opz00_72);
												{
													long BgL_charszd2readzd2_9379;

													BgL_charszd2readzd2_9379 =
														(BgL_charszd2readzd2_3456 +
														(long) CINT(BgL_nz00_3458));
													BgL_charszd2readzd2_3456 = BgL_charszd2readzd2_9379;
													goto BgL_zc3z04anonymousza32565ze3z87_3457;
												}
											}
									}
									return (int) (BgL_tmpz00_9366);
							}}
						else
							{
								long BgL_charszd2readzd2_3465;
								long BgL_charszd2tozd2readz00_3466;
								long BgL_sza7za7_3467;

								{	/* Ieee/input.scm 477 */
									long BgL_tmpz00_9383;

									BgL_charszd2readzd2_3465 = ((long) 0);
									BgL_charszd2tozd2readz00_3466 = BgL_bufsiza7eza7_3450;
									BgL_sza7za7_3467 = BgL_sza7za7_73;
								BgL_zc3z04anonymousza32569ze3z87_3468:
									if ((BgL_charszd2tozd2readz00_3466 == ((long) 0)))
										{	/* Ieee/input.scm 480 */
											BgL_tmpz00_9383 = BgL_charszd2readzd2_3465;
										}
									else
										{	/* Ieee/input.scm 482 */
											obj_t BgL_nz00_3470;

											BgL_nz00_3470 =
												BGl_readzd2charsz12zc0zz__r4_input_6_10_2z00
												(BgL_bufz00_3451, BINT(BgL_charszd2tozd2readz00_3466),
												BgL_ipz00_71);
											if (((long) CINT(BgL_nz00_3470) == ((long) 0)))
												{	/* Ieee/input.scm 483 */
													bgl_flush_output_port(BgL_opz00_72);
													BgL_tmpz00_9383 = BgL_charszd2readzd2_3465;
												}
											else
												{	/* Ieee/input.scm 487 */
													obj_t BgL_sz00_3472;

													if (
														((long) CINT(BgL_nz00_3470) <
															BgL_bufsiza7eza7_3450))
														{	/* Ieee/input.scm 487 */
															BgL_sz00_3472 =
																c_substring(BgL_bufz00_3451, ((long) 0),
																(long) CINT(BgL_nz00_3470));
														}
													else
														{	/* Ieee/input.scm 487 */
															BgL_sz00_3472 = BgL_bufz00_3451;
														}
													bgl_display_obj(BgL_sz00_3472, BgL_opz00_72);
													{	/* Ieee/input.scm 489 */
														long BgL_sza7za7_3473;

														BgL_sza7za7_3473 =
															(BgL_sza7za7_3467 - (long) CINT(BgL_nz00_3470));
														{	/* Ieee/input.scm 489 */
															long BgL_ctrz00_3474;

															if ((BgL_sza7za7_3473 < BgL_bufsiza7eza7_3450))
																{	/* Ieee/input.scm 490 */
																	BgL_ctrz00_3474 = BgL_sza7za7_3473;
																}
															else
																{	/* Ieee/input.scm 490 */
																	BgL_ctrz00_3474 = BgL_bufsiza7eza7_3450;
																}
															{	/* Ieee/input.scm 490 */

																{
																	long BgL_sza7za7_9406;
																	long BgL_charszd2tozd2readz00_9405;
																	long BgL_charszd2readzd2_9402;

																	BgL_charszd2readzd2_9402 =
																		(BgL_charszd2readzd2_3465 +
																		(long) CINT(BgL_nz00_3470));
																	BgL_charszd2tozd2readz00_9405 =
																		BgL_ctrz00_3474;
																	BgL_sza7za7_9406 = BgL_sza7za7_3473;
																	BgL_sza7za7_3467 = BgL_sza7za7_9406;
																	BgL_charszd2tozd2readz00_3466 =
																		BgL_charszd2tozd2readz00_9405;
																	BgL_charszd2readzd2_3465 =
																		BgL_charszd2readzd2_9402;
																	goto BgL_zc3z04anonymousza32569ze3z87_3468;
																}
															}
														}
													}
												}
										}
									return (int) (BgL_tmpz00_9383);
		}}}}}}

	}



/* file->string */
	BGL_EXPORTED_DEF obj_t BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(obj_t
		BgL_pathz00_75)
	{
		{	/* Ieee/input.scm 496 */
			{	/* Ieee/input.scm 499 */
				obj_t BgL_iz00_3483;

				{	/* Ieee/string.scm 219 */

					BgL_iz00_3483 =
						BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_pathz00_75,
						BCHAR(((unsigned char) ':')), BINT(((long) 0)));
				}
				if (CBOOL(BgL_iz00_3483))
					{	/* Ieee/input.scm 503 */
						bool_t BgL_test4613z00_9413;

						{	/* Ieee/input.scm 503 */

							BgL_test4613z00_9413 =
								BGl_stringzd2prefixzf3z21zz__r4_strings_6_7z00
								(BGl_string4312z00zz__r4_input_6_10_2z00, BgL_pathz00_75,
								BFALSE, BFALSE, BFALSE, BFALSE);
						}
						if (BgL_test4613z00_9413)
							{	/* Ieee/input.scm 504 */
								obj_t BgL_arg2578z00_3491;

								BgL_arg2578z00_3491 =
									c_substring(BgL_pathz00_75, ((long) 5),
									STRING_LENGTH(BgL_pathz00_75));
								return
									bgl_file_to_string(BSTRING_TO_STRING(BgL_arg2578z00_3491));
							}
						else
							{	/* Ieee/input.scm 506 */
								obj_t BgL_ipz00_3493;

								{	/* Ieee/port.scm 440 */

									BgL_ipz00_3493 =
										BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
										(BgL_pathz00_75, BTRUE, BINT(((long) 5000000)));
								}
								{	/* Ieee/input.scm 507 */
									obj_t BgL_exitd1138z00_3494;

									BgL_exitd1138z00_3494 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Ieee/input.scm 509 */
										obj_t BgL_zc3z04anonymousza32580ze3z87_7003;

										BgL_zc3z04anonymousza32580ze3z87_7003 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza32580ze3ze5zz__r4_input_6_10_2z00,
											(int) (((long) 0)), (int) (((long) 1)));
										PROCEDURE_SET(BgL_zc3z04anonymousza32580ze3z87_7003,
											(int) (((long) 0)), BgL_ipz00_3493);
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1138z00_3494,
											BgL_zc3z04anonymousza32580ze3z87_7003);
										{	/* Ieee/input.scm 508 */
											obj_t BgL_tmp1140z00_3496;

											BgL_tmp1140z00_3496 =
												BGl_readzd2stringzd2zz__r4_input_6_10_2z00
												(BgL_ipz00_3493);
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1138z00_3494);
											bgl_close_input_port(((obj_t) BgL_ipz00_3493));
											return BgL_tmp1140z00_3496;
										}
									}
								}
							}
					}
				else
					{	/* Ieee/input.scm 501 */
						return bgl_file_to_string(BSTRING_TO_STRING(BgL_pathz00_75));
					}
			}
		}

	}



/* &file->string */
	obj_t BGl_z62filezd2ze3stringz53zz__r4_input_6_10_2z00(obj_t BgL_envz00_7004,
		obj_t BgL_pathz00_7005)
	{
		{	/* Ieee/input.scm 496 */
			{	/* Ieee/input.scm 499 */
				obj_t BgL_auxz00_9434;

				if (STRINGP(BgL_pathz00_7005))
					{	/* Ieee/input.scm 499 */
						BgL_auxz00_9434 = BgL_pathz00_7005;
					}
				else
					{
						obj_t BgL_auxz00_9437;

						BgL_auxz00_9437 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string4279z00zz__r4_input_6_10_2z00, BINT(((long) 19354)),
							BGl_string4313z00zz__r4_input_6_10_2z00,
							BGl_string4291z00zz__r4_input_6_10_2z00, BgL_pathz00_7005);
						FAILURE(BgL_auxz00_9437, BFALSE, BFALSE);
					}
				return BGl_filezd2ze3stringz31zz__r4_input_6_10_2z00(BgL_auxz00_9434);
			}
		}

	}



/* &<@anonymous:2580> */
	obj_t BGl_z62zc3z04anonymousza32580ze3ze5zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_7006)
	{
		{	/* Ieee/input.scm 507 */
			{	/* Ieee/input.scm 509 */
				obj_t BgL_ipz00_7007;

				BgL_ipz00_7007 = PROCEDURE_REF(BgL_envz00_7006, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_ipz00_7007));
			}
		}

	}



/* send-chars/size */
	BGL_EXPORTED_DEF long BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_76, obj_t BgL_opz00_77, long BgL_siza7eza7_78,
		long BgL_offsetz00_79)
	{
		{	/* Ieee/input.scm 519 */
			{	/* Ieee/input.scm 521 */
				long BgL_sza7za7_6237;
				long BgL_offz00_6238;

				{	/* Ieee/input.scm 521 */
					long BgL_res3954z00_6244;

					BgL_res3954z00_6244 = (long) (BgL_siza7eza7_78);
					BgL_sza7za7_6237 = BgL_res3954z00_6244;
				}
				{	/* Ieee/input.scm 522 */
					long BgL_res3955z00_6246;

					BgL_res3955z00_6246 = (long) (BgL_offsetz00_79);
					BgL_offz00_6238 = BgL_res3955z00_6246;
				}
				{	/* Ieee/input.scm 525 */
					obj_t BgL__ortest_1141z00_6239;

					BgL__ortest_1141z00_6239 =
						bgl_sendchars(BgL_ipz00_76, BgL_opz00_77, BgL_sza7za7_6237,
						BgL_offz00_6238);
					if (CBOOL(BgL__ortest_1141z00_6239))
						{	/* Ieee/input.scm 525 */
							return (long) CINT(BgL__ortest_1141z00_6239);
						}
					else
						{	/* Ieee/input.scm 527 */
							bool_t BgL_test4616z00_9452;

							if (INPUT_GZIP_PORTP(BgL_ipz00_76))
								{	/* Ieee/input.scm 527 */
									if ((BgL_sza7za7_6237 == ((long) -1)))
										{	/* Ieee/input.scm 527 */
											BgL_test4616z00_9452 = (BgL_offz00_6238 == ((long) -1));
										}
									else
										{	/* Ieee/input.scm 527 */
											BgL_test4616z00_9452 = ((bool_t) 0);
										}
								}
							else
								{	/* Ieee/input.scm 527 */
									BgL_test4616z00_9452 = ((bool_t) 0);
								}
							if (BgL_test4616z00_9452)
								{	/* Ieee/input.scm 527 */
									return
										(long)
										CINT(BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7
										(BgL_ipz00_76, BgL_opz00_77));
								}
							else
								{	/* Ieee/input.scm 527 */
									return
										(long) (BGl_z52sendcharsz52zz__r4_input_6_10_2z00
										(BgL_ipz00_76, BgL_opz00_77, BgL_sza7za7_6237,
											BgL_offz00_6238));
		}}}}}

	}



/* &send-chars/size */
	obj_t BGl_z62sendzd2charszf2siza7eze5zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_7008, obj_t BgL_ipz00_7009, obj_t BgL_opz00_7010,
		obj_t BgL_siza7eza7_7011, obj_t BgL_offsetz00_7012)
	{
		{	/* Ieee/input.scm 519 */
			{	/* Ieee/input.scm 521 */
				long BgL_tmpz00_9462;

				{	/* Ieee/input.scm 521 */
					long BgL_auxz00_9486;
					long BgL_auxz00_9477;
					obj_t BgL_auxz00_9470;
					obj_t BgL_auxz00_9463;

					{	/* Ieee/input.scm 521 */
						obj_t BgL_tmpz00_9487;

						if (ELONGP(BgL_offsetz00_7012))
							{	/* Ieee/input.scm 521 */
								BgL_tmpz00_9487 = BgL_offsetz00_7012;
							}
						else
							{
								obj_t BgL_auxz00_9490;

								BgL_auxz00_9490 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4279z00zz__r4_input_6_10_2z00,
									BINT(((long) 20115)), BGl_string4314z00zz__r4_input_6_10_2z00,
									BGl_string4316z00zz__r4_input_6_10_2z00, BgL_offsetz00_7012);
								FAILURE(BgL_auxz00_9490, BFALSE, BFALSE);
							}
						BgL_auxz00_9486 = BELONG_TO_LONG(BgL_tmpz00_9487);
					}
					{	/* Ieee/input.scm 521 */
						obj_t BgL_tmpz00_9478;

						if (ELONGP(BgL_siza7eza7_7011))
							{	/* Ieee/input.scm 521 */
								BgL_tmpz00_9478 = BgL_siza7eza7_7011;
							}
						else
							{
								obj_t BgL_auxz00_9481;

								BgL_auxz00_9481 =
									BGl_typezd2errorzd2zz__errorz00
									(BGl_string4279z00zz__r4_input_6_10_2z00,
									BINT(((long) 20115)), BGl_string4314z00zz__r4_input_6_10_2z00,
									BGl_string4316z00zz__r4_input_6_10_2z00, BgL_siza7eza7_7011);
								FAILURE(BgL_auxz00_9481, BFALSE, BFALSE);
							}
						BgL_auxz00_9477 = BELONG_TO_LONG(BgL_tmpz00_9478);
					}
					if (OUTPUT_PORTP(BgL_opz00_7010))
						{	/* Ieee/input.scm 521 */
							BgL_auxz00_9470 = BgL_opz00_7010;
						}
					else
						{
							obj_t BgL_auxz00_9473;

							BgL_auxz00_9473 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string4279z00zz__r4_input_6_10_2z00, BINT(((long) 20115)),
								BGl_string4314z00zz__r4_input_6_10_2z00,
								BGl_string4315z00zz__r4_input_6_10_2z00, BgL_opz00_7010);
							FAILURE(BgL_auxz00_9473, BFALSE, BFALSE);
						}
					if (INPUT_PORTP(BgL_ipz00_7009))
						{	/* Ieee/input.scm 521 */
							BgL_auxz00_9463 = BgL_ipz00_7009;
						}
					else
						{
							obj_t BgL_auxz00_9466;

							BgL_auxz00_9466 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string4279z00zz__r4_input_6_10_2z00, BINT(((long) 20115)),
								BGl_string4314z00zz__r4_input_6_10_2z00,
								BGl_string4282z00zz__r4_input_6_10_2z00, BgL_ipz00_7009);
							FAILURE(BgL_auxz00_9466, BFALSE, BFALSE);
						}
					BgL_tmpz00_9462 =
						BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00(BgL_auxz00_9463,
						BgL_auxz00_9470, BgL_auxz00_9477, BgL_auxz00_9486);
				}
				return BINT(BgL_tmpz00_9462);
			}
		}

	}



/* _send-chars */
	obj_t BGl__sendzd2charszd2zz__r4_input_6_10_2z00(obj_t BgL_env1313z00_85,
		obj_t BgL_opt1312z00_84)
	{
		{	/* Ieee/input.scm 541 */
			{	/* Ieee/input.scm 541 */
				obj_t BgL_g1314z00_3519;
				obj_t BgL_g1315z00_3520;

				BgL_g1314z00_3519 = VECTOR_REF(BgL_opt1312z00_84, ((long) 0));
				BgL_g1315z00_3520 = VECTOR_REF(BgL_opt1312z00_84, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1312z00_84))
					{
					case ((long) 2):

						{	/* Ieee/input.scm 541 */

							{	/* Ieee/input.scm 541 */
								long BgL_res3964z00_6267;

								{	/* Ieee/input.scm 541 */
									obj_t BgL_ipz00_6251;
									obj_t BgL_opz00_6252;

									if (INPUT_PORTP(BgL_g1314z00_3519))
										{	/* Ieee/input.scm 541 */
											BgL_ipz00_6251 = BgL_g1314z00_3519;
										}
									else
										{
											obj_t BgL_auxz00_9501;

											BgL_auxz00_9501 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 20782)),
												BGl_string4317z00zz__r4_input_6_10_2z00,
												BGl_string4282z00zz__r4_input_6_10_2z00,
												BgL_g1314z00_3519);
											FAILURE(BgL_auxz00_9501, BFALSE, BFALSE);
										}
									if (OUTPUT_PORTP(BgL_g1315z00_3520))
										{	/* Ieee/input.scm 541 */
											BgL_opz00_6252 = BgL_g1315z00_3520;
										}
									else
										{
											obj_t BgL_auxz00_9507;

											BgL_auxz00_9507 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 20782)),
												BGl_string4317z00zz__r4_input_6_10_2z00,
												BGl_string4315z00zz__r4_input_6_10_2z00,
												BgL_g1315z00_3520);
											FAILURE(BgL_auxz00_9507, BFALSE, BFALSE);
										}
									{	/* Ieee/input.scm 543 */
										long BgL_sza7za7_6253;
										long BgL_offz00_6254;

										{	/* Ieee/input.scm 544 */
											long BgL_res3959z00_6261;

											BgL_res3959z00_6261 = (long) (((long) -1));
											BgL_sza7za7_6253 = BgL_res3959z00_6261;
										}
										{	/* Ieee/input.scm 548 */
											long BgL_res3962z00_6265;

											BgL_res3962z00_6265 = (long) (((long) -1));
											BgL_offz00_6254 = BgL_res3962z00_6265;
										}
										BgL_res3964z00_6267 =
											BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00
											(BgL_ipz00_6251, BgL_opz00_6252, BgL_sza7za7_6253,
											BgL_offz00_6254);
								}}
								return BINT(BgL_res3964z00_6267);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/input.scm 541 */
							obj_t BgL_siza7eza7_3526;

							BgL_siza7eza7_3526 = VECTOR_REF(BgL_opt1312z00_84, ((long) 2));
							{	/* Ieee/input.scm 541 */

								{	/* Ieee/input.scm 541 */
									long BgL_res3971z00_6284;

									{	/* Ieee/input.scm 541 */
										obj_t BgL_ipz00_6268;
										obj_t BgL_opz00_6269;

										if (INPUT_PORTP(BgL_g1314z00_3519))
											{	/* Ieee/input.scm 541 */
												BgL_ipz00_6268 = BgL_g1314z00_3519;
											}
										else
											{
												obj_t BgL_auxz00_9518;

												BgL_auxz00_9518 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 20782)),
													BGl_string4317z00zz__r4_input_6_10_2z00,
													BGl_string4282z00zz__r4_input_6_10_2z00,
													BgL_g1314z00_3519);
												FAILURE(BgL_auxz00_9518, BFALSE, BFALSE);
											}
										if (OUTPUT_PORTP(BgL_g1315z00_3520))
											{	/* Ieee/input.scm 541 */
												BgL_opz00_6269 = BgL_g1315z00_3520;
											}
										else
											{
												obj_t BgL_auxz00_9524;

												BgL_auxz00_9524 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 20782)),
													BGl_string4317z00zz__r4_input_6_10_2z00,
													BGl_string4315z00zz__r4_input_6_10_2z00,
													BgL_g1315z00_3520);
												FAILURE(BgL_auxz00_9524, BFALSE, BFALSE);
											}
										{	/* Ieee/input.scm 543 */
											long BgL_sza7za7_6270;
											long BgL_offz00_6271;

											if (INTEGERP(BgL_siza7eza7_3526))
												{	/* Ieee/input.scm 544 */
													long BgL_res3966z00_6278;

													{	/* Ieee/input.scm 544 */
														long BgL_tmpz00_9530;

														BgL_tmpz00_9530 = (long) CINT(BgL_siza7eza7_3526);
														BgL_res3966z00_6278 = (long) (BgL_tmpz00_9530);
													}
													BgL_sza7za7_6270 = BgL_res3966z00_6278;
												}
											else
												{	/* Ieee/input.scm 544 */
													if (ELONGP(BgL_siza7eza7_3526))
														{	/* Ieee/input.scm 545 */
															BgL_sza7za7_6270 =
																BELONG_TO_LONG(BgL_siza7eza7_3526);
														}
													else
														{	/* Ieee/input.scm 546 */
															obj_t BgL_tmpz00_9536;

															{	/* Ieee/input.scm 546 */
																obj_t BgL_aux4220z00_7108;

																BgL_aux4220z00_7108 =
																	BGl_errorz00zz__errorz00
																	(BGl_symbol4318z00zz__r4_input_6_10_2z00,
																	BGl_string4320z00zz__r4_input_6_10_2z00,
																	BgL_siza7eza7_3526);
																if (ELONGP(BgL_aux4220z00_7108))
																	{	/* Ieee/input.scm 546 */
																		BgL_tmpz00_9536 = BgL_aux4220z00_7108;
																	}
																else
																	{
																		obj_t BgL_auxz00_9540;

																		BgL_auxz00_9540 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string4279z00zz__r4_input_6_10_2z00,
																			BINT(((long) 20996)),
																			BGl_string4317z00zz__r4_input_6_10_2z00,
																			BGl_string4316z00zz__r4_input_6_10_2z00,
																			BgL_aux4220z00_7108);
																		FAILURE(BgL_auxz00_9540, BFALSE, BFALSE);
															}}
															BgL_sza7za7_6270 =
																BELONG_TO_LONG(BgL_tmpz00_9536);
												}}
											{	/* Ieee/input.scm 548 */
												long BgL_res3969z00_6282;

												BgL_res3969z00_6282 = (long) (((long) -1));
												BgL_offz00_6271 = BgL_res3969z00_6282;
											}
											BgL_res3971z00_6284 =
												BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00
												(BgL_ipz00_6268, BgL_opz00_6269, BgL_sza7za7_6270,
												BgL_offz00_6271);
									}}
									return BINT(BgL_res3971z00_6284);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/input.scm 541 */
							obj_t BgL_siza7eza7_3528;

							BgL_siza7eza7_3528 = VECTOR_REF(BgL_opt1312z00_84, ((long) 2));
							{	/* Ieee/input.scm 541 */
								obj_t BgL_offsetz00_3529;

								BgL_offsetz00_3529 = VECTOR_REF(BgL_opt1312z00_84, ((long) 3));
								{	/* Ieee/input.scm 541 */

									{	/* Ieee/input.scm 541 */
										long BgL_res3978z00_6301;

										{	/* Ieee/input.scm 541 */
											obj_t BgL_ipz00_6285;
											obj_t BgL_opz00_6286;

											if (INPUT_PORTP(BgL_g1314z00_3519))
												{	/* Ieee/input.scm 541 */
													BgL_ipz00_6285 = BgL_g1314z00_3519;
												}
											else
												{
													obj_t BgL_auxz00_9552;

													BgL_auxz00_9552 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4279z00zz__r4_input_6_10_2z00,
														BINT(((long) 20782)),
														BGl_string4317z00zz__r4_input_6_10_2z00,
														BGl_string4282z00zz__r4_input_6_10_2z00,
														BgL_g1314z00_3519);
													FAILURE(BgL_auxz00_9552, BFALSE, BFALSE);
												}
											if (OUTPUT_PORTP(BgL_g1315z00_3520))
												{	/* Ieee/input.scm 541 */
													BgL_opz00_6286 = BgL_g1315z00_3520;
												}
											else
												{
													obj_t BgL_auxz00_9558;

													BgL_auxz00_9558 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4279z00zz__r4_input_6_10_2z00,
														BINT(((long) 20782)),
														BGl_string4317z00zz__r4_input_6_10_2z00,
														BGl_string4315z00zz__r4_input_6_10_2z00,
														BgL_g1315z00_3520);
													FAILURE(BgL_auxz00_9558, BFALSE, BFALSE);
												}
											{	/* Ieee/input.scm 543 */
												long BgL_sza7za7_6287;
												long BgL_offz00_6288;

												if (INTEGERP(BgL_siza7eza7_3528))
													{	/* Ieee/input.scm 544 */
														long BgL_res3973z00_6295;

														{	/* Ieee/input.scm 544 */
															long BgL_tmpz00_9564;

															BgL_tmpz00_9564 = (long) CINT(BgL_siza7eza7_3528);
															BgL_res3973z00_6295 = (long) (BgL_tmpz00_9564);
														}
														BgL_sza7za7_6287 = BgL_res3973z00_6295;
													}
												else
													{	/* Ieee/input.scm 544 */
														if (ELONGP(BgL_siza7eza7_3528))
															{	/* Ieee/input.scm 545 */
																BgL_sza7za7_6287 =
																	BELONG_TO_LONG(BgL_siza7eza7_3528);
															}
														else
															{	/* Ieee/input.scm 546 */
																obj_t BgL_tmpz00_9570;

																{	/* Ieee/input.scm 546 */
																	obj_t BgL_aux4226z00_7114;

																	BgL_aux4226z00_7114 =
																		BGl_errorz00zz__errorz00
																		(BGl_symbol4318z00zz__r4_input_6_10_2z00,
																		BGl_string4320z00zz__r4_input_6_10_2z00,
																		BgL_siza7eza7_3528);
																	if (ELONGP(BgL_aux4226z00_7114))
																		{	/* Ieee/input.scm 546 */
																			BgL_tmpz00_9570 = BgL_aux4226z00_7114;
																		}
																	else
																		{
																			obj_t BgL_auxz00_9574;

																			BgL_auxz00_9574 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string4279z00zz__r4_input_6_10_2z00,
																				BINT(((long) 20996)),
																				BGl_string4317z00zz__r4_input_6_10_2z00,
																				BGl_string4316z00zz__r4_input_6_10_2z00,
																				BgL_aux4226z00_7114);
																			FAILURE(BgL_auxz00_9574, BFALSE, BFALSE);
																}}
																BgL_sza7za7_6287 =
																	BELONG_TO_LONG(BgL_tmpz00_9570);
													}}
												if (INTEGERP(BgL_offsetz00_3529))
													{	/* Ieee/input.scm 548 */
														long BgL_res3976z00_6299;

														{	/* Ieee/input.scm 548 */
															long BgL_tmpz00_9581;

															BgL_tmpz00_9581 = (long) CINT(BgL_offsetz00_3529);
															BgL_res3976z00_6299 = (long) (BgL_tmpz00_9581);
														}
														BgL_offz00_6288 = BgL_res3976z00_6299;
													}
												else
													{	/* Ieee/input.scm 548 */
														if (ELONGP(BgL_offsetz00_3529))
															{	/* Ieee/input.scm 549 */
																BgL_offz00_6288 =
																	BELONG_TO_LONG(BgL_offsetz00_3529);
															}
														else
															{	/* Ieee/input.scm 550 */
																obj_t BgL_tmpz00_9587;

																{	/* Ieee/input.scm 550 */
																	obj_t BgL_aux4228z00_7116;

																	BgL_aux4228z00_7116 =
																		BGl_errorz00zz__errorz00
																		(BGl_symbol4318z00zz__r4_input_6_10_2z00,
																		BGl_string4321z00zz__r4_input_6_10_2z00,
																		BgL_offsetz00_3529);
																	if (ELONGP(BgL_aux4228z00_7116))
																		{	/* Ieee/input.scm 550 */
																			BgL_tmpz00_9587 = BgL_aux4228z00_7116;
																		}
																	else
																		{
																			obj_t BgL_auxz00_9591;

																			BgL_auxz00_9591 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string4279z00zz__r4_input_6_10_2z00,
																				BINT(((long) 21141)),
																				BGl_string4317z00zz__r4_input_6_10_2z00,
																				BGl_string4316z00zz__r4_input_6_10_2z00,
																				BgL_aux4228z00_7116);
																			FAILURE(BgL_auxz00_9591, BFALSE, BFALSE);
																}}
																BgL_offz00_6288 =
																	BELONG_TO_LONG(BgL_tmpz00_9587);
													}}
												BgL_res3978z00_6301 =
													BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00
													(BgL_ipz00_6285, BgL_opz00_6286, BgL_sza7za7_6287,
													BgL_offz00_6288);
										}}
										return BINT(BgL_res3978z00_6301);
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



/* send-chars */
	BGL_EXPORTED_DEF long BGl_sendzd2charszd2zz__r4_input_6_10_2z00(obj_t
		BgL_ipz00_80, obj_t BgL_opz00_81, obj_t BgL_siza7eza7_82,
		obj_t BgL_offsetz00_83)
	{
		{	/* Ieee/input.scm 541 */
			{	/* Ieee/input.scm 543 */
				long BgL_sza7za7_6302;
				long BgL_offz00_6303;

				if (INTEGERP(BgL_siza7eza7_82))
					{	/* Ieee/input.scm 544 */
						long BgL_res3980z00_6310;

						{	/* Ieee/input.scm 544 */
							long BgL_tmpz00_9602;

							BgL_tmpz00_9602 = (long) CINT(BgL_siza7eza7_82);
							BgL_res3980z00_6310 = (long) (BgL_tmpz00_9602);
						}
						BgL_sza7za7_6302 = BgL_res3980z00_6310;
					}
				else
					{	/* Ieee/input.scm 544 */
						if (ELONGP(BgL_siza7eza7_82))
							{	/* Ieee/input.scm 545 */
								BgL_sza7za7_6302 = BELONG_TO_LONG(BgL_siza7eza7_82);
							}
						else
							{	/* Ieee/input.scm 546 */
								obj_t BgL_tmpz00_9608;

								BgL_tmpz00_9608 =
									BGl_errorz00zz__errorz00
									(BGl_symbol4318z00zz__r4_input_6_10_2z00,
									BGl_string4320z00zz__r4_input_6_10_2z00, BgL_siza7eza7_82);
								BgL_sza7za7_6302 = BELONG_TO_LONG(BgL_tmpz00_9608);
							}
					}
				if (INTEGERP(BgL_offsetz00_83))
					{	/* Ieee/input.scm 548 */
						long BgL_res3983z00_6314;

						{	/* Ieee/input.scm 548 */
							long BgL_tmpz00_9613;

							BgL_tmpz00_9613 = (long) CINT(BgL_offsetz00_83);
							BgL_res3983z00_6314 = (long) (BgL_tmpz00_9613);
						}
						BgL_offz00_6303 = BgL_res3983z00_6314;
					}
				else
					{	/* Ieee/input.scm 548 */
						if (ELONGP(BgL_offsetz00_83))
							{	/* Ieee/input.scm 549 */
								BgL_offz00_6303 = BELONG_TO_LONG(BgL_offsetz00_83);
							}
						else
							{	/* Ieee/input.scm 550 */
								obj_t BgL_tmpz00_9619;

								BgL_tmpz00_9619 =
									BGl_errorz00zz__errorz00
									(BGl_symbol4318z00zz__r4_input_6_10_2z00,
									BGl_string4321z00zz__r4_input_6_10_2z00, BgL_offsetz00_83);
								BgL_offz00_6303 = BELONG_TO_LONG(BgL_tmpz00_9619);
							}
					}
				{	/* Ieee/input.scm 551 */
					long BgL_res3989z00_6334;

					{	/* Ieee/input.scm 521 */
						long BgL_sza7za7_6320;
						long BgL_offz00_6321;

						{	/* Ieee/input.scm 521 */
							long BgL_res3985z00_6327;

							BgL_res3985z00_6327 = (long) (BgL_sza7za7_6302);
							BgL_sza7za7_6320 = BgL_res3985z00_6327;
						}
						{	/* Ieee/input.scm 522 */
							long BgL_res3986z00_6329;

							BgL_res3986z00_6329 = (long) (BgL_offz00_6303);
							BgL_offz00_6321 = BgL_res3986z00_6329;
						}
						{	/* Ieee/input.scm 525 */
							obj_t BgL__ortest_1141z00_6322;

							BgL__ortest_1141z00_6322 =
								bgl_sendchars(BgL_ipz00_80, BgL_opz00_81, BgL_sza7za7_6320,
								BgL_offz00_6321);
							if (CBOOL(BgL__ortest_1141z00_6322))
								{	/* Ieee/input.scm 525 */
									BgL_res3989z00_6334 = (long) CINT(BgL__ortest_1141z00_6322);
								}
							else
								{	/* Ieee/input.scm 527 */
									bool_t BgL_test4643z00_9628;

									if (INPUT_GZIP_PORTP(BgL_ipz00_80))
										{	/* Ieee/input.scm 527 */
											if ((BgL_sza7za7_6320 == ((long) -1)))
												{	/* Ieee/input.scm 527 */
													BgL_test4643z00_9628 =
														(BgL_offz00_6321 == ((long) -1));
												}
											else
												{	/* Ieee/input.scm 527 */
													BgL_test4643z00_9628 = ((bool_t) 0);
												}
										}
									else
										{	/* Ieee/input.scm 527 */
											BgL_test4643z00_9628 = ((bool_t) 0);
										}
									if (BgL_test4643z00_9628)
										{	/* Ieee/input.scm 527 */
											BgL_res3989z00_6334 =
												(long)
												CINT(BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7
												(BgL_ipz00_80, BgL_opz00_81));
										}
									else
										{	/* Ieee/input.scm 527 */
											BgL_res3989z00_6334 =
												(long) (BGl_z52sendcharsz52zz__r4_input_6_10_2z00
												(BgL_ipz00_80, BgL_opz00_81, BgL_sza7za7_6320,
													BgL_offz00_6321));
					}}}}
					return BgL_res3989z00_6334;
				}
			}
		}

	}



/* _send-file */
	obj_t BGl__sendzd2filezd2zz__r4_input_6_10_2z00(obj_t BgL_env1319z00_91,
		obj_t BgL_opt1318z00_90)
	{
		{	/* Ieee/input.scm 556 */
			{	/* Ieee/input.scm 556 */
				obj_t BgL_filez00_3536;
				obj_t BgL_opz00_3537;

				BgL_filez00_3536 = VECTOR_REF(BgL_opt1318z00_90, ((long) 0));
				BgL_opz00_3537 = VECTOR_REF(BgL_opt1318z00_90, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1318z00_90))
					{
					case ((long) 2):

						{	/* Ieee/input.scm 556 */

							{	/* Ieee/input.scm 556 */
								long BgL_res3992z00_6355;

								{	/* Ieee/input.scm 556 */
									obj_t BgL_filez00_6335;
									obj_t BgL_opz00_6336;

									if (STRINGP(BgL_filez00_3536))
										{	/* Ieee/input.scm 556 */
											BgL_filez00_6335 = BgL_filez00_3536;
										}
									else
										{
											obj_t BgL_auxz00_9642;

											BgL_auxz00_9642 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 21451)),
												BGl_string4322z00zz__r4_input_6_10_2z00,
												BGl_string4291z00zz__r4_input_6_10_2z00,
												BgL_filez00_3536);
											FAILURE(BgL_auxz00_9642, BFALSE, BFALSE);
										}
									if (OUTPUT_PORTP(BgL_opz00_3537))
										{	/* Ieee/input.scm 556 */
											BgL_opz00_6336 = BgL_opz00_3537;
										}
									else
										{
											obj_t BgL_auxz00_9648;

											BgL_auxz00_9648 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string4279z00zz__r4_input_6_10_2z00,
												BINT(((long) 21451)),
												BGl_string4322z00zz__r4_input_6_10_2z00,
												BGl_string4315z00zz__r4_input_6_10_2z00,
												BgL_opz00_3537);
											FAILURE(BgL_auxz00_9648, BFALSE, BFALSE);
										}
									{	/* Ieee/input.scm 560 */
										long BgL_sza7za7_6339;
										long BgL_offz00_6340;

										{	/* Ieee/input.scm 560 */
											long BgL_res3990z00_6350;

											BgL_res3990z00_6350 = (long) (((long) -1));
											BgL_sza7za7_6339 = BgL_res3990z00_6350;
										}
										{	/* Ieee/input.scm 561 */
											long BgL_res3991z00_6352;

											BgL_res3991z00_6352 = (long) (((long) -1));
											BgL_offz00_6340 = BgL_res3991z00_6352;
										}
										{	/* Ieee/input.scm 564 */
											obj_t BgL__ortest_1144z00_6341;

											BgL__ortest_1144z00_6341 =
												bgl_sendfile(BgL_filez00_6335, BgL_opz00_6336,
												(long) (((long) -1)), (long) (((long) -1)));
											if (CBOOL(BgL__ortest_1144z00_6341))
												{	/* Ieee/input.scm 564 */
													obj_t BgL_tmpz00_9659;

													if (INTEGERP(BgL__ortest_1144z00_6341))
														{	/* Ieee/input.scm 564 */
															BgL_tmpz00_9659 = BgL__ortest_1144z00_6341;
														}
													else
														{
															obj_t BgL_auxz00_9662;

															BgL_auxz00_9662 =
																BGl_typezd2errorzd2zz__errorz00
																(BGl_string4279z00zz__r4_input_6_10_2z00,
																BINT(((long) 21690)),
																BGl_string4322z00zz__r4_input_6_10_2z00,
																BGl_string4295z00zz__r4_input_6_10_2z00,
																BgL__ortest_1144z00_6341);
															FAILURE(BgL_auxz00_9662, BFALSE, BFALSE);
														}
													BgL_res3992z00_6355 = (long) CINT(BgL_tmpz00_9659);
												}
											else
												{	/* Ieee/input.scm 565 */
													obj_t BgL_ipz00_6342;

													{	/* Ieee/input.scm 565 */

														BgL_ipz00_6342 =
															BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
															(BgL_filez00_6335, BTRUE, BINT(((long) 5000000)));
													}
													{	/* Ieee/input.scm 566 */
														obj_t BgL_exitd1145z00_6346;

														BgL_exitd1145z00_6346 = BGL_EXITD_TOP_AS_OBJ();
														{	/* Ieee/input.scm 568 */
															obj_t BgL_zc3z04anonymousza32593ze3z87_7015;

															BgL_zc3z04anonymousza32593ze3z87_7015 =
																MAKE_FX_PROCEDURE
																(BGl_z62zc3z04anonymousza32593ze34146ze5zz__r4_input_6_10_2z00,
																(int) (((long) 0)), (int) (((long) 1)));
															PROCEDURE_SET
																(BgL_zc3z04anonymousza32593ze3z87_7015,
																(int) (((long) 0)), BgL_ipz00_6342);
															BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
																(BgL_exitd1145z00_6346,
																BgL_zc3z04anonymousza32593ze3z87_7015);
															{	/* Ieee/input.scm 567 */
																long BgL_tmp1147z00_6348;

																{	/* Ieee/input.scm 567 */
																	obj_t BgL_auxz00_9676;

																	if (INPUT_PORTP(BgL_ipz00_6342))
																		{	/* Ieee/input.scm 567 */
																			BgL_auxz00_9676 = BgL_ipz00_6342;
																		}
																	else
																		{
																			obj_t BgL_auxz00_9679;

																			BgL_auxz00_9679 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string4279z00zz__r4_input_6_10_2z00,
																				BINT(((long) 21806)),
																				BGl_string4322z00zz__r4_input_6_10_2z00,
																				BGl_string4282z00zz__r4_input_6_10_2z00,
																				BgL_ipz00_6342);
																			FAILURE(BgL_auxz00_9679, BFALSE, BFALSE);
																		}
																	BgL_tmp1147z00_6348 =
																		BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00
																		(BgL_auxz00_9676, BgL_opz00_6336,
																		((long) -1), ((long) -1));
																}
																BGl_exitdzd2popzd2protectz12z12zz__bexitz00
																	(BgL_exitd1145z00_6346);
																{	/* Ieee/input.scm 568 */
																	obj_t BgL_portz00_6354;

																	if (INPUT_PORTP(BgL_ipz00_6342))
																		{	/* Ieee/input.scm 568 */
																			BgL_portz00_6354 = BgL_ipz00_6342;
																		}
																	else
																		{
																			obj_t BgL_auxz00_9687;

																			BgL_auxz00_9687 =
																				BGl_typezd2errorzd2zz__errorz00
																				(BGl_string4279z00zz__r4_input_6_10_2z00,
																				BINT(((long) 21849)),
																				BGl_string4322z00zz__r4_input_6_10_2z00,
																				BGl_string4282z00zz__r4_input_6_10_2z00,
																				BgL_ipz00_6342);
																			FAILURE(BgL_auxz00_9687, BFALSE, BFALSE);
																		}
																	bgl_close_input_port(BgL_portz00_6354);
																}
																BgL_res3992z00_6355 = BgL_tmp1147z00_6348;
								}}}}}}}
								return BINT(BgL_res3992z00_6355);
							}
						}
						break;
					case ((long) 3):

						{	/* Ieee/input.scm 556 */
							obj_t BgL_siza7eza7_3543;

							BgL_siza7eza7_3543 = VECTOR_REF(BgL_opt1318z00_90, ((long) 2));
							{	/* Ieee/input.scm 556 */

								{	/* Ieee/input.scm 556 */
									long BgL_res3995z00_6376;

									{	/* Ieee/input.scm 556 */
										obj_t BgL_filez00_6356;
										obj_t BgL_opz00_6357;
										long BgL_siza7eza7_6358;

										if (STRINGP(BgL_filez00_3536))
											{	/* Ieee/input.scm 556 */
												BgL_filez00_6356 = BgL_filez00_3536;
											}
										else
											{
												obj_t BgL_auxz00_9696;

												BgL_auxz00_9696 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 21451)),
													BGl_string4322z00zz__r4_input_6_10_2z00,
													BGl_string4291z00zz__r4_input_6_10_2z00,
													BgL_filez00_3536);
												FAILURE(BgL_auxz00_9696, BFALSE, BFALSE);
											}
										if (OUTPUT_PORTP(BgL_opz00_3537))
											{	/* Ieee/input.scm 556 */
												BgL_opz00_6357 = BgL_opz00_3537;
											}
										else
											{
												obj_t BgL_auxz00_9702;

												BgL_auxz00_9702 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 21451)),
													BGl_string4322z00zz__r4_input_6_10_2z00,
													BGl_string4315z00zz__r4_input_6_10_2z00,
													BgL_opz00_3537);
												FAILURE(BgL_auxz00_9702, BFALSE, BFALSE);
											}
										{	/* Ieee/input.scm 556 */
											obj_t BgL_tmpz00_9706;

											if (ELONGP(BgL_siza7eza7_3543))
												{	/* Ieee/input.scm 556 */
													BgL_tmpz00_9706 = BgL_siza7eza7_3543;
												}
											else
												{
													obj_t BgL_auxz00_9709;

													BgL_auxz00_9709 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4279z00zz__r4_input_6_10_2z00,
														BINT(((long) 21451)),
														BGl_string4322z00zz__r4_input_6_10_2z00,
														BGl_string4316z00zz__r4_input_6_10_2z00,
														BgL_siza7eza7_3543);
													FAILURE(BgL_auxz00_9709, BFALSE, BFALSE);
												}
											BgL_siza7eza7_6358 = BELONG_TO_LONG(BgL_tmpz00_9706);
										}
										{	/* Ieee/input.scm 560 */
											long BgL_sza7za7_6360;
											long BgL_offz00_6361;

											{	/* Ieee/input.scm 560 */
												long BgL_res3993z00_6371;

												BgL_res3993z00_6371 = (long) (BgL_siza7eza7_6358);
												BgL_sza7za7_6360 = BgL_res3993z00_6371;
											}
											{	/* Ieee/input.scm 561 */
												long BgL_res3994z00_6373;

												BgL_res3994z00_6373 = (long) (((long) -1));
												BgL_offz00_6361 = BgL_res3994z00_6373;
											}
											{	/* Ieee/input.scm 564 */
												obj_t BgL__ortest_1144z00_6362;

												BgL__ortest_1144z00_6362 =
													bgl_sendfile(BgL_filez00_6356, BgL_opz00_6357,
													(long) (BgL_siza7eza7_6358), (long) (((long) -1)));
												if (CBOOL(BgL__ortest_1144z00_6362))
													{	/* Ieee/input.scm 564 */
														obj_t BgL_tmpz00_9721;

														if (INTEGERP(BgL__ortest_1144z00_6362))
															{	/* Ieee/input.scm 564 */
																BgL_tmpz00_9721 = BgL__ortest_1144z00_6362;
															}
														else
															{
																obj_t BgL_auxz00_9724;

																BgL_auxz00_9724 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string4279z00zz__r4_input_6_10_2z00,
																	BINT(((long) 21690)),
																	BGl_string4322z00zz__r4_input_6_10_2z00,
																	BGl_string4295z00zz__r4_input_6_10_2z00,
																	BgL__ortest_1144z00_6362);
																FAILURE(BgL_auxz00_9724, BFALSE, BFALSE);
															}
														BgL_res3995z00_6376 = (long) CINT(BgL_tmpz00_9721);
													}
												else
													{	/* Ieee/input.scm 565 */
														obj_t BgL_ipz00_6363;

														{	/* Ieee/input.scm 565 */

															BgL_ipz00_6363 =
																BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
																(BgL_filez00_6356, BTRUE,
																BINT(((long) 5000000)));
														}
														{	/* Ieee/input.scm 566 */
															obj_t BgL_exitd1145z00_6367;

															BgL_exitd1145z00_6367 = BGL_EXITD_TOP_AS_OBJ();
															{	/* Ieee/input.scm 568 */
																obj_t BgL_zc3z04anonymousza32593ze3z87_7014;

																BgL_zc3z04anonymousza32593ze3z87_7014 =
																	MAKE_FX_PROCEDURE
																	(BGl_z62zc3z04anonymousza32593ze34145ze5zz__r4_input_6_10_2z00,
																	(int) (((long) 0)), (int) (((long) 1)));
																PROCEDURE_SET
																	(BgL_zc3z04anonymousza32593ze3z87_7014,
																	(int) (((long) 0)), BgL_ipz00_6363);
																BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
																	(BgL_exitd1145z00_6367,
																	BgL_zc3z04anonymousza32593ze3z87_7014);
																{	/* Ieee/input.scm 567 */
																	long BgL_tmp1147z00_6369;

																	{	/* Ieee/input.scm 567 */
																		obj_t BgL_auxz00_9738;

																		if (INPUT_PORTP(BgL_ipz00_6363))
																			{	/* Ieee/input.scm 567 */
																				BgL_auxz00_9738 = BgL_ipz00_6363;
																			}
																		else
																			{
																				obj_t BgL_auxz00_9741;

																				BgL_auxz00_9741 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string4279z00zz__r4_input_6_10_2z00,
																					BINT(((long) 21806)),
																					BGl_string4322z00zz__r4_input_6_10_2z00,
																					BGl_string4282z00zz__r4_input_6_10_2z00,
																					BgL_ipz00_6363);
																				FAILURE(BgL_auxz00_9741, BFALSE,
																					BFALSE);
																			}
																		BgL_tmp1147z00_6369 =
																			BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00
																			(BgL_auxz00_9738, BgL_opz00_6357,
																			BgL_siza7eza7_6358, ((long) -1));
																	}
																	BGl_exitdzd2popzd2protectz12z12zz__bexitz00
																		(BgL_exitd1145z00_6367);
																	{	/* Ieee/input.scm 568 */
																		obj_t BgL_portz00_6375;

																		if (INPUT_PORTP(BgL_ipz00_6363))
																			{	/* Ieee/input.scm 568 */
																				BgL_portz00_6375 = BgL_ipz00_6363;
																			}
																		else
																			{
																				obj_t BgL_auxz00_9749;

																				BgL_auxz00_9749 =
																					BGl_typezd2errorzd2zz__errorz00
																					(BGl_string4279z00zz__r4_input_6_10_2z00,
																					BINT(((long) 21849)),
																					BGl_string4322z00zz__r4_input_6_10_2z00,
																					BGl_string4282z00zz__r4_input_6_10_2z00,
																					BgL_ipz00_6363);
																				FAILURE(BgL_auxz00_9749, BFALSE,
																					BFALSE);
																			}
																		bgl_close_input_port(BgL_portz00_6375);
																	}
																	BgL_res3995z00_6376 = BgL_tmp1147z00_6369;
									}}}}}}}
									return BINT(BgL_res3995z00_6376);
								}
							}
						}
						break;
					case ((long) 4):

						{	/* Ieee/input.scm 556 */
							obj_t BgL_siza7eza7_3545;

							BgL_siza7eza7_3545 = VECTOR_REF(BgL_opt1318z00_90, ((long) 2));
							{	/* Ieee/input.scm 556 */
								obj_t BgL_offsetz00_3546;

								BgL_offsetz00_3546 = VECTOR_REF(BgL_opt1318z00_90, ((long) 3));
								{	/* Ieee/input.scm 556 */

									{	/* Ieee/input.scm 556 */
										long BgL_res3998z00_6397;

										{	/* Ieee/input.scm 556 */
											obj_t BgL_filez00_6377;
											obj_t BgL_opz00_6378;
											long BgL_siza7eza7_6379;
											long BgL_offsetz00_6380;

											if (STRINGP(BgL_filez00_3536))
												{	/* Ieee/input.scm 556 */
													BgL_filez00_6377 = BgL_filez00_3536;
												}
											else
												{
													obj_t BgL_auxz00_9759;

													BgL_auxz00_9759 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4279z00zz__r4_input_6_10_2z00,
														BINT(((long) 21451)),
														BGl_string4322z00zz__r4_input_6_10_2z00,
														BGl_string4291z00zz__r4_input_6_10_2z00,
														BgL_filez00_3536);
													FAILURE(BgL_auxz00_9759, BFALSE, BFALSE);
												}
											if (OUTPUT_PORTP(BgL_opz00_3537))
												{	/* Ieee/input.scm 556 */
													BgL_opz00_6378 = BgL_opz00_3537;
												}
											else
												{
													obj_t BgL_auxz00_9765;

													BgL_auxz00_9765 =
														BGl_typezd2errorzd2zz__errorz00
														(BGl_string4279z00zz__r4_input_6_10_2z00,
														BINT(((long) 21451)),
														BGl_string4322z00zz__r4_input_6_10_2z00,
														BGl_string4315z00zz__r4_input_6_10_2z00,
														BgL_opz00_3537);
													FAILURE(BgL_auxz00_9765, BFALSE, BFALSE);
												}
											{	/* Ieee/input.scm 556 */
												obj_t BgL_tmpz00_9769;

												if (ELONGP(BgL_siza7eza7_3545))
													{	/* Ieee/input.scm 556 */
														BgL_tmpz00_9769 = BgL_siza7eza7_3545;
													}
												else
													{
														obj_t BgL_auxz00_9772;

														BgL_auxz00_9772 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string4279z00zz__r4_input_6_10_2z00,
															BINT(((long) 21451)),
															BGl_string4322z00zz__r4_input_6_10_2z00,
															BGl_string4316z00zz__r4_input_6_10_2z00,
															BgL_siza7eza7_3545);
														FAILURE(BgL_auxz00_9772, BFALSE, BFALSE);
													}
												BgL_siza7eza7_6379 = BELONG_TO_LONG(BgL_tmpz00_9769);
											}
											{	/* Ieee/input.scm 556 */
												obj_t BgL_tmpz00_9777;

												if (ELONGP(BgL_offsetz00_3546))
													{	/* Ieee/input.scm 556 */
														BgL_tmpz00_9777 = BgL_offsetz00_3546;
													}
												else
													{
														obj_t BgL_auxz00_9780;

														BgL_auxz00_9780 =
															BGl_typezd2errorzd2zz__errorz00
															(BGl_string4279z00zz__r4_input_6_10_2z00,
															BINT(((long) 21451)),
															BGl_string4322z00zz__r4_input_6_10_2z00,
															BGl_string4316z00zz__r4_input_6_10_2z00,
															BgL_offsetz00_3546);
														FAILURE(BgL_auxz00_9780, BFALSE, BFALSE);
													}
												BgL_offsetz00_6380 = BELONG_TO_LONG(BgL_tmpz00_9777);
											}
											{	/* Ieee/input.scm 560 */
												long BgL_sza7za7_6381;
												long BgL_offz00_6382;

												{	/* Ieee/input.scm 560 */
													long BgL_res3996z00_6392;

													BgL_res3996z00_6392 = (long) (BgL_siza7eza7_6379);
													BgL_sza7za7_6381 = BgL_res3996z00_6392;
												}
												{	/* Ieee/input.scm 561 */
													long BgL_res3997z00_6394;

													BgL_res3997z00_6394 = (long) (BgL_offsetz00_6380);
													BgL_offz00_6382 = BgL_res3997z00_6394;
												}
												{	/* Ieee/input.scm 564 */
													obj_t BgL__ortest_1144z00_6383;

													BgL__ortest_1144z00_6383 =
														bgl_sendfile(BgL_filez00_6377, BgL_opz00_6378,
														(long) (BgL_siza7eza7_6379),
														(long) (BgL_offsetz00_6380));
													if (CBOOL(BgL__ortest_1144z00_6383))
														{	/* Ieee/input.scm 564 */
															obj_t BgL_tmpz00_9792;

															if (INTEGERP(BgL__ortest_1144z00_6383))
																{	/* Ieee/input.scm 564 */
																	BgL_tmpz00_9792 = BgL__ortest_1144z00_6383;
																}
															else
																{
																	obj_t BgL_auxz00_9795;

																	BgL_auxz00_9795 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string4279z00zz__r4_input_6_10_2z00,
																		BINT(((long) 21690)),
																		BGl_string4322z00zz__r4_input_6_10_2z00,
																		BGl_string4295z00zz__r4_input_6_10_2z00,
																		BgL__ortest_1144z00_6383);
																	FAILURE(BgL_auxz00_9795, BFALSE, BFALSE);
																}
															BgL_res3998z00_6397 =
																(long) CINT(BgL_tmpz00_9792);
														}
													else
														{	/* Ieee/input.scm 565 */
															obj_t BgL_ipz00_6384;

															{	/* Ieee/input.scm 565 */

																BgL_ipz00_6384 =
																	BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
																	(BgL_filez00_6377, BTRUE,
																	BINT(((long) 5000000)));
															}
															{	/* Ieee/input.scm 566 */
																obj_t BgL_exitd1145z00_6388;

																BgL_exitd1145z00_6388 = BGL_EXITD_TOP_AS_OBJ();
																{	/* Ieee/input.scm 568 */
																	obj_t BgL_zc3z04anonymousza32593ze3z87_7013;

																	BgL_zc3z04anonymousza32593ze3z87_7013 =
																		MAKE_FX_PROCEDURE
																		(BGl_z62zc3z04anonymousza32593ze3ze5zz__r4_input_6_10_2z00,
																		(int) (((long) 0)), (int) (((long) 1)));
																	PROCEDURE_SET
																		(BgL_zc3z04anonymousza32593ze3z87_7013,
																		(int) (((long) 0)), BgL_ipz00_6384);
																	BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
																		(BgL_exitd1145z00_6388,
																		BgL_zc3z04anonymousza32593ze3z87_7013);
																	{	/* Ieee/input.scm 567 */
																		long BgL_tmp1147z00_6390;

																		{	/* Ieee/input.scm 567 */
																			obj_t BgL_auxz00_9809;

																			if (INPUT_PORTP(BgL_ipz00_6384))
																				{	/* Ieee/input.scm 567 */
																					BgL_auxz00_9809 = BgL_ipz00_6384;
																				}
																			else
																				{
																					obj_t BgL_auxz00_9812;

																					BgL_auxz00_9812 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string4279z00zz__r4_input_6_10_2z00,
																						BINT(((long) 21806)),
																						BGl_string4322z00zz__r4_input_6_10_2z00,
																						BGl_string4282z00zz__r4_input_6_10_2z00,
																						BgL_ipz00_6384);
																					FAILURE(BgL_auxz00_9812, BFALSE,
																						BFALSE);
																				}
																			BgL_tmp1147z00_6390 =
																				BGl_sendzd2charszf2siza7ez87zz__r4_input_6_10_2z00
																				(BgL_auxz00_9809, BgL_opz00_6378,
																				BgL_siza7eza7_6379, BgL_offsetz00_6380);
																		}
																		BGl_exitdzd2popzd2protectz12z12zz__bexitz00
																			(BgL_exitd1145z00_6388);
																		{	/* Ieee/input.scm 568 */
																			obj_t BgL_portz00_6396;

																			if (INPUT_PORTP(BgL_ipz00_6384))
																				{	/* Ieee/input.scm 568 */
																					BgL_portz00_6396 = BgL_ipz00_6384;
																				}
																			else
																				{
																					obj_t BgL_auxz00_9820;

																					BgL_auxz00_9820 =
																						BGl_typezd2errorzd2zz__errorz00
																						(BGl_string4279z00zz__r4_input_6_10_2z00,
																						BINT(((long) 21849)),
																						BGl_string4322z00zz__r4_input_6_10_2z00,
																						BGl_string4282z00zz__r4_input_6_10_2z00,
																						BgL_ipz00_6384);
																					FAILURE(BgL_auxz00_9820, BFALSE,
																						BFALSE);
																				}
																			bgl_close_input_port(BgL_portz00_6396);
																		}
																		BgL_res3998z00_6397 = BgL_tmp1147z00_6390;
										}}}}}}}
										return BINT(BgL_res3998z00_6397);
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



/* &<@anonymous:2593> */
	obj_t BGl_z62zc3z04anonymousza32593ze3ze5zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_7016)
	{
		{	/* Ieee/input.scm 566 */
			{	/* Ieee/input.scm 568 */
				obj_t BgL_ipz00_7017;

				BgL_ipz00_7017 = PROCEDURE_REF(BgL_envz00_7016, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_ipz00_7017));
			}
		}

	}



/* &<@anonymous:2593>4145 */
	obj_t BGl_z62zc3z04anonymousza32593ze34145ze5zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_7018)
	{
		{	/* Ieee/input.scm 566 */
			{	/* Ieee/input.scm 568 */
				obj_t BgL_ipz00_7019;

				BgL_ipz00_7019 = PROCEDURE_REF(BgL_envz00_7018, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_ipz00_7019));
			}
		}

	}



/* &<@anonymous:2593>4146 */
	obj_t BGl_z62zc3z04anonymousza32593ze34146ze5zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_7020)
	{
		{	/* Ieee/input.scm 566 */
			{	/* Ieee/input.scm 568 */
				obj_t BgL_ipz00_7021;

				BgL_ipz00_7021 = PROCEDURE_REF(BgL_envz00_7020, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_ipz00_7021));
			}
		}

	}



/* send-file */
	BGL_EXPORTED_DEF long BGl_sendzd2filezd2zz__r4_input_6_10_2z00(obj_t
		BgL_filez00_86, obj_t BgL_opz00_87, long BgL_siza7eza7_88,
		long BgL_offsetz00_89)
	{
		{	/* Ieee/input.scm 556 */
			{	/* Ieee/input.scm 560 */
				long BgL_sza7za7_6398;
				long BgL_offz00_6399;

				{	/* Ieee/input.scm 560 */
					long BgL_res3999z00_6409;

					BgL_res3999z00_6409 = (long) (BgL_siza7eza7_88);
					BgL_sza7za7_6398 = BgL_res3999z00_6409;
				}
				{	/* Ieee/input.scm 561 */
					long BgL_res4000z00_6411;

					BgL_res4000z00_6411 = (long) (BgL_offsetz00_89);
					BgL_offz00_6399 = BgL_res4000z00_6411;
				}
				{	/* Ieee/input.scm 564 */
					obj_t BgL__ortest_1144z00_6400;

					BgL__ortest_1144z00_6400 =
						bgl_sendfile(BgL_filez00_86, BgL_opz00_87,
						(long) (BgL_siza7eza7_88), (long) (BgL_offsetz00_89));
					if (CBOOL(BgL__ortest_1144z00_6400))
						{	/* Ieee/input.scm 564 */
							return (long) CINT(BgL__ortest_1144z00_6400);
						}
					else
						{	/* Ieee/input.scm 565 */
							obj_t BgL_ipz00_6401;

							{	/* Ieee/input.scm 565 */

								BgL_ipz00_6401 =
									BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_filez00_86, BTRUE, BINT(((long) 5000000)));
							}
							{	/* Ieee/input.scm 566 */
								obj_t BgL_exitd1145z00_6405;

								BgL_exitd1145z00_6405 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Ieee/input.scm 568 */
									obj_t BgL_zc3z04anonymousza32593ze3z87_7022;

									BgL_zc3z04anonymousza32593ze3z87_7022 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza32593ze34147ze5zz__r4_input_6_10_2z00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza32593ze3z87_7022,
										(int) (((long) 0)), BgL_ipz00_6401);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1145z00_6405,
										BgL_zc3z04anonymousza32593ze3z87_7022);
									{	/* Ieee/input.scm 567 */
										long BgL_tmp1147z00_6407;

										{	/* Ieee/input.scm 567 */
											long BgL_res4005z00_6431;

											{	/* Ieee/input.scm 521 */
												long BgL_sza7za7_6417;
												long BgL_offz00_6418;

												{	/* Ieee/input.scm 521 */
													long BgL_res4001z00_6424;

													BgL_res4001z00_6424 = (long) (BgL_siza7eza7_88);
													BgL_sza7za7_6417 = BgL_res4001z00_6424;
												}
												{	/* Ieee/input.scm 522 */
													long BgL_res4002z00_6426;

													BgL_res4002z00_6426 = (long) (BgL_offsetz00_89);
													BgL_offz00_6418 = BgL_res4002z00_6426;
												}
												{	/* Ieee/input.scm 525 */
													obj_t BgL__ortest_1141z00_6419;

													BgL__ortest_1141z00_6419 =
														bgl_sendchars(
														((obj_t) BgL_ipz00_6401), BgL_opz00_87,
														BgL_sza7za7_6417, BgL_offz00_6418);
													if (CBOOL(BgL__ortest_1141z00_6419))
														{	/* Ieee/input.scm 525 */
															BgL_res4005z00_6431 =
																(long) CINT(BgL__ortest_1141z00_6419);
														}
													else
														{	/* Ieee/input.scm 527 */
															bool_t BgL_test4669z00_9864;

															{	/* Ieee/input.scm 527 */
																bool_t BgL_test4670z00_9865;

																{	/* Ieee/input.scm 527 */
																	obj_t BgL_tmpz00_9866;

																	BgL_tmpz00_9866 = ((obj_t) BgL_ipz00_6401);
																	BgL_test4670z00_9865 =
																		INPUT_GZIP_PORTP(BgL_tmpz00_9866);
																}
																if (BgL_test4670z00_9865)
																	{	/* Ieee/input.scm 527 */
																		if ((BgL_sza7za7_6417 == ((long) -1)))
																			{	/* Ieee/input.scm 527 */
																				BgL_test4669z00_9864 =
																					(BgL_offz00_6418 == ((long) -1));
																			}
																		else
																			{	/* Ieee/input.scm 527 */
																				BgL_test4669z00_9864 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Ieee/input.scm 527 */
																		BgL_test4669z00_9864 = ((bool_t) 0);
																	}
															}
															if (BgL_test4669z00_9864)
																{	/* Ieee/input.scm 527 */
																	BgL_res4005z00_6431 =
																		(long)
																		CINT
																		(BGl_gunza7ipzd2sendcharsz75zz__gunza7ipza7(
																			((obj_t) BgL_ipz00_6401), BgL_opz00_87));
																}
															else
																{	/* Ieee/input.scm 527 */
																	BgL_res4005z00_6431 =
																		(long)
																		(BGl_z52sendcharsz52zz__r4_input_6_10_2z00((
																				(obj_t) BgL_ipz00_6401), BgL_opz00_87,
																			BgL_sza7za7_6417, BgL_offz00_6418));
											}}}}
											BgL_tmp1147z00_6407 = BgL_res4005z00_6431;
										}
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1145z00_6405);
										bgl_close_input_port(((obj_t) BgL_ipz00_6401));
										return BgL_tmp1147z00_6407;
									}
								}
							}
						}
				}
			}
		}

	}



/* &<@anonymous:2593>4147 */
	obj_t BGl_z62zc3z04anonymousza32593ze34147ze5zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_7023)
	{
		{	/* Ieee/input.scm 566 */
			{	/* Ieee/input.scm 568 */
				obj_t BgL_ipz00_7024;

				BgL_ipz00_7024 = PROCEDURE_REF(BgL_envz00_7023, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_ipz00_7024));
			}
		}

	}



/* file-lines */
	BGL_EXPORTED_DEF obj_t BGl_filezd2lineszd2zz__r4_input_6_10_2z00(obj_t
		BgL_filez00_92)
	{
		{	/* Ieee/input.scm 580 */
			if (fexists(BSTRING_TO_STRING(BgL_filez00_92)))
				{	/* Ieee/input.scm 605 */
					obj_t BgL_zc3z04anonymousza32596ze3z87_7025;

					BgL_zc3z04anonymousza32596ze3z87_7025 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza32596ze3ze5zz__r4_input_6_10_2z00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32596ze3z87_7025,
						(int) (((long) 0)), BgL_filez00_92);
					return
						BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
						(BgL_filez00_92, BgL_zc3z04anonymousza32596ze3z87_7025);
				}
			else
				{	/* Ieee/input.scm 601 */
					return BFALSE;
				}
		}

	}



/* &file-lines */
	obj_t BGl_z62filezd2lineszb0zz__r4_input_6_10_2z00(obj_t BgL_envz00_7026,
		obj_t BgL_filez00_7027)
	{
		{	/* Ieee/input.scm 580 */
			{	/* Ieee/input.scm 583 */
				obj_t BgL_auxz00_9894;

				if (STRINGP(BgL_filez00_7027))
					{	/* Ieee/input.scm 583 */
						BgL_auxz00_9894 = BgL_filez00_7027;
					}
				else
					{
						obj_t BgL_auxz00_9897;

						BgL_auxz00_9897 =
							BGl_typezd2errorzd2zz__errorz00
							(BGl_string4279z00zz__r4_input_6_10_2z00, BINT(((long) 22416)),
							BGl_string4323z00zz__r4_input_6_10_2z00,
							BGl_string4291z00zz__r4_input_6_10_2z00, BgL_filez00_7027);
						FAILURE(BgL_auxz00_9897, BFALSE, BFALSE);
					}
				return BGl_filezd2lineszd2zz__r4_input_6_10_2z00(BgL_auxz00_9894);
			}
		}

	}



/* &<@anonymous:2596> */
	obj_t BGl_z62zc3z04anonymousza32596ze3ze5zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_7028)
	{
		{	/* Ieee/input.scm 604 */
			{	/* Ieee/input.scm 605 */
				obj_t BgL_filez00_7029;

				BgL_filez00_7029 =
					((obj_t) PROCEDURE_REF(BgL_envz00_7028, (int) (((long) 0))));
				{
					obj_t BgL_iportz00_7340;
					long BgL_startz00_7341;
					obj_t BgL_accz00_7342;

					{	/* Ieee/input.scm 605 */
						obj_t BgL_arg2597z00_7401;

						{	/* Ieee/input.scm 605 */
							obj_t BgL_res4046z00_7402;

							{	/* Ieee/input.scm 605 */
								obj_t BgL_tmpz00_9905;

								BgL_tmpz00_9905 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4046z00_7402 =
									BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_9905);
							}
							BgL_arg2597z00_7401 = BgL_res4046z00_7402;
						}
						BgL_iportz00_7340 = BgL_arg2597z00_7401;
						BgL_startz00_7341 = ((long) 0);
						BgL_accz00_7342 = BNIL;
						{
							obj_t BgL_iportz00_7389;
							long BgL_lastzd2matchzd2_7390;
							long BgL_forwardz00_7391;
							long BgL_bufposz00_7392;
							obj_t BgL_iportz00_7377;
							long BgL_lastzd2matchzd2_7378;
							long BgL_forwardz00_7379;
							long BgL_bufposz00_7380;

						BgL_ignorez00_7343:
							{	/* Ieee/input.scm 583 */
								long BgL_res4035z00_7347;

								BgL_res4035z00_7347 = RGC_START_MATCH(BgL_iportz00_7340);
								BgL_res4035z00_7347;
							}
							{	/* Ieee/input.scm 583 */
								long BgL_matchz00_7348;

								{	/* Ieee/input.scm 583 */
									long BgL_arg2725z00_7349;
									long BgL_arg2727z00_7350;

									{	/* Ieee/input.scm 583 */
										long BgL_res4036z00_7351;

										BgL_res4036z00_7351 = RGC_BUFFER_FORWARD(BgL_iportz00_7340);
										BgL_arg2725z00_7349 = BgL_res4036z00_7351;
									}
									{	/* Ieee/input.scm 583 */
										long BgL_res4037z00_7352;

										BgL_res4037z00_7352 = RGC_BUFFER_BUFPOS(BgL_iportz00_7340);
										BgL_arg2727z00_7350 = BgL_res4037z00_7352;
									}
									{
										long BgL_forwardz00_7354;
										long BgL_bufposz00_7355;

										BgL_forwardz00_7354 = BgL_arg2725z00_7349;
										BgL_bufposz00_7355 = BgL_arg2727z00_7350;
									BgL_statezd20zd21148z00_7353:
										if ((BgL_forwardz00_7354 == BgL_bufposz00_7355))
											{	/* Ieee/input.scm 583 */
												if (rgc_fill_buffer(BgL_iportz00_7340))
													{	/* Ieee/input.scm 583 */
														long BgL_arg2620z00_7356;
														long BgL_arg2621z00_7357;

														{	/* Ieee/input.scm 583 */
															long BgL_res4025z00_7358;

															BgL_res4025z00_7358 =
																RGC_BUFFER_FORWARD(BgL_iportz00_7340);
															BgL_arg2620z00_7356 = BgL_res4025z00_7358;
														}
														{	/* Ieee/input.scm 583 */
															long BgL_res4026z00_7359;

															BgL_res4026z00_7359 =
																RGC_BUFFER_BUFPOS(BgL_iportz00_7340);
															BgL_arg2621z00_7357 = BgL_res4026z00_7359;
														}
														{
															long BgL_bufposz00_9918;
															long BgL_forwardz00_9917;

															BgL_forwardz00_9917 = BgL_arg2620z00_7356;
															BgL_bufposz00_9918 = BgL_arg2621z00_7357;
															BgL_bufposz00_7355 = BgL_bufposz00_9918;
															BgL_forwardz00_7354 = BgL_forwardz00_9917;
															goto BgL_statezd20zd21148z00_7353;
														}
													}
												else
													{	/* Ieee/input.scm 583 */
														BgL_matchz00_7348 = ((long) 2);
											}}
										else
											{	/* Ieee/input.scm 583 */
												int BgL_curz00_7360;

												{	/* Ieee/input.scm 583 */
													int BgL_res4027z00_7361;

													BgL_res4027z00_7361 =
														RGC_BUFFER_GET_CHAR(BgL_iportz00_7340,
														BgL_forwardz00_7354);
													BgL_curz00_7360 = BgL_res4027z00_7361;
												}
												{	/* Ieee/input.scm 583 */

													if (((long) (BgL_curz00_7360) == ((long) 10)))
														{	/* Ieee/input.scm 583 */
															long BgL_arg2623z00_7362;

															BgL_arg2623z00_7362 =
																(((long) 1) + BgL_forwardz00_7354);
															{	/* Ieee/input.scm 583 */
																long BgL_newzd2matchzd2_7363;

																{	/* Ieee/input.scm 583 */
																	long BgL_res4030z00_7364;

																	BgL_res4030z00_7364 =
																		RGC_STOP_MATCH(BgL_iportz00_7340,
																		BgL_arg2623z00_7362);
																	BgL_res4030z00_7364;
																}
																BgL_newzd2matchzd2_7363 = ((long) 0);
																BgL_matchz00_7348 = BgL_newzd2matchzd2_7363;
														}}
													else
														{	/* Ieee/input.scm 583 */
															BgL_iportz00_7377 = BgL_iportz00_7340;
															BgL_lastzd2matchzd2_7378 = ((long) 2);
															BgL_forwardz00_7379 =
																(((long) 1) + BgL_forwardz00_7354);
															BgL_bufposz00_7380 = BgL_bufposz00_7355;
														BgL_statezd21zd21149z00_7345:
															{	/* Ieee/input.scm 583 */
																long BgL_newzd2matchzd2_7381;

																{	/* Ieee/input.scm 583 */
																	long BgL_res4015z00_7382;

																	BgL_res4015z00_7382 =
																		RGC_STOP_MATCH(BgL_iportz00_7377,
																		BgL_forwardz00_7379);
																	BgL_res4015z00_7382;
																}
																BgL_newzd2matchzd2_7381 = ((long) 1);
																if ((BgL_forwardz00_7379 == BgL_bufposz00_7380))
																	{	/* Ieee/input.scm 583 */
																		if (rgc_fill_buffer(BgL_iportz00_7377))
																			{	/* Ieee/input.scm 583 */
																				long BgL_arg2611z00_7383;
																				long BgL_arg2612z00_7384;

																				{	/* Ieee/input.scm 583 */
																					long BgL_res4018z00_7385;

																					BgL_res4018z00_7385 =
																						RGC_BUFFER_FORWARD
																						(BgL_iportz00_7377);
																					BgL_arg2611z00_7383 =
																						BgL_res4018z00_7385;
																				}
																				{	/* Ieee/input.scm 583 */
																					long BgL_res4019z00_7386;

																					BgL_res4019z00_7386 =
																						RGC_BUFFER_BUFPOS
																						(BgL_iportz00_7377);
																					BgL_arg2612z00_7384 =
																						BgL_res4019z00_7386;
																				}
																				{
																					long BgL_bufposz00_9933;
																					long BgL_forwardz00_9932;

																					BgL_forwardz00_9932 =
																						BgL_arg2611z00_7383;
																					BgL_bufposz00_9933 =
																						BgL_arg2612z00_7384;
																					BgL_bufposz00_7380 =
																						BgL_bufposz00_9933;
																					BgL_forwardz00_7379 =
																						BgL_forwardz00_9932;
																					goto BgL_statezd21zd21149z00_7345;
																				}
																			}
																		else
																			{	/* Ieee/input.scm 583 */
																				BgL_matchz00_7348 =
																					BgL_newzd2matchzd2_7381;
																			}
																	}
																else
																	{	/* Ieee/input.scm 583 */
																		int BgL_curz00_7387;

																		{	/* Ieee/input.scm 583 */
																			int BgL_res4020z00_7388;

																			BgL_res4020z00_7388 =
																				RGC_BUFFER_GET_CHAR(BgL_iportz00_7377,
																				BgL_forwardz00_7379);
																			BgL_curz00_7387 = BgL_res4020z00_7388;
																		}
																		{	/* Ieee/input.scm 583 */

																			if (
																				((long) (BgL_curz00_7387) ==
																					((long) 10)))
																				{	/* Ieee/input.scm 583 */
																					BgL_matchz00_7348 =
																						BgL_newzd2matchzd2_7381;
																				}
																			else
																				{	/* Ieee/input.scm 583 */
																					BgL_iportz00_7389 = BgL_iportz00_7377;
																					BgL_lastzd2matchzd2_7390 =
																						BgL_newzd2matchzd2_7381;
																					BgL_forwardz00_7391 =
																						(((long) 1) + BgL_forwardz00_7379);
																					BgL_bufposz00_7392 =
																						BgL_bufposz00_7380;
																				BgL_statezd24zd21152z00_7346:
																					{	/* Ieee/input.scm 583 */
																						long BgL_newzd2matchzd2_7393;

																						{	/* Ieee/input.scm 583 */
																							long BgL_res4006z00_7394;

																							BgL_res4006z00_7394 =
																								RGC_STOP_MATCH
																								(BgL_iportz00_7389,
																								BgL_forwardz00_7391);
																							BgL_res4006z00_7394;
																						}
																						BgL_newzd2matchzd2_7393 =
																							((long) 1);
																						if ((BgL_forwardz00_7391 ==
																								BgL_bufposz00_7392))
																							{	/* Ieee/input.scm 583 */
																								if (rgc_fill_buffer
																									(BgL_iportz00_7389))
																									{	/* Ieee/input.scm 583 */
																										long BgL_arg2602z00_7395;
																										long BgL_arg2603z00_7396;

																										{	/* Ieee/input.scm 583 */
																											long BgL_res4009z00_7397;

																											BgL_res4009z00_7397 =
																												RGC_BUFFER_FORWARD
																												(BgL_iportz00_7389);
																											BgL_arg2602z00_7395 =
																												BgL_res4009z00_7397;
																										}
																										{	/* Ieee/input.scm 583 */
																											long BgL_res4010z00_7398;

																											BgL_res4010z00_7398 =
																												RGC_BUFFER_BUFPOS
																												(BgL_iportz00_7389);
																											BgL_arg2603z00_7396 =
																												BgL_res4010z00_7398;
																										}
																										{
																											long BgL_bufposz00_9946;
																											long BgL_forwardz00_9945;

																											BgL_forwardz00_9945 =
																												BgL_arg2602z00_7395;
																											BgL_bufposz00_9946 =
																												BgL_arg2603z00_7396;
																											BgL_bufposz00_7392 =
																												BgL_bufposz00_9946;
																											BgL_forwardz00_7391 =
																												BgL_forwardz00_9945;
																											goto
																												BgL_statezd24zd21152z00_7346;
																										}
																									}
																								else
																									{	/* Ieee/input.scm 583 */
																										BgL_matchz00_7348 =
																											BgL_newzd2matchzd2_7393;
																									}
																							}
																						else
																							{	/* Ieee/input.scm 583 */
																								int BgL_curz00_7399;

																								{	/* Ieee/input.scm 583 */
																									int BgL_res4011z00_7400;

																									BgL_res4011z00_7400 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_iportz00_7389,
																										BgL_forwardz00_7391);
																									BgL_curz00_7399 =
																										BgL_res4011z00_7400;
																								}
																								{	/* Ieee/input.scm 583 */

																									if (
																										((long) (BgL_curz00_7399) ==
																											((long) 10)))
																										{	/* Ieee/input.scm 583 */
																											BgL_matchz00_7348 =
																												BgL_newzd2matchzd2_7393;
																										}
																									else
																										{
																											long BgL_forwardz00_9952;
																											long
																												BgL_lastzd2matchzd2_9951;
																											BgL_lastzd2matchzd2_9951 =
																												BgL_newzd2matchzd2_7393;
																											BgL_forwardz00_9952 =
																												(((long) 1) +
																												BgL_forwardz00_7391);
																											BgL_forwardz00_7391 =
																												BgL_forwardz00_9952;
																											BgL_lastzd2matchzd2_7390 =
																												BgL_lastzd2matchzd2_9951;
																											goto
																												BgL_statezd24zd21152z00_7346;
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
								RGC_SET_FILEPOS(BgL_iportz00_7340);
								switch (BgL_matchz00_7348)
									{
									case ((long) 2):

										{	/* Ieee/input.scm 593 */
											obj_t BgL_cz00_7365;

											{	/* Ieee/input.scm 583 */
												bool_t BgL_test4683z00_9957;

												{	/* Ieee/input.scm 583 */
													long BgL_arg2710z00_7374;

													{	/* Ieee/input.scm 583 */
														long BgL_res4032z00_7375;

														BgL_res4032z00_7375 =
															RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_7340);
														BgL_arg2710z00_7374 = BgL_res4032z00_7375;
													}
													BgL_test4683z00_9957 =
														(BgL_arg2710z00_7374 == ((long) 0));
												}
												if (BgL_test4683z00_9957)
													{	/* Ieee/input.scm 583 */
														BgL_cz00_7365 = BEOF;
													}
												else
													{	/* Ieee/input.scm 583 */
														unsigned char BgL_res4034z00_7376;

														BgL_res4034z00_7376 =
															RGC_BUFFER_CHARACTER(BgL_iportz00_7340);
														BgL_cz00_7365 = BCHAR(BgL_res4034z00_7376);
											}}
											{	/* Ieee/input.scm 594 */
												bool_t BgL_test4684z00_9962;

												{	/* Ieee/input.scm 594 */
													bool_t BgL_res4038z00_7366;

													BgL_res4038z00_7366 = EOF_OBJECTP(BgL_cz00_7365);
													BgL_test4684z00_9962 = BgL_res4038z00_7366;
												}
												if (BgL_test4684z00_9962)
													{	/* Ieee/input.scm 595 */
														long BgL_stopz00_7367;

														{	/* Ieee/input.scm 595 */
															long BgL_res4040z00_7368;

															BgL_res4040z00_7368 =
																INPUT_PORT_FILEPOS(BgL_iportz00_7340);
															BgL_stopz00_7367 = BgL_res4040z00_7368;
														}
														if ((BgL_stopz00_7367 > BgL_startz00_7341))
															{	/* Ieee/input.scm 597 */
																obj_t BgL_arg2720z00_7369;

																{	/* Ieee/input.scm 597 */
																	obj_t BgL_arg2722z00_7370;

																	BgL_arg2722z00_7370 =
																		MAKE_YOUNG_PAIR(BINT(BgL_startz00_7341),
																		BINT(BgL_stopz00_7367));
																	BgL_arg2720z00_7369 =
																		MAKE_YOUNG_PAIR(BgL_arg2722z00_7370,
																		BgL_accz00_7342);
																}
																return bgl_reverse_bang(BgL_arg2720z00_7369);
															}
														else
															{	/* Ieee/input.scm 596 */
																return bgl_reverse_bang(BgL_accz00_7342);
															}
													}
												else
													{	/* Ieee/input.scm 594 */
														return
															BGl_errorz00zz__errorz00
															(BGl_symbol4324z00zz__r4_input_6_10_2z00,
															BGl_string4326z00zz__r4_input_6_10_2z00,
															BgL_filez00_7029);
													}
											}
										}
										break;
									case ((long) 1):

										goto BgL_ignorez00_7343;
										break;
									case ((long) 0):

										{	/* Ieee/input.scm 585 */
											long BgL_stopz00_7371;

											{	/* Ieee/input.scm 585 */
												long BgL_res4043z00_7372;

												BgL_res4043z00_7372 =
													INPUT_PORT_FILEPOS(BgL_iportz00_7340);
												BgL_stopz00_7371 = BgL_res4043z00_7372;
											}
											{	/* Ieee/input.scm 585 */
												obj_t BgL_descz00_7373;

												BgL_descz00_7373 =
													MAKE_YOUNG_PAIR(BINT(BgL_startz00_7341),
													BINT(BgL_stopz00_7371));
												{	/* Ieee/input.scm 586 */

													BgL_startz00_7341 = (((long) 1) + BgL_stopz00_7371);
													BgL_accz00_7342 =
														MAKE_YOUNG_PAIR(BgL_descz00_7373, BgL_accz00_7342);
													goto BgL_ignorez00_7343;
												}
											}
										}
										break;
									default:
										return
											BGl_errorz00zz__errorz00
											(BGl_string4272z00zz__r4_input_6_10_2z00,
											BGl_string4273z00zz__r4_input_6_10_2z00,
											BINT(BgL_matchz00_7348));
									}
							}
						}
					}
				}
			}
		}

	}



/* file-position->line */
	BGL_EXPORTED_DEF obj_t
		BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int BgL_posz00_93,
		obj_t BgL_fdescz00_94)
	{
		{	/* Ieee/input.scm 610 */
			if (PAIRP(BgL_fdescz00_94))
				{
					obj_t BgL_flinesz00_6594;
					long BgL_linez00_6595;

					BgL_flinesz00_6594 = BgL_fdescz00_94;
					BgL_linez00_6595 = ((long) 1);
				BgL_loopz00_6593:
					if (NULLP(BgL_flinesz00_6594))
						{	/* Ieee/input.scm 616 */
							return BFALSE;
						}
					else
						{	/* Ieee/input.scm 618 */
							bool_t BgL_test4688z00_9987;

							{	/* Ieee/input.scm 618 */
								long BgL_tmpz00_9988;

								{	/* Ieee/input.scm 618 */
									obj_t BgL_pairz00_6610;

									BgL_pairz00_6610 = CAR(((obj_t) BgL_flinesz00_6594));
									BgL_tmpz00_9988 = (long) CINT(CDR(BgL_pairz00_6610));
								}
								BgL_test4688z00_9987 =
									((long) (BgL_posz00_93) >= BgL_tmpz00_9988);
							}
							if (BgL_test4688z00_9987)
								{	/* Ieee/input.scm 619 */
									obj_t BgL_arg2734z00_6604;
									long BgL_arg2739z00_6605;

									BgL_arg2734z00_6604 = CDR(((obj_t) BgL_flinesz00_6594));
									BgL_arg2739z00_6605 = (BgL_linez00_6595 + ((long) 1));
									{
										long BgL_linez00_9999;
										obj_t BgL_flinesz00_9998;

										BgL_flinesz00_9998 = BgL_arg2734z00_6604;
										BgL_linez00_9999 = BgL_arg2739z00_6605;
										BgL_linez00_6595 = BgL_linez00_9999;
										BgL_flinesz00_6594 = BgL_flinesz00_9998;
										goto BgL_loopz00_6593;
									}
								}
							else
								{	/* Ieee/input.scm 618 */
									return BINT(BgL_linez00_6595);
								}
						}
				}
			else
				{	/* Ieee/input.scm 612 */
					if (STRINGP(BgL_fdescz00_94))
						{	/* Ieee/input.scm 622 */
							if (fexists(BSTRING_TO_STRING(BgL_fdescz00_94)))
								{	/* Ieee/input.scm 638 */
									obj_t BgL_zc3z04anonymousza32744ze3z87_7030;

									BgL_zc3z04anonymousza32744ze3z87_7030 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza32744ze3ze5zz__r4_input_6_10_2z00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza32744ze3z87_7030,
										(int) (((long) 0)), BINT(BgL_posz00_93));
									return
										BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
										(BgL_fdescz00_94, BgL_zc3z04anonymousza32744ze3z87_7030);
								}
							else
								{	/* Ieee/input.scm 634 */
									return BFALSE;
								}
						}
					else
						{	/* Ieee/input.scm 622 */
							return BFALSE;
						}
				}
		}

	}



/* &file-position->line */
	obj_t BGl_z62filezd2positionzd2ze3linez81zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_7031, obj_t BgL_posz00_7032, obj_t BgL_fdescz00_7033)
	{
		{	/* Ieee/input.scm 610 */
			{	/* Ieee/input.scm 612 */
				int BgL_auxz00_10013;

				{	/* Ieee/input.scm 612 */
					obj_t BgL_tmpz00_10014;

					if (INTEGERP(BgL_posz00_7032))
						{	/* Ieee/input.scm 612 */
							BgL_tmpz00_10014 = BgL_posz00_7032;
						}
					else
						{
							obj_t BgL_auxz00_10017;

							BgL_auxz00_10017 =
								BGl_typezd2errorzd2zz__errorz00
								(BGl_string4279z00zz__r4_input_6_10_2z00, BINT(((long) 23319)),
								BGl_string4327z00zz__r4_input_6_10_2z00,
								BGl_string4295z00zz__r4_input_6_10_2z00, BgL_posz00_7032);
							FAILURE(BgL_auxz00_10017, BFALSE, BFALSE);
						}
					BgL_auxz00_10013 = CINT(BgL_tmpz00_10014);
				}
				return
					BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00
					(BgL_auxz00_10013, BgL_fdescz00_7033);
			}
		}

	}



/* &<@anonymous:2744> */
	obj_t BGl_z62zc3z04anonymousza32744ze3ze5zz__r4_input_6_10_2z00(obj_t
		BgL_envz00_7034)
	{
		{	/* Ieee/input.scm 637 */
			{	/* Ieee/input.scm 638 */
				int BgL_posz00_7035;

				BgL_posz00_7035 =
					CINT(PROCEDURE_REF(BgL_envz00_7034, (int) (((long) 0))));
				{
					obj_t BgL_iportz00_7404;
					obj_t BgL_posz00_7405;
					long BgL_linez00_7406;

					{	/* Ieee/input.scm 638 */
						obj_t BgL_arg2745z00_7454;

						{	/* Ieee/input.scm 638 */
							obj_t BgL_res4092z00_7455;

							{	/* Ieee/input.scm 638 */
								obj_t BgL_tmpz00_10026;

								BgL_tmpz00_10026 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res4092z00_7455 =
									BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_10026);
							}
							BgL_arg2745z00_7454 = BgL_res4092z00_7455;
						}
						BgL_iportz00_7404 = BgL_arg2745z00_7454;
						BgL_posz00_7405 = BINT(BgL_posz00_7035);
						BgL_linez00_7406 = ((long) 1);
						{
							obj_t BgL_iportz00_7442;
							long BgL_lastzd2matchzd2_7443;
							long BgL_forwardz00_7444;
							long BgL_bufposz00_7445;
							obj_t BgL_iportz00_7430;
							long BgL_lastzd2matchzd2_7431;
							long BgL_forwardz00_7432;
							long BgL_bufposz00_7433;

						BgL_ignorez00_7407:
							{	/* Ieee/input.scm 623 */
								long BgL_res4084z00_7410;

								BgL_res4084z00_7410 = RGC_START_MATCH(BgL_iportz00_7404);
								BgL_res4084z00_7410;
							}
							{	/* Ieee/input.scm 623 */
								long BgL_matchz00_7411;

								{	/* Ieee/input.scm 623 */
									long BgL_arg2889z00_7412;
									long BgL_arg2894z00_7413;

									{	/* Ieee/input.scm 623 */
										long BgL_res4085z00_7414;

										BgL_res4085z00_7414 = RGC_BUFFER_FORWARD(BgL_iportz00_7404);
										BgL_arg2889z00_7412 = BgL_res4085z00_7414;
									}
									{	/* Ieee/input.scm 623 */
										long BgL_res4086z00_7415;

										BgL_res4086z00_7415 = RGC_BUFFER_BUFPOS(BgL_iportz00_7404);
										BgL_arg2894z00_7413 = BgL_res4086z00_7415;
									}
									{
										long BgL_forwardz00_7417;
										long BgL_bufposz00_7418;

										BgL_forwardz00_7417 = BgL_arg2889z00_7412;
										BgL_bufposz00_7418 = BgL_arg2894z00_7413;
									BgL_statezd20zd21155z00_7416:
										if ((BgL_forwardz00_7417 == BgL_bufposz00_7418))
											{	/* Ieee/input.scm 623 */
												if (rgc_fill_buffer(BgL_iportz00_7404))
													{	/* Ieee/input.scm 623 */
														long BgL_arg2766z00_7419;
														long BgL_arg2767z00_7420;

														{	/* Ieee/input.scm 623 */
															long BgL_res4077z00_7421;

															BgL_res4077z00_7421 =
																RGC_BUFFER_FORWARD(BgL_iportz00_7404);
															BgL_arg2766z00_7419 = BgL_res4077z00_7421;
														}
														{	/* Ieee/input.scm 623 */
															long BgL_res4078z00_7422;

															BgL_res4078z00_7422 =
																RGC_BUFFER_BUFPOS(BgL_iportz00_7404);
															BgL_arg2767z00_7420 = BgL_res4078z00_7422;
														}
														{
															long BgL_bufposz00_10039;
															long BgL_forwardz00_10038;

															BgL_forwardz00_10038 = BgL_arg2766z00_7419;
															BgL_bufposz00_10039 = BgL_arg2767z00_7420;
															BgL_bufposz00_7418 = BgL_bufposz00_10039;
															BgL_forwardz00_7417 = BgL_forwardz00_10038;
															goto BgL_statezd20zd21155z00_7416;
														}
													}
												else
													{	/* Ieee/input.scm 623 */
														BgL_matchz00_7411 = ((long) 2);
											}}
										else
											{	/* Ieee/input.scm 623 */
												int BgL_curz00_7423;

												{	/* Ieee/input.scm 623 */
													int BgL_res4079z00_7424;

													BgL_res4079z00_7424 =
														RGC_BUFFER_GET_CHAR(BgL_iportz00_7404,
														BgL_forwardz00_7417);
													BgL_curz00_7423 = BgL_res4079z00_7424;
												}
												{	/* Ieee/input.scm 623 */

													if (((long) (BgL_curz00_7423) == ((long) 10)))
														{	/* Ieee/input.scm 623 */
															long BgL_arg2770z00_7425;

															BgL_arg2770z00_7425 =
																(((long) 1) + BgL_forwardz00_7417);
															{	/* Ieee/input.scm 623 */
																long BgL_newzd2matchzd2_7426;

																{	/* Ieee/input.scm 623 */
																	long BgL_res4082z00_7427;

																	BgL_res4082z00_7427 =
																		RGC_STOP_MATCH(BgL_iportz00_7404,
																		BgL_arg2770z00_7425);
																	BgL_res4082z00_7427;
																}
																BgL_newzd2matchzd2_7426 = ((long) 0);
																BgL_matchz00_7411 = BgL_newzd2matchzd2_7426;
														}}
													else
														{	/* Ieee/input.scm 623 */
															BgL_iportz00_7430 = BgL_iportz00_7404;
															BgL_lastzd2matchzd2_7431 = ((long) 2);
															BgL_forwardz00_7432 =
																(((long) 1) + BgL_forwardz00_7417);
															BgL_bufposz00_7433 = BgL_bufposz00_7418;
														BgL_statezd21zd21156z00_7408:
															{	/* Ieee/input.scm 623 */
																long BgL_newzd2matchzd2_7434;

																{	/* Ieee/input.scm 623 */
																	long BgL_res4067z00_7435;

																	BgL_res4067z00_7435 =
																		RGC_STOP_MATCH(BgL_iportz00_7430,
																		BgL_forwardz00_7432);
																	BgL_res4067z00_7435;
																}
																BgL_newzd2matchzd2_7434 = ((long) 1);
																if ((BgL_forwardz00_7432 == BgL_bufposz00_7433))
																	{	/* Ieee/input.scm 623 */
																		if (rgc_fill_buffer(BgL_iportz00_7430))
																			{	/* Ieee/input.scm 623 */
																				long BgL_arg2759z00_7436;
																				long BgL_arg2760z00_7437;

																				{	/* Ieee/input.scm 623 */
																					long BgL_res4070z00_7438;

																					BgL_res4070z00_7438 =
																						RGC_BUFFER_FORWARD
																						(BgL_iportz00_7430);
																					BgL_arg2759z00_7436 =
																						BgL_res4070z00_7438;
																				}
																				{	/* Ieee/input.scm 623 */
																					long BgL_res4071z00_7439;

																					BgL_res4071z00_7439 =
																						RGC_BUFFER_BUFPOS
																						(BgL_iportz00_7430);
																					BgL_arg2760z00_7437 =
																						BgL_res4071z00_7439;
																				}
																				{
																					long BgL_bufposz00_10054;
																					long BgL_forwardz00_10053;

																					BgL_forwardz00_10053 =
																						BgL_arg2759z00_7436;
																					BgL_bufposz00_10054 =
																						BgL_arg2760z00_7437;
																					BgL_bufposz00_7433 =
																						BgL_bufposz00_10054;
																					BgL_forwardz00_7432 =
																						BgL_forwardz00_10053;
																					goto BgL_statezd21zd21156z00_7408;
																				}
																			}
																		else
																			{	/* Ieee/input.scm 623 */
																				BgL_matchz00_7411 =
																					BgL_newzd2matchzd2_7434;
																			}
																	}
																else
																	{	/* Ieee/input.scm 623 */
																		int BgL_curz00_7440;

																		{	/* Ieee/input.scm 623 */
																			int BgL_res4072z00_7441;

																			BgL_res4072z00_7441 =
																				RGC_BUFFER_GET_CHAR(BgL_iportz00_7430,
																				BgL_forwardz00_7432);
																			BgL_curz00_7440 = BgL_res4072z00_7441;
																		}
																		{	/* Ieee/input.scm 623 */

																			if (
																				((long) (BgL_curz00_7440) ==
																					((long) 10)))
																				{	/* Ieee/input.scm 623 */
																					BgL_matchz00_7411 =
																						BgL_newzd2matchzd2_7434;
																				}
																			else
																				{	/* Ieee/input.scm 623 */
																					BgL_iportz00_7442 = BgL_iportz00_7430;
																					BgL_lastzd2matchzd2_7443 =
																						BgL_newzd2matchzd2_7434;
																					BgL_forwardz00_7444 =
																						(((long) 1) + BgL_forwardz00_7432);
																					BgL_bufposz00_7445 =
																						BgL_bufposz00_7433;
																				BgL_statezd24zd21159z00_7409:
																					{	/* Ieee/input.scm 623 */
																						long BgL_newzd2matchzd2_7446;

																						{	/* Ieee/input.scm 623 */
																							long BgL_res4058z00_7447;

																							BgL_res4058z00_7447 =
																								RGC_STOP_MATCH
																								(BgL_iportz00_7442,
																								BgL_forwardz00_7444);
																							BgL_res4058z00_7447;
																						}
																						BgL_newzd2matchzd2_7446 =
																							((long) 1);
																						if ((BgL_forwardz00_7444 ==
																								BgL_bufposz00_7445))
																							{	/* Ieee/input.scm 623 */
																								if (rgc_fill_buffer
																									(BgL_iportz00_7442))
																									{	/* Ieee/input.scm 623 */
																										long BgL_arg2750z00_7448;
																										long BgL_arg2751z00_7449;

																										{	/* Ieee/input.scm 623 */
																											long BgL_res4061z00_7450;

																											BgL_res4061z00_7450 =
																												RGC_BUFFER_FORWARD
																												(BgL_iportz00_7442);
																											BgL_arg2750z00_7448 =
																												BgL_res4061z00_7450;
																										}
																										{	/* Ieee/input.scm 623 */
																											long BgL_res4062z00_7451;

																											BgL_res4062z00_7451 =
																												RGC_BUFFER_BUFPOS
																												(BgL_iportz00_7442);
																											BgL_arg2751z00_7449 =
																												BgL_res4062z00_7451;
																										}
																										{
																											long BgL_bufposz00_10067;
																											long BgL_forwardz00_10066;

																											BgL_forwardz00_10066 =
																												BgL_arg2750z00_7448;
																											BgL_bufposz00_10067 =
																												BgL_arg2751z00_7449;
																											BgL_bufposz00_7445 =
																												BgL_bufposz00_10067;
																											BgL_forwardz00_7444 =
																												BgL_forwardz00_10066;
																											goto
																												BgL_statezd24zd21159z00_7409;
																										}
																									}
																								else
																									{	/* Ieee/input.scm 623 */
																										BgL_matchz00_7411 =
																											BgL_newzd2matchzd2_7446;
																									}
																							}
																						else
																							{	/* Ieee/input.scm 623 */
																								int BgL_curz00_7452;

																								{	/* Ieee/input.scm 623 */
																									int BgL_res4063z00_7453;

																									BgL_res4063z00_7453 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_iportz00_7442,
																										BgL_forwardz00_7444);
																									BgL_curz00_7452 =
																										BgL_res4063z00_7453;
																								}
																								{	/* Ieee/input.scm 623 */

																									if (
																										((long) (BgL_curz00_7452) ==
																											((long) 10)))
																										{	/* Ieee/input.scm 623 */
																											BgL_matchz00_7411 =
																												BgL_newzd2matchzd2_7446;
																										}
																									else
																										{
																											long BgL_forwardz00_10073;
																											long
																												BgL_lastzd2matchzd2_10072;
																											BgL_lastzd2matchzd2_10072
																												=
																												BgL_newzd2matchzd2_7446;
																											BgL_forwardz00_10073 =
																												(((long) 1) +
																												BgL_forwardz00_7444);
																											BgL_forwardz00_7444 =
																												BgL_forwardz00_10073;
																											BgL_lastzd2matchzd2_7443 =
																												BgL_lastzd2matchzd2_10072;
																											goto
																												BgL_statezd24zd21159z00_7409;
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
								RGC_SET_FILEPOS(BgL_iportz00_7404);
								switch (BgL_matchz00_7411)
									{
									case ((long) 2):

										return BFALSE;
										break;
									case ((long) 1):

										goto BgL_ignorez00_7407;
										break;
									case ((long) 0):

										{	/* Ieee/input.scm 625 */
											bool_t BgL_test4701z00_10078;

											{	/* Ieee/input.scm 625 */
												long BgL_arg2887z00_7428;

												{	/* Ieee/input.scm 625 */
													long BgL_res4088z00_7429;

													BgL_res4088z00_7429 =
														INPUT_PORT_FILEPOS(BgL_iportz00_7404);
													BgL_arg2887z00_7428 = BgL_res4088z00_7429;
												}
												BgL_test4701z00_10078 =
													(BgL_arg2887z00_7428 >= (long) CINT(BgL_posz00_7405));
											}
											if (BgL_test4701z00_10078)
												{	/* Ieee/input.scm 625 */
													return BINT(BgL_linez00_7406);
												}
											else
												{	/* Ieee/input.scm 625 */
													BgL_linez00_7406 = (BgL_linez00_7406 + ((long) 1));
													goto BgL_ignorez00_7407;
												}
										}
										break;
									default:
										return
											BGl_errorz00zz__errorz00
											(BGl_string4272z00zz__r4_input_6_10_2z00,
											BGl_string4273z00zz__r4_input_6_10_2z00,
											BINT(BgL_matchz00_7411));
									}
							}
						}
					}
				}
			}
		}

	}



/* _password */
	obj_t BGl__passwordz00zz__r4_input_6_10_2z00(obj_t BgL_env1323z00_97,
		obj_t BgL_opt1322z00_96)
	{
		{	/* Ieee/input.scm 645 */
			{	/* Ieee/input.scm 645 */

				switch (VECTOR_LENGTH(BgL_opt1322z00_96))
					{
					case ((long) 0):

						{	/* Ieee/input.scm 645 */

							return
								bgl_password(BSTRING_TO_STRING
								(BGl_string4285z00zz__r4_input_6_10_2z00));
						}
						break;
					case ((long) 1):

						{	/* Ieee/input.scm 645 */
							obj_t BgL_promptz00_7456;

							BgL_promptz00_7456 = VECTOR_REF(BgL_opt1322z00_96, ((long) 0));
							{	/* Ieee/input.scm 645 */

								{	/* Ieee/input.scm 645 */
									obj_t BgL_res4094z00_7457;

									{	/* Ieee/input.scm 645 */
										obj_t BgL_promptz00_7458;

										if (STRINGP(BgL_promptz00_7456))
											{	/* Ieee/input.scm 645 */
												BgL_promptz00_7458 = BgL_promptz00_7456;
											}
										else
											{
												obj_t BgL_auxz00_10093;

												BgL_auxz00_10093 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string4279z00zz__r4_input_6_10_2z00,
													BINT(((long) 24216)),
													BGl_string4328z00zz__r4_input_6_10_2z00,
													BGl_string4291z00zz__r4_input_6_10_2z00,
													BgL_promptz00_7456);
												FAILURE(BgL_auxz00_10093, BFALSE, BFALSE);
											}
										BgL_res4094z00_7457 =
											bgl_password(BSTRING_TO_STRING(BgL_promptz00_7458));
									}
									return BgL_res4094z00_7457;
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



/* password */
	BGL_EXPORTED_DEF obj_t BGl_passwordz00zz__r4_input_6_10_2z00(obj_t
		BgL_promptz00_95)
	{
		{	/* Ieee/input.scm 645 */
			return bgl_password(BSTRING_TO_STRING(BgL_promptz00_95));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__r4_input_6_10_2z00()
	{
		{	/* Ieee/input.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r4_input_6_10_2z00()
	{
		{	/* Ieee/input.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r4_input_6_10_2z00()
	{
		{	/* Ieee/input.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_input_6_10_2z00()
	{
		{	/* Ieee/input.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string4329z00zz__r4_input_6_10_2z00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string4329z00zz__r4_input_6_10_2z00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string4329z00zz__r4_input_6_10_2z00));
			return
				BGl_modulezd2initializa7ationz75zz__gunza7ipza7(((long) 224363636),
				BSTRING_TO_STRING(BGl_string4329z00zz__r4_input_6_10_2z00));
		}

	}

#ifdef __cplusplus
}
#endif
