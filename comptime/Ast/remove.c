/*===========================================================================*/
/*   (Ast/remove.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/remove.scm) */
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

	typedef struct BgL_retblockz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                  *BgL_retblockz00_bglt;

	typedef struct BgL_returnz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_retblockz00_bgl *BgL_blockz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                *BgL_returnz00_bglt;

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


	static obj_t BGl_z62nodezd2removez12zd2appzd2ly1240za2zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_syncz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_occurzd2nodezd2inz12z12zzast_occurz00(BgL_nodez00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2removez12zd2extern1244z70zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2removez12zd2return1273z70zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzast_removez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static long BGl_za2removedzd2countza2zd2zzast_removez00;
	static obj_t BGl_z62nodezd2removez12zd2funcall1242z70zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2removez12zd2kwote1232z70zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2removez12zd2conditi1250z70zzast_removez00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2removez12zd2retbloc1270z70zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzast_removez00();
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_z62nodezd2removez12zd2boxzd2ref1258za2zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_z62nodezd2removez12zd2sync1236z70zzast_removez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62nodezd2removez12zd2fail1252z70zzast_removez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_removezd2varzd2fromz12z12zzast_removez00(obj_t,
		BgL_variablez00_bglt);
	static obj_t BGl_z62nodezd2removez12zd2makezd2bo1256za2zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_nodezd2removez12zc0zzast_removez00(BgL_nodez00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzast_removez00();
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	static obj_t BGl_z62nodezd2removez12zd2app1238z70zzast_removez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62nodezd2removez12zd2letzd2fun1262za2zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern obj_t BGl_returnz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzast_removez00 = BUNSPEC;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2removez12za2zzast_removez00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_removez00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_removez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62nodezd2removez12zd2switch1254z70zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_nodezd2removeza2z12z62zzast_removez00(obj_t);
	static obj_t BGl_z62nodezd2removez121225za2zzast_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t
		BGl_z62nodezd2removez12zd2setzd2exzd21266z70zzast_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62nodezd2removez12zd2letzd2var1264za2zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2removez12zd2boxzd2set1260za2zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2removez12zd2cast1246z70zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_z62nodezd2removez12zd2setq1248z70zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2removez12zd2sequenc1234z70zzast_removez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	static obj_t BGl_z62removezd2varzb0zzast_removez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_globalzd2removezd2sfunz12z12zzast_removez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62nodezd2removez12zd2var1230z70zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_occurzd2varzd2zzast_occurz00(obj_t);
	static obj_t BGl_z62removezd2varzd2fromz12z70zzast_removez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_removez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_removez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzast_removez00();
	extern obj_t BGl_retblockz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_z62nodezd2removez12zd2jumpzd2ex1268za2zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_switchz00zzast_nodez00;
	static obj_t BGl_z62nodezd2removez12zd2atom1228z70zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_removezd2varzd2fromz12zd2envzc0zzast_removez00,
		BgL_bgl_za762removeza7d2varza71905za7,
		BGl_z62removezd2varzd2fromz12z70zzast_removez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1865z00zzast_removez00,
		BgL_bgl_string1865za700za7za7a1906za7, "/", 1);
	      DEFINE_STRING(BGl_string1866z00zzast_removez00,
		BgL_bgl_string1866za700za7za7a1907za7, "remove-var-from!", 16);
	      DEFINE_STRING(BGl_string1867z00zzast_removez00,
		BgL_bgl_string1867za700za7za7a1908za7, "already removable variable", 26);
	      DEFINE_STRING(BGl_string1868z00zzast_removez00,
		BgL_bgl_string1868za700za7za7a1909za7, "         removing ", 18);
	      DEFINE_STRING(BGl_string1869z00zzast_removez00,
		BgL_bgl_string1869za700za7za7a1910za7, ")", 1);
	      DEFINE_STRING(BGl_string1870z00zzast_removez00,
		BgL_bgl_string1870za700za7za7a1911za7, " (import: ", 10);
	      DEFINE_STRING(BGl_string1871z00zzast_removez00,
		BgL_bgl_string1871za700za7za7a1912za7, " removed ", 9);
	      DEFINE_STRING(BGl_string1872z00zzast_removez00,
		BgL_bgl_string1872za700za7za7a1913za7, "        ", 8);
	      DEFINE_STRING(BGl_string1874z00zzast_removez00,
		BgL_bgl_string1874za700za7za7a1914za7, "node-remove!1225", 16);
	      DEFINE_STRING(BGl_string1875z00zzast_removez00,
		BgL_bgl_string1875za700za7za7a1915za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string1877z00zzast_removez00,
		BgL_bgl_string1877za700za7za7a1916za7, "node-remove!", 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_removezd2varzd2envz00zzast_removez00,
		BgL_bgl_za762removeza7d2varza71917za7,
		BGl_z62removezd2varzb0zzast_removez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1900z00zzast_removez00,
		BgL_bgl_string1900za700za7za7a1918za7, "ast_remove", 10);
	      DEFINE_STRING(BGl_string1901z00zzast_removez00,
		BgL_bgl_string1901za700za7za7a1919za7,
		"read node-remove!1225 done no-remove export ok now ", 51);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1873z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1920z00,
		BGl_z62nodezd2removez121225za2zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1876z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1921z00,
		BGl_z62nodezd2removez12zd2atom1228z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1878z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1922z00,
		BGl_z62nodezd2removez12zd2var1230z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1879z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1923z00,
		BGl_z62nodezd2removez12zd2kwote1232z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1880z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1924z00,
		BGl_z62nodezd2removez12zd2sequenc1234z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1881z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1925z00,
		BGl_z62nodezd2removez12zd2sync1236z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1882z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1926z00,
		BGl_z62nodezd2removez12zd2app1238z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1883z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1927z00,
		BGl_z62nodezd2removez12zd2appzd2ly1240za2zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1884z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1928z00,
		BGl_z62nodezd2removez12zd2funcall1242z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1885z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1929z00,
		BGl_z62nodezd2removez12zd2extern1244z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1886z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1930z00,
		BGl_z62nodezd2removez12zd2cast1246z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1887z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1931z00,
		BGl_z62nodezd2removez12zd2setq1248z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1888z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1932z00,
		BGl_z62nodezd2removez12zd2conditi1250z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1889z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1933z00,
		BGl_z62nodezd2removez12zd2fail1252z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1890z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1934z00,
		BGl_z62nodezd2removez12zd2switch1254z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1891z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1935z00,
		BGl_z62nodezd2removez12zd2makezd2bo1256za2zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1892z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1936z00,
		BGl_z62nodezd2removez12zd2boxzd2ref1258za2zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1893z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1937z00,
		BGl_z62nodezd2removez12zd2boxzd2set1260za2zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1894z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1938z00,
		BGl_z62nodezd2removez12zd2letzd2fun1262za2zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1895z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1939z00,
		BGl_z62nodezd2removez12zd2letzd2var1264za2zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1896z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1940z00,
		BGl_z62nodezd2removez12zd2setzd2exzd21266z70zzast_removez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1897z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1941z00,
		BGl_z62nodezd2removez12zd2jumpzd2ex1268za2zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1898z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1942z00,
		BGl_z62nodezd2removez12zd2retbloc1270z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1899z00zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1943z00,
		BGl_z62nodezd2removez12zd2return1273z70zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2removez12zd2envz12zzast_removez00,
		BgL_bgl_za762nodeza7d2remove1944z00,
		BGl_z62nodezd2removez12za2zzast_removez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzast_removez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long
		BgL_checksumz00_2207, char *BgL_fromz00_2208)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_removez00))
				{
					BGl_requirezd2initializa7ationz75zzast_removez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_removez00();
					BGl_libraryzd2moduleszd2initz00zzast_removez00();
					BGl_cnstzd2initzd2zzast_removez00();
					BGl_importedzd2moduleszd2initz00zzast_removez00();
					BGl_genericzd2initzd2zzast_removez00();
					BGl_methodzd2initzd2zzast_removez00();
					return BGl_toplevelzd2initzd2zzast_removez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_removez00()
	{
		{	/* Ast/remove.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_remove");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_remove");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_remove");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_remove");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_remove");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_remove");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"ast_remove");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "ast_remove");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_remove");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_remove");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_removez00()
	{
		{	/* Ast/remove.scm 16 */
			{	/* Ast/remove.scm 16 */
				obj_t BgL_cportz00_2110;

				{	/* Ast/remove.scm 16 */
					obj_t BgL_stringz00_2118;

					BgL_stringz00_2118 = BGl_string1901z00zzast_removez00;
					{	/* Ast/remove.scm 16 */
						obj_t BgL_startz00_2119;

						BgL_startz00_2119 = BINT(((long) 0));
						{	/* Ast/remove.scm 16 */
							obj_t BgL_endz00_2120;

							BgL_endz00_2120 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2118)));
							{	/* Ast/remove.scm 16 */

								BgL_cportz00_2110 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2118, BgL_startz00_2119, BgL_endz00_2120);
				}}}}
				{
					long BgL_iz00_2111;

					BgL_iz00_2111 = ((long) 6);
				BgL_loopz00_2112:
					if ((BgL_iz00_2111 == ((long) -1)))
						{	/* Ast/remove.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Ast/remove.scm 16 */
							{	/* Ast/remove.scm 16 */
								obj_t BgL_arg1903z00_2114;

								{	/* Ast/remove.scm 16 */

									{	/* Ast/remove.scm 16 */
										obj_t BgL_locationz00_2116;

										BgL_locationz00_2116 = BBOOL(((bool_t) 0));
										{	/* Ast/remove.scm 16 */

											BgL_arg1903z00_2114 =
												BGl_readz00zz__readerz00(BgL_cportz00_2110,
												BgL_locationz00_2116);
										}
									}
								}
								{	/* Ast/remove.scm 16 */
									int BgL_tmpz00_2238;

									BgL_tmpz00_2238 = (int) (BgL_iz00_2111);
									CNST_TABLE_SET(BgL_tmpz00_2238, BgL_arg1903z00_2114);
							}}
							{	/* Ast/remove.scm 16 */
								int BgL_auxz00_2117;

								BgL_auxz00_2117 = (int) ((BgL_iz00_2111 - ((long) 1)));
								{
									long BgL_iz00_2243;

									BgL_iz00_2243 = (long) (BgL_auxz00_2117);
									BgL_iz00_2111 = BgL_iz00_2243;
									goto BgL_loopz00_2112;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_removez00()
	{
		{	/* Ast/remove.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_removez00()
	{
		{	/* Ast/remove.scm 16 */
			BGl_za2removedzd2countza2zd2zzast_removez00 = ((long) 0);
			return BUNSPEC;
		}

	}



/* remove-var-from! */
	BGL_EXPORTED_DEF obj_t BGl_removezd2varzd2fromz12z12zzast_removez00(obj_t
		BgL_passz00_3, BgL_variablez00_bglt BgL_varz00_4)
	{
		{	/* Ast/remove.scm 32 */
			{	/* Ast/remove.scm 33 */
				obj_t BgL_oldz00_1354;

				BgL_oldz00_1354 =
					(((BgL_variablez00_bglt) COBJECT(BgL_varz00_4))->BgL_removablez00);
				if ((BgL_oldz00_1354 == CNST_TABLE_REF(((long) 0))))
					{	/* Ast/remove.scm 35 */
						return
							((((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_varz00_4))))->
								BgL_removablez00) = ((obj_t) BgL_passz00_3), BUNSPEC);
					}
				else
					{	/* Ast/remove.scm 35 */
						if ((BgL_oldz00_1354 == BgL_passz00_3))
							{	/* Ast/remove.scm 38 */
								return CNST_TABLE_REF(((long) 1));
							}
						else
							{	/* Ast/remove.scm 38 */
								if ((BgL_passz00_3 == CNST_TABLE_REF(((long) 0))))
									{	/* Ast/remove.scm 40 */
										return CNST_TABLE_REF(((long) 1));
									}
								else
									{	/* Ast/remove.scm 45 */
										obj_t BgL_arg1280z00_1358;

										{	/* Ast/remove.scm 45 */
											obj_t BgL_arg1281z00_1359;
											obj_t BgL_arg1282z00_1360;

											{	/* Ast/remove.scm 45 */
												obj_t BgL_res1832z00_1825;

												{	/* Ast/remove.scm 45 */
													obj_t BgL_arg1466z00_1824;

													BgL_arg1466z00_1824 =
														SYMBOL_TO_STRING(((obj_t) BgL_oldz00_1354));
													BgL_res1832z00_1825 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_1824);
												}
												BgL_arg1281z00_1359 = BgL_res1832z00_1825;
											}
											{	/* Ast/remove.scm 47 */
												obj_t BgL_res1833z00_1828;

												{	/* Ast/remove.scm 47 */
													obj_t BgL_arg1466z00_1827;

													BgL_arg1466z00_1827 = SYMBOL_TO_STRING(BgL_passz00_3);
													BgL_res1833z00_1828 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_1827);
												}
												BgL_arg1282z00_1360 = BgL_res1833z00_1828;
											}
											BgL_arg1280z00_1358 =
												string_append_3(BgL_arg1281z00_1359,
												BGl_string1865z00zzast_removez00, BgL_arg1282z00_1360);
										}
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_string1866z00zzast_removez00,
											BGl_string1867z00zzast_removez00, BgL_arg1280z00_1358);
									}
							}
					}
			}
		}

	}



