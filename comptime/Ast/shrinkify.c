/*===========================================================================*/
/*   (Ast/shrinkify.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/shrinkify.scm) */
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

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

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

	typedef struct BgL_setzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                       *BgL_setzd2exzd2itz00_bglt;

	typedef struct BgL_jumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_exitz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                        *BgL_jumpzd2exzd2itz00_bglt;

	typedef struct BgL_makezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		obj_t BgL_stackablez00;
	}                    *BgL_makezd2boxzd2_bglt;

	typedef struct BgL_boxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                   *BgL_boxzd2refzd2_bglt;

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                      *BgL_boxzd2setz12zc0_bglt;

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


	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62shrinkzd2variablez12za2zzast_shrinkifyz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzast_shrinkifyz00();
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62shrinkzd2nodez12zd2switch1277z70zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_shrinkifyz12z12zzast_shrinkifyz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzast_shrinkifyz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62shrinkzd2nodez12zd2funcall1264z70zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_z62shrinkzd2nodez12zd2conditi1273z70zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_z62shrinkifyz12z70zzast_shrinkifyz00(obj_t, obj_t);
	static obj_t BGl_z62shrinkzd2nodez12zd2sync1258z70zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_z62shrinkzd2nodez12zd2fail1275z70zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62shrinkzd2nodez12zd2boxzd2ref1281za2zzast_shrinkifyz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62shrinkzd2variablez121245za2zzast_shrinkifyz00(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t
		BGl_z62shrinkzd2nodez12zd2makezd2bo1279za2zzast_shrinkifyz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_shrinkifyz00();
	static obj_t BGl_z62shrinkzd2nodez12zd2app1260z70zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_z62shrinkzd2nodez12za2zzast_shrinkifyz00(obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t
		BGl_shrinkzd2variablez12zc0zzast_shrinkifyz00(BgL_variablez00_bglt);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t
		BGl_z62shrinkzd2nodez12zd2letzd2fun1285za2zzast_shrinkifyz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_shrinkifyz00 = BUNSPEC;
	static obj_t BGl_z62shrinkzd2nodez121247za2zzast_shrinkifyz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t
		BGl_z62shrinkzd2nodez12zd2appzd2ly1262za2zzast_shrinkifyz00(obj_t, obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_shrinkifyz00();
	static obj_t BGl_genericzd2initzd2zzast_shrinkifyz00();
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_z62shrinkzd2nodez12zd2extern1266z70zzast_shrinkifyz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62shrinkzd2nodez12zd2kwote1254z70zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62shrinkzd2nodez12zd2setzd2exzd21289z70zzast_shrinkifyz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62shrinkzd2nodez12zd2cast1268z70zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t BGl_z62shrinkzd2nodez12zd2setq1270z70zzast_shrinkifyz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62shrinkzd2nodez12zd2letzd2var1287za2zzast_shrinkifyz00(obj_t, obj_t);
	static obj_t
		BGl_z62shrinkzd2nodez12zd2boxzd2set1283za2zzast_shrinkifyz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62shrinkzd2nodez12zd2sequenc1256z70zzast_shrinkifyz00(obj_t,
		obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_z62shrinkzd2nodez12zd2var1252z70zzast_shrinkifyz00(obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_shrinkifyz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_shrinkifyz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_shrinkifyz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_shrinkifyz00();
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t
		BGl_z62shrinkzd2nodez12zd2jumpzd2ex1291za2zzast_shrinkifyz00(obj_t, obj_t);
	static obj_t BGl_z62shrinkzd2nodez12zd2atom1250z70zzast_shrinkifyz00(obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string1800z00zzast_shrinkifyz00,
		BgL_bgl_string1800za700za7za7a1831za7, "shrink-variable!1245", 20);
	      DEFINE_STRING(BGl_string1802z00zzast_shrinkifyz00,
		BgL_bgl_string1802za700za7za7a1832za7, "shrink-node!1247", 16);
	      DEFINE_STRING(BGl_string1803z00zzast_shrinkifyz00,
		BgL_bgl_string1803za700za7za7a1833za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1805z00zzast_shrinkifyz00,
		BgL_bgl_string1805za700za7za7a1834za7, "shrink-node!", 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_shrinkifyz12zd2envzc0zzast_shrinkifyz00,
		BgL_bgl_za762shrinkifyza712za71835za7,
		BGl_z62shrinkifyz12z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2vari1836z00,
		BGl_z62shrinkzd2variablez12za2zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1826z00zzast_shrinkifyz00,
		BgL_bgl_string1826za700za7za7a1837za7, "ast_shrinkify", 13);
	      DEFINE_STRING(BGl_string1827z00zzast_shrinkifyz00,
		BgL_bgl_string1827za700za7za7a1838za7, "shrink-node!1247 ", 17);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1799z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2vari1839z00,
		BGl_z62shrinkzd2variablez121245za2zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1801z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1840z00,
		BGl_z62shrinkzd2nodez121247za2zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1804z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1841z00,
		BGl_z62shrinkzd2nodez12zd2atom1250z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1806z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1842z00,
		BGl_z62shrinkzd2nodez12zd2var1252z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1807z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1843z00,
		BGl_z62shrinkzd2nodez12zd2kwote1254z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1808z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1844z00,
		BGl_z62shrinkzd2nodez12zd2sequenc1256z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1809z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1845z00,
		BGl_z62shrinkzd2nodez12zd2sync1258z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1810z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1846z00,
		BGl_z62shrinkzd2nodez12zd2app1260z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1811z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1847z00,
		BGl_z62shrinkzd2nodez12zd2appzd2ly1262za2zzast_shrinkifyz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1812z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1848z00,
		BGl_z62shrinkzd2nodez12zd2funcall1264z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1813z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1849z00,
		BGl_z62shrinkzd2nodez12zd2extern1266z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1814z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1850z00,
		BGl_z62shrinkzd2nodez12zd2cast1268z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1815z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1851z00,
		BGl_z62shrinkzd2nodez12zd2setq1270z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1816z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1852z00,
		BGl_z62shrinkzd2nodez12zd2conditi1273z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1817z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1853z00,
		BGl_z62shrinkzd2nodez12zd2fail1275z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1818z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1854z00,
		BGl_z62shrinkzd2nodez12zd2switch1277z70zzast_shrinkifyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1819z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1855z00,
		BGl_z62shrinkzd2nodez12zd2makezd2bo1279za2zzast_shrinkifyz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1820z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1856z00,
		BGl_z62shrinkzd2nodez12zd2boxzd2ref1281za2zzast_shrinkifyz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1821z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1857z00,
		BGl_z62shrinkzd2nodez12zd2boxzd2set1283za2zzast_shrinkifyz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1822z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1858z00,
		BGl_z62shrinkzd2nodez12zd2letzd2fun1285za2zzast_shrinkifyz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1823z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1859z00,
		BGl_z62shrinkzd2nodez12zd2letzd2var1287za2zzast_shrinkifyz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1824z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1860z00,
		BGl_z62shrinkzd2nodez12zd2setzd2exzd21289z70zzast_shrinkifyz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1825z00zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1861z00,
		BGl_z62shrinkzd2nodez12zd2jumpzd2ex1291za2zzast_shrinkifyz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
		BgL_bgl_za762shrinkza7d2node1862z00,
		BGl_z62shrinkzd2nodez12za2zzast_shrinkifyz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzast_shrinkifyz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_shrinkifyz00(long
		BgL_checksumz00_2264, char *BgL_fromz00_2265)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_shrinkifyz00))
				{
					BGl_requirezd2initializa7ationz75zzast_shrinkifyz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_shrinkifyz00();
					BGl_libraryzd2moduleszd2initz00zzast_shrinkifyz00();
					BGl_cnstzd2initzd2zzast_shrinkifyz00();
					BGl_importedzd2moduleszd2initz00zzast_shrinkifyz00();
					BGl_genericzd2initzd2zzast_shrinkifyz00();
					BGl_methodzd2initzd2zzast_shrinkifyz00();
					return BGl_toplevelzd2initzd2zzast_shrinkifyz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_shrinkifyz00()
	{
		{	/* Ast/shrinkify.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_shrinkify");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"ast_shrinkify");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"ast_shrinkify");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_shrinkify");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_shrinkify");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_shrinkify");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_shrinkify");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_shrinkify");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_shrinkify");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_shrinkifyz00()
	{
		{	/* Ast/shrinkify.scm 15 */
			{	/* Ast/shrinkify.scm 15 */
				obj_t BgL_cportz00_2129;

				{	/* Ast/shrinkify.scm 15 */
					obj_t BgL_stringz00_2137;

					BgL_stringz00_2137 = BGl_string1827z00zzast_shrinkifyz00;
					{	/* Ast/shrinkify.scm 15 */
						obj_t BgL_startz00_2138;

						BgL_startz00_2138 = BINT(((long) 0));
						{	/* Ast/shrinkify.scm 15 */
							obj_t BgL_endz00_2139;

							BgL_endz00_2139 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2137)));
							{	/* Ast/shrinkify.scm 15 */

								BgL_cportz00_2129 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2137, BgL_startz00_2138, BgL_endz00_2139);
				}}}}
				{
					long BgL_iz00_2130;

					BgL_iz00_2130 = ((long) 0);
				BgL_loopz00_2131:
					if ((BgL_iz00_2130 == ((long) -1)))
						{	/* Ast/shrinkify.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Ast/shrinkify.scm 15 */
							{	/* Ast/shrinkify.scm 15 */
								obj_t BgL_arg1829z00_2133;

								{	/* Ast/shrinkify.scm 15 */

									{	/* Ast/shrinkify.scm 15 */
										obj_t BgL_locationz00_2135;

										BgL_locationz00_2135 = BBOOL(((bool_t) 0));
										{	/* Ast/shrinkify.scm 15 */

											BgL_arg1829z00_2133 =
												BGl_readz00zz__readerz00(BgL_cportz00_2129,
												BgL_locationz00_2135);
										}
									}
								}
								{	/* Ast/shrinkify.scm 15 */
									int BgL_tmpz00_2294;

									BgL_tmpz00_2294 = (int) (BgL_iz00_2130);
									CNST_TABLE_SET(BgL_tmpz00_2294, BgL_arg1829z00_2133);
							}}
							{	/* Ast/shrinkify.scm 15 */
								int BgL_auxz00_2136;

								BgL_auxz00_2136 = (int) ((BgL_iz00_2130 - ((long) 1)));
								{
									long BgL_iz00_2299;

									BgL_iz00_2299 = (long) (BgL_auxz00_2136);
									BgL_iz00_2130 = BgL_iz00_2299;
									goto BgL_loopz00_2131;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_shrinkifyz00()
	{
		{	/* Ast/shrinkify.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_shrinkifyz00()
	{
		{	/* Ast/shrinkify.scm 15 */
			return BUNSPEC;
		}

	}



/* shrinkify! */
	BGL_EXPORTED_DEF obj_t BGl_shrinkifyz12z12zzast_shrinkifyz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Ast/shrinkify.scm 25 */
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00, BNIL);
			{
				obj_t BgL_l1229z00_1351;

				BgL_l1229z00_1351 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31298ze3z87_1352:
				if (PAIRP(BgL_l1229z00_1351))
					{	/* Ast/shrinkify.scm 27 */
						{	/* Ast/shrinkify.scm 28 */
							obj_t BgL_globalz00_1354;

							BgL_globalz00_1354 = CAR(BgL_l1229z00_1351);
							{	/* Ast/shrinkify.scm 28 */
								BgL_valuez00_bglt BgL_sfunz00_1355;

								BgL_sfunz00_1355 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1354))))->
									BgL_valuez00);
								{	/* Ast/shrinkify.scm 29 */
									obj_t BgL_g1228z00_1356;

									BgL_g1228z00_1356 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_sfunz00_1355)))->BgL_argsz00);
									{
										obj_t BgL_l1226z00_1358;

										BgL_l1226z00_1358 = BgL_g1228z00_1356;
									BgL_zc3z04anonymousza31300ze3z87_1359:
										if (PAIRP(BgL_l1226z00_1358))
											{	/* Ast/shrinkify.scm 29 */
												{	/* Ast/shrinkify.scm 29 */
													obj_t BgL_arg1303z00_1361;

													BgL_arg1303z00_1361 = CAR(BgL_l1226z00_1358);
													BGl_shrinkzd2variablez12zc0zzast_shrinkifyz00(
														((BgL_variablez00_bglt) BgL_arg1303z00_1361));
												}
												{
													obj_t BgL_l1226z00_2316;

													BgL_l1226z00_2316 = CDR(BgL_l1226z00_1358);
													BgL_l1226z00_1358 = BgL_l1226z00_2316;
													goto BgL_zc3z04anonymousza31300ze3z87_1359;
												}
											}
										else
											{	/* Ast/shrinkify.scm 29 */
												((bool_t) 1);
											}
									}
								}
								{	/* Ast/shrinkify.scm 30 */
									obj_t BgL_arg1306z00_1364;

									BgL_arg1306z00_1364 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_globalz00_1354))))->
														BgL_valuez00))))->BgL_bodyz00);
									BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(((BgL_nodez00_bglt)
											BgL_arg1306z00_1364));
								}
							}
						}
						{
							obj_t BgL_l1229z00_2325;

							BgL_l1229z00_2325 = CDR(BgL_l1229z00_1351);
							BgL_l1229z00_1351 = BgL_l1229z00_2325;
							goto BgL_zc3z04anonymousza31298ze3z87_1352;
						}
					}
				else
					{	/* Ast/shrinkify.scm 27 */
						((bool_t) 1);
					}
			}
			return BgL_globalsz00_3;
		}

	}



