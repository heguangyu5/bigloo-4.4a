/*===========================================================================*/
/*   (Tailc/walk.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tailc/walk.scm) */
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

	typedef struct BgL_funz00_bgl
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
	}             *BgL_funz00_bglt;

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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

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

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_closurez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}                 *BgL_closurez00_bglt;

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

	typedef struct BgL_localzd2tailzd2_bgl
	{
	}                      *BgL_localzd2tailzd2_bglt;


	BGL_EXPORTED_DECL obj_t BGl_tailczd2walkz12zc0zztailc_walkz00(obj_t);
	static obj_t BGl_globalzd2ze3localz12z23zztailc_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zztailc_walkz00();
	static obj_t BGl_tailczd2globalzd2zztailc_walkz00(obj_t);
	static obj_t BGl_z62tailczd2walkz12za2zztailc_walkz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztailc_walkz00();
	static obj_t BGl_localzd2tailzd2zztailc_walkz00 = BUNSPEC;
	extern obj_t BGl_svarz00zzast_varz00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztailc_walkz00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_z62getzd2tailzd2callszd2app1309zb0zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62getzd2tailzd2callszd2closu1303zb0zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_localz00_bglt BGl_z62lambda1490z62zztailc_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62lambda1496z62zztailc_walkz00(obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62lambda1499z62zztailc_walkz00(obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62getzd2tailzd2callszd2seque1305zb0zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62getzd2tailzd2callszd2sync1307zb0zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31498ze3ze5zztailc_walkz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztailc_walkz00 = BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	static obj_t BGl_z62getzd2tailzd2callszd2switc1313zb0zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zztailc_walkz00();
	static obj_t BGl_getzd2tailzd2callsz00zztailc_walkz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztailc_walkz00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	static obj_t BGl_z62getzd2tailzd2calls1300z62zztailc_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern BgL_localz00_bglt BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt,
		BgL_valuez00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2sfunz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sfunz00_bglt);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_z62getzd2tailzd2callszd2condi1311zb0zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztailc_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	static obj_t BGl_z62getzd2tailzd2callszd2letzd2f1315z62zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_z62getzd2tailzd2callszd2letzd2v1317z62zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zztailc_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztailc_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztailc_walkz00();
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	extern obj_t BGl_switchz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_z62getzd2tailzd2callsz62zztailc_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t __cnst[4];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tailczd2walkz12zd2envz12zztailc_walkz00,
		BgL_bgl_za762tailcza7d2walkza71825za7,
		BGl_z62tailczd2walkz12za2zztailc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1802z00zztailc_walkz00,
		BgL_bgl_string1802za700za7za7t1826za7, "get-tail-calls1300", 18);
	      DEFINE_STRING(BGl_string1804z00zztailc_walkz00,
		BgL_bgl_string1804za700za7za7t1827za7, "get-tail-calls", 14);
	      DEFINE_STRING(BGl_string1812z00zztailc_walkz00,
		BgL_bgl_string1812za700za7za7t1828za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string1813z00zztailc_walkz00,
		BgL_bgl_string1813za700za7za7t1829za7, "tailc_walk", 10);
	      DEFINE_STRING(BGl_string1814z00zztailc_walkz00,
		BgL_bgl_string1814za700za7za7t1830za7,
		"_ tailc_walk local-tail pass-started ", 37);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
		BgL_bgl_za762getza7d2tailza7d21831za7,
		BGl_z62getzd2tailzd2callsz62zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1797z00zztailc_walkz00,
		BgL_bgl_za762lambda1499za7621832z00, BGl_z62lambda1499z62zztailc_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1798z00zztailc_walkz00,
		BgL_bgl_za762za7c3za704anonymo1833za7,
		BGl_z62zc3z04anonymousza31498ze3ze5zztailc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1799z00zztailc_walkz00,
		BgL_bgl_za762lambda1496za7621834z00, BGl_z62lambda1496z62zztailc_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1800z00zztailc_walkz00,
		BgL_bgl_za762lambda1490za7621835z00, BGl_z62lambda1490z62zztailc_walkz00,
		0L, BUNSPEC, 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1801z00zztailc_walkz00,
		BgL_bgl_za762getza7d2tailza7d21836za7,
		BGl_z62getzd2tailzd2calls1300z62zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1803z00zztailc_walkz00,
		BgL_bgl_za762getza7d2tailza7d21837za7,
		BGl_z62getzd2tailzd2callszd2closu1303zb0zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1805z00zztailc_walkz00,
		BgL_bgl_za762getza7d2tailza7d21838za7,
		BGl_z62getzd2tailzd2callszd2seque1305zb0zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1806z00zztailc_walkz00,
		BgL_bgl_za762getza7d2tailza7d21839za7,
		BGl_z62getzd2tailzd2callszd2sync1307zb0zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1807z00zztailc_walkz00,
		BgL_bgl_za762getza7d2tailza7d21840za7,
		BGl_z62getzd2tailzd2callszd2app1309zb0zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1808z00zztailc_walkz00,
		BgL_bgl_za762getza7d2tailza7d21841za7,
		BGl_z62getzd2tailzd2callszd2condi1311zb0zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1809z00zztailc_walkz00,
		BgL_bgl_za762getza7d2tailza7d21842za7,
		BGl_z62getzd2tailzd2callszd2switc1313zb0zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1810z00zztailc_walkz00,
		BgL_bgl_za762getza7d2tailza7d21843za7,
		BGl_z62getzd2tailzd2callszd2letzd2f1315z62zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1811z00zztailc_walkz00,
		BgL_bgl_za762getza7d2tailza7d21844za7,
		BGl_z62getzd2tailzd2callszd2letzd2v1317z62zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1791z00zztailc_walkz00,
		BgL_bgl_string1791za700za7za7t1845za7, "Tailc", 5);
	      DEFINE_STRING(BGl_string1792z00zztailc_walkz00,
		BgL_bgl_string1792za700za7za7t1846za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1793z00zztailc_walkz00,
		BgL_bgl_string1793za700za7za7t1847za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1794z00zztailc_walkz00,
		BgL_bgl_string1794za700za7za7t1848za7, " self tail call(s)", 18);
	      DEFINE_STRING(BGl_string1795z00zztailc_walkz00,
		BgL_bgl_string1795za700za7za7t1849za7, ": ", 2);
	      DEFINE_STRING(BGl_string1796z00zztailc_walkz00,
		BgL_bgl_string1796za700za7za7t1850za7, "        ", 8);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_localzd2tailzd2zztailc_walkz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztailc_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztailc_walkz00(long
		BgL_checksumz00_2152, char *BgL_fromz00_2153)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztailc_walkz00))
				{
					BGl_requirezd2initializa7ationz75zztailc_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztailc_walkz00();
					BGl_libraryzd2moduleszd2initz00zztailc_walkz00();
					BGl_cnstzd2initzd2zztailc_walkz00();
					BGl_importedzd2moduleszd2initz00zztailc_walkz00();
					BGl_objectzd2initzd2zztailc_walkz00();
					BGl_genericzd2initzd2zztailc_walkz00();
					BGl_methodzd2initzd2zztailc_walkz00();
					return BGl_toplevelzd2initzd2zztailc_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztailc_walkz00()
	{
		{	/* Tailc/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "tailc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tailc_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tailc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tailc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tailc_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "tailc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"tailc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tailc_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztailc_walkz00()
	{
		{	/* Tailc/walk.scm 15 */
			{	/* Tailc/walk.scm 15 */
				obj_t BgL_cportz00_2071;

				{	/* Tailc/walk.scm 15 */
					obj_t BgL_stringz00_2079;

					BgL_stringz00_2079 = BGl_string1814z00zztailc_walkz00;
					{	/* Tailc/walk.scm 15 */
						obj_t BgL_startz00_2080;

						BgL_startz00_2080 = BINT(((long) 0));
						{	/* Tailc/walk.scm 15 */
							obj_t BgL_endz00_2081;

							BgL_endz00_2081 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2079)));
							{	/* Tailc/walk.scm 15 */

								BgL_cportz00_2071 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2079, BgL_startz00_2080, BgL_endz00_2081);
				}}}}
				{
					long BgL_iz00_2072;

					BgL_iz00_2072 = ((long) 3);
				BgL_loopz00_2073:
					if ((BgL_iz00_2072 == ((long) -1)))
						{	/* Tailc/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tailc/walk.scm 15 */
							{	/* Tailc/walk.scm 15 */
								obj_t BgL_arg1820z00_2075;

								{	/* Tailc/walk.scm 15 */

									{	/* Tailc/walk.scm 15 */
										obj_t BgL_locationz00_2077;

										BgL_locationz00_2077 = BBOOL(((bool_t) 0));
										{	/* Tailc/walk.scm 15 */

											BgL_arg1820z00_2075 =
												BGl_readz00zz__readerz00(BgL_cportz00_2071,
												BgL_locationz00_2077);
										}
									}
								}
								{	/* Tailc/walk.scm 15 */
									int BgL_tmpz00_2182;

									BgL_tmpz00_2182 = (int) (BgL_iz00_2072);
									CNST_TABLE_SET(BgL_tmpz00_2182, BgL_arg1820z00_2075);
							}}
							{	/* Tailc/walk.scm 15 */
								int BgL_auxz00_2078;

								BgL_auxz00_2078 = (int) ((BgL_iz00_2072 - ((long) 1)));
								{
									long BgL_iz00_2187;

									BgL_iz00_2187 = (long) (BgL_auxz00_2078);
									BgL_iz00_2072 = BgL_iz00_2187;
									goto BgL_loopz00_2073;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztailc_walkz00()
	{
		{	/* Tailc/walk.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztailc_walkz00()
	{
		{	/* Tailc/walk.scm 15 */
			return BUNSPEC;
		}

	}



/* tailc-walk! */
	BGL_EXPORTED_DEF obj_t BGl_tailczd2walkz12zc0zztailc_walkz00(obj_t
		BgL_globalsz00_48)
	{
		{	/* Tailc/walk.scm 32 */
			{	/* Tailc/walk.scm 33 */
				obj_t BgL_list1326z00_1406;

				{	/* Tailc/walk.scm 33 */
					obj_t BgL_arg1327z00_1407;

					{	/* Tailc/walk.scm 33 */
						obj_t BgL_arg1328z00_1408;

						BgL_arg1328z00_1408 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1327z00_1407 =
							MAKE_YOUNG_PAIR(BGl_string1791z00zztailc_walkz00,
							BgL_arg1328z00_1408);
					}
					BgL_list1326z00_1406 =
						MAKE_YOUNG_PAIR(BGl_string1792z00zztailc_walkz00,
						BgL_arg1327z00_1407);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1326z00_1406);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1791z00zztailc_walkz00;
			{	/* Tailc/walk.scm 33 */
				obj_t BgL_g1126z00_1409;

				BgL_g1126z00_1409 = BNIL;
				{
					obj_t BgL_hooksz00_1412;
					obj_t BgL_hnamesz00_1413;

					BgL_hooksz00_1412 = BgL_g1126z00_1409;
					BgL_hnamesz00_1413 = BNIL;
				BgL_zc3z04anonymousza31329ze3z87_1414:
					if (NULLP(BgL_hooksz00_1412))
						{	/* Tailc/walk.scm 33 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Tailc/walk.scm 33 */
							bool_t BgL_test1854z00_2200;

							{	/* Tailc/walk.scm 33 */
								obj_t BgL_fun1338z00_1421;

								BgL_fun1338z00_1421 = CAR(((obj_t) BgL_hooksz00_1412));
								BgL_test1854z00_2200 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1338z00_1421)
									(BgL_fun1338z00_1421, BEOA));
							}
							if (BgL_test1854z00_2200)
								{	/* Tailc/walk.scm 33 */
									obj_t BgL_arg1334z00_1418;
									obj_t BgL_arg1335z00_1419;

									BgL_arg1334z00_1418 = CDR(((obj_t) BgL_hooksz00_1412));
									BgL_arg1335z00_1419 = CDR(((obj_t) BgL_hnamesz00_1413));
									{
										obj_t BgL_hnamesz00_2212;
										obj_t BgL_hooksz00_2211;

										BgL_hooksz00_2211 = BgL_arg1334z00_1418;
										BgL_hnamesz00_2212 = BgL_arg1335z00_1419;
										BgL_hnamesz00_1413 = BgL_hnamesz00_2212;
										BgL_hooksz00_1412 = BgL_hooksz00_2211;
										goto BgL_zc3z04anonymousza31329ze3z87_1414;
									}
								}
							else
								{	/* Tailc/walk.scm 33 */
									obj_t BgL_arg1337z00_1420;

									BgL_arg1337z00_1420 = CAR(((obj_t) BgL_hnamesz00_1413));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1791z00zztailc_walkz00,
										BGl_string1793z00zztailc_walkz00, BgL_arg1337z00_1420);
								}
						}
				}
			}
			{
				obj_t BgL_l1284z00_1425;

				BgL_l1284z00_1425 = BgL_globalsz00_48;
			BgL_zc3z04anonymousza31340ze3z87_1426:
				if (PAIRP(BgL_l1284z00_1425))
					{	/* Tailc/walk.scm 34 */
						BGl_tailczd2globalzd2zztailc_walkz00(CAR(BgL_l1284z00_1425));
						{
							obj_t BgL_l1284z00_2220;

							BgL_l1284z00_2220 = CDR(BgL_l1284z00_1425);
							BgL_l1284z00_1425 = BgL_l1284z00_2220;
							goto BgL_zc3z04anonymousza31340ze3z87_1426;
						}
					}
				else
					{	/* Tailc/walk.scm 34 */
						((bool_t) 1);
					}
			}
			return BgL_globalsz00_48;
		}

	}



/* &tailc-walk! */
	obj_t BGl_z62tailczd2walkz12za2zztailc_walkz00(obj_t BgL_envz00_1998,
		obj_t BgL_globalsz00_1999)
	{
		{	/* Tailc/walk.scm 32 */
			return BGl_tailczd2walkz12zc0zztailc_walkz00(BgL_globalsz00_1999);
		}

	}



/* tailc-global */
	obj_t BGl_tailczd2globalzd2zztailc_walkz00(obj_t BgL_globalz00_49)
	{
		{	/* Tailc/walk.scm 40 */
			{	/* Tailc/walk.scm 41 */
				obj_t BgL_arg1346z00_1431;

				BgL_arg1346z00_1431 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_globalz00_49))))->BgL_idz00);
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1346z00_1431);
			}
			{	/* Tailc/walk.scm 42 */
				obj_t BgL_callsz00_1432;

				{	/* Tailc/walk.scm 42 */
					obj_t BgL_arg1367z00_1442;

					BgL_arg1367z00_1442 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_globalz00_bglt) BgL_globalz00_49))))->
										BgL_valuez00))))->BgL_bodyz00);
					BgL_callsz00_1432 =
						BGl_getzd2tailzd2callsz00zztailc_walkz00(((BgL_nodez00_bglt)
							BgL_arg1367z00_1442), ((BgL_variablez00_bglt) BgL_globalz00_49),
						BNIL);
				}
				if (NULLP(BgL_callsz00_1432))
					{	/* Tailc/walk.scm 43 */
						BFALSE;
					}
				else
					{	/* Tailc/walk.scm 43 */
						{	/* Tailc/walk.scm 44 */
							obj_t BgL_arg1351z00_1434;
							long BgL_arg1352z00_1435;

							BgL_arg1351z00_1434 =
								BGl_shapez00zztools_shapez00(BgL_globalz00_49);
							BgL_arg1352z00_1435 = bgl_list_length(BgL_callsz00_1432);
							{	/* Tailc/walk.scm 44 */
								obj_t BgL_list1353z00_1436;

								{	/* Tailc/walk.scm 44 */
									obj_t BgL_arg1357z00_1437;

									{	/* Tailc/walk.scm 44 */
										obj_t BgL_arg1360z00_1438;

										{	/* Tailc/walk.scm 44 */
											obj_t BgL_arg1361z00_1439;

											{	/* Tailc/walk.scm 44 */
												obj_t BgL_arg1363z00_1440;

												{	/* Tailc/walk.scm 44 */
													obj_t BgL_arg1364z00_1441;

													BgL_arg1364z00_1441 =
														MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
													BgL_arg1363z00_1440 =
														MAKE_YOUNG_PAIR(BGl_string1794z00zztailc_walkz00,
														BgL_arg1364z00_1441);
												}
												BgL_arg1361z00_1439 =
													MAKE_YOUNG_PAIR(BINT(BgL_arg1352z00_1435),
													BgL_arg1363z00_1440);
											}
											BgL_arg1360z00_1438 =
												MAKE_YOUNG_PAIR(BGl_string1795z00zztailc_walkz00,
												BgL_arg1361z00_1439);
										}
										BgL_arg1357z00_1437 =
											MAKE_YOUNG_PAIR(BgL_arg1351z00_1434, BgL_arg1360z00_1438);
									}
									BgL_list1353z00_1436 =
										MAKE_YOUNG_PAIR(BGl_string1796z00zztailc_walkz00,
										BgL_arg1357z00_1437);
								}
								BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
									BgL_list1353z00_1436);
						}}
						BGl_globalzd2ze3localz12z23zztailc_walkz00(BgL_globalz00_49,
							BgL_callsz00_1432);
			}}
			return BGl_leavezd2functionzd2zztools_errorz00();
		}

	}



