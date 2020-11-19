/*===========================================================================*/
/*   (Fail/walk.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Fail/walk.scm) */
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


	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2funcall1265z70zzfail_walkz00(obj_t, obj_t);
	static obj_t BGl_z62failzd2walkz12za2zzfail_walkz00(obj_t, obj_t);
	static obj_t BGl_za2errorza2z00zzfail_walkz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2boxzd2ref1289za2zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzfail_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzfail_walkz00();
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2atom1251z70zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza31324ze3ze5zzfail_walkz00(obj_t);
	static obj_t BGl_failzd2nodeza2z12z62zzfail_walkz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2condition1271z70zzfail_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2switch1275z70zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2letzd2fun1277za2zzfail_walkz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzfail_walkz00();
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2jumpzd2exzd2i1285z70zzfail_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2app1261z70zzfail_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2sequence1257z70zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2sync1259z70zzfail_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2fail1273z70zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2letzd2var1279za2zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzfail_walkz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2kwote1253z70zzfail_walkz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzfail_walkz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzfail_walkz00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2appzd2ly1263za2zzfail_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_z62failzd2nodez121248za2zzfail_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_failzd2nodez12zc0zzfail_walkz00(BgL_nodez00_bglt);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2extern1267z70zzfail_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62failzd2nodez12za2zzfail_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2makezd2box1287za2zzfail_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2boxzd2setz121291zb0zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2var1255z70zzfail_walkz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzfail_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_failzd2funz12zc0zzfail_walkz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzfail_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzfail_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzfail_walkz00();
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2setzd2exzd2it1283z70zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2setq1269z70zzfail_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2cast1281z70zzfail_walkz00(obj_t, obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_failzd2walkz12zc0zzfail_walkz00(obj_t);
	static obj_t __cnst[9];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_failzd2walkz12zd2envz12zzfail_walkz00,
		BgL_bgl_za762failza7d2walkza711903za7,
		BGl_z62failzd2walkz12za2zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711904za7,
		BGl_z62failzd2nodez12za2zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1862z00zzfail_walkz00,
		BgL_bgl_string1862za700za7za7f1905za7, "Fail", 4);
	      DEFINE_STRING(BGl_string1863z00zzfail_walkz00,
		BgL_bgl_string1863za700za7za7f1906za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1865z00zzfail_walkz00,
		BgL_bgl_string1865za700za7za7f1907za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1866z00zzfail_walkz00,
		BgL_bgl_string1866za700za7za7f1908za7, " error", 6);
	      DEFINE_STRING(BGl_string1867z00zzfail_walkz00,
		BgL_bgl_string1867za700za7za7f1909za7, "s", 1);
	      DEFINE_STRING(BGl_string1868z00zzfail_walkz00,
		BgL_bgl_string1868za700za7za7f1910za7, "", 0);
	      DEFINE_STRING(BGl_string1869z00zzfail_walkz00,
		BgL_bgl_string1869za700za7za7f1911za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1870z00zzfail_walkz00,
		BgL_bgl_string1870za700za7za7f1912za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1872z00zzfail_walkz00,
		BgL_bgl_string1872za700za7za7f1913za7, "fail-node!1248", 14);
	      DEFINE_STRING(BGl_string1873z00zzfail_walkz00,
		BgL_bgl_string1873za700za7za7f1914za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1875z00zzfail_walkz00,
		BgL_bgl_string1875za700za7za7f1915za7, "fail-node!", 10);
	      DEFINE_STRING(BGl_string1896z00zzfail_walkz00,
		BgL_bgl_string1896za700za7za7f1916za7, "fail_walk", 9);
	      DEFINE_STRING(BGl_string1897z00zzfail_walkz00,
		BgL_bgl_string1897za700za7za7f1917za7,
		"value error/location location fail-node!1248 done error __error pass-started ((lambda () (set! *error* (find-global (quote error) (quote __error))))) ",
		150);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1864z00zzfail_walkz00,
		BgL_bgl_za762za7c3za704anonymo1918za7,
		BGl_z62zc3z04anonymousza31324ze3ze5zzfail_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1871z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711919za7,
		BGl_z62failzd2nodez121248za2zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1874z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711920za7,
		BGl_z62failzd2nodez12zd2atom1251z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1876z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711921za7,
		BGl_z62failzd2nodez12zd2kwote1253z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1877z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711922za7,
		BGl_z62failzd2nodez12zd2var1255z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1878z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711923za7,
		BGl_z62failzd2nodez12zd2sequence1257z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1879z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711924za7,
		BGl_z62failzd2nodez12zd2sync1259z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1880z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711925za7,
		BGl_z62failzd2nodez12zd2app1261z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1881z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711926za7,
		BGl_z62failzd2nodez12zd2appzd2ly1263za2zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1882z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711927za7,
		BGl_z62failzd2nodez12zd2funcall1265z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1883z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711928za7,
		BGl_z62failzd2nodez12zd2extern1267z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1884z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711929za7,
		BGl_z62failzd2nodez12zd2setq1269z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1885z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711930za7,
		BGl_z62failzd2nodez12zd2condition1271z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1886z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711931za7,
		BGl_z62failzd2nodez12zd2fail1273z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1887z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711932za7,
		BGl_z62failzd2nodez12zd2switch1275z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1888z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711933za7,
		BGl_z62failzd2nodez12zd2letzd2fun1277za2zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1889z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711934za7,
		BGl_z62failzd2nodez12zd2letzd2var1279za2zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1890z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711935za7,
		BGl_z62failzd2nodez12zd2cast1281z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1891z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711936za7,
		BGl_z62failzd2nodez12zd2setzd2exzd2it1283z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1892z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711937za7,
		BGl_z62failzd2nodez12zd2jumpzd2exzd2i1285z70zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1893z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711938za7,
		BGl_z62failzd2nodez12zd2makezd2box1287za2zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1894z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711939za7,
		BGl_z62failzd2nodez12zd2boxzd2ref1289za2zzfail_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1895z00zzfail_walkz00,
		BgL_bgl_za762failza7d2nodeza711940za7,
		BGl_z62failzd2nodez12zd2boxzd2setz121291zb0zzfail_walkz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2errorza2z00zzfail_walkz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzfail_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzfail_walkz00(long
		BgL_checksumz00_2114, char *BgL_fromz00_2115)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzfail_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzfail_walkz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzfail_walkz00();
					BGl_libraryzd2moduleszd2initz00zzfail_walkz00();
					BGl_cnstzd2initzd2zzfail_walkz00();
					BGl_importedzd2moduleszd2initz00zzfail_walkz00();
					BGl_genericzd2initzd2zzfail_walkz00();
					BGl_methodzd2initzd2zzfail_walkz00();
					return BGl_toplevelzd2initzd2zzfail_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzfail_walkz00()
	{
		{	/* Fail/walk.scm 18 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"fail_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"fail_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"fail_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "fail_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "fail_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "fail_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"fail_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"fail_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"fail_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "fail_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"fail_walk");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0), "fail_walk");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "fail_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzfail_walkz00()
	{
		{	/* Fail/walk.scm 18 */
			{	/* Fail/walk.scm 18 */
				obj_t BgL_cportz00_2014;

				{	/* Fail/walk.scm 18 */
					obj_t BgL_stringz00_2022;

					BgL_stringz00_2022 = BGl_string1897z00zzfail_walkz00;
					{	/* Fail/walk.scm 18 */
						obj_t BgL_startz00_2023;

						BgL_startz00_2023 = BINT(((long) 0));
						{	/* Fail/walk.scm 18 */
							obj_t BgL_endz00_2024;

							BgL_endz00_2024 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2022)));
							{	/* Fail/walk.scm 18 */

								BgL_cportz00_2014 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2022, BgL_startz00_2023, BgL_endz00_2024);
				}}}}
				{
					long BgL_iz00_2015;

					BgL_iz00_2015 = ((long) 8);
				BgL_loopz00_2016:
					if ((BgL_iz00_2015 == ((long) -1)))
						{	/* Fail/walk.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Fail/walk.scm 18 */
							{	/* Fail/walk.scm 18 */
								obj_t BgL_arg1901z00_2018;

								{	/* Fail/walk.scm 18 */

									{	/* Fail/walk.scm 18 */
										obj_t BgL_locationz00_2020;

										BgL_locationz00_2020 = BBOOL(((bool_t) 0));
										{	/* Fail/walk.scm 18 */

											BgL_arg1901z00_2018 =
												BGl_readz00zz__readerz00(BgL_cportz00_2014,
												BgL_locationz00_2020);
										}
									}
								}
								{	/* Fail/walk.scm 18 */
									int BgL_tmpz00_2148;

									BgL_tmpz00_2148 = (int) (BgL_iz00_2015);
									CNST_TABLE_SET(BgL_tmpz00_2148, BgL_arg1901z00_2018);
							}}
							{	/* Fail/walk.scm 18 */
								int BgL_auxz00_2021;

								BgL_auxz00_2021 = (int) ((BgL_iz00_2015 - ((long) 1)));
								{
									long BgL_iz00_2153;

									BgL_iz00_2153 = (long) (BgL_auxz00_2021);
									BgL_iz00_2015 = BgL_iz00_2153;
									goto BgL_loopz00_2016;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzfail_walkz00()
	{
		{	/* Fail/walk.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzfail_walkz00()
	{
		{	/* Fail/walk.scm 18 */
			BGl_za2errorza2z00zzfail_walkz00 = BUNSPEC;
			return BUNSPEC;
		}

	}



/* fail-walk! */
	BGL_EXPORTED_DEF obj_t BGl_failzd2walkz12zc0zzfail_walkz00(obj_t
		BgL_globalsz00_17)
	{
		{	/* Fail/walk.scm 39 */
			{	/* Fail/walk.scm 40 */
				obj_t BgL_list1309z00_1375;

				{	/* Fail/walk.scm 40 */
					obj_t BgL_arg1310z00_1376;

					{	/* Fail/walk.scm 40 */
						obj_t BgL_arg1311z00_1377;

						BgL_arg1311z00_1377 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1310z00_1376 =
							MAKE_YOUNG_PAIR(BGl_string1862z00zzfail_walkz00,
							BgL_arg1311z00_1377);
					}
					BgL_list1309z00_1375 =
						MAKE_YOUNG_PAIR(BGl_string1863z00zzfail_walkz00,
						BgL_arg1310z00_1376);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1309z00_1375);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1862z00zzfail_walkz00;
			{	/* Fail/walk.scm 40 */
				obj_t BgL_g1108z00_1378;
				obj_t BgL_g1109z00_1379;

				{	/* Fail/walk.scm 40 */
					obj_t BgL_list1323z00_1393;

					BgL_list1323z00_1393 =
						MAKE_YOUNG_PAIR(BGl_proc1864z00zzfail_walkz00, BNIL);
					BgL_g1108z00_1378 = BgL_list1323z00_1393;
				}
				BgL_g1109z00_1379 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_1381;
					obj_t BgL_hnamesz00_1382;

					BgL_hooksz00_1381 = BgL_g1108z00_1378;
					BgL_hnamesz00_1382 = BgL_g1109z00_1379;
				BgL_zc3z04anonymousza31312ze3z87_1383:
					if (NULLP(BgL_hooksz00_1381))
						{	/* Fail/walk.scm 40 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Fail/walk.scm 40 */
							bool_t BgL_test1944z00_2168;

							{	/* Fail/walk.scm 40 */
								obj_t BgL_fun1320z00_1390;

								BgL_fun1320z00_1390 = CAR(((obj_t) BgL_hooksz00_1381));
								BgL_test1944z00_2168 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1320z00_1390)
									(BgL_fun1320z00_1390, BEOA));
							}
							if (BgL_test1944z00_2168)
								{	/* Fail/walk.scm 40 */
									obj_t BgL_arg1316z00_1387;
									obj_t BgL_arg1317z00_1388;

									BgL_arg1316z00_1387 = CDR(((obj_t) BgL_hooksz00_1381));
									BgL_arg1317z00_1388 = CDR(((obj_t) BgL_hnamesz00_1382));
									{
										obj_t BgL_hnamesz00_2180;
										obj_t BgL_hooksz00_2179;

										BgL_hooksz00_2179 = BgL_arg1316z00_1387;
										BgL_hnamesz00_2180 = BgL_arg1317z00_1388;
										BgL_hnamesz00_1382 = BgL_hnamesz00_2180;
										BgL_hooksz00_1381 = BgL_hooksz00_2179;
										goto BgL_zc3z04anonymousza31312ze3z87_1383;
									}
								}
							else
								{	/* Fail/walk.scm 40 */
									obj_t BgL_arg1319z00_1389;

									BgL_arg1319z00_1389 = CAR(((obj_t) BgL_hnamesz00_1382));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1862z00zzfail_walkz00,
										BGl_string1865z00zzfail_walkz00, BgL_arg1319z00_1389);
								}
						}
				}
			}
			{
				obj_t BgL_l1236z00_1398;

				BgL_l1236z00_1398 = BgL_globalsz00_17;
			BgL_zc3z04anonymousza31326ze3z87_1399:
				if (PAIRP(BgL_l1236z00_1398))
					{	/* Fail/walk.scm 43 */
						BGl_failzd2funz12zc0zzfail_walkz00(CAR(BgL_l1236z00_1398));
						{
							obj_t BgL_l1236z00_2188;

							BgL_l1236z00_2188 = CDR(BgL_l1236z00_1398);
							BgL_l1236z00_1398 = BgL_l1236z00_2188;
							goto BgL_zc3z04anonymousza31326ze3z87_1399;
						}
					}
				else
					{	/* Fail/walk.scm 43 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Fail/walk.scm 44 */
					{	/* Fail/walk.scm 44 */
						obj_t BgL_port1238z00_1406;

						{	/* Fail/walk.scm 44 */
							obj_t BgL_res1838z00_1820;

							{	/* Fail/walk.scm 44 */
								obj_t BgL_tmpz00_2193;

								BgL_tmpz00_2193 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1838z00_1820 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2193);
							}
							BgL_port1238z00_1406 = BgL_res1838z00_1820;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1238z00_1406);
						bgl_display_string(BGl_string1866z00zzfail_walkz00,
							BgL_port1238z00_1406);
						{	/* Fail/walk.scm 44 */
							obj_t BgL_arg1331z00_1407;

							{	/* Fail/walk.scm 44 */
								bool_t BgL_test1947z00_2198;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Fail/walk.scm 44 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Fail/walk.scm 44 */
												BgL_test1947z00_2198 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Fail/walk.scm 44 */
												BgL_test1947z00_2198 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Fail/walk.scm 44 */
										BgL_test1947z00_2198 = ((bool_t) 0);
									}
								if (BgL_test1947z00_2198)
									{	/* Fail/walk.scm 44 */
										BgL_arg1331z00_1407 = BGl_string1867z00zzfail_walkz00;
									}
								else
									{	/* Fail/walk.scm 44 */
										BgL_arg1331z00_1407 = BGl_string1868z00zzfail_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1331z00_1407, BgL_port1238z00_1406);
						}
						bgl_display_string(BGl_string1869z00zzfail_walkz00,
							BgL_port1238z00_1406);
						bgl_display_char(((unsigned char) 10), BgL_port1238z00_1406);
					}
					{	/* Fail/walk.scm 44 */
						obj_t BgL_list1335z00_1413;

						BgL_list1335z00_1413 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1335z00_1413);
					}
				}
			else
				{	/* Fail/walk.scm 44 */
					obj_t BgL_g1110z00_1414;

					BgL_g1110z00_1414 = BNIL;
					{
						obj_t BgL_hooksz00_1417;
						obj_t BgL_hnamesz00_1418;

						BgL_hooksz00_1417 = BgL_g1110z00_1414;
						BgL_hnamesz00_1418 = BNIL;
					BgL_zc3z04anonymousza31336ze3z87_1419:
						if (NULLP(BgL_hooksz00_1417))
							{	/* Fail/walk.scm 44 */
								return BgL_globalsz00_17;
							}
						else
							{	/* Fail/walk.scm 44 */
								bool_t BgL_test1951z00_2215;

								{	/* Fail/walk.scm 44 */
									obj_t BgL_fun1347z00_1426;

									BgL_fun1347z00_1426 = CAR(((obj_t) BgL_hooksz00_1417));
									BgL_test1951z00_2215 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1347z00_1426)
										(BgL_fun1347z00_1426, BEOA));
								}
								if (BgL_test1951z00_2215)
									{	/* Fail/walk.scm 44 */
										obj_t BgL_arg1344z00_1423;
										obj_t BgL_arg1345z00_1424;

										BgL_arg1344z00_1423 = CDR(((obj_t) BgL_hooksz00_1417));
										BgL_arg1345z00_1424 = CDR(((obj_t) BgL_hnamesz00_1418));
										{
											obj_t BgL_hnamesz00_2227;
											obj_t BgL_hooksz00_2226;

											BgL_hooksz00_2226 = BgL_arg1344z00_1423;
											BgL_hnamesz00_2227 = BgL_arg1345z00_1424;
											BgL_hnamesz00_1418 = BgL_hnamesz00_2227;
											BgL_hooksz00_1417 = BgL_hooksz00_2226;
											goto BgL_zc3z04anonymousza31336ze3z87_1419;
										}
									}
								else
									{	/* Fail/walk.scm 44 */
										obj_t BgL_arg1346z00_1425;

										BgL_arg1346z00_1425 = CAR(((obj_t) BgL_hnamesz00_1418));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string1870z00zzfail_walkz00, BgL_arg1346z00_1425);
									}
							}
					}
				}
		}

	}



