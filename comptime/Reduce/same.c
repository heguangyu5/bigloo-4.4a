/*===========================================================================*/
/*   (Reduce/same.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/same.scm) */
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

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_kwotez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}               *BgL_kwotez00_bglt;

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

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

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

	typedef struct BgL_pragmaz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_formatz00;
	}                *BgL_pragmaz00_bglt;

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

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

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

	typedef struct BgL_failz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_procz00;
		struct BgL_nodez00_bgl *BgL_msgz00;
		struct BgL_nodez00_bgl *BgL_objz00;
	}              *BgL_failz00_bglt;

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

	typedef struct BgL_syncz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_mutexz00;
		struct BgL_nodez00_bgl *BgL_prelockz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}              *BgL_syncz00_bglt;


	static bool_t BGl_samezd2nodeza2zf3z83zzreduce_samez00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62samezd2nodezf3zd2fail1304z91zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzreduce_samez00();
	static obj_t BGl_z62samezd2nodezf3zd2valloc1298z91zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_samez00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62samezd2nodezf3zd2sequence1280z91zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62samezd2nodezf3zd2appzd2ly1284z43zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	static bool_t BGl_aliasedzf3zf3zzreduce_samez00(BgL_variablez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl_z62samezd2nodezf3zd2extern1290z91zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzreduce_samez00();
	extern obj_t BGl_vallocz00zzast_nodez00;
	static obj_t BGl_z62samezd2nodezf31271z43zzreduce_samez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62samezd2nodezf3zd2getfield1294z91zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_z62samezd2nodezf3zd2atom1274z91zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62samezd2nodezf3zd2pragma1292z91zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62samezd2nodezf3zd2setfield1296z91zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62samezd2nodezf3zd2condition1302z91zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_samez00 = BUNSPEC;
	static obj_t BGl_z62samezd2nodezf3zd2app1288z91zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62samezd2nodezf3zd2letzd2var1306z43zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62samezd2nodezf3zd2cast1300z91zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzreduce_samez00();
	static obj_t BGl_genericzd2initzd2zzreduce_samez00();
	extern obj_t BGl_getfieldz00zzast_nodez00;
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62samezd2nodezf3zd2funcall1286z91zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62samezd2nodezf3zd2sync1282z91zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_samez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzreduce_samez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_samez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_samez00();
	BGL_EXPORTED_DECL bool_t
		BGl_samezd2nodezf3z21zzreduce_samez00(BgL_nodez00_bglt, BgL_nodez00_bglt,
		obj_t);
	static obj_t BGl_z62samezd2nodezf3z43zzreduce_samez00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setfieldz00zzast_nodez00;
	static obj_t BGl_z62samezd2nodezf3zd2var1278z91zzreduce_samez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_z62samezd2nodezf3zd2kwote1276z91zzreduce_samez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1947z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1973za7,
		BGl_z62samezd2nodezf31271z43zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1949z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1974za7,
		BGl_z62samezd2nodezf3zd2atom1274z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1951z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1975za7,
		BGl_z62samezd2nodezf3zd2kwote1276z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1952z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1976za7,
		BGl_z62samezd2nodezf3zd2var1278z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1953z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1977za7,
		BGl_z62samezd2nodezf3zd2sequence1280z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1954z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1978za7,
		BGl_z62samezd2nodezf3zd2sync1282z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1955z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1979za7,
		BGl_z62samezd2nodezf3zd2appzd2ly1284z43zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1956z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1980za7,
		BGl_z62samezd2nodezf3zd2funcall1286z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1957z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1981za7,
		BGl_z62samezd2nodezf3zd2app1288z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1958z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1982za7,
		BGl_z62samezd2nodezf3zd2extern1290z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1959z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1983za7,
		BGl_z62samezd2nodezf3zd2pragma1292z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1960z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1984za7,
		BGl_z62samezd2nodezf3zd2getfield1294z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1961z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1985za7,
		BGl_z62samezd2nodezf3zd2setfield1296z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1962z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1986za7,
		BGl_z62samezd2nodezf3zd2valloc1298z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1963z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1987za7,
		BGl_z62samezd2nodezf3zd2cast1300z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1964z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1988za7,
		BGl_z62samezd2nodezf3zd2condition1302z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1965z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1989za7,
		BGl_z62samezd2nodezf3zd2fail1304z91zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1966z00zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1990za7,
		BGl_z62samezd2nodezf3zd2letzd2var1306z43zzreduce_samez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1948z00zzreduce_samez00,
		BgL_bgl_string1948za700za7za7r1991za7, "same-node?1271", 14);
	      DEFINE_STRING(BGl_string1950z00zzreduce_samez00,
		BgL_bgl_string1950za700za7za7r1992za7, "same-node?", 10);
	      DEFINE_STRING(BGl_string1967z00zzreduce_samez00,
		BgL_bgl_string1967za700za7za7r1993za7, "reduce_same", 11);
	      DEFINE_STRING(BGl_string1968z00zzreduce_samez00,
		BgL_bgl_string1968za700za7za7r1994za7, "read ", 5);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
		BgL_bgl_za762sameza7d2nodeza7f1995za7,
		BGl_z62samezd2nodezf3z43zzreduce_samez00, 0L, BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzreduce_samez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_samez00(long
		BgL_checksumz00_2403, char *BgL_fromz00_2404)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_samez00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_samez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzreduce_samez00();
					BGl_libraryzd2moduleszd2initz00zzreduce_samez00();
					BGl_cnstzd2initzd2zzreduce_samez00();
					BGl_importedzd2moduleszd2initz00zzreduce_samez00();
					BGl_genericzd2initzd2zzreduce_samez00();
					BGl_methodzd2initzd2zzreduce_samez00();
					return BGl_toplevelzd2initzd2zzreduce_samez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_samez00()
	{
		{	/* Reduce/same.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"reduce_same");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_same");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_same");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_same");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"reduce_same");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"reduce_same");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"reduce_same");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"reduce_same");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "reduce_same");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"reduce_same");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_samez00()
	{
		{	/* Reduce/same.scm 15 */
			{	/* Reduce/same.scm 15 */
				obj_t BgL_cportz00_2240;

				{	/* Reduce/same.scm 15 */
					obj_t BgL_stringz00_2248;

					BgL_stringz00_2248 = BGl_string1968z00zzreduce_samez00;
					{	/* Reduce/same.scm 15 */
						obj_t BgL_startz00_2249;

						BgL_startz00_2249 = BINT(((long) 0));
						{	/* Reduce/same.scm 15 */
							obj_t BgL_endz00_2250;

							BgL_endz00_2250 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2248)));
							{	/* Reduce/same.scm 15 */

								BgL_cportz00_2240 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2248, BgL_startz00_2249, BgL_endz00_2250);
				}}}}
				{
					long BgL_iz00_2241;

					BgL_iz00_2241 = ((long) 0);
				BgL_loopz00_2242:
					if ((BgL_iz00_2241 == ((long) -1)))
						{	/* Reduce/same.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/same.scm 15 */
							{	/* Reduce/same.scm 15 */
								obj_t BgL_arg1970z00_2244;

								{	/* Reduce/same.scm 15 */

									{	/* Reduce/same.scm 15 */
										obj_t BgL_locationz00_2246;

										BgL_locationz00_2246 = BBOOL(((bool_t) 0));
										{	/* Reduce/same.scm 15 */

											BgL_arg1970z00_2244 =
												BGl_readz00zz__readerz00(BgL_cportz00_2240,
												BgL_locationz00_2246);
										}
									}
								}
								{	/* Reduce/same.scm 15 */
									int BgL_tmpz00_2434;

									BgL_tmpz00_2434 = (int) (BgL_iz00_2241);
									CNST_TABLE_SET(BgL_tmpz00_2434, BgL_arg1970z00_2244);
							}}
							{	/* Reduce/same.scm 15 */
								int BgL_auxz00_2247;

								BgL_auxz00_2247 = (int) ((BgL_iz00_2241 - ((long) 1)));
								{
									long BgL_iz00_2439;

									BgL_iz00_2439 = (long) (BgL_auxz00_2247);
									BgL_iz00_2241 = BgL_iz00_2439;
									goto BgL_loopz00_2242;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzreduce_samez00()
	{
		{	/* Reduce/same.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_samez00()
	{
		{	/* Reduce/same.scm 15 */
			return BUNSPEC;
		}

	}



/* same-node*? */
	bool_t BGl_samezd2nodeza2zf3z83zzreduce_samez00(obj_t BgL_node1z00_57,
		obj_t BgL_node2z00_58, obj_t BgL_aliasz00_59)
	{
		{	/* Reduce/same.scm 227 */
		BGl_samezd2nodeza2zf3z83zzreduce_samez00:
			if (NULLP(BgL_node1z00_57))
				{	/* Reduce/same.scm 229 */
					return NULLP(BgL_node2z00_58);
				}
			else
				{	/* Reduce/same.scm 229 */
					if (NULLP(BgL_node2z00_58))
						{	/* Reduce/same.scm 231 */
							return ((bool_t) 0);
						}
					else
						{	/* Reduce/same.scm 233 */
							bool_t BgL_test2000z00_2447;

							{	/* Reduce/same.scm 233 */
								obj_t BgL_arg1319z00_1391;
								obj_t BgL_arg1322z00_1392;

								BgL_arg1319z00_1391 = CAR(((obj_t) BgL_node1z00_57));
								BgL_arg1322z00_1392 = CAR(((obj_t) BgL_node2z00_58));
								BgL_test2000z00_2447 =
									BGl_samezd2nodezf3z21zzreduce_samez00(
									((BgL_nodez00_bglt) BgL_arg1319z00_1391),
									((BgL_nodez00_bglt) BgL_arg1322z00_1392), BgL_aliasz00_59);
							}
							if (BgL_test2000z00_2447)
								{	/* Reduce/same.scm 234 */
									obj_t BgL_arg1316z00_1389;
									obj_t BgL_arg1317z00_1390;

									BgL_arg1316z00_1389 = CDR(((obj_t) BgL_node1z00_57));
									BgL_arg1317z00_1390 = CDR(((obj_t) BgL_node2z00_58));
									{
										obj_t BgL_node2z00_2460;
										obj_t BgL_node1z00_2459;

										BgL_node1z00_2459 = BgL_arg1316z00_1389;
										BgL_node2z00_2460 = BgL_arg1317z00_1390;
										BgL_node2z00_58 = BgL_node2z00_2460;
										BgL_node1z00_57 = BgL_node1z00_2459;
										goto BGl_samezd2nodeza2zf3z83zzreduce_samez00;
									}
								}
							else
								{	/* Reduce/same.scm 233 */
									return ((bool_t) 0);
								}
						}
				}
		}

	}



/* aliased? */
	bool_t BGl_aliasedzf3zf3zzreduce_samez00(BgL_variablez00_bglt BgL_var1z00_60,
		BgL_variablez00_bglt BgL_var2z00_61, obj_t BgL_aliasz00_62)
	{
		{	/* Reduce/same.scm 241 */
			{
				obj_t BgL_aliasz00_1394;

				BgL_aliasz00_1394 = BgL_aliasz00_62;
			BgL_zc3z04anonymousza31323ze3z87_1395:
				if (NULLP(BgL_aliasz00_1394))
					{	/* Reduce/same.scm 244 */
						return ((bool_t) 0);
					}
				else
					{	/* Reduce/same.scm 246 */
						bool_t BgL_test2002z00_2463;

						{	/* Reduce/same.scm 246 */
							obj_t BgL_tmpz00_2464;

							{	/* Reduce/same.scm 246 */
								obj_t BgL_pairz00_1902;

								BgL_pairz00_1902 = CAR(((obj_t) BgL_aliasz00_1394));
								BgL_tmpz00_2464 = CAR(BgL_pairz00_1902);
							}
							BgL_test2002z00_2463 =
								(BgL_tmpz00_2464 == ((obj_t) BgL_var1z00_60));
						}
						if (BgL_test2002z00_2463)
							{	/* Reduce/same.scm 247 */
								bool_t BgL_test2003z00_2470;

								{	/* Reduce/same.scm 247 */
									obj_t BgL_tmpz00_2471;

									{	/* Reduce/same.scm 247 */
										obj_t BgL_pairz00_1904;

										BgL_pairz00_1904 = CAR(((obj_t) BgL_aliasz00_1394));
										BgL_tmpz00_2471 = CDR(BgL_pairz00_1904);
									}
									BgL_test2003z00_2470 =
										(BgL_tmpz00_2471 == ((obj_t) BgL_var2z00_61));
								}
								if (BgL_test2003z00_2470)
									{	/* Reduce/same.scm 247 */
										return ((bool_t) 1);
									}
								else
									{
										obj_t BgL_aliasz00_2477;

										BgL_aliasz00_2477 = CDR(((obj_t) BgL_aliasz00_1394));
										BgL_aliasz00_1394 = BgL_aliasz00_2477;
										goto BgL_zc3z04anonymousza31323ze3z87_1395;
									}
							}
						else
							{	/* Reduce/same.scm 250 */
								bool_t BgL_test2004z00_2480;

								{	/* Reduce/same.scm 250 */
									obj_t BgL_tmpz00_2481;

									{	/* Reduce/same.scm 250 */
										obj_t BgL_pairz00_1907;

										BgL_pairz00_1907 = CAR(((obj_t) BgL_aliasz00_1394));
										BgL_tmpz00_2481 = CAR(BgL_pairz00_1907);
									}
									BgL_test2004z00_2480 =
										(BgL_tmpz00_2481 == ((obj_t) BgL_var2z00_61));
								}
								if (BgL_test2004z00_2480)
									{	/* Reduce/same.scm 251 */
										bool_t BgL_test2005z00_2487;

										{	/* Reduce/same.scm 251 */
											obj_t BgL_tmpz00_2488;

											{	/* Reduce/same.scm 251 */
												obj_t BgL_pairz00_1909;

												BgL_pairz00_1909 = CAR(((obj_t) BgL_aliasz00_1394));
												BgL_tmpz00_2488 = CDR(BgL_pairz00_1909);
											}
											BgL_test2005z00_2487 =
												(BgL_tmpz00_2488 == ((obj_t) BgL_var1z00_60));
										}
										if (BgL_test2005z00_2487)
											{	/* Reduce/same.scm 251 */
												return ((bool_t) 1);
											}
										else
											{
												obj_t BgL_aliasz00_2494;

												BgL_aliasz00_2494 = CDR(((obj_t) BgL_aliasz00_1394));
												BgL_aliasz00_1394 = BgL_aliasz00_2494;
												goto BgL_zc3z04anonymousza31323ze3z87_1395;
											}
									}
								else
									{
										obj_t BgL_aliasz00_2497;

										BgL_aliasz00_2497 = CDR(((obj_t) BgL_aliasz00_1394));
										BgL_aliasz00_1394 = BgL_aliasz00_2497;
										goto BgL_zc3z04anonymousza31323ze3z87_1395;
									}
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzreduce_samez00()
	{
		{	/* Reduce/same.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_samez00()
	{
		{	/* Reduce/same.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_proc1947z00zzreduce_samez00, BGl_nodez00zzast_nodez00,
				BGl_string1948z00zzreduce_samez00);
		}

	}



/* &same-node?1271 */
	obj_t BGl_z62samezd2nodezf31271z43zzreduce_samez00(obj_t BgL_envz00_2147,
		obj_t BgL_node1z00_2148, obj_t BgL_node2z00_2149, obj_t BgL_aliasz00_2150)
	{
		{	/* Reduce/same.scm 26 */
			return BBOOL(((bool_t) 0));
		}

	}



/* same-node? */
	BGL_EXPORTED_DEF bool_t BGl_samezd2nodezf3z21zzreduce_samez00(BgL_nodez00_bglt
		BgL_node1z00_3, BgL_nodez00_bglt BgL_node2z00_4, obj_t BgL_aliasz00_5)
	{
		{	/* Reduce/same.scm 26 */
			{	/* Reduce/same.scm 26 */
				obj_t BgL_method1272z00_1427;

				{	/* Reduce/same.scm 26 */
					obj_t BgL_res1904z00_1948;

					{	/* Reduce/same.scm 26 */
						long BgL_objzd2classzd2numz00_1913;

						{	/* Reduce/same.scm 26 */
							long BgL_res1894z00_1916;

							BgL_res1894z00_1916 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_node1z00_3));
							BgL_objzd2classzd2numz00_1913 = BgL_res1894z00_1916;
						}
						{	/* Reduce/same.scm 26 */
							obj_t BgL_arg1813z00_1914;

							BgL_arg1813z00_1914 =
								PROCEDURE_REF(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
								(int) (((long) 1)));
							{	/* Reduce/same.scm 26 */
								int BgL_offsetz00_1918;

								BgL_offsetz00_1918 = (int) (BgL_objzd2classzd2numz00_1913);
								{	/* Reduce/same.scm 26 */
									long BgL_offsetz00_1919;

									BgL_offsetz00_1919 =
										((long) (BgL_offsetz00_1918) - OBJECT_TYPE);
									{	/* Reduce/same.scm 26 */
										long BgL_modz00_1920;

										BgL_modz00_1920 =
											(BgL_offsetz00_1919 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Reduce/same.scm 26 */
											long BgL_restz00_1922;

											BgL_restz00_1922 =
												(BgL_offsetz00_1919 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Reduce/same.scm 26 */

												{	/* Reduce/same.scm 26 */
													obj_t BgL_bucketz00_1924;

													BgL_bucketz00_1924 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1914), BgL_modz00_1920);
													BgL_res1904z00_1948 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1924), BgL_restz00_1922);
					}}}}}}}}
					BgL_method1272z00_1427 = BgL_res1904z00_1948;
				}
				return
					CBOOL(PROCEDURE_ENTRY(BgL_method1272z00_1427) (BgL_method1272z00_1427,
						((obj_t) BgL_node1z00_3),
						((obj_t) BgL_node2z00_4), BgL_aliasz00_5, BEOA));
			}
		}

	}



/* &same-node? */
	obj_t BGl_z62samezd2nodezf3z43zzreduce_samez00(obj_t BgL_envz00_2151,
		obj_t BgL_node1z00_2152, obj_t BgL_node2z00_2153, obj_t BgL_aliasz00_2154)
	{
		{	/* Reduce/same.scm 26 */
			return
				BBOOL(BGl_samezd2nodezf3z21zzreduce_samez00(
					((BgL_nodez00_bglt) BgL_node1z00_2152),
					((BgL_nodez00_bglt) BgL_node2z00_2153), BgL_aliasz00_2154));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_samez00()
	{
		{	/* Reduce/same.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_atomz00zzast_nodez00,
				BGl_proc1949z00zzreduce_samez00, BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_kwotez00zzast_nodez00,
				BGl_proc1951z00zzreduce_samez00, BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_varz00zzast_nodez00,
				BGl_proc1952z00zzreduce_samez00, BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_sequencez00zzast_nodez00, BGl_proc1953z00zzreduce_samez00,
				BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_syncz00zzast_nodez00,
				BGl_proc1954z00zzreduce_samez00, BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1955z00zzreduce_samez00,
				BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_funcallz00zzast_nodez00, BGl_proc1956z00zzreduce_samez00,
				BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_appz00zzast_nodez00,
				BGl_proc1957z00zzreduce_samez00, BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_externz00zzast_nodez00, BGl_proc1958z00zzreduce_samez00,
				BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_pragmaz00zzast_nodez00, BGl_proc1959z00zzreduce_samez00,
				BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_getfieldz00zzast_nodez00, BGl_proc1960z00zzreduce_samez00,
				BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_setfieldz00zzast_nodez00, BGl_proc1961z00zzreduce_samez00,
				BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_vallocz00zzast_nodez00, BGl_proc1962z00zzreduce_samez00,
				BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_castz00zzast_nodez00,
				BGl_proc1963z00zzreduce_samez00, BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1964z00zzreduce_samez00,
				BGl_string1950z00zzreduce_samez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00, BGl_failz00zzast_nodez00,
				BGl_proc1965z00zzreduce_samez00, BGl_string1950z00zzreduce_samez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1966z00zzreduce_samez00,
				BGl_string1950z00zzreduce_samez00);
		}

	}



/* &same-node?-let-var1306 */
	obj_t BGl_z62samezd2nodezf3zd2letzd2var1306z43zzreduce_samez00(obj_t
		BgL_envz00_2172, obj_t BgL_nodez00_2173, obj_t BgL_node2z00_2174,
		obj_t BgL_aliasz00_2175)
	{
		{	/* Reduce/same.scm 193 */
			{	/* Tools/trace.sch 53 */
				bool_t BgL_tmpz00_2557;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_test2006z00_2558;

					{	/* Tools/trace.sch 53 */
						bool_t BgL_res1941z00_2260;

						BgL_res1941z00_2260 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2174)),
							BGl_letzd2varzd2zzast_nodez00);
						BgL_test2006z00_2558 = BgL_res1941z00_2260;
					}
					if (BgL_test2006z00_2558)
						{	/* Tools/trace.sch 53 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_letzd2varzd2_bglt) BgL_nodez00_2173))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2174)))->BgL_typez00))))
								{	/* Tools/trace.sch 53 */
									if (
										(bgl_list_length(
												(((BgL_letzd2varzd2_bglt) COBJECT(
															((BgL_letzd2varzd2_bglt) BgL_nodez00_2173)))->
													BgL_bindingsz00)) ==
											bgl_list_length((((BgL_letzd2varzd2_bglt)
														COBJECT(((BgL_letzd2varzd2_bglt) ((BgL_nodez00_bglt)
																	BgL_node2z00_2174))))->BgL_bindingsz00))))
										{	/* Tools/trace.sch 53 */
											obj_t BgL_newzd2aliaszd2_2264;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_arg1782z00_2265;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_ll1265z00_2266;
													obj_t BgL_ll1266z00_2267;

													BgL_ll1265z00_2266 =
														(((BgL_letzd2varzd2_bglt) COBJECT(
																((BgL_letzd2varzd2_bglt) BgL_nodez00_2173)))->
														BgL_bindingsz00);
													BgL_ll1266z00_2267 =
														(((BgL_letzd2varzd2_bglt)
															COBJECT(((BgL_letzd2varzd2_bglt) (
																		(BgL_nodez00_bglt) BgL_node2z00_2174))))->
														BgL_bindingsz00);
													if (NULLP(BgL_ll1265z00_2266))
														{	/* Tools/trace.sch 53 */
															BgL_arg1782z00_2265 = BNIL;
														}
													else
														{	/* Tools/trace.sch 53 */
															obj_t BgL_head1267z00_2268;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_res1943z00_2269;

																BgL_res1943z00_2269 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																BgL_head1267z00_2268 = BgL_res1943z00_2269;
															}
															{
																obj_t BgL_ll1265z00_2271;
																obj_t BgL_ll1266z00_2272;
																obj_t BgL_tail1268z00_2273;

																BgL_ll1265z00_2271 = BgL_ll1265z00_2266;
																BgL_ll1266z00_2272 = BgL_ll1266z00_2267;
																BgL_tail1268z00_2273 = BgL_head1267z00_2268;
															BgL_zc3z04anonymousza31784ze3z87_2270:
																if (NULLP(BgL_ll1265z00_2271))
																	{	/* Tools/trace.sch 53 */
																		BgL_arg1782z00_2265 =
																			CDR(BgL_head1267z00_2268);
																	}
																else
																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_newtail1269z00_2274;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1798z00_2275;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_b1z00_2276;
																				obj_t BgL_b2z00_2277;

																				BgL_b1z00_2276 =
																					CAR(((obj_t) BgL_ll1265z00_2271));
																				BgL_b2z00_2277 =
																					CAR(((obj_t) BgL_ll1266z00_2272));
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1801z00_2278;
																					obj_t BgL_arg1808z00_2279;

																					BgL_arg1801z00_2278 =
																						CAR(((obj_t) BgL_b1z00_2276));
																					BgL_arg1808z00_2279 =
																						CAR(((obj_t) BgL_b2z00_2277));
																					BgL_arg1798z00_2275 =
																						MAKE_YOUNG_PAIR(BgL_arg1801z00_2278,
																						BgL_arg1808z00_2279);
																				}
																			}
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_res1945z00_2280;

																				BgL_res1945z00_2280 =
																					MAKE_YOUNG_PAIR(BgL_arg1798z00_2275,
																					BNIL);
																				BgL_newtail1269z00_2274 =
																					BgL_res1945z00_2280;
																			}
																		}
																		SET_CDR(BgL_tail1268z00_2273,
																			BgL_newtail1269z00_2274);
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1790z00_2281;
																			obj_t BgL_arg1796z00_2282;

																			BgL_arg1790z00_2281 =
																				CDR(((obj_t) BgL_ll1265z00_2271));
																			BgL_arg1796z00_2282 =
																				CDR(((obj_t) BgL_ll1266z00_2272));
																			{
																				obj_t BgL_tail1268z00_2608;
																				obj_t BgL_ll1266z00_2607;
																				obj_t BgL_ll1265z00_2606;

																				BgL_ll1265z00_2606 =
																					BgL_arg1790z00_2281;
																				BgL_ll1266z00_2607 =
																					BgL_arg1796z00_2282;
																				BgL_tail1268z00_2608 =
																					BgL_newtail1269z00_2274;
																				BgL_tail1268z00_2273 =
																					BgL_tail1268z00_2608;
																				BgL_ll1266z00_2272 = BgL_ll1266z00_2607;
																				BgL_ll1265z00_2271 = BgL_ll1265z00_2606;
																				goto
																					BgL_zc3z04anonymousza31784ze3z87_2270;
																			}
																		}
																	}
															}
														}
												}
												BgL_newzd2aliaszd2_2264 =
													BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1782z00_2265, BgL_aliasz00_2175);
											}
											{	/* Tools/trace.sch 53 */
												bool_t BgL_test2011z00_2610;

												{	/* Tools/trace.sch 53 */
													BgL_nodez00_bglt BgL_arg1778z00_2283;
													BgL_nodez00_bglt BgL_arg1779z00_2284;

													BgL_arg1778z00_2283 =
														(((BgL_letzd2varzd2_bglt) COBJECT(
																((BgL_letzd2varzd2_bglt) BgL_nodez00_2173)))->
														BgL_bodyz00);
													BgL_arg1779z00_2284 =
														(((BgL_letzd2varzd2_bglt)
															COBJECT(((BgL_letzd2varzd2_bglt) (
																		(BgL_nodez00_bglt) BgL_node2z00_2174))))->
														BgL_bodyz00);
													BgL_test2011z00_2610 =
														BGl_samezd2nodezf3z21zzreduce_samez00
														(BgL_arg1778z00_2283, BgL_arg1779z00_2284,
														BgL_newzd2aliaszd2_2264);
												}
												if (BgL_test2011z00_2610)
													{	/* Tools/trace.sch 53 */
														obj_t BgL_g1153z00_2285;
														obj_t BgL_g1154z00_2286;

														BgL_g1153z00_2285 =
															(((BgL_letzd2varzd2_bglt) COBJECT(
																	((BgL_letzd2varzd2_bglt) BgL_nodez00_2173)))->
															BgL_bindingsz00);
														BgL_g1154z00_2286 =
															(((BgL_letzd2varzd2_bglt)
																COBJECT(((BgL_letzd2varzd2_bglt) (
																			(BgL_nodez00_bglt) BgL_node2z00_2174))))->
															BgL_bindingsz00);
														{
															obj_t BgL_bindings1z00_2288;
															obj_t BgL_bindings2z00_2289;

															BgL_bindings1z00_2288 = BgL_g1153z00_2285;
															BgL_bindings2z00_2289 = BgL_g1154z00_2286;
														BgL_loopz00_2287:
															if (NULLP(BgL_bindings1z00_2288))
																{	/* Tools/trace.sch 53 */
																	BgL_tmpz00_2557 = ((bool_t) 1);
																}
															else
																{	/* Tools/trace.sch 53 */
																	bool_t BgL_test2013z00_2624;

																	{	/* Tools/trace.sch 53 */
																		bool_t BgL_test2014z00_2625;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_tmpz00_2626;

																			{
																				BgL_variablez00_bglt BgL_auxz00_2627;

																				{
																					BgL_localz00_bglt BgL_auxz00_2628;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_pairz00_2290;

																						BgL_pairz00_2290 =
																							CAR(
																							((obj_t) BgL_bindings1z00_2288));
																						BgL_auxz00_2628 =
																							((BgL_localz00_bglt)
																							CAR(BgL_pairz00_2290));
																					}
																					BgL_auxz00_2627 =
																						((BgL_variablez00_bglt)
																						BgL_auxz00_2628);
																				}
																				BgL_tmpz00_2626 =
																					(((BgL_variablez00_bglt)
																						COBJECT(BgL_auxz00_2627))->
																					BgL_accessz00);
																			}
																			BgL_test2014z00_2625 =
																				(BgL_tmpz00_2626 ==
																				CNST_TABLE_REF(((long) 0)));
																		}
																		if (BgL_test2014z00_2625)
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_tmpz00_2637;

																				{
																					BgL_variablez00_bglt BgL_auxz00_2638;

																					{
																						BgL_localz00_bglt BgL_auxz00_2639;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_pairz00_2291;

																							BgL_pairz00_2291 =
																								CAR(
																								((obj_t)
																									BgL_bindings2z00_2289));
																							BgL_auxz00_2639 =
																								((BgL_localz00_bglt)
																								CAR(BgL_pairz00_2291));
																						}
																						BgL_auxz00_2638 =
																							((BgL_variablez00_bglt)
																							BgL_auxz00_2639);
																					}
																					BgL_tmpz00_2637 =
																						(((BgL_variablez00_bglt)
																							COBJECT(BgL_auxz00_2638))->
																						BgL_accessz00);
																				}
																				BgL_test2013z00_2624 =
																					(BgL_tmpz00_2637 ==
																					CNST_TABLE_REF(((long) 0)));
																			}
																		else
																			{	/* Tools/trace.sch 53 */
																				BgL_test2013z00_2624 = ((bool_t) 0);
																			}
																	}
																	if (BgL_test2013z00_2624)
																		{	/* Tools/trace.sch 53 */
																			bool_t BgL_test2015z00_2648;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1754z00_2292;
																				obj_t BgL_arg1755z00_2293;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_pairz00_2294;

																					BgL_pairz00_2294 =
																						CAR(
																						((obj_t) BgL_bindings1z00_2288));
																					BgL_arg1754z00_2292 =
																						CDR(BgL_pairz00_2294);
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_pairz00_2295;

																					BgL_pairz00_2295 =
																						CAR(
																						((obj_t) BgL_bindings2z00_2289));
																					BgL_arg1755z00_2293 =
																						CDR(BgL_pairz00_2295);
																				}
																				BgL_test2015z00_2648 =
																					BGl_samezd2nodezf3z21zzreduce_samez00(
																					((BgL_nodez00_bglt)
																						BgL_arg1754z00_2292),
																					((BgL_nodez00_bglt)
																						BgL_arg1755z00_2293),
																					BgL_aliasz00_2175);
																			}
																			if (BgL_test2015z00_2648)
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1746z00_2296;
																					obj_t BgL_arg1747z00_2297;

																					BgL_arg1746z00_2296 =
																						CDR(
																						((obj_t) BgL_bindings1z00_2288));
																					BgL_arg1747z00_2297 =
																						CDR(
																						((obj_t) BgL_bindings2z00_2289));
																					{
																						obj_t BgL_bindings2z00_2663;
																						obj_t BgL_bindings1z00_2662;

																						BgL_bindings1z00_2662 =
																							BgL_arg1746z00_2296;
																						BgL_bindings2z00_2663 =
																							BgL_arg1747z00_2297;
																						BgL_bindings2z00_2289 =
																							BgL_bindings2z00_2663;
																						BgL_bindings1z00_2288 =
																							BgL_bindings1z00_2662;
																						goto BgL_loopz00_2287;
																					}
																				}
																			else
																				{	/* Tools/trace.sch 53 */
																					BgL_tmpz00_2557 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Tools/trace.sch 53 */
																			BgL_tmpz00_2557 = ((bool_t) 0);
																		}
																}
														}
													}
												else
													{	/* Tools/trace.sch 53 */
														BgL_tmpz00_2557 = ((bool_t) 0);
													}
											}
										}
									else
										{	/* Tools/trace.sch 53 */
											BgL_tmpz00_2557 = ((bool_t) 0);
										}
								}
							else
								{	/* Tools/trace.sch 53 */
									BgL_tmpz00_2557 = ((bool_t) 0);
								}
						}
					else
						{	/* Tools/trace.sch 53 */
							BgL_tmpz00_2557 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2557);
			}
		}

	}



