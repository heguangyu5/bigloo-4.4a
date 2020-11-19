/*===========================================================================*/
/*   (Trace/isloop.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Trace/isloop.scm) */
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

	typedef struct BgL_localz00_bgl
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
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

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

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

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

	typedef struct BgL_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
		obj_t BgL_functionsz00;
	}                 *BgL_funcallz00_bglt;

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

	typedef struct BgL_setqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}              *BgL_setqz00_bglt;

	typedef struct BgL_conditionalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		struct BgL_nodez00_bgl *BgL_truez00;
		struct BgL_nodez00_bgl *BgL_falsez00;
	}                     *BgL_conditionalz00_bglt;

	typedef struct BgL_switchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_switchz00_bglt;

	typedef struct BgL_letzd2funzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_localsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                   *BgL_letzd2funzd2_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;


	static obj_t BGl_tailzf3zf3zztrace_isloopz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zztrace_isloopz00();
	static obj_t BGl_z62tailzf3zd2conditional1329z43zztrace_isloopz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztrace_isloopz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62tailzf3zd2var1319z43zztrace_isloopz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62tailzf3zd2kwote1317z43zztrace_isloopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62isloopzf3z91zztrace_isloopz00(obj_t, obj_t);
	static obj_t BGl_z62tailzf3zd2letzd2fun1331z91zztrace_isloopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tailzf3zd2switch1335z43zztrace_isloopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztrace_isloopz00();
	static obj_t BGl_z62tailzf3zd2literal1315z43zztrace_isloopz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62tailzf3zd2letzd2var1333z91zztrace_isloopz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t
		BGl_isloopzf3zf3zztrace_isloopz00(BgL_letzd2funzd2_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zztrace_isloopz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zztrace_isloopz00();
	static obj_t BGl_z62tailzf3z91zztrace_isloopz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62tailzf31312z91zztrace_isloopz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zztrace_isloopz00();
	static obj_t BGl_z62tailzf3zd2setq1327z43zztrace_isloopz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_z62tailzf3zd2sequence1321z43zztrace_isloopz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zztrace_isloopz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_z62tailzf3zd2app1323z43zztrace_isloopz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_z62tailzf3zd2extern1337z43zztrace_isloopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztrace_isloopz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztrace_isloopz00();
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_z62tailzf3zd2funcall1325z43zztrace_isloopz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_tailzf3zd2envz21zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za791za7za7t1847za7,
		BGl_z62tailzf3z91zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1832z00zztrace_isloopz00,
		BgL_bgl_string1832za700za7za7t1848za7, "tail?1312", 9);
	      DEFINE_STRING(BGl_string1834z00zztrace_isloopz00,
		BgL_bgl_string1834za700za7za7t1849za7, "tail?", 5);
	      DEFINE_STRING(BGl_string1846z00zztrace_isloopz00,
		BgL_bgl_string1846za700za7za7t1850za7, "trace_isloop", 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_isloopzf3zd2envz21zztrace_isloopz00,
		BgL_bgl_za762isloopza7f3za791za71851z00,
		BGl_z62isloopzf3z91zztrace_isloopz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1831z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f31312za791852za7,
		BGl_z62tailzf31312z91zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1833z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2lit1853za7,
		BGl_z62tailzf3zd2literal1315z43zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1835z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2kwo1854za7,
		BGl_z62tailzf3zd2kwote1317z43zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1836z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2var1855za7,
		BGl_z62tailzf3zd2var1319z43zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1837z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2seq1856za7,
		BGl_z62tailzf3zd2sequence1321z43zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1838z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2app1857za7,
		BGl_z62tailzf3zd2app1323z43zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1839z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2fun1858za7,
		BGl_z62tailzf3zd2funcall1325z43zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1840z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2set1859za7,
		BGl_z62tailzf3zd2setq1327z43zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1841z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2con1860za7,
		BGl_z62tailzf3zd2conditional1329z43zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1842z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2let1861za7,
		BGl_z62tailzf3zd2letzd2fun1331z91zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1843z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2let1862za7,
		BGl_z62tailzf3zd2letzd2var1333z91zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1844z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2swi1863za7,
		BGl_z62tailzf3zd2switch1335z43zztrace_isloopz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1845z00zztrace_isloopz00,
		BgL_bgl_za762tailza7f3za7d2ext1864za7,
		BGl_z62tailzf3zd2extern1337z43zztrace_isloopz00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztrace_isloopz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztrace_isloopz00(long
		BgL_checksumz00_2193, char *BgL_fromz00_2194)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztrace_isloopz00))
				{
					BGl_requirezd2initializa7ationz75zztrace_isloopz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztrace_isloopz00();
					BGl_libraryzd2moduleszd2initz00zztrace_isloopz00();
					BGl_importedzd2moduleszd2initz00zztrace_isloopz00();
					BGl_genericzd2initzd2zztrace_isloopz00();
					BGl_methodzd2initzd2zztrace_isloopz00();
					return BGl_toplevelzd2initzd2zztrace_isloopz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztrace_isloopz00()
	{
		{	/* Trace/isloop.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "trace_isloop");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"trace_isloop");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "trace_isloop");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"trace_isloop");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"trace_isloop");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "trace_isloop");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "trace_isloop");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztrace_isloopz00()
	{
		{	/* Trace/isloop.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztrace_isloopz00()
	{
		{	/* Trace/isloop.scm 15 */
			return BUNSPEC;
		}

	}



/* isloop? */
	BGL_EXPORTED_DEF bool_t
		BGl_isloopzf3zf3zztrace_isloopz00(BgL_letzd2funzd2_bglt BgL_nodez00_17)
	{
		{	/* Trace/isloop.scm 38 */
			{	/* Trace/isloop.scm 40 */
				bool_t BgL_test1866z00_2212;

				{	/* Trace/isloop.scm 40 */
					bool_t BgL_test1867z00_2213;

					{	/* Trace/isloop.scm 40 */
						obj_t BgL_tmpz00_2214;

						BgL_tmpz00_2214 =
							(((BgL_letzd2funzd2_bglt) COBJECT(BgL_nodez00_17))->
							BgL_localsz00);
						BgL_test1867z00_2213 = PAIRP(BgL_tmpz00_2214);
					}
					if (BgL_test1867z00_2213)
						{	/* Trace/isloop.scm 40 */
							BgL_test1866z00_2212 =
								NULLP(CDR(
									(((BgL_letzd2funzd2_bglt) COBJECT(BgL_nodez00_17))->
										BgL_localsz00)));
						}
					else
						{	/* Trace/isloop.scm 40 */
							BgL_test1866z00_2212 = ((bool_t) 0);
						}
				}
				if (BgL_test1866z00_2212)
					{	/* Trace/isloop.scm 41 */
						bool_t BgL_test1868z00_2220;

						{	/* Trace/isloop.scm 41 */
							BgL_nodez00_bglt BgL_arg1464z00_1510;

							BgL_arg1464z00_1510 =
								(((BgL_letzd2funzd2_bglt) COBJECT(BgL_nodez00_17))->
								BgL_bodyz00);
							BgL_test1868z00_2220 =
								BGl_isazf3zf3zz__objectz00(((obj_t) BgL_arg1464z00_1510),
								BGl_appz00zzast_nodez00);
						}
						if (BgL_test1868z00_2220)
							{	/* Trace/isloop.scm 42 */
								bool_t BgL_test1869z00_2224;

								{	/* Trace/isloop.scm 42 */
									BgL_nodez00_bglt BgL_arg1449z00_1507;
									obj_t BgL_arg1461z00_1508;

									BgL_arg1449z00_1507 =
										(((BgL_letzd2funzd2_bglt) COBJECT(BgL_nodez00_17))->
										BgL_bodyz00);
									BgL_arg1461z00_1508 =
										CAR((((BgL_letzd2funzd2_bglt) COBJECT(BgL_nodez00_17))->
											BgL_localsz00));
									BgL_test1869z00_2224 =
										CBOOL(BGl_tailzf3zf3zztrace_isloopz00(BgL_arg1449z00_1507,
											((BgL_variablez00_bglt) BgL_arg1461z00_1508), BTRUE));
								}
								if (BgL_test1869z00_2224)
									{	/* Trace/isloop.scm 43 */
										BgL_valuez00_bglt BgL_funz00_1500;

										{
											BgL_variablez00_bglt BgL_auxz00_2231;

											{
												BgL_localz00_bglt BgL_auxz00_2232;

												{	/* Trace/isloop.scm 43 */
													obj_t BgL_pairz00_1974;

													BgL_pairz00_1974 =
														(((BgL_letzd2funzd2_bglt) COBJECT(BgL_nodez00_17))->
														BgL_localsz00);
													BgL_auxz00_2232 =
														((BgL_localz00_bglt) CAR(BgL_pairz00_1974));
												}
												BgL_auxz00_2231 =
													((BgL_variablez00_bglt) BgL_auxz00_2232);
											}
											BgL_funz00_1500 =
												(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_2231))->
												BgL_valuez00);
										}
										{	/* Trace/isloop.scm 45 */
											obj_t BgL_arg1421z00_1502;
											obj_t BgL_arg1422z00_1503;

											BgL_arg1421z00_1502 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_1500)))->
												BgL_bodyz00);
											BgL_arg1422z00_1503 =
												CAR((((BgL_letzd2funzd2_bglt) COBJECT(BgL_nodez00_17))->
													BgL_localsz00));
											return
												CBOOL(BGl_tailzf3zf3zztrace_isloopz00((
														(BgL_nodez00_bglt) BgL_arg1421z00_1502),
													((BgL_variablez00_bglt) BgL_arg1422z00_1503), BTRUE));
										}
									}
								else
									{	/* Trace/isloop.scm 42 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Trace/isloop.scm 41 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Trace/isloop.scm 40 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &isloop? */
	obj_t BGl_z62isloopzf3z91zztrace_isloopz00(obj_t BgL_envz00_2048,
		obj_t BgL_nodez00_2049)
	{
		{	/* Trace/isloop.scm 38 */
			return
				BBOOL(BGl_isloopzf3zf3zztrace_isloopz00(
					((BgL_letzd2funzd2_bglt) BgL_nodez00_2049)));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztrace_isloopz00()
	{
		{	/* Trace/isloop.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztrace_isloopz00()
	{
		{	/* Trace/isloop.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00,
				BGl_proc1831z00zztrace_isloopz00, BGl_nodez00zzast_nodez00,
				BGl_string1832z00zztrace_isloopz00);
		}

	}



/* &tail?1312 */
	obj_t BGl_z62tailzf31312z91zztrace_isloopz00(obj_t BgL_envz00_2051,
		obj_t BgL_nodez00_2052, obj_t BgL_funz00_2053, obj_t BgL_tailpz00_2054)
	{
		{	/* Trace/isloop.scm 50 */
			return BBOOL(((bool_t) 0));
		}

	}



/* tail? */
	obj_t BGl_tailzf3zf3zztrace_isloopz00(BgL_nodez00_bglt BgL_nodez00_18,
		BgL_variablez00_bglt BgL_funz00_19, obj_t BgL_tailpz00_20)
	{
		{	/* Trace/isloop.scm 50 */
			{	/* Trace/isloop.scm 50 */
				obj_t BgL_method1313z00_1521;

				{	/* Trace/isloop.scm 50 */
					obj_t BgL_res1822z00_2013;

					{	/* Trace/isloop.scm 50 */
						long BgL_objzd2classzd2numz00_1978;

						{	/* Trace/isloop.scm 50 */
							long BgL_res1812z00_1981;

							BgL_res1812z00_1981 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_18));
							BgL_objzd2classzd2numz00_1978 = BgL_res1812z00_1981;
						}
						{	/* Trace/isloop.scm 50 */
							obj_t BgL_arg1813z00_1979;

							BgL_arg1813z00_1979 =
								PROCEDURE_REF(BGl_tailzf3zd2envz21zztrace_isloopz00,
								(int) (((long) 1)));
							{	/* Trace/isloop.scm 50 */
								int BgL_offsetz00_1983;

								BgL_offsetz00_1983 = (int) (BgL_objzd2classzd2numz00_1978);
								{	/* Trace/isloop.scm 50 */
									long BgL_offsetz00_1984;

									BgL_offsetz00_1984 =
										((long) (BgL_offsetz00_1983) - OBJECT_TYPE);
									{	/* Trace/isloop.scm 50 */
										long BgL_modz00_1985;

										BgL_modz00_1985 =
											(BgL_offsetz00_1984 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Trace/isloop.scm 50 */
											long BgL_restz00_1987;

											BgL_restz00_1987 =
												(BgL_offsetz00_1984 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Trace/isloop.scm 50 */

												{	/* Trace/isloop.scm 50 */
													obj_t BgL_bucketz00_1989;

													BgL_bucketz00_1989 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1979), BgL_modz00_1985);
													BgL_res1822z00_2013 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1989), BgL_restz00_1987);
					}}}}}}}}
					BgL_method1313z00_1521 = BgL_res1822z00_2013;
				}
				return
					PROCEDURE_ENTRY(BgL_method1313z00_1521) (BgL_method1313z00_1521,
					((obj_t) BgL_nodez00_18),
					((obj_t) BgL_funz00_19), BgL_tailpz00_20, BEOA);
			}
		}

	}



