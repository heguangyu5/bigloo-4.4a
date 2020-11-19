/*===========================================================================*/
/*   (Bdb/spread_obj.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Bdb/spread_obj.scm) */
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


	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2fai1266za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzbdb_spreadzd2objzd2();
	static obj_t
		BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(BgL_nodez00_bglt);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzbdb_spreadzd2objzd2();
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2jum1277za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbdb_spreadzd2objzd2();
	static obj_t BGl_z62spreadzd2objzd2nodez121245z70zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2mak1279za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62bdbzd2spreadzd2objz12z70zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2swi1268za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbdb_spreadzd2objzd2 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_spreadzd2objzd2funz12z12zzbdb_spreadzd2objzd2(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzbdb_spreadzd2objzd2();
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2seq1248za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzbdb_spreadzd2objzd2();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2let1270za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2let1273za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2app1252za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2app1254za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2con1264za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_z62spreadzd2objzd2nodez12z70zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2box1281za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2box1283za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	static obj_t BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2set1262za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbdb_spreadzd2objzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
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
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2set1275za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzbdb_spreadzd2objzd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbdb_spreadzd2objzd2();
	static obj_t BGl_importedzd2moduleszd2initz00zzbdb_spreadzd2objzd2();
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2cas1260za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2fun1256za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2ext1258za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62spreadzd2objzd2nodez12zd2syn1250za2zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2(obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1730z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71757za7,
		BGl_z62spreadzd2objzd2nodez121245z70zzbdb_spreadzd2objzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1732z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71758za7,
		BGl_z62spreadzd2objzd2nodez12zd2seq1248za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1734z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71759za7,
		BGl_z62spreadzd2objzd2nodez12zd2syn1250za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1735z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71760za7,
		BGl_z62spreadzd2objzd2nodez12zd2app1252za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1736z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71761za7,
		BGl_z62spreadzd2objzd2nodez12zd2app1254za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1737z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71762za7,
		BGl_z62spreadzd2objzd2nodez12zd2fun1256za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1738z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71763za7,
		BGl_z62spreadzd2objzd2nodez12zd2ext1258za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1739z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71764za7,
		BGl_z62spreadzd2objzd2nodez12zd2cas1260za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1740z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71765za7,
		BGl_z62spreadzd2objzd2nodez12zd2set1262za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1741z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71766za7,
		BGl_z62spreadzd2objzd2nodez12zd2con1264za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1742z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71767za7,
		BGl_z62spreadzd2objzd2nodez12zd2fai1266za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1743z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71768za7,
		BGl_z62spreadzd2objzd2nodez12zd2swi1268za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1744z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71769za7,
		BGl_z62spreadzd2objzd2nodez12zd2let1270za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1745z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71770za7,
		BGl_z62spreadzd2objzd2nodez12zd2let1273za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1746z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71771za7,
		BGl_z62spreadzd2objzd2nodez12zd2set1275za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1747z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71772za7,
		BGl_z62spreadzd2objzd2nodez12zd2jum1277za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1748z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71773za7,
		BGl_z62spreadzd2objzd2nodez12zd2mak1279za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1749z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71774za7,
		BGl_z62spreadzd2objzd2nodez12zd2box1281za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1750z00zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71775za7,
		BGl_z62spreadzd2objzd2nodez12zd2box1283za2zzbdb_spreadzd2objzd2, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
		BgL_bgl_za762spreadza7d2objza71776za7,
		BGl_z62spreadzd2objzd2nodez12z70zzbdb_spreadzd2objzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bdbzd2spreadzd2objz12zd2envzc0zzbdb_spreadzd2objzd2,
		BgL_bgl_za762bdbza7d2spreadza71777za7,
		BGl_z62bdbzd2spreadzd2objz12z70zzbdb_spreadzd2objzd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1722z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1722za700za7za7b1778za7, "Bdb (obj spreading)", 19);
	      DEFINE_STRING(BGl_string1723z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1723za700za7za7b1779za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1724z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1724za700za7za7b1780za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1725z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1725za700za7za7b1781za7, " error", 6);
	      DEFINE_STRING(BGl_string1726z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1726za700za7za7b1782za7, "s", 1);
	      DEFINE_STRING(BGl_string1727z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1727za700za7za7b1783za7, "", 0);
	      DEFINE_STRING(BGl_string1728z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1728za700za7za7b1784za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1729z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1729za700za7za7b1785za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1731z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1731za700za7za7b1786za7, "spread-obj-node!1245", 20);
	      DEFINE_STRING(BGl_string1733z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1733za700za7za7b1787za7, "spread-obj-node!", 16);
	      DEFINE_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1751za700za7za7b1788za7, "bdb_spread-obj", 14);
	      DEFINE_STRING(BGl_string1752z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string1752za700za7za7b1789za7, "done pass-started ", 18);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzbdb_spreadzd2objzd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbdb_spreadzd2objzd2(long
		BgL_checksumz00_1949, char *BgL_fromz00_1950)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbdb_spreadzd2objzd2))
				{
					BGl_requirezd2initializa7ationz75zzbdb_spreadzd2objzd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbdb_spreadzd2objzd2();
					BGl_libraryzd2moduleszd2initz00zzbdb_spreadzd2objzd2();
					BGl_cnstzd2initzd2zzbdb_spreadzd2objzd2();
					BGl_importedzd2moduleszd2initz00zzbdb_spreadzd2objzd2();
					BGl_genericzd2initzd2zzbdb_spreadzd2objzd2();
					BGl_methodzd2initzd2zzbdb_spreadzd2objzd2();
					return BGl_toplevelzd2initzd2zzbdb_spreadzd2objzd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbdb_spreadzd2objzd2()
	{
		{	/* Bdb/spread_obj.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"bdb_spread-obj");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbdb_spreadzd2objzd2()
	{
		{	/* Bdb/spread_obj.scm 15 */
			{	/* Bdb/spread_obj.scm 15 */
				obj_t BgL_cportz00_1899;

				{	/* Bdb/spread_obj.scm 15 */
					obj_t BgL_stringz00_1907;

					BgL_stringz00_1907 = BGl_string1752z00zzbdb_spreadzd2objzd2;
					{	/* Bdb/spread_obj.scm 15 */
						obj_t BgL_startz00_1908;

						BgL_startz00_1908 = BINT(((long) 0));
						{	/* Bdb/spread_obj.scm 15 */
							obj_t BgL_endz00_1909;

							BgL_endz00_1909 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1907)));
							{	/* Bdb/spread_obj.scm 15 */

								BgL_cportz00_1899 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1907, BgL_startz00_1908, BgL_endz00_1909);
				}}}}
				{
					long BgL_iz00_1900;

					BgL_iz00_1900 = ((long) 1);
				BgL_loopz00_1901:
					if ((BgL_iz00_1900 == ((long) -1)))
						{	/* Bdb/spread_obj.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Bdb/spread_obj.scm 15 */
							{	/* Bdb/spread_obj.scm 15 */
								obj_t BgL_arg1755z00_1903;

								{	/* Bdb/spread_obj.scm 15 */

									{	/* Bdb/spread_obj.scm 15 */
										obj_t BgL_locationz00_1905;

										BgL_locationz00_1905 = BBOOL(((bool_t) 0));
										{	/* Bdb/spread_obj.scm 15 */

											BgL_arg1755z00_1903 =
												BGl_readz00zz__readerz00(BgL_cportz00_1899,
												BgL_locationz00_1905);
										}
									}
								}
								{	/* Bdb/spread_obj.scm 15 */
									int BgL_tmpz00_1981;

									BgL_tmpz00_1981 = (int) (BgL_iz00_1900);
									CNST_TABLE_SET(BgL_tmpz00_1981, BgL_arg1755z00_1903);
							}}
							{	/* Bdb/spread_obj.scm 15 */
								int BgL_auxz00_1906;

								BgL_auxz00_1906 = (int) ((BgL_iz00_1900 - ((long) 1)));
								{
									long BgL_iz00_1986;

									BgL_iz00_1986 = (long) (BgL_auxz00_1906);
									BgL_iz00_1900 = BgL_iz00_1986;
									goto BgL_loopz00_1901;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbdb_spreadzd2objzd2()
	{
		{	/* Bdb/spread_obj.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbdb_spreadzd2objzd2()
	{
		{	/* Bdb/spread_obj.scm 15 */
			return BUNSPEC;
		}

	}



/* bdb-spread-obj! */
	BGL_EXPORTED_DEF obj_t BGl_bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2(obj_t
		BgL_globalsz00_3)
	{
		{	/* Bdb/spread_obj.scm 30 */
			{	/* Bdb/spread_obj.scm 31 */
				obj_t BgL_list1287z00_1346;

				{	/* Bdb/spread_obj.scm 31 */
					obj_t BgL_arg1288z00_1347;

					{	/* Bdb/spread_obj.scm 31 */
						obj_t BgL_arg1289z00_1348;

						BgL_arg1289z00_1348 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1288z00_1347 =
							MAKE_YOUNG_PAIR(BGl_string1722z00zzbdb_spreadzd2objzd2,
							BgL_arg1289z00_1348);
					}
					BgL_list1287z00_1346 =
						MAKE_YOUNG_PAIR(BGl_string1723z00zzbdb_spreadzd2objzd2,
						BgL_arg1288z00_1347);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1287z00_1346);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1722z00zzbdb_spreadzd2objzd2;
			{	/* Bdb/spread_obj.scm 31 */
				obj_t BgL_g1104z00_1349;

				BgL_g1104z00_1349 = BNIL;
				{
					obj_t BgL_hooksz00_1352;
					obj_t BgL_hnamesz00_1353;

					BgL_hooksz00_1352 = BgL_g1104z00_1349;
					BgL_hnamesz00_1353 = BNIL;
				BgL_zc3z04anonymousza31290ze3z87_1354:
					if (NULLP(BgL_hooksz00_1352))
						{	/* Bdb/spread_obj.scm 31 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Bdb/spread_obj.scm 31 */
							bool_t BgL_test1793z00_1999;

							{	/* Bdb/spread_obj.scm 31 */
								obj_t BgL_fun1298z00_1361;

								BgL_fun1298z00_1361 = CAR(((obj_t) BgL_hooksz00_1352));
								BgL_test1793z00_1999 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1298z00_1361)
									(BgL_fun1298z00_1361, BEOA));
							}
							if (BgL_test1793z00_1999)
								{	/* Bdb/spread_obj.scm 31 */
									obj_t BgL_arg1295z00_1358;
									obj_t BgL_arg1296z00_1359;

									BgL_arg1295z00_1358 = CDR(((obj_t) BgL_hooksz00_1352));
									BgL_arg1296z00_1359 = CDR(((obj_t) BgL_hnamesz00_1353));
									{
										obj_t BgL_hnamesz00_2011;
										obj_t BgL_hooksz00_2010;

										BgL_hooksz00_2010 = BgL_arg1295z00_1358;
										BgL_hnamesz00_2011 = BgL_arg1296z00_1359;
										BgL_hnamesz00_1353 = BgL_hnamesz00_2011;
										BgL_hooksz00_1352 = BgL_hooksz00_2010;
										goto BgL_zc3z04anonymousza31290ze3z87_1354;
									}
								}
							else
								{	/* Bdb/spread_obj.scm 31 */
									obj_t BgL_arg1297z00_1360;

									BgL_arg1297z00_1360 = CAR(((obj_t) BgL_hnamesz00_1353));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1722z00zzbdb_spreadzd2objzd2,
										BGl_string1724z00zzbdb_spreadzd2objzd2,
										BgL_arg1297z00_1360);
								}
						}
				}
			}
			{
				obj_t BgL_l1231z00_1365;

				BgL_l1231z00_1365 = BgL_globalsz00_3;
			BgL_zc3z04anonymousza31300ze3z87_1366:
				if (PAIRP(BgL_l1231z00_1365))
					{	/* Bdb/spread_obj.scm 32 */
						BGl_spreadzd2objzd2funz12z12zzbdb_spreadzd2objzd2(CAR
							(BgL_l1231z00_1365));
						{
							obj_t BgL_l1231z00_2019;

							BgL_l1231z00_2019 = CDR(BgL_l1231z00_1365);
							BgL_l1231z00_1365 = BgL_l1231z00_2019;
							goto BgL_zc3z04anonymousza31300ze3z87_1366;
						}
					}
				else
					{	/* Bdb/spread_obj.scm 32 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Bdb/spread_obj.scm 33 */
					{	/* Bdb/spread_obj.scm 33 */
						obj_t BgL_port1233z00_1373;

						{	/* Bdb/spread_obj.scm 33 */
							obj_t BgL_res1700z00_1735;

							{	/* Bdb/spread_obj.scm 33 */
								obj_t BgL_tmpz00_2024;

								BgL_tmpz00_2024 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1700z00_1735 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2024);
							}
							BgL_port1233z00_1373 = BgL_res1700z00_1735;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1233z00_1373);
						bgl_display_string(BGl_string1725z00zzbdb_spreadzd2objzd2,
							BgL_port1233z00_1373);
						{	/* Bdb/spread_obj.scm 33 */
							obj_t BgL_arg1306z00_1374;

							{	/* Bdb/spread_obj.scm 33 */
								bool_t BgL_test1796z00_2029;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Bdb/spread_obj.scm 33 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Bdb/spread_obj.scm 33 */
												BgL_test1796z00_2029 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Bdb/spread_obj.scm 33 */
												BgL_test1796z00_2029 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Bdb/spread_obj.scm 33 */
										BgL_test1796z00_2029 = ((bool_t) 0);
									}
								if (BgL_test1796z00_2029)
									{	/* Bdb/spread_obj.scm 33 */
										BgL_arg1306z00_1374 =
											BGl_string1726z00zzbdb_spreadzd2objzd2;
									}
								else
									{	/* Bdb/spread_obj.scm 33 */
										BgL_arg1306z00_1374 =
											BGl_string1727z00zzbdb_spreadzd2objzd2;
									}
							}
							bgl_display_obj(BgL_arg1306z00_1374, BgL_port1233z00_1373);
						}
						bgl_display_string(BGl_string1728z00zzbdb_spreadzd2objzd2,
							BgL_port1233z00_1373);
						bgl_display_char(((unsigned char) 10), BgL_port1233z00_1373);
					}
					{	/* Bdb/spread_obj.scm 33 */
						obj_t BgL_list1310z00_1380;

						BgL_list1310z00_1380 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1310z00_1380);
					}
				}
			else
				{	/* Bdb/spread_obj.scm 33 */
					obj_t BgL_g1106z00_1381;

					BgL_g1106z00_1381 = BNIL;
					{
						obj_t BgL_hooksz00_1384;
						obj_t BgL_hnamesz00_1385;

						BgL_hooksz00_1384 = BgL_g1106z00_1381;
						BgL_hnamesz00_1385 = BNIL;
					BgL_zc3z04anonymousza31311ze3z87_1386:
						if (NULLP(BgL_hooksz00_1384))
							{	/* Bdb/spread_obj.scm 33 */
								return BgL_globalsz00_3;
							}
						else
							{	/* Bdb/spread_obj.scm 33 */
								bool_t BgL_test1800z00_2046;

								{	/* Bdb/spread_obj.scm 33 */
									obj_t BgL_fun1320z00_1393;

									BgL_fun1320z00_1393 = CAR(((obj_t) BgL_hooksz00_1384));
									BgL_test1800z00_2046 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1320z00_1393)
										(BgL_fun1320z00_1393, BEOA));
								}
								if (BgL_test1800z00_2046)
									{	/* Bdb/spread_obj.scm 33 */
										obj_t BgL_arg1316z00_1390;
										obj_t BgL_arg1317z00_1391;

										BgL_arg1316z00_1390 = CDR(((obj_t) BgL_hooksz00_1384));
										BgL_arg1317z00_1391 = CDR(((obj_t) BgL_hnamesz00_1385));
										{
											obj_t BgL_hnamesz00_2058;
											obj_t BgL_hooksz00_2057;

											BgL_hooksz00_2057 = BgL_arg1316z00_1390;
											BgL_hnamesz00_2058 = BgL_arg1317z00_1391;
											BgL_hnamesz00_1385 = BgL_hnamesz00_2058;
											BgL_hooksz00_1384 = BgL_hooksz00_2057;
											goto BgL_zc3z04anonymousza31311ze3z87_1386;
										}
									}
								else
									{	/* Bdb/spread_obj.scm 33 */
										obj_t BgL_arg1319z00_1392;

										BgL_arg1319z00_1392 = CAR(((obj_t) BgL_hnamesz00_1385));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string1729z00zzbdb_spreadzd2objzd2,
											BgL_arg1319z00_1392);
									}
							}
					}
				}
		}

	}