/* &same-node?-fail1304 */
	obj_t BGl_z62samezd2nodezf3zd2fail1304z91zzreduce_samez00(obj_t
		BgL_envz00_2176, obj_t BgL_nodez00_2177, obj_t BgL_node2z00_2178,
		obj_t BgL_aliasz00_2179)
	{
		{	/* Reduce/same.scm 180 */
			{	/* Tools/trace.sch 53 */
				bool_t BgL_tmpz00_2665;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_test2016z00_2666;

					{	/* Tools/trace.sch 53 */
						bool_t BgL_res1940z00_2300;

						BgL_res1940z00_2300 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2178)),
							BGl_failz00zzast_nodez00);
						BgL_test2016z00_2666 = BgL_res1940z00_2300;
					}
					if (BgL_test2016z00_2666)
						{	/* Tools/trace.sch 53 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_failz00_bglt) BgL_nodez00_2177))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2178)))->BgL_typez00))))
								{	/* Tools/trace.sch 53 */
									bool_t BgL_test2018z00_2679;

									{	/* Tools/trace.sch 53 */
										BgL_nodez00_bglt BgL_arg1708z00_2301;
										BgL_nodez00_bglt BgL_arg1711z00_2302;

										BgL_arg1708z00_2301 =
											(((BgL_failz00_bglt) COBJECT(
													((BgL_failz00_bglt) BgL_nodez00_2177)))->BgL_msgz00);
										BgL_arg1711z00_2302 =
											(((BgL_failz00_bglt) COBJECT(
													((BgL_failz00_bglt)
														((BgL_nodez00_bglt) BgL_node2z00_2178))))->
											BgL_msgz00);
										BgL_test2018z00_2679 =
											BGl_samezd2nodezf3z21zzreduce_samez00(BgL_arg1708z00_2301,
											BgL_arg1711z00_2302, BgL_aliasz00_2179);
									}
									if (BgL_test2018z00_2679)
										{	/* Tools/trace.sch 53 */
											bool_t BgL_test2019z00_2686;

											{	/* Tools/trace.sch 53 */
												BgL_nodez00_bglt BgL_arg1704z00_2303;
												BgL_nodez00_bglt BgL_arg1707z00_2304;

												BgL_arg1704z00_2303 =
													(((BgL_failz00_bglt) COBJECT(
															((BgL_failz00_bglt) BgL_nodez00_2177)))->
													BgL_procz00);
												BgL_arg1707z00_2304 =
													(((BgL_failz00_bglt)
														COBJECT(((BgL_failz00_bglt) ((BgL_nodez00_bglt)
																	BgL_node2z00_2178))))->BgL_procz00);
												BgL_test2019z00_2686 =
													BGl_samezd2nodezf3z21zzreduce_samez00
													(BgL_arg1704z00_2303, BgL_arg1707z00_2304,
													BgL_aliasz00_2179);
											}
											if (BgL_test2019z00_2686)
												{	/* Tools/trace.sch 53 */
													BgL_nodez00_bglt BgL_arg1696z00_2305;
													BgL_nodez00_bglt BgL_arg1697z00_2306;

													BgL_arg1696z00_2305 =
														(((BgL_failz00_bglt) COBJECT(
																((BgL_failz00_bglt) BgL_nodez00_2177)))->
														BgL_objz00);
													BgL_arg1697z00_2306 =
														(((BgL_failz00_bglt)
															COBJECT(((BgL_failz00_bglt) ((BgL_nodez00_bglt)
																		BgL_node2z00_2178))))->BgL_objz00);
													BgL_tmpz00_2665 =
														BGl_samezd2nodezf3z21zzreduce_samez00
														(BgL_arg1696z00_2305, BgL_arg1697z00_2306,
														BgL_aliasz00_2179);
												}
											else
												{	/* Tools/trace.sch 53 */
													BgL_tmpz00_2665 = ((bool_t) 0);
												}
										}
									else
										{	/* Tools/trace.sch 53 */
											BgL_tmpz00_2665 = ((bool_t) 0);
										}
								}
							else
								{	/* Tools/trace.sch 53 */
									BgL_tmpz00_2665 = ((bool_t) 0);
								}
						}
					else
						{	/* Tools/trace.sch 53 */
							BgL_tmpz00_2665 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2665);
			}
		}

	}



