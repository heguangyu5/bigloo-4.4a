/*===========================================================================*/
/*   (Beta/walk.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Beta/walk.scm) */
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

	typedef struct BgL_patchz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
		struct BgL_varz00_bgl *BgL_refz00;
		long BgL_indexz00;
		obj_t BgL_patchidz00;
	}               *BgL_patchz00_bglt;

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
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2appzd2ly1266za2zzbeta_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_betazd2walkz12zc0zzbeta_walkz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzbeta_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2condition1277z70zzbeta_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_z62betazd2walkz12za2zzbeta_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2extern1270z70zzbeta_walkz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2boxzd2setz121287zb0zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2makezd2box1283za2zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzbeta_walkz00();
	extern obj_t BGl_externz00zzast_nodez00;
	BGL_IMPORT obj_t bgl_typeof(obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2letzd2fun1289za2zzbeta_walkz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2jumpzd2exzd2i1295z70zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2app1264z70zzbeta_walkz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2cast1273z70zzbeta_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2setq1275z70zzbeta_walkz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbeta_walkz00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2letzd2var1291za2zzbeta_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_patchz00zzast_nodez00;
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzbeta_walkz00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzbeta_walkz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzbeta_walkz00();
	static obj_t BGl_nodezd2betaza2z12z62zzbeta_walkz00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static BgL_nodez00_bglt BGl_nodezd2betaz12zc0zzbeta_walkz00(BgL_nodez00_bglt,
		obj_t);
	static obj_t BGl_z62nodezd2betaz121257za2zzbeta_walkz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2switch1281z70zzbeta_walkz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62nodezd2betaz12za2zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	static bool_t BGl_betazd2globalsz12zc0zzbeta_walkz00(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2sequence1260z70zzbeta_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2setzd2exzd2it1293z70zzbeta_walkz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbeta_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
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
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2sync1262z70zzbeta_walkz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2fail1279z70zzbeta_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzbeta_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzbeta_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzbeta_walkz00();
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2funcall1268z70zzbeta_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_literalz00zzast_nodez00;
	extern obj_t BGl_switchz00zzast_nodez00;
	static BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2boxzd2ref1285za2zzbeta_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711894za7,
		BGl_z62nodezd2betaz12za2zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_betazd2walkz12zd2envz12zzbeta_walkz00,
		BgL_bgl_za762betaza7d2walkza711895za7,
		BGl_z62betazd2walkz12za2zzbeta_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1859z00zzbeta_walkz00,
		BgL_bgl_string1859za700za7za7b1896za7, "Constant Beta", 13);
	      DEFINE_STRING(BGl_string1860z00zzbeta_walkz00,
		BgL_bgl_string1860za700za7za7b1897za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1861z00zzbeta_walkz00,
		BgL_bgl_string1861za700za7za7b1898za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1862z00zzbeta_walkz00,
		BgL_bgl_string1862za700za7za7b1899za7, " error", 6);
	      DEFINE_STRING(BGl_string1863z00zzbeta_walkz00,
		BgL_bgl_string1863za700za7za7b1900za7, "s", 1);
	      DEFINE_STRING(BGl_string1864z00zzbeta_walkz00,
		BgL_bgl_string1864za700za7za7b1901za7, "", 0);
	      DEFINE_STRING(BGl_string1865z00zzbeta_walkz00,
		BgL_bgl_string1865za700za7za7b1902za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1866z00zzbeta_walkz00,
		BgL_bgl_string1866za700za7za7b1903za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string1868z00zzbeta_walkz00,
		BgL_bgl_string1868za700za7za7b1904za7, "node-beta!1257", 14);
	      DEFINE_STRING(BGl_string1870z00zzbeta_walkz00,
		BgL_bgl_string1870za700za7za7b1905za7, "node-beta!", 10);
	      DEFINE_STRING(BGl_string1888z00zzbeta_walkz00,
		BgL_bgl_string1888za700za7za7b1906za7, "wrong node", 10);
	      DEFINE_STRING(BGl_string1889z00zzbeta_walkz00,
		BgL_bgl_string1889za700za7za7b1907za7, "beta_walk", 9);
	      DEFINE_STRING(BGl_string1890z00zzbeta_walkz00,
		BgL_bgl_string1890za700za7za7b1908za7, "read beta pass-started ", 23);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1867z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711909za7,
		BGl_z62nodezd2betaz121257za2zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1869z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711910za7,
		BGl_z62nodezd2betaz12zd2sequence1260z70zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1871z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711911za7,
		BGl_z62nodezd2betaz12zd2sync1262z70zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1872z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711912za7,
		BGl_z62nodezd2betaz12zd2app1264z70zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1873z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711913za7,
		BGl_z62nodezd2betaz12zd2appzd2ly1266za2zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1874z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711914za7,
		BGl_z62nodezd2betaz12zd2funcall1268z70zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1875z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711915za7,
		BGl_z62nodezd2betaz12zd2extern1270z70zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1876z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711916za7,
		BGl_z62nodezd2betaz12zd2cast1273z70zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1877z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711917za7,
		BGl_z62nodezd2betaz12zd2setq1275z70zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1878z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711918za7,
		BGl_z62nodezd2betaz12zd2condition1277z70zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1879z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711919za7,
		BGl_z62nodezd2betaz12zd2fail1279z70zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1880z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711920za7,
		BGl_z62nodezd2betaz12zd2switch1281z70zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1881z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711921za7,
		BGl_z62nodezd2betaz12zd2makezd2box1283za2zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1882z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711922za7,
		BGl_z62nodezd2betaz12zd2boxzd2ref1285za2zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1883z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711923za7,
		BGl_z62nodezd2betaz12zd2boxzd2setz121287zb0zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1884z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711924za7,
		BGl_z62nodezd2betaz12zd2letzd2fun1289za2zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1885z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711925za7,
		BGl_z62nodezd2betaz12zd2letzd2var1291za2zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1886z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711926za7,
		BGl_z62nodezd2betaz12zd2setzd2exzd2it1293z70zzbeta_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1887z00zzbeta_walkz00,
		BgL_bgl_za762nodeza7d2betaza711927za7,
		BGl_z62nodezd2betaz12zd2jumpzd2exzd2i1295z70zzbeta_walkz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzbeta_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbeta_walkz00(long
		BgL_checksumz00_2221, char *BgL_fromz00_2222)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbeta_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzbeta_walkz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbeta_walkz00();
					BGl_libraryzd2moduleszd2initz00zzbeta_walkz00();
					BGl_cnstzd2initzd2zzbeta_walkz00();
					BGl_importedzd2moduleszd2initz00zzbeta_walkz00();
					BGl_genericzd2initzd2zzbeta_walkz00();
					BGl_methodzd2initzd2zzbeta_walkz00();
					return BGl_toplevelzd2initzd2zzbeta_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbeta_walkz00()
	{
		{	/* Beta/walk.scm 18 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "beta_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "beta_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"beta_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "beta_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbeta_walkz00()
	{
		{	/* Beta/walk.scm 18 */
			{	/* Beta/walk.scm 18 */
				obj_t BgL_cportz00_2130;

				{	/* Beta/walk.scm 18 */
					obj_t BgL_stringz00_2138;

					BgL_stringz00_2138 = BGl_string1890z00zzbeta_walkz00;
					{	/* Beta/walk.scm 18 */
						obj_t BgL_startz00_2139;

						BgL_startz00_2139 = BINT(((long) 0));
						{	/* Beta/walk.scm 18 */
							obj_t BgL_endz00_2140;

							BgL_endz00_2140 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2138)));
							{	/* Beta/walk.scm 18 */

								BgL_cportz00_2130 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2138, BgL_startz00_2139, BgL_endz00_2140);
				}}}}
				{
					long BgL_iz00_2131;

					BgL_iz00_2131 = ((long) 2);
				BgL_loopz00_2132:
					if ((BgL_iz00_2131 == ((long) -1)))
						{	/* Beta/walk.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Beta/walk.scm 18 */
							{	/* Beta/walk.scm 18 */
								obj_t BgL_arg1892z00_2134;

								{	/* Beta/walk.scm 18 */

									{	/* Beta/walk.scm 18 */
										obj_t BgL_locationz00_2136;

										BgL_locationz00_2136 = BBOOL(((bool_t) 0));
										{	/* Beta/walk.scm 18 */

											BgL_arg1892z00_2134 =
												BGl_readz00zz__readerz00(BgL_cportz00_2130,
												BgL_locationz00_2136);
										}
									}
								}
								{	/* Beta/walk.scm 18 */
									int BgL_tmpz00_2257;

									BgL_tmpz00_2257 = (int) (BgL_iz00_2131);
									CNST_TABLE_SET(BgL_tmpz00_2257, BgL_arg1892z00_2134);
							}}
							{	/* Beta/walk.scm 18 */
								int BgL_auxz00_2137;

								BgL_auxz00_2137 = (int) ((BgL_iz00_2131 - ((long) 1)));
								{
									long BgL_iz00_2262;

									BgL_iz00_2262 = (long) (BgL_auxz00_2137);
									BgL_iz00_2131 = BgL_iz00_2262;
									goto BgL_loopz00_2132;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbeta_walkz00()
	{
		{	/* Beta/walk.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbeta_walkz00()
	{
		{	/* Beta/walk.scm 18 */
			return BUNSPEC;
		}

	}



/* beta-walk! */
	BGL_EXPORTED_DEF obj_t BGl_betazd2walkz12zc0zzbeta_walkz00(obj_t
		BgL_globalsz00_3)
	{
		{	/* Beta/walk.scm 34 */
			{	/* Beta/walk.scm 35 */
				obj_t BgL_list1299z00_1366;

				{	/* Beta/walk.scm 35 */
					obj_t BgL_arg1300z00_1367;

					{	/* Beta/walk.scm 35 */
						obj_t BgL_arg1301z00_1368;

						BgL_arg1301z00_1368 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1300z00_1367 =
							MAKE_YOUNG_PAIR(BGl_string1859z00zzbeta_walkz00,
							BgL_arg1301z00_1368);
					}
					BgL_list1299z00_1366 =
						MAKE_YOUNG_PAIR(BGl_string1860z00zzbeta_walkz00,
						BgL_arg1300z00_1367);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1299z00_1366);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1859z00zzbeta_walkz00;
			{	/* Beta/walk.scm 35 */
				obj_t BgL_g1108z00_1369;

				BgL_g1108z00_1369 = BNIL;
				{
					obj_t BgL_hooksz00_1372;
					obj_t BgL_hnamesz00_1373;

					BgL_hooksz00_1372 = BgL_g1108z00_1369;
					BgL_hnamesz00_1373 = BNIL;
				BgL_zc3z04anonymousza31302ze3z87_1374:
					if (NULLP(BgL_hooksz00_1372))
						{	/* Beta/walk.scm 35 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Beta/walk.scm 35 */
							bool_t BgL_test1931z00_2275;

							{	/* Beta/walk.scm 35 */
								obj_t BgL_fun1309z00_1381;

								BgL_fun1309z00_1381 = CAR(((obj_t) BgL_hooksz00_1372));
								BgL_test1931z00_2275 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1309z00_1381)
									(BgL_fun1309z00_1381, BEOA));
							}
							if (BgL_test1931z00_2275)
								{	/* Beta/walk.scm 35 */
									obj_t BgL_arg1306z00_1378;
									obj_t BgL_arg1307z00_1379;

									BgL_arg1306z00_1378 = CDR(((obj_t) BgL_hooksz00_1372));
									BgL_arg1307z00_1379 = CDR(((obj_t) BgL_hnamesz00_1373));
									{
										obj_t BgL_hnamesz00_2287;
										obj_t BgL_hooksz00_2286;

										BgL_hooksz00_2286 = BgL_arg1306z00_1378;
										BgL_hnamesz00_2287 = BgL_arg1307z00_1379;
										BgL_hnamesz00_1373 = BgL_hnamesz00_2287;
										BgL_hooksz00_1372 = BgL_hooksz00_2286;
										goto BgL_zc3z04anonymousza31302ze3z87_1374;
									}
								}
							else
								{	/* Beta/walk.scm 35 */
									obj_t BgL_arg1308z00_1380;

									BgL_arg1308z00_1380 = CAR(((obj_t) BgL_hnamesz00_1373));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1859z00zzbeta_walkz00,
										BGl_string1861z00zzbeta_walkz00, BgL_arg1308z00_1380);
								}
						}
				}
			}
			BGl_betazd2globalsz12zc0zzbeta_walkz00(BgL_globalsz00_3);
			{	/* Beta/walk.scm 37 */
				obj_t BgL_valuez00_1384;

				BgL_valuez00_1384 =
					BGl_removezd2varzd2zzast_removez00(CNST_TABLE_REF(((long) 1)),
					BgL_globalsz00_3);
				if (((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
						((long) 0)))
					{	/* Beta/walk.scm 37 */
						{	/* Beta/walk.scm 37 */
							obj_t BgL_port1242z00_1386;

							{	/* Beta/walk.scm 37 */
								obj_t BgL_res1824z00_1846;

								{	/* Beta/walk.scm 37 */
									obj_t BgL_tmpz00_2297;

									BgL_tmpz00_2297 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1824z00_1846 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2297);
								}
								BgL_port1242z00_1386 = BgL_res1824z00_1846;
							}
							bgl_display_obj
								(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
								BgL_port1242z00_1386);
							bgl_display_string(BGl_string1862z00zzbeta_walkz00,
								BgL_port1242z00_1386);
							{	/* Beta/walk.scm 37 */
								obj_t BgL_arg1312z00_1387;

								{	/* Beta/walk.scm 37 */
									bool_t BgL_test1933z00_2302;

									if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
										(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
										{	/* Beta/walk.scm 37 */
											if (INTEGERP
												(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
												{	/* Beta/walk.scm 37 */
													BgL_test1933z00_2302 =
														(
														(long)
														CINT
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
														> ((long) 1));
												}
											else
												{	/* Beta/walk.scm 37 */
													BgL_test1933z00_2302 =
														BGl_2ze3ze3zz__r4_numbers_6_5z00
														(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
														BINT(((long) 1)));
										}}
									else
										{	/* Beta/walk.scm 37 */
											BgL_test1933z00_2302 = ((bool_t) 0);
										}
									if (BgL_test1933z00_2302)
										{	/* Beta/walk.scm 37 */
											BgL_arg1312z00_1387 = BGl_string1863z00zzbeta_walkz00;
										}
									else
										{	/* Beta/walk.scm 37 */
											BgL_arg1312z00_1387 = BGl_string1864z00zzbeta_walkz00;
										}
								}
								bgl_display_obj(BgL_arg1312z00_1387, BgL_port1242z00_1386);
							}
							bgl_display_string(BGl_string1865z00zzbeta_walkz00,
								BgL_port1242z00_1386);
							bgl_display_char(((unsigned char) 10), BgL_port1242z00_1386);
						}
						{	/* Beta/walk.scm 37 */
							obj_t BgL_list1316z00_1393;

							BgL_list1316z00_1393 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
							return BGl_exitz00zz__errorz00(BgL_list1316z00_1393);
						}
					}
				else
					{	/* Beta/walk.scm 37 */
						obj_t BgL_g1110z00_1394;

						BgL_g1110z00_1394 = BNIL;
						{
							obj_t BgL_hooksz00_1397;
							obj_t BgL_hnamesz00_1398;

							BgL_hooksz00_1397 = BgL_g1110z00_1394;
							BgL_hnamesz00_1398 = BNIL;
						BgL_zc3z04anonymousza31317ze3z87_1399:
							if (NULLP(BgL_hooksz00_1397))
								{	/* Beta/walk.scm 37 */
									return BgL_valuez00_1384;
								}
							else
								{	/* Beta/walk.scm 37 */
									bool_t BgL_test1937z00_2319;

									{	/* Beta/walk.scm 37 */
										obj_t BgL_fun1326z00_1406;

										BgL_fun1326z00_1406 = CAR(((obj_t) BgL_hooksz00_1397));
										BgL_test1937z00_2319 =
											CBOOL(PROCEDURE_ENTRY(BgL_fun1326z00_1406)
											(BgL_fun1326z00_1406, BEOA));
									}
									if (BgL_test1937z00_2319)
										{	/* Beta/walk.scm 37 */
											obj_t BgL_arg1322z00_1403;
											obj_t BgL_arg1324z00_1404;

											BgL_arg1322z00_1403 = CDR(((obj_t) BgL_hooksz00_1397));
											BgL_arg1324z00_1404 = CDR(((obj_t) BgL_hnamesz00_1398));
											{
												obj_t BgL_hnamesz00_2331;
												obj_t BgL_hooksz00_2330;

												BgL_hooksz00_2330 = BgL_arg1322z00_1403;
												BgL_hnamesz00_2331 = BgL_arg1324z00_1404;
												BgL_hnamesz00_1398 = BgL_hnamesz00_2331;
												BgL_hooksz00_1397 = BgL_hooksz00_2330;
												goto BgL_zc3z04anonymousza31317ze3z87_1399;
											}
										}
									else
										{	/* Beta/walk.scm 37 */
											obj_t BgL_arg1325z00_1405;

											BgL_arg1325z00_1405 = CAR(((obj_t) BgL_hnamesz00_1398));
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_za2currentzd2passza2zd2zzengine_passz00,
												BGl_string1866z00zzbeta_walkz00, BgL_arg1325z00_1405);
										}
								}
						}
					}
			}
		}

	}



/* &beta-walk! */
	obj_t BGl_z62betazd2walkz12za2zzbeta_walkz00(obj_t BgL_envz00_2049,
		obj_t BgL_globalsz00_2050)
	{
		{	/* Beta/walk.scm 34 */
			return BGl_betazd2walkz12zc0zzbeta_walkz00(BgL_globalsz00_2050);
		}

	}



/* beta-globals! */
	bool_t BGl_betazd2globalsz12zc0zzbeta_walkz00(obj_t BgL_globalsz00_4)
	{
		{	/* Beta/walk.scm 42 */
			{
				obj_t BgL_l1243z00_1410;

				BgL_l1243z00_1410 = BgL_globalsz00_4;
			BgL_zc3z04anonymousza31328ze3z87_1411:
				if (PAIRP(BgL_l1243z00_1410))
					{	/* Beta/walk.scm 43 */
						{	/* Beta/walk.scm 44 */
							obj_t BgL_globalz00_1413;

							BgL_globalz00_1413 = CAR(BgL_l1243z00_1410);
							{	/* Beta/walk.scm 44 */
								BgL_valuez00_bglt BgL_sfunz00_1414;

								BgL_sfunz00_1414 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_globalz00_1413))))->
									BgL_valuez00);
								{	/* Beta/walk.scm 45 */
									BgL_nodez00_bglt BgL_arg1330z00_1415;

									{	/* Beta/walk.scm 45 */
										obj_t BgL_arg1331z00_1416;

										BgL_arg1331z00_1416 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_sfunz00_1414)))->BgL_bodyz00);
										BgL_arg1330z00_1415 =
											BGl_nodezd2betaz12zc0zzbeta_walkz00(
											((BgL_nodez00_bglt) BgL_arg1331z00_1416), BNIL);
									}
									((((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_sfunz00_1414)))->
											BgL_bodyz00) =
										((obj_t) ((obj_t) BgL_arg1330z00_1415)), BUNSPEC);
								}
							}
						}
						{
							obj_t BgL_l1243z00_2349;

							BgL_l1243z00_2349 = CDR(BgL_l1243z00_1410);
							BgL_l1243z00_1410 = BgL_l1243z00_2349;
							goto BgL_zc3z04anonymousza31328ze3z87_1411;
						}
					}
				else
					{	/* Beta/walk.scm 43 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* node-beta*! */
	obj_t BGl_nodezd2betaza2z12z62zzbeta_walkz00(obj_t BgL_nodeza2za2_43,
		obj_t BgL_stackz00_44)
	{
		{	/* Beta/walk.scm 234 */
			{
				obj_t BgL_l1255z00_1421;

				BgL_l1255z00_1421 = BgL_nodeza2za2_43;
			BgL_zc3z04anonymousza31335ze3z87_1422:
				if (NULLP(BgL_l1255z00_1421))
					{	/* Beta/walk.scm 235 */
						BgL_nodeza2za2_43;
					}
				else
					{	/* Beta/walk.scm 235 */
						{	/* Beta/walk.scm 235 */
							BgL_nodez00_bglt BgL_arg1337z00_1424;

							{	/* Beta/walk.scm 235 */
								obj_t BgL_nodez00_1425;

								BgL_nodez00_1425 = CAR(((obj_t) BgL_l1255z00_1421));
								BgL_arg1337z00_1424 =
									BGl_nodezd2betaz12zc0zzbeta_walkz00(
									((BgL_nodez00_bglt) BgL_nodez00_1425), BgL_stackz00_44);
							}
							{	/* Beta/walk.scm 235 */
								obj_t BgL_auxz00_2359;
								obj_t BgL_tmpz00_2357;

								BgL_auxz00_2359 = ((obj_t) BgL_arg1337z00_1424);
								BgL_tmpz00_2357 = ((obj_t) BgL_l1255z00_1421);
								SET_CAR(BgL_tmpz00_2357, BgL_auxz00_2359);
							}
						}
						{	/* Beta/walk.scm 235 */
							obj_t BgL_arg1338z00_1426;

							BgL_arg1338z00_1426 = CDR(((obj_t) BgL_l1255z00_1421));
							{
								obj_t BgL_l1255z00_2364;

								BgL_l1255z00_2364 = BgL_arg1338z00_1426;
								BgL_l1255z00_1421 = BgL_l1255z00_2364;
								goto BgL_zc3z04anonymousza31335ze3z87_1422;
							}
						}
					}
			}
			return BgL_nodeza2za2_43;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbeta_walkz00()
	{
		{	/* Beta/walk.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbeta_walkz00()
	{
		{	/* Beta/walk.scm 18 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_proc1867z00zzbeta_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string1868z00zzbeta_walkz00);
		}

	}



/* &node-beta!1257 */
	obj_t BGl_z62nodezd2betaz121257za2zzbeta_walkz00(obj_t BgL_envz00_2052,
		obj_t BgL_nodez00_2053, obj_t BgL_stackz00_2054)
	{
		{	/* Beta/walk.scm 51 */
			return ((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2053));
		}

	}



/* node-beta! */
	BgL_nodez00_bglt BGl_nodezd2betaz12zc0zzbeta_walkz00(BgL_nodez00_bglt
		BgL_nodez00_5, obj_t BgL_stackz00_6)
	{
		{	/* Beta/walk.scm 51 */
			{	/* Beta/walk.scm 51 */
				obj_t BgL_method1258z00_1433;

				{	/* Beta/walk.scm 51 */
					obj_t BgL_res1841z00_1908;

					{	/* Beta/walk.scm 51 */
						long BgL_objzd2classzd2numz00_1873;

						{	/* Beta/walk.scm 51 */
							long BgL_res1831z00_1876;

							BgL_res1831z00_1876 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_5));
							BgL_objzd2classzd2numz00_1873 = BgL_res1831z00_1876;
						}
						{	/* Beta/walk.scm 51 */
							obj_t BgL_arg1813z00_1874;

							BgL_arg1813z00_1874 =
								PROCEDURE_REF(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
								(int) (((long) 1)));
							{	/* Beta/walk.scm 51 */
								int BgL_offsetz00_1878;

								BgL_offsetz00_1878 = (int) (BgL_objzd2classzd2numz00_1873);
								{	/* Beta/walk.scm 51 */
									long BgL_offsetz00_1879;

									BgL_offsetz00_1879 =
										((long) (BgL_offsetz00_1878) - OBJECT_TYPE);
									{	/* Beta/walk.scm 51 */
										long BgL_modz00_1880;

										BgL_modz00_1880 =
											(BgL_offsetz00_1879 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Beta/walk.scm 51 */
											long BgL_restz00_1882;

											BgL_restz00_1882 =
												(BgL_offsetz00_1879 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Beta/walk.scm 51 */

												{	/* Beta/walk.scm 51 */
													obj_t BgL_bucketz00_1884;

													BgL_bucketz00_1884 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1874), BgL_modz00_1880);
													BgL_res1841z00_1908 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1884), BgL_restz00_1882);
					}}}}}}}}
					BgL_method1258z00_1433 = BgL_res1841z00_1908;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1258z00_1433) (BgL_method1258z00_1433,
						((obj_t) BgL_nodez00_5), BgL_stackz00_6, BEOA));
			}
		}

	}