/* &bdb-spread-obj! */
	obj_t BGl_z62bdbzd2spreadzd2objz12z70zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1838, obj_t BgL_globalsz00_1839)
	{
		{	/* Bdb/spread_obj.scm 30 */
			return
				BGl_bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2(BgL_globalsz00_1839);
		}

	}



/* spread-obj-fun! */
	obj_t BGl_spreadzd2objzd2funz12z12zzbdb_spreadzd2objzd2(obj_t BgL_varz00_4)
	{
		{	/* Bdb/spread_obj.scm 38 */
			{	/* Bdb/spread_obj.scm 39 */
				obj_t BgL_arg1322z00_1396;

				BgL_arg1322z00_1396 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_4)))->BgL_idz00);
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1322z00_1396);
			}
			{	/* Bdb/spread_obj.scm 40 */
				BgL_valuez00_bglt BgL_funz00_1397;

				BgL_funz00_1397 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_4)))->BgL_valuez00);
				{	/* Bdb/spread_obj.scm 40 */
					obj_t BgL_bodyz00_1398;

					BgL_bodyz00_1398 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1397)))->BgL_bodyz00);
					{	/* Bdb/spread_obj.scm 41 */
						BgL_typez00_bglt BgL_typez00_1399;

						BgL_typez00_1399 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_4)))->BgL_typez00);
						{	/* Bdb/spread_obj.scm 42 */
							obj_t BgL_argsz00_1400;

							BgL_argsz00_1400 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt) BgL_funz00_1397)))->BgL_argsz00);
							{	/* Bdb/spread_obj.scm 43 */

								if (
									(((obj_t) BgL_typez00_1399) == BGl_za2_za2z00zztype_cachez00))
									{	/* Bdb/spread_obj.scm 45 */
										BgL_typez00_bglt BgL_vz00_1757;

										BgL_vz00_1757 =
											((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_varz00_4)))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_vz00_1757), BUNSPEC);
									}
								else
									{	/* Bdb/spread_obj.scm 44 */
										BFALSE;
									}
								{
									obj_t BgL_l1234z00_1403;

									BgL_l1234z00_1403 = BgL_argsz00_1400;
								BgL_zc3z04anonymousza31324ze3z87_1404:
									if (PAIRP(BgL_l1234z00_1403))
										{	/* Bdb/spread_obj.scm 46 */
											{	/* Bdb/spread_obj.scm 47 */
												obj_t BgL_argsz00_1406;

												BgL_argsz00_1406 = CAR(BgL_l1234z00_1403);
												{	/* Bdb/spread_obj.scm 47 */
													bool_t BgL_test1803z00_2083;

													{	/* Bdb/spread_obj.scm 47 */
														BgL_typez00_bglt BgL_arg1328z00_1409;

														BgL_arg1328z00_1409 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt) BgL_argsz00_1406)))->
															BgL_typez00);
														BgL_test1803z00_2083 =
															(((obj_t) BgL_arg1328z00_1409) ==
															BGl_za2_za2z00zztype_cachez00);
													}
													if (BgL_test1803z00_2083)
														{	/* Bdb/spread_obj.scm 48 */
															BgL_typez00_bglt BgL_vz00_1762;

															BgL_vz00_1762 =
																((BgL_typez00_bglt)
																BGl_za2objza2z00zztype_cachez00);
															((((BgL_variablez00_bglt)
																		COBJECT(((BgL_variablez00_bglt)
																				BgL_argsz00_1406)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_vz00_1762), BUNSPEC);
														}
													else
														{	/* Bdb/spread_obj.scm 47 */
															BFALSE;
														}
												}
											}
											{
												obj_t BgL_l1234z00_2091;

												BgL_l1234z00_2091 = CDR(BgL_l1234z00_1403);
												BgL_l1234z00_1403 = BgL_l1234z00_2091;
												goto BgL_zc3z04anonymousza31324ze3z87_1404;
											}
										}
									else
										{	/* Bdb/spread_obj.scm 46 */
											((bool_t) 1);
										}
								}
								if (
									((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
										((long) 3)))
									{	/* Bdb/spread_obj.scm 50 */
										BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
											((BgL_nodez00_bglt) BgL_bodyz00_1398));
									}
								else
									{	/* Bdb/spread_obj.scm 50 */
										BFALSE;
									}
								return BGl_leavezd2functionzd2zztools_errorz00();
							}
						}
					}
				}
			}
		}

	}