/* &tail? */
	obj_t BGl_z62tailzf3z91zztrace_isloopz00(obj_t BgL_envz00_2055,
		obj_t BgL_nodez00_2056, obj_t BgL_funz00_2057, obj_t BgL_tailpz00_2058)
	{
		{	/* Trace/isloop.scm 50 */
			return
				BGl_tailzf3zf3zztrace_isloopz00(
				((BgL_nodez00_bglt) BgL_nodez00_2056),
				((BgL_variablez00_bglt) BgL_funz00_2057), BgL_tailpz00_2058);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztrace_isloopz00()
	{
		{	/* Trace/isloop.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_literalz00zzast_nodez00,
				BGl_proc1833z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_kwotez00zzast_nodez00,
				BGl_proc1835z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_varz00zzast_nodez00,
				BGl_proc1836z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_sequencez00zzast_nodez00,
				BGl_proc1837z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_appz00zzast_nodez00,
				BGl_proc1838z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_funcallz00zzast_nodez00,
				BGl_proc1839z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_setqz00zzast_nodez00,
				BGl_proc1840z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_conditionalz00zzast_nodez00,
				BGl_proc1841z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc1842z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc1843z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_switchz00zzast_nodez00,
				BGl_proc1844z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tailzf3zd2envz21zztrace_isloopz00, BGl_externz00zzast_nodez00,
				BGl_proc1845z00zztrace_isloopz00, BGl_string1834z00zztrace_isloopz00);
		}

	}



/* &tail?-extern1337 */
	obj_t BGl_z62tailzf3zd2extern1337z43zztrace_isloopz00(obj_t BgL_envz00_2071,
		obj_t BgL_nodez00_2072, obj_t BgL_funz00_2073, obj_t BgL_tailpz00_2074)
	{
		{	/* Trace/isloop.scm 150 */
			{	/* Trace/isloop.scm 151 */
				bool_t BgL_tmpz00_2299;

				{	/* Trace/isloop.scm 152 */
					obj_t BgL_g1310z00_2123;

					BgL_g1310z00_2123 =
						(((BgL_externz00_bglt) COBJECT(
								((BgL_externz00_bglt) BgL_nodez00_2072)))->BgL_exprza2za2);
					{
						obj_t BgL_l1308z00_2125;

						BgL_l1308z00_2125 = BgL_g1310z00_2123;
					BgL_zc3z04anonymousza31665ze3z87_2124:
						if (NULLP(BgL_l1308z00_2125))
							{	/* Trace/isloop.scm 152 */
								BgL_tmpz00_2299 = ((bool_t) 1);
							}
						else
							{	/* Trace/isloop.scm 152 */
								obj_t BgL_nvz00_2126;

								{	/* Trace/isloop.scm 152 */
									obj_t BgL_ez00_2127;

									BgL_ez00_2127 = CAR(((obj_t) BgL_l1308z00_2125));
									BgL_nvz00_2126 =
										BGl_tailzf3zf3zztrace_isloopz00(
										((BgL_nodez00_bglt) BgL_ez00_2127),
										((BgL_variablez00_bglt) BgL_funz00_2073), BFALSE);
								}
								if (CBOOL(BgL_nvz00_2126))
									{	/* Trace/isloop.scm 152 */
										obj_t BgL_arg1667z00_2128;

										BgL_arg1667z00_2128 = CDR(((obj_t) BgL_l1308z00_2125));
										{
											obj_t BgL_l1308z00_2313;

											BgL_l1308z00_2313 = BgL_arg1667z00_2128;
											BgL_l1308z00_2125 = BgL_l1308z00_2313;
											goto BgL_zc3z04anonymousza31665ze3z87_2124;
										}
									}
								else
									{	/* Trace/isloop.scm 152 */
										BgL_tmpz00_2299 = ((bool_t) 0);
									}
							}
					}
				}
				return BBOOL(BgL_tmpz00_2299);
			}
		}

	}



/* &tail?-switch1335 */
	obj_t BGl_z62tailzf3zd2switch1335z43zztrace_isloopz00(obj_t BgL_envz00_2075,
		obj_t BgL_nodez00_2076, obj_t BgL_funz00_2077, obj_t BgL_tailpz00_2078)
	{
		{	/* Trace/isloop.scm 142 */
			{	/* Trace/isloop.scm 143 */
				bool_t BgL_tmpz00_2315;

				{	/* Trace/isloop.scm 144 */
					bool_t BgL_test1872z00_2316;

					{	/* Trace/isloop.scm 144 */
						BgL_nodez00_bglt BgL_arg1664z00_2130;

						BgL_arg1664z00_2130 =
							(((BgL_switchz00_bglt) COBJECT(
									((BgL_switchz00_bglt) BgL_nodez00_2076)))->BgL_testz00);
						BgL_test1872z00_2316 =
							CBOOL(BGl_tailzf3zf3zztrace_isloopz00(BgL_arg1664z00_2130,
								((BgL_variablez00_bglt) BgL_funz00_2077), BFALSE));
					}
					if (BgL_test1872z00_2316)
						{	/* Trace/isloop.scm 145 */
							obj_t BgL_g1306z00_2131;

							BgL_g1306z00_2131 =
								(((BgL_switchz00_bglt) COBJECT(
										((BgL_switchz00_bglt) BgL_nodez00_2076)))->BgL_clausesz00);
							{
								obj_t BgL_l1304z00_2133;

								BgL_l1304z00_2133 = BgL_g1306z00_2131;
							BgL_zc3z04anonymousza31654ze3z87_2132:
								if (NULLP(BgL_l1304z00_2133))
									{	/* Trace/isloop.scm 145 */
										BgL_tmpz00_2315 = ((bool_t) 1);
									}
								else
									{	/* Trace/isloop.scm 145 */
										obj_t BgL_nvz00_2134;

										{	/* Trace/isloop.scm 145 */
											obj_t BgL_cz00_2135;

											BgL_cz00_2135 = CAR(((obj_t) BgL_l1304z00_2133));
											{	/* Trace/isloop.scm 145 */
												obj_t BgL_arg1663z00_2136;

												BgL_arg1663z00_2136 = CDR(((obj_t) BgL_cz00_2135));
												BgL_nvz00_2134 =
													BGl_tailzf3zf3zztrace_isloopz00(
													((BgL_nodez00_bglt) BgL_arg1663z00_2136),
													((BgL_variablez00_bglt) BgL_funz00_2077),
													BgL_tailpz00_2078);
											}
										}
										if (CBOOL(BgL_nvz00_2134))
											{	/* Trace/isloop.scm 145 */
												obj_t BgL_arg1662z00_2137;

												BgL_arg1662z00_2137 = CDR(((obj_t) BgL_l1304z00_2133));
												{
													obj_t BgL_l1304z00_2337;

													BgL_l1304z00_2337 = BgL_arg1662z00_2137;
													BgL_l1304z00_2133 = BgL_l1304z00_2337;
													goto BgL_zc3z04anonymousza31654ze3z87_2132;
												}
											}
										else
											{	/* Trace/isloop.scm 145 */
												BgL_tmpz00_2315 = ((bool_t) 0);
											}
									}
							}
						}
					else
						{	/* Trace/isloop.scm 144 */
							BgL_tmpz00_2315 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2315);
			}
		}

	}



/* &tail?-let-var1333 */
	obj_t BGl_z62tailzf3zd2letzd2var1333z91zztrace_isloopz00(obj_t
		BgL_envz00_2079, obj_t BgL_nodez00_2080, obj_t BgL_funz00_2081,
		obj_t BgL_tailpz00_2082)
	{
		{	/* Trace/isloop.scm 134 */
			{	/* Trace/isloop.scm 136 */
				bool_t BgL_test1875z00_2339;

				{	/* Trace/isloop.scm 136 */
					obj_t BgL_g1302z00_2139;

					BgL_g1302z00_2139 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2080)))->BgL_bindingsz00);
					{
						obj_t BgL_l1300z00_2141;

						BgL_l1300z00_2141 = BgL_g1302z00_2139;
					BgL_zc3z04anonymousza31640ze3z87_2140:
						if (NULLP(BgL_l1300z00_2141))
							{	/* Trace/isloop.scm 136 */
								BgL_test1875z00_2339 = ((bool_t) 1);
							}
						else
							{	/* Trace/isloop.scm 136 */
								obj_t BgL_nvz00_2142;

								{	/* Trace/isloop.scm 136 */
									obj_t BgL_bz00_2143;

									BgL_bz00_2143 = CAR(((obj_t) BgL_l1300z00_2141));
									{	/* Trace/isloop.scm 136 */
										obj_t BgL_arg1644z00_2144;

										BgL_arg1644z00_2144 = CDR(((obj_t) BgL_bz00_2143));
										BgL_nvz00_2142 =
											BGl_tailzf3zf3zztrace_isloopz00(
											((BgL_nodez00_bglt) BgL_arg1644z00_2144),
											((BgL_variablez00_bglt) BgL_funz00_2081), BFALSE);
									}
								}
								if (CBOOL(BgL_nvz00_2142))
									{	/* Trace/isloop.scm 136 */
										obj_t BgL_arg1641z00_2145;

										BgL_arg1641z00_2145 = CDR(((obj_t) BgL_l1300z00_2141));
										{
											obj_t BgL_l1300z00_2355;

											BgL_l1300z00_2355 = BgL_arg1641z00_2145;
											BgL_l1300z00_2141 = BgL_l1300z00_2355;
											goto BgL_zc3z04anonymousza31640ze3z87_2140;
										}
									}
								else
									{	/* Trace/isloop.scm 136 */
										BgL_test1875z00_2339 = ((bool_t) 0);
									}
							}
					}
				}
				if (BgL_test1875z00_2339)
					{	/* Trace/isloop.scm 137 */
						BgL_nodez00_bglt BgL_arg1639z00_2146;

						BgL_arg1639z00_2146 =
							(((BgL_letzd2varzd2_bglt) COBJECT(
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2080)))->BgL_bodyz00);
						return
							BGl_tailzf3zf3zztrace_isloopz00(BgL_arg1639z00_2146,
							((BgL_variablez00_bglt) BgL_funz00_2081), BgL_tailpz00_2082);
					}
				else
					{	/* Trace/isloop.scm 136 */
						return BFALSE;
					}
			}
		}

	}



