/*===========================================================================*/
/*   (Type/typeof.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/typeof.scm) */
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


	extern obj_t BGl_za2symbolza2z00zztype_cachez00;
	static BgL_typez00_bglt
		BGl_z62getzd2typezd2sequence1260z62zztype_typeofz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2uint32za2z00zztype_cachez00;
	extern obj_t BGl_za2uint16za2z00zztype_cachez00;
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	extern obj_t BGl_za2bignumza2z00zztype_cachez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	static BgL_typez00_bglt BGl_z62getzd2typezd2atomz62zztype_typeofz00(obj_t,
		obj_t);
	static obj_t BGl_z62iszd2subtypezf3z43zztype_typeofz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static BgL_typez00_bglt BGl_z62getzd2typezd2app1273z62zztype_typeofz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static BgL_typez00_bglt BGl_z62getzd2typezd2sync1262z62zztype_typeofz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zztype_typeofz00();
	static BgL_typez00_bglt
		BGl_z62getzd2typezd2letzd2var1270zb0zztype_typeofz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2magicza2z00zztype_cachez00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62getzd2typezd2conditional1264z62zztype_typeofz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztype_typeofz00();
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2int32za2z00zztype_cachez00;
	extern obj_t BGl_za2int16za2z00zztype_cachez00;
	extern obj_t BGl_za2uint8za2z00zztype_cachez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_za2elongza2z00zztype_cachez00;
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2int8za2z00zztype_cachez00;
	static obj_t BGl_gczd2rootszd2initz00zztype_typeofz00();
	static BgL_typez00_bglt
		BGl_z62getzd2typezd2switch1266z62zztype_typeofz00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62getzd2typezd2kwotez62zztype_typeofz00(obj_t,
		obj_t);
	extern obj_t BGl_za2epairza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2nilza2z00zz__evalz00;
	static BgL_typez00_bglt BGl_z62getzd2typezd2var1258z62zztype_typeofz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62getzd2type1255zb0zztype_typeofz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2charza2z00zztype_cachez00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	static obj_t BGl_requirezd2initializa7ationz75zztype_typeofz00 = BUNSPEC;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	static bool_t BGl_pairzd2nilzf3z21zztype_typeofz00(obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zztype_typeofz00();
	static BgL_typez00_bglt BGl_z62getzd2typezb0zztype_typeofz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zztype_typeofz00();
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	extern bool_t BGl_czd2subtypezf3z21zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2uint64za2z00zztype_cachez00;
	extern obj_t BGl_za2bstringza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt, bool_t);
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zztype_typeofz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_typeofz00();
	extern obj_t BGl_za2llongza2z00zztype_cachez00;
	static obj_t BGl_importedzd2moduleszd2initz00zztype_typeofz00();
	static bool_t
		BGl_iszd2strictzd2subtypezf3zf3zztype_typeofz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	extern obj_t BGl_za2int64za2z00zztype_cachez00;
	extern obj_t BGl_za2keywordza2z00zztype_cachez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_za2bintza2z00zztype_cachez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_iszd2subtypezf3z21zztype_typeofz00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62getzd2typezd2letzd2fun1268zb0zztype_typeofz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2typezd2kwotez00zztype_typeofz00(obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2typezd2atomzd2envzd2zztype_typeofz00,
		BgL_bgl_za762getza7d2typeza7d21810za7,
		BGl_z62getzd2typezd2atomz62zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1800z00zztype_typeofz00,
		BgL_bgl_string1800za700za7za7t1811za7, "a-tvector ", 10);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_getzd2typezd2envz00zztype_typeofz00,
		BgL_bgl_za762getza7d2typeza7b01812za7, BGl_z62getzd2typezb0zztype_typeofz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1788z00zztype_typeofz00,
		BgL_bgl_za762getza7d2type1251813z00,
		BGl_z62getzd2type1255zb0zztype_typeofz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1790z00zztype_typeofz00,
		BgL_bgl_za762getza7d2typeza7d21814za7,
		BGl_z62getzd2typezd2var1258z62zztype_typeofz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1792z00zztype_typeofz00,
		BgL_bgl_za762getza7d2typeza7d21815za7,
		BGl_z62getzd2typezd2sequence1260z62zztype_typeofz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1793z00zztype_typeofz00,
		BgL_bgl_za762getza7d2typeza7d21816za7,
		BGl_z62getzd2typezd2sync1262z62zztype_typeofz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1794z00zztype_typeofz00,
		BgL_bgl_za762getza7d2typeza7d21817za7,
		BGl_z62getzd2typezd2conditional1264z62zztype_typeofz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1795z00zztype_typeofz00,
		BgL_bgl_za762getza7d2typeza7d21818za7,
		BGl_z62getzd2typezd2switch1266z62zztype_typeofz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1796z00zztype_typeofz00,
		BgL_bgl_za762getza7d2typeza7d21819za7,
		BGl_z62getzd2typezd2letzd2fun1268zb0zztype_typeofz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1797z00zztype_typeofz00,
		BgL_bgl_za762getza7d2typeza7d21820za7,
		BGl_z62getzd2typezd2letzd2var1270zb0zztype_typeofz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1798z00zztype_typeofz00,
		BgL_bgl_za762getza7d2typeza7d21821za7,
		BGl_z62getzd2typezd2app1273z62zztype_typeofz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_iszd2subtypezf3zd2envzf3zztype_typeofz00,
		BgL_bgl_za762isza7d2subtypeza71822za7,
		BGl_z62iszd2subtypezf3z43zztype_typeofz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1789z00zztype_typeofz00,
		BgL_bgl_string1789za700za7za7t1823za7, "get-type1255", 12);
	      DEFINE_STRING(BGl_string1791z00zztype_typeofz00,
		BgL_bgl_string1791za700za7za7t1824za7, "get-type", 8);
	      DEFINE_STRING(BGl_string1799z00zztype_typeofz00,
		BgL_bgl_string1799za700za7za7t1825za7, "type_typeof", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2typezd2kwotezd2envzd2zztype_typeofz00,
		BgL_bgl_za762getza7d2typeza7d21826za7,
		BGl_z62getzd2typezd2kwotez62zztype_typeofz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztype_typeofz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long
		BgL_checksumz00_2190, char *BgL_fromz00_2191)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_typeofz00))
				{
					BGl_requirezd2initializa7ationz75zztype_typeofz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztype_typeofz00();
					BGl_libraryzd2moduleszd2initz00zztype_typeofz00();
					BGl_cnstzd2initzd2zztype_typeofz00();
					BGl_importedzd2moduleszd2initz00zztype_typeofz00();
					BGl_genericzd2initzd2zztype_typeofz00();
					BGl_methodzd2initzd2zztype_typeofz00();
					return BGl_toplevelzd2initzd2zztype_typeofz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_typeofz00()
	{
		{	/* Type/typeof.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "type_typeof");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "type_typeof");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_typeof");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"type_typeof");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"type_typeof");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "type_typeof");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"type_typeof");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"type_typeof");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"type_typeof");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"type_typeof");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"type_typeof");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"type_typeof");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"type_typeof");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"type_typeof");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "type_typeof");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztype_typeofz00()
	{
		{	/* Type/typeof.scm 15 */
			{	/* Type/typeof.scm 15 */
				obj_t BgL_cportz00_2138;

				{	/* Type/typeof.scm 15 */
					obj_t BgL_stringz00_2146;

					BgL_stringz00_2146 = BGl_string1800z00zztype_typeofz00;
					{	/* Type/typeof.scm 15 */
						obj_t BgL_startz00_2147;

						BgL_startz00_2147 = BINT(((long) 0));
						{	/* Type/typeof.scm 15 */
							obj_t BgL_endz00_2148;

							BgL_endz00_2148 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2146)));
							{	/* Type/typeof.scm 15 */

								BgL_cportz00_2138 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2146, BgL_startz00_2147, BgL_endz00_2148);
				}}}}
				{
					long BgL_iz00_2139;

					BgL_iz00_2139 = ((long) 0);
				BgL_loopz00_2140:
					if ((BgL_iz00_2139 == ((long) -1)))
						{	/* Type/typeof.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Type/typeof.scm 15 */
							{	/* Type/typeof.scm 15 */
								obj_t BgL_arg1808z00_2142;

								{	/* Type/typeof.scm 15 */

									{	/* Type/typeof.scm 15 */
										obj_t BgL_locationz00_2144;

										BgL_locationz00_2144 = BBOOL(((bool_t) 0));
										{	/* Type/typeof.scm 15 */

											BgL_arg1808z00_2142 =
												BGl_readz00zz__readerz00(BgL_cportz00_2138,
												BgL_locationz00_2144);
										}
									}
								}
								{	/* Type/typeof.scm 15 */
									int BgL_tmpz00_2226;

									BgL_tmpz00_2226 = (int) (BgL_iz00_2139);
									CNST_TABLE_SET(BgL_tmpz00_2226, BgL_arg1808z00_2142);
							}}
							{	/* Type/typeof.scm 15 */
								int BgL_auxz00_2145;

								BgL_auxz00_2145 = (int) ((BgL_iz00_2139 - ((long) 1)));
								{
									long BgL_iz00_2231;

									BgL_iz00_2231 = (long) (BgL_auxz00_2145);
									BgL_iz00_2139 = BgL_iz00_2231;
									goto BgL_loopz00_2140;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztype_typeofz00()
	{
		{	/* Type/typeof.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztype_typeofz00()
	{
		{	/* Type/typeof.scm 15 */
			return BUNSPEC;
		}

	}



/* get-type-atom */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t BgL_atomz00_13)
	{
		{	/* Type/typeof.scm 35 */
			if (NULLP(BgL_atomz00_13))
				{	/* Type/typeof.scm 37 */
					return ((BgL_typez00_bglt) BGl_za2bnilza2z00zztype_cachez00);
				}
			else
				{	/* Type/typeof.scm 37 */
					if (INTEGERP(BgL_atomz00_13))
						{	/* Type/typeof.scm 38 */
							return ((BgL_typez00_bglt) BGl_za2longza2z00zztype_cachez00);
						}
					else
						{	/* Type/typeof.scm 38 */
							if (BIGNUMP(BgL_atomz00_13))
								{	/* Type/typeof.scm 39 */
									return
										((BgL_typez00_bglt) BGl_za2bignumza2z00zztype_cachez00);
								}
							else
								{	/* Type/typeof.scm 40 */
									bool_t BgL_test1832z00_2243;

									if (INTEGERP(BgL_atomz00_13))
										{	/* Type/typeof.scm 40 */
											BgL_test1832z00_2243 = ((bool_t) 1);
										}
									else
										{	/* Type/typeof.scm 40 */
											BgL_test1832z00_2243 = REALP(BgL_atomz00_13);
										}
									if (BgL_test1832z00_2243)
										{	/* Type/typeof.scm 40 */
											return
												((BgL_typez00_bglt) BGl_za2realza2z00zztype_cachez00);
										}
									else
										{	/* Type/typeof.scm 40 */
											if (BOOLEANP(BgL_atomz00_13))
												{	/* Type/typeof.scm 41 */
													return
														((BgL_typez00_bglt)
														BGl_za2boolza2z00zztype_cachez00);
												}
											else
												{	/* Type/typeof.scm 41 */
													if (CHARP(BgL_atomz00_13))
														{	/* Type/typeof.scm 42 */
															return
																((BgL_typez00_bglt)
																BGl_za2charza2z00zztype_cachez00);
														}
													else
														{	/* Type/typeof.scm 42 */
															if (STRINGP(BgL_atomz00_13))
																{	/* Type/typeof.scm 43 */
																	return
																		((BgL_typez00_bglt)
																		BGl_za2bstringza2z00zztype_cachez00);
																}
															else
																{	/* Type/typeof.scm 43 */
																	if ((BgL_atomz00_13 == BUNSPEC))
																		{	/* Type/typeof.scm 44 */
																			return
																				((BgL_typez00_bglt)
																				BGl_za2unspecza2z00zztype_cachez00);
																		}
																	else
																		{	/* Type/typeof.scm 44 */
																			if (ELONGP(BgL_atomz00_13))
																				{	/* Type/typeof.scm 45 */
																					return
																						((BgL_typez00_bglt)
																						BGl_za2elongza2z00zztype_cachez00);
																				}
																			else
																				{	/* Type/typeof.scm 45 */
																					if (LLONGP(BgL_atomz00_13))
																						{	/* Type/typeof.scm 46 */
																							return
																								((BgL_typez00_bglt)
																								BGl_za2llongza2z00zztype_cachez00);
																						}
																					else
																						{	/* Type/typeof.scm 46 */
																							if (BGL_INT8P(BgL_atomz00_13))
																								{	/* Type/typeof.scm 47 */
																									return
																										((BgL_typez00_bglt)
																										BGl_za2int8za2z00zztype_cachez00);
																								}
																							else
																								{	/* Type/typeof.scm 47 */
																									if (BGL_UINT8P
																										(BgL_atomz00_13))
																										{	/* Type/typeof.scm 48 */
																											return
																												((BgL_typez00_bglt)
																												BGl_za2uint8za2z00zztype_cachez00);
																										}
																									else
																										{	/* Type/typeof.scm 48 */
																											if (BGL_INT16P
																												(BgL_atomz00_13))
																												{	/* Type/typeof.scm 49 */
																													return
																														((BgL_typez00_bglt)
																														BGl_za2int16za2z00zztype_cachez00);
																												}
																											else
																												{	/* Type/typeof.scm 49 */
																													if (BGL_UINT16P
																														(BgL_atomz00_13))
																														{	/* Type/typeof.scm 50 */
																															return
																																(
																																(BgL_typez00_bglt)
																																BGl_za2uint16za2z00zztype_cachez00);
																														}
																													else
																														{	/* Type/typeof.scm 50 */
																															if (BGL_INT32P
																																(BgL_atomz00_13))
																																{	/* Type/typeof.scm 51 */
																																	return
																																		(
																																		(BgL_typez00_bglt)
																																		BGl_za2int32za2z00zztype_cachez00);
																																}
																															else
																																{	/* Type/typeof.scm 51 */
																																	if (BGL_UINT32P(BgL_atomz00_13))
																																		{	/* Type/typeof.scm 52 */
																																			return
																																				(
																																				(BgL_typez00_bglt)
																																				BGl_za2uint32za2z00zztype_cachez00);
																																		}
																																	else
																																		{	/* Type/typeof.scm 52 */
																																			if (BGL_INT64P(BgL_atomz00_13))
																																				{	/* Type/typeof.scm 53 */
																																					return
																																						(
																																						(BgL_typez00_bglt)
																																						BGl_za2int64za2z00zztype_cachez00);
																																				}
																																			else
																																				{	/* Type/typeof.scm 53 */
																																					if (BGL_UINT64P(BgL_atomz00_13))
																																						{	/* Type/typeof.scm 54 */
																																							return
																																								(
																																								(BgL_typez00_bglt)
																																								BGl_za2uint64za2z00zztype_cachez00);
																																						}
																																					else
																																						{	/* Type/typeof.scm 54 */
																																							if (KEYWORDP(BgL_atomz00_13))
																																								{	/* Type/typeof.scm 55 */
																																									return
																																										(
																																										(BgL_typez00_bglt)
																																										BGl_za2keywordza2z00zztype_cachez00);
																																								}
																																							else
																																								{	/* Type/typeof.scm 55 */
																																									return
																																										(
																																										(BgL_typez00_bglt)
																																										BGl_za2objza2z00zztype_cachez00);
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



/* &get-type-atom */
	BgL_typez00_bglt BGl_z62getzd2typezd2atomz62zztype_typeofz00(obj_t
		BgL_envz00_2091, obj_t BgL_atomz00_2092)
	{
		{	/* Type/typeof.scm 35 */
			return BGl_getzd2typezd2atomz00zztype_typeofz00(BgL_atomz00_2092);
		}

	}



/* get-type-kwote */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2typezd2kwotez00zztype_typeofz00(obj_t BgL_kwotez00_14)
	{
		{	/* Type/typeof.scm 61 */
			if (SYMBOLP(BgL_kwotez00_14))
				{	/* Type/typeof.scm 63 */
					return ((BgL_typez00_bglt) BGl_za2symbolza2z00zztype_cachez00);
				}
			else
				{	/* Type/typeof.scm 63 */
					if (KEYWORDP(BgL_kwotez00_14))
						{	/* Type/typeof.scm 64 */
							return ((BgL_typez00_bglt) BGl_za2keywordza2z00zztype_cachez00);
						}
					else
						{	/* Type/typeof.scm 64 */
							if (PAIRP(BgL_kwotez00_14))
								{	/* Type/typeof.scm 65 */
									return ((BgL_typez00_bglt) BGl_za2pairza2z00zztype_cachez00);
								}
							else
								{	/* Type/typeof.scm 65 */
									if (NULLP(BgL_kwotez00_14))
										{	/* Type/typeof.scm 66 */
											return
												((BgL_typez00_bglt) BGl_za2bnilza2z00zztype_cachez00);
										}
									else
										{	/* Type/typeof.scm 66 */
											if (VECTORP(BgL_kwotez00_14))
												{	/* Type/typeof.scm 67 */
													return
														((BgL_typez00_bglt)
														BGl_za2vectorza2z00zztype_cachez00);
												}
											else
												{	/* Type/typeof.scm 68 */
													bool_t BgL_test1854z00_2310;

													if (STRUCTP(BgL_kwotez00_14))
														{	/* Type/typeof.scm 68 */
															BgL_test1854z00_2310 =
																(STRUCT_KEY(BgL_kwotez00_14) ==
																CNST_TABLE_REF(((long) 0)));
														}
													else
														{	/* Type/typeof.scm 68 */
															BgL_test1854z00_2310 = ((bool_t) 0);
														}
													if (BgL_test1854z00_2310)
														{	/* Type/typeof.scm 68 */
															return
																((BgL_typez00_bglt)
																STRUCT_REF(BgL_kwotez00_14,
																	(int) (((long) 0))));
														}
													else
														{	/* Type/typeof.scm 68 */
															return
																((BgL_typez00_bglt)
																BGl_za2objza2z00zztype_cachez00);
														}
												}
										}
								}
						}
				}
		}

	}



/* &get-type-kwote */
	BgL_typez00_bglt BGl_z62getzd2typezd2kwotez62zztype_typeofz00(obj_t
		BgL_envz00_2093, obj_t BgL_kwotez00_2094)
	{
		{	/* Type/typeof.scm 61 */
			return BGl_getzd2typezd2kwotez00zztype_typeofz00(BgL_kwotez00_2094);
		}

	}



/* pair-nil? */
	bool_t BGl_pairzd2nilzf3z21zztype_typeofz00(obj_t BgL_tz00_15)
	{
		{	/* Type/typeof.scm 74 */
			{	/* Type/typeof.scm 75 */
				bool_t BgL__ortest_1103z00_1621;

				BgL__ortest_1103z00_1621 =
					(BgL_tz00_15 == BGl_za2pairza2z00zztype_cachez00);
				if (BgL__ortest_1103z00_1621)
					{	/* Type/typeof.scm 75 */
						return BgL__ortest_1103z00_1621;
					}
				else
					{	/* Type/typeof.scm 75 */
						bool_t BgL__ortest_1104z00_1622;

						BgL__ortest_1104z00_1622 =
							(BgL_tz00_15 == BGl_za2epairza2z00zztype_cachez00);
						if (BgL__ortest_1104z00_1622)
							{	/* Type/typeof.scm 75 */
								return BgL__ortest_1104z00_1622;
							}
						else
							{	/* Type/typeof.scm 75 */
								bool_t BgL__ortest_1105z00_1623;

								BgL__ortest_1105z00_1623 =
									(BgL_tz00_15 == BGl_za2bnilza2z00zztype_cachez00);
								if (BgL__ortest_1105z00_1623)
									{	/* Type/typeof.scm 75 */
										return BgL__ortest_1105z00_1623;
									}
								else
									{	/* Type/typeof.scm 75 */
										return
											(BgL_tz00_15 == BGl_za2pairzd2nilza2zd2zztype_cachez00);
									}
							}
					}
			}
		}

	}



/* is-strict-subtype? */
	bool_t BGl_iszd2strictzd2subtypezf3zf3zztype_typeofz00(BgL_typez00_bglt
		BgL_t1z00_26, BgL_typez00_bglt BgL_t2z00_27, obj_t BgL_strictz00_28)
	{
		{	/* Type/typeof.scm 170 */
			if (CBOOL(BGl_iszd2subtypezf3z21zztype_typeofz00(
						((obj_t) BgL_t1z00_26), ((obj_t) BgL_t2z00_27))))
				{	/* Type/typeof.scm 172 */
					bool_t BgL__ortest_1122z00_1625;

					if (CBOOL(BgL_strictz00_28))
						{	/* Type/typeof.scm 172 */
							BgL__ortest_1122z00_1625 = ((bool_t) 0);
						}
					else
						{	/* Type/typeof.scm 172 */
							BgL__ortest_1122z00_1625 = ((bool_t) 1);
						}
					if (BgL__ortest_1122z00_1625)
						{	/* Type/typeof.scm 172 */
							return BgL__ortest_1122z00_1625;
						}
					else
						{	/* Type/typeof.scm 172 */
							if ((((obj_t) BgL_t1z00_26) == BGl_za2_za2z00zztype_cachez00))
								{	/* Type/typeof.scm 172 */
									return ((bool_t) 0);
								}
							else
								{	/* Type/typeof.scm 172 */
									if ((((obj_t) BgL_t2z00_27) == BGl_za2_za2z00zztype_cachez00))
										{	/* Type/typeof.scm 172 */
											return ((bool_t) 0);
										}
									else
										{	/* Type/typeof.scm 172 */
											return ((bool_t) 1);
										}
								}
						}
				}
			else
				{	/* Type/typeof.scm 171 */
					return ((bool_t) 0);
				}
		}

	}



/* is-subtype? */
	BGL_EXPORTED_DEF obj_t BGl_iszd2subtypezf3z21zztype_typeofz00(obj_t
		BgL_t1z00_29, obj_t BgL_t2z00_30)
	{
		{	/* Type/typeof.scm 179 */
			if ((BgL_t1z00_29 == BgL_t2z00_30))
				{	/* Type/typeof.scm 181 */
					return BTRUE;
				}
			else
				{	/* Type/typeof.scm 183 */
					bool_t BgL_test1865z00_2344;

					if ((BgL_t1z00_29 == BGl_za2magicza2z00zztype_cachez00))
						{	/* Type/typeof.scm 183 */
							BgL_test1865z00_2344 = ((bool_t) 1);
						}
					else
						{	/* Type/typeof.scm 183 */
							BgL_test1865z00_2344 =
								(BgL_t2z00_30 == BGl_za2magicza2z00zztype_cachez00);
						}
					if (BgL_test1865z00_2344)
						{	/* Type/typeof.scm 183 */
							return BTRUE;
						}
					else
						{	/* Type/typeof.scm 185 */
							bool_t BgL_test1867z00_2348;

							if ((BgL_t2z00_30 == BGl_za2_za2z00zztype_cachez00))
								{	/* Type/typeof.scm 185 */
									BgL_test1867z00_2348 = ((bool_t) 1);
								}
							else
								{	/* Type/typeof.scm 185 */
									BgL_test1867z00_2348 =
										(BgL_t1z00_29 == BGl_za2_za2z00zztype_cachez00);
								}
							if (BgL_test1867z00_2348)
								{	/* Type/typeof.scm 185 */
									return BTRUE;
								}
							else
								{	/* Type/typeof.scm 185 */
									if ((BgL_t2z00_30 == BGl_za2pairzd2nilza2zd2zztype_cachez00))
										{	/* Type/typeof.scm 188 */
											bool_t BgL__ortest_1124z00_1634;

											BgL__ortest_1124z00_1634 =
												(BgL_t1z00_29 == BGl_za2pairza2z00zztype_cachez00);
											if (BgL__ortest_1124z00_1634)
												{	/* Type/typeof.scm 188 */
													return BBOOL(BgL__ortest_1124z00_1634);
												}
											else
												{	/* Type/typeof.scm 188 */
													bool_t BgL__ortest_1125z00_1635;

													BgL__ortest_1125z00_1635 =
														(BgL_t1z00_29 == BGl_za2epairza2z00zztype_cachez00);
													if (BgL__ortest_1125z00_1635)
														{	/* Type/typeof.scm 188 */
															return BBOOL(BgL__ortest_1125z00_1635);
														}
													else
														{	/* Type/typeof.scm 188 */
															return
																BBOOL(
																(BgL_t1z00_29 == BGl_za2nilza2z00zz__evalz00));
														}
												}
										}
									else
										{	/* Type/typeof.scm 189 */
											bool_t BgL_test1872z00_2362;

											if (BGl_isazf3zf3zz__objectz00(BgL_t1z00_29,
													BGl_tclassz00zzobject_classz00))
												{	/* Type/typeof.scm 189 */
													BgL_test1872z00_2362 = ((bool_t) 1);
												}
											else
												{	/* Type/typeof.scm 189 */
													BgL_test1872z00_2362 =
														BGl_isazf3zf3zz__objectz00(BgL_t2z00_30,
														BGl_tclassz00zzobject_classz00);
												}
											if (BgL_test1872z00_2362)
												{	/* Type/typeof.scm 189 */
													return
														BBOOL(BGl_typezd2subclasszf3z21zzobject_classz00(
															((BgL_typez00_bglt) BgL_t1z00_29),
															((BgL_typez00_bglt) BgL_t2z00_30)));
												}
											else
												{	/* Type/typeof.scm 191 */
													bool_t BgL_test1874z00_2370;

													if (BGl_bigloozd2typezf3z21zztype_typez00(
															((BgL_typez00_bglt) BgL_t1z00_29)))
														{	/* Type/typeof.scm 191 */
															BgL_test1874z00_2370 = ((bool_t) 0);
														}
													else
														{	/* Type/typeof.scm 191 */
															if (BGl_bigloozd2typezf3z21zztype_typez00(
																	((BgL_typez00_bglt) BgL_t2z00_30)))
																{	/* Type/typeof.scm 191 */
																	BgL_test1874z00_2370 = ((bool_t) 0);
																}
															else
																{	/* Type/typeof.scm 191 */
																	BgL_test1874z00_2370 = ((bool_t) 1);
																}
														}
													if (BgL_test1874z00_2370)
														{	/* Type/typeof.scm 191 */
															return
																BBOOL(BGl_czd2subtypezf3z21zztype_miscz00(
																	((BgL_typez00_bglt) BgL_t1z00_29),
																	((BgL_typez00_bglt) BgL_t2z00_30)));
														}
													else
														{	/* Type/typeof.scm 193 */
															bool_t BgL_test1877z00_2381;

															if (
																(BgL_t2z00_30 ==
																	BGl_za2bintza2z00zztype_cachez00))
																{	/* Type/typeof.scm 193 */
																	bool_t BgL__ortest_1126z00_1645;

																	BgL__ortest_1126z00_1645 =
																		(BGl_typez00zztype_typez00 ==
																		BGl_za2intza2z00zztype_cachez00);
																	if (BgL__ortest_1126z00_1645)
																		{	/* Type/typeof.scm 193 */
																			BgL_test1877z00_2381 =
																				BgL__ortest_1126z00_1645;
																		}
																	else
																		{	/* Type/typeof.scm 193 */
																			BgL_test1877z00_2381 =
																				(BGl_typez00zztype_typez00 ==
																				BGl_za2longza2z00zztype_cachez00);
																		}
																}
															else
																{	/* Type/typeof.scm 193 */
																	BgL_test1877z00_2381 = ((bool_t) 0);
																}
															if (BgL_test1877z00_2381)
																{	/* Type/typeof.scm 193 */
																	return BTRUE;
																}
															else
																{	/* Type/typeof.scm 193 */
																	return
																		BBOOL(
																		(BgL_t2z00_30 ==
																			BGl_za2objza2z00zztype_cachez00));
																}
														}
												}
										}
								}
						}
				}
		}

	}



/* &is-subtype? */
	obj_t BGl_z62iszd2subtypezf3z43zztype_typeofz00(obj_t BgL_envz00_2095,
		obj_t BgL_t1z00_2096, obj_t BgL_t2z00_2097)
	{
		{	/* Type/typeof.scm 179 */
			return
				BGl_iszd2subtypezf3z21zztype_typeofz00(BgL_t1z00_2096, BgL_t2z00_2097);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztype_typeofz00()
	{
		{	/* Type/typeof.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_typeofz00()
	{
		{	/* Type/typeof.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00,
				BGl_proc1788z00zztype_typeofz00, BGl_nodez00zzast_nodez00,
				BGl_string1789z00zztype_typeofz00);
		}

	}



/* &get-type1255 */
	obj_t BGl_z62getzd2type1255zb0zztype_typeofz00(obj_t BgL_envz00_2099,
		obj_t BgL_nodez00_2100, obj_t BgL_strictz00_2101)
	{
		{	/* Type/typeof.scm 86 */
			return
				((obj_t)
				(((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_nodez00_2100)))->BgL_typez00));
		}

	}



/* get-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt BgL_nodez00_16,
		bool_t BgL_strictz00_17)
	{
		{	/* Type/typeof.scm 86 */
			{	/* Type/typeof.scm 86 */
				obj_t BgL_method1256z00_1656;

				{	/* Type/typeof.scm 86 */
					obj_t BgL_res1785z00_2076;

					{	/* Type/typeof.scm 86 */
						long BgL_objzd2classzd2numz00_2041;

						{	/* Type/typeof.scm 86 */
							long BgL_res1775z00_2044;

							BgL_res1775z00_2044 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_16));
							BgL_objzd2classzd2numz00_2041 = BgL_res1775z00_2044;
						}
						{	/* Type/typeof.scm 86 */
							obj_t BgL_arg1813z00_2042;

							BgL_arg1813z00_2042 =
								PROCEDURE_REF(BGl_getzd2typezd2envz00zztype_typeofz00,
								(int) (((long) 1)));
							{	/* Type/typeof.scm 86 */
								int BgL_offsetz00_2046;

								BgL_offsetz00_2046 = (int) (BgL_objzd2classzd2numz00_2041);
								{	/* Type/typeof.scm 86 */
									long BgL_offsetz00_2047;

									BgL_offsetz00_2047 =
										((long) (BgL_offsetz00_2046) - OBJECT_TYPE);
									{	/* Type/typeof.scm 86 */
										long BgL_modz00_2048;

										BgL_modz00_2048 =
											(BgL_offsetz00_2047 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Type/typeof.scm 86 */
											long BgL_restz00_2050;

											BgL_restz00_2050 =
												(BgL_offsetz00_2047 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Type/typeof.scm 86 */

												{	/* Type/typeof.scm 86 */
													obj_t BgL_bucketz00_2052;

													BgL_bucketz00_2052 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2042), BgL_modz00_2048);
													BgL_res1785z00_2076 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2052), BgL_restz00_2050);
					}}}}}}}}
					BgL_method1256z00_1656 = BgL_res1785z00_2076;
				}
				return
					((BgL_typez00_bglt)
					PROCEDURE_ENTRY(BgL_method1256z00_1656) (BgL_method1256z00_1656,
						((obj_t) BgL_nodez00_16), BBOOL(BgL_strictz00_17), BEOA));
			}
		}

	}



/* &get-type */
	BgL_typez00_bglt BGl_z62getzd2typezb0zztype_typeofz00(obj_t BgL_envz00_2102,
		obj_t BgL_nodez00_2103, obj_t BgL_strictz00_2104)
	{
		{	/* Type/typeof.scm 86 */
			return
				BGl_getzd2typezd2zztype_typeofz00(
				((BgL_nodez00_bglt) BgL_nodez00_2103), CBOOL(BgL_strictz00_2104));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_typeofz00()
	{
		{	/* Type/typeof.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_varz00zzast_nodez00,
				BGl_proc1790z00zztype_typeofz00, BGl_string1791z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_sequencez00zzast_nodez00,
				BGl_proc1792z00zztype_typeofz00, BGl_string1791z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_syncz00zzast_nodez00,
				BGl_proc1793z00zztype_typeofz00, BGl_string1791z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1794z00zztype_typeofz00,
				BGl_string1791z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_switchz00zzast_nodez00,
				BGl_proc1795z00zztype_typeofz00, BGl_string1791z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc1796z00zztype_typeofz00, BGl_string1791z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc1797z00zztype_typeofz00, BGl_string1791z00zztype_typeofz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_appz00zzast_nodez00,
				BGl_proc1798z00zztype_typeofz00, BGl_string1791z00zztype_typeofz00);
		}

	}



/* &get-type-app1273 */
	BgL_typez00_bglt BGl_z62getzd2typezd2app1273z62zztype_typeofz00(obj_t
		BgL_envz00_2113, obj_t BgL_nodez00_2114, obj_t BgL_strictz00_2115)
	{
		{	/* Type/typeof.scm 242 */
			{	/* Type/typeof.scm 244 */
				bool_t BgL_test1880z00_2438;

				{	/* Type/typeof.scm 244 */
					BgL_typez00_bglt BgL_arg1582z00_2154;

					BgL_arg1582z00_2154 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_2114))))->BgL_typez00);
					BgL_test1880z00_2438 =
						(((obj_t) BgL_arg1582z00_2154) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1880z00_2438)
					{	/* Type/typeof.scm 244 */
						return
							(((BgL_variablez00_bglt) COBJECT(
									(((BgL_varz00_bglt) COBJECT(
												(((BgL_appz00_bglt) COBJECT(
															((BgL_appz00_bglt) BgL_nodez00_2114)))->
													BgL_funz00)))->BgL_variablez00)))->BgL_typez00);
					}
				else
					{	/* Type/typeof.scm 244 */
						return
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_2114))))->BgL_typez00);
					}
			}
		}

	}



/* &get-type-let-var1270 */
	BgL_typez00_bglt BGl_z62getzd2typezd2letzd2var1270zb0zztype_typeofz00(obj_t
		BgL_envz00_2116, obj_t BgL_nodez00_2117, obj_t BgL_strictz00_2118)
	{
		{	/* Type/typeof.scm 233 */
			{	/* Type/typeof.scm 235 */
				bool_t BgL_test1881z00_2451;

				{	/* Type/typeof.scm 235 */
					BgL_typez00_bglt BgL_arg1565z00_2156;

					BgL_arg1565z00_2156 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2varzd2_bglt) BgL_nodez00_2117))))->BgL_typez00);
					BgL_test1881z00_2451 =
						(((obj_t) BgL_arg1565z00_2156) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1881z00_2451)
					{	/* Type/typeof.scm 235 */
						return
							BGl_getzd2typezd2zztype_typeofz00(
							(((BgL_letzd2varzd2_bglt) COBJECT(
										((BgL_letzd2varzd2_bglt) BgL_nodez00_2117)))->BgL_bodyz00),
							CBOOL(BgL_strictz00_2118));
					}
				else
					{	/* Type/typeof.scm 235 */
						return
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_letzd2varzd2_bglt) BgL_nodez00_2117))))->BgL_typez00);
					}
			}
		}

	}



/* &get-type-let-fun1268 */
	BgL_typez00_bglt BGl_z62getzd2typezd2letzd2fun1268zb0zztype_typeofz00(obj_t
		BgL_envz00_2119, obj_t BgL_nodez00_2120, obj_t BgL_strictz00_2121)
	{
		{	/* Type/typeof.scm 224 */
			{	/* Type/typeof.scm 226 */
				bool_t BgL_test1882z00_2464;

				{	/* Type/typeof.scm 226 */
					BgL_typez00_bglt BgL_arg1558z00_2158;

					BgL_arg1558z00_2158 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_letzd2funzd2_bglt) BgL_nodez00_2120))))->BgL_typez00);
					BgL_test1882z00_2464 =
						(((obj_t) BgL_arg1558z00_2158) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1882z00_2464)
					{	/* Type/typeof.scm 226 */
						return
							BGl_getzd2typezd2zztype_typeofz00(
							(((BgL_letzd2funzd2_bglt) COBJECT(
										((BgL_letzd2funzd2_bglt) BgL_nodez00_2120)))->BgL_bodyz00),
							CBOOL(BgL_strictz00_2121));
					}
				else
					{	/* Type/typeof.scm 226 */
						return
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_letzd2funzd2_bglt) BgL_nodez00_2120))))->BgL_typez00);
					}
			}
		}

	}