/* spread-obj-node*! */
	obj_t BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2(obj_t
		BgL_nodeza2za2_24)
	{
		{	/* Bdb/spread_obj.scm 203 */
		BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2:
			if (NULLP(BgL_nodeza2za2_24))
				{	/* Bdb/spread_obj.scm 204 */
					return CNST_TABLE_REF(((long) 1));
				}
			else
				{	/* Bdb/spread_obj.scm 204 */
					{	/* Bdb/spread_obj.scm 207 */
						obj_t BgL_arg1334z00_1414;

						BgL_arg1334z00_1414 = CAR(((obj_t) BgL_nodeza2za2_24));
						BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
							((BgL_nodez00_bglt) BgL_arg1334z00_1414));
					}
					{	/* Bdb/spread_obj.scm 208 */
						obj_t BgL_arg1335z00_1415;

						BgL_arg1335z00_1415 = CDR(((obj_t) BgL_nodeza2za2_24));
						{
							obj_t BgL_nodeza2za2_2108;

							BgL_nodeza2za2_2108 = BgL_arg1335z00_1415;
							BgL_nodeza2za2_24 = BgL_nodeza2za2_2108;
							goto BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2;
						}
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbdb_spreadzd2objzd2()
	{
		{	/* Bdb/spread_obj.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbdb_spreadzd2objzd2()
	{
		{	/* Bdb/spread_obj.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_proc1730z00zzbdb_spreadzd2objzd2, BGl_nodez00zzast_nodez00,
				BGl_string1731z00zzbdb_spreadzd2objzd2);
		}

	}



/* &spread-obj-node!1245 */
	obj_t BGl_z62spreadzd2objzd2nodez121245z70zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1841, obj_t BgL_nodez00_1842)
	{
		{	/* Bdb/spread_obj.scm 57 */
			return ((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_1842));
		}

	}



/* spread-obj-node! */
	obj_t BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(BgL_nodez00_bglt
		BgL_nodez00_5)
	{
		{	/* Bdb/spread_obj.scm 57 */
			{	/* Bdb/spread_obj.scm 57 */
				obj_t BgL_method1246z00_1420;

				{	/* Bdb/spread_obj.scm 57 */
					obj_t BgL_res1718z00_1805;

					{	/* Bdb/spread_obj.scm 57 */
						long BgL_objzd2classzd2numz00_1770;

						{	/* Bdb/spread_obj.scm 57 */
							long BgL_res1708z00_1773;

							BgL_res1708z00_1773 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_5));
							BgL_objzd2classzd2numz00_1770 = BgL_res1708z00_1773;
						}
						{	/* Bdb/spread_obj.scm 57 */
							obj_t BgL_arg1813z00_1771;

							BgL_arg1813z00_1771 =
								PROCEDURE_REF
								(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
								(int) (((long) 1)));
							{	/* Bdb/spread_obj.scm 57 */
								int BgL_offsetz00_1775;

								BgL_offsetz00_1775 = (int) (BgL_objzd2classzd2numz00_1770);
								{	/* Bdb/spread_obj.scm 57 */
									long BgL_offsetz00_1776;

									BgL_offsetz00_1776 =
										((long) (BgL_offsetz00_1775) - OBJECT_TYPE);
									{	/* Bdb/spread_obj.scm 57 */
										long BgL_modz00_1777;

										BgL_modz00_1777 =
											(BgL_offsetz00_1776 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Bdb/spread_obj.scm 57 */
											long BgL_restz00_1779;

											BgL_restz00_1779 =
												(BgL_offsetz00_1776 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Bdb/spread_obj.scm 57 */

												{	/* Bdb/spread_obj.scm 57 */
													obj_t BgL_bucketz00_1781;

													BgL_bucketz00_1781 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1771), BgL_modz00_1777);
													BgL_res1718z00_1805 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1781), BgL_restz00_1779);
					}}}}}}}}
					BgL_method1246z00_1420 = BgL_res1718z00_1805;
				}
				return
					PROCEDURE_ENTRY(BgL_method1246z00_1420) (BgL_method1246z00_1420,
					((obj_t) BgL_nodez00_5), BEOA);
			}
		}

	}