/* &node-beta! */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12za2zzbeta_walkz00(obj_t BgL_envz00_2055,
		obj_t BgL_nodez00_2056, obj_t BgL_stackz00_2057)
	{
		{	/* Beta/walk.scm 51 */
			return
				BGl_nodezd2betaz12zc0zzbeta_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2056), BgL_stackz00_2057);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbeta_walkz00()
	{
		{	/* Beta/walk.scm 18 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc1869z00zzbeta_walkz00,
				BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_syncz00zzast_nodez00,
				BGl_proc1871z00zzbeta_walkz00, BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc1872z00zzbeta_walkz00, BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1873z00zzbeta_walkz00,
				BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc1874z00zzbeta_walkz00, BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc1875z00zzbeta_walkz00, BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc1876z00zzbeta_walkz00, BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc1877z00zzbeta_walkz00, BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1878z00zzbeta_walkz00,
				BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc1879z00zzbeta_walkz00, BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00, BGl_switchz00zzast_nodez00,
				BGl_proc1880z00zzbeta_walkz00, BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1881z00zzbeta_walkz00,
				BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1882z00zzbeta_walkz00,
				BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1883z00zzbeta_walkz00,
				BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1884z00zzbeta_walkz00,
				BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1885z00zzbeta_walkz00,
				BGl_string1870z00zzbeta_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1886z00zzbeta_walkz00,
				BGl_string1870z00zzbeta_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzbeta_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1887z00zzbeta_walkz00,
				BGl_string1870z00zzbeta_walkz00);
		}

	}



/* &node-beta!-jump-ex-i1295 */
	BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2jumpzd2exzd2i1295z70zzbeta_walkz00(obj_t
		BgL_envz00_2076, obj_t BgL_nodez00_2077, obj_t BgL_stackz00_2078)
	{
		{	/* Beta/walk.scm 226 */
			((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
							((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2077)))->BgL_exitz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_jumpzd2exzd2itz00_bglt)
								COBJECT(((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2077)))->
							BgL_exitz00), BgL_stackz00_2078)), BUNSPEC);
			((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(((BgL_jumpzd2exzd2itz00_bglt)
								BgL_nodez00_2077)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_jumpzd2exzd2itz00_bglt)
								COBJECT(((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2077)))->
							BgL_valuez00), BgL_stackz00_2078)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_jumpzd2exzd2itz00_bglt)
					BgL_nodez00_2077));
		}

	}