/* &tail?-let-fun1331 */
	obj_t BGl_z62tailzf3zd2letzd2fun1331z91zztrace_isloopz00(obj_t
		BgL_envz00_2083, obj_t BgL_nodez00_2084, obj_t BgL_funz00_2085,
		obj_t BgL_tailpz00_2086)
	{
		{	/* Trace/isloop.scm 120 */
			{	/* Trace/isloop.scm 121 */
				bool_t BgL_tmpz00_2360;

				{	/* Trace/isloop.scm 122 */
					bool_t BgL_test1878z00_2361;

					{	/* Trace/isloop.scm 122 */
						BgL_nodez00_bglt BgL_arg1627z00_2148;

						BgL_arg1627z00_2148 =
							(((BgL_letzd2funzd2_bglt) COBJECT(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2084)))->BgL_bodyz00);
						BgL_test1878z00_2361 =
							CBOOL(BGl_tailzf3zf3zztrace_isloopz00(BgL_arg1627z00_2148,
								((BgL_variablez00_bglt) BgL_funz00_2085), BgL_tailpz00_2086));
					}
					if (BgL_test1878z00_2361)
						{	/* Trace/isloop.scm 122 */
							if (BGl_isloopzf3zf3zztrace_isloopz00(
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2084)))
								{	/* Trace/isloop.scm 124 */
									BgL_sfunz00_bglt BgL_i1115z00_2149;

									{
										BgL_valuez00_bglt BgL_auxz00_2370;

										{
											BgL_variablez00_bglt BgL_auxz00_2371;

											{
												BgL_localz00_bglt BgL_auxz00_2372;

												{	/* Trace/isloop.scm 124 */
													obj_t BgL_pairz00_2150;

													BgL_pairz00_2150 =
														(((BgL_letzd2funzd2_bglt) COBJECT(
																((BgL_letzd2funzd2_bglt) BgL_nodez00_2084)))->
														BgL_localsz00);
													BgL_auxz00_2372 =
														((BgL_localz00_bglt) CAR(BgL_pairz00_2150));
												}
												BgL_auxz00_2371 =
													((BgL_variablez00_bglt) BgL_auxz00_2372);
											}
											BgL_auxz00_2370 =
												(((BgL_variablez00_bglt) COBJECT(BgL_auxz00_2371))->
												BgL_valuez00);
										}
										BgL_i1115z00_2149 = ((BgL_sfunz00_bglt) BgL_auxz00_2370);
									}
									{	/* Trace/isloop.scm 125 */
										bool_t BgL_test1880z00_2380;

										{	/* Trace/isloop.scm 125 */
											obj_t BgL_arg1613z00_2151;

											BgL_arg1613z00_2151 =
												(((BgL_sfunz00_bglt) COBJECT(BgL_i1115z00_2149))->
												BgL_bodyz00);
											BgL_test1880z00_2380 =
												CBOOL(BGl_tailzf3zf3zztrace_isloopz00((
														(BgL_nodez00_bglt) BgL_arg1613z00_2151),
													((BgL_variablez00_bglt) BgL_funz00_2085),
													BgL_tailpz00_2086));
										}
										if (BgL_test1880z00_2380)
											{	/* Trace/isloop.scm 126 */
												obj_t BgL_g1298z00_2152;

												BgL_g1298z00_2152 =
													(((BgL_letzd2funzd2_bglt) COBJECT(
															((BgL_letzd2funzd2_bglt) BgL_nodez00_2084)))->
													BgL_localsz00);
												{
													obj_t BgL_l1296z00_2154;

													BgL_l1296z00_2154 = BgL_g1298z00_2152;
												BgL_zc3z04anonymousza31606ze3z87_2153:
													if (NULLP(BgL_l1296z00_2154))
														{	/* Trace/isloop.scm 126 */
															BgL_tmpz00_2360 = ((bool_t) 1);
														}
													else
														{	/* Trace/isloop.scm 127 */
															obj_t BgL_nvz00_2155;

															{	/* Trace/isloop.scm 127 */
																obj_t BgL_lz00_2156;

																BgL_lz00_2156 =
																	CAR(((obj_t) BgL_l1296z00_2154));
																{	/* Trace/isloop.scm 127 */
																	BgL_sfunz00_bglt BgL_i1116z00_2157;

																	BgL_i1116z00_2157 =
																		((BgL_sfunz00_bglt)
																		(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_lz00_2156))))->BgL_valuez00));
																	{	/* Trace/isloop.scm 128 */
																		obj_t BgL_arg1612z00_2158;

																		BgL_arg1612z00_2158 =
																			(((BgL_sfunz00_bglt)
																				COBJECT(BgL_i1116z00_2157))->
																			BgL_bodyz00);
																		BgL_nvz00_2155 =
																			BGl_tailzf3zf3zztrace_isloopz00((
																				(BgL_nodez00_bglt) BgL_arg1612z00_2158),
																			((BgL_variablez00_bglt) BgL_funz00_2085),
																			BFALSE);
																	}
																}
															}
															if (CBOOL(BgL_nvz00_2155))
																{	/* Trace/isloop.scm 126 */
																	obj_t BgL_arg1611z00_2159;

																	BgL_arg1611z00_2159 =
																		CDR(((obj_t) BgL_l1296z00_2154));
																	{
																		obj_t BgL_l1296z00_2404;

																		BgL_l1296z00_2404 = BgL_arg1611z00_2159;
																		BgL_l1296z00_2154 = BgL_l1296z00_2404;
																		goto BgL_zc3z04anonymousza31606ze3z87_2153;
																	}
																}
															else
																{	/* Trace/isloop.scm 126 */
																	BgL_tmpz00_2360 = ((bool_t) 0);
																}
														}
												}
											}
										else
											{	/* Trace/isloop.scm 125 */
												BgL_tmpz00_2360 = ((bool_t) 0);
											}
									}
								}
							else
								{	/* Trace/isloop.scm 123 */
									BgL_tmpz00_2360 = ((bool_t) 0);
								}
						}
					else
						{	/* Trace/isloop.scm 122 */
							BgL_tmpz00_2360 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2360);
			}
		}

	}