/* &remove-var-from! */
	obj_t BGl_z62removezd2varzd2fromz12z70zzast_removez00(obj_t BgL_envz00_2030,
		obj_t BgL_passz00_2031, obj_t BgL_varz00_2032)
	{
		{	/* Ast/remove.scm 32 */
			return
				BGl_removezd2varzd2fromz12z12zzast_removez00(BgL_passz00_2031,
				((BgL_variablez00_bglt) BgL_varz00_2032));
		}

	}



/* remove-var */
	BGL_EXPORTED_DEF obj_t BGl_removezd2varzd2zzast_removez00(obj_t BgL_passz00_5,
		obj_t BgL_globalsz00_6)
	{
		{	/* Ast/remove.scm 57 */
			BGl_occurzd2varzd2zzast_occurz00(BgL_globalsz00_6);
			{
				obj_t BgL_globalsz00_1363;
				obj_t BgL_resz00_1364;
				bool_t BgL_fixpz00_1365;

				BgL_globalsz00_1363 = BgL_globalsz00_6;
				BgL_resz00_1364 = BNIL;
				BgL_fixpz00_1365 = ((bool_t) 1);
			BgL_zc3z04anonymousza31283ze3z87_1366:
				if (NULLP(BgL_globalsz00_1363))
					{	/* Ast/remove.scm 66 */
						obj_t BgL_nglobalsz00_1368;

						BgL_nglobalsz00_1368 = bgl_reverse_bang(BgL_resz00_1364);
						BGl_occurzd2varzd2zzast_occurz00(BgL_nglobalsz00_1368);
						if (BgL_fixpz00_1365)
							{	/* Ast/remove.scm 69 */
								return BgL_nglobalsz00_1368;
							}
						else
							{
								bool_t BgL_fixpz00_2277;
								obj_t BgL_resz00_2276;
								obj_t BgL_globalsz00_2275;

								BgL_globalsz00_2275 = BgL_nglobalsz00_1368;
								BgL_resz00_2276 = BNIL;
								BgL_fixpz00_2277 = ((bool_t) 1);
								BgL_fixpz00_1365 = BgL_fixpz00_2277;
								BgL_resz00_1364 = BgL_resz00_2276;
								BgL_globalsz00_1363 = BgL_globalsz00_2275;
								goto BgL_zc3z04anonymousza31283ze3z87_1366;
							}
					}
				else
					{	/* Ast/remove.scm 72 */
						obj_t BgL_globalz00_1369;

						BgL_globalz00_1369 = CAR(((obj_t) BgL_globalsz00_1363));
						if (
							((((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_globalz00_1369)))->
									BgL_importz00) == CNST_TABLE_REF(((long) 2))))
							{	/* Ast/remove.scm 75 */
								BGl_globalzd2removezd2sfunz12z12zzast_removez00
									(BgL_globalz00_1369);
								{	/* Ast/remove.scm 77 */
									obj_t BgL_arg1287z00_1372;
									obj_t BgL_arg1288z00_1373;

									BgL_arg1287z00_1372 = CDR(((obj_t) BgL_globalsz00_1363));
									BgL_arg1288z00_1373 =
										MAKE_YOUNG_PAIR(BgL_globalz00_1369, BgL_resz00_1364);
									{
										obj_t BgL_resz00_2290;
										obj_t BgL_globalsz00_2289;

										BgL_globalsz00_2289 = BgL_arg1287z00_1372;
										BgL_resz00_2290 = BgL_arg1288z00_1373;
										BgL_resz00_1364 = BgL_resz00_2290;
										BgL_globalsz00_1363 = BgL_globalsz00_2289;
										goto BgL_zc3z04anonymousza31283ze3z87_1366;
									}
								}
							}
						else
							{	/* Ast/remove.scm 80 */
								bool_t BgL_test1953z00_2291;

								if (
									((((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_globalz00_1369))))->
											BgL_removablez00) == BgL_passz00_5))
									{	/* Ast/remove.scm 80 */
										BgL_test1953z00_2291 = ((bool_t) 1);
									}
								else
									{	/* Ast/remove.scm 80 */
										if (PAIRP(BgL_passz00_5))
											{	/* Ast/remove.scm 81 */
												BgL_test1953z00_2291 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_globalz00_bglt)
																			BgL_globalz00_1369))))->BgL_removablez00),
														BgL_passz00_5));
											}
										else
											{	/* Ast/remove.scm 81 */
												BgL_test1953z00_2291 = ((bool_t) 0);
											}
									}
								if (BgL_test1953z00_2291)
									{	/* Ast/remove.scm 80 */
										if (
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_globalz00_1369))))->
													BgL_occurrencez00) <= ((long) 0)))
											{	/* Ast/remove.scm 83 */
												{	/* Ast/remove.scm 87 */
													obj_t BgL_arg1297z00_1382;

													BgL_arg1297z00_1382 =
														BGl_shapez00zztools_shapez00(BgL_globalz00_1369);
													{	/* Ast/remove.scm 86 */
														obj_t BgL_list1298z00_1383;

														{	/* Ast/remove.scm 86 */
															obj_t BgL_arg1299z00_1384;

															{	/* Ast/remove.scm 86 */
																obj_t BgL_arg1300z00_1385;

																BgL_arg1300z00_1385 =
																	MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
																	BNIL);
																BgL_arg1299z00_1384 =
																	MAKE_YOUNG_PAIR(BgL_arg1297z00_1382,
																	BgL_arg1300z00_1385);
															}
															BgL_list1298z00_1383 =
																MAKE_YOUNG_PAIR
																(BGl_string1868z00zzast_removez00,
																BgL_arg1299z00_1384);
														}
														BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
															BgL_list1298z00_1383);
												}}
												{	/* Ast/remove.scm 88 */
													obj_t BgL_arg1301z00_1386;

													BgL_arg1301z00_1386 =
														CDR(((obj_t) BgL_globalsz00_1363));
													{
														bool_t BgL_fixpz00_2319;
														obj_t BgL_globalsz00_2318;

														BgL_globalsz00_2318 = BgL_arg1301z00_1386;
														BgL_fixpz00_2319 = ((bool_t) 0);
														BgL_fixpz00_1365 = BgL_fixpz00_2319;
														BgL_globalsz00_1363 = BgL_globalsz00_2318;
														goto BgL_zc3z04anonymousza31283ze3z87_1366;
													}
												}
											}
										else
											{	/* Ast/remove.scm 83 */
												{	/* Ast/remove.scm 90 */
													obj_t BgL_vz00_1841;

													BgL_vz00_1841 = CNST_TABLE_REF(((long) 0));
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_globalz00_bglt)
																			BgL_globalz00_1369))))->
															BgL_removablez00) =
														((obj_t) BgL_vz00_1841), BUNSPEC);
												}
												BGl_globalzd2removezd2sfunz12z12zzast_removez00
													(BgL_globalz00_1369);
												{	/* Ast/remove.scm 92 */
													obj_t BgL_arg1303z00_1387;
													obj_t BgL_arg1304z00_1388;

													BgL_arg1303z00_1387 =
														CDR(((obj_t) BgL_globalsz00_1363));
													BgL_arg1304z00_1388 =
														MAKE_YOUNG_PAIR(BgL_globalz00_1369,
														BgL_resz00_1364);
													{
														obj_t BgL_resz00_2329;
														obj_t BgL_globalsz00_2328;

														BgL_globalsz00_2328 = BgL_arg1303z00_1387;
														BgL_resz00_2329 = BgL_arg1304z00_1388;
														BgL_resz00_1364 = BgL_resz00_2329;
														BgL_globalsz00_1363 = BgL_globalsz00_2328;
														goto BgL_zc3z04anonymousza31283ze3z87_1366;
													}
												}
											}
									}
								else
									{	/* Ast/remove.scm 93 */
										bool_t BgL_test1957z00_2330;

										if (
											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_globalz00_1369))))->
													BgL_occurrencez00) <= ((long) 0)))
											{	/* Ast/remove.scm 93 */
												if (
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_globalz00_bglt)
																			BgL_globalz00_1369))))->
															BgL_removablez00) == CNST_TABLE_REF(((long) 0))))
													{	/* Ast/remove.scm 94 */
														if ((BgL_passz00_5 == CNST_TABLE_REF(((long) 3))))
															{	/* Ast/remove.scm 95 */
																BgL_test1957z00_2330 = ((bool_t) 0);
															}
														else
															{	/* Ast/remove.scm 95 */
																BgL_test1957z00_2330 = ((bool_t) 1);
															}
													}
												else
													{	/* Ast/remove.scm 94 */
														BgL_test1957z00_2330 = ((bool_t) 0);
													}
											}
										else
											{	/* Ast/remove.scm 93 */
												BgL_test1957z00_2330 = ((bool_t) 0);
											}
										if (BgL_test1957z00_2330)
											{	/* Ast/remove.scm 93 */
												{	/* Ast/remove.scm 97 */
													obj_t BgL_arg1316z00_1398;
													obj_t BgL_arg1317z00_1399;

													BgL_arg1316z00_1398 =
														BGl_shapez00zztools_shapez00(BgL_globalz00_1369);
													BgL_arg1317z00_1399 =
														(((BgL_globalz00_bglt) COBJECT(
																((BgL_globalz00_bglt) BgL_globalz00_1369)))->
														BgL_importz00);
													{	/* Ast/remove.scm 97 */
														obj_t BgL_list1318z00_1400;

														{	/* Ast/remove.scm 97 */
															obj_t BgL_arg1319z00_1401;

															{	/* Ast/remove.scm 97 */
																obj_t BgL_arg1322z00_1402;

																{	/* Ast/remove.scm 97 */
																	obj_t BgL_arg1324z00_1403;

																	{	/* Ast/remove.scm 97 */
																		obj_t BgL_arg1325z00_1404;

																		{	/* Ast/remove.scm 97 */
																			obj_t BgL_arg1326z00_1405;

																			{	/* Ast/remove.scm 97 */
																				obj_t BgL_arg1327z00_1406;

																				BgL_arg1327z00_1406 =
																					MAKE_YOUNG_PAIR(BCHAR(((unsigned char)
																							10)), BNIL);
																				BgL_arg1326z00_1405 =
																					MAKE_YOUNG_PAIR
																					(BGl_string1869z00zzast_removez00,
																					BgL_arg1327z00_1406);
																			}
																			BgL_arg1325z00_1404 =
																				MAKE_YOUNG_PAIR(BgL_arg1317z00_1399,
																				BgL_arg1326z00_1405);
																		}
																		BgL_arg1324z00_1403 =
																			MAKE_YOUNG_PAIR
																			(BGl_string1870z00zzast_removez00,
																			BgL_arg1325z00_1404);
																	}
																	BgL_arg1322z00_1402 =
																		MAKE_YOUNG_PAIR
																		(BGl_string1871z00zzast_removez00,
																		BgL_arg1324z00_1403);
																}
																BgL_arg1319z00_1401 =
																	MAKE_YOUNG_PAIR(BgL_arg1316z00_1398,
																	BgL_arg1322z00_1402);
															}
															BgL_list1318z00_1400 =
																MAKE_YOUNG_PAIR
																(BGl_string1872z00zzast_removez00,
																BgL_arg1319z00_1401);
														}
														BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
															BgL_list1318z00_1400);
												}}
												{	/* Ast/remove.scm 100 */
													obj_t BgL_arg1328z00_1407;

													BgL_arg1328z00_1407 =
														CDR(((obj_t) BgL_globalsz00_1363));
													{
														bool_t BgL_fixpz00_2361;
														obj_t BgL_globalsz00_2360;

														BgL_globalsz00_2360 = BgL_arg1328z00_1407;
														BgL_fixpz00_2361 = ((bool_t) 0);
														BgL_fixpz00_1365 = BgL_fixpz00_2361;
														BgL_globalsz00_1363 = BgL_globalsz00_2360;
														goto BgL_zc3z04anonymousza31283ze3z87_1366;
													}
												}
											}
										else
											{	/* Ast/remove.scm 93 */
												BGl_globalzd2removezd2sfunz12z12zzast_removez00
													(BgL_globalz00_1369);
												{	/* Ast/remove.scm 104 */
													obj_t BgL_arg1329z00_1408;
													obj_t BgL_arg1330z00_1409;

													BgL_arg1329z00_1408 =
														CDR(((obj_t) BgL_globalsz00_1363));
													BgL_arg1330z00_1409 =
														MAKE_YOUNG_PAIR(BgL_globalz00_1369,
														BgL_resz00_1364);
													{
														obj_t BgL_resz00_2367;
														obj_t BgL_globalsz00_2366;

														BgL_globalsz00_2366 = BgL_arg1329z00_1408;
														BgL_resz00_2367 = BgL_arg1330z00_1409;
														BgL_resz00_1364 = BgL_resz00_2367;
														BgL_globalsz00_1363 = BgL_globalsz00_2366;
														goto BgL_zc3z04anonymousza31283ze3z87_1366;
													}
												}
											}
									}
							}
					}
			}
		}

	}