/* &node-beta!-set-ex-it1293 */
	BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2setzd2exzd2it1293z70zzbeta_walkz00(obj_t
		BgL_envz00_2079, obj_t BgL_nodez00_2080, obj_t BgL_stackz00_2081)
	{
		{	/* Beta/walk.scm 219 */
			((((BgL_setzd2exzd2itz00_bglt) COBJECT(
							((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2080)))->BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_setzd2exzd2itz00_bglt)
								COBJECT(((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2080)))->
							BgL_bodyz00), BgL_stackz00_2081)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setzd2exzd2itz00_bglt)
					BgL_nodez00_2080));
		}

	}



/* &node-beta!-let-var1291 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2letzd2var1291za2zzbeta_walkz00(obj_t
		BgL_envz00_2082, obj_t BgL_nodez00_2083, obj_t BgL_stackz00_2084)
	{
		{	/* Beta/walk.scm 193 */
			{
				obj_t BgL_bindingsz00_2148;
				obj_t BgL_newzd2stackzd2_2149;

				{	/* Beta/walk.scm 195 */
					obj_t BgL_arg1599z00_2164;

					BgL_arg1599z00_2164 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2083)))->BgL_bindingsz00);
					{
						BgL_letzd2varzd2_bglt BgL_auxz00_2441;

						BgL_bindingsz00_2148 = BgL_arg1599z00_2164;
						BgL_newzd2stackzd2_2149 = BgL_stackz00_2084;
					BgL_loopz00_2147:
						if (NULLP(BgL_bindingsz00_2148))
							{	/* Beta/walk.scm 197 */
								{
									BgL_nodez00_bglt BgL_auxz00_2444;

									{	/* Beta/walk.scm 199 */
										BgL_nodez00_bglt BgL_arg1604z00_2150;

										BgL_arg1604z00_2150 =
											(((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2083)))->
											BgL_bodyz00);
										BgL_auxz00_2444 =
											BGl_nodezd2betaz12zc0zzbeta_walkz00(BgL_arg1604z00_2150,
											BgL_newzd2stackzd2_2149);
									}
									((((BgL_letzd2varzd2_bglt) COBJECT(
													((BgL_letzd2varzd2_bglt) BgL_nodez00_2083)))->
											BgL_bodyz00) =
										((BgL_nodez00_bglt) BgL_auxz00_2444), BUNSPEC);
								}
								BgL_auxz00_2441 = ((BgL_letzd2varzd2_bglt) BgL_nodez00_2083);
							}
						else
							{	/* Beta/walk.scm 201 */
								obj_t BgL_bindingz00_2151;

								BgL_bindingz00_2151 = CAR(((obj_t) BgL_bindingsz00_2148));
								{	/* Beta/walk.scm 202 */
									BgL_nodez00_bglt BgL_valz00_2152;

									{	/* Beta/walk.scm 203 */
										obj_t BgL_arg1663z00_2153;

										BgL_arg1663z00_2153 = CDR(((obj_t) BgL_bindingz00_2151));
										BgL_valz00_2152 =
											BGl_nodezd2betaz12zc0zzbeta_walkz00(
											((BgL_nodez00_bglt) BgL_arg1663z00_2153),
											BgL_stackz00_2084);
									}
									{	/* Beta/walk.scm 203 */

										{	/* Beta/walk.scm 204 */
											bool_t BgL_test1941z00_2457;

											{	/* Beta/walk.scm 204 */
												bool_t BgL_test1942z00_2458;

												{	/* Beta/walk.scm 204 */
													obj_t BgL_arg1662z00_2154;

													BgL_arg1662z00_2154 =
														CDR(((obj_t) BgL_bindingz00_2151));
													BgL_test1942z00_2458 =
														BGl_isazf3zf3zz__objectz00(BgL_arg1662z00_2154,
														BGl_atomz00zzast_nodez00);
												}
												if (BgL_test1942z00_2458)
													{	/* Beta/walk.scm 204 */
														if (
															((((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					CAR(
																						((obj_t) BgL_bindingz00_2151))))))->
																	BgL_accessz00) == CNST_TABLE_REF(((long) 2))))
															{	/* Beta/walk.scm 206 */
																obj_t BgL_valz00_2155;

																BgL_valz00_2155 =
																	(((BgL_atomz00_bglt) COBJECT(
																			((BgL_atomz00_bglt)
																				CDR(
																					((obj_t) BgL_bindingz00_2151)))))->
																	BgL_valuez00);
																{	/* Beta/walk.scm 207 */
																	bool_t BgL__ortest_1128z00_2156;

																	BgL__ortest_1128z00_2156 =
																		BGl_numberzf3zf3zz__r4_numbers_6_5z00
																		(BgL_valz00_2155);
																	if (BgL__ortest_1128z00_2156)
																		{	/* Beta/walk.scm 207 */
																			BgL_test1941z00_2457 =
																				BgL__ortest_1128z00_2156;
																		}
																	else
																		{	/* Beta/walk.scm 208 */
																			bool_t BgL__ortest_1129z00_2157;

																			BgL__ortest_1129z00_2157 =
																				BOOLEANP(BgL_valz00_2155);
																			if (BgL__ortest_1129z00_2157)
																				{	/* Beta/walk.scm 208 */
																					BgL_test1941z00_2457 =
																						BgL__ortest_1129z00_2157;
																				}
																			else
																				{	/* Beta/walk.scm 209 */
																					bool_t BgL__ortest_1130z00_2158;

																					BgL__ortest_1130z00_2158 =
																						CHARP(BgL_valz00_2155);
																					if (BgL__ortest_1130z00_2158)
																						{	/* Beta/walk.scm 209 */
																							BgL_test1941z00_2457 =
																								BgL__ortest_1130z00_2158;
																						}
																					else
																						{	/* Beta/walk.scm 210 */
																							bool_t BgL__ortest_1131z00_2159;

																							BgL__ortest_1131z00_2159 =
																								SYMBOLP(BgL_valz00_2155);
																							if (BgL__ortest_1131z00_2159)
																								{	/* Beta/walk.scm 210 */
																									BgL_test1941z00_2457 =
																										BgL__ortest_1131z00_2159;
																								}
																							else
																								{	/* Beta/walk.scm 211 */
																									bool_t
																										BgL__ortest_1132z00_2160;
																									BgL__ortest_1132z00_2160 =
																										KEYWORDP(BgL_valz00_2155);
																									if (BgL__ortest_1132z00_2160)
																										{	/* Beta/walk.scm 211 */
																											BgL_test1941z00_2457 =
																												BgL__ortest_1132z00_2160;
																										}
																									else
																										{	/* Beta/walk.scm 211 */
																											BgL_test1941z00_2457 =
																												CNSTP(BgL_valz00_2155);
																										}
																								}
																						}
																				}
																		}
																}
															}
														else
															{	/* Beta/walk.scm 205 */
																BgL_test1941z00_2457 = ((bool_t) 0);
															}
													}
												else
													{	/* Beta/walk.scm 204 */
														BgL_test1941z00_2457 = ((bool_t) 0);
													}
											}
											if (BgL_test1941z00_2457)
												{	/* Beta/walk.scm 213 */
													obj_t BgL_arg1634z00_2161;
													obj_t BgL_arg1639z00_2162;

													BgL_arg1634z00_2161 =
														CDR(((obj_t) BgL_bindingsz00_2148));
													BgL_arg1639z00_2162 =
														MAKE_YOUNG_PAIR(BgL_bindingz00_2151,
														BgL_newzd2stackzd2_2149);
													{
														obj_t BgL_newzd2stackzd2_2489;
														obj_t BgL_bindingsz00_2488;

														BgL_bindingsz00_2488 = BgL_arg1634z00_2161;
														BgL_newzd2stackzd2_2489 = BgL_arg1639z00_2162;
														BgL_newzd2stackzd2_2149 = BgL_newzd2stackzd2_2489;
														BgL_bindingsz00_2148 = BgL_bindingsz00_2488;
														goto BgL_loopz00_2147;
													}
												}
											else
												{	/* Beta/walk.scm 214 */
													obj_t BgL_arg1640z00_2163;

													BgL_arg1640z00_2163 =
														CDR(((obj_t) BgL_bindingsz00_2148));
													{
														obj_t BgL_bindingsz00_2492;

														BgL_bindingsz00_2492 = BgL_arg1640z00_2163;
														BgL_bindingsz00_2148 = BgL_bindingsz00_2492;
														goto BgL_loopz00_2147;
													}
												}
										}
									}
								}
							}
						return ((BgL_nodez00_bglt) BgL_auxz00_2441);
					}
				}
			}
		}

	}