/* &tail?-conditional1329 */
	obj_t BGl_z62tailzf3zd2conditional1329z43zztrace_isloopz00(obj_t
		BgL_envz00_2087, obj_t BgL_nodez00_2088, obj_t BgL_funz00_2089,
		obj_t BgL_tailpz00_2090)
	{
		{	/* Trace/isloop.scm 112 */
			{	/* Trace/isloop.scm 114 */
				bool_t BgL_test1883z00_2406;

				{	/* Trace/isloop.scm 114 */
					BgL_nodez00_bglt BgL_arg1597z00_2161;

					BgL_arg1597z00_2161 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2088)))->BgL_testz00);
					BgL_test1883z00_2406 =
						CBOOL(BGl_tailzf3zf3zztrace_isloopz00(BgL_arg1597z00_2161,
							((BgL_variablez00_bglt) BgL_funz00_2089), BFALSE));
				}
				if (BgL_test1883z00_2406)
					{	/* Trace/isloop.scm 115 */
						obj_t BgL__andtest_1113z00_2162;

						{	/* Trace/isloop.scm 115 */
							BgL_nodez00_bglt BgL_arg1593z00_2163;

							BgL_arg1593z00_2163 =
								(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_2088)))->
								BgL_truez00);
							BgL__andtest_1113z00_2162 =
								BGl_tailzf3zf3zztrace_isloopz00(BgL_arg1593z00_2163,
								((BgL_variablez00_bglt) BgL_funz00_2089), BgL_tailpz00_2090);
						}
						if (CBOOL(BgL__andtest_1113z00_2162))
							{	/* Trace/isloop.scm 115 */
								BgL_nodez00_bglt BgL_arg1592z00_2164;

								BgL_arg1592z00_2164 =
									(((BgL_conditionalz00_bglt) COBJECT(
											((BgL_conditionalz00_bglt) BgL_nodez00_2088)))->
									BgL_falsez00);
								return BGl_tailzf3zf3zztrace_isloopz00(BgL_arg1592z00_2164,
									((BgL_variablez00_bglt) BgL_funz00_2089), BgL_tailpz00_2090);
							}
						else
							{	/* Trace/isloop.scm 115 */
								return BFALSE;
							}
					}
				else
					{	/* Trace/isloop.scm 114 */
						return BFALSE;
					}
			}
		}

	}