/* &spread-obj-node! */
	obj_t BGl_z62spreadzd2objzd2nodez12z70zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1843, obj_t BgL_nodez00_1844)
	{
		{	/* Bdb/spread_obj.scm 57 */
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				((BgL_nodez00_bglt) BgL_nodez00_1844));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbdb_spreadzd2objzd2()
	{
		{	/* Bdb/spread_obj.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_sequencez00zzast_nodez00, BGl_proc1732z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_syncz00zzast_nodez00, BGl_proc1734z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_appz00zzast_nodez00, BGl_proc1735z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1736z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_funcallz00zzast_nodez00, BGl_proc1737z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_externz00zzast_nodez00, BGl_proc1738z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_castz00zzast_nodez00, BGl_proc1739z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_setqz00zzast_nodez00, BGl_proc1740z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_conditionalz00zzast_nodez00, BGl_proc1741z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_failz00zzast_nodez00, BGl_proc1742z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_switchz00zzast_nodez00, BGl_proc1743z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1744z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1745z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1746z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc1747z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1748z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1749z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1750z00zzbdb_spreadzd2objzd2,
				BGl_string1733z00zzbdb_spreadzd2objzd2);
		}

	}



/* &spread-obj-node!-box1283 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2box1283za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1863, obj_t BgL_nodez00_1864)
	{
		{	/* Bdb/spread_obj.scm 195 */
			{	/* Bdb/spread_obj.scm 197 */
				BgL_varz00_bglt BgL_arg1489z00_1914;

				BgL_arg1489z00_1914 =
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1864)))->BgL_varz00);
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
					((BgL_nodez00_bglt) BgL_arg1489z00_1914));
			}
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1864)))->BgL_valuez00));
		}

	}