/* &node-beta!-let-fun1289 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2letzd2fun1289za2zzbeta_walkz00(obj_t
		BgL_envz00_2085, obj_t BgL_nodez00_2086, obj_t BgL_stackz00_2087)
	{
		{	/* Beta/walk.scm 181 */
			{
				BgL_nodez00_bglt BgL_auxz00_2494;

				{	/* Beta/walk.scm 183 */
					BgL_nodez00_bglt BgL_arg1589z00_2166;

					BgL_arg1589z00_2166 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2086)))->BgL_bodyz00);
					BgL_auxz00_2494 =
						BGl_nodezd2betaz12zc0zzbeta_walkz00(BgL_arg1589z00_2166,
						BgL_stackz00_2087);
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2086)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2494), BUNSPEC);
			}
			{	/* Beta/walk.scm 184 */
				obj_t BgL_g1253z00_2167;

				BgL_g1253z00_2167 =
					(((BgL_letzd2funzd2_bglt) COBJECT(
							((BgL_letzd2funzd2_bglt) BgL_nodez00_2086)))->BgL_localsz00);
				{
					obj_t BgL_l1251z00_2169;

					BgL_l1251z00_2169 = BgL_g1253z00_2167;
				BgL_zc3z04anonymousza31590ze3z87_2168:
					if (PAIRP(BgL_l1251z00_2169))
						{	/* Beta/walk.scm 184 */
							{	/* Beta/walk.scm 185 */
								obj_t BgL_localz00_2170;

								BgL_localz00_2170 = CAR(BgL_l1251z00_2169);
								{	/* Beta/walk.scm 185 */
									BgL_valuez00_bglt BgL_funz00_2171;

									BgL_funz00_2171 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_localz00_2170))))->
										BgL_valuez00);
									{	/* Beta/walk.scm 186 */
										BgL_nodez00_bglt BgL_arg1592z00_2172;

										{	/* Beta/walk.scm 186 */
											obj_t BgL_arg1593z00_2173;

											BgL_arg1593z00_2173 =
												(((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2171)))->
												BgL_bodyz00);
											BgL_arg1592z00_2172 =
												BGl_nodezd2betaz12zc0zzbeta_walkz00(((BgL_nodez00_bglt)
													BgL_arg1593z00_2173), BgL_stackz00_2087);
										}
										((((BgL_sfunz00_bglt) COBJECT(
														((BgL_sfunz00_bglt) BgL_funz00_2171)))->
												BgL_bodyz00) =
											((obj_t) ((obj_t) BgL_arg1592z00_2172)), BUNSPEC);
									}
								}
							}
							{
								obj_t BgL_l1251z00_2515;

								BgL_l1251z00_2515 = CDR(BgL_l1251z00_2169);
								BgL_l1251z00_2169 = BgL_l1251z00_2515;
								goto BgL_zc3z04anonymousza31590ze3z87_2168;
							}
						}
					else
						{	/* Beta/walk.scm 184 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt) BgL_nodez00_2086));
		}

	}



/* &node-beta!-box-set!1287 */
	BgL_nodez00_bglt
		BGl_z62nodezd2betaz12zd2boxzd2setz121287zb0zzbeta_walkz00(obj_t
		BgL_envz00_2088, obj_t BgL_nodez00_2089, obj_t BgL_stackz00_2090)
	{
		{	/* Beta/walk.scm 173 */
			{	/* Beta/walk.scm 174 */
				BgL_nodez00_bglt BgL_arg1578z00_2175;

				{	/* Beta/walk.scm 174 */
					BgL_varz00_bglt BgL_arg1582z00_2176;

					BgL_arg1582z00_2176 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2089)))->BgL_varz00);
					BgL_arg1578z00_2175 =
						BGl_nodezd2betaz12zc0zzbeta_walkz00(
						((BgL_nodez00_bglt) BgL_arg1582z00_2176), BgL_stackz00_2090);
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2089)))->BgL_varz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg1578z00_2175)), BUNSPEC);
			}
			((((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2089)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_boxzd2setz12zc0_bglt)
								COBJECT(((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2089)))->
							BgL_valuez00), BgL_stackz00_2090)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2089));
		}

	}