/* global->local! */
	obj_t BGl_globalzd2ze3localz12z23zztailc_walkz00(obj_t BgL_globalz00_50,
		obj_t BgL_callsz00_51)
	{
		{	/* Tailc/walk.scm 52 */
			{	/* Tailc/walk.scm 53 */
				BgL_valuez00_bglt BgL_gfunz00_1444;

				BgL_gfunz00_1444 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_globalz00_50))))->BgL_valuez00);
				{	/* Tailc/walk.scm 53 */
					BgL_typez00_bglt BgL_gtypez00_1445;

					BgL_gtypez00_1445 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_globalz00_50))))->BgL_typez00);
					{	/* Tailc/walk.scm 54 */
						obj_t BgL_lbodyz00_1446;

						BgL_lbodyz00_1446 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_gfunz00_1444)))->BgL_bodyz00);
						{	/* Tailc/walk.scm 55 */
							obj_t BgL_largsz00_1447;

							BgL_largsz00_1447 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt) BgL_gfunz00_1444)))->BgL_argsz00);
							{	/* Tailc/walk.scm 56 */
								obj_t BgL_gargsz00_1448;

								if (NULLP(BgL_largsz00_1447))
									{	/* Tailc/walk.scm 57 */
										BgL_gargsz00_1448 = BNIL;
									}
								else
									{	/* Tailc/walk.scm 57 */
										obj_t BgL_head1288z00_1509;

										{	/* Tailc/walk.scm 57 */
											obj_t BgL_res1753z00_1841;

											BgL_res1753z00_1841 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1288z00_1509 = BgL_res1753z00_1841;
										}
										{
											obj_t BgL_l1286z00_1511;
											obj_t BgL_tail1289z00_1512;

											BgL_l1286z00_1511 = BgL_largsz00_1447;
											BgL_tail1289z00_1512 = BgL_head1288z00_1509;
										BgL_zc3z04anonymousza31443ze3z87_1513:
											if (NULLP(BgL_l1286z00_1511))
												{	/* Tailc/walk.scm 57 */
													BgL_gargsz00_1448 = CDR(BgL_head1288z00_1509);
												}
											else
												{	/* Tailc/walk.scm 57 */
													obj_t BgL_newtail1290z00_1515;

													{	/* Tailc/walk.scm 57 */
														BgL_localz00_bglt BgL_arg1449z00_1517;

														{	/* Tailc/walk.scm 57 */
															obj_t BgL_oldz00_1518;

															BgL_oldz00_1518 =
																CAR(((obj_t) BgL_l1286z00_1511));
															{	/* Tailc/walk.scm 59 */
																BgL_svarz00_bglt BgL_arg1461z00_1519;

																{	/* Tailc/walk.scm 59 */
																	BgL_svarz00_bglt BgL_duplicated1130z00_1520;
																	BgL_svarz00_bglt BgL_new1128z00_1521;

																	BgL_duplicated1130z00_1520 =
																		((BgL_svarz00_bglt)
																		(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_oldz00_1518))))->
																			BgL_valuez00));
																	{	/* Tailc/walk.scm 59 */
																		BgL_svarz00_bglt BgL_new1131z00_1522;

																		BgL_new1131z00_1522 =
																			((BgL_svarz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_svarz00_bgl))));
																		{	/* Tailc/walk.scm 59 */
																			long BgL_arg1462z00_1523;

																			{	/* Tailc/walk.scm 59 */
																				long BgL_res1755z00_1847;

																				BgL_res1755z00_1847 =
																					BGL_CLASS_INDEX
																					(BGl_svarz00zzast_varz00);
																				BgL_arg1462z00_1523 =
																					BgL_res1755z00_1847;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1131z00_1522),
																				BgL_arg1462z00_1523);
																		}
																		{	/* Tailc/walk.scm 59 */
																			BgL_objectz00_bglt BgL_tmpz00_2277;

																			BgL_tmpz00_2277 =
																				((BgL_objectz00_bglt)
																				BgL_new1131z00_1522);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2277,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1131z00_1522);
																		BgL_new1128z00_1521 = BgL_new1131z00_1522;
																	}
																	((((BgL_svarz00_bglt)
																				COBJECT(BgL_new1128z00_1521))->
																			BgL_locz00) =
																		((obj_t) (((BgL_svarz00_bglt)
																					COBJECT(BgL_duplicated1130z00_1520))->
																				BgL_locz00)), BUNSPEC);
																	BgL_arg1461z00_1519 = BgL_new1128z00_1521;
																}
																BgL_arg1449z00_1517 =
																	BGl_clonezd2localzd2zzast_localz00(
																	((BgL_localz00_bglt) BgL_oldz00_1518),
																	((BgL_valuez00_bglt) BgL_arg1461z00_1519));
														}}
														{	/* Tailc/walk.scm 57 */
															obj_t BgL_res1756z00_1851;

															BgL_res1756z00_1851 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_arg1449z00_1517), BNIL);
															BgL_newtail1290z00_1515 = BgL_res1756z00_1851;
													}}
													SET_CDR(BgL_tail1289z00_1512,
														BgL_newtail1290z00_1515);
													{	/* Tailc/walk.scm 57 */
														obj_t BgL_arg1448z00_1516;

														BgL_arg1448z00_1516 =
															CDR(((obj_t) BgL_l1286z00_1511));
														{
															obj_t BgL_tail1289z00_2292;
															obj_t BgL_l1286z00_2291;

															BgL_l1286z00_2291 = BgL_arg1448z00_1516;
															BgL_tail1289z00_2292 = BgL_newtail1290z00_1515;
															BgL_tail1289z00_1512 = BgL_tail1289z00_2292;
															BgL_l1286z00_1511 = BgL_l1286z00_2291;
															goto BgL_zc3z04anonymousza31443ze3z87_1513;
														}
													}
												}
										}
									}
								{	/* Tailc/walk.scm 57 */
									BgL_sfunz00_bglt BgL_lfunz00_1449;

									{	/* Tailc/walk.scm 62 */
										BgL_sfunz00_bglt BgL_new1133z00_1494;

										{	/* Tailc/walk.scm 63 */
											BgL_sfunz00_bglt BgL_new1146z00_1505;

											BgL_new1146z00_1505 =
												((BgL_sfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_sfunz00_bgl))));
											{	/* Tailc/walk.scm 63 */
												long BgL_arg1441z00_1506;

												{	/* Tailc/walk.scm 63 */
													long BgL_res1757z00_1855;

													BgL_res1757z00_1855 =
														BGL_CLASS_INDEX(BGl_sfunz00zzast_varz00);
													BgL_arg1441z00_1506 = BgL_res1757z00_1855;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1146z00_1505),
													BgL_arg1441z00_1506);
											}
											{	/* Tailc/walk.scm 63 */
												BgL_objectz00_bglt BgL_tmpz00_2297;

												BgL_tmpz00_2297 =
													((BgL_objectz00_bglt) BgL_new1146z00_1505);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2297, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1146z00_1505);
											BgL_new1133z00_1494 = BgL_new1146z00_1505;
										}
										((((BgL_funz00_bglt) COBJECT(
														((BgL_funz00_bglt) BgL_new1133z00_1494)))->
												BgL_arityz00) =
											((long) (((BgL_funz00_bglt)
														COBJECT(((BgL_funz00_bglt) ((BgL_sfunz00_bglt)
																	BgL_gfunz00_1444))))->BgL_arityz00)),
											BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1494)))->BgL_sidezd2effectzd2) =
											((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																BgL_gfunz00_1444)))->BgL_sidezd2effectzd2)),
											BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1494)))->BgL_predicatezd2ofzd2) =
											((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																BgL_gfunz00_1444)))->BgL_predicatezd2ofzd2)),
											BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1494)))->
												BgL_stackzd2allocatorzd2) =
											((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																BgL_gfunz00_1444)))->BgL_stackzd2allocatorzd2)),
											BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1494)))->BgL_topzf3zf3) =
											((bool_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																BgL_gfunz00_1444)))->BgL_topzf3zf3)), BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1494)))->BgL_thezd2closurezd2) =
											((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																BgL_gfunz00_1444)))->BgL_thezd2closurezd2)),
											BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1494)))->BgL_effectz00) =
											((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																BgL_gfunz00_1444)))->BgL_effectz00)), BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1494)))->BgL_failsafez00) =
											((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																BgL_gfunz00_1444)))->BgL_failsafez00)),
											BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1494)))->BgL_argszd2noescapezd2) =
											((obj_t) (((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																BgL_gfunz00_1444)))->BgL_argszd2noescapezd2)),
											BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_propertyz00) =
											((obj_t) (((BgL_sfunz00_bglt)
														COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																	BgL_gfunz00_1444))))->BgL_propertyz00)),
											BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_argsz00) = ((obj_t) BgL_largsz00_1447), BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_argszd2namezd2) =
											((obj_t) (((BgL_sfunz00_bglt)
														COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																	BgL_gfunz00_1444))))->BgL_argszd2namezd2)),
											BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_bodyz00) = ((obj_t) BgL_lbodyz00_1446), BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_classz00) =
											((obj_t) (((BgL_sfunz00_bglt)
														COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																	BgL_gfunz00_1444))))->BgL_classz00)),
											BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_dssslzd2keywordszd2) =
											((obj_t) (((BgL_sfunz00_bglt)
														COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																	BgL_gfunz00_1444))))->
													BgL_dssslzd2keywordszd2)), BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_locz00) =
											((obj_t) (((BgL_sfunz00_bglt)
														COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																	BgL_gfunz00_1444))))->BgL_locz00)), BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_optionalsz00) =
											((obj_t) (((BgL_sfunz00_bglt)
														COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																	BgL_gfunz00_1444))))->BgL_optionalsz00)),
											BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_keysz00) =
											((obj_t) (((BgL_sfunz00_bglt)
														COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																	BgL_gfunz00_1444))))->BgL_keysz00)), BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_thezd2closurezd2globalz00) =
											((obj_t) (((BgL_sfunz00_bglt)
														COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																	BgL_gfunz00_1444))))->
													BgL_thezd2closurezd2globalz00)), BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_strengthz00) =
											((obj_t) (((BgL_sfunz00_bglt)
														COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																	BgL_gfunz00_1444))))->BgL_strengthz00)),
											BUNSPEC);
										((((BgL_sfunz00_bglt) COBJECT(BgL_new1133z00_1494))->
												BgL_stackablez00) =
											((obj_t) (((BgL_sfunz00_bglt)
														COBJECT(((BgL_sfunz00_bglt) ((BgL_funz00_bglt)
																	BgL_gfunz00_1444))))->BgL_stackablez00)),
											BUNSPEC);
										BgL_lfunz00_1449 = BgL_new1133z00_1494;
									}
									{	/* Tailc/walk.scm 62 */
										BgL_localz00_bglt BgL_localz00_1450;

										{	/* Tailc/walk.scm 66 */
											obj_t BgL_arg1422z00_1492;

											BgL_arg1422z00_1492 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_globalz00_50))))->
												BgL_idz00);
											BgL_localz00_1450 =
												BGl_makezd2localzd2sfunz00zzast_localz00
												(BgL_arg1422z00_1492, BgL_gtypez00_1445,
												BgL_lfunz00_1449);
										}
										{	/* Tailc/walk.scm 66 */
											obj_t BgL_locz00_1451;

											BgL_locz00_1451 =
												(((BgL_nodez00_bglt) COBJECT(
														((BgL_nodez00_bglt) BgL_lbodyz00_1446)))->
												BgL_locz00);
											{	/* Tailc/walk.scm 67 */
												BgL_letzd2funzd2_bglt BgL_gbodyz00_1452;

												{	/* Tailc/walk.scm 68 */
													BgL_letzd2funzd2_bglt BgL_new1148z00_1466;

													{	/* Tailc/walk.scm 69 */
														BgL_letzd2funzd2_bglt BgL_new1147z00_1490;

														BgL_new1147z00_1490 =
															((BgL_letzd2funzd2_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_letzd2funzd2_bgl))));
														{	/* Tailc/walk.scm 69 */
															long BgL_arg1421z00_1491;

															{	/* Tailc/walk.scm 69 */
																long BgL_res1758z00_1863;

																BgL_res1758z00_1863 =
																	BGL_CLASS_INDEX
																	(BGl_letzd2funzd2zzast_nodez00);
																BgL_arg1421z00_1491 = BgL_res1758z00_1863;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1147z00_1490),
																BgL_arg1421z00_1491);
														}
														{	/* Tailc/walk.scm 69 */
															BgL_objectz00_bglt BgL_tmpz00_2390;

															BgL_tmpz00_2390 =
																((BgL_objectz00_bglt) BgL_new1147z00_1490);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2390, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1147z00_1490);
														BgL_new1148z00_1466 = BgL_new1147z00_1490;
													}
													((((BgL_nodez00_bglt) COBJECT(
																	((BgL_nodez00_bglt) BgL_new1148z00_1466)))->
															BgL_locz00) = ((obj_t) BgL_locz00_1451), BUNSPEC);
													((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																		BgL_new1148z00_1466)))->BgL_typez00) =
														((BgL_typez00_bglt) BgL_gtypez00_1445), BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1148z00_1466)))->
															BgL_sidezd2effectzd2) =
														((obj_t) BUNSPEC), BUNSPEC);
													((((BgL_nodezf2effectzf2_bglt)
																COBJECT(((BgL_nodezf2effectzf2_bglt)
																		BgL_new1148z00_1466)))->BgL_keyz00) =
														((obj_t) BINT(((long) -1))), BUNSPEC);
													{
														obj_t BgL_auxz00_2403;

														{	/* Tailc/walk.scm 71 */
															obj_t BgL_list1383z00_1467;

															BgL_list1383z00_1467 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_localz00_1450), BNIL);
															BgL_auxz00_2403 = BgL_list1383z00_1467;
														}
														((((BgL_letzd2funzd2_bglt)
																	COBJECT(BgL_new1148z00_1466))->
																BgL_localsz00) =
															((obj_t) BgL_auxz00_2403), BUNSPEC);
													}
													{
														BgL_nodez00_bglt BgL_auxz00_2407;

														{	/* Tailc/walk.scm 72 */
															BgL_appz00_bglt BgL_new1150z00_1468;

															{	/* Tailc/walk.scm 73 */
																BgL_appz00_bglt BgL_new1149z00_1488;

																BgL_new1149z00_1488 =
																	((BgL_appz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_appz00_bgl))));
																{	/* Tailc/walk.scm 73 */
																	long BgL_arg1418z00_1489;

																	{	/* Tailc/walk.scm 73 */
																		long BgL_res1760z00_1869;

																		{	/* Tailc/walk.scm 73 */
																			obj_t BgL_classz00_1868;

																			BgL_classz00_1868 =
																				BGl_appz00zzast_nodez00;
																			BgL_res1760z00_1869 =
																				BGL_CLASS_INDEX(BgL_classz00_1868);
																		}
																		BgL_arg1418z00_1489 = BgL_res1760z00_1869;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1149z00_1488),
																		BgL_arg1418z00_1489);
																}
																{	/* Tailc/walk.scm 73 */
																	BgL_objectz00_bglt BgL_tmpz00_2412;

																	BgL_tmpz00_2412 =
																		((BgL_objectz00_bglt) BgL_new1149z00_1488);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2412,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1149z00_1488);
																BgL_new1150z00_1468 = BgL_new1149z00_1488;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1150z00_1468)))->BgL_locz00) =
																((obj_t) BgL_locz00_1451), BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1150z00_1468)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_gtypez00_1445),
																BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1150z00_1468)))->
																	BgL_sidezd2effectzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1150z00_1468)))->BgL_keyz00) =
																((obj_t) BINT(((long) -1))), BUNSPEC);
															{
																BgL_varz00_bglt BgL_auxz00_2425;

																{	/* Tailc/walk.scm 75 */
																	BgL_varz00_bglt BgL_new1152z00_1469;

																	{	/* Tailc/walk.scm 76 */
																		BgL_varz00_bglt BgL_new1151z00_1470;

																		BgL_new1151z00_1470 =
																			((BgL_varz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_varz00_bgl))));
																		{	/* Tailc/walk.scm 76 */
																			long BgL_arg1384z00_1471;

																			{	/* Tailc/walk.scm 76 */
																				long BgL_res1761z00_1874;

																				{	/* Tailc/walk.scm 76 */
																					obj_t BgL_classz00_1873;

																					BgL_classz00_1873 =
																						BGl_varz00zzast_nodez00;
																					BgL_res1761z00_1874 =
																						BGL_CLASS_INDEX(BgL_classz00_1873);
																				}
																				BgL_arg1384z00_1471 =
																					BgL_res1761z00_1874;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1151z00_1470),
																				BgL_arg1384z00_1471);
																		}
																		BgL_new1152z00_1469 = BgL_new1151z00_1470;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1152z00_1469)))->
																			BgL_locz00) =
																		((obj_t) BgL_locz00_1451), BUNSPEC);
																	((((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_new1152z00_1469)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_gtypez00_1445),
																		BUNSPEC);
																	((((BgL_varz00_bglt)
																				COBJECT(BgL_new1152z00_1469))->
																			BgL_variablez00) =
																		((BgL_variablez00_bglt) (
																				(BgL_variablez00_bglt)
																				BgL_localz00_1450)), BUNSPEC);
																	BgL_auxz00_2425 = BgL_new1152z00_1469;
																}
																((((BgL_appz00_bglt)
																			COBJECT(BgL_new1150z00_1468))->
																		BgL_funz00) =
																	((BgL_varz00_bglt) BgL_auxz00_2425), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_2437;

																if (NULLP(BgL_gargsz00_1448))
																	{	/* Tailc/walk.scm 79 */
																		BgL_auxz00_2437 = BNIL;
																	}
																else
																	{	/* Tailc/walk.scm 79 */
																		obj_t BgL_head1293z00_1474;

																		{	/* Tailc/walk.scm 79 */
																			obj_t BgL_res1763z00_1878;

																			BgL_res1763z00_1878 =
																				MAKE_YOUNG_PAIR(BNIL, BNIL);
																			BgL_head1293z00_1474 =
																				BgL_res1763z00_1878;
																		}
																		{
																			obj_t BgL_l1291z00_1476;
																			obj_t BgL_tail1294z00_1477;

																			BgL_l1291z00_1476 = BgL_gargsz00_1448;
																			BgL_tail1294z00_1477 =
																				BgL_head1293z00_1474;
																		BgL_zc3z04anonymousza31390ze3z87_1478:
																			if (NULLP(BgL_l1291z00_1476))
																				{	/* Tailc/walk.scm 79 */
																					BgL_auxz00_2437 =
																						CDR(BgL_head1293z00_1474);
																				}
																			else
																				{	/* Tailc/walk.scm 79 */
																					obj_t BgL_newtail1295z00_1480;

																					{	/* Tailc/walk.scm 79 */
																						BgL_varz00_bglt BgL_arg1396z00_1482;

																						{	/* Tailc/walk.scm 79 */
																							obj_t BgL_vz00_1483;

																							BgL_vz00_1483 =
																								CAR(
																								((obj_t) BgL_l1291z00_1476));
																							{	/* Tailc/walk.scm 80 */
																								BgL_varz00_bglt
																									BgL_new1154z00_1484;
																								{	/* Tailc/walk.scm 83 */
																									BgL_varz00_bglt
																										BgL_new1153z00_1485;
																									BgL_new1153z00_1485 =
																										((BgL_varz00_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_varz00_bgl))));
																									{	/* Tailc/walk.scm 83 */
																										long BgL_arg1417z00_1486;

																										{	/* Tailc/walk.scm 83 */
																											long BgL_res1765z00_1883;

																											{	/* Tailc/walk.scm 83 */
																												obj_t BgL_classz00_1882;

																												BgL_classz00_1882 =
																													BGl_varz00zzast_nodez00;
																												BgL_res1765z00_1883 =
																													BGL_CLASS_INDEX
																													(BgL_classz00_1882);
																											}
																											BgL_arg1417z00_1486 =
																												BgL_res1765z00_1883;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1153z00_1485),
																											BgL_arg1417z00_1486);
																									}
																									BgL_new1154z00_1484 =
																										BgL_new1153z00_1485;
																								}
																								((((BgL_nodez00_bglt) COBJECT(
																												((BgL_nodez00_bglt)
																													BgL_new1154z00_1484)))->
																										BgL_locz00) =
																									((obj_t) BgL_locz00_1451),
																									BUNSPEC);
																								((((BgL_nodez00_bglt)
																											COBJECT((
																													(BgL_nodez00_bglt)
																													BgL_new1154z00_1484)))->
																										BgL_typez00) =
																									((BgL_typez00_bglt) ((
																												(BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														((BgL_localz00_bglt)
																															BgL_vz00_1483))))->
																											BgL_typez00)), BUNSPEC);
																								((((BgL_varz00_bglt)
																											COBJECT
																											(BgL_new1154z00_1484))->
																										BgL_variablez00) =
																									((BgL_variablez00_bglt) (
																											(BgL_variablez00_bglt)
																											BgL_vz00_1483)), BUNSPEC);
																								BgL_arg1396z00_1482 =
																									BgL_new1154z00_1484;
																						}}
																						{	/* Tailc/walk.scm 79 */
																							obj_t BgL_res1766z00_1887;

																							BgL_res1766z00_1887 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_arg1396z00_1482),
																								BNIL);
																							BgL_newtail1295z00_1480 =
																								BgL_res1766z00_1887;
																					}}
																					SET_CDR(BgL_tail1294z00_1477,
																						BgL_newtail1295z00_1480);
																					{	/* Tailc/walk.scm 79 */
																						obj_t BgL_arg1394z00_1481;

																						BgL_arg1394z00_1481 =
																							CDR(((obj_t) BgL_l1291z00_1476));
																						{
																							obj_t BgL_tail1294z00_2465;
																							obj_t BgL_l1291z00_2464;

																							BgL_l1291z00_2464 =
																								BgL_arg1394z00_1481;
																							BgL_tail1294z00_2465 =
																								BgL_newtail1295z00_1480;
																							BgL_tail1294z00_1477 =
																								BgL_tail1294z00_2465;
																							BgL_l1291z00_1476 =
																								BgL_l1291z00_2464;
																							goto
																								BgL_zc3z04anonymousza31390ze3z87_1478;
																						}
																					}
																				}
																		}
																	}
																((((BgL_appz00_bglt)
																			COBJECT(BgL_new1150z00_1468))->
																		BgL_argsz00) =
																	((obj_t) BgL_auxz00_2437), BUNSPEC);
															}
															((((BgL_appz00_bglt)
																		COBJECT(BgL_new1150z00_1468))->
																	BgL_stackablez00) =
																((obj_t) BFALSE), BUNSPEC);
															BgL_auxz00_2407 =
																((BgL_nodez00_bglt) BgL_new1150z00_1468);
														}
														((((BgL_letzd2funzd2_bglt)
																	COBJECT(BgL_new1148z00_1466))->BgL_bodyz00) =
															((BgL_nodez00_bglt) BgL_auxz00_2407), BUNSPEC);
													}
													BgL_gbodyz00_1452 = BgL_new1148z00_1466;
												}
												{	/* Tailc/walk.scm 68 */

													((((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt) BgL_gfunz00_1444)))->
															BgL_argsz00) =
														((obj_t) BgL_gargsz00_1448), BUNSPEC);
													((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt)
																		BgL_gfunz00_1444)))->BgL_bodyz00) =
														((obj_t) ((obj_t) BgL_gbodyz00_1452)), BUNSPEC);
													{
														obj_t BgL_l1296z00_1454;

														BgL_l1296z00_1454 = BgL_callsz00_51;
													BgL_zc3z04anonymousza31371ze3z87_1455:
														if (PAIRP(BgL_l1296z00_1454))
															{	/* Tailc/walk.scm 89 */
																{	/* Tailc/walk.scm 90 */
																	obj_t BgL_callz00_1457;

																	BgL_callz00_1457 = CAR(BgL_l1296z00_1454);
																	{	/* Tailc/walk.scm 90 */
																		obj_t BgL_locz00_1458;

																		BgL_locz00_1458 =
																			(((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_callz00_1457)))->BgL_locz00);
																		{	/* Tailc/walk.scm 90 */
																			BgL_varz00_bglt BgL_varz00_1459;

																			{	/* Tailc/walk.scm 91 */
																				BgL_varz00_bglt BgL_new1157z00_1461;

																				{	/* Tailc/walk.scm 94 */
																					BgL_varz00_bglt BgL_new1156z00_1462;

																					BgL_new1156z00_1462 =
																						((BgL_varz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_varz00_bgl))));
																					{	/* Tailc/walk.scm 94 */
																						long BgL_arg1381z00_1463;

																						{	/* Tailc/walk.scm 94 */
																							long BgL_res1768z00_1896;

																							BgL_res1768z00_1896 =
																								BGL_CLASS_INDEX
																								(BGl_varz00zzast_nodez00);
																							BgL_arg1381z00_1463 =
																								BgL_res1768z00_1896;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1156z00_1462),
																							BgL_arg1381z00_1463);
																					}
																					BgL_new1157z00_1461 =
																						BgL_new1156z00_1462;
																				}
																				((((BgL_nodez00_bglt) COBJECT(
																								((BgL_nodez00_bglt)
																									BgL_new1157z00_1461)))->
																						BgL_locz00) =
																					((obj_t) BgL_locz00_1458), BUNSPEC);
																				((((BgL_nodez00_bglt)
																							COBJECT(((BgL_nodez00_bglt)
																									BgL_new1157z00_1461)))->
																						BgL_typez00) =
																					((BgL_typez00_bglt) ((
																								(BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_localz00_1450)))->
																							BgL_typez00)), BUNSPEC);
																				((((BgL_varz00_bglt)
																							COBJECT(BgL_new1157z00_1461))->
																						BgL_variablez00) =
																					((BgL_variablez00_bglt) (
																							(BgL_variablez00_bglt)
																							BgL_localz00_1450)), BUNSPEC);
																				BgL_varz00_1459 = BgL_new1157z00_1461;
																			}
																			{	/* Tailc/walk.scm 91 */

																				((((BgL_appz00_bglt) COBJECT(
																								((BgL_appz00_bglt)
																									BgL_callz00_1457)))->
																						BgL_funz00) =
																					((BgL_varz00_bglt) BgL_varz00_1459),
																					BUNSPEC);
																}}}}
																{
																	obj_t BgL_l1296z00_2494;

																	BgL_l1296z00_2494 = CDR(BgL_l1296z00_1454);
																	BgL_l1296z00_1454 = BgL_l1296z00_2494;
																	goto BgL_zc3z04anonymousza31371ze3z87_1455;
																}
															}
														else
															{	/* Tailc/walk.scm 89 */
																((bool_t) 1);
															}
													}
													return BGl_funz00zzast_varz00;
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