/* &fail-walk! */
	obj_t BGl_z62failzd2walkz12za2zzfail_walkz00(obj_t BgL_envz00_1942,
		obj_t BgL_globalsz00_1943)
	{
		{	/* Fail/walk.scm 39 */
			return BGl_failzd2walkz12zc0zzfail_walkz00(BgL_globalsz00_1943);
		}

	}



/* &<@anonymous:1324> */
	obj_t BGl_z62zc3z04anonymousza31324ze3ze5zzfail_walkz00(obj_t BgL_envz00_1944)
	{
		{	/* Fail/walk.scm 41 */
			{	/* Fail/walk.scm 42 */
				obj_t BgL_list1325z00_2027;

				BgL_list1325z00_2027 =
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)), BNIL);
				return (BGl_za2errorza2z00zzfail_walkz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 3)),
						BgL_list1325z00_2027), BUNSPEC);
		}}

	}



/* fail-fun! */
	obj_t BGl_failzd2funz12zc0zzfail_walkz00(obj_t BgL_varz00_18)
	{
		{	/* Fail/walk.scm 49 */
			{	/* Fail/walk.scm 51 */
				BgL_valuez00_bglt BgL_funz00_1429;

				BgL_funz00_1429 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_valuez00);
				{	/* Fail/walk.scm 51 */
					obj_t BgL_bodyz00_1430;

					BgL_bodyz00_1430 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1429)))->BgL_bodyz00);
					{	/* Fail/walk.scm 53 */

						{	/* Fail/walk.scm 54 */
							obj_t BgL_arg1351z00_1432;

							BgL_arg1351z00_1432 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_idz00);
							BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1351z00_1432);
						}
						{	/* Fail/walk.scm 55 */
							BgL_nodez00_bglt BgL_arg1352z00_1433;

							BgL_arg1352z00_1433 =
								BGl_failzd2nodez12zc0zzfail_walkz00(
								((BgL_nodez00_bglt) BgL_bodyz00_1430));
							((((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_funz00_1429)))->BgL_bodyz00) =
								((obj_t) ((obj_t) BgL_arg1352z00_1433)), BUNSPEC);
						}
						return BGl_leavezd2functionzd2zztools_errorz00();
					}
				}
			}
		}

	}