/* &remove-var */
	obj_t BGl_z62removezd2varzb0zzast_removez00(obj_t BgL_envz00_2033,
		obj_t BgL_passz00_2034, obj_t BgL_globalsz00_2035)
	{
		{	/* Ast/remove.scm 57 */
			return
				BGl_removezd2varzd2zzast_removez00(BgL_passz00_2034,
				BgL_globalsz00_2035);
		}

	}



/* global-remove-sfun! */
	obj_t BGl_globalzd2removezd2sfunz12z12zzast_removez00(obj_t BgL_globalz00_7)
	{
		{	/* Ast/remove.scm 109 */
		BGl_globalzd2removezd2sfunz12z12zzast_removez00:
			{	/* Ast/remove.scm 110 */
				BgL_valuez00_bglt BgL_sfunz00_1421;

				BgL_sfunz00_1421 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_globalz00_7))))->BgL_valuez00);
				BGl_za2removedzd2countza2zd2zzast_removez00 = ((long) 0);
				{	/* Ast/remove.scm 112 */
					obj_t BgL_arg1339z00_1422;

					{	/* Ast/remove.scm 112 */
						obj_t BgL_arg1340z00_1423;

						BgL_arg1340z00_1423 =
							(((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_sfunz00_1421)))->BgL_bodyz00);
						BgL_arg1339z00_1422 =
							BGl_nodezd2removez12zc0zzast_removez00(
							((BgL_nodez00_bglt) BgL_arg1340z00_1423));
					}
					((((BgL_sfunz00_bglt) COBJECT(
									((BgL_sfunz00_bglt) BgL_sfunz00_1421)))->BgL_bodyz00) =
						((obj_t) BgL_arg1339z00_1422), BUNSPEC);
				}
				{	/* Ast/remove.scm 113 */
					bool_t BgL_test1961z00_2378;

					if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
						{	/* Ast/remove.scm 113 */
							BgL_test1961z00_2378 =
								(BGl_za2removedzd2countza2zd2zzast_removez00 > ((long) 0));
						}
					else
						{	/* Ast/remove.scm 113 */
							BgL_test1961z00_2378 = ((bool_t) 0);
						}
					if (BgL_test1961z00_2378)
						{	/* Ast/remove.scm 113 */
							{	/* Ast/remove.scm 116 */
								obj_t BgL_arg1344z00_1426;

								BgL_arg1344z00_1426 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_globalz00_7))))->
													BgL_valuez00))))->BgL_bodyz00);
								BGl_occurzd2nodezd2inz12z12zzast_occurz00(((BgL_nodez00_bglt)
										BgL_arg1344z00_1426),
									((BgL_globalz00_bglt) BgL_globalz00_7));
							}
							{

								goto BGl_globalzd2removezd2sfunz12z12zzast_removez00;
							}
						}
					else
						{	/* Ast/remove.scm 113 */
							return BgL_globalz00_7;
						}
				}
			}
		}

	}