/* &shrinkify! */
	obj_t BGl_z62shrinkifyz12z70zzast_shrinkifyz00(obj_t BgL_envz00_2053,
		obj_t BgL_globalsz00_2054)
	{
		{	/* Ast/shrinkify.scm 25 */
			return BGl_shrinkifyz12z12zzast_shrinkifyz00(BgL_globalsz00_2054);
		}

	}



/* shrink-node*! */
	bool_t BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(obj_t BgL_nodeza2za2_27)
	{
		{	/* Ast/shrinkify.scm 230 */
			{
				obj_t BgL_l1243z00_1369;

				BgL_l1243z00_1369 = BgL_nodeza2za2_27;
			BgL_zc3z04anonymousza31309ze3z87_1370:
				if (PAIRP(BgL_l1243z00_1369))
					{	/* Ast/shrinkify.scm 231 */
						{	/* Ast/shrinkify.scm 231 */
							obj_t BgL_arg1311z00_1372;

							BgL_arg1311z00_1372 = CAR(BgL_l1243z00_1369);
							BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
								((BgL_nodez00_bglt) BgL_arg1311z00_1372));
						}
						{
							obj_t BgL_l1243z00_2333;

							BgL_l1243z00_2333 = CDR(BgL_l1243z00_1369);
							BgL_l1243z00_1369 = BgL_l1243z00_2333;
							goto BgL_zc3z04anonymousza31309ze3z87_1370;
						}
					}
				else
					{	/* Ast/shrinkify.scm 231 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_shrinkifyz00()
	{
		{	/* Ast/shrinkify.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_shrinkifyz00()
	{
		{	/* Ast/shrinkify.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00,
				BGl_proc1799z00zzast_shrinkifyz00, BGl_variablez00zzast_varz00,
				BGl_string1800z00zzast_shrinkifyz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_proc1801z00zzast_shrinkifyz00, BGl_nodez00zzast_nodez00,
				BGl_string1802z00zzast_shrinkifyz00);
		}

	}



/* &shrink-node!1247 */
	obj_t BGl_z62shrinkzd2nodez121247za2zzast_shrinkifyz00(obj_t BgL_envz00_2059,
		obj_t BgL_nodez00_2060)
	{
		{	/* Ast/shrinkify.scm 46 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string1803z00zzast_shrinkifyz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2060)));
		}

	}



/* &shrink-variable!1245 */
	obj_t BGl_z62shrinkzd2variablez121245za2zzast_shrinkifyz00(obj_t
		BgL_envz00_2061, obj_t BgL_variablez00_2062)
	{
		{	/* Ast/shrinkify.scm 37 */
			{	/* Ast/shrinkify.scm 38 */
				bool_t BgL_test1868z00_2341;

				{	/* Ast/shrinkify.scm 38 */
					bool_t BgL_res1737z00_2144;

					{	/* Ast/shrinkify.scm 38 */
						obj_t BgL_tmpz00_2342;

						{	/* Ast/shrinkify.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_2343;

							BgL_tmpz00_2343 =
								((BgL_objectz00_bglt)
								((BgL_variablez00_bglt) BgL_variablez00_2062));
							BgL_tmpz00_2342 = BGL_OBJECT_WIDENING(BgL_tmpz00_2343);
						}
						BgL_res1737z00_2144 = CBOOL(BgL_tmpz00_2342);
					}
					BgL_test1868z00_2341 = BgL_res1737z00_2144;
				}
				if (BgL_test1868z00_2341)
					{	/* Ast/shrinkify.scm 38 */
						{	/* Ast/shrinkify.scm 39 */
							long BgL_arg1316z00_2145;

							{	/* Ast/shrinkify.scm 39 */
								obj_t BgL_arg1317z00_2146;

								{	/* Ast/shrinkify.scm 39 */
									obj_t BgL_arg1319z00_2147;

									{	/* Ast/shrinkify.scm 39 */
										long BgL_arg1816z00_2148;

										{	/* Ast/shrinkify.scm 39 */
											long BgL_arg1817z00_2149;

											{	/* Ast/shrinkify.scm 39 */
												long BgL_res1738z00_2150;

												BgL_res1738z00_2150 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt)
														((BgL_variablez00_bglt) BgL_variablez00_2062)));
												BgL_arg1817z00_2149 = BgL_res1738z00_2150;
											}
											BgL_arg1816z00_2148 = (BgL_arg1817z00_2149 - OBJECT_TYPE);
										}
										BgL_arg1319z00_2147 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg1816z00_2148);
									}
									BgL_arg1317z00_2146 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg1319z00_2147);
								}
								{	/* Ast/shrinkify.scm 39 */
									long BgL_res1740z00_2151;

									{	/* Ast/shrinkify.scm 39 */
										obj_t BgL_tmpz00_2354;

										BgL_tmpz00_2354 = ((obj_t) BgL_arg1317z00_2146);
										BgL_res1740z00_2151 = BGL_CLASS_INDEX(BgL_tmpz00_2354);
									}
									BgL_arg1316z00_2145 = BgL_res1740z00_2151;
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_variablez00_bglt) BgL_variablez00_2062)),
								BgL_arg1316z00_2145);
						}
						{	/* Ast/shrinkify.scm 39 */
							BgL_objectz00_bglt BgL_tmpz00_2360;

							BgL_tmpz00_2360 =
								((BgL_objectz00_bglt)
								((BgL_variablez00_bglt) BgL_variablez00_2062));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2360, BFALSE);
						}
						((BgL_objectz00_bglt)
							((BgL_variablez00_bglt) BgL_variablez00_2062));
						((obj_t) ((BgL_variablez00_bglt) BgL_variablez00_2062));
					}
				else
					{	/* Ast/shrinkify.scm 38 */
						BFALSE;
					}
			}
			{	/* Ast/shrinkify.scm 40 */
				bool_t BgL_test1869z00_2368;

				{	/* Ast/shrinkify.scm 40 */
					bool_t BgL_res1741z00_2152;

					{	/* Ast/shrinkify.scm 40 */
						BgL_objectz00_bglt BgL_oz00_2153;

						BgL_oz00_2153 =
							((BgL_objectz00_bglt)
							(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_variablez00_2062)))->
								BgL_valuez00));
						BgL_res1741z00_2152 = CBOOL(BGL_OBJECT_WIDENING(BgL_oz00_2153));
					}
					BgL_test1869z00_2368 = BgL_res1741z00_2152;
				}
				if (BgL_test1869z00_2368)
					{	/* Ast/shrinkify.scm 41 */
						BgL_valuez00_bglt BgL_o1101z00_2154;

						BgL_o1101z00_2154 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_variablez00_2062)))->
							BgL_valuez00);
						{	/* Ast/shrinkify.scm 41 */
							long BgL_arg1324z00_2155;

							{	/* Ast/shrinkify.scm 41 */
								obj_t BgL_arg1325z00_2156;

								{	/* Ast/shrinkify.scm 41 */
									obj_t BgL_arg1326z00_2157;

									{	/* Ast/shrinkify.scm 41 */
										long BgL_arg1816z00_2158;

										{	/* Ast/shrinkify.scm 41 */
											long BgL_arg1817z00_2159;

											{	/* Ast/shrinkify.scm 41 */
												long BgL_res1742z00_2160;

												BgL_res1742z00_2160 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt) BgL_o1101z00_2154));
												BgL_arg1817z00_2159 = BgL_res1742z00_2160;
											}
											BgL_arg1816z00_2158 = (BgL_arg1817z00_2159 - OBJECT_TYPE);
										}
										BgL_arg1326z00_2157 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg1816z00_2158);
									}
									BgL_arg1325z00_2156 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg1326z00_2157);
								}
								{	/* Ast/shrinkify.scm 41 */
									long BgL_res1744z00_2161;

									{	/* Ast/shrinkify.scm 41 */
										obj_t BgL_tmpz00_2381;

										BgL_tmpz00_2381 = ((obj_t) BgL_arg1325z00_2156);
										BgL_res1744z00_2161 = BGL_CLASS_INDEX(BgL_tmpz00_2381);
									}
									BgL_arg1324z00_2155 = BgL_res1744z00_2161;
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_o1101z00_2154), BgL_arg1324z00_2155);
						}
						{	/* Ast/shrinkify.scm 41 */
							BgL_objectz00_bglt BgL_tmpz00_2386;

							BgL_tmpz00_2386 = ((BgL_objectz00_bglt) BgL_o1101z00_2154);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2386, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_o1101z00_2154);
						return ((obj_t) BgL_o1101z00_2154);
					}
				else
					{	/* Ast/shrinkify.scm 40 */
						return BFALSE;
					}
			}
		}

	}