/* &spread-obj-node!-box1281 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2box1281za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1865, obj_t BgL_nodez00_1866)
	{
		{	/* Bdb/spread_obj.scm 189 */
			{	/* Bdb/spread_obj.scm 190 */
				BgL_varz00_bglt BgL_arg1477z00_1916;

				BgL_arg1477z00_1916 =
					(((BgL_boxzd2refzd2_bglt) COBJECT(
							((BgL_boxzd2refzd2_bglt) BgL_nodez00_1866)))->BgL_varz00);
				return
					BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
					((BgL_nodez00_bglt) BgL_arg1477z00_1916));
			}
		}

	}



/* &spread-obj-node!-mak1279 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2mak1279za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1867, obj_t BgL_nodez00_1868)
	{
		{	/* Bdb/spread_obj.scm 183 */
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_1868)))->BgL_valuez00));
		}

	}



/* &spread-obj-node!-jum1277 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2jum1277za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1869, obj_t BgL_nodez00_1870)
	{
		{	/* Bdb/spread_obj.scm 174 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_2176;

				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1870)))->
						BgL_exitz00));
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(((
							(BgL_jumpzd2exzd2itz00_bglt) COBJECT(((BgL_jumpzd2exzd2itz00_bglt)
									BgL_nodez00_1870)))->BgL_valuez00));
				BgL_auxz00_2176 = ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1870);
				return ((obj_t) BgL_auxz00_2176);
			}
		}

	}



/* &spread-obj-node!-set1275 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2set1275za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1871, obj_t BgL_nodez00_1872)
	{
		{	/* Bdb/spread_obj.scm 168 */
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_1872)))->BgL_bodyz00));
		}

	}



