/*===========================================================================*/
/*   (Unsafe/base64.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/base64.scm -indent -o objs/obj_u/Unsafe/base64.c) */
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

	typedef struct BgL_z62iozd2parsezd2errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                               *BgL_z62iozd2parsezd2errorz62_bglt;


	static obj_t BGl_z62zc3z04anonymousza31932ze32977ze5zz__base64z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31932ze32978ze5zz__base64z00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, uint8_t);
	static obj_t BGl_bytezd2tablezd2zz__base64z00 = BUNSPEC;
	extern obj_t BGl_raisez00zz__errorz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__base64z00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31936ze3ze5zz__base64z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_base64zd2encodezd2zz__base64z00(obj_t, obj_t);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62pemzd2readzd2filez62zz__base64z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_base64zd2decodezd2portz00zz__base64z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__base64z00();
	extern obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31964ze3ze5zz__base64z00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__base64z00();
	extern obj_t BGl_z62iozd2parsezd2errorz62zz__objectz00;
	static obj_t BGl_objectzd2initzd2zz__base64z00();
	BGL_EXPORTED_DECL obj_t BGl_pemzd2decodezd2portz00zz__base64z00(obj_t, obj_t);
	static obj_t BGl_z62pemzd2decodezd2portz62zz__base64z00(obj_t, obj_t, obj_t);
	static long BGl_actualzd2stringzd2lengthz00zz__base64z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__base64z00();
	extern obj_t make_string(long, unsigned char);
	extern obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31521ze3ze5zz__base64z00(obj_t, obj_t,
		long);
	static obj_t BGl_base64zd2decodezd2grammarz00zz__base64z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_pemzd2readzd2filez00zz__base64z00(obj_t);
	extern obj_t rgc_buffer_substring(obj_t, long, long);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31265ze3ze5zz__base64z00(obj_t, obj_t,
		obj_t, obj_t, long, long, obj_t, bool_t);
	static obj_t BGl_ignoreze70ze7zz__base64z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__base64z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl__base64zd2decodezd2zz__base64z00(obj_t, obj_t);
	static obj_t BGl__base64zd2encodezd2portz00zz__base64z00(obj_t, obj_t);
	extern obj_t BGl_readzd2linezd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__base64z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__base64z00();
	extern bool_t bigloo_strcmp_at(obj_t, obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_base64zd2decodezd2zz__base64z00(obj_t, obj_t);
	static obj_t BGl__base64zd2decodezd2portz00zz__base64z00(obj_t, obj_t);
	extern obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	extern obj_t c_substring(obj_t, long, long);
	extern bool_t rgc_buffer_eof2_p(obj_t, long, long);
	extern bool_t rgc_fill_buffer(obj_t);
	static obj_t BGl__base64zd2encodezd2zz__base64z00(obj_t, obj_t);
	extern obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31932ze3ze5zz__base64z00(obj_t, obj_t);
	extern obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_base64zd2encodezd2portz00zz__base64z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_pemzd2markupzd2grammarz00zz__base64z00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string3010z00zz__base64z00,
		BgL_bgl_string3010za700za7za7_3035za7, "Illegal character in PEM markup",
		31);
	      DEFINE_STRING(BGl_string3011z00zz__base64z00,
		BgL_bgl_string3011za700za7za7_3036za7, "{~a}~a", 6);
	      DEFINE_STRING(BGl_string3012z00zz__base64z00,
		BgL_bgl_string3012za700za7za7_3037za7, "Illegal PEM markup", 18);
	      DEFINE_STRING(BGl_string3013z00zz__base64z00,
		BgL_bgl_string3013za700za7za7_3038za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string3014z00zz__base64z00,
		BgL_bgl_string3014za700za7za7_3039za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string3015z00zz__base64z00,
		BgL_bgl_string3015za700za7za7_3040za7,
		"/tmp/4.4a/runtime/Unsafe/base64.scm", 35);
	      DEFINE_STRING(BGl_string3016z00zz__base64z00,
		BgL_bgl_string3016za700za7za7_3041za7, "_base64-encode", 14);
	      DEFINE_STRING(BGl_string3017z00zz__base64z00,
		BgL_bgl_string3017za700za7za7_3042za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3018z00zz__base64z00,
		BgL_bgl_string3018za700za7za7_3043za7,
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/", 64);
	      DEFINE_STRING(BGl_string3019z00zz__base64z00,
		BgL_bgl_string3019za700za7za7_3044za7, "_base64-encode-port", 19);
	      DEFINE_STRING(BGl_string3020z00zz__base64z00,
		BgL_bgl_string3020za700za7za7_3045za7, "input-port", 10);
	      DEFINE_STRING(BGl_string3021z00zz__base64z00,
		BgL_bgl_string3021za700za7za7_3046za7, "output-port", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_base64zd2encodezd2envz00zz__base64z00,
		BgL_bgl__base64za7d2encode3047za7, opt_generic_entry,
		BGl__base64zd2encodezd2zz__base64z00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3022z00zz__base64z00,
		BgL_bgl_string3022za700za7za7_3048za7, "_base64-decode", 14);
	      DEFINE_STRING(BGl_string3023z00zz__base64z00,
		BgL_bgl_string3023za700za7za7_3049za7, "_base64-decode-port", 19);
	      DEFINE_STRING(BGl_string3027z00zz__base64z00,
		BgL_bgl_string3027za700za7za7_3050za7, "BEGIN ", 6);
	      DEFINE_STRING(BGl_string3028z00zz__base64z00,
		BgL_bgl_string3028za700za7za7_3051za7, "Illegal PEM begin markup", 24);
	      DEFINE_STRING(BGl_string3029z00zz__base64z00,
		BgL_bgl_string3029za700za7za7_3052za7, "&pem-decode-port", 16);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc3024z00zz__base64z00,
		BgL_bgl_za762za7c3za704anonymo3053za7,
		BGl_z62zc3z04anonymousza31932ze32977ze5zz__base64z00);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc3025z00zz__base64z00,
		BgL_bgl_za762za7c3za704anonymo3054za7,
		BGl_z62zc3z04anonymousza31932ze3ze5zz__base64z00);
	      DEFINE_STRING(BGl_string3030z00zz__base64z00,
		BgL_bgl_string3030za700za7za7_3055za7, "END ", 4);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc3026z00zz__base64z00,
		BgL_bgl_za762za7c3za704anonymo3056za7,
		BGl_z62zc3z04anonymousza31932ze32978ze5zz__base64z00);
	      DEFINE_STRING(BGl_string3031z00zz__base64z00,
		BgL_bgl_string3031za700za7za7_3057za7, "PEM begin/end markup mismatch", 29);
	      DEFINE_STRING(BGl_string3032z00zz__base64z00,
		BgL_bgl_string3032za700za7za7_3058za7, "Illegal character", 17);
	      DEFINE_STRING(BGl_string3033z00zz__base64z00,
		BgL_bgl_string3033za700za7za7_3059za7, "&pem-read-file", 14);
	      DEFINE_STRING(BGl_string3034z00zz__base64z00,
		BgL_bgl_string3034za700za7za7_3060za7, "__base64", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_base64zd2decodezd2portzd2envzd2zz__base64z00,
		BgL_bgl__base64za7d2decode3061za7, opt_generic_entry,
		BGl__base64zd2decodezd2portz00zz__base64z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_base64zd2encodezd2portzd2envzd2zz__base64z00,
		BgL_bgl__base64za7d2encode3062za7, opt_generic_entry,
		BGl__base64zd2encodezd2portz00zz__base64z00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_pemzd2readzd2filezd2envzd2zz__base64z00,
		BgL_bgl_za762pemza7d2readza7d23063za7,
		BGl_z62pemzd2readzd2filez62zz__base64z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_base64zd2decodezd2envz00zz__base64z00,
		BgL_bgl__base64za7d2decode3064za7, opt_generic_entry,
		BGl__base64zd2decodezd2zz__base64z00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_pemzd2decodezd2portzd2envzd2zz__base64z00,
		BgL_bgl_za762pemza7d2decodeza73065za7,
		BGl_z62pemzd2decodezd2portz62zz__base64z00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3009z00zz__base64z00,
		BgL_bgl_string3009za700za7za7_3066za7, "pem-decode-port", 15);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_bytezd2tablezd2zz__base64z00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__base64z00));
		     ADD_ROOT((void *) (&BGl_base64zd2decodezd2grammarz00zz__base64z00));
		     ADD_ROOT((void *) (&BGl_pemzd2markupzd2grammarz00zz__base64z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__base64z00(long
		BgL_checksumz00_5288, char *BgL_fromz00_5289)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__base64z00))
				{
					BGl_requirezd2initializa7ationz75zz__base64z00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__base64z00();
					BGl_importedzd2moduleszd2initz00zz__base64z00();
					return BGl_toplevelzd2initzd2zz__base64z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__base64z00()
	{
		{	/* Unsafe/base64.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__base64z00()
	{
		{	/* Unsafe/base64.scm 15 */
			{	/* Unsafe/base64.scm 173 */
				obj_t BgL_tablez00_1202;

				BgL_tablez00_1202 =
					BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 128),
					(uint8_t) (((long) 0)));
				{
					long BgL_iz00_1205;

					BgL_iz00_1205 = ((long) 0);
				BgL_zc3z04anonymousza31244ze3z87_1206:
					if ((BgL_iz00_1205 < ((long) 26)))
						{	/* Unsafe/base64.scm 177 */
							{	/* Unsafe/base64.scm 178 */
								long BgL_arg1246z00_1208;

								BgL_arg1246z00_1208 = (BgL_iz00_1205 + ((long) 65));
								{	/* Unsafe/base64.scm 175 */
									uint8_t BgL_tmpz00_5302;

									BgL_tmpz00_5302 = (uint8_t) (BgL_iz00_1205);
									BGL_U8VSET(BgL_tablez00_1202, BgL_arg1246z00_1208,
										BgL_tmpz00_5302);
								} BUNSPEC;
							}
							{	/* Unsafe/base64.scm 179 */
								long BgL_arg1247z00_1209;
								long BgL_arg1250z00_1210;

								BgL_arg1247z00_1209 = (BgL_iz00_1205 + ((long) 97));
								BgL_arg1250z00_1210 = (BgL_iz00_1205 + ((long) 26));
								{	/* Unsafe/base64.scm 175 */
									uint8_t BgL_tmpz00_5307;

									BgL_tmpz00_5307 = (uint8_t) (BgL_arg1250z00_1210);
									BGL_U8VSET(BgL_tablez00_1202, BgL_arg1247z00_1209,
										BgL_tmpz00_5307);
								} BUNSPEC;
							}
							{
								long BgL_iz00_5310;

								BgL_iz00_5310 = (BgL_iz00_1205 + ((long) 1));
								BgL_iz00_1205 = BgL_iz00_5310;
								goto BgL_zc3z04anonymousza31244ze3z87_1206;
							}
						}
					else
						{	/* Unsafe/base64.scm 177 */
							((bool_t) 0);
						}
				}
				{
					long BgL_iz00_2859;

					BgL_iz00_2859 = ((long) 0);
				BgL_loopz00_2858:
					if ((BgL_iz00_2859 < ((long) 10)))
						{	/* Unsafe/base64.scm 182 */
							{	/* Unsafe/base64.scm 183 */
								long BgL_arg1256z00_2863;
								long BgL_arg1258z00_2864;

								BgL_arg1256z00_2863 = (BgL_iz00_2859 + ((long) 48));
								BgL_arg1258z00_2864 = (BgL_iz00_2859 + ((long) 52));
								{	/* Unsafe/base64.scm 175 */
									uint8_t BgL_tmpz00_5316;

									BgL_tmpz00_5316 = (uint8_t) (BgL_arg1258z00_2864);
									BGL_U8VSET(BgL_tablez00_1202, BgL_arg1256z00_2863,
										BgL_tmpz00_5316);
								} BUNSPEC;
							}
							{
								long BgL_iz00_5319;

								BgL_iz00_5319 = (BgL_iz00_2859 + ((long) 1));
								BgL_iz00_2859 = BgL_iz00_5319;
								goto BgL_loopz00_2858;
							}
						}
					else
						{	/* Unsafe/base64.scm 182 */
							((bool_t) 0);
						}
				}
				{	/* Unsafe/base64.scm 175 */
					uint8_t BgL_tmpz00_5321;

					BgL_tmpz00_5321 = (uint8_t) (((long) 62));
					BGL_U8VSET(BgL_tablez00_1202, ((long) 43), BgL_tmpz00_5321);
				} BUNSPEC;
				{	/* Unsafe/base64.scm 175 */
					uint8_t BgL_tmpz00_5324;

					BgL_tmpz00_5324 = (uint8_t) (((long) 62));
					BGL_U8VSET(BgL_tablez00_1202, ((long) 45), BgL_tmpz00_5324);
				} BUNSPEC;
				{	/* Unsafe/base64.scm 175 */
					uint8_t BgL_tmpz00_5327;

					BgL_tmpz00_5327 = (uint8_t) (((long) 63));
					BGL_U8VSET(BgL_tablez00_1202, ((long) 47), BgL_tmpz00_5327);
				} BUNSPEC;
				{	/* Unsafe/base64.scm 175 */
					uint8_t BgL_tmpz00_5330;

					BgL_tmpz00_5330 = (uint8_t) (((long) 63));
					BGL_U8VSET(BgL_tablez00_1202, ((long) 95), BgL_tmpz00_5330);
				} BUNSPEC;
				BGl_bytezd2tablezd2zz__base64z00 = BgL_tablez00_1202;
			}
			{	/* Unsafe/base64.scm 300 */
				obj_t BgL_zc3z04anonymousza31265ze3z87_4902;

				{
					int BgL_tmpz00_5333;

					BgL_tmpz00_5333 = (int) (((long) 0));
					BgL_zc3z04anonymousza31265ze3z87_4902 =
						MAKE_EL_PROCEDURE(BgL_tmpz00_5333);
				}
				BGl_base64zd2decodezd2grammarz00zz__base64z00 =
					BgL_zc3z04anonymousza31265ze3z87_4902;
			}
			{	/* Unsafe/base64.scm 388 */
				obj_t BgL_zc3z04anonymousza31521ze3z87_4901;

				{
					int BgL_tmpz00_5336;

					BgL_tmpz00_5336 = (int) (((long) 0));
					BgL_zc3z04anonymousza31521ze3z87_4901 =
						MAKE_EL_PROCEDURE(BgL_tmpz00_5336);
				}
				return (BGl_pemzd2markupzd2grammarz00zz__base64z00 =
					BgL_zc3z04anonymousza31521ze3z87_4901, BUNSPEC);
			}
		}

	}



/* &<@anonymous:1521> */
	obj_t BGl_z62zc3z04anonymousza31521ze3ze5zz__base64z00(obj_t BgL_envz00_4903,
		obj_t BgL_iportz00_4904, long BgL_countz00_4905)
	{
		{	/* Unsafe/base64.scm 388 */
			{	/* Unsafe/base64.scm 388 */
				long BgL_countz00_4971;

				BgL_countz00_4971 = BgL_countz00_4905;
				{	/* Unsafe/base64.scm 388 */
					struct bgl_cell BgL_box3070_4972z00;
					obj_t BgL_countz00_4972;

					BgL_countz00_4972 =
						MAKE_CELL_STACK(BINT(BgL_countz00_4971), BgL_box3070_4972z00);
					return
						BGl_ignoreze70ze7zz__base64z00(BgL_countz00_4972,
						BgL_iportz00_4904);
				}
			}
		}

	}