/* &get-type-switch1266 */
	BgL_typez00_bglt BGl_z62getzd2typezd2switch1266z62zztype_typeofz00(obj_t
		BgL_envz00_2122, obj_t BgL_nodez00_2123, obj_t BgL_strictz00_2124)
	{
		{	/* Type/typeof.scm 201 */
			{	/* Type/typeof.scm 203 */
				bool_t BgL_test1883z00_2477;

				{	/* Type/typeof.scm 203 */
					BgL_typez00_bglt BgL_arg1537z00_2160;

					BgL_arg1537z00_2160 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_switchz00_bglt) BgL_nodez00_2123))))->BgL_typez00);
					BgL_test1883z00_2477 =
						(((obj_t) BgL_arg1537z00_2160) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1883z00_2477)
					{	/* Type/typeof.scm 204 */
						obj_t BgL_g1128z00_2161;
						BgL_typez00_bglt BgL_g1129z00_2162;

						BgL_g1128z00_2161 =
							CDR(
							(((BgL_switchz00_bglt) COBJECT(
										((BgL_switchz00_bglt) BgL_nodez00_2123)))->BgL_clausesz00));
						{	/* Type/typeof.scm 205 */
							obj_t BgL_arg1521z00_2163;

							BgL_arg1521z00_2163 =
								CDR(CAR(
									(((BgL_switchz00_bglt) COBJECT(
												((BgL_switchz00_bglt) BgL_nodez00_2123)))->
										BgL_clausesz00)));
							BgL_g1129z00_2162 =
								BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt)
									BgL_arg1521z00_2163), CBOOL(BgL_strictz00_2124));
						}
						{
							obj_t BgL_clausesz00_2165;
							obj_t BgL_typez00_2166;

							{
								obj_t BgL_auxz00_2493;

								BgL_clausesz00_2165 = BgL_g1128z00_2161;
								BgL_typez00_2166 = ((obj_t) BgL_g1129z00_2162);
							BgL_loopz00_2164:
								if (NULLP(BgL_clausesz00_2165))
									{	/* Type/typeof.scm 206 */
										BgL_auxz00_2493 = BgL_typez00_2166;
									}
								else
									{	/* Type/typeof.scm 208 */
										BgL_typez00_bglt BgL_ntypez00_2167;

										{	/* Type/typeof.scm 208 */
											obj_t BgL_arg1495z00_2168;

											{	/* Type/typeof.scm 208 */
												obj_t BgL_pairz00_2169;

												BgL_pairz00_2169 = CAR(((obj_t) BgL_clausesz00_2165));
												BgL_arg1495z00_2168 = CDR(BgL_pairz00_2169);
											}
											BgL_ntypez00_2167 =
												BGl_getzd2typezd2zztype_typeofz00(
												((BgL_nodez00_bglt) BgL_arg1495z00_2168),
												CBOOL(BgL_strictz00_2124));
										}
										if ((((obj_t) BgL_ntypez00_2167) == BgL_typez00_2166))
											{	/* Type/typeof.scm 211 */
												obj_t BgL_arg1474z00_2170;

												BgL_arg1474z00_2170 =
													CDR(((obj_t) BgL_clausesz00_2165));
												{
													obj_t BgL_clausesz00_2507;

													BgL_clausesz00_2507 = BgL_arg1474z00_2170;
													BgL_clausesz00_2165 = BgL_clausesz00_2507;
													goto BgL_loopz00_2164;
												}
											}
										else
											{	/* Type/typeof.scm 210 */
												if (
													(BgL_typez00_2166 ==
														BGl_za2magicza2z00zztype_cachez00))
													{	/* Type/typeof.scm 213 */
														obj_t BgL_arg1476z00_2171;

														BgL_arg1476z00_2171 =
															CDR(((obj_t) BgL_clausesz00_2165));
														{
															obj_t BgL_typez00_2513;
															obj_t BgL_clausesz00_2512;

															BgL_clausesz00_2512 = BgL_arg1476z00_2171;
															BgL_typez00_2513 = ((obj_t) BgL_ntypez00_2167);
															BgL_typez00_2166 = BgL_typez00_2513;
															BgL_clausesz00_2165 = BgL_clausesz00_2512;
															goto BgL_loopz00_2164;
														}
													}
												else
													{	/* Type/typeof.scm 214 */
														bool_t BgL_test1887z00_2515;

														if (
															(((obj_t) BgL_ntypez00_2167) == BgL_typez00_2166))
															{	/* Type/typeof.scm 214 */
																BgL_test1887z00_2515 = ((bool_t) 1);
															}
														else
															{	/* Type/typeof.scm 214 */
																BgL_test1887z00_2515 =
																	(
																	((obj_t) BgL_ntypez00_2167) ==
																	BGl_za2magicza2z00zztype_cachez00);
															}
														if (BgL_test1887z00_2515)
															{	/* Type/typeof.scm 215 */
																obj_t BgL_arg1489z00_2172;

																BgL_arg1489z00_2172 =
																	CDR(((obj_t) BgL_clausesz00_2165));
																{
																	obj_t BgL_clausesz00_2523;

																	BgL_clausesz00_2523 = BgL_arg1489z00_2172;
																	BgL_clausesz00_2165 = BgL_clausesz00_2523;
																	goto BgL_loopz00_2164;
																}
															}
														else
															{	/* Type/typeof.scm 216 */
																bool_t BgL_test1889z00_2524;

																if (BGl_pairzd2nilzf3z21zztype_typeofz00
																	(BgL_typez00_2166))
																	{	/* Type/typeof.scm 216 */
																		BgL_test1889z00_2524 =
																			BGl_pairzd2nilzf3z21zztype_typeofz00(
																			((obj_t) BgL_ntypez00_2167));
																	}
																else
																	{	/* Type/typeof.scm 216 */
																		BgL_test1889z00_2524 = ((bool_t) 0);
																	}
																if (BgL_test1889z00_2524)
																	{	/* Type/typeof.scm 217 */
																		obj_t BgL_arg1493z00_2173;

																		BgL_arg1493z00_2173 =
																			CDR(((obj_t) BgL_clausesz00_2165));
																		{
																			obj_t BgL_typez00_2532;
																			obj_t BgL_clausesz00_2531;

																			BgL_clausesz00_2531 = BgL_arg1493z00_2173;
																			BgL_typez00_2532 =
																				BGl_za2pairzd2nilza2zd2zztype_cachez00;
																			BgL_typez00_2166 = BgL_typez00_2532;
																			BgL_clausesz00_2165 = BgL_clausesz00_2531;
																			goto BgL_loopz00_2164;
																		}
																	}
																else
																	{	/* Type/typeof.scm 216 */
																		BgL_auxz00_2493 =
																			BGl_za2objza2z00zztype_cachez00;
																	}
															}
													}
											}
									}
								return ((BgL_typez00_bglt) BgL_auxz00_2493);
							}
						}
					}
				else
					{	/* Type/typeof.scm 203 */
						return
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_switchz00_bglt) BgL_nodez00_2123))))->BgL_typez00);
					}
			}
		}

	}



