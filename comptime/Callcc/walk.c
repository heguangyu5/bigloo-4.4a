/*===========================================================================*/
/*   (Callcc/walk.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Callcc/walk.scm) */
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

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

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

	typedef struct BgL_localzf2cellzf2_bgl
	{
	}                      *BgL_localzf2cellzf2_bglt;


	static BgL_nodez00_bglt
		BGl_z62callccz12zd2sequence1316za2zzcallcc_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62callccz12z70zzcallcc_walkz00(obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_callccza2z12zb0zzcallcc_walkz00(obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzcallcc_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2conditional1332za2zzcallcc_walkz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_callcczd2walkz12zc0zzcallcc_walkz00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcallcc_walkz00();
	extern obj_t BGl_externz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2appzd2ly1322z70zzcallcc_walkz00(obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2typez00zztype_cachez00(BgL_typez00_bglt);
	static obj_t BGl_localzf2cellzf2zzcallcc_walkz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2extern1326za2zzcallcc_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_cellzd2formalszd2zzcallcc_walkz00(obj_t,
		BgL_nodez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_nodez00_bglt BGl_callccz12z12zzcallcc_walkz00(BgL_nodez00_bglt);
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2setzd2exzd2it1343za2zzcallcc_walkz00(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62callccz12zd2cast1328za2zzcallcc_walkz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2funcall1324za2zzcallcc_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62callccz12zd2setq1330za2zzcallcc_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62callcczd2walkz12za2zzcallcc_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcallcc_walkz00();
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2boxzd2ref1349z70zzcallcc_walkz00(obj_t, obj_t);
	static bool_t BGl_callcczd2funz12zc0zzcallcc_walkz00(obj_t);
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2makezd2box1347z70zzcallcc_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2boxzd2setz121351z62zzcallcc_walkz00(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62lambda1642z62zzcallcc_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static BgL_localz00_bglt BGl_z62lambda1653z62zzcallcc_walkz00(obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62lambda1664z62zzcallcc_walkz00(obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00(BgL_typez00_bglt);
	extern obj_t BGl_setqz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62callccz12zd2app1320za2zzcallcc_walkz00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcallcc_walkz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcallcc_walkz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcallcc_walkz00();
	extern obj_t BGl_za2cellza2z00zztype_cachez00;
	static BgL_nodez00_bglt BGl_z62callccz12zd2atom1310za2zzcallcc_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_typez00zztype_typez00;
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2letzd2fun1339z70zzcallcc_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62callccz121307z70zzcallcc_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static bool_t BGl_celledzf3zf3zzcallcc_walkz00(BgL_variablez00_bglt);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2switch1337za2zzcallcc_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static BgL_nodez00_bglt BGl_z62callccz12zd2kwote1312za2zzcallcc_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcallcc_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
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
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcallcc_walkz00();
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2letzd2var1341z70zzcallcc_walkz00(obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcallcc_walkz00();
	static BgL_nodez00_bglt BGl_z62callccz12zd2sync1318za2zzcallcc_walkz00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcallcc_walkz00();
	static BgL_nodez00_bglt BGl_z62callccz12zd2fail1335za2zzcallcc_walkz00(obj_t,
		obj_t);
	static obj_t BGl_celledzd2bindingszd2zzcallcc_walkz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_valuez00zzast_varz00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	static BgL_makezd2boxzd2_bglt
		BGl_azd2makezd2cellz00zzcallcc_walkz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt);
	static BgL_nodez00_bglt BGl_z62callccz12zd2var1314za2zzcallcc_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62zc3z04anonymousza31663ze3ze5zzcallcc_walkz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62callccz12zd2jumpzd2exzd2it1345za2zzcallcc_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[9];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1957z00zzcallcc_walkz00,
		BgL_bgl_za762lambda1664za7621991z00, BGl_z62lambda1664z62zzcallcc_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1958z00zzcallcc_walkz00,
		BgL_bgl_za762za7c3za704anonymo1992za7,
		BGl_z62zc3z04anonymousza31663ze3ze5zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1959z00zzcallcc_walkz00,
		BgL_bgl_za762lambda1653za7621993z00, BGl_z62lambda1653z62zzcallcc_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1960z00zzcallcc_walkz00,
		BgL_bgl_za762lambda1642za7621994z00, BGl_z62lambda1642z62zzcallcc_walkz00,
		0L, BUNSPEC, 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1961z00zzcallcc_walkz00,
		BgL_bgl_za762callccza71213071995z00,
		BGl_z62callccz121307z70zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1964z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2a1996za7,
		BGl_z62callccz12zd2atom1310za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1966z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2k1997za7,
		BGl_z62callccz12zd2kwote1312za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1967z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2v1998za7,
		BGl_z62callccz12zd2var1314za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1968z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2s1999za7,
		BGl_z62callccz12zd2sequence1316za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1969z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2s2000za7,
		BGl_z62callccz12zd2sync1318za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1970z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2a2001za7,
		BGl_z62callccz12zd2app1320za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1971z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2a2002za7,
		BGl_z62callccz12zd2appzd2ly1322z70zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1972z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2f2003za7,
		BGl_z62callccz12zd2funcall1324za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1973z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2e2004za7,
		BGl_z62callccz12zd2extern1326za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1974z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2c2005za7,
		BGl_z62callccz12zd2cast1328za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1975z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2s2006za7,
		BGl_z62callccz12zd2setq1330za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1976z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2c2007za7,
		BGl_z62callccz12zd2conditional1332za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1977z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2f2008za7,
		BGl_z62callccz12zd2fail1335za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1978z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2s2009za7,
		BGl_z62callccz12zd2switch1337za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1979z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2l2010za7,
		BGl_z62callccz12zd2letzd2fun1339z70zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1980z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2l2011za7,
		BGl_z62callccz12zd2letzd2var1341z70zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1981z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2s2012za7,
		BGl_z62callccz12zd2setzd2exzd2it1343za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1982z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2j2013za7,
		BGl_z62callccz12zd2jumpzd2exzd2it1345za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1983z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2m2014za7,
		BGl_z62callccz12zd2makezd2box1347z70zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1984z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2b2015za7,
		BGl_z62callccz12zd2boxzd2ref1349z70zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1985z00zzcallcc_walkz00,
		BgL_bgl_za762callccza712za7d2b2016za7,
		BGl_z62callccz12zd2boxzd2setz121351z62zzcallcc_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_callcczd2walkz12zd2envz12zzcallcc_walkz00,
		BgL_bgl_za762callccza7d2walk2017z00,
		BGl_z62callcczd2walkz12za2zzcallcc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1949z00zzcallcc_walkz00,
		BgL_bgl_string1949za700za7za7c2018za7, "Callcc", 6);
	      DEFINE_STRING(BGl_string1950z00zzcallcc_walkz00,
		BgL_bgl_string1950za700za7za7c2019za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1951z00zzcallcc_walkz00,
		BgL_bgl_string1951za700za7za7c2020za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1952z00zzcallcc_walkz00,
		BgL_bgl_string1952za700za7za7c2021za7, " error", 6);
	      DEFINE_STRING(BGl_string1953z00zzcallcc_walkz00,
		BgL_bgl_string1953za700za7za7c2022za7, "s", 1);
	      DEFINE_STRING(BGl_string1954z00zzcallcc_walkz00,
		BgL_bgl_string1954za700za7za7c2023za7, "", 0);
	      DEFINE_STRING(BGl_string1955z00zzcallcc_walkz00,
		BgL_bgl_string1955za700za7za7c2024za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1956z00zzcallcc_walkz00,
		BgL_bgl_string1956za700za7za7c2025za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1962z00zzcallcc_walkz00,
		BgL_bgl_string1962za700za7za7c2026za7, "callcc!1307", 11);
	      DEFINE_STRING(BGl_string1963z00zzcallcc_walkz00,
		BgL_bgl_string1963za700za7za7c2027za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1965z00zzcallcc_walkz00,
		BgL_bgl_string1965za700za7za7c2028za7, "callcc!", 7);
	      DEFINE_STRING(BGl_string1986z00zzcallcc_walkz00,
		BgL_bgl_string1986za700za7za7c2029za7, "callcc_walk", 11);
	      DEFINE_STRING(BGl_string1987z00zzcallcc_walkz00,
		BgL_bgl_string1987za700za7za7c2030za7,
		"aux callcc!1307 _ callcc_walk local/cell done write cell-callcc pass-started ",
		77);
	      DEFINE_STATIC_BGL_GENERIC(BGl_callccz12zd2envzc0zzcallcc_walkz00,
		BgL_bgl_za762callccza712za770za72031z00,
		BGl_z62callccz12z70zzcallcc_walkz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_localzf2cellzf2zzcallcc_walkz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcallcc_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcallcc_walkz00(long
		BgL_checksumz00_2465, char *BgL_fromz00_2466)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcallcc_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzcallcc_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcallcc_walkz00();
					BGl_libraryzd2moduleszd2initz00zzcallcc_walkz00();
					BGl_cnstzd2initzd2zzcallcc_walkz00();
					BGl_importedzd2moduleszd2initz00zzcallcc_walkz00();
					BGl_objectzd2initzd2zzcallcc_walkz00();
					BGl_genericzd2initzd2zzcallcc_walkz00();
					BGl_methodzd2initzd2zzcallcc_walkz00();
					return BGl_toplevelzd2initzd2zzcallcc_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcallcc_walkz00()
	{
		{	/* Callcc/walk.scm 16 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "callcc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"callcc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"callcc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"callcc_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "callcc_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "callcc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"callcc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"callcc_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "callcc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"callcc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"callcc_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcallcc_walkz00()
	{
		{	/* Callcc/walk.scm 16 */
			{	/* Callcc/walk.scm 16 */
				obj_t BgL_cportz00_2319;

				{	/* Callcc/walk.scm 16 */
					obj_t BgL_stringz00_2327;

					BgL_stringz00_2327 = BGl_string1987z00zzcallcc_walkz00;
					{	/* Callcc/walk.scm 16 */
						obj_t BgL_startz00_2328;

						BgL_startz00_2328 = BINT(((long) 0));
						{	/* Callcc/walk.scm 16 */
							obj_t BgL_endz00_2329;

							BgL_endz00_2329 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2327)));
							{	/* Callcc/walk.scm 16 */

								BgL_cportz00_2319 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2327, BgL_startz00_2328, BgL_endz00_2329);
				}}}}
				{
					long BgL_iz00_2320;

					BgL_iz00_2320 = ((long) 8);
				BgL_loopz00_2321:
					if ((BgL_iz00_2320 == ((long) -1)))
						{	/* Callcc/walk.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Callcc/walk.scm 16 */
							{	/* Callcc/walk.scm 16 */
								obj_t BgL_arg1989z00_2323;

								{	/* Callcc/walk.scm 16 */

									{	/* Callcc/walk.scm 16 */
										obj_t BgL_locationz00_2325;

										BgL_locationz00_2325 = BBOOL(((bool_t) 0));
										{	/* Callcc/walk.scm 16 */

											BgL_arg1989z00_2323 =
												BGl_readz00zz__readerz00(BgL_cportz00_2319,
												BgL_locationz00_2325);
										}
									}
								}
								{	/* Callcc/walk.scm 16 */
									int BgL_tmpz00_2498;

									BgL_tmpz00_2498 = (int) (BgL_iz00_2320);
									CNST_TABLE_SET(BgL_tmpz00_2498, BgL_arg1989z00_2323);
							}}
							{	/* Callcc/walk.scm 16 */
								int BgL_auxz00_2326;

								BgL_auxz00_2326 = (int) ((BgL_iz00_2320 - ((long) 1)));
								{
									long BgL_iz00_2503;

									BgL_iz00_2503 = (long) (BgL_auxz00_2326);
									BgL_iz00_2320 = BgL_iz00_2503;
									goto BgL_loopz00_2321;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcallcc_walkz00()
	{
		{	/* Callcc/walk.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcallcc_walkz00()
	{
		{	/* Callcc/walk.scm 16 */
			return BUNSPEC;
		}

	}



/* callcc-walk! */
	BGL_EXPORTED_DEF obj_t BGl_callcczd2walkz12zc0zzcallcc_walkz00(obj_t
		BgL_globalsz00_48)
	{
		{	/* Callcc/walk.scm 31 */
			{	/* Callcc/walk.scm 32 */
				obj_t BgL_list1364z00_1406;

				{	/* Callcc/walk.scm 32 */
					obj_t BgL_arg1367z00_1407;

					{	/* Callcc/walk.scm 32 */
						obj_t BgL_arg1370z00_1408;

						BgL_arg1370z00_1408 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1367z00_1407 =
							MAKE_YOUNG_PAIR(BGl_string1949z00zzcallcc_walkz00,
							BgL_arg1370z00_1408);
					}
					BgL_list1364z00_1406 =
						MAKE_YOUNG_PAIR(BGl_string1950z00zzcallcc_walkz00,
						BgL_arg1367z00_1407);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1364z00_1406);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1949z00zzcallcc_walkz00;
			{	/* Callcc/walk.scm 32 */
				obj_t BgL_g1126z00_1409;

				BgL_g1126z00_1409 = BNIL;
				{
					obj_t BgL_hooksz00_1412;
					obj_t BgL_hnamesz00_1413;

					BgL_hooksz00_1412 = BgL_g1126z00_1409;
					BgL_hnamesz00_1413 = BNIL;
				BgL_zc3z04anonymousza31371ze3z87_1414:
					if (NULLP(BgL_hooksz00_1412))
						{	/* Callcc/walk.scm 32 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Callcc/walk.scm 32 */
							bool_t BgL_test2035z00_2516;

							{	/* Callcc/walk.scm 32 */
								obj_t BgL_fun1384z00_1421;

								BgL_fun1384z00_1421 = CAR(((obj_t) BgL_hooksz00_1412));
								BgL_test2035z00_2516 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1384z00_1421)
									(BgL_fun1384z00_1421, BEOA));
							}
							if (BgL_test2035z00_2516)
								{	/* Callcc/walk.scm 32 */
									obj_t BgL_arg1381z00_1418;
									obj_t BgL_arg1382z00_1419;

									BgL_arg1381z00_1418 = CDR(((obj_t) BgL_hooksz00_1412));
									BgL_arg1382z00_1419 = CDR(((obj_t) BgL_hnamesz00_1413));
									{
										obj_t BgL_hnamesz00_2528;
										obj_t BgL_hooksz00_2527;

										BgL_hooksz00_2527 = BgL_arg1381z00_1418;
										BgL_hnamesz00_2528 = BgL_arg1382z00_1419;
										BgL_hnamesz00_1413 = BgL_hnamesz00_2528;
										BgL_hooksz00_1412 = BgL_hooksz00_2527;
										goto BgL_zc3z04anonymousza31371ze3z87_1414;
									}
								}
							else
								{	/* Callcc/walk.scm 32 */
									obj_t BgL_arg1383z00_1420;

									BgL_arg1383z00_1420 = CAR(((obj_t) BgL_hnamesz00_1413));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1949z00zzcallcc_walkz00,
										BGl_string1951z00zzcallcc_walkz00, BgL_arg1383z00_1420);
								}
						}
				}
			}
			if (
				((long) CINT(BGl_za2compilerzd2debugza2zd2zzengine_paramz00) >=
					((long) 2)))
				{	/* Callcc/walk.scm 34 */
					BGl_za2compilerzd2debugza2zd2zzengine_paramz00 = BINT(((long) 1));
				}
			else
				{	/* Callcc/walk.scm 34 */
					BFALSE;
				}
			{
				obj_t BgL_l1284z00_1426;

				BgL_l1284z00_1426 = BgL_globalsz00_48;
			BgL_zc3z04anonymousza31390ze3z87_1427:
				if (PAIRP(BgL_l1284z00_1426))
					{	/* Callcc/walk.scm 36 */
						BGl_callcczd2funz12zc0zzcallcc_walkz00(CAR(BgL_l1284z00_1426));
						{
							obj_t BgL_l1284z00_2540;

							BgL_l1284z00_2540 = CDR(BgL_l1284z00_1426);
							BgL_l1284z00_1426 = BgL_l1284z00_2540;
							goto BgL_zc3z04anonymousza31390ze3z87_1427;
						}
					}
				else
					{	/* Callcc/walk.scm 36 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Callcc/walk.scm 37 */
					{	/* Callcc/walk.scm 37 */
						obj_t BgL_port1286z00_1434;

						{	/* Callcc/walk.scm 37 */
							obj_t BgL_res1899z00_1978;

							{	/* Callcc/walk.scm 37 */
								obj_t BgL_tmpz00_2545;

								BgL_tmpz00_2545 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1899z00_1978 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2545);
							}
							BgL_port1286z00_1434 = BgL_res1899z00_1978;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1286z00_1434);
						bgl_display_string(BGl_string1952z00zzcallcc_walkz00,
							BgL_port1286z00_1434);
						{	/* Callcc/walk.scm 37 */
							obj_t BgL_arg1417z00_1435;

							{	/* Callcc/walk.scm 37 */
								bool_t BgL_test2039z00_2550;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Callcc/walk.scm 37 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Callcc/walk.scm 37 */
												BgL_test2039z00_2550 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Callcc/walk.scm 37 */
												BgL_test2039z00_2550 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Callcc/walk.scm 37 */
										BgL_test2039z00_2550 = ((bool_t) 0);
									}
								if (BgL_test2039z00_2550)
									{	/* Callcc/walk.scm 37 */
										BgL_arg1417z00_1435 = BGl_string1953z00zzcallcc_walkz00;
									}
								else
									{	/* Callcc/walk.scm 37 */
										BgL_arg1417z00_1435 = BGl_string1954z00zzcallcc_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1417z00_1435, BgL_port1286z00_1434);
						}
						bgl_display_string(BGl_string1955z00zzcallcc_walkz00,
							BgL_port1286z00_1434);
						bgl_display_char(((unsigned char) 10), BgL_port1286z00_1434);
					}
					{	/* Callcc/walk.scm 37 */
						obj_t BgL_list1422z00_1441;

						BgL_list1422z00_1441 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1422z00_1441);
					}
				}
			else
				{	/* Callcc/walk.scm 37 */
					obj_t BgL_g1128z00_1442;

					BgL_g1128z00_1442 = BNIL;
					{
						obj_t BgL_hooksz00_1445;
						obj_t BgL_hnamesz00_1446;

						BgL_hooksz00_1445 = BgL_g1128z00_1442;
						BgL_hnamesz00_1446 = BNIL;
					BgL_zc3z04anonymousza31423ze3z87_1447:
						if (NULLP(BgL_hooksz00_1445))
							{	/* Callcc/walk.scm 37 */
								return BgL_globalsz00_48;
							}
						else
							{	/* Callcc/walk.scm 37 */
								bool_t BgL_test2043z00_2567;

								{	/* Callcc/walk.scm 37 */
									obj_t BgL_fun1450z00_1454;

									BgL_fun1450z00_1454 = CAR(((obj_t) BgL_hooksz00_1445));
									BgL_test2043z00_2567 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1450z00_1454)
										(BgL_fun1450z00_1454, BEOA));
								}
								if (BgL_test2043z00_2567)
									{	/* Callcc/walk.scm 37 */
										obj_t BgL_arg1441z00_1451;
										obj_t BgL_arg1442z00_1452;

										BgL_arg1441z00_1451 = CDR(((obj_t) BgL_hooksz00_1445));
										BgL_arg1442z00_1452 = CDR(((obj_t) BgL_hnamesz00_1446));
										{
											obj_t BgL_hnamesz00_2579;
											obj_t BgL_hooksz00_2578;

											BgL_hooksz00_2578 = BgL_arg1441z00_1451;
											BgL_hnamesz00_2579 = BgL_arg1442z00_1452;
											BgL_hnamesz00_1446 = BgL_hnamesz00_2579;
											BgL_hooksz00_1445 = BgL_hooksz00_2578;
											goto BgL_zc3z04anonymousza31423ze3z87_1447;
										}
									}
								else
									{	/* Callcc/walk.scm 37 */
										obj_t BgL_arg1448z00_1453;

										BgL_arg1448z00_1453 = CAR(((obj_t) BgL_hnamesz00_1446));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string1956z00zzcallcc_walkz00, BgL_arg1448z00_1453);
									}
							}
					}
				}
		}

	}



/* &callcc-walk! */
	obj_t BGl_z62callcczd2walkz12za2zzcallcc_walkz00(obj_t BgL_envz00_2227,
		obj_t BgL_globalsz00_2228)
	{
		{	/* Callcc/walk.scm 31 */
			return BGl_callcczd2walkz12zc0zzcallcc_walkz00(BgL_globalsz00_2228);
		}

	}



/* callcc-fun! */
	bool_t BGl_callcczd2funz12zc0zzcallcc_walkz00(obj_t BgL_varz00_49)
	{
		{	/* Callcc/walk.scm 42 */
			{	/* Callcc/walk.scm 43 */
				BgL_valuez00_bglt BgL_funz00_1457;

				BgL_funz00_1457 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_49)))->BgL_valuez00);
				{	/* Callcc/walk.scm 43 */
					obj_t BgL_bodyz00_1458;

					BgL_bodyz00_1458 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1457)))->BgL_bodyz00);
					{	/* Callcc/walk.scm 44 */
						obj_t BgL_celledz00_1459;

						{	/* Callcc/walk.scm 45 */
							obj_t BgL_arg1493z00_1479;

							BgL_arg1493z00_1479 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt) BgL_funz00_1457)))->BgL_argsz00);
							BgL_celledz00_1459 =
								BGl_celledzd2bindingszd2zzcallcc_walkz00(BgL_arg1493z00_1479);
						}
						{	/* Callcc/walk.scm 45 */

							{
								obj_t BgL_l1287z00_1461;

								BgL_l1287z00_1461 = BgL_celledz00_1459;
							BgL_zc3z04anonymousza31452ze3z87_1462:
								if (PAIRP(BgL_l1287z00_1461))
									{	/* Callcc/walk.scm 47 */
										{	/* Callcc/walk.scm 48 */
											obj_t BgL_wzd2bzd2_1464;

											BgL_wzd2bzd2_1464 = CAR(BgL_l1287z00_1461);
											{	/* Callcc/walk.scm 48 */
												obj_t BgL_arg1461z00_1465;
												obj_t BgL_arg1462z00_1466;

												BgL_arg1461z00_1465 = CAR(((obj_t) BgL_wzd2bzd2_1464));
												BgL_arg1462z00_1466 = CDR(((obj_t) BgL_wzd2bzd2_1464));
												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_arg1461z00_1465))))->
														BgL_fastzd2alphazd2) =
													((obj_t) BgL_arg1462z00_1466), BUNSPEC);
											}
										}
										{
											obj_t BgL_l1287z00_2601;

											BgL_l1287z00_2601 = CDR(BgL_l1287z00_1461);
											BgL_l1287z00_1461 = BgL_l1287z00_2601;
											goto BgL_zc3z04anonymousza31452ze3z87_1462;
										}
									}
								else
									{	/* Callcc/walk.scm 47 */
										((bool_t) 1);
									}
							}
							{	/* Callcc/walk.scm 50 */
								BgL_nodez00_bglt BgL_arg1465z00_1469;

								{	/* Callcc/walk.scm 50 */
									BgL_nodez00_bglt BgL_arg1474z00_1470;

									BgL_arg1474z00_1470 =
										BGl_callccz12z12zzcallcc_walkz00(
										((BgL_nodez00_bglt) BgL_bodyz00_1458));
									BgL_arg1465z00_1469 =
										BGl_cellzd2formalszd2zzcallcc_walkz00(BgL_celledz00_1459,
										BgL_arg1474z00_1470);
								}
								((((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_funz00_1457)))->BgL_bodyz00) =
									((obj_t) ((obj_t) BgL_arg1465z00_1469)), BUNSPEC);
							}
							{
								obj_t BgL_l1289z00_1472;

								BgL_l1289z00_1472 = BgL_celledz00_1459;
							BgL_zc3z04anonymousza31475ze3z87_1473:
								if (PAIRP(BgL_l1289z00_1472))
									{	/* Callcc/walk.scm 52 */
										{	/* Callcc/walk.scm 53 */
											obj_t BgL_wzd2bzd2_1475;

											BgL_wzd2bzd2_1475 = CAR(BgL_l1289z00_1472);
											{	/* Callcc/walk.scm 53 */
												obj_t BgL_arg1477z00_1476;

												BgL_arg1477z00_1476 = CAR(((obj_t) BgL_wzd2bzd2_1475));
												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_arg1477z00_1476))))->
														BgL_fastzd2alphazd2) = ((obj_t) BUNSPEC), BUNSPEC);
											}
										}
										{
											obj_t BgL_l1289z00_2617;

											BgL_l1289z00_2617 = CDR(BgL_l1289z00_1472);
											BgL_l1289z00_1472 = BgL_l1289z00_2617;
											goto BgL_zc3z04anonymousza31475ze3z87_1473;
										}
									}
								else
									{	/* Callcc/walk.scm 52 */
										return ((bool_t) 1);
									}
							}
						}
					}
				}
			}
		}

	}