/* &tail?-setq1327 */
	obj_t BGl_z62tailzf3zd2setq1327z43zztrace_isloopz00(obj_t BgL_envz00_2091,
		obj_t BgL_nodez00_2092, obj_t BgL_funz00_2093, obj_t BgL_tailpz00_2094)
	{
		{	/* Trace/isloop.scm 105 */
			{	/* Trace/isloop.scm 107 */
				BgL_nodez00_bglt BgL_arg1588z00_2166;

				BgL_arg1588z00_2166 =
					(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2092)))->BgL_valuez00);
				return
					BGl_tailzf3zf3zztrace_isloopz00(BgL_arg1588z00_2166,
					((BgL_variablez00_bglt) BgL_funz00_2093), BFALSE);
			}
		}

	}



/* &tail?-funcall1325 */
	obj_t BGl_z62tailzf3zd2funcall1325z43zztrace_isloopz00(obj_t BgL_envz00_2095,
		obj_t BgL_nodez00_2096, obj_t BgL_funz00_2097, obj_t BgL_tailpz00_2098)
	{
		{	/* Trace/isloop.scm 97 */
			{	/* Trace/isloop.scm 99 */
				bool_t BgL_test1885z00_2426;

				{	/* Trace/isloop.scm 99 */
					obj_t BgL_g1294z00_2168;

					BgL_g1294z00_2168 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2096)))->BgL_argsz00);
					{
						obj_t BgL_l1292z00_2170;

						BgL_l1292z00_2170 = BgL_g1294z00_2168;
					BgL_zc3z04anonymousza31583ze3z87_2169:
						if (NULLP(BgL_l1292z00_2170))
							{	/* Trace/isloop.scm 99 */
								BgL_test1885z00_2426 = ((bool_t) 1);
							}
						else
							{	/* Trace/isloop.scm 99 */
								obj_t BgL_nvz00_2171;

								{	/* Trace/isloop.scm 99 */
									obj_t BgL_argz00_2172;

									BgL_argz00_2172 = CAR(((obj_t) BgL_l1292z00_2170));
									BgL_nvz00_2171 =
										BGl_tailzf3zf3zztrace_isloopz00(
										((BgL_nodez00_bglt) BgL_argz00_2172),
										((BgL_variablez00_bglt) BgL_funz00_2097), BFALSE);
								}
								if (CBOOL(BgL_nvz00_2171))
									{	/* Trace/isloop.scm 99 */
										obj_t BgL_arg1584z00_2173;

										BgL_arg1584z00_2173 = CDR(((obj_t) BgL_l1292z00_2170));
										{
											obj_t BgL_l1292z00_2440;

											BgL_l1292z00_2440 = BgL_arg1584z00_2173;
											BgL_l1292z00_2170 = BgL_l1292z00_2440;
											goto BgL_zc3z04anonymousza31583ze3z87_2169;
										}
									}
								else
									{	/* Trace/isloop.scm 99 */
										BgL_test1885z00_2426 = ((bool_t) 0);
									}
							}
					}
				}
				if (BgL_test1885z00_2426)
					{	/* Trace/isloop.scm 100 */
						BgL_nodez00_bglt BgL_arg1582z00_2174;

						BgL_arg1582z00_2174 =
							(((BgL_funcallz00_bglt) COBJECT(
									((BgL_funcallz00_bglt) BgL_nodez00_2096)))->BgL_funz00);
						return
							BGl_tailzf3zf3zztrace_isloopz00(BgL_arg1582z00_2174,
							((BgL_variablez00_bglt) BgL_funz00_2097), BFALSE);
					}
				else
					{	/* Trace/isloop.scm 99 */
						return BFALSE;
					}
			}
		}

	}