/* fail-node*! */
	obj_t BGl_failzd2nodeza2z12z62zzfail_walkz00(obj_t BgL_nodeza2za2_41)
	{
		{	/* Fail/walk.scm 255 */
		BGl_failzd2nodeza2z12z62zzfail_walkz00:
			if (NULLP(BgL_nodeza2za2_41))
				{	/* Fail/walk.scm 256 */
					return CNST_TABLE_REF(((long) 4));
				}
			else
				{	/* Fail/walk.scm 256 */
					{	/* Fail/walk.scm 259 */
						BgL_nodez00_bglt BgL_arg1357z00_1435;

						{	/* Fail/walk.scm 259 */
							obj_t BgL_arg1360z00_1436;

							BgL_arg1360z00_1436 = CAR(((obj_t) BgL_nodeza2za2_41));
							BgL_arg1357z00_1435 =
								BGl_failzd2nodez12zc0zzfail_walkz00(
								((BgL_nodez00_bglt) BgL_arg1360z00_1436));
						}
						{	/* Fail/walk.scm 259 */
							obj_t BgL_auxz00_2258;
							obj_t BgL_tmpz00_2256;

							BgL_auxz00_2258 = ((obj_t) BgL_arg1357z00_1435);
							BgL_tmpz00_2256 = ((obj_t) BgL_nodeza2za2_41);
							SET_CAR(BgL_tmpz00_2256, BgL_auxz00_2258);
						}
					}
					{	/* Fail/walk.scm 260 */
						obj_t BgL_arg1361z00_1437;

						BgL_arg1361z00_1437 = CDR(((obj_t) BgL_nodeza2za2_41));
						{
							obj_t BgL_nodeza2za2_2263;

							BgL_nodeza2za2_2263 = BgL_arg1361z00_1437;
							BgL_nodeza2za2_41 = BgL_nodeza2za2_2263;
							goto BGl_failzd2nodeza2z12z62zzfail_walkz00;
						}
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzfail_walkz00()
	{
		{	/* Fail/walk.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzfail_walkz00()
	{
		{	/* Fail/walk.scm 18 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_proc1871z00zzfail_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string1872z00zzfail_walkz00);
		}

	}



/* &fail-node!1248 */
	obj_t BGl_z62failzd2nodez121248za2zzfail_walkz00(obj_t BgL_envz00_1946,
		obj_t BgL_nodez00_1947)
	{
		{	/* Fail/walk.scm 61 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 5)),
				BGl_string1873z00zzfail_walkz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_1947)));
		}

	}



/* fail-node! */
	BgL_nodez00_bglt BGl_failzd2nodez12zc0zzfail_walkz00(BgL_nodez00_bglt
		BgL_nodez00_19)
	{
		{	/* Fail/walk.scm 61 */
			{	/* Fail/walk.scm 61 */
				obj_t BgL_method1249z00_1442;

				{	/* Fail/walk.scm 61 */
					obj_t BgL_res1854z00_1881;

					{	/* Fail/walk.scm 61 */
						long BgL_objzd2classzd2numz00_1846;

						{	/* Fail/walk.scm 61 */
							long BgL_res1844z00_1849;

							BgL_res1844z00_1849 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_19));
							BgL_objzd2classzd2numz00_1846 = BgL_res1844z00_1849;
						}
						{	/* Fail/walk.scm 61 */
							obj_t BgL_arg1813z00_1847;

							BgL_arg1813z00_1847 =
								PROCEDURE_REF(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
								(int) (((long) 1)));
							{	/* Fail/walk.scm 61 */
								int BgL_offsetz00_1851;

								BgL_offsetz00_1851 = (int) (BgL_objzd2classzd2numz00_1846);
								{	/* Fail/walk.scm 61 */
									long BgL_offsetz00_1852;

									BgL_offsetz00_1852 =
										((long) (BgL_offsetz00_1851) - OBJECT_TYPE);
									{	/* Fail/walk.scm 61 */
										long BgL_modz00_1853;

										BgL_modz00_1853 =
											(BgL_offsetz00_1852 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Fail/walk.scm 61 */
											long BgL_restz00_1855;

											BgL_restz00_1855 =
												(BgL_offsetz00_1852 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Fail/walk.scm 61 */

												{	/* Fail/walk.scm 61 */
													obj_t BgL_bucketz00_1857;

													BgL_bucketz00_1857 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1847), BgL_modz00_1853);
													BgL_res1854z00_1881 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1857), BgL_restz00_1855);
					}}}}}}}}
					BgL_method1249z00_1442 = BgL_res1854z00_1881;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1249z00_1442) (BgL_method1249z00_1442,
						((obj_t) BgL_nodez00_19), BEOA));
			}
		}

	}



/* &fail-node! */
	BgL_nodez00_bglt BGl_z62failzd2nodez12za2zzfail_walkz00(obj_t BgL_envz00_1948,
		obj_t BgL_nodez00_1949)
	{
		{	/* Fail/walk.scm 61 */
			return
				BGl_failzd2nodez12zc0zzfail_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_1949));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzfail_walkz00()
	{
		{	/* Fail/walk.scm 18 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_atomz00zzast_nodez00,
				BGl_proc1874z00zzfail_walkz00, BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_kwotez00zzast_nodez00,
				BGl_proc1876z00zzfail_walkz00, BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_varz00zzast_nodez00,
				BGl_proc1877z00zzfail_walkz00, BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1878z00zzfail_walkz00,
				BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc1879z00zzfail_walkz00, BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc1880z00zzfail_walkz00, BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1881z00zzfail_walkz00,
				BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc1882z00zzfail_walkz00, BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc1883z00zzfail_walkz00, BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc1884z00zzfail_walkz00, BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1885z00zzfail_walkz00,
				BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc1886z00zzfail_walkz00, BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc1887z00zzfail_walkz00, BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1888z00zzfail_walkz00,
				BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1889z00zzfail_walkz00,
				BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc1890z00zzfail_walkz00, BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1891z00zzfail_walkz00,
				BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1892z00zzfail_walkz00,
				BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1893z00zzfail_walkz00,
				BGl_string1875z00zzfail_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1894z00zzfail_walkz00,
				BGl_string1875z00zzfail_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_failzd2nodez12zd2envz12zzfail_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1895z00zzfail_walkz00,
				BGl_string1875z00zzfail_walkz00);
		}

	}



/* &fail-node!-box-set!1291 */
	BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2boxzd2setz121291zb0zzfail_walkz00(obj_t
		BgL_envz00_1971, obj_t BgL_nodez00_1972)
	{
		{	/* Fail/walk.scm 247 */
			{
				BgL_nodez00_bglt BgL_auxz00_2323;

				{	/* Fail/walk.scm 249 */
					BgL_nodez00_bglt BgL_arg1708z00_2030;

					BgL_arg1708z00_2030 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1972)))->BgL_valuez00);
					BgL_auxz00_2323 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1708z00_2030);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1972)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2323), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1972));
		}

	}