/* celled-bindings */
	obj_t BGl_celledzd2bindingszd2zzcallcc_walkz00(obj_t BgL_formalsz00_50)
	{
		{	/* Callcc/walk.scm 59 */
			{
				obj_t BgL_celledz00_1482;
				obj_t BgL_formalsz00_1483;

				BgL_celledz00_1482 = BNIL;
				BgL_formalsz00_1483 = BgL_formalsz00_50;
			BgL_zc3z04anonymousza31494ze3z87_1484:
				if (NULLP(BgL_formalsz00_1483))
					{	/* Callcc/walk.scm 63 */
						return BgL_celledz00_1482;
					}
				else
					{	/* Callcc/walk.scm 65 */
						bool_t BgL_test2047z00_2621;

						{	/* Callcc/walk.scm 65 */
							obj_t BgL_arg1561z00_1506;

							BgL_arg1561z00_1506 = CAR(((obj_t) BgL_formalsz00_1483));
							BgL_test2047z00_2621 =
								BGl_celledzf3zf3zzcallcc_walkz00(
								((BgL_variablez00_bglt) BgL_arg1561z00_1506));
						}
						if (BgL_test2047z00_2621)
							{	/* Callcc/walk.scm 68 */
								BgL_typez00_bglt BgL_vtypez00_1488;

								BgL_vtypez00_1488 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt)
													CAR(((obj_t) BgL_formalsz00_1483))))))->BgL_typez00);
								{	/* Callcc/walk.scm 68 */
									obj_t BgL_ntypez00_1489;

									if (
										(((obj_t) BgL_vtypez00_1488) ==
											BGl_za2_za2z00zztype_cachez00))
										{	/* Callcc/walk.scm 70 */
											BgL_ntypez00_1489 = BGl_za2objza2z00zztype_cachez00;
										}
									else
										{	/* Callcc/walk.scm 70 */
											if (BGl_bigloozd2typezf3z21zztype_typez00
												(BgL_vtypez00_1488))
												{	/* Callcc/walk.scm 71 */
													BgL_ntypez00_1489 = ((obj_t) BgL_vtypez00_1488);
												}
											else
												{	/* Callcc/walk.scm 71 */
													BgL_ntypez00_1489 =
														((obj_t)
														BGl_getzd2bigloozd2typez00zztype_cachez00
														(BgL_vtypez00_1488));
												}
										}
									{	/* Callcc/walk.scm 69 */
										BgL_localz00_bglt BgL_varz00_1490;

										{	/* Callcc/walk.scm 73 */
											obj_t BgL_arg1537z00_1500;

											BgL_arg1537z00_1500 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt)
																CAR(
																	((obj_t) BgL_formalsz00_1483))))))->
												BgL_idz00);
											BgL_varz00_1490 =
												BGl_makezd2localzd2svarz00zzast_localz00
												(BgL_arg1537z00_1500,
												((BgL_typez00_bglt) BGl_za2cellza2z00zztype_cachez00));
										}
										{	/* Callcc/walk.scm 73 */
											obj_t BgL_ozd2nzd2_1491;

											{	/* Callcc/walk.scm 74 */
												obj_t BgL_arg1536z00_1499;

												BgL_arg1536z00_1499 =
													CAR(((obj_t) BgL_formalsz00_1483));
												BgL_ozd2nzd2_1491 =
													MAKE_YOUNG_PAIR(BgL_arg1536z00_1499,
													((obj_t) BgL_varz00_1490));
											}
											{	/* Callcc/walk.scm 74 */

												{	/* Callcc/walk.scm 75 */
													BgL_localzf2cellzf2_bglt BgL_wide1133z00_1494;

													BgL_wide1133z00_1494 =
														((BgL_localzf2cellzf2_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_localzf2cellzf2_bgl))));
													{	/* Callcc/walk.scm 75 */
														obj_t BgL_auxz00_2654;
														BgL_objectz00_bglt BgL_tmpz00_2651;

														BgL_auxz00_2654 = ((obj_t) BgL_wide1133z00_1494);
														BgL_tmpz00_2651 =
															((BgL_objectz00_bglt)
															((BgL_localz00_bglt) BgL_varz00_1490));
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2651,
															BgL_auxz00_2654);
													}
													((BgL_objectz00_bglt)
														((BgL_localz00_bglt) BgL_varz00_1490));
													{	/* Callcc/walk.scm 75 */
														long BgL_arg1518z00_1495;

														{	/* Callcc/walk.scm 75 */
															long BgL_res1907z00_2018;

															BgL_res1907z00_2018 =
																BGL_CLASS_INDEX
																(BGl_localzf2cellzf2zzcallcc_walkz00);
															BgL_arg1518z00_1495 = BgL_res1907z00_2018;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt)
																((BgL_localz00_bglt) BgL_varz00_1490)),
															BgL_arg1518z00_1495);
													}
													((BgL_localz00_bglt)
														((BgL_localz00_bglt) BgL_varz00_1490));
												}
												((BgL_localz00_bglt) BgL_varz00_1490);
												{	/* Callcc/walk.scm 76 */
													obj_t BgL_arg1521z00_1497;
													obj_t BgL_arg1528z00_1498;

													BgL_arg1521z00_1497 =
														MAKE_YOUNG_PAIR(BgL_ozd2nzd2_1491,
														BgL_celledz00_1482);
													BgL_arg1528z00_1498 =
														CDR(((obj_t) BgL_formalsz00_1483));
													{
														obj_t BgL_formalsz00_2670;
														obj_t BgL_celledz00_2669;

														BgL_celledz00_2669 = BgL_arg1521z00_1497;
														BgL_formalsz00_2670 = BgL_arg1528z00_1498;
														BgL_formalsz00_1483 = BgL_formalsz00_2670;
														BgL_celledz00_1482 = BgL_celledz00_2669;
														goto BgL_zc3z04anonymousza31494ze3z87_1484;
													}
												}
											}
										}
									}
								}
							}
						else
							{	/* Callcc/walk.scm 66 */
								obj_t BgL_arg1558z00_1505;

								BgL_arg1558z00_1505 = CDR(((obj_t) BgL_formalsz00_1483));
								{
									obj_t BgL_formalsz00_2673;

									BgL_formalsz00_2673 = BgL_arg1558z00_1505;
									BgL_formalsz00_1483 = BgL_formalsz00_2673;
									goto BgL_zc3z04anonymousza31494ze3z87_1484;
								}
							}
					}
			}
		}

	}