/* node-remove*! */
	obj_t BGl_nodezd2removeza2z12z62zzast_removez00(obj_t BgL_nodeza2za2_32)
	{
		{	/* Ast/remove.scm 350 */
		BGl_nodezd2removeza2z12z62zzast_removez00:
			if (NULLP(BgL_nodeza2za2_32))
				{	/* Ast/remove.scm 351 */
					return CNST_TABLE_REF(((long) 4));
				}
			else
				{	/* Ast/remove.scm 351 */
					{	/* Ast/remove.scm 354 */
						obj_t BgL_arg1351z00_1430;

						{	/* Ast/remove.scm 354 */
							obj_t BgL_arg1352z00_1431;

							BgL_arg1352z00_1431 = CAR(((obj_t) BgL_nodeza2za2_32));
							BgL_arg1351z00_1430 =
								BGl_nodezd2removez12zc0zzast_removez00(
								((BgL_nodez00_bglt) BgL_arg1352z00_1431));
						}
						{	/* Ast/remove.scm 354 */
							obj_t BgL_tmpz00_2398;

							BgL_tmpz00_2398 = ((obj_t) BgL_nodeza2za2_32);
							SET_CAR(BgL_tmpz00_2398, BgL_arg1351z00_1430);
						}
					}
					{	/* Ast/remove.scm 355 */
						obj_t BgL_arg1357z00_1432;

						BgL_arg1357z00_1432 = CDR(((obj_t) BgL_nodeza2za2_32));
						{
							obj_t BgL_nodeza2za2_2403;

							BgL_nodeza2za2_2403 = BgL_arg1357z00_1432;
							BgL_nodeza2za2_32 = BgL_nodeza2za2_2403;
							goto BGl_nodezd2removeza2z12z62zzast_removez00;
						}
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_removez00()
	{
		{	/* Ast/remove.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_removez00()
	{
		{	/* Ast/remove.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_proc1873z00zzast_removez00, BGl_nodez00zzast_nodez00,
				BGl_string1874z00zzast_removez00);
		}

	}



/* &node-remove!1225 */
	obj_t BGl_z62nodezd2removez121225za2zzast_removez00(obj_t BgL_envz00_2037,
		obj_t BgL_nodez00_2038)
	{
		{	/* Ast/remove.scm 123 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 5)),
				BGl_string1875z00zzast_removez00,
				((obj_t) ((BgL_nodez00_bglt) BgL_nodez00_2038)));
		}

	}



/* node-remove! */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2removez12zc0zzast_removez00(BgL_nodez00_bglt
		BgL_nodez00_8)
	{
		{	/* Ast/remove.scm 123 */
			{	/* Ast/remove.scm 123 */
				obj_t BgL_method1226z00_1437;

				{	/* Ast/remove.scm 123 */
					obj_t BgL_res1851z00_1899;

					{	/* Ast/remove.scm 123 */
						long BgL_objzd2classzd2numz00_1864;

						{	/* Ast/remove.scm 123 */
							long BgL_res1841z00_1867;

							BgL_res1841z00_1867 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_8));
							BgL_objzd2classzd2numz00_1864 = BgL_res1841z00_1867;
						}
						{	/* Ast/remove.scm 123 */
							obj_t BgL_arg1813z00_1865;

							BgL_arg1813z00_1865 =
								PROCEDURE_REF(BGl_nodezd2removez12zd2envz12zzast_removez00,
								(int) (((long) 1)));
							{	/* Ast/remove.scm 123 */
								int BgL_offsetz00_1869;

								BgL_offsetz00_1869 = (int) (BgL_objzd2classzd2numz00_1864);
								{	/* Ast/remove.scm 123 */
									long BgL_offsetz00_1870;

									BgL_offsetz00_1870 =
										((long) (BgL_offsetz00_1869) - OBJECT_TYPE);
									{	/* Ast/remove.scm 123 */
										long BgL_modz00_1871;

										BgL_modz00_1871 =
											(BgL_offsetz00_1870 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Ast/remove.scm 123 */
											long BgL_restz00_1873;

											BgL_restz00_1873 =
												(BgL_offsetz00_1870 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Ast/remove.scm 123 */

												{	/* Ast/remove.scm 123 */
													obj_t BgL_bucketz00_1875;

													BgL_bucketz00_1875 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1865), BgL_modz00_1871);
													BgL_res1851z00_1899 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1875), BgL_restz00_1873);
					}}}}}}}}
					BgL_method1226z00_1437 = BgL_res1851z00_1899;
				}
				return
					PROCEDURE_ENTRY(BgL_method1226z00_1437) (BgL_method1226z00_1437,
					((obj_t) BgL_nodez00_8), BEOA);
			}
		}

	}



/* &node-remove! */
	obj_t BGl_z62nodezd2removez12za2zzast_removez00(obj_t BgL_envz00_2039,
		obj_t BgL_nodez00_2040)
	{
		{	/* Ast/remove.scm 123 */
			return
				BGl_nodezd2removez12zc0zzast_removez00(
				((BgL_nodez00_bglt) BgL_nodez00_2040));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_removez00()
	{
		{	/* Ast/remove.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_atomz00zzast_nodez00,
				BGl_proc1876z00zzast_removez00, BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_varz00zzast_nodez00,
				BGl_proc1878z00zzast_removez00, BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_kwotez00zzast_nodez00, BGl_proc1879z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_sequencez00zzast_nodez00, BGl_proc1880z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_syncz00zzast_nodez00,
				BGl_proc1881z00zzast_removez00, BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_appz00zzast_nodez00,
				BGl_proc1882z00zzast_removez00, BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc1883z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_funcallz00zzast_nodez00, BGl_proc1884z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_externz00zzast_nodez00, BGl_proc1885z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_castz00zzast_nodez00,
				BGl_proc1886z00zzast_removez00, BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_setqz00zzast_nodez00,
				BGl_proc1887z00zzast_removez00, BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc1888z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_failz00zzast_nodez00,
				BGl_proc1889z00zzast_removez00, BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_switchz00zzast_nodez00, BGl_proc1890z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc1891z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1892z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1893z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc1894z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1895z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc1896z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc1897z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_retblockz00zzast_nodez00, BGl_proc1898z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_returnz00zzast_nodez00, BGl_proc1899z00zzast_removez00,
				BGl_string1877z00zzast_removez00);
		}

	}



/* &node-remove!-return1273 */
	obj_t BGl_z62nodezd2removez12zd2return1273z70zzast_removez00(obj_t
		BgL_envz00_2064, obj_t BgL_nodez00_2065)
	{
		{	/* Ast/remove.scm 343 */
			{	/* Ast/remove.scm 344 */
				obj_t BgL_arg1708z00_2125;

				BgL_arg1708z00_2125 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_2065)))->BgL_valuez00));
				((((BgL_returnz00_bglt) COBJECT(
								((BgL_returnz00_bglt) BgL_nodez00_2065)))->BgL_valuez00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1708z00_2125)),
					BUNSPEC);
			}
			return ((obj_t) ((BgL_returnz00_bglt) BgL_nodez00_2065));
		}

	}