/* &get-type-conditional1264 */
	BgL_typez00_bglt BGl_z62getzd2typezd2conditional1264z62zztype_typeofz00(obj_t
		BgL_envz00_2125, obj_t BgL_nodez00_2126, obj_t BgL_strictz00_2127)
	{
		{	/* Type/typeof.scm 152 */
			{	/* Type/typeof.scm 154 */
				bool_t BgL_test1891z00_2538;

				{	/* Type/typeof.scm 154 */
					BgL_typez00_bglt BgL_arg1464z00_2175;

					BgL_arg1464z00_2175 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_conditionalz00_bglt) BgL_nodez00_2126))))->BgL_typez00);
					BgL_test1891z00_2538 =
						(((obj_t) BgL_arg1464z00_2175) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1891z00_2538)
					{	/* Type/typeof.scm 156 */
						BgL_typez00_bglt BgL_ttruez00_2176;
						BgL_typez00_bglt BgL_tfalsez00_2177;

						BgL_ttruez00_2176 =
							BGl_getzd2typezd2zztype_typeofz00(
							(((BgL_conditionalz00_bglt) COBJECT(
										((BgL_conditionalz00_bglt) BgL_nodez00_2126)))->
								BgL_truez00), CBOOL(BgL_strictz00_2127));
						BgL_tfalsez00_2177 =
							BGl_getzd2typezd2zztype_typeofz00((((BgL_conditionalz00_bglt)
									COBJECT(((BgL_conditionalz00_bglt) BgL_nodez00_2126)))->
								BgL_falsez00), CBOOL(BgL_strictz00_2127));
						{	/* Type/typeof.scm 159 */
							bool_t BgL_test1892z00_2552;

							if ((((obj_t) BgL_ttruez00_2176) == ((obj_t) BgL_tfalsez00_2177)))
								{	/* Type/typeof.scm 159 */
									BgL_test1892z00_2552 = ((bool_t) 1);
								}
							else
								{	/* Type/typeof.scm 159 */
									BgL_test1892z00_2552 =
										(
										((obj_t) BgL_tfalsez00_2177) ==
										BGl_za2magicza2z00zztype_cachez00);
								}
							if (BgL_test1892z00_2552)
								{	/* Type/typeof.scm 159 */
									return BgL_ttruez00_2176;
								}
							else
								{	/* Type/typeof.scm 159 */
									if (
										(((obj_t) BgL_ttruez00_2176) ==
											BGl_za2magicza2z00zztype_cachez00))
										{	/* Type/typeof.scm 160 */
											return BgL_tfalsez00_2177;
										}
									else
										{	/* Type/typeof.scm 161 */
											bool_t BgL_test1895z00_2562;

											if (BGl_pairzd2nilzf3z21zztype_typeofz00(
													((obj_t) BgL_ttruez00_2176)))
												{	/* Type/typeof.scm 161 */
													BgL_test1895z00_2562 =
														BGl_pairzd2nilzf3z21zztype_typeofz00(
														((obj_t) BgL_tfalsez00_2177));
												}
											else
												{	/* Type/typeof.scm 161 */
													BgL_test1895z00_2562 = ((bool_t) 0);
												}
											if (BgL_test1895z00_2562)
												{	/* Type/typeof.scm 161 */
													return
														((BgL_typez00_bglt)
														BGl_za2pairzd2nilza2zd2zztype_cachez00);
												}
											else
												{	/* Type/typeof.scm 161 */
													if (BGl_iszd2strictzd2subtypezf3zf3zztype_typeofz00
														(BgL_ttruez00_2176, BgL_tfalsez00_2177,
															BgL_strictz00_2127))
														{	/* Type/typeof.scm 162 */
															return BgL_tfalsez00_2177;
														}
													else
														{	/* Type/typeof.scm 162 */
															if (BGl_iszd2strictzd2subtypezf3zf3zztype_typeofz00(BgL_tfalsez00_2177, BgL_ttruez00_2176, BgL_strictz00_2127))
																{	/* Type/typeof.scm 163 */
																	return BgL_ttruez00_2176;
																}
															else
																{	/* Type/typeof.scm 163 */
																	return
																		((BgL_typez00_bglt)
																		BGl_za2objza2z00zztype_cachez00);
																}
														}
												}
										}
								}
						}
					}
				else
					{	/* Type/typeof.scm 154 */
						return
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_conditionalz00_bglt) BgL_nodez00_2126))))->
							BgL_typez00);
					}
			}
		}

	}