/* cell-formals */
	BgL_nodez00_bglt BGl_cellzd2formalszd2zzcallcc_walkz00(obj_t BgL_celledz00_51,
		BgL_nodez00_bglt BgL_bodyz00_52)
	{
		{	/* Callcc/walk.scm 81 */
			if (NULLP(BgL_celledz00_51))
				{	/* Callcc/walk.scm 82 */
					return BgL_bodyz00_52;
				}
			else
				{	/* Callcc/walk.scm 84 */
					obj_t BgL_locz00_1509;

					BgL_locz00_1509 =
						(((BgL_nodez00_bglt) COBJECT(BgL_bodyz00_52))->BgL_locz00);
					{	/* Callcc/walk.scm 85 */
						BgL_letzd2varzd2_bglt BgL_new1136z00_1510;

						{	/* Callcc/walk.scm 86 */
							BgL_letzd2varzd2_bglt BgL_new1135z00_1532;

							BgL_new1135z00_1532 =
								((BgL_letzd2varzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_letzd2varzd2_bgl))));
							{	/* Callcc/walk.scm 86 */
								long BgL_arg1593z00_1533;

								{	/* Callcc/walk.scm 86 */
									long BgL_res1909z00_2026;

									BgL_res1909z00_2026 =
										BGL_CLASS_INDEX(BGl_letzd2varzd2zzast_nodez00);
									BgL_arg1593z00_1533 = BgL_res1909z00_2026;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1135z00_1532),
									BgL_arg1593z00_1533);
							}
							{	/* Callcc/walk.scm 86 */
								BgL_objectz00_bglt BgL_tmpz00_2681;

								BgL_tmpz00_2681 = ((BgL_objectz00_bglt) BgL_new1135z00_1532);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2681, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1135z00_1532);
							BgL_new1136z00_1510 = BgL_new1135z00_1532;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1136z00_1510)))->BgL_locz00) =
							((obj_t) BgL_locz00_1509), BUNSPEC);
						((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
											BgL_new1136z00_1510)))->BgL_typez00) =
							((BgL_typez00_bglt) (((BgL_nodez00_bglt)
										COBJECT(BgL_bodyz00_52))->BgL_typez00)), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1136z00_1510)))->BgL_sidezd2effectzd2) =
							((obj_t) BUNSPEC), BUNSPEC);
						((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
											BgL_new1136z00_1510)))->BgL_keyz00) =
							((obj_t) BINT(((long) -1))), BUNSPEC);
						{
							obj_t BgL_auxz00_2695;

							{	/* Callcc/walk.scm 89 */
								obj_t BgL_l1291z00_1511;

								BgL_l1291z00_1511 = BgL_celledz00_51;
								if (NULLP(BgL_l1291z00_1511))
									{	/* Callcc/walk.scm 89 */
										BgL_auxz00_2695 = BNIL;
									}
								else
									{	/* Callcc/walk.scm 89 */
										obj_t BgL_head1293z00_1513;

										{	/* Callcc/walk.scm 89 */
											obj_t BgL_res1911z00_2032;

											BgL_res1911z00_2032 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1293z00_1513 = BgL_res1911z00_2032;
										}
										{
											obj_t BgL_l1291z00_1515;
											obj_t BgL_tail1294z00_1516;

											BgL_l1291z00_1515 = BgL_l1291z00_1511;
											BgL_tail1294z00_1516 = BgL_head1293z00_1513;
										BgL_zc3z04anonymousza31564ze3z87_1517:
											if (NULLP(BgL_l1291z00_1515))
												{	/* Callcc/walk.scm 89 */
													BgL_auxz00_2695 = CDR(BgL_head1293z00_1513);
												}
											else
												{	/* Callcc/walk.scm 89 */
													obj_t BgL_newtail1295z00_1519;

													{	/* Callcc/walk.scm 89 */
														obj_t BgL_arg1575z00_1521;

														{	/* Callcc/walk.scm 89 */
															obj_t BgL_ozd2nzd2_1522;

															BgL_ozd2nzd2_1522 =
																CAR(((obj_t) BgL_l1291z00_1515));
															{	/* Callcc/walk.scm 90 */
																obj_t BgL_arg1578z00_1523;
																BgL_makezd2boxzd2_bglt BgL_arg1582z00_1524;

																BgL_arg1578z00_1523 =
																	CDR(((obj_t) BgL_ozd2nzd2_1522));
																{	/* Callcc/walk.scm 92 */
																	BgL_varz00_bglt BgL_arg1584z00_1525;
																	obj_t BgL_arg1588z00_1526;

																	{	/* Callcc/walk.scm 92 */
																		BgL_varz00_bglt BgL_new1138z00_1527;

																		{	/* Callcc/walk.scm 95 */
																			BgL_varz00_bglt BgL_new1137z00_1529;

																			BgL_new1137z00_1529 =
																				((BgL_varz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_varz00_bgl))));
																			{	/* Callcc/walk.scm 95 */
																				long BgL_arg1592z00_1530;

																				{	/* Callcc/walk.scm 95 */
																					long BgL_res1913z00_2038;

																					{	/* Callcc/walk.scm 95 */
																						obj_t BgL_classz00_2037;

																						BgL_classz00_2037 =
																							BGl_varz00zzast_nodez00;
																						BgL_res1913z00_2038 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_2037);
																					}
																					BgL_arg1592z00_1530 =
																						BgL_res1913z00_2038;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1137z00_1529),
																					BgL_arg1592z00_1530);
																			}
																			BgL_new1138z00_1527 = BgL_new1137z00_1529;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1138z00_1527)))->
																				BgL_locz00) =
																			((obj_t) BgL_locz00_1509), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1138z00_1527)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((
																						(BgL_variablez00_bglt)
																						COBJECT(((BgL_variablez00_bglt)
																								CAR(((obj_t)
																										BgL_ozd2nzd2_1522)))))->
																					BgL_typez00)), BUNSPEC);
																		((((BgL_varz00_bglt)
																					COBJECT(BgL_new1138z00_1527))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) (
																					(BgL_variablez00_bglt) CAR(((obj_t)
																							BgL_ozd2nzd2_1522)))), BUNSPEC);
																		BgL_arg1584z00_1525 = BgL_new1138z00_1527;
																	}
																	BgL_arg1588z00_1526 =
																		CAR(((obj_t) BgL_ozd2nzd2_1522));
																	BgL_arg1582z00_1524 =
																		BGl_azd2makezd2cellz00zzcallcc_walkz00(
																		((BgL_nodez00_bglt) BgL_arg1584z00_1525),
																		((BgL_variablez00_bglt)
																			BgL_arg1588z00_1526));
																}
																BgL_arg1575z00_1521 =
																	MAKE_YOUNG_PAIR(BgL_arg1578z00_1523,
																	((obj_t) BgL_arg1582z00_1524));
														}}
														{	/* Callcc/walk.scm 89 */
															obj_t BgL_res1914z00_2045;

															BgL_res1914z00_2045 =
																MAKE_YOUNG_PAIR(BgL_arg1575z00_1521, BNIL);
															BgL_newtail1295z00_1519 = BgL_res1914z00_2045;
													}}
													SET_CDR(BgL_tail1294z00_1516,
														BgL_newtail1295z00_1519);
													{	/* Callcc/walk.scm 89 */
														obj_t BgL_arg1573z00_1520;

														BgL_arg1573z00_1520 =
															CDR(((obj_t) BgL_l1291z00_1515));
														{
															obj_t BgL_tail1294z00_2734;
															obj_t BgL_l1291z00_2733;

															BgL_l1291z00_2733 = BgL_arg1573z00_1520;
															BgL_tail1294z00_2734 = BgL_newtail1295z00_1519;
															BgL_tail1294z00_1516 = BgL_tail1294z00_2734;
															BgL_l1291z00_1515 = BgL_l1291z00_2733;
															goto BgL_zc3z04anonymousza31564ze3z87_1517;
														}
													}
												}
										}
									}
							}
							((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1136z00_1510))->
									BgL_bindingsz00) = ((obj_t) BgL_auxz00_2695), BUNSPEC);
						}
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1136z00_1510))->
								BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_bodyz00_52), BUNSPEC);
						((((BgL_letzd2varzd2_bglt) COBJECT(BgL_new1136z00_1510))->
								BgL_removablezf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
						return ((BgL_nodez00_bglt) BgL_new1136z00_1510);
					}
				}
		}

	}



