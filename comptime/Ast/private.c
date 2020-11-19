/*===========================================================================*/
/*   (Ast/private.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/private.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

	typedef struct BgL_sequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_nodesz00;
		bool_t BgL_unsafez00;
		obj_t BgL_metaz00;
	}                  *BgL_sequencez00_bglt;

	typedef struct BgL_externz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                *BgL_externz00_bglt;

	typedef struct BgL_privatez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
	}                 *BgL_privatez00_bglt;

	typedef struct BgL_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_getfieldz00_bglt;

	typedef struct BgL_setfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_setfieldz00_bglt;

	typedef struct BgL_newz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		obj_t BgL_argszd2typezd2;
	}             *BgL_newz00_bglt;

	typedef struct BgL_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                *BgL_vallocz00_bglt;

	typedef struct BgL_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}              *BgL_vrefz00_bglt;

	typedef struct BgL_vsetz12z12_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}                 *BgL_vsetz12z12_bglt;

	typedef struct BgL_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_vtypez00;
		obj_t BgL_ftypez00;
	}                 *BgL_vlengthz00_bglt;

	typedef struct BgL_instanceofz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_classz00;
	}                    *BgL_instanceofz00_bglt;

	typedef struct BgL_castzd2nullzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
	}                     *BgL_castzd2nullzd2_bglt;

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;


	BGL_IMPORT bool_t bigloo_mangledp(obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzast_privatez00();
	BGL_EXPORTED_DECL obj_t BGl_privatezd2nodezd2zzast_privatez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_castzd2sexpzd2typez00zzast_privatez00(obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zzast_privatez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62privatezd2nodezb0zzast_privatez00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_privatez00();
	extern obj_t BGl_vallocz00zzast_nodez00;
	extern obj_t BGl_castzd2nullzd2zzast_nodez00;
	extern obj_t BGl_sexpza2zd2ze3nodez93zzast_sexpz00(obj_t, obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	static obj_t BGl_z62makezd2privatezd2sexpz62zzast_privatez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_privatez00 = BUNSPEC;
	extern obj_t BGl_newz00zzast_nodez00;
	static obj_t BGl_z62castzd2sexpzd2typez62zzast_privatez00(obj_t, obj_t);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_privatezd2stampzd2zzast_privatez00();
	static obj_t BGl_toplevelzd2initzd2zzast_privatez00();
	static obj_t BGl_genericzd2initzd2zzast_privatez00();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t BGl_privatezd2sexpzf3z21zzast_privatez00(obj_t);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_za2privatezd2stampza2zd2zzast_privatez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t bigloo_demangle(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2metazd2zzast_privatez00(obj_t, obj_t);
	extern obj_t BGl_vrefz00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t BGl_castzd2sexpzf3z21zzast_privatez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_feffectz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzast_privatez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_privatez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_privatez00();
	static obj_t BGl_z62castzd2sexpzf3z43zzast_privatez00(obj_t, obj_t);
	static obj_t BGl_z62privatezd2stampzb0zzast_privatez00(obj_t);
	extern obj_t BGl_instanceofz00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_setfieldz00zzast_nodez00;
	static obj_t BGl_z62privatezd2sexpzf3z43zzast_privatez00(obj_t, obj_t);
	static obj_t BGl_z62expandzd2metazb0zzast_privatez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t __cnst[20];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_castzd2sexpzd2typezd2envzd2zzast_privatez00,
		BgL_bgl_za762castza7d2sexpza7d2810za7,
		BGl_z62castzd2sexpzd2typez62zzast_privatez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2798z00zzast_privatez00,
		BgL_bgl_string2798za700za7za7a2811za7, "cast-sexp-type", 14);
	      DEFINE_STRING(BGl_string2799z00zzast_privatez00,
		BgL_bgl_string2799za700za7za7a2812za7, "Illegal cast sexp", 17);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_privatezd2nodezd2envz00zzast_privatez00,
		BgL_bgl_za762privateza7d2nod2813z00,
		BGl_z62privatezd2nodezb0zzast_privatez00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2privatezd2sexpzd2envzd2zzast_privatez00,
		BgL_bgl_za762makeza7d2privat2814z00, va_generic_entry,
		BGl_z62makezd2privatezd2sexpz62zzast_privatez00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_privatezd2sexpzf3zd2envzf3zzast_privatez00,
		BgL_bgl_za762privateza7d2sex2815z00,
		BGl_z62privatezd2sexpzf3z43zzast_privatez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2metazd2envz00zzast_privatez00,
		BgL_bgl_za762expandza7d2meta2816z00,
		BGl_z62expandzd2metazb0zzast_privatez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2800z00zzast_privatez00,
		BgL_bgl_string2800za700za7za7a2817za7, "", 0);
	      DEFINE_STRING(BGl_string2801z00zzast_privatez00,
		BgL_bgl_string2801za700za7za7a2818za7, "private-node", 12);
	      DEFINE_STRING(BGl_string2802z00zzast_privatez00,
		BgL_bgl_string2802za700za7za7a2819za7, "Illegal private kind", 20);
	      DEFINE_STRING(BGl_string2803z00zzast_privatez00,
		BgL_bgl_string2803za700za7za7a2820za7, "meta", 4);
	      DEFINE_STRING(BGl_string2804z00zzast_privatez00,
		BgL_bgl_string2804za700za7za7a2821za7, "bad syntax", 10);
	      DEFINE_STRING(BGl_string2805z00zzast_privatez00,
		BgL_bgl_string2805za700za7za7a2822za7, "ast_private", 11);
	      DEFINE_STRING(BGl_string2806z00zzast_privatez00,
		BgL_bgl_string2806za700za7za7a2823za7,
		"_ unsafe isa instanceof vref meta vset! valloc vlength cast-null quote new setfield getfield vset-ur! vref-ur value - cast ___bgl_private_stamp_mark ",
		149);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_castzd2sexpzf3zd2envzf3zzast_privatez00,
		BgL_bgl_za762castza7d2sexpza7f2824za7,
		BGl_z62castzd2sexpzf3z43zzast_privatez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_privatezd2stampzd2envz00zzast_privatez00,
		BgL_bgl_za762privateza7d2sta2825z00,
		BGl_z62privatezd2stampzb0zzast_privatez00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_privatez00));
		     ADD_ROOT((void *) (&BGl_za2privatezd2stampza2zd2zzast_privatez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long
		BgL_checksumz00_3860, char *BgL_fromz00_3861)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_privatez00))
				{
					BGl_requirezd2initializa7ationz75zzast_privatez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_privatez00();
					BGl_libraryzd2moduleszd2initz00zzast_privatez00();
					BGl_cnstzd2initzd2zzast_privatez00();
					BGl_importedzd2moduleszd2initz00zzast_privatez00();
					return BGl_toplevelzd2initzd2zzast_privatez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_privatez00()
	{
		{	/* Ast/private.scm 15 */
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "ast_private");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_private");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_private");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_private");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_private");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_private");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"ast_private");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_private");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_private");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_privatez00()
	{
		{	/* Ast/private.scm 15 */
			{	/* Ast/private.scm 15 */
				obj_t BgL_cportz00_3847;

				{	/* Ast/private.scm 15 */
					obj_t BgL_stringz00_3855;

					BgL_stringz00_3855 = BGl_string2806z00zzast_privatez00;
					{	/* Ast/private.scm 15 */
						obj_t BgL_startz00_3856;

						BgL_startz00_3856 = BINT(((long) 0));
						{	/* Ast/private.scm 15 */
							obj_t BgL_endz00_3857;

							BgL_endz00_3857 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3855)));
							{	/* Ast/private.scm 15 */

								BgL_cportz00_3847 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3855, BgL_startz00_3856, BgL_endz00_3857);
				}}}}
				{
					long BgL_iz00_3848;

					BgL_iz00_3848 = ((long) 19);
				BgL_loopz00_3849:
					if ((BgL_iz00_3848 == ((long) -1)))
						{	/* Ast/private.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Ast/private.scm 15 */
							{	/* Ast/private.scm 15 */
								obj_t BgL_arg2808z00_3851;

								{	/* Ast/private.scm 15 */

									{	/* Ast/private.scm 15 */
										obj_t BgL_locationz00_3853;

										BgL_locationz00_3853 = BBOOL(((bool_t) 0));
										{	/* Ast/private.scm 15 */

											BgL_arg2808z00_3851 =
												BGl_readz00zz__readerz00(BgL_cportz00_3847,
												BgL_locationz00_3853);
										}
									}
								}
								{	/* Ast/private.scm 15 */
									int BgL_tmpz00_3888;

									BgL_tmpz00_3888 = (int) (BgL_iz00_3848);
									CNST_TABLE_SET(BgL_tmpz00_3888, BgL_arg2808z00_3851);
							}}
							{	/* Ast/private.scm 15 */
								int BgL_auxz00_3854;

								BgL_auxz00_3854 = (int) ((BgL_iz00_3848 - ((long) 1)));
								{
									long BgL_iz00_3893;

									BgL_iz00_3893 = (long) (BgL_auxz00_3854);
									BgL_iz00_3848 = BgL_iz00_3893;
									goto BgL_loopz00_3849;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_privatez00()
	{
		{	/* Ast/private.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_privatez00()
	{
		{	/* Ast/private.scm 15 */
			return (BGl_za2privatezd2stampza2zd2zzast_privatez00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}

	}



/* private-stamp */
	BGL_EXPORTED_DEF obj_t BGl_privatezd2stampzd2zzast_privatez00()
	{
		{	/* Ast/private.scm 43 */
			return CNST_TABLE_REF(((long) 0));
		}

	}



/* &private-stamp */
	obj_t BGl_z62privatezd2stampzb0zzast_privatez00(obj_t BgL_envz00_3828)
	{
		{	/* Ast/private.scm 43 */
			return BGl_privatezd2stampzd2zzast_privatez00();
		}

	}



/* private-sexp? */
	BGL_EXPORTED_DEF bool_t BGl_privatezd2sexpzf3z21zzast_privatez00(obj_t
		BgL_sexpz00_3)
	{
		{	/* Ast/private.scm 49 */
			return (CAR(BgL_sexpz00_3) == CNST_TABLE_REF(((long) 0)));
		}

	}



/* &private-sexp? */
	obj_t BGl_z62privatezd2sexpzf3z43zzast_privatez00(obj_t BgL_envz00_3829,
		obj_t BgL_sexpz00_3830)
	{
		{	/* Ast/private.scm 49 */
			return BBOOL(BGl_privatezd2sexpzf3z21zzast_privatez00(BgL_sexpz00_3830));
		}

	}



/* cast-sexp? */
	BGL_EXPORTED_DEF bool_t BGl_castzd2sexpzf3z21zzast_privatez00(obj_t
		BgL_sexpz00_4)
	{
		{	/* Ast/private.scm 55 */
			if ((CAR(BgL_sexpz00_4) == CNST_TABLE_REF(((long) 0))))
				{	/* Ast/private.scm 57 */
					obj_t BgL_cdrzd2105zd2_1342;

					BgL_cdrzd2105zd2_1342 = CDR(BgL_sexpz00_4);
					if (PAIRP(BgL_cdrzd2105zd2_1342))
						{	/* Ast/private.scm 57 */
							obj_t BgL_cdrzd2107zd2_1344;

							BgL_cdrzd2107zd2_1344 = CDR(BgL_cdrzd2105zd2_1342);
							if ((CAR(BgL_cdrzd2105zd2_1342) == CNST_TABLE_REF(((long) 1))))
								{	/* Ast/private.scm 57 */
									if (PAIRP(BgL_cdrzd2107zd2_1344))
										{	/* Ast/private.scm 57 */
											obj_t BgL_cdrzd2109zd2_1348;

											BgL_cdrzd2109zd2_1348 = CDR(BgL_cdrzd2107zd2_1344);
											if (PAIRP(BgL_cdrzd2109zd2_1348))
												{	/* Ast/private.scm 57 */
													return NULLP(CDR(BgL_cdrzd2109zd2_1348));
												}
											else
												{	/* Ast/private.scm 57 */
													return ((bool_t) 0);
												}
										}
									else
										{	/* Ast/private.scm 57 */
											return ((bool_t) 0);
										}
								}
							else
								{	/* Ast/private.scm 57 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Ast/private.scm 57 */
							return ((bool_t) 0);
						}
				}
			else
				{	/* Ast/private.scm 56 */
					return ((bool_t) 0);
				}
		}

	}



/* &cast-sexp? */
	obj_t BGl_z62castzd2sexpzf3z43zzast_privatez00(obj_t BgL_envz00_3831,
		obj_t BgL_sexpz00_3832)
	{
		{	/* Ast/private.scm 55 */
			return BBOOL(BGl_castzd2sexpzf3z21zzast_privatez00(BgL_sexpz00_3832));
		}

	}



/* cast-sexp-type */
	BGL_EXPORTED_DEF obj_t BGl_castzd2sexpzd2typez00zzast_privatez00(obj_t
		BgL_sexpz00_5)
	{
		{	/* Ast/private.scm 64 */
			{

				{	/* Ast/private.scm 65 */
					obj_t BgL_cdrzd2118zd2_1359;

					BgL_cdrzd2118zd2_1359 = CDR(BgL_sexpz00_5);
					if (PAIRP(BgL_cdrzd2118zd2_1359))
						{	/* Ast/private.scm 65 */
							obj_t BgL_cdrzd2121zd2_1361;

							BgL_cdrzd2121zd2_1361 = CDR(BgL_cdrzd2118zd2_1359);
							if ((CAR(BgL_cdrzd2118zd2_1359) == CNST_TABLE_REF(((long) 1))))
								{	/* Ast/private.scm 65 */
									if (PAIRP(BgL_cdrzd2121zd2_1361))
										{	/* Ast/private.scm 65 */
											obj_t BgL_cdrzd2124zd2_1365;

											BgL_cdrzd2124zd2_1365 = CDR(BgL_cdrzd2121zd2_1361);
											if (PAIRP(BgL_cdrzd2124zd2_1365))
												{	/* Ast/private.scm 65 */
													if (NULLP(CDR(BgL_cdrzd2124zd2_1365)))
														{	/* Ast/private.scm 65 */
															return CAR(BgL_cdrzd2121zd2_1361);
														}
													else
														{	/* Ast/private.scm 65 */
														BgL_tagzd2113zd2_1356:
															return
																BGl_errorz00zz__errorz00
																(BGl_string2798z00zzast_privatez00,
																BGl_string2799z00zzast_privatez00,
																BgL_sexpz00_5);
														}
												}
											else
												{	/* Ast/private.scm 65 */
													goto BgL_tagzd2113zd2_1356;
												}
										}
									else
										{	/* Ast/private.scm 65 */
											goto BgL_tagzd2113zd2_1356;
										}
								}
							else
								{	/* Ast/private.scm 65 */
									goto BgL_tagzd2113zd2_1356;
								}
						}
					else
						{	/* Ast/private.scm 65 */
							goto BgL_tagzd2113zd2_1356;
						}
				}
			}
		}

	}



/* &cast-sexp-type */
	obj_t BGl_z62castzd2sexpzd2typez62zzast_privatez00(obj_t BgL_envz00_3833,
		obj_t BgL_sexpz00_3834)
	{
		{	/* Ast/private.scm 64 */
			return BGl_castzd2sexpzd2typez00zzast_privatez00(BgL_sexpz00_3834);
		}

	}



/* private-node */
	BGL_EXPORTED_DEF obj_t BGl_privatezd2nodezd2zzast_privatez00(obj_t
		BgL_sexpz00_6, obj_t BgL_stackz00_7, obj_t BgL_locz00_8,
		obj_t BgL_sitez00_9)
	{
		{	/* Ast/private.scm 73 */
			{
				obj_t BgL_typez00_1428;
				obj_t BgL_kwdsz00_1429;
				obj_t BgL_bodyz00_1430;
				obj_t BgL_typez00_1425;
				obj_t BgL_expz00_1426;
				obj_t BgL_vtypez00_1417;
				obj_t BgL_ftypez00_1418;
				obj_t BgL_otypez00_1419;
				obj_t BgL_czd2heapzd2fmtz00_1420;
				obj_t BgL_czd2stackzd2fmtz00_1421;
				obj_t BgL_stackzf3zf3_1422;
				obj_t BgL_restz00_1423;
				obj_t BgL_vtypez00_1411;
				obj_t BgL_ftypez00_1412;
				obj_t BgL_otypez00_1413;
				obj_t BgL_czd2fmtzd2_1414;
				obj_t BgL_restz00_1415;
				obj_t BgL_vtypez00_1405;
				obj_t BgL_ftypez00_1406;
				obj_t BgL_otypez00_1407;
				obj_t BgL_czd2fmtzd2_1408;
				obj_t BgL_restz00_1409;
				obj_t BgL_vtypez00_1399;
				obj_t BgL_ftypez00_1400;
				obj_t BgL_otypez00_1401;
				obj_t BgL_czd2fmtzd2_1402;
				obj_t BgL_expz00_1403;
				obj_t BgL_typez00_1396;
				obj_t BgL_expz00_1397;
				obj_t BgL_typez00_1394;
				obj_t BgL_typez00_1391;
				obj_t BgL_expz00_1392;
				obj_t BgL_typez00_1387;
				obj_t BgL_argszd2typezd2_1388;
				obj_t BgL_restz00_1389;
				obj_t BgL_typez00_1385;
				obj_t BgL_ftypez00_1379;
				obj_t BgL_otypez00_1380;
				obj_t BgL_fieldzd2namezd2_1381;
				obj_t BgL_czd2fmtzd2_1382;
				obj_t BgL_restz00_1383;
				obj_t BgL_ftypez00_1373;
				obj_t BgL_otypez00_1374;
				obj_t BgL_fieldzd2namezd2_1375;
				obj_t BgL_czd2fmtzd2_1376;
				obj_t BgL_objz00_1377;

				{	/* Ast/private.scm 78 */
					obj_t BgL_cdrzd2164zd2_1435;

					BgL_cdrzd2164zd2_1435 = CDR(BgL_sexpz00_6);
					if (PAIRP(BgL_cdrzd2164zd2_1435))
						{	/* Ast/private.scm 78 */
							obj_t BgL_cdrzd2171zd2_1437;

							BgL_cdrzd2171zd2_1437 = CDR(BgL_cdrzd2164zd2_1435);
							if ((CAR(BgL_cdrzd2164zd2_1435) == CNST_TABLE_REF(((long) 6))))
								{	/* Ast/private.scm 78 */
									if (PAIRP(BgL_cdrzd2171zd2_1437))
										{	/* Ast/private.scm 78 */
											obj_t BgL_cdrzd2178zd2_1441;

											BgL_cdrzd2178zd2_1441 = CDR(BgL_cdrzd2171zd2_1437);
											if (PAIRP(BgL_cdrzd2178zd2_1441))
												{	/* Ast/private.scm 78 */
													obj_t BgL_cdrzd2185zd2_1443;

													BgL_cdrzd2185zd2_1443 = CDR(BgL_cdrzd2178zd2_1441);
													if (PAIRP(BgL_cdrzd2185zd2_1443))
														{	/* Ast/private.scm 78 */
															obj_t BgL_cdrzd2191zd2_1445;

															BgL_cdrzd2191zd2_1445 =
																CDR(BgL_cdrzd2185zd2_1443);
															if (PAIRP(BgL_cdrzd2191zd2_1445))
																{	/* Ast/private.scm 78 */
																	obj_t BgL_cdrzd2196zd2_1447;

																	BgL_cdrzd2196zd2_1447 =
																		CDR(BgL_cdrzd2191zd2_1445);
																	if (PAIRP(BgL_cdrzd2196zd2_1447))
																		{	/* Ast/private.scm 78 */
																			if (NULLP(CDR(BgL_cdrzd2196zd2_1447)))
																				{	/* Ast/private.scm 78 */
																					obj_t BgL_arg1312z00_1451;
																					obj_t BgL_arg1314z00_1452;
																					obj_t BgL_arg1315z00_1453;
																					obj_t BgL_arg1316z00_1454;
																					obj_t BgL_arg1317z00_1455;

																					BgL_arg1312z00_1451 =
																						CAR(BgL_cdrzd2171zd2_1437);
																					BgL_arg1314z00_1452 =
																						CAR(BgL_cdrzd2178zd2_1441);
																					BgL_arg1315z00_1453 =
																						CAR(BgL_cdrzd2185zd2_1443);
																					BgL_arg1316z00_1454 =
																						CAR(BgL_cdrzd2191zd2_1445);
																					BgL_arg1317z00_1455 =
																						CAR(BgL_cdrzd2196zd2_1447);
																					{
																						BgL_getfieldz00_bglt
																							BgL_auxz00_3974;
																						BgL_ftypez00_1373 =
																							BgL_arg1312z00_1451;
																						BgL_otypez00_1374 =
																							BgL_arg1314z00_1452;
																						BgL_fieldzd2namezd2_1375 =
																							BgL_arg1315z00_1453;
																						BgL_czd2fmtzd2_1376 =
																							BgL_arg1316z00_1454;
																						BgL_objz00_1377 =
																							BgL_arg1317z00_1455;
																						{	/* Ast/private.scm 80 */
																							obj_t BgL_tidz00_2778;
																							BgL_typez00_bglt
																								BgL_ftypez00_2779;
																							BgL_typez00_bglt
																								BgL_otypez00_2780;
																							{	/* Ast/private.scm 82 */
																								obj_t BgL_arg2456z00_2790;

																								{	/* Ast/private.scm 82 */
																									obj_t BgL_arg2461z00_2794;

																									if (bigloo_mangledp
																										(BgL_fieldzd2namezd2_1375))
																										{	/* Ast/private.scm 75 */
																											BgL_arg2461z00_2794 =
																												bigloo_demangle
																												(BgL_fieldzd2namezd2_1375);
																										}
																									else
																										{	/* Ast/private.scm 75 */
																											BgL_arg2461z00_2794 =
																												BgL_fieldzd2namezd2_1375;
																										}
																									{	/* Ast/private.scm 81 */
																										obj_t BgL_res2633z00_3136;

																										BgL_res2633z00_3136 =
																											bstring_to_symbol(
																											((obj_t)
																												BgL_arg2461z00_2794));
																										BgL_arg2456z00_2790 =
																											BgL_res2633z00_3136;
																									}
																								}
																								{	/* Ast/private.scm 80 */
																									obj_t BgL_list2457z00_2791;

																									{	/* Ast/private.scm 80 */
																										obj_t BgL_arg2458z00_2792;

																										{	/* Ast/private.scm 80 */
																											obj_t BgL_arg2460z00_2793;

																											BgL_arg2460z00_2793 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg2456z00_2790,
																												BNIL);
																											BgL_arg2458z00_2792 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														2)),
																												BgL_arg2460z00_2793);
																										}
																										BgL_list2457z00_2791 =
																											MAKE_YOUNG_PAIR
																											(BgL_otypez00_1374,
																											BgL_arg2458z00_2792);
																									}
																									BgL_tidz00_2778 =
																										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																										(BgL_list2457z00_2791);
																							}}
																							BgL_ftypez00_2779 =
																								BGl_usezd2typez12zc0zztype_envz00
																								(BgL_ftypez00_1373,
																								BgL_locz00_8);
																							BgL_otypez00_2780 =
																								BGl_usezd2typez12zc0zztype_envz00
																								(BgL_otypez00_1374,
																								BgL_locz00_8);
																							{	/* Ast/private.scm 85 */
																								BgL_getfieldz00_bglt
																									BgL_new1102z00_2781;
																								{	/* Ast/private.scm 86 */
																									BgL_getfieldz00_bglt
																										BgL_new1100z00_2788;
																									BgL_new1100z00_2788 =
																										((BgL_getfieldz00_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_getfieldz00_bgl))));
																									{	/* Ast/private.scm 86 */
																										long BgL_arg2455z00_2789;

																										{	/* Ast/private.scm 86 */
																											long BgL_res2634z00_3138;

																											BgL_res2634z00_3138 =
																												BGL_CLASS_INDEX
																												(BGl_getfieldz00zzast_nodez00);
																											BgL_arg2455z00_2789 =
																												BgL_res2634z00_3138;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1100z00_2788),
																											BgL_arg2455z00_2789);
																									}
																									{	/* Ast/private.scm 86 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_3991;
																										BgL_tmpz00_3991 =
																											((BgL_objectz00_bglt)
																											BgL_new1100z00_2788);
																										BGL_OBJECT_WIDENING_SET
																											(BgL_tmpz00_3991, BFALSE);
																									}
																									((BgL_objectz00_bglt)
																										BgL_new1100z00_2788);
																									BgL_new1102z00_2781 =
																										BgL_new1100z00_2788;
																								}
																								((((BgL_nodez00_bglt) COBJECT(
																												((BgL_nodez00_bglt)
																													BgL_new1102z00_2781)))->
																										BgL_locz00) =
																									((obj_t) BgL_locz00_8),
																									BUNSPEC);
																								((((BgL_nodez00_bglt)
																											COBJECT((
																													(BgL_nodez00_bglt)
																													BgL_new1102z00_2781)))->
																										BgL_typez00) =
																									((BgL_typez00_bglt)
																										BgL_ftypez00_2779),
																									BUNSPEC);
																								((((BgL_nodezf2effectzf2_bglt)
																											COBJECT((
																													(BgL_nodezf2effectzf2_bglt)
																													BgL_new1102z00_2781)))->
																										BgL_sidezd2effectzd2) =
																									((obj_t) BFALSE), BUNSPEC);
																								((((BgL_nodezf2effectzf2_bglt)
																											COBJECT((
																													(BgL_nodezf2effectzf2_bglt)
																													BgL_new1102z00_2781)))->
																										BgL_keyz00) =
																									((obj_t) BINT(((long) -1))),
																									BUNSPEC);
																								{
																									obj_t BgL_auxz00_4004;

																									{	/* Ast/private.scm 92 */
																										BgL_nodez00_bglt
																											BgL_arg2450z00_2782;
																										BgL_arg2450z00_2782 =
																											BGl_sexpzd2ze3nodez31zzast_sexpz00
																											(BgL_objz00_1377,
																											BgL_stackz00_7,
																											BgL_locz00_8,
																											CNST_TABLE_REF(((long)
																													3)));
																										{	/* Ast/private.scm 92 */
																											obj_t
																												BgL_list2451z00_2783;
																											BgL_list2451z00_2783 =
																												MAKE_YOUNG_PAIR(((obj_t)
																													BgL_arg2450z00_2782),
																												BNIL);
																											BgL_auxz00_4004 =
																												BgL_list2451z00_2783;
																									}}
																									((((BgL_externz00_bglt)
																												COBJECT((
																														(BgL_externz00_bglt)
																														BgL_new1102z00_2781)))->
																											BgL_exprza2za2) =
																										((obj_t) BgL_auxz00_4004),
																										BUNSPEC);
																								}
																								{
																									obj_t BgL_auxz00_4011;

																									{	/* Ast/private.scm 93 */
																										BgL_feffectz00_bglt
																											BgL_new1104z00_2784;
																										{	/* Ast/private.scm 94 */
																											BgL_feffectz00_bglt
																												BgL_new1103z00_2786;
																											BgL_new1103z00_2786 =
																												((BgL_feffectz00_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_feffectz00_bgl))));
																											{	/* Ast/private.scm 94 */
																												long
																													BgL_arg2453z00_2787;
																												{	/* Ast/private.scm 94 */
																													long
																														BgL_res2636z00_3144;
																													{	/* Ast/private.scm 94 */
																														obj_t
																															BgL_classz00_3143;
																														BgL_classz00_3143 =
																															BGl_feffectz00zzast_varz00;
																														BgL_res2636z00_3144
																															=
																															BGL_CLASS_INDEX
																															(BgL_classz00_3143);
																													}
																													BgL_arg2453z00_2787 =
																														BgL_res2636z00_3144;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1103z00_2786),
																													BgL_arg2453z00_2787);
																											}
																											BgL_new1104z00_2784 =
																												BgL_new1103z00_2786;
																										}
																										{
																											obj_t BgL_auxz00_4017;

																											{	/* Ast/private.scm 94 */
																												obj_t
																													BgL_list2452z00_2785;
																												BgL_list2452z00_2785 =
																													MAKE_YOUNG_PAIR
																													(BgL_tidz00_2778,
																													BNIL);
																												BgL_auxz00_4017 =
																													BgL_list2452z00_2785;
																											}
																											((((BgL_feffectz00_bglt)
																														COBJECT
																														(BgL_new1104z00_2784))->
																													BgL_readz00) =
																												((obj_t)
																													BgL_auxz00_4017),
																												BUNSPEC);
																										}
																										((((BgL_feffectz00_bglt)
																													COBJECT
																													(BgL_new1104z00_2784))->
																												BgL_writez00) =
																											((obj_t) BNIL), BUNSPEC);
																										BgL_auxz00_4011 =
																											((obj_t)
																											BgL_new1104z00_2784);
																									}
																									((((BgL_externz00_bglt)
																												COBJECT((
																														(BgL_externz00_bglt)
																														BgL_new1102z00_2781)))->
																											BgL_effectz00) =
																										((obj_t) BgL_auxz00_4011),
																										BUNSPEC);
																								}
																								((((BgL_privatez00_bglt)
																											COBJECT((
																													(BgL_privatez00_bglt)
																													BgL_new1102z00_2781)))->
																										BgL_czd2formatzd2) =
																									((obj_t) BgL_czd2fmtzd2_1376),
																									BUNSPEC);
																								((((BgL_getfieldz00_bglt)
																											COBJECT
																											(BgL_new1102z00_2781))->
																										BgL_fnamez00) =
																									((obj_t)
																										BgL_fieldzd2namezd2_1375),
																									BUNSPEC);
																								((((BgL_getfieldz00_bglt)
																											COBJECT
																											(BgL_new1102z00_2781))->
																										BgL_ftypez00) =
																									((BgL_typez00_bglt)
																										BgL_ftypez00_2779),
																									BUNSPEC);
																								((((BgL_getfieldz00_bglt)
																											COBJECT
																											(BgL_new1102z00_2781))->
																										BgL_otypez00) =
																									((BgL_typez00_bglt)
																										BgL_otypez00_2780),
																									BUNSPEC);
																								BgL_auxz00_3974 =
																									BgL_new1102z00_2781;
																						}}
																						return ((obj_t) BgL_auxz00_3974);
																					}
																				}
																			else
																				{	/* Ast/private.scm 78 */
																				BgL_tagzd2141zd2_1432:
																					{	/* Ast/private.scm 227 */
																						obj_t BgL_arg2530z00_2910;

																						{	/* Ast/private.scm 227 */
																							bool_t BgL_test2847z00_4029;

																							{	/* Ast/private.scm 227 */
																								obj_t BgL_tmpz00_4030;

																								BgL_tmpz00_4030 =
																									CDR(BgL_sexpz00_6);
																								BgL_test2847z00_4029 =
																									PAIRP(BgL_tmpz00_4030);
																							}
																							if (BgL_test2847z00_4029)
																								{	/* Ast/private.scm 227 */
																									BgL_arg2530z00_2910 =
																										CAR(CDR(BgL_sexpz00_6));
																								}
																							else
																								{	/* Ast/private.scm 227 */
																									BgL_arg2530z00_2910 =
																										BgL_sexpz00_6;
																								}
																						}
																						return
																							BGl_errorz00zz__errorz00
																							(BGl_string2801z00zzast_privatez00,
																							BGl_string2802z00zzast_privatez00,
																							BgL_arg2530z00_2910);
																					}
																				}
																		}
																	else
																		{	/* Ast/private.scm 78 */
																			goto BgL_tagzd2141zd2_1432;
																		}
																}
															else
																{	/* Ast/private.scm 78 */
																	goto BgL_tagzd2141zd2_1432;
																}
														}
													else
														{	/* Ast/private.scm 78 */
															goto BgL_tagzd2141zd2_1432;
														}
												}
											else
												{	/* Ast/private.scm 78 */
													goto BgL_tagzd2141zd2_1432;
												}
										}
									else
										{	/* Ast/private.scm 78 */
											goto BgL_tagzd2141zd2_1432;
										}
								}
							else
								{	/* Ast/private.scm 78 */
									obj_t BgL_cdrzd21936zd2_1539;

									BgL_cdrzd21936zd2_1539 = CDR(((obj_t) BgL_cdrzd2164zd2_1435));
									if (
										(CAR(
												((obj_t) BgL_cdrzd2164zd2_1435)) ==
											CNST_TABLE_REF(((long) 7))))
										{	/* Ast/private.scm 78 */
											if (PAIRP(BgL_cdrzd21936zd2_1539))
												{	/* Ast/private.scm 78 */
													obj_t BgL_cdrzd21943zd2_1543;

													BgL_cdrzd21943zd2_1543 = CDR(BgL_cdrzd21936zd2_1539);
													if (PAIRP(BgL_cdrzd21943zd2_1543))
														{	/* Ast/private.scm 78 */
															obj_t BgL_cdrzd21950zd2_1545;

															BgL_cdrzd21950zd2_1545 =
																CDR(BgL_cdrzd21943zd2_1543);
															if (PAIRP(BgL_cdrzd21950zd2_1545))
																{	/* Ast/private.scm 78 */
																	obj_t BgL_cdrzd21956zd2_1547;

																	BgL_cdrzd21956zd2_1547 =
																		CDR(BgL_cdrzd21950zd2_1545);
																	if (PAIRP(BgL_cdrzd21956zd2_1547))
																		{	/* Ast/private.scm 78 */
																			obj_t BgL_arg1441z00_1549;
																			obj_t BgL_arg1442z00_1550;
																			obj_t BgL_arg1448z00_1551;
																			obj_t BgL_arg1449z00_1552;
																			obj_t BgL_arg1461z00_1553;

																			BgL_arg1441z00_1549 =
																				CAR(BgL_cdrzd21936zd2_1539);
																			BgL_arg1442z00_1550 =
																				CAR(BgL_cdrzd21943zd2_1543);
																			BgL_arg1448z00_1551 =
																				CAR(BgL_cdrzd21950zd2_1545);
																			BgL_arg1449z00_1552 =
																				CAR(BgL_cdrzd21956zd2_1547);
																			BgL_arg1461z00_1553 =
																				CDR(BgL_cdrzd21956zd2_1547);
																			{
																				BgL_setfieldz00_bglt BgL_auxz00_4059;

																				BgL_ftypez00_1379 = BgL_arg1441z00_1549;
																				BgL_otypez00_1380 = BgL_arg1442z00_1550;
																				BgL_fieldzd2namezd2_1381 =
																					BgL_arg1448z00_1551;
																				BgL_czd2fmtzd2_1382 =
																					BgL_arg1449z00_1552;
																				BgL_restz00_1383 = BgL_arg1461z00_1553;
																				{	/* Ast/private.scm 97 */
																					obj_t BgL_tidz00_2795;
																					BgL_typez00_bglt BgL_otypez00_2796;
																					BgL_typez00_bglt BgL_ftypez00_2797;

																					{	/* Ast/private.scm 99 */
																						obj_t BgL_arg2466z00_2805;

																						{	/* Ast/private.scm 99 */
																							obj_t BgL_arg2471z00_2809;

																							if (bigloo_mangledp
																								(BgL_fieldzd2namezd2_1381))
																								{	/* Ast/private.scm 75 */
																									BgL_arg2471z00_2809 =
																										bigloo_demangle
																										(BgL_fieldzd2namezd2_1381);
																								}
																							else
																								{	/* Ast/private.scm 75 */
																									BgL_arg2471z00_2809 =
																										BgL_fieldzd2namezd2_1381;
																								}
																							{	/* Ast/private.scm 98 */
																								obj_t BgL_res2638z00_3150;

																								BgL_res2638z00_3150 =
																									bstring_to_symbol(
																									((obj_t)
																										BgL_arg2471z00_2809));
																								BgL_arg2466z00_2805 =
																									BgL_res2638z00_3150;
																							}
																						}
																						{	/* Ast/private.scm 97 */
																							obj_t BgL_list2467z00_2806;

																							{	/* Ast/private.scm 97 */
																								obj_t BgL_arg2469z00_2807;

																								{	/* Ast/private.scm 97 */
																									obj_t BgL_arg2470z00_2808;

																									BgL_arg2470z00_2808 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2466z00_2805, BNIL);
																									BgL_arg2469z00_2807 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long) 2)),
																										BgL_arg2470z00_2808);
																								}
																								BgL_list2467z00_2806 =
																									MAKE_YOUNG_PAIR
																									(BgL_otypez00_1380,
																									BgL_arg2469z00_2807);
																							}
																							BgL_tidz00_2795 =
																								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																								(BgL_list2467z00_2806);
																					}}
																					BgL_otypez00_2796 =
																						BGl_usezd2typez12zc0zztype_envz00
																						(BgL_otypez00_1380, BgL_locz00_8);
																					BgL_ftypez00_2797 =
																						BGl_usezd2typez12zc0zztype_envz00
																						(BgL_ftypez00_1379, BgL_locz00_8);
																					{	/* Ast/private.scm 102 */
																						BgL_setfieldz00_bglt
																							BgL_new1106z00_2798;
																						{	/* Ast/private.scm 103 */
																							BgL_setfieldz00_bglt
																								BgL_new1105z00_2803;
																							BgL_new1105z00_2803 =
																								((BgL_setfieldz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_setfieldz00_bgl))));
																							{	/* Ast/private.scm 103 */
																								long BgL_arg2464z00_2804;

																								{	/* Ast/private.scm 103 */
																									long BgL_res2639z00_3152;

																									BgL_res2639z00_3152 =
																										BGL_CLASS_INDEX
																										(BGl_setfieldz00zzast_nodez00);
																									BgL_arg2464z00_2804 =
																										BgL_res2639z00_3152;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1105z00_2803),
																									BgL_arg2464z00_2804);
																							}
																							{	/* Ast/private.scm 103 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_4076;
																								BgL_tmpz00_4076 =
																									((BgL_objectz00_bglt)
																									BgL_new1105z00_2803);
																								BGL_OBJECT_WIDENING_SET
																									(BgL_tmpz00_4076, BFALSE);
																							}
																							((BgL_objectz00_bglt)
																								BgL_new1105z00_2803);
																							BgL_new1106z00_2798 =
																								BgL_new1105z00_2803;
																						}
																						((((BgL_nodez00_bglt) COBJECT(
																										((BgL_nodez00_bglt)
																											BgL_new1106z00_2798)))->
																								BgL_locz00) =
																							((obj_t) BgL_locz00_8), BUNSPEC);
																						((((BgL_nodez00_bglt)
																									COBJECT(((BgL_nodez00_bglt)
																											BgL_new1106z00_2798)))->
																								BgL_typez00) =
																							((BgL_typez00_bglt) (
																									(BgL_typez00_bglt)
																									BGl_za2objza2z00zztype_cachez00)),
																							BUNSPEC);
																						((((BgL_nodezf2effectzf2_bglt)
																									COBJECT((
																											(BgL_nodezf2effectzf2_bglt)
																											BgL_new1106z00_2798)))->
																								BgL_sidezd2effectzd2) =
																							((obj_t) BTRUE), BUNSPEC);
																						((((BgL_nodezf2effectzf2_bglt)
																									COBJECT((
																											(BgL_nodezf2effectzf2_bglt)
																											BgL_new1106z00_2798)))->
																								BgL_keyz00) =
																							((obj_t) BINT(((long) -1))),
																							BUNSPEC);
																						((((BgL_externz00_bglt)
																									COBJECT(((BgL_externz00_bglt)
																											BgL_new1106z00_2798)))->
																								BgL_exprza2za2) =
																							((obj_t)
																								BGl_sexpza2zd2ze3nodez93zzast_sexpz00
																								(BgL_restz00_1383,
																									BgL_stackz00_7, BgL_locz00_8,
																									CNST_TABLE_REF(((long) 3)))),
																							BUNSPEC);
																						{
																							obj_t BgL_auxz00_4094;

																							{	/* Ast/private.scm 110 */
																								BgL_feffectz00_bglt
																									BgL_new1108z00_2799;
																								{	/* Ast/var.scm 170 */
																									BgL_feffectz00_bglt
																										BgL_new1107z00_2801;
																									BgL_new1107z00_2801 =
																										((BgL_feffectz00_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_feffectz00_bgl))));
																									{	/* Ast/var.scm 170 */
																										long BgL_arg2463z00_2802;

																										{	/* Ast/var.scm 170 */
																											long BgL_res2640z00_3157;

																											{	/* Ast/var.scm 170 */
																												obj_t BgL_classz00_3156;

																												BgL_classz00_3156 =
																													BGl_feffectz00zzast_varz00;
																												BgL_res2640z00_3157 =
																													BGL_CLASS_INDEX
																													(BgL_classz00_3156);
																											}
																											BgL_arg2463z00_2802 =
																												BgL_res2640z00_3157;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1107z00_2801),
																											BgL_arg2463z00_2802);
																									}
																									BgL_new1108z00_2799 =
																										BgL_new1107z00_2801;
																								}
																								((((BgL_feffectz00_bglt)
																											COBJECT
																											(BgL_new1108z00_2799))->
																										BgL_readz00) =
																									((obj_t) BNIL), BUNSPEC);
																								{
																									obj_t BgL_auxz00_4101;

																									{	/* Ast/private.scm 111 */
																										obj_t BgL_list2462z00_2800;

																										BgL_list2462z00_2800 =
																											MAKE_YOUNG_PAIR
																											(BgL_tidz00_2795, BNIL);
																										BgL_auxz00_4101 =
																											BgL_list2462z00_2800;
																									}
																									((((BgL_feffectz00_bglt)
																												COBJECT
																												(BgL_new1108z00_2799))->
																											BgL_writez00) =
																										((obj_t) BgL_auxz00_4101),
																										BUNSPEC);
																								}
																								BgL_auxz00_4094 =
																									((obj_t) BgL_new1108z00_2799);
																							}
																							((((BgL_externz00_bglt) COBJECT(
																											((BgL_externz00_bglt)
																												BgL_new1106z00_2798)))->
																									BgL_effectz00) =
																								((obj_t) BgL_auxz00_4094),
																								BUNSPEC);
																						}
																						((((BgL_privatez00_bglt) COBJECT(
																										((BgL_privatez00_bglt)
																											BgL_new1106z00_2798)))->
																								BgL_czd2formatzd2) =
																							((obj_t) BgL_czd2fmtzd2_1382),
																							BUNSPEC);
																						((((BgL_setfieldz00_bglt)
																									COBJECT
																									(BgL_new1106z00_2798))->
																								BgL_fnamez00) =
																							((obj_t)
																								BgL_fieldzd2namezd2_1381),
																							BUNSPEC);
																						((((BgL_setfieldz00_bglt)
																									COBJECT
																									(BgL_new1106z00_2798))->
																								BgL_ftypez00) =
																							((BgL_typez00_bglt)
																								BgL_ftypez00_2797), BUNSPEC);
																						((((BgL_setfieldz00_bglt)
																									COBJECT
																									(BgL_new1106z00_2798))->
																								BgL_otypez00) =
																							((BgL_typez00_bglt)
																								BgL_otypez00_2796), BUNSPEC);
																						BgL_auxz00_4059 =
																							BgL_new1106z00_2798;
																				}}
																				return ((obj_t) BgL_auxz00_4059);
																			}
																		}
																	else
																		{	/* Ast/private.scm 78 */
																			goto BgL_tagzd2141zd2_1432;
																		}
																}
															else
																{	/* Ast/private.scm 78 */
																	goto BgL_tagzd2141zd2_1432;
																}
														}
													else
														{	/* Ast/private.scm 78 */
															goto BgL_tagzd2141zd2_1432;
														}
												}
											else
												{	/* Ast/private.scm 78 */
													goto BgL_tagzd2141zd2_1432;
												}
										}
									else
										{	/* Ast/private.scm 78 */
											obj_t BgL_cdrzd22708zd2_1563;

											BgL_cdrzd22708zd2_1563 = CDR(BgL_sexpz00_6);
											{	/* Ast/private.scm 78 */
												obj_t BgL_cdrzd22711zd2_1564;

												BgL_cdrzd22711zd2_1564 =
													CDR(((obj_t) BgL_cdrzd22708zd2_1563));
												if (
													(CAR(
															((obj_t) BgL_cdrzd22708zd2_1563)) ==
														CNST_TABLE_REF(((long) 8))))
													{	/* Ast/private.scm 78 */
														if (PAIRP(BgL_cdrzd22711zd2_1564))
															{	/* Ast/private.scm 78 */
																if (NULLP(CDR(BgL_cdrzd22711zd2_1564)))
																	{	/* Ast/private.scm 78 */
																		obj_t BgL_arg1493z00_1570;

																		BgL_arg1493z00_1570 =
																			CAR(BgL_cdrzd22711zd2_1564);
																		{
																			BgL_newz00_bglt BgL_auxz00_4126;

																			BgL_typez00_1385 = BgL_arg1493z00_1570;
																			{	/* Ast/private.scm 114 */
																				BgL_newz00_bglt BgL_new1110z00_2810;

																				{	/* Ast/private.scm 115 */
																					BgL_newz00_bglt BgL_new1109z00_2811;

																					BgL_new1109z00_2811 =
																						((BgL_newz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_newz00_bgl))));
																					{	/* Ast/private.scm 115 */
																						long BgL_arg2473z00_2812;

																						{	/* Ast/private.scm 115 */
																							long BgL_res2642z00_3162;

																							BgL_res2642z00_3162 =
																								BGL_CLASS_INDEX
																								(BGl_newz00zzast_nodez00);
																							BgL_arg2473z00_2812 =
																								BgL_res2642z00_3162;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1109z00_2811),
																							BgL_arg2473z00_2812);
																					}
																					{	/* Ast/private.scm 115 */
																						BgL_objectz00_bglt BgL_tmpz00_4131;

																						BgL_tmpz00_4131 =
																							((BgL_objectz00_bglt)
																							BgL_new1109z00_2811);
																						BGL_OBJECT_WIDENING_SET
																							(BgL_tmpz00_4131, BFALSE);
																					}
																					((BgL_objectz00_bglt)
																						BgL_new1109z00_2811);
																					BgL_new1110z00_2810 =
																						BgL_new1109z00_2811;
																				}
																				((((BgL_nodez00_bglt) COBJECT(
																								((BgL_nodez00_bglt)
																									BgL_new1110z00_2810)))->
																						BgL_locz00) =
																					((obj_t) BgL_locz00_8), BUNSPEC);
																				((((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt)
																									BgL_new1110z00_2810)))->
																						BgL_typez00) =
																					((BgL_typez00_bglt)
																						BGl_usezd2typez12zc0zztype_envz00
																						(BgL_typez00_1385, BgL_locz00_8)),
																					BUNSPEC);
																				((((BgL_nodezf2effectzf2_bglt)
																							COBJECT((
																									(BgL_nodezf2effectzf2_bglt)
																									BgL_new1110z00_2810)))->
																						BgL_sidezd2effectzd2) =
																					((obj_t) BTRUE), BUNSPEC);
																				((((BgL_nodezf2effectzf2_bglt)
																							COBJECT((
																									(BgL_nodezf2effectzf2_bglt)
																									BgL_new1110z00_2810)))->
																						BgL_keyz00) =
																					((obj_t) BINT(((long) -1))), BUNSPEC);
																				((((BgL_externz00_bglt)
																							COBJECT(((BgL_externz00_bglt)
																									BgL_new1110z00_2810)))->
																						BgL_exprza2za2) =
																					((obj_t) BNIL), BUNSPEC);
																				((((BgL_externz00_bglt)
																							COBJECT(((BgL_externz00_bglt)
																									BgL_new1110z00_2810)))->
																						BgL_effectz00) =
																					((obj_t) BUNSPEC), BUNSPEC);
																				((((BgL_privatez00_bglt)
																							COBJECT(((BgL_privatez00_bglt)
																									BgL_new1110z00_2810)))->
																						BgL_czd2formatzd2) =
																					((obj_t)
																						BGl_string2800z00zzast_privatez00),
																					BUNSPEC);
																				((((BgL_newz00_bglt)
																							COBJECT(BgL_new1110z00_2810))->
																						BgL_argszd2typezd2) =
																					((obj_t) BNIL), BUNSPEC);
																				BgL_auxz00_4126 = BgL_new1110z00_2810;
																			}
																			return ((obj_t) BgL_auxz00_4126);
																		}
																	}
																else
																	{	/* Ast/private.scm 78 */
																		obj_t BgL_cdrzd22740zd2_1571;

																		BgL_cdrzd22740zd2_1571 =
																			CDR(((obj_t) BgL_cdrzd22708zd2_1563));
																		{	/* Ast/private.scm 78 */
																			obj_t BgL_cdrzd22746zd2_1572;

																			BgL_cdrzd22746zd2_1572 =
																				CDR(((obj_t) BgL_cdrzd22740zd2_1571));
																			if (PAIRP(BgL_cdrzd22746zd2_1572))
																				{	/* Ast/private.scm 78 */
																					obj_t BgL_carzd22751zd2_1574;

																					BgL_carzd22751zd2_1574 =
																						CAR(BgL_cdrzd22746zd2_1572);
																					if (PAIRP(BgL_carzd22751zd2_1574))
																						{	/* Ast/private.scm 78 */
																							obj_t BgL_cdrzd22755zd2_1576;

																							BgL_cdrzd22755zd2_1576 =
																								CDR(BgL_carzd22751zd2_1574);
																							if (
																								(CAR(BgL_carzd22751zd2_1574) ==
																									CNST_TABLE_REF(((long) 9))))
																								{	/* Ast/private.scm 78 */
																									if (PAIRP
																										(BgL_cdrzd22755zd2_1576))
																										{	/* Ast/private.scm 78 */
																											if (NULLP(CDR
																													(BgL_cdrzd22755zd2_1576)))
																												{	/* Ast/private.scm 78 */
																													obj_t
																														BgL_arg1521z00_1582;
																													obj_t
																														BgL_arg1528z00_1583;
																													obj_t
																														BgL_arg1536z00_1584;
																													BgL_arg1521z00_1582 =
																														CAR(((obj_t)
																															BgL_cdrzd22740zd2_1571));
																													BgL_arg1528z00_1583 =
																														CAR
																														(BgL_cdrzd22755zd2_1576);
																													BgL_arg1536z00_1584 =
																														CDR
																														(BgL_cdrzd22746zd2_1572);
																													{
																														BgL_newz00_bglt
																															BgL_auxz00_4176;
																														BgL_typez00_1387 =
																															BgL_arg1521z00_1582;
																														BgL_argszd2typezd2_1388
																															=
																															BgL_arg1528z00_1583;
																														BgL_restz00_1389 =
																															BgL_arg1536z00_1584;
																														if (NULLP
																															(BgL_restz00_1389))
																															{	/* Ast/private.scm 122 */
																																BgL_newz00_bglt
																																	BgL_new1112z00_2814;
																																{	/* Ast/private.scm 123 */
																																	BgL_newz00_bglt
																																		BgL_new1111z00_2828;
																																	BgL_new1111z00_2828
																																		=
																																		(
																																		(BgL_newz00_bglt)
																																		BOBJECT
																																		(GC_MALLOC
																																			(sizeof
																																				(struct
																																					BgL_newz00_bgl))));
																																	{	/* Ast/private.scm 123 */
																																		long
																																			BgL_arg2482z00_2829;
																																		{	/* Ast/private.scm 123 */
																																			long
																																				BgL_res2644z00_3168;
																																			BgL_res2644z00_3168
																																				=
																																				BGL_CLASS_INDEX
																																				(BGl_newz00zzast_nodez00);
																																			BgL_arg2482z00_2829
																																				=
																																				BgL_res2644z00_3168;
																																		}
																																		BGL_OBJECT_CLASS_NUM_SET
																																			(((BgL_objectz00_bglt) BgL_new1111z00_2828), BgL_arg2482z00_2829);
																																	}
																																	{	/* Ast/private.scm 123 */
																																		BgL_objectz00_bglt
																																			BgL_tmpz00_4183;
																																		BgL_tmpz00_4183
																																			=
																																			(
																																			(BgL_objectz00_bglt)
																																			BgL_new1111z00_2828);
																																		BGL_OBJECT_WIDENING_SET
																																			(BgL_tmpz00_4183,
																																			BFALSE);
																																	}
																																	((BgL_objectz00_bglt) BgL_new1111z00_2828);
																																	BgL_new1112z00_2814
																																		=
																																		BgL_new1111z00_2828;
																																}
																																((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1112z00_2814)))->BgL_locz00) = ((obj_t) BgL_locz00_8), BUNSPEC);
																																((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1112z00_2814)))->BgL_typez00) = ((BgL_typez00_bglt) BGl_usezd2typez12zc0zztype_envz00(BgL_typez00_1387, BgL_locz00_8)), BUNSPEC);
																																((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1112z00_2814)))->BgL_sidezd2effectzd2) = ((obj_t) BTRUE), BUNSPEC);
																																((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1112z00_2814)))->BgL_keyz00) = ((obj_t) BINT(((long) -1))), BUNSPEC);
																																((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1112z00_2814)))->BgL_exprza2za2) = ((obj_t) BNIL), BUNSPEC);
																																((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1112z00_2814)))->BgL_effectz00) = ((obj_t) BUNSPEC), BUNSPEC);
																																((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt) BgL_new1112z00_2814)))->BgL_czd2formatzd2) = ((obj_t) BGl_string2800z00zzast_privatez00), BUNSPEC);
																																{
																																	obj_t
																																		BgL_auxz00_4203;
																																	if (NULLP
																																		(BgL_argszd2typezd2_1388))
																																		{	/* Ast/private.scm 125 */
																																			BgL_auxz00_4203
																																				= BNIL;
																																		}
																																	else
																																		{	/* Ast/private.scm 125 */
																																			obj_t
																																				BgL_head1258z00_2817;
																																			{	/* Ast/private.scm 125 */
																																				obj_t
																																					BgL_res2646z00_3173;
																																				BgL_res2646z00_3173
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_head1258z00_2817
																																					=
																																					BgL_res2646z00_3173;
																																			}
																																			{
																																				obj_t
																																					BgL_l1256z00_2819;
																																				obj_t
																																					BgL_tail1259z00_2820;
																																				BgL_l1256z00_2819
																																					=
																																					BgL_argszd2typezd2_1388;
																																				BgL_tail1259z00_2820
																																					=
																																					BgL_head1258z00_2817;
																																			BgL_zc3z04anonymousza32476ze3z87_2821:
																																				if (NULLP(BgL_l1256z00_2819))
																																					{	/* Ast/private.scm 125 */
																																						BgL_auxz00_4203
																																							=
																																							CDR
																																							(BgL_head1258z00_2817);
																																					}
																																				else
																																					{	/* Ast/private.scm 125 */
																																						obj_t
																																							BgL_newtail1260z00_2823;
																																						{	/* Ast/private.scm 125 */
																																							BgL_typez00_bglt
																																								BgL_arg2481z00_2825;
																																							{	/* Ast/private.scm 125 */
																																								obj_t
																																									BgL_tz00_2826;
																																								BgL_tz00_2826
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_l1256z00_2819));
																																								BgL_arg2481z00_2825
																																									=
																																									BGl_usezd2typez12zc0zztype_envz00
																																									(BgL_tz00_2826,
																																									BgL_locz00_8);
																																							}
																																							{	/* Ast/private.scm 125 */
																																								obj_t
																																									BgL_res2648z00_3177;
																																								BgL_res2648z00_3177
																																									=
																																									MAKE_YOUNG_PAIR
																																									(
																																									((obj_t) BgL_arg2481z00_2825), BNIL);
																																								BgL_newtail1260z00_2823
																																									=
																																									BgL_res2648z00_3177;
																																							}
																																						}
																																						SET_CDR
																																							(BgL_tail1259z00_2820,
																																							BgL_newtail1260z00_2823);
																																						{	/* Ast/private.scm 125 */
																																							obj_t
																																								BgL_arg2479z00_2824;
																																							BgL_arg2479z00_2824
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_l1256z00_2819));
																																							{
																																								obj_t
																																									BgL_tail1259z00_4219;
																																								obj_t
																																									BgL_l1256z00_4218;
																																								BgL_l1256z00_4218
																																									=
																																									BgL_arg2479z00_2824;
																																								BgL_tail1259z00_4219
																																									=
																																									BgL_newtail1260z00_2823;
																																								BgL_tail1259z00_2820
																																									=
																																									BgL_tail1259z00_4219;
																																								BgL_l1256z00_2819
																																									=
																																									BgL_l1256z00_4218;
																																								goto
																																									BgL_zc3z04anonymousza32476ze3z87_2821;
																																							}
																																						}
																																					}
																																			}
																																		}
																																	((((BgL_newz00_bglt) COBJECT(BgL_new1112z00_2814))->BgL_argszd2typezd2) = ((obj_t) BgL_auxz00_4203), BUNSPEC);
																																}
																																BgL_auxz00_4176
																																	=
																																	BgL_new1112z00_2814;
																															}
																														else
																															{	/* Ast/private.scm 128 */
																																BgL_newz00_bglt
																																	BgL_new1114z00_2830;
																																{	/* Ast/private.scm 129 */
																																	BgL_newz00_bglt
																																		BgL_new1113z00_2845;
																																	BgL_new1113z00_2845
																																		=
																																		(
																																		(BgL_newz00_bglt)
																																		BOBJECT
																																		(GC_MALLOC
																																			(sizeof
																																				(struct
																																					BgL_newz00_bgl))));
																																	{	/* Ast/private.scm 129 */
																																		long
																																			BgL_arg2491z00_2846;
																																		{	/* Ast/private.scm 129 */
																																			long
																																				BgL_res2649z00_3181;
																																			BgL_res2649z00_3181
																																				=
																																				BGL_CLASS_INDEX
																																				(BGl_newz00zzast_nodez00);
																																			BgL_arg2491z00_2846
																																				=
																																				BgL_res2649z00_3181;
																																		}
																																		BGL_OBJECT_CLASS_NUM_SET
																																			(((BgL_objectz00_bglt) BgL_new1113z00_2845), BgL_arg2491z00_2846);
																																	}
																																	{	/* Ast/private.scm 129 */
																																		BgL_objectz00_bglt
																																			BgL_tmpz00_4225;
																																		BgL_tmpz00_4225
																																			=
																																			(
																																			(BgL_objectz00_bglt)
																																			BgL_new1113z00_2845);
																																		BGL_OBJECT_WIDENING_SET
																																			(BgL_tmpz00_4225,
																																			BFALSE);
																																	}
																																	((BgL_objectz00_bglt) BgL_new1113z00_2845);
																																	BgL_new1114z00_2830
																																		=
																																		BgL_new1113z00_2845;
																																}
																																((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1114z00_2830)))->BgL_locz00) = ((obj_t) BgL_locz00_8), BUNSPEC);
																																((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1114z00_2830)))->BgL_typez00) = ((BgL_typez00_bglt) BGl_usezd2typez12zc0zztype_envz00(BgL_typez00_1387, BgL_locz00_8)), BUNSPEC);
																																((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1114z00_2830)))->BgL_sidezd2effectzd2) = ((obj_t) BTRUE), BUNSPEC);
																																((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1114z00_2830)))->BgL_keyz00) = ((obj_t) BINT(((long) -1))), BUNSPEC);
																																((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1114z00_2830)))->BgL_exprza2za2) = ((obj_t) BGl_sexpza2zd2ze3nodez93zzast_sexpz00(BgL_restz00_1389, BgL_stackz00_7, BgL_locz00_8, CNST_TABLE_REF(((long) 3)))), BUNSPEC);
																																((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1114z00_2830)))->BgL_effectz00) = ((obj_t) BUNSPEC), BUNSPEC);
																																((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt) BgL_new1114z00_2830)))->BgL_czd2formatzd2) = ((obj_t) BGl_string2800z00zzast_privatez00), BUNSPEC);
																																{
																																	obj_t
																																		BgL_auxz00_4247;
																																	if (NULLP
																																		(BgL_argszd2typezd2_1388))
																																		{	/* Ast/private.scm 131 */
																																			BgL_auxz00_4247
																																				= BNIL;
																																		}
																																	else
																																		{	/* Ast/private.scm 131 */
																																			obj_t
																																				BgL_head1263z00_2834;
																																			{	/* Ast/private.scm 131 */
																																				obj_t
																																					BgL_res2652z00_3187;
																																				BgL_res2652z00_3187
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BNIL,
																																					BNIL);
																																				BgL_head1263z00_2834
																																					=
																																					BgL_res2652z00_3187;
																																			}
																																			{
																																				obj_t
																																					BgL_l1261z00_2836;
																																				obj_t
																																					BgL_tail1264z00_2837;
																																				BgL_l1261z00_2836
																																					=
																																					BgL_argszd2typezd2_1388;
																																				BgL_tail1264z00_2837
																																					=
																																					BgL_head1263z00_2834;
																																			BgL_zc3z04anonymousza32485ze3z87_2838:
																																				if (NULLP(BgL_l1261z00_2836))
																																					{	/* Ast/private.scm 131 */
																																						BgL_auxz00_4247
																																							=
																																							CDR
																																							(BgL_head1263z00_2834);
																																					}
																																				else
																																					{	/* Ast/private.scm 131 */
																																						obj_t
																																							BgL_newtail1265z00_2840;
																																						{	/* Ast/private.scm 131 */
																																							BgL_typez00_bglt
																																								BgL_arg2488z00_2842;
																																							{	/* Ast/private.scm 131 */
																																								obj_t
																																									BgL_tz00_2843;
																																								BgL_tz00_2843
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_l1261z00_2836));
																																								BgL_arg2488z00_2842
																																									=
																																									BGl_usezd2typez12zc0zztype_envz00
																																									(BgL_tz00_2843,
																																									BgL_locz00_8);
																																							}
																																							{	/* Ast/private.scm 131 */
																																								obj_t
																																									BgL_res2654z00_3191;
																																								BgL_res2654z00_3191
																																									=
																																									MAKE_YOUNG_PAIR
																																									(
																																									((obj_t) BgL_arg2488z00_2842), BNIL);
																																								BgL_newtail1265z00_2840
																																									=
																																									BgL_res2654z00_3191;
																																							}
																																						}
																																						SET_CDR
																																							(BgL_tail1264z00_2837,
																																							BgL_newtail1265z00_2840);
																																						{	/* Ast/private.scm 131 */
																																							obj_t
																																								BgL_arg2487z00_2841;
																																							BgL_arg2487z00_2841
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_l1261z00_2836));
																																							{
																																								obj_t
																																									BgL_tail1264z00_4263;
																																								obj_t
																																									BgL_l1261z00_4262;
																																								BgL_l1261z00_4262
																																									=
																																									BgL_arg2487z00_2841;
																																								BgL_tail1264z00_4263
																																									=
																																									BgL_newtail1265z00_2840;
																																								BgL_tail1264z00_2837
																																									=
																																									BgL_tail1264z00_4263;
																																								BgL_l1261z00_2836
																																									=
																																									BgL_l1261z00_4262;
																																								goto
																																									BgL_zc3z04anonymousza32485ze3z87_2838;
																																							}
																																						}
																																					}
																																			}
																																		}
																																	((((BgL_newz00_bglt) COBJECT(BgL_new1114z00_2830))->BgL_argszd2typezd2) = ((obj_t) BgL_auxz00_4247), BUNSPEC);
																																}
																																BgL_auxz00_4176
																																	=
																																	BgL_new1114z00_2830;
																															}
																														return
																															((obj_t)
																															BgL_auxz00_4176);
																													}
																												}
																											else
																												{	/* Ast/private.scm 78 */
																													goto
																														BgL_tagzd2141zd2_1432;
																												}
																										}
																									else
																										{	/* Ast/private.scm 78 */
																											goto
																												BgL_tagzd2141zd2_1432;
																										}
																								}
																							else
																								{	/* Ast/private.scm 78 */
																									goto BgL_tagzd2141zd2_1432;
																								}
																						}
																					else
																						{	/* Ast/private.scm 78 */
																							goto BgL_tagzd2141zd2_1432;
																						}
																				}
																			else
																				{	/* Ast/private.scm 78 */
																					goto BgL_tagzd2141zd2_1432;
																				}
																		}
																	}
															}
														else
															{	/* Ast/private.scm 78 */
																goto BgL_tagzd2141zd2_1432;
															}
													}
												else
													{	/* Ast/private.scm 78 */
														obj_t BgL_cdrzd27112zd2_1946;

														BgL_cdrzd27112zd2_1946 =
															CDR(((obj_t) BgL_cdrzd22708zd2_1563));
														if (
															(CAR(
																	((obj_t) BgL_cdrzd22708zd2_1563)) ==
																CNST_TABLE_REF(((long) 1))))
															{	/* Ast/private.scm 78 */
																if (PAIRP(BgL_cdrzd27112zd2_1946))
																	{	/* Ast/private.scm 78 */
																		obj_t BgL_cdrzd27116zd2_1950;

																		BgL_cdrzd27116zd2_1950 =
																			CDR(BgL_cdrzd27112zd2_1946);
																		if (PAIRP(BgL_cdrzd27116zd2_1950))
																			{	/* Ast/private.scm 78 */
																				if (NULLP(CDR(BgL_cdrzd27116zd2_1950)))
																					{	/* Ast/private.scm 78 */
																						obj_t BgL_arg1931z00_1954;
																						obj_t BgL_arg1932z00_1955;

																						BgL_arg1931z00_1954 =
																							CAR(BgL_cdrzd27112zd2_1946);
																						BgL_arg1932z00_1955 =
																							CAR(BgL_cdrzd27116zd2_1950);
																						{
																							BgL_castz00_bglt BgL_auxz00_4283;

																							BgL_typez00_1391 =
																								BgL_arg1931z00_1954;
																							BgL_expz00_1392 =
																								BgL_arg1932z00_1955;
																							{	/* Ast/private.scm 138 */
																								BgL_castz00_bglt
																									BgL_new1117z00_2847;
																								{	/* Ast/private.scm 139 */
																									BgL_castz00_bglt
																										BgL_new1116z00_2848;
																									BgL_new1116z00_2848 =
																										((BgL_castz00_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_castz00_bgl))));
																									{	/* Ast/private.scm 139 */
																										long BgL_arg2494z00_2849;

																										{	/* Ast/private.scm 139 */
																											long BgL_res2655z00_3195;

																											BgL_res2655z00_3195 =
																												BGL_CLASS_INDEX
																												(BGl_castz00zzast_nodez00);
																											BgL_arg2494z00_2849 =
																												BgL_res2655z00_3195;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1116z00_2848),
																											BgL_arg2494z00_2849);
																									}
																									{	/* Ast/private.scm 139 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_4288;
																										BgL_tmpz00_4288 =
																											((BgL_objectz00_bglt)
																											BgL_new1116z00_2848);
																										BGL_OBJECT_WIDENING_SET
																											(BgL_tmpz00_4288, BFALSE);
																									}
																									((BgL_objectz00_bglt)
																										BgL_new1116z00_2848);
																									BgL_new1117z00_2847 =
																										BgL_new1116z00_2848;
																								}
																								((((BgL_nodez00_bglt) COBJECT(
																												((BgL_nodez00_bglt)
																													BgL_new1117z00_2847)))->
																										BgL_locz00) =
																									((obj_t) BgL_locz00_8),
																									BUNSPEC);
																								((((BgL_nodez00_bglt)
																											COBJECT((
																													(BgL_nodez00_bglt)
																													BgL_new1117z00_2847)))->
																										BgL_typez00) =
																									((BgL_typez00_bglt)
																										BGl_usezd2typez12zc0zztype_envz00
																										(BgL_typez00_1391,
																											BgL_locz00_8)), BUNSPEC);
																								((((BgL_castz00_bglt)
																											COBJECT
																											(BgL_new1117z00_2847))->
																										BgL_argz00) =
																									((BgL_nodez00_bglt)
																										BGl_sexpzd2ze3nodez31zzast_sexpz00
																										(BgL_expz00_1392,
																											BgL_stackz00_7,
																											BgL_locz00_8,
																											BgL_sitez00_9)), BUNSPEC);
																								BgL_auxz00_4283 =
																									BgL_new1117z00_2847;
																							}
																							return ((obj_t) BgL_auxz00_4283);
																						}
																					}
																				else
																					{	/* Ast/private.scm 78 */
																						goto BgL_tagzd2141zd2_1432;
																					}
																			}
																		else
																			{	/* Ast/private.scm 78 */
																				goto BgL_tagzd2141zd2_1432;
																			}
																	}
																else
																	{	/* Ast/private.scm 78 */
																		goto BgL_tagzd2141zd2_1432;
																	}
															}
														else
															{	/* Ast/private.scm 78 */
																obj_t BgL_cdrzd27868zd2_1997;

																BgL_cdrzd27868zd2_1997 = CDR(BgL_sexpz00_6);
																{	/* Ast/private.scm 78 */
																	obj_t BgL_cdrzd27871zd2_1998;

																	BgL_cdrzd27871zd2_1998 =
																		CDR(((obj_t) BgL_cdrzd27868zd2_1997));
																	if (
																		(CAR(
																				((obj_t) BgL_cdrzd27868zd2_1997)) ==
																			CNST_TABLE_REF(((long) 10))))
																		{	/* Ast/private.scm 78 */
																			if (PAIRP(BgL_cdrzd27871zd2_1998))
																				{	/* Ast/private.scm 78 */
																					if (NULLP(CDR
																							(BgL_cdrzd27871zd2_1998)))
																						{	/* Ast/private.scm 78 */
																							obj_t BgL_arg1962z00_2004;

																							BgL_arg1962z00_2004 =
																								CAR(BgL_cdrzd27871zd2_1998);
																							{
																								BgL_castzd2nullzd2_bglt
																									BgL_auxz00_4314;
																								BgL_typez00_1394 =
																									BgL_arg1962z00_2004;
																								{	/* Ast/private.scm 143 */
																									BgL_castzd2nullzd2_bglt
																										BgL_new1119z00_2850;
																									{	/* Ast/private.scm 144 */
																										BgL_castzd2nullzd2_bglt
																											BgL_new1118z00_2851;
																										BgL_new1118z00_2851 =
																											((BgL_castzd2nullzd2_bglt)
																											BOBJECT(GC_MALLOC(sizeof
																													(struct
																														BgL_castzd2nullzd2_bgl))));
																										{	/* Ast/private.scm 144 */
																											long BgL_arg2496z00_2852;

																											{	/* Ast/private.scm 144 */
																												long
																													BgL_res2656z00_3200;
																												BgL_res2656z00_3200 =
																													BGL_CLASS_INDEX
																													(BGl_castzd2nullzd2zzast_nodez00);
																												BgL_arg2496z00_2852 =
																													BgL_res2656z00_3200;
																											}
																											BGL_OBJECT_CLASS_NUM_SET(
																												((BgL_objectz00_bglt)
																													BgL_new1118z00_2851),
																												BgL_arg2496z00_2852);
																										}
																										{	/* Ast/private.scm 144 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_4319;
																											BgL_tmpz00_4319 =
																												((BgL_objectz00_bglt)
																												BgL_new1118z00_2851);
																											BGL_OBJECT_WIDENING_SET
																												(BgL_tmpz00_4319,
																												BFALSE);
																										}
																										((BgL_objectz00_bglt)
																											BgL_new1118z00_2851);
																										BgL_new1119z00_2850 =
																											BgL_new1118z00_2851;
																									}
																									((((BgL_nodez00_bglt) COBJECT(
																													((BgL_nodez00_bglt)
																														BgL_new1119z00_2850)))->
																											BgL_locz00) =
																										((obj_t) BgL_locz00_8),
																										BUNSPEC);
																									((((BgL_nodez00_bglt)
																												COBJECT((
																														(BgL_nodez00_bglt)
																														BgL_new1119z00_2850)))->
																											BgL_typez00) =
																										((BgL_typez00_bglt)
																											BGl_usezd2typez12zc0zztype_envz00
																											(BgL_typez00_1394,
																												BgL_locz00_8)),
																										BUNSPEC);
																									((((BgL_nodezf2effectzf2_bglt)
																												COBJECT((
																														(BgL_nodezf2effectzf2_bglt)
																														BgL_new1119z00_2850)))->
																											BgL_sidezd2effectzd2) =
																										((obj_t) BUNSPEC), BUNSPEC);
																									((((BgL_nodezf2effectzf2_bglt)
																												COBJECT((
																														(BgL_nodezf2effectzf2_bglt)
																														BgL_new1119z00_2850)))->
																											BgL_keyz00) =
																										((obj_t) BINT(((long) -1))),
																										BUNSPEC);
																									((((BgL_externz00_bglt)
																												COBJECT((
																														(BgL_externz00_bglt)
																														BgL_new1119z00_2850)))->
																											BgL_exprza2za2) =
																										((obj_t) BNIL), BUNSPEC);
																									((((BgL_externz00_bglt)
																												COBJECT((
																														(BgL_externz00_bglt)
																														BgL_new1119z00_2850)))->
																											BgL_effectz00) =
																										((obj_t) BUNSPEC), BUNSPEC);
																									((((BgL_privatez00_bglt)
																												COBJECT((
																														(BgL_privatez00_bglt)
																														BgL_new1119z00_2850)))->
																											BgL_czd2formatzd2) =
																										((obj_t)
																											BGl_string2800z00zzast_privatez00),
																										BUNSPEC);
																									BgL_auxz00_4314 =
																										BgL_new1119z00_2850;
																								}
																								return
																									((obj_t) BgL_auxz00_4314);
																							}
																						}
																					else
																						{	/* Ast/private.scm 78 */
																							goto BgL_tagzd2141zd2_1432;
																						}
																				}
																			else
																				{	/* Ast/private.scm 78 */
																					goto BgL_tagzd2141zd2_1432;
																				}
																		}
																	else
																		{	/* Ast/private.scm 78 */
																			obj_t BgL_carzd29148zd2_2099;
																			obj_t BgL_cdrzd29149zd2_2100;

																			BgL_carzd29148zd2_2099 =
																				CAR(((obj_t) BgL_cdrzd27868zd2_1997));
																			BgL_cdrzd29149zd2_2100 =
																				CDR(((obj_t) BgL_cdrzd27868zd2_1997));
																			{

																				if (
																					(BgL_carzd29148zd2_2099 ==
																						CNST_TABLE_REF(((long) 16))))
																					{	/* Ast/private.scm 78 */
																					BgL_kapzd29150zd2_2101:
																						if (PAIRP(BgL_cdrzd29149zd2_2100))
																							{	/* Ast/private.scm 78 */
																								obj_t BgL_cdrzd29154zd2_2458;

																								BgL_cdrzd29154zd2_2458 =
																									CDR(BgL_cdrzd29149zd2_2100);
																								if (PAIRP
																									(BgL_cdrzd29154zd2_2458))
																									{	/* Ast/private.scm 78 */
																										if (NULLP(CDR
																												(BgL_cdrzd29154zd2_2458)))
																											{	/* Ast/private.scm 78 */
																												obj_t
																													BgL_arg2245z00_2462;
																												obj_t
																													BgL_arg2246z00_2463;
																												BgL_arg2245z00_2462 =
																													CAR
																													(BgL_cdrzd29149zd2_2100);
																												BgL_arg2246z00_2463 =
																													CAR
																													(BgL_cdrzd29154zd2_2458);
																												{
																													BgL_instanceofz00_bglt
																														BgL_auxz00_4357;
																													BgL_typez00_1396 =
																														BgL_arg2245z00_2462;
																													BgL_expz00_1397 =
																														BgL_arg2246z00_2463;
																													{	/* Ast/private.scm 149 */
																														BgL_instanceofz00_bglt
																															BgL_new1121z00_2853;
																														{	/* Ast/private.scm 150 */
																															BgL_instanceofz00_bglt
																																BgL_new1120z00_2859;
																															BgL_new1120z00_2859
																																=
																																(
																																(BgL_instanceofz00_bglt)
																																BOBJECT
																																(GC_MALLOC
																																	(sizeof(struct
																																			BgL_instanceofz00_bgl))));
																															{	/* Ast/private.scm 150 */
																																long
																																	BgL_arg2500z00_2860;
																																{	/* Ast/private.scm 150 */
																																	long
																																		BgL_res2657z00_3205;
																																	BgL_res2657z00_3205
																																		=
																																		BGL_CLASS_INDEX
																																		(BGl_instanceofz00zzast_nodez00);
																																	BgL_arg2500z00_2860
																																		=
																																		BgL_res2657z00_3205;
																																}
																																BGL_OBJECT_CLASS_NUM_SET
																																	(((BgL_objectz00_bglt) BgL_new1120z00_2859), BgL_arg2500z00_2860);
																															}
																															{	/* Ast/private.scm 150 */
																																BgL_objectz00_bglt
																																	BgL_tmpz00_4362;
																																BgL_tmpz00_4362
																																	=
																																	(
																																	(BgL_objectz00_bglt)
																																	BgL_new1120z00_2859);
																																BGL_OBJECT_WIDENING_SET
																																	(BgL_tmpz00_4362,
																																	BFALSE);
																															}
																															((BgL_objectz00_bglt) BgL_new1120z00_2859);
																															BgL_new1121z00_2853
																																=
																																BgL_new1120z00_2859;
																														}
																														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1121z00_2853)))->BgL_locz00) = ((obj_t) BgL_locz00_8), BUNSPEC);
																														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1121z00_2853)))->BgL_typez00) = ((BgL_typez00_bglt) ((BgL_typez00_bglt) BGl_za2boolza2z00zztype_cachez00)), BUNSPEC);
																														((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1121z00_2853)))->BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
																														((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1121z00_2853)))->BgL_keyz00) = ((obj_t) BINT(((long) -1))), BUNSPEC);
																														{
																															obj_t
																																BgL_auxz00_4376;
																															{	/* Ast/private.scm 153 */
																																BgL_nodez00_bglt
																																	BgL_arg2497z00_2854;
																																BgL_arg2497z00_2854
																																	=
																																	BGl_sexpzd2ze3nodez31zzast_sexpz00
																																	(BgL_expz00_1397,
																																	BgL_stackz00_7,
																																	BgL_locz00_8,
																																	BgL_sitez00_9);
																																{	/* Ast/private.scm 153 */
																																	obj_t
																																		BgL_list2498z00_2855;
																																	BgL_list2498z00_2855
																																		=
																																		MAKE_YOUNG_PAIR
																																		(((obj_t)
																																			BgL_arg2497z00_2854),
																																		BNIL);
																																	BgL_auxz00_4376
																																		=
																																		BgL_list2498z00_2855;
																															}}
																															((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1121z00_2853)))->BgL_exprza2za2) = ((obj_t) BgL_auxz00_4376), BUNSPEC);
																														}
																														{
																															obj_t
																																BgL_auxz00_4382;
																															{	/* Ast/private.scm 154 */
																																BgL_feffectz00_bglt
																																	BgL_new1123z00_2856;
																																{	/* Ast/var.scm 170 */
																																	BgL_feffectz00_bglt
																																		BgL_new1122z00_2857;
																																	BgL_new1122z00_2857
																																		=
																																		(
																																		(BgL_feffectz00_bglt)
																																		BOBJECT
																																		(GC_MALLOC
																																			(sizeof
																																				(struct
																																					BgL_feffectz00_bgl))));
																																	{	/* Ast/var.scm 170 */
																																		long
																																			BgL_arg2499z00_2858;
																																		{	/* Ast/var.scm 170 */
																																			long
																																				BgL_res2659z00_3211;
																																			{	/* Ast/var.scm 170 */
																																				obj_t
																																					BgL_classz00_3210;
																																				BgL_classz00_3210
																																					=
																																					BGl_feffectz00zzast_varz00;
																																				BgL_res2659z00_3211
																																					=
																																					BGL_CLASS_INDEX
																																					(BgL_classz00_3210);
																																			}
																																			BgL_arg2499z00_2858
																																				=
																																				BgL_res2659z00_3211;
																																		}
																																		BGL_OBJECT_CLASS_NUM_SET
																																			(((BgL_objectz00_bglt) BgL_new1122z00_2857), BgL_arg2499z00_2858);
																																	}
																																	BgL_new1123z00_2856
																																		=
																																		BgL_new1122z00_2857;
																																}
																																((((BgL_feffectz00_bglt) COBJECT(BgL_new1123z00_2856))->BgL_readz00) = ((obj_t) BNIL), BUNSPEC);
																																((((BgL_feffectz00_bglt) COBJECT(BgL_new1123z00_2856))->BgL_writez00) = ((obj_t) BNIL), BUNSPEC);
																																BgL_auxz00_4382
																																	=
																																	((obj_t)
																																	BgL_new1123z00_2856);
																															}
																															((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1121z00_2853)))->BgL_effectz00) = ((obj_t) BgL_auxz00_4382), BUNSPEC);
																														}
																														((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt) BgL_new1121z00_2853)))->BgL_czd2formatzd2) = ((obj_t) BGl_string2800z00zzast_privatez00), BUNSPEC);
																														((((BgL_instanceofz00_bglt) COBJECT(BgL_new1121z00_2853))->BgL_classz00) = ((BgL_typez00_bglt) BGl_usezd2typez12zc0zztype_envz00(BgL_typez00_1396, BgL_locz00_8)), BUNSPEC);
																														BgL_auxz00_4357 =
																															BgL_new1121z00_2853;
																													}
																													return
																														((obj_t)
																														BgL_auxz00_4357);
																												}
																											}
																										else
																											{	/* Ast/private.scm 78 */
																												obj_t
																													BgL_cdrzd29180zd2_2464;
																												BgL_cdrzd29180zd2_2464 =
																													CDR(BgL_sexpz00_6);
																												{	/* Ast/private.scm 78 */
																													obj_t
																														BgL_cdrzd29189zd2_2465;
																													BgL_cdrzd29189zd2_2465
																														=
																														CDR(((obj_t)
																															BgL_cdrzd29180zd2_2464));
																													if ((CAR(((obj_t)
																																	BgL_cdrzd29180zd2_2464))
																															==
																															CNST_TABLE_REF((
																																	(long) 11))))
																														{	/* Ast/private.scm 78 */
																															obj_t
																																BgL_cdrzd29198zd2_2468;
																															BgL_cdrzd29198zd2_2468
																																=
																																CDR(((obj_t)
																																	BgL_cdrzd29189zd2_2465));
																															{	/* Ast/private.scm 78 */
																																obj_t
																																	BgL_cdrzd29207zd2_2469;
																																BgL_cdrzd29207zd2_2469
																																	=
																																	CDR(((obj_t)
																																		BgL_cdrzd29198zd2_2468));
																																if (PAIRP
																																	(BgL_cdrzd29207zd2_2469))
																																	{	/* Ast/private.scm 78 */
																																		obj_t
																																			BgL_cdrzd29214zd2_2471;
																																		BgL_cdrzd29214zd2_2471
																																			=
																																			CDR
																																			(BgL_cdrzd29207zd2_2469);
																																		if (PAIRP
																																			(BgL_cdrzd29214zd2_2471))
																																			{	/* Ast/private.scm 78 */
																																				obj_t
																																					BgL_carzd29218zd2_2473;
																																				obj_t
																																					BgL_cdrzd29219zd2_2474;
																																				BgL_carzd29218zd2_2473
																																					=
																																					CAR
																																					(BgL_cdrzd29214zd2_2471);
																																				BgL_cdrzd29219zd2_2474
																																					=
																																					CDR
																																					(BgL_cdrzd29214zd2_2471);
																																				if (STRINGP(BgL_carzd29218zd2_2473))
																																					{	/* Ast/private.scm 78 */
																																						if (PAIRP(BgL_cdrzd29219zd2_2474))
																																							{	/* Ast/private.scm 78 */
																																								if (NULLP(CDR(BgL_cdrzd29219zd2_2474)))
																																									{	/* Ast/private.scm 78 */
																																										obj_t
																																											BgL_arg2256z00_2479;
																																										obj_t
																																											BgL_arg2257z00_2480;
																																										obj_t
																																											BgL_arg2258z00_2481;
																																										obj_t
																																											BgL_arg2259z00_2482;
																																										BgL_arg2256z00_2479
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd29189zd2_2465));
																																										BgL_arg2257z00_2480
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd29198zd2_2468));
																																										BgL_arg2258z00_2481
																																											=
																																											CAR
																																											(BgL_cdrzd29207zd2_2469);
																																										BgL_arg2259z00_2482
																																											=
																																											CAR
																																											(BgL_cdrzd29219zd2_2474);
																																										{
																																											BgL_vlengthz00_bglt
																																												BgL_auxz00_4429;
																																											BgL_vtypez00_1399
																																												=
																																												BgL_arg2256z00_2479;
																																											BgL_ftypez00_1400
																																												=
																																												BgL_arg2257z00_2480;
																																											BgL_otypez00_1401
																																												=
																																												BgL_arg2258z00_2481;
																																											BgL_czd2fmtzd2_1402
																																												=
																																												BgL_carzd29218zd2_2473;
																																											BgL_expz00_1403
																																												=
																																												BgL_arg2259z00_2482;
																																										BgL_tagzd2135zd2_1404:
																																											{	/* Ast/private.scm 157 */
																																												BgL_typez00_bglt
																																													BgL_vtypez00_2861;
																																												BgL_typez00_bglt
																																													BgL_otypez00_2862;
																																												BgL_typez00_bglt
																																													BgL_ftypez00_2863;
																																												BgL_vtypez00_2861
																																													=
																																													BGl_usezd2typez12zc0zztype_envz00
																																													(BgL_vtypez00_1399,
																																													BgL_locz00_8);
																																												BgL_otypez00_2862
																																													=
																																													BGl_usezd2typez12zc0zztype_envz00
																																													(BgL_otypez00_1401,
																																													BgL_locz00_8);
																																												BgL_ftypez00_2863
																																													=
																																													BGl_usezd2typez12zc0zztype_envz00
																																													(BgL_ftypez00_1400,
																																													BgL_locz00_8);
																																												{	/* Ast/private.scm 160 */
																																													BgL_vlengthz00_bglt
																																														BgL_new1126z00_2864;
																																													{	/* Ast/private.scm 161 */
																																														BgL_vlengthz00_bglt
																																															BgL_new1125z00_2870;
																																														BgL_new1125z00_2870
																																															=
																																															(
																																															(BgL_vlengthz00_bglt)
																																															BOBJECT
																																															(GC_MALLOC
																																																(sizeof
																																																	(struct
																																																		BgL_vlengthz00_bgl))));
																																														{	/* Ast/private.scm 161 */
																																															long
																																																BgL_arg2504z00_2871;
																																															{	/* Ast/private.scm 161 */
																																																long
																																																	BgL_res2660z00_3215;
																																																BgL_res2660z00_3215
																																																	=
																																																	BGL_CLASS_INDEX
																																																	(BGl_vlengthz00zzast_nodez00);
																																																BgL_arg2504z00_2871
																																																	=
																																																	BgL_res2660z00_3215;
																																															}
																																															BGL_OBJECT_CLASS_NUM_SET
																																																(
																																																((BgL_objectz00_bglt) BgL_new1125z00_2870), BgL_arg2504z00_2871);
																																														}
																																														{	/* Ast/private.scm 161 */
																																															BgL_objectz00_bglt
																																																BgL_tmpz00_4437;
																																															BgL_tmpz00_4437
																																																=
																																																(
																																																(BgL_objectz00_bglt)
																																																BgL_new1125z00_2870);
																																															BGL_OBJECT_WIDENING_SET
																																																(BgL_tmpz00_4437,
																																																BFALSE);
																																														}
																																														((BgL_objectz00_bglt) BgL_new1125z00_2870);
																																														BgL_new1126z00_2864
																																															=
																																															BgL_new1125z00_2870;
																																													}
																																													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1126z00_2864)))->BgL_locz00) = ((obj_t) BgL_locz00_8), BUNSPEC);
																																													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1126z00_2864)))->BgL_typez00) = ((BgL_typez00_bglt) BgL_otypez00_2862), BUNSPEC);
																																													((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1126z00_2864)))->BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
																																													((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1126z00_2864)))->BgL_keyz00) = ((obj_t) BINT(((long) -1))), BUNSPEC);
																																													{
																																														obj_t
																																															BgL_auxz00_4450;
																																														{	/* Ast/private.scm 166 */
																																															BgL_nodez00_bglt
																																																BgL_arg2501z00_2865;
																																															BgL_arg2501z00_2865
																																																=
																																																BGl_sexpzd2ze3nodez31zzast_sexpz00
																																																(BgL_expz00_1403,
																																																BgL_stackz00_7,
																																																BgL_locz00_8,
																																																CNST_TABLE_REF
																																																(((long) 3)));
																																															{	/* Ast/private.scm 166 */
																																																obj_t
																																																	BgL_list2502z00_2866;
																																																BgL_list2502z00_2866
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(
																																																	((obj_t) BgL_arg2501z00_2865), BNIL);
																																																BgL_auxz00_4450
																																																	=
																																																	BgL_list2502z00_2866;
																																														}}
																																														((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1126z00_2864)))->BgL_exprza2za2) = ((obj_t) BgL_auxz00_4450), BUNSPEC);
																																													}
																																													{
																																														obj_t
																																															BgL_auxz00_4457;
																																														{	/* Ast/private.scm 167 */
																																															BgL_feffectz00_bglt
																																																BgL_new1130z00_2867;
																																															{	/* Ast/var.scm 170 */
																																																BgL_feffectz00_bglt
																																																	BgL_new1128z00_2868;
																																																BgL_new1128z00_2868
																																																	=
																																																	(
																																																	(BgL_feffectz00_bglt)
																																																	BOBJECT
																																																	(GC_MALLOC
																																																		(sizeof
																																																			(struct
																																																				BgL_feffectz00_bgl))));
																																																{	/* Ast/var.scm 170 */
																																																	long
																																																		BgL_arg2503z00_2869;
																																																	{	/* Ast/var.scm 170 */
																																																		long
																																																			BgL_res2662z00_3221;
																																																		{	/* Ast/var.scm 170 */
																																																			obj_t
																																																				BgL_classz00_3220;
																																																			BgL_classz00_3220
																																																				=
																																																				BGl_feffectz00zzast_varz00;
																																																			BgL_res2662z00_3221
																																																				=
																																																				BGL_CLASS_INDEX
																																																				(BgL_classz00_3220);
																																																		}
																																																		BgL_arg2503z00_2869
																																																			=
																																																			BgL_res2662z00_3221;
																																																	}
																																																	BGL_OBJECT_CLASS_NUM_SET
																																																		(
																																																		((BgL_objectz00_bglt) BgL_new1128z00_2868), BgL_arg2503z00_2869);
																																																}
																																																BgL_new1130z00_2867
																																																	=
																																																	BgL_new1128z00_2868;
																																															}
																																															((((BgL_feffectz00_bglt) COBJECT(BgL_new1130z00_2867))->BgL_readz00) = ((obj_t) BNIL), BUNSPEC);
																																															((((BgL_feffectz00_bglt) COBJECT(BgL_new1130z00_2867))->BgL_writez00) = ((obj_t) BNIL), BUNSPEC);
																																															BgL_auxz00_4457
																																																=
																																																(
																																																(obj_t)
																																																BgL_new1130z00_2867);
																																														}
																																														((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1126z00_2864)))->BgL_effectz00) = ((obj_t) BgL_auxz00_4457), BUNSPEC);
																																													}
																																													((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt) BgL_new1126z00_2864)))->BgL_czd2formatzd2) = ((obj_t) BgL_czd2fmtzd2_1402), BUNSPEC);
																																													((((BgL_vlengthz00_bglt) COBJECT(BgL_new1126z00_2864))->BgL_vtypez00) = ((BgL_typez00_bglt) BgL_vtypez00_2861), BUNSPEC);
																																													((((BgL_vlengthz00_bglt) COBJECT(BgL_new1126z00_2864))->BgL_ftypez00) = ((obj_t) ((obj_t) BgL_ftypez00_2863)), BUNSPEC);
																																													BgL_auxz00_4429
																																														=
																																														BgL_new1126z00_2864;
																																											}}
																																											return
																																												(
																																												(obj_t)
																																												BgL_auxz00_4429);
																																										}
																																									}
																																								else
																																									{	/* Ast/private.scm 78 */
																																										goto
																																											BgL_tagzd2141zd2_1432;
																																									}
																																							}
																																						else
																																							{	/* Ast/private.scm 78 */
																																								goto
																																									BgL_tagzd2141zd2_1432;
																																							}
																																					}
																																				else
																																					{	/* Ast/private.scm 78 */
																																						goto
																																							BgL_tagzd2141zd2_1432;
																																					}
																																			}
																																		else
																																			{	/* Ast/private.scm 78 */
																																				goto
																																					BgL_tagzd2141zd2_1432;
																																			}
																																	}
																																else
																																	{	/* Ast/private.scm 78 */
																																		goto
																																			BgL_tagzd2141zd2_1432;
																																	}
																															}
																														}
																													else
																														{	/* Ast/private.scm 78 */
																															obj_t
																																BgL_carzd210351zd2_2593;
																															obj_t
																																BgL_cdrzd210352zd2_2594;
																															BgL_carzd210351zd2_2593
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd29180zd2_2464));
																															BgL_cdrzd210352zd2_2594
																																=
																																CDR(((obj_t)
																																	BgL_cdrzd29180zd2_2464));
																															{

																																if (
																																	(BgL_carzd210351zd2_2593
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				15))))
																																	{	/* Ast/private.scm 78 */
																																	BgL_kapzd210353zd2_2595:
																																		{	/* Ast/private.scm 78 */
																																			obj_t
																																				BgL_cdrzd210362zd2_2688;
																																			BgL_cdrzd210362zd2_2688
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_cdrzd210352zd2_2594));
																																			{	/* Ast/private.scm 78 */
																																				obj_t
																																					BgL_cdrzd210371zd2_2689;
																																				BgL_cdrzd210371zd2_2689
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_cdrzd210362zd2_2688));
																																				if (PAIRP(BgL_cdrzd210371zd2_2689))
																																					{	/* Ast/private.scm 78 */
																																						obj_t
																																							BgL_cdrzd210378zd2_2691;
																																						BgL_cdrzd210378zd2_2691
																																							=
																																							CDR
																																							(BgL_cdrzd210371zd2_2689);
																																						if (PAIRP(BgL_cdrzd210378zd2_2691))
																																							{	/* Ast/private.scm 78 */
																																								obj_t
																																									BgL_carzd210382zd2_2693;
																																								BgL_carzd210382zd2_2693
																																									=
																																									CAR
																																									(BgL_cdrzd210378zd2_2691);
																																								if (STRINGP(BgL_carzd210382zd2_2693))
																																									{	/* Ast/private.scm 78 */
																																										obj_t
																																											BgL_arg2385z00_2695;
																																										obj_t
																																											BgL_arg2388z00_2696;
																																										obj_t
																																											BgL_arg2389z00_2697;
																																										obj_t
																																											BgL_arg2390z00_2698;
																																										BgL_arg2385z00_2695
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd210352zd2_2594));
																																										BgL_arg2388z00_2696
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_cdrzd210362zd2_2688));
																																										BgL_arg2389z00_2697
																																											=
																																											CAR
																																											(BgL_cdrzd210371zd2_2689);
																																										BgL_arg2390z00_2698
																																											=
																																											CDR
																																											(BgL_cdrzd210378zd2_2691);
																																										{
																																											BgL_vrefz00_bglt
																																												BgL_auxz00_4498;
																																											BgL_vtypez00_1405
																																												=
																																												BgL_arg2385z00_2695;
																																											BgL_ftypez00_1406
																																												=
																																												BgL_arg2388z00_2696;
																																											BgL_otypez00_1407
																																												=
																																												BgL_arg2389z00_2697;
																																											BgL_czd2fmtzd2_1408
																																												=
																																												BgL_carzd210382zd2_2693;
																																											BgL_restz00_1409
																																												=
																																												BgL_arg2390z00_2698;
																																										BgL_tagzd2136zd2_1410:
																																											{	/* Ast/private.scm 169 */
																																												BgL_typez00_bglt
																																													BgL_ftypez00_2872;
																																												BgL_typez00_bglt
																																													BgL_vtypez00_2873;
																																												BgL_typez00_bglt
																																													BgL_otypez00_2874;
																																												BgL_ftypez00_2872
																																													=
																																													BGl_usezd2typez12zc0zztype_envz00
																																													(BgL_ftypez00_1406,
																																													BgL_locz00_8);
																																												BgL_vtypez00_2873
																																													=
																																													BGl_usezd2typez12zc0zztype_envz00
																																													(BgL_vtypez00_1405,
																																													BgL_locz00_8);
																																												BgL_otypez00_2874
																																													=
																																													BGl_usezd2typez12zc0zztype_envz00
																																													(BgL_otypez00_1407,
																																													BgL_locz00_8);
																																												{	/* Ast/private.scm 172 */
																																													BgL_vrefz00_bglt
																																														BgL_new1133z00_2875;
																																													{	/* Ast/private.scm 173 */
																																														BgL_vrefz00_bglt
																																															BgL_new1131z00_2882;
																																														BgL_new1131z00_2882
																																															=
																																															(
																																															(BgL_vrefz00_bglt)
																																															BOBJECT
																																															(GC_MALLOC
																																																(sizeof
																																																	(struct
																																																		BgL_vrefz00_bgl))));
																																														{	/* Ast/private.scm 173 */
																																															long
																																																BgL_arg2515z00_2883;
																																															{	/* Ast/private.scm 173 */
																																																long
																																																	BgL_res2663z00_3225;
																																																BgL_res2663z00_3225
																																																	=
																																																	BGL_CLASS_INDEX
																																																	(BGl_vrefz00zzast_nodez00);
																																																BgL_arg2515z00_2883
																																																	=
																																																	BgL_res2663z00_3225;
																																															}
																																															BGL_OBJECT_CLASS_NUM_SET
																																																(
																																																((BgL_objectz00_bglt) BgL_new1131z00_2882), BgL_arg2515z00_2883);
																																														}
																																														{	/* Ast/private.scm 173 */
																																															BgL_objectz00_bglt
																																																BgL_tmpz00_4506;
																																															BgL_tmpz00_4506
																																																=
																																																(
																																																(BgL_objectz00_bglt)
																																																BgL_new1131z00_2882);
																																															BGL_OBJECT_WIDENING_SET
																																																(BgL_tmpz00_4506,
																																																BFALSE);
																																														}
																																														((BgL_objectz00_bglt) BgL_new1131z00_2882);
																																														BgL_new1133z00_2875
																																															=
																																															BgL_new1131z00_2882;
																																													}
																																													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1133z00_2875)))->BgL_locz00) = ((obj_t) BgL_locz00_8), BUNSPEC);
																																													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1133z00_2875)))->BgL_typez00) = ((BgL_typez00_bglt) BgL_ftypez00_2872), BUNSPEC);
																																													((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1133z00_2875)))->BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
																																													((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1133z00_2875)))->BgL_keyz00) = ((obj_t) BINT(((long) -1))), BUNSPEC);
																																													((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1133z00_2875)))->BgL_exprza2za2) = ((obj_t) BGl_sexpza2zd2ze3nodez93zzast_sexpz00(BgL_restz00_1409, BgL_stackz00_7, BgL_locz00_8, CNST_TABLE_REF(((long) 3)))), BUNSPEC);
																																													{
																																														obj_t
																																															BgL_auxz00_4523;
																																														{	/* Ast/private.scm 181 */
																																															BgL_feffectz00_bglt
																																																BgL_new1135z00_2876;
																																															{	/* Ast/private.scm 182 */
																																																BgL_feffectz00_bglt
																																																	BgL_new1134z00_2879;
																																																BgL_new1134z00_2879
																																																	=
																																																	(
																																																	(BgL_feffectz00_bglt)
																																																	BOBJECT
																																																	(GC_MALLOC
																																																		(sizeof
																																																			(struct
																																																				BgL_feffectz00_bgl))));
																																																{	/* Ast/private.scm 182 */
																																																	long
																																																		BgL_arg2508z00_2880;
																																																	{	/* Ast/private.scm 182 */
																																																		long
																																																			BgL_res2664z00_3230;
																																																		{	/* Ast/private.scm 182 */
																																																			obj_t
																																																				BgL_classz00_3229;
																																																			BgL_classz00_3229
																																																				=
																																																				BGl_feffectz00zzast_varz00;
																																																			BgL_res2664z00_3230
																																																				=
																																																				BGL_CLASS_INDEX
																																																				(BgL_classz00_3229);
																																																		}
																																																		BgL_arg2508z00_2880
																																																			=
																																																			BgL_res2664z00_3230;
																																																	}
																																																	BGL_OBJECT_CLASS_NUM_SET
																																																		(
																																																		((BgL_objectz00_bglt) BgL_new1134z00_2879), BgL_arg2508z00_2880);
																																																}
																																																BgL_new1135z00_2876
																																																	=
																																																	BgL_new1134z00_2879;
																																															}
																																															{
																																																obj_t
																																																	BgL_auxz00_4529;
																																																{	/* Ast/private.scm 182 */
																																																	obj_t
																																																		BgL_arg2506z00_2877;
																																																	BgL_arg2506z00_2877
																																																		=
																																																		(
																																																		((BgL_typez00_bglt) COBJECT(BgL_ftypez00_2872))->BgL_idz00);
																																																	{	/* Ast/private.scm 182 */
																																																		obj_t
																																																			BgL_list2507z00_2878;
																																																		BgL_list2507z00_2878
																																																			=
																																																			MAKE_YOUNG_PAIR
																																																			(BgL_arg2506z00_2877,
																																																			BNIL);
																																																		BgL_auxz00_4529
																																																			=
																																																			BgL_list2507z00_2878;
																																																}}
																																																((((BgL_feffectz00_bglt) COBJECT(BgL_new1135z00_2876))->BgL_readz00) = ((obj_t) BgL_auxz00_4529), BUNSPEC);
																																															}
																																															((((BgL_feffectz00_bglt) COBJECT(BgL_new1135z00_2876))->BgL_writez00) = ((obj_t) BNIL), BUNSPEC);
																																															BgL_auxz00_4523
																																																=
																																																(
																																																(obj_t)
																																																BgL_new1135z00_2876);
																																														}
																																														((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1133z00_2875)))->BgL_effectz00) = ((obj_t) BgL_auxz00_4523), BUNSPEC);
																																													}
																																													((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt) BgL_new1133z00_2875)))->BgL_czd2formatzd2) = ((obj_t) BgL_czd2fmtzd2_1408), BUNSPEC);
																																													((((BgL_vrefz00_bglt) COBJECT(BgL_new1133z00_2875))->BgL_ftypez00) = ((BgL_typez00_bglt) BgL_ftypez00_2872), BUNSPEC);
																																													((((BgL_vrefz00_bglt) COBJECT(BgL_new1133z00_2875))->BgL_otypez00) = ((BgL_typez00_bglt) BgL_otypez00_2874), BUNSPEC);
																																													((((BgL_vrefz00_bglt) COBJECT(BgL_new1133z00_2875))->BgL_vtypez00) = ((BgL_typez00_bglt) BgL_vtypez00_2873), BUNSPEC);
																																													{
																																														bool_t
																																															BgL_auxz00_4541;
																																														{	/* Ast/private.scm 180 */
																																															obj_t
																																																BgL_tmpz00_4542;
																																															{	/* Ast/private.scm 180 */
																																																obj_t
																																																	BgL_pairz00_3238;
																																																BgL_pairz00_3238
																																																	=
																																																	CDR
																																																	(BgL_sexpz00_6);
																																																BgL_tmpz00_4542
																																																	=
																																																	CAR
																																																	(BgL_pairz00_3238);
																																															}
																																															BgL_auxz00_4541
																																																=
																																																(BgL_tmpz00_4542
																																																==
																																																CNST_TABLE_REF
																																																(((long) 4)));
																																														}
																																														((((BgL_vrefz00_bglt) COBJECT(BgL_new1133z00_2875))->BgL_unsafez00) = ((bool_t) BgL_auxz00_4541), BUNSPEC);
																																													}
																																													BgL_auxz00_4498
																																														=
																																														BgL_new1133z00_2875;
																																											}}
																																											return
																																												(
																																												(obj_t)
																																												BgL_auxz00_4498);
																																										}
																																									}
																																								else
																																									{	/* Ast/private.scm 78 */
																																										obj_t
																																											BgL_cdrzd210407zd2_2699;
																																										BgL_cdrzd210407zd2_2699
																																											=
																																											CDR
																																											(BgL_sexpz00_6);
																																										{	/* Ast/private.scm 78 */
																																											obj_t
																																												BgL_carzd210414zd2_2700;
																																											obj_t
																																												BgL_cdrzd210415zd2_2701;
																																											BgL_carzd210414zd2_2700
																																												=
																																												CAR
																																												(
																																												((obj_t) BgL_cdrzd210407zd2_2699));
																																											BgL_cdrzd210415zd2_2701
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd210407zd2_2699));
																																											{

																																												if ((BgL_carzd210414zd2_2700 == CNST_TABLE_REF(((long) 13))))
																																													{	/* Ast/private.scm 78 */
																																													BgL_kapzd210416zd2_2702:
																																														{	/* Ast/private.scm 78 */
																																															obj_t
																																																BgL_cdrzd210424zd2_2727;
																																															BgL_cdrzd210424zd2_2727
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd210415zd2_2701));
																																															{	/* Ast/private.scm 78 */
																																																obj_t
																																																	BgL_cdrzd210432zd2_2728;
																																																BgL_cdrzd210432zd2_2728
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_cdrzd210424zd2_2727));
																																																{	/* Ast/private.scm 78 */
																																																	obj_t
																																																		BgL_cdrzd210439zd2_2729;
																																																	BgL_cdrzd210439zd2_2729
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_cdrzd210432zd2_2728));
																																																	{	/* Ast/private.scm 78 */
																																																		obj_t
																																																			BgL_carzd210444zd2_2730;
																																																		BgL_carzd210444zd2_2730
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd210439zd2_2729));
																																																		if (STRINGP(BgL_carzd210444zd2_2730))
																																																			{	/* Ast/private.scm 78 */
																																																				obj_t
																																																					BgL_arg2409z00_2732;
																																																				obj_t
																																																					BgL_arg2411z00_2733;
																																																				obj_t
																																																					BgL_arg2412z00_2734;
																																																				obj_t
																																																					BgL_arg2413z00_2735;
																																																				BgL_arg2409z00_2732
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd210415zd2_2701));
																																																				BgL_arg2411z00_2733
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd210424zd2_2727));
																																																				BgL_arg2412z00_2734
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd210432zd2_2728));
																																																				BgL_arg2413z00_2735
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_cdrzd210439zd2_2729));
																																																				{
																																																					BgL_vsetz12z12_bglt
																																																						BgL_auxz00_4575;
																																																					BgL_vtypez00_1411
																																																						=
																																																						BgL_arg2409z00_2732;
																																																					BgL_ftypez00_1412
																																																						=
																																																						BgL_arg2411z00_2733;
																																																					BgL_otypez00_1413
																																																						=
																																																						BgL_arg2412z00_2734;
																																																					BgL_czd2fmtzd2_1414
																																																						=
																																																						BgL_carzd210444zd2_2730;
																																																					BgL_restz00_1415
																																																						=
																																																						BgL_arg2413z00_2735;
																																																				BgL_tagzd2137zd2_1416:
																																																					{	/* Ast/private.scm 184 */
																																																						BgL_typez00_bglt
																																																							BgL_ftypez00_2884;
																																																						BgL_typez00_bglt
																																																							BgL_vtypez00_2885;
																																																						BgL_typez00_bglt
																																																							BgL_otypez00_2886;
																																																						BgL_ftypez00_2884
																																																							=
																																																							BGl_usezd2typez12zc0zztype_envz00
																																																							(BgL_ftypez00_1412,
																																																							BgL_locz00_8);
																																																						BgL_vtypez00_2885
																																																							=
																																																							BGl_usezd2typez12zc0zztype_envz00
																																																							(BgL_vtypez00_1411,
																																																							BgL_locz00_8);
																																																						BgL_otypez00_2886
																																																							=
																																																							BGl_usezd2typez12zc0zztype_envz00
																																																							(BgL_otypez00_1413,
																																																							BgL_locz00_8);
																																																						{	/* Ast/private.scm 187 */
																																																							BgL_vsetz12z12_bglt
																																																								BgL_new1137z00_2887;
																																																							{	/* Ast/private.scm 188 */
																																																								BgL_vsetz12z12_bglt
																																																									BgL_new1136z00_2894;
																																																								BgL_new1136z00_2894
																																																									=
																																																									(
																																																									(BgL_vsetz12z12_bglt)
																																																									BOBJECT
																																																									(GC_MALLOC
																																																										(sizeof
																																																											(struct
																																																												BgL_vsetz12z12_bgl))));
																																																								{	/* Ast/private.scm 188 */
																																																									long
																																																										BgL_arg2522z00_2895;
																																																									{	/* Ast/private.scm 188 */
																																																										long
																																																											BgL_res2666z00_3240;
																																																										BgL_res2666z00_3240
																																																											=
																																																											BGL_CLASS_INDEX
																																																											(BGl_vsetz12z12zzast_nodez00);
																																																										BgL_arg2522z00_2895
																																																											=
																																																											BgL_res2666z00_3240;
																																																									}
																																																									BGL_OBJECT_CLASS_NUM_SET
																																																										(
																																																										((BgL_objectz00_bglt) BgL_new1136z00_2894), BgL_arg2522z00_2895);
																																																								}
																																																								{	/* Ast/private.scm 188 */
																																																									BgL_objectz00_bglt
																																																										BgL_tmpz00_4583;
																																																									BgL_tmpz00_4583
																																																										=
																																																										(
																																																										(BgL_objectz00_bglt)
																																																										BgL_new1136z00_2894);
																																																									BGL_OBJECT_WIDENING_SET
																																																										(BgL_tmpz00_4583,
																																																										BFALSE);
																																																								}
																																																								((BgL_objectz00_bglt) BgL_new1136z00_2894);
																																																								BgL_new1137z00_2887
																																																									=
																																																									BgL_new1136z00_2894;
																																																							}
																																																							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1137z00_2887)))->BgL_locz00) = ((obj_t) BgL_locz00_8), BUNSPEC);
																																																							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1137z00_2887)))->BgL_typez00) = ((BgL_typez00_bglt) ((BgL_typez00_bglt) BGl_za2unspecza2z00zztype_cachez00)), BUNSPEC);
																																																							((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1137z00_2887)))->BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
																																																							((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1137z00_2887)))->BgL_keyz00) = ((obj_t) BINT(((long) -1))), BUNSPEC);
																																																							((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1137z00_2887)))->BgL_exprza2za2) = ((obj_t) BGl_sexpza2zd2ze3nodez93zzast_sexpz00(BgL_restz00_1415, BgL_stackz00_7, BgL_locz00_8, CNST_TABLE_REF(((long) 3)))), BUNSPEC);
																																																							{
																																																								obj_t
																																																									BgL_auxz00_4601;
																																																								{	/* Ast/private.scm 196 */
																																																									BgL_feffectz00_bglt
																																																										BgL_new1139z00_2888;
																																																									{	/* Ast/var.scm 170 */
																																																										BgL_feffectz00_bglt
																																																											BgL_new1138z00_2891;
																																																										BgL_new1138z00_2891
																																																											=
																																																											(
																																																											(BgL_feffectz00_bglt)
																																																											BOBJECT
																																																											(GC_MALLOC
																																																												(sizeof
																																																													(struct
																																																														BgL_feffectz00_bgl))));
																																																										{	/* Ast/var.scm 170 */
																																																											long
																																																												BgL_arg2520z00_2892;
																																																											{	/* Ast/var.scm 170 */
																																																												long
																																																													BgL_res2667z00_3245;
																																																												{	/* Ast/var.scm 170 */
																																																													obj_t
																																																														BgL_classz00_3244;
																																																													BgL_classz00_3244
																																																														=
																																																														BGl_feffectz00zzast_varz00;
																																																													BgL_res2667z00_3245
																																																														=
																																																														BGL_CLASS_INDEX
																																																														(BgL_classz00_3244);
																																																												}
																																																												BgL_arg2520z00_2892
																																																													=
																																																													BgL_res2667z00_3245;
																																																											}
																																																											BGL_OBJECT_CLASS_NUM_SET
																																																												(
																																																												((BgL_objectz00_bglt) BgL_new1138z00_2891), BgL_arg2520z00_2892);
																																																										}
																																																										BgL_new1139z00_2888
																																																											=
																																																											BgL_new1138z00_2891;
																																																									}
																																																									((((BgL_feffectz00_bglt) COBJECT(BgL_new1139z00_2888))->BgL_readz00) = ((obj_t) BNIL), BUNSPEC);
																																																									{
																																																										obj_t
																																																											BgL_auxz00_4608;
																																																										{	/* Ast/private.scm 197 */
																																																											obj_t
																																																												BgL_arg2518z00_2889;
																																																											BgL_arg2518z00_2889
																																																												=
																																																												(
																																																												((BgL_typez00_bglt) COBJECT(BgL_ftypez00_2884))->BgL_idz00);
																																																											{	/* Ast/private.scm 197 */
																																																												obj_t
																																																													BgL_list2519z00_2890;
																																																												BgL_list2519z00_2890
																																																													=
																																																													MAKE_YOUNG_PAIR
																																																													(BgL_arg2518z00_2889,
																																																													BNIL);
																																																												BgL_auxz00_4608
																																																													=
																																																													BgL_list2519z00_2890;
																																																										}}
																																																										((((BgL_feffectz00_bglt) COBJECT(BgL_new1139z00_2888))->BgL_writez00) = ((obj_t) BgL_auxz00_4608), BUNSPEC);
																																																									}
																																																									BgL_auxz00_4601
																																																										=
																																																										(
																																																										(obj_t)
																																																										BgL_new1139z00_2888);
																																																								}
																																																								((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1137z00_2887)))->BgL_effectz00) = ((obj_t) BgL_auxz00_4601), BUNSPEC);
																																																							}
																																																							((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt) BgL_new1137z00_2887)))->BgL_czd2formatzd2) = ((obj_t) BgL_czd2fmtzd2_1414), BUNSPEC);
																																																							((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1137z00_2887))->BgL_ftypez00) = ((BgL_typez00_bglt) BgL_ftypez00_2884), BUNSPEC);
																																																							((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1137z00_2887))->BgL_otypez00) = ((BgL_typez00_bglt) BgL_otypez00_2886), BUNSPEC);
																																																							((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1137z00_2887))->BgL_vtypez00) = ((BgL_typez00_bglt) BgL_vtypez00_2885), BUNSPEC);
																																																							{
																																																								bool_t
																																																									BgL_auxz00_4619;
																																																								{	/* Ast/private.scm 195 */
																																																									obj_t
																																																										BgL_tmpz00_4620;
																																																									{	/* Ast/private.scm 195 */
																																																										obj_t
																																																											BgL_pairz00_3253;
																																																										BgL_pairz00_3253
																																																											=
																																																											CDR
																																																											(BgL_sexpz00_6);
																																																										BgL_tmpz00_4620
																																																											=
																																																											CAR
																																																											(BgL_pairz00_3253);
																																																									}
																																																									BgL_auxz00_4619
																																																										=
																																																										(BgL_tmpz00_4620
																																																										==
																																																										CNST_TABLE_REF
																																																										(((long) 5)));
																																																								}
																																																								((((BgL_vsetz12z12_bglt) COBJECT(BgL_new1137z00_2887))->BgL_unsafez00) = ((bool_t) BgL_auxz00_4619), BUNSPEC);
																																																							}
																																																							BgL_auxz00_4575
																																																								=
																																																								BgL_new1137z00_2887;
																																																					}}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_4575);
																																																				}
																																																			}
																																																		else
																																																			{	/* Ast/private.scm 78 */
																																																				obj_t
																																																					BgL_cdrzd210470zd2_2736;
																																																				BgL_cdrzd210470zd2_2736
																																																					=
																																																					CDR
																																																					(BgL_sexpz00_6);
																																																				{	/* Ast/private.scm 78 */
																																																					obj_t
																																																						BgL_cdrzd210480zd2_2737;
																																																					BgL_cdrzd210480zd2_2737
																																																						=
																																																						CDR
																																																						(
																																																						((obj_t) BgL_cdrzd210470zd2_2736));
																																																					if ((CAR(((obj_t) BgL_cdrzd210470zd2_2736)) == CNST_TABLE_REF(((long) 12))))
																																																						{	/* Ast/private.scm 78 */
																																																							obj_t
																																																								BgL_cdrzd210490zd2_2740;
																																																							BgL_cdrzd210490zd2_2740
																																																								=
																																																								CDR
																																																								(
																																																								((obj_t) BgL_cdrzd210480zd2_2737));
																																																							{	/* Ast/private.scm 78 */
																																																								obj_t
																																																									BgL_cdrzd210500zd2_2741;
																																																								BgL_cdrzd210500zd2_2741
																																																									=
																																																									CDR
																																																									(
																																																									((obj_t) BgL_cdrzd210490zd2_2740));
																																																								{	/* Ast/private.scm 78 */
																																																									obj_t
																																																										BgL_cdrzd210509zd2_2742;
																																																									BgL_cdrzd210509zd2_2742
																																																										=
																																																										CDR
																																																										(
																																																										((obj_t) BgL_cdrzd210500zd2_2741));
																																																									{	/* Ast/private.scm 78 */
																																																										obj_t
																																																											BgL_carzd210516zd2_2743;
																																																										obj_t
																																																											BgL_cdrzd210517zd2_2744;
																																																										BgL_carzd210516zd2_2743
																																																											=
																																																											CAR
																																																											(
																																																											((obj_t) BgL_cdrzd210509zd2_2742));
																																																										BgL_cdrzd210517zd2_2744
																																																											=
																																																											CDR
																																																											(
																																																											((obj_t) BgL_cdrzd210509zd2_2742));
																																																										if (STRINGP(BgL_carzd210516zd2_2743))
																																																											{	/* Ast/private.scm 78 */
																																																												if (PAIRP(BgL_cdrzd210517zd2_2744))
																																																													{	/* Ast/private.scm 78 */
																																																														obj_t
																																																															BgL_carzd210524zd2_2747;
																																																														obj_t
																																																															BgL_cdrzd210525zd2_2748;
																																																														BgL_carzd210524zd2_2747
																																																															=
																																																															CAR
																																																															(BgL_cdrzd210517zd2_2744);
																																																														BgL_cdrzd210525zd2_2748
																																																															=
																																																															CDR
																																																															(BgL_cdrzd210517zd2_2744);
																																																														if (STRINGP(BgL_carzd210524zd2_2747))
																																																															{	/* Ast/private.scm 78 */
																																																																if (PAIRP(BgL_cdrzd210525zd2_2748))
																																																																	{	/* Ast/private.scm 78 */
																																																																		obj_t
																																																																			BgL_carzd210531zd2_2751;
																																																																		BgL_carzd210531zd2_2751
																																																																			=
																																																																			CAR
																																																																			(BgL_cdrzd210525zd2_2748);
																																																																		if (BOOLEANP(BgL_carzd210531zd2_2751))
																																																																			{	/* Ast/private.scm 78 */
																																																																				obj_t
																																																																					BgL_arg2421z00_2753;
																																																																				obj_t
																																																																					BgL_arg2422z00_2754;
																																																																				obj_t
																																																																					BgL_arg2424z00_2755;
																																																																				obj_t
																																																																					BgL_arg2425z00_2756;
																																																																				BgL_arg2421z00_2753
																																																																					=
																																																																					CAR
																																																																					(
																																																																					((obj_t) BgL_cdrzd210480zd2_2737));
																																																																				BgL_arg2422z00_2754
																																																																					=
																																																																					CAR
																																																																					(
																																																																					((obj_t) BgL_cdrzd210490zd2_2740));
																																																																				BgL_arg2424z00_2755
																																																																					=
																																																																					CAR
																																																																					(
																																																																					((obj_t) BgL_cdrzd210500zd2_2741));
																																																																				BgL_arg2425z00_2756
																																																																					=
																																																																					CDR
																																																																					(BgL_cdrzd210525zd2_2748);
																																																																				{
																																																																					BgL_vallocz00_bglt
																																																																						BgL_auxz00_4665;
																																																																					BgL_vtypez00_1417
																																																																						=
																																																																						BgL_arg2421z00_2753;
																																																																					BgL_ftypez00_1418
																																																																						=
																																																																						BgL_arg2422z00_2754;
																																																																					BgL_otypez00_1419
																																																																						=
																																																																						BgL_arg2424z00_2755;
																																																																					BgL_czd2heapzd2fmtz00_1420
																																																																						=
																																																																						BgL_carzd210516zd2_2743;
																																																																					BgL_czd2stackzd2fmtz00_1421
																																																																						=
																																																																						BgL_carzd210524zd2_2747;
																																																																					BgL_stackzf3zf3_1422
																																																																						=
																																																																						BgL_carzd210531zd2_2751;
																																																																					BgL_restz00_1423
																																																																						=
																																																																						BgL_arg2425z00_2756;
																																																																				BgL_tagzd2138zd2_1424:
																																																																					{	/* Ast/private.scm 202 */
																																																																						BgL_typez00_bglt
																																																																							BgL_ftypez00_2896;
																																																																						BgL_typez00_bglt
																																																																							BgL_vtypez00_2897;
																																																																						BgL_typez00_bglt
																																																																							BgL_otypez00_2898;
																																																																						BgL_ftypez00_2896
																																																																							=
																																																																							BGl_usezd2typez12zc0zztype_envz00
																																																																							(BgL_ftypez00_1418,
																																																																							BgL_locz00_8);
																																																																						BgL_vtypez00_2897
																																																																							=
																																																																							BGl_usezd2typez12zc0zztype_envz00
																																																																							(BgL_vtypez00_1417,
																																																																							BgL_locz00_8);
																																																																						BgL_otypez00_2898
																																																																							=
																																																																							BGl_usezd2typez12zc0zztype_envz00
																																																																							(BgL_otypez00_1419,
																																																																							BgL_locz00_8);
																																																																						{	/* Ast/private.scm 205 */
																																																																							BgL_vallocz00_bglt
																																																																								BgL_new1141z00_2899;
																																																																							{	/* Ast/private.scm 206 */
																																																																								BgL_vallocz00_bglt
																																																																									BgL_new1140z00_2900;
																																																																								BgL_new1140z00_2900
																																																																									=
																																																																									(
																																																																									(BgL_vallocz00_bglt)
																																																																									BOBJECT
																																																																									(GC_MALLOC
																																																																										(sizeof
																																																																											(struct
																																																																												BgL_vallocz00_bgl))));
																																																																								{	/* Ast/private.scm 206 */
																																																																									long
																																																																										BgL_arg2523z00_2901;
																																																																									{	/* Ast/private.scm 206 */
																																																																										long
																																																																											BgL_res2669z00_3255;
																																																																										BgL_res2669z00_3255
																																																																											=
																																																																											BGL_CLASS_INDEX
																																																																											(BGl_vallocz00zzast_nodez00);
																																																																										BgL_arg2523z00_2901
																																																																											=
																																																																											BgL_res2669z00_3255;
																																																																									}
																																																																									BGL_OBJECT_CLASS_NUM_SET
																																																																										(
																																																																										((BgL_objectz00_bglt) BgL_new1140z00_2900), BgL_arg2523z00_2901);
																																																																								}
																																																																								{	/* Ast/private.scm 206 */
																																																																									BgL_objectz00_bglt
																																																																										BgL_tmpz00_4673;
																																																																									BgL_tmpz00_4673
																																																																										=
																																																																										(
																																																																										(BgL_objectz00_bglt)
																																																																										BgL_new1140z00_2900);
																																																																									BGL_OBJECT_WIDENING_SET
																																																																										(BgL_tmpz00_4673,
																																																																										BFALSE);
																																																																								}
																																																																								((BgL_objectz00_bglt) BgL_new1140z00_2900);
																																																																								BgL_new1141z00_2899
																																																																									=
																																																																									BgL_new1140z00_2900;
																																																																							}
																																																																							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1141z00_2899)))->BgL_locz00) = ((obj_t) BgL_locz00_8), BUNSPEC);
																																																																							((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1141z00_2899)))->BgL_typez00) = ((BgL_typez00_bglt) BgL_vtypez00_2897), BUNSPEC);
																																																																							((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1141z00_2899)))->BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
																																																																							((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1141z00_2899)))->BgL_keyz00) = ((obj_t) BINT(((long) -1))), BUNSPEC);
																																																																							((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1141z00_2899)))->BgL_exprza2za2) = ((obj_t) BGl_sexpza2zd2ze3nodez93zzast_sexpz00(BgL_restz00_1423, BgL_stackz00_7, BgL_locz00_8, CNST_TABLE_REF(((long) 3)))), BUNSPEC);
																																																																							((((BgL_externz00_bglt) COBJECT(((BgL_externz00_bglt) BgL_new1141z00_2899)))->BgL_effectz00) = ((obj_t) BUNSPEC), BUNSPEC);
																																																																							((((BgL_privatez00_bglt) COBJECT(((BgL_privatez00_bglt) BgL_new1141z00_2899)))->BgL_czd2formatzd2) = ((obj_t) BgL_czd2heapzd2fmtz00_1420), BUNSPEC);
																																																																							((((BgL_vallocz00_bglt) COBJECT(BgL_new1141z00_2899))->BgL_ftypez00) = ((BgL_typez00_bglt) BgL_ftypez00_2896), BUNSPEC);
																																																																							((((BgL_vallocz00_bglt) COBJECT(BgL_new1141z00_2899))->BgL_otypez00) = ((BgL_typez00_bglt) BgL_otypez00_2898), BUNSPEC);
																																																																							BgL_auxz00_4665
																																																																								=
																																																																								BgL_new1141z00_2899;
																																																																					}}
																																																																					return
																																																																						(
																																																																						(obj_t)
																																																																						BgL_auxz00_4665);
																																																																				}
																																																																			}
																																																																		else
																																																																			{	/* Ast/private.scm 78 */
																																																																				goto
																																																																					BgL_tagzd2141zd2_1432;
																																																																			}
																																																																	}
																																																																else
																																																																	{	/* Ast/private.scm 78 */
																																																																		goto
																																																																			BgL_tagzd2141zd2_1432;
																																																																	}
																																																															}
																																																														else
																																																															{	/* Ast/private.scm 78 */
																																																																goto
																																																																	BgL_tagzd2141zd2_1432;
																																																															}
																																																													}
																																																												else
																																																													{	/* Ast/private.scm 78 */
																																																														goto
																																																															BgL_tagzd2141zd2_1432;
																																																													}
																																																											}
																																																										else
																																																											{	/* Ast/private.scm 78 */
																																																												goto
																																																													BgL_tagzd2141zd2_1432;
																																																											}
																																																									}
																																																								}
																																																							}
																																																						}
																																																					else
																																																						{	/* Ast/private.scm 78 */
																																																							goto
																																																								BgL_tagzd2141zd2_1432;
																																																						}
																																																				}
																																																			}
																																																	}
																																																}
																																															}
																																														}
																																													}
																																												else
																																													{	/* Ast/private.scm 78 */
																																														if ((BgL_carzd210414zd2_2700 == CNST_TABLE_REF(((long) 5))))
																																															{	/* Ast/private.scm 78 */
																																																goto
																																																	BgL_kapzd210416zd2_2702;
																																															}
																																														else
																																															{	/* Ast/private.scm 78 */
																																																obj_t
																																																	BgL_cdrzd210640zd2_2706;
																																																BgL_cdrzd210640zd2_2706
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_cdrzd210407zd2_2699));
																																																if ((CAR(((obj_t) BgL_cdrzd210407zd2_2699)) == CNST_TABLE_REF(((long) 12))))
																																																	{	/* Ast/private.scm 78 */
																																																		obj_t
																																																			BgL_cdrzd210650zd2_2709;
																																																		BgL_cdrzd210650zd2_2709
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_cdrzd210640zd2_2706));
																																																		{	/* Ast/private.scm 78 */
																																																			obj_t
																																																				BgL_cdrzd210660zd2_2710;
																																																			BgL_cdrzd210660zd2_2710
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_cdrzd210650zd2_2709));
																																																			{	/* Ast/private.scm 78 */
																																																				obj_t
																																																					BgL_cdrzd210669zd2_2711;
																																																				BgL_cdrzd210669zd2_2711
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_cdrzd210660zd2_2710));
																																																				{	/* Ast/private.scm 78 */
																																																					obj_t
																																																						BgL_carzd210676zd2_2712;
																																																					obj_t
																																																						BgL_cdrzd210677zd2_2713;
																																																					BgL_carzd210676zd2_2712
																																																						=
																																																						CAR
																																																						(
																																																						((obj_t) BgL_cdrzd210669zd2_2711));
																																																					BgL_cdrzd210677zd2_2713
																																																						=
																																																						CDR
																																																						(
																																																						((obj_t) BgL_cdrzd210669zd2_2711));
																																																					if (STRINGP(BgL_carzd210676zd2_2712))
																																																						{	/* Ast/private.scm 78 */
																																																							if (PAIRP(BgL_cdrzd210677zd2_2713))
																																																								{	/* Ast/private.scm 78 */
																																																									obj_t
																																																										BgL_carzd210684zd2_2716;
																																																									obj_t
																																																										BgL_cdrzd210685zd2_2717;
																																																									BgL_carzd210684zd2_2716
																																																										=
																																																										CAR
																																																										(BgL_cdrzd210677zd2_2713);
																																																									BgL_cdrzd210685zd2_2717
																																																										=
																																																										CDR
																																																										(BgL_cdrzd210677zd2_2713);
																																																									if (STRINGP(BgL_carzd210684zd2_2716))
																																																										{	/* Ast/private.scm 78 */
																																																											if (PAIRP(BgL_cdrzd210685zd2_2717))
																																																												{	/* Ast/private.scm 78 */
																																																													obj_t
																																																														BgL_carzd210691zd2_2720;
																																																													BgL_carzd210691zd2_2720
																																																														=
																																																														CAR
																																																														(BgL_cdrzd210685zd2_2717);
																																																													if (BOOLEANP(BgL_carzd210691zd2_2720))
																																																														{	/* Ast/private.scm 78 */
																																																															obj_t
																																																																BgL_arg2402z00_2722;
																																																															obj_t
																																																																BgL_arg2404z00_2723;
																																																															obj_t
																																																																BgL_arg2405z00_2724;
																																																															obj_t
																																																																BgL_arg2406z00_2725;
																																																															BgL_arg2402z00_2722
																																																																=
																																																																CAR
																																																																(
																																																																((obj_t) BgL_cdrzd210640zd2_2706));
																																																															BgL_arg2404z00_2723
																																																																=
																																																																CAR
																																																																(
																																																																((obj_t) BgL_cdrzd210650zd2_2709));
																																																															BgL_arg2405z00_2724
																																																																=
																																																																CAR
																																																																(
																																																																((obj_t) BgL_cdrzd210660zd2_2710));
																																																															BgL_arg2406z00_2725
																																																																=
																																																																CDR
																																																																(BgL_cdrzd210685zd2_2717);
																																																															{
																																																																BgL_vallocz00_bglt
																																																																	BgL_auxz00_4737;
																																																																{
																																																																	obj_t
																																																																		BgL_restz00_4744;
																																																																	obj_t
																																																																		BgL_stackzf3zf3_4743;
																																																																	obj_t
																																																																		BgL_czd2stackzd2fmtz00_4742;
																																																																	obj_t
																																																																		BgL_czd2heapzd2fmtz00_4741;
																																																																	obj_t
																																																																		BgL_otypez00_4740;
																																																																	obj_t
																																																																		BgL_ftypez00_4739;
																																																																	obj_t
																																																																		BgL_vtypez00_4738;
																																																																	BgL_vtypez00_4738
																																																																		=
																																																																		BgL_arg2402z00_2722;
																																																																	BgL_ftypez00_4739
																																																																		=
																																																																		BgL_arg2404z00_2723;
																																																																	BgL_otypez00_4740
																																																																		=
																																																																		BgL_arg2405z00_2724;
																																																																	BgL_czd2heapzd2fmtz00_4741
																																																																		=
																																																																		BgL_carzd210676zd2_2712;
																																																																	BgL_czd2stackzd2fmtz00_4742
																																																																		=
																																																																		BgL_carzd210684zd2_2716;
																																																																	BgL_stackzf3zf3_4743
																																																																		=
																																																																		BgL_carzd210691zd2_2720;
																																																																	BgL_restz00_4744
																																																																		=
																																																																		BgL_arg2406z00_2725;
																																																																	BgL_restz00_1423
																																																																		=
																																																																		BgL_restz00_4744;
																																																																	BgL_stackzf3zf3_1422
																																																																		=
																																																																		BgL_stackzf3zf3_4743;
																																																																	BgL_czd2stackzd2fmtz00_1421
																																																																		=
																																																																		BgL_czd2stackzd2fmtz00_4742;
																																																																	BgL_czd2heapzd2fmtz00_1420
																																																																		=
																																																																		BgL_czd2heapzd2fmtz00_4741;
																																																																	BgL_otypez00_1419
																																																																		=
																																																																		BgL_otypez00_4740;
																																																																	BgL_ftypez00_1418
																																																																		=
																																																																		BgL_ftypez00_4739;
																																																																	BgL_vtypez00_1417
																																																																		=
																																																																		BgL_vtypez00_4738;
																																																																	goto
																																																																		BgL_tagzd2138zd2_1424;
																																																																}
																																																																return
																																																																	(
																																																																	(obj_t)
																																																																	BgL_auxz00_4737);
																																																															}
																																																														}
																																																													else
																																																														{	/* Ast/private.scm 78 */
																																																															goto
																																																																BgL_tagzd2141zd2_1432;
																																																														}
																																																												}
																																																											else
																																																												{	/* Ast/private.scm 78 */
																																																													goto
																																																														BgL_tagzd2141zd2_1432;
																																																												}
																																																										}
																																																									else
																																																										{	/* Ast/private.scm 78 */
																																																											goto
																																																												BgL_tagzd2141zd2_1432;
																																																										}
																																																								}
																																																							else
																																																								{	/* Ast/private.scm 78 */
																																																									goto
																																																										BgL_tagzd2141zd2_1432;
																																																								}
																																																						}
																																																					else
																																																						{	/* Ast/private.scm 78 */
																																																							goto
																																																								BgL_tagzd2141zd2_1432;
																																																						}
																																																				}
																																																			}
																																																		}
																																																	}
																																																else
																																																	{	/* Ast/private.scm 78 */
																																																		goto
																																																			BgL_tagzd2141zd2_1432;
																																																	}
																																															}
																																													}
																																											}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Ast/private.scm 78 */
																																								obj_t
																																									BgL_cdrzd210821zd2_2758;
																																								BgL_cdrzd210821zd2_2758
																																									=
																																									CDR
																																									(BgL_sexpz00_6);
																																								{	/* Ast/private.scm 78 */
																																									obj_t
																																										BgL_cdrzd210827zd2_2759;
																																									BgL_cdrzd210827zd2_2759
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd210821zd2_2758));
																																									if ((CAR(((obj_t) BgL_cdrzd210821zd2_2758)) == CNST_TABLE_REF(((long) 14))))
																																										{	/* Ast/private.scm 78 */
																																											obj_t
																																												BgL_cdrzd210833zd2_2762;
																																											BgL_cdrzd210833zd2_2762
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd210827zd2_2759));
																																											{	/* Ast/private.scm 78 */
																																												obj_t
																																													BgL_cdrzd210839zd2_2763;
																																												BgL_cdrzd210839zd2_2763
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_cdrzd210833zd2_2762));
																																												if (NULLP(CDR(((obj_t) BgL_cdrzd210839zd2_2763))))
																																													{	/* Ast/private.scm 78 */
																																														obj_t
																																															BgL_arg2433z00_2766;
																																														obj_t
																																															BgL_arg2435z00_2767;
																																														obj_t
																																															BgL_arg2437z00_2768;
																																														BgL_arg2433z00_2766
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd210827zd2_2759));
																																														BgL_arg2435z00_2767
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd210833zd2_2762));
																																														BgL_arg2437z00_2768
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_cdrzd210839zd2_2763));
																																														{
																																															BgL_sequencez00_bglt
																																																BgL_auxz00_4768;
																																															BgL_typez00_1428
																																																=
																																																BgL_arg2433z00_2766;
																																															BgL_kwdsz00_1429
																																																=
																																																BgL_arg2435z00_2767;
																																															BgL_bodyz00_1430
																																																=
																																																BgL_arg2437z00_2768;
																																														BgL_tagzd2140zd2_1431:
																																															{	/* Ast/private.scm 219 */
																																																BgL_sequencez00_bglt
																																																	BgL_new1145z00_2907;
																																																{	/* Ast/private.scm 220 */
																																																	BgL_sequencez00_bglt
																																																		BgL_new1144z00_2908;
																																																	BgL_new1144z00_2908
																																																		=
																																																		(
																																																		(BgL_sequencez00_bglt)
																																																		BOBJECT
																																																		(GC_MALLOC
																																																			(sizeof
																																																				(struct
																																																					BgL_sequencez00_bgl))));
																																																	{	/* Ast/private.scm 220 */
																																																		long
																																																			BgL_arg2529z00_2909;
																																																		{	/* Ast/private.scm 220 */
																																																			long
																																																				BgL_res2672z00_3266;
																																																			BgL_res2672z00_3266
																																																				=
																																																				BGL_CLASS_INDEX
																																																				(BGl_sequencez00zzast_nodez00);
																																																			BgL_arg2529z00_2909
																																																				=
																																																				BgL_res2672z00_3266;
																																																		}
																																																		BGL_OBJECT_CLASS_NUM_SET
																																																			(
																																																			((BgL_objectz00_bglt) BgL_new1144z00_2908), BgL_arg2529z00_2909);
																																																	}
																																																	{	/* Ast/private.scm 220 */
																																																		BgL_objectz00_bglt
																																																			BgL_tmpz00_4773;
																																																		BgL_tmpz00_4773
																																																			=
																																																			(
																																																			(BgL_objectz00_bglt)
																																																			BgL_new1144z00_2908);
																																																		BGL_OBJECT_WIDENING_SET
																																																			(BgL_tmpz00_4773,
																																																			BFALSE);
																																																	}
																																																	((BgL_objectz00_bglt) BgL_new1144z00_2908);
																																																	BgL_new1145z00_2907
																																																		=
																																																		BgL_new1144z00_2908;
																																																}
																																																((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1145z00_2907)))->BgL_locz00) = ((obj_t) BgL_locz00_8), BUNSPEC);
																																																((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1145z00_2907)))->BgL_typez00) = ((BgL_typez00_bglt) BGl_usezd2typez12zc0zztype_envz00(BgL_typez00_1428, BgL_locz00_8)), BUNSPEC);
																																																((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1145z00_2907)))->BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
																																																((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1145z00_2907)))->BgL_keyz00) = ((obj_t) BINT(((long) -1))), BUNSPEC);
																																																((((BgL_sequencez00_bglt) COBJECT(BgL_new1145z00_2907))->BgL_nodesz00) = ((obj_t) BGl_sexpza2zd2ze3nodez93zzast_sexpz00(BgL_bodyz00_1430, BgL_stackz00_7, BgL_locz00_8, CNST_TABLE_REF(((long) 3)))), BUNSPEC);
																																																((((BgL_sequencez00_bglt) COBJECT(BgL_new1145z00_2907))->BgL_unsafez00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
																																																((((BgL_sequencez00_bglt) COBJECT(BgL_new1145z00_2907))->BgL_metaz00) = ((obj_t) BgL_kwdsz00_1429), BUNSPEC);
																																																BgL_auxz00_4768
																																																	=
																																																	BgL_new1145z00_2907;
																																															}
																																															return
																																																(
																																																(obj_t)
																																																BgL_auxz00_4768);
																																														}
																																													}
																																												else
																																													{	/* Ast/private.scm 78 */
																																														goto
																																															BgL_tagzd2141zd2_1432;
																																													}
																																											}
																																										}
																																									else
																																										{	/* Ast/private.scm 78 */
																																											goto
																																												BgL_tagzd2141zd2_1432;
																																										}
																																								}
																																							}
																																					}
																																				else
																																					{	/* Ast/private.scm 78 */
																																						goto
																																							BgL_tagzd2141zd2_1432;
																																					}
																																			}
																																		}
																																	}
																																else
																																	{	/* Ast/private.scm 78 */
																																		if (
																																			(BgL_carzd210351zd2_2593
																																				==
																																				CNST_TABLE_REF
																																				(((long)
																																						4))))
																																			{	/* Ast/private.scm 78 */
																																				goto
																																					BgL_kapzd210353zd2_2595;
																																			}
																																		else
																																			{	/* Ast/private.scm 78 */
																																				obj_t
																																					BgL_cdrzd210914zd2_2598;
																																				BgL_cdrzd210914zd2_2598
																																					=
																																					CDR
																																					(BgL_sexpz00_6);
																																				{	/* Ast/private.scm 78 */
																																					obj_t
																																						BgL_carzd210922zd2_2599;
																																					obj_t
																																						BgL_cdrzd210923zd2_2600;
																																					BgL_carzd210922zd2_2599
																																						=
																																						CAR(
																																						((obj_t) BgL_cdrzd210914zd2_2598));
																																					BgL_cdrzd210923zd2_2600
																																						=
																																						CDR(
																																						((obj_t) BgL_cdrzd210914zd2_2598));
																																					{

																																						if (
																																							(BgL_carzd210922zd2_2599
																																								==
																																								CNST_TABLE_REF
																																								(((long) 13))))
																																							{	/* Ast/private.scm 78 */
																																							BgL_kapzd210924zd2_2601:
																																								{	/* Ast/private.scm 78 */
																																									obj_t
																																										BgL_cdrzd210933zd2_2642;
																																									BgL_cdrzd210933zd2_2642
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd210923zd2_2600));
																																									{	/* Ast/private.scm 78 */
																																										obj_t
																																											BgL_cdrzd210942zd2_2643;
																																										BgL_cdrzd210942zd2_2643
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_cdrzd210933zd2_2642));
																																										if (PAIRP(BgL_cdrzd210942zd2_2643))
																																											{	/* Ast/private.scm 78 */
																																												obj_t
																																													BgL_cdrzd210949zd2_2645;
																																												BgL_cdrzd210949zd2_2645
																																													=
																																													CDR
																																													(BgL_cdrzd210942zd2_2643);
																																												if (PAIRP(BgL_cdrzd210949zd2_2645))
																																													{	/* Ast/private.scm 78 */
																																														obj_t
																																															BgL_carzd210953zd2_2647;
																																														BgL_carzd210953zd2_2647
																																															=
																																															CAR
																																															(BgL_cdrzd210949zd2_2645);
																																														if (STRINGP(BgL_carzd210953zd2_2647))
																																															{	/* Ast/private.scm 78 */
																																																obj_t
																																																	BgL_arg2355z00_2649;
																																																obj_t
																																																	BgL_arg2356z00_2650;
																																																obj_t
																																																	BgL_arg2357z00_2651;
																																																obj_t
																																																	BgL_arg2358z00_2652;
																																																BgL_arg2355z00_2649
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd210923zd2_2600));
																																																BgL_arg2356z00_2650
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd210933zd2_2642));
																																																BgL_arg2357z00_2651
																																																	=
																																																	CAR
																																																	(BgL_cdrzd210942zd2_2643);
																																																BgL_arg2358z00_2652
																																																	=
																																																	CDR
																																																	(BgL_cdrzd210949zd2_2645);
																																																{
																																																	BgL_vsetz12z12_bglt
																																																		BgL_auxz00_4822;
																																																	{
																																																		obj_t
																																																			BgL_restz00_4827;
																																																		obj_t
																																																			BgL_czd2fmtzd2_4826;
																																																		obj_t
																																																			BgL_otypez00_4825;
																																																		obj_t
																																																			BgL_ftypez00_4824;
																																																		obj_t
																																																			BgL_vtypez00_4823;
																																																		BgL_vtypez00_4823
																																																			=
																																																			BgL_arg2355z00_2649;
																																																		BgL_ftypez00_4824
																																																			=
																																																			BgL_arg2356z00_2650;
																																																		BgL_otypez00_4825
																																																			=
																																																			BgL_arg2357z00_2651;
																																																		BgL_czd2fmtzd2_4826
																																																			=
																																																			BgL_carzd210953zd2_2647;
																																																		BgL_restz00_4827
																																																			=
																																																			BgL_arg2358z00_2652;
																																																		BgL_restz00_1415
																																																			=
																																																			BgL_restz00_4827;
																																																		BgL_czd2fmtzd2_1414
																																																			=
																																																			BgL_czd2fmtzd2_4826;
																																																		BgL_otypez00_1413
																																																			=
																																																			BgL_otypez00_4825;
																																																		BgL_ftypez00_1412
																																																			=
																																																			BgL_ftypez00_4824;
																																																		BgL_vtypez00_1411
																																																			=
																																																			BgL_vtypez00_4823;
																																																		goto
																																																			BgL_tagzd2137zd2_1416;
																																																	}
																																																	return
																																																		(
																																																		(obj_t)
																																																		BgL_auxz00_4822);
																																																}
																																															}
																																														else
																																															{	/* Ast/private.scm 78 */
																																																obj_t
																																																	BgL_cdrzd210979zd2_2653;
																																																BgL_cdrzd210979zd2_2653
																																																	=
																																																	CDR
																																																	(BgL_sexpz00_6);
																																																{	/* Ast/private.scm 78 */
																																																	obj_t
																																																		BgL_cdrzd210989zd2_2654;
																																																	BgL_cdrzd210989zd2_2654
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_cdrzd210979zd2_2653));
																																																	if ((CAR(((obj_t) BgL_cdrzd210979zd2_2653)) == CNST_TABLE_REF(((long) 12))))
																																																		{	/* Ast/private.scm 78 */
																																																			obj_t
																																																				BgL_cdrzd210999zd2_2657;
																																																			BgL_cdrzd210999zd2_2657
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_cdrzd210989zd2_2654));
																																																			{	/* Ast/private.scm 78 */
																																																				obj_t
																																																					BgL_cdrzd211009zd2_2658;
																																																				BgL_cdrzd211009zd2_2658
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_cdrzd210999zd2_2657));
																																																				{	/* Ast/private.scm 78 */
																																																					obj_t
																																																						BgL_cdrzd211018zd2_2659;
																																																					BgL_cdrzd211018zd2_2659
																																																						=
																																																						CDR
																																																						(
																																																						((obj_t) BgL_cdrzd211009zd2_2658));
																																																					{	/* Ast/private.scm 78 */
																																																						obj_t
																																																							BgL_carzd211025zd2_2660;
																																																						obj_t
																																																							BgL_cdrzd211026zd2_2661;
																																																						BgL_carzd211025zd2_2660
																																																							=
																																																							CAR
																																																							(
																																																							((obj_t) BgL_cdrzd211018zd2_2659));
																																																						BgL_cdrzd211026zd2_2661
																																																							=
																																																							CDR
																																																							(
																																																							((obj_t) BgL_cdrzd211018zd2_2659));
																																																						if (STRINGP(BgL_carzd211025zd2_2660))
																																																							{	/* Ast/private.scm 78 */
																																																								if (PAIRP(BgL_cdrzd211026zd2_2661))
																																																									{	/* Ast/private.scm 78 */
																																																										obj_t
																																																											BgL_carzd211033zd2_2664;
																																																										obj_t
																																																											BgL_cdrzd211034zd2_2665;
																																																										BgL_carzd211033zd2_2664
																																																											=
																																																											CAR
																																																											(BgL_cdrzd211026zd2_2661);
																																																										BgL_cdrzd211034zd2_2665
																																																											=
																																																											CDR
																																																											(BgL_cdrzd211026zd2_2661);
																																																										if (STRINGP(BgL_carzd211033zd2_2664))
																																																											{	/* Ast/private.scm 78 */
																																																												if (PAIRP(BgL_cdrzd211034zd2_2665))
																																																													{	/* Ast/private.scm 78 */
																																																														obj_t
																																																															BgL_carzd211040zd2_2668;
																																																														BgL_carzd211040zd2_2668
																																																															=
																																																															CAR
																																																															(BgL_cdrzd211034zd2_2665);
																																																														if (BOOLEANP(BgL_carzd211040zd2_2668))
																																																															{	/* Ast/private.scm 78 */
																																																																obj_t
																																																																	BgL_arg2366z00_2670;
																																																																obj_t
																																																																	BgL_arg2367z00_2671;
																																																																obj_t
																																																																	BgL_arg2368z00_2672;
																																																																obj_t
																																																																	BgL_arg2369z00_2673;
																																																																BgL_arg2366z00_2670
																																																																	=
																																																																	CAR
																																																																	(
																																																																	((obj_t) BgL_cdrzd210989zd2_2654));
																																																																BgL_arg2367z00_2671
																																																																	=
																																																																	CAR
																																																																	(
																																																																	((obj_t) BgL_cdrzd210999zd2_2657));
																																																																BgL_arg2368z00_2672
																																																																	=
																																																																	CAR
																																																																	(
																																																																	((obj_t) BgL_cdrzd211009zd2_2658));
																																																																BgL_arg2369z00_2673
																																																																	=
																																																																	CDR
																																																																	(BgL_cdrzd211034zd2_2665);
																																																																{
																																																																	BgL_vallocz00_bglt
																																																																		BgL_auxz00_4867;
																																																																	{
																																																																		obj_t
																																																																			BgL_restz00_4874;
																																																																		obj_t
																																																																			BgL_stackzf3zf3_4873;
																																																																		obj_t
																																																																			BgL_czd2stackzd2fmtz00_4872;
																																																																		obj_t
																																																																			BgL_czd2heapzd2fmtz00_4871;
																																																																		obj_t
																																																																			BgL_otypez00_4870;
																																																																		obj_t
																																																																			BgL_ftypez00_4869;
																																																																		obj_t
																																																																			BgL_vtypez00_4868;
																																																																		BgL_vtypez00_4868
																																																																			=
																																																																			BgL_arg2366z00_2670;
																																																																		BgL_ftypez00_4869
																																																																			=
																																																																			BgL_arg2367z00_2671;
																																																																		BgL_otypez00_4870
																																																																			=
																																																																			BgL_arg2368z00_2672;
																																																																		BgL_czd2heapzd2fmtz00_4871
																																																																			=
																																																																			BgL_carzd211025zd2_2660;
																																																																		BgL_czd2stackzd2fmtz00_4872
																																																																			=
																																																																			BgL_carzd211033zd2_2664;
																																																																		BgL_stackzf3zf3_4873
																																																																			=
																																																																			BgL_carzd211040zd2_2668;
																																																																		BgL_restz00_4874
																																																																			=
																																																																			BgL_arg2369z00_2673;
																																																																		BgL_restz00_1423
																																																																			=
																																																																			BgL_restz00_4874;
																																																																		BgL_stackzf3zf3_1422
																																																																			=
																																																																			BgL_stackzf3zf3_4873;
																																																																		BgL_czd2stackzd2fmtz00_1421
																																																																			=
																																																																			BgL_czd2stackzd2fmtz00_4872;
																																																																		BgL_czd2heapzd2fmtz00_1420
																																																																			=
																																																																			BgL_czd2heapzd2fmtz00_4871;
																																																																		BgL_otypez00_1419
																																																																			=
																																																																			BgL_otypez00_4870;
																																																																		BgL_ftypez00_1418
																																																																			=
																																																																			BgL_ftypez00_4869;
																																																																		BgL_vtypez00_1417
																																																																			=
																																																																			BgL_vtypez00_4868;
																																																																		goto
																																																																			BgL_tagzd2138zd2_1424;
																																																																	}
																																																																	return
																																																																		(
																																																																		(obj_t)
																																																																		BgL_auxz00_4867);
																																																																}
																																																															}
																																																														else
																																																															{	/* Ast/private.scm 78 */
																																																																goto
																																																																	BgL_tagzd2141zd2_1432;
																																																															}
																																																													}
																																																												else
																																																													{	/* Ast/private.scm 78 */
																																																														goto
																																																															BgL_tagzd2141zd2_1432;
																																																													}
																																																											}
																																																										else
																																																											{	/* Ast/private.scm 78 */
																																																												goto
																																																													BgL_tagzd2141zd2_1432;
																																																											}
																																																									}
																																																								else
																																																									{	/* Ast/private.scm 78 */
																																																										goto
																																																											BgL_tagzd2141zd2_1432;
																																																									}
																																																							}
																																																						else
																																																							{	/* Ast/private.scm 78 */
																																																								goto
																																																									BgL_tagzd2141zd2_1432;
																																																							}
																																																					}
																																																				}
																																																			}
																																																		}
																																																	else
																																																		{	/* Ast/private.scm 78 */
																																																			goto
																																																				BgL_tagzd2141zd2_1432;
																																																		}
																																																}
																																															}
																																													}
																																												else
																																													{	/* Ast/private.scm 78 */
																																														obj_t
																																															BgL_cdrzd211152zd2_2675;
																																														BgL_cdrzd211152zd2_2675
																																															=
																																															CDR
																																															(BgL_sexpz00_6);
																																														{	/* Ast/private.scm 78 */
																																															obj_t
																																																BgL_cdrzd211158zd2_2676;
																																															BgL_cdrzd211158zd2_2676
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd211152zd2_2675));
																																															if ((CAR(((obj_t) BgL_cdrzd211152zd2_2675)) == CNST_TABLE_REF(((long) 14))))
																																																{	/* Ast/private.scm 78 */
																																																	obj_t
																																																		BgL_cdrzd211164zd2_2679;
																																																	BgL_cdrzd211164zd2_2679
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_cdrzd211158zd2_2676));
																																																	{	/* Ast/private.scm 78 */
																																																		obj_t
																																																			BgL_cdrzd211170zd2_2680;
																																																		BgL_cdrzd211170zd2_2680
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_cdrzd211164zd2_2679));
																																																		if (NULLP(CDR(((obj_t) BgL_cdrzd211170zd2_2680))))
																																																			{	/* Ast/private.scm 78 */
																																																				obj_t
																																																					BgL_arg2376z00_2683;
																																																				obj_t
																																																					BgL_arg2377z00_2684;
																																																				obj_t
																																																					BgL_arg2379z00_2685;
																																																				BgL_arg2376z00_2683
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd211158zd2_2676));
																																																				BgL_arg2377z00_2684
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd211164zd2_2679));
																																																				BgL_arg2379z00_2685
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd211170zd2_2680));
																																																				{
																																																					BgL_sequencez00_bglt
																																																						BgL_auxz00_4898;
																																																					{
																																																						obj_t
																																																							BgL_bodyz00_4901;
																																																						obj_t
																																																							BgL_kwdsz00_4900;
																																																						obj_t
																																																							BgL_typez00_4899;
																																																						BgL_typez00_4899
																																																							=
																																																							BgL_arg2376z00_2683;
																																																						BgL_kwdsz00_4900
																																																							=
																																																							BgL_arg2377z00_2684;
																																																						BgL_bodyz00_4901
																																																							=
																																																							BgL_arg2379z00_2685;
																																																						BgL_bodyz00_1430
																																																							=
																																																							BgL_bodyz00_4901;
																																																						BgL_kwdsz00_1429
																																																							=
																																																							BgL_kwdsz00_4900;
																																																						BgL_typez00_1428
																																																							=
																																																							BgL_typez00_4899;
																																																						goto
																																																							BgL_tagzd2140zd2_1431;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_4898);
																																																				}
																																																			}
																																																		else
																																																			{	/* Ast/private.scm 78 */
																																																				goto
																																																					BgL_tagzd2141zd2_1432;
																																																			}
																																																	}
																																																}
																																															else
																																																{	/* Ast/private.scm 78 */
																																																	goto
																																																		BgL_tagzd2141zd2_1432;
																																																}
																																														}
																																													}
																																											}
																																										else
																																											{	/* Ast/private.scm 78 */
																																												goto
																																													BgL_tagzd2141zd2_1432;
																																											}
																																									}
																																								}
																																							}
																																						else
																																							{	/* Ast/private.scm 78 */
																																								if ((BgL_carzd210922zd2_2599 == CNST_TABLE_REF(((long) 5))))
																																									{	/* Ast/private.scm 78 */
																																										goto
																																											BgL_kapzd210924zd2_2601;
																																									}
																																								else
																																									{	/* Ast/private.scm 78 */
																																										obj_t
																																											BgL_cdrzd211240zd2_2605;
																																										BgL_cdrzd211240zd2_2605
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_cdrzd210914zd2_2598));
																																										if ((CAR(((obj_t) BgL_cdrzd210914zd2_2598)) == CNST_TABLE_REF(((long) 12))))
																																											{	/* Ast/private.scm 78 */
																																												obj_t
																																													BgL_cdrzd211251zd2_2608;
																																												BgL_cdrzd211251zd2_2608
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_cdrzd211240zd2_2605));
																																												{	/* Ast/private.scm 78 */
																																													obj_t
																																														BgL_cdrzd211262zd2_2609;
																																													BgL_cdrzd211262zd2_2609
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd211251zd2_2608));
																																													if (PAIRP(BgL_cdrzd211262zd2_2609))
																																														{	/* Ast/private.scm 78 */
																																															obj_t
																																																BgL_cdrzd211271zd2_2611;
																																															BgL_cdrzd211271zd2_2611
																																																=
																																																CDR
																																																(BgL_cdrzd211262zd2_2609);
																																															if (PAIRP(BgL_cdrzd211271zd2_2611))
																																																{	/* Ast/private.scm 78 */
																																																	obj_t
																																																		BgL_carzd211277zd2_2613;
																																																	obj_t
																																																		BgL_cdrzd211278zd2_2614;
																																																	BgL_carzd211277zd2_2613
																																																		=
																																																		CAR
																																																		(BgL_cdrzd211271zd2_2611);
																																																	BgL_cdrzd211278zd2_2614
																																																		=
																																																		CDR
																																																		(BgL_cdrzd211271zd2_2611);
																																																	if (STRINGP(BgL_carzd211277zd2_2613))
																																																		{	/* Ast/private.scm 78 */
																																																			if (PAIRP(BgL_cdrzd211278zd2_2614))
																																																				{	/* Ast/private.scm 78 */
																																																					obj_t
																																																						BgL_carzd211285zd2_2617;
																																																					obj_t
																																																						BgL_cdrzd211286zd2_2618;
																																																					BgL_carzd211285zd2_2617
																																																						=
																																																						CAR
																																																						(BgL_cdrzd211278zd2_2614);
																																																					BgL_cdrzd211286zd2_2618
																																																						=
																																																						CDR
																																																						(BgL_cdrzd211278zd2_2614);
																																																					if (STRINGP(BgL_carzd211285zd2_2617))
																																																						{	/* Ast/private.scm 78 */
																																																							if (PAIRP(BgL_cdrzd211286zd2_2618))
																																																								{	/* Ast/private.scm 78 */
																																																									obj_t
																																																										BgL_carzd211292zd2_2621;
																																																									BgL_carzd211292zd2_2621
																																																										=
																																																										CAR
																																																										(BgL_cdrzd211286zd2_2618);
																																																									if (BOOLEANP(BgL_carzd211292zd2_2621))
																																																										{	/* Ast/private.scm 78 */
																																																											obj_t
																																																												BgL_arg2335z00_2623;
																																																											obj_t
																																																												BgL_arg2336z00_2624;
																																																											obj_t
																																																												BgL_arg2337z00_2625;
																																																											obj_t
																																																												BgL_arg2338z00_2626;
																																																											BgL_arg2335z00_2623
																																																												=
																																																												CAR
																																																												(
																																																												((obj_t) BgL_cdrzd211240zd2_2605));
																																																											BgL_arg2336z00_2624
																																																												=
																																																												CAR
																																																												(
																																																												((obj_t) BgL_cdrzd211251zd2_2608));
																																																											BgL_arg2337z00_2625
																																																												=
																																																												CAR
																																																												(BgL_cdrzd211262zd2_2609);
																																																											BgL_arg2338z00_2626
																																																												=
																																																												CDR
																																																												(BgL_cdrzd211286zd2_2618);
																																																											{
																																																												BgL_vallocz00_bglt
																																																													BgL_auxz00_4943;
																																																												{
																																																													obj_t
																																																														BgL_restz00_4950;
																																																													obj_t
																																																														BgL_stackzf3zf3_4949;
																																																													obj_t
																																																														BgL_czd2stackzd2fmtz00_4948;
																																																													obj_t
																																																														BgL_czd2heapzd2fmtz00_4947;
																																																													obj_t
																																																														BgL_otypez00_4946;
																																																													obj_t
																																																														BgL_ftypez00_4945;
																																																													obj_t
																																																														BgL_vtypez00_4944;
																																																													BgL_vtypez00_4944
																																																														=
																																																														BgL_arg2335z00_2623;
																																																													BgL_ftypez00_4945
																																																														=
																																																														BgL_arg2336z00_2624;
																																																													BgL_otypez00_4946
																																																														=
																																																														BgL_arg2337z00_2625;
																																																													BgL_czd2heapzd2fmtz00_4947
																																																														=
																																																														BgL_carzd211277zd2_2613;
																																																													BgL_czd2stackzd2fmtz00_4948
																																																														=
																																																														BgL_carzd211285zd2_2617;
																																																													BgL_stackzf3zf3_4949
																																																														=
																																																														BgL_carzd211292zd2_2621;
																																																													BgL_restz00_4950
																																																														=
																																																														BgL_arg2338z00_2626;
																																																													BgL_restz00_1423
																																																														=
																																																														BgL_restz00_4950;
																																																													BgL_stackzf3zf3_1422
																																																														=
																																																														BgL_stackzf3zf3_4949;
																																																													BgL_czd2stackzd2fmtz00_1421
																																																														=
																																																														BgL_czd2stackzd2fmtz00_4948;
																																																													BgL_czd2heapzd2fmtz00_1420
																																																														=
																																																														BgL_czd2heapzd2fmtz00_4947;
																																																													BgL_otypez00_1419
																																																														=
																																																														BgL_otypez00_4946;
																																																													BgL_ftypez00_1418
																																																														=
																																																														BgL_ftypez00_4945;
																																																													BgL_vtypez00_1417
																																																														=
																																																														BgL_vtypez00_4944;
																																																													goto
																																																														BgL_tagzd2138zd2_1424;
																																																												}
																																																												return
																																																													(
																																																													(obj_t)
																																																													BgL_auxz00_4943);
																																																											}
																																																										}
																																																									else
																																																										{	/* Ast/private.scm 78 */
																																																											goto
																																																												BgL_tagzd2141zd2_1432;
																																																										}
																																																								}
																																																							else
																																																								{	/* Ast/private.scm 78 */
																																																									goto
																																																										BgL_tagzd2141zd2_1432;
																																																								}
																																																						}
																																																					else
																																																						{	/* Ast/private.scm 78 */
																																																							goto
																																																								BgL_tagzd2141zd2_1432;
																																																						}
																																																				}
																																																			else
																																																				{	/* Ast/private.scm 78 */
																																																					goto
																																																						BgL_tagzd2141zd2_1432;
																																																				}
																																																		}
																																																	else
																																																		{	/* Ast/private.scm 78 */
																																																			goto
																																																				BgL_tagzd2141zd2_1432;
																																																		}
																																																}
																																															else
																																																{	/* Ast/private.scm 78 */
																																																	goto
																																																		BgL_tagzd2141zd2_1432;
																																																}
																																														}
																																													else
																																														{	/* Ast/private.scm 78 */
																																															goto
																																																BgL_tagzd2141zd2_1432;
																																														}
																																												}
																																											}
																																										else
																																											{	/* Ast/private.scm 78 */
																																												obj_t
																																													BgL_cdrzd211399zd2_2627;
																																												BgL_cdrzd211399zd2_2627
																																													=
																																													CDR
																																													(BgL_sexpz00_6);
																																												{	/* Ast/private.scm 78 */
																																													obj_t
																																														BgL_cdrzd211406zd2_2628;
																																													BgL_cdrzd211406zd2_2628
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd211399zd2_2627));
																																													if ((CAR(((obj_t) BgL_cdrzd211399zd2_2627)) == CNST_TABLE_REF(((long) 14))))
																																														{	/* Ast/private.scm 78 */
																																															obj_t
																																																BgL_cdrzd211413zd2_2631;
																																															BgL_cdrzd211413zd2_2631
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd211406zd2_2628));
																																															{	/* Ast/private.scm 78 */
																																																obj_t
																																																	BgL_cdrzd211420zd2_2632;
																																																BgL_cdrzd211420zd2_2632
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_cdrzd211413zd2_2631));
																																																if (PAIRP(BgL_cdrzd211420zd2_2632))
																																																	{	/* Ast/private.scm 78 */
																																																		if (NULLP(CDR(BgL_cdrzd211420zd2_2632)))
																																																			{	/* Ast/private.scm 78 */
																																																				obj_t
																																																					BgL_arg2345z00_2636;
																																																				obj_t
																																																					BgL_arg2346z00_2637;
																																																				obj_t
																																																					BgL_arg2347z00_2638;
																																																				BgL_arg2345z00_2636
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd211406zd2_2628));
																																																				BgL_arg2346z00_2637
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd211413zd2_2631));
																																																				BgL_arg2347z00_2638
																																																					=
																																																					CAR
																																																					(BgL_cdrzd211420zd2_2632);
																																																				{
																																																					BgL_sequencez00_bglt
																																																						BgL_auxz00_4974;
																																																					{
																																																						obj_t
																																																							BgL_bodyz00_4977;
																																																						obj_t
																																																							BgL_kwdsz00_4976;
																																																						obj_t
																																																							BgL_typez00_4975;
																																																						BgL_typez00_4975
																																																							=
																																																							BgL_arg2345z00_2636;
																																																						BgL_kwdsz00_4976
																																																							=
																																																							BgL_arg2346z00_2637;
																																																						BgL_bodyz00_4977
																																																							=
																																																							BgL_arg2347z00_2638;
																																																						BgL_bodyz00_1430
																																																							=
																																																							BgL_bodyz00_4977;
																																																						BgL_kwdsz00_1429
																																																							=
																																																							BgL_kwdsz00_4976;
																																																						BgL_typez00_1428
																																																							=
																																																							BgL_typez00_4975;
																																																						goto
																																																							BgL_tagzd2140zd2_1431;
																																																					}
																																																					return
																																																						(
																																																						(obj_t)
																																																						BgL_auxz00_4974);
																																																				}
																																																			}
																																																		else
																																																			{	/* Ast/private.scm 78 */
																																																				goto
																																																					BgL_tagzd2141zd2_1432;
																																																			}
																																																	}
																																																else
																																																	{	/* Ast/private.scm 78 */
																																																		goto
																																																			BgL_tagzd2141zd2_1432;
																																																	}
																																															}
																																														}
																																													else
																																														{	/* Ast/private.scm 78 */
																																															goto
																																																BgL_tagzd2141zd2_1432;
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
																								else
																									{	/* Ast/private.scm 78 */
																										goto BgL_tagzd2141zd2_1432;
																									}
																							}
																						else
																							{	/* Ast/private.scm 78 */
																								goto BgL_tagzd2141zd2_1432;
																							}
																					}
																				else
																					{	/* Ast/private.scm 78 */
																						if (
																							(BgL_carzd29148zd2_2099 ==
																								CNST_TABLE_REF(((long) 17))))
																							{	/* Ast/private.scm 78 */
																								goto BgL_kapzd29150zd2_2101;
																							}
																						else
																							{	/* Ast/private.scm 78 */
																								obj_t BgL_cdrzd211613zd2_2104;

																								BgL_cdrzd211613zd2_2104 =
																									CDR(BgL_sexpz00_6);
																								{	/* Ast/private.scm 78 */
																									obj_t BgL_cdrzd211620zd2_2105;

																									BgL_cdrzd211620zd2_2105 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd211613zd2_2104));
																									if ((CAR(((obj_t)
																													BgL_cdrzd211613zd2_2104))
																											==
																											CNST_TABLE_REF(((long)
																													11))))
																										{	/* Ast/private.scm 78 */
																											if (PAIRP
																												(BgL_cdrzd211620zd2_2105))
																												{	/* Ast/private.scm 78 */
																													obj_t
																														BgL_cdrzd211627zd2_2109;
																													BgL_cdrzd211627zd2_2109
																														=
																														CDR
																														(BgL_cdrzd211620zd2_2105);
																													if (PAIRP
																														(BgL_cdrzd211627zd2_2109))
																														{	/* Ast/private.scm 78 */
																															obj_t
																																BgL_cdrzd211634zd2_2111;
																															BgL_cdrzd211634zd2_2111
																																=
																																CDR
																																(BgL_cdrzd211627zd2_2109);
																															if (PAIRP
																																(BgL_cdrzd211634zd2_2111))
																																{	/* Ast/private.scm 78 */
																																	obj_t
																																		BgL_cdrzd211640zd2_2113;
																																	BgL_cdrzd211640zd2_2113
																																		=
																																		CDR
																																		(BgL_cdrzd211634zd2_2111);
																																	if (PAIRP
																																		(BgL_cdrzd211640zd2_2113))
																																		{	/* Ast/private.scm 78 */
																																			obj_t
																																				BgL_carzd211644zd2_2115;
																																			obj_t
																																				BgL_cdrzd211645zd2_2116;
																																			BgL_carzd211644zd2_2115
																																				=
																																				CAR
																																				(BgL_cdrzd211640zd2_2113);
																																			BgL_cdrzd211645zd2_2116
																																				=
																																				CDR
																																				(BgL_cdrzd211640zd2_2113);
																																			if (STRINGP(BgL_carzd211644zd2_2115))
																																				{	/* Ast/private.scm 78 */
																																					if (PAIRP(BgL_cdrzd211645zd2_2116))
																																						{	/* Ast/private.scm 78 */
																																							if (NULLP(CDR(BgL_cdrzd211645zd2_2116)))
																																								{	/* Ast/private.scm 78 */
																																									obj_t
																																										BgL_arg2033z00_2121;
																																									obj_t
																																										BgL_arg2034z00_2122;
																																									obj_t
																																										BgL_arg2035z00_2123;
																																									obj_t
																																										BgL_arg2036z00_2124;
																																									BgL_arg2033z00_2121
																																										=
																																										CAR
																																										(BgL_cdrzd211620zd2_2105);
																																									BgL_arg2034z00_2122
																																										=
																																										CAR
																																										(BgL_cdrzd211627zd2_2109);
																																									BgL_arg2035z00_2123
																																										=
																																										CAR
																																										(BgL_cdrzd211634zd2_2111);
																																									BgL_arg2036z00_2124
																																										=
																																										CAR
																																										(BgL_cdrzd211645zd2_2116);
																																									{
																																										BgL_vlengthz00_bglt
																																											BgL_auxz00_5014;
																																										{
																																											obj_t
																																												BgL_expz00_5019;
																																											obj_t
																																												BgL_czd2fmtzd2_5018;
																																											obj_t
																																												BgL_otypez00_5017;
																																											obj_t
																																												BgL_ftypez00_5016;
																																											obj_t
																																												BgL_vtypez00_5015;
																																											BgL_vtypez00_5015
																																												=
																																												BgL_arg2033z00_2121;
																																											BgL_ftypez00_5016
																																												=
																																												BgL_arg2034z00_2122;
																																											BgL_otypez00_5017
																																												=
																																												BgL_arg2035z00_2123;
																																											BgL_czd2fmtzd2_5018
																																												=
																																												BgL_carzd211644zd2_2115;
																																											BgL_expz00_5019
																																												=
																																												BgL_arg2036z00_2124;
																																											BgL_expz00_1403
																																												=
																																												BgL_expz00_5019;
																																											BgL_czd2fmtzd2_1402
																																												=
																																												BgL_czd2fmtzd2_5018;
																																											BgL_otypez00_1401
																																												=
																																												BgL_otypez00_5017;
																																											BgL_ftypez00_1400
																																												=
																																												BgL_ftypez00_5016;
																																											BgL_vtypez00_1399
																																												=
																																												BgL_vtypez00_5015;
																																											goto
																																												BgL_tagzd2135zd2_1404;
																																										}
																																										return
																																											(
																																											(obj_t)
																																											BgL_auxz00_5014);
																																									}
																																								}
																																							else
																																								{	/* Ast/private.scm 78 */
																																									goto
																																										BgL_tagzd2141zd2_1432;
																																								}
																																						}
																																					else
																																						{	/* Ast/private.scm 78 */
																																							goto
																																								BgL_tagzd2141zd2_1432;
																																						}
																																				}
																																			else
																																				{	/* Ast/private.scm 78 */
																																					goto
																																						BgL_tagzd2141zd2_1432;
																																				}
																																		}
																																	else
																																		{	/* Ast/private.scm 78 */
																																			goto
																																				BgL_tagzd2141zd2_1432;
																																		}
																																}
																															else
																																{	/* Ast/private.scm 78 */
																																	goto
																																		BgL_tagzd2141zd2_1432;
																																}
																														}
																													else
																														{	/* Ast/private.scm 78 */
																															goto
																																BgL_tagzd2141zd2_1432;
																														}
																												}
																											else
																												{	/* Ast/private.scm 78 */
																													goto
																														BgL_tagzd2141zd2_1432;
																												}
																										}
																									else
																										{	/* Ast/private.scm 78 */
																											obj_t
																												BgL_carzd212992zd2_2235;
																											obj_t
																												BgL_cdrzd212993zd2_2236;
																											BgL_carzd212992zd2_2235 =
																												CAR(((obj_t)
																													BgL_cdrzd211613zd2_2104));
																											BgL_cdrzd212993zd2_2236 =
																												CDR(((obj_t)
																													BgL_cdrzd211613zd2_2104));
																											{

																												if (
																													(BgL_carzd212992zd2_2235
																														==
																														CNST_TABLE_REF((
																																(long) 15))))
																													{	/* Ast/private.scm 78 */
																													BgL_kapzd212994zd2_2237:
																														if (PAIRP
																															(BgL_cdrzd212993zd2_2236))
																															{	/* Ast/private.scm 78 */
																																obj_t
																																	BgL_cdrzd213001zd2_2361;
																																BgL_cdrzd213001zd2_2361
																																	=
																																	CDR
																																	(BgL_cdrzd212993zd2_2236);
																																if (PAIRP
																																	(BgL_cdrzd213001zd2_2361))
																																	{	/* Ast/private.scm 78 */
																																		obj_t
																																			BgL_cdrzd213008zd2_2363;
																																		BgL_cdrzd213008zd2_2363
																																			=
																																			CDR
																																			(BgL_cdrzd213001zd2_2361);
																																		if (PAIRP
																																			(BgL_cdrzd213008zd2_2363))
																																			{	/* Ast/private.scm 78 */
																																				obj_t
																																					BgL_cdrzd213014zd2_2365;
																																				BgL_cdrzd213014zd2_2365
																																					=
																																					CDR
																																					(BgL_cdrzd213008zd2_2363);
																																				if (PAIRP(BgL_cdrzd213014zd2_2365))
																																					{	/* Ast/private.scm 78 */
																																						obj_t
																																							BgL_carzd213018zd2_2367;
																																						BgL_carzd213018zd2_2367
																																							=
																																							CAR
																																							(BgL_cdrzd213014zd2_2365);
																																						if (STRINGP(BgL_carzd213018zd2_2367))
																																							{	/* Ast/private.scm 78 */
																																								obj_t
																																									BgL_arg2188z00_2369;
																																								obj_t
																																									BgL_arg2189z00_2370;
																																								obj_t
																																									BgL_arg2190z00_2371;
																																								obj_t
																																									BgL_arg2191z00_2372;
																																								BgL_arg2188z00_2369
																																									=
																																									CAR
																																									(BgL_cdrzd212993zd2_2236);
																																								BgL_arg2189z00_2370
																																									=
																																									CAR
																																									(BgL_cdrzd213001zd2_2361);
																																								BgL_arg2190z00_2371
																																									=
																																									CAR
																																									(BgL_cdrzd213008zd2_2363);
																																								BgL_arg2191z00_2372
																																									=
																																									CDR
																																									(BgL_cdrzd213014zd2_2365);
																																								{
																																									BgL_vrefz00_bglt
																																										BgL_auxz00_5046;
																																									{
																																										obj_t
																																											BgL_restz00_5051;
																																										obj_t
																																											BgL_czd2fmtzd2_5050;
																																										obj_t
																																											BgL_otypez00_5049;
																																										obj_t
																																											BgL_ftypez00_5048;
																																										obj_t
																																											BgL_vtypez00_5047;
																																										BgL_vtypez00_5047
																																											=
																																											BgL_arg2188z00_2369;
																																										BgL_ftypez00_5048
																																											=
																																											BgL_arg2189z00_2370;
																																										BgL_otypez00_5049
																																											=
																																											BgL_arg2190z00_2371;
																																										BgL_czd2fmtzd2_5050
																																											=
																																											BgL_carzd213018zd2_2367;
																																										BgL_restz00_5051
																																											=
																																											BgL_arg2191z00_2372;
																																										BgL_restz00_1409
																																											=
																																											BgL_restz00_5051;
																																										BgL_czd2fmtzd2_1408
																																											=
																																											BgL_czd2fmtzd2_5050;
																																										BgL_otypez00_1407
																																											=
																																											BgL_otypez00_5049;
																																										BgL_ftypez00_1406
																																											=
																																											BgL_ftypez00_5048;
																																										BgL_vtypez00_1405
																																											=
																																											BgL_vtypez00_5047;
																																										goto
																																											BgL_tagzd2136zd2_1410;
																																									}
																																									return
																																										(
																																										(obj_t)
																																										BgL_auxz00_5046);
																																								}
																																							}
																																						else
																																							{	/* Ast/private.scm 78 */
																																								obj_t
																																									BgL_cdrzd213045zd2_2373;
																																								BgL_cdrzd213045zd2_2373
																																									=
																																									CDR
																																									(BgL_sexpz00_6);
																																								{	/* Ast/private.scm 78 */
																																									obj_t
																																										BgL_carzd213054zd2_2374;
																																									obj_t
																																										BgL_cdrzd213055zd2_2375;
																																									BgL_carzd213054zd2_2374
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd213045zd2_2373));
																																									BgL_cdrzd213055zd2_2375
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd213045zd2_2373));
																																									{

																																										if ((BgL_carzd213054zd2_2374 == CNST_TABLE_REF(((long) 13))))
																																											{	/* Ast/private.scm 78 */
																																											BgL_kapzd213056zd2_2376:
																																												{	/* Ast/private.scm 78 */
																																													obj_t
																																														BgL_cdrzd213066zd2_2401;
																																													BgL_cdrzd213066zd2_2401
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd213055zd2_2375));
																																													{	/* Ast/private.scm 78 */
																																														obj_t
																																															BgL_cdrzd213076zd2_2402;
																																														BgL_cdrzd213076zd2_2402
																																															=
																																															CDR
																																															(
																																															((obj_t) BgL_cdrzd213066zd2_2401));
																																														{	/* Ast/private.scm 78 */
																																															obj_t
																																																BgL_cdrzd213084zd2_2403;
																																															BgL_cdrzd213084zd2_2403
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd213076zd2_2402));
																																															{	/* Ast/private.scm 78 */
																																																obj_t
																																																	BgL_carzd213089zd2_2404;
																																																BgL_carzd213089zd2_2404
																																																	=
																																																	CAR
																																																	(
																																																	((obj_t) BgL_cdrzd213084zd2_2403));
																																																if (STRINGP(BgL_carzd213089zd2_2404))
																																																	{	/* Ast/private.scm 78 */
																																																		obj_t
																																																			BgL_arg2207z00_2406;
																																																		obj_t
																																																			BgL_arg2208z00_2407;
																																																		obj_t
																																																			BgL_arg2209z00_2408;
																																																		obj_t
																																																			BgL_arg2210z00_2409;
																																																		BgL_arg2207z00_2406
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd213055zd2_2375));
																																																		BgL_arg2208z00_2407
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd213066zd2_2401));
																																																		BgL_arg2209z00_2408
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd213076zd2_2402));
																																																		BgL_arg2210z00_2409
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_cdrzd213084zd2_2403));
																																																		{
																																																			BgL_vsetz12z12_bglt
																																																				BgL_auxz00_5079;
																																																			{
																																																				obj_t
																																																					BgL_restz00_5084;
																																																				obj_t
																																																					BgL_czd2fmtzd2_5083;
																																																				obj_t
																																																					BgL_otypez00_5082;
																																																				obj_t
																																																					BgL_ftypez00_5081;
																																																				obj_t
																																																					BgL_vtypez00_5080;
																																																				BgL_vtypez00_5080
																																																					=
																																																					BgL_arg2207z00_2406;
																																																				BgL_ftypez00_5081
																																																					=
																																																					BgL_arg2208z00_2407;
																																																				BgL_otypez00_5082
																																																					=
																																																					BgL_arg2209z00_2408;
																																																				BgL_czd2fmtzd2_5083
																																																					=
																																																					BgL_carzd213089zd2_2404;
																																																				BgL_restz00_5084
																																																					=
																																																					BgL_arg2210z00_2409;
																																																				BgL_restz00_1415
																																																					=
																																																					BgL_restz00_5084;
																																																				BgL_czd2fmtzd2_1414
																																																					=
																																																					BgL_czd2fmtzd2_5083;
																																																				BgL_otypez00_1413
																																																					=
																																																					BgL_otypez00_5082;
																																																				BgL_ftypez00_1412
																																																					=
																																																					BgL_ftypez00_5081;
																																																				BgL_vtypez00_1411
																																																					=
																																																					BgL_vtypez00_5080;
																																																				goto
																																																					BgL_tagzd2137zd2_1416;
																																																			}
																																																			return
																																																				(
																																																				(obj_t)
																																																				BgL_auxz00_5079);
																																																		}
																																																	}
																																																else
																																																	{	/* Ast/private.scm 78 */
																																																		obj_t
																																																			BgL_cdrzd213117zd2_2410;
																																																		BgL_cdrzd213117zd2_2410
																																																			=
																																																			CDR
																																																			(BgL_sexpz00_6);
																																																		{	/* Ast/private.scm 78 */
																																																			obj_t
																																																				BgL_cdrzd213129zd2_2411;
																																																			BgL_cdrzd213129zd2_2411
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_cdrzd213117zd2_2410));
																																																			if ((CAR(((obj_t) BgL_cdrzd213117zd2_2410)) == CNST_TABLE_REF(((long) 12))))
																																																				{	/* Ast/private.scm 78 */
																																																					obj_t
																																																						BgL_cdrzd213141zd2_2414;
																																																					BgL_cdrzd213141zd2_2414
																																																						=
																																																						CDR
																																																						(
																																																						((obj_t) BgL_cdrzd213129zd2_2411));
																																																					{	/* Ast/private.scm 78 */
																																																						obj_t
																																																							BgL_cdrzd213153zd2_2415;
																																																						BgL_cdrzd213153zd2_2415
																																																							=
																																																							CDR
																																																							(
																																																							((obj_t) BgL_cdrzd213141zd2_2414));
																																																						{	/* Ast/private.scm 78 */
																																																							obj_t
																																																								BgL_cdrzd213163zd2_2416;
																																																							BgL_cdrzd213163zd2_2416
																																																								=
																																																								CDR
																																																								(
																																																								((obj_t) BgL_cdrzd213153zd2_2415));
																																																							{	/* Ast/private.scm 78 */
																																																								obj_t
																																																									BgL_carzd213170zd2_2417;
																																																								obj_t
																																																									BgL_cdrzd213171zd2_2418;
																																																								BgL_carzd213170zd2_2417
																																																									=
																																																									CAR
																																																									(
																																																									((obj_t) BgL_cdrzd213163zd2_2416));
																																																								BgL_cdrzd213171zd2_2418
																																																									=
																																																									CDR
																																																									(
																																																									((obj_t) BgL_cdrzd213163zd2_2416));
																																																								if (STRINGP(BgL_carzd213170zd2_2417))
																																																									{	/* Ast/private.scm 78 */
																																																										if (PAIRP(BgL_cdrzd213171zd2_2418))
																																																											{	/* Ast/private.scm 78 */
																																																												obj_t
																																																													BgL_carzd213178zd2_2421;
																																																												obj_t
																																																													BgL_cdrzd213179zd2_2422;
																																																												BgL_carzd213178zd2_2421
																																																													=
																																																													CAR
																																																													(BgL_cdrzd213171zd2_2418);
																																																												BgL_cdrzd213179zd2_2422
																																																													=
																																																													CDR
																																																													(BgL_cdrzd213171zd2_2418);
																																																												if (STRINGP(BgL_carzd213178zd2_2421))
																																																													{	/* Ast/private.scm 78 */
																																																														if (PAIRP(BgL_cdrzd213179zd2_2422))
																																																															{	/* Ast/private.scm 78 */
																																																																obj_t
																																																																	BgL_carzd213185zd2_2425;
																																																																BgL_carzd213185zd2_2425
																																																																	=
																																																																	CAR
																																																																	(BgL_cdrzd213179zd2_2422);
																																																																if (BOOLEANP(BgL_carzd213185zd2_2425))
																																																																	{	/* Ast/private.scm 78 */
																																																																		obj_t
																																																																			BgL_arg2218z00_2427;
																																																																		obj_t
																																																																			BgL_arg2219z00_2428;
																																																																		obj_t
																																																																			BgL_arg2220z00_2429;
																																																																		obj_t
																																																																			BgL_arg2221z00_2430;
																																																																		BgL_arg2218z00_2427
																																																																			=
																																																																			CAR
																																																																			(
																																																																			((obj_t) BgL_cdrzd213129zd2_2411));
																																																																		BgL_arg2219z00_2428
																																																																			=
																																																																			CAR
																																																																			(
																																																																			((obj_t) BgL_cdrzd213141zd2_2414));
																																																																		BgL_arg2220z00_2429
																																																																			=
																																																																			CAR
																																																																			(
																																																																			((obj_t) BgL_cdrzd213153zd2_2415));
																																																																		BgL_arg2221z00_2430
																																																																			=
																																																																			CDR
																																																																			(BgL_cdrzd213179zd2_2422);
																																																																		{
																																																																			BgL_vallocz00_bglt
																																																																				BgL_auxz00_5124;
																																																																			{
																																																																				obj_t
																																																																					BgL_restz00_5131;
																																																																				obj_t
																																																																					BgL_stackzf3zf3_5130;
																																																																				obj_t
																																																																					BgL_czd2stackzd2fmtz00_5129;
																																																																				obj_t
																																																																					BgL_czd2heapzd2fmtz00_5128;
																																																																				obj_t
																																																																					BgL_otypez00_5127;
																																																																				obj_t
																																																																					BgL_ftypez00_5126;
																																																																				obj_t
																																																																					BgL_vtypez00_5125;
																																																																				BgL_vtypez00_5125
																																																																					=
																																																																					BgL_arg2218z00_2427;
																																																																				BgL_ftypez00_5126
																																																																					=
																																																																					BgL_arg2219z00_2428;
																																																																				BgL_otypez00_5127
																																																																					=
																																																																					BgL_arg2220z00_2429;
																																																																				BgL_czd2heapzd2fmtz00_5128
																																																																					=
																																																																					BgL_carzd213170zd2_2417;
																																																																				BgL_czd2stackzd2fmtz00_5129
																																																																					=
																																																																					BgL_carzd213178zd2_2421;
																																																																				BgL_stackzf3zf3_5130
																																																																					=
																																																																					BgL_carzd213185zd2_2425;
																																																																				BgL_restz00_5131
																																																																					=
																																																																					BgL_arg2221z00_2430;
																																																																				BgL_restz00_1423
																																																																					=
																																																																					BgL_restz00_5131;
																																																																				BgL_stackzf3zf3_1422
																																																																					=
																																																																					BgL_stackzf3zf3_5130;
																																																																				BgL_czd2stackzd2fmtz00_1421
																																																																					=
																																																																					BgL_czd2stackzd2fmtz00_5129;
																																																																				BgL_czd2heapzd2fmtz00_1420
																																																																					=
																																																																					BgL_czd2heapzd2fmtz00_5128;
																																																																				BgL_otypez00_1419
																																																																					=
																																																																					BgL_otypez00_5127;
																																																																				BgL_ftypez00_1418
																																																																					=
																																																																					BgL_ftypez00_5126;
																																																																				BgL_vtypez00_1417
																																																																					=
																																																																					BgL_vtypez00_5125;
																																																																				goto
																																																																					BgL_tagzd2138zd2_1424;
																																																																			}
																																																																			return
																																																																				(
																																																																				(obj_t)
																																																																				BgL_auxz00_5124);
																																																																		}
																																																																	}
																																																																else
																																																																	{	/* Ast/private.scm 78 */
																																																																		goto
																																																																			BgL_tagzd2141zd2_1432;
																																																																	}
																																																															}
																																																														else
																																																															{	/* Ast/private.scm 78 */
																																																																goto
																																																																	BgL_tagzd2141zd2_1432;
																																																															}
																																																													}
																																																												else
																																																													{	/* Ast/private.scm 78 */
																																																														goto
																																																															BgL_tagzd2141zd2_1432;
																																																													}
																																																											}
																																																										else
																																																											{	/* Ast/private.scm 78 */
																																																												goto
																																																													BgL_tagzd2141zd2_1432;
																																																											}
																																																									}
																																																								else
																																																									{	/* Ast/private.scm 78 */
																																																										goto
																																																											BgL_tagzd2141zd2_1432;
																																																									}
																																																							}
																																																						}
																																																					}
																																																				}
																																																			else
																																																				{	/* Ast/private.scm 78 */
																																																					goto
																																																						BgL_tagzd2141zd2_1432;
																																																				}
																																																		}
																																																	}
																																															}
																																														}
																																													}
																																												}
																																											}
																																										else
																																											{	/* Ast/private.scm 78 */
																																												if ((BgL_carzd213054zd2_2374 == CNST_TABLE_REF(((long) 5))))
																																													{	/* Ast/private.scm 78 */
																																														goto
																																															BgL_kapzd213056zd2_2376;
																																													}
																																												else
																																													{	/* Ast/private.scm 78 */
																																														obj_t
																																															BgL_cdrzd213302zd2_2380;
																																														BgL_cdrzd213302zd2_2380
																																															=
																																															CDR
																																															(
																																															((obj_t) BgL_cdrzd213045zd2_2373));
																																														if ((CAR(((obj_t) BgL_cdrzd213045zd2_2373)) == CNST_TABLE_REF(((long) 12))))
																																															{	/* Ast/private.scm 78 */
																																																obj_t
																																																	BgL_cdrzd213314zd2_2383;
																																																BgL_cdrzd213314zd2_2383
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_cdrzd213302zd2_2380));
																																																{	/* Ast/private.scm 78 */
																																																	obj_t
																																																		BgL_cdrzd213326zd2_2384;
																																																	BgL_cdrzd213326zd2_2384
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_cdrzd213314zd2_2383));
																																																	{	/* Ast/private.scm 78 */
																																																		obj_t
																																																			BgL_cdrzd213336zd2_2385;
																																																		BgL_cdrzd213336zd2_2385
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_cdrzd213326zd2_2384));
																																																		{	/* Ast/private.scm 78 */
																																																			obj_t
																																																				BgL_carzd213343zd2_2386;
																																																			obj_t
																																																				BgL_cdrzd213344zd2_2387;
																																																			BgL_carzd213343zd2_2386
																																																				=
																																																				CAR
																																																				(
																																																				((obj_t) BgL_cdrzd213336zd2_2385));
																																																			BgL_cdrzd213344zd2_2387
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_cdrzd213336zd2_2385));
																																																			if (STRINGP(BgL_carzd213343zd2_2386))
																																																				{	/* Ast/private.scm 78 */
																																																					if (PAIRP(BgL_cdrzd213344zd2_2387))
																																																						{	/* Ast/private.scm 78 */
																																																							obj_t
																																																								BgL_carzd213351zd2_2390;
																																																							obj_t
																																																								BgL_cdrzd213352zd2_2391;
																																																							BgL_carzd213351zd2_2390
																																																								=
																																																								CAR
																																																								(BgL_cdrzd213344zd2_2387);
																																																							BgL_cdrzd213352zd2_2391
																																																								=
																																																								CDR
																																																								(BgL_cdrzd213344zd2_2387);
																																																							if (STRINGP(BgL_carzd213351zd2_2390))
																																																								{	/* Ast/private.scm 78 */
																																																									if (PAIRP(BgL_cdrzd213352zd2_2391))
																																																										{	/* Ast/private.scm 78 */
																																																											obj_t
																																																												BgL_carzd213358zd2_2394;
																																																											BgL_carzd213358zd2_2394
																																																												=
																																																												CAR
																																																												(BgL_cdrzd213352zd2_2391);
																																																											if (BOOLEANP(BgL_carzd213358zd2_2394))
																																																												{	/* Ast/private.scm 78 */
																																																													obj_t
																																																														BgL_arg2201z00_2396;
																																																													obj_t
																																																														BgL_arg2202z00_2397;
																																																													obj_t
																																																														BgL_arg2203z00_2398;
																																																													obj_t
																																																														BgL_arg2204z00_2399;
																																																													BgL_arg2201z00_2396
																																																														=
																																																														CAR
																																																														(
																																																														((obj_t) BgL_cdrzd213302zd2_2380));
																																																													BgL_arg2202z00_2397
																																																														=
																																																														CAR
																																																														(
																																																														((obj_t) BgL_cdrzd213314zd2_2383));
																																																													BgL_arg2203z00_2398
																																																														=
																																																														CAR
																																																														(
																																																														((obj_t) BgL_cdrzd213326zd2_2384));
																																																													BgL_arg2204z00_2399
																																																														=
																																																														CDR
																																																														(BgL_cdrzd213352zd2_2391);
																																																													{
																																																														BgL_vallocz00_bglt
																																																															BgL_auxz00_5173;
																																																														{
																																																															obj_t
																																																																BgL_restz00_5180;
																																																															obj_t
																																																																BgL_stackzf3zf3_5179;
																																																															obj_t
																																																																BgL_czd2stackzd2fmtz00_5178;
																																																															obj_t
																																																																BgL_czd2heapzd2fmtz00_5177;
																																																															obj_t
																																																																BgL_otypez00_5176;
																																																															obj_t
																																																																BgL_ftypez00_5175;
																																																															obj_t
																																																																BgL_vtypez00_5174;
																																																															BgL_vtypez00_5174
																																																																=
																																																																BgL_arg2201z00_2396;
																																																															BgL_ftypez00_5175
																																																																=
																																																																BgL_arg2202z00_2397;
																																																															BgL_otypez00_5176
																																																																=
																																																																BgL_arg2203z00_2398;
																																																															BgL_czd2heapzd2fmtz00_5177
																																																																=
																																																																BgL_carzd213343zd2_2386;
																																																															BgL_czd2stackzd2fmtz00_5178
																																																																=
																																																																BgL_carzd213351zd2_2390;
																																																															BgL_stackzf3zf3_5179
																																																																=
																																																																BgL_carzd213358zd2_2394;
																																																															BgL_restz00_5180
																																																																=
																																																																BgL_arg2204z00_2399;
																																																															BgL_restz00_1423
																																																																=
																																																																BgL_restz00_5180;
																																																															BgL_stackzf3zf3_1422
																																																																=
																																																																BgL_stackzf3zf3_5179;
																																																															BgL_czd2stackzd2fmtz00_1421
																																																																=
																																																																BgL_czd2stackzd2fmtz00_5178;
																																																															BgL_czd2heapzd2fmtz00_1420
																																																																=
																																																																BgL_czd2heapzd2fmtz00_5177;
																																																															BgL_otypez00_1419
																																																																=
																																																																BgL_otypez00_5176;
																																																															BgL_ftypez00_1418
																																																																=
																																																																BgL_ftypez00_5175;
																																																															BgL_vtypez00_1417
																																																																=
																																																																BgL_vtypez00_5174;
																																																															goto
																																																																BgL_tagzd2138zd2_1424;
																																																														}
																																																														return
																																																															(
																																																															(obj_t)
																																																															BgL_auxz00_5173);
																																																													}
																																																												}
																																																											else
																																																												{	/* Ast/private.scm 78 */
																																																													goto
																																																														BgL_tagzd2141zd2_1432;
																																																												}
																																																										}
																																																									else
																																																										{	/* Ast/private.scm 78 */
																																																											goto
																																																												BgL_tagzd2141zd2_1432;
																																																										}
																																																								}
																																																							else
																																																								{	/* Ast/private.scm 78 */
																																																									goto
																																																										BgL_tagzd2141zd2_1432;
																																																								}
																																																						}
																																																					else
																																																						{	/* Ast/private.scm 78 */
																																																							goto
																																																								BgL_tagzd2141zd2_1432;
																																																						}
																																																				}
																																																			else
																																																				{	/* Ast/private.scm 78 */
																																																					goto
																																																						BgL_tagzd2141zd2_1432;
																																																				}
																																																		}
																																																	}
																																																}
																																															}
																																														else
																																															{	/* Ast/private.scm 78 */
																																																goto
																																																	BgL_tagzd2141zd2_1432;
																																															}
																																													}
																																											}
																																									}
																																								}
																																							}
																																					}
																																				else
																																					{	/* Ast/private.scm 78 */
																																						obj_t
																																							BgL_cdrzd213500zd2_2432;
																																						BgL_cdrzd213500zd2_2432
																																							=
																																							CDR
																																							(BgL_sexpz00_6);
																																						{	/* Ast/private.scm 78 */
																																							obj_t
																																								BgL_cdrzd213508zd2_2433;
																																							BgL_cdrzd213508zd2_2433
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_cdrzd213500zd2_2432));
																																							if ((CAR(((obj_t) BgL_cdrzd213500zd2_2432)) == CNST_TABLE_REF(((long) 14))))
																																								{	/* Ast/private.scm 78 */
																																									obj_t
																																										BgL_cdrzd213516zd2_2436;
																																									BgL_cdrzd213516zd2_2436
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd213508zd2_2433));
																																									{	/* Ast/private.scm 78 */
																																										obj_t
																																											BgL_cdrzd213524zd2_2437;
																																										BgL_cdrzd213524zd2_2437
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_cdrzd213516zd2_2436));
																																										if (NULLP(CDR(((obj_t) BgL_cdrzd213524zd2_2437))))
																																											{	/* Ast/private.scm 78 */
																																												obj_t
																																													BgL_arg2227z00_2440;
																																												obj_t
																																													BgL_arg2228z00_2441;
																																												obj_t
																																													BgL_arg2229z00_2442;
																																												BgL_arg2227z00_2440
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd213508zd2_2433));
																																												BgL_arg2228z00_2441
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd213516zd2_2436));
																																												BgL_arg2229z00_2442
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_cdrzd213524zd2_2437));
																																												{
																																													BgL_sequencez00_bglt
																																														BgL_auxz00_5204;
																																													{
																																														obj_t
																																															BgL_bodyz00_5207;
																																														obj_t
																																															BgL_kwdsz00_5206;
																																														obj_t
																																															BgL_typez00_5205;
																																														BgL_typez00_5205
																																															=
																																															BgL_arg2227z00_2440;
																																														BgL_kwdsz00_5206
																																															=
																																															BgL_arg2228z00_2441;
																																														BgL_bodyz00_5207
																																															=
																																															BgL_arg2229z00_2442;
																																														BgL_bodyz00_1430
																																															=
																																															BgL_bodyz00_5207;
																																														BgL_kwdsz00_1429
																																															=
																																															BgL_kwdsz00_5206;
																																														BgL_typez00_1428
																																															=
																																															BgL_typez00_5205;
																																														goto
																																															BgL_tagzd2140zd2_1431;
																																													}
																																													return
																																														(
																																														(obj_t)
																																														BgL_auxz00_5204);
																																												}
																																											}
																																										else
																																											{	/* Ast/private.scm 78 */
																																												goto
																																													BgL_tagzd2141zd2_1432;
																																											}
																																									}
																																								}
																																							else
																																								{	/* Ast/private.scm 78 */
																																									goto
																																										BgL_tagzd2141zd2_1432;
																																								}
																																						}
																																					}
																																			}
																																		else
																																			{	/* Ast/private.scm 78 */
																																				obj_t
																																					BgL_cdrzd213581zd2_2445;
																																				BgL_cdrzd213581zd2_2445
																																					=
																																					CDR
																																					(BgL_sexpz00_6);
																																				{	/* Ast/private.scm 78 */
																																					obj_t
																																						BgL_cdrzd213587zd2_2446;
																																					BgL_cdrzd213587zd2_2446
																																						=
																																						CDR(
																																						((obj_t) BgL_cdrzd213581zd2_2445));
																																					if (
																																						(CAR
																																							(((obj_t) BgL_cdrzd213581zd2_2445)) == CNST_TABLE_REF(((long) 18))))
																																						{	/* Ast/private.scm 78 */
																																							obj_t
																																								BgL_cdrzd213593zd2_2449;
																																							BgL_cdrzd213593zd2_2449
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_cdrzd213587zd2_2446));
																																							if (NULLP(CDR(((obj_t) BgL_cdrzd213593zd2_2449))))
																																								{	/* Ast/private.scm 78 */
																																									obj_t
																																										BgL_arg2236z00_2452;
																																									obj_t
																																										BgL_arg2237z00_2453;
																																									BgL_arg2236z00_2452
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd213587zd2_2446));
																																									BgL_arg2237z00_2453
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_cdrzd213593zd2_2449));
																																									{
																																										BgL_sequencez00_bglt
																																											BgL_auxz00_5227;
																																										BgL_typez00_1425
																																											=
																																											BgL_arg2236z00_2452;
																																										BgL_expz00_1426
																																											=
																																											BgL_arg2237z00_2453;
																																									BgL_tagzd2139zd2_1427:
																																										{	/* Ast/private.scm 213 */
																																											BgL_sequencez00_bglt
																																												BgL_new1143z00_2902;
																																											{	/* Ast/private.scm 214 */
																																												BgL_sequencez00_bglt
																																													BgL_new1142z00_2905;
																																												BgL_new1142z00_2905
																																													=
																																													(
																																													(BgL_sequencez00_bglt)
																																													BOBJECT
																																													(GC_MALLOC
																																														(sizeof
																																															(struct
																																																BgL_sequencez00_bgl))));
																																												{	/* Ast/private.scm 214 */
																																													long
																																														BgL_arg2527z00_2906;
																																													{	/* Ast/private.scm 214 */
																																														long
																																															BgL_res2670z00_3260;
																																														BgL_res2670z00_3260
																																															=
																																															BGL_CLASS_INDEX
																																															(BGl_sequencez00zzast_nodez00);
																																														BgL_arg2527z00_2906
																																															=
																																															BgL_res2670z00_3260;
																																													}
																																													BGL_OBJECT_CLASS_NUM_SET
																																														(
																																														((BgL_objectz00_bglt) BgL_new1142z00_2905), BgL_arg2527z00_2906);
																																												}
																																												{	/* Ast/private.scm 214 */
																																													BgL_objectz00_bglt
																																														BgL_tmpz00_5232;
																																													BgL_tmpz00_5232
																																														=
																																														(
																																														(BgL_objectz00_bglt)
																																														BgL_new1142z00_2905);
																																													BGL_OBJECT_WIDENING_SET
																																														(BgL_tmpz00_5232,
																																														BFALSE);
																																												}
																																												((BgL_objectz00_bglt) BgL_new1142z00_2905);
																																												BgL_new1143z00_2902
																																													=
																																													BgL_new1142z00_2905;
																																											}
																																											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1143z00_2902)))->BgL_locz00) = ((obj_t) BgL_locz00_8), BUNSPEC);
																																											((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt) BgL_new1143z00_2902)))->BgL_typez00) = ((BgL_typez00_bglt) BGl_usezd2typez12zc0zztype_envz00(BgL_typez00_1425, BgL_locz00_8)), BUNSPEC);
																																											((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1143z00_2902)))->BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
																																											((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt) BgL_new1143z00_2902)))->BgL_keyz00) = ((obj_t) BINT(((long) -1))), BUNSPEC);
																																											{
																																												obj_t
																																													BgL_auxz00_5246;
																																												{	/* Ast/private.scm 217 */
																																													BgL_nodez00_bglt
																																														BgL_arg2525z00_2903;
																																													BgL_arg2525z00_2903
																																														=
																																														BGl_sexpzd2ze3nodez31zzast_sexpz00
																																														(BgL_expz00_1426,
																																														BgL_stackz00_7,
																																														BgL_locz00_8,
																																														CNST_TABLE_REF
																																														(((long) 3)));
																																													{	/* Ast/private.scm 217 */
																																														obj_t
																																															BgL_list2526z00_2904;
																																														BgL_list2526z00_2904
																																															=
																																															MAKE_YOUNG_PAIR
																																															(
																																															((obj_t) BgL_arg2525z00_2903), BNIL);
																																														BgL_auxz00_5246
																																															=
																																															BgL_list2526z00_2904;
																																												}}
																																												((((BgL_sequencez00_bglt) COBJECT(BgL_new1143z00_2902))->BgL_nodesz00) = ((obj_t) BgL_auxz00_5246), BUNSPEC);
																																											}
																																											((((BgL_sequencez00_bglt) COBJECT(BgL_new1143z00_2902))->BgL_unsafez00) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																																											((((BgL_sequencez00_bglt) COBJECT(BgL_new1143z00_2902))->BgL_metaz00) = ((obj_t) BNIL), BUNSPEC);
																																											BgL_auxz00_5227
																																												=
																																												BgL_new1143z00_2902;
																																										}
																																										return
																																											(
																																											(obj_t)
																																											BgL_auxz00_5227);
																																									}
																																								}
																																							else
																																								{	/* Ast/private.scm 78 */
																																									goto
																																										BgL_tagzd2141zd2_1432;
																																								}
																																						}
																																					else
																																						{	/* Ast/private.scm 78 */
																																							goto
																																								BgL_tagzd2141zd2_1432;
																																						}
																																				}
																																			}
																																	}
																																else
																																	{	/* Ast/private.scm 78 */
																																		goto
																																			BgL_tagzd2141zd2_1432;
																																	}
																															}
																														else
																															{	/* Ast/private.scm 78 */
																																goto
																																	BgL_tagzd2141zd2_1432;
																															}
																													}
																												else
																													{	/* Ast/private.scm 78 */
																														if (
																															(BgL_carzd212992zd2_2235
																																==
																																CNST_TABLE_REF((
																																		(long) 4))))
																															{	/* Ast/private.scm 78 */
																																goto
																																	BgL_kapzd212994zd2_2237;
																															}
																														else
																															{	/* Ast/private.scm 78 */
																																obj_t
																																	BgL_cdrzd213732zd2_2240;
																																BgL_cdrzd213732zd2_2240
																																	=
																																	CDR
																																	(BgL_sexpz00_6);
																																{	/* Ast/private.scm 78 */
																																	obj_t
																																		BgL_carzd213738zd2_2241;
																																	obj_t
																																		BgL_cdrzd213739zd2_2242;
																																	BgL_carzd213738zd2_2241
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd213732zd2_2240));
																																	BgL_cdrzd213739zd2_2242
																																		=
																																		CDR(((obj_t)
																																			BgL_cdrzd213732zd2_2240));
																																	{

																																		if (
																																			(BgL_carzd213738zd2_2241
																																				==
																																				CNST_TABLE_REF
																																				(((long)
																																						13))))
																																			{	/* Ast/private.scm 78 */
																																			BgL_kapzd213740zd2_2243:
																																				if (PAIRP(BgL_cdrzd213739zd2_2242))
																																					{	/* Ast/private.scm 78 */
																																						obj_t
																																							BgL_cdrzd213747zd2_2302;
																																						BgL_cdrzd213747zd2_2302
																																							=
																																							CDR
																																							(BgL_cdrzd213739zd2_2242);
																																						if (PAIRP(BgL_cdrzd213747zd2_2302))
																																							{	/* Ast/private.scm 78 */
																																								obj_t
																																									BgL_cdrzd213754zd2_2304;
																																								BgL_cdrzd213754zd2_2304
																																									=
																																									CDR
																																									(BgL_cdrzd213747zd2_2302);
																																								if (PAIRP(BgL_cdrzd213754zd2_2304))
																																									{	/* Ast/private.scm 78 */
																																										obj_t
																																											BgL_cdrzd213760zd2_2306;
																																										BgL_cdrzd213760zd2_2306
																																											=
																																											CDR
																																											(BgL_cdrzd213754zd2_2304);
																																										if (PAIRP(BgL_cdrzd213760zd2_2306))
																																											{	/* Ast/private.scm 78 */
																																												obj_t
																																													BgL_carzd213764zd2_2308;
																																												BgL_carzd213764zd2_2308
																																													=
																																													CAR
																																													(BgL_cdrzd213760zd2_2306);
																																												if (STRINGP(BgL_carzd213764zd2_2308))
																																													{	/* Ast/private.scm 78 */
																																														obj_t
																																															BgL_arg2148z00_2310;
																																														obj_t
																																															BgL_arg2149z00_2311;
																																														obj_t
																																															BgL_arg2150z00_2312;
																																														obj_t
																																															BgL_arg2152z00_2313;
																																														BgL_arg2148z00_2310
																																															=
																																															CAR
																																															(BgL_cdrzd213739zd2_2242);
																																														BgL_arg2149z00_2311
																																															=
																																															CAR
																																															(BgL_cdrzd213747zd2_2302);
																																														BgL_arg2150z00_2312
																																															=
																																															CAR
																																															(BgL_cdrzd213754zd2_2304);
																																														BgL_arg2152z00_2313
																																															=
																																															CDR
																																															(BgL_cdrzd213760zd2_2306);
																																														{
																																															BgL_vsetz12z12_bglt
																																																BgL_auxz00_5284;
																																															{
																																																obj_t
																																																	BgL_restz00_5289;
																																																obj_t
																																																	BgL_czd2fmtzd2_5288;
																																																obj_t
																																																	BgL_otypez00_5287;
																																																obj_t
																																																	BgL_ftypez00_5286;
																																																obj_t
																																																	BgL_vtypez00_5285;
																																																BgL_vtypez00_5285
																																																	=
																																																	BgL_arg2148z00_2310;
																																																BgL_ftypez00_5286
																																																	=
																																																	BgL_arg2149z00_2311;
																																																BgL_otypez00_5287
																																																	=
																																																	BgL_arg2150z00_2312;
																																																BgL_czd2fmtzd2_5288
																																																	=
																																																	BgL_carzd213764zd2_2308;
																																																BgL_restz00_5289
																																																	=
																																																	BgL_arg2152z00_2313;
																																																BgL_restz00_1415
																																																	=
																																																	BgL_restz00_5289;
																																																BgL_czd2fmtzd2_1414
																																																	=
																																																	BgL_czd2fmtzd2_5288;
																																																BgL_otypez00_1413
																																																	=
																																																	BgL_otypez00_5287;
																																																BgL_ftypez00_1412
																																																	=
																																																	BgL_ftypez00_5286;
																																																BgL_vtypez00_1411
																																																	=
																																																	BgL_vtypez00_5285;
																																																goto
																																																	BgL_tagzd2137zd2_1416;
																																															}
																																															return
																																																(
																																																(obj_t)
																																																BgL_auxz00_5284);
																																														}
																																													}
																																												else
																																													{	/* Ast/private.scm 78 */
																																														obj_t
																																															BgL_cdrzd213792zd2_2314;
																																														BgL_cdrzd213792zd2_2314
																																															=
																																															CDR
																																															(BgL_sexpz00_6);
																																														{	/* Ast/private.scm 78 */
																																															obj_t
																																																BgL_cdrzd213804zd2_2315;
																																															BgL_cdrzd213804zd2_2315
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd213792zd2_2314));
																																															if ((CAR(((obj_t) BgL_cdrzd213792zd2_2314)) == CNST_TABLE_REF(((long) 12))))
																																																{	/* Ast/private.scm 78 */
																																																	obj_t
																																																		BgL_cdrzd213816zd2_2318;
																																																	BgL_cdrzd213816zd2_2318
																																																		=
																																																		CDR
																																																		(
																																																		((obj_t) BgL_cdrzd213804zd2_2315));
																																																	{	/* Ast/private.scm 78 */
																																																		obj_t
																																																			BgL_cdrzd213828zd2_2319;
																																																		BgL_cdrzd213828zd2_2319
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_cdrzd213816zd2_2318));
																																																		{	/* Ast/private.scm 78 */
																																																			obj_t
																																																				BgL_cdrzd213838zd2_2320;
																																																			BgL_cdrzd213838zd2_2320
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_cdrzd213828zd2_2319));
																																																			{	/* Ast/private.scm 78 */
																																																				obj_t
																																																					BgL_carzd213845zd2_2321;
																																																				obj_t
																																																					BgL_cdrzd213846zd2_2322;
																																																				BgL_carzd213845zd2_2321
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_cdrzd213838zd2_2320));
																																																				BgL_cdrzd213846zd2_2322
																																																					=
																																																					CDR
																																																					(
																																																					((obj_t) BgL_cdrzd213838zd2_2320));
																																																				if (STRINGP(BgL_carzd213845zd2_2321))
																																																					{	/* Ast/private.scm 78 */
																																																						if (PAIRP(BgL_cdrzd213846zd2_2322))
																																																							{	/* Ast/private.scm 78 */
																																																								obj_t
																																																									BgL_carzd213853zd2_2325;
																																																								obj_t
																																																									BgL_cdrzd213854zd2_2326;
																																																								BgL_carzd213853zd2_2325
																																																									=
																																																									CAR
																																																									(BgL_cdrzd213846zd2_2322);
																																																								BgL_cdrzd213854zd2_2326
																																																									=
																																																									CDR
																																																									(BgL_cdrzd213846zd2_2322);
																																																								if (STRINGP(BgL_carzd213853zd2_2325))
																																																									{	/* Ast/private.scm 78 */
																																																										if (PAIRP(BgL_cdrzd213854zd2_2326))
																																																											{	/* Ast/private.scm 78 */
																																																												obj_t
																																																													BgL_carzd213860zd2_2329;
																																																												BgL_carzd213860zd2_2329
																																																													=
																																																													CAR
																																																													(BgL_cdrzd213854zd2_2326);
																																																												if (BOOLEANP(BgL_carzd213860zd2_2329))
																																																													{	/* Ast/private.scm 78 */
																																																														obj_t
																																																															BgL_arg2160z00_2331;
																																																														obj_t
																																																															BgL_arg2161z00_2332;
																																																														obj_t
																																																															BgL_arg2162z00_2333;
																																																														obj_t
																																																															BgL_arg2163z00_2334;
																																																														BgL_arg2160z00_2331
																																																															=
																																																															CAR
																																																															(
																																																															((obj_t) BgL_cdrzd213804zd2_2315));
																																																														BgL_arg2161z00_2332
																																																															=
																																																															CAR
																																																															(
																																																															((obj_t) BgL_cdrzd213816zd2_2318));
																																																														BgL_arg2162z00_2333
																																																															=
																																																															CAR
																																																															(
																																																															((obj_t) BgL_cdrzd213828zd2_2319));
																																																														BgL_arg2163z00_2334
																																																															=
																																																															CDR
																																																															(BgL_cdrzd213854zd2_2326);
																																																														{
																																																															BgL_vallocz00_bglt
																																																																BgL_auxz00_5329;
																																																															{
																																																																obj_t
																																																																	BgL_restz00_5336;
																																																																obj_t
																																																																	BgL_stackzf3zf3_5335;
																																																																obj_t
																																																																	BgL_czd2stackzd2fmtz00_5334;
																																																																obj_t
																																																																	BgL_czd2heapzd2fmtz00_5333;
																																																																obj_t
																																																																	BgL_otypez00_5332;
																																																																obj_t
																																																																	BgL_ftypez00_5331;
																																																																obj_t
																																																																	BgL_vtypez00_5330;
																																																																BgL_vtypez00_5330
																																																																	=
																																																																	BgL_arg2160z00_2331;
																																																																BgL_ftypez00_5331
																																																																	=
																																																																	BgL_arg2161z00_2332;
																																																																BgL_otypez00_5332
																																																																	=
																																																																	BgL_arg2162z00_2333;
																																																																BgL_czd2heapzd2fmtz00_5333
																																																																	=
																																																																	BgL_carzd213845zd2_2321;
																																																																BgL_czd2stackzd2fmtz00_5334
																																																																	=
																																																																	BgL_carzd213853zd2_2325;
																																																																BgL_stackzf3zf3_5335
																																																																	=
																																																																	BgL_carzd213860zd2_2329;
																																																																BgL_restz00_5336
																																																																	=
																																																																	BgL_arg2163z00_2334;
																																																																BgL_restz00_1423
																																																																	=
																																																																	BgL_restz00_5336;
																																																																BgL_stackzf3zf3_1422
																																																																	=
																																																																	BgL_stackzf3zf3_5335;
																																																																BgL_czd2stackzd2fmtz00_1421
																																																																	=
																																																																	BgL_czd2stackzd2fmtz00_5334;
																																																																BgL_czd2heapzd2fmtz00_1420
																																																																	=
																																																																	BgL_czd2heapzd2fmtz00_5333;
																																																																BgL_otypez00_1419
																																																																	=
																																																																	BgL_otypez00_5332;
																																																																BgL_ftypez00_1418
																																																																	=
																																																																	BgL_ftypez00_5331;
																																																																BgL_vtypez00_1417
																																																																	=
																																																																	BgL_vtypez00_5330;
																																																																goto
																																																																	BgL_tagzd2138zd2_1424;
																																																															}
																																																															return
																																																																(
																																																																(obj_t)
																																																																BgL_auxz00_5329);
																																																														}
																																																													}
																																																												else
																																																													{	/* Ast/private.scm 78 */
																																																														goto
																																																															BgL_tagzd2141zd2_1432;
																																																													}
																																																											}
																																																										else
																																																											{	/* Ast/private.scm 78 */
																																																												goto
																																																													BgL_tagzd2141zd2_1432;
																																																											}
																																																									}
																																																								else
																																																									{	/* Ast/private.scm 78 */
																																																										goto
																																																											BgL_tagzd2141zd2_1432;
																																																									}
																																																							}
																																																						else
																																																							{	/* Ast/private.scm 78 */
																																																								goto
																																																									BgL_tagzd2141zd2_1432;
																																																							}
																																																					}
																																																				else
																																																					{	/* Ast/private.scm 78 */
																																																						goto
																																																							BgL_tagzd2141zd2_1432;
																																																					}
																																																			}
																																																		}
																																																	}
																																																}
																																															else
																																																{	/* Ast/private.scm 78 */
																																																	goto
																																																		BgL_tagzd2141zd2_1432;
																																																}
																																														}
																																													}
																																											}
																																										else
																																											{	/* Ast/private.scm 78 */
																																												obj_t
																																													BgL_cdrzd213982zd2_2336;
																																												BgL_cdrzd213982zd2_2336
																																													=
																																													CDR
																																													(BgL_sexpz00_6);
																																												{	/* Ast/private.scm 78 */
																																													obj_t
																																														BgL_cdrzd213990zd2_2337;
																																													BgL_cdrzd213990zd2_2337
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd213982zd2_2336));
																																													if ((CAR(((obj_t) BgL_cdrzd213982zd2_2336)) == CNST_TABLE_REF(((long) 14))))
																																														{	/* Ast/private.scm 78 */
																																															obj_t
																																																BgL_cdrzd213998zd2_2340;
																																															BgL_cdrzd213998zd2_2340
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_cdrzd213990zd2_2337));
																																															{	/* Ast/private.scm 78 */
																																																obj_t
																																																	BgL_cdrzd214006zd2_2341;
																																																BgL_cdrzd214006zd2_2341
																																																	=
																																																	CDR
																																																	(
																																																	((obj_t) BgL_cdrzd213998zd2_2340));
																																																if (NULLP(CDR(((obj_t) BgL_cdrzd214006zd2_2341))))
																																																	{	/* Ast/private.scm 78 */
																																																		obj_t
																																																			BgL_arg2169z00_2344;
																																																		obj_t
																																																			BgL_arg2170z00_2345;
																																																		obj_t
																																																			BgL_arg2172z00_2346;
																																																		BgL_arg2169z00_2344
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd213990zd2_2337));
																																																		BgL_arg2170z00_2345
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd213998zd2_2340));
																																																		BgL_arg2172z00_2346
																																																			=
																																																			CAR
																																																			(
																																																			((obj_t) BgL_cdrzd214006zd2_2341));
																																																		{
																																																			BgL_sequencez00_bglt
																																																				BgL_auxz00_5360;
																																																			{
																																																				obj_t
																																																					BgL_bodyz00_5363;
																																																				obj_t
																																																					BgL_kwdsz00_5362;
																																																				obj_t
																																																					BgL_typez00_5361;
																																																				BgL_typez00_5361
																																																					=
																																																					BgL_arg2169z00_2344;
																																																				BgL_kwdsz00_5362
																																																					=
																																																					BgL_arg2170z00_2345;
																																																				BgL_bodyz00_5363
																																																					=
																																																					BgL_arg2172z00_2346;
																																																				BgL_bodyz00_1430
																																																					=
																																																					BgL_bodyz00_5363;
																																																				BgL_kwdsz00_1429
																																																					=
																																																					BgL_kwdsz00_5362;
																																																				BgL_typez00_1428
																																																					=
																																																					BgL_typez00_5361;
																																																				goto
																																																					BgL_tagzd2140zd2_1431;
																																																			}
																																																			return
																																																				(
																																																				(obj_t)
																																																				BgL_auxz00_5360);
																																																		}
																																																	}
																																																else
																																																	{	/* Ast/private.scm 78 */
																																																		goto
																																																			BgL_tagzd2141zd2_1432;
																																																	}
																																															}
																																														}
																																													else
																																														{	/* Ast/private.scm 78 */
																																															goto
																																																BgL_tagzd2141zd2_1432;
																																														}
																																												}
																																											}
																																									}
																																								else
																																									{	/* Ast/private.scm 78 */
																																										obj_t
																																											BgL_cdrzd214044zd2_2349;
																																										BgL_cdrzd214044zd2_2349
																																											=
																																											CDR
																																											(BgL_sexpz00_6);
																																										{	/* Ast/private.scm 78 */
																																											obj_t
																																												BgL_cdrzd214050zd2_2350;
																																											BgL_cdrzd214050zd2_2350
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd214044zd2_2349));
																																											if ((CAR(((obj_t) BgL_cdrzd214044zd2_2349)) == CNST_TABLE_REF(((long) 18))))
																																												{	/* Ast/private.scm 78 */
																																													obj_t
																																														BgL_cdrzd214056zd2_2353;
																																													BgL_cdrzd214056zd2_2353
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_cdrzd214050zd2_2350));
																																													if (NULLP(CDR(((obj_t) BgL_cdrzd214056zd2_2353))))
																																														{	/* Ast/private.scm 78 */
																																															obj_t
																																																BgL_arg2179z00_2356;
																																															obj_t
																																																BgL_arg2180z00_2357;
																																															BgL_arg2179z00_2356
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_cdrzd214050zd2_2350));
																																															BgL_arg2180z00_2357
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_cdrzd214056zd2_2353));
																																															{
																																																BgL_sequencez00_bglt
																																																	BgL_auxz00_5383;
																																																{
																																																	obj_t
																																																		BgL_expz00_5385;
																																																	obj_t
																																																		BgL_typez00_5384;
																																																	BgL_typez00_5384
																																																		=
																																																		BgL_arg2179z00_2356;
																																																	BgL_expz00_5385
																																																		=
																																																		BgL_arg2180z00_2357;
																																																	BgL_expz00_1426
																																																		=
																																																		BgL_expz00_5385;
																																																	BgL_typez00_1425
																																																		=
																																																		BgL_typez00_5384;
																																																	goto
																																																		BgL_tagzd2139zd2_1427;
																																																}
																																																return
																																																	(
																																																	(obj_t)
																																																	BgL_auxz00_5383);
																																															}
																																														}
																																													else
																																														{	/* Ast/private.scm 78 */
																																															goto
																																																BgL_tagzd2141zd2_1432;
																																														}
																																												}
																																											else
																																												{	/* Ast/private.scm 78 */
																																													goto
																																														BgL_tagzd2141zd2_1432;
																																												}
																																										}
																																									}
																																							}
																																						else
																																							{	/* Ast/private.scm 78 */
																																								goto
																																									BgL_tagzd2141zd2_1432;
																																							}
																																					}
																																				else
																																					{	/* Ast/private.scm 78 */
																																						goto
																																							BgL_tagzd2141zd2_1432;
																																					}
																																			}
																																		else
																																			{	/* Ast/private.scm 78 */
																																				if (
																																					(BgL_carzd213738zd2_2241
																																						==
																																						CNST_TABLE_REF
																																						(((long) 5))))
																																					{	/* Ast/private.scm 78 */
																																						goto
																																							BgL_kapzd213740zd2_2243;
																																					}
																																				else
																																					{	/* Ast/private.scm 78 */
																																						obj_t
																																							BgL_cdrzd214170zd2_2247;
																																						BgL_cdrzd214170zd2_2247
																																							=
																																							CDR
																																							(((obj_t) BgL_cdrzd213732zd2_2240));
																																						if (
																																							(CAR
																																								(((obj_t) BgL_cdrzd213732zd2_2240)) == CNST_TABLE_REF(((long) 12))))
																																							{	/* Ast/private.scm 78 */
																																								if (PAIRP(BgL_cdrzd214170zd2_2247))
																																									{	/* Ast/private.scm 78 */
																																										obj_t
																																											BgL_cdrzd214179zd2_2251;
																																										BgL_cdrzd214179zd2_2251
																																											=
																																											CDR
																																											(BgL_cdrzd214170zd2_2247);
																																										if (PAIRP(BgL_cdrzd214179zd2_2251))
																																											{	/* Ast/private.scm 78 */
																																												obj_t
																																													BgL_cdrzd214188zd2_2253;
																																												BgL_cdrzd214188zd2_2253
																																													=
																																													CDR
																																													(BgL_cdrzd214179zd2_2251);
																																												if (PAIRP(BgL_cdrzd214188zd2_2253))
																																													{	/* Ast/private.scm 78 */
																																														obj_t
																																															BgL_cdrzd214196zd2_2255;
																																														BgL_cdrzd214196zd2_2255
																																															=
																																															CDR
																																															(BgL_cdrzd214188zd2_2253);
																																														if (PAIRP(BgL_cdrzd214196zd2_2255))
																																															{	/* Ast/private.scm 78 */
																																																obj_t
																																																	BgL_carzd214202zd2_2257;
																																																obj_t
																																																	BgL_cdrzd214203zd2_2258;
																																																BgL_carzd214202zd2_2257
																																																	=
																																																	CAR
																																																	(BgL_cdrzd214196zd2_2255);
																																																BgL_cdrzd214203zd2_2258
																																																	=
																																																	CDR
																																																	(BgL_cdrzd214196zd2_2255);
																																																if (STRINGP(BgL_carzd214202zd2_2257))
																																																	{	/* Ast/private.scm 78 */
																																																		if (PAIRP(BgL_cdrzd214203zd2_2258))
																																																			{	/* Ast/private.scm 78 */
																																																				obj_t
																																																					BgL_carzd214210zd2_2261;
																																																				obj_t
																																																					BgL_cdrzd214211zd2_2262;
																																																				BgL_carzd214210zd2_2261
																																																					=
																																																					CAR
																																																					(BgL_cdrzd214203zd2_2258);
																																																				BgL_cdrzd214211zd2_2262
																																																					=
																																																					CDR
																																																					(BgL_cdrzd214203zd2_2258);
																																																				if (STRINGP(BgL_carzd214210zd2_2261))
																																																					{	/* Ast/private.scm 78 */
																																																						if (PAIRP(BgL_cdrzd214211zd2_2262))
																																																							{	/* Ast/private.scm 78 */
																																																								obj_t
																																																									BgL_carzd214217zd2_2265;
																																																								BgL_carzd214217zd2_2265
																																																									=
																																																									CAR
																																																									(BgL_cdrzd214211zd2_2262);
																																																								if (BOOLEANP(BgL_carzd214217zd2_2265))
																																																									{	/* Ast/private.scm 78 */
																																																										obj_t
																																																											BgL_arg2114z00_2267;
																																																										obj_t
																																																											BgL_arg2115z00_2268;
																																																										obj_t
																																																											BgL_arg2116z00_2269;
																																																										obj_t
																																																											BgL_arg2117z00_2270;
																																																										BgL_arg2114z00_2267
																																																											=
																																																											CAR
																																																											(BgL_cdrzd214170zd2_2247);
																																																										BgL_arg2115z00_2268
																																																											=
																																																											CAR
																																																											(BgL_cdrzd214179zd2_2251);
																																																										BgL_arg2116z00_2269
																																																											=
																																																											CAR
																																																											(BgL_cdrzd214188zd2_2253);
																																																										BgL_arg2117z00_2270
																																																											=
																																																											CDR
																																																											(BgL_cdrzd214211zd2_2262);
																																																										{
																																																											BgL_vallocz00_bglt
																																																												BgL_auxz00_5427;
																																																											{
																																																												obj_t
																																																													BgL_restz00_5434;
																																																												obj_t
																																																													BgL_stackzf3zf3_5433;
																																																												obj_t
																																																													BgL_czd2stackzd2fmtz00_5432;
																																																												obj_t
																																																													BgL_czd2heapzd2fmtz00_5431;
																																																												obj_t
																																																													BgL_otypez00_5430;
																																																												obj_t
																																																													BgL_ftypez00_5429;
																																																												obj_t
																																																													BgL_vtypez00_5428;
																																																												BgL_vtypez00_5428
																																																													=
																																																													BgL_arg2114z00_2267;
																																																												BgL_ftypez00_5429
																																																													=
																																																													BgL_arg2115z00_2268;
																																																												BgL_otypez00_5430
																																																													=
																																																													BgL_arg2116z00_2269;
																																																												BgL_czd2heapzd2fmtz00_5431
																																																													=
																																																													BgL_carzd214202zd2_2257;
																																																												BgL_czd2stackzd2fmtz00_5432
																																																													=
																																																													BgL_carzd214210zd2_2261;
																																																												BgL_stackzf3zf3_5433
																																																													=
																																																													BgL_carzd214217zd2_2265;
																																																												BgL_restz00_5434
																																																													=
																																																													BgL_arg2117z00_2270;
																																																												BgL_restz00_1423
																																																													=
																																																													BgL_restz00_5434;
																																																												BgL_stackzf3zf3_1422
																																																													=
																																																													BgL_stackzf3zf3_5433;
																																																												BgL_czd2stackzd2fmtz00_1421
																																																													=
																																																													BgL_czd2stackzd2fmtz00_5432;
																																																												BgL_czd2heapzd2fmtz00_1420
																																																													=
																																																													BgL_czd2heapzd2fmtz00_5431;
																																																												BgL_otypez00_1419
																																																													=
																																																													BgL_otypez00_5430;
																																																												BgL_ftypez00_1418
																																																													=
																																																													BgL_ftypez00_5429;
																																																												BgL_vtypez00_1417
																																																													=
																																																													BgL_vtypez00_5428;
																																																												goto
																																																													BgL_tagzd2138zd2_1424;
																																																											}
																																																											return
																																																												(
																																																												(obj_t)
																																																												BgL_auxz00_5427);
																																																										}
																																																									}
																																																								else
																																																									{	/* Ast/private.scm 78 */
																																																										goto
																																																											BgL_tagzd2141zd2_1432;
																																																									}
																																																							}
																																																						else
																																																							{	/* Ast/private.scm 78 */
																																																								goto
																																																									BgL_tagzd2141zd2_1432;
																																																							}
																																																					}
																																																				else
																																																					{	/* Ast/private.scm 78 */
																																																						goto
																																																							BgL_tagzd2141zd2_1432;
																																																					}
																																																			}
																																																		else
																																																			{	/* Ast/private.scm 78 */
																																																				goto
																																																					BgL_tagzd2141zd2_1432;
																																																			}
																																																	}
																																																else
																																																	{	/* Ast/private.scm 78 */
																																																		goto
																																																			BgL_tagzd2141zd2_1432;
																																																	}
																																															}
																																														else
																																															{	/* Ast/private.scm 78 */
																																																goto
																																																	BgL_tagzd2141zd2_1432;
																																															}
																																													}
																																												else
																																													{	/* Ast/private.scm 78 */
																																														goto
																																															BgL_tagzd2141zd2_1432;
																																													}
																																											}
																																										else
																																											{	/* Ast/private.scm 78 */
																																												goto
																																													BgL_tagzd2141zd2_1432;
																																											}
																																									}
																																								else
																																									{	/* Ast/private.scm 78 */
																																										goto
																																											BgL_tagzd2141zd2_1432;
																																									}
																																							}
																																						else
																																							{	/* Ast/private.scm 78 */
																																								obj_t
																																									BgL_cdrzd214338zd2_2271;
																																								BgL_cdrzd214338zd2_2271
																																									=
																																									CDR
																																									(BgL_sexpz00_6);
																																								{	/* Ast/private.scm 78 */
																																									obj_t
																																										BgL_cdrzd214342zd2_2272;
																																									BgL_cdrzd214342zd2_2272
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_cdrzd214338zd2_2271));
																																									if ((CAR(((obj_t) BgL_cdrzd214338zd2_2271)) == CNST_TABLE_REF(((long) 18))))
																																										{	/* Ast/private.scm 78 */
																																											if (PAIRP(BgL_cdrzd214342zd2_2272))
																																												{	/* Ast/private.scm 78 */
																																													obj_t
																																														BgL_cdrzd214346zd2_2276;
																																													BgL_cdrzd214346zd2_2276
																																														=
																																														CDR
																																														(BgL_cdrzd214342zd2_2272);
																																													if (PAIRP(BgL_cdrzd214346zd2_2276))
																																														{	/* Ast/private.scm 78 */
																																															if (NULLP(CDR(BgL_cdrzd214346zd2_2276)))
																																																{	/* Ast/private.scm 78 */
																																																	obj_t
																																																		BgL_arg2125z00_2280;
																																																	obj_t
																																																		BgL_arg2126z00_2281;
																																																	BgL_arg2125z00_2280
																																																		=
																																																		CAR
																																																		(BgL_cdrzd214342zd2_2272);
																																																	BgL_arg2126z00_2281
																																																		=
																																																		CAR
																																																		(BgL_cdrzd214346zd2_2276);
																																																	{
																																																		BgL_sequencez00_bglt
																																																			BgL_auxz00_5454;
																																																		{
																																																			obj_t
																																																				BgL_expz00_5456;
																																																			obj_t
																																																				BgL_typez00_5455;
																																																			BgL_typez00_5455
																																																				=
																																																				BgL_arg2125z00_2280;
																																																			BgL_expz00_5456
																																																				=
																																																				BgL_arg2126z00_2281;
																																																			BgL_expz00_1426
																																																				=
																																																				BgL_expz00_5456;
																																																			BgL_typez00_1425
																																																				=
																																																				BgL_typez00_5455;
																																																			goto
																																																				BgL_tagzd2139zd2_1427;
																																																		}
																																																		return
																																																			(
																																																			(obj_t)
																																																			BgL_auxz00_5454);
																																																	}
																																																}
																																															else
																																																{	/* Ast/private.scm 78 */
																																																	goto
																																																		BgL_tagzd2141zd2_1432;
																																																}
																																														}
																																													else
																																														{	/* Ast/private.scm 78 */
																																															goto
																																																BgL_tagzd2141zd2_1432;
																																														}
																																												}
																																											else
																																												{	/* Ast/private.scm 78 */
																																													goto
																																														BgL_tagzd2141zd2_1432;
																																												}
																																										}
																																									else
																																										{	/* Ast/private.scm 78 */
																																											obj_t
																																												BgL_cdrzd214382zd2_2284;
																																											BgL_cdrzd214382zd2_2284
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_cdrzd214338zd2_2271));
																																											if ((CAR(((obj_t) BgL_cdrzd214338zd2_2271)) == CNST_TABLE_REF(((long) 14))))
																																												{	/* Ast/private.scm 78 */
																																													if (PAIRP(BgL_cdrzd214382zd2_2284))
																																														{	/* Ast/private.scm 78 */
																																															obj_t
																																																BgL_cdrzd214387zd2_2288;
																																															BgL_cdrzd214387zd2_2288
																																																=
																																																CDR
																																																(BgL_cdrzd214382zd2_2284);
																																															if (PAIRP(BgL_cdrzd214387zd2_2288))
																																																{	/* Ast/private.scm 78 */
																																																	obj_t
																																																		BgL_cdrzd214392zd2_2290;
																																																	BgL_cdrzd214392zd2_2290
																																																		=
																																																		CDR
																																																		(BgL_cdrzd214387zd2_2288);
																																																	if (PAIRP(BgL_cdrzd214392zd2_2290))
																																																		{	/* Ast/private.scm 78 */
																																																			if (NULLP(CDR(BgL_cdrzd214392zd2_2290)))
																																																				{	/* Ast/private.scm 78 */
																																																					obj_t
																																																						BgL_arg2135z00_2294;
																																																					obj_t
																																																						BgL_arg2136z00_2295;
																																																					obj_t
																																																						BgL_arg2137z00_2296;
																																																					BgL_arg2135z00_2294
																																																						=
																																																						CAR
																																																						(BgL_cdrzd214382zd2_2284);
																																																					BgL_arg2136z00_2295
																																																						=
																																																						CAR
																																																						(BgL_cdrzd214387zd2_2288);
																																																					BgL_arg2137z00_2296
																																																						=
																																																						CAR
																																																						(BgL_cdrzd214392zd2_2290);
																																																					{
																																																						BgL_sequencez00_bglt
																																																							BgL_auxz00_5479;
																																																						{
																																																							obj_t
																																																								BgL_bodyz00_5482;
																																																							obj_t
																																																								BgL_kwdsz00_5481;
																																																							obj_t
																																																								BgL_typez00_5480;
																																																							BgL_typez00_5480
																																																								=
																																																								BgL_arg2135z00_2294;
																																																							BgL_kwdsz00_5481
																																																								=
																																																								BgL_arg2136z00_2295;
																																																							BgL_bodyz00_5482
																																																								=
																																																								BgL_arg2137z00_2296;
																																																							BgL_bodyz00_1430
																																																								=
																																																								BgL_bodyz00_5482;
																																																							BgL_kwdsz00_1429
																																																								=
																																																								BgL_kwdsz00_5481;
																																																							BgL_typez00_1428
																																																								=
																																																								BgL_typez00_5480;
																																																							goto
																																																								BgL_tagzd2140zd2_1431;
																																																						}
																																																						return
																																																							(
																																																							(obj_t)
																																																							BgL_auxz00_5479);
																																																					}
																																																				}
																																																			else
																																																				{	/* Ast/private.scm 78 */
																																																					goto
																																																						BgL_tagzd2141zd2_1432;
																																																				}
																																																		}
																																																	else
																																																		{	/* Ast/private.scm 78 */
																																																			goto
																																																				BgL_tagzd2141zd2_1432;
																																																		}
																																																}
																																															else
																																																{	/* Ast/private.scm 78 */
																																																	goto
																																																		BgL_tagzd2141zd2_1432;
																																																}
																																														}
																																													else
																																														{	/* Ast/private.scm 78 */
																																															goto
																																																BgL_tagzd2141zd2_1432;
																																														}
																																												}
																																											else
																																												{	/* Ast/private.scm 78 */
																																													goto
																																														BgL_tagzd2141zd2_1432;
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
					else
						{	/* Ast/private.scm 78 */
							goto BgL_tagzd2141zd2_1432;
						}
				}
			}
		}

	}