/* object-init */
	obj_t BGl_objectzd2initzd2zztailc_walkz00()
	{
		{	/* Tailc/walk.scm 15 */
			{	/* Tailc/walk.scm 26 */
				obj_t BgL_arg1477z00_1529;
				obj_t BgL_arg1489z00_1530;

				{	/* Tailc/walk.scm 26 */
					obj_t BgL_v1298z00_1562;

					BgL_v1298z00_1562 = create_vector(((long) 0));
					BgL_arg1477z00_1529 = BgL_v1298z00_1562;
				}
				{	/* Tailc/walk.scm 26 */
					obj_t BgL_v1299z00_1563;

					BgL_v1299z00_1563 = create_vector(((long) 0));
					BgL_arg1489z00_1530 = BgL_v1299z00_1563;
				}
				return (BGl_localzd2tailzd2zztailc_walkz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 1)),
						CNST_TABLE_REF(((long) 2)), BGl_localz00zzast_varz00,
						((long) 43629), BGl_proc1800z00zztailc_walkz00,
						BGl_proc1799z00zztailc_walkz00, BFALSE,
						BGl_proc1798z00zztailc_walkz00, BGl_proc1797z00zztailc_walkz00,
						BgL_arg1477z00_1529, BgL_arg1489z00_1530), BUNSPEC);
		}}

	}