/* shrink-variable! */
	obj_t BGl_shrinkzd2variablez12zc0zzast_shrinkifyz00(BgL_variablez00_bglt
		BgL_variablez00_4)
	{
		{	/* Ast/shrinkify.scm 37 */
			{	/* Ast/shrinkify.scm 37 */
				obj_t BgL_method1246z00_1395;

				{	/* Ast/shrinkify.scm 37 */
					obj_t BgL_res1755z00_1834;

					{	/* Ast/shrinkify.scm 37 */
						long BgL_objzd2classzd2numz00_1799;

						{	/* Ast/shrinkify.scm 37 */
							long BgL_res1745z00_1802;

							BgL_res1745z00_1802 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_variablez00_4));
							BgL_objzd2classzd2numz00_1799 = BgL_res1745z00_1802;
						}
						{	/* Ast/shrinkify.scm 37 */
							obj_t BgL_arg1813z00_1800;

							BgL_arg1813z00_1800 =
								PROCEDURE_REF
								(BGl_shrinkzd2variablez12zd2envz12zzast_shrinkifyz00,
								(int) (((long) 1)));
							{	/* Ast/shrinkify.scm 37 */
								int BgL_offsetz00_1804;

								BgL_offsetz00_1804 = (int) (BgL_objzd2classzd2numz00_1799);
								{	/* Ast/shrinkify.scm 37 */
									long BgL_offsetz00_1805;

									BgL_offsetz00_1805 =
										((long) (BgL_offsetz00_1804) - OBJECT_TYPE);
									{	/* Ast/shrinkify.scm 37 */
										long BgL_modz00_1806;

										BgL_modz00_1806 =
											(BgL_offsetz00_1805 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/shrinkify.scm 37 */
											long BgL_restz00_1808;

											BgL_restz00_1808 =
												(BgL_offsetz00_1805 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/shrinkify.scm 37 */

												{	/* Ast/shrinkify.scm 37 */
													obj_t BgL_bucketz00_1810;

													BgL_bucketz00_1810 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1800), BgL_modz00_1806);
													BgL_res1755z00_1834 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1810), BgL_restz00_1808);
					}}}}}}}}
					BgL_method1246z00_1395 = BgL_res1755z00_1834;
				}
				return
					PROCEDURE_ENTRY(BgL_method1246z00_1395) (BgL_method1246z00_1395,
					((obj_t) BgL_variablez00_4), BEOA);
			}
		}

	}