/* a-make-cell */
	BgL_makezd2boxzd2_bglt BGl_azd2makezd2cellz00zzcallcc_walkz00(BgL_nodez00_bglt
		BgL_nodez00_53, BgL_variablez00_bglt BgL_variablez00_54)
	{
		{	/* Callcc/walk.scm 102 */
			{	/* Callcc/walk.scm 104 */
				obj_t BgL_vz00_2049;

				BgL_vz00_2049 = CNST_TABLE_REF(((long) 1));
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_variablez00_54))))->BgL_accessz00) =
					((obj_t) BgL_vz00_2049), BUNSPEC);
			}
			{	/* Callcc/walk.scm 105 */
				BgL_localzf2cellzf2_bglt BgL_wide1142z00_1537;

				BgL_wide1142z00_1537 =
					((BgL_localzf2cellzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_localzf2cellzf2_bgl))));
				{	/* Callcc/walk.scm 105 */
					obj_t BgL_auxz00_2748;
					BgL_objectz00_bglt BgL_tmpz00_2744;

					BgL_auxz00_2748 = ((obj_t) BgL_wide1142z00_1537);
					BgL_tmpz00_2744 =
						((BgL_objectz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_variablez00_54)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2744, BgL_auxz00_2748);
				}
				((BgL_objectz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_variablez00_54)));
				{	/* Callcc/walk.scm 105 */
					long BgL_arg1597z00_1538;

					{	/* Callcc/walk.scm 105 */
						long BgL_res1915z00_2052;

						BgL_res1915z00_2052 =
							BGL_CLASS_INDEX(BGl_localzf2cellzf2zzcallcc_walkz00);
						BgL_arg1597z00_1538 = BgL_res1915z00_2052;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_localz00_bglt)
								((BgL_localz00_bglt) BgL_variablez00_54))),
						BgL_arg1597z00_1538);
				}
				((BgL_localz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_variablez00_54)));
			}
			((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_variablez00_54));
			{	/* Callcc/walk.scm 106 */
				BgL_makezd2boxzd2_bglt BgL_new1145z00_1540;

				{	/* Callcc/walk.scm 109 */
					BgL_makezd2boxzd2_bglt BgL_new1144z00_1542;

					BgL_new1144z00_1542 =
						((BgL_makezd2boxzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_makezd2boxzd2_bgl))));
					{	/* Callcc/walk.scm 109 */
						long BgL_arg1604z00_1543;

						{	/* Callcc/walk.scm 109 */
							long BgL_res1916z00_2056;

							BgL_res1916z00_2056 =
								BGL_CLASS_INDEX(BGl_makezd2boxzd2zzast_nodez00);
							BgL_arg1604z00_1543 = BgL_res1916z00_2056;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1144z00_1542), BgL_arg1604z00_1543);
					}
					{	/* Callcc/walk.scm 109 */
						BgL_objectz00_bglt BgL_tmpz00_2768;

						BgL_tmpz00_2768 = ((BgL_objectz00_bglt) BgL_new1144z00_1542);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2768, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1144z00_1542);
					BgL_new1145z00_1540 = BgL_new1144z00_1542;
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1145z00_1540)))->BgL_locz00) =
					((obj_t) (((BgL_nodez00_bglt) COBJECT(BgL_nodez00_53))->BgL_locz00)),
					BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1145z00_1540)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt)
							BGl_za2cellza2z00zztype_cachez00)), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1145z00_1540)))->BgL_sidezd2effectzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1145z00_1540)))->BgL_keyz00) =
					((obj_t) BINT(((long) -1))), BUNSPEC);
				((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1145z00_1540))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_nodez00_53), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_2784;

					{	/* Callcc/walk.scm 108 */
						BgL_typez00_bglt BgL_arg1599z00_1541;

						BgL_arg1599z00_1541 =
							(((BgL_variablez00_bglt) COBJECT(BgL_variablez00_54))->
							BgL_typez00);
						BgL_auxz00_2784 =
							BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00
							(BgL_arg1599z00_1541);
					}
					((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1145z00_1540))->
							BgL_vtypez00) = ((BgL_typez00_bglt) BgL_auxz00_2784), BUNSPEC);
				}
				((((BgL_makezd2boxzd2_bglt) COBJECT(BgL_new1145z00_1540))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				return BgL_new1145z00_1540;
			}
		}

	}



/* celled? */
	bool_t BGl_celledzf3zf3zzcallcc_walkz00(BgL_variablez00_bglt BgL_varz00_55)
	{
		{	/* Callcc/walk.scm 115 */
			{	/* Callcc/walk.scm 116 */
				bool_t BgL__ortest_1146z00_1544;

				{	/* Callcc/walk.scm 116 */
					bool_t BgL_res1917z00_2061;

					BgL_res1917z00_2061 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_varz00_55), BGl_localzf2cellzf2zzcallcc_walkz00);
					BgL__ortest_1146z00_1544 = BgL_res1917z00_2061;
				}
				if (BgL__ortest_1146z00_1544)
					{	/* Callcc/walk.scm 116 */
						return BgL__ortest_1146z00_1544;
					}
				else
					{	/* Callcc/walk.scm 116 */
						if (
							((((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_localz00_bglt) BgL_varz00_55))))->
									BgL_accessz00) == CNST_TABLE_REF(((long) 2))))
							{	/* Callcc/walk.scm 118 */
								bool_t BgL__ortest_1148z00_1546;

								{	/* Callcc/walk.scm 118 */
									BgL_typez00_bglt BgL_arg1606z00_1548;

									BgL_arg1606z00_1548 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_varz00_55))))->BgL_typez00);
									BgL__ortest_1148z00_1546 =
										(
										((obj_t) BgL_arg1606z00_1548) ==
										BGl_za2_za2z00zztype_cachez00);
								}
								if (BgL__ortest_1148z00_1546)
									{	/* Callcc/walk.scm 118 */
										return BgL__ortest_1148z00_1546;
									}
								else
									{	/* Callcc/walk.scm 119 */
										BgL_typez00_bglt BgL_arg1605z00_1547;

										BgL_arg1605z00_1547 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_varz00_55))))->
											BgL_typez00);
										return
											BGl_bigloozd2typezf3z21zztype_typez00
											(BgL_arg1605z00_1547);
									}
							}
						else
							{	/* Callcc/walk.scm 117 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* callcc*! */
	obj_t BGl_callccza2z12zb0zzcallcc_walkz00(obj_t BgL_nodeza2za2_78)
	{
		{	/* Callcc/walk.scm 358 */
		BGl_callccza2z12zb0zzcallcc_walkz00:
			if (NULLP(BgL_nodeza2za2_78))
				{	/* Callcc/walk.scm 359 */
					return CNST_TABLE_REF(((long) 3));
				}
			else
				{	/* Callcc/walk.scm 359 */
					{	/* Callcc/walk.scm 362 */
						BgL_nodez00_bglt BgL_arg1613z00_1551;

						{	/* Callcc/walk.scm 362 */
							obj_t BgL_arg1624z00_1552;

							BgL_arg1624z00_1552 = CAR(((obj_t) BgL_nodeza2za2_78));
							BgL_arg1613z00_1551 =
								BGl_callccz12z12zzcallcc_walkz00(
								((BgL_nodez00_bglt) BgL_arg1624z00_1552));
						}
						{	/* Callcc/walk.scm 362 */
							obj_t BgL_auxz00_2817;
							obj_t BgL_tmpz00_2815;

							BgL_auxz00_2817 = ((obj_t) BgL_arg1613z00_1551);
							BgL_tmpz00_2815 = ((obj_t) BgL_nodeza2za2_78);
							SET_CAR(BgL_tmpz00_2815, BgL_auxz00_2817);
						}
					}
					{	/* Callcc/walk.scm 363 */
						obj_t BgL_arg1626z00_1553;

						BgL_arg1626z00_1553 = CDR(((obj_t) BgL_nodeza2za2_78));
						{
							obj_t BgL_nodeza2za2_2822;

							BgL_nodeza2za2_2822 = BgL_arg1626z00_1553;
							BgL_nodeza2za2_78 = BgL_nodeza2za2_2822;
							goto BGl_callccza2z12zb0zzcallcc_walkz00;
						}
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcallcc_walkz00()
	{
		{	/* Callcc/walk.scm 16 */
			{	/* Callcc/walk.scm 25 */
				obj_t BgL_arg1640z00_1558;
				obj_t BgL_arg1641z00_1559;

				{	/* Callcc/walk.scm 25 */
					obj_t BgL_v1305z00_1591;

					BgL_v1305z00_1591 = create_vector(((long) 0));
					BgL_arg1640z00_1558 = BgL_v1305z00_1591;
				}
				{	/* Callcc/walk.scm 25 */
					obj_t BgL_v1306z00_1592;

					BgL_v1306z00_1592 = create_vector(((long) 0));
					BgL_arg1641z00_1559 = BgL_v1306z00_1592;
				}
				return (BGl_localzf2cellzf2zzcallcc_walkz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 4)),
						CNST_TABLE_REF(((long) 5)), BGl_localz00zzast_varz00, ((long) 4965),
						BGl_proc1960z00zzcallcc_walkz00, BGl_proc1959z00zzcallcc_walkz00,
						BFALSE, BGl_proc1958z00zzcallcc_walkz00,
						BGl_proc1957z00zzcallcc_walkz00, BgL_arg1640z00_1558,
						BgL_arg1641z00_1559), BUNSPEC);
		}}

	}



/* &lambda1664 */
	BgL_localz00_bglt BGl_z62lambda1664z62zzcallcc_walkz00(obj_t BgL_envz00_2233,
		obj_t BgL_o1117z00_2234)
	{
		{	/* Callcc/walk.scm 25 */
			{	/* Callcc/walk.scm 25 */
				long BgL_arg1667z00_2333;

				{	/* Callcc/walk.scm 25 */
					obj_t BgL_arg1669z00_2334;

					{	/* Callcc/walk.scm 25 */
						obj_t BgL_arg1672z00_2335;

						{	/* Callcc/walk.scm 25 */
							long BgL_arg1816z00_2336;

							{	/* Callcc/walk.scm 25 */
								long BgL_arg1817z00_2337;

								{	/* Callcc/walk.scm 25 */
									long BgL_res1922z00_2338;

									BgL_res1922z00_2338 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_o1117z00_2234)));
									BgL_arg1817z00_2337 = BgL_res1922z00_2338;
								}
								BgL_arg1816z00_2336 = (BgL_arg1817z00_2337 - OBJECT_TYPE);
							}
							BgL_arg1672z00_2335 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2336);
						}
						BgL_arg1669z00_2334 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1672z00_2335);
					}
					{	/* Callcc/walk.scm 25 */
						long BgL_res1924z00_2339;

						{	/* Callcc/walk.scm 25 */
							obj_t BgL_tmpz00_2834;

							BgL_tmpz00_2834 = ((obj_t) BgL_arg1669z00_2334);
							BgL_res1924z00_2339 = BGL_CLASS_INDEX(BgL_tmpz00_2834);
						}
						BgL_arg1667z00_2333 = BgL_res1924z00_2339;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_localz00_bglt) BgL_o1117z00_2234)), BgL_arg1667z00_2333);
			}
			{	/* Callcc/walk.scm 25 */
				BgL_objectz00_bglt BgL_tmpz00_2840;

				BgL_tmpz00_2840 =
					((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2234));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2840, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2234));
			return ((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2234));
		}

	}



