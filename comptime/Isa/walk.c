/*===========================================================================*/
/*   (Isa/walk.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Isa/walk.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
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

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		bool_t BgL_evalzf3zf3;
		obj_t BgL_libraryz00;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
		obj_t BgL_initz00;
		obj_t BgL_aliasz00;
	}                *BgL_globalz00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
		obj_t BgL_strengthz00;
		obj_t BgL_stackablez00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

	typedef struct BgL_literalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}                 *BgL_literalz00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_stackablez00;
	}             *BgL_appz00_bglt;

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
		obj_t BgL_subclassesz00;
	}                *BgL_tclassz00_bglt;


	static BgL_nodez00_bglt BGl_z62isaz12zd2app1280za2zzisa_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_z62clearzd2isazd2cachez12z70zzisa_walkz00(obj_t);
	static obj_t BGl_za2isazf2finalza2zf2zzisa_walkz00 = BUNSPEC;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_getzd2objectzd2typez00zztype_cachez00();
	static obj_t BGl_objectzd2initzd2zzisa_walkz00();
	BGL_IMPORT bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_isaz12z12zzisa_walkz00(BgL_nodez00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzisa_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzisa_walkz00();
	static obj_t BGl_z62initzd2isazd2cachez12z70zzisa_walkz00(obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzisa_walkz00();
	static obj_t BGl_za2isazd2objectzf2finalza2z20zzisa_walkz00 = BUNSPEC;
	static obj_t BGl_za2isazd2objectzf2cdepthza2z20zzisa_walkz00 = BUNSPEC;
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62isaz121277z70zzisa_walkz00(obj_t, obj_t);
	static obj_t BGl_z62isazd2walkz12za2zzisa_walkz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzisa_walkz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2isazf2cdepthza2zf2zzisa_walkz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzisa_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_isazd2walkz12zc0zzisa_walkz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzisa_walkz00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	static BgL_nodez00_bglt BGl_z62isaz12z70zzisa_walkz00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_typez00_bglt BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	static BgL_typez00_bglt
		BGl_uncastedzd2typeze70z35zzisa_walkz00(BgL_nodez00_bglt);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzisa_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzisa_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzisa_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzisa_walkz00();
	extern BgL_nodez00_bglt BGl_walk0z12z12zzast_walkz00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	static obj_t BGl_isazd2funz12zc0zzisa_walkz00(obj_t);
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_isazd2ofzd2zztype_miscz00(BgL_nodez00_bglt);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[10];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_clearzd2isazd2cachez12zd2envzc0zzisa_walkz00,
		BgL_bgl_za762clearza7d2isaza7d1780za7,
		BGl_z62clearzd2isazd2cachez12z70zzisa_walkz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_initzd2isazd2cachez12zd2envzc0zzisa_walkz00,
		BgL_bgl_za762initza7d2isaza7d21781za7,
		BGl_z62initzd2isazd2cachez12z70zzisa_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1771z00zzisa_walkz00,
		BgL_bgl_za762isaza7121277za7701782za7, BGl_z62isaz121277z70zzisa_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1773z00zzisa_walkz00,
		BgL_bgl_za762isaza712za7d2app11783za7,
		BGl_z62isaz12zd2app1280za2zzisa_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_isaz12zd2envzc0zzisa_walkz00,
		BgL_bgl_za762isaza712za770za7za7is1784za7, BGl_z62isaz12z70zzisa_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isazd2walkz12zd2envz12zzisa_walkz00,
		BgL_bgl_za762isaza7d2walkza7121785za7, BGl_z62isazd2walkz12za2zzisa_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1763z00zzisa_walkz00,
		BgL_bgl_string1763za700za7za7i1786za7, "Isa", 3);
	      DEFINE_STRING(BGl_string1764z00zzisa_walkz00,
		BgL_bgl_string1764za700za7za7i1787za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1765z00zzisa_walkz00,
		BgL_bgl_string1765za700za7za7i1788za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1766z00zzisa_walkz00,
		BgL_bgl_string1766za700za7za7i1789za7, " error", 6);
	      DEFINE_STRING(BGl_string1767z00zzisa_walkz00,
		BgL_bgl_string1767za700za7za7i1790za7, "s", 1);
	      DEFINE_STRING(BGl_string1768z00zzisa_walkz00,
		BgL_bgl_string1768za700za7za7i1791za7, "", 0);
	      DEFINE_STRING(BGl_string1769z00zzisa_walkz00,
		BgL_bgl_string1769za700za7za7i1792za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1770z00zzisa_walkz00,
		BgL_bgl_string1770za700za7za7i1793za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1772z00zzisa_walkz00,
		BgL_bgl_string1772za700za7za7i1794za7, "isa!1277", 8);
	      DEFINE_STRING(BGl_string1774z00zzisa_walkz00,
		BgL_bgl_string1774za700za7za7i1795za7, "isa!::node", 10);
	      DEFINE_STRING(BGl_string1775z00zzisa_walkz00,
		BgL_bgl_string1775za700za7za7i1796za7, "isa_walk", 8);
	      DEFINE_STRING(BGl_string1776z00zzisa_walkz00,
		BgL_bgl_string1776za700za7za7i1797za7,
		"class-display-min-size static %isa-object/final? %isa/final? %isa-object/cdepth? __object %isa/cdepth? (clear-isa-cache!) pass-started (init-isa-cache!) ",
		153);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2isazf2finalza2zf2zzisa_walkz00));
		     ADD_ROOT((void *) (&BGl_za2isazd2objectzf2finalza2z20zzisa_walkz00));
		     ADD_ROOT((void *) (&BGl_za2isazd2objectzf2cdepthza2z20zzisa_walkz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzisa_walkz00));
		     ADD_ROOT((void *) (&BGl_za2isazf2cdepthza2zf2zzisa_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzisa_walkz00(long
		BgL_checksumz00_2179, char *BgL_fromz00_2180)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzisa_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzisa_walkz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzisa_walkz00();
					BGl_libraryzd2moduleszd2initz00zzisa_walkz00();
					BGl_cnstzd2initzd2zzisa_walkz00();
					BGl_importedzd2moduleszd2initz00zzisa_walkz00();
					BGl_genericzd2initzd2zzisa_walkz00();
					BGl_methodzd2initzd2zzisa_walkz00();
					return BGl_toplevelzd2initzd2zzisa_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzisa_walkz00()
	{
		{	/* Isa/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"isa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"isa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"isa_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "isa_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "isa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"isa_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "isa_walk");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0), "isa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"isa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"isa_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "isa_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"isa_walk");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "isa_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzisa_walkz00()
	{
		{	/* Isa/walk.scm 15 */
			{	/* Isa/walk.scm 15 */
				obj_t BgL_cportz00_2092;

				{	/* Isa/walk.scm 15 */
					obj_t BgL_stringz00_2100;

					BgL_stringz00_2100 = BGl_string1776z00zzisa_walkz00;
					{	/* Isa/walk.scm 15 */
						obj_t BgL_startz00_2101;

						BgL_startz00_2101 = BINT(((long) 0));
						{	/* Isa/walk.scm 15 */
							obj_t BgL_endz00_2102;

							BgL_endz00_2102 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2100)));
							{	/* Isa/walk.scm 15 */

								BgL_cportz00_2092 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2100, BgL_startz00_2101, BgL_endz00_2102);
				}}}}
				{
					long BgL_iz00_2093;

					BgL_iz00_2093 = ((long) 9);
				BgL_loopz00_2094:
					if ((BgL_iz00_2093 == ((long) -1)))
						{	/* Isa/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Isa/walk.scm 15 */
							{	/* Isa/walk.scm 15 */
								obj_t BgL_arg1778z00_2096;

								{	/* Isa/walk.scm 15 */

									{	/* Isa/walk.scm 15 */
										obj_t BgL_locationz00_2098;

										BgL_locationz00_2098 = BBOOL(((bool_t) 0));
										{	/* Isa/walk.scm 15 */

											BgL_arg1778z00_2096 =
												BGl_readz00zz__readerz00(BgL_cportz00_2092,
												BgL_locationz00_2098);
										}
									}
								}
								{	/* Isa/walk.scm 15 */
									int BgL_tmpz00_2213;

									BgL_tmpz00_2213 = (int) (BgL_iz00_2093);
									CNST_TABLE_SET(BgL_tmpz00_2213, BgL_arg1778z00_2096);
							}}
							{	/* Isa/walk.scm 15 */
								int BgL_auxz00_2099;

								BgL_auxz00_2099 = (int) ((BgL_iz00_2093 - ((long) 1)));
								{
									long BgL_iz00_2218;

									BgL_iz00_2218 = (long) (BgL_auxz00_2099);
									BgL_iz00_2093 = BgL_iz00_2218;
									goto BgL_loopz00_2094;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzisa_walkz00()
	{
		{	/* Isa/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzisa_walkz00()
	{
		{	/* Isa/walk.scm 15 */
			BGl_za2isazf2cdepthza2zf2zzisa_walkz00 = BFALSE;
			BGl_za2isazd2objectzf2cdepthza2z20zzisa_walkz00 = BFALSE;
			BGl_za2isazf2finalza2zf2zzisa_walkz00 = BFALSE;
			BGl_za2isazd2objectzf2finalza2z20zzisa_walkz00 = BFALSE;
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzisa_walkz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1559;

				BgL_headz00_1559 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1560;
					obj_t BgL_tailz00_1561;

					BgL_prevz00_1560 = BgL_headz00_1559;
					BgL_tailz00_1561 = BgL_l1z00_1;
				BgL_loopz00_1562:
					if (PAIRP(BgL_tailz00_1561))
						{
							obj_t BgL_newzd2prevzd2_1564;

							BgL_newzd2prevzd2_1564 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1561), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1560, BgL_newzd2prevzd2_1564);
							{
								obj_t BgL_tailz00_2228;
								obj_t BgL_prevz00_2227;

								BgL_prevz00_2227 = BgL_newzd2prevzd2_1564;
								BgL_tailz00_2228 = CDR(BgL_tailz00_1561);
								BgL_tailz00_1561 = BgL_tailz00_2228;
								BgL_prevz00_1560 = BgL_prevz00_2227;
								goto BgL_loopz00_1562;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1559);
				}
			}
		}

	}



/* isa-walk! */
	BGL_EXPORTED_DEF obj_t BGl_isazd2walkz12zc0zzisa_walkz00(obj_t
		BgL_globalsz00_17)
	{
		{	/* Isa/walk.scm 40 */
			{	/* Isa/walk.scm 41 */
				obj_t BgL_list1298z00_1579;

				{	/* Isa/walk.scm 41 */
					obj_t BgL_arg1299z00_1580;

					{	/* Isa/walk.scm 41 */
						obj_t BgL_arg1300z00_1581;

						BgL_arg1300z00_1581 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1299z00_1580 =
							MAKE_YOUNG_PAIR(BGl_string1763z00zzisa_walkz00,
							BgL_arg1300z00_1581);
					}
					BgL_list1298z00_1579 =
						MAKE_YOUNG_PAIR(BGl_string1764z00zzisa_walkz00,
						BgL_arg1299z00_1580);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1298z00_1579);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1763z00zzisa_walkz00;
			{	/* Isa/walk.scm 41 */
				obj_t BgL_g1120z00_1582;
				obj_t BgL_g1121z00_1583;

				{	/* Isa/walk.scm 41 */
					obj_t BgL_list1310z00_1596;

					BgL_list1310z00_1596 =
						MAKE_YOUNG_PAIR(BGl_initzd2isazd2cachez12zd2envzc0zzisa_walkz00,
						BNIL);
					BgL_g1120z00_1582 = BgL_list1310z00_1596;
				}
				BgL_g1121z00_1583 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_1585;
					obj_t BgL_hnamesz00_1586;

					BgL_hooksz00_1585 = BgL_g1120z00_1582;
					BgL_hnamesz00_1586 = BgL_g1121z00_1583;
				BgL_zc3z04anonymousza31301ze3z87_1587:
					if (NULLP(BgL_hooksz00_1585))
						{	/* Isa/walk.scm 41 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Isa/walk.scm 41 */
							bool_t BgL_test1802z00_2243;

							{	/* Isa/walk.scm 41 */
								obj_t BgL_fun1309z00_1594;

								BgL_fun1309z00_1594 = CAR(((obj_t) BgL_hooksz00_1585));
								BgL_test1802z00_2243 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1309z00_1594)
									(BgL_fun1309z00_1594, BEOA));
							}
							if (BgL_test1802z00_2243)
								{	/* Isa/walk.scm 41 */
									obj_t BgL_arg1306z00_1591;
									obj_t BgL_arg1307z00_1592;

									BgL_arg1306z00_1591 = CDR(((obj_t) BgL_hooksz00_1585));
									BgL_arg1307z00_1592 = CDR(((obj_t) BgL_hnamesz00_1586));
									{
										obj_t BgL_hnamesz00_2255;
										obj_t BgL_hooksz00_2254;

										BgL_hooksz00_2254 = BgL_arg1306z00_1591;
										BgL_hnamesz00_2255 = BgL_arg1307z00_1592;
										BgL_hnamesz00_1586 = BgL_hnamesz00_2255;
										BgL_hooksz00_1585 = BgL_hooksz00_2254;
										goto BgL_zc3z04anonymousza31301ze3z87_1587;
									}
								}
							else
								{	/* Isa/walk.scm 41 */
									obj_t BgL_arg1308z00_1593;

									BgL_arg1308z00_1593 = CAR(((obj_t) BgL_hnamesz00_1586));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1763z00zzisa_walkz00,
										BGl_string1765z00zzisa_walkz00, BgL_arg1308z00_1593);
								}
						}
				}
			}
			{
				obj_t BgL_l1274z00_1598;

				BgL_l1274z00_1598 = BgL_globalsz00_17;
			BgL_zc3z04anonymousza31311ze3z87_1599:
				if (PAIRP(BgL_l1274z00_1598))
					{	/* Isa/walk.scm 42 */
						BGl_isazd2funz12zc0zzisa_walkz00(CAR(BgL_l1274z00_1598));
						{
							obj_t BgL_l1274z00_2263;

							BgL_l1274z00_2263 = CDR(BgL_l1274z00_1598);
							BgL_l1274z00_1598 = BgL_l1274z00_2263;
							goto BgL_zc3z04anonymousza31311ze3z87_1599;
						}
					}
				else
					{	/* Isa/walk.scm 42 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Isa/walk.scm 43 */
					{	/* Isa/walk.scm 43 */
						obj_t BgL_port1276z00_1606;

						{	/* Isa/walk.scm 43 */
							obj_t BgL_res1735z00_1949;

							{	/* Isa/walk.scm 43 */
								obj_t BgL_tmpz00_2268;

								BgL_tmpz00_2268 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1735z00_1949 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2268);
							}
							BgL_port1276z00_1606 = BgL_res1735z00_1949;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1276z00_1606);
						bgl_display_string(BGl_string1766z00zzisa_walkz00,
							BgL_port1276z00_1606);
						{	/* Isa/walk.scm 43 */
							obj_t BgL_arg1317z00_1607;

							{	/* Isa/walk.scm 43 */
								bool_t BgL_test1805z00_2273;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Isa/walk.scm 43 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Isa/walk.scm 43 */
												BgL_test1805z00_2273 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Isa/walk.scm 43 */
												BgL_test1805z00_2273 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Isa/walk.scm 43 */
										BgL_test1805z00_2273 = ((bool_t) 0);
									}
								if (BgL_test1805z00_2273)
									{	/* Isa/walk.scm 43 */
										BgL_arg1317z00_1607 = BGl_string1767z00zzisa_walkz00;
									}
								else
									{	/* Isa/walk.scm 43 */
										BgL_arg1317z00_1607 = BGl_string1768z00zzisa_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1317z00_1607, BgL_port1276z00_1606);
						}
						bgl_display_string(BGl_string1769z00zzisa_walkz00,
							BgL_port1276z00_1606);
						bgl_display_char(((unsigned char) 10), BgL_port1276z00_1606);
					}
					{	/* Isa/walk.scm 43 */
						obj_t BgL_list1321z00_1613;

						BgL_list1321z00_1613 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1321z00_1613);
					}
				}
			else
				{	/* Isa/walk.scm 43 */
					obj_t BgL_g1122z00_1614;
					obj_t BgL_g1123z00_1615;

					{	/* Isa/walk.scm 43 */
						obj_t BgL_list1330z00_1628;

						BgL_list1330z00_1628 =
							MAKE_YOUNG_PAIR(BGl_clearzd2isazd2cachez12zd2envzc0zzisa_walkz00,
							BNIL);
						BgL_g1122z00_1614 = BgL_list1330z00_1628;
					}
					BgL_g1123z00_1615 = CNST_TABLE_REF(((long) 2));
					{
						obj_t BgL_hooksz00_1617;
						obj_t BgL_hnamesz00_1618;

						BgL_hooksz00_1617 = BgL_g1122z00_1614;
						BgL_hnamesz00_1618 = BgL_g1123z00_1615;
					BgL_zc3z04anonymousza31322ze3z87_1619:
						if (NULLP(BgL_hooksz00_1617))
							{	/* Isa/walk.scm 43 */
								return BgL_globalsz00_17;
							}
						else
							{	/* Isa/walk.scm 43 */
								bool_t BgL_test1812z00_2292;

								{	/* Isa/walk.scm 43 */
									obj_t BgL_fun1329z00_1626;

									BgL_fun1329z00_1626 = CAR(((obj_t) BgL_hooksz00_1617));
									BgL_test1812z00_2292 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1329z00_1626)
										(BgL_fun1329z00_1626, BEOA));
								}
								if (BgL_test1812z00_2292)
									{	/* Isa/walk.scm 43 */
										obj_t BgL_arg1326z00_1623;
										obj_t BgL_arg1327z00_1624;

										BgL_arg1326z00_1623 = CDR(((obj_t) BgL_hooksz00_1617));
										BgL_arg1327z00_1624 = CDR(((obj_t) BgL_hnamesz00_1618));
										{
											obj_t BgL_hnamesz00_2304;
											obj_t BgL_hooksz00_2303;

											BgL_hooksz00_2303 = BgL_arg1326z00_1623;
											BgL_hnamesz00_2304 = BgL_arg1327z00_1624;
											BgL_hnamesz00_1618 = BgL_hnamesz00_2304;
											BgL_hooksz00_1617 = BgL_hooksz00_2303;
											goto BgL_zc3z04anonymousza31322ze3z87_1619;
										}
									}
								else
									{	/* Isa/walk.scm 43 */
										obj_t BgL_arg1328z00_1625;

										BgL_arg1328z00_1625 = CAR(((obj_t) BgL_hnamesz00_1618));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string1770z00zzisa_walkz00, BgL_arg1328z00_1625);
									}
							}
					}
				}
		}

	}