/* &shrink-variable! */
	obj_t BGl_z62shrinkzd2variablez12za2zzast_shrinkifyz00(obj_t BgL_envz00_2055,
		obj_t BgL_variablez00_2056)
	{
		{	/* Ast/shrinkify.scm 37 */
			return
				BGl_shrinkzd2variablez12zc0zzast_shrinkifyz00(
				((BgL_variablez00_bglt) BgL_variablez00_2056));
		}

	}



/* shrink-node! */
	obj_t BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(BgL_nodez00_bglt
		BgL_nodez00_5)
	{
		{	/* Ast/shrinkify.scm 46 */
			{	/* Ast/shrinkify.scm 46 */
				obj_t BgL_method1248z00_1396;

				{	/* Ast/shrinkify.scm 46 */
					obj_t BgL_res1766z00_1871;

					{	/* Ast/shrinkify.scm 46 */
						long BgL_objzd2classzd2numz00_1836;

						{	/* Ast/shrinkify.scm 46 */
							long BgL_res1756z00_1839;

							BgL_res1756z00_1839 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_5));
							BgL_objzd2classzd2numz00_1836 = BgL_res1756z00_1839;
						}
						{	/* Ast/shrinkify.scm 46 */
							obj_t BgL_arg1813z00_1837;

							BgL_arg1813z00_1837 =
								PROCEDURE_REF(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
								(int) (((long) 1)));
							{	/* Ast/shrinkify.scm 46 */
								int BgL_offsetz00_1841;

								BgL_offsetz00_1841 = (int) (BgL_objzd2classzd2numz00_1836);
								{	/* Ast/shrinkify.scm 46 */
									long BgL_offsetz00_1842;

									BgL_offsetz00_1842 =
										((long) (BgL_offsetz00_1841) - OBJECT_TYPE);
									{	/* Ast/shrinkify.scm 46 */
										long BgL_modz00_1843;

										BgL_modz00_1843 =
											(BgL_offsetz00_1842 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/shrinkify.scm 46 */
											long BgL_restz00_1845;

											BgL_restz00_1845 =
												(BgL_offsetz00_1842 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/shrinkify.scm 46 */

												{	/* Ast/shrinkify.scm 46 */
													obj_t BgL_bucketz00_1847;

													BgL_bucketz00_1847 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1837), BgL_modz00_1843);
													BgL_res1766z00_1871 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1847), BgL_restz00_1845);
					}}}}}}}}
					BgL_method1248z00_1396 = BgL_res1766z00_1871;
				}
				{	/* Ast/shrinkify.scm 46 */
					obj_t BgL_xz00_2128;

					BgL_xz00_2128 =
						PROCEDURE_ENTRY(BgL_method1248z00_1396) (BgL_method1248z00_1396,
						((obj_t) BgL_nodez00_5), BEOA);
					return BUNSPEC;
				}
			}
		}

	}



/* &shrink-node! */
	obj_t BGl_z62shrinkzd2nodez12za2zzast_shrinkifyz00(obj_t BgL_envz00_2063,
		obj_t BgL_nodez00_2064)
	{
		{	/* Ast/shrinkify.scm 46 */
			return
				BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				((BgL_nodez00_bglt) BgL_nodez00_2064));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_shrinkifyz00()
	{
		{	/* Ast/shrinkify.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_atomz00zzast_nodez00, BGl_proc1804z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_varz00zzast_nodez00, BGl_proc1806z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_kwotez00zzast_nodez00, BGl_proc1807z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1808z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_syncz00zzast_nodez00, BGl_proc1809z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_appz00zzast_nodez00, BGl_proc1810z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1811z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_funcallz00zzast_nodez00, BGl_proc1812z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_externz00zzast_nodez00, BGl_proc1813z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_castz00zzast_nodez00, BGl_proc1814z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_setqz00zzast_nodez00, BGl_proc1815z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1816z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_failz00zzast_nodez00, BGl_proc1817z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_switchz00zzast_nodez00, BGl_proc1818z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1819z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1820z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1821z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1822z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1823z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1824z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shrinkzd2nodez12zd2envz12zzast_shrinkifyz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1825z00zzast_shrinkifyz00,
				BGl_string1805z00zzast_shrinkifyz00);
		}

	}



/* &shrink-node!-jump-ex1291 */
	obj_t BGl_z62shrinkzd2nodez12zd2jumpzd2ex1291za2zzast_shrinkifyz00(obj_t
		BgL_envz00_2086, obj_t BgL_nodez00_2087)
	{
		{	/* Ast/shrinkify.scm 222 */
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2087)))->BgL_exitz00));
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2087)))->BgL_valuez00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-set-ex-1289 */
	obj_t BGl_z62shrinkzd2nodez12zd2setzd2exzd21289z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2088, obj_t BgL_nodez00_2089)
	{
		{	/* Ast/shrinkify.scm 213 */
			{	/* Ast/shrinkify.scm 215 */
				BgL_varz00_bglt BgL_arg1565z00_2164;

				BgL_arg1565z00_2164 =
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2089)))->BgL_varz00);
				BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
					((BgL_nodez00_bglt) BgL_arg1565z00_2164));
			}
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2089)))->BgL_bodyz00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-let-var1287 */
	obj_t BGl_z62shrinkzd2nodez12zd2letzd2var1287za2zzast_shrinkifyz00(obj_t
		BgL_envz00_2090, obj_t BgL_nodez00_2091)
	{
		{	/* Ast/shrinkify.scm 201 */
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2091)))->BgL_bodyz00));
			{	/* Ast/shrinkify.scm 204 */
				obj_t BgL_g1242z00_2166;

				BgL_g1242z00_2166 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2091)))->BgL_bindingsz00);
				{
					obj_t BgL_l1240z00_2168;

					BgL_l1240z00_2168 = BgL_g1242z00_2166;
				BgL_zc3z04anonymousza31553ze3z87_2167:
					if (PAIRP(BgL_l1240z00_2168))
						{	/* Ast/shrinkify.scm 204 */
							{	/* Ast/shrinkify.scm 205 */
								obj_t BgL_bindingz00_2169;

								BgL_bindingz00_2169 = CAR(BgL_l1240z00_2168);
								{	/* Ast/shrinkify.scm 205 */
									obj_t BgL_arg1558z00_2170;

									BgL_arg1558z00_2170 = CAR(((obj_t) BgL_bindingz00_2169));
									BGl_shrinkzd2variablez12zc0zzast_shrinkifyz00(
										((BgL_variablez00_bglt) BgL_arg1558z00_2170));
								}
								{	/* Ast/shrinkify.scm 206 */
									obj_t BgL_arg1561z00_2171;

									BgL_arg1561z00_2171 = CDR(((obj_t) BgL_bindingz00_2169));
									BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
										((BgL_nodez00_bglt) BgL_arg1561z00_2171));
								}
							}
							{
								obj_t BgL_l1240z00_2505;

								BgL_l1240z00_2505 = CDR(BgL_l1240z00_2168);
								BgL_l1240z00_2168 = BgL_l1240z00_2505;
								goto BgL_zc3z04anonymousza31553ze3z87_2167;
							}
						}
					else
						{	/* Ast/shrinkify.scm 204 */
							((bool_t) 1);
						}
				}
			}
			return BUNSPEC;
		}

	}