/* &<@anonymous:1663> */
	obj_t BGl_z62zc3z04anonymousza31663ze3ze5zzcallcc_walkz00(obj_t
		BgL_envz00_2235, obj_t BgL_new1116z00_2236)
	{
		{	/* Callcc/walk.scm 25 */
			{
				BgL_localz00_bglt BgL_auxz00_2848;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1116z00_2236))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 6))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2236))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_2856;

					{	/* Callcc/walk.scm 25 */
						obj_t BgL_classz00_2341;

						BgL_classz00_2341 = BGl_typez00zztype_typez00;
						{	/* Callcc/walk.scm 25 */
							obj_t BgL__ortest_1106z00_2342;

							BgL__ortest_1106z00_2342 = BGL_CLASS_NIL(BgL_classz00_2341);
							if (CBOOL(BgL__ortest_1106z00_2342))
								{	/* Callcc/walk.scm 25 */
									BgL_auxz00_2856 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_2342);
								}
							else
								{	/* Callcc/walk.scm 25 */
									BgL_auxz00_2856 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2341));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1116z00_2236))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_2856), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_2866;

					{	/* Callcc/walk.scm 25 */
						obj_t BgL_classz00_2343;

						BgL_classz00_2343 = BGl_valuez00zzast_varz00;
						{	/* Callcc/walk.scm 25 */
							obj_t BgL__ortest_1106z00_2344;

							BgL__ortest_1106z00_2344 = BGL_CLASS_NIL(BgL_classz00_2343);
							if (CBOOL(BgL__ortest_1106z00_2344))
								{	/* Callcc/walk.scm 25 */
									BgL_auxz00_2866 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_2344);
								}
							else
								{	/* Callcc/walk.scm 25 */
									BgL_auxz00_2866 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2343));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1116z00_2236))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_2866), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1116z00_2236))))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2236))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2236))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2236))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2236))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2236))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2236))))->BgL_keyz00) =
					((long) ((long) 0)), BUNSPEC);
				BgL_auxz00_2848 = ((BgL_localz00_bglt) BgL_new1116z00_2236);
				return ((obj_t) BgL_auxz00_2848);
			}
		}

	}



/* &lambda1653 */
	BgL_localz00_bglt BGl_z62lambda1653z62zzcallcc_walkz00(obj_t BgL_envz00_2237,
		obj_t BgL_o1112z00_2238)
	{
		{	/* Callcc/walk.scm 25 */
			{	/* Callcc/walk.scm 25 */
				BgL_localzf2cellzf2_bglt BgL_wide1114z00_2346;

				BgL_wide1114z00_2346 =
					((BgL_localzf2cellzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_localzf2cellzf2_bgl))));
				{	/* Callcc/walk.scm 25 */
					obj_t BgL_auxz00_2904;
					BgL_objectz00_bglt BgL_tmpz00_2900;

					BgL_auxz00_2904 = ((obj_t) BgL_wide1114z00_2346);
					BgL_tmpz00_2900 =
						((BgL_objectz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1112z00_2238)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2900, BgL_auxz00_2904);
				}
				((BgL_objectz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1112z00_2238)));
				{	/* Callcc/walk.scm 25 */
					long BgL_arg1662z00_2347;

					{	/* Callcc/walk.scm 25 */
						long BgL_res1921z00_2348;

						BgL_res1921z00_2348 =
							BGL_CLASS_INDEX(BGl_localzf2cellzf2zzcallcc_walkz00);
						BgL_arg1662z00_2347 = BgL_res1921z00_2348;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_localz00_bglt)
								((BgL_localz00_bglt) BgL_o1112z00_2238))), BgL_arg1662z00_2347);
				}
				return
					((BgL_localz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1112z00_2238)));
			}
		}

	}



/* &lambda1642 */
	BgL_localz00_bglt BGl_z62lambda1642z62zzcallcc_walkz00(obj_t BgL_envz00_2239,
		obj_t BgL_id1101z00_2240, obj_t BgL_name1102z00_2241,
		obj_t BgL_type1103z00_2242, obj_t BgL_value1104z00_2243,
		obj_t BgL_access1105z00_2244, obj_t BgL_fastzd2alpha1106zd2_2245,
		obj_t BgL_removable1107z00_2246, obj_t BgL_occurrence1108z00_2247,
		obj_t BgL_occurrencew1109z00_2248, obj_t BgL_userzf31110zf3_2249,
		obj_t BgL_key1111z00_2250)
	{
		{	/* Callcc/walk.scm 25 */
			{	/* Callcc/walk.scm 25 */
				long BgL_occurrence1108z00_2352;
				long BgL_occurrencew1109z00_2353;
				bool_t BgL_userzf31110zf3_2354;
				long BgL_key1111z00_2355;

				BgL_occurrence1108z00_2352 = (long) CINT(BgL_occurrence1108z00_2247);
				BgL_occurrencew1109z00_2353 = (long) CINT(BgL_occurrencew1109z00_2248);
				BgL_userzf31110zf3_2354 = CBOOL(BgL_userzf31110zf3_2249);
				BgL_key1111z00_2355 = (long) CINT(BgL_key1111z00_2250);
				{	/* Callcc/walk.scm 25 */
					BgL_localz00_bglt BgL_new1173z00_2356;

					{	/* Callcc/walk.scm 25 */
						BgL_localz00_bglt BgL_tmp1171z00_2357;
						BgL_localzf2cellzf2_bglt BgL_wide1172z00_2358;

						{
							BgL_localz00_bglt BgL_auxz00_2922;

							{	/* Callcc/walk.scm 25 */
								BgL_localz00_bglt BgL_new1170z00_2359;

								BgL_new1170z00_2359 =
									((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_localz00_bgl))));
								{	/* Callcc/walk.scm 25 */
									long BgL_arg1652z00_2360;

									{	/* Callcc/walk.scm 25 */
										long BgL_res1919z00_2361;

										BgL_res1919z00_2361 =
											BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
										BgL_arg1652z00_2360 = BgL_res1919z00_2361;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1170z00_2359),
										BgL_arg1652z00_2360);
								}
								{	/* Callcc/walk.scm 25 */
									BgL_objectz00_bglt BgL_tmpz00_2927;

									BgL_tmpz00_2927 = ((BgL_objectz00_bglt) BgL_new1170z00_2359);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2927, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1170z00_2359);
								BgL_auxz00_2922 = BgL_new1170z00_2359;
							}
							BgL_tmp1171z00_2357 = ((BgL_localz00_bglt) BgL_auxz00_2922);
						}
						BgL_wide1172z00_2358 =
							((BgL_localzf2cellzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localzf2cellzf2_bgl))));
						{	/* Callcc/walk.scm 25 */
							obj_t BgL_auxz00_2935;
							BgL_objectz00_bglt BgL_tmpz00_2933;

							BgL_auxz00_2935 = ((obj_t) BgL_wide1172z00_2358);
							BgL_tmpz00_2933 = ((BgL_objectz00_bglt) BgL_tmp1171z00_2357);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2933, BgL_auxz00_2935);
						}
						((BgL_objectz00_bglt) BgL_tmp1171z00_2357);
						{	/* Callcc/walk.scm 25 */
							long BgL_arg1644z00_2362;

							{	/* Callcc/walk.scm 25 */
								long BgL_res1920z00_2363;

								BgL_res1920z00_2363 =
									BGL_CLASS_INDEX(BGl_localzf2cellzf2zzcallcc_walkz00);
								BgL_arg1644z00_2362 = BgL_res1920z00_2363;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1171z00_2357),
								BgL_arg1644z00_2362);
						}
						BgL_new1173z00_2356 = ((BgL_localz00_bglt) BgL_tmp1171z00_2357);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1173z00_2356)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1101z00_2240)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2356)))->BgL_namez00) =
						((obj_t) BgL_name1102z00_2241), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2356)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1103z00_2242)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2356)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1104z00_2243)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2356)))->BgL_accessz00) =
						((obj_t) BgL_access1105z00_2244), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2356)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1106zd2_2245), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2356)))->BgL_removablez00) =
						((obj_t) BgL_removable1107z00_2246), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2356)))->BgL_occurrencez00) =
						((long) BgL_occurrence1108z00_2352), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2356)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1109z00_2353), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1173z00_2356)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31110zf3_2354), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
										BgL_new1173z00_2356)))->BgL_keyz00) =
						((long) BgL_key1111z00_2355), BUNSPEC);
					return BgL_new1173z00_2356;
				}
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcallcc_walkz00()
	{
		{	/* Callcc/walk.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00,
				BGl_proc1961z00zzcallcc_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string1962z00zzcallcc_walkz00);
		}

	}



/* &callcc!1307 */
	obj_t BGl_z62callccz121307z70zzcallcc_walkz00(obj_t BgL_envz00_2252,
		obj_t BgL_nodez00_2253)
	{
		{	/* Callcc/walk.scm 124 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 7)),
				BGl_string1963z00zzcallcc_walkz00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2253)));
		}

	}



/* callcc! */
	BgL_nodez00_bglt BGl_callccz12z12zzcallcc_walkz00(BgL_nodez00_bglt
		BgL_nodez00_56)
	{
		{	/* Callcc/walk.scm 124 */
			{	/* Callcc/walk.scm 124 */
				obj_t BgL_method1308z00_1601;

				{	/* Callcc/walk.scm 124 */
					obj_t BgL_res1935z00_2139;

					{	/* Callcc/walk.scm 124 */
						long BgL_objzd2classzd2numz00_2104;

						{	/* Callcc/walk.scm 124 */
							long BgL_res1925z00_2107;

							BgL_res1925z00_2107 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_56));
							BgL_objzd2classzd2numz00_2104 = BgL_res1925z00_2107;
						}
						{	/* Callcc/walk.scm 124 */
							obj_t BgL_arg1813z00_2105;

							BgL_arg1813z00_2105 =
								PROCEDURE_REF(BGl_callccz12zd2envzc0zzcallcc_walkz00,
								(int) (((long) 1)));
							{	/* Callcc/walk.scm 124 */
								int BgL_offsetz00_2109;

								BgL_offsetz00_2109 = (int) (BgL_objzd2classzd2numz00_2104);
								{	/* Callcc/walk.scm 124 */
									long BgL_offsetz00_2110;

									BgL_offsetz00_2110 =
										((long) (BgL_offsetz00_2109) - OBJECT_TYPE);
									{	/* Callcc/walk.scm 124 */
										long BgL_modz00_2111;

										BgL_modz00_2111 =
											(BgL_offsetz00_2110 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Callcc/walk.scm 124 */
											long BgL_restz00_2113;

											BgL_restz00_2113 =
												(BgL_offsetz00_2110 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Callcc/walk.scm 124 */

												{	/* Callcc/walk.scm 124 */
													obj_t BgL_bucketz00_2115;

													BgL_bucketz00_2115 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2105), BgL_modz00_2111);
													BgL_res1935z00_2139 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2115), BgL_restz00_2113);
					}}}}}}}}
					BgL_method1308z00_1601 = BgL_res1935z00_2139;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1308z00_1601) (BgL_method1308z00_1601,
						((obj_t) BgL_nodez00_56), BEOA));
			}
		}

	}



/* &callcc! */
	BgL_nodez00_bglt BGl_z62callccz12z70zzcallcc_walkz00(obj_t BgL_envz00_2254,
		obj_t BgL_nodez00_2255)
	{
		{	/* Callcc/walk.scm 124 */
			return
				BGl_callccz12z12zzcallcc_walkz00(((BgL_nodez00_bglt) BgL_nodez00_2255));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcallcc_walkz00()
	{
		{	/* Callcc/walk.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_atomz00zzast_nodez00,
				BGl_proc1964z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_kwotez00zzast_nodez00,
				BGl_proc1966z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_varz00zzast_nodez00,
				BGl_proc1967z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc1968z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc1969z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc1970z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc1971z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc1972z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc1973z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc1974z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc1975z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1976z00zzcallcc_walkz00,
				BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc1977z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc1978z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc1979z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc1980z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1981z00zzcallcc_walkz00,
				BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1982z00zzcallcc_walkz00,
				BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc1983z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc1984z00zzcallcc_walkz00, BGl_string1965z00zzcallcc_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_callccz12zd2envzc0zzcallcc_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1985z00zzcallcc_walkz00,
				BGl_string1965z00zzcallcc_walkz00);
		}

	}



/* &callcc!-box-set!1351 */
	BgL_nodez00_bglt BGl_z62callccz12zd2boxzd2setz121351z62zzcallcc_walkz00(obj_t
		BgL_envz00_2277, obj_t BgL_nodez00_2278)
	{
		{	/* Callcc/walk.scm 350 */
			{
				BgL_nodez00_bglt BgL_auxz00_3027;

				{	/* Callcc/walk.scm 352 */
					BgL_nodez00_bglt BgL_arg1826z00_2366;

					BgL_arg1826z00_2366 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2278)))->BgL_valuez00);
					BgL_auxz00_3027 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1826z00_2366);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2278)))->BgL_valuez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3027), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2278));
		}

	}



/* &callcc!-box-ref1349 */
	BgL_nodez00_bglt BGl_z62callccz12zd2boxzd2ref1349z70zzcallcc_walkz00(obj_t
		BgL_envz00_2279, obj_t BgL_nodez00_2280)
	{
		{	/* Callcc/walk.scm 344 */
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2280));
		}

	}



/* &callcc!-make-box1347 */
	BgL_nodez00_bglt BGl_z62callccz12zd2makezd2box1347z70zzcallcc_walkz00(obj_t
		BgL_envz00_2281, obj_t BgL_nodez00_2282)
	{
		{	/* Callcc/walk.scm 337 */
			((((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2282)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_callccz12z12zzcallcc_walkz00((((BgL_makezd2boxzd2_bglt)
								COBJECT(((BgL_makezd2boxzd2_bglt) BgL_nodez00_2282)))->
							BgL_valuez00))), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2282));
		}

	}