/* &private-node */
	obj_t BGl_z62privatezd2nodezb0zzast_privatez00(obj_t BgL_envz00_3835,
		obj_t BgL_sexpz00_3836, obj_t BgL_stackz00_3837, obj_t BgL_locz00_3838,
		obj_t BgL_sitez00_3839)
	{
		{	/* Ast/private.scm 73 */
			return
				BGl_privatezd2nodezd2zzast_privatez00(BgL_sexpz00_3836,
				BgL_stackz00_3837, BgL_locz00_3838, BgL_sitez00_3839);
		}

	}



/* make-private-sexp */
	BGL_EXPORTED_DEF obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t
		BgL_kindz00_10, obj_t BgL_typezd2idzd2_11, obj_t BgL_objsz00_12)
	{
		{	/* Ast/private.scm 241 */
			{	/* Ast/private.scm 247 */
				obj_t BgL_arg2538z00_3808;

				{	/* Ast/private.scm 247 */
					obj_t BgL_arg2539z00_3809;

					BgL_arg2539z00_3809 =
						MAKE_YOUNG_PAIR(BgL_typezd2idzd2_11, BgL_objsz00_12);
					BgL_arg2538z00_3808 =
						MAKE_YOUNG_PAIR(BgL_kindz00_10, BgL_arg2539z00_3809);
				}
				return MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BgL_arg2538z00_3808);
		}}

	}



