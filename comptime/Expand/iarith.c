/*===========================================================================*/
/*   (Expand/iarith.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/iarith.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62expandzd2maxfxzb0zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2bitzd2lshz62zzexpand_iarithmetiquez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62expandzd2minfxzb0zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_2za2za2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_iarithmetiquez00();
	static obj_t BGl_z62expandzd2bitzd2lshu32z62zzexpand_iarithmetiquez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_iarithmetiquez00();
	static obj_t BGl_z62expandzd2bitzd2ors32z62zzexpand_iarithmetiquez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62expandzd2bitzd2rshz62zzexpand_iarithmetiquez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2eqzf3z21zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2zb2fxz60zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2bitzd2urshz00zzexpand_iarithmetiquez00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2eqzf3z43zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2zb2fxz02zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_iarithmetiquez00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2zd2fxz00zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	extern obj_t BGl_epairifyzd2reczd2zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2zd2fxz62zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2bitzd2lshu32z00zzexpand_iarithmetiquez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2zf2fxz20zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2zf2fxz42zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2bitzd2rshs32z62zzexpand_iarithmetiquez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_iarithmetiquez00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2izc3zd3zc2zzexpand_iarithmetiquez00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2bitzd2rshu32z62zzexpand_iarithmetiquez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_iarithmetiquez00();
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2ize3zd3ze2zzexpand_iarithmetiquez00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2izc3zd3za0zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2iza2z12zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2izb2z02zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2izd2z62zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2izf2z42zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2izc3z73zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2bitzd2ors32z00zzexpand_iarithmetiquez00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2izd3z63zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2ize3z53zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2bitzd2lshz00zzexpand_iarithmetiquez00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2ize3zd3z80zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2iza2z70zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2izb2z60zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2izd2z00zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2bitzd2urshu32z62zzexpand_iarithmetiquez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2izf2z20zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2izc3z11zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2izd3z01zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2ize3z31zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2maxfxzd2zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2za2fxz70zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_iarithmetiquez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62expandzd2za2fxz12zzexpand_iarithmetiquez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2bitzd2rshz00zzexpand_iarithmetiquez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2bitzd2rshs32z00zzexpand_iarithmetiquez00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2bitzd2urshz62zzexpand_iarithmetiquez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2minfxzd2zzexpand_iarithmetiquez00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_iarithmetiquez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_iarithmetiquez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_iarithmetiquez00();
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2bitzd2urshu32z00zzexpand_iarithmetiquez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2bitzd2rshu32z00zzexpand_iarithmetiquez00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t __cnst[26];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2bitzd2lshzd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2bitza73565za7,
		BGl_z62expandzd2bitzd2lshz62zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2ize3zd3zd2envz30zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2iza7e33566za7,
		BGl_z62expandzd2ize3zd3z80zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2iza2zd2envza2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2iza7a23567za7,
		BGl_z62expandzd2iza2z12zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2zb2fxzd2envzb2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2za7b2f3568za7,
		BGl_z62expandzd2zb2fxz02zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2bitzd2rshs32zd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2bitza73569za7,
		BGl_z62expandzd2bitzd2rshs32z62zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izb2zd2envzb2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2iza7b23570za7,
		BGl_z62expandzd2izb2z02zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2bitzd2ors32zd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2bitza73571za7,
		BGl_z62expandzd2bitzd2ors32z62zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2minfxzd2envz00zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2minf3572z00,
		BGl_z62expandzd2minfxzb0zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izc3zd2envzc3zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2iza7c33573za7,
		BGl_z62expandzd2izc3z73zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2maxfxzd2envz00zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2maxf3574z00,
		BGl_z62expandzd2maxfxzb0zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izd2zd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2iza7d23575za7,
		BGl_z62expandzd2izd2z62zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izd3zd2envzd3zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2iza7d33576za7,
		BGl_z62expandzd2izd3z63zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2zd2fxzd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2za7d2f3577za7,
		BGl_z62expandzd2zd2fxz62zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2bitzd2rshu32zd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2bitza73578za7,
		BGl_z62expandzd2bitzd2rshu32z62zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2ize3zd2envze3zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2iza7e33579za7,
		BGl_z62expandzd2ize3z53zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izf2zd2envzf2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2iza7f23580za7,
		BGl_z62expandzd2izf2z42zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2bitzd2urshzd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2bitza73581za7,
		BGl_z62expandzd2bitzd2urshz62zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2bitzd2lshu32zd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2bitza73582za7,
		BGl_z62expandzd2bitzd2lshu32z62zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2zf2fxzd2envzf2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2za7f2f3583za7,
		BGl_z62expandzd2zf2fxz42zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2za2fxzd2envza2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2za7a2f3584za7,
		BGl_z62expandzd2za2fxz12zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2bitzd2rshzd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2bitza73585za7,
		BGl_z62expandzd2bitzd2rshz62zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2bitzd2urshu32zd2envzd2zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2bitza73586za7,
		BGl_z62expandzd2bitzd2urshu32z62zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3541z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3541za700za7za7e3587za7,
		"Incorrect number of arguments for `eq?'", 39);
	      DEFINE_STRING(BGl_string3542z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3542za700za7za7e3588za7, "/", 1);
	      DEFINE_STRING(BGl_string3543z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3543za700za7za7e3589za7,
		"Turning \"(/ ...)\" into \"(/fx ...)\" which may result in precision penalty",
		72);
	      DEFINE_STRING(BGl_string3544z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3544za700za7za7e3590za7,
		"\" which may result in precision penalty", 39);
	      DEFINE_STRING(BGl_string3545z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3545za700za7za7e3591za7, ")\" into \"", 9);
	      DEFINE_STRING(BGl_string3546z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3546za700za7za7e3592za7, " ", 1);
	      DEFINE_STRING(BGl_string3547z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3547za700za7za7e3593za7, "Turning \"(/ ", 12);
	      DEFINE_STRING(BGl_string3548z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3548za700za7za7e3594za7,
		"Turning \"(/ ... ...)\" into \"(/fx ... ...)\" which may result in precision penalty",
		80);
	      DEFINE_STRING(BGl_string3549z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3549za700za7za7e3595za7,
		"Turning \"(/ ... ... ...)\" into \"(/fx ... (* ... ...))\" which may result in precision penalty",
		92);
	      DEFINE_STRING(BGl_string3550z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3550za700za7za7e3596za7,
		"Incorrect number of arguments for `+fx'", 39);
	      DEFINE_STRING(BGl_string3551z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3551za700za7za7e3597za7,
		"Incorrect number of arguments for `-fx'", 39);
	      DEFINE_STRING(BGl_string3552z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3552za700za7za7e3598za7,
		"Incorrect number of arguments for `*fx'", 39);
	      DEFINE_STRING(BGl_string3553z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3553za700za7za7e3599za7,
		"Incorrect number of arguments for `/fx'", 39);
	      DEFINE_STRING(BGl_string3554z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3554za700za7za7e3600za7,
		"Incorrect number of arguments for `maxfx'", 41);
	      DEFINE_STRING(BGl_string3555z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3555za700za7za7e3601za7,
		"Incorrect number of arguments for `minfx'", 41);
	      DEFINE_STRING(BGl_string3556z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3556za700za7za7e3602za7, "expand_iarithmetique", 20);
	      DEFINE_STRING(BGl_string3557z00zzexpand_iarithmetiquez00,
		BgL_bgl_string3557za700za7za7e3603za7,
		"minfx maxfx let if b a >= >=fx <= <=fx > >fx < <fx and = =fx /fx * *fx -fx negfx + +fx quote c-eq? ",
		99);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2eqzf3zd2envzf3zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2eqza7f3604za7,
		BGl_z62expandzd2eqzf3z43zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2izc3zd3zd2envz10zzexpand_iarithmetiquez00,
		BgL_bgl_za762expandza7d2iza7c33605za7,
		BGl_z62expandzd2izc3zd3za0zzexpand_iarithmetiquez00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzexpand_iarithmetiquez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzexpand_iarithmetiquez00(long
		BgL_checksumz00_3522, char *BgL_fromz00_3523)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_iarithmetiquez00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_iarithmetiquez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_iarithmetiquez00();
					BGl_libraryzd2moduleszd2initz00zzexpand_iarithmetiquez00();
					BGl_cnstzd2initzd2zzexpand_iarithmetiquez00();
					BGl_importedzd2moduleszd2initz00zzexpand_iarithmetiquez00();
					return BGl_methodzd2initzd2zzexpand_iarithmetiquez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_iarithmetiquez00()
	{
		{	/* Expand/iarith.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"expand_iarithmetique");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"expand_iarithmetique");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_iarithmetiquez00()
	{
		{	/* Expand/iarith.scm 15 */
			{	/* Expand/iarith.scm 15 */
				obj_t BgL_cportz00_3501;

				{	/* Expand/iarith.scm 15 */
					obj_t BgL_stringz00_3509;

					BgL_stringz00_3509 = BGl_string3557z00zzexpand_iarithmetiquez00;
					{	/* Expand/iarith.scm 15 */
						obj_t BgL_startz00_3510;

						BgL_startz00_3510 = BINT(((long) 0));
						{	/* Expand/iarith.scm 15 */
							obj_t BgL_endz00_3511;

							BgL_endz00_3511 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3509)));
							{	/* Expand/iarith.scm 15 */

								BgL_cportz00_3501 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3509, BgL_startz00_3510, BgL_endz00_3511);
				}}}}
				{
					long BgL_iz00_3502;

					BgL_iz00_3502 = ((long) 25);
				BgL_loopz00_3503:
					if ((BgL_iz00_3502 == ((long) -1)))
						{	/* Expand/iarith.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/iarith.scm 15 */
							{	/* Expand/iarith.scm 15 */
								obj_t BgL_arg3559z00_3505;

								{	/* Expand/iarith.scm 15 */

									{	/* Expand/iarith.scm 15 */
										obj_t BgL_locationz00_3507;

										BgL_locationz00_3507 = BBOOL(((bool_t) 0));
										{	/* Expand/iarith.scm 15 */

											BgL_arg3559z00_3505 =
												BGl_readz00zz__readerz00(BgL_cportz00_3501,
												BgL_locationz00_3507);
										}
									}
								}
								{	/* Expand/iarith.scm 15 */
									int BgL_tmpz00_3551;

									BgL_tmpz00_3551 = (int) (BgL_iz00_3502);
									CNST_TABLE_SET(BgL_tmpz00_3551, BgL_arg3559z00_3505);
							}}
							{	/* Expand/iarith.scm 15 */
								int BgL_auxz00_3508;

								BgL_auxz00_3508 = (int) ((BgL_iz00_3502 - ((long) 1)));
								{
									long BgL_iz00_3556;

									BgL_iz00_3556 = (long) (BgL_auxz00_3508);
									BgL_iz00_3502 = BgL_iz00_3556;
									goto BgL_loopz00_3503;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_iarithmetiquez00()
	{
		{	/* Expand/iarith.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* expand-eq? */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2eqzf3z21zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_5, obj_t BgL_ez00_6)
	{
		{	/* Expand/iarith.scm 52 */
			{
				obj_t BgL_xz00_68;
				obj_t BgL_yz00_69;

				if (PAIRP(BgL_xz00_5))
					{	/* Expand/iarith.scm 53 */
						obj_t BgL_cdrzd2112zd2_74;

						BgL_cdrzd2112zd2_74 = CDR(BgL_xz00_5);
						if (PAIRP(BgL_cdrzd2112zd2_74))
							{	/* Expand/iarith.scm 53 */
								obj_t BgL_carzd2114zd2_76;
								obj_t BgL_cdrzd2115zd2_77;

								BgL_carzd2114zd2_76 = CAR(BgL_cdrzd2112zd2_74);
								BgL_cdrzd2115zd2_77 = CDR(BgL_cdrzd2112zd2_74);
								{	/* Expand/iarith.scm 53 */
									bool_t BgL_test3610z00_3566;

									{	/* Expand/iarith.scm 53 */
										bool_t BgL__ortest_1012z00_1003;

										BgL__ortest_1012z00_1003 = INTEGERP(BgL_carzd2114zd2_76);
										if (BgL__ortest_1012z00_1003)
											{	/* Expand/iarith.scm 53 */
												BgL_test3610z00_3566 = BgL__ortest_1012z00_1003;
											}
										else
											{	/* Expand/iarith.scm 53 */
												BgL_test3610z00_3566 = CHARP(BgL_carzd2114zd2_76);
											}
									}
									if (BgL_test3610z00_3566)
										{	/* Expand/iarith.scm 53 */
											if (PAIRP(BgL_cdrzd2115zd2_77))
												{	/* Expand/iarith.scm 53 */
													if ((BgL_carzd2114zd2_76 == CAR(BgL_cdrzd2115zd2_77)))
														{	/* Expand/iarith.scm 53 */
															if (NULLP(CDR(BgL_cdrzd2115zd2_77)))
																{	/* Expand/iarith.scm 53 */
																	return BTRUE;
																}
															else
																{	/* Expand/iarith.scm 53 */
																BgL_tagzd2106zd2_71:
																	return
																		BGl_errorz00zz__errorz00(BFALSE,
																		BGl_string3541z00zzexpand_iarithmetiquez00,
																		BgL_xz00_5);
																}
														}
													else
														{	/* Expand/iarith.scm 53 */
															obj_t BgL_carzd2141zd2_89;
															obj_t BgL_cdrzd2142zd2_90;

															BgL_carzd2141zd2_89 =
																CAR(((obj_t) BgL_cdrzd2112zd2_74));
															BgL_cdrzd2142zd2_90 =
																CDR(((obj_t) BgL_cdrzd2112zd2_74));
															if (PAIRP(BgL_carzd2141zd2_89))
																{	/* Expand/iarith.scm 53 */
																	obj_t BgL_cdrzd2145zd2_92;

																	BgL_cdrzd2145zd2_92 =
																		CDR(BgL_carzd2141zd2_89);
																	if (
																		(CAR(BgL_carzd2141zd2_89) ==
																			CNST_TABLE_REF(((long) 1))))
																		{	/* Expand/iarith.scm 53 */
																			if (PAIRP(BgL_cdrzd2145zd2_92))
																				{	/* Expand/iarith.scm 53 */
																					obj_t BgL_yz00_96;

																					BgL_yz00_96 =
																						CAR(BgL_cdrzd2145zd2_92);
																					if (NULLP(CDR(BgL_cdrzd2145zd2_92)))
																						{	/* Expand/iarith.scm 53 */
																							obj_t BgL_carzd2151zd2_99;

																							BgL_carzd2151zd2_99 =
																								CAR(
																								((obj_t) BgL_cdrzd2142zd2_90));
																							if (PAIRP(BgL_carzd2151zd2_99))
																								{	/* Expand/iarith.scm 53 */
																									obj_t BgL_cdrzd2155zd2_101;

																									BgL_cdrzd2155zd2_101 =
																										CDR(BgL_carzd2151zd2_99);
																									if (
																										(CAR(BgL_carzd2151zd2_99) ==
																											CNST_TABLE_REF(((long)
																													1))))
																										{	/* Expand/iarith.scm 53 */
																											if (PAIRP
																												(BgL_cdrzd2155zd2_101))
																												{	/* Expand/iarith.scm 53 */
																													if (
																														(BgL_yz00_96 ==
																															CAR
																															(BgL_cdrzd2155zd2_101)))
																														{	/* Expand/iarith.scm 53 */
																															if (NULLP(CDR
																																	(BgL_cdrzd2155zd2_101)))
																																{	/* Expand/iarith.scm 53 */
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd2142zd2_90))))
																																		{	/* Expand/iarith.scm 53 */
																																			return
																																				BTRUE;
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			goto
																																				BgL_tagzd2106zd2_71;
																																		}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_cdrzd2173zd2_112;
																																	BgL_cdrzd2173zd2_112
																																		=
																																		CDR
																																		(BgL_xz00_5);
																																	{	/* Expand/iarith.scm 53 */
																																		obj_t
																																			BgL_cdrzd2175zd2_113;
																																		BgL_cdrzd2175zd2_113
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_cdrzd2173zd2_112));
																																		{	/* Expand/iarith.scm 53 */
																																			bool_t
																																				BgL_test3625z00_3620;
																																			{	/* Expand/iarith.scm 53 */
																																				obj_t
																																					BgL_tmpz00_3621;
																																				BgL_tmpz00_3621
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_cdrzd2173zd2_112));
																																				BgL_test3625z00_3620
																																					=
																																					CHARP
																																					(BgL_tmpz00_3621);
																																			}
																																			if (BgL_test3625z00_3620)
																																				{	/* Expand/iarith.scm 53 */
																																					bool_t
																																						BgL_test3626z00_3625;
																																					{	/* Expand/iarith.scm 53 */
																																						obj_t
																																							BgL_tmpz00_3626;
																																						BgL_tmpz00_3626
																																							=
																																							CAR
																																							(((obj_t) BgL_cdrzd2175zd2_113));
																																						BgL_test3626z00_3625
																																							=
																																							CHARP
																																							(BgL_tmpz00_3626);
																																					}
																																					if (BgL_test3626z00_3625)
																																						{	/* Expand/iarith.scm 53 */
																																							if (NULLP(CDR(((obj_t) BgL_cdrzd2175zd2_113))))
																																								{	/* Expand/iarith.scm 53 */
																																									return
																																										BFALSE;
																																								}
																																							else
																																								{	/* Expand/iarith.scm 53 */
																																									goto
																																										BgL_tagzd2106zd2_71;
																																								}
																																						}
																																					else
																																						{	/* Expand/iarith.scm 53 */
																																							if (NULLP(CDR(((obj_t) BgL_cdrzd2175zd2_113))))
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_arg1172z00_125;
																																									obj_t
																																										BgL_arg1174z00_126;
																																									BgL_arg1172z00_125
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd2173zd2_112));
																																									BgL_arg1174z00_126
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd2175zd2_113));
																																									BgL_xz00_68
																																										=
																																										BgL_arg1172z00_125;
																																									BgL_yz00_69
																																										=
																																										BgL_arg1174z00_126;
																																								BgL_tagzd2105zd2_70:
																																									{	/* Expand/iarith.scm 63 */
																																										obj_t
																																											BgL_arg2267z00_1004;
																																										{	/* Expand/iarith.scm 63 */
																																											obj_t
																																												BgL_arg2268z00_1005;
																																											obj_t
																																												BgL_arg2269z00_1006;
																																											BgL_arg2268z00_1005
																																												=
																																												PROCEDURE_ENTRY
																																												(BgL_ez00_6)
																																												(BgL_ez00_6,
																																												BgL_xz00_68,
																																												BgL_ez00_6,
																																												BEOA);
																																											{	/* Expand/iarith.scm 63 */
																																												obj_t
																																													BgL_arg2270z00_1007;
																																												BgL_arg2270z00_1007
																																													=
																																													PROCEDURE_ENTRY
																																													(BgL_ez00_6)
																																													(BgL_ez00_6,
																																													BgL_yz00_69,
																																													BgL_ez00_6,
																																													BEOA);
																																												BgL_arg2269z00_1006
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg2270z00_1007,
																																													BNIL);
																																											}
																																											BgL_arg2267z00_1004
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BgL_arg2268z00_1005,
																																												BgL_arg2269z00_1006);
																																										}
																																										return
																																											MAKE_YOUNG_PAIR
																																											(CNST_TABLE_REF
																																											(((long) 0)), BgL_arg2267z00_1004);
																																								}}
																																							else
																																								{	/* Expand/iarith.scm 53 */
																																									goto
																																										BgL_tagzd2106zd2_71;
																																								}
																																						}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 53 */
																																					if (NULLP(CDR(((obj_t) BgL_cdrzd2175zd2_113))))
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_arg1179z00_133;
																																							obj_t
																																								BgL_arg1186z00_134;
																																							BgL_arg1179z00_133
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd2173zd2_112));
																																							BgL_arg1186z00_134
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd2175zd2_113));
																																							{
																																								obj_t
																																									BgL_yz00_3665;
																																								obj_t
																																									BgL_xz00_3664;
																																								BgL_xz00_3664
																																									=
																																									BgL_arg1179z00_133;
																																								BgL_yz00_3665
																																									=
																																									BgL_arg1186z00_134;
																																								BgL_yz00_69
																																									=
																																									BgL_yz00_3665;
																																								BgL_xz00_68
																																									=
																																									BgL_xz00_3664;
																																								goto
																																									BgL_tagzd2105zd2_70;
																																							}
																																						}
																																					else
																																						{	/* Expand/iarith.scm 53 */
																																							goto
																																								BgL_tagzd2106zd2_71;
																																						}
																																				}
																																		}
																																	}
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_cdrzd2215zd2_138;
																															BgL_cdrzd2215zd2_138
																																=
																																CDR(BgL_xz00_5);
																															{	/* Expand/iarith.scm 53 */
																																obj_t
																																	BgL_cdrzd2217zd2_139;
																																BgL_cdrzd2217zd2_139
																																	=
																																	CDR(((obj_t)
																																		BgL_cdrzd2215zd2_138));
																																{	/* Expand/iarith.scm 53 */
																																	bool_t
																																		BgL_test3630z00_3669;
																																	{	/* Expand/iarith.scm 53 */
																																		obj_t
																																			BgL_tmpz00_3670;
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_pairz00_2101;
																																			{	/* Expand/iarith.scm 53 */
																																				obj_t
																																					BgL_pairz00_2100;
																																				BgL_pairz00_2100
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_cdrzd2215zd2_138));
																																				BgL_pairz00_2101
																																					=
																																					CDR
																																					(BgL_pairz00_2100);
																																			}
																																			BgL_tmpz00_3670
																																				=
																																				CAR
																																				(BgL_pairz00_2101);
																																		}
																																		BgL_test3630z00_3669
																																			=
																																			SYMBOLP
																																			(BgL_tmpz00_3670);
																																	}
																																	if (BgL_test3630z00_3669)
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_cdrzd2225zd2_144;
																																			{	/* Expand/iarith.scm 53 */
																																				obj_t
																																					BgL_pairz00_2104;
																																				BgL_pairz00_2104
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_cdrzd2217zd2_139));
																																				BgL_cdrzd2225zd2_144
																																					=
																																					CDR
																																					(BgL_pairz00_2104);
																																			}
																																			{	/* Expand/iarith.scm 53 */
																																				bool_t
																																					BgL_test3631z00_3679;
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_tmpz00_3680;
																																					BgL_tmpz00_3680
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd2225zd2_144));
																																					BgL_test3631z00_3679
																																						=
																																						SYMBOLP
																																						(BgL_tmpz00_3680);
																																				}
																																				if (BgL_test3631z00_3679)
																																					{	/* Expand/iarith.scm 53 */
																																						if (NULLP(CDR(((obj_t) BgL_cdrzd2225zd2_144))))
																																							{	/* Expand/iarith.scm 53 */
																																								if (NULLP(CDR(((obj_t) BgL_cdrzd2217zd2_139))))
																																									{	/* Expand/iarith.scm 53 */
																																										return
																																											BFALSE;
																																									}
																																								else
																																									{	/* Expand/iarith.scm 53 */
																																										goto
																																											BgL_tagzd2106zd2_71;
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 53 */
																																								bool_t
																																									BgL_test3634z00_3692;
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_tmpz00_3693;
																																									BgL_tmpz00_3693
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd2215zd2_138));
																																									BgL_test3634z00_3692
																																										=
																																										CHARP
																																										(BgL_tmpz00_3693);
																																								}
																																								if (BgL_test3634z00_3692)
																																									{	/* Expand/iarith.scm 53 */
																																										bool_t
																																											BgL_test3635z00_3697;
																																										{	/* Expand/iarith.scm 53 */
																																											obj_t
																																												BgL_tmpz00_3698;
																																											BgL_tmpz00_3698
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd2217zd2_139));
																																											BgL_test3635z00_3697
																																												=
																																												CHARP
																																												(BgL_tmpz00_3698);
																																										}
																																										if (BgL_test3635z00_3697)
																																											{	/* Expand/iarith.scm 53 */
																																												if (NULLP(CDR(((obj_t) BgL_cdrzd2217zd2_139))))
																																													{	/* Expand/iarith.scm 53 */
																																														return
																																															BFALSE;
																																													}
																																												else
																																													{	/* Expand/iarith.scm 53 */
																																														goto
																																															BgL_tagzd2106zd2_71;
																																													}
																																											}
																																										else
																																											{	/* Expand/iarith.scm 53 */
																																												obj_t
																																													BgL_cdrzd2251zd2_161;
																																												BgL_cdrzd2251zd2_161
																																													=
																																													CDR
																																													(BgL_xz00_5);
																																												{	/* Expand/iarith.scm 53 */
																																													obj_t
																																														BgL_cdrzd2255zd2_162;
																																													BgL_cdrzd2255zd2_162
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd2251zd2_161));
																																													if (NULLP(CDR(((obj_t) BgL_cdrzd2255zd2_162))))
																																														{	/* Expand/iarith.scm 53 */
																																															obj_t
																																																BgL_arg1247z00_165;
																																															obj_t
																																																BgL_arg1250z00_166;
																																															BgL_arg1247z00_165
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_cdrzd2251zd2_161));
																																															BgL_arg1250z00_166
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_cdrzd2255zd2_162));
																																															{
																																																obj_t
																																																	BgL_yz00_3718;
																																																obj_t
																																																	BgL_xz00_3717;
																																																BgL_xz00_3717
																																																	=
																																																	BgL_arg1247z00_165;
																																																BgL_yz00_3718
																																																	=
																																																	BgL_arg1250z00_166;
																																																BgL_yz00_69
																																																	=
																																																	BgL_yz00_3718;
																																																BgL_xz00_68
																																																	=
																																																	BgL_xz00_3717;
																																																goto
																																																	BgL_tagzd2105zd2_70;
																																															}
																																														}
																																													else
																																														{	/* Expand/iarith.scm 53 */
																																															goto
																																																BgL_tagzd2106zd2_71;
																																														}
																																												}
																																											}
																																									}
																																								else
																																									{	/* Expand/iarith.scm 53 */
																																										obj_t
																																											BgL_cdrzd2266zd2_169;
																																										BgL_cdrzd2266zd2_169
																																											=
																																											CDR
																																											(BgL_xz00_5);
																																										{	/* Expand/iarith.scm 53 */
																																											obj_t
																																												BgL_cdrzd2270zd2_170;
																																											BgL_cdrzd2270zd2_170
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd2266zd2_169));
																																											if (NULLP(CDR(((obj_t) BgL_cdrzd2270zd2_170))))
																																												{	/* Expand/iarith.scm 53 */
																																													obj_t
																																														BgL_arg1256z00_173;
																																													obj_t
																																														BgL_arg1258z00_174;
																																													BgL_arg1256z00_173
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd2266zd2_169));
																																													BgL_arg1258z00_174
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd2270zd2_170));
																																													{
																																														obj_t
																																															BgL_yz00_3731;
																																														obj_t
																																															BgL_xz00_3730;
																																														BgL_xz00_3730
																																															=
																																															BgL_arg1256z00_173;
																																														BgL_yz00_3731
																																															=
																																															BgL_arg1258z00_174;
																																														BgL_yz00_69
																																															=
																																															BgL_yz00_3731;
																																														BgL_xz00_68
																																															=
																																															BgL_xz00_3730;
																																														goto
																																															BgL_tagzd2105zd2_70;
																																													}
																																												}
																																											else
																																												{	/* Expand/iarith.scm 53 */
																																													goto
																																														BgL_tagzd2106zd2_71;
																																												}
																																										}
																																									}
																																							}
																																					}
																																				else
																																					{	/* Expand/iarith.scm 53 */
																																						bool_t
																																							BgL_test3639z00_3732;
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_tmpz00_3733;
																																							BgL_tmpz00_3733
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd2215zd2_138));
																																							BgL_test3639z00_3732
																																								=
																																								CHARP
																																								(BgL_tmpz00_3733);
																																						}
																																						if (BgL_test3639z00_3732)
																																							{	/* Expand/iarith.scm 53 */
																																								bool_t
																																									BgL_test3640z00_3737;
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_tmpz00_3738;
																																									BgL_tmpz00_3738
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd2217zd2_139));
																																									BgL_test3640z00_3737
																																										=
																																										CHARP
																																										(BgL_tmpz00_3738);
																																								}
																																								if (BgL_test3640z00_3737)
																																									{	/* Expand/iarith.scm 53 */
																																										if (NULLP(CDR(((obj_t) BgL_cdrzd2217zd2_139))))
																																											{	/* Expand/iarith.scm 53 */
																																												return
																																													BFALSE;
																																											}
																																										else
																																											{	/* Expand/iarith.scm 53 */
																																												goto
																																													BgL_tagzd2106zd2_71;
																																											}
																																									}
																																								else
																																									{	/* Expand/iarith.scm 53 */
																																										obj_t
																																											BgL_cdrzd2293zd2_187;
																																										BgL_cdrzd2293zd2_187
																																											=
																																											CDR
																																											(BgL_xz00_5);
																																										{	/* Expand/iarith.scm 53 */
																																											obj_t
																																												BgL_cdrzd2297zd2_188;
																																											BgL_cdrzd2297zd2_188
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd2293zd2_187));
																																											if (NULLP(CDR(((obj_t) BgL_cdrzd2297zd2_188))))
																																												{	/* Expand/iarith.scm 53 */
																																													obj_t
																																														BgL_arg1282z00_191;
																																													obj_t
																																														BgL_arg1284z00_192;
																																													BgL_arg1282z00_191
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd2293zd2_187));
																																													BgL_arg1284z00_192
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd2297zd2_188));
																																													{
																																														obj_t
																																															BgL_yz00_3758;
																																														obj_t
																																															BgL_xz00_3757;
																																														BgL_xz00_3757
																																															=
																																															BgL_arg1282z00_191;
																																														BgL_yz00_3758
																																															=
																																															BgL_arg1284z00_192;
																																														BgL_yz00_69
																																															=
																																															BgL_yz00_3758;
																																														BgL_xz00_68
																																															=
																																															BgL_xz00_3757;
																																														goto
																																															BgL_tagzd2105zd2_70;
																																													}
																																												}
																																											else
																																												{	/* Expand/iarith.scm 53 */
																																													goto
																																														BgL_tagzd2106zd2_71;
																																												}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 53 */
																																								obj_t
																																									BgL_cdrzd2308zd2_195;
																																								BgL_cdrzd2308zd2_195
																																									=
																																									CDR
																																									(BgL_xz00_5);
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_cdrzd2312zd2_196;
																																									BgL_cdrzd2312zd2_196
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd2308zd2_195));
																																									if (NULLP(CDR(((obj_t) BgL_cdrzd2312zd2_196))))
																																										{	/* Expand/iarith.scm 53 */
																																											obj_t
																																												BgL_arg1289z00_199;
																																											obj_t
																																												BgL_arg1290z00_200;
																																											BgL_arg1289z00_199
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd2308zd2_195));
																																											BgL_arg1290z00_200
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd2312zd2_196));
																																											{
																																												obj_t
																																													BgL_yz00_3771;
																																												obj_t
																																													BgL_xz00_3770;
																																												BgL_xz00_3770
																																													=
																																													BgL_arg1289z00_199;
																																												BgL_yz00_3771
																																													=
																																													BgL_arg1290z00_200;
																																												BgL_yz00_69
																																													=
																																													BgL_yz00_3771;
																																												BgL_xz00_68
																																													=
																																													BgL_xz00_3770;
																																												goto
																																													BgL_tagzd2105zd2_70;
																																											}
																																										}
																																									else
																																										{	/* Expand/iarith.scm 53 */
																																											goto
																																												BgL_tagzd2106zd2_71;
																																										}
																																								}
																																							}
																																					}
																																			}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			bool_t
																																				BgL_test3644z00_3772;
																																			{	/* Expand/iarith.scm 53 */
																																				obj_t
																																					BgL_tmpz00_3773;
																																				BgL_tmpz00_3773
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_cdrzd2215zd2_138));
																																				BgL_test3644z00_3772
																																					=
																																					CHARP
																																					(BgL_tmpz00_3773);
																																			}
																																			if (BgL_test3644z00_3772)
																																				{	/* Expand/iarith.scm 53 */
																																					bool_t
																																						BgL_test3645z00_3777;
																																					{	/* Expand/iarith.scm 53 */
																																						obj_t
																																							BgL_tmpz00_3778;
																																						BgL_tmpz00_3778
																																							=
																																							CAR
																																							(((obj_t) BgL_cdrzd2217zd2_139));
																																						BgL_test3645z00_3777
																																							=
																																							CHARP
																																							(BgL_tmpz00_3778);
																																					}
																																					if (BgL_test3645z00_3777)
																																						{	/* Expand/iarith.scm 53 */
																																							if (NULLP(CDR(((obj_t) BgL_cdrzd2217zd2_139))))
																																								{	/* Expand/iarith.scm 53 */
																																									return
																																										BFALSE;
																																								}
																																							else
																																								{	/* Expand/iarith.scm 53 */
																																									goto
																																										BgL_tagzd2106zd2_71;
																																								}
																																						}
																																					else
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_cdrzd2335zd2_214;
																																							BgL_cdrzd2335zd2_214
																																								=
																																								CDR
																																								(BgL_xz00_5);
																																							{	/* Expand/iarith.scm 53 */
																																								obj_t
																																									BgL_cdrzd2339zd2_215;
																																								BgL_cdrzd2339zd2_215
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_cdrzd2335zd2_214));
																																								if (NULLP(CDR(((obj_t) BgL_cdrzd2339zd2_215))))
																																									{	/* Expand/iarith.scm 53 */
																																										obj_t
																																											BgL_arg1306z00_218;
																																										obj_t
																																											BgL_arg1307z00_219;
																																										BgL_arg1306z00_218
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd2335zd2_214));
																																										BgL_arg1307z00_219
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd2339zd2_215));
																																										{
																																											obj_t
																																												BgL_yz00_3798;
																																											obj_t
																																												BgL_xz00_3797;
																																											BgL_xz00_3797
																																												=
																																												BgL_arg1306z00_218;
																																											BgL_yz00_3798
																																												=
																																												BgL_arg1307z00_219;
																																											BgL_yz00_69
																																												=
																																												BgL_yz00_3798;
																																											BgL_xz00_68
																																												=
																																												BgL_xz00_3797;
																																											goto
																																												BgL_tagzd2105zd2_70;
																																										}
																																									}
																																								else
																																									{	/* Expand/iarith.scm 53 */
																																										goto
																																											BgL_tagzd2106zd2_71;
																																									}
																																							}
																																						}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_cdrzd2350zd2_222;
																																					BgL_cdrzd2350zd2_222
																																						=
																																						CDR
																																						(BgL_xz00_5);
																																					{	/* Expand/iarith.scm 53 */
																																						obj_t
																																							BgL_cdrzd2354zd2_223;
																																						BgL_cdrzd2354zd2_223
																																							=
																																							CDR
																																							(((obj_t) BgL_cdrzd2350zd2_222));
																																						if (NULLP(CDR(((obj_t) BgL_cdrzd2354zd2_223))))
																																							{	/* Expand/iarith.scm 53 */
																																								obj_t
																																									BgL_arg1312z00_226;
																																								obj_t
																																									BgL_arg1314z00_227;
																																								BgL_arg1312z00_226
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_cdrzd2350zd2_222));
																																								BgL_arg1314z00_227
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_cdrzd2354zd2_223));
																																								{
																																									obj_t
																																										BgL_yz00_3811;
																																									obj_t
																																										BgL_xz00_3810;
																																									BgL_xz00_3810
																																										=
																																										BgL_arg1312z00_226;
																																									BgL_yz00_3811
																																										=
																																										BgL_arg1314z00_227;
																																									BgL_yz00_69
																																										=
																																										BgL_yz00_3811;
																																									BgL_xz00_68
																																										=
																																										BgL_xz00_3810;
																																									goto
																																										BgL_tagzd2105zd2_70;
																																								}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 53 */
																																								goto
																																									BgL_tagzd2106zd2_71;
																																							}
																																					}
																																				}
																																		}
																																}
																															}
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_cdrzd2365zd2_234;
																													BgL_cdrzd2365zd2_234 =
																														CDR(BgL_xz00_5);
																													{	/* Expand/iarith.scm 53 */
																														obj_t
																															BgL_cdrzd2367zd2_235;
																														BgL_cdrzd2367zd2_235
																															=
																															CDR(((obj_t)
																																BgL_cdrzd2365zd2_234));
																														{	/* Expand/iarith.scm 53 */
																															bool_t
																																BgL_test3649z00_3815;
																															{	/* Expand/iarith.scm 53 */
																																obj_t
																																	BgL_tmpz00_3816;
																																BgL_tmpz00_3816
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd2365zd2_234));
																																BgL_test3649z00_3815
																																	=
																																	CHARP
																																	(BgL_tmpz00_3816);
																															}
																															if (BgL_test3649z00_3815)
																																{	/* Expand/iarith.scm 53 */
																																	bool_t
																																		BgL_test3650z00_3820;
																																	{	/* Expand/iarith.scm 53 */
																																		obj_t
																																			BgL_tmpz00_3821;
																																		BgL_tmpz00_3821
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd2367zd2_235));
																																		BgL_test3650z00_3820
																																			=
																																			CHARP
																																			(BgL_tmpz00_3821);
																																	}
																																	if (BgL_test3650z00_3820)
																																		{	/* Expand/iarith.scm 53 */
																																			if (NULLP
																																				(CDR(((obj_t) BgL_cdrzd2367zd2_235))))
																																				{	/* Expand/iarith.scm 53 */
																																					return
																																						BFALSE;
																																				}
																																			else
																																				{	/* Expand/iarith.scm 53 */
																																					goto
																																						BgL_tagzd2106zd2_71;
																																				}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			if (NULLP
																																				(CDR(((obj_t) BgL_cdrzd2367zd2_235))))
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_arg1337z00_247;
																																					obj_t
																																						BgL_arg1338z00_248;
																																					BgL_arg1337z00_247
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd2365zd2_234));
																																					BgL_arg1338z00_248
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd2367zd2_235));
																																					{
																																						obj_t
																																							BgL_yz00_3838;
																																						obj_t
																																							BgL_xz00_3837;
																																						BgL_xz00_3837
																																							=
																																							BgL_arg1337z00_247;
																																						BgL_yz00_3838
																																							=
																																							BgL_arg1338z00_248;
																																						BgL_yz00_69
																																							=
																																							BgL_yz00_3838;
																																						BgL_xz00_68
																																							=
																																							BgL_xz00_3837;
																																						goto
																																							BgL_tagzd2105zd2_70;
																																					}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 53 */
																																					goto
																																						BgL_tagzd2106zd2_71;
																																				}
																																		}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd2367zd2_235))))
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_arg1351z00_255;
																																			obj_t
																																				BgL_arg1352z00_256;
																																			BgL_arg1351z00_255
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2365zd2_234));
																																			BgL_arg1352z00_256
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2367zd2_235));
																																			{
																																				obj_t
																																					BgL_yz00_3848;
																																				obj_t
																																					BgL_xz00_3847;
																																				BgL_xz00_3847
																																					=
																																					BgL_arg1351z00_255;
																																				BgL_yz00_3848
																																					=
																																					BgL_arg1352z00_256;
																																				BgL_yz00_69
																																					=
																																					BgL_yz00_3848;
																																				BgL_xz00_68
																																					=
																																					BgL_xz00_3847;
																																				goto
																																					BgL_tagzd2105zd2_70;
																																			}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			goto
																																				BgL_tagzd2106zd2_71;
																																		}
																																}
																														}
																													}
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											obj_t
																												BgL_cdrzd2409zd2_259;
																											BgL_cdrzd2409zd2_259 =
																												CDR(BgL_xz00_5);
																											{	/* Expand/iarith.scm 53 */
																												obj_t
																													BgL_cdrzd2411zd2_260;
																												BgL_cdrzd2411zd2_260 =
																													CDR(((obj_t)
																														BgL_cdrzd2409zd2_259));
																												{	/* Expand/iarith.scm 53 */
																													bool_t
																														BgL_test3654z00_3852;
																													{	/* Expand/iarith.scm 53 */
																														obj_t
																															BgL_tmpz00_3853;
																														BgL_tmpz00_3853 =
																															CAR(((obj_t)
																																BgL_cdrzd2409zd2_259));
																														BgL_test3654z00_3852
																															=
																															CHARP
																															(BgL_tmpz00_3853);
																													}
																													if (BgL_test3654z00_3852)
																														{	/* Expand/iarith.scm 53 */
																															bool_t
																																BgL_test3655z00_3857;
																															{	/* Expand/iarith.scm 53 */
																																obj_t
																																	BgL_tmpz00_3858;
																																BgL_tmpz00_3858
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd2411zd2_260));
																																BgL_test3655z00_3857
																																	=
																																	CHARP
																																	(BgL_tmpz00_3858);
																															}
																															if (BgL_test3655z00_3857)
																																{	/* Expand/iarith.scm 53 */
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd2411zd2_260))))
																																		{	/* Expand/iarith.scm 53 */
																																			return
																																				BFALSE;
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			goto
																																				BgL_tagzd2106zd2_71;
																																		}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd2411zd2_260))))
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_arg1381z00_272;
																																			obj_t
																																				BgL_arg1382z00_273;
																																			BgL_arg1381z00_272
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2409zd2_259));
																																			BgL_arg1382z00_273
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2411zd2_260));
																																			{
																																				obj_t
																																					BgL_yz00_3875;
																																				obj_t
																																					BgL_xz00_3874;
																																				BgL_xz00_3874
																																					=
																																					BgL_arg1381z00_272;
																																				BgL_yz00_3875
																																					=
																																					BgL_arg1382z00_273;
																																				BgL_yz00_69
																																					=
																																					BgL_yz00_3875;
																																				BgL_xz00_68
																																					=
																																					BgL_xz00_3874;
																																				goto
																																					BgL_tagzd2105zd2_70;
																																			}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			goto
																																				BgL_tagzd2106zd2_71;
																																		}
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															if (NULLP(CDR(
																																		((obj_t)
																																			BgL_cdrzd2411zd2_260))))
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_arg1394z00_280;
																																	obj_t
																																		BgL_arg1396z00_281;
																																	BgL_arg1394z00_280
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2409zd2_259));
																																	BgL_arg1396z00_281
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2411zd2_260));
																																	{
																																		obj_t
																																			BgL_yz00_3885;
																																		obj_t
																																			BgL_xz00_3884;
																																		BgL_xz00_3884
																																			=
																																			BgL_arg1394z00_280;
																																		BgL_yz00_3885
																																			=
																																			BgL_arg1396z00_281;
																																		BgL_yz00_69
																																			=
																																			BgL_yz00_3885;
																																		BgL_xz00_68
																																			=
																																			BgL_xz00_3884;
																																		goto
																																			BgL_tagzd2105zd2_70;
																																	}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	goto
																																		BgL_tagzd2106zd2_71;
																																}
																														}
																												}
																											}
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									obj_t BgL_cdrzd2453zd2_285;

																									BgL_cdrzd2453zd2_285 =
																										CDR(BgL_xz00_5);
																									{	/* Expand/iarith.scm 53 */
																										obj_t BgL_cdrzd2455zd2_286;

																										BgL_cdrzd2455zd2_286 =
																											CDR(
																											((obj_t)
																												BgL_cdrzd2453zd2_285));
																										{	/* Expand/iarith.scm 53 */
																											bool_t
																												BgL_test3659z00_3889;
																											{	/* Expand/iarith.scm 53 */
																												obj_t BgL_tmpz00_3890;

																												BgL_tmpz00_3890 =
																													CAR(
																													((obj_t)
																														BgL_cdrzd2453zd2_285));
																												BgL_test3659z00_3889 =
																													CHARP
																													(BgL_tmpz00_3890);
																											}
																											if (BgL_test3659z00_3889)
																												{	/* Expand/iarith.scm 53 */
																													bool_t
																														BgL_test3660z00_3894;
																													{	/* Expand/iarith.scm 53 */
																														obj_t
																															BgL_tmpz00_3895;
																														BgL_tmpz00_3895 =
																															CAR(((obj_t)
																																BgL_cdrzd2455zd2_286));
																														BgL_test3660z00_3894
																															=
																															CHARP
																															(BgL_tmpz00_3895);
																													}
																													if (BgL_test3660z00_3894)
																														{	/* Expand/iarith.scm 53 */
																															if (NULLP(CDR(
																																		((obj_t)
																																			BgL_cdrzd2455zd2_286))))
																																{	/* Expand/iarith.scm 53 */
																																	return BFALSE;
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	goto
																																		BgL_tagzd2106zd2_71;
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															if (NULLP(CDR(
																																		((obj_t)
																																			BgL_cdrzd2455zd2_286))))
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_arg1464z00_298;
																																	obj_t
																																		BgL_arg1465z00_299;
																																	BgL_arg1464z00_298
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2453zd2_285));
																																	BgL_arg1465z00_299
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2455zd2_286));
																																	{
																																		obj_t
																																			BgL_yz00_3912;
																																		obj_t
																																			BgL_xz00_3911;
																																		BgL_xz00_3911
																																			=
																																			BgL_arg1464z00_298;
																																		BgL_yz00_3912
																																			=
																																			BgL_arg1465z00_299;
																																		BgL_yz00_69
																																			=
																																			BgL_yz00_3912;
																																		BgL_xz00_68
																																			=
																																			BgL_xz00_3911;
																																		goto
																																			BgL_tagzd2105zd2_70;
																																	}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	goto
																																		BgL_tagzd2106zd2_71;
																																}
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													if (NULLP(CDR(
																																((obj_t)
																																	BgL_cdrzd2455zd2_286))))
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_arg1489z00_306;
																															obj_t
																																BgL_arg1493z00_307;
																															BgL_arg1489z00_306
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd2453zd2_285));
																															BgL_arg1493z00_307
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd2455zd2_286));
																															{
																																obj_t
																																	BgL_yz00_3922;
																																obj_t
																																	BgL_xz00_3921;
																																BgL_xz00_3921 =
																																	BgL_arg1489z00_306;
																																BgL_yz00_3922 =
																																	BgL_arg1493z00_307;
																																BgL_yz00_69 =
																																	BgL_yz00_3922;
																																BgL_xz00_68 =
																																	BgL_xz00_3921;
																																goto
																																	BgL_tagzd2105zd2_70;
																															}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															goto
																																BgL_tagzd2106zd2_71;
																														}
																												}
																										}
																									}
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 53 */
																							obj_t BgL_cdrzd2497zd2_310;

																							BgL_cdrzd2497zd2_310 =
																								CDR(BgL_xz00_5);
																							{	/* Expand/iarith.scm 53 */
																								obj_t BgL_cdrzd2499zd2_311;

																								BgL_cdrzd2499zd2_311 =
																									CDR(
																									((obj_t)
																										BgL_cdrzd2497zd2_310));
																								{	/* Expand/iarith.scm 53 */
																									bool_t BgL_test3664z00_3926;

																									{	/* Expand/iarith.scm 53 */
																										obj_t BgL_tmpz00_3927;

																										BgL_tmpz00_3927 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2497zd2_310));
																										BgL_test3664z00_3926 =
																											CHARP(BgL_tmpz00_3927);
																									}
																									if (BgL_test3664z00_3926)
																										{	/* Expand/iarith.scm 53 */
																											bool_t
																												BgL_test3665z00_3931;
																											{	/* Expand/iarith.scm 53 */
																												obj_t BgL_tmpz00_3932;

																												BgL_tmpz00_3932 =
																													CAR(
																													((obj_t)
																														BgL_cdrzd2499zd2_311));
																												BgL_test3665z00_3931 =
																													CHARP
																													(BgL_tmpz00_3932);
																											}
																											if (BgL_test3665z00_3931)
																												{	/* Expand/iarith.scm 53 */
																													if (NULLP(CDR(
																																((obj_t)
																																	BgL_cdrzd2499zd2_311))))
																														{	/* Expand/iarith.scm 53 */
																															return BFALSE;
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															goto
																																BgL_tagzd2106zd2_71;
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													if (NULLP(CDR(
																																((obj_t)
																																	BgL_cdrzd2499zd2_311))))
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_arg1540z00_323;
																															obj_t
																																BgL_arg1552z00_324;
																															BgL_arg1540z00_323
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd2497zd2_310));
																															BgL_arg1552z00_324
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd2499zd2_311));
																															{
																																obj_t
																																	BgL_yz00_3949;
																																obj_t
																																	BgL_xz00_3948;
																																BgL_xz00_3948 =
																																	BgL_arg1540z00_323;
																																BgL_yz00_3949 =
																																	BgL_arg1552z00_324;
																																BgL_yz00_69 =
																																	BgL_yz00_3949;
																																BgL_xz00_68 =
																																	BgL_xz00_3948;
																																goto
																																	BgL_tagzd2105zd2_70;
																															}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															goto
																																BgL_tagzd2106zd2_71;
																														}
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											if (NULLP(CDR(
																														((obj_t)
																															BgL_cdrzd2499zd2_311))))
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_arg1564z00_331;
																													obj_t
																														BgL_arg1565z00_332;
																													BgL_arg1564z00_331 =
																														CAR(((obj_t)
																															BgL_cdrzd2497zd2_310));
																													BgL_arg1565z00_332 =
																														CAR(((obj_t)
																															BgL_cdrzd2499zd2_311));
																													{
																														obj_t BgL_yz00_3959;
																														obj_t BgL_xz00_3958;

																														BgL_xz00_3958 =
																															BgL_arg1564z00_331;
																														BgL_yz00_3959 =
																															BgL_arg1565z00_332;
																														BgL_yz00_69 =
																															BgL_yz00_3959;
																														BgL_xz00_68 =
																															BgL_xz00_3958;
																														goto
																															BgL_tagzd2105zd2_70;
																													}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													goto
																														BgL_tagzd2106zd2_71;
																												}
																										}
																								}
																							}
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 53 */
																					obj_t BgL_cdrzd2541zd2_336;

																					BgL_cdrzd2541zd2_336 =
																						CDR(BgL_xz00_5);
																					{	/* Expand/iarith.scm 53 */
																						obj_t BgL_cdrzd2543zd2_337;

																						BgL_cdrzd2543zd2_337 =
																							CDR(
																							((obj_t) BgL_cdrzd2541zd2_336));
																						{	/* Expand/iarith.scm 53 */
																							bool_t BgL_test3669z00_3963;

																							{	/* Expand/iarith.scm 53 */
																								obj_t BgL_tmpz00_3964;

																								BgL_tmpz00_3964 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2541zd2_336));
																								BgL_test3669z00_3963 =
																									CHARP(BgL_tmpz00_3964);
																							}
																							if (BgL_test3669z00_3963)
																								{	/* Expand/iarith.scm 53 */
																									bool_t BgL_test3670z00_3968;

																									{	/* Expand/iarith.scm 53 */
																										obj_t BgL_tmpz00_3969;

																										BgL_tmpz00_3969 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd2543zd2_337));
																										BgL_test3670z00_3968 =
																											CHARP(BgL_tmpz00_3969);
																									}
																									if (BgL_test3670z00_3968)
																										{	/* Expand/iarith.scm 53 */
																											if (NULLP(CDR(
																														((obj_t)
																															BgL_cdrzd2543zd2_337))))
																												{	/* Expand/iarith.scm 53 */
																													return BFALSE;
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													goto
																														BgL_tagzd2106zd2_71;
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											if (NULLP(CDR(
																														((obj_t)
																															BgL_cdrzd2543zd2_337))))
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_arg1597z00_349;
																													obj_t
																														BgL_arg1599z00_350;
																													BgL_arg1597z00_349 =
																														CAR(((obj_t)
																															BgL_cdrzd2541zd2_336));
																													BgL_arg1599z00_350 =
																														CAR(((obj_t)
																															BgL_cdrzd2543zd2_337));
																													{
																														obj_t BgL_yz00_3986;
																														obj_t BgL_xz00_3985;

																														BgL_xz00_3985 =
																															BgL_arg1597z00_349;
																														BgL_yz00_3986 =
																															BgL_arg1599z00_350;
																														BgL_yz00_69 =
																															BgL_yz00_3986;
																														BgL_xz00_68 =
																															BgL_xz00_3985;
																														goto
																															BgL_tagzd2105zd2_70;
																													}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													goto
																														BgL_tagzd2106zd2_71;
																												}
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_cdrzd2543zd2_337))))
																										{	/* Expand/iarith.scm 53 */
																											obj_t BgL_arg1611z00_357;
																											obj_t BgL_arg1612z00_358;

																											BgL_arg1611z00_357 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd2541zd2_336));
																											BgL_arg1612z00_358 =
																												CAR(((obj_t)
																													BgL_cdrzd2543zd2_337));
																											{
																												obj_t BgL_yz00_3996;
																												obj_t BgL_xz00_3995;

																												BgL_xz00_3995 =
																													BgL_arg1611z00_357;
																												BgL_yz00_3996 =
																													BgL_arg1612z00_358;
																												BgL_yz00_69 =
																													BgL_yz00_3996;
																												BgL_xz00_68 =
																													BgL_xz00_3995;
																												goto
																													BgL_tagzd2105zd2_70;
																											}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											goto BgL_tagzd2106zd2_71;
																										}
																								}
																						}
																					}
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 53 */
																			obj_t BgL_cdrzd2585zd2_361;

																			BgL_cdrzd2585zd2_361 = CDR(BgL_xz00_5);
																			{	/* Expand/iarith.scm 53 */
																				obj_t BgL_cdrzd2587zd2_362;

																				BgL_cdrzd2587zd2_362 =
																					CDR(((obj_t) BgL_cdrzd2585zd2_361));
																				{	/* Expand/iarith.scm 53 */
																					bool_t BgL_test3674z00_4000;

																					{	/* Expand/iarith.scm 53 */
																						obj_t BgL_tmpz00_4001;

																						BgL_tmpz00_4001 =
																							CAR(
																							((obj_t) BgL_cdrzd2585zd2_361));
																						BgL_test3674z00_4000 =
																							CHARP(BgL_tmpz00_4001);
																					}
																					if (BgL_test3674z00_4000)
																						{	/* Expand/iarith.scm 53 */
																							bool_t BgL_test3675z00_4005;

																							{	/* Expand/iarith.scm 53 */
																								obj_t BgL_tmpz00_4006;

																								BgL_tmpz00_4006 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2587zd2_362));
																								BgL_test3675z00_4005 =
																									CHARP(BgL_tmpz00_4006);
																							}
																							if (BgL_test3675z00_4005)
																								{	/* Expand/iarith.scm 53 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_cdrzd2587zd2_362))))
																										{	/* Expand/iarith.scm 53 */
																											return BFALSE;
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											goto BgL_tagzd2106zd2_71;
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_cdrzd2587zd2_362))))
																										{	/* Expand/iarith.scm 53 */
																											obj_t BgL_arg1644z00_374;
																											obj_t BgL_arg1652z00_375;

																											BgL_arg1644z00_374 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd2585zd2_361));
																											BgL_arg1652z00_375 =
																												CAR(((obj_t)
																													BgL_cdrzd2587zd2_362));
																											{
																												obj_t BgL_yz00_4023;
																												obj_t BgL_xz00_4022;

																												BgL_xz00_4022 =
																													BgL_arg1644z00_374;
																												BgL_yz00_4023 =
																													BgL_arg1652z00_375;
																												BgL_yz00_69 =
																													BgL_yz00_4023;
																												BgL_xz00_68 =
																													BgL_xz00_4022;
																												goto
																													BgL_tagzd2105zd2_70;
																											}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											goto BgL_tagzd2106zd2_71;
																										}
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 53 */
																							if (NULLP(CDR(
																										((obj_t)
																											BgL_cdrzd2587zd2_362))))
																								{	/* Expand/iarith.scm 53 */
																									obj_t BgL_arg1667z00_382;
																									obj_t BgL_arg1669z00_383;

																									BgL_arg1667z00_382 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2585zd2_361));
																									BgL_arg1669z00_383 =
																										CAR(((obj_t)
																											BgL_cdrzd2587zd2_362));
																									{
																										obj_t BgL_yz00_4033;
																										obj_t BgL_xz00_4032;

																										BgL_xz00_4032 =
																											BgL_arg1667z00_382;
																										BgL_yz00_4033 =
																											BgL_arg1669z00_383;
																										BgL_yz00_69 = BgL_yz00_4033;
																										BgL_xz00_68 = BgL_xz00_4032;
																										goto BgL_tagzd2105zd2_70;
																									}
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									goto BgL_tagzd2106zd2_71;
																								}
																						}
																				}
																			}
																		}
																}
															else
																{	/* Expand/iarith.scm 53 */
																	obj_t BgL_carzd2628zd2_388;
																	obj_t BgL_cdrzd2629zd2_389;

																	BgL_carzd2628zd2_388 =
																		CAR(((obj_t) BgL_cdrzd2112zd2_74));
																	BgL_cdrzd2629zd2_389 =
																		CDR(((obj_t) BgL_cdrzd2112zd2_74));
																	if (PAIRP(BgL_carzd2628zd2_388))
																		{	/* Expand/iarith.scm 53 */
																			obj_t BgL_cdrzd2631zd2_391;

																			BgL_cdrzd2631zd2_391 =
																				CDR(BgL_carzd2628zd2_388);
																			if (
																				(CAR(BgL_carzd2628zd2_388) ==
																					CNST_TABLE_REF(((long) 1))))
																				{	/* Expand/iarith.scm 53 */
																					if (PAIRP(BgL_cdrzd2631zd2_391))
																						{	/* Expand/iarith.scm 53 */
																							bool_t BgL_test3682z00_4047;

																							{	/* Expand/iarith.scm 53 */
																								obj_t BgL_tmpz00_4048;

																								BgL_tmpz00_4048 =
																									CAR(BgL_cdrzd2631zd2_391);
																								BgL_test3682z00_4047 =
																									SYMBOLP(BgL_tmpz00_4048);
																							}
																							if (BgL_test3682z00_4047)
																								{	/* Expand/iarith.scm 53 */
																									if (NULLP(CDR
																											(BgL_cdrzd2631zd2_391)))
																										{	/* Expand/iarith.scm 53 */
																											obj_t
																												BgL_carzd2634zd2_399;
																											BgL_carzd2634zd2_399 =
																												CAR(((obj_t)
																													BgL_cdrzd2629zd2_389));
																											if (PAIRP
																												(BgL_carzd2634zd2_399))
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_cdrzd2637zd2_401;
																													BgL_cdrzd2637zd2_401 =
																														CDR
																														(BgL_carzd2634zd2_399);
																													if ((CAR
																															(BgL_carzd2634zd2_399)
																															==
																															CNST_TABLE_REF((
																																	(long) 1))))
																														{	/* Expand/iarith.scm 53 */
																															if (PAIRP
																																(BgL_cdrzd2637zd2_401))
																																{	/* Expand/iarith.scm 53 */
																																	bool_t
																																		BgL_test3687z00_4065;
																																	{	/* Expand/iarith.scm 53 */
																																		obj_t
																																			BgL_tmpz00_4066;
																																		BgL_tmpz00_4066
																																			=
																																			CAR
																																			(BgL_cdrzd2637zd2_401);
																																		BgL_test3687z00_4065
																																			=
																																			SYMBOLP
																																			(BgL_tmpz00_4066);
																																	}
																																	if (BgL_test3687z00_4065)
																																		{	/* Expand/iarith.scm 53 */
																																			if (NULLP
																																				(CDR
																																					(BgL_cdrzd2637zd2_401)))
																																				{	/* Expand/iarith.scm 53 */
																																					if (NULLP(CDR(((obj_t) BgL_cdrzd2629zd2_389))))
																																						{	/* Expand/iarith.scm 53 */
																																							return
																																								BFALSE;
																																						}
																																					else
																																						{	/* Expand/iarith.scm 53 */
																																							goto
																																								BgL_tagzd2106zd2_71;
																																						}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_cdrzd2651zd2_413;
																																					BgL_cdrzd2651zd2_413
																																						=
																																						CDR(
																																						((obj_t) BgL_cdrzd2112zd2_74));
																																					{	/* Expand/iarith.scm 53 */
																																						bool_t
																																							BgL_test3690z00_4078;
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_tmpz00_4079;
																																							BgL_tmpz00_4079
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd2112zd2_74));
																																							BgL_test3690z00_4078
																																								=
																																								CHARP
																																								(BgL_tmpz00_4079);
																																						}
																																						if (BgL_test3690z00_4078)
																																							{	/* Expand/iarith.scm 53 */
																																								bool_t
																																									BgL_test3691z00_4083;
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_tmpz00_4084;
																																									BgL_tmpz00_4084
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd2651zd2_413));
																																									BgL_test3691z00_4083
																																										=
																																										CHARP
																																										(BgL_tmpz00_4084);
																																								}
																																								if (BgL_test3691z00_4083)
																																									{	/* Expand/iarith.scm 53 */
																																										if (NULLP(CDR(((obj_t) BgL_cdrzd2651zd2_413))))
																																											{	/* Expand/iarith.scm 53 */
																																												return
																																													BFALSE;
																																											}
																																										else
																																											{	/* Expand/iarith.scm 53 */
																																												goto
																																													BgL_tagzd2106zd2_71;
																																											}
																																									}
																																								else
																																									{	/* Expand/iarith.scm 53 */
																																										obj_t
																																											BgL_cdrzd2663zd2_421;
																																										BgL_cdrzd2663zd2_421
																																											=
																																											CDR
																																											(BgL_xz00_5);
																																										{	/* Expand/iarith.scm 53 */
																																											obj_t
																																												BgL_cdrzd2667zd2_422;
																																											BgL_cdrzd2667zd2_422
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd2663zd2_421));
																																											if (NULLP(CDR(((obj_t) BgL_cdrzd2667zd2_422))))
																																												{	/* Expand/iarith.scm 53 */
																																													obj_t
																																														BgL_arg1738z00_425;
																																													obj_t
																																														BgL_arg1739z00_426;
																																													BgL_arg1738z00_425
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd2663zd2_421));
																																													BgL_arg1739z00_426
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd2667zd2_422));
																																													{
																																														obj_t
																																															BgL_yz00_4104;
																																														obj_t
																																															BgL_xz00_4103;
																																														BgL_xz00_4103
																																															=
																																															BgL_arg1738z00_425;
																																														BgL_yz00_4104
																																															=
																																															BgL_arg1739z00_426;
																																														BgL_yz00_69
																																															=
																																															BgL_yz00_4104;
																																														BgL_xz00_68
																																															=
																																															BgL_xz00_4103;
																																														goto
																																															BgL_tagzd2105zd2_70;
																																													}
																																												}
																																											else
																																												{	/* Expand/iarith.scm 53 */
																																													goto
																																														BgL_tagzd2106zd2_71;
																																												}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 53 */
																																								obj_t
																																									BgL_cdrzd2678zd2_429;
																																								BgL_cdrzd2678zd2_429
																																									=
																																									CDR
																																									(BgL_xz00_5);
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_cdrzd2682zd2_430;
																																									BgL_cdrzd2682zd2_430
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd2678zd2_429));
																																									if (NULLP(CDR(((obj_t) BgL_cdrzd2682zd2_430))))
																																										{	/* Expand/iarith.scm 53 */
																																											obj_t
																																												BgL_arg1744z00_433;
																																											obj_t
																																												BgL_arg1745z00_434;
																																											BgL_arg1744z00_433
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd2678zd2_429));
																																											BgL_arg1745z00_434
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd2682zd2_430));
																																											{
																																												obj_t
																																													BgL_yz00_4117;
																																												obj_t
																																													BgL_xz00_4116;
																																												BgL_xz00_4116
																																													=
																																													BgL_arg1744z00_433;
																																												BgL_yz00_4117
																																													=
																																													BgL_arg1745z00_434;
																																												BgL_yz00_69
																																													=
																																													BgL_yz00_4117;
																																												BgL_xz00_68
																																													=
																																													BgL_xz00_4116;
																																												goto
																																													BgL_tagzd2105zd2_70;
																																											}
																																										}
																																									else
																																										{	/* Expand/iarith.scm 53 */
																																											goto
																																												BgL_tagzd2106zd2_71;
																																										}
																																								}
																																							}
																																					}
																																				}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_cdrzd2693zd2_439;
																																			BgL_cdrzd2693zd2_439
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_cdrzd2112zd2_74));
																																			{	/* Expand/iarith.scm 53 */
																																				bool_t
																																					BgL_test3695z00_4120;
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_tmpz00_4121;
																																					BgL_tmpz00_4121
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd2112zd2_74));
																																					BgL_test3695z00_4120
																																						=
																																						CHARP
																																						(BgL_tmpz00_4121);
																																				}
																																				if (BgL_test3695z00_4120)
																																					{	/* Expand/iarith.scm 53 */
																																						bool_t
																																							BgL_test3696z00_4125;
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_tmpz00_4126;
																																							BgL_tmpz00_4126
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd2693zd2_439));
																																							BgL_test3696z00_4125
																																								=
																																								CHARP
																																								(BgL_tmpz00_4126);
																																						}
																																						if (BgL_test3696z00_4125)
																																							{	/* Expand/iarith.scm 53 */
																																								if (NULLP(CDR(((obj_t) BgL_cdrzd2693zd2_439))))
																																									{	/* Expand/iarith.scm 53 */
																																										return
																																											BFALSE;
																																									}
																																								else
																																									{	/* Expand/iarith.scm 53 */
																																										goto
																																											BgL_tagzd2106zd2_71;
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 53 */
																																								obj_t
																																									BgL_cdrzd2705zd2_447;
																																								BgL_cdrzd2705zd2_447
																																									=
																																									CDR
																																									(BgL_xz00_5);
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_cdrzd2709zd2_448;
																																									BgL_cdrzd2709zd2_448
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd2705zd2_447));
																																									if (NULLP(CDR(((obj_t) BgL_cdrzd2709zd2_448))))
																																										{	/* Expand/iarith.scm 53 */
																																											obj_t
																																												BgL_arg1775z00_451;
																																											obj_t
																																												BgL_arg1778z00_452;
																																											BgL_arg1775z00_451
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd2705zd2_447));
																																											BgL_arg1778z00_452
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd2709zd2_448));
																																											{
																																												obj_t
																																													BgL_yz00_4146;
																																												obj_t
																																													BgL_xz00_4145;
																																												BgL_xz00_4145
																																													=
																																													BgL_arg1775z00_451;
																																												BgL_yz00_4146
																																													=
																																													BgL_arg1778z00_452;
																																												BgL_yz00_69
																																													=
																																													BgL_yz00_4146;
																																												BgL_xz00_68
																																													=
																																													BgL_xz00_4145;
																																												goto
																																													BgL_tagzd2105zd2_70;
																																											}
																																										}
																																									else
																																										{	/* Expand/iarith.scm 53 */
																																											goto
																																												BgL_tagzd2106zd2_71;
																																										}
																																								}
																																							}
																																					}
																																				else
																																					{	/* Expand/iarith.scm 53 */
																																						obj_t
																																							BgL_cdrzd2720zd2_455;
																																						BgL_cdrzd2720zd2_455
																																							=
																																							CDR
																																							(BgL_xz00_5);
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_cdrzd2724zd2_456;
																																							BgL_cdrzd2724zd2_456
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_cdrzd2720zd2_455));
																																							if (NULLP(CDR(((obj_t) BgL_cdrzd2724zd2_456))))
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_arg1790z00_459;
																																									obj_t
																																										BgL_arg1796z00_460;
																																									BgL_arg1790z00_459
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd2720zd2_455));
																																									BgL_arg1796z00_460
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd2724zd2_456));
																																									{
																																										obj_t
																																											BgL_yz00_4159;
																																										obj_t
																																											BgL_xz00_4158;
																																										BgL_xz00_4158
																																											=
																																											BgL_arg1790z00_459;
																																										BgL_yz00_4159
																																											=
																																											BgL_arg1796z00_460;
																																										BgL_yz00_69
																																											=
																																											BgL_yz00_4159;
																																										BgL_xz00_68
																																											=
																																											BgL_xz00_4158;
																																										goto
																																											BgL_tagzd2105zd2_70;
																																									}
																																								}
																																							else
																																								{	/* Expand/iarith.scm 53 */
																																									goto
																																										BgL_tagzd2106zd2_71;
																																								}
																																						}
																																					}
																																			}
																																		}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_cdrzd2735zd2_465;
																																	BgL_cdrzd2735zd2_465
																																		=
																																		CDR(((obj_t)
																																			BgL_cdrzd2112zd2_74));
																																	{	/* Expand/iarith.scm 53 */
																																		bool_t
																																			BgL_test3700z00_4162;
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_tmpz00_4163;
																																			BgL_tmpz00_4163
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2112zd2_74));
																																			BgL_test3700z00_4162
																																				=
																																				CHARP
																																				(BgL_tmpz00_4163);
																																		}
																																		if (BgL_test3700z00_4162)
																																			{	/* Expand/iarith.scm 53 */
																																				bool_t
																																					BgL_test3701z00_4167;
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_tmpz00_4168;
																																					BgL_tmpz00_4168
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd2735zd2_465));
																																					BgL_test3701z00_4167
																																						=
																																						CHARP
																																						(BgL_tmpz00_4168);
																																				}
																																				if (BgL_test3701z00_4167)
																																					{	/* Expand/iarith.scm 53 */
																																						if (NULLP(CDR(((obj_t) BgL_cdrzd2735zd2_465))))
																																							{	/* Expand/iarith.scm 53 */
																																								return
																																									BFALSE;
																																							}
																																						else
																																							{	/* Expand/iarith.scm 53 */
																																								goto
																																									BgL_tagzd2106zd2_71;
																																							}
																																					}
																																				else
																																					{	/* Expand/iarith.scm 53 */
																																						obj_t
																																							BgL_cdrzd2747zd2_473;
																																						BgL_cdrzd2747zd2_473
																																							=
																																							CDR
																																							(BgL_xz00_5);
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_cdrzd2751zd2_474;
																																							BgL_cdrzd2751zd2_474
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_cdrzd2747zd2_473));
																																							if (NULLP(CDR(((obj_t) BgL_cdrzd2751zd2_474))))
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_arg1827z00_477;
																																									obj_t
																																										BgL_arg1828z00_478;
																																									BgL_arg1827z00_477
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd2747zd2_473));
																																									BgL_arg1828z00_478
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd2751zd2_474));
																																									{
																																										obj_t
																																											BgL_yz00_4188;
																																										obj_t
																																											BgL_xz00_4187;
																																										BgL_xz00_4187
																																											=
																																											BgL_arg1827z00_477;
																																										BgL_yz00_4188
																																											=
																																											BgL_arg1828z00_478;
																																										BgL_yz00_69
																																											=
																																											BgL_yz00_4188;
																																										BgL_xz00_68
																																											=
																																											BgL_xz00_4187;
																																										goto
																																											BgL_tagzd2105zd2_70;
																																									}
																																								}
																																							else
																																								{	/* Expand/iarith.scm 53 */
																																									goto
																																										BgL_tagzd2106zd2_71;
																																								}
																																						}
																																					}
																																			}
																																		else
																																			{	/* Expand/iarith.scm 53 */
																																				obj_t
																																					BgL_cdrzd2762zd2_481;
																																				BgL_cdrzd2762zd2_481
																																					=
																																					CDR
																																					(BgL_xz00_5);
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_cdrzd2766zd2_482;
																																					BgL_cdrzd2766zd2_482
																																						=
																																						CDR(
																																						((obj_t) BgL_cdrzd2762zd2_481));
																																					if (NULLP(CDR(((obj_t) BgL_cdrzd2766zd2_482))))
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_arg1833z00_485;
																																							obj_t
																																								BgL_arg1835z00_486;
																																							BgL_arg1833z00_485
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd2762zd2_481));
																																							BgL_arg1835z00_486
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd2766zd2_482));
																																							{
																																								obj_t
																																									BgL_yz00_4201;
																																								obj_t
																																									BgL_xz00_4200;
																																								BgL_xz00_4200
																																									=
																																									BgL_arg1833z00_485;
																																								BgL_yz00_4201
																																									=
																																									BgL_arg1835z00_486;
																																								BgL_yz00_69
																																									=
																																									BgL_yz00_4201;
																																								BgL_xz00_68
																																									=
																																									BgL_xz00_4200;
																																								goto
																																									BgL_tagzd2105zd2_70;
																																							}
																																						}
																																					else
																																						{	/* Expand/iarith.scm 53 */
																																							goto
																																								BgL_tagzd2106zd2_71;
																																						}
																																				}
																																			}
																																	}
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_cdrzd2777zd2_490;
																															BgL_cdrzd2777zd2_490
																																=
																																CDR(((obj_t)
																																	BgL_cdrzd2112zd2_74));
																															{	/* Expand/iarith.scm 53 */
																																bool_t
																																	BgL_test3705z00_4204;
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_tmpz00_4205;
																																	BgL_tmpz00_4205
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2112zd2_74));
																																	BgL_test3705z00_4204
																																		=
																																		CHARP
																																		(BgL_tmpz00_4205);
																																}
																																if (BgL_test3705z00_4204)
																																	{	/* Expand/iarith.scm 53 */
																																		bool_t
																																			BgL_test3706z00_4209;
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_tmpz00_4210;
																																			BgL_tmpz00_4210
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2777zd2_490));
																																			BgL_test3706z00_4209
																																				=
																																				CHARP
																																				(BgL_tmpz00_4210);
																																		}
																																		if (BgL_test3706z00_4209)
																																			{	/* Expand/iarith.scm 53 */
																																				if (NULLP(CDR(((obj_t) BgL_cdrzd2777zd2_490))))
																																					{	/* Expand/iarith.scm 53 */
																																						return
																																							BFALSE;
																																					}
																																				else
																																					{	/* Expand/iarith.scm 53 */
																																						goto
																																							BgL_tagzd2106zd2_71;
																																					}
																																			}
																																		else
																																			{	/* Expand/iarith.scm 53 */
																																				obj_t
																																					BgL_cdrzd2789zd2_498;
																																				BgL_cdrzd2789zd2_498
																																					=
																																					CDR
																																					(BgL_xz00_5);
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_cdrzd2793zd2_499;
																																					BgL_cdrzd2793zd2_499
																																						=
																																						CDR(
																																						((obj_t) BgL_cdrzd2789zd2_498));
																																					if (NULLP(CDR(((obj_t) BgL_cdrzd2793zd2_499))))
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_arg1850z00_502;
																																							obj_t
																																								BgL_arg1851z00_503;
																																							BgL_arg1850z00_502
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd2789zd2_498));
																																							BgL_arg1851z00_503
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd2793zd2_499));
																																							{
																																								obj_t
																																									BgL_yz00_4230;
																																								obj_t
																																									BgL_xz00_4229;
																																								BgL_xz00_4229
																																									=
																																									BgL_arg1850z00_502;
																																								BgL_yz00_4230
																																									=
																																									BgL_arg1851z00_503;
																																								BgL_yz00_69
																																									=
																																									BgL_yz00_4230;
																																								BgL_xz00_68
																																									=
																																									BgL_xz00_4229;
																																								goto
																																									BgL_tagzd2105zd2_70;
																																							}
																																						}
																																					else
																																						{	/* Expand/iarith.scm 53 */
																																							goto
																																								BgL_tagzd2106zd2_71;
																																						}
																																				}
																																			}
																																	}
																																else
																																	{	/* Expand/iarith.scm 53 */
																																		obj_t
																																			BgL_cdrzd2804zd2_506;
																																		BgL_cdrzd2804zd2_506
																																			=
																																			CDR
																																			(BgL_xz00_5);
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_cdrzd2808zd2_507;
																																			BgL_cdrzd2808zd2_507
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_cdrzd2804zd2_506));
																																			if (NULLP
																																				(CDR(((obj_t) BgL_cdrzd2808zd2_507))))
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_arg1857z00_510;
																																					obj_t
																																						BgL_arg1858z00_511;
																																					BgL_arg1857z00_510
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd2804zd2_506));
																																					BgL_arg1858z00_511
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd2808zd2_507));
																																					{
																																						obj_t
																																							BgL_yz00_4243;
																																						obj_t
																																							BgL_xz00_4242;
																																						BgL_xz00_4242
																																							=
																																							BgL_arg1857z00_510;
																																						BgL_yz00_4243
																																							=
																																							BgL_arg1858z00_511;
																																						BgL_yz00_69
																																							=
																																							BgL_yz00_4243;
																																						BgL_xz00_68
																																							=
																																							BgL_xz00_4242;
																																						goto
																																							BgL_tagzd2105zd2_70;
																																					}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 53 */
																																					goto
																																						BgL_tagzd2106zd2_71;
																																				}
																																		}
																																	}
																															}
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_cdrzd2819zd2_516;
																													BgL_cdrzd2819zd2_516 =
																														CDR(((obj_t)
																															BgL_cdrzd2112zd2_74));
																													{	/* Expand/iarith.scm 53 */
																														bool_t
																															BgL_test3710z00_4246;
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_tmpz00_4247;
																															BgL_tmpz00_4247 =
																																CAR(((obj_t)
																																	BgL_cdrzd2112zd2_74));
																															BgL_test3710z00_4246
																																=
																																CHARP
																																(BgL_tmpz00_4247);
																														}
																														if (BgL_test3710z00_4246)
																															{	/* Expand/iarith.scm 53 */
																																bool_t
																																	BgL_test3711z00_4251;
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_tmpz00_4252;
																																	BgL_tmpz00_4252
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2819zd2_516));
																																	BgL_test3711z00_4251
																																		=
																																		CHARP
																																		(BgL_tmpz00_4252);
																																}
																																if (BgL_test3711z00_4251)
																																	{	/* Expand/iarith.scm 53 */
																																		if (NULLP
																																			(CDR(((obj_t) BgL_cdrzd2819zd2_516))))
																																			{	/* Expand/iarith.scm 53 */
																																				return
																																					BFALSE;
																																			}
																																		else
																																			{	/* Expand/iarith.scm 53 */
																																				goto
																																					BgL_tagzd2106zd2_71;
																																			}
																																	}
																																else
																																	{	/* Expand/iarith.scm 53 */
																																		obj_t
																																			BgL_cdrzd2831zd2_524;
																																		BgL_cdrzd2831zd2_524
																																			=
																																			CDR
																																			(BgL_xz00_5);
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_cdrzd2835zd2_525;
																																			BgL_cdrzd2835zd2_525
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_cdrzd2831zd2_524));
																																			if (NULLP
																																				(CDR(((obj_t) BgL_cdrzd2835zd2_525))))
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_arg1873z00_528;
																																					obj_t
																																						BgL_arg1874z00_529;
																																					BgL_arg1873z00_528
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd2831zd2_524));
																																					BgL_arg1874z00_529
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd2835zd2_525));
																																					{
																																						obj_t
																																							BgL_yz00_4272;
																																						obj_t
																																							BgL_xz00_4271;
																																						BgL_xz00_4271
																																							=
																																							BgL_arg1873z00_528;
																																						BgL_yz00_4272
																																							=
																																							BgL_arg1874z00_529;
																																						BgL_yz00_69
																																							=
																																							BgL_yz00_4272;
																																						BgL_xz00_68
																																							=
																																							BgL_xz00_4271;
																																						goto
																																							BgL_tagzd2105zd2_70;
																																					}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 53 */
																																					goto
																																						BgL_tagzd2106zd2_71;
																																				}
																																		}
																																	}
																															}
																														else
																															{	/* Expand/iarith.scm 53 */
																																obj_t
																																	BgL_cdrzd2846zd2_532;
																																BgL_cdrzd2846zd2_532
																																	=
																																	CDR
																																	(BgL_xz00_5);
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_cdrzd2850zd2_533;
																																	BgL_cdrzd2850zd2_533
																																		=
																																		CDR(((obj_t)
																																			BgL_cdrzd2846zd2_532));
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd2850zd2_533))))
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_arg1881z00_536;
																																			obj_t
																																				BgL_arg1882z00_537;
																																			BgL_arg1881z00_536
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2846zd2_532));
																																			BgL_arg1882z00_537
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2850zd2_533));
																																			{
																																				obj_t
																																					BgL_yz00_4285;
																																				obj_t
																																					BgL_xz00_4284;
																																				BgL_xz00_4284
																																					=
																																					BgL_arg1881z00_536;
																																				BgL_yz00_4285
																																					=
																																					BgL_arg1882z00_537;
																																				BgL_yz00_69
																																					=
																																					BgL_yz00_4285;
																																				BgL_xz00_68
																																					=
																																					BgL_xz00_4284;
																																				goto
																																					BgL_tagzd2105zd2_70;
																																			}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			goto
																																				BgL_tagzd2106zd2_71;
																																		}
																																}
																															}
																													}
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											obj_t
																												BgL_cdrzd2861zd2_541;
																											BgL_cdrzd2861zd2_541 =
																												CDR(((obj_t)
																													BgL_cdrzd2112zd2_74));
																											{	/* Expand/iarith.scm 53 */
																												bool_t
																													BgL_test3715z00_4288;
																												{	/* Expand/iarith.scm 53 */
																													obj_t BgL_tmpz00_4289;

																													BgL_tmpz00_4289 =
																														CAR(
																														((obj_t)
																															BgL_cdrzd2112zd2_74));
																													BgL_test3715z00_4288 =
																														CHARP
																														(BgL_tmpz00_4289);
																												}
																												if (BgL_test3715z00_4288)
																													{	/* Expand/iarith.scm 53 */
																														bool_t
																															BgL_test3716z00_4293;
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_tmpz00_4294;
																															BgL_tmpz00_4294 =
																																CAR(((obj_t)
																																	BgL_cdrzd2861zd2_541));
																															BgL_test3716z00_4293
																																=
																																CHARP
																																(BgL_tmpz00_4294);
																														}
																														if (BgL_test3716z00_4293)
																															{	/* Expand/iarith.scm 53 */
																																if (NULLP(CDR(
																																			((obj_t)
																																				BgL_cdrzd2861zd2_541))))
																																	{	/* Expand/iarith.scm 53 */
																																		return
																																			BFALSE;
																																	}
																																else
																																	{	/* Expand/iarith.scm 53 */
																																		goto
																																			BgL_tagzd2106zd2_71;
																																	}
																															}
																														else
																															{	/* Expand/iarith.scm 53 */
																																obj_t
																																	BgL_cdrzd2873zd2_549;
																																BgL_cdrzd2873zd2_549
																																	=
																																	CDR
																																	(BgL_xz00_5);
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_cdrzd2877zd2_550;
																																	BgL_cdrzd2877zd2_550
																																		=
																																		CDR(((obj_t)
																																			BgL_cdrzd2873zd2_549));
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd2877zd2_550))))
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_arg1895z00_553;
																																			obj_t
																																				BgL_arg1896z00_554;
																																			BgL_arg1895z00_553
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2873zd2_549));
																																			BgL_arg1896z00_554
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd2877zd2_550));
																																			{
																																				obj_t
																																					BgL_yz00_4314;
																																				obj_t
																																					BgL_xz00_4313;
																																				BgL_xz00_4313
																																					=
																																					BgL_arg1895z00_553;
																																				BgL_yz00_4314
																																					=
																																					BgL_arg1896z00_554;
																																				BgL_yz00_69
																																					=
																																					BgL_yz00_4314;
																																				BgL_xz00_68
																																					=
																																					BgL_xz00_4313;
																																				goto
																																					BgL_tagzd2105zd2_70;
																																			}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			goto
																																				BgL_tagzd2106zd2_71;
																																		}
																																}
																															}
																													}
																												else
																													{	/* Expand/iarith.scm 53 */
																														obj_t
																															BgL_cdrzd2888zd2_557;
																														BgL_cdrzd2888zd2_557
																															= CDR(BgL_xz00_5);
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_cdrzd2892zd2_558;
																															BgL_cdrzd2892zd2_558
																																=
																																CDR(((obj_t)
																																	BgL_cdrzd2888zd2_557));
																															if (NULLP(CDR((
																																			(obj_t)
																																			BgL_cdrzd2892zd2_558))))
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_arg1903z00_561;
																																	obj_t
																																		BgL_arg1904z00_562;
																																	BgL_arg1903z00_561
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2888zd2_557));
																																	BgL_arg1904z00_562
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2892zd2_558));
																																	{
																																		obj_t
																																			BgL_yz00_4327;
																																		obj_t
																																			BgL_xz00_4326;
																																		BgL_xz00_4326
																																			=
																																			BgL_arg1903z00_561;
																																		BgL_yz00_4327
																																			=
																																			BgL_arg1904z00_562;
																																		BgL_yz00_69
																																			=
																																			BgL_yz00_4327;
																																		BgL_xz00_68
																																			=
																																			BgL_xz00_4326;
																																		goto
																																			BgL_tagzd2105zd2_70;
																																	}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	goto
																																		BgL_tagzd2106zd2_71;
																																}
																														}
																													}
																											}
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									obj_t BgL_cdrzd2903zd2_567;

																									BgL_cdrzd2903zd2_567 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd2112zd2_74));
																									{	/* Expand/iarith.scm 53 */
																										bool_t BgL_test3720z00_4330;

																										{	/* Expand/iarith.scm 53 */
																											obj_t BgL_tmpz00_4331;

																											BgL_tmpz00_4331 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd2112zd2_74));
																											BgL_test3720z00_4330 =
																												CHARP(BgL_tmpz00_4331);
																										}
																										if (BgL_test3720z00_4330)
																											{	/* Expand/iarith.scm 53 */
																												bool_t
																													BgL_test3721z00_4335;
																												{	/* Expand/iarith.scm 53 */
																													obj_t BgL_tmpz00_4336;

																													BgL_tmpz00_4336 =
																														CAR(
																														((obj_t)
																															BgL_cdrzd2903zd2_567));
																													BgL_test3721z00_4335 =
																														CHARP
																														(BgL_tmpz00_4336);
																												}
																												if (BgL_test3721z00_4335)
																													{	/* Expand/iarith.scm 53 */
																														if (NULLP(CDR(
																																	((obj_t)
																																		BgL_cdrzd2903zd2_567))))
																															{	/* Expand/iarith.scm 53 */
																																return BFALSE;
																															}
																														else
																															{	/* Expand/iarith.scm 53 */
																																goto
																																	BgL_tagzd2106zd2_71;
																															}
																													}
																												else
																													{	/* Expand/iarith.scm 53 */
																														obj_t
																															BgL_cdrzd2915zd2_575;
																														BgL_cdrzd2915zd2_575
																															= CDR(BgL_xz00_5);
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_cdrzd2919zd2_576;
																															BgL_cdrzd2919zd2_576
																																=
																																CDR(((obj_t)
																																	BgL_cdrzd2915zd2_575));
																															if (NULLP(CDR((
																																			(obj_t)
																																			BgL_cdrzd2919zd2_576))))
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_arg1917z00_579;
																																	obj_t
																																		BgL_arg1918z00_580;
																																	BgL_arg1917z00_579
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2915zd2_575));
																																	BgL_arg1918z00_580
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd2919zd2_576));
																																	{
																																		obj_t
																																			BgL_yz00_4356;
																																		obj_t
																																			BgL_xz00_4355;
																																		BgL_xz00_4355
																																			=
																																			BgL_arg1917z00_579;
																																		BgL_yz00_4356
																																			=
																																			BgL_arg1918z00_580;
																																		BgL_yz00_69
																																			=
																																			BgL_yz00_4356;
																																		BgL_xz00_68
																																			=
																																			BgL_xz00_4355;
																																		goto
																																			BgL_tagzd2105zd2_70;
																																	}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	goto
																																		BgL_tagzd2106zd2_71;
																																}
																														}
																													}
																											}
																										else
																											{	/* Expand/iarith.scm 53 */
																												obj_t
																													BgL_cdrzd2930zd2_583;
																												BgL_cdrzd2930zd2_583 =
																													CDR(BgL_xz00_5);
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_cdrzd2934zd2_584;
																													BgL_cdrzd2934zd2_584 =
																														CDR(((obj_t)
																															BgL_cdrzd2930zd2_583));
																													if (NULLP(CDR(((obj_t)
																																	BgL_cdrzd2934zd2_584))))
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_arg1923z00_587;
																															obj_t
																																BgL_arg1924z00_588;
																															BgL_arg1923z00_587
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd2930zd2_583));
																															BgL_arg1924z00_588
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd2934zd2_584));
																															{
																																obj_t
																																	BgL_yz00_4369;
																																obj_t
																																	BgL_xz00_4368;
																																BgL_xz00_4368 =
																																	BgL_arg1923z00_587;
																																BgL_yz00_4369 =
																																	BgL_arg1924z00_588;
																																BgL_yz00_69 =
																																	BgL_yz00_4369;
																																BgL_xz00_68 =
																																	BgL_xz00_4368;
																																goto
																																	BgL_tagzd2105zd2_70;
																															}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															goto
																																BgL_tagzd2106zd2_71;
																														}
																												}
																											}
																									}
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 53 */
																							obj_t BgL_cdrzd2945zd2_593;

																							BgL_cdrzd2945zd2_593 =
																								CDR(
																								((obj_t) BgL_cdrzd2112zd2_74));
																							{	/* Expand/iarith.scm 53 */
																								bool_t BgL_test3725z00_4372;

																								{	/* Expand/iarith.scm 53 */
																									obj_t BgL_tmpz00_4373;

																									BgL_tmpz00_4373 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2112zd2_74));
																									BgL_test3725z00_4372 =
																										CHARP(BgL_tmpz00_4373);
																								}
																								if (BgL_test3725z00_4372)
																									{	/* Expand/iarith.scm 53 */
																										bool_t BgL_test3726z00_4377;

																										{	/* Expand/iarith.scm 53 */
																											obj_t BgL_tmpz00_4378;

																											BgL_tmpz00_4378 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd2945zd2_593));
																											BgL_test3726z00_4377 =
																												CHARP(BgL_tmpz00_4378);
																										}
																										if (BgL_test3726z00_4377)
																											{	/* Expand/iarith.scm 53 */
																												if (NULLP(CDR(
																															((obj_t)
																																BgL_cdrzd2945zd2_593))))
																													{	/* Expand/iarith.scm 53 */
																														return BFALSE;
																													}
																												else
																													{	/* Expand/iarith.scm 53 */
																														goto
																															BgL_tagzd2106zd2_71;
																													}
																											}
																										else
																											{	/* Expand/iarith.scm 53 */
																												obj_t
																													BgL_cdrzd2957zd2_601;
																												BgL_cdrzd2957zd2_601 =
																													CDR(BgL_xz00_5);
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_cdrzd2961zd2_602;
																													BgL_cdrzd2961zd2_602 =
																														CDR(((obj_t)
																															BgL_cdrzd2957zd2_601));
																													if (NULLP(CDR(((obj_t)
																																	BgL_cdrzd2961zd2_602))))
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_arg1937z00_605;
																															obj_t
																																BgL_arg1938z00_606;
																															BgL_arg1937z00_605
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd2957zd2_601));
																															BgL_arg1938z00_606
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd2961zd2_602));
																															{
																																obj_t
																																	BgL_yz00_4398;
																																obj_t
																																	BgL_xz00_4397;
																																BgL_xz00_4397 =
																																	BgL_arg1937z00_605;
																																BgL_yz00_4398 =
																																	BgL_arg1938z00_606;
																																BgL_yz00_69 =
																																	BgL_yz00_4398;
																																BgL_xz00_68 =
																																	BgL_xz00_4397;
																																goto
																																	BgL_tagzd2105zd2_70;
																															}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															goto
																																BgL_tagzd2106zd2_71;
																														}
																												}
																											}
																									}
																								else
																									{	/* Expand/iarith.scm 53 */
																										obj_t BgL_cdrzd2972zd2_609;

																										BgL_cdrzd2972zd2_609 =
																											CDR(BgL_xz00_5);
																										{	/* Expand/iarith.scm 53 */
																											obj_t
																												BgL_cdrzd2976zd2_610;
																											BgL_cdrzd2976zd2_610 =
																												CDR(((obj_t)
																													BgL_cdrzd2972zd2_609));
																											if (NULLP(CDR(((obj_t)
																															BgL_cdrzd2976zd2_610))))
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_arg1943z00_613;
																													obj_t
																														BgL_arg1944z00_614;
																													BgL_arg1943z00_613 =
																														CAR(((obj_t)
																															BgL_cdrzd2972zd2_609));
																													BgL_arg1944z00_614 =
																														CAR(((obj_t)
																															BgL_cdrzd2976zd2_610));
																													{
																														obj_t BgL_yz00_4411;
																														obj_t BgL_xz00_4410;

																														BgL_xz00_4410 =
																															BgL_arg1943z00_613;
																														BgL_yz00_4411 =
																															BgL_arg1944z00_614;
																														BgL_yz00_69 =
																															BgL_yz00_4411;
																														BgL_xz00_68 =
																															BgL_xz00_4410;
																														goto
																															BgL_tagzd2105zd2_70;
																													}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													goto
																														BgL_tagzd2106zd2_71;
																												}
																										}
																									}
																							}
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 53 */
																					obj_t BgL_cdrzd2987zd2_618;

																					BgL_cdrzd2987zd2_618 =
																						CDR(((obj_t) BgL_cdrzd2112zd2_74));
																					{	/* Expand/iarith.scm 53 */
																						bool_t BgL_test3730z00_4414;

																						{	/* Expand/iarith.scm 53 */
																							obj_t BgL_tmpz00_4415;

																							BgL_tmpz00_4415 =
																								CAR(
																								((obj_t) BgL_cdrzd2112zd2_74));
																							BgL_test3730z00_4414 =
																								CHARP(BgL_tmpz00_4415);
																						}
																						if (BgL_test3730z00_4414)
																							{	/* Expand/iarith.scm 53 */
																								bool_t BgL_test3731z00_4419;

																								{	/* Expand/iarith.scm 53 */
																									obj_t BgL_tmpz00_4420;

																									BgL_tmpz00_4420 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2987zd2_618));
																									BgL_test3731z00_4419 =
																										CHARP(BgL_tmpz00_4420);
																								}
																								if (BgL_test3731z00_4419)
																									{	/* Expand/iarith.scm 53 */
																										if (NULLP(CDR(
																													((obj_t)
																														BgL_cdrzd2987zd2_618))))
																											{	/* Expand/iarith.scm 53 */
																												return BFALSE;
																											}
																										else
																											{	/* Expand/iarith.scm 53 */
																												goto
																													BgL_tagzd2106zd2_71;
																											}
																									}
																								else
																									{	/* Expand/iarith.scm 53 */
																										obj_t BgL_cdrzd2999zd2_626;

																										BgL_cdrzd2999zd2_626 =
																											CDR(BgL_xz00_5);
																										{	/* Expand/iarith.scm 53 */
																											obj_t
																												BgL_cdrzd21003zd2_627;
																											BgL_cdrzd21003zd2_627 =
																												CDR(((obj_t)
																													BgL_cdrzd2999zd2_626));
																											if (NULLP(CDR(((obj_t)
																															BgL_cdrzd21003zd2_627))))
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_arg1956z00_630;
																													obj_t
																														BgL_arg1957z00_631;
																													BgL_arg1956z00_630 =
																														CAR(((obj_t)
																															BgL_cdrzd2999zd2_626));
																													BgL_arg1957z00_631 =
																														CAR(((obj_t)
																															BgL_cdrzd21003zd2_627));
																													{
																														obj_t BgL_yz00_4440;
																														obj_t BgL_xz00_4439;

																														BgL_xz00_4439 =
																															BgL_arg1956z00_630;
																														BgL_yz00_4440 =
																															BgL_arg1957z00_631;
																														BgL_yz00_69 =
																															BgL_yz00_4440;
																														BgL_xz00_68 =
																															BgL_xz00_4439;
																														goto
																															BgL_tagzd2105zd2_70;
																													}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													goto
																														BgL_tagzd2106zd2_71;
																												}
																										}
																									}
																							}
																						else
																							{	/* Expand/iarith.scm 53 */
																								obj_t BgL_cdrzd21014zd2_634;

																								BgL_cdrzd21014zd2_634 =
																									CDR(BgL_xz00_5);
																								{	/* Expand/iarith.scm 53 */
																									obj_t BgL_cdrzd21018zd2_635;

																									BgL_cdrzd21018zd2_635 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd21014zd2_634));
																									if (NULLP(CDR(((obj_t)
																													BgL_cdrzd21018zd2_635))))
																										{	/* Expand/iarith.scm 53 */
																											obj_t BgL_arg1962z00_638;
																											obj_t BgL_arg1963z00_639;

																											BgL_arg1962z00_638 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd21014zd2_634));
																											BgL_arg1963z00_639 =
																												CAR(((obj_t)
																													BgL_cdrzd21018zd2_635));
																											{
																												obj_t BgL_yz00_4453;
																												obj_t BgL_xz00_4452;

																												BgL_xz00_4452 =
																													BgL_arg1962z00_638;
																												BgL_yz00_4453 =
																													BgL_arg1963z00_639;
																												BgL_yz00_69 =
																													BgL_yz00_4453;
																												BgL_xz00_68 =
																													BgL_xz00_4452;
																												goto
																													BgL_tagzd2105zd2_70;
																											}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											goto BgL_tagzd2106zd2_71;
																										}
																								}
																							}
																					}
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 53 */
																			bool_t BgL_test3735z00_4454;

																			{	/* Expand/iarith.scm 53 */
																				obj_t BgL_tmpz00_4455;

																				BgL_tmpz00_4455 =
																					CAR(((obj_t) BgL_cdrzd2112zd2_74));
																				BgL_test3735z00_4454 =
																					CHARP(BgL_tmpz00_4455);
																			}
																			if (BgL_test3735z00_4454)
																				{	/* Expand/iarith.scm 53 */
																					bool_t BgL_test3736z00_4459;

																					{	/* Expand/iarith.scm 53 */
																						obj_t BgL_tmpz00_4460;

																						BgL_tmpz00_4460 =
																							CAR(
																							((obj_t) BgL_cdrzd2629zd2_389));
																						BgL_test3736z00_4459 =
																							CHARP(BgL_tmpz00_4460);
																					}
																					if (BgL_test3736z00_4459)
																						{	/* Expand/iarith.scm 53 */
																							if (NULLP(CDR(
																										((obj_t)
																											BgL_cdrzd2629zd2_389))))
																								{	/* Expand/iarith.scm 53 */
																									return BFALSE;
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									goto BgL_tagzd2106zd2_71;
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 53 */
																							obj_t BgL_cdrzd21043zd2_652;

																							BgL_cdrzd21043zd2_652 =
																								CDR(BgL_xz00_5);
																							{	/* Expand/iarith.scm 53 */
																								obj_t BgL_cdrzd21048zd2_653;

																								BgL_cdrzd21048zd2_653 =
																									CDR(
																									((obj_t)
																										BgL_cdrzd21043zd2_652));
																								if (NULLP(CDR(((obj_t)
																												BgL_cdrzd21048zd2_653))))
																									{	/* Expand/iarith.scm 53 */
																										obj_t BgL_arg1976z00_656;
																										obj_t BgL_arg1977z00_657;

																										BgL_arg1976z00_656 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd21043zd2_652));
																										BgL_arg1977z00_657 =
																											CAR(((obj_t)
																												BgL_cdrzd21048zd2_653));
																										{
																											obj_t BgL_yz00_4480;
																											obj_t BgL_xz00_4479;

																											BgL_xz00_4479 =
																												BgL_arg1976z00_656;
																											BgL_yz00_4480 =
																												BgL_arg1977z00_657;
																											BgL_yz00_69 =
																												BgL_yz00_4480;
																											BgL_xz00_68 =
																												BgL_xz00_4479;
																											goto BgL_tagzd2105zd2_70;
																										}
																									}
																								else
																									{	/* Expand/iarith.scm 53 */
																										goto BgL_tagzd2106zd2_71;
																									}
																							}
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 53 */
																					obj_t BgL_cdrzd21061zd2_660;

																					BgL_cdrzd21061zd2_660 =
																						CDR(BgL_xz00_5);
																					{	/* Expand/iarith.scm 53 */
																						obj_t BgL_cdrzd21066zd2_661;

																						BgL_cdrzd21066zd2_661 =
																							CDR(
																							((obj_t) BgL_cdrzd21061zd2_660));
																						if (NULLP(CDR(
																									((obj_t)
																										BgL_cdrzd21066zd2_661))))
																							{	/* Expand/iarith.scm 53 */
																								obj_t BgL_arg1983z00_664;
																								obj_t BgL_arg1984z00_665;

																								BgL_arg1983z00_664 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd21061zd2_660));
																								BgL_arg1984z00_665 =
																									CAR(((obj_t)
																										BgL_cdrzd21066zd2_661));
																								{
																									obj_t BgL_yz00_4493;
																									obj_t BgL_xz00_4492;

																									BgL_xz00_4492 =
																										BgL_arg1983z00_664;
																									BgL_yz00_4493 =
																										BgL_arg1984z00_665;
																									BgL_yz00_69 = BgL_yz00_4493;
																									BgL_xz00_68 = BgL_xz00_4492;
																									goto BgL_tagzd2105zd2_70;
																								}
																							}
																						else
																							{	/* Expand/iarith.scm 53 */
																								goto BgL_tagzd2106zd2_71;
																							}
																					}
																				}
																		}
																}
														}
												}
											else
												{	/* Expand/iarith.scm 53 */
													goto BgL_tagzd2106zd2_71;
												}
										}
									else
										{	/* Expand/iarith.scm 53 */
											obj_t BgL_carzd21091zd2_670;
											obj_t BgL_cdrzd21092zd2_671;

											BgL_carzd21091zd2_670 =
												CAR(((obj_t) BgL_cdrzd2112zd2_74));
											BgL_cdrzd21092zd2_671 =
												CDR(((obj_t) BgL_cdrzd2112zd2_74));
											if (PAIRP(BgL_carzd21091zd2_670))
												{	/* Expand/iarith.scm 53 */
													obj_t BgL_cdrzd21095zd2_673;

													BgL_cdrzd21095zd2_673 = CDR(BgL_carzd21091zd2_670);
													if (
														(CAR(BgL_carzd21091zd2_670) ==
															CNST_TABLE_REF(((long) 1))))
														{	/* Expand/iarith.scm 53 */
															if (PAIRP(BgL_cdrzd21095zd2_673))
																{	/* Expand/iarith.scm 53 */
																	obj_t BgL_yz00_677;

																	BgL_yz00_677 = CAR(BgL_cdrzd21095zd2_673);
																	if (NULLP(CDR(BgL_cdrzd21095zd2_673)))
																		{	/* Expand/iarith.scm 53 */
																			if (PAIRP(BgL_cdrzd21092zd2_671))
																				{	/* Expand/iarith.scm 53 */
																					obj_t BgL_carzd21101zd2_681;

																					BgL_carzd21101zd2_681 =
																						CAR(BgL_cdrzd21092zd2_671);
																					if (PAIRP(BgL_carzd21101zd2_681))
																						{	/* Expand/iarith.scm 53 */
																							obj_t BgL_cdrzd21105zd2_683;

																							BgL_cdrzd21105zd2_683 =
																								CDR(BgL_carzd21101zd2_681);
																							if (
																								(CAR(BgL_carzd21101zd2_681) ==
																									CNST_TABLE_REF(((long) 1))))
																								{	/* Expand/iarith.scm 53 */
																									if (PAIRP
																										(BgL_cdrzd21105zd2_683))
																										{	/* Expand/iarith.scm 53 */
																											if (
																												(BgL_yz00_677 ==
																													CAR
																													(BgL_cdrzd21105zd2_683)))
																												{	/* Expand/iarith.scm 53 */
																													if (NULLP(CDR
																															(BgL_cdrzd21105zd2_683)))
																														{	/* Expand/iarith.scm 53 */
																															if (NULLP(CDR
																																	(BgL_cdrzd21092zd2_671)))
																																{	/* Expand/iarith.scm 53 */
																																	return BTRUE;
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	goto
																																		BgL_tagzd2106zd2_71;
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_cdrzd21123zd2_694;
																															BgL_cdrzd21123zd2_694
																																=
																																CDR(BgL_xz00_5);
																															{	/* Expand/iarith.scm 53 */
																																obj_t
																																	BgL_cdrzd21125zd2_695;
																																BgL_cdrzd21125zd2_695
																																	=
																																	CDR(((obj_t)
																																		BgL_cdrzd21123zd2_694));
																																{	/* Expand/iarith.scm 53 */
																																	bool_t
																																		BgL_test3751z00_4535;
																																	{	/* Expand/iarith.scm 53 */
																																		obj_t
																																			BgL_tmpz00_4536;
																																		BgL_tmpz00_4536
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd21123zd2_694));
																																		BgL_test3751z00_4535
																																			=
																																			CHARP
																																			(BgL_tmpz00_4536);
																																	}
																																	if (BgL_test3751z00_4535)
																																		{	/* Expand/iarith.scm 53 */
																																			bool_t
																																				BgL_test3752z00_4540;
																																			{	/* Expand/iarith.scm 53 */
																																				obj_t
																																					BgL_tmpz00_4541;
																																				BgL_tmpz00_4541
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_cdrzd21125zd2_695));
																																				BgL_test3752z00_4540
																																					=
																																					CHARP
																																					(BgL_tmpz00_4541);
																																			}
																																			if (BgL_test3752z00_4540)
																																				{	/* Expand/iarith.scm 53 */
																																					if (NULLP(CDR(((obj_t) BgL_cdrzd21125zd2_695))))
																																						{	/* Expand/iarith.scm 53 */
																																							return
																																								BFALSE;
																																						}
																																					else
																																						{	/* Expand/iarith.scm 53 */
																																							goto
																																								BgL_tagzd2106zd2_71;
																																						}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 53 */
																																					if (NULLP(CDR(((obj_t) BgL_cdrzd21125zd2_695))))
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_arg2018z00_707;
																																							obj_t
																																								BgL_arg2020z00_708;
																																							BgL_arg2018z00_707
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd21123zd2_694));
																																							BgL_arg2020z00_708
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd21125zd2_695));
																																							{
																																								obj_t
																																									BgL_yz00_4558;
																																								obj_t
																																									BgL_xz00_4557;
																																								BgL_xz00_4557
																																									=
																																									BgL_arg2018z00_707;
																																								BgL_yz00_4558
																																									=
																																									BgL_arg2020z00_708;
																																								BgL_yz00_69
																																									=
																																									BgL_yz00_4558;
																																								BgL_xz00_68
																																									=
																																									BgL_xz00_4557;
																																								goto
																																									BgL_tagzd2105zd2_70;
																																							}
																																						}
																																					else
																																						{	/* Expand/iarith.scm 53 */
																																							goto
																																								BgL_tagzd2106zd2_71;
																																						}
																																				}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			if (NULLP
																																				(CDR(((obj_t) BgL_cdrzd21125zd2_695))))
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_arg2026z00_715;
																																					obj_t
																																						BgL_arg2028z00_716;
																																					BgL_arg2026z00_715
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd21123zd2_694));
																																					BgL_arg2028z00_716
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd21125zd2_695));
																																					{
																																						obj_t
																																							BgL_yz00_4568;
																																						obj_t
																																							BgL_xz00_4567;
																																						BgL_xz00_4567
																																							=
																																							BgL_arg2026z00_715;
																																						BgL_yz00_4568
																																							=
																																							BgL_arg2028z00_716;
																																						BgL_yz00_69
																																							=
																																							BgL_yz00_4568;
																																						BgL_xz00_68
																																							=
																																							BgL_xz00_4567;
																																						goto
																																							BgL_tagzd2105zd2_70;
																																					}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 53 */
																																					goto
																																						BgL_tagzd2106zd2_71;
																																				}
																																		}
																																}
																															}
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_cdrzd21165zd2_720;
																													BgL_cdrzd21165zd2_720
																														= CDR(BgL_xz00_5);
																													{	/* Expand/iarith.scm 53 */
																														obj_t
																															BgL_cdrzd21167zd2_721;
																														BgL_cdrzd21167zd2_721
																															=
																															CDR(((obj_t)
																																BgL_cdrzd21165zd2_720));
																														{	/* Expand/iarith.scm 53 */
																															bool_t
																																BgL_test3756z00_4572;
																															{	/* Expand/iarith.scm 53 */
																																obj_t
																																	BgL_tmpz00_4573;
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_pairz00_2558;
																																	{	/* Expand/iarith.scm 53 */
																																		obj_t
																																			BgL_pairz00_2557;
																																		BgL_pairz00_2557
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd21165zd2_720));
																																		BgL_pairz00_2558
																																			=
																																			CDR
																																			(BgL_pairz00_2557);
																																	}
																																	BgL_tmpz00_4573
																																		=
																																		CAR
																																		(BgL_pairz00_2558);
																																}
																																BgL_test3756z00_4572
																																	=
																																	SYMBOLP
																																	(BgL_tmpz00_4573);
																															}
																															if (BgL_test3756z00_4572)
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_cdrzd21175zd2_726;
																																	{	/* Expand/iarith.scm 53 */
																																		obj_t
																																			BgL_pairz00_2561;
																																		BgL_pairz00_2561
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd21167zd2_721));
																																		BgL_cdrzd21175zd2_726
																																			=
																																			CDR
																																			(BgL_pairz00_2561);
																																	}
																																	{	/* Expand/iarith.scm 53 */
																																		bool_t
																																			BgL_test3757z00_4582;
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_tmpz00_4583;
																																			BgL_tmpz00_4583
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd21175zd2_726));
																																			BgL_test3757z00_4582
																																				=
																																				SYMBOLP
																																				(BgL_tmpz00_4583);
																																		}
																																		if (BgL_test3757z00_4582)
																																			{	/* Expand/iarith.scm 53 */
																																				if (NULLP(CDR(((obj_t) BgL_cdrzd21175zd2_726))))
																																					{	/* Expand/iarith.scm 53 */
																																						if (NULLP(CDR(((obj_t) BgL_cdrzd21167zd2_721))))
																																							{	/* Expand/iarith.scm 53 */
																																								return
																																									BFALSE;
																																							}
																																						else
																																							{	/* Expand/iarith.scm 53 */
																																								goto
																																									BgL_tagzd2106zd2_71;
																																							}
																																					}
																																				else
																																					{	/* Expand/iarith.scm 53 */
																																						bool_t
																																							BgL_test3760z00_4595;
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_tmpz00_4596;
																																							BgL_tmpz00_4596
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd21165zd2_720));
																																							BgL_test3760z00_4595
																																								=
																																								CHARP
																																								(BgL_tmpz00_4596);
																																						}
																																						if (BgL_test3760z00_4595)
																																							{	/* Expand/iarith.scm 53 */
																																								bool_t
																																									BgL_test3761z00_4600;
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_tmpz00_4601;
																																									BgL_tmpz00_4601
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd21167zd2_721));
																																									BgL_test3761z00_4600
																																										=
																																										CHARP
																																										(BgL_tmpz00_4601);
																																								}
																																								if (BgL_test3761z00_4600)
																																									{	/* Expand/iarith.scm 53 */
																																										if (NULLP(CDR(((obj_t) BgL_cdrzd21167zd2_721))))
																																											{	/* Expand/iarith.scm 53 */
																																												return
																																													BFALSE;
																																											}
																																										else
																																											{	/* Expand/iarith.scm 53 */
																																												goto
																																													BgL_tagzd2106zd2_71;
																																											}
																																									}
																																								else
																																									{	/* Expand/iarith.scm 53 */
																																										obj_t
																																											BgL_cdrzd21201zd2_743;
																																										BgL_cdrzd21201zd2_743
																																											=
																																											CDR
																																											(BgL_xz00_5);
																																										{	/* Expand/iarith.scm 53 */
																																											obj_t
																																												BgL_cdrzd21205zd2_744;
																																											BgL_cdrzd21205zd2_744
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd21201zd2_743));
																																											if (NULLP(CDR(((obj_t) BgL_cdrzd21205zd2_744))))
																																												{	/* Expand/iarith.scm 53 */
																																													obj_t
																																														BgL_arg2057z00_747;
																																													obj_t
																																														BgL_arg2059z00_748;
																																													BgL_arg2057z00_747
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd21201zd2_743));
																																													BgL_arg2059z00_748
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_cdrzd21205zd2_744));
																																													{
																																														obj_t
																																															BgL_yz00_4621;
																																														obj_t
																																															BgL_xz00_4620;
																																														BgL_xz00_4620
																																															=
																																															BgL_arg2057z00_747;
																																														BgL_yz00_4621
																																															=
																																															BgL_arg2059z00_748;
																																														BgL_yz00_69
																																															=
																																															BgL_yz00_4621;
																																														BgL_xz00_68
																																															=
																																															BgL_xz00_4620;
																																														goto
																																															BgL_tagzd2105zd2_70;
																																													}
																																												}
																																											else
																																												{	/* Expand/iarith.scm 53 */
																																													goto
																																														BgL_tagzd2106zd2_71;
																																												}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 53 */
																																								obj_t
																																									BgL_cdrzd21216zd2_751;
																																								BgL_cdrzd21216zd2_751
																																									=
																																									CDR
																																									(BgL_xz00_5);
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_cdrzd21220zd2_752;
																																									BgL_cdrzd21220zd2_752
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd21216zd2_751));
																																									if (NULLP(CDR(((obj_t) BgL_cdrzd21220zd2_752))))
																																										{	/* Expand/iarith.scm 53 */
																																											obj_t
																																												BgL_arg2065z00_755;
																																											obj_t
																																												BgL_arg2066z00_756;
																																											BgL_arg2065z00_755
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd21216zd2_751));
																																											BgL_arg2066z00_756
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd21220zd2_752));
																																											{
																																												obj_t
																																													BgL_yz00_4634;
																																												obj_t
																																													BgL_xz00_4633;
																																												BgL_xz00_4633
																																													=
																																													BgL_arg2065z00_755;
																																												BgL_yz00_4634
																																													=
																																													BgL_arg2066z00_756;
																																												BgL_yz00_69
																																													=
																																													BgL_yz00_4634;
																																												BgL_xz00_68
																																													=
																																													BgL_xz00_4633;
																																												goto
																																													BgL_tagzd2105zd2_70;
																																											}
																																										}
																																									else
																																										{	/* Expand/iarith.scm 53 */
																																											goto
																																												BgL_tagzd2106zd2_71;
																																										}
																																								}
																																							}
																																					}
																																			}
																																		else
																																			{	/* Expand/iarith.scm 53 */
																																				bool_t
																																					BgL_test3765z00_4635;
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_tmpz00_4636;
																																					BgL_tmpz00_4636
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd21165zd2_720));
																																					BgL_test3765z00_4635
																																						=
																																						CHARP
																																						(BgL_tmpz00_4636);
																																				}
																																				if (BgL_test3765z00_4635)
																																					{	/* Expand/iarith.scm 53 */
																																						bool_t
																																							BgL_test3766z00_4640;
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_tmpz00_4641;
																																							BgL_tmpz00_4641
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_cdrzd21167zd2_721));
																																							BgL_test3766z00_4640
																																								=
																																								CHARP
																																								(BgL_tmpz00_4641);
																																						}
																																						if (BgL_test3766z00_4640)
																																							{	/* Expand/iarith.scm 53 */
																																								if (NULLP(CDR(((obj_t) BgL_cdrzd21167zd2_721))))
																																									{	/* Expand/iarith.scm 53 */
																																										return
																																											BFALSE;
																																									}
																																								else
																																									{	/* Expand/iarith.scm 53 */
																																										goto
																																											BgL_tagzd2106zd2_71;
																																									}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 53 */
																																								obj_t
																																									BgL_cdrzd21243zd2_769;
																																								BgL_cdrzd21243zd2_769
																																									=
																																									CDR
																																									(BgL_xz00_5);
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_cdrzd21247zd2_770;
																																									BgL_cdrzd21247zd2_770
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd21243zd2_769));
																																									if (NULLP(CDR(((obj_t) BgL_cdrzd21247zd2_770))))
																																										{	/* Expand/iarith.scm 53 */
																																											obj_t
																																												BgL_arg2082z00_773;
																																											obj_t
																																												BgL_arg2083z00_774;
																																											BgL_arg2082z00_773
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd21243zd2_769));
																																											BgL_arg2083z00_774
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd21247zd2_770));
																																											{
																																												obj_t
																																													BgL_yz00_4661;
																																												obj_t
																																													BgL_xz00_4660;
																																												BgL_xz00_4660
																																													=
																																													BgL_arg2082z00_773;
																																												BgL_yz00_4661
																																													=
																																													BgL_arg2083z00_774;
																																												BgL_yz00_69
																																													=
																																													BgL_yz00_4661;
																																												BgL_xz00_68
																																													=
																																													BgL_xz00_4660;
																																												goto
																																													BgL_tagzd2105zd2_70;
																																											}
																																										}
																																									else
																																										{	/* Expand/iarith.scm 53 */
																																											goto
																																												BgL_tagzd2106zd2_71;
																																										}
																																								}
																																							}
																																					}
																																				else
																																					{	/* Expand/iarith.scm 53 */
																																						obj_t
																																							BgL_cdrzd21258zd2_777;
																																						BgL_cdrzd21258zd2_777
																																							=
																																							CDR
																																							(BgL_xz00_5);
																																						{	/* Expand/iarith.scm 53 */
																																							obj_t
																																								BgL_cdrzd21262zd2_778;
																																							BgL_cdrzd21262zd2_778
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_cdrzd21258zd2_777));
																																							if (NULLP(CDR(((obj_t) BgL_cdrzd21262zd2_778))))
																																								{	/* Expand/iarith.scm 53 */
																																									obj_t
																																										BgL_arg2088z00_781;
																																									obj_t
																																										BgL_arg2089z00_782;
																																									BgL_arg2088z00_781
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd21258zd2_777));
																																									BgL_arg2089z00_782
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd21262zd2_778));
																																									{
																																										obj_t
																																											BgL_yz00_4674;
																																										obj_t
																																											BgL_xz00_4673;
																																										BgL_xz00_4673
																																											=
																																											BgL_arg2088z00_781;
																																										BgL_yz00_4674
																																											=
																																											BgL_arg2089z00_782;
																																										BgL_yz00_69
																																											=
																																											BgL_yz00_4674;
																																										BgL_xz00_68
																																											=
																																											BgL_xz00_4673;
																																										goto
																																											BgL_tagzd2105zd2_70;
																																									}
																																								}
																																							else
																																								{	/* Expand/iarith.scm 53 */
																																									goto
																																										BgL_tagzd2106zd2_71;
																																								}
																																						}
																																					}
																																			}
																																	}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	bool_t
																																		BgL_test3770z00_4675;
																																	{	/* Expand/iarith.scm 53 */
																																		obj_t
																																			BgL_tmpz00_4676;
																																		BgL_tmpz00_4676
																																			=
																																			CAR((
																																				(obj_t)
																																				BgL_cdrzd21165zd2_720));
																																		BgL_test3770z00_4675
																																			=
																																			CHARP
																																			(BgL_tmpz00_4676);
																																	}
																																	if (BgL_test3770z00_4675)
																																		{	/* Expand/iarith.scm 53 */
																																			bool_t
																																				BgL_test3771z00_4680;
																																			{	/* Expand/iarith.scm 53 */
																																				obj_t
																																					BgL_tmpz00_4681;
																																				BgL_tmpz00_4681
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_cdrzd21167zd2_721));
																																				BgL_test3771z00_4680
																																					=
																																					CHARP
																																					(BgL_tmpz00_4681);
																																			}
																																			if (BgL_test3771z00_4680)
																																				{	/* Expand/iarith.scm 53 */
																																					if (NULLP(CDR(((obj_t) BgL_cdrzd21167zd2_721))))
																																						{	/* Expand/iarith.scm 53 */
																																							return
																																								BFALSE;
																																						}
																																					else
																																						{	/* Expand/iarith.scm 53 */
																																							goto
																																								BgL_tagzd2106zd2_71;
																																						}
																																				}
																																			else
																																				{	/* Expand/iarith.scm 53 */
																																					obj_t
																																						BgL_cdrzd21285zd2_796;
																																					BgL_cdrzd21285zd2_796
																																						=
																																						CDR
																																						(BgL_xz00_5);
																																					{	/* Expand/iarith.scm 53 */
																																						obj_t
																																							BgL_cdrzd21289zd2_797;
																																						BgL_cdrzd21289zd2_797
																																							=
																																							CDR
																																							(((obj_t) BgL_cdrzd21285zd2_796));
																																						if (NULLP(CDR(((obj_t) BgL_cdrzd21289zd2_797))))
																																							{	/* Expand/iarith.scm 53 */
																																								obj_t
																																									BgL_arg2103z00_800;
																																								obj_t
																																									BgL_arg2104z00_801;
																																								BgL_arg2103z00_800
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_cdrzd21285zd2_796));
																																								BgL_arg2104z00_801
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_cdrzd21289zd2_797));
																																								{
																																									obj_t
																																										BgL_yz00_4701;
																																									obj_t
																																										BgL_xz00_4700;
																																									BgL_xz00_4700
																																										=
																																										BgL_arg2103z00_800;
																																									BgL_yz00_4701
																																										=
																																										BgL_arg2104z00_801;
																																									BgL_yz00_69
																																										=
																																										BgL_yz00_4701;
																																									BgL_xz00_68
																																										=
																																										BgL_xz00_4700;
																																									goto
																																										BgL_tagzd2105zd2_70;
																																								}
																																							}
																																						else
																																							{	/* Expand/iarith.scm 53 */
																																								goto
																																									BgL_tagzd2106zd2_71;
																																							}
																																					}
																																				}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_cdrzd21300zd2_804;
																																			BgL_cdrzd21300zd2_804
																																				=
																																				CDR
																																				(BgL_xz00_5);
																																			{	/* Expand/iarith.scm 53 */
																																				obj_t
																																					BgL_cdrzd21304zd2_805;
																																				BgL_cdrzd21304zd2_805
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_cdrzd21300zd2_804));
																																				if (NULLP(CDR(((obj_t) BgL_cdrzd21304zd2_805))))
																																					{	/* Expand/iarith.scm 53 */
																																						obj_t
																																							BgL_arg2109z00_808;
																																						obj_t
																																							BgL_arg2110z00_809;
																																						BgL_arg2109z00_808
																																							=
																																							CAR
																																							(((obj_t) BgL_cdrzd21300zd2_804));
																																						BgL_arg2110z00_809
																																							=
																																							CAR
																																							(((obj_t) BgL_cdrzd21304zd2_805));
																																						{
																																							obj_t
																																								BgL_yz00_4714;
																																							obj_t
																																								BgL_xz00_4713;
																																							BgL_xz00_4713
																																								=
																																								BgL_arg2109z00_808;
																																							BgL_yz00_4714
																																								=
																																								BgL_arg2110z00_809;
																																							BgL_yz00_69
																																								=
																																								BgL_yz00_4714;
																																							BgL_xz00_68
																																								=
																																								BgL_xz00_4713;
																																							goto
																																								BgL_tagzd2105zd2_70;
																																						}
																																					}
																																				else
																																					{	/* Expand/iarith.scm 53 */
																																						goto
																																							BgL_tagzd2106zd2_71;
																																					}
																																			}
																																		}
																																}
																														}
																													}
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											obj_t
																												BgL_cdrzd21315zd2_816;
																											BgL_cdrzd21315zd2_816 =
																												CDR(BgL_xz00_5);
																											{	/* Expand/iarith.scm 53 */
																												obj_t
																													BgL_cdrzd21317zd2_817;
																												BgL_cdrzd21317zd2_817 =
																													CDR(((obj_t)
																														BgL_cdrzd21315zd2_816));
																												{	/* Expand/iarith.scm 53 */
																													bool_t
																														BgL_test3775z00_4718;
																													{	/* Expand/iarith.scm 53 */
																														obj_t
																															BgL_tmpz00_4719;
																														BgL_tmpz00_4719 =
																															CAR(((obj_t)
																																BgL_cdrzd21315zd2_816));
																														BgL_test3775z00_4718
																															=
																															CHARP
																															(BgL_tmpz00_4719);
																													}
																													if (BgL_test3775z00_4718)
																														{	/* Expand/iarith.scm 53 */
																															bool_t
																																BgL_test3776z00_4723;
																															{	/* Expand/iarith.scm 53 */
																																obj_t
																																	BgL_tmpz00_4724;
																																BgL_tmpz00_4724
																																	=
																																	CAR(((obj_t)
																																		BgL_cdrzd21317zd2_817));
																																BgL_test3776z00_4723
																																	=
																																	CHARP
																																	(BgL_tmpz00_4724);
																															}
																															if (BgL_test3776z00_4723)
																																{	/* Expand/iarith.scm 53 */
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd21317zd2_817))))
																																		{	/* Expand/iarith.scm 53 */
																																			return
																																				BFALSE;
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			goto
																																				BgL_tagzd2106zd2_71;
																																		}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd21317zd2_817))))
																																		{	/* Expand/iarith.scm 53 */
																																			obj_t
																																				BgL_arg2128z00_829;
																																			obj_t
																																				BgL_arg2129z00_830;
																																			BgL_arg2128z00_829
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd21315zd2_816));
																																			BgL_arg2129z00_830
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_cdrzd21317zd2_817));
																																			{
																																				obj_t
																																					BgL_yz00_4741;
																																				obj_t
																																					BgL_xz00_4740;
																																				BgL_xz00_4740
																																					=
																																					BgL_arg2128z00_829;
																																				BgL_yz00_4741
																																					=
																																					BgL_arg2129z00_830;
																																				BgL_yz00_69
																																					=
																																					BgL_yz00_4741;
																																				BgL_xz00_68
																																					=
																																					BgL_xz00_4740;
																																				goto
																																					BgL_tagzd2105zd2_70;
																																			}
																																		}
																																	else
																																		{	/* Expand/iarith.scm 53 */
																																			goto
																																				BgL_tagzd2106zd2_71;
																																		}
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															if (NULLP(CDR(
																																		((obj_t)
																																			BgL_cdrzd21317zd2_817))))
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_arg2134z00_837;
																																	obj_t
																																		BgL_arg2135z00_838;
																																	BgL_arg2134z00_837
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd21315zd2_816));
																																	BgL_arg2135z00_838
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd21317zd2_817));
																																	{
																																		obj_t
																																			BgL_yz00_4751;
																																		obj_t
																																			BgL_xz00_4750;
																																		BgL_xz00_4750
																																			=
																																			BgL_arg2134z00_837;
																																		BgL_yz00_4751
																																			=
																																			BgL_arg2135z00_838;
																																		BgL_yz00_69
																																			=
																																			BgL_yz00_4751;
																																		BgL_xz00_68
																																			=
																																			BgL_xz00_4750;
																																		goto
																																			BgL_tagzd2105zd2_70;
																																	}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	goto
																																		BgL_tagzd2106zd2_71;
																																}
																														}
																												}
																											}
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									obj_t BgL_cdrzd21359zd2_841;

																									BgL_cdrzd21359zd2_841 =
																										CDR(BgL_xz00_5);
																									{	/* Expand/iarith.scm 53 */
																										obj_t BgL_cdrzd21361zd2_842;

																										BgL_cdrzd21361zd2_842 =
																											CDR(
																											((obj_t)
																												BgL_cdrzd21359zd2_841));
																										{	/* Expand/iarith.scm 53 */
																											bool_t
																												BgL_test3780z00_4755;
																											{	/* Expand/iarith.scm 53 */
																												obj_t BgL_tmpz00_4756;

																												BgL_tmpz00_4756 =
																													CAR(
																													((obj_t)
																														BgL_cdrzd21359zd2_841));
																												BgL_test3780z00_4755 =
																													CHARP
																													(BgL_tmpz00_4756);
																											}
																											if (BgL_test3780z00_4755)
																												{	/* Expand/iarith.scm 53 */
																													bool_t
																														BgL_test3781z00_4760;
																													{	/* Expand/iarith.scm 53 */
																														obj_t
																															BgL_tmpz00_4761;
																														BgL_tmpz00_4761 =
																															CAR(((obj_t)
																																BgL_cdrzd21361zd2_842));
																														BgL_test3781z00_4760
																															=
																															CHARP
																															(BgL_tmpz00_4761);
																													}
																													if (BgL_test3781z00_4760)
																														{	/* Expand/iarith.scm 53 */
																															if (NULLP(CDR(
																																		((obj_t)
																																			BgL_cdrzd21361zd2_842))))
																																{	/* Expand/iarith.scm 53 */
																																	return BFALSE;
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	goto
																																		BgL_tagzd2106zd2_71;
																																}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															if (NULLP(CDR(
																																		((obj_t)
																																			BgL_cdrzd21361zd2_842))))
																																{	/* Expand/iarith.scm 53 */
																																	obj_t
																																		BgL_arg2147z00_854;
																																	obj_t
																																		BgL_arg2148z00_855;
																																	BgL_arg2147z00_854
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd21359zd2_841));
																																	BgL_arg2148z00_855
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd21361zd2_842));
																																	{
																																		obj_t
																																			BgL_yz00_4778;
																																		obj_t
																																			BgL_xz00_4777;
																																		BgL_xz00_4777
																																			=
																																			BgL_arg2147z00_854;
																																		BgL_yz00_4778
																																			=
																																			BgL_arg2148z00_855;
																																		BgL_yz00_69
																																			=
																																			BgL_yz00_4778;
																																		BgL_xz00_68
																																			=
																																			BgL_xz00_4777;
																																		goto
																																			BgL_tagzd2105zd2_70;
																																	}
																																}
																															else
																																{	/* Expand/iarith.scm 53 */
																																	goto
																																		BgL_tagzd2106zd2_71;
																																}
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													if (NULLP(CDR(
																																((obj_t)
																																	BgL_cdrzd21361zd2_842))))
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_arg2154z00_862;
																															obj_t
																																BgL_arg2155z00_863;
																															BgL_arg2154z00_862
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd21359zd2_841));
																															BgL_arg2155z00_863
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd21361zd2_842));
																															{
																																obj_t
																																	BgL_yz00_4788;
																																obj_t
																																	BgL_xz00_4787;
																																BgL_xz00_4787 =
																																	BgL_arg2154z00_862;
																																BgL_yz00_4788 =
																																	BgL_arg2155z00_863;
																																BgL_yz00_69 =
																																	BgL_yz00_4788;
																																BgL_xz00_68 =
																																	BgL_xz00_4787;
																																goto
																																	BgL_tagzd2105zd2_70;
																															}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															goto
																																BgL_tagzd2106zd2_71;
																														}
																												}
																										}
																									}
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 53 */
																							obj_t BgL_cdrzd21403zd2_867;

																							BgL_cdrzd21403zd2_867 =
																								CDR(BgL_xz00_5);
																							{	/* Expand/iarith.scm 53 */
																								obj_t BgL_cdrzd21405zd2_868;

																								BgL_cdrzd21405zd2_868 =
																									CDR(
																									((obj_t)
																										BgL_cdrzd21403zd2_867));
																								{	/* Expand/iarith.scm 53 */
																									bool_t BgL_test3785z00_4792;

																									{	/* Expand/iarith.scm 53 */
																										obj_t BgL_tmpz00_4793;

																										BgL_tmpz00_4793 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd21403zd2_867));
																										BgL_test3785z00_4792 =
																											CHARP(BgL_tmpz00_4793);
																									}
																									if (BgL_test3785z00_4792)
																										{	/* Expand/iarith.scm 53 */
																											bool_t
																												BgL_test3786z00_4797;
																											{	/* Expand/iarith.scm 53 */
																												obj_t BgL_tmpz00_4798;

																												BgL_tmpz00_4798 =
																													CAR(
																													((obj_t)
																														BgL_cdrzd21405zd2_868));
																												BgL_test3786z00_4797 =
																													CHARP
																													(BgL_tmpz00_4798);
																											}
																											if (BgL_test3786z00_4797)
																												{	/* Expand/iarith.scm 53 */
																													if (NULLP(CDR(
																																((obj_t)
																																	BgL_cdrzd21405zd2_868))))
																														{	/* Expand/iarith.scm 53 */
																															return BFALSE;
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															goto
																																BgL_tagzd2106zd2_71;
																														}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													if (NULLP(CDR(
																																((obj_t)
																																	BgL_cdrzd21405zd2_868))))
																														{	/* Expand/iarith.scm 53 */
																															obj_t
																																BgL_arg2168z00_880;
																															obj_t
																																BgL_arg2169z00_881;
																															BgL_arg2168z00_880
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd21403zd2_867));
																															BgL_arg2169z00_881
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd21405zd2_868));
																															{
																																obj_t
																																	BgL_yz00_4815;
																																obj_t
																																	BgL_xz00_4814;
																																BgL_xz00_4814 =
																																	BgL_arg2168z00_880;
																																BgL_yz00_4815 =
																																	BgL_arg2169z00_881;
																																BgL_yz00_69 =
																																	BgL_yz00_4815;
																																BgL_xz00_68 =
																																	BgL_xz00_4814;
																																goto
																																	BgL_tagzd2105zd2_70;
																															}
																														}
																													else
																														{	/* Expand/iarith.scm 53 */
																															goto
																																BgL_tagzd2106zd2_71;
																														}
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											if (NULLP(CDR(
																														((obj_t)
																															BgL_cdrzd21405zd2_868))))
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_arg2175z00_888;
																													obj_t
																														BgL_arg2176z00_889;
																													BgL_arg2175z00_888 =
																														CAR(((obj_t)
																															BgL_cdrzd21403zd2_867));
																													BgL_arg2176z00_889 =
																														CAR(((obj_t)
																															BgL_cdrzd21405zd2_868));
																													{
																														obj_t BgL_yz00_4825;
																														obj_t BgL_xz00_4824;

																														BgL_xz00_4824 =
																															BgL_arg2175z00_888;
																														BgL_yz00_4825 =
																															BgL_arg2176z00_889;
																														BgL_yz00_69 =
																															BgL_yz00_4825;
																														BgL_xz00_68 =
																															BgL_xz00_4824;
																														goto
																															BgL_tagzd2105zd2_70;
																													}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													goto
																														BgL_tagzd2106zd2_71;
																												}
																										}
																								}
																							}
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 53 */
																					goto BgL_tagzd2106zd2_71;
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 53 */
																			obj_t BgL_cdrzd21455zd2_892;

																			BgL_cdrzd21455zd2_892 = CDR(BgL_xz00_5);
																			{	/* Expand/iarith.scm 53 */
																				obj_t BgL_cdrzd21457zd2_893;

																				BgL_cdrzd21457zd2_893 =
																					CDR(((obj_t) BgL_cdrzd21455zd2_892));
																				{	/* Expand/iarith.scm 53 */
																					bool_t BgL_test3790z00_4829;

																					{	/* Expand/iarith.scm 53 */
																						obj_t BgL_tmpz00_4830;

																						BgL_tmpz00_4830 =
																							CAR(
																							((obj_t) BgL_cdrzd21455zd2_892));
																						BgL_test3790z00_4829 =
																							CHARP(BgL_tmpz00_4830);
																					}
																					if (BgL_test3790z00_4829)
																						{	/* Expand/iarith.scm 53 */
																							if (PAIRP(BgL_cdrzd21457zd2_893))
																								{	/* Expand/iarith.scm 53 */
																									bool_t BgL_test3792z00_4836;

																									{	/* Expand/iarith.scm 53 */
																										obj_t BgL_tmpz00_4837;

																										BgL_tmpz00_4837 =
																											CAR
																											(BgL_cdrzd21457zd2_893);
																										BgL_test3792z00_4836 =
																											CHARP(BgL_tmpz00_4837);
																									}
																									if (BgL_test3792z00_4836)
																										{	/* Expand/iarith.scm 53 */
																											if (NULLP(CDR
																													(BgL_cdrzd21457zd2_893)))
																												{	/* Expand/iarith.scm 53 */
																													return BFALSE;
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													goto
																														BgL_tagzd2106zd2_71;
																												}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											if (NULLP(CDR(
																														((obj_t)
																															BgL_cdrzd21457zd2_893))))
																												{	/* Expand/iarith.scm 53 */
																													obj_t
																														BgL_arg2189z00_906;
																													obj_t
																														BgL_arg2190z00_907;
																													BgL_arg2189z00_906 =
																														CAR(((obj_t)
																															BgL_cdrzd21455zd2_892));
																													BgL_arg2190z00_907 =
																														CAR(((obj_t)
																															BgL_cdrzd21457zd2_893));
																													{
																														obj_t BgL_yz00_4852;
																														obj_t BgL_xz00_4851;

																														BgL_xz00_4851 =
																															BgL_arg2189z00_906;
																														BgL_yz00_4852 =
																															BgL_arg2190z00_907;
																														BgL_yz00_69 =
																															BgL_yz00_4852;
																														BgL_xz00_68 =
																															BgL_xz00_4851;
																														goto
																															BgL_tagzd2105zd2_70;
																													}
																												}
																											else
																												{	/* Expand/iarith.scm 53 */
																													goto
																														BgL_tagzd2106zd2_71;
																												}
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									goto BgL_tagzd2106zd2_71;
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 53 */
																							if (PAIRP(BgL_cdrzd21457zd2_893))
																								{	/* Expand/iarith.scm 53 */
																									if (NULLP(CDR
																											(BgL_cdrzd21457zd2_893)))
																										{	/* Expand/iarith.scm 53 */
																											obj_t BgL_arg2196z00_915;
																											obj_t BgL_arg2197z00_916;

																											BgL_arg2196z00_915 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd21455zd2_892));
																											BgL_arg2197z00_916 =
																												CAR
																												(BgL_cdrzd21457zd2_893);
																											{
																												obj_t BgL_yz00_4862;
																												obj_t BgL_xz00_4861;

																												BgL_xz00_4861 =
																													BgL_arg2196z00_915;
																												BgL_yz00_4862 =
																													BgL_arg2197z00_916;
																												BgL_yz00_69 =
																													BgL_yz00_4862;
																												BgL_xz00_68 =
																													BgL_xz00_4861;
																												goto
																													BgL_tagzd2105zd2_70;
																											}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											goto BgL_tagzd2106zd2_71;
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									goto BgL_tagzd2106zd2_71;
																								}
																						}
																				}
																			}
																		}
																}
															else
																{	/* Expand/iarith.scm 53 */
																	obj_t BgL_cdrzd21503zd2_920;

																	BgL_cdrzd21503zd2_920 = CDR(BgL_xz00_5);
																	{	/* Expand/iarith.scm 53 */
																		obj_t BgL_cdrzd21505zd2_921;

																		BgL_cdrzd21505zd2_921 =
																			CDR(((obj_t) BgL_cdrzd21503zd2_920));
																		{	/* Expand/iarith.scm 53 */
																			bool_t BgL_test3797z00_4866;

																			{	/* Expand/iarith.scm 53 */
																				obj_t BgL_tmpz00_4867;

																				BgL_tmpz00_4867 =
																					CAR(((obj_t) BgL_cdrzd21503zd2_920));
																				BgL_test3797z00_4866 =
																					CHARP(BgL_tmpz00_4867);
																			}
																			if (BgL_test3797z00_4866)
																				{	/* Expand/iarith.scm 53 */
																					if (PAIRP(BgL_cdrzd21505zd2_921))
																						{	/* Expand/iarith.scm 53 */
																							bool_t BgL_test3799z00_4873;

																							{	/* Expand/iarith.scm 53 */
																								obj_t BgL_tmpz00_4874;

																								BgL_tmpz00_4874 =
																									CAR(BgL_cdrzd21505zd2_921);
																								BgL_test3799z00_4873 =
																									CHARP(BgL_tmpz00_4874);
																							}
																							if (BgL_test3799z00_4873)
																								{	/* Expand/iarith.scm 53 */
																									if (NULLP(CDR
																											(BgL_cdrzd21505zd2_921)))
																										{	/* Expand/iarith.scm 53 */
																											return BFALSE;
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											goto BgL_tagzd2106zd2_71;
																										}
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_cdrzd21505zd2_921))))
																										{	/* Expand/iarith.scm 53 */
																											obj_t BgL_arg2211z00_934;
																											obj_t BgL_arg2212z00_935;

																											BgL_arg2211z00_934 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd21503zd2_920));
																											BgL_arg2212z00_935 =
																												CAR(((obj_t)
																													BgL_cdrzd21505zd2_921));
																											{
																												obj_t BgL_yz00_4889;
																												obj_t BgL_xz00_4888;

																												BgL_xz00_4888 =
																													BgL_arg2211z00_934;
																												BgL_yz00_4889 =
																													BgL_arg2212z00_935;
																												BgL_yz00_69 =
																													BgL_yz00_4889;
																												BgL_xz00_68 =
																													BgL_xz00_4888;
																												goto
																													BgL_tagzd2105zd2_70;
																											}
																										}
																									else
																										{	/* Expand/iarith.scm 53 */
																											goto BgL_tagzd2106zd2_71;
																										}
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 53 */
																							goto BgL_tagzd2106zd2_71;
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 53 */
																					if (PAIRP(BgL_cdrzd21505zd2_921))
																						{	/* Expand/iarith.scm 53 */
																							if (NULLP(CDR
																									(BgL_cdrzd21505zd2_921)))
																								{	/* Expand/iarith.scm 53 */
																									obj_t BgL_arg2218z00_943;
																									obj_t BgL_arg2219z00_944;

																									BgL_arg2218z00_943 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd21503zd2_920));
																									BgL_arg2219z00_944 =
																										CAR(BgL_cdrzd21505zd2_921);
																									{
																										obj_t BgL_yz00_4899;
																										obj_t BgL_xz00_4898;

																										BgL_xz00_4898 =
																											BgL_arg2218z00_943;
																										BgL_yz00_4899 =
																											BgL_arg2219z00_944;
																										BgL_yz00_69 = BgL_yz00_4899;
																										BgL_xz00_68 = BgL_xz00_4898;
																										goto BgL_tagzd2105zd2_70;
																									}
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									goto BgL_tagzd2106zd2_71;
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 53 */
																							goto BgL_tagzd2106zd2_71;
																						}
																				}
																		}
																	}
																}
														}
													else
														{	/* Expand/iarith.scm 53 */
															obj_t BgL_cdrzd21551zd2_947;

															BgL_cdrzd21551zd2_947 = CDR(BgL_xz00_5);
															{	/* Expand/iarith.scm 53 */
																obj_t BgL_cdrzd21553zd2_948;

																BgL_cdrzd21553zd2_948 =
																	CDR(((obj_t) BgL_cdrzd21551zd2_947));
																{	/* Expand/iarith.scm 53 */
																	bool_t BgL_test3804z00_4903;

																	{	/* Expand/iarith.scm 53 */
																		obj_t BgL_tmpz00_4904;

																		BgL_tmpz00_4904 =
																			CAR(((obj_t) BgL_cdrzd21551zd2_947));
																		BgL_test3804z00_4903 =
																			CHARP(BgL_tmpz00_4904);
																	}
																	if (BgL_test3804z00_4903)
																		{	/* Expand/iarith.scm 53 */
																			if (PAIRP(BgL_cdrzd21553zd2_948))
																				{	/* Expand/iarith.scm 53 */
																					bool_t BgL_test3806z00_4910;

																					{	/* Expand/iarith.scm 53 */
																						obj_t BgL_tmpz00_4911;

																						BgL_tmpz00_4911 =
																							CAR(BgL_cdrzd21553zd2_948);
																						BgL_test3806z00_4910 =
																							CHARP(BgL_tmpz00_4911);
																					}
																					if (BgL_test3806z00_4910)
																						{	/* Expand/iarith.scm 53 */
																							if (NULLP(CDR
																									(BgL_cdrzd21553zd2_948)))
																								{	/* Expand/iarith.scm 53 */
																									return BFALSE;
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									goto BgL_tagzd2106zd2_71;
																								}
																						}
																					else
																						{	/* Expand/iarith.scm 53 */
																							if (NULLP(CDR(
																										((obj_t)
																											BgL_cdrzd21553zd2_948))))
																								{	/* Expand/iarith.scm 53 */
																									obj_t BgL_arg2232z00_961;
																									obj_t BgL_arg2233z00_962;

																									BgL_arg2232z00_961 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd21551zd2_947));
																									BgL_arg2233z00_962 =
																										CAR(((obj_t)
																											BgL_cdrzd21553zd2_948));
																									{
																										obj_t BgL_yz00_4926;
																										obj_t BgL_xz00_4925;

																										BgL_xz00_4925 =
																											BgL_arg2232z00_961;
																										BgL_yz00_4926 =
																											BgL_arg2233z00_962;
																										BgL_yz00_69 = BgL_yz00_4926;
																										BgL_xz00_68 = BgL_xz00_4925;
																										goto BgL_tagzd2105zd2_70;
																									}
																								}
																							else
																								{	/* Expand/iarith.scm 53 */
																									goto BgL_tagzd2106zd2_71;
																								}
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 53 */
																					goto BgL_tagzd2106zd2_71;
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 53 */
																			if (PAIRP(BgL_cdrzd21553zd2_948))
																				{	/* Expand/iarith.scm 53 */
																					if (NULLP(CDR(BgL_cdrzd21553zd2_948)))
																						{	/* Expand/iarith.scm 53 */
																							obj_t BgL_arg2239z00_970;
																							obj_t BgL_arg2240z00_971;

																							BgL_arg2239z00_970 =
																								CAR(
																								((obj_t)
																									BgL_cdrzd21551zd2_947));
																							BgL_arg2240z00_971 =
																								CAR(BgL_cdrzd21553zd2_948);
																							{
																								obj_t BgL_yz00_4936;
																								obj_t BgL_xz00_4935;

																								BgL_xz00_4935 =
																									BgL_arg2239z00_970;
																								BgL_yz00_4936 =
																									BgL_arg2240z00_971;
																								BgL_yz00_69 = BgL_yz00_4936;
																								BgL_xz00_68 = BgL_xz00_4935;
																								goto BgL_tagzd2105zd2_70;
																							}
																						}
																					else
																						{	/* Expand/iarith.scm 53 */
																							goto BgL_tagzd2106zd2_71;
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 53 */
																					goto BgL_tagzd2106zd2_71;
																				}
																		}
																}
															}
														}
												}
											else
												{	/* Expand/iarith.scm 53 */
													obj_t BgL_cdrzd21601zd2_976;

													BgL_cdrzd21601zd2_976 =
														CDR(((obj_t) BgL_cdrzd2112zd2_74));
													{	/* Expand/iarith.scm 53 */
														bool_t BgL_test3811z00_4939;

														{	/* Expand/iarith.scm 53 */
															obj_t BgL_tmpz00_4940;

															BgL_tmpz00_4940 =
																CAR(((obj_t) BgL_cdrzd2112zd2_74));
															BgL_test3811z00_4939 = CHARP(BgL_tmpz00_4940);
														}
														if (BgL_test3811z00_4939)
															{	/* Expand/iarith.scm 53 */
																if (PAIRP(BgL_cdrzd21601zd2_976))
																	{	/* Expand/iarith.scm 53 */
																		bool_t BgL_test3813z00_4946;

																		{	/* Expand/iarith.scm 53 */
																			obj_t BgL_tmpz00_4947;

																			BgL_tmpz00_4947 =
																				CAR(BgL_cdrzd21601zd2_976);
																			BgL_test3813z00_4946 =
																				CHARP(BgL_tmpz00_4947);
																		}
																		if (BgL_test3813z00_4946)
																			{	/* Expand/iarith.scm 53 */
																				if (NULLP(CDR(BgL_cdrzd21601zd2_976)))
																					{	/* Expand/iarith.scm 53 */
																						return BFALSE;
																					}
																				else
																					{	/* Expand/iarith.scm 53 */
																						goto BgL_tagzd2106zd2_71;
																					}
																			}
																		else
																			{	/* Expand/iarith.scm 53 */
																				if (NULLP(CDR(
																							((obj_t) BgL_cdrzd21601zd2_976))))
																					{	/* Expand/iarith.scm 53 */
																						obj_t BgL_arg2254z00_989;
																						obj_t BgL_arg2256z00_990;

																						BgL_arg2254z00_989 =
																							CAR(
																							((obj_t) BgL_cdrzd2112zd2_74));
																						BgL_arg2256z00_990 =
																							CAR(
																							((obj_t) BgL_cdrzd21601zd2_976));
																						{
																							obj_t BgL_yz00_4962;
																							obj_t BgL_xz00_4961;

																							BgL_xz00_4961 =
																								BgL_arg2254z00_989;
																							BgL_yz00_4962 =
																								BgL_arg2256z00_990;
																							BgL_yz00_69 = BgL_yz00_4962;
																							BgL_xz00_68 = BgL_xz00_4961;
																							goto BgL_tagzd2105zd2_70;
																						}
																					}
																				else
																					{	/* Expand/iarith.scm 53 */
																						goto BgL_tagzd2106zd2_71;
																					}
																			}
																	}
																else
																	{	/* Expand/iarith.scm 53 */
																		goto BgL_tagzd2106zd2_71;
																	}
															}
														else
															{	/* Expand/iarith.scm 53 */
																if (PAIRP(BgL_cdrzd21601zd2_976))
																	{	/* Expand/iarith.scm 53 */
																		if (NULLP(CDR(BgL_cdrzd21601zd2_976)))
																			{	/* Expand/iarith.scm 53 */
																				obj_t BgL_arg2262z00_998;
																				obj_t BgL_arg2263z00_999;

																				BgL_arg2262z00_998 =
																					CAR(((obj_t) BgL_cdrzd2112zd2_74));
																				BgL_arg2263z00_999 =
																					CAR(BgL_cdrzd21601zd2_976);
																				{
																					obj_t BgL_yz00_4972;
																					obj_t BgL_xz00_4971;

																					BgL_xz00_4971 = BgL_arg2262z00_998;
																					BgL_yz00_4972 = BgL_arg2263z00_999;
																					BgL_yz00_69 = BgL_yz00_4972;
																					BgL_xz00_68 = BgL_xz00_4971;
																					goto BgL_tagzd2105zd2_70;
																				}
																			}
																		else
																			{	/* Expand/iarith.scm 53 */
																				goto BgL_tagzd2106zd2_71;
																			}
																	}
																else
																	{	/* Expand/iarith.scm 53 */
																		goto BgL_tagzd2106zd2_71;
																	}
															}
													}
												}
										}
								}
							}
						else
							{	/* Expand/iarith.scm 53 */
								goto BgL_tagzd2106zd2_71;
							}
					}
				else
					{	/* Expand/iarith.scm 53 */
						goto BgL_tagzd2106zd2_71;
					}
			}
		}

	}



/* &expand-eq? */
	obj_t BGl_z62expandzd2eqzf3z43zzexpand_iarithmetiquez00(obj_t BgL_envz00_3429,
		obj_t BgL_xz00_3430, obj_t BgL_ez00_3431)
	{
		{	/* Expand/iarith.scm 52 */
			return
				BGl_expandzd2eqzf3z21zzexpand_iarithmetiquez00(BgL_xz00_3430,
				BgL_ez00_3431);
		}

	}



/* expand-i+ */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izb2z60zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_7, obj_t BgL_ez00_8)
	{
		{	/* Expand/iarith.scm 70 */
			{
				obj_t BgL_xz00_1014;
				obj_t BgL_yz00_1015;
				obj_t BgL_xz00_1011;
				obj_t BgL_yz00_1012;

				if (PAIRP(BgL_xz00_7))
					{	/* Expand/iarith.scm 71 */
						if (NULLP(CDR(BgL_xz00_7)))
							{	/* Expand/iarith.scm 71 */
								return BINT(((long) 0));
							}
						else
							{	/* Expand/iarith.scm 71 */
								obj_t BgL_cdrzd21677zd2_1021;

								BgL_cdrzd21677zd2_1021 = CDR(BgL_xz00_7);
								if (PAIRP(BgL_cdrzd21677zd2_1021))
									{	/* Expand/iarith.scm 71 */
										if (NULLP(CDR(BgL_cdrzd21677zd2_1021)))
											{	/* Expand/iarith.scm 71 */
												obj_t BgL_arg2277z00_1025;

												BgL_arg2277z00_1025 = CAR(BgL_cdrzd21677zd2_1021);
												return
													PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8,
													BgL_arg2277z00_1025, BgL_ez00_8, BEOA);
											}
										else
											{	/* Expand/iarith.scm 71 */
												obj_t BgL_cdrzd21693zd2_1027;

												BgL_cdrzd21693zd2_1027 =
													CDR(((obj_t) BgL_cdrzd21677zd2_1021));
												if (PAIRP(BgL_cdrzd21693zd2_1027))
													{	/* Expand/iarith.scm 71 */
														if (NULLP(CDR(BgL_cdrzd21693zd2_1027)))
															{	/* Expand/iarith.scm 71 */
																obj_t BgL_arg2282z00_1031;
																obj_t BgL_arg2283z00_1032;

																BgL_arg2282z00_1031 =
																	CAR(((obj_t) BgL_cdrzd21677zd2_1021));
																BgL_arg2283z00_1032 =
																	CAR(BgL_cdrzd21693zd2_1027);
																BgL_xz00_1011 = BgL_arg2282z00_1031;
																BgL_yz00_1012 = BgL_arg2283z00_1032;
																{	/* Expand/iarith.scm 78 */
																	bool_t BgL_test3824z00_5002;

																	if (INTEGERP(BgL_xz00_1011))
																		{	/* Expand/iarith.scm 78 */
																			BgL_test3824z00_5002 =
																				INTEGERP(BgL_yz00_1012);
																		}
																	else
																		{	/* Expand/iarith.scm 78 */
																			BgL_test3824z00_5002 = ((bool_t) 0);
																		}
																	if (BgL_test3824z00_5002)
																		{	/* Expand/iarith.scm 78 */
																			return
																				ADDFX(BgL_xz00_1011, BgL_yz00_1012);
																		}
																	else
																		{	/* Expand/iarith.scm 81 */
																			obj_t BgL_arg2294z00_1044;

																			{	/* Expand/iarith.scm 81 */
																				obj_t BgL_arg2295z00_1045;

																				{	/* Expand/iarith.scm 81 */
																					obj_t BgL_arg2296z00_1046;

																					BgL_arg2296z00_1046 =
																						MAKE_YOUNG_PAIR(BgL_yz00_1012,
																						BNIL);
																					BgL_arg2295z00_1045 =
																						MAKE_YOUNG_PAIR(BgL_xz00_1011,
																						BgL_arg2296z00_1046);
																				}
																				BgL_arg2294z00_1044 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							2)), BgL_arg2295z00_1045);
																			}
																			return
																				PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8,
																				BgL_arg2294z00_1044, BgL_ez00_8, BEOA);
																		}
																}
															}
														else
															{	/* Expand/iarith.scm 71 */
																obj_t BgL_arg2284z00_1034;
																obj_t BgL_arg2285z00_1035;

																BgL_arg2284z00_1034 =
																	CAR(((obj_t) BgL_cdrzd21677zd2_1021));
																BgL_arg2285z00_1035 =
																	CDR(((obj_t) BgL_cdrzd21677zd2_1021));
																BgL_xz00_1014 = BgL_arg2284z00_1034;
																BgL_yz00_1015 = BgL_arg2285z00_1035;
															BgL_tagzd21667zd2_1016:
																{	/* Expand/iarith.scm 83 */
																	obj_t BgL_arg2297z00_1048;

																	{	/* Expand/iarith.scm 83 */
																		obj_t BgL_arg2298z00_1049;

																		{	/* Expand/iarith.scm 83 */
																			obj_t BgL_arg2299z00_1050;

																			{	/* Expand/iarith.scm 83 */
																				obj_t BgL_arg2300z00_1051;

																				{	/* Expand/iarith.scm 83 */
																					obj_t BgL_arg2302z00_1052;

																					BgL_arg2302z00_1052 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_yz00_1015, BNIL);
																					BgL_arg2300z00_1051 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 3)),
																						BgL_arg2302z00_1052);
																				}
																				BgL_arg2299z00_1050 =
																					MAKE_YOUNG_PAIR(BgL_arg2300z00_1051,
																					BNIL);
																			}
																			BgL_arg2298z00_1049 =
																				MAKE_YOUNG_PAIR(BgL_xz00_1014,
																				BgL_arg2299z00_1050);
																		}
																		BgL_arg2297z00_1048 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					2)), BgL_arg2298z00_1049);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_8) (BgL_ez00_8,
																		BgL_arg2297z00_1048, BgL_ez00_8, BEOA);
																}
															}
													}
												else
													{	/* Expand/iarith.scm 71 */
														obj_t BgL_arg2287z00_1038;
														obj_t BgL_arg2288z00_1039;

														BgL_arg2287z00_1038 =
															CAR(((obj_t) BgL_cdrzd21677zd2_1021));
														BgL_arg2288z00_1039 =
															CDR(((obj_t) BgL_cdrzd21677zd2_1021));
														{
															obj_t BgL_yz00_5037;
															obj_t BgL_xz00_5036;

															BgL_xz00_5036 = BgL_arg2287z00_1038;
															BgL_yz00_5037 = BgL_arg2288z00_1039;
															BgL_yz00_1015 = BgL_yz00_5037;
															BgL_xz00_1014 = BgL_xz00_5036;
															goto BgL_tagzd21667zd2_1016;
														}
													}
											}
									}
								else
									{	/* Expand/iarith.scm 71 */
										return BFALSE;
									}
							}
					}
				else
					{	/* Expand/iarith.scm 71 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-i+ */
	obj_t BGl_z62expandzd2izb2z02zzexpand_iarithmetiquez00(obj_t BgL_envz00_3432,
		obj_t BgL_xz00_3433, obj_t BgL_ez00_3434)
	{
		{	/* Expand/iarith.scm 70 */
			return
				BGl_expandzd2izb2z60zzexpand_iarithmetiquez00(BgL_xz00_3433,
				BgL_ez00_3434);
		}

	}



/* expand-i- */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izd2z00zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_9, obj_t BgL_ez00_10)
	{
		{	/* Expand/iarith.scm 88 */
			{
				obj_t BgL_xz00_1058;
				obj_t BgL_yz00_1059;
				obj_t BgL_xz00_1055;
				obj_t BgL_yz00_1056;
				obj_t BgL_xz00_1053;

				if (PAIRP(BgL_xz00_9))
					{	/* Expand/iarith.scm 89 */
						obj_t BgL_cdrzd21757zd2_1063;

						BgL_cdrzd21757zd2_1063 = CDR(BgL_xz00_9);
						if (PAIRP(BgL_cdrzd21757zd2_1063))
							{	/* Expand/iarith.scm 89 */
								if (NULLP(CDR(BgL_cdrzd21757zd2_1063)))
									{	/* Expand/iarith.scm 89 */
										BgL_xz00_1053 = CAR(BgL_cdrzd21757zd2_1063);
										if (INTEGERP(BgL_xz00_1053))
											{	/* Expand/iarith.scm 92 */
												return BINT(NEG((long) CINT(BgL_xz00_1053)));
											}
										else
											{	/* Expand/iarith.scm 95 */
												obj_t BgL_arg2322z00_1084;

												{	/* Expand/iarith.scm 95 */
													obj_t BgL_arg2323z00_1085;

													BgL_arg2323z00_1085 =
														PROCEDURE_ENTRY(BgL_ez00_10) (BgL_ez00_10,
														BgL_xz00_1053, BgL_ez00_10, BEOA);
													BgL_arg2322z00_1084 =
														MAKE_YOUNG_PAIR(BgL_arg2323z00_1085, BNIL);
												}
												return
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
													BgL_arg2322z00_1084);
									}}
								else
									{	/* Expand/iarith.scm 89 */
										obj_t BgL_cdrzd21773zd2_1069;

										BgL_cdrzd21773zd2_1069 =
											CDR(((obj_t) BgL_cdrzd21757zd2_1063));
										if (PAIRP(BgL_cdrzd21773zd2_1069))
											{	/* Expand/iarith.scm 89 */
												if (NULLP(CDR(BgL_cdrzd21773zd2_1069)))
													{	/* Expand/iarith.scm 89 */
														obj_t BgL_arg2311z00_1073;
														obj_t BgL_arg2312z00_1074;

														BgL_arg2311z00_1073 =
															CAR(((obj_t) BgL_cdrzd21757zd2_1063));
														BgL_arg2312z00_1074 = CAR(BgL_cdrzd21773zd2_1069);
														BgL_xz00_1055 = BgL_arg2311z00_1073;
														BgL_yz00_1056 = BgL_arg2312z00_1074;
														{	/* Expand/iarith.scm 98 */
															bool_t BgL_test3832z00_5071;

															if (INTEGERP(BgL_xz00_1055))
																{	/* Expand/iarith.scm 98 */
																	BgL_test3832z00_5071 =
																		INTEGERP(BgL_yz00_1056);
																}
															else
																{	/* Expand/iarith.scm 98 */
																	BgL_test3832z00_5071 = ((bool_t) 0);
																}
															if (BgL_test3832z00_5071)
																{	/* Expand/iarith.scm 98 */
																	return SUBFX(BgL_xz00_1055, BgL_yz00_1056);
																}
															else
																{	/* Expand/iarith.scm 101 */
																	obj_t BgL_arg2326z00_1088;

																	{	/* Expand/iarith.scm 101 */
																		obj_t BgL_arg2327z00_1089;

																		{	/* Expand/iarith.scm 101 */
																			obj_t BgL_arg2328z00_1090;

																			BgL_arg2328z00_1090 =
																				MAKE_YOUNG_PAIR(BgL_yz00_1056, BNIL);
																			BgL_arg2327z00_1089 =
																				MAKE_YOUNG_PAIR(BgL_xz00_1055,
																				BgL_arg2328z00_1090);
																		}
																		BgL_arg2326z00_1088 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					5)), BgL_arg2327z00_1089);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_10) (BgL_ez00_10,
																		BgL_arg2326z00_1088, BgL_ez00_10, BEOA);
																}
														}
													}
												else
													{	/* Expand/iarith.scm 89 */
														obj_t BgL_arg2313z00_1076;
														obj_t BgL_arg2314z00_1077;

														BgL_arg2313z00_1076 =
															CAR(((obj_t) BgL_cdrzd21757zd2_1063));
														BgL_arg2314z00_1077 =
															CDR(((obj_t) BgL_cdrzd21757zd2_1063));
														BgL_xz00_1058 = BgL_arg2313z00_1076;
														BgL_yz00_1059 = BgL_arg2314z00_1077;
													BgL_tagzd21751zd2_1060:
														{	/* Expand/iarith.scm 103 */
															obj_t BgL_arg2329z00_1092;

															{	/* Expand/iarith.scm 103 */
																obj_t BgL_arg2331z00_1093;

																{	/* Expand/iarith.scm 103 */
																	obj_t BgL_arg2332z00_1094;

																	{	/* Expand/iarith.scm 103 */
																		obj_t BgL_arg2334z00_1095;

																		{	/* Expand/iarith.scm 103 */
																			obj_t BgL_arg2335z00_1096;

																			BgL_arg2335z00_1096 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_yz00_1059, BNIL);
																			BgL_arg2334z00_1095 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						3)), BgL_arg2335z00_1096);
																		}
																		BgL_arg2332z00_1094 =
																			MAKE_YOUNG_PAIR(BgL_arg2334z00_1095,
																			BNIL);
																	}
																	BgL_arg2331z00_1093 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1058,
																		BgL_arg2332z00_1094);
																}
																BgL_arg2329z00_1092 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
																	BgL_arg2331z00_1093);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_10) (BgL_ez00_10,
																BgL_arg2329z00_1092, BgL_ez00_10, BEOA);
														}
													}
											}
										else
											{	/* Expand/iarith.scm 89 */
												obj_t BgL_arg2318z00_1080;
												obj_t BgL_arg2319z00_1081;

												BgL_arg2318z00_1080 =
													CAR(((obj_t) BgL_cdrzd21757zd2_1063));
												BgL_arg2319z00_1081 =
													CDR(((obj_t) BgL_cdrzd21757zd2_1063));
												{
													obj_t BgL_yz00_5106;
													obj_t BgL_xz00_5105;

													BgL_xz00_5105 = BgL_arg2318z00_1080;
													BgL_yz00_5106 = BgL_arg2319z00_1081;
													BgL_yz00_1059 = BgL_yz00_5106;
													BgL_xz00_1058 = BgL_xz00_5105;
													goto BgL_tagzd21751zd2_1060;
												}
											}
									}
							}
						else
							{	/* Expand/iarith.scm 89 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 89 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-i- */
	obj_t BGl_z62expandzd2izd2z62zzexpand_iarithmetiquez00(obj_t BgL_envz00_3435,
		obj_t BgL_xz00_3436, obj_t BgL_ez00_3437)
	{
		{	/* Expand/iarith.scm 88 */
			return
				BGl_expandzd2izd2z00zzexpand_iarithmetiquez00(BgL_xz00_3436,
				BgL_ez00_3437);
		}

	}



/* expand-i* */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2iza2z70zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_11, obj_t BgL_ez00_12)
	{
		{	/* Expand/iarith.scm 108 */
			{
				obj_t BgL_xz00_1103;
				obj_t BgL_yz00_1104;
				obj_t BgL_xz00_1100;
				obj_t BgL_yz00_1101;

				if (PAIRP(BgL_xz00_11))
					{	/* Expand/iarith.scm 109 */
						if (NULLP(CDR(BgL_xz00_11)))
							{	/* Expand/iarith.scm 109 */
								return BINT(((long) 1));
							}
						else
							{	/* Expand/iarith.scm 109 */
								obj_t BgL_cdrzd21839zd2_1110;

								BgL_cdrzd21839zd2_1110 = CDR(BgL_xz00_11);
								if (PAIRP(BgL_cdrzd21839zd2_1110))
									{	/* Expand/iarith.scm 109 */
										if (NULLP(CDR(BgL_cdrzd21839zd2_1110)))
											{	/* Expand/iarith.scm 109 */
												obj_t BgL_arg2342z00_1114;

												BgL_arg2342z00_1114 = CAR(BgL_cdrzd21839zd2_1110);
												return
													PROCEDURE_ENTRY(BgL_ez00_12) (BgL_ez00_12,
													BgL_arg2342z00_1114, BgL_ez00_12, BEOA);
											}
										else
											{	/* Expand/iarith.scm 109 */
												obj_t BgL_cdrzd21855zd2_1116;

												BgL_cdrzd21855zd2_1116 =
													CDR(((obj_t) BgL_cdrzd21839zd2_1110));
												if (PAIRP(BgL_cdrzd21855zd2_1116))
													{	/* Expand/iarith.scm 109 */
														if (NULLP(CDR(BgL_cdrzd21855zd2_1116)))
															{	/* Expand/iarith.scm 109 */
																obj_t BgL_arg2347z00_1120;
																obj_t BgL_arg2349z00_1121;

																BgL_arg2347z00_1120 =
																	CAR(((obj_t) BgL_cdrzd21839zd2_1110));
																BgL_arg2349z00_1121 =
																	CAR(BgL_cdrzd21855zd2_1116);
																BgL_xz00_1100 = BgL_arg2347z00_1120;
																BgL_yz00_1101 = BgL_arg2349z00_1121;
																{	/* Expand/iarith.scm 116 */
																	bool_t BgL_test3840z00_5136;

																	if (INTEGERP(BgL_xz00_1100))
																		{	/* Expand/iarith.scm 116 */
																			BgL_test3840z00_5136 =
																				INTEGERP(BgL_yz00_1101);
																		}
																	else
																		{	/* Expand/iarith.scm 116 */
																			BgL_test3840z00_5136 = ((bool_t) 0);
																		}
																	if (BgL_test3840z00_5136)
																		{	/* Expand/iarith.scm 116 */
																			return
																				BINT(
																				((long) CINT(BgL_xz00_1100) *
																					(long) CINT(BgL_yz00_1101)));
																		}
																	else
																		{	/* Expand/iarith.scm 119 */
																			obj_t BgL_arg2359z00_1133;

																			{	/* Expand/iarith.scm 119 */
																				obj_t BgL_arg2360z00_1134;

																				{	/* Expand/iarith.scm 119 */
																					obj_t BgL_arg2361z00_1135;

																					BgL_arg2361z00_1135 =
																						MAKE_YOUNG_PAIR(BgL_yz00_1101,
																						BNIL);
																					BgL_arg2360z00_1134 =
																						MAKE_YOUNG_PAIR(BgL_xz00_1100,
																						BgL_arg2361z00_1135);
																				}
																				BgL_arg2359z00_1133 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							6)), BgL_arg2360z00_1134);
																			}
																			return
																				PROCEDURE_ENTRY(BgL_ez00_12)
																				(BgL_ez00_12, BgL_arg2359z00_1133,
																				BgL_ez00_12, BEOA);
																		}
																}
															}
														else
															{	/* Expand/iarith.scm 109 */
																obj_t BgL_arg2350z00_1123;
																obj_t BgL_arg2351z00_1124;

																BgL_arg2350z00_1123 =
																	CAR(((obj_t) BgL_cdrzd21839zd2_1110));
																BgL_arg2351z00_1124 =
																	CDR(((obj_t) BgL_cdrzd21839zd2_1110));
																BgL_xz00_1103 = BgL_arg2350z00_1123;
																BgL_yz00_1104 = BgL_arg2351z00_1124;
															BgL_tagzd21829zd2_1105:
																{	/* Expand/iarith.scm 121 */
																	obj_t BgL_arg2362z00_1137;

																	{	/* Expand/iarith.scm 121 */
																		obj_t BgL_arg2363z00_1138;

																		{	/* Expand/iarith.scm 121 */
																			obj_t BgL_arg2364z00_1139;

																			{	/* Expand/iarith.scm 121 */
																				obj_t BgL_arg2365z00_1140;

																				{	/* Expand/iarith.scm 121 */
																					obj_t BgL_arg2366z00_1141;

																					BgL_arg2366z00_1141 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_yz00_1104, BNIL);
																					BgL_arg2365z00_1140 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 7)),
																						BgL_arg2366z00_1141);
																				}
																				BgL_arg2364z00_1139 =
																					MAKE_YOUNG_PAIR(BgL_arg2365z00_1140,
																					BNIL);
																			}
																			BgL_arg2363z00_1138 =
																				MAKE_YOUNG_PAIR(BgL_xz00_1103,
																				BgL_arg2364z00_1139);
																		}
																		BgL_arg2362z00_1137 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					6)), BgL_arg2363z00_1138);
																	}
																	return
																		PROCEDURE_ENTRY(BgL_ez00_12) (BgL_ez00_12,
																		BgL_arg2362z00_1137, BgL_ez00_12, BEOA);
																}
															}
													}
												else
													{	/* Expand/iarith.scm 109 */
														obj_t BgL_arg2353z00_1127;
														obj_t BgL_arg2354z00_1128;

														BgL_arg2353z00_1127 =
															CAR(((obj_t) BgL_cdrzd21839zd2_1110));
														BgL_arg2354z00_1128 =
															CDR(((obj_t) BgL_cdrzd21839zd2_1110));
														{
															obj_t BgL_yz00_5174;
															obj_t BgL_xz00_5173;

															BgL_xz00_5173 = BgL_arg2353z00_1127;
															BgL_yz00_5174 = BgL_arg2354z00_1128;
															BgL_yz00_1104 = BgL_yz00_5174;
															BgL_xz00_1103 = BgL_xz00_5173;
															goto BgL_tagzd21829zd2_1105;
														}
													}
											}
									}
								else
									{	/* Expand/iarith.scm 109 */
										return BFALSE;
									}
							}
					}
				else
					{	/* Expand/iarith.scm 109 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-i* */
	obj_t BGl_z62expandzd2iza2z12zzexpand_iarithmetiquez00(obj_t BgL_envz00_3438,
		obj_t BgL_xz00_3439, obj_t BgL_ez00_3440)
	{
		{	/* Expand/iarith.scm 108 */
			return
				BGl_expandzd2iza2z70zzexpand_iarithmetiquez00(BgL_xz00_3439,
				BgL_ez00_3440);
		}

	}



/* expand-i/ */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izf2z20zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_13, obj_t BgL_ez00_14)
	{
		{	/* Expand/iarith.scm 126 */
			{
				obj_t BgL_az00_1147;
				obj_t BgL_yz00_1148;
				obj_t BgL_az00_1144;
				obj_t BgL_yz00_1145;
				obj_t BgL_az00_1142;

				if (PAIRP(BgL_xz00_13))
					{	/* Expand/iarith.scm 127 */
						obj_t BgL_cdrzd21919zd2_1152;

						BgL_cdrzd21919zd2_1152 = CDR(BgL_xz00_13);
						if (PAIRP(BgL_cdrzd21919zd2_1152))
							{	/* Expand/iarith.scm 127 */
								if (NULLP(CDR(BgL_cdrzd21919zd2_1152)))
									{	/* Expand/iarith.scm 127 */
										BgL_az00_1142 = CAR(BgL_cdrzd21919zd2_1152);
										BGl_userzd2warningzd2zztools_errorz00
											(BGl_string3542z00zzexpand_iarithmetiquez00,
											BGl_string3543z00zzexpand_iarithmetiquez00, BgL_xz00_13);
										{	/* Expand/iarith.scm 132 */
											obj_t BgL_arg2385z00_1172;

											{	/* Expand/iarith.scm 132 */
												obj_t BgL_arg2388z00_1173;

												{	/* Expand/iarith.scm 132 */
													obj_t BgL_arg2389z00_1174;

													BgL_arg2389z00_1174 =
														PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
														BgL_az00_1142, BgL_ez00_14, BEOA);
													BgL_arg2388z00_1173 =
														MAKE_YOUNG_PAIR(BgL_arg2389z00_1174, BNIL);
												}
												BgL_arg2385z00_1172 =
													MAKE_YOUNG_PAIR(BINT(((long) 1)),
													BgL_arg2388z00_1173);
											}
											return
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
												BgL_arg2385z00_1172);
									}}
								else
									{	/* Expand/iarith.scm 127 */
										obj_t BgL_cdrzd21935zd2_1158;

										BgL_cdrzd21935zd2_1158 =
											CDR(((obj_t) BgL_cdrzd21919zd2_1152));
										if (PAIRP(BgL_cdrzd21935zd2_1158))
											{	/* Expand/iarith.scm 127 */
												if (NULLP(CDR(BgL_cdrzd21935zd2_1158)))
													{	/* Expand/iarith.scm 127 */
														obj_t BgL_arg2376z00_1162;
														obj_t BgL_arg2377z00_1163;

														BgL_arg2376z00_1162 =
															CAR(((obj_t) BgL_cdrzd21919zd2_1152));
														BgL_arg2377z00_1163 = CAR(BgL_cdrzd21935zd2_1158);
														BgL_az00_1144 = BgL_arg2376z00_1162;
														BgL_yz00_1145 = BgL_arg2377z00_1163;
														{	/* Expand/iarith.scm 135 */
															bool_t BgL_test3847z00_5206;

															if (INTEGERP(BgL_az00_1144))
																{	/* Expand/iarith.scm 135 */
																	if (INTEGERP(BgL_yz00_1145))
																		{	/* Expand/iarith.scm 135 */
																			if (
																				((long) CINT(BgL_yz00_1145) ==
																					((long) 0)))
																				{	/* Expand/iarith.scm 135 */
																					BgL_test3847z00_5206 = ((bool_t) 0);
																				}
																			else
																				{	/* Expand/iarith.scm 135 */
																					BgL_test3847z00_5206 = ((bool_t) 1);
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 135 */
																			BgL_test3847z00_5206 = ((bool_t) 0);
																		}
																}
															else
																{	/* Expand/iarith.scm 135 */
																	BgL_test3847z00_5206 = ((bool_t) 0);
																}
															if (BgL_test3847z00_5206)
																{	/* Expand/iarith.scm 135 */
																	{	/* Expand/iarith.scm 138 */
																		obj_t BgL_arg2395z00_1179;

																		{	/* Expand/iarith.scm 138 */
																			obj_t BgL_arg2396z00_1180;
																			obj_t BgL_arg2397z00_1181;
																			obj_t BgL_arg2398z00_1182;

																			{	/* Expand/iarith.scm 138 */

																				BgL_arg2396z00_1180 =
																					BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																					(BgL_az00_1144, BINT(((long) 10)));
																			}
																			{	/* Expand/iarith.scm 140 */

																				BgL_arg2397z00_1181 =
																					BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																					(BgL_yz00_1145, BINT(((long) 10)));
																			}
																			{	/* Expand/iarith.scm 142 */

																				BgL_arg2398z00_1182 =
																					BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																					(BINT(((long) CINT(BgL_az00_1144) /
																							(long) CINT(BgL_yz00_1145))),
																					BINT(((long) 10)));
																			}
																			{	/* Expand/iarith.scm 137 */
																				obj_t BgL_list2399z00_1183;

																				{	/* Expand/iarith.scm 137 */
																					obj_t BgL_arg2402z00_1184;

																					{	/* Expand/iarith.scm 137 */
																						obj_t BgL_arg2404z00_1185;

																						{	/* Expand/iarith.scm 137 */
																							obj_t BgL_arg2405z00_1186;

																							{	/* Expand/iarith.scm 137 */
																								obj_t BgL_arg2406z00_1187;

																								{	/* Expand/iarith.scm 137 */
																									obj_t BgL_arg2407z00_1188;

																									{	/* Expand/iarith.scm 137 */
																										obj_t BgL_arg2409z00_1189;

																										BgL_arg2409z00_1189 =
																											MAKE_YOUNG_PAIR
																											(BGl_string3544z00zzexpand_iarithmetiquez00,
																											BNIL);
																										BgL_arg2407z00_1188 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2398z00_1182,
																											BgL_arg2409z00_1189);
																									}
																									BgL_arg2406z00_1187 =
																										MAKE_YOUNG_PAIR
																										(BGl_string3545z00zzexpand_iarithmetiquez00,
																										BgL_arg2407z00_1188);
																								}
																								BgL_arg2405z00_1186 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2397z00_1181,
																									BgL_arg2406z00_1187);
																							}
																							BgL_arg2404z00_1185 =
																								MAKE_YOUNG_PAIR
																								(BGl_string3546z00zzexpand_iarithmetiquez00,
																								BgL_arg2405z00_1186);
																						}
																						BgL_arg2402z00_1184 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2396z00_1180,
																							BgL_arg2404z00_1185);
																					}
																					BgL_list2399z00_1183 =
																						MAKE_YOUNG_PAIR
																						(BGl_string3547z00zzexpand_iarithmetiquez00,
																						BgL_arg2402z00_1184);
																				}
																				BgL_arg2395z00_1179 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list2399z00_1183);
																		}}
																		BGl_userzd2warningzd2zztools_errorz00
																			(BGl_string3542z00zzexpand_iarithmetiquez00,
																			BgL_arg2395z00_1179, BgL_xz00_13);
																	}
																	return
																		BINT(
																		((long) CINT(BgL_az00_1144) /
																			(long) CINT(BgL_yz00_1145)));
																}
															else
																{	/* Expand/iarith.scm 135 */
																	BGl_userzd2warningzd2zztools_errorz00
																		(BGl_string3542z00zzexpand_iarithmetiquez00,
																		BGl_string3548z00zzexpand_iarithmetiquez00,
																		BgL_xz00_13);
																	{	/* Expand/iarith.scm 150 */
																		obj_t BgL_arg2412z00_1197;

																		{	/* Expand/iarith.scm 150 */
																			obj_t BgL_arg2413z00_1198;

																			{	/* Expand/iarith.scm 150 */
																				obj_t BgL_arg2414z00_1199;

																				BgL_arg2414z00_1199 =
																					MAKE_YOUNG_PAIR(BgL_yz00_1145, BNIL);
																				BgL_arg2413z00_1198 =
																					MAKE_YOUNG_PAIR(BgL_az00_1144,
																					BgL_arg2414z00_1199);
																			}
																			BgL_arg2412z00_1197 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						8)), BgL_arg2413z00_1198);
																		}
																		return
																			PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
																			BgL_arg2412z00_1197, BgL_ez00_14, BEOA);
																	}
																}
														}
													}
												else
													{	/* Expand/iarith.scm 127 */
														obj_t BgL_arg2379z00_1165;
														obj_t BgL_arg2380z00_1166;

														BgL_arg2379z00_1165 =
															CAR(((obj_t) BgL_cdrzd21919zd2_1152));
														BgL_arg2380z00_1166 =
															CDR(((obj_t) BgL_cdrzd21919zd2_1152));
														BgL_az00_1147 = BgL_arg2379z00_1165;
														BgL_yz00_1148 = BgL_arg2380z00_1166;
													BgL_tagzd21913zd2_1149:
														BGl_userzd2warningzd2zztools_errorz00
															(BGl_string3542z00zzexpand_iarithmetiquez00,
															BGl_string3549z00zzexpand_iarithmetiquez00,
															BgL_xz00_13);
														{	/* Expand/iarith.scm 155 */
															obj_t BgL_arg2415z00_1203;

															{	/* Expand/iarith.scm 155 */
																obj_t BgL_arg2416z00_1204;

																{	/* Expand/iarith.scm 155 */
																	obj_t BgL_arg2418z00_1205;

																	{	/* Expand/iarith.scm 155 */
																		obj_t BgL_arg2419z00_1206;

																		{	/* Expand/iarith.scm 155 */
																			obj_t BgL_arg2420z00_1207;

																			BgL_arg2420z00_1207 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_yz00_1148, BNIL);
																			BgL_arg2419z00_1206 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						7)), BgL_arg2420z00_1207);
																		}
																		BgL_arg2418z00_1205 =
																			MAKE_YOUNG_PAIR(BgL_arg2419z00_1206,
																			BNIL);
																	}
																	BgL_arg2416z00_1204 =
																		MAKE_YOUNG_PAIR(BgL_az00_1147,
																		BgL_arg2418z00_1205);
																}
																BgL_arg2415z00_1203 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
																	BgL_arg2416z00_1204);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
																BgL_arg2415z00_1203, BgL_ez00_14, BEOA);
														}
													}
											}
										else
											{	/* Expand/iarith.scm 127 */
												obj_t BgL_arg2382z00_1169;
												obj_t BgL_arg2383z00_1170;

												BgL_arg2382z00_1169 =
													CAR(((obj_t) BgL_cdrzd21919zd2_1152));
												BgL_arg2383z00_1170 =
													CDR(((obj_t) BgL_cdrzd21919zd2_1152));
												{
													obj_t BgL_yz00_5269;
													obj_t BgL_az00_5268;

													BgL_az00_5268 = BgL_arg2382z00_1169;
													BgL_yz00_5269 = BgL_arg2383z00_1170;
													BgL_yz00_1148 = BgL_yz00_5269;
													BgL_az00_1147 = BgL_az00_5268;
													goto BgL_tagzd21913zd2_1149;
												}
											}
									}
							}
						else
							{	/* Expand/iarith.scm 127 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 127 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-i/ */
	obj_t BGl_z62expandzd2izf2z42zzexpand_iarithmetiquez00(obj_t BgL_envz00_3441,
		obj_t BgL_xz00_3442, obj_t BgL_ez00_3443)
	{
		{	/* Expand/iarith.scm 126 */
			return
				BGl_expandzd2izf2z20zzexpand_iarithmetiquez00(BgL_xz00_3442,
				BgL_ez00_3443);
		}

	}



/* expand-i= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izd3z01zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_15, obj_t BgL_ez00_16)
	{
		{	/* Expand/iarith.scm 160 */
			{
				obj_t BgL_xz00_1211;
				obj_t BgL_yz00_1212;
				obj_t BgL_xz00_1208;
				obj_t BgL_yz00_1209;

				if (PAIRP(BgL_xz00_15))
					{	/* Expand/iarith.scm 161 */
						obj_t BgL_cdrzd21996zd2_1216;

						BgL_cdrzd21996zd2_1216 = CDR(BgL_xz00_15);
						if (PAIRP(BgL_cdrzd21996zd2_1216))
							{	/* Expand/iarith.scm 161 */
								obj_t BgL_cdrzd22000zd2_1218;

								BgL_cdrzd22000zd2_1218 = CDR(BgL_cdrzd21996zd2_1216);
								if (PAIRP(BgL_cdrzd22000zd2_1218))
									{	/* Expand/iarith.scm 161 */
										if (NULLP(CDR(BgL_cdrzd22000zd2_1218)))
											{	/* Expand/iarith.scm 161 */
												BgL_xz00_1208 = CAR(BgL_cdrzd21996zd2_1216);
												BgL_yz00_1209 = CAR(BgL_cdrzd22000zd2_1218);
												{	/* Expand/iarith.scm 164 */
													bool_t BgL_test3855z00_5282;

													if (INTEGERP(BgL_xz00_1208))
														{	/* Expand/iarith.scm 164 */
															BgL_test3855z00_5282 = INTEGERP(BgL_yz00_1209);
														}
													else
														{	/* Expand/iarith.scm 164 */
															BgL_test3855z00_5282 = ((bool_t) 0);
														}
													if (BgL_test3855z00_5282)
														{	/* Expand/iarith.scm 164 */
															return
																BBOOL(
																((long) CINT(BgL_xz00_1208) ==
																	(long) CINT(BgL_yz00_1209)));
														}
													else
														{	/* Expand/iarith.scm 167 */
															obj_t BgL_arg2438z00_1233;

															{	/* Expand/iarith.scm 167 */
																obj_t BgL_arg2439z00_1234;

																{	/* Expand/iarith.scm 167 */
																	obj_t BgL_arg2441z00_1235;

																	BgL_arg2441z00_1235 =
																		MAKE_YOUNG_PAIR(BgL_yz00_1209, BNIL);
																	BgL_arg2439z00_1234 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1208,
																		BgL_arg2441z00_1235);
																}
																BgL_arg2438z00_1233 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
																	BgL_arg2439z00_1234);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_16) (BgL_ez00_16,
																BgL_arg2438z00_1233, BgL_ez00_16, BEOA);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 161 */
												obj_t BgL_arg2428z00_1225;
												obj_t BgL_arg2430z00_1226;

												BgL_arg2428z00_1225 =
													CAR(((obj_t) BgL_cdrzd21996zd2_1216));
												BgL_arg2430z00_1226 =
													CDR(((obj_t) BgL_cdrzd21996zd2_1216));
												BgL_xz00_1211 = BgL_arg2428z00_1225;
												BgL_yz00_1212 = BgL_arg2430z00_1226;
											BgL_tagzd21989zd2_1213:
												{	/* Expand/iarith.scm 169 */
													obj_t BgL_arg2443z00_1237;

													{	/* Expand/iarith.scm 169 */
														obj_t BgL_arg2444z00_1238;

														{	/* Expand/iarith.scm 169 */
															obj_t BgL_arg2446z00_1239;
															obj_t BgL_arg2447z00_1240;

															{	/* Expand/iarith.scm 169 */
																obj_t BgL_arg2448z00_1241;

																{	/* Expand/iarith.scm 169 */
																	obj_t BgL_arg2449z00_1242;

																	{	/* Expand/iarith.scm 169 */
																		obj_t BgL_arg2450z00_1243;

																		BgL_arg2450z00_1243 =
																			CAR(((obj_t) BgL_yz00_1212));
																		BgL_arg2449z00_1242 =
																			MAKE_YOUNG_PAIR(BgL_arg2450z00_1243,
																			BNIL);
																	}
																	BgL_arg2448z00_1241 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1211,
																		BgL_arg2449z00_1242);
																}
																BgL_arg2446z00_1239 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
																	BgL_arg2448z00_1241);
															}
															{	/* Expand/iarith.scm 169 */
																obj_t BgL_arg2451z00_1244;

																{	/* Expand/iarith.scm 169 */
																	obj_t BgL_arg2452z00_1245;

																	BgL_arg2452z00_1245 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_yz00_1212, BNIL);
																	BgL_arg2451z00_1244 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
																		BgL_arg2452z00_1245);
																}
																BgL_arg2447z00_1240 =
																	MAKE_YOUNG_PAIR(BgL_arg2451z00_1244, BNIL);
															}
															BgL_arg2444z00_1238 =
																MAKE_YOUNG_PAIR(BgL_arg2446z00_1239,
																BgL_arg2447z00_1240);
														}
														BgL_arg2443z00_1237 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
															BgL_arg2444z00_1238);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_16) (BgL_ez00_16,
														BgL_arg2443z00_1237, BgL_ez00_16, BEOA);
												}
											}
									}
								else
									{	/* Expand/iarith.scm 161 */
										obj_t BgL_arg2433z00_1229;
										obj_t BgL_arg2435z00_1230;

										BgL_arg2433z00_1229 = CAR(((obj_t) BgL_cdrzd21996zd2_1216));
										BgL_arg2435z00_1230 = CDR(((obj_t) BgL_cdrzd21996zd2_1216));
										{
											obj_t BgL_yz00_5328;
											obj_t BgL_xz00_5327;

											BgL_xz00_5327 = BgL_arg2433z00_1229;
											BgL_yz00_5328 = BgL_arg2435z00_1230;
											BgL_yz00_1212 = BgL_yz00_5328;
											BgL_xz00_1211 = BgL_xz00_5327;
											goto BgL_tagzd21989zd2_1213;
										}
									}
							}
						else
							{	/* Expand/iarith.scm 161 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 161 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-i= */
	obj_t BGl_z62expandzd2izd3z63zzexpand_iarithmetiquez00(obj_t BgL_envz00_3444,
		obj_t BgL_xz00_3445, obj_t BgL_ez00_3446)
	{
		{	/* Expand/iarith.scm 160 */
			return
				BGl_expandzd2izd3z01zzexpand_iarithmetiquez00(BgL_xz00_3445,
				BgL_ez00_3446);
		}

	}



/* expand-i< */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izc3z11zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_17, obj_t BgL_ez00_18)
	{
		{	/* Expand/iarith.scm 174 */
			{
				obj_t BgL_xz00_1249;
				obj_t BgL_yz00_1250;
				obj_t BgL_xz00_1246;
				obj_t BgL_yz00_1247;

				if (PAIRP(BgL_xz00_17))
					{	/* Expand/iarith.scm 175 */
						obj_t BgL_cdrzd22052zd2_1254;

						BgL_cdrzd22052zd2_1254 = CDR(BgL_xz00_17);
						if (PAIRP(BgL_cdrzd22052zd2_1254))
							{	/* Expand/iarith.scm 175 */
								obj_t BgL_cdrzd22056zd2_1256;

								BgL_cdrzd22056zd2_1256 = CDR(BgL_cdrzd22052zd2_1254);
								if (PAIRP(BgL_cdrzd22056zd2_1256))
									{	/* Expand/iarith.scm 175 */
										if (NULLP(CDR(BgL_cdrzd22056zd2_1256)))
											{	/* Expand/iarith.scm 175 */
												BgL_xz00_1246 = CAR(BgL_cdrzd22052zd2_1254);
												BgL_yz00_1247 = CAR(BgL_cdrzd22056zd2_1256);
												{	/* Expand/iarith.scm 178 */
													bool_t BgL_test3861z00_5341;

													if (INTEGERP(BgL_xz00_1246))
														{	/* Expand/iarith.scm 178 */
															BgL_test3861z00_5341 = INTEGERP(BgL_yz00_1247);
														}
													else
														{	/* Expand/iarith.scm 178 */
															BgL_test3861z00_5341 = ((bool_t) 0);
														}
													if (BgL_test3861z00_5341)
														{	/* Expand/iarith.scm 178 */
															return
																BBOOL(
																((long) CINT(BgL_xz00_1246) <
																	(long) CINT(BgL_yz00_1247)));
														}
													else
														{	/* Expand/iarith.scm 181 */
															obj_t BgL_arg2469z00_1271;

															{	/* Expand/iarith.scm 181 */
																obj_t BgL_arg2470z00_1272;

																{	/* Expand/iarith.scm 181 */
																	obj_t BgL_arg2471z00_1273;

																	BgL_arg2471z00_1273 =
																		MAKE_YOUNG_PAIR(BgL_yz00_1247, BNIL);
																	BgL_arg2470z00_1272 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1246,
																		BgL_arg2471z00_1273);
																}
																BgL_arg2469z00_1271 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																	BgL_arg2470z00_1272);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_18) (BgL_ez00_18,
																BgL_arg2469z00_1271, BgL_ez00_18, BEOA);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 175 */
												obj_t BgL_arg2461z00_1263;
												obj_t BgL_arg2462z00_1264;

												BgL_arg2461z00_1263 =
													CAR(((obj_t) BgL_cdrzd22052zd2_1254));
												BgL_arg2462z00_1264 =
													CDR(((obj_t) BgL_cdrzd22052zd2_1254));
												BgL_xz00_1249 = BgL_arg2461z00_1263;
												BgL_yz00_1250 = BgL_arg2462z00_1264;
											BgL_tagzd22045zd2_1251:
												{	/* Expand/iarith.scm 183 */
													obj_t BgL_arg2473z00_1275;

													{	/* Expand/iarith.scm 183 */
														obj_t BgL_arg2474z00_1276;

														{	/* Expand/iarith.scm 183 */
															obj_t BgL_arg2475z00_1277;
															obj_t BgL_arg2476z00_1278;

															{	/* Expand/iarith.scm 183 */
																obj_t BgL_arg2477z00_1279;

																{	/* Expand/iarith.scm 183 */
																	obj_t BgL_arg2479z00_1280;

																	{	/* Expand/iarith.scm 183 */
																		obj_t BgL_arg2481z00_1281;

																		BgL_arg2481z00_1281 =
																			CAR(((obj_t) BgL_yz00_1250));
																		BgL_arg2479z00_1280 =
																			MAKE_YOUNG_PAIR(BgL_arg2481z00_1281,
																			BNIL);
																	}
																	BgL_arg2477z00_1279 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1249,
																		BgL_arg2479z00_1280);
																}
																BgL_arg2475z00_1277 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																	BgL_arg2477z00_1279);
															}
															{	/* Expand/iarith.scm 183 */
																obj_t BgL_arg2482z00_1282;

																{	/* Expand/iarith.scm 183 */
																	obj_t BgL_arg2483z00_1283;

																	BgL_arg2483z00_1283 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_yz00_1250, BNIL);
																	BgL_arg2482z00_1282 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
																		BgL_arg2483z00_1283);
																}
																BgL_arg2476z00_1278 =
																	MAKE_YOUNG_PAIR(BgL_arg2482z00_1282, BNIL);
															}
															BgL_arg2474z00_1276 =
																MAKE_YOUNG_PAIR(BgL_arg2475z00_1277,
																BgL_arg2476z00_1278);
														}
														BgL_arg2473z00_1275 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
															BgL_arg2474z00_1276);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_18) (BgL_ez00_18,
														BgL_arg2473z00_1275, BgL_ez00_18, BEOA);
												}
											}
									}
								else
									{	/* Expand/iarith.scm 175 */
										obj_t BgL_arg2464z00_1267;
										obj_t BgL_arg2466z00_1268;

										BgL_arg2464z00_1267 = CAR(((obj_t) BgL_cdrzd22052zd2_1254));
										BgL_arg2466z00_1268 = CDR(((obj_t) BgL_cdrzd22052zd2_1254));
										{
											obj_t BgL_yz00_5387;
											obj_t BgL_xz00_5386;

											BgL_xz00_5386 = BgL_arg2464z00_1267;
											BgL_yz00_5387 = BgL_arg2466z00_1268;
											BgL_yz00_1250 = BgL_yz00_5387;
											BgL_xz00_1249 = BgL_xz00_5386;
											goto BgL_tagzd22045zd2_1251;
										}
									}
							}
						else
							{	/* Expand/iarith.scm 175 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 175 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-i< */
	obj_t BGl_z62expandzd2izc3z73zzexpand_iarithmetiquez00(obj_t BgL_envz00_3447,
		obj_t BgL_xz00_3448, obj_t BgL_ez00_3449)
	{
		{	/* Expand/iarith.scm 174 */
			return
				BGl_expandzd2izc3z11zzexpand_iarithmetiquez00(BgL_xz00_3448,
				BgL_ez00_3449);
		}

	}



/* expand-i> */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2ize3z31zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_19, obj_t BgL_ez00_20)
	{
		{	/* Expand/iarith.scm 188 */
			{
				obj_t BgL_xz00_1287;
				obj_t BgL_yz00_1288;
				obj_t BgL_xz00_1284;
				obj_t BgL_yz00_1285;

				if (PAIRP(BgL_xz00_19))
					{	/* Expand/iarith.scm 189 */
						obj_t BgL_cdrzd22108zd2_1292;

						BgL_cdrzd22108zd2_1292 = CDR(BgL_xz00_19);
						if (PAIRP(BgL_cdrzd22108zd2_1292))
							{	/* Expand/iarith.scm 189 */
								obj_t BgL_cdrzd22112zd2_1294;

								BgL_cdrzd22112zd2_1294 = CDR(BgL_cdrzd22108zd2_1292);
								if (PAIRP(BgL_cdrzd22112zd2_1294))
									{	/* Expand/iarith.scm 189 */
										if (NULLP(CDR(BgL_cdrzd22112zd2_1294)))
											{	/* Expand/iarith.scm 189 */
												BgL_xz00_1284 = CAR(BgL_cdrzd22108zd2_1292);
												BgL_yz00_1285 = CAR(BgL_cdrzd22112zd2_1294);
												{	/* Expand/iarith.scm 192 */
													bool_t BgL_test3867z00_5400;

													if (INTEGERP(BgL_xz00_1284))
														{	/* Expand/iarith.scm 192 */
															BgL_test3867z00_5400 = INTEGERP(BgL_yz00_1285);
														}
													else
														{	/* Expand/iarith.scm 192 */
															BgL_test3867z00_5400 = ((bool_t) 0);
														}
													if (BgL_test3867z00_5400)
														{	/* Expand/iarith.scm 192 */
															return
																BBOOL(
																((long) CINT(BgL_xz00_1284) >
																	(long) CINT(BgL_yz00_1285)));
														}
													else
														{	/* Expand/iarith.scm 195 */
															obj_t BgL_arg2504z00_1309;

															{	/* Expand/iarith.scm 195 */
																obj_t BgL_arg2506z00_1310;

																{	/* Expand/iarith.scm 195 */
																	obj_t BgL_arg2508z00_1311;

																	BgL_arg2508z00_1311 =
																		MAKE_YOUNG_PAIR(BgL_yz00_1285, BNIL);
																	BgL_arg2506z00_1310 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1284,
																		BgL_arg2508z00_1311);
																}
																BgL_arg2504z00_1309 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
																	BgL_arg2506z00_1310);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_20) (BgL_ez00_20,
																BgL_arg2504z00_1309, BgL_ez00_20, BEOA);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 189 */
												obj_t BgL_arg2496z00_1301;
												obj_t BgL_arg2497z00_1302;

												BgL_arg2496z00_1301 =
													CAR(((obj_t) BgL_cdrzd22108zd2_1292));
												BgL_arg2497z00_1302 =
													CDR(((obj_t) BgL_cdrzd22108zd2_1292));
												BgL_xz00_1287 = BgL_arg2496z00_1301;
												BgL_yz00_1288 = BgL_arg2497z00_1302;
											BgL_tagzd22101zd2_1289:
												{	/* Expand/iarith.scm 197 */
													obj_t BgL_arg2512z00_1313;

													{	/* Expand/iarith.scm 197 */
														obj_t BgL_arg2515z00_1314;

														{	/* Expand/iarith.scm 197 */
															obj_t BgL_arg2518z00_1315;
															obj_t BgL_arg2519z00_1316;

															{	/* Expand/iarith.scm 197 */
																obj_t BgL_arg2520z00_1317;

																{	/* Expand/iarith.scm 197 */
																	obj_t BgL_arg2521z00_1318;

																	{	/* Expand/iarith.scm 197 */
																		obj_t BgL_arg2522z00_1319;

																		BgL_arg2522z00_1319 =
																			CAR(((obj_t) BgL_yz00_1288));
																		BgL_arg2521z00_1318 =
																			MAKE_YOUNG_PAIR(BgL_arg2522z00_1319,
																			BNIL);
																	}
																	BgL_arg2520z00_1317 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1287,
																		BgL_arg2521z00_1318);
																}
																BgL_arg2518z00_1315 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
																	BgL_arg2520z00_1317);
															}
															{	/* Expand/iarith.scm 197 */
																obj_t BgL_arg2523z00_1320;

																{	/* Expand/iarith.scm 197 */
																	obj_t BgL_arg2525z00_1321;

																	BgL_arg2525z00_1321 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_yz00_1288, BNIL);
																	BgL_arg2523z00_1320 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
																		BgL_arg2525z00_1321);
																}
																BgL_arg2519z00_1316 =
																	MAKE_YOUNG_PAIR(BgL_arg2523z00_1320, BNIL);
															}
															BgL_arg2515z00_1314 =
																MAKE_YOUNG_PAIR(BgL_arg2518z00_1315,
																BgL_arg2519z00_1316);
														}
														BgL_arg2512z00_1313 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
															BgL_arg2515z00_1314);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_20) (BgL_ez00_20,
														BgL_arg2512z00_1313, BgL_ez00_20, BEOA);
												}
											}
									}
								else
									{	/* Expand/iarith.scm 189 */
										obj_t BgL_arg2500z00_1305;
										obj_t BgL_arg2501z00_1306;

										BgL_arg2500z00_1305 = CAR(((obj_t) BgL_cdrzd22108zd2_1292));
										BgL_arg2501z00_1306 = CDR(((obj_t) BgL_cdrzd22108zd2_1292));
										{
											obj_t BgL_yz00_5446;
											obj_t BgL_xz00_5445;

											BgL_xz00_5445 = BgL_arg2500z00_1305;
											BgL_yz00_5446 = BgL_arg2501z00_1306;
											BgL_yz00_1288 = BgL_yz00_5446;
											BgL_xz00_1287 = BgL_xz00_5445;
											goto BgL_tagzd22101zd2_1289;
										}
									}
							}
						else
							{	/* Expand/iarith.scm 189 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 189 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-i> */
	obj_t BGl_z62expandzd2ize3z53zzexpand_iarithmetiquez00(obj_t BgL_envz00_3450,
		obj_t BgL_xz00_3451, obj_t BgL_ez00_3452)
	{
		{	/* Expand/iarith.scm 188 */
			return
				BGl_expandzd2ize3z31zzexpand_iarithmetiquez00(BgL_xz00_3451,
				BgL_ez00_3452);
		}

	}



/* expand-i<= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2izc3zd3zc2zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_21, obj_t BgL_ez00_22)
	{
		{	/* Expand/iarith.scm 202 */
			{
				obj_t BgL_xz00_1325;
				obj_t BgL_yz00_1326;
				obj_t BgL_xz00_1322;
				obj_t BgL_yz00_1323;

				if (PAIRP(BgL_xz00_21))
					{	/* Expand/iarith.scm 203 */
						obj_t BgL_cdrzd22164zd2_1330;

						BgL_cdrzd22164zd2_1330 = CDR(BgL_xz00_21);
						if (PAIRP(BgL_cdrzd22164zd2_1330))
							{	/* Expand/iarith.scm 203 */
								obj_t BgL_cdrzd22168zd2_1332;

								BgL_cdrzd22168zd2_1332 = CDR(BgL_cdrzd22164zd2_1330);
								if (PAIRP(BgL_cdrzd22168zd2_1332))
									{	/* Expand/iarith.scm 203 */
										if (NULLP(CDR(BgL_cdrzd22168zd2_1332)))
											{	/* Expand/iarith.scm 203 */
												BgL_xz00_1322 = CAR(BgL_cdrzd22164zd2_1330);
												BgL_yz00_1323 = CAR(BgL_cdrzd22168zd2_1332);
												{	/* Expand/iarith.scm 206 */
													bool_t BgL_test3873z00_5459;

													if (INTEGERP(BgL_xz00_1322))
														{	/* Expand/iarith.scm 206 */
															BgL_test3873z00_5459 = INTEGERP(BgL_yz00_1323);
														}
													else
														{	/* Expand/iarith.scm 206 */
															BgL_test3873z00_5459 = ((bool_t) 0);
														}
													if (BgL_test3873z00_5459)
														{	/* Expand/iarith.scm 206 */
															return
																BBOOL(
																((long) CINT(BgL_xz00_1322) <=
																	(long) CINT(BgL_yz00_1323)));
														}
													else
														{	/* Expand/iarith.scm 209 */
															obj_t BgL_arg2544z00_1347;

															{	/* Expand/iarith.scm 209 */
																obj_t BgL_arg2545z00_1348;

																{	/* Expand/iarith.scm 209 */
																	obj_t BgL_arg2548z00_1349;

																	BgL_arg2548z00_1349 =
																		MAKE_YOUNG_PAIR(BgL_yz00_1323, BNIL);
																	BgL_arg2545z00_1348 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1322,
																		BgL_arg2548z00_1349);
																}
																BgL_arg2544z00_1347 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
																	BgL_arg2545z00_1348);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_22) (BgL_ez00_22,
																BgL_arg2544z00_1347, BgL_ez00_22, BEOA);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 203 */
												obj_t BgL_arg2535z00_1339;
												obj_t BgL_arg2536z00_1340;

												BgL_arg2535z00_1339 =
													CAR(((obj_t) BgL_cdrzd22164zd2_1330));
												BgL_arg2536z00_1340 =
													CDR(((obj_t) BgL_cdrzd22164zd2_1330));
												BgL_xz00_1325 = BgL_arg2535z00_1339;
												BgL_yz00_1326 = BgL_arg2536z00_1340;
											BgL_tagzd22157zd2_1327:
												{	/* Expand/iarith.scm 211 */
													obj_t BgL_arg2552z00_1351;

													{	/* Expand/iarith.scm 211 */
														obj_t BgL_arg2553z00_1352;

														{	/* Expand/iarith.scm 211 */
															obj_t BgL_arg2554z00_1353;
															obj_t BgL_arg2556z00_1354;

															{	/* Expand/iarith.scm 211 */
																obj_t BgL_arg2558z00_1355;

																{	/* Expand/iarith.scm 211 */
																	obj_t BgL_arg2559z00_1356;

																	{	/* Expand/iarith.scm 211 */
																		obj_t BgL_arg2562z00_1357;

																		BgL_arg2562z00_1357 =
																			CAR(((obj_t) BgL_yz00_1326));
																		BgL_arg2559z00_1356 =
																			MAKE_YOUNG_PAIR(BgL_arg2562z00_1357,
																			BNIL);
																	}
																	BgL_arg2558z00_1355 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1325,
																		BgL_arg2559z00_1356);
																}
																BgL_arg2554z00_1353 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
																	BgL_arg2558z00_1355);
															}
															{	/* Expand/iarith.scm 211 */
																obj_t BgL_arg2564z00_1358;

																{	/* Expand/iarith.scm 211 */
																	obj_t BgL_arg2565z00_1359;

																	BgL_arg2565z00_1359 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_yz00_1326, BNIL);
																	BgL_arg2564z00_1358 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
																		BgL_arg2565z00_1359);
																}
																BgL_arg2556z00_1354 =
																	MAKE_YOUNG_PAIR(BgL_arg2564z00_1358, BNIL);
															}
															BgL_arg2553z00_1352 =
																MAKE_YOUNG_PAIR(BgL_arg2554z00_1353,
																BgL_arg2556z00_1354);
														}
														BgL_arg2552z00_1351 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
															BgL_arg2553z00_1352);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_22) (BgL_ez00_22,
														BgL_arg2552z00_1351, BgL_ez00_22, BEOA);
												}
											}
									}
								else
									{	/* Expand/iarith.scm 203 */
										obj_t BgL_arg2539z00_1343;
										obj_t BgL_arg2541z00_1344;

										BgL_arg2539z00_1343 = CAR(((obj_t) BgL_cdrzd22164zd2_1330));
										BgL_arg2541z00_1344 = CDR(((obj_t) BgL_cdrzd22164zd2_1330));
										{
											obj_t BgL_yz00_5505;
											obj_t BgL_xz00_5504;

											BgL_xz00_5504 = BgL_arg2539z00_1343;
											BgL_yz00_5505 = BgL_arg2541z00_1344;
											BgL_yz00_1326 = BgL_yz00_5505;
											BgL_xz00_1325 = BgL_xz00_5504;
											goto BgL_tagzd22157zd2_1327;
										}
									}
							}
						else
							{	/* Expand/iarith.scm 203 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 203 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-i<= */
	obj_t BGl_z62expandzd2izc3zd3za0zzexpand_iarithmetiquez00(obj_t
		BgL_envz00_3453, obj_t BgL_xz00_3454, obj_t BgL_ez00_3455)
	{
		{	/* Expand/iarith.scm 202 */
			return
				BGl_expandzd2izc3zd3zc2zzexpand_iarithmetiquez00(BgL_xz00_3454,
				BgL_ez00_3455);
		}

	}



/* expand-i>= */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2ize3zd3ze2zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_23, obj_t BgL_ez00_24)
	{
		{	/* Expand/iarith.scm 216 */
			{
				obj_t BgL_xz00_1363;
				obj_t BgL_yz00_1364;
				obj_t BgL_xz00_1360;
				obj_t BgL_yz00_1361;

				if (PAIRP(BgL_xz00_23))
					{	/* Expand/iarith.scm 217 */
						obj_t BgL_cdrzd22220zd2_1368;

						BgL_cdrzd22220zd2_1368 = CDR(BgL_xz00_23);
						if (PAIRP(BgL_cdrzd22220zd2_1368))
							{	/* Expand/iarith.scm 217 */
								obj_t BgL_cdrzd22224zd2_1370;

								BgL_cdrzd22224zd2_1370 = CDR(BgL_cdrzd22220zd2_1368);
								if (PAIRP(BgL_cdrzd22224zd2_1370))
									{	/* Expand/iarith.scm 217 */
										if (NULLP(CDR(BgL_cdrzd22224zd2_1370)))
											{	/* Expand/iarith.scm 217 */
												BgL_xz00_1360 = CAR(BgL_cdrzd22220zd2_1368);
												BgL_yz00_1361 = CAR(BgL_cdrzd22224zd2_1370);
												{	/* Expand/iarith.scm 220 */
													bool_t BgL_test3879z00_5518;

													if (INTEGERP(BgL_xz00_1360))
														{	/* Expand/iarith.scm 220 */
															BgL_test3879z00_5518 = INTEGERP(BgL_yz00_1361);
														}
													else
														{	/* Expand/iarith.scm 220 */
															BgL_test3879z00_5518 = ((bool_t) 0);
														}
													if (BgL_test3879z00_5518)
														{	/* Expand/iarith.scm 220 */
															return
																BBOOL(
																((long) CINT(BgL_xz00_1360) >=
																	(long) CINT(BgL_yz00_1361)));
														}
													else
														{	/* Expand/iarith.scm 223 */
															obj_t BgL_arg2581z00_1385;

															{	/* Expand/iarith.scm 223 */
																obj_t BgL_arg2583z00_1386;

																{	/* Expand/iarith.scm 223 */
																	obj_t BgL_arg2584z00_1387;

																	BgL_arg2584z00_1387 =
																		MAKE_YOUNG_PAIR(BgL_yz00_1361, BNIL);
																	BgL_arg2583z00_1386 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1360,
																		BgL_arg2584z00_1387);
																}
																BgL_arg2581z00_1385 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
																	BgL_arg2583z00_1386);
															}
															return
																PROCEDURE_ENTRY(BgL_ez00_24) (BgL_ez00_24,
																BgL_arg2581z00_1385, BgL_ez00_24, BEOA);
														}
												}
											}
										else
											{	/* Expand/iarith.scm 217 */
												obj_t BgL_arg2573z00_1377;
												obj_t BgL_arg2574z00_1378;

												BgL_arg2573z00_1377 =
													CAR(((obj_t) BgL_cdrzd22220zd2_1368));
												BgL_arg2574z00_1378 =
													CDR(((obj_t) BgL_cdrzd22220zd2_1368));
												BgL_xz00_1363 = BgL_arg2573z00_1377;
												BgL_yz00_1364 = BgL_arg2574z00_1378;
											BgL_tagzd22213zd2_1365:
												{	/* Expand/iarith.scm 225 */
													obj_t BgL_arg2585z00_1389;

													{	/* Expand/iarith.scm 225 */
														obj_t BgL_arg2586z00_1390;

														{	/* Expand/iarith.scm 225 */
															obj_t BgL_arg2587z00_1391;
															obj_t BgL_arg2588z00_1392;

															{	/* Expand/iarith.scm 225 */
																obj_t BgL_arg2589z00_1393;

																{	/* Expand/iarith.scm 225 */
																	obj_t BgL_arg2591z00_1394;

																	{	/* Expand/iarith.scm 225 */
																		obj_t BgL_arg2592z00_1395;

																		BgL_arg2592z00_1395 =
																			CAR(((obj_t) BgL_yz00_1364));
																		BgL_arg2591z00_1394 =
																			MAKE_YOUNG_PAIR(BgL_arg2592z00_1395,
																			BNIL);
																	}
																	BgL_arg2589z00_1393 =
																		MAKE_YOUNG_PAIR(BgL_xz00_1363,
																		BgL_arg2591z00_1394);
																}
																BgL_arg2587z00_1391 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
																	BgL_arg2589z00_1393);
															}
															{	/* Expand/iarith.scm 225 */
																obj_t BgL_arg2594z00_1396;

																{	/* Expand/iarith.scm 225 */
																	obj_t BgL_arg2595z00_1397;

																	BgL_arg2595z00_1397 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_yz00_1364, BNIL);
																	BgL_arg2594z00_1396 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
																		BgL_arg2595z00_1397);
																}
																BgL_arg2588z00_1392 =
																	MAKE_YOUNG_PAIR(BgL_arg2594z00_1396, BNIL);
															}
															BgL_arg2586z00_1390 =
																MAKE_YOUNG_PAIR(BgL_arg2587z00_1391,
																BgL_arg2588z00_1392);
														}
														BgL_arg2585z00_1389 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
															BgL_arg2586z00_1390);
													}
													return
														PROCEDURE_ENTRY(BgL_ez00_24) (BgL_ez00_24,
														BgL_arg2585z00_1389, BgL_ez00_24, BEOA);
												}
											}
									}
								else
									{	/* Expand/iarith.scm 217 */
										obj_t BgL_arg2577z00_1381;
										obj_t BgL_arg2578z00_1382;

										BgL_arg2577z00_1381 = CAR(((obj_t) BgL_cdrzd22220zd2_1368));
										BgL_arg2578z00_1382 = CDR(((obj_t) BgL_cdrzd22220zd2_1368));
										{
											obj_t BgL_yz00_5564;
											obj_t BgL_xz00_5563;

											BgL_xz00_5563 = BgL_arg2577z00_1381;
											BgL_yz00_5564 = BgL_arg2578z00_1382;
											BgL_yz00_1364 = BgL_yz00_5564;
											BgL_xz00_1363 = BgL_xz00_5563;
											goto BgL_tagzd22213zd2_1365;
										}
									}
							}
						else
							{	/* Expand/iarith.scm 217 */
								return BFALSE;
							}
					}
				else
					{	/* Expand/iarith.scm 217 */
						return BFALSE;
					}
			}
		}

	}



/* &expand-i>= */
	obj_t BGl_z62expandzd2ize3zd3z80zzexpand_iarithmetiquez00(obj_t
		BgL_envz00_3456, obj_t BgL_xz00_3457, obj_t BgL_ez00_3458)
	{
		{	/* Expand/iarith.scm 216 */
			return
				BGl_expandzd2ize3zd3ze2zzexpand_iarithmetiquez00(BgL_xz00_3457,
				BgL_ez00_3458);
		}

	}



/* expand-+fx */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2zb2fxz60zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_25, obj_t BgL_ez00_26)
	{
		{	/* Expand/iarith.scm 230 */
			{
				obj_t BgL_az00_1398;
				obj_t BgL_bz00_1399;

				if (PAIRP(BgL_xz00_25))
					{	/* Expand/iarith.scm 231 */
						obj_t BgL_cdrzd22276zd2_1404;

						BgL_cdrzd22276zd2_1404 = CDR(BgL_xz00_25);
						if (PAIRP(BgL_cdrzd22276zd2_1404))
							{	/* Expand/iarith.scm 231 */
								obj_t BgL_cdrzd22280zd2_1406;

								BgL_cdrzd22280zd2_1406 = CDR(BgL_cdrzd22276zd2_1404);
								if (PAIRP(BgL_cdrzd22280zd2_1406))
									{	/* Expand/iarith.scm 231 */
										if (NULLP(CDR(BgL_cdrzd22280zd2_1406)))
											{	/* Expand/iarith.scm 231 */
												BgL_az00_1398 = CAR(BgL_cdrzd22276zd2_1404);
												BgL_bz00_1399 = CAR(BgL_cdrzd22280zd2_1406);
												{	/* Expand/iarith.scm 234 */
													bool_t BgL_test3885z00_5577;

													if (INTEGERP(BgL_az00_1398))
														{	/* Expand/iarith.scm 234 */
															BgL_test3885z00_5577 = INTEGERP(BgL_bz00_1399);
														}
													else
														{	/* Expand/iarith.scm 234 */
															BgL_test3885z00_5577 = ((bool_t) 0);
														}
													if (BgL_test3885z00_5577)
														{	/* Expand/iarith.scm 234 */
															return ADDFX(BgL_az00_1398, BgL_bz00_1399);
														}
													else
														{	/* Expand/iarith.scm 234 */
															{	/* Expand/iarith.scm 237 */
																obj_t BgL_arg2607z00_1415;
																obj_t BgL_arg2608z00_1416;

																BgL_arg2607z00_1415 =
																	CDR(((obj_t) BgL_xz00_25));
																BgL_arg2608z00_1416 =
																	PROCEDURE_ENTRY(BgL_ez00_26) (BgL_ez00_26,
																	BgL_az00_1398, BgL_ez00_26, BEOA);
																{	/* Expand/iarith.scm 237 */
																	obj_t BgL_tmpz00_5589;

																	BgL_tmpz00_5589 =
																		((obj_t) BgL_arg2607z00_1415);
																	SET_CAR(BgL_tmpz00_5589, BgL_arg2608z00_1416);
																}
															}
															{	/* Expand/iarith.scm 238 */
																obj_t BgL_arg2609z00_1417;
																obj_t BgL_arg2611z00_1418;

																{	/* Expand/iarith.scm 238 */
																	obj_t BgL_pairz00_2999;

																	BgL_pairz00_2999 = CDR(((obj_t) BgL_xz00_25));
																	BgL_arg2609z00_1417 = CDR(BgL_pairz00_2999);
																}
																BgL_arg2611z00_1418 =
																	PROCEDURE_ENTRY(BgL_ez00_26) (BgL_ez00_26,
																	BgL_bz00_1399, BgL_ez00_26, BEOA);
																{	/* Expand/iarith.scm 238 */
																	obj_t BgL_tmpz00_5600;

																	BgL_tmpz00_5600 =
																		((obj_t) BgL_arg2609z00_1417);
																	SET_CAR(BgL_tmpz00_5600, BgL_arg2611z00_1418);
																}
															}
															return BgL_xz00_25;
														}
												}
											}
										else
											{	/* Expand/iarith.scm 231 */
											BgL_tagzd22269zd2_1401:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string3550z00zzexpand_iarithmetiquez00,
													BgL_xz00_25);
											}
									}
								else
									{	/* Expand/iarith.scm 231 */
										goto BgL_tagzd22269zd2_1401;
									}
							}
						else
							{	/* Expand/iarith.scm 231 */
								goto BgL_tagzd22269zd2_1401;
							}
					}
				else
					{	/* Expand/iarith.scm 231 */
						goto BgL_tagzd22269zd2_1401;
					}
			}
		}

	}



/* &expand-+fx */
	obj_t BGl_z62expandzd2zb2fxz02zzexpand_iarithmetiquez00(obj_t BgL_envz00_3459,
		obj_t BgL_xz00_3460, obj_t BgL_ez00_3461)
	{
		{	/* Expand/iarith.scm 230 */
			return
				BGl_expandzd2zb2fxz60zzexpand_iarithmetiquez00(BgL_xz00_3460,
				BgL_ez00_3461);
		}

	}



/* expand--fx */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2zd2fxz00zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_27, obj_t BgL_ez00_28)
	{
		{	/* Expand/iarith.scm 246 */
			{
				obj_t BgL_az00_1420;
				obj_t BgL_bz00_1421;

				if (PAIRP(BgL_xz00_27))
					{	/* Expand/iarith.scm 247 */
						obj_t BgL_cdrzd22294zd2_1426;

						BgL_cdrzd22294zd2_1426 = CDR(BgL_xz00_27);
						if (PAIRP(BgL_cdrzd22294zd2_1426))
							{	/* Expand/iarith.scm 247 */
								obj_t BgL_cdrzd22298zd2_1428;

								BgL_cdrzd22298zd2_1428 = CDR(BgL_cdrzd22294zd2_1426);
								if (PAIRP(BgL_cdrzd22298zd2_1428))
									{	/* Expand/iarith.scm 247 */
										if (NULLP(CDR(BgL_cdrzd22298zd2_1428)))
											{	/* Expand/iarith.scm 247 */
												BgL_az00_1420 = CAR(BgL_cdrzd22294zd2_1426);
												BgL_bz00_1421 = CAR(BgL_cdrzd22298zd2_1428);
												{	/* Expand/iarith.scm 250 */
													bool_t BgL_test3891z00_5618;

													if (INTEGERP(BgL_az00_1420))
														{	/* Expand/iarith.scm 250 */
															BgL_test3891z00_5618 = INTEGERP(BgL_bz00_1421);
														}
													else
														{	/* Expand/iarith.scm 250 */
															BgL_test3891z00_5618 = ((bool_t) 0);
														}
													if (BgL_test3891z00_5618)
														{	/* Expand/iarith.scm 250 */
															return SUBFX(BgL_az00_1420, BgL_bz00_1421);
														}
													else
														{	/* Expand/iarith.scm 250 */
															{	/* Expand/iarith.scm 253 */
																obj_t BgL_arg2624z00_1437;
																obj_t BgL_arg2625z00_1438;

																BgL_arg2624z00_1437 =
																	CDR(((obj_t) BgL_xz00_27));
																BgL_arg2625z00_1438 =
																	PROCEDURE_ENTRY(BgL_ez00_28) (BgL_ez00_28,
																	BgL_az00_1420, BgL_ez00_28, BEOA);
																{	/* Expand/iarith.scm 253 */
																	obj_t BgL_tmpz00_5630;

																	BgL_tmpz00_5630 =
																		((obj_t) BgL_arg2624z00_1437);
																	SET_CAR(BgL_tmpz00_5630, BgL_arg2625z00_1438);
																}
															}
															{	/* Expand/iarith.scm 254 */
																obj_t BgL_arg2626z00_1439;
																obj_t BgL_arg2628z00_1440;

																{	/* Expand/iarith.scm 254 */
																	obj_t BgL_pairz00_3020;

																	BgL_pairz00_3020 = CDR(((obj_t) BgL_xz00_27));
																	BgL_arg2626z00_1439 = CDR(BgL_pairz00_3020);
																}
																BgL_arg2628z00_1440 =
																	PROCEDURE_ENTRY(BgL_ez00_28) (BgL_ez00_28,
																	BgL_bz00_1421, BgL_ez00_28, BEOA);
																{	/* Expand/iarith.scm 254 */
																	obj_t BgL_tmpz00_5641;

																	BgL_tmpz00_5641 =
																		((obj_t) BgL_arg2626z00_1439);
																	SET_CAR(BgL_tmpz00_5641, BgL_arg2628z00_1440);
																}
															}
															return BgL_xz00_27;
														}
												}
											}
										else
											{	/* Expand/iarith.scm 247 */
											BgL_tagzd22287zd2_1423:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string3551z00zzexpand_iarithmetiquez00,
													BgL_xz00_27);
											}
									}
								else
									{	/* Expand/iarith.scm 247 */
										goto BgL_tagzd22287zd2_1423;
									}
							}
						else
							{	/* Expand/iarith.scm 247 */
								goto BgL_tagzd22287zd2_1423;
							}
					}
				else
					{	/* Expand/iarith.scm 247 */
						goto BgL_tagzd22287zd2_1423;
					}
			}
		}

	}



/* &expand--fx */
	obj_t BGl_z62expandzd2zd2fxz62zzexpand_iarithmetiquez00(obj_t BgL_envz00_3462,
		obj_t BgL_xz00_3463, obj_t BgL_ez00_3464)
	{
		{	/* Expand/iarith.scm 246 */
			return
				BGl_expandzd2zd2fxz00zzexpand_iarithmetiquez00(BgL_xz00_3463,
				BgL_ez00_3464);
		}

	}



/* expand-*fx */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2za2fxz70zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_29, obj_t BgL_ez00_30)
	{
		{	/* Expand/iarith.scm 262 */
			{
				obj_t BgL_az00_1442;
				obj_t BgL_bz00_1443;

				if (PAIRP(BgL_xz00_29))
					{	/* Expand/iarith.scm 263 */
						obj_t BgL_cdrzd22312zd2_1448;

						BgL_cdrzd22312zd2_1448 = CDR(BgL_xz00_29);
						if (PAIRP(BgL_cdrzd22312zd2_1448))
							{	/* Expand/iarith.scm 263 */
								obj_t BgL_cdrzd22316zd2_1450;

								BgL_cdrzd22316zd2_1450 = CDR(BgL_cdrzd22312zd2_1448);
								if (PAIRP(BgL_cdrzd22316zd2_1450))
									{	/* Expand/iarith.scm 263 */
										if (NULLP(CDR(BgL_cdrzd22316zd2_1450)))
											{	/* Expand/iarith.scm 263 */
												BgL_az00_1442 = CAR(BgL_cdrzd22312zd2_1448);
												BgL_bz00_1443 = CAR(BgL_cdrzd22316zd2_1450);
												{	/* Expand/iarith.scm 266 */
													bool_t BgL_test3897z00_5659;

													if (INTEGERP(BgL_az00_1442))
														{	/* Expand/iarith.scm 266 */
															BgL_test3897z00_5659 = INTEGERP(BgL_bz00_1443);
														}
													else
														{	/* Expand/iarith.scm 266 */
															BgL_test3897z00_5659 = ((bool_t) 0);
														}
													if (BgL_test3897z00_5659)
														{	/* Expand/iarith.scm 267 */
															obj_t BgL_rz00_1459;

															BgL_rz00_1459 =
																BGl_2za2za2zz__r4_numbers_6_5z00(BgL_az00_1442,
																BgL_bz00_1443);
															{	/* Expand/iarith.scm 268 */
																bool_t BgL_test3899z00_5664;

																if (INTEGERP(BgL_rz00_1459))
																	{	/* Expand/iarith.scm 268 */
																		BgL_test3899z00_5664 =
																			(
																			(long) CINT(BgL_rz00_1459) <
																			(((long) 1) << (int) (((long) 29))));
																	}
																else
																	{	/* Expand/iarith.scm 268 */
																		BgL_test3899z00_5664 = ((bool_t) 0);
																	}
																if (BgL_test3899z00_5664)
																	{	/* Expand/iarith.scm 268 */
																		return BgL_rz00_1459;
																	}
																else
																	{	/* Expand/iarith.scm 271 */
																		obj_t BgL_arg2643z00_1463;

																		{	/* Expand/iarith.scm 271 */
																			obj_t BgL_arg2644z00_1464;

																			{	/* Expand/iarith.scm 271 */
																				obj_t BgL_arg2645z00_1465;
																				obj_t BgL_arg2646z00_1466;

																				BgL_arg2645z00_1465 =
																					PROCEDURE_ENTRY(BgL_ez00_30)
																					(BgL_ez00_30, BgL_az00_1442,
																					BgL_ez00_30, BEOA);
																				{	/* Expand/iarith.scm 271 */
																					obj_t BgL_arg2648z00_1467;

																					BgL_arg2648z00_1467 =
																						PROCEDURE_ENTRY(BgL_ez00_30)
																						(BgL_ez00_30, BgL_bz00_1443,
																						BgL_ez00_30, BEOA);
																					BgL_arg2646z00_1466 =
																						MAKE_YOUNG_PAIR(BgL_arg2648z00_1467,
																						BNIL);
																				}
																				BgL_arg2644z00_1464 =
																					MAKE_YOUNG_PAIR(BgL_arg2645z00_1465,
																					BgL_arg2646z00_1466);
																			}
																			BgL_arg2643z00_1463 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						6)), BgL_arg2644z00_1464);
																		}
																		return
																			BGl_replacez12z12zztools_miscz00
																			(BgL_xz00_29,
																			BGl_epairifyzd2reczd2zztools_miscz00
																			(BgL_arg2643z00_1463, BgL_xz00_29));
																	}
															}
														}
													else
														{	/* Expand/iarith.scm 266 */
															{	/* Expand/iarith.scm 273 */
																obj_t BgL_arg2650z00_1470;
																obj_t BgL_arg2651z00_1471;

																BgL_arg2650z00_1470 =
																	CDR(((obj_t) BgL_xz00_29));
																BgL_arg2651z00_1471 =
																	PROCEDURE_ENTRY(BgL_ez00_30) (BgL_ez00_30,
																	BgL_az00_1442, BgL_ez00_30, BEOA);
																{	/* Expand/iarith.scm 273 */
																	obj_t BgL_tmpz00_5694;

																	BgL_tmpz00_5694 =
																		((obj_t) BgL_arg2650z00_1470);
																	SET_CAR(BgL_tmpz00_5694, BgL_arg2651z00_1471);
																}
															}
															{	/* Expand/iarith.scm 274 */
																obj_t BgL_arg2653z00_1472;
																obj_t BgL_arg2654z00_1473;

																{	/* Expand/iarith.scm 274 */
																	obj_t BgL_pairz00_3044;

																	BgL_pairz00_3044 = CDR(((obj_t) BgL_xz00_29));
																	BgL_arg2653z00_1472 = CDR(BgL_pairz00_3044);
																}
																BgL_arg2654z00_1473 =
																	PROCEDURE_ENTRY(BgL_ez00_30) (BgL_ez00_30,
																	BgL_bz00_1443, BgL_ez00_30, BEOA);
																{	/* Expand/iarith.scm 274 */
																	obj_t BgL_tmpz00_5705;

																	BgL_tmpz00_5705 =
																		((obj_t) BgL_arg2653z00_1472);
																	SET_CAR(BgL_tmpz00_5705, BgL_arg2654z00_1473);
																}
															}
															return BgL_xz00_29;
														}
												}
											}
										else
											{	/* Expand/iarith.scm 263 */
											BgL_tagzd22305zd2_1445:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string3552z00zzexpand_iarithmetiquez00,
													BgL_xz00_29);
											}
									}
								else
									{	/* Expand/iarith.scm 263 */
										goto BgL_tagzd22305zd2_1445;
									}
							}
						else
							{	/* Expand/iarith.scm 263 */
								goto BgL_tagzd22305zd2_1445;
							}
					}
				else
					{	/* Expand/iarith.scm 263 */
						goto BgL_tagzd22305zd2_1445;
					}
			}
		}

	}



/* &expand-*fx */
	obj_t BGl_z62expandzd2za2fxz12zzexpand_iarithmetiquez00(obj_t BgL_envz00_3465,
		obj_t BgL_xz00_3466, obj_t BgL_ez00_3467)
	{
		{	/* Expand/iarith.scm 262 */
			return
				BGl_expandzd2za2fxz70zzexpand_iarithmetiquez00(BgL_xz00_3466,
				BgL_ez00_3467);
		}

	}



/* expand-/fx */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2zf2fxz20zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_31, obj_t BgL_ez00_32)
	{
		{	/* Expand/iarith.scm 282 */
			{
				obj_t BgL_xz00_1475;
				obj_t BgL_yz00_1476;

				if (PAIRP(BgL_xz00_31))
					{	/* Expand/iarith.scm 283 */
						obj_t BgL_cdrzd22330zd2_1481;

						BgL_cdrzd22330zd2_1481 = CDR(BgL_xz00_31);
						if (PAIRP(BgL_cdrzd22330zd2_1481))
							{	/* Expand/iarith.scm 283 */
								obj_t BgL_cdrzd22334zd2_1483;

								BgL_cdrzd22334zd2_1483 = CDR(BgL_cdrzd22330zd2_1481);
								if (PAIRP(BgL_cdrzd22334zd2_1483))
									{	/* Expand/iarith.scm 283 */
										if (NULLP(CDR(BgL_cdrzd22334zd2_1483)))
											{	/* Expand/iarith.scm 283 */
												BgL_xz00_1475 = CAR(BgL_cdrzd22330zd2_1481);
												BgL_yz00_1476 = CAR(BgL_cdrzd22334zd2_1483);
												{	/* Expand/iarith.scm 286 */
													bool_t BgL_test3905z00_5723;

													if (INTEGERP(BgL_xz00_1475))
														{	/* Expand/iarith.scm 286 */
															if (INTEGERP(BgL_yz00_1476))
																{	/* Expand/iarith.scm 286 */
																	if (
																		((long) CINT(BgL_yz00_1476) == ((long) 0)))
																		{	/* Expand/iarith.scm 286 */
																			BgL_test3905z00_5723 = ((bool_t) 0);
																		}
																	else
																		{	/* Expand/iarith.scm 286 */
																			BgL_test3905z00_5723 = ((bool_t) 1);
																		}
																}
															else
																{	/* Expand/iarith.scm 286 */
																	BgL_test3905z00_5723 = ((bool_t) 0);
																}
														}
													else
														{	/* Expand/iarith.scm 286 */
															BgL_test3905z00_5723 = ((bool_t) 0);
														}
													if (BgL_test3905z00_5723)
														{	/* Expand/iarith.scm 286 */
															return
																BINT(
																((long) CINT(BgL_xz00_1475) /
																	(long) CINT(BgL_yz00_1476)));
														}
													else
														{	/* Expand/iarith.scm 289 */
															obj_t BgL_arg2669z00_1494;

															{	/* Expand/iarith.scm 289 */
																obj_t BgL_arg2670z00_1495;
																obj_t BgL_arg2671z00_1496;

																BgL_arg2670z00_1495 =
																	PROCEDURE_ENTRY(BgL_ez00_32) (BgL_ez00_32,
																	BgL_xz00_1475, BgL_ez00_32, BEOA);
																{	/* Expand/iarith.scm 289 */
																	obj_t BgL_arg2673z00_1497;

																	BgL_arg2673z00_1497 =
																		PROCEDURE_ENTRY(BgL_ez00_32) (BgL_ez00_32,
																		BgL_yz00_1476, BgL_ez00_32, BEOA);
																	BgL_arg2671z00_1496 =
																		MAKE_YOUNG_PAIR(BgL_arg2673z00_1497, BNIL);
																}
																BgL_arg2669z00_1494 =
																	MAKE_YOUNG_PAIR(BgL_arg2670z00_1495,
																	BgL_arg2671z00_1496);
															}
															return
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
																BgL_arg2669z00_1494);
											}}}
										else
											{	/* Expand/iarith.scm 283 */
											BgL_tagzd22323zd2_1478:
												return
													BGl_errorz00zz__errorz00(BFALSE,
													BGl_string3553z00zzexpand_iarithmetiquez00,
													BgL_xz00_31);
											}
									}
								else
									{	/* Expand/iarith.scm 283 */
										goto BgL_tagzd22323zd2_1478;
									}
							}
						else
							{	/* Expand/iarith.scm 283 */
								goto BgL_tagzd22323zd2_1478;
							}
					}
				else
					{	/* Expand/iarith.scm 283 */
						goto BgL_tagzd22323zd2_1478;
					}
			}
		}

	}



/* &expand-/fx */
	obj_t BGl_z62expandzd2zf2fxz42zzexpand_iarithmetiquez00(obj_t BgL_envz00_3468,
		obj_t BgL_xz00_3469, obj_t BgL_ez00_3470)
	{
		{	/* Expand/iarith.scm 282 */
			return
				BGl_expandzd2zf2fxz20zzexpand_iarithmetiquez00(BgL_xz00_3469,
				BgL_ez00_3470);
		}

	}



/* expand-maxfx */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2maxfxzd2zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_33, obj_t BgL_ez00_34)
	{
		{	/* Expand/iarith.scm 296 */
			{
				obj_t BgL_az00_1506;
				obj_t BgL_bz00_1507;
				obj_t BgL_az00_1503;
				obj_t BgL_bz00_1504;

				if (PAIRP(BgL_xz00_33))
					{	/* Expand/iarith.scm 297 */
						obj_t BgL_cdrzd22350zd2_1512;

						BgL_cdrzd22350zd2_1512 = CDR(BgL_xz00_33);
						if (PAIRP(BgL_cdrzd22350zd2_1512))
							{	/* Expand/iarith.scm 297 */
								if (NULLP(CDR(BgL_cdrzd22350zd2_1512)))
									{	/* Expand/iarith.scm 297 */
										obj_t BgL_arg2678z00_1516;

										BgL_arg2678z00_1516 = CAR(BgL_cdrzd22350zd2_1512);
										return
											PROCEDURE_ENTRY(BgL_ez00_34) (BgL_ez00_34,
											BgL_arg2678z00_1516, BgL_ez00_34, BEOA);
									}
								else
									{	/* Expand/iarith.scm 297 */
										obj_t BgL_cdrzd22366zd2_1518;

										BgL_cdrzd22366zd2_1518 =
											CDR(((obj_t) BgL_cdrzd22350zd2_1512));
										if (PAIRP(BgL_cdrzd22366zd2_1518))
											{	/* Expand/iarith.scm 297 */
												if (NULLP(CDR(BgL_cdrzd22366zd2_1518)))
													{	/* Expand/iarith.scm 297 */
														obj_t BgL_arg2682z00_1522;
														obj_t BgL_arg2683z00_1523;

														BgL_arg2682z00_1522 =
															CAR(((obj_t) BgL_cdrzd22350zd2_1512));
														BgL_arg2683z00_1523 = CAR(BgL_cdrzd22366zd2_1518);
														BgL_az00_1503 = BgL_arg2682z00_1522;
														BgL_bz00_1504 = BgL_arg2683z00_1523;
														{	/* Expand/iarith.scm 302 */
															bool_t BgL_test3914z00_5777;

															if (INTEGERP(BgL_az00_1503))
																{	/* Expand/iarith.scm 302 */
																	BgL_test3914z00_5777 =
																		INTEGERP(BgL_bz00_1504);
																}
															else
																{	/* Expand/iarith.scm 302 */
																	BgL_test3914z00_5777 = ((bool_t) 0);
																}
															if (BgL_test3914z00_5777)
																{	/* Expand/iarith.scm 302 */
																	if (
																		((long) CINT(BgL_az00_1503) >
																			(long) CINT(BgL_bz00_1504)))
																		{	/* Expand/iarith.scm 303 */
																			return BgL_az00_1503;
																		}
																	else
																		{	/* Expand/iarith.scm 303 */
																			return BgL_bz00_1504;
																		}
																}
															else
																{	/* Expand/iarith.scm 306 */
																	obj_t BgL_arg2694z00_1537;

																	{	/* Expand/iarith.scm 306 */
																		obj_t BgL_arg2695z00_1538;

																		{	/* Expand/iarith.scm 306 */
																			obj_t BgL_arg2696z00_1539;
																			obj_t BgL_arg2698z00_1540;

																			{	/* Expand/iarith.scm 306 */
																				obj_t BgL_arg2699z00_1541;
																				obj_t BgL_arg2700z00_1542;

																				{	/* Expand/iarith.scm 306 */
																					obj_t BgL_arg2702z00_1543;

																					{	/* Expand/iarith.scm 306 */
																						obj_t BgL_arg2703z00_1544;

																						BgL_arg2703z00_1544 =
																							PROCEDURE_ENTRY(BgL_ez00_34)
																							(BgL_ez00_34, BgL_az00_1503,
																							BgL_ez00_34, BEOA);
																						BgL_arg2702z00_1543 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2703z00_1544, BNIL);
																					}
																					BgL_arg2699z00_1541 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 20)),
																						BgL_arg2702z00_1543);
																				}
																				{	/* Expand/iarith.scm 307 */
																					obj_t BgL_arg2704z00_1545;

																					{	/* Expand/iarith.scm 307 */
																						obj_t BgL_arg2705z00_1546;

																						{	/* Expand/iarith.scm 307 */
																							obj_t BgL_arg2706z00_1547;

																							BgL_arg2706z00_1547 =
																								PROCEDURE_ENTRY(BgL_ez00_34)
																								(BgL_ez00_34, BgL_bz00_1504,
																								BgL_ez00_34, BEOA);
																							BgL_arg2705z00_1546 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2706z00_1547, BNIL);
																						}
																						BgL_arg2704z00_1545 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 21)),
																							BgL_arg2705z00_1546);
																					}
																					BgL_arg2700z00_1542 =
																						MAKE_YOUNG_PAIR(BgL_arg2704z00_1545,
																						BNIL);
																				}
																				BgL_arg2696z00_1539 =
																					MAKE_YOUNG_PAIR(BgL_arg2699z00_1541,
																					BgL_arg2700z00_1542);
																			}
																			{	/* Expand/iarith.scm 308 */
																				obj_t BgL_arg2707z00_1548;

																				{	/* Expand/iarith.scm 308 */
																					obj_t BgL_arg2708z00_1549;

																					{	/* Expand/iarith.scm 308 */
																						obj_t BgL_arg2709z00_1550;
																						obj_t BgL_arg2710z00_1551;

																						{	/* Expand/iarith.scm 308 */
																							obj_t BgL_arg2712z00_1552;

																							{	/* Expand/iarith.scm 308 */
																								obj_t BgL_arg2713z00_1553;

																								BgL_arg2713z00_1553 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 21)), BNIL);
																								BgL_arg2712z00_1552 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 20)),
																									BgL_arg2713z00_1553);
																							}
																							BgL_arg2709z00_1550 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 14)),
																								BgL_arg2712z00_1552);
																						}
																						{	/* Expand/iarith.scm 308 */
																							obj_t BgL_arg2714z00_1554;

																							BgL_arg2714z00_1554 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 21)), BNIL);
																							BgL_arg2710z00_1551 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 20)),
																								BgL_arg2714z00_1554);
																						}
																						BgL_arg2708z00_1549 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2709z00_1550,
																							BgL_arg2710z00_1551);
																					}
																					BgL_arg2707z00_1548 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 22)),
																						BgL_arg2708z00_1549);
																				}
																				BgL_arg2698z00_1540 =
																					MAKE_YOUNG_PAIR(BgL_arg2707z00_1548,
																					BNIL);
																			}
																			BgL_arg2695z00_1538 =
																				MAKE_YOUNG_PAIR(BgL_arg2696z00_1539,
																				BgL_arg2698z00_1540);
																		}
																		BgL_arg2694z00_1537 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					23)), BgL_arg2695z00_1538);
																	}
																	return
																		BGl_replacez12z12zztools_miscz00
																		(BgL_xz00_33,
																		BGl_epairifyzd2reczd2zztools_miscz00
																		(BgL_arg2694z00_1537, BgL_xz00_33));
																}
														}
													}
												else
													{	/* Expand/iarith.scm 297 */
														obj_t BgL_arg2684z00_1525;
														obj_t BgL_arg2686z00_1526;

														BgL_arg2684z00_1525 =
															CAR(((obj_t) BgL_cdrzd22350zd2_1512));
														BgL_arg2686z00_1526 =
															CDR(((obj_t) BgL_cdrzd22350zd2_1512));
														BgL_az00_1506 = BgL_arg2684z00_1525;
														BgL_bz00_1507 = BgL_arg2686z00_1526;
													BgL_tagzd22342zd2_1508:
														{	/* Expand/iarith.scm 310 */
															obj_t BgL_arg2715z00_1556;

															{	/* Expand/iarith.scm 310 */
																obj_t BgL_arg2716z00_1557;

																{	/* Expand/iarith.scm 310 */
																	obj_t BgL_arg2717z00_1558;

																	{	/* Expand/iarith.scm 310 */
																		obj_t BgL_arg2718z00_1559;

																		{	/* Expand/iarith.scm 310 */
																			obj_t BgL_arg2720z00_1560;

																			{	/* Expand/iarith.scm 310 */
																				obj_t BgL_arg2722z00_1561;

																				BgL_arg2722z00_1561 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_bz00_1507, BNIL);
																				BgL_arg2720z00_1560 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							24)), BgL_arg2722z00_1561);
																			}
																			BgL_arg2718z00_1559 =
																				MAKE_YOUNG_PAIR(BgL_arg2720z00_1560,
																				BNIL);
																		}
																		BgL_arg2717z00_1558 =
																			MAKE_YOUNG_PAIR(BgL_az00_1506,
																			BgL_arg2718z00_1559);
																	}
																	BgL_arg2716z00_1557 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 24)),
																		BgL_arg2717z00_1558);
																}
																BgL_arg2715z00_1556 =
																	PROCEDURE_ENTRY(BgL_ez00_34) (BgL_ez00_34,
																	BgL_arg2716z00_1557, BgL_ez00_34, BEOA);
															}
															return
																BGl_replacez12z12zztools_miscz00(BgL_xz00_33,
																BGl_epairifyzd2reczd2zztools_miscz00
																(BgL_arg2715z00_1556, BgL_xz00_33));
														}
													}
											}
										else
											{	/* Expand/iarith.scm 297 */
												obj_t BgL_arg2688z00_1529;
												obj_t BgL_arg2689z00_1530;

												BgL_arg2688z00_1529 =
													CAR(((obj_t) BgL_cdrzd22350zd2_1512));
												BgL_arg2689z00_1530 =
													CDR(((obj_t) BgL_cdrzd22350zd2_1512));
												{
													obj_t BgL_bz00_5845;
													obj_t BgL_az00_5844;

													BgL_az00_5844 = BgL_arg2688z00_1529;
													BgL_bz00_5845 = BgL_arg2689z00_1530;
													BgL_bz00_1507 = BgL_bz00_5845;
													BgL_az00_1506 = BgL_az00_5844;
													goto BgL_tagzd22342zd2_1508;
												}
											}
									}
							}
						else
							{	/* Expand/iarith.scm 297 */
							BgL_tagzd22343zd2_1509:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string3554z00zzexpand_iarithmetiquez00, BgL_xz00_33);
							}
					}
				else
					{	/* Expand/iarith.scm 297 */
						goto BgL_tagzd22343zd2_1509;
					}
			}
		}

	}



/* &expand-maxfx */
	obj_t BGl_z62expandzd2maxfxzb0zzexpand_iarithmetiquez00(obj_t BgL_envz00_3471,
		obj_t BgL_xz00_3472, obj_t BgL_ez00_3473)
	{
		{	/* Expand/iarith.scm 296 */
			return
				BGl_expandzd2maxfxzd2zzexpand_iarithmetiquez00(BgL_xz00_3472,
				BgL_ez00_3473);
		}

	}



/* expand-minfx */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2minfxzd2zzexpand_iarithmetiquez00(obj_t
		BgL_xz00_35, obj_t BgL_ez00_36)
	{
		{	/* Expand/iarith.scm 317 */
			{
				obj_t BgL_az00_1567;
				obj_t BgL_bz00_1568;
				obj_t BgL_az00_1564;
				obj_t BgL_bz00_1565;

				if (PAIRP(BgL_xz00_35))
					{	/* Expand/iarith.scm 318 */
						obj_t BgL_cdrzd22423zd2_1573;

						BgL_cdrzd22423zd2_1573 = CDR(BgL_xz00_35);
						if (PAIRP(BgL_cdrzd22423zd2_1573))
							{	/* Expand/iarith.scm 318 */
								if (NULLP(CDR(BgL_cdrzd22423zd2_1573)))
									{	/* Expand/iarith.scm 318 */
										obj_t BgL_arg2727z00_1577;

										BgL_arg2727z00_1577 = CAR(BgL_cdrzd22423zd2_1573);
										return
											PROCEDURE_ENTRY(BgL_ez00_36) (BgL_ez00_36,
											BgL_arg2727z00_1577, BgL_ez00_36, BEOA);
									}
								else
									{	/* Expand/iarith.scm 318 */
										obj_t BgL_cdrzd22439zd2_1579;

										BgL_cdrzd22439zd2_1579 =
											CDR(((obj_t) BgL_cdrzd22423zd2_1573));
										if (PAIRP(BgL_cdrzd22439zd2_1579))
											{	/* Expand/iarith.scm 318 */
												if (NULLP(CDR(BgL_cdrzd22439zd2_1579)))
													{	/* Expand/iarith.scm 318 */
														obj_t BgL_arg2731z00_1583;
														obj_t BgL_arg2732z00_1584;

														BgL_arg2731z00_1583 =
															CAR(((obj_t) BgL_cdrzd22423zd2_1573));
														BgL_arg2732z00_1584 = CAR(BgL_cdrzd22439zd2_1579);
														BgL_az00_1564 = BgL_arg2731z00_1583;
														BgL_bz00_1565 = BgL_arg2732z00_1584;
														{	/* Expand/iarith.scm 323 */
															bool_t BgL_test3922z00_5872;

															if (INTEGERP(BgL_az00_1564))
																{	/* Expand/iarith.scm 323 */
																	BgL_test3922z00_5872 =
																		INTEGERP(BgL_bz00_1565);
																}
															else
																{	/* Expand/iarith.scm 323 */
																	BgL_test3922z00_5872 = ((bool_t) 0);
																}
															if (BgL_test3922z00_5872)
																{	/* Expand/iarith.scm 323 */
																	if (
																		((long) CINT(BgL_az00_1564) <
																			(long) CINT(BgL_bz00_1565)))
																		{	/* Expand/iarith.scm 324 */
																			return BgL_az00_1564;
																		}
																	else
																		{	/* Expand/iarith.scm 324 */
																			return BgL_bz00_1565;
																		}
																}
															else
																{	/* Expand/iarith.scm 327 */
																	obj_t BgL_arg2750z00_1598;

																	{	/* Expand/iarith.scm 327 */
																		obj_t BgL_arg2751z00_1599;

																		{	/* Expand/iarith.scm 327 */
																			obj_t BgL_arg2752z00_1600;
																			obj_t BgL_arg2753z00_1601;

																			{	/* Expand/iarith.scm 327 */
																				obj_t BgL_arg2756z00_1602;
																				obj_t BgL_arg2759z00_1603;

																				{	/* Expand/iarith.scm 327 */
																					obj_t BgL_arg2760z00_1604;

																					{	/* Expand/iarith.scm 327 */
																						obj_t BgL_arg2762z00_1605;

																						BgL_arg2762z00_1605 =
																							PROCEDURE_ENTRY(BgL_ez00_36)
																							(BgL_ez00_36, BgL_az00_1564,
																							BgL_ez00_36, BEOA);
																						BgL_arg2760z00_1604 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2762z00_1605, BNIL);
																					}
																					BgL_arg2756z00_1602 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 20)),
																						BgL_arg2760z00_1604);
																				}
																				{	/* Expand/iarith.scm 328 */
																					obj_t BgL_arg2763z00_1606;

																					{	/* Expand/iarith.scm 328 */
																						obj_t BgL_arg2764z00_1607;

																						{	/* Expand/iarith.scm 328 */
																							obj_t BgL_arg2765z00_1608;

																							BgL_arg2765z00_1608 =
																								PROCEDURE_ENTRY(BgL_ez00_36)
																								(BgL_ez00_36, BgL_bz00_1565,
																								BgL_ez00_36, BEOA);
																							BgL_arg2764z00_1607 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2765z00_1608, BNIL);
																						}
																						BgL_arg2763z00_1606 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 21)),
																							BgL_arg2764z00_1607);
																					}
																					BgL_arg2759z00_1603 =
																						MAKE_YOUNG_PAIR(BgL_arg2763z00_1606,
																						BNIL);
																				}
																				BgL_arg2752z00_1600 =
																					MAKE_YOUNG_PAIR(BgL_arg2756z00_1602,
																					BgL_arg2759z00_1603);
																			}
																			{	/* Expand/iarith.scm 329 */
																				obj_t BgL_arg2766z00_1609;

																				{	/* Expand/iarith.scm 329 */
																					obj_t BgL_arg2767z00_1610;

																					{	/* Expand/iarith.scm 329 */
																						obj_t BgL_arg2768z00_1611;
																						obj_t BgL_arg2770z00_1612;

																						{	/* Expand/iarith.scm 329 */
																							obj_t BgL_arg2771z00_1613;

																							{	/* Expand/iarith.scm 329 */
																								obj_t BgL_arg2774z00_1614;

																								BgL_arg2774z00_1614 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 21)), BNIL);
																								BgL_arg2771z00_1613 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 20)),
																									BgL_arg2774z00_1614);
																							}
																							BgL_arg2768z00_1611 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 12)),
																								BgL_arg2771z00_1613);
																						}
																						{	/* Expand/iarith.scm 329 */
																							obj_t BgL_arg2778z00_1615;

																							BgL_arg2778z00_1615 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 21)), BNIL);
																							BgL_arg2770z00_1612 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 20)),
																								BgL_arg2778z00_1615);
																						}
																						BgL_arg2767z00_1610 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2768z00_1611,
																							BgL_arg2770z00_1612);
																					}
																					BgL_arg2766z00_1609 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 22)),
																						BgL_arg2767z00_1610);
																				}
																				BgL_arg2753z00_1601 =
																					MAKE_YOUNG_PAIR(BgL_arg2766z00_1609,
																					BNIL);
																			}
																			BgL_arg2751z00_1599 =
																				MAKE_YOUNG_PAIR(BgL_arg2752z00_1600,
																				BgL_arg2753z00_1601);
																		}
																		BgL_arg2750z00_1598 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					23)), BgL_arg2751z00_1599);
																	}
																	return
																		BGl_replacez12z12zztools_miscz00
																		(BgL_xz00_35,
																		BGl_epairifyzd2reczd2zztools_miscz00
																		(BgL_arg2750z00_1598, BgL_xz00_35));
																}
														}
													}
												else
													{	/* Expand/iarith.scm 318 */
														obj_t BgL_arg2734z00_1586;
														obj_t BgL_arg2739z00_1587;

														BgL_arg2734z00_1586 =
															CAR(((obj_t) BgL_cdrzd22423zd2_1573));
														BgL_arg2739z00_1587 =
															CDR(((obj_t) BgL_cdrzd22423zd2_1573));
														BgL_az00_1567 = BgL_arg2734z00_1586;
														BgL_bz00_1568 = BgL_arg2739z00_1587;
													BgL_tagzd22415zd2_1569:
														{	/* Expand/iarith.scm 331 */
															obj_t BgL_arg2779z00_1617;

															{	/* Expand/iarith.scm 331 */
																obj_t BgL_arg2782z00_1618;

																{	/* Expand/iarith.scm 331 */
																	obj_t BgL_arg2783z00_1619;

																	{	/* Expand/iarith.scm 331 */
																		obj_t BgL_arg2784z00_1620;

																		{	/* Expand/iarith.scm 331 */
																			obj_t BgL_arg2787z00_1621;

																			{	/* Expand/iarith.scm 331 */
																				obj_t BgL_arg2788z00_1622;

																				BgL_arg2788z00_1622 =
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_bz00_1568, BNIL);
																				BgL_arg2787z00_1621 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							25)), BgL_arg2788z00_1622);
																			}
																			BgL_arg2784z00_1620 =
																				MAKE_YOUNG_PAIR(BgL_arg2787z00_1621,
																				BNIL);
																		}
																		BgL_arg2783z00_1619 =
																			MAKE_YOUNG_PAIR(BgL_az00_1567,
																			BgL_arg2784z00_1620);
																	}
																	BgL_arg2782z00_1618 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 25)),
																		BgL_arg2783z00_1619);
																}
																BgL_arg2779z00_1617 =
																	PROCEDURE_ENTRY(BgL_ez00_36) (BgL_ez00_36,
																	BgL_arg2782z00_1618, BgL_ez00_36, BEOA);
															}
															return
																BGl_replacez12z12zztools_miscz00(BgL_xz00_35,
																BGl_epairifyzd2reczd2zztools_miscz00
																(BgL_arg2779z00_1617, BgL_xz00_35));
														}
													}
											}
										else
											{	/* Expand/iarith.scm 318 */
												obj_t BgL_arg2742z00_1590;
												obj_t BgL_arg2743z00_1591;

												BgL_arg2742z00_1590 =
													CAR(((obj_t) BgL_cdrzd22423zd2_1573));
												BgL_arg2743z00_1591 =
													CDR(((obj_t) BgL_cdrzd22423zd2_1573));
												{
													obj_t BgL_bz00_5940;
													obj_t BgL_az00_5939;

													BgL_az00_5939 = BgL_arg2742z00_1590;
													BgL_bz00_5940 = BgL_arg2743z00_1591;
													BgL_bz00_1568 = BgL_bz00_5940;
													BgL_az00_1567 = BgL_az00_5939;
													goto BgL_tagzd22415zd2_1569;
												}
											}
									}
							}
						else
							{	/* Expand/iarith.scm 318 */
							BgL_tagzd22416zd2_1570:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string3555z00zzexpand_iarithmetiquez00, BgL_xz00_35);
							}
					}
				else
					{	/* Expand/iarith.scm 318 */
						goto BgL_tagzd22416zd2_1570;
					}
			}
		}

	}



/* &expand-minfx */
	obj_t BGl_z62expandzd2minfxzb0zzexpand_iarithmetiquez00(obj_t BgL_envz00_3474,
		obj_t BgL_xz00_3475, obj_t BgL_ez00_3476)
	{
		{	/* Expand/iarith.scm 317 */
			return
				BGl_expandzd2minfxzd2zzexpand_iarithmetiquez00(BgL_xz00_3475,
				BgL_ez00_3476);
		}

	}



/* expand-bit-lsh */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2bitzd2lshz00zzexpand_iarithmetiquez00(obj_t BgL_xz00_37,
		obj_t BgL_ez00_38)
	{
		{	/* Expand/iarith.scm 353 */
			{
				obj_t BgL_nz00_1623;
				obj_t BgL_shiftz00_1624;

				if (PAIRP(BgL_xz00_37))
					{	/* Expand/iarith.scm 353 */
						obj_t BgL_cdrzd22511zd2_1629;

						BgL_cdrzd22511zd2_1629 = CDR(BgL_xz00_37);
						if (PAIRP(BgL_cdrzd22511zd2_1629))
							{	/* Expand/iarith.scm 353 */
								obj_t BgL_carzd22514zd2_1631;
								obj_t BgL_cdrzd22515zd2_1632;

								BgL_carzd22514zd2_1631 = CAR(BgL_cdrzd22511zd2_1629);
								BgL_cdrzd22515zd2_1632 = CDR(BgL_cdrzd22511zd2_1629);
								if (INTEGERP(BgL_carzd22514zd2_1631))
									{	/* Expand/iarith.scm 353 */
										if (PAIRP(BgL_cdrzd22515zd2_1632))
											{	/* Expand/iarith.scm 353 */
												obj_t BgL_carzd22519zd2_1635;

												BgL_carzd22519zd2_1635 = CAR(BgL_cdrzd22515zd2_1632);
												if (INTEGERP(BgL_carzd22519zd2_1635))
													{	/* Expand/iarith.scm 353 */
														if (NULLP(CDR(BgL_cdrzd22515zd2_1632)))
															{	/* Expand/iarith.scm 353 */
																BgL_nz00_1623 = BgL_carzd22514zd2_1631;
																BgL_shiftz00_1624 = BgL_carzd22519zd2_1635;
																{	/* Expand/iarith.scm 353 */
																	bool_t BgL_test3931z00_5960;

																	if (
																		((long) CINT(BgL_shiftz00_1624) <=
																			((long) 31)))
																		{	/* Expand/iarith.scm 353 */
																			if (
																				((long) CINT(BgL_nz00_1623) >=
																					((long) 0)))
																				{	/* Expand/iarith.scm 353 */
																					if (
																						(((long) CINT(BgL_nz00_1623) <<
																								(int) (
																									(long)
																									CINT(BgL_shiftz00_1624))) >=
																							((long) 0)))
																						{	/* Expand/iarith.scm 353 */
																							BgL_test3931z00_5960 =
																								(
																								((long) CINT(BgL_nz00_1623) <<
																									(int) (
																										(long)
																										CINT(BgL_shiftz00_1624))) <=
																								((long) 268435456));
																						}
																					else
																						{	/* Expand/iarith.scm 353 */
																							BgL_test3931z00_5960 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 353 */
																					BgL_test3931z00_5960 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 353 */
																			BgL_test3931z00_5960 = ((bool_t) 0);
																		}
																	if (BgL_test3931z00_5960)
																		{	/* Expand/iarith.scm 353 */
																			return
																				BINT(
																				((long) CINT(BgL_nz00_1623) <<
																					(int) (
																						(long) CINT(BgL_shiftz00_1624))));
																		}
																	else
																		{	/* Expand/iarith.scm 353 */
																			obj_t BgL_arg2810z00_1649;

																			if (NULLP(BgL_xz00_37))
																				{	/* Expand/iarith.scm 353 */
																					BgL_arg2810z00_1649 = BNIL;
																				}
																			else
																				{	/* Expand/iarith.scm 353 */
																					obj_t BgL_head1018z00_1652;

																					{	/* Expand/iarith.scm 353 */
																						obj_t BgL_res3406z00_3138;

																						BgL_res3406z00_3138 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1018z00_1652 =
																							BgL_res3406z00_3138;
																					}
																					{
																						obj_t BgL_l1016z00_1654;
																						obj_t BgL_tail1019z00_1655;

																						BgL_l1016z00_1654 = BgL_xz00_37;
																						BgL_tail1019z00_1655 =
																							BgL_head1018z00_1652;
																					BgL_zc3z04anonymousza32812ze3z87_1656:
																						if (NULLP
																							(BgL_l1016z00_1654))
																							{	/* Expand/iarith.scm 353 */
																								BgL_arg2810z00_1649 =
																									CDR(BgL_head1018z00_1652);
																							}
																						else
																							{	/* Expand/iarith.scm 353 */
																								obj_t BgL_newtail1020z00_1658;

																								{	/* Expand/iarith.scm 353 */
																									obj_t BgL_arg2815z00_1660;

																									{	/* Expand/iarith.scm 353 */
																										obj_t BgL_xz00_1661;

																										BgL_xz00_1661 =
																											CAR(
																											((obj_t)
																												BgL_l1016z00_1654));
																										BgL_arg2815z00_1660 =
																											PROCEDURE_ENTRY
																											(BgL_ez00_38)
																											(BgL_ez00_38,
																											BgL_xz00_1661,
																											BgL_ez00_38, BEOA);
																									}
																									{	/* Expand/iarith.scm 353 */
																										obj_t BgL_res3408z00_3142;

																										BgL_res3408z00_3142 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2815z00_1660,
																											BNIL);
																										BgL_newtail1020z00_1658 =
																											BgL_res3408z00_3142;
																									}
																								}
																								SET_CDR(BgL_tail1019z00_1655,
																									BgL_newtail1020z00_1658);
																								{	/* Expand/iarith.scm 353 */
																									obj_t BgL_arg2814z00_1659;

																									BgL_arg2814z00_1659 =
																										CDR(
																										((obj_t)
																											BgL_l1016z00_1654));
																									{
																										obj_t BgL_tail1019z00_6001;
																										obj_t BgL_l1016z00_6000;

																										BgL_l1016z00_6000 =
																											BgL_arg2814z00_1659;
																										BgL_tail1019z00_6001 =
																											BgL_newtail1020z00_1658;
																										BgL_tail1019z00_1655 =
																											BgL_tail1019z00_6001;
																										BgL_l1016z00_1654 =
																											BgL_l1016z00_6000;
																										goto
																											BgL_zc3z04anonymousza32812ze3z87_1656;
																									}
																								}
																							}
																					}
																				}
																			return
																				BGl_replacez12z12zztools_miscz00
																				(BgL_xz00_37,
																				BGl_epairifyzd2reczd2zztools_miscz00
																				(BgL_arg2810z00_1649, BgL_xz00_37));
																		}
																}
															}
														else
															{	/* Expand/iarith.scm 353 */
															BgL_tagzd22504zd2_1626:
																{	/* Expand/iarith.scm 353 */
																	obj_t BgL_arg2819z00_1669;

																	if (NULLP(BgL_xz00_37))
																		{	/* Expand/iarith.scm 353 */
																			BgL_arg2819z00_1669 = BNIL;
																		}
																	else
																		{	/* Expand/iarith.scm 353 */
																			obj_t BgL_head1023z00_1672;

																			{	/* Expand/iarith.scm 353 */
																				obj_t BgL_res3410z00_3147;

																				BgL_res3410z00_3147 =
																					MAKE_YOUNG_PAIR(BNIL, BNIL);
																				BgL_head1023z00_1672 =
																					BgL_res3410z00_3147;
																			}
																			{
																				obj_t BgL_l1021z00_1674;
																				obj_t BgL_tail1024z00_1675;

																				BgL_l1021z00_1674 = BgL_xz00_37;
																				BgL_tail1024z00_1675 =
																					BgL_head1023z00_1672;
																			BgL_zc3z04anonymousza32821ze3z87_1676:
																				if (NULLP(BgL_l1021z00_1674))
																					{	/* Expand/iarith.scm 353 */
																						BgL_arg2819z00_1669 =
																							CDR(BgL_head1023z00_1672);
																					}
																				else
																					{	/* Expand/iarith.scm 353 */
																						obj_t BgL_newtail1025z00_1678;

																						{	/* Expand/iarith.scm 353 */
																							obj_t BgL_arg2825z00_1680;

																							{	/* Expand/iarith.scm 353 */
																								obj_t BgL_xz00_1681;

																								BgL_xz00_1681 =
																									CAR(
																									((obj_t) BgL_l1021z00_1674));
																								BgL_arg2825z00_1680 =
																									PROCEDURE_ENTRY(BgL_ez00_38)
																									(BgL_ez00_38, BgL_xz00_1681,
																									BgL_ez00_38, BEOA);
																							}
																							{	/* Expand/iarith.scm 353 */
																								obj_t BgL_res3412z00_3151;

																								BgL_res3412z00_3151 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2825z00_1680, BNIL);
																								BgL_newtail1025z00_1678 =
																									BgL_res3412z00_3151;
																							}
																						}
																						SET_CDR(BgL_tail1024z00_1675,
																							BgL_newtail1025z00_1678);
																						{	/* Expand/iarith.scm 353 */
																							obj_t BgL_arg2824z00_1679;

																							BgL_arg2824z00_1679 =
																								CDR(
																								((obj_t) BgL_l1021z00_1674));
																							{
																								obj_t BgL_tail1024z00_6022;
																								obj_t BgL_l1021z00_6021;

																								BgL_l1021z00_6021 =
																									BgL_arg2824z00_1679;
																								BgL_tail1024z00_6022 =
																									BgL_newtail1025z00_1678;
																								BgL_tail1024z00_1675 =
																									BgL_tail1024z00_6022;
																								BgL_l1021z00_1674 =
																									BgL_l1021z00_6021;
																								goto
																									BgL_zc3z04anonymousza32821ze3z87_1676;
																							}
																						}
																					}
																			}
																		}
																	return
																		BGl_replacez12z12zztools_miscz00
																		(BgL_xz00_37,
																		BGl_epairifyzd2reczd2zztools_miscz00
																		(BgL_arg2819z00_1669, BgL_xz00_37));
																}
															}
													}
												else
													{	/* Expand/iarith.scm 353 */
														goto BgL_tagzd22504zd2_1626;
													}
											}
										else
											{	/* Expand/iarith.scm 353 */
												goto BgL_tagzd22504zd2_1626;
											}
									}
								else
									{	/* Expand/iarith.scm 353 */
										goto BgL_tagzd22504zd2_1626;
									}
							}
						else
							{	/* Expand/iarith.scm 353 */
								goto BgL_tagzd22504zd2_1626;
							}
					}
				else
					{	/* Expand/iarith.scm 353 */
						goto BgL_tagzd22504zd2_1626;
					}
			}
		}

	}



/* &expand-bit-lsh */
	obj_t BGl_z62expandzd2bitzd2lshz62zzexpand_iarithmetiquez00(obj_t
		BgL_envz00_3477, obj_t BgL_xz00_3478, obj_t BgL_ez00_3479)
	{
		{	/* Expand/iarith.scm 353 */
			return
				BGl_expandzd2bitzd2lshz00zzexpand_iarithmetiquez00(BgL_xz00_3478,
				BgL_ez00_3479);
		}

	}



/* expand-bit-lshu32 */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2bitzd2lshu32z00zzexpand_iarithmetiquez00(obj_t BgL_xz00_39,
		obj_t BgL_ez00_40)
	{
		{	/* Expand/iarith.scm 354 */
			{
				obj_t BgL_nz00_1683;
				obj_t BgL_shiftz00_1684;

				if (PAIRP(BgL_xz00_39))
					{	/* Expand/iarith.scm 354 */
						obj_t BgL_cdrzd22531zd2_1689;

						BgL_cdrzd22531zd2_1689 = CDR(BgL_xz00_39);
						if (PAIRP(BgL_cdrzd22531zd2_1689))
							{	/* Expand/iarith.scm 354 */
								obj_t BgL_carzd22534zd2_1691;
								obj_t BgL_cdrzd22535zd2_1692;

								BgL_carzd22534zd2_1691 = CAR(BgL_cdrzd22531zd2_1689);
								BgL_cdrzd22535zd2_1692 = CDR(BgL_cdrzd22531zd2_1689);
								if (BGL_UINT32P(BgL_carzd22534zd2_1691))
									{	/* Expand/iarith.scm 354 */
										if (PAIRP(BgL_cdrzd22535zd2_1692))
											{	/* Expand/iarith.scm 354 */
												obj_t BgL_carzd22539zd2_1695;

												BgL_carzd22539zd2_1695 = CAR(BgL_cdrzd22535zd2_1692);
												if (INTEGERP(BgL_carzd22539zd2_1695))
													{	/* Expand/iarith.scm 354 */
														if (NULLP(CDR(BgL_cdrzd22535zd2_1692)))
															{	/* Expand/iarith.scm 354 */
																BgL_nz00_1683 = BgL_carzd22534zd2_1691;
																BgL_shiftz00_1684 = BgL_carzd22539zd2_1695;
																{	/* Expand/iarith.scm 354 */
																	bool_t BgL_test3945z00_6043;

																	if (
																		((long) CINT(BgL_shiftz00_1684) <=
																			((long) 31)))
																		{	/* Expand/iarith.scm 354 */
																			if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																				(BgL_nz00_1683, BINT(((long) 0))))
																				{	/* Expand/iarith.scm 354 */
																					bool_t BgL_test3948z00_6050;

																					{	/* Expand/iarith.scm 354 */
																						obj_t BgL_auxz00_6051;

																						{	/* Expand/iarith.scm 354 */
																							uint32_t BgL_xz00_3171;
																							long BgL_yz00_3172;

																							BgL_xz00_3171 =
																								BGL_BUINT32_TO_UINT32
																								(BgL_nz00_1683);
																							BgL_yz00_3172 =
																								(long) CINT(BgL_shiftz00_1684);
																							{	/* Expand/iarith.scm 354 */
																								uint32_t BgL_tmpz00_6054;

																								BgL_tmpz00_6054 =
																									(BgL_xz00_3171 <<
																									(int) (BgL_yz00_3172));
																								BgL_auxz00_6051 =
																									BGL_UINT32_TO_BUINT32
																									(BgL_tmpz00_6054);
																						}}
																						BgL_test3948z00_6050 =
																							BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																							(BgL_auxz00_6051,
																							BINT(((long) 0)));
																					}
																					if (BgL_test3948z00_6050)
																						{	/* Expand/iarith.scm 354 */
																							obj_t BgL_auxz00_6060;

																							{	/* Expand/iarith.scm 354 */
																								uint32_t BgL_xz00_3174;
																								long BgL_yz00_3175;

																								BgL_xz00_3174 =
																									BGL_BUINT32_TO_UINT32
																									(BgL_nz00_1683);
																								BgL_yz00_3175 =
																									(long)
																									CINT(BgL_shiftz00_1684);
																								{	/* Expand/iarith.scm 354 */
																									uint32_t BgL_tmpz00_6063;

																									BgL_tmpz00_6063 =
																										(BgL_xz00_3174 <<
																										(int) (BgL_yz00_3175));
																									BgL_auxz00_6060 =
																										BGL_UINT32_TO_BUINT32
																										(BgL_tmpz00_6063);
																							}}
																							BgL_test3945z00_6043 =
																								BGl_2zc3zd3z10zz__r4_numbers_6_5z00
																								(BgL_auxz00_6060,
																								BINT(((long) 268435456)));
																						}
																					else
																						{	/* Expand/iarith.scm 354 */
																							BgL_test3945z00_6043 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 354 */
																					BgL_test3945z00_6043 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 354 */
																			BgL_test3945z00_6043 = ((bool_t) 0);
																		}
																	if (BgL_test3945z00_6043)
																		{	/* Expand/iarith.scm 354 */
																			uint32_t BgL_xz00_3177;
																			long BgL_yz00_3178;

																			BgL_xz00_3177 =
																				BGL_BUINT32_TO_UINT32(BgL_nz00_1683);
																			BgL_yz00_3178 =
																				(long) CINT(BgL_shiftz00_1684);
																			{	/* Expand/iarith.scm 354 */
																				uint32_t BgL_tmpz00_6071;

																				BgL_tmpz00_6071 =
																					(BgL_xz00_3177 <<
																					(int) (BgL_yz00_3178));
																				return
																					BGL_UINT32_TO_BUINT32
																					(BgL_tmpz00_6071);
																			}
																		}
																	else
																		{	/* Expand/iarith.scm 354 */
																			obj_t BgL_arg2850z00_1709;

																			if (NULLP(BgL_xz00_39))
																				{	/* Expand/iarith.scm 354 */
																					BgL_arg2850z00_1709 = BNIL;
																				}
																			else
																				{	/* Expand/iarith.scm 354 */
																					obj_t BgL_head1028z00_1712;

																					{	/* Expand/iarith.scm 354 */
																						obj_t BgL_res3426z00_3181;

																						BgL_res3426z00_3181 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1028z00_1712 =
																							BgL_res3426z00_3181;
																					}
																					{
																						obj_t BgL_l1026z00_1714;
																						obj_t BgL_tail1029z00_1715;

																						BgL_l1026z00_1714 = BgL_xz00_39;
																						BgL_tail1029z00_1715 =
																							BgL_head1028z00_1712;
																					BgL_zc3z04anonymousza32852ze3z87_1716:
																						if (NULLP
																							(BgL_l1026z00_1714))
																							{	/* Expand/iarith.scm 354 */
																								BgL_arg2850z00_1709 =
																									CDR(BgL_head1028z00_1712);
																							}
																						else
																							{	/* Expand/iarith.scm 354 */
																								obj_t BgL_newtail1030z00_1718;

																								{	/* Expand/iarith.scm 354 */
																									obj_t BgL_arg2858z00_1720;

																									{	/* Expand/iarith.scm 354 */
																										obj_t BgL_xz00_1721;

																										BgL_xz00_1721 =
																											CAR(
																											((obj_t)
																												BgL_l1026z00_1714));
																										BgL_arg2858z00_1720 =
																											PROCEDURE_ENTRY
																											(BgL_ez00_40)
																											(BgL_ez00_40,
																											BgL_xz00_1721,
																											BgL_ez00_40, BEOA);
																									}
																									{	/* Expand/iarith.scm 354 */
																										obj_t BgL_res3428z00_3185;

																										BgL_res3428z00_3185 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2858z00_1720,
																											BNIL);
																										BgL_newtail1030z00_1718 =
																											BgL_res3428z00_3185;
																									}
																								}
																								SET_CDR(BgL_tail1029z00_1715,
																									BgL_newtail1030z00_1718);
																								{	/* Expand/iarith.scm 354 */
																									obj_t BgL_arg2857z00_1719;

																									BgL_arg2857z00_1719 =
																										CDR(
																										((obj_t)
																											BgL_l1026z00_1714));
																									{
																										obj_t BgL_tail1029z00_6093;
																										obj_t BgL_l1026z00_6092;

																										BgL_l1026z00_6092 =
																											BgL_arg2857z00_1719;
																										BgL_tail1029z00_6093 =
																											BgL_newtail1030z00_1718;
																										BgL_tail1029z00_1715 =
																											BgL_tail1029z00_6093;
																										BgL_l1026z00_1714 =
																											BgL_l1026z00_6092;
																										goto
																											BgL_zc3z04anonymousza32852ze3z87_1716;
																									}
																								}
																							}
																					}
																				}
																			return
																				BGl_replacez12z12zztools_miscz00
																				(BgL_xz00_39,
																				BGl_epairifyzd2reczd2zztools_miscz00
																				(BgL_arg2850z00_1709, BgL_xz00_39));
																		}
																}
															}
														else
															{	/* Expand/iarith.scm 354 */
															BgL_tagzd22524zd2_1686:
																{	/* Expand/iarith.scm 354 */
																	obj_t BgL_arg2861z00_1729;

																	if (NULLP(BgL_xz00_39))
																		{	/* Expand/iarith.scm 354 */
																			BgL_arg2861z00_1729 = BNIL;
																		}
																	else
																		{	/* Expand/iarith.scm 354 */
																			obj_t BgL_head1033z00_1732;

																			{	/* Expand/iarith.scm 354 */
																				obj_t BgL_res3430z00_3190;

																				BgL_res3430z00_3190 =
																					MAKE_YOUNG_PAIR(BNIL, BNIL);
																				BgL_head1033z00_1732 =
																					BgL_res3430z00_3190;
																			}
																			{
																				obj_t BgL_l1031z00_1734;
																				obj_t BgL_tail1034z00_1735;

																				BgL_l1031z00_1734 = BgL_xz00_39;
																				BgL_tail1034z00_1735 =
																					BgL_head1033z00_1732;
																			BgL_zc3z04anonymousza32863ze3z87_1736:
																				if (NULLP(BgL_l1031z00_1734))
																					{	/* Expand/iarith.scm 354 */
																						BgL_arg2861z00_1729 =
																							CDR(BgL_head1033z00_1732);
																					}
																				else
																					{	/* Expand/iarith.scm 354 */
																						obj_t BgL_newtail1035z00_1738;

																						{	/* Expand/iarith.scm 354 */
																							obj_t BgL_arg2869z00_1740;

																							{	/* Expand/iarith.scm 354 */
																								obj_t BgL_xz00_1741;

																								BgL_xz00_1741 =
																									CAR(
																									((obj_t) BgL_l1031z00_1734));
																								BgL_arg2869z00_1740 =
																									PROCEDURE_ENTRY(BgL_ez00_40)
																									(BgL_ez00_40, BgL_xz00_1741,
																									BgL_ez00_40, BEOA);
																							}
																							{	/* Expand/iarith.scm 354 */
																								obj_t BgL_res3432z00_3194;

																								BgL_res3432z00_3194 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2869z00_1740, BNIL);
																								BgL_newtail1035z00_1738 =
																									BgL_res3432z00_3194;
																							}
																						}
																						SET_CDR(BgL_tail1034z00_1735,
																							BgL_newtail1035z00_1738);
																						{	/* Expand/iarith.scm 354 */
																							obj_t BgL_arg2865z00_1739;

																							BgL_arg2865z00_1739 =
																								CDR(
																								((obj_t) BgL_l1031z00_1734));
																							{
																								obj_t BgL_tail1034z00_6114;
																								obj_t BgL_l1031z00_6113;

																								BgL_l1031z00_6113 =
																									BgL_arg2865z00_1739;
																								BgL_tail1034z00_6114 =
																									BgL_newtail1035z00_1738;
																								BgL_tail1034z00_1735 =
																									BgL_tail1034z00_6114;
																								BgL_l1031z00_1734 =
																									BgL_l1031z00_6113;
																								goto
																									BgL_zc3z04anonymousza32863ze3z87_1736;
																							}
																						}
																					}
																			}
																		}
																	return
																		BGl_replacez12z12zztools_miscz00
																		(BgL_xz00_39,
																		BGl_epairifyzd2reczd2zztools_miscz00
																		(BgL_arg2861z00_1729, BgL_xz00_39));
																}
															}
													}
												else
													{	/* Expand/iarith.scm 354 */
														goto BgL_tagzd22524zd2_1686;
													}
											}
										else
											{	/* Expand/iarith.scm 354 */
												goto BgL_tagzd22524zd2_1686;
											}
									}
								else
									{	/* Expand/iarith.scm 354 */
										goto BgL_tagzd22524zd2_1686;
									}
							}
						else
							{	/* Expand/iarith.scm 354 */
								goto BgL_tagzd22524zd2_1686;
							}
					}
				else
					{	/* Expand/iarith.scm 354 */
						goto BgL_tagzd22524zd2_1686;
					}
			}
		}

	}



/* &expand-bit-lshu32 */
	obj_t BGl_z62expandzd2bitzd2lshu32z62zzexpand_iarithmetiquez00(obj_t
		BgL_envz00_3480, obj_t BgL_xz00_3481, obj_t BgL_ez00_3482)
	{
		{	/* Expand/iarith.scm 354 */
			return
				BGl_expandzd2bitzd2lshu32z00zzexpand_iarithmetiquez00(BgL_xz00_3481,
				BgL_ez00_3482);
		}

	}



/* expand-bit-rsh */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2bitzd2rshz00zzexpand_iarithmetiquez00(obj_t BgL_xz00_41,
		obj_t BgL_ez00_42)
	{
		{	/* Expand/iarith.scm 356 */
			{
				obj_t BgL_nz00_1743;
				obj_t BgL_shiftz00_1744;

				if (PAIRP(BgL_xz00_41))
					{	/* Expand/iarith.scm 356 */
						obj_t BgL_cdrzd22551zd2_1749;

						BgL_cdrzd22551zd2_1749 = CDR(BgL_xz00_41);
						if (PAIRP(BgL_cdrzd22551zd2_1749))
							{	/* Expand/iarith.scm 356 */
								obj_t BgL_carzd22554zd2_1751;
								obj_t BgL_cdrzd22555zd2_1752;

								BgL_carzd22554zd2_1751 = CAR(BgL_cdrzd22551zd2_1749);
								BgL_cdrzd22555zd2_1752 = CDR(BgL_cdrzd22551zd2_1749);
								if (INTEGERP(BgL_carzd22554zd2_1751))
									{	/* Expand/iarith.scm 356 */
										if (PAIRP(BgL_cdrzd22555zd2_1752))
											{	/* Expand/iarith.scm 356 */
												obj_t BgL_carzd22559zd2_1755;

												BgL_carzd22559zd2_1755 = CAR(BgL_cdrzd22555zd2_1752);
												if (INTEGERP(BgL_carzd22559zd2_1755))
													{	/* Expand/iarith.scm 356 */
														if (NULLP(CDR(BgL_cdrzd22555zd2_1752)))
															{	/* Expand/iarith.scm 356 */
																BgL_nz00_1743 = BgL_carzd22554zd2_1751;
																BgL_shiftz00_1744 = BgL_carzd22559zd2_1755;
																{	/* Expand/iarith.scm 356 */
																	bool_t BgL_test3959z00_6135;

																	if (
																		((long) CINT(BgL_shiftz00_1744) <=
																			((long) 31)))
																		{	/* Expand/iarith.scm 356 */
																			if (
																				((long) CINT(BgL_nz00_1743) >=
																					((long) 0)))
																				{	/* Expand/iarith.scm 356 */
																					if (
																						(((long) CINT(BgL_nz00_1743) >>
																								(int) (
																									(long)
																									CINT(BgL_shiftz00_1744))) >=
																							((long) 0)))
																						{	/* Expand/iarith.scm 356 */
																							BgL_test3959z00_6135 =
																								(
																								((long) CINT(BgL_nz00_1743) >>
																									(int) (
																										(long)
																										CINT(BgL_shiftz00_1744))) <=
																								((long) 268435456));
																						}
																					else
																						{	/* Expand/iarith.scm 356 */
																							BgL_test3959z00_6135 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 356 */
																					BgL_test3959z00_6135 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 356 */
																			BgL_test3959z00_6135 = ((bool_t) 0);
																		}
																	if (BgL_test3959z00_6135)
																		{	/* Expand/iarith.scm 356 */
																			return
																				BINT(
																				((long) CINT(BgL_nz00_1743) >>
																					(int) (
																						(long) CINT(BgL_shiftz00_1744))));
																		}
																	else
																		{	/* Expand/iarith.scm 356 */
																			obj_t BgL_arg2889z00_1769;

																			if (NULLP(BgL_xz00_41))
																				{	/* Expand/iarith.scm 356 */
																					BgL_arg2889z00_1769 = BNIL;
																				}
																			else
																				{	/* Expand/iarith.scm 356 */
																					obj_t BgL_head1038z00_1772;

																					{	/* Expand/iarith.scm 356 */
																						obj_t BgL_res3446z00_3224;

																						BgL_res3446z00_3224 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1038z00_1772 =
																							BgL_res3446z00_3224;
																					}
																					{
																						obj_t BgL_l1036z00_1774;
																						obj_t BgL_tail1039z00_1775;

																						BgL_l1036z00_1774 = BgL_xz00_41;
																						BgL_tail1039z00_1775 =
																							BgL_head1038z00_1772;
																					BgL_zc3z04anonymousza32891ze3z87_1776:
																						if (NULLP
																							(BgL_l1036z00_1774))
																							{	/* Expand/iarith.scm 356 */
																								BgL_arg2889z00_1769 =
																									CDR(BgL_head1038z00_1772);
																							}
																						else
																							{	/* Expand/iarith.scm 356 */
																								obj_t BgL_newtail1040z00_1778;

																								{	/* Expand/iarith.scm 356 */
																									obj_t BgL_arg2895z00_1780;

																									{	/* Expand/iarith.scm 356 */
																										obj_t BgL_xz00_1781;

																										BgL_xz00_1781 =
																											CAR(
																											((obj_t)
																												BgL_l1036z00_1774));
																										BgL_arg2895z00_1780 =
																											PROCEDURE_ENTRY
																											(BgL_ez00_42)
																											(BgL_ez00_42,
																											BgL_xz00_1781,
																											BgL_ez00_42, BEOA);
																									}
																									{	/* Expand/iarith.scm 356 */
																										obj_t BgL_res3448z00_3228;

																										BgL_res3448z00_3228 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2895z00_1780,
																											BNIL);
																										BgL_newtail1040z00_1778 =
																											BgL_res3448z00_3228;
																									}
																								}
																								SET_CDR(BgL_tail1039z00_1775,
																									BgL_newtail1040z00_1778);
																								{	/* Expand/iarith.scm 356 */
																									obj_t BgL_arg2894z00_1779;

																									BgL_arg2894z00_1779 =
																										CDR(
																										((obj_t)
																											BgL_l1036z00_1774));
																									{
																										obj_t BgL_tail1039z00_6176;
																										obj_t BgL_l1036z00_6175;

																										BgL_l1036z00_6175 =
																											BgL_arg2894z00_1779;
																										BgL_tail1039z00_6176 =
																											BgL_newtail1040z00_1778;
																										BgL_tail1039z00_1775 =
																											BgL_tail1039z00_6176;
																										BgL_l1036z00_1774 =
																											BgL_l1036z00_6175;
																										goto
																											BgL_zc3z04anonymousza32891ze3z87_1776;
																									}
																								}
																							}
																					}
																				}
																			return
																				BGl_replacez12z12zztools_miscz00
																				(BgL_xz00_41,
																				BGl_epairifyzd2reczd2zztools_miscz00
																				(BgL_arg2889z00_1769, BgL_xz00_41));
																		}
																}
															}
														else
															{	/* Expand/iarith.scm 356 */
															BgL_tagzd22544zd2_1746:
																{	/* Expand/iarith.scm 356 */
																	obj_t BgL_arg2898z00_1789;

																	if (NULLP(BgL_xz00_41))
																		{	/* Expand/iarith.scm 356 */
																			BgL_arg2898z00_1789 = BNIL;
																		}
																	else
																		{	/* Expand/iarith.scm 356 */
																			obj_t BgL_head1043z00_1792;

																			{	/* Expand/iarith.scm 356 */
																				obj_t BgL_res3450z00_3233;

																				BgL_res3450z00_3233 =
																					MAKE_YOUNG_PAIR(BNIL, BNIL);
																				BgL_head1043z00_1792 =
																					BgL_res3450z00_3233;
																			}
																			{
																				obj_t BgL_l1041z00_1794;
																				obj_t BgL_tail1044z00_1795;

																				BgL_l1041z00_1794 = BgL_xz00_41;
																				BgL_tail1044z00_1795 =
																					BgL_head1043z00_1792;
																			BgL_zc3z04anonymousza32900ze3z87_1796:
																				if (NULLP(BgL_l1041z00_1794))
																					{	/* Expand/iarith.scm 356 */
																						BgL_arg2898z00_1789 =
																							CDR(BgL_head1043z00_1792);
																					}
																				else
																					{	/* Expand/iarith.scm 356 */
																						obj_t BgL_newtail1045z00_1798;

																						{	/* Expand/iarith.scm 356 */
																							obj_t BgL_arg2903z00_1800;

																							{	/* Expand/iarith.scm 356 */
																								obj_t BgL_xz00_1801;

																								BgL_xz00_1801 =
																									CAR(
																									((obj_t) BgL_l1041z00_1794));
																								BgL_arg2903z00_1800 =
																									PROCEDURE_ENTRY(BgL_ez00_42)
																									(BgL_ez00_42, BgL_xz00_1801,
																									BgL_ez00_42, BEOA);
																							}
																							{	/* Expand/iarith.scm 356 */
																								obj_t BgL_res3452z00_3237;

																								BgL_res3452z00_3237 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2903z00_1800, BNIL);
																								BgL_newtail1045z00_1798 =
																									BgL_res3452z00_3237;
																							}
																						}
																						SET_CDR(BgL_tail1044z00_1795,
																							BgL_newtail1045z00_1798);
																						{	/* Expand/iarith.scm 356 */
																							obj_t BgL_arg2902z00_1799;

																							BgL_arg2902z00_1799 =
																								CDR(
																								((obj_t) BgL_l1041z00_1794));
																							{
																								obj_t BgL_tail1044z00_6197;
																								obj_t BgL_l1041z00_6196;

																								BgL_l1041z00_6196 =
																									BgL_arg2902z00_1799;
																								BgL_tail1044z00_6197 =
																									BgL_newtail1045z00_1798;
																								BgL_tail1044z00_1795 =
																									BgL_tail1044z00_6197;
																								BgL_l1041z00_1794 =
																									BgL_l1041z00_6196;
																								goto
																									BgL_zc3z04anonymousza32900ze3z87_1796;
																							}
																						}
																					}
																			}
																		}
																	return
																		BGl_replacez12z12zztools_miscz00
																		(BgL_xz00_41,
																		BGl_epairifyzd2reczd2zztools_miscz00
																		(BgL_arg2898z00_1789, BgL_xz00_41));
																}
															}
													}
												else
													{	/* Expand/iarith.scm 356 */
														goto BgL_tagzd22544zd2_1746;
													}
											}
										else
											{	/* Expand/iarith.scm 356 */
												goto BgL_tagzd22544zd2_1746;
											}
									}
								else
									{	/* Expand/iarith.scm 356 */
										goto BgL_tagzd22544zd2_1746;
									}
							}
						else
							{	/* Expand/iarith.scm 356 */
								goto BgL_tagzd22544zd2_1746;
							}
					}
				else
					{	/* Expand/iarith.scm 356 */
						goto BgL_tagzd22544zd2_1746;
					}
			}
		}

	}



/* &expand-bit-rsh */
	obj_t BGl_z62expandzd2bitzd2rshz62zzexpand_iarithmetiquez00(obj_t
		BgL_envz00_3483, obj_t BgL_xz00_3484, obj_t BgL_ez00_3485)
	{
		{	/* Expand/iarith.scm 356 */
			return
				BGl_expandzd2bitzd2rshz00zzexpand_iarithmetiquez00(BgL_xz00_3484,
				BgL_ez00_3485);
		}

	}



/* expand-bit-rshs32 */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2bitzd2rshs32z00zzexpand_iarithmetiquez00(obj_t BgL_xz00_43,
		obj_t BgL_ez00_44)
	{
		{	/* Expand/iarith.scm 357 */
			{
				obj_t BgL_nz00_1803;
				obj_t BgL_shiftz00_1804;

				if (PAIRP(BgL_xz00_43))
					{	/* Expand/iarith.scm 357 */
						obj_t BgL_cdrzd22571zd2_1809;

						BgL_cdrzd22571zd2_1809 = CDR(BgL_xz00_43);
						if (PAIRP(BgL_cdrzd22571zd2_1809))
							{	/* Expand/iarith.scm 357 */
								obj_t BgL_carzd22574zd2_1811;
								obj_t BgL_cdrzd22575zd2_1812;

								BgL_carzd22574zd2_1811 = CAR(BgL_cdrzd22571zd2_1809);
								BgL_cdrzd22575zd2_1812 = CDR(BgL_cdrzd22571zd2_1809);
								if (BGL_INT32P(BgL_carzd22574zd2_1811))
									{	/* Expand/iarith.scm 357 */
										if (PAIRP(BgL_cdrzd22575zd2_1812))
											{	/* Expand/iarith.scm 357 */
												obj_t BgL_carzd22579zd2_1815;

												BgL_carzd22579zd2_1815 = CAR(BgL_cdrzd22575zd2_1812);
												if (INTEGERP(BgL_carzd22579zd2_1815))
													{	/* Expand/iarith.scm 357 */
														if (NULLP(CDR(BgL_cdrzd22575zd2_1812)))
															{	/* Expand/iarith.scm 357 */
																BgL_nz00_1803 = BgL_carzd22574zd2_1811;
																BgL_shiftz00_1804 = BgL_carzd22579zd2_1815;
																{	/* Expand/iarith.scm 357 */
																	bool_t BgL_test3973z00_6218;

																	if (
																		((long) CINT(BgL_shiftz00_1804) <=
																			((long) 31)))
																		{	/* Expand/iarith.scm 357 */
																			if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																				(BgL_nz00_1803, BINT(((long) 0))))
																				{	/* Expand/iarith.scm 357 */
																					bool_t BgL_test3976z00_6225;

																					{	/* Expand/iarith.scm 357 */
																						obj_t BgL_auxz00_6226;

																						{	/* Expand/iarith.scm 357 */
																							int32_t BgL_xz00_3257;
																							long BgL_yz00_3258;

																							BgL_xz00_3257 =
																								BGL_BINT32_TO_INT32
																								(BgL_nz00_1803);
																							BgL_yz00_3258 =
																								(long) CINT(BgL_shiftz00_1804);
																							{	/* Expand/iarith.scm 357 */
																								int32_t BgL_tmpz00_6229;

																								BgL_tmpz00_6229 =
																									(BgL_xz00_3257 >>
																									(int) (BgL_yz00_3258));
																								BgL_auxz00_6226 =
																									BGL_INT32_TO_BINT32
																									(BgL_tmpz00_6229);
																						}}
																						BgL_test3976z00_6225 =
																							BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																							(BgL_auxz00_6226,
																							BINT(((long) 0)));
																					}
																					if (BgL_test3976z00_6225)
																						{	/* Expand/iarith.scm 357 */
																							obj_t BgL_auxz00_6235;

																							{	/* Expand/iarith.scm 357 */
																								int32_t BgL_xz00_3260;
																								long BgL_yz00_3261;

																								BgL_xz00_3260 =
																									BGL_BINT32_TO_INT32
																									(BgL_nz00_1803);
																								BgL_yz00_3261 =
																									(long)
																									CINT(BgL_shiftz00_1804);
																								{	/* Expand/iarith.scm 357 */
																									int32_t BgL_tmpz00_6238;

																									BgL_tmpz00_6238 =
																										(BgL_xz00_3260 >>
																										(int) (BgL_yz00_3261));
																									BgL_auxz00_6235 =
																										BGL_INT32_TO_BINT32
																										(BgL_tmpz00_6238);
																							}}
																							BgL_test3973z00_6218 =
																								BGl_2zc3zd3z10zz__r4_numbers_6_5z00
																								(BgL_auxz00_6235,
																								BINT(((long) 268435456)));
																						}
																					else
																						{	/* Expand/iarith.scm 357 */
																							BgL_test3973z00_6218 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 357 */
																					BgL_test3973z00_6218 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 357 */
																			BgL_test3973z00_6218 = ((bool_t) 0);
																		}
																	if (BgL_test3973z00_6218)
																		{	/* Expand/iarith.scm 357 */
																			int32_t BgL_xz00_3263;
																			long BgL_yz00_3264;

																			BgL_xz00_3263 =
																				BGL_BINT32_TO_INT32(BgL_nz00_1803);
																			BgL_yz00_3264 =
																				(long) CINT(BgL_shiftz00_1804);
																			{	/* Expand/iarith.scm 357 */
																				int32_t BgL_tmpz00_6246;

																				BgL_tmpz00_6246 =
																					(BgL_xz00_3263 >>
																					(int) (BgL_yz00_3264));
																				return
																					BGL_INT32_TO_BINT32(BgL_tmpz00_6246);
																			}
																		}
																	else
																		{	/* Expand/iarith.scm 357 */
																			obj_t BgL_arg2941z00_1829;

																			if (NULLP(BgL_xz00_43))
																				{	/* Expand/iarith.scm 357 */
																					BgL_arg2941z00_1829 = BNIL;
																				}
																			else
																				{	/* Expand/iarith.scm 357 */
																					obj_t BgL_head1048z00_1832;

																					{	/* Expand/iarith.scm 357 */
																						obj_t BgL_res3466z00_3267;

																						BgL_res3466z00_3267 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1048z00_1832 =
																							BgL_res3466z00_3267;
																					}
																					{
																						obj_t BgL_l1046z00_1834;
																						obj_t BgL_tail1049z00_1835;

																						BgL_l1046z00_1834 = BgL_xz00_43;
																						BgL_tail1049z00_1835 =
																							BgL_head1048z00_1832;
																					BgL_zc3z04anonymousza32943ze3z87_1836:
																						if (NULLP
																							(BgL_l1046z00_1834))
																							{	/* Expand/iarith.scm 357 */
																								BgL_arg2941z00_1829 =
																									CDR(BgL_head1048z00_1832);
																							}
																						else
																							{	/* Expand/iarith.scm 357 */
																								obj_t BgL_newtail1050z00_1838;

																								{	/* Expand/iarith.scm 357 */
																									obj_t BgL_arg2946z00_1840;

																									{	/* Expand/iarith.scm 357 */
																										obj_t BgL_xz00_1841;

																										BgL_xz00_1841 =
																											CAR(
																											((obj_t)
																												BgL_l1046z00_1834));
																										BgL_arg2946z00_1840 =
																											PROCEDURE_ENTRY
																											(BgL_ez00_44)
																											(BgL_ez00_44,
																											BgL_xz00_1841,
																											BgL_ez00_44, BEOA);
																									}
																									{	/* Expand/iarith.scm 357 */
																										obj_t BgL_res3468z00_3271;

																										BgL_res3468z00_3271 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2946z00_1840,
																											BNIL);
																										BgL_newtail1050z00_1838 =
																											BgL_res3468z00_3271;
																									}
																								}
																								SET_CDR(BgL_tail1049z00_1835,
																									BgL_newtail1050z00_1838);
																								{	/* Expand/iarith.scm 357 */
																									obj_t BgL_arg2945z00_1839;

																									BgL_arg2945z00_1839 =
																										CDR(
																										((obj_t)
																											BgL_l1046z00_1834));
																									{
																										obj_t BgL_tail1049z00_6268;
																										obj_t BgL_l1046z00_6267;

																										BgL_l1046z00_6267 =
																											BgL_arg2945z00_1839;
																										BgL_tail1049z00_6268 =
																											BgL_newtail1050z00_1838;
																										BgL_tail1049z00_1835 =
																											BgL_tail1049z00_6268;
																										BgL_l1046z00_1834 =
																											BgL_l1046z00_6267;
																										goto
																											BgL_zc3z04anonymousza32943ze3z87_1836;
																									}
																								}
																							}
																					}
																				}
																			return
																				BGl_replacez12z12zztools_miscz00
																				(BgL_xz00_43,
																				BGl_epairifyzd2reczd2zztools_miscz00
																				(BgL_arg2941z00_1829, BgL_xz00_43));
																		}
																}
															}
														else
															{	/* Expand/iarith.scm 357 */
															BgL_tagzd22564zd2_1806:
																{	/* Expand/iarith.scm 357 */
																	obj_t BgL_arg2949z00_1849;

																	if (NULLP(BgL_xz00_43))
																		{	/* Expand/iarith.scm 357 */
																			BgL_arg2949z00_1849 = BNIL;
																		}
																	else
																		{	/* Expand/iarith.scm 357 */
																			obj_t BgL_head1053z00_1852;

																			{	/* Expand/iarith.scm 357 */
																				obj_t BgL_res3470z00_3276;

																				BgL_res3470z00_3276 =
																					MAKE_YOUNG_PAIR(BNIL, BNIL);
																				BgL_head1053z00_1852 =
																					BgL_res3470z00_3276;
																			}
																			{
																				obj_t BgL_l1051z00_1854;
																				obj_t BgL_tail1054z00_1855;

																				BgL_l1051z00_1854 = BgL_xz00_43;
																				BgL_tail1054z00_1855 =
																					BgL_head1053z00_1852;
																			BgL_zc3z04anonymousza32951ze3z87_1856:
																				if (NULLP(BgL_l1051z00_1854))
																					{	/* Expand/iarith.scm 357 */
																						BgL_arg2949z00_1849 =
																							CDR(BgL_head1053z00_1852);
																					}
																				else
																					{	/* Expand/iarith.scm 357 */
																						obj_t BgL_newtail1055z00_1858;

																						{	/* Expand/iarith.scm 357 */
																							obj_t BgL_arg2954z00_1860;

																							{	/* Expand/iarith.scm 357 */
																								obj_t BgL_xz00_1861;

																								BgL_xz00_1861 =
																									CAR(
																									((obj_t) BgL_l1051z00_1854));
																								BgL_arg2954z00_1860 =
																									PROCEDURE_ENTRY(BgL_ez00_44)
																									(BgL_ez00_44, BgL_xz00_1861,
																									BgL_ez00_44, BEOA);
																							}
																							{	/* Expand/iarith.scm 357 */
																								obj_t BgL_res3472z00_3280;

																								BgL_res3472z00_3280 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2954z00_1860, BNIL);
																								BgL_newtail1055z00_1858 =
																									BgL_res3472z00_3280;
																							}
																						}
																						SET_CDR(BgL_tail1054z00_1855,
																							BgL_newtail1055z00_1858);
																						{	/* Expand/iarith.scm 357 */
																							obj_t BgL_arg2953z00_1859;

																							BgL_arg2953z00_1859 =
																								CDR(
																								((obj_t) BgL_l1051z00_1854));
																							{
																								obj_t BgL_tail1054z00_6289;
																								obj_t BgL_l1051z00_6288;

																								BgL_l1051z00_6288 =
																									BgL_arg2953z00_1859;
																								BgL_tail1054z00_6289 =
																									BgL_newtail1055z00_1858;
																								BgL_tail1054z00_1855 =
																									BgL_tail1054z00_6289;
																								BgL_l1051z00_1854 =
																									BgL_l1051z00_6288;
																								goto
																									BgL_zc3z04anonymousza32951ze3z87_1856;
																							}
																						}
																					}
																			}
																		}
																	return
																		BGl_replacez12z12zztools_miscz00
																		(BgL_xz00_43,
																		BGl_epairifyzd2reczd2zztools_miscz00
																		(BgL_arg2949z00_1849, BgL_xz00_43));
																}
															}
													}
												else
													{	/* Expand/iarith.scm 357 */
														goto BgL_tagzd22564zd2_1806;
													}
											}
										else
											{	/* Expand/iarith.scm 357 */
												goto BgL_tagzd22564zd2_1806;
											}
									}
								else
									{	/* Expand/iarith.scm 357 */
										goto BgL_tagzd22564zd2_1806;
									}
							}
						else
							{	/* Expand/iarith.scm 357 */
								goto BgL_tagzd22564zd2_1806;
							}
					}
				else
					{	/* Expand/iarith.scm 357 */
						goto BgL_tagzd22564zd2_1806;
					}
			}
		}

	}



/* &expand-bit-rshs32 */
	obj_t BGl_z62expandzd2bitzd2rshs32z62zzexpand_iarithmetiquez00(obj_t
		BgL_envz00_3486, obj_t BgL_xz00_3487, obj_t BgL_ez00_3488)
	{
		{	/* Expand/iarith.scm 357 */
			return
				BGl_expandzd2bitzd2rshs32z00zzexpand_iarithmetiquez00(BgL_xz00_3487,
				BgL_ez00_3488);
		}

	}



/* expand-bit-rshu32 */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2bitzd2rshu32z00zzexpand_iarithmetiquez00(obj_t BgL_xz00_45,
		obj_t BgL_ez00_46)
	{
		{	/* Expand/iarith.scm 358 */
			{
				obj_t BgL_nz00_1863;
				obj_t BgL_shiftz00_1864;

				if (PAIRP(BgL_xz00_45))
					{	/* Expand/iarith.scm 358 */
						obj_t BgL_cdrzd22591zd2_1869;

						BgL_cdrzd22591zd2_1869 = CDR(BgL_xz00_45);
						if (PAIRP(BgL_cdrzd22591zd2_1869))
							{	/* Expand/iarith.scm 358 */
								obj_t BgL_carzd22594zd2_1871;
								obj_t BgL_cdrzd22595zd2_1872;

								BgL_carzd22594zd2_1871 = CAR(BgL_cdrzd22591zd2_1869);
								BgL_cdrzd22595zd2_1872 = CDR(BgL_cdrzd22591zd2_1869);
								if (BGL_UINT32P(BgL_carzd22594zd2_1871))
									{	/* Expand/iarith.scm 358 */
										if (PAIRP(BgL_cdrzd22595zd2_1872))
											{	/* Expand/iarith.scm 358 */
												obj_t BgL_carzd22599zd2_1875;

												BgL_carzd22599zd2_1875 = CAR(BgL_cdrzd22595zd2_1872);
												if (INTEGERP(BgL_carzd22599zd2_1875))
													{	/* Expand/iarith.scm 358 */
														if (NULLP(CDR(BgL_cdrzd22595zd2_1872)))
															{	/* Expand/iarith.scm 358 */
																BgL_nz00_1863 = BgL_carzd22594zd2_1871;
																BgL_shiftz00_1864 = BgL_carzd22599zd2_1875;
																{	/* Expand/iarith.scm 358 */
																	bool_t BgL_test3987z00_6310;

																	if (
																		((long) CINT(BgL_shiftz00_1864) <=
																			((long) 31)))
																		{	/* Expand/iarith.scm 358 */
																			if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																				(BgL_nz00_1863, BINT(((long) 0))))
																				{	/* Expand/iarith.scm 358 */
																					bool_t BgL_test3990z00_6317;

																					{	/* Expand/iarith.scm 358 */
																						obj_t BgL_auxz00_6318;

																						{	/* Expand/iarith.scm 358 */
																							uint32_t BgL_xz00_3300;
																							long BgL_yz00_3301;

																							BgL_xz00_3300 =
																								BGL_BUINT32_TO_UINT32
																								(BgL_nz00_1863);
																							BgL_yz00_3301 =
																								(long) CINT(BgL_shiftz00_1864);
																							{	/* Expand/iarith.scm 358 */
																								uint32_t BgL_tmpz00_6321;

																								BgL_tmpz00_6321 =
																									(BgL_xz00_3300 >>
																									(int) (BgL_yz00_3301));
																								BgL_auxz00_6318 =
																									BGL_UINT32_TO_BUINT32
																									(BgL_tmpz00_6321);
																						}}
																						BgL_test3990z00_6317 =
																							BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																							(BgL_auxz00_6318,
																							BINT(((long) 0)));
																					}
																					if (BgL_test3990z00_6317)
																						{	/* Expand/iarith.scm 358 */
																							obj_t BgL_auxz00_6327;

																							{	/* Expand/iarith.scm 358 */
																								uint32_t BgL_xz00_3303;
																								long BgL_yz00_3304;

																								BgL_xz00_3303 =
																									BGL_BUINT32_TO_UINT32
																									(BgL_nz00_1863);
																								BgL_yz00_3304 =
																									(long)
																									CINT(BgL_shiftz00_1864);
																								{	/* Expand/iarith.scm 358 */
																									uint32_t BgL_tmpz00_6330;

																									BgL_tmpz00_6330 =
																										(BgL_xz00_3303 >>
																										(int) (BgL_yz00_3304));
																									BgL_auxz00_6327 =
																										BGL_UINT32_TO_BUINT32
																										(BgL_tmpz00_6330);
																							}}
																							BgL_test3987z00_6310 =
																								BGl_2zc3zd3z10zz__r4_numbers_6_5z00
																								(BgL_auxz00_6327,
																								BINT(((long) 268435456)));
																						}
																					else
																						{	/* Expand/iarith.scm 358 */
																							BgL_test3987z00_6310 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 358 */
																					BgL_test3987z00_6310 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 358 */
																			BgL_test3987z00_6310 = ((bool_t) 0);
																		}
																	if (BgL_test3987z00_6310)
																		{	/* Expand/iarith.scm 358 */
																			uint32_t BgL_xz00_3306;
																			long BgL_yz00_3307;

																			BgL_xz00_3306 =
																				BGL_BUINT32_TO_UINT32(BgL_nz00_1863);
																			BgL_yz00_3307 =
																				(long) CINT(BgL_shiftz00_1864);
																			{	/* Expand/iarith.scm 358 */
																				uint32_t BgL_tmpz00_6338;

																				BgL_tmpz00_6338 =
																					(BgL_xz00_3306 >>
																					(int) (BgL_yz00_3307));
																				return
																					BGL_UINT32_TO_BUINT32
																					(BgL_tmpz00_6338);
																			}
																		}
																	else
																		{	/* Expand/iarith.scm 358 */
																			obj_t BgL_arg2972z00_1889;

																			if (NULLP(BgL_xz00_45))
																				{	/* Expand/iarith.scm 358 */
																					BgL_arg2972z00_1889 = BNIL;
																				}
																			else
																				{	/* Expand/iarith.scm 358 */
																					obj_t BgL_head1058z00_1892;

																					{	/* Expand/iarith.scm 358 */
																						obj_t BgL_res3486z00_3310;

																						BgL_res3486z00_3310 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1058z00_1892 =
																							BgL_res3486z00_3310;
																					}
																					{
																						obj_t BgL_l1056z00_1894;
																						obj_t BgL_tail1059z00_1895;

																						BgL_l1056z00_1894 = BgL_xz00_45;
																						BgL_tail1059z00_1895 =
																							BgL_head1058z00_1892;
																					BgL_zc3z04anonymousza32974ze3z87_1896:
																						if (NULLP
																							(BgL_l1056z00_1894))
																							{	/* Expand/iarith.scm 358 */
																								BgL_arg2972z00_1889 =
																									CDR(BgL_head1058z00_1892);
																							}
																						else
																							{	/* Expand/iarith.scm 358 */
																								obj_t BgL_newtail1060z00_1898;

																								{	/* Expand/iarith.scm 358 */
																									obj_t BgL_arg2978z00_1900;

																									{	/* Expand/iarith.scm 358 */
																										obj_t BgL_xz00_1901;

																										BgL_xz00_1901 =
																											CAR(
																											((obj_t)
																												BgL_l1056z00_1894));
																										BgL_arg2978z00_1900 =
																											PROCEDURE_ENTRY
																											(BgL_ez00_46)
																											(BgL_ez00_46,
																											BgL_xz00_1901,
																											BgL_ez00_46, BEOA);
																									}
																									{	/* Expand/iarith.scm 358 */
																										obj_t BgL_res3488z00_3314;

																										BgL_res3488z00_3314 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2978z00_1900,
																											BNIL);
																										BgL_newtail1060z00_1898 =
																											BgL_res3488z00_3314;
																									}
																								}
																								SET_CDR(BgL_tail1059z00_1895,
																									BgL_newtail1060z00_1898);
																								{	/* Expand/iarith.scm 358 */
																									obj_t BgL_arg2976z00_1899;

																									BgL_arg2976z00_1899 =
																										CDR(
																										((obj_t)
																											BgL_l1056z00_1894));
																									{
																										obj_t BgL_tail1059z00_6360;
																										obj_t BgL_l1056z00_6359;

																										BgL_l1056z00_6359 =
																											BgL_arg2976z00_1899;
																										BgL_tail1059z00_6360 =
																											BgL_newtail1060z00_1898;
																										BgL_tail1059z00_1895 =
																											BgL_tail1059z00_6360;
																										BgL_l1056z00_1894 =
																											BgL_l1056z00_6359;
																										goto
																											BgL_zc3z04anonymousza32974ze3z87_1896;
																									}
																								}
																							}
																					}
																				}
																			return
																				BGl_replacez12z12zztools_miscz00
																				(BgL_xz00_45,
																				BGl_epairifyzd2reczd2zztools_miscz00
																				(BgL_arg2972z00_1889, BgL_xz00_45));
																		}
																}
															}
														else
															{	/* Expand/iarith.scm 358 */
															BgL_tagzd22584zd2_1866:
																{	/* Expand/iarith.scm 358 */
																	obj_t BgL_arg2981z00_1909;

																	if (NULLP(BgL_xz00_45))
																		{	/* Expand/iarith.scm 358 */
																			BgL_arg2981z00_1909 = BNIL;
																		}
																	else
																		{	/* Expand/iarith.scm 358 */
																			obj_t BgL_head1063z00_1912;

																			{	/* Expand/iarith.scm 358 */
																				obj_t BgL_res3490z00_3319;

																				BgL_res3490z00_3319 =
																					MAKE_YOUNG_PAIR(BNIL, BNIL);
																				BgL_head1063z00_1912 =
																					BgL_res3490z00_3319;
																			}
																			{
																				obj_t BgL_l1061z00_1914;
																				obj_t BgL_tail1064z00_1915;

																				BgL_l1061z00_1914 = BgL_xz00_45;
																				BgL_tail1064z00_1915 =
																					BgL_head1063z00_1912;
																			BgL_zc3z04anonymousza32983ze3z87_1916:
																				if (NULLP(BgL_l1061z00_1914))
																					{	/* Expand/iarith.scm 358 */
																						BgL_arg2981z00_1909 =
																							CDR(BgL_head1063z00_1912);
																					}
																				else
																					{	/* Expand/iarith.scm 358 */
																						obj_t BgL_newtail1065z00_1918;

																						{	/* Expand/iarith.scm 358 */
																							obj_t BgL_arg2992z00_1920;

																							{	/* Expand/iarith.scm 358 */
																								obj_t BgL_xz00_1921;

																								BgL_xz00_1921 =
																									CAR(
																									((obj_t) BgL_l1061z00_1914));
																								BgL_arg2992z00_1920 =
																									PROCEDURE_ENTRY(BgL_ez00_46)
																									(BgL_ez00_46, BgL_xz00_1921,
																									BgL_ez00_46, BEOA);
																							}
																							{	/* Expand/iarith.scm 358 */
																								obj_t BgL_res3492z00_3323;

																								BgL_res3492z00_3323 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2992z00_1920, BNIL);
																								BgL_newtail1065z00_1918 =
																									BgL_res3492z00_3323;
																							}
																						}
																						SET_CDR(BgL_tail1064z00_1915,
																							BgL_newtail1065z00_1918);
																						{	/* Expand/iarith.scm 358 */
																							obj_t BgL_arg2990z00_1919;

																							BgL_arg2990z00_1919 =
																								CDR(
																								((obj_t) BgL_l1061z00_1914));
																							{
																								obj_t BgL_tail1064z00_6381;
																								obj_t BgL_l1061z00_6380;

																								BgL_l1061z00_6380 =
																									BgL_arg2990z00_1919;
																								BgL_tail1064z00_6381 =
																									BgL_newtail1065z00_1918;
																								BgL_tail1064z00_1915 =
																									BgL_tail1064z00_6381;
																								BgL_l1061z00_1914 =
																									BgL_l1061z00_6380;
																								goto
																									BgL_zc3z04anonymousza32983ze3z87_1916;
																							}
																						}
																					}
																			}
																		}
																	return
																		BGl_replacez12z12zztools_miscz00
																		(BgL_xz00_45,
																		BGl_epairifyzd2reczd2zztools_miscz00
																		(BgL_arg2981z00_1909, BgL_xz00_45));
																}
															}
													}
												else
													{	/* Expand/iarith.scm 358 */
														goto BgL_tagzd22584zd2_1866;
													}
											}
										else
											{	/* Expand/iarith.scm 358 */
												goto BgL_tagzd22584zd2_1866;
											}
									}
								else
									{	/* Expand/iarith.scm 358 */
										goto BgL_tagzd22584zd2_1866;
									}
							}
						else
							{	/* Expand/iarith.scm 358 */
								goto BgL_tagzd22584zd2_1866;
							}
					}
				else
					{	/* Expand/iarith.scm 358 */
						goto BgL_tagzd22584zd2_1866;
					}
			}
		}

	}



/* &expand-bit-rshu32 */
	obj_t BGl_z62expandzd2bitzd2rshu32z62zzexpand_iarithmetiquez00(obj_t
		BgL_envz00_3489, obj_t BgL_xz00_3490, obj_t BgL_ez00_3491)
	{
		{	/* Expand/iarith.scm 358 */
			return
				BGl_expandzd2bitzd2rshu32z00zzexpand_iarithmetiquez00(BgL_xz00_3490,
				BgL_ez00_3491);
		}

	}



/* expand-bit-ursh */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2bitzd2urshz00zzexpand_iarithmetiquez00(obj_t BgL_xz00_47,
		obj_t BgL_ez00_48)
	{
		{	/* Expand/iarith.scm 360 */
			if (NULLP(BgL_xz00_47))
				{	/* Expand/iarith.scm 362 */
					return BNIL;
				}
			else
				{	/* Expand/iarith.scm 362 */
					obj_t BgL_head1068z00_1925;

					{	/* Expand/iarith.scm 362 */
						obj_t BgL_res3500z00_3339;

						BgL_res3500z00_3339 = MAKE_YOUNG_PAIR(BNIL, BNIL);
						BgL_head1068z00_1925 = BgL_res3500z00_3339;
					}
					{
						obj_t BgL_l1066z00_1927;
						obj_t BgL_tail1069z00_1928;

						BgL_l1066z00_1927 = BgL_xz00_47;
						BgL_tail1069z00_1928 = BgL_head1068z00_1925;
					BgL_zc3z04anonymousza32994ze3z87_1929:
						if (NULLP(BgL_l1066z00_1927))
							{	/* Expand/iarith.scm 362 */
								return CDR(BgL_head1068z00_1925);
							}
						else
							{	/* Expand/iarith.scm 362 */
								obj_t BgL_newtail1070z00_1931;

								{	/* Expand/iarith.scm 362 */
									obj_t BgL_arg2997z00_1933;

									{	/* Expand/iarith.scm 362 */
										obj_t BgL_xz00_1934;

										BgL_xz00_1934 = CAR(((obj_t) BgL_l1066z00_1927));
										BgL_arg2997z00_1933 =
											PROCEDURE_ENTRY(BgL_ez00_48) (BgL_ez00_48, BgL_xz00_1934,
											BgL_ez00_48, BEOA);
									}
									{	/* Expand/iarith.scm 362 */
										obj_t BgL_res3502z00_3343;

										BgL_res3502z00_3343 =
											MAKE_YOUNG_PAIR(BgL_arg2997z00_1933, BNIL);
										BgL_newtail1070z00_1931 = BgL_res3502z00_3343;
									}
								}
								SET_CDR(BgL_tail1069z00_1928, BgL_newtail1070z00_1931);
								{	/* Expand/iarith.scm 362 */
									obj_t BgL_arg2996z00_1932;

									BgL_arg2996z00_1932 = CDR(((obj_t) BgL_l1066z00_1927));
									{
										obj_t BgL_tail1069z00_6403;
										obj_t BgL_l1066z00_6402;

										BgL_l1066z00_6402 = BgL_arg2996z00_1932;
										BgL_tail1069z00_6403 = BgL_newtail1070z00_1931;
										BgL_tail1069z00_1928 = BgL_tail1069z00_6403;
										BgL_l1066z00_1927 = BgL_l1066z00_6402;
										goto BgL_zc3z04anonymousza32994ze3z87_1929;
									}
								}
							}
					}
				}
		}

	}



/* &expand-bit-ursh */
	obj_t BGl_z62expandzd2bitzd2urshz62zzexpand_iarithmetiquez00(obj_t
		BgL_envz00_3492, obj_t BgL_xz00_3493, obj_t BgL_ez00_3494)
	{
		{	/* Expand/iarith.scm 360 */
			return
				BGl_expandzd2bitzd2urshz00zzexpand_iarithmetiquez00(BgL_xz00_3493,
				BgL_ez00_3494);
		}

	}



/* expand-bit-urshu32 */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2bitzd2urshu32z00zzexpand_iarithmetiquez00(obj_t BgL_xz00_49,
		obj_t BgL_ez00_50)
	{
		{	/* Expand/iarith.scm 363 */
			{
				obj_t BgL_nz00_1936;
				obj_t BgL_shiftz00_1937;

				if (PAIRP(BgL_xz00_49))
					{	/* Expand/iarith.scm 363 */
						obj_t BgL_cdrzd22611zd2_1942;

						BgL_cdrzd22611zd2_1942 = CDR(BgL_xz00_49);
						if (PAIRP(BgL_cdrzd22611zd2_1942))
							{	/* Expand/iarith.scm 363 */
								obj_t BgL_carzd22614zd2_1944;
								obj_t BgL_cdrzd22615zd2_1945;

								BgL_carzd22614zd2_1944 = CAR(BgL_cdrzd22611zd2_1942);
								BgL_cdrzd22615zd2_1945 = CDR(BgL_cdrzd22611zd2_1942);
								if (BGL_UINT32P(BgL_carzd22614zd2_1944))
									{	/* Expand/iarith.scm 363 */
										if (PAIRP(BgL_cdrzd22615zd2_1945))
											{	/* Expand/iarith.scm 363 */
												obj_t BgL_carzd22619zd2_1948;

												BgL_carzd22619zd2_1948 = CAR(BgL_cdrzd22615zd2_1945);
												if (INTEGERP(BgL_carzd22619zd2_1948))
													{	/* Expand/iarith.scm 363 */
														if (NULLP(CDR(BgL_cdrzd22615zd2_1945)))
															{	/* Expand/iarith.scm 363 */
																BgL_nz00_1936 = BgL_carzd22614zd2_1944;
																BgL_shiftz00_1937 = BgL_carzd22619zd2_1948;
																{	/* Expand/iarith.scm 363 */
																	bool_t BgL_test4003z00_6422;

																	if (
																		((long) CINT(BgL_shiftz00_1937) <=
																			((long) 31)))
																		{	/* Expand/iarith.scm 363 */
																			if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																				(BgL_nz00_1936, BINT(((long) 0))))
																				{	/* Expand/iarith.scm 363 */
																					bool_t BgL_test4006z00_6429;

																					{	/* Expand/iarith.scm 363 */
																						obj_t BgL_auxz00_6430;

																						{	/* Expand/iarith.scm 363 */
																							uint32_t BgL_xz00_3351;
																							long BgL_yz00_3352;

																							BgL_xz00_3351 =
																								BGL_BUINT32_TO_UINT32
																								(BgL_nz00_1936);
																							BgL_yz00_3352 =
																								(long) CINT(BgL_shiftz00_1937);
																							{	/* Expand/iarith.scm 363 */
																								uint32_t BgL_tmpz00_6433;

																								BgL_tmpz00_6433 =
																									(BgL_xz00_3351 >>
																									(int) (BgL_yz00_3352));
																								BgL_auxz00_6430 =
																									BGL_UINT32_TO_BUINT32
																									(BgL_tmpz00_6433);
																						}}
																						BgL_test4006z00_6429 =
																							BGl_2ze3zd3z30zz__r4_numbers_6_5z00
																							(BgL_auxz00_6430,
																							BINT(((long) 0)));
																					}
																					if (BgL_test4006z00_6429)
																						{	/* Expand/iarith.scm 363 */
																							obj_t BgL_auxz00_6439;

																							{	/* Expand/iarith.scm 363 */
																								uint32_t BgL_xz00_3354;
																								long BgL_yz00_3355;

																								BgL_xz00_3354 =
																									BGL_BUINT32_TO_UINT32
																									(BgL_nz00_1936);
																								BgL_yz00_3355 =
																									(long)
																									CINT(BgL_shiftz00_1937);
																								{	/* Expand/iarith.scm 363 */
																									uint32_t BgL_tmpz00_6442;

																									BgL_tmpz00_6442 =
																										(BgL_xz00_3354 >>
																										(int) (BgL_yz00_3355));
																									BgL_auxz00_6439 =
																										BGL_UINT32_TO_BUINT32
																										(BgL_tmpz00_6442);
																							}}
																							BgL_test4003z00_6422 =
																								BGl_2zc3zd3z10zz__r4_numbers_6_5z00
																								(BgL_auxz00_6439,
																								BINT(((long) 268435456)));
																						}
																					else
																						{	/* Expand/iarith.scm 363 */
																							BgL_test4003z00_6422 =
																								((bool_t) 0);
																						}
																				}
																			else
																				{	/* Expand/iarith.scm 363 */
																					BgL_test4003z00_6422 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Expand/iarith.scm 363 */
																			BgL_test4003z00_6422 = ((bool_t) 0);
																		}
																	if (BgL_test4003z00_6422)
																		{	/* Expand/iarith.scm 363 */
																			uint32_t BgL_xz00_3357;
																			long BgL_yz00_3358;

																			BgL_xz00_3357 =
																				BGL_BUINT32_TO_UINT32(BgL_nz00_1936);
																			BgL_yz00_3358 =
																				(long) CINT(BgL_shiftz00_1937);
																			{	/* Expand/iarith.scm 363 */
																				uint32_t BgL_tmpz00_6450;

																				BgL_tmpz00_6450 =
																					(BgL_xz00_3357 >>
																					(int) (BgL_yz00_3358));
																				return
																					BGL_UINT32_TO_BUINT32
																					(BgL_tmpz00_6450);
																			}
																		}
																	else
																		{	/* Expand/iarith.scm 363 */
																			obj_t BgL_arg3017z00_1962;

																			if (NULLP(BgL_xz00_49))
																				{	/* Expand/iarith.scm 363 */
																					BgL_arg3017z00_1962 = BNIL;
																				}
																			else
																				{	/* Expand/iarith.scm 363 */
																					obj_t BgL_head1073z00_1965;

																					{	/* Expand/iarith.scm 363 */
																						obj_t BgL_res3510z00_3361;

																						BgL_res3510z00_3361 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1073z00_1965 =
																							BgL_res3510z00_3361;
																					}
																					{
																						obj_t BgL_l1071z00_1967;
																						obj_t BgL_tail1074z00_1968;

																						BgL_l1071z00_1967 = BgL_xz00_49;
																						BgL_tail1074z00_1968 =
																							BgL_head1073z00_1965;
																					BgL_zc3z04anonymousza33019ze3z87_1969:
																						if (NULLP
																							(BgL_l1071z00_1967))
																							{	/* Expand/iarith.scm 363 */
																								BgL_arg3017z00_1962 =
																									CDR(BgL_head1073z00_1965);
																							}
																						else
																							{	/* Expand/iarith.scm 363 */
																								obj_t BgL_newtail1075z00_1971;

																								{	/* Expand/iarith.scm 363 */
																									obj_t BgL_arg3025z00_1973;

																									{	/* Expand/iarith.scm 363 */
																										obj_t BgL_xz00_1974;

																										BgL_xz00_1974 =
																											CAR(
																											((obj_t)
																												BgL_l1071z00_1967));
																										BgL_arg3025z00_1973 =
																											PROCEDURE_ENTRY
																											(BgL_ez00_50)
																											(BgL_ez00_50,
																											BgL_xz00_1974,
																											BgL_ez00_50, BEOA);
																									}
																									{	/* Expand/iarith.scm 363 */
																										obj_t BgL_res3512z00_3365;

																										BgL_res3512z00_3365 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg3025z00_1973,
																											BNIL);
																										BgL_newtail1075z00_1971 =
																											BgL_res3512z00_3365;
																									}
																								}
																								SET_CDR(BgL_tail1074z00_1968,
																									BgL_newtail1075z00_1971);
																								{	/* Expand/iarith.scm 363 */
																									obj_t BgL_arg3021z00_1972;

																									BgL_arg3021z00_1972 =
																										CDR(
																										((obj_t)
																											BgL_l1071z00_1967));
																									{
																										obj_t BgL_tail1074z00_6472;
																										obj_t BgL_l1071z00_6471;

																										BgL_l1071z00_6471 =
																											BgL_arg3021z00_1972;
																										BgL_tail1074z00_6472 =
																											BgL_newtail1075z00_1971;
																										BgL_tail1074z00_1968 =
																											BgL_tail1074z00_6472;
																										BgL_l1071z00_1967 =
																											BgL_l1071z00_6471;
																										goto
																											BgL_zc3z04anonymousza33019ze3z87_1969;
																									}
																								}
																							}
																					}
																				}
																			return
																				BGl_replacez12z12zztools_miscz00
																				(BgL_xz00_49,
																				BGl_epairifyzd2reczd2zztools_miscz00
																				(BgL_arg3017z00_1962, BgL_xz00_49));
																		}
																}
															}
														else
															{	/* Expand/iarith.scm 363 */
															BgL_tagzd22604zd2_1939:
																{	/* Expand/iarith.scm 363 */
																	obj_t BgL_arg3029z00_1982;

																	if (NULLP(BgL_xz00_49))
																		{	/* Expand/iarith.scm 363 */
																			BgL_arg3029z00_1982 = BNIL;
																		}
																	else
																		{	/* Expand/iarith.scm 363 */
																			obj_t BgL_head1078z00_1985;

																			{	/* Expand/iarith.scm 363 */
																				obj_t BgL_res3514z00_3370;

																				BgL_res3514z00_3370 =
																					MAKE_YOUNG_PAIR(BNIL, BNIL);
																				BgL_head1078z00_1985 =
																					BgL_res3514z00_3370;
																			}
																			{
																				obj_t BgL_l1076z00_1987;
																				obj_t BgL_tail1079z00_1988;

																				BgL_l1076z00_1987 = BgL_xz00_49;
																				BgL_tail1079z00_1988 =
																					BgL_head1078z00_1985;
																			BgL_zc3z04anonymousza33031ze3z87_1989:
																				if (NULLP(BgL_l1076z00_1987))
																					{	/* Expand/iarith.scm 363 */
																						BgL_arg3029z00_1982 =
																							CDR(BgL_head1078z00_1985);
																					}
																				else
																					{	/* Expand/iarith.scm 363 */
																						obj_t BgL_newtail1080z00_1991;

																						{	/* Expand/iarith.scm 363 */
																							obj_t BgL_arg3035z00_1993;

																							{	/* Expand/iarith.scm 363 */
																								obj_t BgL_xz00_1994;

																								BgL_xz00_1994 =
																									CAR(
																									((obj_t) BgL_l1076z00_1987));
																								BgL_arg3035z00_1993 =
																									PROCEDURE_ENTRY(BgL_ez00_50)
																									(BgL_ez00_50, BgL_xz00_1994,
																									BgL_ez00_50, BEOA);
																							}
																							{	/* Expand/iarith.scm 363 */
																								obj_t BgL_res3516z00_3374;

																								BgL_res3516z00_3374 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg3035z00_1993, BNIL);
																								BgL_newtail1080z00_1991 =
																									BgL_res3516z00_3374;
																							}
																						}
																						SET_CDR(BgL_tail1079z00_1988,
																							BgL_newtail1080z00_1991);
																						{	/* Expand/iarith.scm 363 */
																							obj_t BgL_arg3033z00_1992;

																							BgL_arg3033z00_1992 =
																								CDR(
																								((obj_t) BgL_l1076z00_1987));
																							{
																								obj_t BgL_tail1079z00_6493;
																								obj_t BgL_l1076z00_6492;

																								BgL_l1076z00_6492 =
																									BgL_arg3033z00_1992;
																								BgL_tail1079z00_6493 =
																									BgL_newtail1080z00_1991;
																								BgL_tail1079z00_1988 =
																									BgL_tail1079z00_6493;
																								BgL_l1076z00_1987 =
																									BgL_l1076z00_6492;
																								goto
																									BgL_zc3z04anonymousza33031ze3z87_1989;
																							}
																						}
																					}
																			}
																		}
																	return
																		BGl_replacez12z12zztools_miscz00
																		(BgL_xz00_49,
																		BGl_epairifyzd2reczd2zztools_miscz00
																		(BgL_arg3029z00_1982, BgL_xz00_49));
																}
															}
													}
												else
													{	/* Expand/iarith.scm 363 */
														goto BgL_tagzd22604zd2_1939;
													}
											}
										else
											{	/* Expand/iarith.scm 363 */
												goto BgL_tagzd22604zd2_1939;
											}
									}
								else
									{	/* Expand/iarith.scm 363 */
										goto BgL_tagzd22604zd2_1939;
									}
							}
						else
							{	/* Expand/iarith.scm 363 */
								goto BgL_tagzd22604zd2_1939;
							}
					}
				else
					{	/* Expand/iarith.scm 363 */
						goto BgL_tagzd22604zd2_1939;
					}
			}
		}

	}



/* &expand-bit-urshu32 */
	obj_t BGl_z62expandzd2bitzd2urshu32z62zzexpand_iarithmetiquez00(obj_t
		BgL_envz00_3495, obj_t BgL_xz00_3496, obj_t BgL_ez00_3497)
	{
		{	/* Expand/iarith.scm 363 */
			return
				BGl_expandzd2bitzd2urshu32z00zzexpand_iarithmetiquez00(BgL_xz00_3496,
				BgL_ez00_3497);
		}

	}



/* expand-bit-ors32 */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2bitzd2ors32z00zzexpand_iarithmetiquez00(obj_t BgL_xz00_51,
		obj_t BgL_ez00_52)
	{
		{	/* Expand/iarith.scm 364 */
			{

				if (PAIRP(BgL_xz00_51))
					{	/* Expand/iarith.scm 365 */
						obj_t BgL_cdrzd22631zd2_2002;

						BgL_cdrzd22631zd2_2002 = CDR(BgL_xz00_51);
						if (PAIRP(BgL_cdrzd22631zd2_2002))
							{	/* Expand/iarith.scm 365 */
								obj_t BgL_carzd22634zd2_2004;
								obj_t BgL_cdrzd22635zd2_2005;

								BgL_carzd22634zd2_2004 = CAR(BgL_cdrzd22631zd2_2002);
								BgL_cdrzd22635zd2_2005 = CDR(BgL_cdrzd22631zd2_2002);
								if (PAIRP(BgL_carzd22634zd2_2004))
									{	/* Expand/iarith.scm 365 */
										obj_t BgL_cdrzd22638zd2_2007;

										BgL_cdrzd22638zd2_2007 = CDR(BgL_carzd22634zd2_2004);
										if (PAIRP(BgL_cdrzd22638zd2_2007))
											{	/* Expand/iarith.scm 365 */
												bool_t BgL_test4015z00_6509;

												{	/* Expand/iarith.scm 365 */
													obj_t BgL_tmpz00_6510;

													BgL_tmpz00_6510 = CAR(BgL_cdrzd22638zd2_2007);
													BgL_test4015z00_6509 = BGL_INT32P(BgL_tmpz00_6510);
												}
												if (BgL_test4015z00_6509)
													{	/* Expand/iarith.scm 365 */
														if (NULLP(CDR(BgL_cdrzd22638zd2_2007)))
															{	/* Expand/iarith.scm 365 */
																if (PAIRP(BgL_cdrzd22635zd2_2005))
																	{	/* Expand/iarith.scm 365 */
																		obj_t BgL_carzd22643zd2_2014;

																		BgL_carzd22643zd2_2014 =
																			CAR(BgL_cdrzd22635zd2_2005);
																		if (PAIRP(BgL_carzd22643zd2_2014))
																			{	/* Expand/iarith.scm 365 */
																				obj_t BgL_cdrzd22647zd2_2016;

																				BgL_cdrzd22647zd2_2016 =
																					CDR(BgL_carzd22643zd2_2014);
																				if (PAIRP(BgL_cdrzd22647zd2_2016))
																					{	/* Expand/iarith.scm 365 */
																						bool_t BgL_test4020z00_6524;

																						{	/* Expand/iarith.scm 365 */
																							obj_t BgL_tmpz00_6525;

																							BgL_tmpz00_6525 =
																								CAR(BgL_cdrzd22647zd2_2016);
																							BgL_test4020z00_6524 =
																								BGL_INT32P(BgL_tmpz00_6525);
																						}
																						if (BgL_test4020z00_6524)
																							{	/* Expand/iarith.scm 365 */
																								if (NULLP(CDR
																										(BgL_cdrzd22647zd2_2016)))
																									{	/* Expand/iarith.scm 365 */
																										if (NULLP(CDR
																												(BgL_cdrzd22635zd2_2005)))
																											{	/* Expand/iarith.scm 367 */
																												int32_t BgL_xz00_3426;
																												int32_t BgL_yz00_3427;

																												{	/* Expand/iarith.scm 365 */
																													obj_t BgL_tmpz00_6534;

																													BgL_tmpz00_6534 =
																														CAR
																														(BgL_carzd22634zd2_2004);
																													BgL_xz00_3426 =
																														BGL_BINT32_TO_INT32
																														(BgL_tmpz00_6534);
																												}
																												{	/* Expand/iarith.scm 365 */
																													obj_t BgL_tmpz00_6537;

																													BgL_tmpz00_6537 =
																														CAR
																														(BgL_carzd22643zd2_2014);
																													BgL_yz00_3427 =
																														BGL_BINT32_TO_INT32
																														(BgL_tmpz00_6537);
																												}
																												{	/* Expand/iarith.scm 367 */
																													int32_t
																														BgL_tmpz00_6540;
																													BgL_tmpz00_6540 =
																														(BgL_xz00_3426 |
																														BgL_yz00_3427);
																													return
																														BGL_INT32_TO_BINT32
																														(BgL_tmpz00_6540);
																												}
																											}
																										else
																											{	/* Expand/iarith.scm 365 */
																											BgL_tagzd22624zd2_1999:
																												{	/* Expand/iarith.scm 369 */
																													obj_t
																														BgL_arg3071z00_2031;
																													if (NULLP
																														(BgL_xz00_51))
																														{	/* Expand/iarith.scm 369 */
																															BgL_arg3071z00_2031
																																= BNIL;
																														}
																													else
																														{	/* Expand/iarith.scm 369 */
																															obj_t
																																BgL_head1083z00_2034;
																															{	/* Expand/iarith.scm 369 */
																																obj_t
																																	BgL_res3525z00_3393;
																																BgL_res3525z00_3393
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BNIL, BNIL);
																																BgL_head1083z00_2034
																																	=
																																	BgL_res3525z00_3393;
																															}
																															{
																																obj_t
																																	BgL_l1081z00_2036;
																																obj_t
																																	BgL_tail1084z00_2037;
																																BgL_l1081z00_2036
																																	= BgL_xz00_51;
																																BgL_tail1084z00_2037
																																	=
																																	BgL_head1083z00_2034;
																															BgL_zc3z04anonymousza33073ze3z87_2038:
																																if (NULLP
																																	(BgL_l1081z00_2036))
																																	{	/* Expand/iarith.scm 369 */
																																		BgL_arg3071z00_2031
																																			=
																																			CDR
																																			(BgL_head1083z00_2034);
																																	}
																																else
																																	{	/* Expand/iarith.scm 369 */
																																		obj_t
																																			BgL_newtail1085z00_2040;
																																		{	/* Expand/iarith.scm 369 */
																																			obj_t
																																				BgL_arg3077z00_2042;
																																			{	/* Expand/iarith.scm 369 */
																																				obj_t
																																					BgL_xz00_2043;
																																				BgL_xz00_2043
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_l1081z00_2036));
																																				BgL_arg3077z00_2042
																																					=
																																					PROCEDURE_ENTRY
																																					(BgL_ez00_52)
																																					(BgL_ez00_52,
																																					BgL_xz00_2043,
																																					BgL_ez00_52,
																																					BEOA);
																																			}
																																			{	/* Expand/iarith.scm 369 */
																																				obj_t
																																					BgL_res3527z00_3397;
																																				BgL_res3527z00_3397
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg3077z00_2042,
																																					BNIL);
																																				BgL_newtail1085z00_2040
																																					=
																																					BgL_res3527z00_3397;
																																			}
																																		}
																																		SET_CDR
																																			(BgL_tail1084z00_2037,
																																			BgL_newtail1085z00_2040);
																																		{	/* Expand/iarith.scm 369 */
																																			obj_t
																																				BgL_arg3076z00_2041;
																																			BgL_arg3076z00_2041
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_l1081z00_2036));
																																			{
																																				obj_t
																																					BgL_tail1084z00_6561;
																																				obj_t
																																					BgL_l1081z00_6560;
																																				BgL_l1081z00_6560
																																					=
																																					BgL_arg3076z00_2041;
																																				BgL_tail1084z00_6561
																																					=
																																					BgL_newtail1085z00_2040;
																																				BgL_tail1084z00_2037
																																					=
																																					BgL_tail1084z00_6561;
																																				BgL_l1081z00_2036
																																					=
																																					BgL_l1081z00_6560;
																																				goto
																																					BgL_zc3z04anonymousza33073ze3z87_2038;
																																			}
																																		}
																																	}
																															}
																														}
																													return
																														BGl_replacez12z12zztools_miscz00
																														(BgL_xz00_51,
																														BGl_epairifyzd2reczd2zztools_miscz00
																														(BgL_arg3071z00_2031,
																															BgL_xz00_51));
																												}
																											}
																									}
																								else
																									{	/* Expand/iarith.scm 365 */
																										goto BgL_tagzd22624zd2_1999;
																									}
																							}
																						else
																							{	/* Expand/iarith.scm 365 */
																								goto BgL_tagzd22624zd2_1999;
																							}
																					}
																				else
																					{	/* Expand/iarith.scm 365 */
																						goto BgL_tagzd22624zd2_1999;
																					}
																			}
																		else
																			{	/* Expand/iarith.scm 365 */
																				goto BgL_tagzd22624zd2_1999;
																			}
																	}
																else
																	{	/* Expand/iarith.scm 365 */
																		goto BgL_tagzd22624zd2_1999;
																	}
															}
														else
															{	/* Expand/iarith.scm 365 */
																goto BgL_tagzd22624zd2_1999;
															}
													}
												else
													{	/* Expand/iarith.scm 365 */
														goto BgL_tagzd22624zd2_1999;
													}
											}
										else
											{	/* Expand/iarith.scm 365 */
												goto BgL_tagzd22624zd2_1999;
											}
									}
								else
									{	/* Expand/iarith.scm 365 */
										goto BgL_tagzd22624zd2_1999;
									}
							}
						else
							{	/* Expand/iarith.scm 365 */
								goto BgL_tagzd22624zd2_1999;
							}
					}
				else
					{	/* Expand/iarith.scm 365 */
						goto BgL_tagzd22624zd2_1999;
					}
			}
		}

	}



/* &expand-bit-ors32 */
	obj_t BGl_z62expandzd2bitzd2ors32z62zzexpand_iarithmetiquez00(obj_t
		BgL_envz00_3498, obj_t BgL_xz00_3499, obj_t BgL_ez00_3500)
	{
		{	/* Expand/iarith.scm 364 */
			return
				BGl_expandzd2bitzd2ors32z00zzexpand_iarithmetiquez00(BgL_xz00_3499,
				BgL_ez00_3500);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_iarithmetiquez00()
	{
		{	/* Expand/iarith.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_iarithmetiquez00()
	{
		{	/* Expand/iarith.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_iarithmetiquez00()
	{
		{	/* Expand/iarith.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_iarithmetiquez00()
	{
		{	/* Expand/iarith.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string3556z00zzexpand_iarithmetiquez00));
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string3556z00zzexpand_iarithmetiquez00));
		}

	}

#ifdef __cplusplus
}
#endif