/* &node-beta!-box-ref1285 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2boxzd2ref1285za2zzbeta_walkz00(obj_t
		BgL_envz00_2091, obj_t BgL_nodez00_2092, obj_t BgL_stackz00_2093)
	{
		{	/* Beta/walk.scm 166 */
			{	/* Beta/walk.scm 167 */
				BgL_nodez00_bglt BgL_arg1573z00_2178;

				{	/* Beta/walk.scm 167 */
					BgL_varz00_bglt BgL_arg1575z00_2179;

					BgL_arg1575z00_2179 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2092)))->BgL_varz00);
					BgL_arg1573z00_2178 =
						BGl_nodezd2betaz12zc0zzbeta_walkz00(
						((BgL_nodez00_bglt) BgL_arg1575z00_2179), BgL_stackz00_2093);
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2092)))->BgL_varz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg1573z00_2178)), BUNSPEC);
			}
			return ((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2092));
		}

	}



/* &node-beta!-make-box1283 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2makezd2box1283za2zzbeta_walkz00(obj_t
		BgL_envz00_2094, obj_t BgL_nodez00_2095, obj_t BgL_stackz00_2096)
	{
		{	/* Beta/walk.scm 159 */
			((((BgL_makezd2boxzd2_bglt) COBJECT(
							((BgL_makezd2boxzd2_bglt) BgL_nodez00_2095)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_makezd2boxzd2_bglt)
								COBJECT(((BgL_makezd2boxzd2_bglt) BgL_nodez00_2095)))->
							BgL_valuez00), BgL_stackz00_2096)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2095));
		}

	}