/* &lambda1499 */
	BgL_localz00_bglt BGl_z62lambda1499z62zztailc_walkz00(obj_t BgL_envz00_2004,
		obj_t BgL_o1117z00_2005)
	{
		{	/* Tailc/walk.scm 26 */
			{	/* Tailc/walk.scm 26 */
				long BgL_arg1518z00_2085;

				{	/* Tailc/walk.scm 26 */
					obj_t BgL_arg1521z00_2086;

					{	/* Tailc/walk.scm 26 */
						obj_t BgL_arg1528z00_2087;

						{	/* Tailc/walk.scm 26 */
							long BgL_arg1816z00_2088;

							{	/* Tailc/walk.scm 26 */
								long BgL_arg1817z00_2089;

								{	/* Tailc/walk.scm 26 */
									long BgL_res1772z00_2090;

									BgL_res1772z00_2090 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_o1117z00_2005)));
									BgL_arg1817z00_2089 = BgL_res1772z00_2090;
								}
								BgL_arg1816z00_2088 = (BgL_arg1817z00_2089 - OBJECT_TYPE);
							}
							BgL_arg1528z00_2087 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2088);
						}
						BgL_arg1521z00_2086 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1528z00_2087);
					}
					{	/* Tailc/walk.scm 26 */
						long BgL_res1774z00_2091;

						{	/* Tailc/walk.scm 26 */
							obj_t BgL_tmpz00_2507;

							BgL_tmpz00_2507 = ((obj_t) BgL_arg1521z00_2086);
							BgL_res1774z00_2091 = BGL_CLASS_INDEX(BgL_tmpz00_2507);
						}
						BgL_arg1518z00_2085 = BgL_res1774z00_2091;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_localz00_bglt) BgL_o1117z00_2005)), BgL_arg1518z00_2085);
			}
			{	/* Tailc/walk.scm 26 */
				BgL_objectz00_bglt BgL_tmpz00_2513;

				BgL_tmpz00_2513 =
					((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2005));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2513, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2005));
			return ((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2005));
		}

	}