/* &fail-node!-box-ref1289 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2boxzd2ref1289za2zzfail_walkz00(obj_t
		BgL_envz00_1973, obj_t BgL_nodez00_1974)
	{
		{	/* Fail/walk.scm 241 */
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_1974));
		}

	}



/* &fail-node!-make-box1287 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2makezd2box1287za2zzfail_walkz00(obj_t
		BgL_envz00_1975, obj_t BgL_nodez00_1976)
	{
		{	/* Fail/walk.scm 234 */
			((((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_1976)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_failzd2nodez12zc0zzfail_walkz00((((BgL_makezd2boxzd2_bglt)
								COBJECT(((BgL_makezd2boxzd2_bglt) BgL_nodez00_1976)))->
							BgL_valuez00))), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_1976));
		}

	}



/* &fail-node!-jump-ex-i1285 */
	BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2jumpzd2exzd2i1285z70zzfail_walkz00(obj_t
		BgL_envz00_1977, obj_t BgL_nodez00_1978)
	{
		{	/* Fail/walk.scm 225 */
			{
				BgL_nodez00_bglt BgL_auxz00_2340;

				{	/* Fail/walk.scm 227 */
					BgL_nodez00_bglt BgL_arg1696z00_2034;

					BgL_arg1696z00_2034 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1978)))->BgL_exitz00);
					BgL_auxz00_2340 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1696z00_2034);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1978)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_2340), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2346;

				{	/* Fail/walk.scm 228 */
					BgL_nodez00_bglt BgL_arg1697z00_2035;

					BgL_arg1697z00_2035 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1978)))->
						BgL_valuez00);
					BgL_auxz00_2346 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1697z00_2035);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1978)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_2346), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_1978));
		}

	}