/* &node-beta!-switch1281 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2switch1281z70zzbeta_walkz00(obj_t
		BgL_envz00_2097, obj_t BgL_nodez00_2098, obj_t BgL_stackz00_2099)
	{
		{	/* Beta/walk.scm 149 */
			((((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2098)))->BgL_testz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_switchz00_bglt)
								COBJECT(((BgL_switchz00_bglt) BgL_nodez00_2098)))->BgL_testz00),
						BgL_stackz00_2099)), BUNSPEC);
			{	/* Beta/walk.scm 151 */
				obj_t BgL_g1250z00_2182;

				BgL_g1250z00_2182 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2098)))->BgL_clausesz00);
				{
					obj_t BgL_l1248z00_2184;

					BgL_l1248z00_2184 = BgL_g1250z00_2182;
				BgL_zc3z04anonymousza31538ze3z87_2183:
					if (PAIRP(BgL_l1248z00_2184))
						{	/* Beta/walk.scm 153 */
							{	/* Beta/walk.scm 152 */
								obj_t BgL_clausez00_2185;

								BgL_clausez00_2185 = CAR(BgL_l1248z00_2184);
								{	/* Beta/walk.scm 152 */
									BgL_nodez00_bglt BgL_arg1552z00_2186;

									{	/* Beta/walk.scm 152 */
										obj_t BgL_arg1558z00_2187;

										BgL_arg1558z00_2187 = CDR(((obj_t) BgL_clausez00_2185));
										BgL_arg1552z00_2186 =
											BGl_nodezd2betaz12zc0zzbeta_walkz00(
											((BgL_nodez00_bglt) BgL_arg1558z00_2187),
											BgL_stackz00_2099);
									}
									{	/* Beta/walk.scm 152 */
										obj_t BgL_auxz00_2565;
										obj_t BgL_tmpz00_2563;

										BgL_auxz00_2565 = ((obj_t) BgL_arg1552z00_2186);
										BgL_tmpz00_2563 = ((obj_t) BgL_clausez00_2185);
										SET_CDR(BgL_tmpz00_2563, BgL_auxz00_2565);
									}
								}
							}
							{
								obj_t BgL_l1248z00_2568;

								BgL_l1248z00_2568 = CDR(BgL_l1248z00_2184);
								BgL_l1248z00_2184 = BgL_l1248z00_2568;
								goto BgL_zc3z04anonymousza31538ze3z87_2183;
							}
						}
					else
						{	/* Beta/walk.scm 153 */
							((bool_t) 1);
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_switchz00_bglt) BgL_nodez00_2098));
		}

	}



/* &node-beta!-fail1279 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2fail1279z70zzbeta_walkz00(obj_t
		BgL_envz00_2100, obj_t BgL_nodez00_2101, obj_t BgL_stackz00_2102)
	{
		{	/* Beta/walk.scm 140 */
			((((BgL_failz00_bglt) COBJECT(
							((BgL_failz00_bglt) BgL_nodez00_2101)))->BgL_procz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_failz00_bglt)
								COBJECT(((BgL_failz00_bglt) BgL_nodez00_2101)))->BgL_procz00),
						BgL_stackz00_2102)), BUNSPEC);
			((((BgL_failz00_bglt) COBJECT(((BgL_failz00_bglt) BgL_nodez00_2101)))->
					BgL_msgz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_failz00_bglt)
								COBJECT(((BgL_failz00_bglt) BgL_nodez00_2101)))->BgL_msgz00),
						BgL_stackz00_2102)), BUNSPEC);
			((((BgL_failz00_bglt) COBJECT(((BgL_failz00_bglt) BgL_nodez00_2101)))->
					BgL_objz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_failz00_bglt)
								COBJECT(((BgL_failz00_bglt) BgL_nodez00_2101)))->BgL_objz00),
						BgL_stackz00_2102)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_failz00_bglt) BgL_nodez00_2101));
		}

	}



/* &node-beta!-condition1277 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2condition1277z70zzbeta_walkz00(obj_t
		BgL_envz00_2103, obj_t BgL_nodez00_2104, obj_t BgL_stackz00_2105)
	{
		{	/* Beta/walk.scm 131 */
			((((BgL_conditionalz00_bglt) COBJECT(
							((BgL_conditionalz00_bglt) BgL_nodez00_2104)))->BgL_testz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_conditionalz00_bglt)
								COBJECT(((BgL_conditionalz00_bglt) BgL_nodez00_2104)))->
							BgL_testz00), BgL_stackz00_2105)), BUNSPEC);
			((((BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt)
								BgL_nodez00_2104)))->BgL_truez00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_conditionalz00_bglt)
								COBJECT(((BgL_conditionalz00_bglt) BgL_nodez00_2104)))->
							BgL_truez00), BgL_stackz00_2105)), BUNSPEC);
			((((BgL_conditionalz00_bglt) COBJECT(((BgL_conditionalz00_bglt)
								BgL_nodez00_2104)))->BgL_falsez00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_conditionalz00_bglt)
								COBJECT(((BgL_conditionalz00_bglt) BgL_nodez00_2104)))->
							BgL_falsez00), BgL_stackz00_2105)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_conditionalz00_bglt) BgL_nodez00_2104));
		}

	}



/* &node-beta!-setq1275 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2setq1275z70zzbeta_walkz00(obj_t
		BgL_envz00_2106, obj_t BgL_nodez00_2107, obj_t BgL_stackz00_2108)
	{
		{	/* Beta/walk.scm 124 */
			((((BgL_setqz00_bglt) COBJECT(
							((BgL_setqz00_bglt) BgL_nodez00_2107)))->BgL_valuez00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_setqz00_bglt)
								COBJECT(((BgL_setqz00_bglt) BgL_nodez00_2107)))->BgL_valuez00),
						BgL_stackz00_2108)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_setqz00_bglt) BgL_nodez00_2107));
		}

	}



/* &node-beta!-cast1273 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2cast1273z70zzbeta_walkz00(obj_t
		BgL_envz00_2109, obj_t BgL_nodez00_2110, obj_t BgL_stackz00_2111)
	{
		{	/* Beta/walk.scm 117 */
			((((BgL_castz00_bglt) COBJECT(
							((BgL_castz00_bglt) BgL_nodez00_2110)))->BgL_argz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_castz00_bglt)
								COBJECT(((BgL_castz00_bglt) BgL_nodez00_2110)))->BgL_argz00),
						BgL_stackz00_2111)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_castz00_bglt) BgL_nodez00_2110));
		}

	}