/* &same-node?-condition1302 */
	obj_t BGl_z62samezd2nodezf3zd2condition1302z91zzreduce_samez00(obj_t
		BgL_envz00_2180, obj_t BgL_nodez00_2181, obj_t BgL_node2z00_2182,
		obj_t BgL_aliasz00_2183)
	{
		{	/* Reduce/same.scm 167 */
			{	/* Tools/trace.sch 53 */
				bool_t BgL_tmpz00_2700;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_test2020z00_2701;

					{	/* Tools/trace.sch 53 */
						bool_t BgL_res1939z00_2309;

						BgL_res1939z00_2309 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2182)),
							BGl_conditionalz00zzast_nodez00);
						BgL_test2020z00_2701 = BgL_res1939z00_2309;
					}
					if (BgL_test2020z00_2701)
						{	/* Tools/trace.sch 53 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_conditionalz00_bglt) BgL_nodez00_2181))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2182)))->BgL_typez00))))
								{	/* Tools/trace.sch 53 */
									bool_t BgL_test2022z00_2714;

									{	/* Tools/trace.sch 53 */
										BgL_nodez00_bglt BgL_arg1687z00_2310;
										BgL_nodez00_bglt BgL_arg1688z00_2311;

										BgL_arg1687z00_2310 =
											(((BgL_conditionalz00_bglt) COBJECT(
													((BgL_conditionalz00_bglt) BgL_nodez00_2181)))->
											BgL_falsez00);
										BgL_arg1688z00_2311 =
											(((BgL_conditionalz00_bglt)
												COBJECT(((BgL_conditionalz00_bglt) ((BgL_nodez00_bglt)
															BgL_node2z00_2182))))->BgL_falsez00);
										BgL_test2022z00_2714 =
											BGl_samezd2nodezf3z21zzreduce_samez00(BgL_arg1687z00_2310,
											BgL_arg1688z00_2311, BgL_aliasz00_2183);
									}
									if (BgL_test2022z00_2714)
										{	/* Tools/trace.sch 53 */
											bool_t BgL_test2023z00_2721;

											{	/* Tools/trace.sch 53 */
												BgL_nodez00_bglt BgL_arg1685z00_2312;
												BgL_nodez00_bglt BgL_arg1686z00_2313;

												BgL_arg1685z00_2312 =
													(((BgL_conditionalz00_bglt) COBJECT(
															((BgL_conditionalz00_bglt) BgL_nodez00_2181)))->
													BgL_truez00);
												BgL_arg1686z00_2313 =
													(((BgL_conditionalz00_bglt)
														COBJECT(((BgL_conditionalz00_bglt) (
																	(BgL_nodez00_bglt) BgL_node2z00_2182))))->
													BgL_truez00);
												BgL_test2023z00_2721 =
													BGl_samezd2nodezf3z21zzreduce_samez00
													(BgL_arg1685z00_2312, BgL_arg1686z00_2313,
													BgL_aliasz00_2183);
											}
											if (BgL_test2023z00_2721)
												{	/* Tools/trace.sch 53 */
													BgL_nodez00_bglt BgL_arg1672z00_2314;
													BgL_nodez00_bglt BgL_arg1684z00_2315;

													BgL_arg1672z00_2314 =
														(((BgL_conditionalz00_bglt) COBJECT(
																((BgL_conditionalz00_bglt) BgL_nodez00_2181)))->
														BgL_testz00);
													BgL_arg1684z00_2315 =
														(((BgL_conditionalz00_bglt)
															COBJECT(((BgL_conditionalz00_bglt) (
																		(BgL_nodez00_bglt) BgL_node2z00_2182))))->
														BgL_testz00);
													BgL_tmpz00_2700 =
														BGl_samezd2nodezf3z21zzreduce_samez00
														(BgL_arg1672z00_2314, BgL_arg1684z00_2315,
														BgL_aliasz00_2183);
												}
											else
												{	/* Tools/trace.sch 53 */
													BgL_tmpz00_2700 = ((bool_t) 0);
												}
										}
									else
										{	/* Tools/trace.sch 53 */
											BgL_tmpz00_2700 = ((bool_t) 0);
										}
								}
							else
								{	/* Tools/trace.sch 53 */
									BgL_tmpz00_2700 = ((bool_t) 0);
								}
						}
					else
						{	/* Tools/trace.sch 53 */
							BgL_tmpz00_2700 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2700);
			}
		}

	}