/* &tail?-app1323 */
	obj_t BGl_z62tailzf3zd2app1323z43zztrace_isloopz00(obj_t BgL_envz00_2099,
		obj_t BgL_nodez00_2100, obj_t BgL_funz00_2101, obj_t BgL_tailpz00_2102)
	{
		{	/* Trace/isloop.scm 86 */
			{	/* Trace/isloop.scm 88 */
				bool_t BgL_test1888z00_2445;

				{	/* Trace/isloop.scm 88 */
					obj_t BgL_g1290z00_2176;

					BgL_g1290z00_2176 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2100)))->BgL_argsz00);
					{
						obj_t BgL_l1288z00_2178;

						BgL_l1288z00_2178 = BgL_g1290z00_2176;
					BgL_zc3z04anonymousza31574ze3z87_2177:
						if (NULLP(BgL_l1288z00_2178))
							{	/* Trace/isloop.scm 88 */
								BgL_test1888z00_2445 = ((bool_t) 1);
							}
						else
							{	/* Trace/isloop.scm 88 */
								obj_t BgL_nvz00_2179;

								{	/* Trace/isloop.scm 88 */
									obj_t BgL_argz00_2180;

									BgL_argz00_2180 = CAR(((obj_t) BgL_l1288z00_2178));
									BgL_nvz00_2179 =
										BGl_tailzf3zf3zztrace_isloopz00(
										((BgL_nodez00_bglt) BgL_argz00_2180),
										((BgL_variablez00_bglt) BgL_funz00_2101), BFALSE);
								}
								if (CBOOL(BgL_nvz00_2179))
									{	/* Trace/isloop.scm 88 */
										obj_t BgL_arg1575z00_2181;

										BgL_arg1575z00_2181 = CDR(((obj_t) BgL_l1288z00_2178));
										{
											obj_t BgL_l1288z00_2459;

											BgL_l1288z00_2459 = BgL_arg1575z00_2181;
											BgL_l1288z00_2178 = BgL_l1288z00_2459;
											goto BgL_zc3z04anonymousza31574ze3z87_2177;
										}
									}
								else
									{	/* Trace/isloop.scm 88 */
										BgL_test1888z00_2445 = ((bool_t) 0);
									}
							}
					}
				}
				if (BgL_test1888z00_2445)
					{	/* Trace/isloop.scm 88 */
						{	/* Trace/isloop.scm 91 */
							bool_t BgL__ortest_1109z00_2182;

							if (
								(((obj_t)
										(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2100)))->
											BgL_funz00)) == BgL_funz00_2101))
								{	/* Trace/isloop.scm 91 */
									BgL__ortest_1109z00_2182 = ((bool_t) 0);
								}
							else
								{	/* Trace/isloop.scm 91 */
									BgL__ortest_1109z00_2182 = ((bool_t) 1);
								}
							if (BgL__ortest_1109z00_2182)
								{	/* Trace/isloop.scm 91 */
									return BBOOL(BgL__ortest_1109z00_2182);
								}
							else
								{	/* Trace/isloop.scm 91 */
									return BgL_tailpz00_2102;
								}
						}
					}
				else
					{	/* Trace/isloop.scm 88 */
						return BFALSE;
					}
			}
		}

	}