/* &node-beta!-extern1270 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2extern1270z70zzbeta_walkz00(obj_t
		BgL_envz00_2112, obj_t BgL_nodez00_2113, obj_t BgL_stackz00_2114)
	{
		{	/* Beta/walk.scm 110 */
			BGl_nodezd2betaza2z12z62zzbeta_walkz00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2113)))->BgL_exprza2za2),
				BgL_stackz00_2114);
			return ((BgL_nodez00_bglt) ((BgL_externz00_bglt) BgL_nodez00_2113));
		}

	}



/* &node-beta!-funcall1268 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2funcall1268z70zzbeta_walkz00(obj_t
		BgL_envz00_2115, obj_t BgL_nodez00_2116, obj_t BgL_stackz00_2117)
	{
		{	/* Beta/walk.scm 102 */
			((((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2116)))->BgL_funz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_funcallz00_bglt)
								COBJECT(((BgL_funcallz00_bglt) BgL_nodez00_2116)))->BgL_funz00),
						BgL_stackz00_2117)), BUNSPEC);
			BGl_nodezd2betaza2z12z62zzbeta_walkz00((((BgL_funcallz00_bglt)
						COBJECT(((BgL_funcallz00_bglt) BgL_nodez00_2116)))->BgL_argsz00),
				BgL_stackz00_2117);
			return ((BgL_nodez00_bglt) ((BgL_funcallz00_bglt) BgL_nodez00_2116));
		}

	}



/* &node-beta!-app-ly1266 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2appzd2ly1266za2zzbeta_walkz00(obj_t
		BgL_envz00_2118, obj_t BgL_nodez00_2119, obj_t BgL_stackz00_2120)
	{
		{	/* Beta/walk.scm 94 */
			((((BgL_appzd2lyzd2_bglt) COBJECT(
							((BgL_appzd2lyzd2_bglt) BgL_nodez00_2119)))->BgL_funz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_appzd2lyzd2_bglt)
								COBJECT(((BgL_appzd2lyzd2_bglt) BgL_nodez00_2119)))->
							BgL_funz00), BgL_stackz00_2120)), BUNSPEC);
			((((BgL_appzd2lyzd2_bglt) COBJECT(((BgL_appzd2lyzd2_bglt)
								BgL_nodez00_2119)))->BgL_argz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_appzd2lyzd2_bglt)
								COBJECT(((BgL_appzd2lyzd2_bglt) BgL_nodez00_2119)))->
							BgL_argz00), BgL_stackz00_2120)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2119));
		}

	}