/* &<@anonymous:1498> */
	obj_t BGl_z62zc3z04anonymousza31498ze3ze5zztailc_walkz00(obj_t
		BgL_envz00_2006, obj_t BgL_new1116z00_2007)
	{
		{	/* Tailc/walk.scm 26 */
			{
				BgL_localz00_bglt BgL_auxz00_2521;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1116z00_2007))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 3))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2007))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_2529;

					{	/* Tailc/walk.scm 26 */
						obj_t BgL_classz00_2093;

						BgL_classz00_2093 = BGl_typez00zztype_typez00;
						{	/* Tailc/walk.scm 26 */
							obj_t BgL__ortest_1106z00_2094;

							BgL__ortest_1106z00_2094 = BGL_CLASS_NIL(BgL_classz00_2093);
							if (CBOOL(BgL__ortest_1106z00_2094))
								{	/* Tailc/walk.scm 26 */
									BgL_auxz00_2529 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_2094);
								}
							else
								{	/* Tailc/walk.scm 26 */
									BgL_auxz00_2529 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2093));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1116z00_2007))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_2529), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_2539;

					{	/* Tailc/walk.scm 26 */
						obj_t BgL_classz00_2095;

						BgL_classz00_2095 = BGl_valuez00zzast_varz00;
						{	/* Tailc/walk.scm 26 */
							obj_t BgL__ortest_1106z00_2096;

							BgL__ortest_1106z00_2096 = BGL_CLASS_NIL(BgL_classz00_2095);
							if (CBOOL(BgL__ortest_1106z00_2096))
								{	/* Tailc/walk.scm 26 */
									BgL_auxz00_2539 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_2096);
								}
							else
								{	/* Tailc/walk.scm 26 */
									BgL_auxz00_2539 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2095));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1116z00_2007))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_2539), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1116z00_2007))))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2007))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2007))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2007))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2007))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2007))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2007))))->BgL_keyz00) =
					((long) ((long) 0)), BUNSPEC);
				BgL_auxz00_2521 = ((BgL_localz00_bglt) BgL_new1116z00_2007);
				return ((obj_t) BgL_auxz00_2521);
			}
		}

	}