/* &tail?-sequence1321 */
	obj_t BGl_z62tailzf3zd2sequence1321z43zztrace_isloopz00(obj_t BgL_envz00_2103,
		obj_t BgL_nodez00_2104, obj_t BgL_funz00_2105, obj_t BgL_tailpz00_2106)
	{
		{	/* Trace/isloop.scm 75 */
			{
				obj_t BgL_nodesz00_2185;

				BgL_nodesz00_2185 =
					(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2104)))->BgL_nodesz00);
			BgL_loopz00_2184:
				if (NULLP(BgL_nodesz00_2185))
					{	/* Trace/isloop.scm 79 */
						return BTRUE;
					}
				else
					{	/* Trace/isloop.scm 79 */
						if (NULLP(CDR(((obj_t) BgL_nodesz00_2185))))
							{	/* Trace/isloop.scm 80 */
								obj_t BgL_arg1521z00_2186;

								BgL_arg1521z00_2186 = CAR(((obj_t) BgL_nodesz00_2185));
								return
									BGl_tailzf3zf3zztrace_isloopz00(
									((BgL_nodez00_bglt) BgL_arg1521z00_2186),
									((BgL_variablez00_bglt) BgL_funz00_2105), BTRUE);
							}
						else
							{	/* Trace/isloop.scm 81 */
								obj_t BgL__andtest_1106z00_2187;

								{	/* Trace/isloop.scm 81 */
									obj_t BgL_arg1536z00_2188;

									BgL_arg1536z00_2188 = CAR(((obj_t) BgL_nodesz00_2185));
									BgL__andtest_1106z00_2187 =
										BGl_tailzf3zf3zztrace_isloopz00(
										((BgL_nodez00_bglt) BgL_arg1536z00_2188),
										((BgL_variablez00_bglt) BgL_funz00_2105), BFALSE);
								}
								if (CBOOL(BgL__andtest_1106z00_2187))
									{	/* Trace/isloop.scm 81 */
										obj_t BgL_arg1528z00_2189;

										BgL_arg1528z00_2189 = CDR(((obj_t) BgL_nodesz00_2185));
										{
											obj_t BgL_nodesz00_2487;

											BgL_nodesz00_2487 = BgL_arg1528z00_2189;
											BgL_nodesz00_2185 = BgL_nodesz00_2487;
											goto BgL_loopz00_2184;
										}
									}
								else
									{	/* Trace/isloop.scm 81 */
										return BFALSE;
									}
							}
					}
			}
		}

	}