/* &spread-obj-node!-let1273 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2let1273za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1873, obj_t BgL_nodez00_1874)
	{
		{	/* Bdb/spread_obj.scm 154 */
			{	/* Bdb/spread_obj.scm 156 */
				obj_t BgL_g1244z00_1921;

				BgL_g1244z00_1921 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_1874)))->BgL_bindingsz00);
				{
					obj_t BgL_l1242z00_1923;

					BgL_l1242z00_1923 = BgL_g1244z00_1921;
				BgL_zc3z04anonymousza31418ze3z87_1922:
					if (PAIRP(BgL_l1242z00_1923))
						{	/* Bdb/spread_obj.scm 156 */
							{	/* Bdb/spread_obj.scm 160 */
								obj_t BgL_bindingz00_1924;

								BgL_bindingz00_1924 = CAR(BgL_l1242z00_1923);
								{	/* Bdb/spread_obj.scm 157 */
									obj_t BgL_variablez00_1925;

									BgL_variablez00_1925 = CAR(((obj_t) BgL_bindingz00_1924));
									{	/* Bdb/spread_obj.scm 158 */
										bool_t BgL_test1807z00_2195;

										{	/* Bdb/spread_obj.scm 158 */
											bool_t BgL_test1810z00_2196;

											{	/* Bdb/spread_obj.scm 158 */
												BgL_typez00_bglt BgL_arg1448z00_1926;

												BgL_arg1448z00_1926 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_variablez00_1925)))->
													BgL_typez00);
												BgL_test1810z00_2196 =
													(((obj_t) BgL_arg1448z00_1926) ==
													BGl_za2_za2z00zztype_cachez00);
											}
											if (BgL_test1810z00_2196)
												{	/* Bdb/spread_obj.scm 158 */
													BgL_test1807z00_2195 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt)
																		BgL_variablez00_1925))))->BgL_userzf3zf3);
												}
											else
												{	/* Bdb/spread_obj.scm 158 */
													BgL_test1807z00_2195 = ((bool_t) 0);
												}
										}
										if (BgL_test1807z00_2195)
											{	/* Bdb/spread_obj.scm 160 */
												BgL_typez00_bglt BgL_vz00_1927;

												BgL_vz00_1927 =
													((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	BgL_variablez00_1925)))->BgL_typez00) =
													((BgL_typez00_bglt) BgL_vz00_1927), BUNSPEC);
											}
										else
											{	/* Bdb/spread_obj.scm 158 */
												BFALSE;
											}
									}
								}
								{	/* Bdb/spread_obj.scm 161 */
									obj_t BgL_arg1449z00_1928;

									BgL_arg1449z00_1928 = CDR(((obj_t) BgL_bindingz00_1924));
									BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
										((BgL_nodez00_bglt) BgL_arg1449z00_1928));
								}
							}
							{
								obj_t BgL_l1242z00_2211;

								BgL_l1242z00_2211 = CDR(BgL_l1242z00_1923);
								BgL_l1242z00_1923 = BgL_l1242z00_2211;
								goto BgL_zc3z04anonymousza31418ze3z87_1922;
							}
						}
					else
						{	/* Bdb/spread_obj.scm 156 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_1874)))->BgL_bodyz00));
		}

	}



/* &spread-obj-node!-let1270 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2let1270za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1875, obj_t BgL_nodez00_1876)
	{
		{	/* Bdb/spread_obj.scm 146 */
			{	/* Bdb/spread_obj.scm 148 */
				obj_t BgL_g1241z00_1930;

				BgL_g1241z00_1930 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_1876)))->BgL_localsz00);
				{
					obj_t BgL_l1239z00_1932;

					BgL_l1239z00_1932 = BgL_g1241z00_1930;
				BgL_zc3z04anonymousza31383ze3z87_1931:
					if (PAIRP(BgL_l1239z00_1932))
						{	/* Bdb/spread_obj.scm 148 */
							BGl_spreadzd2objzd2funz12z12zzbdb_spreadzd2objzd2(CAR
								(BgL_l1239z00_1932));
							{
								obj_t BgL_l1239z00_2222;

								BgL_l1239z00_2222 = CDR(BgL_l1239z00_1932);
								BgL_l1239z00_1932 = BgL_l1239z00_2222;
								goto BgL_zc3z04anonymousza31383ze3z87_1931;
							}
						}
					else
						{	/* Bdb/spread_obj.scm 148 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_1876)))->BgL_bodyz00));
		}

	}



/* &spread-obj-node!-swi1268 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2swi1268za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1877, obj_t BgL_nodez00_1878)
	{
		{	/* Bdb/spread_obj.scm 136 */
			{	/* Bdb/spread_obj.scm 137 */
				bool_t BgL_tmpz00_2227;

				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_1878)))->BgL_testz00));
				{	/* Bdb/spread_obj.scm 139 */
					obj_t BgL_g1238z00_1934;

					BgL_g1238z00_1934 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_1878)))->BgL_clausesz00);
					{
						obj_t BgL_l1236z00_1936;

						BgL_l1236z00_1936 = BgL_g1238z00_1934;
					BgL_zc3z04anonymousza31373ze3z87_1935:
						if (PAIRP(BgL_l1236z00_1936))
							{	/* Bdb/spread_obj.scm 139 */
								{	/* Bdb/spread_obj.scm 140 */
									obj_t BgL_clausez00_1937;

									BgL_clausez00_1937 = CAR(BgL_l1236z00_1936);
									{	/* Bdb/spread_obj.scm 140 */
										obj_t BgL_arg1381z00_1938;

										BgL_arg1381z00_1938 = CDR(((obj_t) BgL_clausez00_1937));
										BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
											((BgL_nodez00_bglt) BgL_arg1381z00_1938));
									}
								}
								{
									obj_t BgL_l1236z00_2240;

									BgL_l1236z00_2240 = CDR(BgL_l1236z00_1936);
									BgL_l1236z00_1936 = BgL_l1236z00_2240;
									goto BgL_zc3z04anonymousza31373ze3z87_1935;
								}
							}
						else
							{	/* Bdb/spread_obj.scm 139 */
								BgL_tmpz00_2227 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_2227);
			}
		}

	}