/* &lambda1496 */
	BgL_localz00_bglt BGl_z62lambda1496z62zztailc_walkz00(obj_t BgL_envz00_2008,
		obj_t BgL_o1112z00_2009)
	{
		{	/* Tailc/walk.scm 26 */
			{	/* Tailc/walk.scm 26 */
				BgL_localzd2tailzd2_bglt BgL_wide1114z00_2098;

				BgL_wide1114z00_2098 =
					((BgL_localzd2tailzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_localzd2tailzd2_bgl))));
				{	/* Tailc/walk.scm 26 */
					obj_t BgL_auxz00_2577;
					BgL_objectz00_bglt BgL_tmpz00_2573;

					BgL_auxz00_2577 = ((obj_t) BgL_wide1114z00_2098);
					BgL_tmpz00_2573 =
						((BgL_objectz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1112z00_2009)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2573, BgL_auxz00_2577);
				}
				((BgL_objectz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1112z00_2009)));
				{	/* Tailc/walk.scm 26 */
					long BgL_arg1497z00_2099;

					{	/* Tailc/walk.scm 26 */
						long BgL_res1771z00_2100;

						BgL_res1771z00_2100 =
							BGL_CLASS_INDEX(BGl_localzd2tailzd2zztailc_walkz00);
						BgL_arg1497z00_2099 = BgL_res1771z00_2100;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_localz00_bglt)
								((BgL_localz00_bglt) BgL_o1112z00_2009))), BgL_arg1497z00_2099);
				}
				return
					((BgL_localz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1112z00_2009)));
			}
		}

	}