/* &same-node?-cast1300 */
	obj_t BGl_z62samezd2nodezf3zd2cast1300z91zzreduce_samez00(obj_t
		BgL_envz00_2184, obj_t BgL_nodez00_2185, obj_t BgL_node2z00_2186,
		obj_t BgL_aliasz00_2187)
	{
		{	/* Reduce/same.scm 159 */
			{	/* Reduce/same.scm 160 */
				bool_t BgL_tmpz00_2735;

				{	/* Reduce/same.scm 160 */
					bool_t BgL_test2024z00_2736;

					{	/* Reduce/same.scm 160 */
						bool_t BgL_res1938z00_2318;

						BgL_res1938z00_2318 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2186)),
							BGl_castz00zzast_nodez00);
						BgL_test2024z00_2736 = BgL_res1938z00_2318;
					}
					if (BgL_test2024z00_2736)
						{	/* Reduce/same.scm 160 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_castz00_bglt) BgL_nodez00_2185))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2186)))->BgL_typez00))))
								{	/* Reduce/same.scm 162 */
									BgL_nodez00_bglt BgL_arg1663z00_2319;
									BgL_nodez00_bglt BgL_arg1664z00_2320;

									BgL_arg1663z00_2319 =
										(((BgL_castz00_bglt) COBJECT(
												((BgL_castz00_bglt) BgL_nodez00_2185)))->BgL_argz00);
									BgL_arg1664z00_2320 =
										(((BgL_castz00_bglt) COBJECT(
												((BgL_castz00_bglt)
													((BgL_nodez00_bglt) BgL_node2z00_2186))))->
										BgL_argz00);
									BgL_tmpz00_2735 =
										BGl_samezd2nodezf3z21zzreduce_samez00(BgL_arg1663z00_2319,
										BgL_arg1664z00_2320, BgL_aliasz00_2187);
								}
							else
								{	/* Reduce/same.scm 161 */
									BgL_tmpz00_2735 = ((bool_t) 0);
								}
						}
					else
						{	/* Reduce/same.scm 160 */
							BgL_tmpz00_2735 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2735);
			}
		}

	}