/* &shrink-node!-let-fun1285 */
	obj_t BGl_z62shrinkzd2nodez12zd2letzd2fun1285za2zzast_shrinkifyz00(obj_t
		BgL_envz00_2092, obj_t BgL_nodez00_2093)
	{
		{	/* Ast/shrinkify.scm 187 */
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2093)))->BgL_bodyz00));
			{	/* Ast/shrinkify.scm 190 */
				obj_t BgL_g1239z00_2173;

				BgL_g1239z00_2173 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2093)))->BgL_localsz00);
				{
					obj_t BgL_l1237z00_2175;

					BgL_l1237z00_2175 = BgL_g1239z00_2173;
				BgL_zc3z04anonymousza31522ze3z87_2174:
					if (PAIRP(BgL_l1237z00_2175))
						{	/* Ast/shrinkify.scm 190 */
							{	/* Ast/shrinkify.scm 191 */
								obj_t BgL_localz00_2176;

								BgL_localz00_2176 = CAR(BgL_l1237z00_2175);
								{	/* Ast/shrinkify.scm 191 */
									BgL_valuez00_bglt BgL_sfunz00_2177;

									BgL_sfunz00_2177 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2176))))->
										BgL_valuez00);
									BGl_shrinkzd2variablez12zc0zzast_shrinkifyz00((
											(BgL_variablez00_bglt) BgL_localz00_2176));
									{	/* Ast/shrinkify.scm 193 */
										obj_t BgL_g1236z00_2178;

										BgL_g1236z00_2178 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_sfunz00_2177)))->BgL_argsz00);
										{
											obj_t BgL_l1234z00_2180;

											BgL_l1234z00_2180 = BgL_g1236z00_2178;
										BgL_zc3z04anonymousza31524ze3z87_2179:
											if (PAIRP(BgL_l1234z00_2180))
												{	/* Ast/shrinkify.scm 193 */
													{	/* Ast/shrinkify.scm 193 */
														obj_t BgL_arg1528z00_2181;

														BgL_arg1528z00_2181 = CAR(BgL_l1234z00_2180);
														BGl_shrinkzd2variablez12zc0zzast_shrinkifyz00(
															((BgL_variablez00_bglt) BgL_arg1528z00_2181));
													}
													{
														obj_t BgL_l1234z00_2527;

														BgL_l1234z00_2527 = CDR(BgL_l1234z00_2180);
														BgL_l1234z00_2180 = BgL_l1234z00_2527;
														goto BgL_zc3z04anonymousza31524ze3z87_2179;
													}
												}
											else
												{	/* Ast/shrinkify.scm 193 */
													((bool_t) 1);
												}
										}
									}
									{	/* Ast/shrinkify.scm 194 */
										obj_t BgL_arg1537z00_2182;

										BgL_arg1537z00_2182 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_sfunz00_2177)))->BgL_bodyz00);
										BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
											((BgL_nodez00_bglt) BgL_arg1537z00_2182));
									}
								}
							}
							{
								obj_t BgL_l1237z00_2533;

								BgL_l1237z00_2533 = CDR(BgL_l1237z00_2175);
								BgL_l1237z00_2175 = BgL_l1237z00_2533;
								goto BgL_zc3z04anonymousza31522ze3z87_2174;
							}
						}
					else
						{	/* Ast/shrinkify.scm 190 */
							((bool_t) 1);
						}
				}
			}
			return BUNSPEC;
		}

	}



/* &shrink-node!-box-set1283 */
	obj_t BGl_z62shrinkzd2nodez12zd2boxzd2set1283za2zzast_shrinkifyz00(obj_t
		BgL_envz00_2094, obj_t BgL_nodez00_2095)
	{
		{	/* Ast/shrinkify.scm 178 */
			{	/* Ast/shrinkify.scm 179 */
				bool_t BgL_test1873z00_2535;

				{	/* Ast/shrinkify.scm 179 */
					bool_t BgL_res1792z00_2184;

					{	/* Ast/shrinkify.scm 179 */
						obj_t BgL_tmpz00_2536;

						{	/* Ast/shrinkify.scm 179 */
							BgL_objectz00_bglt BgL_tmpz00_2537;

							BgL_tmpz00_2537 =
								((BgL_objectz00_bglt)
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2095));
							BgL_tmpz00_2536 = BGL_OBJECT_WIDENING(BgL_tmpz00_2537);
						}
						BgL_res1792z00_2184 = CBOOL(BgL_tmpz00_2536);
					}
					BgL_test1873z00_2535 = BgL_res1792z00_2184;
				}
				if (BgL_test1873z00_2535)
					{	/* Ast/shrinkify.scm 179 */
						{	/* Ast/shrinkify.scm 179 */
							long BgL_arg1489z00_2185;

							{	/* Ast/shrinkify.scm 179 */
								obj_t BgL_arg1493z00_2186;

								{	/* Ast/shrinkify.scm 179 */
									obj_t BgL_arg1495z00_2187;

									{	/* Ast/shrinkify.scm 179 */
										long BgL_arg1816z00_2188;

										{	/* Ast/shrinkify.scm 179 */
											long BgL_arg1817z00_2189;

											{	/* Ast/shrinkify.scm 179 */
												long BgL_res1793z00_2190;

												BgL_res1793z00_2190 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt)
														((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2095)));
												BgL_arg1817z00_2189 = BgL_res1793z00_2190;
											}
											BgL_arg1816z00_2188 = (BgL_arg1817z00_2189 - OBJECT_TYPE);
										}
										BgL_arg1495z00_2187 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg1816z00_2188);
									}
									BgL_arg1493z00_2186 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg1495z00_2187);
								}
								{	/* Ast/shrinkify.scm 179 */
									long BgL_res1795z00_2191;

									{	/* Ast/shrinkify.scm 179 */
										obj_t BgL_tmpz00_2548;

										BgL_tmpz00_2548 = ((obj_t) BgL_arg1493z00_2186);
										BgL_res1795z00_2191 = BGL_CLASS_INDEX(BgL_tmpz00_2548);
									}
									BgL_arg1489z00_2185 = BgL_res1795z00_2191;
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2095)),
								BgL_arg1489z00_2185);
						}
						{	/* Ast/shrinkify.scm 179 */
							BgL_objectz00_bglt BgL_tmpz00_2554;

							BgL_tmpz00_2554 =
								((BgL_objectz00_bglt)
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2095));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2554, BFALSE);
						}
						((BgL_objectz00_bglt)
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2095));
						((obj_t) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2095));
					}
				else
					{	/* Ast/shrinkify.scm 179 */
						BFALSE;
					}
			}
			{	/* Ast/shrinkify.scm 180 */
				BgL_varz00_bglt BgL_arg1497z00_2192;

				BgL_arg1497z00_2192 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2095)))->BgL_varz00);
				BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
					((BgL_nodez00_bglt) BgL_arg1497z00_2192));
			}
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2095)))->BgL_valuez00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-box-ref1281 */
	obj_t BGl_z62shrinkzd2nodez12zd2boxzd2ref1281za2zzast_shrinkifyz00(obj_t
		BgL_envz00_2096, obj_t BgL_nodez00_2097)
	{
		{	/* Ast/shrinkify.scm 170 */
			{	/* Ast/shrinkify.scm 171 */
				bool_t BgL_test1874z00_2569;

				{	/* Ast/shrinkify.scm 171 */
					bool_t BgL_res1788z00_2194;

					{	/* Ast/shrinkify.scm 171 */
						obj_t BgL_tmpz00_2570;

						{	/* Ast/shrinkify.scm 171 */
							BgL_objectz00_bglt BgL_tmpz00_2571;

							BgL_tmpz00_2571 =
								((BgL_objectz00_bglt)
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2097));
							BgL_tmpz00_2570 = BGL_OBJECT_WIDENING(BgL_tmpz00_2571);
						}
						BgL_res1788z00_2194 = CBOOL(BgL_tmpz00_2570);
					}
					BgL_test1874z00_2569 = BgL_res1788z00_2194;
				}
				if (BgL_test1874z00_2569)
					{	/* Ast/shrinkify.scm 171 */
						{	/* Ast/shrinkify.scm 171 */
							long BgL_arg1464z00_2195;

							{	/* Ast/shrinkify.scm 171 */
								obj_t BgL_arg1465z00_2196;

								{	/* Ast/shrinkify.scm 171 */
									obj_t BgL_arg1474z00_2197;

									{	/* Ast/shrinkify.scm 171 */
										long BgL_arg1816z00_2198;

										{	/* Ast/shrinkify.scm 171 */
											long BgL_arg1817z00_2199;

											{	/* Ast/shrinkify.scm 171 */
												long BgL_res1789z00_2200;

												BgL_res1789z00_2200 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt)
														((BgL_boxzd2refzd2_bglt) BgL_nodez00_2097)));
												BgL_arg1817z00_2199 = BgL_res1789z00_2200;
											}
											BgL_arg1816z00_2198 = (BgL_arg1817z00_2199 - OBJECT_TYPE);
										}
										BgL_arg1474z00_2197 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg1816z00_2198);
									}
									BgL_arg1465z00_2196 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg1474z00_2197);
								}
								{	/* Ast/shrinkify.scm 171 */
									long BgL_res1791z00_2201;

									{	/* Ast/shrinkify.scm 171 */
										obj_t BgL_tmpz00_2582;

										BgL_tmpz00_2582 = ((obj_t) BgL_arg1465z00_2196);
										BgL_res1791z00_2201 = BGL_CLASS_INDEX(BgL_tmpz00_2582);
									}
									BgL_arg1464z00_2195 = BgL_res1791z00_2201;
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_2097)),
								BgL_arg1464z00_2195);
						}
						{	/* Ast/shrinkify.scm 171 */
							BgL_objectz00_bglt BgL_tmpz00_2588;

							BgL_tmpz00_2588 =
								((BgL_objectz00_bglt)
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2097));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2588, BFALSE);
						}
						((BgL_objectz00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2097));
						((obj_t) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2097));
					}
				else
					{	/* Ast/shrinkify.scm 171 */
						BFALSE;
					}
			}
			{	/* Ast/shrinkify.scm 172 */
				BgL_varz00_bglt BgL_arg1476z00_2202;

				BgL_arg1476z00_2202 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_2097)))->BgL_varz00);
				BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
					((BgL_nodez00_bglt) BgL_arg1476z00_2202));
			}
			return BUNSPEC;
		}

	}