/* &fail-node!-set-ex-it1283 */
	BgL_nodez00_bglt
		BGl_z62failzd2nodez12zd2setzd2exzd2it1283z70zzfail_walkz00(obj_t
		BgL_envz00_1979, obj_t BgL_nodez00_1980)
	{
		{	/* Fail/walk.scm 218 */
			((((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_1980)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_failzd2nodez12zc0zzfail_walkz00((((BgL_setzd2exzd2itz00_bglt)
								COBJECT(((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_1980)))->
							BgL_bodyz00))), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
					BgL_nodez00_1980));
		}

	}



/* &fail-node!-cast1281 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2cast1281z70zzfail_walkz00(obj_t
		BgL_envz00_1981, obj_t BgL_nodez00_1982)
	{
		{	/* Fail/walk.scm 210 */
			{
				BgL_nodez00_bglt BgL_auxz00_2361;

				{	/* Fail/walk.scm 212 */
					BgL_nodez00_bglt BgL_arg1688z00_2038;

					BgL_arg1688z00_2038 =
						(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_1982)))->BgL_argz00);
					BgL_auxz00_2361 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1688z00_2038);
				}
				((((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_1982)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2361), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_1982));
		}

	}



/* &fail-node!-let-var1279 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2letzd2var1279za2zzfail_walkz00(obj_t
		BgL_envz00_1983, obj_t BgL_nodez00_1984)
	{
		{	/* Fail/walk.scm 199 */
			{	/* Fail/walk.scm 201 */
				obj_t BgL_g1247z00_2040;

				BgL_g1247z00_2040 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_1984)))->BgL_bindingsz00);
				{
					obj_t BgL_l1245z00_2042;

					BgL_l1245z00_2042 = BgL_g1247z00_2040;
				BgL_zc3z04anonymousza31673ze3z87_2041:
					if (PAIRP(BgL_l1245z00_2042))
						{	/* Fail/walk.scm 201 */
							{	/* Fail/walk.scm 202 */
								obj_t BgL_bindingz00_2043;

								BgL_bindingz00_2043 = CAR(BgL_l1245z00_2042);
								{	/* Fail/walk.scm 202 */
									BgL_nodez00_bglt BgL_arg1684z00_2044;

									{	/* Fail/walk.scm 202 */
										obj_t BgL_arg1685z00_2045;

										BgL_arg1685z00_2045 = CDR(((obj_t) BgL_bindingz00_2043));
										BgL_arg1684z00_2044 =
											BGl_failzd2nodez12zc0zzfail_walkz00(
											((BgL_nodez00_bglt) BgL_arg1685z00_2045));
									}
									{	/* Fail/walk.scm 202 */
										obj_t BgL_auxz00_2380;
										obj_t BgL_tmpz00_2378;

										BgL_auxz00_2380 = ((obj_t) BgL_arg1684z00_2044);
										BgL_tmpz00_2378 = ((obj_t) BgL_bindingz00_2043);
										SET_CDR(BgL_tmpz00_2378, BgL_auxz00_2380);
									}
								}
							}
							{
								obj_t BgL_l1245z00_2383;

								BgL_l1245z00_2383 = CDR(BgL_l1245z00_2042);
								BgL_l1245z00_2042 = BgL_l1245z00_2383;
								goto BgL_zc3z04anonymousza31673ze3z87_2041;
							}
						}
					else
						{	/* Fail/walk.scm 201 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2385;

				{	/* Fail/walk.scm 204 */
					BgL_nodez00_bglt BgL_arg1687z00_2046;

					BgL_arg1687z00_2046 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_1984)))->BgL_bodyz00);
					BgL_auxz00_2385 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1687z00_2046);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_1984)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2385), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_1984));
		}

	}



/* &fail-node!-let-fun1277 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2letzd2fun1277za2zzfail_walkz00(obj_t
		BgL_envz00_1985, obj_t BgL_nodez00_1986)
	{
		{	/* Fail/walk.scm 190 */
			{	/* Fail/walk.scm 192 */
				obj_t BgL_g1244z00_2048;

				BgL_g1244z00_2048 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_1986)))->BgL_localsz00);
				{
					obj_t BgL_l1242z00_2050;

					BgL_l1242z00_2050 = BgL_g1244z00_2048;
				BgL_zc3z04anonymousza31663ze3z87_2049:
					if (PAIRP(BgL_l1242z00_2050))
						{	/* Fail/walk.scm 192 */
							BGl_failzd2funz12zc0zzfail_walkz00(CAR(BgL_l1242z00_2050));
							{
								obj_t BgL_l1242z00_2399;

								BgL_l1242z00_2399 = CDR(BgL_l1242z00_2050);
								BgL_l1242z00_2050 = BgL_l1242z00_2399;
								goto BgL_zc3z04anonymousza31663ze3z87_2049;
							}
						}
					else
						{	/* Fail/walk.scm 192 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2401;

				{	/* Fail/walk.scm 193 */
					BgL_nodez00_bglt BgL_arg1672z00_2051;

					BgL_arg1672z00_2051 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_1986)))->BgL_bodyz00);
					BgL_auxz00_2401 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1672z00_2051);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_1986)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2401), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_1986));
		}

	}