/* &same-node?-valloc1298 */
	obj_t BGl_z62samezd2nodezf3zd2valloc1298z91zzreduce_samez00(obj_t
		BgL_envz00_2188, obj_t BgL_nodez00_2189, obj_t BgL_node2z00_2190,
		obj_t BgL_aliasz00_2191)
	{
		{	/* Reduce/same.scm 153 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &same-node?-setfield1296 */
	obj_t BGl_z62samezd2nodezf3zd2setfield1296z91zzreduce_samez00(obj_t
		BgL_envz00_2192, obj_t BgL_nodez00_2193, obj_t BgL_node2z00_2194,
		obj_t BgL_aliasz00_2195)
	{
		{	/* Reduce/same.scm 145 */
			{

				{	/* Reduce/same.scm 146 */
					bool_t BgL_test2026z00_2757;

					{	/* Reduce/same.scm 146 */
						bool_t BgL_res1932z00_2327;

						BgL_res1932z00_2327 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2194)),
							BGl_setfieldz00zzast_nodez00);
						BgL_test2026z00_2757 = BgL_res1932z00_2327;
					}
					if (BgL_test2026z00_2757)
						{	/* Reduce/same.scm 147 */
							bool_t BgL_test2027z00_2761;

							{	/* Reduce/same.scm 147 */
								obj_t BgL_arg1652z00_2328;
								obj_t BgL_arg1662z00_2329;

								BgL_arg1652z00_2328 =
									(((BgL_setfieldz00_bglt) COBJECT(
											((BgL_setfieldz00_bglt) BgL_nodez00_2193)))->
									BgL_fnamez00);
								BgL_arg1662z00_2329 =
									(((BgL_setfieldz00_bglt)
										COBJECT(((BgL_setfieldz00_bglt) ((BgL_nodez00_bglt)
													BgL_node2z00_2194))))->BgL_fnamez00);
								{	/* Reduce/same.scm 147 */
									bool_t BgL_res1937z00_2330;

									{	/* Reduce/same.scm 147 */
										long BgL_l1z00_2331;

										BgL_l1z00_2331 = STRING_LENGTH(BgL_arg1652z00_2328);
										if ((BgL_l1z00_2331 == STRING_LENGTH(BgL_arg1662z00_2329)))
											{	/* Reduce/same.scm 147 */
												int BgL_arg1267z00_2332;

												{	/* Reduce/same.scm 147 */
													char *BgL_auxz00_2773;
													char *BgL_tmpz00_2771;

													BgL_auxz00_2773 =
														BSTRING_TO_STRING(BgL_arg1662z00_2329);
													BgL_tmpz00_2771 =
														BSTRING_TO_STRING(BgL_arg1652z00_2328);
													BgL_arg1267z00_2332 =
														memcmp(BgL_tmpz00_2771, BgL_auxz00_2773,
														BgL_l1z00_2331);
												}
												BgL_res1937z00_2330 =
													((long) (BgL_arg1267z00_2332) == ((long) 0));
											}
										else
											{	/* Reduce/same.scm 147 */
												BgL_res1937z00_2330 = ((bool_t) 0);
											}
									}
									BgL_test2027z00_2761 = BgL_res1937z00_2330;
								}
							}
							if (BgL_test2027z00_2761)
								{	/* Reduce/same.scm 147 */
									{	/* Reduce/same.scm 145 */
										obj_t BgL_nextzd2method1295zd2_2326;

										BgL_nextzd2method1295zd2_2326 =
											BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
											((BgL_objectz00_bglt)
												((BgL_setfieldz00_bglt) BgL_nodez00_2193)),
											BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
											BGl_setfieldz00zzast_nodez00);
										return
											PROCEDURE_ENTRY(BgL_nextzd2method1295zd2_2326)
											(BgL_nextzd2method1295zd2_2326,
											((obj_t) ((BgL_setfieldz00_bglt) BgL_nodez00_2193)),
											((obj_t) ((BgL_nodez00_bglt) BgL_node2z00_2194)),
											BgL_aliasz00_2195, BEOA);
									}
								}
							else
								{	/* Reduce/same.scm 147 */
									return BFALSE;
								}
						}
					else
						{	/* Reduce/same.scm 146 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &same-node?-getfield1294 */
	obj_t BGl_z62samezd2nodezf3zd2getfield1294z91zzreduce_samez00(obj_t
		BgL_envz00_2196, obj_t BgL_nodez00_2197, obj_t BgL_node2z00_2198,
		obj_t BgL_aliasz00_2199)
	{
		{	/* Reduce/same.scm 137 */
			{

				{	/* Reduce/same.scm 138 */
					bool_t BgL_test2029z00_2791;

					{	/* Reduce/same.scm 138 */
						bool_t BgL_res1926z00_2337;

						BgL_res1926z00_2337 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2198)),
							BGl_getfieldz00zzast_nodez00);
						BgL_test2029z00_2791 = BgL_res1926z00_2337;
					}
					if (BgL_test2029z00_2791)
						{	/* Reduce/same.scm 139 */
							bool_t BgL_test2030z00_2795;

							{	/* Reduce/same.scm 139 */
								obj_t BgL_arg1641z00_2338;
								obj_t BgL_arg1644z00_2339;

								BgL_arg1641z00_2338 =
									(((BgL_getfieldz00_bglt) COBJECT(
											((BgL_getfieldz00_bglt) BgL_nodez00_2197)))->
									BgL_fnamez00);
								BgL_arg1644z00_2339 =
									(((BgL_getfieldz00_bglt)
										COBJECT(((BgL_getfieldz00_bglt) ((BgL_nodez00_bglt)
													BgL_node2z00_2198))))->BgL_fnamez00);
								{	/* Reduce/same.scm 139 */
									bool_t BgL_res1931z00_2340;

									{	/* Reduce/same.scm 139 */
										long BgL_l1z00_2341;

										BgL_l1z00_2341 = STRING_LENGTH(BgL_arg1641z00_2338);
										if ((BgL_l1z00_2341 == STRING_LENGTH(BgL_arg1644z00_2339)))
											{	/* Reduce/same.scm 139 */
												int BgL_arg1267z00_2342;

												{	/* Reduce/same.scm 139 */
													char *BgL_auxz00_2807;
													char *BgL_tmpz00_2805;

													BgL_auxz00_2807 =
														BSTRING_TO_STRING(BgL_arg1644z00_2339);
													BgL_tmpz00_2805 =
														BSTRING_TO_STRING(BgL_arg1641z00_2338);
													BgL_arg1267z00_2342 =
														memcmp(BgL_tmpz00_2805, BgL_auxz00_2807,
														BgL_l1z00_2341);
												}
												BgL_res1931z00_2340 =
													((long) (BgL_arg1267z00_2342) == ((long) 0));
											}
										else
											{	/* Reduce/same.scm 139 */
												BgL_res1931z00_2340 = ((bool_t) 0);
											}
									}
									BgL_test2030z00_2795 = BgL_res1931z00_2340;
								}
							}
							if (BgL_test2030z00_2795)
								{	/* Reduce/same.scm 139 */
									{	/* Reduce/same.scm 137 */
										obj_t BgL_nextzd2method1293zd2_2336;

										BgL_nextzd2method1293zd2_2336 =
											BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
											((BgL_objectz00_bglt)
												((BgL_getfieldz00_bglt) BgL_nodez00_2197)),
											BGl_samezd2nodezf3zd2envzf3zzreduce_samez00,
											BGl_getfieldz00zzast_nodez00);
										return
											PROCEDURE_ENTRY(BgL_nextzd2method1293zd2_2336)
											(BgL_nextzd2method1293zd2_2336,
											((obj_t) ((BgL_getfieldz00_bglt) BgL_nodez00_2197)),
											((obj_t) ((BgL_nodez00_bglt) BgL_node2z00_2198)),
											BgL_aliasz00_2199, BEOA);
									}
								}
							else
								{	/* Reduce/same.scm 139 */
									return BFALSE;
								}
						}
					else
						{	/* Reduce/same.scm 138 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &same-node?-pragma1292 */
	obj_t BGl_z62samezd2nodezf3zd2pragma1292z91zzreduce_samez00(obj_t
		BgL_envz00_2200, obj_t BgL_nodez00_2201, obj_t BgL_node2z00_2202,
		obj_t BgL_aliasz00_2203)
	{
		{	/* Reduce/same.scm 128 */
			{	/* Reduce/same.scm 129 */
				bool_t BgL_tmpz00_2825;

				{	/* Reduce/same.scm 129 */
					bool_t BgL_test2032z00_2826;

					{	/* Reduce/same.scm 129 */
						bool_t BgL_res1920z00_2345;

						BgL_res1920z00_2345 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2202)),
							BGl_pragmaz00zzast_nodez00);
						BgL_test2032z00_2826 = BgL_res1920z00_2345;
					}
					if (BgL_test2032z00_2826)
						{	/* Reduce/same.scm 129 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_pragmaz00_bglt) BgL_nodez00_2201))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2202)))->BgL_typez00))))
								{	/* Reduce/same.scm 131 */
									bool_t BgL_test2034z00_2839;

									{	/* Reduce/same.scm 131 */
										obj_t BgL_arg1631z00_2346;
										obj_t BgL_arg1634z00_2347;

										BgL_arg1631z00_2346 =
											(((BgL_pragmaz00_bglt) COBJECT(
													((BgL_pragmaz00_bglt) BgL_nodez00_2201)))->
											BgL_formatz00);
										BgL_arg1634z00_2347 =
											(((BgL_pragmaz00_bglt)
												COBJECT(((BgL_pragmaz00_bglt) ((BgL_nodez00_bglt)
															BgL_node2z00_2202))))->BgL_formatz00);
										{	/* Reduce/same.scm 131 */
											bool_t BgL_res1925z00_2348;

											{	/* Reduce/same.scm 131 */
												long BgL_l1z00_2349;

												BgL_l1z00_2349 = STRING_LENGTH(BgL_arg1631z00_2346);
												if (
													(BgL_l1z00_2349 ==
														STRING_LENGTH(BgL_arg1634z00_2347)))
													{	/* Reduce/same.scm 131 */
														int BgL_arg1267z00_2350;

														{	/* Reduce/same.scm 131 */
															char *BgL_auxz00_2851;
															char *BgL_tmpz00_2849;

															BgL_auxz00_2851 =
																BSTRING_TO_STRING(BgL_arg1634z00_2347);
															BgL_tmpz00_2849 =
																BSTRING_TO_STRING(BgL_arg1631z00_2346);
															BgL_arg1267z00_2350 =
																memcmp(BgL_tmpz00_2849, BgL_auxz00_2851,
																BgL_l1z00_2349);
														}
														BgL_res1925z00_2348 =
															((long) (BgL_arg1267z00_2350) == ((long) 0));
													}
												else
													{	/* Reduce/same.scm 131 */
														BgL_res1925z00_2348 = ((bool_t) 0);
													}
											}
											BgL_test2034z00_2839 = BgL_res1925z00_2348;
										}
									}
									if (BgL_test2034z00_2839)
										{	/* Reduce/same.scm 132 */
											obj_t BgL_arg1626z00_2351;
											obj_t BgL_arg1627z00_2352;

											BgL_arg1626z00_2351 =
												(((BgL_externz00_bglt) COBJECT(
														((BgL_externz00_bglt)
															((BgL_pragmaz00_bglt) BgL_nodez00_2201))))->
												BgL_exprza2za2);
											BgL_arg1627z00_2352 =
												(((BgL_externz00_bglt)
													COBJECT(((BgL_externz00_bglt) ((BgL_pragmaz00_bglt) (
																	(BgL_nodez00_bglt) BgL_node2z00_2202)))))->
												BgL_exprza2za2);
											BgL_tmpz00_2825 =
												BGl_samezd2nodeza2zf3z83zzreduce_samez00
												(BgL_arg1626z00_2351, BgL_arg1627z00_2352,
												BgL_aliasz00_2203);
										}
									else
										{	/* Reduce/same.scm 131 */
											BgL_tmpz00_2825 = ((bool_t) 0);
										}
								}
							else
								{	/* Reduce/same.scm 130 */
									BgL_tmpz00_2825 = ((bool_t) 0);
								}
						}
					else
						{	/* Reduce/same.scm 129 */
							BgL_tmpz00_2825 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2825);
			}
		}

	}



/* &same-node?-extern1290 */
	obj_t BGl_z62samezd2nodezf3zd2extern1290z91zzreduce_samez00(obj_t
		BgL_envz00_2204, obj_t BgL_nodez00_2205, obj_t BgL_node2z00_2206,
		obj_t BgL_aliasz00_2207)
	{
		{	/* Reduce/same.scm 117 */
			{	/* Tools/trace.sch 53 */
				bool_t BgL_tmpz00_2865;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_test2036z00_2866;

					{	/* Tools/trace.sch 53 */
						bool_t BgL_res1919z00_2355;

						BgL_res1919z00_2355 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2206)),
							BGl_externz00zzast_nodez00);
						BgL_test2036z00_2866 = BgL_res1919z00_2355;
					}
					if (BgL_test2036z00_2866)
						{	/* Tools/trace.sch 53 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_externz00_bglt) BgL_nodez00_2205))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2206)))->BgL_typez00))))
								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg1611z00_2356;
									obj_t BgL_arg1612z00_2357;

									BgL_arg1611z00_2356 =
										(((BgL_externz00_bglt) COBJECT(
												((BgL_externz00_bglt) BgL_nodez00_2205)))->
										BgL_exprza2za2);
									BgL_arg1612z00_2357 =
										(((BgL_externz00_bglt)
											COBJECT(((BgL_externz00_bglt) ((BgL_nodez00_bglt)
														BgL_node2z00_2206))))->BgL_exprza2za2);
									BgL_tmpz00_2865 =
										BGl_samezd2nodeza2zf3z83zzreduce_samez00
										(BgL_arg1611z00_2356, BgL_arg1612z00_2357,
										BgL_aliasz00_2207);
								}
							else
								{	/* Tools/trace.sch 53 */
									BgL_tmpz00_2865 = ((bool_t) 0);
								}
						}
					else
						{	/* Tools/trace.sch 53 */
							BgL_tmpz00_2865 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2865);
			}
		}

	}