/* &spread-obj-node!-fai1266 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2fai1266za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1879, obj_t BgL_nodez00_1880)
	{
		{	/* Bdb/spread_obj.scm 127 */
			BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_1880)))->BgL_procz00));
			BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_1880)))->BgL_msgz00));
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_1880)))->BgL_objz00));
		}

	}



/* &spread-obj-node!-con1264 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2con1264za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1881, obj_t BgL_nodez00_1882)
	{
		{	/* Bdb/spread_obj.scm 118 */
			BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_1882)))->BgL_testz00));
			BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_1882)))->BgL_truez00));
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_1882)))->BgL_falsez00));
		}

	}



/* &spread-obj-node!-set1262 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2set1262za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1883, obj_t BgL_nodez00_1884)
	{
		{	/* Bdb/spread_obj.scm 112 */
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_1884)))->BgL_valuez00));
		}

	}



/* &spread-obj-node!-cas1260 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2cas1260za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1885, obj_t BgL_nodez00_1886)
	{
		{	/* Bdb/spread_obj.scm 106 */
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_1886)))->BgL_argz00));
		}

	}



/* &spread-obj-node!-ext1258 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2ext1258za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1887, obj_t BgL_nodez00_1888)
	{
		{	/* Bdb/spread_obj.scm 100 */
			return
				BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_1888)))->BgL_exprza2za2));
		}

	}