/* &fail-node!-switch1275 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2switch1275z70zzfail_walkz00(obj_t
		BgL_envz00_1987, obj_t BgL_nodez00_1988)
	{
		{	/* Fail/walk.scm 179 */
			{
				BgL_nodez00_bglt BgL_auxz00_2409;

				{	/* Fail/walk.scm 181 */
					BgL_nodez00_bglt BgL_arg1639z00_2053;

					BgL_arg1639z00_2053 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_1988)))->BgL_testz00);
					BgL_auxz00_2409 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1639z00_2053);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_1988)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2409), BUNSPEC);
			}
			{	/* Fail/walk.scm 182 */
				obj_t BgL_g1241z00_2054;

				BgL_g1241z00_2054 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_1988)))->BgL_clausesz00);
				{
					obj_t BgL_l1239z00_2056;

					BgL_l1239z00_2056 = BgL_g1241z00_2054;
				BgL_zc3z04anonymousza31640ze3z87_2055:
					if (PAIRP(BgL_l1239z00_2056))
						{	/* Fail/walk.scm 182 */
							{	/* Fail/walk.scm 183 */
								obj_t BgL_clausez00_2057;

								BgL_clausez00_2057 = CAR(BgL_l1239z00_2056);
								{	/* Fail/walk.scm 183 */
									BgL_nodez00_bglt BgL_arg1644z00_2058;

									{	/* Fail/walk.scm 183 */
										obj_t BgL_arg1652z00_2059;

										BgL_arg1652z00_2059 = CDR(((obj_t) BgL_clausez00_2057));
										BgL_arg1644z00_2058 =
											BGl_failzd2nodez12zc0zzfail_walkz00(
											((BgL_nodez00_bglt) BgL_arg1652z00_2059));
									}
									{	/* Fail/walk.scm 183 */
										obj_t BgL_auxz00_2426;
										obj_t BgL_tmpz00_2424;

										BgL_auxz00_2426 = ((obj_t) BgL_arg1644z00_2058);
										BgL_tmpz00_2424 = ((obj_t) BgL_clausez00_2057);
										SET_CDR(BgL_tmpz00_2424, BgL_auxz00_2426);
									}
								}
							}
							{
								obj_t BgL_l1239z00_2429;

								BgL_l1239z00_2429 = CDR(BgL_l1239z00_2056);
								BgL_l1239z00_2056 = BgL_l1239z00_2429;
								goto BgL_zc3z04anonymousza31640ze3z87_2055;
							}
						}
					else
						{	/* Fail/walk.scm 182 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_1988));
		}

	}



/* &fail-node!-fail1273 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2fail1273z70zzfail_walkz00(obj_t
		BgL_envz00_1989, obj_t BgL_nodez00_1990)
	{
		{	/* Fail/walk.scm 160 */
			{
				BgL_nodez00_bglt BgL_auxz00_2433;

				{	/* Fail/walk.scm 162 */
					BgL_nodez00_bglt BgL_arg1578z00_2061;

					BgL_arg1578z00_2061 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_1990)))->BgL_procz00);
					BgL_auxz00_2433 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1578z00_2061);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_1990)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2433), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2439;

				{	/* Fail/walk.scm 163 */
					BgL_nodez00_bglt BgL_arg1582z00_2062;

					BgL_arg1582z00_2062 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_1990)))->BgL_msgz00);
					BgL_auxz00_2439 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1582z00_2062);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_1990)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2439), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2445;

				{	/* Fail/walk.scm 164 */
					BgL_nodez00_bglt BgL_arg1584z00_2063;

					BgL_arg1584z00_2063 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_1990)))->BgL_objz00);
					BgL_auxz00_2445 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1584z00_2063);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_1990)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2445), BUNSPEC);
			}
			{	/* Fail/walk.scm 165 */
				bool_t BgL_test1956z00_2451;

				{	/* Fail/walk.scm 165 */
					obj_t BgL_arg1634z00_2064;

					BgL_arg1634z00_2064 =
						(((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_failz00_bglt) BgL_nodez00_1990))))->BgL_locz00);
					if (STRUCTP(BgL_arg1634z00_2064))
						{	/* Fail/walk.scm 165 */
							BgL_test1956z00_2451 =
								(STRUCT_KEY(BgL_arg1634z00_2064) == CNST_TABLE_REF(((long) 6)));
						}
					else
						{	/* Fail/walk.scm 165 */
							BgL_test1956z00_2451 = ((bool_t) 0);
						}
				}
				if (BgL_test1956z00_2451)
					{	/* Fail/walk.scm 166 */
						obj_t BgL_arg1592z00_2065;
						obj_t BgL_arg1593z00_2066;

						{	/* Fail/walk.scm 166 */
							obj_t BgL_arg1597z00_2067;

							{	/* Fail/walk.scm 166 */
								BgL_nodez00_bglt BgL_arg1599z00_2068;
								obj_t BgL_arg1604z00_2069;

								BgL_arg1599z00_2068 =
									(((BgL_failz00_bglt) COBJECT(
											((BgL_failz00_bglt) BgL_nodez00_1990)))->BgL_procz00);
								{	/* Fail/walk.scm 166 */
									BgL_nodez00_bglt BgL_arg1605z00_2070;
									obj_t BgL_arg1606z00_2071;

									BgL_arg1605z00_2070 =
										(((BgL_failz00_bglt) COBJECT(
												((BgL_failz00_bglt) BgL_nodez00_1990)))->BgL_msgz00);
									{	/* Fail/walk.scm 166 */
										BgL_nodez00_bglt BgL_arg1611z00_2072;
										obj_t BgL_arg1612z00_2073;

										BgL_arg1611z00_2072 =
											(((BgL_failz00_bglt) COBJECT(
													((BgL_failz00_bglt) BgL_nodez00_1990)))->BgL_objz00);
										{	/* Fail/walk.scm 169 */
											obj_t BgL_arg1613z00_2074;
											obj_t BgL_arg1624z00_2075;

											{	/* Fail/walk.scm 169 */
												obj_t BgL_arg1626z00_2076;

												BgL_arg1626z00_2076 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_failz00_bglt) BgL_nodez00_1990))))->
													BgL_locz00);
												BgL_arg1613z00_2074 =
													BGl_locationzd2fullzd2fnamez00zztools_locationz00
													(BgL_arg1626z00_2076);
											}
											{	/* Fail/walk.scm 170 */
												obj_t BgL_arg1627z00_2077;

												{	/* Fail/walk.scm 170 */
													obj_t BgL_sz00_2078;

													BgL_sz00_2078 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_failz00_bglt) BgL_nodez00_1990))))->
														BgL_locz00);
													BgL_arg1627z00_2077 =
														STRUCT_REF(BgL_sz00_2078, (int) (((long) 1)));
												}
												BgL_arg1624z00_2075 =
													MAKE_YOUNG_PAIR(BgL_arg1627z00_2077, BNIL);
											}
											BgL_arg1612z00_2073 =
												MAKE_YOUNG_PAIR(BgL_arg1613z00_2074,
												BgL_arg1624z00_2075);
										}
										BgL_arg1606z00_2071 =
											MAKE_YOUNG_PAIR(
											((obj_t) BgL_arg1611z00_2072), BgL_arg1612z00_2073);
									}
									BgL_arg1604z00_2069 =
										MAKE_YOUNG_PAIR(
										((obj_t) BgL_arg1605z00_2070), BgL_arg1606z00_2071);
								}
								BgL_arg1597z00_2067 =
									MAKE_YOUNG_PAIR(
									((obj_t) BgL_arg1599z00_2068), BgL_arg1604z00_2069);
							}
							BgL_arg1592z00_2065 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
								BgL_arg1597z00_2067);
						}
						BgL_arg1593z00_2066 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_failz00_bglt) BgL_nodez00_1990))))->BgL_locz00);
						return
							BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1592z00_2065, BNIL,
							BgL_arg1593z00_2066, CNST_TABLE_REF(((long) 8)));
					}
				else
					{	/* Fail/walk.scm 165 */
						return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_1990));
					}
			}
		}

	}



