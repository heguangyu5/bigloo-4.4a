/*===========================================================================*/
/*   (Unsafe/aes.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/aes.scm -indent -o objs/obj_u/Unsafe/aes.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static int BGl_z62u8stringzd2refzb0zz__aesz00(obj_t, obj_t, long);
	static obj_t BGl__aeszd2ctrzd2encryptzd2mmapzd2zz__aesz00(obj_t, obj_t);
	extern obj_t BGl_makezd2u8vectorzd2zz__srfi4z00(long, uint8_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__aesz00 = BUNSPEC;
	static obj_t BGl__aeszd2ctrzd2encryptz00zz__aesz00(obj_t, obj_t);
	static bool_t BGl_shiftrowsz12z12zz__aesz00(obj_t, long);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2decryptzd2stringzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__aesz00();
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2decryptzd2portzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__aesz00();
	extern obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zz__aesz00();
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2decryptzd2mmapzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_2zf2zf2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t string_to_obj(obj_t, obj_t, obj_t);
	static obj_t BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_subwordz12z12zz__aesz00(obj_t);
	extern obj_t BGl_sha1sumzd2stringzd2zz__sha1z00(obj_t);
	extern obj_t BGl_memvz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__aeszd2ctrzd2decryptzd2filezd2zz__aesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2encryptz00zz__aesz00(obj_t, obj_t,
		obj_t);
	extern obj_t make_vector(long, obj_t);
	static obj_t BGl_mixcolumnsz12z12zz__aesz00(obj_t, long);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2encryptzd2portzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__aesz00();
	static obj_t BGl_z62zc3z04anonymousza31324ze3ze5zz__aesz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2encryptzd2mmapzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	extern obj_t make_string(long, unsigned char);
	static obj_t BGl_z62zc3z04anonymousza31334ze3ze5zz__aesz00(obj_t);
	static obj_t BGl__aeszd2ctrzd2encryptzd2filezd2zz__aesz00(obj_t, obj_t);
	static obj_t BGl_Rconnz00zz__aesz00 = BUNSPEC;
	extern obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31324ze33519ze5zz__aesz00(obj_t);
	static obj_t BGl__aeszd2ctrzd2encryptzd2stringzd2zz__aesz00(obj_t, obj_t);
	extern long bgl_current_seconds();
	static obj_t BGl__aeszd2ctrzd2decryptz00zz__aesz00(obj_t, obj_t);
	extern obj_t BGl_u8vectorz00zz__srfi4z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31324ze33520ze5zz__aesz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static bool_t BGl_subbytesz12z12zz__aesz00(obj_t, int);
	static obj_t BGl_aeszd2keyzd2expansionz00zz__aesz00(obj_t);
	static bool_t BGl_addroundkeyz12z12zz__aesz00(obj_t, obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__aesz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__datez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__sha1z00(long, char *);
	extern obj_t BGl_openzd2mmapzd2zz__mmapz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2decryptzd2filezd2zz__aesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_Sboxz00zz__aesz00 = BUNSPEC;
	extern obj_t BGl_ceilingz00zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_aeszd2cipherzd2zz__aesz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31334ze33521ze5zz__aesz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31334ze33522ze5zz__aesz00(obj_t);
	static obj_t BGl__aeszd2ctrzd2decryptzd2stringzd2zz__aesz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__aesz00();
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2decryptz00zz__aesz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_rotwordz12z12zz__aesz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__aesz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__aesz00();
	static obj_t BGl__aeszd2ctrzd2decryptzd2portzd2zz__aesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2encryptzd2filezd2zz__aesz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_readzd2stringzd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(obj_t, obj_t, obj_t);
	static obj_t BGl__aeszd2ctrzd2decryptzd2mmapzd2zz__aesz00(obj_t, obj_t);
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_aeszd2ctrzd2encryptzd2stringzd2zz__aesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_aeszd2passwordzd2ze3keyze3zz__aesz00(obj_t, int, obj_t);
	static obj_t BGl__aeszd2ctrzd2encryptzd2portzd2zz__aesz00(obj_t, obj_t);
	static obj_t __cnst[5];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2decryptzd2mmapzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2dec3643z00, opt_generic_entry,
		BGl__aeszd2ctrzd2decryptzd2mmapzd2zz__aesz00, BFALSE, -1);
	extern obj_t BGl_mmapzd2lengthzd2envz00zz__mmapz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2decryptzd2filezd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2dec3644z00, opt_generic_entry,
		BGl__aeszd2ctrzd2decryptzd2filezd2zz__aesz00, BFALSE, -1);
	static obj_t BGl_u8stringzd2refzd2envz00zz__aesz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2decryptzd2portzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2dec3645z00, opt_generic_entry,
		BGl__aeszd2ctrzd2decryptzd2portzd2zz__aesz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_aeszd2ctrzd2encryptzd2envzd2zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2enc3646z00, opt_generic_entry,
		BGl__aeszd2ctrzd2encryptz00zz__aesz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3620z00zz__aesz00,
		BgL_bgl_string3620za700za7za7_3647za7, "/tmp/4.4a/runtime/Unsafe/aes.scm",
		32);
	      DEFINE_STRING(BGl_string3621z00zz__aesz00,
		BgL_bgl_string3621za700za7za7_3648za7, "_aes-ctr-encrypt", 16);
	      DEFINE_STRING(BGl_string3622z00zz__aesz00,
		BgL_bgl_string3622za700za7za7_3649za7, "bstring", 7);
	      DEFINE_STRING(BGl_string3623z00zz__aesz00,
		BgL_bgl_string3623za700za7za7_3650za7, "mmap", 4);
	      DEFINE_STRING(BGl_string3624z00zz__aesz00,
		BgL_bgl_string3624za700za7za7_3651za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string3625z00zz__aesz00,
		BgL_bgl_string3625za700za7za7_3652za7, "_aes-ctr-encrypt-string", 23);
	      DEFINE_STRING(BGl_string3626z00zz__aesz00,
		BgL_bgl_string3626za700za7za7_3653za7, "_aes-ctr-encrypt-mmap", 21);
	      DEFINE_STRING(BGl_string3627z00zz__aesz00,
		BgL_bgl_string3627za700za7za7_3654za7, "_aes-ctr-encrypt-file", 21);
	      DEFINE_STRING(BGl_string3628z00zz__aesz00,
		BgL_bgl_string3628za700za7za7_3655za7, "_aes-ctr-encrypt-port", 21);
	      DEFINE_STRING(BGl_string3629z00zz__aesz00,
		BgL_bgl_string3629za700za7za7_3656za7, "input-port", 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2decryptzd2stringzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2dec3657z00, opt_generic_entry,
		BGl__aeszd2ctrzd2decryptzd2stringzd2zz__aesz00, BFALSE, -1);
	      DEFINE_STRING(BGl_string3630z00zz__aesz00,
		BgL_bgl_string3630za700za7za7_3658za7, "_aes-ctr-decrypt", 16);
	      DEFINE_STRING(BGl_string3631z00zz__aesz00,
		BgL_bgl_string3631za700za7za7_3659za7, "_aes-ctr-decrypt-string", 23);
	      DEFINE_STRING(BGl_string3632z00zz__aesz00,
		BgL_bgl_string3632za700za7za7_3660za7, "_aes-ctr-decrypt-mmap", 21);
	      DEFINE_STRING(BGl_string3633z00zz__aesz00,
		BgL_bgl_string3633za700za7za7_3661za7, "_aes-ctr-decrypt-file", 21);
	      DEFINE_STRING(BGl_string3634z00zz__aesz00,
		BgL_bgl_string3634za700za7za7_3662za7, "_aes-ctr-decrypt-port", 21);
	      DEFINE_STRING(BGl_string3635z00zz__aesz00,
		BgL_bgl_string3635za700za7za7_3663za7, "Illegal bit keys", 16);
	      DEFINE_STRING(BGl_string3636z00zz__aesz00,
		BgL_bgl_string3636za700za7za7_3664za7, "string or mmap", 14);
	      DEFINE_STRING(BGl_string3637z00zz__aesz00,
		BgL_bgl_string3637za700za7za7_3665za7, "&u8string-ref", 13);
	      DEFINE_STRING(BGl_string3638z00zz__aesz00,
		BgL_bgl_string3638za700za7za7_3666za7, "__aes", 5);
	      DEFINE_STRING(BGl_string3639z00zz__aesz00,
		BgL_bgl_string3639za700za7za7_3667za7,
		"c\001\002[\001\005[\001\vh\001\004\001\001\"\001\002u8\000\000\000\000h\001\004\001\001\"\001\002u8\001\000\000\000h\001\004\001\001\"\001\002u8\002\000\000\000h\001\004\001\001\"\001\002u8\004\000\000\000h\001\004\001\001\"\001\002u8\b\000\000\000h\001\004\001\001\"\001\002u8\020\000\000\000h\001\004\001\001\"\001\002u8 \000\000\000h\001\004\001\001\"\001\002u8@\000\000\000h\001\004\001\001\"\001\002u8€\000\000\000h\001\004\001\001\"\001\002u8\033\000\000\000h\001\004\001\001\"\001\002u86\000\000\000h\002\001\000\001\001\"\001\002u8c|w{òkoÅ0\001g+þ×«vÊ‚É}úYGð­Ô¢¯œ¤rÀ·ý“&6?÷Ì4¥åñqØ1\025\004Ç#Ã\030–\005š\007\022€âë'²u\tƒ,\032\033nZ R;Ö³)ã/„SÑ\000í ü±[jË¾9JLXÏÐïªûCM3…Eù\002P<Ÿ¨Q£@’8õ¼¶Ú!\020ÿóÒÍ\f\023ì_—D\027Ä§~=d]\031s`OÜ\"*ˆFî¸\024Þ^\vÛà2:\nI\006$\\ÂÓ¬b‘•äyçÈ7mÕN©lVôêez®\bºx%.\034¦´ÆèÝt\037K½‹Šp>µfH\003ö\016a5W¹†Á\035žáø˜\021iÙŽ”›\036‡éÎU(ßŒ¡‰\r¿æBhA™-\017°T»\026'\"\001\017aes-ctr-encrypt'\"\001\017aes-ctr-decrypt^\001\004\001€(\001\004'=\000\"\001\002at=\001\001\"\001\016Unsafe/aes.scm\002(·.\001À(\001"
		"\004'#\000#\001\001\002(¼.\002\001\000(\001\004'#\000#\001\001\002(À..",
		540);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2encryptzd2mmapzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2enc3668z00, opt_generic_entry,
		BGl__aeszd2ctrzd2encryptzd2mmapzd2zz__aesz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2encryptzd2stringzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2enc3669z00, opt_generic_entry,
		BGl__aeszd2ctrzd2encryptzd2stringzd2zz__aesz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2encryptzd2filezd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2enc3670z00, opt_generic_entry,
		BGl__aeszd2ctrzd2encryptzd2filezd2zz__aesz00, BFALSE, -1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_aeszd2ctrzd2decryptzd2envzd2zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2dec3671z00, opt_generic_entry,
		BGl__aeszd2ctrzd2decryptz00zz__aesz00, BFALSE, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_aeszd2ctrzd2encryptzd2portzd2envz00zz__aesz00,
		BgL_bgl__aesza7d2ctrza7d2enc3672z00, opt_generic_entry,
		BGl__aeszd2ctrzd2encryptzd2portzd2zz__aesz00, BFALSE, -1);
	extern obj_t BGl_mmapzd2refzd2envz00zz__mmapz00;
	extern obj_t BGl_stringzd2lengthzd2envz00zz__r4_strings_6_7z00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__aesz00));
		     ADD_ROOT((void *) (&__cnst[5]));
		     ADD_ROOT((void *) (&BGl_Rconnz00zz__aesz00));
		     ADD_ROOT((void *) (&BGl_Sboxz00zz__aesz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__aesz00(long
		BgL_checksumz00_6469, char *BgL_fromz00_6470)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__aesz00))
				{
					BGl_requirezd2initializa7ationz75zz__aesz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__aesz00();
					BGl_cnstzd2initzd2zz__aesz00();
					BGl_importedzd2moduleszd2initz00zz__aesz00();
					return BGl_toplevelzd2initzd2zz__aesz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__aesz00()
	{
		{	/* Unsafe/aes.scm 20 */
			{	/* Unsafe/aes.scm 20 */
				obj_t BgL_cnstzd2tmpzd2_6458;

				{	/* Unsafe/aes.scm 20 */
					obj_t BgL_g3642z00_6464;

					BgL_g3642z00_6464 = BGl_string3639z00zz__aesz00;
					{	/* Unsafe/aes.scm 20 */
						obj_t BgL_extensionz00_6465;

						BgL_extensionz00_6465 = BBOOL(((bool_t) 0));
						{	/* Unsafe/aes.scm 20 */
							obj_t BgL_unserializa7ezd2argz75_6466;

							BgL_unserializa7ezd2argz75_6466 = BgL_extensionz00_6465;
							{	/* Unsafe/aes.scm 20 */

								BgL_cnstzd2tmpzd2_6458 =
									string_to_obj(BgL_g3642z00_6464, BgL_extensionz00_6465,
									BgL_unserializa7ezd2argz75_6466);
							}
						}
					}
				}
				{
					int BgL_iz00_6459;

					BgL_iz00_6459 = (int) (((long) 4));
				BgL_loopz00_6460:
					if (((long) (BgL_iz00_6459) == ((long) -1)))
						{	/* Unsafe/aes.scm 20 */
							return BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 20 */
							{	/* Unsafe/aes.scm 20 */
								obj_t BgL_tmpz00_6483;

								BgL_tmpz00_6483 =
									VECTOR_REF(BgL_cnstzd2tmpzd2_6458, (long) (BgL_iz00_6459));
								CNST_TABLE_SET(BgL_iz00_6459, BgL_tmpz00_6483);
							}
							{
								int BgL_iz00_6487;

								BgL_iz00_6487 = (int) (((long) (BgL_iz00_6459) - ((long) 1)));
								BgL_iz00_6459 = BgL_iz00_6487;
								goto BgL_loopz00_6460;
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__aesz00()
	{
		{	/* Unsafe/aes.scm 20 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__aesz00()
	{
		{	/* Unsafe/aes.scm 20 */
			BGl_Rconnz00zz__aesz00 = CNST_TABLE_REF(((long) 0));
			return (BGl_Sboxz00zz__aesz00 = CNST_TABLE_REF(((long) 1)), BUNSPEC);
		}

	}



/* _aes-ctr-encrypt */
	obj_t BGl__aeszd2ctrzd2encryptz00zz__aesz00(obj_t BgL_env1166z00_7,
		obj_t BgL_opt1165z00_6)
	{
		{	/* Unsafe/aes.scm 91 */
			{	/* Unsafe/aes.scm 91 */
				obj_t BgL_g1167z00_1345;
				obj_t BgL_g1168z00_1346;

				BgL_g1167z00_1345 = VECTOR_REF(BgL_opt1165z00_6, ((long) 0));
				BgL_g1168z00_1346 = VECTOR_REF(BgL_opt1165z00_6, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1165z00_6))
					{
					case ((long) 2):

						{	/* Unsafe/aes.scm 91 */

							{	/* Unsafe/aes.scm 91 */
								obj_t BgL_res2433z00_2862;

								{	/* Unsafe/aes.scm 91 */
									obj_t BgL_passwordz00_2843;

									if (STRINGP(BgL_g1168z00_1346))
										{	/* Unsafe/aes.scm 91 */
											BgL_passwordz00_2843 = BgL_g1168z00_1346;
										}
									else
										{
											obj_t BgL_auxz00_6499;

											BgL_auxz00_6499 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 3526)),
												BGl_string3621z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1168z00_1346);
											FAILURE(BgL_auxz00_6499, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1167z00_1345))
										{	/* Unsafe/aes.scm 93 */
											BgL_res2433z00_2862 =
												BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
												(BgL_g1167z00_1345, BgL_passwordz00_2843,
												BINT(((long) 128)));
										}
									else
										{	/* Unsafe/aes.scm 95 */
											bool_t BgL_test3677z00_6507;

											{	/* Unsafe/aes.scm 95 */
												bool_t BgL_res2429z00_2851;

												BgL_res2429z00_2851 = BGL_MMAPP(BgL_g1167z00_1345);
												BgL_test3677z00_6507 = BgL_res2429z00_2851;
											}
											if (BgL_test3677z00_6507)
												{	/* Unsafe/aes.scm 96 */
													obj_t BgL_res2430z00_2854;

													{	/* Unsafe/aes.scm 96 */
														obj_t BgL_plaintextz00_2852;

														if (BGL_MMAPP(BgL_g1167z00_1345))
															{	/* Unsafe/aes.scm 96 */
																BgL_plaintextz00_2852 = BgL_g1167z00_1345;
															}
														else
															{
																obj_t BgL_auxz00_6511;

																BgL_auxz00_6511 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3620z00zz__aesz00,
																	BINT(((long) 3742)),
																	BGl_string3621z00zz__aesz00,
																	BGl_string3623z00zz__aesz00,
																	BgL_g1167z00_1345);
																FAILURE(BgL_auxz00_6511, BFALSE, BFALSE);
															}
														BgL_res2430z00_2854 =
															BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
															(BgL_plaintextz00_2852, BgL_passwordz00_2843,
															BINT(((long) 128)));
													}
													BgL_res2433z00_2862 = BgL_res2430z00_2854;
												}
											else
												{	/* Unsafe/aes.scm 95 */
													if (INPUT_PORTP(BgL_g1167z00_1345))
														{	/* Unsafe/aes.scm 97 */
															BgL_res2433z00_2862 =
																BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
																(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
																(BgL_g1167z00_1345), BgL_passwordz00_2843,
																BINT(((long) 128)));
														}
													else
														{	/* Unsafe/aes.scm 100 */
															obj_t BgL_aux3534z00_6369;

															BgL_aux3534z00_6369 =
																BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long)
																		2)), BGl_string3624z00zz__aesz00,
																BgL_g1167z00_1345);
															if (STRINGP(BgL_aux3534z00_6369))
																{	/* Unsafe/aes.scm 100 */
																	BgL_res2433z00_2862 = BgL_aux3534z00_6369;
																}
															else
																{
																	obj_t BgL_auxz00_6526;

																	BgL_auxz00_6526 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3620z00zz__aesz00,
																		BINT(((long) 3875)),
																		BGl_string3621z00zz__aesz00,
																		BGl_string3622z00zz__aesz00,
																		BgL_aux3534z00_6369);
																	FAILURE(BgL_auxz00_6526, BFALSE, BFALSE);
								}}}}}
								return BgL_res2433z00_2862;
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/aes.scm 91 */
							obj_t BgL_nbitsz00_1351;

							BgL_nbitsz00_1351 = VECTOR_REF(BgL_opt1165z00_6, ((long) 2));
							{	/* Unsafe/aes.scm 91 */

								{	/* Unsafe/aes.scm 91 */
									obj_t BgL_res2440z00_2882;

									{	/* Unsafe/aes.scm 91 */
										obj_t BgL_passwordz00_2863;

										if (STRINGP(BgL_g1168z00_1346))
											{	/* Unsafe/aes.scm 91 */
												BgL_passwordz00_2863 = BgL_g1168z00_1346;
											}
										else
											{
												obj_t BgL_auxz00_6533;

												BgL_auxz00_6533 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 3526)),
													BGl_string3621z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1168z00_1346);
												FAILURE(BgL_auxz00_6533, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1167z00_1345))
											{	/* Unsafe/aes.scm 93 */
												BgL_res2440z00_2882 =
													BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
													(BgL_g1167z00_1345, BgL_passwordz00_2863,
													BgL_nbitsz00_1351);
											}
										else
											{	/* Unsafe/aes.scm 95 */
												bool_t BgL_test3683z00_6540;

												{	/* Unsafe/aes.scm 95 */
													bool_t BgL_res2436z00_2871;

													BgL_res2436z00_2871 = BGL_MMAPP(BgL_g1167z00_1345);
													BgL_test3683z00_6540 = BgL_res2436z00_2871;
												}
												if (BgL_test3683z00_6540)
													{	/* Unsafe/aes.scm 96 */
														obj_t BgL_res2437z00_2874;

														{	/* Unsafe/aes.scm 96 */
															obj_t BgL_plaintextz00_2872;

															if (BGL_MMAPP(BgL_g1167z00_1345))
																{	/* Unsafe/aes.scm 96 */
																	BgL_plaintextz00_2872 = BgL_g1167z00_1345;
																}
															else
																{
																	obj_t BgL_auxz00_6544;

																	BgL_auxz00_6544 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3620z00zz__aesz00,
																		BINT(((long) 3742)),
																		BGl_string3621z00zz__aesz00,
																		BGl_string3623z00zz__aesz00,
																		BgL_g1167z00_1345);
																	FAILURE(BgL_auxz00_6544, BFALSE, BFALSE);
																}
															BgL_res2437z00_2874 =
																BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
																(BgL_plaintextz00_2872, BgL_passwordz00_2863,
																BgL_nbitsz00_1351);
														}
														BgL_res2440z00_2882 = BgL_res2437z00_2874;
													}
												else
													{	/* Unsafe/aes.scm 95 */
														if (INPUT_PORTP(BgL_g1167z00_1345))
															{	/* Unsafe/aes.scm 97 */
																BgL_res2440z00_2882 =
																	BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
																	(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
																	(BgL_g1167z00_1345), BgL_passwordz00_2863,
																	BgL_nbitsz00_1351);
															}
														else
															{	/* Unsafe/aes.scm 100 */
																obj_t BgL_aux3540z00_6375;

																BgL_aux3540z00_6375 =
																	BGl_errorz00zz__errorz00(CNST_TABLE_REF((
																			(long) 2)), BGl_string3624z00zz__aesz00,
																	BgL_g1167z00_1345);
																if (STRINGP(BgL_aux3540z00_6375))
																	{	/* Unsafe/aes.scm 100 */
																		BgL_res2440z00_2882 = BgL_aux3540z00_6375;
																	}
																else
																	{
																		obj_t BgL_auxz00_6557;

																		BgL_auxz00_6557 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3620z00zz__aesz00,
																			BINT(((long) 3875)),
																			BGl_string3621z00zz__aesz00,
																			BGl_string3622z00zz__aesz00,
																			BgL_aux3540z00_6375);
																		FAILURE(BgL_auxz00_6557, BFALSE, BFALSE);
									}}}}}
									return BgL_res2440z00_2882;
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



/* aes-ctr-encrypt */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2encryptz00zz__aesz00(obj_t
		BgL_plaintextz00_3, obj_t BgL_passwordz00_4, obj_t BgL_nbitsz00_5)
	{
		{	/* Unsafe/aes.scm 91 */
			if (STRINGP(BgL_plaintextz00_3))
				{	/* Unsafe/aes.scm 93 */
					return
						BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(BgL_plaintextz00_3,
						BgL_passwordz00_4, BgL_nbitsz00_5);
				}
			else
				{	/* Unsafe/aes.scm 95 */
					bool_t BgL_test3688z00_6566;

					{	/* Unsafe/aes.scm 95 */
						bool_t BgL_res2443z00_2890;

						BgL_res2443z00_2890 = BGL_MMAPP(BgL_plaintextz00_3);
						BgL_test3688z00_6566 = BgL_res2443z00_2890;
					}
					if (BgL_test3688z00_6566)
						{	/* Unsafe/aes.scm 96 */
							obj_t BgL_res2444z00_2893;

							BgL_res2444z00_2893 =
								BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(
								((obj_t) BgL_plaintextz00_3), BgL_passwordz00_4,
								BgL_nbitsz00_5);
							return BgL_res2444z00_2893;
						}
					else
						{	/* Unsafe/aes.scm 95 */
							if (INPUT_PORTP(BgL_plaintextz00_3))
								{	/* Unsafe/aes.scm 97 */
									return
										BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
										(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
										(BgL_plaintextz00_3), BgL_passwordz00_4, BgL_nbitsz00_5);
								}
							else
								{	/* Unsafe/aes.scm 97 */
									return
										BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
										BGl_string3624z00zz__aesz00, BgL_plaintextz00_3);
		}}}}

	}



/* _aes-ctr-encrypt-string */
	obj_t BGl__aeszd2ctrzd2encryptzd2stringzd2zz__aesz00(obj_t BgL_env1172z00_12,
		obj_t BgL_opt1171z00_11)
	{
		{	/* Unsafe/aes.scm 105 */
			{	/* Unsafe/aes.scm 105 */
				obj_t BgL_g1173z00_1355;
				obj_t BgL_g1174z00_1356;

				BgL_g1173z00_1355 = VECTOR_REF(BgL_opt1171z00_11, ((long) 0));
				BgL_g1174z00_1356 = VECTOR_REF(BgL_opt1171z00_11, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1171z00_11))
					{
					case ((long) 2):

						{	/* Unsafe/aes.scm 105 */

							{	/* Unsafe/aes.scm 105 */
								obj_t BgL_res2447z00_2903;

								{	/* Unsafe/aes.scm 105 */
									obj_t BgL_plaintextz00_2901;
									obj_t BgL_passwordz00_2902;

									if (STRINGP(BgL_g1173z00_1355))
										{	/* Unsafe/aes.scm 105 */
											BgL_plaintextz00_2901 = BgL_g1173z00_1355;
										}
									else
										{
											obj_t BgL_auxz00_6580;

											BgL_auxz00_6580 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 4155)),
												BGl_string3625z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1173z00_1355);
											FAILURE(BgL_auxz00_6580, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1174z00_1356))
										{	/* Unsafe/aes.scm 105 */
											BgL_passwordz00_2902 = BgL_g1174z00_1356;
										}
									else
										{
											obj_t BgL_auxz00_6586;

											BgL_auxz00_6586 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 4155)),
												BGl_string3625z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1174z00_1356);
											FAILURE(BgL_auxz00_6586, BFALSE, BFALSE);
										}
									BgL_res2447z00_2903 =
										BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
										(BgL_plaintextz00_2901, BgL_passwordz00_2902,
										BINT(((long) 128)));
								}
								return BgL_res2447z00_2903;
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/aes.scm 105 */
							obj_t BgL_nbitsz00_1361;

							BgL_nbitsz00_1361 = VECTOR_REF(BgL_opt1171z00_11, ((long) 2));
							{	/* Unsafe/aes.scm 105 */

								{	/* Unsafe/aes.scm 105 */
									obj_t BgL_res2448z00_2906;

									{	/* Unsafe/aes.scm 105 */
										obj_t BgL_plaintextz00_2904;
										obj_t BgL_passwordz00_2905;

										if (STRINGP(BgL_g1173z00_1355))
											{	/* Unsafe/aes.scm 105 */
												BgL_plaintextz00_2904 = BgL_g1173z00_1355;
											}
										else
											{
												obj_t BgL_auxz00_6595;

												BgL_auxz00_6595 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 4155)),
													BGl_string3625z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1173z00_1355);
												FAILURE(BgL_auxz00_6595, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1174z00_1356))
											{	/* Unsafe/aes.scm 105 */
												BgL_passwordz00_2905 = BgL_g1174z00_1356;
											}
										else
											{
												obj_t BgL_auxz00_6601;

												BgL_auxz00_6601 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 4155)),
													BGl_string3625z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1174z00_1356);
												FAILURE(BgL_auxz00_6601, BFALSE, BFALSE);
											}
										BgL_res2448z00_2906 =
											BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
											(BgL_plaintextz00_2904, BgL_passwordz00_2905,
											BgL_nbitsz00_1361);
									}
									return BgL_res2448z00_2906;
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



/* aes-ctr-encrypt-string */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2encryptzd2stringzd2zz__aesz00(obj_t
		BgL_plaintextz00_8, obj_t BgL_passwordz00_9, obj_t BgL_nbitsz00_10)
	{
		{	/* Unsafe/aes.scm 105 */
			return
				BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(BgL_plaintextz00_8,
				BgL_passwordz00_9, BgL_nbitsz00_10);
		}

	}



/* _aes-ctr-encrypt-mmap */
	obj_t BGl__aeszd2ctrzd2encryptzd2mmapzd2zz__aesz00(obj_t BgL_env1178z00_17,
		obj_t BgL_opt1177z00_16)
	{
		{	/* Unsafe/aes.scm 111 */
			{	/* Unsafe/aes.scm 111 */
				obj_t BgL_g1179z00_1362;
				obj_t BgL_g1180z00_1363;

				BgL_g1179z00_1362 = VECTOR_REF(BgL_opt1177z00_16, ((long) 0));
				BgL_g1180z00_1363 = VECTOR_REF(BgL_opt1177z00_16, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1177z00_16))
					{
					case ((long) 2):

						{	/* Unsafe/aes.scm 111 */

							{	/* Unsafe/aes.scm 111 */
								obj_t BgL_res2449z00_2909;

								{	/* Unsafe/aes.scm 111 */
									obj_t BgL_plaintextz00_2907;
									obj_t BgL_passwordz00_2908;

									if (BGL_MMAPP(BgL_g1179z00_1362))
										{	/* Unsafe/aes.scm 111 */
											BgL_plaintextz00_2907 = BgL_g1179z00_1362;
										}
									else
										{
											obj_t BgL_auxz00_6613;

											BgL_auxz00_6613 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 4504)),
												BGl_string3626z00zz__aesz00,
												BGl_string3623z00zz__aesz00, BgL_g1179z00_1362);
											FAILURE(BgL_auxz00_6613, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1180z00_1363))
										{	/* Unsafe/aes.scm 111 */
											BgL_passwordz00_2908 = BgL_g1180z00_1363;
										}
									else
										{
											obj_t BgL_auxz00_6619;

											BgL_auxz00_6619 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 4504)),
												BGl_string3626z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1180z00_1363);
											FAILURE(BgL_auxz00_6619, BFALSE, BFALSE);
										}
									BgL_res2449z00_2909 =
										BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
										(BgL_plaintextz00_2907, BgL_passwordz00_2908,
										BINT(((long) 128)));
								}
								return BgL_res2449z00_2909;
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/aes.scm 111 */
							obj_t BgL_nbitsz00_1368;

							BgL_nbitsz00_1368 = VECTOR_REF(BgL_opt1177z00_16, ((long) 2));
							{	/* Unsafe/aes.scm 111 */

								{	/* Unsafe/aes.scm 111 */
									obj_t BgL_res2450z00_2912;

									{	/* Unsafe/aes.scm 111 */
										obj_t BgL_plaintextz00_2910;
										obj_t BgL_passwordz00_2911;

										if (BGL_MMAPP(BgL_g1179z00_1362))
											{	/* Unsafe/aes.scm 111 */
												BgL_plaintextz00_2910 = BgL_g1179z00_1362;
											}
										else
											{
												obj_t BgL_auxz00_6628;

												BgL_auxz00_6628 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 4504)),
													BGl_string3626z00zz__aesz00,
													BGl_string3623z00zz__aesz00, BgL_g1179z00_1362);
												FAILURE(BgL_auxz00_6628, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1180z00_1363))
											{	/* Unsafe/aes.scm 111 */
												BgL_passwordz00_2911 = BgL_g1180z00_1363;
											}
										else
											{
												obj_t BgL_auxz00_6634;

												BgL_auxz00_6634 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 4504)),
													BGl_string3626z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1180z00_1363);
												FAILURE(BgL_auxz00_6634, BFALSE, BFALSE);
											}
										BgL_res2450z00_2912 =
											BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
											(BgL_plaintextz00_2910, BgL_passwordz00_2911,
											BgL_nbitsz00_1368);
									}
									return BgL_res2450z00_2912;
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



/* aes-ctr-encrypt-mmap */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2encryptzd2mmapzd2zz__aesz00(obj_t
		BgL_plaintextz00_13, obj_t BgL_passwordz00_14, obj_t BgL_nbitsz00_15)
	{
		{	/* Unsafe/aes.scm 111 */
			return
				BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(BgL_plaintextz00_13,
				BgL_passwordz00_14, BgL_nbitsz00_15);
		}

	}



/* _aes-ctr-encrypt-file */
	obj_t BGl__aeszd2ctrzd2encryptzd2filezd2zz__aesz00(obj_t BgL_env1184z00_22,
		obj_t BgL_opt1183z00_21)
	{
		{	/* Unsafe/aes.scm 117 */
			{	/* Unsafe/aes.scm 117 */
				obj_t BgL_g1185z00_1369;
				obj_t BgL_g1186z00_1370;

				BgL_g1185z00_1369 = VECTOR_REF(BgL_opt1183z00_21, ((long) 0));
				BgL_g1186z00_1370 = VECTOR_REF(BgL_opt1183z00_21, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1183z00_21))
					{
					case ((long) 2):

						{	/* Unsafe/aes.scm 117 */

							{	/* Unsafe/aes.scm 117 */
								obj_t BgL_res2452z00_2926;

								{	/* Unsafe/aes.scm 117 */
									obj_t BgL_fnamez00_2913;
									obj_t BgL_passwordz00_2914;

									if (STRINGP(BgL_g1185z00_1369))
										{	/* Unsafe/aes.scm 117 */
											BgL_fnamez00_2913 = BgL_g1185z00_1369;
										}
									else
										{
											obj_t BgL_auxz00_6646;

											BgL_auxz00_6646 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 4851)),
												BGl_string3627z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1185z00_1369);
											FAILURE(BgL_auxz00_6646, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1186z00_1370))
										{	/* Unsafe/aes.scm 117 */
											BgL_passwordz00_2914 = BgL_g1186z00_1370;
										}
									else
										{
											obj_t BgL_auxz00_6652;

											BgL_auxz00_6652 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 4851)),
												BGl_string3627z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1186z00_1370);
											FAILURE(BgL_auxz00_6652, BFALSE, BFALSE);
										}
									{	/* Unsafe/aes.scm 118 */
										obj_t BgL_mmz00_2915;

										BgL_mmz00_2915 =
											BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_2913, BTRUE,
											BFALSE);
										{	/* Unsafe/aes.scm 119 */
											obj_t BgL_exitd1046z00_2918;

											BgL_exitd1046z00_2918 = BGL_EXITD_TOP_AS_OBJ();
											{	/* Unsafe/aes.scm 121 */
												obj_t BgL_zc3z04anonymousza31324ze3z87_6333;

												BgL_zc3z04anonymousza31324ze3z87_6333 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31324ze33519ze5zz__aesz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31324ze3z87_6333,
													(int) (((long) 0)), BgL_mmz00_2915);
												BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
													(BgL_exitd1046z00_2918,
													BgL_zc3z04anonymousza31324ze3z87_6333);
												{	/* Unsafe/aes.scm 120 */
													obj_t BgL_tmp1048z00_2920;

													BgL_tmp1048z00_2920 =
														BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
														(BgL_mmz00_2915, BgL_passwordz00_2914,
														BINT(((long) 128)));
													BGl_exitdzd2popzd2protectz12z12zz__bexitz00
														(BgL_exitd1046z00_2918);
													bgl_close_mmap(BgL_mmz00_2915);
													BgL_res2452z00_2926 = BgL_tmp1048z00_2920;
								}}}}}
								return BgL_res2452z00_2926;
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/aes.scm 117 */
							obj_t BgL_nbitsz00_1375;

							BgL_nbitsz00_1375 = VECTOR_REF(BgL_opt1183z00_21, ((long) 2));
							{	/* Unsafe/aes.scm 117 */

								{	/* Unsafe/aes.scm 117 */
									obj_t BgL_res2454z00_2940;

									{	/* Unsafe/aes.scm 117 */
										obj_t BgL_fnamez00_2927;
										obj_t BgL_passwordz00_2928;

										if (STRINGP(BgL_g1185z00_1369))
											{	/* Unsafe/aes.scm 117 */
												BgL_fnamez00_2927 = BgL_g1185z00_1369;
											}
										else
											{
												obj_t BgL_auxz00_6671;

												BgL_auxz00_6671 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 4851)),
													BGl_string3627z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1185z00_1369);
												FAILURE(BgL_auxz00_6671, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1186z00_1370))
											{	/* Unsafe/aes.scm 117 */
												BgL_passwordz00_2928 = BgL_g1186z00_1370;
											}
										else
											{
												obj_t BgL_auxz00_6677;

												BgL_auxz00_6677 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 4851)),
													BGl_string3627z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1186z00_1370);
												FAILURE(BgL_auxz00_6677, BFALSE, BFALSE);
											}
										{	/* Unsafe/aes.scm 118 */
											obj_t BgL_mmz00_2929;

											BgL_mmz00_2929 =
												BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_2927, BTRUE,
												BFALSE);
											{	/* Unsafe/aes.scm 119 */
												obj_t BgL_exitd1046z00_2932;

												BgL_exitd1046z00_2932 = BGL_EXITD_TOP_AS_OBJ();
												{	/* Unsafe/aes.scm 121 */
													obj_t BgL_zc3z04anonymousza31324ze3z87_6332;

													BgL_zc3z04anonymousza31324ze3z87_6332 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31324ze3ze5zz__aesz00,
														(int) (((long) 0)), (int) (((long) 1)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31324ze3z87_6332,
														(int) (((long) 0)), BgL_mmz00_2929);
													BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
														(BgL_exitd1046z00_2932,
														BgL_zc3z04anonymousza31324ze3z87_6332);
													{	/* Unsafe/aes.scm 120 */
														obj_t BgL_tmp1048z00_2934;

														BgL_tmp1048z00_2934 =
															BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
															(BgL_mmz00_2929, BgL_passwordz00_2928,
															BgL_nbitsz00_1375);
														BGl_exitdzd2popzd2protectz12z12zz__bexitz00
															(BgL_exitd1046z00_2932);
														bgl_close_mmap(BgL_mmz00_2929);
														BgL_res2454z00_2940 = BgL_tmp1048z00_2934;
									}}}}}
									return BgL_res2454z00_2940;
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



/* &<@anonymous:1324> */
	obj_t BGl_z62zc3z04anonymousza31324ze3ze5zz__aesz00(obj_t BgL_envz00_6334)
	{
		{	/* Unsafe/aes.scm 119 */
			{	/* Unsafe/aes.scm 121 */
				obj_t BgL_mmz00_6335;

				BgL_mmz00_6335 =
					((obj_t) PROCEDURE_REF(BgL_envz00_6334, (int) (((long) 0))));
				return bgl_close_mmap(BgL_mmz00_6335);
			}
		}

	}



/* &<@anonymous:1324>3519 */
	obj_t BGl_z62zc3z04anonymousza31324ze33519ze5zz__aesz00(obj_t BgL_envz00_6336)
	{
		{	/* Unsafe/aes.scm 119 */
			{	/* Unsafe/aes.scm 121 */
				obj_t BgL_mmz00_6337;

				BgL_mmz00_6337 =
					((obj_t) PROCEDURE_REF(BgL_envz00_6336, (int) (((long) 0))));
				return bgl_close_mmap(BgL_mmz00_6337);
			}
		}

	}



/* aes-ctr-encrypt-file */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2encryptzd2filezd2zz__aesz00(obj_t
		BgL_fnamez00_18, obj_t BgL_passwordz00_19, obj_t BgL_nbitsz00_20)
	{
		{	/* Unsafe/aes.scm 117 */
			{	/* Unsafe/aes.scm 118 */
				obj_t BgL_mmz00_2941;

				BgL_mmz00_2941 =
					BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_18, BTRUE, BFALSE);
				{	/* Unsafe/aes.scm 119 */
					obj_t BgL_exitd1046z00_2944;

					BgL_exitd1046z00_2944 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Unsafe/aes.scm 121 */
						obj_t BgL_zc3z04anonymousza31324ze3z87_6338;

						BgL_zc3z04anonymousza31324ze3z87_6338 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31324ze33520ze5zz__aesz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31324ze3z87_6338,
							(int) (((long) 0)), BgL_mmz00_2941);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1046z00_2944,
							BgL_zc3z04anonymousza31324ze3z87_6338);
						{	/* Unsafe/aes.scm 120 */
							obj_t BgL_tmp1048z00_2946;

							BgL_tmp1048z00_2946 =
								BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(BgL_mmz00_2941,
								BgL_passwordz00_19, BgL_nbitsz00_20);
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1046z00_2944);
							bgl_close_mmap(BgL_mmz00_2941);
							return BgL_tmp1048z00_2946;
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1324>3520 */
	obj_t BGl_z62zc3z04anonymousza31324ze33520ze5zz__aesz00(obj_t BgL_envz00_6339)
	{
		{	/* Unsafe/aes.scm 119 */
			{	/* Unsafe/aes.scm 121 */
				obj_t BgL_mmz00_6340;

				BgL_mmz00_6340 =
					((obj_t) PROCEDURE_REF(BgL_envz00_6339, (int) (((long) 0))));
				return bgl_close_mmap(BgL_mmz00_6340);
			}
		}

	}



/* _aes-ctr-encrypt-port */
	obj_t BGl__aeszd2ctrzd2encryptzd2portzd2zz__aesz00(obj_t BgL_env1190z00_27,
		obj_t BgL_opt1189z00_26)
	{
		{	/* Unsafe/aes.scm 126 */
			{	/* Unsafe/aes.scm 126 */
				obj_t BgL_g1191z00_1384;
				obj_t BgL_g1192z00_1385;

				BgL_g1191z00_1384 = VECTOR_REF(BgL_opt1189z00_26, ((long) 0));
				BgL_g1192z00_1385 = VECTOR_REF(BgL_opt1189z00_26, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1189z00_26))
					{
					case ((long) 2):

						{	/* Unsafe/aes.scm 126 */

							{	/* Unsafe/aes.scm 126 */
								obj_t BgL_res2457z00_2958;

								{	/* Unsafe/aes.scm 126 */
									obj_t BgL_inputzd2portzd2_2952;
									obj_t BgL_passwordz00_2953;

									if (INPUT_PORTP(BgL_g1191z00_1384))
										{	/* Unsafe/aes.scm 126 */
											BgL_inputzd2portzd2_2952 = BgL_g1191z00_1384;
										}
									else
										{
											obj_t BgL_auxz00_6721;

											BgL_auxz00_6721 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 5272)),
												BGl_string3628z00zz__aesz00,
												BGl_string3629z00zz__aesz00, BgL_g1191z00_1384);
											FAILURE(BgL_auxz00_6721, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1192z00_1385))
										{	/* Unsafe/aes.scm 126 */
											BgL_passwordz00_2953 = BgL_g1192z00_1385;
										}
									else
										{
											obj_t BgL_auxz00_6727;

											BgL_auxz00_6727 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 5272)),
												BGl_string3628z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1192z00_1385);
											FAILURE(BgL_auxz00_6727, BFALSE, BFALSE);
										}
									BgL_res2457z00_2958 =
										BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
										(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
										(BgL_inputzd2portzd2_2952), BgL_passwordz00_2953,
										BINT(((long) 128)));
								}
								return BgL_res2457z00_2958;
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/aes.scm 126 */
							obj_t BgL_nbitsz00_1390;

							BgL_nbitsz00_1390 = VECTOR_REF(BgL_opt1189z00_26, ((long) 2));
							{	/* Unsafe/aes.scm 126 */

								{	/* Unsafe/aes.scm 126 */
									obj_t BgL_res2459z00_2965;

									{	/* Unsafe/aes.scm 126 */
										obj_t BgL_inputzd2portzd2_2959;
										obj_t BgL_passwordz00_2960;

										if (INPUT_PORTP(BgL_g1191z00_1384))
											{	/* Unsafe/aes.scm 126 */
												BgL_inputzd2portzd2_2959 = BgL_g1191z00_1384;
											}
										else
											{
												obj_t BgL_auxz00_6737;

												BgL_auxz00_6737 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 5272)),
													BGl_string3628z00zz__aesz00,
													BGl_string3629z00zz__aesz00, BgL_g1191z00_1384);
												FAILURE(BgL_auxz00_6737, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1192z00_1385))
											{	/* Unsafe/aes.scm 126 */
												BgL_passwordz00_2960 = BgL_g1192z00_1385;
											}
										else
											{
												obj_t BgL_auxz00_6743;

												BgL_auxz00_6743 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 5272)),
													BGl_string3628z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1192z00_1385);
												FAILURE(BgL_auxz00_6743, BFALSE, BFALSE);
											}
										BgL_res2459z00_2965 =
											BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
											(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
											(BgL_inputzd2portzd2_2959), BgL_passwordz00_2960,
											BgL_nbitsz00_1390);
									}
									return BgL_res2459z00_2965;
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



/* aes-ctr-encrypt-port */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2encryptzd2portzd2zz__aesz00(obj_t
		BgL_inputzd2portzd2_23, obj_t BgL_passwordz00_24, obj_t BgL_nbitsz00_25)
	{
		{	/* Unsafe/aes.scm 126 */
			return
				BGl_z52aeszd2ctrzd2encryptz52zz__aesz00
				(BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_inputzd2portzd2_23),
				BgL_passwordz00_24, BgL_nbitsz00_25);
		}

	}



/* _aes-ctr-decrypt */
	obj_t BGl__aeszd2ctrzd2decryptz00zz__aesz00(obj_t BgL_env1196z00_32,
		obj_t BgL_opt1195z00_31)
	{
		{	/* Unsafe/aes.scm 135 */
			{	/* Unsafe/aes.scm 135 */
				obj_t BgL_g1197z00_1392;
				obj_t BgL_g1198z00_1393;

				BgL_g1197z00_1392 = VECTOR_REF(BgL_opt1195z00_31, ((long) 0));
				BgL_g1198z00_1393 = VECTOR_REF(BgL_opt1195z00_31, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1195z00_31))
					{
					case ((long) 2):

						{	/* Unsafe/aes.scm 135 */

							{	/* Unsafe/aes.scm 135 */
								obj_t BgL_res2467z00_2989;

								{	/* Unsafe/aes.scm 135 */
									obj_t BgL_passwordz00_2970;

									if (STRINGP(BgL_g1198z00_1393))
										{	/* Unsafe/aes.scm 135 */
											BgL_passwordz00_2970 = BgL_g1198z00_1393;
										}
									else
										{
											obj_t BgL_auxz00_6757;

											BgL_auxz00_6757 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 5860)),
												BGl_string3630z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1198z00_1393);
											FAILURE(BgL_auxz00_6757, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1197z00_1392))
										{	/* Unsafe/aes.scm 137 */
											BgL_res2467z00_2989 =
												BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
												(BgL_g1197z00_1392, BgL_passwordz00_2970,
												BINT(((long) 128)));
										}
									else
										{	/* Unsafe/aes.scm 139 */
											bool_t BgL_test3708z00_6765;

											{	/* Unsafe/aes.scm 139 */
												bool_t BgL_res2463z00_2978;

												BgL_res2463z00_2978 = BGL_MMAPP(BgL_g1197z00_1392);
												BgL_test3708z00_6765 = BgL_res2463z00_2978;
											}
											if (BgL_test3708z00_6765)
												{	/* Unsafe/aes.scm 140 */
													obj_t BgL_res2464z00_2981;

													{	/* Unsafe/aes.scm 140 */
														obj_t BgL_plaintextz00_2979;

														if (BGL_MMAPP(BgL_g1197z00_1392))
															{	/* Unsafe/aes.scm 140 */
																BgL_plaintextz00_2979 = BgL_g1197z00_1392;
															}
														else
															{
																obj_t BgL_auxz00_6769;

																BgL_auxz00_6769 =
																	BGl_typezd2errorzd2zz__errorz00
																	(BGl_string3620z00zz__aesz00,
																	BINT(((long) 6080)),
																	BGl_string3630z00zz__aesz00,
																	BGl_string3623z00zz__aesz00,
																	BgL_g1197z00_1392);
																FAILURE(BgL_auxz00_6769, BFALSE, BFALSE);
															}
														BgL_res2464z00_2981 =
															BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
															(BgL_plaintextz00_2979, BgL_passwordz00_2970,
															BINT(((long) 128)));
													}
													BgL_res2467z00_2989 = BgL_res2464z00_2981;
												}
											else
												{	/* Unsafe/aes.scm 139 */
													if (INPUT_PORTP(BgL_g1197z00_1392))
														{	/* Unsafe/aes.scm 141 */
															BgL_res2467z00_2989 =
																BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
																(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
																(BgL_g1197z00_1392), BgL_passwordz00_2970,
																BINT(((long) 128)));
														}
													else
														{	/* Unsafe/aes.scm 144 */
															obj_t BgL_aux3578z00_6413;

															BgL_aux3578z00_6413 =
																BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long)
																		3)), BGl_string3624z00zz__aesz00,
																BgL_g1197z00_1392);
															if (STRINGP(BgL_aux3578z00_6413))
																{	/* Unsafe/aes.scm 144 */
																	BgL_res2467z00_2989 = BgL_aux3578z00_6413;
																}
															else
																{
																	obj_t BgL_auxz00_6784;

																	BgL_auxz00_6784 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3620z00zz__aesz00,
																		BINT(((long) 6216)),
																		BGl_string3630z00zz__aesz00,
																		BGl_string3622z00zz__aesz00,
																		BgL_aux3578z00_6413);
																	FAILURE(BgL_auxz00_6784, BFALSE, BFALSE);
								}}}}}
								return BgL_res2467z00_2989;
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/aes.scm 135 */
							obj_t BgL_nbitsz00_1398;

							BgL_nbitsz00_1398 = VECTOR_REF(BgL_opt1195z00_31, ((long) 2));
							{	/* Unsafe/aes.scm 135 */

								{	/* Unsafe/aes.scm 135 */
									obj_t BgL_res2474z00_3009;

									{	/* Unsafe/aes.scm 135 */
										obj_t BgL_passwordz00_2990;

										if (STRINGP(BgL_g1198z00_1393))
											{	/* Unsafe/aes.scm 135 */
												BgL_passwordz00_2990 = BgL_g1198z00_1393;
											}
										else
											{
												obj_t BgL_auxz00_6791;

												BgL_auxz00_6791 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 5860)),
													BGl_string3630z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1198z00_1393);
												FAILURE(BgL_auxz00_6791, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1197z00_1392))
											{	/* Unsafe/aes.scm 137 */
												BgL_res2474z00_3009 =
													BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
													(BgL_g1197z00_1392, BgL_passwordz00_2990,
													BgL_nbitsz00_1398);
											}
										else
											{	/* Unsafe/aes.scm 139 */
												bool_t BgL_test3714z00_6798;

												{	/* Unsafe/aes.scm 139 */
													bool_t BgL_res2470z00_2998;

													BgL_res2470z00_2998 = BGL_MMAPP(BgL_g1197z00_1392);
													BgL_test3714z00_6798 = BgL_res2470z00_2998;
												}
												if (BgL_test3714z00_6798)
													{	/* Unsafe/aes.scm 140 */
														obj_t BgL_res2471z00_3001;

														{	/* Unsafe/aes.scm 140 */
															obj_t BgL_plaintextz00_2999;

															if (BGL_MMAPP(BgL_g1197z00_1392))
																{	/* Unsafe/aes.scm 140 */
																	BgL_plaintextz00_2999 = BgL_g1197z00_1392;
																}
															else
																{
																	obj_t BgL_auxz00_6802;

																	BgL_auxz00_6802 =
																		BGl_typezd2errorzd2zz__errorz00
																		(BGl_string3620z00zz__aesz00,
																		BINT(((long) 6080)),
																		BGl_string3630z00zz__aesz00,
																		BGl_string3623z00zz__aesz00,
																		BgL_g1197z00_1392);
																	FAILURE(BgL_auxz00_6802, BFALSE, BFALSE);
																}
															BgL_res2471z00_3001 =
																BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
																(BgL_plaintextz00_2999, BgL_passwordz00_2990,
																BgL_nbitsz00_1398);
														}
														BgL_res2474z00_3009 = BgL_res2471z00_3001;
													}
												else
													{	/* Unsafe/aes.scm 139 */
														if (INPUT_PORTP(BgL_g1197z00_1392))
															{	/* Unsafe/aes.scm 141 */
																BgL_res2474z00_3009 =
																	BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
																	(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
																	(BgL_g1197z00_1392), BgL_passwordz00_2990,
																	BgL_nbitsz00_1398);
															}
														else
															{	/* Unsafe/aes.scm 144 */
																obj_t BgL_aux3584z00_6419;

																BgL_aux3584z00_6419 =
																	BGl_errorz00zz__errorz00(CNST_TABLE_REF((
																			(long) 3)), BGl_string3624z00zz__aesz00,
																	BgL_g1197z00_1392);
																if (STRINGP(BgL_aux3584z00_6419))
																	{	/* Unsafe/aes.scm 144 */
																		BgL_res2474z00_3009 = BgL_aux3584z00_6419;
																	}
																else
																	{
																		obj_t BgL_auxz00_6815;

																		BgL_auxz00_6815 =
																			BGl_typezd2errorzd2zz__errorz00
																			(BGl_string3620z00zz__aesz00,
																			BINT(((long) 6216)),
																			BGl_string3630z00zz__aesz00,
																			BGl_string3622z00zz__aesz00,
																			BgL_aux3584z00_6419);
																		FAILURE(BgL_auxz00_6815, BFALSE, BFALSE);
									}}}}}
									return BgL_res2474z00_3009;
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



/* aes-ctr-decrypt */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2decryptz00zz__aesz00(obj_t
		BgL_ciphertextz00_28, obj_t BgL_passwordz00_29, obj_t BgL_nbitsz00_30)
	{
		{	/* Unsafe/aes.scm 135 */
			if (STRINGP(BgL_ciphertextz00_28))
				{	/* Unsafe/aes.scm 137 */
					return
						BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(BgL_ciphertextz00_28,
						BgL_passwordz00_29, BgL_nbitsz00_30);
				}
			else
				{	/* Unsafe/aes.scm 139 */
					bool_t BgL_test3719z00_6824;

					{	/* Unsafe/aes.scm 139 */
						bool_t BgL_res2477z00_3017;

						BgL_res2477z00_3017 = BGL_MMAPP(BgL_ciphertextz00_28);
						BgL_test3719z00_6824 = BgL_res2477z00_3017;
					}
					if (BgL_test3719z00_6824)
						{	/* Unsafe/aes.scm 140 */
							obj_t BgL_res2478z00_3020;

							BgL_res2478z00_3020 =
								BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(
								((obj_t) BgL_ciphertextz00_28), BgL_passwordz00_29,
								BgL_nbitsz00_30);
							return BgL_res2478z00_3020;
						}
					else
						{	/* Unsafe/aes.scm 139 */
							if (INPUT_PORTP(BgL_ciphertextz00_28))
								{	/* Unsafe/aes.scm 141 */
									return
										BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
										(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
										(BgL_ciphertextz00_28), BgL_passwordz00_29,
										BgL_nbitsz00_30);
								}
							else
								{	/* Unsafe/aes.scm 141 */
									return
										BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 3)),
										BGl_string3624z00zz__aesz00, BgL_ciphertextz00_28);
		}}}}

	}



/* _aes-ctr-decrypt-string */
	obj_t BGl__aeszd2ctrzd2decryptzd2stringzd2zz__aesz00(obj_t BgL_env1202z00_37,
		obj_t BgL_opt1201z00_36)
	{
		{	/* Unsafe/aes.scm 149 */
			{	/* Unsafe/aes.scm 149 */
				obj_t BgL_g1203z00_1402;
				obj_t BgL_g1204z00_1403;

				BgL_g1203z00_1402 = VECTOR_REF(BgL_opt1201z00_36, ((long) 0));
				BgL_g1204z00_1403 = VECTOR_REF(BgL_opt1201z00_36, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1201z00_36))
					{
					case ((long) 2):

						{	/* Unsafe/aes.scm 149 */

							{	/* Unsafe/aes.scm 149 */
								obj_t BgL_res2481z00_3030;

								{	/* Unsafe/aes.scm 149 */
									obj_t BgL_plaintextz00_3028;
									obj_t BgL_passwordz00_3029;

									if (STRINGP(BgL_g1203z00_1402))
										{	/* Unsafe/aes.scm 149 */
											BgL_plaintextz00_3028 = BgL_g1203z00_1402;
										}
									else
										{
											obj_t BgL_auxz00_6838;

											BgL_auxz00_6838 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 6498)),
												BGl_string3631z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1203z00_1402);
											FAILURE(BgL_auxz00_6838, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1204z00_1403))
										{	/* Unsafe/aes.scm 149 */
											BgL_passwordz00_3029 = BgL_g1204z00_1403;
										}
									else
										{
											obj_t BgL_auxz00_6844;

											BgL_auxz00_6844 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 6498)),
												BGl_string3631z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1204z00_1403);
											FAILURE(BgL_auxz00_6844, BFALSE, BFALSE);
										}
									BgL_res2481z00_3030 =
										BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
										(BgL_plaintextz00_3028, BgL_passwordz00_3029,
										BINT(((long) 128)));
								}
								return BgL_res2481z00_3030;
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/aes.scm 149 */
							obj_t BgL_nbitsz00_1408;

							BgL_nbitsz00_1408 = VECTOR_REF(BgL_opt1201z00_36, ((long) 2));
							{	/* Unsafe/aes.scm 149 */

								{	/* Unsafe/aes.scm 149 */
									obj_t BgL_res2482z00_3033;

									{	/* Unsafe/aes.scm 149 */
										obj_t BgL_plaintextz00_3031;
										obj_t BgL_passwordz00_3032;

										if (STRINGP(BgL_g1203z00_1402))
											{	/* Unsafe/aes.scm 149 */
												BgL_plaintextz00_3031 = BgL_g1203z00_1402;
											}
										else
											{
												obj_t BgL_auxz00_6853;

												BgL_auxz00_6853 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 6498)),
													BGl_string3631z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1203z00_1402);
												FAILURE(BgL_auxz00_6853, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1204z00_1403))
											{	/* Unsafe/aes.scm 149 */
												BgL_passwordz00_3032 = BgL_g1204z00_1403;
											}
										else
											{
												obj_t BgL_auxz00_6859;

												BgL_auxz00_6859 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 6498)),
													BGl_string3631z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1204z00_1403);
												FAILURE(BgL_auxz00_6859, BFALSE, BFALSE);
											}
										BgL_res2482z00_3033 =
											BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
											(BgL_plaintextz00_3031, BgL_passwordz00_3032,
											BgL_nbitsz00_1408);
									}
									return BgL_res2482z00_3033;
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



/* aes-ctr-decrypt-string */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2decryptzd2stringzd2zz__aesz00(obj_t
		BgL_plaintextz00_33, obj_t BgL_passwordz00_34, obj_t BgL_nbitsz00_35)
	{
		{	/* Unsafe/aes.scm 149 */
			return
				BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(BgL_plaintextz00_33,
				BgL_passwordz00_34, BgL_nbitsz00_35);
		}

	}



/* _aes-ctr-decrypt-mmap */
	obj_t BGl__aeszd2ctrzd2decryptzd2mmapzd2zz__aesz00(obj_t BgL_env1208z00_42,
		obj_t BgL_opt1207z00_41)
	{
		{	/* Unsafe/aes.scm 155 */
			{	/* Unsafe/aes.scm 155 */
				obj_t BgL_g1209z00_1409;
				obj_t BgL_g1210z00_1410;

				BgL_g1209z00_1409 = VECTOR_REF(BgL_opt1207z00_41, ((long) 0));
				BgL_g1210z00_1410 = VECTOR_REF(BgL_opt1207z00_41, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1207z00_41))
					{
					case ((long) 2):

						{	/* Unsafe/aes.scm 155 */

							{	/* Unsafe/aes.scm 155 */
								obj_t BgL_res2483z00_3036;

								{	/* Unsafe/aes.scm 155 */
									obj_t BgL_plaintextz00_3034;
									obj_t BgL_passwordz00_3035;

									if (BGL_MMAPP(BgL_g1209z00_1409))
										{	/* Unsafe/aes.scm 155 */
											BgL_plaintextz00_3034 = BgL_g1209z00_1409;
										}
									else
										{
											obj_t BgL_auxz00_6871;

											BgL_auxz00_6871 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 6847)),
												BGl_string3632z00zz__aesz00,
												BGl_string3623z00zz__aesz00, BgL_g1209z00_1409);
											FAILURE(BgL_auxz00_6871, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1210z00_1410))
										{	/* Unsafe/aes.scm 155 */
											BgL_passwordz00_3035 = BgL_g1210z00_1410;
										}
									else
										{
											obj_t BgL_auxz00_6877;

											BgL_auxz00_6877 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 6847)),
												BGl_string3632z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1210z00_1410);
											FAILURE(BgL_auxz00_6877, BFALSE, BFALSE);
										}
									BgL_res2483z00_3036 =
										BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
										(BgL_plaintextz00_3034, BgL_passwordz00_3035,
										BINT(((long) 128)));
								}
								return BgL_res2483z00_3036;
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/aes.scm 155 */
							obj_t BgL_nbitsz00_1415;

							BgL_nbitsz00_1415 = VECTOR_REF(BgL_opt1207z00_41, ((long) 2));
							{	/* Unsafe/aes.scm 155 */

								{	/* Unsafe/aes.scm 155 */
									obj_t BgL_res2484z00_3039;

									{	/* Unsafe/aes.scm 155 */
										obj_t BgL_plaintextz00_3037;
										obj_t BgL_passwordz00_3038;

										if (BGL_MMAPP(BgL_g1209z00_1409))
											{	/* Unsafe/aes.scm 155 */
												BgL_plaintextz00_3037 = BgL_g1209z00_1409;
											}
										else
											{
												obj_t BgL_auxz00_6886;

												BgL_auxz00_6886 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 6847)),
													BGl_string3632z00zz__aesz00,
													BGl_string3623z00zz__aesz00, BgL_g1209z00_1409);
												FAILURE(BgL_auxz00_6886, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1210z00_1410))
											{	/* Unsafe/aes.scm 155 */
												BgL_passwordz00_3038 = BgL_g1210z00_1410;
											}
										else
											{
												obj_t BgL_auxz00_6892;

												BgL_auxz00_6892 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 6847)),
													BGl_string3632z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1210z00_1410);
												FAILURE(BgL_auxz00_6892, BFALSE, BFALSE);
											}
										BgL_res2484z00_3039 =
											BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
											(BgL_plaintextz00_3037, BgL_passwordz00_3038,
											BgL_nbitsz00_1415);
									}
									return BgL_res2484z00_3039;
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



/* aes-ctr-decrypt-mmap */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2decryptzd2mmapzd2zz__aesz00(obj_t
		BgL_plaintextz00_38, obj_t BgL_passwordz00_39, obj_t BgL_nbitsz00_40)
	{
		{	/* Unsafe/aes.scm 155 */
			return
				BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(BgL_plaintextz00_38,
				BgL_passwordz00_39, BgL_nbitsz00_40);
		}

	}



/* _aes-ctr-decrypt-file */
	obj_t BGl__aeszd2ctrzd2decryptzd2filezd2zz__aesz00(obj_t BgL_env1214z00_47,
		obj_t BgL_opt1213z00_46)
	{
		{	/* Unsafe/aes.scm 161 */
			{	/* Unsafe/aes.scm 161 */
				obj_t BgL_g1215z00_1416;
				obj_t BgL_g1216z00_1417;

				BgL_g1215z00_1416 = VECTOR_REF(BgL_opt1213z00_46, ((long) 0));
				BgL_g1216z00_1417 = VECTOR_REF(BgL_opt1213z00_46, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1213z00_46))
					{
					case ((long) 2):

						{	/* Unsafe/aes.scm 161 */

							{	/* Unsafe/aes.scm 161 */
								obj_t BgL_res2486z00_3053;

								{	/* Unsafe/aes.scm 161 */
									obj_t BgL_fnamez00_3040;
									obj_t BgL_passwordz00_3041;

									if (STRINGP(BgL_g1215z00_1416))
										{	/* Unsafe/aes.scm 161 */
											BgL_fnamez00_3040 = BgL_g1215z00_1416;
										}
									else
										{
											obj_t BgL_auxz00_6904;

											BgL_auxz00_6904 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 7194)),
												BGl_string3633z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1215z00_1416);
											FAILURE(BgL_auxz00_6904, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1216z00_1417))
										{	/* Unsafe/aes.scm 161 */
											BgL_passwordz00_3041 = BgL_g1216z00_1417;
										}
									else
										{
											obj_t BgL_auxz00_6910;

											BgL_auxz00_6910 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 7194)),
												BGl_string3633z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1216z00_1417);
											FAILURE(BgL_auxz00_6910, BFALSE, BFALSE);
										}
									{	/* Unsafe/aes.scm 162 */
										obj_t BgL_mmz00_3042;

										BgL_mmz00_3042 =
											BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_3040, BTRUE,
											BFALSE);
										{	/* Unsafe/aes.scm 163 */
											obj_t BgL_exitd1054z00_3045;

											BgL_exitd1054z00_3045 = BGL_EXITD_TOP_AS_OBJ();
											{	/* Unsafe/aes.scm 165 */
												obj_t BgL_zc3z04anonymousza31334ze3z87_6342;

												BgL_zc3z04anonymousza31334ze3z87_6342 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31334ze33521ze5zz__aesz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31334ze3z87_6342,
													(int) (((long) 0)), BgL_mmz00_3042);
												BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
													(BgL_exitd1054z00_3045,
													BgL_zc3z04anonymousza31334ze3z87_6342);
												{	/* Unsafe/aes.scm 164 */
													obj_t BgL_tmp1056z00_3047;

													BgL_tmp1056z00_3047 =
														BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
														(BgL_mmz00_3042, BgL_passwordz00_3041,
														BINT(((long) 128)));
													BGl_exitdzd2popzd2protectz12z12zz__bexitz00
														(BgL_exitd1054z00_3045);
													bgl_close_mmap(BgL_mmz00_3042);
													BgL_res2486z00_3053 = BgL_tmp1056z00_3047;
								}}}}}
								return BgL_res2486z00_3053;
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/aes.scm 161 */
							obj_t BgL_nbitsz00_1422;

							BgL_nbitsz00_1422 = VECTOR_REF(BgL_opt1213z00_46, ((long) 2));
							{	/* Unsafe/aes.scm 161 */

								{	/* Unsafe/aes.scm 161 */
									obj_t BgL_res2488z00_3067;

									{	/* Unsafe/aes.scm 161 */
										obj_t BgL_fnamez00_3054;
										obj_t BgL_passwordz00_3055;

										if (STRINGP(BgL_g1215z00_1416))
											{	/* Unsafe/aes.scm 161 */
												BgL_fnamez00_3054 = BgL_g1215z00_1416;
											}
										else
											{
												obj_t BgL_auxz00_6929;

												BgL_auxz00_6929 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 7194)),
													BGl_string3633z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1215z00_1416);
												FAILURE(BgL_auxz00_6929, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1216z00_1417))
											{	/* Unsafe/aes.scm 161 */
												BgL_passwordz00_3055 = BgL_g1216z00_1417;
											}
										else
											{
												obj_t BgL_auxz00_6935;

												BgL_auxz00_6935 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 7194)),
													BGl_string3633z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1216z00_1417);
												FAILURE(BgL_auxz00_6935, BFALSE, BFALSE);
											}
										{	/* Unsafe/aes.scm 162 */
											obj_t BgL_mmz00_3056;

											BgL_mmz00_3056 =
												BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_3054, BTRUE,
												BFALSE);
											{	/* Unsafe/aes.scm 163 */
												obj_t BgL_exitd1054z00_3059;

												BgL_exitd1054z00_3059 = BGL_EXITD_TOP_AS_OBJ();
												{	/* Unsafe/aes.scm 165 */
													obj_t BgL_zc3z04anonymousza31334ze3z87_6341;

													BgL_zc3z04anonymousza31334ze3z87_6341 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31334ze3ze5zz__aesz00,
														(int) (((long) 0)), (int) (((long) 1)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31334ze3z87_6341,
														(int) (((long) 0)), BgL_mmz00_3056);
													BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
														(BgL_exitd1054z00_3059,
														BgL_zc3z04anonymousza31334ze3z87_6341);
													{	/* Unsafe/aes.scm 164 */
														obj_t BgL_tmp1056z00_3061;

														BgL_tmp1056z00_3061 =
															BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
															(BgL_mmz00_3056, BgL_passwordz00_3055,
															BgL_nbitsz00_1422);
														BGl_exitdzd2popzd2protectz12z12zz__bexitz00
															(BgL_exitd1054z00_3059);
														bgl_close_mmap(BgL_mmz00_3056);
														BgL_res2488z00_3067 = BgL_tmp1056z00_3061;
									}}}}}
									return BgL_res2488z00_3067;
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



/* &<@anonymous:1334> */
	obj_t BGl_z62zc3z04anonymousza31334ze3ze5zz__aesz00(obj_t BgL_envz00_6343)
	{
		{	/* Unsafe/aes.scm 163 */
			{	/* Unsafe/aes.scm 165 */
				obj_t BgL_mmz00_6344;

				BgL_mmz00_6344 =
					((obj_t) PROCEDURE_REF(BgL_envz00_6343, (int) (((long) 0))));
				return bgl_close_mmap(BgL_mmz00_6344);
			}
		}

	}



/* &<@anonymous:1334>3521 */
	obj_t BGl_z62zc3z04anonymousza31334ze33521ze5zz__aesz00(obj_t BgL_envz00_6345)
	{
		{	/* Unsafe/aes.scm 163 */
			{	/* Unsafe/aes.scm 165 */
				obj_t BgL_mmz00_6346;

				BgL_mmz00_6346 =
					((obj_t) PROCEDURE_REF(BgL_envz00_6345, (int) (((long) 0))));
				return bgl_close_mmap(BgL_mmz00_6346);
			}
		}

	}



/* aes-ctr-decrypt-file */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2decryptzd2filezd2zz__aesz00(obj_t
		BgL_fnamez00_43, obj_t BgL_passwordz00_44, obj_t BgL_nbitsz00_45)
	{
		{	/* Unsafe/aes.scm 161 */
			{	/* Unsafe/aes.scm 162 */
				obj_t BgL_mmz00_3068;

				BgL_mmz00_3068 =
					BGl_openzd2mmapzd2zz__mmapz00(BgL_fnamez00_43, BTRUE, BFALSE);
				{	/* Unsafe/aes.scm 163 */
					obj_t BgL_exitd1054z00_3071;

					BgL_exitd1054z00_3071 = BGL_EXITD_TOP_AS_OBJ();
					{	/* Unsafe/aes.scm 165 */
						obj_t BgL_zc3z04anonymousza31334ze3z87_6347;

						BgL_zc3z04anonymousza31334ze3z87_6347 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza31334ze33522ze5zz__aesz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza31334ze3z87_6347,
							(int) (((long) 0)), BgL_mmz00_3068);
						BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(BgL_exitd1054z00_3071,
							BgL_zc3z04anonymousza31334ze3z87_6347);
						{	/* Unsafe/aes.scm 164 */
							obj_t BgL_tmp1056z00_3073;

							BgL_tmp1056z00_3073 =
								BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(BgL_mmz00_3068,
								BgL_passwordz00_44, BgL_nbitsz00_45);
							BGl_exitdzd2popzd2protectz12z12zz__bexitz00
								(BgL_exitd1054z00_3071);
							bgl_close_mmap(BgL_mmz00_3068);
							return BgL_tmp1056z00_3073;
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1334>3522 */
	obj_t BGl_z62zc3z04anonymousza31334ze33522ze5zz__aesz00(obj_t BgL_envz00_6348)
	{
		{	/* Unsafe/aes.scm 163 */
			{	/* Unsafe/aes.scm 165 */
				obj_t BgL_mmz00_6349;

				BgL_mmz00_6349 =
					((obj_t) PROCEDURE_REF(BgL_envz00_6348, (int) (((long) 0))));
				return bgl_close_mmap(BgL_mmz00_6349);
			}
		}

	}



/* _aes-ctr-decrypt-port */
	obj_t BGl__aeszd2ctrzd2decryptzd2portzd2zz__aesz00(obj_t BgL_env1220z00_52,
		obj_t BgL_opt1219z00_51)
	{
		{	/* Unsafe/aes.scm 170 */
			{	/* Unsafe/aes.scm 170 */
				obj_t BgL_g1221z00_1431;
				obj_t BgL_g1222z00_1432;

				BgL_g1221z00_1431 = VECTOR_REF(BgL_opt1219z00_51, ((long) 0));
				BgL_g1222z00_1432 = VECTOR_REF(BgL_opt1219z00_51, ((long) 1));
				switch (VECTOR_LENGTH(BgL_opt1219z00_51))
					{
					case ((long) 2):

						{	/* Unsafe/aes.scm 170 */

							{	/* Unsafe/aes.scm 170 */
								obj_t BgL_res2491z00_3085;

								{	/* Unsafe/aes.scm 170 */
									obj_t BgL_inputzd2portzd2_3079;
									obj_t BgL_passwordz00_3080;

									if (INPUT_PORTP(BgL_g1221z00_1431))
										{	/* Unsafe/aes.scm 170 */
											BgL_inputzd2portzd2_3079 = BgL_g1221z00_1431;
										}
									else
										{
											obj_t BgL_auxz00_6979;

											BgL_auxz00_6979 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 7615)),
												BGl_string3634z00zz__aesz00,
												BGl_string3629z00zz__aesz00, BgL_g1221z00_1431);
											FAILURE(BgL_auxz00_6979, BFALSE, BFALSE);
										}
									if (STRINGP(BgL_g1222z00_1432))
										{	/* Unsafe/aes.scm 170 */
											BgL_passwordz00_3080 = BgL_g1222z00_1432;
										}
									else
										{
											obj_t BgL_auxz00_6985;

											BgL_auxz00_6985 =
												BGl_typezd2errorzd2zz__errorz00
												(BGl_string3620z00zz__aesz00, BINT(((long) 7615)),
												BGl_string3634z00zz__aesz00,
												BGl_string3622z00zz__aesz00, BgL_g1222z00_1432);
											FAILURE(BgL_auxz00_6985, BFALSE, BFALSE);
										}
									BgL_res2491z00_3085 =
										BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
										(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
										(BgL_inputzd2portzd2_3079), BgL_passwordz00_3080,
										BINT(((long) 128)));
								}
								return BgL_res2491z00_3085;
							}
						}
						break;
					case ((long) 3):

						{	/* Unsafe/aes.scm 170 */
							obj_t BgL_nbitsz00_1437;

							BgL_nbitsz00_1437 = VECTOR_REF(BgL_opt1219z00_51, ((long) 2));
							{	/* Unsafe/aes.scm 170 */

								{	/* Unsafe/aes.scm 170 */
									obj_t BgL_res2493z00_3092;

									{	/* Unsafe/aes.scm 170 */
										obj_t BgL_inputzd2portzd2_3086;
										obj_t BgL_passwordz00_3087;

										if (INPUT_PORTP(BgL_g1221z00_1431))
											{	/* Unsafe/aes.scm 170 */
												BgL_inputzd2portzd2_3086 = BgL_g1221z00_1431;
											}
										else
											{
												obj_t BgL_auxz00_6995;

												BgL_auxz00_6995 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 7615)),
													BGl_string3634z00zz__aesz00,
													BGl_string3629z00zz__aesz00, BgL_g1221z00_1431);
												FAILURE(BgL_auxz00_6995, BFALSE, BFALSE);
											}
										if (STRINGP(BgL_g1222z00_1432))
											{	/* Unsafe/aes.scm 170 */
												BgL_passwordz00_3087 = BgL_g1222z00_1432;
											}
										else
											{
												obj_t BgL_auxz00_7001;

												BgL_auxz00_7001 =
													BGl_typezd2errorzd2zz__errorz00
													(BGl_string3620z00zz__aesz00, BINT(((long) 7615)),
													BGl_string3634z00zz__aesz00,
													BGl_string3622z00zz__aesz00, BgL_g1222z00_1432);
												FAILURE(BgL_auxz00_7001, BFALSE, BFALSE);
											}
										BgL_res2493z00_3092 =
											BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
											(BGl_readzd2stringzd2zz__r4_input_6_10_2z00
											(BgL_inputzd2portzd2_3086), BgL_passwordz00_3087,
											BgL_nbitsz00_1437);
									}
									return BgL_res2493z00_3092;
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



/* aes-ctr-decrypt-port */
	BGL_EXPORTED_DEF obj_t BGl_aeszd2ctrzd2decryptzd2portzd2zz__aesz00(obj_t
		BgL_inputzd2portzd2_48, obj_t BgL_passwordz00_49, obj_t BgL_nbitsz00_50)
	{
		{	/* Unsafe/aes.scm 170 */
			return
				BGl_z52aeszd2ctrzd2decryptz52zz__aesz00
				(BGl_readzd2stringzd2zz__r4_input_6_10_2z00(BgL_inputzd2portzd2_48),
				BgL_passwordz00_49, BgL_nbitsz00_50);
		}

	}



/* %aes-ctr-encrypt */
	obj_t BGl_z52aeszd2ctrzd2encryptz52zz__aesz00(obj_t BgL_plaintextz00_55,
		obj_t BgL_passwordz00_56, obj_t BgL_nbitsz00_57)
	{
		{	/* Unsafe/aes.scm 236 */
			if (CBOOL(BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BgL_nbitsz00_57,
						CNST_TABLE_REF(((long) 4)))))
				{	/* Unsafe/aes.scm 239 */
					BFALSE;
				}
			else
				{	/* Unsafe/aes.scm 239 */
					BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
						BGl_string3635z00zz__aesz00, BgL_nbitsz00_57);
				}
			{	/* Unsafe/aes.scm 243 */
				bool_t BgL_test3738z00_7017;

				if (STRINGP(BgL_plaintextz00_55))
					{	/* Unsafe/aes.scm 243 */
						BgL_test3738z00_7017 = ((bool_t) 1);
					}
				else
					{	/* Unsafe/aes.scm 243 */
						bool_t BgL_res2498z00_3104;

						BgL_res2498z00_3104 = BGL_MMAPP(BgL_plaintextz00_55);
						BgL_test3738z00_7017 = BgL_res2498z00_3104;
					}
				if (BgL_test3738z00_7017)
					{	/* Unsafe/aes.scm 243 */
						BFALSE;
					}
				else
					{	/* Unsafe/aes.scm 243 */
						BGl_bigloozd2typezd2errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
							BGl_string3636z00zz__aesz00, BgL_plaintextz00_55);
			}}
			{	/* Unsafe/aes.scm 247 */
				obj_t BgL_statez00_1453;

				{	/* Unsafe/aes.scm 247 */
					obj_t BgL_res2502z00_3119;

					{	/* Unsafe/aes.scm 411 */
						obj_t BgL_vz00_3105;

						BgL_vz00_3105 = make_vector(((long) 4), BUNSPEC);
						{
							long BgL_iz00_3108;

							BgL_iz00_3108 = ((long) 0);
						BgL_loopzd2izd21073z00_3107:
							if ((BgL_iz00_3108 < ((long) 4)))
								{	/* Unsafe/aes.scm 412 */
									{	/* Unsafe/aes.scm 413 */
										obj_t BgL_arg1491z00_3110;

										BgL_arg1491z00_3110 =
											BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4),
											(uint8_t) (((long) 0)));
										VECTOR_SET(BgL_vz00_3105, BgL_iz00_3108,
											BgL_arg1491z00_3110);
									}
									{
										long BgL_iz00_7029;

										BgL_iz00_7029 = (BgL_iz00_3108 + ((long) 1));
										BgL_iz00_3108 = BgL_iz00_7029;
										goto BgL_loopzd2izd21073z00_3107;
									}
								}
							else
								{	/* Unsafe/aes.scm 412 */
									((bool_t) 0);
								}
						}
						BgL_res2502z00_3119 = BgL_vz00_3105;
					}
					BgL_statez00_1453 = BgL_res2502z00_3119;
				}
				{	/* Unsafe/aes.scm 247 */
					int BgL_lenz00_1454;

					if (STRINGP(BgL_plaintextz00_55))
						{	/* Unsafe/aes.scm 248 */
							BgL_lenz00_1454 =
								CINT(PROCEDURE_ENTRY
								(BGl_stringzd2lengthzd2envz00zz__r4_strings_6_7z00)
								(BGl_stringzd2lengthzd2envz00zz__r4_strings_6_7z00,
									BgL_plaintextz00_55, BEOA));
						}
					else
						{	/* Unsafe/aes.scm 248 */
							bool_t BgL_test3742z00_7038;

							{	/* Unsafe/aes.scm 249 */
								bool_t BgL_res2504z00_3121;

								BgL_res2504z00_3121 = BGL_MMAPP(BgL_plaintextz00_55);
								BgL_test3742z00_7038 = BgL_res2504z00_3121;
							}
							if (BgL_test3742z00_7038)
								{	/* Unsafe/aes.scm 248 */
									BgL_lenz00_1454 =
										CINT(PROCEDURE_ENTRY(BGl_mmapzd2lengthzd2envz00zz__mmapz00)
										(BGl_mmapzd2lengthzd2envz00zz__mmapz00, BgL_plaintextz00_55,
											BEOA));
								}
							else
								{	/* Unsafe/aes.scm 248 */
									BgL_lenz00_1454 = (int) (((long) 0));
						}}
					{	/* Unsafe/aes.scm 248 */
						obj_t BgL_keyz00_1455;

						BgL_keyz00_1455 =
							BGl_aeszd2passwordzd2ze3keyze3zz__aesz00(BgL_passwordz00_56,
							CINT(BgL_nbitsz00_57), BgL_statez00_1453);
						{	/* Unsafe/aes.scm 251 */
							long BgL_blockcountz00_1456;

							{	/* Unsafe/aes.scm 226 */
								obj_t BgL_rz00_3123;

								BgL_rz00_3123 =
									BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_lenz00_1454),
									BINT((int) (((long) 16))));
								if (INTEGERP(BgL_rz00_3123))
									{	/* Unsafe/aes.scm 227 */
										BgL_blockcountz00_1456 = (long) CINT(BgL_rz00_3123);
									}
								else
									{	/* Unsafe/aes.scm 227 */
										BgL_blockcountz00_1456 =
											(long) (REAL_TO_DOUBLE(BGl_ceilingz00zz__r4_numbers_6_5z00
												(BgL_rz00_3123)));
							}}
							{	/* Unsafe/aes.scm 256 */
								obj_t BgL_counterblockz00_1457;

								{	/* Unsafe/aes.scm 257 */
									int BgL_arg1430z00_1589;

									BgL_arg1430z00_1589 = (int) (((long) 16));
									{	/* Llib/srfi4.scm 447 */

										BgL_counterblockz00_1457 =
											BGl_makezd2u8vectorzd2zz__srfi4z00(
											(long) (BgL_arg1430z00_1589), (uint8_t) (0));
								}}
								{	/* Unsafe/aes.scm 257 */
									long BgL_noncez00_1458;

									BgL_noncez00_1458 = bgl_current_seconds();
									{	/* Unsafe/aes.scm 258 */
										obj_t BgL_keyschedulez00_1459;

										BgL_keyschedulez00_1459 =
											BGl_aeszd2keyzd2expansionz00zz__aesz00(BgL_keyz00_1455);
										{	/* Unsafe/aes.scm 262 */
											obj_t BgL_ciphertextz00_1460;

											{	/* Unsafe/aes.scm 265 */
												long BgL_arg1428z00_1585;

												BgL_arg1428z00_1585 =
													(
													(long) (
														(int) (((long) 8))) + (long) (BgL_lenz00_1454));
												{	/* Ieee/string.scm 168 */

													BgL_ciphertextz00_1460 =
														make_string(BgL_arg1428z00_1585,
														((unsigned char) ' '));
											}}
											{	/* Unsafe/aes.scm 265 */

												{	/* Unsafe/aes.scm 269 */
													long BgL_sz00_1462;

													{	/* Unsafe/aes.scm 269 */
														long BgL_arg1345z00_1464;

														{	/* Unsafe/aes.scm 269 */
															long BgL_nz00_3143;

															BgL_nz00_3143 =
																(BgL_noncez00_1458 >>
																(int) ((((long) 0) * ((long) 8))));
															if ((BgL_nz00_3143 < ((long) 0)))
																{	/* Unsafe/aes.scm 269 */
																	BgL_arg1345z00_1464 = NEG(BgL_nz00_3143);
																}
															else
																{	/* Unsafe/aes.scm 269 */
																	BgL_arg1345z00_1464 = BgL_nz00_3143;
																}
														}
														{	/* Unsafe/aes.scm 269 */
															long BgL_res2519z00_3152;

															BgL_res2519z00_3152 =
																(long) (BgL_arg1345z00_1464);
															BgL_sz00_1462 = BgL_res2519z00_3152;
													}}
													{	/* Unsafe/aes.scm 270 */
														long BgL_arg1344z00_1463;

														BgL_arg1344z00_1463 =
															(BgL_sz00_1462 & ((long) 255));
														{	/* Unsafe/aes.scm 270 */
															uint8_t BgL_tmpz00_7076;

															BgL_tmpz00_7076 = (uint8_t) (BgL_arg1344z00_1463);
															BGL_U8VSET(BgL_counterblockz00_1457, ((long) 0),
																BgL_tmpz00_7076);
														} BUNSPEC;
												}}
												{	/* Unsafe/aes.scm 275 */
													long BgL_arg1348z00_1468;
													long BgL_arg1350z00_1469;

													BgL_arg1348z00_1468 = (((long) 0) + ((long) 4));
													BgL_arg1350z00_1469 = (((long) 0) & ((long) 255));
													{	/* Unsafe/aes.scm 275 */
														uint8_t BgL_tmpz00_7081;

														BgL_tmpz00_7081 = (uint8_t) (BgL_arg1350z00_1469);
														BGL_U8VSET(BgL_counterblockz00_1457,
															BgL_arg1348z00_1468, BgL_tmpz00_7081);
													} BUNSPEC;
												}
												{	/* Unsafe/aes.scm 269 */
													long BgL_sz00_1471;

													{	/* Unsafe/aes.scm 269 */
														long BgL_arg1352z00_1473;

														{	/* Unsafe/aes.scm 269 */
															long BgL_nz00_3164;

															BgL_nz00_3164 =
																(BgL_noncez00_1458 >>
																(int) ((((long) 1) * ((long) 8))));
															if ((BgL_nz00_3164 < ((long) 0)))
																{	/* Unsafe/aes.scm 269 */
																	BgL_arg1352z00_1473 = NEG(BgL_nz00_3164);
																}
															else
																{	/* Unsafe/aes.scm 269 */
																	BgL_arg1352z00_1473 = BgL_nz00_3164;
																}
														}
														{	/* Unsafe/aes.scm 269 */
															long BgL_res2528z00_3173;

															BgL_res2528z00_3173 =
																(long) (BgL_arg1352z00_1473);
															BgL_sz00_1471 = BgL_res2528z00_3173;
													}}
													{	/* Unsafe/aes.scm 270 */
														long BgL_arg1351z00_1472;

														BgL_arg1351z00_1472 =
															(BgL_sz00_1471 & ((long) 255));
														{	/* Unsafe/aes.scm 270 */
															uint8_t BgL_tmpz00_7092;

															BgL_tmpz00_7092 = (uint8_t) (BgL_arg1351z00_1472);
															BGL_U8VSET(BgL_counterblockz00_1457, ((long) 1),
																BgL_tmpz00_7092);
														} BUNSPEC;
												}}
												{	/* Unsafe/aes.scm 275 */
													long BgL_arg1355z00_1477;
													long BgL_arg1356z00_1478;

													BgL_arg1355z00_1477 = (((long) 1) + ((long) 4));
													BgL_arg1356z00_1478 = (((long) 0) & ((long) 255));
													{	/* Unsafe/aes.scm 275 */
														uint8_t BgL_tmpz00_7097;

														BgL_tmpz00_7097 = (uint8_t) (BgL_arg1356z00_1478);
														BGL_U8VSET(BgL_counterblockz00_1457,
															BgL_arg1355z00_1477, BgL_tmpz00_7097);
													} BUNSPEC;
												}
												{	/* Unsafe/aes.scm 269 */
													long BgL_sz00_1480;

													{	/* Unsafe/aes.scm 269 */
														long BgL_arg1359z00_1482;

														{	/* Unsafe/aes.scm 269 */
															long BgL_nz00_3185;

															BgL_nz00_3185 =
																(BgL_noncez00_1458 >>
																(int) ((((long) 2) * ((long) 8))));
															if ((BgL_nz00_3185 < ((long) 0)))
																{	/* Unsafe/aes.scm 269 */
																	BgL_arg1359z00_1482 = NEG(BgL_nz00_3185);
																}
															else
																{	/* Unsafe/aes.scm 269 */
																	BgL_arg1359z00_1482 = BgL_nz00_3185;
																}
														}
														{	/* Unsafe/aes.scm 269 */
															long BgL_res2537z00_3194;

															BgL_res2537z00_3194 =
																(long) (BgL_arg1359z00_1482);
															BgL_sz00_1480 = BgL_res2537z00_3194;
													}}
													{	/* Unsafe/aes.scm 270 */
														long BgL_arg1357z00_1481;

														BgL_arg1357z00_1481 =
															(BgL_sz00_1480 & ((long) 255));
														{	/* Unsafe/aes.scm 270 */
															uint8_t BgL_tmpz00_7108;

															BgL_tmpz00_7108 = (uint8_t) (BgL_arg1357z00_1481);
															BGL_U8VSET(BgL_counterblockz00_1457, ((long) 2),
																BgL_tmpz00_7108);
														} BUNSPEC;
												}}
												{	/* Unsafe/aes.scm 275 */
													long BgL_arg1362z00_1486;
													long BgL_arg1363z00_1487;

													BgL_arg1362z00_1486 = (((long) 2) + ((long) 4));
													BgL_arg1363z00_1487 = (((long) 0) & ((long) 255));
													{	/* Unsafe/aes.scm 275 */
														uint8_t BgL_tmpz00_7113;

														BgL_tmpz00_7113 = (uint8_t) (BgL_arg1363z00_1487);
														BGL_U8VSET(BgL_counterblockz00_1457,
															BgL_arg1362z00_1486, BgL_tmpz00_7113);
													} BUNSPEC;
												}
												{	/* Unsafe/aes.scm 269 */
													long BgL_sz00_1489;

													{	/* Unsafe/aes.scm 269 */
														long BgL_arg1365z00_1491;

														{	/* Unsafe/aes.scm 269 */
															long BgL_nz00_3206;

															BgL_nz00_3206 =
																(BgL_noncez00_1458 >>
																(int) ((((long) 3) * ((long) 8))));
															if ((BgL_nz00_3206 < ((long) 0)))
																{	/* Unsafe/aes.scm 269 */
																	BgL_arg1365z00_1491 = NEG(BgL_nz00_3206);
																}
															else
																{	/* Unsafe/aes.scm 269 */
																	BgL_arg1365z00_1491 = BgL_nz00_3206;
																}
														}
														{	/* Unsafe/aes.scm 269 */
															long BgL_res2546z00_3215;

															BgL_res2546z00_3215 =
																(long) (BgL_arg1365z00_1491);
															BgL_sz00_1489 = BgL_res2546z00_3215;
													}}
													{	/* Unsafe/aes.scm 270 */
														long BgL_arg1364z00_1490;

														BgL_arg1364z00_1490 =
															(BgL_sz00_1489 & ((long) 255));
														{	/* Unsafe/aes.scm 270 */
															uint8_t BgL_tmpz00_7124;

															BgL_tmpz00_7124 = (uint8_t) (BgL_arg1364z00_1490);
															BGL_U8VSET(BgL_counterblockz00_1457, ((long) 3),
																BgL_tmpz00_7124);
														} BUNSPEC;
												}}
												{	/* Unsafe/aes.scm 275 */
													long BgL_arg1370z00_1495;
													long BgL_arg1371z00_1496;

													BgL_arg1370z00_1495 = (((long) 3) + ((long) 4));
													BgL_arg1371z00_1496 = (((long) 0) & ((long) 255));
													{	/* Unsafe/aes.scm 275 */
														uint8_t BgL_tmpz00_7129;

														BgL_tmpz00_7129 = (uint8_t) (BgL_arg1371z00_1496);
														BGL_U8VSET(BgL_counterblockz00_1457,
															BgL_arg1370z00_1495, BgL_tmpz00_7129);
													} BUNSPEC;
												}
												{
													long BgL_bz00_1498;

													BgL_bz00_1498 = ((long) 0);
												BgL_zc3z04anonymousza31372ze3z87_1499:
													if ((BgL_bz00_1498 < BgL_blockcountz00_1456))
														{	/* Unsafe/aes.scm 277 */
															{	/* Unsafe/aes.scm 282 */
																long BgL_jz00_1502;

																BgL_jz00_1502 = (((long) 0) * ((long) 8));
																{	/* Unsafe/aes.scm 283 */
																	long BgL_sz00_1503;

																	BgL_sz00_1503 =
																		(
																		(long) (
																			((unsigned long) (BgL_bz00_1498) >>
																				(int) (BgL_jz00_1502))) & ((long) 255));
																	{	/* Unsafe/aes.scm 284 */
																		long BgL_arg1374z00_1504;

																		BgL_arg1374z00_1504 =
																			(((long) 15) - ((long) 0));
																		{	/* Unsafe/aes.scm 284 */
																			uint8_t BgL_tmpz00_7141;

																			BgL_tmpz00_7141 =
																				(uint8_t) (BgL_sz00_1503);
																			BGL_U8VSET(BgL_counterblockz00_1457,
																				BgL_arg1374z00_1504, BgL_tmpz00_7141);
																		} BUNSPEC;
																	}
																	{	/* Unsafe/aes.scm 286 */
																		long BgL_arg1375z00_1505;

																		BgL_arg1375z00_1505 =
																			(((long) 15) - (((long) 0) + ((long) 4)));
																		{	/* Unsafe/aes.scm 286 */
																			uint8_t BgL_tmpz00_7146;

																			BgL_tmpz00_7146 = (uint8_t) (((long) 0));
																			BGL_U8VSET(BgL_counterblockz00_1457,
																				BgL_arg1375z00_1505, BgL_tmpz00_7146);
																		} BUNSPEC;
															}}}
															{	/* Unsafe/aes.scm 282 */
																long BgL_jz00_1509;

																BgL_jz00_1509 = (((long) 1) * ((long) 8));
																{	/* Unsafe/aes.scm 283 */
																	long BgL_sz00_1510;

																	BgL_sz00_1510 =
																		(
																		(long) (
																			((unsigned long) (BgL_bz00_1498) >>
																				(int) (BgL_jz00_1509))) & ((long) 255));
																	{	/* Unsafe/aes.scm 284 */
																		long BgL_arg1378z00_1511;

																		BgL_arg1378z00_1511 =
																			(((long) 15) - ((long) 1));
																		{	/* Unsafe/aes.scm 284 */
																			uint8_t BgL_tmpz00_7156;

																			BgL_tmpz00_7156 =
																				(uint8_t) (BgL_sz00_1510);
																			BGL_U8VSET(BgL_counterblockz00_1457,
																				BgL_arg1378z00_1511, BgL_tmpz00_7156);
																		} BUNSPEC;
																	}
																	{	/* Unsafe/aes.scm 286 */
																		long BgL_arg1379z00_1512;

																		BgL_arg1379z00_1512 =
																			(((long) 15) - (((long) 1) + ((long) 4)));
																		{	/* Unsafe/aes.scm 286 */
																			uint8_t BgL_tmpz00_7161;

																			BgL_tmpz00_7161 = (uint8_t) (((long) 0));
																			BGL_U8VSET(BgL_counterblockz00_1457,
																				BgL_arg1379z00_1512, BgL_tmpz00_7161);
																		} BUNSPEC;
															}}}
															{	/* Unsafe/aes.scm 282 */
																long BgL_jz00_1516;

																BgL_jz00_1516 = (((long) 2) * ((long) 8));
																{	/* Unsafe/aes.scm 283 */
																	long BgL_sz00_1517;

																	BgL_sz00_1517 =
																		(
																		(long) (
																			((unsigned long) (BgL_bz00_1498) >>
																				(int) (BgL_jz00_1516))) & ((long) 255));
																	{	/* Unsafe/aes.scm 284 */
																		long BgL_arg1382z00_1518;

																		BgL_arg1382z00_1518 =
																			(((long) 15) - ((long) 2));
																		{	/* Unsafe/aes.scm 284 */
																			uint8_t BgL_tmpz00_7171;

																			BgL_tmpz00_7171 =
																				(uint8_t) (BgL_sz00_1517);
																			BGL_U8VSET(BgL_counterblockz00_1457,
																				BgL_arg1382z00_1518, BgL_tmpz00_7171);
																		} BUNSPEC;
																	}
																	{	/* Unsafe/aes.scm 286 */
																		long BgL_arg1383z00_1519;

																		BgL_arg1383z00_1519 =
																			(((long) 15) - (((long) 2) + ((long) 4)));
																		{	/* Unsafe/aes.scm 286 */
																			uint8_t BgL_tmpz00_7176;

																			BgL_tmpz00_7176 = (uint8_t) (((long) 0));
																			BGL_U8VSET(BgL_counterblockz00_1457,
																				BgL_arg1383z00_1519, BgL_tmpz00_7176);
																		} BUNSPEC;
															}}}
															{	/* Unsafe/aes.scm 282 */
																long BgL_jz00_1523;

																BgL_jz00_1523 = (((long) 3) * ((long) 8));
																{	/* Unsafe/aes.scm 283 */
																	long BgL_sz00_1524;

																	BgL_sz00_1524 =
																		(
																		(long) (
																			((unsigned long) (BgL_bz00_1498) >>
																				(int) (BgL_jz00_1523))) & ((long) 255));
																	{	/* Unsafe/aes.scm 284 */
																		long BgL_arg1386z00_1525;

																		BgL_arg1386z00_1525 =
																			(((long) 15) - ((long) 3));
																		{	/* Unsafe/aes.scm 284 */
																			uint8_t BgL_tmpz00_7186;

																			BgL_tmpz00_7186 =
																				(uint8_t) (BgL_sz00_1524);
																			BGL_U8VSET(BgL_counterblockz00_1457,
																				BgL_arg1386z00_1525, BgL_tmpz00_7186);
																		} BUNSPEC;
																	}
																	{	/* Unsafe/aes.scm 286 */
																		long BgL_arg1387z00_1526;

																		BgL_arg1387z00_1526 =
																			(((long) 15) - (((long) 3) + ((long) 4)));
																		{	/* Unsafe/aes.scm 286 */
																			uint8_t BgL_tmpz00_7191;

																			BgL_tmpz00_7191 = (uint8_t) (((long) 0));
																			BGL_U8VSET(BgL_counterblockz00_1457,
																				BgL_arg1387z00_1526, BgL_tmpz00_7191);
																		} BUNSPEC;
															}}}
															{	/* Unsafe/aes.scm 288 */
																obj_t BgL_ciphercntrz00_1529;

																BgL_ciphercntrz00_1529 =
																	BGl_aeszd2cipherzd2zz__aesz00
																	(BgL_counterblockz00_1457,
																	BgL_keyschedulez00_1459, BgL_statez00_1453);
																{	/* Unsafe/aes.scm 288 */
																	int BgL_blocklengthz00_1530;

																	if (
																		(BgL_bz00_1498 <
																			(BgL_blockcountz00_1456 - ((long) 1))))
																		{	/* Unsafe/aes.scm 289 */
																			BgL_blocklengthz00_1530 =
																				(int) (((long) 16));
																		}
																	else
																		{	/* Unsafe/aes.scm 291 */
																			obj_t BgL_arg1415z00_1569;

																			{	/* Unsafe/aes.scm 291 */
																				long BgL_arg1416z00_1570;
																				int BgL_arg1417z00_1571;

																				BgL_arg1416z00_1570 =
																					(
																					(long) (BgL_lenz00_1454) -
																					((long) 1));
																				BgL_arg1417z00_1571 =
																					(int) (((long) 16));
																				BgL_arg1415z00_1569 =
																					BGl_remainderz00zz__r4_numbers_6_5_fixnumz00
																					(BINT(BgL_arg1416z00_1570),
																					BINT(BgL_arg1417z00_1571));
																			}
																			BgL_blocklengthz00_1530 =
																				(int) (
																				((long) CINT(BgL_arg1415z00_1569) +
																					((long) 1)));
																		}
																	{	/* Unsafe/aes.scm 289 */
																		long BgL_startz00_1531;

																		BgL_startz00_1531 =
																			(
																			(long) (
																				(int) (((long) 8))) +
																			(BgL_bz00_1498 *
																				(long) ((int) (((long) 16)))));
																		{	/* Unsafe/aes.scm 292 */

																			if (STRINGP(BgL_plaintextz00_55))
																				{	/* Unsafe/aes.scm 294 */
																					obj_t BgL_refz00_1533;

																					BgL_refz00_1533 =
																						BGl_u8stringzd2refzd2envz00zz__aesz00;
																					{
																						long BgL_iz00_1535;

																						{	/* Unsafe/aes.scm 296 */
																							bool_t BgL_tmpz00_7216;

																							BgL_iz00_1535 = ((long) 0);
																						BgL_zc3z04anonymousza31391ze3z87_1536:
																							if (
																								(BgL_iz00_1535 <
																									(long)
																									(BgL_blocklengthz00_1530)))
																								{	/* Unsafe/aes.scm 296 */
																									{	/* Unsafe/aes.scm 297 */
																										long BgL_jz00_1538;

																										BgL_jz00_1538 =
																											(
																											(BgL_bz00_1498 *
																												(long) (
																													(int) (((long) 16))))
																											+ BgL_iz00_1535);
																										{	/* Unsafe/aes.scm 297 */
																											int BgL_pz00_1539;

																											BgL_pz00_1539 =
																												BGl_z62u8stringzd2refzb0zz__aesz00
																												(BgL_refz00_1533,
																												BgL_plaintextz00_55,
																												BgL_jz00_1538);
																											{	/* Unsafe/aes.scm 298 */
																												long BgL_bytez00_1540;

																												{	/* Unsafe/aes.scm 299 */
																													long
																														BgL_arg1394z00_1542;
																													{	/* Unsafe/aes.scm 299 */
																														uint8_t
																															BgL_arg1395z00_1543;
																														{	/* Unsafe/aes.scm 299 */
																															uint8_t
																																BgL_res2590z00_3309;
																															BgL_res2590z00_3309
																																=
																																BGL_U8VREF
																																(BgL_ciphercntrz00_1529,
																																BgL_iz00_1535);
																															BgL_arg1395z00_1543
																																=
																																BgL_res2590z00_3309;
																														}
																														{	/* Unsafe/aes.scm 299 */
																															long
																																BgL_res2592z00_3314;
																															{	/* Unsafe/aes.scm 299 */
																																long
																																	BgL_arg2392z00_3311;
																																BgL_arg2392z00_3311
																																	=
																																	(long)
																																	(BgL_arg1395z00_1543);
																																{	/* Unsafe/aes.scm 299 */
																																	long
																																		BgL_res2591z00_3313;
																																	BgL_res2591z00_3313
																																		=
																																		(long)
																																		(BgL_arg2392z00_3311);
																																	BgL_res2592z00_3314
																																		=
																																		BgL_res2591z00_3313;
																															}}
																															BgL_arg1394z00_1542
																																=
																																BgL_res2592z00_3314;
																													}}
																													BgL_bytez00_1540 =
																														(
																														(long)
																														(BgL_pz00_1539) ^
																														BgL_arg1394z00_1542);
																												}
																												{	/* Unsafe/aes.scm 299 */

																													{	/* Unsafe/aes.scm 300 */
																														long
																															BgL_arg1393z00_1541;
																														BgL_arg1393z00_1541
																															=
																															(BgL_iz00_1535 +
																															BgL_startz00_1531);
																														{	/* Unsafe/aes.scm 300 */
																															int BgL_iz00_3322;
																															int BgL_vz00_3323;

																															BgL_iz00_3322 =
																																(int)
																																(BgL_arg1393z00_1541);
																															BgL_vz00_3323 =
																																(int)
																																(BgL_bytez00_1540);
																															{	/* Unsafe/aes.scm 438 */
																																unsigned char
																																	BgL_auxz00_7239;
																																long
																																	BgL_tmpz00_7237;
																																BgL_auxz00_7239
																																	=
																																	((long)
																																	(BgL_vz00_3323));
																																BgL_tmpz00_7237
																																	=
																																	(long)
																																	(BgL_iz00_3322);
																																STRING_SET
																																	(BgL_ciphertextz00_1460,
																																	BgL_tmpz00_7237,
																																	BgL_auxz00_7239);
																									}}}}}}}
																									{
																										long BgL_iz00_7243;

																										BgL_iz00_7243 =
																											(BgL_iz00_1535 +
																											((long) 1));
																										BgL_iz00_1535 =
																											BgL_iz00_7243;
																										goto
																											BgL_zc3z04anonymousza31391ze3z87_1536;
																									}
																								}
																							else
																								{	/* Unsafe/aes.scm 296 */
																									BgL_tmpz00_7216 =
																										((bool_t) 0);
																								}
																							BBOOL(BgL_tmpz00_7216);
																						}
																					}
																				}
																			else
																				{	/* Unsafe/aes.scm 294 */
																					bool_t BgL_test3752z00_7246;

																					{	/* Unsafe/aes.scm 295 */
																						bool_t BgL_res2597z00_3332;

																						BgL_res2597z00_3332 =
																							BGL_MMAPP(BgL_plaintextz00_55);
																						BgL_test3752z00_7246 =
																							BgL_res2597z00_3332;
																					}
																					if (BgL_test3752z00_7246)
																						{
																							long BgL_iz00_1551;

																							{	/* Unsafe/aes.scm 296 */
																								bool_t BgL_tmpz00_7248;

																								BgL_iz00_1551 = ((long) 0);
																							BgL_zc3z04anonymousza31400ze3z87_1552:
																								if (
																									(BgL_iz00_1551 <
																										(long)
																										(BgL_blocklengthz00_1530)))
																									{	/* Unsafe/aes.scm 296 */
																										{	/* Unsafe/aes.scm 297 */
																											long BgL_jz00_1554;

																											BgL_jz00_1554 =
																												(
																												(BgL_bz00_1498 *
																													(long) (
																														(int) (((long)
																																16)))) +
																												BgL_iz00_1551);
																											{	/* Unsafe/aes.scm 297 */
																												obj_t BgL_pz00_1555;

																												BgL_pz00_1555 =
																													PROCEDURE_ENTRY
																													(BGl_mmapzd2refzd2envz00zz__mmapz00)
																													(BGl_mmapzd2refzd2envz00zz__mmapz00,
																													BgL_plaintextz00_55,
																													BINT(BgL_jz00_1554),
																													BEOA);
																												{	/* Unsafe/aes.scm 298 */
																													long BgL_bytez00_1556;

																													{	/* Unsafe/aes.scm 299 */
																														long
																															BgL_arg1404z00_1558;
																														{	/* Unsafe/aes.scm 299 */
																															uint8_t
																																BgL_arg1405z00_1559;
																															{	/* Unsafe/aes.scm 299 */
																																uint8_t
																																	BgL_res2602z00_3345;
																																BgL_res2602z00_3345
																																	=
																																	BGL_U8VREF
																																	(BgL_ciphercntrz00_1529,
																																	BgL_iz00_1551);
																																BgL_arg1405z00_1559
																																	=
																																	BgL_res2602z00_3345;
																															}
																															{	/* Unsafe/aes.scm 299 */
																																long
																																	BgL_res2604z00_3350;
																																{	/* Unsafe/aes.scm 299 */
																																	long
																																		BgL_arg2392z00_3347;
																																	BgL_arg2392z00_3347
																																		=
																																		(long)
																																		(BgL_arg1405z00_1559);
																																	{	/* Unsafe/aes.scm 299 */
																																		long
																																			BgL_res2603z00_3349;
																																		BgL_res2603z00_3349
																																			=
																																			(long)
																																			(BgL_arg2392z00_3347);
																																		BgL_res2604z00_3350
																																			=
																																			BgL_res2603z00_3349;
																																}}
																																BgL_arg1404z00_1558
																																	=
																																	BgL_res2604z00_3350;
																														}}
																														BgL_bytez00_1556 =
																															(
																															(long)
																															CINT
																															(BgL_pz00_1555) ^
																															BgL_arg1404z00_1558);
																													}
																													{	/* Unsafe/aes.scm 299 */

																														{	/* Unsafe/aes.scm 300 */
																															long
																																BgL_arg1402z00_1557;
																															BgL_arg1402z00_1557
																																=
																																(BgL_iz00_1551 +
																																BgL_startz00_1531);
																															{	/* Unsafe/aes.scm 300 */
																																int
																																	BgL_iz00_3358;
																																int
																																	BgL_vz00_3359;
																																BgL_iz00_3358 =
																																	(int)
																																	(BgL_arg1402z00_1557);
																																BgL_vz00_3359 =
																																	(int)
																																	(BgL_bytez00_1556);
																																{	/* Unsafe/aes.scm 438 */
																																	unsigned char
																																		BgL_auxz00_7272;
																																	long
																																		BgL_tmpz00_7270;
																																	BgL_auxz00_7272
																																		=
																																		((long)
																																		(BgL_vz00_3359));
																																	BgL_tmpz00_7270
																																		=
																																		(long)
																																		(BgL_iz00_3358);
																																	STRING_SET
																																		(BgL_ciphertextz00_1460,
																																		BgL_tmpz00_7270,
																																		BgL_auxz00_7272);
																										}}}}}}}
																										{
																											long BgL_iz00_7276;

																											BgL_iz00_7276 =
																												(BgL_iz00_1551 +
																												((long) 1));
																											BgL_iz00_1551 =
																												BgL_iz00_7276;
																											goto
																												BgL_zc3z04anonymousza31400ze3z87_1552;
																										}
																									}
																								else
																									{	/* Unsafe/aes.scm 296 */
																										BgL_tmpz00_7248 =
																											((bool_t) 0);
																									}
																								BBOOL(BgL_tmpz00_7248);
																							}
																						}
																					else
																						{	/* Unsafe/aes.scm 294 */
																							BINT(((long) 0));
															}}}}}}
															{
																long BgL_bz00_7280;

																BgL_bz00_7280 = (BgL_bz00_1498 + ((long) 1));
																BgL_bz00_1498 = BgL_bz00_7280;
																goto BgL_zc3z04anonymousza31372ze3z87_1499;
															}
														}
													else
														{	/* Unsafe/aes.scm 277 */
															((bool_t) 0);
														}
												}
												{
													long BgL_iz00_3394;

													BgL_iz00_3394 = ((long) 0);
												BgL_loopzd2izd21066z00_3393:
													if ((BgL_iz00_3394 < (long) ((int) (((long) 8)))))
														{	/* Unsafe/aes.scm 303 */
															{	/* Unsafe/aes.scm 304 */
																long BgL_arg1424z00_3401;

																{	/* Unsafe/aes.scm 304 */
																	uint8_t BgL_arg1425z00_3402;

																	{	/* Unsafe/aes.scm 304 */
																		uint8_t BgL_res2612z00_3403;

																		BgL_res2612z00_3403 =
																			BGL_U8VREF(BgL_counterblockz00_1457,
																			BgL_iz00_3394);
																		BgL_arg1425z00_3402 = BgL_res2612z00_3403;
																	}
																	{	/* Unsafe/aes.scm 304 */
																		long BgL_res2614z00_3406;

																		{	/* Unsafe/aes.scm 304 */
																			long BgL_arg2392z00_3408;

																			BgL_arg2392z00_3408 =
																				(long) (BgL_arg1425z00_3402);
																			{	/* Unsafe/aes.scm 304 */
																				long BgL_res2613z00_3409;

																				BgL_res2613z00_3409 =
																					(long) (BgL_arg2392z00_3408);
																				BgL_res2614z00_3406 =
																					BgL_res2613z00_3409;
																		}}
																		BgL_arg1424z00_3401 = BgL_res2614z00_3406;
																}}
																{	/* Unsafe/aes.scm 304 */
																	int BgL_iz00_3412;
																	int BgL_vz00_3413;

																	BgL_iz00_3412 = (int) (BgL_iz00_3394);
																	BgL_vz00_3413 = (int) (BgL_arg1424z00_3401);
																	{	/* Unsafe/aes.scm 438 */
																		unsigned char BgL_auxz00_7293;
																		long BgL_tmpz00_7291;

																		BgL_auxz00_7293 = ((long) (BgL_vz00_3413));
																		BgL_tmpz00_7291 = (long) (BgL_iz00_3412);
																		STRING_SET(BgL_ciphertextz00_1460,
																			BgL_tmpz00_7291, BgL_auxz00_7293);
															}}}
															{
																long BgL_iz00_7297;

																BgL_iz00_7297 = (BgL_iz00_3394 + ((long) 1));
																BgL_iz00_3394 = BgL_iz00_7297;
																goto BgL_loopzd2izd21066z00_3393;
															}
														}
													else
														{	/* Unsafe/aes.scm 303 */
															((bool_t) 0);
														}
												}
												return BgL_ciphertextz00_1460;
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



/* %aes-ctr-decrypt */
	obj_t BGl_z52aeszd2ctrzd2decryptz52zz__aesz00(obj_t BgL_ciphertextz00_60,
		obj_t BgL_passwordz00_61, obj_t BgL_nbitsz00_62)
	{
		{	/* Unsafe/aes.scm 314 */
			if (CBOOL(BGl_memvz00zz__r4_pairs_and_lists_6_3z00(BgL_nbitsz00_62,
						CNST_TABLE_REF(((long) 4)))))
				{	/* Unsafe/aes.scm 317 */
					BFALSE;
				}
			else
				{	/* Unsafe/aes.scm 317 */
					BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 3)),
						BGl_string3635z00zz__aesz00, BgL_nbitsz00_62);
				}
			{	/* Unsafe/aes.scm 320 */
				obj_t BgL_statez00_1605;

				{	/* Unsafe/aes.scm 320 */
					obj_t BgL_res2620z00_3437;

					{	/* Unsafe/aes.scm 411 */
						obj_t BgL_vz00_3423;

						BgL_vz00_3423 = make_vector(((long) 4), BUNSPEC);
						{
							long BgL_iz00_3426;

							BgL_iz00_3426 = ((long) 0);
						BgL_loopzd2izd21073z00_3425:
							if ((BgL_iz00_3426 < ((long) 4)))
								{	/* Unsafe/aes.scm 412 */
									{	/* Unsafe/aes.scm 413 */
										obj_t BgL_arg1491z00_3428;

										BgL_arg1491z00_3428 =
											BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4),
											(uint8_t) (((long) 0)));
										VECTOR_SET(BgL_vz00_3423, BgL_iz00_3426,
											BgL_arg1491z00_3428);
									}
									{
										long BgL_iz00_7311;

										BgL_iz00_7311 = (BgL_iz00_3426 + ((long) 1));
										BgL_iz00_3426 = BgL_iz00_7311;
										goto BgL_loopzd2izd21073z00_3425;
									}
								}
							else
								{	/* Unsafe/aes.scm 412 */
									((bool_t) 0);
								}
						}
						BgL_res2620z00_3437 = BgL_vz00_3423;
					}
					BgL_statez00_1605 = BgL_res2620z00_3437;
				}
				{	/* Unsafe/aes.scm 320 */
					obj_t BgL_keyz00_1606;

					BgL_keyz00_1606 =
						BGl_aeszd2passwordzd2ze3keyze3zz__aesz00(BgL_passwordz00_61,
						CINT(BgL_nbitsz00_62), BgL_statez00_1605);
					{	/* Unsafe/aes.scm 321 */
						obj_t BgL_keyschedulez00_1607;

						BgL_keyschedulez00_1607 =
							BGl_aeszd2keyzd2expansionz00zz__aesz00(BgL_keyz00_1606);
						{	/* Unsafe/aes.scm 322 */
							int BgL_lenz00_1608;

							BgL_lenz00_1608 =
								(int) (
								(STRING_LENGTH(
										((obj_t) BgL_ciphertextz00_60)) -
									(long) ((int) (((long) 8)))));
							{	/* Unsafe/aes.scm 323 */
								obj_t BgL_blockcountz00_1609;

								{	/* Unsafe/aes.scm 226 */
									obj_t BgL_rz00_3445;

									BgL_rz00_3445 =
										BGl_2zf2zf2zz__r4_numbers_6_5z00(BINT(BgL_lenz00_1608),
										BINT((int) (((long) 16))));
									if (INTEGERP(BgL_rz00_3445))
										{	/* Unsafe/aes.scm 227 */
											BgL_blockcountz00_1609 = BgL_rz00_3445;
										}
									else
										{	/* Unsafe/aes.scm 227 */
											BgL_blockcountz00_1609 =
												BINT(
												(long) (REAL_TO_DOUBLE
													(BGl_ceilingz00zz__r4_numbers_6_5z00
														(BgL_rz00_3445))));
								}}
								{	/* Unsafe/aes.scm 324 */
									obj_t BgL_counterblockz00_1610;

									{	/* Unsafe/aes.scm 325 */
										int BgL_arg1484z00_1685;

										BgL_arg1484z00_1685 = (int) (((long) 16));
										{	/* Llib/srfi4.scm 447 */

											BgL_counterblockz00_1610 =
												BGl_makezd2u8vectorzd2zz__srfi4z00(
												(long) (BgL_arg1484z00_1685), (uint8_t) (0));
									}}
									{	/* Unsafe/aes.scm 325 */
										obj_t BgL_plaintextz00_1611;

										{	/* Ieee/string.scm 168 */

											BgL_plaintextz00_1611 =
												make_string(
												(long) (BgL_lenz00_1608), ((unsigned char) ' '));
										}
										{	/* Unsafe/aes.scm 326 */

											{
												long BgL_iz00_3471;

												BgL_iz00_3471 = ((long) 0);
											BgL_loopzd2izd21068z00_3470:
												if ((BgL_iz00_3471 < (long) ((int) (((long) 8)))))
													{	/* Unsafe/aes.scm 329 */
														{	/* Unsafe/aes.scm 330 */
															int BgL_arg1440z00_3478;

															BgL_arg1440z00_3478 =
																(int) (
																(STRING_REF(
																		((obj_t) BgL_ciphertextz00_60),
																		(long) ((int) (BgL_iz00_3471)))));
															{	/* Unsafe/aes.scm 330 */
																uint8_t BgL_tmpz00_7347;

																BgL_tmpz00_7347 =
																	(uint8_t) (BgL_arg1440z00_3478);
																BGL_U8VSET(BgL_counterblockz00_1610,
																	BgL_iz00_3471, BgL_tmpz00_7347);
															} BUNSPEC;
														}
														{
															long BgL_iz00_7350;

															BgL_iz00_7350 = (BgL_iz00_3471 + ((long) 1));
															BgL_iz00_3471 = BgL_iz00_7350;
															goto BgL_loopzd2izd21068z00_3470;
														}
													}
												else
													{	/* Unsafe/aes.scm 329 */
														((bool_t) 0);
													}
											}
											{
												long BgL_bz00_1622;

												BgL_bz00_1622 = ((long) 0);
											BgL_zc3z04anonymousza31443ze3z87_1623:
												if (
													(BgL_bz00_1622 < (long) CINT(BgL_blockcountz00_1609)))
													{	/* Unsafe/aes.scm 332 */
														{	/* Unsafe/aes.scm 334 */
															long BgL_vz00_1626;

															BgL_vz00_1626 =
																(
																(long) (
																	((unsigned long) (BgL_bz00_1622) >>
																		(int) (
																			(((long) 0) *
																				((long) 8))))) & ((long) 255));
															{	/* Unsafe/aes.scm 335 */
																long BgL_arg1445z00_1627;

																BgL_arg1445z00_1627 =
																	(((long) 15) - ((long) 0));
																{	/* Unsafe/aes.scm 335 */
																	uint8_t BgL_tmpz00_7362;

																	BgL_tmpz00_7362 = (uint8_t) (BgL_vz00_1626);
																	BGL_U8VSET(BgL_counterblockz00_1610,
																		BgL_arg1445z00_1627, BgL_tmpz00_7362);
																} BUNSPEC;
														}}
														{	/* Unsafe/aes.scm 338 */
															long BgL_arg1449z00_1631;

															BgL_arg1449z00_1631 =
																(((long) 15) - (((long) 0) + ((long) 4)));
															{	/* Unsafe/aes.scm 338 */
																uint8_t BgL_tmpz00_7367;

																BgL_tmpz00_7367 = (uint8_t) (((long) 0));
																BGL_U8VSET(BgL_counterblockz00_1610,
																	BgL_arg1449z00_1631, BgL_tmpz00_7367);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 334 */
															long BgL_vz00_1634;

															BgL_vz00_1634 =
																(
																(long) (
																	((unsigned long) (BgL_bz00_1622) >>
																		(int) (
																			(((long) 1) *
																				((long) 8))))) & ((long) 255));
															{	/* Unsafe/aes.scm 335 */
																long BgL_arg1452z00_1635;

																BgL_arg1452z00_1635 =
																	(((long) 15) - ((long) 1));
																{	/* Unsafe/aes.scm 335 */
																	uint8_t BgL_tmpz00_7377;

																	BgL_tmpz00_7377 = (uint8_t) (BgL_vz00_1634);
																	BGL_U8VSET(BgL_counterblockz00_1610,
																		BgL_arg1452z00_1635, BgL_tmpz00_7377);
																} BUNSPEC;
														}}
														{	/* Unsafe/aes.scm 338 */
															long BgL_arg1455z00_1639;

															BgL_arg1455z00_1639 =
																(((long) 15) - (((long) 1) + ((long) 4)));
															{	/* Unsafe/aes.scm 338 */
																uint8_t BgL_tmpz00_7382;

																BgL_tmpz00_7382 = (uint8_t) (((long) 0));
																BGL_U8VSET(BgL_counterblockz00_1610,
																	BgL_arg1455z00_1639, BgL_tmpz00_7382);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 334 */
															long BgL_vz00_1642;

															BgL_vz00_1642 =
																(
																(long) (
																	((unsigned long) (BgL_bz00_1622) >>
																		(int) (
																			(((long) 2) *
																				((long) 8))))) & ((long) 255));
															{	/* Unsafe/aes.scm 335 */
																long BgL_arg1457z00_1643;

																BgL_arg1457z00_1643 =
																	(((long) 15) - ((long) 2));
																{	/* Unsafe/aes.scm 335 */
																	uint8_t BgL_tmpz00_7392;

																	BgL_tmpz00_7392 = (uint8_t) (BgL_vz00_1642);
																	BGL_U8VSET(BgL_counterblockz00_1610,
																		BgL_arg1457z00_1643, BgL_tmpz00_7392);
																} BUNSPEC;
														}}
														{	/* Unsafe/aes.scm 338 */
															long BgL_arg1460z00_1647;

															BgL_arg1460z00_1647 =
																(((long) 15) - (((long) 2) + ((long) 4)));
															{	/* Unsafe/aes.scm 338 */
																uint8_t BgL_tmpz00_7397;

																BgL_tmpz00_7397 = (uint8_t) (((long) 0));
																BGL_U8VSET(BgL_counterblockz00_1610,
																	BgL_arg1460z00_1647, BgL_tmpz00_7397);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 334 */
															long BgL_vz00_1650;

															BgL_vz00_1650 =
																(
																(long) (
																	((unsigned long) (BgL_bz00_1622) >>
																		(int) (
																			(((long) 3) *
																				((long) 8))))) & ((long) 255));
															{	/* Unsafe/aes.scm 335 */
																long BgL_arg1462z00_1651;

																BgL_arg1462z00_1651 =
																	(((long) 15) - ((long) 3));
																{	/* Unsafe/aes.scm 335 */
																	uint8_t BgL_tmpz00_7407;

																	BgL_tmpz00_7407 = (uint8_t) (BgL_vz00_1650);
																	BGL_U8VSET(BgL_counterblockz00_1610,
																		BgL_arg1462z00_1651, BgL_tmpz00_7407);
																} BUNSPEC;
														}}
														{	/* Unsafe/aes.scm 338 */
															long BgL_arg1465z00_1655;

															BgL_arg1465z00_1655 =
																(((long) 15) - (((long) 3) + ((long) 4)));
															{	/* Unsafe/aes.scm 338 */
																uint8_t BgL_tmpz00_7412;

																BgL_tmpz00_7412 = (uint8_t) (((long) 0));
																BGL_U8VSET(BgL_counterblockz00_1610,
																	BgL_arg1465z00_1655, BgL_tmpz00_7412);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 339 */
															obj_t BgL_ciphercntrz00_1657;

															BgL_ciphercntrz00_1657 =
																BGl_aeszd2cipherzd2zz__aesz00
																(BgL_counterblockz00_1610,
																BgL_keyschedulez00_1607, BgL_statez00_1605);
															{	/* Unsafe/aes.scm 339 */
																int BgL_blocklengthz00_1658;

																if (
																	(BgL_bz00_1622 <
																		((long) CINT(BgL_blockcountz00_1609) -
																			((long) 1))))
																	{	/* Unsafe/aes.scm 340 */
																		BgL_blocklengthz00_1658 =
																			(int) (((long) 16));
																	}
																else
																	{	/* Unsafe/aes.scm 342 */
																		obj_t BgL_arg1477z00_1677;

																		{	/* Unsafe/aes.scm 342 */
																			long BgL_arg1478z00_1678;
																			int BgL_arg1479z00_1679;

																			BgL_arg1478z00_1678 =
																				((long) (BgL_lenz00_1608) - ((long) 1));
																			BgL_arg1479z00_1679 = (int) (((long) 16));
																			BgL_arg1477z00_1677 =
																				BGl_remainderz00zz__r4_numbers_6_5_fixnumz00
																				(BINT(BgL_arg1478z00_1678),
																				BINT(BgL_arg1479z00_1679));
																		}
																		BgL_blocklengthz00_1658 =
																			(int) (
																			((long) CINT(BgL_arg1477z00_1677) +
																				((long) 1)));
																	}
																{	/* Unsafe/aes.scm 340 */
																	long BgL_startz00_1659;

																	BgL_startz00_1659 =
																		(BgL_bz00_1622 *
																		(long) ((int) (((long) 16))));
																	{	/* Unsafe/aes.scm 343 */
																		long BgL_endz00_1660;

																		BgL_endz00_1660 =
																			(BgL_startz00_1659 +
																			(long) (BgL_blocklengthz00_1658));
																		{	/* Unsafe/aes.scm 344 */

																			{
																				long BgL_iz00_1662;

																				BgL_iz00_1662 = BgL_startz00_1659;
																			BgL_zc3z04anonymousza31467ze3z87_1663:
																				if ((BgL_iz00_1662 < BgL_endz00_1660))
																					{	/* Unsafe/aes.scm 345 */
																						{	/* Unsafe/aes.scm 346 */
																							int BgL_cipherz00_1665;

																							BgL_cipherz00_1665 =
																								(int) (
																								(STRING_REF(
																										((obj_t)
																											BgL_ciphertextz00_60),
																										(long) ((int) (
																												(BgL_iz00_1662 +
																													(long) ((int) (((long)
																																8)))))))));
																							{	/* Unsafe/aes.scm 346 */
																								long BgL_cntrbytez00_1666;

																								{	/* Unsafe/aes.scm 347 */
																									uint8_t BgL_arg1469z00_1668;

																									{	/* Unsafe/aes.scm 347 */
																										long BgL_arg1470z00_1669;

																										BgL_arg1470z00_1669 =
																											(BgL_iz00_1662 -
																											BgL_startz00_1659);
																										{	/* Unsafe/aes.scm 347 */
																											uint8_t
																												BgL_res2677z00_3585;
																											BgL_res2677z00_3585 =
																												BGL_U8VREF
																												(BgL_ciphercntrz00_1657,
																												BgL_arg1470z00_1669);
																											BgL_arg1469z00_1668 =
																												BgL_res2677z00_3585;
																									}}
																									{	/* Unsafe/aes.scm 347 */
																										long BgL_res2679z00_3590;

																										{	/* Unsafe/aes.scm 347 */
																											long BgL_arg2392z00_3587;

																											BgL_arg2392z00_3587 =
																												(long)
																												(BgL_arg1469z00_1668);
																											{	/* Unsafe/aes.scm 347 */
																												long
																													BgL_res2678z00_3589;
																												BgL_res2678z00_3589 =
																													(long)
																													(BgL_arg2392z00_3587);
																												BgL_res2679z00_3590 =
																													BgL_res2678z00_3589;
																										}}
																										BgL_cntrbytez00_1666 =
																											BgL_res2679z00_3590;
																								}}
																								{	/* Unsafe/aes.scm 347 */
																									long BgL_plainbytez00_1667;

																									BgL_plainbytez00_1667 =
																										(
																										(long) (BgL_cipherz00_1665)
																										^ BgL_cntrbytez00_1666);
																									{	/* Unsafe/aes.scm 348 */

																										{	/* Unsafe/aes.scm 349 */
																											int BgL_iz00_3595;
																											int BgL_vz00_3596;

																											BgL_iz00_3595 =
																												(int) (BgL_iz00_1662);
																											BgL_vz00_3596 =
																												(int)
																												(BgL_plainbytez00_1667);
																											{	/* Unsafe/aes.scm 438 */
																												unsigned char
																													BgL_auxz00_7456;
																												long BgL_tmpz00_7454;

																												BgL_auxz00_7456 =
																													(
																													(long)
																													(BgL_vz00_3596));
																												BgL_tmpz00_7454 =
																													(long)
																													(BgL_iz00_3595);
																												STRING_SET
																													(BgL_plaintextz00_1611,
																													BgL_tmpz00_7454,
																													BgL_auxz00_7456);
																						}}}}}}
																						{
																							long BgL_iz00_7460;

																							BgL_iz00_7460 =
																								(BgL_iz00_1662 + ((long) 1));
																							BgL_iz00_1662 = BgL_iz00_7460;
																							goto
																								BgL_zc3z04anonymousza31467ze3z87_1663;
																						}
																					}
																				else
																					{	/* Unsafe/aes.scm 345 */
																						((bool_t) 0);
																					}
																			}
																		}
																	}
																}
															}
														}
														{
															long BgL_bz00_7462;

															BgL_bz00_7462 = (BgL_bz00_1622 + ((long) 1));
															BgL_bz00_1622 = BgL_bz00_7462;
															goto BgL_zc3z04anonymousza31443ze3z87_1623;
														}
													}
												else
													{	/* Unsafe/aes.scm 332 */
														((bool_t) 0);
													}
											}
											return BgL_plaintextz00_1611;
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



/* &u8string-ref */
	int BGl_z62u8stringzd2refzb0zz__aesz00(obj_t BgL_envz00_6354,
		obj_t BgL_sz00_6355, long BgL_iz00_6356)
	{
		{	/* Unsafe/aes.scm 431 */
			{	/* Unsafe/aes.scm 432 */
				obj_t BgL_sz00_6467;
				int BgL_iz00_6468;

				if (STRINGP(BgL_sz00_6355))
					{	/* Unsafe/aes.scm 432 */
						BgL_sz00_6467 = BgL_sz00_6355;
					}
				else
					{
						obj_t BgL_auxz00_7466;

						BgL_auxz00_7466 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string3620z00zz__aesz00,
							BINT(((long) 19447)), BGl_string3637z00zz__aesz00,
							BGl_string3622z00zz__aesz00, BgL_sz00_6355);
						FAILURE(BgL_auxz00_7466, BFALSE, BFALSE);
					}
				BgL_iz00_6468 = (int) (BgL_iz00_6356);
				return (int) ((STRING_REF(BgL_sz00_6467, (long) (BgL_iz00_6468))));
		}}

	}



/* aes-password->key */
	obj_t BGl_aeszd2passwordzd2ze3keyze3zz__aesz00(obj_t BgL_passwordz00_79,
		int BgL_nbitsz00_80, obj_t BgL_statez00_81)
	{
		{	/* Unsafe/aes.scm 443 */
			{	/* Unsafe/aes.scm 444 */
				long BgL_nbytesz00_1705;

				BgL_nbytesz00_1705 = ((long) (BgL_nbitsz00_80) / ((long) 8));
				{	/* Unsafe/aes.scm 444 */
					obj_t BgL_uvecz00_1706;

					BgL_uvecz00_1706 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_nbytesz00_1705,
						(uint8_t) (((long) 0)));
					{	/* Unsafe/aes.scm 445 */
						obj_t BgL_shapassz00_1707;

						if ((STRING_LENGTH(BgL_passwordz00_79) < BgL_nbytesz00_1705))
							{	/* Unsafe/aes.scm 446 */
								BgL_shapassz00_1707 =
									string_append(BgL_passwordz00_79,
									BGl_sha1sumzd2stringzd2zz__sha1z00(BgL_passwordz00_79));
							}
						else
							{	/* Unsafe/aes.scm 446 */
								BgL_shapassz00_1707 = BgL_passwordz00_79;
							}
						{	/* Unsafe/aes.scm 449 */

							{
								long BgL_iz00_3678;

								BgL_iz00_3678 = ((long) 0);
							BgL_loopzd2izd21074z00_3677:
								if ((BgL_iz00_3678 < BgL_nbytesz00_1705))
									{	/* Unsafe/aes.scm 450 */
										{	/* Unsafe/aes.scm 451 */
											int BgL_arg1502z00_3683;

											BgL_arg1502z00_3683 =
												(int) (
												(STRING_REF(BgL_shapassz00_1707,
														(long) ((int) (BgL_iz00_3678)))));
											{	/* Unsafe/aes.scm 451 */
												uint8_t BgL_tmpz00_7491;

												BgL_tmpz00_7491 = (uint8_t) (BgL_arg1502z00_3683);
												BGL_U8VSET(BgL_uvecz00_1706, BgL_iz00_3678,
													BgL_tmpz00_7491);
											} BUNSPEC;
										}
										{
											long BgL_iz00_7494;

											BgL_iz00_7494 = (BgL_iz00_3678 + ((long) 1));
											BgL_iz00_3678 = BgL_iz00_7494;
											goto BgL_loopzd2izd21074z00_3677;
										}
									}
								else
									{	/* Unsafe/aes.scm 450 */
										((bool_t) 0);
									}
							}
							return
								BGl_aeszd2cipherzd2zz__aesz00(BgL_uvecz00_1706,
								BGl_aeszd2keyzd2expansionz00zz__aesz00(BgL_uvecz00_1706),
								BgL_statez00_81);
						}
					}
				}
			}
		}

	}



/* aes-key-expansion */
	obj_t BGl_aeszd2keyzd2expansionz00zz__aesz00(obj_t BgL_keyz00_82)
	{
		{	/* Unsafe/aes.scm 459 */
			{	/* Unsafe/aes.scm 461 */
				long BgL_nkz00_1722;

				{	/* Unsafe/aes.scm 462 */
					long BgL_arg1612z00_1836;

					{	/* Unsafe/aes.scm 462 */
						long BgL_res2702z00_3697;

						BgL_res2702z00_3697 = BGL_HVECTOR_LENGTH(BgL_keyz00_82);
						BgL_arg1612z00_1836 = BgL_res2702z00_3697;
					}
					BgL_nkz00_1722 = (BgL_arg1612z00_1836 / ((long) 4));
				}
				{	/* Unsafe/aes.scm 462 */
					long BgL_nrz00_1723;

					BgL_nrz00_1723 = (BgL_nkz00_1722 + ((long) 6));
					{	/* Unsafe/aes.scm 463 */
						obj_t BgL_wz00_1724;

						BgL_wz00_1724 =
							make_vector(
							(((long) 4) * (BgL_nrz00_1723 + ((long) 1))), BUNSPEC);
						{	/* Unsafe/aes.scm 464 */
							obj_t BgL_tempz00_1725;

							{	/* Llib/srfi4.scm 447 */

								BgL_tempz00_1725 =
									BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), (uint8_t) (0));
							}
							{	/* Unsafe/aes.scm 465 */

								{
									long BgL_iz00_1727;

									BgL_iz00_1727 = ((long) 0);
								BgL_zc3z04anonymousza31511ze3z87_1728:
									if ((BgL_iz00_1727 < BgL_nkz00_1722))
										{	/* Unsafe/aes.scm 467 */
											{	/* Unsafe/aes.scm 468 */
												long BgL_jz00_1730;

												BgL_jz00_1730 = (((long) 4) * BgL_iz00_1727);
												{	/* Unsafe/aes.scm 468 */
													obj_t BgL_rz00_1731;

													{	/* Unsafe/aes.scm 469 */
														long BgL_arg1513z00_1732;
														long BgL_arg1514z00_1733;
														long BgL_arg1515z00_1734;
														long BgL_arg1516z00_1735;

														{	/* Unsafe/aes.scm 469 */
															uint8_t BgL_arg1521z00_1740;

															{	/* Unsafe/aes.scm 469 */
																uint8_t BgL_res2710z00_3715;

																BgL_res2710z00_3715 =
																	BGL_U8VREF(BgL_keyz00_82, BgL_jz00_1730);
																BgL_arg1521z00_1740 = BgL_res2710z00_3715;
															}
															{	/* Unsafe/aes.scm 469 */
																long BgL_res2712z00_3720;

																{	/* Unsafe/aes.scm 469 */
																	long BgL_arg2392z00_3717;

																	BgL_arg2392z00_3717 =
																		(long) (BgL_arg1521z00_1740);
																	{	/* Unsafe/aes.scm 469 */
																		long BgL_res2711z00_3719;

																		BgL_res2711z00_3719 =
																			(long) (BgL_arg2392z00_3717);
																		BgL_res2712z00_3720 = BgL_res2711z00_3719;
																}}
																BgL_arg1513z00_1732 = BgL_res2712z00_3720;
														}}
														{	/* Unsafe/aes.scm 470 */
															uint8_t BgL_arg1523z00_1741;

															{	/* Unsafe/aes.scm 470 */
																long BgL_arg1524z00_1742;

																BgL_arg1524z00_1742 =
																	(BgL_jz00_1730 + ((long) 1));
																{	/* Unsafe/aes.scm 470 */
																	uint8_t BgL_res2714z00_3725;

																	BgL_res2714z00_3725 =
																		BGL_U8VREF(BgL_keyz00_82,
																		BgL_arg1524z00_1742);
																	BgL_arg1523z00_1741 = BgL_res2714z00_3725;
															}}
															{	/* Unsafe/aes.scm 470 */
																long BgL_res2716z00_3730;

																{	/* Unsafe/aes.scm 470 */
																	long BgL_arg2392z00_3727;

																	BgL_arg2392z00_3727 =
																		(long) (BgL_arg1523z00_1741);
																	{	/* Unsafe/aes.scm 470 */
																		long BgL_res2715z00_3729;

																		BgL_res2715z00_3729 =
																			(long) (BgL_arg2392z00_3727);
																		BgL_res2716z00_3730 = BgL_res2715z00_3729;
																}}
																BgL_arg1514z00_1733 = BgL_res2716z00_3730;
														}}
														{	/* Unsafe/aes.scm 471 */
															uint8_t BgL_arg1525z00_1743;

															{	/* Unsafe/aes.scm 471 */
																long BgL_arg1526z00_1744;

																BgL_arg1526z00_1744 =
																	(BgL_jz00_1730 + ((long) 2));
																{	/* Unsafe/aes.scm 471 */
																	uint8_t BgL_res2718z00_3735;

																	BgL_res2718z00_3735 =
																		BGL_U8VREF(BgL_keyz00_82,
																		BgL_arg1526z00_1744);
																	BgL_arg1525z00_1743 = BgL_res2718z00_3735;
															}}
															{	/* Unsafe/aes.scm 471 */
																long BgL_res2720z00_3740;

																{	/* Unsafe/aes.scm 471 */
																	long BgL_arg2392z00_3737;

																	BgL_arg2392z00_3737 =
																		(long) (BgL_arg1525z00_1743);
																	{	/* Unsafe/aes.scm 471 */
																		long BgL_res2719z00_3739;

																		BgL_res2719z00_3739 =
																			(long) (BgL_arg2392z00_3737);
																		BgL_res2720z00_3740 = BgL_res2719z00_3739;
																}}
																BgL_arg1515z00_1734 = BgL_res2720z00_3740;
														}}
														{	/* Unsafe/aes.scm 472 */
															uint8_t BgL_arg1528z00_1745;

															{	/* Unsafe/aes.scm 472 */
																long BgL_arg1530z00_1746;

																BgL_arg1530z00_1746 =
																	(BgL_jz00_1730 + ((long) 3));
																{	/* Unsafe/aes.scm 472 */
																	uint8_t BgL_res2722z00_3745;

																	BgL_res2722z00_3745 =
																		BGL_U8VREF(BgL_keyz00_82,
																		BgL_arg1530z00_1746);
																	BgL_arg1528z00_1745 = BgL_res2722z00_3745;
															}}
															{	/* Unsafe/aes.scm 472 */
																long BgL_res2724z00_3750;

																{	/* Unsafe/aes.scm 472 */
																	long BgL_arg2392z00_3747;

																	BgL_arg2392z00_3747 =
																		(long) (BgL_arg1528z00_1745);
																	{	/* Unsafe/aes.scm 472 */
																		long BgL_res2723z00_3749;

																		BgL_res2723z00_3749 =
																			(long) (BgL_arg2392z00_3747);
																		BgL_res2724z00_3750 = BgL_res2723z00_3749;
																}}
																BgL_arg1516z00_1735 = BgL_res2724z00_3750;
														}}
														{	/* Unsafe/aes.scm 469 */
															obj_t BgL_list1517z00_1736;

															{	/* Unsafe/aes.scm 469 */
																obj_t BgL_arg1518z00_1737;

																{	/* Unsafe/aes.scm 469 */
																	obj_t BgL_arg1519z00_1738;

																	{	/* Unsafe/aes.scm 469 */
																		obj_t BgL_arg1520z00_1739;

																		BgL_arg1520z00_1739 =
																			MAKE_YOUNG_PAIR(BINT(BgL_arg1516z00_1735),
																			BNIL);
																		BgL_arg1519z00_1738 =
																			MAKE_YOUNG_PAIR(BINT(BgL_arg1515z00_1734),
																			BgL_arg1520z00_1739);
																	}
																	BgL_arg1518z00_1737 =
																		MAKE_YOUNG_PAIR(BINT(BgL_arg1514z00_1733),
																		BgL_arg1519z00_1738);
																}
																BgL_list1517z00_1736 =
																	MAKE_YOUNG_PAIR(BINT(BgL_arg1513z00_1732),
																	BgL_arg1518z00_1737);
															}
															BgL_rz00_1731 =
																BGl_u8vectorz00zz__srfi4z00
																(BgL_list1517z00_1736);
													}}
													{	/* Unsafe/aes.scm 469 */

														VECTOR_SET(BgL_wz00_1724, BgL_iz00_1727,
															BgL_rz00_1731);
											}}}
											{
												long BgL_iz00_7533;

												BgL_iz00_7533 = (BgL_iz00_1727 + ((long) 1));
												BgL_iz00_1727 = BgL_iz00_7533;
												goto BgL_zc3z04anonymousza31511ze3z87_1728;
											}
										}
									else
										{	/* Unsafe/aes.scm 467 */
											((bool_t) 0);
										}
								}
								{
									long BgL_iz00_1750;

									BgL_iz00_1750 = BgL_nkz00_1722;
								BgL_zc3z04anonymousza31532ze3z87_1751:
									if (
										(BgL_iz00_1750 <
											(((long) 4) * (BgL_nrz00_1723 + ((long) 1)))))
										{	/* Unsafe/aes.scm 475 */
											{	/* Unsafe/aes.scm 476 */
												obj_t BgL_arg1536z00_1755;

												{	/* Llib/srfi4.scm 447 */

													BgL_arg1536z00_1755 =
														BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4),
														(uint8_t) (0));
												}
												VECTOR_SET(BgL_wz00_1724, BgL_iz00_1750,
													BgL_arg1536z00_1755);
											}
											{	/* Unsafe/aes.scm 478 */
												unsigned long BgL_arg1537z00_1759;

												{	/* Unsafe/aes.scm 478 */
													long BgL_arg1540z00_1760;

													BgL_arg1540z00_1760 = (BgL_iz00_1750 - ((long) 1));
													{	/* Unsafe/aes.scm 478 */
														unsigned long BgL_res2733z00_3782;

														{	/* Unsafe/aes.scm 478 */
															int BgL_iz00_3768;
															int BgL_jz00_3769;

															BgL_iz00_3768 = (int) (BgL_arg1540z00_1760);
															BgL_jz00_3769 = (int) (((long) 0));
															{	/* Unsafe/aes.scm 420 */
																uint8_t BgL_arg1494z00_3770;

																{	/* Unsafe/aes.scm 420 */
																	obj_t BgL_arg1495z00_3771;

																	BgL_arg1495z00_3771 =
																		VECTOR_REF(BgL_wz00_1724,
																		(long) (BgL_iz00_3768));
																	{	/* Unsafe/aes.scm 420 */
																		uint8_t BgL_res2730z00_3776;

																		{	/* Unsafe/aes.scm 420 */
																			long BgL_kz00_3775;

																			BgL_kz00_3775 = (long) (BgL_jz00_3769);
																			{	/* Unsafe/aes.scm 420 */
																				obj_t BgL_tmpz00_7547;

																				BgL_tmpz00_7547 =
																					((obj_t) BgL_arg1495z00_3771);
																				BgL_res2730z00_3776 =
																					BGL_U8VREF(BgL_tmpz00_7547,
																					BgL_kz00_3775);
																		}}
																		BgL_arg1494z00_3770 = BgL_res2730z00_3776;
																}}
																{	/* Unsafe/aes.scm 420 */
																	long BgL_res2732z00_3781;

																	{	/* Unsafe/aes.scm 420 */
																		long BgL_arg2392z00_3778;

																		BgL_arg2392z00_3778 =
																			(long) (BgL_arg1494z00_3770);
																		{	/* Unsafe/aes.scm 420 */
																			long BgL_res2731z00_3780;

																			BgL_res2731z00_3780 =
																				(long) (BgL_arg2392z00_3778);
																			BgL_res2732z00_3781 = BgL_res2731z00_3780;
																	}}
																	BgL_res2733z00_3782 =
																		(unsigned long) (BgL_res2732z00_3781);
														}}}
														BgL_arg1537z00_1759 = BgL_res2733z00_3782;
												}}
												{	/* Unsafe/aes.scm 478 */
													uint8_t BgL_tmpz00_7553;

													BgL_tmpz00_7553 = (uint8_t) (BgL_arg1537z00_1759);
													BGL_U8VSET(BgL_tempz00_1725, ((long) 0),
														BgL_tmpz00_7553);
												} BUNSPEC;
											}
											{	/* Unsafe/aes.scm 478 */
												unsigned long BgL_arg1541z00_1762;

												{	/* Unsafe/aes.scm 478 */
													long BgL_arg1542z00_1763;

													BgL_arg1542z00_1763 = (BgL_iz00_1750 - ((long) 1));
													{	/* Unsafe/aes.scm 478 */
														unsigned long BgL_res2738z00_3800;

														{	/* Unsafe/aes.scm 478 */
															int BgL_iz00_3786;
															int BgL_jz00_3787;

															BgL_iz00_3786 = (int) (BgL_arg1542z00_1763);
															BgL_jz00_3787 = (int) (((long) 1));
															{	/* Unsafe/aes.scm 420 */
																uint8_t BgL_arg1494z00_3788;

																{	/* Unsafe/aes.scm 420 */
																	obj_t BgL_arg1495z00_3789;

																	BgL_arg1495z00_3789 =
																		VECTOR_REF(BgL_wz00_1724,
																		(long) (BgL_iz00_3786));
																	{	/* Unsafe/aes.scm 420 */
																		uint8_t BgL_res2735z00_3794;

																		{	/* Unsafe/aes.scm 420 */
																			long BgL_kz00_3793;

																			BgL_kz00_3793 = (long) (BgL_jz00_3787);
																			{	/* Unsafe/aes.scm 420 */
																				obj_t BgL_tmpz00_7562;

																				BgL_tmpz00_7562 =
																					((obj_t) BgL_arg1495z00_3789);
																				BgL_res2735z00_3794 =
																					BGL_U8VREF(BgL_tmpz00_7562,
																					BgL_kz00_3793);
																		}}
																		BgL_arg1494z00_3788 = BgL_res2735z00_3794;
																}}
																{	/* Unsafe/aes.scm 420 */
																	long BgL_res2737z00_3799;

																	{	/* Unsafe/aes.scm 420 */
																		long BgL_arg2392z00_3796;

																		BgL_arg2392z00_3796 =
																			(long) (BgL_arg1494z00_3788);
																		{	/* Unsafe/aes.scm 420 */
																			long BgL_res2736z00_3798;

																			BgL_res2736z00_3798 =
																				(long) (BgL_arg2392z00_3796);
																			BgL_res2737z00_3799 = BgL_res2736z00_3798;
																	}}
																	BgL_res2738z00_3800 =
																		(unsigned long) (BgL_res2737z00_3799);
														}}}
														BgL_arg1541z00_1762 = BgL_res2738z00_3800;
												}}
												{	/* Unsafe/aes.scm 478 */
													uint8_t BgL_tmpz00_7568;

													BgL_tmpz00_7568 = (uint8_t) (BgL_arg1541z00_1762);
													BGL_U8VSET(BgL_tempz00_1725, ((long) 1),
														BgL_tmpz00_7568);
												} BUNSPEC;
											}
											{	/* Unsafe/aes.scm 478 */
												unsigned long BgL_arg1544z00_1765;

												{	/* Unsafe/aes.scm 478 */
													long BgL_arg1545z00_1766;

													BgL_arg1545z00_1766 = (BgL_iz00_1750 - ((long) 1));
													{	/* Unsafe/aes.scm 478 */
														unsigned long BgL_res2743z00_3818;

														{	/* Unsafe/aes.scm 478 */
															int BgL_iz00_3804;
															int BgL_jz00_3805;

															BgL_iz00_3804 = (int) (BgL_arg1545z00_1766);
															BgL_jz00_3805 = (int) (((long) 2));
															{	/* Unsafe/aes.scm 420 */
																uint8_t BgL_arg1494z00_3806;

																{	/* Unsafe/aes.scm 420 */
																	obj_t BgL_arg1495z00_3807;

																	BgL_arg1495z00_3807 =
																		VECTOR_REF(BgL_wz00_1724,
																		(long) (BgL_iz00_3804));
																	{	/* Unsafe/aes.scm 420 */
																		uint8_t BgL_res2740z00_3812;

																		{	/* Unsafe/aes.scm 420 */
																			long BgL_kz00_3811;

																			BgL_kz00_3811 = (long) (BgL_jz00_3805);
																			{	/* Unsafe/aes.scm 420 */
																				obj_t BgL_tmpz00_7577;

																				BgL_tmpz00_7577 =
																					((obj_t) BgL_arg1495z00_3807);
																				BgL_res2740z00_3812 =
																					BGL_U8VREF(BgL_tmpz00_7577,
																					BgL_kz00_3811);
																		}}
																		BgL_arg1494z00_3806 = BgL_res2740z00_3812;
																}}
																{	/* Unsafe/aes.scm 420 */
																	long BgL_res2742z00_3817;

																	{	/* Unsafe/aes.scm 420 */
																		long BgL_arg2392z00_3814;

																		BgL_arg2392z00_3814 =
																			(long) (BgL_arg1494z00_3806);
																		{	/* Unsafe/aes.scm 420 */
																			long BgL_res2741z00_3816;

																			BgL_res2741z00_3816 =
																				(long) (BgL_arg2392z00_3814);
																			BgL_res2742z00_3817 = BgL_res2741z00_3816;
																	}}
																	BgL_res2743z00_3818 =
																		(unsigned long) (BgL_res2742z00_3817);
														}}}
														BgL_arg1544z00_1765 = BgL_res2743z00_3818;
												}}
												{	/* Unsafe/aes.scm 478 */
													uint8_t BgL_tmpz00_7583;

													BgL_tmpz00_7583 = (uint8_t) (BgL_arg1544z00_1765);
													BGL_U8VSET(BgL_tempz00_1725, ((long) 2),
														BgL_tmpz00_7583);
												} BUNSPEC;
											}
											{	/* Unsafe/aes.scm 478 */
												unsigned long BgL_arg1546z00_1768;

												{	/* Unsafe/aes.scm 478 */
													long BgL_arg1547z00_1769;

													BgL_arg1547z00_1769 = (BgL_iz00_1750 - ((long) 1));
													{	/* Unsafe/aes.scm 478 */
														unsigned long BgL_res2748z00_3836;

														{	/* Unsafe/aes.scm 478 */
															int BgL_iz00_3822;
															int BgL_jz00_3823;

															BgL_iz00_3822 = (int) (BgL_arg1547z00_1769);
															BgL_jz00_3823 = (int) (((long) 3));
															{	/* Unsafe/aes.scm 420 */
																uint8_t BgL_arg1494z00_3824;

																{	/* Unsafe/aes.scm 420 */
																	obj_t BgL_arg1495z00_3825;

																	BgL_arg1495z00_3825 =
																		VECTOR_REF(BgL_wz00_1724,
																		(long) (BgL_iz00_3822));
																	{	/* Unsafe/aes.scm 420 */
																		uint8_t BgL_res2745z00_3830;

																		{	/* Unsafe/aes.scm 420 */
																			long BgL_kz00_3829;

																			BgL_kz00_3829 = (long) (BgL_jz00_3823);
																			{	/* Unsafe/aes.scm 420 */
																				obj_t BgL_tmpz00_7592;

																				BgL_tmpz00_7592 =
																					((obj_t) BgL_arg1495z00_3825);
																				BgL_res2745z00_3830 =
																					BGL_U8VREF(BgL_tmpz00_7592,
																					BgL_kz00_3829);
																		}}
																		BgL_arg1494z00_3824 = BgL_res2745z00_3830;
																}}
																{	/* Unsafe/aes.scm 420 */
																	long BgL_res2747z00_3835;

																	{	/* Unsafe/aes.scm 420 */
																		long BgL_arg2392z00_3832;

																		BgL_arg2392z00_3832 =
																			(long) (BgL_arg1494z00_3824);
																		{	/* Unsafe/aes.scm 420 */
																			long BgL_res2746z00_3834;

																			BgL_res2746z00_3834 =
																				(long) (BgL_arg2392z00_3832);
																			BgL_res2747z00_3835 = BgL_res2746z00_3834;
																	}}
																	BgL_res2748z00_3836 =
																		(unsigned long) (BgL_res2747z00_3835);
														}}}
														BgL_arg1546z00_1768 = BgL_res2748z00_3836;
												}}
												{	/* Unsafe/aes.scm 478 */
													uint8_t BgL_tmpz00_7598;

													BgL_tmpz00_7598 = (uint8_t) (BgL_arg1546z00_1768);
													BGL_U8VSET(BgL_tempz00_1725, ((long) 3),
														BgL_tmpz00_7598);
												} BUNSPEC;
											}
											{	/* Unsafe/aes.scm 479 */
												bool_t BgL_test3767z00_7601;

												{	/* Unsafe/aes.scm 479 */
													obj_t BgL_arg1578z00_1802;

													BgL_arg1578z00_1802 =
														BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
														(BgL_iz00_1750), BINT(BgL_nkz00_1722));
													BgL_test3767z00_7601 =
														((long) CINT(BgL_arg1578z00_1802) == ((long) 0));
												}
												if (BgL_test3767z00_7601)
													{	/* Unsafe/aes.scm 479 */
														BGl_subwordz12z12zz__aesz00
															(BGl_rotwordz12z12zz__aesz00(BgL_tempz00_1725));
														{	/* Unsafe/aes.scm 483 */
															long BgL_vz00_1774;

															{	/* Unsafe/aes.scm 483 */
																long BgL_arg1554z00_1775;
																unsigned long BgL_arg1556z00_1776;

																{	/* Unsafe/aes.scm 483 */
																	uint8_t BgL_arg1557z00_1777;

																	{	/* Unsafe/aes.scm 483 */
																		uint8_t BgL_res2751z00_3843;

																		BgL_res2751z00_3843 =
																			BGL_U8VREF(BgL_tempz00_1725, ((long) 0));
																		BgL_arg1557z00_1777 = BgL_res2751z00_3843;
																	}
																	{	/* Unsafe/aes.scm 483 */
																		long BgL_res2753z00_3848;

																		{	/* Unsafe/aes.scm 483 */
																			long BgL_arg2392z00_3845;

																			BgL_arg2392z00_3845 =
																				(long) (BgL_arg1557z00_1777);
																			{	/* Unsafe/aes.scm 483 */
																				long BgL_res2752z00_3847;

																				BgL_res2752z00_3847 =
																					(long) (BgL_arg2392z00_3845);
																				BgL_res2753z00_3848 =
																					BgL_res2752z00_3847;
																		}}
																		BgL_arg1554z00_1775 = BgL_res2753z00_3848;
																}}
																{	/* Unsafe/aes.scm 484 */
																	long BgL_arg1558z00_1778;

																	BgL_arg1558z00_1778 =
																		(BgL_iz00_1750 / BgL_nkz00_1722);
																	{	/* Unsafe/aes.scm 484 */
																		unsigned long BgL_res2758z00_3867;

																		{	/* Unsafe/aes.scm 484 */
																			obj_t BgL_mz00_3852;
																			int BgL_iz00_3853;
																			int BgL_jz00_3854;

																			BgL_mz00_3852 =
																				CNST_TABLE_REF(((long) 0));
																			BgL_iz00_3853 =
																				(int) (BgL_arg1558z00_1778);
																			BgL_jz00_3854 = (int) (((long) 0));
																			{	/* Unsafe/aes.scm 420 */
																				uint8_t BgL_arg1494z00_3855;

																				{	/* Unsafe/aes.scm 420 */
																					obj_t BgL_arg1495z00_3856;

																					BgL_arg1495z00_3856 =
																						VECTOR_REF(BgL_mz00_3852,
																						(long) (BgL_iz00_3853));
																					{	/* Unsafe/aes.scm 420 */
																						uint8_t BgL_res2755z00_3861;

																						{	/* Unsafe/aes.scm 420 */
																							long BgL_kz00_3860;

																							BgL_kz00_3860 =
																								(long) (BgL_jz00_3854);
																							{	/* Unsafe/aes.scm 420 */
																								obj_t BgL_tmpz00_7619;

																								BgL_tmpz00_7619 =
																									((obj_t) BgL_arg1495z00_3856);
																								BgL_res2755z00_3861 =
																									BGL_U8VREF(BgL_tmpz00_7619,
																									BgL_kz00_3860);
																						}}
																						BgL_arg1494z00_3855 =
																							BgL_res2755z00_3861;
																				}}
																				{	/* Unsafe/aes.scm 420 */
																					long BgL_res2757z00_3866;

																					{	/* Unsafe/aes.scm 420 */
																						long BgL_arg2392z00_3863;

																						BgL_arg2392z00_3863 =
																							(long) (BgL_arg1494z00_3855);
																						{	/* Unsafe/aes.scm 420 */
																							long BgL_res2756z00_3865;

																							BgL_res2756z00_3865 =
																								(long) (BgL_arg2392z00_3863);
																							BgL_res2757z00_3866 =
																								BgL_res2756z00_3865;
																					}}
																					BgL_res2758z00_3867 =
																						(unsigned
																						long) (BgL_res2757z00_3866);
																		}}}
																		BgL_arg1556z00_1776 = BgL_res2758z00_3867;
																}}
																BgL_vz00_1774 =
																	(BgL_arg1554z00_1775 ^
																	(long) (BgL_arg1556z00_1776));
															}
															{	/* Unsafe/aes.scm 485 */
																uint8_t BgL_tmpz00_7627;

																BgL_tmpz00_7627 = (uint8_t) (BgL_vz00_1774);
																BGL_U8VSET(BgL_tempz00_1725, ((long) 0),
																	BgL_tmpz00_7627);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 483 */
															long BgL_vz00_1780;

															{	/* Unsafe/aes.scm 483 */
																long BgL_arg1560z00_1781;
																unsigned long BgL_arg1561z00_1782;

																{	/* Unsafe/aes.scm 483 */
																	uint8_t BgL_arg1562z00_1783;

																	{	/* Unsafe/aes.scm 483 */
																		uint8_t BgL_res2760z00_3873;

																		BgL_res2760z00_3873 =
																			BGL_U8VREF(BgL_tempz00_1725, ((long) 1));
																		BgL_arg1562z00_1783 = BgL_res2760z00_3873;
																	}
																	{	/* Unsafe/aes.scm 483 */
																		long BgL_res2762z00_3878;

																		{	/* Unsafe/aes.scm 483 */
																			long BgL_arg2392z00_3875;

																			BgL_arg2392z00_3875 =
																				(long) (BgL_arg1562z00_1783);
																			{	/* Unsafe/aes.scm 483 */
																				long BgL_res2761z00_3877;

																				BgL_res2761z00_3877 =
																					(long) (BgL_arg2392z00_3875);
																				BgL_res2762z00_3878 =
																					BgL_res2761z00_3877;
																		}}
																		BgL_arg1560z00_1781 = BgL_res2762z00_3878;
																}}
																{	/* Unsafe/aes.scm 484 */
																	long BgL_arg1563z00_1784;

																	BgL_arg1563z00_1784 =
																		(BgL_iz00_1750 / BgL_nkz00_1722);
																	{	/* Unsafe/aes.scm 484 */
																		unsigned long BgL_res2767z00_3897;

																		{	/* Unsafe/aes.scm 484 */
																			obj_t BgL_mz00_3882;
																			int BgL_iz00_3883;
																			int BgL_jz00_3884;

																			BgL_mz00_3882 =
																				CNST_TABLE_REF(((long) 0));
																			BgL_iz00_3883 =
																				(int) (BgL_arg1563z00_1784);
																			BgL_jz00_3884 = (int) (((long) 1));
																			{	/* Unsafe/aes.scm 420 */
																				uint8_t BgL_arg1494z00_3885;

																				{	/* Unsafe/aes.scm 420 */
																					obj_t BgL_arg1495z00_3886;

																					BgL_arg1495z00_3886 =
																						VECTOR_REF(BgL_mz00_3882,
																						(long) (BgL_iz00_3883));
																					{	/* Unsafe/aes.scm 420 */
																						uint8_t BgL_res2764z00_3891;

																						{	/* Unsafe/aes.scm 420 */
																							long BgL_kz00_3890;

																							BgL_kz00_3890 =
																								(long) (BgL_jz00_3884);
																							{	/* Unsafe/aes.scm 420 */
																								obj_t BgL_tmpz00_7640;

																								BgL_tmpz00_7640 =
																									((obj_t) BgL_arg1495z00_3886);
																								BgL_res2764z00_3891 =
																									BGL_U8VREF(BgL_tmpz00_7640,
																									BgL_kz00_3890);
																						}}
																						BgL_arg1494z00_3885 =
																							BgL_res2764z00_3891;
																				}}
																				{	/* Unsafe/aes.scm 420 */
																					long BgL_res2766z00_3896;

																					{	/* Unsafe/aes.scm 420 */
																						long BgL_arg2392z00_3893;

																						BgL_arg2392z00_3893 =
																							(long) (BgL_arg1494z00_3885);
																						{	/* Unsafe/aes.scm 420 */
																							long BgL_res2765z00_3895;

																							BgL_res2765z00_3895 =
																								(long) (BgL_arg2392z00_3893);
																							BgL_res2766z00_3896 =
																								BgL_res2765z00_3895;
																					}}
																					BgL_res2767z00_3897 =
																						(unsigned
																						long) (BgL_res2766z00_3896);
																		}}}
																		BgL_arg1561z00_1782 = BgL_res2767z00_3897;
																}}
																BgL_vz00_1780 =
																	(BgL_arg1560z00_1781 ^
																	(long) (BgL_arg1561z00_1782));
															}
															{	/* Unsafe/aes.scm 485 */
																uint8_t BgL_tmpz00_7648;

																BgL_tmpz00_7648 = (uint8_t) (BgL_vz00_1780);
																BGL_U8VSET(BgL_tempz00_1725, ((long) 1),
																	BgL_tmpz00_7648);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 483 */
															long BgL_vz00_1786;

															{	/* Unsafe/aes.scm 483 */
																long BgL_arg1564z00_1787;
																unsigned long BgL_arg1565z00_1788;

																{	/* Unsafe/aes.scm 483 */
																	uint8_t BgL_arg1566z00_1789;

																	{	/* Unsafe/aes.scm 483 */
																		uint8_t BgL_res2769z00_3903;

																		BgL_res2769z00_3903 =
																			BGL_U8VREF(BgL_tempz00_1725, ((long) 2));
																		BgL_arg1566z00_1789 = BgL_res2769z00_3903;
																	}
																	{	/* Unsafe/aes.scm 483 */
																		long BgL_res2771z00_3908;

																		{	/* Unsafe/aes.scm 483 */
																			long BgL_arg2392z00_3905;

																			BgL_arg2392z00_3905 =
																				(long) (BgL_arg1566z00_1789);
																			{	/* Unsafe/aes.scm 483 */
																				long BgL_res2770z00_3907;

																				BgL_res2770z00_3907 =
																					(long) (BgL_arg2392z00_3905);
																				BgL_res2771z00_3908 =
																					BgL_res2770z00_3907;
																		}}
																		BgL_arg1564z00_1787 = BgL_res2771z00_3908;
																}}
																{	/* Unsafe/aes.scm 484 */
																	long BgL_arg1567z00_1790;

																	BgL_arg1567z00_1790 =
																		(BgL_iz00_1750 / BgL_nkz00_1722);
																	{	/* Unsafe/aes.scm 484 */
																		unsigned long BgL_res2776z00_3927;

																		{	/* Unsafe/aes.scm 484 */
																			obj_t BgL_mz00_3912;
																			int BgL_iz00_3913;
																			int BgL_jz00_3914;

																			BgL_mz00_3912 =
																				CNST_TABLE_REF(((long) 0));
																			BgL_iz00_3913 =
																				(int) (BgL_arg1567z00_1790);
																			BgL_jz00_3914 = (int) (((long) 2));
																			{	/* Unsafe/aes.scm 420 */
																				uint8_t BgL_arg1494z00_3915;

																				{	/* Unsafe/aes.scm 420 */
																					obj_t BgL_arg1495z00_3916;

																					BgL_arg1495z00_3916 =
																						VECTOR_REF(BgL_mz00_3912,
																						(long) (BgL_iz00_3913));
																					{	/* Unsafe/aes.scm 420 */
																						uint8_t BgL_res2773z00_3921;

																						{	/* Unsafe/aes.scm 420 */
																							long BgL_kz00_3920;

																							BgL_kz00_3920 =
																								(long) (BgL_jz00_3914);
																							{	/* Unsafe/aes.scm 420 */
																								obj_t BgL_tmpz00_7661;

																								BgL_tmpz00_7661 =
																									((obj_t) BgL_arg1495z00_3916);
																								BgL_res2773z00_3921 =
																									BGL_U8VREF(BgL_tmpz00_7661,
																									BgL_kz00_3920);
																						}}
																						BgL_arg1494z00_3915 =
																							BgL_res2773z00_3921;
																				}}
																				{	/* Unsafe/aes.scm 420 */
																					long BgL_res2775z00_3926;

																					{	/* Unsafe/aes.scm 420 */
																						long BgL_arg2392z00_3923;

																						BgL_arg2392z00_3923 =
																							(long) (BgL_arg1494z00_3915);
																						{	/* Unsafe/aes.scm 420 */
																							long BgL_res2774z00_3925;

																							BgL_res2774z00_3925 =
																								(long) (BgL_arg2392z00_3923);
																							BgL_res2775z00_3926 =
																								BgL_res2774z00_3925;
																					}}
																					BgL_res2776z00_3927 =
																						(unsigned
																						long) (BgL_res2775z00_3926);
																		}}}
																		BgL_arg1565z00_1788 = BgL_res2776z00_3927;
																}}
																BgL_vz00_1786 =
																	(BgL_arg1564z00_1787 ^
																	(long) (BgL_arg1565z00_1788));
															}
															{	/* Unsafe/aes.scm 485 */
																uint8_t BgL_tmpz00_7669;

																BgL_tmpz00_7669 = (uint8_t) (BgL_vz00_1786);
																BGL_U8VSET(BgL_tempz00_1725, ((long) 2),
																	BgL_tmpz00_7669);
															} BUNSPEC;
														}
														{	/* Unsafe/aes.scm 483 */
															long BgL_vz00_1792;

															{	/* Unsafe/aes.scm 483 */
																long BgL_arg1568z00_1793;
																unsigned long BgL_arg1569z00_1794;

																{	/* Unsafe/aes.scm 483 */
																	uint8_t BgL_arg1570z00_1795;

																	{	/* Unsafe/aes.scm 483 */
																		uint8_t BgL_res2778z00_3933;

																		BgL_res2778z00_3933 =
																			BGL_U8VREF(BgL_tempz00_1725, ((long) 3));
																		BgL_arg1570z00_1795 = BgL_res2778z00_3933;
																	}
																	{	/* Unsafe/aes.scm 483 */
																		long BgL_res2780z00_3938;

																		{	/* Unsafe/aes.scm 483 */
																			long BgL_arg2392z00_3935;

																			BgL_arg2392z00_3935 =
																				(long) (BgL_arg1570z00_1795);
																			{	/* Unsafe/aes.scm 483 */
																				long BgL_res2779z00_3937;

																				BgL_res2779z00_3937 =
																					(long) (BgL_arg2392z00_3935);
																				BgL_res2780z00_3938 =
																					BgL_res2779z00_3937;
																		}}
																		BgL_arg1568z00_1793 = BgL_res2780z00_3938;
																}}
																{	/* Unsafe/aes.scm 484 */
																	long BgL_arg1573z00_1796;

																	BgL_arg1573z00_1796 =
																		(BgL_iz00_1750 / BgL_nkz00_1722);
																	{	/* Unsafe/aes.scm 484 */
																		unsigned long BgL_res2785z00_3957;

																		{	/* Unsafe/aes.scm 484 */
																			obj_t BgL_mz00_3942;
																			int BgL_iz00_3943;
																			int BgL_jz00_3944;

																			BgL_mz00_3942 =
																				CNST_TABLE_REF(((long) 0));
																			BgL_iz00_3943 =
																				(int) (BgL_arg1573z00_1796);
																			BgL_jz00_3944 = (int) (((long) 3));
																			{	/* Unsafe/aes.scm 420 */
																				uint8_t BgL_arg1494z00_3945;

																				{	/* Unsafe/aes.scm 420 */
																					obj_t BgL_arg1495z00_3946;

																					BgL_arg1495z00_3946 =
																						VECTOR_REF(BgL_mz00_3942,
																						(long) (BgL_iz00_3943));
																					{	/* Unsafe/aes.scm 420 */
																						uint8_t BgL_res2782z00_3951;

																						{	/* Unsafe/aes.scm 420 */
																							long BgL_kz00_3950;

																							BgL_kz00_3950 =
																								(long) (BgL_jz00_3944);
																							{	/* Unsafe/aes.scm 420 */
																								obj_t BgL_tmpz00_7682;

																								BgL_tmpz00_7682 =
																									((obj_t) BgL_arg1495z00_3946);
																								BgL_res2782z00_3951 =
																									BGL_U8VREF(BgL_tmpz00_7682,
																									BgL_kz00_3950);
																						}}
																						BgL_arg1494z00_3945 =
																							BgL_res2782z00_3951;
																				}}
																				{	/* Unsafe/aes.scm 420 */
																					long BgL_res2784z00_3956;

																					{	/* Unsafe/aes.scm 420 */
																						long BgL_arg2392z00_3953;

																						BgL_arg2392z00_3953 =
																							(long) (BgL_arg1494z00_3945);
																						{	/* Unsafe/aes.scm 420 */
																							long BgL_res2783z00_3955;

																							BgL_res2783z00_3955 =
																								(long) (BgL_arg2392z00_3953);
																							BgL_res2784z00_3956 =
																								BgL_res2783z00_3955;
																					}}
																					BgL_res2785z00_3957 =
																						(unsigned
																						long) (BgL_res2784z00_3956);
																		}}}
																		BgL_arg1569z00_1794 = BgL_res2785z00_3957;
																}}
																BgL_vz00_1792 =
																	(BgL_arg1568z00_1793 ^
																	(long) (BgL_arg1569z00_1794));
															}
															{	/* Unsafe/aes.scm 485 */
																uint8_t BgL_tmpz00_7690;

																BgL_tmpz00_7690 = (uint8_t) (BgL_vz00_1792);
																BGL_U8VSET(BgL_tempz00_1725, ((long) 3),
																	BgL_tmpz00_7690);
															} BUNSPEC;
													}}
												else
													{	/* Unsafe/aes.scm 486 */
														bool_t BgL_test3768z00_7693;

														if ((BgL_nkz00_1722 > ((long) 6)))
															{	/* Unsafe/aes.scm 486 */
																obj_t BgL_arg1577z00_1801;

																BgL_arg1577z00_1801 =
																	BGl_remainderz00zz__r4_numbers_6_5_fixnumz00
																	(BINT(BgL_iz00_1750), BINT(BgL_nkz00_1722));
																BgL_test3768z00_7693 =
																	((long) CINT(BgL_arg1577z00_1801) ==
																	((long) 4));
															}
														else
															{	/* Unsafe/aes.scm 486 */
																BgL_test3768z00_7693 = ((bool_t) 0);
															}
														if (BgL_test3768z00_7693)
															{	/* Unsafe/aes.scm 486 */
																BGl_subwordz12z12zz__aesz00(BgL_tempz00_1725);
															}
														else
															{	/* Unsafe/aes.scm 486 */
																BFALSE;
															}
													}
											}
											{	/* Unsafe/aes.scm 489 */
												long BgL_vz00_1804;

												{	/* Unsafe/aes.scm 489 */
													unsigned long BgL_arg1579z00_1805;
													long BgL_arg1580z00_1806;

													{	/* Unsafe/aes.scm 489 */
														long BgL_arg1582z00_1807;

														BgL_arg1582z00_1807 =
															(BgL_iz00_1750 - BgL_nkz00_1722);
														{	/* Unsafe/aes.scm 489 */
															unsigned long BgL_res2793z00_3983;

															{	/* Unsafe/aes.scm 489 */
																int BgL_iz00_3969;
																int BgL_jz00_3970;

																BgL_iz00_3969 = (int) (BgL_arg1582z00_1807);
																BgL_jz00_3970 = (int) (((long) 0));
																{	/* Unsafe/aes.scm 420 */
																	uint8_t BgL_arg1494z00_3971;

																	{	/* Unsafe/aes.scm 420 */
																		obj_t BgL_arg1495z00_3972;

																		BgL_arg1495z00_3972 =
																			VECTOR_REF(BgL_wz00_1724,
																			(long) (BgL_iz00_3969));
																		{	/* Unsafe/aes.scm 420 */
																			uint8_t BgL_res2790z00_3977;

																			{	/* Unsafe/aes.scm 420 */
																				long BgL_kz00_3976;

																				BgL_kz00_3976 = (long) (BgL_jz00_3970);
																				{	/* Unsafe/aes.scm 420 */
																					obj_t BgL_tmpz00_7708;

																					BgL_tmpz00_7708 =
																						((obj_t) BgL_arg1495z00_3972);
																					BgL_res2790z00_3977 =
																						BGL_U8VREF(BgL_tmpz00_7708,
																						BgL_kz00_3976);
																			}}
																			BgL_arg1494z00_3971 = BgL_res2790z00_3977;
																	}}
																	{	/* Unsafe/aes.scm 420 */
																		long BgL_res2792z00_3982;

																		{	/* Unsafe/aes.scm 420 */
																			long BgL_arg2392z00_3979;

																			BgL_arg2392z00_3979 =
																				(long) (BgL_arg1494z00_3971);
																			{	/* Unsafe/aes.scm 420 */
																				long BgL_res2791z00_3981;

																				BgL_res2791z00_3981 =
																					(long) (BgL_arg2392z00_3979);
																				BgL_res2792z00_3982 =
																					BgL_res2791z00_3981;
																		}}
																		BgL_res2793z00_3983 =
																			(unsigned long) (BgL_res2792z00_3982);
															}}}
															BgL_arg1579z00_1805 = BgL_res2793z00_3983;
													}}
													{	/* Unsafe/aes.scm 490 */
														uint8_t BgL_arg1583z00_1808;

														{	/* Unsafe/aes.scm 490 */
															uint8_t BgL_res2794z00_3986;

															BgL_res2794z00_3986 =
																BGL_U8VREF(BgL_tempz00_1725, ((long) 0));
															BgL_arg1583z00_1808 = BgL_res2794z00_3986;
														}
														{	/* Unsafe/aes.scm 490 */
															long BgL_res2796z00_3991;

															{	/* Unsafe/aes.scm 490 */
																long BgL_arg2392z00_3988;

																BgL_arg2392z00_3988 =
																	(long) (BgL_arg1583z00_1808);
																{	/* Unsafe/aes.scm 490 */
																	long BgL_res2795z00_3990;

																	BgL_res2795z00_3990 =
																		(long) (BgL_arg2392z00_3988);
																	BgL_res2796z00_3991 = BgL_res2795z00_3990;
															}}
															BgL_arg1580z00_1806 = BgL_res2796z00_3991;
													}}
													BgL_vz00_1804 =
														(
														(long) (BgL_arg1579z00_1805) ^ BgL_arg1580z00_1806);
												}
												{	/* Unsafe/aes.scm 491 */
													int BgL_iz00_3996;
													int BgL_jz00_3997;
													unsigned long BgL_vz00_3998;

													BgL_iz00_3996 = (int) (BgL_iz00_1750);
													BgL_jz00_3997 = (int) (((long) 0));
													BgL_vz00_3998 = (unsigned long) (BgL_vz00_1804);
													{	/* Unsafe/aes.scm 426 */
														obj_t BgL_arg1496z00_3999;

														BgL_arg1496z00_3999 =
															VECTOR_REF(BgL_wz00_1724, (long) (BgL_iz00_3996));
														{	/* Unsafe/aes.scm 426 */
															uint8_t BgL_auxz00_7726;
															long BgL_tmpz00_7724;

															BgL_auxz00_7726 = (uint8_t) (BgL_vz00_3998);
															BgL_tmpz00_7724 = (long) (BgL_jz00_3997);
															BGL_U8VSET(BgL_arg1496z00_3999, BgL_tmpz00_7724,
																BgL_auxz00_7726);
														} BUNSPEC;
											}}}
											{	/* Unsafe/aes.scm 489 */
												long BgL_vz00_1810;

												{	/* Unsafe/aes.scm 489 */
													unsigned long BgL_arg1584z00_1811;
													long BgL_arg1587z00_1812;

													{	/* Unsafe/aes.scm 489 */
														long BgL_arg1588z00_1813;

														BgL_arg1588z00_1813 =
															(BgL_iz00_1750 - BgL_nkz00_1722);
														{	/* Unsafe/aes.scm 489 */
															unsigned long BgL_res2802z00_4020;

															{	/* Unsafe/aes.scm 489 */
																int BgL_iz00_4006;
																int BgL_jz00_4007;

																BgL_iz00_4006 = (int) (BgL_arg1588z00_1813);
																BgL_jz00_4007 = (int) (((long) 1));
																{	/* Unsafe/aes.scm 420 */
																	uint8_t BgL_arg1494z00_4008;

																	{	/* Unsafe/aes.scm 420 */
																		obj_t BgL_arg1495z00_4009;

																		BgL_arg1495z00_4009 =
																			VECTOR_REF(BgL_wz00_1724,
																			(long) (BgL_iz00_4006));
																		{	/* Unsafe/aes.scm 420 */
																			uint8_t BgL_res2799z00_4014;

																			{	/* Unsafe/aes.scm 420 */
																				long BgL_kz00_4013;

																				BgL_kz00_4013 = (long) (BgL_jz00_4007);
																				{	/* Unsafe/aes.scm 420 */
																					obj_t BgL_tmpz00_7735;

																					BgL_tmpz00_7735 =
																						((obj_t) BgL_arg1495z00_4009);
																					BgL_res2799z00_4014 =
																						BGL_U8VREF(BgL_tmpz00_7735,
																						BgL_kz00_4013);
																			}}
																			BgL_arg1494z00_4008 = BgL_res2799z00_4014;
																	}}
																	{	/* Unsafe/aes.scm 420 */
																		long BgL_res2801z00_4019;

																		{	/* Unsafe/aes.scm 420 */
																			long BgL_arg2392z00_4016;

																			BgL_arg2392z00_4016 =
																				(long) (BgL_arg1494z00_4008);
																			{	/* Unsafe/aes.scm 420 */
																				long BgL_res2800z00_4018;

																				BgL_res2800z00_4018 =
																					(long) (BgL_arg2392z00_4016);
																				BgL_res2801z00_4019 =
																					BgL_res2800z00_4018;
																		}}
																		BgL_res2802z00_4020 =
																			(unsigned long) (BgL_res2801z00_4019);
															}}}
															BgL_arg1584z00_1811 = BgL_res2802z00_4020;
													}}
													{	/* Unsafe/aes.scm 490 */
														uint8_t BgL_arg1589z00_1814;

														{	/* Unsafe/aes.scm 490 */
															uint8_t BgL_res2803z00_4023;

															BgL_res2803z00_4023 =
																BGL_U8VREF(BgL_tempz00_1725, ((long) 1));
															BgL_arg1589z00_1814 = BgL_res2803z00_4023;
														}
														{	/* Unsafe/aes.scm 490 */
															long BgL_res2805z00_4028;

															{	/* Unsafe/aes.scm 490 */
																long BgL_arg2392z00_4025;

																BgL_arg2392z00_4025 =
																	(long) (BgL_arg1589z00_1814);
																{	/* Unsafe/aes.scm 490 */
																	long BgL_res2804z00_4027;

																	BgL_res2804z00_4027 =
																		(long) (BgL_arg2392z00_4025);
																	BgL_res2805z00_4028 = BgL_res2804z00_4027;
															}}
															BgL_arg1587z00_1812 = BgL_res2805z00_4028;
													}}
													BgL_vz00_1810 =
														(
														(long) (BgL_arg1584z00_1811) ^ BgL_arg1587z00_1812);
												}
												{	/* Unsafe/aes.scm 491 */
													int BgL_iz00_4033;
													int BgL_jz00_4034;
													unsigned long BgL_vz00_4035;

													BgL_iz00_4033 = (int) (BgL_iz00_1750);
													BgL_jz00_4034 = (int) (((long) 1));
													BgL_vz00_4035 = (unsigned long) (BgL_vz00_1810);
													{	/* Unsafe/aes.scm 426 */
														obj_t BgL_arg1496z00_4036;

														BgL_arg1496z00_4036 =
															VECTOR_REF(BgL_wz00_1724, (long) (BgL_iz00_4033));
														{	/* Unsafe/aes.scm 426 */
															uint8_t BgL_auxz00_7753;
															long BgL_tmpz00_7751;

															BgL_auxz00_7753 = (uint8_t) (BgL_vz00_4035);
															BgL_tmpz00_7751 = (long) (BgL_jz00_4034);
															BGL_U8VSET(BgL_arg1496z00_4036, BgL_tmpz00_7751,
																BgL_auxz00_7753);
														} BUNSPEC;
											}}}
											{	/* Unsafe/aes.scm 489 */
												long BgL_vz00_1816;

												{	/* Unsafe/aes.scm 489 */
													unsigned long BgL_arg1592z00_1817;
													long BgL_arg1593z00_1818;

													{	/* Unsafe/aes.scm 489 */
														long BgL_arg1596z00_1819;

														BgL_arg1596z00_1819 =
															(BgL_iz00_1750 - BgL_nkz00_1722);
														{	/* Unsafe/aes.scm 489 */
															unsigned long BgL_res2811z00_4057;

															{	/* Unsafe/aes.scm 489 */
																int BgL_iz00_4043;
																int BgL_jz00_4044;

																BgL_iz00_4043 = (int) (BgL_arg1596z00_1819);
																BgL_jz00_4044 = (int) (((long) 2));
																{	/* Unsafe/aes.scm 420 */
																	uint8_t BgL_arg1494z00_4045;

																	{	/* Unsafe/aes.scm 420 */
																		obj_t BgL_arg1495z00_4046;

																		BgL_arg1495z00_4046 =
																			VECTOR_REF(BgL_wz00_1724,
																			(long) (BgL_iz00_4043));
																		{	/* Unsafe/aes.scm 420 */
																			uint8_t BgL_res2808z00_4051;

																			{	/* Unsafe/aes.scm 420 */
																				long BgL_kz00_4050;

																				BgL_kz00_4050 = (long) (BgL_jz00_4044);
																				{	/* Unsafe/aes.scm 420 */
																					obj_t BgL_tmpz00_7762;

																					BgL_tmpz00_7762 =
																						((obj_t) BgL_arg1495z00_4046);
																					BgL_res2808z00_4051 =
																						BGL_U8VREF(BgL_tmpz00_7762,
																						BgL_kz00_4050);
																			}}
																			BgL_arg1494z00_4045 = BgL_res2808z00_4051;
																	}}
																	{	/* Unsafe/aes.scm 420 */
																		long BgL_res2810z00_4056;

																		{	/* Unsafe/aes.scm 420 */
																			long BgL_arg2392z00_4053;

																			BgL_arg2392z00_4053 =
																				(long) (BgL_arg1494z00_4045);
																			{	/* Unsafe/aes.scm 420 */
																				long BgL_res2809z00_4055;

																				BgL_res2809z00_4055 =
																					(long) (BgL_arg2392z00_4053);
																				BgL_res2810z00_4056 =
																					BgL_res2809z00_4055;
																		}}
																		BgL_res2811z00_4057 =
																			(unsigned long) (BgL_res2810z00_4056);
															}}}
															BgL_arg1592z00_1817 = BgL_res2811z00_4057;
													}}
													{	/* Unsafe/aes.scm 490 */
														uint8_t BgL_arg1597z00_1820;

														{	/* Unsafe/aes.scm 490 */
															uint8_t BgL_res2812z00_4060;

															BgL_res2812z00_4060 =
																BGL_U8VREF(BgL_tempz00_1725, ((long) 2));
															BgL_arg1597z00_1820 = BgL_res2812z00_4060;
														}
														{	/* Unsafe/aes.scm 490 */
															long BgL_res2814z00_4065;

															{	/* Unsafe/aes.scm 490 */
																long BgL_arg2392z00_4062;

																BgL_arg2392z00_4062 =
																	(long) (BgL_arg1597z00_1820);
																{	/* Unsafe/aes.scm 490 */
																	long BgL_res2813z00_4064;

																	BgL_res2813z00_4064 =
																		(long) (BgL_arg2392z00_4062);
																	BgL_res2814z00_4065 = BgL_res2813z00_4064;
															}}
															BgL_arg1593z00_1818 = BgL_res2814z00_4065;
													}}
													BgL_vz00_1816 =
														(
														(long) (BgL_arg1592z00_1817) ^ BgL_arg1593z00_1818);
												}
												{	/* Unsafe/aes.scm 491 */
													int BgL_iz00_4070;
													int BgL_jz00_4071;
													unsigned long BgL_vz00_4072;

													BgL_iz00_4070 = (int) (BgL_iz00_1750);
													BgL_jz00_4071 = (int) (((long) 2));
													BgL_vz00_4072 = (unsigned long) (BgL_vz00_1816);
													{	/* Unsafe/aes.scm 426 */
														obj_t BgL_arg1496z00_4073;

														BgL_arg1496z00_4073 =
															VECTOR_REF(BgL_wz00_1724, (long) (BgL_iz00_4070));
														{	/* Unsafe/aes.scm 426 */
															uint8_t BgL_auxz00_7780;
															long BgL_tmpz00_7778;

															BgL_auxz00_7780 = (uint8_t) (BgL_vz00_4072);
															BgL_tmpz00_7778 = (long) (BgL_jz00_4071);
															BGL_U8VSET(BgL_arg1496z00_4073, BgL_tmpz00_7778,
																BgL_auxz00_7780);
														} BUNSPEC;
											}}}
											{	/* Unsafe/aes.scm 489 */
												long BgL_vz00_1822;

												{	/* Unsafe/aes.scm 489 */
													unsigned long BgL_arg1598z00_1823;
													long BgL_arg1599z00_1824;

													{	/* Unsafe/aes.scm 489 */
														long BgL_arg1602z00_1825;

														BgL_arg1602z00_1825 =
															(BgL_iz00_1750 - BgL_nkz00_1722);
														{	/* Unsafe/aes.scm 489 */
															unsigned long BgL_res2820z00_4094;

															{	/* Unsafe/aes.scm 489 */
																int BgL_iz00_4080;
																int BgL_jz00_4081;

																BgL_iz00_4080 = (int) (BgL_arg1602z00_1825);
																BgL_jz00_4081 = (int) (((long) 3));
																{	/* Unsafe/aes.scm 420 */
																	uint8_t BgL_arg1494z00_4082;

																	{	/* Unsafe/aes.scm 420 */
																		obj_t BgL_arg1495z00_4083;

																		BgL_arg1495z00_4083 =
																			VECTOR_REF(BgL_wz00_1724,
																			(long) (BgL_iz00_4080));
																		{	/* Unsafe/aes.scm 420 */
																			uint8_t BgL_res2817z00_4088;

																			{	/* Unsafe/aes.scm 420 */
																				long BgL_kz00_4087;

																				BgL_kz00_4087 = (long) (BgL_jz00_4081);
																				{	/* Unsafe/aes.scm 420 */
																					obj_t BgL_tmpz00_7789;

																					BgL_tmpz00_7789 =
																						((obj_t) BgL_arg1495z00_4083);
																					BgL_res2817z00_4088 =
																						BGL_U8VREF(BgL_tmpz00_7789,
																						BgL_kz00_4087);
																			}}
																			BgL_arg1494z00_4082 = BgL_res2817z00_4088;
																	}}
																	{	/* Unsafe/aes.scm 420 */
																		long BgL_res2819z00_4093;

																		{	/* Unsafe/aes.scm 420 */
																			long BgL_arg2392z00_4090;

																			BgL_arg2392z00_4090 =
																				(long) (BgL_arg1494z00_4082);
																			{	/* Unsafe/aes.scm 420 */
																				long BgL_res2818z00_4092;

																				BgL_res2818z00_4092 =
																					(long) (BgL_arg2392z00_4090);
																				BgL_res2819z00_4093 =
																					BgL_res2818z00_4092;
																		}}
																		BgL_res2820z00_4094 =
																			(unsigned long) (BgL_res2819z00_4093);
															}}}
															BgL_arg1598z00_1823 = BgL_res2820z00_4094;
													}}
													{	/* Unsafe/aes.scm 490 */
														uint8_t BgL_arg1603z00_1826;

														{	/* Unsafe/aes.scm 490 */
															uint8_t BgL_res2821z00_4097;

															BgL_res2821z00_4097 =
																BGL_U8VREF(BgL_tempz00_1725, ((long) 3));
															BgL_arg1603z00_1826 = BgL_res2821z00_4097;
														}
														{	/* Unsafe/aes.scm 490 */
															long BgL_res2823z00_4102;

															{	/* Unsafe/aes.scm 490 */
																long BgL_arg2392z00_4099;

																BgL_arg2392z00_4099 =
																	(long) (BgL_arg1603z00_1826);
																{	/* Unsafe/aes.scm 490 */
																	long BgL_res2822z00_4101;

																	BgL_res2822z00_4101 =
																		(long) (BgL_arg2392z00_4099);
																	BgL_res2823z00_4102 = BgL_res2822z00_4101;
															}}
															BgL_arg1599z00_1824 = BgL_res2823z00_4102;
													}}
													BgL_vz00_1822 =
														(
														(long) (BgL_arg1598z00_1823) ^ BgL_arg1599z00_1824);
												}
												{	/* Unsafe/aes.scm 491 */
													int BgL_iz00_4107;
													int BgL_jz00_4108;
													unsigned long BgL_vz00_4109;

													BgL_iz00_4107 = (int) (BgL_iz00_1750);
													BgL_jz00_4108 = (int) (((long) 3));
													BgL_vz00_4109 = (unsigned long) (BgL_vz00_1822);
													{	/* Unsafe/aes.scm 426 */
														obj_t BgL_arg1496z00_4110;

														BgL_arg1496z00_4110 =
															VECTOR_REF(BgL_wz00_1724, (long) (BgL_iz00_4107));
														{	/* Unsafe/aes.scm 426 */
															uint8_t BgL_auxz00_7807;
															long BgL_tmpz00_7805;

															BgL_auxz00_7807 = (uint8_t) (BgL_vz00_4109);
															BgL_tmpz00_7805 = (long) (BgL_jz00_4108);
															BGL_U8VSET(BgL_arg1496z00_4110, BgL_tmpz00_7805,
																BgL_auxz00_7807);
														} BUNSPEC;
											}}}
											{
												long BgL_iz00_7810;

												BgL_iz00_7810 = (BgL_iz00_1750 + ((long) 1));
												BgL_iz00_1750 = BgL_iz00_7810;
												goto BgL_zc3z04anonymousza31532ze3z87_1751;
											}
										}
									else
										{	/* Unsafe/aes.scm 475 */
											((bool_t) 0);
										}
								}
								return BgL_wz00_1724;
							}
						}
					}
				}
			}
		}

	}



/* aes-cipher */
	obj_t BGl_aeszd2cipherzd2zz__aesz00(obj_t BgL_inputz00_83, obj_t BgL_wz00_84,
		obj_t BgL_statez00_85)
	{
		{	/* Unsafe/aes.scm 498 */
			{	/* Unsafe/aes.scm 499 */
				long BgL_nrz00_1838;

				BgL_nrz00_1838 =
					((VECTOR_LENGTH(BgL_wz00_84) / ((long) 4)) - ((long) 1));
				{	/* Unsafe/aes.scm 500 */

					{
						long BgL_iz00_1840;

						BgL_iz00_1840 = ((long) 0);
					BgL_zc3z04anonymousza31613ze3z87_1841:
						if ((BgL_iz00_1840 < (((long) 4) * ((long) 4))))
							{	/* Unsafe/aes.scm 502 */
								{	/* Unsafe/aes.scm 503 */
									long BgL_vz00_1844;

									{	/* Unsafe/aes.scm 503 */
										uint8_t BgL_arg1618z00_1847;

										{	/* Unsafe/aes.scm 503 */
											uint8_t BgL_res2830z00_4128;

											BgL_res2830z00_4128 =
												BGL_U8VREF(BgL_inputz00_83, BgL_iz00_1840);
											BgL_arg1618z00_1847 = BgL_res2830z00_4128;
										}
										{	/* Unsafe/aes.scm 503 */
											long BgL_res2832z00_4133;

											{	/* Unsafe/aes.scm 503 */
												long BgL_arg2392z00_4130;

												BgL_arg2392z00_4130 = (long) (BgL_arg1618z00_1847);
												{	/* Unsafe/aes.scm 503 */
													long BgL_res2831z00_4132;

													BgL_res2831z00_4132 = (long) (BgL_arg2392z00_4130);
													BgL_res2832z00_4133 = BgL_res2831z00_4132;
											}}
											BgL_vz00_1844 = BgL_res2832z00_4133;
									}}
									{	/* Unsafe/aes.scm 504 */
										obj_t BgL_arg1616z00_1845;
										long BgL_arg1617z00_1846;

										BgL_arg1616z00_1845 =
											BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_iz00_1840), BINT(((long) 4)));
										BgL_arg1617z00_1846 = (BgL_iz00_1840 / ((long) 4));
										{	/* Unsafe/aes.scm 504 */
											int BgL_iz00_4137;
											int BgL_jz00_4138;
											unsigned long BgL_vz00_4139;

											BgL_iz00_4137 = CINT(BgL_arg1616z00_1845);
											BgL_jz00_4138 = (int) (BgL_arg1617z00_1846);
											BgL_vz00_4139 = (unsigned long) (BgL_vz00_1844);
											{	/* Unsafe/aes.scm 426 */
												obj_t BgL_arg1496z00_4140;

												BgL_arg1496z00_4140 =
													VECTOR_REF(BgL_statez00_85, (long) (BgL_iz00_4137));
												{	/* Unsafe/aes.scm 426 */
													uint8_t BgL_auxz00_7832;
													long BgL_tmpz00_7830;

													BgL_auxz00_7832 = (uint8_t) (BgL_vz00_4139);
													BgL_tmpz00_7830 = (long) (BgL_jz00_4138);
													BGL_U8VSET(BgL_arg1496z00_4140, BgL_tmpz00_7830,
														BgL_auxz00_7832);
												} BUNSPEC;
								}}}}
								{
									long BgL_iz00_7835;

									BgL_iz00_7835 = (BgL_iz00_1840 + ((long) 1));
									BgL_iz00_1840 = BgL_iz00_7835;
									goto BgL_zc3z04anonymousza31613ze3z87_1841;
								}
							}
						else
							{	/* Unsafe/aes.scm 502 */
								((bool_t) 0);
							}
					}
					BGl_addroundkeyz12z12zz__aesz00(BgL_statez00_85, BgL_wz00_84,
						((long) 0), ((long) 4));
					{
						long BgL_roundz00_1852;

						BgL_roundz00_1852 = ((long) 1);
					BgL_zc3z04anonymousza31621ze3z87_1853:
						if ((BgL_roundz00_1852 < BgL_nrz00_1838))
							{	/* Unsafe/aes.scm 508 */
								BGl_subbytesz12z12zz__aesz00(BgL_statez00_85,
									(int) (((long) 4)));
								BGl_shiftrowsz12z12zz__aesz00(BgL_statez00_85, ((long) 4));
								BGl_mixcolumnsz12z12zz__aesz00(BgL_statez00_85, ((long) 4));
								BGl_addroundkeyz12z12zz__aesz00(BgL_statez00_85, BgL_wz00_84,
									BgL_roundz00_1852, ((long) 4));
								{
									long BgL_roundz00_7845;

									BgL_roundz00_7845 = (BgL_roundz00_1852 + ((long) 1));
									BgL_roundz00_1852 = BgL_roundz00_7845;
									goto BgL_zc3z04anonymousza31621ze3z87_1853;
								}
							}
						else
							{	/* Unsafe/aes.scm 508 */
								((bool_t) 0);
							}
					}
					BGl_subbytesz12z12zz__aesz00(BgL_statez00_85, (int) (((long) 4)));
					BGl_shiftrowsz12z12zz__aesz00(BgL_statez00_85, ((long) 4));
					BGl_addroundkeyz12z12zz__aesz00(BgL_statez00_85, BgL_wz00_84,
						BgL_nrz00_1838, ((long) 4));
					{	/* Unsafe/aes.scm 518 */
						obj_t BgL_outputz00_1857;

						{	/* Unsafe/aes.scm 518 */
							long BgL_arg1632z00_1869;

							BgL_arg1632z00_1869 = (((long) 4) * ((long) 4));
							{	/* Llib/srfi4.scm 447 */

								BgL_outputz00_1857 =
									BGl_makezd2u8vectorzd2zz__srfi4z00(BgL_arg1632z00_1869,
									(uint8_t) (0));
						}}
						{
							long BgL_iz00_1859;

							BgL_iz00_1859 = ((long) 0);
						BgL_zc3z04anonymousza31624ze3z87_1860:
							if ((BgL_iz00_1859 < (((long) 4) * ((long) 4))))
								{	/* Unsafe/aes.scm 519 */
									{	/* Unsafe/aes.scm 520 */
										unsigned long BgL_vz00_1863;

										{	/* Unsafe/aes.scm 520 */
											obj_t BgL_arg1628z00_1864;
											long BgL_arg1629z00_1865;

											BgL_arg1628z00_1864 =
												BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
												(BgL_iz00_1859), BINT(((long) 4)));
											BgL_arg1629z00_1865 = (BgL_iz00_1859 / ((long) 4));
											{	/* Unsafe/aes.scm 520 */
												unsigned long BgL_res2844z00_4174;

												{	/* Unsafe/aes.scm 520 */
													int BgL_iz00_4160;
													int BgL_jz00_4161;

													BgL_iz00_4160 = CINT(BgL_arg1628z00_1864);
													BgL_jz00_4161 = (int) (BgL_arg1629z00_1865);
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_arg1494z00_4162;

														{	/* Unsafe/aes.scm 420 */
															obj_t BgL_arg1495z00_4163;

															BgL_arg1495z00_4163 =
																VECTOR_REF(BgL_statez00_85,
																(long) (BgL_iz00_4160));
															{	/* Unsafe/aes.scm 420 */
																uint8_t BgL_res2841z00_4168;

																{	/* Unsafe/aes.scm 420 */
																	long BgL_kz00_4167;

																	BgL_kz00_4167 = (long) (BgL_jz00_4161);
																	{	/* Unsafe/aes.scm 420 */
																		obj_t BgL_tmpz00_7865;

																		BgL_tmpz00_7865 =
																			((obj_t) BgL_arg1495z00_4163);
																		BgL_res2841z00_4168 =
																			BGL_U8VREF(BgL_tmpz00_7865,
																			BgL_kz00_4167);
																}}
																BgL_arg1494z00_4162 = BgL_res2841z00_4168;
														}}
														{	/* Unsafe/aes.scm 420 */
															long BgL_res2843z00_4173;

															{	/* Unsafe/aes.scm 420 */
																long BgL_arg2392z00_4170;

																BgL_arg2392z00_4170 =
																	(long) (BgL_arg1494z00_4162);
																{	/* Unsafe/aes.scm 420 */
																	long BgL_res2842z00_4172;

																	BgL_res2842z00_4172 =
																		(long) (BgL_arg2392z00_4170);
																	BgL_res2843z00_4173 = BgL_res2842z00_4172;
															}}
															BgL_res2844z00_4174 =
																(unsigned long) (BgL_res2843z00_4173);
												}}}
												BgL_vz00_1863 = BgL_res2844z00_4174;
										}}
										{	/* Unsafe/aes.scm 521 */
											uint8_t BgL_tmpz00_7871;

											BgL_tmpz00_7871 = (uint8_t) (BgL_vz00_1863);
											BGL_U8VSET(BgL_outputz00_1857, BgL_iz00_1859,
												BgL_tmpz00_7871);
										} BUNSPEC;
									}
									{
										long BgL_iz00_7874;

										BgL_iz00_7874 = (BgL_iz00_1859 + ((long) 1));
										BgL_iz00_1859 = BgL_iz00_7874;
										goto BgL_zc3z04anonymousza31624ze3z87_1860;
									}
								}
							else
								{	/* Unsafe/aes.scm 519 */
									((bool_t) 0);
								}
						}
						return BgL_outputz00_1857;
					}
				}
			}
		}

	}



/* subbytes! */
	bool_t BGl_subbytesz12z12zz__aesz00(obj_t BgL_sz00_86, int BgL_nbz00_87)
	{
		{	/* Unsafe/aes.scm 529 */
			{
				long BgL_cz00_1876;

				BgL_cz00_1876 = ((long) 0);
			BgL_zc3z04anonymousza31635ze3z87_1877:
				if ((BgL_cz00_1876 < (long) (BgL_nbz00_87)))
					{	/* Unsafe/aes.scm 531 */
						{	/* Unsafe/aes.scm 532 */
							long BgL_arg1637z00_1879;

							{	/* Unsafe/aes.scm 532 */
								uint8_t BgL_arg1639z00_1880;

								{	/* Unsafe/aes.scm 532 */
									unsigned long BgL_arg1640z00_1881;

									{	/* Unsafe/aes.scm 532 */
										unsigned long BgL_res2850z00_4195;

										{	/* Unsafe/aes.scm 532 */
											int BgL_iz00_4181;
											int BgL_jz00_4182;

											BgL_iz00_4181 = (int) (((long) 0));
											BgL_jz00_4182 = (int) (BgL_cz00_1876);
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_4183;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_4184;

													BgL_arg1495z00_4184 =
														VECTOR_REF(BgL_sz00_86, (long) (BgL_iz00_4181));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res2847z00_4189;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_4188;

															BgL_kz00_4188 = (long) (BgL_jz00_4182);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_7884;

																BgL_tmpz00_7884 = ((obj_t) BgL_arg1495z00_4184);
																BgL_res2847z00_4189 =
																	BGL_U8VREF(BgL_tmpz00_7884, BgL_kz00_4188);
														}}
														BgL_arg1494z00_4183 = BgL_res2847z00_4189;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res2849z00_4194;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_4191;

														BgL_arg2392z00_4191 = (long) (BgL_arg1494z00_4183);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res2848z00_4193;

															BgL_res2848z00_4193 =
																(long) (BgL_arg2392z00_4191);
															BgL_res2849z00_4194 = BgL_res2848z00_4193;
													}}
													BgL_res2850z00_4195 =
														(unsigned long) (BgL_res2849z00_4194);
										}}}
										BgL_arg1640z00_1881 = BgL_res2850z00_4195;
									}
									{	/* Unsafe/aes.scm 532 */
										uint8_t BgL_res2851z00_4198;

										{	/* Unsafe/aes.scm 532 */
											obj_t BgL_vz00_4196;
											long BgL_kz00_4197;

											BgL_vz00_4196 = CNST_TABLE_REF(((long) 1));
											BgL_kz00_4197 = (long) (BgL_arg1640z00_1881);
											BgL_res2851z00_4198 =
												BGL_U8VREF(BgL_vz00_4196, BgL_kz00_4197);
										}
										BgL_arg1639z00_1880 = BgL_res2851z00_4198;
								}}
								{	/* Unsafe/aes.scm 532 */
									long BgL_res2853z00_4203;

									{	/* Unsafe/aes.scm 532 */
										long BgL_arg2392z00_4200;

										BgL_arg2392z00_4200 = (long) (BgL_arg1639z00_1880);
										{	/* Unsafe/aes.scm 532 */
											long BgL_res2852z00_4202;

											BgL_res2852z00_4202 = (long) (BgL_arg2392z00_4200);
											BgL_res2853z00_4203 = BgL_res2852z00_4202;
									}}
									BgL_arg1637z00_1879 = BgL_res2853z00_4203;
							}}
							{	/* Unsafe/aes.scm 532 */
								int BgL_iz00_4205;
								int BgL_jz00_4206;
								unsigned long BgL_vz00_4207;

								BgL_iz00_4205 = (int) (((long) 0));
								BgL_jz00_4206 = (int) (BgL_cz00_1876);
								BgL_vz00_4207 = (unsigned long) (BgL_arg1637z00_1879);
								{	/* Unsafe/aes.scm 426 */
									obj_t BgL_arg1496z00_4208;

									BgL_arg1496z00_4208 =
										VECTOR_REF(BgL_sz00_86, (long) (BgL_iz00_4205));
									{	/* Unsafe/aes.scm 426 */
										uint8_t BgL_auxz00_7902;
										long BgL_tmpz00_7900;

										BgL_auxz00_7902 = (uint8_t) (BgL_vz00_4207);
										BgL_tmpz00_7900 = (long) (BgL_jz00_4206);
										BGL_U8VSET(BgL_arg1496z00_4208, BgL_tmpz00_7900,
											BgL_auxz00_7902);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_7905;

							BgL_cz00_7905 = (BgL_cz00_1876 + ((long) 1));
							BgL_cz00_1876 = BgL_cz00_7905;
							goto BgL_zc3z04anonymousza31635ze3z87_1877;
						}
					}
				else
					{	/* Unsafe/aes.scm 531 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_1886;

				BgL_cz00_1886 = ((long) 0);
			BgL_zc3z04anonymousza31642ze3z87_1887:
				if ((BgL_cz00_1886 < (long) (BgL_nbz00_87)))
					{	/* Unsafe/aes.scm 531 */
						{	/* Unsafe/aes.scm 532 */
							long BgL_arg1644z00_1889;

							{	/* Unsafe/aes.scm 532 */
								uint8_t BgL_arg1645z00_1890;

								{	/* Unsafe/aes.scm 532 */
									unsigned long BgL_arg1648z00_1891;

									{	/* Unsafe/aes.scm 532 */
										unsigned long BgL_res2859z00_4231;

										{	/* Unsafe/aes.scm 532 */
											int BgL_iz00_4217;
											int BgL_jz00_4218;

											BgL_iz00_4217 = (int) (((long) 1));
											BgL_jz00_4218 = (int) (BgL_cz00_1886);
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_4219;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_4220;

													BgL_arg1495z00_4220 =
														VECTOR_REF(BgL_sz00_86, (long) (BgL_iz00_4217));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res2856z00_4225;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_4224;

															BgL_kz00_4224 = (long) (BgL_jz00_4218);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_7915;

																BgL_tmpz00_7915 = ((obj_t) BgL_arg1495z00_4220);
																BgL_res2856z00_4225 =
																	BGL_U8VREF(BgL_tmpz00_7915, BgL_kz00_4224);
														}}
														BgL_arg1494z00_4219 = BgL_res2856z00_4225;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res2858z00_4230;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_4227;

														BgL_arg2392z00_4227 = (long) (BgL_arg1494z00_4219);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res2857z00_4229;

															BgL_res2857z00_4229 =
																(long) (BgL_arg2392z00_4227);
															BgL_res2858z00_4230 = BgL_res2857z00_4229;
													}}
													BgL_res2859z00_4231 =
														(unsigned long) (BgL_res2858z00_4230);
										}}}
										BgL_arg1648z00_1891 = BgL_res2859z00_4231;
									}
									{	/* Unsafe/aes.scm 532 */
										uint8_t BgL_res2860z00_4234;

										{	/* Unsafe/aes.scm 532 */
											obj_t BgL_vz00_4232;
											long BgL_kz00_4233;

											BgL_vz00_4232 = CNST_TABLE_REF(((long) 1));
											BgL_kz00_4233 = (long) (BgL_arg1648z00_1891);
											BgL_res2860z00_4234 =
												BGL_U8VREF(BgL_vz00_4232, BgL_kz00_4233);
										}
										BgL_arg1645z00_1890 = BgL_res2860z00_4234;
								}}
								{	/* Unsafe/aes.scm 532 */
									long BgL_res2862z00_4239;

									{	/* Unsafe/aes.scm 532 */
										long BgL_arg2392z00_4236;

										BgL_arg2392z00_4236 = (long) (BgL_arg1645z00_1890);
										{	/* Unsafe/aes.scm 532 */
											long BgL_res2861z00_4238;

											BgL_res2861z00_4238 = (long) (BgL_arg2392z00_4236);
											BgL_res2862z00_4239 = BgL_res2861z00_4238;
									}}
									BgL_arg1644z00_1889 = BgL_res2862z00_4239;
							}}
							{	/* Unsafe/aes.scm 532 */
								int BgL_iz00_4241;
								int BgL_jz00_4242;
								unsigned long BgL_vz00_4243;

								BgL_iz00_4241 = (int) (((long) 1));
								BgL_jz00_4242 = (int) (BgL_cz00_1886);
								BgL_vz00_4243 = (unsigned long) (BgL_arg1644z00_1889);
								{	/* Unsafe/aes.scm 426 */
									obj_t BgL_arg1496z00_4244;

									BgL_arg1496z00_4244 =
										VECTOR_REF(BgL_sz00_86, (long) (BgL_iz00_4241));
									{	/* Unsafe/aes.scm 426 */
										uint8_t BgL_auxz00_7933;
										long BgL_tmpz00_7931;

										BgL_auxz00_7933 = (uint8_t) (BgL_vz00_4243);
										BgL_tmpz00_7931 = (long) (BgL_jz00_4242);
										BGL_U8VSET(BgL_arg1496z00_4244, BgL_tmpz00_7931,
											BgL_auxz00_7933);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_7936;

							BgL_cz00_7936 = (BgL_cz00_1886 + ((long) 1));
							BgL_cz00_1886 = BgL_cz00_7936;
							goto BgL_zc3z04anonymousza31642ze3z87_1887;
						}
					}
				else
					{	/* Unsafe/aes.scm 531 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_1896;

				BgL_cz00_1896 = ((long) 0);
			BgL_zc3z04anonymousza31650ze3z87_1897:
				if ((BgL_cz00_1896 < (long) (BgL_nbz00_87)))
					{	/* Unsafe/aes.scm 531 */
						{	/* Unsafe/aes.scm 532 */
							long BgL_arg1652z00_1899;

							{	/* Unsafe/aes.scm 532 */
								uint8_t BgL_arg1654z00_1900;

								{	/* Unsafe/aes.scm 532 */
									unsigned long BgL_arg1656z00_1901;

									{	/* Unsafe/aes.scm 532 */
										unsigned long BgL_res2868z00_4267;

										{	/* Unsafe/aes.scm 532 */
											int BgL_iz00_4253;
											int BgL_jz00_4254;

											BgL_iz00_4253 = (int) (((long) 2));
											BgL_jz00_4254 = (int) (BgL_cz00_1896);
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_4255;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_4256;

													BgL_arg1495z00_4256 =
														VECTOR_REF(BgL_sz00_86, (long) (BgL_iz00_4253));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res2865z00_4261;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_4260;

															BgL_kz00_4260 = (long) (BgL_jz00_4254);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_7946;

																BgL_tmpz00_7946 = ((obj_t) BgL_arg1495z00_4256);
																BgL_res2865z00_4261 =
																	BGL_U8VREF(BgL_tmpz00_7946, BgL_kz00_4260);
														}}
														BgL_arg1494z00_4255 = BgL_res2865z00_4261;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res2867z00_4266;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_4263;

														BgL_arg2392z00_4263 = (long) (BgL_arg1494z00_4255);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res2866z00_4265;

															BgL_res2866z00_4265 =
																(long) (BgL_arg2392z00_4263);
															BgL_res2867z00_4266 = BgL_res2866z00_4265;
													}}
													BgL_res2868z00_4267 =
														(unsigned long) (BgL_res2867z00_4266);
										}}}
										BgL_arg1656z00_1901 = BgL_res2868z00_4267;
									}
									{	/* Unsafe/aes.scm 532 */
										uint8_t BgL_res2869z00_4270;

										{	/* Unsafe/aes.scm 532 */
											obj_t BgL_vz00_4268;
											long BgL_kz00_4269;

											BgL_vz00_4268 = CNST_TABLE_REF(((long) 1));
											BgL_kz00_4269 = (long) (BgL_arg1656z00_1901);
											BgL_res2869z00_4270 =
												BGL_U8VREF(BgL_vz00_4268, BgL_kz00_4269);
										}
										BgL_arg1654z00_1900 = BgL_res2869z00_4270;
								}}
								{	/* Unsafe/aes.scm 532 */
									long BgL_res2871z00_4275;

									{	/* Unsafe/aes.scm 532 */
										long BgL_arg2392z00_4272;

										BgL_arg2392z00_4272 = (long) (BgL_arg1654z00_1900);
										{	/* Unsafe/aes.scm 532 */
											long BgL_res2870z00_4274;

											BgL_res2870z00_4274 = (long) (BgL_arg2392z00_4272);
											BgL_res2871z00_4275 = BgL_res2870z00_4274;
									}}
									BgL_arg1652z00_1899 = BgL_res2871z00_4275;
							}}
							{	/* Unsafe/aes.scm 532 */
								int BgL_iz00_4277;
								int BgL_jz00_4278;
								unsigned long BgL_vz00_4279;

								BgL_iz00_4277 = (int) (((long) 2));
								BgL_jz00_4278 = (int) (BgL_cz00_1896);
								BgL_vz00_4279 = (unsigned long) (BgL_arg1652z00_1899);
								{	/* Unsafe/aes.scm 426 */
									obj_t BgL_arg1496z00_4280;

									BgL_arg1496z00_4280 =
										VECTOR_REF(BgL_sz00_86, (long) (BgL_iz00_4277));
									{	/* Unsafe/aes.scm 426 */
										uint8_t BgL_auxz00_7964;
										long BgL_tmpz00_7962;

										BgL_auxz00_7964 = (uint8_t) (BgL_vz00_4279);
										BgL_tmpz00_7962 = (long) (BgL_jz00_4278);
										BGL_U8VSET(BgL_arg1496z00_4280, BgL_tmpz00_7962,
											BgL_auxz00_7964);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_7967;

							BgL_cz00_7967 = (BgL_cz00_1896 + ((long) 1));
							BgL_cz00_1896 = BgL_cz00_7967;
							goto BgL_zc3z04anonymousza31650ze3z87_1897;
						}
					}
				else
					{	/* Unsafe/aes.scm 531 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_1906;

				BgL_cz00_1906 = ((long) 0);
			BgL_zc3z04anonymousza31658ze3z87_1907:
				if ((BgL_cz00_1906 < (long) (BgL_nbz00_87)))
					{	/* Unsafe/aes.scm 531 */
						{	/* Unsafe/aes.scm 532 */
							long BgL_arg1660z00_1909;

							{	/* Unsafe/aes.scm 532 */
								uint8_t BgL_arg1661z00_1910;

								{	/* Unsafe/aes.scm 532 */
									unsigned long BgL_arg1662z00_1911;

									{	/* Unsafe/aes.scm 532 */
										unsigned long BgL_res2877z00_4303;

										{	/* Unsafe/aes.scm 532 */
											int BgL_iz00_4289;
											int BgL_jz00_4290;

											BgL_iz00_4289 = (int) (((long) 3));
											BgL_jz00_4290 = (int) (BgL_cz00_1906);
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_4291;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_4292;

													BgL_arg1495z00_4292 =
														VECTOR_REF(BgL_sz00_86, (long) (BgL_iz00_4289));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res2874z00_4297;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_4296;

															BgL_kz00_4296 = (long) (BgL_jz00_4290);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_7977;

																BgL_tmpz00_7977 = ((obj_t) BgL_arg1495z00_4292);
																BgL_res2874z00_4297 =
																	BGL_U8VREF(BgL_tmpz00_7977, BgL_kz00_4296);
														}}
														BgL_arg1494z00_4291 = BgL_res2874z00_4297;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res2876z00_4302;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_4299;

														BgL_arg2392z00_4299 = (long) (BgL_arg1494z00_4291);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res2875z00_4301;

															BgL_res2875z00_4301 =
																(long) (BgL_arg2392z00_4299);
															BgL_res2876z00_4302 = BgL_res2875z00_4301;
													}}
													BgL_res2877z00_4303 =
														(unsigned long) (BgL_res2876z00_4302);
										}}}
										BgL_arg1662z00_1911 = BgL_res2877z00_4303;
									}
									{	/* Unsafe/aes.scm 532 */
										uint8_t BgL_res2878z00_4306;

										{	/* Unsafe/aes.scm 532 */
											obj_t BgL_vz00_4304;
											long BgL_kz00_4305;

											BgL_vz00_4304 = CNST_TABLE_REF(((long) 1));
											BgL_kz00_4305 = (long) (BgL_arg1662z00_1911);
											BgL_res2878z00_4306 =
												BGL_U8VREF(BgL_vz00_4304, BgL_kz00_4305);
										}
										BgL_arg1661z00_1910 = BgL_res2878z00_4306;
								}}
								{	/* Unsafe/aes.scm 532 */
									long BgL_res2880z00_4311;

									{	/* Unsafe/aes.scm 532 */
										long BgL_arg2392z00_4308;

										BgL_arg2392z00_4308 = (long) (BgL_arg1661z00_1910);
										{	/* Unsafe/aes.scm 532 */
											long BgL_res2879z00_4310;

											BgL_res2879z00_4310 = (long) (BgL_arg2392z00_4308);
											BgL_res2880z00_4311 = BgL_res2879z00_4310;
									}}
									BgL_arg1660z00_1909 = BgL_res2880z00_4311;
							}}
							{	/* Unsafe/aes.scm 532 */
								int BgL_iz00_4313;
								int BgL_jz00_4314;
								unsigned long BgL_vz00_4315;

								BgL_iz00_4313 = (int) (((long) 3));
								BgL_jz00_4314 = (int) (BgL_cz00_1906);
								BgL_vz00_4315 = (unsigned long) (BgL_arg1660z00_1909);
								{	/* Unsafe/aes.scm 426 */
									obj_t BgL_arg1496z00_4316;

									BgL_arg1496z00_4316 =
										VECTOR_REF(BgL_sz00_86, (long) (BgL_iz00_4313));
									{	/* Unsafe/aes.scm 426 */
										uint8_t BgL_auxz00_7995;
										long BgL_tmpz00_7993;

										BgL_auxz00_7995 = (uint8_t) (BgL_vz00_4315);
										BgL_tmpz00_7993 = (long) (BgL_jz00_4314);
										BGL_U8VSET(BgL_arg1496z00_4316, BgL_tmpz00_7993,
											BgL_auxz00_7995);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_7998;

							BgL_cz00_7998 = (BgL_cz00_1906 + ((long) 1));
							BgL_cz00_1906 = BgL_cz00_7998;
							goto BgL_zc3z04anonymousza31658ze3z87_1907;
						}
					}
				else
					{	/* Unsafe/aes.scm 531 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* shiftrows! */
	bool_t BGl_shiftrowsz12z12zz__aesz00(obj_t BgL_sz00_88, long BgL_nbz00_89)
	{
		{	/* Unsafe/aes.scm 539 */
			{	/* Unsafe/aes.scm 540 */
				obj_t BgL_tz00_1914;

				{	/* Llib/srfi4.scm 447 */

					BgL_tz00_1914 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), (uint8_t) (0));
				}
				{
					long BgL_rz00_1916;

					BgL_rz00_1916 = ((long) 1);
				BgL_zc3z04anonymousza31664ze3z87_1917:
					if ((BgL_rz00_1916 < ((long) 4)))
						{	/* Unsafe/aes.scm 541 */
							{	/* Unsafe/aes.scm 543 */
								unsigned long BgL_arg1667z00_1920;

								{	/* Unsafe/aes.scm 543 */
									obj_t BgL_arg1668z00_1921;

									{	/* Unsafe/aes.scm 543 */
										long BgL_arg1669z00_1922;

										BgL_arg1669z00_1922 = (((long) 0) + BgL_rz00_1916);
										BgL_arg1668z00_1921 =
											BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_arg1669z00_1922), BINT(BgL_nbz00_89));
									}
									{	/* Unsafe/aes.scm 543 */
										unsigned long BgL_res2887z00_4341;

										{	/* Unsafe/aes.scm 543 */
											int BgL_iz00_4327;
											int BgL_jz00_4328;

											BgL_iz00_4327 = (int) (BgL_rz00_1916);
											BgL_jz00_4328 = CINT(BgL_arg1668z00_1921);
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_4329;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_4330;

													BgL_arg1495z00_4330 =
														VECTOR_REF(BgL_sz00_88, (long) (BgL_iz00_4327));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res2884z00_4335;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_4334;

															BgL_kz00_4334 = (long) (BgL_jz00_4328);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_8012;

																BgL_tmpz00_8012 = ((obj_t) BgL_arg1495z00_4330);
																BgL_res2884z00_4335 =
																	BGL_U8VREF(BgL_tmpz00_8012, BgL_kz00_4334);
														}}
														BgL_arg1494z00_4329 = BgL_res2884z00_4335;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res2886z00_4340;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_4337;

														BgL_arg2392z00_4337 = (long) (BgL_arg1494z00_4329);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res2885z00_4339;

															BgL_res2885z00_4339 =
																(long) (BgL_arg2392z00_4337);
															BgL_res2886z00_4340 = BgL_res2885z00_4339;
													}}
													BgL_res2887z00_4341 =
														(unsigned long) (BgL_res2886z00_4340);
										}}}
										BgL_arg1667z00_1920 = BgL_res2887z00_4341;
								}}
								{	/* Unsafe/aes.scm 543 */
									uint8_t BgL_tmpz00_8018;

									BgL_tmpz00_8018 = (uint8_t) (BgL_arg1667z00_1920);
									BGL_U8VSET(BgL_tz00_1914, ((long) 0), BgL_tmpz00_8018);
								} BUNSPEC;
							}
							{	/* Unsafe/aes.scm 543 */
								unsigned long BgL_arg1672z00_1924;

								{	/* Unsafe/aes.scm 543 */
									obj_t BgL_arg1675z00_1925;

									{	/* Unsafe/aes.scm 543 */
										long BgL_arg1683z00_1926;

										BgL_arg1683z00_1926 = (((long) 1) + BgL_rz00_1916);
										BgL_arg1675z00_1925 =
											BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_arg1683z00_1926), BINT(BgL_nbz00_89));
									}
									{	/* Unsafe/aes.scm 543 */
										unsigned long BgL_res2892z00_4360;

										{	/* Unsafe/aes.scm 543 */
											int BgL_iz00_4346;
											int BgL_jz00_4347;

											BgL_iz00_4346 = (int) (BgL_rz00_1916);
											BgL_jz00_4347 = CINT(BgL_arg1675z00_1925);
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_4348;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_4349;

													BgL_arg1495z00_4349 =
														VECTOR_REF(BgL_sz00_88, (long) (BgL_iz00_4346));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res2889z00_4354;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_4353;

															BgL_kz00_4353 = (long) (BgL_jz00_4347);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_8030;

																BgL_tmpz00_8030 = ((obj_t) BgL_arg1495z00_4349);
																BgL_res2889z00_4354 =
																	BGL_U8VREF(BgL_tmpz00_8030, BgL_kz00_4353);
														}}
														BgL_arg1494z00_4348 = BgL_res2889z00_4354;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res2891z00_4359;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_4356;

														BgL_arg2392z00_4356 = (long) (BgL_arg1494z00_4348);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res2890z00_4358;

															BgL_res2890z00_4358 =
																(long) (BgL_arg2392z00_4356);
															BgL_res2891z00_4359 = BgL_res2890z00_4358;
													}}
													BgL_res2892z00_4360 =
														(unsigned long) (BgL_res2891z00_4359);
										}}}
										BgL_arg1672z00_1924 = BgL_res2892z00_4360;
								}}
								{	/* Unsafe/aes.scm 543 */
									uint8_t BgL_tmpz00_8036;

									BgL_tmpz00_8036 = (uint8_t) (BgL_arg1672z00_1924);
									BGL_U8VSET(BgL_tz00_1914, ((long) 1), BgL_tmpz00_8036);
								} BUNSPEC;
							}
							{	/* Unsafe/aes.scm 543 */
								unsigned long BgL_arg1684z00_1928;

								{	/* Unsafe/aes.scm 543 */
									obj_t BgL_arg1685z00_1929;

									{	/* Unsafe/aes.scm 543 */
										long BgL_arg1686z00_1930;

										BgL_arg1686z00_1930 = (((long) 2) + BgL_rz00_1916);
										BgL_arg1685z00_1929 =
											BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_arg1686z00_1930), BINT(BgL_nbz00_89));
									}
									{	/* Unsafe/aes.scm 543 */
										unsigned long BgL_res2897z00_4379;

										{	/* Unsafe/aes.scm 543 */
											int BgL_iz00_4365;
											int BgL_jz00_4366;

											BgL_iz00_4365 = (int) (BgL_rz00_1916);
											BgL_jz00_4366 = CINT(BgL_arg1685z00_1929);
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_4367;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_4368;

													BgL_arg1495z00_4368 =
														VECTOR_REF(BgL_sz00_88, (long) (BgL_iz00_4365));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res2894z00_4373;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_4372;

															BgL_kz00_4372 = (long) (BgL_jz00_4366);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_8048;

																BgL_tmpz00_8048 = ((obj_t) BgL_arg1495z00_4368);
																BgL_res2894z00_4373 =
																	BGL_U8VREF(BgL_tmpz00_8048, BgL_kz00_4372);
														}}
														BgL_arg1494z00_4367 = BgL_res2894z00_4373;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res2896z00_4378;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_4375;

														BgL_arg2392z00_4375 = (long) (BgL_arg1494z00_4367);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res2895z00_4377;

															BgL_res2895z00_4377 =
																(long) (BgL_arg2392z00_4375);
															BgL_res2896z00_4378 = BgL_res2895z00_4377;
													}}
													BgL_res2897z00_4379 =
														(unsigned long) (BgL_res2896z00_4378);
										}}}
										BgL_arg1684z00_1928 = BgL_res2897z00_4379;
								}}
								{	/* Unsafe/aes.scm 543 */
									uint8_t BgL_tmpz00_8054;

									BgL_tmpz00_8054 = (uint8_t) (BgL_arg1684z00_1928);
									BGL_U8VSET(BgL_tz00_1914, ((long) 2), BgL_tmpz00_8054);
								} BUNSPEC;
							}
							{	/* Unsafe/aes.scm 543 */
								unsigned long BgL_arg1687z00_1932;

								{	/* Unsafe/aes.scm 543 */
									obj_t BgL_arg1688z00_1933;

									{	/* Unsafe/aes.scm 543 */
										long BgL_arg1691z00_1934;

										BgL_arg1691z00_1934 = (((long) 3) + BgL_rz00_1916);
										BgL_arg1688z00_1933 =
											BGl_remainderz00zz__r4_numbers_6_5_fixnumz00(BINT
											(BgL_arg1691z00_1934), BINT(BgL_nbz00_89));
									}
									{	/* Unsafe/aes.scm 543 */
										unsigned long BgL_res2902z00_4398;

										{	/* Unsafe/aes.scm 543 */
											int BgL_iz00_4384;
											int BgL_jz00_4385;

											BgL_iz00_4384 = (int) (BgL_rz00_1916);
											BgL_jz00_4385 = CINT(BgL_arg1688z00_1933);
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_4386;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_4387;

													BgL_arg1495z00_4387 =
														VECTOR_REF(BgL_sz00_88, (long) (BgL_iz00_4384));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res2899z00_4392;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_4391;

															BgL_kz00_4391 = (long) (BgL_jz00_4385);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_8066;

																BgL_tmpz00_8066 = ((obj_t) BgL_arg1495z00_4387);
																BgL_res2899z00_4392 =
																	BGL_U8VREF(BgL_tmpz00_8066, BgL_kz00_4391);
														}}
														BgL_arg1494z00_4386 = BgL_res2899z00_4392;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res2901z00_4397;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_4394;

														BgL_arg2392z00_4394 = (long) (BgL_arg1494z00_4386);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res2900z00_4396;

															BgL_res2900z00_4396 =
																(long) (BgL_arg2392z00_4394);
															BgL_res2901z00_4397 = BgL_res2900z00_4396;
													}}
													BgL_res2902z00_4398 =
														(unsigned long) (BgL_res2901z00_4397);
										}}}
										BgL_arg1687z00_1932 = BgL_res2902z00_4398;
								}}
								{	/* Unsafe/aes.scm 543 */
									uint8_t BgL_tmpz00_8072;

									BgL_tmpz00_8072 = (uint8_t) (BgL_arg1687z00_1932);
									BGL_U8VSET(BgL_tz00_1914, ((long) 3), BgL_tmpz00_8072);
								} BUNSPEC;
							}
							{	/* Unsafe/aes.scm 545 */
								long BgL_arg1692z00_1936;

								{	/* Unsafe/aes.scm 545 */
									uint8_t BgL_arg1693z00_1937;

									{	/* Unsafe/aes.scm 545 */
										uint8_t BgL_res2903z00_4401;

										BgL_res2903z00_4401 = BGL_U8VREF(BgL_tz00_1914, ((long) 0));
										BgL_arg1693z00_1937 = BgL_res2903z00_4401;
									}
									{	/* Unsafe/aes.scm 545 */
										long BgL_res2905z00_4406;

										{	/* Unsafe/aes.scm 545 */
											long BgL_arg2392z00_4403;

											BgL_arg2392z00_4403 = (long) (BgL_arg1693z00_1937);
											{	/* Unsafe/aes.scm 545 */
												long BgL_res2904z00_4405;

												BgL_res2904z00_4405 = (long) (BgL_arg2392z00_4403);
												BgL_res2905z00_4406 = BgL_res2904z00_4405;
										}}
										BgL_arg1692z00_1936 = BgL_res2905z00_4406;
								}}
								{	/* Unsafe/aes.scm 545 */
									int BgL_iz00_4408;
									int BgL_jz00_4409;
									unsigned long BgL_vz00_4410;

									BgL_iz00_4408 = (int) (BgL_rz00_1916);
									BgL_jz00_4409 = (int) (((long) 0));
									BgL_vz00_4410 = (unsigned long) (BgL_arg1692z00_1936);
									{	/* Unsafe/aes.scm 426 */
										obj_t BgL_arg1496z00_4411;

										BgL_arg1496z00_4411 =
											VECTOR_REF(BgL_sz00_88, (long) (BgL_iz00_4408));
										{	/* Unsafe/aes.scm 426 */
											uint8_t BgL_auxz00_8085;
											long BgL_tmpz00_8083;

											BgL_auxz00_8085 = (uint8_t) (BgL_vz00_4410);
											BgL_tmpz00_8083 = (long) (BgL_jz00_4409);
											BGL_U8VSET(BgL_arg1496z00_4411, BgL_tmpz00_8083,
												BgL_auxz00_8085);
										} BUNSPEC;
							}}}
							{	/* Unsafe/aes.scm 545 */
								long BgL_arg1695z00_1939;

								{	/* Unsafe/aes.scm 545 */
									uint8_t BgL_arg1696z00_1940;

									{	/* Unsafe/aes.scm 545 */
										uint8_t BgL_res2906z00_4416;

										BgL_res2906z00_4416 = BGL_U8VREF(BgL_tz00_1914, ((long) 1));
										BgL_arg1696z00_1940 = BgL_res2906z00_4416;
									}
									{	/* Unsafe/aes.scm 545 */
										long BgL_res2908z00_4421;

										{	/* Unsafe/aes.scm 545 */
											long BgL_arg2392z00_4418;

											BgL_arg2392z00_4418 = (long) (BgL_arg1696z00_1940);
											{	/* Unsafe/aes.scm 545 */
												long BgL_res2907z00_4420;

												BgL_res2907z00_4420 = (long) (BgL_arg2392z00_4418);
												BgL_res2908z00_4421 = BgL_res2907z00_4420;
										}}
										BgL_arg1695z00_1939 = BgL_res2908z00_4421;
								}}
								{	/* Unsafe/aes.scm 545 */
									int BgL_iz00_4423;
									int BgL_jz00_4424;
									unsigned long BgL_vz00_4425;

									BgL_iz00_4423 = (int) (BgL_rz00_1916);
									BgL_jz00_4424 = (int) (((long) 1));
									BgL_vz00_4425 = (unsigned long) (BgL_arg1695z00_1939);
									{	/* Unsafe/aes.scm 426 */
										obj_t BgL_arg1496z00_4426;

										BgL_arg1496z00_4426 =
											VECTOR_REF(BgL_sz00_88, (long) (BgL_iz00_4423));
										{	/* Unsafe/aes.scm 426 */
											uint8_t BgL_auxz00_8098;
											long BgL_tmpz00_8096;

											BgL_auxz00_8098 = (uint8_t) (BgL_vz00_4425);
											BgL_tmpz00_8096 = (long) (BgL_jz00_4424);
											BGL_U8VSET(BgL_arg1496z00_4426, BgL_tmpz00_8096,
												BgL_auxz00_8098);
										} BUNSPEC;
							}}}
							{	/* Unsafe/aes.scm 545 */
								long BgL_arg1697z00_1942;

								{	/* Unsafe/aes.scm 545 */
									uint8_t BgL_arg1698z00_1943;

									{	/* Unsafe/aes.scm 545 */
										uint8_t BgL_res2909z00_4431;

										BgL_res2909z00_4431 = BGL_U8VREF(BgL_tz00_1914, ((long) 2));
										BgL_arg1698z00_1943 = BgL_res2909z00_4431;
									}
									{	/* Unsafe/aes.scm 545 */
										long BgL_res2911z00_4436;

										{	/* Unsafe/aes.scm 545 */
											long BgL_arg2392z00_4433;

											BgL_arg2392z00_4433 = (long) (BgL_arg1698z00_1943);
											{	/* Unsafe/aes.scm 545 */
												long BgL_res2910z00_4435;

												BgL_res2910z00_4435 = (long) (BgL_arg2392z00_4433);
												BgL_res2911z00_4436 = BgL_res2910z00_4435;
										}}
										BgL_arg1697z00_1942 = BgL_res2911z00_4436;
								}}
								{	/* Unsafe/aes.scm 545 */
									int BgL_iz00_4438;
									int BgL_jz00_4439;
									unsigned long BgL_vz00_4440;

									BgL_iz00_4438 = (int) (BgL_rz00_1916);
									BgL_jz00_4439 = (int) (((long) 2));
									BgL_vz00_4440 = (unsigned long) (BgL_arg1697z00_1942);
									{	/* Unsafe/aes.scm 426 */
										obj_t BgL_arg1496z00_4441;

										BgL_arg1496z00_4441 =
											VECTOR_REF(BgL_sz00_88, (long) (BgL_iz00_4438));
										{	/* Unsafe/aes.scm 426 */
											uint8_t BgL_auxz00_8111;
											long BgL_tmpz00_8109;

											BgL_auxz00_8111 = (uint8_t) (BgL_vz00_4440);
											BgL_tmpz00_8109 = (long) (BgL_jz00_4439);
											BGL_U8VSET(BgL_arg1496z00_4441, BgL_tmpz00_8109,
												BgL_auxz00_8111);
										} BUNSPEC;
							}}}
							{	/* Unsafe/aes.scm 545 */
								long BgL_arg1699z00_1945;

								{	/* Unsafe/aes.scm 545 */
									uint8_t BgL_arg1700z00_1946;

									{	/* Unsafe/aes.scm 545 */
										uint8_t BgL_res2912z00_4446;

										BgL_res2912z00_4446 = BGL_U8VREF(BgL_tz00_1914, ((long) 3));
										BgL_arg1700z00_1946 = BgL_res2912z00_4446;
									}
									{	/* Unsafe/aes.scm 545 */
										long BgL_res2914z00_4451;

										{	/* Unsafe/aes.scm 545 */
											long BgL_arg2392z00_4448;

											BgL_arg2392z00_4448 = (long) (BgL_arg1700z00_1946);
											{	/* Unsafe/aes.scm 545 */
												long BgL_res2913z00_4450;

												BgL_res2913z00_4450 = (long) (BgL_arg2392z00_4448);
												BgL_res2914z00_4451 = BgL_res2913z00_4450;
										}}
										BgL_arg1699z00_1945 = BgL_res2914z00_4451;
								}}
								{	/* Unsafe/aes.scm 545 */
									int BgL_iz00_4453;
									int BgL_jz00_4454;
									unsigned long BgL_vz00_4455;

									BgL_iz00_4453 = (int) (BgL_rz00_1916);
									BgL_jz00_4454 = (int) (((long) 3));
									BgL_vz00_4455 = (unsigned long) (BgL_arg1699z00_1945);
									{	/* Unsafe/aes.scm 426 */
										obj_t BgL_arg1496z00_4456;

										BgL_arg1496z00_4456 =
											VECTOR_REF(BgL_sz00_88, (long) (BgL_iz00_4453));
										{	/* Unsafe/aes.scm 426 */
											uint8_t BgL_auxz00_8124;
											long BgL_tmpz00_8122;

											BgL_auxz00_8124 = (uint8_t) (BgL_vz00_4455);
											BgL_tmpz00_8122 = (long) (BgL_jz00_4454);
											BGL_U8VSET(BgL_arg1496z00_4456, BgL_tmpz00_8122,
												BgL_auxz00_8124);
										} BUNSPEC;
							}}}
							{
								long BgL_rz00_8127;

								BgL_rz00_8127 = (BgL_rz00_1916 + ((long) 1));
								BgL_rz00_1916 = BgL_rz00_8127;
								goto BgL_zc3z04anonymousza31664ze3z87_1917;
							}
						}
					else
						{	/* Unsafe/aes.scm 541 */
							return ((bool_t) 0);
						}
				}
			}
		}

	}



/* mixcolumns! */
	obj_t BGl_mixcolumnsz12z12zz__aesz00(obj_t BgL_sz00_90, long BgL_nbz00_91)
	{
		{	/* Unsafe/aes.scm 552 */
			{	/* Unsafe/aes.scm 554 */
				obj_t BgL_az00_1952;
				obj_t BgL_bz00_1953;

				{	/* Llib/srfi4.scm 447 */

					BgL_az00_1952 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), (uint8_t) (0));
				}
				{	/* Llib/srfi4.scm 447 */

					BgL_bz00_1953 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), (uint8_t) (0));
				}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_1955;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res2919z00_4476;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_4462;
							int BgL_jz00_4463;

							BgL_iz00_4462 = (int) (((long) 0));
							BgL_jz00_4463 = (int) (((long) 0));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_4464;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_4465;

									BgL_arg1495z00_4465 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_4462));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res2916z00_4470;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_4469;

											BgL_kz00_4469 = (long) (BgL_jz00_4463);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8136;

												BgL_tmpz00_8136 = ((obj_t) BgL_arg1495z00_4465);
												BgL_res2916z00_4470 =
													BGL_U8VREF(BgL_tmpz00_8136, BgL_kz00_4469);
										}}
										BgL_arg1494z00_4464 = BgL_res2916z00_4470;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res2918z00_4475;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_4472;

										BgL_arg2392z00_4472 = (long) (BgL_arg1494z00_4464);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res2917z00_4474;

											BgL_res2917z00_4474 = (long) (BgL_arg2392z00_4472);
											BgL_res2918z00_4475 = BgL_res2917z00_4474;
									}}
									BgL_res2919z00_4476 = (unsigned long) (BgL_res2918z00_4475);
						}}}
						BgL_vz00_1955 = BgL_res2919z00_4476;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8142;

						BgL_tmpz00_8142 = (uint8_t) (BgL_vz00_1955);
						BGL_U8VSET(BgL_az00_1952, ((long) 0), BgL_tmpz00_8142);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1955) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1704z00_1958;

							BgL_arg1704z00_1958 =
								((long) (BgL_vz00_1955) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8152;

								BgL_tmpz00_8152 = (uint8_t) (BgL_arg1704z00_1958);
								BGL_U8VSET(BgL_bz00_1953, ((long) 0), BgL_tmpz00_8152);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1707z00_1959;

							BgL_arg1707z00_1959 =
								(((long) (BgL_vz00_1955) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8159;

								BgL_tmpz00_8159 = (uint8_t) (BgL_arg1707z00_1959);
								BGL_U8VSET(BgL_bz00_1953, ((long) 0), BgL_tmpz00_8159);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_1963;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res2928z00_4502;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_4488;
							int BgL_jz00_4489;

							BgL_iz00_4488 = (int) (((long) 1));
							BgL_jz00_4489 = (int) (((long) 0));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_4490;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_4491;

									BgL_arg1495z00_4491 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_4488));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res2925z00_4496;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_4495;

											BgL_kz00_4495 = (long) (BgL_jz00_4489);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8167;

												BgL_tmpz00_8167 = ((obj_t) BgL_arg1495z00_4491);
												BgL_res2925z00_4496 =
													BGL_U8VREF(BgL_tmpz00_8167, BgL_kz00_4495);
										}}
										BgL_arg1494z00_4490 = BgL_res2925z00_4496;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res2927z00_4501;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_4498;

										BgL_arg2392z00_4498 = (long) (BgL_arg1494z00_4490);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res2926z00_4500;

											BgL_res2926z00_4500 = (long) (BgL_arg2392z00_4498);
											BgL_res2927z00_4501 = BgL_res2926z00_4500;
									}}
									BgL_res2928z00_4502 = (unsigned long) (BgL_res2927z00_4501);
						}}}
						BgL_vz00_1963 = BgL_res2928z00_4502;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8173;

						BgL_tmpz00_8173 = (uint8_t) (BgL_vz00_1963);
						BGL_U8VSET(BgL_az00_1952, ((long) 1), BgL_tmpz00_8173);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1963) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1710z00_1965;

							BgL_arg1710z00_1965 =
								((long) (BgL_vz00_1963) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8183;

								BgL_tmpz00_8183 = (uint8_t) (BgL_arg1710z00_1965);
								BGL_U8VSET(BgL_bz00_1953, ((long) 1), BgL_tmpz00_8183);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1711z00_1966;

							BgL_arg1711z00_1966 =
								(((long) (BgL_vz00_1963) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8190;

								BgL_tmpz00_8190 = (uint8_t) (BgL_arg1711z00_1966);
								BGL_U8VSET(BgL_bz00_1953, ((long) 1), BgL_tmpz00_8190);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_1970;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res2937z00_4528;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_4514;
							int BgL_jz00_4515;

							BgL_iz00_4514 = (int) (((long) 2));
							BgL_jz00_4515 = (int) (((long) 0));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_4516;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_4517;

									BgL_arg1495z00_4517 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_4514));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res2934z00_4522;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_4521;

											BgL_kz00_4521 = (long) (BgL_jz00_4515);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8198;

												BgL_tmpz00_8198 = ((obj_t) BgL_arg1495z00_4517);
												BgL_res2934z00_4522 =
													BGL_U8VREF(BgL_tmpz00_8198, BgL_kz00_4521);
										}}
										BgL_arg1494z00_4516 = BgL_res2934z00_4522;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res2936z00_4527;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_4524;

										BgL_arg2392z00_4524 = (long) (BgL_arg1494z00_4516);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res2935z00_4526;

											BgL_res2935z00_4526 = (long) (BgL_arg2392z00_4524);
											BgL_res2936z00_4527 = BgL_res2935z00_4526;
									}}
									BgL_res2937z00_4528 = (unsigned long) (BgL_res2936z00_4527);
						}}}
						BgL_vz00_1970 = BgL_res2937z00_4528;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8204;

						BgL_tmpz00_8204 = (uint8_t) (BgL_vz00_1970);
						BGL_U8VSET(BgL_az00_1952, ((long) 2), BgL_tmpz00_8204);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1970) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1716z00_1972;

							BgL_arg1716z00_1972 =
								((long) (BgL_vz00_1970) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8214;

								BgL_tmpz00_8214 = (uint8_t) (BgL_arg1716z00_1972);
								BGL_U8VSET(BgL_bz00_1953, ((long) 2), BgL_tmpz00_8214);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1717z00_1973;

							BgL_arg1717z00_1973 =
								(((long) (BgL_vz00_1970) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8221;

								BgL_tmpz00_8221 = (uint8_t) (BgL_arg1717z00_1973);
								BGL_U8VSET(BgL_bz00_1953, ((long) 2), BgL_tmpz00_8221);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_1977;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res2946z00_4554;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_4540;
							int BgL_jz00_4541;

							BgL_iz00_4540 = (int) (((long) 3));
							BgL_jz00_4541 = (int) (((long) 0));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_4542;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_4543;

									BgL_arg1495z00_4543 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_4540));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res2943z00_4548;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_4547;

											BgL_kz00_4547 = (long) (BgL_jz00_4541);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8229;

												BgL_tmpz00_8229 = ((obj_t) BgL_arg1495z00_4543);
												BgL_res2943z00_4548 =
													BGL_U8VREF(BgL_tmpz00_8229, BgL_kz00_4547);
										}}
										BgL_arg1494z00_4542 = BgL_res2943z00_4548;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res2945z00_4553;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_4550;

										BgL_arg2392z00_4550 = (long) (BgL_arg1494z00_4542);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res2944z00_4552;

											BgL_res2944z00_4552 = (long) (BgL_arg2392z00_4550);
											BgL_res2945z00_4553 = BgL_res2944z00_4552;
									}}
									BgL_res2946z00_4554 = (unsigned long) (BgL_res2945z00_4553);
						}}}
						BgL_vz00_1977 = BgL_res2946z00_4554;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8235;

						BgL_tmpz00_8235 = (uint8_t) (BgL_vz00_1977);
						BGL_U8VSET(BgL_az00_1952, ((long) 3), BgL_tmpz00_8235);
					} BUNSPEC;
					if ((((long) (BgL_vz00_1977) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1721z00_1979;

							BgL_arg1721z00_1979 =
								((long) (BgL_vz00_1977) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8245;

								BgL_tmpz00_8245 = (uint8_t) (BgL_arg1721z00_1979);
								BGL_U8VSET(BgL_bz00_1953, ((long) 3), BgL_tmpz00_8245);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1722z00_1980;

							BgL_arg1722z00_1980 =
								(((long) (BgL_vz00_1977) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8252;

								BgL_tmpz00_8252 = (uint8_t) (BgL_arg1722z00_1980);
								BGL_U8VSET(BgL_bz00_1953, ((long) 3), BgL_tmpz00_8252);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 562 */
					long BgL_arg1726z00_1983;

					{	/* Unsafe/aes.scm 562 */
						long BgL_arg1727z00_1984;
						long BgL_arg1728z00_1985;

						{	/* Unsafe/aes.scm 562 */
							uint8_t BgL_arg1729z00_1986;

							{	/* Unsafe/aes.scm 562 */
								uint8_t BgL_res2952z00_4566;

								BgL_res2952z00_4566 = BGL_U8VREF(BgL_bz00_1953, ((long) 0));
								BgL_arg1729z00_1986 = BgL_res2952z00_4566;
							}
							{	/* Unsafe/aes.scm 562 */
								long BgL_res2954z00_4571;

								{	/* Unsafe/aes.scm 562 */
									long BgL_arg2392z00_4568;

									BgL_arg2392z00_4568 = (long) (BgL_arg1729z00_1986);
									{	/* Unsafe/aes.scm 562 */
										long BgL_res2953z00_4570;

										BgL_res2953z00_4570 = (long) (BgL_arg2392z00_4568);
										BgL_res2954z00_4571 = BgL_res2953z00_4570;
								}}
								BgL_arg1727z00_1984 = BgL_res2954z00_4571;
						}}
						{	/* Unsafe/aes.scm 563 */
							long BgL_arg1730z00_1987;
							long BgL_arg1731z00_1988;

							{	/* Unsafe/aes.scm 563 */
								uint8_t BgL_arg1732z00_1989;

								{	/* Unsafe/aes.scm 563 */
									uint8_t BgL_res2955z00_4573;

									BgL_res2955z00_4573 = BGL_U8VREF(BgL_az00_1952, ((long) 1));
									BgL_arg1732z00_1989 = BgL_res2955z00_4573;
								}
								{	/* Unsafe/aes.scm 563 */
									long BgL_res2957z00_4578;

									{	/* Unsafe/aes.scm 563 */
										long BgL_arg2392z00_4575;

										BgL_arg2392z00_4575 = (long) (BgL_arg1732z00_1989);
										{	/* Unsafe/aes.scm 563 */
											long BgL_res2956z00_4577;

											BgL_res2956z00_4577 = (long) (BgL_arg2392z00_4575);
											BgL_res2957z00_4578 = BgL_res2956z00_4577;
									}}
									BgL_arg1730z00_1987 = BgL_res2957z00_4578;
							}}
							{	/* Unsafe/aes.scm 564 */
								long BgL_arg1733z00_1990;
								long BgL_arg1734z00_1991;

								{	/* Unsafe/aes.scm 564 */
									uint8_t BgL_arg1736z00_1992;

									{	/* Unsafe/aes.scm 564 */
										uint8_t BgL_res2958z00_4580;

										BgL_res2958z00_4580 = BGL_U8VREF(BgL_bz00_1953, ((long) 1));
										BgL_arg1736z00_1992 = BgL_res2958z00_4580;
									}
									{	/* Unsafe/aes.scm 564 */
										long BgL_res2960z00_4585;

										{	/* Unsafe/aes.scm 564 */
											long BgL_arg2392z00_4582;

											BgL_arg2392z00_4582 = (long) (BgL_arg1736z00_1992);
											{	/* Unsafe/aes.scm 564 */
												long BgL_res2959z00_4584;

												BgL_res2959z00_4584 = (long) (BgL_arg2392z00_4582);
												BgL_res2960z00_4585 = BgL_res2959z00_4584;
										}}
										BgL_arg1733z00_1990 = BgL_res2960z00_4585;
								}}
								{	/* Unsafe/aes.scm 565 */
									long BgL_arg1737z00_1993;
									long BgL_arg1738z00_1994;

									{	/* Unsafe/aes.scm 565 */
										uint8_t BgL_arg1739z00_1995;

										{	/* Unsafe/aes.scm 565 */
											uint8_t BgL_res2961z00_4587;

											BgL_res2961z00_4587 =
												BGL_U8VREF(BgL_az00_1952, ((long) 2));
											BgL_arg1739z00_1995 = BgL_res2961z00_4587;
										}
										{	/* Unsafe/aes.scm 565 */
											long BgL_res2963z00_4592;

											{	/* Unsafe/aes.scm 565 */
												long BgL_arg2392z00_4589;

												BgL_arg2392z00_4589 = (long) (BgL_arg1739z00_1995);
												{	/* Unsafe/aes.scm 565 */
													long BgL_res2962z00_4591;

													BgL_res2962z00_4591 = (long) (BgL_arg2392z00_4589);
													BgL_res2963z00_4592 = BgL_res2962z00_4591;
											}}
											BgL_arg1737z00_1993 = BgL_res2963z00_4592;
									}}
									{	/* Unsafe/aes.scm 566 */
										uint8_t BgL_arg1740z00_1996;

										{	/* Unsafe/aes.scm 566 */
											uint8_t BgL_res2964z00_4594;

											BgL_res2964z00_4594 =
												BGL_U8VREF(BgL_az00_1952, ((long) 3));
											BgL_arg1740z00_1996 = BgL_res2964z00_4594;
										}
										{	/* Unsafe/aes.scm 566 */
											long BgL_res2966z00_4599;

											{	/* Unsafe/aes.scm 566 */
												long BgL_arg2392z00_4596;

												BgL_arg2392z00_4596 = (long) (BgL_arg1740z00_1996);
												{	/* Unsafe/aes.scm 566 */
													long BgL_res2965z00_4598;

													BgL_res2965z00_4598 = (long) (BgL_arg2392z00_4596);
													BgL_res2966z00_4599 = BgL_res2965z00_4598;
											}}
											BgL_arg1738z00_1994 = BgL_res2966z00_4599;
									}}
									BgL_arg1734z00_1991 =
										(BgL_arg1737z00_1993 ^ BgL_arg1738z00_1994);
								}
								BgL_arg1731z00_1988 =
									(BgL_arg1733z00_1990 ^ BgL_arg1734z00_1991);
							}
							BgL_arg1728z00_1985 = (BgL_arg1730z00_1987 ^ BgL_arg1731z00_1988);
						}
						BgL_arg1726z00_1983 = (BgL_arg1727z00_1984 ^ BgL_arg1728z00_1985);
					}
					{	/* Unsafe/aes.scm 562 */
						int BgL_jz00_4613;
						unsigned long BgL_vz00_4614;

						BgL_jz00_4613 = (int) (((long) 0));
						BgL_vz00_4614 = (unsigned long) (BgL_arg1726z00_1983);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_4615;

							BgL_arg1496z00_4615 = VECTOR_REF(BgL_sz00_90, ((long) 0));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8279;
								long BgL_tmpz00_8277;

								BgL_auxz00_8279 = (uint8_t) (BgL_vz00_4614);
								BgL_tmpz00_8277 = (long) (BgL_jz00_4613);
								BGL_U8VSET(BgL_arg1496z00_4615, BgL_tmpz00_8277,
									BgL_auxz00_8279);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 567 */
					long BgL_arg1741z00_1997;

					{	/* Unsafe/aes.scm 567 */
						long BgL_arg1742z00_1998;
						long BgL_arg1743z00_1999;

						{	/* Unsafe/aes.scm 567 */
							uint8_t BgL_arg1744z00_2000;

							{	/* Unsafe/aes.scm 567 */
								uint8_t BgL_res2971z00_4618;

								BgL_res2971z00_4618 = BGL_U8VREF(BgL_az00_1952, ((long) 0));
								BgL_arg1744z00_2000 = BgL_res2971z00_4618;
							}
							{	/* Unsafe/aes.scm 567 */
								long BgL_res2973z00_4623;

								{	/* Unsafe/aes.scm 567 */
									long BgL_arg2392z00_4620;

									BgL_arg2392z00_4620 = (long) (BgL_arg1744z00_2000);
									{	/* Unsafe/aes.scm 567 */
										long BgL_res2972z00_4622;

										BgL_res2972z00_4622 = (long) (BgL_arg2392z00_4620);
										BgL_res2973z00_4623 = BgL_res2972z00_4622;
								}}
								BgL_arg1742z00_1998 = BgL_res2973z00_4623;
						}}
						{	/* Unsafe/aes.scm 568 */
							long BgL_arg1745z00_2001;
							long BgL_arg1746z00_2002;

							{	/* Unsafe/aes.scm 568 */
								uint8_t BgL_arg1747z00_2003;

								{	/* Unsafe/aes.scm 568 */
									uint8_t BgL_res2974z00_4625;

									BgL_res2974z00_4625 = BGL_U8VREF(BgL_bz00_1953, ((long) 1));
									BgL_arg1747z00_2003 = BgL_res2974z00_4625;
								}
								{	/* Unsafe/aes.scm 568 */
									long BgL_res2976z00_4630;

									{	/* Unsafe/aes.scm 568 */
										long BgL_arg2392z00_4627;

										BgL_arg2392z00_4627 = (long) (BgL_arg1747z00_2003);
										{	/* Unsafe/aes.scm 568 */
											long BgL_res2975z00_4629;

											BgL_res2975z00_4629 = (long) (BgL_arg2392z00_4627);
											BgL_res2976z00_4630 = BgL_res2975z00_4629;
									}}
									BgL_arg1745z00_2001 = BgL_res2976z00_4630;
							}}
							{	/* Unsafe/aes.scm 569 */
								long BgL_arg1748z00_2004;
								long BgL_arg1750z00_2005;

								{	/* Unsafe/aes.scm 569 */
									uint8_t BgL_arg1751z00_2006;

									{	/* Unsafe/aes.scm 569 */
										uint8_t BgL_res2977z00_4632;

										BgL_res2977z00_4632 = BGL_U8VREF(BgL_az00_1952, ((long) 2));
										BgL_arg1751z00_2006 = BgL_res2977z00_4632;
									}
									{	/* Unsafe/aes.scm 569 */
										long BgL_res2979z00_4637;

										{	/* Unsafe/aes.scm 569 */
											long BgL_arg2392z00_4634;

											BgL_arg2392z00_4634 = (long) (BgL_arg1751z00_2006);
											{	/* Unsafe/aes.scm 569 */
												long BgL_res2978z00_4636;

												BgL_res2978z00_4636 = (long) (BgL_arg2392z00_4634);
												BgL_res2979z00_4637 = BgL_res2978z00_4636;
										}}
										BgL_arg1748z00_2004 = BgL_res2979z00_4637;
								}}
								{	/* Unsafe/aes.scm 570 */
									long BgL_arg1752z00_2007;
									long BgL_arg1754z00_2008;

									{	/* Unsafe/aes.scm 570 */
										uint8_t BgL_arg1755z00_2009;

										{	/* Unsafe/aes.scm 570 */
											uint8_t BgL_res2980z00_4639;

											BgL_res2980z00_4639 =
												BGL_U8VREF(BgL_bz00_1953, ((long) 2));
											BgL_arg1755z00_2009 = BgL_res2980z00_4639;
										}
										{	/* Unsafe/aes.scm 570 */
											long BgL_res2982z00_4644;

											{	/* Unsafe/aes.scm 570 */
												long BgL_arg2392z00_4641;

												BgL_arg2392z00_4641 = (long) (BgL_arg1755z00_2009);
												{	/* Unsafe/aes.scm 570 */
													long BgL_res2981z00_4643;

													BgL_res2981z00_4643 = (long) (BgL_arg2392z00_4641);
													BgL_res2982z00_4644 = BgL_res2981z00_4643;
											}}
											BgL_arg1752z00_2007 = BgL_res2982z00_4644;
									}}
									{	/* Unsafe/aes.scm 571 */
										uint8_t BgL_arg1756z00_2010;

										{	/* Unsafe/aes.scm 571 */
											uint8_t BgL_res2983z00_4646;

											BgL_res2983z00_4646 =
												BGL_U8VREF(BgL_az00_1952, ((long) 3));
											BgL_arg1756z00_2010 = BgL_res2983z00_4646;
										}
										{	/* Unsafe/aes.scm 571 */
											long BgL_res2985z00_4651;

											{	/* Unsafe/aes.scm 571 */
												long BgL_arg2392z00_4648;

												BgL_arg2392z00_4648 = (long) (BgL_arg1756z00_2010);
												{	/* Unsafe/aes.scm 571 */
													long BgL_res2984z00_4650;

													BgL_res2984z00_4650 = (long) (BgL_arg2392z00_4648);
													BgL_res2985z00_4651 = BgL_res2984z00_4650;
											}}
											BgL_arg1754z00_2008 = BgL_res2985z00_4651;
									}}
									BgL_arg1750z00_2005 =
										(BgL_arg1752z00_2007 ^ BgL_arg1754z00_2008);
								}
								BgL_arg1746z00_2002 =
									(BgL_arg1748z00_2004 ^ BgL_arg1750z00_2005);
							}
							BgL_arg1743z00_1999 = (BgL_arg1745z00_2001 ^ BgL_arg1746z00_2002);
						}
						BgL_arg1741z00_1997 = (BgL_arg1742z00_1998 ^ BgL_arg1743z00_1999);
					}
					{	/* Unsafe/aes.scm 567 */
						int BgL_jz00_4665;
						unsigned long BgL_vz00_4666;

						BgL_jz00_4665 = (int) (((long) 0));
						BgL_vz00_4666 = (unsigned long) (BgL_arg1741z00_1997);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_4667;

							BgL_arg1496z00_4667 = VECTOR_REF(BgL_sz00_90, ((long) 1));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8306;
								long BgL_tmpz00_8304;

								BgL_auxz00_8306 = (uint8_t) (BgL_vz00_4666);
								BgL_tmpz00_8304 = (long) (BgL_jz00_4665);
								BGL_U8VSET(BgL_arg1496z00_4667, BgL_tmpz00_8304,
									BgL_auxz00_8306);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 572 */
					long BgL_arg1757z00_2011;

					{	/* Unsafe/aes.scm 572 */
						long BgL_arg1759z00_2012;
						long BgL_arg1760z00_2013;

						{	/* Unsafe/aes.scm 572 */
							uint8_t BgL_arg1761z00_2014;

							{	/* Unsafe/aes.scm 572 */
								uint8_t BgL_res2990z00_4670;

								BgL_res2990z00_4670 = BGL_U8VREF(BgL_az00_1952, ((long) 0));
								BgL_arg1761z00_2014 = BgL_res2990z00_4670;
							}
							{	/* Unsafe/aes.scm 572 */
								long BgL_res2992z00_4675;

								{	/* Unsafe/aes.scm 572 */
									long BgL_arg2392z00_4672;

									BgL_arg2392z00_4672 = (long) (BgL_arg1761z00_2014);
									{	/* Unsafe/aes.scm 572 */
										long BgL_res2991z00_4674;

										BgL_res2991z00_4674 = (long) (BgL_arg2392z00_4672);
										BgL_res2992z00_4675 = BgL_res2991z00_4674;
								}}
								BgL_arg1759z00_2012 = BgL_res2992z00_4675;
						}}
						{	/* Unsafe/aes.scm 573 */
							long BgL_arg1762z00_2015;
							long BgL_arg1763z00_2016;

							{	/* Unsafe/aes.scm 573 */
								uint8_t BgL_arg1764z00_2017;

								{	/* Unsafe/aes.scm 573 */
									uint8_t BgL_res2993z00_4677;

									BgL_res2993z00_4677 = BGL_U8VREF(BgL_az00_1952, ((long) 1));
									BgL_arg1764z00_2017 = BgL_res2993z00_4677;
								}
								{	/* Unsafe/aes.scm 573 */
									long BgL_res2995z00_4682;

									{	/* Unsafe/aes.scm 573 */
										long BgL_arg2392z00_4679;

										BgL_arg2392z00_4679 = (long) (BgL_arg1764z00_2017);
										{	/* Unsafe/aes.scm 573 */
											long BgL_res2994z00_4681;

											BgL_res2994z00_4681 = (long) (BgL_arg2392z00_4679);
											BgL_res2995z00_4682 = BgL_res2994z00_4681;
									}}
									BgL_arg1762z00_2015 = BgL_res2995z00_4682;
							}}
							{	/* Unsafe/aes.scm 574 */
								long BgL_arg1765z00_2018;
								long BgL_arg1766z00_2019;

								{	/* Unsafe/aes.scm 574 */
									uint8_t BgL_arg1768z00_2020;

									{	/* Unsafe/aes.scm 574 */
										uint8_t BgL_res2996z00_4684;

										BgL_res2996z00_4684 = BGL_U8VREF(BgL_bz00_1953, ((long) 2));
										BgL_arg1768z00_2020 = BgL_res2996z00_4684;
									}
									{	/* Unsafe/aes.scm 574 */
										long BgL_res2998z00_4689;

										{	/* Unsafe/aes.scm 574 */
											long BgL_arg2392z00_4686;

											BgL_arg2392z00_4686 = (long) (BgL_arg1768z00_2020);
											{	/* Unsafe/aes.scm 574 */
												long BgL_res2997z00_4688;

												BgL_res2997z00_4688 = (long) (BgL_arg2392z00_4686);
												BgL_res2998z00_4689 = BgL_res2997z00_4688;
										}}
										BgL_arg1765z00_2018 = BgL_res2998z00_4689;
								}}
								{	/* Unsafe/aes.scm 575 */
									long BgL_arg1769z00_2021;
									long BgL_arg1770z00_2022;

									{	/* Unsafe/aes.scm 575 */
										uint8_t BgL_arg1771z00_2023;

										{	/* Unsafe/aes.scm 575 */
											uint8_t BgL_res2999z00_4691;

											BgL_res2999z00_4691 =
												BGL_U8VREF(BgL_az00_1952, ((long) 3));
											BgL_arg1771z00_2023 = BgL_res2999z00_4691;
										}
										{	/* Unsafe/aes.scm 575 */
											long BgL_res3001z00_4696;

											{	/* Unsafe/aes.scm 575 */
												long BgL_arg2392z00_4693;

												BgL_arg2392z00_4693 = (long) (BgL_arg1771z00_2023);
												{	/* Unsafe/aes.scm 575 */
													long BgL_res3000z00_4695;

													BgL_res3000z00_4695 = (long) (BgL_arg2392z00_4693);
													BgL_res3001z00_4696 = BgL_res3000z00_4695;
											}}
											BgL_arg1769z00_2021 = BgL_res3001z00_4696;
									}}
									{	/* Unsafe/aes.scm 576 */
										uint8_t BgL_arg1772z00_2024;

										{	/* Unsafe/aes.scm 576 */
											uint8_t BgL_res3002z00_4698;

											BgL_res3002z00_4698 =
												BGL_U8VREF(BgL_bz00_1953, ((long) 3));
											BgL_arg1772z00_2024 = BgL_res3002z00_4698;
										}
										{	/* Unsafe/aes.scm 576 */
											long BgL_res3004z00_4703;

											{	/* Unsafe/aes.scm 576 */
												long BgL_arg2392z00_4700;

												BgL_arg2392z00_4700 = (long) (BgL_arg1772z00_2024);
												{	/* Unsafe/aes.scm 576 */
													long BgL_res3003z00_4702;

													BgL_res3003z00_4702 = (long) (BgL_arg2392z00_4700);
													BgL_res3004z00_4703 = BgL_res3003z00_4702;
											}}
											BgL_arg1770z00_2022 = BgL_res3004z00_4703;
									}}
									BgL_arg1766z00_2019 =
										(BgL_arg1769z00_2021 ^ BgL_arg1770z00_2022);
								}
								BgL_arg1763z00_2016 =
									(BgL_arg1765z00_2018 ^ BgL_arg1766z00_2019);
							}
							BgL_arg1760z00_2013 = (BgL_arg1762z00_2015 ^ BgL_arg1763z00_2016);
						}
						BgL_arg1757z00_2011 = (BgL_arg1759z00_2012 ^ BgL_arg1760z00_2013);
					}
					{	/* Unsafe/aes.scm 572 */
						int BgL_jz00_4717;
						unsigned long BgL_vz00_4718;

						BgL_jz00_4717 = (int) (((long) 0));
						BgL_vz00_4718 = (unsigned long) (BgL_arg1757z00_2011);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_4719;

							BgL_arg1496z00_4719 = VECTOR_REF(BgL_sz00_90, ((long) 2));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8333;
								long BgL_tmpz00_8331;

								BgL_auxz00_8333 = (uint8_t) (BgL_vz00_4718);
								BgL_tmpz00_8331 = (long) (BgL_jz00_4717);
								BGL_U8VSET(BgL_arg1496z00_4719, BgL_tmpz00_8331,
									BgL_auxz00_8333);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 577 */
					long BgL_arg1773z00_2025;

					{	/* Unsafe/aes.scm 577 */
						long BgL_arg1774z00_2026;
						long BgL_arg1775z00_2027;

						{	/* Unsafe/aes.scm 577 */
							uint8_t BgL_arg1776z00_2028;

							{	/* Unsafe/aes.scm 577 */
								uint8_t BgL_res3009z00_4722;

								BgL_res3009z00_4722 = BGL_U8VREF(BgL_az00_1952, ((long) 0));
								BgL_arg1776z00_2028 = BgL_res3009z00_4722;
							}
							{	/* Unsafe/aes.scm 577 */
								long BgL_res3011z00_4727;

								{	/* Unsafe/aes.scm 577 */
									long BgL_arg2392z00_4724;

									BgL_arg2392z00_4724 = (long) (BgL_arg1776z00_2028);
									{	/* Unsafe/aes.scm 577 */
										long BgL_res3010z00_4726;

										BgL_res3010z00_4726 = (long) (BgL_arg2392z00_4724);
										BgL_res3011z00_4727 = BgL_res3010z00_4726;
								}}
								BgL_arg1774z00_2026 = BgL_res3011z00_4727;
						}}
						{	/* Unsafe/aes.scm 578 */
							long BgL_arg1777z00_2029;
							long BgL_arg1778z00_2030;

							{	/* Unsafe/aes.scm 578 */
								uint8_t BgL_arg1779z00_2031;

								{	/* Unsafe/aes.scm 578 */
									uint8_t BgL_res3012z00_4729;

									BgL_res3012z00_4729 = BGL_U8VREF(BgL_bz00_1953, ((long) 0));
									BgL_arg1779z00_2031 = BgL_res3012z00_4729;
								}
								{	/* Unsafe/aes.scm 578 */
									long BgL_res3014z00_4734;

									{	/* Unsafe/aes.scm 578 */
										long BgL_arg2392z00_4731;

										BgL_arg2392z00_4731 = (long) (BgL_arg1779z00_2031);
										{	/* Unsafe/aes.scm 578 */
											long BgL_res3013z00_4733;

											BgL_res3013z00_4733 = (long) (BgL_arg2392z00_4731);
											BgL_res3014z00_4734 = BgL_res3013z00_4733;
									}}
									BgL_arg1777z00_2029 = BgL_res3014z00_4734;
							}}
							{	/* Unsafe/aes.scm 579 */
								long BgL_arg1780z00_2032;
								long BgL_arg1781z00_2033;

								{	/* Unsafe/aes.scm 579 */
									uint8_t BgL_arg1782z00_2034;

									{	/* Unsafe/aes.scm 579 */
										uint8_t BgL_res3015z00_4736;

										BgL_res3015z00_4736 = BGL_U8VREF(BgL_az00_1952, ((long) 1));
										BgL_arg1782z00_2034 = BgL_res3015z00_4736;
									}
									{	/* Unsafe/aes.scm 579 */
										long BgL_res3017z00_4741;

										{	/* Unsafe/aes.scm 579 */
											long BgL_arg2392z00_4738;

											BgL_arg2392z00_4738 = (long) (BgL_arg1782z00_2034);
											{	/* Unsafe/aes.scm 579 */
												long BgL_res3016z00_4740;

												BgL_res3016z00_4740 = (long) (BgL_arg2392z00_4738);
												BgL_res3017z00_4741 = BgL_res3016z00_4740;
										}}
										BgL_arg1780z00_2032 = BgL_res3017z00_4741;
								}}
								{	/* Unsafe/aes.scm 580 */
									long BgL_arg1783z00_2035;
									long BgL_arg1784z00_2036;

									{	/* Unsafe/aes.scm 580 */
										uint8_t BgL_arg1786z00_2037;

										{	/* Unsafe/aes.scm 580 */
											uint8_t BgL_res3018z00_4743;

											BgL_res3018z00_4743 =
												BGL_U8VREF(BgL_az00_1952, ((long) 2));
											BgL_arg1786z00_2037 = BgL_res3018z00_4743;
										}
										{	/* Unsafe/aes.scm 580 */
											long BgL_res3020z00_4748;

											{	/* Unsafe/aes.scm 580 */
												long BgL_arg2392z00_4745;

												BgL_arg2392z00_4745 = (long) (BgL_arg1786z00_2037);
												{	/* Unsafe/aes.scm 580 */
													long BgL_res3019z00_4747;

													BgL_res3019z00_4747 = (long) (BgL_arg2392z00_4745);
													BgL_res3020z00_4748 = BgL_res3019z00_4747;
											}}
											BgL_arg1783z00_2035 = BgL_res3020z00_4748;
									}}
									{	/* Unsafe/aes.scm 581 */
										uint8_t BgL_arg1787z00_2038;

										{	/* Unsafe/aes.scm 581 */
											uint8_t BgL_res3021z00_4750;

											BgL_res3021z00_4750 =
												BGL_U8VREF(BgL_bz00_1953, ((long) 3));
											BgL_arg1787z00_2038 = BgL_res3021z00_4750;
										}
										{	/* Unsafe/aes.scm 581 */
											long BgL_res3023z00_4755;

											{	/* Unsafe/aes.scm 581 */
												long BgL_arg2392z00_4752;

												BgL_arg2392z00_4752 = (long) (BgL_arg1787z00_2038);
												{	/* Unsafe/aes.scm 581 */
													long BgL_res3022z00_4754;

													BgL_res3022z00_4754 = (long) (BgL_arg2392z00_4752);
													BgL_res3023z00_4755 = BgL_res3022z00_4754;
											}}
											BgL_arg1784z00_2036 = BgL_res3023z00_4755;
									}}
									BgL_arg1781z00_2033 =
										(BgL_arg1783z00_2035 ^ BgL_arg1784z00_2036);
								}
								BgL_arg1778z00_2030 =
									(BgL_arg1780z00_2032 ^ BgL_arg1781z00_2033);
							}
							BgL_arg1775z00_2027 = (BgL_arg1777z00_2029 ^ BgL_arg1778z00_2030);
						}
						BgL_arg1773z00_2025 = (BgL_arg1774z00_2026 ^ BgL_arg1775z00_2027);
					}
					{	/* Unsafe/aes.scm 577 */
						int BgL_jz00_4769;
						unsigned long BgL_vz00_4770;

						BgL_jz00_4769 = (int) (((long) 0));
						BgL_vz00_4770 = (unsigned long) (BgL_arg1773z00_2025);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_4771;

							BgL_arg1496z00_4771 = VECTOR_REF(BgL_sz00_90, ((long) 3));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8360;
								long BgL_tmpz00_8358;

								BgL_auxz00_8360 = (uint8_t) (BgL_vz00_4770);
								BgL_tmpz00_8358 = (long) (BgL_jz00_4769);
								BGL_U8VSET(BgL_arg1496z00_4771, BgL_tmpz00_8358,
									BgL_auxz00_8360);
							} BUNSPEC;
			}}}}
			{	/* Unsafe/aes.scm 554 */
				obj_t BgL_az00_2044;
				obj_t BgL_bz00_2045;

				{	/* Llib/srfi4.scm 447 */

					BgL_az00_2044 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), (uint8_t) (0));
				}
				{	/* Llib/srfi4.scm 447 */

					BgL_bz00_2045 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), (uint8_t) (0));
				}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2047;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3031z00_4788;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_4774;
							int BgL_jz00_4775;

							BgL_iz00_4774 = (int) (((long) 0));
							BgL_jz00_4775 = (int) (((long) 1));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_4776;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_4777;

									BgL_arg1495z00_4777 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_4774));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3028z00_4782;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_4781;

											BgL_kz00_4781 = (long) (BgL_jz00_4775);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8370;

												BgL_tmpz00_8370 = ((obj_t) BgL_arg1495z00_4777);
												BgL_res3028z00_4782 =
													BGL_U8VREF(BgL_tmpz00_8370, BgL_kz00_4781);
										}}
										BgL_arg1494z00_4776 = BgL_res3028z00_4782;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3030z00_4787;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_4784;

										BgL_arg2392z00_4784 = (long) (BgL_arg1494z00_4776);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3029z00_4786;

											BgL_res3029z00_4786 = (long) (BgL_arg2392z00_4784);
											BgL_res3030z00_4787 = BgL_res3029z00_4786;
									}}
									BgL_res3031z00_4788 = (unsigned long) (BgL_res3030z00_4787);
						}}}
						BgL_vz00_2047 = BgL_res3031z00_4788;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8376;

						BgL_tmpz00_8376 = (uint8_t) (BgL_vz00_2047);
						BGL_U8VSET(BgL_az00_2044, ((long) 0), BgL_tmpz00_8376);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2047) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1788z00_2049;

							BgL_arg1788z00_2049 =
								((long) (BgL_vz00_2047) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8386;

								BgL_tmpz00_8386 = (uint8_t) (BgL_arg1788z00_2049);
								BGL_U8VSET(BgL_bz00_2045, ((long) 0), BgL_tmpz00_8386);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1789z00_2050;

							BgL_arg1789z00_2050 =
								(((long) (BgL_vz00_2047) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8393;

								BgL_tmpz00_8393 = (uint8_t) (BgL_arg1789z00_2050);
								BGL_U8VSET(BgL_bz00_2045, ((long) 0), BgL_tmpz00_8393);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2054;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3040z00_4814;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_4800;
							int BgL_jz00_4801;

							BgL_iz00_4800 = (int) (((long) 1));
							BgL_jz00_4801 = (int) (((long) 1));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_4802;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_4803;

									BgL_arg1495z00_4803 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_4800));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3037z00_4808;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_4807;

											BgL_kz00_4807 = (long) (BgL_jz00_4801);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8401;

												BgL_tmpz00_8401 = ((obj_t) BgL_arg1495z00_4803);
												BgL_res3037z00_4808 =
													BGL_U8VREF(BgL_tmpz00_8401, BgL_kz00_4807);
										}}
										BgL_arg1494z00_4802 = BgL_res3037z00_4808;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3039z00_4813;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_4810;

										BgL_arg2392z00_4810 = (long) (BgL_arg1494z00_4802);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3038z00_4812;

											BgL_res3038z00_4812 = (long) (BgL_arg2392z00_4810);
											BgL_res3039z00_4813 = BgL_res3038z00_4812;
									}}
									BgL_res3040z00_4814 = (unsigned long) (BgL_res3039z00_4813);
						}}}
						BgL_vz00_2054 = BgL_res3040z00_4814;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8407;

						BgL_tmpz00_8407 = (uint8_t) (BgL_vz00_2054);
						BGL_U8VSET(BgL_az00_2044, ((long) 1), BgL_tmpz00_8407);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2054) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1792z00_2056;

							BgL_arg1792z00_2056 =
								((long) (BgL_vz00_2054) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8417;

								BgL_tmpz00_8417 = (uint8_t) (BgL_arg1792z00_2056);
								BGL_U8VSET(BgL_bz00_2045, ((long) 1), BgL_tmpz00_8417);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1794z00_2057;

							BgL_arg1794z00_2057 =
								(((long) (BgL_vz00_2054) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8424;

								BgL_tmpz00_8424 = (uint8_t) (BgL_arg1794z00_2057);
								BGL_U8VSET(BgL_bz00_2045, ((long) 1), BgL_tmpz00_8424);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2061;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3049z00_4840;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_4826;
							int BgL_jz00_4827;

							BgL_iz00_4826 = (int) (((long) 2));
							BgL_jz00_4827 = (int) (((long) 1));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_4828;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_4829;

									BgL_arg1495z00_4829 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_4826));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3046z00_4834;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_4833;

											BgL_kz00_4833 = (long) (BgL_jz00_4827);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8432;

												BgL_tmpz00_8432 = ((obj_t) BgL_arg1495z00_4829);
												BgL_res3046z00_4834 =
													BGL_U8VREF(BgL_tmpz00_8432, BgL_kz00_4833);
										}}
										BgL_arg1494z00_4828 = BgL_res3046z00_4834;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3048z00_4839;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_4836;

										BgL_arg2392z00_4836 = (long) (BgL_arg1494z00_4828);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3047z00_4838;

											BgL_res3047z00_4838 = (long) (BgL_arg2392z00_4836);
											BgL_res3048z00_4839 = BgL_res3047z00_4838;
									}}
									BgL_res3049z00_4840 = (unsigned long) (BgL_res3048z00_4839);
						}}}
						BgL_vz00_2061 = BgL_res3049z00_4840;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8438;

						BgL_tmpz00_8438 = (uint8_t) (BgL_vz00_2061);
						BGL_U8VSET(BgL_az00_2044, ((long) 2), BgL_tmpz00_8438);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2061) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1797z00_2063;

							BgL_arg1797z00_2063 =
								((long) (BgL_vz00_2061) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8448;

								BgL_tmpz00_8448 = (uint8_t) (BgL_arg1797z00_2063);
								BGL_U8VSET(BgL_bz00_2045, ((long) 2), BgL_tmpz00_8448);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1798z00_2064;

							BgL_arg1798z00_2064 =
								(((long) (BgL_vz00_2061) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8455;

								BgL_tmpz00_8455 = (uint8_t) (BgL_arg1798z00_2064);
								BGL_U8VSET(BgL_bz00_2045, ((long) 2), BgL_tmpz00_8455);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2068;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3058z00_4866;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_4852;
							int BgL_jz00_4853;

							BgL_iz00_4852 = (int) (((long) 3));
							BgL_jz00_4853 = (int) (((long) 1));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_4854;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_4855;

									BgL_arg1495z00_4855 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_4852));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3055z00_4860;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_4859;

											BgL_kz00_4859 = (long) (BgL_jz00_4853);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8463;

												BgL_tmpz00_8463 = ((obj_t) BgL_arg1495z00_4855);
												BgL_res3055z00_4860 =
													BGL_U8VREF(BgL_tmpz00_8463, BgL_kz00_4859);
										}}
										BgL_arg1494z00_4854 = BgL_res3055z00_4860;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3057z00_4865;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_4862;

										BgL_arg2392z00_4862 = (long) (BgL_arg1494z00_4854);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3056z00_4864;

											BgL_res3056z00_4864 = (long) (BgL_arg2392z00_4862);
											BgL_res3057z00_4865 = BgL_res3056z00_4864;
									}}
									BgL_res3058z00_4866 = (unsigned long) (BgL_res3057z00_4865);
						}}}
						BgL_vz00_2068 = BgL_res3058z00_4866;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8469;

						BgL_tmpz00_8469 = (uint8_t) (BgL_vz00_2068);
						BGL_U8VSET(BgL_az00_2044, ((long) 3), BgL_tmpz00_8469);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2068) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1801z00_2070;

							BgL_arg1801z00_2070 =
								((long) (BgL_vz00_2068) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8479;

								BgL_tmpz00_8479 = (uint8_t) (BgL_arg1801z00_2070);
								BGL_U8VSET(BgL_bz00_2045, ((long) 3), BgL_tmpz00_8479);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1803z00_2071;

							BgL_arg1803z00_2071 =
								(((long) (BgL_vz00_2068) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8486;

								BgL_tmpz00_8486 = (uint8_t) (BgL_arg1803z00_2071);
								BGL_U8VSET(BgL_bz00_2045, ((long) 3), BgL_tmpz00_8486);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 562 */
					long BgL_arg1807z00_2074;

					{	/* Unsafe/aes.scm 562 */
						long BgL_arg1808z00_2075;
						long BgL_arg1809z00_2076;

						{	/* Unsafe/aes.scm 562 */
							uint8_t BgL_arg1810z00_2077;

							{	/* Unsafe/aes.scm 562 */
								uint8_t BgL_res3064z00_4878;

								BgL_res3064z00_4878 = BGL_U8VREF(BgL_bz00_2045, ((long) 0));
								BgL_arg1810z00_2077 = BgL_res3064z00_4878;
							}
							{	/* Unsafe/aes.scm 562 */
								long BgL_res3066z00_4883;

								{	/* Unsafe/aes.scm 562 */
									long BgL_arg2392z00_4880;

									BgL_arg2392z00_4880 = (long) (BgL_arg1810z00_2077);
									{	/* Unsafe/aes.scm 562 */
										long BgL_res3065z00_4882;

										BgL_res3065z00_4882 = (long) (BgL_arg2392z00_4880);
										BgL_res3066z00_4883 = BgL_res3065z00_4882;
								}}
								BgL_arg1808z00_2075 = BgL_res3066z00_4883;
						}}
						{	/* Unsafe/aes.scm 563 */
							long BgL_arg1811z00_2078;
							long BgL_arg1812z00_2079;

							{	/* Unsafe/aes.scm 563 */
								uint8_t BgL_arg1813z00_2080;

								{	/* Unsafe/aes.scm 563 */
									uint8_t BgL_res3067z00_4885;

									BgL_res3067z00_4885 = BGL_U8VREF(BgL_az00_2044, ((long) 1));
									BgL_arg1813z00_2080 = BgL_res3067z00_4885;
								}
								{	/* Unsafe/aes.scm 563 */
									long BgL_res3069z00_4890;

									{	/* Unsafe/aes.scm 563 */
										long BgL_arg2392z00_4887;

										BgL_arg2392z00_4887 = (long) (BgL_arg1813z00_2080);
										{	/* Unsafe/aes.scm 563 */
											long BgL_res3068z00_4889;

											BgL_res3068z00_4889 = (long) (BgL_arg2392z00_4887);
											BgL_res3069z00_4890 = BgL_res3068z00_4889;
									}}
									BgL_arg1811z00_2078 = BgL_res3069z00_4890;
							}}
							{	/* Unsafe/aes.scm 564 */
								long BgL_arg1814z00_2081;
								long BgL_arg1815z00_2082;

								{	/* Unsafe/aes.scm 564 */
									uint8_t BgL_arg1816z00_2083;

									{	/* Unsafe/aes.scm 564 */
										uint8_t BgL_res3070z00_4892;

										BgL_res3070z00_4892 = BGL_U8VREF(BgL_bz00_2045, ((long) 1));
										BgL_arg1816z00_2083 = BgL_res3070z00_4892;
									}
									{	/* Unsafe/aes.scm 564 */
										long BgL_res3072z00_4897;

										{	/* Unsafe/aes.scm 564 */
											long BgL_arg2392z00_4894;

											BgL_arg2392z00_4894 = (long) (BgL_arg1816z00_2083);
											{	/* Unsafe/aes.scm 564 */
												long BgL_res3071z00_4896;

												BgL_res3071z00_4896 = (long) (BgL_arg2392z00_4894);
												BgL_res3072z00_4897 = BgL_res3071z00_4896;
										}}
										BgL_arg1814z00_2081 = BgL_res3072z00_4897;
								}}
								{	/* Unsafe/aes.scm 565 */
									long BgL_arg1817z00_2084;
									long BgL_arg1818z00_2085;

									{	/* Unsafe/aes.scm 565 */
										uint8_t BgL_arg1819z00_2086;

										{	/* Unsafe/aes.scm 565 */
											uint8_t BgL_res3073z00_4899;

											BgL_res3073z00_4899 =
												BGL_U8VREF(BgL_az00_2044, ((long) 2));
											BgL_arg1819z00_2086 = BgL_res3073z00_4899;
										}
										{	/* Unsafe/aes.scm 565 */
											long BgL_res3075z00_4904;

											{	/* Unsafe/aes.scm 565 */
												long BgL_arg2392z00_4901;

												BgL_arg2392z00_4901 = (long) (BgL_arg1819z00_2086);
												{	/* Unsafe/aes.scm 565 */
													long BgL_res3074z00_4903;

													BgL_res3074z00_4903 = (long) (BgL_arg2392z00_4901);
													BgL_res3075z00_4904 = BgL_res3074z00_4903;
											}}
											BgL_arg1817z00_2084 = BgL_res3075z00_4904;
									}}
									{	/* Unsafe/aes.scm 566 */
										uint8_t BgL_arg1820z00_2087;

										{	/* Unsafe/aes.scm 566 */
											uint8_t BgL_res3076z00_4906;

											BgL_res3076z00_4906 =
												BGL_U8VREF(BgL_az00_2044, ((long) 3));
											BgL_arg1820z00_2087 = BgL_res3076z00_4906;
										}
										{	/* Unsafe/aes.scm 566 */
											long BgL_res3078z00_4911;

											{	/* Unsafe/aes.scm 566 */
												long BgL_arg2392z00_4908;

												BgL_arg2392z00_4908 = (long) (BgL_arg1820z00_2087);
												{	/* Unsafe/aes.scm 566 */
													long BgL_res3077z00_4910;

													BgL_res3077z00_4910 = (long) (BgL_arg2392z00_4908);
													BgL_res3078z00_4911 = BgL_res3077z00_4910;
											}}
											BgL_arg1818z00_2085 = BgL_res3078z00_4911;
									}}
									BgL_arg1815z00_2082 =
										(BgL_arg1817z00_2084 ^ BgL_arg1818z00_2085);
								}
								BgL_arg1812z00_2079 =
									(BgL_arg1814z00_2081 ^ BgL_arg1815z00_2082);
							}
							BgL_arg1809z00_2076 = (BgL_arg1811z00_2078 ^ BgL_arg1812z00_2079);
						}
						BgL_arg1807z00_2074 = (BgL_arg1808z00_2075 ^ BgL_arg1809z00_2076);
					}
					{	/* Unsafe/aes.scm 562 */
						int BgL_jz00_4925;
						unsigned long BgL_vz00_4926;

						BgL_jz00_4925 = (int) (((long) 1));
						BgL_vz00_4926 = (unsigned long) (BgL_arg1807z00_2074);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_4927;

							BgL_arg1496z00_4927 = VECTOR_REF(BgL_sz00_90, ((long) 0));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8513;
								long BgL_tmpz00_8511;

								BgL_auxz00_8513 = (uint8_t) (BgL_vz00_4926);
								BgL_tmpz00_8511 = (long) (BgL_jz00_4925);
								BGL_U8VSET(BgL_arg1496z00_4927, BgL_tmpz00_8511,
									BgL_auxz00_8513);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 567 */
					long BgL_arg1821z00_2088;

					{	/* Unsafe/aes.scm 567 */
						long BgL_arg1822z00_2089;
						long BgL_arg1823z00_2090;

						{	/* Unsafe/aes.scm 567 */
							uint8_t BgL_arg1824z00_2091;

							{	/* Unsafe/aes.scm 567 */
								uint8_t BgL_res3083z00_4930;

								BgL_res3083z00_4930 = BGL_U8VREF(BgL_az00_2044, ((long) 0));
								BgL_arg1824z00_2091 = BgL_res3083z00_4930;
							}
							{	/* Unsafe/aes.scm 567 */
								long BgL_res3085z00_4935;

								{	/* Unsafe/aes.scm 567 */
									long BgL_arg2392z00_4932;

									BgL_arg2392z00_4932 = (long) (BgL_arg1824z00_2091);
									{	/* Unsafe/aes.scm 567 */
										long BgL_res3084z00_4934;

										BgL_res3084z00_4934 = (long) (BgL_arg2392z00_4932);
										BgL_res3085z00_4935 = BgL_res3084z00_4934;
								}}
								BgL_arg1822z00_2089 = BgL_res3085z00_4935;
						}}
						{	/* Unsafe/aes.scm 568 */
							long BgL_arg1825z00_2092;
							long BgL_arg1826z00_2093;

							{	/* Unsafe/aes.scm 568 */
								uint8_t BgL_arg1827z00_2094;

								{	/* Unsafe/aes.scm 568 */
									uint8_t BgL_res3086z00_4937;

									BgL_res3086z00_4937 = BGL_U8VREF(BgL_bz00_2045, ((long) 1));
									BgL_arg1827z00_2094 = BgL_res3086z00_4937;
								}
								{	/* Unsafe/aes.scm 568 */
									long BgL_res3088z00_4942;

									{	/* Unsafe/aes.scm 568 */
										long BgL_arg2392z00_4939;

										BgL_arg2392z00_4939 = (long) (BgL_arg1827z00_2094);
										{	/* Unsafe/aes.scm 568 */
											long BgL_res3087z00_4941;

											BgL_res3087z00_4941 = (long) (BgL_arg2392z00_4939);
											BgL_res3088z00_4942 = BgL_res3087z00_4941;
									}}
									BgL_arg1825z00_2092 = BgL_res3088z00_4942;
							}}
							{	/* Unsafe/aes.scm 569 */
								long BgL_arg1828z00_2095;
								long BgL_arg1829z00_2096;

								{	/* Unsafe/aes.scm 569 */
									uint8_t BgL_arg1830z00_2097;

									{	/* Unsafe/aes.scm 569 */
										uint8_t BgL_res3089z00_4944;

										BgL_res3089z00_4944 = BGL_U8VREF(BgL_az00_2044, ((long) 2));
										BgL_arg1830z00_2097 = BgL_res3089z00_4944;
									}
									{	/* Unsafe/aes.scm 569 */
										long BgL_res3091z00_4949;

										{	/* Unsafe/aes.scm 569 */
											long BgL_arg2392z00_4946;

											BgL_arg2392z00_4946 = (long) (BgL_arg1830z00_2097);
											{	/* Unsafe/aes.scm 569 */
												long BgL_res3090z00_4948;

												BgL_res3090z00_4948 = (long) (BgL_arg2392z00_4946);
												BgL_res3091z00_4949 = BgL_res3090z00_4948;
										}}
										BgL_arg1828z00_2095 = BgL_res3091z00_4949;
								}}
								{	/* Unsafe/aes.scm 570 */
									long BgL_arg1831z00_2098;
									long BgL_arg1832z00_2099;

									{	/* Unsafe/aes.scm 570 */
										uint8_t BgL_arg1833z00_2100;

										{	/* Unsafe/aes.scm 570 */
											uint8_t BgL_res3092z00_4951;

											BgL_res3092z00_4951 =
												BGL_U8VREF(BgL_bz00_2045, ((long) 2));
											BgL_arg1833z00_2100 = BgL_res3092z00_4951;
										}
										{	/* Unsafe/aes.scm 570 */
											long BgL_res3094z00_4956;

											{	/* Unsafe/aes.scm 570 */
												long BgL_arg2392z00_4953;

												BgL_arg2392z00_4953 = (long) (BgL_arg1833z00_2100);
												{	/* Unsafe/aes.scm 570 */
													long BgL_res3093z00_4955;

													BgL_res3093z00_4955 = (long) (BgL_arg2392z00_4953);
													BgL_res3094z00_4956 = BgL_res3093z00_4955;
											}}
											BgL_arg1831z00_2098 = BgL_res3094z00_4956;
									}}
									{	/* Unsafe/aes.scm 571 */
										uint8_t BgL_arg1835z00_2101;

										{	/* Unsafe/aes.scm 571 */
											uint8_t BgL_res3095z00_4958;

											BgL_res3095z00_4958 =
												BGL_U8VREF(BgL_az00_2044, ((long) 3));
											BgL_arg1835z00_2101 = BgL_res3095z00_4958;
										}
										{	/* Unsafe/aes.scm 571 */
											long BgL_res3097z00_4963;

											{	/* Unsafe/aes.scm 571 */
												long BgL_arg2392z00_4960;

												BgL_arg2392z00_4960 = (long) (BgL_arg1835z00_2101);
												{	/* Unsafe/aes.scm 571 */
													long BgL_res3096z00_4962;

													BgL_res3096z00_4962 = (long) (BgL_arg2392z00_4960);
													BgL_res3097z00_4963 = BgL_res3096z00_4962;
											}}
											BgL_arg1832z00_2099 = BgL_res3097z00_4963;
									}}
									BgL_arg1829z00_2096 =
										(BgL_arg1831z00_2098 ^ BgL_arg1832z00_2099);
								}
								BgL_arg1826z00_2093 =
									(BgL_arg1828z00_2095 ^ BgL_arg1829z00_2096);
							}
							BgL_arg1823z00_2090 = (BgL_arg1825z00_2092 ^ BgL_arg1826z00_2093);
						}
						BgL_arg1821z00_2088 = (BgL_arg1822z00_2089 ^ BgL_arg1823z00_2090);
					}
					{	/* Unsafe/aes.scm 567 */
						int BgL_jz00_4977;
						unsigned long BgL_vz00_4978;

						BgL_jz00_4977 = (int) (((long) 1));
						BgL_vz00_4978 = (unsigned long) (BgL_arg1821z00_2088);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_4979;

							BgL_arg1496z00_4979 = VECTOR_REF(BgL_sz00_90, ((long) 1));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8540;
								long BgL_tmpz00_8538;

								BgL_auxz00_8540 = (uint8_t) (BgL_vz00_4978);
								BgL_tmpz00_8538 = (long) (BgL_jz00_4977);
								BGL_U8VSET(BgL_arg1496z00_4979, BgL_tmpz00_8538,
									BgL_auxz00_8540);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 572 */
					long BgL_arg1836z00_2102;

					{	/* Unsafe/aes.scm 572 */
						long BgL_arg1838z00_2103;
						long BgL_arg1840z00_2104;

						{	/* Unsafe/aes.scm 572 */
							uint8_t BgL_arg1841z00_2105;

							{	/* Unsafe/aes.scm 572 */
								uint8_t BgL_res3102z00_4982;

								BgL_res3102z00_4982 = BGL_U8VREF(BgL_az00_2044, ((long) 0));
								BgL_arg1841z00_2105 = BgL_res3102z00_4982;
							}
							{	/* Unsafe/aes.scm 572 */
								long BgL_res3104z00_4987;

								{	/* Unsafe/aes.scm 572 */
									long BgL_arg2392z00_4984;

									BgL_arg2392z00_4984 = (long) (BgL_arg1841z00_2105);
									{	/* Unsafe/aes.scm 572 */
										long BgL_res3103z00_4986;

										BgL_res3103z00_4986 = (long) (BgL_arg2392z00_4984);
										BgL_res3104z00_4987 = BgL_res3103z00_4986;
								}}
								BgL_arg1838z00_2103 = BgL_res3104z00_4987;
						}}
						{	/* Unsafe/aes.scm 573 */
							long BgL_arg1842z00_2106;
							long BgL_arg1845z00_2107;

							{	/* Unsafe/aes.scm 573 */
								uint8_t BgL_arg1846z00_2108;

								{	/* Unsafe/aes.scm 573 */
									uint8_t BgL_res3105z00_4989;

									BgL_res3105z00_4989 = BGL_U8VREF(BgL_az00_2044, ((long) 1));
									BgL_arg1846z00_2108 = BgL_res3105z00_4989;
								}
								{	/* Unsafe/aes.scm 573 */
									long BgL_res3107z00_4994;

									{	/* Unsafe/aes.scm 573 */
										long BgL_arg2392z00_4991;

										BgL_arg2392z00_4991 = (long) (BgL_arg1846z00_2108);
										{	/* Unsafe/aes.scm 573 */
											long BgL_res3106z00_4993;

											BgL_res3106z00_4993 = (long) (BgL_arg2392z00_4991);
											BgL_res3107z00_4994 = BgL_res3106z00_4993;
									}}
									BgL_arg1842z00_2106 = BgL_res3107z00_4994;
							}}
							{	/* Unsafe/aes.scm 574 */
								long BgL_arg1847z00_2109;
								long BgL_arg1848z00_2110;

								{	/* Unsafe/aes.scm 574 */
									uint8_t BgL_arg1850z00_2111;

									{	/* Unsafe/aes.scm 574 */
										uint8_t BgL_res3108z00_4996;

										BgL_res3108z00_4996 = BGL_U8VREF(BgL_bz00_2045, ((long) 2));
										BgL_arg1850z00_2111 = BgL_res3108z00_4996;
									}
									{	/* Unsafe/aes.scm 574 */
										long BgL_res3110z00_5001;

										{	/* Unsafe/aes.scm 574 */
											long BgL_arg2392z00_4998;

											BgL_arg2392z00_4998 = (long) (BgL_arg1850z00_2111);
											{	/* Unsafe/aes.scm 574 */
												long BgL_res3109z00_5000;

												BgL_res3109z00_5000 = (long) (BgL_arg2392z00_4998);
												BgL_res3110z00_5001 = BgL_res3109z00_5000;
										}}
										BgL_arg1847z00_2109 = BgL_res3110z00_5001;
								}}
								{	/* Unsafe/aes.scm 575 */
									long BgL_arg1851z00_2112;
									long BgL_arg1852z00_2113;

									{	/* Unsafe/aes.scm 575 */
										uint8_t BgL_arg1853z00_2114;

										{	/* Unsafe/aes.scm 575 */
											uint8_t BgL_res3111z00_5003;

											BgL_res3111z00_5003 =
												BGL_U8VREF(BgL_az00_2044, ((long) 3));
											BgL_arg1853z00_2114 = BgL_res3111z00_5003;
										}
										{	/* Unsafe/aes.scm 575 */
											long BgL_res3113z00_5008;

											{	/* Unsafe/aes.scm 575 */
												long BgL_arg2392z00_5005;

												BgL_arg2392z00_5005 = (long) (BgL_arg1853z00_2114);
												{	/* Unsafe/aes.scm 575 */
													long BgL_res3112z00_5007;

													BgL_res3112z00_5007 = (long) (BgL_arg2392z00_5005);
													BgL_res3113z00_5008 = BgL_res3112z00_5007;
											}}
											BgL_arg1851z00_2112 = BgL_res3113z00_5008;
									}}
									{	/* Unsafe/aes.scm 576 */
										uint8_t BgL_arg1855z00_2115;

										{	/* Unsafe/aes.scm 576 */
											uint8_t BgL_res3114z00_5010;

											BgL_res3114z00_5010 =
												BGL_U8VREF(BgL_bz00_2045, ((long) 3));
											BgL_arg1855z00_2115 = BgL_res3114z00_5010;
										}
										{	/* Unsafe/aes.scm 576 */
											long BgL_res3116z00_5015;

											{	/* Unsafe/aes.scm 576 */
												long BgL_arg2392z00_5012;

												BgL_arg2392z00_5012 = (long) (BgL_arg1855z00_2115);
												{	/* Unsafe/aes.scm 576 */
													long BgL_res3115z00_5014;

													BgL_res3115z00_5014 = (long) (BgL_arg2392z00_5012);
													BgL_res3116z00_5015 = BgL_res3115z00_5014;
											}}
											BgL_arg1852z00_2113 = BgL_res3116z00_5015;
									}}
									BgL_arg1848z00_2110 =
										(BgL_arg1851z00_2112 ^ BgL_arg1852z00_2113);
								}
								BgL_arg1845z00_2107 =
									(BgL_arg1847z00_2109 ^ BgL_arg1848z00_2110);
							}
							BgL_arg1840z00_2104 = (BgL_arg1842z00_2106 ^ BgL_arg1845z00_2107);
						}
						BgL_arg1836z00_2102 = (BgL_arg1838z00_2103 ^ BgL_arg1840z00_2104);
					}
					{	/* Unsafe/aes.scm 572 */
						int BgL_jz00_5029;
						unsigned long BgL_vz00_5030;

						BgL_jz00_5029 = (int) (((long) 1));
						BgL_vz00_5030 = (unsigned long) (BgL_arg1836z00_2102);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_5031;

							BgL_arg1496z00_5031 = VECTOR_REF(BgL_sz00_90, ((long) 2));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8567;
								long BgL_tmpz00_8565;

								BgL_auxz00_8567 = (uint8_t) (BgL_vz00_5030);
								BgL_tmpz00_8565 = (long) (BgL_jz00_5029);
								BGL_U8VSET(BgL_arg1496z00_5031, BgL_tmpz00_8565,
									BgL_auxz00_8567);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 577 */
					long BgL_arg1856z00_2116;

					{	/* Unsafe/aes.scm 577 */
						long BgL_arg1857z00_2117;
						long BgL_arg1858z00_2118;

						{	/* Unsafe/aes.scm 577 */
							uint8_t BgL_arg1859z00_2119;

							{	/* Unsafe/aes.scm 577 */
								uint8_t BgL_res3121z00_5034;

								BgL_res3121z00_5034 = BGL_U8VREF(BgL_az00_2044, ((long) 0));
								BgL_arg1859z00_2119 = BgL_res3121z00_5034;
							}
							{	/* Unsafe/aes.scm 577 */
								long BgL_res3123z00_5039;

								{	/* Unsafe/aes.scm 577 */
									long BgL_arg2392z00_5036;

									BgL_arg2392z00_5036 = (long) (BgL_arg1859z00_2119);
									{	/* Unsafe/aes.scm 577 */
										long BgL_res3122z00_5038;

										BgL_res3122z00_5038 = (long) (BgL_arg2392z00_5036);
										BgL_res3123z00_5039 = BgL_res3122z00_5038;
								}}
								BgL_arg1857z00_2117 = BgL_res3123z00_5039;
						}}
						{	/* Unsafe/aes.scm 578 */
							long BgL_arg1861z00_2120;
							long BgL_arg1862z00_2121;

							{	/* Unsafe/aes.scm 578 */
								uint8_t BgL_arg1863z00_2122;

								{	/* Unsafe/aes.scm 578 */
									uint8_t BgL_res3124z00_5041;

									BgL_res3124z00_5041 = BGL_U8VREF(BgL_bz00_2045, ((long) 0));
									BgL_arg1863z00_2122 = BgL_res3124z00_5041;
								}
								{	/* Unsafe/aes.scm 578 */
									long BgL_res3126z00_5046;

									{	/* Unsafe/aes.scm 578 */
										long BgL_arg2392z00_5043;

										BgL_arg2392z00_5043 = (long) (BgL_arg1863z00_2122);
										{	/* Unsafe/aes.scm 578 */
											long BgL_res3125z00_5045;

											BgL_res3125z00_5045 = (long) (BgL_arg2392z00_5043);
											BgL_res3126z00_5046 = BgL_res3125z00_5045;
									}}
									BgL_arg1861z00_2120 = BgL_res3126z00_5046;
							}}
							{	/* Unsafe/aes.scm 579 */
								long BgL_arg1865z00_2123;
								long BgL_arg1866z00_2124;

								{	/* Unsafe/aes.scm 579 */
									uint8_t BgL_arg1868z00_2125;

									{	/* Unsafe/aes.scm 579 */
										uint8_t BgL_res3127z00_5048;

										BgL_res3127z00_5048 = BGL_U8VREF(BgL_az00_2044, ((long) 1));
										BgL_arg1868z00_2125 = BgL_res3127z00_5048;
									}
									{	/* Unsafe/aes.scm 579 */
										long BgL_res3129z00_5053;

										{	/* Unsafe/aes.scm 579 */
											long BgL_arg2392z00_5050;

											BgL_arg2392z00_5050 = (long) (BgL_arg1868z00_2125);
											{	/* Unsafe/aes.scm 579 */
												long BgL_res3128z00_5052;

												BgL_res3128z00_5052 = (long) (BgL_arg2392z00_5050);
												BgL_res3129z00_5053 = BgL_res3128z00_5052;
										}}
										BgL_arg1865z00_2123 = BgL_res3129z00_5053;
								}}
								{	/* Unsafe/aes.scm 580 */
									long BgL_arg1870z00_2126;
									long BgL_arg1871z00_2127;

									{	/* Unsafe/aes.scm 580 */
										uint8_t BgL_arg1872z00_2128;

										{	/* Unsafe/aes.scm 580 */
											uint8_t BgL_res3130z00_5055;

											BgL_res3130z00_5055 =
												BGL_U8VREF(BgL_az00_2044, ((long) 2));
											BgL_arg1872z00_2128 = BgL_res3130z00_5055;
										}
										{	/* Unsafe/aes.scm 580 */
											long BgL_res3132z00_5060;

											{	/* Unsafe/aes.scm 580 */
												long BgL_arg2392z00_5057;

												BgL_arg2392z00_5057 = (long) (BgL_arg1872z00_2128);
												{	/* Unsafe/aes.scm 580 */
													long BgL_res3131z00_5059;

													BgL_res3131z00_5059 = (long) (BgL_arg2392z00_5057);
													BgL_res3132z00_5060 = BgL_res3131z00_5059;
											}}
											BgL_arg1870z00_2126 = BgL_res3132z00_5060;
									}}
									{	/* Unsafe/aes.scm 581 */
										uint8_t BgL_arg1873z00_2129;

										{	/* Unsafe/aes.scm 581 */
											uint8_t BgL_res3133z00_5062;

											BgL_res3133z00_5062 =
												BGL_U8VREF(BgL_bz00_2045, ((long) 3));
											BgL_arg1873z00_2129 = BgL_res3133z00_5062;
										}
										{	/* Unsafe/aes.scm 581 */
											long BgL_res3135z00_5067;

											{	/* Unsafe/aes.scm 581 */
												long BgL_arg2392z00_5064;

												BgL_arg2392z00_5064 = (long) (BgL_arg1873z00_2129);
												{	/* Unsafe/aes.scm 581 */
													long BgL_res3134z00_5066;

													BgL_res3134z00_5066 = (long) (BgL_arg2392z00_5064);
													BgL_res3135z00_5067 = BgL_res3134z00_5066;
											}}
											BgL_arg1871z00_2127 = BgL_res3135z00_5067;
									}}
									BgL_arg1866z00_2124 =
										(BgL_arg1870z00_2126 ^ BgL_arg1871z00_2127);
								}
								BgL_arg1862z00_2121 =
									(BgL_arg1865z00_2123 ^ BgL_arg1866z00_2124);
							}
							BgL_arg1858z00_2118 = (BgL_arg1861z00_2120 ^ BgL_arg1862z00_2121);
						}
						BgL_arg1856z00_2116 = (BgL_arg1857z00_2117 ^ BgL_arg1858z00_2118);
					}
					{	/* Unsafe/aes.scm 577 */
						int BgL_jz00_5081;
						unsigned long BgL_vz00_5082;

						BgL_jz00_5081 = (int) (((long) 1));
						BgL_vz00_5082 = (unsigned long) (BgL_arg1856z00_2116);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_5083;

							BgL_arg1496z00_5083 = VECTOR_REF(BgL_sz00_90, ((long) 3));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8594;
								long BgL_tmpz00_8592;

								BgL_auxz00_8594 = (uint8_t) (BgL_vz00_5082);
								BgL_tmpz00_8592 = (long) (BgL_jz00_5081);
								BGL_U8VSET(BgL_arg1496z00_5083, BgL_tmpz00_8592,
									BgL_auxz00_8594);
							} BUNSPEC;
			}}}}
			{	/* Unsafe/aes.scm 554 */
				obj_t BgL_az00_2135;
				obj_t BgL_bz00_2136;

				{	/* Llib/srfi4.scm 447 */

					BgL_az00_2135 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), (uint8_t) (0));
				}
				{	/* Llib/srfi4.scm 447 */

					BgL_bz00_2136 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), (uint8_t) (0));
				}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2138;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3143z00_5100;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_5086;
							int BgL_jz00_5087;

							BgL_iz00_5086 = (int) (((long) 0));
							BgL_jz00_5087 = (int) (((long) 2));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_5088;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_5089;

									BgL_arg1495z00_5089 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_5086));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3140z00_5094;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_5093;

											BgL_kz00_5093 = (long) (BgL_jz00_5087);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8604;

												BgL_tmpz00_8604 = ((obj_t) BgL_arg1495z00_5089);
												BgL_res3140z00_5094 =
													BGL_U8VREF(BgL_tmpz00_8604, BgL_kz00_5093);
										}}
										BgL_arg1494z00_5088 = BgL_res3140z00_5094;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3142z00_5099;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_5096;

										BgL_arg2392z00_5096 = (long) (BgL_arg1494z00_5088);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3141z00_5098;

											BgL_res3141z00_5098 = (long) (BgL_arg2392z00_5096);
											BgL_res3142z00_5099 = BgL_res3141z00_5098;
									}}
									BgL_res3143z00_5100 = (unsigned long) (BgL_res3142z00_5099);
						}}}
						BgL_vz00_2138 = BgL_res3143z00_5100;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8610;

						BgL_tmpz00_8610 = (uint8_t) (BgL_vz00_2138);
						BGL_U8VSET(BgL_az00_2135, ((long) 0), BgL_tmpz00_8610);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2138) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1874z00_2140;

							BgL_arg1874z00_2140 =
								((long) (BgL_vz00_2138) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8620;

								BgL_tmpz00_8620 = (uint8_t) (BgL_arg1874z00_2140);
								BGL_U8VSET(BgL_bz00_2136, ((long) 0), BgL_tmpz00_8620);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1876z00_2141;

							BgL_arg1876z00_2141 =
								(((long) (BgL_vz00_2138) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8627;

								BgL_tmpz00_8627 = (uint8_t) (BgL_arg1876z00_2141);
								BGL_U8VSET(BgL_bz00_2136, ((long) 0), BgL_tmpz00_8627);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2145;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3152z00_5126;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_5112;
							int BgL_jz00_5113;

							BgL_iz00_5112 = (int) (((long) 1));
							BgL_jz00_5113 = (int) (((long) 2));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_5114;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_5115;

									BgL_arg1495z00_5115 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_5112));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3149z00_5120;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_5119;

											BgL_kz00_5119 = (long) (BgL_jz00_5113);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8635;

												BgL_tmpz00_8635 = ((obj_t) BgL_arg1495z00_5115);
												BgL_res3149z00_5120 =
													BGL_U8VREF(BgL_tmpz00_8635, BgL_kz00_5119);
										}}
										BgL_arg1494z00_5114 = BgL_res3149z00_5120;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3151z00_5125;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_5122;

										BgL_arg2392z00_5122 = (long) (BgL_arg1494z00_5114);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3150z00_5124;

											BgL_res3150z00_5124 = (long) (BgL_arg2392z00_5122);
											BgL_res3151z00_5125 = BgL_res3150z00_5124;
									}}
									BgL_res3152z00_5126 = (unsigned long) (BgL_res3151z00_5125);
						}}}
						BgL_vz00_2145 = BgL_res3152z00_5126;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8641;

						BgL_tmpz00_8641 = (uint8_t) (BgL_vz00_2145);
						BGL_U8VSET(BgL_az00_2135, ((long) 1), BgL_tmpz00_8641);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2145) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1879z00_2147;

							BgL_arg1879z00_2147 =
								((long) (BgL_vz00_2145) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8651;

								BgL_tmpz00_8651 = (uint8_t) (BgL_arg1879z00_2147);
								BGL_U8VSET(BgL_bz00_2136, ((long) 1), BgL_tmpz00_8651);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1881z00_2148;

							BgL_arg1881z00_2148 =
								(((long) (BgL_vz00_2145) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8658;

								BgL_tmpz00_8658 = (uint8_t) (BgL_arg1881z00_2148);
								BGL_U8VSET(BgL_bz00_2136, ((long) 1), BgL_tmpz00_8658);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2152;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3161z00_5152;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_5138;
							int BgL_jz00_5139;

							BgL_iz00_5138 = (int) (((long) 2));
							BgL_jz00_5139 = (int) (((long) 2));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_5140;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_5141;

									BgL_arg1495z00_5141 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_5138));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3158z00_5146;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_5145;

											BgL_kz00_5145 = (long) (BgL_jz00_5139);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8666;

												BgL_tmpz00_8666 = ((obj_t) BgL_arg1495z00_5141);
												BgL_res3158z00_5146 =
													BGL_U8VREF(BgL_tmpz00_8666, BgL_kz00_5145);
										}}
										BgL_arg1494z00_5140 = BgL_res3158z00_5146;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3160z00_5151;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_5148;

										BgL_arg2392z00_5148 = (long) (BgL_arg1494z00_5140);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3159z00_5150;

											BgL_res3159z00_5150 = (long) (BgL_arg2392z00_5148);
											BgL_res3160z00_5151 = BgL_res3159z00_5150;
									}}
									BgL_res3161z00_5152 = (unsigned long) (BgL_res3160z00_5151);
						}}}
						BgL_vz00_2152 = BgL_res3161z00_5152;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8672;

						BgL_tmpz00_8672 = (uint8_t) (BgL_vz00_2152);
						BGL_U8VSET(BgL_az00_2135, ((long) 2), BgL_tmpz00_8672);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2152) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1884z00_2154;

							BgL_arg1884z00_2154 =
								((long) (BgL_vz00_2152) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8682;

								BgL_tmpz00_8682 = (uint8_t) (BgL_arg1884z00_2154);
								BGL_U8VSET(BgL_bz00_2136, ((long) 2), BgL_tmpz00_8682);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1885z00_2155;

							BgL_arg1885z00_2155 =
								(((long) (BgL_vz00_2152) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8689;

								BgL_tmpz00_8689 = (uint8_t) (BgL_arg1885z00_2155);
								BGL_U8VSET(BgL_bz00_2136, ((long) 2), BgL_tmpz00_8689);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2159;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3170z00_5178;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_5164;
							int BgL_jz00_5165;

							BgL_iz00_5164 = (int) (((long) 3));
							BgL_jz00_5165 = (int) (((long) 2));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_5166;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_5167;

									BgL_arg1495z00_5167 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_5164));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3167z00_5172;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_5171;

											BgL_kz00_5171 = (long) (BgL_jz00_5165);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8697;

												BgL_tmpz00_8697 = ((obj_t) BgL_arg1495z00_5167);
												BgL_res3167z00_5172 =
													BGL_U8VREF(BgL_tmpz00_8697, BgL_kz00_5171);
										}}
										BgL_arg1494z00_5166 = BgL_res3167z00_5172;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3169z00_5177;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_5174;

										BgL_arg2392z00_5174 = (long) (BgL_arg1494z00_5166);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3168z00_5176;

											BgL_res3168z00_5176 = (long) (BgL_arg2392z00_5174);
											BgL_res3169z00_5177 = BgL_res3168z00_5176;
									}}
									BgL_res3170z00_5178 = (unsigned long) (BgL_res3169z00_5177);
						}}}
						BgL_vz00_2159 = BgL_res3170z00_5178;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8703;

						BgL_tmpz00_8703 = (uint8_t) (BgL_vz00_2159);
						BGL_U8VSET(BgL_az00_2135, ((long) 3), BgL_tmpz00_8703);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2159) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1888z00_2161;

							BgL_arg1888z00_2161 =
								((long) (BgL_vz00_2159) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8713;

								BgL_tmpz00_8713 = (uint8_t) (BgL_arg1888z00_2161);
								BGL_U8VSET(BgL_bz00_2136, ((long) 3), BgL_tmpz00_8713);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1889z00_2162;

							BgL_arg1889z00_2162 =
								(((long) (BgL_vz00_2159) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8720;

								BgL_tmpz00_8720 = (uint8_t) (BgL_arg1889z00_2162);
								BGL_U8VSET(BgL_bz00_2136, ((long) 3), BgL_tmpz00_8720);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 562 */
					long BgL_arg1893z00_2165;

					{	/* Unsafe/aes.scm 562 */
						long BgL_arg1895z00_2166;
						long BgL_arg1896z00_2167;

						{	/* Unsafe/aes.scm 562 */
							uint8_t BgL_arg1897z00_2168;

							{	/* Unsafe/aes.scm 562 */
								uint8_t BgL_res3176z00_5190;

								BgL_res3176z00_5190 = BGL_U8VREF(BgL_bz00_2136, ((long) 0));
								BgL_arg1897z00_2168 = BgL_res3176z00_5190;
							}
							{	/* Unsafe/aes.scm 562 */
								long BgL_res3178z00_5195;

								{	/* Unsafe/aes.scm 562 */
									long BgL_arg2392z00_5192;

									BgL_arg2392z00_5192 = (long) (BgL_arg1897z00_2168);
									{	/* Unsafe/aes.scm 562 */
										long BgL_res3177z00_5194;

										BgL_res3177z00_5194 = (long) (BgL_arg2392z00_5192);
										BgL_res3178z00_5195 = BgL_res3177z00_5194;
								}}
								BgL_arg1895z00_2166 = BgL_res3178z00_5195;
						}}
						{	/* Unsafe/aes.scm 563 */
							long BgL_arg1898z00_2169;
							long BgL_arg1901z00_2170;

							{	/* Unsafe/aes.scm 563 */
								uint8_t BgL_arg1902z00_2171;

								{	/* Unsafe/aes.scm 563 */
									uint8_t BgL_res3179z00_5197;

									BgL_res3179z00_5197 = BGL_U8VREF(BgL_az00_2135, ((long) 1));
									BgL_arg1902z00_2171 = BgL_res3179z00_5197;
								}
								{	/* Unsafe/aes.scm 563 */
									long BgL_res3181z00_5202;

									{	/* Unsafe/aes.scm 563 */
										long BgL_arg2392z00_5199;

										BgL_arg2392z00_5199 = (long) (BgL_arg1902z00_2171);
										{	/* Unsafe/aes.scm 563 */
											long BgL_res3180z00_5201;

											BgL_res3180z00_5201 = (long) (BgL_arg2392z00_5199);
											BgL_res3181z00_5202 = BgL_res3180z00_5201;
									}}
									BgL_arg1898z00_2169 = BgL_res3181z00_5202;
							}}
							{	/* Unsafe/aes.scm 564 */
								long BgL_arg1903z00_2172;
								long BgL_arg1904z00_2173;

								{	/* Unsafe/aes.scm 564 */
									uint8_t BgL_arg1905z00_2174;

									{	/* Unsafe/aes.scm 564 */
										uint8_t BgL_res3182z00_5204;

										BgL_res3182z00_5204 = BGL_U8VREF(BgL_bz00_2136, ((long) 1));
										BgL_arg1905z00_2174 = BgL_res3182z00_5204;
									}
									{	/* Unsafe/aes.scm 564 */
										long BgL_res3184z00_5209;

										{	/* Unsafe/aes.scm 564 */
											long BgL_arg2392z00_5206;

											BgL_arg2392z00_5206 = (long) (BgL_arg1905z00_2174);
											{	/* Unsafe/aes.scm 564 */
												long BgL_res3183z00_5208;

												BgL_res3183z00_5208 = (long) (BgL_arg2392z00_5206);
												BgL_res3184z00_5209 = BgL_res3183z00_5208;
										}}
										BgL_arg1903z00_2172 = BgL_res3184z00_5209;
								}}
								{	/* Unsafe/aes.scm 565 */
									long BgL_arg1906z00_2175;
									long BgL_arg1907z00_2176;

									{	/* Unsafe/aes.scm 565 */
										uint8_t BgL_arg1908z00_2177;

										{	/* Unsafe/aes.scm 565 */
											uint8_t BgL_res3185z00_5211;

											BgL_res3185z00_5211 =
												BGL_U8VREF(BgL_az00_2135, ((long) 2));
											BgL_arg1908z00_2177 = BgL_res3185z00_5211;
										}
										{	/* Unsafe/aes.scm 565 */
											long BgL_res3187z00_5216;

											{	/* Unsafe/aes.scm 565 */
												long BgL_arg2392z00_5213;

												BgL_arg2392z00_5213 = (long) (BgL_arg1908z00_2177);
												{	/* Unsafe/aes.scm 565 */
													long BgL_res3186z00_5215;

													BgL_res3186z00_5215 = (long) (BgL_arg2392z00_5213);
													BgL_res3187z00_5216 = BgL_res3186z00_5215;
											}}
											BgL_arg1906z00_2175 = BgL_res3187z00_5216;
									}}
									{	/* Unsafe/aes.scm 566 */
										uint8_t BgL_arg1909z00_2178;

										{	/* Unsafe/aes.scm 566 */
											uint8_t BgL_res3188z00_5218;

											BgL_res3188z00_5218 =
												BGL_U8VREF(BgL_az00_2135, ((long) 3));
											BgL_arg1909z00_2178 = BgL_res3188z00_5218;
										}
										{	/* Unsafe/aes.scm 566 */
											long BgL_res3190z00_5223;

											{	/* Unsafe/aes.scm 566 */
												long BgL_arg2392z00_5220;

												BgL_arg2392z00_5220 = (long) (BgL_arg1909z00_2178);
												{	/* Unsafe/aes.scm 566 */
													long BgL_res3189z00_5222;

													BgL_res3189z00_5222 = (long) (BgL_arg2392z00_5220);
													BgL_res3190z00_5223 = BgL_res3189z00_5222;
											}}
											BgL_arg1907z00_2176 = BgL_res3190z00_5223;
									}}
									BgL_arg1904z00_2173 =
										(BgL_arg1906z00_2175 ^ BgL_arg1907z00_2176);
								}
								BgL_arg1901z00_2170 =
									(BgL_arg1903z00_2172 ^ BgL_arg1904z00_2173);
							}
							BgL_arg1896z00_2167 = (BgL_arg1898z00_2169 ^ BgL_arg1901z00_2170);
						}
						BgL_arg1893z00_2165 = (BgL_arg1895z00_2166 ^ BgL_arg1896z00_2167);
					}
					{	/* Unsafe/aes.scm 562 */
						int BgL_jz00_5237;
						unsigned long BgL_vz00_5238;

						BgL_jz00_5237 = (int) (((long) 2));
						BgL_vz00_5238 = (unsigned long) (BgL_arg1893z00_2165);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_5239;

							BgL_arg1496z00_5239 = VECTOR_REF(BgL_sz00_90, ((long) 0));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8747;
								long BgL_tmpz00_8745;

								BgL_auxz00_8747 = (uint8_t) (BgL_vz00_5238);
								BgL_tmpz00_8745 = (long) (BgL_jz00_5237);
								BGL_U8VSET(BgL_arg1496z00_5239, BgL_tmpz00_8745,
									BgL_auxz00_8747);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 567 */
					long BgL_arg1910z00_2179;

					{	/* Unsafe/aes.scm 567 */
						long BgL_arg1911z00_2180;
						long BgL_arg1912z00_2181;

						{	/* Unsafe/aes.scm 567 */
							uint8_t BgL_arg1913z00_2182;

							{	/* Unsafe/aes.scm 567 */
								uint8_t BgL_res3195z00_5242;

								BgL_res3195z00_5242 = BGL_U8VREF(BgL_az00_2135, ((long) 0));
								BgL_arg1913z00_2182 = BgL_res3195z00_5242;
							}
							{	/* Unsafe/aes.scm 567 */
								long BgL_res3197z00_5247;

								{	/* Unsafe/aes.scm 567 */
									long BgL_arg2392z00_5244;

									BgL_arg2392z00_5244 = (long) (BgL_arg1913z00_2182);
									{	/* Unsafe/aes.scm 567 */
										long BgL_res3196z00_5246;

										BgL_res3196z00_5246 = (long) (BgL_arg2392z00_5244);
										BgL_res3197z00_5247 = BgL_res3196z00_5246;
								}}
								BgL_arg1911z00_2180 = BgL_res3197z00_5247;
						}}
						{	/* Unsafe/aes.scm 568 */
							long BgL_arg1914z00_2183;
							long BgL_arg1915z00_2184;

							{	/* Unsafe/aes.scm 568 */
								uint8_t BgL_arg1916z00_2185;

								{	/* Unsafe/aes.scm 568 */
									uint8_t BgL_res3198z00_5249;

									BgL_res3198z00_5249 = BGL_U8VREF(BgL_bz00_2136, ((long) 1));
									BgL_arg1916z00_2185 = BgL_res3198z00_5249;
								}
								{	/* Unsafe/aes.scm 568 */
									long BgL_res3200z00_5254;

									{	/* Unsafe/aes.scm 568 */
										long BgL_arg2392z00_5251;

										BgL_arg2392z00_5251 = (long) (BgL_arg1916z00_2185);
										{	/* Unsafe/aes.scm 568 */
											long BgL_res3199z00_5253;

											BgL_res3199z00_5253 = (long) (BgL_arg2392z00_5251);
											BgL_res3200z00_5254 = BgL_res3199z00_5253;
									}}
									BgL_arg1914z00_2183 = BgL_res3200z00_5254;
							}}
							{	/* Unsafe/aes.scm 569 */
								long BgL_arg1917z00_2186;
								long BgL_arg1918z00_2187;

								{	/* Unsafe/aes.scm 569 */
									uint8_t BgL_arg1919z00_2188;

									{	/* Unsafe/aes.scm 569 */
										uint8_t BgL_res3201z00_5256;

										BgL_res3201z00_5256 = BGL_U8VREF(BgL_az00_2135, ((long) 2));
										BgL_arg1919z00_2188 = BgL_res3201z00_5256;
									}
									{	/* Unsafe/aes.scm 569 */
										long BgL_res3203z00_5261;

										{	/* Unsafe/aes.scm 569 */
											long BgL_arg2392z00_5258;

											BgL_arg2392z00_5258 = (long) (BgL_arg1919z00_2188);
											{	/* Unsafe/aes.scm 569 */
												long BgL_res3202z00_5260;

												BgL_res3202z00_5260 = (long) (BgL_arg2392z00_5258);
												BgL_res3203z00_5261 = BgL_res3202z00_5260;
										}}
										BgL_arg1917z00_2186 = BgL_res3203z00_5261;
								}}
								{	/* Unsafe/aes.scm 570 */
									long BgL_arg1920z00_2189;
									long BgL_arg1921z00_2190;

									{	/* Unsafe/aes.scm 570 */
										uint8_t BgL_arg1923z00_2191;

										{	/* Unsafe/aes.scm 570 */
											uint8_t BgL_res3204z00_5263;

											BgL_res3204z00_5263 =
												BGL_U8VREF(BgL_bz00_2136, ((long) 2));
											BgL_arg1923z00_2191 = BgL_res3204z00_5263;
										}
										{	/* Unsafe/aes.scm 570 */
											long BgL_res3206z00_5268;

											{	/* Unsafe/aes.scm 570 */
												long BgL_arg2392z00_5265;

												BgL_arg2392z00_5265 = (long) (BgL_arg1923z00_2191);
												{	/* Unsafe/aes.scm 570 */
													long BgL_res3205z00_5267;

													BgL_res3205z00_5267 = (long) (BgL_arg2392z00_5265);
													BgL_res3206z00_5268 = BgL_res3205z00_5267;
											}}
											BgL_arg1920z00_2189 = BgL_res3206z00_5268;
									}}
									{	/* Unsafe/aes.scm 571 */
										uint8_t BgL_arg1924z00_2192;

										{	/* Unsafe/aes.scm 571 */
											uint8_t BgL_res3207z00_5270;

											BgL_res3207z00_5270 =
												BGL_U8VREF(BgL_az00_2135, ((long) 3));
											BgL_arg1924z00_2192 = BgL_res3207z00_5270;
										}
										{	/* Unsafe/aes.scm 571 */
											long BgL_res3209z00_5275;

											{	/* Unsafe/aes.scm 571 */
												long BgL_arg2392z00_5272;

												BgL_arg2392z00_5272 = (long) (BgL_arg1924z00_2192);
												{	/* Unsafe/aes.scm 571 */
													long BgL_res3208z00_5274;

													BgL_res3208z00_5274 = (long) (BgL_arg2392z00_5272);
													BgL_res3209z00_5275 = BgL_res3208z00_5274;
											}}
											BgL_arg1921z00_2190 = BgL_res3209z00_5275;
									}}
									BgL_arg1918z00_2187 =
										(BgL_arg1920z00_2189 ^ BgL_arg1921z00_2190);
								}
								BgL_arg1915z00_2184 =
									(BgL_arg1917z00_2186 ^ BgL_arg1918z00_2187);
							}
							BgL_arg1912z00_2181 = (BgL_arg1914z00_2183 ^ BgL_arg1915z00_2184);
						}
						BgL_arg1910z00_2179 = (BgL_arg1911z00_2180 ^ BgL_arg1912z00_2181);
					}
					{	/* Unsafe/aes.scm 567 */
						int BgL_jz00_5289;
						unsigned long BgL_vz00_5290;

						BgL_jz00_5289 = (int) (((long) 2));
						BgL_vz00_5290 = (unsigned long) (BgL_arg1910z00_2179);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_5291;

							BgL_arg1496z00_5291 = VECTOR_REF(BgL_sz00_90, ((long) 1));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8774;
								long BgL_tmpz00_8772;

								BgL_auxz00_8774 = (uint8_t) (BgL_vz00_5290);
								BgL_tmpz00_8772 = (long) (BgL_jz00_5289);
								BGL_U8VSET(BgL_arg1496z00_5291, BgL_tmpz00_8772,
									BgL_auxz00_8774);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 572 */
					long BgL_arg1925z00_2193;

					{	/* Unsafe/aes.scm 572 */
						long BgL_arg1926z00_2194;
						long BgL_arg1927z00_2195;

						{	/* Unsafe/aes.scm 572 */
							uint8_t BgL_arg1928z00_2196;

							{	/* Unsafe/aes.scm 572 */
								uint8_t BgL_res3214z00_5294;

								BgL_res3214z00_5294 = BGL_U8VREF(BgL_az00_2135, ((long) 0));
								BgL_arg1928z00_2196 = BgL_res3214z00_5294;
							}
							{	/* Unsafe/aes.scm 572 */
								long BgL_res3216z00_5299;

								{	/* Unsafe/aes.scm 572 */
									long BgL_arg2392z00_5296;

									BgL_arg2392z00_5296 = (long) (BgL_arg1928z00_2196);
									{	/* Unsafe/aes.scm 572 */
										long BgL_res3215z00_5298;

										BgL_res3215z00_5298 = (long) (BgL_arg2392z00_5296);
										BgL_res3216z00_5299 = BgL_res3215z00_5298;
								}}
								BgL_arg1926z00_2194 = BgL_res3216z00_5299;
						}}
						{	/* Unsafe/aes.scm 573 */
							long BgL_arg1929z00_2197;
							long BgL_arg1930z00_2198;

							{	/* Unsafe/aes.scm 573 */
								uint8_t BgL_arg1931z00_2199;

								{	/* Unsafe/aes.scm 573 */
									uint8_t BgL_res3217z00_5301;

									BgL_res3217z00_5301 = BGL_U8VREF(BgL_az00_2135, ((long) 1));
									BgL_arg1931z00_2199 = BgL_res3217z00_5301;
								}
								{	/* Unsafe/aes.scm 573 */
									long BgL_res3219z00_5306;

									{	/* Unsafe/aes.scm 573 */
										long BgL_arg2392z00_5303;

										BgL_arg2392z00_5303 = (long) (BgL_arg1931z00_2199);
										{	/* Unsafe/aes.scm 573 */
											long BgL_res3218z00_5305;

											BgL_res3218z00_5305 = (long) (BgL_arg2392z00_5303);
											BgL_res3219z00_5306 = BgL_res3218z00_5305;
									}}
									BgL_arg1929z00_2197 = BgL_res3219z00_5306;
							}}
							{	/* Unsafe/aes.scm 574 */
								long BgL_arg1932z00_2200;
								long BgL_arg1933z00_2201;

								{	/* Unsafe/aes.scm 574 */
									uint8_t BgL_arg1934z00_2202;

									{	/* Unsafe/aes.scm 574 */
										uint8_t BgL_res3220z00_5308;

										BgL_res3220z00_5308 = BGL_U8VREF(BgL_bz00_2136, ((long) 2));
										BgL_arg1934z00_2202 = BgL_res3220z00_5308;
									}
									{	/* Unsafe/aes.scm 574 */
										long BgL_res3222z00_5313;

										{	/* Unsafe/aes.scm 574 */
											long BgL_arg2392z00_5310;

											BgL_arg2392z00_5310 = (long) (BgL_arg1934z00_2202);
											{	/* Unsafe/aes.scm 574 */
												long BgL_res3221z00_5312;

												BgL_res3221z00_5312 = (long) (BgL_arg2392z00_5310);
												BgL_res3222z00_5313 = BgL_res3221z00_5312;
										}}
										BgL_arg1932z00_2200 = BgL_res3222z00_5313;
								}}
								{	/* Unsafe/aes.scm 575 */
									long BgL_arg1935z00_2203;
									long BgL_arg1936z00_2204;

									{	/* Unsafe/aes.scm 575 */
										uint8_t BgL_arg1937z00_2205;

										{	/* Unsafe/aes.scm 575 */
											uint8_t BgL_res3223z00_5315;

											BgL_res3223z00_5315 =
												BGL_U8VREF(BgL_az00_2135, ((long) 3));
											BgL_arg1937z00_2205 = BgL_res3223z00_5315;
										}
										{	/* Unsafe/aes.scm 575 */
											long BgL_res3225z00_5320;

											{	/* Unsafe/aes.scm 575 */
												long BgL_arg2392z00_5317;

												BgL_arg2392z00_5317 = (long) (BgL_arg1937z00_2205);
												{	/* Unsafe/aes.scm 575 */
													long BgL_res3224z00_5319;

													BgL_res3224z00_5319 = (long) (BgL_arg2392z00_5317);
													BgL_res3225z00_5320 = BgL_res3224z00_5319;
											}}
											BgL_arg1935z00_2203 = BgL_res3225z00_5320;
									}}
									{	/* Unsafe/aes.scm 576 */
										uint8_t BgL_arg1938z00_2206;

										{	/* Unsafe/aes.scm 576 */
											uint8_t BgL_res3226z00_5322;

											BgL_res3226z00_5322 =
												BGL_U8VREF(BgL_bz00_2136, ((long) 3));
											BgL_arg1938z00_2206 = BgL_res3226z00_5322;
										}
										{	/* Unsafe/aes.scm 576 */
											long BgL_res3228z00_5327;

											{	/* Unsafe/aes.scm 576 */
												long BgL_arg2392z00_5324;

												BgL_arg2392z00_5324 = (long) (BgL_arg1938z00_2206);
												{	/* Unsafe/aes.scm 576 */
													long BgL_res3227z00_5326;

													BgL_res3227z00_5326 = (long) (BgL_arg2392z00_5324);
													BgL_res3228z00_5327 = BgL_res3227z00_5326;
											}}
											BgL_arg1936z00_2204 = BgL_res3228z00_5327;
									}}
									BgL_arg1933z00_2201 =
										(BgL_arg1935z00_2203 ^ BgL_arg1936z00_2204);
								}
								BgL_arg1930z00_2198 =
									(BgL_arg1932z00_2200 ^ BgL_arg1933z00_2201);
							}
							BgL_arg1927z00_2195 = (BgL_arg1929z00_2197 ^ BgL_arg1930z00_2198);
						}
						BgL_arg1925z00_2193 = (BgL_arg1926z00_2194 ^ BgL_arg1927z00_2195);
					}
					{	/* Unsafe/aes.scm 572 */
						int BgL_jz00_5341;
						unsigned long BgL_vz00_5342;

						BgL_jz00_5341 = (int) (((long) 2));
						BgL_vz00_5342 = (unsigned long) (BgL_arg1925z00_2193);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_5343;

							BgL_arg1496z00_5343 = VECTOR_REF(BgL_sz00_90, ((long) 2));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8801;
								long BgL_tmpz00_8799;

								BgL_auxz00_8801 = (uint8_t) (BgL_vz00_5342);
								BgL_tmpz00_8799 = (long) (BgL_jz00_5341);
								BGL_U8VSET(BgL_arg1496z00_5343, BgL_tmpz00_8799,
									BgL_auxz00_8801);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 577 */
					long BgL_arg1939z00_2207;

					{	/* Unsafe/aes.scm 577 */
						long BgL_arg1940z00_2208;
						long BgL_arg1941z00_2209;

						{	/* Unsafe/aes.scm 577 */
							uint8_t BgL_arg1942z00_2210;

							{	/* Unsafe/aes.scm 577 */
								uint8_t BgL_res3233z00_5346;

								BgL_res3233z00_5346 = BGL_U8VREF(BgL_az00_2135, ((long) 0));
								BgL_arg1942z00_2210 = BgL_res3233z00_5346;
							}
							{	/* Unsafe/aes.scm 577 */
								long BgL_res3235z00_5351;

								{	/* Unsafe/aes.scm 577 */
									long BgL_arg2392z00_5348;

									BgL_arg2392z00_5348 = (long) (BgL_arg1942z00_2210);
									{	/* Unsafe/aes.scm 577 */
										long BgL_res3234z00_5350;

										BgL_res3234z00_5350 = (long) (BgL_arg2392z00_5348);
										BgL_res3235z00_5351 = BgL_res3234z00_5350;
								}}
								BgL_arg1940z00_2208 = BgL_res3235z00_5351;
						}}
						{	/* Unsafe/aes.scm 578 */
							long BgL_arg1943z00_2211;
							long BgL_arg1944z00_2212;

							{	/* Unsafe/aes.scm 578 */
								uint8_t BgL_arg1945z00_2213;

								{	/* Unsafe/aes.scm 578 */
									uint8_t BgL_res3236z00_5353;

									BgL_res3236z00_5353 = BGL_U8VREF(BgL_bz00_2136, ((long) 0));
									BgL_arg1945z00_2213 = BgL_res3236z00_5353;
								}
								{	/* Unsafe/aes.scm 578 */
									long BgL_res3238z00_5358;

									{	/* Unsafe/aes.scm 578 */
										long BgL_arg2392z00_5355;

										BgL_arg2392z00_5355 = (long) (BgL_arg1945z00_2213);
										{	/* Unsafe/aes.scm 578 */
											long BgL_res3237z00_5357;

											BgL_res3237z00_5357 = (long) (BgL_arg2392z00_5355);
											BgL_res3238z00_5358 = BgL_res3237z00_5357;
									}}
									BgL_arg1943z00_2211 = BgL_res3238z00_5358;
							}}
							{	/* Unsafe/aes.scm 579 */
								long BgL_arg1946z00_2214;
								long BgL_arg1947z00_2215;

								{	/* Unsafe/aes.scm 579 */
									uint8_t BgL_arg1948z00_2216;

									{	/* Unsafe/aes.scm 579 */
										uint8_t BgL_res3239z00_5360;

										BgL_res3239z00_5360 = BGL_U8VREF(BgL_az00_2135, ((long) 1));
										BgL_arg1948z00_2216 = BgL_res3239z00_5360;
									}
									{	/* Unsafe/aes.scm 579 */
										long BgL_res3241z00_5365;

										{	/* Unsafe/aes.scm 579 */
											long BgL_arg2392z00_5362;

											BgL_arg2392z00_5362 = (long) (BgL_arg1948z00_2216);
											{	/* Unsafe/aes.scm 579 */
												long BgL_res3240z00_5364;

												BgL_res3240z00_5364 = (long) (BgL_arg2392z00_5362);
												BgL_res3241z00_5365 = BgL_res3240z00_5364;
										}}
										BgL_arg1946z00_2214 = BgL_res3241z00_5365;
								}}
								{	/* Unsafe/aes.scm 580 */
									long BgL_arg1949z00_2217;
									long BgL_arg1951z00_2218;

									{	/* Unsafe/aes.scm 580 */
										uint8_t BgL_arg1952z00_2219;

										{	/* Unsafe/aes.scm 580 */
											uint8_t BgL_res3242z00_5367;

											BgL_res3242z00_5367 =
												BGL_U8VREF(BgL_az00_2135, ((long) 2));
											BgL_arg1952z00_2219 = BgL_res3242z00_5367;
										}
										{	/* Unsafe/aes.scm 580 */
											long BgL_res3244z00_5372;

											{	/* Unsafe/aes.scm 580 */
												long BgL_arg2392z00_5369;

												BgL_arg2392z00_5369 = (long) (BgL_arg1952z00_2219);
												{	/* Unsafe/aes.scm 580 */
													long BgL_res3243z00_5371;

													BgL_res3243z00_5371 = (long) (BgL_arg2392z00_5369);
													BgL_res3244z00_5372 = BgL_res3243z00_5371;
											}}
											BgL_arg1949z00_2217 = BgL_res3244z00_5372;
									}}
									{	/* Unsafe/aes.scm 581 */
										uint8_t BgL_arg1953z00_2220;

										{	/* Unsafe/aes.scm 581 */
											uint8_t BgL_res3245z00_5374;

											BgL_res3245z00_5374 =
												BGL_U8VREF(BgL_bz00_2136, ((long) 3));
											BgL_arg1953z00_2220 = BgL_res3245z00_5374;
										}
										{	/* Unsafe/aes.scm 581 */
											long BgL_res3247z00_5379;

											{	/* Unsafe/aes.scm 581 */
												long BgL_arg2392z00_5376;

												BgL_arg2392z00_5376 = (long) (BgL_arg1953z00_2220);
												{	/* Unsafe/aes.scm 581 */
													long BgL_res3246z00_5378;

													BgL_res3246z00_5378 = (long) (BgL_arg2392z00_5376);
													BgL_res3247z00_5379 = BgL_res3246z00_5378;
											}}
											BgL_arg1951z00_2218 = BgL_res3247z00_5379;
									}}
									BgL_arg1947z00_2215 =
										(BgL_arg1949z00_2217 ^ BgL_arg1951z00_2218);
								}
								BgL_arg1944z00_2212 =
									(BgL_arg1946z00_2214 ^ BgL_arg1947z00_2215);
							}
							BgL_arg1941z00_2209 = (BgL_arg1943z00_2211 ^ BgL_arg1944z00_2212);
						}
						BgL_arg1939z00_2207 = (BgL_arg1940z00_2208 ^ BgL_arg1941z00_2209);
					}
					{	/* Unsafe/aes.scm 577 */
						int BgL_jz00_5393;
						unsigned long BgL_vz00_5394;

						BgL_jz00_5393 = (int) (((long) 2));
						BgL_vz00_5394 = (unsigned long) (BgL_arg1939z00_2207);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_5395;

							BgL_arg1496z00_5395 = VECTOR_REF(BgL_sz00_90, ((long) 3));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8828;
								long BgL_tmpz00_8826;

								BgL_auxz00_8828 = (uint8_t) (BgL_vz00_5394);
								BgL_tmpz00_8826 = (long) (BgL_jz00_5393);
								BGL_U8VSET(BgL_arg1496z00_5395, BgL_tmpz00_8826,
									BgL_auxz00_8828);
							} BUNSPEC;
			}}}}
			{	/* Unsafe/aes.scm 554 */
				obj_t BgL_az00_2226;
				obj_t BgL_bz00_2227;

				{	/* Llib/srfi4.scm 447 */

					BgL_az00_2226 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), (uint8_t) (0));
				}
				{	/* Llib/srfi4.scm 447 */

					BgL_bz00_2227 =
						BGl_makezd2u8vectorzd2zz__srfi4z00(((long) 4), (uint8_t) (0));
				}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2229;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3255z00_5412;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_5398;
							int BgL_jz00_5399;

							BgL_iz00_5398 = (int) (((long) 0));
							BgL_jz00_5399 = (int) (((long) 3));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_5400;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_5401;

									BgL_arg1495z00_5401 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_5398));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3252z00_5406;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_5405;

											BgL_kz00_5405 = (long) (BgL_jz00_5399);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8838;

												BgL_tmpz00_8838 = ((obj_t) BgL_arg1495z00_5401);
												BgL_res3252z00_5406 =
													BGL_U8VREF(BgL_tmpz00_8838, BgL_kz00_5405);
										}}
										BgL_arg1494z00_5400 = BgL_res3252z00_5406;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3254z00_5411;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_5408;

										BgL_arg2392z00_5408 = (long) (BgL_arg1494z00_5400);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3253z00_5410;

											BgL_res3253z00_5410 = (long) (BgL_arg2392z00_5408);
											BgL_res3254z00_5411 = BgL_res3253z00_5410;
									}}
									BgL_res3255z00_5412 = (unsigned long) (BgL_res3254z00_5411);
						}}}
						BgL_vz00_2229 = BgL_res3255z00_5412;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8844;

						BgL_tmpz00_8844 = (uint8_t) (BgL_vz00_2229);
						BGL_U8VSET(BgL_az00_2226, ((long) 0), BgL_tmpz00_8844);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2229) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1954z00_2231;

							BgL_arg1954z00_2231 =
								((long) (BgL_vz00_2229) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8854;

								BgL_tmpz00_8854 = (uint8_t) (BgL_arg1954z00_2231);
								BGL_U8VSET(BgL_bz00_2227, ((long) 0), BgL_tmpz00_8854);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1955z00_2232;

							BgL_arg1955z00_2232 =
								(((long) (BgL_vz00_2229) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8861;

								BgL_tmpz00_8861 = (uint8_t) (BgL_arg1955z00_2232);
								BGL_U8VSET(BgL_bz00_2227, ((long) 0), BgL_tmpz00_8861);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2236;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3264z00_5438;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_5424;
							int BgL_jz00_5425;

							BgL_iz00_5424 = (int) (((long) 1));
							BgL_jz00_5425 = (int) (((long) 3));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_5426;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_5427;

									BgL_arg1495z00_5427 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_5424));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3261z00_5432;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_5431;

											BgL_kz00_5431 = (long) (BgL_jz00_5425);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8869;

												BgL_tmpz00_8869 = ((obj_t) BgL_arg1495z00_5427);
												BgL_res3261z00_5432 =
													BGL_U8VREF(BgL_tmpz00_8869, BgL_kz00_5431);
										}}
										BgL_arg1494z00_5426 = BgL_res3261z00_5432;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3263z00_5437;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_5434;

										BgL_arg2392z00_5434 = (long) (BgL_arg1494z00_5426);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3262z00_5436;

											BgL_res3262z00_5436 = (long) (BgL_arg2392z00_5434);
											BgL_res3263z00_5437 = BgL_res3262z00_5436;
									}}
									BgL_res3264z00_5438 = (unsigned long) (BgL_res3263z00_5437);
						}}}
						BgL_vz00_2236 = BgL_res3264z00_5438;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8875;

						BgL_tmpz00_8875 = (uint8_t) (BgL_vz00_2236);
						BGL_U8VSET(BgL_az00_2226, ((long) 1), BgL_tmpz00_8875);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2236) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1958z00_2238;

							BgL_arg1958z00_2238 =
								((long) (BgL_vz00_2236) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8885;

								BgL_tmpz00_8885 = (uint8_t) (BgL_arg1958z00_2238);
								BGL_U8VSET(BgL_bz00_2227, ((long) 1), BgL_tmpz00_8885);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1959z00_2239;

							BgL_arg1959z00_2239 =
								(((long) (BgL_vz00_2236) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8892;

								BgL_tmpz00_8892 = (uint8_t) (BgL_arg1959z00_2239);
								BGL_U8VSET(BgL_bz00_2227, ((long) 1), BgL_tmpz00_8892);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2243;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3273z00_5464;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_5450;
							int BgL_jz00_5451;

							BgL_iz00_5450 = (int) (((long) 2));
							BgL_jz00_5451 = (int) (((long) 3));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_5452;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_5453;

									BgL_arg1495z00_5453 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_5450));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3270z00_5458;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_5457;

											BgL_kz00_5457 = (long) (BgL_jz00_5451);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8900;

												BgL_tmpz00_8900 = ((obj_t) BgL_arg1495z00_5453);
												BgL_res3270z00_5458 =
													BGL_U8VREF(BgL_tmpz00_8900, BgL_kz00_5457);
										}}
										BgL_arg1494z00_5452 = BgL_res3270z00_5458;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3272z00_5463;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_5460;

										BgL_arg2392z00_5460 = (long) (BgL_arg1494z00_5452);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3271z00_5462;

											BgL_res3271z00_5462 = (long) (BgL_arg2392z00_5460);
											BgL_res3272z00_5463 = BgL_res3271z00_5462;
									}}
									BgL_res3273z00_5464 = (unsigned long) (BgL_res3272z00_5463);
						}}}
						BgL_vz00_2243 = BgL_res3273z00_5464;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8906;

						BgL_tmpz00_8906 = (uint8_t) (BgL_vz00_2243);
						BGL_U8VSET(BgL_az00_2226, ((long) 2), BgL_tmpz00_8906);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2243) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1962z00_2245;

							BgL_arg1962z00_2245 =
								((long) (BgL_vz00_2243) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8916;

								BgL_tmpz00_8916 = (uint8_t) (BgL_arg1962z00_2245);
								BGL_U8VSET(BgL_bz00_2227, ((long) 2), BgL_tmpz00_8916);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1963z00_2246;

							BgL_arg1963z00_2246 =
								(((long) (BgL_vz00_2243) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8923;

								BgL_tmpz00_8923 = (uint8_t) (BgL_arg1963z00_2246);
								BGL_U8VSET(BgL_bz00_2227, ((long) 2), BgL_tmpz00_8923);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 557 */
					unsigned long BgL_vz00_2250;

					{	/* Unsafe/aes.scm 557 */
						unsigned long BgL_res3282z00_5490;

						{	/* Unsafe/aes.scm 557 */
							int BgL_iz00_5476;
							int BgL_jz00_5477;

							BgL_iz00_5476 = (int) (((long) 3));
							BgL_jz00_5477 = (int) (((long) 3));
							{	/* Unsafe/aes.scm 420 */
								uint8_t BgL_arg1494z00_5478;

								{	/* Unsafe/aes.scm 420 */
									obj_t BgL_arg1495z00_5479;

									BgL_arg1495z00_5479 =
										VECTOR_REF(BgL_sz00_90, (long) (BgL_iz00_5476));
									{	/* Unsafe/aes.scm 420 */
										uint8_t BgL_res3279z00_5484;

										{	/* Unsafe/aes.scm 420 */
											long BgL_kz00_5483;

											BgL_kz00_5483 = (long) (BgL_jz00_5477);
											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_tmpz00_8931;

												BgL_tmpz00_8931 = ((obj_t) BgL_arg1495z00_5479);
												BgL_res3279z00_5484 =
													BGL_U8VREF(BgL_tmpz00_8931, BgL_kz00_5483);
										}}
										BgL_arg1494z00_5478 = BgL_res3279z00_5484;
								}}
								{	/* Unsafe/aes.scm 420 */
									long BgL_res3281z00_5489;

									{	/* Unsafe/aes.scm 420 */
										long BgL_arg2392z00_5486;

										BgL_arg2392z00_5486 = (long) (BgL_arg1494z00_5478);
										{	/* Unsafe/aes.scm 420 */
											long BgL_res3280z00_5488;

											BgL_res3280z00_5488 = (long) (BgL_arg2392z00_5486);
											BgL_res3281z00_5489 = BgL_res3280z00_5488;
									}}
									BgL_res3282z00_5490 = (unsigned long) (BgL_res3281z00_5489);
						}}}
						BgL_vz00_2250 = BgL_res3282z00_5490;
					}
					{	/* Unsafe/aes.scm 558 */
						uint8_t BgL_tmpz00_8937;

						BgL_tmpz00_8937 = (uint8_t) (BgL_vz00_2250);
						BGL_U8VSET(BgL_az00_2226, ((long) 3), BgL_tmpz00_8937);
					} BUNSPEC;
					if ((((long) (BgL_vz00_2250) & ((long) 128)) == ((long) 0)))
						{	/* Unsafe/aes.scm 560 */
							long BgL_arg1966z00_2252;

							BgL_arg1966z00_2252 =
								((long) (BgL_vz00_2250) << (int) (((long) 1)));
							{	/* Unsafe/aes.scm 560 */
								uint8_t BgL_tmpz00_8947;

								BgL_tmpz00_8947 = (uint8_t) (BgL_arg1966z00_2252);
								BGL_U8VSET(BgL_bz00_2227, ((long) 3), BgL_tmpz00_8947);
							} BUNSPEC;
						}
					else
						{	/* Unsafe/aes.scm 561 */
							long BgL_arg1967z00_2253;

							BgL_arg1967z00_2253 =
								(((long) (BgL_vz00_2250) << (int) (((long) 1))) ^ ((long) 283));
							{	/* Unsafe/aes.scm 561 */
								uint8_t BgL_tmpz00_8954;

								BgL_tmpz00_8954 = (uint8_t) (BgL_arg1967z00_2253);
								BGL_U8VSET(BgL_bz00_2227, ((long) 3), BgL_tmpz00_8954);
							} BUNSPEC;
				}}
				{	/* Unsafe/aes.scm 562 */
					long BgL_arg1970z00_2256;

					{	/* Unsafe/aes.scm 562 */
						long BgL_arg1971z00_2257;
						long BgL_arg1972z00_2258;

						{	/* Unsafe/aes.scm 562 */
							uint8_t BgL_arg1973z00_2259;

							{	/* Unsafe/aes.scm 562 */
								uint8_t BgL_res3288z00_5502;

								BgL_res3288z00_5502 = BGL_U8VREF(BgL_bz00_2227, ((long) 0));
								BgL_arg1973z00_2259 = BgL_res3288z00_5502;
							}
							{	/* Unsafe/aes.scm 562 */
								long BgL_res3290z00_5507;

								{	/* Unsafe/aes.scm 562 */
									long BgL_arg2392z00_5504;

									BgL_arg2392z00_5504 = (long) (BgL_arg1973z00_2259);
									{	/* Unsafe/aes.scm 562 */
										long BgL_res3289z00_5506;

										BgL_res3289z00_5506 = (long) (BgL_arg2392z00_5504);
										BgL_res3290z00_5507 = BgL_res3289z00_5506;
								}}
								BgL_arg1971z00_2257 = BgL_res3290z00_5507;
						}}
						{	/* Unsafe/aes.scm 563 */
							long BgL_arg1974z00_2260;
							long BgL_arg1975z00_2261;

							{	/* Unsafe/aes.scm 563 */
								uint8_t BgL_arg1976z00_2262;

								{	/* Unsafe/aes.scm 563 */
									uint8_t BgL_res3291z00_5509;

									BgL_res3291z00_5509 = BGL_U8VREF(BgL_az00_2226, ((long) 1));
									BgL_arg1976z00_2262 = BgL_res3291z00_5509;
								}
								{	/* Unsafe/aes.scm 563 */
									long BgL_res3293z00_5514;

									{	/* Unsafe/aes.scm 563 */
										long BgL_arg2392z00_5511;

										BgL_arg2392z00_5511 = (long) (BgL_arg1976z00_2262);
										{	/* Unsafe/aes.scm 563 */
											long BgL_res3292z00_5513;

											BgL_res3292z00_5513 = (long) (BgL_arg2392z00_5511);
											BgL_res3293z00_5514 = BgL_res3292z00_5513;
									}}
									BgL_arg1974z00_2260 = BgL_res3293z00_5514;
							}}
							{	/* Unsafe/aes.scm 564 */
								long BgL_arg1977z00_2263;
								long BgL_arg1979z00_2264;

								{	/* Unsafe/aes.scm 564 */
									uint8_t BgL_arg1980z00_2265;

									{	/* Unsafe/aes.scm 564 */
										uint8_t BgL_res3294z00_5516;

										BgL_res3294z00_5516 = BGL_U8VREF(BgL_bz00_2227, ((long) 1));
										BgL_arg1980z00_2265 = BgL_res3294z00_5516;
									}
									{	/* Unsafe/aes.scm 564 */
										long BgL_res3296z00_5521;

										{	/* Unsafe/aes.scm 564 */
											long BgL_arg2392z00_5518;

											BgL_arg2392z00_5518 = (long) (BgL_arg1980z00_2265);
											{	/* Unsafe/aes.scm 564 */
												long BgL_res3295z00_5520;

												BgL_res3295z00_5520 = (long) (BgL_arg2392z00_5518);
												BgL_res3296z00_5521 = BgL_res3295z00_5520;
										}}
										BgL_arg1977z00_2263 = BgL_res3296z00_5521;
								}}
								{	/* Unsafe/aes.scm 565 */
									long BgL_arg1981z00_2266;
									long BgL_arg1982z00_2267;

									{	/* Unsafe/aes.scm 565 */
										uint8_t BgL_arg1983z00_2268;

										{	/* Unsafe/aes.scm 565 */
											uint8_t BgL_res3297z00_5523;

											BgL_res3297z00_5523 =
												BGL_U8VREF(BgL_az00_2226, ((long) 2));
											BgL_arg1983z00_2268 = BgL_res3297z00_5523;
										}
										{	/* Unsafe/aes.scm 565 */
											long BgL_res3299z00_5528;

											{	/* Unsafe/aes.scm 565 */
												long BgL_arg2392z00_5525;

												BgL_arg2392z00_5525 = (long) (BgL_arg1983z00_2268);
												{	/* Unsafe/aes.scm 565 */
													long BgL_res3298z00_5527;

													BgL_res3298z00_5527 = (long) (BgL_arg2392z00_5525);
													BgL_res3299z00_5528 = BgL_res3298z00_5527;
											}}
											BgL_arg1981z00_2266 = BgL_res3299z00_5528;
									}}
									{	/* Unsafe/aes.scm 566 */
										uint8_t BgL_arg1984z00_2269;

										{	/* Unsafe/aes.scm 566 */
											uint8_t BgL_res3300z00_5530;

											BgL_res3300z00_5530 =
												BGL_U8VREF(BgL_az00_2226, ((long) 3));
											BgL_arg1984z00_2269 = BgL_res3300z00_5530;
										}
										{	/* Unsafe/aes.scm 566 */
											long BgL_res3302z00_5535;

											{	/* Unsafe/aes.scm 566 */
												long BgL_arg2392z00_5532;

												BgL_arg2392z00_5532 = (long) (BgL_arg1984z00_2269);
												{	/* Unsafe/aes.scm 566 */
													long BgL_res3301z00_5534;

													BgL_res3301z00_5534 = (long) (BgL_arg2392z00_5532);
													BgL_res3302z00_5535 = BgL_res3301z00_5534;
											}}
											BgL_arg1982z00_2267 = BgL_res3302z00_5535;
									}}
									BgL_arg1979z00_2264 =
										(BgL_arg1981z00_2266 ^ BgL_arg1982z00_2267);
								}
								BgL_arg1975z00_2261 =
									(BgL_arg1977z00_2263 ^ BgL_arg1979z00_2264);
							}
							BgL_arg1972z00_2258 = (BgL_arg1974z00_2260 ^ BgL_arg1975z00_2261);
						}
						BgL_arg1970z00_2256 = (BgL_arg1971z00_2257 ^ BgL_arg1972z00_2258);
					}
					{	/* Unsafe/aes.scm 562 */
						int BgL_jz00_5549;
						unsigned long BgL_vz00_5550;

						BgL_jz00_5549 = (int) (((long) 3));
						BgL_vz00_5550 = (unsigned long) (BgL_arg1970z00_2256);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_5551;

							BgL_arg1496z00_5551 = VECTOR_REF(BgL_sz00_90, ((long) 0));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_8981;
								long BgL_tmpz00_8979;

								BgL_auxz00_8981 = (uint8_t) (BgL_vz00_5550);
								BgL_tmpz00_8979 = (long) (BgL_jz00_5549);
								BGL_U8VSET(BgL_arg1496z00_5551, BgL_tmpz00_8979,
									BgL_auxz00_8981);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 567 */
					long BgL_arg1985z00_2270;

					{	/* Unsafe/aes.scm 567 */
						long BgL_arg1986z00_2271;
						long BgL_arg1987z00_2272;

						{	/* Unsafe/aes.scm 567 */
							uint8_t BgL_arg1988z00_2273;

							{	/* Unsafe/aes.scm 567 */
								uint8_t BgL_res3307z00_5554;

								BgL_res3307z00_5554 = BGL_U8VREF(BgL_az00_2226, ((long) 0));
								BgL_arg1988z00_2273 = BgL_res3307z00_5554;
							}
							{	/* Unsafe/aes.scm 567 */
								long BgL_res3309z00_5559;

								{	/* Unsafe/aes.scm 567 */
									long BgL_arg2392z00_5556;

									BgL_arg2392z00_5556 = (long) (BgL_arg1988z00_2273);
									{	/* Unsafe/aes.scm 567 */
										long BgL_res3308z00_5558;

										BgL_res3308z00_5558 = (long) (BgL_arg2392z00_5556);
										BgL_res3309z00_5559 = BgL_res3308z00_5558;
								}}
								BgL_arg1986z00_2271 = BgL_res3309z00_5559;
						}}
						{	/* Unsafe/aes.scm 568 */
							long BgL_arg1989z00_2274;
							long BgL_arg1990z00_2275;

							{	/* Unsafe/aes.scm 568 */
								uint8_t BgL_arg1991z00_2276;

								{	/* Unsafe/aes.scm 568 */
									uint8_t BgL_res3310z00_5561;

									BgL_res3310z00_5561 = BGL_U8VREF(BgL_bz00_2227, ((long) 1));
									BgL_arg1991z00_2276 = BgL_res3310z00_5561;
								}
								{	/* Unsafe/aes.scm 568 */
									long BgL_res3312z00_5566;

									{	/* Unsafe/aes.scm 568 */
										long BgL_arg2392z00_5563;

										BgL_arg2392z00_5563 = (long) (BgL_arg1991z00_2276);
										{	/* Unsafe/aes.scm 568 */
											long BgL_res3311z00_5565;

											BgL_res3311z00_5565 = (long) (BgL_arg2392z00_5563);
											BgL_res3312z00_5566 = BgL_res3311z00_5565;
									}}
									BgL_arg1989z00_2274 = BgL_res3312z00_5566;
							}}
							{	/* Unsafe/aes.scm 569 */
								long BgL_arg1992z00_2277;
								long BgL_arg1993z00_2278;

								{	/* Unsafe/aes.scm 569 */
									uint8_t BgL_arg1995z00_2279;

									{	/* Unsafe/aes.scm 569 */
										uint8_t BgL_res3313z00_5568;

										BgL_res3313z00_5568 = BGL_U8VREF(BgL_az00_2226, ((long) 2));
										BgL_arg1995z00_2279 = BgL_res3313z00_5568;
									}
									{	/* Unsafe/aes.scm 569 */
										long BgL_res3315z00_5573;

										{	/* Unsafe/aes.scm 569 */
											long BgL_arg2392z00_5570;

											BgL_arg2392z00_5570 = (long) (BgL_arg1995z00_2279);
											{	/* Unsafe/aes.scm 569 */
												long BgL_res3314z00_5572;

												BgL_res3314z00_5572 = (long) (BgL_arg2392z00_5570);
												BgL_res3315z00_5573 = BgL_res3314z00_5572;
										}}
										BgL_arg1992z00_2277 = BgL_res3315z00_5573;
								}}
								{	/* Unsafe/aes.scm 570 */
									long BgL_arg1996z00_2280;
									long BgL_arg1997z00_2281;

									{	/* Unsafe/aes.scm 570 */
										uint8_t BgL_arg1998z00_2282;

										{	/* Unsafe/aes.scm 570 */
											uint8_t BgL_res3316z00_5575;

											BgL_res3316z00_5575 =
												BGL_U8VREF(BgL_bz00_2227, ((long) 2));
											BgL_arg1998z00_2282 = BgL_res3316z00_5575;
										}
										{	/* Unsafe/aes.scm 570 */
											long BgL_res3318z00_5580;

											{	/* Unsafe/aes.scm 570 */
												long BgL_arg2392z00_5577;

												BgL_arg2392z00_5577 = (long) (BgL_arg1998z00_2282);
												{	/* Unsafe/aes.scm 570 */
													long BgL_res3317z00_5579;

													BgL_res3317z00_5579 = (long) (BgL_arg2392z00_5577);
													BgL_res3318z00_5580 = BgL_res3317z00_5579;
											}}
											BgL_arg1996z00_2280 = BgL_res3318z00_5580;
									}}
									{	/* Unsafe/aes.scm 571 */
										uint8_t BgL_arg1999z00_2283;

										{	/* Unsafe/aes.scm 571 */
											uint8_t BgL_res3319z00_5582;

											BgL_res3319z00_5582 =
												BGL_U8VREF(BgL_az00_2226, ((long) 3));
											BgL_arg1999z00_2283 = BgL_res3319z00_5582;
										}
										{	/* Unsafe/aes.scm 571 */
											long BgL_res3321z00_5587;

											{	/* Unsafe/aes.scm 571 */
												long BgL_arg2392z00_5584;

												BgL_arg2392z00_5584 = (long) (BgL_arg1999z00_2283);
												{	/* Unsafe/aes.scm 571 */
													long BgL_res3320z00_5586;

													BgL_res3320z00_5586 = (long) (BgL_arg2392z00_5584);
													BgL_res3321z00_5587 = BgL_res3320z00_5586;
											}}
											BgL_arg1997z00_2281 = BgL_res3321z00_5587;
									}}
									BgL_arg1993z00_2278 =
										(BgL_arg1996z00_2280 ^ BgL_arg1997z00_2281);
								}
								BgL_arg1990z00_2275 =
									(BgL_arg1992z00_2277 ^ BgL_arg1993z00_2278);
							}
							BgL_arg1987z00_2272 = (BgL_arg1989z00_2274 ^ BgL_arg1990z00_2275);
						}
						BgL_arg1985z00_2270 = (BgL_arg1986z00_2271 ^ BgL_arg1987z00_2272);
					}
					{	/* Unsafe/aes.scm 567 */
						int BgL_jz00_5601;
						unsigned long BgL_vz00_5602;

						BgL_jz00_5601 = (int) (((long) 3));
						BgL_vz00_5602 = (unsigned long) (BgL_arg1985z00_2270);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_5603;

							BgL_arg1496z00_5603 = VECTOR_REF(BgL_sz00_90, ((long) 1));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_9008;
								long BgL_tmpz00_9006;

								BgL_auxz00_9008 = (uint8_t) (BgL_vz00_5602);
								BgL_tmpz00_9006 = (long) (BgL_jz00_5601);
								BGL_U8VSET(BgL_arg1496z00_5603, BgL_tmpz00_9006,
									BgL_auxz00_9008);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 572 */
					long BgL_arg2000z00_2284;

					{	/* Unsafe/aes.scm 572 */
						long BgL_arg2001z00_2285;
						long BgL_arg2002z00_2286;

						{	/* Unsafe/aes.scm 572 */
							uint8_t BgL_arg2003z00_2287;

							{	/* Unsafe/aes.scm 572 */
								uint8_t BgL_res3326z00_5606;

								BgL_res3326z00_5606 = BGL_U8VREF(BgL_az00_2226, ((long) 0));
								BgL_arg2003z00_2287 = BgL_res3326z00_5606;
							}
							{	/* Unsafe/aes.scm 572 */
								long BgL_res3328z00_5611;

								{	/* Unsafe/aes.scm 572 */
									long BgL_arg2392z00_5608;

									BgL_arg2392z00_5608 = (long) (BgL_arg2003z00_2287);
									{	/* Unsafe/aes.scm 572 */
										long BgL_res3327z00_5610;

										BgL_res3327z00_5610 = (long) (BgL_arg2392z00_5608);
										BgL_res3328z00_5611 = BgL_res3327z00_5610;
								}}
								BgL_arg2001z00_2285 = BgL_res3328z00_5611;
						}}
						{	/* Unsafe/aes.scm 573 */
							long BgL_arg2004z00_2288;
							long BgL_arg2005z00_2289;

							{	/* Unsafe/aes.scm 573 */
								uint8_t BgL_arg2007z00_2290;

								{	/* Unsafe/aes.scm 573 */
									uint8_t BgL_res3329z00_5613;

									BgL_res3329z00_5613 = BGL_U8VREF(BgL_az00_2226, ((long) 1));
									BgL_arg2007z00_2290 = BgL_res3329z00_5613;
								}
								{	/* Unsafe/aes.scm 573 */
									long BgL_res3331z00_5618;

									{	/* Unsafe/aes.scm 573 */
										long BgL_arg2392z00_5615;

										BgL_arg2392z00_5615 = (long) (BgL_arg2007z00_2290);
										{	/* Unsafe/aes.scm 573 */
											long BgL_res3330z00_5617;

											BgL_res3330z00_5617 = (long) (BgL_arg2392z00_5615);
											BgL_res3331z00_5618 = BgL_res3330z00_5617;
									}}
									BgL_arg2004z00_2288 = BgL_res3331z00_5618;
							}}
							{	/* Unsafe/aes.scm 574 */
								long BgL_arg2008z00_2291;
								long BgL_arg2010z00_2292;

								{	/* Unsafe/aes.scm 574 */
									uint8_t BgL_arg2011z00_2293;

									{	/* Unsafe/aes.scm 574 */
										uint8_t BgL_res3332z00_5620;

										BgL_res3332z00_5620 = BGL_U8VREF(BgL_bz00_2227, ((long) 2));
										BgL_arg2011z00_2293 = BgL_res3332z00_5620;
									}
									{	/* Unsafe/aes.scm 574 */
										long BgL_res3334z00_5625;

										{	/* Unsafe/aes.scm 574 */
											long BgL_arg2392z00_5622;

											BgL_arg2392z00_5622 = (long) (BgL_arg2011z00_2293);
											{	/* Unsafe/aes.scm 574 */
												long BgL_res3333z00_5624;

												BgL_res3333z00_5624 = (long) (BgL_arg2392z00_5622);
												BgL_res3334z00_5625 = BgL_res3333z00_5624;
										}}
										BgL_arg2008z00_2291 = BgL_res3334z00_5625;
								}}
								{	/* Unsafe/aes.scm 575 */
									long BgL_arg2012z00_2294;
									long BgL_arg2013z00_2295;

									{	/* Unsafe/aes.scm 575 */
										uint8_t BgL_arg2014z00_2296;

										{	/* Unsafe/aes.scm 575 */
											uint8_t BgL_res3335z00_5627;

											BgL_res3335z00_5627 =
												BGL_U8VREF(BgL_az00_2226, ((long) 3));
											BgL_arg2014z00_2296 = BgL_res3335z00_5627;
										}
										{	/* Unsafe/aes.scm 575 */
											long BgL_res3337z00_5632;

											{	/* Unsafe/aes.scm 575 */
												long BgL_arg2392z00_5629;

												BgL_arg2392z00_5629 = (long) (BgL_arg2014z00_2296);
												{	/* Unsafe/aes.scm 575 */
													long BgL_res3336z00_5631;

													BgL_res3336z00_5631 = (long) (BgL_arg2392z00_5629);
													BgL_res3337z00_5632 = BgL_res3336z00_5631;
											}}
											BgL_arg2012z00_2294 = BgL_res3337z00_5632;
									}}
									{	/* Unsafe/aes.scm 576 */
										uint8_t BgL_arg2016z00_2297;

										{	/* Unsafe/aes.scm 576 */
											uint8_t BgL_res3338z00_5634;

											BgL_res3338z00_5634 =
												BGL_U8VREF(BgL_bz00_2227, ((long) 3));
											BgL_arg2016z00_2297 = BgL_res3338z00_5634;
										}
										{	/* Unsafe/aes.scm 576 */
											long BgL_res3340z00_5639;

											{	/* Unsafe/aes.scm 576 */
												long BgL_arg2392z00_5636;

												BgL_arg2392z00_5636 = (long) (BgL_arg2016z00_2297);
												{	/* Unsafe/aes.scm 576 */
													long BgL_res3339z00_5638;

													BgL_res3339z00_5638 = (long) (BgL_arg2392z00_5636);
													BgL_res3340z00_5639 = BgL_res3339z00_5638;
											}}
											BgL_arg2013z00_2295 = BgL_res3340z00_5639;
									}}
									BgL_arg2010z00_2292 =
										(BgL_arg2012z00_2294 ^ BgL_arg2013z00_2295);
								}
								BgL_arg2005z00_2289 =
									(BgL_arg2008z00_2291 ^ BgL_arg2010z00_2292);
							}
							BgL_arg2002z00_2286 = (BgL_arg2004z00_2288 ^ BgL_arg2005z00_2289);
						}
						BgL_arg2000z00_2284 = (BgL_arg2001z00_2285 ^ BgL_arg2002z00_2286);
					}
					{	/* Unsafe/aes.scm 572 */
						int BgL_jz00_5653;
						unsigned long BgL_vz00_5654;

						BgL_jz00_5653 = (int) (((long) 3));
						BgL_vz00_5654 = (unsigned long) (BgL_arg2000z00_2284);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_5655;

							BgL_arg1496z00_5655 = VECTOR_REF(BgL_sz00_90, ((long) 2));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_9035;
								long BgL_tmpz00_9033;

								BgL_auxz00_9035 = (uint8_t) (BgL_vz00_5654);
								BgL_tmpz00_9033 = (long) (BgL_jz00_5653);
								BGL_U8VSET(BgL_arg1496z00_5655, BgL_tmpz00_9033,
									BgL_auxz00_9035);
							} BUNSPEC;
				}}}
				{	/* Unsafe/aes.scm 577 */
					long BgL_arg2017z00_2298;

					{	/* Unsafe/aes.scm 577 */
						long BgL_arg2018z00_2299;
						long BgL_arg2020z00_2300;

						{	/* Unsafe/aes.scm 577 */
							uint8_t BgL_arg2021z00_2301;

							{	/* Unsafe/aes.scm 577 */
								uint8_t BgL_res3345z00_5658;

								BgL_res3345z00_5658 = BGL_U8VREF(BgL_az00_2226, ((long) 0));
								BgL_arg2021z00_2301 = BgL_res3345z00_5658;
							}
							{	/* Unsafe/aes.scm 577 */
								long BgL_res3347z00_5663;

								{	/* Unsafe/aes.scm 577 */
									long BgL_arg2392z00_5660;

									BgL_arg2392z00_5660 = (long) (BgL_arg2021z00_2301);
									{	/* Unsafe/aes.scm 577 */
										long BgL_res3346z00_5662;

										BgL_res3346z00_5662 = (long) (BgL_arg2392z00_5660);
										BgL_res3347z00_5663 = BgL_res3346z00_5662;
								}}
								BgL_arg2018z00_2299 = BgL_res3347z00_5663;
						}}
						{	/* Unsafe/aes.scm 578 */
							long BgL_arg2022z00_2302;
							long BgL_arg2023z00_2303;

							{	/* Unsafe/aes.scm 578 */
								uint8_t BgL_arg2026z00_2304;

								{	/* Unsafe/aes.scm 578 */
									uint8_t BgL_res3348z00_5665;

									BgL_res3348z00_5665 = BGL_U8VREF(BgL_bz00_2227, ((long) 0));
									BgL_arg2026z00_2304 = BgL_res3348z00_5665;
								}
								{	/* Unsafe/aes.scm 578 */
									long BgL_res3350z00_5670;

									{	/* Unsafe/aes.scm 578 */
										long BgL_arg2392z00_5667;

										BgL_arg2392z00_5667 = (long) (BgL_arg2026z00_2304);
										{	/* Unsafe/aes.scm 578 */
											long BgL_res3349z00_5669;

											BgL_res3349z00_5669 = (long) (BgL_arg2392z00_5667);
											BgL_res3350z00_5670 = BgL_res3349z00_5669;
									}}
									BgL_arg2022z00_2302 = BgL_res3350z00_5670;
							}}
							{	/* Unsafe/aes.scm 579 */
								long BgL_arg2028z00_2305;
								long BgL_arg2029z00_2306;

								{	/* Unsafe/aes.scm 579 */
									uint8_t BgL_arg2031z00_2307;

									{	/* Unsafe/aes.scm 579 */
										uint8_t BgL_res3351z00_5672;

										BgL_res3351z00_5672 = BGL_U8VREF(BgL_az00_2226, ((long) 1));
										BgL_arg2031z00_2307 = BgL_res3351z00_5672;
									}
									{	/* Unsafe/aes.scm 579 */
										long BgL_res3353z00_5677;

										{	/* Unsafe/aes.scm 579 */
											long BgL_arg2392z00_5674;

											BgL_arg2392z00_5674 = (long) (BgL_arg2031z00_2307);
											{	/* Unsafe/aes.scm 579 */
												long BgL_res3352z00_5676;

												BgL_res3352z00_5676 = (long) (BgL_arg2392z00_5674);
												BgL_res3353z00_5677 = BgL_res3352z00_5676;
										}}
										BgL_arg2028z00_2305 = BgL_res3353z00_5677;
								}}
								{	/* Unsafe/aes.scm 580 */
									long BgL_arg2033z00_2308;
									long BgL_arg2034z00_2309;

									{	/* Unsafe/aes.scm 580 */
										uint8_t BgL_arg2035z00_2310;

										{	/* Unsafe/aes.scm 580 */
											uint8_t BgL_res3354z00_5679;

											BgL_res3354z00_5679 =
												BGL_U8VREF(BgL_az00_2226, ((long) 2));
											BgL_arg2035z00_2310 = BgL_res3354z00_5679;
										}
										{	/* Unsafe/aes.scm 580 */
											long BgL_res3356z00_5684;

											{	/* Unsafe/aes.scm 580 */
												long BgL_arg2392z00_5681;

												BgL_arg2392z00_5681 = (long) (BgL_arg2035z00_2310);
												{	/* Unsafe/aes.scm 580 */
													long BgL_res3355z00_5683;

													BgL_res3355z00_5683 = (long) (BgL_arg2392z00_5681);
													BgL_res3356z00_5684 = BgL_res3355z00_5683;
											}}
											BgL_arg2033z00_2308 = BgL_res3356z00_5684;
									}}
									{	/* Unsafe/aes.scm 581 */
										uint8_t BgL_arg2036z00_2311;

										{	/* Unsafe/aes.scm 581 */
											uint8_t BgL_res3357z00_5686;

											BgL_res3357z00_5686 =
												BGL_U8VREF(BgL_bz00_2227, ((long) 3));
											BgL_arg2036z00_2311 = BgL_res3357z00_5686;
										}
										{	/* Unsafe/aes.scm 581 */
											long BgL_res3359z00_5691;

											{	/* Unsafe/aes.scm 581 */
												long BgL_arg2392z00_5688;

												BgL_arg2392z00_5688 = (long) (BgL_arg2036z00_2311);
												{	/* Unsafe/aes.scm 581 */
													long BgL_res3358z00_5690;

													BgL_res3358z00_5690 = (long) (BgL_arg2392z00_5688);
													BgL_res3359z00_5691 = BgL_res3358z00_5690;
											}}
											BgL_arg2034z00_2309 = BgL_res3359z00_5691;
									}}
									BgL_arg2029z00_2306 =
										(BgL_arg2033z00_2308 ^ BgL_arg2034z00_2309);
								}
								BgL_arg2023z00_2303 =
									(BgL_arg2028z00_2305 ^ BgL_arg2029z00_2306);
							}
							BgL_arg2020z00_2300 = (BgL_arg2022z00_2302 ^ BgL_arg2023z00_2303);
						}
						BgL_arg2017z00_2298 = (BgL_arg2018z00_2299 ^ BgL_arg2020z00_2300);
					}
					{	/* Unsafe/aes.scm 577 */
						int BgL_jz00_5705;
						unsigned long BgL_vz00_5706;

						BgL_jz00_5705 = (int) (((long) 3));
						BgL_vz00_5706 = (unsigned long) (BgL_arg2017z00_2298);
						{	/* Unsafe/aes.scm 426 */
							obj_t BgL_arg1496z00_5707;

							BgL_arg1496z00_5707 = VECTOR_REF(BgL_sz00_90, ((long) 3));
							{	/* Unsafe/aes.scm 426 */
								uint8_t BgL_auxz00_9062;
								long BgL_tmpz00_9060;

								BgL_auxz00_9062 = (uint8_t) (BgL_vz00_5706);
								BgL_tmpz00_9060 = (long) (BgL_jz00_5705);
								BGL_U8VSET(BgL_arg1496z00_5707, BgL_tmpz00_9060,
									BgL_auxz00_9062);
							}
							return BUNSPEC;
						}
					}
				}
			}
		}

	}



/* addroundkey! */
	bool_t BGl_addroundkeyz12z12zz__aesz00(obj_t BgL_statez00_92,
		obj_t BgL_wz00_93, long BgL_rndz00_94, long BgL_nbz00_95)
	{
		{	/* Unsafe/aes.scm 588 */
			{
				long BgL_cz00_2318;

				BgL_cz00_2318 = ((long) 0);
			BgL_zc3z04anonymousza32037ze3z87_2319:
				if ((BgL_cz00_2318 < BgL_nbz00_95))
					{	/* Unsafe/aes.scm 590 */
						{	/* Unsafe/aes.scm 591 */
							long BgL_vz00_2321;

							{	/* Unsafe/aes.scm 591 */
								unsigned long BgL_arg2039z00_2322;
								unsigned long BgL_arg2040z00_2323;

								{	/* Unsafe/aes.scm 591 */
									unsigned long BgL_res3368z00_5727;

									{	/* Unsafe/aes.scm 591 */
										int BgL_iz00_5713;
										int BgL_jz00_5714;

										BgL_iz00_5713 = (int) (((long) 0));
										BgL_jz00_5714 = (int) (BgL_cz00_2318);
										{	/* Unsafe/aes.scm 420 */
											uint8_t BgL_arg1494z00_5715;

											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_arg1495z00_5716;

												BgL_arg1495z00_5716 =
													VECTOR_REF(BgL_statez00_92, (long) (BgL_iz00_5713));
												{	/* Unsafe/aes.scm 420 */
													uint8_t BgL_res3365z00_5721;

													{	/* Unsafe/aes.scm 420 */
														long BgL_kz00_5720;

														BgL_kz00_5720 = (long) (BgL_jz00_5714);
														{	/* Unsafe/aes.scm 420 */
															obj_t BgL_tmpz00_9072;

															BgL_tmpz00_9072 = ((obj_t) BgL_arg1495z00_5716);
															BgL_res3365z00_5721 =
																BGL_U8VREF(BgL_tmpz00_9072, BgL_kz00_5720);
													}}
													BgL_arg1494z00_5715 = BgL_res3365z00_5721;
											}}
											{	/* Unsafe/aes.scm 420 */
												long BgL_res3367z00_5726;

												{	/* Unsafe/aes.scm 420 */
													long BgL_arg2392z00_5723;

													BgL_arg2392z00_5723 = (long) (BgL_arg1494z00_5715);
													{	/* Unsafe/aes.scm 420 */
														long BgL_res3366z00_5725;

														BgL_res3366z00_5725 = (long) (BgL_arg2392z00_5723);
														BgL_res3367z00_5726 = BgL_res3366z00_5725;
												}}
												BgL_res3368z00_5727 =
													(unsigned long) (BgL_res3367z00_5726);
									}}}
									BgL_arg2039z00_2322 = BgL_res3368z00_5727;
								}
								{	/* Unsafe/aes.scm 592 */
									long BgL_arg2041z00_2324;

									BgL_arg2041z00_2324 =
										((BgL_rndz00_94 * ((long) 4)) + BgL_cz00_2318);
									{	/* Unsafe/aes.scm 592 */
										unsigned long BgL_res3374z00_5748;

										{	/* Unsafe/aes.scm 592 */
											int BgL_iz00_5734;
											int BgL_jz00_5735;

											BgL_iz00_5734 = (int) (BgL_arg2041z00_2324);
											BgL_jz00_5735 = (int) (((long) 0));
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_5736;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_5737;

													BgL_arg1495z00_5737 =
														VECTOR_REF(BgL_wz00_93, (long) (BgL_iz00_5734));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res3371z00_5742;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_5741;

															BgL_kz00_5741 = (long) (BgL_jz00_5735);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_9085;

																BgL_tmpz00_9085 = ((obj_t) BgL_arg1495z00_5737);
																BgL_res3371z00_5742 =
																	BGL_U8VREF(BgL_tmpz00_9085, BgL_kz00_5741);
														}}
														BgL_arg1494z00_5736 = BgL_res3371z00_5742;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res3373z00_5747;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_5744;

														BgL_arg2392z00_5744 = (long) (BgL_arg1494z00_5736);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res3372z00_5746;

															BgL_res3372z00_5746 =
																(long) (BgL_arg2392z00_5744);
															BgL_res3373z00_5747 = BgL_res3372z00_5746;
													}}
													BgL_res3374z00_5748 =
														(unsigned long) (BgL_res3373z00_5747);
										}}}
										BgL_arg2040z00_2323 = BgL_res3374z00_5748;
								}}
								BgL_vz00_2321 =
									((long) (BgL_arg2039z00_2322) ^ (long) (BgL_arg2040z00_2323));
							}
							{	/* Unsafe/aes.scm 593 */
								int BgL_iz00_5753;
								int BgL_jz00_5754;
								unsigned long BgL_vz00_5755;

								BgL_iz00_5753 = (int) (((long) 0));
								BgL_jz00_5754 = (int) (BgL_cz00_2318);
								BgL_vz00_5755 = (unsigned long) (BgL_vz00_2321);
								{	/* Unsafe/aes.scm 426 */
									obj_t BgL_arg1496z00_5756;

									BgL_arg1496z00_5756 =
										VECTOR_REF(BgL_statez00_92, (long) (BgL_iz00_5753));
									{	/* Unsafe/aes.scm 426 */
										uint8_t BgL_auxz00_9101;
										long BgL_tmpz00_9099;

										BgL_auxz00_9101 = (uint8_t) (BgL_vz00_5755);
										BgL_tmpz00_9099 = (long) (BgL_jz00_5754);
										BGL_U8VSET(BgL_arg1496z00_5756, BgL_tmpz00_9099,
											BgL_auxz00_9101);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_9104;

							BgL_cz00_9104 = (BgL_cz00_2318 + ((long) 1));
							BgL_cz00_2318 = BgL_cz00_9104;
							goto BgL_zc3z04anonymousza32037ze3z87_2319;
						}
					}
				else
					{	/* Unsafe/aes.scm 590 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_2330;

				BgL_cz00_2330 = ((long) 0);
			BgL_zc3z04anonymousza32045ze3z87_2331:
				if ((BgL_cz00_2330 < BgL_nbz00_95))
					{	/* Unsafe/aes.scm 590 */
						{	/* Unsafe/aes.scm 591 */
							long BgL_vz00_2333;

							{	/* Unsafe/aes.scm 591 */
								unsigned long BgL_arg2047z00_2334;
								unsigned long BgL_arg2048z00_2335;

								{	/* Unsafe/aes.scm 591 */
									unsigned long BgL_res3381z00_5779;

									{	/* Unsafe/aes.scm 591 */
										int BgL_iz00_5765;
										int BgL_jz00_5766;

										BgL_iz00_5765 = (int) (((long) 1));
										BgL_jz00_5766 = (int) (BgL_cz00_2330);
										{	/* Unsafe/aes.scm 420 */
											uint8_t BgL_arg1494z00_5767;

											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_arg1495z00_5768;

												BgL_arg1495z00_5768 =
													VECTOR_REF(BgL_statez00_92, (long) (BgL_iz00_5765));
												{	/* Unsafe/aes.scm 420 */
													uint8_t BgL_res3378z00_5773;

													{	/* Unsafe/aes.scm 420 */
														long BgL_kz00_5772;

														BgL_kz00_5772 = (long) (BgL_jz00_5766);
														{	/* Unsafe/aes.scm 420 */
															obj_t BgL_tmpz00_9113;

															BgL_tmpz00_9113 = ((obj_t) BgL_arg1495z00_5768);
															BgL_res3378z00_5773 =
																BGL_U8VREF(BgL_tmpz00_9113, BgL_kz00_5772);
													}}
													BgL_arg1494z00_5767 = BgL_res3378z00_5773;
											}}
											{	/* Unsafe/aes.scm 420 */
												long BgL_res3380z00_5778;

												{	/* Unsafe/aes.scm 420 */
													long BgL_arg2392z00_5775;

													BgL_arg2392z00_5775 = (long) (BgL_arg1494z00_5767);
													{	/* Unsafe/aes.scm 420 */
														long BgL_res3379z00_5777;

														BgL_res3379z00_5777 = (long) (BgL_arg2392z00_5775);
														BgL_res3380z00_5778 = BgL_res3379z00_5777;
												}}
												BgL_res3381z00_5779 =
													(unsigned long) (BgL_res3380z00_5778);
									}}}
									BgL_arg2047z00_2334 = BgL_res3381z00_5779;
								}
								{	/* Unsafe/aes.scm 592 */
									long BgL_arg2049z00_2336;

									BgL_arg2049z00_2336 =
										((BgL_rndz00_94 * ((long) 4)) + BgL_cz00_2330);
									{	/* Unsafe/aes.scm 592 */
										unsigned long BgL_res3387z00_5800;

										{	/* Unsafe/aes.scm 592 */
											int BgL_iz00_5786;
											int BgL_jz00_5787;

											BgL_iz00_5786 = (int) (BgL_arg2049z00_2336);
											BgL_jz00_5787 = (int) (((long) 1));
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_5788;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_5789;

													BgL_arg1495z00_5789 =
														VECTOR_REF(BgL_wz00_93, (long) (BgL_iz00_5786));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res3384z00_5794;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_5793;

															BgL_kz00_5793 = (long) (BgL_jz00_5787);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_9126;

																BgL_tmpz00_9126 = ((obj_t) BgL_arg1495z00_5789);
																BgL_res3384z00_5794 =
																	BGL_U8VREF(BgL_tmpz00_9126, BgL_kz00_5793);
														}}
														BgL_arg1494z00_5788 = BgL_res3384z00_5794;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res3386z00_5799;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_5796;

														BgL_arg2392z00_5796 = (long) (BgL_arg1494z00_5788);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res3385z00_5798;

															BgL_res3385z00_5798 =
																(long) (BgL_arg2392z00_5796);
															BgL_res3386z00_5799 = BgL_res3385z00_5798;
													}}
													BgL_res3387z00_5800 =
														(unsigned long) (BgL_res3386z00_5799);
										}}}
										BgL_arg2048z00_2335 = BgL_res3387z00_5800;
								}}
								BgL_vz00_2333 =
									((long) (BgL_arg2047z00_2334) ^ (long) (BgL_arg2048z00_2335));
							}
							{	/* Unsafe/aes.scm 593 */
								int BgL_iz00_5805;
								int BgL_jz00_5806;
								unsigned long BgL_vz00_5807;

								BgL_iz00_5805 = (int) (((long) 1));
								BgL_jz00_5806 = (int) (BgL_cz00_2330);
								BgL_vz00_5807 = (unsigned long) (BgL_vz00_2333);
								{	/* Unsafe/aes.scm 426 */
									obj_t BgL_arg1496z00_5808;

									BgL_arg1496z00_5808 =
										VECTOR_REF(BgL_statez00_92, (long) (BgL_iz00_5805));
									{	/* Unsafe/aes.scm 426 */
										uint8_t BgL_auxz00_9142;
										long BgL_tmpz00_9140;

										BgL_auxz00_9142 = (uint8_t) (BgL_vz00_5807);
										BgL_tmpz00_9140 = (long) (BgL_jz00_5806);
										BGL_U8VSET(BgL_arg1496z00_5808, BgL_tmpz00_9140,
											BgL_auxz00_9142);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_9145;

							BgL_cz00_9145 = (BgL_cz00_2330 + ((long) 1));
							BgL_cz00_2330 = BgL_cz00_9145;
							goto BgL_zc3z04anonymousza32045ze3z87_2331;
						}
					}
				else
					{	/* Unsafe/aes.scm 590 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_2342;

				BgL_cz00_2342 = ((long) 0);
			BgL_zc3z04anonymousza32052ze3z87_2343:
				if ((BgL_cz00_2342 < BgL_nbz00_95))
					{	/* Unsafe/aes.scm 590 */
						{	/* Unsafe/aes.scm 591 */
							long BgL_vz00_2345;

							{	/* Unsafe/aes.scm 591 */
								unsigned long BgL_arg2055z00_2346;
								unsigned long BgL_arg2056z00_2347;

								{	/* Unsafe/aes.scm 591 */
									unsigned long BgL_res3394z00_5831;

									{	/* Unsafe/aes.scm 591 */
										int BgL_iz00_5817;
										int BgL_jz00_5818;

										BgL_iz00_5817 = (int) (((long) 2));
										BgL_jz00_5818 = (int) (BgL_cz00_2342);
										{	/* Unsafe/aes.scm 420 */
											uint8_t BgL_arg1494z00_5819;

											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_arg1495z00_5820;

												BgL_arg1495z00_5820 =
													VECTOR_REF(BgL_statez00_92, (long) (BgL_iz00_5817));
												{	/* Unsafe/aes.scm 420 */
													uint8_t BgL_res3391z00_5825;

													{	/* Unsafe/aes.scm 420 */
														long BgL_kz00_5824;

														BgL_kz00_5824 = (long) (BgL_jz00_5818);
														{	/* Unsafe/aes.scm 420 */
															obj_t BgL_tmpz00_9154;

															BgL_tmpz00_9154 = ((obj_t) BgL_arg1495z00_5820);
															BgL_res3391z00_5825 =
																BGL_U8VREF(BgL_tmpz00_9154, BgL_kz00_5824);
													}}
													BgL_arg1494z00_5819 = BgL_res3391z00_5825;
											}}
											{	/* Unsafe/aes.scm 420 */
												long BgL_res3393z00_5830;

												{	/* Unsafe/aes.scm 420 */
													long BgL_arg2392z00_5827;

													BgL_arg2392z00_5827 = (long) (BgL_arg1494z00_5819);
													{	/* Unsafe/aes.scm 420 */
														long BgL_res3392z00_5829;

														BgL_res3392z00_5829 = (long) (BgL_arg2392z00_5827);
														BgL_res3393z00_5830 = BgL_res3392z00_5829;
												}}
												BgL_res3394z00_5831 =
													(unsigned long) (BgL_res3393z00_5830);
									}}}
									BgL_arg2055z00_2346 = BgL_res3394z00_5831;
								}
								{	/* Unsafe/aes.scm 592 */
									long BgL_arg2057z00_2348;

									BgL_arg2057z00_2348 =
										((BgL_rndz00_94 * ((long) 4)) + BgL_cz00_2342);
									{	/* Unsafe/aes.scm 592 */
										unsigned long BgL_res3400z00_5852;

										{	/* Unsafe/aes.scm 592 */
											int BgL_iz00_5838;
											int BgL_jz00_5839;

											BgL_iz00_5838 = (int) (BgL_arg2057z00_2348);
											BgL_jz00_5839 = (int) (((long) 2));
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_5840;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_5841;

													BgL_arg1495z00_5841 =
														VECTOR_REF(BgL_wz00_93, (long) (BgL_iz00_5838));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res3397z00_5846;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_5845;

															BgL_kz00_5845 = (long) (BgL_jz00_5839);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_9167;

																BgL_tmpz00_9167 = ((obj_t) BgL_arg1495z00_5841);
																BgL_res3397z00_5846 =
																	BGL_U8VREF(BgL_tmpz00_9167, BgL_kz00_5845);
														}}
														BgL_arg1494z00_5840 = BgL_res3397z00_5846;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res3399z00_5851;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_5848;

														BgL_arg2392z00_5848 = (long) (BgL_arg1494z00_5840);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res3398z00_5850;

															BgL_res3398z00_5850 =
																(long) (BgL_arg2392z00_5848);
															BgL_res3399z00_5851 = BgL_res3398z00_5850;
													}}
													BgL_res3400z00_5852 =
														(unsigned long) (BgL_res3399z00_5851);
										}}}
										BgL_arg2056z00_2347 = BgL_res3400z00_5852;
								}}
								BgL_vz00_2345 =
									((long) (BgL_arg2055z00_2346) ^ (long) (BgL_arg2056z00_2347));
							}
							{	/* Unsafe/aes.scm 593 */
								int BgL_iz00_5857;
								int BgL_jz00_5858;
								unsigned long BgL_vz00_5859;

								BgL_iz00_5857 = (int) (((long) 2));
								BgL_jz00_5858 = (int) (BgL_cz00_2342);
								BgL_vz00_5859 = (unsigned long) (BgL_vz00_2345);
								{	/* Unsafe/aes.scm 426 */
									obj_t BgL_arg1496z00_5860;

									BgL_arg1496z00_5860 =
										VECTOR_REF(BgL_statez00_92, (long) (BgL_iz00_5857));
									{	/* Unsafe/aes.scm 426 */
										uint8_t BgL_auxz00_9183;
										long BgL_tmpz00_9181;

										BgL_auxz00_9183 = (uint8_t) (BgL_vz00_5859);
										BgL_tmpz00_9181 = (long) (BgL_jz00_5858);
										BGL_U8VSET(BgL_arg1496z00_5860, BgL_tmpz00_9181,
											BgL_auxz00_9183);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_9186;

							BgL_cz00_9186 = (BgL_cz00_2342 + ((long) 1));
							BgL_cz00_2342 = BgL_cz00_9186;
							goto BgL_zc3z04anonymousza32052ze3z87_2343;
						}
					}
				else
					{	/* Unsafe/aes.scm 590 */
						((bool_t) 0);
					}
			}
			{
				long BgL_cz00_2354;

				BgL_cz00_2354 = ((long) 0);
			BgL_zc3z04anonymousza32061ze3z87_2355:
				if ((BgL_cz00_2354 < BgL_nbz00_95))
					{	/* Unsafe/aes.scm 590 */
						{	/* Unsafe/aes.scm 591 */
							long BgL_vz00_2357;

							{	/* Unsafe/aes.scm 591 */
								unsigned long BgL_arg2063z00_2358;
								unsigned long BgL_arg2065z00_2359;

								{	/* Unsafe/aes.scm 591 */
									unsigned long BgL_res3407z00_5883;

									{	/* Unsafe/aes.scm 591 */
										int BgL_iz00_5869;
										int BgL_jz00_5870;

										BgL_iz00_5869 = (int) (((long) 3));
										BgL_jz00_5870 = (int) (BgL_cz00_2354);
										{	/* Unsafe/aes.scm 420 */
											uint8_t BgL_arg1494z00_5871;

											{	/* Unsafe/aes.scm 420 */
												obj_t BgL_arg1495z00_5872;

												BgL_arg1495z00_5872 =
													VECTOR_REF(BgL_statez00_92, (long) (BgL_iz00_5869));
												{	/* Unsafe/aes.scm 420 */
													uint8_t BgL_res3404z00_5877;

													{	/* Unsafe/aes.scm 420 */
														long BgL_kz00_5876;

														BgL_kz00_5876 = (long) (BgL_jz00_5870);
														{	/* Unsafe/aes.scm 420 */
															obj_t BgL_tmpz00_9195;

															BgL_tmpz00_9195 = ((obj_t) BgL_arg1495z00_5872);
															BgL_res3404z00_5877 =
																BGL_U8VREF(BgL_tmpz00_9195, BgL_kz00_5876);
													}}
													BgL_arg1494z00_5871 = BgL_res3404z00_5877;
											}}
											{	/* Unsafe/aes.scm 420 */
												long BgL_res3406z00_5882;

												{	/* Unsafe/aes.scm 420 */
													long BgL_arg2392z00_5879;

													BgL_arg2392z00_5879 = (long) (BgL_arg1494z00_5871);
													{	/* Unsafe/aes.scm 420 */
														long BgL_res3405z00_5881;

														BgL_res3405z00_5881 = (long) (BgL_arg2392z00_5879);
														BgL_res3406z00_5882 = BgL_res3405z00_5881;
												}}
												BgL_res3407z00_5883 =
													(unsigned long) (BgL_res3406z00_5882);
									}}}
									BgL_arg2063z00_2358 = BgL_res3407z00_5883;
								}
								{	/* Unsafe/aes.scm 592 */
									long BgL_arg2066z00_2360;

									BgL_arg2066z00_2360 =
										((BgL_rndz00_94 * ((long) 4)) + BgL_cz00_2354);
									{	/* Unsafe/aes.scm 592 */
										unsigned long BgL_res3413z00_5904;

										{	/* Unsafe/aes.scm 592 */
											int BgL_iz00_5890;
											int BgL_jz00_5891;

											BgL_iz00_5890 = (int) (BgL_arg2066z00_2360);
											BgL_jz00_5891 = (int) (((long) 3));
											{	/* Unsafe/aes.scm 420 */
												uint8_t BgL_arg1494z00_5892;

												{	/* Unsafe/aes.scm 420 */
													obj_t BgL_arg1495z00_5893;

													BgL_arg1495z00_5893 =
														VECTOR_REF(BgL_wz00_93, (long) (BgL_iz00_5890));
													{	/* Unsafe/aes.scm 420 */
														uint8_t BgL_res3410z00_5898;

														{	/* Unsafe/aes.scm 420 */
															long BgL_kz00_5897;

															BgL_kz00_5897 = (long) (BgL_jz00_5891);
															{	/* Unsafe/aes.scm 420 */
																obj_t BgL_tmpz00_9208;

																BgL_tmpz00_9208 = ((obj_t) BgL_arg1495z00_5893);
																BgL_res3410z00_5898 =
																	BGL_U8VREF(BgL_tmpz00_9208, BgL_kz00_5897);
														}}
														BgL_arg1494z00_5892 = BgL_res3410z00_5898;
												}}
												{	/* Unsafe/aes.scm 420 */
													long BgL_res3412z00_5903;

													{	/* Unsafe/aes.scm 420 */
														long BgL_arg2392z00_5900;

														BgL_arg2392z00_5900 = (long) (BgL_arg1494z00_5892);
														{	/* Unsafe/aes.scm 420 */
															long BgL_res3411z00_5902;

															BgL_res3411z00_5902 =
																(long) (BgL_arg2392z00_5900);
															BgL_res3412z00_5903 = BgL_res3411z00_5902;
													}}
													BgL_res3413z00_5904 =
														(unsigned long) (BgL_res3412z00_5903);
										}}}
										BgL_arg2065z00_2359 = BgL_res3413z00_5904;
								}}
								BgL_vz00_2357 =
									((long) (BgL_arg2063z00_2358) ^ (long) (BgL_arg2065z00_2359));
							}
							{	/* Unsafe/aes.scm 593 */
								int BgL_iz00_5909;
								int BgL_jz00_5910;
								unsigned long BgL_vz00_5911;

								BgL_iz00_5909 = (int) (((long) 3));
								BgL_jz00_5910 = (int) (BgL_cz00_2354);
								BgL_vz00_5911 = (unsigned long) (BgL_vz00_2357);
								{	/* Unsafe/aes.scm 426 */
									obj_t BgL_arg1496z00_5912;

									BgL_arg1496z00_5912 =
										VECTOR_REF(BgL_statez00_92, (long) (BgL_iz00_5909));
									{	/* Unsafe/aes.scm 426 */
										uint8_t BgL_auxz00_9224;
										long BgL_tmpz00_9222;

										BgL_auxz00_9224 = (uint8_t) (BgL_vz00_5911);
										BgL_tmpz00_9222 = (long) (BgL_jz00_5910);
										BGL_U8VSET(BgL_arg1496z00_5912, BgL_tmpz00_9222,
											BgL_auxz00_9224);
									} BUNSPEC;
						}}}
						{
							long BgL_cz00_9227;

							BgL_cz00_9227 = (BgL_cz00_2354 + ((long) 1));
							BgL_cz00_2354 = BgL_cz00_9227;
							goto BgL_zc3z04anonymousza32061ze3z87_2355;
						}
					}
				else
					{	/* Unsafe/aes.scm 590 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* subword! */
	obj_t BGl_subwordz12z12zz__aesz00(obj_t BgL_wz00_96)
	{
		{	/* Unsafe/aes.scm 600 */
			{	/* Unsafe/aes.scm 602 */
				long BgL_arg2070z00_2365;

				{	/* Unsafe/aes.scm 602 */
					uint8_t BgL_arg2071z00_2366;

					{	/* Unsafe/aes.scm 602 */
						long BgL_arg2072z00_2367;

						{	/* Unsafe/aes.scm 602 */
							uint8_t BgL_arg2075z00_2368;

							{	/* Unsafe/aes.scm 602 */
								uint8_t BgL_res3416z00_5919;

								BgL_res3416z00_5919 = BGL_U8VREF(BgL_wz00_96, ((long) 0));
								BgL_arg2075z00_2368 = BgL_res3416z00_5919;
							}
							{	/* Unsafe/aes.scm 602 */
								long BgL_res3418z00_5924;

								{	/* Unsafe/aes.scm 602 */
									long BgL_arg2392z00_5921;

									BgL_arg2392z00_5921 = (long) (BgL_arg2075z00_2368);
									{	/* Unsafe/aes.scm 602 */
										long BgL_res3417z00_5923;

										BgL_res3417z00_5923 = (long) (BgL_arg2392z00_5921);
										BgL_res3418z00_5924 = BgL_res3417z00_5923;
								}}
								BgL_arg2072z00_2367 = BgL_res3418z00_5924;
						}}
						{	/* Unsafe/aes.scm 602 */
							uint8_t BgL_res3419z00_5927;

							{	/* Unsafe/aes.scm 602 */
								obj_t BgL_vz00_5925;

								BgL_vz00_5925 = CNST_TABLE_REF(((long) 1));
								BgL_res3419z00_5927 =
									BGL_U8VREF(BgL_vz00_5925, BgL_arg2072z00_2367);
							}
							BgL_arg2071z00_2366 = BgL_res3419z00_5927;
					}}
					{	/* Unsafe/aes.scm 602 */
						long BgL_res3421z00_5932;

						{	/* Unsafe/aes.scm 602 */
							long BgL_arg2392z00_5929;

							BgL_arg2392z00_5929 = (long) (BgL_arg2071z00_2366);
							{	/* Unsafe/aes.scm 602 */
								long BgL_res3420z00_5931;

								BgL_res3420z00_5931 = (long) (BgL_arg2392z00_5929);
								BgL_res3421z00_5932 = BgL_res3420z00_5931;
						}}
						BgL_arg2070z00_2365 = BgL_res3421z00_5932;
				}}
				{	/* Unsafe/aes.scm 602 */
					uint8_t BgL_tmpz00_9236;

					BgL_tmpz00_9236 = (uint8_t) (BgL_arg2070z00_2365);
					BGL_U8VSET(BgL_wz00_96, ((long) 0), BgL_tmpz00_9236);
				} BUNSPEC;
			}
			{	/* Unsafe/aes.scm 602 */
				long BgL_arg2076z00_2370;

				{	/* Unsafe/aes.scm 602 */
					uint8_t BgL_arg2077z00_2371;

					{	/* Unsafe/aes.scm 602 */
						long BgL_arg2078z00_2372;

						{	/* Unsafe/aes.scm 602 */
							uint8_t BgL_arg2079z00_2373;

							{	/* Unsafe/aes.scm 602 */
								uint8_t BgL_res3422z00_5935;

								BgL_res3422z00_5935 = BGL_U8VREF(BgL_wz00_96, ((long) 1));
								BgL_arg2079z00_2373 = BgL_res3422z00_5935;
							}
							{	/* Unsafe/aes.scm 602 */
								long BgL_res3424z00_5940;

								{	/* Unsafe/aes.scm 602 */
									long BgL_arg2392z00_5937;

									BgL_arg2392z00_5937 = (long) (BgL_arg2079z00_2373);
									{	/* Unsafe/aes.scm 602 */
										long BgL_res3423z00_5939;

										BgL_res3423z00_5939 = (long) (BgL_arg2392z00_5937);
										BgL_res3424z00_5940 = BgL_res3423z00_5939;
								}}
								BgL_arg2078z00_2372 = BgL_res3424z00_5940;
						}}
						{	/* Unsafe/aes.scm 602 */
							uint8_t BgL_res3425z00_5943;

							{	/* Unsafe/aes.scm 602 */
								obj_t BgL_vz00_5941;

								BgL_vz00_5941 = CNST_TABLE_REF(((long) 1));
								BgL_res3425z00_5943 =
									BGL_U8VREF(BgL_vz00_5941, BgL_arg2078z00_2372);
							}
							BgL_arg2077z00_2371 = BgL_res3425z00_5943;
					}}
					{	/* Unsafe/aes.scm 602 */
						long BgL_res3427z00_5948;

						{	/* Unsafe/aes.scm 602 */
							long BgL_arg2392z00_5945;

							BgL_arg2392z00_5945 = (long) (BgL_arg2077z00_2371);
							{	/* Unsafe/aes.scm 602 */
								long BgL_res3426z00_5947;

								BgL_res3426z00_5947 = (long) (BgL_arg2392z00_5945);
								BgL_res3427z00_5948 = BgL_res3426z00_5947;
						}}
						BgL_arg2076z00_2370 = BgL_res3427z00_5948;
				}}
				{	/* Unsafe/aes.scm 602 */
					uint8_t BgL_tmpz00_9246;

					BgL_tmpz00_9246 = (uint8_t) (BgL_arg2076z00_2370);
					BGL_U8VSET(BgL_wz00_96, ((long) 1), BgL_tmpz00_9246);
				} BUNSPEC;
			}
			{	/* Unsafe/aes.scm 602 */
				long BgL_arg2080z00_2375;

				{	/* Unsafe/aes.scm 602 */
					uint8_t BgL_arg2081z00_2376;

					{	/* Unsafe/aes.scm 602 */
						long BgL_arg2082z00_2377;

						{	/* Unsafe/aes.scm 602 */
							uint8_t BgL_arg2083z00_2378;

							{	/* Unsafe/aes.scm 602 */
								uint8_t BgL_res3428z00_5951;

								BgL_res3428z00_5951 = BGL_U8VREF(BgL_wz00_96, ((long) 2));
								BgL_arg2083z00_2378 = BgL_res3428z00_5951;
							}
							{	/* Unsafe/aes.scm 602 */
								long BgL_res3430z00_5956;

								{	/* Unsafe/aes.scm 602 */
									long BgL_arg2392z00_5953;

									BgL_arg2392z00_5953 = (long) (BgL_arg2083z00_2378);
									{	/* Unsafe/aes.scm 602 */
										long BgL_res3429z00_5955;

										BgL_res3429z00_5955 = (long) (BgL_arg2392z00_5953);
										BgL_res3430z00_5956 = BgL_res3429z00_5955;
								}}
								BgL_arg2082z00_2377 = BgL_res3430z00_5956;
						}}
						{	/* Unsafe/aes.scm 602 */
							uint8_t BgL_res3431z00_5959;

							{	/* Unsafe/aes.scm 602 */
								obj_t BgL_vz00_5957;

								BgL_vz00_5957 = CNST_TABLE_REF(((long) 1));
								BgL_res3431z00_5959 =
									BGL_U8VREF(BgL_vz00_5957, BgL_arg2082z00_2377);
							}
							BgL_arg2081z00_2376 = BgL_res3431z00_5959;
					}}
					{	/* Unsafe/aes.scm 602 */
						long BgL_res3433z00_5964;

						{	/* Unsafe/aes.scm 602 */
							long BgL_arg2392z00_5961;

							BgL_arg2392z00_5961 = (long) (BgL_arg2081z00_2376);
							{	/* Unsafe/aes.scm 602 */
								long BgL_res3432z00_5963;

								BgL_res3432z00_5963 = (long) (BgL_arg2392z00_5961);
								BgL_res3433z00_5964 = BgL_res3432z00_5963;
						}}
						BgL_arg2080z00_2375 = BgL_res3433z00_5964;
				}}
				{	/* Unsafe/aes.scm 602 */
					uint8_t BgL_tmpz00_9256;

					BgL_tmpz00_9256 = (uint8_t) (BgL_arg2080z00_2375);
					BGL_U8VSET(BgL_wz00_96, ((long) 2), BgL_tmpz00_9256);
				} BUNSPEC;
			}
			{	/* Unsafe/aes.scm 602 */
				long BgL_arg2084z00_2380;

				{	/* Unsafe/aes.scm 602 */
					uint8_t BgL_arg2085z00_2381;

					{	/* Unsafe/aes.scm 602 */
						long BgL_arg2086z00_2382;

						{	/* Unsafe/aes.scm 602 */
							uint8_t BgL_arg2087z00_2383;

							{	/* Unsafe/aes.scm 602 */
								uint8_t BgL_res3434z00_5967;

								BgL_res3434z00_5967 = BGL_U8VREF(BgL_wz00_96, ((long) 3));
								BgL_arg2087z00_2383 = BgL_res3434z00_5967;
							}
							{	/* Unsafe/aes.scm 602 */
								long BgL_res3436z00_5972;

								{	/* Unsafe/aes.scm 602 */
									long BgL_arg2392z00_5969;

									BgL_arg2392z00_5969 = (long) (BgL_arg2087z00_2383);
									{	/* Unsafe/aes.scm 602 */
										long BgL_res3435z00_5971;

										BgL_res3435z00_5971 = (long) (BgL_arg2392z00_5969);
										BgL_res3436z00_5972 = BgL_res3435z00_5971;
								}}
								BgL_arg2086z00_2382 = BgL_res3436z00_5972;
						}}
						{	/* Unsafe/aes.scm 602 */
							uint8_t BgL_res3437z00_5975;

							{	/* Unsafe/aes.scm 602 */
								obj_t BgL_vz00_5973;

								BgL_vz00_5973 = CNST_TABLE_REF(((long) 1));
								BgL_res3437z00_5975 =
									BGL_U8VREF(BgL_vz00_5973, BgL_arg2086z00_2382);
							}
							BgL_arg2085z00_2381 = BgL_res3437z00_5975;
					}}
					{	/* Unsafe/aes.scm 602 */
						long BgL_res3439z00_5980;

						{	/* Unsafe/aes.scm 602 */
							long BgL_arg2392z00_5977;

							BgL_arg2392z00_5977 = (long) (BgL_arg2085z00_2381);
							{	/* Unsafe/aes.scm 602 */
								long BgL_res3438z00_5979;

								BgL_res3438z00_5979 = (long) (BgL_arg2392z00_5977);
								BgL_res3439z00_5980 = BgL_res3438z00_5979;
						}}
						BgL_arg2084z00_2380 = BgL_res3439z00_5980;
				}}
				{	/* Unsafe/aes.scm 602 */
					uint8_t BgL_tmpz00_9266;

					BgL_tmpz00_9266 = (uint8_t) (BgL_arg2084z00_2380);
					BGL_U8VSET(BgL_wz00_96, ((long) 3), BgL_tmpz00_9266);
				} BUNSPEC;
			}
			return BgL_wz00_96;
		}

	}



/* rotword! */
	obj_t BGl_rotwordz12z12zz__aesz00(obj_t BgL_wz00_97)
	{
		{	/* Unsafe/aes.scm 610 */
			{	/* Unsafe/aes.scm 611 */
				long BgL_tmpz00_2384;

				{	/* Unsafe/aes.scm 611 */
					uint8_t BgL_arg2094z00_2394;

					{	/* Unsafe/aes.scm 611 */
						uint8_t BgL_res3440z00_5982;

						BgL_res3440z00_5982 = BGL_U8VREF(BgL_wz00_97, ((long) 0));
						BgL_arg2094z00_2394 = BgL_res3440z00_5982;
					}
					{	/* Unsafe/aes.scm 611 */
						long BgL_res3442z00_5987;

						{	/* Unsafe/aes.scm 611 */
							long BgL_arg2392z00_5984;

							BgL_arg2392z00_5984 = (long) (BgL_arg2094z00_2394);
							{	/* Unsafe/aes.scm 611 */
								long BgL_res3441z00_5986;

								BgL_res3441z00_5986 = (long) (BgL_arg2392z00_5984);
								BgL_res3442z00_5987 = BgL_res3441z00_5986;
						}}
						BgL_tmpz00_2384 = BgL_res3442z00_5987;
				}}
				{
					long BgL_iz00_2386;

					BgL_iz00_2386 = ((long) 0);
				BgL_zc3z04anonymousza32088ze3z87_2387:
					if ((BgL_iz00_2386 < ((long) 3)))
						{	/* Unsafe/aes.scm 612 */
							{	/* Unsafe/aes.scm 613 */
								long BgL_arg2090z00_2389;

								{	/* Unsafe/aes.scm 613 */
									uint8_t BgL_arg2091z00_2390;

									{	/* Unsafe/aes.scm 613 */
										long BgL_arg2092z00_2391;

										BgL_arg2092z00_2391 = (BgL_iz00_2386 + ((long) 1));
										{	/* Unsafe/aes.scm 613 */
											uint8_t BgL_res3445z00_5994;

											BgL_res3445z00_5994 =
												BGL_U8VREF(BgL_wz00_97, BgL_arg2092z00_2391);
											BgL_arg2091z00_2390 = BgL_res3445z00_5994;
									}}
									{	/* Unsafe/aes.scm 613 */
										long BgL_res3447z00_5999;

										{	/* Unsafe/aes.scm 613 */
											long BgL_arg2392z00_5996;

											BgL_arg2392z00_5996 = (long) (BgL_arg2091z00_2390);
											{	/* Unsafe/aes.scm 613 */
												long BgL_res3446z00_5998;

												BgL_res3446z00_5998 = (long) (BgL_arg2392z00_5996);
												BgL_res3447z00_5999 = BgL_res3446z00_5998;
										}}
										BgL_arg2090z00_2389 = BgL_res3447z00_5999;
								}}
								{	/* Unsafe/aes.scm 613 */
									uint8_t BgL_tmpz00_9278;

									BgL_tmpz00_9278 = (uint8_t) (BgL_arg2090z00_2389);
									BGL_U8VSET(BgL_wz00_97, BgL_iz00_2386, BgL_tmpz00_9278);
								} BUNSPEC;
							}
							{
								long BgL_iz00_9281;

								BgL_iz00_9281 = (BgL_iz00_2386 + ((long) 1));
								BgL_iz00_2386 = BgL_iz00_9281;
								goto BgL_zc3z04anonymousza32088ze3z87_2387;
							}
						}
					else
						{	/* Unsafe/aes.scm 612 */
							((bool_t) 0);
						}
				}
				{	/* Unsafe/aes.scm 614 */
					uint8_t BgL_tmpz00_9283;

					BgL_tmpz00_9283 = (uint8_t) (BgL_tmpz00_2384);
					BGL_U8VSET(BgL_wz00_97, ((long) 3), BgL_tmpz00_9283);
				} BUNSPEC;
				return BgL_wz00_97;
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__aesz00()
	{
		{	/* Unsafe/aes.scm 20 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__aesz00()
	{
		{	/* Unsafe/aes.scm 20 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__aesz00()
	{
		{	/* Unsafe/aes.scm 20 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__aesz00()
	{
		{	/* Unsafe/aes.scm 20 */
			BGl_modulezd2initializa7ationz75zz__sha1z00(((long) 331991362),
				BSTRING_TO_STRING(BGl_string3638z00zz__aesz00));
			BGl_modulezd2initializa7ationz75zz__datez00(((long) -445947111),
				BSTRING_TO_STRING(BGl_string3638z00zz__aesz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string3638z00zz__aesz00));
		}

	}

#ifdef __cplusplus
}
#endif