/* &lambda1490 */
	BgL_localz00_bglt BGl_z62lambda1490z62zztailc_walkz00(obj_t BgL_envz00_2010,
		obj_t BgL_id1101z00_2011, obj_t BgL_name1102z00_2012,
		obj_t BgL_type1103z00_2013, obj_t BgL_value1104z00_2014,
		obj_t BgL_access1105z00_2015, obj_t BgL_fastzd2alpha1106zd2_2016,
		obj_t BgL_removable1107z00_2017, obj_t BgL_occurrence1108z00_2018,
		obj_t BgL_occurrencew1109z00_2019, obj_t BgL_userzf31110zf3_2020,
		obj_t BgL_key1111z00_2021)
	{
		{	/* Tailc/walk.scm 26 */
			{	/* Tailc/walk.scm 26 */
				long BgL_occurrence1108z00_2104;
				long BgL_occurrencew1109z00_2105;
				bool_t BgL_userzf31110zf3_2106;
				long BgL_key1111z00_2107;

				BgL_occurrence1108z00_2104 = (long) CINT(BgL_occurrence1108z00_2018);
				BgL_occurrencew1109z00_2105 = (long) CINT(BgL_occurrencew1109z00_2019);
				BgL_userzf31110zf3_2106 = CBOOL(BgL_userzf31110zf3_2020);
				BgL_key1111z00_2107 = (long) CINT(BgL_key1111z00_2021);
				{	/* Tailc/walk.scm 26 */
					BgL_localz00_bglt BgL_new1173z00_2108;

					{	/* Tailc/walk.scm 26 */
						BgL_localz00_bglt BgL_tmp1171z00_2109;
						BgL_localzd2tailzd2_bglt BgL_wide1172z00_2110;

						{
							BgL_localz00_bglt BgL_auxz00_2595;

							{	/* Tailc/walk.scm 26 */
								BgL_localz00_bglt BgL_new1170z00_2111;

								BgL_new1170z00_2111 =
									((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_localz00_bgl))));
								{	/* Tailc/walk.scm 26 */
									long BgL_arg1495z00_2112;

									{	/* Tailc/walk.scm 26 */
										long BgL_res1769z00_2113;

										BgL_res1769z00_2113 =
											BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
										BgL_arg1495z00_2112 = BgL_res1769z00_2113;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1170z00_2111),
										BgL_arg1495z00_2112);
								}
								{	/* Tailc/walk.scm 26 */
									BgL_objectz00_bglt BgL_tmpz00_2600;

									BgL_tmpz00_2600 = ((BgL_objectz00_bglt) BgL_new1170z00_2111);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2600, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1170z00_2111);
								BgL_auxz00_2595 = BgL_new1170z00_2111;
							}
							BgL_tmp1171z00_2109 = ((BgL_localz00_bglt) BgL_auxz00_2595);
						}
						BgL_wide1172z00_2110 =
							((BgL_localzd2tailzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localzd2tailzd2_bgl))));
						{	/* Tailc/walk.scm 26 */
							obj_t BgL_auxz00_2608;
							BgL_objectz00_bglt BgL_tmpz00_2606;

							BgL_auxz00_2608 = ((obj_t) BgL_wide1172z00_2110);
							BgL_tmpz00_2606 = ((BgL_objectz00_bglt) BgL_tmp1171z00_2109);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2606, BgL_auxz00_2608);
						}
						((BgL_objectz00_bglt) BgL_tmp1171z00_2109);
						{	/* Tailc/walk.scm 26 */
							long BgL_arg1493z00_2114;

							{	/* Tailc/walk.scm 26 */
								long BgL_res1770z00_2115;

								BgL_res1770z00_2115 =
									BGL_CLASS_INDEX(BGl_localzd2tailzd2zztailc_walkz00);
								BgL_arg1493z00_2114 = BgL_res1770z00_2115;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1171z00_2109),
								BgL_arg1493z00_2114);
						}
						BgL_new1173z00_2108 = ((BgL_localz00_bglt) BgL_tmp1171z00_2109);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1173z00_2108)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1101z00_2011)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2108)))->BgL_namez00) =
						((obj_t) BgL_name1102z00_2012), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2108)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1103z00_2013)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2108)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1104z00_2014)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2108)))->BgL_accessz00) =
						((obj_t) BgL_access1105z00_2015), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2108)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1106zd2_2016), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2108)))->BgL_removablez00) =
						((obj_t) BgL_removable1107z00_2017), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2108)))->BgL_occurrencez00) =
						((long) BgL_occurrence1108z00_2104), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2108)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1109z00_2105), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2108)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31110zf3_2106), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
										BgL_new1173z00_2108)))->BgL_keyz00) =
						((long) BgL_key1111z00_2107), BUNSPEC);
					return BgL_new1173z00_2108;
				}
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztailc_walkz00()
	{
		{	/* Tailc/walk.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_proc1801z00zztailc_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string1802z00zztailc_walkz00);
		}

	}



/* &get-tail-calls1300 */
	obj_t BGl_z62getzd2tailzd2calls1300z62zztailc_walkz00(obj_t BgL_envz00_2023,
		obj_t BgL_nz00_2024, obj_t BgL_hz00_2025, obj_t BgL_tailsz00_2026)
	{
		{	/* Tailc/walk.scm 106 */
			return ((obj_t) BgL_tailsz00_2026);
		}

	}



/* get-tail-calls */
	obj_t BGl_getzd2tailzd2callsz00zztailc_walkz00(BgL_nodez00_bglt BgL_nz00_52,
		BgL_variablez00_bglt BgL_hz00_53, obj_t BgL_tailsz00_54)
	{
		{	/* Tailc/walk.scm 106 */
			{	/* Tailc/walk.scm 106 */
				obj_t BgL_method1301z00_1574;

				{	/* Tailc/walk.scm 106 */
					obj_t BgL_res1785z00_1971;

					{	/* Tailc/walk.scm 106 */
						long BgL_objzd2classzd2numz00_1936;

						{	/* Tailc/walk.scm 106 */
							long BgL_res1775z00_1939;

							BgL_res1775z00_1939 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nz00_52));
							BgL_objzd2classzd2numz00_1936 = BgL_res1775z00_1939;
						}
						{	/* Tailc/walk.scm 106 */
							obj_t BgL_arg1813z00_1937;

							BgL_arg1813z00_1937 =
								PROCEDURE_REF(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
								(int) (((long) 1)));
							{	/* Tailc/walk.scm 106 */
								int BgL_offsetz00_1941;

								BgL_offsetz00_1941 = (int) (BgL_objzd2classzd2numz00_1936);
								{	/* Tailc/walk.scm 106 */
									long BgL_offsetz00_1942;

									BgL_offsetz00_1942 =
										((long) (BgL_offsetz00_1941) - OBJECT_TYPE);
									{	/* Tailc/walk.scm 106 */
										long BgL_modz00_1943;

										BgL_modz00_1943 =
											(BgL_offsetz00_1942 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Tailc/walk.scm 106 */
											long BgL_restz00_1945;

											BgL_restz00_1945 =
												(BgL_offsetz00_1942 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Tailc/walk.scm 106 */

												{	/* Tailc/walk.scm 106 */
													obj_t BgL_bucketz00_1947;

													BgL_bucketz00_1947 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1937), BgL_modz00_1943);
													BgL_res1785z00_1971 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1947), BgL_restz00_1945);
					}}}}}}}}
					BgL_method1301z00_1574 = BgL_res1785z00_1971;
				}
				return
					PROCEDURE_ENTRY(BgL_method1301z00_1574) (BgL_method1301z00_1574,
					((obj_t) BgL_nz00_52), ((obj_t) BgL_hz00_53), BgL_tailsz00_54, BEOA);
			}
		}

	}



/* &get-tail-calls */
	obj_t BGl_z62getzd2tailzd2callsz62zztailc_walkz00(obj_t BgL_envz00_2027,
		obj_t BgL_nz00_2028, obj_t BgL_hz00_2029, obj_t BgL_tailsz00_2030)
	{
		{	/* Tailc/walk.scm 106 */
			return
				BGl_getzd2tailzd2callsz00zztailc_walkz00(
				((BgL_nodez00_bglt) BgL_nz00_2028),
				((BgL_variablez00_bglt) BgL_hz00_2029), BgL_tailsz00_2030);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztailc_walkz00()
	{
		{	/* Tailc/walk.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_closurez00zzast_nodez00, BGl_proc1803z00zztailc_walkz00,
				BGl_string1804z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1805z00zztailc_walkz00,
				BGl_string1804z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_syncz00zzast_nodez00, BGl_proc1806z00zztailc_walkz00,
				BGl_string1804z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_appz00zzast_nodez00, BGl_proc1807z00zztailc_walkz00,
				BGl_string1804z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1808z00zztailc_walkz00,
				BGl_string1804z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_switchz00zzast_nodez00, BGl_proc1809z00zztailc_walkz00,
				BGl_string1804z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1810z00zztailc_walkz00,
				BGl_string1804z00zztailc_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1811z00zztailc_walkz00,
				BGl_string1804z00zztailc_walkz00);
		}

	}



/* &get-tail-calls-let-v1317 */
	obj_t BGl_z62getzd2tailzd2callszd2letzd2v1317z62zztailc_walkz00(obj_t
		BgL_envz00_2039, obj_t BgL_nodez00_2040, obj_t BgL_hostz00_2041,
		obj_t BgL_tailsz00_2042)
	{
		{	/* Tailc/walk.scm 179 */
			{	/* Tailc/walk.scm 181 */
				BgL_nodez00_bglt BgL_arg1605z00_2120;

				BgL_arg1605z00_2120 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2040)))->BgL_bodyz00);
				return
					BGl_getzd2tailzd2callsz00zztailc_walkz00(BgL_arg1605z00_2120,
					((BgL_variablez00_bglt) BgL_hostz00_2041), BgL_tailsz00_2042);
			}
		}

	}



/* &get-tail-calls-let-f1315 */
	obj_t BGl_z62getzd2tailzd2callszd2letzd2f1315z62zztailc_walkz00(obj_t
		BgL_envz00_2043, obj_t BgL_nodez00_2044, obj_t BgL_hostz00_2045,
		obj_t BgL_tailsz00_2046)
	{
		{	/* Tailc/walk.scm 169 */
			{	/* Tailc/walk.scm 174 */
				BgL_nodez00_bglt BgL_arg1604z00_2122;

				BgL_arg1604z00_2122 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2044)))->BgL_bodyz00);
				return
					BGl_getzd2tailzd2callsz00zztailc_walkz00(BgL_arg1604z00_2122,
					((BgL_variablez00_bglt) BgL_hostz00_2045), BgL_tailsz00_2046);
			}
		}

	}



/* &get-tail-calls-switc1313 */
	obj_t BGl_z62getzd2tailzd2callszd2switc1313zb0zztailc_walkz00(obj_t
		BgL_envz00_2047, obj_t BgL_nodez00_2048, obj_t BgL_hostz00_2049,
		obj_t BgL_tailsz00_2050)
	{
		{	/* Tailc/walk.scm 157 */
			{	/* Tailc/walk.scm 159 */
				obj_t BgL_res1822z00_2132;

				{	/* Tailc/walk.scm 159 */
					obj_t BgL_g1167z00_2124;

					BgL_g1167z00_2124 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2048)))->BgL_clausesz00);
					{
						obj_t BgL_clausesz00_2126;
						obj_t BgL_tailsz00_2127;

						BgL_clausesz00_2126 = BgL_g1167z00_2124;
						BgL_tailsz00_2127 = BgL_tailsz00_2050;
					BgL_liipz00_2125:
						if (NULLP(BgL_clausesz00_2126))
							{	/* Tailc/walk.scm 161 */
								BgL_res1822z00_2132 = BgL_tailsz00_2127;
							}
						else
							{	/* Tailc/walk.scm 163 */
								obj_t BgL_arg1592z00_2128;
								obj_t BgL_arg1593z00_2129;

								BgL_arg1592z00_2128 = CDR(((obj_t) BgL_clausesz00_2126));
								{	/* Tailc/walk.scm 164 */
									obj_t BgL_arg1597z00_2130;

									{	/* Tailc/walk.scm 164 */
										obj_t BgL_pairz00_2131;

										BgL_pairz00_2131 = CAR(((obj_t) BgL_clausesz00_2126));
										BgL_arg1597z00_2130 = CDR(BgL_pairz00_2131);
									}
									BgL_arg1593z00_2129 =
										BGl_getzd2tailzd2callsz00zztailc_walkz00(
										((BgL_nodez00_bglt) BgL_arg1597z00_2130),
										((BgL_variablez00_bglt) BgL_hostz00_2049),
										BgL_tailsz00_2127);
								}
								{
									obj_t BgL_tailsz00_2708;
									obj_t BgL_clausesz00_2707;

									BgL_clausesz00_2707 = BgL_arg1592z00_2128;
									BgL_tailsz00_2708 = BgL_arg1593z00_2129;
									BgL_tailsz00_2127 = BgL_tailsz00_2708;
									BgL_clausesz00_2126 = BgL_clausesz00_2707;
									goto BgL_liipz00_2125;
								}
							}
					}
				}
				return BgL_res1822z00_2132;
			}
		}

	}