/* &node-remove!-retbloc1270 */
	obj_t BGl_z62nodezd2removez12zd2retbloc1270z70zzast_removez00(obj_t
		BgL_envz00_2066, obj_t BgL_nodez00_2067)
	{
		{	/* Ast/remove.scm 336 */
			{	/* Ast/remove.scm 337 */
				obj_t BgL_arg1704z00_2127;

				BgL_arg1704z00_2127 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_2067)))->BgL_bodyz00));
				((((BgL_retblockz00_bglt) COBJECT(
								((BgL_retblockz00_bglt) BgL_nodez00_2067)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1704z00_2127)),
					BUNSPEC);
			}
			return ((obj_t) ((BgL_retblockz00_bglt) BgL_nodez00_2067));
		}

	}



/* &node-remove!-jump-ex1268 */
	obj_t BGl_z62nodezd2removez12zd2jumpzd2ex1268za2zzast_removez00(obj_t
		BgL_envz00_2068, obj_t BgL_nodez00_2069)
	{
		{	/* Ast/remove.scm 328 */
			{	/* Ast/remove.scm 329 */
				obj_t BgL_arg1692z00_2129;

				BgL_arg1692z00_2129 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2069)))->
						BgL_exitz00));
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(((BgL_jumpzd2exzd2itz00_bglt)
									BgL_nodez00_2069)))->BgL_exitz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1692z00_2129)),
					BUNSPEC);
			}
			{	/* Ast/remove.scm 330 */
				obj_t BgL_arg1696z00_2130;

				BgL_arg1696z00_2130 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_jumpzd2exzd2itz00_bglt) COBJECT(
								((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2069)))->
						BgL_valuez00));
				((((BgL_jumpzd2exzd2itz00_bglt) COBJECT(((BgL_jumpzd2exzd2itz00_bglt)
									BgL_nodez00_2069)))->BgL_valuez00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1696z00_2130)),
					BUNSPEC);
			}
			return ((obj_t) ((BgL_jumpzd2exzd2itz00_bglt) BgL_nodez00_2069));
		}

	}



/* &node-remove!-set-ex-1266 */
	obj_t BGl_z62nodezd2removez12zd2setzd2exzd21266z70zzast_removez00(obj_t
		BgL_envz00_2070, obj_t BgL_nodez00_2071)
	{
		{	/* Ast/remove.scm 319 */
			{	/* Ast/remove.scm 320 */
				obj_t BgL_arg1664z00_2132;

				BgL_arg1664z00_2132 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2071)))->BgL_bodyz00));
				((((BgL_setzd2exzd2itz00_bglt) COBJECT(
								((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2071)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1664z00_2132)),
					BUNSPEC);
			}
			if (
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt)
										(((BgL_varz00_bglt) COBJECT(
													(((BgL_setzd2exzd2itz00_bglt) COBJECT(
																((BgL_setzd2exzd2itz00_bglt)
																	BgL_nodez00_2071)))->BgL_varz00)))->
											BgL_variablez00)))))->BgL_occurrencez00) <= ((long) 0)))
				{	/* Ast/remove.scm 321 */
					return
						((obj_t)
						(((BgL_setzd2exzd2itz00_bglt) COBJECT(
									((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2071)))->
							BgL_bodyz00));
				}
			else
				{	/* Ast/remove.scm 321 */
					return ((obj_t) ((BgL_setzd2exzd2itz00_bglt) BgL_nodez00_2071));
				}
		}

	}



/* &node-remove!-let-var1264 */
	obj_t BGl_z62nodezd2removez12zd2letzd2var1264za2zzast_removez00(obj_t
		BgL_envz00_2072, obj_t BgL_nodez00_2073)
	{
		{	/* Ast/remove.scm 280 */
			{
				BgL_nodez00_bglt BgL_auxz00_2513;

				{	/* Ast/remove.scm 282 */
					BgL_nodez00_bglt BgL_arg1599z00_2134;

					BgL_arg1599z00_2134 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2073)))->BgL_bodyz00);
					BgL_auxz00_2513 =
						((BgL_nodez00_bglt)
						BGl_nodezd2removez12zc0zzast_removez00(BgL_arg1599z00_2134));
				}
				((((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2073)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2513), BUNSPEC);
			}
			{
				obj_t BgL_oldzd2bindingszd2_2136;
				obj_t BgL_newzd2bindingszd2_2137;

				{	/* Ast/remove.scm 283 */
					obj_t BgL_arg1604z00_2147;

					BgL_arg1604z00_2147 =
						(((BgL_letzd2varzd2_bglt) COBJECT(
								((BgL_letzd2varzd2_bglt) BgL_nodez00_2073)))->BgL_bindingsz00);
					{
						BgL_nodez00_bglt BgL_auxz00_2522;

						BgL_oldzd2bindingszd2_2136 = BgL_arg1604z00_2147;
						BgL_newzd2bindingszd2_2137 = BNIL;
					BgL_loopz00_2135:
						if (NULLP(BgL_oldzd2bindingszd2_2136))
							{	/* Ast/remove.scm 285 */
								if (NULLP(BgL_newzd2bindingszd2_2137))
									{	/* Ast/remove.scm 286 */
										if (
											(((BgL_letzd2varzd2_bglt) COBJECT(
														((BgL_letzd2varzd2_bglt) BgL_nodez00_2073)))->
												BgL_removablezf3zf3))
											{	/* Ast/remove.scm 287 */
												BgL_auxz00_2522 =
													(((BgL_letzd2varzd2_bglt) COBJECT(
															((BgL_letzd2varzd2_bglt) BgL_nodez00_2073)))->
													BgL_bodyz00);
											}
										else
											{	/* Ast/remove.scm 287 */
												((((BgL_letzd2varzd2_bglt) COBJECT(
																((BgL_letzd2varzd2_bglt) BgL_nodez00_2073)))->
														BgL_bindingsz00) = ((obj_t) BNIL), BUNSPEC);
												BgL_auxz00_2522 =
													((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt)
														BgL_nodez00_2073));
											}
									}
								else
									{	/* Ast/remove.scm 286 */
										((((BgL_letzd2varzd2_bglt) COBJECT(
														((BgL_letzd2varzd2_bglt) BgL_nodez00_2073)))->
												BgL_bindingsz00) =
											((obj_t) bgl_reverse_bang(BgL_newzd2bindingszd2_2137)),
											BUNSPEC);
										BgL_auxz00_2522 =
											((BgL_nodez00_bglt) ((BgL_letzd2varzd2_bglt)
												BgL_nodez00_2073));
									}
							}
						else
							{	/* Ast/remove.scm 295 */
								obj_t BgL_bindingz00_2138;

								BgL_bindingz00_2138 = CAR(((obj_t) BgL_oldzd2bindingszd2_2136));
								{	/* Ast/remove.scm 295 */
									obj_t BgL_varz00_2139;

									BgL_varz00_2139 = CAR(((obj_t) BgL_bindingz00_2138));
									{	/* Ast/remove.scm 296 */
										obj_t BgL_valz00_2140;

										{	/* Ast/remove.scm 297 */
											obj_t BgL_arg1663z00_2141;

											BgL_arg1663z00_2141 = CDR(((obj_t) BgL_bindingz00_2138));
											BgL_valz00_2140 =
												BGl_nodezd2removez12zc0zzast_removez00(
												((BgL_nodez00_bglt) BgL_arg1663z00_2141));
										}
										{	/* Ast/remove.scm 297 */

											{	/* Ast/remove.scm 298 */
												bool_t BgL_test1968z00_2549;

												if (
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_varz00_2139))))->
															BgL_occurrencez00) <= ((long) 0)))
													{	/* Ast/remove.scm 298 */
														if (BGl_sidezd2effectzf3z21zzeffect_effectz00(
																((BgL_nodez00_bglt) BgL_valz00_2140)))
															{	/* Ast/remove.scm 299 */
																BgL_test1968z00_2549 = ((bool_t) 0);
															}
														else
															{	/* Ast/remove.scm 299 */
																if (
																	((((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_localz00_bglt)
																							BgL_varz00_2139))))->
																			BgL_accessz00) ==
																		CNST_TABLE_REF(((long) 6))))
																	{	/* Ast/remove.scm 301 */
																		bool_t BgL__ortest_1107z00_2142;

																		if (
																			(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							((BgL_localz00_bglt)
																								BgL_varz00_2139))))->
																				BgL_userzf3zf3))
																			{	/* Ast/remove.scm 301 */
																				BgL__ortest_1107z00_2142 = ((bool_t) 0);
																			}
																		else
																			{	/* Ast/remove.scm 301 */
																				BgL__ortest_1107z00_2142 = ((bool_t) 1);
																			}
																		if (BgL__ortest_1107z00_2142)
																			{	/* Ast/remove.scm 301 */
																				BgL_test1968z00_2549 =
																					BgL__ortest_1107z00_2142;
																			}
																		else
																			{	/* Ast/remove.scm 301 */
																				BgL_test1968z00_2549 =
																					(
																					(long)
																					CINT
																					(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
																					== ((long) 0));
																	}}
																else
																	{	/* Ast/remove.scm 300 */
																		BgL_test1968z00_2549 = ((bool_t) 0);
																	}
															}
													}
												else
													{	/* Ast/remove.scm 298 */
														BgL_test1968z00_2549 = ((bool_t) 0);
													}
												if (BgL_test1968z00_2549)
													{	/* Ast/remove.scm 298 */
														if (BGl_isazf3zf3zz__objectz00(BgL_valz00_2140,
																BGl_varz00zzast_nodez00))
															{	/* Ast/remove.scm 305 */
																BgL_variablez00_bglt BgL_vz00_2143;

																BgL_vz00_2143 =
																	(((BgL_varz00_bglt) COBJECT(
																			((BgL_varz00_bglt) BgL_valz00_2140)))->
																	BgL_variablez00);
																((((BgL_variablez00_bglt)
																			COBJECT(BgL_vz00_2143))->
																		BgL_occurrencez00) =
																	((long) ((((BgL_variablez00_bglt)
																					COBJECT(BgL_vz00_2143))->
																				BgL_occurrencez00) - ((long) 1))),
																	BUNSPEC);
															}
														else
															{	/* Ast/remove.scm 304 */
																BFALSE;
															}
														BGl_za2removedzd2countza2zd2zzast_removez00 =
															(BGl_za2removedzd2countza2zd2zzast_removez00 +
															((long) 1));
														{	/* Ast/remove.scm 310 */
															obj_t BgL_arg1640z00_2144;

															BgL_arg1640z00_2144 =
																CDR(((obj_t) BgL_oldzd2bindingszd2_2136));
															{
																obj_t BgL_oldzd2bindingszd2_2581;

																BgL_oldzd2bindingszd2_2581 =
																	BgL_arg1640z00_2144;
																BgL_oldzd2bindingszd2_2136 =
																	BgL_oldzd2bindingszd2_2581;
																goto BgL_loopz00_2135;
															}
														}
													}
												else
													{	/* Ast/remove.scm 298 */
														{	/* Ast/remove.scm 312 */
															obj_t BgL_tmpz00_2582;

															BgL_tmpz00_2582 = ((obj_t) BgL_bindingz00_2138);
															SET_CDR(BgL_tmpz00_2582, BgL_valz00_2140);
														}
														{	/* Ast/remove.scm 313 */
															obj_t BgL_arg1641z00_2145;
															obj_t BgL_arg1644z00_2146;

															BgL_arg1641z00_2145 =
																CDR(((obj_t) BgL_oldzd2bindingszd2_2136));
															BgL_arg1644z00_2146 =
																MAKE_YOUNG_PAIR(BgL_bindingz00_2138,
																BgL_newzd2bindingszd2_2137);
															{
																obj_t BgL_newzd2bindingszd2_2589;
																obj_t BgL_oldzd2bindingszd2_2588;

																BgL_oldzd2bindingszd2_2588 =
																	BgL_arg1641z00_2145;
																BgL_newzd2bindingszd2_2589 =
																	BgL_arg1644z00_2146;
																BgL_newzd2bindingszd2_2137 =
																	BgL_newzd2bindingszd2_2589;
																BgL_oldzd2bindingszd2_2136 =
																	BgL_oldzd2bindingszd2_2588;
																goto BgL_loopz00_2135;
															}
														}
													}
											}
										}
									}
								}
							}
						return ((obj_t) BgL_auxz00_2522);
					}
				}
			}
		}

	}