/* &callcc!-jump-ex-it1345 */
	BgL_nodez00_bglt
		BGl_z62callccz12zd2jumpzd2exzd2it1345za2zzcallcc_walkz00(obj_t
		BgL_envz00_2283, obj_t BgL_nodez00_2284)
	{
		{	/* Callcc/walk.scm 328 */
			{
				BgL_nodez00_bglt BgL_auxz00_3044;

				{	/* Callcc/walk.scm 330 */
					BgL_nodez00_bglt BgL_arg1822z00_2370;

					BgL_arg1822z00_2370 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2284)))->BgL_exitz00);
					BgL_auxz00_3044 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1822z00_2370);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2284)))->
						BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3044), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3050;

				{	/* Callcc/walk.scm 331 */
					BgL_nodez00_bglt BgL_arg1823z00_2371;

					BgL_arg1823z00_2371 =
						(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2284)))->
						BgL_valuez00);
					BgL_auxz00_3050 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1823z00_2371);
				}
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2284)))->
						BgL_valuez00) = ((BgL_nodez00_bglt) BgL_auxz00_3050), BUNSPEC);
			}
			return
				((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2284));
		}

	}



/* &callcc!-set-ex-it1343 */
	BgL_nodez00_bglt BGl_z62callccz12zd2setzd2exzd2it1343za2zzcallcc_walkz00(obj_t
		BgL_envz00_2285, obj_t BgL_nodez00_2286)
	{
		{	/* Callcc/walk.scm 321 */
			((((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2286)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_callccz12z12zzcallcc_walkz00((((BgL_setzd2exzd2itz00_bglt)
								COBJECT(((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2286)))->
							BgL_bodyz00))), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
					BgL_nodez00_2286));
		}

	}



/* &callcc!-let-var1341 */
	BgL_nodez00_bglt BGl_z62callccz12zd2letzd2var1341z70zzcallcc_walkz00(obj_t
		BgL_envz00_2287, obj_t BgL_nodez00_2288)
	{
		{	/* Callcc/walk.scm 303 */
			{
				BgL_nodez00_bglt BgL_auxz00_3065;

				{	/* Callcc/walk.scm 305 */
					BgL_nodez00_bglt BgL_arg1796z00_2374;

					BgL_arg1796z00_2374 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2288)))->BgL_bodyz00);
					BgL_auxz00_3065 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1796z00_2374);
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2288)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3065), BUNSPEC);
			}
			{	/* Callcc/walk.scm 306 */
				obj_t BgL_g1304z00_2375;

				BgL_g1304z00_2375 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2288)))->BgL_bindingsz00);
				{
					obj_t BgL_l1302z00_2377;

					BgL_l1302z00_2377 = BgL_g1304z00_2375;
				BgL_zc3z04anonymousza31797ze3z87_2376:
					if (PAIRP(BgL_l1302z00_2377))
						{	/* Callcc/walk.scm 306 */
							{	/* Callcc/walk.scm 307 */
								obj_t BgL_bindingz00_2378;

								BgL_bindingz00_2378 = CAR(BgL_l1302z00_2377);
								{	/* Callcc/walk.scm 307 */
									obj_t BgL_varz00_2379;
									obj_t BgL_valz00_2380;

									BgL_varz00_2379 = CAR(((obj_t) BgL_bindingz00_2378));
									BgL_valz00_2380 = CDR(((obj_t) BgL_bindingz00_2378));
									{	/* Callcc/walk.scm 309 */
										BgL_nodez00_bglt BgL_arg1801z00_2381;

										BgL_arg1801z00_2381 =
											BGl_callccz12z12zzcallcc_walkz00(
											((BgL_nodez00_bglt) BgL_valz00_2380));
										{	/* Callcc/walk.scm 309 */
											obj_t BgL_auxz00_3084;
											obj_t BgL_tmpz00_3082;

											BgL_auxz00_3084 = ((obj_t) BgL_arg1801z00_2381);
											BgL_tmpz00_3082 = ((obj_t) BgL_bindingz00_2378);
											SET_CDR(BgL_tmpz00_3082, BgL_auxz00_3084);
										}
									}
									if (BGl_celledzf3zf3zzcallcc_walkz00(
											((BgL_variablez00_bglt) BgL_varz00_2379)))
										{	/* Callcc/walk.scm 310 */
											{	/* Callcc/walk.scm 313 */
												BgL_makezd2boxzd2_bglt BgL_arg1808z00_2382;

												{	/* Callcc/walk.scm 313 */
													obj_t BgL_arg1809z00_2383;

													BgL_arg1809z00_2383 =
														CDR(((obj_t) BgL_bindingz00_2378));
													BgL_arg1808z00_2382 =
														BGl_azd2makezd2cellz00zzcallcc_walkz00(
														((BgL_nodez00_bglt) BgL_arg1809z00_2383),
														((BgL_variablez00_bglt) BgL_varz00_2379));
												}
												{	/* Callcc/walk.scm 312 */
													obj_t BgL_auxz00_3097;
													obj_t BgL_tmpz00_3095;

													BgL_auxz00_3097 = ((obj_t) BgL_arg1808z00_2382);
													BgL_tmpz00_3095 = ((obj_t) BgL_bindingz00_2378);
													SET_CDR(BgL_tmpz00_3095, BgL_auxz00_3097);
												}
											}
											{	/* Callcc/walk.scm 314 */
												BgL_typez00_bglt BgL_vz00_2384;

												BgL_vz00_2384 =
													((BgL_typez00_bglt) BGl_za2cellza2z00zztype_cachez00);
												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_varz00_2379))))->
														BgL_typez00) =
													((BgL_typez00_bglt) BgL_vz00_2384), BUNSPEC);
											}
										}
									else
										{	/* Callcc/walk.scm 310 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1302z00_3104;

								BgL_l1302z00_3104 = CDR(BgL_l1302z00_2377);
								BgL_l1302z00_2377 = BgL_l1302z00_3104;
								goto BgL_zc3z04anonymousza31797ze3z87_2376;
							}
						}
					else
						{	/* Callcc/walk.scm 306 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt) BgL_nodez00_2288));
		}

	}



/* &callcc!-let-fun1339 */
	BgL_nodez00_bglt BGl_z62callccz12zd2letzd2fun1339z70zzcallcc_walkz00(obj_t
		BgL_envz00_2289, obj_t BgL_nodez00_2290)
	{
		{	/* Callcc/walk.scm 294 */
			{	/* Callcc/walk.scm 296 */
				obj_t BgL_g1301z00_2386;

				BgL_g1301z00_2386 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2290)))->BgL_localsz00);
				{
					obj_t BgL_l1299z00_2388;

					BgL_l1299z00_2388 = BgL_g1301z00_2386;
				BgL_zc3z04anonymousza31779ze3z87_2387:
					if (PAIRP(BgL_l1299z00_2388))
						{	/* Callcc/walk.scm 296 */
							BGl_callcczd2funz12zc0zzcallcc_walkz00(CAR(BgL_l1299z00_2388));
							{
								obj_t BgL_l1299z00_3114;

								BgL_l1299z00_3114 = CDR(BgL_l1299z00_2388);
								BgL_l1299z00_2388 = BgL_l1299z00_3114;
								goto BgL_zc3z04anonymousza31779ze3z87_2387;
							}
						}
					else
						{	/* Callcc/walk.scm 296 */
							((bool_t) 1);
						}
				}
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3116;

				{	/* Callcc/walk.scm 297 */
					BgL_nodez00_bglt BgL_arg1790z00_2389;

					BgL_arg1790z00_2389 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2290)))->BgL_bodyz00);
					BgL_auxz00_3116 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1790z00_2389);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2290)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3116), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2290));
		}

	}



/* &callcc!-switch1337 */
	BgL_nodez00_bglt BGl_z62callccz12zd2switch1337za2zzcallcc_walkz00(obj_t
		BgL_envz00_2291, obj_t BgL_nodez00_2292)
	{
		{	/* Callcc/walk.scm 283 */
			{
				BgL_nodez00_bglt BgL_auxz00_3124;

				{	/* Callcc/walk.scm 285 */
					BgL_nodez00_bglt BgL_arg1768z00_2391;

					BgL_arg1768z00_2391 =
						(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2292)))->BgL_testz00);
					BgL_auxz00_3124 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1768z00_2391);
				}
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2292)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3124), BUNSPEC);
			}
			{	/* Callcc/walk.scm 286 */
				obj_t BgL_g1298z00_2392;

				BgL_g1298z00_2392 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2292)))->BgL_clausesz00);
				{
					obj_t BgL_l1296z00_2394;

					BgL_l1296z00_2394 = BgL_g1298z00_2392;
				BgL_zc3z04anonymousza31769ze3z87_2393:
					if (PAIRP(BgL_l1296z00_2394))
						{	/* Callcc/walk.scm 286 */
							{	/* Callcc/walk.scm 287 */
								obj_t BgL_clausez00_2395;

								BgL_clausez00_2395 = CAR(BgL_l1296z00_2394);
								{	/* Callcc/walk.scm 287 */
									BgL_nodez00_bglt BgL_arg1771z00_2396;

									{	/* Callcc/walk.scm 287 */
										obj_t BgL_arg1775z00_2397;

										BgL_arg1775z00_2397 = CDR(((obj_t) BgL_clausez00_2395));
										BgL_arg1771z00_2396 =
											BGl_callccz12z12zzcallcc_walkz00(
											((BgL_nodez00_bglt) BgL_arg1775z00_2397));
									}
									{	/* Callcc/walk.scm 287 */
										obj_t BgL_auxz00_3141;
										obj_t BgL_tmpz00_3139;

										BgL_auxz00_3141 = ((obj_t) BgL_arg1771z00_2396);
										BgL_tmpz00_3139 = ((obj_t) BgL_clausez00_2395);
										SET_CDR(BgL_tmpz00_3139, BgL_auxz00_3141);
									}
								}
							}
							{
								obj_t BgL_l1296z00_3144;

								BgL_l1296z00_3144 = CDR(BgL_l1296z00_2394);
								BgL_l1296z00_2394 = BgL_l1296z00_3144;
								goto BgL_zc3z04anonymousza31769ze3z87_2393;
							}
						}
					else
						{	/* Callcc/walk.scm 286 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2292));
		}

	}



/* &callcc!-fail1335 */
	BgL_nodez00_bglt BGl_z62callccz12zd2fail1335za2zzcallcc_walkz00(obj_t
		BgL_envz00_2293, obj_t BgL_nodez00_2294)
	{
		{	/* Callcc/walk.scm 273 */
			{
				BgL_nodez00_bglt BgL_auxz00_3148;

				{	/* Callcc/walk.scm 275 */
					BgL_nodez00_bglt BgL_arg1759z00_2399;

					BgL_arg1759z00_2399 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2294)))->BgL_procz00);
					BgL_auxz00_3148 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1759z00_2399);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2294)))->BgL_procz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3148), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3154;

				{	/* Callcc/walk.scm 276 */
					BgL_nodez00_bglt BgL_arg1760z00_2400;

					BgL_arg1760z00_2400 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2294)))->BgL_msgz00);
					BgL_auxz00_3154 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1760z00_2400);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2294)))->BgL_msgz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3154), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3160;

				{	/* Callcc/walk.scm 277 */
					BgL_nodez00_bglt BgL_arg1761z00_2401;

					BgL_arg1761z00_2401 =
						(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2294)))->BgL_objz00);
					BgL_auxz00_3160 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1761z00_2401);
				}
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2294)))->BgL_objz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3160), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2294));
		}

	}



/* &callcc!-conditional1332 */
	BgL_nodez00_bglt BGl_z62callccz12zd2conditional1332za2zzcallcc_walkz00(obj_t
		BgL_envz00_2295, obj_t BgL_nodez00_2296)
	{
		{	/* Callcc/walk.scm 263 */
			{
				BgL_nodez00_bglt BgL_auxz00_3168;

				{	/* Callcc/walk.scm 265 */
					BgL_nodez00_bglt BgL_arg1755z00_2403;

					BgL_arg1755z00_2403 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2296)))->BgL_testz00);
					BgL_auxz00_3168 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1755z00_2403);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2296)))->BgL_testz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3168), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3174;

				{	/* Callcc/walk.scm 266 */
					BgL_nodez00_bglt BgL_arg1756z00_2404;

					BgL_arg1756z00_2404 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2296)))->BgL_truez00);
					BgL_auxz00_3174 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1756z00_2404);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2296)))->BgL_truez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3174), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3180;

				{	/* Callcc/walk.scm 267 */
					BgL_nodez00_bglt BgL_arg1757z00_2405;

					BgL_arg1757z00_2405 =
						(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2296)))->BgL_falsez00);
					BgL_auxz00_3180 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1757z00_2405);
				}
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2296)))->BgL_falsez00) =
					((BgL_nodez00_bglt) BgL_auxz00_3180), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2296));
		}

	}