/* &shrink-node!-make-bo1279 */
	obj_t BGl_z62shrinkzd2nodez12zd2makezd2bo1279za2zzast_shrinkifyz00(obj_t
		BgL_envz00_2098, obj_t BgL_nodez00_2099)
	{
		{	/* Ast/shrinkify.scm 162 */
			{	/* Ast/shrinkify.scm 163 */
				bool_t BgL_test1875z00_2600;

				{	/* Ast/shrinkify.scm 163 */
					bool_t BgL_res1784z00_2204;

					{	/* Ast/shrinkify.scm 163 */
						obj_t BgL_tmpz00_2601;

						{	/* Ast/shrinkify.scm 163 */
							BgL_objectz00_bglt BgL_tmpz00_2602;

							BgL_tmpz00_2602 =
								((BgL_objectz00_bglt)
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2099));
							BgL_tmpz00_2601 = BGL_OBJECT_WIDENING(BgL_tmpz00_2602);
						}
						BgL_res1784z00_2204 = CBOOL(BgL_tmpz00_2601);
					}
					BgL_test1875z00_2600 = BgL_res1784z00_2204;
				}
				if (BgL_test1875z00_2600)
					{	/* Ast/shrinkify.scm 163 */
						{	/* Ast/shrinkify.scm 163 */
							long BgL_arg1448z00_2205;

							{	/* Ast/shrinkify.scm 163 */
								obj_t BgL_arg1449z00_2206;

								{	/* Ast/shrinkify.scm 163 */
									obj_t BgL_arg1461z00_2207;

									{	/* Ast/shrinkify.scm 163 */
										long BgL_arg1816z00_2208;

										{	/* Ast/shrinkify.scm 163 */
											long BgL_arg1817z00_2209;

											{	/* Ast/shrinkify.scm 163 */
												long BgL_res1785z00_2210;

												BgL_res1785z00_2210 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt)
														((BgL_makezd2boxzd2_bglt) BgL_nodez00_2099)));
												BgL_arg1817z00_2209 = BgL_res1785z00_2210;
											}
											BgL_arg1816z00_2208 = (BgL_arg1817z00_2209 - OBJECT_TYPE);
										}
										BgL_arg1461z00_2207 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg1816z00_2208);
									}
									BgL_arg1449z00_2206 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg1461z00_2207);
								}
								{	/* Ast/shrinkify.scm 163 */
									long BgL_res1787z00_2211;

									{	/* Ast/shrinkify.scm 163 */
										obj_t BgL_tmpz00_2613;

										BgL_tmpz00_2613 = ((obj_t) BgL_arg1449z00_2206);
										BgL_res1787z00_2211 = BGL_CLASS_INDEX(BgL_tmpz00_2613);
									}
									BgL_arg1448z00_2205 = BgL_res1787z00_2211;
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_makezd2boxzd2_bglt) BgL_nodez00_2099)),
								BgL_arg1448z00_2205);
						}
						{	/* Ast/shrinkify.scm 163 */
							BgL_objectz00_bglt BgL_tmpz00_2619;

							BgL_tmpz00_2619 =
								((BgL_objectz00_bglt)
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2099));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2619, BFALSE);
						}
						((BgL_objectz00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2099));
						((obj_t) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2099));
					}
				else
					{	/* Ast/shrinkify.scm 163 */
						BFALSE;
					}
			}
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2099)))->BgL_valuez00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-switch1277 */
	obj_t BGl_z62shrinkzd2nodez12zd2switch1277z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2100, obj_t BgL_nodez00_2101)
	{
		{	/* Ast/shrinkify.scm 152 */
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2101)))->BgL_testz00));
			{	/* Ast/shrinkify.scm 154 */
				obj_t BgL_g1233z00_2213;

				BgL_g1233z00_2213 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2101)))->BgL_clausesz00);
				{
					obj_t BgL_l1231z00_2215;

					BgL_l1231z00_2215 = BgL_g1233z00_2213;
				BgL_zc3z04anonymousza31422ze3z87_2214:
					if (PAIRP(BgL_l1231z00_2215))
						{	/* Ast/shrinkify.scm 156 */
							{	/* Ast/shrinkify.scm 155 */
								obj_t BgL_clausez00_2216;

								BgL_clausez00_2216 = CAR(BgL_l1231z00_2215);
								{	/* Ast/shrinkify.scm 155 */
									obj_t BgL_arg1441z00_2217;

									BgL_arg1441z00_2217 = CDR(((obj_t) BgL_clausez00_2216));
									BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
										((BgL_nodez00_bglt) BgL_arg1441z00_2217));
								}
							}
							{
								obj_t BgL_l1231z00_2642;

								BgL_l1231z00_2642 = CDR(BgL_l1231z00_2215);
								BgL_l1231z00_2215 = BgL_l1231z00_2642;
								goto BgL_zc3z04anonymousza31422ze3z87_2214;
							}
						}
					else
						{	/* Ast/shrinkify.scm 156 */
							((bool_t) 1);
						}
				}
			}
			return BUNSPEC;
		}

	}