/* &node-remove!-let-fun1262 */
	obj_t BGl_z62nodezd2removez12zd2letzd2fun1262za2zzast_removez00(obj_t
		BgL_envz00_2074, obj_t BgL_nodez00_2075)
	{
		{	/* Ast/remove.scm 257 */
			{
				BgL_nodez00_bglt BgL_auxz00_2591;

				{	/* Ast/remove.scm 259 */
					BgL_nodez00_bglt BgL_arg1573z00_2149;

					BgL_arg1573z00_2149 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2075)))->BgL_bodyz00);
					BgL_auxz00_2591 =
						((BgL_nodez00_bglt)
						BGl_nodezd2removez12zc0zzast_removez00(BgL_arg1573z00_2149));
				}
				((((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2075)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) BgL_auxz00_2591), BUNSPEC);
			}
			{
				obj_t BgL_oldzd2localszd2_2151;
				obj_t BgL_newzd2localszd2_2152;

				{	/* Ast/remove.scm 260 */
					obj_t BgL_arg1575z00_2160;

					BgL_arg1575z00_2160 =
						(((BgL_letzd2funzd2_bglt) COBJECT(
								((BgL_letzd2funzd2_bglt) BgL_nodez00_2075)))->BgL_localsz00);
					{
						BgL_nodez00_bglt BgL_auxz00_2600;

						BgL_oldzd2localszd2_2151 = BgL_arg1575z00_2160;
						BgL_newzd2localszd2_2152 = BNIL;
					BgL_loopz00_2150:
						if (NULLP(BgL_oldzd2localszd2_2151))
							{	/* Ast/remove.scm 262 */
								if (NULLP(BgL_newzd2localszd2_2152))
									{	/* Ast/remove.scm 263 */
										BgL_auxz00_2600 =
											(((BgL_letzd2funzd2_bglt) COBJECT(
													((BgL_letzd2funzd2_bglt) BgL_nodez00_2075)))->
											BgL_bodyz00);
									}
								else
									{	/* Ast/remove.scm 263 */
										((((BgL_letzd2funzd2_bglt) COBJECT(
														((BgL_letzd2funzd2_bglt) BgL_nodez00_2075)))->
												BgL_localsz00) =
											((obj_t) bgl_reverse_bang(BgL_newzd2localszd2_2152)),
											BUNSPEC);
										BgL_auxz00_2600 =
											((BgL_nodez00_bglt) ((BgL_letzd2funzd2_bglt)
												BgL_nodez00_2075));
									}
							}
						else
							{	/* Ast/remove.scm 268 */
								obj_t BgL_localz00_2153;

								BgL_localz00_2153 = CAR(((obj_t) BgL_oldzd2localszd2_2151));
								if (
									((((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_localz00_2153))))->
											BgL_occurrencez00) <= ((long) 0)))
									{	/* Ast/remove.scm 269 */
										BGl_za2removedzd2countza2zd2zzast_removez00 =
											(BGl_za2removedzd2countza2zd2zzast_removez00 +
											((long) 1));
										{	/* Ast/remove.scm 272 */
											obj_t BgL_arg1584z00_2154;

											BgL_arg1584z00_2154 =
												CDR(((obj_t) BgL_oldzd2localszd2_2151));
											{
												obj_t BgL_oldzd2localszd2_2622;

												BgL_oldzd2localszd2_2622 = BgL_arg1584z00_2154;
												BgL_oldzd2localszd2_2151 = BgL_oldzd2localszd2_2622;
												goto BgL_loopz00_2150;
											}
										}
									}
								else
									{	/* Ast/remove.scm 273 */
										BgL_valuez00_bglt BgL_sfunz00_2155;

										BgL_sfunz00_2155 =
											(((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_localz00_bglt) BgL_localz00_2153))))->
											BgL_valuez00);
										{	/* Ast/remove.scm 274 */
											obj_t BgL_arg1588z00_2156;

											{	/* Ast/remove.scm 274 */
												obj_t BgL_arg1589z00_2157;

												BgL_arg1589z00_2157 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_sfunz00_2155)))->
													BgL_bodyz00);
												BgL_arg1588z00_2156 =
													BGl_nodezd2removez12zc0zzast_removez00((
														(BgL_nodez00_bglt) BgL_arg1589z00_2157));
											}
											((((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt) BgL_sfunz00_2155)))->
													BgL_bodyz00) =
												((obj_t) BgL_arg1588z00_2156), BUNSPEC);
										}
										{	/* Ast/remove.scm 275 */
											obj_t BgL_arg1592z00_2158;
											obj_t BgL_arg1593z00_2159;

											BgL_arg1592z00_2158 =
												CDR(((obj_t) BgL_oldzd2localszd2_2151));
											BgL_arg1593z00_2159 =
												MAKE_YOUNG_PAIR(BgL_localz00_2153,
												BgL_newzd2localszd2_2152);
											{
												obj_t BgL_newzd2localszd2_2636;
												obj_t BgL_oldzd2localszd2_2635;

												BgL_oldzd2localszd2_2635 = BgL_arg1592z00_2158;
												BgL_newzd2localszd2_2636 = BgL_arg1593z00_2159;
												BgL_newzd2localszd2_2152 = BgL_newzd2localszd2_2636;
												BgL_oldzd2localszd2_2151 = BgL_oldzd2localszd2_2635;
												goto BgL_loopz00_2150;
											}
										}
									}
							}
						return ((obj_t) BgL_auxz00_2600);
					}
				}
			}
		}

	}