/* &same-node?-app1288 */
	obj_t BGl_z62samezd2nodezf3zd2app1288z91zzreduce_samez00(obj_t
		BgL_envz00_2208, obj_t BgL_nodez00_2209, obj_t BgL_node2z00_2210,
		obj_t BgL_aliasz00_2211)
	{
		{	/* Reduce/same.scm 108 */
			{	/* Reduce/same.scm 109 */
				bool_t BgL_tmpz00_2886;

				{	/* Reduce/same.scm 109 */
					bool_t BgL_test2038z00_2887;

					{	/* Reduce/same.scm 109 */
						bool_t BgL_res1918z00_2360;

						BgL_res1918z00_2360 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2210)),
							BGl_appz00zzast_nodez00);
						BgL_test2038z00_2887 = BgL_res1918z00_2360;
					}
					if (BgL_test2038z00_2887)
						{	/* Reduce/same.scm 109 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_appz00_bglt) BgL_nodez00_2209))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2210)))->BgL_typez00))))
								{	/* Reduce/same.scm 111 */
									bool_t BgL_test2040z00_2900;

									{	/* Reduce/same.scm 111 */
										BgL_varz00_bglt BgL_arg1599z00_2361;
										BgL_varz00_bglt BgL_arg1604z00_2362;

										BgL_arg1599z00_2361 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2209)))->BgL_funz00);
										BgL_arg1604z00_2362 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt)
														((BgL_nodez00_bglt) BgL_node2z00_2210))))->
											BgL_funz00);
										BgL_test2040z00_2900 =
											BGl_samezd2nodezf3z21zzreduce_samez00(((BgL_nodez00_bglt)
												BgL_arg1599z00_2361),
											((BgL_nodez00_bglt) BgL_arg1604z00_2362),
											BgL_aliasz00_2211);
									}
									if (BgL_test2040z00_2900)
										{	/* Reduce/same.scm 112 */
											obj_t BgL_arg1593z00_2363;
											obj_t BgL_arg1597z00_2364;

											BgL_arg1593z00_2363 =
												(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_nodez00_2209)))->
												BgL_argsz00);
											BgL_arg1597z00_2364 =
												(((BgL_appz00_bglt)
													COBJECT(((BgL_appz00_bglt) ((BgL_nodez00_bglt)
																BgL_node2z00_2210))))->BgL_argsz00);
											BgL_tmpz00_2886 =
												BGl_samezd2nodeza2zf3z83zzreduce_samez00
												(BgL_arg1593z00_2363, BgL_arg1597z00_2364,
												BgL_aliasz00_2211);
										}
									else
										{	/* Reduce/same.scm 111 */
											BgL_tmpz00_2886 = ((bool_t) 0);
										}
								}
							else
								{	/* Reduce/same.scm 110 */
									BgL_tmpz00_2886 = ((bool_t) 0);
								}
						}
					else
						{	/* Reduce/same.scm 109 */
							BgL_tmpz00_2886 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2886);
			}
		}

	}