/* &shrink-node!-fail1275 */
	obj_t BGl_z62shrinkzd2nodez12zd2fail1275z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2102, obj_t BgL_nodez00_2103)
	{
		{	/* Ast/shrinkify.scm 143 */
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2103)))->BgL_procz00));
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2103)))->BgL_msgz00));
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2103)))->BgL_objz00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-conditi1273 */
	obj_t BGl_z62shrinkzd2nodez12zd2conditi1273z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2104, obj_t BgL_nodez00_2105)
	{
		{	/* Ast/shrinkify.scm 134 */
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2105)))->BgL_testz00));
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2105)))->BgL_truez00));
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2105)))->BgL_falsez00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-setq1270 */
	obj_t BGl_z62shrinkzd2nodez12zd2setq1270z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2106, obj_t BgL_nodez00_2107)
	{
		{	/* Ast/shrinkify.scm 127 */
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2107)))->BgL_valuez00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-cast1268 */
	obj_t BGl_z62shrinkzd2nodez12zd2cast1268z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2108, obj_t BgL_nodez00_2109)
	{
		{	/* Ast/shrinkify.scm 120 */
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2109)))->BgL_argz00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-extern1266 */
	obj_t BGl_z62shrinkzd2nodez12zd2extern1266z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2110, obj_t BgL_nodez00_2111)
	{
		{	/* Ast/shrinkify.scm 112 */
			{	/* Ast/shrinkify.scm 113 */
				bool_t BgL_test1877z00_2668;

				{	/* Ast/shrinkify.scm 113 */
					bool_t BgL_res1779z00_2223;

					{	/* Ast/shrinkify.scm 113 */
						obj_t BgL_tmpz00_2669;

						{	/* Ast/shrinkify.scm 113 */
							BgL_objectz00_bglt BgL_tmpz00_2670;

							BgL_tmpz00_2670 =
								((BgL_objectz00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2111));
							BgL_tmpz00_2669 = BGL_OBJECT_WIDENING(BgL_tmpz00_2670);
						}
						BgL_res1779z00_2223 = CBOOL(BgL_tmpz00_2669);
					}
					BgL_test1877z00_2668 = BgL_res1779z00_2223;
				}
				if (BgL_test1877z00_2668)
					{	/* Ast/shrinkify.scm 113 */
						{	/* Ast/shrinkify.scm 113 */
							long BgL_arg1381z00_2224;

							{	/* Ast/shrinkify.scm 113 */
								obj_t BgL_arg1382z00_2225;

								{	/* Ast/shrinkify.scm 113 */
									obj_t BgL_arg1383z00_2226;

									{	/* Ast/shrinkify.scm 113 */
										long BgL_arg1816z00_2227;

										{	/* Ast/shrinkify.scm 113 */
											long BgL_arg1817z00_2228;

											{	/* Ast/shrinkify.scm 113 */
												long BgL_res1780z00_2229;

												BgL_res1780z00_2229 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt)
														((BgL_externz00_bglt) BgL_nodez00_2111)));
												BgL_arg1817z00_2228 = BgL_res1780z00_2229;
											}
											BgL_arg1816z00_2227 = (BgL_arg1817z00_2228 - OBJECT_TYPE);
										}
										BgL_arg1383z00_2226 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg1816z00_2227);
									}
									BgL_arg1382z00_2225 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg1383z00_2226);
								}
								{	/* Ast/shrinkify.scm 113 */
									long BgL_res1782z00_2230;

									{	/* Ast/shrinkify.scm 113 */
										obj_t BgL_tmpz00_2681;

										BgL_tmpz00_2681 = ((obj_t) BgL_arg1382z00_2225);
										BgL_res1782z00_2230 = BGL_CLASS_INDEX(BgL_tmpz00_2681);
									}
									BgL_arg1381z00_2224 = BgL_res1782z00_2230;
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_externz00_bglt) BgL_nodez00_2111)),
								BgL_arg1381z00_2224);
						}
						{	/* Ast/shrinkify.scm 113 */
							BgL_objectz00_bglt BgL_tmpz00_2687;

							BgL_tmpz00_2687 =
								((BgL_objectz00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2111));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2687, BFALSE);
						}
						((BgL_objectz00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2111));
						((obj_t) ((BgL_externz00_bglt) BgL_nodez00_2111));
					}
				else
					{	/* Ast/shrinkify.scm 113 */
						BFALSE;
					}
			}
			BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2111)))->BgL_exprza2za2));
			return BUNSPEC;
		}

	}