/* &node-remove!-box-set1260 */
	obj_t BGl_z62nodezd2removez12zd2boxzd2set1260za2zzast_removez00(obj_t
		BgL_envz00_2076, obj_t BgL_nodez00_2077)
	{
		{	/* Ast/remove.scm 249 */
			{	/* Ast/remove.scm 250 */
				obj_t BgL_arg1558z00_2162;

				{	/* Ast/remove.scm 250 */
					BgL_varz00_bglt BgL_arg1561z00_2163;

					BgL_arg1561z00_2163 =
						(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2077)))->BgL_varz00);
					BgL_arg1558z00_2162 =
						BGl_nodezd2removez12zc0zzast_removez00(
						((BgL_nodez00_bglt) BgL_arg1561z00_2163));
				}
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2077)))->BgL_varz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg1558z00_2162)), BUNSPEC);
			}
			{	/* Ast/remove.scm 251 */
				obj_t BgL_arg1564z00_2164;

				BgL_arg1564z00_2164 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2077)))->BgL_valuez00));
				((((BgL_boxzd2setz12zc0_bglt) COBJECT(
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2077)))->BgL_valuez00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1564z00_2164)),
					BUNSPEC);
			}
			return ((obj_t) ((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2077));
		}

	}



/* &node-remove!-box-ref1258 */
	obj_t BGl_z62nodezd2removez12zd2boxzd2ref1258za2zzast_removez00(obj_t
		BgL_envz00_2078, obj_t BgL_nodez00_2079)
	{
		{	/* Ast/remove.scm 242 */
			{	/* Ast/remove.scm 243 */
				obj_t BgL_arg1540z00_2166;

				{	/* Ast/remove.scm 243 */
					BgL_varz00_bglt BgL_arg1552z00_2167;

					BgL_arg1552z00_2167 =
						(((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2079)))->BgL_varz00);
					BgL_arg1540z00_2166 =
						BGl_nodezd2removez12zc0zzast_removez00(
						((BgL_nodez00_bglt) BgL_arg1552z00_2167));
				}
				((((BgL_boxzd2refzd2_bglt) COBJECT(
								((BgL_boxzd2refzd2_bglt) BgL_nodez00_2079)))->BgL_varz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg1540z00_2166)), BUNSPEC);
			}
			return ((obj_t) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2079));
		}

	}



/* &node-remove!-make-bo1256 */
	obj_t BGl_z62nodezd2removez12zd2makezd2bo1256za2zzast_removez00(obj_t
		BgL_envz00_2080, obj_t BgL_nodez00_2081)
	{
		{	/* Ast/remove.scm 235 */
			{	/* Ast/remove.scm 236 */
				obj_t BgL_arg1536z00_2169;

				BgL_arg1536z00_2169 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2081)))->BgL_valuez00));
				((((BgL_makezd2boxzd2_bglt) COBJECT(
								((BgL_makezd2boxzd2_bglt) BgL_nodez00_2081)))->BgL_valuez00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1536z00_2169)),
					BUNSPEC);
			}
			return ((obj_t) ((BgL_makezd2boxzd2_bglt) BgL_nodez00_2081));
		}

	}



/* &node-remove!-switch1254 */
	obj_t BGl_z62nodezd2removez12zd2switch1254z70zzast_removez00(obj_t
		BgL_envz00_2082, obj_t BgL_nodez00_2083)
	{
		{	/* Ast/remove.scm 225 */
			{	/* Ast/remove.scm 226 */
				obj_t BgL_arg1495z00_2171;

				BgL_arg1495z00_2171 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2083)))->BgL_testz00));
				((((BgL_switchz00_bglt) COBJECT(
								((BgL_switchz00_bglt) BgL_nodez00_2083)))->BgL_testz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1495z00_2171)),
					BUNSPEC);
			}
			{	/* Ast/remove.scm 227 */
				obj_t BgL_g1224z00_2172;

				BgL_g1224z00_2172 =
					(((BgL_switchz00_bglt) COBJECT(
							((BgL_switchz00_bglt) BgL_nodez00_2083)))->BgL_clausesz00);
				{
					obj_t BgL_l1222z00_2174;

					BgL_l1222z00_2174 = BgL_g1224z00_2172;
				BgL_zc3z04anonymousza31498ze3z87_2173:
					if (PAIRP(BgL_l1222z00_2174))
						{	/* Ast/remove.scm 229 */
							{	/* Ast/remove.scm 228 */
								obj_t BgL_clausez00_2175;

								BgL_clausez00_2175 = CAR(BgL_l1222z00_2174);
								{	/* Ast/remove.scm 228 */
									obj_t BgL_arg1518z00_2176;

									{	/* Ast/remove.scm 228 */
										obj_t BgL_arg1521z00_2177;

										BgL_arg1521z00_2177 = CDR(((obj_t) BgL_clausez00_2175));
										BgL_arg1518z00_2176 =
											BGl_nodezd2removez12zc0zzast_removez00(
											((BgL_nodez00_bglt) BgL_arg1521z00_2177));
									}
									{	/* Ast/remove.scm 228 */
										obj_t BgL_tmpz00_2685;

										BgL_tmpz00_2685 = ((obj_t) BgL_clausez00_2175);
										SET_CDR(BgL_tmpz00_2685, BgL_arg1518z00_2176);
									}
								}
							}
							{
								obj_t BgL_l1222z00_2688;

								BgL_l1222z00_2688 = CDR(BgL_l1222z00_2174);
								BgL_l1222z00_2174 = BgL_l1222z00_2688;
								goto BgL_zc3z04anonymousza31498ze3z87_2173;
							}
						}
					else
						{	/* Ast/remove.scm 229 */
							((bool_t) 1);
						}
				}
			}
			return ((obj_t) ((BgL_switchz00_bglt) BgL_nodez00_2083));
		}

	}



/* &node-remove!-fail1252 */
	obj_t BGl_z62nodezd2removez12zd2fail1252z70zzast_removez00(obj_t
		BgL_envz00_2084, obj_t BgL_nodez00_2085)
	{
		{	/* Ast/remove.scm 216 */
			{	/* Ast/remove.scm 217 */
				obj_t BgL_arg1465z00_2179;

				BgL_arg1465z00_2179 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2085)))->BgL_procz00));
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2085)))->BgL_procz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1465z00_2179)),
					BUNSPEC);
			}
			{	/* Ast/remove.scm 218 */
				obj_t BgL_arg1476z00_2180;

				BgL_arg1476z00_2180 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2085)))->BgL_msgz00));
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2085)))->BgL_msgz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1476z00_2180)),
					BUNSPEC);
			}
			{	/* Ast/remove.scm 219 */
				obj_t BgL_arg1489z00_2181;

				BgL_arg1489z00_2181 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2085)))->BgL_objz00));
				((((BgL_failz00_bglt) COBJECT(
								((BgL_failz00_bglt) BgL_nodez00_2085)))->BgL_objz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1489z00_2181)),
					BUNSPEC);
			}
			return ((obj_t) ((BgL_failz00_bglt) BgL_nodez00_2085));
		}

	}



/* &node-remove!-conditi1250 */
	obj_t BGl_z62nodezd2removez12zd2conditi1250z70zzast_removez00(obj_t
		BgL_envz00_2086, obj_t BgL_nodez00_2087)
	{
		{	/* Ast/remove.scm 207 */
			{	/* Ast/remove.scm 208 */
				obj_t BgL_arg1442z00_2183;

				BgL_arg1442z00_2183 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2087)))->BgL_testz00));
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2087)))->BgL_testz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1442z00_2183)),
					BUNSPEC);
			}
			{	/* Ast/remove.scm 209 */
				obj_t BgL_arg1449z00_2184;

				BgL_arg1449z00_2184 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2087)))->BgL_truez00));
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2087)))->BgL_truez00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1449z00_2184)),
					BUNSPEC);
			}
			{	/* Ast/remove.scm 210 */
				obj_t BgL_arg1462z00_2185;

				BgL_arg1462z00_2185 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2087)))->BgL_falsez00));
				((((BgL_conditionalz00_bglt) COBJECT(
								((BgL_conditionalz00_bglt) BgL_nodez00_2087)))->BgL_falsez00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1462z00_2185)),
					BUNSPEC);
			}
			return ((obj_t) ((BgL_conditionalz00_bglt) BgL_nodez00_2087));
		}

	}