/* ignore~0 */
	obj_t BGl_ignoreze70ze7zz__base64z00(obj_t BgL_countz00_4937,
		obj_t BgL_iportz00_4936)
	{
		{	/* Unsafe/base64.scm 388 */
		BGl_ignoreze70ze7zz__base64z00:
			{
				obj_t BgL_iportz00_1856;
				long BgL_lastzd2matchzd2_1857;
				long BgL_forwardz00_1858;
				long BgL_bufposz00_1859;
				obj_t BgL_iportz00_1841;
				long BgL_lastzd2matchzd2_1842;
				long BgL_forwardz00_1843;
				long BgL_bufposz00_1844;
				obj_t BgL_iportz00_1818;
				long BgL_lastzd2matchzd2_1819;
				long BgL_forwardz00_1820;
				long BgL_bufposz00_1821;
				obj_t BgL_iportz00_1797;
				long BgL_lastzd2matchzd2_1798;
				long BgL_forwardz00_1799;
				long BgL_bufposz00_1800;
				obj_t BgL_iportz00_1780;
				long BgL_lastzd2matchzd2_1781;
				long BgL_forwardz00_1782;
				long BgL_bufposz00_1783;

				{	/* Unsafe/base64.scm 388 */
					long BgL_res2602z00_3696;

					BgL_res2602z00_3696 = RGC_START_MATCH(BgL_iportz00_4936);
					BgL_res2602z00_3696;
				}
				{	/* Unsafe/base64.scm 388 */
					long BgL_matchz00_1992;

					{	/* Unsafe/base64.scm 388 */
						long BgL_arg1707z00_2021;
						long BgL_arg1708z00_2022;

						{	/* Unsafe/base64.scm 388 */
							long BgL_res2603z00_3698;

							BgL_res2603z00_3698 = RGC_BUFFER_FORWARD(BgL_iportz00_4936);
							BgL_arg1707z00_2021 = BgL_res2603z00_3698;
						}
						{	/* Unsafe/base64.scm 388 */
							long BgL_res2604z00_3700;

							BgL_res2604z00_3700 = RGC_BUFFER_BUFPOS(BgL_iportz00_4936);
							BgL_arg1708z00_2022 = BgL_res2604z00_3700;
						}
						BgL_iportz00_1856 = BgL_iportz00_4936;
						BgL_lastzd2matchzd2_1857 = ((long) 3);
						BgL_forwardz00_1858 = BgL_arg1707z00_2021;
						BgL_bufposz00_1859 = BgL_arg1708z00_2022;
					BgL_zc3z04anonymousza31563ze3z87_1860:
						if ((BgL_forwardz00_1858 == BgL_bufposz00_1859))
							{	/* Unsafe/base64.scm 388 */
								if (rgc_fill_buffer(BgL_iportz00_1856))
									{	/* Unsafe/base64.scm 388 */
										long BgL_arg1566z00_1863;
										long BgL_arg1567z00_1864;

										{	/* Unsafe/base64.scm 388 */
											long BgL_res2586z00_3659;

											BgL_res2586z00_3659 =
												RGC_BUFFER_FORWARD(BgL_iportz00_1856);
											BgL_arg1566z00_1863 = BgL_res2586z00_3659;
										}
										{	/* Unsafe/base64.scm 388 */
											long BgL_res2587z00_3661;

											BgL_res2587z00_3661 =
												RGC_BUFFER_BUFPOS(BgL_iportz00_1856);
											BgL_arg1567z00_1864 = BgL_res2587z00_3661;
										}
										{
											long BgL_bufposz00_5351;
											long BgL_forwardz00_5350;

											BgL_forwardz00_5350 = BgL_arg1566z00_1863;
											BgL_bufposz00_5351 = BgL_arg1567z00_1864;
											BgL_bufposz00_1859 = BgL_bufposz00_5351;
											BgL_forwardz00_1858 = BgL_forwardz00_5350;
											goto BgL_zc3z04anonymousza31563ze3z87_1860;
										}
									}
								else
									{	/* Unsafe/base64.scm 388 */
										BgL_matchz00_1992 = BgL_lastzd2matchzd2_1857;
									}
							}
						else
							{	/* Unsafe/base64.scm 388 */
								int BgL_curz00_1865;

								{	/* Unsafe/base64.scm 388 */
									int BgL_res2588z00_3664;

									BgL_res2588z00_3664 =
										RGC_BUFFER_GET_CHAR(BgL_iportz00_1856, BgL_forwardz00_1858);
									BgL_curz00_1865 = BgL_res2588z00_3664;
								}
								{	/* Unsafe/base64.scm 388 */

									if (((long) (BgL_curz00_1865) == ((long) 45)))
										{	/* Unsafe/base64.scm 388 */
											BgL_iportz00_1797 = BgL_iportz00_1856;
											BgL_lastzd2matchzd2_1798 = BgL_lastzd2matchzd2_1857;
											BgL_forwardz00_1799 = (((long) 1) + BgL_forwardz00_1858);
											BgL_bufposz00_1800 = BgL_bufposz00_1859;
										BgL_zc3z04anonymousza31531ze3z87_1801:
											{	/* Unsafe/base64.scm 388 */
												long BgL_newzd2matchzd2_1802;

												{	/* Unsafe/base64.scm 388 */
													long BgL_res2550z00_3570;

													BgL_res2550z00_3570 =
														RGC_STOP_MATCH(BgL_iportz00_1797,
														BgL_forwardz00_1799);
													BgL_res2550z00_3570;
												}
												BgL_newzd2matchzd2_1802 = ((long) 0);
												if ((BgL_forwardz00_1799 == BgL_bufposz00_1800))
													{	/* Unsafe/base64.scm 388 */
														if (rgc_fill_buffer(BgL_iportz00_1797))
															{	/* Unsafe/base64.scm 388 */
																long BgL_arg1534z00_1805;
																long BgL_arg1535z00_1806;

																{	/* Unsafe/base64.scm 388 */
																	long BgL_res2553z00_3577;

																	BgL_res2553z00_3577 =
																		RGC_BUFFER_FORWARD(BgL_iportz00_1797);
																	BgL_arg1534z00_1805 = BgL_res2553z00_3577;
																}
																{	/* Unsafe/base64.scm 388 */
																	long BgL_res2554z00_3579;

																	BgL_res2554z00_3579 =
																		RGC_BUFFER_BUFPOS(BgL_iportz00_1797);
																	BgL_arg1535z00_1806 = BgL_res2554z00_3579;
																}
																{
																	long BgL_bufposz00_5364;
																	long BgL_forwardz00_5363;

																	BgL_forwardz00_5363 = BgL_arg1534z00_1805;
																	BgL_bufposz00_5364 = BgL_arg1535z00_1806;
																	BgL_bufposz00_1800 = BgL_bufposz00_5364;
																	BgL_forwardz00_1799 = BgL_forwardz00_5363;
																	goto BgL_zc3z04anonymousza31531ze3z87_1801;
																}
															}
														else
															{	/* Unsafe/base64.scm 388 */
																BgL_matchz00_1992 = BgL_newzd2matchzd2_1802;
															}
													}
												else
													{	/* Unsafe/base64.scm 388 */
														int BgL_curz00_1807;

														{	/* Unsafe/base64.scm 388 */
															int BgL_res2555z00_3582;

															BgL_res2555z00_3582 =
																RGC_BUFFER_GET_CHAR(BgL_iportz00_1797,
																BgL_forwardz00_1799);
															BgL_curz00_1807 = BgL_res2555z00_3582;
														}
														{	/* Unsafe/base64.scm 388 */

															if (((long) (BgL_curz00_1807) == ((long) 45)))
																{	/* Unsafe/base64.scm 388 */
																	BgL_iportz00_1841 = BgL_iportz00_1797;
																	BgL_lastzd2matchzd2_1842 =
																		BgL_newzd2matchzd2_1802;
																	BgL_forwardz00_1843 =
																		(((long) 1) + BgL_forwardz00_1799);
																	BgL_bufposz00_1844 = BgL_bufposz00_1800;
																BgL_zc3z04anonymousza31553ze3z87_1845:
																	{	/* Unsafe/base64.scm 388 */
																		long BgL_newzd2matchzd2_1846;

																		{	/* Unsafe/base64.scm 388 */
																			long BgL_res2573z00_3628;

																			BgL_res2573z00_3628 =
																				RGC_STOP_MATCH(BgL_iportz00_1841,
																				BgL_forwardz00_1843);
																			BgL_res2573z00_3628;
																		}
																		BgL_newzd2matchzd2_1846 = ((long) 0);
																		if (
																			(BgL_forwardz00_1843 ==
																				BgL_bufposz00_1844))
																			{	/* Unsafe/base64.scm 388 */
																				if (rgc_fill_buffer(BgL_iportz00_1841))
																					{	/* Unsafe/base64.scm 388 */
																						long BgL_arg1556z00_1849;
																						long BgL_arg1557z00_1850;

																						{	/* Unsafe/base64.scm 388 */
																							long BgL_res2576z00_3635;

																							BgL_res2576z00_3635 =
																								RGC_BUFFER_FORWARD
																								(BgL_iportz00_1841);
																							BgL_arg1556z00_1849 =
																								BgL_res2576z00_3635;
																						}
																						{	/* Unsafe/base64.scm 388 */
																							long BgL_res2577z00_3637;

																							BgL_res2577z00_3637 =
																								RGC_BUFFER_BUFPOS
																								(BgL_iportz00_1841);
																							BgL_arg1557z00_1850 =
																								BgL_res2577z00_3637;
																						}
																						{
																							long BgL_bufposz00_5377;
																							long BgL_forwardz00_5376;

																							BgL_forwardz00_5376 =
																								BgL_arg1556z00_1849;
																							BgL_bufposz00_5377 =
																								BgL_arg1557z00_1850;
																							BgL_bufposz00_1844 =
																								BgL_bufposz00_5377;
																							BgL_forwardz00_1843 =
																								BgL_forwardz00_5376;
																							goto
																								BgL_zc3z04anonymousza31553ze3z87_1845;
																						}
																					}
																				else
																					{	/* Unsafe/base64.scm 388 */
																						BgL_matchz00_1992 =
																							BgL_newzd2matchzd2_1846;
																					}
																			}
																		else
																			{	/* Unsafe/base64.scm 388 */
																				int BgL_curz00_1851;

																				{	/* Unsafe/base64.scm 388 */
																					int BgL_res2578z00_3640;

																					BgL_res2578z00_3640 =
																						RGC_BUFFER_GET_CHAR
																						(BgL_iportz00_1841,
																						BgL_forwardz00_1843);
																					BgL_curz00_1851 = BgL_res2578z00_3640;
																				}
																				{	/* Unsafe/base64.scm 388 */

																					if (
																						((long) (BgL_curz00_1851) ==
																							((long) 45)))
																						{
																							long BgL_forwardz00_5383;
																							long BgL_lastzd2matchzd2_5382;

																							BgL_lastzd2matchzd2_5382 =
																								BgL_newzd2matchzd2_1846;
																							BgL_forwardz00_5383 =
																								(((long) 1) +
																								BgL_forwardz00_1843);
																							BgL_forwardz00_1843 =
																								BgL_forwardz00_5383;
																							BgL_lastzd2matchzd2_1842 =
																								BgL_lastzd2matchzd2_5382;
																							goto
																								BgL_zc3z04anonymousza31553ze3z87_1845;
																						}
																					else
																						{	/* Unsafe/base64.scm 388 */
																							if (
																								((long) (BgL_curz00_1851) ==
																									((long) 10)))
																								{	/* Unsafe/base64.scm 388 */
																									long BgL_arg1562z00_1855;

																									BgL_arg1562z00_1855 =
																										(((long) 1) +
																										BgL_forwardz00_1843);
																									{	/* Unsafe/base64.scm 388 */
																										long
																											BgL_newzd2matchzd2_3649;
																										{	/* Unsafe/base64.scm 388 */
																											long BgL_res2583z00_3652;

																											BgL_res2583z00_3652 =
																												RGC_STOP_MATCH
																												(BgL_iportz00_1841,
																												BgL_arg1562z00_1855);
																											BgL_res2583z00_3652;
																										}
																										BgL_newzd2matchzd2_3649 =
																											((long) 1);
																										BgL_matchz00_1992 =
																											BgL_newzd2matchzd2_3649;
																								}}
																							else
																								{	/* Unsafe/base64.scm 388 */
																									BgL_matchz00_1992 =
																										BgL_newzd2matchzd2_1846;
																								}
																						}
																				}
																			}
																	}
																}
															else
																{	/* Unsafe/base64.scm 388 */
																	if (((long) (BgL_curz00_1807) == ((long) 10)))
																		{	/* Unsafe/base64.scm 388 */
																			long BgL_arg1540z00_1811;

																			BgL_arg1540z00_1811 =
																				(((long) 1) + BgL_forwardz00_1799);
																			{	/* Unsafe/base64.scm 388 */
																				long BgL_newzd2matchzd2_3591;

																				{	/* Unsafe/base64.scm 388 */
																					long BgL_res2560z00_3594;

																					BgL_res2560z00_3594 =
																						RGC_STOP_MATCH(BgL_iportz00_1797,
																						BgL_arg1540z00_1811);
																					BgL_res2560z00_3594;
																				}
																				BgL_newzd2matchzd2_3591 = ((long) 1);
																				BgL_matchz00_1992 =
																					BgL_newzd2matchzd2_3591;
																		}}
																	else
																		{	/* Unsafe/base64.scm 388 */
																			BgL_matchz00_1992 =
																				BgL_newzd2matchzd2_1802;
																		}
																}
														}
													}
											}
										}
									else
										{	/* Unsafe/base64.scm 388 */
											bool_t BgL_test3082z00_5397;

											if (((long) (BgL_curz00_1865) == ((long) 10)))
												{	/* Unsafe/base64.scm 388 */
													BgL_test3082z00_5397 = ((bool_t) 1);
												}
											else
												{	/* Unsafe/base64.scm 388 */
													BgL_test3082z00_5397 =
														((long) (BgL_curz00_1865) == ((long) 13));
												}
											if (BgL_test3082z00_5397)
												{	/* Unsafe/base64.scm 388 */
													long BgL_arg1573z00_1870;

													BgL_arg1573z00_1870 =
														(((long) 1) + BgL_forwardz00_1858);
													{	/* Unsafe/base64.scm 388 */
														long BgL_newzd2matchzd2_3675;

														{	/* Unsafe/base64.scm 388 */
															long BgL_res2594z00_3678;

															BgL_res2594z00_3678 =
																RGC_STOP_MATCH(BgL_iportz00_1856,
																BgL_arg1573z00_1870);
															BgL_res2594z00_3678;
														}
														BgL_newzd2matchzd2_3675 = ((long) 3);
														BgL_matchz00_1992 = BgL_newzd2matchzd2_3675;
												}}
											else
												{	/* Unsafe/base64.scm 388 */
													BgL_iportz00_1818 = BgL_iportz00_1856;
													BgL_lastzd2matchzd2_1819 = BgL_lastzd2matchzd2_1857;
													BgL_forwardz00_1820 =
														(((long) 1) + BgL_forwardz00_1858);
													BgL_bufposz00_1821 = BgL_bufposz00_1859;
												BgL_zc3z04anonymousza31542ze3z87_1822:
													{	/* Unsafe/base64.scm 388 */
														long BgL_newzd2matchzd2_1823;

														{	/* Unsafe/base64.scm 388 */
															long BgL_res2562z00_3601;

															BgL_res2562z00_3601 =
																RGC_STOP_MATCH(BgL_iportz00_1818,
																BgL_forwardz00_1820);
															BgL_res2562z00_3601;
														}
														BgL_newzd2matchzd2_1823 = ((long) 2);
														if ((BgL_forwardz00_1820 == BgL_bufposz00_1821))
															{	/* Unsafe/base64.scm 388 */
																if (rgc_fill_buffer(BgL_iportz00_1818))
																	{	/* Unsafe/base64.scm 388 */
																		long BgL_arg1545z00_1826;
																		long BgL_arg1546z00_1827;

																		{	/* Unsafe/base64.scm 388 */
																			long BgL_res2565z00_3608;

																			BgL_res2565z00_3608 =
																				RGC_BUFFER_FORWARD(BgL_iportz00_1818);
																			BgL_arg1545z00_1826 = BgL_res2565z00_3608;
																		}
																		{	/* Unsafe/base64.scm 388 */
																			long BgL_res2566z00_3610;

																			BgL_res2566z00_3610 =
																				RGC_BUFFER_BUFPOS(BgL_iportz00_1818);
																			BgL_arg1546z00_1827 = BgL_res2566z00_3610;
																		}
																		{
																			long BgL_bufposz00_5413;
																			long BgL_forwardz00_5412;

																			BgL_forwardz00_5412 = BgL_arg1545z00_1826;
																			BgL_bufposz00_5413 = BgL_arg1546z00_1827;
																			BgL_bufposz00_1821 = BgL_bufposz00_5413;
																			BgL_forwardz00_1820 = BgL_forwardz00_5412;
																			goto
																				BgL_zc3z04anonymousza31542ze3z87_1822;
																		}
																	}
																else
																	{	/* Unsafe/base64.scm 388 */
																		BgL_matchz00_1992 = BgL_newzd2matchzd2_1823;
																	}
															}
														else
															{	/* Unsafe/base64.scm 388 */
																int BgL_curz00_1828;

																{	/* Unsafe/base64.scm 388 */
																	int BgL_res2567z00_3613;

																	BgL_res2567z00_3613 =
																		RGC_BUFFER_GET_CHAR(BgL_iportz00_1818,
																		BgL_forwardz00_1820);
																	BgL_curz00_1828 = BgL_res2567z00_3613;
																}
																{	/* Unsafe/base64.scm 388 */

																	{	/* Unsafe/base64.scm 388 */
																		bool_t BgL_test3086z00_5415;

																		if (
																			((long) (BgL_curz00_1828) == ((long) 10)))
																			{	/* Unsafe/base64.scm 388 */
																				BgL_test3086z00_5415 = ((bool_t) 1);
																			}
																		else
																			{	/* Unsafe/base64.scm 388 */
																				if (
																					((long) (BgL_curz00_1828) ==
																						((long) 13)))
																					{	/* Unsafe/base64.scm 388 */
																						BgL_test3086z00_5415 = ((bool_t) 1);
																					}
																				else
																					{	/* Unsafe/base64.scm 388 */
																						BgL_test3086z00_5415 =
																							(
																							(long) (BgL_curz00_1828) ==
																							((long) 45));
																			}}
																		if (BgL_test3086z00_5415)
																			{	/* Unsafe/base64.scm 388 */
																				BgL_matchz00_1992 =
																					BgL_newzd2matchzd2_1823;
																			}
																		else
																			{	/* Unsafe/base64.scm 388 */
																				BgL_iportz00_1780 = BgL_iportz00_1818;
																				BgL_lastzd2matchzd2_1781 =
																					BgL_newzd2matchzd2_1823;
																				BgL_forwardz00_1782 =
																					(((long) 1) + BgL_forwardz00_1820);
																				BgL_bufposz00_1783 = BgL_bufposz00_1821;
																			BgL_zc3z04anonymousza31522ze3z87_1784:
																				{	/* Unsafe/base64.scm 388 */
																					long BgL_newzd2matchzd2_1785;

																					{	/* Unsafe/base64.scm 388 */
																						long BgL_res2540z00_3547;

																						BgL_res2540z00_3547 =
																							RGC_STOP_MATCH(BgL_iportz00_1780,
																							BgL_forwardz00_1782);
																						BgL_res2540z00_3547;
																					}
																					BgL_newzd2matchzd2_1785 = ((long) 2);
																					if (
																						(BgL_forwardz00_1782 ==
																							BgL_bufposz00_1783))
																						{	/* Unsafe/base64.scm 388 */
																							if (rgc_fill_buffer
																								(BgL_iportz00_1780))
																								{	/* Unsafe/base64.scm 388 */
																									long BgL_arg1525z00_1788;
																									long BgL_arg1526z00_1789;

																									{	/* Unsafe/base64.scm 388 */
																										long BgL_res2543z00_3554;

																										BgL_res2543z00_3554 =
																											RGC_BUFFER_FORWARD
																											(BgL_iportz00_1780);
																										BgL_arg1525z00_1788 =
																											BgL_res2543z00_3554;
																									}
																									{	/* Unsafe/base64.scm 388 */
																										long BgL_res2544z00_3556;

																										BgL_res2544z00_3556 =
																											RGC_BUFFER_BUFPOS
																											(BgL_iportz00_1780);
																										BgL_arg1526z00_1789 =
																											BgL_res2544z00_3556;
																									}
																									{
																										long BgL_bufposz00_5432;
																										long BgL_forwardz00_5431;

																										BgL_forwardz00_5431 =
																											BgL_arg1525z00_1788;
																										BgL_bufposz00_5432 =
																											BgL_arg1526z00_1789;
																										BgL_bufposz00_1783 =
																											BgL_bufposz00_5432;
																										BgL_forwardz00_1782 =
																											BgL_forwardz00_5431;
																										goto
																											BgL_zc3z04anonymousza31522ze3z87_1784;
																									}
																								}
																							else
																								{	/* Unsafe/base64.scm 388 */
																									BgL_matchz00_1992 =
																										BgL_newzd2matchzd2_1785;
																								}
																						}
																					else
																						{	/* Unsafe/base64.scm 388 */
																							int BgL_curz00_1790;

																							{	/* Unsafe/base64.scm 388 */
																								int BgL_res2545z00_3559;

																								BgL_res2545z00_3559 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_iportz00_1780,
																									BgL_forwardz00_1782);
																								BgL_curz00_1790 =
																									BgL_res2545z00_3559;
																							}
																							{	/* Unsafe/base64.scm 388 */

																								{	/* Unsafe/base64.scm 388 */
																									bool_t BgL_test3091z00_5434;

																									if (
																										((long) (BgL_curz00_1790) ==
																											((long) 10)))
																										{	/* Unsafe/base64.scm 388 */
																											BgL_test3091z00_5434 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/base64.scm 388 */
																											if (
																												((long)
																													(BgL_curz00_1790) ==
																													((long) 13)))
																												{	/* Unsafe/base64.scm 388 */
																													BgL_test3091z00_5434 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/base64.scm 388 */
																													BgL_test3091z00_5434 =
																														(
																														(long)
																														(BgL_curz00_1790) ==
																														((long) 45));
																										}}
																									if (BgL_test3091z00_5434)
																										{	/* Unsafe/base64.scm 388 */
																											BgL_matchz00_1992 =
																												BgL_newzd2matchzd2_1785;
																										}
																									else
																										{
																											long BgL_forwardz00_5444;
																											long
																												BgL_lastzd2matchzd2_5443;
																											BgL_lastzd2matchzd2_5443 =
																												BgL_newzd2matchzd2_1785;
																											BgL_forwardz00_5444 =
																												(((long) 1) +
																												BgL_forwardz00_1782);
																											BgL_forwardz00_1782 =
																												BgL_forwardz00_5444;
																											BgL_lastzd2matchzd2_1781 =
																												BgL_lastzd2matchzd2_5443;
																											goto
																												BgL_zc3z04anonymousza31522ze3z87_1784;
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
					RGC_SET_FILEPOS(BgL_iportz00_4936);
					switch (BgL_matchz00_1992)
						{
						case ((long) 3):

							{	/* Unsafe/base64.scm 404 */
								obj_t BgL_cz00_1996;

								{	/* Unsafe/base64.scm 388 */
									bool_t BgL_test3094z00_5449;

									{	/* Unsafe/base64.scm 388 */
										long BgL_arg1672z00_1982;

										{	/* Unsafe/base64.scm 388 */
											long BgL_res2599z00_3690;

											BgL_res2599z00_3690 =
												RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4936);
											BgL_arg1672z00_1982 = BgL_res2599z00_3690;
										}
										BgL_test3094z00_5449 = (BgL_arg1672z00_1982 == ((long) 0));
									}
									if (BgL_test3094z00_5449)
										{	/* Unsafe/base64.scm 388 */
											BgL_cz00_1996 = BEOF;
										}
									else
										{	/* Unsafe/base64.scm 388 */
											unsigned char BgL_res2601z00_3694;

											BgL_res2601z00_3694 =
												RGC_BUFFER_CHARACTER(BgL_iportz00_4936);
											BgL_cz00_1996 = BCHAR(BgL_res2601z00_3694);
								}}
								{	/* Unsafe/base64.scm 405 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1683z00_1997;

									{	/* Unsafe/base64.scm 405 */
										BgL_z62iozd2parsezd2errorz62_bglt BgL_new1078z00_1998;

										{	/* Unsafe/base64.scm 405 */
											BgL_z62iozd2parsezd2errorz62_bglt BgL_new1077z00_2005;

											BgL_new1077z00_2005 =
												((BgL_z62iozd2parsezd2errorz62_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_z62iozd2parsezd2errorz62_bgl))));
											{	/* Unsafe/base64.scm 405 */
												long BgL_arg1692z00_2006;

												{	/* Unsafe/base64.scm 405 */
													long BgL_res2605z00_3703;

													BgL_res2605z00_3703 =
														BGL_CLASS_INDEX
														(BGl_z62iozd2parsezd2errorz62zz__objectz00);
													BgL_arg1692z00_2006 = BgL_res2605z00_3703;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1077z00_2005),
													BgL_arg1692z00_2006);
											}
											BgL_new1078z00_1998 = BgL_new1077z00_2005;
										}
										((((BgL_z62exceptionz62_bglt) COBJECT(
														((BgL_z62exceptionz62_bglt) BgL_new1078z00_1998)))->
												BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
										((((BgL_z62exceptionz62_bglt)
													COBJECT(((BgL_z62exceptionz62_bglt)
															BgL_new1078z00_1998)))->BgL_locationz00) =
											((obj_t) BFALSE), BUNSPEC);
										{
											obj_t BgL_auxz00_5462;

											{	/* Unsafe/base64.scm 405 */
												obj_t BgL_arg1684z00_1999;

												{	/* Unsafe/base64.scm 405 */
													obj_t BgL_arg1685z00_2000;

													{	/* Unsafe/base64.scm 405 */
														obj_t BgL_res2606z00_3707;

														{	/* Unsafe/base64.scm 405 */
															obj_t BgL_classz00_3706;

															BgL_classz00_3706 =
																BGl_z62iozd2parsezd2errorz62zz__objectz00;
															BgL_res2606z00_3707 =
																BGL_CLASS_ALL_FIELDS(BgL_classz00_3706);
														}
														BgL_arg1685z00_2000 = BgL_res2606z00_3707;
													}
													BgL_arg1684z00_1999 =
														VECTOR_REF(BgL_arg1685z00_2000, ((long) 2));
												}
												BgL_auxz00_5462 =
													BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
													(BgL_arg1684z00_1999);
											}
											((((BgL_z62exceptionz62_bglt) COBJECT(
															((BgL_z62exceptionz62_bglt)
																BgL_new1078z00_1998)))->BgL_stackz00) =
												((obj_t) BgL_auxz00_5462), BUNSPEC);
										}
										((((BgL_z62errorz62_bglt) COBJECT(
														((BgL_z62errorz62_bglt) BgL_new1078z00_1998)))->
												BgL_procz00) =
											((obj_t) BGl_string3009z00zz__base64z00), BUNSPEC);
										((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
															BgL_new1078z00_1998)))->BgL_msgz00) =
											((obj_t) BGl_string3010z00zz__base64z00), BUNSPEC);
										{
											obj_t BgL_auxz00_5472;

											{	/* Unsafe/base64.scm 408 */
												obj_t BgL_arg1686z00_2001;

												BgL_arg1686z00_2001 =
													BGl_readzd2linezd2zz__r4_input_6_10_2z00
													(BgL_iportz00_4936);
												{	/* Unsafe/base64.scm 408 */
													obj_t BgL_list1687z00_2002;

													{	/* Unsafe/base64.scm 408 */
														obj_t BgL_arg1688z00_2003;

														BgL_arg1688z00_2003 =
															MAKE_YOUNG_PAIR(BgL_arg1686z00_2001, BNIL);
														BgL_list1687z00_2002 =
															MAKE_YOUNG_PAIR(BgL_cz00_1996,
															BgL_arg1688z00_2003);
													}
													BgL_auxz00_5472 =
														BGl_formatz00zz__r4_output_6_10_3z00
														(BGl_string3011z00zz__base64z00,
														BgL_list1687z00_2002);
											}}
											((((BgL_z62errorz62_bglt) COBJECT(
															((BgL_z62errorz62_bglt) BgL_new1078z00_1998)))->
													BgL_objz00) = ((obj_t) BgL_auxz00_5472), BUNSPEC);
										}
										BgL_arg1683z00_1997 = BgL_new1078z00_1998;
									}
									return
										BGl_raisez00zz__errorz00(((obj_t) BgL_arg1683z00_1997));
								}
							}
							break;
						case ((long) 2):

							{	/* Unsafe/base64.scm 395 */
								obj_t BgL_sz00_2007;

								{	/* Unsafe/base64.scm 395 */
									obj_t BgL_res2610z00_3716;

									{	/* Unsafe/base64.scm 388 */
										long BgL_arg1582z00_3710;

										{	/* Unsafe/base64.scm 388 */
											long BgL_res2608z00_3712;

											BgL_res2608z00_3712 =
												RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4936);
											BgL_arg1582z00_3710 = BgL_res2608z00_3712;
										}
										BgL_res2610z00_3716 =
											rgc_buffer_substring(BgL_iportz00_4936, ((long) 0),
											BgL_arg1582z00_3710);
									}
									BgL_sz00_2007 = BgL_res2610z00_3716;
								}
								{	/* Unsafe/base64.scm 395 */
									obj_t BgL_countez00_2008;

									BgL_countez00_2008 =
										BGl_ignoreze70ze7zz__base64z00(BgL_countz00_4937,
										BgL_iportz00_4936);
									{	/* Unsafe/base64.scm 396 */

										if ((CELL_REF(BgL_countz00_4937) == BgL_countez00_2008))
											{	/* Unsafe/base64.scm 397 */
												return BgL_sz00_2007;
											}
										else
											{	/* Unsafe/base64.scm 399 */
												BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1695z00_2010;

												{	/* Unsafe/base64.scm 399 */
													BgL_z62iozd2parsezd2errorz62_bglt BgL_new1080z00_2011;

													{	/* Unsafe/base64.scm 399 */
														BgL_z62iozd2parsezd2errorz62_bglt
															BgL_new1079z00_2017;
														BgL_new1079z00_2017 =
															((BgL_z62iozd2parsezd2errorz62_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_z62iozd2parsezd2errorz62_bgl))));
														{	/* Unsafe/base64.scm 399 */
															long BgL_arg1701z00_2018;

															{	/* Unsafe/base64.scm 399 */
																long BgL_res2611z00_3718;

																BgL_res2611z00_3718 =
																	BGL_CLASS_INDEX
																	(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																BgL_arg1701z00_2018 = BgL_res2611z00_3718;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1079z00_2017),
																BgL_arg1701z00_2018);
														}
														BgL_new1080z00_2011 = BgL_new1079z00_2017;
													}
													((((BgL_z62exceptionz62_bglt) COBJECT(
																	((BgL_z62exceptionz62_bglt)
																		BgL_new1080z00_2011)))->BgL_fnamez00) =
														((obj_t) BFALSE), BUNSPEC);
													((((BgL_z62exceptionz62_bglt)
																COBJECT(((BgL_z62exceptionz62_bglt)
																		BgL_new1080z00_2011)))->BgL_locationz00) =
														((obj_t) BFALSE), BUNSPEC);
													{
														obj_t BgL_auxz00_5494;

														{	/* Unsafe/base64.scm 399 */
															obj_t BgL_arg1696z00_2012;

															{	/* Unsafe/base64.scm 399 */
																obj_t BgL_arg1697z00_2013;

																{	/* Unsafe/base64.scm 399 */
																	obj_t BgL_res2612z00_3722;

																	{	/* Unsafe/base64.scm 399 */
																		obj_t BgL_classz00_3721;

																		BgL_classz00_3721 =
																			BGl_z62iozd2parsezd2errorz62zz__objectz00;
																		BgL_res2612z00_3722 =
																			BGL_CLASS_ALL_FIELDS(BgL_classz00_3721);
																	}
																	BgL_arg1697z00_2013 = BgL_res2612z00_3722;
																}
																BgL_arg1696z00_2012 =
																	VECTOR_REF(BgL_arg1697z00_2013, ((long) 2));
															}
															BgL_auxz00_5494 =
																BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																(BgL_arg1696z00_2012);
														}
														((((BgL_z62exceptionz62_bglt) COBJECT(
																		((BgL_z62exceptionz62_bglt)
																			BgL_new1080z00_2011)))->BgL_stackz00) =
															((obj_t) BgL_auxz00_5494), BUNSPEC);
													}
													((((BgL_z62errorz62_bglt) COBJECT(
																	((BgL_z62errorz62_bglt)
																		BgL_new1080z00_2011)))->BgL_procz00) =
														((obj_t) BGl_string3009z00zz__base64z00), BUNSPEC);
													((((BgL_z62errorz62_bglt)
																COBJECT(((BgL_z62errorz62_bglt)
																		BgL_new1080z00_2011)))->BgL_msgz00) =
														((obj_t) BGl_string3012z00zz__base64z00), BUNSPEC);
													{
														obj_t BgL_auxz00_5504;

														{	/* Unsafe/base64.scm 402 */
															obj_t BgL_list1698z00_2014;

															{	/* Unsafe/base64.scm 402 */
																obj_t BgL_arg1699z00_2015;

																{	/* Unsafe/base64.scm 402 */
																	obj_t BgL_arg1700z00_2016;

																	BgL_arg1700z00_2016 =
																		MAKE_YOUNG_PAIR(BgL_countez00_2008, BNIL);
																	BgL_arg1699z00_2015 =
																		MAKE_YOUNG_PAIR(CELL_REF(BgL_countz00_4937),
																		BgL_arg1700z00_2016);
																}
																BgL_list1698z00_2014 =
																	MAKE_YOUNG_PAIR(BgL_sz00_2007,
																	BgL_arg1699z00_2015);
															}
															BgL_auxz00_5504 = BgL_list1698z00_2014;
														}
														((((BgL_z62errorz62_bglt) COBJECT(
																		((BgL_z62errorz62_bglt)
																			BgL_new1080z00_2011)))->BgL_objz00) =
															((obj_t) BgL_auxz00_5504), BUNSPEC);
													}
													BgL_arg1695z00_2010 = BgL_new1080z00_2011;
												}
												return
													BGl_raisez00zz__errorz00(
													((obj_t) BgL_arg1695z00_2010));
											}
									}
								}
							}
							break;
						case ((long) 1):

							{	/* Unsafe/base64.scm 393 */
								long BgL_arg1702z00_2019;

								{	/* Unsafe/base64.scm 388 */
									long BgL_res2614z00_3726;

									BgL_res2614z00_3726 =
										RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4936);
									BgL_arg1702z00_2019 = BgL_res2614z00_3726;
								}
								return BINT((BgL_arg1702z00_2019 - ((long) 1)));
							} break;
						case ((long) 0):

							{	/* Unsafe/base64.scm 390 */
								obj_t BgL_auxz00_4938;

								{	/* Unsafe/base64.scm 390 */
									long BgL_arg1704z00_2020;

									{	/* Unsafe/base64.scm 388 */
										long BgL_res2616z00_3730;

										BgL_res2616z00_3730 =
											RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4936);
										BgL_arg1704z00_2020 = BgL_res2616z00_3730;
									}
									BgL_auxz00_4938 =
										ADDFX(BINT(BgL_arg1704z00_2020),
										CELL_REF(BgL_countz00_4937));
								}
								CELL_SET(BgL_countz00_4937, BgL_auxz00_4938);
							}
							{

								goto BGl_ignoreze70ze7zz__base64z00;
							}
							break;
						default:
							return
								BGl_errorz00zz__errorz00(BGl_string3013z00zz__base64z00,
								BGl_string3014z00zz__base64z00, BINT(BgL_matchz00_1992));
						}
				}
			}
		}

	}



/* &<@anonymous:1265> */
	obj_t BGl_z62zc3z04anonymousza31265ze3ze5zz__base64z00(obj_t BgL_envz00_4906,
		obj_t BgL_iportz00_4907, obj_t BgL_opz00_4908, obj_t BgL_bufz00_4909,
		long BgL_wz00_4910, long BgL_lenz00_4911, obj_t BgL_hookz00_4912,
		bool_t BgL_eofzd2nozd2paddingz00_4913)
	{
		{	/* Unsafe/base64.scm 300 */
			{	/* Unsafe/base64.scm 300 */
				long BgL_wz00_4976;

				BgL_wz00_4976 = BgL_wz00_4910;
				{
					obj_t BgL_iportz00_5233;
					long BgL_lastzd2matchzd2_5234;
					long BgL_forwardz00_5235;
					long BgL_bufposz00_5236;
					obj_t BgL_iportz00_5210;
					long BgL_lastzd2matchzd2_5211;
					long BgL_forwardz00_5212;
					long BgL_bufposz00_5213;
					obj_t BgL_iportz00_5194;
					long BgL_lastzd2matchzd2_5195;
					long BgL_forwardz00_5196;
					long BgL_bufposz00_5197;
					obj_t BgL_iportz00_5167;
					long BgL_lastzd2matchzd2_5168;
					long BgL_forwardz00_5169;
					long BgL_bufposz00_5170;
					obj_t BgL_iportz00_5150;
					long BgL_lastzd2matchzd2_5151;
					long BgL_forwardz00_5152;
					long BgL_bufposz00_5153;
					obj_t BgL_iportz00_5128;
					long BgL_lastzd2matchzd2_5129;
					long BgL_forwardz00_5130;
					long BgL_bufposz00_5131;

				BgL_ignorez00_4980:
					{	/* Unsafe/base64.scm 300 */
						long BgL_res2535z00_4992;

						BgL_res2535z00_4992 = RGC_START_MATCH(BgL_iportz00_4907);
						BgL_res2535z00_4992;
					}
					{	/* Unsafe/base64.scm 300 */
						long BgL_matchz00_4993;

						{	/* Unsafe/base64.scm 300 */
							long BgL_arg1519z00_4994;
							long BgL_arg1520z00_4995;

							{	/* Unsafe/base64.scm 300 */
								long BgL_res2536z00_4996;

								BgL_res2536z00_4996 = RGC_BUFFER_FORWARD(BgL_iportz00_4907);
								BgL_arg1519z00_4994 = BgL_res2536z00_4996;
							}
							{	/* Unsafe/base64.scm 300 */
								long BgL_res2537z00_4997;

								BgL_res2537z00_4997 = RGC_BUFFER_BUFPOS(BgL_iportz00_4907);
								BgL_arg1520z00_4995 = BgL_res2537z00_4997;
							}
							BgL_iportz00_5194 = BgL_iportz00_4907;
							BgL_lastzd2matchzd2_5195 = ((long) 8);
							BgL_forwardz00_5196 = BgL_arg1519z00_4994;
							BgL_bufposz00_5197 = BgL_arg1520z00_4995;
						BgL_statezd20zd21046z00_4989:
							if ((BgL_forwardz00_5196 == BgL_bufposz00_5197))
								{	/* Unsafe/base64.scm 300 */
									if (rgc_fill_buffer(BgL_iportz00_5194))
										{	/* Unsafe/base64.scm 300 */
											long BgL_arg1306z00_5198;
											long BgL_arg1307z00_5199;

											{	/* Unsafe/base64.scm 300 */
												long BgL_res2352z00_5200;

												BgL_res2352z00_5200 =
													RGC_BUFFER_FORWARD(BgL_iportz00_5194);
												BgL_arg1306z00_5198 = BgL_res2352z00_5200;
											}
											{	/* Unsafe/base64.scm 300 */
												long BgL_res2353z00_5201;

												BgL_res2353z00_5201 =
													RGC_BUFFER_BUFPOS(BgL_iportz00_5194);
												BgL_arg1307z00_5199 = BgL_res2353z00_5201;
											}
											{
												long BgL_bufposz00_5531;
												long BgL_forwardz00_5530;

												BgL_forwardz00_5530 = BgL_arg1306z00_5198;
												BgL_bufposz00_5531 = BgL_arg1307z00_5199;
												BgL_bufposz00_5197 = BgL_bufposz00_5531;
												BgL_forwardz00_5196 = BgL_forwardz00_5530;
												goto BgL_statezd20zd21046z00_4989;
											}
										}
									else
										{	/* Unsafe/base64.scm 300 */
											BgL_matchz00_4993 = BgL_lastzd2matchzd2_5195;
										}
								}
							else
								{	/* Unsafe/base64.scm 300 */
									int BgL_curz00_5202;

									{	/* Unsafe/base64.scm 300 */
										int BgL_res2354z00_5203;

										BgL_res2354z00_5203 =
											RGC_BUFFER_GET_CHAR(BgL_iportz00_5194,
											BgL_forwardz00_5196);
										BgL_curz00_5202 = BgL_res2354z00_5203;
									}
									{	/* Unsafe/base64.scm 300 */

										{	/* Unsafe/base64.scm 300 */
											bool_t BgL_test3098z00_5533;

											if (((long) (BgL_curz00_5202) == ((long) 43)))
												{	/* Unsafe/base64.scm 300 */
													BgL_test3098z00_5533 = ((bool_t) 1);
												}
											else
												{	/* Unsafe/base64.scm 300 */
													if (((long) (BgL_curz00_5202) == ((long) 45)))
														{	/* Unsafe/base64.scm 300 */
															BgL_test3098z00_5533 = ((bool_t) 1);
														}
													else
														{	/* Unsafe/base64.scm 300 */
															bool_t BgL_test3101z00_5540;

															if (((long) (BgL_curz00_5202) >= ((long) 47)))
																{	/* Unsafe/base64.scm 300 */
																	BgL_test3101z00_5540 =
																		((long) (BgL_curz00_5202) < ((long) 58));
																}
															else
																{	/* Unsafe/base64.scm 300 */
																	BgL_test3101z00_5540 = ((bool_t) 0);
																}
															if (BgL_test3101z00_5540)
																{	/* Unsafe/base64.scm 300 */
																	BgL_test3098z00_5533 = ((bool_t) 1);
																}
															else
																{	/* Unsafe/base64.scm 300 */
																	bool_t BgL_test3103z00_5546;

																	if (((long) (BgL_curz00_5202) >= ((long) 65)))
																		{	/* Unsafe/base64.scm 300 */
																			BgL_test3103z00_5546 =
																				(
																				(long) (BgL_curz00_5202) < ((long) 91));
																		}
																	else
																		{	/* Unsafe/base64.scm 300 */
																			BgL_test3103z00_5546 = ((bool_t) 0);
																		}
																	if (BgL_test3103z00_5546)
																		{	/* Unsafe/base64.scm 300 */
																			BgL_test3098z00_5533 = ((bool_t) 1);
																		}
																	else
																		{	/* Unsafe/base64.scm 300 */
																			if (
																				((long) (BgL_curz00_5202) ==
																					((long) 95)))
																				{	/* Unsafe/base64.scm 300 */
																					BgL_test3098z00_5533 = ((bool_t) 1);
																				}
																			else
																				{	/* Unsafe/base64.scm 300 */
																					if (
																						((long) (BgL_curz00_5202) >=
																							((long) 97)))
																						{	/* Unsafe/base64.scm 300 */
																							BgL_test3098z00_5533 =
																								(
																								(long) (BgL_curz00_5202) <
																								((long) 123));
																						}
																					else
																						{	/* Unsafe/base64.scm 300 */
																							BgL_test3098z00_5533 =
																								((bool_t) 0);
																						}
																				}
																		}
																}
														}
												}
											if (BgL_test3098z00_5533)
												{	/* Unsafe/base64.scm 300 */
													BgL_iportz00_5167 = BgL_iportz00_5194;
													BgL_lastzd2matchzd2_5168 = BgL_lastzd2matchzd2_5195;
													BgL_forwardz00_5169 =
														(((long) 1) + BgL_forwardz00_5196);
													BgL_bufposz00_5170 = BgL_bufposz00_5197;
												BgL_statezd23zd21049z00_4988:
													{	/* Unsafe/base64.scm 300 */
														long BgL_newzd2matchzd2_5171;

														{	/* Unsafe/base64.scm 300 */
															bool_t BgL_test3107z00_5560;

															{	/* Unsafe/base64.scm 300 */
																bool_t BgL_rz00_5172;

																BgL_rz00_5172 =
																	rgc_buffer_eof2_p(BgL_iportz00_5167,
																	BgL_forwardz00_5169, BgL_bufposz00_5170);
																{	/* Unsafe/base64.scm 300 */
																	long BgL_res2373z00_5173;

																	BgL_res2373z00_5173 =
																		RGC_BUFFER_FORWARD(BgL_iportz00_5167);
																	BgL_forwardz00_5169 = BgL_res2373z00_5173;
																}
																{	/* Unsafe/base64.scm 300 */
																	long BgL_res2374z00_5174;

																	BgL_res2374z00_5174 =
																		RGC_BUFFER_BUFPOS(BgL_iportz00_5167);
																	BgL_bufposz00_5170 = BgL_res2374z00_5174;
																}
																BgL_test3107z00_5560 = BgL_rz00_5172;
															}
															if (BgL_test3107z00_5560)
																{	/* Unsafe/base64.scm 300 */
																	{	/* Unsafe/base64.scm 300 */
																		long BgL_res2375z00_5175;

																		BgL_res2375z00_5175 =
																			RGC_STOP_MATCH(BgL_iportz00_5167,
																			BgL_forwardz00_5169);
																		BgL_res2375z00_5175;
																	}
																	BgL_newzd2matchzd2_5171 = ((long) 6);
																}
															else
																{	/* Unsafe/base64.scm 300 */
																	{	/* Unsafe/base64.scm 300 */
																		long BgL_res2376z00_5176;

																		BgL_res2376z00_5176 =
																			RGC_STOP_MATCH(BgL_iportz00_5167,
																			BgL_forwardz00_5169);
																		BgL_res2376z00_5176;
																	}
																	BgL_newzd2matchzd2_5171 = ((long) 8);
														}}
														if ((BgL_forwardz00_5169 == BgL_bufposz00_5170))
															{	/* Unsafe/base64.scm 300 */
																if (rgc_fill_buffer(BgL_iportz00_5167))
																	{	/* Unsafe/base64.scm 300 */
																		long BgL_arg1327z00_5177;
																		long BgL_arg1328z00_5178;

																		{	/* Unsafe/base64.scm 300 */
																			long BgL_res2379z00_5179;

																			BgL_res2379z00_5179 =
																				RGC_BUFFER_FORWARD(BgL_iportz00_5167);
																			BgL_arg1327z00_5177 = BgL_res2379z00_5179;
																		}
																		{	/* Unsafe/base64.scm 300 */
																			long BgL_res2380z00_5180;

																			BgL_res2380z00_5180 =
																				RGC_BUFFER_BUFPOS(BgL_iportz00_5167);
																			BgL_arg1328z00_5178 = BgL_res2380z00_5180;
																		}
																		{
																			long BgL_bufposz00_5573;
																			long BgL_forwardz00_5572;

																			BgL_forwardz00_5572 = BgL_arg1327z00_5177;
																			BgL_bufposz00_5573 = BgL_arg1328z00_5178;
																			BgL_bufposz00_5170 = BgL_bufposz00_5573;
																			BgL_forwardz00_5169 = BgL_forwardz00_5572;
																			goto BgL_statezd23zd21049z00_4988;
																		}
																	}
																else
																	{	/* Unsafe/base64.scm 300 */
																		BgL_matchz00_4993 = BgL_newzd2matchzd2_5171;
																	}
															}
														else
															{	/* Unsafe/base64.scm 300 */
																int BgL_curz00_5181;

																{	/* Unsafe/base64.scm 300 */
																	int BgL_res2381z00_5182;

																	BgL_res2381z00_5182 =
																		RGC_BUFFER_GET_CHAR(BgL_iportz00_5167,
																		BgL_forwardz00_5169);
																	BgL_curz00_5181 = BgL_res2381z00_5182;
																}
																{	/* Unsafe/base64.scm 300 */

																	if (((long) (BgL_curz00_5181) == ((long) 61)))
																		{	/* Unsafe/base64.scm 300 */
																			long BgL_arg1330z00_5183;

																			BgL_arg1330z00_5183 =
																				(((long) 1) + BgL_forwardz00_5169);
																			{
																				long BgL_forwardz00_5185;
																				long BgL_bufposz00_5186;

																				BgL_forwardz00_5185 =
																					BgL_arg1330z00_5183;
																				BgL_bufposz00_5186 = BgL_bufposz00_5170;
																			BgL_statezd25zd21051z00_5184:
																				if (
																					(BgL_forwardz00_5185 ==
																						BgL_bufposz00_5186))
																					{	/* Unsafe/base64.scm 300 */
																						if (rgc_fill_buffer
																							(BgL_iportz00_5167))
																							{	/* Unsafe/base64.scm 300 */
																								long BgL_arg1280z00_5187;
																								long BgL_arg1281z00_5188;

																								{	/* Unsafe/base64.scm 300 */
																									long BgL_res2386z00_5189;

																									BgL_res2386z00_5189 =
																										RGC_BUFFER_FORWARD
																										(BgL_iportz00_5167);
																									BgL_arg1280z00_5187 =
																										BgL_res2386z00_5189;
																								}
																								{	/* Unsafe/base64.scm 300 */
																									long BgL_res2387z00_5190;

																									BgL_res2387z00_5190 =
																										RGC_BUFFER_BUFPOS
																										(BgL_iportz00_5167);
																									BgL_arg1281z00_5188 =
																										BgL_res2387z00_5190;
																								}
																								{
																									long BgL_bufposz00_5586;
																									long BgL_forwardz00_5585;

																									BgL_forwardz00_5585 =
																										BgL_arg1280z00_5187;
																									BgL_bufposz00_5586 =
																										BgL_arg1281z00_5188;
																									BgL_bufposz00_5186 =
																										BgL_bufposz00_5586;
																									BgL_forwardz00_5185 =
																										BgL_forwardz00_5585;
																									goto
																										BgL_statezd25zd21051z00_5184;
																								}
																							}
																						else
																							{	/* Unsafe/base64.scm 300 */
																								BgL_matchz00_4993 =
																									BgL_newzd2matchzd2_5171;
																							}
																					}
																				else
																					{	/* Unsafe/base64.scm 300 */
																						int BgL_curz00_5191;

																						{	/* Unsafe/base64.scm 300 */
																							int BgL_res2388z00_5192;

																							BgL_res2388z00_5192 =
																								RGC_BUFFER_GET_CHAR
																								(BgL_iportz00_5167,
																								BgL_forwardz00_5185);
																							BgL_curz00_5191 =
																								BgL_res2388z00_5192;
																						}
																						{	/* Unsafe/base64.scm 300 */

																							if (
																								((long) (BgL_curz00_5191) ==
																									((long) 61)))
																								{	/* Unsafe/base64.scm 300 */
																									BgL_iportz00_5128 =
																										BgL_iportz00_5167;
																									BgL_lastzd2matchzd2_5129 =
																										BgL_newzd2matchzd2_5171;
																									BgL_forwardz00_5130 =
																										(((long) 1) +
																										BgL_forwardz00_5185);
																									BgL_bufposz00_5131 =
																										BgL_bufposz00_5186;
																								BgL_statezd27zd21053z00_4986:
																									if (
																										(BgL_forwardz00_5130 ==
																											BgL_bufposz00_5131))
																										{	/* Unsafe/base64.scm 300 */
																											if (rgc_fill_buffer
																												(BgL_iportz00_5128))
																												{	/* Unsafe/base64.scm 300 */
																													long
																														BgL_arg1362z00_5132;
																													long
																														BgL_arg1363z00_5133;
																													{	/* Unsafe/base64.scm 300 */
																														long
																															BgL_res2425z00_5134;
																														BgL_res2425z00_5134
																															=
																															RGC_BUFFER_FORWARD
																															(BgL_iportz00_5128);
																														BgL_arg1362z00_5132
																															=
																															BgL_res2425z00_5134;
																													}
																													{	/* Unsafe/base64.scm 300 */
																														long
																															BgL_res2426z00_5135;
																														BgL_res2426z00_5135
																															=
																															RGC_BUFFER_BUFPOS
																															(BgL_iportz00_5128);
																														BgL_arg1363z00_5133
																															=
																															BgL_res2426z00_5135;
																													}
																													if (
																														(BgL_arg1362z00_5132
																															==
																															BgL_arg1363z00_5133))
																														{	/* Unsafe/base64.scm 300 */
																															if (rgc_fill_buffer(BgL_iportz00_5128))
																																{	/* Unsafe/base64.scm 300 */
																																	long
																																		BgL_arg1362z00_5136;
																																	long
																																		BgL_arg1363z00_5137;
																																	{	/* Unsafe/base64.scm 300 */
																																		long
																																			BgL_res2429z00_5138;
																																		BgL_res2429z00_5138
																																			=
																																			RGC_BUFFER_FORWARD
																																			(BgL_iportz00_5128);
																																		BgL_arg1362z00_5136
																																			=
																																			BgL_res2429z00_5138;
																																	}
																																	{	/* Unsafe/base64.scm 300 */
																																		long
																																			BgL_res2430z00_5139;
																																		BgL_res2430z00_5139
																																			=
																																			RGC_BUFFER_BUFPOS
																																			(BgL_iportz00_5128);
																																		BgL_arg1363z00_5137
																																			=
																																			BgL_res2430z00_5139;
																																	}
																																	{
																																		long
																																			BgL_bufposz00_5604;
																																		long
																																			BgL_forwardz00_5603;
																																		BgL_forwardz00_5603
																																			=
																																			BgL_arg1362z00_5136;
																																		BgL_bufposz00_5604
																																			=
																																			BgL_arg1363z00_5137;
																																		BgL_bufposz00_5131
																																			=
																																			BgL_bufposz00_5604;
																																		BgL_forwardz00_5130
																																			=
																																			BgL_forwardz00_5603;
																																		goto
																																			BgL_statezd27zd21053z00_4986;
																																	}
																																}
																															else
																																{	/* Unsafe/base64.scm 300 */
																																	BgL_matchz00_4993
																																		=
																																		BgL_lastzd2matchzd2_5129;
																																}
																														}
																													else
																														{	/* Unsafe/base64.scm 300 */
																															int
																																BgL_curz00_5140;
																															{	/* Unsafe/base64.scm 300 */
																																int
																																	BgL_res2431z00_5141;
																																BgL_res2431z00_5141
																																	=
																																	RGC_BUFFER_GET_CHAR
																																	(BgL_iportz00_5128,
																																	BgL_arg1362z00_5132);
																																BgL_curz00_5140
																																	=
																																	BgL_res2431z00_5141;
																															}
																															{	/* Unsafe/base64.scm 300 */

																																if (
																																	((long)
																																		(BgL_curz00_5140)
																																		==
																																		((long)
																																			61)))
																																	{	/* Unsafe/base64.scm 300 */
																																		long
																																			BgL_arg1365z00_5142;
																																		BgL_arg1365z00_5142
																																			=
																																			(((long)
																																				1) +
																																			BgL_arg1362z00_5132);
																																		{	/* Unsafe/base64.scm 300 */
																																			long
																																				BgL_newzd2matchzd2_5143;
																																			{	/* Unsafe/base64.scm 300 */
																																				long
																																					BgL_res2434z00_5144;
																																				BgL_res2434z00_5144
																																					=
																																					RGC_STOP_MATCH
																																					(BgL_iportz00_5128,
																																					BgL_arg1365z00_5142);
																																				BgL_res2434z00_5144;
																																			}
																																			BgL_newzd2matchzd2_5143
																																				=
																																				((long)
																																				5);
																																			BgL_matchz00_4993
																																				=
																																				BgL_newzd2matchzd2_5143;
																																	}}
																																else
																																	{	/* Unsafe/base64.scm 300 */
																																		BgL_matchz00_4993
																																			=
																																			BgL_lastzd2matchzd2_5129;
																																	}
																															}
																														}
																												}
																											else
																												{	/* Unsafe/base64.scm 300 */
																													BgL_matchz00_4993 =
																														BgL_lastzd2matchzd2_5129;
																												}
																										}
																									else
																										{	/* Unsafe/base64.scm 300 */
																											int BgL_curz00_5145;

																											{	/* Unsafe/base64.scm 300 */
																												int BgL_res2435z00_5146;

																												BgL_res2435z00_5146 =
																													RGC_BUFFER_GET_CHAR
																													(BgL_iportz00_5128,
																													BgL_forwardz00_5130);
																												BgL_curz00_5145 =
																													BgL_res2435z00_5146;
																											}
																											{	/* Unsafe/base64.scm 300 */

																												if (
																													((long)
																														(BgL_curz00_5145) ==
																														((long) 61)))
																													{	/* Unsafe/base64.scm 300 */
																														long
																															BgL_arg1365z00_5147;
																														BgL_arg1365z00_5147
																															=
																															(((long) 1) +
																															BgL_forwardz00_5130);
																														{	/* Unsafe/base64.scm 300 */
																															long
																																BgL_newzd2matchzd2_5148;
																															{	/* Unsafe/base64.scm 300 */
																																long
																																	BgL_res2438z00_5149;
																																BgL_res2438z00_5149
																																	=
																																	RGC_STOP_MATCH
																																	(BgL_iportz00_5128,
																																	BgL_arg1365z00_5147);
																																BgL_res2438z00_5149;
																															}
																															BgL_newzd2matchzd2_5148
																																= ((long) 5);
																															BgL_matchz00_4993
																																=
																																BgL_newzd2matchzd2_5148;
																													}}
																												else
																													{	/* Unsafe/base64.scm 300 */
																														BgL_matchz00_4993 =
																															BgL_lastzd2matchzd2_5129;
																													}
																											}
																										}
																								}
																							else
																								{	/* Unsafe/base64.scm 300 */
																									BgL_matchz00_4993 =
																										BgL_newzd2matchzd2_5171;
																								}
																						}
																					}
																			}
																		}
																	else
																		{	/* Unsafe/base64.scm 300 */
																			bool_t BgL_test3120z00_5618;

																			if (
																				((long) (BgL_curz00_5181) ==
																					((long) 43)))
																				{	/* Unsafe/base64.scm 300 */
																					BgL_test3120z00_5618 = ((bool_t) 1);
																				}
																			else
																				{	/* Unsafe/base64.scm 300 */
																					if (
																						((long) (BgL_curz00_5181) ==
																							((long) 45)))
																						{	/* Unsafe/base64.scm 300 */
																							BgL_test3120z00_5618 =
																								((bool_t) 1);
																						}
																					else
																						{	/* Unsafe/base64.scm 300 */
																							bool_t BgL_test3123z00_5625;

																							if (
																								((long) (BgL_curz00_5181) >=
																									((long) 47)))
																								{	/* Unsafe/base64.scm 300 */
																									BgL_test3123z00_5625 =
																										(
																										(long) (BgL_curz00_5181) <
																										((long) 58));
																								}
																							else
																								{	/* Unsafe/base64.scm 300 */
																									BgL_test3123z00_5625 =
																										((bool_t) 0);
																								}
																							if (BgL_test3123z00_5625)
																								{	/* Unsafe/base64.scm 300 */
																									BgL_test3120z00_5618 =
																										((bool_t) 1);
																								}
																							else
																								{	/* Unsafe/base64.scm 300 */
																									bool_t BgL_test3125z00_5631;

																									if (
																										((long) (BgL_curz00_5181) >=
																											((long) 65)))
																										{	/* Unsafe/base64.scm 300 */
																											BgL_test3125z00_5631 =
																												(
																												(long) (BgL_curz00_5181)
																												< ((long) 91));
																										}
																									else
																										{	/* Unsafe/base64.scm 300 */
																											BgL_test3125z00_5631 =
																												((bool_t) 0);
																										}
																									if (BgL_test3125z00_5631)
																										{	/* Unsafe/base64.scm 300 */
																											BgL_test3120z00_5618 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Unsafe/base64.scm 300 */
																											if (
																												((long)
																													(BgL_curz00_5181) ==
																													((long) 95)))
																												{	/* Unsafe/base64.scm 300 */
																													BgL_test3120z00_5618 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/base64.scm 300 */
																													if (
																														((long)
																															(BgL_curz00_5181)
																															>= ((long) 97)))
																														{	/* Unsafe/base64.scm 300 */
																															BgL_test3120z00_5618
																																=
																																((long)
																																(BgL_curz00_5181)
																																< ((long) 123));
																														}
																													else
																														{	/* Unsafe/base64.scm 300 */
																															BgL_test3120z00_5618
																																= ((bool_t) 0);
																														}
																												}
																										}
																								}
																						}
																				}
																			if (BgL_test3120z00_5618)
																				{	/* Unsafe/base64.scm 300 */
																					long BgL_arg1339z00_5193;

																					BgL_arg1339z00_5193 =
																						(((long) 1) + BgL_forwardz00_5169);
																					BgL_iportz00_5150 = BgL_iportz00_5167;
																					BgL_lastzd2matchzd2_5151 =
																						BgL_newzd2matchzd2_5171;
																					BgL_forwardz00_5152 =
																						BgL_arg1339z00_5193;
																					BgL_bufposz00_5153 =
																						BgL_bufposz00_5170;
																				BgL_statezd24zd21050z00_4987:
																					{	/* Unsafe/base64.scm 300 */
																						long BgL_newzd2matchzd2_5154;

																						{	/* Unsafe/base64.scm 300 */
																							bool_t BgL_test3129z00_5646;

																							{	/* Unsafe/base64.scm 300 */
																								bool_t BgL_rz00_5155;

																								BgL_rz00_5155 =
																									rgc_buffer_eof2_p
																									(BgL_iportz00_5150,
																									BgL_forwardz00_5152,
																									BgL_bufposz00_5153);
																								{	/* Unsafe/base64.scm 300 */
																									long BgL_res2403z00_5156;

																									BgL_res2403z00_5156 =
																										RGC_BUFFER_FORWARD
																										(BgL_iportz00_5150);
																									BgL_forwardz00_5152 =
																										BgL_res2403z00_5156;
																								}
																								{	/* Unsafe/base64.scm 300 */
																									long BgL_res2404z00_5157;

																									BgL_res2404z00_5157 =
																										RGC_BUFFER_BUFPOS
																										(BgL_iportz00_5150);
																									BgL_bufposz00_5153 =
																										BgL_res2404z00_5157;
																								}
																								BgL_test3129z00_5646 =
																									BgL_rz00_5155;
																							}
																							if (BgL_test3129z00_5646)
																								{	/* Unsafe/base64.scm 300 */
																									{	/* Unsafe/base64.scm 300 */
																										long BgL_res2405z00_5158;

																										BgL_res2405z00_5158 =
																											RGC_STOP_MATCH
																											(BgL_iportz00_5150,
																											BgL_forwardz00_5152);
																										BgL_res2405z00_5158;
																									}
																									BgL_newzd2matchzd2_5154 =
																										((long) 4);
																								}
																							else
																								{	/* Unsafe/base64.scm 300 */
																									BgL_newzd2matchzd2_5154 =
																										BgL_lastzd2matchzd2_5151;
																								}
																						}
																						if (
																							(BgL_forwardz00_5152 ==
																								BgL_bufposz00_5153))
																							{	/* Unsafe/base64.scm 300 */
																								if (rgc_fill_buffer
																									(BgL_iportz00_5150))
																									{	/* Unsafe/base64.scm 300 */
																										long BgL_arg1345z00_5159;
																										long BgL_arg1346z00_5160;

																										{	/* Unsafe/base64.scm 300 */
																											long BgL_res2408z00_5161;

																											BgL_res2408z00_5161 =
																												RGC_BUFFER_FORWARD
																												(BgL_iportz00_5150);
																											BgL_arg1345z00_5159 =
																												BgL_res2408z00_5161;
																										}
																										{	/* Unsafe/base64.scm 300 */
																											long BgL_res2409z00_5162;

																											BgL_res2409z00_5162 =
																												RGC_BUFFER_BUFPOS
																												(BgL_iportz00_5150);
																											BgL_arg1346z00_5160 =
																												BgL_res2409z00_5162;
																										}
																										{
																											long BgL_bufposz00_5658;
																											long BgL_forwardz00_5657;

																											BgL_forwardz00_5657 =
																												BgL_arg1345z00_5159;
																											BgL_bufposz00_5658 =
																												BgL_arg1346z00_5160;
																											BgL_bufposz00_5153 =
																												BgL_bufposz00_5658;
																											BgL_forwardz00_5152 =
																												BgL_forwardz00_5657;
																											goto
																												BgL_statezd24zd21050z00_4987;
																										}
																									}
																								else
																									{	/* Unsafe/base64.scm 300 */
																										BgL_matchz00_4993 =
																											BgL_newzd2matchzd2_5154;
																									}
																							}
																						else
																							{	/* Unsafe/base64.scm 300 */
																								int BgL_curz00_5163;

																								{	/* Unsafe/base64.scm 300 */
																									int BgL_res2410z00_5164;

																									BgL_res2410z00_5164 =
																										RGC_BUFFER_GET_CHAR
																										(BgL_iportz00_5150,
																										BgL_forwardz00_5152);
																									BgL_curz00_5163 =
																										BgL_res2410z00_5164;
																								}
																								{	/* Unsafe/base64.scm 300 */

																									if (
																										((long) (BgL_curz00_5163) ==
																											((long) 61)))
																										{	/* Unsafe/base64.scm 300 */
																											long BgL_arg1348z00_5165;

																											BgL_arg1348z00_5165 =
																												(((long) 1) +
																												BgL_forwardz00_5152);
																											BgL_iportz00_5233 =
																												BgL_iportz00_5150;
																											BgL_lastzd2matchzd2_5234 =
																												BgL_newzd2matchzd2_5154;
																											BgL_forwardz00_5235 =
																												BgL_arg1348z00_5165;
																											BgL_bufposz00_5236 =
																												BgL_bufposz00_5153;
																										BgL_statezd210zd21056z00_4991:
																											{	/* Unsafe/base64.scm 300 */
																												long
																													BgL_newzd2matchzd2_5237;
																												{	/* Unsafe/base64.scm 300 */
																													bool_t
																														BgL_test3133z00_5664;
																													{	/* Unsafe/base64.scm 300 */
																														bool_t
																															BgL_rz00_5238;
																														BgL_rz00_5238 =
																															rgc_buffer_eof2_p
																															(BgL_iportz00_5233,
																															BgL_forwardz00_5235,
																															BgL_bufposz00_5236);
																														{	/* Unsafe/base64.scm 300 */
																															long
																																BgL_res2292z00_5239;
																															BgL_res2292z00_5239
																																=
																																RGC_BUFFER_FORWARD
																																(BgL_iportz00_5233);
																															BgL_forwardz00_5235
																																=
																																BgL_res2292z00_5239;
																														}
																														{	/* Unsafe/base64.scm 300 */
																															long
																																BgL_res2293z00_5240;
																															BgL_res2293z00_5240
																																=
																																RGC_BUFFER_BUFPOS
																																(BgL_iportz00_5233);
																															BgL_bufposz00_5236
																																=
																																BgL_res2293z00_5240;
																														}
																														BgL_test3133z00_5664
																															= BgL_rz00_5238;
																													}
																													if (BgL_test3133z00_5664)
																														{	/* Unsafe/base64.scm 300 */
																															{	/* Unsafe/base64.scm 300 */
																																long
																																	BgL_res2294z00_5241;
																																BgL_res2294z00_5241
																																	=
																																	RGC_STOP_MATCH
																																	(BgL_iportz00_5233,
																																	BgL_forwardz00_5235);
																																BgL_res2294z00_5241;
																															}
																															BgL_newzd2matchzd2_5237
																																= ((long) 4);
																														}
																													else
																														{	/* Unsafe/base64.scm 300 */
																															BgL_newzd2matchzd2_5237
																																=
																																BgL_lastzd2matchzd2_5234;
																														}
																												}
																												if (
																													(BgL_forwardz00_5235
																														==
																														BgL_bufposz00_5236))
																													{	/* Unsafe/base64.scm 300 */
																														if (rgc_fill_buffer
																															(BgL_iportz00_5233))
																															{	/* Unsafe/base64.scm 300 */
																																long
																																	BgL_arg1270z00_5242;
																																long
																																	BgL_arg1271z00_5243;
																																{	/* Unsafe/base64.scm 300 */
																																	long
																																		BgL_res2297z00_5244;
																																	BgL_res2297z00_5244
																																		=
																																		RGC_BUFFER_FORWARD
																																		(BgL_iportz00_5233);
																																	BgL_arg1270z00_5242
																																		=
																																		BgL_res2297z00_5244;
																																}
																																{	/* Unsafe/base64.scm 300 */
																																	long
																																		BgL_res2298z00_5245;
																																	BgL_res2298z00_5245
																																		=
																																		RGC_BUFFER_BUFPOS
																																		(BgL_iportz00_5233);
																																	BgL_arg1271z00_5243
																																		=
																																		BgL_res2298z00_5245;
																																}
																																{
																																	long
																																		BgL_bufposz00_5676;
																																	long
																																		BgL_forwardz00_5675;
																																	BgL_forwardz00_5675
																																		=
																																		BgL_arg1270z00_5242;
																																	BgL_bufposz00_5676
																																		=
																																		BgL_arg1271z00_5243;
																																	BgL_bufposz00_5236
																																		=
																																		BgL_bufposz00_5676;
																																	BgL_forwardz00_5235
																																		=
																																		BgL_forwardz00_5675;
																																	goto
																																		BgL_statezd210zd21056z00_4991;
																																}
																															}
																														else
																															{	/* Unsafe/base64.scm 300 */
																																BgL_matchz00_4993
																																	=
																																	BgL_newzd2matchzd2_5237;
																															}
																													}
																												else
																													{	/* Unsafe/base64.scm 300 */
																														int BgL_curz00_5246;

																														{	/* Unsafe/base64.scm 300 */
																															int
																																BgL_res2299z00_5247;
																															BgL_res2299z00_5247
																																=
																																RGC_BUFFER_GET_CHAR
																																(BgL_iportz00_5233,
																																BgL_forwardz00_5235);
																															BgL_curz00_5246 =
																																BgL_res2299z00_5247;
																														}
																														{	/* Unsafe/base64.scm 300 */

																															if (
																																((long)
																																	(BgL_curz00_5246)
																																	==
																																	((long) 61)))
																																{	/* Unsafe/base64.scm 300 */
																																	long
																																		BgL_arg1273z00_5248;
																																	BgL_arg1273z00_5248
																																		=
																																		(((long) 1)
																																		+
																																		BgL_forwardz00_5235);
																																	{	/* Unsafe/base64.scm 300 */
																																		long
																																			BgL_bufposz00_5249;
																																		BgL_bufposz00_5249
																																			=
																																			BgL_bufposz00_5236;
																																		{	/* Unsafe/base64.scm 300 */
																																			long
																																				BgL_newzd2matchzd2_5250;
																																			{	/* Unsafe/base64.scm 300 */
																																				long
																																					BgL_res2302z00_5251;
																																				BgL_res2302z00_5251
																																					=
																																					RGC_STOP_MATCH
																																					(BgL_iportz00_5233,
																																					BgL_arg1273z00_5248);
																																				BgL_res2302z00_5251;
																																			}
																																			BgL_newzd2matchzd2_5250
																																				=
																																				((long)
																																				3);
																																			BgL_matchz00_4993
																																				=
																																				BgL_newzd2matchzd2_5250;
																																}}}
																															else
																																{	/* Unsafe/base64.scm 300 */
																																	BgL_matchz00_4993
																																		=
																																		BgL_newzd2matchzd2_5237;
																																}
																														}
																													}
																											}
																										}
																									else
																										{	/* Unsafe/base64.scm 300 */
																											bool_t
																												BgL_test3137z00_5683;
																											if (((long)
																													(BgL_curz00_5163) ==
																													((long) 43)))
																												{	/* Unsafe/base64.scm 300 */
																													BgL_test3137z00_5683 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Unsafe/base64.scm 300 */
																													if (
																														((long)
																															(BgL_curz00_5163)
																															== ((long) 45)))
																														{	/* Unsafe/base64.scm 300 */
																															BgL_test3137z00_5683
																																= ((bool_t) 1);
																														}
																													else
																														{	/* Unsafe/base64.scm 300 */
																															bool_t
																																BgL_test3140z00_5690;
																															if (((long)
																																	(BgL_curz00_5163)
																																	>=
																																	((long) 47)))
																																{	/* Unsafe/base64.scm 300 */
																																	BgL_test3140z00_5690
																																		=
																																		((long)
																																		(BgL_curz00_5163)
																																		<
																																		((long)
																																			58));
																																}
																															else
																																{	/* Unsafe/base64.scm 300 */
																																	BgL_test3140z00_5690
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_test3140z00_5690)
																																{	/* Unsafe/base64.scm 300 */
																																	BgL_test3137z00_5683
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Unsafe/base64.scm 300 */
																																	bool_t
																																		BgL_test3142z00_5696;
																																	if (((long)
																																			(BgL_curz00_5163)
																																			>=
																																			((long)
																																				65)))
																																		{	/* Unsafe/base64.scm 300 */
																																			BgL_test3142z00_5696
																																				=
																																				((long)
																																				(BgL_curz00_5163)
																																				<
																																				((long)
																																					91));
																																		}
																																	else
																																		{	/* Unsafe/base64.scm 300 */
																																			BgL_test3142z00_5696
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																	if (BgL_test3142z00_5696)
																																		{	/* Unsafe/base64.scm 300 */
																																			BgL_test3137z00_5683
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Unsafe/base64.scm 300 */
																																			if (
																																				((long)
																																					(BgL_curz00_5163)
																																					==
																																					((long) 95)))
																																				{	/* Unsafe/base64.scm 300 */
																																					BgL_test3137z00_5683
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Unsafe/base64.scm 300 */
																																					if (
																																						((long) (BgL_curz00_5163) >= ((long) 97)))
																																						{	/* Unsafe/base64.scm 300 */
																																							BgL_test3137z00_5683
																																								=
																																								(
																																								(long)
																																								(BgL_curz00_5163)
																																								<
																																								((long) 123));
																																						}
																																					else
																																						{	/* Unsafe/base64.scm 300 */
																																							BgL_test3137z00_5683
																																								=
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																		}
																																}
																														}
																												}
																											if (BgL_test3137z00_5683)
																												{	/* Unsafe/base64.scm 300 */
																													long
																														BgL_arg1357z00_5166;
																													BgL_arg1357z00_5166 =
																														(((long) 1) +
																														BgL_forwardz00_5152);
																													BgL_iportz00_5210 =
																														BgL_iportz00_5150;
																													BgL_lastzd2matchzd2_5211
																														=
																														BgL_newzd2matchzd2_5154;
																													BgL_forwardz00_5212 =
																														BgL_arg1357z00_5166;
																													BgL_bufposz00_5213 =
																														BgL_bufposz00_5153;
																												BgL_statezd29zd21055z00_4990:
																													{	/* Unsafe/base64.scm 300 */
																														long
																															BgL_newzd2matchzd2_5214;
																														{	/* Unsafe/base64.scm 300 */
																															bool_t
																																BgL_test3146z00_5711;
																															{	/* Unsafe/base64.scm 300 */
																																bool_t
																																	BgL_rz00_5215;
																																BgL_rz00_5215 =
																																	rgc_buffer_eof2_p
																																	(BgL_iportz00_5210,
																																	BgL_forwardz00_5212,
																																	BgL_bufposz00_5213);
																																{	/* Unsafe/base64.scm 300 */
																																	long
																																		BgL_res2328z00_5216;
																																	BgL_res2328z00_5216
																																		=
																																		RGC_BUFFER_FORWARD
																																		(BgL_iportz00_5210);
																																	BgL_forwardz00_5212
																																		=
																																		BgL_res2328z00_5216;
																																}
																																{	/* Unsafe/base64.scm 300 */
																																	long
																																		BgL_res2329z00_5217;
																																	BgL_res2329z00_5217
																																		=
																																		RGC_BUFFER_BUFPOS
																																		(BgL_iportz00_5210);
																																	BgL_bufposz00_5213
																																		=
																																		BgL_res2329z00_5217;
																																}
																																BgL_test3146z00_5711
																																	=
																																	BgL_rz00_5215;
																															}
																															if (BgL_test3146z00_5711)
																																{	/* Unsafe/base64.scm 300 */
																																	{	/* Unsafe/base64.scm 300 */
																																		long
																																			BgL_res2330z00_5218;
																																		BgL_res2330z00_5218
																																			=
																																			RGC_STOP_MATCH
																																			(BgL_iportz00_5210,
																																			BgL_forwardz00_5212);
																																		BgL_res2330z00_5218;
																																	}
																																	BgL_newzd2matchzd2_5214
																																		=
																																		((long) 2);
																																}
																															else
																																{	/* Unsafe/base64.scm 300 */
																																	BgL_newzd2matchzd2_5214
																																		=
																																		BgL_lastzd2matchzd2_5211;
																																}
																														}
																														if (
																															(BgL_forwardz00_5212
																																==
																																BgL_bufposz00_5213))
																															{	/* Unsafe/base64.scm 300 */
																																if (rgc_fill_buffer(BgL_iportz00_5210))
																																	{	/* Unsafe/base64.scm 300 */
																																		long
																																			BgL_arg1289z00_5219;
																																		long
																																			BgL_arg1290z00_5220;
																																		{	/* Unsafe/base64.scm 300 */
																																			long
																																				BgL_res2333z00_5221;
																																			BgL_res2333z00_5221
																																				=
																																				RGC_BUFFER_FORWARD
																																				(BgL_iportz00_5210);
																																			BgL_arg1289z00_5219
																																				=
																																				BgL_res2333z00_5221;
																																		}
																																		{	/* Unsafe/base64.scm 300 */
																																			long
																																				BgL_res2334z00_5222;
																																			BgL_res2334z00_5222
																																				=
																																				RGC_BUFFER_BUFPOS
																																				(BgL_iportz00_5210);
																																			BgL_arg1290z00_5220
																																				=
																																				BgL_res2334z00_5222;
																																		}
																																		{
																																			long
																																				BgL_bufposz00_5723;
																																			long
																																				BgL_forwardz00_5722;
																																			BgL_forwardz00_5722
																																				=
																																				BgL_arg1289z00_5219;
																																			BgL_bufposz00_5723
																																				=
																																				BgL_arg1290z00_5220;
																																			BgL_bufposz00_5213
																																				=
																																				BgL_bufposz00_5723;
																																			BgL_forwardz00_5212
																																				=
																																				BgL_forwardz00_5722;
																																			goto
																																				BgL_statezd29zd21055z00_4990;
																																		}
																																	}
																																else
																																	{	/* Unsafe/base64.scm 300 */
																																		BgL_matchz00_4993
																																			=
																																			BgL_newzd2matchzd2_5214;
																																	}
																															}
																														else
																															{	/* Unsafe/base64.scm 300 */
																																int
																																	BgL_curz00_5223;
																																{	/* Unsafe/base64.scm 300 */
																																	int
																																		BgL_res2335z00_5224;
																																	BgL_res2335z00_5224
																																		=
																																		RGC_BUFFER_GET_CHAR
																																		(BgL_iportz00_5210,
																																		BgL_forwardz00_5212);
																																	BgL_curz00_5223
																																		=
																																		BgL_res2335z00_5224;
																																}
																																{	/* Unsafe/base64.scm 300 */

																																	if (
																																		((long)
																																			(BgL_curz00_5223)
																																			==
																																			((long)
																																				61)))
																																		{	/* Unsafe/base64.scm 300 */
																																			long
																																				BgL_arg1292z00_5225;
																																			BgL_arg1292z00_5225
																																				=
																																				(((long)
																																					1) +
																																				BgL_forwardz00_5212);
																																			{	/* Unsafe/base64.scm 300 */
																																				long
																																					BgL_bufposz00_5226;
																																				BgL_bufposz00_5226
																																					=
																																					BgL_bufposz00_5213;
																																				{	/* Unsafe/base64.scm 300 */
																																					long
																																						BgL_newzd2matchzd2_5227;
																																					{	/* Unsafe/base64.scm 300 */
																																						long
																																							BgL_res2338z00_5228;
																																						BgL_res2338z00_5228
																																							=
																																							RGC_STOP_MATCH
																																							(BgL_iportz00_5210,
																																							BgL_arg1292z00_5225);
																																						BgL_res2338z00_5228;
																																					}
																																					BgL_newzd2matchzd2_5227
																																						=
																																						(
																																						(long)
																																						1);
																																					BgL_matchz00_4993
																																						=
																																						BgL_newzd2matchzd2_5227;
																																		}}}
																																	else
																																		{	/* Unsafe/base64.scm 300 */
																																			bool_t
																																				BgL_test3150z00_5730;
																																			if ((
																																					(long)
																																					(BgL_curz00_5223)
																																					==
																																					((long) 43)))
																																				{	/* Unsafe/base64.scm 300 */
																																					BgL_test3150z00_5730
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Unsafe/base64.scm 300 */
																																					if (
																																						((long) (BgL_curz00_5223) == ((long) 45)))
																																						{	/* Unsafe/base64.scm 300 */
																																							BgL_test3150z00_5730
																																								=
																																								(
																																								(bool_t)
																																								1);
																																						}
																																					else
																																						{	/* Unsafe/base64.scm 300 */
																																							bool_t
																																								BgL_test3153z00_5737;
																																							if (((long) (BgL_curz00_5223) >= ((long) 47)))
																																								{	/* Unsafe/base64.scm 300 */
																																									BgL_test3153z00_5737
																																										=
																																										(
																																										(long)
																																										(BgL_curz00_5223)
																																										<
																																										((long) 58));
																																								}
																																							else
																																								{	/* Unsafe/base64.scm 300 */
																																									BgL_test3153z00_5737
																																										=
																																										(
																																										(bool_t)
																																										0);
																																								}
																																							if (BgL_test3153z00_5737)
																																								{	/* Unsafe/base64.scm 300 */
																																									BgL_test3150z00_5730
																																										=
																																										(
																																										(bool_t)
																																										1);
																																								}
																																							else
																																								{	/* Unsafe/base64.scm 300 */
																																									bool_t
																																										BgL_test3155z00_5743;
																																									if (((long) (BgL_curz00_5223) >= ((long) 65)))
																																										{	/* Unsafe/base64.scm 300 */
																																											BgL_test3155z00_5743
																																												=
																																												(
																																												(long)
																																												(BgL_curz00_5223)
																																												<
																																												((long) 91));
																																										}
																																									else
																																										{	/* Unsafe/base64.scm 300 */
																																											BgL_test3155z00_5743
																																												=
																																												(
																																												(bool_t)
																																												0);
																																										}
																																									if (BgL_test3155z00_5743)
																																										{	/* Unsafe/base64.scm 300 */
																																											BgL_test3150z00_5730
																																												=
																																												(
																																												(bool_t)
																																												1);
																																										}
																																									else
																																										{	/* Unsafe/base64.scm 300 */
																																											if (((long) (BgL_curz00_5223) == ((long) 95)))
																																												{	/* Unsafe/base64.scm 300 */
																																													BgL_test3150z00_5730
																																														=
																																														(
																																														(bool_t)
																																														1);
																																												}
																																											else
																																												{	/* Unsafe/base64.scm 300 */
																																													if (((long) (BgL_curz00_5223) >= ((long) 97)))
																																														{	/* Unsafe/base64.scm 300 */
																																															BgL_test3150z00_5730
																																																=
																																																(
																																																(long)
																																																(BgL_curz00_5223)
																																																<
																																																((long) 123));
																																														}
																																													else
																																														{	/* Unsafe/base64.scm 300 */
																																															BgL_test3150z00_5730
																																																=
																																																(
																																																(bool_t)
																																																0);
																																														}
																																												}
																																										}
																																								}
																																						}
																																				}
																																			if (BgL_test3150z00_5730)
																																				{	/* Unsafe/base64.scm 300 */
																																					long
																																						BgL_arg1301z00_5229;
																																					BgL_arg1301z00_5229
																																						=
																																						(((long) 1) + BgL_forwardz00_5212);
																																					{	/* Unsafe/base64.scm 300 */
																																						long
																																							BgL_bufposz00_5230;
																																						BgL_bufposz00_5230
																																							=
																																							BgL_bufposz00_5213;
																																						{	/* Unsafe/base64.scm 300 */
																																							long
																																								BgL_newzd2matchzd2_5231;
																																							{	/* Unsafe/base64.scm 300 */
																																								long
																																									BgL_res2349z00_5232;
																																								BgL_res2349z00_5232
																																									=
																																									RGC_STOP_MATCH
																																									(BgL_iportz00_5210,
																																									BgL_arg1301z00_5229);
																																								BgL_res2349z00_5232;
																																							}
																																							BgL_newzd2matchzd2_5231
																																								=
																																								(
																																								(long)
																																								0);
																																							BgL_matchz00_4993
																																								=
																																								BgL_newzd2matchzd2_5231;
																																				}}}
																																			else
																																				{	/* Unsafe/base64.scm 300 */
																																					BgL_matchz00_4993
																																						=
																																						BgL_newzd2matchzd2_5214;
																																				}
																																		}
																																}
																															}
																													}
																												}
																											else
																												{	/* Unsafe/base64.scm 300 */
																													BgL_matchz00_4993 =
																														BgL_newzd2matchzd2_5154;
																												}
																										}
																								}
																							}
																					}
																				}
																			else
																				{	/* Unsafe/base64.scm 300 */
																					BgL_matchz00_4993 =
																						BgL_newzd2matchzd2_5171;
																				}
																		}
																}
															}
													}
												}
											else
												{	/* Unsafe/base64.scm 300 */
													bool_t BgL_test3159z00_5760;

													if (((long) (BgL_curz00_5202) == ((long) 10)))
														{	/* Unsafe/base64.scm 300 */
															BgL_test3159z00_5760 = ((bool_t) 1);
														}
													else
														{	/* Unsafe/base64.scm 300 */
															BgL_test3159z00_5760 =
																((long) (BgL_curz00_5202) == ((long) 13));
														}
													if (BgL_test3159z00_5760)
														{	/* Unsafe/base64.scm 300 */
															long BgL_arg1319z00_5204;

															BgL_arg1319z00_5204 =
																(((long) 1) + BgL_forwardz00_5196);
															{	/* Unsafe/base64.scm 300 */
																long BgL_newzd2matchzd2_5205;

																{	/* Unsafe/base64.scm 300 */
																	long BgL_res2368z00_5206;

																	BgL_res2368z00_5206 =
																		RGC_STOP_MATCH(BgL_iportz00_5194,
																		BgL_arg1319z00_5204);
																	BgL_res2368z00_5206;
																}
																BgL_newzd2matchzd2_5205 = ((long) 7);
																BgL_matchz00_4993 = BgL_newzd2matchzd2_5205;
														}}
													else
														{	/* Unsafe/base64.scm 300 */
															long BgL_arg1322z00_5207;

															BgL_arg1322z00_5207 =
																(((long) 1) + BgL_forwardz00_5196);
															{	/* Unsafe/base64.scm 300 */
																long BgL_newzd2matchzd2_5208;

																{	/* Unsafe/base64.scm 300 */
																	long BgL_res2370z00_5209;

																	BgL_res2370z00_5209 =
																		RGC_STOP_MATCH(BgL_iportz00_5194,
																		BgL_arg1322z00_5207);
																	BgL_res2370z00_5209;
																}
																BgL_newzd2matchzd2_5208 = ((long) 8);
																BgL_matchz00_4993 = BgL_newzd2matchzd2_5208;
						}}}}}}}
						RGC_SET_FILEPOS(BgL_iportz00_4907);
						switch (BgL_matchz00_4993)
							{
							case ((long) 8):

								{	/* Unsafe/base64.scm 369 */
									obj_t BgL_cz00_4998;

									{	/* Unsafe/base64.scm 300 */
										bool_t BgL_test3161z00_5771;

										{	/* Unsafe/base64.scm 300 */
											long BgL_arg1451z00_5125;

											{	/* Unsafe/base64.scm 300 */
												long BgL_res2442z00_5126;

												BgL_res2442z00_5126 =
													RGC_BUFFER_MATCH_LENGTH(BgL_iportz00_4907);
												BgL_arg1451z00_5125 = BgL_res2442z00_5126;
											}
											BgL_test3161z00_5771 =
												(BgL_arg1451z00_5125 == ((long) 0));
										}
										if (BgL_test3161z00_5771)
											{	/* Unsafe/base64.scm 300 */
												BgL_cz00_4998 = BEOF;
											}
										else
											{	/* Unsafe/base64.scm 300 */
												unsigned char BgL_res2444z00_5127;

												BgL_res2444z00_5127 =
													RGC_BUFFER_CHARACTER(BgL_iportz00_4907);
												BgL_cz00_4998 = BCHAR(BgL_res2444z00_5127);
									}}
									{	/* Unsafe/base64.scm 370 */
										bool_t BgL_test3162z00_5776;

										{	/* Unsafe/base64.scm 370 */
											bool_t BgL_test3163z00_5777;

											{	/* Unsafe/base64.scm 370 */
												bool_t BgL_res2538z00_4999;

												BgL_res2538z00_4999 = EOF_OBJECTP(BgL_cz00_4998);
												BgL_test3163z00_5777 = BgL_res2538z00_4999;
											}
											if (BgL_test3163z00_5777)
												{	/* Unsafe/base64.scm 370 */
													BgL_test3162z00_5776 = ((bool_t) 1);
												}
											else
												{	/* Unsafe/base64.scm 370 */
													BgL_test3162z00_5776 =
														CBOOL(PROCEDURE_L_ENTRY(BgL_hookz00_4912)
														(BgL_hookz00_4912, BgL_cz00_4998));
												}
										}
										if (BgL_test3162z00_5776)
											{	/* Unsafe/base64.scm 370 */
												if ((BgL_wz00_4976 > ((long) 0)))
													{	/* Unsafe/base64.scm 372 */
														bgl_display_substring(BgL_bufz00_4909, ((long) 0),
															BgL_wz00_4976, BgL_opz00_4908);
													}
												else
													{	/* Unsafe/base64.scm 372 */
														BFALSE;
													}
												return BTRUE;
											}
										else
											{	/* Unsafe/base64.scm 370 */
												goto BgL_ignorez00_4980;
											}
									}
								}
								break;
							case ((long) 7):

								goto BgL_ignorez00_4980;
								break;
							case ((long) 6):

								if (BgL_eofzd2nozd2paddingz00_4913)
									{	/* Unsafe/base64.scm 365 */
									BgL_chunk1z00_4984:
										{	/* Unsafe/base64.scm 345 */
											int BgL_q0z00_5102;

											{	/* Unsafe/base64.scm 345 */
												int BgL_arg1461z00_5103;

												{	/* Unsafe/base64.scm 300 */
													int BgL_res2445z00_5104;

													{	/* Unsafe/base64.scm 300 */
														int BgL_tmpz00_5788;

														BgL_tmpz00_5788 = (int) (((long) 0));
														BgL_res2445z00_5104 =
															RGC_BUFFER_BYTE_REF(BgL_iportz00_4907,
															BgL_tmpz00_5788);
													}
													BgL_arg1461z00_5103 = BgL_res2445z00_5104;
												}
												{	/* Unsafe/base64.scm 345 */
													int BgL_res2448z00_5105;

													{	/* Unsafe/base64.scm 345 */
														char BgL_cz00_5106;

														BgL_cz00_5106 = (signed char) (BgL_arg1461z00_5103);
														{	/* Unsafe/base64.scm 195 */
															uint8_t BgL_arg1818z00_5107;

															{	/* Unsafe/base64.scm 195 */
																long BgL_tmpz00_5792;

																BgL_tmpz00_5792 = (long) (BgL_cz00_5106);
																BgL_arg1818z00_5107 =
																	BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																	BgL_tmpz00_5792);
															}
															{	/* Unsafe/base64.scm 195 */
																long BgL_res2447z00_5108;

																{	/* Unsafe/base64.scm 195 */
																	int8_t BgL_xz00_5109;

																	BgL_xz00_5109 =
																		(int8_t) (BgL_arg1818z00_5107);
																	{	/* Unsafe/base64.scm 195 */
																		long BgL_arg2251z00_5110;

																		BgL_arg2251z00_5110 =
																			(long) (BgL_xz00_5109);
																		{	/* Unsafe/base64.scm 195 */
																			long BgL_res2446z00_5111;

																			BgL_res2446z00_5111 =
																				(long) (BgL_arg2251z00_5110);
																			BgL_res2447z00_5108 = BgL_res2446z00_5111;
																}}}
																BgL_res2448z00_5105 =
																	(int) (BgL_res2447z00_5108);
													}}}
													BgL_q0z00_5102 = BgL_res2448z00_5105;
											}}
											{	/* Unsafe/base64.scm 345 */
												int BgL_q1z00_5112;

												{	/* Unsafe/base64.scm 346 */
													int BgL_res2453z00_5113;

													{	/* Unsafe/base64.scm 346 */
														unsigned char BgL_cz00_5114;

														BgL_cz00_5114 = (char) (((unsigned char) '='));
														{	/* Unsafe/base64.scm 201 */
															long BgL_arg1819z00_5115;

															BgL_arg1819z00_5115 =
																((unsigned char) (BgL_cz00_5114));
															{	/* Unsafe/base64.scm 201 */
																int BgL_res2452z00_5116;

																{	/* Unsafe/base64.scm 201 */
																	char BgL_cz00_5117;

																	BgL_cz00_5117 =
																		(signed char) (BgL_arg1819z00_5115);
																	{	/* Unsafe/base64.scm 195 */
																		uint8_t BgL_arg1818z00_5118;

																		{	/* Unsafe/base64.scm 195 */
																			long BgL_tmpz00_5803;

																			BgL_tmpz00_5803 = (long) (BgL_cz00_5117);
																			BgL_arg1818z00_5118 =
																				BGL_U8VREF
																				(BGl_bytezd2tablezd2zz__base64z00,
																				BgL_tmpz00_5803);
																		}
																		{	/* Unsafe/base64.scm 195 */
																			long BgL_res2451z00_5119;

																			{	/* Unsafe/base64.scm 195 */
																				int8_t BgL_xz00_5120;

																				BgL_xz00_5120 =
																					(int8_t) (BgL_arg1818z00_5118);
																				{	/* Unsafe/base64.scm 195 */
																					long BgL_arg2251z00_5121;

																					BgL_arg2251z00_5121 =
																						(long) (BgL_xz00_5120);
																					{	/* Unsafe/base64.scm 195 */
																						long BgL_res2450z00_5122;

																						BgL_res2450z00_5122 =
																							(long) (BgL_arg2251z00_5121);
																						BgL_res2451z00_5119 =
																							BgL_res2450z00_5122;
																			}}}
																			BgL_res2452z00_5116 =
																				(int) (BgL_res2451z00_5119);
																}}}
																BgL_res2453z00_5113 = BgL_res2452z00_5116;
													}}}
													BgL_q1z00_5112 = BgL_res2453z00_5113;
												}
												{	/* Unsafe/base64.scm 346 */
													long BgL_v0z00_5123;

													BgL_v0z00_5123 =
														(
														((long) (BgL_q0z00_5102) <<
															(int) (((long) 2))) |
														((long) (BgL_q1z00_5112) >> (int) (((long) 4))));
													{	/* Unsafe/base64.scm 347 */

														{	/* Unsafe/base64.scm 348 */
															unsigned char BgL_arg1458z00_5124;

															BgL_arg1458z00_5124 = (BgL_v0z00_5123);
															STRING_SET(BgL_bufz00_4909, BgL_wz00_4976,
																BgL_arg1458z00_5124);
														}
														return
															bgl_display_substring(BgL_bufz00_4909, ((long) 0),
															BgL_wz00_4976, BgL_opz00_4908);
									}}}}}
								else
									{	/* Unsafe/base64.scm 365 */
										return BFALSE;
									}
								break;
							case ((long) 5):

								goto BgL_chunk1z00_4984;
								break;
							case ((long) 4):

								if (BgL_eofzd2nozd2paddingz00_4913)
									{	/* Unsafe/base64.scm 361 */
									BgL_chunk2z00_4983:
										{	/* Unsafe/base64.scm 336 */
											int BgL_q0z00_5079;

											{	/* Unsafe/base64.scm 336 */
												int BgL_arg1471z00_5080;

												{	/* Unsafe/base64.scm 300 */
													int BgL_res2458z00_5081;

													{	/* Unsafe/base64.scm 300 */
														int BgL_tmpz00_5821;

														BgL_tmpz00_5821 = (int) (((long) 0));
														BgL_res2458z00_5081 =
															RGC_BUFFER_BYTE_REF(BgL_iportz00_4907,
															BgL_tmpz00_5821);
													}
													BgL_arg1471z00_5080 = BgL_res2458z00_5081;
												}
												{	/* Unsafe/base64.scm 336 */
													int BgL_res2461z00_5082;

													{	/* Unsafe/base64.scm 336 */
														char BgL_cz00_5083;

														BgL_cz00_5083 = (signed char) (BgL_arg1471z00_5080);
														{	/* Unsafe/base64.scm 195 */
															uint8_t BgL_arg1818z00_5084;

															{	/* Unsafe/base64.scm 195 */
																long BgL_tmpz00_5825;

																BgL_tmpz00_5825 = (long) (BgL_cz00_5083);
																BgL_arg1818z00_5084 =
																	BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																	BgL_tmpz00_5825);
															}
															{	/* Unsafe/base64.scm 195 */
																long BgL_res2460z00_5085;

																{	/* Unsafe/base64.scm 195 */
																	int8_t BgL_xz00_5086;

																	BgL_xz00_5086 =
																		(int8_t) (BgL_arg1818z00_5084);
																	{	/* Unsafe/base64.scm 195 */
																		long BgL_arg2251z00_5087;

																		BgL_arg2251z00_5087 =
																			(long) (BgL_xz00_5086);
																		{	/* Unsafe/base64.scm 195 */
																			long BgL_res2459z00_5088;

																			BgL_res2459z00_5088 =
																				(long) (BgL_arg2251z00_5087);
																			BgL_res2460z00_5085 = BgL_res2459z00_5088;
																}}}
																BgL_res2461z00_5082 =
																	(int) (BgL_res2460z00_5085);
													}}}
													BgL_q0z00_5079 = BgL_res2461z00_5082;
											}}
											{	/* Unsafe/base64.scm 336 */
												int BgL_q1z00_5089;

												{	/* Unsafe/base64.scm 337 */
													int BgL_arg1470z00_5090;

													{	/* Unsafe/base64.scm 300 */
														int BgL_res2462z00_5091;

														{	/* Unsafe/base64.scm 300 */
															int BgL_tmpz00_5832;

															BgL_tmpz00_5832 = (int) (((long) 1));
															BgL_res2462z00_5091 =
																RGC_BUFFER_BYTE_REF(BgL_iportz00_4907,
																BgL_tmpz00_5832);
														}
														BgL_arg1470z00_5090 = BgL_res2462z00_5091;
													}
													{	/* Unsafe/base64.scm 337 */
														int BgL_res2465z00_5092;

														{	/* Unsafe/base64.scm 337 */
															char BgL_cz00_5093;

															BgL_cz00_5093 =
																(signed char) (BgL_arg1470z00_5090);
															{	/* Unsafe/base64.scm 195 */
																uint8_t BgL_arg1818z00_5094;

																{	/* Unsafe/base64.scm 195 */
																	long BgL_tmpz00_5836;

																	BgL_tmpz00_5836 = (long) (BgL_cz00_5093);
																	BgL_arg1818z00_5094 =
																		BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																		BgL_tmpz00_5836);
																}
																{	/* Unsafe/base64.scm 195 */
																	long BgL_res2464z00_5095;

																	{	/* Unsafe/base64.scm 195 */
																		int8_t BgL_xz00_5096;

																		BgL_xz00_5096 =
																			(int8_t) (BgL_arg1818z00_5094);
																		{	/* Unsafe/base64.scm 195 */
																			long BgL_arg2251z00_5097;

																			BgL_arg2251z00_5097 =
																				(long) (BgL_xz00_5096);
																			{	/* Unsafe/base64.scm 195 */
																				long BgL_res2463z00_5098;

																				BgL_res2463z00_5098 =
																					(long) (BgL_arg2251z00_5097);
																				BgL_res2464z00_5095 =
																					BgL_res2463z00_5098;
																	}}}
																	BgL_res2465z00_5092 =
																		(int) (BgL_res2464z00_5095);
														}}}
														BgL_q1z00_5089 = BgL_res2465z00_5092;
												}}
												{	/* Unsafe/base64.scm 337 */
													long BgL_v0z00_5099;

													BgL_v0z00_5099 =
														(
														((long) (BgL_q0z00_5079) <<
															(int) (((long) 2))) |
														((long) (BgL_q1z00_5089) >> (int) (((long) 4))));
													{	/* Unsafe/base64.scm 338 */
														long BgL_v1z00_5100;

														BgL_v1z00_5100 =
															(
															((long) (BgL_q1z00_5089) <<
																(int) (((long) 4))) & ((long) 240));
														{	/* Unsafe/base64.scm 339 */

															{	/* Unsafe/base64.scm 340 */
																unsigned char BgL_arg1463z00_5101;

																BgL_arg1463z00_5101 = (BgL_v0z00_5099);
																STRING_SET(BgL_bufz00_4909, BgL_wz00_4976,
																	BgL_arg1463z00_5101);
															}
															{	/* Unsafe/base64.scm 341 */
																unsigned char BgL_auxz00_5858;
																long BgL_tmpz00_5856;

																BgL_auxz00_5858 = (BgL_v1z00_5100);
																BgL_tmpz00_5856 = (BgL_wz00_4976 + ((long) 1));
																STRING_SET(BgL_bufz00_4909, BgL_tmpz00_5856,
																	BgL_auxz00_5858);
															}
															{	/* Unsafe/base64.scm 342 */
																long BgL_tmpz00_5861;

																BgL_tmpz00_5861 = (BgL_wz00_4976 + ((long) 1));
																return
																	bgl_display_substring(BgL_bufz00_4909,
																	((long) 0), BgL_tmpz00_5861, BgL_opz00_4908);
									}}}}}}}
								else
									{	/* Unsafe/base64.scm 361 */
										return BFALSE;
									}
								break;
							case ((long) 3):

								goto BgL_chunk2z00_4983;
								break;
							case ((long) 2):

								if (BgL_eofzd2nozd2paddingz00_4913)
									{	/* Unsafe/base64.scm 357 */
									BgL_chunk3z00_4982:
										{	/* Unsafe/base64.scm 324 */
											int BgL_q0z00_5045;

											{	/* Unsafe/base64.scm 324 */
												int BgL_arg1491z00_5046;

												{	/* Unsafe/base64.scm 300 */
													int BgL_res2475z00_5047;

													{	/* Unsafe/base64.scm 300 */
														int BgL_tmpz00_5865;

														BgL_tmpz00_5865 = (int) (((long) 0));
														BgL_res2475z00_5047 =
															RGC_BUFFER_BYTE_REF(BgL_iportz00_4907,
															BgL_tmpz00_5865);
													}
													BgL_arg1491z00_5046 = BgL_res2475z00_5047;
												}
												{	/* Unsafe/base64.scm 324 */
													int BgL_res2478z00_5048;

													{	/* Unsafe/base64.scm 324 */
														char BgL_cz00_5049;

														BgL_cz00_5049 = (signed char) (BgL_arg1491z00_5046);
														{	/* Unsafe/base64.scm 195 */
															uint8_t BgL_arg1818z00_5050;

															{	/* Unsafe/base64.scm 195 */
																long BgL_tmpz00_5869;

																BgL_tmpz00_5869 = (long) (BgL_cz00_5049);
																BgL_arg1818z00_5050 =
																	BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																	BgL_tmpz00_5869);
															}
															{	/* Unsafe/base64.scm 195 */
																long BgL_res2477z00_5051;

																{	/* Unsafe/base64.scm 195 */
																	int8_t BgL_xz00_5052;

																	BgL_xz00_5052 =
																		(int8_t) (BgL_arg1818z00_5050);
																	{	/* Unsafe/base64.scm 195 */
																		long BgL_arg2251z00_5053;

																		BgL_arg2251z00_5053 =
																			(long) (BgL_xz00_5052);
																		{	/* Unsafe/base64.scm 195 */
																			long BgL_res2476z00_5054;

																			BgL_res2476z00_5054 =
																				(long) (BgL_arg2251z00_5053);
																			BgL_res2477z00_5051 = BgL_res2476z00_5054;
																}}}
																BgL_res2478z00_5048 =
																	(int) (BgL_res2477z00_5051);
													}}}
													BgL_q0z00_5045 = BgL_res2478z00_5048;
											}}
											{	/* Unsafe/base64.scm 324 */
												int BgL_q1z00_5055;

												{	/* Unsafe/base64.scm 325 */
													int BgL_arg1489z00_5056;

													{	/* Unsafe/base64.scm 300 */
														int BgL_res2479z00_5057;

														{	/* Unsafe/base64.scm 300 */
															int BgL_tmpz00_5876;

															BgL_tmpz00_5876 = (int) (((long) 1));
															BgL_res2479z00_5057 =
																RGC_BUFFER_BYTE_REF(BgL_iportz00_4907,
																BgL_tmpz00_5876);
														}
														BgL_arg1489z00_5056 = BgL_res2479z00_5057;
													}
													{	/* Unsafe/base64.scm 325 */
														int BgL_res2482z00_5058;

														{	/* Unsafe/base64.scm 325 */
															char BgL_cz00_5059;

															BgL_cz00_5059 =
																(signed char) (BgL_arg1489z00_5056);
															{	/* Unsafe/base64.scm 195 */
																uint8_t BgL_arg1818z00_5060;

																{	/* Unsafe/base64.scm 195 */
																	long BgL_tmpz00_5880;

																	BgL_tmpz00_5880 = (long) (BgL_cz00_5059);
																	BgL_arg1818z00_5060 =
																		BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																		BgL_tmpz00_5880);
																}
																{	/* Unsafe/base64.scm 195 */
																	long BgL_res2481z00_5061;

																	{	/* Unsafe/base64.scm 195 */
																		int8_t BgL_xz00_5062;

																		BgL_xz00_5062 =
																			(int8_t) (BgL_arg1818z00_5060);
																		{	/* Unsafe/base64.scm 195 */
																			long BgL_arg2251z00_5063;

																			BgL_arg2251z00_5063 =
																				(long) (BgL_xz00_5062);
																			{	/* Unsafe/base64.scm 195 */
																				long BgL_res2480z00_5064;

																				BgL_res2480z00_5064 =
																					(long) (BgL_arg2251z00_5063);
																				BgL_res2481z00_5061 =
																					BgL_res2480z00_5064;
																	}}}
																	BgL_res2482z00_5058 =
																		(int) (BgL_res2481z00_5061);
														}}}
														BgL_q1z00_5055 = BgL_res2482z00_5058;
												}}
												{	/* Unsafe/base64.scm 325 */
													int BgL_q2z00_5065;

													{	/* Unsafe/base64.scm 326 */
														int BgL_arg1487z00_5066;

														{	/* Unsafe/base64.scm 300 */
															int BgL_res2483z00_5067;

															{	/* Unsafe/base64.scm 300 */
																int BgL_tmpz00_5887;

																BgL_tmpz00_5887 = (int) (((long) 2));
																BgL_res2483z00_5067 =
																	RGC_BUFFER_BYTE_REF(BgL_iportz00_4907,
																	BgL_tmpz00_5887);
															}
															BgL_arg1487z00_5066 = BgL_res2483z00_5067;
														}
														{	/* Unsafe/base64.scm 326 */
															int BgL_res2486z00_5068;

															{	/* Unsafe/base64.scm 326 */
																char BgL_cz00_5069;

																BgL_cz00_5069 =
																	(signed char) (BgL_arg1487z00_5066);
																{	/* Unsafe/base64.scm 195 */
																	uint8_t BgL_arg1818z00_5070;

																	{	/* Unsafe/base64.scm 195 */
																		long BgL_tmpz00_5891;

																		BgL_tmpz00_5891 = (long) (BgL_cz00_5069);
																		BgL_arg1818z00_5070 =
																			BGL_U8VREF
																			(BGl_bytezd2tablezd2zz__base64z00,
																			BgL_tmpz00_5891);
																	}
																	{	/* Unsafe/base64.scm 195 */
																		long BgL_res2485z00_5071;

																		{	/* Unsafe/base64.scm 195 */
																			int8_t BgL_xz00_5072;

																			BgL_xz00_5072 =
																				(int8_t) (BgL_arg1818z00_5070);
																			{	/* Unsafe/base64.scm 195 */
																				long BgL_arg2251z00_5073;

																				BgL_arg2251z00_5073 =
																					(long) (BgL_xz00_5072);
																				{	/* Unsafe/base64.scm 195 */
																					long BgL_res2484z00_5074;

																					BgL_res2484z00_5074 =
																						(long) (BgL_arg2251z00_5073);
																					BgL_res2485z00_5071 =
																						BgL_res2484z00_5074;
																		}}}
																		BgL_res2486z00_5068 =
																			(int) (BgL_res2485z00_5071);
															}}}
															BgL_q2z00_5065 = BgL_res2486z00_5068;
													}}
													{	/* Unsafe/base64.scm 326 */
														long BgL_v0z00_5075;

														BgL_v0z00_5075 =
															(
															((long) (BgL_q0z00_5045) <<
																(int) (((long) 2))) |
															((long) (BgL_q1z00_5055) >> (int) (((long) 4))));
														{	/* Unsafe/base64.scm 327 */
															long BgL_v1z00_5076;

															BgL_v1z00_5076 =
																(
																(((long) (BgL_q1z00_5055) <<
																		(int) (((long) 4))) & ((long) 240)) |
																((long) (BgL_q2z00_5065) >>
																	(int) (((long) 2))));
															{	/* Unsafe/base64.scm 328 */
																long BgL_v2z00_5077;

																BgL_v2z00_5077 =
																	(
																	((long) (BgL_q2z00_5065) <<
																		(int) (((long) 6))) & ((long) 192));
																{	/* Unsafe/base64.scm 329 */

																	{	/* Unsafe/base64.scm 330 */
																		unsigned char BgL_arg1473z00_5078;

																		BgL_arg1473z00_5078 = (BgL_v0z00_5075);
																		STRING_SET(BgL_bufz00_4909, BgL_wz00_4976,
																			BgL_arg1473z00_5078);
																	}
																	{	/* Unsafe/base64.scm 331 */
																		unsigned char BgL_auxz00_5921;
																		long BgL_tmpz00_5919;

																		BgL_auxz00_5921 = (BgL_v1z00_5076);
																		BgL_tmpz00_5919 =
																			(BgL_wz00_4976 + ((long) 1));
																		STRING_SET(BgL_bufz00_4909, BgL_tmpz00_5919,
																			BgL_auxz00_5921);
																	}
																	{	/* Unsafe/base64.scm 332 */
																		unsigned char BgL_auxz00_5926;
																		long BgL_tmpz00_5924;

																		BgL_auxz00_5926 = (BgL_v2z00_5077);
																		BgL_tmpz00_5924 =
																			(BgL_wz00_4976 + ((long) 2));
																		STRING_SET(BgL_bufz00_4909, BgL_tmpz00_5924,
																			BgL_auxz00_5926);
																	}
																	{	/* Unsafe/base64.scm 333 */
																		long BgL_tmpz00_5929;

																		BgL_tmpz00_5929 =
																			(BgL_wz00_4976 + ((long) 2));
																		return
																			bgl_display_substring(BgL_bufz00_4909,
																			((long) 0), BgL_tmpz00_5929,
																			BgL_opz00_4908);
									}}}}}}}}}
								else
									{	/* Unsafe/base64.scm 357 */
										return BFALSE;
									}
								break;
							case ((long) 1):

								goto BgL_chunk3z00_4982;
								break;
							case ((long) 0):

								{	/* Unsafe/base64.scm 306 */
									int BgL_q0z00_5000;

									{	/* Unsafe/base64.scm 306 */
										int BgL_arg1513z00_5001;

										{	/* Unsafe/base64.scm 300 */
											int BgL_res2502z00_5002;

											{	/* Unsafe/base64.scm 300 */
												int BgL_tmpz00_5932;

												BgL_tmpz00_5932 = (int) (((long) 0));
												BgL_res2502z00_5002 =
													RGC_BUFFER_BYTE_REF(BgL_iportz00_4907,
													BgL_tmpz00_5932);
											}
											BgL_arg1513z00_5001 = BgL_res2502z00_5002;
										}
										{	/* Unsafe/base64.scm 306 */
											int BgL_res2505z00_5003;

											{	/* Unsafe/base64.scm 306 */
												char BgL_cz00_5004;

												BgL_cz00_5004 = (signed char) (BgL_arg1513z00_5001);
												{	/* Unsafe/base64.scm 195 */
													uint8_t BgL_arg1818z00_5005;

													{	/* Unsafe/base64.scm 195 */
														long BgL_tmpz00_5936;

														BgL_tmpz00_5936 = (long) (BgL_cz00_5004);
														BgL_arg1818z00_5005 =
															BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
															BgL_tmpz00_5936);
													}
													{	/* Unsafe/base64.scm 195 */
														long BgL_res2504z00_5006;

														{	/* Unsafe/base64.scm 195 */
															int8_t BgL_xz00_5007;

															BgL_xz00_5007 = (int8_t) (BgL_arg1818z00_5005);
															{	/* Unsafe/base64.scm 195 */
																long BgL_arg2251z00_5008;

																BgL_arg2251z00_5008 = (long) (BgL_xz00_5007);
																{	/* Unsafe/base64.scm 195 */
																	long BgL_res2503z00_5009;

																	BgL_res2503z00_5009 =
																		(long) (BgL_arg2251z00_5008);
																	BgL_res2504z00_5006 = BgL_res2503z00_5009;
														}}}
														BgL_res2505z00_5003 = (int) (BgL_res2504z00_5006);
											}}}
											BgL_q0z00_5000 = BgL_res2505z00_5003;
									}}
									{	/* Unsafe/base64.scm 306 */
										int BgL_q1z00_5010;

										{	/* Unsafe/base64.scm 307 */
											int BgL_arg1512z00_5011;

											{	/* Unsafe/base64.scm 300 */
												int BgL_res2506z00_5012;

												{	/* Unsafe/base64.scm 300 */
													int BgL_tmpz00_5943;

													BgL_tmpz00_5943 = (int) (((long) 1));
													BgL_res2506z00_5012 =
														RGC_BUFFER_BYTE_REF(BgL_iportz00_4907,
														BgL_tmpz00_5943);
												}
												BgL_arg1512z00_5011 = BgL_res2506z00_5012;
											}
											{	/* Unsafe/base64.scm 307 */
												int BgL_res2509z00_5013;

												{	/* Unsafe/base64.scm 307 */
													char BgL_cz00_5014;

													BgL_cz00_5014 = (signed char) (BgL_arg1512z00_5011);
													{	/* Unsafe/base64.scm 195 */
														uint8_t BgL_arg1818z00_5015;

														{	/* Unsafe/base64.scm 195 */
															long BgL_tmpz00_5947;

															BgL_tmpz00_5947 = (long) (BgL_cz00_5014);
															BgL_arg1818z00_5015 =
																BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																BgL_tmpz00_5947);
														}
														{	/* Unsafe/base64.scm 195 */
															long BgL_res2508z00_5016;

															{	/* Unsafe/base64.scm 195 */
																int8_t BgL_xz00_5017;

																BgL_xz00_5017 = (int8_t) (BgL_arg1818z00_5015);
																{	/* Unsafe/base64.scm 195 */
																	long BgL_arg2251z00_5018;

																	BgL_arg2251z00_5018 = (long) (BgL_xz00_5017);
																	{	/* Unsafe/base64.scm 195 */
																		long BgL_res2507z00_5019;

																		BgL_res2507z00_5019 =
																			(long) (BgL_arg2251z00_5018);
																		BgL_res2508z00_5016 = BgL_res2507z00_5019;
															}}}
															BgL_res2509z00_5013 = (int) (BgL_res2508z00_5016);
												}}}
												BgL_q1z00_5010 = BgL_res2509z00_5013;
										}}
										{	/* Unsafe/base64.scm 307 */
											int BgL_q2z00_5020;

											{	/* Unsafe/base64.scm 308 */
												int BgL_arg1511z00_5021;

												{	/* Unsafe/base64.scm 300 */
													int BgL_res2510z00_5022;

													{	/* Unsafe/base64.scm 300 */
														int BgL_tmpz00_5954;

														BgL_tmpz00_5954 = (int) (((long) 2));
														BgL_res2510z00_5022 =
															RGC_BUFFER_BYTE_REF(BgL_iportz00_4907,
															BgL_tmpz00_5954);
													}
													BgL_arg1511z00_5021 = BgL_res2510z00_5022;
												}
												{	/* Unsafe/base64.scm 308 */
													int BgL_res2513z00_5023;

													{	/* Unsafe/base64.scm 308 */
														char BgL_cz00_5024;

														BgL_cz00_5024 = (signed char) (BgL_arg1511z00_5021);
														{	/* Unsafe/base64.scm 195 */
															uint8_t BgL_arg1818z00_5025;

															{	/* Unsafe/base64.scm 195 */
																long BgL_tmpz00_5958;

																BgL_tmpz00_5958 = (long) (BgL_cz00_5024);
																BgL_arg1818z00_5025 =
																	BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																	BgL_tmpz00_5958);
															}
															{	/* Unsafe/base64.scm 195 */
																long BgL_res2512z00_5026;

																{	/* Unsafe/base64.scm 195 */
																	int8_t BgL_xz00_5027;

																	BgL_xz00_5027 =
																		(int8_t) (BgL_arg1818z00_5025);
																	{	/* Unsafe/base64.scm 195 */
																		long BgL_arg2251z00_5028;

																		BgL_arg2251z00_5028 =
																			(long) (BgL_xz00_5027);
																		{	/* Unsafe/base64.scm 195 */
																			long BgL_res2511z00_5029;

																			BgL_res2511z00_5029 =
																				(long) (BgL_arg2251z00_5028);
																			BgL_res2512z00_5026 = BgL_res2511z00_5029;
																}}}
																BgL_res2513z00_5023 =
																	(int) (BgL_res2512z00_5026);
													}}}
													BgL_q2z00_5020 = BgL_res2513z00_5023;
											}}
											{	/* Unsafe/base64.scm 308 */
												int BgL_q3z00_5030;

												{	/* Unsafe/base64.scm 309 */
													int BgL_arg1510z00_5031;

													{	/* Unsafe/base64.scm 300 */
														int BgL_res2514z00_5032;

														{	/* Unsafe/base64.scm 300 */
															int BgL_tmpz00_5965;

															BgL_tmpz00_5965 = (int) (((long) 3));
															BgL_res2514z00_5032 =
																RGC_BUFFER_BYTE_REF(BgL_iportz00_4907,
																BgL_tmpz00_5965);
														}
														BgL_arg1510z00_5031 = BgL_res2514z00_5032;
													}
													{	/* Unsafe/base64.scm 309 */
														int BgL_res2517z00_5033;

														{	/* Unsafe/base64.scm 309 */
															char BgL_cz00_5034;

															BgL_cz00_5034 =
																(signed char) (BgL_arg1510z00_5031);
															{	/* Unsafe/base64.scm 195 */
																uint8_t BgL_arg1818z00_5035;

																{	/* Unsafe/base64.scm 195 */
																	long BgL_tmpz00_5969;

																	BgL_tmpz00_5969 = (long) (BgL_cz00_5034);
																	BgL_arg1818z00_5035 =
																		BGL_U8VREF(BGl_bytezd2tablezd2zz__base64z00,
																		BgL_tmpz00_5969);
																}
																{	/* Unsafe/base64.scm 195 */
																	long BgL_res2516z00_5036;

																	{	/* Unsafe/base64.scm 195 */
																		int8_t BgL_xz00_5037;

																		BgL_xz00_5037 =
																			(int8_t) (BgL_arg1818z00_5035);
																		{	/* Unsafe/base64.scm 195 */
																			long BgL_arg2251z00_5038;

																			BgL_arg2251z00_5038 =
																				(long) (BgL_xz00_5037);
																			{	/* Unsafe/base64.scm 195 */
																				long BgL_res2515z00_5039;

																				BgL_res2515z00_5039 =
																					(long) (BgL_arg2251z00_5038);
																				BgL_res2516z00_5036 =
																					BgL_res2515z00_5039;
																	}}}
																	BgL_res2517z00_5033 =
																		(int) (BgL_res2516z00_5036);
														}}}
														BgL_q3z00_5030 = BgL_res2517z00_5033;
												}}
												{	/* Unsafe/base64.scm 309 */
													long BgL_v0z00_5040;

													BgL_v0z00_5040 =
														(
														((long) (BgL_q0z00_5000) <<
															(int) (((long) 2))) |
														((long) (BgL_q1z00_5010) >> (int) (((long) 4))));
													{	/* Unsafe/base64.scm 310 */
														long BgL_v1z00_5041;

														BgL_v1z00_5041 =
															(
															(((long) (BgL_q1z00_5010) <<
																	(int) (((long) 4))) & ((long) 240)) |
															((long) (BgL_q2z00_5020) >> (int) (((long) 2))));
														{	/* Unsafe/base64.scm 311 */
															long BgL_v2z00_5042;

															BgL_v2z00_5042 =
																(
																(((long) (BgL_q2z00_5020) <<
																		(int) (((long) 6))) & ((long) 192)) |
																(long) (BgL_q3z00_5030));
															{	/* Unsafe/base64.scm 312 */

																{	/* Unsafe/base64.scm 313 */
																	unsigned char BgL_arg1493z00_5043;

																	BgL_arg1493z00_5043 = (BgL_v0z00_5040);
																	STRING_SET(BgL_bufz00_4909, BgL_wz00_4976,
																		BgL_arg1493z00_5043);
																}
																{	/* Unsafe/base64.scm 314 */
																	unsigned char BgL_auxz00_6001;
																	long BgL_tmpz00_5999;

																	BgL_auxz00_6001 = (BgL_v1z00_5041);
																	BgL_tmpz00_5999 =
																		(BgL_wz00_4976 + ((long) 1));
																	STRING_SET(BgL_bufz00_4909, BgL_tmpz00_5999,
																		BgL_auxz00_6001);
																}
																{	/* Unsafe/base64.scm 315 */
																	unsigned char BgL_auxz00_6006;
																	long BgL_tmpz00_6004;

																	BgL_auxz00_6006 = (BgL_v2z00_5042);
																	BgL_tmpz00_6004 =
																		(BgL_wz00_4976 + ((long) 2));
																	STRING_SET(BgL_bufz00_4909, BgL_tmpz00_6004,
																		BgL_auxz00_6006);
																}
																{	/* Unsafe/base64.scm 316 */
																	long BgL_nwz00_5044;

																	BgL_nwz00_5044 = (BgL_wz00_4976 + ((long) 3));
																	if ((BgL_nwz00_5044 == BgL_lenz00_4911))
																		{	/* Unsafe/base64.scm 317 */
																			bgl_display_string(BgL_bufz00_4909,
																				BgL_opz00_4908);
																			BgL_wz00_4976 = ((long) 0);
																		}
																	else
																		{	/* Unsafe/base64.scm 317 */
																			BgL_wz00_4976 = BgL_nwz00_5044;
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
								goto BgL_ignorez00_4980;
								break;
							default:
								return
									BGl_errorz00zz__errorz00(BGl_string3013z00zz__base64z00,
									BGl_string3014z00zz__base64z00, BINT(BgL_matchz00_4993));
							}
					}
				}
			}
		}

	}



/* _base64-encode */
	obj_t BGl__base64zd2encodezd2zz__base64z00(obj_t BgL_env1142z00_7,
		obj_t BgL_opt1141z00_6)
	{
		{	/* Unsafe/base64.scm 71 */
			{	/* Unsafe/base64.scm 71 */
				obj_t BgL_g1143z00_2066;

				BgL_g1143z00_2066 = VECTOR_REF(BgL_opt1141z00_6, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1141z00_6))
					{
					case ((long) 1):

						{	/* Unsafe/base64.scm 71 */

							{	/* Unsafe/base64.scm 71 */
								obj_t BgL_auxz00_6017;

								if (STRINGP(BgL_g1143z00_2066))
									{	/* Unsafe/base64.scm 71 */
										BgL_auxz00_6017 = BgL_g1143z00_2066;
									}
								else
									{
										obj_t BgL_auxz00_6020;

										BgL_auxz00_6020 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3015z00zz__base64z00, BINT(((long) 2752)),
											BGl_string3016z00zz__base64z00,
											BGl_string3017z00zz__base64z00, BgL_g1143z00_2066);
										FAILURE(BgL_auxz00_6020, BFALSE, BFALSE);
									}
								return
									BGl_base64zd2encodezd2zz__base64z00(BgL_auxz00_6017,
									BINT(((long) 76)));
						}} break;
					case ((long) 2):

						{	/* Unsafe/base64.scm 71 */
							obj_t BgL_paddingz00_2071;

							BgL_paddingz00_2071 = VECTOR_REF(BgL_opt1141z00_6, ((long) 1));
							{	/* Unsafe/base64.scm 71 */

								{	/* Unsafe/base64.scm 71 */
									obj_t BgL_auxz00_6027;

									if (STRINGP(BgL_g1143z00_2066))
										{	/* Unsafe/base64.scm 71 */
											BgL_auxz00_6027 = BgL_g1143z00_2066;
										}
									else
										{
											obj_t BgL_auxz00_6030;

											BgL_auxz00_6030 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3015z00zz__base64z00, BINT(((long) 2752)),
												BGl_string3016z00zz__base64z00,
												BGl_string3017z00zz__base64z00, BgL_g1143z00_2066);
											FAILURE(BgL_auxz00_6030, BFALSE, BFALSE);
										}
									return
										BGl_base64zd2encodezd2zz__base64z00(BgL_auxz00_6027,
										BgL_paddingz00_2071);
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



/* base64-encode */
	BGL_EXPORTED_DEF obj_t BGl_base64zd2encodezd2zz__base64z00(obj_t BgL_sz00_4,
		obj_t BgL_paddingz00_5)
	{
		{	/* Unsafe/base64.scm 71 */
			{	/* Unsafe/base64.scm 74 */
				long BgL_lenz00_2075;

				BgL_lenz00_2075 = STRING_LENGTH(BgL_sz00_4);
				{	/* Unsafe/base64.scm 75 */
					long BgL_lenzd23zd2_2076;

					BgL_lenzd23zd2_2076 = (BgL_lenz00_2075 - ((long) 3));
					{	/* Unsafe/base64.scm 76 */
						long BgL_rlenz00_2077;

						BgL_rlenz00_2077 =
							(((long) 4) * ((((long) 2) + BgL_lenz00_2075) / ((long) 3)));
						{	/* Unsafe/base64.scm 77 */
							long BgL_padz00_2078;

							{	/* Unsafe/base64.scm 78 */
								bool_t BgL_test3171z00_6042;

								if (INTEGERP(BgL_paddingz00_5))
									{	/* Unsafe/base64.scm 78 */
										BgL_test3171z00_6042 =
											((long) CINT(BgL_paddingz00_5) > ((long) 0));
									}
								else
									{	/* Unsafe/base64.scm 78 */
										BgL_test3171z00_6042 = ((bool_t) 0);
									}
								if (BgL_test3171z00_6042)
									{	/* Unsafe/base64.scm 78 */
										BgL_padz00_2078 =
											(
											(((long) 3) *
												(long) CINT(BgL_paddingz00_5)) / ((long) 4));
									}
								else
									{	/* Unsafe/base64.scm 78 */
										BgL_padz00_2078 = ((long) -1);
							}}
							{	/* Unsafe/base64.scm 78 */
								long BgL_flenz00_2079;

								if ((BgL_padz00_2078 > ((long) 0)))
									{	/* Unsafe/base64.scm 81 */
										BgL_flenz00_2079 =
											(BgL_rlenz00_2077 +
											(BgL_rlenz00_2077 / (long) CINT(BgL_paddingz00_5)));
									}
								else
									{	/* Unsafe/base64.scm 81 */
										BgL_flenz00_2079 = BgL_rlenz00_2077;
									}
								{	/* Unsafe/base64.scm 81 */
									obj_t BgL_resz00_2080;

									BgL_resz00_2080 =
										make_string(BgL_flenz00_2079, ((unsigned char) 10));
									{	/* Unsafe/base64.scm 84 */

										{
											long BgL_xz00_2082;
											long BgL_yz00_2083;

											BgL_xz00_2082 = ((long) 0);
											BgL_yz00_2083 = ((long) 0);
										BgL_zc3z04anonymousza31714ze3z87_2084:
											if ((BgL_xz00_2082 <= BgL_lenzd23zd2_2076))
												{	/* Unsafe/base64.scm 88 */
													long BgL_i0z00_2086;

													BgL_i0z00_2086 =
														(STRING_REF(BgL_sz00_4, BgL_xz00_2082));
													{	/* Unsafe/base64.scm 88 */
														long BgL_i1z00_2087;

														BgL_i1z00_2087 =
															(STRING_REF(BgL_sz00_4,
																(((long) 1) + BgL_xz00_2082)));
														{	/* Unsafe/base64.scm 89 */
															long BgL_i2z00_2088;

															BgL_i2z00_2088 =
																(STRING_REF(BgL_sz00_4,
																	(((long) 2) + BgL_xz00_2082)));
															{	/* Unsafe/base64.scm 90 */
																long BgL_o0z00_2089;

																BgL_o0z00_2089 =
																	(
																	(BgL_i0z00_2086 & ((long) 252)) >>
																	(int) (((long) 2)));
																{	/* Unsafe/base64.scm 91 */
																	long BgL_o1z00_2090;

																	BgL_o1z00_2090 =
																		(
																		((BgL_i0z00_2086 & ((long) 3)) <<
																			(int) (((long) 4))) |
																		((BgL_i1z00_2087 & ((long) 240)) >>
																			(int) (((long) 4))));
																	{	/* Unsafe/base64.scm 92 */
																		long BgL_o2z00_2091;

																		BgL_o2z00_2091 =
																			(
																			((BgL_i1z00_2087 & ((long) 15)) <<
																				(int) (((long) 2))) |
																			((BgL_i2z00_2088 & ((long) 192)) >>
																				(int) (((long) 6))));
																		{	/* Unsafe/base64.scm 94 */
																			long BgL_o3z00_2092;

																			BgL_o3z00_2092 =
																				(BgL_i2z00_2088 & ((long) 63));
																			{	/* Unsafe/base64.scm 96 */

																				{	/* Unsafe/base64.scm 97 */
																					unsigned char BgL_tmpz00_6084;

																					BgL_tmpz00_6084 =
																						STRING_REF
																						(BGl_string3018z00zz__base64z00,
																						BgL_o0z00_2089);
																					STRING_SET(BgL_resz00_2080,
																						BgL_yz00_2083, BgL_tmpz00_6084);
																				}
																				{	/* Unsafe/base64.scm 98 */
																					unsigned char BgL_auxz00_6089;
																					long BgL_tmpz00_6087;

																					BgL_auxz00_6089 =
																						STRING_REF
																						(BGl_string3018z00zz__base64z00,
																						BgL_o1z00_2090);
																					BgL_tmpz00_6087 =
																						(BgL_yz00_2083 + ((long) 1));
																					STRING_SET(BgL_resz00_2080,
																						BgL_tmpz00_6087, BgL_auxz00_6089);
																				}
																				{	/* Unsafe/base64.scm 99 */
																					unsigned char BgL_auxz00_6094;
																					long BgL_tmpz00_6092;

																					BgL_auxz00_6094 =
																						STRING_REF
																						(BGl_string3018z00zz__base64z00,
																						BgL_o2z00_2091);
																					BgL_tmpz00_6092 =
																						(BgL_yz00_2083 + ((long) 2));
																					STRING_SET(BgL_resz00_2080,
																						BgL_tmpz00_6092, BgL_auxz00_6094);
																				}
																				{	/* Unsafe/base64.scm 100 */
																					unsigned char BgL_auxz00_6099;
																					long BgL_tmpz00_6097;

																					BgL_auxz00_6099 =
																						STRING_REF
																						(BGl_string3018z00zz__base64z00,
																						BgL_o3z00_2092);
																					BgL_tmpz00_6097 =
																						(BgL_yz00_2083 + ((long) 3));
																					STRING_SET(BgL_resz00_2080,
																						BgL_tmpz00_6097, BgL_auxz00_6099);
																				}
																				{	/* Unsafe/base64.scm 101 */
																					long BgL_nxz00_2100;

																					BgL_nxz00_2100 =
																						(BgL_xz00_2082 + ((long) 3));
																					{	/* Unsafe/base64.scm 102 */
																						bool_t BgL_test3175z00_6103;

																						if ((BgL_padz00_2078 > ((long) 0)))
																							{	/* Unsafe/base64.scm 102 */
																								long BgL_arg1729z00_2107;

																								{	/* Unsafe/base64.scm 102 */
																									long BgL_res2668z00_3871;

																									{	/* Unsafe/base64.scm 102 */
																										long BgL_n1z00_3853;
																										long BgL_n2z00_3854;

																										BgL_n1z00_3853 =
																											BgL_nxz00_2100;
																										BgL_n2z00_3854 =
																											BgL_padz00_2078;
																										{	/* Unsafe/base64.scm 102 */
																											bool_t
																												BgL_test3177z00_6106;
																											{	/* Unsafe/base64.scm 102 */
																												long
																													BgL_arg2155z00_3856;
																												BgL_arg2155z00_3856 =
																													(((BgL_n1z00_3853) |
																														(BgL_n2z00_3854)) &
																													-2147483648);
																												BgL_test3177z00_6106 =
																													(BgL_arg2155z00_3856
																													== ((long) 0));
																											}
																											if (BgL_test3177z00_6106)
																												{	/* Unsafe/base64.scm 102 */
																													int32_t
																														BgL_arg2152z00_3857;
																													{	/* Unsafe/base64.scm 102 */
																														int32_t
																															BgL_arg2153z00_3858;
																														int32_t
																															BgL_arg2154z00_3859;
																														{	/* Unsafe/base64.scm 102 */
																															int32_t
																																BgL_res2664z00_3863;
																															BgL_res2664z00_3863
																																=
																																(int32_t)
																																(BgL_n1z00_3853);
																															BgL_arg2153z00_3858
																																=
																																BgL_res2664z00_3863;
																														}
																														{	/* Unsafe/base64.scm 102 */
																															int32_t
																																BgL_res2665z00_3865;
																															BgL_res2665z00_3865
																																=
																																(int32_t)
																																(BgL_n2z00_3854);
																															BgL_arg2154z00_3859
																																=
																																BgL_res2665z00_3865;
																														}
																														BgL_arg2152z00_3857
																															=
																															(BgL_arg2153z00_3858
																															%
																															BgL_arg2154z00_3859);
																													}
																													{	/* Unsafe/base64.scm 102 */
																														long
																															BgL_res2667z00_3870;
																														{	/* Unsafe/base64.scm 102 */
																															long
																																BgL_arg2247z00_3867;
																															BgL_arg2247z00_3867
																																=
																																(long)
																																(BgL_arg2152z00_3857);
																															{	/* Unsafe/base64.scm 102 */
																																long
																																	BgL_res2666z00_3869;
																																BgL_res2666z00_3869
																																	=
																																	(long)
																																	(BgL_arg2247z00_3867);
																																BgL_res2667z00_3870
																																	=
																																	BgL_res2666z00_3869;
																														}}
																														BgL_res2668z00_3871
																															=
																															BgL_res2667z00_3870;
																												}}
																											else
																												{	/* Unsafe/base64.scm 102 */
																													BgL_res2668z00_3871 =
																														(BgL_n1z00_3853 %
																														BgL_n2z00_3854);
																												}
																										}
																									}
																									BgL_arg1729z00_2107 =
																										BgL_res2668z00_3871;
																								}
																								BgL_test3175z00_6103 =
																									(BgL_arg1729z00_2107 ==
																									((long) 0));
																							}
																						else
																							{	/* Unsafe/base64.scm 102 */
																								BgL_test3175z00_6103 =
																									((bool_t) 0);
																							}
																						if (BgL_test3175z00_6103)
																							{
																								long BgL_yz00_6117;
																								long BgL_xz00_6116;

																								BgL_xz00_6116 = BgL_nxz00_2100;
																								BgL_yz00_6117 =
																									(BgL_yz00_2083 + ((long) 5));
																								BgL_yz00_2083 = BgL_yz00_6117;
																								BgL_xz00_2082 = BgL_xz00_6116;
																								goto
																									BgL_zc3z04anonymousza31714ze3z87_2084;
																							}
																						else
																							{
																								long BgL_yz00_6120;
																								long BgL_xz00_6119;

																								BgL_xz00_6119 = BgL_nxz00_2100;
																								BgL_yz00_6120 =
																									(BgL_yz00_2083 + ((long) 4));
																								BgL_yz00_2083 = BgL_yz00_6120;
																								BgL_xz00_2082 = BgL_xz00_6119;
																								goto
																									BgL_zc3z04anonymousza31714ze3z87_2084;
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
												{	/* Unsafe/base64.scm 105 */
													long BgL_aux1041z00_2123;

													BgL_aux1041z00_2123 =
														(BgL_lenz00_2075 - BgL_xz00_2082);
													switch (BgL_aux1041z00_2123)
														{
														case ((long) 2):

															{	/* Unsafe/base64.scm 107 */
																long BgL_i0z00_2125;

																BgL_i0z00_2125 =
																	(STRING_REF(BgL_sz00_4, BgL_xz00_2082));
																{	/* Unsafe/base64.scm 107 */
																	long BgL_i1z00_2126;

																	BgL_i1z00_2126 =
																		(STRING_REF(BgL_sz00_4,
																			(BgL_xz00_2082 + ((long) 1))));
																	{	/* Unsafe/base64.scm 108 */
																		long BgL_o0z00_2127;

																		BgL_o0z00_2127 =
																			(
																			(BgL_i0z00_2125 & ((long) 252)) >>
																			(int) (((long) 2)));
																		{	/* Unsafe/base64.scm 109 */
																			long BgL_o1z00_2128;

																			BgL_o1z00_2128 =
																				(
																				((BgL_i0z00_2125 & ((long) 3)) <<
																					(int) (((long) 4))) |
																				((BgL_i1z00_2126 & ((long) 240)) >>
																					(int) (((long) 4))));
																			{	/* Unsafe/base64.scm 110 */
																				long BgL_o2z00_2129;

																				BgL_o2z00_2129 =
																					(
																					(BgL_i1z00_2126 & ((long) 15)) <<
																					(int) (((long) 2)));
																				{	/* Unsafe/base64.scm 112 */

																					{	/* Unsafe/base64.scm 113 */
																						unsigned char BgL_tmpz00_6141;

																						BgL_tmpz00_6141 =
																							STRING_REF
																							(BGl_string3018z00zz__base64z00,
																							BgL_o0z00_2127);
																						STRING_SET(BgL_resz00_2080,
																							BgL_yz00_2083, BgL_tmpz00_6141);
																					}
																					{	/* Unsafe/base64.scm 114 */
																						unsigned char BgL_auxz00_6146;
																						long BgL_tmpz00_6144;

																						BgL_auxz00_6146 =
																							STRING_REF
																							(BGl_string3018z00zz__base64z00,
																							BgL_o1z00_2128);
																						BgL_tmpz00_6144 =
																							(BgL_yz00_2083 + ((long) 1));
																						STRING_SET(BgL_resz00_2080,
																							BgL_tmpz00_6144, BgL_auxz00_6146);
																					}
																					{	/* Unsafe/base64.scm 115 */
																						unsigned char BgL_auxz00_6151;
																						long BgL_tmpz00_6149;

																						BgL_auxz00_6151 =
																							STRING_REF
																							(BGl_string3018z00zz__base64z00,
																							BgL_o2z00_2129);
																						BgL_tmpz00_6149 =
																							(BgL_yz00_2083 + ((long) 2));
																						STRING_SET(BgL_resz00_2080,
																							BgL_tmpz00_6149, BgL_auxz00_6151);
																					}
																					{	/* Unsafe/base64.scm 116 */
																						long BgL_tmpz00_6154;

																						BgL_tmpz00_6154 =
																							(BgL_yz00_2083 + ((long) 3));
																						STRING_SET(BgL_resz00_2080,
																							BgL_tmpz00_6154,
																							((unsigned char) '='));
															}}}}}}} break;
														case ((long) 1):

															{	/* Unsafe/base64.scm 118 */
																long BgL_iz00_2145;

																BgL_iz00_2145 =
																	(STRING_REF(BgL_sz00_4, BgL_xz00_2082));
																{	/* Unsafe/base64.scm 118 */
																	long BgL_o0z00_2146;

																	BgL_o0z00_2146 =
																		(
																		(BgL_iz00_2145 & ((long) 252)) >>
																		(int) (((long) 2)));
																	{	/* Unsafe/base64.scm 119 */
																		long BgL_o1z00_2147;

																		BgL_o1z00_2147 =
																			(
																			(BgL_iz00_2145 & ((long) 3)) <<
																			(int) (((long) 4)));
																		{	/* Unsafe/base64.scm 120 */

																			{	/* Unsafe/base64.scm 121 */
																				unsigned char BgL_tmpz00_6165;

																				BgL_tmpz00_6165 =
																					STRING_REF
																					(BGl_string3018z00zz__base64z00,
																					BgL_o0z00_2146);
																				STRING_SET(BgL_resz00_2080,
																					BgL_yz00_2083, BgL_tmpz00_6165);
																			}
																			{	/* Unsafe/base64.scm 122 */
																				unsigned char BgL_auxz00_6170;
																				long BgL_tmpz00_6168;

																				BgL_auxz00_6170 =
																					STRING_REF
																					(BGl_string3018z00zz__base64z00,
																					BgL_o1z00_2147);
																				BgL_tmpz00_6168 =
																					(BgL_yz00_2083 + ((long) 1));
																				STRING_SET(BgL_resz00_2080,
																					BgL_tmpz00_6168, BgL_auxz00_6170);
																			}
																			{	/* Unsafe/base64.scm 123 */
																				long BgL_tmpz00_6173;

																				BgL_tmpz00_6173 =
																					(BgL_yz00_2083 + ((long) 2));
																				STRING_SET(BgL_resz00_2080,
																					BgL_tmpz00_6173,
																					((unsigned char) '='));
																			}
																			{	/* Unsafe/base64.scm 124 */
																				long BgL_tmpz00_6176;

																				BgL_tmpz00_6176 =
																					(BgL_yz00_2083 + ((long) 3));
																				STRING_SET(BgL_resz00_2080,
																					BgL_tmpz00_6176,
																					((unsigned char) '='));
															}}}}} break;
														default:
															BUNSPEC;
														}
												}
										}
										return BgL_resz00_2080;
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* _base64-encode-port */
	obj_t BGl__base64zd2encodezd2portz00zz__base64z00(obj_t BgL_env1147z00_12,
		obj_t BgL_opt1146z00_11)
	{
		{	/* Unsafe/base64.scm 130 */
			{	/* Unsafe/base64.scm 130 */
				obj_t BgL_g1148z00_2165;
				obj_t BgL_g1149z00_2166;

				BgL_g1148z00_2165 = VECTOR_REF(BgL_opt1146z00_11, ((long) 0));
				BgL_g1149z00_2166 = VECTOR_REF(BgL_opt1146z00_11, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1146z00_11))
					{
					case ((long) 2):

						{	/* Unsafe/base64.scm 130 */

							{	/* Unsafe/base64.scm 130 */
								obj_t BgL_auxz00_6189;
								obj_t BgL_auxz00_6182;

								if (OUTPUT_PORTP(BgL_g1149z00_2166))
									{	/* Unsafe/base64.scm 130 */
										BgL_auxz00_6189 = BgL_g1149z00_2166;
									}
								else
									{
										obj_t BgL_auxz00_6192;

										BgL_auxz00_6192 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3015z00zz__base64z00, BINT(((long) 4911)),
											BGl_string3019z00zz__base64z00,
											BGl_string3021z00zz__base64z00, BgL_g1149z00_2166);
										FAILURE(BgL_auxz00_6192, BFALSE, BFALSE);
									}
								if (INPUT_PORTP(BgL_g1148z00_2165))
									{	/* Unsafe/base64.scm 130 */
										BgL_auxz00_6182 = BgL_g1148z00_2165;
									}
								else
									{
										obj_t BgL_auxz00_6185;

										BgL_auxz00_6185 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3015z00zz__base64z00, BINT(((long) 4911)),
											BGl_string3019z00zz__base64z00,
											BGl_string3020z00zz__base64z00, BgL_g1148z00_2165);
										FAILURE(BgL_auxz00_6185, BFALSE, BFALSE);
									}
								return
									BGl_base64zd2encodezd2portz00zz__base64z00(BgL_auxz00_6182,
									BgL_auxz00_6189, BINT(((long) 76)));
						}} break;
					case ((long) 3):

						{	/* Unsafe/base64.scm 130 */
							obj_t BgL_paddingz00_2171;

							BgL_paddingz00_2171 = VECTOR_REF(BgL_opt1146z00_11, ((long) 2));
							{	/* Unsafe/base64.scm 130 */

								{	/* Unsafe/base64.scm 130 */
									obj_t BgL_auxz00_6206;
									obj_t BgL_auxz00_6199;

									if (OUTPUT_PORTP(BgL_g1149z00_2166))
										{	/* Unsafe/base64.scm 130 */
											BgL_auxz00_6206 = BgL_g1149z00_2166;
										}
									else
										{
											obj_t BgL_auxz00_6209;

											BgL_auxz00_6209 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3015z00zz__base64z00, BINT(((long) 4911)),
												BGl_string3019z00zz__base64z00,
												BGl_string3021z00zz__base64z00, BgL_g1149z00_2166);
											FAILURE(BgL_auxz00_6209, BFALSE, BFALSE);
										}
									if (INPUT_PORTP(BgL_g1148z00_2165))
										{	/* Unsafe/base64.scm 130 */
											BgL_auxz00_6199 = BgL_g1148z00_2165;
										}
									else
										{
											obj_t BgL_auxz00_6202;

											BgL_auxz00_6202 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3015z00zz__base64z00, BINT(((long) 4911)),
												BGl_string3019z00zz__base64z00,
												BGl_string3020z00zz__base64z00, BgL_g1148z00_2165);
											FAILURE(BgL_auxz00_6202, BFALSE, BFALSE);
										}
									return
										BGl_base64zd2encodezd2portz00zz__base64z00(BgL_auxz00_6199,
										BgL_auxz00_6206, BgL_paddingz00_2171);
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



/* base64-encode-port */
	BGL_EXPORTED_DEF obj_t BGl_base64zd2encodezd2portz00zz__base64z00(obj_t
		BgL_ipz00_8, obj_t BgL_opz00_9, obj_t BgL_paddingz00_10)
	{
		{	/* Unsafe/base64.scm 130 */
			{	/* Unsafe/base64.scm 131 */
				long BgL_padz00_2172;

				BgL_padz00_2172 = ((long) CINT(BgL_paddingz00_10) - ((long) 4));
				{
					long BgL_iz00_2174;

					BgL_iz00_2174 = ((long) 0);
				BgL_zc3z04anonymousza31781ze3z87_2175:
					{	/* Unsafe/base64.scm 133 */
						obj_t BgL_i0z00_2176;

						BgL_i0z00_2176 =
							BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_8);
						{	/* Unsafe/base64.scm 134 */
							bool_t BgL_test3182z00_6219;

							{	/* Unsafe/base64.scm 134 */
								bool_t BgL_res2705z00_3983;

								BgL_res2705z00_3983 = EOF_OBJECTP(BgL_i0z00_2176);
								BgL_test3182z00_6219 = BgL_res2705z00_3983;
							}
							if (BgL_test3182z00_6219)
								{	/* Unsafe/base64.scm 134 */
									return BFALSE;
								}
							else
								{	/* Unsafe/base64.scm 135 */
									obj_t BgL_i1z00_2178;

									BgL_i1z00_2178 =
										BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_8);
									{	/* Unsafe/base64.scm 136 */
										bool_t BgL_test3183z00_6222;

										{	/* Unsafe/base64.scm 136 */
											bool_t BgL_res2706z00_3984;

											BgL_res2706z00_3984 = EOF_OBJECTP(BgL_i1z00_2178);
											BgL_test3183z00_6222 = BgL_res2706z00_3984;
										}
										if (BgL_test3183z00_6222)
											{	/* Unsafe/base64.scm 137 */
												long BgL_o0z00_2180;

												BgL_o0z00_2180 =
													(
													((long) CINT(BgL_i0z00_2176) & ((long) 252)) >>
													(int) (((long) 2)));
												{	/* Unsafe/base64.scm 137 */
													long BgL_o1z00_2181;

													BgL_o1z00_2181 =
														(
														((long) CINT(BgL_i0z00_2176) & ((long) 3)) <<
														(int) (((long) 4)));
													{	/* Unsafe/base64.scm 138 */

														{	/* Unsafe/base64.scm 139 */
															unsigned char BgL_tmpz00_6232;

															BgL_tmpz00_6232 =
																STRING_REF(BGl_string3018z00zz__base64z00,
																BgL_o0z00_2180);
															bgl_display_char(BgL_tmpz00_6232, BgL_opz00_9);
														}
														{	/* Unsafe/base64.scm 140 */
															unsigned char BgL_tmpz00_6235;

															BgL_tmpz00_6235 =
																STRING_REF(BGl_string3018z00zz__base64z00,
																BgL_o1z00_2181);
															bgl_display_char(BgL_tmpz00_6235, BgL_opz00_9);
														}
														bgl_display_char(((unsigned char) '='),
															BgL_opz00_9);
														return bgl_display_char(((unsigned char) '='),
															BgL_opz00_9);
											}}}
										else
											{	/* Unsafe/base64.scm 143 */
												obj_t BgL_i2z00_2186;

												BgL_i2z00_2186 =
													BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_ipz00_8);
												{	/* Unsafe/base64.scm 144 */
													bool_t BgL_test3184z00_6241;

													{	/* Unsafe/base64.scm 144 */
														bool_t BgL_res2713z00_4009;

														BgL_res2713z00_4009 = EOF_OBJECTP(BgL_i2z00_2186);
														BgL_test3184z00_6241 = BgL_res2713z00_4009;
													}
													if (BgL_test3184z00_6241)
														{	/* Unsafe/base64.scm 145 */
															long BgL_o0z00_2188;

															BgL_o0z00_2188 =
																(
																((long) CINT(BgL_i0z00_2176) & ((long) 252)) >>
																(int) (((long) 2)));
															{	/* Unsafe/base64.scm 145 */
																long BgL_o1z00_2189;

																BgL_o1z00_2189 =
																	(
																	(((long) CINT(BgL_i0z00_2176) & ((long) 3)) <<
																		(int) (((long) 4))) |
																	(((long) CINT(BgL_i1z00_2178) & ((long) 240))
																		>> (int) (((long) 4))));
																{	/* Unsafe/base64.scm 146 */
																	long BgL_o2z00_2190;

																	BgL_o2z00_2190 =
																		(
																		((long) CINT(BgL_i1z00_2178) & ((long) 15))
																		<< (int) (((long) 2)));
																	{	/* Unsafe/base64.scm 148 */

																		{	/* Unsafe/base64.scm 149 */
																			unsigned char BgL_tmpz00_6260;

																			BgL_tmpz00_6260 =
																				STRING_REF
																				(BGl_string3018z00zz__base64z00,
																				BgL_o0z00_2188);
																			bgl_display_char(BgL_tmpz00_6260,
																				BgL_opz00_9);
																		}
																		{	/* Unsafe/base64.scm 150 */
																			unsigned char BgL_tmpz00_6263;

																			BgL_tmpz00_6263 =
																				STRING_REF
																				(BGl_string3018z00zz__base64z00,
																				BgL_o1z00_2189);
																			bgl_display_char(BgL_tmpz00_6263,
																				BgL_opz00_9);
																		}
																		{	/* Unsafe/base64.scm 151 */
																			unsigned char BgL_tmpz00_6266;

																			BgL_tmpz00_6266 =
																				STRING_REF
																				(BGl_string3018z00zz__base64z00,
																				BgL_o2z00_2190);
																			bgl_display_char(BgL_tmpz00_6266,
																				BgL_opz00_9);
																		}
																		return
																			bgl_display_char(((unsigned char) '='),
																			BgL_opz00_9);
														}}}}
													else
														{	/* Unsafe/base64.scm 153 */
															long BgL_o0z00_2200;

															BgL_o0z00_2200 =
																(
																((long) CINT(BgL_i0z00_2176) & ((long) 252)) >>
																(int) (((long) 2)));
															{	/* Unsafe/base64.scm 153 */
																long BgL_o1z00_2201;

																BgL_o1z00_2201 =
																	(
																	(((long) CINT(BgL_i0z00_2176) & ((long) 3)) <<
																		(int) (((long) 4))) |
																	(((long) CINT(BgL_i1z00_2178) & ((long) 240))
																		>> (int) (((long) 4))));
																{	/* Unsafe/base64.scm 154 */
																	long BgL_o2z00_2202;

																	BgL_o2z00_2202 =
																		(
																		(((long) CINT(BgL_i1z00_2178) & ((long) 15))
																			<< (int) (((long) 2))) | (((long)
																				CINT(BgL_i2z00_2186) & ((long) 192)) >>
																			(int) (((long) 6))));
																	{	/* Unsafe/base64.scm 156 */
																		long BgL_o3z00_2203;

																		BgL_o3z00_2203 =
																			(
																			(long) CINT(BgL_i2z00_2186) & ((long)
																				63));
																		{	/* Unsafe/base64.scm 158 */

																			{	/* Unsafe/base64.scm 159 */
																				unsigned char BgL_tmpz00_6294;

																				BgL_tmpz00_6294 =
																					STRING_REF
																					(BGl_string3018z00zz__base64z00,
																					BgL_o0z00_2200);
																				bgl_display_char(BgL_tmpz00_6294,
																					BgL_opz00_9);
																			}
																			{	/* Unsafe/base64.scm 160 */
																				unsigned char BgL_tmpz00_6297;

																				BgL_tmpz00_6297 =
																					STRING_REF
																					(BGl_string3018z00zz__base64z00,
																					BgL_o1z00_2201);
																				bgl_display_char(BgL_tmpz00_6297,
																					BgL_opz00_9);
																			}
																			{	/* Unsafe/base64.scm 161 */
																				unsigned char BgL_tmpz00_6300;

																				BgL_tmpz00_6300 =
																					STRING_REF
																					(BGl_string3018z00zz__base64z00,
																					BgL_o2z00_2202);
																				bgl_display_char(BgL_tmpz00_6300,
																					BgL_opz00_9);
																			}
																			{	/* Unsafe/base64.scm 162 */
																				unsigned char BgL_tmpz00_6303;

																				BgL_tmpz00_6303 =
																					STRING_REF
																					(BGl_string3018z00zz__base64z00,
																					BgL_o3z00_2203);
																				bgl_display_char(BgL_tmpz00_6303,
																					BgL_opz00_9);
																			}
																			{	/* Unsafe/base64.scm 163 */
																				bool_t BgL_test3185z00_6306;

																				if ((BgL_iz00_2174 >= BgL_padz00_2172))
																					{	/* Unsafe/base64.scm 163 */
																						BgL_test3185z00_6306 =
																							(BgL_padz00_2172 > ((long) 0));
																					}
																				else
																					{	/* Unsafe/base64.scm 163 */
																						BgL_test3185z00_6306 = ((bool_t) 0);
																					}
																				if (BgL_test3185z00_6306)
																					{	/* Unsafe/base64.scm 163 */
																						bgl_display_char(((unsigned char)
																								10), BgL_opz00_9);
																						{
																							long BgL_iz00_6311;

																							BgL_iz00_6311 = ((long) 0);
																							BgL_iz00_2174 = BgL_iz00_6311;
																							goto
																								BgL_zc3z04anonymousza31781ze3z87_2175;
																						}
																					}
																				else
																					{
																						long BgL_iz00_6312;

																						BgL_iz00_6312 =
																							(BgL_iz00_2174 + ((long) 4));
																						BgL_iz00_2174 = BgL_iz00_6312;
																						goto
																							BgL_zc3z04anonymousza31781ze3z87_2175;
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



/* actual-string-length */
	long BGl_actualzd2stringzd2lengthz00zz__base64z00(obj_t BgL_sz00_15)
	{
		{	/* Unsafe/base64.scm 206 */
			{
				long BgL_iz00_2226;

				BgL_iz00_2226 = (STRING_LENGTH(BgL_sz00_15) - ((long) 1));
			BgL_zc3z04anonymousza31820ze3z87_2227:
				if ((BgL_iz00_2226 == ((long) 0)))
					{	/* Unsafe/base64.scm 208 */
						return BgL_iz00_2226;
					}
				else
					{	/* Unsafe/base64.scm 210 */
						unsigned char BgL_cz00_2229;

						BgL_cz00_2229 = STRING_REF(BgL_sz00_15, BgL_iz00_2226);
						{	/* Unsafe/base64.scm 211 */
							bool_t BgL_test3188z00_6317;

							if ((BgL_cz00_2229 == ((unsigned char) 10)))
								{	/* Unsafe/base64.scm 211 */
									BgL_test3188z00_6317 = ((bool_t) 1);
								}
							else
								{	/* Unsafe/base64.scm 211 */
									BgL_test3188z00_6317 =
										(BgL_cz00_2229 == ((unsigned char) 13));
								}
							if (BgL_test3188z00_6317)
								{
									long BgL_iz00_6321;

									BgL_iz00_6321 = (BgL_iz00_2226 - ((long) 1));
									BgL_iz00_2226 = BgL_iz00_6321;
									goto BgL_zc3z04anonymousza31820ze3z87_2227;
								}
							else
								{	/* Unsafe/base64.scm 211 */
									return (BgL_iz00_2226 + ((long) 1));
		}}}}}

	}



/* _base64-decode */
	obj_t BGl__base64zd2decodezd2zz__base64z00(obj_t BgL_env1153z00_19,
		obj_t BgL_opt1152z00_18)
	{
		{	/* Unsafe/base64.scm 218 */
			{	/* Unsafe/base64.scm 218 */
				obj_t BgL_g1154z00_2236;

				BgL_g1154z00_2236 = VECTOR_REF(BgL_opt1152z00_18, ((long) 0));
				switch (VECTOR_LENGTH(BgL_opt1152z00_18))
					{
					case ((long) 1):

						{	/* Unsafe/base64.scm 218 */

							{	/* Unsafe/base64.scm 218 */
								obj_t BgL_auxz00_6327;

								if (STRINGP(BgL_g1154z00_2236))
									{	/* Unsafe/base64.scm 218 */
										BgL_auxz00_6327 = BgL_g1154z00_2236;
									}
								else
									{
										obj_t BgL_auxz00_6330;

										BgL_auxz00_6330 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3015z00zz__base64z00, BINT(((long) 8420)),
											BGl_string3022z00zz__base64z00,
											BGl_string3017z00zz__base64z00, BgL_g1154z00_2236);
										FAILURE(BgL_auxz00_6330, BFALSE, BFALSE);
									}
								return
									BGl_base64zd2decodezd2zz__base64z00(BgL_auxz00_6327, BFALSE);
							}
						}
						break;
					case ((long) 2):

						{	/* Unsafe/base64.scm 218 */
							obj_t BgL_eofzd2nozd2paddingz00_2241;

							BgL_eofzd2nozd2paddingz00_2241 =
								VECTOR_REF(BgL_opt1152z00_18, ((long) 1));
							{	/* Unsafe/base64.scm 218 */

								{	/* Unsafe/base64.scm 218 */
									obj_t BgL_auxz00_6336;

									if (STRINGP(BgL_g1154z00_2236))
										{	/* Unsafe/base64.scm 218 */
											BgL_auxz00_6336 = BgL_g1154z00_2236;
										}
									else
										{
											obj_t BgL_auxz00_6339;

											BgL_auxz00_6339 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3015z00zz__base64z00, BINT(((long) 8420)),
												BGl_string3022z00zz__base64z00,
												BGl_string3017z00zz__base64z00, BgL_g1154z00_2236);
											FAILURE(BgL_auxz00_6339, BFALSE, BFALSE);
										}
									return
										BGl_base64zd2decodezd2zz__base64z00(BgL_auxz00_6336,
										BgL_eofzd2nozd2paddingz00_2241);
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



/* base64-decode */
	BGL_EXPORTED_DEF obj_t BGl_base64zd2decodezd2zz__base64z00(obj_t BgL_sz00_16,
		obj_t BgL_eofzd2nozd2paddingz00_17)
	{
		{	/* Unsafe/base64.scm 218 */
			{	/* Unsafe/base64.scm 219 */
				long BgL_lenz00_2242;

				BgL_lenz00_2242 =
					BGl_actualzd2stringzd2lengthz00zz__base64z00(BgL_sz00_16);
				{	/* Unsafe/base64.scm 219 */
					long BgL_nlenz00_2243;

					if (CBOOL(BgL_eofzd2nozd2paddingz00_17))
						{	/* Unsafe/base64.scm 220 */
							BgL_nlenz00_2243 =
								((((long) 1) + (BgL_lenz00_2242 / ((long) 4))) * ((long) 3));
						}
					else
						{	/* Unsafe/base64.scm 220 */
							BgL_nlenz00_2243 = ((BgL_lenz00_2242 / ((long) 4)) * ((long) 3));
						}
					{	/* Unsafe/base64.scm 220 */
						obj_t BgL_resz00_2244;

						{	/* Ieee/string.scm 168 */

							BgL_resz00_2244 =
								make_string(BgL_nlenz00_2243, ((unsigned char) ' '));
						}
						{	/* Unsafe/base64.scm 223 */

							{
								long BgL_xz00_2246;
								long BgL_yz00_2247;

								BgL_xz00_2246 = ((long) 0);
								BgL_yz00_2247 = ((long) 0);
							BgL_zc3z04anonymousza31827ze3z87_2248:
								if ((BgL_xz00_2246 < BgL_lenz00_2242))
									{	/* Unsafe/base64.scm 227 */
										unsigned char BgL_cz00_2250;

										BgL_cz00_2250 =
											STRING_REF(BgL_sz00_16, (BgL_xz00_2246 + ((long) 0)));
										{	/* Unsafe/base64.scm 227 */
											int BgL_q0z00_2251;

											{	/* Unsafe/base64.scm 228 */
												int BgL_res2773z00_4177;

												{	/* Unsafe/base64.scm 228 */
													unsigned char BgL_cz00_4165;

													BgL_cz00_4165 = (char) (BgL_cz00_2250);
													{	/* Unsafe/base64.scm 201 */
														long BgL_arg1819z00_4166;

														BgL_arg1819z00_4166 =
															((unsigned char) (BgL_cz00_4165));
														{	/* Unsafe/base64.scm 201 */
															int BgL_res2772z00_4176;

															{	/* Unsafe/base64.scm 201 */
																char BgL_cz00_4169;

																BgL_cz00_4169 =
																	(signed char) (BgL_arg1819z00_4166);
																{	/* Unsafe/base64.scm 195 */
																	uint8_t BgL_arg1818z00_4170;

																	{	/* Unsafe/base64.scm 195 */
																		long BgL_tmpz00_6363;

																		BgL_tmpz00_6363 = (long) (BgL_cz00_4169);
																		BgL_arg1818z00_4170 =
																			BGL_U8VREF
																			(BGl_bytezd2tablezd2zz__base64z00,
																			BgL_tmpz00_6363);
																	}
																	{	/* Unsafe/base64.scm 195 */
																		long BgL_res2771z00_4175;

																		{	/* Unsafe/base64.scm 195 */
																			int8_t BgL_xz00_4171;

																			BgL_xz00_4171 =
																				(int8_t) (BgL_arg1818z00_4170);
																			{	/* Unsafe/base64.scm 195 */
																				long BgL_arg2251z00_4172;

																				BgL_arg2251z00_4172 =
																					(long) (BgL_xz00_4171);
																				{	/* Unsafe/base64.scm 195 */
																					long BgL_res2770z00_4174;

																					BgL_res2770z00_4174 =
																						(long) (BgL_arg2251z00_4172);
																					BgL_res2771z00_4175 =
																						BgL_res2770z00_4174;
																		}}}
																		BgL_res2772z00_4176 =
																			(int) (BgL_res2771z00_4175);
															}}}
															BgL_res2773z00_4177 = BgL_res2772z00_4176;
												}}}
												BgL_q0z00_2251 = BgL_res2773z00_4177;
											}
											{	/* Unsafe/base64.scm 228 */

												{	/* Unsafe/base64.scm 229 */
													bool_t BgL_test3194z00_6370;

													if (((long) (BgL_q0z00_2251) == ((long) 0)))
														{	/* Unsafe/base64.scm 230 */
															bool_t BgL__ortest_1045z00_2339;

															BgL__ortest_1045z00_2339 =
																(BgL_cz00_2250 == ((unsigned char) 10));
															if (BgL__ortest_1045z00_2339)
																{	/* Unsafe/base64.scm 230 */
																	BgL_test3194z00_6370 =
																		BgL__ortest_1045z00_2339;
																}
															else
																{	/* Unsafe/base64.scm 230 */
																	BgL_test3194z00_6370 =
																		(BgL_cz00_2250 == ((unsigned char) 13));
														}}
													else
														{	/* Unsafe/base64.scm 229 */
															BgL_test3194z00_6370 = ((bool_t) 0);
														}
													if (BgL_test3194z00_6370)
														{
															long BgL_xz00_6377;

															BgL_xz00_6377 = (BgL_xz00_2246 + ((long) 1));
															BgL_xz00_2246 = BgL_xz00_6377;
															goto BgL_zc3z04anonymousza31827ze3z87_2248;
														}
													else
														{	/* Unsafe/base64.scm 229 */
															if (
																(BgL_xz00_2246 <=
																	(BgL_lenz00_2242 - ((long) 4))))
																{	/* Unsafe/base64.scm 234 */
																	int BgL_q1z00_2258;

																	{	/* Unsafe/base64.scm 234 */
																		unsigned char BgL_arg1859z00_2282;

																		BgL_arg1859z00_2282 =
																			STRING_REF(BgL_sz00_16,
																			(BgL_xz00_2246 + ((long) 1)));
																		{	/* Unsafe/base64.scm 234 */
																			int BgL_res2786z00_4210;

																			{	/* Unsafe/base64.scm 234 */
																				unsigned char BgL_cz00_4198;

																				BgL_cz00_4198 =
																					(char) (BgL_arg1859z00_2282);
																				{	/* Unsafe/base64.scm 201 */
																					long BgL_arg1819z00_4199;

																					BgL_arg1819z00_4199 =
																						((unsigned char) (BgL_cz00_4198));
																					{	/* Unsafe/base64.scm 201 */
																						int BgL_res2785z00_4209;

																						{	/* Unsafe/base64.scm 201 */
																							char BgL_cz00_4202;

																							BgL_cz00_4202 =
																								(signed
																								char) (BgL_arg1819z00_4199);
																							{	/* Unsafe/base64.scm 195 */
																								uint8_t BgL_arg1818z00_4203;

																								{	/* Unsafe/base64.scm 195 */
																									long BgL_tmpz00_6388;

																									BgL_tmpz00_6388 =
																										(long) (BgL_cz00_4202);
																									BgL_arg1818z00_4203 =
																										BGL_U8VREF
																										(BGl_bytezd2tablezd2zz__base64z00,
																										BgL_tmpz00_6388);
																								}
																								{	/* Unsafe/base64.scm 195 */
																									long BgL_res2784z00_4208;

																									{	/* Unsafe/base64.scm 195 */
																										int8_t BgL_xz00_4204;

																										BgL_xz00_4204 =
																											(int8_t)
																											(BgL_arg1818z00_4203);
																										{	/* Unsafe/base64.scm 195 */
																											long BgL_arg2251z00_4205;

																											BgL_arg2251z00_4205 =
																												(long) (BgL_xz00_4204);
																											{	/* Unsafe/base64.scm 195 */
																												long
																													BgL_res2783z00_4207;
																												BgL_res2783z00_4207 =
																													(long)
																													(BgL_arg2251z00_4205);
																												BgL_res2784z00_4208 =
																													BgL_res2783z00_4207;
																									}}}
																									BgL_res2785z00_4209 =
																										(int) (BgL_res2784z00_4208);
																						}}}
																						BgL_res2786z00_4210 =
																							BgL_res2785z00_4209;
																			}}}
																			BgL_q1z00_2258 = BgL_res2786z00_4210;
																	}}
																	{	/* Unsafe/base64.scm 234 */
																		int BgL_q2z00_2259;

																		{	/* Unsafe/base64.scm 235 */
																			unsigned char BgL_arg1857z00_2280;

																			BgL_arg1857z00_2280 =
																				STRING_REF(BgL_sz00_16,
																				(BgL_xz00_2246 + ((long) 2)));
																			{	/* Unsafe/base64.scm 235 */
																				int BgL_res2793z00_4228;

																				{	/* Unsafe/base64.scm 235 */
																					unsigned char BgL_cz00_4216;

																					BgL_cz00_4216 =
																						(char) (BgL_arg1857z00_2280);
																					{	/* Unsafe/base64.scm 201 */
																						long BgL_arg1819z00_4217;

																						BgL_arg1819z00_4217 =
																							((unsigned char) (BgL_cz00_4216));
																						{	/* Unsafe/base64.scm 201 */
																							int BgL_res2792z00_4227;

																							{	/* Unsafe/base64.scm 201 */
																								char BgL_cz00_4220;

																								BgL_cz00_4220 =
																									(signed
																									char) (BgL_arg1819z00_4217);
																								{	/* Unsafe/base64.scm 195 */
																									uint8_t BgL_arg1818z00_4221;

																									{	/* Unsafe/base64.scm 195 */
																										long BgL_tmpz00_6401;

																										BgL_tmpz00_6401 =
																											(long) (BgL_cz00_4220);
																										BgL_arg1818z00_4221 =
																											BGL_U8VREF
																											(BGl_bytezd2tablezd2zz__base64z00,
																											BgL_tmpz00_6401);
																									}
																									{	/* Unsafe/base64.scm 195 */
																										long BgL_res2791z00_4226;

																										{	/* Unsafe/base64.scm 195 */
																											int8_t BgL_xz00_4222;

																											BgL_xz00_4222 =
																												(int8_t)
																												(BgL_arg1818z00_4221);
																											{	/* Unsafe/base64.scm 195 */
																												long
																													BgL_arg2251z00_4223;
																												BgL_arg2251z00_4223 =
																													(long)
																													(BgL_xz00_4222);
																												{	/* Unsafe/base64.scm 195 */
																													long
																														BgL_res2790z00_4225;
																													BgL_res2790z00_4225 =
																														(long)
																														(BgL_arg2251z00_4223);
																													BgL_res2791z00_4226 =
																														BgL_res2790z00_4225;
																										}}}
																										BgL_res2792z00_4227 =
																											(int)
																											(BgL_res2791z00_4226);
																							}}}
																							BgL_res2793z00_4228 =
																								BgL_res2792z00_4227;
																				}}}
																				BgL_q2z00_2259 = BgL_res2793z00_4228;
																		}}
																		{	/* Unsafe/base64.scm 235 */
																			int BgL_q3z00_2260;

																			{	/* Unsafe/base64.scm 236 */
																				unsigned char BgL_arg1855z00_2278;

																				BgL_arg1855z00_2278 =
																					STRING_REF(BgL_sz00_16,
																					(BgL_xz00_2246 + ((long) 3)));
																				{	/* Unsafe/base64.scm 236 */
																					int BgL_res2800z00_4246;

																					{	/* Unsafe/base64.scm 236 */
																						unsigned char BgL_cz00_4234;

																						BgL_cz00_4234 =
																							(char) (BgL_arg1855z00_2278);
																						{	/* Unsafe/base64.scm 201 */
																							long BgL_arg1819z00_4235;

																							BgL_arg1819z00_4235 =
																								(
																								(unsigned
																									char) (BgL_cz00_4234));
																							{	/* Unsafe/base64.scm 201 */
																								int BgL_res2799z00_4245;

																								{	/* Unsafe/base64.scm 201 */
																									char BgL_cz00_4238;

																									BgL_cz00_4238 =
																										(signed
																										char) (BgL_arg1819z00_4235);
																									{	/* Unsafe/base64.scm 195 */
																										uint8_t BgL_arg1818z00_4239;

																										{	/* Unsafe/base64.scm 195 */
																											long BgL_tmpz00_6414;

																											BgL_tmpz00_6414 =
																												(long) (BgL_cz00_4238);
																											BgL_arg1818z00_4239 =
																												BGL_U8VREF
																												(BGl_bytezd2tablezd2zz__base64z00,
																												BgL_tmpz00_6414);
																										}
																										{	/* Unsafe/base64.scm 195 */
																											long BgL_res2798z00_4244;

																											{	/* Unsafe/base64.scm 195 */
																												int8_t BgL_xz00_4240;

																												BgL_xz00_4240 =
																													(int8_t)
																													(BgL_arg1818z00_4239);
																												{	/* Unsafe/base64.scm 195 */
																													long
																														BgL_arg2251z00_4241;
																													BgL_arg2251z00_4241 =
																														(long)
																														(BgL_xz00_4240);
																													{	/* Unsafe/base64.scm 195 */
																														long
																															BgL_res2797z00_4243;
																														BgL_res2797z00_4243
																															=
																															(long)
																															(BgL_arg2251z00_4241);
																														BgL_res2798z00_4244
																															=
																															BgL_res2797z00_4243;
																											}}}
																											BgL_res2799z00_4245 =
																												(int)
																												(BgL_res2798z00_4244);
																								}}}
																								BgL_res2800z00_4246 =
																									BgL_res2799z00_4245;
																					}}}
																					BgL_q3z00_2260 = BgL_res2800z00_4246;
																			}}
																			{	/* Unsafe/base64.scm 236 */
																				long BgL_v0z00_2261;

																				BgL_v0z00_2261 =
																					(
																					((long) (BgL_q0z00_2251) <<
																						(int) (((long) 2))) |
																					((long) (BgL_q1z00_2258) >>
																						(int) (((long) 4))));
																				{	/* Unsafe/base64.scm 237 */
																					long BgL_v1z00_2262;

																					BgL_v1z00_2262 =
																						(
																						(((long) (BgL_q1z00_2258) <<
																								(int) (((long) 4))) & ((long)
																								240)) | ((long) (BgL_q2z00_2259)
																							>> (int) (((long) 2))));
																					{	/* Unsafe/base64.scm 239 */
																						long BgL_v2z00_2263;

																						BgL_v2z00_2263 =
																							(
																							(((long) (BgL_q2z00_2259) <<
																									(int) (((long) 6))) & ((long)
																									192)) |
																							(long) (BgL_q3z00_2260));
																						{	/* Unsafe/base64.scm 241 */

																							{	/* Unsafe/base64.scm 243 */
																								unsigned char BgL_tmpz00_6442;

																								BgL_tmpz00_6442 =
																									(BgL_v0z00_2261);
																								STRING_SET(BgL_resz00_2244,
																									BgL_yz00_2247,
																									BgL_tmpz00_6442);
																							}
																							{	/* Unsafe/base64.scm 244 */
																								unsigned char BgL_auxz00_6447;
																								long BgL_tmpz00_6445;

																								BgL_auxz00_6447 =
																									(BgL_v1z00_2262);
																								BgL_tmpz00_6445 =
																									(BgL_yz00_2247 + ((long) 1));
																								STRING_SET(BgL_resz00_2244,
																									BgL_tmpz00_6445,
																									BgL_auxz00_6447);
																							}
																							{	/* Unsafe/base64.scm 245 */
																								unsigned char BgL_auxz00_6452;
																								long BgL_tmpz00_6450;

																								BgL_auxz00_6452 =
																									(BgL_v2z00_2263);
																								BgL_tmpz00_6450 =
																									(BgL_yz00_2247 + ((long) 2));
																								STRING_SET(BgL_resz00_2244,
																									BgL_tmpz00_6450,
																									BgL_auxz00_6452);
																							}
																							{
																								long BgL_yz00_6457;
																								long BgL_xz00_6455;

																								BgL_xz00_6455 =
																									(BgL_xz00_2246 + ((long) 4));
																								BgL_yz00_6457 =
																									(BgL_yz00_2247 + ((long) 3));
																								BgL_yz00_2247 = BgL_yz00_6457;
																								BgL_xz00_2246 = BgL_xz00_6455;
																								goto
																									BgL_zc3z04anonymousza31827ze3z87_2248;
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															else
																{	/* Unsafe/base64.scm 247 */
																	bool_t BgL_test3198z00_6459;

																	if (
																		(BgL_xz00_2246 <=
																			(BgL_lenz00_2242 - ((long) 3))))
																		{	/* Unsafe/base64.scm 247 */
																			BgL_test3198z00_6459 =
																				CBOOL(BgL_eofzd2nozd2paddingz00_17);
																		}
																	else
																		{	/* Unsafe/base64.scm 247 */
																			BgL_test3198z00_6459 = ((bool_t) 0);
																		}
																	if (BgL_test3198z00_6459)
																		{	/* Unsafe/base64.scm 248 */
																			unsigned char BgL_c1z00_2288;

																			BgL_c1z00_2288 =
																				STRING_REF(BgL_sz00_16,
																				(BgL_xz00_2246 + ((long) 1)));
																			{	/* Unsafe/base64.scm 248 */
																				unsigned char BgL_c2z00_2289;

																				BgL_c2z00_2289 =
																					STRING_REF(BgL_sz00_16,
																					(BgL_xz00_2246 + ((long) 2)));
																				{	/* Unsafe/base64.scm 249 */
																					int BgL_q1z00_2290;

																					{	/* Unsafe/base64.scm 250 */
																						int BgL_res2828z00_4320;

																						{	/* Unsafe/base64.scm 250 */
																							unsigned char BgL_cz00_4308;

																							BgL_cz00_4308 =
																								(char) (BgL_c1z00_2288);
																							{	/* Unsafe/base64.scm 201 */
																								long BgL_arg1819z00_4309;

																								BgL_arg1819z00_4309 =
																									(
																									(unsigned
																										char) (BgL_cz00_4308));
																								{	/* Unsafe/base64.scm 201 */
																									int BgL_res2827z00_4319;

																									{	/* Unsafe/base64.scm 201 */
																										char BgL_cz00_4312;

																										BgL_cz00_4312 =
																											(signed
																											char)
																											(BgL_arg1819z00_4309);
																										{	/* Unsafe/base64.scm 195 */
																											uint8_t
																												BgL_arg1818z00_4313;
																											{	/* Unsafe/base64.scm 195 */
																												long BgL_tmpz00_6472;

																												BgL_tmpz00_6472 =
																													(long)
																													(BgL_cz00_4312);
																												BgL_arg1818z00_4313 =
																													BGL_U8VREF
																													(BGl_bytezd2tablezd2zz__base64z00,
																													BgL_tmpz00_6472);
																											}
																											{	/* Unsafe/base64.scm 195 */
																												long
																													BgL_res2826z00_4318;
																												{	/* Unsafe/base64.scm 195 */
																													int8_t BgL_xz00_4314;

																													BgL_xz00_4314 =
																														(int8_t)
																														(BgL_arg1818z00_4313);
																													{	/* Unsafe/base64.scm 195 */
																														long
																															BgL_arg2251z00_4315;
																														BgL_arg2251z00_4315
																															=
																															(long)
																															(BgL_xz00_4314);
																														{	/* Unsafe/base64.scm 195 */
																															long
																																BgL_res2825z00_4317;
																															BgL_res2825z00_4317
																																=
																																(long)
																																(BgL_arg2251z00_4315);
																															BgL_res2826z00_4318
																																=
																																BgL_res2825z00_4317;
																												}}}
																												BgL_res2827z00_4319 =
																													(int)
																													(BgL_res2826z00_4318);
																									}}}
																									BgL_res2828z00_4320 =
																										BgL_res2827z00_4319;
																						}}}
																						BgL_q1z00_2290 =
																							BgL_res2828z00_4320;
																					}
																					{	/* Unsafe/base64.scm 250 */
																						int BgL_q2z00_2291;

																						{	/* Unsafe/base64.scm 251 */
																							int BgL_res2833z00_4333;

																							{	/* Unsafe/base64.scm 251 */
																								unsigned char BgL_cz00_4321;

																								BgL_cz00_4321 =
																									(char) (BgL_c2z00_2289);
																								{	/* Unsafe/base64.scm 201 */
																									long BgL_arg1819z00_4322;

																									BgL_arg1819z00_4322 =
																										(
																										(unsigned
																											char) (BgL_cz00_4321));
																									{	/* Unsafe/base64.scm 201 */
																										int BgL_res2832z00_4332;

																										{	/* Unsafe/base64.scm 201 */
																											char BgL_cz00_4325;

																											BgL_cz00_4325 =
																												(signed
																												char)
																												(BgL_arg1819z00_4322);
																											{	/* Unsafe/base64.scm 195 */
																												uint8_t
																													BgL_arg1818z00_4326;
																												{	/* Unsafe/base64.scm 195 */
																													long BgL_tmpz00_6483;

																													BgL_tmpz00_6483 =
																														(long)
																														(BgL_cz00_4325);
																													BgL_arg1818z00_4326 =
																														BGL_U8VREF
																														(BGl_bytezd2tablezd2zz__base64z00,
																														BgL_tmpz00_6483);
																												}
																												{	/* Unsafe/base64.scm 195 */
																													long
																														BgL_res2831z00_4331;
																													{	/* Unsafe/base64.scm 195 */
																														int8_t
																															BgL_xz00_4327;
																														BgL_xz00_4327 =
																															(int8_t)
																															(BgL_arg1818z00_4326);
																														{	/* Unsafe/base64.scm 195 */
																															long
																																BgL_arg2251z00_4328;
																															BgL_arg2251z00_4328
																																=
																																(long)
																																(BgL_xz00_4327);
																															{	/* Unsafe/base64.scm 195 */
																																long
																																	BgL_res2830z00_4330;
																																BgL_res2830z00_4330
																																	=
																																	(long)
																																	(BgL_arg2251z00_4328);
																																BgL_res2831z00_4331
																																	=
																																	BgL_res2830z00_4330;
																													}}}
																													BgL_res2832z00_4332 =
																														(int)
																														(BgL_res2831z00_4331);
																										}}}
																										BgL_res2833z00_4333 =
																											BgL_res2832z00_4332;
																							}}}
																							BgL_q2z00_2291 =
																								BgL_res2833z00_4333;
																						}
																						{	/* Unsafe/base64.scm 251 */
																							long BgL_v0z00_2292;

																							BgL_v0z00_2292 =
																								(
																								((long) (BgL_q0z00_2251) <<
																									(int) (((long) 2))) |
																								((long) (BgL_q1z00_2290) >>
																									(int) (((long) 4))));
																							{	/* Unsafe/base64.scm 252 */
																								long BgL_v1z00_2293;

																								BgL_v1z00_2293 =
																									(
																									(((long) (BgL_q1z00_2290) <<
																											(int) (((long) 4))) &
																										((long) 240)) |
																									((long) (BgL_q2z00_2291) >>
																										(int) (((long) 2))));
																								{	/* Unsafe/base64.scm 254 */

																									{	/* Unsafe/base64.scm 256 */
																										unsigned char
																											BgL_tmpz00_6505;
																										BgL_tmpz00_6505 =
																											(BgL_v0z00_2292);
																										STRING_SET(BgL_resz00_2244,
																											BgL_yz00_2247,
																											BgL_tmpz00_6505);
																									}
																									{	/* Unsafe/base64.scm 257 */
																										unsigned char
																											BgL_auxz00_6510;
																										long BgL_tmpz00_6508;

																										BgL_auxz00_6510 =
																											(BgL_v1z00_2293);
																										BgL_tmpz00_6508 =
																											(BgL_yz00_2247 +
																											((long) 1));
																										STRING_SET(BgL_resz00_2244,
																											BgL_tmpz00_6508,
																											BgL_auxz00_6510);
																									}
																									if (
																										(BgL_c1z00_2288 ==
																											((unsigned char) '=')))
																										{	/* Unsafe/base64.scm 259 */
																											return
																												bgl_string_shrink
																												(BgL_resz00_2244,
																												BgL_yz00_2247);
																										}
																									else
																										{	/* Unsafe/base64.scm 259 */
																											if (
																												(BgL_c2z00_2289 ==
																													((unsigned char)
																														'=')))
																												{	/* Unsafe/base64.scm 262 */
																													long BgL_tmpz00_6518;

																													BgL_tmpz00_6518 =
																														(BgL_yz00_2247 +
																														((long) 1));
																													return
																														bgl_string_shrink
																														(BgL_resz00_2244,
																														BgL_tmpz00_6518);
																												}
																											else
																												{	/* Unsafe/base64.scm 264 */
																													long BgL_tmpz00_6521;

																													BgL_tmpz00_6521 =
																														(BgL_yz00_2247 +
																														((long) 2));
																													return
																														bgl_string_shrink
																														(BgL_resz00_2244,
																														BgL_tmpz00_6521);
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
																		{	/* Unsafe/base64.scm 265 */
																			bool_t BgL_test3202z00_6524;

																			if (
																				(BgL_xz00_2246 <=
																					(BgL_lenz00_2242 - ((long) 2))))
																				{	/* Unsafe/base64.scm 265 */
																					BgL_test3202z00_6524 =
																						CBOOL(BgL_eofzd2nozd2paddingz00_17);
																				}
																			else
																				{	/* Unsafe/base64.scm 265 */
																					BgL_test3202z00_6524 = ((bool_t) 0);
																				}
																			if (BgL_test3202z00_6524)
																				{	/* Unsafe/base64.scm 266 */
																					unsigned char BgL_c1z00_2312;

																					BgL_c1z00_2312 =
																						STRING_REF(BgL_sz00_16,
																						(BgL_xz00_2246 + ((long) 1)));
																					{	/* Unsafe/base64.scm 266 */
																						int BgL_q1z00_2313;

																						{	/* Unsafe/base64.scm 267 */
																							int BgL_res2856z00_4400;

																							{	/* Unsafe/base64.scm 267 */
																								unsigned char BgL_cz00_4388;

																								BgL_cz00_4388 =
																									(char) (BgL_c1z00_2312);
																								{	/* Unsafe/base64.scm 201 */
																									long BgL_arg1819z00_4389;

																									BgL_arg1819z00_4389 =
																										(
																										(unsigned
																											char) (BgL_cz00_4388));
																									{	/* Unsafe/base64.scm 201 */
																										int BgL_res2855z00_4399;

																										{	/* Unsafe/base64.scm 201 */
																											char BgL_cz00_4392;

																											BgL_cz00_4392 =
																												(signed
																												char)
																												(BgL_arg1819z00_4389);
																											{	/* Unsafe/base64.scm 195 */
																												uint8_t
																													BgL_arg1818z00_4393;
																												{	/* Unsafe/base64.scm 195 */
																													long BgL_tmpz00_6535;

																													BgL_tmpz00_6535 =
																														(long)
																														(BgL_cz00_4392);
																													BgL_arg1818z00_4393 =
																														BGL_U8VREF
																														(BGl_bytezd2tablezd2zz__base64z00,
																														BgL_tmpz00_6535);
																												}
																												{	/* Unsafe/base64.scm 195 */
																													long
																														BgL_res2854z00_4398;
																													{	/* Unsafe/base64.scm 195 */
																														int8_t
																															BgL_xz00_4394;
																														BgL_xz00_4394 =
																															(int8_t)
																															(BgL_arg1818z00_4393);
																														{	/* Unsafe/base64.scm 195 */
																															long
																																BgL_arg2251z00_4395;
																															BgL_arg2251z00_4395
																																=
																																(long)
																																(BgL_xz00_4394);
																															{	/* Unsafe/base64.scm 195 */
																																long
																																	BgL_res2853z00_4397;
																																BgL_res2853z00_4397
																																	=
																																	(long)
																																	(BgL_arg2251z00_4395);
																																BgL_res2854z00_4398
																																	=
																																	BgL_res2853z00_4397;
																													}}}
																													BgL_res2855z00_4399 =
																														(int)
																														(BgL_res2854z00_4398);
																										}}}
																										BgL_res2856z00_4400 =
																											BgL_res2855z00_4399;
																							}}}
																							BgL_q1z00_2313 =
																								BgL_res2856z00_4400;
																						}
																						{	/* Unsafe/base64.scm 267 */
																							long BgL_v0z00_2314;

																							BgL_v0z00_2314 =
																								(
																								((long) (BgL_q0z00_2251) <<
																									(int) (((long) 2))) |
																								((long) (BgL_q1z00_2313) >>
																									(int) (((long) 4))));
																							{	/* Unsafe/base64.scm 268 */

																								{	/* Unsafe/base64.scm 270 */
																									unsigned char BgL_tmpz00_6549;

																									BgL_tmpz00_6549 =
																										(BgL_v0z00_2314);
																									STRING_SET(BgL_resz00_2244,
																										BgL_yz00_2247,
																										BgL_tmpz00_6549);
																								}
																								if (
																									(BgL_c1z00_2312 ==
																										((unsigned char) '=')))
																									{	/* Unsafe/base64.scm 271 */
																										return
																											bgl_string_shrink
																											(BgL_resz00_2244,
																											BgL_yz00_2247);
																									}
																								else
																									{	/* Unsafe/base64.scm 273 */
																										long BgL_tmpz00_6555;

																										BgL_tmpz00_6555 =
																											(BgL_yz00_2247 +
																											((long) 1));
																										return
																											bgl_string_shrink
																											(BgL_resz00_2244,
																											BgL_tmpz00_6555);
																									}
																							}
																						}
																					}
																				}
																			else
																				{	/* Unsafe/base64.scm 274 */
																					bool_t BgL_test3205z00_6558;

																					if (
																						(BgL_xz00_2246 <=
																							(BgL_lenz00_2242 - ((long) 1))))
																						{	/* Unsafe/base64.scm 274 */
																							BgL_test3205z00_6558 =
																								CBOOL
																								(BgL_eofzd2nozd2paddingz00_17);
																						}
																					else
																						{	/* Unsafe/base64.scm 274 */
																							BgL_test3205z00_6558 =
																								((bool_t) 0);
																						}
																					if (BgL_test3205z00_6558)
																						{	/* Unsafe/base64.scm 275 */
																							int BgL_q1z00_2325;

																							{	/* Unsafe/base64.scm 275 */
																								int BgL_res2869z00_4439;

																								{	/* Unsafe/base64.scm 275 */
																									unsigned char BgL_cz00_4427;

																									BgL_cz00_4427 =
																										(char) (((unsigned char)
																											'='));
																									{	/* Unsafe/base64.scm 201 */
																										long BgL_arg1819z00_4428;

																										BgL_arg1819z00_4428 =
																											(
																											(unsigned
																												char) (BgL_cz00_4427));
																										{	/* Unsafe/base64.scm 201 */
																											int BgL_res2868z00_4438;

																											{	/* Unsafe/base64.scm 201 */
																												char BgL_cz00_4431;

																												BgL_cz00_4431 =
																													(signed
																													char)
																													(BgL_arg1819z00_4428);
																												{	/* Unsafe/base64.scm 195 */
																													uint8_t
																														BgL_arg1818z00_4432;
																													{	/* Unsafe/base64.scm 195 */
																														long
																															BgL_tmpz00_6567;
																														BgL_tmpz00_6567 =
																															(long)
																															(BgL_cz00_4431);
																														BgL_arg1818z00_4432
																															=
																															BGL_U8VREF
																															(BGl_bytezd2tablezd2zz__base64z00,
																															BgL_tmpz00_6567);
																													}
																													{	/* Unsafe/base64.scm 195 */
																														long
																															BgL_res2867z00_4437;
																														{	/* Unsafe/base64.scm 195 */
																															int8_t
																																BgL_xz00_4433;
																															BgL_xz00_4433 =
																																(int8_t)
																																(BgL_arg1818z00_4432);
																															{	/* Unsafe/base64.scm 195 */
																																long
																																	BgL_arg2251z00_4434;
																																BgL_arg2251z00_4434
																																	=
																																	(long)
																																	(BgL_xz00_4433);
																																{	/* Unsafe/base64.scm 195 */
																																	long
																																		BgL_res2866z00_4436;
																																	BgL_res2866z00_4436
																																		=
																																		(long)
																																		(BgL_arg2251z00_4434);
																																	BgL_res2867z00_4437
																																		=
																																		BgL_res2866z00_4436;
																														}}}
																														BgL_res2868z00_4438
																															=
																															(int)
																															(BgL_res2867z00_4437);
																											}}}
																											BgL_res2869z00_4439 =
																												BgL_res2868z00_4438;
																								}}}
																								BgL_q1z00_2325 =
																									BgL_res2869z00_4439;
																							}
																							{	/* Unsafe/base64.scm 275 */
																								long BgL_v0z00_2326;

																								BgL_v0z00_2326 =
																									(
																									((long) (BgL_q0z00_2251) <<
																										(int) (((long) 2))) |
																									((long) (BgL_q1z00_2325) >>
																										(int) (((long) 4))));
																								{	/* Unsafe/base64.scm 276 */

																									{	/* Unsafe/base64.scm 277 */
																										unsigned char
																											BgL_tmpz00_6581;
																										BgL_tmpz00_6581 =
																											(BgL_v0z00_2326);
																										STRING_SET(BgL_resz00_2244,
																											BgL_yz00_2247,
																											BgL_tmpz00_6581);
																									}
																									return
																										bgl_string_shrink
																										(BgL_resz00_2244,
																										BgL_yz00_2247);
																								}
																							}
																						}
																					else
																						{	/* Unsafe/base64.scm 280 */
																							long BgL_tmpz00_6585;

																							BgL_tmpz00_6585 =
																								(BgL_yz00_2247 + ((long) 1));
																							return
																								bgl_string_shrink
																								(BgL_resz00_2244,
																								BgL_tmpz00_6585);
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
									{	/* Unsafe/base64.scm 282 */
										bool_t BgL_test3207z00_6588;

										if ((BgL_lenz00_2242 > ((long) 2)))
											{	/* Unsafe/base64.scm 282 */
												BgL_test3207z00_6588 =
													(STRING_REF(BgL_sz00_16,
														(BgL_lenz00_2242 - ((long) 2))) ==
													((unsigned char) '='));
											}
										else
											{	/* Unsafe/base64.scm 282 */
												BgL_test3207z00_6588 = ((bool_t) 0);
											}
										if (BgL_test3207z00_6588)
											{	/* Unsafe/base64.scm 283 */
												long BgL_tmpz00_6594;

												BgL_tmpz00_6594 = (BgL_yz00_2247 - ((long) 2));
												return
													bgl_string_shrink(BgL_resz00_2244, BgL_tmpz00_6594);
											}
										else
											{	/* Unsafe/base64.scm 284 */
												bool_t BgL_test3209z00_6597;

												if ((BgL_lenz00_2242 > ((long) 1)))
													{	/* Unsafe/base64.scm 284 */
														BgL_test3209z00_6597 =
															(STRING_REF(BgL_sz00_16,
																(BgL_lenz00_2242 - ((long) 1))) ==
															((unsigned char) '='));
													}
												else
													{	/* Unsafe/base64.scm 284 */
														BgL_test3209z00_6597 = ((bool_t) 0);
													}
												if (BgL_test3209z00_6597)
													{	/* Unsafe/base64.scm 285 */
														long BgL_tmpz00_6603;

														BgL_tmpz00_6603 = (BgL_yz00_2247 - ((long) 1));
														return
															bgl_string_shrink(BgL_resz00_2244,
															BgL_tmpz00_6603);
													}
												else
													{	/* Unsafe/base64.scm 284 */
														if ((BgL_yz00_2247 < BgL_nlenz00_2243))
															{	/* Unsafe/base64.scm 287 */
																return
																	bgl_string_shrink(BgL_resz00_2244,
																	BgL_yz00_2247);
															}
														else
															{	/* Unsafe/base64.scm 287 */
																return BgL_resz00_2244;
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



/* _base64-decode-port */
	obj_t BGl__base64zd2decodezd2portz00zz__base64z00(obj_t BgL_env1158z00_24,
		obj_t BgL_opt1157z00_23)
	{
		{	/* Unsafe/base64.scm 380 */
			{	/* Unsafe/base64.scm 380 */
				obj_t BgL_g1159z00_2364;
				obj_t BgL_g1160z00_2365;

				BgL_g1159z00_2364 = VECTOR_REF(BgL_opt1157z00_23, ((long) 0));
				BgL_g1160z00_2365 = VECTOR_REF(BgL_opt1157z00_23, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1157z00_23))
					{
					case ((long) 2):

						{	/* Unsafe/base64.scm 380 */

							{	/* Unsafe/base64.scm 380 */
								obj_t BgL_ipz00_4491;
								obj_t BgL_opz00_4492;

								if (INPUT_PORTP(BgL_g1159z00_2364))
									{	/* Unsafe/base64.scm 380 */
										BgL_ipz00_4491 = BgL_g1159z00_2364;
									}
								else
									{
										obj_t BgL_auxz00_6613;

										BgL_auxz00_6613 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3015z00zz__base64z00, BINT(((long) 14330)),
											BGl_string3023z00zz__base64z00,
											BGl_string3020z00zz__base64z00, BgL_g1159z00_2364);
										FAILURE(BgL_auxz00_6613, BFALSE, BFALSE);
									}
								if (OUTPUT_PORTP(BgL_g1160z00_2365))
									{	/* Unsafe/base64.scm 380 */
										BgL_opz00_4492 = BgL_g1160z00_2365;
									}
								else
									{
										obj_t BgL_auxz00_6619;

										BgL_auxz00_6619 =
											BGl_typezd2errorzd2zz__errorz00
											(BGl_string3015z00zz__base64z00, BINT(((long) 14330)),
											BGl_string3023z00zz__base64z00,
											BGl_string3021z00zz__base64z00, BgL_g1160z00_2365);
										FAILURE(BgL_auxz00_6619, BFALSE, BFALSE);
									}
								{	/* Unsafe/base64.scm 381 */
									obj_t BgL_arg1930z00_4493;

									{	/* Unsafe/base64.scm 381 */

										BgL_arg1930z00_4493 =
											make_string(((long) 84), ((unsigned char) ' '));
									}
									return
										BGl_z62zc3z04anonymousza31265ze3ze5zz__base64z00
										(BGl_base64zd2decodezd2grammarz00zz__base64z00,
										BgL_ipz00_4491, BgL_opz00_4492, BgL_arg1930z00_4493,
										((long) 0), ((long) 84), BGl_proc3024z00zz__base64z00,
										((bool_t) 1));
						}}} break;
					case ((long) 3):

						{	/* Unsafe/base64.scm 380 */
							obj_t BgL_eofzd2nozd2paddingz00_2370;

							BgL_eofzd2nozd2paddingz00_2370 =
								VECTOR_REF(BgL_opt1157z00_23, ((long) 2));
							{	/* Unsafe/base64.scm 380 */

								{	/* Unsafe/base64.scm 380 */
									obj_t BgL_ipz00_4500;
									obj_t BgL_opz00_4501;

									if (INPUT_PORTP(BgL_g1159z00_2364))
										{	/* Unsafe/base64.scm 380 */
											BgL_ipz00_4500 = BgL_g1159z00_2364;
										}
									else
										{
											obj_t BgL_auxz00_6637;

											BgL_auxz00_6637 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3015z00zz__base64z00, BINT(((long) 14330)),
												BGl_string3023z00zz__base64z00,
												BGl_string3020z00zz__base64z00, BgL_g1159z00_2364);
											FAILURE(BgL_auxz00_6637, BFALSE, BFALSE);
										}
									if (OUTPUT_PORTP(BgL_g1160z00_2365))
										{	/* Unsafe/base64.scm 380 */
											BgL_opz00_4501 = BgL_g1160z00_2365;
										}
									else
										{
											obj_t BgL_auxz00_6643;

											BgL_auxz00_6643 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3015z00zz__base64z00, BINT(((long) 14330)),
												BGl_string3023z00zz__base64z00,
												BGl_string3021z00zz__base64z00, BgL_g1160z00_2365);
											FAILURE(BgL_auxz00_6643, BFALSE, BFALSE);
										}
									{	/* Unsafe/base64.scm 381 */
										obj_t BgL_arg1930z00_4502;

										{	/* Unsafe/base64.scm 381 */

											BgL_arg1930z00_4502 =
												make_string(((long) 84), ((unsigned char) ' '));
										}
										return
											BGl_z62zc3z04anonymousza31265ze3ze5zz__base64z00
											(BGl_base64zd2decodezd2grammarz00zz__base64z00,
											BgL_ipz00_4500, BgL_opz00_4501, BgL_arg1930z00_4502,
											((long) 0), ((long) 84), BGl_proc3025z00zz__base64z00,
											((bool_t) 1));
						}}}} break;
					default:
						return BUNSPEC;
					}
			}
		}

	}



/* &<@anonymous:1932> */
	obj_t BGl_z62zc3z04anonymousza31932ze3ze5zz__base64z00(obj_t BgL_envz00_4916,
		obj_t BgL_cz00_4917)
	{
		{	/* Unsafe/base64.scm 382 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &<@anonymous:1932>2977 */
	obj_t BGl_z62zc3z04anonymousza31932ze32977ze5zz__base64z00(obj_t
		BgL_envz00_4918, obj_t BgL_cz00_4919)
	{
		{	/* Unsafe/base64.scm 382 */
			return BBOOL(((bool_t) 0));
		}

	}



/* base64-decode-port */
	BGL_EXPORTED_DEF obj_t BGl_base64zd2decodezd2portz00zz__base64z00(obj_t
		BgL_ipz00_20, obj_t BgL_opz00_21, obj_t BgL_eofzd2nozd2paddingz00_22)
	{
		{	/* Unsafe/base64.scm 380 */
			{	/* Unsafe/base64.scm 381 */
				obj_t BgL_arg1930z00_4509;

				{	/* Unsafe/base64.scm 381 */

					BgL_arg1930z00_4509 = make_string(((long) 84), ((unsigned char) ' '));
				}
				return
					BGl_z62zc3z04anonymousza31265ze3ze5zz__base64z00
					(BGl_base64zd2decodezd2grammarz00zz__base64z00, BgL_ipz00_20,
					BgL_opz00_21, BgL_arg1930z00_4509, ((long) 0), ((long) 84),
					BGl_proc3026z00zz__base64z00, ((bool_t) 1));
		}}

	}



/* &<@anonymous:1932>2978 */
	obj_t BGl_z62zc3z04anonymousza31932ze32978ze5zz__base64z00(obj_t
		BgL_envz00_4921, obj_t BgL_cz00_4922)
	{
		{	/* Unsafe/base64.scm 382 */
			return BBOOL(((bool_t) 0));
		}

	}



/* pem-decode-port */
	BGL_EXPORTED_DEF obj_t BGl_pemzd2decodezd2portz00zz__base64z00(obj_t
		BgL_ipz00_25, obj_t BgL_opz00_26)
	{
		{	/* Unsafe/base64.scm 413 */
			{	/* Unsafe/base64.scm 431 */
				obj_t BgL_startz00_2379;

				BgL_startz00_2379 =
					BGl_z62zc3z04anonymousza31521ze3ze5zz__base64z00
					(BGl_pemzd2markupzd2grammarz00zz__base64z00, BgL_ipz00_25,
					((long) 0));
				if (bigloo_strcmp_at(BgL_startz00_2379, BGl_string3027z00zz__base64z00,
						((long) 0)))
					{	/* Unsafe/base64.scm 433 */
						obj_t BgL_arg1934z00_2381;

						{	/* Ieee/string.scm 168 */

							BgL_arg1934z00_2381 =
								make_string(((long) 84), ((unsigned char) ' '));
						}
						{	/* Unsafe/base64.scm 435 */
							obj_t BgL_zc3z04anonymousza31936ze3z87_4923;

							{
								int BgL_tmpz00_6682;

								BgL_tmpz00_6682 = (int) (((long) 2));
								BgL_zc3z04anonymousza31936ze3z87_4923 =
									MAKE_L_PROCEDURE
									(BGl_z62zc3z04anonymousza31936ze3ze5zz__base64z00,
									BgL_tmpz00_6682);
							}
							PROCEDURE_L_SET(BgL_zc3z04anonymousza31936ze3z87_4923,
								(int) (((long) 0)), BgL_ipz00_25);
							PROCEDURE_L_SET(BgL_zc3z04anonymousza31936ze3z87_4923,
								(int) (((long) 1)), BgL_startz00_2379);
							return
								BGl_z62zc3z04anonymousza31265ze3ze5zz__base64z00
								(BGl_base64zd2decodezd2grammarz00zz__base64z00, BgL_ipz00_25,
								BgL_opz00_26, BgL_arg1934z00_2381, ((long) 0), ((long) 84),
								BgL_zc3z04anonymousza31936ze3z87_4923, ((bool_t) 0));
					}}
				else
					{	/* Unsafe/base64.scm 438 */
						BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1939z00_2390;

						{	/* Unsafe/base64.scm 438 */
							BgL_z62iozd2parsezd2errorz62_bglt BgL_new1086z00_2391;

							{	/* Unsafe/base64.scm 438 */
								BgL_z62iozd2parsezd2errorz62_bglt BgL_new1085z00_2394;

								BgL_new1085z00_2394 =
									((BgL_z62iozd2parsezd2errorz62_bglt)
									BOBJECT(GC_MALLOC(sizeof(struct
												BgL_z62iozd2parsezd2errorz62_bgl))));
								{	/* Unsafe/base64.scm 438 */
									long BgL_arg1942z00_2395;

									{	/* Unsafe/base64.scm 438 */
										long BgL_res2904z00_4564;

										BgL_res2904z00_4564 =
											BGL_CLASS_INDEX
											(BGl_z62iozd2parsezd2errorz62zz__objectz00);
										BgL_arg1942z00_2395 = BgL_res2904z00_4564;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1085z00_2394),
										BgL_arg1942z00_2395);
								}
								BgL_new1086z00_2391 = BgL_new1085z00_2394;
							}
							((((BgL_z62exceptionz62_bglt) COBJECT(
											((BgL_z62exceptionz62_bglt) BgL_new1086z00_2391)))->
									BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
							((((BgL_z62exceptionz62_bglt) COBJECT(((BgL_z62exceptionz62_bglt)
												BgL_new1086z00_2391)))->BgL_locationz00) =
								((obj_t) BFALSE), BUNSPEC);
							{
								obj_t BgL_auxz00_6707;

								{	/* Unsafe/base64.scm 438 */
									obj_t BgL_arg1940z00_2392;

									{	/* Unsafe/base64.scm 438 */
										obj_t BgL_arg1941z00_2393;

										{	/* Unsafe/base64.scm 438 */
											obj_t BgL_res2905z00_4568;

											{	/* Unsafe/base64.scm 438 */
												obj_t BgL_classz00_4567;

												BgL_classz00_4567 =
													BGl_z62iozd2parsezd2errorz62zz__objectz00;
												BgL_res2905z00_4568 =
													BGL_CLASS_ALL_FIELDS(BgL_classz00_4567);
											}
											BgL_arg1941z00_2393 = BgL_res2905z00_4568;
										}
										BgL_arg1940z00_2392 =
											VECTOR_REF(BgL_arg1941z00_2393, ((long) 2));
									}
									BgL_auxz00_6707 =
										BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
										(BgL_arg1940z00_2392);
								}
								((((BgL_z62exceptionz62_bglt) COBJECT(
												((BgL_z62exceptionz62_bglt) BgL_new1086z00_2391)))->
										BgL_stackz00) = ((obj_t) BgL_auxz00_6707), BUNSPEC);
							}
							((((BgL_z62errorz62_bglt) COBJECT(
											((BgL_z62errorz62_bglt) BgL_new1086z00_2391)))->
									BgL_procz00) =
								((obj_t) BGl_string3009z00zz__base64z00), BUNSPEC);
							((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
												BgL_new1086z00_2391)))->BgL_msgz00) =
								((obj_t) BGl_string3028z00zz__base64z00), BUNSPEC);
							((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
												BgL_new1086z00_2391)))->BgL_objz00) =
								((obj_t) BgL_startz00_2379), BUNSPEC);
							BgL_arg1939z00_2390 = BgL_new1086z00_2391;
						}
						return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1939z00_2390));
					}
			}
		}

	}



/* &pem-decode-port */
	obj_t BGl_z62pemzd2decodezd2portz62zz__base64z00(obj_t BgL_envz00_4924,
		obj_t BgL_ipz00_4925, obj_t BgL_opz00_4926)
	{
		{	/* Unsafe/base64.scm 413 */
			{	/* Unsafe/base64.scm 416 */
				obj_t BgL_auxz00_6728;
				obj_t BgL_auxz00_6721;

				if (OUTPUT_PORTP(BgL_opz00_4926))
					{	/* Unsafe/base64.scm 416 */
						BgL_auxz00_6728 = BgL_opz00_4926;
					}
				else
					{
						obj_t BgL_auxz00_6731;

						BgL_auxz00_6731 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3015z00zz__base64z00,
							BINT(((long) 15725)), BGl_string3029z00zz__base64z00,
							BGl_string3021z00zz__base64z00, BgL_opz00_4926);
						FAILURE(BgL_auxz00_6731, BFALSE, BFALSE);
					}
				if (INPUT_PORTP(BgL_ipz00_4925))
					{	/* Unsafe/base64.scm 416 */
						BgL_auxz00_6721 = BgL_ipz00_4925;
					}
				else
					{
						obj_t BgL_auxz00_6724;

						BgL_auxz00_6724 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3015z00zz__base64z00,
							BINT(((long) 15725)), BGl_string3029z00zz__base64z00,
							BGl_string3020z00zz__base64z00, BgL_ipz00_4925);
						FAILURE(BgL_auxz00_6724, BFALSE, BFALSE);
					}
				return
					BGl_pemzd2decodezd2portz00zz__base64z00(BgL_auxz00_6721,
					BgL_auxz00_6728);
			}
		}

	}



/* &<@anonymous:1936> */
	obj_t BGl_z62zc3z04anonymousza31936ze3ze5zz__base64z00(obj_t BgL_envz00_4927,
		obj_t BgL_cz00_4930)
	{
		{	/* Unsafe/base64.scm 434 */
			{	/* Unsafe/base64.scm 435 */
				obj_t BgL_ipz00_4928;
				obj_t BgL_startz00_4929;

				BgL_ipz00_4928 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_4927, (int) (((long) 0))));
				BgL_startz00_4929 =
					PROCEDURE_L_REF(BgL_envz00_4927, (int) (((long) 1)));
				{
					obj_t BgL_startz00_5253;
					obj_t BgL_cz00_5254;

					{	/* Unsafe/base64.scm 435 */
						obj_t BgL_arg1937z00_5283;

						{	/* Unsafe/base64.scm 435 */
							long BgL_arg1938z00_5284;

							BgL_arg1938z00_5284 = STRING_LENGTH(((obj_t) BgL_startz00_4929));
							{	/* Unsafe/base64.scm 435 */
								obj_t BgL_res2903z00_5285;

								BgL_res2903z00_5285 =
									c_substring(
									((obj_t) BgL_startz00_4929), ((long) 7), BgL_arg1938z00_5284);
								BgL_arg1937z00_5283 = BgL_res2903z00_5285;
						}}
						BgL_startz00_5253 = BgL_arg1937z00_5283;
						BgL_cz00_5254 = BgL_cz00_4930;
						if ((CCHAR(BgL_cz00_5254) == ((unsigned char) '-')))
							{	/* Unsafe/base64.scm 421 */
								obj_t BgL_endz00_5255;

								BgL_endz00_5255 =
									BGl_z62zc3z04anonymousza31521ze3ze5zz__base64z00
									(BGl_pemzd2markupzd2grammarz00zz__base64z00, BgL_ipz00_4928,
									((long) 1));
								if (bigloo_strcmp_at(BgL_endz00_5255,
										BGl_string3030z00zz__base64z00, ((long) 0)))
									{	/* Unsafe/base64.scm 423 */
										bool_t BgL_test3221z00_6755;

										{	/* Unsafe/base64.scm 423 */
											obj_t BgL_arg1954z00_5256;

											{	/* Unsafe/base64.scm 423 */
												long BgL_arg1955z00_5257;

												BgL_arg1955z00_5257 =
													STRING_LENGTH(((obj_t) BgL_endz00_5255));
												{	/* Unsafe/base64.scm 423 */
													obj_t BgL_res2891z00_5258;

													BgL_res2891z00_5258 =
														c_substring(
														((obj_t) BgL_endz00_5255), ((long) 5),
														BgL_arg1955z00_5257);
													BgL_arg1954z00_5256 = BgL_res2891z00_5258;
											}}
											{	/* Unsafe/base64.scm 423 */
												bool_t BgL_res2896z00_5259;

												{	/* Unsafe/base64.scm 423 */
													long BgL_l1z00_5260;

													BgL_l1z00_5260 = STRING_LENGTH(BgL_startz00_5253);
													if (
														(BgL_l1z00_5260 ==
															STRING_LENGTH(BgL_arg1954z00_5256)))
														{	/* Unsafe/base64.scm 423 */
															int BgL_arg2035z00_5261;

															{	/* Unsafe/base64.scm 423 */
																char *BgL_auxz00_6766;
																char *BgL_tmpz00_6764;

																BgL_auxz00_6766 =
																	BSTRING_TO_STRING(BgL_arg1954z00_5256);
																BgL_tmpz00_6764 =
																	BSTRING_TO_STRING(BgL_startz00_5253);
																BgL_arg2035z00_5261 =
																	memcmp(BgL_tmpz00_6764, BgL_auxz00_6766,
																	BgL_l1z00_5260);
															}
															BgL_res2896z00_5259 =
																((long) (BgL_arg2035z00_5261) == ((long) 0));
														}
													else
														{	/* Unsafe/base64.scm 423 */
															BgL_res2896z00_5259 = ((bool_t) 0);
														}
												}
												BgL_test3221z00_6755 = BgL_res2896z00_5259;
											}
										}
										if (BgL_test3221z00_6755)
											{	/* Unsafe/base64.scm 423 */
												return BTRUE;
											}
										else
											{	/* Unsafe/base64.scm 426 */
												BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1949z00_5262;

												{	/* Unsafe/base64.scm 426 */
													BgL_z62iozd2parsezd2errorz62_bglt BgL_new1084z00_5263;

													{	/* Unsafe/base64.scm 426 */
														BgL_z62iozd2parsezd2errorz62_bglt
															BgL_new1083z00_5264;
														BgL_new1083z00_5264 =
															((BgL_z62iozd2parsezd2errorz62_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_z62iozd2parsezd2errorz62_bgl))));
														{	/* Unsafe/base64.scm 426 */
															long BgL_arg1953z00_5265;

															{	/* Unsafe/base64.scm 426 */
																long BgL_res2897z00_5266;

																BgL_res2897z00_5266 =
																	BGL_CLASS_INDEX
																	(BGl_z62iozd2parsezd2errorz62zz__objectz00);
																BgL_arg1953z00_5265 = BgL_res2897z00_5266;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1083z00_5264),
																BgL_arg1953z00_5265);
														}
														BgL_new1084z00_5263 = BgL_new1083z00_5264;
													}
													((((BgL_z62exceptionz62_bglt) COBJECT(
																	((BgL_z62exceptionz62_bglt)
																		BgL_new1084z00_5263)))->BgL_fnamez00) =
														((obj_t) BFALSE), BUNSPEC);
													((((BgL_z62exceptionz62_bglt)
																COBJECT(((BgL_z62exceptionz62_bglt)
																		BgL_new1084z00_5263)))->BgL_locationz00) =
														((obj_t) BFALSE), BUNSPEC);
													{
														obj_t BgL_auxz00_6779;

														{	/* Unsafe/base64.scm 426 */
															obj_t BgL_arg1951z00_5267;

															{	/* Unsafe/base64.scm 426 */
																obj_t BgL_arg1952z00_5268;

																{	/* Unsafe/base64.scm 426 */
																	obj_t BgL_res2898z00_5269;

																	{	/* Unsafe/base64.scm 426 */
																		obj_t BgL_classz00_5270;

																		BgL_classz00_5270 =
																			BGl_z62iozd2parsezd2errorz62zz__objectz00;
																		BgL_res2898z00_5269 =
																			BGL_CLASS_ALL_FIELDS(BgL_classz00_5270);
																	}
																	BgL_arg1952z00_5268 = BgL_res2898z00_5269;
																}
																BgL_arg1951z00_5267 =
																	VECTOR_REF(BgL_arg1952z00_5268, ((long) 2));
															}
															BgL_auxz00_6779 =
																BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																(BgL_arg1951z00_5267);
														}
														((((BgL_z62exceptionz62_bglt) COBJECT(
																		((BgL_z62exceptionz62_bglt)
																			BgL_new1084z00_5263)))->BgL_stackz00) =
															((obj_t) BgL_auxz00_6779), BUNSPEC);
													}
													((((BgL_z62errorz62_bglt) COBJECT(
																	((BgL_z62errorz62_bglt)
																		BgL_new1084z00_5263)))->BgL_procz00) =
														((obj_t) BGl_string3009z00zz__base64z00), BUNSPEC);
													((((BgL_z62errorz62_bglt)
																COBJECT(((BgL_z62errorz62_bglt)
																		BgL_new1084z00_5263)))->BgL_msgz00) =
														((obj_t) BGl_string3031z00zz__base64z00), BUNSPEC);
													((((BgL_z62errorz62_bglt)
																COBJECT(((BgL_z62errorz62_bglt)
																		BgL_new1084z00_5263)))->BgL_objz00) =
														((obj_t) BgL_endz00_5255), BUNSPEC);
													BgL_arg1949z00_5262 = BgL_new1084z00_5263;
												}
												return
													BGl_raisez00zz__errorz00(
													((obj_t) BgL_arg1949z00_5262));
											}
									}
								else
									{	/* Unsafe/base64.scm 422 */
										return BFALSE;
									}
							}
						else
							{	/* Unsafe/base64.scm 417 */
								BgL_z62iozd2parsezd2errorz62_bglt BgL_arg1956z00_5271;

								{	/* Unsafe/base64.scm 417 */
									BgL_z62iozd2parsezd2errorz62_bglt BgL_new1082z00_5272;

									{	/* Unsafe/base64.scm 417 */
										BgL_z62iozd2parsezd2errorz62_bglt BgL_new1081z00_5273;

										BgL_new1081z00_5273 =
											((BgL_z62iozd2parsezd2errorz62_bglt)
											BOBJECT(GC_MALLOC(sizeof(struct
														BgL_z62iozd2parsezd2errorz62_bgl))));
										{	/* Unsafe/base64.scm 417 */
											long BgL_arg1962z00_5274;

											{	/* Unsafe/base64.scm 417 */
												long BgL_res2899z00_5275;

												BgL_res2899z00_5275 =
													BGL_CLASS_INDEX
													(BGl_z62iozd2parsezd2errorz62zz__objectz00);
												BgL_arg1962z00_5274 = BgL_res2899z00_5275;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1081z00_5273),
												BgL_arg1962z00_5274);
										}
										BgL_new1082z00_5272 = BgL_new1081z00_5273;
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1082z00_5272)))->
											BgL_fnamez00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1082z00_5272)))->BgL_locationz00) =
										((obj_t) BFALSE), BUNSPEC);
									{
										obj_t BgL_auxz00_6801;

										{	/* Unsafe/base64.scm 417 */
											obj_t BgL_arg1957z00_5276;

											{	/* Unsafe/base64.scm 417 */
												obj_t BgL_arg1958z00_5277;

												{	/* Unsafe/base64.scm 417 */
													obj_t BgL_res2900z00_5278;

													{	/* Unsafe/base64.scm 417 */
														obj_t BgL_classz00_5279;

														BgL_classz00_5279 =
															BGl_z62iozd2parsezd2errorz62zz__objectz00;
														BgL_res2900z00_5278 =
															BGL_CLASS_ALL_FIELDS(BgL_classz00_5279);
													}
													BgL_arg1958z00_5277 = BgL_res2900z00_5278;
												}
												BgL_arg1957z00_5276 =
													VECTOR_REF(BgL_arg1958z00_5277, ((long) 2));
											}
											BgL_auxz00_6801 =
												BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
												(BgL_arg1957z00_5276);
										}
										((((BgL_z62exceptionz62_bglt) COBJECT(
														((BgL_z62exceptionz62_bglt) BgL_new1082z00_5272)))->
												BgL_stackz00) = ((obj_t) BgL_auxz00_6801), BUNSPEC);
									}
									((((BgL_z62errorz62_bglt) COBJECT(
													((BgL_z62errorz62_bglt) BgL_new1082z00_5272)))->
											BgL_procz00) =
										((obj_t) BGl_string3009z00zz__base64z00), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(((BgL_z62errorz62_bglt)
														BgL_new1082z00_5272)))->BgL_msgz00) =
										((obj_t) BGl_string3032z00zz__base64z00), BUNSPEC);
									{
										obj_t BgL_auxz00_6811;

										{	/* Unsafe/base64.scm 420 */
											obj_t BgL_arg1959z00_5280;

											BgL_arg1959z00_5280 =
												BGl_readzd2linezd2zz__r4_input_6_10_2z00
												(BgL_ipz00_4928);
											{	/* Unsafe/base64.scm 420 */
												obj_t BgL_list1960z00_5281;

												{	/* Unsafe/base64.scm 420 */
													obj_t BgL_arg1961z00_5282;

													BgL_arg1961z00_5282 =
														MAKE_YOUNG_PAIR(BgL_arg1959z00_5280, BNIL);
													BgL_list1960z00_5281 =
														MAKE_YOUNG_PAIR(BgL_cz00_5254, BgL_arg1961z00_5282);
												}
												BgL_auxz00_6811 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string3011z00zz__base64z00,
													BgL_list1960z00_5281);
										}}
										((((BgL_z62errorz62_bglt) COBJECT(
														((BgL_z62errorz62_bglt) BgL_new1082z00_5272)))->
												BgL_objz00) = ((obj_t) BgL_auxz00_6811), BUNSPEC);
									}
									BgL_arg1956z00_5271 = BgL_new1082z00_5272;
								}
								return BGl_raisez00zz__errorz00(((obj_t) BgL_arg1956z00_5271));
							}
					}
				}
			}
		}

	}



/* pem-read-file */
	BGL_EXPORTED_DEF obj_t BGl_pemzd2readzd2filez00zz__base64z00(obj_t
		BgL_filez00_27)
	{
		{	/* Unsafe/base64.scm 446 */
			{	/* Unsafe/base64.scm 447 */
				obj_t BgL_pz00_4570;

				{	/* Unsafe/base64.scm 447 */

					{	/* Unsafe/base64.scm 447 */

						BgL_pz00_4570 =
							BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
					}
				}
				{	/* Unsafe/base64.scm 450 */
					obj_t BgL_zc3z04anonymousza31964ze3z87_4931;

					BgL_zc3z04anonymousza31964ze3z87_4931 =
						MAKE_FX_PROCEDURE(BGl_z62zc3z04anonymousza31964ze3ze5zz__base64z00,
						(int) (((long) 0)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31964ze3z87_4931,
						(int) (((long) 0)), BgL_pz00_4570);
					BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
						(BgL_filez00_27, BgL_zc3z04anonymousza31964ze3z87_4931);
				}
				return bgl_close_output_port(BgL_pz00_4570);
			}
		}

	}



/* &pem-read-file */
	obj_t BGl_z62pemzd2readzd2filez62zz__base64z00(obj_t BgL_envz00_4932,
		obj_t BgL_filez00_4933)
	{
		{	/* Unsafe/base64.scm 446 */
			{	/* Unsafe/base64.scm 447 */
				obj_t BgL_auxz00_6828;

				if (STRINGP(BgL_filez00_4933))
					{	/* Unsafe/base64.scm 447 */
						BgL_auxz00_6828 = BgL_filez00_4933;
					}
				else
					{
						obj_t BgL_auxz00_6831;

						BgL_auxz00_6831 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3015z00zz__base64z00,
							BINT(((long) 16871)), BGl_string3033z00zz__base64z00,
							BGl_string3017z00zz__base64z00, BgL_filez00_4933);
						FAILURE(BgL_auxz00_6831, BFALSE, BFALSE);
					}
				return BGl_pemzd2readzd2filez00zz__base64z00(BgL_auxz00_6828);
			}
		}

	}



/* &<@anonymous:1964> */
	obj_t BGl_z62zc3z04anonymousza31964ze3ze5zz__base64z00(obj_t BgL_envz00_4934)
	{
		{	/* Unsafe/base64.scm 449 */
			{	/* Unsafe/base64.scm 450 */
				obj_t BgL_pz00_4935;

				BgL_pz00_4935 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4934, (int) (((long) 0))));
				{	/* Unsafe/base64.scm 450 */
					obj_t BgL_arg1965z00_5286;

					{	/* Unsafe/base64.scm 450 */
						obj_t BgL_res2906z00_5287;

						{	/* Unsafe/base64.scm 450 */
							obj_t BgL_tmpz00_6839;

							BgL_tmpz00_6839 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2906z00_5287 = BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_6839);
						}
						BgL_arg1965z00_5286 = BgL_res2906z00_5287;
					}
					return
						BGl_pemzd2decodezd2portz00zz__base64z00(BgL_arg1965z00_5286,
						BgL_pz00_4935);
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__base64z00()
	{
		{	/* Unsafe/base64.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__base64z00()
	{
		{	/* Unsafe/base64.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__base64z00()
	{
		{	/* Unsafe/base64.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__base64z00()
	{
		{	/* Unsafe/base64.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string3034z00zz__base64z00));
		}

	}

#ifdef __cplusplus
}
#endif