/* &callcc!-setq1330 */
	BgL_nodez00_bglt BGl_z62callccz12zd2setq1330za2zzcallcc_walkz00(obj_t
		BgL_envz00_2297, obj_t BgL_nodez00_2298)
	{
		{	/* Callcc/walk.scm 228 */
			((((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2298)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_callccz12z12zzcallcc_walkz00((((BgL_setqz00_bglt)
								COBJECT(((BgL_setqz00_bglt) BgL_nodez00_2298)))->
							BgL_valuez00))), BUNSPEC);
			{	/* Callcc/walk.scm 230 */
				BgL_variablez00_bglt BgL_varz00_2407;

				BgL_varz00_2407 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_setqz00_bglt) COBJECT(
										((BgL_setqz00_bglt) BgL_nodez00_2298)))->BgL_varz00)))->
					BgL_variablez00);
				{	/* Callcc/walk.scm 230 */
					BgL_typez00_bglt BgL_vtypez00_2408;

					BgL_vtypez00_2408 =
						(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2407))->BgL_typez00);
					{	/* Callcc/walk.scm 231 */

						{	/* Callcc/walk.scm 232 */
							obj_t BgL_g1156z00_2409;

							BgL_g1156z00_2409 =
								(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2407))->
								BgL_fastzd2alphazd2);
							{
								BgL_variablez00_bglt BgL_varz00_2411;
								obj_t BgL_alphaz00_2412;

								BgL_varz00_2411 = BgL_varz00_2407;
								BgL_alphaz00_2412 = BgL_g1156z00_2409;
							BgL_loopz00_2410:
								if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_2412,
										BGl_localz00zzast_varz00))
									{	/* Callcc/walk.scm 234 */
										{	/* Callcc/walk.scm 236 */
											BgL_varz00_bglt BgL_arg1738z00_2413;

											BgL_arg1738z00_2413 =
												(((BgL_setqz00_bglt) COBJECT(
														((BgL_setqz00_bglt) BgL_nodez00_2298)))->
												BgL_varz00);
											((((BgL_varz00_bglt) COBJECT(BgL_arg1738z00_2413))->
													BgL_variablez00) =
												((BgL_variablez00_bglt) ((BgL_variablez00_bglt) (
															(BgL_localz00_bglt) BgL_alphaz00_2412))),
												BUNSPEC);
										}
										{	/* Callcc/walk.scm 237 */
											obj_t BgL_arg1739z00_2414;

											BgL_arg1739z00_2414 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_alphaz00_2412))))->
												BgL_fastzd2alphazd2);
											{
												obj_t BgL_alphaz00_3211;
												BgL_variablez00_bglt BgL_varz00_3208;

												BgL_varz00_3208 =
													((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_alphaz00_2412));
												BgL_alphaz00_3211 = BgL_arg1739z00_2414;
												BgL_alphaz00_2412 = BgL_alphaz00_3211;
												BgL_varz00_2411 = BgL_varz00_3208;
												goto BgL_loopz00_2410;
											}
										}
									}
								else
									{	/* Callcc/walk.scm 239 */
										bool_t BgL_test2064z00_3212;

										{	/* Callcc/walk.scm 239 */
											bool_t BgL_res1941z00_2415;

											BgL_res1941z00_2415 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_varz00_2411), BGl_globalz00zzast_varz00);
											BgL_test2064z00_3212 = BgL_res1941z00_2415;
										}
										if (BgL_test2064z00_3212)
											{	/* Callcc/walk.scm 239 */
												return
													((BgL_nodez00_bglt)
													((BgL_setqz00_bglt) BgL_nodez00_2298));
											}
										else
											{	/* Callcc/walk.scm 239 */
												if (BGl_celledzf3zf3zzcallcc_walkz00(BgL_varz00_2411))
													{	/* Callcc/walk.scm 244 */
														BgL_localz00_bglt BgL_azd2varzd2_2416;
														obj_t BgL_locz00_2417;

														BgL_azd2varzd2_2416 =
															BGl_makezd2localzd2svarz00zzast_localz00
															(CNST_TABLE_REF(((long) 8)),
															((BgL_typez00_bglt)
																BGl_za2objza2z00zztype_cachez00));
														BgL_locz00_2417 =
															(((BgL_nodez00_bglt)
																COBJECT(((BgL_nodez00_bglt) ((BgL_setqz00_bglt)
																			BgL_nodez00_2298))))->BgL_locz00);
														{	/* Callcc/walk.scm 246 */
															BgL_letzd2varzd2_bglt BgL_new1158z00_2418;

															{	/* Callcc/walk.scm 248 */
																BgL_letzd2varzd2_bglt BgL_new1157z00_2419;

																BgL_new1157z00_2419 =
																	((BgL_letzd2varzd2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_letzd2varzd2_bgl))));
																{	/* Callcc/walk.scm 248 */
																	long BgL_arg1747z00_2420;

																	{	/* Callcc/walk.scm 248 */
																		long BgL_res1942z00_2421;

																		BgL_res1942z00_2421 =
																			BGL_CLASS_INDEX
																			(BGl_letzd2varzd2zzast_nodez00);
																		BgL_arg1747z00_2420 = BgL_res1942z00_2421;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1157z00_2419),
																		BgL_arg1747z00_2420);
																}
																{	/* Callcc/walk.scm 248 */
																	BgL_objectz00_bglt BgL_tmpz00_3229;

																	BgL_tmpz00_3229 =
																		((BgL_objectz00_bglt) BgL_new1157z00_2419);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3229,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1157z00_2419);
																BgL_new1158z00_2418 = BgL_new1157z00_2419;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1158z00_2418)))->BgL_locz00) =
																((obj_t) BgL_locz00_2417), BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1158z00_2418)))->BgL_typez00) =
																((BgL_typez00_bglt) ((BgL_typez00_bglt)
																		BGl_za2unspecza2z00zztype_cachez00)),
																BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1158z00_2418)))->
																	BgL_sidezd2effectzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1158z00_2418)))->BgL_keyz00) =
																((obj_t) BINT(((long) -1))), BUNSPEC);
															{
																obj_t BgL_auxz00_3243;

																{	/* Callcc/walk.scm 249 */
																	obj_t BgL_arg1742z00_2422;

																	{	/* Callcc/walk.scm 249 */
																		BgL_nodez00_bglt BgL_arg1744z00_2423;

																		BgL_arg1744z00_2423 =
																			(((BgL_setqz00_bglt) COBJECT(
																					((BgL_setqz00_bglt)
																						BgL_nodez00_2298)))->BgL_valuez00);
																		BgL_arg1742z00_2422 =
																			MAKE_YOUNG_PAIR(((obj_t)
																				BgL_azd2varzd2_2416),
																			((obj_t) BgL_arg1744z00_2423));
																	}
																	{	/* Callcc/walk.scm 249 */
																		obj_t BgL_list1743z00_2424;

																		BgL_list1743z00_2424 =
																			MAKE_YOUNG_PAIR(BgL_arg1742z00_2422,
																			BNIL);
																		BgL_auxz00_3243 = BgL_list1743z00_2424;
																}}
																((((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_new1158z00_2418))->
																		BgL_bindingsz00) =
																	((obj_t) BgL_auxz00_3243), BUNSPEC);
															}
															{
																BgL_nodez00_bglt BgL_auxz00_3251;

																{	/* Callcc/walk.scm 250 */
																	BgL_boxzd2setz12zc0_bglt BgL_new1160z00_2425;

																	{	/* Callcc/walk.scm 253 */
																		BgL_boxzd2setz12zc0_bglt
																			BgL_new1159z00_2426;
																		BgL_new1159z00_2426 =
																			((BgL_boxzd2setz12zc0_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_boxzd2setz12zc0_bgl))));
																		{	/* Callcc/walk.scm 253 */
																			long BgL_arg1746z00_2427;

																			{	/* Callcc/walk.scm 253 */
																				long BgL_res1944z00_2428;

																				{	/* Callcc/walk.scm 253 */
																					obj_t BgL_classz00_2429;

																					BgL_classz00_2429 =
																						BGl_boxzd2setz12zc0zzast_nodez00;
																					BgL_res1944z00_2428 =
																						BGL_CLASS_INDEX(BgL_classz00_2429);
																				}
																				BgL_arg1746z00_2427 =
																					BgL_res1944z00_2428;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1159z00_2426),
																				BgL_arg1746z00_2427);
																		}
																		{	/* Callcc/walk.scm 253 */
																			BgL_objectz00_bglt BgL_tmpz00_3256;

																			BgL_tmpz00_3256 =
																				((BgL_objectz00_bglt)
																				BgL_new1159z00_2426);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3256,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1159z00_2426);
																		BgL_new1160z00_2425 = BgL_new1159z00_2426;
																	}
																	((((BgL_nodez00_bglt) COBJECT(
																					((BgL_nodez00_bglt)
																						BgL_new1160z00_2425)))->
																			BgL_locz00) =
																		((obj_t) BgL_locz00_2417), BUNSPEC);
																	((((BgL_nodez00_bglt)
																				COBJECT(((BgL_nodez00_bglt)
																						BgL_new1160z00_2425)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) ((BgL_typez00_bglt)
																				BGl_za2unspecza2z00zztype_cachez00)),
																		BUNSPEC);
																	((((BgL_boxzd2setz12zc0_bglt)
																				COBJECT(BgL_new1160z00_2425))->
																			BgL_varz00) =
																		((BgL_varz00_bglt) (((BgL_setqz00_bglt)
																					COBJECT(((BgL_setqz00_bglt)
																							BgL_nodez00_2298)))->BgL_varz00)),
																		BUNSPEC);
																	{
																		BgL_nodez00_bglt BgL_auxz00_3268;

																		{	/* Callcc/walk.scm 255 */
																			BgL_varz00_bglt BgL_new1162z00_2430;

																			{	/* Callcc/walk.scm 257 */
																				BgL_varz00_bglt BgL_new1161z00_2431;

																				BgL_new1161z00_2431 =
																					((BgL_varz00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_varz00_bgl))));
																				{	/* Callcc/walk.scm 257 */
																					long BgL_arg1745z00_2432;

																					{	/* Callcc/walk.scm 257 */
																						long BgL_res1945z00_2433;

																						{	/* Callcc/walk.scm 257 */
																							obj_t BgL_classz00_2434;

																							BgL_classz00_2434 =
																								BGl_varz00zzast_nodez00;
																							BgL_res1945z00_2433 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_2434);
																						}
																						BgL_arg1745z00_2432 =
																							BgL_res1945z00_2433;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1161z00_2431),
																						BgL_arg1745z00_2432);
																				}
																				BgL_new1162z00_2430 =
																					BgL_new1161z00_2431;
																			}
																			((((BgL_nodez00_bglt) COBJECT(
																							((BgL_nodez00_bglt)
																								BgL_new1162z00_2430)))->
																					BgL_locz00) =
																				((obj_t) BgL_locz00_2417), BUNSPEC);
																			((((BgL_nodez00_bglt)
																						COBJECT(((BgL_nodez00_bglt)
																								BgL_new1162z00_2430)))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) ((
																							(BgL_variablez00_bglt)
																							COBJECT(((BgL_variablez00_bglt)
																									BgL_azd2varzd2_2416)))->
																						BgL_typez00)), BUNSPEC);
																			((((BgL_varz00_bglt)
																						COBJECT(BgL_new1162z00_2430))->
																					BgL_variablez00) =
																				((BgL_variablez00_bglt) (
																						(BgL_variablez00_bglt)
																						BgL_azd2varzd2_2416)), BUNSPEC);
																			BgL_auxz00_3268 =
																				((BgL_nodez00_bglt)
																				BgL_new1162z00_2430);
																		}
																		((((BgL_boxzd2setz12zc0_bglt)
																					COBJECT(BgL_new1160z00_2425))->
																				BgL_valuez00) =
																			((BgL_nodez00_bglt) BgL_auxz00_3268),
																			BUNSPEC);
																	}
																	((((BgL_boxzd2setz12zc0_bglt)
																				COBJECT(BgL_new1160z00_2425))->
																			BgL_vtypez00) =
																		((BgL_typez00_bglt)
																			BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00
																			(BgL_vtypez00_2408)), BUNSPEC);
																	BgL_auxz00_3251 =
																		((BgL_nodez00_bglt) BgL_new1160z00_2425);
																}
																((((BgL_letzd2varzd2_bglt)
																			COBJECT(BgL_new1158z00_2418))->
																		BgL_bodyz00) =
																	((BgL_nodez00_bglt) BgL_auxz00_3251),
																	BUNSPEC);
															}
															((((BgL_letzd2varzd2_bglt)
																		COBJECT(BgL_new1158z00_2418))->
																	BgL_removablezf3zf3) =
																((bool_t) ((bool_t) 1)), BUNSPEC);
															return ((BgL_nodez00_bglt) BgL_new1158z00_2418);
														}
													}
												else
													{	/* Callcc/walk.scm 241 */
														return
															((BgL_nodez00_bglt)
															((BgL_setqz00_bglt) BgL_nodez00_2298));
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



/* &callcc!-cast1328 */
	BgL_nodez00_bglt BGl_z62callccz12zd2cast1328za2zzcallcc_walkz00(obj_t
		BgL_envz00_2299, obj_t BgL_nodez00_2300)
	{
		{	/* Callcc/walk.scm 221 */
			((((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2300)))->BgL_argz00) =
				((BgL_nodez00_bglt)
					BGl_callccz12z12zzcallcc_walkz00((((BgL_castz00_bglt)
								COBJECT(((BgL_castz00_bglt) BgL_nodez00_2300)))->BgL_argz00))),
				BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2300));
		}

	}