/* &get-type-sync1262 */
	BgL_typez00_bglt BGl_z62getzd2typezd2sync1262z62zztype_typeofz00(obj_t
		BgL_envz00_2128, obj_t BgL_nodez00_2129, obj_t BgL_strictz00_2130)
	{
		{	/* Type/typeof.scm 142 */
			{	/* Type/typeof.scm 144 */
				bool_t BgL_test1899z00_2577;

				{	/* Type/typeof.scm 144 */
					BgL_typez00_bglt BgL_arg1442z00_2179;

					BgL_arg1442z00_2179 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_syncz00_bglt) BgL_nodez00_2129))))->BgL_typez00);
					BgL_test1899z00_2577 =
						(((obj_t) BgL_arg1442z00_2179) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1899z00_2577)
					{	/* Type/typeof.scm 144 */
						return
							BGl_getzd2typezd2zztype_typeofz00(
							(((BgL_syncz00_bglt) COBJECT(
										((BgL_syncz00_bglt) BgL_nodez00_2129)))->BgL_bodyz00),
							CBOOL(BgL_strictz00_2130));
					}
				else
					{	/* Type/typeof.scm 144 */
						return
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_syncz00_bglt) BgL_nodez00_2129))))->BgL_typez00);
					}
			}
		}

	}