/* &fail-node!-condition1271 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2condition1271z70zzfail_walkz00(obj_t
		BgL_envz00_1991, obj_t BgL_nodez00_1992)
	{
		{	/* Fail/walk.scm 150 */
			{
				BgL_nodez00_bglt BgL_auxz00_2492;

				{	/* Fail/walk.scm 152 */
					BgL_nodez00_bglt BgL_arg1565z00_2080;

					BgL_arg1565z00_2080 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_1992)))->BgL_testz00);
					BgL_auxz00_2492 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1565z00_2080);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_1992)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2492), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2498;

				{	/* Fail/walk.scm 153 */
					BgL_nodez00_bglt BgL_arg1573z00_2081;

					BgL_arg1573z00_2081 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_1992)))->BgL_truez00);
					BgL_auxz00_2498 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1573z00_2081);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_1992)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2498), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2504;

				{	/* Fail/walk.scm 154 */
					BgL_nodez00_bglt BgL_arg1575z00_2082;

					BgL_arg1575z00_2082 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_1992)))->BgL_falsez00);
					BgL_auxz00_2504 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1575z00_2082);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_1992)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_2504), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_1992));
		}

	}



/* &fail-node!-setq1269 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2setq1269z70zzfail_walkz00(obj_t
		BgL_envz00_1993, obj_t BgL_nodez00_1994)
	{
		{	/* Fail/walk.scm 143 */
			((((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_1994)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_failzd2nodez12zc0zzfail_walkz00((((BgL_setqz00_bglt)
								COBJECT(((BgL_setqz00_bglt) BgL_nodez00_1994)))->
							BgL_valuez00))), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_1994));
		}

	}



/* &fail-node!-extern1267 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2extern1267z70zzfail_walkz00(obj_t
		BgL_envz00_1995, obj_t BgL_nodez00_1996)
	{
		{	/* Fail/walk.scm 136 */
			BGl_failzd2nodeza2z12z62zzfail_walkz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_1996)))->BgL_exprza2za2));
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_1996));
		}

	}



/* &fail-node!-funcall1265 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2funcall1265z70zzfail_walkz00(obj_t
		BgL_envz00_1997, obj_t BgL_nodez00_1998)
	{
		{	/* Fail/walk.scm 127 */
			{
				BgL_nodez00_bglt BgL_auxz00_2524;

				{	/* Fail/walk.scm 129 */
					BgL_nodez00_bglt BgL_arg1540z00_2086;

					BgL_arg1540z00_2086 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_1998)))->BgL_funz00);
					BgL_auxz00_2524 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1540z00_2086);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_1998)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2524), BUNSPEC);
			}
			BGl_failzd2nodeza2z12z62zzfail_walkz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_1998)))->BgL_argsz00));
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_1998));
		}

	}



/* &fail-node!-app-ly1263 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2appzd2ly1263za2zzfail_walkz00(obj_t
		BgL_envz00_1999, obj_t BgL_nodez00_2000)
	{
		{	/* Fail/walk.scm 118 */
			{
				BgL_nodez00_bglt BgL_auxz00_2535;

				{	/* Fail/walk.scm 120 */
					BgL_nodez00_bglt BgL_arg1536z00_2088;

					BgL_arg1536z00_2088 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2000)))->BgL_funz00);
					BgL_auxz00_2535 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1536z00_2088);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2000)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2535), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_2541;

				{	/* Fail/walk.scm 121 */
					BgL_nodez00_bglt BgL_arg1537z00_2089;

					BgL_arg1537z00_2089 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2000)))->BgL_argz00);
					BgL_auxz00_2541 =
						BGl_failzd2nodez12zc0zzfail_walkz00(BgL_arg1537z00_2089);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2000)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2541), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2000));
		}

	}