/* &tail?-var1319 */
	obj_t BGl_z62tailzf3zd2var1319z43zztrace_isloopz00(obj_t BgL_envz00_2107,
		obj_t BgL_nodez00_2108, obj_t BgL_funz00_2109, obj_t BgL_tailpz00_2110)
	{
		{	/* Trace/isloop.scm 68 */
			{	/* Trace/isloop.scm 70 */
				bool_t BgL_tmpz00_2490;

				if (
					(((obj_t)
							(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_2108)))->BgL_variablez00)) ==
						BgL_funz00_2109))
					{	/* Trace/isloop.scm 70 */
						BgL_tmpz00_2490 = ((bool_t) 0);
					}
				else
					{	/* Trace/isloop.scm 70 */
						BgL_tmpz00_2490 = ((bool_t) 1);
					}
				return BBOOL(BgL_tmpz00_2490);
			}
		}

	}



/* &tail?-kwote1317 */
	obj_t BGl_z62tailzf3zd2kwote1317z43zztrace_isloopz00(obj_t BgL_envz00_2111,
		obj_t BgL_nodez00_2112, obj_t BgL_funz00_2113, obj_t BgL_tailpz00_2114)
	{
		{	/* Trace/isloop.scm 62 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &tail?-literal1315 */
	obj_t BGl_z62tailzf3zd2literal1315z43zztrace_isloopz00(obj_t BgL_envz00_2115,
		obj_t BgL_nodez00_2116, obj_t BgL_funz00_2117, obj_t BgL_tailpz00_2118)
	{
		{	/* Trace/isloop.scm 56 */
			return BBOOL(((bool_t) 1));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztrace_isloopz00()
	{
		{	/* Trace/isloop.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zzast_letz00(((long) 469204214),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1846z00zztrace_isloopz00));
		}

	}

#ifdef __cplusplus
}
#endif