/* &same-node?-funcall1286 */
	obj_t BGl_z62samezd2nodezf3zd2funcall1286z91zzreduce_samez00(obj_t
		BgL_envz00_2212, obj_t BgL_nodez00_2213, obj_t BgL_node2z00_2214,
		obj_t BgL_aliasz00_2215)
	{
		{	/* Reduce/same.scm 99 */
			{	/* Reduce/same.scm 100 */
				bool_t BgL_tmpz00_2916;

				{	/* Reduce/same.scm 100 */
					bool_t BgL_test2041z00_2917;

					{	/* Reduce/same.scm 100 */
						bool_t BgL_res1917z00_2367;

						BgL_res1917z00_2367 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2214)),
							BGl_funcallz00zzast_nodez00);
						BgL_test2041z00_2917 = BgL_res1917z00_2367;
					}
					if (BgL_test2041z00_2917)
						{	/* Reduce/same.scm 100 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_funcallz00_bglt) BgL_nodez00_2213))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2214)))->BgL_typez00))))
								{	/* Reduce/same.scm 102 */
									bool_t BgL_test2043z00_2930;

									{	/* Reduce/same.scm 102 */
										BgL_nodez00_bglt BgL_arg1584z00_2368;
										BgL_nodez00_bglt BgL_arg1588z00_2369;

										BgL_arg1584z00_2368 =
											(((BgL_funcallz00_bglt) COBJECT(
													((BgL_funcallz00_bglt) BgL_nodez00_2213)))->
											BgL_funz00);
										BgL_arg1588z00_2369 =
											(((BgL_funcallz00_bglt)
												COBJECT(((BgL_funcallz00_bglt) ((BgL_nodez00_bglt)
															BgL_node2z00_2214))))->BgL_funz00);
										BgL_test2043z00_2930 =
											BGl_samezd2nodezf3z21zzreduce_samez00(BgL_arg1584z00_2368,
											BgL_arg1588z00_2369, BgL_aliasz00_2215);
									}
									if (BgL_test2043z00_2930)
										{	/* Reduce/same.scm 103 */
											obj_t BgL_arg1578z00_2370;
											obj_t BgL_arg1582z00_2371;

											BgL_arg1578z00_2370 =
												(((BgL_funcallz00_bglt) COBJECT(
														((BgL_funcallz00_bglt) BgL_nodez00_2213)))->
												BgL_argsz00);
											BgL_arg1582z00_2371 =
												(((BgL_funcallz00_bglt)
													COBJECT(((BgL_funcallz00_bglt) ((BgL_nodez00_bglt)
																BgL_node2z00_2214))))->BgL_argsz00);
											BgL_tmpz00_2916 =
												BGl_samezd2nodeza2zf3z83zzreduce_samez00
												(BgL_arg1578z00_2370, BgL_arg1582z00_2371,
												BgL_aliasz00_2215);
										}
									else
										{	/* Reduce/same.scm 102 */
											BgL_tmpz00_2916 = ((bool_t) 0);
										}
								}
							else
								{	/* Reduce/same.scm 101 */
									BgL_tmpz00_2916 = ((bool_t) 0);
								}
						}
					else
						{	/* Reduce/same.scm 100 */
							BgL_tmpz00_2916 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2916);
			}
		}

	}



/* &same-node?-app-ly1284 */
	obj_t BGl_z62samezd2nodezf3zd2appzd2ly1284z43zzreduce_samez00(obj_t
		BgL_envz00_2216, obj_t BgL_nodez00_2217, obj_t BgL_node2z00_2218,
		obj_t BgL_aliasz00_2219)
	{
		{	/* Reduce/same.scm 90 */
			{	/* Reduce/same.scm 91 */
				bool_t BgL_tmpz00_2944;

				{	/* Reduce/same.scm 91 */
					bool_t BgL_test2044z00_2945;

					{	/* Reduce/same.scm 91 */
						bool_t BgL_res1916z00_2374;

						BgL_res1916z00_2374 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2218)),
							BGl_appzd2lyzd2zzast_nodez00);
						BgL_test2044z00_2945 = BgL_res1916z00_2374;
					}
					if (BgL_test2044z00_2945)
						{	/* Reduce/same.scm 91 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_appzd2lyzd2_bglt) BgL_nodez00_2217))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2218)))->BgL_typez00))))
								{	/* Reduce/same.scm 93 */
									bool_t BgL_test2046z00_2958;

									{	/* Reduce/same.scm 93 */
										BgL_nodez00_bglt BgL_arg1564z00_2375;
										BgL_nodez00_bglt BgL_arg1565z00_2376;

										BgL_arg1564z00_2375 =
											(((BgL_appzd2lyzd2_bglt) COBJECT(
													((BgL_appzd2lyzd2_bglt) BgL_nodez00_2217)))->
											BgL_funz00);
										BgL_arg1565z00_2376 =
											(((BgL_appzd2lyzd2_bglt)
												COBJECT(((BgL_appzd2lyzd2_bglt) ((BgL_nodez00_bglt)
															BgL_node2z00_2218))))->BgL_funz00);
										BgL_test2046z00_2958 =
											BGl_samezd2nodezf3z21zzreduce_samez00(BgL_arg1564z00_2375,
											BgL_arg1565z00_2376, BgL_aliasz00_2219);
									}
									if (BgL_test2046z00_2958)
										{	/* Reduce/same.scm 94 */
											BgL_nodez00_bglt BgL_arg1558z00_2377;
											BgL_nodez00_bglt BgL_arg1561z00_2378;

											BgL_arg1558z00_2377 =
												(((BgL_appzd2lyzd2_bglt) COBJECT(
														((BgL_appzd2lyzd2_bglt) BgL_nodez00_2217)))->
												BgL_argz00);
											BgL_arg1561z00_2378 =
												(((BgL_appzd2lyzd2_bglt)
													COBJECT(((BgL_appzd2lyzd2_bglt) ((BgL_nodez00_bglt)
																BgL_node2z00_2218))))->BgL_argz00);
											BgL_tmpz00_2944 =
												BGl_samezd2nodezf3z21zzreduce_samez00
												(BgL_arg1558z00_2377, BgL_arg1561z00_2378,
												BgL_aliasz00_2219);
										}
									else
										{	/* Reduce/same.scm 93 */
											BgL_tmpz00_2944 = ((bool_t) 0);
										}
								}
							else
								{	/* Reduce/same.scm 92 */
									BgL_tmpz00_2944 = ((bool_t) 0);
								}
						}
					else
						{	/* Reduce/same.scm 91 */
							BgL_tmpz00_2944 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2944);
			}
		}

	}



/* &same-node?-sync1282 */
	obj_t BGl_z62samezd2nodezf3zd2sync1282z91zzreduce_samez00(obj_t
		BgL_envz00_2220, obj_t BgL_nodez00_2221, obj_t BgL_node2z00_2222,
		obj_t BgL_aliasz00_2223)
	{
		{	/* Reduce/same.scm 80 */
			{	/* Reduce/same.scm 81 */
				bool_t BgL_tmpz00_2972;

				{	/* Reduce/same.scm 81 */
					bool_t BgL_test2047z00_2973;

					{	/* Reduce/same.scm 81 */
						bool_t BgL_res1915z00_2381;

						BgL_res1915z00_2381 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2222)),
							BGl_syncz00zzast_nodez00);
						BgL_test2047z00_2973 = BgL_res1915z00_2381;
					}
					if (BgL_test2047z00_2973)
						{	/* Reduce/same.scm 81 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_syncz00_bglt) BgL_nodez00_2221))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2222)))->BgL_typez00))))
								{	/* Reduce/same.scm 83 */
									bool_t BgL_test2049z00_2986;

									{	/* Reduce/same.scm 83 */
										BgL_nodez00_bglt BgL_arg1536z00_2382;
										BgL_nodez00_bglt BgL_arg1537z00_2383;

										BgL_arg1536z00_2382 =
											(((BgL_syncz00_bglt) COBJECT(
													((BgL_syncz00_bglt) BgL_nodez00_2221)))->
											BgL_mutexz00);
										BgL_arg1537z00_2383 =
											(((BgL_syncz00_bglt)
												COBJECT(((BgL_syncz00_bglt) ((BgL_nodez00_bglt)
															BgL_node2z00_2222))))->BgL_mutexz00);
										BgL_test2049z00_2986 =
											BGl_samezd2nodezf3z21zzreduce_samez00(BgL_arg1536z00_2382,
											BgL_arg1537z00_2383, BgL_aliasz00_2223);
									}
									if (BgL_test2049z00_2986)
										{	/* Reduce/same.scm 84 */
											bool_t BgL_test2050z00_2993;

											{	/* Reduce/same.scm 84 */
												BgL_nodez00_bglt BgL_arg1521z00_2384;
												BgL_nodez00_bglt BgL_arg1528z00_2385;

												BgL_arg1521z00_2384 =
													(((BgL_syncz00_bglt) COBJECT(
															((BgL_syncz00_bglt) BgL_nodez00_2221)))->
													BgL_prelockz00);
												BgL_arg1528z00_2385 =
													(((BgL_syncz00_bglt)
														COBJECT(((BgL_syncz00_bglt) ((BgL_nodez00_bglt)
																	BgL_node2z00_2222))))->BgL_prelockz00);
												BgL_test2050z00_2993 =
													BGl_samezd2nodezf3z21zzreduce_samez00
													(BgL_arg1521z00_2384, BgL_arg1528z00_2385,
													BgL_aliasz00_2223);
											}
											if (BgL_test2050z00_2993)
												{	/* Reduce/same.scm 85 */
													BgL_nodez00_bglt BgL_arg1497z00_2386;
													BgL_nodez00_bglt BgL_arg1518z00_2387;

													BgL_arg1497z00_2386 =
														(((BgL_syncz00_bglt) COBJECT(
																((BgL_syncz00_bglt) BgL_nodez00_2221)))->
														BgL_bodyz00);
													BgL_arg1518z00_2387 =
														(((BgL_syncz00_bglt)
															COBJECT(((BgL_syncz00_bglt) ((BgL_nodez00_bglt)
																		BgL_node2z00_2222))))->BgL_bodyz00);
													BgL_tmpz00_2972 =
														BGl_samezd2nodeza2zf3z83zzreduce_samez00(((obj_t)
															BgL_arg1497z00_2386),
														((obj_t) BgL_arg1518z00_2387), BgL_aliasz00_2223);
												}
											else
												{	/* Reduce/same.scm 84 */
													BgL_tmpz00_2972 = ((bool_t) 0);
												}
										}
									else
										{	/* Reduce/same.scm 83 */
											BgL_tmpz00_2972 = ((bool_t) 0);
										}
								}
							else
								{	/* Reduce/same.scm 82 */
									BgL_tmpz00_2972 = ((bool_t) 0);
								}
						}
					else
						{	/* Reduce/same.scm 81 */
							BgL_tmpz00_2972 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_2972);
			}
		}

	}



/* &same-node?-sequence1280 */
	obj_t BGl_z62samezd2nodezf3zd2sequence1280z91zzreduce_samez00(obj_t
		BgL_envz00_2224, obj_t BgL_nodez00_2225, obj_t BgL_node2z00_2226,
		obj_t BgL_aliasz00_2227)
	{
		{	/* Reduce/same.scm 72 */
			{	/* Reduce/same.scm 73 */
				bool_t BgL_tmpz00_3009;

				{	/* Reduce/same.scm 73 */
					bool_t BgL_test2051z00_3010;

					{	/* Reduce/same.scm 73 */
						bool_t BgL_res1914z00_2390;

						BgL_res1914z00_2390 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2226)),
							BGl_sequencez00zzast_nodez00);
						BgL_test2051z00_3010 = BgL_res1914z00_2390;
					}
					if (BgL_test2051z00_3010)
						{	/* Reduce/same.scm 73 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_sequencez00_bglt) BgL_nodez00_2225))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2226)))->BgL_typez00))))
								{	/* Reduce/same.scm 75 */
									obj_t BgL_arg1477z00_2391;
									obj_t BgL_arg1489z00_2392;

									BgL_arg1477z00_2391 =
										(((BgL_sequencez00_bglt) COBJECT(
												((BgL_sequencez00_bglt) BgL_nodez00_2225)))->
										BgL_nodesz00);
									BgL_arg1489z00_2392 =
										(((BgL_sequencez00_bglt)
											COBJECT(((BgL_sequencez00_bglt) ((BgL_nodez00_bglt)
														BgL_node2z00_2226))))->BgL_nodesz00);
									BgL_tmpz00_3009 =
										BGl_samezd2nodeza2zf3z83zzreduce_samez00
										(BgL_arg1477z00_2391, BgL_arg1489z00_2392,
										BgL_aliasz00_2227);
								}
							else
								{	/* Reduce/same.scm 74 */
									BgL_tmpz00_3009 = ((bool_t) 0);
								}
						}
					else
						{	/* Reduce/same.scm 73 */
							BgL_tmpz00_3009 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_3009);
			}
		}

	}