/* &node-beta!-app1264 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2app1264z70zzbeta_walkz00(obj_t
		BgL_envz00_2121, obj_t BgL_nodez00_2122, obj_t BgL_stackz00_2123)
	{
		{	/* Beta/walk.scm 73 */
			{	/* Beta/walk.scm 74 */
				BgL_nodez00_bglt BgL_arg1352z00_2196;

				{	/* Beta/walk.scm 74 */
					BgL_varz00_bglt BgL_arg1357z00_2197;

					BgL_arg1357z00_2197 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2122)))->BgL_funz00);
					BgL_arg1352z00_2196 =
						BGl_nodezd2betaz12zc0zzbeta_walkz00(
						((BgL_nodez00_bglt) BgL_arg1357z00_2197), BgL_stackz00_2123);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2122)))->BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg1352z00_2196)), BUNSPEC);
			}
			{	/* Beta/walk.scm 75 */
				obj_t BgL_l01247z00_2198;

				BgL_l01247z00_2198 =
					(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2122)))->BgL_argsz00);
				{
					obj_t BgL_l1246z00_2200;

					BgL_l1246z00_2200 = BgL_l01247z00_2198;
				BgL_zc3z04anonymousza31358ze3z87_2199:
					if (NULLP(BgL_l1246z00_2200))
						{	/* Beta/walk.scm 88 */
							BgL_l01247z00_2198;
						}
					else
						{	/* Beta/walk.scm 88 */
							{	/* Beta/walk.scm 76 */
								obj_t BgL_arg1360z00_2201;

								{	/* Beta/walk.scm 76 */
									obj_t BgL_nz00_2202;

									BgL_nz00_2202 = CAR(((obj_t) BgL_l1246z00_2200));
									{	/* Beta/walk.scm 76 */
										bool_t BgL_test1952z00_2660;

										if (BGl_isazf3zf3zz__objectz00(BgL_nz00_2202,
												BGl_varz00zzast_nodez00))
											{	/* Beta/walk.scm 76 */
												BgL_variablez00_bglt BgL_arg1387z00_2203;

												BgL_arg1387z00_2203 =
													(((BgL_varz00_bglt) COBJECT(
															((BgL_varz00_bglt) BgL_nz00_2202)))->
													BgL_variablez00);
												{	/* Beta/walk.scm 76 */
													bool_t BgL_res1844z00_2204;

													BgL_res1844z00_2204 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_arg1387z00_2203),
														BGl_localz00zzast_varz00);
													BgL_test1952z00_2660 = BgL_res1844z00_2204;
												}
											}
										else
											{	/* Beta/walk.scm 76 */
												BgL_test1952z00_2660 = ((bool_t) 0);
											}
										if (BgL_test1952z00_2660)
											{	/* Beta/walk.scm 77 */
												obj_t BgL_redz00_2205;

												BgL_redz00_2205 =
													BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
													((obj_t)
														(((BgL_varz00_bglt) COBJECT(
																	((BgL_varz00_bglt) BgL_nz00_2202)))->
															BgL_variablez00)), BgL_stackz00_2123);
												if (PAIRP(BgL_redz00_2205))
													{	/* Beta/walk.scm 81 */
														bool_t BgL_test1955z00_2673;

														{	/* Beta/walk.scm 81 */
															obj_t BgL_arg1385z00_2206;

															BgL_arg1385z00_2206 = CDR(BgL_redz00_2205);
															BgL_test1955z00_2673 =
																BGl_isazf3zf3zz__objectz00(BgL_arg1385z00_2206,
																BGl_literalz00zzast_nodez00);
														}
														if (BgL_test1955z00_2673)
															{	/* Beta/walk.scm 82 */
																BgL_nodez00_bglt BgL_duplicated1114z00_2207;
																BgL_literalz00_bglt BgL_new1112z00_2208;

																BgL_duplicated1114z00_2207 =
																	((BgL_nodez00_bglt) CDR(BgL_redz00_2205));
																{	/* Beta/walk.scm 82 */
																	BgL_literalz00_bglt BgL_new1116z00_2209;

																	BgL_new1116z00_2209 =
																		((BgL_literalz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_literalz00_bgl))));
																	{	/* Beta/walk.scm 82 */
																		long BgL_arg1370z00_2210;

																		{	/* Beta/walk.scm 82 */
																			long BgL_res1847z00_2211;

																			BgL_res1847z00_2211 =
																				BGL_CLASS_INDEX
																				(BGl_literalz00zzast_nodez00);
																			BgL_arg1370z00_2210 = BgL_res1847z00_2211;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1116z00_2209),
																			BgL_arg1370z00_2210);
																	}
																	{	/* Beta/walk.scm 82 */
																		BgL_objectz00_bglt BgL_tmpz00_2682;

																		BgL_tmpz00_2682 =
																			((BgL_objectz00_bglt)
																			BgL_new1116z00_2209);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2682,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1116z00_2209);
																	BgL_new1112z00_2208 = BgL_new1116z00_2209;
																}
																((((BgL_nodez00_bglt) COBJECT(
																				((BgL_nodez00_bglt)
																					BgL_new1112z00_2208)))->BgL_locz00) =
																	((obj_t) (((BgL_nodez00_bglt)
																				COBJECT(BgL_duplicated1114z00_2207))->
																			BgL_locz00)), BUNSPEC);
																((((BgL_nodez00_bglt)
																			COBJECT(((BgL_nodez00_bglt)
																					BgL_new1112z00_2208)))->BgL_typez00) =
																	((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																				COBJECT(BgL_duplicated1114z00_2207))->
																			BgL_typez00)), BUNSPEC);
																((((BgL_atomz00_bglt)
																			COBJECT(((BgL_atomz00_bglt)
																					BgL_new1112z00_2208)))->
																		BgL_valuez00) =
																	((obj_t) (((BgL_atomz00_bglt)
																				COBJECT(((BgL_atomz00_bglt)
																						BgL_duplicated1114z00_2207)))->
																			BgL_valuez00)), BUNSPEC);
																BgL_arg1360z00_2201 =
																	((obj_t) BgL_new1112z00_2208);
															}
														else
															{	/* Beta/walk.scm 83 */
																bool_t BgL_test1956z00_2697;

																{	/* Beta/walk.scm 83 */
																	obj_t BgL_arg1384z00_2212;

																	BgL_arg1384z00_2212 = CDR(BgL_redz00_2205);
																	BgL_test1956z00_2697 =
																		BGl_isazf3zf3zz__objectz00
																		(BgL_arg1384z00_2212,
																		BGl_patchz00zzast_nodez00);
																}
																if (BgL_test1956z00_2697)
																	{	/* Beta/walk.scm 84 */
																		BgL_nodez00_bglt BgL_duplicated1119z00_2213;
																		BgL_patchz00_bglt BgL_new1117z00_2214;

																		BgL_duplicated1119z00_2213 =
																			((BgL_nodez00_bglt) CDR(BgL_redz00_2205));
																		{	/* Beta/walk.scm 84 */
																			BgL_patchz00_bglt BgL_new1125z00_2215;

																			BgL_new1125z00_2215 =
																				((BgL_patchz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_patchz00_bgl))));
																			{	/* Beta/walk.scm 84 */
																				long BgL_arg1381z00_2216;

																				{	/* Beta/walk.scm 84 */
																					long BgL_res1849z00_2217;

																					BgL_res1849z00_2217 =
																						BGL_CLASS_INDEX
																						(BGl_patchz00zzast_nodez00);
																					BgL_arg1381z00_2216 =
																						BgL_res1849z00_2217;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1125z00_2215),
																					BgL_arg1381z00_2216);
																			}
																			{	/* Beta/walk.scm 84 */
																				BgL_objectz00_bglt BgL_tmpz00_2706;

																				BgL_tmpz00_2706 =
																					((BgL_objectz00_bglt)
																					BgL_new1125z00_2215);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2706,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1125z00_2215);
																			BgL_new1117z00_2214 = BgL_new1125z00_2215;
																		}
																		((((BgL_nodez00_bglt) COBJECT(
																						((BgL_nodez00_bglt)
																							BgL_new1117z00_2214)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_nodez00_bglt)
																						COBJECT
																						(BgL_duplicated1119z00_2213))->
																					BgL_locz00)), BUNSPEC);
																		((((BgL_nodez00_bglt)
																					COBJECT(((BgL_nodez00_bglt)
																							BgL_new1117z00_2214)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) (((BgL_nodez00_bglt)
																						COBJECT
																						(BgL_duplicated1119z00_2213))->
																					BgL_typez00)), BUNSPEC);
																		((((BgL_atomz00_bglt)
																					COBJECT(((BgL_atomz00_bglt)
																							BgL_new1117z00_2214)))->
																				BgL_valuez00) =
																			((obj_t) (((BgL_atomz00_bglt)
																						COBJECT(((BgL_atomz00_bglt)
																								BgL_duplicated1119z00_2213)))->
																					BgL_valuez00)), BUNSPEC);
																		((((BgL_patchz00_bglt)
																					COBJECT(BgL_new1117z00_2214))->
																				BgL_refz00) =
																			((BgL_varz00_bglt) (((BgL_patchz00_bglt)
																						COBJECT(((BgL_patchz00_bglt)
																								BgL_duplicated1119z00_2213)))->
																					BgL_refz00)), BUNSPEC);
																		((((BgL_patchz00_bglt)
																					COBJECT(BgL_new1117z00_2214))->
																				BgL_indexz00) =
																			((long) (((BgL_patchz00_bglt)
																						COBJECT(((BgL_patchz00_bglt)
																								BgL_duplicated1119z00_2213)))->
																					BgL_indexz00)), BUNSPEC);
																		((((BgL_patchz00_bglt)
																					COBJECT(BgL_new1117z00_2214))->
																				BgL_patchidz00) =
																			((obj_t) (((BgL_patchz00_bglt)
																						COBJECT(((BgL_patchz00_bglt)
																								BgL_duplicated1119z00_2213)))->
																					BgL_patchidz00)), BUNSPEC);
																		BgL_arg1360z00_2201 =
																			((obj_t) BgL_new1117z00_2214);
																	}
																else
																	{	/* Beta/walk.scm 83 */
																		BgL_arg1360z00_2201 =
																			BGl_errorz00zz__errorz00
																			(BGl_string1870z00zzbeta_walkz00,
																			BGl_string1888z00zzbeta_walkz00,
																			bgl_typeof(CDR(BgL_redz00_2205)));
																	}
															}
													}
												else
													{	/* Beta/walk.scm 79 */
														BgL_arg1360z00_2201 = BgL_nz00_2202;
													}
											}
										else
											{	/* Beta/walk.scm 76 */
												BgL_arg1360z00_2201 =
													((obj_t)
													BGl_nodezd2betaz12zc0zzbeta_walkz00(
														((BgL_nodez00_bglt) BgL_nz00_2202),
														BgL_stackz00_2123));
											}
									}
								}
								{	/* Beta/walk.scm 88 */
									obj_t BgL_tmpz00_2736;

									BgL_tmpz00_2736 = ((obj_t) BgL_l1246z00_2200);
									SET_CAR(BgL_tmpz00_2736, BgL_arg1360z00_2201);
								}
							}
							{	/* Beta/walk.scm 88 */
								obj_t BgL_arg1388z00_2218;

								BgL_arg1388z00_2218 = CDR(((obj_t) BgL_l1246z00_2200));
								{
									obj_t BgL_l1246z00_2741;

									BgL_l1246z00_2741 = BgL_arg1388z00_2218;
									BgL_l1246z00_2200 = BgL_l1246z00_2741;
									goto BgL_zc3z04anonymousza31358ze3z87_2199;
								}
							}
						}
				}
			}
			return ((BgL_nodez00_bglt) ((BgL_appz00_bglt) BgL_nodez00_2122));
		}

	}



/* &node-beta!-sync1262 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2sync1262z70zzbeta_walkz00(obj_t
		BgL_envz00_2124, obj_t BgL_nodez00_2125, obj_t BgL_stackz00_2126)
	{
		{	/* Beta/walk.scm 64 */
			((((BgL_syncz00_bglt) COBJECT(
							((BgL_syncz00_bglt) BgL_nodez00_2125)))->BgL_mutexz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2125)))->BgL_mutexz00),
						BgL_stackz00_2126)), BUNSPEC);
			((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2125)))->
					BgL_prelockz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2125)))->
							BgL_prelockz00), BgL_stackz00_2126)), BUNSPEC);
			((((BgL_syncz00_bglt) COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2125)))->
					BgL_bodyz00) =
				((BgL_nodez00_bglt)
					BGl_nodezd2betaz12zc0zzbeta_walkz00((((BgL_syncz00_bglt)
								COBJECT(((BgL_syncz00_bglt) BgL_nodez00_2125)))->BgL_bodyz00),
						BgL_stackz00_2126)), BUNSPEC);
			return ((BgL_nodez00_bglt) ((BgL_syncz00_bglt) BgL_nodez00_2125));
		}

	}



/* &node-beta!-sequence1260 */
	BgL_nodez00_bglt BGl_z62nodezd2betaz12zd2sequence1260z70zzbeta_walkz00(obj_t
		BgL_envz00_2127, obj_t BgL_nodez00_2128, obj_t BgL_stackz00_2129)
	{
		{	/* Beta/walk.scm 57 */
			BGl_nodezd2betaza2z12z62zzbeta_walkz00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2128)))->BgL_nodesz00),
				BgL_stackz00_2129);
			return ((BgL_nodez00_bglt) ((BgL_sequencez00_bglt) BgL_nodez00_2128));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbeta_walkz00()
	{
		{	/* Beta/walk.scm 18 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 535161241),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1889z00zzbeta_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