/* &get-type-sequence1260 */
	BgL_typez00_bglt BGl_z62getzd2typezd2sequence1260z62zztype_typeofz00(obj_t
		BgL_envz00_2131, obj_t BgL_nodez00_2132, obj_t BgL_strictz00_2133)
	{
		{	/* Type/typeof.scm 132 */
			{	/* Type/typeof.scm 134 */
				bool_t BgL_test1900z00_2590;

				{	/* Type/typeof.scm 134 */
					BgL_typez00_bglt BgL_arg1418z00_2181;

					BgL_arg1418z00_2181 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_sequencez00_bglt) BgL_nodez00_2132))))->BgL_typez00);
					BgL_test1900z00_2590 =
						(((obj_t) BgL_arg1418z00_2181) == BGl_za2_za2z00zztype_cachez00);
				}
				if (BgL_test1900z00_2590)
					{	/* Type/typeof.scm 136 */
						obj_t BgL_arg1394z00_2182;

						BgL_arg1394z00_2182 =
							CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
								(((BgL_sequencez00_bglt) COBJECT(
											((BgL_sequencez00_bglt) BgL_nodez00_2132)))->
									BgL_nodesz00)));
						return BGl_getzd2typezd2zztype_typeofz00(((BgL_nodez00_bglt)
								BgL_arg1394z00_2182), CBOOL(BgL_strictz00_2133));
					}
				else
					{	/* Type/typeof.scm 134 */
						return
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_sequencez00_bglt) BgL_nodez00_2132))))->BgL_typez00);
					}
			}
		}

	}