/* &spread-obj-node!-fun1256 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2fun1256za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1889, obj_t BgL_nodez00_1890)
	{
		{	/* Bdb/spread_obj.scm 92 */
			BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_1890)))->BgL_funz00));
			return
				BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_1890)))->BgL_argsz00));
		}

	}



/* &spread-obj-node!-app1254 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2app1254za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1891, obj_t BgL_nodez00_1892)
	{
		{	/* Bdb/spread_obj.scm 84 */
			BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_1892)))->BgL_funz00));
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_1892)))->BgL_argz00));
		}

	}



/* &spread-obj-node!-app1252 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2app1252za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1893, obj_t BgL_nodez00_1894)
	{
		{	/* Bdb/spread_obj.scm 78 */
			return
				BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_1894)))->BgL_argsz00));
		}

	}



/* &spread-obj-node!-syn1250 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2syn1250za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1895, obj_t BgL_nodez00_1896)
	{
		{	/* Bdb/spread_obj.scm 69 */
			BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_1896)))->BgL_mutexz00));
			BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_1896)))->BgL_prelockz00));
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_1896)))->BgL_bodyz00));
		}

	}



/* &spread-obj-node!-seq1248 */
	obj_t BGl_z62spreadzd2objzd2nodez12zd2seq1248za2zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_1897, obj_t BgL_nodez00_1898)
	{
		{	/* Bdb/spread_obj.scm 63 */
			return
				BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_1898)))->BgL_nodesz00));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbdb_spreadzd2objzd2()
	{
		{	/* Bdb/spread_obj.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1751z00zzbdb_spreadzd2objzd2));
		}

	}

#ifdef __cplusplus
}
#endif