/* &fail-node!-app1261 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2app1261z70zzfail_walkz00(obj_t
		BgL_envz00_2001, obj_t BgL_nodez00_2002)
	{
		{	/* Fail/walk.scm 100 */
			BGl_failzd2nodeza2z12z62zzfail_walkz00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2002)))->BgL_argsz00));
			{	/* Fail/walk.scm 103 */
				bool_t BgL_test1958z00_2552;

				{	/* Fail/walk.scm 103 */
					bool_t BgL_test1959z00_2553;

					{	/* Fail/walk.scm 103 */
						obj_t BgL_arg1528z00_2091;

						BgL_arg1528z00_2091 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_2002))))->BgL_locz00);
						if (STRUCTP(BgL_arg1528z00_2091))
							{	/* Fail/walk.scm 103 */
								BgL_test1959z00_2553 =
									(STRUCT_KEY(BgL_arg1528z00_2091) ==
									CNST_TABLE_REF(((long) 6)));
							}
						else
							{	/* Fail/walk.scm 103 */
								BgL_test1959z00_2553 = ((bool_t) 0);
							}
					}
					if (BgL_test1959z00_2553)
						{	/* Fail/walk.scm 104 */
							BgL_variablez00_bglt BgL_arg1518z00_2092;

							BgL_arg1518z00_2092 =
								(((BgL_varz00_bglt) COBJECT(
										(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2002)))->
											BgL_funz00)))->BgL_variablez00);
							BgL_test1958z00_2552 =
								(((obj_t) BgL_arg1518z00_2092) ==
								BGl_za2errorza2z00zzfail_walkz00);
						}
					else
						{	/* Fail/walk.scm 103 */
							BgL_test1958z00_2552 = ((bool_t) 0);
						}
				}
				if (BgL_test1958z00_2552)
					{	/* Fail/walk.scm 105 */
						obj_t BgL_arg1421z00_2093;
						obj_t BgL_arg1422z00_2094;

						{	/* Fail/walk.scm 105 */
							obj_t BgL_arg1441z00_2095;

							{	/* Fail/walk.scm 105 */
								obj_t BgL_arg1442z00_2096;
								obj_t BgL_arg1448z00_2097;

								BgL_arg1442z00_2096 =
									CAR(
									(((BgL_appz00_bglt) COBJECT(
												((BgL_appz00_bglt) BgL_nodez00_2002)))->BgL_argsz00));
								{	/* Fail/walk.scm 106 */
									obj_t BgL_arg1461z00_2098;
									obj_t BgL_arg1462z00_2099;

									{	/* Fail/walk.scm 106 */
										obj_t BgL_pairz00_2100;

										BgL_pairz00_2100 =
											(((BgL_appz00_bglt) COBJECT(
													((BgL_appz00_bglt) BgL_nodez00_2002)))->BgL_argsz00);
										BgL_arg1461z00_2098 = CAR(CDR(BgL_pairz00_2100));
									}
									{	/* Fail/walk.scm 107 */
										obj_t BgL_arg1465z00_2101;
										obj_t BgL_arg1474z00_2102;

										{	/* Fail/walk.scm 107 */
											obj_t BgL_pairz00_2103;

											BgL_pairz00_2103 =
												(((BgL_appz00_bglt) COBJECT(
														((BgL_appz00_bglt) BgL_nodez00_2002)))->
												BgL_argsz00);
											BgL_arg1465z00_2101 = CAR(CDR(CDR(BgL_pairz00_2103)));
										}
										{	/* Fail/walk.scm 108 */
											obj_t BgL_arg1477z00_2104;
											obj_t BgL_arg1489z00_2105;

											{	/* Fail/walk.scm 108 */
												obj_t BgL_arg1493z00_2106;

												BgL_arg1493z00_2106 =
													(((BgL_nodez00_bglt) COBJECT(
															((BgL_nodez00_bglt)
																((BgL_appz00_bglt) BgL_nodez00_2002))))->
													BgL_locz00);
												BgL_arg1477z00_2104 =
													BGl_locationzd2fullzd2fnamez00zztools_locationz00
													(BgL_arg1493z00_2106);
											}
											{	/* Fail/walk.scm 109 */
												obj_t BgL_arg1495z00_2107;

												{	/* Fail/walk.scm 109 */
													obj_t BgL_sz00_2108;

													BgL_sz00_2108 =
														(((BgL_nodez00_bglt) COBJECT(
																((BgL_nodez00_bglt)
																	((BgL_appz00_bglt) BgL_nodez00_2002))))->
														BgL_locz00);
													BgL_arg1495z00_2107 =
														STRUCT_REF(BgL_sz00_2108, (int) (((long) 1)));
												}
												BgL_arg1489z00_2105 =
													MAKE_YOUNG_PAIR(BgL_arg1495z00_2107, BNIL);
											}
											BgL_arg1474z00_2102 =
												MAKE_YOUNG_PAIR(BgL_arg1477z00_2104,
												BgL_arg1489z00_2105);
										}
										BgL_arg1462z00_2099 =
											MAKE_YOUNG_PAIR(BgL_arg1465z00_2101, BgL_arg1474z00_2102);
									}
									BgL_arg1448z00_2097 =
										MAKE_YOUNG_PAIR(BgL_arg1461z00_2098, BgL_arg1462z00_2099);
								}
								BgL_arg1441z00_2095 =
									MAKE_YOUNG_PAIR(BgL_arg1442z00_2096, BgL_arg1448z00_2097);
							}
							BgL_arg1421z00_2093 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
								BgL_arg1441z00_2095);
						}
						BgL_arg1422z00_2094 =
							(((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_nodez00_2002))))->BgL_locz00);
						return
							BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1421z00_2093, BNIL,
							BgL_arg1422z00_2094, CNST_TABLE_REF(((long) 8)));
					}
				else
					{	/* Fail/walk.scm 103 */
						return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2002));
					}
			}
		}

	}



/* &fail-node!-sync1259 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2sync1259z70zzfail_walkz00(obj_t
		BgL_envz00_2003, obj_t BgL_nodez00_2004)
	{
		{	/* Fail/walk.scm 91 */
			((((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2004)))->BgL_mutexz00) =
				((BgL_nodez00_bglt)
					BGl_failzd2nodez12zc0zzfail_walkz00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2004)))->
							BgL_mutexz00))), BUNSPEC);
			((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2004)))->
					BgL_prelockz00) =
				((BgL_nodez00_bglt)
					BGl_failzd2nodez12zc0zzfail_walkz00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2004)))->
							BgL_prelockz00))), BUNSPEC);
			((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2004)))->
					BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_failzd2nodez12zc0zzfail_walkz00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2004)))->BgL_bodyz00))),
				BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2004));
		}

	}



/* &fail-node!-sequence1257 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2sequence1257z70zzfail_walkz00(obj_t
		BgL_envz00_2005, obj_t BgL_nodez00_2006)
	{
		{	/* Fail/walk.scm 84 */
			BGl_failzd2nodeza2z12z62zzfail_walkz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2006)))->BgL_nodesz00));
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2006));
		}

	}



/* &fail-node!-var1255 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2var1255z70zzfail_walkz00(obj_t
		BgL_envz00_2007, obj_t BgL_nodez00_2008)
	{
		{	/* Fail/walk.scm 78 */
			return ((BgL_nodez00_bglt) ((BgL_varz00_bglt) BgL_nodez00_2008));
		}

	}



/* &fail-node!-kwote1253 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2kwote1253z70zzfail_walkz00(obj_t
		BgL_envz00_2009, obj_t BgL_nodez00_2010)
	{
		{	/* Fail/walk.scm 72 */
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_2010));
		}

	}



/* &fail-node!-atom1251 */
	BgL_nodez00_bglt BGl_z62failzd2nodez12zd2atom1251z70zzfail_walkz00(obj_t
		BgL_envz00_2011, obj_t BgL_nodez00_2012)
	{
		{	/* Fail/walk.scm 66 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_2012));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzfail_walkz00()
	{
		{	/* Fail/walk.scm 18 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1896z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1896z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1896z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1896z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1896z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1896z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1896z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1896z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1896z00zzfail_walkz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1896z00zzfail_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1896z00zzfail_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