/* &isa-walk! */
	obj_t BGl_z62isazd2walkz12za2zzisa_walkz00(obj_t BgL_envz00_2079,
		obj_t BgL_globalsz00_2080)
	{
		{	/* Isa/walk.scm 40 */
			return BGl_isazd2walkz12zc0zzisa_walkz00(BgL_globalsz00_2080);
		}

	}



/* &init-isa-cache! */
	obj_t BGl_z62initzd2isazd2cachez12z70zzisa_walkz00(obj_t BgL_envz00_2081)
	{
		{	/* Isa/walk.scm 56 */
			{	/* Isa/walk.scm 57 */
				bool_t BgL_test1813z00_2309;

				{	/* Isa/walk.scm 57 */
					bool_t BgL_res1740z00_2105;

					{	/* Isa/walk.scm 57 */
						obj_t BgL_objz00_2106;

						BgL_objz00_2106 = BGl_za2isazf2cdepthza2zf2zzisa_walkz00;
						BgL_res1740z00_2105 =
							BGl_isazf3zf3zz__objectz00(BgL_objz00_2106,
							BGl_globalz00zzast_varz00);
					}
					BgL_test1813z00_2309 = BgL_res1740z00_2105;
				}
				if (BgL_test1813z00_2309)
					{	/* Isa/walk.scm 57 */
						BFALSE;
					}
				else
					{	/* Isa/walk.scm 57 */
						BGl_za2isazf2cdepthza2zf2zzisa_walkz00 =
							BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
									3)), CNST_TABLE_REF(((long) 4)));
						BGl_za2isazd2objectzf2cdepthza2z20zzisa_walkz00 =
							BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
									5)), CNST_TABLE_REF(((long) 4)));
						BGl_za2isazf2finalza2zf2zzisa_walkz00 =
							BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
									6)), CNST_TABLE_REF(((long) 4)));
						BGl_za2isazd2objectzf2finalza2z20zzisa_walkz00 =
							BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
									7)), CNST_TABLE_REF(((long) 4)));
			}}
			return BUNSPEC;
		}

	}