/* &get-type-var1258 */
	BgL_typez00_bglt BGl_z62getzd2typezd2var1258z62zztype_typeofz00(obj_t
		BgL_envz00_2134, obj_t BgL_nodez00_2135, obj_t BgL_strictz00_2136)
	{
		{	/* Type/typeof.scm 108 */
			{	/* Type/typeof.scm 123 */
				BgL_variablez00_bglt BgL_i1115z00_2184;

				BgL_i1115z00_2184 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_2135)))->BgL_variablez00);
				{	/* Type/typeof.scm 125 */
					bool_t BgL_test1901z00_2608;

					{	/* Type/typeof.scm 125 */
						BgL_typez00_bglt BgL_arg1347z00_2185;

						BgL_arg1347z00_2185 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_varz00_bglt) BgL_nodez00_2135))))->BgL_typez00);
						BgL_test1901z00_2608 =
							(((obj_t) BgL_arg1347z00_2185) == BGl_za2_za2z00zztype_cachez00);
					}
					if (BgL_test1901z00_2608)
						{	/* Type/typeof.scm 125 */
							return
								(((BgL_variablez00_bglt) COBJECT(BgL_i1115z00_2184))->
								BgL_typez00);
						}
					else
						{	/* Type/typeof.scm 126 */
							bool_t BgL_test1902z00_2615;

							{	/* Type/typeof.scm 126 */
								bool_t BgL_test1903z00_2616;

								{	/* Type/typeof.scm 126 */
									BgL_typez00_bglt BgL_arg1346z00_2186;

									BgL_arg1346z00_2186 =
										(((BgL_variablez00_bglt) COBJECT(BgL_i1115z00_2184))->
										BgL_typez00);
									{	/* Type/typeof.scm 126 */
										bool_t BgL_res1786z00_2187;

										BgL_res1786z00_2187 =
											BGl_isazf3zf3zz__objectz00(
											((obj_t) BgL_arg1346z00_2186),
											BGl_tclassz00zzobject_classz00);
										BgL_test1903z00_2616 = BgL_res1786z00_2187;
									}
								}
								if (BgL_test1903z00_2616)
									{	/* Type/typeof.scm 126 */
										BgL_typez00_bglt BgL_arg1344z00_2188;
										BgL_typez00_bglt BgL_arg1345z00_2189;

										BgL_arg1344z00_2188 =
											(((BgL_nodez00_bglt) COBJECT(
													((BgL_nodez00_bglt)
														((BgL_varz00_bglt) BgL_nodez00_2135))))->
											BgL_typez00);
										BgL_arg1345z00_2189 =
											(((BgL_variablez00_bglt) COBJECT(BgL_i1115z00_2184))->
											BgL_typez00);
										BgL_test1902z00_2615 =
											BGl_typezd2subclasszf3z21zzobject_classz00
											(BgL_arg1344z00_2188, BgL_arg1345z00_2189);
									}
								else
									{	/* Type/typeof.scm 126 */
										BgL_test1902z00_2615 = ((bool_t) 0);
									}
							}
							if (BgL_test1902z00_2615)
								{	/* Type/typeof.scm 126 */
									return
										(((BgL_variablez00_bglt) COBJECT(BgL_i1115z00_2184))->
										BgL_typez00);
								}
							else
								{	/* Type/typeof.scm 126 */
									return
										(((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt)
													((BgL_varz00_bglt) BgL_nodez00_2135))))->BgL_typez00);
								}
						}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_typeofz00()
	{
		{	/* Type/typeof.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1799z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1799z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 116865717),
				BSTRING_TO_STRING(BGl_string1799z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 49974950),
				BSTRING_TO_STRING(BGl_string1799z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1799z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1799z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1799z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1799z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1799z00zztype_typeofz00));
			return
				BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1799z00zztype_typeofz00));
		}

	}

#ifdef __cplusplus
}
#endif