/* &get-tail-calls-condi1311 */
	obj_t BGl_z62getzd2tailzd2callszd2condi1311zb0zztailc_walkz00(obj_t
		BgL_envz00_2051, obj_t BgL_nodez00_2052, obj_t BgL_hostz00_2053,
		obj_t BgL_tailsz00_2054)
	{
		{	/* Tailc/walk.scm 150 */
			{	/* Tailc/walk.scm 152 */
				BgL_nodez00_bglt BgL_arg1584z00_2134;
				obj_t BgL_arg1588z00_2135;

				BgL_arg1584z00_2134 =
					(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2052)))->BgL_truez00);
				{	/* Tailc/walk.scm 152 */
					BgL_nodez00_bglt BgL_arg1589z00_2136;

					BgL_arg1589z00_2136 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2052)))->BgL_falsez00);
					BgL_arg1588z00_2135 =
						BGl_getzd2tailzd2callsz00zztailc_walkz00(BgL_arg1589z00_2136,
						((BgL_variablez00_bglt) BgL_hostz00_2053), BgL_tailsz00_2054);
				}
				return
					BGl_getzd2tailzd2callsz00zztailc_walkz00(BgL_arg1584z00_2134,
					((BgL_variablez00_bglt) BgL_hostz00_2053), BgL_arg1588z00_2135);
			}
		}

	}



/* &get-tail-calls-app1309 */
	obj_t BGl_z62getzd2tailzd2callszd2app1309zb0zztailc_walkz00(obj_t
		BgL_envz00_2055, obj_t BgL_nodez00_2056, obj_t BgL_hostz00_2057,
		obj_t BgL_tailsz00_2058)
	{
		{	/* Tailc/walk.scm 133 */
			{	/* Tailc/walk.scm 135 */
				BgL_variablez00_bglt BgL_calleez00_2138;

				BgL_calleez00_2138 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_appz00_bglt) COBJECT(
										((BgL_appz00_bglt) BgL_nodez00_2056)))->BgL_funz00)))->
					BgL_variablez00);
				if ((((obj_t) BgL_calleez00_2138) == BgL_hostz00_2057))
					{	/* Tailc/walk.scm 137 */
						return
							MAKE_YOUNG_PAIR(
							((obj_t)
								((BgL_appz00_bglt) BgL_nodez00_2056)), BgL_tailsz00_2058);
					}
				else
					{	/* Tailc/walk.scm 139 */
						bool_t BgL_test1866z00_2726;

						{	/* Tailc/walk.scm 139 */
							bool_t BgL_res1787z00_2139;

							BgL_res1787z00_2139 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_calleez00_2138),
								BGl_localzd2tailzd2zztailc_walkz00);
							BgL_test1866z00_2726 = BgL_res1787z00_2139;
						}
						if (BgL_test1866z00_2726)
							{	/* Tailc/walk.scm 139 */
								return BgL_tailsz00_2058;
							}
						else
							{	/* Tailc/walk.scm 141 */
								bool_t BgL_test1867z00_2729;

								{	/* Tailc/walk.scm 141 */
									bool_t BgL_res1788z00_2140;

									BgL_res1788z00_2140 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_calleez00_2138), BGl_localz00zzast_varz00);
									BgL_test1867z00_2729 = BgL_res1788z00_2140;
								}
								if (BgL_test1867z00_2729)
									{	/* Tailc/walk.scm 141 */
										{	/* Tailc/walk.scm 142 */
											BgL_localzd2tailzd2_bglt BgL_wide1163z00_2141;

											BgL_wide1163z00_2141 =
												((BgL_localzd2tailzd2_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_localzd2tailzd2_bgl))));
											{	/* Tailc/walk.scm 142 */
												obj_t BgL_auxz00_2737;
												BgL_objectz00_bglt BgL_tmpz00_2733;

												BgL_auxz00_2737 = ((obj_t) BgL_wide1163z00_2141);
												BgL_tmpz00_2733 =
													((BgL_objectz00_bglt)
													((BgL_localz00_bglt)
														((BgL_localz00_bglt) BgL_calleez00_2138)));
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2733,
													BgL_auxz00_2737);
											}
											((BgL_objectz00_bglt)
												((BgL_localz00_bglt)
													((BgL_localz00_bglt) BgL_calleez00_2138)));
											{	/* Tailc/walk.scm 142 */
												long BgL_arg1573z00_2142;

												{	/* Tailc/walk.scm 142 */
													long BgL_res1789z00_2143;

													BgL_res1789z00_2143 =
														BGL_CLASS_INDEX(BGl_localzd2tailzd2zztailc_walkz00);
													BgL_arg1573z00_2142 = BgL_res1789z00_2143;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt)
														((BgL_localz00_bglt)
															((BgL_localz00_bglt) BgL_calleez00_2138))),
													BgL_arg1573z00_2142);
											}
											((BgL_localz00_bglt)
												((BgL_localz00_bglt)
													((BgL_localz00_bglt) BgL_calleez00_2138)));
										}
										((BgL_localz00_bglt)
											((BgL_localz00_bglt) BgL_calleez00_2138));
										{	/* Tailc/walk.scm 143 */
											obj_t BgL_arg1575z00_2144;

											BgL_arg1575z00_2144 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt)
																				BgL_calleez00_2138))))->
																BgL_valuez00))))->BgL_bodyz00);
											return
												BGl_getzd2tailzd2callsz00zztailc_walkz00((
													(BgL_nodez00_bglt) BgL_arg1575z00_2144),
												((BgL_variablez00_bglt) BgL_hostz00_2057),
												BgL_tailsz00_2058);
										}
									}
								else
									{	/* Tailc/walk.scm 141 */
										return BgL_tailsz00_2058;
									}
							}
					}
			}
		}

	}



/* &get-tail-calls-sync1307 */
	obj_t BGl_z62getzd2tailzd2callszd2sync1307zb0zztailc_walkz00(obj_t
		BgL_envz00_2059, obj_t BgL_nodez00_2060, obj_t BgL_hostz00_2061,
		obj_t BgL_tailsz00_2062)
	{
		{	/* Tailc/walk.scm 127 */
			return ((obj_t) BgL_tailsz00_2062);
		}

	}



/* &get-tail-calls-seque1305 */
	obj_t BGl_z62getzd2tailzd2callszd2seque1305zb0zztailc_walkz00(obj_t
		BgL_envz00_2063, obj_t BgL_nodez00_2064, obj_t BgL_hostz00_2065,
		obj_t BgL_tailsz00_2066)
	{
		{	/* Tailc/walk.scm 118 */
			if (NULLP(
					(((BgL_sequencez00_bglt) COBJECT(
								((BgL_sequencez00_bglt) BgL_nodez00_2064)))->BgL_nodesz00)))
				{	/* Tailc/walk.scm 120 */
					return BgL_tailsz00_2066;
				}
			else
				{	/* Tailc/walk.scm 122 */
					obj_t BgL_arg1552z00_2148;

					BgL_arg1552z00_2148 =
						CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
							(((BgL_sequencez00_bglt) COBJECT(
										((BgL_sequencez00_bglt) BgL_nodez00_2064)))->
								BgL_nodesz00)));
					return BGl_getzd2tailzd2callsz00zztailc_walkz00(((BgL_nodez00_bglt)
							BgL_arg1552z00_2148), ((BgL_variablez00_bglt) BgL_hostz00_2065),
						BgL_tailsz00_2066);
				}
		}

	}



/* &get-tail-calls-closu1303 */
	obj_t BGl_z62getzd2tailzd2callszd2closu1303zb0zztailc_walkz00(obj_t
		BgL_envz00_2067, obj_t BgL_nodez00_2068, obj_t BgL_hostz00_2069,
		obj_t BgL_tailsz00_2070)
	{
		{	/* Tailc/walk.scm 112 */
			{	/* Tailc/walk.scm 113 */
				obj_t BgL_res1824z00_2151;

				{	/* Tailc/walk.scm 113 */
					obj_t BgL_arg1537z00_2150;

					BgL_arg1537z00_2150 =
						BGl_shapez00zztools_shapez00(
						((obj_t) ((BgL_closurez00_bglt) BgL_nodez00_2068)));
					BgL_res1824z00_2151 =
						BGl_internalzd2errorzd2zztools_errorz00
						(BGl_string1804z00zztailc_walkz00, BGl_string1812z00zztailc_walkz00,
						BgL_arg1537z00_2150);
				}
				return BgL_res1824z00_2151;
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztailc_walkz00()
	{
		{	/* Tailc/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1813z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1813z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1813z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1813z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1813z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1813z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1813z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1813z00zztailc_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1813z00zztailc_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