/* &clear-isa-cache! */
	obj_t BGl_z62clearzd2isazd2cachez12z70zzisa_walkz00(obj_t BgL_envz00_2082)
	{
		{	/* Isa/walk.scm 67 */
			BGl_za2isazf2cdepthza2zf2zzisa_walkz00 = BFALSE;
			BGl_za2isazd2objectzf2cdepthza2z20zzisa_walkz00 = BFALSE;
			BGl_za2isazf2finalza2zf2zzisa_walkz00 = BFALSE;
			return (BGl_za2isazd2objectzf2finalza2z20zzisa_walkz00 = BFALSE, BUNSPEC);
		}

	}



/* isa-fun! */
	obj_t BGl_isazd2funz12zc0zzisa_walkz00(obj_t BgL_varz00_18)
	{
		{	/* Isa/walk.scm 76 */
			{	/* Isa/walk.scm 77 */
				obj_t BgL_arg1334z00_1630;

				BgL_arg1334z00_1630 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_idz00);
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1334z00_1630);
			}
			{	/* Isa/walk.scm 78 */
				BgL_valuez00_bglt BgL_funz00_1631;

				BgL_funz00_1631 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_valuez00);
				{	/* Isa/walk.scm 78 */
					obj_t BgL_bodyz00_1632;

					BgL_bodyz00_1632 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1631)))->BgL_bodyz00);
					{	/* Isa/walk.scm 79 */

						BgL_bodyz00_1632 =
							((obj_t)
							BGl_isaz12z12zzisa_walkz00(
								((BgL_nodez00_bglt) BgL_bodyz00_1632)));
						BGl_leavezd2functionzd2zztools_errorz00();
						return BgL_varz00_18;
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzisa_walkz00()
	{
		{	/* Isa/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzisa_walkz00()
	{
		{	/* Isa/walk.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_isaz12zd2envzc0zzisa_walkz00, BGl_proc1771z00zzisa_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string1772z00zzisa_walkz00);
		}

	}



/* &isa!1277 */
	obj_t BGl_z62isaz121277z70zzisa_walkz00(obj_t BgL_envz00_2086,
		obj_t BgL_nodez00_2087)
	{
		{	/* Isa/walk.scm 87 */
			return
				((obj_t)
				BGl_walk0z12z12zzast_walkz00(
					((BgL_nodez00_bglt) BgL_nodez00_2087),
					BGl_isaz12zd2envzc0zzisa_walkz00));
		}

	}



/* isa! */
	BgL_nodez00_bglt BGl_isaz12z12zzisa_walkz00(BgL_nodez00_bglt BgL_nodez00_19)
	{
		{	/* Isa/walk.scm 87 */
			{	/* Isa/walk.scm 87 */
				obj_t BgL_method1278z00_1648;

				{	/* Isa/walk.scm 87 */
					obj_t BgL_res1751z00_2007;

					{	/* Isa/walk.scm 87 */
						long BgL_objzd2classzd2numz00_1972;

						{	/* Isa/walk.scm 87 */
							long BgL_res1741z00_1975;

							BgL_res1741z00_1975 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_19));
							BgL_objzd2classzd2numz00_1972 = BgL_res1741z00_1975;
						}
						{	/* Isa/walk.scm 87 */
							obj_t BgL_arg1813z00_1973;

							BgL_arg1813z00_1973 =
								PROCEDURE_REF(BGl_isaz12zd2envzc0zzisa_walkz00,
								(int) (((long) 1)));
							{	/* Isa/walk.scm 87 */
								int BgL_offsetz00_1977;

								BgL_offsetz00_1977 = (int) (BgL_objzd2classzd2numz00_1972);
								{	/* Isa/walk.scm 87 */
									long BgL_offsetz00_1978;

									BgL_offsetz00_1978 =
										((long) (BgL_offsetz00_1977) - OBJECT_TYPE);
									{	/* Isa/walk.scm 87 */
										long BgL_modz00_1979;

										BgL_modz00_1979 =
											(BgL_offsetz00_1978 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Isa/walk.scm 87 */
											long BgL_restz00_1981;

											BgL_restz00_1981 =
												(BgL_offsetz00_1978 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Isa/walk.scm 87 */

												{	/* Isa/walk.scm 87 */
													obj_t BgL_bucketz00_1983;

													BgL_bucketz00_1983 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1973), BgL_modz00_1979);
													BgL_res1751z00_2007 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1983), BgL_restz00_1981);
					}}}}}}}}
					BgL_method1278z00_1648 = BgL_res1751z00_2007;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1278z00_1648) (BgL_method1278z00_1648,
						((obj_t) BgL_nodez00_19), BEOA));
			}
		}

	}