/* &same-node?-var1278 */
	obj_t BGl_z62samezd2nodezf3zd2var1278z91zzreduce_samez00(obj_t
		BgL_envz00_2228, obj_t BgL_nodez00_2229, obj_t BgL_node2z00_2230,
		obj_t BgL_aliasz00_2231)
	{
		{	/* Reduce/same.scm 59 */
			{	/* Tools/trace.sch 53 */
				bool_t BgL_tmpz00_3030;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_test2053z00_3031;

					{	/* Tools/trace.sch 53 */
						bool_t BgL_res1913z00_2395;

						BgL_res1913z00_2395 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2230)),
							BGl_varz00zzast_nodez00);
						BgL_test2053z00_3031 = BgL_res1913z00_2395;
					}
					if (BgL_test2053z00_3031)
						{	/* Tools/trace.sch 53 */
							if (
								((((BgL_variablez00_bglt) COBJECT(
												(((BgL_varz00_bglt) COBJECT(
															((BgL_varz00_bglt) BgL_nodez00_2229)))->
													BgL_variablez00)))->BgL_accessz00) ==
									CNST_TABLE_REF(((long) 0))))
								{	/* Tools/trace.sch 53 */
									if (
										(((obj_t)
												(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_varz00_bglt) BgL_nodez00_2229))))->
													BgL_typez00)) ==
											((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																BgL_node2z00_2230)))->BgL_typez00))))
										{	/* Tools/trace.sch 53 */
											bool_t BgL__ortest_1113z00_2396;

											BgL__ortest_1113z00_2396 =
												(
												((obj_t)
													(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_nodez00_2229)))->
														BgL_variablez00)) ==
												((obj_t) (((BgL_varz00_bglt)
															COBJECT(((BgL_varz00_bglt) ((BgL_nodez00_bglt)
																		BgL_node2z00_2230))))->BgL_variablez00)));
											if (BgL__ortest_1113z00_2396)
												{	/* Tools/trace.sch 53 */
													BgL_tmpz00_3030 = BgL__ortest_1113z00_2396;
												}
											else
												{	/* Tools/trace.sch 53 */
													BgL_tmpz00_3030 =
														BGl_aliasedzf3zf3zzreduce_samez00(
														(((BgL_varz00_bglt) COBJECT(
																	((BgL_varz00_bglt) BgL_nodez00_2229)))->
															BgL_variablez00),
														(((BgL_varz00_bglt)
																COBJECT(((BgL_varz00_bglt) ((BgL_nodez00_bglt)
																			BgL_node2z00_2230))))->BgL_variablez00),
														BgL_aliasz00_2231);
												}
										}
									else
										{	/* Tools/trace.sch 53 */
											BgL_tmpz00_3030 = ((bool_t) 0);
										}
								}
							else
								{	/* Tools/trace.sch 53 */
									BgL_tmpz00_3030 = ((bool_t) 0);
								}
						}
					else
						{	/* Tools/trace.sch 53 */
							BgL_tmpz00_3030 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_3030);
			}
		}

	}



/* &same-node?-kwote1276 */
	obj_t BGl_z62samezd2nodezf3zd2kwote1276z91zzreduce_samez00(obj_t
		BgL_envz00_2232, obj_t BgL_nodez00_2233, obj_t BgL_node2z00_2234,
		obj_t BgL_aliasz00_2235)
	{
		{	/* Reduce/same.scm 48 */
			{	/* Tools/trace.sch 53 */
				bool_t BgL_tmpz00_3066;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_test2057z00_3067;

					{	/* Tools/trace.sch 53 */
						bool_t BgL_res1912z00_2399;

						BgL_res1912z00_2399 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2234)),
							BGl_kwotez00zzast_nodez00);
						BgL_test2057z00_3067 = BgL_res1912z00_2399;
					}
					if (BgL_test2057z00_3067)
						{	/* Tools/trace.sch 53 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_kwotez00_bglt) BgL_nodez00_2233))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2234)))->BgL_typez00))))
								{	/* Tools/trace.sch 53 */
									BgL_tmpz00_3066 =
										BGl_equalzf3zf3zz__r4_equivalence_6_2z00(
										(((BgL_kwotez00_bglt) COBJECT(
													((BgL_kwotez00_bglt) BgL_nodez00_2233)))->
											BgL_valuez00),
										(((BgL_kwotez00_bglt)
												COBJECT(((BgL_kwotez00_bglt) ((BgL_nodez00_bglt)
															BgL_node2z00_2234))))->BgL_valuez00));
								}
							else
								{	/* Tools/trace.sch 53 */
									BgL_tmpz00_3066 = ((bool_t) 0);
								}
						}
					else
						{	/* Tools/trace.sch 53 */
							BgL_tmpz00_3066 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_3066);
			}
		}

	}



/* &same-node?-atom1274 */
	obj_t BGl_z62samezd2nodezf3zd2atom1274z91zzreduce_samez00(obj_t
		BgL_envz00_2236, obj_t BgL_nodez00_2237, obj_t BgL_node2z00_2238,
		obj_t BgL_aliasz00_2239)
	{
		{	/* Reduce/same.scm 32 */
			{	/* Tools/trace.sch 53 */
				bool_t BgL_tmpz00_3087;

				{	/* Tools/trace.sch 53 */
					bool_t BgL_test2059z00_3088;

					{	/* Tools/trace.sch 53 */
						bool_t BgL_res1905z00_2402;

						BgL_res1905z00_2402 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t)
								((BgL_nodez00_bglt) BgL_node2z00_2238)),
							BGl_atomz00zzast_nodez00);
						BgL_test2059z00_3088 = BgL_res1905z00_2402;
					}
					if (BgL_test2059z00_3088)
						{	/* Tools/trace.sch 53 */
							if (
								(((obj_t)
										(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_atomz00_bglt) BgL_nodez00_2237))))->
											BgL_typez00)) ==
									((obj_t) (((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
														BgL_node2z00_2238)))->BgL_typez00))))
								{	/* Tools/trace.sch 53 */
									bool_t BgL_test2061z00_3101;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_tmpz00_3102;

										BgL_tmpz00_3102 =
											(((BgL_atomz00_bglt) COBJECT(
													((BgL_atomz00_bglt) BgL_nodez00_2237)))->
											BgL_valuez00);
										BgL_test2061z00_3101 = REALP(BgL_tmpz00_3102);
									}
									if (BgL_test2061z00_3101)
										{	/* Tools/trace.sch 53 */
											bool_t BgL_test2062z00_3106;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_tmpz00_3107;

												BgL_tmpz00_3107 =
													(((BgL_atomz00_bglt) COBJECT(
															((BgL_atomz00_bglt)
																((BgL_nodez00_bglt) BgL_node2z00_2238))))->
													BgL_valuez00);
												BgL_test2062z00_3106 = REALP(BgL_tmpz00_3107);
											}
											if (BgL_test2062z00_3106)
												{	/* Tools/trace.sch 53 */
													if (
														(REAL_TO_DOUBLE(
																(((BgL_atomz00_bglt) COBJECT(
																			((BgL_atomz00_bglt) BgL_nodez00_2237)))->
																	BgL_valuez00)) ==
															REAL_TO_DOUBLE((((BgL_atomz00_bglt)
																		COBJECT(((BgL_atomz00_bglt) (
																					(BgL_nodez00_bglt)
																					BgL_node2z00_2238))))->
																	BgL_valuez00))))
														{	/* Tools/trace.sch 53 */
															BgL_tmpz00_3087 =
																(BGL_SIGNBIT(REAL_TO_DOUBLE(
																		(((BgL_atomz00_bglt) COBJECT(
																					((BgL_atomz00_bglt)
																						BgL_nodez00_2237)))->
																			BgL_valuez00))) ==
																BGL_SIGNBIT(REAL_TO_DOUBLE((((BgL_atomz00_bglt)
																				COBJECT(((BgL_atomz00_bglt) (
																							(BgL_nodez00_bglt)
																							BgL_node2z00_2238))))->
																			BgL_valuez00))));
														}
													else
														{	/* Tools/trace.sch 53 */
															BgL_tmpz00_3087 = ((bool_t) 0);
														}
												}
											else
												{	/* Tools/trace.sch 53 */
													BgL_tmpz00_3087 = ((bool_t) 0);
												}
										}
									else
										{	/* Tools/trace.sch 53 */
											BgL_tmpz00_3087 =
												BGl_equalzf3zf3zz__r4_equivalence_6_2z00(
												(((BgL_atomz00_bglt) COBJECT(
															((BgL_atomz00_bglt) BgL_nodez00_2237)))->
													BgL_valuez00),
												(((BgL_atomz00_bglt)
														COBJECT(((BgL_atomz00_bglt) ((BgL_nodez00_bglt)
																	BgL_node2z00_2238))))->BgL_valuez00));
										}
								}
							else
								{	/* Tools/trace.sch 53 */
									BgL_tmpz00_3087 = ((bool_t) 0);
								}
						}
					else
						{	/* Tools/trace.sch 53 */
							BgL_tmpz00_3087 = ((bool_t) 0);
						}
				}
				return BBOOL(BgL_tmpz00_3087);
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_samez00()
	{
		{	/* Reduce/same.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1967z00zzreduce_samez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1967z00zzreduce_samez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1967z00zzreduce_samez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1967z00zzreduce_samez00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1967z00zzreduce_samez00));
		}

	}

#ifdef __cplusplus
}
#endif