/* &callcc!-extern1326 */
	BgL_nodez00_bglt BGl_z62callccz12zd2extern1326za2zzcallcc_walkz00(obj_t
		BgL_envz00_2301, obj_t BgL_nodez00_2302)
	{
		{	/* Callcc/walk.scm 214 */
			BGl_callccza2z12zb0zzcallcc_walkz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2302)))->BgL_exprza2za2));
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2302));
		}

	}



/* &callcc!-funcall1324 */
	BgL_nodez00_bglt BGl_z62callccz12zd2funcall1324za2zzcallcc_walkz00(obj_t
		BgL_envz00_2303, obj_t BgL_nodez00_2304)
	{
		{	/* Callcc/walk.scm 205 */
			{
				BgL_nodez00_bglt BgL_auxz00_3303;

				{	/* Callcc/walk.scm 207 */
					BgL_nodez00_bglt BgL_arg1719z00_2438;

					BgL_arg1719z00_2438 =
						(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2304)))->BgL_funz00);
					BgL_auxz00_3303 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1719z00_2438);
				}
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2304)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3303), BUNSPEC);
			}
			BGl_callccza2z12zb0zzcallcc_walkz00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2304)))->BgL_argsz00));
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2304));
		}

	}



/* &callcc!-app-ly1322 */
	BgL_nodez00_bglt BGl_z62callccz12zd2appzd2ly1322z70zzcallcc_walkz00(obj_t
		BgL_envz00_2305, obj_t BgL_nodez00_2306)
	{
		{	/* Callcc/walk.scm 196 */
			{
				BgL_nodez00_bglt BgL_auxz00_3314;

				{	/* Callcc/walk.scm 198 */
					BgL_nodez00_bglt BgL_arg1711z00_2440;

					BgL_arg1711z00_2440 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2306)))->BgL_funz00);
					BgL_auxz00_3314 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1711z00_2440);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2306)))->BgL_funz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3314), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3320;

				{	/* Callcc/walk.scm 199 */
					BgL_nodez00_bglt BgL_arg1712z00_2441;

					BgL_arg1712z00_2441 =
						(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2306)))->BgL_argz00);
					BgL_auxz00_3320 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1712z00_2441);
				}
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2306)))->BgL_argz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3320), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2306));
		}

	}



/* &callcc!-app1320 */
	BgL_nodez00_bglt BGl_z62callccz12zd2app1320za2zzcallcc_walkz00(obj_t
		BgL_envz00_2307, obj_t BgL_nodez00_2308)
	{
		{	/* Callcc/walk.scm 188 */
			BGl_callccza2z12zb0zzcallcc_walkz00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2308)))->BgL_argsz00));
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2308));
		}

	}



/* &callcc!-sync1318 */
	BgL_nodez00_bglt BGl_z62callccz12zd2sync1318za2zzcallcc_walkz00(obj_t
		BgL_envz00_2309, obj_t BgL_nodez00_2310)
	{
		{	/* Callcc/walk.scm 178 */
			{
				BgL_nodez00_bglt BgL_auxz00_3333;

				{	/* Callcc/walk.scm 180 */
					BgL_nodez00_bglt BgL_arg1697z00_2444;

					BgL_arg1697z00_2444 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2310)))->BgL_mutexz00);
					BgL_auxz00_3333 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1697z00_2444);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2310)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3333), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3339;

				{	/* Callcc/walk.scm 181 */
					BgL_nodez00_bglt BgL_arg1704z00_2445;

					BgL_arg1704z00_2445 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2310)))->BgL_prelockz00);
					BgL_auxz00_3339 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1704z00_2445);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2310)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3339), BUNSPEC);
			}
			{
				BgL_nodez00_bglt BgL_auxz00_3345;

				{	/* Callcc/walk.scm 182 */
					BgL_nodez00_bglt BgL_arg1707z00_2446;

					BgL_arg1707z00_2446 =
						(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2310)))->BgL_bodyz00);
					BgL_auxz00_3345 =
						BGl_callccz12z12zzcallcc_walkz00(BgL_arg1707z00_2446);
				}
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2310)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_3345), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2310));
		}

	}



/* &callcc!-sequence1316 */
	BgL_nodez00_bglt BGl_z62callccz12zd2sequence1316za2zzcallcc_walkz00(obj_t
		BgL_envz00_2311, obj_t BgL_nodez00_2312)
	{
		{	/* Callcc/walk.scm 171 */
			BGl_callccza2z12zb0zzcallcc_walkz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2312)))->BgL_nodesz00));
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2312));
		}

	}



/* &callcc!-var1314 */
	BgL_nodez00_bglt BGl_z62callccz12zd2var1314za2zzcallcc_walkz00(obj_t
		BgL_envz00_2313, obj_t BgL_nodez00_2314)
	{
		{	/* Callcc/walk.scm 141 */
			{	/* Callcc/walk.scm 142 */
				BgL_variablez00_bglt BgL_varz00_2449;

				BgL_varz00_2449 =
					(((BgL_varz00_bglt) COBJECT(
							((BgL_varz00_bglt) BgL_nodez00_2314)))->BgL_variablez00);
				{	/* Callcc/walk.scm 142 */
					BgL_typez00_bglt BgL_vtypez00_2450;

					BgL_vtypez00_2450 =
						(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2449))->BgL_typez00);
					{	/* Callcc/walk.scm 143 */

						{	/* Callcc/walk.scm 144 */
							obj_t BgL_g1149z00_2451;

							BgL_g1149z00_2451 =
								(((BgL_variablez00_bglt) COBJECT(BgL_varz00_2449))->
								BgL_fastzd2alphazd2);
							{
								BgL_variablez00_bglt BgL_varz00_2453;
								obj_t BgL_alphaz00_2454;

								BgL_varz00_2453 = BgL_varz00_2449;
								BgL_alphaz00_2454 = BgL_g1149z00_2451;
							BgL_loopz00_2452:
								if (BGl_isazf3zf3zz__objectz00(BgL_alphaz00_2454,
										BGl_localz00zzast_varz00))
									{	/* Callcc/walk.scm 146 */
										((((BgL_varz00_bglt) COBJECT(
														((BgL_varz00_bglt) BgL_nodez00_2314)))->
												BgL_variablez00) =
											((BgL_variablez00_bglt) ((BgL_variablez00_bglt) (
														(BgL_localz00_bglt) BgL_alphaz00_2454))), BUNSPEC);
										{	/* Callcc/walk.scm 149 */
											obj_t BgL_arg1687z00_2455;

											BgL_arg1687z00_2455 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_alphaz00_2454))))->
												BgL_fastzd2alphazd2);
											{
												obj_t BgL_alphaz00_3374;
												BgL_variablez00_bglt BgL_varz00_3371;

												BgL_varz00_3371 =
													((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_alphaz00_2454));
												BgL_alphaz00_3374 = BgL_arg1687z00_2455;
												BgL_alphaz00_2454 = BgL_alphaz00_3374;
												BgL_varz00_2453 = BgL_varz00_3371;
												goto BgL_loopz00_2452;
											}
										}
									}
								else
									{	/* Callcc/walk.scm 155 */
										bool_t BgL_test2067z00_3375;

										{	/* Callcc/walk.scm 155 */
											bool_t BgL_res1938z00_2456;

											BgL_res1938z00_2456 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_varz00_2453), BGl_globalz00zzast_varz00);
											BgL_test2067z00_3375 = BgL_res1938z00_2456;
										}
										if (BgL_test2067z00_3375)
											{	/* Callcc/walk.scm 155 */
												return
													((BgL_nodez00_bglt)
													((BgL_varz00_bglt) BgL_nodez00_2314));
											}
										else
											{	/* Callcc/walk.scm 155 */
												if (BGl_celledzf3zf3zzcallcc_walkz00(BgL_varz00_2453))
													{	/* Callcc/walk.scm 160 */
														BgL_typez00_bglt BgL_vtypez00_2457;

														BgL_vtypez00_2457 =
															BGl_getzd2bigloozd2definedzd2typezd2zztype_cachez00
															(BgL_vtypez00_2450);
														{	/* Callcc/walk.scm 161 */
															BgL_typez00_bglt BgL_vz00_2458;

															BgL_vz00_2458 =
																((BgL_typez00_bglt)
																BGl_za2cellza2z00zztype_cachez00);
															((((BgL_nodez00_bglt)
																		COBJECT(((BgL_nodez00_bglt) (
																					(BgL_varz00_bglt)
																					BgL_nodez00_2314))))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_vz00_2458), BUNSPEC);
														}
														{	/* Callcc/walk.scm 162 */
															BgL_boxzd2refzd2_bglt BgL_new1151z00_2459;

															{	/* Callcc/walk.scm 165 */
																BgL_boxzd2refzd2_bglt BgL_new1150z00_2460;

																BgL_new1150z00_2460 =
																	((BgL_boxzd2refzd2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_boxzd2refzd2_bgl))));
																{	/* Callcc/walk.scm 165 */
																	long BgL_arg1695z00_2461;

																	{	/* Callcc/walk.scm 165 */
																		long BgL_res1939z00_2462;

																		BgL_res1939z00_2462 =
																			BGL_CLASS_INDEX
																			(BGl_boxzd2refzd2zzast_nodez00);
																		BgL_arg1695z00_2461 = BgL_res1939z00_2462;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1150z00_2460),
																		BgL_arg1695z00_2461);
																}
																{	/* Callcc/walk.scm 165 */
																	BgL_objectz00_bglt BgL_tmpz00_3391;

																	BgL_tmpz00_3391 =
																		((BgL_objectz00_bglt) BgL_new1150z00_2460);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3391,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1150z00_2460);
																BgL_new1151z00_2459 = BgL_new1150z00_2460;
															}
															((((BgL_nodez00_bglt) COBJECT(
																			((BgL_nodez00_bglt)
																				BgL_new1151z00_2459)))->BgL_locz00) =
																((obj_t) (((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt) (
																						(BgL_varz00_bglt)
																						BgL_nodez00_2314))))->BgL_locz00)),
																BUNSPEC);
															((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
																				BgL_new1151z00_2459)))->BgL_typez00) =
																((BgL_typez00_bglt) BgL_vtypez00_2457),
																BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1151z00_2459)))->
																	BgL_sidezd2effectzd2) =
																((obj_t) BUNSPEC), BUNSPEC);
															((((BgL_nodezf2effectzf2_bglt)
																		COBJECT(((BgL_nodezf2effectzf2_bglt)
																				BgL_new1151z00_2459)))->BgL_keyz00) =
																((obj_t) BINT(((long) -1))), BUNSPEC);
															((((BgL_boxzd2refzd2_bglt)
																		COBJECT(BgL_new1151z00_2459))->BgL_varz00) =
																((BgL_varz00_bglt) ((BgL_varz00_bglt)
																		BgL_nodez00_2314)), BUNSPEC);
															((((BgL_boxzd2refzd2_bglt)
																		COBJECT(BgL_new1151z00_2459))->
																	BgL_vtypez00) =
																((BgL_typez00_bglt) BgL_vtypez00_2457),
																BUNSPEC);
															return ((BgL_nodez00_bglt) BgL_new1151z00_2459);
														}
													}
												else
													{	/* Callcc/walk.scm 157 */
														return
															((BgL_nodez00_bglt)
															((BgL_varz00_bglt) BgL_nodez00_2314));
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



/* &callcc!-kwote1312 */
	BgL_nodez00_bglt BGl_z62callccz12zd2kwote1312za2zzcallcc_walkz00(obj_t
		BgL_envz00_2315, obj_t BgL_nodez00_2316)
	{
		{	/* Callcc/walk.scm 135 */
			return ((BgL_nodez00_bglt) ((BgL_kwotez00_bglt) BgL_nodez00_2316));
		}

	}



/* &callcc!-atom1310 */
	BgL_nodez00_bglt BGl_z62callccz12zd2atom1310za2zzcallcc_walkz00(obj_t
		BgL_envz00_2317, obj_t BgL_nodez00_2318)
	{
		{	/* Callcc/walk.scm 129 */
			return ((BgL_nodez00_bglt) ((BgL_atomz00_bglt) BgL_nodez00_2318));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcallcc_walkz00()
	{
		{	/* Callcc/walk.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1986z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1986z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1986z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1986z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1986z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1986z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1986z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1986z00zzcallcc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1986z00zzcallcc_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1986z00zzcallcc_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