/* &shrink-node!-funcall1264 */
	obj_t BGl_z62shrinkzd2nodez12zd2funcall1264z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2112, obj_t BgL_nodez00_2113)
	{
		{	/* Ast/shrinkify.scm 103 */
			{	/* Ast/shrinkify.scm 104 */
				bool_t BgL_test1878z00_2698;

				{	/* Ast/shrinkify.scm 104 */
					bool_t BgL_res1775z00_2232;

					{	/* Ast/shrinkify.scm 104 */
						obj_t BgL_tmpz00_2699;

						{	/* Ast/shrinkify.scm 104 */
							BgL_objectz00_bglt BgL_tmpz00_2700;

							BgL_tmpz00_2700 =
								((BgL_objectz00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2113));
							BgL_tmpz00_2699 = BGL_OBJECT_WIDENING(BgL_tmpz00_2700);
						}
						BgL_res1775z00_2232 = CBOOL(BgL_tmpz00_2699);
					}
					BgL_test1878z00_2698 = BgL_res1775z00_2232;
				}
				if (BgL_test1878z00_2698)
					{	/* Ast/shrinkify.scm 104 */
						{	/* Ast/shrinkify.scm 104 */
							long BgL_arg1363z00_2233;

							{	/* Ast/shrinkify.scm 104 */
								obj_t BgL_arg1364z00_2234;

								{	/* Ast/shrinkify.scm 104 */
									obj_t BgL_arg1367z00_2235;

									{	/* Ast/shrinkify.scm 104 */
										long BgL_arg1816z00_2236;

										{	/* Ast/shrinkify.scm 104 */
											long BgL_arg1817z00_2237;

											{	/* Ast/shrinkify.scm 104 */
												long BgL_res1776z00_2238;

												BgL_res1776z00_2238 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt)
														((BgL_funcallz00_bglt) BgL_nodez00_2113)));
												BgL_arg1817z00_2237 = BgL_res1776z00_2238;
											}
											BgL_arg1816z00_2236 = (BgL_arg1817z00_2237 - OBJECT_TYPE);
										}
										BgL_arg1367z00_2235 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg1816z00_2236);
									}
									BgL_arg1364z00_2234 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg1367z00_2235);
								}
								{	/* Ast/shrinkify.scm 104 */
									long BgL_res1778z00_2239;

									{	/* Ast/shrinkify.scm 104 */
										obj_t BgL_tmpz00_2711;

										BgL_tmpz00_2711 = ((obj_t) BgL_arg1364z00_2234);
										BgL_res1778z00_2239 = BGL_CLASS_INDEX(BgL_tmpz00_2711);
									}
									BgL_arg1363z00_2233 = BgL_res1778z00_2239;
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_funcallz00_bglt) BgL_nodez00_2113)),
								BgL_arg1363z00_2233);
						}
						{	/* Ast/shrinkify.scm 104 */
							BgL_objectz00_bglt BgL_tmpz00_2717;

							BgL_tmpz00_2717 =
								((BgL_objectz00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2113));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2717, BFALSE);
						}
						((BgL_objectz00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2113));
						((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_2113));
					}
				else
					{	/* Ast/shrinkify.scm 104 */
						BFALSE;
					}
			}
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2113)))->BgL_funz00));
			BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2113)))->BgL_argsz00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-app-ly1262 */
	obj_t BGl_z62shrinkzd2nodez12zd2appzd2ly1262za2zzast_shrinkifyz00(obj_t
		BgL_envz00_2114, obj_t BgL_nodez00_2115)
	{
		{	/* Ast/shrinkify.scm 94 */
			{	/* Ast/shrinkify.scm 95 */
				bool_t BgL_test1879z00_2731;

				{	/* Ast/shrinkify.scm 95 */
					bool_t BgL_res1771z00_2241;

					{	/* Ast/shrinkify.scm 95 */
						obj_t BgL_tmpz00_2732;

						{	/* Ast/shrinkify.scm 95 */
							BgL_objectz00_bglt BgL_tmpz00_2733;

							BgL_tmpz00_2733 =
								((BgL_objectz00_bglt)
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2115));
							BgL_tmpz00_2732 = BGL_OBJECT_WIDENING(BgL_tmpz00_2733);
						}
						BgL_res1771z00_2241 = CBOOL(BgL_tmpz00_2732);
					}
					BgL_test1879z00_2731 = BgL_res1771z00_2241;
				}
				if (BgL_test1879z00_2731)
					{	/* Ast/shrinkify.scm 95 */
						{	/* Ast/shrinkify.scm 95 */
							long BgL_arg1351z00_2242;

							{	/* Ast/shrinkify.scm 95 */
								obj_t BgL_arg1352z00_2243;

								{	/* Ast/shrinkify.scm 95 */
									obj_t BgL_arg1357z00_2244;

									{	/* Ast/shrinkify.scm 95 */
										long BgL_arg1816z00_2245;

										{	/* Ast/shrinkify.scm 95 */
											long BgL_arg1817z00_2246;

											{	/* Ast/shrinkify.scm 95 */
												long BgL_res1772z00_2247;

												BgL_res1772z00_2247 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt)
														((BgL_appzd2lyzd2_bglt) BgL_nodez00_2115)));
												BgL_arg1817z00_2246 = BgL_res1772z00_2247;
											}
											BgL_arg1816z00_2245 = (BgL_arg1817z00_2246 - OBJECT_TYPE);
										}
										BgL_arg1357z00_2244 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg1816z00_2245);
									}
									BgL_arg1352z00_2243 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg1357z00_2244);
								}
								{	/* Ast/shrinkify.scm 95 */
									long BgL_res1774z00_2248;

									{	/* Ast/shrinkify.scm 95 */
										obj_t BgL_tmpz00_2744;

										BgL_tmpz00_2744 = ((obj_t) BgL_arg1352z00_2243);
										BgL_res1774z00_2248 = BGL_CLASS_INDEX(BgL_tmpz00_2744);
									}
									BgL_arg1351z00_2242 = BgL_res1774z00_2248;
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_appzd2lyzd2_bglt) BgL_nodez00_2115)),
								BgL_arg1351z00_2242);
						}
						{	/* Ast/shrinkify.scm 95 */
							BgL_objectz00_bglt BgL_tmpz00_2750;

							BgL_tmpz00_2750 =
								((BgL_objectz00_bglt)
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2115));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2750, BFALSE);
						}
						((BgL_objectz00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2115));
						((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2115));
					}
				else
					{	/* Ast/shrinkify.scm 95 */
						BFALSE;
					}
			}
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2115)))->BgL_funz00));
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2115)))->BgL_argz00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-app1260 */
	obj_t BGl_z62shrinkzd2nodez12zd2app1260z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2116, obj_t BgL_nodez00_2117)
	{
		{	/* Ast/shrinkify.scm 85 */
			{	/* Ast/shrinkify.scm 86 */
				bool_t BgL_test1880z00_2764;

				{	/* Ast/shrinkify.scm 86 */
					bool_t BgL_res1767z00_2250;

					{	/* Ast/shrinkify.scm 86 */
						obj_t BgL_tmpz00_2765;

						{	/* Ast/shrinkify.scm 86 */
							BgL_objectz00_bglt BgL_tmpz00_2766;

							BgL_tmpz00_2766 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2117));
							BgL_tmpz00_2765 = BGL_OBJECT_WIDENING(BgL_tmpz00_2766);
						}
						BgL_res1767z00_2250 = CBOOL(BgL_tmpz00_2765);
					}
					BgL_test1880z00_2764 = BgL_res1767z00_2250;
				}
				if (BgL_test1880z00_2764)
					{	/* Ast/shrinkify.scm 86 */
						{	/* Ast/shrinkify.scm 86 */
							long BgL_arg1337z00_2251;

							{	/* Ast/shrinkify.scm 86 */
								obj_t BgL_arg1338z00_2252;

								{	/* Ast/shrinkify.scm 86 */
									obj_t BgL_arg1339z00_2253;

									{	/* Ast/shrinkify.scm 86 */
										long BgL_arg1816z00_2254;

										{	/* Ast/shrinkify.scm 86 */
											long BgL_arg1817z00_2255;

											{	/* Ast/shrinkify.scm 86 */
												long BgL_res1768z00_2256;

												BgL_res1768z00_2256 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt)
														((BgL_appz00_bglt) BgL_nodez00_2117)));
												BgL_arg1817z00_2255 = BgL_res1768z00_2256;
											}
											BgL_arg1816z00_2254 = (BgL_arg1817z00_2255 - OBJECT_TYPE);
										}
										BgL_arg1339z00_2253 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg1816z00_2254);
									}
									BgL_arg1338z00_2252 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg1339z00_2253);
								}
								{	/* Ast/shrinkify.scm 86 */
									long BgL_res1770z00_2257;

									{	/* Ast/shrinkify.scm 86 */
										obj_t BgL_tmpz00_2777;

										BgL_tmpz00_2777 = ((obj_t) BgL_arg1338z00_2252);
										BgL_res1770z00_2257 = BGL_CLASS_INDEX(BgL_tmpz00_2777);
									}
									BgL_arg1337z00_2251 = BgL_res1770z00_2257;
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_appz00_bglt) BgL_nodez00_2117)), BgL_arg1337z00_2251);
						}
						{	/* Ast/shrinkify.scm 86 */
							BgL_objectz00_bglt BgL_tmpz00_2783;

							BgL_tmpz00_2783 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2117));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2783, BFALSE);
						}
						((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2117));
						((obj_t) ((BgL_appz00_bglt) BgL_nodez00_2117));
					}
				else
					{	/* Ast/shrinkify.scm 86 */
						BFALSE;
					}
			}
			{	/* Ast/shrinkify.scm 87 */
				BgL_varz00_bglt BgL_arg1340z00_2258;

				BgL_arg1340z00_2258 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2117)))->BgL_funz00);
				BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
					((BgL_nodez00_bglt) BgL_arg1340z00_2258));
			}
			BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2117)))->BgL_argsz00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-sync1258 */
	obj_t BGl_z62shrinkzd2nodez12zd2sync1258z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2118, obj_t BgL_nodez00_2119)
	{
		{	/* Ast/shrinkify.scm 76 */
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2119)))->BgL_mutexz00));
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2119)))->BgL_prelockz00));
			BGl_shrinkzd2nodez12zc0zzast_shrinkifyz00(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2119)))->BgL_bodyz00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-sequenc1256 */
	obj_t BGl_z62shrinkzd2nodez12zd2sequenc1256z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2120, obj_t BgL_nodez00_2121)
	{
		{	/* Ast/shrinkify.scm 69 */
			BGl_shrinkzd2nodeza2z12z62zzast_shrinkifyz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2121)))->BgL_nodesz00));
			return BUNSPEC;
		}

	}



/* &shrink-node!-kwote1254 */
	obj_t BGl_z62shrinkzd2nodez12zd2kwote1254z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2122, obj_t BgL_nodez00_2123)
	{
		{	/* Ast/shrinkify.scm 63 */
			return BUNSPEC;
		}

	}



/* &shrink-node!-var1252 */
	obj_t BGl_z62shrinkzd2nodez12zd2var1252z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2124, obj_t BgL_nodez00_2125)
	{
		{	/* Ast/shrinkify.scm 57 */
			return BUNSPEC;
		}

	}



/* &shrink-node!-atom1250 */
	obj_t BGl_z62shrinkzd2nodez12zd2atom1250z70zzast_shrinkifyz00(obj_t
		BgL_envz00_2126, obj_t BgL_nodez00_2127)
	{
		{	/* Ast/shrinkify.scm 51 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_shrinkifyz00()
	{
		{	/* Ast/shrinkify.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1826z00zzast_shrinkifyz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1826z00zzast_shrinkifyz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1826z00zzast_shrinkifyz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1826z00zzast_shrinkifyz00));
		}

	}

#ifdef __cplusplus
}
#endif