/* &isa! */
	BgL_nodez00_bglt BGl_z62isaz12z70zzisa_walkz00(obj_t BgL_envz00_2084,
		obj_t BgL_nodez00_2085)
	{
		{	/* Isa/walk.scm 87 */
			return BGl_isaz12z12zzisa_walkz00(((BgL_nodez00_bglt) BgL_nodez00_2085));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzisa_walkz00()
	{
		{	/* Isa/walk.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_isaz12zd2envzc0zzisa_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc1773z00zzisa_walkz00, BGl_string1774z00zzisa_walkz00);
		}

	}



/* &isa!-app1280 */
	BgL_nodez00_bglt BGl_z62isaz12zd2app1280za2zzisa_walkz00(obj_t
		BgL_envz00_2089, obj_t BgL_nodez00_2090)
	{
		{	/* Isa/walk.scm 93 */
			{
				obj_t BgL_typz00_2110;

				{	/* Isa/walk.scm 105 */
					obj_t BgL_typz00_2114;

					BgL_typz00_2114 =
						BGl_isazd2ofzd2zztype_miscz00(
						((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2090)));
					if (CBOOL(BgL_typz00_2114))
						{	/* Isa/walk.scm 106 */
							{	/* Isa/walk.scm 109 */
								bool_t BgL_test1815z00_2377;

								BgL_typz00_2110 = BgL_typz00_2114;
								{	/* Isa/walk.scm 102 */
									bool_t BgL_test1816z00_2378;

									{	/* Isa/walk.scm 102 */
										obj_t BgL_arg1528z00_2111;

										{	/* Isa/walk.scm 102 */
											BgL_globalz00_bglt BgL_arg1536z00_2112;

											{
												BgL_tclassz00_bglt BgL_auxz00_2379;

												{
													obj_t BgL_auxz00_2380;

													{	/* Isa/walk.scm 102 */
														BgL_objectz00_bglt BgL_tmpz00_2381;

														BgL_tmpz00_2381 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typz00_2110));
														BgL_auxz00_2380 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2381);
													}
													BgL_auxz00_2379 =
														((BgL_tclassz00_bglt) BgL_auxz00_2380);
												}
												BgL_arg1536z00_2112 =
													(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2379))->
													BgL_holderz00);
											}
											BgL_arg1528z00_2111 =
												(((BgL_globalz00_bglt) COBJECT(BgL_arg1536z00_2112))->
												BgL_importz00);
										}
										BgL_test1816z00_2378 =
											(BgL_arg1528z00_2111 == CNST_TABLE_REF(((long) 8)));
									}
									if (BgL_test1816z00_2378)
										{	/* Isa/walk.scm 103 */
											obj_t BgL_arg1521z00_2113;

											{
												BgL_tclassz00_bglt BgL_auxz00_2390;

												{
													obj_t BgL_auxz00_2391;

													{	/* Isa/walk.scm 103 */
														BgL_objectz00_bglt BgL_tmpz00_2392;

														BgL_tmpz00_2392 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typz00_2110));
														BgL_auxz00_2391 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2392);
													}
													BgL_auxz00_2390 =
														((BgL_tclassz00_bglt) BgL_auxz00_2391);
												}
												BgL_arg1521z00_2113 =
													(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2390))->
													BgL_subclassesz00);
											}
											BgL_test1815z00_2377 = NULLP(BgL_arg1521z00_2113);
										}
									else
										{	/* Isa/walk.scm 102 */
											BgL_test1815z00_2377 = ((bool_t) 0);
										}
								}
								if (BgL_test1815z00_2377)
									{	/* Isa/walk.scm 111 */
										bool_t BgL_test1817z00_2399;

										{	/* Isa/walk.scm 111 */
											BgL_typez00_bglt BgL_arg1364z00_2115;

											{	/* Isa/walk.scm 111 */
												obj_t BgL_arg1367z00_2116;

												BgL_arg1367z00_2116 =
													CAR(
													(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt) BgL_nodez00_2090)))->
														BgL_argsz00));
												BgL_arg1364z00_2115 =
													BGl_uncastedzd2typeze70z35zzisa_walkz00((
														(BgL_nodez00_bglt) BgL_arg1367z00_2116));
											}
											BgL_test1817z00_2399 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg1364z00_2115),
												BGl_tclassz00zzobject_classz00);
										}
										if (BgL_test1817z00_2399)
											{	/* Isa/walk.scm 112 */
												BgL_varz00_bglt BgL_nfunz00_2117;

												{	/* Isa/walk.scm 112 */
													BgL_nodez00_bglt BgL_duplicated1130z00_2118;
													BgL_varz00_bglt BgL_new1128z00_2119;

													BgL_duplicated1130z00_2118 =
														((BgL_nodez00_bglt)
														(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_2090)))->
															BgL_funz00));
													{	/* Isa/walk.scm 112 */
														BgL_varz00_bglt BgL_new1131z00_2120;

														BgL_new1131z00_2120 =
															((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_varz00_bgl))));
														{	/* Isa/walk.scm 112 */
															long BgL_arg1361z00_2121;

															{	/* Isa/walk.scm 112 */
																long BgL_res1753z00_2122;

																BgL_res1753z00_2122 =
																	BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
																BgL_arg1361z00_2121 = BgL_res1753z00_2122;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1131z00_2120),
																BgL_arg1361z00_2121);
														}
														BgL_new1128z00_2119 = BgL_new1131z00_2120;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1128z00_2119)))->
															BgL_locz00) =
														((obj_t) (((BgL_nodez00_bglt)
																	COBJECT(BgL_duplicated1130z00_2118))->
																BgL_locz00)), BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1128z00_2119)))->BgL_typez00) =
														((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																	COBJECT(BgL_duplicated1130z00_2118))->
																BgL_typez00)), BUNSPEC);
													((((BgL_varz00_bglt) COBJECT(BgL_new1128z00_2119))->
															BgL_variablez00) =
														((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																BGl_za2isazd2objectzf2finalza2z20zzisa_walkz00)),
														BUNSPEC);
													BgL_nfunz00_2117 = BgL_new1128z00_2119;
												}
												{	/* Isa/walk.scm 114 */
													obj_t BgL_arg1351z00_2123;
													BgL_castz00_bglt BgL_arg1352z00_2124;

													BgL_arg1351z00_2123 =
														(((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt) BgL_nodez00_2090)))->
														BgL_argsz00);
													{	/* Isa/walk.scm 115 */
														BgL_castz00_bglt BgL_new1134z00_2125;

														{	/* Isa/walk.scm 115 */
															BgL_castz00_bglt BgL_new1133z00_2126;

															BgL_new1133z00_2126 =
																((BgL_castz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_castz00_bgl))));
															{	/* Isa/walk.scm 115 */
																long BgL_arg1360z00_2127;

																{	/* Isa/walk.scm 115 */
																	long BgL_res1754z00_2128;

																	BgL_res1754z00_2128 =
																		BGL_CLASS_INDEX(BGl_castz00zzast_nodez00);
																	BgL_arg1360z00_2127 = BgL_res1754z00_2128;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1133z00_2126),
																	BgL_arg1360z00_2127);
															}
															{	/* Isa/walk.scm 115 */
																BgL_objectz00_bglt BgL_tmpz00_2428;

																BgL_tmpz00_2428 =
																	((BgL_objectz00_bglt) BgL_new1133z00_2126);
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2428,
																	BFALSE);
															}
															((BgL_objectz00_bglt) BgL_new1133z00_2126);
															BgL_new1134z00_2125 = BgL_new1133z00_2126;
														}
														((((BgL_nodez00_bglt) COBJECT(
																		((BgL_nodez00_bglt) BgL_new1134z00_2125)))->
																BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
														((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																			BgL_new1134z00_2125)))->BgL_typez00) =
															((BgL_typez00_bglt) ((BgL_typez00_bglt)
																	BGl_getzd2objectzd2typez00zztype_cachez00())),
															BUNSPEC);
														{
															BgL_nodez00_bglt BgL_auxz00_2438;

															{	/* Isa/walk.scm 116 */
																obj_t BgL_pairz00_2129;

																BgL_pairz00_2129 =
																	(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_nodez00_2090)))->
																	BgL_argsz00);
																BgL_auxz00_2438 =
																	((BgL_nodez00_bglt) CAR(BgL_pairz00_2129));
															}
															((((BgL_castz00_bglt)
																		COBJECT(BgL_new1134z00_2125))->BgL_argz00) =
																((BgL_nodez00_bglt) BgL_auxz00_2438), BUNSPEC);
														}
														BgL_arg1352z00_2124 = BgL_new1134z00_2125;
													}
													{	/* Isa/walk.scm 114 */
														obj_t BgL_auxz00_2446;
														obj_t BgL_tmpz00_2444;

														BgL_auxz00_2446 = ((obj_t) BgL_arg1352z00_2124);
														BgL_tmpz00_2444 = ((obj_t) BgL_arg1351z00_2123);
														SET_CAR(BgL_tmpz00_2444, BgL_auxz00_2446);
												}}
												((((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt) BgL_nodez00_2090)))->
														BgL_funz00) =
													((BgL_varz00_bglt) BgL_nfunz00_2117), BUNSPEC);
											}
										else
											{	/* Isa/walk.scm 119 */
												BgL_varz00_bglt BgL_nfunz00_2130;

												{	/* Isa/walk.scm 119 */
													BgL_nodez00_bglt BgL_duplicated1137z00_2131;
													BgL_varz00_bglt BgL_new1135z00_2132;

													BgL_duplicated1137z00_2131 =
														((BgL_nodez00_bglt)
														(((BgL_appz00_bglt) COBJECT(
																	((BgL_appz00_bglt) BgL_nodez00_2090)))->
															BgL_funz00));
													{	/* Isa/walk.scm 119 */
														BgL_varz00_bglt BgL_new1138z00_2133;

														BgL_new1138z00_2133 =
															((BgL_varz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_varz00_bgl))));
														{	/* Isa/walk.scm 119 */
															long BgL_arg1363z00_2134;

															{	/* Isa/walk.scm 119 */
																long BgL_res1755z00_2135;

																BgL_res1755z00_2135 =
																	BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
																BgL_arg1363z00_2134 = BgL_res1755z00_2135;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1138z00_2133),
																BgL_arg1363z00_2134);
														}
														BgL_new1135z00_2132 = BgL_new1138z00_2133;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1135z00_2132)))->
															BgL_locz00) =
														((obj_t) (((BgL_nodez00_bglt)
																	COBJECT(BgL_duplicated1137z00_2131))->
																BgL_locz00)), BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1135z00_2132)))->BgL_typez00) =
														((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																	COBJECT(BgL_duplicated1137z00_2131))->
																BgL_typez00)), BUNSPEC);
													((((BgL_varz00_bglt) COBJECT(BgL_new1135z00_2132))->
															BgL_variablez00) =
														((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																BGl_za2isazf2finalza2zf2zzisa_walkz00)),
														BUNSPEC);
													BgL_nfunz00_2130 = BgL_new1135z00_2132;
												}
												((((BgL_appz00_bglt) COBJECT(
																((BgL_appz00_bglt) BgL_nodez00_2090)))->
														BgL_funz00) =
													((BgL_varz00_bglt) BgL_nfunz00_2130), BUNSPEC);
									}}
								else
									{	/* Isa/walk.scm 122 */
										bool_t BgL_test1818z00_2468;

										{	/* Isa/walk.scm 122 */
											long BgL_arg1493z00_2136;
											obj_t BgL_arg1495z00_2137;

											{
												BgL_tclassz00_bglt BgL_auxz00_2469;

												{
													obj_t BgL_auxz00_2470;

													{	/* Isa/walk.scm 122 */
														BgL_objectz00_bglt BgL_tmpz00_2471;

														BgL_tmpz00_2471 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typz00_2114));
														BgL_auxz00_2470 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2471);
													}
													BgL_auxz00_2469 =
														((BgL_tclassz00_bglt) BgL_auxz00_2470);
												}
												BgL_arg1493z00_2136 =
													(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2469))->
													BgL_depthz00);
											}
											BgL_arg1495z00_2137 =
												BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
														(long) 9)));
											BgL_test1818z00_2468 =
												BGl_2zc3zc3zz__r4_numbers_6_5z00(BINT
												(BgL_arg1493z00_2136), BgL_arg1495z00_2137);
										}
										if (BgL_test1818z00_2468)
											{	/* Isa/walk.scm 123 */
												bool_t BgL_test1819z00_2481;

												{	/* Isa/walk.scm 123 */
													BgL_typez00_bglt BgL_arg1476z00_2138;

													{	/* Isa/walk.scm 123 */
														obj_t BgL_arg1477z00_2139;

														BgL_arg1477z00_2139 =
															CAR(
															(((BgL_appz00_bglt) COBJECT(
																		((BgL_appz00_bglt) BgL_nodez00_2090)))->
																BgL_argsz00));
														BgL_arg1476z00_2138 =
															BGl_uncastedzd2typeze70z35zzisa_walkz00((
																(BgL_nodez00_bglt) BgL_arg1477z00_2139));
													}
													BgL_test1819z00_2481 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_arg1476z00_2138),
														BGl_tclassz00zzobject_classz00);
												}
												if (BgL_test1819z00_2481)
													{	/* Isa/walk.scm 124 */
														BgL_varz00_bglt BgL_nfunz00_2140;
														BgL_literalz00_bglt BgL_depthz00_2141;
														BgL_castz00_bglt BgL_arg0z00_2142;

														{	/* Isa/walk.scm 124 */
															BgL_nodez00_bglt BgL_duplicated1141z00_2143;
															BgL_varz00_bglt BgL_new1139z00_2144;

															BgL_duplicated1141z00_2143 =
																((BgL_nodez00_bglt)
																(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_nodez00_2090)))->
																	BgL_funz00));
															{	/* Isa/walk.scm 124 */
																BgL_varz00_bglt BgL_new1142z00_2145;

																BgL_new1142z00_2145 =
																	((BgL_varz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_varz00_bgl))));
																{	/* Isa/walk.scm 124 */
																	long BgL_arg1421z00_2146;

																	{	/* Isa/walk.scm 124 */
																		long BgL_res1756z00_2147;

																		BgL_res1756z00_2147 =
																			BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
																		BgL_arg1421z00_2146 = BgL_res1756z00_2147;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1142z00_2145),
																		BgL_arg1421z00_2146);
																}
																BgL_new1139z00_2144 = BgL_new1142z00_2145;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1139z00_2144)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(BgL_duplicated1141z00_2143))->
																		BgL_locz00)), BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1139z00_2144)))->BgL_typez00) =
																((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																			COBJECT(BgL_duplicated1141z00_2143))->
																		BgL_typez00)), BUNSPEC);
															((((BgL_varz00_bglt)
																		COBJECT(BgL_new1139z00_2144))->
																	BgL_variablez00) =
																((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																		BGl_za2isazd2objectzf2cdepthza2z20zzisa_walkz00)),
																BUNSPEC);
															BgL_nfunz00_2140 = BgL_new1139z00_2144;
														}
														{	/* Isa/walk.scm 126 */
															BgL_literalz00_bglt BgL_new1144z00_2148;

															{	/* Isa/walk.scm 127 */
																BgL_literalz00_bglt BgL_new1143z00_2149;

																BgL_new1143z00_2149 =
																	((BgL_literalz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_literalz00_bgl))));
																{	/* Isa/walk.scm 127 */
																	long BgL_arg1441z00_2150;

																	{	/* Isa/walk.scm 127 */
																		long BgL_res1757z00_2151;

																		BgL_res1757z00_2151 =
																			BGL_CLASS_INDEX
																			(BGl_literalz00zzast_nodez00);
																		BgL_arg1441z00_2150 = BgL_res1757z00_2151;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1143z00_2149),
																		BgL_arg1441z00_2150);
																}
																{	/* Isa/walk.scm 127 */
																	BgL_objectz00_bglt BgL_tmpz00_2508;

																	BgL_tmpz00_2508 =
																		((BgL_objectz00_bglt) BgL_new1143z00_2149);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2508,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1143z00_2149);
																BgL_new1144z00_2148 = BgL_new1143z00_2149;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1144z00_2148)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt) (
																						(BgL_appz00_bglt)
																						BgL_nodez00_2090))))->BgL_locz00)),
																BUNSPEC);
															{
																BgL_typez00_bglt BgL_auxz00_2517;

																{	/* Isa/walk.scm 128 */
																	long BgL_arg1422z00_2152;

																	{
																		BgL_tclassz00_bglt BgL_auxz00_2519;

																		{
																			obj_t BgL_auxz00_2520;

																			{	/* Isa/walk.scm 128 */
																				BgL_objectz00_bglt BgL_tmpz00_2521;

																				BgL_tmpz00_2521 =
																					((BgL_objectz00_bglt)
																					((BgL_typez00_bglt) BgL_typz00_2114));
																				BgL_auxz00_2520 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_2521);
																			}
																			BgL_auxz00_2519 =
																				((BgL_tclassz00_bglt) BgL_auxz00_2520);
																		}
																		BgL_arg1422z00_2152 =
																			(((BgL_tclassz00_bglt)
																				COBJECT(BgL_auxz00_2519))->
																			BgL_depthz00);
																	}
																	BgL_auxz00_2517 =
																		BGl_getzd2typezd2atomz00zztype_typeofz00
																		(BINT(BgL_arg1422z00_2152));
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1144z00_2148)))->BgL_typez00) =
																	((BgL_typez00_bglt) BgL_auxz00_2517),
																	BUNSPEC);
															}
															{
																obj_t BgL_auxz00_2530;

																{	/* Isa/walk.scm 129 */
																	long BgL_tmpz00_2532;

																	{
																		BgL_tclassz00_bglt BgL_auxz00_2533;

																		{
																			obj_t BgL_auxz00_2534;

																			{	/* Isa/walk.scm 129 */
																				BgL_objectz00_bglt BgL_tmpz00_2535;

																				BgL_tmpz00_2535 =
																					((BgL_objectz00_bglt)
																					((BgL_typez00_bglt) BgL_typz00_2114));
																				BgL_auxz00_2534 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_2535);
																			}
																			BgL_auxz00_2533 =
																				((BgL_tclassz00_bglt) BgL_auxz00_2534);
																		}
																		BgL_tmpz00_2532 =
																			(((BgL_tclassz00_bglt)
																				COBJECT(BgL_auxz00_2533))->
																			BgL_depthz00);
																	}
																	BgL_auxz00_2530 = BINT(BgL_tmpz00_2532);
																}
																((((BgL_atomz00_bglt) COBJECT(
																				((BgL_atomz00_bglt)
																					BgL_new1144z00_2148)))->
																		BgL_valuez00) =
																	((obj_t) BgL_auxz00_2530), BUNSPEC);
															}
															BgL_depthz00_2141 = BgL_new1144z00_2148;
														}
														{	/* Isa/walk.scm 130 */
															BgL_castz00_bglt BgL_new1146z00_2153;

															{	/* Isa/walk.scm 130 */
																BgL_castz00_bglt BgL_new1145z00_2154;

																BgL_new1145z00_2154 =
																	((BgL_castz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_castz00_bgl))));
																{	/* Isa/walk.scm 130 */
																	long BgL_arg1448z00_2155;

																	{	/* Isa/walk.scm 130 */
																		long BgL_res1758z00_2156;

																		BgL_res1758z00_2156 =
																			BGL_CLASS_INDEX(BGl_castz00zzast_nodez00);
																		BgL_arg1448z00_2155 = BgL_res1758z00_2156;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1145z00_2154),
																		BgL_arg1448z00_2155);
																}
																{	/* Isa/walk.scm 130 */
																	BgL_objectz00_bglt BgL_tmpz00_2547;

																	BgL_tmpz00_2547 =
																		((BgL_objectz00_bglt) BgL_new1145z00_2154);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2547,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1145z00_2154);
																BgL_new1146z00_2153 = BgL_new1145z00_2154;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1146z00_2153)))->BgL_locz00) =
																((obj_t) BFALSE), BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1146z00_2153)))->BgL_typez00) =
																((BgL_typez00_bglt) ((BgL_typez00_bglt)
																		BGl_getzd2objectzd2typez00zztype_cachez00
																		())), BUNSPEC);
															{
																BgL_nodez00_bglt BgL_auxz00_2557;

																{	/* Isa/walk.scm 131 */
																	obj_t BgL_pairz00_2157;

																	BgL_pairz00_2157 =
																		(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_nodez00_2090)))->
																		BgL_argsz00);
																	BgL_auxz00_2557 =
																		((BgL_nodez00_bglt) CAR(BgL_pairz00_2157));
																}
																((((BgL_castz00_bglt)
																			COBJECT(BgL_new1146z00_2153))->
																		BgL_argz00) =
																	((BgL_nodez00_bglt) BgL_auxz00_2557),
																	BUNSPEC);
															}
															BgL_arg0z00_2142 = BgL_new1146z00_2153;
														}
														((((BgL_appz00_bglt) COBJECT(
																		((BgL_appz00_bglt) BgL_nodez00_2090)))->
																BgL_funz00) =
															((BgL_varz00_bglt) BgL_nfunz00_2140), BUNSPEC);
														{
															obj_t BgL_auxz00_2565;

															{	/* Isa/walk.scm 134 */
																obj_t BgL_arg1394z00_2158;

																{	/* Isa/walk.scm 134 */
																	obj_t BgL_pairz00_2159;

																	BgL_pairz00_2159 =
																		(((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_nodez00_2090)))->
																		BgL_argsz00);
																	{	/* Isa/walk.scm 134 */
																		obj_t BgL_pairz00_2160;

																		BgL_pairz00_2160 = CDR(BgL_pairz00_2159);
																		BgL_arg1394z00_2158 = CAR(BgL_pairz00_2160);
																}}
																{	/* Isa/walk.scm 134 */
																	obj_t BgL_list1395z00_2161;

																	{	/* Isa/walk.scm 134 */
																		obj_t BgL_arg1396z00_2162;

																		{	/* Isa/walk.scm 134 */
																			obj_t BgL_arg1417z00_2163;

																			BgL_arg1417z00_2163 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_depthz00_2141), BNIL);
																			BgL_arg1396z00_2162 =
																				MAKE_YOUNG_PAIR(BgL_arg1394z00_2158,
																				BgL_arg1417z00_2163);
																		}
																		BgL_list1395z00_2161 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_arg0z00_2142),
																			BgL_arg1396z00_2162);
																	}
																	BgL_auxz00_2565 = BgL_list1395z00_2161;
															}}
															((((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_nodez00_2090)))->
																	BgL_argsz00) =
																((obj_t) BgL_auxz00_2565), BUNSPEC);
													}}
												else
													{	/* Isa/walk.scm 135 */
														BgL_varz00_bglt BgL_nfunz00_2164;

														{	/* Isa/walk.scm 135 */
															BgL_nodez00_bglt BgL_duplicated1149z00_2165;
															BgL_varz00_bglt BgL_new1147z00_2166;

															BgL_duplicated1149z00_2165 =
																((BgL_nodez00_bglt)
																(((BgL_appz00_bglt) COBJECT(
																			((BgL_appz00_bglt) BgL_nodez00_2090)))->
																	BgL_funz00));
															{	/* Isa/walk.scm 135 */
																BgL_varz00_bglt BgL_new1150z00_2167;

																BgL_new1150z00_2167 =
																	((BgL_varz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_varz00_bgl))));
																{	/* Isa/walk.scm 135 */
																	long BgL_arg1474z00_2168;

																	{	/* Isa/walk.scm 135 */
																		long BgL_res1760z00_2169;

																		BgL_res1760z00_2169 =
																			BGL_CLASS_INDEX(BGl_varz00zzast_nodez00);
																		BgL_arg1474z00_2168 = BgL_res1760z00_2169;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1150z00_2167),
																		BgL_arg1474z00_2168);
																}
																BgL_new1147z00_2166 = BgL_new1150z00_2167;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1147z00_2166)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(BgL_duplicated1149z00_2165))->
																		BgL_locz00)), BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1147z00_2166)))->BgL_typez00) =
																((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																			COBJECT(BgL_duplicated1149z00_2165))->
																		BgL_typez00)), BUNSPEC);
															((((BgL_varz00_bglt)
																		COBJECT(BgL_new1147z00_2166))->
																	BgL_variablez00) =
																((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
																		BGl_za2isazf2cdepthza2zf2zzisa_walkz00)),
																BUNSPEC);
															BgL_nfunz00_2164 = BgL_new1147z00_2166;
														}
														{	/* Isa/walk.scm 135 */
															BgL_literalz00_bglt BgL_depthz00_2170;

															{	/* Isa/walk.scm 137 */
																BgL_literalz00_bglt BgL_new1152z00_2171;

																{	/* Isa/walk.scm 138 */
																	BgL_literalz00_bglt BgL_new1151z00_2172;

																	BgL_new1151z00_2172 =
																		((BgL_literalz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_literalz00_bgl))));
																	{	/* Isa/walk.scm 138 */
																		long BgL_arg1465z00_2173;

																		{	/* Isa/walk.scm 138 */
																			long BgL_res1761z00_2174;

																			BgL_res1761z00_2174 =
																				BGL_CLASS_INDEX
																				(BGl_literalz00zzast_nodez00);
																			BgL_arg1465z00_2173 = BgL_res1761z00_2174;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1151z00_2172),
																			BgL_arg1465z00_2173);
																	}
																	{	/* Isa/walk.scm 138 */
																		BgL_objectz00_bglt BgL_tmpz00_2596;

																		BgL_tmpz00_2596 =
																			((BgL_objectz00_bglt)
																			BgL_new1151z00_2172);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2596,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1151z00_2172);
																	BgL_new1152z00_2171 = BgL_new1151z00_2172;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1152z00_2171)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt) (
																							(BgL_appz00_bglt)
																							BgL_nodez00_2090))))->
																			BgL_locz00)), BUNSPEC);
																{
																	BgL_typez00_bglt BgL_auxz00_2605;

																	{	/* Isa/walk.scm 139 */
																		long BgL_arg1464z00_2175;

																		{
																			BgL_tclassz00_bglt BgL_auxz00_2607;

																			{
																				obj_t BgL_auxz00_2608;

																				{	/* Isa/walk.scm 139 */
																					BgL_objectz00_bglt BgL_tmpz00_2609;

																					BgL_tmpz00_2609 =
																						((BgL_objectz00_bglt)
																						((BgL_typez00_bglt)
																							BgL_typz00_2114));
																					BgL_auxz00_2608 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_2609);
																				}
																				BgL_auxz00_2607 =
																					((BgL_tclassz00_bglt)
																					BgL_auxz00_2608);
																			}
																			BgL_arg1464z00_2175 =
																				(((BgL_tclassz00_bglt)
																					COBJECT(BgL_auxz00_2607))->
																				BgL_depthz00);
																		}
																		BgL_auxz00_2605 =
																			BGl_getzd2typezd2atomz00zztype_typeofz00
																			(BINT(BgL_arg1464z00_2175));
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1152z00_2171)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_auxz00_2605),
																		BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_2618;

																	{	/* Isa/walk.scm 140 */
																		long BgL_tmpz00_2620;

																		{
																			BgL_tclassz00_bglt BgL_auxz00_2621;

																			{
																				obj_t BgL_auxz00_2622;

																				{	/* Isa/walk.scm 140 */
																					BgL_objectz00_bglt BgL_tmpz00_2623;

																					BgL_tmpz00_2623 =
																						((BgL_objectz00_bglt)
																						((BgL_typez00_bglt)
																							BgL_typz00_2114));
																					BgL_auxz00_2622 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_2623);
																				}
																				BgL_auxz00_2621 =
																					((BgL_tclassz00_bglt)
																					BgL_auxz00_2622);
																			}
																			BgL_tmpz00_2620 =
																				(((BgL_tclassz00_bglt)
																					COBJECT(BgL_auxz00_2621))->
																				BgL_depthz00);
																		}
																		BgL_auxz00_2618 = BINT(BgL_tmpz00_2620);
																	}
																	((((BgL_atomz00_bglt) COBJECT(
																					((BgL_atomz00_bglt)
																						BgL_new1152z00_2171)))->
																			BgL_valuez00) =
																		((obj_t) BgL_auxz00_2618), BUNSPEC);
																}
																BgL_depthz00_2170 = BgL_new1152z00_2171;
															}
															{	/* Isa/walk.scm 137 */

																((((BgL_appz00_bglt) COBJECT(
																				((BgL_appz00_bglt) BgL_nodez00_2090)))->
																		BgL_funz00) =
																	((BgL_varz00_bglt) BgL_nfunz00_2164),
																	BUNSPEC);
																{
																	obj_t BgL_auxz00_2633;

																	{	/* Isa/walk.scm 142 */
																		obj_t BgL_arg1449z00_2176;
																		obj_t BgL_arg1461z00_2177;

																		BgL_arg1449z00_2176 =
																			(((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						BgL_nodez00_2090)))->BgL_argsz00);
																		{	/* Isa/walk.scm 142 */
																			obj_t BgL_list1462z00_2178;

																			BgL_list1462z00_2178 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_depthz00_2170), BNIL);
																			BgL_arg1461z00_2177 =
																				BgL_list1462z00_2178;
																		}
																		BgL_auxz00_2633 =
																			BGl_appendzd221011zd2zzisa_walkz00
																			(BgL_arg1449z00_2176,
																			BgL_arg1461z00_2177);
																	}
																	((((BgL_appz00_bglt) COBJECT(
																					((BgL_appz00_bglt)
																						BgL_nodez00_2090)))->BgL_argsz00) =
																		((obj_t) BgL_auxz00_2633), BUNSPEC);
											}}}}}
										else
											{	/* Isa/walk.scm 122 */
												BFALSE;
											}
									}
							}
							return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2090));
						}
					else
						{	/* Isa/walk.scm 106 */
							return
								BGl_walk0z12z12zzast_walkz00(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_2090)),
								BGl_isaz12zd2envzc0zzisa_walkz00);
						}
				}
			}
		}

	}



/* uncasted-type~0 */
	BgL_typez00_bglt BGl_uncastedzd2typeze70z35zzisa_walkz00(BgL_nodez00_bglt
		BgL_nodez00_1737)
	{
		{	/* Isa/walk.scm 99 */
			if (BGl_isazf3zf3zz__objectz00(
					((obj_t) BgL_nodez00_1737), BGl_castz00zzast_nodez00))
				{	/* Isa/walk.scm 96 */
					return
						(((BgL_nodez00_bglt) COBJECT(
								(((BgL_castz00_bglt) COBJECT(
											((BgL_castz00_bglt) BgL_nodez00_1737)))->BgL_argz00)))->
						BgL_typez00);
				}
			else
				{	/* Isa/walk.scm 96 */
					return (((BgL_nodez00_bglt) COBJECT(BgL_nodez00_1737))->BgL_typez00);
				}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzisa_walkz00()
	{
		{	/* Isa/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 49974950),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 398780361),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzast_walkz00(((long) 343174175),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1775z00zzisa_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