/* &make-private-sexp */
	obj_t BGl_z62makezd2privatezd2sexpz62zzast_privatez00(obj_t BgL_envz00_3840,
		obj_t BgL_kindz00_3841, obj_t BgL_typezd2idzd2_3842, obj_t BgL_objsz00_3843)
	{
		{	/* Ast/private.scm 241 */
			return
				BGl_makezd2privatezd2sexpz00zzast_privatez00(BgL_kindz00_3841,
				BgL_typezd2idzd2_3842, BgL_objsz00_3843);
		}

	}



/* expand-meta */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2metazd2zzast_privatez00(obj_t BgL_xz00_13,
		obj_t BgL_ez00_14)
	{
		{	/* Ast/private.scm 252 */
			{
				obj_t BgL_keywordsz00_2920;
				obj_t BgL_bodyz00_2921;

				{	/* Ast/private.scm 253 */
					obj_t BgL_cdrzd214748zd2_2926;

					BgL_cdrzd214748zd2_2926 = CDR(BgL_xz00_13);
					if (PAIRP(BgL_cdrzd214748zd2_2926))
						{	/* Ast/private.scm 253 */
							obj_t BgL_carzd214751zd2_2928;

							BgL_carzd214751zd2_2928 = CAR(BgL_cdrzd214748zd2_2926);
							if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
								(BgL_carzd214751zd2_2928))
								{	/* Ast/private.scm 253 */
									BgL_keywordsz00_2920 = BgL_carzd214751zd2_2928;
									BgL_bodyz00_2921 = CDR(BgL_cdrzd214748zd2_2926);
									{	/* Ast/private.scm 255 */
										obj_t BgL_arg2545z00_2931;

										if (NULLP(BgL_bodyz00_2921))
											{	/* Ast/private.scm 255 */
												BgL_arg2545z00_2931 = BNIL;
											}
										else
											{	/* Ast/private.scm 255 */
												obj_t BgL_head1268z00_2936;

												{	/* Ast/private.scm 255 */
													obj_t BgL_res2792z00_3811;

													BgL_res2792z00_3811 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													BgL_head1268z00_2936 = BgL_res2792z00_3811;
												}
												{
													obj_t BgL_l1266z00_2938;
													obj_t BgL_tail1269z00_2939;

													BgL_l1266z00_2938 = BgL_bodyz00_2921;
													BgL_tail1269z00_2939 = BgL_head1268z00_2936;
												BgL_zc3z04anonymousza32550ze3z87_2940:
													if (NULLP(BgL_l1266z00_2938))
														{	/* Ast/private.scm 255 */
															BgL_arg2545z00_2931 = CDR(BgL_head1268z00_2936);
														}
													else
														{	/* Ast/private.scm 255 */
															obj_t BgL_newtail1270z00_2942;

															{	/* Ast/private.scm 255 */
																obj_t BgL_arg2553z00_2944;

																{	/* Ast/private.scm 255 */
																	obj_t BgL_xz00_2945;

																	BgL_xz00_2945 =
																		CAR(((obj_t) BgL_l1266z00_2938));
																	BgL_arg2553z00_2944 =
																		PROCEDURE_ENTRY(BgL_ez00_14) (BgL_ez00_14,
																		BgL_xz00_2945, BgL_ez00_14, BEOA);
																}
																{	/* Ast/private.scm 255 */
																	obj_t BgL_res2794z00_3815;

																	BgL_res2794z00_3815 =
																		MAKE_YOUNG_PAIR(BgL_arg2553z00_2944, BNIL);
																	BgL_newtail1270z00_2942 = BgL_res2794z00_3815;
																}
															}
															SET_CDR(BgL_tail1269z00_2939,
																BgL_newtail1270z00_2942);
															{	/* Ast/private.scm 255 */
																obj_t BgL_arg2552z00_2943;

																BgL_arg2552z00_2943 =
																	CDR(((obj_t) BgL_l1266z00_2938));
																{
																	obj_t BgL_tail1269z00_5514;
																	obj_t BgL_l1266z00_5513;

																	BgL_l1266z00_5513 = BgL_arg2552z00_2943;
																	BgL_tail1269z00_5514 =
																		BgL_newtail1270z00_2942;
																	BgL_tail1269z00_2939 = BgL_tail1269z00_5514;
																	BgL_l1266z00_2938 = BgL_l1266z00_5513;
																	goto BgL_zc3z04anonymousza32550ze3z87_2940;
																}
															}
														}
												}
											}
										{	/* Ast/private.scm 255 */
											obj_t BgL_list2546z00_2932;

											{	/* Ast/private.scm 255 */
												obj_t BgL_arg2548z00_2933;

												BgL_arg2548z00_2933 =
													MAKE_YOUNG_PAIR(BgL_arg2545z00_2931, BNIL);
												BgL_list2546z00_2932 =
													MAKE_YOUNG_PAIR(BgL_keywordsz00_2920,
													BgL_arg2548z00_2933);
											}
											{	/* Ast/private.scm 255 */
												obj_t BgL_res2795z00_3822;

												{	/* Ast/private.scm 255 */
													obj_t BgL_kindz00_3818;
													obj_t BgL_typezd2idzd2_3819;

													BgL_kindz00_3818 = CNST_TABLE_REF(((long) 14));
													BgL_typezd2idzd2_3819 = CNST_TABLE_REF(((long) 19));
													{	/* Ast/private.scm 247 */
														obj_t BgL_arg2538z00_3820;

														{	/* Ast/private.scm 247 */
															obj_t BgL_arg2539z00_3821;

															BgL_arg2539z00_3821 =
																MAKE_YOUNG_PAIR(BgL_typezd2idzd2_3819,
																BgL_list2546z00_2932);
															BgL_arg2538z00_3820 =
																MAKE_YOUNG_PAIR(BgL_kindz00_3818,
																BgL_arg2539z00_3821);
														}
														BgL_res2795z00_3822 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
															BgL_arg2538z00_3820);
												}}
												return BgL_res2795z00_3822;
											}
										}
									}
								}
							else
								{	/* Ast/private.scm 253 */
								BgL_tagzd214741zd2_2923:
									return
										BGl_errorz00zz__errorz00(BGl_string2803z00zzast_privatez00,
										BGl_string2804z00zzast_privatez00, BgL_xz00_13);
								}
						}
					else
						{	/* Ast/private.scm 253 */
							goto BgL_tagzd214741zd2_2923;
						}
				}
			}
		}

	}



/* &expand-meta */
	obj_t BGl_z62expandzd2metazb0zzast_privatez00(obj_t BgL_envz00_3844,
		obj_t BgL_xz00_3845, obj_t BgL_ez00_3846)
	{
		{	/* Ast/private.scm 252 */
			return BGl_expandzd2metazd2zzast_privatez00(BgL_xz00_3845, BgL_ez00_3846);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_privatez00()
	{
		{	/* Ast/private.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_privatez00()
	{
		{	/* Ast/private.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_privatez00()
	{
		{	/* Ast/private.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_privatez00()
	{
		{	/* Ast/private.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2805z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2805z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2805z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2805z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2805z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2805z00zzast_privatez00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2805z00zzast_privatez00));
			return
				BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2805z00zzast_privatez00));
		}

	}

#ifdef __cplusplus
}
#endif