/* &node-remove!-setq1248 */
	obj_t BGl_z62nodezd2removez12zd2setq1248z70zzast_removez00(obj_t
		BgL_envz00_2088, obj_t BgL_nodez00_2089)
	{
		{	/* Ast/remove.scm 200 */
			{	/* Ast/remove.scm 201 */
				obj_t BgL_arg1422z00_2187;

				BgL_arg1422z00_2187 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2089)))->BgL_valuez00));
				((((BgL_setqz00_bglt) COBJECT(
								((BgL_setqz00_bglt) BgL_nodez00_2089)))->BgL_valuez00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1422z00_2187)),
					BUNSPEC);
			}
			return ((obj_t) ((BgL_setqz00_bglt) BgL_nodez00_2089));
		}

	}



/* &node-remove!-cast1246 */
	obj_t BGl_z62nodezd2removez12zd2cast1246z70zzast_removez00(obj_t
		BgL_envz00_2090, obj_t BgL_nodez00_2091)
	{
		{	/* Ast/remove.scm 193 */
			{	/* Ast/remove.scm 194 */
				obj_t BgL_arg1418z00_2189;

				BgL_arg1418z00_2189 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2091)))->BgL_argz00));
				((((BgL_castz00_bglt) COBJECT(
								((BgL_castz00_bglt) BgL_nodez00_2091)))->BgL_argz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1418z00_2189)),
					BUNSPEC);
			}
			return ((obj_t) ((BgL_castz00_bglt) BgL_nodez00_2091));
		}

	}



/* &node-remove!-extern1244 */
	obj_t BGl_z62nodezd2removez12zd2extern1244z70zzast_removez00(obj_t
		BgL_envz00_2092, obj_t BgL_nodez00_2093)
	{
		{	/* Ast/remove.scm 186 */
			BGl_nodezd2removeza2z12z62zzast_removez00(
				(((BgL_externz00_bglt) COBJECT(
							((BgL_externz00_bglt) BgL_nodez00_2093)))->BgL_exprza2za2));
			return ((obj_t) ((BgL_externz00_bglt) BgL_nodez00_2093));
		}

	}



/* &node-remove!-funcall1242 */
	obj_t BGl_z62nodezd2removez12zd2funcall1242z70zzast_removez00(obj_t
		BgL_envz00_2094, obj_t BgL_nodez00_2095)
	{
		{	/* Ast/remove.scm 178 */
			{	/* Ast/remove.scm 179 */
				obj_t BgL_arg1388z00_2192;

				BgL_arg1388z00_2192 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2095)))->BgL_funz00));
				((((BgL_funcallz00_bglt) COBJECT(
								((BgL_funcallz00_bglt) BgL_nodez00_2095)))->BgL_funz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1388z00_2192)),
					BUNSPEC);
			}
			BGl_nodezd2removeza2z12z62zzast_removez00(
				(((BgL_funcallz00_bglt) COBJECT(
							((BgL_funcallz00_bglt) BgL_nodez00_2095)))->BgL_argsz00));
			return ((obj_t) ((BgL_funcallz00_bglt) BgL_nodez00_2095));
		}

	}



/* &node-remove!-app-ly1240 */
	obj_t BGl_z62nodezd2removez12zd2appzd2ly1240za2zzast_removez00(obj_t
		BgL_envz00_2096, obj_t BgL_nodez00_2097)
	{
		{	/* Ast/remove.scm 170 */
			{	/* Ast/remove.scm 171 */
				obj_t BgL_arg1384z00_2194;

				BgL_arg1384z00_2194 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2097)))->BgL_funz00));
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2097)))->BgL_funz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1384z00_2194)),
					BUNSPEC);
			}
			{	/* Ast/remove.scm 172 */
				obj_t BgL_arg1386z00_2195;

				BgL_arg1386z00_2195 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2097)))->BgL_argz00));
				((((BgL_appzd2lyzd2_bglt) COBJECT(
								((BgL_appzd2lyzd2_bglt) BgL_nodez00_2097)))->BgL_argz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1386z00_2195)),
					BUNSPEC);
			}
			return ((obj_t) ((BgL_appzd2lyzd2_bglt) BgL_nodez00_2097));
		}

	}



/* &node-remove!-app1238 */
	obj_t BGl_z62nodezd2removez12zd2app1238z70zzast_removez00(obj_t
		BgL_envz00_2098, obj_t BgL_nodez00_2099)
	{
		{	/* Ast/remove.scm 162 */
			{	/* Ast/remove.scm 163 */
				obj_t BgL_arg1381z00_2197;

				{	/* Ast/remove.scm 163 */
					BgL_varz00_bglt BgL_arg1382z00_2198;

					BgL_arg1382z00_2198 =
						(((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2099)))->BgL_funz00);
					BgL_arg1381z00_2197 =
						BGl_nodezd2removez12zc0zzast_removez00(
						((BgL_nodez00_bglt) BgL_arg1382z00_2198));
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt) BgL_nodez00_2099)))->BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_arg1381z00_2197)), BUNSPEC);
			}
			BGl_nodezd2removeza2z12z62zzast_removez00(
				(((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_nodez00_2099)))->BgL_argsz00));
			return ((obj_t) ((BgL_appz00_bglt) BgL_nodez00_2099));
		}

	}



/* &node-remove!-sync1236 */
	obj_t BGl_z62nodezd2removez12zd2sync1236z70zzast_removez00(obj_t
		BgL_envz00_2100, obj_t BgL_nodez00_2101)
	{
		{	/* Ast/remove.scm 153 */
			{	/* Ast/remove.scm 154 */
				obj_t BgL_arg1363z00_2200;

				BgL_arg1363z00_2200 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2101)))->BgL_mutexz00));
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2101)))->BgL_mutexz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1363z00_2200)),
					BUNSPEC);
			}
			{	/* Ast/remove.scm 155 */
				obj_t BgL_arg1367z00_2201;

				BgL_arg1367z00_2201 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2101)))->BgL_prelockz00));
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2101)))->BgL_prelockz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1367z00_2201)),
					BUNSPEC);
			}
			{	/* Ast/remove.scm 156 */
				obj_t BgL_arg1371z00_2202;

				BgL_arg1371z00_2202 =
					BGl_nodezd2removez12zc0zzast_removez00(
					(((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2101)))->BgL_bodyz00));
				((((BgL_syncz00_bglt) COBJECT(
								((BgL_syncz00_bglt) BgL_nodez00_2101)))->BgL_bodyz00) =
					((BgL_nodez00_bglt) ((BgL_nodez00_bglt) BgL_arg1371z00_2202)),
					BUNSPEC);
			}
			return ((obj_t) ((BgL_syncz00_bglt) BgL_nodez00_2101));
		}

	}



/* &node-remove!-sequenc1234 */
	obj_t BGl_z62nodezd2removez12zd2sequenc1234z70zzast_removez00(obj_t
		BgL_envz00_2102, obj_t BgL_nodez00_2103)
	{
		{	/* Ast/remove.scm 146 */
			BGl_nodezd2removeza2z12z62zzast_removez00(
				(((BgL_sequencez00_bglt) COBJECT(
							((BgL_sequencez00_bglt) BgL_nodez00_2103)))->BgL_nodesz00));
			return ((obj_t) ((BgL_sequencez00_bglt) BgL_nodez00_2103));
		}

	}



/* &node-remove!-kwote1232 */
	obj_t BGl_z62nodezd2removez12zd2kwote1232z70zzast_removez00(obj_t
		BgL_envz00_2104, obj_t BgL_nodez00_2105)
	{
		{	/* Ast/remove.scm 140 */
			return ((obj_t) ((BgL_kwotez00_bglt) BgL_nodez00_2105));
		}

	}



/* &node-remove!-var1230 */
	obj_t BGl_z62nodezd2removez12zd2var1230z70zzast_removez00(obj_t
		BgL_envz00_2106, obj_t BgL_nodez00_2107)
	{
		{	/* Ast/remove.scm 134 */
			return ((obj_t) ((BgL_varz00_bglt) BgL_nodez00_2107));
		}

	}



/* &node-remove!-atom1228 */
	obj_t BGl_z62nodezd2removez12zd2atom1228z70zzast_removez00(obj_t
		BgL_envz00_2108, obj_t BgL_nodez00_2109)
	{
		{	/* Ast/remove.scm 128 */
			return ((obj_t) ((BgL_atomz00_bglt) BgL_nodez00_2109));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_removez00()
	{
		{	/* Ast/remove.scm 16 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1900z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1900z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1900z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1900z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1900z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1900z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 460136356),
				BSTRING_TO_STRING(BGl_string1900z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1900z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 535161241),
				BSTRING_TO_STRING(BGl_string1900z00zzast_removez00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1900z00zzast_removez00));
		}

	}

#ifdef __cplusplus
}
#endif
